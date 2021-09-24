﻿#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DynamicFogVolume_Undersea.BP_DynamicFogVolume_Undersea_C
// 0x0014 (FullSize[0x0454] - InheritedSize[0x0440])
class ABP_DynamicFogVolume_Undersea_C : public ABP_DynamicDensityFogVolume_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              WorldFadeDistanceStart;                                    // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WorldFadeDistanceRange;                                    // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FogMaxDensity;                                             // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DynamicFogVolume_Undersea.BP_DynamicFogVolume_Undersea_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_DynamicFogVolume_Undersea(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif