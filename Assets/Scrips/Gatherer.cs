using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Gatherer : MonoBehaviour
{
    public Transform resource;
    public House storage;
    private NavMeshAgent agent;
    private Animator animator;
    private float chopTime = 5.0f;
    private float currentTimeChopped = 0.0f;
    private GathererState currentState = GathererState.Idle;
    private int wood = 0;

    enum GathererState { Chopping, Idle, Walking, Unloading }

    // Start is called before the first frame update
    void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        agent.SetDestination(resource.position);
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        switch (currentState)
        {
            case GathererState.Idle:
                if (agent.velocity.magnitude > 0.2)
                {
                    currentState = GathererState.Walking;
                } 
                break;
            case GathererState.Walking:
                if (agent.remainingDistance < 2)
                {
                    if (wood < 1) {
                        currentState = GathererState.Chopping;
                    } else {
                        storage.AddResouce(amount: wood);
                        wood = 0;
                        agent.SetDestination(resource.position);
                    }
                }
                break;
            case GathererState.Chopping:
                if (currentTimeChopped > chopTime)
                {
                    // currentState = GathererState.Walking;
                    wood += 1;
                    currentTimeChopped = 0;
                    agent.SetDestination(storage.transform.position);
                    currentState = GathererState.Walking;
                }
                else
                {
                    currentTimeChopped += Time.deltaTime;
                }
                break;

        }
        animator.SetBool("isWalking", currentState == GathererState.Walking);
        animator.SetBool("isChopping", currentState == GathererState.Chopping);
        animator.SetBool("isUnloading", currentState == GathererState.Unloading);

    }
}
