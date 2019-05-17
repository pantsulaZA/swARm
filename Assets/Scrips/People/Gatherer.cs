using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Gatherer: MonoBehaviour
{
    private int hunger;
    public bool IsHungry() {
        return hunger < 100;
    }

    internal void SetAnimation(string v)
    {
        animator.SetBool("isChopping", false);
        animator.SetBool("isChopping", false);
        animator.SetBool("isUnloading", false);
        animator.SetBool(v, true);
    }

    public List<GameObject> resources = new List<GameObject>();
    public GameObject destination;

    public bool IsAtDestination()
    {
        return agent.remainingDistance < 1;
    }

    public bool IsInvertoryFull()
    {
        return resources.Count > 0;
    }

    public House house;
    private NavMeshAgent agent;
    private Animator animator;
    private float chopTime = 5.0f;
    private float currentTimeChopped = 0.0f;
    [SerializeField] private PersonStateMachine fsm;
    [SerializeField] private int wood = 0;

    enum GathererState { Chopping, Idle, Walking, Unloading }

    // Start is called before the first frame update
    void Start()
    {
        agent = this.gameObject.GetComponent<NavMeshAgent>();
        animator = this.gameObject.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        switch (currentState)
        {
            case GathererState.Idle:
                if (wood == 0 && resources.Count > 0)
                {
                }
                break;
            case GathererState.Walking:
                else if (wood > 0 && agent.remainingDistance < 3)
                {
                    house.AddResouce(amount: wood);
                    wood = 0;
                    currentState = GathererState.Idle;
                }
                break;
            case GathererState.Chopping:
                if (currentTimeChopped > chopTime)
                {
                    wood += 1;
                    currentTimeChopped = 0;
                    agent.SetDestination(house.transform.position);
                    currentState = GathererState.Walking;
                    if (destination != null)
                    {
                        resources.Remove(destination);
                        Destroy(destination);
                    }
                    destination = house.gameObject;
                }
                else if (destination == null) {
                    currentState = GathererState.Idle;
                }
                else
                {
                    currentTimeChopped += Time.deltaTime;
                }
                break;

        }
    }

    public void GotoNearestResource() {
                     destination = null;
                    foreach (var tree in resources)
                    {
                        if ((destination == null) ||
                        (Vector3.Distance(transform.position, tree.transform.position) < Vector3.Distance(transform.position, destination.transform.position)))
                        {
                            destination = tree;
                            agent.SetDestination(destination.transform.position);
                        }
                    }

    }
}
