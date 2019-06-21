using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Person : MonoBehaviour
{

    public List<GameObject> resources = new List<GameObject>();
    private GameObject destination;
    public House house;
    private NavMeshAgent agent;
    private Animator animator;
    [SerializeField] private float actionTime = 5.0f;
    [SerializeField] private float currentActionTimeactionTimePassed = 0.0f;
    [SerializeField] private PersonStateMachine fsm;
    [SerializeField] private GameObject housePrefab;
    [SerializeField] private int inventory = 0;

    enum GathererState { Chopping, Idle, Walking, Unloading }

    void Awake()
    {
        SetupStateMachine();
        Debug.Log("RISE");
    }

    void Start()
    {
        agent = this.gameObject.GetComponent<NavMeshAgent>();
        animator = this.gameObject.GetComponent<Animator>();
    }

    void Update()
    {
        currentActionTimeactionTimePassed += Time.deltaTime;
    }

    internal void SetAnimation(string v)
    {
        animator?.SetBool("isChopping", false);
        animator?.SetBool("isChopping", false);
        animator?.SetBool("isUnloading", false);
        animator?.SetBool(v, true);
    }

    public void StartAction(float time)
    {
        currentActionTimeactionTimePassed = 0;
        actionTime = time;
    }

    public bool isActionDone()
    {
        if (currentActionTimeactionTimePassed > actionTime)
        {
            resources.Remove(destination);
            Destroy(destination);
            return true;
        }
        else
        {
            return false;
        }
    }

    public void Pickup(int amount)
    {
        inventory += amount;
    }

    public void Drop()
    {
        house.AddResouce(inventory);
        inventory = 0;
        destination = null;
    }

    void SetupStateMachine()
    {
        var states = new Dictionary<Type, BaseState>()
        {
            { typeof(IdleState), new IdleState(this) },
            { typeof(WalkingState), new WalkingState(this) },
            { typeof(ChoppingState), new ChoppingState(this) }
        };

        GetComponent<PersonStateMachine>().SetStates(states, new IdleState(this));
    }

    public void GotoNearestResource()
    {
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

    public void GoHome()
    {
        Debug.Log("going home : " + house?.gameObject);
        if (house == null)
        {
            house = Instantiate(original: housePrefab, position: transform.position, rotation: Quaternion.identity).GetComponent<House>();
            house.Reset();
            Debug.Log("Building home : " + house.gameObject);
        }
        else
        {
            Debug.Log("Going home");
            destination = house.gameObject;
            agent.SetDestination(destination.transform.position);
        }
    }
    public bool IsAtDestination()
    {
        return agent.remainingDistance < 2;
    }

    public bool IsInvertoryFull()
    {
        return inventory > 0;
    }
}
