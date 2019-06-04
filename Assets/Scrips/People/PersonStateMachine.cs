using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PersonStateMachine : MonoBehaviour
{
    public BaseState currentState { get; private set; }
    private Dictionary<Type, BaseState> availableStates;

    public void SetStates(Dictionary<Type, BaseState> availableStates, BaseState currentState)
    {
        this.availableStates = availableStates;
        this.currentState = currentState;
    }

    void Update()
    {
        var nextState = currentState?.Tick();
        if (nextState != currentState?.GetType())
        {
            SwitchToNextState(nextState);
        }
    }

    private void SwitchToNextState(Type newState)
    {
        Debug.Log("Switching to state : " + newState);
        currentState = availableStates[newState];

    }
}
