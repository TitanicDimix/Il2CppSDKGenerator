#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankAwardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankAwardItem"));
	}

	template <typename T = int32_t> T& nRanklow() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& nRankUp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bIsPercent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& awardInfoList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}