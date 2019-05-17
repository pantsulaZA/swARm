using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ChoppingState : BaseState
{
    private Gatherer person;

    public ChoppingState(Gatherer person) : base(person.gameObject) {
        this.person = person;
    }

    override public Type Tick() {
        if (person.IsInvertoryFull()) {
            return typeof(ChoppingState);
        }
        
        return typeof(ChoppingState);
    }
}
