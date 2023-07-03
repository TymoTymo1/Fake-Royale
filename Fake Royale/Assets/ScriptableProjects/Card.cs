using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="New Card", menuName ="Cards/Create")]
public class Card : ScriptableObject
{
    [Header("General Information for UI")]
    public string name;
    public string description;
    public Sprite icon;
    public int rarity;
    public int elexCost;

    [Header("// Information about damage: attack[0] means damage for level 1")]
    [Tooltip("// Information about damage: attack[0] means damage for level 1")]
    public int[] attack = new int[9];
    public int level;

    [Header("// Gameobject that's going to fight in the arena")]
    public GameObject fighter;

    public float attackRange;
}
