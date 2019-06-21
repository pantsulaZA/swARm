using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class WalkingState : BaseState
{
    private Person person;

    public WalkingState(Person person) : base(person.gameObject) {
        this.person = person;
        person.SetAnimation("IsWalking");
    }

    override public Type Tick() {
        if (person.IsAtDestination()) {
            if (person.IsInvertoryFull()) {
                person.Drop();
                person.GotoNearestResource();
                return typeof(IdleState);
            } else {
                person.StartAction(5);
                return typeof(ChoppingState);
            }
        }
        
        return typeof(WalkingState);
    }
}
