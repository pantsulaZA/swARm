using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PersonStateMachine : MonoBehaviour
{
    private Dictionary<Type, BaseState> availableStates;

    public BaseState currentState { get; private set; }

    public void SetStates(Dictionary<Type, BaseState> availableStates)
    {
        this.availableStates = availableStates;
    }

    void Update()
    {
        var nextState = currentState?.Tick();
        if (nextState != currentState.GetType())
        {
            SwitchToNextState(nextState);
        }
    }

    private void SwitchToNextState(Type newState)
    {
        currentState = availableStates[newState];

    }
}
