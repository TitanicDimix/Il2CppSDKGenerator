#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIPDGWorkitemResultInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_PDG_WorkitemResultInfo"));
	}

	template <typename T = int32_t> T& resultSH() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& resultHash() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}