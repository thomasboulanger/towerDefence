using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyScript : MonoBehaviour
{
    public static int hp = 10;
    public static List<GameObject> Enemys = new List<GameObject>();
    public EnemyHp enemyHp = new EnemyHp(hp);

    private Vector3 _destination;
    private NavMeshAgent _navMesh;
    void Start()
    {
        Enemys.Add(this.gameObject);
        _destination = GameObject.FindWithTag("Goal").transform.position;
        _navMesh = GetComponent<NavMeshAgent>();
    }

    void Update()
    {
        //definir dinamiquement la destination
        _navMesh.destination = _destination;
        if (enemyHp.Dead)
        {
            Destroy(this.gameObject);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Goal")
        {
            Destroy(this.gameObject);
            other.GetComponent<GoalScript>().DamageReceived();
        }
    }
    private void OnDestroy()
    {
        Enemys.Remove(this.gameObject);
    }
}

public class EnemyHp
{
    public bool Dead { get; set; }
    private int _hp;

    public int Hp
    {
        get { return _hp; }
        set
        {
            _hp = value;
            if (_hp <= 0)
            {
                Dead = true;
                _hp = 0;
            }
        }
    }

    public EnemyHp(int hp)
    {
        _hp = hp;
    }
}