#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPromotorGetAwardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPromotorGetAwardReq"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(CSPromotorGetAwardReq*))(Il2CppBase() + 0x51F18E0))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(CSPromotorGetAwardReq*, int32_t))(Il2CppBase() + 0x51F18E8))(this, value);
	}
	template <typename T = int32_t> T get_level() {
		return ((T (*)(CSPromotorGetAwardReq*))(Il2CppBase() + 0x51F18F0))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(CSPromotorGetAwardReq*, int32_t))(Il2CppBase() + 0x51F18F8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPromotorGetAwardReq*, bool))(Il2CppBase() + 0x51F1900))(this, createIfMissing);
	}

};

}