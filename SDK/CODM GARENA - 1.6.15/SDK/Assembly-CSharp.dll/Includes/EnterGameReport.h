#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnterGameReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterGameReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(EnterGameReport*))(Il2CppBase() + 0x4674EBC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(bool result, float timeSpan, int32_t mapId) {
		return ((T (*)(EnterGameReport*, bool, float, int32_t))(Il2CppBase() + 0x4674F34))(this, result, timeSpan, mapId);
	}

};

}