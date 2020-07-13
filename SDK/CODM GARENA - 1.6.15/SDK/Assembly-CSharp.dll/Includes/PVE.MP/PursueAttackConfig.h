#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class PursueAttackConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "PursueAttackConfig"));
	}

	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& attackRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& damageRange() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& fanAngle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& huntAnim() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& attackTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_attackDuration() {
		return ((T (*)(PursueAttackConfig*))(Il2CppBase() + 0x3EC3D48))(this);
	}

};

}