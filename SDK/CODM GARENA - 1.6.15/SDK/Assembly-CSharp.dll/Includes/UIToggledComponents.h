#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIToggledComponents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIToggledComponents"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& activate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& deactivate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& inverse() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Toggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIToggledComponents*))(Il2CppBase() + 0x41FA154))(this);
	}
	template <typename T = void> T Toggle() {
		return ((T (*)(UIToggledComponents*))(Il2CppBase() + 0x41FA3D0))(this);
	}

};

}