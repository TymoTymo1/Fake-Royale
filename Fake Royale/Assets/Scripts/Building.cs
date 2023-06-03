using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : Target
{

    // Building behavour that we will implement latorrrr


    public override void TargetStart()
    {
        attackPoint = GameObject.Find("AttackPoint").transform;
        Debug.Log(attackPoint.position);
        model.AddTarget(this);
    }
}
