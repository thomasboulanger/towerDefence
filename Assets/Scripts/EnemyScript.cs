using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

public class EnemyScript : MonoBehaviour
{
    public int hp = 5;
    public static List<GameObject> Enemys = new List<GameObject>();
    public EnemyHp enemyHp;
    public Slider slider;


    private Vector3 _destination;
    private NavMeshAgent _navMesh;
    private bool _dead;
    private Shader _shader;
    private static float _getDissolveVector;
    
    void Start()
    {
        enemyHp = new EnemyHp(hp);
        Enemys.Add(this.gameObject);
        _destination = GameObject.FindWithTag("Goal").transform.position;
        /*foreach (GameObject goal in GameObject.FindGameObjectsWithTag("Goal"))
        {
            Goals.Add(goal);
        }
        _navMesh = GetComponent<NavMeshAgent>();
        _destination = _navMesh.destination(Goals[0].transform.position);*/
        _navMesh = GetComponent<NavMeshAgent>();
        _dead = false;
        slider.maxValue = hp;
        slider.minValue = 0f;
    }

     void Update()
    {
        slider.value = enemyHp.Hp;
        Shader.SetGlobalFloat("dissolveFloat", _getDissolveVector);

        if (!_dead)
        {
            //definir dinamiquement la destination
            _navMesh.destination = _destination;
        }

        //si l'ennemi meurt :
        if (enemyHp.Zero)
        {
            try
            {
                foreach (GameObject tower in TowerScript.towers)
                {
                    foreach (GameObject enemy in tower.GetComponent<TowerStats>().enemyInRange)
                    {
                        if (enemy == this.gameObject)
                        {
                            tower.GetComponent<TowerStats>().enemyInRange.Remove(enemy);
                        }
                    }
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw;
            }
            Destroy(this.gameObject);
            _dead = true;
        }

        /*if (_dead)
        {
            _navMesh.destination = transform.position;
            _getDissolveVector += Time.deltaTime;
            if (_getDissolveVector >= 1f)
            {
                Destroy(this.gameObject);
            }
        }*/
    }

    public void GetDamaged(int damageValue)
    {
        enemyHp.Hp -= damageValue;
    }
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Goal"))
        {
            _dead = true;
            //provisoire : 
            enemyHp.Zero = true;
            other.GetComponent<GoalScript>().DamageReceived();
        }
    }
    private void OnDestroy()
    {
        PlayerDataScript.singleton.money += 10;
        Enemys.Remove(this.gameObject);
    }
}

public class EnemyHp
{
    public bool Zero { get; set; }
    private int _hp;

    public int Hp
    {
        get { return _hp; }
        set
        {
            _hp = value;
            if (_hp <= 0)
            {
                Zero = true;
                _hp = 0;
            }
        }
    }

    public EnemyHp(int hp)
    {
        _hp = hp;
    }
}