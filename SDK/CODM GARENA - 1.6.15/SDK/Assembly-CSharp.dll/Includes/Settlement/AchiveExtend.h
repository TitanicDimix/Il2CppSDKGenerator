#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class AchiveExtend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "AchiveExtend"));
	}

	template <typename T = Il2CppString*> T& SpriteIconName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& AchiveName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AchieveConf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}