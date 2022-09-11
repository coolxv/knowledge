# 架构
![](http://assets.processon.com/chart_image/615122e107912903eff80860.png)


# 图片输入输出

- [QtScrcpy](https://github.com/barry-ran/QtScrcpy)
- [scrcpy](https://github.com/Genymobile/scrcpy)
- [quicktime_video_hack](https://github.com/danielpaulus/quicktime_video_hack)
- [idb](https://github.com/facebook/idb)
- [Airplay-SDK](https://github.com/xfirefly/Airplay-SDK)
## obs
- [obs-deps](https://github.com/obsproject/obs-deps)
- [obs-studio](https://github.com/obsproject/obs-studio)


# 动作输出
- [驱动级模拟键盘鼠标](https://github.com/BestBurning/kmclassdll)[ | 例子](https://github.com/wanttobeno/Win_Driver_Mouse_And_Key)
- [驱动级模拟USB Gamepads](https://github.com/ViGEm/ViGEmBus)[ | AHK例子](https://github.com/evilC/AHK-ViGEm-Bus)
- [linux下的驱动级模拟键鼠](https://github.com/blunderer/vinput)
- [gainput](https://github.com/jkuhlmann/gainput)
- [vmulti](https://github.com/djpnewton/vmulti)
- [keyboard python](https://github.com/boppreh/keyboard)
- [mouse python](https://github.com/boppreh/mouse)
- [ViGEmBus](https://github.com/ViGEm/ViGEmBus)

## 单片机烧入方式
- ICP(In Circuit Programing)在电路编程：使用SWD接口进行烧录，如J-Link烧录器和J-Flash软件配合使用。
- ISP(In System Programing)在系统编程：使用引导程序（Bootload）加上外围UART/USB等接口进行烧录。
- IAPIAP(In applicating Programing)在应用编程：软件自身实现在线电擦除和编程的方法，不使用任何工具。程序通常分成两块，分别为引导程序和应用程序。
- [烧入历史](https://www.stcisp.com/mcu_programer.html)
## 易键鼠
```
dumpbin /dependents msdk.dll
Microsoft (R) COFF/PE Dumper Version 14.29.30133.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file msdk.dll

File Type: DLL

  Image has the following dependencies:

    SETUPAPI.dll
    HID.DLL
    KERNEL32.dll
    USER32.dll
```
```
dumpbin /imports msdk.dll
Microsoft (R) COFF/PE Dumper Version 14.29.30133.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file msdk.dll

File Type: DLL

  Section contains the following imports:

    SETUPAPI.dll
              10011124 Import Address Table
              10012598 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                   71 SetupDiEnumDeviceInterfaces
                   7D SetupDiGetClassDevsA
                   6D SetupDiDestroyDeviceInfoList
                   70 SetupDiEnumDeviceInfo
                   8F SetupDiGetDeviceInterfaceDetailA

    HID.DLL
              10011000 Import Address Table
              10012474 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    5 HidD_GetHidGuid
                    4 HidD_GetFeature
                   11 HidD_SetFeature
                    1 HidD_FreePreparsedData
                   15 HidP_GetCaps
                    C HidD_GetPreparsedData

    KERNEL32.dll
              1001101C Import Address Table
              10012490 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                   AA FlushFileBuffers
                   21 CompareStringA
                   22 CompareStringW
                  1A2 HeapReAlloc
                   1B CloseHandle
                  16D GetTickCount
                   34 CreateFileA
                  296 Sleep
                  1AA InitializeCriticalSection
                  1C1 LeaveCriticalSection
                   66 EnterCriticalSection
                   55 DeleteCriticalSection
                  2D2 WideCharToMultiByte
                  124 GetModuleFileNameA
                   31 CreateEventA
                  175 GetVersionExA
                  218 ReadFile
                  27C SetStdHandle
                  19F HeapFree
                  199 HeapAlloc
                  1AD InterlockedDecrement
                  1B0 InterlockedIncrement
                  170 GetTimeZoneInformation
                  15D GetSystemTime
                  11B GetLocalTime
                  22F RtlUnwind
                   CA GetCommandLineA
                  174 GetVersion
                  19D HeapDestroy
                  19B HeapCreate
                  2BF VirtualFree
                   7D ExitProcess
                  2BB VirtualAlloc
                  262 SetEnvironmentVariableA
                  1E4 MultiByteToWideChar
                  1BF LCMapStringA
                  1C0 LCMapStringW
                  20B RaiseException
                  13E GetProcAddress
                  126 GetModuleHandleA
                   FA GetCurrentThreadId
                  2A5 TlsSetValue
                  2A2 TlsAlloc
                  2A3 TlsFree
                  271 SetLastError
                  2A4 TlsGetValue
                  11A GetLastError
                  29E TerminateProcess
                   F7 GetCurrentProcess
                  26D SetHandleCount
                  152 GetStdHandle
                  115 GetFileType
                  150 GetStartupInfoA
                   B2 FreeEnvironmentStringsA
                   B3 FreeEnvironmentStringsW
                  106 GetEnvironmentStrings
                  108 GetEnvironmentStringsW
                  2DF WriteFile
                  153 GetStringTypeA
                  156 GetStringTypeW
                   BF GetCPInfo
                  26A SetFilePointer
                   B9 GetACP
                  131 GetOEMCP
                  1C2 LoadLibraryA

    USER32.dll
              1001113C Import Address Table
              100125B0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                   FC GetCursorPos

```
```
dumpbin /exports msdk.dll
Microsoft (R) COFF/PE Dumper Version 14.29.30133.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file msdk.dll

File Type: DLL

  Section contains the following exports for msdk.dll

    00000000 characteristics
    6059EE66 time date stamp Tue Mar 23 21:34:30 2021
        0.00 version
           1 ordinal base
          73 number of functions
          73 number of names

    ordinal hint RVA      name

          1    0 00005470 M_CapsLockLedState
          2    1 00003F80 M_ChkPwStat
          3    2 00003F60 M_ChkSupportEnc
          4    3 00002CC0 M_ChkSupportMdy
          5    4 00003720 M_ChkSupportProdStrMdy
          6    5 00002740 M_Close
          7    6 00007660 M_Delay
          8    7 00007670 M_DelayRandom
          9    8 00002480 M_GetAbsCfg
         11    9 00006A40 M_GetCurrMousePos
         10    A 00006CE0 M_GetCurrMousePos2
         12    B 00006A80 M_GetCurrMousePosX
         13    C 00006AB0 M_GetCurrMousePosY
         14    D 00002760 M_GetDevSn
         15    E 00003490 M_GetVidPid
         16    F 00004C70 M_GetW24GParam
         17   10 00004900 M_InitParam
         19   11 00004E90 M_KeyDown
         18   12 00005270 M_KeyDown2
         20   13 000054D0 M_KeyInputString
         21   14 00005670 M_KeyInputStringGBK
         22   15 000058F0 M_KeyInputStringUnicode
         24   16 00004E20 M_KeyPress
         23   17 00005230 M_KeyPress2
         26   18 000051B0 M_KeyState
         25   19 000052F0 M_KeyState2
         28   1A 00004FE0 M_KeyUp
         27   1B 000052B0 M_KeyUp2
         29   1C 00005970 M_LeftClick
         30   1D 000059E0 M_LeftDoubleClick
         31   1E 00005A50 M_LeftDown
         32   1F 00005AD0 M_LeftUp
         33   20 00005CC0 M_MiddleClick
         34   21 00005D30 M_MiddleDown
         35   22 00005DB0 M_MiddleUp
         36   23 00005E30 M_MouseKeyState
         37   24 00005E70 M_MouseWheel
         40   25 000066A0 M_MoveR
         38   26 00006AE0 M_MoveR2
         39   27 00006B60 M_MoveR2_D
         41   28 00006800 M_MoveR_D
         46   29 00006870 M_MoveTo
         42   2A 00006C00 M_MoveTo2
         43   2B 00006C60 M_MoveTo2_D
         44   2C 00006F30 M_MoveTo3
         45   2D 00007510 M_MoveTo3_D
         47   2E 00006930 M_MoveTo_D
         48   2F 00005440 M_NumLockLedState
         49   30 00002170 M_Open
         50   31 00002240 M_Open_VidPid
         51   32 00007620 M_RandDomNbr
         52   33 000045C0 M_RdEncData
         53   34 00004D50 M_ReEnum
         54   35 00005330 M_ReleaseAllKey
         55   36 000075A0 M_ReleaseAllMouse
         56   37 00006A10 M_ResetMousePos
         57   38 00003280 M_ResetVidPid
         58   39 00006D10 M_ResolutionUsed
         59   3A 00005B50 M_RightClick
         60   3B 00005BC0 M_RightDown
         61   3C 00005C40 M_RightUp
         62   3D 000022C0 M_ScanAndOpen
         63   3E 000054A0 M_ScrollLockLedState
         64   3F 00002550 M_SetAbsCfg
         65   40 00002D50 M_SetNewVidPid
         66   41 000049E0 M_SetParam
         67   42 00003740 M_SetProdStr
         68   43 00004080 M_SetPw
         69   44 000028C0 M_SetUserData
         70   45 00004A30 M_SetW24GParam
         71   46 00004220 M_VerifyPw
         72   47 00002B40 M_VerifyUserData
         73   48 00004390 M_WrEncData
```
## 幽灵键鼠
```
dumpbin /dependents gpat.dll
Microsoft (R) COFF/PE Dumper Version 14.29.30133.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file gpat.dll

File Type: DLL

  Image has the following dependencies:

    KERNEL32.DLL
    KERNEL32.DLL
    KERNEL32.DLL
    KERNEL32.DLL
    advapi32.dll
    hid.dll
    oleaut32.dll
    oleaut32.dll
    SetupApi.dll
    user32.dll
    user32.dll

  Summary

        1000 .edata
        1000 .idata
        2000 .reloc
        2000 .rsrc
        1000 BSS
       17000 CODE
        1000 DATA

dumpbin /imports gpat.dll
Microsoft (R) COFF/PE Dumper Version 14.29.30133.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file gpat.dll

File Type: DLL

  Section contains the following imports:

    KERNEL32.DLL
                41A2B8 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 Sleep

    KERNEL32.DLL
                41A1D4 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 WriteFile
                    0 WaitForSingleObject
                    0 VirtualQuery
                    0 VirtualAlloc
                    0 SetFilePointer
                    0 SetEvent
                    0 SetEndOfFile
                    0 ResetEvent
                    0 ReadFile
                    0 LeaveCriticalSection
                    0 InitializeCriticalSection
                    0 GetVersionExA
                    0 GetTickCount
                    0 GetThreadLocale
                    0 GetStringTypeExA
                    0 GetStdHandle
                    0 GetProcAddress
                    0 GetModuleHandleA
                    0 GetModuleFileNameA
                    0 GetLocaleInfoA
                    0 GetLocalTime
                    0 GetLastError
                    0 GetFullPathNameA
                    0 GetDiskFreeSpaceA
                    0 GetDateFormatA
                    0 GetCurrentThreadId
                    0 GetCPInfo
                    0 GetACP
                    0 FormatMessageA
                    0 EnumCalendarInfoA
                    0 EnterCriticalSection
                    0 DeleteCriticalSection
                    0 CreateFileA
                    0 CreateEventA
                    0 CompareStringA
                    0 CloseHandle

    KERNEL32.DLL
                41A1B8 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 TlsSetValue
                    0 TlsGetValue
                    0 TlsFree
                    0 TlsAlloc
                    0 LocalFree
                    0 LocalAlloc

    KERNEL32.DLL
                41A0F0 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 DeleteCriticalSection
                    0 LeaveCriticalSection
                    0 EnterCriticalSection
                    0 InitializeCriticalSection
                    0 VirtualFree
                    0 VirtualAlloc
                    0 LocalFree
                    0 LocalAlloc
                    0 GetTickCount
                    0 QueryPerformanceCounter
                    0 GetVersion
                    0 GetCurrentThreadId
                    0 InterlockedDecrement
                    0 InterlockedIncrement
                    0 VirtualQuery
                    0 WideCharToMultiByte
                    0 MultiByteToWideChar
                    0 lstrlenA
                    0 lstrcpynA
                    0 LoadLibraryExA
                    0 GetThreadLocale
                    0 GetStartupInfoA
                    0 GetProcAddress
                    0 GetModuleHandleA
                    0 GetModuleFileNameA
                    0 GetLocaleInfoA
                    0 GetCommandLineA
                    0 FreeLibrary
                    0 FindFirstFileA
                    0 FindClose
                    0 ExitProcess
                    0 WriteFile
                    0 UnhandledExceptionFilter
                    0 RtlUnwind
                    0 RaiseException
                    0 GetStdHandle

    advapi32.dll
                41A198 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 RegQueryValueExA
                    0 RegOpenKeyExA
                    0 RegCloseKey

    hid.dll
                41A2C0 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 HidP_GetCaps
                    0 HidD_GetSerialNumberString
                    0 HidD_GetProductString
                    0 HidD_GetManufacturerString
                    0 HidD_GetAttributes
                    0 HidD_GetPreparsedData
                    0 HidD_GetHidGuid

    oleaut32.dll
                41A2F4 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 SafeArrayPtrOfIndex
                    0 SafeArrayGetUBound
                    0 SafeArrayGetLBound
                    0 SafeArrayCreate
                    0 VariantChangeType
                    0 VariantCopy
                    0 VariantClear
                    0 VariantInit

    oleaut32.dll
                41A1A8 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 SysFreeString
                    0 SysReAllocStringLen
                    0 SysAllocStringLen

    SetupApi.dll
                41A2E0 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 SetupDiGetClassDevsA
                    0 SetupDiGetDeviceInterfaceDetailA
                    0 SetupDiEnumDeviceInterfaces
                    0 SetupDiDestroyDeviceInfoList

    user32.dll
                41A184 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 GetKeyboardType
                    0 LoadStringA
                    0 MessageBoxA
                    0 CharNextA

    user32.dll
                41A268 Import Address Table
                     0 Import Name Table
                     0 time date stamp
                     0 Index of first forwarder reference

                    0 CreateWindowExA
                    0 UnregisterClassA
                    0 TranslateMessage
                    0 SystemParametersInfoA
                    0 SetWindowLongA
                    0 RegisterDeviceNotificationA
                    0 RegisterClassA
                    0 PeekMessageA
                    0 MessageBoxA
                    0 LoadStringA
                    0 GetWindowLongA
                    0 GetSystemMetrics
                    0 GetCursorPos
                    0 GetClassInfoA
                    0 DispatchMessageA
                    0 DestroyWindow
                    0 DefWindowProcA
                    0 CharNextA
                    0 CharToOemA

  Summary

        1000 .edata
        1000 .idata
        2000 .reloc
        2000 .rsrc
        1000 BSS
       17000 CODE
        1000 DATA

dumpbin /exports gpat.dll
Microsoft (R) COFF/PE Dumper Version 14.29.30133.0
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file gpat.dll

File Type: DLL

  Section contains the following exports for kml.dll

    00000000 characteristics
           0 time date stamp
        0.00 version
           1 ordinal base
          79 number of functions
          79 number of names

    ordinal hint RVA      name

         78    0 0000C648 CheckDevice
         76    1 0000C214 CloseDevice
         64    2 00010BFC CombinationKeyDown
         62    3 00010E20 CombinationKeyPress
         63    4 00010CE4 CombinationKeyUp
          1    5 000173B8 DecString
          9    6 0000C6F4 Disconnect
          2    7 00017320 EncString
         59    8 0000FD34 GetCapsLock
         11    9 0000C780 GetKM21Mode
         16    A 00016F6C GetModel
         58    B 0000FDAC GetNumLock
         14    C 00015D38 GetProductionDate
         17    D 00016ED4 GetSN
         15    E 00016F20 GetVersion
          8    F 00016FD0 InitLock
         71   10 00010098 KeyDown
         67   11 000100F4 KeyDown2
         69   12 00010514 KeyPress
         65   13 00010554 KeyPress2
         68   14 0001058C KeyPressEx
         70   15 0001013C KeyUp
         66   16 00010198 KeyUp2
         61   17 000105B0 KeyUpAll
         55   18 0001069C LeftClick
         53   19 00010678 LeftClickEx
         54   1A 000106F4 LeftDoubleClick
         57   1B 00010618 LeftDown
         56   1C 00010638 LeftUp
         46   1D 0001086C MiddleClick
         45   1E 000108A4 MiddleDoubleClick
         48   1F 0001080C MiddleDown
         47   20 0001082C MiddleUp
         43   21 000109BC MouseUpAll
         40   22 00010E74 MoveTo
         13   23 00010EBC MoveToFrom
         41   24 00010954 MoveToR
         79   25 00016EC4 OpenDevice
         77   26 0000BF18 OpenDeviceEx
         12   27 00011418 ReMoveTo
          5   28 00017130 ReadString
         75   29 0000C6C8 Restart
         73   2A 0000C8A0 RestoreDeviceID
         50   2B 0001078C RightClick
         49   2C 000107C4 RightDoubleClick
         52   2D 0001072C RightDown
         51   2E 0001074C RightUp
         74   2F 0000C7EC SetDeviceID
         10   30 00016FB8 SetKM21Mode
         39   31 00011568 SetMoveSpeed
          7   32 00016FE0 SetReadPassword
         72   33 0000C8B0 SetSpeed
          3   34 00017288 SetStringKey
          6   35 00017098 SetWritePassword
         42   36 00010E74 SimulationMove
         60   37 00010A4C SimulationPressKey
         44   38 00010968 WheelsMove
          4   39 000171EC WriteString
         38   3A 000117EC msKeyDown
         36   3B 0001181C msKeyPress
         37   3C 00011804 msKeyUp
         35   3D 00011834 msKeyUpAll
         32   3E 0001190C msLeftClick
         31   3F 00011928 msLeftDblClick
         34   40 000118D4 msLeftDown
         33   41 000118F0 msLeftUp
         24   42 000119EC msMiddleClick
         23   43 00011A08 msMiddleDblClick
         26   44 000119B4 msMiddleDown
         25   45 000119D0 msMiddleUp
         18   46 00011B5C msMouseUpAll
         20   47 00011A8C msMoveTo
         21   48 00011A3C msMoveToR
         19   49 00011AF4 msReMoveTo
         28   4A 0001197C msRightClick
         27   4B 00011998 msRightDblClick
         30   4C 00011944 msRightDown
         29   4D 00011960 msRightUp
         22   4E 00011A24 msWheelsMove

  Summary

        1000 .edata
        1000 .idata
        2000 .reloc
        2000 .rsrc
        1000 BSS
       17000 CODE
        1000 DATA



```
# 算法库
