#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Cancel>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& dynamicType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(CancelcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2DC65B8))(this, x);
	}

};

}