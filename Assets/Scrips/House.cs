using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class House : MonoBehaviour
{
    public Building building;
    private GameObject currentPrefab;

    void Start()
    {
        UpdatePrefab();
    }
    public void AddResouce(int amount)
    {
        building.AddResouce(amount: amount);
        UpdatePrefab();
    }

    void UpdatePrefab()
    {
        Destroy(currentPrefab);
        currentPrefab = Instantiate(building.GetPrefab(), position: transform.position, rotation: transform.rotation);
        currentPrefab.transform.localScale = new Vector3(x: 10, y: 10, z: 10);
    }
}

[CreateAssetMenu]
public class Building : ScriptableObject
{
    [SerializeField]
    private int resouces = 0;
    [SerializeField]
    private int level = 0;
    [SerializeField]
    private List<GameObject> prefabs;

    public void AddResouce(int amount)
    {
        resouces += 1;
        if (resouces > level)
        {
            level += 1;
            if (level == prefabs.Count)
            {
                level = 0;
            }
        }
    }

    public GameObject GetPrefab()
    {
        return prefabs[level < prefabs.Count - 1 ? level : prefabs.Count - 1];
    }
}