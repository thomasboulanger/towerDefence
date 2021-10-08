using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;

public class GoalScript : MonoBehaviour
{
    public static int hp = 100;
    public Goal currentGoal = new Goal(hp);

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
        Debug.Log(currentGoal.Hp);
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
