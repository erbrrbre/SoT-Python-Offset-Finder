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

// BlueprintGeneratedClass BP_wsp_Garden_pebbles.BP_wsp_Garden_pebbles_C
// 0x0000 (FullSize[0x0475] - InheritedSize[0x0475])
class ABP_wsp_Garden_pebbles_C : public ABP_Placement_Garden_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_wsp_Garden_pebbles.BP_wsp_Garden_pebbles_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif