// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class CommodityTokenEntitlementDesc: public EntitlementDesc
{
public:
	struct FName                                                 NPCToRedeemAt;                                     // 0xd8(0x8)
	class                                                        ItemToRedeemFor;                                   // 0xe0(0x8)
};


// Size 0x10
class CommodityDemandFrameworkEditorSettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                                  CommodityDataFileLocation;                         // 0x38(0x10)
};


// Size 0x30
class CommodityDemandFrameworkSettings: public DeveloperSettings
{
public:
	float                                                        DemandRefreshFrequencyInSeconds;                   // 0x38(0x4)
	struct FName                                                 DemandCollectionId;                                // 0x3c(0x8)
	int                                                          CommodityPurchaseLockoutInGameDays;                // 0x44(0x4)
	int                                                          InGameHourWhenCommoditiesRestock;                  // 0x48(0x4)
	Struct GameTime                                              CommodityRedemptionTimeOutPeriodInDays;            // 0x50(0x8)
	Struct StringAssetReference                                  NPCListAsset;                                      // 0x58(0x10)
};


// Size 0x0
class CommodityDemandServiceInterface: public Interface
{
public:
};


// Size 0x40
class CommodityDemandService: public Actor
{
public:
	Struct ActiveNPCDemands                                      ActiveCommodityDemands;                            // 0x3f0(0x20)
};


// Size 0x0
class CommodityDemandStorageInterface: public Interface
{
public:
};


// Size 0x0
class CommodityDemandStorageProviderInterface: public Interface
{
public:
};


// Size 0x10
class CommodityEntitlementRedemptionAsset: public DataAsset
{
public:
	TArray<Struct EntitlementToRedeemItems>                      CommoditiesForRedemption;                          // 0x28(0x10)
};


// Size 0x10
class CommodityItemDesc: public BootyItemDesc
{
public:
	Struct CommoditySelectionType                                CommodityType;                                     // 0x130(0x8)
	byte                                                         CommodityDemand;                                   // 0x138(0x1)
};


// Size 0x80
class CommodityPurchaseTrackingComponent: public ActorComponent
{
public:
};


// Size 0x0
class CommodityRedemptionInterface: public Interface
{
public:
};


// Size 0xc8
class CommodityRedemptionComponent: public ActorComponent
{
public:
	Struct FText                                                 RedeemTooltipText;                                 // 0xd0(0x38)
	TArray<class PendingRedemptions*>                            PendingRedemptions;                                // 0x180(0x10)
};


// Size 0x0
class CommoditySourceInterface: public Interface
{
public:
};


// Size 0x10
class CommoditySourceComponent: public ActorComponent
{
public:
	struct FName                                                 NPCIdentifier;                                     // 0xd0(0x8)
};


// Size 0x10
class CommodityTypeDataAsset: public DataAsset
{
public:
	TArray<Struct CommodityTypeDataEntry>                        CommodityEntries;                                  // 0x28(0x10)
};


// Size 0x0
class CrateFillerInterface: public Interface
{
public:
};


// Size 0x10
class CrateFillerComponent: public ActorComponent
{
public:
};


// Size 0x0
class DeliverableCommodityRequirement: public DeliverableRequirementBase
{
public:
};


// Size 0x20
class IsWieldedCommodityItemInDemandStatCondition: public TargetedStatCondition
{
public:
	byte                                                         CommodityDemand;                                   // 0x30(0x1)
};


// Size 0x18
class SpecificItemsCrateFillerComponent: public ActorComponent
{
public:
	TArray<Struct StorageContainerNode>                          ItemsToFillCrateWith;                              // 0xd0(0x10)
};


// Size 0x8
class WasWieldedCommodityItemBoughtAtDemandStatCondition: public TargetedStatCondition
{
public:
	byte                                                         CommodityDemand;                                   // 0x30(0x1)
};


}