#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PlayerPrefsDeleteKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PlayerPrefsDeleteKey"));
	}

	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PlayerPrefsDeleteKey*))(Il2CppBase() + 0x4D7C430))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(PlayerPrefsDeleteKey*))(Il2CppBase() + 0x4D7C4F4))(this);
	}

};

}