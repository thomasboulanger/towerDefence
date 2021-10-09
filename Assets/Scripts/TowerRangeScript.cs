using System;
using UnityEngine;

public class TowerRangeScript : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Enemy"))
        {
            transform.parent.GetComponent<TowerStats>().enemyInRange.Add(other.gameObject);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Enemy"))
        {
            transform.parent.GetComponent<TowerStats>().enemyInRange.Remove(other.gameObject);
        }
    }
}
