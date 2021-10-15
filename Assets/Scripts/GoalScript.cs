using System;
using System.Collections.Generic;
using UnityEngine;

public class GoalScript : MonoBehaviour
{
    public static int hp = 100;
    public static Goal currentGoal = new Goal(hp);
    public static List<GameObject> Goals = new List<GameObject>();

    private void Awake()
    {
        foreach (GameObject goal in GameObject.FindGameObjectsWithTag("Goal"))
        {
            Goals.Add(goal.gameObject);
        }
    }

    void Update()
    {
        if (currentGoal.lose)
        {
            Debug.Log("u lose");
        }
    }

    public void DamageReceived()
    {
        currentGoal.Hp--;
    }
}
public class Goal
{
    public bool lose { get; set; }
    private int _hp;

    public int Hp
    {
        get { return _hp; }
        set
        {
            _hp = value;
            if (_hp <= 0)
            {
                lose = true;
                _hp = 0;
            }
        }
    }

    public Goal(int hp)
    {
        _hp = hp;
    }
}
