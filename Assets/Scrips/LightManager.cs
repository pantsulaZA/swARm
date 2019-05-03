using System;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(Light))]
public class LightManager : MonoBehaviour
{
    private Light l;
    // Start is called before the first frame update
    void Start()
    {
        l = GetComponent<Light>();
        ARSubsystemManager.cameraFrameReceived += OnCameraFrameReceived;
    }

      void OnCameraFrameReceived (ARCameraFrameEventArgs eventArgs)
    {
        l.intensity = eventArgs.lightEstimation.averageBrightness.Value;
        l.colorTemperature = eventArgs.lightEstimation.averageColorTemperature.Value;
    }

    void OnDisable ()
    {
        ARSubsystemManager.cameraFrameReceived -= OnCameraFrameReceived;
    }
}
