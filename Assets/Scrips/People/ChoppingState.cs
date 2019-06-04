using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ChoppingState : BaseState
{
    private Gatherer person;

    public ChoppingState(Gatherer person) : base(person.gameObject) {
        this.person = person;
        person.SetAnimation("IsChopping");
    }

    override public Type Tick() {
        if (person.DoneChopping()) {
            person.Pickup(1);
            person.GoHome();
            return typeof(WalkingState);
        }
        
        return typeof(ChoppingState);
    }
}
