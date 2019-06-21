using System;
using UnityEngine;

public class BuildingState : BaseState
{
    private Person person;

    public BuildingState(Person person) : base(person.gameObject)
    {
        this.person = person;
        person.SetAnimation("isChopping");
    }

    override public Type Tick()
    {
        if (person.isActionDone()) {
            return typeof(IdleState);
        } else {
            return typeof(BuildingState);
        }
    }
}
