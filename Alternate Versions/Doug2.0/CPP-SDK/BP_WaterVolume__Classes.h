// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class BP_WaterVolume_Large_C: public BP_WaterVolume_C
{
public:
};


// Size 0x34
class BP_WaterVolume_Optimized_C: public WaterVolume
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x450(0x8)
	Class StaticMeshComponent*                                   WaterPlaneActivatationVolume;                      // 0x458(0x8)
	Class FlatWaterPlaneComponent*                               FlatWaterPlane;                                    // 0x460(0x8)
	Class FlatWaterMeshComponent*                                FlatWaterMesh;                                     // 0x468(0x8)
	Class SceneComponent*                                        Root;                                              // 0x470(0x8)
	bool                                                         SunLit;                                            // 0x478(0x1)
	struct FName                                                 RippleGeneratorTag;                                // 0x47c(0x8)
};


// Size 0x0
class BP_WaterVolume_WSP_Ext1_C: public BP_WaterVolume_Optimized_C
{
public:
};


}