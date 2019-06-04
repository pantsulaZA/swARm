using System;
using UnityEngine;

public class IdleState: BaseState {

    private Gatherer person;

    public IdleState(Gatherer person) : base(person.gameObject) {
        this.person = person;
        person.SetAnimation("isWalking");
    }

    override public Type Tick() {
        if (!person.IsInvertoryFull()) {
            person.GotoNearestResource();
            return typeof(WalkingState);
        }
        
        return typeof(IdleState);
    }
}