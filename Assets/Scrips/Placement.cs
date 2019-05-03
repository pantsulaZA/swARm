using System.Collections;
using System.Collections.Generic;
using System.IO;
using Unity.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;
using UnityEngine.AI;
using NavMeshBuilder = UnityEngine.AI.NavMeshBuilder;
#if UNITY_IOS
// using UnityEngine.XR.ARKit;
#endif
public class Placement : MonoBehaviour
{
    public GameObject placementIndicator;
    public NavBuilder nav;
    public ARPlaneManager arMan;
    public Gatherer gatherer;
    public House storage;
    private ARSessionOrigin arOrigin;
    private Pose placementPose;
    private string path;
    private bool placementPoseIsValid = false;
    public List<GameObject> objectsToPlace;
    private bool canPlaceObject;
    private List<GameObject> trees;

    void Start()
    {
        arOrigin = FindObjectOfType<ARSessionOrigin>();
        path = Path.Combine(Application.persistentDataPath, "my_session.worldmap");
    }

    void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();
    }

    public void PlaceObject(int index)
    {
        if (canPlaceObject)
        {
            switch (index)
            {
                case 0:
                    GameObject newObject = Instantiate(objectsToPlace.ToArray()[index], placementPose.position, placementPose.rotation);
                    if (gatherer != null)
                    {
                        gatherer.resource = newObject.transform;
                    }
                    break;
                case 1:
                    if (gatherer == null)
                    {
                        GameObject man = Instantiate(objectsToPlace.ToArray()[index], placementPose.position, placementPose.rotation);
                        gatherer = man.GetComponent<Gatherer>();
                    }
                    break;
                case 2:
                    if (storage == null)
                    {
                   //     storage = Instantiate(objectsToPlace.ToArray()[index], placementPose.position, placementPose.rotation);
                    }
                    break;
                default:
                    break;
            }
        }
    }

    private void UpdatePlacementIndicator()
    {
        if (placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
        }
        else
        {
            placementIndicator.SetActive(false);
        }
    }
    private void UpdatePlacementPose()
    {
        var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        arOrigin.Raycast(screenCenter, hits, TrackableType.PlaneWithinBounds);

        placementPoseIsValid = hits.Count > 0;

        if (placementPoseIsValid)
        {
            nav.AddPlane(arMan.TryGetPlane(hits[0].trackableId).GetComponent<NavMeshSurface>());
            placementPose = hits[0].pose;
            placementPose.position.y += 0.1f;
            var cameraForward = Camera.current.transform.forward;
            var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
            placementPose.rotation = Quaternion.LookRotation(cameraBearing);
            if (arOrigin.GetComponent<ARPlaneManager>().TryGetPlane(hits[0].trackableId).boundedPlane.Alignment != PlaneAlignment.Vertical)
            {
                canPlaceObject = true;
            }
            else
            {
                canPlaceObject = false;
            }
        }
    }

    // IEnumerator SaveWorld()
    // {
    //     var sessionSubsystem = ARSubsystemManager.sessionSubsystem;
    //     if (sessionSubsystem == null)
    //     {
    //         yield break;
    //     }

    //     var request = sessionSubsystem.GetARWorldMapAsync();

    //     while (!request.status.IsDone())
    //         yield return null;

    //     if (request.status.IsError())
    //     {
    //         yield break;
    //     }

    //     var worldMap = request.GetWorldMap();
    //     request.Dispose();

    //     SaveAndDisposeWorldMap(worldMap);
    // }

    // IEnumerator LoadWorld()
    // {
    //     var sessionSubsystem = ARSubsystemManager.sessionSubsystem;
    //     if (sessionSubsystem == null)
    //     {
    //         yield break;
    //     }

    //     var file = File.Open(path, FileMode.Open);
    //     if (file == null)
    //     {
    //         yield break;
    //     }


    //     int bytesPerFrame = 1024 * 10;
    //     var bytesRemaining = file.Length;
    //     var binaryReader = new BinaryReader(file);
    //     var allBytes = new List<byte>();
    //     while (bytesRemaining > 0)
    //     {
    //         var bytes = binaryReader.ReadBytes(bytesPerFrame);
    //         allBytes.AddRange(bytes);
    //         bytesRemaining -= bytesPerFrame;
    //         yield return null;
    //     }

    //     var data = new NativeArray<byte>(allBytes.Count, Allocator.Temp);
    //     data.CopyFrom(allBytes.ToArray());

    //     ARWorldMap worldMap;
    //     if (ARWorldMap.TryDeserialize(data, out worldMap))
    //         data.Dispose();

    //     if (worldMap.valid)
    //     {
    //     }
    //     else
    //     {
    //         Debug.LogError("Data is not a valid ARWorldMap.");
    //         yield break;
    //     }

    //     sessionSubsystem.ApplyWorldMap(worldMap);
    // }

    // void SaveAndDisposeWorldMap(ARWorldMap worldMap)
    // {
    //     var data = worldMap.Serialize(Allocator.Temp);

    //     var file = File.Open(path, FileMode.Create);
    //     var writer = new BinaryWriter(file);
    //     writer.Write(data.ToArray());
    //     writer.Close();
    //     data.Dispose();
    //     worldMap.Dispose();
    // }
}