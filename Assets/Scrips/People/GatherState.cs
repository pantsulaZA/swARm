using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class GatherState : BaseState
{
    private Gatherer person;

    public GatherState(Gatherer person) : base(person.gameObject) {
        this.person = person;
        person.SetAnimation("IsWalking");
    }

    override public Type Tick() {
        if (person.IsAtDestination()) {
            return typeof(ChoppingState);
        }
        
        return typeof(ChoppingState);
    }
}
