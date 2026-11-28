// Decompiled from SimpleSC.dll (ClassM_3.0.500\ClassM_x64_unpacked\$PLUGINSDIR\SimpleSC.dll)

// Address: 0x401060
// attributes: thunk
HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
{
  return __imp_GetStdHandle(nStdHandle);
}

// Address: 0x401068
// attributes: thunk
void __stdcall RaiseException(
        DWORD dwExceptionCode,
        DWORD dwExceptionFlags,
        DWORD nNumberOfArguments,
        const ULONG_PTR *lpArguments)
{
  __imp_RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments);
}

// Address: 0x401070
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x401078
// attributes: thunk
LONG __stdcall UnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return __imp_UnhandledExceptionFilter(ExceptionInfo);
}

// Address: 0x401080
// attributes: thunk
BOOL __stdcall WriteFile(
        HANDLE hFile,
        LPCVOID lpBuffer,
        DWORD nNumberOfBytesToWrite,
        LPDWORD lpNumberOfBytesWritten,
        LPOVERLAPPED lpOverlapped)
{
  return __imp_WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
}

// Address: 0x401088
// attributes: thunk
LPSTR __stdcall CharNextA(LPCSTR lpsz)
{
  return __imp_CharNextA(lpsz);
}

// Address: 0x401090
// attributes: thunk
void __stdcall __noreturn ExitProcess(UINT uExitCode)
{
  __imp_ExitProcess(uExitCode);
}

// Address: 0x401098
// attributes: thunk
int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
  return __imp_MessageBoxA(hWnd, lpText, lpCaption, uType);
}

// Address: 0x4010A0
// attributes: thunk
BOOL __stdcall FindClose(HANDLE hFindFile)
{
  return __imp_FindClose(hFindFile);
}

// Address: 0x4010A8
// attributes: thunk
HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
{
  return __imp_FindFirstFileA(lpFileName, lpFindFileData);
}

// Address: 0x4010B0
// attributes: thunk
BOOL __stdcall FreeLibrary(HMODULE hLibModule)
{
  return __imp_FreeLibrary(hLibModule);
}

// Address: 0x4010B8
// attributes: thunk
LPSTR __stdcall GetCommandLineA()
{
  return __imp_GetCommandLineA();
}

// Address: 0x4010C0
// attributes: thunk
DWORD __stdcall GetLastError()
{
  return __imp_GetLastError();
}

// Address: 0x4010C8
// attributes: thunk
int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
  return __imp_GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
}

// Address: 0x4010D0
// attributes: thunk
DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
{
  return __imp_GetModuleFileNameA(hModule, lpFilename, nSize);
}

// Address: 0x4010D8
// attributes: thunk
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
{
  return __imp_GetModuleHandleA(lpModuleName);
}

// Address: 0x4010E0
// attributes: thunk
FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
{
  return __imp_GetProcAddress(hModule, lpProcName);
}

// Address: 0x4010E8
// attributes: thunk
void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)
{
  __imp_GetStartupInfoA(lpStartupInfo);
}

// Address: 0x4010F0
// attributes: thunk
LCID __stdcall GetThreadLocale()
{
  return __imp_GetThreadLocale();
}

// Address: 0x4010F8
// attributes: thunk
HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)
{
  return __imp_LoadLibraryExA(lpLibFileName, hFile, dwFlags);
}

// Address: 0x401100
// attributes: thunk
int __stdcall LoadStringA(HINSTANCE hInstance, UINT uID, LPSTR lpBuffer, int nBufferMax)
{
  return __imp_LoadStringA(hInstance, uID, lpBuffer, nBufferMax);
}

// Address: 0x401108
// attributes: thunk
LPSTR __stdcall lstrcpynA(LPSTR lpString1, LPCSTR lpString2, int iMaxLength)
{
  return __imp_lstrcpynA(lpString1, lpString2, iMaxLength);
}

// Address: 0x401110
// attributes: thunk
int __stdcall lstrlenA(LPCSTR lpString)
{
  return __imp_lstrlenA(lpString);
}

// Address: 0x401118
// attributes: thunk
int __stdcall MultiByteToWideChar(
        UINT CodePage,
        DWORD dwFlags,
        LPCSTR lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpWideCharStr,
        int cchWideChar)
{
  return __imp_MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

// Address: 0x401120
// attributes: thunk
LONG __stdcall RegCloseKey(HKEY hKey)
{
  return __imp_RegCloseKey(hKey);
}

// Address: 0x401128
// attributes: thunk
LONG __stdcall RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult)
{
  return __imp_RegOpenKeyExA(hKey, lpSubKey, ulOptions, samDesired, phkResult);
}

// Address: 0x401130
// attributes: thunk
LONG __stdcall RegQueryValueExA(
        HKEY hKey,
        LPCSTR lpValueName,
        LPDWORD lpReserved,
        LPDWORD lpType,
        LPBYTE lpData,
        LPDWORD lpcbData)
{
  return __imp_RegQueryValueExA(hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}

// Address: 0x401138
// attributes: thunk
int __stdcall WideCharToMultiByte(
        UINT CodePage,
        DWORD dwFlags,
        LPCWSTR lpWideCharStr,
        int cchWideChar,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        LPCSTR lpDefaultChar,
        LPBOOL lpUsedDefaultChar)
{
  return __imp_WideCharToMultiByte(
           CodePage,
           dwFlags,
           lpWideCharStr,
           cchWideChar,
           lpMultiByteStr,
           cbMultiByte,
           lpDefaultChar,
           lpUsedDefaultChar);
}

// Address: 0x401140
// attributes: thunk
BSTR __stdcall SysAllocStringLen(const OLECHAR *a1, UINT a2)
{
  return __imp_SysAllocStringLen(a1, a2);
}

// Address: 0x401148
// attributes: thunk
INT __stdcall SysReAllocStringLen(BSTR *a1, const OLECHAR *a2, UINT a3)
{
  return __imp_SysReAllocStringLen(a1, a2, a3);
}

// Address: 0x401150
// attributes: thunk
void __stdcall SysFreeString(BSTR a1)
{
  __imp_SysFreeString(a1);
}

// Address: 0x401158
// attributes: thunk
DWORD __stdcall GetCurrentThreadId()
{
  return __imp_GetCurrentThreadId();
}

// Address: 0x401160
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int unknown_libname_3()
{
  int v0; // ebx
  struct _STARTUPINFOA v2; // [esp+0h] [ebp-48h] BYREF

  v0 = 10;
  GetStartupInfoA(&v2);
  if ( (v2.dwFlags & 1) != 0 )
    return v2.wShowWindow;
  return v0;
}

// Address: 0x401184
// attributes: thunk
HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes)
{
  return __imp_LocalAlloc(uFlags, uBytes);
}

// Address: 0x40118C
// attributes: thunk
HLOCAL __stdcall LocalFree(HLOCAL hMem)
{
  return __imp_LocalFree(hMem);
}

// Address: 0x401194
// attributes: thunk
LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect)
{
  return __imp_VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
}

// Address: 0x40119C
// attributes: thunk
BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType)
{
  return __imp_VirtualFree(lpAddress, dwSize, dwFreeType);
}

// Address: 0x4011A4
// attributes: thunk
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_InitializeCriticalSection(lpCriticalSection);
}

// Address: 0x4011AC
// attributes: thunk
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_EnterCriticalSection(lpCriticalSection);
}

// Address: 0x4011B4
// attributes: thunk
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_LeaveCriticalSection(lpCriticalSection);
}

// Address: 0x4011BC
// attributes: thunk
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_DeleteCriticalSection(lpCriticalSection);
}

// Address: 0x4011C4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int unknown_libname_4()
{
  _DWORD *v0; // ecx
  int result; // eax
  int i; // edx

  if ( dword_40E5DC == 0 )
  {
    v0 = LocalAlloc(0, 0x644u);
    if ( v0 == nullptr )
      return 0;
    *v0 = dword_40E5D8;
    dword_40E5D8 = v0;
    for ( i = 0; i != 100; ++i )
    {
      v0[4 * i + 1] = dword_40E5DC;
      dword_40E5DC = (int)&v0[4 * i + 1];
    }
  }
  result = dword_40E5DC;
  dword_40E5DC = *(_DWORD *)dword_40E5DC;
  return result;
}

// Address: 0x401214
_DWORD *__fastcall sub_401214(_DWORD *result)
{
  *result = result;
  result[1] = result;
  return result;
}

// Address: 0x40121C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
char __fastcall unknown_libname_5(int *a1, int *a2)
{
  int *v4; // eax
  int v6; // edx

  v4 = (int *)unknown_libname_4();
  if ( v4 == nullptr )
    return 0;
  v4[2] = *a2;
  v4[3] = a2[1];
  v6 = *a1;
  *v4 = *a1;
  v4[1] = (int)a1;
  *(_DWORD *)(v6 + 4) = v4;
  *a1 = (int)v4;
  return 1;
}

// Address: 0x40124C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int *__fastcall unknown_libname_6(int *result)
{
  int *v1; // edx
  int v2; // ecx

  v1 = (int *)result[1];
  v2 = *result;
  *v1 = *result;
  *(_DWORD *)(v2 + 4) = v1;
  *result = dword_40E5DC;
  dword_40E5DC = (int)result;
  return result;
}

// Address: 0x401264
char __fastcall System::_16456(int *a1, int *a2, int *a3)
{
  int *v5; // ebx
  int v6; // edi
  char result; // al

  v5 = (int *)*a1;
  *a3 = *a2;
  a3[1] = a2[1];
  do
  {
    v6 = *v5;
    if ( *a3 == v5[3] + v5[2] )
    {
      unknown_libname_6(v5);
      *a3 = v5[2];
      a3[1] += v5[3];
    }
    else if ( a3[1] + *a3 == v5[2] )
    {
      unknown_libname_6(v5);
      a3[1] += v5[3];
    }
    v5 = (int *)v6;
  }
  while ( a1 != (int *)v6 );
  result = unknown_libname_5(a1, a3);
  if ( result == 0 )
  {
    *a3 = 0;
    return 0;
  }
  return result;
}

// Address: 0x4012D4
char __fastcall System::_16457(int *a1, unsigned int *a2)
{
  int *v2; // ebx
  unsigned int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // edi
  int v8[6]; // [esp+0h] [ebp-18h] BYREF

  v2 = a1;
  while ( 1 )
  {
    v4 = *a2;
    v5 = v2[2];
    if ( *a2 >= v5 && a2[1] + v4 <= v2[3] + v5 )
      break;
    v2 = (int *)*v2;
    if ( a1 == v2 )
      return 0;
  }
  if ( v4 == v5 )
  {
    v2[2] += a2[1];
    v2[3] -= a2[1];
    if ( v2[3] == 0 )
      unknown_libname_6(v2);
  }
  else
  {
    v6 = a2[1];
    if ( v6 + v4 == v2[3] + v5 )
    {
      v2[3] -= v6;
    }
    else
    {
      v8[0] = a2[1] + *a2;
      v8[1] = v2[3] + v2[2] - v8[0];
      v2[3] = v4 - v5;
      if ( unknown_libname_5(v2, v8) == 0 )
        return 0;
    }
  }
  return 1;
}

// Address: 0x401368
// BDS 2005-2007 and Delphi6-7 Visual Component Library
char __fastcall unknown_libname_7(int a1, int *a2)
{
  SIZE_T v3; // esi
  LPVOID v4; // eax

  if ( a1 >= 0x100000 )
    v3 = (a1 + 0xFFFF) & 0xFFFF0000;
  else
    v3 = 0x100000;
  a2[1] = v3;
  v4 = VirtualAlloc(nullptr, v3, 0x2000u, 1u);
  *a2 = (int)v4;
  if ( v4 != nullptr )
  {
    LOBYTE(v4) = unknown_libname_5(&dword_40E5E0, a2);
    if ( (_BYTE)v4 == 0 )
    {
      VirtualFree((LPVOID)*a2, 0, 0x8000u);
      *a2 = 0;
      LOBYTE(v4) = 0;
    }
  }
  return (char)v4;
}

// Address: 0x4013CC
// BDS 2005-2007 and Delphi6-7 Visual Component Library
char __fastcall unknown_libname_8(LPVOID lpAddress, int a2, int *a3)
{
  LPVOID v6; // eax
  SIZE_T v7; // esi

  a3[1] = 0x100000;
  v6 = VirtualAlloc(lpAddress, 0x100000u, 0x2000u, 4u);
  *a3 = (int)v6;
  if ( v6 == nullptr )
  {
    v7 = (a2 + 0xFFFF) & 0xFFFF0000;
    a3[1] = v7;
    v6 = VirtualAlloc(lpAddress, v7, 0x2000u, 4u);
    *a3 = (int)v6;
  }
  if ( *a3 != 0 )
  {
    LOBYTE(v6) = unknown_libname_5(&dword_40E5E0, a3);
    if ( (_BYTE)v6 == 0 )
    {
      VirtualFree((LPVOID)*a3, 0, 0x8000u);
      *a3 = 0;
      LOBYTE(v6) = 0;
    }
  }
  return (char)v6;
}

// Address: 0x401444
unsigned int *__fastcall System::_16441(unsigned int a1, int a2, unsigned int *a3)
{
  int *i; // ebx
  int v5; // edi
  void *v6; // esi
  unsigned int *result; // eax
  unsigned int v9; // [esp+8h] [ebp-1Ch]
  unsigned int v10; // [esp+Ch] [ebp-18h]
  unsigned int v11; // [esp+10h] [ebp-14h]

  v9 = -1;
  v10 = 0;
  v11 = a1 + a2;
  for ( i = (int *)dword_40E5E0; i != &dword_40E5E0; i = (int *)v5 )
  {
    v5 = *i;
    v6 = (void *)i[2];
    if ( a1 <= (unsigned int)v6 && (unsigned int)v6 + i[3] <= v11 )
    {
      if ( (unsigned int)v6 < v9 )
        v9 = i[2];
      if ( (unsigned int)v6 + i[3] > v10 )
        v10 = (unsigned int)v6 + i[3];
      if ( !VirtualFree(v6, 0, 0x8000u) )
        dword_40E5BC = 1;
      unknown_libname_6(i);
    }
  }
  result = a3;
  *a3 = 0;
  if ( v10 != 0 )
  {
    *a3 = v9;
    a3[1] = v10 - v9;
    return (unsigned int *)(v10 - v9);
  }
  return result;
}

// Address: 0x4014FC
// BDS 2005-2007 and Delphi6-7 Visual Component Library
unsigned int *__fastcall unknown_libname_9(int a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ebp
  unsigned int *result; // eax
  int *i; // esi
  char *v6; // ebx
  char *v7; // edi
  unsigned int v9; // [esp+8h] [ebp-14h]

  v3 = a1 & 0xFFFFF000;
  v9 = (a2 + a1 + 4095) & 0xFFFFF000;
  *a3 = a1 & 0xFFFFF000;
  result = (unsigned int *)(v9 - (a1 & 0xFFFFF000));
  a3[1] = (unsigned int)result;
  for ( i = (int *)dword_40E5E0; i != &dword_40E5E0; i = (int *)*i )
  {
    v6 = (char *)i[2];
    v7 = &v6[i[3]];
    if ( v3 > (unsigned int)v6 )
      v6 = (char *)v3;
    if ( (unsigned int)v7 > v9 )
      v7 = (char *)v9;
    if ( v7 > v6 )
    {
      result = (unsigned int *)VirtualAlloc(v6, v7 - v6, 0x1000u, 4u);
      if ( result == nullptr )
      {
        *a3 = 0;
        return a3;
      }
    }
  }
  return result;
}

// Address: 0x401590
// BDS 2005-2007 and Delphi6-7 Visual Component Library
unsigned int __fastcall unknown_libname_10(int a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ebp
  unsigned int result; // eax
  int *i; // esi
  char *v6; // ebx
  char *v7; // edi
  unsigned int v8; // [esp+0h] [ebp-14h]

  v8 = (a1 + 4095) & 0xFFFFF000;
  v3 = (a2 + a1) & 0xFFFFF000;
  *a3 = v8;
  result = v3 - v8;
  a3[1] = v3 - v8;
  for ( i = (int *)dword_40E5E0; i != &dword_40E5E0; i = (int *)*i )
  {
    v6 = (char *)i[2];
    v7 = &v6[i[3]];
    if ( (unsigned int)v6 < v8 )
      v6 = (char *)v8;
    if ( v3 < (unsigned int)v7 )
      v7 = (char *)v3;
    if ( v7 > v6 )
    {
      result = VirtualFree(v6, v7 - v6, 0x4000u);
      if ( result == 0 )
        dword_40E5BC = 2;
    }
  }
  return result;
}

// Address: 0x401610
// BDS 2005-2007 and Delphi6-7 Visual Component Library
char __fastcall unknown_libname_11(int a1, int *a2)
{
  signed int v3; // edi
  int *i; // ebx
  int v5; // eax
  int v7[6]; // [esp+0h] [ebp-18h] BYREF

  v3 = (a1 + 0x3FFF) & 0xFFFFC000;
LABEL_2:
  for ( i = (int *)dword_40E5F0[0]; ; i = (int *)*i )
  {
    if ( i == dword_40E5F0 )
    {
      LOBYTE(v5) = unknown_libname_7(v3, a2);
      if ( *a2 == 0 )
        return v5;
      System::_16456(dword_40E5F0, a2, v7);
      if ( v7[0] == 0 )
      {
        System::_16441(*a2, a2[1], (unsigned int *)v7);
        *a2 = 0;
        LOBYTE(v5) = 0;
        return v5;
      }
      goto LABEL_2;
    }
    if ( v3 <= i[3] )
      break;
  }
  LOBYTE(v5) = (unsigned __int8)unknown_libname_9(i[2], v3, (unsigned int *)a2);
  if ( *a2 != 0 )
  {
    i[2] += a2[1];
    v5 = a2[1];
    i[3] -= v5;
    if ( i[3] == 0 )
      LOBYTE(v5) = (unsigned __int8)unknown_libname_6(i);
  }
  return v5;
}

// Address: 0x4016A0
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int *__fastcall unknown_libname_12(LPVOID lpAddress, int a2, unsigned int *a3)
{
  signed int v4; // edi
  int *i; // ebx
  int *result; // eax
  int v8[2]; // [esp+4h] [ebp-20h] BYREF
  int v9[6]; // [esp+Ch] [ebp-18h] BYREF

  v4 = (a2 + 0x3FFF) & 0xFFFFC000;
  while ( 1 )
  {
    while ( 1 )
    {
      for ( i = (int *)dword_40E5F0[0]; i != dword_40E5F0 && lpAddress != (LPVOID)i[2]; i = (int *)*i )
        ;
      if ( lpAddress != (LPVOID)i[2] )
        break;
      if ( v4 <= i[3] )
        goto LABEL_14;
      unknown_libname_8((LPVOID)(i[3] + i[2]), v4 - i[3], v8);
      if ( v8[0] == 0 )
        break;
      System::_16456(dword_40E5F0, v8, v9);
      if ( v9[0] == 0 )
        goto LABEL_10;
    }
    unknown_libname_8(lpAddress, v4, v8);
    if ( v8[0] == 0 )
      break;
    System::_16456(dword_40E5F0, v8, v9);
    if ( v9[0] == 0 )
    {
LABEL_10:
      System::_16441(v8[0], v8[1], (unsigned int *)v9);
      *a3 = 0;
      return (int *)a3;
    }
  }
LABEL_14:
  if ( lpAddress == (LPVOID)i[2] && v4 <= i[3] )
  {
    unknown_libname_9(i[2], v4, a3);
    result = (int *)a3;
    if ( *a3 != 0 )
    {
      i[2] += a3[1];
      result = (int *)a3[1];
      i[3] -= (int)result;
      if ( i[3] == 0 )
        return unknown_libname_6(i);
    }
  }
  else
  {
    *a3 = 0;
    return (int *)a3;
  }
  return result;
}

// Address: 0x4017C4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
char __fastcall unknown_libname_13(int a1, int a2, unsigned int *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  char result; // al
  unsigned int v7; // [esp+4h] [ebp-1Ch] BYREF
  int v8; // [esp+8h] [ebp-18h]
  unsigned int v9; // [esp+Ch] [ebp-14h] BYREF
  int v10; // [esp+10h] [ebp-10h]

  v4 = (a1 + 0x3FFF) & 0xFFFFC000;
  v5 = (a1 + a2) & 0xFFFFC000;
  if ( v4 >= v5 )
  {
    *a3 = 0;
    return 0;
  }
  else
  {
    unknown_libname_10((a1 + 0x3FFF) & 0xFFFFC000, v5 - v4, a3);
    result = System::_16456(dword_40E5F0, (int *)a3, (int *)&v7);
    if ( v7 != 0 )
    {
      System::_16441(v7, v8, &v9);
      v7 = v9;
      result = v10;
      v8 = v10;
    }
    if ( v7 != 0 )
      return System::_16457(dword_40E5F0, &v7);
  }
  return result;
}

// Address: 0x401850
char System::_16447()
{
  int i; // eax
  unsigned int v2[2]; // [esp-Ch] [ebp-Ch] BYREF
  int *v3; // [esp-4h] [ebp-4h]
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v3 = &savedregs;
  v2[1] = (unsigned int)&loc_401906;
  v2[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v2);
  InitializeCriticalSection(&CriticalSection);
  if ( byte_40E045 != 0 )
    EnterCriticalSection(&CriticalSection);
  sub_401214(&dword_40E5E0);
  sub_401214(dword_40E5F0);
  sub_401214(dword_40E61C);
  hMem = LocalAlloc(0, 0xFF8u);
  if ( hMem != nullptr )
  {
    for ( i = 3; i != 1025; ++i )
      *((_DWORD *)hMem + i - 3) = 0;
    dword_40E604 = (int)&dword_40E600;
    dword_40E600 = &dword_40E600;
    dword_40E60C = (int)&dword_40E600;
    byte_40E5B8 = 1;
  }
  __writefsdword(0, v2[0]);
  v3 = (int *)&loc_40190D;
  if ( byte_40E045 != 0 )
    LeaveCriticalSection(&CriticalSection);
  return byte_40E5B8;
}

// Address: 0x401914
void System::_16448()
{
  int i; // ebx
  HLOCAL *j; // eax
  unsigned int v2[2]; // [esp-Ch] [ebp-10h] BYREF
  int *v3; // [esp-4h] [ebp-8h]
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  if ( byte_40E5B8 != 0 )
  {
    v3 = &savedregs;
    v2[1] = (unsigned int)&loc_4019EA;
    v2[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
    __writefsdword(0, (unsigned int)v2);
    if ( byte_40E045 != 0 )
      EnterCriticalSection(&CriticalSection);
    byte_40E5B8 = 0;
    LocalFree(hMem);
    hMem = nullptr;
    for ( i = dword_40E5E0; (int *)i != &dword_40E5E0; i = *(_DWORD *)i )
      VirtualFree(*(LPVOID *)(i + 8), 0, 0x8000u);
    sub_401214(&dword_40E5E0);
    sub_401214(dword_40E5F0);
    sub_401214(dword_40E61C);
    for ( j = (HLOCAL *)dword_40E5D8; dword_40E5D8 != nullptr; j = (HLOCAL *)dword_40E5D8 )
    {
      dword_40E5D8 = *j;
      LocalFree(j);
    }
    __writefsdword(0, v2[0]);
    v3 = (int *)&loc_4019F1;
    if ( byte_40E045 != 0 )
      LeaveCriticalSection(&CriticalSection);
    DeleteCriticalSection(&CriticalSection);
  }
}

// Address: 0x4019F4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_14(_DWORD *a1)
{
  _DWORD *v1; // edx
  int v2; // ecx
  _DWORD *result; // eax

  if ( a1 == (_DWORD *)dword_40E60C )
    dword_40E60C = a1[1];
  v1 = (_DWORD *)a1[1];
  v2 = a1[2];
  if ( v2 > 4096 )
  {
    result = (_DWORD *)*a1;
    *v1 = result;
    result[1] = v1;
  }
  else if ( a1 == v1 )
  {
    result = hMem;
    *((_DWORD *)hMem + v2 / 4 - 3) = 0;
  }
  else
  {
    *((_DWORD *)hMem + a1[2] / 4 - 3) = v1;
    result = (_DWORD *)*a1;
    *v1 = result;
    result[1] = v1;
  }
  return result;
}

// Address: 0x401A58
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int *__fastcall unknown_libname_15(unsigned int a1)
{
  int *i; // edx
  unsigned int v2; // ecx

  for ( i = (int *)dword_40E61C[0]; i != dword_40E61C; i = (int *)*i )
  {
    v2 = i[2];
    if ( a1 >= v2 && a1 < i[3] + v2 )
      return i;
  }
  dword_40E5BC = 3;
  return nullptr;
}

// Address: 0x401A88
// BDS 2005-2007 and Delphi6-7 Visual Component Library
unsigned int *__fastcall unknown_libname_16(unsigned int *result, int a2)
{
  unsigned int *v2; // ebx

  v2 = (unsigned int *)((char *)result + a2 - 4);
  if ( a2 < 16 )
  {
    if ( a2 >= 4 )
    {
      *result = a2 | 0x80000002;
      *v2 = a2 | 0x80000002;
    }
  }
  else
  {
    *v2 = -2147483641;
    return (unsigned int *)unknown_libname_21();
  }
  return result;
}

// Address: 0x401AB8
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_17(_DWORD *a1)
{
  ++dword_40E5AC;
  dword_40E5B0 += (*(a1 - 1) & 0x7FFFFFFC) - 4;
  return System::SysFreeMem(a1);
}

// Address: 0x401ADC
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_18(_DWORD *a1, int a2)
{
  _DWORD *result; // eax

  if ( a2 < 12 )
  {
    if ( a2 >= 4 )
      *a1 = a2 | 0x80000002;
    result = (_DWORD *)((char *)a1 + a2);
    *result &= ~1u;
  }
  else
  {
    *a1 = a2 | 2;
    return (_DWORD *)unknown_libname_17(a1 + 1);
  }
  return result;
}

// Address: 0x401B04
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_19(int a1)
{
  int v1; // edx
  int v2; // ebx
  _DWORD *v3; // eax
  int v4; // esi
  _DWORD *v5; // eax

  v1 = *(_DWORD *)(a1 - 4);
  if ( (v1 & 0x80000002) != 0x80000002 )
    dword_40E5BC = 4;
  v2 = v1 & 0x7FFFFFFC;
  v3 = (_DWORD *)(a1 - (v1 & 0x7FFFFFFC));
  if ( ((*v3 ^ v1) & 0xFFFFFFFE) != 0 )
    dword_40E5BC = 5;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    v4 = *(v3 - 1);
    v5 = (_DWORD *)((char *)v3 - v4);
    if ( v4 != v5[2] )
      dword_40E5BC = 6;
    unknown_libname_14(v5);
    v2 += v4;
  }
  return v2;
}

// Address: 0x401B74
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_20(int *a1)
{
  int *v1; // ebx
  int v2; // edi
  int v3; // eax
  int v4; // eax

  v1 = a1;
  v2 = 0;
  v3 = *a1;
  if ( v3 < 0 )
  {
    v2 = v3 & 0x7FFFFFFC;
    v1 = (int *)((char *)v1 + (v3 & 0x7FFFFFFC));
    v3 = *v1;
  }
  if ( (v3 & 2) == 0 )
  {
    unknown_libname_14(v1);
    v4 = v1[2];
    v2 += v4;
    *(int *)((char *)v1 + v4) &= ~1u;
  }
  return v2;
}

// Address: 0x401BAC
char __fastcall System::_16456_0(unsigned int *a1, int a2)
{
  int *v4; // eax
  int *v5; // ebx
  int v6; // ebp
  int v7; // eax
  unsigned int v8; // ebp
  char v10; // [esp+0h] [ebp-1Ch]
  unsigned int v11; // [esp+1h] [ebp-1Bh] BYREF
  int v12; // [esp+5h] [ebp-17h]

  v10 = 0;
  v4 = unknown_libname_15((unsigned int)a1);
  v5 = v4;
  if ( v4 != nullptr )
  {
    v6 = v4[2];
    v7 = v4[3] + v6;
    if ( v5[3] + v5[2] - ((int)a1 + a2) <= 12 )
      a2 = v7 - (_DWORD)a1;
    if ( (int)a1 - v6 >= 12 )
      unknown_libname_13((int)(a1 + 1), a2 - 4, &v11);
    else
      unknown_libname_13(v5[2], (int)a1 + a2 - v5[2], &v11);
    v8 = v11;
    if ( v11 != 0 )
    {
      unknown_libname_16(a1, v11 - (_DWORD)a1);
      if ( v12 + v8 < v5[3] + v5[2] )
        unknown_libname_18((_DWORD *)(v12 + v8), (int)a1 + a2 - v12 - v8);
      System::_16457(v5, &v11);
      return 1;
    }
  }
  return v10;
}

// Address: 0x401C5C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
char __fastcall unknown_libname_21(unsigned int *a1, int a2)
{
  int v3; // edx
  unsigned int **v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // edx

  a1[2] = a2;
  *(unsigned int *)((char *)a1 + a2 - 4) = a2;
  if ( a2 > 4096 )
  {
    if ( a2 < 15360 || (LOBYTE(v4) = System::_16456_0(a1, a2), (_BYTE)v4 == 0) )
    {
      v4 = (unsigned int **)dword_40E60C;
      dword_40E60C = (int)a1;
      v6 = (unsigned int)*v4;
      a1[1] = (unsigned int)v4;
      *a1 = v6;
      *v4 = a1;
      *(_DWORD *)(v6 + 4) = a1;
    }
  }
  else
  {
    v3 = a2 / 4;
    v4 = *((unsigned int ***)hMem + v3 - 3);
    if ( v4 != nullptr )
    {
      v5 = (unsigned int)*v4;
      a1[1] = (unsigned int)v4;
      *a1 = v5;
      *v4 = a1;
      *(_DWORD *)(v5 + 4) = a1;
    }
    else
    {
      LOBYTE(v4) = (_BYTE)hMem;
      *((_DWORD *)hMem + v3 - 3) = a1;
      a1[1] = (unsigned int)a1;
      *a1 = (unsigned int)a1;
    }
  }
  return (char)v4;
}

// Address: 0x401CE4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int unknown_libname_22()
{
  int result; // eax

  if ( dword_40E610 > 0 )
  {
    if ( dword_40E610 >= 12 )
    {
      *(_DWORD *)dword_40E614 = dword_40E610 | 2;
      unknown_libname_17((_DWORD *)(dword_40E614 + 4));
      dword_40E614 = 0;
      dword_40E610 = 0;
      return 0;
    }
    else
    {
      dword_40E5BC = 7;
    }
  }
  return result;
}

// Address: 0x401D30
// BDS 2005-2007 and Delphi6-7 Visual Component Library
char __fastcall unknown_libname_23(unsigned int *a1)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // esi
  int v5; // eax
  unsigned int v6; // [esp+0h] [ebp-1Ch] BYREF
  int v7; // [esp+4h] [ebp-18h]
  unsigned int v8; // [esp+8h] [ebp-14h] BYREF
  int v9; // [esp+Ch] [ebp-10h]

  v6 = *a1;
  v7 = a1[1];
  unknown_libname_22();
  System::_16456(dword_40E61C, (int *)&v6, (int *)&v8);
  v1 = v8;
  if ( v8 == 0 )
    return 0;
  if ( v8 < v6 )
  {
    v3 = unknown_libname_19(v6);
    v6 -= v3;
    v7 += v3;
  }
  v4 = v9 + v1;
  if ( v7 + v6 < v9 + v1 )
  {
    v5 = unknown_libname_20((int *)(v7 + v6));
    v7 += v5;
  }
  if ( v4 == v7 + v6 )
  {
    unknown_libname_16((unsigned int *)(v7 + v6 - 4), 4);
    v7 -= 4;
  }
  dword_40E614 = v6;
  dword_40E610 = v7;
  return 1;
}

// Address: 0x401DBC
// BDS 2005-2007 and Delphi6-7 Visual Component Library
bool __fastcall unknown_libname_24(int a1)
{
  int v2[3]; // [esp+0h] [ebp-Ch] BYREF

  unknown_libname_11(a1 + 4, v2);
  return v2[0] != 0 && unknown_libname_23((unsigned int *)v2) != 0;
}

// Address: 0x401DE8
// BDS 2005-2007 and Delphi6-7 Visual Component Library
bool __fastcall unknown_libname_25(LPVOID lpAddress, int a2)
{
  unsigned int v3[4]; // [esp+0h] [ebp-10h] BYREF

  unknown_libname_12(lpAddress, a2 + 4, v3);
  return v3[0] != 0 && unknown_libname_23(v3) != 0;
}

// Address: 0x401E1C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_26(int a1)
{
  int v1; // edx
  int v2; // eax

  v1 = 0;
  v2 = a1 / 4;
  if ( v2 <= 1024 )
  {
    do
    {
      v1 = *((_DWORD *)hMem + v2 - 3);
      if ( v1 != 0 )
        break;
      ++v2;
    }
    while ( v2 != 1025 );
  }
  return v1;
}

// Address: 0x401E48
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int *__fastcall unknown_libname_27(int a1)
{
  int *v2; // ebx
  int v3; // eax
  int *v5; // eax
  int v6; // edx

  do
  {
    v2 = (int *)dword_40E604;
    if ( a1 <= *(_DWORD *)(dword_40E604 + 8) )
      goto LABEL_15;
    v2 = (int *)dword_40E60C;
    v3 = *(_DWORD *)(dword_40E60C + 8);
    if ( a1 <= v3 )
      goto LABEL_15;
    *(_DWORD *)(dword_40E60C + 8) = a1;
    do
      v2 = (int *)v2[1];
    while ( a1 > v2[2] );
    *(_DWORD *)(dword_40E60C + 8) = v3;
    if ( v2 != (int *)dword_40E60C )
    {
      dword_40E60C = (int)v2;
LABEL_15:
      unknown_libname_14(v2);
      if ( v2[2] - a1 < 12 )
      {
        v6 = v2[2];
        a1 = v6;
        if ( v2 == (int *)dword_40E60C )
          dword_40E60C = v2[1];
        *(int *)((char *)v2 + v6) &= ~1u;
      }
      else
      {
        unknown_libname_21((unsigned int *)((char *)v2 + a1), v2[2] - a1);
      }
      *v2 = a1 | 2;
      ++dword_40E5AC;
      dword_40E5B0 += a1 - 4;
      return v2 + 1;
    }
    if ( a1 <= 4096 )
    {
      v2 = (int *)unknown_libname_26(a1);
      if ( v2 != nullptr )
        goto LABEL_15;
    }
    if ( !unknown_libname_24(a1) )
      return nullptr;
  }
  while ( a1 > dword_40E610 );
  dword_40E610 -= a1;
  if ( dword_40E610 < 12 )
  {
    a1 += dword_40E610;
    dword_40E610 = 0;
  }
  v5 = (int *)dword_40E614;
  dword_40E614 += a1;
  *v5 = a1 | 2;
  ++dword_40E5AC;
  dword_40E5B0 += a1 - 4;
  return v5 + 1;
}

// Address: 0x401F3C
int *__fastcall System::SysGetMem(int a1)
{
  signed int v2; // ebx
  int *v3; // edx
  int *v4; // esi
  int *v5; // eax
  int *v6; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-20h] BYREF
  void *v9; // [esp-8h] [ebp-1Ch]
  int *v10; // [esp-4h] [ebp-18h]
  int v11; // [esp+Ch] [ebp-8h]
  int *v12; // [esp+10h] [ebp-4h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  if ( byte_40E5B8 == 0 && System::_16447() == 0 || a1 > 2147483640 )
    return nullptr;
  v10 = &savedregs;
  v9 = &loc_4020B8;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)&ExceptionList);
  if ( byte_40E045 != 0 )
    EnterCriticalSection(&CriticalSection);
  v2 = (a1 + 7) & 0xFFFFFFFC;
  if ( v2 < 12 )
    v2 = 12;
  if ( v2 <= 4096 && (v3 = *((int **)hMem + (v2 >> 2) - 3)) != nullptr )
  {
    v4 = *((int **)hMem + (v2 >> 2) - 3);
    *(int *)((char *)v3 + v2) &= ~1u;
    v5 = (int *)v3[1];
    if ( v3 == v5 )
    {
      *((_DWORD *)hMem + (v2 >> 2) - 3) = 0;
    }
    else
    {
      *((_DWORD *)hMem + (v2 >> 2) - 3) = v5;
      v11 = *v3;
      *(_DWORD *)(v11 + 4) = v5;
      *v5 = v11;
    }
    *v4 = v3[2] | 2;
    v12 = v4 + 1;
    ++dword_40E5AC;
    dword_40E5B0 += v2 - 4;
    System::__linkproc__ TryFinallyExit(ExceptionList, v9, v10);
  }
  else if ( v2 > dword_40E610 )
  {
    v12 = unknown_libname_27(v2);
    __writefsdword(0, (unsigned int)ExceptionList);
    v10 = (int *)&loc_4020BF;
    if ( byte_40E045 != 0 )
      LeaveCriticalSection(&CriticalSection);
  }
  else
  {
    dword_40E610 -= v2;
    if ( dword_40E610 < 12 )
    {
      v2 += dword_40E610;
      dword_40E610 = 0;
    }
    v6 = (int *)dword_40E614;
    dword_40E614 += v2;
    *v6 = v2 | 2;
    v12 = v6 + 1;
    ++dword_40E5AC;
    dword_40E5B0 += v2 - 4;
    System::__linkproc__ TryFinallyExit(ExceptionList, v9, v10);
  }
  return v12;
}

// Address: 0x4020CC
int __fastcall System::SysFreeMem(_DWORD *a1)
{
  unsigned int *v2; // esi
  int v3; // ebx
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-1Ch] BYREF
  void *v12; // [esp-8h] [ebp-18h]
  int *v13; // [esp-4h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-4h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  dword_40E5BC = 0;
  if ( byte_40E5B8 == 0 && System::_16447() == 0 )
  {
    dword_40E5BC = 8;
    return 8;
  }
  v13 = &savedregs;
  v12 = &loc_40225E;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)&ExceptionList);
  if ( byte_40E045 != 0 )
    EnterCriticalSection(&CriticalSection);
  v2 = a1 - 1;
  v3 = *(a1 - 1);
  if ( (v3 & 2) == 0 )
  {
    dword_40E5BC = 9;
    goto LABEL_29;
  }
  --dword_40E5AC;
  dword_40E5B0 -= (v3 & 0x7FFFFFFC) - 4;
  if ( (v3 & 1) != 0 )
  {
    v4 = *(v2 - 1);
    if ( v4 < 12 || (v4 & 0x80000003) != 0 )
    {
      dword_40E5BC = 10;
      goto LABEL_29;
    }
    v5 = (unsigned int *)((char *)v2 - v4);
    if ( v4 != *(unsigned int *)((char *)v2 - v4 + 8) )
    {
      dword_40E5BC = 10;
      goto LABEL_29;
    }
    v3 += v4;
    v2 = (unsigned int *)((char *)v2 - v4);
    unknown_libname_14(v5);
  }
  v6 = v3 & 0x7FFFFFFC;
  v7 = (unsigned int *)((char *)v2 + v6);
  v8 = (unsigned int *)((char *)v2 + v6);
  if ( (unsigned int *)((char *)v2 + v6) != (unsigned int *)dword_40E614 )
  {
    if ( (*v7 & 2) != 0 )
    {
      if ( (*v7 & 0x7FFFFFFCu) < 4 )
      {
        dword_40E5BC = 11;
        goto LABEL_29;
      }
      *v7 |= 1u;
    }
    else
    {
      v9 = (unsigned int *)((char *)v2 + v6);
      if ( v8[1] == 0 || *v8 == 0 || (int)v8[2] < 12 )
      {
        dword_40E5BC = 11;
        goto LABEL_29;
      }
      v6 += v8[2];
      unknown_libname_14(v9);
    }
    unknown_libname_21(v2, v6);
LABEL_29:
    v14 = dword_40E5BC;
    __writefsdword(0, (unsigned int)ExceptionList);
    v13 = (int *)&loc_402265;
    if ( byte_40E045 != 0 )
      LeaveCriticalSection(&CriticalSection);
    return v14;
  }
  dword_40E614 -= v6;
  dword_40E610 += v6;
  if ( dword_40E610 > 15360 )
    unknown_libname_22();
  v14 = 0;
  System::__linkproc__ TryFinallyExit(ExceptionList, v12, v13);
  return v14;
}

// Address: 0x402270
char __fastcall System::_16466(int a1, int a2)
{
  signed int v2; // esi
  unsigned int *v3; // ebp
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  int v8; // [esp+0h] [ebp-18h]
  int v9; // [esp+0h] [ebp-18h]
  int v10; // [esp+0h] [ebp-18h]
  int v11; // [esp+4h] [ebp-14h]

  v2 = (a2 + 7) & 0xFFFFFFFC;
  if ( v2 < 12 )
    v2 = 12;
  v3 = (unsigned int *)(a1 - 4);
  v4 = *(_DWORD *)(a1 - 4) & 0x7FFFFFFC;
  v5 = (_DWORD *)(v4 + a1 - 4);
  v6 = v5;
  if ( v4 < v2 )
  {
    while ( 1 )
    {
      v11 = v2 - v4;
      if ( v6 == (_DWORD *)dword_40E614 )
      {
        if ( dword_40E610 >= v11 )
        {
          dword_40E610 -= v11;
          dword_40E614 += v11;
          if ( dword_40E610 < 12 )
          {
            dword_40E614 += dword_40E610;
            v2 += dword_40E610;
            dword_40E610 = 0;
          }
          dword_40E5B0 += v2 - v4;
          *v3 = *v3 & 0x80000003 | v2;
          return 1;
        }
        unknown_libname_22();
        v6 = (unsigned int *)((char *)v3 + v4);
      }
      if ( (*(_BYTE *)v6 & 2) == 0 )
      {
        v9 = v6[2];
        if ( v9 >= v11 )
        {
          unknown_libname_14(v6);
          v10 = v9 - v11;
          if ( v10 < 12 )
          {
            v2 += v10;
            *(unsigned int *)((char *)v3 + v2) &= ~1u;
          }
          else
          {
            unknown_libname_21((unsigned int *)((char *)v3 + v2), v10);
          }
          goto LABEL_28;
        }
        v6 = (_DWORD *)((char *)v6 + v9);
        v11 -= v9;
      }
      if ( (int)*v6 >= 0 || !unknown_libname_25((char *)v6 + (*v6 & 0x7FFFFFFC), v11) )
        return 0;
      v6 = (unsigned int *)((char *)v3 + v4);
    }
  }
  v8 = v4 - v2;
  if ( v5 == (_DWORD *)dword_40E614 )
  {
    dword_40E614 -= v8;
    dword_40E610 += v8;
    if ( dword_40E610 < 12 )
    {
      dword_40E614 += v8;
      dword_40E610 -= v8;
      v2 = v4;
    }
  }
  else
  {
    if ( (*(_BYTE *)v5 & 2) == 0 )
    {
      v8 += v5[2];
      unknown_libname_14(v5);
    }
    if ( v8 < 12 )
    {
      v2 = v4;
    }
    else
    {
      *(unsigned int *)((char *)v3 + v2) = v8 | 2;
      unknown_libname_17((unsigned int *)((char *)v3 + v2 + 4));
    }
  }
LABEL_28:
  dword_40E5B0 += v2 - v4;
  *v3 = *v3 & 0x80000003 | v2;
  return 1;
}

// Address: 0x402440
int *__fastcall System::SysReallocMem(int *a1, int a2)
{
  int *Mem; // edi
  int v5; // eax
  unsigned int v7[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v8; // [esp-4h] [ebp-14h]
  int *v9; // [esp+Ch] [ebp-4h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( byte_40E5B8 == 0 && System::_16447() == 0 )
    return nullptr;
  v8 = &savedregs;
  v7[1] = (unsigned int)&loc_4024F1;
  v7[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v7);
  if ( byte_40E045 != 0 )
    EnterCriticalSection(&CriticalSection);
  if ( System::_16466((int)a1, a2) != 0 )
  {
    v9 = a1;
  }
  else
  {
    Mem = System::SysGetMem(a2);
    v5 = (*(a1 - 1) & 0x7FFFFFFC) - 4;
    if ( a2 < v5 )
      v5 = a2;
    if ( Mem != nullptr )
    {
      System::Move(a1, Mem, v5);
      System::SysFreeMem(a1);
    }
    v9 = Mem;
  }
  __writefsdword(0, v7[0]);
  v8 = (int *)&loc_4024F8;
  if ( byte_40E045 != 0 )
    LeaveCriticalSection(&CriticalSection);
  return v9;
}

// Address: 0x402504
int *__fastcall System::__linkproc__ GetMem(int a1)
{
  int *v1; // ebx

  if ( a1 <= 0 )
    return nullptr;
  v1 = off_40D024(a1);
  if ( v1 == nullptr )
    System::Error(1);
  return v1;
}

// Address: 0x402524
int __fastcall System::__linkproc__ FreeMem(_DWORD *a1)
{
  int v1; // eax
  int v2; // ebx

  if ( a1 == nullptr )
    return 0;
  v1 = off_40D028(a1);
  v2 = v1;
  if ( v1 != 0 )
  {
    LOBYTE(v1) = 2;
    System::Error(v1);
  }
  return v2;
}

// Address: 0x402544
int *__fastcall System::__linkproc__ ReallocMem(int *result, int a2)
{
  int *v2; // ecx
  _DWORD *v3; // [esp-4h] [ebp-4h]
  _DWORD *v4; // [esp-4h] [ebp-4h]

  v2 = (int *)*result;
  if ( *result != 0 )
  {
    if ( a2 != 0 )
    {
      v3 = result;
      result = off_40D02C(v2, a2);
      if ( result != nullptr )
      {
        *v3 = result;
        return result;
      }
LABEL_8:
      LOBYTE(result) = 1;
      System::Error(result);
    }
    *result = 0;
    result = (int *)off_40D028(v2);
    if ( result != nullptr )
    {
      LOBYTE(result) = 2;
      System::Error(result);
    }
  }
  else if ( a2 != 0 )
  {
    v4 = result;
    result = off_40D024(a2);
    if ( result == nullptr )
      goto LABEL_8;
    *v4 = result;
  }
  return result;
}

// Address: 0x402594
void __fastcall __noreturn sub_402594(int a1, int a2)
{
  dword_40D004 = a2;
  sub_403684();
}

// Address: 0x40259F
void nullsub_4()
{
  ;
}

// Address: 0x4025A0
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __fastcall __noreturn unknown_libname_28(int a1, int a2)
{
  int v3; // ebx

  v3 = a1;
  LOBYTE(v3) = a1 & 0x7F;
  if ( dword_40E008 != nullptr )
    a1 = dword_40E008(v3, a2);
  if ( (_BYTE)v3 != 0 )
  {
    if ( (unsigned __int8)v3 <= 0x18u )
      LOBYTE(v3) = byte_40D030[(unsigned __int8)v3];
  }
  else
  {
    v3 = *(_DWORD *)(Sysinit::__linkproc__ GetTls(a1) + 4);
  }
  sub_402594((unsigned __int8)v3, a2);
}

// Address: 0x4025EC
void __fastcall __noreturn System::Error(char a1)
{
  int retaddr; // [esp+0h] [ebp+0h]

  unknown_libname_28(a1 & 0x7F, retaddr);
}

// Address: 0x4025F7
void nullsub_5()
{
  ;
}

// Address: 0x4025F8
void __fastcall __spoils<ecx> System::__linkproc__ _IOTest(int a1)
{
  if ( *(_DWORD *)(Sysinit::__linkproc__ GetTls(a1) + 4) != 0 )
    System::Error(0);
}

// Address: 0x402614
void nullsub_6()
{
  ;
}

// Address: 0x402618
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_29(int a1)
{
  int result; // eax

  result = Sysinit::__linkproc__ GetTls(a1);
  *(_DWORD *)(result + 4) = a1;
  return result;
}

// Address: 0x402628
int __fastcall System::IOResult(int a1)
{
  int Tls; // eax
  int v2; // ebx

  Tls = Sysinit::__linkproc__ GetTls(a1);
  v2 = *(_DWORD *)(Tls + 4);
  *(_DWORD *)(Sysinit::__linkproc__ GetTls(Tls) + 4) = 0;
  return v2;
}

// Address: 0x402648
int __fastcall System::Move(char *a1, char *a2, int a3)
{
  int result; // eax
  int v5; // ecx
  char *v6; // esi
  char *v7; // edi
  int v8; // ecx
  int v9; // ecx
  _BYTE *v10; // esi
  _BYTE *v11; // edi

  result = a3;
  if ( a2 > a1 )
  {
    v6 = &a1[a3 - 4];
    v7 = &a2[a3 - 4];
    v8 = a3 >> 2;
    if ( v8 >= 0 )
    {
      while ( v8 != 0 )
      {
        *(_DWORD *)v7 = *(_DWORD *)v6;
        v6 -= 4;
        v7 -= 4;
        --v8;
      }
      v9 = result & 3;
      v10 = v6 + 3;
      v11 = v7 + 3;
      while ( v9 != 0 )
      {
        *v11-- = *v10--;
        --v9;
      }
    }
  }
  else if ( a2 != a1 )
  {
    v5 = a3 >> 2;
    if ( v5 >= 0 )
      qmemcpy(a2, a1, 4 * v5 + (result & 3));
  }
  return result;
}

// Address: 0x402688
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_30(int a1, int (__fastcall *a2)(int, _DWORD, int), int a3)
{
  bool v3; // cf
  int v4; // ecx
  int v5; // ebx

  if ( *(_WORD *)(a1 + 4) == 0xD7B1 )
  {
    v5 = 0;
  }
  else
  {
    LOWORD(a3) = *(_WORD *)(a1 + 4) + 10319;
    v4 = a3 - 1;
    v3 = (unsigned __int16)v4 < 2u;
    LOWORD(v4) = v4 - 2;
    if ( v3 )
    {
      v5 = a2(a1, a2, v4);
    }
    else if ( (_UNKNOWN *)a1 == &unk_40E214 || (_UNKNOWN *)a1 == &unk_40E3E0 )
    {
      v5 = 0;
    }
    else
    {
      v5 = 103;
    }
  }
  if ( v5 != 0 )
    unknown_libname_29(v5);
  return v5;
}

// Address: 0x4026D0
int __fastcall System::Flush(void **a1, int a2, int a3)
{
  return unknown_libname_30((int)a1, (int (__fastcall *)(int, _DWORD, int))a1[7], a3);
}

// Address: 0x4026DC
int __fastcall System::__linkproc__ Close(int a1)
{
  int v2; // esi
  unsigned __int16 v3; // ax

  v2 = 0;
  v3 = *(_WORD *)(a1 + 4);
  if ( v3 < 0xD7B1u || v3 > 0xD7B3u )
  {
    if ( (_UNKNOWN *)a1 != &unk_40E048 )
      unknown_libname_29(103);
  }
  else
  {
    if ( (v3 & 0xD7B2) == 0xD7B2 )
      v2 = (*(int (__fastcall **)(int))(a1 + 28))(a1);
    if ( v2 == 0 )
      v2 = (*(int (__fastcall **)(int))(a1 + 36))(a1);
    if ( v2 != 0 )
      unknown_libname_29(v2);
  }
  return v2;
}

// Address: 0x402734
__int16 __fastcall System::__linkproc__ FillChar(char *a1, int a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ecx

  BYTE1(a3) = a3;
  v4 = a3 << 16;
  LOWORD(v4) = a3;
  v5 = a2 >> 2;
  if ( a2 >> 2 >= 0 )
  {
    memset32(a1, v4, v5);
    memset(&a1[4 * v5], v4, a2 & 3);
  }
  return v4;
}

// Address: 0x402754
int __fastcall System::__linkproc__ ValLong(int result, char **a2)
{
  char *v2; // esi
  int v3; // ebx
  char v4; // bl
  char v5; // ch
  char *v6; // esi
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // bl
  int v9; // [esp-4h] [ebp-10h]

  v2 = (char *)result;
  v9 = result;
  if ( result != 0 )
  {
    result = 0;
    v3 = 0;
    do
      v4 = *v2++;
    while ( v4 == 32 );
    v5 = 0;
    switch ( v4 )
    {
      case '-':
        v5 = 1;
        break;
      case '+':
        break;
      case '$':
      case 'x':
      case 'X':
LABEL_27:
        v7 = *v2++;
        if ( v7 != 0 )
        {
          while ( 1 )
          {
            if ( v7 >= 0x61u )
              v7 -= 32;
            LOBYTE(v3) = v7 - 48;
            if ( (unsigned __int8)v3 > 9u )
            {
              v8 = v3 - 17;
              if ( v8 > 5u )
                goto LABEL_24;
              LOBYTE(v3) = v8 + 10;
            }
            if ( (unsigned int)result > 0xFFFFFFF )
              goto LABEL_24;
            result = v3 + 16 * result;
            v7 = *v2++;
            if ( v7 == 0 )
              goto LABEL_35;
          }
        }
        goto LABEL_21;
      case '0':
        v4 = *v2++;
        if ( v4 != 120 && v4 != 88 )
        {
          if ( v4 != 0 )
            goto LABEL_15;
LABEL_18:
          if ( v5 == 1 )
          {
            result = -result;
            if ( result >= 1 && result != 0 && result >= 0 )
              goto LABEL_24;
          }
          else if ( result < 0 )
          {
            goto LABEL_24;
          }
LABEL_35:
          v6 = nullptr;
          goto LABEL_36;
        }
        goto LABEL_27;
      default:
LABEL_14:
        if ( v4 != 0 )
        {
LABEL_15:
          while ( 1 )
          {
            LOBYTE(v3) = v4 - 48;
            if ( (unsigned __int8)v3 > 9u || (unsigned int)result > 0xCCCCCCC )
              break;
            result = v3 + 10 * result;
            v4 = *v2++;
            if ( v4 == 0 )
              goto LABEL_18;
          }
        }
        goto LABEL_24;
    }
    v4 = *v2++;
    goto LABEL_14;
  }
LABEL_21:
  ++v2;
LABEL_24:
  v6 = &v2[-v9];
LABEL_36:
  *a2 = v6;
  return result;
}

// Address: 0x402820
const void *__fastcall System::__linkproc__ SetEq(const void *result, const void *a2, unsigned __int8 a3)
{
  memcmp(result, a2, a3);
  return result;
}

// Address: 0x402834
// attributes: thunk
int __fastcall System::__linkproc__ Pow10(int result)
{
  return @System@@Pow10$qqrv(result);
}

// Address: 0x402839
void nullsub_7()
{
  ;
}

// Address: 0x40283C
int __fastcall System::__linkproc__ Pow10(int result)
{
  _EBX = 0;
  if ( result < 0 )
  {
    result = -result;
    if ( result >= 5120 )
    {
      __asm { fldz }
    }
    else
    {
      _EDX = 5 * (result & 0x1F);
      __asm
      {
        fld     tbyte_4028EB[ebx+edx*2]
        fdivp   st(1), st
      }
      result = (unsigned int)result >> 5;
      if ( result != 0 )
      {
        if ( (result & 0xF) != 0 )
        {
          _EDX = 5 * (result & 0xF);
          __asm
          {
            fld     tbyte_402A21[ebx+edx*2]
            fdivp   st(1), st
          }
        }
        result = (unsigned int)result >> 4;
        if ( result != 0 )
        {
          result *= 5;
          __asm
          {
            fld     tbyte_402AB7[ebx+eax*2]
            fdivp   st(1), st
          }
        }
      }
    }
  }
  else if ( result != 0 )
  {
    if ( result >= 5120 )
    {
      __asm { fld     tbyte_4028E1[ebx] }
    }
    else
    {
      _EDX = 5 * (result & 0x1F);
      __asm
      {
        fld     tbyte_4028EB[ebx+edx*2]
        fmulp   st(1), st
      }
      result = (unsigned int)result >> 5;
      if ( result != 0 )
      {
        if ( (result & 0xF) != 0 )
        {
          _EDX = 5 * (result & 0xF);
          __asm
          {
            fld     tbyte_402A21[ebx+edx*2]
            fmulp   st(1), st
          }
        }
        result = (unsigned int)result >> 4;
        if ( result != 0 )
        {
          result *= 5;
          __asm
          {
            fld     tbyte_402AB7[ebx+eax*2]
            fmulp   st(1), st
          }
        }
      }
    }
  }
  return result;
}

// Address: 0x402B1C
// attributes: thunk
int __stdcall GetKeyboardType(int nTypeFlag)
{
  return __imp_GetKeyboardType(nTypeFlag);
}

// Address: 0x402B24
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int unknown_libname_31()
{
  int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( GetKeyboardType(0) == 7 )
  {
    v1 = GetKeyboardType(1) & 0xFF00;
    if ( v1 == 3328 || v1 == 1024 )
      LOBYTE(v0) = 1;
  }
  return v0;
}

// Address: 0x402B54
// BDS 2005-2007 and Delphi6-7 Visual Component Library
__int16 unknown_libname_32()
{
  __int16 result; // ax
  unsigned int v1[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v2; // [esp-4h] [ebp-10h]
  DWORD cbData; // [esp+0h] [ebp-Ch] BYREF
  BYTE Data[4]; // [esp+4h] [ebp-8h] BYREF
  HKEY phkResult; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  *(_DWORD *)Data = (unsigned __int16)word_40D00C;
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, "SOFTWARE\\Borland\\Delphi\\RTL", 0, 1u, &phkResult) == 0 )
  {
    v2 = &savedregs;
    v1[1] = (unsigned int)j_unknown_libname_43;
    v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
    __writefsdword(0, (unsigned int)v1);
    cbData = 4;
    RegQueryValueExA(phkResult, "FPUMaskValue", nullptr, nullptr, Data, &cbData);
    __writefsdword(0, v1[0]);
    v2 = (int *)&loc_402BCC;
    RegCloseKey(phkResult);
  }
  result = Data[0] & 0x3F | word_40D00C & 0xFFC0;
  word_40D00C = result;
  return result;
}

// Address: 0x402BC5
// attributes: thunk
int __cdecl j_unknown_libname_43(int a1, int a2)
{
  return unknown_libname_43(a1, a2);
}

// Address: 0x402C18
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void unknown_libname_33()
{
  __asm { fninit }
}

// Address: 0x402C24
int __fastcall System::TObject::ClassName(int result, void *a2)
{
  qmemcpy(a2, *(const void **)(result - 44), **(unsigned __int8 **)(result - 44) + 1);
  return result;
}

// Address: 0x402C38
int __fastcall Comctrls::TTreeNodes::GetFirstNode(Comctrls::TTreeNodes *this)
{
  int v2; // eax
  int *Mem; // eax

  v2 = System::TObject::InstanceSize(this);
  Mem = System::__linkproc__ GetMem(v2);
  return System::TObject::InitInstance(this, Mem);
}

// Address: 0x402C54
int __fastcall sub_402C54(System::TObject *this)
{
  System::TObject::CleanupInstance(this);
  return System::__linkproc__ FreeMem(this);
}

// Address: 0x402C68
int __fastcall System::TObject::InstanceSize(int a1)
{
  return *(_DWORD *)(a1 - 40);
}

// Address: 0x402C70
void __fastcall System::TObject::~TObject(System::TObject *this)
{
  int v1; // eax
  char v2; // dl

  v1 = System::__linkproc__ BeforeDestruction(this);
  if ( v2 > 0 )
    System::__linkproc__ ClassDestroy(v1);
}

// Address: 0x402C80
_DWORD *__fastcall System::TObject::Free(_DWORD *this)
{
  if ( this != nullptr )
    return (_DWORD *)(*(int (**)(void))(*this - 4))();
  return this;
}

// Address: 0x402C8C
_DWORD *__fastcall System::TObject::InitInstance(int a1, _DWORD *a2)
{
  int v2; // ebx
  _DWORD *result; // eax
  int *v4; // ebx
  int v5; // ecx
  _DWORD *v6; // ebx
  int v7; // esi
  unsigned int v8; // [esp-4h] [ebp-10h] BYREF
  int v9; // [esp+0h] [ebp-Ch] BYREF

  v2 = a1;
  *a2 = a1;
  v8 = *(_DWORD *)(a1 - 40);
  memset(a2 + 1, 0, 4 * ((v8 >> 2) - 1) + (v8 & 3));
  result = a2;
  while ( 1 )
  {
    if ( *(_DWORD *)(v2 - 72) != 0 )
      v8 = *(_DWORD *)(v2 - 72);
    v4 = *(int **)(v2 - 36);
    if ( v4 == nullptr )
      break;
    v2 = *v4;
  }
  if ( &v8 != (unsigned int *)&v9 )
  {
    v5 = *(_DWORD *)v8;
    v6 = (_DWORD *)(v8 + 4);
    do
    {
      v7 = v6[4];
      if ( v7 != 0 )
        *(_DWORD *)((char *)a2 + v6[5]) = v7;
      v6 += 7;
      --v5;
    }
    while ( v5 != 0 );
  }
  return result;
}

// Address: 0x402CE4
_DWORD *__fastcall System::TObject::CleanupInstance(_DWORD *this)
{
  _DWORD *v1; // ebx
  int *v2; // esi
  int v3; // esi
  int v4; // edx

  v1 = this;
  v2 = this;
  do
  {
    v3 = *v2;
    v4 = *(_DWORD *)(v3 - 64);
    v2 = *(int **)(v3 - 36);
    if ( v4 != 0 )
    {
      System::__linkproc__ FinalizeRecord();
      this = v1;
    }
  }
  while ( v2 != nullptr );
  return this;
}

// Address: 0x402D04
bool __fastcall System::__linkproc__ IsClass(_DWORD *a1, int a2)
{
  return a1 != nullptr && (unsigned __int8)System::TObject::InheritsFrom(*a1, a2) != 0;
}

// Address: 0x402D28
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __usercall unknown_libname_34@<eax>(int a1@<eax>, int a2@<esi>)
{
  int result; // eax
  int i; // esi
  unsigned __int16 *v5; // edi
  int v6; // ecx
  bool v7; // zf
  _WORD *v8; // edi
  int *v9; // esi
  int v10; // [esp-4h] [ebp-8h]

  result = a2;
  for ( i = a1; ; i = *v9 )
  {
    v5 = *(unsigned __int16 **)(i - 48);
    if ( v5 != nullptr )
    {
      v6 = *v5;
      v10 = v6;
      v7 = v5 + 1 == nullptr;
      v8 = v5 + 1;
      do
      {
        if ( v6 == 0 )
          break;
        v7 = *v8++ == (unsigned __int16)result;
        --v6;
      }
      while ( !v7 );
      if ( v7 )
        break;
    }
    v9 = *(int **)(i - 36);
    if ( v9 == nullptr )
      return result;
  }
  return 2 * v10 - v6;
}

// Address: 0x402D58
char __fastcall System::TObject::InheritsFrom(int a1, int a2)
{
  int *v2; // eax

  while ( a1 != a2 )
  {
    v2 = *(int **)(a1 - 36);
    if ( v2 == nullptr )
      return (char)v2;
    a1 = *v2;
  }
  LOBYTE(v2) = 1;
  return (char)v2;
}

// Address: 0x402D6C
int System::TObject::SafeCallException()
{
  return -2147418113;
}

// Address: 0x402D74
void nullsub_3()
{
  ;
}

// Address: 0x402D78
void nullsub_1()
{
  ;
}

// Address: 0x402D7C
void nullsub_2()
{
  ;
}

// Address: 0x402D80
int __usercall System::TObject::Dispatch@<eax>(
        System::TObject *this@<eax>,
        _WORD *a2@<edx>,
        int (__fastcall *a3)(System::TObject *)@<esi>)
{
  char v3; // zf
  System::TObject *v5; // [esp-4h] [ebp-8h]

  LOWORD(a3) = *a2;
  if ( *a2 == 0 )
    return (*(int (**)(void))(*(_DWORD *)this - 16))();
  if ( (unsigned __int16)a3 >= 0xC000u )
    return (*(int (**)(void))(*(_DWORD *)this - 16))();
  v5 = this;
  unknown_libname_34(*(_DWORD *)this, (int)a3);
  this = v5;
  if ( v3 )
    return (*(int (**)(void))(*(_DWORD *)this - 16))();
  else
    return a3(v5);
}

// Address: 0x402DA6
void nullsub_8()
{
  ;
}

// Address: 0x402DA8
int __usercall System::__linkproc__ ClassCreate@<eax>(int result@<eax>, char a2@<dl>, char a3)
{
  if ( a2 >= 0 )
    result = (*(int (**)(void))(result - 12))();
  __writefsdword(0, (unsigned int)&a3);
  return result;
}

// Address: 0x402DD1
// attributes: thunk
int __cdecl System::__linkproc__ HandleAnyException(
        struct _EXCEPTION_POINTERS ExceptionInfo,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return @System@@HandleAnyException$qqrv(ExceptionInfo, a2, a3, a4, a5, a6, a7, a8, a9);
}

// Address: 0x402DF8
int __fastcall System::__linkproc__ ClassDestroy(_DWORD *a1)
{
  return (*(int (**)(void))(*a1 - 8))();
}

// Address: 0x402E00
_DWORD *__fastcall System::__linkproc__ AfterConstruction(_DWORD *a1)
{
  (*(void (**)(void))(*a1 - 28))();
  return a1;
}

// Address: 0x402E10
_DWORD *__fastcall System::__linkproc__ BeforeDestruction(_DWORD *result, char a2)
{
  _DWORD *v2; // [esp-4h] [ebp-4h]

  if ( a2 > 0 )
  {
    v2 = result;
    (*(void (**)(void))(*result - 24))();
    return v2;
  }
  return result;
}

// Address: 0x402E20
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int unknown_libname_35()
{
  int result; // eax

  if ( (unsigned __int8)byte_40D010 > 1u )
    return dword_40E014(250477279, 0, 0, 0);
  return result;
}

// Address: 0x402E3C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __fastcall __spoils<edx,ecx> unknown_libname_36(int a1, int a2)
{
  _DWORD v2[3]; // [esp-Ch] [ebp-Ch] BYREF

  if ( byte_40D010 != 0 )
  {
    v2[1] = a1;
    v2[0] = a2;
    dword_40E014(250477284, 0, 2, v2);
  }
}

// Address: 0x402E78
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __usercall __spoils<edx,ecx> unknown_libname_38(int a1@<ebx>)
{
  int v1; // [esp-8h] [ebp-8h] BYREF

  if ( (unsigned __int8)byte_40D010 > 1u )
  {
    v1 = a1;
    dword_40E014(250477280, 0, 1, &v1);
  }
}

// Address: 0x402E8C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void unknown_libname_39()
{
  ;
}

// Address: 0x402EAC
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __fastcall __spoils<edx,ecx> unknown_libname_40(int a1, int a2, int a3)
{
  int v3; // ecx
  _DWORD v4[4]; // [esp-10h] [ebp-10h] BYREF

  if ( (unsigned __int8)byte_40D010 > 1u )
  {
    v4[1] = a3;
    unknown_libname_39();
    v4[0] = v3;
    dword_40E014(250477281, 0, 1, v4);
  }
}

// Address: 0x402ED4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __fastcall unknown_libname_41(int a1, int a2)
{
  int v2; // [esp-4h] [ebp-4h] BYREF

  if ( (unsigned __int8)byte_40D010 > 1u )
  {
    v2 = a2;
    dword_40E014(250477282, 0, 1, &v2);
  }
}

// Address: 0x402EF0
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __spoils<ecx> unknown_libname_42()
{
  int v0; // [esp-8h] [ebp-8h] BYREF

  if ( (unsigned __int8)byte_40D010 > 1u )
    dword_40E014(250477283, 0, 2, &v0);
}

// Address: 0x402F10
int __usercall System::__linkproc__ HandleAnyException@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        struct _EXCEPTION_POINTERS ExceptionInfo,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax
  ULONG_PTR v14; // edx
  PVOID ExceptionAddress; // ecx
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  int v19; // edi
  EXCEPTION_RECORD **Tls; // eax
  int v21; // ebx
  PVOID v23; // [esp-4h] [ebp-Ch]
  ULONG_PTR v24; // [esp+0h] [ebp-8h]
  EXCEPTION_RECORD *v25; // [esp+4h] [ebp-4h] BYREF

  ExceptionRecord = ExceptionInfo.ExceptionRecord;
  if ( (ExceptionInfo.ExceptionRecord->ExceptionFlags & 6) != 0 )
    return 1;
  v14 = ExceptionInfo.ExceptionRecord->ExceptionInformation[1];
  ExceptionAddress = (PVOID)ExceptionInfo.ExceptionRecord->ExceptionInformation[0];
  if ( ExceptionInfo.ExceptionRecord->ExceptionCode != 250477278 )
  {
    unknown_libname_33();
    if ( dword_40E010 == nullptr )
      return 1;
    v16 = dword_40E010();
    if ( v16 == 0 )
      return 1;
    if ( ExceptionInfo.ExceptionRecord->ExceptionCode != 250608334 )
    {
      unknown_libname_36(v16, a6);
      if ( byte_40D014 != 0 && byte_40D010 == 0 )
      {
        v25 = (EXCEPTION_RECORD *)v16;
        if ( UnhandledExceptionFilter(&ExceptionInfo) != 0 )
        {
          v14 = (ULONG_PTR)v25;
          ExceptionRecord = ExceptionInfo.ExceptionRecord;
          ExceptionAddress = ExceptionInfo.ExceptionRecord->ExceptionAddress;
          goto LABEL_14;
        }
        return 1;
      }
    }
    v14 = v16;
    ExceptionRecord = ExceptionInfo.ExceptionRecord;
    ExceptionAddress = ExceptionInfo.ExceptionRecord->ExceptionAddress;
  }
  if ( (unsigned __int8)byte_40D014 <= 1u
    || byte_40D010 != 0
    || (v25 = ExceptionRecord,
        v24 = v14,
        v23 = ExceptionAddress,
        v17 = UnhandledExceptionFilter(&ExceptionInfo) == 0,
        ExceptionAddress = v23,
        v14 = v24,
        ExceptionRecord = v25,
        !v17) )
  {
LABEL_14:
    ExceptionRecord->ExceptionFlags |= 2u;
    v18 = dword_40E018(
            ExceptionInfo.ContextRecord,
            &loc_402FE8,
            ExceptionRecord,
            0,
            ExceptionAddress,
            v14,
            ExceptionRecord,
            NtCurrentTeb()->NtTib.ExceptionList,
            a2,
            a3,
            a4,
            a1);
    v19 = a13;
    Tls = (EXCEPTION_RECORD **)Sysinit::__linkproc__ GetTls(v18);
    v25 = *Tls;
    *Tls = (EXCEPTION_RECORD *)&v25;
    v21 = *(_DWORD *)(v19 + 4);
    *(_DWORD *)(v19 + 4) = &loc_403014;
    v21 += 5;
    unknown_libname_38(v21);
    __asm { jmp     ebx }
  }
  return 1;
}

// Address: 0x40303C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __cdecl unknown_libname_43(int a1, int a2)
{
  int v2; // ecx
  void (*v3)(void); // ecx

  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    v2 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 4) = &loc_40306C;
    unknown_libname_40(a1, a2, v2 + 5);
    v3();
  }
  return 1;
}

// Address: 0x403074
// positive sp value has been detected, the output may be wrong!
int __fastcall System::__linkproc__ RaiseExcept(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  if ( a1 == 0 )
    ((void (__fastcall __noreturn *)(int))sub_403690)(216);
  return dword_40E014(a7, a6, a5, a4);
}

// Address: 0x40309B
void nullsub_9()
{
  ;
}

// Address: 0x40309C
// positive sp value has been detected, the output may be wrong!
int __cdecl System::__linkproc__ RaiseAgain(int a1, int a2)
{
  _DWORD **Tls; // eax
  _DWORD *v3; // edx
  _DWORD *v4; // eax
  struct _EXCEPTION_REGISTRATION_RECORD **v6; // [esp-14h] [ebp-14h]

  *(_DWORD *)(a2 + 4) = &loc_4030E7;
  Tls = (_DWORD **)Sysinit::__linkproc__ GetTls(a2);
  v3 = *Tls;
  *Tls = (_DWORD *)**Tls;
  v4 = (_DWORD *)v3[3];
  v4[1] &= ~2u;
  if ( *v4 != 250477278 )
  {
    System::TObject::Free((_DWORD *)v3[2]);
    unknown_libname_35();
  }
  *v6 = NtCurrentTeb()->NtTib.ExceptionList->Next;
  return 1;
}

// Address: 0x4030F0
// positive sp value has been detected, the output may be wrong!
void __fastcall System::__linkproc__ DoneExcept(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  _DWORD **Tls; // eax
  _DWORD *v16; // edx
  unsigned int v18; // [esp-10h] [ebp-10h]
  int v19; // [esp-Ch] [ebp-Ch]
  int v20; // [esp-4h] [ebp-4h]

  Tls = (_DWORD **)Sysinit::__linkproc__ GetTls(a1);
  v16 = *Tls;
  *Tls = (_DWORD *)**Tls;
  System::TObject::Free((_DWORD *)v16[2]);
  __writefsdword(0, v18);
  unknown_libname_41(v19, v20);
  __asm { jmp     edx }
}

// Address: 0x40311F
void nullsub_10()
{
  ;
}

// Address: 0x403120
int __stdcall System::__linkproc__ TryFinallyExit(unsigned int a1, int a2, int a3)
{
  __writefsdword(0, a1);
  return ((int (*)(void))(a2 + 5))();
}

// Address: 0x403135
void nullsub_11()
{
  ;
}

// Address: 0x403138
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __stdcall __noreturn unknown_libname_44(int *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  bool v5; // cf
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int8 v10; // al

  v1 = *a1;
  if ( *a1 > -1073741678 )
  {
    if ( v1 > -1073741674 )
    {
      v9 = v1 + 1073741571;
      if ( v9 == 0 )
      {
        v10 = -54;
        goto LABEL_33;
      }
      if ( v9 == 61 )
      {
        v10 = -39;
        goto LABEL_33;
      }
    }
    else
    {
      if ( v1 == -1073741674 )
      {
        v10 = -38;
        goto LABEL_33;
      }
      v7 = v1 + 1073741677;
      if ( v7 == 0 )
        goto LABEL_27;
      v8 = v7 - 1;
      if ( v8 == 0 )
      {
        v10 = -56;
        goto LABEL_33;
      }
      if ( v8 == 1 )
      {
        v10 = -41;
        goto LABEL_33;
      }
    }
  }
  else
  {
    if ( *a1 == -1073741678 )
      goto LABEL_24;
    if ( v1 <= -1073741682 )
    {
      if ( v1 == -1073741682 )
      {
        v10 = -56;
        goto LABEL_33;
      }
      v2 = v1 + 1073741819;
      if ( v2 == 0 )
      {
        v10 = -40;
        goto LABEL_33;
      }
      v3 = v2 - 135;
      if ( v3 == 0 )
      {
        v10 = -55;
        goto LABEL_33;
      }
      if ( v3 != 1 )
        goto LABEL_32;
LABEL_27:
      v10 = -50;
      goto LABEL_33;
    }
    v4 = v1 + 1073741681;
    v5 = v4 < 2;
    v6 = v4 - 2;
    if ( v5 )
    {
LABEL_24:
      v10 = -49;
      goto LABEL_33;
    }
    if ( v6 == 0 )
    {
      v10 = -51;
      goto LABEL_33;
    }
  }
LABEL_32:
  v10 = -1;
LABEL_33:
  sub_402594(v10, a1[3]);
}

// Address: 0x4031D8 (unknown_libname_45)
// DECOMPILATION FAILED (code=-12, errea=0x403218): call analysis failed
/*
  0x4031D8: mov     eax, [esp+ExceptionInfo.ExceptionRecord]
  0x4031DC: test    dword ptr [eax+4], 6
  0x4031E3: jnz     loc_403272
  0x4031E9: cmp     ds:byte_40D010, 0
  0x4031F0: ja      short loc_403201
  0x4031F2: lea     eax, [esp+ExceptionInfo]
  0x4031F6: push    eax; ExceptionInfo
  0x4031F7: call    UnhandledExceptionFilter
  0x4031FC: cmp     eax, 0
  0x4031FF: jz      short loc_403272
  0x403201: mov     eax, [esp+ExceptionInfo.ExceptionRecord]
  0x403205: cld
  0x403206: call    unknown_libname_33; BDS 2005-2007 and Delphi6-7 Visual Component Library
  0x40320B: mov     edx, [esp+ExceptionInfo.ContextRecord]
  0x40320F: push    0
  0x403211: push    eax
  0x403212: push    offset loc_40321E
  0x403217: push    edx
  0x403218: call    ds:dword_40E018
  0x40321E: mov     ebx, [esp+ExceptionInfo.ExceptionRecord]
  0x403222: cmp     dword ptr [ebx], 0EEDFADEh
  0x403228: mov     edx, [ebx+14h]
  0x40322B: mov     eax, [ebx+18h]
  0x40322E: jz      short loc_40324D
  0x403230: mov     edx, ds:dword_40E010
  0x403236: test    edx, edx
  0x403238: jz      unknown_libname_44; BDS 2005-2007 and Delphi6-7 Visual Component Library
  0x40323E: mov     eax, ebx
  0x403240: call    edx ; dword_40E010
  0x403242: test    eax, eax
  0x403244: jz      unknown_libname_44; BDS 2005-2007 and Delphi6-7 Visual Component Library
  0x40324A: mov     edx, [ebx+0Ch]
  0x40324D: call    unknown_libname_42; BDS 2005-2007 and Delphi6-7 Visual Component Library
  0x403252: mov     ecx, ds:dword_40E004
  0x403258: test    ecx, ecx
  0x40325A: jz      short loc_40325E
  0x40325C: call    ecx ; dword_40E004
  0x40325E: mov     ecx, [esp+ExceptionInfo.ExceptionRecord]
  0x403262: mov     eax, 0D9h
  0x403267: mov     edx, [ecx+14h]
  0x40326A: mov     [esp+0], edx
  0x40326D: jmp     sub_403690
  0x403272: xor     eax, eax
  0x403274: retn
*/
// Address: 0x403278
// BDS 2005-2007 and Delphi6-7 Visual Component Library
struct _EXCEPTION_REGISTRATION_RECORD **__usercall unknown_libname_46@<eax>(
        struct _EXCEPTION_REGISTRATION_RECORD *a1@<ebp>)
{
  struct _EXCEPTION_REGISTRATION_RECORD **result; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ecx

  result = (struct _EXCEPTION_REGISTRATION_RECORD **)&a1[-2].Handler;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)&a1[-2].Handler);
  *result = ExceptionList;
  result[1] = (struct _EXCEPTION_REGISTRATION_RECORD *)unknown_libname_45;
  result[2] = a1;
  dword_40E630 = (int)&a1[-2].Handler;
  return result;
}

// Address: 0x403298
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int unknown_libname_47()
{
  int result; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ecx

  result = dword_40E630;
  if ( dword_40E630 != 0 )
  {
    ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
    if ( (struct _EXCEPTION_REGISTRATION_RECORD *)dword_40E630 == ExceptionList )
    {
      result = *(_DWORD *)dword_40E630;
      __writefsdword(0, *(_DWORD *)dword_40E630);
    }
    else
    {
      while ( ExceptionList != (struct _EXCEPTION_REGISTRATION_RECORD *)-1 )
      {
        if ( ExceptionList->Next == (struct _EXCEPTION_REGISTRATION_RECORD *)dword_40E630 )
        {
          result = *(_DWORD *)dword_40E630;
          ExceptionList->Next = *(struct _EXCEPTION_REGISTRATION_RECORD **)dword_40E630;
          return result;
        }
        ExceptionList = ExceptionList->Next;
      }
    }
  }
  return result;
}

// Address: 0x4032C0
int System::_16704()
{
  int result; // eax
  int v1; // ebx
  int v2; // esi
  void (*v3)(void); // eax
  unsigned int v4[6]; // [esp-Ch] [ebp-18h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  result = dword_40E634;
  if ( dword_40E634 != 0 )
  {
    v1 = dword_40E638;
    v2 = *(_DWORD *)(dword_40E634 + 4);
    v4[2] = (unsigned int)&savedregs;
    v4[1] = (unsigned int)&loc_403306;
    v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
    __writefsdword(0, (unsigned int)v4);
    while ( v1 > 0 )
    {
      dword_40E638 = --v1;
      v3 = *(void (**)(void))(v2 + 8 * v1 + 4);
      if ( v3 != nullptr )
        v3();
    }
    __writefsdword(0, v4[0]);
    return 0;
  }
  return result;
}

// Address: 0x403320
int System::_16705()
{
  int result; // eax
  int v1; // esi
  int v2; // ebx
  int v3; // edi
  void (*v4)(void); // eax
  unsigned int v5[6]; // [esp-Ch] [ebp-18h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  result = dword_40E634;
  if ( dword_40E634 != 0 )
  {
    v1 = *(_DWORD *)dword_40E634;
    v2 = 0;
    v3 = *(_DWORD *)(dword_40E634 + 4);
    v5[2] = (unsigned int)&savedregs;
    v5[1] = (unsigned int)&loc_403366;
    v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
    __writefsdword(0, (unsigned int)v5);
    if ( v1 > 0 )
    {
      do
      {
        v4 = *(void (**)(void))(v3 + 8 * v2++);
        dword_40E638 = v2;
        if ( v4 != nullptr )
          v4();
      }
      while ( v1 > v2 );
    }
    __writefsdword(0, v5[0]);
    return 0;
  }
  return result;
}

// Address: 0x403380
int __userpurge System::__linkproc__ StartLib@<eax>(
        int *a1@<eax>,
        int a2@<edx>,
        int *a3@<ecx>,
        int a4@<ebx>,
        struct _EXCEPTION_REGISTRATION_RECORD *a5@<ebp>,
        int a6@<edi>,
        int a7@<esi>,
        void (__cdecl *a8)(int *))
{
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int *v11; // ecx
  PEXCEPTION_ROUTINE Handler; // eax
  int *v15; // [esp-4h] [ebp-4h]

  qmemcpy(&a5[-8].Handler, &dword_40E62C, 44);
  dword_40E64C = a6;
  dword_40E648 = a7;
  dword_40E640 = (int)a5;
  dword_40E644 = a4;
  dword_40E634 = (int)a1;
  dword_40E63C = a2;
  dword_40E62C = (int)&a5[-8].Handler;
  v8 = 0;
  if ( a5[1].Handler == nullptr )
    v8 = *a1;
  dword_40E638 = v8;
  dword_40E014 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))RaiseException;
  dword_40E018 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))RtlUnwind;
  unknown_libname_46(a5);
  v9 = (int)a5[1].Handler + 1;
  byte_40E654 = LOBYTE(a5[1].Handler) + 1;
  v10 = v9 - 1;
  v11 = a3;
  dword_40E650 = *a3;
  if ( v10 != 0 && (char)v10 < 3 )
    ((void (*)(void))a3[v10])();
  v15 = v11;
  if ( a8 != nullptr )
    a8(v11);
  Handler = a5[1].Handler;
  if ( (char)Handler >= 3 )
    ((void (*)(void))v15[(_DWORD)Handler])();
  if ( dword_40E02C == 0 )
    byte_40E034 = 1;
  if ( a5[1].Handler != (PEXCEPTION_ROUTINE)1 )
    System::__linkproc__ Halt0(a8);
  return System::_16705();
}

// Address: 0x403447
void nullsub_12()
{
  ;
}

// Address: 0x403448
int __fastcall System::__linkproc__ InitResStringImports(int *a1)
{
  int v1; // edi
  int *v2; // esi
  int result; // eax

  v1 = *a1;
  v2 = a1 + 1;
  do
  {
    result = System::LoadResString(*(_DWORD *)v2[1], *v2);
    v2 += 2;
    --v1;
  }
  while ( v1 != 0 );
  return result;
}

// Address: 0x403470
int __fastcall System::__linkproc__ InitImports(int *a1)
{
  int v1; // edi
  _DWORD *v2; // esi
  int result; // eax

  v1 = *a1;
  v2 = a1 + 1;
  do
  {
    result = v2[2] + *(_DWORD *)v2[1];
    *(_DWORD *)*v2 = result;
    v2 += 3;
    --v1;
  }
  while ( v1 != 0 );
  return result;
}

// Address: 0x403494
// BDS 2005-2007 and Delphi6-7 Visual Component Library
unsigned int __fastcall unknown_libname_48(int a1, int a2, int a3)
{
  int v3; // ebx
  unsigned int result; // eax

  LOBYTE(a3) = 16;
  v3 = dword_40D000;
  do
  {
    Text[(unsigned __int8)a3] = v3 % 10 + 48;
    v3 /= 10;
    --a3;
  }
  while ( v3 != 0 );
  LOBYTE(a3) = 28;
  result = dword_40D004;
  do
  {
    Text[(unsigned __int8)a3] = byte_40D074[result & 0xF];
    result >>= 4;
    --a3;
  }
  while ( result != 0 );
  return result;
}

// Address: 0x4034F0
// BDS 2005-2007 and Delphi6-7 Visual Component Library
// positive sp value has been detected, the output may be wrong!
BOOL __stdcall unknown_libname_49(int a1, int a2, int a3)
{
  BOOL result; // eax

  result = _InterlockedExchange(&dword_40D000, 0) == 0;
  qmemcpy(&dword_40E62C, (const void *)dword_40E62C, 0x2Cu);
  return result;
}

// Address: 0x40351D
void nullsub_13()
{
  ;
}

// Address: 0x403520
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __fastcall unknown_libname_50(int a1, int a2, DWORD a3)
{
  HANDLE StdHandle; // eax
  HANDLE v4; // eax
  DWORD NumberOfBytesWritten; // [esp+0h] [ebp-4h] BYREF

  NumberOfBytesWritten = a3;
  if ( byte_40E044 != 0 )
  {
    if ( word_40E218 == -10318 && dword_40E220 != 0 )
      dword_40E230(&unk_40E214);
    StdHandle = GetStdHandle(0xFFFFFFF5);
    WriteFile(StdHandle, Text, 0x1Eu, &NumberOfBytesWritten, nullptr);
    v4 = GetStdHandle(0xFFFFFFF5);
    WriteFile(v4, &str___[1], 2u, &NumberOfBytesWritten, nullptr);
  }
  else if ( byte_40D018 == 0 )
  {
    MessageBoxA(nullptr, Text, Caption, 0);
  }
}

// Address: 0x4035AC
void __fastcall __noreturn System::__linkproc__ Halt0(int a1, int a2, int a3)
{
  int (*v3)(void); // eax
  unsigned int v4; // eax
  int v5; // edx
  DWORD v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // [esp+0h] [ebp-10h]
  int v10; // [esp+4h] [ebp-Ch]
  int *v11; // [esp+8h] [ebp-8h]

  if ( byte_40E654 == 0 && unk_40E040 != 0 )
  {
    do
    {
      v3 = (int (*)(void))unk_40E040;
      unk_40E040 = 0;
      a1 = v3();
    }
    while ( unk_40E040 != 0 );
  }
  if ( dword_40D004 != 0 )
  {
    v4 = unknown_libname_48(a1, a2, a3);
    unknown_libname_50(v4, v5, v6);
    dword_40D004 = 0;
  }
  while ( 1 )
  {
    if ( byte_40E654 == 2 && dword_40D000 == 0 )
      dword_40E638 = 0;
    System::_16704();
    if ( ((unsigned __int8)byte_40E654 <= 1u || dword_40D000 != 0) && dword_40E63C != 0 )
    {
      System::UnregisterModule();
      v7 = *(_DWORD *)(dword_40E63C + 16);
      if ( v7 != *(_DWORD *)(dword_40E63C + 4) && v7 != 0 )
        FreeLibrary(*(HMODULE *)(dword_40E63C + 16));
    }
    v8 = unknown_libname_47();
    if ( byte_40E654 == 1 )
      v8 = dword_40E650(v8);
    if ( byte_40E654 != 0 )
      v8 = unknown_libname_49(v9, v10, (int)v11);
    if ( dword_40E62C == 0 )
    {
      if ( dword_40E024 != nullptr )
        dword_40E024(v8);
      ExitProcess(dword_40D000);
    }
    v11 = &dword_40D000;
    qmemcpy(&dword_40E62C, (const void *)dword_40E62C, 0x2Cu);
  }
}

// Address: 0x403684
void __fastcall __noreturn sub_403684(int a1, int a2, int a3)
{
  dword_40D000 = a1;
  System::__linkproc__ Halt0(a1, a2, a3);
}

// Address: 0x40368E
void nullsub_14()
{
  ;
}

// Address: 0x403690
// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn sub_403690(int a1, int a2, int a3)
{
  int v3; // [esp-4h] [ebp-4h]

  dword_40D004 = v3;
  sub_403684(a1, a2, a3);
}

// Address: 0x40369B
void nullsub_15()
{
  ;
}

// Address: 0x40369C
_DWORD *__fastcall System::__linkproc__ LStrClr(_DWORD *result)
{
  int v1; // edx
  _DWORD *v2; // [esp-4h] [ebp-4h]

  v1 = *result;
  if ( *result != 0 )
  {
    *result = 0;
    if ( *(int *)(v1 - 8) >= 1 && _InterlockedDecrement((volatile signed __int32 *)(v1 - 8)) == 0 )
    {
      v2 = result;
      System::__linkproc__ FreeMem((_DWORD *)(v1 - 8));
      return v2;
    }
  }
  return result;
}

// Address: 0x4036C0
int __fastcall System::__linkproc__ LStrArrayClr(int result, int a2)
{
  int *v2; // ebx
  int v4; // edx

  v2 = (int *)result;
  do
  {
    v4 = *v2;
    if ( *v2 != 0 )
    {
      *v2 = 0;
      if ( *(int *)(v4 - 8) >= 1 && _InterlockedDecrement((volatile signed __int32 *)(v4 - 8)) == 0 )
        result = System::__linkproc__ FreeMem((_DWORD *)(v4 - 8));
    }
    ++v2;
    --a2;
  }
  while ( a2 != 0 );
  return result;
}

// Address: 0x4036F0
volatile __int32 *__fastcall System::__linkproc__ LStrAsg(volatile __int32 *result, __int32 a2)
{
  char *v2; // edx
  char *v3; // eax
  __int32 v4; // edx
  char *v5; // [esp-8h] [ebp-8h]
  char *v6; // [esp-8h] [ebp-8h]
  volatile __int32 *v7; // [esp-4h] [ebp-4h]

  if ( a2 != 0 )
  {
    if ( (*(_DWORD *)(a2 - 8) + 1 < 0) ^ __OFADD__(1, *(_DWORD *)(a2 - 8)) | (*(_DWORD *)(a2 - 8) == -1) )
    {
      v7 = result;
      v5 = (char *)a2;
      v2 = (char *)System::__linkproc__ NewAnsiString(*(_DWORD *)(a2 - 4));
      v3 = v5;
      v6 = v2;
      System::Move(v3, v2, *((_DWORD *)v3 - 1));
      a2 = (__int32)v6;
      result = v7;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 - 8));
    }
  }
  v4 = _InterlockedExchange(result, a2);
  if ( v4 != 0 && *(int *)(v4 - 8) >= 1 && _InterlockedDecrement((volatile signed __int32 *)(v4 - 8)) == 0 )
    return (volatile __int32 *)System::__linkproc__ FreeMem((_DWORD *)(v4 - 8));
  return result;
}

// Address: 0x403734
volatile __int32 *__fastcall System::__linkproc__ LStrLAsg(volatile __int32 *result, __int32 a2)
{
  __int32 v2; // edx

  if ( a2 != 0 && !((*(_DWORD *)(a2 - 8) + 1 < 0) ^ __OFADD__(1, *(_DWORD *)(a2 - 8)) | (*(_DWORD *)(a2 - 8) == -1)) )
    _InterlockedIncrement((volatile signed __int32 *)(a2 - 8));
  v2 = _InterlockedExchange(result, a2);
  if ( v2 != 0 && *(int *)(v2 - 8) >= 1 && _InterlockedDecrement((volatile signed __int32 *)(v2 - 8)) == 0 )
    return (volatile __int32 *)System::__linkproc__ FreeMem((_DWORD *)(v2 - 8));
  return result;
}

// Address: 0x403760
int *__fastcall System::__linkproc__ NewAnsiString(int a1)
{
  int *Mem; // eax
  int *result; // eax
  unsigned int v3; // [esp-8h] [ebp-8h]

  if ( a1 <= 0 )
    return nullptr;
  v3 = (a1 + 10) & 0xFFFFFFFE;
  Mem = System::__linkproc__ GetMem(v3);
  *(_WORD *)((char *)Mem + v3 - 2) = 0;
  result = Mem + 2;
  *(result - 1) = a1;
  *(result - 2) = 1;
  return result;
}

// Address: 0x40378C
_DWORD *__fastcall System::__linkproc__ LStrFromPCharLen(int **a1, char *a2, int a3)
{
  int *v6; // eax
  int v7; // ecx
  int *v8; // edi
  _DWORD *result; // eax

  v6 = System::__linkproc__ NewAnsiString(a3);
  v7 = a3;
  v8 = v6;
  if ( a2 != nullptr )
    System::Move(a2, (char *)v6, v7);
  result = System::__linkproc__ LStrClr(a1);
  *a1 = v8;
  return result;
}

// Address: 0x4037BC
int __fastcall System::_16735(LPSTR lpMultiByteStr, int cbMultiByte, LPCWSTR lpWideCharStr, int cchWideChar)
{
  return WideCharToMultiByte(0, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, nullptr, nullptr);
}

// Address: 0x4037D8
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_51(LPWSTR lpWideCharStr, int cchWideChar, LPCSTR lpMultiByteStr, int cbMultiByte)
{
  return MultiByteToWideChar(0, 0, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

// Address: 0x4037F0
_DWORD *__fastcall System::__linkproc__ LStrFromPWCharLen(int **a1, const WCHAR *a2, int cchWideChar)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // ebx
  CHAR MultiByteStr[4112]; // [esp+4h] [ebp-1010h] BYREF

  *(_DWORD *)MultiByteStr = a1;
  if ( cchWideChar <= 0 )
    return System::__linkproc__ LStrClr(a1);
  v6 = cchWideChar + 1;
  if ( cchWideChar + 1 < 2047 )
  {
    v7 = System::_16735(MultiByteStr, 4095, a2, cchWideChar);
    if ( v7 >= 0 )
      return System::__linkproc__ LStrFromPCharLen(a1, MultiByteStr, v7);
  }
  System::__linkproc__ LStrSetLength((int)a1, 2 * v6);
  v8 = System::_16735((LPSTR)*a1, 2 * v6, a2, cchWideChar);
  if ( v8 < 0 )
    v8 = 0;
  return (_DWORD *)System::__linkproc__ LStrSetLength((int)a1, v8);
}

// Address: 0x40387C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_52(int **a1)
{
  char v2; // [esp-4h] [ebp-4h] BYREF

  return System::__linkproc__ LStrFromPCharLen(a1, &v2, 1);
}

// Address: 0x40388C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_53(int **a1, char *a2)
{
  int v2; // ecx
  char *v3; // ecx
  char *v5; // [esp-4h] [ebp-4h]

  v2 = 0;
  if ( a2 != nullptr )
  {
    v5 = a2;
    while ( *a2 != 0 )
    {
      if ( a2[1] == 0 )
        goto LABEL_10;
      if ( a2[2] == 0 )
        goto LABEL_9;
      if ( a2[3] == 0 )
      {
        ++a2;
LABEL_9:
        ++a2;
LABEL_10:
        ++a2;
        break;
      }
      a2 += 4;
    }
    v3 = a2;
    a2 = v5;
    v2 = v3 - v5;
  }
  return System::__linkproc__ LStrFromPCharLen(a1, a2, v2);
}

// Address: 0x4038B8
void nullsub_16()
{
  ;
}

// Address: 0x4038BC
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_54(int **a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // ecx
  int v5; // [esp-4h] [ebp-4h]

  v2 = 0;
  if ( a2 != 0 )
  {
    v5 = a2;
    while ( *(_WORD *)a2 != 0 )
    {
      if ( *(_WORD *)(a2 + 2) == 0 )
        goto LABEL_10;
      if ( *(_WORD *)(a2 + 4) == 0 )
        goto LABEL_9;
      if ( *(_WORD *)(a2 + 6) == 0 )
      {
        a2 += 2;
LABEL_9:
        a2 += 2;
LABEL_10:
        a2 += 2;
        break;
      }
      a2 += 8;
    }
    v3 = a2;
    a2 = v5;
    v2 = (unsigned int)(v3 - v5) >> 1;
  }
  return System::__linkproc__ LStrFromPWCharLen(a1, (const WCHAR *)a2, v2);
}

// Address: 0x4038F4
void nullsub_17()
{
  ;
}

// Address: 0x4038F8
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_55(int **a1, char *a2, int a3)
{
  char *v3; // edi
  bool v4; // zf
  int v6; // [esp-8h] [ebp-Ch]

  v6 = a3;
  v3 = a2;
  v4 = true;
  do
  {
    if ( a3 == 0 )
      break;
    v4 = *v3++ == 0;
    --a3;
  }
  while ( !v4 );
  if ( v4 )
    a3 = ~a3;
  return System::__linkproc__ LStrFromPCharLen(a1, a2, v6 + a3);
}

// Address: 0x40390F
void nullsub_18()
{
  ;
}

// Address: 0x403910
_DWORD *__fastcall System::__linkproc__ LStrFromWStr(int **a1, const WCHAR *a2)
{
  int v2; // ecx

  v2 = 0;
  if ( a2 != nullptr )
    v2 = *((_DWORD *)a2 - 1) >> 1;
  return System::__linkproc__ LStrFromPWCharLen(a1, a2, v2);
}

// Address: 0x403920
void nullsub_19()
{
  ;
}

// Address: 0x403924
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_56(int result)
{
  if ( result != 0 )
    return *(_DWORD *)(result - 4);
  return result;
}

// Address: 0x40392C
volatile __int32 *__fastcall System::__linkproc__ LStrCat(volatile __int32 *result, char *a2)
{
  char *v2; // ecx
  char **v3; // ebx
  int v5; // edi
  int v6; // edx
  char *v7; // eax
  int v8; // ecx

  if ( a2 != nullptr )
  {
    v2 = (char *)*result;
    if ( *result != 0 )
    {
      v3 = (char **)result;
      v5 = *((_DWORD *)v2 - 1);
      v6 = v5 + *((_DWORD *)a2 - 1);
      if ( a2 == v2 )
      {
        System::__linkproc__ LStrSetLength((int)result, v6);
        v7 = *v3;
        v8 = v5;
      }
      else
      {
        System::__linkproc__ LStrSetLength((int)result, v6);
        v7 = a2;
        v8 = *((_DWORD *)a2 - 1);
      }
      return (volatile __int32 *)System::Move(v7, &(*v3)[v5], v8);
    }
    else
    {
      return System::__linkproc__ LStrAsg(result, (__int32)a2);
    }
  }
  return result;
}

// Address: 0x403970
volatile __int32 *__fastcall System::__linkproc__ LStrCat3(volatile __int32 *a1, char *a2, char *a3)
{
  int *v6; // edi

  if ( a2 == nullptr )
    return System::__linkproc__ LStrAsg(a1, (__int32)a3);
  if ( a3 == nullptr )
    return System::__linkproc__ LStrAsg(a1, (__int32)a2);
  if ( a2 == *(char **)a1 )
    return System::__linkproc__ LStrCat(a1, a3);
  if ( a3 == *(char **)a1 )
  {
    v6 = System::__linkproc__ NewAnsiString(*((_DWORD *)a3 - 1) + *((_DWORD *)a2 - 1));
    System::Move(a2, (char *)v6, *((_DWORD *)a2 - 1));
    System::Move(a3, (char *)v6 + *((_DWORD *)a2 - 1), *((_DWORD *)a3 - 1));
    if ( v6 != nullptr )
      --*(v6 - 2);
    return System::__linkproc__ LStrAsg(a1, (__int32)v6);
  }
  else
  {
    System::__linkproc__ LStrAsg(a1, (__int32)a2);
    return System::__linkproc__ LStrCat(a1, a3);
  }
}

// Address: 0x4039E3
void nullsub_20()
{
  ;
}

// Address: 0x4039E4
// positive sp value has been detected, the output may be wrong!
volatile __int32 *__fastcall sub_4039E4(volatile __int32 *a1, int a2)
{
  int v2; // ebx
  int *v3; // edi
  int v4; // ecx
  int v5; // eax
  int *v6; // ecx
  int v7; // esi
  int *v8; // esi
  char *v9; // eax
  char *v10; // edx
  int v11; // ecx
  volatile __int32 *result; // eax
  int *v13; // [esp-10h] [ebp-1Ch]
  int v15; // [esp+8h] [ebp-4h]

  v2 = a2;
  v3 = nullptr;
  v4 = *(&v15 + a2);
  if ( v4 != 0 && *a1 == v4 )
    v3 = (int *)*(&v15 + a2);
  v5 = 0;
  do
  {
    v6 = (int *)*(&v15 + a2);
    if ( v6 != nullptr )
    {
      v5 += *(v6 - 1);
      if ( v3 == v6 )
        v3 = nullptr;
    }
    --a2;
  }
  while ( a2 != 0 );
  if ( v3 != nullptr )
  {
    v7 = *(_DWORD *)(*v3 - 4);
    System::__linkproc__ LStrSetLength((int)v3, v5);
    v13 = v3;
    v8 = (int *)(*v3 + v7);
    --v2;
  }
  else
  {
    v13 = System::__linkproc__ NewAnsiString(v5);
    v8 = v13;
  }
  do
  {
    v9 = (char *)*(&v15 + v2);
    v10 = (char *)v8;
    if ( v9 != nullptr )
    {
      v11 = *((_DWORD *)v9 - 1);
      v8 = (int *)((char *)v8 + v11);
      System::Move(v9, v10, v11);
    }
    --v2;
  }
  while ( v2 != 0 );
  result = a1;
  if ( v3 == nullptr )
  {
    if ( v13 != nullptr )
      --*(v13 - 2);
    return System::__linkproc__ LStrAsg(a1, (__int32)v13);
  }
  return result;
}

// Address: 0x403A64
void nullsub_21()
{
  ;
}

// Address: 0x403A68
int __fastcall System::__linkproc__ LStrCmp(int result, int *a2)
{
  int *v2; // esi
  int *v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // edx
  bool v6; // cc
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // ebx
  char v11; // [esp-4h] [ebp-10h]

  v2 = (int *)result;
  v3 = a2;
  if ( (int *)result != a2 )
  {
    if ( result != 0 )
    {
      if ( a2 != nullptr )
      {
        v4 = *(_DWORD *)(result - 4);
        v5 = *(a2 - 1);
        v6 = v4 <= v5;
        result = v4 - v5;
        if ( v6 )
          v5 += result;
        v11 = v5;
        v7 = v5 >> 2;
        if ( v7 != 0 )
        {
          while ( *v2 == *v3 )
          {
            v8 = v7 - 1;
            if ( v8 == 0 )
            {
              ++v2;
              ++v3;
              goto LABEL_13;
            }
            if ( v2[1] != v3[1] )
              return result;
            v2 += 2;
            v3 += 2;
            v7 = v8 - 1;
            if ( v7 == 0 )
              goto LABEL_13;
          }
        }
        else
        {
LABEL_13:
          if ( (v11 & 3) == 0
            || (v9 = *v2, v10 = *v3, (unsigned __int8)*v2 == (unsigned __int8)*v3)
            && ((v11 & 3) == 1 || BYTE1(v9) == BYTE1(v10) && ((v11 & 3) == 2 || (v9 & 0xFF0000) == (v10 & 0xFF0000))) )
          {
            result *= 2;
          }
        }
      }
      else
      {
        return *(_DWORD *)(result - 4);
      }
    }
    else
    {
      return -*(a2 - 1);
    }
  }
  return result;
}

// Address: 0x403B0C
int __fastcall System::__linkproc__ LStrAddRef(int result)
{
  if ( result != 0
    && !((*(_DWORD *)(result - 8) + 1 < 0) ^ __OFADD__(1, *(_DWORD *)(result - 8)) | (*(_DWORD *)(result - 8) == -1)) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(result - 8));
  }
  return result;
}

// Address: 0x403B1C
char *__fastcall System::__linkproc__ LStrToPChar(char *result)
{
  if ( result == nullptr )
    return &byte_403B21;
  return result;
}

// Address: 0x403B28
// BDS 2005-2007 and Delphi6-7 Visual Component Library
char *__fastcall unknown_libname_57(char **a1)
{
  char *v1; // edx
  int *v3; // edx
  char *v4; // eax
  char *v6; // [esp-8h] [ebp-8h]

  v1 = *a1;
  if ( *a1 != nullptr && *((_DWORD *)v1 - 2) != 1 )
  {
    v3 = System::__linkproc__ NewAnsiString(*((_DWORD *)v1 - 1));
    v4 = *a1;
    *a1 = (char *)v3;
    v6 = v4;
    System::Move(v4, (char *)v3, *((_DWORD *)v4 - 1));
    if ( *((int *)v6 - 2) >= 1 && _InterlockedDecrement((volatile signed __int32 *)v6 - 2) == 0 )
      System::__linkproc__ FreeMem((_DWORD *)v6 - 2);
    return *a1;
  }
  return v1;
}

// Address: 0x403B6C
// attributes: thunk
char *__fastcall j_unknown_libname_57(char **a1)
{
  return unknown_libname_57(a1);
}

// Address: 0x403B71
void nullsub_22()
{
  ;
}

// Address: 0x403B74
_DWORD *__fastcall System::__linkproc__ LStrCopy(int a1, int a2, int a3, int **a4)
{
  int v4; // ebx
  bool v5; // sf
  bool v6; // of
  int v7; // edx
  int v8; // ebx

  if ( a1 == 0 )
    return System::__linkproc__ LStrClr(a4);
  v4 = *(_DWORD *)(a1 - 4);
  if ( v4 == 0 )
    return System::__linkproc__ LStrClr(a4);
  v6 = __OFSUB__(a2, 1);
  v5 = a2 - 1 < 0;
  v7 = a2 - 1;
  if ( v5 != v6 )
  {
    v7 = 0;
  }
  else if ( v7 >= v4 )
  {
    return System::__linkproc__ LStrClr(a4);
  }
  v8 = v4 - v7;
  if ( a3 < 0 )
    return System::__linkproc__ LStrClr(a4);
  if ( a3 > v8 )
    a3 = v8;
  return System::__linkproc__ LStrFromPCharLen(a4, (char *)(a1 + v7), a3);
}

// Address: 0x403BB3
void nullsub_23()
{
  ;
}

// Address: 0x403BB4
char *__fastcall System::__linkproc__ LStrDelete(char **a1, int a2, int a3)
{
  char *result; // eax
  char *v7; // edx
  int v8; // ecx
  bool v9; // sf
  bool v10; // of
  int v11; // esi
  int v12; // ecx

  result = j_unknown_libname_57(a1);
  v7 = *a1;
  if ( *a1 != nullptr )
  {
    v8 = *((_DWORD *)v7 - 1);
    v10 = __OFSUB__(a2, 1);
    v9 = a2 - 1 < 0;
    v11 = a2 - 1;
    if ( v9 == v10 && v11 < v8 && a3 > 0 )
    {
      v12 = v8 - v11;
      if ( a3 > v12 )
        a3 = v12;
      System::Move(&v7[v11 + a3], &v7[v11], v12 - a3);
      return (char *)System::__linkproc__ LStrSetLength((int)a1, *((_DWORD *)*a1 - 1) - a3);
    }
  }
  return result;
}

// Address: 0x403BFC
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_BYTE *__fastcall unknown_libname_58(_BYTE *result, _BYTE *a2)
{
  _BYTE *v2; // esi
  _BYTE *v3; // edi
  signed int v4; // ecx
  signed int v5; // edx
  unsigned __int8 v6; // al
  const void *v7; // esi
  bool v8; // zf
  bool v9; // cc
  int v10; // ecx
  int v11; // ebx
  _BYTE *v12; // [esp-18h] [ebp-18h]
  const void *v13; // [esp-14h] [ebp-14h]

  if ( result != nullptr )
  {
    if ( a2 != nullptr )
    {
      v2 = result;
      v3 = a2;
      v4 = *((_DWORD *)a2 - 1);
      v5 = *((_DWORD *)result - 1) - 1;
      if ( v5 >= 0 )
      {
        v6 = *result;
        v7 = v2 + 1;
        v8 = v4 == v5;
        v9 = v4 <= v5;
        v10 = v4 - v5;
        if ( !v9 )
        {
          while ( 1 )
          {
            do
            {
              if ( v10 == 0 )
                break;
              v8 = *v3++ == v6;
              --v10;
            }
            while ( !v8 );
            if ( !v8 )
              break;
            v11 = v10;
            v13 = v7;
            v12 = v3;
            v8 = memcmp(v7, v3, v5) == 0;
            v3 = v12;
            v7 = v13;
            if ( v8 )
              return (_BYTE *)(v12 - a2);
            v10 = v11;
          }
        }
      }
      return nullptr;
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}

// Address: 0x403C44
_DWORD *__fastcall System::__linkproc__ LStrSetLength(char **a1, int a2)
{
  int *v4; // edi
  char *v5; // eax
  _DWORD *result; // eax
  char *v7; // eax
  int v8; // ecx
  char *v9; // [esp-4h] [ebp-10h] BYREF

  v4 = nullptr;
  if ( a2 > 0 )
  {
    v5 = *a1;
    if ( *a1 != nullptr && *((_DWORD *)v5 - 2) == 1 )
    {
      v9 = v5 - 8;
      System::__linkproc__ ReallocMem((int *)&v9, a2 + 9);
      result = v9 + 8;
      *a1 = v9 + 8;
      *(result - 1) = a2;
      *((_BYTE *)result + a2) = 0;
      return result;
    }
    v4 = System::__linkproc__ NewAnsiString(a2);
    v7 = *a1;
    if ( *a1 != nullptr )
    {
      v8 = *((_DWORD *)v7 - 1);
      if ( v8 >= a2 )
        v8 = a2;
      System::Move(v7, (char *)v4, v8);
    }
  }
  result = System::__linkproc__ LStrClr(a1);
  *a1 = (char *)v4;
  return result;
}

// Address: 0x403CAF
void nullsub_24()
{
  ;
}

// Address: 0x403CB0
OLECHAR **__fastcall System::__linkproc__ WStrClr(OLECHAR **result)
{
  OLECHAR *v1; // edx
  OLECHAR **v2; // [esp-4h] [ebp-4h]

  v1 = *result;
  if ( *result != nullptr )
  {
    *result = nullptr;
    v2 = result;
    SysFreeString(v1);
    return v2;
  }
  return result;
}

// Address: 0x403CC8
void __fastcall System::__linkproc__ WStrArrayClr(OLECHAR **a1, int a2)
{
  OLECHAR *v4; // eax

  do
  {
    v4 = *a1;
    if ( *a1 != nullptr )
    {
      *a1 = nullptr;
      SysFreeString(v4);
    }
    ++a1;
    --a2;
  }
  while ( a2 != 0 );
}

// Address: 0x403CEC
OLECHAR **__fastcall System::__linkproc__ WStrAsg(BSTR *a1, OLECHAR *a2)
{
  UINT v2; // ecx
  OLECHAR **result; // eax

  if ( a2 == nullptr )
    return System::__linkproc__ WStrClr(a1);
  v2 = *((_DWORD *)a2 - 1) >> 1;
  if ( v2 == 0 )
    return System::__linkproc__ WStrClr(a1);
  result = (OLECHAR **)SysReAllocStringLen(a1, a2, v2);
  if ( result == nullptr )
    System::Error(1);
  return result;
}

// Address: 0x403D34
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __fastcall unknown_libname_59(OLECHAR **a1, OLECHAR *a2)
{
  BSTR v2; // eax
  OLECHAR **v3; // edx
  UINT v4; // ecx
  OLECHAR *v5; // ecx
  OLECHAR *v7; // [esp-4h] [ebp-4h]
  OLECHAR *v8; // [esp-4h] [ebp-4h]

  v4 = 0;
  if ( a2 != nullptr )
  {
    v8 = a2;
    while ( *a2 != 0 )
    {
      if ( a2[1] == 0 )
        goto LABEL_10;
      if ( a2[2] == 0 )
        goto LABEL_9;
      if ( a2[3] == 0 )
      {
        ++a2;
LABEL_9:
        ++a2;
LABEL_10:
        ++a2;
        break;
      }
      a2 += 4;
    }
    v5 = a2;
    a2 = v8;
    v4 = (unsigned int)((char *)v5 - (char *)v8) >> 1;
  }
  if ( v4 != 0 )
  {
    v2 = SysAllocStringLen(a2, v4);
    if ( v2 == nullptr )
      System::Error(1);
    v3 = a1;
    v7 = *a1;
    *v3 = v2;
    SysFreeString(v7);
  }
  else
  {
    System::__linkproc__ WStrClr(a1);
  }
}

// Address: 0x403D6C
void nullsub_25()
{
  ;
}

// Address: 0x403D70
int __fastcall System::__linkproc__ WStrLen(int result)
{
  if ( result != 0 )
    return *(_DWORD *)(result - 4) >> 1;
  return result;
}

// Address: 0x403D7C
int __fastcall System::__linkproc__ FinalizeRecord(int a1, int a2)
{
  int v2; // ecx
  int v4; // esi
  int v5; // edi

  v2 = *(unsigned __int8 *)(a2 + 1);
  v4 = v2 + a2 + 10;
  v5 = *(_DWORD *)(v2 + a2 + 6);
  do
  {
    System::__linkproc__ FinalizeArray(a1 + *(_DWORD *)(v4 + 4), **(_DWORD **)v4, 1);
    v4 += 8;
  }
  while ( v5-- > 1 );
  return a1;
}

// Address: 0x403DB0
OLECHAR **__fastcall System::__linkproc__ FinalizeArray(OLECHAR **result, char *a2, int a3)
{
  OLECHAR **v3; // ebx
  int v5; // edi
  char v6; // al
  int v7; // edx
  OLECHAR **v8; // eax
  bool v9; // cc
  int v10; // ebp
  OLECHAR **v11; // eax
  int v12; // ebp
  int v13; // eax
  OLECHAR **v14; // eax
  OLECHAR **v15; // eax
  OLECHAR **v16; // [esp-4h] [ebp-4h]

  if ( a3 != 0 )
  {
    v16 = result;
    v3 = result;
    v5 = a3;
    v6 = *a2;
    v7 = (unsigned __int8)a2[1];
    switch ( v6 )
    {
      case 10:
        if ( a3 > 1 )
          System::__linkproc__ LStrArrayClr((int)v3, a3);
        else
          System::__linkproc__ LStrClr(v3);
        break;
      case 11:
        if ( a3 > 1 )
          System::__linkproc__ WStrArrayClr(v3, a3);
        else
          System::__linkproc__ WStrClr(v3);
        break;
      case 12:
        do
        {
          v8 = v3;
          v3 += 4;
          sub_404134(v8, v7);
          v9 = v5-- <= 1;
        }
        while ( !v9 );
        break;
      case 13:
        v10 = v7;
        do
        {
          v11 = v3;
          v3 = (OLECHAR **)((char *)v3 + *(_DWORD *)&a2[v10 + 2]);
          System::__linkproc__ FinalizeArray(v11, **(_DWORD **)&a2[v10 + 10], *(_DWORD *)&a2[v10 + 6]);
          v9 = v5-- <= 1;
        }
        while ( !v9 );
        break;
      case 14:
        v12 = v7;
        do
        {
          v13 = (int)v3;
          v3 = (OLECHAR **)((char *)v3 + *(_DWORD *)&a2[v12 + 2]);
          System::__linkproc__ FinalizeRecord(v13, (int)a2);
          v9 = v5-- <= 1;
        }
        while ( !v9 );
        break;
      case 15:
        do
        {
          v14 = v3++;
          System::__linkproc__ IntfClear(v14, v7);
          v9 = v5-- <= 1;
        }
        while ( !v9 );
        break;
      case 17:
        do
        {
          v15 = v3++;
          System::__linkproc__ DynArrayClear(v15, a2);
          v9 = v5-- <= 1;
        }
        while ( !v9 );
        break;
      default:
        System::Error(2);
    }
    return v16;
  }
  return result;
}

// Address: 0x403E9C
int __fastcall System::__linkproc__ CopyRecord(int a1, int a2, int a3)
{
  char ***v5; // edi
  int v6; // ebp
  int result; // eax
  char **v8; // ecx
  bool v9; // cc
  int v10; // ecx
  char **v11; // eax
  char *v12; // edx
  char v13; // cl
  int v14; // eax
  int v15; // ecx
  int v16; // [esp-8h] [ebp-18h]
  int v17; // [esp-8h] [ebp-18h]
  int v18; // [esp-4h] [ebp-14h]

  v5 = (char ***)(*(unsigned __int8 *)(a3 + 1) + a3 + 10);
  v6 = *(_DWORD *)(*(unsigned __int8 *)(a3 + 1) + a3 + 6);
  result = 0;
  v18 = *(_DWORD *)(*(unsigned __int8 *)(a3 + 1) + a3 + 2);
  do
  {
    v8 = v5[1];
    v9 = (int)v8 <= result;
    v10 = (int)v8 - result;
    if ( !v9 )
      System::Move((char *)(a2 + result), (char *)(a1 + result), v10);
    v11 = v5[1];
    v12 = **v5;
    v13 = *v12;
    if ( *v12 == 10 )
    {
      System::__linkproc__ LStrAsg((volatile __int32 *)((char *)v11 + a1), *(__int32 *)((char *)v11 + a2));
      v14 = 4;
    }
    else
    {
      switch ( v13 )
      {
        case 11:
          System::__linkproc__ WStrAsg((BSTR *)((char *)v11 + a1), *(OLECHAR **)((char *)v11 + a2));
          v14 = 4;
          break;
        case 12:
          sub_404124((char *)v11 + a1, (char *)v11 + a2);
          v14 = 16;
          break;
        case 13:
          v15 = (unsigned __int8)v12[1];
          v16 = *(_DWORD *)&v12[v15 + 2];
          System::__linkproc__ CopyArray(*(_DWORD *)&v12[v15 + 6]);
          v14 = v16;
          break;
        case 14:
          System::__linkproc__ CopyRecord(
            (char *)v11 + a1,
            (char *)v11 + a2,
            v12,
            *(_DWORD *)&v12[(unsigned __int8)v12[1] + 2]);
          v14 = v17;
          break;
        case 15:
          System::__linkproc__ IntfCopy((char *)v11 + a1, *(char **)((char *)v11 + a2));
          v14 = 4;
          break;
        case 17:
          System::__linkproc__ DynArrayAsg((char *)v11 + a1, *(char **)((char *)v11 + a2), **v5);
          v14 = 4;
          break;
        default:
          System::Error(2);
      }
    }
    result = (int)v5[1] + v14;
    v5 += 2;
    --v6;
  }
  while ( v6 != 0 );
  if ( v18 > result )
    return System::Move((char *)(a2 + result), (char *)(result + a1), v18 - result);
  return result;
}

// Address: 0x403FB8
int __fastcall System::__linkproc__ CopyArray(volatile __int32 *a1, __int32 *a2, char *a3, int a4)
{
  char v8; // cl
  int result; // eax
  char *v10; // edi

  v8 = *a3;
  switch ( v8 )
  {
    case 10:
      do
      {
        result = (int)System::__linkproc__ LStrAsg(a1++, *a2++);
        --a4;
      }
      while ( a4 != 0 );
      break;
    case 11:
      do
      {
        result = (int)System::__linkproc__ WStrAsg((BSTR *)a1++, (OLECHAR *)*a2++);
        --a4;
      }
      while ( a4 != 0 );
      break;
    case 12:
      do
      {
        result = sub_404124(a1, a2);
        a1 += 4;
        a2 += 4;
        --a4;
      }
      while ( a4 != 0 );
      break;
    case 13:
      v10 = &a3[(unsigned __int8)a3[1] + 2];
      do
      {
        result = System::__linkproc__ CopyArray(*((_DWORD *)v10 + 1));
        a1 = (volatile __int32 *)((char *)a1 + *(_DWORD *)v10);
        a2 = (__int32 *)((char *)a2 + *(_DWORD *)v10);
        --a4;
      }
      while ( a4 != 0 );
      break;
    case 14:
      do
      {
        System::__linkproc__ CopyRecord((int)a1, (int)a2, (int)a3);
        result = (unsigned __int8)a3[1];
        a1 = (volatile __int32 *)((char *)a1 + *(_DWORD *)&a3[result + 2]);
        a2 = (__int32 *)((char *)a2 + *(_DWORD *)&a3[result + 2]);
        --a4;
      }
      while ( a4 != 0 );
      break;
    case 15:
      do
      {
        result = System::__linkproc__ IntfCopy(a1++, *a2++);
        --a4;
      }
      while ( a4 != 0 );
      break;
    case 17:
      do
      {
        result = System::__linkproc__ DynArrayAsg(a1++, *a2++, a3);
        --a4;
      }
      while ( a4 != 0 );
      break;
    default:
      JUMPOUT(0x4025EC);
  }
  return result;
}

// Address: 0x4040AA
void nullsub_26()
{
  ;
}

// Address: 0x4040AC
LPWSTR __fastcall System::StringToWideChar(char *System::AnsiString, LPWSTR lpWideCharStr, int a3)
{
  char *v6; // eax
  int v8; // [esp-4h] [ebp-10h]

  v8 = unknown_libname_56((int)System::AnsiString);
  v6 = System::__linkproc__ LStrToPChar(System::AnsiString);
  lpWideCharStr[unknown_libname_51(lpWideCharStr, a3 - 1, v6, v8)] = 0;
  return lpWideCharStr;
}

// Address: 0x4040DC
void __noreturn sub_4040DC()
{
  System::Error(16);
}

// Address: 0x4040E3
void nullsub_27()
{
  ;
}

// Address: 0x4040E4
__int16 __fastcall System::_16828(unsigned __int16 *a1)
{
  unsigned __int16 v1; // ax
  bool v2; // cf
  __int16 result; // ax

  v1 = *a1;
  v2 = v1 < 2u;
  result = v1 - 2;
  if ( !v2 )
  {
    result -= 8;
    if ( result != 0 )
      sub_4040DC();
  }
  return result;
}

// Address: 0x4040FC
__int16 (__fastcall *System::_16829())(unsigned __int16 *a1)
{
  int i; // eax

  for ( i = 0; i != 43; ++i )
    dword_40E658[i] = (int)sub_4040DC;
  dword_40E658[0] = (int)System::_16828;
  return System::_16828;
}

// Address: 0x40411C
// attributes: thunk
int sub_40411C()
{
  return dword_40E658();
}

// Address: 0x404122
void nullsub_28()
{
  ;
}

// Address: 0x404124
// attributes: thunk
int __fastcall sub_404124(int a1, int a2)
{
  return dword_40E65C(a1, a2);
}

// Address: 0x40412A
void nullsub_29()
{
  ;
}

// Address: 0x40412C
// attributes: thunk
int sub_40412C()
{
  return dword_40E684();
}

// Address: 0x404132
void nullsub_30()
{
  ;
}

// Address: 0x404134
void __spoils<edx,ecx> sub_404134()
{
  sub_40411C();
}

// Address: 0x40413C
void __noreturn sub_40413C()
{
  System::Error(17);
}

// Address: 0x404143
void nullsub_31()
{
  ;
}

// Address: 0x404144
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_60(int a1, int a2, int a3, int a4, int a5)
{
  return a5 * a1;
}

// Address: 0x404167
void nullsub_32()
{
  ;
}

// Address: 0x404168
int __fastcall System::__linkproc__ _lludiv(unsigned __int64 _RAX, unsigned __int64 a2)
{
  int v3; // ecx

  if ( HIDWORD(a2) != 0 || HIDWORD(_RAX) != 0 && (_DWORD)a2 != 0 )
  {
    v3 = 64;
    _EDI = 0;
    _ESI = 0;
    do
    {
      LODWORD(_RAX) = 2 * _RAX;
      __asm
      {
        rcl     edx, 1
        rcl     esi, 1
        rcl     edi, 1
      }
      if ( __PAIR64__(_EDI, _ESI) >= a2 )
      {
        _EDI = (__PAIR64__(_EDI, _ESI) - a2) >> 32;
        _ESI -= a2;
        LODWORD(_RAX) = _RAX + 1;
      }
      --v3;
    }
    while ( v3 != 0 );
  }
  else
  {
    LODWORD(_RAX) = _RAX / (unsigned int)a2;
  }
  return _RAX;
}

// Address: 0x4041B1
void nullsub_33()
{
  ;
}

// Address: 0x4041B4
unsigned int __fastcall System::__linkproc__ _llumod(unsigned __int64 _RAX, unsigned __int64 a2)
{
  int v3; // ecx

  if ( HIDWORD(a2) == 0 && (HIDWORD(_RAX) == 0 || (_DWORD)a2 == 0) )
    return _RAX % (unsigned int)a2;
  v3 = 64;
  _EDI = 0;
  _ESI = 0;
  do
  {
    LODWORD(_RAX) = 2 * _RAX;
    __asm
    {
      rcl     edx, 1
      rcl     esi, 1
      rcl     edi, 1
    }
    if ( __PAIR64__(_EDI, _ESI) >= a2 )
    {
      _EDI = (__PAIR64__(_EDI, _ESI) - a2) >> 32;
      _ESI -= a2;
      LODWORD(_RAX) = _RAX + 1;
    }
    --v3;
  }
  while ( v3 != 0 );
  return _ESI;
}

// Address: 0x404202
void nullsub_34()
{
  ;
}

// Address: 0x404204
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_61(int result)
{
  if ( result != 0 )
    return *(_DWORD *)(result - 4);
  return result;
}

// Address: 0x40420C
int __fastcall System::Variant::PutElement(volatile __int32 *a1, __int32 *a2, char *a3, int a4)
{
  return System::__linkproc__ CopyArray(a1, a2, a3, a4);
}

// Address: 0x40421C
// attributes: thunk
OLECHAR **__fastcall System::__linkproc__ FinalizeArray(OLECHAR **result, char *a2, int a3)
{
  return @System@@FinalizeArray$qqrpvt1ui(result, a2, a3);
}

// Address: 0x404221
void nullsub_35()
{
  ;
}

// Address: 0x404224
// attributes: thunk
int __fastcall sub_404224(int a1, int a2)
{
  return System::__linkproc__ DynArrayClear(a1, a2);
}

// Address: 0x40422C
__int32 **__fastcall System::DynArraySetLength(void **a1, char *a2, int a3, int *a4)
{
  __int32 *v4; // ebx
  int v5; // edi
  __int32 **result; // eax
  int *v7; // ebx
  char *v8; // eax
  char **v9; // edx
  char *v10; // esi
  int *Mem; // ebx
  int *v12; // ebx
  __int32 *v13; // ebx
  int v14; // edi
  int v15; // edi
  int v16; // [esp+Ch] [ebp-20h] BYREF
  int v17; // [esp+10h] [ebp-1Ch]
  int v18; // [esp+14h] [ebp-18h]
  int v19; // [esp+18h] [ebp-14h]
  int v20; // [esp+1Ch] [ebp-10h]
  int v21; // [esp+20h] [ebp-Ch]
  int v22; // [esp+24h] [ebp-8h]
  __int32 **v23; // [esp+28h] [ebp-4h]
  int *v24; // [esp+34h] [ebp+8h]

  v22 = a3;
  v23 = (__int32 **)a1;
  v4 = (__int32 *)*a1;
  v5 = *a4;
  if ( *a4 > 0 )
  {
    v20 = 0;
    if ( v4 != nullptr )
    {
      v7 = v4 - 1;
      v20 = *v7;
      v4 = v7 - 1;
    }
    v8 = &a2[(unsigned __int8)a2[1]];
    v18 = *(_DWORD *)(v8 + 2);
    v9 = *(char ***)(v8 + 6);
    if ( v9 != nullptr )
      v10 = *v9;
    else
      v10 = nullptr;
    v17 = v18 * v5;
    if ( v18 * v5 / v5 != v18 )
      System::Error(4);
    v17 += 8;
    if ( v4 != nullptr && *v4 != 1 )
    {
      --*v4;
      Mem = System::__linkproc__ GetMem(v17);
      v19 = v20;
      if ( v5 < v20 )
        v19 = v5;
      if ( v10 != nullptr )
      {
        System::__linkproc__ FillChar((char *)Mem + 8, v18 * v19, 0);
        System::Variant::PutElement(Mem + 2, *v23, v10, v19);
      }
      else
      {
        System::Move((char *)*v23, (char *)Mem + 8, v18 * v19);
      }
    }
    else
    {
      v16 = (int)v4;
      if ( v5 < v20 && v10 != nullptr )
        System::__linkproc__ FinalizeArray((OLECHAR **)((char *)v4 + v18 * v5 + 8), v10, v20 - v5);
      System::__linkproc__ ReallocMem(&v16, v17);
      Mem = (int *)v16;
    }
    *Mem = 1;
    v12 = Mem + 1;
    *v12 = v5;
    v13 = v12 + 1;
    System::__linkproc__ FillChar((char *)v13 + v20 * v18, v18 * (v5 - v20), 0);
    if ( v22 > 1 )
    {
      v24 = a4 + 1;
      --v22;
      v14 = v5 - 1;
      if ( v14 >= 0 )
      {
        v15 = v14 + 1;
        v21 = 0;
        do
        {
          System::DynArraySetLength((void **)&v13[v21++], v10, v22, v24);
          --v15;
        }
        while ( v15 != 0 );
      }
    }
    result = v23;
    *v23 = v13;
  }
  else
  {
    if ( v5 < 0 )
      System::Error(4);
    return (__int32 **)sub_404224((int)v23, (int)a2);
  }
  return result;
}

// Address: 0x4043B8
__int32 **__fastcall System::__linkproc__ DynArraySetLength(void **a1, char *a2, int a3, int a4)
{
  return System::DynArraySetLength(a1, a2, a3, &a4);
}

// Address: 0x4043C4
OLECHAR ***__fastcall System::__linkproc__ DynArrayClear(OLECHAR ***result, int a2)
{
  OLECHAR **v2; // ecx
  OLECHAR **v3; // eax
  char **v4; // edx
  int v5; // ecx
  OLECHAR ***v6; // [esp-4h] [ebp-4h]

  v2 = *result;
  if ( *result != nullptr )
  {
    *result = nullptr;
    if ( _InterlockedDecrement((volatile signed __int32 *)v2 - 2) == 0 )
    {
      v6 = result;
      v3 = v2;
      v4 = *(char ***)(*(unsigned __int8 *)(a2 + 1) + a2 + 6);
      if ( v4 != nullptr )
      {
        v5 = (int)*(v2 - 1);
        if ( v5 != 0 )
          v3 = System::__linkproc__ FinalizeArray(v3, *v4, v5);
      }
      System::__linkproc__ FreeMem(v3 - 2);
      return v6;
    }
  }
  return result;
}

// Address: 0x404400
OLECHAR ***__fastcall System::__linkproc__ DynArrayAsg(OLECHAR ***result, OLECHAR **a2, int a3)
{
  OLECHAR **v3; // ebx
  OLECHAR **v4; // [esp-8h] [ebp-Ch]
  OLECHAR ***v5; // [esp-4h] [ebp-8h]

  v3 = *result;
  if ( a2 != nullptr )
    _InterlockedIncrement((volatile signed __int32 *)a2 - 2);
  if ( v3 != nullptr && _InterlockedDecrement((volatile signed __int32 *)v3 - 2) == 0 )
  {
    v5 = result;
    v4 = a2;
    *(v3 - 2) = (OLECHAR *)((char *)*(v3 - 2) + 1);
    System::__linkproc__ DynArrayClear(result, a3);
    a2 = v4;
    result = v5;
  }
  *result = a2;
  return result;
}

// Address: 0x404428
int __fastcall System::__linkproc__ DynArrayAddRef(int result)
{
  if ( result != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(result - 8));
  return result;
}

// Address: 0x404434
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_62(int a1)
{
  int ResourceModule; // eax
  CHAR Filename[272]; // [esp+0h] [ebp-110h] BYREF

  if ( *(_DWORD *)(a1 + 16) == 0 )
  {
    GetModuleFileNameA(*(HMODULE *)(a1 + 4), Filename, 0x105u);
    ResourceModule = System::LoadResourceModule(Filename, true);
    *(_DWORD *)(a1 + 16) = ResourceModule;
    if ( ResourceModule == 0 )
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 4);
  }
  return *(_DWORD *)(a1 + 16);
}

// Address: 0x40447C
int __fastcall System::FindResourceHInstance(int result)
{
  _DWORD *v1; // edx

  v1 = (_DWORD *)dword_40D01C;
  if ( dword_40D01C != 0 )
  {
    while ( result != v1[1] && result != v1[2] && result != v1[3] )
    {
      v1 = (_DWORD *)*v1;
      if ( v1 == nullptr )
        return result;
    }
    return unknown_libname_62((int)v1);
  }
  return result;
}

// Address: 0x4044A4
const CHAR *__fastcall System::_16936(const CHAR *lpsz)
{
  while ( *lpsz != 0 && *lpsz != 92 )
    lpsz = CharNextA(lpsz);
  return lpsz;
}

// Address: 0x4044B8
int __fastcall System::_16937(CHAR *a1, int a2)
{
  HMODULE ModuleHandleA; // eax
  DWORD (__stdcall *GetLongPathNameA)(LPCSTR, LPSTR, DWORD); // ebx
  const CHAR *v4; // eax
  const CHAR *v5; // esi
  int v6; // ebx
  const CHAR *v7; // edi
  HANDLE FirstFileA; // eax
  CHAR String2[261]; // [esp+Dh] [ebp-24Fh] BYREF
  _WORD FindFileData[161]; // [esp+112h] [ebp-14Ah] BYREF
  int iMaxLength; // [esp+254h] [ebp-8h]
  LPSTR lpString1; // [esp+258h] [ebp-4h]

  iMaxLength = a2;
  lpString1 = a1;
  *(_DWORD *)&FindFileData[159] = a1;
  ModuleHandleA = GetModuleHandleA("kernel32.dll");
  if ( ModuleHandleA != nullptr )
  {
    GetLongPathNameA = (DWORD (__stdcall *)(LPCSTR, LPSTR, DWORD))GetProcAddress(ModuleHandleA, "GetLongPathNameA");
    if ( GetLongPathNameA != nullptr && GetLongPathNameA(lpString1, String2, 261) != 0 )
    {
LABEL_16:
      lstrcpynA(lpString1, String2, iMaxLength);
      return *(_DWORD *)&FindFileData[159];
    }
  }
  if ( *lpString1 != 92 )
  {
    v5 = lpString1 + 2;
  }
  else
  {
    if ( lpString1[1] != 92 )
      return *(_DWORD *)&FindFileData[159];
    v4 = System::_16936(lpString1 + 2);
    if ( *v4 == 0 )
      return *(_DWORD *)&FindFileData[159];
    v5 = System::_16936(v4 + 1);
    if ( *v5 == 0 )
      return *(_DWORD *)&FindFileData[159];
  }
  v6 = v5 - lpString1;
  lstrcpynA(String2, lpString1, v5 - lpString1 + 1);
  while ( *v5 != 0 )
  {
    v7 = System::_16936(v5 + 1);
    if ( v6 + v7 - v5 + 1 > 261 )
      return *(_DWORD *)&FindFileData[159];
    lstrcpynA(&String2[v6], v5, v7 - v5 + 1);
    FirstFileA = FindFirstFileA(String2, (LPWIN32_FIND_DATAA)FindFileData);
    if ( FirstFileA == (HANDLE)-1 )
      return *(_DWORD *)&FindFileData[159];
    FindClose(FirstFileA);
    if ( v6 + 1 + lstrlenA((LPCSTR)&FindFileData[22]) + 1 > 261 )
      return *(_DWORD *)&FindFileData[159];
    String2[v6] = 92;
    lstrcpynA(&String2[v6 + 1], (LPCSTR)&FindFileData[22], 261 - v6 - 1);
    v6 += lstrlenA((LPCSTR)&FindFileData[22]) + 1;
    v5 = v7;
  }
  goto LABEL_16;
}

// Address: 0x404670
HMODULE __fastcall System::LoadResourceModule(char *a1, bool a2)
{
  LCID ThreadLocale; // eax
  HMODULE Library; // esi
  CHAR *i; // ebx
  CHAR *v5; // ebx
  unsigned int ExceptionList; // [esp-Ch] [ebp-134h] BYREF
  LPSTR v8; // [esp-8h] [ebp-130h]
  int v9; // [esp-4h] [ebp-12Ch]
  CHAR Filename[261]; // [esp+Bh] [ebp-11Dh] BYREF
  DWORD cbData; // [esp+110h] [ebp-18h] BYREF
  BYTE Data[5]; // [esp+116h] [ebp-12h] BYREF
  CHAR LCData[5]; // [esp+11Bh] [ebp-Dh] BYREF
  HKEY phkResult; // [esp+120h] [ebp-8h] BYREF
  LPCSTR lpString2; // [esp+124h] [ebp-4h]
  int savedregs; // [esp+128h] [ebp+0h] BYREF

  lpString2 = a1;
  GetModuleFileNameA(nullptr, Filename, 0x105u);
  Data[0] = 0;
  if ( RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\Borland\\Locales", 0, 0xF0019u, &phkResult) == 0
    || RegOpenKeyExA(HKEY_LOCAL_MACHINE, "Software\\Borland\\Locales", 0, 0xF0019u, &phkResult) == 0
    || RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\Borland\\Delphi\\Locales", 0, 0xF0019u, &phkResult) == 0 )
  {
    v9 = (int)&savedregs;
    v8 = (LPSTR)&loc_404775;
    ExceptionList = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
    __writefsdword(0, (unsigned int)&ExceptionList);
    cbData = 5;
    System::_16937(Filename, 261);
    if ( RegQueryValueExA(phkResult, Filename, nullptr, nullptr, Data, &cbData) != 0
      && RegQueryValueExA(phkResult, ValueName, nullptr, nullptr, Data, &cbData) != 0 )
    {
      Data[0] = 0;
    }
    Data[4] = 0;
    __writefsdword(0, ExceptionList);
    v9 = (int)&loc_40477C;
    RegCloseKey(phkResult);
  }
  lstrcpynA(Filename, lpString2, 261);
  v9 = 5;
  v8 = LCData;
  ExceptionList = 3;
  ThreadLocale = GetThreadLocale();
  GetLocaleInfoA(ThreadLocale, ExceptionList, v8, v9);
  Library = nullptr;
  if ( Filename[0] != 0 && (LCData[0] != 0 || Data[0] != 0) )
  {
    for ( i = &Filename[lstrlenA(Filename)]; *i != 46 && i != Filename; --i )
      ;
    if ( i != Filename )
    {
      v5 = i + 1;
      if ( Data[0] != 0 )
      {
        lstrcpynA(v5, (LPCSTR)Data, 261 - (v5 - Filename));
        Library = LoadLibraryExA(Filename, nullptr, 2u);
      }
      if ( Library == nullptr && LCData[0] != 0 )
      {
        lstrcpynA(v5, LCData, 261 - (v5 - Filename));
        Library = LoadLibraryExA(Filename, nullptr, 2u);
        if ( Library == nullptr )
        {
          LCData[2] = 0;
          lstrcpynA(v5, LCData, 261 - (v5 - Filename));
          return LoadLibraryExA(Filename, nullptr, 2u);
        }
      }
    }
  }
  return Library;
}

// Address: 0x4048E0
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_63(int a1)
{
  int result; // eax
  unsigned int v2[6]; // [esp-Ch] [ebp-20h] BYREF
  int i; // [esp+Ch] [ebp-8h]
  int v4; // [esp+10h] [ebp-4h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v4 = a1;
  result = dword_40D020;
  for ( i = dword_40D020; i != 0; i = *(_DWORD *)i )
  {
    v2[2] = (unsigned int)&savedregs;
    v2[1] = (unsigned int)&loc_40491B;
    v2[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
    __writefsdword(0, (unsigned int)v2);
    (*(void (__fastcall **)(int))(i + 4))(v4);
    __writefsdword(0, v2[0]);
    result = *(_DWORD *)i;
  }
  return result;
}

// Address: 0x40493C
_DWORD *__fastcall System::RegisterModule(_DWORD *result)
{
  *result = dword_40D01C;
  dword_40D01C = (int)result;
  return result;
}

// Address: 0x40494C
_DWORD *__fastcall System::UnregisterModule(_DWORD *a1)
{
  _DWORD *result; // eax
  unsigned int v2[2]; // [esp-Ch] [ebp-10h] BYREF
  int *v3; // [esp-4h] [ebp-8h]
  _DWORD *v4; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  v4 = a1;
  v3 = &savedregs;
  v2[1] = (unsigned int)&loc_4049B0;
  v2[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v2);
  unknown_libname_63(a1[1]);
  __writefsdword(0, v2[0]);
  v3 = (int *)&loc_4049B7;
  if ( v4 == (_DWORD *)dword_40D01C )
  {
    result = (_DWORD *)*v4;
    dword_40D01C = *v4;
  }
  else
  {
    result = (_DWORD *)dword_40D01C;
    if ( dword_40D01C != 0 )
    {
      while ( (_DWORD *)*result != v4 )
      {
        result = (_DWORD *)*result;
        if ( result == nullptr )
          return result;
      }
      *result = *v4;
    }
  }
  return result;
}

// Address: 0x4049BC
_DWORD *__fastcall System::__linkproc__ IntfClear(_DWORD *result)
{
  int v1; // edx
  _DWORD *v2; // [esp-4h] [ebp-4h]

  v1 = *result;
  if ( *result != 0 )
  {
    *result = 0;
    v2 = result;
    (*(void (__stdcall **)(int))(*(_DWORD *)v1 + 8))(v1);
    return v2;
  }
  return result;
}

// Address: 0x4049D4
_DWORD *__fastcall System::__linkproc__ IntfCopy(_DWORD *result, int a2)
{
  int v2; // ecx
  bool v3; // zf
  _DWORD *v4; // [esp-8h] [ebp-8h]

  if ( a2 != 0 )
  {
    v4 = result;
    (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
    result = v4;
    v2 = *v4;
    *v4 = a2;
    if ( v2 == 0 )
      return result;
  }
  else
  {
    v2 = *result;
    v3 = *result == 0;
    *result = 0;
    if ( v3 )
      return result;
  }
  return (_DWORD *)(*(int (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
}

// Address: 0x404A00
int **__fastcall System::LoadResString(int **result, int **a2)
{
  HINSTANCE ResourceHInstance; // eax
  int StringA; // eax
  UINT v5; // [esp-Ch] [ebp-414h]
  CHAR Buffer[1032]; // [esp+0h] [ebp-408h] BYREF

  if ( result != nullptr )
  {
    if ( (int)result[1] >= 0x10000 )
    {
      return (int **)unknown_libname_53(a2, (char *)result[1]);
    }
    else
    {
      v5 = (UINT)result[1];
      ResourceHInstance = (HINSTANCE)System::FindResourceHInstance(**result);
      StringA = LoadStringA(ResourceHInstance, v5, Buffer, 1024);
      return (int **)System::__linkproc__ LStrFromPCharLen(a2, Buffer, StringA);
    }
  }
  return result;
}

// Address: 0x404A58
int __cdecl System::Finalization()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_404AA2;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  if ( ++dword_40E5B4 == 0 )
  {
    System::__linkproc__ Close((int)&unk_40E048);
    System::__linkproc__ Close((int)&unk_40E214);
    System::__linkproc__ Close((int)&unk_40E3E0);
    System::_16448();
  }
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x404AAC
void sub_404AAC()
{
  if ( dword_40E5B4-- == 0 )
  {
    byte_40D008 = 2;
    dword_40E014 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))RaiseException;
    dword_40E018 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))RtlUnwind;
    byte_40E046 = 2;
    dword_40E000 = (int)sub_40413C;
    if ( (unsigned __int8)unknown_libname_31() != 0 )
      unknown_libname_32();
    unknown_libname_33();
    word_40E04C = -10320;
    word_40E218 = -10320;
    word_40E3E4 = -10320;
    System::_16829();
    dword_40E03C = (int)GetCommandLineA();
    dword_40E038 = unknown_libname_3();
    dword_40E030 = GetCurrentThreadId();
  }
}

// Address: 0x404B34
// attributes: thunk
HLOCAL __stdcall LocalAlloc_0(UINT uFlags, SIZE_T uBytes)
{
  return __imp_LocalAlloc_0(uFlags, uBytes);
}

// Address: 0x404B3C
// attributes: thunk
HLOCAL __stdcall LocalFree_0(HLOCAL hMem)
{
  return __imp_LocalFree_0(hMem);
}

// Address: 0x404B44
// attributes: thunk
DWORD __stdcall TlsAlloc()
{
  return __imp_TlsAlloc();
}

// Address: 0x404B4C
// attributes: thunk
BOOL __stdcall TlsFree(DWORD dwTlsIndex)
{
  return __imp_TlsFree(dwTlsIndex);
}

// Address: 0x404B54
// attributes: thunk
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
{
  return __imp_TlsGetValue(dwTlsIndex);
}

// Address: 0x404B5C
// attributes: thunk
BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  return __imp_TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x404B64
HLOCAL __fastcall sub_404B64(SIZE_T uBytes)
{
  return LocalAlloc_0(0x40u, uBytes);
}

// Address: 0x404B70
int sub_404B70()
{
  return 8;
}

// Address: 0x404B78
// BDS 2005-2007 and Delphi6-7 Visual Component Library
SIZE_T unknown_libname_64()
{
  SIZE_T result; // eax
  int v1; // edx
  int v2; // ecx
  HLOCAL v3; // eax
  int v4; // edx
  int v5; // ecx

  result = sub_404B70();
  if ( result != 0 )
  {
    if ( dwTlsIndex == -1 )
      sub_403690(226, v1, v2);
    v3 = sub_404B64(result);
    if ( v3 == nullptr )
      sub_403690(226, v4, v5);
    return TlsSetValue(dwTlsIndex, v3);
  }
  return result;
}

// Address: 0x404BBC
// BDS 2005-2007 and Delphi6-7 Visual Component Library
LPVOID unknown_libname_65()
{
  LPVOID result; // eax

  dwTlsIndex = TlsAlloc();
  unknown_libname_64();
  result = TlsGetValue(dwTlsIndex);
  dword_40E71C = (int)result;
  return result;
}

// Address: 0x404BE8
int SysInit::_16391()
{
  int result; // eax

  result = 8;
  if ( dwTlsIndex != -1 )
  {
    result = (int)TlsGetValue(dwTlsIndex);
    if ( result != 0 )
      return (int)LocalFree_0((HLOCAL)result);
  }
  return result;
}

// Address: 0x404C10
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int unknown_libname_66()
{
  int result; // eax

  result = SysInit::_16391();
  if ( dwTlsIndex != -1 )
    return TlsFree(dwTlsIndex);
  return result;
}

// Address: 0x404C34
LPVOID Sysinit::__linkproc__ GetTls()
{
  LPVOID result; // eax

  if ( byte_40E704 == 0 )
    return *((LPVOID *)NtCurrentTeb()->ThreadLocalStoragePointer + dwTlsIndex);
  result = TlsGetValue(dwTlsIndex);
  if ( result == nullptr )
  {
    unknown_libname_64();
    result = TlsGetValue(dwTlsIndex);
    if ( result == nullptr )
      return (LPVOID)dword_40E71C;
  }
  return result;
}

// Address: 0x404C74
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *unknown_libname_67()
{
  return System::RegisterModule(&a123456789abcde[15]);
}

// Address: 0x404C80
int __usercall Sysinit::__linkproc__ InitLib@<eax>(
        int *a1@<eax>,
        int a2@<ebx>,
        struct _EXCEPTION_REGISTRATION_RECORD *a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>)
{
  int *v6; // [esp-4h] [ebp-4h]

  if ( a3[1].Handler == (PEXCEPTION_ROUTINE)1 )
  {
    v6 = a1;
    byte_40E704 = 1;
    hModule = (HMODULE)a3[1].Next;
    unk_40D088 = hModule;
    unk_40D08C = 0;
    unk_40D090 = 0;
    unknown_libname_67();
    a1 = v6;
  }
  return System::__linkproc__ StartLib(
           a1,
           (int)&a123456789abcde[15],
           (int *)off_40D09C,
           a2,
           a3,
           a4,
           a5,
           (void (__cdecl *)(int *))dword_40E714);
}

// Address: 0x404CC8
int sub_404CC8()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_404CED;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E718;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x404CF8
void sub_404CF8()
{
  --dword_40E718;
}

// Address: 0x404D00
int sub_404D00()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_404D25;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E720;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x404D30
void sub_404D30()
{
  --dword_40E720;
}

// Address: 0x404D38
// attributes: thunk
BOOL __stdcall AdjustTokenPrivileges(
        HANDLE TokenHandle,
        BOOL DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        DWORD BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PDWORD ReturnLength)
{
  return __imp_AdjustTokenPrivileges(
           TokenHandle,
           DisableAllPrivileges,
           NewState,
           BufferLength,
           PreviousState,
           ReturnLength);
}

// Address: 0x404D40
// attributes: thunk
BOOL __stdcall LookupAccountNameA(
        LPCSTR lpSystemName,
        LPCSTR lpAccountName,
        PSID Sid,
        LPDWORD cbSid,
        LPSTR ReferencedDomainName,
        LPDWORD cbReferencedDomainName,
        PSID_NAME_USE peUse)
{
  return __imp_LookupAccountNameA(
           lpSystemName,
           lpAccountName,
           Sid,
           cbSid,
           ReferencedDomainName,
           cbReferencedDomainName,
           peUse);
}

// Address: 0x404D48
// attributes: thunk
BOOL __stdcall LookupPrivilegeValueA(LPCSTR lpSystemName, LPCSTR lpName, PLUID lpLuid)
{
  return __imp_LookupPrivilegeValueA(lpSystemName, lpName, lpLuid);
}

// Address: 0x404D50
// attributes: thunk
BOOL __stdcall OpenProcessToken(HANDLE ProcessHandle, DWORD DesiredAccess, PHANDLE TokenHandle)
{
  return __imp_OpenProcessToken(ProcessHandle, DesiredAccess, TokenHandle);
}

// Address: 0x404D58
// attributes: thunk
BOOL __stdcall CloseHandle(HANDLE hObject)
{
  return __imp_CloseHandle(hObject);
}

// Address: 0x404D60
// attributes: thunk
HANDLE __stdcall CreateFileA(
        LPCSTR lpFileName,
        DWORD dwDesiredAccess,
        DWORD dwShareMode,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        DWORD dwCreationDisposition,
        DWORD dwFlagsAndAttributes,
        HANDLE hTemplateFile)
{
  return __imp_CreateFileA(
           lpFileName,
           dwDesiredAccess,
           dwShareMode,
           lpSecurityAttributes,
           dwCreationDisposition,
           dwFlagsAndAttributes,
           hTemplateFile);
}

// Address: 0x404D68
// attributes: thunk
BOOL __stdcall EnumCalendarInfoA(CALINFO_ENUMPROCA lpCalInfoEnumProc, LCID Locale, CALID Calendar, CALTYPE CalType)
{
  return __imp_EnumCalendarInfoA(lpCalInfoEnumProc, Locale, Calendar, CalType);
}

// Address: 0x404D70
// attributes: thunk
BOOL __stdcall FileTimeToDosDateTime(const FILETIME *lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime)
{
  return __imp_FileTimeToDosDateTime(lpFileTime, lpFatDate, lpFatTime);
}

// Address: 0x404D78
// attributes: thunk
BOOL __stdcall FileTimeToLocalFileTime(const FILETIME *lpFileTime, LPFILETIME lpLocalFileTime)
{
  return __imp_FileTimeToLocalFileTime(lpFileTime, lpLocalFileTime);
}

// Address: 0x404D80
// attributes: thunk
BOOL __stdcall FindClose_0(HANDLE hFindFile)
{
  return __imp_FindClose_0(hFindFile);
}

// Address: 0x404D88
// attributes: thunk
HANDLE __stdcall FindFirstFileA_0(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
{
  return __imp_FindFirstFileA_0(lpFileName, lpFindFileData);
}

// Address: 0x404D90
// attributes: thunk
DWORD __stdcall FormatMessageA(
        DWORD dwFlags,
        LPCVOID lpSource,
        DWORD dwMessageId,
        DWORD dwLanguageId,
        LPSTR lpBuffer,
        DWORD nSize,
        va_list *Arguments)
{
  return __imp_FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}

// Address: 0x404D98
// attributes: thunk
UINT __stdcall GetACP()
{
  return __imp_GetACP();
}

// Address: 0x404DA0
// attributes: thunk
BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo)
{
  return __imp_GetCPInfo(CodePage, lpCPInfo);
}

// Address: 0x404DA8
// attributes: thunk
HANDLE __stdcall GetCurrentProcess()
{
  return __imp_GetCurrentProcess();
}

// Address: 0x404DB0
// attributes: thunk
BOOL __stdcall GetDiskFreeSpaceA(
        LPCSTR lpRootPathName,
        LPDWORD lpSectorsPerCluster,
        LPDWORD lpBytesPerSector,
        LPDWORD lpNumberOfFreeClusters,
        LPDWORD lpTotalNumberOfClusters)
{
  return __imp_GetDiskFreeSpaceA(
           lpRootPathName,
           lpSectorsPerCluster,
           lpBytesPerSector,
           lpNumberOfFreeClusters,
           lpTotalNumberOfClusters);
}

// Address: 0x404DB8
// attributes: thunk
DWORD __stdcall GetLastError_0()
{
  return __imp_GetLastError_0();
}

// Address: 0x404DC0
// attributes: thunk
void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)
{
  __imp_GetLocalTime(lpSystemTime);
}

// Address: 0x404DC8
// attributes: thunk
int __stdcall GetLocaleInfoA_0(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
  return __imp_GetLocaleInfoA_0(Locale, LCType, lpLCData, cchData);
}

// Address: 0x404DD0
// attributes: thunk
DWORD __stdcall GetModuleFileNameA_0(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
{
  return __imp_GetModuleFileNameA_0(hModule, lpFilename, nSize);
}

// Address: 0x404DD8
// attributes: thunk
HMODULE __stdcall GetModuleHandleA_0(LPCSTR lpModuleName)
{
  return __imp_GetModuleHandleA_0(lpModuleName);
}

// Address: 0x404DE0
// attributes: thunk
FARPROC __stdcall GetProcAddress_0(HMODULE hModule, LPCSTR lpProcName)
{
  return __imp_GetProcAddress_0(hModule, lpProcName);
}

// Address: 0x404DE8
// attributes: thunk
HANDLE __stdcall GetStdHandle_0(DWORD nStdHandle)
{
  return __imp_GetStdHandle_0(nStdHandle);
}

// Address: 0x404DF0
// attributes: thunk
BOOL __stdcall GetStringTypeExA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
{
  return __imp_GetStringTypeExA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

// Address: 0x404DF8
// attributes: thunk
LCID __stdcall GetThreadLocale_0()
{
  return __imp_GetThreadLocale_0();
}

// Address: 0x404E00
// attributes: thunk
BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)
{
  return __imp_GetVersionExA(lpVersionInformation);
}

// Address: 0x404E08
// attributes: thunk
HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes)
{
  return __imp_GlobalAlloc(uFlags, dwBytes);
}

// Address: 0x404E10
// attributes: thunk
HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
{
  return __imp_GlobalFree(hMem);
}

// Address: 0x404E18
// attributes: thunk
DWORD __stdcall VirtualQuery(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, DWORD dwLength)
{
  return __imp_VirtualQuery(lpAddress, lpBuffer, dwLength);
}

// Address: 0x404E20
// attributes: thunk
BOOL __stdcall WriteFile_0(
        HANDLE hFile,
        LPCVOID lpBuffer,
        DWORD nNumberOfBytesToWrite,
        LPDWORD lpNumberOfBytesWritten,
        LPOVERLAPPED lpOverlapped)
{
  return __imp_WriteFile_0(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
}

// Address: 0x404E28
// attributes: thunk
LPSTR __stdcall lstrcpynA_0(LPSTR lpString1, LPCSTR lpString2, int iMaxLength)
{
  return __imp_lstrcpynA_0(lpString1, lpString2, iMaxLength);
}

// Address: 0x404E30
// attributes: thunk
LPSTR __stdcall CharNextA_0(LPCSTR lpsz)
{
  return __imp_CharNextA_0(lpsz);
}

// Address: 0x404E38
// attributes: thunk
int __stdcall GetSystemMetrics(int nIndex)
{
  return __imp_GetSystemMetrics(nIndex);
}

// Address: 0x404E40
// attributes: thunk
int __stdcall LoadStringA_0(HINSTANCE hInstance, UINT uID, LPSTR lpBuffer, int nBufferMax)
{
  return __imp_LoadStringA_0(hInstance, uID, lpBuffer, nBufferMax);
}

// Address: 0x404E48
// attributes: thunk
int __stdcall MessageBoxA_0(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
  return __imp_MessageBoxA_0(hWnd, lpText, lpCaption, uType);
}

// Address: 0x404E50
__int16 __fastcall Windows::ZeroMemory(char *a1, int a2)
{
  return System::__linkproc__ FillChar(a1, a2, 0);
}

// Address: 0x404E58
int sub_404E58()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_404E7D;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E724;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x404E88
void sub_404E88()
{
  --dword_40E724;
}

// Address: 0x404E90
int __fastcall sub_404E90(int a1, int a2, int a3, int a4)
{
  iMaxLength = a2;
  dword_40E734 = a1;
  dword_40E72C = a4;
  dword_40E730 = a3;
  return a3;
}

// Address: 0x404EC8
HGLOBAL __fastcall sub_404EC8(int **a1)
{
  HGLOBAL result; // eax
  _DWORD *hMem; // [esp+0h] [ebp-8h]

  result = (HGLOBAL)dword_40E72C;
  if ( *(_DWORD *)dword_40E72C != 0 )
  {
    hMem = *(_DWORD **)dword_40E72C;
    unknown_libname_53(a1, (char *)(*(_DWORD *)dword_40E72C + 4));
    *(_DWORD *)dword_40E72C = *hMem;
    return GlobalFree(hMem);
  }
  return result;
}

// Address: 0x404F0C
int __fastcall sub_404F0C(int result)
{
  char *v1; // eax
  int v2; // [esp-4h] [ebp-Ch]
  CHAR *v3; // [esp+0h] [ebp-8h]
  char *v4; // [esp+4h] [ebp-4h]

  v4 = (char *)result;
  if ( dword_40E72C != 0 )
  {
    v3 = (CHAR *)GlobalAlloc(0x40u, iMaxLength + 8);
    v2 = iMaxLength;
    v1 = System::__linkproc__ LStrToPChar(v4);
    lstrcpynA_0(v3 + 4, v1, v2);
    *(_DWORD *)v3 = *(_DWORD *)dword_40E72C;
    result = dword_40E72C;
    *(_DWORD *)dword_40E72C = v3;
  }
  return result;
}

// Address: 0x404F68
int sub_404F68()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_404F8D;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E738;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x404F98
void sub_404F98()
{
  --dword_40E738;
}

// Address: 0x405134
void __userpurge nullsub_36(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64)
{
  ;
}

// Address: 0x40513C
void nullsub_37()
{
  ;
}

// Address: 0x405174
int __userpurge nullsub_38@<eax>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64)
{
  _BYTE retaddr[8]; // [esp+0h] [ebp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_DWORD *)retaddr)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55,
           a56,
           a57,
           a58,
           a59,
           a60,
           a61,
           a62,
           a63);
}

// Address: 0x40517C
int nullsub_39()
{
  _BYTE retaddr[8]; // [esp+0h] [ebp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_DWORD *)retaddr)();
}

// Address: 0x405230
int sub_405230()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_405255;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E73C;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x405260
void sub_405260()
{
  --dword_40E73C;
}

// Address: 0x405C5C (sub_405C5C)
// DECOMPILATION FAILED (code=-12, errea=0x405C6D): call analysis failed
/*
  0x405C5C: push    ebx
  0x405C5D: mov     ebx, eax
  0x405C5F: mov     ecx, ebx; int
  0x405C61: mov     dl, 1; int
  0x405C63: mov     eax, off_40586C; int
  0x405C68: call    @Sysutils@Exception@$bctr$qqrp20System@TResStringRec; Sysutils::Exception::Exception(System::TResStringRec *)
  0x405C6D: call    @System@@RaiseExcept$qqrv; System::__linkproc__ RaiseExcept(void)
  0x405C72: pop     ebx
  0x405C73: retn
*/
// Address: 0x405C74 (sub_405C74)
// DECOMPILATION FAILED (code=-12, errea=0x405C8D): call analysis failed
/*
  0x405C74: push    ebx
  0x405C75: push    esi
  0x405C76: push    edi
  0x405C77: mov     edi, ecx
  0x405C79: mov     esi, edx
  0x405C7B: mov     ebx, eax
  0x405C7D: push    esi; int
  0x405C7E: push    edi; int
  0x405C7F: mov     ecx, ebx; int
  0x405C81: mov     dl, 1; int
  0x405C83: mov     eax, off_40586C; int
  0x405C88: call    @Sysutils@Exception@$bctr$qqrp20System@TResStringRecpx14System@TVarRecxi; Sysutils::Exception::Exception(System::TResStringRec *,System::TVarRec *,int)
  0x405C8D: call    @System@@RaiseExcept$qqrv; System::__linkproc__ RaiseExcept(void)
  0x405C92: pop     edi
  0x405C93: pop     esi
  0x405C94: pop     ebx
  0x405C95: retn
*/
// Address: 0x405C98
int *__fastcall Sysutils::AllocMem(int a1)
{
  int *Mem; // esi

  Mem = System::__linkproc__ GetMem(a1);
  System::__linkproc__ FillChar((char *)Mem, a1, 0);
  return Mem;
}

// Address: 0x405CB8
_DWORD *__fastcall Sysutils::Trim(int System::AnsiString, int **a2)
{
  int v4; // eax
  int v5; // esi
  int i; // ebx

  v4 = unknown_libname_56(System::AnsiString);
  v5 = v4;
  for ( i = 1; v4 >= i && *(_BYTE *)(System::AnsiString + i - 1) <= 0x20u; ++i )
    ;
  if ( v4 < i )
    return System::__linkproc__ LStrClr(a2);
  while ( *(_BYTE *)(System::AnsiString + v5 - 1) <= 0x20u )
    --v5;
  return System::__linkproc__ LStrCopy(System::AnsiString, i, v5 - i + 1, a2);
}

// Address: 0x405D08
int __fastcall Sysutils::IntToStr(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-8h] BYREF
  char v4; // [esp+4h] [ebp-4h]

  v3 = a1;
  v4 = 0;
  return Sysutils::FmtStr(a2, (int)&str__d[1], (int)&v3, 0);
}

// Address: 0x405D38
int __fastcall Sysutils::IntToStr(int a1, __int64 a2)
{
  int v5; // [esp+0h] [ebp-8h] BYREF
  char v6; // [esp+4h] [ebp-4h]

  v5 = (int)&a2;
  v6 = 16;
  return Sysutils::FmtStr(a1, (int)&str__d_0[1], (int)&v5, 0);
}

// Address: 0x405D6C
int __fastcall Sysutils::StrToInt(int System::AnsiString)
{
  int v2; // esi
  char *v4; // [esp+0h] [ebp-14h] BYREF
  int v5; // [esp+4h] [ebp-10h] BYREF
  char v6; // [esp+8h] [ebp-Ch]

  v2 = System::__linkproc__ ValLong(System::AnsiString, &v4);
  if ( v4 != nullptr )
  {
    v5 = System::AnsiString;
    v6 = 11;
    sub_405C74(off_40D358[0], &v5, 0);
  }
  return v2;
}

// Address: 0x405DA8
int __fastcall Sysutils::StrToIntDef(int System::AnsiString, int a2, char *a3)
{
  int result; // eax
  char *v5; // [esp+0h] [ebp-8h] BYREF

  v5 = a3;
  result = System::__linkproc__ ValLong(System::AnsiString, &v5);
  if ( v5 != nullptr )
    return a2;
  return result;
}

// Address: 0x405DD8
int __fastcall Sysutils::FileAge(char *System::AnsiString)
{
  char *v1; // eax
  HANDLE FirstFileA_0; // eax
  struct _WIN32_FIND_DATAA FindFileData; // [esp+4h] [ebp-14Ch] BYREF
  struct _FILETIME LocalFileTime; // [esp+144h] [ebp-Ch] BYREF
  WORD FatDate[2]; // [esp+14Ch] [ebp-4h] BYREF

  v1 = System::__linkproc__ LStrToPChar(System::AnsiString);
  FirstFileA_0 = FindFirstFileA_0(v1, &FindFileData);
  if ( FirstFileA_0 == (HANDLE)-1
    || (FindClose_0(FirstFileA_0), (FindFileData.dwFileAttributes & 0x10) != 0)
    || (FileTimeToLocalFileTime(&FindFileData.ftLastWriteTime, &LocalFileTime),
        !FileTimeToDosDateTime(&LocalFileTime, &FatDate[1], FatDate)) )
  {
    *(_DWORD *)FatDate = -1;
  }
  return *(_DWORD *)FatDate;
}

// Address: 0x405E40
bool __fastcall Sysutils::FileExists(char *System::AnsiString)
{
  return Sysutils::FileAge(System::AnsiString) != -1;
}

// Address: 0x405E50
int __fastcall Sysutils::LastDelimiter(char *a1, int System::AnsiString)
{
  int v4; // edi
  char *i; // ebp
  char v6; // bl

  v4 = unknown_libname_56(System::AnsiString);
  for ( i = System::__linkproc__ LStrToPChar(a1); v4 > 0; --v4 )
  {
    v6 = *(_BYTE *)(System::AnsiString + v4 - 1);
    if ( v6 != 0 && Sysutils::StrScan(i, v6) != 0 )
    {
      if ( (unsigned __int8)Sysutils::ByteType(System::AnsiString, v4) != 2 )
        return v4;
      --v4;
    }
  }
  return v4;
}

// Address: 0x405EA0
_DWORD *__fastcall Sysutils::ExtractFilePath(int System::AnsiString, int **a2)
{
  int Delimiter; // eax

  Delimiter = Sysutils::LastDelimiter((char *)&str___[1], System::AnsiString);
  return System::__linkproc__ LStrCopy(System::AnsiString, 1, Delimiter, a2);
}

// Address: 0x405ED4
_DWORD *__fastcall Sysutils::ExtractFileName(int System::AnsiString, int **a2)
{
  int Delimiter; // eax

  Delimiter = Sysutils::LastDelimiter((char *)&str____0[1], System::AnsiString);
  return System::__linkproc__ LStrCopy(System::AnsiString, Delimiter + 1, 0x7FFFFFFF, a2);
}

// Address: 0x405F0C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
BOOL __stdcall unknown_libname_72(LPCSTR lpRootPathName, int *a2, int *a3, int a4)
{
  const CHAR *v4; // eax
  BOOL DiskFreeSpaceA; // ebx
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int v10; // [esp+4h] [ebp-18h]
  DWORD TotalNumberOfClusters; // [esp+Ch] [ebp-10h] BYREF
  DWORD NumberOfFreeClusters; // [esp+10h] [ebp-Ch] BYREF
  DWORD BytesPerSector; // [esp+14h] [ebp-8h] BYREF
  DWORD SectorsPerCluster; // [esp+18h] [ebp-4h] BYREF

  v4 = lpRootPathName;
  if ( lpRootPathName == nullptr )
    v4 = nullptr;
  DiskFreeSpaceA = GetDiskFreeSpaceA(
                     v4,
                     &SectorsPerCluster,
                     &BytesPerSector,
                     &NumberOfFreeClusters,
                     &TotalNumberOfClusters);
  v10 = BytesPerSector * SectorsPerCluster;
  *a2 = unknown_libname_60(BytesPerSector * SectorsPerCluster, 0, v6, 0, NumberOfFreeClusters);
  a2[1] = v7;
  *a3 = unknown_libname_60(v10, 0, (int)a2, 0, TotalNumberOfClusters);
  a3[1] = v8;
  return DiskFreeSpaceA;
}

// Address: 0x405F80
unsigned int __fastcall Sysutils::StrLen(const char *a1)
{
  return strlen(a1);
}

// Address: 0x405F98
char *__fastcall Sysutils::StrMove(char *a1, char *a2, int a3)
{
  System::Move(a2, a1, a3);
  return a1;
}

// Address: 0x405FA8
char *__fastcall Sysutils::StrLCopy(char *result, const char *a2, unsigned int a3)
{
  const char *v3; // edi
  unsigned int v4; // ebx
  bool v5; // zf
  unsigned int v6; // ebx
  char *v7; // edi
  unsigned int v8; // ecx

  v3 = a2;
  v4 = a3;
  v5 = a3 == 0;
  if ( a3 != 0 )
  {
    do
    {
      if ( a3 == 0 )
        break;
      v5 = *v3++ == 0;
      --a3;
    }
    while ( !v5 );
    if ( v5 )
      ++a3;
  }
  v6 = v4 - a3;
  qmemcpy(result, a2, 4 * (v6 >> 2));
  v7 = &result[4 * (v6 >> 2)];
  v8 = v6 & 3;
  qmemcpy(v7, &a2[4 * (v6 >> 2)], v8);
  v7[v8] = 0;
  return result;
}

// Address: 0x405FDC
char *__fastcall sub_405FDC(char *a1, char *a2)
{
  char *v4; // eax
  unsigned int v6; // [esp-4h] [ebp-Ch]

  v6 = unknown_libname_56((int)a2);
  v4 = System::__linkproc__ LStrToPChar(a2);
  return Sysutils::StrLCopy(a1, v4, v6);
}

// Address: 0x406000
int __fastcall Sysutils::StrLIComp(const char *a1, const char *a2, unsigned int a3)
{
  const char *v3; // edi
  unsigned int v5; // ebx
  int result; // eax
  int v7; // ecx
  const char *v8; // edi
  bool v9; // zf
  int v10; // edx

  v3 = a2;
  v5 = a3;
  result = 0;
  if ( a3 != 0 )
  {
    do
    {
      if ( a3 == 0 )
        break;
      v9 = *v3++ == 0;
      --a3;
    }
    while ( !v9 );
    v7 = v5 - a3;
    v8 = a2;
    v10 = 0;
    v9 = true;
    do
    {
      do
      {
        if ( v7 == 0 )
          break;
        v9 = *a1++ == *v8++;
        --v7;
      }
      while ( v9 );
      if ( v9 )
        break;
      LOBYTE(result) = *(a1 - 1);
      if ( (unsigned __int8)result >= 0x61u && (unsigned __int8)result <= 0x7Au )
        LOBYTE(result) = result - 32;
      LOBYTE(v10) = *(v8 - 1);
      if ( (unsigned __int8)v10 >= 0x61u && (unsigned __int8)v10 <= 0x7Au )
        LOBYTE(v10) = v10 - 32;
      result -= v10;
      v9 = result == 0;
    }
    while ( result == 0 );
  }
  return result;
}

// Address: 0x406044
const char *__fastcall Sysutils::StrScan(const char *a1, unsigned __int8 a2)
{
  const char *v2; // edi
  int v3; // ecx
  bool v4; // zf
  int v5; // ecx
  const char *v6; // edi
  const char *result; // eax

  v2 = a1;
  v3 = -1;
  v4 = true;
  do
  {
    if ( v3 == 0 )
      break;
    v4 = *v2++ == 0;
    --v3;
  }
  while ( !v4 );
  v5 = ~v3;
  v6 = a1;
  do
  {
    if ( v5 == 0 )
      break;
    v4 = *v6++ == a2;
    --v5;
  }
  while ( !v4 );
  result = nullptr;
  if ( v4 )
    return v6 - 1;
  return result;
}

// Address: 0x406064
int *__fastcall Sysutils::StrAlloc(unsigned int a1)
{
  int v1; // ebx
  int *Mem; // eax

  v1 = a1 + 4;
  Mem = System::__linkproc__ GetMem(a1 + 4);
  *Mem = v1;
  return Mem + 1;
}

// Address: 0x406078
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_73(int a1, char *a2, unsigned int a3)
{
  int v3; // ebx
  char v7[32]; // [esp+0h] [ebp-34h] BYREF
  char *v8; // [esp+20h] [ebp-14h] BYREF
  char v9; // [esp+24h] [ebp-10h]

  v3 = a3;
  if ( a3 > 0x1F )
    v3 = 31;
  if ( (unsigned __int8)Sysutils::StrByteType(a2, v3 - 1) == 1 )
    --v3;
  Sysutils::StrMove(v7, a2, v3);
  v7[v3] = 0;
  v8 = v7;
  v9 = 6;
  return sub_405C74(off_40D128[a1], &v8, 0);
}

// Address: 0x4060D0
int sub_4060D0()
{
  return sub_40412C();
}

// Address: 0x4060E4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_74(_DWORD *a1)
{
  return System::__linkproc__ LStrClr(a1);
}

// Address: 0x4060F0
int __fastcall Sysutils::FormatBuf(char *a1, unsigned int a2, _BYTE *a3, int a4, int a5, int a6)
{
  char *v6; // edi
  _BYTE *v7; // esi
  _BYTE *v8; // ecx
  _DWORD *v9; // eax
  _BYTE *v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  _BYTE *v14; // ebx
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  unsigned int v17; // et0
  bool v18; // cf
  unsigned int v19; // edx
  char *v20; // edi
  unsigned int v21; // ecx
  unsigned int v23; // [esp-14h] [ebp-8Ch]
  unsigned int v24; // [esp-14h] [ebp-8Ch]
  _BYTE *v25; // [esp-10h] [ebp-88h]
  _BYTE *v26; // [esp+50h] [ebp-28h]
  unsigned int v27; // [esp+58h] [ebp-20h]
  char v28; // [esp+5Fh] [ebp-19h]
  int v29; // [esp+68h] [ebp-10h] BYREF
  _BYTE *v30; // [esp+6Ch] [ebp-Ch]
  char *v31; // [esp+70h] [ebp-8h]
  int v32; // [esp+74h] [ebp-4h]

  v6 = a1;
  v7 = a3;
  v32 = 0;
  v8 = &a3[a4];
  v31 = a1;
  v9 = nullptr;
  v30 = nullptr;
  v29 = 0;
LABEL_2:
  if ( a2 != 0 )
  {
    while ( v7 != v8 )
    {
      LOBYTE(v9) = *v7++;
      if ( (_BYTE)v9 == 37 )
      {
        if ( v7 == v8 )
          return sub_4064E4(v6 - v31);
        LOBYTE(v9) = *v7++;
        if ( (_BYTE)v9 != 37 )
        {
          v10 = v7 - 2;
          while ( 1 )
          {
            v28 = (char)v9;
            if ( (_BYTE)v9 == 45 )
            {
              if ( v7 == v8 )
                return sub_4064E4(v6 - v31);
              LOBYTE(v9) = *v7++;
            }
            v9 = (_DWORD *)sub_4061D2(v9);
            if ( (_BYTE)v9 != 58 )
              break;
            v30 = v10;
            if ( v7 == v8 )
              return sub_4064E4(v6 - v31);
            LOBYTE(v9) = *v7++;
          }
          v27 = (unsigned int)v10;
          if ( (_BYTE)v9 == 46 )
          {
            if ( v7 == v8 )
              return sub_4064E4(v6 - v31);
            LOBYTE(v9) = *v7++;
            v9 = (_DWORD *)sub_4061D2(v9);
          }
          v26 = v7;
          v25 = v8;
          v23 = v11;
          v9 = (_DWORD *)sub_40621A(v9);
          v13 = v23;
          v14 = &v10[-v12];
          if ( v27 < v12 )
            v14 = nullptr;
          if ( v28 == 45 )
          {
            v13 = v23 - v12;
            if ( v23 < v12 )
            {
              v12 = v23;
              v13 = 0;
            }
            qmemcpy(v6, v7, v12);
            v7 += v12;
            v6 += v12;
            v12 = 0;
          }
          v17 = (unsigned int)v14;
          v16 = v12;
          v15 = v17;
          v18 = v13 < v17;
          v19 = v13 - v17;
          if ( v18 )
          {
            v15 += v19;
            v19 = 0;
          }
          memset(v6, 32, v15);
          v20 = &v6[v15];
          v21 = v16;
          v18 = v19 < v16;
          a2 = v19 - v16;
          if ( v18 )
          {
            v21 = a2 + v16;
            a2 = 0;
          }
          qmemcpy(v20, v7, v21);
          v6 = &v20[v21];
          if ( v29 != 0 )
          {
            v24 = a2;
            v9 = unknown_libname_74(&v29);
            a2 = v24;
          }
          v8 = v25;
          v7 = v26;
          goto LABEL_2;
        }
      }
      *v6++ = (char)v9;
      if ( --a2 == 0 )
        return sub_4064E4(v6 - v31);
    }
  }
  return sub_4064E4(v6 - v31);
}

// Address: 0x4061D2
// positive sp value has been detected, the output may be wrong!
unsigned __int8 __usercall sub_4061D2@<al>(
        unsigned __int8 result@<al>,
        unsigned __int8 *a2@<ecx>,
        int a3@<ebp>,
        unsigned __int8 *a4@<esi>)
{
  int v4; // ebx

  v4 = 0;
  if ( result == 42 )
  {
    if ( *(_DWORD *)(a3 - 12) <= *(_DWORD *)(a3 + 8) )
      ++*(_DWORD *)(a3 - 12);
    if ( a4 == a2 )
LABEL_12:
      JUMPOUT(0x40612A);
    return *a4;
  }
  else
  {
    while ( result >= 0x30u && result <= 0x39u )
    {
      v4 = (unsigned __int8)(result - 48) + 10 * v4;
      if ( a4 == a2 )
        goto LABEL_12;
      result = *a4++;
    }
  }
  return result;
}

// Address: 0x40621A
char __usercall sub_40621A@<al>(char a1@<al>, int a2@<ebp>, int a3@<esi>)
{
  char v3; // cl
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // ebx
  bool v9; // cf
  void *v10; // esi
  _BYTE *v11; // edi
  int v12; // ecx
  bool v13; // zf
  char v14; // bl
  unsigned int v15; // eax
  unsigned int v16; // edx

  v3 = a1 & 0xDF;
  v4 = 1;
  v5 = *(_DWORD *)(a2 - 12);
  if ( v5 > *(_DWORD *)(a2 + 8) )
    goto LABEL_4;
  ++*(_DWORD *)(a2 - 12);
  a3 = *(_DWORD *)(a2 + 12) + 8 * v5;
  v6 = *(_DWORD *)a3;
  switch ( *(_BYTE *)(a3 + 4) )
  {
    case 0:
      switch ( v3 )
      {
        case 'D':
          if ( v6 < 0 )
          {
            sub_40636E(-v6);
            *(_BYTE *)(a3 - 1) = 45;
            LOBYTE(v6) = 45;
            return v6;
          }
          break;
        case 'U':
          break;
        case 'X':
LABEL_54:
          JUMPOUT(0x406373);
        default:
LABEL_3:
          while ( 1 )
          {
            v4 = 0;
LABEL_4:
            v7 = sub_4064E4(v4);
            v6 = unknown_libname_73(v7, *(char **)(a2 - 24), *(_DWORD *)(a2 - 40) - *(_DWORD *)(a2 - 24));
LABEL_5:
            v8 = (_DWORD *)(a2 - 48);
            *v8 = *(_DWORD *)v6;
            v8[1] = *(_DWORD *)(v6 + 4);
            if ( v3 == 68 )
              break;
            if ( v3 == 85 )
              goto LABEL_50;
            if ( v3 == 88 )
              JUMPOUT(0x4062E2);
          }
          if ( (int)v8[1] < 0 )
          {
            v9 = *v8 != 0;
            *v8 = -*v8;
            v8[1] += v9;
            v8[1] = -v8[1];
            sub_4062DD();
            *(_BYTE *)(a3 - 1) = 45;
            LOBYTE(v6) = 45;
            return v6;
          }
LABEL_50:
          LOBYTE(v6) = sub_4062DD();
          return v6;
      }
      LOBYTE(v6) = sub_40636E(v6);
      return v6;
    case 1:
    case 7:
    case 8:
    case 9:
    case 0xE:
      goto LABEL_3;
    case 2:
      if ( v3 == 83 )
        return v6;
      goto LABEL_3;
    case 3:
    case 0xC:
      a3 = *(_DWORD *)a3;
      v14 = 0;
      if ( v3 == 71 || (v14 = 1, v3 == 69) )
      {
        v15 = *(_DWORD *)(a2 - 36);
        v16 = 3;
        if ( v15 > 0x12 )
          v15 = 15;
      }
      else
      {
        v14 = 2;
        if ( v3 != 70 )
        {
          v14 = 3;
          if ( v3 != 78 )
          {
            if ( v3 != 77 )
              goto LABEL_3;
            v14 = 4;
          }
        }
        v15 = 18;
        v16 = *(_DWORD *)(a2 - 36);
        if ( v16 > 0x12 )
        {
          v16 = 2;
          if ( v3 == 77 )
            v16 = (unsigned __int8)byte_40E748;
        }
      }
      LOBYTE(v6) = Sysutils::FloatToText(v16, v15, v14);
      return v6;
    case 4:
      if ( v3 != 83 )
        goto LABEL_3;
      LOBYTE(v6) = *(_BYTE *)v6;
      return v6;
    case 5:
      if ( v3 != 80 )
        goto LABEL_3;
      *(_DWORD *)(a2 - 36) = 8;
      goto LABEL_54;
    case 6:
      if ( v3 != 83 )
        goto LABEL_3;
      v11 = *(_BYTE **)a3;
      LOBYTE(v6) = 0;
      v12 = *(_DWORD *)(a2 - 36);
      if ( v12 != 0 )
      {
        do
        {
          if ( v12 == 0 )
            break;
          v13 = *v11++ == 0;
          --v12;
        }
        while ( !v13 );
      }
      return v6;
    case 0xA:
      v10 = unknown_libname_54;
      goto LABEL_27;
    case 0xB:
      if ( v3 == 83 )
        return v6;
      goto LABEL_3;
    case 0xD:
      if ( v3 != 83 )
        goto LABEL_3;
      if ( *(_WORD *)v6 > 1u )
        LOBYTE(v6) = sub_4060D0();
      return v6;
    case 0xF:
      v10 = System::__linkproc__ LStrFromWStr;
LABEL_27:
      a3 = (int)v10 + *(_DWORD *)(a2 - 4);
      if ( v3 != 83 )
        goto LABEL_3;
      ((void (__fastcall *)(int, int))a3)(a2 - 20, v6);
      return *(_DWORD *)(a2 - 20);
    case 0x10:
      goto LABEL_5;
  }
}

// Address: 0x4062DD
char __usercall sub_4062DD@<al>(int a1@<ebp>)
{
  int v1; // ecx
  int v2; // esi
  unsigned __int8 v3; // dl
  int *v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  bool v10; // cc
  unsigned int v11; // edx
  unsigned __int64 v13; // [esp-4h] [ebp-8h]
  unsigned __int64 v14; // [esp-4h] [ebp-8h]

  v1 = 10;
  v2 = a1 - 81;
  do
  {
    LODWORD(v13) = v1;
    v3 = System::__linkproc__ _llumod(v13, (unsigned int)v1) + 48;
    if ( v3 >= 0x3Au )
      v3 += 7;
    *(_BYTE *)--v2 = v3;
    v4 = *(int **)(a1 - 4);
    v5 = System::__linkproc__ _lludiv(v14, (unsigned int)v14);
    v1 = v13;
    *v4 = v5;
    v4[1] = v6;
    v7 = v6 | v5;
  }
  while ( v7 != 0 );
  v8 = a1 - 81 - v2;
  v9 = *(_DWORD *)(a1 - 36);
  if ( v9 <= 0x10 )
  {
    v10 = v9 <= v8;
    v11 = v9 - v8;
    if ( !v10 )
    {
      LOBYTE(v7) = 48;
      do
      {
        *(_BYTE *)--v2 = 48;
        --v11;
      }
      while ( v11 != 0 );
    }
  }
  return v7;
}

// Address: 0x40636E
char __usercall sub_40636E@<al>(unsigned int a1@<eax>, int a2@<ebp>)
{
  int v2; // esi
  unsigned int v3; // et2
  char v4; // dl
  unsigned int v5; // ecx
  unsigned int v6; // edx
  bool v7; // cc
  unsigned int v8; // edx

  v2 = a2 - 97;
  do
  {
    v3 = a1 % 0xA;
    a1 /= 0xAu;
    v4 = v3 + 48;
    if ( (unsigned __int8)(v3 + 48) >= 0x3Au )
      v4 += 7;
    *(_BYTE *)--v2 = v4;
  }
  while ( a1 != 0 );
  v5 = a2 - 97 - v2;
  v6 = *(_DWORD *)(a2 - 36);
  if ( v6 <= 0x10 )
  {
    v7 = v6 <= v5;
    v8 = v6 - v5;
    if ( !v7 )
    {
      LOBYTE(a1) = 48;
      do
      {
        *(_BYTE *)--v2 = 48;
        --v8;
      }
      while ( v8 != 0 );
    }
  }
  return a1;
}

// Address: 0x4064E4
void __usercall __spoils<edx,ecx> sub_4064E4(int a1@<ebp>)
{
  System::__linkproc__ LStrClr((_DWORD *)(a1 - 20));
}

// Address: 0x406504
char *__fastcall Sysutils::StrLFmt(char *a1, unsigned int a2, char *a3, int a4, int a5)
{
  unsigned int v8; // eax

  if ( a1 == nullptr || a3 == nullptr )
    return nullptr;
  v8 = Sysutils::StrLen(a3);
  a1[Sysutils::FormatBuf(a1, a2, a3, v8, a4, a5)] = 0;
  return a1;
}

// Address: 0x406544
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_75(int a1, int a2, int a3, int a4)
{
  return Sysutils::FmtStr(a4, a1, a2, a3);
}

// Address: 0x406558
_DWORD *__fastcall Sysutils::FmtStr(int **a1, _BYTE *a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD v10[1024]; // [esp+0h] [ebp-1008h] BYREF
  int v11; // [esp+1000h] [ebp-8h]
  _BYTE *v12; // [esp+1004h] [ebp-4h]

  v10[2] = a1;
  v11 = a3;
  v12 = a2;
  v5 = 4096;
  if ( unknown_libname_56((int)a2) >= 3072 )
  {
    v7 = unknown_libname_56((int)v12);
    v5 = v7;
  }
  else
  {
    v6 = unknown_libname_56((int)v12);
    v7 = Sysutils::FormatBuf((char *)v10, 0xFFFu, v12, v6, v11, a4);
  }
  if ( v7 < v5 - 1 )
    return System::__linkproc__ LStrFromPCharLen(a1, (char *)v10, v7);
  while ( v7 >= v5 - 1 )
  {
    v5 *= 2;
    System::__linkproc__ LStrClr(a1);
    System::__linkproc__ LStrSetLength((char **)a1, v5);
    v8 = unknown_libname_56((int)v12);
    v7 = Sysutils::FormatBuf((char *)*a1, v5 - 1, v12, v8, v11, a4);
  }
  return System::__linkproc__ LStrSetLength((char **)a1, v7);
}

// Address: 0x406618
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __usercall unknown_libname_76@<eax>(__int16 a1@<ax>, int a2@<edx>, int a3@<ecx>, char a4@<bl>, _BYTE *a5@<edi>)
{
  char *v5; // edi
  char v6; // al
  unsigned int v7; // eax
  _DWORD *v8; // ebx
  unsigned int v9; // et2
  _DWORD v11[2]; // [esp-4h] [ebp-8h] BYREF

  *a5 = a1;
  v5 = a5 + 1;
  if ( a4 != 0 )
  {
    if ( a2 < 0 )
    {
      v6 = 45;
      a2 = -a2;
LABEL_7:
      *v5++ = v6;
      goto LABEL_8;
    }
  }
  else
  {
    a2 = 0;
  }
  if ( HIBYTE(a1) != 0 )
  {
    v6 = HIBYTE(a1);
    goto LABEL_7;
  }
LABEL_8:
  v7 = a2;
  v11[0] = a2;
  v8 = v11;
  do
  {
    do
    {
      v9 = v7 % dword_40D13C;
      v7 /= (unsigned int)dword_40D13C;
      *(_BYTE *)v8 = v9 + 48;
      v8 = (_DWORD *)((char *)v8 + 1);
      --a3;
    }
    while ( v7 != 0 );
  }
  while ( a3 > 0 );
  do
  {
    v8 = (_DWORD *)((char *)v8 - 1);
    *v5++ = *(_BYTE *)v8;
  }
  while ( v8 != v11 );
  return v11[0];
}

// Address: 0x40665C
int __fastcall Sysutils::FloatToText(char *a1, int a2, char a3, unsigned __int8 a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  _BYTE *v8; // edi
  int v9; // ecx
  int v10; // ebx
  int v12; // [esp-4h] [ebp-3Ch]
  unsigned __int16 v13; // [esp+Ch] [ebp-2Ch] BYREF
  int v14; // [esp+24h] [ebp-14h]
  char v15; // [esp+2Ah] [ebp-Eh]
  char v16; // [esp+2Bh] [ebp-Dh]
  int v17; // [esp+2Ch] [ebp-Ch]
  char v18; // [esp+32h] [ebp-6h]
  char v19; // [esp+33h] [ebp-5h]
  _BYTE *v20; // [esp+34h] [ebp-4h]
  int savedregs; // [esp+38h] [ebp+0h] BYREF
  int v22; // [esp+44h] [ebp+Ch]

  v20 = a1;
  v19 = byte_40E747;
  v18 = byte_40E746;
  v17 = dword_40E740;
  v16 = byte_40E744;
  v15 = byte_40E745;
  v14 = 0;
  v6 = 19;
  if ( a3 == 0 )
  {
    v6 = a5;
    if ( a5 < 2 )
      v6 = 2;
    if ( v6 > 18 )
      v6 = 18;
  }
  v22 = v6;
  v12 = v6;
  v7 = 9999;
  if ( a4 >= 2u )
    v7 = a6;
  Sysutils::FloatToDecimal((int)&v13, a2, a3, v12, v7);
  v8 = v20;
  if ( (unsigned int)v13 - 0x7FFF >= 2 )
  {
    v10 = a4;
    if ( a4 != 1 && (a4 > 4u || (__int16)v13 > v22) )
      LOBYTE(v10) = 0;
    ((int (*)())(*(char **)((char *)&off_406738 + 4 * v10 + v14) + v14))();
  }
  else
  {
    sub_40675B((int)&savedregs, v20);
    qmemcpy(v8, (char *)sub_40674C + 3 * v9 + v14, 3u);
    v8 += 3;
  }
  return v8 - v20;
}

// Address: 0x40674C
int __fastcall sub_40674C(int a1, int a2, int a3)
{
  return sub_406752(a1, a2, a3);
}

// Address: 0x406752
char __usercall sub_406752@<al>(char *a1@<esi>)
{
  char result; // al

  result = *a1;
  if ( *a1 == 0 )
    return 48;
  return result;
}

// Address: 0x40675B
char __usercall sub_40675B@<al>(int a1@<ebp>, _BYTE *a2@<edi>)
{
  char result; // al

  if ( *(_BYTE *)(a1 - 42) != 0 )
  {
    *a2 = 45;
    return 45;
  }
  return result;
}

// Address: 0x406765
char __usercall sub_406765@<al>(int a1@<ebp>, char *a2@<edi>, char *a3@<esi>)
{
  signed int v3; // ecx
  int v4; // edx
  char result; // al
  _BYTE *v6; // edi
  char *v7; // edi
  unsigned int v8; // ecx
  char v9; // al
  __int16 v10; // ax

  sub_40675B(a1, a2);
  v3 = *(__int16 *)(a1 - 44);
  v4 = 0;
  if ( v3 > *(_DWORD *)(a1 + 12) || v3 < -3 )
  {
    v3 = 1;
    v4 = 1;
    do
    {
LABEL_7:
      v9 = *a3++;
      if ( v9 == 0 )
      {
        result = 48;
        memset(a2, 48, v3);
        a2 += v3;
        goto LABEL_14;
      }
      *a2++ = v9;
      --v3;
    }
    while ( v3 != 0 );
    result = *a3++;
    if ( result == 0 )
      goto LABEL_14;
    HIBYTE(v10) = result;
    LOBYTE(v10) = *(_BYTE *)(a1 - 5);
    *(_WORD *)a2 = v10;
    a2 += 2;
  }
  else
  {
    if ( v3 > 0 )
      goto LABEL_7;
    result = 48;
    *a2 = 48;
    v6 = a2 + 1;
    if ( *a3 == 0 )
      return result;
    *v6 = *(_BYTE *)(a1 - 5);
    v7 = v6 + 1;
    v8 = -v3;
    memset(v7, 48, v8);
    a2 = &v7[v8];
  }
  while ( 1 )
  {
    result = *a3++;
    if ( result == 0 )
      break;
    *a2++ = result;
  }
LABEL_14:
  if ( v4 != 0 )
    return unknown_libname_76(69, *(__int16 *)(a1 - 44) - 1, 0, *(_BYTE *)(a1 - 41), a2);
  return result;
}

// Address: 0x4067FA
char __usercall sub_4067FA@<al>(int a1@<ebp>, char *a2@<edi>, char *a3@<esi>)
{
  unsigned int v3; // edx
  int v4; // ecx
  char result; // al
  int v6; // ebx
  int v7; // ecx
  char v8; // al
  char v9; // al
  int v10; // edx

  sub_40675B(a1, a2);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 >= 0x12 )
    v3 = 18;
  v4 = *(__int16 *)(a1 - 44);
  if ( v4 > 0 )
  {
    v6 = 0;
    if ( *(_BYTE *)(a1 + 16) != 2 )
    {
      LOBYTE(v6) = (unsigned __int16)(v4 - 1) % 3u;
      ++v6;
    }
    while ( 1 )
    {
      result = sub_406752(a3);
      *a2++ = result;
      v4 = v7 - 1;
      if ( v4 == 0 )
        break;
      if ( --v6 == 0 )
      {
        v8 = *(_BYTE *)(a1 - 6);
        if ( v8 != 0 )
        {
          *a2++ = v8;
          LOBYTE(v6) = 3;
        }
      }
    }
  }
  else
  {
    result = 48;
    *a2++ = 48;
  }
  if ( v3 != 0 )
  {
    v9 = *(_BYTE *)(a1 - 5);
    if ( v9 != 0 )
      *a2++ = v9;
    if ( v4 != 0 )
    {
      result = 48;
      while ( 1 )
      {
        *a2++ = 48;
        if ( --v3 == 0 )
          break;
        if ( ++v4 == 0 )
          goto LABEL_18;
      }
    }
    else
    {
      do
      {
LABEL_18:
        result = sub_406752(a3);
        *a2++ = result;
      }
      while ( v10 != 1 );
    }
  }
  return result;
}

// Address: 0x406864
char __usercall sub_406864@<al>(int a1@<ebp>, _BYTE *a2@<edi>)
{
  int v2; // ebx
  __int16 v3; // cx
  char *v4; // ebx
  int v5; // ecx
  char result; // al
  int v7; // [esp-4h] [ebp-4h]

  v2 = *(unsigned __int8 *)(a1 - 13);
  v3 = 3;
  if ( *(_BYTE *)(a1 - 42) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 - 14);
    v3 = 1039;
  }
  if ( (unsigned __int8)v2 > (unsigned __int8)v3 )
    LOBYTE(v2) = v3;
  LOBYTE(v2) = HIBYTE(v3) + v2;
  v4 = (char *)sub_4068C7 + 5 * v2 + *(_DWORD *)(a1 - 20);
  v5 = 5;
  do
  {
    result = *v4;
    if ( *v4 == 64 )
      break;
    v7 = v5;
    if ( result == 36 )
    {
      result = sub_4068B8();
    }
    else if ( result == 42 )
    {
      result = ((int (*)(void))loc_4067FF)();
    }
    else
    {
      *a2++ = result;
    }
    ++v4;
    v5 = v7 - 1;
  }
  while ( v7 != 1 );
  return result;
}

// Address: 0x4068B8
void __usercall sub_4068B8(int a1@<ebp>, void *a2@<edi>)
{
  const void *v2; // esi

  v2 = *(const void **)(a1 - 12);
  if ( v2 != nullptr )
    qmemcpy(a2, v2, *((_DWORD *)v2 - 1));
}

// Address: 0x4068C7
void __usercall sub_4068C7(int a1@<eax>, _BYTE *a2@<edx>, _BYTE *a3@<ecx>, int a4@<ebp>)
{
  int v4; // eax

  LOBYTE(a1) = a1 & 0x2A;
  v4 = a1 + 3;
  BYTE1(v4) -= *(_BYTE *)(3 * v4);
  v4 += 2;
  LOBYTE(v4) = v4 & 0x20;
  LOBYTE(v4) = v4 - *(_BYTE *)(v4 + 64);
  BYTE1(v4) -= *(_BYTE *)v4;
  LOBYTE(v4) = v4 & 0x40;
  ++v4;
  a2[a4] -= BYTE1(v4);
  *(_DWORD *)(v4 + 45) -= v4;
  LOBYTE(v4) = v4 & 0x2A;
  v4 += 2;
  LOBYTE(v4) = v4 & 0x2D;
  LOBYTE(v4) = (v4 - *(_BYTE *)(v4 + 64)) & 0x2A;
  v4 -= 707280960;
  LOBYTE(v4) = v4 & 0x29;
  v4 -= 1077945385;
  LOBYTE(v4) = v4 & 0x2D;
  v4 += 2142355380;
  BYTE1(v4) -= *(_BYTE *)v4;
  LOBYTE(v4) = v4 & 0x2D;
  ++v4;
  LOBYTE(v4) = v4 & 0x20;
  BYTE1(a3) = BYTE1(a3) - MEMORY[0x2A404024] - MEMORY[0x2D202440];
  LOBYTE(v4) = v4 - *(_BYTE *)(v4 + 42);
  BYTE1(a3) -= *a3;
  *a2 -= BYTE1(a3);
  a3[a4] &= (unsigned __int16)(v4 - 9248) >> 8;
  JUMPOUT(0x40692B);
}

// Address: 0x406934
int __fastcall Sysutils::FloatToDecimal(int a1, int a2, char a3, int a4, int a5)
{
  if ( a3 != 0 )
    return sub_406A83();
  else
    return sub_406961();
}

// Address: 0x406961
int __usercall sub_406961@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<esi>)
{
  __int16 v3; // dx
  int result; // eax
  long double v5; // st7
  long double v6; // st7
  int v7; // edi
  __int16 v8; // fps
  long double v9; // st6
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  _WORD *v13; // edi
  int i; // edx
  __int16 v15; // ax
  int v16; // edi

  v3 = *(_WORD *)(a3 + 8);
  result = v3 & 0x7FFF;
  if ( (v3 & 0x7FFF) == 0 )
    goto LABEL_7;
  if ( result == 0x7FFF )
  {
    if ( *(__int16 *)(a3 + 6) < 0 && (*(_DWORD *)a3 != 0 || *(_DWORD *)(a3 + 4) != 0x80000000) )
    {
      result = 0x8000;
LABEL_7:
      v3 = 0;
    }
    *(_BYTE *)(a1 + 3) = 0;
    goto LABEL_28;
  }
  v5 = *(double *)a3;
  *(_DWORD *)(a2 - 8) = ((19728 * (result - 0x3FFF)) >> 16) + 1;
  System::__linkproc__ Pow10();
  v6 = rint(fabs(v5));
  v7 = *(_DWORD *)(a2 - 4);
  v9 = *(double *)((char *)&tbyte_40D130 + v7);
  v10 = v9 < v6;
  v11 = 0;
  v12 = v9 == v6;
  *(_WORD *)(a2 - 10) = v8;
  if ( (*(_WORD *)(a2 - 10) & 0x4100) != 0 )
  {
    v6 = v6 / (double)*(int *)((char *)&dword_40D13C + v7);
    ++*(_DWORD *)(a2 - 8);
  }
  __FBSTP__((_TBYTE *)(a2 - 24), v6);
  v13 = (_WORD *)(a1 + 3);
  for ( i = 9; i != 0; --i )
  {
    HIBYTE(v15) = *(_BYTE *)(i + a2 - 25);
    LOBYTE(v15) = HIBYTE(v15) >> 4;
    HIBYTE(v15) &= 0xFu;
    *v13++ = v15 + 12336;
  }
  *(_BYTE *)v13 = 0;
  v16 = *(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 - 8);
  if ( v16 < 0 )
  {
    result = 0;
    goto LABEL_7;
  }
  if ( (unsigned int)v16 >= *(_DWORD *)(a2 + 12) )
    v16 = *(_DWORD *)(a2 + 12);
  if ( (unsigned int)v16 >= 0x12 )
  {
    v16 = 18;
LABEL_24:
    while ( 1 )
    {
      *(_BYTE *)(a1 + v16-- + 3) = 0;
      if ( v16 < 0 )
        break;
      if ( *(_BYTE *)(a1 + v16 + 3) != 48 )
        goto LABEL_26;
    }
    v3 = 0;
  }
  else
  {
    if ( *(_BYTE *)(a1 + v16 + 3) < 0x35u )
      goto LABEL_24;
    while ( 1 )
    {
      *(_BYTE *)(a1 + v16-- + 3) = 0;
      if ( v16 < 0 )
        break;
      if ( ++*(_BYTE *)(a1 + v16 + 3) <= 0x39u )
        goto LABEL_26;
    }
    *(_WORD *)(a1 + 3) = 49;
    ++*(_DWORD *)(a2 - 8);
LABEL_26:
    v3 = *(_WORD *)(a3 + 8);
  }
  result = *(_DWORD *)(a2 - 8);
LABEL_28:
  *(_WORD *)a1 = result;
  *(_BYTE *)(a1 + 2) = v3 < 0;
  return result;
}

// Address: 0x406A83
_BYTE *__usercall sub_406A83@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<esi>)
{
  unsigned __int64 v3; // rax
  int v4; // ecx
  int v5; // edi
  bool v6; // cf
  long double v7; // st7
  int v8; // edx
  _BYTE *v9; // edi
  int v10; // ecx
  unsigned __int8 v11; // ah
  char v12; // al
  char v13; // al
  _BYTE *result; // eax
  int v15; // edx

  v3 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 != 0 )
  {
    if ( (v3 & 0x8000000000000000LL) != 0LL )
      v3 = -(__int64)v3;
    v4 = 0;
    v5 = *(_DWORD *)(a2 + 8);
    if ( v5 < 0 )
      v5 = 0;
    if ( v5 >= 4 )
    {
      v5 = 4;
      do
      {
        ++v4;
        v6 = v3 < 0xDE0B6B3A7640000LL;
        v3 -= 1000000000000000000LL;
      }
      while ( !v6 );
      --v4;
      v3 += 1000000000000000000LL;
    }
    *(_QWORD *)(a2 - 32) = v3;
    v7 = (double)*(__int64 *)(a2 - 32);
    v8 = v5;
    if ( v5 != 4 )
      v7 = v7 / (double)*(int *)((char *)&loc_406A6F + 4 * (4 - v5) + *(_DWORD *)(a2 - 4));
    __FBSTP__((_TBYTE *)(a2 - 24), v7);
    v9 = (_BYTE *)(a1 + 3);
    if ( v4 != 0 )
    {
      *v9 = v4 + 48;
      v9 = (_BYTE *)(a1 + 4);
      v10 = 9;
      goto LABEL_19;
    }
    v10 = 9;
    while ( 1 )
    {
      v11 = *(_BYTE *)(v10 + a2 - 25);
      v12 = v11 >> 4;
      if ( v11 >> 4 != 0 )
        goto LABEL_20;
      v13 = v11 & 0xF;
      if ( (v11 & 0xF) != 0 )
        break;
      if ( --v10 == 0 )
        goto LABEL_25;
    }
    while ( 1 )
    {
      *v9++ = v13 + 48;
      if ( --v10 == 0 )
        break;
LABEL_19:
      v11 = *(_BYTE *)(v10 + a2 - 25);
      v12 = v11 >> 4;
LABEL_20:
      *v9++ = v12 + 48;
      v13 = v11 & 0xF;
    }
    result = &v9[-a1 - 3 - v8];
    do
      *v9-- = 0;
    while ( *v9 == 48 );
    v15 = *(_DWORD *)(a3 + 4) >> 31;
  }
  else
  {
LABEL_25:
    result = nullptr;
    LOBYTE(v15) = 0;
    *(_BYTE *)(a1 + 3) = 0;
  }
  *(_WORD *)a1 = (_WORD)result;
  *(_BYTE *)(a1 + 2) = v15;
  return result;
}

// Address: 0x406B60
char __fastcall Sysutils::TryEncodeTime(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        double *a5)
{
  char v6; // [esp+Bh] [ebp-1h]

  v6 = 0;
  if ( a1 < 0x18u && a2 < 0x3Cu && a3 < 0x3Cu && a4 < 0x3E8u )
  {
    *a5 = (double)(a4 + 1000 * a3 + 60000 * a2 + 3600000 * a1) / 86400000.0;
    return 1;
  }
  return v6;
}

// Address: 0x406BD0
double __fastcall Sysutils::EncodeTime(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4)
{
  double v5; // [esp+Ch] [ebp-8h] BYREF

  if ( Sysutils::TryEncodeTime(a1, a2, a3, a4, &v5) == 0 )
    sub_405C5C(off_40D38C[0]);
  return v5;
}

// Address: 0x406C10
bool __fastcall Sysutils::IsLeapYear(unsigned __int16 a1)
{
  return (a1 & 3) == 0 && (a1 % 0x64u != 0 || a1 % 0x190u == 0);
}

// Address: 0x406C4C
char __fastcall Sysutils::TryEncodeDate(unsigned __int16 a1, unsigned __int16 a2, unsigned __int16 a3, double *a4)
{
  char *v6; // esi
  int v7; // eax
  int v8; // ecx
  char v10; // [esp+11h] [ebp-3h]

  v10 = 0;
  v6 = (char *)&unk_40D0C8 + 24 * (Sysutils::IsLeapYear(a1) & 0x7F);
  if ( a1 != 0 && a1 <= 0x270Fu && a2 != 0 && a2 <= 0xCu && a3 != 0 && a3 <= *(_WORD *)&v6[2 * a2 - 2] )
  {
    v7 = a2 - 1;
    if ( a2 > 1u )
    {
      v8 = 1;
      do
      {
        a3 += *(_WORD *)&v6[2 * v8++ - 2];
        --v7;
      }
      while ( v7 != 0 );
    }
    *a4 = (double)(a3 + (a1 - 1) / 400 + ((a1 - 1) >> 2) + 365 * (a1 - 1) - (a1 - 1) / 100 - 693594);
    return 1;
  }
  return v10;
}

// Address: 0x406D14
double __fastcall Sysutils::EncodeDate(unsigned __int16 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  double v4[2]; // [esp+0h] [ebp-14h] BYREF

  if ( Sysutils::TryEncodeDate(a1, a2, a3, v4) == 0 )
    sub_405C5C(off_40D3D4[0]);
  return v4[0];
}

// Address: 0x406D44
double __cdecl Sysutils::Now()
{
  struct _SYSTEMTIME SystemTime; // [esp+8h] [ebp-18h] BYREF
  double v2; // [esp+18h] [ebp-8h]

  GetLocalTime(&SystemTime);
  v2 = Sysutils::EncodeDate(SystemTime.wYear, SystemTime.wMonth, SystemTime.wDay);
  return Sysutils::EncodeTime(SystemTime.wHour, SystemTime.wMinute, SystemTime.wSecond, SystemTime.wMilliseconds) + v2;
}

// Address: 0x406D94
_DWORD *__fastcall Sysutils::SysErrorMessage(DWORD dwMessageId, int **a2)
{
  signed int i; // eax
  CHAR v4; // dl
  bool v5; // cf
  char v6; // dl
  CHAR Buffer[260]; // [esp+2h] [ebp-104h] BYREF

  for ( i = FormatMessageA(0x3000u, nullptr, dwMessageId, 0, Buffer, 0x100u, nullptr); i > 0; --i )
  {
    v4 = Buffer[i - 1];
    v5 = (unsigned __int8)v4 < 0x21u;
    v6 = v4 - 33;
    if ( !v5 && v6 != 13 )
      break;
  }
  return System::__linkproc__ LStrFromPCharLen(a2, Buffer, i);
}

// Address: 0x406DE0
volatile __int32 *__fastcall Sysutils::GetLocaleStr(
        LCID Locale,
        LCTYPE LCType,
        __int32 System::AnsiString,
        volatile __int32 *a4)
{
  int LocaleInfoA_0; // eax
  CHAR LCData[256]; // [esp+8h] [ebp-100h] BYREF

  LocaleInfoA_0 = GetLocaleInfoA_0(Locale, LCType, LCData, 256);
  if ( LocaleInfoA_0 <= 0 )
    return System::__linkproc__ LStrAsg(a4, System::AnsiString);
  else
    return System::__linkproc__ LStrFromPCharLen((int **)a4, LCData, LocaleInfoA_0 - 1);
}

// Address: 0x406E2C
CHAR __fastcall Sysutils::GetLocaleChar(LCID Locale, LCTYPE LCType, int a3)
{
  char v3; // bl
  CHAR LCData[16]; // [esp+0h] [ebp-10h] BYREF

  *(_DWORD *)LCData = a3;
  v3 = a3;
  if ( GetLocaleInfoA_0(Locale, LCType, LCData, 2) <= 0 )
    return v3;
  else
    return LCData[0];
}

// Address: 0x406E54
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int **__userpurge unknown_libname_77@<eax>(
        LCTYPE LCType@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        volatile __int32 *a4,
        int a5,
        int a6)
{
  int **result; // eax

  result = (int **)Sysutils::GetLocaleStr(*(_DWORD *)(a6 - 4), LCType, 0, a4);
  if ( *a4 == 0 )
    return System::LoadResString(*(int ***)(a3 + 4 * a2), (int **)a4);
  return result;
}

// Address: 0x406E90
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __usercall unknown_libname_78@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  int v3; // ebx
  volatile __int32 *v4; // esi
  volatile __int32 *v5; // edi
  int v6; // ebx
  volatile __int32 *v7; // esi
  volatile __int32 *v8; // edi
  unsigned int v10[2]; // [esp-18h] [ebp-30h] BYREF
  int *v11; // [esp-10h] [ebp-28h]
  int v12; // [esp-Ch] [ebp-24h]
  int v13; // [esp-8h] [ebp-20h]
  int v14; // [esp-4h] [ebp-1Ch]
  int v15; // [esp+0h] [ebp-18h] BYREF
  int v16; // [esp+4h] [ebp-14h] BYREF
  int v17; // [esp+8h] [ebp-10h] BYREF
  int v18; // [esp+Ch] [ebp-Ch] BYREF
  int v19; // [esp+10h] [ebp-8h]
  LCID ThreadLocale_0; // [esp+14h] [ebp-4h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = a1;
  v13 = a3;
  v12 = a2;
  v11 = &savedregs;
  v10[1] = (unsigned int)&loc_406FA3;
  v10[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v10);
  ThreadLocale_0 = GetThreadLocale_0();
  v3 = 1;
  v4 = (volatile __int32 *)&unk_40E768;
  v5 = (volatile __int32 *)&unk_40E798;
  do
  {
    unknown_libname_77(v3 + 67, v3 - 1, (int)off_40D140, &v18, 11, (int)&savedregs);
    System::__linkproc__ LStrAsg(v4, v18);
    unknown_libname_77(v3 + 55, v3 - 1, (int)off_40D170, &v17, 11, (int)&savedregs);
    System::__linkproc__ LStrAsg(v5, v17);
    ++v3;
    ++v5;
    ++v4;
  }
  while ( v3 != 13 );
  v6 = 1;
  v7 = (volatile __int32 *)&unk_40E7C8;
  v8 = (volatile __int32 *)&unk_40E7E4;
  do
  {
    v19 = (v6 + 5) % 7;
    unknown_libname_77(v19 + 49, v6 - 1, (int)off_40D1A0, &v16, 6, (int)&savedregs);
    System::__linkproc__ LStrAsg(v7, v16);
    unknown_libname_77(v19 + 42, v6 - 1, (int)off_40D1BC, &v15, 6, (int)&savedregs);
    System::__linkproc__ LStrAsg(v8, v15);
    ++v6;
    ++v8;
    ++v7;
  }
  while ( v6 != 8 );
  __writefsdword(0, v10[0]);
  v11 = (int *)&loc_406FAA;
  return System::__linkproc__ LStrArrayClr((int)&v15, 4);
}

// Address: 0x406FB4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
BOOL __stdcall CalInfoEnumProc(LPSTR a1)
{
  int v1; // esi
  int i; // ebx

  v1 = 0;
  for ( i = 1; dword_40E80C[i] != 0; ++i )
  {
    if ( i == 7 )
      return v1;
  }
  unknown_libname_53((int **)&dword_40E80C[i], a1);
  return true;
}

// Address: 0x406FF0
// BDS 2005-2007 and Delphi6-7 Visual Component Library
BOOL __stdcall unknown_libname_80(LPSTR a1)
{
  int v1; // esi
  int i; // ebx
  char *v3; // ecx
  unsigned int v5[2]; // [esp-14h] [ebp-18h] BYREF
  int *v6; // [esp-Ch] [ebp-10h]
  int v7; // [esp+0h] [ebp-4h] BYREF
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  v7 = 0;
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_407055;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  v1 = 0;
  for ( i = 1; dword_40E828[i] != -1; ++i )
  {
    if ( i == 7 )
      goto LABEL_6;
  }
  unknown_libname_53((int **)&v7, a1);
  dword_40E828[i] = Sysutils::StrToIntDef(v7, 0, v3);
  v1 = 1;
LABEL_6:
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_40705C;
  System::__linkproc__ LStrClr(&v7);
  return v1;
}

// Address: 0x407068
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *unknown_libname_81()
{
  LCID ThreadLocale_0; // eax
  char *v1; // ecx
  CALID v2; // esi
  LCID v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  LCID v6; // eax
  unsigned int v8[2]; // [esp-10h] [ebp-14h] BYREF
  int *v9; // [esp-8h] [ebp-Ch]
  int v10; // [esp+0h] [ebp-4h] BYREF
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  v10 = 0;
  v9 = &savedregs;
  v8[1] = (unsigned int)&loc_4070FF;
  v8[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v8);
  ThreadLocale_0 = GetThreadLocale_0();
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x100Bu, (__int32)&str_1[1], &v10);
  v2 = Sysutils::StrToIntDef(v10, 1, v1);
  if ( v2 - 3 < 3 )
  {
    v3 = GetThreadLocale_0();
    EnumCalendarInfoA(CalInfoEnumProc, v3, v2, 4u);
    v4 = 7;
    v5 = &unk_40E82C;
    do
    {
      *v5++ = -1;
      --v4;
    }
    while ( v4 != 0 );
    v6 = GetThreadLocale_0();
    EnumCalendarInfoA(unknown_libname_80, v6, v2, 3u);
  }
  __writefsdword(0, v8[0]);
  v9 = (int *)&loc_407106;
  return System::__linkproc__ LStrClr(&v10);
}

// Address: 0x407118
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __usercall unknown_libname_82@<eax>(
        int a1@<eax>,
        volatile __int32 *a2@<edx>,
        int a3@<ebx>,
        int a4@<edi>,
        int a5@<esi>)
{
  int v7; // ebx
  LCID ThreadLocale_0; // eax
  char *v9; // ecx
  unsigned int v12[2]; // [esp-18h] [ebp-2Ch] BYREF
  int *v13; // [esp-10h] [ebp-24h]
  int v14; // [esp-Ch] [ebp-20h]
  int v15; // [esp-8h] [ebp-1Ch]
  int v16; // [esp-4h] [ebp-18h]
  void *v17; // [esp+0h] [ebp-14h] BYREF
  void *v18; // [esp+4h] [ebp-10h] BYREF
  void *v19; // [esp+8h] [ebp-Ch] BYREF
  int v20; // [esp+Ch] [ebp-8h] BYREF
  int v21; // [esp+10h] [ebp-4h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v19 = nullptr;
  v18 = nullptr;
  v17 = nullptr;
  v16 = a3;
  v15 = a5;
  v14 = a4;
  v13 = &savedregs;
  v12[1] = (unsigned int)&loc_4072E2;
  v12[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v12);
  v7 = 1;
  System::__linkproc__ LStrClr(a2);
  ThreadLocale_0 = GetThreadLocale_0();
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x1009u, (__int32)&str_1_0[1], &v20);
  if ( (unsigned int)(Sysutils::StrToIntDef(v20, 1, v9) - 3) < 3 )
  {
    while ( v7 <= unknown_libname_56(a1) )
    {
      if ( _bittest(dword_40D0F8, *(unsigned __int8 *)(a1 + v7 - 1)) )
      {
        v21 = sub_407E64(a1, v7);
        System::__linkproc__ LStrCopy(a1, v7, v21, (int **)&v18);
        System::__linkproc__ LStrCat(a2, (char *)v18);
        v7 += v21;
      }
      else
      {
        if ( Sysutils::StrLIComp((const char *)(a1 + v7 - 1), dword_4072FC, 2u) != 0 )
        {
          if ( Sysutils::StrLIComp((const char *)(a1 + v7 - 1), "yyyy", 4u) != 0 )
          {
            if ( Sysutils::StrLIComp((const char *)(a1 + v7 - 1), "yy", 2u) != 0 )
            {
              if ( *(_BYTE *)(a1 + v7 - 1) == 89 || *(_BYTE *)(a1 + v7 - 1) == 121 )
              {
                System::__linkproc__ LStrCat(a2, (char *)&str_e[1]);
              }
              else
              {
                unknown_libname_52((int **)&v17);
                System::__linkproc__ LStrCat(a2, (char *)v17);
              }
            }
            else
            {
              System::__linkproc__ LStrCat(a2, (char *)&str_ee[1]);
              ++v7;
            }
          }
          else
          {
            System::__linkproc__ LStrCat(a2, (char *)&str_eeee[1]);
            v7 += 3;
          }
        }
        else
        {
          System::__linkproc__ LStrCat(a2, (char *)&dword_407308);
          ++v7;
        }
        ++v7;
      }
    }
  }
  else if ( dword_40E804 == 4 || (unsigned int)(dword_40E804 - 17) < 2 )
  {
    while ( v7 <= unknown_libname_56(a1) )
    {
      if ( *(_BYTE *)(a1 + v7 - 1) != 71 && *(_BYTE *)(a1 + v7 - 1) != 103 )
      {
        unknown_libname_52((int **)&v19);
        System::__linkproc__ LStrCat(a2, (char *)v19);
      }
      ++v7;
    }
  }
  else
  {
    System::__linkproc__ LStrAsg(a2, a1);
  }
  __writefsdword(0, v12[0]);
  v13 = (int *)&loc_4072E9;
  return System::__linkproc__ LStrArrayClr((int)&v17, 4);
}

// Address: 0x407340
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_83(int result)
{
  if ( result != 0 )
    result -= 4096;
  return result;
}

// Address: 0x40734C
unsigned int __fastcall Sysutils::ExceptionErrorMessage(char **a1, LPCVOID lpAddress, char *a3, unsigned int a4)
{
  int v6; // eax
  char *v7; // ebx
  int *v8; // edi
  unsigned int v9; // eax
  HINSTANCE ResourceHInstance; // eax
  int *v12; // [esp-Ch] [ebp-470h]
  _BYTE v13[256]; // [esp+Ch] [ebp-458h] BYREF
  int v14; // [esp+10Ch] [ebp-358h] BYREF
  char v15; // [esp+110h] [ebp-354h]
  char *v16; // [esp+114h] [ebp-350h]
  char v17; // [esp+118h] [ebp-34Ch]
  int v18; // [esp+11Ch] [ebp-348h]
  char v19; // [esp+120h] [ebp-344h]
  char *v20; // [esp+124h] [ebp-340h]
  char v21; // [esp+128h] [ebp-33Ch]
  int *v22; // [esp+12Ch] [ebp-338h]
  char v23; // [esp+130h] [ebp-334h]
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+134h] [ebp-330h] BYREF
  CHAR v25[256]; // [esp+152h] [ebp-312h] BYREF
  CHAR Filename[261]; // [esp+252h] [ebp-212h] BYREF
  char v27[261]; // [esp+357h] [ebp-10Dh] BYREF
  int v28; // [esp+45Ch] [ebp-8h]
  char *v29; // [esp+460h] [ebp-4h]

  v29 = a3;
  VirtualQuery(lpAddress, &Buffer, 0x1Cu);
  if ( Buffer.State == 4096 && GetModuleFileNameA_0((HMODULE)Buffer.AllocationBase, Filename, 0x105u) != 0 )
  {
    v28 = (_BYTE *)lpAddress - (char *)Buffer.AllocationBase;
  }
  else
  {
    GetModuleFileNameA_0(hModule, Filename, 0x105u);
    v28 = unknown_libname_83((int)lpAddress);
  }
  v6 = Sysutils::AnsiStrRScan(Filename, 92);
  Sysutils::StrLCopy(v27, (const char *)(v6 + 1), 0x104u);
  v7 = (char *)&dword_4074CC;
  v8 = &dword_4074CC;
  if ( System::__linkproc__ IsClass(a1, (int)dword_4052B4) )
  {
    v7 = System::__linkproc__ LStrToPChar(a1[1]);
    v9 = Sysutils::StrLen(v7);
    if ( v9 != 0 && v7[v9 - 1] != 46 )
      v8 = &dword_4074D0;
  }
  v12 = off_40D42C[0][1];
  ResourceHInstance = (HINSTANCE)System::FindResourceHInstance((int)hModule);
  LoadStringA_0(ResourceHInstance, (UINT)v12, v25, 256);
  System::TObject::ClassName((int)*a1, v13);
  v14 = (int)v13;
  v15 = 4;
  v16 = v27;
  v17 = 6;
  v18 = v28;
  v19 = 5;
  v20 = v7;
  v21 = 6;
  v22 = v8;
  v23 = 6;
  Sysutils::StrLFmt(v29, a4, v25, (int)&v14, 4);
  return Sysutils::StrLen(v29);
}

// Address: 0x4074D4
int __fastcall sub_4074D4(char **a1, const void *a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // eax
  HANDLE StdHandle_0; // eax
  HANDLE v6; // eax
  HINSTANCE ResourceHInstance; // eax
  DWORD v9; // [esp-Ch] [ebp-450h]
  int *v10; // [esp-Ch] [ebp-450h]
  DWORD NumberOfBytesWritten; // [esp+0h] [ebp-444h] BYREF
  CHAR Caption[64]; // [esp+4h] [ebp-440h] BYREF
  char Buffer[1024]; // [esp+44h] [ebp-400h] BYREF

  Sysutils::ExceptionErrorMessage(a1, a2, Buffer, 0x400u);
  if ( *off_40D3E8 != 0 )
  {
    v4 = System::Flush(off_40D33C, v2, v3);
    System::__linkproc__ _IOTest(v4);
    v9 = Sysutils::StrLen(Buffer);
    StdHandle_0 = GetStdHandle_0(0xFFFFFFF5);
    WriteFile_0(StdHandle_0, Buffer, v9, &NumberOfBytesWritten, nullptr);
    v6 = GetStdHandle_0(0xFFFFFFF5);
    return WriteFile_0(v6, &str____0[1], 2u, &NumberOfBytesWritten, nullptr);
  }
  else
  {
    v10 = off_40D320[0][1];
    ResourceHInstance = (HINSTANCE)System::FindResourceHInstance((int)hModule);
    LoadStringA_0(ResourceHInstance, (UINT)v10, Caption, 64);
    return MessageBoxA_0(nullptr, Buffer, Caption, 0x2010u);
  }
}

// Address: 0x40758C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_84(int a1, char a2, __int32 a3)
{
  char v3; // bl
  _DWORD *v4; // edi
  char v6; // [esp-10h] [ebp-1Ch]

  if ( a2 != 0 )
    a1 = System::__linkproc__ ClassCreate(a1, a2, v6);
  v3 = a2;
  v4 = (_DWORD *)a1;
  System::__linkproc__ LStrAsg((volatile __int32 *)(a1 + 4), a3);
  if ( v3 != 0 )
    System::__linkproc__ AfterConstruction(v4);
  return v4;
}

// Address: 0x4075C8
int __fastcall Sysutils::Exception::Exception(int a1, char a2, int a3, int a4, int a5)
{
  char v5; // bl
  int v6; // edi
  unsigned int v8[2]; // [esp-28h] [ebp-2Ch] BYREF
  int *v9; // [esp-20h] [ebp-24h]
  char v10; // [esp-1Ch] [ebp-20h]
  __int32 v11; // [esp+0h] [ebp-4h] BYREF
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  v11 = 0;
  if ( a2 != 0 )
    a1 = System::__linkproc__ ClassCreate(a1, a2, v10);
  v5 = a2;
  v6 = a1;
  v9 = &savedregs;
  v8[1] = (unsigned int)&loc_407622;
  v8[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v8);
  unknown_libname_75(a3, a4, a5, (int)&v11);
  System::__linkproc__ LStrAsg((volatile __int32 *)(v6 + 4), v11);
  __writefsdword(0, v8[0]);
  v9 = (int *)&loc_407629;
  System::__linkproc__ LStrClr(&v11);
  if ( v5 != 0 )
    System::__linkproc__ AfterConstruction((_DWORD *)v6);
  return v6;
}

// Address: 0x407648
_DWORD *__fastcall Sysutils::Exception::Exception(int a1, char a2, int **a3)
{
  char v3; // bl
  _DWORD *v4; // edi
  char v6; // [esp-10h] [ebp-1Ch]

  if ( a2 != 0 )
    a1 = System::__linkproc__ ClassCreate(a1, a2, v6);
  v3 = a2;
  v4 = (_DWORD *)a1;
  System::LoadResString(a3, (int **)(a1 + 4));
  if ( v3 != 0 )
    System::__linkproc__ AfterConstruction(v4);
  return v4;
}

// Address: 0x407684
int __fastcall Sysutils::Exception::Exception(int a1, char a2, int **a3, int a4, int a5)
{
  char v5; // bl
  int v6; // edi
  unsigned int v8[2]; // [esp-28h] [ebp-30h] BYREF
  int *v9; // [esp-20h] [ebp-28h]
  char v10; // [esp-1Ch] [ebp-24h]
  int v11; // [esp+0h] [ebp-8h] BYREF
  __int32 v12; // [esp+4h] [ebp-4h] BYREF
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v12 = 0;
  v11 = 0;
  if ( a2 != 0 )
    a1 = System::__linkproc__ ClassCreate(a1, a2, v10);
  v5 = a2;
  v6 = a1;
  v9 = &savedregs;
  v8[1] = (unsigned int)&loc_4076F0;
  v8[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v8);
  System::LoadResString(a3, (int **)&v11);
  unknown_libname_75(v11, a4, a5, (int)&v12);
  System::__linkproc__ LStrAsg((volatile __int32 *)(v6 + 4), v12);
  __writefsdword(0, v8[0]);
  v9 = (int *)&loc_4076F7;
  System::__linkproc__ LStrArrayClr((int)&v11, 2);
  if ( v5 != 0 )
    System::__linkproc__ AfterConstruction((_DWORD *)v6);
  return v6;
}

// Address: 0x407718
System::TObject *__fastcall Sysutils::EHeapException::FreeInstance(System::TObject *this)
{
  if ( *((_BYTE *)this + 12) != 0 )
    return (System::TObject *)sub_402C54(this);
  return this;
}

// Address: 0x407744
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_86(int a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // esi
  _DWORD *result; // eax
  int v5; // [esp+0h] [ebp-10h] BYREF
  char v6; // [esp+4h] [ebp-Ch]

  v1 = 0;
  v2 = System::IOResult(a1);
  v3 = v2;
  while ( v1 <= 6 && v2 != dword_40D1D8[2 * v1] )
    ++v1;
  if ( v1 > 6 )
  {
    v5 = v2;
    v6 = 0;
    result = (_DWORD *)Sysutils::Exception::Exception((int)"\x0BEInOutError", 1, (int **)off_40D31C, (int)&v5, 0);
  }
  else
  {
    result = unknown_libname_84((int)"\x0BEInOutError", 1, dword_40D1DC[2 * v1]);
  }
  result[3] = v3;
  return result;
}

// Address: 0x4077C4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_88(unsigned __int8 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  System::TObject *v7; // edx

  if ( a1 == 1 )
  {
    v7 = (System::TObject *)dword_40E854;
  }
  else if ( a1 == 2 )
  {
    v7 = dword_40E858;
  }
  else if ( (unsigned __int8)(a1 - 3) < 0x16u )
  {
    v7 = (System::TObject *)unknown_libname_84(dword_40D1F8[2 * a1], 1, dword_40D1F8[2 * a1 + 1]);
  }
  else
  {
    v7 = (System::TObject *)unknown_libname_86(a1);
  }
  return System::__linkproc__ RaiseExcept((int)v7, (int)v7, a3, a4, a5, a6, a7);
}

// Address: 0x407818
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_89(__int32 a1, int a2, int a3)
{
  int v5; // ebx
  unsigned int v7[2]; // [esp-Ch] [ebp-38h] BYREF
  int *v8; // [esp-4h] [ebp-30h]
  int v9; // [esp+Ch] [ebp-20h] BYREF
  int v10; // [esp+10h] [ebp-1Ch] BYREF
  char v11; // [esp+14h] [ebp-18h]
  int v12; // [esp+18h] [ebp-14h]
  char v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+20h] [ebp-Ch]
  char v15; // [esp+24h] [ebp-8h]
  int v16; // [esp+28h] [ebp-4h] BYREF
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF

  v9 = 0;
  v16 = 0;
  v8 = &savedregs;
  v7[1] = (unsigned int)&loc_4078B4;
  v7[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v7);
  if ( a1 != 0 )
    System::__linkproc__ LStrLAsg(&v16, a1);
  else
    System::LoadResString((int **)off_40D3DC, (int **)&v16);
  v10 = v16;
  v11 = 11;
  v12 = a2;
  v13 = 11;
  v14 = a3;
  v15 = 0;
  System::LoadResString((int **)off_40D3FC, (int **)&v9);
  v5 = Sysutils::Exception::Exception((int)"\x10EAssertionFailed", 1, v9, (int)&v10, 2);
  __writefsdword(0, v7[0]);
  v8 = (int *)&loc_4078BB;
  System::__linkproc__ LStrClr(&v9);
  System::__linkproc__ LStrClr(&v16);
  return v5;
}

// Address: 0x4078C4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __cdecl unknown_libname_90()
{
  int v0; // eax
  void *v1; // edx
  int v2; // ecx
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]
  int v6; // [esp+Ch] [ebp+Ch]
  int v7; // [esp+10h] [ebp+10h]

  retaddr = v1;
  System::__linkproc__ RaiseExcept(v0, (int)v1, v2, v7, v6, v5, v4);
}

// Address: 0x4078D1
void nullsub_40()
{
  ;
}

// Address: 0x4078D4
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __fastcall unknown_libname_91(__int32 a1, int a2, int a3, int a4)
{
  unknown_libname_89(a1, a2, a3);
  unknown_libname_90();
}

// Address: 0x4078F0 (sub_4078F0)
// DECOMPILATION FAILED (code=-12, errea=0x407902): call analysis failed
/*
  0x4078F0: mov     ecx, ds:off_40D334
  0x4078F6: mov     dl, 1
  0x4078F8: mov     eax, off_405AF0; "EAbstractError"
  0x4078FD: call    @Sysutils@Exception@$bctr$qqrp20System@TResStringRec; Sysutils::Exception::Exception(System::TResStringRec *)
  0x407902: call    @System@@RaiseExcept$qqrv; System::__linkproc__ RaiseExcept(void)
  0x407907: retn
*/
// Address: 0x407908
// BDS 2005-2007 and Delphi6-7 Visual Component Library
char __fastcall unknown_libname_92(int *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  bool v5; // cf
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v1 = *a1;
  if ( v1 > -1073741678 )
  {
    if ( v1 > -1073741674 )
    {
      v9 = v1 + 1073741571;
      if ( v9 == 0 )
        return 14;
      if ( v9 == 61 )
        return 13;
    }
    else
    {
      if ( v1 == -1073741674 )
        return 12;
      v7 = v1 + 1073741677;
      if ( v7 == 0 )
        return 9;
      v8 = v7 - 1;
      if ( v8 == 0 )
        return 3;
      if ( v8 == 1 )
        return 5;
    }
  }
  else
  {
    if ( v1 == -1073741678 )
      return 6;
    if ( v1 <= -1073741682 )
    {
      if ( v1 == -1073741682 )
        return 7;
      v2 = v1 + 1073741819;
      if ( v2 == 0 )
        return 11;
      v3 = v2 - 135;
      if ( v3 == 0 )
        return 4;
      if ( v3 != 1 )
        return 22;
      return 9;
    }
    v4 = v1 + 1073741681;
    v5 = v4 < 2;
    v6 = v4 - 2;
    if ( v5 )
      return 6;
    if ( v6 == 0 )
      return 8;
  }
  return 22;
}

// Address: 0x407988
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_93(int *a1)
{
  return dword_40D1F8[2 * (unsigned __int8)unknown_libname_92(a1)];
}

// Address: 0x4079A0
int __cdecl sub_4079A0(int a1)
{
  int v1; // ebx
  int v2; // esi
  int v3; // ebx
  unsigned int v5[2]; // [esp-Ch] [ebp-184h] BYREF
  int *v6; // [esp-4h] [ebp-17Ch]
  int v7; // [esp+8h] [ebp-170h] BYREF
  int v8; // [esp+Ch] [ebp-16Ch] BYREF
  char v9; // [esp+10h] [ebp-168h]
  int v10; // [esp+14h] [ebp-164h]
  char v11; // [esp+18h] [ebp-160h]
  int v12; // [esp+1Ch] [ebp-15Ch]
  char v13; // [esp+20h] [ebp-158h]
  int v14; // [esp+24h] [ebp-154h] BYREF
  int v15; // [esp+28h] [ebp-150h] BYREF
  int *v16; // [esp+2Ch] [ebp-14Ch] BYREF
  int v17; // [esp+30h] [ebp-148h] BYREF
  char v18; // [esp+34h] [ebp-144h]
  int *v19; // [esp+38h] [ebp-140h]
  char v20; // [esp+3Ch] [ebp-13Ch]
  int v21; // [esp+40h] [ebp-138h]
  char v22; // [esp+44h] [ebp-134h]
  int v23; // [esp+48h] [ebp-130h]
  char v24; // [esp+4Ch] [ebp-12Ch]
  CHAR Filename[261]; // [esp+53h] [ebp-125h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+158h] [ebp-20h] BYREF
  int v27; // [esp+174h] [ebp-4h] BYREF
  int savedregs; // [esp+178h] [ebp+0h] BYREF

  v7 = 0;
  v16 = nullptr;
  v14 = 0;
  v15 = 0;
  v27 = 0;
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_407B5B;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  v1 = *(_DWORD *)(a1 - 4);
  if ( *(_DWORD *)(v1 + 20) != 0 )
    System::LoadResString((int **)off_40D3CC, (int **)&v27);
  else
    System::LoadResString((int **)off_40D438, (int **)&v27);
  v2 = *(_DWORD *)(v1 + 24);
  VirtualQuery(*(LPCVOID *)(v1 + 12), &Buffer, 0x1Cu);
  if ( Buffer.State == 4096 && GetModuleFileNameA_0((HMODULE)Buffer.AllocationBase, Filename, 0x105u) != 0 )
  {
    v17 = *(_DWORD *)(v1 + 12);
    v18 = 5;
    unknown_libname_55((int **)&v15, Filename, 261);
    Sysutils::ExtractFileName(v15, &v16);
    v19 = v16;
    v20 = 11;
    v21 = v27;
    v22 = 11;
    v23 = v2;
    v24 = 5;
    System::LoadResString((int **)off_40D3F4, (int **)&v14);
    v3 = Sysutils::Exception::Exception((int)"\x10EAccessViolation", 1, v14, (int)&v17, 3);
  }
  else
  {
    v8 = *(_DWORD *)(v1 + 12);
    v9 = 5;
    v10 = v27;
    v11 = 11;
    v12 = v2;
    v13 = 5;
    System::LoadResString((int **)off_40D40C, (int **)&v7);
    v3 = Sysutils::Exception::Exception((int)"\x10EAccessViolation", 1, v7, (int)&v8, 2);
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_407B62;
  System::__linkproc__ LStrClr(&v7);
  System::__linkproc__ LStrArrayClr((int)&v14, 3);
  System::__linkproc__ LStrClr(&v27);
  return v3;
}

// Address: 0x407B6C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_94(int *a1)
{
  int v1; // eax
  _DWORD *v2; // ebx
  unsigned int v4[2]; // [esp-Ch] [ebp-20h] BYREF
  int *v5; // [esp-4h] [ebp-18h]
  int v6; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-Ch] BYREF
  char v8; // [esp+Ch] [ebp-8h]
  int *v9; // [esp+10h] [ebp-4h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v6 = 0;
  v9 = a1;
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_407C27;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  v1 = (unsigned __int8)unknown_libname_92(a1);
  if ( (unsigned int)(v1 - 3) < 8 )
    goto LABEL_4;
  if ( v1 == 11 )
  {
    v2 = (_DWORD *)sub_4079A0((int)&savedregs);
  }
  else
  {
    if ( (unsigned int)(v1 - 12) < 0xA )
    {
LABEL_4:
      v2 = unknown_libname_84(dword_40D1F8[2 * v1], 1, dword_40D1F8[2 * v1 + 1]);
      goto LABEL_7;
    }
    v7 = *v9;
    v8 = 0;
    System::LoadResString((int **)off_40D2F4, (int **)&v6);
    v2 = (_DWORD *)Sysutils::Exception::Exception((int)"\x12EExternalException", 1, v6, (int)&v7, 0);
  }
LABEL_7:
  if ( System::__linkproc__ IsClass(v2, (int)"\x09EExternal") )
    v2[3] = v9;
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_407C2E;
  System::__linkproc__ LStrClr(&v6);
  return v2;
}

// Address: 0x407C38
// BDS 2005-2007 and Delphi6-7 Visual Component Library
void __fastcall __noreturn unknown_libname_95(char **a1, const void *a2)
{
  int v2; // edx
  int v3; // ecx

  sub_4074D4(a1, a2);
  sub_403684(1, v2, v3);
}

// Address: 0x407C47
void nullsub_41()
{
  ;
}

// Address: 0x407C48
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int (*unknown_libname_96())()
{
  dword_40E854 = (int)Sysutils::Exception::Exception((int)"\x0CEOutOfMemory", 1, (int **)off_40D324);
  dword_40E858 = (System::TObject *)Sysutils::Exception::Exception((int)"\x0FEInvalidPointer", 1, (int **)off_40D3B4);
  *off_40D2FC = (int)unknown_libname_88;
  *off_40D350[0] = (int)unknown_libname_95;
  *(_DWORD *)off_40D318 = dword_4052B4;
  *(_DWORD *)off_40D348 = unknown_libname_93;
  *off_40D354 = (int)unknown_libname_94;
  *(_DWORD *)off_40D3C4 = unknown_libname_91;
  *(_DWORD *)off_40D2F0 = sub_4078F0;
  return sub_4078F0;
}

// Address: 0x407CCC
void *SysUtils::_16801()
{
  void *result; // eax

  *(_BYTE *)(dword_40E854 + 12) = 1;
  (*(void (**)(void))(*(_DWORD *)dword_40E854 - 8))();
  dword_40E854 = 0;
  *((_BYTE *)dword_40E858 + 12) = 1;
  System::TObject::Free(dword_40E858);
  dword_40E858 = nullptr;
  *off_40D2FC = 0;
  *off_40D350[0] = 0;
  *(_DWORD *)off_40D318 = 0;
  *(_DWORD *)off_40D348 = 0;
  *off_40D354 = 0;
  result = off_40D3C4;
  *(_DWORD *)off_40D3C4 = 0;
  return result;
}

// Address: 0x407D38
_DWORD *SysUtils::_16802()
{
  _DWORD *result; // eax
  struct _OSVERSIONINFOA v1; // [esp+0h] [ebp-94h] BYREF

  v1.dwOSVersionInfoSize = 148;
  result = (_DWORD *)GetVersionExA(&v1);
  if ( result != nullptr )
  {
    dword_40D0B4 = v1.dwPlatformId;
    dword_40D0B8 = v1.dwMajorVersion;
    dword_40D0BC = v1.dwMinorVersion;
    dword_40D0C0 = v1.dwBuildNumber;
    return unknown_libname_55(&dword_40D0C4, v1.szCSDVersion, 128);
  }
  return result;
}

// Address: 0x407D90
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_97(unsigned __int8 *a1, int a2)
{
  int v3; // edx
  int i; // esi

  v3 = 0;
  if ( a1 != nullptr && a1[a2] != 0 )
  {
    if ( a2 != 0 )
    {
      for ( i = a2 - 1; i >= 0 && _bittest(dword_40D0F8, a1[i]); --i )
        ;
      if ( (a2 - i) % 2 != 0 )
      {
        if ( _bittest(dword_40D0F8, a1[a2]) )
          LOBYTE(v3) = 1;
      }
      else
      {
        LOBYTE(v3) = 2;
      }
    }
    else if ( _bittest(dword_40D0F8, *a1) )
    {
      LOBYTE(v3) = 1;
    }
  }
  return v3;
}

// Address: 0x407E08
int __fastcall Sysutils::ByteType(char *System::AnsiString, int a2)
{
  int result; // eax
  unsigned __int8 *v5; // eax

  result = 0;
  if ( LOBYTE(dword_40E80C[0]) != 0 )
  {
    v5 = (unsigned __int8 *)System::__linkproc__ LStrToPChar(System::AnsiString);
    return unknown_libname_97(v5, a2 - 1);
  }
  return result;
}

// Address: 0x407E2C
int __fastcall Sysutils::StrByteType(char *a1, int a2)
{
  int v2; // ecx

  v2 = 0;
  if ( LOBYTE(dword_40E80C[0]) != 0 )
    return unknown_libname_97((unsigned __int8 *)a1, a2);
  return v2;
}

// Address: 0x407E44
int __fastcall Sysutils::StrCharLength(LPCSTR lpsz)
{
  if ( LOBYTE(dword_40E80C[0]) != 0 )
    return CharNextA_0(lpsz) - lpsz;
  else
    return 1;
}

// Address: 0x407E64
int __fastcall sub_407E64(char *a1, int a2)
{
  int result; // eax
  char *v5; // eax

  result = 1;
  if ( LOBYTE(dword_40E80C[0]) != 0 )
  {
    if ( _bittest(dword_40D0F8, (unsigned __int8)a1[a2 - 1]) )
    {
      v5 = System::__linkproc__ LStrToPChar(a1);
      return Sysutils::StrCharLength(&v5[a2 - 1]);
    }
  }
  return result;
}

// Address: 0x407EA0
int __fastcall Sysutils::AnsiStrRScan(char *a1, char a2)
{
  int v3; // eax
  int v4; // esi

  v3 = Sysutils::AnsiStrScan(a1, a2);
  v4 = v3;
  if ( a2 != 0 && v3 != 0 )
  {
    do
    {
      v4 = v3;
      v3 = Sysutils::AnsiStrScan((char *)(v3 + 1), a2);
    }
    while ( v3 != 0 );
  }
  return v4;
}

// Address: 0x407EC8
const char *__fastcall Sysutils::AnsiStrScan(char *a1, unsigned __int8 a2)
{
  const char *i; // edi
  char v5; // al
  bool v6; // cf
  char v7; // al

  for ( i = Sysutils::StrScan(a1, a2); i != nullptr; i = Sysutils::StrScan(i + 1, a2) )
  {
    v5 = Sysutils::StrByteType(a1, i - a1);
    v6 = v5 == 0;
    v7 = v5 - 1;
    if ( v6 )
      break;
    if ( v7 == 0 )
      ++i;
  }
  return i;
}

// Address: 0x407F08
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int __fastcall unknown_libname_98(LCID Locale)
{
  UINT ACP; // eax
  char *v2; // ecx
  int v3; // ebx
  int *v5; // [esp-10h] [ebp-20h]
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  int *v8; // [esp+4h] [ebp-Ch] BYREF
  CHAR LCData[7]; // [esp+9h] [ebp-7h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v8 = nullptr;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_407F6C;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  GetLocaleInfoA_0(Locale, 0x1004u, LCData, 7);
  unknown_libname_55(&v8, LCData, 7);
  v5 = v8;
  ACP = GetACP();
  v3 = Sysutils::StrToIntDef((int)v5, ACP, v2);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_407F73;
  System::__linkproc__ LStrClr(&v8);
  return v3;
}

// Address: 0x407F7C
// BDS 2005-2007 and Delphi6-7 Visual Component Library
unsigned __int8 __cdecl unknown_libname_99(int a1)
{
  int v1; // edi
  UINT v2; // eax
  unsigned __int8 result; // al
  int i; // esi
  unsigned __int8 v5; // bl
  bool v6; // cf
  char v7; // bl
  char v8; // bl
  unsigned __int8 v9; // [esp+Fh] [ebp-1h]

  v1 = a1 - 20;
  v2 = unknown_libname_98(Locale);
  result = GetCPInfo(v2, (LPCPINFO)(a1 - 20));
  for ( i = 0; i < 12; i += 2 )
  {
    result = *(_BYTE *)(v1 + i + 7) | *(_BYTE *)(v1 + i + 6);
    if ( *(_WORD *)(v1 + i + 6) == 0 )
      break;
    result = *(_BYTE *)(v1 + i + 6);
    v5 = *(_BYTE *)(v1 + i + 7);
    v6 = v5 < result;
    v7 = v5 - result;
    if ( !v6 )
    {
      v8 = v7 + 1;
      v9 = *(_BYTE *)(v1 + i + 6);
      do
      {
        result = v9;
        _bittestandset(dword_40D0F8, v9++);
        --v8;
      }
      while ( v8 != 0 );
    }
  }
  return result;
}

// Address: 0x407FDC
// BDS 2005-2007 and Delphi6-7 Visual Component Library
unsigned __int8 unknown_libname_100()
{
  bool v0; // cf

  v0 = (unsigned int)dword_40E804 < 0x1F;
  if ( (unsigned int)dword_40E804 <= 0x1F )
    return _bittest(&dword_40D2C0, dword_40E804);
  return v0;
}

// Address: 0x407FF4
char SysUtils::_16834()
{
  LCID ThreadLocale_0; // eax
  int SystemMetrics; // eax
  char v2; // zf
  int v3; // eax
  CHAR *v4; // edx
  WORD *v5; // edx
  WORD CharType[129]; // [esp+Eh] [ebp-196h] BYREF
  CHAR SrcStr[148]; // [esp+110h] [ebp-94h] BYREF
  int savedregs; // [esp+1A4h] [ebp+0h] BYREF

  Locale = 1033;
  dword_40E804 = 9;
  dword_40E808 = 1;
  ThreadLocale_0 = GetThreadLocale_0();
  if ( ThreadLocale_0 != 0 )
    Locale = ThreadLocale_0;
  if ( (_WORD)ThreadLocale_0 != 0 )
  {
    dword_40E804 = ThreadLocale_0 & 0x3FF;
    dword_40E808 = (unsigned __int16)ThreadLocale_0 >> 10;
  }
  qmemcpy(dword_40D0F8, dword_408148, sizeof(dword_40D0F8));
  if ( dword_40D0B4 == 2 )
  {
    LOBYTE(SystemMetrics) = unknown_libname_100();
    if ( (_BYTE)SystemMetrics != 0 )
    {
      LOWORD(dword_40E80C[0]) = 0;
    }
    else
    {
      unknown_libname_99((int)&savedregs);
      LOBYTE(SystemMetrics) = (unsigned __int8)System::__linkproc__ SetEq(dword_40D0F8, dword_408148, 0x20u);
      LOBYTE(dword_40E80C[0]) = !v2;
      if ( v2 != 0 )
      {
        v3 = 128;
        v4 = SrcStr;
        do
          *v4++ = v3++;
        while ( v3 != 256 );
        GetStringTypeExA(Locale, 2u, SrcStr, 128, CharType);
        SystemMetrics = 128;
        v5 = CharType;
        do
        {
          BYTE1(dword_40E80C[0]) = *v5 == 2;
          if ( BYTE1(dword_40E80C[0]) != 0 )
            break;
          ++v5;
          --SystemMetrics;
        }
        while ( SystemMetrics != 0 );
      }
      else
      {
        BYTE1(dword_40E80C[0]) = 0;
      }
    }
  }
  else
  {
    BYTE1(dword_40E80C[0]) = GetSystemMetrics(74) != 0;
    SystemMetrics = GetSystemMetrics(42);
    LOBYTE(dword_40E80C[0]) = SystemMetrics != 0;
    if ( SystemMetrics != 0 )
      LOBYTE(SystemMetrics) = unknown_libname_99((int)&savedregs);
  }
  return SystemMetrics;
}

// Address: 0x408168
int __usercall Sysutils::GetFormatSettings@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  LCID ThreadLocale_0; // ebx
  char *v4; // ecx
  char *v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char *v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char *v11; // ecx
  char *v12; // ecx
  char *v13; // ecx
  int v14; // ecx
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-50h] BYREF
  void *v17; // [esp-8h] [ebp-4Ch]
  int *v18; // [esp-4h] [ebp-48h]
  void *v19; // [esp+0h] [ebp-44h]
  int v20; // [esp+4h] [ebp-40h] BYREF
  int v21; // [esp+8h] [ebp-3Ch] BYREF
  int v22; // [esp+Ch] [ebp-38h] BYREF
  __int32 v23; // [esp+10h] [ebp-34h] BYREF
  __int32 v24; // [esp+14h] [ebp-30h] BYREF
  int v25; // [esp+18h] [ebp-2Ch] BYREF
  int v26; // [esp+1Ch] [ebp-28h] BYREF
  int v27; // [esp+20h] [ebp-24h] BYREF
  int v28; // [esp+24h] [ebp-20h] BYREF
  int v29; // [esp+28h] [ebp-1Ch] BYREF
  int v30; // [esp+2Ch] [ebp-18h] BYREF
  int v31; // [esp+30h] [ebp-14h] BYREF
  __int32 v32; // [esp+34h] [ebp-10h] BYREF
  __int32 v33; // [esp+38h] [ebp-Ch] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v34; // [esp+3Ch] [ebp-8h] BYREF
  __int32 v35; // [esp+40h] [ebp-4h] BYREF
  int savedregs; // [esp+44h] [ebp+0h] BYREF

  v18 = &savedregs;
  v17 = &loc_408433;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)&ExceptionList);
  SysUtils::_16834();
  unknown_libname_78(a1, a2, a3);
  if ( LOBYTE(dword_40E80C[0]) != 0 )
    unknown_libname_81();
  ThreadLocale_0 = GetThreadLocale_0();
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x14u, 0, &v32);
  System::__linkproc__ LStrAsg(&dword_40E740, v32);
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x1Bu, (__int32)&str_0_0[1], &v31);
  byte_40E744 = Sysutils::StrToIntDef(v31, 0, v4);
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x1Cu, (__int32)&str_0_0[1], &v30);
  byte_40E745 = Sysutils::StrToIntDef(v30, 0, v5);
  LOBYTE(v6) = 44;
  byte_40E746 = Sysutils::GetLocaleChar(ThreadLocale_0, 0xFu, v6);
  LOBYTE(v7) = 46;
  byte_40E747 = Sysutils::GetLocaleChar(ThreadLocale_0, 0xEu, v7);
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x19u, (__int32)&str_0_0[1], &v29);
  byte_40E748 = Sysutils::StrToIntDef(v29, 0, v8);
  LOBYTE(v9) = 47;
  byte_40E749 = Sysutils::GetLocaleChar(ThreadLocale_0, 0x1Du, v9);
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x1Fu, (__int32)&str_m_d_yy[1], &v27);
  unknown_libname_82(v27, &v28, ThreadLocale_0, a2, a3);
  System::__linkproc__ LStrAsg(&dword_40E74C, v28);
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x20u, (__int32)&str_mmmm_d__yyyy[1], &v25);
  unknown_libname_82(v25, &v26, ThreadLocale_0, a2, a3);
  System::__linkproc__ LStrAsg(&dword_40E750, v26);
  LOBYTE(v10) = 58;
  byte_40E754 = Sysutils::GetLocaleChar(ThreadLocale_0, 0x1Eu, v10);
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x28u, (__int32)&str_am[1], &v24);
  System::__linkproc__ LStrAsg(&dword_40E758, v24);
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x29u, (__int32)&str_pm[1], &v23);
  System::__linkproc__ LStrAsg(&dword_40E75C, v23);
  System::__linkproc__ LStrClr(&v34);
  System::__linkproc__ LStrClr(&v33);
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x25u, (__int32)&str_0_0[1], &v22);
  if ( Sysutils::StrToIntDef(v22, 0, v11) != 0 )
    System::__linkproc__ LStrLAsg(&v35, (__int32)&str_hh[1]);
  else
    System::__linkproc__ LStrLAsg(&v35, (__int32)&str_h[1]);
  Sysutils::GetLocaleStr(ThreadLocale_0, 0x23u, (__int32)&str_0_0[1], &v21);
  if ( Sysutils::StrToIntDef(v21, 0, v12) == 0 )
  {
    Sysutils::GetLocaleStr(ThreadLocale_0, 0x1005u, (__int32)&str_0_0[1], &v20);
    if ( Sysutils::StrToIntDef(v20, 0, v13) != 0 )
      System::__linkproc__ LStrLAsg((volatile __int32 *)&v34, (__int32)&str_AMPM_[1]);
    else
      System::__linkproc__ LStrLAsg(&v33, (__int32)&str__AMPM[1]);
  }
  sub_4039E4(&dword_40E760, 4);
  ExceptionList = v34;
  sub_4039E4(&dword_40E764, 4);
  LOBYTE(v14) = 44;
  BYTE2(dword_40E80C[0]) = Sysutils::GetLocaleChar(ThreadLocale_0, 0xCu, v14);
  __writefsdword(0, (unsigned int)v17);
  v19 = &loc_40843A;
  return System::__linkproc__ LStrArrayClr((int)&v20, 16);
}

// Address: 0x4084E0
// attributes: thunk
void __stdcall Sleep(DWORD dwMilliseconds)
{
  __imp_Sleep(dwMilliseconds);
}

// Address: 0x4084E8
int SysUtils::_16860()
{
  _DWORD *v0; // eax
  int result; // eax

  while ( dword_40D2C4 != nullptr )
  {
    v0 = dword_40D2C4;
    dword_40D2C4 = (_DWORD *)*dword_40D2C4;
    result = System::__linkproc__ FreeMem(v0);
  }
  return result;
}

// Address: 0x408508
// BDS 2005-2007 and Delphi6-7 Visual Component Library
HMODULE unknown_libname_101()
{
  HMODULE result; // eax

  result = GetModuleHandleA_0("kernel32.dll");
  if ( result != nullptr )
  {
    result = (HMODULE)GetProcAddress_0(result, "GetDiskFreeSpaceExA");
    dword_40D11C = (int)result;
  }
  if ( dword_40D11C == 0 )
  {
    dword_40D11C = (int)unknown_libname_72;
    return (HMODULE)unknown_libname_72;
  }
  return result;
}

// Address: 0x408564
// BDS 2005-2007 and Delphi6-7 Visual Component Library
_DWORD *__fastcall unknown_libname_102(_DWORD **a1)
{
  _DWORD *v1; // edx

  v1 = *a1;
  *a1 = nullptr;
  return System::TObject::Free(v1);
}

// Address: 0x408844
int __cdecl Sysutils::Finalization()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_4089B9;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  if ( ++dword_40E850 == 0 )
  {
    unknown_libname_102(&dword_40E85C);
    SysUtils::_16860();
    SysUtils::_16801();
    System::__linkproc__ FinalizeArray((OLECHAR **)&off_40D210, &byte_4077A8, 22);
    System::__linkproc__ FinalizeArray((OLECHAR **)dword_40D1D8, &byte_407728, 7);
    System::__linkproc__ FinalizeArray((OLECHAR **)&off_40D120, &byte_401004, 2);
    System::__linkproc__ LStrClr(&off_40D118);
    System::__linkproc__ DynArrayClear(&dword_40E84C, (int)&byte_405C30);
    System::__linkproc__ DynArrayClear(&dword_40E848, (int)&byte_405C0C);
    System::__linkproc__ FinalizeArray((OLECHAR **)&unk_40E810, &byte_401004, 7);
    System::__linkproc__ FinalizeArray((OLECHAR **)&unk_40E7E4, &byte_401004, 7);
    System::__linkproc__ FinalizeArray((OLECHAR **)&unk_40E7C8, &byte_401004, 7);
    System::__linkproc__ FinalizeArray((OLECHAR **)&unk_40E798, &byte_401004, 12);
    System::__linkproc__ FinalizeArray((OLECHAR **)&unk_40E768, &byte_401004, 12);
    System::__linkproc__ LStrClr(&dword_40E764);
    System::__linkproc__ LStrClr(&dword_40E760);
    System::__linkproc__ LStrClr(&dword_40E75C);
    System::__linkproc__ LStrClr(&dword_40E758);
    System::__linkproc__ LStrClr(&dword_40E750);
    System::__linkproc__ LStrClr(&dword_40E74C);
    System::__linkproc__ LStrClr(&dword_40E740);
    System::__linkproc__ LStrClr(&dword_40D0C4);
    System::__linkproc__ WStrClr(&dword_40D0B0);
    System::__linkproc__ LStrClr(&dword_40D0AC);
  }
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x4089C4
int __usercall Sysutils::initialization@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  unsigned int v5[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v5[2] = (unsigned int)&savedregs;
  v5[1] = (unsigned int)&loc_408A2C;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  if ( dword_40E850-- == 0 )
  {
    System::__linkproc__ InitResStringImports(&dword_408574);
    System::__linkproc__ InitImports(&unknown_libname_103);
    if ( byte_40E705 != 0 )
      System::__linkproc__ LStrAsg((volatile __int32 *)&off_40D118, (__int32)&str_0x[1]);
    unknown_libname_96();
    SysUtils::_16802();
    unknown_libname_101();
    Sysutils::GetFormatSettings(a1, a2, a3);
  }
  __writefsdword(0, v5[0]);
  return 0;
}

// Address: 0x408A44
// attributes: thunk
BOOL __stdcall ChangeServiceConfigA(
        SC_HANDLE hService,
        DWORD dwServiceType,
        DWORD dwStartType,
        DWORD dwErrorControl,
        LPCSTR lpBinaryPathName,
        LPCSTR lpLoadOrderGroup,
        LPDWORD lpdwTagId,
        LPCSTR lpDependencies,
        LPCSTR lpServiceStartName,
        LPCSTR lpPassword,
        LPCSTR lpDisplayName)
{
  return __imp_ChangeServiceConfigA(
           hService,
           dwServiceType,
           dwStartType,
           dwErrorControl,
           lpBinaryPathName,
           lpLoadOrderGroup,
           lpdwTagId,
           lpDependencies,
           lpServiceStartName,
           lpPassword,
           lpDisplayName);
}

// Address: 0x408A4C
// attributes: thunk
BOOL __stdcall CloseServiceHandle(SC_HANDLE hSCObject)
{
  return __imp_CloseServiceHandle(hSCObject);
}

// Address: 0x408A54
// attributes: thunk
BOOL __stdcall ControlService(SC_HANDLE hService, DWORD dwControl, LPSERVICE_STATUS lpServiceStatus)
{
  return __imp_ControlService(hService, dwControl, lpServiceStatus);
}

// Address: 0x408A5C
// attributes: thunk
SC_HANDLE __stdcall CreateServiceA(
        SC_HANDLE hSCManager,
        LPCSTR lpServiceName,
        LPCSTR lpDisplayName,
        DWORD dwDesiredAccess,
        DWORD dwServiceType,
        DWORD dwStartType,
        DWORD dwErrorControl,
        LPCSTR lpBinaryPathName,
        LPCSTR lpLoadOrderGroup,
        LPDWORD lpdwTagId,
        LPCSTR lpDependencies,
        LPCSTR lpServiceStartName,
        LPCSTR lpPassword)
{
  return __imp_CreateServiceA(
           hSCManager,
           lpServiceName,
           lpDisplayName,
           dwDesiredAccess,
           dwServiceType,
           dwStartType,
           dwErrorControl,
           lpBinaryPathName,
           lpLoadOrderGroup,
           lpdwTagId,
           lpDependencies,
           lpServiceStartName,
           lpPassword);
}

// Address: 0x408A64
// attributes: thunk
BOOL __stdcall DeleteService(SC_HANDLE hService)
{
  return __imp_DeleteService(hService);
}

// Address: 0x408A6C
// attributes: thunk
BOOL __stdcall EnumDependentServicesA(
        SC_HANDLE hService,
        DWORD dwServiceState,
        LPENUM_SERVICE_STATUSA lpServices,
        DWORD cbBufSize,
        LPDWORD pcbBytesNeeded,
        LPDWORD lpServicesReturned)
{
  return __imp_EnumDependentServicesA(
           hService,
           dwServiceState,
           lpServices,
           cbBufSize,
           pcbBytesNeeded,
           lpServicesReturned);
}

// Address: 0x408A74
// attributes: thunk
BOOL __stdcall GetServiceKeyNameA(SC_HANDLE hSCManager, LPCSTR lpDisplayName, LPSTR lpServiceName, LPDWORD lpcchBuffer)
{
  return __imp_GetServiceKeyNameA(hSCManager, lpDisplayName, lpServiceName, lpcchBuffer);
}

// Address: 0x408A7C
// attributes: thunk
BOOL __stdcall GetServiceDisplayNameA(
        SC_HANDLE hSCManager,
        LPCSTR lpServiceName,
        LPSTR lpDisplayName,
        LPDWORD lpcchBuffer)
{
  return __imp_GetServiceDisplayNameA(hSCManager, lpServiceName, lpDisplayName, lpcchBuffer);
}

// Address: 0x408A84
// attributes: thunk
SC_LOCK __stdcall LockServiceDatabase(SC_HANDLE hSCManager)
{
  return __imp_LockServiceDatabase(hSCManager);
}

// Address: 0x408A8C
// attributes: thunk
SC_HANDLE __stdcall OpenSCManagerA(LPCSTR lpMachineName, LPCSTR lpDatabaseName, DWORD dwDesiredAccess)
{
  return __imp_OpenSCManagerA(lpMachineName, lpDatabaseName, dwDesiredAccess);
}

// Address: 0x408A94
// attributes: thunk
SC_HANDLE __stdcall OpenServiceA(SC_HANDLE hSCManager, LPCSTR lpServiceName, DWORD dwDesiredAccess)
{
  return __imp_OpenServiceA(hSCManager, lpServiceName, dwDesiredAccess);
}

// Address: 0x408A9C
// attributes: thunk
BOOL __stdcall QueryServiceConfigA(
        SC_HANDLE hService,
        LPQUERY_SERVICE_CONFIGA lpServiceConfig,
        DWORD cbBufSize,
        LPDWORD pcbBytesNeeded)
{
  return __imp_QueryServiceConfigA(hService, lpServiceConfig, cbBufSize, pcbBytesNeeded);
}

// Address: 0x408AA4
// attributes: thunk
BOOL __stdcall QueryServiceStatus(SC_HANDLE hService, LPSERVICE_STATUS lpServiceStatus)
{
  return __imp_QueryServiceStatus(hService, lpServiceStatus);
}

// Address: 0x408AAC
// attributes: thunk
BOOL __stdcall StartServiceA(SC_HANDLE hService, DWORD dwNumServiceArgs, LPCSTR *lpServiceArgVectors)
{
  return __imp_StartServiceA(hService, dwNumServiceArgs, lpServiceArgVectors);
}

// Address: 0x408AB4
// attributes: thunk
BOOL __stdcall UnlockServiceDatabase(SC_LOCK ScLock)
{
  return __imp_UnlockServiceDatabase(ScLock);
}

// Address: 0x408ABC
int sub_408ABC()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_408AE1;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E860;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x408AEC
void sub_408AEC()
{
  --dword_40E860;
}

// Address: 0x408AF4
int sub_408AF4()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_408B19;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E864;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x408B24
void sub_408B24()
{
  --dword_40E864;
}

// Address: 0x408B2C
int sub_408B2C()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_408B51;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E868;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x408B5C
void sub_408B5C()
{
  --dword_40E868;
}

// Address: 0x408B64
// BDS 2005-2007 and Delphi6-7 Visual Component Library
double __stdcall unknown_libname_104(__int64 a1, double a2)
{
  return (a2 * 86400.0 + (double)a1) / 86400.0;
}

// Address: 0x408B90
int sub_408B90()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_408BB5;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E86C;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x408BC0
void sub_408BC0()
{
  --dword_40E86C;
}

// Address: 0x408BC8
_DWORD *__fastcall sub_408BC8(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  _BYTE *v4; // eax
  int v6; // [esp-14h] [ebp-28h]
  unsigned int v7[2]; // [esp-Ch] [ebp-20h] BYREF
  int *v8; // [esp-4h] [ebp-18h]
  void *v9; // [esp+4h] [ebp-10h] BYREF
  void *v10; // [esp+8h] [ebp-Ch] BYREF
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h] BYREF
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v10 = nullptr;
  v9 = nullptr;
  v11 = a2;
  v12 = a1;
  System::__linkproc__ LStrAddRef(a1);
  v8 = &savedregs;
  v7[1] = (unsigned int)&loc_408C8B;
  v7[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v7);
  Sysutils::ExtractFilePath(v12, (int **)&v10);
  v2 = unknown_libname_56(v12);
  v6 = v2 - unknown_libname_56((int)v10);
  v3 = unknown_libname_56((int)v10);
  System::__linkproc__ LStrCopy(v12, v3 + 1, v6, (int **)&v9);
  if ( unknown_libname_58(&str__[1], v9) != nullptr )
  {
    v4 = unknown_libname_58(&str__[1], v9);
    System::__linkproc__ LStrCopy((int)v9, 0, (int)(v4 - 1), (int **)&v9);
  }
  System::__linkproc__ LStrCat3((volatile __int32 *)v11, (char *)v10, (char *)v9);
  __writefsdword(0, v7[0]);
  v8 = (int *)&loc_408C92;
  System::__linkproc__ LStrArrayClr((int)&v9, 2);
  return System::__linkproc__ LStrClr(&v12);
}

// Address: 0x408CA4
int __fastcall sub_408CA4(int a1, int a2)
{
  double v2; // st7
  char *v3; // eax
  unsigned int v5[2]; // [esp+8h] [ebp-38h] BYREF
  int *v6; // [esp+10h] [ebp-30h]
  __int32 v7; // [esp+14h] [ebp-2Ch] BYREF
  HANDLE hObject; // [esp+18h] [ebp-28h]
  int v9; // [esp+1Ch] [ebp-24h] BYREF
  int v10; // [esp+20h] [ebp-20h] BYREF
  int v11; // [esp+24h] [ebp-1Ch]
  double v12; // [esp+28h] [ebp-18h]
  char v13; // [esp+32h] [ebp-Eh]
  char v14; // [esp+33h] [ebp-Dh]
  int v15; // [esp+34h] [ebp-Ch]
  int v16; // [esp+38h] [ebp-8h]
  int v17; // [esp+3Ch] [ebp-4h] BYREF
  int savedregs; // [esp+40h] [ebp+0h] BYREF

  v7 = 0;
  v10 = 0;
  v9 = 0;
  v16 = a2;
  v17 = a1;
  System::__linkproc__ LStrAddRef(a1);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_408DCE;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v11 = sub_4098E8(v17, &v10);
  if ( v11 != 0 )
  {
    v15 = v11;
  }
  else
  {
    sub_408BC8(v10, (int)&v7);
    System::__linkproc__ LStrLAsg(&v9, v7);
    if ( Sysutils::FileExists((char *)v9) )
    {
      v2 = Sysutils::Now();
      v12 = unknown_libname_104(v16, v2);
      while ( v14 == 0 && v13 == 0 )
      {
        v3 = System::__linkproc__ LStrToPChar((char *)v9);
        hObject = CreateFileA(v3, 0xC0000000, 0, nullptr, 3u, 0x80u, nullptr);
        if ( hObject != (HANDLE)-1 )
        {
          CloseHandle(hObject);
          v14 = 1;
        }
        if ( v14 == 0 && Sysutils::Now() > v12 )
        {
          v13 = 1;
          v15 = 258;
        }
      }
    }
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_408DD5;
  System::__linkproc__ LStrClr(&v7);
  System::__linkproc__ LStrArrayClr((int)&v9, 2);
  System::__linkproc__ LStrClr(&v17);
  return v15;
}

// Address: 0x408DDC
int __fastcall sub_408DDC(int a1, int a2, int a3)
{
  double v3; // st7
  unsigned int v5[2]; // [esp+8h] [ebp-34h] BYREF
  int *v6; // [esp+10h] [ebp-2Ch]
  double v7; // [esp+14h] [ebp-28h]
  char v8; // [esp+21h] [ebp-1Bh]
  char v9; // [esp+22h] [ebp-1Ah]
  char v10; // [esp+23h] [ebp-19h]
  int v11; // [esp+24h] [ebp-18h]
  int v12; // [esp+28h] [ebp-14h] BYREF
  int v13; // [esp+2Ch] [ebp-10h]
  int v14; // [esp+30h] [ebp-Ch]
  int v15; // [esp+34h] [ebp-8h]
  int v16; // [esp+38h] [ebp-4h] BYREF
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  v14 = a3;
  v15 = a2;
  v16 = a1;
  System::__linkproc__ LStrAddRef(a1);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_408EB3;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  v13 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v3 = Sysutils::Now();
  v7 = unknown_libname_104(v14, v3);
  while ( v10 == 0 && v8 == 0 && v9 == 0 )
  {
    v11 = sub_40981C(v16, &v12);
    if ( v11 != 0 )
    {
      v8 = 1;
      v13 = v11;
    }
    else if ( v15 == v12 )
    {
      v10 = 1;
    }
    else
    {
      Sleep(0xFAu);
    }
    if ( v10 == 0 && v8 == 0 && Sysutils::Now() > v7 )
    {
      v9 = 1;
      v13 = 1053;
    }
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_408EBA;
  System::__linkproc__ LStrClr(&v16);
  return v13;
}

// Address: 0x408EC4
DWORD __fastcall sub_408EC4(char *a1)
{
  char *v1; // eax
  unsigned int v3[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v4; // [esp-4h] [ebp-14h]
  SC_HANDLE hSCObject; // [esp+0h] [ebp-10h]
  SC_HANDLE hSCManager; // [esp+4h] [ebp-Ch]
  DWORD LastError; // [esp+8h] [ebp-8h]
  char *v8; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v8 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v4 = &savedregs;
  v3[1] = (unsigned int)&loc_408F58;
  v3[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v3);
  LastError = 0;
  hSCManager = OpenSCManagerA(MachineName, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v1 = System::__linkproc__ LStrToPChar(v8);
    hSCObject = OpenServiceA(hSCManager, v1, 1u);
    if ( hSCObject != nullptr )
      CloseServiceHandle(hSCObject);
    else
      LastError = GetLastError();
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v3[0]);
  v4 = (int *)&loc_408F5F;
  System::__linkproc__ LStrClr(&v8);
  return LastError;
}

// Address: 0x408FB4
_DWORD *__fastcall sub_408FB4(int a1, int *a2, void **a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int **v9; // [esp-10h] [ebp-30h]
  unsigned int v10[2]; // [esp-Ch] [ebp-2Ch] BYREF
  int *v11; // [esp-4h] [ebp-24h]
  int *v12; // [esp+4h] [ebp-1Ch] BYREF
  void *v13; // [esp+8h] [ebp-18h] BYREF
  char v14; // [esp+Dh] [ebp-13h]
  char v15; // [esp+Eh] [ebp-12h]
  char v16; // [esp+Fh] [ebp-11h]
  int v17; // [esp+10h] [ebp-10h] BYREF
  OLECHAR ***v18; // [esp+14h] [ebp-Ch]
  int *v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h] BYREF
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v12 = nullptr;
  v13 = nullptr;
  v17 = 0;
  v18 = (OLECHAR ***)a3;
  v19 = a2;
  v20 = a1;
  System::__linkproc__ LStrAddRef(a1);
  v11 = &savedregs;
  v10[1] = (unsigned int)&loc_409170;
  v10[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v10);
  System::__linkproc__ DynArrayClear(v18, (int)&byte_408F70);
  *v19 = 0;
  v15 = 0;
  while ( unknown_libname_56(v20) > 0 )
  {
    v16 = 0;
    v14 = 0;
    if ( *(_BYTE *)v20 == 32 && v15 == 0 )
    {
      v14 = 1;
      v16 = 1;
    }
    if ( *(_BYTE *)v20 == 34 )
    {
      v15 ^= 1u;
      v14 = 1;
      if ( v15 == 0 )
        v16 = 1;
    }
    if ( v14 == 0 )
    {
      unknown_libname_52((int **)&v13);
      System::__linkproc__ LStrCat(&v17, (char *)v13);
    }
    if ( v16 != 0 || unknown_libname_56(v20) == 1 )
    {
      v3 = unknown_libname_61((int)*v18);
      System::__linkproc__ DynArraySetLength((void **)v18, &byte_408F70, 1, v3 + 1);
      v4 = unknown_libname_61((int)*v18);
      v9 = (int **)&(*v18)[v4 - 1];
      v5 = unknown_libname_56(v17);
      *v9 = System::__linkproc__ GetMem(v5 + 1);
      v6 = unknown_libname_61((int)*v18);
      sub_405FDC((char *)(*v18)[v6 - 1], (char *)v17);
      System::__linkproc__ LStrClr(&v17);
      System::__linkproc__ LStrDelete((char **)&v20, 1, 1);
      Sysutils::Trim(v20, &v12);
      System::__linkproc__ LStrLAsg(&v20, (__int32)v12);
    }
    else
    {
      System::__linkproc__ LStrDelete((char **)&v20, 1, 1);
    }
  }
  if ( unknown_libname_61((int)*v18) > 0 )
  {
    v7 = unknown_libname_61((int)*v18);
    *v19 = v7;
  }
  __writefsdword(0, v10[0]);
  v11 = (int *)&loc_409177;
  System::__linkproc__ LStrArrayClr((int)&v12, 2);
  System::__linkproc__ LStrClr(&v17);
  return System::__linkproc__ LStrClr(&v20);
}

// Address: 0x40917C
OLECHAR ***__fastcall sub_40917C(OLECHAR **a1)
{
  int v1; // eax
  unsigned int v3[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v4; // [esp-4h] [ebp-10h]
  int v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-8h]
  OLECHAR **v7; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v7 = a1;
  System::__linkproc__ DynArrayAddRef((int)a1);
  v4 = &savedregs;
  v3[1] = (unsigned int)&loc_4091F1;
  v3[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v3);
  if ( unknown_libname_61((int)v7) > 0 )
  {
    v1 = unknown_libname_61((int)v7) - 1;
    if ( v1 >= 0 )
    {
      v5 = v1 + 1;
      v6 = 0;
      do
      {
        System::__linkproc__ FreeMem(v7[v6++]);
        --v5;
      }
      while ( v5 != 0 );
    }
  }
  __writefsdword(0, v3[0]);
  v4 = (int *)&loc_4091F8;
  return System::__linkproc__ DynArrayClear(&v7, (int)&byte_408F70);
}

// Address: 0x4091FC
DWORD __fastcall sub_4091FC(char *a1, int a2, int a3)
{
  char *v3; // eax
  unsigned int v5[2]; // [esp-Ch] [ebp-30h] BYREF
  int *v6; // [esp-4h] [ebp-28h]
  DWORD dwNumServiceArgs; // [esp+4h] [ebp-20h] BYREF
  LPCSTR *lpServiceArgVectors; // [esp+8h] [ebp-1Ch] BYREF
  SC_HANDLE hService; // [esp+Ch] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+10h] [ebp-14h]
  DWORD LastError; // [esp+14h] [ebp-10h]
  int v12; // [esp+18h] [ebp-Ch]
  int v13; // [esp+1Ch] [ebp-8h] BYREF
  char *v14; // [esp+20h] [ebp-4h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  lpServiceArgVectors = nullptr;
  v12 = a3;
  v13 = a2;
  v14 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  System::__linkproc__ LStrAddRef(v13);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_409302;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  hSCManager = OpenSCManagerA(byte_409314, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v3 = System::__linkproc__ LStrToPChar(v14);
    hService = OpenServiceA(hSCManager, v3, 0x10u);
    if ( hService != nullptr )
    {
      sub_408FB4(v13, (int *)&dwNumServiceArgs, (void **)&lpServiceArgVectors);
      if ( StartServiceA(hService, dwNumServiceArgs, lpServiceArgVectors) )
        LastError = sub_408DDC((int)v14, 4, v12);
      else
        LastError = GetLastError();
      sub_40917C((OLECHAR **)lpServiceArgVectors);
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_409309;
  System::__linkproc__ DynArrayClear((OLECHAR ***)&lpServiceArgVectors, (int)&byte_408F70);
  System::__linkproc__ LStrArrayClr((int)&v13, 2);
  return LastError;
}

// Address: 0x409318
int __fastcall sub_409318(char *a1, unsigned __int8 a2, int a3)
{
  char *v3; // eax
  BOOL v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-60h] BYREF
  int *v7; // [esp-4h] [ebp-58h]
  int *v8; // [esp+4h] [ebp-50h] BYREF
  struct _SERVICE_STATUS ServiceStatus; // [esp+8h] [ebp-4Ch] BYREF
  DWORD v10; // [esp+24h] [ebp-30h]
  int v11; // [esp+28h] [ebp-2Ch]
  bool v12; // [esp+2Eh] [ebp-26h]
  char v13; // [esp+2Fh] [ebp-25h]
  DWORD ServicesReturned; // [esp+30h] [ebp-24h] BYREF
  DWORD pcbBytesNeeded; // [esp+34h] [ebp-20h] BYREF
  LPENUM_SERVICE_STATUSA lpServices; // [esp+38h] [ebp-1Ch]
  SC_HANDLE hService; // [esp+3Ch] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+40h] [ebp-14h]
  int LastError; // [esp+44h] [ebp-10h]
  int v20; // [esp+48h] [ebp-Ch]
  unsigned __int8 v21; // [esp+4Fh] [ebp-5h]
  char *v22; // [esp+50h] [ebp-4h] BYREF
  int savedregs; // [esp+54h] [ebp+0h] BYREF

  v8 = nullptr;
  v20 = a3;
  v21 = a2;
  v22 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_4094E1;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  LastError = 0;
  pcbBytesNeeded = 0;
  ServicesReturned = 0;
  lpServices = nullptr;
  v13 = 0;
  hSCManager = OpenSCManagerA(byte_4094F0, nullptr, 5u);
  if ( hSCManager != nullptr )
  {
    v3 = System::__linkproc__ LStrToPChar(v22);
    hService = OpenServiceA(hSCManager, v3, 0x28u);
    if ( hService != nullptr )
    {
      if ( !EnumDependentServicesA(hService, 1u, lpServices, 0, &pcbBytesNeeded, &ServicesReturned) )
      {
        v13 = 1;
        lpServices = (LPENUM_SERVICE_STATUSA)System::__linkproc__ GetMem(pcbBytesNeeded);
        v4 = EnumDependentServicesA(hService, 1u, lpServices, pcbBytesNeeded, &pcbBytesNeeded, &ServicesReturned);
        v12 = v4;
        if ( v4 && ServicesReturned != 0 )
        {
          v10 = ServicesReturned;
          v11 = 1;
          do
          {
            unknown_libname_53(&v8, lpServices->lpServiceName);
            LastError = sub_409318(v8, 0, v20);
            if ( LastError != 0 )
              break;
            ++lpServices;
            ++v11;
            --v10;
          }
          while ( v10 != 0 );
        }
        else
        {
          LastError = GetLastError();
        }
      }
      if ( v13 != 0 && LastError == 0 || v13 == 0 )
      {
        if ( ControlService(hService, 1u, &ServiceStatus) )
          LastError = sub_408DDC((int)v22, 1, v20);
        else
          LastError = GetLastError();
      }
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  if ( (v21 & (LastError == 0)) != 0 )
    LastError = sub_408CA4((int)v22, v20);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_4094E8;
  System::__linkproc__ LStrClr(&v8);
  System::__linkproc__ LStrClr(&v22);
  return LastError;
}

// Address: 0x4094F4
DWORD __fastcall sub_4094F4(char *a1, int a2)
{
  char *v2; // eax
  unsigned int v4[2]; // [esp-Ch] [ebp-3Ch] BYREF
  int *v5; // [esp-4h] [ebp-34h]
  struct _SERVICE_STATUS ServiceStatus; // [esp+0h] [ebp-30h] BYREF
  SC_HANDLE hService; // [esp+1Ch] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+20h] [ebp-10h]
  DWORD LastError; // [esp+24h] [ebp-Ch]
  int v10; // [esp+28h] [ebp-8h]
  char *v11; // [esp+2Ch] [ebp-4h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v10 = a2;
  v11 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_4095B6;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  hSCManager = OpenSCManagerA(byte_4095C4, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v11);
    hService = OpenServiceA(hSCManager, v2, 0x40u);
    if ( hService != nullptr )
    {
      if ( ControlService(hService, 2u, &ServiceStatus) )
        LastError = sub_408DDC((int)v11, 7, v10);
      else
        LastError = GetLastError();
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_4095BD;
  System::__linkproc__ LStrClr(&v11);
  return LastError;
}

// Address: 0x4095C8
DWORD __fastcall sub_4095C8(char *a1, int a2)
{
  char *v2; // eax
  unsigned int v4[2]; // [esp-Ch] [ebp-3Ch] BYREF
  int *v5; // [esp-4h] [ebp-34h]
  struct _SERVICE_STATUS ServiceStatus; // [esp+0h] [ebp-30h] BYREF
  SC_HANDLE hService; // [esp+1Ch] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+20h] [ebp-10h]
  DWORD LastError; // [esp+24h] [ebp-Ch]
  int v10; // [esp+28h] [ebp-8h]
  char *v11; // [esp+2Ch] [ebp-4h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v10 = a2;
  v11 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_40968A;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  hSCManager = OpenSCManagerA(byte_409698, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v11);
    hService = OpenServiceA(hSCManager, v2, 0x40u);
    if ( hService != nullptr )
    {
      if ( ControlService(hService, 3u, &ServiceStatus) )
        LastError = sub_408DDC((int)v11, 4, v10);
      else
        LastError = GetLastError();
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_409691;
  System::__linkproc__ LStrClr(&v11);
  return LastError;
}

// Address: 0x40969C
DWORD __fastcall sub_40969C(char *a1, int **a2)
{
  char *v2; // eax
  CHAR *v4; // [esp-14h] [ebp-2Ch]
  unsigned int v5[2]; // [esp-Ch] [ebp-24h] BYREF
  int *v6; // [esp-4h] [ebp-1Ch]
  DWORD cchBuffer; // [esp+0h] [ebp-18h] BYREF
  LPSTR lpServiceName; // [esp+4h] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+8h] [ebp-10h]
  DWORD LastError; // [esp+Ch] [ebp-Ch]
  int **v11; // [esp+10h] [ebp-8h]
  char *v12; // [esp+14h] [ebp-4h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v11 = a2;
  v12 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_409749;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  LastError = 0;
  cchBuffer = 255;
  lpServiceName = (LPSTR)Sysutils::StrAlloc(0x100u);
  hSCManager = OpenSCManagerA(byte_409758, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v4 = lpServiceName;
    v2 = System::__linkproc__ LStrToPChar(v12);
    if ( GetServiceKeyNameA(hSCManager, v2, v4, &cchBuffer) )
      unknown_libname_53(v11, lpServiceName);
    else
      LastError = GetLastError();
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_409750;
  System::__linkproc__ LStrClr(&v12);
  return LastError;
}

// Address: 0x40975C
DWORD __fastcall sub_40975C(char *a1, int **a2)
{
  char *v2; // eax
  CHAR *v4; // [esp-14h] [ebp-2Ch]
  unsigned int v5[2]; // [esp-Ch] [ebp-24h] BYREF
  int *v6; // [esp-4h] [ebp-1Ch]
  DWORD cchBuffer; // [esp+0h] [ebp-18h] BYREF
  LPSTR lpDisplayName; // [esp+4h] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+8h] [ebp-10h]
  DWORD LastError; // [esp+Ch] [ebp-Ch]
  int **v11; // [esp+10h] [ebp-8h]
  char *v12; // [esp+14h] [ebp-4h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v11 = a2;
  v12 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_409809;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  LastError = 0;
  cchBuffer = 255;
  lpDisplayName = (LPSTR)Sysutils::StrAlloc(0x100u);
  hSCManager = OpenSCManagerA(byte_409818, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v4 = lpDisplayName;
    v2 = System::__linkproc__ LStrToPChar(v12);
    if ( GetServiceDisplayNameA(hSCManager, v2, v4, &cchBuffer) )
      unknown_libname_53(v11, lpDisplayName);
    else
      LastError = GetLastError();
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_409810;
  System::__linkproc__ LStrClr(&v12);
  return LastError;
}

// Address: 0x40981C
DWORD __fastcall sub_40981C(char *a1, DWORD *a2)
{
  char *v2; // eax
  unsigned int v4[2]; // [esp-Ch] [ebp-3Ch] BYREF
  int *v5; // [esp-4h] [ebp-34h]
  struct _SERVICE_STATUS ServiceStatus; // [esp+0h] [ebp-30h] BYREF
  SC_HANDLE hService; // [esp+1Ch] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+20h] [ebp-10h]
  DWORD LastError; // [esp+24h] [ebp-Ch]
  DWORD *v10; // [esp+28h] [ebp-8h]
  char *v11; // [esp+2Ch] [ebp-4h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v10 = a2;
  v11 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_4098D6;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_4098E4, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v11);
    hService = OpenServiceA(hSCManager, v2, 4u);
    if ( hService != nullptr )
    {
      if ( QueryServiceStatus(hService, &ServiceStatus) )
        *v10 = ServiceStatus.dwCurrentState;
      else
        LastError = GetLastError();
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_4098DD;
  System::__linkproc__ LStrClr(&v11);
  return LastError;
}

// Address: 0x4098E8
DWORD __fastcall sub_4098E8(char *a1, int **a2)
{
  char *v2; // eax
  unsigned int v4[2]; // [esp-Ch] [ebp-28h] BYREF
  int *v5; // [esp-4h] [ebp-20h]
  LPQUERY_SERVICE_CONFIGA lpServiceConfig; // [esp+0h] [ebp-1Ch]
  DWORD pcbBytesNeeded; // [esp+4h] [ebp-18h] BYREF
  SC_HANDLE hService; // [esp+8h] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+Ch] [ebp-10h]
  DWORD LastError; // [esp+10h] [ebp-Ch]
  int **v11; // [esp+14h] [ebp-8h]
  char *v12; // [esp+18h] [ebp-4h] BYREF
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  v11 = a2;
  v12 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_4099F7;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  LastError = 0;
  lpServiceConfig = nullptr;
  hSCManager = OpenSCManagerA(byte_409A08, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v12);
    hService = OpenServiceA(hSCManager, v2, 1u);
    if ( hService != nullptr )
    {
      if ( QueryServiceConfigA(hService, lpServiceConfig, 0, &pcbBytesNeeded) || GetLastError() != 122 )
      {
        LastError = GetLastError();
      }
      else
      {
        lpServiceConfig = (LPQUERY_SERVICE_CONFIGA)System::__linkproc__ GetMem(pcbBytesNeeded);
        if ( QueryServiceConfigA(hService, lpServiceConfig, pcbBytesNeeded, &pcbBytesNeeded) )
          unknown_libname_53(v11, lpServiceConfig->lpBinaryPathName);
        else
          LastError = GetLastError();
        System::__linkproc__ FreeMem(lpServiceConfig);
      }
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_4099FE;
  System::__linkproc__ LStrClr(&v12);
  return LastError;
}

// Address: 0x409A0C
DWORD __fastcall sub_409A0C(char *a1, DWORD *a2)
{
  char *v2; // eax
  unsigned int v4[2]; // [esp-Ch] [ebp-28h] BYREF
  int *v5; // [esp-4h] [ebp-20h]
  LPQUERY_SERVICE_CONFIGA lpServiceConfig; // [esp+0h] [ebp-1Ch]
  DWORD pcbBytesNeeded; // [esp+4h] [ebp-18h] BYREF
  SC_HANDLE hService; // [esp+8h] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+Ch] [ebp-10h]
  DWORD LastError; // [esp+10h] [ebp-Ch]
  DWORD *v11; // [esp+14h] [ebp-8h]
  char *v12; // [esp+18h] [ebp-4h] BYREF
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  v11 = a2;
  v12 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_409B18;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  LastError = 0;
  lpServiceConfig = nullptr;
  hSCManager = OpenSCManagerA(byte_409B28, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v12);
    hService = OpenServiceA(hSCManager, v2, 1u);
    if ( hService != nullptr )
    {
      if ( QueryServiceConfigA(hService, lpServiceConfig, 0, &pcbBytesNeeded) || GetLastError() != 122 )
      {
        LastError = GetLastError();
      }
      else
      {
        lpServiceConfig = (LPQUERY_SERVICE_CONFIGA)System::__linkproc__ GetMem(pcbBytesNeeded);
        if ( QueryServiceConfigA(hService, lpServiceConfig, pcbBytesNeeded, &pcbBytesNeeded) )
          *v11 = lpServiceConfig->dwStartType;
        else
          LastError = GetLastError();
        System::__linkproc__ FreeMem(lpServiceConfig);
      }
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_409B1F;
  System::__linkproc__ LStrClr(&v12);
  return LastError;
}

// Address: 0x409B2C
DWORD __fastcall sub_409B2C(char *a1, int **a2)
{
  char *v2; // eax
  HMODULE ModuleHandleA_0; // eax
  unsigned int v5[2]; // [esp-Ch] [ebp-30h] BYREF
  int *v6; // [esp-4h] [ebp-28h]
  DWORD v7; // [esp+0h] [ebp-24h] BYREF
  BYTE *Mem; // [esp+4h] [ebp-20h]
  SC_LOCK ScLock; // [esp+8h] [ebp-1Ch]
  SC_HANDLE hSCObject; // [esp+Ch] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+10h] [ebp-14h]
  BOOL (__stdcall *QueryServiceConfig2A)(SC_HANDLE, DWORD, LPBYTE, DWORD, LPDWORD); // [esp+14h] [ebp-10h]
  DWORD LastError; // [esp+18h] [ebp-Ch]
  int **v14; // [esp+1Ch] [ebp-8h]
  char *v15; // [esp+20h] [ebp-4h] BYREF
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v14 = a2;
  v15 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_409C88;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_409C98, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v15);
    hSCObject = OpenServiceA(hSCManager, v2, 1u);
    if ( hSCObject != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        ModuleHandleA_0 = GetModuleHandleA_0("advapi32.dll");
        QueryServiceConfig2A = (BOOL (__stdcall *)(SC_HANDLE, DWORD, LPBYTE, DWORD, LPDWORD))GetProcAddress_0(
                                                                                               ModuleHandleA_0,
                                                                                               "QueryServiceConfig2A");
        if ( QueryServiceConfig2A != nullptr
          && !QueryServiceConfig2A(hSCObject, 1, nullptr, 0, &v7)
          && GetLastError() == 122 )
        {
          Mem = (BYTE *)System::__linkproc__ GetMem(v7);
          if ( QueryServiceConfig2A(hSCObject, 1, Mem, v7, &v7) )
            unknown_libname_53(v14, *(char **)Mem);
          else
            LastError = GetLastError();
          System::__linkproc__ FreeMem(Mem);
        }
        else
        {
          LastError = GetLastError();
        }
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hSCObject);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_409C8F;
  System::__linkproc__ LStrClr(&v15);
  return LastError;
}

// Address: 0x409CC4
DWORD __fastcall sub_409CC4(char *a1, int **a2)
{
  char *v2; // eax
  unsigned int v4[2]; // [esp-Ch] [ebp-28h] BYREF
  int *v5; // [esp-4h] [ebp-20h]
  LPQUERY_SERVICE_CONFIGA lpServiceConfig; // [esp+0h] [ebp-1Ch]
  DWORD pcbBytesNeeded; // [esp+4h] [ebp-18h] BYREF
  SC_HANDLE hService; // [esp+8h] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+Ch] [ebp-10h]
  DWORD LastError; // [esp+10h] [ebp-Ch]
  int **v11; // [esp+14h] [ebp-8h]
  char *v12; // [esp+18h] [ebp-4h] BYREF
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  v11 = a2;
  v12 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_409DD3;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  LastError = 0;
  lpServiceConfig = nullptr;
  hSCManager = OpenSCManagerA(byte_409DE4, nullptr, 1u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v12);
    hService = OpenServiceA(hSCManager, v2, 1u);
    if ( hService != nullptr )
    {
      if ( QueryServiceConfigA(hService, lpServiceConfig, 0, &pcbBytesNeeded) || GetLastError() != 122 )
      {
        LastError = GetLastError();
      }
      else
      {
        lpServiceConfig = (LPQUERY_SERVICE_CONFIGA)System::__linkproc__ GetMem(pcbBytesNeeded);
        if ( QueryServiceConfigA(hService, lpServiceConfig, pcbBytesNeeded, &pcbBytesNeeded) )
          unknown_libname_53(v11, lpServiceConfig->lpServiceStartName);
        else
          LastError = GetLastError();
        System::__linkproc__ FreeMem(lpServiceConfig);
      }
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_409DDA;
  System::__linkproc__ LStrClr(&v12);
  return LastError;
}

// Address: 0x409DE8
DWORD __fastcall sub_409DE8(
        char *a1,
        _DWORD *a2,
        int **a3,
        int **a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  char *v10; // eax
  HMODULE ModuleHandleA_0; // eax
  unsigned int v13[2]; // [esp-Ch] [ebp-34h] BYREF
  int *v14; // [esp-4h] [ebp-2Ch]
  DWORD v15; // [esp+0h] [ebp-28h] BYREF
  BYTE *Mem; // [esp+4h] [ebp-24h]
  SC_LOCK ScLock; // [esp+8h] [ebp-20h]
  SC_HANDLE hSCObject; // [esp+Ch] [ebp-1Ch]
  SC_HANDLE hSCManager; // [esp+10h] [ebp-18h]
  BOOL (__stdcall *QueryServiceConfig2W)(SC_HANDLE, DWORD, LPBYTE, DWORD, LPDWORD); // [esp+14h] [ebp-14h]
  DWORD LastError; // [esp+18h] [ebp-10h]
  int **v22; // [esp+1Ch] [ebp-Ch]
  _DWORD *v23; // [esp+20h] [ebp-8h]
  char *v24; // [esp+24h] [ebp-4h] BYREF
  int savedregs; // [esp+28h] [ebp+0h] BYREF

  v22 = a3;
  v23 = a2;
  v24 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v14 = &savedregs;
  v13[1] = (unsigned int)&loc_409FDE;
  v13[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v13);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_409FF0, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v10 = System::__linkproc__ LStrToPChar(v24);
    hSCObject = OpenServiceA(hSCManager, v10, 1u);
    if ( hSCObject != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        ModuleHandleA_0 = GetModuleHandleA_0("advapi32.dll");
        QueryServiceConfig2W = (BOOL (__stdcall *)(SC_HANDLE, DWORD, LPBYTE, DWORD, LPDWORD))GetProcAddress_0(
                                                                                               ModuleHandleA_0,
                                                                                               "QueryServiceConfig2W");
        if ( QueryServiceConfig2W != nullptr
          && !QueryServiceConfig2W(hSCObject, 2, nullptr, 0, &v15)
          && GetLastError() == 122 )
        {
          Mem = (BYTE *)System::__linkproc__ GetMem(v15);
          if ( QueryServiceConfig2W(hSCObject, 2, Mem, v15, &v15) )
          {
            *v23 = *(_DWORD *)Mem;
            unknown_libname_54(v22, *((_DWORD *)Mem + 1));
            unknown_libname_54(a4, *((_DWORD *)Mem + 2));
            if ( *((_DWORD *)Mem + 3) != 0 )
            {
              *a5 = **((_DWORD **)Mem + 4);
              *a6 = *(_DWORD *)(*((_DWORD *)Mem + 4) + 4);
            }
            if ( *((_DWORD *)Mem + 3) >= 2u )
            {
              *a7 = *(_DWORD *)(*((_DWORD *)Mem + 4) + 8);
              *a8 = *(_DWORD *)(*((_DWORD *)Mem + 4) + 12);
            }
            if ( *((_DWORD *)Mem + 3) >= 3u )
            {
              *a9 = *(_DWORD *)(*((_DWORD *)Mem + 4) + 16);
              *a10 = *(_DWORD *)(*((_DWORD *)Mem + 4) + 20);
            }
          }
          else
          {
            LastError = GetLastError();
          }
          System::__linkproc__ FreeMem(Mem);
        }
        else
        {
          LastError = GetLastError();
        }
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hSCObject);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v13[0]);
  v14 = (int *)&loc_409FE5;
  System::__linkproc__ LStrClr(&v24);
  return LastError;
}

// Address: 0x40A01C
DWORD __fastcall sub_40A01C(char *a1, bool *a2)
{
  char *v2; // eax
  HMODULE ModuleHandleA_0; // eax
  unsigned int v5[2]; // [esp-Ch] [ebp-30h] BYREF
  int *v6; // [esp-4h] [ebp-28h]
  DWORD v7; // [esp+0h] [ebp-24h] BYREF
  int *Mem; // [esp+4h] [ebp-20h]
  SC_LOCK ScLock; // [esp+8h] [ebp-1Ch]
  SC_HANDLE hSCObject; // [esp+Ch] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+10h] [ebp-14h]
  BOOL (__stdcall *QueryServiceConfig2W)(SC_HANDLE, DWORD, LPBYTE, DWORD, LPDWORD); // [esp+14h] [ebp-10h]
  DWORD LastError; // [esp+18h] [ebp-Ch]
  bool *v14; // [esp+1Ch] [ebp-8h]
  char *v15; // [esp+20h] [ebp-4h] BYREF
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v14 = a2;
  v15 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_40A179;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_40A188, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v15);
    hSCObject = OpenServiceA(hSCManager, v2, 1u);
    if ( hSCObject != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        ModuleHandleA_0 = GetModuleHandleA_0("advapi32.dll");
        QueryServiceConfig2W = (BOOL (__stdcall *)(SC_HANDLE, DWORD, LPBYTE, DWORD, LPDWORD))GetProcAddress_0(
                                                                                               ModuleHandleA_0,
                                                                                               "QueryServiceConfig2W");
        if ( QueryServiceConfig2W != nullptr
          && !QueryServiceConfig2W(hSCObject, 4, nullptr, 0, &v7)
          && GetLastError() == 122 )
        {
          Mem = System::__linkproc__ GetMem(v7);
          if ( QueryServiceConfig2W(hSCObject, 4, (LPBYTE)Mem, v7, &v7) )
            *v14 = *Mem != 0;
          else
            LastError = GetLastError();
          System::__linkproc__ FreeMem(Mem);
        }
        else
        {
          LastError = GetLastError();
        }
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hSCObject);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_40A180;
  System::__linkproc__ LStrClr(&v15);
  return LastError;
}

// Address: 0x40A1B4
DWORD __fastcall sub_40A1B4(char *a1, bool *a2)
{
  char *v2; // eax
  HMODULE ModuleHandleA_0; // eax
  unsigned int v5[2]; // [esp-Ch] [ebp-30h] BYREF
  int *v6; // [esp-4h] [ebp-28h]
  DWORD v7; // [esp+0h] [ebp-24h] BYREF
  int *Mem; // [esp+4h] [ebp-20h]
  SC_LOCK ScLock; // [esp+8h] [ebp-1Ch]
  SC_HANDLE hSCObject; // [esp+Ch] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+10h] [ebp-14h]
  BOOL (__stdcall *QueryServiceConfig2W)(SC_HANDLE, DWORD, LPBYTE, DWORD, LPDWORD); // [esp+14h] [ebp-10h]
  DWORD LastError; // [esp+18h] [ebp-Ch]
  bool *v14; // [esp+1Ch] [ebp-8h]
  char *v15; // [esp+20h] [ebp-4h] BYREF
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v14 = a2;
  v15 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_40A311;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_40A320, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v15);
    hSCObject = OpenServiceA(hSCManager, v2, 1u);
    if ( hSCObject != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        ModuleHandleA_0 = GetModuleHandleA_0("advapi32.dll");
        QueryServiceConfig2W = (BOOL (__stdcall *)(SC_HANDLE, DWORD, LPBYTE, DWORD, LPDWORD))GetProcAddress_0(
                                                                                               ModuleHandleA_0,
                                                                                               "QueryServiceConfig2W");
        if ( QueryServiceConfig2W != nullptr
          && !QueryServiceConfig2W(hSCObject, 3, nullptr, 0, &v7)
          && GetLastError() == 122 )
        {
          Mem = System::__linkproc__ GetMem(v7);
          if ( QueryServiceConfig2W(hSCObject, 3, (LPBYTE)Mem, v7, &v7) )
            *v14 = *Mem != 0;
          else
            LastError = GetLastError();
          System::__linkproc__ FreeMem(Mem);
        }
        else
        {
          LastError = GetLastError();
        }
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hSCObject);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_40A318;
  System::__linkproc__ LStrClr(&v15);
  return LastError;
}

// Address: 0x40A34C
DWORD __fastcall sub_40A34C(char *a1, int a2)
{
  char *v2; // eax
  HMODULE ModuleHandleA_0; // eax
  unsigned int v5[2]; // [esp-Ch] [ebp-28h] BYREF
  int *v6; // [esp-4h] [ebp-20h]
  SC_LOCK ScLock; // [esp+0h] [ebp-1Ch]
  SC_HANDLE hSCObject; // [esp+4h] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+8h] [ebp-14h]
  BOOL (__stdcall *ChangeServiceConfig2A)(SC_HANDLE, DWORD, LPVOID); // [esp+Ch] [ebp-10h]
  DWORD LastError; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h] BYREF
  char *v13; // [esp+18h] [ebp-4h]
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  v12 = a2;
  v13 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  System::__linkproc__ LStrAddRef(v12);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_40A45A;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_40A468, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v13);
    hSCObject = OpenServiceA(hSCManager, v2, 2u);
    if ( hSCObject != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        ModuleHandleA_0 = GetModuleHandleA_0("advapi32.dll");
        ChangeServiceConfig2A = (BOOL (__stdcall *)(SC_HANDLE, DWORD, LPVOID))GetProcAddress_0(
                                                                                ModuleHandleA_0,
                                                                                "ChangeServiceConfig2A");
        if ( ChangeServiceConfig2A == nullptr || !ChangeServiceConfig2A(hSCObject, 1, &v12) )
          LastError = GetLastError();
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hSCObject);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_40A461;
  System::__linkproc__ LStrArrayClr((int)&v12, 2);
  return LastError;
}

// Address: 0x40A494
DWORD __fastcall sub_40A494(char *a1, DWORD a2)
{
  char *v2; // eax
  unsigned int v4[2]; // [esp-Ch] [ebp-24h] BYREF
  int *v5; // [esp-4h] [ebp-1Ch]
  SC_LOCK ScLock; // [esp+0h] [ebp-18h]
  SC_HANDLE hService; // [esp+4h] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+8h] [ebp-10h]
  DWORD LastError; // [esp+Ch] [ebp-Ch]
  DWORD dwStartType; // [esp+10h] [ebp-8h]
  char *v11; // [esp+14h] [ebp-4h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  dwStartType = a2;
  v11 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_40A57F;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_40A590, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v11);
    hService = OpenServiceA(hSCManager, v2, 2u);
    if ( hService != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        if ( !ChangeServiceConfigA(
                hService,
                0xFFFFFFFF,
                dwStartType,
                0xFFFFFFFF,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr) )
          LastError = GetLastError();
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_40A586;
  System::__linkproc__ LStrClr(&v11);
  return LastError;
}

// Address: 0x40A594
DWORD __fastcall sub_40A594(char *a1, void *a2, char *a3)
{
  char *v3; // eax
  char *v4; // eax
  char *v6; // [esp-14h] [ebp-30h]
  unsigned int v7[2]; // [esp-Ch] [ebp-28h] BYREF
  int *v8; // [esp-4h] [ebp-20h]
  SC_LOCK ScLock; // [esp+0h] [ebp-1Ch]
  SC_HANDLE hService; // [esp+4h] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+8h] [ebp-14h]
  DWORD LastError; // [esp+Ch] [ebp-10h]
  char *v13; // [esp+10h] [ebp-Ch] BYREF
  void *v14; // [esp+14h] [ebp-8h] BYREF
  char *v15; // [esp+18h] [ebp-4h]
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  v13 = a3;
  v14 = a2;
  v15 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  System::__linkproc__ LStrAddRef((int)v14);
  System::__linkproc__ LStrAddRef((int)v13);
  v8 = &savedregs;
  v7[1] = (unsigned int)&loc_40A6C4;
  v7[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v7);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_40A6D4, nullptr, 8u);
  if ( unknown_libname_58(&str___2[1], v14) == nullptr )
    System::__linkproc__ LStrCat3((volatile __int32 *)&v14, (char *)&str___[1], (char *)v14);
  if ( hSCManager != nullptr )
  {
    v3 = System::__linkproc__ LStrToPChar(v15);
    hService = OpenServiceA(hSCManager, v3, 2u);
    if ( hService != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        v6 = System::__linkproc__ LStrToPChar(v13);
        v4 = System::__linkproc__ LStrToPChar((char *)v14);
        if ( !ChangeServiceConfigA(
                hService,
                0xFFFFFFFF,
                0xFFFFFFFF,
                0xFFFFFFFF,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                v4,
                v6,
                nullptr) )
          LastError = GetLastError();
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v7[0]);
  v8 = (int *)&loc_40A6CB;
  System::__linkproc__ LStrArrayClr((int)&v13, 3);
  return LastError;
}

// Address: 0x40A6F0
DWORD __fastcall sub_40A6F0(char *a1, char *a2)
{
  char *v2; // eax
  char *v3; // eax
  unsigned int v5[2]; // [esp-Ch] [ebp-24h] BYREF
  int *v6; // [esp-4h] [ebp-1Ch]
  SC_LOCK ScLock; // [esp+0h] [ebp-18h]
  SC_HANDLE hService; // [esp+4h] [ebp-14h]
  SC_HANDLE hSCManager; // [esp+8h] [ebp-10h]
  DWORD LastError; // [esp+Ch] [ebp-Ch]
  char *v11; // [esp+10h] [ebp-8h] BYREF
  char *v12; // [esp+14h] [ebp-4h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v11 = a2;
  v12 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  System::__linkproc__ LStrAddRef((int)v11);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_40A7ED;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_40A7FC, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v12);
    hService = OpenServiceA(hSCManager, v2, 2u);
    if ( hService != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        v3 = System::__linkproc__ LStrToPChar(v11);
        if ( !ChangeServiceConfigA(
                hService,
                0xFFFFFFFF,
                0xFFFFFFFF,
                0xFFFFFFFF,
                v3,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr) )
          LastError = GetLastError();
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_40A7F4;
  System::__linkproc__ LStrArrayClr((int)&v11, 2);
  return LastError;
}

// Address: 0x40A800
DWORD __fastcall sub_40A800(char *a1, int a2, char *a3, char *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  char *v10; // eax
  HMODULE ModuleHandleA_0; // eax
  DWORD v13; // [esp-10h] [ebp-60h]
  unsigned int v14[2]; // [esp-Ch] [ebp-5Ch] BYREF
  int *v15; // [esp-4h] [ebp-54h]
  _DWORD v16[6]; // [esp+0h] [ebp-50h] BYREF
  _DWORD v17[5]; // [esp+18h] [ebp-38h] BYREF
  DWORD dwDesiredAccess; // [esp+2Ch] [ebp-24h]
  SC_LOCK ScLock; // [esp+30h] [ebp-20h]
  SC_HANDLE hSCObject; // [esp+34h] [ebp-1Ch]
  SC_HANDLE hSCManager; // [esp+38h] [ebp-18h]
  BOOL (__stdcall *ChangeServiceConfig2A)(SC_HANDLE, DWORD, LPVOID); // [esp+3Ch] [ebp-14h]
  DWORD LastError; // [esp+40h] [ebp-10h]
  char *v24; // [esp+44h] [ebp-Ch] BYREF
  int v25; // [esp+48h] [ebp-8h]
  char *v26; // [esp+4Ch] [ebp-4h] BYREF
  int savedregs; // [esp+50h] [ebp+0h] BYREF

  v24 = a3;
  v25 = a2;
  v26 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  System::__linkproc__ LStrAddRef((int)v24);
  System::__linkproc__ LStrAddRef((int)a4);
  v15 = &savedregs;
  v14[1] = (unsigned int)&loc_40A995;
  v14[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v14);
  LastError = 0;
  if ( a5 == 1 || a7 == 1 || a9 == 1 )
    dwDesiredAccess = 18;
  else
    dwDesiredAccess = 2;
  v16[0] = a5;
  v16[1] = a6;
  v16[2] = a7;
  v16[3] = a8;
  v16[4] = a9;
  v16[5] = a10;
  v17[0] = v25;
  v17[1] = System::__linkproc__ LStrToPChar(v24);
  v17[2] = System::__linkproc__ LStrToPChar(a4);
  v17[3] = 3;
  v17[4] = v16;
  hSCManager = OpenSCManagerA(byte_40A9A8, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v13 = dwDesiredAccess;
    v10 = System::__linkproc__ LStrToPChar(v26);
    hSCObject = OpenServiceA(hSCManager, v10, v13);
    if ( hSCObject != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        ModuleHandleA_0 = GetModuleHandleA_0("advapi32.dll");
        ChangeServiceConfig2A = (BOOL (__stdcall *)(SC_HANDLE, DWORD, LPVOID))GetProcAddress_0(
                                                                                ModuleHandleA_0,
                                                                                "ChangeServiceConfig2A");
        if ( ChangeServiceConfig2A == nullptr || !ChangeServiceConfig2A(hSCObject, 2, v17) )
          LastError = GetLastError();
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hSCObject);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v14[0]);
  v15 = (int *)&loc_40A99C;
  System::__linkproc__ LStrClr(&v24);
  System::__linkproc__ LStrClr(&v26);
  System::__linkproc__ LStrClr(&a4);
  return LastError;
}

// Address: 0x40A9D4
DWORD __fastcall sub_40A9D4(char *a1, unsigned __int8 a2)
{
  char *v2; // eax
  HMODULE ModuleHandleA_0; // eax
  unsigned int v5[2]; // [esp-Ch] [ebp-2Ch] BYREF
  int *v6; // [esp-4h] [ebp-24h]
  int v7; // [esp+0h] [ebp-20h] BYREF
  SC_LOCK ScLock; // [esp+4h] [ebp-1Ch]
  SC_HANDLE hSCObject; // [esp+8h] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+Ch] [ebp-14h]
  BOOL (__stdcall *ChangeServiceConfig2A)(SC_HANDLE, DWORD, LPVOID); // [esp+10h] [ebp-10h]
  DWORD LastError; // [esp+14h] [ebp-Ch]
  unsigned __int8 v13; // [esp+1Bh] [ebp-5h]
  char *v14; // [esp+1Ch] [ebp-4h] BYREF
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v13 = a2;
  v14 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_40AADD;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  LastError = 0;
  v7 = v13;
  hSCManager = OpenSCManagerA(byte_40AAEC, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v14);
    hSCObject = OpenServiceA(hSCManager, v2, 2u);
    if ( hSCObject != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        ModuleHandleA_0 = GetModuleHandleA_0("advapi32.dll");
        ChangeServiceConfig2A = (BOOL (__stdcall *)(SC_HANDLE, DWORD, LPVOID))GetProcAddress_0(
                                                                                ModuleHandleA_0,
                                                                                "ChangeServiceConfig2A");
        if ( ChangeServiceConfig2A == nullptr || !ChangeServiceConfig2A(hSCObject, 4, &v7) )
          LastError = GetLastError();
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hSCObject);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_40AAE4;
  System::__linkproc__ LStrClr(&v14);
  return LastError;
}

// Address: 0x40AB18
DWORD __fastcall sub_40AB18(char *a1, unsigned __int8 a2)
{
  char *v2; // eax
  HMODULE ModuleHandleA_0; // eax
  unsigned int v5[2]; // [esp-Ch] [ebp-2Ch] BYREF
  int *v6; // [esp-4h] [ebp-24h]
  int v7; // [esp+0h] [ebp-20h] BYREF
  SC_LOCK ScLock; // [esp+4h] [ebp-1Ch]
  SC_HANDLE hSCObject; // [esp+8h] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+Ch] [ebp-14h]
  BOOL (__stdcall *ChangeServiceConfig2A)(SC_HANDLE, DWORD, LPVOID); // [esp+10h] [ebp-10h]
  DWORD LastError; // [esp+14h] [ebp-Ch]
  unsigned __int8 v13; // [esp+1Bh] [ebp-5h]
  char *v14; // [esp+1Ch] [ebp-4h] BYREF
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v13 = a2;
  v14 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_40AC21;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  LastError = 0;
  v7 = v13;
  hSCManager = OpenSCManagerA(byte_40AC30, nullptr, 8u);
  if ( hSCManager != nullptr )
  {
    v2 = System::__linkproc__ LStrToPChar(v14);
    hSCObject = OpenServiceA(hSCManager, v2, 2u);
    if ( hSCObject != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        ModuleHandleA_0 = GetModuleHandleA_0("advapi32.dll");
        ChangeServiceConfig2A = (BOOL (__stdcall *)(SC_HANDLE, DWORD, LPVOID))GetProcAddress_0(
                                                                                ModuleHandleA_0,
                                                                                "ChangeServiceConfig2A");
        if ( ChangeServiceConfig2A == nullptr || !ChangeServiceConfig2A(hSCObject, 3, &v7) )
          LastError = GetLastError();
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hSCObject);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_40AC28;
  System::__linkproc__ LStrClr(&v14);
  return LastError;
}

// Address: 0x40AC5C
DWORD __fastcall sub_40AC5C(char *a1, bool *a2)
{
  unsigned int v3[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v4; // [esp-4h] [ebp-14h]
  DWORD v5; // [esp+0h] [ebp-10h] BYREF
  DWORD v6; // [esp+4h] [ebp-Ch]
  bool *v7; // [esp+8h] [ebp-8h]
  char *v8; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v7 = a2;
  v8 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v4 = &savedregs;
  v3[1] = (unsigned int)&loc_40ACBA;
  v3[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v3);
  v6 = sub_40981C(v8, &v5);
  *v7 = v6 == 0 && v5 == 4;
  __writefsdword(0, v3[0]);
  v4 = (int *)&loc_40ACC1;
  System::__linkproc__ LStrClr(&v8);
  return v6;
}

// Address: 0x40ACC8
DWORD __fastcall sub_40ACC8(char *a1, bool *a2)
{
  unsigned int v3[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v4; // [esp-4h] [ebp-14h]
  DWORD v5; // [esp+0h] [ebp-10h] BYREF
  DWORD v6; // [esp+4h] [ebp-Ch]
  bool *v7; // [esp+8h] [ebp-8h]
  char *v8; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v7 = a2;
  v8 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v4 = &savedregs;
  v3[1] = (unsigned int)&loc_40AD26;
  v3[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v3);
  v6 = sub_40981C(v8, &v5);
  *v7 = v6 == 0 && v5 == 1;
  __writefsdword(0, v3[0]);
  v4 = (int *)&loc_40AD2D;
  System::__linkproc__ LStrClr(&v8);
  return v6;
}

// Address: 0x40AD34
DWORD __fastcall sub_40AD34(char *a1, bool *a2)
{
  unsigned int v3[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v4; // [esp-4h] [ebp-14h]
  DWORD v5; // [esp+0h] [ebp-10h] BYREF
  DWORD v6; // [esp+4h] [ebp-Ch]
  bool *v7; // [esp+8h] [ebp-8h]
  char *v8; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v7 = a2;
  v8 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v4 = &savedregs;
  v3[1] = (unsigned int)&loc_40AD92;
  v3[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v3);
  v6 = sub_40981C(v8, &v5);
  *v7 = v6 == 0 && v5 == 7;
  __writefsdword(0, v3[0]);
  v4 = (int *)&loc_40AD99;
  System::__linkproc__ LStrClr(&v8);
  return v6;
}

// Address: 0x40ADA0
DWORD __fastcall sub_40ADA0(char *a1, int a2, int a3)
{
  unsigned int v4[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v5; // [esp-4h] [ebp-14h]
  DWORD v6; // [esp+0h] [ebp-10h]
  int v7; // [esp+4h] [ebp-Ch]
  int v8; // [esp+8h] [ebp-8h] BYREF
  char *v9; // [esp+Ch] [ebp-4h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v7 = a3;
  v8 = a2;
  v9 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  System::__linkproc__ LStrAddRef(v8);
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_40AE0F;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  v6 = sub_409318(v9, 0, v7);
  if ( v6 == 0 )
    v6 = sub_4091FC(v9, v8, v7);
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_40AE16;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return v6;
}

// Address: 0x40AE2C
_DWORD *__fastcall sub_40AE2C(char *a1, volatile __int32 *a2)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-18h] BYREF
  void *v6; // [esp-8h] [ebp-14h]
  int *v7; // [esp-4h] [ebp-10h]
  int *v8; // [esp+0h] [ebp-Ch] BYREF
  volatile __int32 *v9; // [esp+4h] [ebp-8h]
  char *v10; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v8 = nullptr;
  v9 = a2;
  v10 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v7 = &savedregs;
  v6 = &loc_40AEFA;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)&ExceptionList);
  while ( unknown_libname_58(off_40D2D0, v10) != nullptr )
  {
    v2 = unknown_libname_58(off_40D2D0, v10);
    System::__linkproc__ LStrCopy((int)v10, 1, (int)(v2 - 1), &v8);
    sub_4039E4(v9, 3);
    v3 = unknown_libname_58(off_40D2D0, v10);
    System::__linkproc__ LStrDelete(&v10, 1, (int)v3);
  }
  sub_4039E4(v9, 4);
  __writefsdword(0, (unsigned int)v6);
  v8 = (int *)&loc_40AF01;
  System::__linkproc__ LStrClr(&v8);
  return System::__linkproc__ LStrClr(&v10);
}

// Address: 0x40AF14
DWORD __fastcall sub_40AF14(char *a1, char *a2, DWORD a3, DWORD dwStartType, char *a5, char *a6, char *a7, char *a8)
{
  char *v8; // eax
  char *v10; // [esp-38h] [ebp-64h]
  DWORD v11; // [esp-30h] [ebp-5Ch]
  DWORD v12; // [esp-2Ch] [ebp-58h]
  char *v13; // [esp-24h] [ebp-50h]
  const CHAR *v14; // [esp-18h] [ebp-44h]
  const CHAR *v15; // [esp-14h] [ebp-40h]
  const CHAR *v16; // [esp-10h] [ebp-3Ch]
  unsigned int v17[2]; // [esp-Ch] [ebp-38h] BYREF
  int *v18; // [esp-4h] [ebp-30h]
  char *v19; // [esp+4h] [ebp-28h] BYREF
  LPCSTR lpPassword; // [esp+8h] [ebp-24h]
  LPCSTR lpServiceStartName; // [esp+Ch] [ebp-20h]
  LPCSTR lpDependencies; // [esp+10h] [ebp-1Ch]
  SC_HANDLE hSCObject; // [esp+14h] [ebp-18h]
  SC_HANDLE hSCManager; // [esp+18h] [ebp-14h]
  DWORD LastError; // [esp+1Ch] [ebp-10h]
  DWORD dwServiceType; // [esp+20h] [ebp-Ch]
  char *v27; // [esp+24h] [ebp-8h] BYREF
  char *v28; // [esp+28h] [ebp-4h]
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF

  v19 = nullptr;
  dwServiceType = a3;
  v27 = a2;
  v28 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  System::__linkproc__ LStrAddRef((int)v27);
  System::__linkproc__ LStrAddRef((int)a5);
  System::__linkproc__ LStrAddRef((int)a6);
  System::__linkproc__ LStrAddRef((int)a7);
  System::__linkproc__ LStrAddRef((int)a8);
  v18 = &savedregs;
  v17[1] = (unsigned int)&loc_40B07D;
  v17[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v17);
  LastError = 0;
  if ( a6 != nullptr )
  {
    sub_40AE2C(a6, (volatile __int32 *)&v19);
    lpDependencies = System::__linkproc__ LStrToPChar(v19);
  }
  else
  {
    lpDependencies = nullptr;
  }
  if ( a7 != nullptr )
    lpServiceStartName = System::__linkproc__ LStrToPChar(a7);
  else
    lpServiceStartName = nullptr;
  if ( a8 != nullptr )
    lpPassword = System::__linkproc__ LStrToPChar(a8);
  else
    lpPassword = nullptr;
  hSCManager = OpenSCManagerA(byte_40B090, nullptr, 0xF003Fu);
  if ( hSCManager != nullptr )
  {
    v16 = lpPassword;
    v15 = lpServiceStartName;
    v14 = lpDependencies;
    v13 = System::__linkproc__ LStrToPChar(a5);
    v12 = dwStartType;
    v11 = dwServiceType;
    v10 = System::__linkproc__ LStrToPChar(v27);
    v8 = System::__linkproc__ LStrToPChar(v28);
    hSCObject = CreateServiceA(hSCManager, v8, v10, 0x10014u, v11, v12, 1u, v13, nullptr, nullptr, v14, v15, v16);
    if ( hSCObject != nullptr )
      CloseServiceHandle(hSCObject);
    else
      LastError = GetLastError();
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v17[0]);
  v18 = (int *)&loc_40B084;
  System::__linkproc__ LStrClr(&v19);
  System::__linkproc__ LStrArrayClr((int)&v27, 2);
  System::__linkproc__ LStrArrayClr((int)&a8, 4);
  return LastError;
}

// Address: 0x40B094
DWORD __fastcall sub_40B094(char *a1)
{
  char *v1; // eax
  BOOL v2; // eax
  unsigned int v4[2]; // [esp-Ch] [ebp-24h] BYREF
  int *v5; // [esp-4h] [ebp-1Ch]
  bool v6; // [esp+3h] [ebp-15h]
  SC_LOCK ScLock; // [esp+4h] [ebp-14h]
  SC_HANDLE hService; // [esp+8h] [ebp-10h]
  SC_HANDLE hSCManager; // [esp+Ch] [ebp-Ch]
  DWORD LastError; // [esp+10h] [ebp-8h]
  char *v11; // [esp+14h] [ebp-4h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v11 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v5 = &savedregs;
  v4[1] = (unsigned int)&loc_40B177;
  v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v4);
  LastError = 0;
  hSCManager = OpenSCManagerA(byte_40B188, nullptr, 0xF003Fu);
  if ( hSCManager != nullptr )
  {
    v1 = System::__linkproc__ LStrToPChar(v11);
    hService = OpenServiceA(hSCManager, v1, 0xF01FFu);
    if ( hService != nullptr )
    {
      ScLock = LockServiceDatabase(hSCManager);
      if ( ScLock != nullptr )
      {
        v2 = DeleteService(hService);
        v6 = v2;
        if ( !v2 )
          LastError = GetLastError();
        UnlockServiceDatabase(ScLock);
      }
      else
      {
        LastError = GetLastError();
      }
      CloseServiceHandle(hService);
    }
    else
    {
      LastError = GetLastError();
    }
    CloseServiceHandle(hSCManager);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v4[0]);
  v5 = (int *)&loc_40B17E;
  System::__linkproc__ LStrClr(&v11);
  return LastError;
}

// Address: 0x40B18C
_DWORD *__fastcall sub_40B18C(DWORD a1, int **a2)
{
  return Sysutils::SysErrorMessage(a1, a2);
}

// Address: 0x40B1A8
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int unknown_libname_106()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_40B1ED;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  if ( ++dword_40E870 == 0 )
  {
    System::__linkproc__ LStrClr(&off_40D2D0);
    System::__linkproc__ LStrClr(&off_40D2CC);
    System::__linkproc__ LStrClr(&off_40D2C8);
  }
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x40B1F8
void sub_40B1F8()
{
  --dword_40E870;
}

// Address: 0x40B200
// attributes: thunk
NTSTATUS __stdcall LsaOpenPolicy(
        PLSA_UNICODE_STRING SystemName,
        PLSA_OBJECT_ATTRIBUTES ObjectAttributes,
        ACCESS_MASK DesiredAccess,
        PLSA_HANDLE PolicyHandle)
{
  return __imp_LsaOpenPolicy(SystemName, ObjectAttributes, DesiredAccess, PolicyHandle);
}

// Address: 0x40B208
// attributes: thunk
NTSTATUS __stdcall LsaAddAccountRights(
        LSA_HANDLE PolicyHandle,
        PSID AccountSid,
        PLSA_UNICODE_STRING UserRights,
        ULONG CountOfRights)
{
  return __imp_LsaAddAccountRights(PolicyHandle, AccountSid, UserRights, CountOfRights);
}

// Address: 0x40B210
// attributes: thunk
NTSTATUS __stdcall LsaRemoveAccountRights(
        LSA_HANDLE PolicyHandle,
        PSID AccountSid,
        BOOLEAN AllRights,
        PLSA_UNICODE_STRING UserRights,
        ULONG CountOfRights)
{
  return __imp_LsaRemoveAccountRights(PolicyHandle, AccountSid, AllRights, UserRights, CountOfRights);
}

// Address: 0x40B218
// attributes: thunk
NTSTATUS __stdcall LsaClose(LSA_HANDLE ObjectHandle)
{
  return __imp_LsaClose(ObjectHandle);
}

// Address: 0x40B220
DWORD __fastcall sub_40B220(char *a1, int **a2)
{
  char *v2; // eax
  int *v3; // eax
  char *v4; // eax
  int *v6; // [esp-20h] [ebp-3Ch]
  char *v7; // [esp-18h] [ebp-34h]
  unsigned int v8[2]; // [esp-Ch] [ebp-28h] BYREF
  int *v9; // [esp-4h] [ebp-20h]
  enum _SID_NAME_USE peUse; // [esp+0h] [ebp-1Ch] BYREF
  int v11; // [esp+4h] [ebp-18h] BYREF
  DWORD cbSid; // [esp+8h] [ebp-14h] BYREF
  DWORD cbReferencedDomainName; // [esp+Ch] [ebp-10h] BYREF
  DWORD LastError_0; // [esp+10h] [ebp-Ch]
  int **v15; // [esp+14h] [ebp-8h]
  char *v16; // [esp+18h] [ebp-4h]
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  v11 = 0;
  v15 = a2;
  v16 = a1;
  v9 = &savedregs;
  v8[1] = (unsigned int)&loc_40B2FC;
  v8[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v8);
  LastError_0 = 0;
  cbSid = 0;
  cbReferencedDomainName = 0;
  v2 = System::__linkproc__ LStrToPChar(a1);
  if ( LookupAccountNameA(nullptr, v2, nullptr, &cbSid, nullptr, &cbReferencedDomainName, &peUse)
    || GetLastError_0() != 122 )
  {
    LastError_0 = GetLastError_0();
  }
  else
  {
    System::__linkproc__ LStrSetLength((char **)&v11, cbReferencedDomainName);
    v3 = Sysutils::AllocMem(cbSid);
    *v15 = v3;
    v7 = System::__linkproc__ LStrToPChar((char *)v11);
    v6 = *v15;
    v4 = System::__linkproc__ LStrToPChar(v16);
    if ( !LookupAccountNameA(nullptr, v4, v6, &cbSid, v7, &cbReferencedDomainName, &peUse) )
    {
      LastError_0 = GetLastError_0();
      System::__linkproc__ FreeMem(*v15);
      *v15 = nullptr;
    }
  }
  __writefsdword(0, v8[0]);
  v9 = (int *)&loc_40B303;
  System::__linkproc__ LStrClr(&v11);
  return LastError_0;
}

// Address: 0x40B30C
DWORD __fastcall sub_40B30C(char *a1, int a2)
{
  int v2; // eax
  int v3; // eax
  unsigned int v5[2]; // [esp-18h] [ebp-5Ch] BYREF
  int *v6; // [esp-10h] [ebp-54h]
  unsigned int v7[2]; // [esp-Ch] [ebp-50h] BYREF
  int *v8; // [esp-4h] [ebp-48h]
  int v9; // [esp+0h] [ebp-44h] BYREF
  struct _LSA_OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-40h] BYREF
  NTSTATUS v11; // [esp+1Ch] [ebp-28h]
  int v12; // [esp+20h] [ebp-24h]
  LPWSTR lpWideCharStr; // [esp+24h] [ebp-20h]
  struct _LSA_UNICODE_STRING UserRights; // [esp+28h] [ebp-1Ch] BYREF
  PVOID PolicyHandle; // [esp+30h] [ebp-14h] BYREF
  PSID AccountSid; // [esp+34h] [ebp-10h] BYREF
  DWORD v17; // [esp+38h] [ebp-Ch]
  int v18; // [esp+3Ch] [ebp-8h] BYREF
  char *v19; // [esp+40h] [ebp-4h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF

  v9 = 0;
  v18 = a2;
  v19 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  System::__linkproc__ LStrAddRef(v18);
  v8 = &savedregs;
  v7[1] = (unsigned int)&loc_40B45E;
  v7[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v7);
  v17 = 0;
  v2 = unknown_libname_56(v18);
  lpWideCharStr = (LPWSTR)System::__linkproc__ GetMem(2 * v2 + 1);
  v3 = unknown_libname_56(v18);
  System::StringToWideChar((char *)v18, lpWideCharStr, 2 * v3 + 1);
  Windows::ZeroMemory((char *)&ObjectAttributes, 24);
  unknown_libname_59((OLECHAR **)&v9, lpWideCharStr);
  v12 = System::__linkproc__ WStrLen(v9);
  if ( v12 != 0 )
  {
    v17 = sub_40B220(v19, (int **)&AccountSid);
    if ( v17 == 0 )
    {
      UserRights.Length = 2 * v12;
      UserRights.MaximumLength = 2 * v12 + 2;
      UserRights.Buffer = lpWideCharStr;
      v11 = LsaOpenPolicy(nullptr, &ObjectAttributes, 0x810u, &PolicyHandle);
      v6 = &savedregs;
      v5[1] = (unsigned int)&loc_40B42C;
      v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
      __writefsdword(0, (unsigned int)v5);
      if ( v11 != 0 )
        v17 = v11;
      else
        v17 = LsaAddAccountRights(PolicyHandle, AccountSid, &UserRights, 1u);
      __writefsdword(0, v5[0]);
      v6 = (int *)&loc_40B433;
      LsaClose(PolicyHandle);
    }
  }
  System::__linkproc__ FreeMem(lpWideCharStr);
  __writefsdword(0, v7[0]);
  v8 = (int *)&loc_40B465;
  System::__linkproc__ WStrClr((OLECHAR **)&v9);
  System::__linkproc__ LStrArrayClr((int)&v18, 2);
  return v17;
}

// Address: 0x40B46C
DWORD __fastcall sub_40B46C(char *a1, int a2)
{
  int v2; // eax
  int v3; // eax
  unsigned int v5[2]; // [esp-18h] [ebp-5Ch] BYREF
  int *v6; // [esp-10h] [ebp-54h]
  unsigned int v7[2]; // [esp-Ch] [ebp-50h] BYREF
  int *v8; // [esp-4h] [ebp-48h]
  int v9; // [esp+0h] [ebp-44h] BYREF
  struct _LSA_OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-40h] BYREF
  NTSTATUS v11; // [esp+1Ch] [ebp-28h]
  int v12; // [esp+20h] [ebp-24h]
  LPWSTR lpWideCharStr; // [esp+24h] [ebp-20h]
  struct _LSA_UNICODE_STRING UserRights; // [esp+28h] [ebp-1Ch] BYREF
  PVOID PolicyHandle; // [esp+30h] [ebp-14h] BYREF
  PSID AccountSid; // [esp+34h] [ebp-10h] BYREF
  DWORD v17; // [esp+38h] [ebp-Ch]
  int v18; // [esp+3Ch] [ebp-8h] BYREF
  char *v19; // [esp+40h] [ebp-4h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF

  v9 = 0;
  v18 = a2;
  v19 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  System::__linkproc__ LStrAddRef(v18);
  v8 = &savedregs;
  v7[1] = (unsigned int)&loc_40B5C0;
  v7[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v7);
  v17 = 0;
  v2 = unknown_libname_56(v18);
  lpWideCharStr = (LPWSTR)System::__linkproc__ GetMem(2 * v2 + 1);
  v3 = unknown_libname_56(v18);
  System::StringToWideChar((char *)v18, lpWideCharStr, 2 * v3 + 1);
  Windows::ZeroMemory((char *)&ObjectAttributes, 24);
  unknown_libname_59((OLECHAR **)&v9, lpWideCharStr);
  v12 = System::__linkproc__ WStrLen(v9);
  if ( v12 != 0 )
  {
    v17 = sub_40B220(v19, (int **)&AccountSid);
    if ( v17 == 0 )
    {
      UserRights.Length = 2 * v12;
      UserRights.MaximumLength = 2 * v12 + 2;
      UserRights.Buffer = lpWideCharStr;
      v11 = LsaOpenPolicy(nullptr, &ObjectAttributes, 0x810u, &PolicyHandle);
      v6 = &savedregs;
      v5[1] = (unsigned int)&loc_40B58E;
      v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
      __writefsdword(0, (unsigned int)v5);
      if ( v11 != 0 )
        v17 = v11;
      else
        v17 = LsaRemoveAccountRights(PolicyHandle, AccountSid, 0, &UserRights, 1u);
      __writefsdword(0, v5[0]);
      v6 = (int *)&loc_40B595;
      LsaClose(PolicyHandle);
    }
  }
  System::__linkproc__ FreeMem(lpWideCharStr);
  __writefsdword(0, v7[0]);
  v8 = (int *)&loc_40B5C7;
  System::__linkproc__ WStrClr((OLECHAR **)&v9);
  System::__linkproc__ LStrArrayClr((int)&v18, 2);
  return v17;
}

// Address: 0x40B5D0
DWORD __fastcall sub_40B5D0(char *a1)
{
  HANDLE CurrentProcess; // eax
  char *v2; // eax
  unsigned int v4[2]; // [esp-18h] [ebp-48h] BYREF
  int *v5; // [esp-10h] [ebp-40h]
  unsigned int v6[2]; // [esp-Ch] [ebp-3Ch] BYREF
  int *v7; // [esp-4h] [ebp-34h]
  struct _TOKEN_PRIVILEGES PreviousState; // [esp+0h] [ebp-30h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [esp+10h] [ebp-20h] BYREF
  DWORD ReturnLength; // [esp+20h] [ebp-10h] BYREF
  HANDLE TokenHandle; // [esp+24h] [ebp-Ch] BYREF
  DWORD LastError; // [esp+28h] [ebp-8h]
  char *v13; // [esp+2Ch] [ebp-4h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v13 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40B6AC;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  LastError = 0;
  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 0x28u, &TokenHandle) )
  {
    v5 = &savedregs;
    v4[1] = (unsigned int)&loc_40B687;
    v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
    __writefsdword(0, (unsigned int)v4);
    v2 = System::__linkproc__ LStrToPChar(v13);
    if ( !LookupPrivilegeValueA(nullptr, v2, &NewState.Privileges[0].Luid)
      || (NewState.PrivilegeCount = 1,
          NewState.Privileges[0].Attributes = 2,
          !AdjustTokenPrivileges(TokenHandle, false, &NewState, 0x10u, &PreviousState, &ReturnLength)) )
    {
      LastError = GetLastError();
    }
    __writefsdword(0, v4[0]);
    v5 = (int *)&loc_40B696;
    CloseHandle(TokenHandle);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40B6B3;
  System::__linkproc__ LStrClr(&v13);
  return LastError;
}

// Address: 0x40B6BC
DWORD __fastcall sub_40B6BC(char *a1)
{
  HANDLE CurrentProcess; // eax
  char *v2; // eax
  unsigned int v4[2]; // [esp-18h] [ebp-48h] BYREF
  int *v5; // [esp-10h] [ebp-40h]
  unsigned int v6[2]; // [esp-Ch] [ebp-3Ch] BYREF
  int *v7; // [esp-4h] [ebp-34h]
  struct _TOKEN_PRIVILEGES PreviousState; // [esp+0h] [ebp-30h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [esp+10h] [ebp-20h] BYREF
  DWORD ReturnLength; // [esp+20h] [ebp-10h] BYREF
  HANDLE TokenHandle; // [esp+24h] [ebp-Ch] BYREF
  DWORD LastError; // [esp+28h] [ebp-8h]
  char *v13; // [esp+2Ch] [ebp-4h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v13 = a1;
  System::__linkproc__ LStrAddRef((int)a1);
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40B798;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  LastError = 0;
  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 0x28u, &TokenHandle) )
  {
    v5 = &savedregs;
    v4[1] = (unsigned int)&loc_40B773;
    v4[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
    __writefsdword(0, (unsigned int)v4);
    v2 = System::__linkproc__ LStrToPChar(v13);
    if ( !LookupPrivilegeValueA(nullptr, v2, &NewState.Privileges[0].Luid)
      || (NewState.PrivilegeCount = 1,
          NewState.Privileges[0].Attributes = 2,
          !AdjustTokenPrivileges(TokenHandle, false, &NewState, 0x10u, &PreviousState, &ReturnLength)) )
    {
      LastError = GetLastError();
    }
    __writefsdword(0, v4[0]);
    v5 = (int *)&loc_40B782;
    CloseHandle(TokenHandle);
  }
  else
  {
    LastError = GetLastError();
  }
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40B79F;
  System::__linkproc__ LStrClr(&v13);
  return LastError;
}

// Address: 0x40B7A8
int sub_40B7A8()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_40B7CD;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  ++dword_40E874;
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x40B7D8
void sub_40B7D8()
{
  --dword_40E874;
}

// Address: 0x40B7E0
volatile __int32 *__fastcall sub_40B7E0(char a1, volatile __int32 *a2)
{
  if ( a1 != 0 )
    return System::__linkproc__ LStrAsg(a2, (__int32)&str_1_1[1]);
  else
    return System::__linkproc__ LStrAsg(a2, (__int32)&str_0_1[1]);
}

// Address: 0x40B82C
char __fastcall sub_40B82C(int a1)
{
  char v1; // zf
  unsigned int v3[2]; // [esp-Ch] [ebp-14h] BYREF
  int *v4; // [esp-4h] [ebp-Ch]
  char v5; // [esp+3h] [ebp-5h]
  int v6; // [esp+4h] [ebp-4h] BYREF
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v6 = a1;
  System::__linkproc__ LStrAddRef(a1);
  v4 = &savedregs;
  v3[1] = (unsigned int)&loc_40B872;
  v3[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v3);
  System::__linkproc__ LStrCmp(v6, &str_1_2[1]._top);
  v5 = v1;
  __writefsdword(0, v3[0]);
  v4 = (int *)&loc_40B879;
  System::__linkproc__ LStrClr(&v6);
  return v5;
}

// Address: 0x40B88C
int __cdecl InstallService(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  DWORD v5; // eax
  unsigned int v7[2]; // [esp-Ch] [ebp-38h] BYREF
  int *v8; // [esp-4h] [ebp-30h]
  int v9; // [esp+0h] [ebp-2Ch] BYREF
  int v10; // [esp+4h] [ebp-28h] BYREF
  int v11; // [esp+8h] [ebp-24h] BYREF
  int v12; // [esp+Ch] [ebp-20h] BYREF
  int v13; // [esp+10h] [ebp-1Ch] BYREF
  int v14; // [esp+14h] [ebp-18h] BYREF
  int v15; // [esp+18h] [ebp-14h] BYREF
  DWORD dwStartType; // [esp+1Ch] [ebp-10h]
  DWORD v17; // [esp+20h] [ebp-Ch]
  char *v18; // [esp+24h] [ebp-8h] BYREF
  char *v19; // [esp+28h] [ebp-4h] BYREF
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF

  v9 = v4;
  v8 = &savedregs;
  v7[1] = (unsigned int)&loc_40B96C;
  v7[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v7);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v19);
  sub_404EC8((int **)&v18);
  sub_404EC8((int **)&v10);
  v17 = Sysutils::StrToInt(v10);
  sub_404EC8((int **)&v9);
  dwStartType = Sysutils::StrToInt(v9);
  sub_404EC8((int **)&v15);
  sub_404EC8((int **)&v14);
  sub_404EC8((int **)&v13);
  sub_404EC8((int **)&v12);
  v5 = sub_40AF14(v19, v18, v17, dwStartType, (char *)v15, (char *)v14, (char *)v13, (char *)v12);
  Sysutils::IntToStr(v5, (int)&v11);
  sub_404F0C(v11);
  __writefsdword(0, v7[0]);
  v8 = (int *)&loc_40B973;
  System::__linkproc__ LStrArrayClr((int)&v9, 7);
  return System::__linkproc__ LStrArrayClr((int)&v18, 2);
}

// Address: 0x40B978
int __cdecl RemoveService(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-14h] BYREF
  int *v7; // [esp-4h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-8h] BYREF
  char *v9; // [esp+4h] [ebp-4h] BYREF
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40B9DA;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v9);
  v4 = sub_40B094(v9);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40B9E1;
  return System::__linkproc__ LStrArrayClr((int)&v8, 2);
}

// Address: 0x40B9E8
int __cdecl StartService(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-20h] BYREF
  int *v7; // [esp-4h] [ebp-18h]
  int v8; // [esp+0h] [ebp-14h] BYREF
  int v9; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-Ch]
  int *v11; // [esp+Ch] [ebp-8h] BYREF
  char *v12; // [esp+10h] [ebp-4h] BYREF
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BA7B;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v12);
  sub_404EC8(&v11);
  sub_404EC8((int **)&v8);
  v10 = Sysutils::StrToInt(v8);
  v4 = sub_4091FC(v12, (int)v11, v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BA82;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrArrayClr((int)&v11, 2);
}

// Address: 0x40BA88
_DWORD *__cdecl StopService(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-24h] BYREF
  int *v7; // [esp-4h] [ebp-1Ch]
  int v8; // [esp+0h] [ebp-18h] BYREF
  int *v9; // [esp+4h] [ebp-14h] BYREF
  int v10; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-Ch]
  char v12; // [esp+13h] [ebp-5h]
  char *v13; // [esp+14h] [ebp-4h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v11 = 0;
  v10 = 0;
  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BB22;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v13);
  sub_404EC8(&v9);
  v12 = sub_40B82C((int)v9);
  sub_404EC8((int **)&v8);
  v11 = Sysutils::StrToInt(v8);
  v4 = sub_409318(v13, v12, v11);
  Sysutils::IntToStr(v4, (int)&v10);
  sub_404F0C(v10);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BB29;
  System::__linkproc__ LStrArrayClr((int)&v8, 3);
  return System::__linkproc__ LStrClr(&v13);
}

// Address: 0x40BB30
_DWORD *__cdecl PauseService(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  int v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BBB2;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  sub_404EC8((int **)&v8);
  v10 = Sysutils::StrToInt(v8);
  v4 = sub_4094F4(v11, v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BBB9;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40BBC0
_DWORD *__cdecl ContinueService(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  int v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BC42;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  sub_404EC8((int **)&v8);
  v10 = Sysutils::StrToInt(v8);
  v4 = sub_4095C8(v11, v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BC49;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40BC50
int __cdecl GetServiceName(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v7; // [esp-4h] [ebp-10h]
  int *v8; // [esp+0h] [ebp-Ch] BYREF
  int v9; // [esp+4h] [ebp-8h] BYREF
  char *v10; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v10 = nullptr;
  v9 = 0;
  v8 = nullptr;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BCBF;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v10);
  v4 = sub_40969C(v10, &v8);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_404F0C((int)v8);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BCC6;
  return System::__linkproc__ LStrArrayClr((int)&v8, 3);
}

// Address: 0x40BCCC
int __cdecl GetServiceDisplayName(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v7; // [esp-4h] [ebp-10h]
  int v8; // [esp+0h] [ebp-Ch] BYREF
  int *v9; // [esp+4h] [ebp-8h] BYREF
  char *v10; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v10 = nullptr;
  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BD3B;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v10);
  v4 = sub_40975C(v10, &v9);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C((int)v9);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BD42;
  return System::__linkproc__ LStrArrayClr((int)&v8, 3);
}

// Address: 0x40BD48
_DWORD *__cdecl GetServiceStatus(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  int v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  DWORD v10; // [esp+8h] [ebp-8h] BYREF
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BDCE;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  v4 = sub_40981C(v11, &v10);
  Sysutils::IntToStr(v4, (int)&v9);
  Sysutils::IntToStr((int)&v8, v10);
  sub_404F0C(v8);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BDD5;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40BDDC
int __cdecl GetServiceBinaryPath(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v7; // [esp-4h] [ebp-10h]
  int v8; // [esp+0h] [ebp-Ch] BYREF
  int *v9; // [esp+4h] [ebp-8h] BYREF
  char *v10; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v10 = nullptr;
  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BE4B;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v10);
  v4 = sub_4098E8(v10, &v9);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C((int)v9);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BE52;
  return System::__linkproc__ LStrArrayClr((int)&v8, 3);
}

// Address: 0x40BE58
int __cdecl GetServiceDescription(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v7; // [esp-4h] [ebp-10h]
  int v8; // [esp+0h] [ebp-Ch] BYREF
  int *v9; // [esp+4h] [ebp-8h] BYREF
  char *v10; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v10 = nullptr;
  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BEC7;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v10);
  v4 = sub_409B2C(v10, &v9);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C((int)v9);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BECE;
  return System::__linkproc__ LStrArrayClr((int)&v8, 3);
}

// Address: 0x40BED4
_DWORD *__cdecl GetServiceStartType(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  int v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  DWORD v10; // [esp+8h] [ebp-8h] BYREF
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BF5A;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  v4 = sub_409A0C(v11, &v10);
  Sysutils::IntToStr(v4, (int)&v9);
  Sysutils::IntToStr((int)&v8, v10);
  sub_404F0C(v8);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BF61;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40BF68
int __cdecl GetServiceLogon(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v7; // [esp-4h] [ebp-10h]
  int v8; // [esp+0h] [ebp-Ch] BYREF
  int *v9; // [esp+4h] [ebp-8h] BYREF
  char *v10; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v10 = nullptr;
  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40BFD7;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v10);
  v4 = sub_409CC4(v10, &v9);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C((int)v9);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40BFDE;
  return System::__linkproc__ LStrArrayClr((int)&v8, 3);
}

// Address: 0x40BFE4
_DWORD *__cdecl GetServiceFailure(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-54h] BYREF
  int *v7; // [esp-4h] [ebp-4Ch]
  int v8; // [esp+0h] [ebp-48h] BYREF
  int v9; // [esp+4h] [ebp-44h] BYREF
  int v10; // [esp+8h] [ebp-40h] BYREF
  int v11; // [esp+Ch] [ebp-3Ch] BYREF
  int v12; // [esp+10h] [ebp-38h] BYREF
  int v13; // [esp+14h] [ebp-34h] BYREF
  int v14; // [esp+18h] [ebp-30h] BYREF
  int v15; // [esp+1Ch] [ebp-2Ch] BYREF
  unsigned int v16; // [esp+20h] [ebp-28h] BYREF
  int v17; // [esp+24h] [ebp-24h] BYREF
  unsigned int v18; // [esp+28h] [ebp-20h] BYREF
  int v19; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v20; // [esp+30h] [ebp-18h] BYREF
  int v21; // [esp+34h] [ebp-14h] BYREF
  int *v22; // [esp+38h] [ebp-10h] BYREF
  int *v23; // [esp+3Ch] [ebp-Ch] BYREF
  unsigned int v24; // [esp+40h] [ebp-8h] BYREF
  char *v25; // [esp+44h] [ebp-4h] BYREF
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C12A;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v25);
  v4 = sub_409DE8(v25, &v24, &v23, &v22, &v21, &v20, &v19, &v18, &v17, &v16);
  Sysutils::IntToStr(v4, (int)&v15);
  Sysutils::IntToStr((int)&v14, v16);
  sub_404F0C(v14);
  Sysutils::IntToStr(v17, (int)&v13);
  sub_404F0C(v13);
  Sysutils::IntToStr((int)&v12, v18);
  sub_404F0C(v12);
  Sysutils::IntToStr(v19, (int)&v11);
  sub_404F0C(v11);
  Sysutils::IntToStr((int)&v10, v20);
  sub_404F0C(v10);
  Sysutils::IntToStr(v21, (int)&v9);
  sub_404F0C(v9);
  sub_404F0C((int)v22);
  sub_404F0C((int)v23);
  Sysutils::IntToStr((int)&v8, v24);
  sub_404F0C(v8);
  sub_404F0C(v15);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C131;
  System::__linkproc__ LStrArrayClr((int)&v8, 8);
  System::__linkproc__ LStrArrayClr((int)&v22, 2);
  return System::__linkproc__ LStrClr(&v25);
}

// Address: 0x40C138
_DWORD *__cdecl GetServiceFailureFlag(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  __int32 v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  char v10; // [esp+Bh] [ebp-5h] BYREF
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C1BA;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  v4 = sub_40A01C(v11, (bool *)&v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_40B7E0(v10, &v8);
  sub_404F0C(v8);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C1C1;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40C1C8
_DWORD *__cdecl GetServiceDelayedAutoStartInfo(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  __int32 v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  char v10; // [esp+Bh] [ebp-5h] BYREF
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C24A;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  v4 = sub_40A1B4(v11, (bool *)&v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_40B7E0(v10, &v8);
  sub_404F0C(v8);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C251;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40C258
int __cdecl SetServiceDescription(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v7; // [esp-4h] [ebp-10h]
  int v8; // [esp+0h] [ebp-Ch] BYREF
  int *v9; // [esp+4h] [ebp-8h] BYREF
  char *v10; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v10 = nullptr;
  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C2C7;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v10);
  sub_404EC8(&v9);
  v4 = sub_40A34C(v10, (int)v9);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C2CE;
  return System::__linkproc__ LStrArrayClr((int)&v8, 3);
}

// Address: 0x40C2D4
_DWORD *__cdecl SetServiceStartType(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  int v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  DWORD v10; // [esp+8h] [ebp-8h]
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C356;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  sub_404EC8((int **)&v8);
  v10 = Sysutils::StrToInt(v8);
  v4 = sub_40A494(v11, v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C35D;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40C364
int __cdecl SetServiceLogon(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  int v8; // [esp+0h] [ebp-10h] BYREF
  char *v9; // [esp+4h] [ebp-Ch] BYREF
  int *v10; // [esp+8h] [ebp-8h] BYREF
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C3DE;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  sub_404EC8(&v10);
  sub_404EC8((int **)&v9);
  v4 = sub_40A594(v11, v10, v9);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C3E5;
  return System::__linkproc__ LStrArrayClr((int)&v8, 4);
}

// Address: 0x40C3EC
int __cdecl SetServiceBinaryPath(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v7; // [esp-4h] [ebp-10h]
  int v8; // [esp+0h] [ebp-Ch] BYREF
  char *v9; // [esp+4h] [ebp-8h] BYREF
  char *v10; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v10 = nullptr;
  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C45B;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v10);
  sub_404EC8((int **)&v9);
  v4 = sub_40A6F0(v10, v9);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C462;
  return System::__linkproc__ LStrArrayClr((int)&v8, 3);
}

// Address: 0x40C468
_DWORD *__cdecl SetServiceFailure(int a1, int a2, int a3, int a4)
{
  unsigned int v5[2]; // [esp-Ch] [ebp-64h] BYREF
  int *v6; // [esp-4h] [ebp-5Ch]
  int v7; // [esp+0h] [ebp-58h] BYREF
  int v8; // [esp+4h] [ebp-54h] BYREF
  int v9; // [esp+8h] [ebp-50h] BYREF
  int v10; // [esp+Ch] [ebp-4Ch] BYREF
  int v11; // [esp+10h] [ebp-48h] BYREF
  int v12; // [esp+14h] [ebp-44h] BYREF
  int v13; // [esp+18h] [ebp-40h] BYREF
  int v14; // [esp+1Ch] [ebp-3Ch] BYREF
  int v15; // [esp+20h] [ebp-38h] BYREF
  int v16; // [esp+24h] [ebp-34h] BYREF
  int v17; // [esp+28h] [ebp-30h]
  int v18; // [esp+2Ch] [ebp-2Ch]
  int v19; // [esp+30h] [ebp-28h]
  int v20; // [esp+34h] [ebp-24h]
  int v21; // [esp+38h] [ebp-20h]
  int v22; // [esp+3Ch] [ebp-1Ch]
  int v23; // [esp+40h] [ebp-18h]
  int v24; // [esp+44h] [ebp-14h]
  char *v25; // [esp+48h] [ebp-10h] BYREF
  char *v26; // [esp+4Ch] [ebp-Ch] BYREF
  int v27; // [esp+50h] [ebp-8h]
  char *v28; // [esp+54h] [ebp-4h] BYREF
  int savedregs; // [esp+58h] [ebp+0h] BYREF

  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_40C61E;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v28);
  sub_404EC8((int **)&v16);
  v27 = Sysutils::StrToInt(v16);
  sub_404EC8((int **)&v26);
  sub_404EC8((int **)&v25);
  sub_404EC8((int **)&v15);
  v24 = Sysutils::StrToInt(v15);
  sub_404EC8((int **)&v14);
  v23 = Sysutils::StrToInt(v14);
  sub_404EC8((int **)&v13);
  v22 = Sysutils::StrToInt(v13);
  sub_404EC8((int **)&v12);
  v21 = Sysutils::StrToInt(v12);
  sub_404EC8((int **)&v11);
  v20 = Sysutils::StrToInt(v11);
  sub_404EC8((int **)&v10);
  v19 = Sysutils::StrToInt(v10);
  if ( (v24 == 2 || v22 == 2 || v20 == 2) && (v17 = sub_40B5D0((char *)&str_SeShutdownPrivi[1])) == -1 )
  {
    Sysutils::IntToStr(-1, (int)&v9);
    sub_404F0C(v9);
  }
  else
  {
    v18 = sub_40A800(v28, v27, v26, v25, v24, v23, v22, v21, v20, v19);
    if ( (v24 == 2 || v22 == 2 || v20 == 2) && (v17 = sub_40B6BC((char *)&str_SeShutdownPrivi[1])) == -1 )
    {
      Sysutils::IntToStr(-1, (int)&v8);
      sub_404F0C(v8);
    }
    else
    {
      Sysutils::IntToStr(v18, (int)&v7);
      sub_404F0C(v7);
    }
  }
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_40C625;
  System::__linkproc__ LStrArrayClr((int)&v7, 10);
  System::__linkproc__ LStrArrayClr((int)&v25, 2);
  return System::__linkproc__ LStrClr(&v28);
}

// Address: 0x40C648
_DWORD *__cdecl SetServiceFailureFlag(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  int *v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  char v10; // [esp+Bh] [ebp-5h]
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = nullptr;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C6CA;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  sub_404EC8(&v8);
  v10 = sub_40B82C((int)v8);
  v4 = sub_40A9D4(v11, v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C6D1;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40C6D8
_DWORD *__cdecl SetServiceDelayedAutoStartInfo(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  int *v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  char v10; // [esp+Bh] [ebp-5h]
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = nullptr;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C75A;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  sub_404EC8(&v8);
  v10 = sub_40B82C((int)v8);
  v4 = sub_40AB18(v11, v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C761;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40C768
_DWORD *__cdecl ServiceIsRunning(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  __int32 v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  char v10; // [esp+Bh] [ebp-5h] BYREF
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C7EA;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  v4 = sub_40AC5C(v11, (bool *)&v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_40B7E0(v10, &v8);
  sub_404F0C(v8);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C7F1;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40C7F8
_DWORD *__cdecl ServiceIsStopped(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  __int32 v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  char v10; // [esp+Bh] [ebp-5h] BYREF
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C87A;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  v4 = sub_40ACC8(v11, (bool *)&v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_40B7E0(v10, &v8);
  sub_404F0C(v8);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C881;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40C888
_DWORD *__cdecl ServiceIsPaused(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-1Ch] BYREF
  int *v7; // [esp-4h] [ebp-14h]
  __int32 v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch] BYREF
  char v10; // [esp+Bh] [ebp-5h] BYREF
  char *v11; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C90A;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v11);
  v4 = sub_40AD34(v11, (bool *)&v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_40B7E0(v10, &v8);
  sub_404F0C(v8);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C911;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrClr(&v11);
}

// Address: 0x40C918
int __cdecl RestartService(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-20h] BYREF
  int *v7; // [esp-4h] [ebp-18h]
  int v8; // [esp+0h] [ebp-14h] BYREF
  int v9; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-Ch]
  int *v11; // [esp+Ch] [ebp-8h] BYREF
  char *v12; // [esp+10h] [ebp-4h] BYREF
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40C9AB;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v12);
  sub_404EC8(&v11);
  sub_404EC8((int **)&v8);
  v10 = Sysutils::StrToInt(v8);
  v4 = sub_40ADA0(v12, (int)v11, v10);
  Sysutils::IntToStr(v4, (int)&v9);
  sub_404F0C(v9);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40C9B2;
  System::__linkproc__ LStrArrayClr((int)&v8, 2);
  return System::__linkproc__ LStrArrayClr((int)&v11, 2);
}

// Address: 0x40C9B8
int __cdecl ExistsService(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-14h] BYREF
  int *v7; // [esp-4h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-8h] BYREF
  char *v9; // [esp+4h] [ebp-4h] BYREF
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40CA1A;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v9);
  v4 = sub_408EC4(v9);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40CA21;
  return System::__linkproc__ LStrArrayClr((int)&v8, 2);
}

// Address: 0x40CA28
int __cdecl GrantServiceLogonPrivilege(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-14h] BYREF
  int *v7; // [esp-4h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-8h] BYREF
  char *v9; // [esp+4h] [ebp-4h] BYREF
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40CA8F;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v9);
  v4 = sub_40B30C(v9, (int)&str_SeServiceLogonR[1]);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40CA96;
  return System::__linkproc__ LStrArrayClr((int)&v8, 2);
}

// Address: 0x40CAB8
int __cdecl RemoveServiceLogonPrivilege(int a1, int a2, int a3, int a4)
{
  DWORD v4; // eax
  unsigned int v6[2]; // [esp-Ch] [ebp-14h] BYREF
  int *v7; // [esp-4h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-8h] BYREF
  char *v9; // [esp+4h] [ebp-4h] BYREF
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v9 = nullptr;
  v8 = 0;
  v7 = &savedregs;
  v6[1] = (unsigned int)&loc_40CB1F;
  v6[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v6);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v9);
  v4 = sub_40B46C(v9, (int)&str_SeServiceLogonR_0[1]);
  Sysutils::IntToStr(v4, (int)&v8);
  sub_404F0C(v8);
  __writefsdword(0, v6[0]);
  v7 = (int *)&loc_40CB26;
  return System::__linkproc__ LStrArrayClr((int)&v8, 2);
}

// Address: 0x40CB48
int __cdecl GetErrorMessage(int a1, int a2, int a3, int a4)
{
  unsigned int v5[2]; // [esp-Ch] [ebp-18h] BYREF
  int *v6; // [esp-4h] [ebp-10h]
  int v7; // [esp+0h] [ebp-Ch] BYREF
  int *v8; // [esp+4h] [ebp-8h] BYREF
  DWORD v9; // [esp+8h] [ebp-4h]
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v9 = 0;
  v8 = nullptr;
  v7 = 0;
  v6 = &savedregs;
  v5[1] = (unsigned int)&loc_40CBB2;
  v5[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v5);
  sub_404E90(a1, a2, a3, a4);
  sub_404EC8((int **)&v7);
  v9 = Sysutils::StrToInt(v7);
  sub_40B18C(v9, &v8);
  sub_404F0C((int)v8);
  __writefsdword(0, v5[0]);
  v6 = (int *)&loc_40CBB9;
  return System::__linkproc__ LStrArrayClr((int)&v7, 2);
}

// Address: 0x40CBC0
// BDS 2005-2007 and Delphi6-7 Visual Component Library
int unknown_libname_107()
{
  unsigned int v1[3]; // [esp-Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  v1[2] = (unsigned int)&savedregs;
  v1[1] = (unsigned int)&loc_40CBDF;
  v1[0] = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  __writefsdword(0, (unsigned int)v1);
  __writefsdword(0, v1[0]);
  return 0;
}

// Address: 0x40CC60
BOOL __stdcall __noreturn DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int inited; // eax
  int v7; // edx
  int v8; // ecx
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  inited = Sysinit::__linkproc__ InitLib(&dword_40CBE8, v3, (struct _EXCEPTION_REGISTRATION_RECORD *)&savedregs, v4, v5);
  System::__linkproc__ Halt0(inited, v7, v8);
}

