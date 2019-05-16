using System;
using UnityEngine;

public class IdleState: BaseState {

    private Gatherer person;

    public IdleState(Gatherer person) : base(person.gameObject) {
        this.person = person;
    }

    override public Type Tick() {
        if (person.resources.Count == 0) {
            return typeof(GatheringState)
        }
        
        return typeof(IdleState);
    }
}