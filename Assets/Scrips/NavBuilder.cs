using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.XR.ARFoundation;

public class NavBuilder : MonoBehaviour
{

    public ARPlaneManager arPlane;
    public List<NavMeshSurface> surfaces;

    void Update()
    {
        for (int i = 0; i < surfaces.Count; i++)
        {
            surfaces[i].BuildNavMesh();
        }
    }

    public void AddPlane(NavMeshSurface surface)
    {
        surfaces.Add(surface);
    }
}
