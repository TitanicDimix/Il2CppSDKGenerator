#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DualSubWeaponLeftClavHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DualSubWeaponLeftClavHandle"));
	}

	template <typename T = bool> T& m_NeedToCacheTransformWhenExit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_EndCacheTransformWhenExit() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(DualSubWeaponLeftClavHandle*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x40F3A84))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(DualSubWeaponLeftClavHandle*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x40F3B7C))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(DualSubWeaponLeftClavHandle*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x40F3D64))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(DualSubWeaponLeftClavHandle*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x40F3DD4))(this, P0, P1, P2);
	}

};

}