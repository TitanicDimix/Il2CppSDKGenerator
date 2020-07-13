#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PawnRagdollComponentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PawnRagdollComponentData"));
	}

	template <typename T = float> T& DeadToFrozeTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& TargetPinWeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& StartPinWeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& TickPinTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FreezeRunningTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MaxRagdooDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DelayActiveTimeRate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsUseKinematic() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& SolverVelocityIterations() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& SolverVelocityIterationsLowEnd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& MaxPVPImpulseMagnitue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& MaxVelocityMagnitue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& ImpulseMulitplier() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& ImpulseDetectRadius() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& EnableAngularLimits() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& EnableInternalCollision() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = float> T& ZombieImpulseMultiplier() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& MaxZombieImpulseMagnitue() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(PawnRagdollComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F055BC))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(PawnRagdollComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F05EDC))(this, P0, P1, P2, P3, P4, P5);
	}

};

}