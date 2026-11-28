// Decompiled from hscnetfltlib.dll (ClassM_3.0.500\ClassM_Client_unpacked\hscnetfltlib.dll)

// Address: 0x1001100A
// attributes: thunk
int __cdecl HscNetFltSetParam(HANDLE hFile, int a2, int a3, int a4)
{
  return HscNetFltSetParam_0(hFile, a2, a3, a4);
}

// Address: 0x1001100F
// attributes: thunk
int __cdecl HscNetFltGetParam(HANDLE hFile, int a2, LPVOID lpOutBuffer)
{
  return HscNetFltGetParam_0(hFile, a2, lpOutBuffer);
}

// Address: 0x10011014
// attributes: thunk
int __cdecl HscNetFltShutdown(HANDLE hFile, int a2)
{
  return HscNetFltShutdown_0(hFile, a2);
}

// Address: 0x10011023
// attributes: thunk
int __cdecl sub_10011023(int a1, int a2, int a3)
{
  return sub_100124A0(a1, a2, a3);
}

// Address: 0x10011028
// attributes: thunk
int __cdecl sub_10011028(int a1, char a2, int a3)
{
  return sub_100124F0(a1, a2, a3);
}

// Address: 0x10011032
// attributes: thunk
int __cdecl HscNetFltClose(HANDLE hObject)
{
  return HscNetFltClose_0(hObject);
}

// Address: 0x10011037
// attributes: thunk
int __cdecl HscNetFltStart(HANDLE hObject, int a2, int a3)
{
  return HscNetFltStart_0(hObject, a2, a3);
}

// Address: 0x10011069
// attributes: thunk
int __cdecl HscNetFltSend(HANDLE hFile, LPVOID lpOutBuffer, DWORD nOutBufferSize, int a4, int a5)
{
  return HscNetFltSend_0(hFile, lpOutBuffer, nOutBufferSize, a4, a5);
}

// Address: 0x1001106E
// attributes: thunk
int __cdecl HscNetFltRecv(HANDLE hFile, LPVOID lpOutBuffer, DWORD nOutBufferSize, int a4, int a5)
{
  return HscNetFltRecv_0(hFile, lpOutBuffer, nOutBufferSize, a4, a5);
}

// Address: 0x1001109B
// attributes: thunk
int __cdecl HscNetFltRecvEx(
        HANDLE hDevice,
        LPVOID lpOutBuffer,
        DWORD nOutBufferSize,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        LPOVERLAPPED lpOverlapped)
{
  return HscNetFltRecvEx_0(hDevice, lpOutBuffer, nOutBufferSize, a4, a5, a6, a7, a8, lpOverlapped);
}

// Address: 0x100110A0
// attributes: thunk
int __cdecl HscNetFltSendEx(
        HANDLE hDevice,
        LPVOID lpOutBuffer,
        DWORD nOutBufferSize,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        LPOVERLAPPED lpOverlapped)
{
  return HscNetFltSendEx_0(hDevice, lpOutBuffer, nOutBufferSize, a4, a5, a6, a7, a8, lpOverlapped);
}

// Address: 0x100110A5
// attributes: thunk
int __cdecl HscNetFltInitialize(int a1, __int16 a2, int a3, int a4)
{
  return HscNetFltInitialize_0(a1, a2, a3, a4);
}

// Address: 0x100110C3
// attributes: thunk
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  return DllEntryPoint_0(hinstDLL, fdwReason, lpReserved);
}

// Address: 0x100111C0
int __stdcall DllEntryPoint_0(HMODULE a1, int a2, int a3)
{
  LPVOID lpTlsValue; // [esp+50h] [ebp-4h]
  void *lpTlsValuea; // [esp+50h] [ebp-4h]
  void *lpTlsValueb; // [esp+50h] [ebp-4h]

  switch ( a2 )
  {
    case 0:
      lpTlsValuea = TlsGetValue(dwTlsIndex);
      if ( lpTlsValuea != nullptr )
        CloseHandle(lpTlsValuea);
      TlsFree(dwTlsIndex);
      return 1;
    case 1:
      hModule = a1;
      dwTlsIndex = TlsAlloc();
      if ( dwTlsIndex != -1 )
        goto LABEL_4;
      return 0;
    case 2:
LABEL_4:
      lpTlsValue = CreateEventW(nullptr, false, false, nullptr);
      if ( lpTlsValue == nullptr )
        return 0;
      TlsSetValue(dwTlsIndex, lpTlsValue);
      return 1;
    case 3:
      lpTlsValueb = TlsGetValue(dwTlsIndex);
      if ( lpTlsValueb != nullptr )
        CloseHandle(lpTlsValueb);
      return 1;
    default:
      return 1;
  }
}

// Address: 0x100112E0
bool sub_100112E0()
{
  SC_HANDLE v1; // eax
  DWORD v2; // [esp+Ch] [ebp-2A4h]
  BOOL started; // [esp+90h] [ebp-220h]
  HANDLE hHandle; // [esp+94h] [ebp-21Ch]
  WCHAR BinaryPathName[262]; // [esp+98h] [ebp-218h] BYREF
  SC_HANDLE hService; // [esp+2A4h] [ebp-Ch]
  SC_HANDLE hSCManager; // [esp+2A8h] [ebp-8h]
  DWORD dwErrCode; // [esp+2ACh] [ebp-4h]

  hSCManager = nullptr;
  hService = nullptr;
  hHandle = CreateMutexW(nullptr, false, L"InnoNetFDriverInstallMutex");
  if ( hHandle == nullptr )
    return false;
  v2 = WaitForSingleObject(hHandle, 0xFFFFFFFF);
  if ( v2 != 0 && v2 != 128 )
    return false;
  v1 = OpenSCManagerW(nullptr, nullptr, 0xF003Fu);
  hSCManager = v1;
  if ( v1 != nullptr )
  {
    hService = OpenServiceW(hSCManager, L"innonetf", 0xF01FFu);
    if ( hService == nullptr && (unsigned __int8)sub_100115B0(BinaryPathName) != 0 )
    {
      hService = CreateServiceW(
                   hSCManager,
                   L"innonetf",
                   L"innonetf",
                   0xF01FFu,
                   1u,
                   3u,
                   1u,
                   BinaryPathName,
                   nullptr,
                   nullptr,
                   nullptr,
                   nullptr,
                   nullptr);
      if ( hService != nullptr )
      {
        sub_100118D0((BYTE *)BinaryPathName);
      }
      else if ( GetLastError() == 1073 )
      {
        hService = OpenServiceW(hSCManager, L"innonetf", 0xF01FFu);
      }
    }
  }
  LOBYTE(started) = hService != nullptr;
  if ( hService != nullptr )
  {
    started = StartServiceW(hService, 0, nullptr);
    if ( started )
      DeleteService(hService);
    else
      started = GetLastError() == 1056;
  }
  dwErrCode = GetLastError();
  if ( hSCManager != nullptr )
    CloseServiceHandle(hSCManager);
  if ( hService != nullptr )
    CloseServiceHandle(hService);
  ReleaseMutex(hHandle);
  CloseHandle(hHandle);
  SetLastError(dwErrCode);
  return started;
}

// Address: 0x100115B0
char __cdecl sub_100115B0(LPWSTR lpFilename)
{
  int v2; // [esp+54h] [ebp-8h] BYREF
  DWORD ModuleFileNameW; // [esp+58h] [ebp-4h]

  if ( (unsigned __int8)sub_10011AA0() != 0 )
  {
    if ( (unsigned __int8)sub_10011A40(L"\\innonetf.sys", 260, &v2) == 0 )
    {
LABEL_16:
      SetLastError(0xA1u);
      return 0;
    }
  }
  else if ( (unsigned __int8)sub_10011A40(L"\\innonetf.sys", 260, &v2) == 0 )
  {
    goto LABEL_16;
  }
  ModuleFileNameW = GetModuleFileNameW(hModule, lpFilename, 0x104u);
  if ( ModuleFileNameW == 0 )
    return 0;
  while ( ModuleFileNameW != 0 && lpFilename[ModuleFileNameW] != 92 )
    --ModuleFileNameW;
  if ( lpFilename[ModuleFileNameW] != 92
    || ModuleFileNameW + v2 + 1 >= 0x104
    || (unsigned __int8)sub_100119A0(&lpFilename[ModuleFileNameW], 260 - ModuleFileNameW - 1, L"\\innonetf.sys") == 0 )
  {
    goto LABEL_16;
  }
  return 1;
}

// Address: 0x10011750
int __cdecl sub_10011750(
        HANDLE hFile,
        DWORD dwIoControlCode,
        LPVOID lpInBuffer,
        LPVOID lpOutBuffer,
        DWORD nOutBufferSize,
        DWORD *a6)
{
  void *lpTlsValue; // [esp+4Ch] [ebp-1Ch]
  DWORD NumberOfBytesTransferred; // [esp+50h] [ebp-18h] BYREF
  struct _OVERLAPPED Overlapped; // [esp+54h] [ebp-14h] BYREF

  lpTlsValue = TlsGetValue(dwTlsIndex);
  if ( lpTlsValue == nullptr )
  {
    lpTlsValue = CreateEventW(nullptr, false, false, nullptr);
    if ( lpTlsValue == nullptr )
      return 0;
    TlsSetValue(dwTlsIndex, lpTlsValue);
  }
  sub_10011028((int)&Overlapped, 0, 20);
  Overlapped.hEvent = lpTlsValue;
  if ( sub_10011860(hFile, dwIoControlCode, lpInBuffer, lpOutBuffer, nOutBufferSize, (int)a6, &Overlapped) == 0 )
  {
    if ( GetLastError() != 997 || !GetOverlappedResult(hFile, &Overlapped, &NumberOfBytesTransferred, true) )
      return 0;
    if ( a6 != nullptr )
      *a6 = NumberOfBytesTransferred;
  }
  return 1;
}

// Address: 0x10011860
BOOL __cdecl sub_10011860(
        HANDLE hDevice,
        DWORD dwIoControlCode,
        LPVOID lpInBuffer,
        LPVOID lpOutBuffer,
        DWORD nOutBufferSize,
        DWORD *a6,
        LPOVERLAPPED lpOverlapped)
{
  DWORD BytesReturned; // [esp+4Ch] [ebp-8h] BYREF
  BOOL v9; // [esp+50h] [ebp-4h]

  v9 = DeviceIoControl(
         hDevice,
         dwIoControlCode,
         lpInBuffer,
         0x10u,
         lpOutBuffer,
         nOutBufferSize,
         &BytesReturned,
         lpOverlapped);
  if ( v9 && a6 != nullptr )
    *a6 = BytesReturned;
  return v9;
}

// Address: 0x100118D0
int __cdecl sub_100118D0(BYTE *lpData)
{
  int result; // eax
  BYTE Data[4]; // [esp+4Ch] [ebp-Ch] BYREF
  int v3; // [esp+50h] [ebp-8h] BYREF
  HKEY phkResult; // [esp+54h] [ebp-4h] BYREF

  *(_DWORD *)Data = 7;
  result = sub_10011A40(lpData, 260, &v3);
  if ( (_BYTE)result != 0 )
  {
    result = RegCreateKeyExA(
               HKEY_LOCAL_MACHINE,
               "System\\CurrentControlSet\\Services\\EventLog\\System\\InnoNetF",
               0,
               nullptr,
               1u,
               2u,
               nullptr,
               &phkResult,
               nullptr);
    if ( result == 0 )
    {
      RegSetValueExW(phkResult, L"EventMessageFile", 0, 1u, lpData, 2 * v3 + 2);
      RegSetValueExA(phkResult, "TypesSupported", 0, 4u, Data, 4u);
      return RegCloseKey(phkResult);
    }
  }
  return result;
}

// Address: 0x100119A0
char __cdecl sub_100119A0(int a1, unsigned int a2, int a3)
{
  unsigned int i; // [esp+4Ch] [ebp-4h]

  for ( i = 0; *(_WORD *)(a3 + 2 * i) != 0; ++i )
  {
    if ( i > a2 )
      return 0;
    *(_WORD *)(a1 + 2 * i) = *(_WORD *)(a3 + 2 * i);
  }
  if ( i > a2 )
    return 0;
  *(_WORD *)(a1 + 2 * i) = *(_WORD *)(a3 + 2 * i);
  return 1;
}

// Address: 0x10011A40
char __cdecl sub_10011A40(int a1, unsigned int a2, unsigned int *a3)
{
  unsigned int i; // [esp+4Ch] [ebp-4h]

  for ( i = 0; *(_WORD *)(a1 + 2 * i) != 0; ++i )
  {
    if ( i > a2 )
      return 0;
  }
  *a3 = i;
  return 1;
}

// Address: 0x10011AA0
bool sub_10011AA0()
{
  HANDLE CurrentProcess; // eax
  BOOL Wow64Process; // [esp+50h] [ebp-4h] BYREF

  CurrentProcess = GetCurrentProcess();
  return IsWow64Process(CurrentProcess, &Wow64Process) && !Wow64Process;
}

// Address: 0x10011B00
BOOL __cdecl HscNetFltClose_0(HANDLE hObject)
{
  return CloseHandle(hObject);
}

// Address: 0x10011B20
int __cdecl HscNetFltGetParam_0(HANDLE hFile, int a2, LPVOID lpOutBuffer)
{
  _DWORD InBuffer[4]; // [esp+4Ch] [ebp-10h] BYREF

  sub_10011028((int)InBuffer, 0, 16);
  InBuffer[0] = a2;
  return sub_10011750(hFile, 0x12649Au, InBuffer, lpOutBuffer, 8u, nullptr);
}

// Address: 0x10011B80
int __cdecl HscNetFltInitialize_0(int a1, __int16 a2, int a3, int a4)
{
  DWORD v5; // [esp+10h] [ebp-ACh]
  int OutBuffer; // [esp+54h] [ebp-68h] BYREF
  int v7; // [esp+58h] [ebp-64h]
  unsigned int v8; // [esp+5Ch] [ebp-60h]
  int v9; // [esp+60h] [ebp-5Ch]
  int v10; // [esp+64h] [ebp-58h]
  _DWORD InBuffer[4]; // [esp+94h] [ebp-28h] BYREF
  __int64 v12; // [esp+A4h] [ebp-18h]
  DWORD dwErrCode; // [esp+ACh] [ebp-10h]
  HANDLE hObject; // [esp+B0h] [ebp-Ch]

  if ( a1 != 0 || (a4 | a3 & 0xFFFFFFC0) != 0 || (a3 & 3) == 3 || (a3 & 0xC) == 0xC || a2 < -30000 || a2 > 30000 )
  {
    SetLastError(0x57u);
    return -1;
  }
  v12 = 0;
  hObject = CreateFileW(L"\\\\.\\innonetf", 0xC0000000, 0, nullptr, 3u, 0x40000080u, (HANDLE)0xFFFFFFFF);
  if ( hObject == (HANDLE)-1 )
  {
    dwErrCode = GetLastError();
    if ( dwErrCode != 2 && dwErrCode != 3 )
    {
      SetLastError(dwErrCode);
      return -1;
    }
    if ( (a3 & 0x10) != 0 )
    {
      SetLastError(0x424u);
      return -1;
    }
    SetLastError(0);
    if ( !sub_100112E0() )
    {
      dwErrCode = GetLastError();
      if ( dwErrCode != 0 )
        v5 = dwErrCode;
      else
        v5 = 110;
      dwErrCode = v5;
      SetLastError(v5);
      return -1;
    }
    hObject = CreateFileW(L"\\\\.\\innonetf", 0xC0000000, 0, nullptr, 3u, 0x40000080u, (HANDLE)0xFFFFFFFF);
    if ( hObject == (HANDLE)-1 )
    {
      dwErrCode = GetLastError();
      SetLastError(dwErrCode);
      return -1;
    }
  }
  sub_10011028((int)InBuffer, 0, 16);
  InBuffer[0] = 0;
  InBuffer[1] = a2 + 30000;
  InBuffer[2] = a3;
  InBuffer[3] = a4;
  sub_10011028((int)&OutBuffer, 0, 64);
  OutBuffer = 1768183588;
  v7 = 1280066678;
  v8 = 2;
  v9 = 2;
  v10 = 32;
  if ( sub_10011750(hObject, 0x12E486u, InBuffer, &OutBuffer, 0x40u, nullptr) != 0 )
  {
    if ( OutBuffer == 1768183587 && v7 == 1398362998 && v8 >= 2 )
    {
      return (int)hObject;
    }
    else
    {
      CloseHandle(hObject);
      SetLastError(0x28Eu);
      return -1;
    }
  }
  else
  {
    dwErrCode = GetLastError();
    CloseHandle(hObject);
    SetLastError(dwErrCode);
    return -1;
  }
}

// Address: 0x10011F40
int __cdecl HscNetFltRecv_0(HANDLE hFile, LPVOID lpOutBuffer, DWORD nOutBufferSize, DWORD *a4, int a5)
{
  _DWORD InBuffer[2]; // [esp+4Ch] [ebp-10h] BYREF
  __int64 v7; // [esp+54h] [ebp-8h]

  sub_10011028((int)InBuffer, 0, 16);
  InBuffer[0] = a5;
  InBuffer[1] = 0;
  v7 = 0;
  return sub_10011750(hFile, 0x12648Eu, InBuffer, lpOutBuffer, nOutBufferSize, a4);
}

// Address: 0x10011FB0
int __cdecl HscNetFltRecvEx_0(
        HANDLE hDevice,
        LPVOID lpOutBuffer,
        DWORD nOutBufferSize,
        DWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        LPOVERLAPPED lpOverlapped)
{
  _DWORD InBuffer[4]; // [esp+4Ch] [ebp-10h] BYREF

  sub_10011028((int)InBuffer, 0, 16);
  InBuffer[0] = a6;
  InBuffer[1] = 0;
  InBuffer[2] = a7;
  InBuffer[3] = 0;
  if ( a5 != 0 )
  {
    SetLastError(0x57u);
    return 0;
  }
  else if ( lpOverlapped != nullptr )
  {
    return sub_10011860(hDevice, 0x12648Eu, InBuffer, lpOutBuffer, nOutBufferSize, a4, lpOverlapped);
  }
  else
  {
    return sub_10011750(hDevice, 0x12648Eu, InBuffer, lpOutBuffer, nOutBufferSize, a4);
  }
}

// Address: 0x10012070
int __cdecl HscNetFltSend_0(HANDLE hFile, LPVOID lpOutBuffer, DWORD nOutBufferSize, DWORD *a4, int a5)
{
  _DWORD InBuffer[4]; // [esp+4Ch] [ebp-10h] BYREF

  sub_10011028((int)InBuffer, 0, 16);
  InBuffer[0] = a5;
  InBuffer[1] = 0;
  InBuffer[2] = 80;
  InBuffer[3] = 0;
  return sub_10011750(hFile, 0x12E491u, InBuffer, lpOutBuffer, nOutBufferSize, a4);
}

// Address: 0x100120E0
int __cdecl HscNetFltSendEx_0(
        HANDLE hDevice,
        LPVOID lpOutBuffer,
        DWORD nOutBufferSize,
        DWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        LPOVERLAPPED lpOverlapped)
{
  _DWORD InBuffer[4]; // [esp+4Ch] [ebp-10h] BYREF

  sub_10011028((int)InBuffer, 0, 16);
  InBuffer[0] = a6;
  InBuffer[1] = 0;
  InBuffer[2] = a7;
  InBuffer[3] = 0;
  if ( a5 != 0 )
  {
    SetLastError(0x57u);
    return 0;
  }
  else if ( lpOverlapped != nullptr )
  {
    return sub_10011860(hDevice, 0x12E491u, InBuffer, lpOutBuffer, nOutBufferSize, a4, lpOverlapped);
  }
  else
  {
    return sub_10011750(hDevice, 0x12E491u, InBuffer, lpOutBuffer, nOutBufferSize, a4);
  }
}

// Address: 0x100121A0
int __cdecl HscNetFltSetParam_0(HANDLE hFile, int a2, int a3, int a4)
{
  _DWORD InBuffer[4]; // [esp+4Ch] [ebp-10h] BYREF

  sub_10011028((int)InBuffer, 0, 16);
  InBuffer[2] = a2;
  InBuffer[0] = a3;
  InBuffer[1] = a4;
  return sub_10011750(hFile, 0x12E495u, InBuffer, nullptr, 0, nullptr);
}

// Address: 0x10012200
int __cdecl HscNetFltShutdown_0(HANDLE hFile, int a2)
{
  _DWORD InBuffer[4]; // [esp+4Ch] [ebp-10h] BYREF

  sub_10011028((int)InBuffer, 0, 16);
  InBuffer[0] = a2;
  return sub_10011750(hFile, 0x12E49Du, InBuffer, nullptr, 0, nullptr);
}

// Address: 0x10012260
int __cdecl HscNetFltStart_0(HANDLE hObject, int a2, int a3)
{
  int nOutBufferSize; // [esp+4Ch] [ebp-40h]
  int v5; // [esp+50h] [ebp-3Ch] BYREF
  unsigned int v6; // [esp+54h] [ebp-38h]
  int v7; // [esp+58h] [ebp-34h]
  int v8; // [esp+68h] [ebp-24h]
  int v9; // [esp+6Ch] [ebp-20h]
  _DWORD InBuffer[4]; // [esp+70h] [ebp-1Ch] BYREF
  LPVOID lpOutBuffer; // [esp+80h] [ebp-Ch]
  HANDLE hHeap; // [esp+84h] [ebp-8h]
  DWORD dwErrCode; // [esp+88h] [ebp-4h]

  lpOutBuffer = nullptr;
  if ( a2 != 0 && a3 != 0 )
  {
    sub_10011028((int)&v5, 0, 24);
    LOWORD(v5) = v5 & 0xF800 | 2;
    LOWORD(v5) = v5 & 0x7FF | 0x800;
    v5 = (unsigned __int16)v5 | 0x10000;
    v6 = v6 & 0xFFFF0000 | 0x7FFF;
    v6 &= ~0x10000u;
    v6 &= 0x1FFFFu;
    v7 = 0;
    nOutBufferSize = 24 * (a3 + 1);
    hHeap = HeapCreate(1u, 0x3000u, 0x20000u);
    if ( hHeap != nullptr )
    {
      lpOutBuffer = HeapAlloc(hHeap, 0, nOutBufferSize + 4096);
      if ( lpOutBuffer != nullptr )
      {
        v8 = 224;
        v9 = 0;
        sub_10011023((int)lpOutBuffer, (int)&v5, 24);
        sub_10011023((int)lpOutBuffer + 24, a2, 24 * a3);
        sub_10011028((int)InBuffer, 0, 16);
        InBuffer[0] = v8;
        InBuffer[1] = v9;
        if ( sub_10011750(hObject, 0x12E489u, InBuffer, lpOutBuffer, nOutBufferSize, nullptr) != 0 )
        {
          HeapDestroy(hHeap);
          return 1;
        }
        else
        {
          dwErrCode = GetLastError();
          CloseHandle(hObject);
          HeapDestroy(hHeap);
          SetLastError(dwErrCode);
          return 0;
        }
      }
      else
      {
        dwErrCode = GetLastError();
        HeapDestroy(hHeap);
        SetLastError(dwErrCode);
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    SetLastError(0xDu);
    return 0;
  }
}

// Address: 0x100124A0
int __cdecl sub_100124A0(int a1, int a2, unsigned int a3)
{
  unsigned int i; // [esp+4Ch] [ebp-4h]

  for ( i = 0; i < a3; ++i )
    *(_BYTE *)(i + a1) = *(_BYTE *)(i + a2);
  return a1;
}

// Address: 0x100124F0
int __cdecl sub_100124F0(int a1, char a2, unsigned int a3)
{
  unsigned int i; // [esp+4Ch] [ebp-4h]

  for ( i = 0; i < a3; ++i )
    *(_BYTE *)(i + a1) = a2;
  return a1;
}

