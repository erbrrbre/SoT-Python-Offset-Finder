// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class FactionInterationInterface: public Interface
{
public:
};


// Size 0x20
class FactionInteractionVoteComponent: public SceneComponent
{
public:
	class                                                        TargetCompany;                                     // 0x2e8(0x8)
};


// Size 0x50
class ShipFactionCustomisation: public SceneComponent
{
public:
	Struct FigureheadFactionVFXParams                            FigureheadFactionVFX;                              // 0x2e0(0x30)
	Class ChildActorComponent*                                   BPFactionHourglass;                                // 0x320(0x8)
	Class ParticleSystemComponent*                               SpawnedFigureheadParticles;                        // 0x328(0x8)
};


}