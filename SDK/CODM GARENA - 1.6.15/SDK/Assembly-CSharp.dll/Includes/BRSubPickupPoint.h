#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRSubPickupPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRSubPickupPoint"));
	}

	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRSubPickupPoint*))(Il2CppBase() + 0x52FB3A0))(this);
	}

};

}