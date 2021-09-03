﻿// Name: SoT, Version: 2.2.1.1

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

// Function BP_PromptActor_EmissaryEntitlementPurchased_RB.BP_PromptActor_EmissaryEntitlementPurchased_RB_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_EmissaryEntitlementPurchased_RB_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEntitlementPurchased_RB.BP_PromptActor_EmissaryEntitlementPurchased_RB_C.UserConstructionScript");

	ABP_PromptActor_EmissaryEntitlementPurchased_RB_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryEntitlementPurchased_RB.BP_PromptActor_EmissaryEntitlementPurchased_RB_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryEntitlementPurchased_RB_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEntitlementPurchased_RB.BP_PromptActor_EmissaryEntitlementPurchased_RB_C.ReceiveEndPlay");

	ABP_PromptActor_EmissaryEntitlementPurchased_RB_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryEntitlementPurchased_RB.BP_PromptActor_EmissaryEntitlementPurchased_RB_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_PromptActor_EmissaryEntitlementPurchased_RB_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEntitlementPurchased_RB.BP_PromptActor_EmissaryEntitlementPurchased_RB_C.ReceiveBeginPlay");

	ABP_PromptActor_EmissaryEntitlementPurchased_RB_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_EmissaryEntitlementPurchased_RB.BP_PromptActor_EmissaryEntitlementPurchased_RB_C.ExecuteUbergraph_BP_PromptActor_EmissaryEntitlementPurchased_RB
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryEntitlementPurchased_RB_C::ExecuteUbergraph_BP_PromptActor_EmissaryEntitlementPurchased_RB(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryEntitlementPurchased_RB.BP_PromptActor_EmissaryEntitlementPurchased_RB_C.ExecuteUbergraph_BP_PromptActor_EmissaryEntitlementPurchased_RB");

	ABP_PromptActor_EmissaryEntitlementPurchased_RB_C_ExecuteUbergraph_BP_PromptActor_EmissaryEntitlementPurchased_RB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PromptActor_EmissaryEntitlementPurchased_RB_C::AfterRead()
{
	ABP_PromptActorBase_C::AfterRead();

	READ_PTR_FULL(PromptCoordinator, UBP_Prompt_EmissaryEntitlementPurchased_C);
	READ_PTR_FULL(PromptCounterAccessKey, UClass);
}

void ABP_PromptActor_EmissaryEntitlementPurchased_RB_C::BeforeDelete()
{
	ABP_PromptActorBase_C::BeforeDelete();

	DELE_PTR_FULL(PromptCoordinator);
	DELE_PTR_FULL(PromptCounterAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif