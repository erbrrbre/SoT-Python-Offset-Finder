﻿// Name: SoT, Version: 2.4.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerBuriedTreasureMap.BP_PlayerBuriedTreasureMap_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerBuriedTreasureMap_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerBuriedTreasureMap.BP_PlayerBuriedTreasureMap_C.UserConstructionScript");

	ABP_PlayerBuriedTreasureMap_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PlayerBuriedTreasureMap_C::AfterRead()
{
	ABP_TreasureMap_C::AfterRead();

	READ_PTR_FULL(PickupablePlayerBuriedItemMap, UPickupablePlayerBuriedItemMapComponent);
	READ_PTR_FULL(WieldableInteractable, UWieldableInteractableComponent);
}

void ABP_PlayerBuriedTreasureMap_C::BeforeDelete()
{
	ABP_TreasureMap_C::BeforeDelete();

	DELE_PTR_FULL(PickupablePlayerBuriedItemMap);
	DELE_PTR_FULL(WieldableInteractable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif