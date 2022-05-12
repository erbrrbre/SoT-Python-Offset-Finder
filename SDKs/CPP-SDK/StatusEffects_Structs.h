// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct Status
{
public:
	TArray<Class Type>                                           Type;                                              // 0x0(0x10)
	Struct StatusDescriptor                                      Descriptor;                                        // 0x10(0x4)
};


// Size 0x4
struct StatusDescriptor
{
public:
	float                                                        Intensity;                                         // 0x0(0x4)
};


// Size 0x20
struct DebugMenuStatusDefinition
{
public:
	struct FName                                                 Identifier;                                        // 0x0(0x8)
	Struct Status                                                Status;                                            // 0x8(0x18)
};


// Size 0x20
struct DelayedStatusEffect
{
public:
	Struct Status                                                StatusEffect;                                      // 0x0(0x18)
	float                                                        InEffectTime;                                      // 0x18(0x4)
};


// Size 0x50
struct ActiveStatusEffect
{
public:
	TArray<Class SourceStatus>                                   SourceStatus;                                      // 0x0(0x10)
	Struct StatusDescriptor                                      Descriptor;                                        // 0x10(0x4)
	TArray<class ResponseTemplates*>                             ResponseTemplates;                                 // 0x18(0x10)
	TArray<class InstancedResponses*>                            InstancedResponses;                                // 0x28(0x10)
	bool                                                         ResponsesAreActive;                                // 0x38(0x1)
};


// Size 0x18
struct FeatureToggledStatusResponseList
{
public:
	struct FName                                                 Feature;                                           // 0x0(0x8)
	TArray<class ResponseAssets*>                                ResponseAssets;                                    // 0x8(0x10)
};


// Size 0x28
struct EventAppliedStatusToTargets
{
public:
	TArray<Class StatusApplied>                                  StatusApplied;                                     // 0x0(0x10)
	TArray<class Targets*>                                       Targets;                                           // 0x10(0x10)
	Class Actor*                                                 StatusSource;                                      // 0x20(0x8)
};


// Size 0x18
struct StatusEffectPersistenceKey
{
public:
	Struct Status                                                AppliedStatuses;                                   // 0x0(0x18)
};


// Size 0x18
struct ApplyStatusEvent
{
public:
	Struct Status                                                StatusToApply;                                     // 0x0(0x18)
};


// Size 0x18
struct BuffedTargetData
{
public:
};


// Size 0x18
struct StatusDeactivatedEvent
{
public:
	Struct Guid                                                  Id;                                                // 0x0(0x10)
	struct FName                                                 StatusName;                                        // 0x10(0x8)
};


// Size 0x18
struct StatusActivatedEvent
{
public:
	Struct Guid                                                  Id;                                                // 0x0(0x10)
	struct FName                                                 StatusName;                                        // 0x10(0x8)
};


// Size 0x14
struct EventStatusMaterialEffectEnded
{
public:
	struct FName                                                 MaterialParamName;                                 // 0x0(0x8)
	struct FName                                                 CanShowMaterialParam;                              // 0x8(0x8)
	float                                                        FadeOutAcceleration;                               // 0x10(0x4)
};


// Size 0x30
struct EventStatusMaterialEffectStarted
{
public:
	struct FName                                                 MaterialParamName;                                 // 0x0(0x8)
	struct FName                                                 CanShowMaterialParam;                              // 0x8(0x8)
	struct FName                                                 TintParamName;                                     // 0x10(0x8)
	Struct LinearColor                                           TintColor;                                         // 0x18(0x10)
	float                                                        TargetEffectStrength;                              // 0x28(0x4)
	float                                                        FadeInAcceleration;                                // 0x2c(0x4)
};


// Size 0xc
struct EventStatusScreenEffectEnded
{
public:
	struct FName                                                 MaterialParamName;                                 // 0x0(0x8)
	float                                                        FadeOutAcceleration;                               // 0x8(0x4)
};


// Size 0x8
struct EventStatusScreenSpaceParticleEffectEnded
{
public:
	Class Object*                                                ParticleSystem;                                    // 0x0(0x8)
};


// Size 0x8
struct EventStatusScreenSpaceParticleEffectStarted
{
public:
	Class Object*                                                ParticleSystem;                                    // 0x0(0x8)
};


// Size 0x28
struct EventStatusScreenEffectStarted
{
public:
	struct FName                                                 MaterialParamName;                                 // 0x0(0x8)
	struct FName                                                 TintParamName;                                     // 0x8(0x8)
	Struct LinearColor                                           TintColor;                                         // 0x10(0x10)
	float                                                        TargetEffectStrength;                              // 0x20(0x4)
	float                                                        FadeInAcceleration;                                // 0x24(0x4)
};


// Size 0x1
struct EventExitedSurfaceMaterialStatusZone
{
public:
};


// Size 0x10
struct EventEnteredSurfaceMaterialStatusZone
{
public:
};


}