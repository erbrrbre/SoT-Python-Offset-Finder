﻿#pragma once

// Name: SoT, Version: 2.4.0


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

// BlueprintGeneratedClass BP_TreasureMap_ItemInfo_XMarksTheSpot.BP_TreasureMap_ItemInfo_XMarksTheSpot_C
// 0x0008 (FullSize[0x0508] - InheritedSize[0x0500])
class ABP_TreasureMap_ItemInfo_XMarksTheSpot_C : public ATreasureMapItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureMap_ItemInfo_XMarksTheSpot.BP_TreasureMap_ItemInfo_XMarksTheSpot_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif