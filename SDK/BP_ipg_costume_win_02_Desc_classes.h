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

// BlueprintGeneratedClass BP_ipg_costume_win_02_Desc.BP_ipg_costume_win_02_Desc_C
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UBP_ipg_costume_win_02_Desc_C : public UCostumeWithEmoteDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ipg_costume_win_02_Desc.BP_ipg_costume_win_02_Desc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif