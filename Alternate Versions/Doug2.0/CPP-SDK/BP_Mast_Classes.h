// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa0
class BP_Mast_C: public Mast
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x990(0x8)
	Class StaticMeshComponent*                                   MastTopComponent;                                  // 0x998(0x8)
	Class ChildActorComponent*                                   TopgallantActor;                                   // 0x9a0(0x8)
	Class ChildActorComponent*                                   MainsailActor;                                     // 0x9a8(0x8)
	Class ChildActorComponent*                                   TopsailActor;                                      // 0x9b0(0x8)
	Class StaticMeshComponent*                                   Main Yard;                                         // 0x9b8(0x8)
	Class StaticMeshComponent*                                   Topgallant Yard;                                   // 0x9c0(0x8)
	Class StaticMeshComponent*                                   Top Yard;                                          // 0x9c8(0x8)
	Class StaticMeshComponent*                                   MastBaseComponent;                                 // 0x9d0(0x8)
	TArray<Struct None>                                          Sail Parameters;                                   // 0x9d8(0x10)
	TArray<class Yards*>                                         Yards;                                             // 0x9e8(0x10)
	TArray<class Sails*>                                         Sails;                                             // 0x9f8(0x10)
	Class MaterialInstance*                                      Sail Material;                                     // 0xa08(0x8)
	TArray<class SailActors*>                                    SailActors;                                        // 0xa10(0x10)
	Class DecalComponent*                                        DamageDecalRight;                                  // 0xa20(0x8)
	Class DecalComponent*                                        DamageDecalLeft;                                   // 0xa28(0x8)
};


}