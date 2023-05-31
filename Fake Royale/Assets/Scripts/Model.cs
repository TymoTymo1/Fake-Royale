using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Model : MonoBehaviour
{
    public Tower[] towers;
    public List<GameObject> team1Cards;
    public List<GameObject> team2Cards;

    public void TakeDamage(int id, float damage)
    {
        towers[id].TakeDamage(damage);
    }
}
