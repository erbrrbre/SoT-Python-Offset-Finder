// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
struct WwiseEmitter
{
public:
};


// Size 0x28
struct WwiseEmitterCreationParams
{
public:
	Class WwiseEvent*                                            Event;                                             // 0x0(0x8)
	TArray<Struct WWiseEmitterCreationRTPCSetting>               RTPCs;                                             // 0x8(0x10)
	TArray<Struct WWiseEmitterCreationSwitchSetting>             Switches;                                          // 0x18(0x10)
};


// Size 0x10
struct WWiseEmitterCreationSwitchSetting
{
public:
	struct FName                                                 SwitchGroup;                                       // 0x0(0x8)
	struct FName                                                 SwitchValue;                                       // 0x8(0x8)
};


// Size 0xc
struct WWiseEmitterCreationRTPCSetting
{
public:
	struct FName                                                 RTPCName;                                          // 0x0(0x8)
	float                                                        RTPCValue;                                         // 0x8(0x4)
};


// Size 0x20
struct EventToComponentMapping
{
public:
	Class WwiseEvent*                                            PlayEvent;                                         // 0x0(0x8)
	Class WwiseEvent*                                            StopEvent;                                         // 0x8(0x8)
	TArray<class WwiseEmitterComponents*>                        WwiseEmitterComponents;                            // 0x10(0x10)
};


// Size 0x20
struct StaticMeshAudioAssociation
{
public:
	TArray<Struct StaticMeshWwiseEmitterData>                    PlaybackDataArray;                                 // 0x0(0x10)
	TArray<class Meshes*>                                        Meshes;                                            // 0x10(0x10)
};


// Size 0x38
struct StaticMeshWwiseEmitterData
{
public:
	Class WwiseObjectPoolWrapper*                                Pool;                                              // 0x0(0x8)
	Struct Vector                                                LocalOriginOffset;                                 // 0x8(0xc)
	TArray<class StartEvents*>                                   StartEvents;                                       // 0x18(0x10)
	TArray<class StopEvents*>                                    StopEvents;                                        // 0x28(0x10)
};


// Size 0x68
struct StaticMeshComponentAudioAssociation
{
public:
	Struct StaticMeshWwiseEmitterData                            PlaybackData;                                      // 0x0(0x38)
	Struct Vector                                                EmitterPositionRelativeToComponentOrigin;          // 0x38(0xc)
};


}