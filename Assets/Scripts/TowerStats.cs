using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerStats : MonoBehaviour
{

    public float baseAttackSpeed;
    public float baseRange;
    public int baseDamage;
    public GameObject towerRangeCircle;
    public List<GameObject> enemyInRange = new List<GameObject>();
    [Space]
    public int rangePrice;
    public int speedPrice;
    public int damagePrice;
    [Space]

    [SerializeField]
    private float _currentAttackSpeed;
    [SerializeField]
    private float _currentRange;
    [SerializeField]
    private int _currentDamage;
    private GameObject target;
    private float _timer;

    
    void Start()
    {
        _currentAttackSpeed = baseAttackSpeed;
        _currentRange = baseRange;
        _currentDamage = baseDamage;
    }

    void Update()
    {
        towerRangeCircle.transform.localScale = new Vector3(_currentRange,1f,_currentRange);
        if (enemyInRange.Count != 0)
        {
            target = enemyInRange[0];
        }
        else
        {
            target = null;
        }
        if (target != null)
        {
            _timer += Time.deltaTime;
            if (_timer >= 1 / _currentAttackSpeed)
            {
                _timer = 0f;
                target.GetComponent<EnemyScript>().GetDamaged(_currentDamage);
            }
        }
    }

    public void UpAttackSpeed()
    {
        if (PlayerDataScript.singleton.money >= speedPrice)
        {
            PlayerDataScript.singleton.money -= speedPrice;
            _currentAttackSpeed += (baseAttackSpeed * .1f);
            
        }
    }

    public void UpRange()
    {
        if (PlayerDataScript.singleton.money >= rangePrice)
        {
            PlayerDataScript.singleton.money -= rangePrice;
            _currentRange += .5f;
        }
    }

    public void UpDamage()
    {
        if (PlayerDataScript.singleton.money >= damagePrice)
        {
            PlayerDataScript.singleton.money -= damagePrice;
            _currentDamage += 1;
        }
    }
}
