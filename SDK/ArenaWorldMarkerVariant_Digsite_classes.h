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

// BlueprintGeneratedClass ArenaWorldMarkerVariant_Digsite.ArenaWorldMarkerVariant_Digsite_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UArenaWorldMarkerVariant_Digsite_C : public UWorldMarkerVariant
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ArenaWorldMarkerVariant_Digsite.ArenaWorldMarkerVariant_Digsite_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif