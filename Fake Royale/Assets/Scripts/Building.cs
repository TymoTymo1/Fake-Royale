using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : Target
{

    // Building behavour that we will implement latorrrr


    public override void TargetStart()
    {
        attackPoint = transform.Find("AttackPoint").transform;
        model.AddTarget(this);
    }

    public override void Kill()
    {
        // TODO
    }
}
