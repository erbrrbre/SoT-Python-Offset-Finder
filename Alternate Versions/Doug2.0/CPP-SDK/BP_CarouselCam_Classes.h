// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28d
class BP_CarouselCam_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3d0(0x8)
	Class DecalComponent*                                        lockedIcon07;                                      // 0x3d8(0x8)
	Class DecalComponent*                                        lockedIcon06;                                      // 0x3e0(0x8)
	Class DecalComponent*                                        lockedIcon05;                                      // 0x3e8(0x8)
	Class DecalComponent*                                        lockedIcon04;                                      // 0x3f0(0x8)
	Class DecalComponent*                                        lockedIcon03;                                      // 0x3f8(0x8)
	Class DecalComponent*                                        lockedIcon02;                                      // 0x400(0x8)
	Class DecalComponent*                                        lockedIcon01;                                      // 0x408(0x8)
	Class DecalComponent*                                        lockedIcon00;                                      // 0x410(0x8)
	Class SpotLightComponent*                                    charLight_floor_Select_SpotL;                      // 0x418(0x8)
	Class SpotLightComponent*                                    charLight_rear_Select_SpotL;                       // 0x420(0x8)
	Class SpotLightComponent*                                    charLight_left_Select_SpotL;                       // 0x428(0x8)
	Class SpotLightComponent*                                    charLight_right_Select_SpotL;                      // 0x430(0x8)
	Class SpotLightComponent*                                    charLight_right_Far_SpotL;                         // 0x438(0x8)
	Class SpotLightComponent*                                    charLight_rear_Far_SpotL;                          // 0x440(0x8)
	Class SpotLightComponent*                                    charLight_floor_Far_SpotL;                         // 0x448(0x8)
	Class SpotLightComponent*                                    charLight_left_Far_SpotL;                          // 0x450(0x8)
	Class SpotLightComponent*                                    charLight_floor_HighL_SpotL;                       // 0x458(0x8)
	Class SpotLightComponent*                                    charLight_rear_HighL_SpotL;                        // 0x460(0x8)
	Class SpotLightComponent*                                    charLight_left_HighL_SpotL;                        // 0x468(0x8)
	Class SpotLightComponent*                                    charLight_right_HighL_SpotL;                       // 0x470(0x8)
	Class SceneComponent*                                        Lights;                                            // 0x478(0x8)
	Class CameraComponent*                                       Camera;                                            // 0x480(0x8)
	Class StaticMeshComponent*                                    camAim;                                           // 0x488(0x8)
	Class SceneComponent*                                        DefaultSceneRoot;                                  // 0x490(0x8)
	Struct Rotator                                               camAimRot;                                         // 0x498(0xc)
	Class CurveFloat*                                            camSpeed;                                          // 0x4a8(0x8)
	float                                                        initTime;                                          // 0x4b0(0x4)
	float                                                        Timespan;                                          // 0x4b4(0x4)
	float                                                        currTime;                                          // 0x4b8(0x4)
	float                                                        camAimRotZ;                                        // 0x4bc(0x4)
	float                                                        rotPerChar;                                        // 0x4c0(0x4)
	float                                                        MaxTimeSpan;                                       // 0x4c4(0x4)
	float                                                        rotOverTime;                                       // 0x4c8(0x4)
	bool                                                         rotMatch;                                          // 0x4cc(0x1)
	Class CurveFloat*                                            camZoom;                                           // 0x4d0(0x8)
	float                                                        selectedZoomDist;                                  // 0x4d8(0x4)
	float                                                        zoomResult;                                        // 0x4dc(0x4)
	Struct Vector                                                initCamLoc;                                        // 0x4e0(0xc)
	float                                                        startZoomDist;                                     // 0x4ec(0x4)
	float                                                        camAimRot;                                         // 0x4f0(0x4)
	float                                                        camAimRot_delta;                                   // 0x4f4(0x4)
	float                                                        camRotationFactor;                                 // 0x4f8(0x4)
	float                                                        rotPerChar_userSet;                                // 0x4fc(0x4)
	float                                                        endZoomDist;                                       // 0x500(0x4)
	float                                                        highlightZoomDist;                                 // 0x504(0x4)
	float                                                        IdleTime;                                          // 0x508(0x4)
	float                                                        MaxIdleTime;                                       // 0x50c(0x4)
	bool                                                         idleStatus;                                        // 0x510(0x1)
	int                                                          sectorID;                                          // 0x514(0x4)
	float                                                        sectorOffset;                                      // 0x518(0x4)
	int                                                          lightFadeScale;                                    // 0x51c(0x4)
	TArray<class highLLightSet*>                                 highLLightSet;                                     // 0x520(0x10)
	TArray<Float highLLightIntensity>                            highLLightIntensity;                               // 0x530(0x10)
	TArray<class selectLightSet*>                                selectLightSet;                                    // 0x540(0x10)
	TArray<Float selectLightIntensity>                           selectLightIntensity;                              // 0x550(0x10)
	float                                                        LightIntensity;                                    // 0x560(0x4)
	float                                                        sectorRemainder;                                   // 0x564(0x4)
	int                                                          lastSectorID;                                      // 0x568(0x4)
	Class CurveFloat*                                            lightFade;                                         // 0x570(0x8)
	bool                                                         rotSnapDone;                                       // 0x578(0x1)
	Class CurveFloat*                                            HighLight_camFOV;                                  // 0x580(0x8)
	Class CurveVector*                                           HighLight_camRot;                                  // 0x588(0x8)
	Class CurveVector*                                           HighLight_camLoc;                                  // 0x590(0x8)
	float                                                        highlightZoomHeight;                               // 0x598(0x4)
	float                                                        ZoomTime;                                          // 0x59c(0x4)
	Class CurveVector*                                           select_camZoomRot;                                 // 0x5a0(0x8)
	Class CurveFloat*                                            Select_camZoomFOV;                                 // 0x5a8(0x8)
	Class CurveVector*                                           select_camZoomLoc;                                 // 0x5b0(0x8)
	Class CurveVector*                                           camRot;                                            // 0x5b8(0x8)
	Class CurveVector*                                           CamLoc;                                            // 0x5c0(0x8)
	Class CurveFloat*                                            camFOV;                                            // 0x5c8(0x8)
	Struct Vector                                                currCamLoc;                                        // 0x5d0(0xc)
	float                                                        camRotSnapFactor;                                  // 0x5dc(0x4)
	TArray<class lockIcons*>                                     lockIcons;                                         // 0x5e0(0x10)
	Class MaterialInstance*                                      MI_lockIcon;                                       // 0x5f0(0x8)
	Class MaterialInstanceDynamic*                               DM_lockIcon00;                                     // 0x5f8(0x8)
	Class MaterialInstanceDynamic*                               DM_lockIcon01;                                     // 0x600(0x8)
	Class MaterialInstanceDynamic*                               DM_lockIcon02;                                     // 0x608(0x8)
	Class MaterialInstanceDynamic*                               DM_lockIcon03;                                     // 0x610(0x8)
	Class MaterialInstanceDynamic*                               DM_lockIcon04;                                     // 0x618(0x8)
	Class MaterialInstanceDynamic*                               DM_lockIcon05;                                     // 0x620(0x8)
	Class MaterialInstanceDynamic*                               DM_lockIcon06;                                     // 0x628(0x8)
	Class MaterialInstanceDynamic*                               DM_lockIcon07;                                     // 0x630(0x8)
	TArray<class DM_lockIcon_Set*>                               DM_lockIcon_Set;                                   // 0x638(0x10)
	Struct LinearColor                                           RGB;                                               // 0x648(0x10)
	float                                                        maxLockIconOpacity;                                // 0x658(0x4)
	bool                                                         IconFadeDone;                                      // 0x65c(0x1)
};


}