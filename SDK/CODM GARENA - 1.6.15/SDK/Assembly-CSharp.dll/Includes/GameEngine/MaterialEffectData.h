#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MaterialEffectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MaterialEffectData"));
	}

	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MatEffectType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& InheritTexture() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}