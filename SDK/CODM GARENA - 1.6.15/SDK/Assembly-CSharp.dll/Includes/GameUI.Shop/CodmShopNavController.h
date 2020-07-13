#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Shop {

class CodmShopNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Shop", "CodmShopNavController"));
	}

	template <typename T = uintptr_t> T& m_CodmShopCtr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C90AC4))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(CodmShopNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C90B64))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(CodmShopNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C90CC8))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C90DAC))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C90E5C))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C90F14))(this);
	}
	template <typename T = void> T ShutdownWindowController() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C90FB4))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C91058))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C91110))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C91118))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C91120))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C91128))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutdownWindowController() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C91130))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FadeOut() {
		return ((T (*)(CodmShopNavController*))(Il2CppBase() + 0x3C91138))(this);
	}

};

}