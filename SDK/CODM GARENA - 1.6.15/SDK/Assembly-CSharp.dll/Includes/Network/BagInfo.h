#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class BagInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "BagInfo"));
	}

	template <typename T = uint16_t> T& BagId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& Selected() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& WeaponCount() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Weapons() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& GrenadeCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Grenades() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = unsigned char> T& PerkCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Perks() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Role() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& WingSuit() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& Parachute() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& Hat() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& Bag() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& Clothes() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& ProfessionChip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& Suit() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BagInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x33338F8))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BagInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3333D10))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3334378))(0, data, DataIndex);
	}

};

}