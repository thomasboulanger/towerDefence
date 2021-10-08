using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyScript : MonoBehaviour
{
    public static List<GameObject> Enemys = new List<GameObject>();

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
        _navMesh.destination = _destination;
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
