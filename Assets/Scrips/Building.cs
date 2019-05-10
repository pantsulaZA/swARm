using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class Building : ScriptableObject
{
    [SerializeField]
    private int resouces = 0;
    [SerializeField]
    private int level = 0;
    [SerializeField]
    private List<GameObject> prefabs = new List<GameObject>();

    public void Reset() {
        resouces = 0;
        level = 0;
    }

    public void AddResouce(int amount)
    {
        resouces += 1;
        if (resouces > level * level * 3)
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
