#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DataPropertyTagInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataPropertyTagInfo"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& FileDic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bytes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}