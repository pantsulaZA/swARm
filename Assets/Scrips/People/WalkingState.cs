using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class WalkingState : BaseState
{
    private Gatherer person;

    public WalkingState(Gatherer person) : base(person.gameObject) {
        this.person = person;
        person.SetAnimation("IsWalking");
    }

    override public Type Tick() {
        if (person.IsAtDestination()) {
            if (person.IsInvertoryFull()) {
                person.Drop();
                return typeof(IdleState);
            } else {
                person.StartChopping();
                return typeof(ChoppingState);
            }
        }
        
        return typeof(WalkingState);
    }
}
