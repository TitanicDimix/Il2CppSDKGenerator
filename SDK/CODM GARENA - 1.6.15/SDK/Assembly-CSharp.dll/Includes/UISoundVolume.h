#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISoundVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISoundVolume"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISoundVolume*))(Il2CppBase() + 0x2FA55B0))(this);
	}
	template <typename T = void> T OnChange() {
		return ((T (*)(UISoundVolume*))(Il2CppBase() + 0x2FA5758))(this);
	}

};

}