// Decompiled from SheriffAgent.dll (ClassM_2.0.57\unpacked\Client\SheriffAgent.dll)

// Address: 0x10001000
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return true;
}

// Address: 0x10001010
BOOL InitializeSWCtrl()
{
  _DWORD *v0; // eax

  v0 = operator new(4u);
  if ( v0 != nullptr )
  {
    *v0 = 0;
    dword_1001FEA4 = v0;
    return v0 != nullptr;
  }
  else
  {
    dword_1001FEA4 = nullptr;
    return false;
  }
}

// Address: 0x100010E0
BOOL InitializeWNDCtrl()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  v0 = (struct _RTL_CRITICAL_SECTION *)operator new(0x58u);
  if ( v0 != nullptr )
  {
    InitializeCriticalSection(v0 + 2);
    v0[3].DebugInfo = nullptr;
    v0[3].LockCount = 0;
    v0[3].RecursionCount = 0;
    v0[3].OwningThread = nullptr;
  }
  else
  {
    v0 = nullptr;
  }
  lpParameter = v0;
  return v0 != nullptr && sub_10003880() != 0;
}

// Address: 0x10001130
int __usercall AllocSoftwareInfo@<eax>(int a1@<edi>)
{
  int v2; // edi

  OutputDebugStringW(L"_AllocSoftwareInfo<<");
  if ( dword_1001FEA4 != nullptr )
  {
    OutputDebugStringW(L"pre g_SWChk->AllocSoftwareInfo");
    v2 = sub_100025E0(a1);
    OutputDebugStringW(L"post g_SWChk->AllocSoftwareInfo");
    OutputDebugStringW(L"_AllocSoftwareInfo>>");
    return v2;
  }
  else
  {
    OutputDebugStringW(L"g_SWChk is null");
    OutputDebugStringW(L"_AllocSoftwareInfo>>");
    return 0;
  }
}

// Address: 0x10001180
int FreeSoftwareInfo()
{
  void **v1; // esi
  _DWORD *v2; // ebx

  OutputDebugStringW(L"_FreeSoftwareInfo<<");
  if ( dword_1001FEA4 != nullptr )
  {
    OutputDebugStringW(L"pre g_SWChk->FreeSoftwareInfo");
    v1 = *(void ***)dword_1001FEA4;
    v2 = dword_1001FEA4;
    if ( *(_DWORD *)dword_1001FEA4 != 0 )
    {
      sub_100031E0();
      operator delete(*v1);
      operator delete(v1);
      *v2 = 0;
    }
    OutputDebugStringW(L"post g_SWChk->FreeSoftwareInfo");
    OutputDebugStringW(L"_FreeSoftwareInfo>>");
    return 1;
  }
  else
  {
    OutputDebugStringW(L"g_SWChk is null");
    OutputDebugStringW(L"_FreeSoftwareInfo>>");
    return 0;
  }
}

// Address: 0x10001200
int GetHardwareInfo()
{
  int v1; // edi

  OutputDebugStringW(L"_GetHardwareInfo<<");
  if ( ppv != nullptr )
  {
    OutputDebugStringW(L"pre g_HWChk->GetHardwareInfo");
    v1 = sub_10001650();
    OutputDebugStringW(L"pre g_HWChk->GetHardwareInfo");
    OutputDebugStringW(L"_GetHardwareInfo>>");
    return v1;
  }
  else
  {
    OutputDebugStringW(L"g_HWChk is null");
    OutputDebugStringW(L"_GetHardwareInfo>>");
    return 0;
  }
}

// Address: 0x10001250
int SetWndCtrl()
{
  if ( lpParameter == nullptr )
    return 0;
  sub_10005AB0();
  return 1;
}

// Address: 0x10001270
int SetDefWndCtrl()
{
  if ( lpParameter == nullptr )
    return 0;
  sub_10005860();
  return 1;
}

// Address: 0x10001290
int __cdecl ChangeUserPassword(int a1)
{
  if ( lpParameter != nullptr )
    return sub_10006380(a1);
  else
    return 0;
}

// Address: 0x100012C0
int __cdecl CheckUserPassword(int a1)
{
  if ( lpParameter != nullptr )
    return sub_100064A0(a1);
  else
    return 0;
}

// Address: 0x100012E0
int GetWndCtrl()
{
  if ( lpParameter == nullptr )
    return 0;
  sub_10005C10();
  return 1;
}

// Address: 0x10001300
void ReleaseSWCtrl()
{
  void **v0; // esi
  _DWORD *v1; // edi

  if ( dword_1001FEA4 != nullptr )
  {
    v0 = *(void ***)dword_1001FEA4;
    v1 = dword_1001FEA4;
    if ( *(_DWORD *)dword_1001FEA4 != 0 )
    {
      sub_100031E0();
      operator delete(*v0);
      operator delete(v0);
    }
    *v1 = 0;
    operator delete(v1);
    dword_1001FEA4 = nullptr;
  }
}

// Address: 0x10001350
void ReleaseHWCtrl()
{
  LPVOID *v0; // edi

  OutputDebugStringW(L"_ReleaseHWCtrl<<");
  if ( ppv != nullptr )
  {
    OutputDebugStringW(L"pre g_HWChk->Release");
    v0 = ppv;
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv[1] + 8))(ppv[1]);
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)*v0 + 8))(*v0);
    CoUninitialize();
    OutputDebugStringW(L"post g_HWChk->Release");
    OutputDebugStringW(L"pre delete g_HWChk");
    if ( ppv != nullptr )
      operator delete(ppv);
    OutputDebugStringW(L"post delete g_HWChk");
    ppv = nullptr;
    OutputDebugStringW(L"_ReleaseHWCtrl>>");
  }
  else
  {
    OutputDebugStringW(L"g_HWChk is null");
    OutputDebugStringW(L"_ReleaseHWCtrl>>");
  }
}

// Address: 0x100013E0
void ReleaseWNDCtrl()
{
  void *v0; // esi

  if ( lpParameter != nullptr )
  {
    sub_10003990();
    v0 = lpParameter;
    if ( lpParameter != nullptr )
    {
      DeleteCriticalSection((LPCRITICAL_SECTION)lpParameter + 2);
      operator delete(v0);
    }
    lpParameter = nullptr;
  }
}

// Address: 0x10001420
BSTR **__userpurge sub_10001420@<eax>(const OLECHAR *a1@<edi>, BSTR **a2)
{
  BSTR *v2; // eax
  BSTR *v3; // esi
  BSTR v4; // eax

  v2 = (BSTR *)operator new(0xCu);
  v3 = v2;
  if ( v2 != nullptr )
  {
    v2[1] = nullptr;
    v2[2] = (BSTR)1;
    v4 = SysAllocString(a1);
    *v3 = v4;
    if ( v4 == nullptr && a1 != nullptr )
      sub_10007450(-2147024882);
  }
  else
  {
    v3 = nullptr;
  }
  *a2 = v3;
  if ( v3 == nullptr )
    sub_10007450(-2147024882);
  return a2;
}

// Address: 0x100014C0
void __usercall sub_100014C0(int *a1@<edi>)
{
  int v1; // esi

  v1 = *a1;
  if ( *a1 != 0 )
  {
    if ( InterlockedDecrement((volatile LONG *)(v1 + 8)) == 0 && v1 != 0 )
    {
      if ( *(_DWORD *)v1 != 0 )
        SysFreeString(*(BSTR *)v1);
      if ( *(_DWORD *)(v1 + 4) != 0 )
        operator delete[](*(void **)(v1 + 4));
      operator delete((void *)v1);
    }
    *a1 = 0;
  }
}

// Address: 0x10001510
int sub_10001510()
{
  LPVOID *v0; // ebx
  HRESULT v1; // eax
  BSTR **v2; // eax
  BSTR *v3; // eax
  BSTR v4; // ecx
  IUnknown **v5; // esi
  int v6; // ebp
  BSTR *v8; // [esp+28h] [ebp-10h] BYREF
  int v9; // [esp+34h] [ebp-4h]

  v0 = ppv;
  if ( CoInitialize(nullptr) < 0 )
    return 0;
  v1 = CoInitializeSecurity(nullptr, -1, nullptr, nullptr, 0, 3u, nullptr, 0, nullptr);
  if ( v1 < 0 && v1 != -2147417831 )
    goto LABEL_11;
  if ( CoCreateInstance(&rclsid, nullptr, 1u, &riid, v0) < 0 )
    goto LABEL_11;
  v2 = sub_10001420(L"ROOT\\CIMV2", &v8);
  v9 = 0;
  v3 = *v2;
  v4 = v3 != nullptr ? *v3 : nullptr;
  v5 = (IUnknown **)(v0 + 1);
  v6 = (*(int (__stdcall **)(LPVOID, BSTR, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, LPVOID *))(*(_DWORD *)*v0 + 12))(
         *v0,
         v4,
         0,
         0,
         0,
         0,
         0,
         0,
         v0 + 1);
  v9 = -1;
  sub_100014C0((int *)&v8);
  if ( v6 < 0 )
  {
LABEL_11:
    CoUninitialize();
    return 0;
  }
  if ( CoSetProxyBlanket(*v5, 0xAu, 0, nullptr, 3u, 3u, nullptr, 0) < 0 )
  {
    (*v5)->lpVtbl->Release(*v5);
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)*v0 + 8))(*v0);
    goto LABEL_11;
  }
  return 1;
}

// Address: 0x10001650
int __usercall sub_10001650@<eax>(int a1@<eax>)
{
  int v1; // esi

  v1 = a1;
  sub_100016C0(a1 + 512);
  sub_100016C0(v1 + 2560);
  sub_10001940();
  sub_10001A20();
  sub_10001B00();
  v1 += 1536;
  sub_10001C10(v1);
  sub_10001ED0(v1);
  return 1;
}

// Address: 0x100016C0
int __fastcall sub_100016C0(int a1, int a2, wchar_t *a3)
{
  BSTR **v5; // ebx
  BSTR **v6; // eax
  BSTR v7; // edx
  BSTR *v8; // eax
  BSTR v9; // ecx
  int v10; // ebx
  void *v11; // esi
  BSTR *v12; // esi
  int v13; // eax
  int v14; // esi
  wchar_t *v15; // esi
  int v16; // [esp+48h] [ebp-240h] BYREF
  int v17; // [esp+4Ch] [ebp-23Ch] BYREF
  int v18; // [esp+50h] [ebp-238h] BYREF
  void *v19; // [esp+54h] [ebp-234h] BYREF
  wchar_t *Destination; // [esp+58h] [ebp-230h]
  VARIANTARG pvarg; // [esp+5Ch] [ebp-22Ch] BYREF
  BSTR *v22; // [esp+70h] [ebp-218h] BYREF
  WCHAR v23[256]; // [esp+74h] [ebp-214h] BYREF
  int v24; // [esp+284h] [ebp-4h]

  Destination = a3;
  v17 = 0;
  memset(v23, 0, sizeof(v23));
  wsprintfW(v23, L"SELECT * FROM %s", a2);
  if ( *(_DWORD *)(a1 + 4) == 0 )
    return 0;
  v5 = sub_10001420(v23, &v22);
  v24 = 0;
  v6 = sub_10001420(L"WQL", (BSTR **)&v19);
  LOBYTE(v24) = 1;
  if ( *v5 != nullptr )
    v7 = **v5;
  else
    v7 = nullptr;
  v8 = *v6;
  if ( v8 != nullptr )
    v9 = *v8;
  else
    v9 = nullptr;
  v10 = (*(int (__stdcall **)(_DWORD, BSTR, BSTR, int, _DWORD, int *))(**(_DWORD **)(a1 + 4) + 80))(
          *(_DWORD *)(a1 + 4),
          v9,
          v7,
          48,
          0,
          &v17);
  if ( v19 != nullptr )
  {
    v11 = v19;
    if ( InterlockedDecrement((volatile LONG *)v19 + 2) == 0 )
    {
      if ( *(_DWORD *)v11 != 0 )
        SysFreeString(*(BSTR *)v11);
      if ( *((_DWORD *)v11 + 1) != 0 )
        operator delete[](*((void **)v11 + 1));
      operator delete(v11);
    }
    v19 = nullptr;
  }
  v24 = -1;
  v12 = v22;
  if ( v22 != nullptr && InterlockedDecrement((volatile LONG *)v22 + 2) == 0 && v12 != nullptr )
  {
    if ( *v12 != nullptr )
      SysFreeString(*v12);
    if ( v12[1] != nullptr )
      operator delete[](v12[1]);
    operator delete(v12);
  }
  if ( v10 < 0 )
    return 0;
  v13 = v17;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  if ( v17 != 0 )
  {
    while ( 1 )
    {
      (*(void (__stdcall **)(int, int, int, int *, int *))(*(_DWORD *)v13 + 16))(v13, -1, 1, &v16, &v18);
      if ( v18 == 0 )
        break;
      if ( v16 != 0 )
      {
        memset(&pvarg, 0, sizeof(pvarg));
        if ( (*(int (__stdcall **)(int, const wchar_t *, _DWORD, VARIANTARG *, _DWORD, _DWORD))(*(_DWORD *)v16 + 16))(
               v16,
               L"Name",
               0,
               &pvarg,
               0,
               0) == 0 )
        {
          v15 = Destination;
          memset(Destination, 0, 0x200u);
          wcscpy_s(v15, 0x100u, pvarg.bstrVal);
          v14 = 1;
        }
        VariantClear(&pvarg);
        (*(void (__stdcall **)(int))(*(_DWORD *)v16 + 8))(v16);
        v16 = 0;
      }
      v13 = v17;
      if ( v17 == 0 )
        goto LABEL_35;
    }
    v13 = v17;
  }
LABEL_35:
  (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 8))(v13);
  return v14;
}

// Address: 0x10001940
int __usercall sub_10001940@<eax>(wchar_t *a1@<esi>)
{
  HKEY phkResult; // [esp+0h] [ebp-210h] BYREF
  DWORD cbData; // [esp+4h] [ebp-20Ch] BYREF
  DWORD Type; // [esp+8h] [ebp-208h] BYREF
  BYTE Data[512]; // [esp+Ch] [ebp-204h] BYREF

  phkResult = nullptr;
  Type = 1;
  cbData = 256;
  memset(Data, 0, sizeof(Data));
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0", 0, 1u, &phkResult) != 0 )
    return 0;
  if ( RegQueryValueExW(phkResult, L"ProcessorNameString", nullptr, &Type, Data, &cbData) != 0 )
  {
    RegCloseKey(phkResult);
    return 0;
  }
  RegCloseKey(phkResult);
  wcscpy_s(a1, 0x100u, (const wchar_t *)Data);
  return 1;
}

// Address: 0x10001A20
int __usercall sub_10001A20@<eax>(wchar_t *a1@<edi>)
{
  struct _MEMORYSTATUSEX Buffer; // [esp+10h] [ebp-24Ch] BYREF
  WCHAR Source[258]; // [esp+50h] [ebp-20Ch] BYREF

  memset(&Buffer.dwMemoryLoad, 0, 0x3Cu);
  memset(Source, 0, 512);
  Buffer.dwLength = 64;
  GlobalMemoryStatusEx(&Buffer);
  wsprintfW(
    Source,
    L"Total : %I64u MB  Available : %I64u MB  Used : %I64u MB",
    Buffer.ullTotalPhys >> 20,
    Buffer.ullAvailPhys >> 20,
    (Buffer.ullTotalPhys >> 20) - (Buffer.ullAvailPhys >> 20));
  wsprintfW(Source, L"%d MB", (unsigned int)(Buffer.ullTotalPhys >> 20));
  wcscpy_s(a1, 0x100u, Source);
  return 1;
}

// Address: 0x10001B00
int __usercall sub_10001B00@<eax>(wchar_t *a1@<edi>)
{
  struct _IP_ADAPTER_INFO *v1; // eax
  CHAR *v2; // esi
  ULONG SizePointer; // [esp+4h] [ebp-498h] BYREF
  _BYTE AdapterInfo[648]; // [esp+8h] [ebp-494h] BYREF
  WCHAR WideCharStr[258]; // [esp+290h] [ebp-20Ch] BYREF

  memset(AdapterInfo, 0, sizeof(AdapterInfo));
  SizePointer = 0;
  if ( GetAdaptersInfo((PIP_ADAPTER_INFO)AdapterInfo, &SizePointer) == 111 )
  {
    v1 = (struct _IP_ADAPTER_INFO *)operator new[](SizePointer);
    v2 = (CHAR *)v1;
    if ( v1 == nullptr )
      return 0;
    if ( GetAdaptersInfo(v1, &SizePointer) != 0 )
    {
      operator delete(v2);
      return 0;
    }
    memset(WideCharStr, 0, 512);
    MultiByteToWideChar(0, 2u, v2 + 268, -1, WideCharStr, 256);
    wcscpy_s(a1, 0x100u, WideCharStr);
    operator delete(v2);
  }
  return 1;
}

// Address: 0x10001C10
int __stdcall sub_10001C10(WCHAR *a1)
{
  HANDLE FileW; // edi
  int result; // eax
  int v3; // edi
  _DWORD *v4; // ebp
  _DWORD *v5; // ebp
  int v6; // eax
  CHAR v7; // cl
  CHAR v8; // dl
  int i; // eax
  char *v10; // eax
  void *v11; // esi
  HANDLE hDevice; // [esp+14h] [ebp-464h]
  DWORD BytesReturned; // [esp+18h] [ebp-460h] BYREF
  LPWSTR lpWideCharStr; // [esp+1Ch] [ebp-45Ch]
  _DWORD *v15; // [esp+20h] [ebp-458h]
  char OutBuffer; // [esp+24h] [ebp-454h] BYREF
  int v17; // [esp+25h] [ebp-453h]
  int v18; // [esp+29h] [ebp-44Fh]
  int v19; // [esp+2Dh] [ebp-44Bh]
  int v20; // [esp+31h] [ebp-447h]
  int v21; // [esp+35h] [ebp-443h]
  __int16 v22; // [esp+39h] [ebp-43Fh]
  char v23; // [esp+3Bh] [ebp-43Dh]
  int InBuffer; // [esp+3Ch] [ebp-43Ch] BYREF
  char v25; // [esp+40h] [ebp-438h]
  char v26; // [esp+41h] [ebp-437h]
  char v27; // [esp+42h] [ebp-436h]
  char v28; // [esp+43h] [ebp-435h]
  char v29; // [esp+44h] [ebp-434h]
  char v30; // [esp+45h] [ebp-433h]
  char v31; // [esp+46h] [ebp-432h]
  char v32; // [esp+47h] [ebp-431h]
  char v33; // [esp+48h] [ebp-430h]
  int v34; // [esp+49h] [ebp-42Fh]
  int v35; // [esp+4Dh] [ebp-42Bh]
  int v36; // [esp+51h] [ebp-427h]
  int v37; // [esp+55h] [ebp-423h]
  int v38; // [esp+59h] [ebp-41Fh]
  _BYTE v39[256]; // [esp+60h] [ebp-418h] BYREF
  CHAR MultiByteStr[264]; // [esp+160h] [ebp-318h] BYREF
  WCHAR FileName[262]; // [esp+268h] [ebp-210h] BYREF

  lpWideCharStr = a1;
  memset(FileName, 0, 520);
  wsprintfW(FileName, L"\\\\.\\PhysicalDrive%d", 0);
  FileW = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
  result = 0;
  hDevice = FileW;
  if ( FileW != (HANDLE)-1 )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    BytesReturned = 0;
    OutBuffer = 0;
    if ( DeviceIoControl(FileW, 0x74080u, nullptr, 0, &OutBuffer, 0x18u, &BytesReturned, nullptr) )
    {
      v3 = 0;
      InBuffer = 512;
      v25 = 0;
      v26 = 1;
      v27 = 1;
      v28 = 0;
      v29 = 0;
      v30 = -96;
      v31 = (v17 & 0x100000) != 0 ? -95 : -20;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v4 = operator new[](0x211u);
      v15 = v4;
      memset(v4, 0, 0x211u);
      if ( DeviceIoControl(hDevice, 0x7C088u, &InBuffer, 0x21u, v4, 0x211u, &BytesReturned, nullptr) )
      {
        v5 = v4 + 4;
        qmemcpy(v39, v5, sizeof(v39));
        memset(MultiByteStr, 0, 260);
        v6 = 0;
        while ( 1 )
        {
          v7 = v39[v6 + 55];
          v8 = v39[v6 + 54];
          MultiByteStr[v6] = v7;
          MultiByteStr[v6 + 1] = v8;
          if ( v7 == 32 && v8 == 32 )
            break;
          v6 += 2;
          if ( v6 >= 39 )
            goto LABEL_11;
        }
        MultiByteStr[v6] = 0;
LABEL_11:
        for ( i = 10; i < 21; ++i )
          *((_WORD *)v5 + i) = (*((_WORD *)v5 + i) << 8) ^ *((unsigned __int8 *)v5 + 2 * i + 1);
        v10 = (char *)operator new[](0x15u);
        v11 = v10;
        *(_DWORD *)v10 = 0;
        *((_DWORD *)v10 + 1) = 0;
        *((_DWORD *)v10 + 2) = 0;
        *((_DWORD *)v10 + 3) = 0;
        *((_DWORD *)v10 + 4) = 0;
        v10[20] = 0;
        *(_DWORD *)v10 = v5[5];
        *((_DWORD *)v10 + 1) = v5[6];
        *((_DWORD *)v10 + 2) = v5[7];
        *((_DWORD *)v10 + 3) = v5[8];
        for ( *((_DWORD *)v10 + 4) = v5[9]; *v10 == 32; ++v10 )
          ;
        MultiByteToWideChar(0, 0, MultiByteStr, -1, lpWideCharStr, 256);
        v3 = 1;
        operator delete(v11);
        v4 = v15;
      }
      operator delete(v4);
      CloseHandle(hDevice);
      return v3;
    }
    else
    {
      CloseHandle(FileW);
      return 0;
    }
  }
  return result;
}

// Address: 0x10001ED0
int __thiscall sub_10001ED0(unsigned __int16 *this)
{
  HANDLE FileW; // ebx
  int result; // eax
  DWORD BytesReturned; // [esp+Ch] [ebp-100h] BYREF
  _DWORD OutBuffer[6]; // [esp+10h] [ebp-FCh] BYREF
  __int64 v6; // [esp+28h] [ebp-E4h]
  int v7; // [esp+30h] [ebp-DCh]
  int v8; // [esp+34h] [ebp-D8h]
  WCHAR v9[102]; // [esp+38h] [ebp-D4h] BYREF

  FileW = CreateFileW(L"\\\\.\\PhysicalDrive0", 0x80000000, 3u, nullptr, 3u, 0x80u, nullptr);
  result = 0;
  if ( FileW != (HANDLE)-1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    memset(OutBuffer, 0, sizeof(OutBuffer));
    BytesReturned = 0;
    DeviceIoControl(FileW, 0x700A0u, nullptr, 0, OutBuffer, 0x28u, &BytesReturned, nullptr);
    memset(v9, 0, 200);
    wsprintfW(v9, L" size : %d GB", (unsigned int)(v6 / 0x40000000));
    wcscat(this, v9);
    CloseHandle(FileW);
    return 1;
  }
  return result;
}

// Address: 0x10002000
int __thiscall sub_10002000(_DWORD *this)
{
  *this = &std::bad_alloc::`vftable';
  return sub_10007B8D();
}

// Address: 0x10002010
_DWORD *__thiscall sub_10002010(_DWORD *this, char a2)
{
  *this = &std::bad_alloc::`vftable';
  sub_10007B8D();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10002040
_DWORD *__thiscall sub_10002040(_DWORD *this, int a2)
{
  sub_10007AAF();
  *this = &std::logic_error::`vftable';
  *(this + 8) = 0;
  *(this + 9) = 15;
  *((_BYTE *)this + 16) = 0;
  sub_100030E0(a2, 0, -1);
  return this;
}

// Address: 0x100020B0
int __thiscall sub_100020B0(void **this)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  return sub_10007B8D(this);
}

// Address: 0x100020F0
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_1(_DWORD *this)
{
  if ( *(this + 9) < 0x10u )
    return this + 4;
  else
    return (_DWORD *)*(this + 4);
}

// Address: 0x10002100
_DWORD *__thiscall sub_10002100(_DWORD *this, int a2)
{
  sub_10002040(this, a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x10002120
void **__thiscall sub_10002120(void **this, char a2)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  sub_10007B8D(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10002170
int __thiscall sub_10002170(int this, struct std::exception *a2)
{
  std::exception::exception((std::exception *)this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  *(_DWORD *)(this + 36) = 15;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 16) = 0;
  sub_100030E0((char *)a2 + 12, 0, -1);
  return this;
}

// Address: 0x100021F0
int __thiscall sub_100021F0(HKEY hKey, int a2, REGSAM samDesired)
{
  HKEY v3; // edi
  LSTATUS v5; // eax
  LSTATUS v6; // eax
  __int16 v7; // cx
  int v8; // esi
  int v9; // edi
  int v10; // esi
  int v11; // [esp+0h] [ebp-864h]
  int v12; // [esp+4h] [ebp-860h]
  DWORD cchName; // [esp+14h] [ebp-850h] BYREF
  DWORD Type; // [esp+18h] [ebp-84Ch] BYREF
  HKEY hKeya; // [esp+1Ch] [ebp-848h] BYREF
  BYTE v16[4]; // [esp+20h] [ebp-844h] BYREF
  DWORD dwIndex; // [esp+24h] [ebp-840h]
  HKEY phkResult; // [esp+28h] [ebp-83Ch] BYREF
  int v19; // [esp+2Ch] [ebp-838h]
  HKEY v20; // [esp+34h] [ebp-830h]
  _WORD v21[260]; // [esp+38h] [ebp-82Ch] BYREF
  WCHAR Name[260]; // [esp+240h] [ebp-624h] BYREF
  WCHAR SubKey[260]; // [esp+448h] [ebp-41Ch] BYREF
  BYTE Data[524]; // [esp+650h] [ebp-214h] BYREF

  v3 = hKey;
  v19 = a2;
  v20 = hKey;
  memset(v21, 0, sizeof(v21));
  phkResult = nullptr;
  hKeya = nullptr;
  dwIndex = 0;
  Type = 1;
  *(_DWORD *)v16 = 0;
  cchName = 260;
  memset(Name, 0, sizeof(Name));
  memset(Data, 0, 520);
  memset(SubKey, 0, sizeof(SubKey));
  if ( RegOpenKeyExW(hKey, L"Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall", 0, samDesired, &phkResult) != 0 )
  {
    sub_10006F20(
      (wchar_t *)L"SWINFO : RegOpenKeyEx Error ( %s : %08x )",
      (char)L"Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall");
    return 0;
  }
  while ( 1 )
  {
    cchName = 520;
    memset(Name, 0, sizeof(Name));
    v5 = RegEnumKeyExW(phkResult, dwIndex++, Name, &cchName, nullptr, nullptr, nullptr, nullptr);
    if ( v5 == 259 )
    {
      v10 = 1;
      sub_10006F20((wchar_t *)L"SWINFO : RegEnumKeyEx ( No more items )", v11);
      goto LABEL_22;
    }
    if ( v5 != 0 )
      break;
    wsprintfW(SubKey, L"%s\\%s", L"Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall", Name);
    sub_10006F20((wchar_t *)L"SWINFO : RegOpenKeyEx ( %s )", (char)SubKey);
    if ( RegOpenKeyExW(v3, SubKey, 0, samDesired, &hKeya) != 0 )
    {
      sub_10006F20((wchar_t *)L"SWINFO : RegOpenKeyEx Error ( %s )", (char)SubKey);
    }
    else
    {
      cchName = 520;
      if ( RegQueryValueExW(hKeya, L"UninstallString", nullptr, &Type, Data, &cchName) != 0 )
      {
        Type = 2;
        sub_10006F20((wchar_t *)L"SWINFO : RegQueryValueEx (REG_EXPAND_SZ)", v11);
        cchName = 520;
        if ( RegQueryValueExW(hKeya, L"UninstallString", nullptr, &Type, Data, &cchName) != 0 )
        {
          sub_10006F20(L"SWINFO : RegQueryValueEx failed ( UninstallString )", v11);
          goto LABEL_19;
        }
      }
      Type = 4;
      cchName = 4;
      *(_DWORD *)v16 = 0;
      if ( RegQueryValueExW(hKeya, L"SystemComponent", nullptr, &Type, v16, &cchName) == 0 && *(_DWORD *)v16 != 0 )
      {
        sub_10006F20(L"SWINFO : RegQueryValueEx successed ( SystemComponent )", v11);
        goto LABEL_19;
      }
      Type = 1;
      cchName = 520;
      memset(Name, 0, sizeof(Name));
      if ( RegQueryValueExW(hKeya, L"ParentKeyName", nullptr, &Type, (LPBYTE)Name, &cchName) == 0 )
      {
        sub_10006F20(L"SWINFO : RegQueryValueEx successed ( ParentKeyName )", v11);
        goto LABEL_19;
      }
      sub_10006F20((wchar_t *)L"SWINFO : Uninstall Path : %s", (char)Data);
      Type = 1;
      cchName = 520;
      memset(Name, 0, sizeof(Name));
      v6 = RegQueryValueExW(hKeya, L"DisplayName", nullptr, &Type, (LPBYTE)Name, &cchName);
      if ( v6 != 0 )
      {
        sub_10006F20((wchar_t *)L"SWINFO : RegQueryValueEx failed ( DisplayName )", v11);
LABEL_19:
        RegCloseKey(hKeya);
      }
      else
      {
        do
        {
          v7 = *(WCHAR *)((char *)Name + v6);
          *(_WORD *)((char *)v21 + v6) = v7;
          v6 += 2;
        }
        while ( v7 != 0 );
        v8 = *(_DWORD *)(v19 + 20);
        v9 = sub_100033A0(v8, *(_DWORD *)(v8 + 4), v21);
        sub_100033E0(v11, v12);
        *(_DWORD *)(v8 + 4) = v9;
        **(_DWORD **)(v9 + 4) = v9;
        sub_10006F20((wchar_t *)L"SWINFO : Uninstall DisplayName ( %s )", (char)Name);
        v3 = v20;
        RegCloseKey(hKeya);
      }
    }
  }
  sub_10006F20((wchar_t *)L"SWINFO : RegEnumKeyEx Error( %08x )", v5);
  v10 = 0;
LABEL_22:
  RegCloseKey(phkResult);
  return v10;
}

// Address: 0x100025E0
int __cdecl sub_100025E0()
{
  int *v0; // edi
  void *v1; // eax
  int v2; // eax
  void **v4; // esi
  int v5; // esi
  int v6; // ebx
  int v7; // esi
  const wchar_t *v8; // eax
  int v9; // [esp+0h] [ebp-234h]
  char v10; // [esp+0h] [ebp-234h]
  char v11; // [esp+0h] [ebp-234h]
  char v12; // [esp+0h] [ebp-234h]
  char Args[524]; // [esp+14h] [ebp-220h] BYREF
  int v14; // [esp+230h] [ebp-4h]

  v0 = (int *)dword_1001FEA4;
  if ( *(_DWORD *)dword_1001FEA4 != 0
    || ((sub_10006F20((wchar_t *)L"SWINFO : Create a new software information store", v9),
         v1 = operator new(0x1Cu),
         v14 = 0,
         v1 == nullptr)
      ? (v2 = 0)
      : (v2 = sub_10003060(v1)),
        v14 = -1,
        *v0 = v2,
        v2 != 0) )
  {
    memset(Args, 0, 520);
    if ( sub_100027F0(Args) != 0 )
    {
      sub_10006F20((wchar_t *)L"SWINFO : OS Information ( %s )", (char)Args);
      v5 = *(_DWORD *)(*v0 + 20);
      v6 = sub_100033A0(v5, *(_DWORD *)(v5 + 4), Args);
      sub_100033E0(v9);
      *(_DWORD *)(v5 + 4) = v6;
      **(_DWORD **)(v6 + 4) = v6;
      v7 = sub_10003690();
      v8 = L"x64";
      if ( v7 == 0 )
        v8 = L"x32";
      sub_10006F20((wchar_t *)L"SWINFO : Sytem Type ( %s )", (char)v8);
      if ( v7 != 0 )
      {
        sub_10006F20((wchar_t *)L"SWINFO : Checking the installation software at HKEY_LOCAL_MACHINE (x64)", v10);
        sub_100021F0(HKEY_LOCAL_MACHINE, *v0, 0x20119u);
        sub_10006F20((wchar_t *)L"SWINFO : Checking the installation software at HKEY_CURRENT_USER (x64)", v11);
        sub_100021F0(HKEY_CURRENT_USER, *v0, 0x20119u);
      }
      sub_10006F20((wchar_t *)L"SWINFO : Checking the installation software at HKEY_LOCAL_MACHINE (x32)", v10);
      sub_100021F0(HKEY_LOCAL_MACHINE, *v0, 0x20019u);
      sub_10006F20((wchar_t *)L"SWINFO : Checking the installation software at HKEY_CURRENT_USER (x32)", v12);
      sub_100021F0(HKEY_CURRENT_USER, *v0, 0x20019u);
      return *v0;
    }
    else
    {
      sub_10006F20((wchar_t *)L"SWINFO : Could not read operating system information.", v9);
      v4 = (void **)*v0;
      if ( *v0 != 0 )
      {
        sub_100031E0();
        operator delete(*v4);
        operator delete(v4);
      }
      *v0 = 0;
      return 0;
    }
  }
  else
  {
    sub_10006F20((wchar_t *)L"SWINFO : Failed to create new software information repository.", v9);
    return 0;
  }
}

// Address: 0x100027F0
int __stdcall sub_100027F0(wchar_t *a1)
{
  int v1; // edi
  HMODULE LibraryW; // eax
  HMODULE v3; // esi
  FARPROC RtlGetVersion; // eax
  HMODULE ModuleHandleW; // eax
  void (__stdcall *GetNativeSystemInfo)(LPSYSTEM_INFO); // eax
  HMODULE v7; // eax
  BOOL (__stdcall *GetProductInfo)(DWORD, DWORD, DWORD, DWORD, PDWORD); // eax
  int v10; // [esp+18h] [ebp-3F0h] BYREF
  wchar_t *v11; // [esp+1Ch] [ebp-3ECh]
  struct _SYSTEM_INFO SystemInfo; // [esp+20h] [ebp-3E8h] BYREF
  _DWORD VersionInformation[71]; // [esp+48h] [ebp-3C0h] BYREF
  wchar_t Destination[256]; // [esp+164h] [ebp-2A4h] BYREF
  WCHAR Source[80]; // [esp+364h] [ebp-A4h] BYREF

  v11 = a1;
  memset(&VersionInformation[1], 0, 0x118u);
  v10 = 0;
  memset(&SystemInfo, 0, sizeof(SystemInfo));
  memset(Destination, 0, sizeof(Destination));
  VersionInformation[0] = 284;
  v1 = -1073741823;
  LibraryW = LoadLibraryW(L"ntdll.dll");
  v3 = LibraryW;
  if ( LibraryW == nullptr )
    goto LABEL_5;
  RtlGetVersion = GetProcAddress(LibraryW, "RtlGetVersion");
  if ( RtlGetVersion != nullptr )
    v1 = ((int (__stdcall *)(_DWORD *))RtlGetVersion)(VersionInformation);
  FreeLibrary(v3);
  if ( v1 < 0 )
  {
LABEL_5:
    if ( !GetVersionExW((LPOSVERSIONINFOW)VersionInformation) )
      return 0;
  }
  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  GetNativeSystemInfo = (void (__stdcall *)(LPSYSTEM_INFO))GetProcAddress(ModuleHandleW, "GetNativeSystemInfo");
  if ( GetNativeSystemInfo != nullptr )
    GetNativeSystemInfo(&SystemInfo);
  else
    GetSystemInfo(&SystemInfo);
  if ( VersionInformation[4] != 2 || VersionInformation[1] <= 4u )
    return 0;
  wcscpy_s(Destination, 0x100u, L"Microsoft ");
  if ( VersionInformation[1] == 10 )
  {
    if ( BYTE2(VersionInformation[70]) == 1 )
      wcscat_s(Destination, 0x100u, L"Windows 10 ");
    else
      wcscat_s(Destination, 0x100u, L"Windows Server Technical Preview ");
  }
  if ( VersionInformation[1] == 6 )
  {
    if ( VersionInformation[2] == 0 )
    {
      if ( BYTE2(VersionInformation[70]) == 1 )
        wcscat_s(Destination, 0x100u, L"Windows Vista ");
      else
        wcscat_s(Destination, 0x100u, L"Windows Server 2008 ");
    }
    if ( VersionInformation[2] == 1 )
    {
      if ( BYTE2(VersionInformation[70]) == 1 )
        wcscat_s(Destination, 0x100u, L"Windows 7 ");
      else
        wcscat_s(Destination, 0x100u, L"Windows Server 2008 R2 ");
    }
    if ( VersionInformation[2] == 2 )
    {
      if ( BYTE2(VersionInformation[70]) == 1 )
        wcscat_s(Destination, 0x100u, L"Windows 8 ");
      else
        wcscat_s(Destination, 0x100u, L"Windows Server 2012");
    }
    v7 = GetModuleHandleW(L"kernel32.dll");
    GetProductInfo = (BOOL (__stdcall *)(DWORD, DWORD, DWORD, DWORD, PDWORD))GetProcAddress(v7, "GetProductInfo");
    GetProductInfo(VersionInformation[1], VersionInformation[2], 0, 0, (PDWORD)&v10);
    switch ( v10 )
    {
      case 1:
        wcscat_s(Destination, 0x100u, L"Ultimate Edition");
        break;
      case 2:
        wcscat_s(Destination, 0x100u, L"Home Basic Edition");
        break;
      case 3:
        wcscat_s(Destination, 0x100u, L"Home Premium Edition");
        break;
      case 4:
      case 10:
        wcscat_s(Destination, 0x100u, L"Enterprise Edition");
        break;
      case 6:
        wcscat_s(Destination, 0x100u, L"Business Edition");
        break;
      case 7:
        wcscat_s(Destination, 0x100u, L"Standard Edition");
        break;
      case 8:
        wcscat_s(Destination, 0x100u, L"Datacenter Edition");
        break;
      case 9:
        wcscat_s(Destination, 0x100u, L"Small Business Server");
        break;
      case 11:
        wcscat_s(Destination, 0x100u, L"Starter Edition");
        break;
      case 12:
        wcscat_s(Destination, 0x100u, L"Datacenter Edition (core installation)");
        break;
      case 13:
        wcscat_s(Destination, 0x100u, L"Standard Edition (core installation)");
        break;
      case 14:
        wcscat_s(Destination, 0x100u, L"Enterprise Edition (core installation)");
        break;
      case 15:
        wcscat_s(Destination, 0x100u, L"Enterprise Edition for Itanium-based Systems");
        break;
      case 17:
        wcscat_s(Destination, 0x100u, L"Web Server Edition");
        break;
      case 18:
        wcscat_s(Destination, 0x100u, L"Cluster Server Edition");
        break;
      case 25:
        wcscat_s(Destination, 0x100u, L"Small Business Server Premium Edition");
        break;
      case 48:
        wcscat_s(Destination, 0x100u, L"Professional");
        break;
      default:
        break;
    }
  }
  if ( VersionInformation[1] == 5 )
  {
    if ( VersionInformation[2] != 2 )
      goto LABEL_85;
    if ( GetSystemMetrics(89) != 0 )
    {
      wcscat_s(Destination, 0x100u, L"Windows Server 2003 R2, ");
    }
    else if ( (VersionInformation[70] & 0x2000) != 0 )
    {
      wcscat_s(Destination, 0x100u, L"Windows Storage Server 2003");
    }
    else if ( (VersionInformation[70] & 0x8000) != 0 )
    {
      wcscat_s(Destination, 0x100u, L"Windows Home Server");
    }
    else if ( BYTE2(VersionInformation[70]) == 1 && SystemInfo.wProcessorArchitecture == 9 )
    {
      wcscat_s(Destination, 0x100u, L"Windows XP Professional x64 Edition");
    }
    else
    {
      wcscat_s(Destination, 0x100u, L"Windows Server 2003, ");
    }
    if ( BYTE2(VersionInformation[70]) != 1 )
    {
      if ( SystemInfo.wProcessorArchitecture == 6 )
      {
        if ( SLOBYTE(VersionInformation[70]) >= 0 )
        {
          if ( (VersionInformation[70] & 2) != 0 )
            wcscat_s(Destination, 0x100u, L"Enterprise Edition for Itanium-based Systems");
        }
        else
        {
          wcscat_s(Destination, 0x100u, L"Datacenter Edition for Itanium-based Systems");
        }
      }
      else if ( SystemInfo.wProcessorArchitecture == 9 )
      {
        if ( SLOBYTE(VersionInformation[70]) >= 0 )
        {
          if ( (VersionInformation[70] & 2) != 0 )
            wcscat_s(Destination, 0x100u, L"Enterprise x64 Edition");
          else
            wcscat_s(Destination, 0x100u, L"Standard x64 Edition");
        }
        else
        {
          wcscat_s(Destination, 0x100u, L"Datacenter x64 Edition");
        }
      }
      else if ( (VersionInformation[70] & 0x4000) != 0 )
      {
        wcscat_s(Destination, 0x100u, L"Compute Cluster Edition");
      }
      else if ( SLOBYTE(VersionInformation[70]) >= 0 )
      {
        if ( (VersionInformation[70] & 2) != 0 )
        {
          wcscat_s(Destination, 0x100u, L"Enterprise Edition");
        }
        else if ( (VersionInformation[70] & 0x400) != 0 )
        {
          wcscat_s(Destination, 0x100u, L"Web Edition");
        }
        else
        {
          wcscat_s(Destination, 0x100u, L"Standard Edition");
        }
      }
      else
      {
        wcscat_s(Destination, 0x100u, L"Datacenter Edition");
      }
    }
    if ( VersionInformation[1] == 5 )
    {
LABEL_85:
      if ( VersionInformation[2] != 1 )
        goto LABEL_104;
      wcscat_s(Destination, 0x100u, L"Windows XP ");
      if ( (VersionInformation[70] & 0x200) != 0 )
        wcscat_s(Destination, 0x100u, L"Home Edition");
      else
        wcscat_s(Destination, 0x100u, L"Professional");
      if ( VersionInformation[1] == 5 )
      {
LABEL_104:
        if ( VersionInformation[2] == 0 )
        {
          wcscat_s(Destination, 0x100u, L"Windows 2000 ");
          if ( BYTE2(VersionInformation[70]) == 1 )
          {
            wcscat_s(Destination, 0x100u, L"Professional");
          }
          else if ( SLOBYTE(VersionInformation[70]) >= 0 )
          {
            if ( (VersionInformation[70] & 2) != 0 )
              wcscat_s(Destination, 0x100u, L"Advanced Server");
            else
              wcscat_s(Destination, 0x100u, L"Server");
          }
          else
          {
            wcscat_s(Destination, 0x100u, L"Datacenter Server");
          }
        }
      }
    }
  }
  if ( wcslen((const unsigned __int16 *)&VersionInformation[5]) != 0 )
  {
    wcscat_s(Destination, 0x100u, L" ");
    wcscat_s(Destination, 0x100u, (const wchar_t *)&VersionInformation[5]);
  }
  memset(Source, 0, sizeof(Source));
  wsprintfW(Source, L" (build %d)", VersionInformation[3]);
  wcscat_s(Destination, 0x100u, Source);
  if ( VersionInformation[1] >= 6u )
  {
    if ( SystemInfo.wProcessorArchitecture == 9 )
    {
      wcscat_s(Destination, 0x100u, L", 64-bit");
    }
    else if ( SystemInfo.wProcessorArchitecture == 0 )
    {
      wcscat_s(Destination, 0x100u, L", 32-bit");
    }
  }
  wcscpy_s(v11, 0x100u, Destination);
  return 1;
}

// Address: 0x10002FF0
int __thiscall sub_10002FF0(int this, void *Source)
{
  *(_DWORD *)(this + 24) = 15;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 4) = 0;
  sub_10003230(Source, strlen((const char *)Source));
  return this;
}

// Address: 0x10003060
_DWORD *__stdcall sub_10003060(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  a1[5] = sub_100031C0();
  a1[6] = 0;
  return a1;
}

// Address: 0x100030E0
int __thiscall sub_100030E0(int this, _DWORD *a2, unsigned int a3, char *a4)
{
  char *v5; // edi
  unsigned int v7; // eax
  bool v8; // zf
  _DWORD *v9; // edx
  rsize_t v10; // ecx
  void **v11; // ebx
  void *v12; // eax
  bool v13; // cf

  if ( a2[5] < a3 )
    sub_10007048();
  v5 = (char *)(a2[5] - a3);
  if ( a4 < v5 )
    v5 = a4;
  if ( (_DWORD *)this == a2 )
  {
    sub_10003310(&v5[a3], -1);
    sub_10003310(0, a3);
    return this;
  }
  if ( v5 == (char *)-1 )
    sub_10007010();
  v7 = *(_DWORD *)(this + 24);
  if ( v7 >= (unsigned int)v5 )
  {
    v8 = v5 == nullptr;
    if ( v5 == nullptr )
    {
      *(_DWORD *)(this + 20) = 0;
      if ( v7 < 0x10 )
        *(_BYTE *)(this + 4) = 0;
      else
        **(_BYTE **)(this + 4) = 0;
      return this;
    }
  }
  else
  {
    sub_100034A0(v5, *(_DWORD *)(this + 20));
    v8 = v5 == nullptr;
  }
  if ( !v8 )
  {
    if ( a2[6] < 0x10u )
      v9 = a2 + 1;
    else
      v9 = (_DWORD *)a2[1];
    v10 = *(_DWORD *)(this + 24);
    v11 = (void **)(this + 4);
    if ( v10 < 0x10 )
      v12 = (void *)(this + 4);
    else
      v12 = *v11;
    memcpy_s(v12, v10, (char *)v9 + a3, (const rsize_t)v5);
    v13 = *(_DWORD *)(this + 24) < 0x10u;
    *(_DWORD *)(this + 20) = v5;
    if ( !v13 )
      v11 = (void **)*v11;
    v5[(_DWORD)v11] = 0;
  }
  return this;
}

// Address: 0x100031C0
_DWORD *sub_100031C0()
{
  _DWORD *result; // eax

  result = operator new(0x210u);
  if ( result != nullptr )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}

// Address: 0x100031E0
void __usercall sub_100031E0(int a1@<esi>)
{
  _DWORD **v1; // ecx
  _DWORD *v2; // eax
  _DWORD *v3; // edi

  v1 = *(_DWORD ***)(a1 + 20);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 24) = 0;
  if ( v2 != *(_DWORD **)(a1 + 20) )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != *(_DWORD **)(a1 + 20) );
  }
  operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
}

// Address: 0x10003230
int __fastcall sub_10003230(int a1, int a2, _BYTE *Source, char *SourceSize)
{
  unsigned int v5; // edx
  _DWORD *v6; // eax
  unsigned int v7; // ecx
  int v8; // ecx
  char *v10; // eax
  bool v11; // zf
  rsize_t v12; // ecx
  void **v13; // ebx
  void *v14; // eax
  bool v15; // cf

  if ( Source != nullptr )
  {
    v5 = *(_DWORD *)(a1 + 24);
    v6 = (_DWORD *)(a1 + 4);
    v7 = v5 < 0x10 ? a1 + 4 : *v6;
    if ( (unsigned int)Source >= v7 )
    {
      v8 = v5 < 0x10 ? a1 + 4 : *v6;
      if ( v8 + *(_DWORD *)(a1 + 20) > (unsigned int)Source )
      {
        if ( v5 >= 0x10 )
          v6 = (_DWORD *)*v6;
        return sub_100030E0(a1, (_DWORD *)a1, Source - (_BYTE *)v6, SourceSize);
      }
    }
  }
  if ( SourceSize == (char *)-1 )
    sub_10007010();
  v10 = *(char **)(a1 + 24);
  if ( v10 >= SourceSize )
  {
    v11 = SourceSize == nullptr;
    if ( SourceSize == nullptr )
    {
      *(_DWORD *)(a1 + 20) = 0;
      if ( (unsigned int)v10 < 0x10 )
        *(_BYTE *)(a1 + 4) = 0;
      else
        **(_BYTE **)(a1 + 4) = 0;
      return a1;
    }
  }
  else
  {
    sub_100034A0(SourceSize, *(_DWORD *)(a1 + 20));
    v11 = SourceSize == nullptr;
  }
  if ( !v11 )
  {
    v12 = *(_DWORD *)(a1 + 24);
    v13 = (void **)(a1 + 4);
    if ( v12 < 0x10 )
      v14 = (void *)(a1 + 4);
    else
      v14 = *v13;
    memcpy_s(v14, v12, Source, (const rsize_t)SourceSize);
    v15 = *(_DWORD *)(a1 + 24) < 0x10u;
    *(_DWORD *)(a1 + 20) = SourceSize;
    if ( !v15 )
      v13 = (void **)*v13;
    SourceSize[(_DWORD)v13] = 0;
  }
  return a1;
}

// Address: 0x10003310
_DWORD *__thiscall sub_10003310(_DWORD *this, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // ebp
  _DWORD *v9; // edx
  unsigned int v10; // eax
  bool v11; // cf
  _DWORD *v13; // [esp+10h] [ebp+4h]

  if ( *(this + 5) < a2 )
    sub_10007048();
  v5 = a3;
  v6 = *(this + 5) - a2;
  if ( v6 < a3 )
    v5 = *(this + 5) - a2;
  if ( v5 != 0 )
  {
    v7 = *(this + 6);
    v8 = this + 1;
    if ( v7 < 0x10 )
      v13 = this + 1;
    else
      v13 = (_DWORD *)*v8;
    if ( v7 < 0x10 )
      v9 = this + 1;
    else
      v9 = (_DWORD *)*v8;
    memmove_s((char *)v9 + a2, v7 - a2, (char *)v13 + a2 + v5, v6 - v5);
    v10 = *(this + 5) - v5;
    v11 = *(this + 6) < 0x10u;
    *(this + 5) = v10;
    if ( !v11 )
      v8 = (_DWORD *)*v8;
    *((_BYTE *)v8 + v10) = 0;
  }
  return this;
}

// Address: 0x100033A0
_DWORD *__stdcall sub_100033A0(int a1, int a2, const void *a3)
{
  _DWORD *result; // eax

  result = operator new(0x210u);
  if ( result != nullptr )
    *result = a1;
  if ( result != (_DWORD *)-4 )
    result[1] = a2;
  if ( result != (_DWORD *)-8 )
    qmemcpy(result + 2, a3, 0x208u);
  return result;
}

// Address: 0x100033E0
int __thiscall sub_100033E0(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  _BYTE v3[20]; // [esp+4h] [ebp-50h] BYREF
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v1 = *(this + 6);
  if ( v1 == 8259552 )
  {
    v5 = 15;
    v4 = 0;
    v3[4] = 0;
    sub_10003230((int)v3, 0, "list<T> too long", (char *)0x10);
    pExceptionObject[12] = 0;
    sub_10002040(pExceptionObject, (int)v3);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = v1 + 1;
  *(this + 6) = result;
  return result;
}

// Address: 0x10003480
_DWORD *__thiscall sub_10003480(_DWORD *this, struct std::exception *a2)
{
  sub_10002170((int)this, a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x100034A0
_BYTE *__thiscall sub_100034A0(int this, unsigned int Destination, rsize_t SourceSize)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  size_t v7; // ecx
  const void *v8; // eax
  _BYTE *result; // eax
  int v10; // [esp+0h] [ebp-38h] BYREF
  _DWORD pExceptionObject[3]; // [esp+10h] [ebp-28h] BYREF
  char *v12[6]; // [esp+20h] [ebp-18h] BYREF
  void *Destinationa; // [esp+40h] [ebp+8h]

  v12[2] = (char *)&v10;
  v12[1] = (char *)this;
  v4 = Destination | 0xF;
  if ( (Destination | 0xF) == 0xFFFFFFFF )
  {
    v4 = Destination;
  }
  else
  {
    v5 = *(_DWORD *)(this + 24);
    v6 = v5 >> 1;
    if ( v4 / 3 < v5 >> 1 && v5 <= -2 - v6 )
      v4 = v6 + v5;
  }
  v7 = v4 + 1;
  v12[5] = nullptr;
  if ( v4 == -1 )
  {
    v7 = 0;
  }
  else if ( 0xFFFFFFFF / v7 == 0 )
  {
    v12[0] = nullptr;
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)v12);
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  Destinationa = operator new(v7);
  if ( SourceSize != 0 )
  {
    if ( *(_DWORD *)(this + 24) < 0x10u )
      v8 = (const void *)(this + 4);
    else
      v8 = *(const void **)(this + 4);
    memcpy_s(Destinationa, v4 + 1, v8, SourceSize);
  }
  if ( *(_DWORD *)(this + 24) >= 0x10u )
    operator delete(*(void **)(this + 4));
  result = (_BYTE *)(this + 4);
  *(_BYTE *)(this + 4) = 0;
  *(_DWORD *)(this + 4) = Destinationa;
  *(_DWORD *)(this + 24) = v4;
  *(_DWORD *)(this + 20) = SourceSize;
  if ( v4 >= 0x10 )
    result = Destinationa;
  result[SourceSize] = 0;
  return result;
}

// Address: 0x10003610
void *__stdcall sub_10003610(char *a1)
{
  char *v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 != nullptr )
  {
    if ( 0xFFFFFFFF / (unsigned int)a1 == 0 )
    {
      a1 = nullptr;
      std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&a1);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v1 = nullptr;
  }
  return operator new((size_t)v1);
}

// Address: 0x10003670
std::exception *__thiscall sub_10003670(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10003690
BOOL sub_10003690()
{
  HMODULE ModuleHandleW; // eax
  BOOL (__stdcall *IsWow64Process)(HANDLE, PBOOL); // esi
  HANDLE CurrentProcess; // eax
  BOOL result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  ModuleHandleW = GetModuleHandleW(L"kernel32");
  IsWow64Process = (BOOL (__stdcall *)(HANDLE, PBOOL))GetProcAddress(ModuleHandleW, "IsWow64Process");
  if ( IsWow64Process == nullptr )
    return v4;
  CurrentProcess = GetCurrentProcess();
  result = IsWow64Process(CurrentProcess, &v4);
  if ( result )
    return v4;
  return result;
}

// Address: 0x100036E0
void __cdecl __noreturn sub_100036E0(int pExceptionObject)
{
  _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1_AVCAtlException_ATL__);
}

// Address: 0x10003700
int __cdecl sub_10003700(int a1)
{
  int result; // eax

  result = a1;
  switch ( a1 )
  {
    case 0:
    case 80:
      return result;
    case 12:
      sub_100036E0(-2147024882);
    case 22:
    case 34:
      sub_100036E0(-2147024809);
    default:
      sub_100036E0(-2147467259);
  }
}

// Address: 0x100037A0
_WORD *__usercall sub_100037A0@<eax>(char a1@<al>, HRSRC a2@<ebx>, HMODULE hModule)
{
  _WORD *result; // eax
  _WORD *v5; // esi
  unsigned int v6; // eax
  int v7; // edi
  HRSRC v8; // [esp+0h] [ebp-Ch]

  result = LoadResource(hModule, v8);
  if ( result != nullptr )
  {
    v5 = LockResource(result);
    if ( v5 == nullptr )
      return nullptr;
    v6 = (unsigned int)v5 + SizeofResource(hModule, a2);
    v7 = a1 & 0xF;
    if ( v7 != 0 )
    {
      while ( (unsigned int)v5 < v6 )
      {
        --v7;
        v5 += (unsigned __int16)*v5 + 1;
        if ( v7 == 0 )
          goto LABEL_6;
      }
      return nullptr;
    }
LABEL_6:
    if ( (unsigned int)v5 >= v6 )
      return nullptr;
    return *v5 != 0 ? v5 : nullptr;
  }
  return result;
}

// Address: 0x10003800
HMODULE __cdecl sub_10003800(unsigned int a1)
{
  HMODULE v1; // esi
  HRSRC Resource; // ebx
  int v4; // [esp+10h] [ebp-4h]

  v1 = (HMODULE)sub_1000717D(0);
  v4 = 1;
  if ( v1 == nullptr )
    return nullptr;
  while ( 1 )
  {
    Resource = FindResourceExW(v1, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a1 >> 4) + 1), 0);
    if ( Resource != nullptr && sub_100037A0(a1, Resource, v1) != nullptr )
      break;
    v1 = (HMODULE)sub_1000717D(v4++);
    if ( v1 == nullptr )
      return nullptr;
  }
  return v1;
}

// Address: 0x10003880
BOOL sub_10003880()
{
  _DWORD *v0; // esi
  HMODULE ModuleHandleW; // eax
  BOOL (__stdcall *IsWow64Process)(HANDLE, PBOOL); // eax
  BOOL (__stdcall *v3)(HANDLE, PBOOL); // edi
  HANDLE CurrentProcess; // eax
  HANDLE Thread; // eax
  HKEY phkResult; // [esp+8h] [ebp-128h] BYREF
  BOOL (__stdcall *v8)(HANDLE, PBOOL); // [esp+Ch] [ebp-124h] BYREF
  _DWORD VersionInformation[71]; // [esp+10h] [ebp-120h] BYREF

  v0 = lpParameter;
  memset(&VersionInformation[1], 0, 0x118u);
  VersionInformation[0] = 284;
  GetVersionExW((LPOSVERSIONINFOW)VersionInformation);
  v0[20] = VersionInformation[1] >= 6u;
  v8 = nullptr;
  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  IsWow64Process = (BOOL (__stdcall *)(HANDLE, PBOOL))GetProcAddress(ModuleHandleW, "IsWow64Process");
  v3 = IsWow64Process;
  if ( IsWow64Process != nullptr )
  {
    CurrentProcess = GetCurrentProcess();
    v3(CurrentProcess, (PBOOL)&v8);
    IsWow64Process = v8;
  }
  v0[21] = IsWow64Process;
  phkResult = nullptr;
  if ( RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Mediaweb\\SheriffClass\\Config",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         nullptr) == 0 )
    RegCloseKey(phkResult);
  memset(v0, 0, 0x30u);
  Thread = CreateThread(nullptr, 0, StartAddress, v0, 0, nullptr);
  v0[18] = Thread;
  return Thread != nullptr;
}

// Address: 0x10003990
DWORD sub_10003990()
{
  LPVOID v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  DWORD result; // eax

  v0 = lpParameter;
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)lpParameter + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)lpParameter + 2);
  *((_DWORD *)v0 + 19) = 1;
  LeaveCriticalSection(v1);
  for ( result = WaitForSingleObject(*((HANDLE *)v0 + 18), 0);
        result != 0;
        result = WaitForSingleObject(*((HANDLE *)v0 + 18), 0) )
  {
    Sleep(0x3E8u);
  }
  *((_DWORD *)v0 + 18) = 0;
  return result;
}

// Address: 0x100039F0
int __userpurge sub_100039F0@<eax>(LPCWSTR lpSubKey@<ecx>, HKEY hKey@<edx>, const WCHAR *a3@<esi>, int a4)
{
  HKEY phkResult; // [esp+0h] [ebp-8h] BYREF
  BYTE Data[4]; // [esp+4h] [ebp-4h] BYREF

  phkResult = nullptr;
  if ( RegCreateKeyExW(hKey, lpSubKey, 0, nullptr, 0, 0xF003Fu, nullptr, &phkResult, nullptr) == 0 )
  {
    *(_DWORD *)Data = 1;
    if ( a4 != 0 )
    {
      if ( RegSetValueExW(phkResult, a3, 0, 4u, Data, 4u) != 0 )
      {
        RegCloseKey(phkResult);
        return 0;
      }
    }
    else
    {
      RegDeleteValueW(phkResult, a3);
    }
    RegCloseKey(phkResult);
  }
  return 1;
}

// Address: 0x10003A80
int __userpurge sub_10003A80@<eax>(HWND a1@<esi>, wchar_t *String2)
{
  WCHAR ClassName[260]; // [esp+0h] [ebp-20Ch] BYREF

  memset(ClassName, 0, sizeof(ClassName));
  GetClassNameW(a1, ClassName, 260);
  if ( _wcsicmp(ClassName, String2) != 0 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)String2 - 1) <= 0 )
      (*(void (__stdcall **)(wchar_t *))(**((_DWORD **)String2 - 4) + 4))(String2 - 8);
    return 0;
  }
  else
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)String2 - 1) <= 0 )
      (*(void (__stdcall **)(wchar_t *))(**((_DWORD **)String2 - 4) + 4))(String2 - 8);
    return 1;
  }
}

// Address: 0x10003B50
_DWORD *__thiscall sub_10003B50(_DWORD *this, DWORD th32ProcessID)
{
  _DWORD *v2; // ebx
  int v3; // esi
  HANDLE Toolhelp32Snapshot; // eax
  void *v5; // edi
  volatile signed __int32 *v6; // esi
  bool v7; // cc
  MODULEENTRY32W me; // [esp+1Ch] [ebp-440h] BYREF
  int v11; // [esp+458h] [ebp-4h]

  v2 = this;
  memset(&me, 0, sizeof(me));
  v3 = (*(int (__thiscall **)(int *))(dword_1001F3C4 + 12))(&dword_1001F3C4) + 16;
  v11 = 0;
  Toolhelp32Snapshot = CreateToolhelp32Snapshot(8u, th32ProcessID);
  v5 = Toolhelp32Snapshot;
  if ( Toolhelp32Snapshot == (HANDLE)-1 )
  {
    sub_100068F0(&unk_1001AA54, (int)v2);
    v6 = (volatile signed __int32 *)(v3 - 16);
    v11 = -1;
    v7 = _InterlockedDecrement(v6 + 3) <= 0;
  }
  else
  {
    me.dwSize = 1064;
    if ( Module32FirstW(Toolhelp32Snapshot, &me) )
    {
      wcslen(me.szModule);
      sub_10006B30(me.szModule);
      v2 = this;
    }
    CloseHandle(v5);
    v6 = (volatile signed __int32 *)(v3 - 16);
    *v2 = sub_10006BD0() + 16;
    v11 = -1;
    v7 = _InterlockedDecrement(v6 + 3) <= 0;
  }
  if ( v7 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v6 + 4))(v6);
  return v2;
}

// Address: 0x10003CB0
int __userpurge sub_10003CB0@<eax>(int a1@<ebx>, const unsigned __int16 *a2)
{
  HANDLE Toolhelp32Snapshot; // esi
  int v3; // edi
  PROCESSENTRY32W pe; // [esp+8h] [ebp-230h] BYREF

  Toolhelp32Snapshot = CreateToolhelp32Snapshot(2u, 0);
  memset(&pe.cntUsage, 0, 0x228u);
  v3 = 0;
  pe.dwSize = 556;
  Process32FirstW(Toolhelp32Snapshot, &pe);
  while ( wcscmp(pe.szExeFile, a2) != 0 || pe.th32ProcessID != a1 )
  {
    if ( !Process32NextW(Toolhelp32Snapshot, &pe) )
      goto LABEL_7;
  }
  v3 = 1;
LABEL_7:
  CloseHandle(Toolhelp32Snapshot);
  if ( _InterlockedDecrement((volatile signed __int32 *)a2 - 1) <= 0 )
    (*(void (__stdcall **)(const unsigned __int16 *))(**((_DWORD **)a2 - 4) + 4))(a2 - 8);
  return v3;
}

// Address: 0x10003DA0
HANDLE __stdcall sub_10003DA0(struct _RTL_CRITICAL_SECTION *a1)
{
  HANDLE result; // eax
  void *v2; // esi
  LONG LockCount; // esi
  wchar_t *v4; // edx
  int v5; // esi
  wchar_t *v6; // esi
  wchar_t *v7; // eax
  int v8; // edx
  wchar_t v9; // cx
  const wchar_t *v10; // ecx
  const wchar_t *v11; // eax
  bool v12; // cf
  wchar_t v13; // dx
  int v14; // eax
  DWORD LastError; // esi
  const wchar_t *v16; // ecx
  WCHAR *szExeFile; // eax
  bool v18; // cf
  WCHAR v19; // dx
  int v20; // eax
  DWORD v21; // esi
  LONG v22; // esi
  wchar_t *String; // [esp+14h] [ebp-454h] BYREF
  HANDLE hSnapshot; // [esp+18h] [ebp-450h]
  PROCESSENTRY32W pe; // [esp+1Ch] [ebp-44Ch] BYREF
  _WORD v26[260]; // [esp+24Ch] [ebp-21Ch] BYREF
  int v27; // [esp+464h] [ebp-4h]

  memset(&pe.cntUsage, 0, 0x228u);
  pe.dwSize = 556;
  result = CreateToolhelp32Snapshot(2u, 0);
  v2 = result;
  hSnapshot = result;
  if ( result != (HANDLE)-1 )
  {
    if ( Process32FirstW(result, &pe) )
    {
      EnterCriticalSection(a1 + 2);
      LockCount = a1[3].LockCount;
      LeaveCriticalSection(a1 + 2);
      if ( LockCount == 0 )
      {
        do
        {
          if ( a1[1].DebugInfo != nullptr && wcscmp(pe.szExeFile, L"regedit.exe") == 0 )
            sub_100041E0(pe.th32ProcessID);
          if ( a1[1].RecursionCount != 0 )
          {
            sub_100068F0(pe.szExeFile, (int)&String);
            v27 = 0;
            memset(v26, 0, sizeof(v26));
            v4 = String;
            v5 = *((_DWORD *)String - 3);
            if ( ((1 - *((_DWORD *)String - 1)) | (*((_DWORD *)String - 2) - v5)) < 0 )
            {
              sub_10006D80(*((_DWORD *)String - 3));
              v4 = String;
            }
            _wcslwr_s(v4, v5 + 1);
            if ( v5 < 0 || v5 > *((_DWORD *)String - 2) )
              sub_100036E0(-2147024809);
            *((_DWORD *)String - 3) = v5;
            String[v5] = 0;
            v6 = String;
            v7 = String;
            v8 = (char *)v26 - (char *)String;
            do
            {
              v9 = *v7;
              *(wchar_t *)((char *)v7 + v8) = *v7;
              ++v7;
            }
            while ( v9 != 0 );
            v10 = L"taskmgr.exe";
            v11 = v26;
            while ( 1 )
            {
              v12 = *v11 < *v10;
              if ( *v11 != *v10 )
                break;
              if ( *v11 == 0 )
                goto LABEL_20;
              v13 = v11[1];
              v12 = v13 < v10[1];
              if ( v13 != v10[1] )
                break;
              v11 += 2;
              v10 += 2;
              if ( v13 == 0 )
              {
LABEL_20:
                v14 = 0;
                goto LABEL_22;
              }
            }
            v14 = -v12 - (v12 - 1);
LABEL_22:
            if ( v14 == 0 )
            {
              LastError = 0;
              if ( sub_10006660(v10) == 0 || sub_10006750() == 0 )
                LastError = GetLastError();
              SetLastError(LastError);
              v6 = String;
            }
            v27 = -1;
            if ( _InterlockedDecrement((volatile signed __int32 *)v6 - 1) <= 0 )
              (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)v6 - 4) + 4))(*((_DWORD *)v6 - 4), v6 - 8);
          }
          if ( a1->OwningThread != nullptr )
          {
            v16 = L"cmd.exe";
            szExeFile = pe.szExeFile;
            while ( 1 )
            {
              v18 = *szExeFile < *v16;
              if ( *szExeFile != *v16 )
                break;
              if ( *szExeFile == 0 )
                goto LABEL_35;
              v19 = szExeFile[1];
              v18 = v19 < v16[1];
              if ( v19 != v16[1] )
                break;
              szExeFile += 2;
              v16 += 2;
              if ( v19 == 0 )
              {
LABEL_35:
                v20 = 0;
                goto LABEL_37;
              }
            }
            v20 = -v18 - (v18 - 1);
LABEL_37:
            if ( v20 == 0 )
            {
              v21 = 0;
              if ( sub_10006660(v16) == 0 || sub_10006750() == 0 )
                v21 = GetLastError();
              SetLastError(v21);
            }
          }
          if ( a1[1].LockSemaphore != nullptr )
          {
            if ( wcscmp(pe.szExeFile, L"msinfo32.exe") == 0 )
              sub_100041E0(pe.th32ProcessID);
            if ( wcscmp(pe.szExeFile, L"HelpCtr.exe") == 0 )
              sub_100041E0(pe.th32ProcessID);
            if ( wcscmp(pe.szExeFile, L"msconfig.exe") == 0 )
              sub_100041E0(pe.th32ProcessID);
          }
          if ( a1->SpinCount != 0 && wcscmp(pe.szExeFile, L"mshta.exe") == 0 )
            sub_100041E0(pe.th32ProcessID);
          if ( !Process32NextW(hSnapshot, &pe) )
            break;
          EnterCriticalSection(a1 + 2);
          v22 = a1[3].LockCount;
          LeaveCriticalSection(a1 + 2);
        }
        while ( v22 == 0 );
      }
      return (HANDLE)CloseHandle(hSnapshot);
    }
    else
    {
      return (HANDLE)CloseHandle(v2);
    }
  }
  return result;
}

// Address: 0x100041E0
int __stdcall sub_100041E0(DWORD dwProcessId)
{
  HANDLE CurrentProcess; // eax
  HANDLE v2; // eax
  HANDLE TokenHandle; // [esp+4h] [ebp-14h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [esp+8h] [ebp-10h] BYREF

  TokenHandle = (HANDLE)-1;
  memset(&NewState, 0, sizeof(NewState));
  CurrentProcess = GetCurrentProcess();
  if ( !OpenProcessToken(CurrentProcess, 0x28u, &TokenHandle) )
    return 0;
  if ( !LookupPrivilegeValueW(nullptr, L"SeDebugPrivilege", &NewState.Privileges[0].Luid) )
    return 0;
  NewState.PrivilegeCount = 1;
  NewState.Privileges[0].Attributes = 2;
  if ( !AdjustTokenPrivileges(TokenHandle, false, &NewState, 0, nullptr, nullptr) || GetLastError() != 0 )
    return 0;
  if ( TokenHandle != nullptr )
    CloseHandle(TokenHandle);
  v2 = OpenProcess(0x1FFFFFu, false, dwProcessId);
  TokenHandle = v2;
  if ( v2 == nullptr )
    return 0;
  TerminateProcess(v2, 0);
  CloseHandle(TokenHandle);
  return 1;
}

// Address: 0x100042C0
BOOL __stdcall sub_100042C0(HWND hWnd, LPARAM lParam)
{
  wchar_t *v2; // ecx
  __int16 v3; // ax
  wchar_t *v5[3]; // [esp-4h] [ebp-21Ch] BYREF
  wchar_t **dwResult; // [esp+8h] [ebp-210h] BYREF
  WCHAR String[260]; // [esp+Ch] [ebp-20Ch] BYREF

  memset(String, 0, sizeof(String));
  GetWindowTextW(hWnd, String, 260);
  v5[0] = v2;
  dwResult = v5;
  sub_100068F0(String, (int)v5);
  v3 = sub_10004780(hWnd, v5[0]);
  if ( v3 != 0 )
  {
    if ( v3 == 1 )
      EnumChildWindows(hWnd, EnumFunc, lParam);
    return true;
  }
  else
  {
    dwResult = nullptr;
    SendMessageTimeoutW(hWnd, 0x112u, 0xF060u, 0, 0, 0x7D0u, (PDWORD_PTR)&dwResult);
    SendMessageTimeoutW(hWnd, 0x111u, 0xF060u, 0, 0, 0x7D0u, (PDWORD_PTR)&dwResult);
    return true;
  }
}

// Address: 0x100043B0
BOOL __stdcall EnumFunc(HWND hWnd, LPARAM a2)
{
  ULONG_PTR v2; // eax
  wchar_t *v3; // esi
  wchar_t *v4; // eax
  ULONG_PTR dwResult; // [esp+10h] [ebp-428h] BYREF
  wchar_t *Str; // [esp+14h] [ebp-424h]
  WCHAR ClassName[260]; // [esp+18h] [ebp-420h] BYREF
  WCHAR String[260]; // [esp+220h] [ebp-218h] BYREF
  int v10; // [esp+434h] [ebp-4h]

  memset(ClassName, 0, sizeof(ClassName));
  GetClassNameW(hWnd, ClassName, 260);
  if ( wcscmp(ClassName, L"button") == 0 )
  {
    Str = (wchar_t *)((*(int (__thiscall **)(int *))(dword_1001F3C4 + 12))(&dword_1001F3C4) + 16);
    v10 = 0;
    memset(String, 0, sizeof(String));
    GetWindowTextW(hWnd, String, 260);
    sub_100068F0(String, (int)&dwResult);
    LOBYTE(v10) = 1;
    sub_100069C0();
    LOBYTE(v10) = 0;
    v2 = dwResult - 16;
    if ( _InterlockedDecrement((volatile signed __int32 *)(dwResult - 16 + 12)) <= 0 )
      (*(void (__stdcall **)(ULONG_PTR))(**(_DWORD **)v2 + 4))(v2);
    v3 = Str;
    if ( *((int *)Str - 3) >= 0 )
    {
      v4 = wcsstr(Str, &SubStr);
      if ( v4 != nullptr && v4 - v3 > -1 && *(_DWORD *)(a2 + 4) != 0 )
      {
        dwResult = 0;
        SendMessageTimeoutW(hWnd, 0x112u, 0xF060u, 0, 0, 0x7D0u, &dwResult);
      }
    }
    v10 = -1;
    if ( _InterlockedDecrement((volatile signed __int32 *)v3 - 1) <= 0 )
      (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)v3 - 4) + 4))(*((_DWORD *)v3 - 4), v3 - 8);
  }
  return true;
}

// Address: 0x100045B0
_DWORD *__fastcall sub_100045B0(_DWORD *a1, HWND a2)
{
  int (__thiscall *v4)(int *); // edx
  HWND Window; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // esi
  int v12[2]; // [esp+10h] [ebp-428h] BYREF
  WCHAR String[260]; // [esp+18h] [ebp-420h] BYREF
  WCHAR ClassName[260]; // [esp+220h] [ebp-218h] BYREF
  int v15; // [esp+434h] [ebp-4h]

  v15 = 0;
  v4 = *(int (__thiscall **)(int *))(dword_1001F3C4 + 12);
  v12[1] = (int)a1;
  *a1 = v4(&dword_1001F3C4) + 16;
  v15 = 0;
  memset(ClassName, 0, sizeof(ClassName));
  GetClassNameW(a2, ClassName, 260);
  if ( _wcsicmp(ClassName, L"CabinetWClass") == 0 )
  {
    Window = FindWindowExW(a2, nullptr, L"WorkerW", nullptr);
    if ( Window != nullptr )
    {
      v6 = FindWindowExW(Window, nullptr, L"ReBarWindow32", nullptr);
      if ( v6 != nullptr )
      {
        v7 = FindWindowExW(v6, nullptr, L"Address Band Root", nullptr);
        if ( v7 != nullptr )
        {
          v8 = FindWindowExW(v7, nullptr, L"msctls_progress32", nullptr);
          if ( v8 != nullptr )
          {
            v9 = FindWindowExW(v8, nullptr, L"Breadcrumb Parent", nullptr);
            if ( v9 != nullptr )
            {
              v10 = FindWindowExW(v9, nullptr, L"ToolBarWindow32", nullptr);
              if ( v10 != nullptr )
              {
                memset(String, 0, sizeof(String));
                GetWindowTextW(v10, String, 260);
                sub_100068F0(String, (int)v12);
                v15 = 1;
                sub_100069C0();
                sub_100069A0();
              }
            }
          }
        }
      }
    }
  }
  return a1;
}

// Address: 0x10004780
int __thiscall sub_10004780(_WORD *this, HWND hWnd, wchar_t *String1)
{
  _WORD *v3; // edi
  wchar_t *v4; // esi
  wchar_t *v5; // ecx
  wchar_t *v6; // ecx
  wchar_t *v7; // ecx
  wchar_t *v8; // ecx
  DWORD v9; // ebx
  wchar_t *v10; // ecx
  wchar_t *v11; // ecx
  DWORD v12; // ebx
  bool v13; // zf
  wchar_t *v15; // ecx
  wchar_t *v16; // ecx
  wchar_t *v17; // ecx
  wchar_t *v18; // ecx
  DWORD v19; // ebx
  wchar_t *v20; // ecx
  DWORD v21; // ebx
  wchar_t *v22; // ecx
  WCHAR *v23; // ecx
  DWORD v24; // ebx
  wchar_t *v25; // ecx
  wchar_t *v26; // ecx
  DWORD v27; // ebx
  HWND Window; // eax
  wchar_t *v29; // ecx
  wchar_t *v30; // ecx
  DWORD v31; // ebx
  int v32; // eax
  wchar_t *v33; // ecx
  wchar_t *v34; // ecx
  DWORD v35; // ebx
  wchar_t *v36; // ecx
  wchar_t *v37; // ecx
  wchar_t *v38; // ecx
  DWORD v39; // ebx
  DWORD v40; // ebx
  wchar_t *v41; // ecx
  wchar_t *v42; // ecx
  DWORD v43; // ebx
  DWORD v44; // ebx
  int v45; // ecx
  int v46; // eax
  wchar_t *v47; // ecx
  DWORD v48; // ebx
  wchar_t *v49; // ecx
  DWORD v50; // ebx
  wchar_t *v51; // ecx
  DWORD v52; // ebx
  wchar_t *v53; // ecx
  HWND WindowW; // eax
  HWND v55; // eax
  HWND v56; // esi
  wchar_t *v57[6]; // [esp-4h] [ebp-248h] BYREF
  wchar_t *SubStr; // [esp+14h] [ebp-230h] BYREF
  int v59; // [esp+18h] [ebp-22Ch] BYREF
  int v60; // [esp+1Ch] [ebp-228h] BYREF
  DWORD dwProcessId; // [esp+20h] [ebp-224h] BYREF
  _WORD *v62; // [esp+24h] [ebp-220h]
  wchar_t **v63; // [esp+28h] [ebp-21Ch]
  WCHAR ClassName[260]; // [esp+2Ch] [ebp-218h] BYREF
  int v65; // [esp+240h] [ebp-4h]

  v3 = this;
  v62 = this;
  v65 = 0;
  dwProcessId = 0;
  GetWindowThreadProcessId(hWnd, &dwProcessId);
  v4 = String1;
  if ( wcscmp(String1, word_1001AA54) == 0 )
  {
LABEL_134:
    v65 = -1;
    if ( _InterlockedDecrement((volatile signed __int32 *)v4 - 1) <= 0 )
      (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)v4 - 4) + 4))(*((_DWORD *)v4 - 4), v4 - 8);
    return -1;
  }
  if ( _wcsicmp(String1, L"Default IME") == 0 || _wcsicmp(String1, L"GDI+ Window") == 0 || dwProcessId == 0 )
  {
    v4 = String1;
    goto LABEL_134;
  }
  sub_100045B0(&v59, hWnd);
  LOBYTE(v65) = 1;
  v60 = (*(int (__thiscall **)(int *))(dword_1001F3C4 + 12))(&dword_1001F3C4) + 16;
  LOBYTE(v65) = 2;
  if ( v3[22] != 0
    && (sub_10006A50((wchar_t *)&word_1001AC90) == 0
     || sub_10006A50((wchar_t *)&word_1001ACA4) == 0
     || sub_10006A50((wchar_t *)&word_1001ACAC) == 0
     || wcsstr(String1, aWindows) != nullptr
     || wcsstr(String1, &word_1001ACD8) != nullptr
     || wcsstr(String1, &word_1001AD08) != nullptr
     || wcsstr(String1, &word_1001AD24) != nullptr) )
  {
    v57[0] = v5;
    SubStr = (wchar_t *)v57;
    sub_100068F0((void *)L"CabinetWClass", (int)v57);
    if ( sub_10003A80(hWnd, v57[0]) != 0 )
      goto LABEL_24;
    v57[0] = v6;
    SubStr = (wchar_t *)v57;
    sub_100068F0((void *)L"MMCMainFrame", (int)v57);
    if ( sub_10003A80(hWnd, v57[0]) != 0 )
      goto LABEL_24;
    v57[0] = v7;
    SubStr = (wchar_t *)v57;
    sub_100068F0(L"WindowsForms10.Window.8.app.0.21d1674", (int)v57);
    if ( sub_10003A80(hWnd, v57[0]) != 0 )
      goto LABEL_24;
  }
  if ( *(_DWORD *)v3 == 0 )
    goto LABEL_33;
  if ( sub_10006A50((wchar_t *)&word_1001ADAC) > -1 )
  {
    memset(ClassName, 0, sizeof(ClassName));
    GetClassNameW(hWnd, ClassName, 260);
    if ( _wcsicmp(ClassName, L"#32770") != 0 || FindWindowExW(hWnd, nullptr, L"SysTabControl32", nullptr) == nullptr )
      goto LABEL_33;
    v9 = dwProcessId;
    v57[0] = v8;
    SubStr = (wchar_t *)v57;
    sub_100068F0(L"rundll32.exe", (int)v57);
    if ( sub_10003CB0(v9, v57[0]) != 0 )
    {
LABEL_24:
      sub_100069A0();
      sub_100069A0();
      sub_100069A0();
      return 0;
    }
    v57[0] = v10;
    SubStr = (wchar_t *)v57;
    v11 = L"dccw.exe";
LABEL_22:
    v12 = dwProcessId;
    sub_100068F0(v11, (int)v57);
    v13 = sub_10003CB0(v12, v57[0]) == 0;
    goto LABEL_23;
  }
  if ( sub_10006A50((wchar_t *)&word_1001AE18) != 0
    && sub_10006A50((wchar_t *)&word_1001AE28) != 0
    && sub_10006A50((wchar_t *)&word_1001AE60) != 0 )
  {
    if ( sub_10006A50((wchar_t *)aCleartype) != 0 )
    {
      if ( sub_10006A50((wchar_t *)&word_1001AED4) != 0 )
        goto LABEL_33;
      v57[0] = v17;
      SubStr = (wchar_t *)v57;
      sub_100068F0((void *)L"#32770", (int)v57);
      v13 = sub_10003A80(hWnd, v57[0]) == 0;
      goto LABEL_23;
    }
    v57[0] = v16;
    SubStr = (wchar_t *)v57;
    v11 = L"cttune.exe";
    goto LABEL_22;
  }
  v57[0] = v15;
  SubStr = (wchar_t *)v57;
  sub_100068F0((void *)L"CabinetWClass", (int)v57);
  v13 = sub_10003A80(hWnd, v57[0]) == 0;
LABEL_23:
  if ( !v13 )
    goto LABEL_24;
LABEL_33:
  if ( *((_DWORD *)v3 + 5) == 0 )
    goto LABEL_39;
  if ( sub_10006A50((wchar_t *)&word_1001AEF0) <= -1 )
  {
    if ( sub_10006A50((wchar_t *)&word_1001AF34) != 0
      && sub_10006A50((wchar_t *)&word_1001AF48) != 0
      && (sub_10006A50((wchar_t *)&word_1001AF78) != 0 || *((_DWORD *)v3 + 20) != 1)
      && sub_10006A50((wchar_t *)&word_1001AFB4) != 0
      && sub_10006A50((wchar_t *)&word_1001AFC8) != 0
      && (sub_10006A50((wchar_t *)&word_1001B008) != 0 || *((_DWORD *)v3 + 20) != 1) )
    {
      if ( sub_10006A50((wchar_t *)&word_1001B050) != 0
        && (sub_10006A50((wchar_t *)&word_1001B068) != 0 || *((_DWORD *)v3 + 20) != 1)
        && (sub_10006A50((wchar_t *)&word_1001B078) != 0 || *((_DWORD *)v3 + 20) != 1) )
      {
        goto LABEL_39;
      }
      v31 = dwProcessId;
      v57[0] = v30;
      SubStr = (wchar_t *)v57;
      sub_100068F0(L"rundll32.exe", (int)v57);
      v32 = sub_10003CB0(v31, v57[0]);
    }
    else
    {
      v57[0] = v29;
      SubStr = (wchar_t *)v57;
      sub_100068F0((void *)L"CabinetWClass", (int)v57);
      v32 = sub_10003A80(hWnd, v57[0]);
    }
    if ( v32 != 0 )
      goto LABEL_24;
  }
  else
  {
    sub_10003B50(&SubStr, dwProcessId);
    LOBYTE(v65) = 3;
    sub_100069C0();
    LOBYTE(v65) = 2;
    sub_100069A0();
    if ( sub_10006A20((wchar_t *)L"mshta.exe", (int)&v60) == 0
      || sub_10006A20((wchar_t *)L"Netplwiz.exe", (int)&v60) == 0
      || sub_10006A20((wchar_t *)L"DllHost.exe", (int)&v60) == 0 )
    {
      goto LABEL_24;
    }
    v3 = v62;
  }
LABEL_39:
  if ( *((_DWORD *)v3 + 10) != 0 && sub_10006A50((wchar_t *)&word_1001B084) > -1 )
  {
    v19 = dwProcessId;
    v57[0] = v18;
    SubStr = (wchar_t *)v57;
    sub_100068F0(L"msconfig.exe", (int)v57);
    if ( sub_10003CB0(v19, v57[0]) != 0 )
      goto LABEL_24;
    v21 = dwProcessId;
    v57[0] = v20;
    SubStr = (wchar_t *)v57;
    sub_100068F0(L"msinfo32.exe", (int)v57);
    if ( sub_10003CB0(v21, v57[0]) != 0 )
      goto LABEL_24;
  }
  if ( *((_DWORD *)v3 + 3) != 0 )
  {
    if ( sub_10006A50((wchar_t *)L"MS-DOS") <= -1 )
    {
      if ( sub_10006A50((wchar_t *)L"cmd.exe") <= -1 && sub_10006A50((wchar_t *)&word_1001B09C) <= -1 )
        goto LABEL_47;
      v57[0] = v33;
      SubStr = (wchar_t *)v57;
      v23 = (WCHAR *)L"cmd.exe";
    }
    else
    {
      v57[0] = v22;
      SubStr = (wchar_t *)v57;
      v23 = (WCHAR *)L"kernel32.dll";
    }
    v24 = dwProcessId;
    sub_100068F0(v23, (int)v57);
    if ( sub_10003CB0(v24, v57[0]) != 0 )
      goto LABEL_24;
  }
LABEL_47:
  if ( *((_DWORD *)v3 + 2) == 0 )
    goto LABEL_94;
  if ( sub_10006A50((wchar_t *)&word_1001B0AC) == 0 || sub_10006A50((wchar_t *)&word_1001B0BC) == 0 )
  {
    v40 = dwProcessId;
    v57[0] = v25;
    SubStr = (wchar_t *)v57;
    sub_100068F0((void *)L"explorer.exe", (int)v57);
    if ( sub_10003CB0(v40, v57[0]) != 0 )
    {
      v57[0] = v41;
      SubStr = (wchar_t *)v57;
      sub_100068F0((void *)L"CabinetWClass", (int)v57);
      if ( sub_10003A80(hWnd, v57[0]) != 0 )
        goto LABEL_24;
    }
    goto LABEL_94;
  }
  if ( sub_10006A50((wchar_t *)&word_1001B108) == 0 )
  {
    v27 = dwProcessId;
    v57[0] = v26;
    SubStr = (wchar_t *)v57;
    sub_100068F0((void *)L"explorer.exe", (int)v57);
    if ( sub_10003CB0(v27, v57[0]) == 0 )
      goto LABEL_94;
LABEL_52:
    memset(ClassName, 0, sizeof(ClassName));
    GetClassNameW(hWnd, ClassName, 260);
    if ( _wcsicmp(ClassName, L"#32770") == 0 )
    {
      Window = FindWindowExW(hWnd, nullptr, L"SysTabControl32", nullptr);
      goto LABEL_54;
    }
    goto LABEL_94;
  }
  if ( sub_10006A50((wchar_t *)&word_1001B11C) == 0 )
  {
    v35 = dwProcessId;
    v57[0] = v34;
    SubStr = (wchar_t *)v57;
    sub_100068F0((void *)L"explorer.exe", (int)v57);
    if ( sub_10003CB0(v35, v57[0]) == 0 )
      goto LABEL_94;
    goto LABEL_52;
  }
  if ( sub_10006A20((wchar_t *)&word_1001B124, (int)&String1) == 0 && *((_DWORD *)v3 + 20) == 1 )
  {
    if ( sub_10006A50((wchar_t *)&word_1001B140) == 0 )
      goto LABEL_24;
    v36 = (wchar_t *)&word_1001B178;
    goto LABEL_84;
  }
  if ( sub_10006A50((wchar_t *)&word_1001B1B0) > -1 )
  {
    v57[0] = v37;
    SubStr = (wchar_t *)v57;
    sub_100068F0((void *)L"CabinetWClass", (int)v57);
    if ( sub_10003A80(hWnd, v57[0]) == 0 )
      goto LABEL_94;
    if ( sub_10006A50((wchar_t *)&word_1001B1C8) == 0 )
      goto LABEL_24;
    v36 = (wchar_t *)&unk_1001B210;
LABEL_84:
    if ( sub_10006A50(v36) == 0 )
      goto LABEL_24;
    goto LABEL_94;
  }
  if ( sub_10006A50((wchar_t *)&word_1001B25C) == 0 )
  {
    v39 = dwProcessId;
    v57[0] = v38;
    SubStr = (wchar_t *)v57;
    sub_100068F0(L"rundll32.exe", (int)v57);
    Window = (HWND)sub_10003CB0(v39, v57[0]);
LABEL_54:
    if ( Window != nullptr )
      goto LABEL_24;
  }
LABEL_94:
  if ( *((_DWORD *)v3 + 4) != 0 && (unsigned __int8)sub_10006AE0() != 0 )
  {
    v43 = dwProcessId;
    v57[0] = v42;
    SubStr = (wchar_t *)v57;
    sub_100068F0((void *)L"explorer.exe", (int)v57);
    if ( sub_10003CB0(v43, v57[0]) != 0 )
    {
      memset(ClassName, 0, sizeof(ClassName));
      GetClassNameW(hWnd, ClassName, 260);
      if ( _wcsicmp(ClassName, L"#32770") == 0 )
        goto LABEL_24;
    }
  }
  if ( *((_DWORD *)v3 + 8) != 0
    && (sub_10006A50((wchar_t *)aWindows_0) == 0 || sub_10006A50((wchar_t *)&word_1001B29C) == 0) )
  {
    sub_100068F0(L"taskmgr.exe", (int)&SubStr);
    LOBYTE(v65) = 4;
    sub_10006A80();
    v44 = dwProcessId;
    v63 = v57;
    v46 = sub_10006BD0(v45);
    if ( sub_10003CB0(v44, (const unsigned __int16 *)(v46 + 16)) != 0 )
    {
LABEL_122:
      sub_100069A0();
      goto LABEL_24;
    }
    LOBYTE(v65) = 2;
    sub_100069A0();
    v3 = v62;
  }
  if ( *((_DWORD *)v3 + 7) != 0 )
  {
    sub_100068D0();
    LOBYTE(v65) = 5;
    sub_10006E80(L"%s %s", &word_1001B084, &unk_1001B2AC);
    if ( sub_10006A50(SubStr) <= -1 )
    {
      if ( *((_DWORD *)v62 + 20) == 1
        && (sub_10006A50(WindowName) == 0
         || sub_10006A50((wchar_t *)&word_1001B2C8) == 0
         || sub_10006A50((wchar_t *)&word_1001B2EC) == 0
         || sub_10006A50((wchar_t *)&word_1001B084) == 0) )
      {
        v50 = dwProcessId;
        v57[0] = v49;
        v63 = v57;
        sub_100068F0(L"mmc.exe", (int)v57);
        if ( sub_10003CB0(v50, v57[0]) != 0 )
          goto LABEL_122;
        memset(ClassName, 0, sizeof(ClassName));
        GetClassNameW(hWnd, ClassName, 260);
        if ( wcscmp(ClassName, L"CabinetWClass") == 0
          && (sub_10006A50((wchar_t *)&word_1001B084) == 0
           || sub_10006A50((wchar_t *)&word_1001B2C8) == 0
           || sub_10006A50((wchar_t *)&word_1001B2EC) == 0) )
        {
          goto LABEL_122;
        }
      }
    }
    else
    {
      v48 = dwProcessId;
      v57[0] = v47;
      v63 = v57;
      sub_100068F0(L"rundll32.exe", (int)v57);
      if ( sub_10003CB0(v48, v57[0]) != 0 )
        goto LABEL_122;
    }
    LOBYTE(v65) = 2;
    sub_100069A0();
    v3 = v62;
  }
  if ( *((_DWORD *)v3 + 1) != 0 )
  {
    sub_100068D0();
    LOBYTE(v65) = 6;
    sub_10006E80(L"%s %s", &word_1001B084, &unk_1001B2AC);
    if ( sub_10006A50((wchar_t *)&::SubStr) <= -1 )
    {
      if ( sub_10006A50(SubStr) > -1 || sub_10006A50((wchar_t *)&word_1001B320) > -1 )
      {
        sub_100069A0();
        sub_100069A0();
        sub_100069A0();
        sub_100069A0();
        return 1;
      }
    }
    else
    {
      v52 = dwProcessId;
      v57[0] = v51;
      v63 = v57;
      sub_100068F0(L"mmc.exe", (int)v57);
      if ( sub_10003CB0(v52, v57[0]) != 0 )
        goto LABEL_122;
      v57[0] = v53;
      v63 = v57;
      sub_100068F0((void *)L"MMCMainFrame", (int)v57);
      if ( sub_10003A80(hWnd, v57[0]) != 0 )
        goto LABEL_122;
    }
    if ( sub_10006A50(WindowName) == 0 )
    {
      WindowW = FindWindowW(L"MMCMainFrame", WindowName);
      if ( WindowW != nullptr )
      {
        v55 = FindWindowExW(WindowW, nullptr, L"MDIClient", nullptr);
        if ( v55 != nullptr )
        {
          v56 = FindWindowExW(v55, nullptr, L"MMCChildFrm", nullptr);
          if ( v56 != nullptr )
          {
            memset(ClassName, 0, sizeof(ClassName));
            GetWindowTextW(v56, ClassName, 260);
            if ( wcsstr(ClassName, &::SubStr) != nullptr )
              goto LABEL_122;
          }
        }
      }
    }
    sub_100069A0();
  }
  sub_100069A0();
  sub_100069A0();
  sub_100069A0();
  return -1;
}

// Address: 0x10005510
HMODULE __stdcall sub_10005510(HKEY a1)
{
  HMODULE result; // eax
  HMODULE v2; // esi
  LONG (__stdcall *RegDisableReflectionKey)(HKEY); // eax

  result = LoadLibraryW(L"Advapi32.dll");
  v2 = result;
  if ( result != nullptr )
  {
    RegDisableReflectionKey = (LONG (__stdcall *)(HKEY))GetProcAddress(result, "RegDisableReflectionKey");
    RegDisableReflectionKey(a1);
    return (HMODULE)FreeLibrary(v2);
  }
  return result;
}

// Address: 0x10005540
HMODULE __stdcall sub_10005540(HKEY a1)
{
  HMODULE result; // eax
  HMODULE v2; // esi
  LONG (__stdcall *RegEnableReflectionKey)(HKEY); // eax

  result = LoadLibraryW(L"Advapi32.dll");
  v2 = result;
  if ( result != nullptr )
  {
    RegEnableReflectionKey = (LONG (__stdcall *)(HKEY))GetProcAddress(result, "RegEnableReflectionKey");
    RegEnableReflectionKey(a1);
    return (HMODULE)FreeLibrary(v2);
  }
  return result;
}

// Address: 0x10005570
int __usercall sub_10005570@<eax>(int a1@<edi>)
{
  HKEY phkResult; // [esp+4h] [ebp-218h] BYREF
  DWORD dwDisposition; // [esp+8h] [ebp-214h] BYREF
  int Data; // [esp+Ch] [ebp-210h] BYREF
  WCHAR SubKey[260]; // [esp+10h] [ebp-20Ch] BYREF

  phkResult = nullptr;
  dwDisposition = 0;
  if ( RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         &dwDisposition) != 0 )
    return 0;
  if ( a1 != 0 )
  {
    RegDeleteValueW(phkResult, L"DisallowCpl");
  }
  else
  {
    Data = 1;
    RegSetValueExW(phkResult, L"DisallowCpl", 0, 4u, (const BYTE *)&Data, 4u);
  }
  RegCloseKey(phkResult);
  phkResult = nullptr;
  memset(SubKey, 0, sizeof(SubKey));
  wsprintfW(SubKey, L"%s", L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\DisallowCpl");
  if ( a1 != 0 )
  {
    RegDeleteKeyW(HKEY_CURRENT_USER, SubKey);
    return 1;
  }
  else
  {
    if ( RegCreateKeyExW(HKEY_CURRENT_USER, SubKey, 0, nullptr, 0, 0xF003Fu, nullptr, &phkResult, &dwDisposition) == 0 )
      RegCloseKey(phkResult);
    return 1;
  }
}

// Address: 0x100056E0
LSTATUS __userpurge sub_100056E0@<eax>(const WCHAR *a1@<esi>, int a2)
{
  LSTATUS result; // eax
  HKEY phkResult; // [esp+0h] [ebp-4h] BYREF

  phkResult = nullptr;
  result = RegCreateKeyExW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Control Panel\\don't load",
             0,
             nullptr,
             0,
             0xF003Fu,
             nullptr,
             &phkResult,
             nullptr);
  if ( result == 0 )
  {
    if ( a2 != 0 )
      RegDeleteValueW(phkResult, a1);
    else
      RegSetValueExW(phkResult, a1, 0, 1u, (const BYTE *)a1, 2 * wcslen(a1));
    return RegCloseKey(phkResult);
  }
  return result;
}

// Address: 0x10005770
LSTATUS __userpurge sub_10005770@<eax>(const BYTE *a1@<esi>, int a2, int a3)
{
  LSTATUS result; // eax
  HKEY phkResult; // [esp+0h] [ebp-30h] BYREF
  WCHAR ValueName; // [esp+4h] [ebp-2Ch] BYREF
  int v6; // [esp+6h] [ebp-2Ah]
  int v7; // [esp+Ah] [ebp-26h]
  int v8; // [esp+Eh] [ebp-22h]
  int v9; // [esp+12h] [ebp-1Eh]
  int v10; // [esp+16h] [ebp-1Ah]
  int v11; // [esp+1Ah] [ebp-16h]
  int v12; // [esp+1Eh] [ebp-12h]
  int v13; // [esp+22h] [ebp-Eh]
  int v14; // [esp+26h] [ebp-Ah]
  __int16 v15; // [esp+2Ah] [ebp-6h]

  phkResult = nullptr;
  result = RegCreateKeyExW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\DisallowCpl",
             0,
             nullptr,
             0,
             0xF003Fu,
             nullptr,
             &phkResult,
             nullptr);
  if ( result == 0 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    ValueName = 0;
    wsprintfW(&ValueName, L"%d", a3);
    if ( a2 != 0 )
      RegDeleteValueW(phkResult, &ValueName);
    else
      RegSetValueExW(phkResult, &ValueName, 0, 1u, a1, 2 * wcslen((const unsigned __int16 *)a1));
    return RegCloseKey(phkResult);
  }
  return result;
}

// Address: 0x10005860
int sub_10005860()
{
  char *v0; // esi
  _DWORD *v1; // esi
  void (__stdcall *v2)(HKEY); // edi
  _DWORD *v3; // edi
  void (__stdcall *v4)(HKEY); // esi
  HKEY phkResult; // [esp+10h] [ebp-10h] BYREF
  _DWORD *v7; // [esp+14h] [ebp-Ch]
  LPVOID v8; // [esp+18h] [ebp-8h]
  int v9; // [esp+1Ch] [ebp-4h]

  v0 = (char *)lpParameter;
  v8 = lpParameter;
  memset(lpParameter, 0, 0x30u);
  v1 = v0 + 80;
  v7 = v1;
  if ( *v1 != 0 )
    sub_10005570(1);
  phkResult = nullptr;
  if ( RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         nullptr) != 0 )
  {
    v2 = (void (__stdcall *)(HKEY))RegCloseKey;
  }
  else
  {
    v9 = 1;
    RegDeleteValueW(phkResult, L"NoDispCPL");
    v2 = (void (__stdcall *)(HKEY))RegCloseKey;
    RegCloseKey(phkResult);
  }
  if ( *v1 != 0 )
    sub_10005770((const BYTE *)L"Microsoft.Display", 1, 1);
  else
    sub_100056E0(L"desk.cpl", 1);
  phkResult = nullptr;
  if ( RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         nullptr) == 0 )
  {
    v9 = 1;
    RegDeleteValueW(phkResult, L"NoDevMgrPage");
    v2(phkResult);
  }
  phkResult = nullptr;
  if ( RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Network",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         nullptr) == 0 )
  {
    v9 = 1;
    RegDeleteValueW(phkResult, L"NoNetSetup");
    v2(phkResult);
  }
  v3 = v7;
  if ( *v7 != 0 )
    sub_10005770((const BYTE *)L"Microsoft.NetworkAndSharingCenter", 1, 2);
  else
    sub_100056E0(L"netsetup.cpl", 1);
  if ( *v3 != 0 )
    sub_10005770((const BYTE *)L"Microsoft.UserAccounts", 1, 3);
  else
    sub_100056E0(L"nusrmgr.cpl", 1);
  phkResult = nullptr;
  if ( RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         nullptr) != 0 )
  {
    v4 = (void (__stdcall *)(HKEY))RegCloseKey;
  }
  else
  {
    v9 = 1;
    RegDeleteValueW(phkResult, L"DisableRegistryTools");
    v4 = (void (__stdcall *)(HKEY))RegCloseKey;
    RegCloseKey(phkResult);
  }
  phkResult = nullptr;
  if ( RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         nullptr) == 0 )
  {
    v9 = 1;
    RegDeleteValueW(phkResult, L"NoPropertiesMycomputer");
    v4(phkResult);
  }
  phkResult = nullptr;
  if ( RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         nullptr) == 0 )
  {
    v9 = 1;
    RegDeleteValueW(phkResult, L"DisableTaskMgr");
    v4(phkResult);
  }
  return sub_100060D0(v8);
}

// Address: 0x10005AB0
int __usercall sub_10005AB0@<eax>(int *a1@<ebx>)
{
  _DWORD *v1; // ebp
  bool v2; // zf
  int v3; // eax
  int v4; // edi
  int v5; // edi
  LPVOID v7; // [esp+Ch] [ebp-4h]

  v7 = lpParameter;
  v1 = (char *)lpParameter + 80;
  v2 = *((_DWORD *)lpParameter + 20) == 0;
  qmemcpy(lpParameter, a1, 0x30u);
  if ( !v2 )
    sub_10005570(0);
  v3 = a1[5];
  if ( *v1 != 0 )
    sub_10005770((const BYTE *)L"Microsoft.UserAccounts", v3 == 0, 3);
  else
    sub_100056E0(L"nusrmgr.cpl", v3 == 0);
  sub_100039F0(
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer",
    HKEY_CURRENT_USER,
    L"NoPropertiesMycomputer",
    a1[7]);
  sub_100039F0(
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
    HKEY_CURRENT_USER,
    L"NoDevMgrPage",
    a1[1]);
  v4 = *a1;
  sub_100039F0(L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", HKEY_CURRENT_USER, L"NoDispCPL", *a1);
  if ( *v1 != 0 )
    sub_10005770((const BYTE *)L"Microsoft.Display", v4 == 0, 1);
  else
    sub_100056E0(L"desk.cpl", v4 == 0);
  sub_100060D0(v7);
  v5 = a1[2];
  sub_100039F0(L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Network", HKEY_CURRENT_USER, L"NoNetSetup", v5);
  if ( *v1 != 0 )
    sub_10005770((const BYTE *)L"Microsoft.NetworkAndSharingCenter", v5 == 0, 2);
  else
    sub_100056E0(L"netsetup.cpl", v5 == 0);
  sub_100039F0(
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
    HKEY_CURRENT_USER,
    L"DisableRegistryTools",
    a1[6]);
  return sub_100039F0(
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",
           HKEY_CURRENT_USER,
           L"DisableTaskMgr",
           a1[8]);
}

// Address: 0x10005C10
LSTATUS __usercall sub_10005C10@<eax>(int a1@<edi>)
{
  LSTATUS v1; // eax
  LSTATUS v2; // eax
  LSTATUS v3; // eax
  LSTATUS v4; // eax
  LSTATUS v5; // eax
  LSTATUS v6; // eax
  LSTATUS v7; // eax
  LSTATUS v8; // eax
  LSTATUS v9; // eax
  LSTATUS v10; // eax
  LSTATUS v11; // eax
  LSTATUS result; // eax
  HKEY phkResult; // [esp+Ch] [ebp-10h] BYREF
  BYTE Data[4]; // [esp+10h] [ebp-Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-8h] BYREF
  DWORD Type; // [esp+18h] [ebp-4h] BYREF

  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v1 = 0;
  }
  else
  {
    Type = 4;
    cbData = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"disp", nullptr, &Type, Data, &cbData);
    RegCloseKey(phkResult);
    v1 = *(_DWORD *)Data;
  }
  *(_DWORD *)a1 = v1;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v2 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"devmgr", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v2 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 4) = v2;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v3 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"net", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v3 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 8) = v3;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v4 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"cmd", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v4 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 12) = v4;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v5 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"run", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v5 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 16) = v5;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v6 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"account", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v6 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 20) = v6;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v7 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"regedit", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v7 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 24) = v7;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v8 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"comprop", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v8 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 28) = v8;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v9 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"taskmgr", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v9 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 32) = v9;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v10 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"logoff", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v10 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 36) = v10;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult) != 0 )
  {
    v11 = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"mscfg", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    v11 = *(_DWORD *)Data;
  }
  *(_DWORD *)(a1 + 40) = v11;
  phkResult = nullptr;
  result = RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Mediaweb\\SheriffClass\\Config", 0, 0xF003Fu, &phkResult);
  if ( result != 0 )
  {
    *(_WORD *)(a1 + 44) = 0;
  }
  else
  {
    cbData = 4;
    Type = 4;
    *(_DWORD *)Data = 0;
    RegQueryValueExW(phkResult, L"ctrlpnl", nullptr, &cbData, Data, &Type);
    RegCloseKey(phkResult);
    result = *(_DWORD *)Data;
    *(_WORD *)(a1 + 44) = *(_WORD *)Data;
  }
  return result;
}

// Address: 0x100060D0
LSTATUS __usercall sub_100060D0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  LSTATUS result; // eax
  HKEY phkResult; // [esp+4h] [ebp-40Ch] BYREF
  int Data; // [esp+8h] [ebp-408h] BYREF
  WCHAR SubKey[512]; // [esp+Ch] [ebp-404h] BYREF

  phkResult = nullptr;
  result = RegCreateKeyExW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer",
             0,
             nullptr,
             0,
             0xF003Fu,
             nullptr,
             &phkResult,
             nullptr);
  if ( result == 0 )
  {
    Data = 1;
    if ( *(_DWORD *)(a1 + 84) != 0 && *(_DWORD *)(a1 + 80) != 0 )
      sub_10005510(phkResult);
    if ( a2 != 0 )
      RegSetValueExW(phkResult, L"StartMenuLogoff", 0, 4u, (const BYTE *)&Data, 4u);
    else
      RegDeleteValueW(phkResult, L"StartMenuLogoff");
    if ( *(_DWORD *)(a1 + 84) != 0 && *(_DWORD *)(a1 + 80) != 0 )
      sub_10005540(phkResult);
    RegCloseKey(phkResult);
    memset(SubKey, 0, sizeof(SubKey));
    sub_100067B0(SubKey);
    wsprintfW(&SubKey[wcslen(SubKey)], L"\\%s", L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer");
    return sub_100039F0(SubKey, HKEY_USERS, L"NoLogoff", a2);
  }
  return result;
}

// Address: 0x10006210
DWORD __stdcall StartAddress(LPVOID lpThreadParameter)
{
  return sub_10006220();
}

// Address: 0x10006220
int __usercall sub_10006220@<eax>(struct _RTL_CRITICAL_SECTION *a1@<esi>)
{
  LONG LockCount; // ebx
  LONG v2; // ebx

  EnterCriticalSection(a1 + 2);
  LockCount = a1[3].LockCount;
  LeaveCriticalSection(a1 + 2);
  if ( LockCount == 0 )
  {
    do
    {
      sub_10003DA0(a1);
      EnumWindows(sub_100042C0, (LPARAM)a1);
      Sleep(0x3E8u);
      EnterCriticalSection(a1 + 2);
      v2 = a1[3].LockCount;
      LeaveCriticalSection(a1 + 2);
    }
    while ( v2 == 0 );
  }
  return 0;
}

// Address: 0x10006280
HRESULT sub_10006280()
{
  DWORD Error; // [esp+0h] [ebp-418h] BYREF
  WCHAR NameBuf[260]; // [esp+4h] [ebp-414h] BYREF
  WCHAR ErrorBuf[260]; // [esp+20Ch] [ebp-20Ch] BYREF

  Error = 0;
  memset(ErrorBuf, 0, sizeof(ErrorBuf));
  memset(NameBuf, 0, sizeof(NameBuf));
  return ADsGetLastError(&Error, ErrorBuf, 0x104u, NameBuf, 0x104u);
}

// Address: 0x10006310
void *__stdcall sub_10006310(LPCWSTR lpszPathName)
{
  HRESULT Object; // eax
  void *ppObject; // [esp+8h] [ebp-8h] BYREF
  BSTR bstrString; // [esp+Ch] [ebp-4h] BYREF

  ppObject = nullptr;
  Object = ADsGetObject(lpszPathName, &stru_10017514, &ppObject);
  if ( Object >= 0 )
  {
    bstrString = nullptr;
    (*(void (__stdcall **)(void *, BSTR *))(*(_DWORD *)ppObject + 136))(ppObject, &bstrString);
    SysFreeString(bstrString);
    return ppObject;
  }
  else
  {
    if ( (Object & 0x1FFF0000) == 0x70000 )
      sub_10006280();
    return nullptr;
  }
}

// Address: 0x10006380
int __usercall sub_10006380@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // ebp
  void *v6; // esi
  int v7; // eax
  DWORD nSize; // [esp+8h] [ebp-418h] BYREF
  WCHAR Buffer[260]; // [esp+Ch] [ebp-414h] BYREF
  WCHAR szPathName[260]; // [esp+214h] [ebp-20Ch] BYREF

  nSize = 260;
  memset(Buffer, 0, sizeof(Buffer));
  memset(szPathName, 0, sizeof(szPathName));
  v4 = 1;
  CoInitializeEx(nullptr, 0);
  if ( !GetComputerNameW(Buffer, &nSize) )
    return 0;
  wsprintfW(szPathName, L"WinNT://%s/%s,user", Buffer, a1);
  v6 = sub_10006310(szPathName);
  if ( v6 == nullptr )
    return 0;
  (*(void (__stdcall **)(void *))(*(_DWORD *)v6 + 4))(v6);
  v7 = (*(int (__stdcall **)(void *, int, int))(*(_DWORD *)v6 + 440))(v6, a3, a2);
  if ( v7 < 0 )
  {
    if ( (v7 & 0x1FFF0000) == 0x70000 )
      sub_10006280();
    v4 = 0;
  }
  (*(void (__stdcall **)(void *))(*(_DWORD *)v6 + 8))(v6);
  CoUninitialize();
  return v4;
}

// Address: 0x100064A0
int __usercall sub_100064A0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // ebx
  void *v5; // esi
  int v6; // eax
  DWORD nSize; // [esp+8h] [ebp-418h] BYREF
  WCHAR Buffer[260]; // [esp+Ch] [ebp-414h] BYREF
  WCHAR szPathName[260]; // [esp+214h] [ebp-20Ch] BYREF

  nSize = 260;
  memset(Buffer, 0, sizeof(Buffer));
  memset(szPathName, 0, sizeof(szPathName));
  v3 = 1;
  CoInitialize(nullptr);
  if ( !GetComputerNameW(Buffer, &nSize) )
    return 0;
  wsprintfW(szPathName, L"WinNT://%s/%s,user", Buffer, a1);
  v5 = sub_10006310(szPathName);
  if ( v5 == nullptr )
    return 0;
  (*(void (__stdcall **)(void *))(*(_DWORD *)v5 + 4))(v5);
  v6 = (*(int (__stdcall **)(void *, int, int))(*(_DWORD *)v5 + 440))(v5, a2, a2);
  if ( v6 < 0 )
  {
    if ( (v6 & 0x1FFF0000) == 0x70000 )
      sub_10006280();
    v3 = 0;
  }
  (*(void (__stdcall **)(void *))(*(_DWORD *)v5 + 8))(v5);
  CoUninitialize();
  return v3;
}

// Address: 0x100065C0
DWORD sub_100065C0()
{
  DWORD th32ProcessID; // edi
  HANDLE Toolhelp32Snapshot; // esi
  PROCESSENTRY32W pe; // [esp+8h] [ebp-230h] BYREF

  memset(&pe.cntUsage, 0, 0x228u);
  th32ProcessID = 0;
  pe.dwSize = 556;
  Toolhelp32Snapshot = CreateToolhelp32Snapshot(0xFu, 0);
  Process32FirstW(Toolhelp32Snapshot, &pe);
  while ( _wcsicmp(L"explorer.exe", pe.szExeFile) != 0 )
  {
    if ( !Process32NextW(Toolhelp32Snapshot, &pe) )
      goto LABEL_6;
  }
  th32ProcessID = pe.th32ProcessID;
LABEL_6:
  CloseHandle(Toolhelp32Snapshot);
  return th32ProcessID;
}

// Address: 0x10006660
DWORD __usercall sub_10006660@<eax>(const wchar_t *a1@<edi>)
{
  int v1; // ebx
  DWORD LastError; // ebp
  HANDLE Toolhelp32Snapshot; // eax
  void *v4; // esi
  DWORD th32ProcessID; // [esp+Ch] [ebp-238h]
  DWORD pSessionId; // [esp+10h] [ebp-234h] BYREF
  PROCESSENTRY32W pe; // [esp+14h] [ebp-230h] BYREF

  v1 = 0;
  th32ProcessID = 0;
  LastError = 0;
  memset(&pe, 0, sizeof(pe));
  pe.dwSize = 556;
  Toolhelp32Snapshot = CreateToolhelp32Snapshot(2u, 0);
  v4 = Toolhelp32Snapshot;
  if ( Toolhelp32Snapshot == (HANDLE)-1 )
  {
    LastError = GetLastError();
  }
  else
  {
    if ( Process32FirstW(Toolhelp32Snapshot, &pe) )
    {
      while ( a1 != nullptr && _wcsicmp(pe.szExeFile, a1) != 0
           || !ProcessIdToSessionId(pe.th32ProcessID, &pSessionId)
           || pSessionId != 1 )
      {
        if ( !Process32NextW(v4, &pe) )
          goto LABEL_10;
      }
      v1 = 1;
    }
LABEL_10:
    CloseHandle(v4);
    if ( v1 != 0 )
      th32ProcessID = pe.th32ProcessID;
    else
      LastError = 2;
  }
  SetLastError(LastError);
  return th32ProcessID;
}

// Address: 0x10006750
BOOL __usercall sub_10006750@<eax>(DWORD a1@<eax>)
{
  DWORD LastError; // ebx
  HANDLE v2; // edi
  BOOL v3; // esi
  DWORD v5; // eax

  LastError = 0;
  v2 = OpenProcess(1u, false, a1);
  if ( v2 != nullptr )
  {
    v3 = TerminateProcess(v2, 0);
    if ( !v3 )
      LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
    return v3;
  }
  else
  {
    v5 = GetLastError();
    SetLastError(v5);
    return false;
  }
}

// Address: 0x100067B0
DWORD __stdcall sub_100067B0(int a1)
{
  DWORD v1; // eax
  HANDLE v2; // edi
  PSID *v4; // esi
  LPWSTR v5; // esi
  LPWSTR v6; // eax
  int v7; // edx
  WCHAR v8; // cx
  HANDLE TokenHandle; // [esp+4h] [ebp-Ch] BYREF
  DWORD ReturnLength; // [esp+8h] [ebp-8h] BYREF
  LPWSTR StringSid; // [esp+Ch] [ebp-4h] BYREF

  v1 = sub_100065C0();
  v2 = OpenProcess(0x410u, false, v1);
  if ( v2 == nullptr )
    return 110;
  TokenHandle = nullptr;
  ReturnLength = 0;
  if ( !OpenProcessToken(v2, 8u, &TokenHandle) )
  {
    CloseHandle(v2);
    return 110;
  }
  GetTokenInformation(TokenHandle, TokenUser, nullptr, 0, &ReturnLength);
  v4 = (PSID *)malloc(ReturnLength);
  if ( GetTokenInformation(TokenHandle, TokenUser, v4, ReturnLength, &ReturnLength) )
  {
    ConvertSidToStringSidW(*v4, &StringSid);
    free(v4);
    CloseHandle(TokenHandle);
    v5 = StringSid;
    v6 = StringSid;
    v7 = a1 - (_DWORD)StringSid;
    do
    {
      v8 = *v6;
      *(LPWSTR)((char *)v6 + v7) = *v6;
      ++v6;
    }
    while ( v8 != 0 );
    LocalFree(v5);
    return 0;
  }
  else
  {
    free(v4);
    CloseHandle(TokenHandle);
    CloseHandle(v2);
    return GetLastError();
  }
}

// Address: 0x100068D0
_DWORD *__usercall sub_100068D0@<eax>(_DWORD *a1@<esi>)
{
  *a1 = (*(int (__thiscall **)(int *))(dword_1001F3C4 + 12))(&dword_1001F3C4) + 16;
  return a1;
}

// Address: 0x100068F0
_DWORD *__thiscall sub_100068F0(unsigned __int16 *Source, _DWORD *a2)
{
  HMODULE v3; // ecx

  *a2 = (*(int (__thiscall **)(int *))(dword_1001F3C4 + 12))(&dword_1001F3C4) + 16;
  if ( Source == nullptr )
    goto LABEL_7;
  if ( ((unsigned int)Source & 0xFFFF0000) != 0 )
  {
    wcslen(Source);
LABEL_7:
    sub_10006B30(Source);
    return a2;
  }
  v3 = sub_10003800((unsigned __int16)Source);
  if ( v3 != nullptr )
    sub_10006C40(v3, (int)a2);
  return a2;
}

// Address: 0x100069A0
volatile signed __int32 *__usercall sub_100069A0@<eax>(_DWORD *a1@<eax>)
{
  volatile signed __int32 *result; // eax

  result = (volatile signed __int32 *)(*a1 - 16);
  if ( _InterlockedDecrement(result + 3) <= 0 )
    return (volatile signed __int32 *)(*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)result + 4))(result);
  return result;
}

// Address: 0x100069C0
_DWORD *__usercall sub_100069C0@<eax>(void **a1@<eax>, int a2@<ebp>, _DWORD *a3@<edi>)
{
  void *v3; // ecx
  volatile signed __int32 *v4; // eax
  volatile signed __int32 *v5; // esi
  int v6; // ebp

  v3 = *a1;
  v4 = (volatile signed __int32 *)((char *)*a1 - 16);
  v5 = (volatile signed __int32 *)(*a3 - 16);
  if ( v4 == v5 )
    return a3;
  if ( *((int *)v5 + 3) >= 0 && *v4 == *v5 )
  {
    v6 = sub_10006BD0(a2);
    if ( _InterlockedDecrement(v5 + 3) <= 0 )
      (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v5 + 4))(v5);
    *a3 = v6 + 16;
    return a3;
  }
  else
  {
    sub_10006B30(v3);
    return a3;
  }
}

// Address: 0x10006A20
int __thiscall sub_10006A20(wchar_t *String2, const wchar_t **a2)
{
  if ( String2 == nullptr )
    sub_100036E0(-2147467259);
  return _wcsicmp(*a2, String2);
}

// Address: 0x10006A50
int __usercall sub_10006A50@<eax>(wchar_t *SubStr@<ecx>, const wchar_t **a2@<esi>)
{
  wchar_t *v2; // eax

  if ( SubStr != nullptr && *((int *)*a2 - 3) >= 0 && (v2 = wcsstr(*a2, SubStr)) != nullptr )
    return v2 - *a2;
  else
    return -1;
}

// Address: 0x10006A80
wchar_t **__usercall sub_10006A80@<eax>(wchar_t **a1@<edi>)
{
  int v1; // esi

  v1 = *((_DWORD *)*a1 - 3);
  if ( ((*((_DWORD *)*a1 - 2) - v1) | (1 - *((_DWORD *)*a1 - 1))) < 0 )
    sub_10006D80(*((_DWORD *)*a1 - 3));
  _wcslwr_s(*a1, v1 + 1);
  if ( v1 < 0 || v1 > *((_DWORD *)*a1 - 2) )
    sub_100036E0(-2147024809);
  *((_DWORD *)*a1 - 3) = v1;
  (*a1)[v1] = 0;
  return a1;
}

// Address: 0x10006AE0
bool __usercall sub_10006AE0@<al>(const unsigned __int16 **a1@<eax>)
{
  return wcscmp(*a1, word_1001B274) == 0;
}

// Address: 0x10006B30
char *__userpurge sub_10006B30@<eax>(char **a1@<eax>, int a2@<ebx>, _BYTE *Source)
{
  char *result; // eax
  unsigned int v5; // edi
  unsigned int v6; // ebp
  char *v7; // eax
  rsize_t v8; // edx
  rsize_t v9; // [esp-Ch] [ebp-10h]

  if ( a2 == 0 )
    return (char *)sub_10006D10();
  if ( Source == nullptr )
    sub_100036E0(-2147024809);
  v5 = (Source - *a1) >> 1;
  v6 = *((_DWORD *)*a1 - 3);
  if ( ((*((_DWORD *)*a1 - 2) - a2) | (1 - *((_DWORD *)*a1 - 1))) < 0 )
    sub_10006D80(a2);
  v7 = *a1;
  v8 = 2 * *((_DWORD *)*a1 - 2);
  v9 = 2 * a2;
  if ( v5 > v6 )
    memcpy_s(v7, v8, Source, v9);
  else
    memmove_s(v7, v8, &v7[2 * v5], v9);
  if ( a2 < 0 || a2 > *((_DWORD *)*a1 - 2) )
    sub_100036E0(-2147024809);
  *((_DWORD *)*a1 - 3) = a2;
  result = *a1;
  *(_WORD *)&(*a1)[2 * a2] = 0;
  return result;
}

// Address: 0x10006BD0
volatile signed __int32 *__usercall sub_10006BD0@<eax>(volatile signed __int32 *a1@<eax>)
{
  int (__thiscall ***v2)(_DWORD, _DWORD, int); // eax
  int v4; // eax
  int v5; // edi

  v2 = (int (__thiscall ***)(_DWORD, _DWORD, int))(*(int (__thiscall **)(volatile signed __int32))(**(_DWORD **)a1 + 16))(*a1);
  if ( *((int *)a1 + 3) >= 0 && v2 == *(int (__thiscall ****)(_DWORD, _DWORD, int))a1 )
  {
    _InterlockedExchangeAdd(a1 + 3, 1u);
    return a1;
  }
  else
  {
    v4 = (**v2)(v2, *((_DWORD *)a1 + 1), 2);
    v5 = v4;
    if ( v4 == 0 )
      sub_10006D70();
    *(_DWORD *)(v4 + 4) = *((_DWORD *)a1 + 1);
    memcpy_s(
      (void *const)(v4 + 16),
      2 * *((_DWORD *)a1 + 1) + 2,
      (const void *const)(a1 + 4),
      2 * *((_DWORD *)a1 + 1) + 2);
    return (volatile signed __int32 *)v5;
  }
}

// Address: 0x10006C40
int __userpurge sub_10006C40@<eax>(HMODULE hModule@<ecx>, unsigned int a2@<eax>, void *const *a3)
{
  char v3; // si
  HRSRC ResourceW; // ebx
  unsigned __int16 *v6; // eax
  unsigned __int16 *v7; // esi
  int v9; // edi
  errno_t v10; // eax

  v3 = a2;
  ResourceW = FindResourceW(hModule, (LPCWSTR)(unsigned __int16)((a2 >> 4) + 1), (LPCWSTR)6);
  if ( ResourceW == nullptr )
    return 0;
  v6 = sub_100037A0(v3, ResourceW, hModule);
  v7 = v6;
  if ( v6 == nullptr )
    return 0;
  v9 = *v6;
  if ( ((*((_DWORD *)*a3 - 2) - v9) | (1 - *((_DWORD *)*a3 - 1))) < 0 )
    sub_10006D80(*v6);
  v10 = memcpy_s(*a3, 2 * v9, v7 + 1, 2 * *v7);
  sub_10003700(v10);
  if ( v9 > *((_DWORD *)*a3 - 2) )
    sub_100036E0(-2147024809);
  *((_DWORD *)*a3 - 3) = v9;
  *((_WORD *)*a3 + v9) = 0;
  return 1;
}

// Address: 0x10006D10
volatile signed __int32 *__usercall sub_10006D10@<eax>(volatile signed __int32 **a1@<esi>)
{
  int *v1; // ecx
  volatile signed __int32 *result; // eax
  volatile signed __int32 v3; // edi

  v1 = (int *)*a1;
  result = *a1 - 4;
  v3 = *result;
  if ( *((_DWORD *)*a1 - 3) != 0 )
  {
    if ( *((int *)result + 3) >= 0 )
    {
      if ( _InterlockedDecrement(result + 3) <= 0 )
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)result + 4))(result);
      result = (volatile signed __int32 *)((*(int (__thiscall **)(volatile signed __int32))(*(_DWORD *)v3 + 12))(v3) + 16);
      *a1 = result;
    }
    else
    {
      if ( *(v1 - 2) < 0 )
        sub_100036E0(-2147024809);
      *(v1 - 3) = 0;
      result = *a1;
      *(_WORD *)*a1 = 0;
    }
  }
  return result;
}

// Address: 0x10006D70
void __noreturn sub_10006D70()
{
  sub_100036E0(-2147024882);
}

// Address: 0x10006D80
int __usercall sub_10006D80@<eax>(int *a1@<eax>, int a2@<ecx>)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int result; // eax
  int v7; // edx

  v3 = *a1;
  v4 = *(_DWORD *)(v3 - 12);
  v5 = v3 - 16;
  if ( v4 > a2 )
    a2 = v4;
  if ( *(int *)(v5 + 12) > 1 )
    return sub_10006DD0(a1, a2);
  result = *(_DWORD *)(v5 + 8);
  if ( result < a2 )
  {
    if ( result <= 1024 )
      v7 = 2 * result;
    else
      v7 = result + 1024;
    if ( v7 < a2 )
      v7 = a2;
    return sub_10006E50(a2, v7);
  }
  return result;
}

// Address: 0x10006DD0
int __stdcall sub_10006DD0(_DWORD *a1, int a2)
{
  int v2; // ebp
  int v3; // ebx
  volatile signed __int32 *v4; // esi
  int (__thiscall ***v5)(_DWORD, int, int); // eax
  int v6; // edi
  int result; // eax

  v2 = a2;
  v3 = *(_DWORD *)(*a1 - 12);
  v4 = (volatile signed __int32 *)(*a1 - 16);
  v5 = (int (__thiscall ***)(_DWORD, int, int))(*(int (__thiscall **)(volatile signed __int32))(**(_DWORD **)v4 + 16))(*v4);
  v6 = (**v5)(v5, a2, 2);
  if ( v6 == 0 )
    sub_10006D70();
  if ( v3 < a2 )
    v2 = v3;
  memcpy_s((void *const)(v6 + 16), 2 * v2 + 2, (const void *const)(v4 + 4), 2 * v2 + 2);
  *(_DWORD *)(v6 + 4) = v3;
  result = _InterlockedDecrement(v4 + 3);
  if ( result <= 0 )
    result = (*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v4 + 4))(v4);
  *a1 = v6 + 16;
  return result;
}

// Address: 0x10006E50
int __usercall sub_10006E50@<eax>(int a1@<edx>, int *a2@<esi>)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  v2 = *a2 - 16;
  if ( *(_DWORD *)(v2 + 8) >= a1
    || a1 <= 0
    || (v3 = (*(int (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(*a2 - 16) + 8))(
               *(_DWORD *)(*a2 - 16),
               v2,
               a1,
               2)) == 0 )
  {
    sub_10006D70();
  }
  result = v3 + 16;
  *a2 = result;
  return result;
}

// Address: 0x10006E80
int sub_10006E80(int a1, ...)
{
  va_list va; // [esp+Ch] [ebp+8h] BYREF

  va_start(va, a1);
  return sub_10006EA0(va);
}

// Address: 0x10006EA0
int __userpurge sub_10006EA0@<eax>(const wchar_t *a1@<ebx>, int *a2@<edi>, va_list ArgList)
{
  int v3; // esi

  if ( a1 == nullptr )
    sub_100036E0(-2147024809);
  v3 = _vscwprintf(a1, ArgList);
  if ( ((*(_DWORD *)(*a2 - 8) - v3) | (1 - *(_DWORD *)(*a2 - 16 + 12))) < 0 )
    sub_10006D80(a2, v3);
  vswprintf_s((wchar_t *const)*a2, v3 + 1, a1, ArgList);
  if ( v3 < 0 || v3 > *(_DWORD *)(*a2 - 8) )
    sub_100036E0(-2147024809);
  *(_DWORD *)(*a2 - 12) = v3;
  *(_WORD *)(*a2 + 2 * v3) = 0;
  return 0;
}

// Address: 0x10006F20
void sub_10006F20(wchar_t *Format, ...)
{
  unsigned int v1; // eax
  WCHAR OutputString[519]; // [esp+0h] [ebp-414h] BYREF
  __int16 v3; // [esp+40Eh] [ebp-6h]
  va_list va; // [esp+41Ch] [ebp+8h] BYREF

  va_start(va, Format);
  v1 = _vsnwprintf(OutputString, 0x207u, Format, va);
  if ( v1 >= 0x208 )
  {
    v3 = 0;
  }
  else if ( v1 == 519 )
  {
    v3 = 0;
  }
  OutputDebugStringW(OutputString);
}

// Address: 0x10006F98
// attributes: thunk
BOOL __stdcall Process32FirstW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe)
{
  return __imp_Process32FirstW(hSnapshot, lppe);
}

// Address: 0x10006F9E
// attributes: thunk
BOOL __stdcall Module32FirstW(HANDLE hSnapshot, LPMODULEENTRY32W lpme)
{
  return __imp_Module32FirstW(hSnapshot, lpme);
}

// Address: 0x10006FA4
// attributes: thunk
BOOL __stdcall Process32NextW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe)
{
  return __imp_Process32NextW(hSnapshot, lppe);
}

// Address: 0x10006FAA
// attributes: thunk
HANDLE __stdcall CreateToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID)
{
  return __imp_CreateToolhelp32Snapshot(dwFlags, th32ProcessID);
}

// Address: 0x10006FB0
// attributes: thunk
BOOL __stdcall ConvertSidToStringSidW(PSID Sid, LPWSTR *StringSid)
{
  return __imp_ConvertSidToStringSidW(Sid, StringSid);
}

// Address: 0x10006FB6
void *__cdecl operator new[](size_t a1)
{
  return operator new(a1);
}

// Address: 0x10006FC1
_DWORD *__thiscall sub_10006FC1(_DWORD *this, int a2)
{
  sub_10002040(this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x10006FDE
int __thiscall sub_10006FDE(void **this)
{
  *this = &std::out_of_range::`vftable';
  return sub_100020B0(this);
}

// Address: 0x10006FE9
void **__thiscall sub_10006FE9(void **this, char a2)
{
  *this = &std::out_of_range::`vftable';
  sub_100020B0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10007010
void __cdecl __noreturn sub_10007010()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10002FF0((int)v1, "string too long");
  v2 = 0;
  sub_10002100(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x10007048
void __noreturn sub_10007048()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10002FF0((int)v1, "invalid string position");
  v2 = 0;
  sub_10006FC1(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// Address: 0x10007080
_DWORD *__thiscall sub_10007080(_DWORD *this, struct std::exception *a2)
{
  sub_10002170((int)this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x1000709D
void __thiscall sub_1000709D(int this)
{
  if ( *(_DWORD *)this != 0 )
  {
    free(*(void **)this);
    *(_DWORD *)this = 0;
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
}

// Address: 0x100070BC
void *__thiscall sub_100070BC(void *this)
{
  memset(this, 0, 0x18u);
  return this;
}

// Address: 0x100070D2
int __thiscall sub_100070D2(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0;
}

// Address: 0x1000711D
int __thiscall sub_1000711D(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= *(this + 1) )
  {
    RaiseException(0xC000008C, 1u, 0, nullptr);
    JUMPOUT(0x10007148);
  }
  return *this + 4 * a2;
}

// Address: 0x10007149
_DWORD *__thiscall sub_10007149(_DWORD *this)
{
  sub_100070BC(this + 5);
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  return this;
}

// Address: 0x10007165
void __thiscall sub_10007165(int this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 20));
  sub_1000709D(this + 44);
}

// Address: 0x1000717D
int __thiscall sub_1000717D(int this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // edi
  int v4; // eax
  int v5; // esi

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 20);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 20));
  v4 = *(_DWORD *)(this + 48);
  if ( a2 > v4 || a2 < 0 )
  {
    LeaveCriticalSection(v3);
    return 0;
  }
  else
  {
    if ( a2 == v4 )
      v5 = *(_DWORD *)(this + 8);
    else
      v5 = *(_DWORD *)sub_1000711D((_DWORD *)(this + 44), a2);
    LeaveCriticalSection(v3);
    return v5;
  }
}

// Address: 0x100071CC
int __thiscall sub_100071CC(int this)
{
  sub_10007149((_DWORD *)this);
  *(_DWORD *)this = 56;
  *(_DWORD *)(this + 8) = 0x10000000;
  *(_DWORD *)(this + 4) = 0x10000000;
  *(_DWORD *)(this + 12) = 2304;
  *(_DWORD *)(this + 16) = &unk_100172F4;
  if ( sub_100070D2((struct _RTL_CRITICAL_SECTION *)(this + 20)) < 0 )
    byte_1001FEA0 = 1;
  return this;
}

// Address: 0x1000720C
BOOL __thiscall sub_1000720C(_BYTE *this)
{
  bool v1; // zf
  void *v2; // ecx
  BOOL result; // eax

  v1 = *(this + 8) == 0;
  *(_DWORD *)this = &off_10017304;
  if ( !v1 )
  {
    v2 = *((void **)this + 1);
    if ( v2 != nullptr )
      return HeapDestroy(v2);
  }
  return result;
}

// Address: 0x10007227
LPVOID __thiscall sub_10007227(HANDLE *this, SIZE_T dwBytes)
{
  return HeapAlloc(*(this + 1), 0, dwBytes);
}

// Address: 0x1000723E
BOOL __thiscall sub_1000723E(HANDLE *this, LPVOID lpMem)
{
  BOOL result; // eax

  if ( lpMem != nullptr )
    return HeapFree(*(this + 1), 0, lpMem);
  return result;
}

// Address: 0x1000725B
LPVOID __thiscall sub_1000725B(HANDLE *this, LPVOID lpMem, SIZE_T dwBytes)
{
  if ( lpMem == nullptr )
    return (LPVOID)(*(int (__thiscall **)(HANDLE *, SIZE_T))*this)(this, dwBytes);
  if ( dwBytes != 0 )
    return HeapReAlloc(*(this + 1), 0, lpMem, dwBytes);
  (*((void (__thiscall **)(HANDLE *, LPVOID))*this + 1))(this, lpMem);
  return nullptr;
}

// Address: 0x10007295
SIZE_T __thiscall sub_10007295(HANDLE *this, LPCVOID lpMem)
{
  return HeapSize(*(this + 1), 0, lpMem);
}

// Address: 0x100072AC
_BYTE *__thiscall sub_100072AC(_BYTE *this, char a2)
{
  sub_1000720C(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100072CD
_DWORD *__thiscall sub_100072CD(_DWORD *this, int a2)
{
  *(this + 1) = a2;
  *this = &off_10017318;
  *(this + 5) = 2;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *((_WORD *)this + 12) = 0;
  *((_WORD *)this + 13) = 0;
  *(this + 2) = this;
  return this;
}

// Address: 0x100072FE
int __cdecl sub_100072FE(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  if ( !is_mul_ok(a3, a2) )
    return -2147024809;
  *a1 = a3 * a2;
  return 0;
}

// Address: 0x10007322
int __thiscall sub_10007322(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 4))(*(this + 1));
}

// Address: 0x10007330
volatile signed __int32 *__thiscall sub_10007330(volatile signed __int32 *this)
{
  _InterlockedExchangeAdd(this + 5, 1u);
  return this + 2;
}

// Address: 0x1000733E
void *__thiscall sub_1000733E(void *this)
{
  return this;
}

// Address: 0x10007341
_DWORD *__thiscall sub_10007341(_DWORD *this, char a2)
{
  *this = &off_10017318;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10007363
int __cdecl sub_10007363(_DWORD *a1, int a2, unsigned int a3)
{
  if ( -1 - a2 < a3 )
    return -2147024809;
  *a1 = a3 + a2;
  return 0;
}

// Address: 0x10007389
_DWORD *__thiscall sub_10007389(int (__thiscall ****this)(_DWORD, _DWORD), unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  _DWORD *result; // eax

  v3 = (a2 + 8) & 0xFFFFFFF8;
  if ( sub_100072FE(&a2, v3, a3) < 0 )
    return nullptr;
  if ( sub_10007363(&a2, 16, a2) < 0 )
    return nullptr;
  result = (_DWORD *)(***(this + 1))(*(this + 1), a2);
  if ( result == nullptr )
    return nullptr;
  result[1] = 0;
  *result = this;
  result[3] = 1;
  result[2] = v3 - 1;
  return result;
}

// Address: 0x100073ED
int __thiscall sub_100073ED(_DWORD **this, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // esi
  int result; // eax

  v4 = (a3 + 8) & 0xFFFFFFF8;
  if ( sub_100072FE(&a3, v4, a4) < 0 )
    return 0;
  if ( sub_10007363(&a3, 16, a3) < 0 )
    return 0;
  result = (*(int (__thiscall **)(_DWORD, int, unsigned int))(**(this + 1) + 8))(*(this + 1), a2, a3);
  if ( result == 0 )
    return 0;
  *(_DWORD *)(result + 8) = v4 - 1;
  return result;
}

// Address: 0x10007450
void __stdcall __noreturn sub_10007450(int a1)
{
  off_1001E028(a1, 0);
}

// Address: 0x10007470
HANDLE __thiscall sub_10007470(void *this)
{
  HANDLE result; // eax

  result = *((HANDLE *)this + 2);
  *(_DWORD *)this = &off_10017330;
  if ( result != nullptr )
    result = (HANDLE)(*(int (__stdcall **)(HANDLE))(*(_DWORD *)result + 8))(result);
  if ( *((_DWORD *)this + 3) != 0 )
  {
    result = GetProcessHeap();
    if ( result != nullptr )
      return (HANDLE)HeapFree(result, 0, *((LPVOID *)this + 3));
  }
  return result;
}

// Address: 0x100074B0
void __cdecl __noreturn sub_100074B0(int a1, int a2)
{
  _DWORD pExceptionObject[4]; // [esp+0h] [ebp-10h] BYREF

  pExceptionObject[0] = &off_10017330;
  pExceptionObject[1] = a1;
  pExceptionObject[2] = a2;
  pExceptionObject[3] = 0;
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AV_com_error__);
}

// Address: 0x100074F0
_DWORD *__thiscall sub_100074F0(_DWORD *this, int a2)
{
  int v3; // edx

  *this = &off_10017330;
  *(this + 1) = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  *(this + 2) = v3;
  *(this + 3) = 0;
  if ( v3 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  return this;
}

// Address: 0x10007530
void *__thiscall sub_10007530(void *this, char a2)
{
  int v3; // eax
  HANDLE ProcessHeap; // eax

  v3 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_10017330;
  if ( v3 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  if ( *((_DWORD *)this + 3) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    if ( ProcessHeap != nullptr )
      HeapFree(ProcessHeap, 0, *((LPVOID *)this + 3));
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10007580
// attributes: thunk
ULONG __stdcall GetAdaptersInfo(PIP_ADAPTER_INFO AdapterInfo, PULONG SizePointer)
{
  return __imp_GetAdaptersInfo(AdapterInfo, SizePointer);
}

// Address: 0x10007586
// attributes: thunk
HRESULT __stdcall ADsGetObject(LPCWSTR lpszPathName, const IID *const riid, void **ppObject)
{
  return __imp_ADsGetObject(lpszPathName, riid, ppObject);
}

// Address: 0x1000758C
// attributes: thunk
HRESULT __stdcall ADsGetLastError(
        LPDWORD lpError,
        LPWSTR lpErrorBuf,
        DWORD dwErrorBufLen,
        LPWSTR lpNameBuf,
        DWORD dwNameBufLen)
{
  return __imp_ADsGetLastError(lpError, lpErrorBuf, dwErrorBufLen, lpNameBuf, dwNameBufLen);
}

// Address: 0x10007592
void __cdecl operator delete(void *Block)
{
  free(Block);
}

// Address: 0x1000759D
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x100075AC
void __thiscall sub_100075AC(struct type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable';
  type_info::_Type_info_dtor(this);
}

// Address: 0x100075BC
struct type_info *__thiscall sub_100075BC(struct type_info *this, char a2)
{
  sub_100075AC(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100075DD
BOOL __thiscall type_info::operator==(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0;
}

// Address: 0x100075FD
std::bad_alloc *__thiscall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  std::exception::exception(this, (const char *const *)&off_1001E064, 1);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10007618
void *__cdecl operator new(size_t Size)
{
  void *result; // eax
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  while ( 1 )
  {
    result = malloc(Size);
    if ( result != nullptr )
      break;
    if ( _callnewh(Size) == 0 )
    {
      if ( (dword_1001F3EC & 1) == 0 )
      {
        dword_1001F3EC |= 1u;
        std::bad_alloc::bad_alloc((std::bad_alloc *)dword_1001F3E0);
        atexit(sub_1001652C);
      }
      sub_10003670((std::exception *)pExceptionObject, (struct std::exception *)dword_1001F3E0);
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  return result;
}

// Address: 0x1000767D
int __cdecl _onexit_nolock(int a1)
{
  _DWORD *v1; // edi
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // ebx
  size_t v5; // edi
  int v6; // eax
  size_t v7; // eax
  int v8; // eax
  void *Block; // [esp+Ch] [ebp-4h]

  v1 = (_DWORD *)_decode_pointer(dword_10021008);
  Block = v1;
  v2 = (_DWORD *)_decode_pointer(dword_10021004);
  v3 = v2;
  if ( v2 >= v1 )
  {
    v4 = (char *)v2 - (char *)v1;
    if ( (unsigned int)((char *)v2 - (char *)v1) < 0xFFFFFFFC )
    {
      v5 = _msize(v1);
      if ( v5 >= v4 + 4 )
      {
LABEL_11:
        *v3 = _encode_pointer(a1);
        dword_10021004 = _encode_pointer(v3 + 1);
        return a1;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = _realloc_crt(Block, v7)) != 0 || v5 + 16 >= v5 && (v8 = _realloc_crt(Block, v5 + 16)) != 0 )
      {
        v3 = (_DWORD *)(v8 + 4 * (v4 >> 2));
        dword_10021008 = _encode_pointer(v8);
        goto LABEL_11;
      }
    }
  }
  return 0;
}

// Address: 0x10007737
int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(0x20u, 4);
  dword_10021008 = _encode_pointer(v0);
  dword_10021004 = dword_10021008;
  if ( v0 == nullptr )
    return 24;
  *v0 = 0;
  return 0;
}

// Address: 0x10007768
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock((int)Func);
  _unlockexit(268466069);
  return v2;
}

// Address: 0x100077A4
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x100077BB
int __cdecl _vswprintf_helper(
        int (__cdecl *a1)(FILE *, int, int, int),
        char *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6)
{
  int result; // eax
  bool v7; // sf
  FILE File; // [esp+4h] [ebp-20h] BYREF
  int v9; // [esp+38h] [ebp+14h]

  if ( a4 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  if ( a3 != 0 && a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  File._flag = 66;
  File._base = a2;
  File._ptr = a2;
  if ( a3 <= 0x3FFFFFFF )
    File._cnt = 2 * a3;
  else
    File._cnt = 0x7FFFFFFF;
  result = a1(&File, a4, a5, a6);
  v9 = result;
  if ( a2 != nullptr )
  {
    if ( result >= 0 )
    {
      if ( --File._cnt >= 0 )
      {
        *File._ptr++ = 0;
LABEL_14:
        if ( --File._cnt >= 0 )
        {
          *File._ptr = 0;
          return v9;
        }
        if ( _flsbuf(0, &File) != -1 )
          return v9;
        goto LABEL_18;
      }
      if ( _flsbuf(0, &File) != -1 )
        goto LABEL_14;
    }
LABEL_18:
    v7 = File._cnt < 0;
    *(_WORD *)&a2[2 * a3 - 2] = 0;
    return !v7 - 2;
  }
  return result;
}

// Address: 0x100078B3
int __cdecl _vswprintf_s_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax

  if ( Format == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  if ( Buffer == nullptr || BufferCount == 0 )
  {
    *_errno() = 22;
LABEL_10:
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  result = _vswprintf_helper(
             (int (__cdecl *)(FILE *, int, int, int))_woutput_s_l,
             (char *)Buffer,
             BufferCount,
             (int)Format,
             (int)Locale,
             (int)ArgList);
  if ( result < 0 )
    *Buffer = 0;
  if ( result == -2 )
  {
    *_errno() = 34;
    goto LABEL_10;
  }
  return result;
}

// Address: 0x1000793E
int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  return _vswprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x1000795B
void __cdecl operator delete[](void *a1)
{
  operator delete(a1);
}

// Address: 0x10007966
errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  rsize_t v3; // ebx
  errno_t v4; // esi
  errno_t result; // eax
  const wchar_t *v6; // esi
  wchar_t *v7; // ecx
  wchar_t v8; // ax

  if ( Destination == nullptr )
    goto LABEL_3;
  v3 = SizeInWords;
  if ( SizeInWords == 0 )
    goto LABEL_3;
  v6 = Source;
  if ( Source != nullptr )
  {
    v7 = Destination;
    do
    {
      if ( *v7 == 0 )
        break;
      ++v7;
      --v3;
    }
    while ( v3 != 0 );
    if ( v3 != 0 )
    {
      do
      {
        v8 = *v6;
        *v7++ = *v6++;
        if ( v8 == 0 )
          break;
        --v3;
      }
      while ( v3 != 0 );
      result = 0;
      if ( v3 == 0 )
      {
        *Destination = 0;
        *_errno() = 34;
        v4 = 34;
        goto LABEL_4;
      }
      return result;
    }
  }
  *Destination = 0;
LABEL_3:
  v4 = 22;
  *_errno() = 22;
LABEL_4:
  _invalid_parameter(0, 0, 0, 0, 0);
  return v4;
}

// Address: 0x100079E3
errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  rsize_t v3; // ebx
  errno_t v4; // esi
  errno_t result; // eax
  const wchar_t *v6; // esi
  wchar_t *v7; // ecx
  wchar_t v8; // ax

  if ( Destination == nullptr )
    goto LABEL_3;
  v3 = SizeInWords;
  if ( SizeInWords == 0 )
    goto LABEL_3;
  v6 = Source;
  if ( Source == nullptr )
  {
    *Destination = 0;
LABEL_3:
    v4 = 22;
    *_errno() = 22;
LABEL_4:
    _invalid_parameter(0, 0, 0, 0, 0);
    return v4;
  }
  v7 = Destination;
  do
  {
    v8 = *v6;
    *v7++ = *v6++;
    if ( v8 == 0 )
      break;
    --v3;
  }
  while ( v3 != 0 );
  result = 0;
  if ( v3 == 0 )
  {
    *Destination = 0;
    *_errno() = 34;
    v4 = 34;
    goto LABEL_4;
  }
  return result;
}

// Address: 0x10007A52
static errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v4; // esi

  if ( SourceSize != 0 )
  {
    if ( Destination == nullptr || Source == nullptr )
    {
      v4 = 22;
      *_errno() = 22;
LABEL_4:
      _invalid_parameter(0, 0, 0, 0, 0);
      return v4;
    }
    if ( DestinationSize < SourceSize )
    {
      *_errno() = 34;
      v4 = 34;
      goto LABEL_4;
    }
    memcpy(Destination, Source, SourceSize);
  }
  return 0;
}

// Address: 0x10007AAF
_DWORD *__thiscall sub_10007AAF(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = &std::exception::`vftable';
  return this;
}

// Address: 0x10007AC0
std::exception *__thiscall std::exception::exception(std::exception *this, const char **a2)
{
  size_t v3; // esi
  char *v4; // eax

  *(_DWORD *)this = &std::exception::`vftable';
  if ( *a2 != nullptr )
  {
    v3 = strlen(*a2) + 1;
    v4 = (char *)malloc(v3);
    *((_DWORD *)this + 1) = v4;
    if ( v4 != nullptr )
      strcpy_s(v4, v3, *a2);
  }
  else
  {
    *((_DWORD *)this + 1) = 0;
  }
  *((_DWORD *)this + 2) = 1;
  return this;
}

// Address: 0x10007B13
std::exception *__thiscall std::exception::exception(std::exception *this, const char *const *a2, int a3)
{
  std::exception *result; // eax
  int v4; // ecx

  result = this;
  *(_DWORD *)this = &std::exception::`vftable';
  v4 = (int)*a2;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 1) = v4;
  return result;
}

// Address: 0x10007B30
std::exception *__thiscall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  size_t v6; // edi
  char *v7; // eax

  *(_DWORD *)this = &std::exception::`vftable';
  v3 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v3;
  v4 = v3 == 0;
  v5 = *((_DWORD *)a2 + 1);
  if ( v4 )
  {
    *((_DWORD *)this + 1) = v5;
  }
  else if ( v5 != 0 )
  {
    v6 = strlen(*((const char **)a2 + 1)) + 1;
    v7 = (char *)malloc(v6);
    *((_DWORD *)this + 1) = v7;
    if ( v7 != nullptr )
      strcpy_s(v7, v6, *((const char **)a2 + 1));
  }
  else
  {
    *((_DWORD *)this + 1) = 0;
  }
  return this;
}

// Address: 0x10007B8D
void __thiscall sub_10007B8D(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}

// Address: 0x10007BA3
const char *__thiscall exception::what(exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x10007BB0
void *__thiscall sub_10007BB0(void *this, char a2)
{
  sub_10007B8D(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10007BD1
int __cdecl sub_10007BD1(int a1)
{
  dword_1001F3F0 = a1;
  return a1;
}

// Address: 0x10007BE0
void __cdecl __noreturn _invoke_watson(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // kr00_4
  BOOL v11; // ebx
  HANDLE CurrentProcess; // eax
  _DWORD v13[20]; // [esp+4h] [ebp-328h] BYREF
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+54h] [ebp-2D8h] BYREF
  _DWORD v15[35]; // [esp+5Ch] [ebp-2D0h] BYREF
  __int16 v16; // [esp+E8h] [ebp-244h]
  __int16 v17; // [esp+ECh] [ebp-240h]
  __int16 v18; // [esp+F0h] [ebp-23Ch]
  __int16 v19; // [esp+F4h] [ebp-238h]
  int v20; // [esp+F8h] [ebp-234h]
  int v21; // [esp+FCh] [ebp-230h]
  int v22; // [esp+100h] [ebp-22Ch]
  int v23; // [esp+104h] [ebp-228h]
  int v24; // [esp+108h] [ebp-224h]
  _DWORD *v25; // [esp+10Ch] [ebp-220h]
  int v26; // [esp+110h] [ebp-21Ch]
  void *v27; // [esp+114h] [ebp-218h]
  __int16 v28; // [esp+118h] [ebp-214h]
  unsigned int v29; // [esp+11Ch] [ebp-210h]
  void **v30; // [esp+120h] [ebp-20Ch]
  __int16 v31; // [esp+124h] [ebp-208h]
  int savedregs; // [esp+32Ch] [ebp+0h]
  void *retaddr; // [esp+330h] [ebp+4h] BYREF

  memset(&v13[1], 0, 0x4Cu);
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v13;
  ExceptionInfo.ContextRecord = (PCONTEXT)v15;
  v25 = v15;
  v24 = v8;
  v23 = v9;
  v22 = v5;
  v21 = v7;
  v20 = v6;
  v31 = __SS__;
  v28 = __CS__;
  v19 = __DS__;
  v18 = __ES__;
  v17 = __FS__;
  v16 = __GS__;
  v10 = __readeflags();
  v29 = v10;
  v15[0] = 65537;
  v27 = retaddr;
  v30 = &retaddr;
  v26 = savedregs;
  v13[0] = -1073740777;
  v13[1] = 1;
  v13[3] = retaddr;
  v11 = IsDebuggerPresent();
  SetUnhandledExceptionFilter(nullptr);
  if ( UnhandledExceptionFilter(&ExceptionInfo) == 0 && !v11 )
    sub_1000BA5D(2);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x10007D08
int __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))_decode_pointer(dword_1001F3F0);
  if ( v5 == nullptr )
  {
    sub_1000BA5D(2);
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v5();
}

// Address: 0x10007D2E
static errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v5; // esi

  if ( SourceSize == 0 )
    return 0;
  if ( Destination != nullptr )
  {
    if ( Source != nullptr && DestinationSize >= SourceSize )
    {
      memcpy_0(Destination, Source, SourceSize);
      return 0;
    }
    memset(Destination, 0, DestinationSize);
    if ( Source != nullptr )
    {
      if ( DestinationSize < SourceSize )
      {
        *_errno() = 34;
        v5 = 34;
        goto LABEL_5;
      }
      return 22;
    }
  }
  v5 = 22;
  *_errno() = 22;
LABEL_5:
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return v5;
}

// Address: 0x10007DAB
_LocaleUpdate *__thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this, struct localeinfo_struct *a2)
{
  _DWORD *v3; // eax
  int v4; // eax

  *((_BYTE *)this + 12) = 0;
  if ( a2 != nullptr )
  {
    *(_DWORD *)this = *(_DWORD *)a2;
    *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  }
  else
  {
    v3 = (_DWORD *)_getptd();
    *((_DWORD *)this + 2) = v3;
    *(_DWORD *)this = v3[27];
    *((_DWORD *)this + 1) = v3[26];
    if ( *(_UNKNOWN **)this != off_1001E818 && (dword_1001E734 & v3[28]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_1001E734 & *(_DWORD *)(*((_DWORD *)this + 2) + 112)) == 0 )
      *((_DWORD *)this + 1) = __updatetmbcinfo();
    v4 = *((_DWORD *)this + 2);
    if ( (*(_BYTE *)(v4 + 112) & 2) == 0 )
    {
      *(_DWORD *)(v4 + 112) |= 2u;
      *((_BYTE *)this + 12) = 1;
    }
  }
  return this;
}

// Address: 0x10007E32
int __cdecl _wcsicmp_l(const wchar_t *String1, const wchar_t *String2, _locale_t Locale)
{
  wint_t *v3; // ebx
  int result; // eax
  wint_t *v5; // edi
  wint_t v6; // ax
  wint_t v7; // si
  wint_t v8; // ax
  __crt_locale_pointers v9; // [esp+8h] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-8h]
  char v11; // [esp+14h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, (struct localeinfo_struct *)Locale);
  v3 = (wint_t *)String1;
  if ( String1 != nullptr )
  {
    v5 = (wint_t *)String2;
    if ( String2 != nullptr )
    {
      if ( *((_DWORD *)v9.locinfo + 5) != 0 )
      {
        do
        {
          v7 = _towlower_l(*v3++, &v9);
          v8 = _towlower_l(*v5++, &v9);
        }
        while ( v7 != 0 && v7 == v8 );
      }
      else
      {
        do
        {
          v6 = *v3;
          if ( *v3 >= 0x41u && v6 <= 0x5Au )
            v6 += 32;
          v7 = v6;
          v8 = *v5;
          if ( *v5 >= 0x41u && v8 <= 0x5Au )
            v8 += 32;
          ++v3;
          ++v5;
        }
        while ( v7 != 0 && v7 == v8 );
      }
      result = v7 - v8;
      if ( v11 != 0 )
        *(_DWORD *)(v10 + 112) &= ~2u;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      if ( v11 != 0 )
        *(_DWORD *)(v10 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v11 != 0 )
      *(_DWORD *)(v10 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}

// Address: 0x10007F43
int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // edi
  const wchar_t *v4; // edx
  wchar_t v5; // ax
  wchar_t v6; // cx
  wchar_t v7; // ax

  if ( dword_1001F7A4 != 0 )
    return _wcsicmp_l(String1, String2, nullptr);
  v2 = String1;
  if ( String1 != nullptr && (v4 = String2, String2 != nullptr) )
  {
    do
    {
      v5 = *v2;
      if ( *v2 >= 0x41u && v5 <= 0x5Au )
        v5 += 32;
      v6 = v5;
      v7 = *v4;
      if ( *v4 >= 0x41u && v7 <= 0x5Au )
        v7 += 32;
      ++v2;
      ++v4;
    }
    while ( v6 != 0 && v6 == v7 );
    return v6 - v7;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0x7FFFFFFF;
  }
}

// Address: 0x10007FD6
int __cdecl _vscprintf_helper(int (__cdecl *a1)(_DWORD *, int, int, int), int a2, int a3, int a4)
{
  _DWORD v5[8]; // [esp+4h] [ebp-20h] BYREF

  if ( a2 != 0 )
  {
    v5[1] = 0x7FFFFFFF;
    v5[3] = 66;
    v5[2] = 0;
    v5[0] = 0;
    return a1(v5, a2, a3, a4);
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x1000802D
int __cdecl _vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  return _vscprintf_helper((int (__cdecl *)(_DWORD *, int, int, int))_woutput_l, (int)Format, 0, (int)ArgList);
}

// Address: 0x10008049
void __cdecl free(void *Block)
{
  int v1; // eax
  int *v2; // esi
  DWORD LastError; // eax
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_10020FF8 != 3 )
      goto LABEL_6;
    _lock(4);
    v1 = __sbh_find_block(Block);
    v4 = v1;
    if ( v1 != 0 )
      __sbh_free_block(v1, Block);
    _unlock(4);
    if ( v4 == 0 )
    {
LABEL_6:
      if ( !HeapFree(hHeap, 0, Block) )
      {
        v2 = _errno();
        LastError = GetLastError();
        *v2 = _get_errno_from_oserr(LastError);
      }
    }
  }
}

// Address: 0x100080D7
int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = 0;
  if ( a1 <= dword_10020FE8 )
  {
    _lock(4);
    v2 = __sbh_alloc_block(a1);
    _unlock(4);
  }
  return v2;
}

// Address: 0x10008126
void *__cdecl malloc(size_t Size)
{
  size_t v1; // esi
  SIZE_T v2; // eax
  LPVOID v3; // eax
  void *v4; // ebx

  v1 = Size;
  if ( Size > 0xFFFFFFE0 )
  {
    _callnewh(Size);
    *_errno() = 12;
    return nullptr;
  }
  else
  {
    while ( 1 )
    {
      if ( hHeap == nullptr )
      {
        _FF_MSGBANNER();
        _NMSG_WRITE(30);
        __crtExitProcess(0xFFu);
      }
      if ( dword_10020FF8 == 1 )
      {
        v2 = v1 != 0 ? v1 : 1;
        v3 = HeapAlloc(hHeap, 0, v2);
      }
      else if ( dword_10020FF8 != 3 || (v3 = (LPVOID)V6_HeapAlloc(v1)) == nullptr )
      {
        if ( v1 == 0 )
          v1 = 1;
        v3 = HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
      }
      v4 = v3;
      if ( v3 != nullptr )
        return v4;
      if ( dword_1001FC3C == 0 )
      {
        *_errno() = 12;
LABEL_19:
        *_errno() = 12;
        return v4;
      }
      if ( _callnewh(Size) == 0 )
        goto LABEL_19;
      v1 = Size;
    }
  }
}

// Address: 0x100081F0
void __cdecl _freea(void *Memory)
{
  if ( Memory != nullptr && *((_DWORD *)Memory - 2) == 56797 )
    free((char *)Memory - 8);
}

// Address: 0x10008210
errno_t __usercall _wcslwr_s_l_stat@<eax>(wchar_t *a1@<ebx>, wchar_t *SizeInWords, struct localeinfo_struct *a3)
{
  int *v3; // eax
  int v4; // edi
  LCID v6; // ecx
  wchar_t *i; // eax
  wchar_t v8; // cx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  void *v12; // esp
  wchar_t *v13; // eax
  errno_t v14; // esi
  int v15; // [esp-4h] [ebp-18h]
  _DWORD v16[2]; // [esp+0h] [ebp-14h] BYREF
  int cchDest; // [esp+8h] [ebp-Ch]
  wchar_t *Source; // [esp+Ch] [ebp-8h]

  if ( a1 == nullptr )
    goto LABEL_2;
  if ( wcsnlen(a1, (size_t)SizeInWords) >= (unsigned int)SizeInWords )
  {
    *a1 = 0;
LABEL_2:
    v3 = _errno();
    v15 = 22;
LABEL_3:
    v4 = v15;
    *v3 = v15;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return v4;
  }
  v6 = *(_DWORD *)(*(_DWORD *)a3 + 20);
  if ( v6 != 0 )
  {
    v9 = __crtLCMapStringW(a3, v6, 0x100u, a1, -1, nullptr, 0);
    v10 = v9;
    cchDest = v9;
    if ( v9 == 0 )
    {
      *_errno() = 42;
      return *_errno();
    }
    if ( (unsigned int)SizeInWords < v9 )
    {
      *a1 = 0;
      v3 = _errno();
      v15 = 34;
      goto LABEL_3;
    }
    if ( v9 <= 0 || 0xFFFFFFE0 / v9 < 2 )
    {
      Source = nullptr;
      goto LABEL_28;
    }
    v11 = 2 * v9 + 8;
    if ( v11 > 0x400 )
    {
      v13 = (wchar_t *)malloc(2 * v10 + 8);
      if ( v13 != nullptr )
      {
        *(_DWORD *)v13 = 56797;
        goto LABEL_25;
      }
    }
    else
    {
      v12 = alloca(v11);
      v13 = (wchar_t *)v16;
      if ( v16 != nullptr )
      {
        v16[0] = 52428;
LABEL_25:
        v13 += 4;
      }
    }
    v10 = cchDest;
    Source = v13;
LABEL_28:
    if ( Source != nullptr )
    {
      if ( __crtLCMapStringW(a3, *(_DWORD *)(*(_DWORD *)a3 + 20), 0x100u, a1, -1, Source, v10) != 0 )
      {
        v14 = wcscpy_s(a1, (rsize_t)SizeInWords, Source);
      }
      else
      {
        *_errno() = 42;
        v14 = 42;
      }
      _freea(Source);
      return v14;
    }
    *_errno() = 12;
    return *_errno();
  }
  for ( i = a1; *i != 0; ++i )
  {
    v8 = *i;
    if ( *i >= 0x41u && v8 <= 0x5Au )
      *i = v8 + 32;
  }
  return 0;
}

// Address: 0x100083A0
errno_t __cdecl _wcslwr_s_l(wchar_t *String, size_t SizeInWords, _locale_t Locale)
{
  errno_t result; // eax
  unsigned int v4[2]; // [esp+4h] [ebp-10h] BYREF
  int v5; // [esp+Ch] [ebp-8h]
  char v6; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v4, (struct localeinfo_struct *)Locale);
  result = _wcslwr_s_l_stat(String, (wchar_t *)SizeInWords, (struct localeinfo_struct *)v4);
  if ( v6 != 0 )
    *(_DWORD *)(v5 + 112) &= ~2u;
  return result;
}

// Address: 0x100083D5
errno_t __cdecl _wcslwr_s(wchar_t *String, size_t SizeInWords)
{
  return _wcslwr_s_l(String, SizeInWords, nullptr);
}

// Address: 0x100083EC
wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *result; // eax
  wchar_t *v3; // edi
  wchar_t v4; // dx
  int i; // eax
  const wchar_t *v6; // ecx

  result = (wchar_t *)Str;
  v3 = (wchar_t *)Str;
  if ( *SubStr != 0 )
  {
    if ( *Str != 0 )
    {
      v4 = *Str;
      for ( i = (char *)Str - (char *)SubStr; ; i += 2 )
      {
        v6 = SubStr;
        if ( v4 != 0 )
          break;
LABEL_8:
        if ( *v6 == 0 )
          return v3;
        v4 = *++v3;
        if ( *v3 == 0 )
          return nullptr;
      }
      while ( *v6 != 0 )
      {
        if ( *(const wchar_t *)((char *)v6 + i) == *v6 && *(const wchar_t *)((char *)++v6 + i) != 0 )
          continue;
        goto LABEL_8;
      }
      return v3;
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}

// Address: 0x1000844D
int __cdecl _vsnwprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax
  int v6; // edi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  if ( Format != nullptr )
  {
    if ( BufferCount == 0 || Buffer != nullptr )
    {
      File._flag = 66;
      File._base = (char *)Buffer;
      File._ptr = (char *)Buffer;
      if ( BufferCount <= 0x3FFFFFFF )
        File._cnt = 2 * BufferCount;
      else
        File._cnt = 0x7FFFFFFF;
      result = _woutput_l((int)&File, (int)Format, (struct localeinfo_struct *)Locale, (int)ArgList);
      v6 = result;
      if ( Buffer != nullptr )
      {
        if ( --File._cnt < 0 )
          _flsbuf(0, &File);
        else
          *File._ptr++ = 0;
        if ( --File._cnt < 0 )
          _flsbuf(0, &File);
        else
          *File._ptr = 0;
        return v6;
      }
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return -1;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  return result;
}

// Address: 0x10008521
int __cdecl _vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return _vsnwprintf_l(Buffer, BufferCount, Format, nullptr, Args);
}

// Address: 0x1000853E
int __stdcall _CRT_INIT(int a1, int a2, int a3)
{
  DWORD *v4; // eax
  DWORD *v5; // esi
  int (__stdcall *v6)(int, DWORD *); // eax
  DWORD CurrentThreadId; // eax
  int v8; // [esp-8h] [ebp-10h]
  DWORD *v9; // [esp-4h] [ebp-Ch]

  if ( a2 == 1 )
  {
    if ( _heap_init(1) == 0 )
      return 0;
    if ( _mtinit() == 0 )
    {
LABEL_5:
      _heap_term();
      return 0;
    }
    sub_1000DF11();
    dword_10021014 = (int)GetCommandLineA();
    dword_1001F3F8 = (char *)__crtGetEnvironmentStringsA();
    if ( _ioinit() < 0 )
    {
LABEL_7:
      _mtterm();
      goto LABEL_5;
    }
    if ( _setargv() < 0 || _setenvp() < 0 || _cinit(0) != 0 )
    {
      _ioterm();
      goto LABEL_7;
    }
    ++dword_1001F3F4;
  }
  else if ( a2 != 0 )
  {
    if ( a2 == 2 )
    {
      __set_flsgetvalue();
      v4 = (DWORD *)_calloc_crt(1u, 532);
      v5 = v4;
      if ( v4 == nullptr )
        return 0;
      v9 = v4;
      v8 = dword_1001E090;
      v6 = (int (__stdcall *)(int, DWORD *))_decode_pointer(dword_1001F748);
      if ( v6(v8, v9) == 0 )
      {
        free(v5);
        return 0;
      }
      _initptd(v5, 0);
      CurrentThreadId = GetCurrentThreadId();
      v5[1] = -1;
      *v5 = CurrentThreadId;
    }
    else if ( a2 == 3 )
    {
      _freeptd(nullptr);
    }
  }
  else
  {
    if ( dword_1001F3F4 <= 0 )
      return 0;
    --dword_1001F3F4;
    if ( dword_1001F780 == 0 )
      _cexit();
    if ( a3 == 0 )
    {
      _ioterm();
      _mtterm();
      _heap_term();
    }
  }
  return 1;
}

// Address: 0x10008673
BOOL __fastcall __DllMainCRTStartup(void *a1, DWORD a2, HINSTANCE hinstDLL)
{
  BOOL v5; // eax
  BOOL v7; // [esp+10h] [ebp-1Ch]

  if ( a2 == 0 && dword_1001F3F4 == 0 || (a2 == 1 || a2 == 2) && _CRT_INIT((int)hinstDLL, a2, (int)a1) == 0 )
    return false;
  v5 = DllMain(hinstDLL, a2, a1);
  v7 = v5;
  if ( a2 == 1 && !v5 )
  {
    DllMain(hinstDLL, 0, a1);
    _CRT_INIT((int)hinstDLL, 0, (int)a1);
  }
  if ( (a2 == 0 || a2 == 3) && _CRT_INIT((int)hinstDLL, a2, (int)a1) == 0 )
    return false;
  return v7;
}

// Address: 0x10008769
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return __DllMainCRTStartup(lpReserved, fdwReason, hinstDLL);
}

// Address: 0x10008790
size_t __cdecl strlen(const char *Str)
{
  const char *v1; // ecx
  char v2; // al
  int v3; // eax
  int v4; // eax

  v1 = Str;
  if ( ((unsigned __int8)Str & 3) == 0 )
    goto main_loop;
  do
  {
    v2 = *v1++;
    if ( v2 == 0 )
      return v1 - 1 - Str;
  }
  while ( ((unsigned __int8)v1 & 3) != 0 );
  while ( 1 )
  {
    do
    {
main_loop:
      v3 = (*(_DWORD *)v1 + 2130640639) ^ ~*(_DWORD *)v1;
      v1 += 4;
    }
    while ( (v3 & 0x81010100) == 0 );
    v4 = *((_DWORD *)v1 - 1);
    if ( (_BYTE)v4 == 0 )
      break;
    if ( BYTE1(v4) == 0 )
      return v1 - 3 - Str;
    if ( (v4 & 0xFF0000) == 0 )
      return v1 - 2 - Str;
    if ( (v4 & 0xFF000000) == 0 )
      return v1 - 1 - Str;
  }
  return v1 - 4 - Str;
}

// Address: 0x1000881B
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_10017810, sizeof(dwExceptionCode));
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)pThrowInfo;
  if ( pThrowInfo != nullptr && (pThrowInfo->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}

// Address: 0x10008867
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x10008899
// ?_CallMemberFunction0@@YGXPAX0@Z
// doubtful name
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_10008899(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x100088A0
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_27112, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x100088F4
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *a2,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(a2, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x1000892A
int __cdecl CatchGuardHandler(struct EHExceptionRecord *a1, struct EHRegistrationNode *a2, struct _CONTEXT *a3)
{
  return __InternalCxxFrameHandler(
           a1,
           (struct EHRegistrationNode *)a2[1].frameHandler,
           a3,
           nullptr,
           (struct _s_FuncInfo *)a2[1].pNext,
           a2[1].state,
           a2,
           0);
}

// Address: 0x1000895D
int __cdecl _CallSETranslator(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        void *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        int a6,
        struct EHRegistrationNode *a7)
{
  int v8; // [esp+0h] [ebp-3Ch] BYREF
  int v9; // [esp+4h] [ebp-38h]
  _DWORD v10[2]; // [esp+8h] [ebp-34h] BYREF
  void (__cdecl *v11)(unsigned int, _DWORD *); // [esp+10h] [ebp-2Ch]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+14h] [ebp-28h]
  enum _EXCEPTION_DISPOSITION (__cdecl *v13)(PEXCEPTION_RECORD, PVOID, void *, void *); // [esp+18h] [ebp-24h]
  const struct _s_FuncInfo *v14; // [esp+20h] [ebp-1Ch]
  struct EHRegistrationNode *v15; // [esp+24h] [ebp-18h]
  int v16; // [esp+28h] [ebp-14h]
  struct EHRegistrationNode *v17; // [esp+2Ch] [ebp-10h]
  int *v18; // [esp+30h] [ebp-Ch]
  int *v19; // [esp+34h] [ebp-8h]
  int v20; // [esp+38h] [ebp-4h]
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  if ( a1 == (struct EHExceptionRecord *)291 )
  {
    a2->pNext = (EHRegistrationNode *)&_ExceptionContinuation_27230;
    return 1;
  }
  else
  {
    v13 = TranslatorGuardHandler;
    v14 = a5;
    v15 = a2;
    v16 = a6;
    v17 = a7;
    v20 = 0;
    v18 = &v8;
    v19 = &savedregs;
    ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
    v9 = 1;
    v10[0] = a1;
    v10[1] = a3;
    v11 = *(void (__cdecl **)(unsigned int, _DWORD *))(_getptd() + 128);
    v11(a1->ExceptionCode, v10);
    v9 = 0;
    if ( v20 != 0 )
      ExceptionList->Next = NtCurrentTeb()->NtTib.ExceptionList->Next;
    return v9;
  }
}

// Address: 0x10008A34
enum _EXCEPTION_DISPOSITION __usercall TranslatorGuardHandler@<eax>(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        struct EHExceptionRecord *ExceptionRecord,
        PVOID TargetFrame,
        struct _CONTEXT *a4)
{
  enum _EXCEPTION_DISPOSITION (*v5)(void); // [esp+4h] [ebp-4h] BYREF

  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    *((_DWORD *)TargetFrame + 9) = 1;
    return ExceptionContinueSearch;
  }
  else
  {
    __InternalCxxFrameHandler(
      ExceptionRecord,
      *((struct EHRegistrationNode **)TargetFrame + 4),
      a4,
      nullptr,
      *((struct _s_FuncInfo **)TargetFrame + 3),
      *((_DWORD *)TargetFrame + 5),
      *((struct EHRegistrationNode **)TargetFrame + 6),
      1u);
    if ( *((_DWORD *)TargetFrame + 9) == 0 )
      _UnwindNestedFrames(a1, TargetFrame, (PEXCEPTION_RECORD)ExceptionRecord);
    _CallSETranslator(
      (struct EHExceptionRecord *)0x123,
      (struct EHRegistrationNode *)&v5,
      nullptr,
      nullptr,
      nullptr,
      0,
      nullptr);
    return v5();
  }
}

// Address: 0x10008AD3
TryBlockMapEntry *__cdecl _GetRangeOfTrysToCheck(
        const struct _s_FuncInfo *a1,
        int a2,
        int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int nTryBlocks; // esi
  unsigned int v7; // ebx
  TryBlockMapEntry *v8; // eax
  unsigned int v9; // esi
  TryBlockMapEntry *pTryBlockMap; // [esp+Ch] [ebp-4h]
  const struct _s_FuncInfo *v12; // [esp+18h] [ebp+8h]

  nTryBlocks = a1->nTryBlocks;
  pTryBlockMap = a1->pTryBlockMap;
  v7 = nTryBlocks;
LABEL_8:
  v12 = (const struct _s_FuncInfo *)nTryBlocks;
  while ( a2 >= 0 )
  {
    if ( nTryBlocks == -1 )
      _inconsistency();
    v8 = &pTryBlockMap[--nTryBlocks];
    if ( v8->tryHigh < a3 && a3 <= v8->catchHigh || nTryBlocks == -1 )
    {
      --a2;
      v7 = (unsigned int)v12;
      goto LABEL_8;
    }
  }
  v9 = nTryBlocks + 1;
  *a4 = v9;
  *a5 = v7;
  if ( v7 > a1->nTryBlocks || v9 > v7 )
    _inconsistency();
  return &pTryBlockMap[v9];
}

// Address: 0x10008B48
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 152);
  *(_DWORD *)(_getptd() + 152) = a1;
  return a1;
}

// Address: 0x10008B74
int __cdecl _IsExceptionObjectToBeDestroyed(int a1)
{
  _DWORD *i; // eax

  for ( i = *(_DWORD **)(_getptd() + 152); ; i = (_DWORD *)i[1] )
  {
    if ( i == nullptr )
      return 1;
    if ( *i == a1 )
      break;
  }
  return 0;
}

// Address: 0x10008B9B
int __cdecl _FindAndUnlinkFrame(int a1)
{
  int result; // eax

  if ( a1 == *(_DWORD *)(_getptd() + 152) )
  {
    result = _getptd();
    *(_DWORD *)(result + 152) = *(_DWORD *)(a1 + 4);
  }
  else
  {
    for ( result = *(_DWORD *)(_getptd() + 152); ; result = *(_DWORD *)(result + 4) )
    {
      if ( *(_DWORD *)(result + 4) == 0 )
        _inconsistency();
      if ( a1 == *(_DWORD *)(result + 4) )
        break;
    }
    *(_DWORD *)(result + 4) = *(_DWORD *)(a1 + 4);
  }
  return result;
}

// Address: 0x10008BED
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x10008C4D
_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x10008C80
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x10008CC0
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  size_t v3; // edx
  int v4; // eax
  _BYTE *v6; // edi
  int v7; // ecx
  size_t v8; // ecx
  unsigned int v9; // ecx

  v3 = Size;
  if ( Size == 0 )
    return a1;
  LOBYTE(v4) = Val;
  if ( (_BYTE)Val == 0 && Size >= 0x100 && dword_10020EC4 != 0 )
    return _VEC_memzero(a1, Val, Size);
  v6 = a1;
  if ( Size < 4 )
    goto LABEL_17;
  v7 = -(int)a1 & 3;
  if ( v7 != 0 )
  {
    v3 = Size - v7;
    do
    {
      *v6++ = Val;
      --v7;
    }
    while ( v7 != 0 );
  }
  v4 = 16843009 * (unsigned __int8)Val;
  v8 = v3;
  v3 &= 3u;
  v9 = v8 >> 2;
  if ( v9 == 0 || (memset32(v6, v4, v9), v6 += 4 * v9, v3 != 0) )
  {
LABEL_17:
    do
    {
      *v6++ = v4;
      --v3;
    }
    while ( v3 != 0 );
  }
  return a1;
}

// Address: 0x10008D3C
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_1000F2B0;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x10008D81
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { retn }
}

// Address: 0x10008DA0
int __cdecl SEH_1000F2B0(int a1, _DWORD *TargetFrame, int a3)
{
  _DWORD *v3; // ebx
  uintptr_t v4; // esi
  char *v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v10; // eax
  _DWORD v11[2]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  _DWORD *v14; // [esp+1Ch] [ebp-8h]
  char v15; // [esp+23h] [ebp-1h]

  v3 = TargetFrame;
  v4 = __security_cookie ^ TargetFrame[2];
  v15 = 0;
  v13 = 1;
  v5 = (char *)(TargetFrame + 4);
  if ( (*(_BYTE *)(a1 + 4) & 0x66) != 0 )
    goto LABEL_17;
  *(TargetFrame - 1) = v11;
  v3 = (_DWORD *)TargetFrame[3];
  v11[0] = a1;
  v11[1] = a3;
  if ( v3 != (_DWORD *)-2 )
  {
    do
    {
      v6 = *(_DWORD *)(v4 + 12 * (_DWORD)v3 + 20);
      v12 = (_DWORD *)(v4 + 12 * (_DWORD)v3 + 16);
      v7 = (_DWORD *)*v12;
      v14 = (_DWORD *)*v12;
      if ( v6 != 0 )
      {
        v8 = _EH4_CallFilterFunc(v6, v5);
        v15 = 1;
        if ( v8 < 0 )
          return 0;
        if ( v8 > 0 )
        {
          if ( *(_DWORD *)a1 == -529697949
            && __DestructExceptionObject != nullptr
            && _IsNonwritableInCurrentImage(&off_10017F98) != 0 )
          {
            __DestructExceptionObject(a1, 1);
          }
          _EH4_GlobalUnwind(TargetFrame);
          v10 = TargetFrame;
          if ( (_DWORD *)TargetFrame[3] != v3 )
          {
            _EH4_LocalUnwind(v5, &__security_cookie);
            v10 = TargetFrame;
          }
          v10[3] = v14;
          _EH4_TransferToHandler(v12[2], v5);
LABEL_17:
          if ( v3[3] != -2 )
            _EH4_LocalUnwind(v5, &__security_cookie);
          return v13;
        }
        v7 = v14;
      }
      v3 = v7;
    }
    while ( v7 != (_DWORD *)-2 );
  }
  return v13;
}

// Address: 0x10008F2C
int (__cdecl *_cfltcvt_init())(int, int, int, int, size_t Size, int)
{
  off_1001EA80[0] = (int (*)())_cfltcvt;
  off_1001EA84[0] = (int (*)())_cropzeros;
  off_1001EA88[0] = (int (*)())_fassign;
  off_1001EA8C[0] = (int (*)())_forcdecpt;
  off_1001EA90[0] = (int (*)())_positive;
  off_1001EA94[0] = (int (*)())_cfltcvt;
  off_1001EA98[0] = (int (*)())_cfltcvt_l;
  off_1001EA9C[0] = (int (*)())_fassign_l;
  off_1001EAA0[0] = (int (*)())_cropzeros_l;
  off_1001EAA4 = (int (*)())_forcdecpt_l;
  return _cfltcvt;
}

// Address: 0x10008F8C
int __cdecl _fpmath(int a1)
{
  int result; // eax

  _cfltcvt_init();
  result = _ms_p5_mp_test_fdiv();
  dword_1001F40C = result;
  if ( a1 != 0 )
    result = _setdefaultprecision();
  __asm { fnclex }
  return result;
}

// Address: 0x10008FB0
int _alloca_probe_16()
{
  return _alloca_probe();
}

// Address: 0x10008FC6
int _alloca_probe_8()
{
  return _alloca_probe();
}

// Address: 0x10008FDC
void __cdecl __noreturn __report_gsfailure()
{
  int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  unsigned int v6; // kr00_4
  HANDLE CurrentProcess; // eax
  int vars0; // [esp+328h] [ebp+0h]
  int retaddr; // [esp+32Ch] [ebp+4h]
  char v10; // [esp+330h] [ebp+8h] BYREF

  dword_1001F518 = v0;
  dword_1001F514 = v2;
  dword_1001F510 = v1;
  dword_1001F50C = v3;
  dword_1001F508 = v5;
  dword_1001F504 = v4;
  word_1001F530 = __SS__;
  word_1001F524 = __CS__;
  word_1001F500 = __DS__;
  word_1001F4FC = __ES__;
  word_1001F4F8 = __FS__;
  word_1001F4F4 = __GS__;
  v6 = __readeflags();
  dword_1001F528 = v6;
  dword_1001F51C = vars0;
  dword_1001F520 = retaddr;
  dword_1001F52C = (int)&v10;
  dword_1001F468 = 65537;
  dword_1001F41C = retaddr;
  dword_1001F410 = -1073740791;
  dword_1001F414 = 1;
  dword_1001F460 = IsDebuggerPresent();
  sub_1000BA5D(1);
  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( dword_1001F460 == 0 )
    sub_1000BA5D(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x100090E2
static void __cdecl type_info::_Type_info_dtor(struct type_info *a1)
{
  int v1; // ecx
  void *v2; // eax
  _DWORD *v3; // edx

  _lock(14);
  v1 = *((_DWORD *)a1 + 1);
  if ( v1 != 0 )
  {
    v2 = Block;
    v3 = &unk_1001F734;
    while ( Block != nullptr )
    {
      if ( *(_DWORD *)Block == v1 )
      {
        v3[1] = *((_DWORD *)Block + 1);
        free(v2);
        break;
      }
      v3 = Block;
    }
    free(*((void **)a1 + 1));
    *((_DWORD *)a1 + 1) = 0;
  }
  _unlock(14);
}

// Address: 0x10009160
int __cdecl strcmp(const char *Str1, const char *Str2)
{
  const char *v2; // edx
  const char *v3; // ecx
  unsigned int v4; // eax
  bool v5; // cf
  unsigned int v6; // eax
  __int16 v8; // ax

  v2 = Str1;
  v3 = Str2;
  if ( ((unsigned __int8)Str1 & 3) == 0 )
  {
dodwords:
    while ( 1 )
    {
      v4 = *(_DWORD *)v2;
      v5 = (unsigned __int8)*(_DWORD *)v2 < (unsigned int)*v3;
      if ( (unsigned __int8)*(_DWORD *)v2 != *v3 )
        break;
      if ( (_BYTE)v4 == 0 )
        return 0;
      v5 = BYTE1(v4) < (unsigned int)v3[1];
      if ( BYTE1(v4) != v3[1] )
        break;
      if ( BYTE1(v4) == 0 )
        return 0;
      v6 = HIWORD(v4);
      v5 = (unsigned __int8)v6 < (unsigned int)v3[2];
      if ( (_BYTE)v6 != v3[2] )
        break;
      if ( (_BYTE)v6 == 0 )
        return 0;
      v5 = BYTE1(v6) < (unsigned int)v3[3];
      if ( BYTE1(v6) != v3[3] )
        break;
      v3 += 4;
      v2 += 4;
      if ( BYTE1(v6) == 0 )
        return 0;
    }
    return -2 * v5 + 1;
  }
  if ( ((unsigned __int8)Str1 & 1) != 0 )
  {
    v2 = Str1 + 1;
    v5 = *Str1 < (unsigned int)*Str2;
    if ( *Str1 != *Str2 )
      return -2 * v5 + 1;
    v3 = Str2 + 1;
    if ( *Str1 == 0 )
      return 0;
    if ( ((unsigned __int8)v2 & 2) == 0 )
      goto dodwords;
  }
  v8 = *(_WORD *)v2;
  v2 += 2;
  v5 = (unsigned __int8)v8 < (unsigned int)*v3;
  if ( (_BYTE)v8 != *v3 )
    return -2 * v5 + 1;
  if ( (_BYTE)v8 == 0 )
    return 0;
  v5 = HIBYTE(v8) < (unsigned int)v3[1];
  if ( HIBYTE(v8) == v3[1] )
  {
    if ( HIBYTE(v8) != 0 )
    {
      v3 += 2;
      goto dodwords;
    }
    return 0;
  }
  return -2 * v5 + 1;
}

// Address: 0x100091E8
int __cdecl sub_100091E8(int a1)
{
  dword_1001F73C = a1;
  return a1;
}

// Address: 0x100091F7
int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))_decode_pointer(dword_1001F73C);
  return v1 != nullptr && v1(Size) != 0;
}

// Address: 0x1000921F
PVOID __cdecl _encode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001E090 != -1
    && (v6 = dword_1001E090, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
  {
    EncodePointer = *(PVOID (__stdcall **)(PVOID))(v2 + 504);
  }
  else
  {
    ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
    if ( ModuleHandleW == nullptr )
    {
      ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
      if ( ModuleHandleW == nullptr )
        return a1;
    }
    EncodePointer = (PVOID (__stdcall *)(PVOID))GetProcAddress(ModuleHandleW, "EncodePointer");
  }
  if ( EncodePointer != nullptr )
    return EncodePointer(a1);
  return a1;
}

// Address: 0x10009291
PVOID _encoded_null()
{
  return _encode_pointer(nullptr);
}

// Address: 0x1000929A
PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001E090 != -1
    && (v6 = dword_1001E090, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
  {
    DecodePointer = *(PVOID (__stdcall **)(PVOID))(v2 + 508);
  }
  else
  {
    ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
    if ( ModuleHandleW == nullptr )
    {
      ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
      if ( ModuleHandleW == nullptr )
        return a1;
    }
    DecodePointer = (PVOID (__stdcall *)(PVOID))GetProcAddress(ModuleHandleW, "DecodePointer");
  }
  if ( DecodePointer != nullptr )
    return DecodePointer(a1);
  return a1;
}

// Address: 0x1000930C
// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}

// Address: 0x10009315
void *__set_flsgetvalue()
{
  void *Value; // esi

  Value = TlsGetValue(dwTlsIndex);
  if ( Value == nullptr )
  {
    Value = _decode_pointer(lpTlsValue);
    TlsSetValue(dwTlsIndex, Value);
  }
  return Value;
}

// Address: 0x10009349
int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_1001E090 != -1 )
  {
    v2 = dword_1001E090;
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_1001F74C);
    v0(v2);
    dword_1001E090 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}

// Address: 0x10009386
int __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleW; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]
  int savedregs; // [esp+2Ch] [ebp+0h]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
  hModule = ModuleHandleW;
  *(_DWORD *)(a1 + 92) = &unk_10017F20;
  *(_DWORD *)(a1 + 20) = 1;
  if ( ModuleHandleW != nullptr )
  {
    *(_DWORD *)(a1 + 504) = GetProcAddress(ModuleHandleW, "EncodePointer");
    *(_DWORD *)(a1 + 508) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 200) = 67;
  *(_BYTE *)(a1 + 331) = 67;
  *(_DWORD *)(a1 + 104) = &unk_1001E210;
  _lock(13);
  InterlockedIncrement(*(volatile LONG **)(a1 + 104));
  _unlock(13);
  _lock(12);
  *(_DWORD *)(a1 + 108) = a2;
  if ( a2 == 0 )
    *(_DWORD *)(a1 + 108) = off_1001E818;
  __addlocaleref(*(volatile LONG **)(a1 + 108));
  savedregs = 268473423;
  return _unlock(12);
}

// Address: 0x1000946D
DWORD *_getptd_noexit()
{
  DWORD LastError; // eax
  DWORD v1; // edi
  int (__stdcall *v2)(int); // eax
  DWORD *v3; // esi
  DWORD *v4; // eax
  int (__stdcall *v5)(int, DWORD *); // eax
  DWORD CurrentThreadId; // eax
  int v8; // [esp-8h] [ebp-10h]
  int v9; // [esp-4h] [ebp-Ch]
  DWORD *v10; // [esp-4h] [ebp-Ch]

  LastError = GetLastError();
  v9 = dword_1001E090;
  v1 = LastError;
  v2 = (int (__stdcall *)(int))__set_flsgetvalue();
  v3 = (DWORD *)v2(v9);
  if ( v3 == nullptr )
  {
    v4 = (DWORD *)_calloc_crt(1u, 532);
    v3 = v4;
    if ( v4 != nullptr )
    {
      v10 = v4;
      v8 = dword_1001E090;
      v5 = (int (__stdcall *)(int, DWORD *))_decode_pointer((void *)dword_1001F748);
      if ( v5(v8, v10) != 0 )
      {
        _initptd((int)v3, 0);
        CurrentThreadId = GetCurrentThreadId();
        v3[1] = -1;
        *v3 = CurrentThreadId;
      }
      else
      {
        free(v3);
        v3 = nullptr;
      }
    }
  }
  SetLastError(v1);
  return v3;
}

// Address: 0x100094E6
DWORD *_getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( v0 == nullptr )
    _amsg_exit(16);
  return v0;
}

// Address: 0x10009500
void __stdcall _freefls(void *Block)
{
  void *v1; // edi
  _DWORD *v2; // edi
  int savedregs; // [esp+28h] [ebp+0h]

  if ( Block != nullptr )
  {
    if ( *((_DWORD *)Block + 9) != 0 )
      free(*((void **)Block + 9));
    if ( *((_DWORD *)Block + 11) != 0 )
      free(*((void **)Block + 11));
    if ( *((_DWORD *)Block + 13) != 0 )
      free(*((void **)Block + 13));
    if ( *((_DWORD *)Block + 15) != 0 )
      free(*((void **)Block + 15));
    if ( *((_DWORD *)Block + 16) != 0 )
      free(*((void **)Block + 16));
    if ( *((_DWORD *)Block + 17) != 0 )
      free(*((void **)Block + 17));
    if ( *((_DWORD *)Block + 18) != 0 )
      free(*((void **)Block + 18));
    if ( *((_UNKNOWN **)Block + 23) != &unk_10017F20 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = *((void **)Block + 26);
    if ( v1 != nullptr && InterlockedDecrement(*((volatile LONG **)Block + 26)) == 0 && v1 != &unk_1001E210 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = *((_DWORD **)Block + 27);
    if ( v2 != nullptr )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != (_DWORD *)off_1001E818 && v2 != (_DWORD *)&unk_1001E740 && *v2 == 0 )
        __freetlocinfo(v2);
    }
    savedregs = 268473864;
    _unlock(12);
    free(Block);
  }
}

// Address: 0x1000962F
DWORD __cdecl _freeptd(void *Block)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_1001E090 != -1 )
  {
    if ( Block == nullptr && TlsGetValue(dwTlsIndex) != nullptr )
    {
      v4 = dword_1001E090;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      Block = (void *)Value(v4);
    }
    v5 = dword_1001E090;
    v2 = (void (__stdcall *)(int, _DWORD))_decode_pointer((void *)dword_1001F748);
    v2(v5, 0);
    _freefls(Block);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, nullptr);
  return result;
}

// Address: 0x1000969D
int _mtinit()
{
  HMODULE ModuleHandleW; // eax
  HMODULE v1; // edi
  BOOL (__stdcall *FlsFree)(DWORD); // eax
  DWORD v3; // eax
  int (__stdcall *v4)(_DWORD); // eax
  DWORD *v5; // eax
  DWORD *v6; // esi
  int (__stdcall *v7)(int, DWORD *); // eax
  DWORD CurrentThreadId; // eax
  int v10; // [esp-8h] [ebp-10h]
  DWORD *v11; // [esp-4h] [ebp-Ch]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
  v1 = ModuleHandleW;
  if ( ModuleHandleW != nullptr )
  {
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))GetProcAddress(ModuleHandleW, "FlsAlloc");
    FlsGetValue = (PVOID (__stdcall *)(DWORD))GetProcAddress(v1, "FlsGetValue");
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))GetProcAddress(v1, "FlsSetValue");
    FlsFree = (BOOL (__stdcall *)(DWORD))GetProcAddress(v1, "FlsFree");
    dword_1001F74C = (int)FlsFree;
    if ( FlsAlloc == nullptr || FlsGetValue == nullptr || FlsSetValue == nullptr || FlsFree == nullptr )
    {
      FlsGetValue = TlsGetValue;
      FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))__crtTlsAlloc;
      FlsSetValue = TlsSetValue;
      dword_1001F74C = (int)TlsFree;
    }
    v3 = TlsAlloc();
    dwTlsIndex = v3;
    if ( v3 == -1 || !TlsSetValue(v3, FlsGetValue) )
      return 0;
    _init_pointers();
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))_encode_pointer(FlsAlloc);
    FlsGetValue = (PVOID (__stdcall *)(DWORD))_encode_pointer(FlsGetValue);
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))_encode_pointer(FlsSetValue);
    dword_1001F74C = (int)_encode_pointer((void *)dword_1001F74C);
    if ( _mtinitlocks() != 0 )
    {
      v4 = (int (__stdcall *)(_DWORD))_decode_pointer(FlsAlloc);
      dword_1001E090 = v4(_freefls);
      if ( dword_1001E090 != -1 )
      {
        v5 = (DWORD *)_calloc_crt(1u, 532);
        v6 = v5;
        if ( v5 != nullptr )
        {
          v11 = v5;
          v10 = dword_1001E090;
          v7 = (int (__stdcall *)(int, DWORD *))_decode_pointer(FlsSetValue);
          if ( v7(v10, v11) != 0 )
          {
            _initptd((int)v6, 0);
            CurrentThreadId = GetCurrentThreadId();
            v6[1] = -1;
            *v6 = CurrentThreadId;
            return 1;
          }
        }
      }
    }
  }
  _mtterm();
  return 0;
}

// Address: 0x1000982A
void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr || dword_1001F750 == 0 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_1001F750 )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}

// Address: 0x1000986F
int __cdecl _calloc_crt(size_t Size, int a2)
{
  DWORD v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = _calloc_impl(Size, a2, 0);
    if ( v3 != 0 || dword_1001F750 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001F750 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x100098BB
void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 != nullptr || Size == 0 || dword_1001F750 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001F750 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x10009909
size_t __cdecl _msize(void *Block)
{
  size_t v2; // esi
  int v3; // [esp+10h] [ebp-20h]
  int v4; // [esp+14h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_10020FF8 != 3 )
      return HeapSize(hHeap, 0, Block);
    _lock(4);
    v3 = __sbh_find_block(Block);
    v2 = v3 != 0 ? *((_DWORD *)Block - 1) - 9 : v4;
    _unlock(4);
    if ( v3 == 0 )
      return HeapSize(hHeap, 0, Block);
    return v2;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x100099AC
HMODULE __cdecl _crt_waiting_on_module_handle(LPCWSTR lpModuleName)
{
  DWORD v1; // edi
  HMODULE result; // eax

  v1 = 1000;
  do
  {
    Sleep(v1);
    result = GetModuleHandleW(lpModuleName);
    v1 += 1000;
  }
  while ( v1 <= 0xEA60 && result == nullptr );
  return result;
}

// Address: 0x100099DC
int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer(off_1001E098);
  return v1(255);
}

// Address: 0x10009A05
HMODULE __cdecl __crtCorExitProcess(int a1)
{
  HMODULE result; // eax

  result = GetModuleHandleW(L"mscoree.dll");
  if ( result != nullptr )
  {
    result = (HMODULE)GetProcAddress(result, "CorExitProcess");
    if ( result != nullptr )
      return (HMODULE)((int (__stdcall *)(int))result)(a1);
  }
  return result;
}

// Address: 0x10009A30
void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x10009A48
int _lockexit()
{
  return _lock(8);
}

// Address: 0x10009A51
int _unlockexit()
{
  return _unlock(8);
}

// Address: 0x10009A5A
void __cdecl _initterm(_PVFV *First, _PVFV *Last)
{
  void (**v2)(void); // eax
  void (**i)(void); // esi

  for ( i = v2; i < First; ++i )
  {
    if ( *i != nullptr )
      (*i)();
  }
}

// Address: 0x10009A77
int __cdecl _initterm_e(_PIFV *First, _PIFV *Last)
{
  int result; // eax

  result = 0;
  while ( First < Last && result == 0 )
  {
    if ( *First != nullptr )
      result = (*First)();
    ++First;
  }
  return result;
}

// Address: 0x10009A9B
int __cdecl _cinit(int a1)
{
  int result; // eax
  _PVFV *savedregs; // [esp+4h] [ebp+0h]

  if ( _fpmath != nullptr && _IsNonwritableInCurrentImage(&off_10017830) != 0 )
    _fpmath(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&dword_1001723C, (_PIFV *)&Last);
  if ( result == 0 )
  {
    atexit(sub_1000DF37);
    _initterm((_PVFV *)&First, savedregs);
    if ( dword_10021010 != nullptr && _IsNonwritableInCurrentImage(&dword_10021010) != 0 )
      dword_10021010(0, 2, 0);
    return 0;
  }
  return result;
}

// Address: 0x10009B20
void __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  void **v3; // edi
  void **v4; // esi
  void (*v5)(void); // edi
  void **v6; // edi
  void **v7; // eax
  _PVFV *v8; // [esp+0h] [ebp-38h]
  void **v9; // [esp+10h] [ebp-28h]
  void **v10; // [esp+18h] [ebp-20h]
  void **v11; // [esp+1Ch] [ebp-1Ch]

  _lock(8);
  if ( dword_1001F784 != 1 )
  {
    dword_1001F780 = 1;
    byte_1001F77C = a3;
    if ( a2 == 0 )
    {
      v3 = (void **)_decode_pointer((void *)dword_10021008);
      v9 = v3;
      if ( v3 != nullptr )
      {
        v4 = (void **)_decode_pointer((void *)dword_10021004);
        v11 = v3;
        v10 = v4;
        while ( --v4 >= v3 )
        {
          if ( *v4 != _encoded_null() )
          {
            if ( v4 < v3 )
              break;
            v5 = (void (*)(void))_decode_pointer(*v4);
            *v4 = _encoded_null();
            v5();
            v6 = (void **)_decode_pointer((void *)dword_10021008);
            v7 = (void **)_decode_pointer((void *)dword_10021004);
            if ( v11 != v6 || v10 != v7 )
            {
              v11 = v6;
              v9 = v6;
              v10 = v7;
              v4 = v7;
            }
            v3 = v9;
          }
        }
      }
      _initterm((_PVFV *)&dword_10017260, v8);
    }
    _initterm((_PVFV *)&dword_10017268, v8);
  }
  if ( a3 != 0 )
    _unlock(8);
  if ( a3 == 0 )
  {
    dword_1001F784 = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
}

// Address: 0x10009C4C
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x10009C62
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x10009C71
void (__cdecl __noreturn *_init_pointers())(int Code)
{
  PVOID v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null();
  sub_100091E8((int)v0);
  sub_10010499(v0);
  sub_10007BD1((int)v0);
  sub_1001048A(v0);
  sub_1001047B(v0);
  _initp_misc_winsig(v0);
  nullsub_1(v0);
  _initp_eh_hooks(v0);
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit);
  off_1001E098 = result;
  return result;
}

// Address: 0x10009CBF
int __cdecl _flsbuf(int Ch, FILE *File)
{
  FILE *v2; // esi
  int flag; // eax
  unsigned int v5; // eax
  char *base; // eax
  char *ptr; // edi
  signed int v8; // edi
  _BYTE *v9; // eax
  __int64 v10; // rax
  int v11; // [esp+4h] [ebp-4h]

  v2 = File;
  File = (FILE *)_fileno(File);
  flag = v2->_flag;
  if ( (flag & 0x82) == 0 )
  {
    *_errno() = 9;
LABEL_3:
    v2->_flag |= 0x20u;
    return -1;
  }
  if ( (flag & 0x40) != 0 )
  {
    *_errno() = 34;
    goto LABEL_3;
  }
  if ( (flag & 1) != 0 )
  {
    v2->_cnt = 0;
    if ( (flag & 0x10) == 0 )
    {
      v2->_flag = flag | 0x20;
      return -1;
    }
    v2->_ptr = v2->_base;
    v2->_flag = flag & 0xFFFFFFFE;
  }
  v5 = v2->_flag & 0xFFFFFFED | 2;
  v2->_flag = v5;
  v2->_cnt = 0;
  v11 = 0;
  if ( (v5 & 0x10C) == 0
    && (v2 != (FILE *)(sub_10010F62() + 32) && v2 != (FILE *)(sub_10010F62() + 64) || _isatty((int)File) == 0) )
  {
    _getbuf(v2);
  }
  if ( (v2->_flag & 0x108) != 0 )
  {
    base = v2->_base;
    ptr = v2->_ptr;
    v2->_ptr = base + 1;
    v8 = ptr - base;
    v2->_cnt = v2->_bufsiz - 1;
    if ( v8 <= 0 )
    {
      if ( File == (FILE *)-1 || File == (FILE *)-2 )
        v9 = &unk_1001EA08;
      else
        v9 = (_BYTE *)(dword_10020EE0[(int)File >> 5] + (((unsigned __int8)File & 0x1F) << 6));
      if ( (v9[4] & 0x20) != 0 )
      {
        v10 = _lseeki64((int)File, 0, 2);
        if ( (HIDWORD(v10) & (unsigned int)v10) == 0xFFFFFFFF )
          goto LABEL_27;
      }
    }
    else
    {
      v11 = _write((int)File, base, v8);
    }
    *v2->_base = Ch;
  }
  else
  {
    v8 = 1;
    v11 = _write((int)File, &Ch, 1u);
  }
  if ( v11 != v8 )
  {
LABEL_27:
    v2->_flag |= 0x20u;
    return -1;
  }
  return (unsigned __int8)Ch;
}

// Address: 0x10009E23
int __cdecl _get_errno_from_oserr(int a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_1001E0A0[2 * i] )
      return dword_1001E0A4[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x10009E65
int *__cdecl _errno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != nullptr )
    return (int *)(v0 + 2);
  else
    return (int *)&unk_1001E208;
}

// Address: 0x10009E78
unsigned int *__cdecl __doserrno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != nullptr )
    return v0 + 3;
  else
    return (unsigned int *)&unk_1001E20C;
}

// Address: 0x10009E8B
int *__cdecl _dosmaperr(unsigned int a1)
{
  int errno_from_oserr; // esi
  int *result; // eax

  *__doserrno() = a1;
  errno_from_oserr = _get_errno_from_oserr(a1);
  result = _errno();
  *result = errno_from_oserr;
  return result;
}

// Address: 0x10009EAE
int *__usercall write_string@<eax>(int *result@<eax>, unsigned __int16 *a2@<ecx>, int a3@<edi>, int a4)
{
  int *v4; // esi

  v4 = result;
  if ( (*(_BYTE *)(a3 + 12) & 0x40) == 0 || *(_DWORD *)(a3 + 8) != 0 )
  {
    while ( a4 > 0 )
    {
      --a4;
      result = (int *)write_char(*a2++);
      if ( *v4 == -1 )
      {
        result = _errno();
        if ( *result != 42 )
          return result;
        result = (int *)write_char(63);
      }
    }
  }
  else
  {
    *v4 += a4;
    return (int *)a4;
  }
  return result;
}

// Address: 0x10009F00
int __cdecl _woutput_l(int a1, unsigned __int16 *a2, struct localeinfo_struct *a3, unsigned __int16 *a4)
{
  unsigned __int16 *v4; // ebx
  unsigned __int16 *v5; // esi
  int v7; // edx
  int v8; // ecx
  unsigned __int16 *v9; // esi
  int v10; // eax
  unsigned __int16 v11; // ax
  const char *v12; // esi
  int v13; // edi
  char *v14; // ebx
  char *j; // esi
  int v16; // eax
  __int16 *v17; // eax
  char *v18; // ecx
  signed int v19; // eax
  int v20; // eax
  _WORD *v21; // esi
  __int64 v22; // rax
  unsigned __int16 *v23; // ebx
  int v24; // edi
  void *v25; // eax
  int v26; // eax
  unsigned __int16 *v27; // ebx
  void (__cdecl *v28)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *); // eax
  int v29; // ebx
  void (__cdecl *v30)(const char *, __crt_locale_pointers *); // eax
  void (__cdecl *v31)(const char *, __crt_locale_pointers *); // eax
  unsigned int v32; // ebx
  unsigned int v33; // edi
  _BYTE *i; // esi
  int v35; // eax
  int v36; // ecx
  unsigned __int64 v37; // kr08_8
  _BYTE *v38; // eax
  char *v39; // esi
  char *v40; // eax
  int v41; // esi
  int v42; // ebx
  int v43; // edi
  char *v44; // edi
  int v45; // eax
  int v46; // [esp-14h] [ebp-494h]
  int v47; // [esp-10h] [ebp-490h]
  int v48; // [esp-Ch] [ebp-48Ch]
  int v49; // [esp-8h] [ebp-488h]
  unsigned __int16 v50; // [esp-4h] [ebp-484h]
  int v51; // [esp+10h] [ebp-470h]
  _DWORD v52[2]; // [esp+14h] [ebp-46Ch] BYREF
  wchar_t v53[2]; // [esp+1Ch] [ebp-464h] BYREF
  int v54; // [esp+20h] [ebp-460h]
  int v55; // [esp+24h] [ebp-45Ch]
  __crt_locale_pointers Locale; // [esp+28h] [ebp-458h] BYREF
  int v57; // [esp+30h] [ebp-450h]
  char v58; // [esp+34h] [ebp-44Ch]
  int v59; // [esp+38h] [ebp-448h]
  void *Block; // [esp+3Ch] [ebp-444h]
  unsigned __int16 *v61; // [esp+40h] [ebp-440h]
  int v62; // [esp+44h] [ebp-43Ch]
  unsigned __int16 v63[2]; // [esp+48h] [ebp-438h] BYREF
  char SrcCh[4]; // [esp+4Ch] [ebp-434h] BYREF
  int v65; // [esp+50h] [ebp-430h]
  int v66; // [esp+54h] [ebp-42Ch]
  int v67; // [esp+58h] [ebp-428h]
  int v68; // [esp+5Ch] [ebp-424h]
  int v69; // [esp+60h] [ebp-420h] BYREF
  int v70; // [esp+64h] [ebp-41Ch]
  int v71; // [esp+68h] [ebp-418h]
  int v72; // [esp+6Ch] [ebp-414h]
  char *v73; // [esp+70h] [ebp-410h]
  int v74; // [esp+74h] [ebp-40Ch]
  int v75; // [esp+78h] [ebp-408h]
  wchar_t DstCh[255]; // [esp+7Ch] [ebp-404h] BYREF
  _BYTE v77[513]; // [esp+27Bh] [ebp-205h] BYREF

  v4 = a4;
  v5 = a2;
  v65 = a1;
  v70 = (int)a4;
  v59 = 0;
  v75 = 0;
  v66 = 0;
  v74 = 0;
  v68 = 0;
  v62 = 0;
  v67 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  if ( v65 == 0 || a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    goto LABEL_3;
  }
  v7 = *a2;
  v8 = 0;
  v69 = 0;
  v72 = 0;
  Block = nullptr;
  v71 = v7;
  if ( (_WORD)v7 == 0 )
  {
LABEL_210:
    if ( v58 != 0 )
      *(_DWORD *)(v57 + 112) &= ~2u;
    return v69;
  }
  while ( 2 )
  {
    v9 = v5 + 1;
    v61 = v9;
    if ( v69 < 0 )
      goto LABEL_210;
    if ( (unsigned __int16)(v7 - 32) > 0x58u )
      v10 = 0;
    else
      v10 = *((_BYTE *)&off_10018708 + (unsigned __int16)v7) & 0xF;
    v55 = byte_10018728[8 * v10 + v8] >> 4;
    switch ( v55 )
    {
      case 0:
        goto $NORMAL_STATE$29479;
      case 1:
        v74 = -1;
        v54 = 0;
        v62 = 0;
        v66 = 0;
        v68 = 0;
        v75 = 0;
        v67 = 0;
        goto LABEL_207;
      case 2:
        switch ( (unsigned __int16)v7 )
        {
          case ' ':
            v75 |= 2u;
            break;
          case '#':
            v75 |= 0x80u;
            break;
          case '+':
            v75 |= 1u;
            break;
          case '-':
            v75 |= 4u;
            break;
          case '0':
            v75 |= 8u;
            break;
          default:
            break;
        }
        goto LABEL_207;
      case 3:
        if ( (_WORD)v7 == 42 )
        {
          v70 = (int)(v4 + 2);
          v66 = *(_DWORD *)v4;
          if ( v66 < 0 )
          {
            v75 |= 4u;
            v66 = -v66;
          }
        }
        else
        {
          v66 = 10 * v66 + (unsigned __int16)v7 - 48;
        }
        goto LABEL_207;
      case 4:
        v74 = 0;
        goto LABEL_207;
      case 5:
        if ( (_WORD)v7 == 42 )
        {
          v70 = (int)(v4 + 2);
          v74 = *(_DWORD *)v4;
          if ( v74 < 0 )
            v74 = -1;
        }
        else
        {
          v74 = 10 * v74 + (unsigned __int16)v7 - 48;
        }
        goto LABEL_207;
      case 6:
        switch ( (unsigned __int16)v7 )
        {
          case 'I':
            v11 = *v9;
            if ( *v9 == 54 && v9[1] == 52 )
            {
              v75 |= 0x8000u;
              v61 = v9 + 2;
            }
            else if ( v11 == 51 && v9[1] == 50 )
            {
              v75 &= ~0x8000u;
              v61 = v9 + 2;
            }
            else if ( v11 != 100 && v11 != 105 && v11 != 111 && v11 != 117 && v11 != 120 && v11 != 88 )
            {
              v55 = 0;
$NORMAL_STATE$29479:
              v67 = 1;
              write_char(v7);
            }
            break;
          case 'h':
            v75 |= 0x20u;
            break;
          case 'l':
            if ( *v9 == 108 )
            {
              v75 |= 0x1000u;
              v61 = v9 + 1;
            }
            else
            {
              v75 |= 0x10u;
            }
            break;
          case 'w':
            v75 |= 0x800u;
            break;
          default:
            break;
        }
        goto LABEL_207;
      case 7:
        if ( (unsigned __int16)v7 <= 0x64u )
        {
          if ( (unsigned __int16)v7 == 100 )
            goto LABEL_111;
          if ( (unsigned __int16)v7 > 0x53u )
          {
            if ( (unsigned __int16)v7 != 88 )
            {
              if ( (unsigned __int16)v7 == 90 )
              {
                v17 = *(__int16 **)v4;
                v70 = (int)(v4 + 2);
                if ( v17 != nullptr && (v18 = *((char **)v17 + 1)) != nullptr )
                {
                  v19 = *v17;
                  v73 = v18;
                  if ( (v75 & 0x800) != 0 )
                  {
                    v20 = v19 - (v19 >> 31);
                    v67 = 1;
LABEL_178:
                    v19 = v20 >> 1;
                    goto LABEL_179;
                  }
                  v67 = 0;
                }
                else
                {
                  v73 = Str;
                  v19 = strlen(Str);
                }
LABEL_179:
                v72 = v19;
                goto LABEL_180;
              }
              if ( (unsigned __int16)v7 == 97 )
                goto LABEL_65;
              if ( (unsigned __int16)v7 != 99 )
                goto LABEL_180;
              goto LABEL_86;
            }
LABEL_133:
            v59 = 7;
$COMMON_HEX$29628:
            v71 = 16;
            if ( (v75 & 0x80u) != 0 )
            {
              v63[0] = 48;
              v63[1] = v59 + 81;
              v68 = 2;
            }
$COMMON_INT$29621:
            if ( (v75 & 0x8000) != 0 || (v75 & 0x1000) != 0 )
            {
              v22 = *(_QWORD *)v4;
              v23 = v4 + 4;
            }
            else
            {
              v23 = v4 + 2;
              if ( (v75 & 0x20) != 0 )
              {
                v70 = (int)v23;
                if ( (v75 & 0x40) != 0 )
                  LODWORD(v22) = (__int16)*(v23 - 2);
                else
                  LODWORD(v22) = *(v23 - 2);
                v22 = (int)v22;
LABEL_150:
                if ( (v75 & 0x40) != 0 && v22 < 0 )
                {
                  v22 = -v22;
                  v75 |= 0x100u;
                }
                v32 = HIDWORD(v22);
                v33 = v22;
                if ( (v75 & 0x9000) == 0 )
                  v32 = 0;
                if ( v74 >= 0 )
                {
                  v75 &= ~8u;
                  if ( v74 > 512 )
                    v74 = 512;
                }
                else
                {
                  v74 = 1;
                }
                if ( (v32 | (unsigned int)v22) == 0 )
                  v68 = 0;
                for ( i = v77; ; --i )
                {
                  v35 = v74--;
                  if ( v35 <= 0 && (v32 | v33) == 0 )
                    break;
                  v36 = __PAIR64__(v32, v33) % v71 + 48;
                  v37 = __PAIR64__(v32, v33) / v71;
                  v32 = HIDWORD(v37);
                  v33 = v37;
                  if ( v36 > 57 )
                    LOBYTE(v36) = v59 + v36;
                  *i = v36;
                }
                v38 = (_BYTE *)(v77 - i);
                v39 = i + 1;
                v72 = (int)v38;
                v73 = v39;
                if ( (v75 & 0x200) != 0 && (v38 == nullptr || *v39 != 48) )
                {
                  *--v73 = 48;
                  v19 = (signed int)(v38 + 1);
                  goto LABEL_179;
                }
                goto LABEL_180;
              }
              LODWORD(v22) = *((_DWORD *)v23 - 1);
              if ( (v75 & 0x40) != 0 )
                v22 = (int)v22;
              else
                HIDWORD(v22) = 0;
            }
            v70 = (int)v23;
            goto LABEL_150;
          }
          switch ( (unsigned __int16)v7 )
          {
            case 'S':
              if ( (v75 & 0x830) == 0 )
                v75 |= 0x20u;
LABEL_71:
              v13 = v74;
              if ( v74 == -1 )
                v13 = 0x7FFFFFFF;
              v70 = (int)(v4 + 2);
              v14 = *(char **)v4;
              v73 = v14;
              if ( (v75 & 0x20) == 0 )
              {
                if ( v14 == nullptr )
                  v73 = (char *)off_1001ED34;
                v40 = v73;
                v67 = 1;
                while ( v13 != 0 )
                {
                  --v13;
                  if ( *(_WORD *)v40 == 0 )
                    break;
                  v40 += 2;
                }
                v20 = v40 - v73;
                goto LABEL_178;
              }
              if ( v14 == nullptr )
                v73 = Str;
              v72 = 0;
              for ( j = v73; v72 < v13; ++v72 )
              {
                if ( *j == 0 )
                  break;
                if ( _isleadbyte_l((unsigned __int8)*j, &Locale) != 0 )
                  ++j;
                ++j;
              }
              break;
            case 'A':
              goto LABEL_64;
            case 'C':
              if ( (v75 & 0x830) == 0 )
                v75 |= 0x20u;
LABEL_86:
              v16 = *v4;
              v67 = 1;
              v70 = (int)(v4 + 2);
              *(_DWORD *)v53 = v16;
              if ( (v75 & 0x20) != 0 )
              {
                SrcCh[0] = v16;
                SrcCh[1] = 0;
                if ( _mbtowc_l(DstCh, SrcCh, *((_DWORD *)Locale.locinfo + 43), &Locale) < 0 )
                  v62 = 1;
              }
              else
              {
                DstCh[0] = v16;
              }
              v73 = (char *)DstCh;
              v72 = 1;
              break;
            case 'E':
            case 'G':
LABEL_64:
              v7 += 32;
              v54 = 1;
              v71 = v7;
LABEL_65:
              v75 |= 0x40u;
              v12 = (const char *)DstCh;
              v73 = (char *)DstCh;
              v72 = 512;
              if ( v74 >= 0 )
              {
                if ( v74 != 0 )
                {
                  if ( v74 > 512 )
                    v74 = 512;
                  if ( v74 > 163 )
                  {
                    v24 = v74 + 349;
                    v25 = _malloc_crt(v74 + 349);
                    LOBYTE(v7) = v71;
                    Block = v25;
                    if ( v25 != nullptr )
                    {
                      v73 = (char *)v25;
                      v72 = v24;
                      v12 = (const char *)v25;
                    }
                    else
                    {
                      v74 = 163;
                    }
                  }
                }
                else
                {
                  v74 = (_WORD)v7 == 103;
                }
              }
              else
              {
                v74 = 6;
              }
              v26 = *(_DWORD *)v4;
              v27 = v4 + 4;
              v52[0] = v26;
              v52[1] = *((_DWORD *)v27 - 1);
              v49 = v54;
              v48 = v74;
              v70 = (int)v27;
              v47 = (char)v7;
              v46 = v72;
              v28 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_1001EA98[0]);
              v28(v52, v12, v46, v47, v48, v49, &Locale);
              v29 = v75 & 0x80;
              if ( (v75 & 0x80) != 0 && v74 == 0 )
              {
                v30 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1001EAA4);
                v30(v12, &Locale);
              }
              if ( (_WORD)v71 == 103 && v29 == 0 )
              {
                v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1001EAA0[0]);
                v31(v12, &Locale);
              }
              if ( *v12 == 45 )
              {
                v75 |= 0x100u;
                v73 = (char *)++v12;
              }
              v19 = strlen(v12);
              goto LABEL_179;
            default:
              break;
          }
LABEL_180:
          if ( v62 != 0 )
            goto LABEL_205;
          if ( (v75 & 0x40) != 0 )
          {
            if ( (v75 & 0x100) != 0 )
            {
              v50 = 45;
LABEL_188:
              v63[0] = v50;
              v68 = 1;
              goto LABEL_189;
            }
            if ( (v75 & 1) != 0 )
            {
              v50 = 43;
              goto LABEL_188;
            }
            if ( (v75 & 2) != 0 )
            {
              v50 = 32;
              goto LABEL_188;
            }
          }
LABEL_189:
          v41 = v72;
          v42 = v66 - v72 - v68;
          if ( (v75 & 0xC) == 0 )
            write_multi_char(32, v66 - v72 - v68, v65);
          v43 = v65;
          write_string(&v69, v63, v65, v68);
          if ( (v75 & 8) != 0 && (v75 & 4) == 0 )
            write_multi_char(48, v42, v43);
          if ( v67 != 0 || v41 <= 0 )
          {
            write_string(&v69, (unsigned __int16 *)v73, v43, v41);
          }
          else
          {
            v44 = v73;
            v71 = v41;
            while ( 1 )
            {
              --v71;
              v51 = _mbtowc_l(v53, v44, *((_DWORD *)Locale.locinfo + 43), &Locale);
              if ( v51 <= 0 )
                break;
              write_char(*(_DWORD *)v53);
              v44 += v51;
              if ( v71 <= 0 )
                goto LABEL_202;
            }
            v69 = -1;
          }
LABEL_202:
          if ( v69 >= 0 && (v75 & 4) != 0 )
            write_multi_char(32, v42, v65);
LABEL_205:
          if ( Block != nullptr )
          {
            free(Block);
            Block = nullptr;
          }
LABEL_207:
          v5 = v61;
          v45 = *v61;
          v71 = v45;
          if ( (_WORD)v45 == 0 )
            goto LABEL_210;
          v8 = v55;
          v4 = (unsigned __int16 *)v70;
          v7 = v45;
          continue;
        }
        if ( (unsigned __int16)v7 > 0x70u )
        {
          if ( (unsigned __int16)v7 != 115 )
          {
            if ( (unsigned __int16)v7 != 117 )
            {
              if ( (unsigned __int16)v7 != 120 )
                goto LABEL_180;
              v59 = 39;
              goto $COMMON_HEX$29628;
            }
            goto LABEL_112;
          }
          goto LABEL_71;
        }
        if ( (unsigned __int16)v7 == 112 )
        {
          v74 = 8;
          goto LABEL_133;
        }
        if ( (unsigned __int16)v7 < 0x65u )
          goto LABEL_180;
        if ( (unsigned __int16)v7 <= 0x67u )
          goto LABEL_65;
        if ( (unsigned __int16)v7 == 105 )
        {
LABEL_111:
          v75 |= 0x40u;
LABEL_112:
          v71 = 10;
          goto $COMMON_INT$29621;
        }
        if ( (unsigned __int16)v7 != 110 )
        {
          if ( (unsigned __int16)v7 != 111 )
            goto LABEL_180;
          v71 = 8;
          if ( (v75 & 0x80u) != 0 )
            v75 |= 0x200u;
          goto $COMMON_INT$29621;
        }
        v21 = *(_WORD **)v4;
        v70 = (int)(v4 + 2);
        if ( _get_printf_count_output() != 0 )
        {
          if ( (v75 & 0x20) != 0 )
            *v21 = v69;
          else
            *(_DWORD *)v21 = v69;
          v62 = 1;
          goto LABEL_205;
        }
        *_errno() = 22;
        _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
LABEL_3:
        if ( v58 != 0 )
          *(_DWORD *)(v57 + 112) &= ~2u;
        return -1;
      default:
        goto LABEL_207;
    }
  }
}

// Address: 0x1000AA98
__int16 __usercall write_char@<ax>(int a1@<eax>, _DWORD *a2@<esi>, wchar_t Character)
{
  if ( ((*(_BYTE *)(a1 + 12) & 0x40) == 0 || *(_DWORD *)(a1 + 8) != 0)
    && (LOWORD(a1) = _fputwc_nolock(Character, (FILE *)a1), (_WORD)a1 == 0xFFFF) )
  {
    *a2 = -1;
  }
  else
  {
    ++*a2;
  }
  return a1;
}

// Address: 0x1000AAC7
__int16 __usercall write_multi_char@<ax>(_DWORD *a1@<eax>, wchar_t a2, int a3, int a4)
{
  _DWORD *v4; // esi

  v4 = a1;
  do
  {
    if ( a3 <= 0 )
      break;
    --a3;
    LOWORD(a1) = write_char(a4, v4, a2);
  }
  while ( *v4 != -1 );
  return (__int16)a1;
}

// Address: 0x1000AAEE
int __cdecl _woutput_s_l(int a1, unsigned __int16 *a2, struct localeinfo_struct *a3, unsigned __int16 *a4)
{
  unsigned __int16 *v4; // ebx
  unsigned __int16 *v5; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int16 v12; // ax
  const char *v13; // esi
  int v14; // edi
  char *v15; // ebx
  char *i; // esi
  int v17; // eax
  __int16 *v18; // eax
  char *v19; // ecx
  int v20; // eax
  int v21; // eax
  _WORD *v22; // esi
  unsigned __int16 *v23; // ebx
  __int64 v24; // rax
  int v25; // edi
  void *v26; // eax
  int v27; // eax
  unsigned __int16 *v28; // ebx
  void (__cdecl *v29)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *); // eax
  int v30; // ebx
  void (__cdecl *v31)(const char *, __crt_locale_pointers *); // eax
  void (__cdecl *v32)(const char *, __crt_locale_pointers *); // eax
  unsigned int v33; // ebx
  unsigned int v34; // edi
  _BYTE *j; // esi
  int v36; // eax
  int v37; // ecx
  unsigned __int64 v38; // kr08_8
  _BYTE *v39; // eax
  char *v40; // esi
  char *v41; // eax
  int v42; // esi
  int v43; // ebx
  int v44; // edi
  char *v45; // edi
  int v46; // eax
  int v47; // [esp-14h] [ebp-494h]
  int v48; // [esp-10h] [ebp-490h]
  int v49; // [esp-Ch] [ebp-48Ch]
  int v50; // [esp-8h] [ebp-488h]
  unsigned __int16 v51; // [esp-4h] [ebp-484h]
  int v52; // [esp+10h] [ebp-470h]
  _DWORD v53[2]; // [esp+14h] [ebp-46Ch] BYREF
  wchar_t v54[2]; // [esp+1Ch] [ebp-464h] BYREF
  unsigned __int16 *v55; // [esp+20h] [ebp-460h]
  int v56; // [esp+24h] [ebp-45Ch]
  void *Block; // [esp+28h] [ebp-458h]
  int v58; // [esp+2Ch] [ebp-454h]
  int v59; // [esp+30h] [ebp-450h]
  __crt_locale_pointers Locale; // [esp+34h] [ebp-44Ch] BYREF
  int v61; // [esp+3Ch] [ebp-444h]
  char v62; // [esp+40h] [ebp-440h]
  int v63; // [esp+44h] [ebp-43Ch]
  char SrcCh[4]; // [esp+48h] [ebp-438h] BYREF
  int v65; // [esp+4Ch] [ebp-434h]
  unsigned __int16 v66[2]; // [esp+50h] [ebp-430h] BYREF
  int v67; // [esp+54h] [ebp-42Ch]
  int v68; // [esp+58h] [ebp-428h]
  int v69; // [esp+5Ch] [ebp-424h]
  int v70; // [esp+60h] [ebp-420h] BYREF
  int v71; // [esp+64h] [ebp-41Ch]
  int v72; // [esp+68h] [ebp-418h]
  int v73; // [esp+6Ch] [ebp-414h]
  char *v74; // [esp+70h] [ebp-410h]
  int v75; // [esp+74h] [ebp-40Ch]
  int v76; // [esp+78h] [ebp-408h]
  wchar_t DstCh[255]; // [esp+7Ch] [ebp-404h] BYREF
  _BYTE v78[513]; // [esp+27Bh] [ebp-205h] BYREF

  v4 = a4;
  v5 = a2;
  v63 = a1;
  v72 = (int)a4;
  v58 = 0;
  v76 = 0;
  v67 = 0;
  v75 = 0;
  v69 = 0;
  v59 = 0;
  v68 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  if ( a1 == 0 || a2 == nullptr )
    goto LABEL_2;
  v7 = *a2;
  v70 = 0;
  v73 = 0;
  v65 = 0;
  Block = nullptr;
  v71 = v7;
  if ( (_WORD)v7 == 0 )
    goto LABEL_213;
  while ( 1 )
  {
    v55 = ++v5;
    if ( v70 < 0 )
      break;
    if ( (unsigned __int16)(v7 - 32) > 0x58u )
      v8 = 0;
    else
      v8 = byte_10018768[(unsigned __int16)v7] & 0xF;
    v9 = (unsigned __int8)byte_10018788[9 * v8 + v65] >> 4;
    v65 = v9;
    if ( v9 == 8 )
      goto LABEL_2;
    switch ( v9 )
    {
      case 0:
        goto $NORMAL_STATE$29486;
      case 1:
        v75 = -1;
        v56 = 0;
        v59 = 0;
        v67 = 0;
        v69 = 0;
        v76 = 0;
        v68 = 0;
        goto LABEL_209;
      case 2:
        switch ( (unsigned __int16)v7 )
        {
          case ' ':
            v76 |= 2u;
            break;
          case '#':
            v76 |= 0x80u;
            break;
          case '+':
            v76 |= 1u;
            break;
          case '-':
            v76 |= 4u;
            break;
          case '0':
            v76 |= 8u;
            break;
          default:
            goto LABEL_208;
        }
        goto LABEL_209;
      case 3:
        if ( (_WORD)v7 == 42 )
        {
          v10 = *(_DWORD *)v4;
          v4 += 2;
          v72 = (int)v4;
          v67 = v10;
          if ( v10 < 0 )
          {
            v76 |= 4u;
            v67 = -v67;
          }
        }
        else
        {
          v67 = 10 * v67 + (unsigned __int16)v7 - 48;
        }
        goto LABEL_209;
      case 4:
        v75 = 0;
        goto LABEL_209;
      case 5:
        if ( (_WORD)v7 == 42 )
        {
          v11 = *(_DWORD *)v4;
          v4 += 2;
          v72 = (int)v4;
          v75 = v11;
          if ( v11 < 0 )
            v75 = -1;
        }
        else
        {
          v75 = 10 * v75 + (unsigned __int16)v7 - 48;
        }
        goto LABEL_209;
      case 6:
        switch ( (unsigned __int16)v7 )
        {
          case 'I':
            v12 = *v5;
            if ( *v5 == 54 && v5[1] == 52 )
            {
              v5 += 2;
              v76 |= 0x8000u;
            }
            else if ( v12 == 51 && v5[1] == 50 )
            {
              v5 += 2;
              v76 &= ~0x8000u;
            }
            else if ( v12 != 100 && v12 != 105 && v12 != 111 && v12 != 117 && v12 != 120 && v12 != 88 )
            {
              v65 = 0;
$NORMAL_STATE$29486:
              v68 = 1;
              write_char(v63, &v70, v7);
            }
            break;
          case 'h':
            v76 |= 0x20u;
            break;
          case 'l':
            if ( *v5 == 108 )
            {
              ++v5;
              v76 |= 0x1000u;
            }
            else
            {
              v76 |= 0x10u;
            }
            break;
          case 'w':
            v76 |= 0x800u;
            break;
          default:
            break;
        }
        goto LABEL_209;
      case 7:
        if ( (unsigned __int16)v7 <= 0x64u )
        {
          if ( (unsigned __int16)v7 == 100 )
          {
LABEL_112:
            v76 |= 0x40u;
            goto LABEL_113;
          }
          if ( (unsigned __int16)v7 > 0x53u )
          {
            if ( (unsigned __int16)v7 == 88 )
              goto LABEL_134;
            if ( (unsigned __int16)v7 == 90 )
            {
              v18 = *(__int16 **)v4;
              v72 = (int)(v4 + 2);
              if ( v18 == nullptr || (v19 = *((char **)v18 + 1)) == nullptr )
              {
                v74 = Str;
                v20 = strlen(Str);
                goto LABEL_180;
              }
              v20 = *v18;
              v74 = v19;
              if ( (v76 & 0x800) == 0 )
              {
                v68 = 0;
                goto LABEL_180;
              }
              v21 = v20 - (v20 >> 31);
              v68 = 1;
              goto LABEL_179;
            }
            if ( (unsigned __int16)v7 != 97 )
            {
              if ( (unsigned __int16)v7 != 99 )
                goto LABEL_181;
              goto LABEL_87;
            }
          }
          else
          {
            if ( (unsigned __int16)v7 == 83 )
            {
              if ( (v76 & 0x830) == 0 )
                v76 |= 0x20u;
              goto LABEL_72;
            }
            if ( (unsigned __int16)v7 != 65 )
            {
              if ( (unsigned __int16)v7 != 67 )
              {
                if ( (unsigned __int16)v7 != 69 && (unsigned __int16)v7 != 71 )
                  goto LABEL_181;
                goto LABEL_65;
              }
              if ( (v76 & 0x830) == 0 )
                v76 |= 0x20u;
LABEL_87:
              v17 = *v4;
              v68 = 1;
              v72 = (int)(v4 + 2);
              *(_DWORD *)v54 = v17;
              if ( (v76 & 0x20) != 0 )
              {
                SrcCh[0] = v17;
                SrcCh[1] = 0;
                if ( _mbtowc_l(DstCh, SrcCh, *((_DWORD *)Locale.locinfo + 43), &Locale) < 0 )
                  v59 = 1;
              }
              else
              {
                DstCh[0] = v17;
              }
              v74 = (char *)DstCh;
              v73 = 1;
              goto LABEL_181;
            }
LABEL_65:
            v7 += 32;
            v56 = 1;
            v71 = v7;
          }
LABEL_66:
          v76 |= 0x40u;
          v13 = (const char *)DstCh;
          v74 = (char *)DstCh;
          v73 = 512;
          if ( v75 >= 0 )
          {
            if ( v75 != 0 )
            {
              if ( v75 > 512 )
                v75 = 512;
              if ( v75 > 163 )
              {
                v25 = v75 + 349;
                v26 = _malloc_crt(v75 + 349);
                LOBYTE(v7) = v71;
                Block = v26;
                if ( v26 != nullptr )
                {
                  v74 = (char *)v26;
                  v73 = v25;
                  v13 = (const char *)v26;
                }
                else
                {
                  v75 = 163;
                }
              }
            }
            else
            {
              v75 = (_WORD)v7 == 103;
            }
          }
          else
          {
            v75 = 6;
          }
          v27 = *(_DWORD *)v4;
          v28 = v4 + 4;
          v53[0] = v27;
          v53[1] = *((_DWORD *)v28 - 1);
          v50 = v56;
          v49 = v75;
          v72 = (int)v28;
          v48 = (char)v7;
          v47 = v73;
          v29 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_1001EA98[0]);
          v29(v53, v13, v47, v48, v49, v50, &Locale);
          v30 = v76 & 0x80;
          if ( (v76 & 0x80) != 0 && v75 == 0 )
          {
            v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1001EAA4);
            v31(v13, &Locale);
          }
          if ( (_WORD)v71 == 103 && v30 == 0 )
          {
            v32 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1001EAA0[0]);
            v32(v13, &Locale);
          }
          if ( *v13 == 45 )
          {
            v76 |= 0x100u;
            v74 = (char *)++v13;
          }
          v20 = strlen(v13);
          goto LABEL_180;
        }
        if ( (unsigned __int16)v7 > 0x70u )
        {
          if ( (unsigned __int16)v7 != 115 )
          {
            if ( (unsigned __int16)v7 != 117 )
            {
              if ( (unsigned __int16)v7 != 120 )
                goto LABEL_181;
              v58 = 39;
              goto $COMMON_HEX$29635;
            }
LABEL_113:
            v71 = 10;
            goto $COMMON_INT$29628;
          }
LABEL_72:
          v14 = v75;
          if ( v75 == -1 )
            v14 = 0x7FFFFFFF;
          v72 = (int)(v4 + 2);
          v15 = *(char **)v4;
          v74 = v15;
          if ( (v76 & 0x20) != 0 )
          {
            if ( v15 == nullptr )
              v74 = Str;
            v73 = 0;
            for ( i = v74; v73 < v14; ++v73 )
            {
              if ( *i == 0 )
                break;
              if ( _isleadbyte_l((unsigned __int8)*i, &Locale) != 0 )
                ++i;
              ++i;
            }
            goto LABEL_181;
          }
          if ( v15 == nullptr )
            v74 = (char *)off_1001ED34;
          v41 = v74;
          v68 = 1;
          while ( v14 != 0 )
          {
            --v14;
            if ( *(_WORD *)v41 == 0 )
              break;
            v41 += 2;
          }
          v21 = v41 - v74;
LABEL_179:
          v20 = v21 >> 1;
LABEL_180:
          v73 = v20;
          goto LABEL_181;
        }
        if ( (unsigned __int16)v7 == 112 )
        {
          v75 = 8;
LABEL_134:
          v58 = 7;
$COMMON_HEX$29635:
          v71 = 16;
          if ( (v76 & 0x80u) != 0 )
          {
            v66[0] = 48;
            v66[1] = v58 + 81;
            v69 = 2;
          }
          goto $COMMON_INT$29628;
        }
        if ( (unsigned __int16)v7 < 0x65u )
          goto LABEL_181;
        if ( (unsigned __int16)v7 <= 0x67u )
          goto LABEL_66;
        if ( (unsigned __int16)v7 == 105 )
          goto LABEL_112;
        if ( (unsigned __int16)v7 != 110 )
        {
          if ( (unsigned __int16)v7 != 111 )
            goto LABEL_181;
          v71 = 8;
          if ( (v76 & 0x80u) != 0 )
            v76 |= 0x200u;
$COMMON_INT$29628:
          if ( (v76 & 0x8000) != 0 || (v76 & 0x1000) != 0 )
          {
            v23 = v4 + 4;
            v24 = *((_QWORD *)v23 - 1);
          }
          else
          {
            v23 = v4 + 2;
            if ( (v76 & 0x20) != 0 )
            {
              v72 = (int)v23;
              if ( (v76 & 0x40) != 0 )
                LODWORD(v24) = (__int16)*(v23 - 2);
              else
                LODWORD(v24) = *(v23 - 2);
              v24 = (int)v24;
LABEL_151:
              if ( (v76 & 0x40) != 0 && v24 < 0 )
              {
                v24 = -v24;
                v76 |= 0x100u;
              }
              v33 = HIDWORD(v24);
              v34 = v24;
              if ( (v76 & 0x9000) == 0 )
                v33 = 0;
              if ( v75 >= 0 )
              {
                v76 &= ~8u;
                if ( v75 > 512 )
                  v75 = 512;
              }
              else
              {
                v75 = 1;
              }
              if ( (v33 | (unsigned int)v24) == 0 )
                v69 = 0;
              for ( j = v78; ; --j )
              {
                v36 = v75--;
                if ( v36 <= 0 && (v33 | v34) == 0 )
                  break;
                v37 = __PAIR64__(v33, v34) % v71 + 48;
                v38 = __PAIR64__(v33, v34) / v71;
                v33 = HIDWORD(v38);
                v34 = v38;
                if ( v37 > 57 )
                  LOBYTE(v37) = v58 + v37;
                *j = v37;
              }
              v39 = (_BYTE *)(v78 - j);
              v40 = j + 1;
              v73 = (int)v39;
              v74 = v40;
              if ( (v76 & 0x200) != 0 && (v39 == nullptr || *v40 != 48) )
              {
                *--v74 = 48;
                v20 = (int)(v39 + 1);
                goto LABEL_180;
              }
LABEL_181:
              if ( v59 != 0 )
                goto LABEL_206;
              if ( (v76 & 0x40) != 0 )
              {
                if ( (v76 & 0x100) != 0 )
                {
                  v51 = 45;
                  goto LABEL_189;
                }
                if ( (v76 & 1) != 0 )
                {
                  v51 = 43;
                  goto LABEL_189;
                }
                if ( (v76 & 2) != 0 )
                {
                  v51 = 32;
LABEL_189:
                  v66[0] = v51;
                  v69 = 1;
                }
              }
              v42 = v73;
              v43 = v67 - v73 - v69;
              if ( (v76 & 0xC) == 0 )
                write_multi_char(&v70, 0x20u, v67 - v73 - v69, v63);
              v44 = v63;
              write_string(&v70, v66, v63, v69);
              if ( (v76 & 8) != 0 && (v76 & 4) == 0 )
                write_multi_char(&v70, 0x30u, v43, v44);
              if ( v68 != 0 || v42 <= 0 )
              {
                write_string(&v70, (unsigned __int16 *)v74, v44, v42);
              }
              else
              {
                v45 = v74;
                v71 = v42;
                while ( 1 )
                {
                  --v71;
                  v52 = _mbtowc_l(v54, v45, *((_DWORD *)Locale.locinfo + 43), &Locale);
                  if ( v52 <= 0 )
                    break;
                  write_char(v63, &v70, v54[0]);
                  v45 += v52;
                  if ( v71 <= 0 )
                    goto LABEL_203;
                }
                v70 = -1;
              }
LABEL_203:
              if ( v70 >= 0 && (v76 & 4) != 0 )
                write_multi_char(&v70, 0x20u, v43, v63);
              goto LABEL_206;
            }
            LODWORD(v24) = *((_DWORD *)v23 - 1);
            if ( (v76 & 0x40) != 0 )
              v24 = (int)v24;
            else
              HIDWORD(v24) = 0;
          }
          v72 = (int)v23;
          goto LABEL_151;
        }
        v22 = *(_WORD **)v4;
        v72 = (int)(v4 + 2);
        if ( _get_printf_count_output() == 0 )
          goto LABEL_2;
        if ( (v76 & 0x20) != 0 )
          *v22 = v70;
        else
          *(_DWORD *)v22 = v70;
        v59 = 1;
LABEL_206:
        if ( Block != nullptr )
        {
          free(Block);
          Block = nullptr;
        }
LABEL_208:
        v5 = v55;
        v4 = (unsigned __int16 *)v72;
LABEL_209:
        v46 = *v5;
        v71 = v46;
        if ( (_WORD)v46 == 0 )
          goto LABEL_211;
        v7 = v46;
        break;
      default:
        goto LABEL_208;
    }
  }
LABEL_211:
  if ( v65 == 0 || v65 == 7 )
  {
LABEL_213:
    if ( v62 != 0 )
      *(_DWORD *)(v61 + 112) &= ~2u;
    return v70;
  }
  else
  {
LABEL_2:
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v62 != 0 )
      *(_DWORD *)(v61 + 112) &= ~2u;
    return -1;
  }
}

// Address: 0x1000B690
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  _BYTE *v3; // esi
  _BYTE *v4; // edi
  void *result; // eax
  size_t v6; // ecx
  char *v7; // esi
  char *v8; // edi
  size_t v9; // ecx

  v3 = Src;
  v4 = a1;
  if ( a1 > Src && a1 < (char *)Src + Size )
  {
    v7 = (char *)Src + Size - 4;
    v8 = (char *)a1 + Size - 4;
    if ( ((unsigned __int8)v8 & 3) == 0 )
    {
      v9 = Size >> 2;
      if ( Size >> 2 >= 8 )
      {
        while ( v9 != 0 )
        {
          *(_DWORD *)v8 = *(_DWORD *)v7;
          v7 -= 4;
          v8 -= 4;
          --v9;
        }
        switch ( Size & 3 )
        {
          case 0u:
            goto TrailDown0;
          case 1u:
            goto TrailDown1;
          case 2u:
            goto TrailDown2;
          case 3u:
            goto TrailDown3;
        }
      }
      switch ( Size & 3 )
      {
        case 0u:
          goto TrailDown0;
        case 1u:
          goto TrailDown1;
        case 2u:
          goto TrailDown2;
        case 3u:
          goto TrailDown3;
      }
    }
    switch ( Size )
    {
      case 0u:
TrailDown0:
        result = a1;
        break;
      case 1u:
TrailDown1:
        v8[3] = v7[3];
        result = a1;
        break;
      case 2u:
TrailDown2:
        v8[3] = v7[3];
        v8[2] = v7[2];
        result = a1;
        break;
      case 3u:
TrailDown3:
        v8[3] = v7[3];
        v8[2] = v7[2];
        v8[1] = v7[1];
        result = a1;
        break;
      default:
        __asm { jmp     dword ptr ds:(ByteCopyDown+4)[eax*4] }
        return result;
    }
  }
  else if ( Size >= 0x100
         && dword_10020EC4 != 0
         && (v3 = Src, v4 = a1, ((unsigned __int8)a1 & 0xF) == ((unsigned __int8)Src & 0xF)) )
  {
    return _VEC_memcpy(a1, Src, Size);
  }
  else
  {
    if ( ((unsigned __int8)v4 & 3) != 0 )
    {
      if ( Size >= 4 )
        __asm { jmp     dword ptr ds:(CopyUnwindUp+4)[eax*4] }
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 1000B6EC case 0 }
    }
    v6 = Size >> 2;
    switch ( v6 )
    {
      case 0u:
        goto UnwindUp0;
      case 1u:
        goto UnwindUp1;
      case 2u:
        goto UnwindUp2;
      case 3u:
        goto UnwindUp3;
      case 4u:
        goto UnwindUp4;
      case 5u:
        goto UnwindUp5;
      case 6u:
        goto UnwindUp6;
      case 7u:
        *(_DWORD *)&v4[4 * v6 - 28] = *(_DWORD *)&v3[4 * v6 - 28];
UnwindUp6:
        *(_DWORD *)&v4[4 * v6 - 24] = *(_DWORD *)&v3[4 * v6 - 24];
UnwindUp5:
        *(_DWORD *)&v4[4 * v6 - 20] = *(_DWORD *)&v3[4 * v6 - 20];
UnwindUp4:
        *(_DWORD *)&v4[4 * v6 - 16] = *(_DWORD *)&v3[4 * v6 - 16];
UnwindUp3:
        *(_DWORD *)&v4[4 * v6 - 12] = *(_DWORD *)&v3[4 * v6 - 12];
UnwindUp2:
        *(_DWORD *)&v4[4 * v6 - 8] = *(_DWORD *)&v3[4 * v6 - 8];
UnwindUp1:
        *(_DWORD *)&v4[4 * v6 - 4] = *(_DWORD *)&v3[4 * v6 - 4];
        v3 += 4 * v6;
        v4 += 4 * v6;
UnwindUp0:
        switch ( Size & 3 )
        {
          case 0u:
            goto TrailUp0;
          case 1u:
            goto TrailUp1;
          case 2u:
            goto TrailUp2;
          case 3u:
            goto TrailUp3;
        }
      default:
        qmemcpy(v4, v3, 4 * v6);
        v3 += 4 * v6;
        v4 += 4 * v6;
        switch ( Size & 3 )
        {
          case 0u:
TrailUp0:
            result = a1;
            break;
          case 1u:
TrailUp1:
            *v4 = *v3;
            result = a1;
            break;
          case 2u:
TrailUp2:
            *v4 = *v3;
            v4[1] = v3[1];
            result = a1;
            break;
          case 3u:
TrailUp3:
            *v4 = *v3;
            v4[1] = v3[1];
            v4[2] = v3[2];
            result = a1;
            break;
        }
        break;
    }
  }
  return result;
}

// Address: 0x1000B9F5
errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  rsize_t v3; // edi
  errno_t v4; // esi
  const char *v6; // esi
  char *v7; // edx
  char v8; // al

  if ( Destination == nullptr )
    goto LABEL_3;
  v3 = SizeInBytes;
  if ( SizeInBytes == 0 )
    goto LABEL_3;
  v6 = Source;
  if ( Source == nullptr )
  {
    *Destination = 0;
LABEL_3:
    v4 = 22;
    *_errno() = 22;
LABEL_4:
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return v4;
  }
  v7 = Destination;
  do
  {
    v8 = *v6;
    *v7++ = *v6++;
    if ( v8 == 0 )
      break;
    --v3;
  }
  while ( v3 != 0 );
  if ( v3 == 0 )
  {
    *Destination = 0;
    *_errno() = 34;
    v4 = 34;
    goto LABEL_4;
  }
  return 0;
}

// Address: 0x1000BA5D
void sub_1000BA5D()
{
  dword_10020FFC = 0;
}

// Address: 0x1000BA70
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  _BYTE *v3; // esi
  _BYTE *v4; // edi
  void *result; // eax
  size_t v6; // ecx
  char *v7; // esi
  char *v8; // edi
  size_t v9; // ecx

  v3 = Src;
  v4 = a1;
  if ( a1 > Src && a1 < (char *)Src + Size )
  {
    v7 = (char *)Src + Size - 4;
    v8 = (char *)a1 + Size - 4;
    if ( ((unsigned __int8)v8 & 3) == 0 )
    {
      v9 = Size >> 2;
      if ( Size >> 2 >= 8 )
      {
        while ( v9 != 0 )
        {
          *(_DWORD *)v8 = *(_DWORD *)v7;
          v7 -= 4;
          v8 -= 4;
          --v9;
        }
        switch ( Size & 3 )
        {
          case 0u:
            goto TrailDown0_0;
          case 1u:
            goto TrailDown1_0;
          case 2u:
            goto TrailDown2_0;
          case 3u:
            goto TrailDown3_0;
        }
      }
      switch ( Size & 3 )
      {
        case 0u:
          goto TrailDown0_0;
        case 1u:
          goto TrailDown1_0;
        case 2u:
          goto TrailDown2_0;
        case 3u:
          goto TrailDown3_0;
      }
    }
    switch ( Size )
    {
      case 0u:
TrailDown0_0:
        result = a1;
        break;
      case 1u:
TrailDown1_0:
        v8[3] = v7[3];
        result = a1;
        break;
      case 2u:
TrailDown2_0:
        v8[3] = v7[3];
        v8[2] = v7[2];
        result = a1;
        break;
      case 3u:
TrailDown3_0:
        v8[3] = v7[3];
        v8[2] = v7[2];
        v8[1] = v7[1];
        result = a1;
        break;
      default:
        __asm { jmp     dword ptr ds:(ByteCopyDown_0+4)[eax*4] }
        return result;
    }
  }
  else if ( Size >= 0x100
         && dword_10020EC4 != 0
         && (v3 = Src, v4 = a1, ((unsigned __int8)a1 & 0xF) == ((unsigned __int8)Src & 0xF)) )
  {
    return _VEC_memcpy(a1, Src, Size);
  }
  else
  {
    if ( ((unsigned __int8)v4 & 3) != 0 )
    {
      if ( Size >= 4 )
        __asm { jmp     dword ptr ds:(CopyUnwindUp_0+4)[eax*4] }
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 1000BACC case 0 }
    }
    v6 = Size >> 2;
    switch ( v6 )
    {
      case 0u:
        goto UnwindUp0_0;
      case 1u:
        goto UnwindUp1_0;
      case 2u:
        goto UnwindUp2_0;
      case 3u:
        goto UnwindUp3_0;
      case 4u:
        goto UnwindUp4_0;
      case 5u:
        goto UnwindUp5_0;
      case 6u:
        goto UnwindUp6_0;
      case 7u:
        *(_DWORD *)&v4[4 * v6 - 28] = *(_DWORD *)&v3[4 * v6 - 28];
UnwindUp6_0:
        *(_DWORD *)&v4[4 * v6 - 24] = *(_DWORD *)&v3[4 * v6 - 24];
UnwindUp5_0:
        *(_DWORD *)&v4[4 * v6 - 20] = *(_DWORD *)&v3[4 * v6 - 20];
UnwindUp4_0:
        *(_DWORD *)&v4[4 * v6 - 16] = *(_DWORD *)&v3[4 * v6 - 16];
UnwindUp3_0:
        *(_DWORD *)&v4[4 * v6 - 12] = *(_DWORD *)&v3[4 * v6 - 12];
UnwindUp2_0:
        *(_DWORD *)&v4[4 * v6 - 8] = *(_DWORD *)&v3[4 * v6 - 8];
UnwindUp1_0:
        *(_DWORD *)&v4[4 * v6 - 4] = *(_DWORD *)&v3[4 * v6 - 4];
        v3 += 4 * v6;
        v4 += 4 * v6;
UnwindUp0_0:
        switch ( Size & 3 )
        {
          case 0u:
            goto TrailUp0_0;
          case 1u:
            goto TrailUp1_0;
          case 2u:
            goto TrailUp2_0;
          case 3u:
            goto TrailUp3_0;
        }
      default:
        qmemcpy(v4, v3, 4 * v6);
        v3 += 4 * v6;
        v4 += 4 * v6;
        switch ( Size & 3 )
        {
          case 0u:
TrailUp0_0:
            result = a1;
            break;
          case 1u:
TrailUp1_0:
            *v4 = *v3;
            result = a1;
            break;
          case 2u:
TrailUp2_0:
            *v4 = *v3;
            v4[1] = v3[1];
            result = a1;
            break;
          case 3u:
TrailUp3_0:
            *v4 = *v3;
            v4[1] = v3[1];
            v4[2] = v3[2];
            result = a1;
            break;
        }
        break;
    }
  }
  return result;
}

// Address: 0x1000BDD5
int __usercall CPtoLCID@<eax>(int a1@<eax>)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = a1 - 932;
  if ( v1 == 0 )
    return 1041;
  v2 = v1 - 4;
  if ( v2 == 0 )
    return 2052;
  v3 = v2 - 13;
  if ( v3 == 0 )
    return 1042;
  if ( v3 == 1 )
    return 1028;
  return 0;
}

// Address: 0x1000BE04
void __usercall setSBCS(_DWORD *a1@<eax>)
{
  _BYTE *v2; // eax
  int v3; // ecx
  int i; // edi
  _BYTE *v5; // eax
  int j; // esi

  memset(a1 + 7, 0, 0x101u);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  v2 = a1 + 7;
  v3 = &unk_1001E210 - (_UNKNOWN *)a1;
  for ( i = 257; i != 0; --i )
  {
    *v2 = v2[v3];
    ++v2;
  }
  v5 = (char *)a1 + 285;
  for ( j = 256; j != 0; --j )
  {
    *v5 = v5[v3];
    ++v5;
  }
}

// Address: 0x1000BE68
void __usercall setSBUpLow(int a1@<esi>)
{
  unsigned int i; // eax
  BYTE v2; // al
  BYTE *v3; // ebx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  BYTE *v6; // ebx
  int v7; // eax
  WORD v8; // cx
  char v9; // cl
  unsigned int v10; // ecx
  _BYTE *v11; // eax
  char v12; // dl
  int v13; // [esp+8h] [ebp-51Ch]
  struct _cpinfo CPInfo; // [esp+Ch] [ebp-518h] BYREF
  WORD CharType[256]; // [esp+20h] [ebp-504h] BYREF
  WCHAR v16[128]; // [esp+220h] [ebp-304h] BYREF
  WCHAR DestStr[128]; // [esp+320h] [ebp-204h] BYREF
  CHAR MultiByteStr[256]; // [esp+420h] [ebp-104h] BYREF

  if ( GetCPInfo(*(_DWORD *)(a1 + 4), &CPInfo) )
  {
    for ( i = 0; i < 0x100; ++i )
      MultiByteStr[i] = i;
    v2 = CPInfo.LeadByte[0];
    MultiByteStr[0] = 32;
    if ( CPInfo.LeadByte[0] != 0 )
    {
      v3 = &CPInfo.LeadByte[1];
      do
      {
        v4 = v2;
        v5 = *v3;
        if ( v4 <= v5 )
          memset(&MultiByteStr[v4], 32, v5 - v4 + 1);
        v6 = v3 + 1;
        v2 = *v6;
        v3 = v6 + 1;
      }
      while ( v2 != 0 );
    }
    __crtGetStringTypeA(
      nullptr,
      1u,
      MultiByteStr,
      (char *)0x100,
      CharType,
      *(_DWORD *)(a1 + 4),
      *(_DWORD *)(a1 + 12),
      0);
    __crtLCMapStringA(
      nullptr,
      *(_DWORD *)(a1 + 12),
      0x100u,
      MultiByteStr,
      (char *)0x100,
      DestStr,
      (char *)0x100,
      *(_DWORD *)(a1 + 4),
      0);
    __crtLCMapStringA(
      nullptr,
      *(_DWORD *)(a1 + 12),
      0x200u,
      MultiByteStr,
      (char *)0x100,
      v16,
      (char *)0x100,
      *(_DWORD *)(a1 + 4),
      0);
    v7 = 0;
    while ( 1 )
    {
      v8 = CharType[v7];
      if ( (v8 & 1) != 0 )
      {
        *(_BYTE *)(a1 + v7 + 29) |= 0x10u;
        v9 = *((_BYTE *)DestStr + v7);
      }
      else
      {
        if ( (v8 & 2) == 0 )
        {
          *(_BYTE *)(a1 + v7 + 285) = 0;
          goto LABEL_16;
        }
        *(_BYTE *)(a1 + v7 + 29) |= 0x20u;
        v9 = *((_BYTE *)v16 + v7);
      }
      *(_BYTE *)(a1 + v7 + 285) = v9;
LABEL_16:
      if ( (unsigned int)++v7 >= 0x100 )
        return;
    }
  }
  v10 = 0;
  v13 = -97 - (a1 + 285);
  do
  {
    v11 = (_BYTE *)(a1 + v10 + 285);
    if ( (unsigned int)&v11[v13 + 32] <= 0x19 )
    {
      *(_BYTE *)(a1 + v10 + 29) |= 0x10u;
      v12 = v10 + 32;
LABEL_23:
      *v11 = v12;
      goto LABEL_25;
    }
    if ( (unsigned int)&v11[v13] <= 0x19 )
    {
      *(_BYTE *)(a1 + v10 + 29) |= 0x20u;
      v12 = v10 - 32;
      goto LABEL_23;
    }
    *v11 = 0;
LABEL_25:
    ++v10;
  }
  while ( v10 < 0x100 );
}

// Address: 0x1000BFFD
volatile LONG *__updatetmbcinfo()
{
  DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = _getptd();
  if ( (dword_1001E734 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != lpAddend )
    {
      if ( v1 != nullptr && InterlockedDecrement(v1) == 0 && v1 != (volatile LONG *)&unk_1001E210 )
        free((void *)v1);
      v0[26] = (DWORD)lpAddend;
      v1 = lpAddend;
      InterlockedIncrement(lpAddend);
    }
    _unlock(13);
  }
  if ( v1 == nullptr )
    _amsg_exit(32);
  return v1;
}

// Address: 0x1000C0A1
UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, nullptr);
  dword_1001F788 = 0;
  switch ( a1 )
  {
    case -2:
      dword_1001F788 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_1001F788 = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_1001F788 = 1;
LABEL_3:
      if ( v4 != 0 )
        *(_DWORD *)(v3 + 112) &= ~2u;
      return result;
    default:
      break;
  }
  if ( v4 != 0 )
    *(_DWORD *)(v3 + 112) &= ~2u;
  return a1;
}

// Address: 0x1000C11D
int __cdecl _setmbcp_nolock(int a1, _DWORD *a2)
{
  int SystemCP; // edi
  unsigned int i; // eax
  BYTE *v5; // esi
  BYTE v6; // cl
  unsigned int k; // eax
  _BYTE *v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // edi
  _WORD *v11; // eax
  int v12; // ecx
  _WORD *v13; // ecx
  int j; // edx
  _BYTE *v15; // eax
  int m; // ecx
  int v17; // edx
  unsigned int v18; // [esp+Ch] [ebp-20h]
  int v19; // [esp+10h] [ebp-1Ch]
  _BYTE *v20; // [esp+10h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+34h] [ebp+8h]

  SystemCP = getSystemCP(a1);
  v22 = SystemCP;
  if ( SystemCP != 0 )
  {
    v19 = 0;
    for ( i = 0; i < 60; i += 12 )
    {
      if ( dword_1001E640[i] == SystemCP )
      {
        memset(a2 + 7, 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_1001E650 + 48 * v19;
        v20 = v8;
        do
        {
          while ( *v8 != 0 )
          {
            LOBYTE(v9) = v8[1];
            if ( (_BYTE)v9 == 0 )
              break;
            v10 = (unsigned __int8)*v8;
            v9 = (unsigned __int8)v9;
            while ( v10 <= v9 )
            {
              *((_BYTE *)a2 + v10 + 29) |= byte_1001E63C[v18];
              v9 = (unsigned __int8)v8[1];
              ++v10;
            }
            SystemCP = v22;
            v8 += 2;
          }
          ++v18;
          v8 = v20 + 8;
          v20 += 8;
        }
        while ( v18 < 4 );
        a2[1] = SystemCP;
        a2[2] = 1;
        a2[3] = CPtoLCID(SystemCP);
        v11 = a2 + 4;
        v13 = (_WORD *)((char *)&unk_1001E644 + v12);
        for ( j = 6; j != 0; --j )
          *v11++ = *v13++;
LABEL_26:
        setSBUpLow((int)a2);
        return 0;
      }
      ++v19;
    }
    if ( SystemCP == 65000 || SystemCP == 65001 || !IsValidCodePage((unsigned __int16)SystemCP) )
      return -1;
    if ( GetCPInfo(SystemCP, &CPInfo) )
    {
      memset(a2 + 7, 0, 0x101u);
      a2[1] = SystemCP;
      a2[3] = 0;
      if ( CPInfo.MaxCharSize <= 1 )
      {
        a2[2] = 0;
      }
      else
      {
        if ( CPInfo.LeadByte[0] != 0 )
        {
          v5 = &CPInfo.LeadByte[1];
          do
          {
            v6 = *v5;
            if ( *v5 == 0 )
              break;
            for ( k = *(v5 - 1); k <= v6; ++k )
              *((_BYTE *)a2 + k + 29) |= 4u;
            v5 += 2;
          }
          while ( *(v5 - 1) != 0 );
        }
        v15 = (char *)a2 + 30;
        for ( m = 254; m != 0; --m )
          *v15++ |= 8u;
        a2[3] = CPtoLCID(a2[1]);
        a2[2] = v17;
      }
      a2[4] = 0;
      a2[5] = 0;
      a2[6] = 0;
      goto LABEL_26;
    }
    if ( dword_1001F788 == 0 )
      return -1;
  }
  setSBCS(a2);
  return 0;
}

// Address: 0x1000C302
int __cdecl _setmbcp(int CodePage)
{
  DWORD *v1; // edi
  DWORD v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // ebx
  int v5; // eax
  int i; // eax
  int j; // eax
  int k; // eax
  int v10; // [esp+14h] [ebp-20h]
  UINT CodePagea; // [esp+3Ch] [ebp+8h]

  v10 = -1;
  v1 = _getptd();
  __updatetmbcinfo();
  v2 = v1[26];
  CodePagea = getSystemCP(CodePage);
  if ( CodePagea == *(_DWORD *)(v2 + 4) )
    return 0;
  v3 = _malloc_crt(0x220u);
  v4 = v3;
  if ( v3 != nullptr )
  {
    qmemcpy(v3, (const void *)v1[26], 0x220u);
    *v3 = 0;
    v5 = _setmbcp_nolock(CodePagea, v3);
    v10 = v5;
    if ( v5 != 0 )
    {
      if ( v5 == -1 )
      {
        if ( v4 != (_DWORD *)&unk_1001E210 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( InterlockedDecrement((volatile LONG *)v1[26]) == 0 && (_UNKNOWN *)v1[26] != &unk_1001E210 )
        free((void *)v1[26]);
      v1[26] = (DWORD)v4;
      InterlockedIncrement(v4);
      if ( (v1[28] & 2) == 0 && (dword_1001E734 & 1) == 0 )
      {
        _lock(13);
        dword_1001F798 = v4[1];
        dword_1001F79C = v4[2];
        dword_1001F7A0 = v4[3];
        for ( i = 0; i < 5; ++i )
          word_1001F78C[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_1001E430[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_1001E538[k] = *((_BYTE *)v4 + k + 285);
        if ( InterlockedDecrement(lpAddend) == 0 && lpAddend != (volatile LONG *)&unk_1001E210 )
          free((void *)lpAddend);
        lpAddend = v4;
        InterlockedIncrement(v4);
        _unlock(13);
      }
    }
  }
  return v10;
}

// Address: 0x1000C49C
int __initmbctable()
{
  if ( dword_1002100C == 0 )
  {
    _setmbcp(-3);
    dword_1002100C = 1;
  }
  return 0;
}

// Address: 0x1000C4BA
void __cdecl __freetlocinfo(char *Block)
{
  _UNKNOWN **v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  void **v8; // edi
  _DWORD *v9; // eax
  int Blocka; // [esp+14h] [ebp+8h]

  v2 = *((_UNKNOWN ***)Block + 47);
  if ( v2 != nullptr && v2 != &off_1001EE08 )
  {
    v3 = *((_DWORD **)Block + 44);
    if ( v3 != nullptr && *v3 == 0 )
    {
      v4 = *((_DWORD **)Block + 46);
      if ( v4 != nullptr && *v4 == 0 )
      {
        free(*((void **)Block + 46));
        __free_lconv_mon(*((_DWORD *)Block + 47));
      }
      v5 = *((_DWORD **)Block + 45);
      if ( v5 != nullptr && *v5 == 0 )
      {
        free(*((void **)Block + 45));
        __free_lconv_num(*((_DWORD *)Block + 47));
      }
      free(*((void **)Block + 44));
      free(*((void **)Block + 47));
    }
  }
  v6 = *((_DWORD **)Block + 48);
  if ( v6 != nullptr && *v6 == 0 )
  {
    free((void *)(*((_DWORD *)Block + 49) - 254));
    free((void *)(*((_DWORD *)Block + 51) - 128));
    free((void *)(*((_DWORD *)Block + 52) - 128));
    free(*((void **)Block + 48));
  }
  v7 = *((_DWORD *)Block + 53);
  if ( (_UNKNOWN **)v7 != &off_1001ED48 && *(_DWORD *)(v7 + 180) == 0 )
  {
    __free_lc_time(*((_DWORD *)Block + 53));
    free(*((void **)Block + 53));
  }
  v8 = (void **)(Block + 80);
  for ( Blocka = 6; Blocka != 0; --Blocka )
  {
    if ( *(v8 - 2) != &unk_1001E738 && *v8 != nullptr && *(_DWORD *)*v8 == 0 )
      free(*v8);
    if ( *(v8 - 1) != nullptr )
    {
      v9 = v8[1];
      if ( v9 != nullptr && *v9 == 0 )
        free(v8[1]);
    }
    v8 += 4;
  }
  free(Block);
}

// Address: 0x1000C603
LONG __cdecl __addlocaleref(volatile LONG *lpAddend)
{
  volatile LONG **v2; // ebx
  int lpAddenda; // [esp+14h] [ebp+8h]

  InterlockedIncrement(lpAddend);
  if ( *((_DWORD *)lpAddend + 44) != 0 )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 44));
  if ( *((_DWORD *)lpAddend + 46) != 0 )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 46));
  if ( *((_DWORD *)lpAddend + 45) != 0 )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 45));
  if ( *((_DWORD *)lpAddend + 48) != 0 )
    InterlockedIncrement(*((volatile LONG **)lpAddend + 48));
  v2 = (volatile LONG **)(lpAddend + 20);
  for ( lpAddenda = 6; lpAddenda != 0; --lpAddenda )
  {
    if ( *(v2 - 2) != (volatile LONG *)&unk_1001E738 && *v2 != nullptr )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
      InterlockedIncrement(v2[1]);
    v2 += 4;
  }
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}

// Address: 0x1000C692
volatile LONG *__cdecl __removelocaleref(volatile LONG *lpAddend)
{
  volatile LONG **v2; // ebx
  int lpAddenda; // [esp+Ch] [ebp+8h]

  if ( lpAddend != nullptr )
  {
    InterlockedDecrement(lpAddend);
    if ( *((_DWORD *)lpAddend + 44) != 0 )
      InterlockedDecrement(*((volatile LONG **)lpAddend + 44));
    if ( *((_DWORD *)lpAddend + 46) != 0 )
      InterlockedDecrement(*((volatile LONG **)lpAddend + 46));
    if ( *((_DWORD *)lpAddend + 45) != 0 )
      InterlockedDecrement(*((volatile LONG **)lpAddend + 45));
    if ( *((_DWORD *)lpAddend + 48) != 0 )
      InterlockedDecrement(*((volatile LONG **)lpAddend + 48));
    v2 = (volatile LONG **)(lpAddend + 20);
    for ( lpAddenda = 6; lpAddenda != 0; --lpAddenda )
    {
      if ( *(v2 - 2) != (volatile LONG *)&unk_1001E738 && *v2 != nullptr )
        InterlockedDecrement(*v2);
      if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
        InterlockedDecrement(v2[1]);
      v2 += 4;
    }
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
  }
  return lpAddend;
}

// Address: 0x1000C72B
volatile LONG *__usercall _updatetlocinfoEx_nolock@<eax>(volatile LONG **a1@<eax>, volatile LONG *a2@<edi>)
{
  volatile LONG *v2; // esi

  if ( a2 == nullptr || a1 == nullptr )
    return nullptr;
  v2 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    __addlocaleref(a2);
    if ( v2 != nullptr )
    {
      __removelocaleref(v2);
      if ( *v2 == 0 && v2 != (volatile LONG *)&unk_1001E740 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}

// Address: 0x1000C769
DWORD __updatetlocinfo()
{
  DWORD *v0; // esi
  DWORD v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_1001E734 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = _getptd()[27];
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)v0 + 27, (volatile LONG *)off_1001E818);
    _unlock(12);
    v1 = (DWORD)v3;
  }
  if ( v1 == 0 )
    _amsg_exit(32);
  return v1;
}

// Address: 0x1000C7DF
wint_t __cdecl _towlower_l(wint_t C, _locale_t Locale)
{
  wint_t result; // ax
  LCID v3; // edx
  bool v4; // zf
  __crt_locale_pointers v5; // [esp+0h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-Ch]
  char v7; // [esp+Ch] [ebp-8h]
  WCHAR DestStr; // [esp+10h] [ebp-4h] BYREF

  result = -1;
  if ( C != 0xFFFF )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v5, (struct localeinfo_struct *)Locale);
    v3 = *((_DWORD *)v5.locinfo + 5);
    if ( v3 != 0 )
    {
      if ( C >= 0x100u )
      {
        v4 = __crtLCMapStringW((struct localeinfo_struct *)&v5, v3, 0x100u, &C, 1, &DestStr, 1) == 0;
        result = C;
        if ( !v4 )
          result = DestStr;
      }
      else
      {
        v4 = _iswctype_l(C, 1u, &v5) == 0;
        result = C;
        if ( !v4 )
          result = *(unsigned __int8 *)(*((_DWORD *)v5.locinfo + 51) + C);
      }
    }
    else
    {
      result = C;
      if ( (unsigned __int16)(C - 65) <= 0x19u )
        result = C + 32;
    }
    if ( v7 != 0 )
      *(_DWORD *)(v6 + 112) &= ~2u;
  }
  return result;
}

// Address: 0x1000C894
int __cdecl _heap_init(int a1)
{
  int result; // eax

  result = (int)HeapCreate(a1 == 0, 0x1000u, 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    dword_10020FF8 = 1;
    return 1;
  }
  return result;
}

// Address: 0x1000C8C4
BOOL _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi
  BOOL result; // eax

  if ( dword_10020FF8 == 3 )
  {
    v0 = 0;
    if ( dword_10020FE0 > 0 )
    {
      v1 = (LPVOID *)((char *)lpMem + 16);
      do
      {
        VirtualFree(*(v1 - 1), 0, 0x8000u);
        HeapFree(hHeap, 0, *v1);
        v1 += 5;
        ++v0;
      }
      while ( v0 < dword_10020FE0 );
    }
    HeapFree(hHeap, 0, lpMem);
  }
  result = HeapDestroy(hHeap);
  hHeap = nullptr;
  return result;
}

// Address: 0x1000C938
int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_1001F7D0;
  while ( 1 )
  {
    if ( dword_1001E834[2 * v0] == 1 )
    {
      v2 = &lpCriticalSection + 2 * v0;
      *v2 = v1++;
      if ( __crtInitCritSecAndSpinCount(*v2, 0xFA0u) == 0 )
        break;
    }
    if ( ++v0 >= 36 )
      return 1;
  }
  *(&lpCriticalSection + 2 * v0) = nullptr;
  return 0;
}

// Address: 0x1000C983
void _mtdeletelocks()
{
  LPCRITICAL_SECTION *v0; // esi
  LPCRITICAL_SECTION v1; // edi
  LPCRITICAL_SECTION *v2; // esi

  v0 = &lpCriticalSection;
  do
  {
    v1 = *v0;
    if ( *v0 != nullptr && v0[1] != (LPCRITICAL_SECTION)1 )
    {
      DeleteCriticalSection(*v0);
      free(v1);
      *v0 = nullptr;
    }
    v0 += 2;
  }
  while ( (int)v0 < (int)&dword_1001E950 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 != nullptr && v2[1] == (LPCRITICAL_SECTION)1 )
      DeleteCriticalSection(*v2);
    v2 += 2;
  }
  while ( (int)v2 < (int)&dword_1001E950 );
}

// Address: 0x1000C9DA
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}

// Address: 0x1000C9F1
int __cdecl _mtinitlocknum(int a1)
{
  LPCRITICAL_SECTION *v1; // esi
  struct _RTL_CRITICAL_SECTION *v3; // edi
  int v4; // [esp+10h] [ebp-1Ch]

  v4 = 1;
  if ( hHeap == nullptr )
  {
    _FF_MSGBANNER();
    _NMSG_WRITE(30);
    __crtExitProcess(0xFFu);
  }
  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 != nullptr )
    return 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)_malloc_crt(0x18u);
  if ( v3 != nullptr )
  {
    _lock(10);
    if ( *v1 != nullptr )
    {
      free(v3);
    }
    else if ( __crtInitCritSecAndSpinCount(v3, 0xFA0u) != 0 )
    {
      *v1 = v3;
    }
    else
    {
      free(v3);
      *_errno() = 12;
      v4 = 0;
    }
    _unlock(10);
    return v4;
  }
  else
  {
    *_errno() = 12;
    return 0;
  }
}

// Address: 0x1000CAB4
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 == nullptr && _mtinitlocknum(a1) == 0 )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}

// Address: 0x1000CAE7
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 20 * dword_10020FE0; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x1000CB17
_DWORD *__cdecl __sbh_free_block(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int *v3; // esi
  unsigned int v4; // edi
  int v5; // ecx
  char *v6; // ebx
  unsigned int v7; // edx
  _BYTE *v8; // ecx
  unsigned int v9; // ebx
  bool v10; // zf
  _BYTE *v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // ebx
  int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // esi
  _DWORD *v18; // ecx
  int v19; // ebx
  LPVOID *v20; // eax
  _DWORD *v21; // [esp+8h] [ebp-10h]
  int v22; // [esp+Ch] [ebp-Ch]
  int v23; // [esp+10h] [ebp-8h]
  int v24; // [esp+14h] [ebp-4h]
  char *v25; // [esp+24h] [ebp+Ch]
  int *v26; // [esp+24h] [ebp+Ch]
  char v27; // [esp+27h] [ebp+Fh]

  result = (_DWORD *)a1[4];
  v3 = (int *)(a2 - 4);
  v4 = (unsigned int)(a2 - a1[3]) >> 15;
  v21 = &result[129 * v4 + 81];
  v5 = *(_DWORD *)(a2 - 4) - 1;
  v24 = v5;
  if ( (v5 & 1) == 0 )
  {
    v6 = (char *)v3 + v5;
    v22 = *(int *)((char *)v3 + v5);
    v23 = *(_DWORD *)(a2 - 8);
    v25 = (char *)v3 + v5;
    if ( (v22 & 1) == 0 )
    {
      v7 = (v22 >> 4) - 1;
      if ( v7 > 0x3F )
        v7 = 63;
      if ( *((_DWORD *)v6 + 1) == *((_DWORD *)v6 + 2) )
      {
        if ( v7 >= 0x20 )
        {
          v11 = (char *)result + v7 + 4;
          v12 = ~(0x80000000 >> (v7 - 32));
          result[v4 + 49] &= v12;
          v10 = (*v11)-- == 1;
          if ( v10 )
            a1[1] &= v12;
        }
        else
        {
          v8 = (char *)result + v7 + 4;
          v9 = ~(0x80000000 >> v7);
          result[v4 + 17] &= v9;
          v10 = (*v8)-- == 1;
          if ( v10 )
            *a1 &= v9;
        }
        v6 = v25;
      }
      v5 = v22 + v24;
      *(_DWORD *)(*((_DWORD *)v6 + 2) + 4) = *((_DWORD *)v6 + 1);
      *(_DWORD *)(*((_DWORD *)v25 + 1) + 8) = *((_DWORD *)v25 + 2);
      v24 += v22;
    }
    v13 = (v5 >> 4) - 1;
    if ( v13 > 0x3F )
      v13 = 63;
    if ( (v23 & 1) != 0 )
    {
      v14 = (unsigned int)a1;
    }
    else
    {
      v26 = (int *)((char *)v3 - v23);
      v14 = (v23 >> 4) - 1;
      if ( v14 > 0x3F )
        v14 = 63;
      v15 = v23 + v5;
      v13 = (v15 >> 4) - 1;
      v24 = v15;
      if ( v13 > 0x3F )
        v13 = 63;
      if ( v14 != v13 )
      {
        if ( v26[1] == v26[2] )
        {
          if ( v14 >= 0x20 )
          {
            v17 = ~(0x80000000 >> (v14 - 32));
            result[v4 + 49] &= v17;
            v10 = (*((_BYTE *)result + v14 + 4))-- == 1;
            if ( v10 )
              a1[1] &= v17;
          }
          else
          {
            v16 = ~(0x80000000 >> v14);
            result[v4 + 17] &= v16;
            v10 = (*((_BYTE *)result + v14 + 4))-- == 1;
            if ( v10 )
              *a1 &= v16;
          }
        }
        *(_DWORD *)(v26[2] + 4) = v26[1];
        *(_DWORD *)(v26[1] + 8) = v26[2];
      }
      v3 = v26;
    }
    if ( (v23 & 1) != 0 || v14 != v13 )
    {
      v18 = &v21[2 * v13];
      v19 = v18[1];
      v3[2] = (int)v18;
      v3[1] = v19;
      v18[1] = v3;
      *(_DWORD *)(v3[1] + 8) = v3;
      if ( v3[1] == v3[2] )
      {
        v27 = *((_BYTE *)result + v13 + 4);
        *((_BYTE *)result + v13 + 4) = v27 + 1;
        if ( v13 >= 0x20 )
        {
          if ( v27 == 0 )
            a1[1] |= 0x80000000 >> (v13 - 32);
          result[v4 + 49] |= 0x80000000 >> (v13 - 32);
        }
        else
        {
          if ( v27 == 0 )
            *a1 |= 0x80000000 >> v13;
          result[v4 + 17] |= 0x80000000 >> v13;
        }
      }
    }
    *v3 = v24;
    *(int *)((char *)v3 + v24 - 4) = v24;
    result += 129 * v4 + 81;
    v10 = (*v21)-- == 1;
    if ( v10 )
    {
      if ( dword_1001F920 != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_1001F920 + 3) + (dword_10020FF4 << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_1001F920 + 2) |= 0x80000000 >> dword_10020FF4;
        *(_DWORD *)(*((_DWORD *)dword_1001F920 + 4) + 4 * dword_10020FF4 + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_1001F920 + 4) + 67);
        v20 = (LPVOID *)dword_1001F920;
        if ( *(_BYTE *)(*((_DWORD *)dword_1001F920 + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_1001F920 + 1) &= ~1u;
          v20 = (LPVOID *)dword_1001F920;
        }
        if ( v20[2] == (LPVOID)-1 )
        {
          VirtualFree(v20[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_1001F920 + 4));
          memcpy(
            dword_1001F920,
            (char *)dword_1001F920 + 20,
            (size_t)lpMem + 20 * dword_10020FE0 - (_DWORD)dword_1001F920 - 20);
          --dword_10020FE0;
          if ( a1 > dword_1001F920 )
            a1 -= 5;
          dword_10020FEC = (int)lpMem;
        }
      }
      dword_1001F920 = a1;
      dword_10020FF4 = v4;
      return a1;
    }
  }
  return result;
}

// Address: 0x1000CE2D
char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v0 = dword_10020FE0;
  if ( dword_10020FE0 == dword_10020FF0 )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_10020FF0 + 16));
    if ( v1 == nullptr )
      return nullptr;
    dword_10020FF0 += 16;
    v0 = dword_10020FE0;
    lpMem = v1;
  }
  v3 = (char *)lpMem + 20 * v0;
  v4 = HeapAlloc(hHeap, 8u, 0x41C4u);
  *((_DWORD *)v3 + 4) = v4;
  if ( v4 == nullptr )
    return nullptr;
  v5 = VirtualAlloc(nullptr, 0x100000u, 0x2000u, 4u);
  *((_DWORD *)v3 + 3) = v5;
  if ( v5 == nullptr )
  {
    HeapFree(hHeap, 0, *((LPVOID *)v3 + 4));
    return nullptr;
  }
  *((_DWORD *)v3 + 2) = -1;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  ++dword_10020FE0;
  **((_DWORD **)v3 + 4) = -1;
  return v3;
}

// Address: 0x1000CEDD
int __cdecl __sbh_alloc_new_group(_DWORD *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  int i; // edx
  _DWORD *v6; // edi
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int j; // ecx

  v1 = a1[2];
  v2 = a1[4];
  v3 = 0;
  while ( v1 >= 0 )
  {
    v1 *= 2;
    ++v3;
  }
  v4 = 516 * v3 + v2 + 324;
  for ( i = 63; i != 0; --i )
  {
    *(_DWORD *)(v4 + 8) = v4;
    *(_DWORD *)(v4 + 4) = v4;
    v4 += 8;
  }
  v6 = (_DWORD *)(a1[3] + (v3 << 15));
  if ( VirtualAlloc(v6, 0x8000u, 0x1000u, 4u) == nullptr )
    return -1;
  v8 = v6 + 7168;
  if ( v6 < v6 + 7168 )
  {
    v9 = v6 + 4;
    for ( j = 8; j != 0; --j )
    {
      *(v9 - 2) = -1;
      v9[1019] = -1;
      *v9 = v9 + 1023;
      *(v9 - 1) = 4080;
      v9[1] = v9 - 1025;
      v9[1018] = 4080;
      v9 += 1024;
    }
    v8 = v6 + 7168;
  }
  *(_DWORD *)(516 * v3 + v2 + 832) = v6 + 3;
  v6[5] = 516 * v3 + v2 + 828;
  *(_DWORD *)(516 * v3 + v2 + 836) = v8 + 3;
  v8[4] = 516 * v3 + v2 + 828;
  *(_DWORD *)(v2 + 4 * v3 + 68) = 0;
  *(_DWORD *)(v2 + 4 * v3 + 196) = 1;
  if ( (*(_BYTE *)(v2 + 67))++ == 0 )
    a1[1] |= 1u;
  a1[2] &= ~(0x80000000 >> v3);
  return v3;
}

// Address: 0x1000CFE5
int __cdecl __sbh_resize_block(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // edx
  signed int v5; // esi
  int v6; // ecx
  int *v7; // edi
  int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _BYTE *v11; // ecx
  int v12; // ebx
  bool v13; // zf
  unsigned int v14; // ebx
  _BYTE *v15; // ecx
  int v16; // ebx
  unsigned int v17; // edi
  int v18; // ecx
  _DWORD *v19; // eax
  char v20; // cl
  int v21; // edx
  int *v22; // eax
  int v24; // ecx
  int *v25; // ebx
  unsigned int v26; // esi
  unsigned int v27; // esi
  unsigned int v28; // ebx
  _BYTE *v29; // esi
  int v30; // ebx
  _BYTE *v31; // ecx
  unsigned int v32; // ebx
  unsigned int v33; // ecx
  int v34; // edi
  _DWORD *v35; // eax
  char v36; // cl
  int v37; // [esp+Ch] [ebp-Ch]
  int v38; // [esp+10h] [ebp-8h]
  int v39; // [esp+14h] [ebp-4h]
  int v40; // [esp+14h] [ebp-4h]
  int *v41; // [esp+24h] [ebp+Ch]
  char v42; // [esp+27h] [ebp+Fh]
  int v43; // [esp+28h] [ebp+10h]
  unsigned int v44; // [esp+28h] [ebp+10h]
  int v45; // [esp+28h] [ebp+10h]
  char v46; // [esp+2Bh] [ebp+13h]

  v3 = a1[4];
  v4 = (unsigned int)(a2 - a1[3]) >> 15;
  v37 = 516 * v4 + v3 + 324;
  v5 = (a3 + 23) & 0xFFFFFFF0;
  v6 = *(_DWORD *)(a2 - 4) - 1;
  v7 = (int *)(v6 + a2 - 4);
  v8 = *v7;
  v43 = v6;
  v39 = *v7;
  if ( v5 <= v6 )
  {
    if ( v5 < v6 )
    {
      v45 = v6 - v5;
      v24 = v5 + 1;
      *(_DWORD *)(a2 - 4) = v5 + 1;
      v25 = (int *)(a2 + v5 - 4);
      v26 = (v45 >> 4) - 1;
      v41 = v25;
      *(v25 - 1) = v24;
      if ( v26 > 0x3F )
        v26 = 63;
      if ( (v39 & 1) == 0 )
      {
        v27 = (v39 >> 4) - 1;
        if ( v27 > 0x3F )
          v27 = 63;
        if ( v7[1] == v7[2] )
        {
          if ( v27 >= 0x20 )
          {
            v31 = (_BYTE *)(v27 + v3 + 4);
            v32 = ~(0x80000000 >> (v27 - 32));
            *(_DWORD *)(v3 + 4 * v4 + 196) &= v32;
            v13 = (*v31)-- == 1;
            if ( v13 )
              a1[1] &= v32;
          }
          else
          {
            v28 = 0x80000000 >> v27;
            v29 = (_BYTE *)(v27 + v3 + 4);
            v30 = ~v28;
            *(_DWORD *)(v3 + 4 * v4 + 68) &= v30;
            v13 = (*v29)-- == 1;
            if ( v13 )
              *a1 &= v30;
          }
          v25 = v41;
        }
        *(_DWORD *)(v7[2] + 4) = v7[1];
        *(_DWORD *)(v7[1] + 8) = v7[2];
        v45 += v39;
        v26 = (v45 >> 4) - 1;
        if ( v26 > 0x3F )
          v26 = 63;
      }
      v33 = v37 + 8 * v26;
      v34 = *(_DWORD *)(v33 + 4);
      v25[2] = v33;
      v25[1] = v34;
      *(_DWORD *)(v33 + 4) = v25;
      *(_DWORD *)(v25[1] + 8) = v25;
      if ( v25[1] == v25[2] )
      {
        v42 = *(_BYTE *)(v26 + v3 + 4);
        *(_BYTE *)(v26 + v3 + 4) = v42 + 1;
        if ( v26 >= 0x20 )
        {
          if ( v42 == 0 )
            a1[1] |= 0x80000000 >> (v26 - 32);
          v35 = (_DWORD *)(v3 + 4 * v4 + 196);
          v36 = v26 - 32;
        }
        else
        {
          if ( v42 == 0 )
            *a1 |= 0x80000000 >> v26;
          v35 = (_DWORD *)(v3 + 4 * v4 + 68);
          v36 = v26;
        }
        *v35 |= 0x80000000 >> v36;
      }
      *v25 = v45;
      *(int *)((char *)v25 + v45 - 4) = v45;
    }
  }
  else
  {
    if ( (v8 & 1) != 0 || v5 > v6 + v8 )
      return 0;
    v9 = (v39 >> 4) - 1;
    v38 = v9;
    if ( v9 > 0x3F )
    {
      v9 = 63;
      v38 = 63;
    }
    if ( v7[1] == v7[2] )
    {
      if ( v9 >= 0x20 )
      {
        v14 = 0x80000000 >> (v9 - 32);
        v15 = (_BYTE *)(v38 + v3 + 4);
        v16 = ~v14;
        *(_DWORD *)(v3 + 4 * v4 + 196) &= v16;
        v13 = (*v15)-- == 1;
        if ( v13 )
          a1[1] &= v16;
      }
      else
      {
        v10 = 0x80000000 >> v9;
        v11 = (_BYTE *)(v38 + v3 + 4);
        v12 = ~v10;
        *(_DWORD *)(v3 + 4 * v4 + 68) &= v12;
        v13 = (*v11)-- == 1;
        if ( v13 )
          *a1 &= v12;
      }
    }
    *(_DWORD *)(v7[2] + 4) = v7[1];
    *(_DWORD *)(v7[1] + 8) = v7[2];
    v40 = v43 - v5 + v39;
    if ( v40 <= 0 )
    {
      v21 = a2;
    }
    else
    {
      v17 = (v40 >> 4) - 1;
      v18 = a2 + v5 - 4;
      if ( v17 > 0x3F )
        v17 = 63;
      v44 = v37 + 8 * v17;
      *(_DWORD *)(a2 + v5) = *(_DWORD *)(v44 + 4);
      *(_DWORD *)(v18 + 8) = v44;
      *(_DWORD *)(v44 + 4) = v18;
      *(_DWORD *)(*(_DWORD *)(a2 + v5) + 8) = a2 + v5 - 4;
      if ( *(_DWORD *)(a2 + v5) == *(_DWORD *)(a2 + v5 - 4 + 8) )
      {
        v46 = *(_BYTE *)(v17 + v3 + 4);
        *(_BYTE *)(v17 + v3 + 4) = v46 + 1;
        if ( v17 >= 0x20 )
        {
          if ( v46 == 0 )
            a1[1] |= 0x80000000 >> (v17 - 32);
          v19 = (_DWORD *)(v3 + 4 * v4 + 196);
          v20 = v17 - 32;
        }
        else
        {
          if ( v46 == 0 )
            *a1 |= 0x80000000 >> v17;
          v19 = (_DWORD *)(v3 + 4 * v4 + 68);
          v20 = v17;
        }
        *v19 |= 0x80000000 >> v20;
      }
      v21 = a2;
      v22 = (int *)(a2 + v5 - 4);
      *v22 = v40;
      *(int *)((char *)v22 + v40 - 4) = v40;
    }
    *(_DWORD *)(v21 - 4) = v5 + 1;
    *(_DWORD *)(v21 + v5 - 8) = v5 + 1;
  }
  return 1;
}

// Address: 0x1000D2C6
_DWORD *__cdecl __sbh_alloc_block(int a1)
{
  char *v1; // eax
  int v2; // ecx
  unsigned int v3; // esi
  char *i; // ebx
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // edx
  _DWORD *j; // ecx
  int v10; // edi
  int v11; // ecx
  int *v12; // edx
  int v13; // ecx
  int v14; // esi
  unsigned int v15; // ebx
  _BYTE *v16; // edi
  bool v17; // zf
  unsigned int v18; // ebx
  _BYTE *v19; // edi
  int v20; // ebx
  _DWORD *v21; // ecx
  int v22; // edi
  _DWORD *v23; // edx
  int v24; // ecx
  int v25; // [esp+Ch] [ebp-14h]
  int v26; // [esp+Ch] [ebp-14h]
  signed int v27; // [esp+10h] [ebp-10h]
  _DWORD *v28; // [esp+14h] [ebp-Ch]
  unsigned int v29; // [esp+18h] [ebp-8h]
  int v30; // [esp+18h] [ebp-8h]
  int v31; // [esp+1Ch] [ebp-4h]
  char *v32; // [esp+28h] [ebp+8h]
  char v33; // [esp+2Bh] [ebp+Bh]

  v1 = (char *)lpMem + 20 * dword_10020FE0;
  v27 = (a1 + 23) & 0xFFFFFFF0;
  v2 = (v27 >> 4) - 1;
  if ( v2 >= 32 )
  {
    v3 = 0;
    v29 = 0xFFFFFFFF >> ((v27 >> 4) - 33);
  }
  else
  {
    v3 = 0xFFFFFFFF >> v2;
    v29 = -1;
  }
  for ( i = (char *)dword_10020FEC; ; i += 20 )
  {
    v32 = i;
    if ( i >= v1 || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
      break;
  }
  if ( i == v1 )
  {
    for ( i = (char *)lpMem; ; i += 20 )
    {
      v32 = i;
      if ( (unsigned int)i >= dword_10020FEC || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
        break;
    }
    if ( i == (char *)dword_10020FEC )
    {
      while ( i < v1 && *((_DWORD *)i + 2) == 0 )
      {
        i += 20;
        v32 = i;
      }
      if ( i == v1 )
      {
        for ( i = (char *)lpMem; ; i += 20 )
        {
          v32 = i;
          if ( (unsigned int)i >= dword_10020FEC || *((_DWORD *)i + 2) != 0 )
            break;
        }
        if ( i == (char *)dword_10020FEC )
        {
          i = __sbh_alloc_new_region();
          v32 = i;
          if ( i == nullptr )
            return nullptr;
        }
      }
      **((_DWORD **)i + 4) = __sbh_alloc_new_group(i);
      if ( **((_DWORD **)i + 4) == -1 )
        return nullptr;
    }
  }
  dword_10020FEC = (int)i;
  v6 = *((_DWORD **)i + 4);
  v7 = *v6;
  v31 = *v6;
  if ( *v6 == -1 || (v3 & v6[v7 + 17] | v29 & v6[v7 + 49]) == 0 )
  {
    v31 = 0;
    v8 = v6[49];
    for ( j = v6 + 17; (v3 & *j | v29 & v8) == 0; ++j )
    {
      ++v31;
      v8 = j[33];
    }
    v7 = v31;
  }
  v28 = &v6[129 * v7 + 81];
  v10 = 0;
  v11 = v3 & v6[v7 + 17];
  if ( v11 == 0 )
  {
    v11 = v29 & v6[v7 + 49];
    v10 = 32;
  }
  while ( v11 >= 0 )
  {
    v11 *= 2;
    ++v10;
  }
  v12 = (int *)v28[2 * v10 + 1];
  v13 = *v12 - v27;
  v14 = (v13 >> 4) - 1;
  v30 = v13;
  if ( v14 > 63 )
    v14 = 63;
  if ( v14 == v10 )
    goto LABEL_57;
  if ( v12[1] != v12[2] )
    goto LABEL_47;
  if ( v10 >= 32 )
  {
    v18 = 0x80000000 >> (v10 - 32);
    v19 = (char *)v6 + v10 + 4;
    v20 = ~v18;
    v6[v31 + 49] &= v20;
    v17 = (*v19)-- == 1;
    v26 = v20;
    if ( v17 )
    {
      i = v32;
      *((_DWORD *)v32 + 1) &= v26;
      goto LABEL_47;
    }
  }
  else
  {
    v15 = 0x80000000 >> v10;
    v16 = (char *)v6 + v10 + 4;
    v25 = ~v15;
    v6[v31 + 17] &= ~v15;
    v17 = (*v16)-- == 1;
    if ( v17 )
    {
      i = v32;
      *(_DWORD *)v32 &= v25;
      goto LABEL_47;
    }
  }
  i = v32;
LABEL_47:
  *(_DWORD *)(v12[2] + 4) = v12[1];
  *(_DWORD *)(v12[1] + 8) = v12[2];
  if ( v13 != 0 )
  {
    v21 = &v28[2 * v14];
    v22 = v21[1];
    v12[2] = (int)v21;
    v12[1] = v22;
    v21[1] = v12;
    *(_DWORD *)(v12[1] + 8) = v12;
    if ( v12[1] == v12[2] )
    {
      v33 = *((_BYTE *)v6 + v14 + 4);
      *((_BYTE *)v6 + v14 + 4) = v33 + 1;
      if ( v14 >= 32 )
      {
        if ( v33 == 0 )
          *((_DWORD *)i + 1) |= 0x80000000 >> (v14 - 32);
        v6[v31 + 49] |= 0x80000000 >> (v14 - 32);
      }
      else
      {
        if ( v33 == 0 )
          *(_DWORD *)i |= 0x80000000 >> v14;
        v6[v31 + 17] |= 0x80000000 >> v14;
      }
    }
    v13 = v30;
LABEL_57:
    if ( v13 != 0 )
    {
      *v12 = v13;
      *(int *)((char *)v12 + v13 - 4) = v13;
    }
    goto LABEL_60;
  }
  v13 = 0;
LABEL_60:
  v23 = (int *)((char *)v12 + v13);
  *v23 = v27 + 1;
  *(_DWORD *)((char *)v23 + v27 - 4) = v27 + 1;
  v24 = (*v28)++;
  if ( v24 == 0 && i == dword_1001F920 && v31 == dword_10020FF4 )
    dword_1001F920 = nullptr;
  *v6 = v31;
  return v23 + 1;
}

// Address: 0x1000D5AB
void __cdecl _NMSG_WRITE(int a1)
{
  unsigned int v1; // edi
  size_t v2; // eax
  HANDLE StdHandle; // eax
  void *v4; // ebx
  const char **v5; // esi
  size_t v6; // eax
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v8; // [esp+10h] [ebp-4h]

  v1 = 0;
  v8 = 0;
  do
  {
    if ( a1 == dword_1001E950[2 * v1] )
      break;
    v8 = ++v1;
  }
  while ( v1 < 0x17 );
  if ( v1 < 0x17 )
  {
    if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001F404 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v4 = StdHandle;
      if ( StdHandle != nullptr && StdHandle != (HANDLE)-1 )
      {
        v5 = (const char **)&(&off_1001E954)[2 * v1];
        v6 = strlen(*v5);
        WriteFile(v4, *v5, v6, &NumberOfBytesWritten, nullptr);
      }
    }
    else if ( a1 != 252 )
    {
      if ( strcpy_s(Destination, 0x314u, "Runtime Error!\n\nProgram: ") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      byte_1001FA45 = 0;
      if ( GetModuleFileNameA(nullptr, Filename, 0x104u) == 0
        && strcpy_s(Filename, 0x2FBu, "<program name unknown>") != 0 )
      {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strlen(Filename) + 1 > 0x3C )
      {
        v2 = strlen(Filename);
        if ( strncpy_s(&Filename[v2 - 59], (char *)&dword_1001FC3C - &Filename[v2 - 59], "...", 3u) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strcat_s(Destination, 0x314u, "\n\n") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcat_s(Destination, 0x314u, (&off_1001E954)[2 * v8]) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      sub_1001210A(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
}

// Address: 0x1000D756
void _FF_MSGBANNER()
{
  if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001F404 == 1 )
  {
    _NMSG_WRITE(252);
    _NMSG_WRITE(255);
  }
}

// Address: 0x1000D78F
int __cdecl __crtLCMapStringW(
        struct localeinfo_struct *a1,
        LCID Locale,
        DWORD dwMapFlags,
        LPCWSTR lpSrcStr,
        int cchSrc,
        LPWSTR lpDestStr,
        int cchDest)
{
  int v7; // eax
  LPCWSTR v8; // ecx
  int v9; // edx
  int result; // eax
  _BYTE v11[8]; // [esp+0h] [ebp-10h] BYREF
  int v12; // [esp+8h] [ebp-8h]
  char v13; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v11, a1);
  v7 = cchSrc;
  if ( cchSrc > 0 )
  {
    v8 = lpSrcStr;
    v9 = cchSrc;
    while ( 1 )
    {
      --v9;
      if ( *v8 == 0 )
        break;
      ++v8;
      if ( v9 == 0 )
      {
        v9 = -1;
        break;
      }
    }
    v7 = cchSrc - v9 - 1;
  }
  result = LCMapStringW(Locale, dwMapFlags, lpSrcStr, v7, lpDestStr, cchDest);
  if ( v13 != 0 )
    *(_DWORD *)(v12 + 112) &= ~2u;
  return result;
}

// Address: 0x1000D7E6
size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  size_t result; // eax

  for ( result = 0; result < MaxCount; ++Source )
  {
    if ( *Source == 0 )
      break;
    ++result;
  }
  return result;
}

// Address: 0x1000D805
int _ioinit()
{
  unsigned int v0; // eax
  unsigned int i; // ecx
  int v2; // edi
  LPBYTE v3; // ebx
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int j; // edx
  int v7; // esi
  int m; // ebx
  int v9; // esi
  DWORD v10; // eax
  HANDLE StdHandle; // eax
  HANDLE v12; // edi
  DWORD FileType; // eax
  struct _STARTUPINFOA StartupInfo; // [esp+10h] [ebp-64h] BYREF
  int k; // [esp+54h] [ebp-20h]
  HANDLE *v17; // [esp+58h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  GetStartupInfoA(&StartupInfo);
  ms_exc.registration.TryLevel = -2;
  v0 = _calloc_crt(0x20u, 64);
  if ( v0 == 0 )
    return -1;
  dword_10020EE0[0] = v0;
  uNumber = 32;
  for ( i = v0 + 2048; v0 < i; i = dword_10020EE0[0] + 2048 )
  {
    *(_BYTE *)(v0 + 4) = 0;
    *(_DWORD *)v0 = -1;
    *(_BYTE *)(v0 + 5) = 10;
    *(_DWORD *)(v0 + 8) = 0;
    *(_BYTE *)(v0 + 36) = 0;
    *(_BYTE *)(v0 + 37) = 10;
    *(_BYTE *)(v0 + 38) = 10;
    *(_DWORD *)(v0 + 56) = 0;
    *(_BYTE *)(v0 + 52) = 0;
    v0 += 64;
  }
  if ( StartupInfo.cbReserved2 != 0 && StartupInfo.lpReserved2 != nullptr )
  {
    v2 = *(_DWORD *)StartupInfo.lpReserved2;
    v3 = StartupInfo.lpReserved2 + 4;
    v17 = (HANDLE *)&StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4];
    if ( v2 >= 2048 )
      v2 = 2048;
    k = 1;
    while ( (int)uNumber < v2 )
    {
      v4 = _calloc_crt(0x20u, 64);
      if ( v4 == 0 )
      {
        v2 = uNumber;
        break;
      }
      v5 = &dword_10020EE0[k];
      *v5 = v4;
      uNumber += 32;
      for ( j = v4 + 2048; v4 < j; j = *v5 + 2048 )
      {
        *(_BYTE *)(v4 + 4) = 0;
        *(_DWORD *)v4 = -1;
        *(_BYTE *)(v4 + 5) = 10;
        *(_DWORD *)(v4 + 8) = 0;
        *(_BYTE *)(v4 + 36) &= 0x80u;
        *(_BYTE *)(v4 + 37) = 10;
        *(_BYTE *)(v4 + 38) = 10;
        *(_DWORD *)(v4 + 56) = 0;
        *(_BYTE *)(v4 + 52) = 0;
        v4 += 64;
      }
      ++k;
    }
    for ( k = 0; k < v2; ++v17 )
    {
      if ( *v17 != (HANDLE)-1 && *v17 != (HANDLE)-2 && (*v3 & 1) != 0 && ((*v3 & 8) != 0 || GetFileType(*v17) != 0) )
      {
        v7 = dword_10020EE0[k >> 5] + ((k & 0x1F) << 6);
        *(_DWORD *)v7 = *v17;
        *(_BYTE *)(v7 + 4) = *v3;
        if ( __crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(v7 + 12), 0xFA0u) == 0 )
          return -1;
        ++*(_DWORD *)(v7 + 8);
      }
      ++k;
      ++v3;
    }
  }
  for ( m = 0; m < 3; ++m )
  {
    v9 = dword_10020EE0[0] + (m << 6);
    if ( *(_DWORD *)v9 == -1 || *(_DWORD *)v9 == -2 )
    {
      *(_BYTE *)(v9 + 4) = -127;
      if ( m != 0 )
        v10 = -(m != 1) - 11;
      else
        v10 = -10;
      StdHandle = GetStdHandle(v10);
      v12 = StdHandle;
      if ( StdHandle != (HANDLE)-1 && StdHandle != nullptr && (FileType = GetFileType(StdHandle)) != 0 )
      {
        *(_DWORD *)v9 = v12;
        if ( (unsigned __int8)FileType == 2 )
        {
          *(_BYTE *)(v9 + 4) |= 0x40u;
        }
        else if ( (unsigned __int8)FileType == 3 )
        {
          *(_BYTE *)(v9 + 4) |= 8u;
        }
        if ( __crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(v9 + 12), 0xFA0u) == 0 )
          return -1;
        ++*(_DWORD *)(v9 + 8);
      }
      else
      {
        *(_BYTE *)(v9 + 4) |= 0x40u;
        *(_DWORD *)v9 = -2;
      }
    }
    else
    {
      *(_BYTE *)(v9 + 4) |= 0x80u;
    }
  }
  SetHandleCount(uNumber);
  return 0;
}

// Address: 0x1000DA59
void _ioterm()
{
  void **v0; // esi
  char *v1; // edi
  unsigned int i; // eax

  v0 = (void **)dword_10020EE0;
  do
  {
    v1 = (char *)*v0;
    if ( *v0 != nullptr )
    {
      for ( i = (unsigned int)(v1 + 2048); (unsigned int)v1 < i; i = (unsigned int)*v0 + 2048 )
      {
        if ( *((_DWORD *)v1 + 2) != 0 )
          DeleteCriticalSection((LPCRITICAL_SECTION)(v1 + 12));
        v1 += 64;
      }
      free(*v0);
      *v0 = nullptr;
    }
    ++v0;
  }
  while ( (int)v0 < (int)&dword_10020FE0 );
}

// Address: 0x1000DAA7
int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( dword_1002100C == 0 )
    __initmbctable();
  v0 = dword_1001F3F8;
  v1 = 0;
  if ( dword_1001F3F8 != nullptr )
  {
    while ( *v0 != 0 )
    {
      if ( *v0 != 61 )
        ++v1;
      v0 += strlen(v0) + 1;
    }
    v3 = (char **)_calloc_crt(v1 + 1, 4);
    dword_1001F764 = v3;
    if ( v3 != nullptr )
    {
      for ( i = dword_1001F3F8; ; i += v6 )
      {
        if ( *i == 0 )
        {
          free(dword_1001F3F8);
          dword_1001F3F8 = nullptr;
          *v3 = nullptr;
          dword_10021000 = 1;
          return 0;
        }
        v5 = strlen(i);
        v6 = v5 + 1;
        if ( *i != 61 )
          break;
LABEL_16:
        ;
      }
      v7 = (char *)_calloc_crt(v5 + 1, 1);
      *v3 = v7;
      if ( v7 != nullptr )
      {
        if ( strcpy_s(v7, v6, i) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        ++v3;
        goto LABEL_16;
      }
      free(dword_1001F764);
      dword_1001F764 = nullptr;
      return -1;
    }
  }
  return -1;
}

// Address: 0x1000DB85
char **__usercall parse_cmdline@<eax>(char *a1@<edx>, _DWORD *a2@<edi>, char **a3, char *a4, _DWORD *a5)
{
  _DWORD *v5; // ecx
  char *v7; // edx
  char **v8; // ebx
  char v9; // bl
  char *v10; // ecx
  char **v11; // eax
  int v12; // ebx
  unsigned int v13; // ecx
  char v14; // al
  char *v15; // ecx
  char *v16; // ecx
  char **result; // eax
  unsigned int v18; // [esp-4h] [ebp-10h]
  BOOL v19; // [esp+8h] [ebp-4h]
  BOOL v20; // [esp+8h] [ebp-4h]

  v5 = a5;
  *a2 = 0;
  v7 = a4;
  *a5 = 1;
  if ( a3 != nullptr )
  {
    v8 = a3++;
    *v8 = a4;
  }
  v19 = false;
  do
  {
    if ( *a1 == 34 )
    {
      v9 = 34;
      ++a1;
      v19 = !v19;
    }
    else
    {
      ++*a2;
      if ( v7 != nullptr )
      {
        *v7 = *a1;
        a4 = v7 + 1;
      }
      v9 = *a1;
      v18 = (unsigned __int8)*a1++;
      if ( _ismbblead(v18) != 0 )
      {
        ++*a2;
        if ( a4 != nullptr )
        {
          v10 = a4++;
          *v10 = *a1;
        }
        ++a1;
      }
      v7 = a4;
      v5 = a5;
      if ( v9 == 0 )
      {
        --a1;
        goto LABEL_18;
      }
    }
  }
  while ( v19 || v9 != 32 && v9 != 9 );
  if ( v7 != nullptr )
    *(v7 - 1) = 0;
LABEL_18:
  v20 = false;
  while ( *a1 != 0 )
  {
    while ( *a1 == 32 || *a1 == 9 )
      ++a1;
    if ( *a1 == 0 )
      break;
    if ( a3 != nullptr )
    {
      v11 = a3++;
      *v11 = v7;
    }
    ++*v5;
    while ( 1 )
    {
      v12 = 1;
      v13 = 0;
      while ( *a1 == 92 )
      {
        ++a1;
        ++v13;
      }
      if ( *a1 == 34 )
      {
        if ( (v13 & 1) == 0 )
        {
          if ( v20 && a1[1] == 34 )
          {
            ++a1;
          }
          else
          {
            v12 = 0;
            v20 = !v20;
          }
        }
        v13 >>= 1;
      }
      if ( v13 != 0 )
      {
        do
        {
          --v13;
          if ( v7 != nullptr )
            *v7++ = 92;
          ++*a2;
        }
        while ( v13 != 0 );
        a4 = v7;
      }
      v14 = *a1;
      if ( *a1 == 0 || !v20 && (v14 == 32 || v14 == 9) )
        break;
      if ( v12 != 0 )
      {
        if ( v7 != nullptr )
        {
          if ( _ismbblead(v14) != 0 )
          {
            v15 = a4++;
            *v15 = *a1++;
            ++*a2;
          }
          v16 = a4++;
          *v16 = *a1;
        }
        else if ( _ismbblead(v14) != 0 )
        {
          ++a1;
          ++*a2;
        }
        ++*a2;
        v7 = a4;
      }
      ++a1;
    }
    if ( v7 != nullptr )
    {
      *v7++ = 0;
      a4 = v7;
    }
    ++*a2;
    v5 = a5;
  }
  result = a3;
  if ( a3 != nullptr )
    *a3 = nullptr;
  ++*v5;
  return result;
}

// Address: 0x1000DD1F
int _setargv()
{
  int v0; // edi
  size_t v1; // eax
  char **v2; // esi
  size_t v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( dword_1002100C == 0 )
    __initmbctable();
  byte_1001FD44 = 0;
  GetModuleFileNameA(nullptr, byte_1001FC40, 0x104u);
  dword_1001F774 = (int)byte_1001FC40;
  if ( dword_10021014 == 0 || (v6 = (char *)dword_10021014, *(_BYTE *)dword_10021014 == 0) )
    v6 = byte_1001FC40;
  parse_cmdline(v6, &v4, nullptr, nullptr, &v5);
  if ( v5 >= 0x3FFFFFFF )
    return -1;
  if ( v4 == -1 )
    return -1;
  v0 = v5;
  v1 = 4 * v5 + v4;
  if ( v1 < v4 )
    return -1;
  v2 = (char **)_malloc_crt(v1);
  if ( v2 == nullptr )
    return -1;
  parse_cmdline(v6, &v4, v2, (char *)&v2[v0], &v5);
  dword_1001F758 = v5 - 1;
  dword_1001F75C = (int)v2;
  return 0;
}

// Address: 0x1000DDDA
CHAR *__crtGetEnvironmentStringsA()
{
  int v0; // eax
  CHAR *v1; // ebx
  WCHAR *EnvironmentStringsW; // edi
  WCHAR *i; // eax
  size_t v5; // eax
  CHAR *v6; // eax
  LPCH EnvironmentStrings; // eax
  CHAR *v8; // esi
  void *v9; // eax
  void *v10; // edi
  int cchWideChar; // [esp+Ch] [ebp-Ch]
  int cbMultiByte; // [esp+10h] [ebp-8h]
  size_t cbMultiBytea; // [esp+10h] [ebp-8h]
  CHAR *Block; // [esp+14h] [ebp-4h]

  v0 = dword_1001FD48;
  v1 = nullptr;
  EnvironmentStringsW = nullptr;
  if ( dword_1001FD48 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      dword_1001FD48 = 1;
      goto LABEL_8;
    }
    if ( GetLastError() == 120 )
    {
      v0 = 2;
      dword_1001FD48 = 2;
    }
    else
    {
      v0 = dword_1001FD48;
    }
  }
  if ( v0 == 1 )
  {
LABEL_8:
    if ( EnvironmentStringsW == nullptr )
    {
      EnvironmentStringsW = GetEnvironmentStringsW();
      if ( EnvironmentStringsW == nullptr )
        return nullptr;
    }
    for ( i = EnvironmentStringsW; *i != 0; ++i )
    {
      do
        ++i;
      while ( *i != 0 );
    }
    cchWideChar = i - EnvironmentStringsW + 1;
    v5 = WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, nullptr, 0, nullptr, nullptr);
    cbMultiByte = v5;
    if ( v5 != 0 )
    {
      v6 = (CHAR *)_malloc_crt(v5);
      Block = v6;
      if ( v6 != nullptr )
      {
        if ( WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, v6, cbMultiByte, nullptr, nullptr) == 0 )
        {
          free(Block);
          Block = nullptr;
        }
        v1 = Block;
      }
    }
    FreeEnvironmentStringsW(EnvironmentStringsW);
    return v1;
  }
  if ( v0 != 2 && v0 != 0 )
    return nullptr;
  EnvironmentStrings = GetEnvironmentStrings();
  v8 = EnvironmentStrings;
  if ( EnvironmentStrings == nullptr )
    return nullptr;
  for ( ; *EnvironmentStrings != 0; ++EnvironmentStrings )
  {
    do
      ++EnvironmentStrings;
    while ( *EnvironmentStrings != 0 );
  }
  cbMultiBytea = EnvironmentStrings - v8 + 1;
  v9 = _malloc_crt(cbMultiBytea);
  v10 = v9;
  if ( v9 == nullptr )
  {
    FreeEnvironmentStringsA(v8);
    return nullptr;
  }
  memcpy_0(v9, v8, cbMultiBytea);
  FreeEnvironmentStringsA(v8);
  return (CHAR *)v10;
}

// Address: 0x1000DF11
void *sub_1000DF11()
{
  return &unk_1001BBFC;
}

// Address: 0x1000DF37
void __cdecl sub_1000DF37()
{
  ;
}

// Address: 0x1000DF5D
void nullsub_1()
{
  ;
}

// Address: 0x1000DF5E
int __cdecl _XcptFilter(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // esi
  int *v4; // edx
  int *v5; // ecx
  int *v6; // eax
  void (__cdecl *v7)(int); // ebx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // [esp+4h] [ebp-8h]

  result = (int)_getptd_noexit();
  v3 = (_DWORD *)result;
  if ( result != 0 )
  {
    v4 = *(int **)(result + 92);
    v5 = v4;
    do
    {
      if ( *v5 == a1 )
        break;
      v5 += 3;
    }
    while ( v5 < &v4[3 * dword_1001EA54] );
    if ( v5 < &v4[3 * dword_1001EA54] && *v5 == a1 )
      v6 = v5;
    else
      v6 = nullptr;
    if ( v6 != nullptr && (v7 = (void (__cdecl *)(int))v6[2]) != nullptr )
    {
      if ( v7 == (void (__cdecl *)(int))5 )
      {
        v6[2] = 0;
        return 1;
      }
      else
      {
        if ( v7 != (void (__cdecl *)(int))1 )
        {
          v13 = v3[24];
          v3[24] = a2;
          v8 = v6[1];
          if ( v8 == 8 )
          {
            v9 = dword_1001EA48;
            if ( dword_1001EA48 < dword_1001EA48 + dword_1001EA4C )
            {
              v10 = 12 * dword_1001EA48;
              do
              {
                *(_DWORD *)(v10 + v3[23] + 8) = 0;
                ++v9;
                v10 += 12;
              }
              while ( v9 < dword_1001EA48 + dword_1001EA4C );
            }
            v11 = *v6;
            v12 = v3[25];
            switch ( v11 )
            {
              case -1073741682:
                v3[25] = 131;
                break;
              case -1073741680:
                v3[25] = 129;
                break;
              case -1073741679:
                v3[25] = 132;
                break;
              case -1073741677:
                v3[25] = 133;
                break;
              case -1073741683:
                v3[25] = 130;
                break;
              case -1073741681:
                v3[25] = 134;
                break;
              case -1073741678:
                v3[25] = 138;
                break;
              default:
                break;
            }
            v7(8);
            v3[25] = v12;
          }
          else
          {
            v6[2] = 0;
            v7(v8);
          }
          v3[24] = v13;
        }
        return -1;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// Address: 0x1000E0BE
int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}

// Address: 0x1000E0DE
void __cdecl __security_init_cookie()
{
  DWORD v0; // esi
  DWORD v1; // esi
  DWORD v2; // esi
  DWORD v3; // esi
  uintptr_t v4; // esi
  LARGE_INTEGER PerformanceCount; // [esp+8h] [ebp-10h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [esp+10h] [ebp-8h] BYREF

  SystemTimeAsFileTime.dwLowDateTime = 0;
  SystemTimeAsFileTime.dwHighDateTime = 0;
  if ( __security_cookie == -1153374642 || (__security_cookie & 0xFFFF0000) == 0 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v0 = SystemTimeAsFileTime.dwLowDateTime ^ SystemTimeAsFileTime.dwHighDateTime;
    v1 = GetCurrentProcessId() ^ v0;
    v2 = GetCurrentThreadId() ^ v1;
    v3 = GetTickCount() ^ v2;
    QueryPerformanceCounter(&PerformanceCount);
    v4 = PerformanceCount.LowPart ^ PerformanceCount.HighPart ^ v3;
    if ( v4 == -1153374642 )
    {
      v4 = -1153374641;
    }
    else if ( (v4 & 0xFFFF0000) == 0 )
    {
      v4 |= v4 << 16;
    }
    __security_cookie = v4;
    dword_1001E074 = ~v4;
  }
  else
  {
    dword_1001E074 = ~__security_cookie;
  }
}

// Address: 0x1000E174
std::exception *__thiscall sub_1000E174(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000E192
void __thiscall sub_1000E192(void *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_10007B8D(this);
}

// Address: 0x1000E19D
_DWORD *__thiscall sub_1000E19D(_DWORD *this, char a2)
{
  *this = &std::bad_exception::`vftable';
  sub_10007B8D(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000E1C4
BOOL __cdecl __TypeMatch(int a1, int a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // ecx
  BOOL result; // eax

  v3 = *(_DWORD *)(a1 + 4);
  result = true;
  if ( v3 != 0 && *(_BYTE *)(v3 + 8) != 0 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    if ( v3 != v4 && strcmp((const char *)(v3 + 8), (const char *)(v4 + 8)) != 0 )
      return false;
    if ( (*(_BYTE *)a2 & 2) != 0 && (*(_BYTE *)a1 & 8) == 0
      || (*a3 & 1) != 0 && (*(_BYTE *)a1 & 1) == 0
      || (*a3 & 2) != 0 && (*(_BYTE *)a1 & 2) == 0 )
    {
      return false;
    }
  }
  return result;
}

// Address: 0x1000E223
int __cdecl __FrameUnwindFilter(int **a1)
{
  int v1; // eax
  DWORD *v2; // eax

  v1 = **a1;
  if ( v1 == -532459699 )
  {
    if ( (int)_getptd()[36] > 0 )
    {
      v2 = _getptd();
      --v2[36];
    }
  }
  else if ( v1 == -529697949 )
  {
    _getptd()[36] = 0;
    terminate();
  }
  return 0;
}

// Address: 0x1000E26C
DWORD *__cdecl __FrameUnwindToState(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  DWORD *v5; // eax
  int v6; // eax
  int *v7; // ecx
  DWORD *result; // eax

  if ( *(int *)(a3 + 4) > 128 )
    v4 = *(_DWORD *)(a1 + 8);
  else
    v4 = *(char *)(a1 + 8);
  v5 = _getptd();
  ++v5[36];
  while ( v4 != a4 )
  {
    if ( v4 <= -1 || v4 >= *(_DWORD *)(a3 + 4) )
      _inconsistency();
    v6 = 8 * v4;
    v7 = (int *)(8 * v4 + *(_DWORD *)(a3 + 8));
    v4 = *v7;
    if ( v7[1] != 0 )
    {
      *(_DWORD *)(a1 + 8) = v4;
      _CallSettingFrame(*(_DWORD *)(*(_DWORD *)(a3 + 8) + v6 + 4), a1, 259);
    }
  }
  result = _getptd();
  if ( (int)result[36] > 0 )
  {
    result = _getptd() + 36;
    --*result;
  }
  if ( v4 != a4 )
    _inconsistency();
  *(_DWORD *)(a1 + 8) = v4;
  return result;
}

// Address: 0x1000E34D
int __usercall ExFilterRethrow@<eax>(_DWORD **a1@<eax>)
{
  _DWORD *v1; // eax
  int v2; // ecx

  v1 = *a1;
  if ( *v1 != -529697949 )
    return 0;
  if ( v1[4] != 3 )
    return 0;
  v2 = v1[5];
  if ( v2 != 429065504 && v2 != 429065505 && v2 != 429065506 )
    return 0;
  if ( v1[7] != 0 )
    return 0;
  _getptd()[131] = 1;
  return 1;
}

// Address: 0x1000E392
void __cdecl __DestructExceptionObject(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax

  if ( a1 != nullptr && *a1 == -529697949 )
  {
    v1 = a1[7];
    if ( v1 != 0 )
    {
      v2 = *(_DWORD *)(v1 + 4);
      if ( v2 != 0 )
        sub_10008899(a1[6], v2);
    }
  }
}

// Address: 0x1000E3E7
int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2;
  if ( (int)a2[1] >= 0 )
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]);
  return result;
}

// Address: 0x1000E410
char __usercall IsInExceptionSpec@<al>(_DWORD *a1@<edi>, struct EHExceptionRecord *a2)
{
  CatchableTypeArray *pCatchableTypeArray; // eax
  int nCatchableTypes; // ebx
  int *arrayOfCatchableTypes; // esi
  int v6; // [esp+4h] [ebp-8h]
  char i; // [esp+Bh] [ebp-1h]

  if ( a1 == nullptr )
    _inconsistency();
  v6 = 0;
  for ( i = 0; v6 < *a1; ++v6 )
  {
    pCatchableTypeArray = a2->params.pThrowInfo->pCatchableTypeArray;
    nCatchableTypes = pCatchableTypeArray->nCatchableTypes;
    arrayOfCatchableTypes = (int *)pCatchableTypeArray->arrayOfCatchableTypes;
    if ( pCatchableTypeArray->nCatchableTypes > 0 )
    {
      while ( !__TypeMatch(16 * v6 + a1[1], *arrayOfCatchableTypes, &a2->params.pThrowInfo->attributes) )
      {
        --nCatchableTypes;
        ++arrayOfCatchableTypes;
        if ( nCatchableTypes <= 0 )
          goto LABEL_9;
      }
      i = 1;
    }
LABEL_9:
    ;
  }
  return i;
}

// Address: 0x1000E48B
void __cdecl __noreturn CallUnexpected()
{
  if ( _getptd()[37] != 0 )
    _inconsistency();
  unexpected();
}

// Address: 0x1000E4D4
void *__cdecl CallCatchBlock(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        const struct _s_FuncInfo *a4,
        void *a5,
        unsigned int a6)
{
  void *v6; // ecx
  void *v7; // ebx
  unsigned int magicNumber; // eax
  int v10; // [esp+10h] [ebp-3Ch] BYREF
  int v11; // [esp+18h] [ebp-34h]
  DWORD v12; // [esp+1Ch] [ebp-30h]
  DWORD v13; // [esp+20h] [ebp-2Ch]
  _DWORD *v14; // [esp+24h] [ebp-28h]
  __ehstate_t state; // [esp+28h] [ebp-24h]
  void *v16; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v7 = v6;
  v16 = v6;
  v11 = 0;
  state = a2[-1].state;
  v14 = _CreateFrameInfo(&v10, (int)a1->params.pExceptionObject);
  v13 = _getptd()[34];
  v12 = _getptd()[35];
  _getptd()[34] = (DWORD)a1;
  _getptd()[35] = (DWORD)a3;
  ms_exc.registration.TryLevel = 1;
  v16 = _CallCatchBlock2(a2, a4, v7, (int)a5, a6);
  ms_exc.registration.TryLevel = -2;
  a2[-1].state = state;
  _FindAndUnlinkFrame((int)v14);
  _getptd()[34] = v13;
  _getptd()[35] = v12;
  if ( a1->ExceptionCode == -529697949 && a1->NumberParameters == 3 )
  {
    magicNumber = a1->params.magicNumber;
    if ( (magicNumber == 429065504 || magicNumber == 429065505 || magicNumber == 429065506)
      && v11 == 0
      && v16 != nullptr
      && _IsExceptionObjectToBeDestroyed((int)a1->params.pExceptionObject) != 0 )
    {
      __DestructExceptionObject(a1);
    }
  }
  return v16;
}

// Address: 0x1000E670
int __cdecl __BuildCatchObjectHelper(int a1, int *a2, int *a3, int a4)
{
  int v4; // ecx
  int v5; // ecx
  int *v6; // esi
  int v7; // eax
  int v8; // eax
  const void *v9; // eax
  int v11; // [esp-8h] [ebp-34h]
  size_t v12; // [esp-4h] [ebp-30h]
  int v13; // [esp+10h] [ebp-1Ch]

  v13 = 0;
  v4 = a3[1];
  if ( v4 != 0 && *(_BYTE *)(v4 + 8) != 0 )
  {
    v5 = a3[2];
    if ( v5 != 0 || *a3 < 0 )
    {
      v6 = a2;
      if ( *a3 >= 0 )
        v6 = (int *)((char *)a2 + v5 + 12);
      if ( (*a3 & 8) != 0 )
      {
        if ( unknown_libname_2(*(_DWORD *)(a1 + 24)) != 0 && unknown_libname_2(v6) != 0 )
        {
          v7 = *(_DWORD *)(a1 + 24);
          *v6 = v7;
          v8 = __AdjustPointer(v7, (_DWORD *)(a4 + 8));
LABEL_11:
          *v6 = v8;
          return v13;
        }
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 24);
        if ( (*(_BYTE *)a4 & 1) != 0 )
        {
          if ( unknown_libname_2(v11) != 0 && unknown_libname_2(v6) != 0 )
          {
            memcpy(v6, *(const void **)(a1 + 24), *(_DWORD *)(a4 + 20));
            if ( *(_DWORD *)(a4 + 20) != 4 || *v6 == 0 )
              return v13;
            v8 = __AdjustPointer(*v6, (_DWORD *)(a4 + 8));
            goto LABEL_11;
          }
        }
        else if ( *(_DWORD *)(a4 + 24) != 0 )
        {
          if ( unknown_libname_2(v11) != 0 && unknown_libname_2(v6) != 0 && unknown_libname_2(*(_DWORD *)(a4 + 24)) != 0 )
            return ((*(_BYTE *)a4 & 4) != 0) + 1;
        }
        else if ( unknown_libname_2(v11) != 0 && unknown_libname_2(v6) != 0 )
        {
          v12 = *(_DWORD *)(a4 + 20);
          v9 = (const void *)__AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
          memcpy(v6, v9, v12);
          return v13;
        }
      }
      _inconsistency();
    }
  }
  return 0;
}

// Address: 0x1000E7EF
int __cdecl __BuildCatchObject(int a1, int *a2, int *a3, int a4)
{
  int *v4; // ebx
  int v5; // eax
  int result; // eax

  if ( *a3 >= 0 )
    v4 = (int *)((char *)a2 + a3[2] + 12);
  else
    v4 = a2;
  v5 = __BuildCatchObjectHelper(a1, a2, a3, a4) - 1;
  if ( v5 != 0 )
  {
    result = v5 - 1;
    if ( result == 0 )
    {
      __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
      return sub_10008899((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_10008899((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x1000E881
void __usercall CatchIt(
        int *a1@<ebx>,
        int *a2@<edi>,
        struct EHRegistrationNode *a3@<esi>,
        EXCEPTION_RECORD *ExceptionRecord,
        struct _CONTEXT *a5,
        struct _CONTEXT *a6,
        struct _s_FuncInfo *a7,
        const struct _s_FuncInfo *a8,
        struct _s_HandlerType *a9,
        struct _s_CatchableType *TargetFrame)
{
  void (__stdcall *v10)(void *, struct EHRegistrationNode *); // eax

  if ( a8 != nullptr )
    __BuildCatchObject((int)ExceptionRecord, (int *)a3, a1, (int)a8);
  if ( TargetFrame != nullptr )
    _UnwindNestedFrames((struct _EXCEPTION_REGISTRATION_RECORD **)a1, TargetFrame, ExceptionRecord);
  else
    _UnwindNestedFrames((struct _EXCEPTION_REGISTRATION_RECORD **)a1, a3, ExceptionRecord);
  __FrameUnwindToState((int)a3, (int)a6, (int)a7, *a2);
  a3->state = a2[1] + 1;
  v10 = (void (__stdcall *)(void *, struct EHRegistrationNode *))CallCatchBlock(
                                                                   (struct EHExceptionRecord *)ExceptionRecord,
                                                                   a3,
                                                                   a5,
                                                                   a7,
                                                                   a9,
                                                                   0x100u);
  if ( v10 != nullptr )
    _JumpToContinuation(v10, a3);
}

// Address: 0x1000E8EF
void __cdecl FindHandlerForForeignException(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        struct _CONTEXT *a4,
        struct _s_FuncInfo *a5,
        int a6,
        struct _s_HandlerType *a7,
        struct _s_CatchableType *a8)
{
  DWORD *v8; // edi
  int v9; // esi
  TryBlockMapEntry *i; // edi
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // [esp+4h] [ebp-8h] BYREF
  unsigned int v14; // [esp+8h] [ebp-4h] BYREF

  if ( a1->ExceptionCode != -2147483645
    && (_getptd()[32] == 0
     || (PVOID)*(v8 = _getptd() + 32) == _encoded_null()
     || a1->ExceptionCode == -532459699
     || _CallSETranslator(a1, a2, a3, a4, a5, (int)a7, (struct EHRegistrationNode *)a8) == 0) )
  {
    if ( a5->nTryBlocks == 0 )
      _inconsistency();
    v9 = a6;
    for ( i = _GetRangeOfTrysToCheck(a5, (int)a7, a6, &v14, &v13); v14 < v13; ++i )
    {
      if ( v9 >= i->tryLow && v9 <= i->tryHigh )
      {
        v11 = (int)i->pHandlerArray + 16 * i->nCatches;
        v12 = *(_DWORD *)(v11 - 12);
        if ( (v12 == 0 || *(_BYTE *)(v12 + 8) == 0) && (*(_BYTE *)(v11 - 16) & 0x40) == 0 )
        {
          CatchIt((int *)(v11 - 16), &i->tryLow, a2, (EXCEPTION_RECORD *)a1, a3, a4, a5, nullptr, a7, a8);
          v9 = a6;
        }
      }
      ++v14;
    }
  }
}

// Address: 0x1000E9E3
void __cdecl FindHandler(
        struct EHExceptionRecord *ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        struct _CONTEXT *a4,
        struct _s_FuncInfo *a5,
        unsigned __int8 a6,
        struct _s_HandlerType *a7,
        struct _s_CatchableType *TargetFrame)
{
  struct _s_FuncInfo *v8; // ebx
  __ehstate_t maxState; // eax
  __ehstate_t state; // ecx
  struct EHExceptionRecord *v11; // esi
  int arrayOfCatchableTypes; // ebx
  unsigned int magicNumber; // eax
  unsigned int v14; // eax
  int *v15; // edi
  int v16; // esi
  int v17; // ebx
  unsigned int v18; // eax
  struct _s_FuncInfo *v19; // edi
  TryBlockMapEntry *v20; // edi
  CatchableTypeArray *pCatchableTypeArray; // eax
  ESTypeList *pESTypeList; // edi
  ThrowInfo *pThrowInfo; // [esp-4h] [ebp-3Ch]
  _BYTE pExceptionObject[12]; // [esp+Ch] [ebp-2Ch] BYREF
  struct _s_FuncInfo *v25; // [esp+18h] [ebp-20h]
  unsigned int v26; // [esp+1Ch] [ebp-1Ch] BYREF
  int nCatches; // [esp+20h] [ebp-18h]
  int nCatchableTypes; // [esp+24h] [ebp-14h]
  unsigned int v29; // [esp+28h] [ebp-10h] BYREF
  int *pHandlerArray; // [esp+2Ch] [ebp-Ch]
  int v31; // [esp+30h] [ebp-8h]
  char v32; // [esp+37h] [ebp-1h]

  v8 = a5;
  maxState = a5->maxState;
  v32 = 0;
  if ( maxState > 128 )
    state = a2->state;
  else
    state = SLOBYTE(a2->state);
  v31 = state;
  if ( state < -1 || state >= maxState )
    _inconsistency();
  v11 = ExceptionRecord;
  if ( ExceptionRecord->ExceptionCode != -529697949 )
  {
LABEL_61:
    if ( v8->nTryBlocks != 0 )
    {
      if ( a6 != 0 )
        goto LABEL_28;
      FindHandlerForForeignException(v11, a2, a3, a4, v8, v31, a7, TargetFrame);
    }
    goto LABEL_64;
  }
  arrayOfCatchableTypes = 429065504;
  if ( ExceptionRecord->NumberParameters == 3 )
  {
    magicNumber = ExceptionRecord->params.magicNumber;
    if ( (magicNumber == 429065504 || magicNumber == 429065505 || magicNumber == 429065506)
      && ExceptionRecord->params.pThrowInfo == nullptr )
    {
      if ( _getptd()[34] == 0 )
        return;
      v11 = (struct EHExceptionRecord *)_getptd()[34];
      ExceptionRecord = v11;
      a3 = (struct _CONTEXT *)_getptd()[35];
      if ( unknown_libname_2(v11) == 0 )
        _inconsistency();
      if ( v11->ExceptionCode == -529697949 && v11->NumberParameters == 3 )
      {
        v14 = v11->params.magicNumber;
        if ( (v14 == 429065504 || v14 == 429065505 || v14 == 429065506) && v11->params.pThrowInfo == nullptr )
          _inconsistency();
      }
      if ( _getptd()[37] != 0 )
      {
        v15 = (int *)_getptd()[37];
        v16 = 0;
        _getptd()[37] = 0;
        if ( IsInExceptionSpec(v15, ExceptionRecord) == 0 )
        {
          v17 = 0;
          if ( *v15 > 0 )
          {
            do
            {
              if ( type_info::operator==(
                     *(const char **)(v17 + v15[1] + 4),
                     (int)&std::bad_exception `RTTI Type Descriptor') )
              {
                __DestructExceptionObject(ExceptionRecord);
                sub_1000E174((std::exception *)pExceptionObject, "bad exception");
                _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_exception_std__);
              }
              ++v16;
              v17 += 16;
            }
            while ( v16 < *v15 );
          }
LABEL_28:
          terminate();
        }
        v11 = ExceptionRecord;
      }
    }
  }
  if ( v11->ExceptionCode != -529697949
    || v11->NumberParameters != 3
    || (v18 = v11->params.magicNumber) != 429065504 && v18 != 429065505 && v18 != 429065506 )
  {
    v8 = a5;
    goto LABEL_61;
  }
  v19 = a5;
  if ( a5->nTryBlocks != 0 )
  {
    v20 = _GetRangeOfTrysToCheck(a5, (int)a7, v31, &v29, &v26);
    while ( v29 < v26 )
    {
      if ( v20->tryLow <= v31 && v31 <= v20->tryHigh )
      {
        pHandlerArray = (int *)v20->pHandlerArray;
        nCatches = v20->nCatches;
        if ( nCatches > 0 )
        {
          while ( 1 )
          {
            pCatchableTypeArray = v11->params.pThrowInfo->pCatchableTypeArray;
            arrayOfCatchableTypes = (int)pCatchableTypeArray->arrayOfCatchableTypes;
            nCatchableTypes = pCatchableTypeArray->nCatchableTypes;
            if ( nCatchableTypes > 0 )
              break;
LABEL_45:
            --nCatches;
            pHandlerArray += 4;
            if ( nCatches <= 0 )
              goto $NextTryBlock$27933;
          }
          while ( 1 )
          {
            pThrowInfo = v11->params.pThrowInfo;
            v25 = *(struct _s_FuncInfo **)arrayOfCatchableTypes;
            if ( __TypeMatch((int)pHandlerArray, (int)v25, pThrowInfo) )
              break;
            --nCatchableTypes;
            arrayOfCatchableTypes += 4;
            if ( nCatchableTypes <= 0 )
              goto LABEL_45;
          }
          arrayOfCatchableTypes = (int)pHandlerArray;
          v32 = 1;
          CatchIt(pHandlerArray, &v20->tryLow, a2, (EXCEPTION_RECORD *)v11, a3, a4, a5, v25, a7, TargetFrame);
          v11 = ExceptionRecord;
        }
      }
$NextTryBlock$27933:
      ++v29;
      ++v20;
    }
    v19 = a5;
  }
  if ( a6 != 0 )
    __DestructExceptionObject(v11);
  if ( v32 == 0 && (*(_DWORD *)v19 & 0x1FFFFFFFu) >= 0x19930521 )
  {
    pESTypeList = v19->pESTypeList;
    if ( pESTypeList != nullptr && IsInExceptionSpec(pESTypeList, v11) == 0 )
    {
      _getptd();
      _getptd();
      _getptd()[34] = (DWORD)v11;
      _getptd()[35] = (DWORD)a3;
      if ( TargetFrame != nullptr )
        _UnwindNestedFrames(
          (struct _EXCEPTION_REGISTRATION_RECORD **)arrayOfCatchableTypes,
          TargetFrame,
          (PEXCEPTION_RECORD)v11);
      else
        _UnwindNestedFrames((struct _EXCEPTION_REGISTRATION_RECORD **)arrayOfCatchableTypes, a2, (PEXCEPTION_RECORD)v11);
      __FrameUnwindToState((int)a2, (int)a4, (int)a5, -1);
      CallUnexpected();
    }
  }
LABEL_64:
  if ( _getptd()[37] != 0 )
    _inconsistency();
}

// Address: 0x1000ED2A
std::exception *__thiscall sub_1000ED2A(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000ED47
int __cdecl __InternalCxxFrameHandler(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        struct _CONTEXT *a4,
        struct _s_FuncInfo *a5,
        struct _s_HandlerType *a6,
        struct _s_CatchableType *a7,
        unsigned __int8 a8)
{
  int (__cdecl *pForwardCompat)(); // edx

  if ( _getptd()[131] != 0
    || a1->ExceptionCode == -529697949
    || a1->ExceptionCode == -2147483610
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) < 0x19930522
    || (a5->EHFlags & 1) == 0 )
  {
    if ( (a1->ExceptionFlags & 0x66) != 0 )
    {
      if ( a5->maxState != 0 && a6 == nullptr )
        __FrameUnwindToState((int)a2, (int)a4, (int)a5, -1);
    }
    else if ( a5->nTryBlocks != 0 || (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930521 && a5->pESTypeList != nullptr )
    {
      if ( a1->ExceptionCode == -529697949 && a1->NumberParameters >= 3 && a1->params.magicNumber > 0x19930522 )
      {
        pForwardCompat = a1->params.pThrowInfo->pForwardCompat;
        if ( pForwardCompat != nullptr )
          return ((int (__cdecl *)(struct EHExceptionRecord *, struct EHRegistrationNode *, struct _CONTEXT *, struct _CONTEXT *, struct _s_FuncInfo *, struct _s_HandlerType *, struct _s_CatchableType *, _DWORD))pForwardCompat)(
                   a1,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8);
      }
      FindHandler(a1, a2, a3, a4, a5, a8, a6, a7);
    }
  }
  return 1;
}

// Address: 0x1000EE2D
void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[30];
  if ( v0 != nullptr )
    v0();
  abort();
}

// Address: 0x1000EE66
void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[31];
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1000EE79
void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer((void *)dword_1001FD4C);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1000EEB1
PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = _encode_pointer(terminate);
  dword_1001FD4C = (int)result;
  return result;
}

// Address: 0x1000EED0
int __stdcall _CallSettingFrame(int a1, int a2, int a3)
{
  void (*v3)(void); // eax
  int v4; // ecx

  v3 = (void (*)(void))_NLG_Notify1(a3);
  v3();
  v4 = a3;
  if ( a3 == 256 )
    v4 = 2;
  return _NLG_Notify1(v4);
}

// Address: 0x1000EF1C
void __cdecl fastzero_I(_OWORD *a1, unsigned int a2)
{
  unsigned int v3; // ecx

  v3 = a2 >> 7;
  do
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1 += 8;
    --v3;
  }
  while ( v3 != 0 );
}

// Address: 0x1000EF73
int __cdecl _VEC_memzero(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // edi
  int v5; // edx
  unsigned int v6; // [esp+4h] [ebp-Ch]

  result = a1;
  v4 = a1 % 16;
  if ( a1 % 16 != 0 )
  {
    memset((void *)a1, 0, 16 - v4);
    _VEC_memzero((void *)(16 - v4 + a1), 0, a3 - (16 - v4));
    return a1;
  }
  else
  {
    v5 = a3 & 0x7F;
    v6 = v5;
    if ( a3 != v5 )
    {
      fastzero_I((_OWORD *)a1, a3 - v5);
      result = a1;
      v5 = v6;
    }
    if ( v5 != 0 )
    {
      memset((void *)(a3 + result - v5), 0, v6);
      return a1;
    }
  }
  return result;
}

// Address: 0x1000F002
int has_osfxsr_set()
{
  return 1;
}

// Address: 0x1000F052
BOOL _get_sse2_info()
{
  unsigned int v0; // kr00_4
  unsigned int v1; // kr04_4
  int v13; // [esp+18h] [ebp-4h]

  v13 = 0;
  v0 = __readeflags();
  __writeeflags(v0 ^ 0x200000);
  v1 = __readeflags();
  if ( v1 != v0 )
  {
    __writeeflags(v0);
    _EAX = 0;
    __asm { cpuid }
    _EAX = 1;
    __asm { cpuid }
    v13 = _EDX;
  }
  return (v13 & 0x4000000) != 0 && has_osfxsr_set() != 0;
}

// Address: 0x1000F0B4
int sub_1000F0B4()
{
  dword_10020EC4 = _get_sse2_info();
  return 0;
}

// Address: 0x1000F0C4
int __cdecl _local_unwind4(_DWORD *a1, int a2, unsigned int a3)
{
  int result; // eax
  unsigned int v4; // esi
  int v5; // esi
  int v6; // ebx
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-8h] [ebp-28h]
  int (__cdecl *v8)(int, int, int, int); // [esp-4h] [ebp-24h]

  v8 = _unwind_handler4;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  while ( 1 )
  {
    result = a2;
    v4 = *(_DWORD *)(a2 + 12);
    if ( v4 == -2 || a3 != -2 && v4 <= a3 )
      break;
    v5 = 3 * v4;
    v6 = (*a1 ^ *(_DWORD *)(a2 + 8)) + 4 * v5 + 16;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)((*a1 ^ *(_DWORD *)(a2 + 8)) + 4 * v5 + 0x10);
    if ( *(_DWORD *)(v6 + 4) == 0 )
    {
      _NLG_Notify(257);
      _NLG_Call(1, ExceptionList, v8);
    }
  }
  return result;
}

// Address: 0x1000F154
int __cdecl _unwind_handler4(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // eax

  result = 1;
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    _local_unwind4(*(_DWORD **)(a2 + 20), *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 12));
    *a4 = a2;
    return 3;
  }
  return result;
}

// Address: 0x1000F19A
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x1000F1B6
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x1000F1CD
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x1000F1E6
void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &ReturnPoint, nullptr, nullptr);
}

// Address: 0x1000F200
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x1000F220
BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  return *(_WORD *)a1 == 23117 && *(_DWORD *)(v2 = a1 + *(_DWORD *)(a1 + 60)) == 17744 && *(_WORD *)(v2 + 24) == 267;
}

// Address: 0x1000F260
int __cdecl _FindPESection(int a1, unsigned int a2)
{
  int v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // edx
  int result; // eax
  unsigned int v6; // ecx

  v2 = a1 + *(_DWORD *)(a1 + 60);
  v3 = *(unsigned __int16 *)(v2 + 6);
  v4 = 0;
  result = *(unsigned __int16 *)(v2 + 20) + v2 + 24;
  if ( *(_WORD *)(v2 + 6) == 0 )
    return 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(result + 12);
    if ( a2 >= v6 && a2 < v6 + *(_DWORD *)(result + 8) )
      break;
    ++v4;
    result += 40;
    if ( v4 >= v3 )
      return 0;
  }
  return result;
}

// Address: 0x1000F2B0
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000)
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x1000F36D
void *__cdecl realloc(void *Block, size_t Size)
{
  size_t v3; // esi
  char *v4; // eax
  size_t v5; // eax
  size_t v6; // eax
  void *v7; // edi
  int *v8; // eax
  int *v9; // esi
  DWORD v10; // eax
  int *v11; // eax
  int *v12; // esi
  DWORD LastError; // eax
  char *v14; // [esp+10h] [ebp-20h]
  void *v15; // [esp+14h] [ebp-1Ch]

  if ( Block == nullptr )
    return malloc(Size);
  v3 = Size;
  if ( Size != 0 )
  {
    if ( dword_10020FF8 == 3 )
    {
      while ( 1 )
      {
        v15 = nullptr;
        if ( v3 > 0xFFFFFFE0 )
          break;
        _lock(4);
        v4 = __sbh_find_block((int)Block);
        v14 = v4;
        if ( v4 != nullptr )
        {
          if ( v3 <= dword_10020FE8 )
          {
            if ( __sbh_resize_block(v4, (int)Block, v3) != 0 )
            {
              v15 = Block;
            }
            else
            {
              v15 = __sbh_alloc_block(v3);
              if ( v15 != nullptr )
              {
                v5 = *((_DWORD *)Block - 1) - 1;
                if ( v5 >= v3 )
                  v5 = v3;
                memcpy_0(v15, Block, v5);
                v14 = __sbh_find_block((int)Block);
                __sbh_free_block(v14, (int)Block);
              }
            }
          }
          if ( v15 == nullptr )
          {
            if ( v3 == 0 )
              v3 = 1;
            v3 = (v3 + 15) & 0xFFFFFFF0;
            v15 = HeapAlloc(hHeap, 0, v3);
            if ( v15 != nullptr )
            {
              v6 = *((_DWORD *)Block - 1) - 1;
              if ( v6 >= v3 )
                v6 = v3;
              memcpy_0(v15, Block, v6);
              __sbh_free_block(v14, (int)Block);
            }
          }
        }
        _unlock(4);
        if ( v14 != nullptr )
        {
          v7 = v15;
        }
        else
        {
          if ( v3 == 0 )
            v3 = 1;
          v3 = (v3 + 15) & 0xFFFFFFF0;
          v7 = HeapReAlloc(hHeap, 0, Block, v3);
        }
        if ( v7 != nullptr )
          return v7;
        if ( dword_1001FC3C == 0 )
        {
          v11 = _errno();
          if ( v14 == nullptr )
            goto LABEL_45;
          *v11 = 12;
          return v7;
        }
        if ( _callnewh(v3) == 0 )
        {
          v8 = _errno();
          if ( v14 != nullptr )
            goto LABEL_41;
          goto LABEL_31;
        }
      }
    }
    else
    {
      while ( v3 <= 0xFFFFFFE0 )
      {
        if ( v3 == 0 )
          v3 = 1;
        v7 = HeapReAlloc(hHeap, 0, Block, v3);
        if ( v7 != nullptr )
          return v7;
        if ( dword_1001FC3C == 0 )
        {
          v11 = _errno();
LABEL_45:
          v12 = v11;
          LastError = GetLastError();
          *v12 = _get_errno_from_oserr(LastError);
          return v7;
        }
        if ( _callnewh(v3) == 0 )
        {
          v8 = _errno();
LABEL_31:
          v9 = v8;
          v10 = GetLastError();
          *v9 = _get_errno_from_oserr(v10);
          return nullptr;
        }
      }
    }
    _callnewh(v3);
    v8 = _errno();
LABEL_41:
    *v8 = 12;
  }
  else
  {
    free(Block);
  }
  return nullptr;
}

// Address: 0x1000F588
char __cdecl _forcdecpt_l(char *a1, struct localeinfo_struct *a2)
{
  char *v2; // esi
  bool i; // zf
  char result; // al
  char *v5; // esi
  char v6; // cl
  char v7; // cl
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  char v10; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, a2);
  v2 = a1;
  for ( i = tolower(*a1) == 101; !i; i = isdigit((unsigned __int8)*v2) == 0 )
    ++v2;
  if ( tolower(*v2) == 120 )
    v2 += 2;
  result = *v2;
  *v2 = ***(_BYTE ***)(v8 + 188);
  v5 = v2 + 1;
  do
  {
    v6 = *v5;
    *v5 = result;
    result = v6;
    v7 = *v5++;
  }
  while ( v7 != 0 );
  if ( v10 != 0 )
  {
    result = v9;
    *(_DWORD *)(v9 + 112) &= ~2u;
  }
  return result;
}

// Address: 0x1000F5FB
char *__cdecl _cropzeros_l(char *a1, struct localeinfo_struct *a2)
{
  char *v2; // eax
  char i; // cl
  char v4; // cl
  char *result; // eax
  char v6; // cl
  char *v7; // edx
  char v8; // cl
  int v9; // [esp+4h] [ebp-10h] BYREF
  char *v10; // [esp+Ch] [ebp-8h]
  char v11; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, a2);
  v2 = a1;
  for ( i = *a1; *v2 != 0; i = *++v2 )
  {
    if ( i == ***(_BYTE ***)(v9 + 188) )
      break;
  }
  v4 = *v2;
  result = v2 + 1;
  if ( v4 != 0 )
  {
    while ( 1 )
    {
      v6 = *result;
      if ( *result == 0 || v6 == 101 || v6 == 69 )
        break;
      ++result;
    }
    v7 = result;
    do
      --result;
    while ( *result == 48 );
    if ( *result == ***(_BYTE ***)(v9 + 188) )
      --result;
    do
    {
      v8 = *v7;
      ++result;
      ++v7;
      *result = v8;
    }
    while ( v8 != 0 );
  }
  if ( v11 != 0 )
  {
    result = v10;
    *((_DWORD *)v10 + 28) &= ~2u;
  }
  return result;
}

// Address: 0x1000F67D
BOOL __cdecl _positive(double *a1)
{
  return *a1 >= 0.0;
}

// Address: 0x1000F699
_QWORD *__cdecl _fassign_l(int a1, _QWORD *a2, int a3, struct localeinfo_struct *a4)
{
  _QWORD *result; // eax
  __int64 v5; // [esp+0h] [ebp-8h] BYREF

  if ( a1 != 0 )
  {
    sub_1001277D((int)&v5, a3, a4);
    result = a2;
    *a2 = v5;
  }
  else
  {
    sub_10012825((int)&a1, a3, a4);
    result = a2;
    *(_DWORD *)a2 = a1;
  }
  return result;
}

// Address: 0x1000F6DB
_QWORD *__cdecl _fassign(int a1, _QWORD *a2, int a3)
{
  return _fassign_l(a1, a2, a3, nullptr);
}

// Address: 0x1000F6F5
const char *__usercall _shift@<eax>(const char *result@<eax>, int a2@<edi>)
{
  const char *v2; // esi
  size_t v3; // eax

  v2 = result;
  if ( a2 != 0 )
  {
    v3 = strlen(result);
    return (const char *)memcpy((void *)&v2[a2], v2, v3 + 1);
  }
  return result;
}

// Address: 0x1000F714
char __cdecl _forcdecpt(char *a1)
{
  return _forcdecpt_l(a1, nullptr);
}

// Address: 0x1000F727
char *__cdecl _cropzeros(char *a1)
{
  return _cropzeros_l(a1, nullptr);
}

// Address: 0x1000F73A
int __usercall _cftoe2_l@<eax>(
        _BYTE *a1@<eax>,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        struct localeinfo_struct *a7)
{
  int *v8; // eax
  int v9; // edi
  int v11; // eax
  _BYTE *v12; // esi
  char *v13; // esi
  rsize_t v14; // ebx
  _BYTE *v15; // ecx
  _BYTE *v16; // esi
  int v17; // eax
  _BYTE *v18; // esi
  _BYTE *v19; // esi
  int v20; // [esp-4h] [ebp-20h]
  int v21; // [esp+Ch] [ebp-10h] BYREF
  int v22; // [esp+14h] [ebp-8h]
  char v23; // [esp+18h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v21, a7);
  if ( a1 == nullptr || a2 == 0 )
  {
    v8 = _errno();
    v20 = 22;
LABEL_3:
    v9 = v20;
    *v8 = v20;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v23 != 0 )
      *(_DWORD *)(v22 + 112) &= ~2u;
    return v9;
  }
  if ( a3 <= 0 )
    v11 = 0;
  else
    v11 = a3;
  if ( a2 <= v11 + 9 )
  {
    v8 = _errno();
    v20 = 34;
    goto LABEL_3;
  }
  if ( a6 != 0 )
    _shift(&a1[*(_DWORD *)a5 == 45], a3 > 0);
  v12 = a1;
  if ( *(_DWORD *)a5 == 45 )
  {
    *a1 = 45;
    v12 = a1 + 1;
  }
  if ( a3 > 0 )
  {
    *v12 = v12[1];
    *++v12 = ***(_BYTE ***)(v21 + 188);
  }
  v13 = &v12[a3 + (a6 == 0)];
  if ( a2 == -1 )
    v14 = -1;
  else
    v14 = a2 + a1 - v13;
  if ( strcpy_s(v13, v14, "e+000") != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v15 = v13 + 2;
  if ( a4 != 0 )
    *v13 = 69;
  v16 = v13 + 1;
  if ( **(_BYTE **)(a5 + 12) != 48 )
  {
    v17 = *(_DWORD *)(a5 + 4) - 1;
    if ( v17 < 0 )
    {
      v17 = 1 - *(_DWORD *)(a5 + 4);
      *v16 = 45;
    }
    v18 = v16 + 1;
    if ( v17 >= 100 )
    {
      *v18 += v17 / 100;
      v17 %= 100;
    }
    v19 = v18 + 1;
    if ( v17 >= 10 )
    {
      *v19 += v17 / 10;
      LOBYTE(v17) = v17 % 10;
    }
    v19[1] += v17;
  }
  if ( (byte_1001FDDC & 1) != 0 && *v15 == 48 )
    memcpy(v15, v15 + 1, 3u);
  if ( v23 != 0 )
    *(_DWORD *)(v22 + 112) &= ~2u;
  return 0;
}

// Address: 0x1000F8A9
int __cdecl _cftoe_l(_DWORD *a1, _BYTE *a2, unsigned int a3, int a4, int a5, struct localeinfo_struct *a6)
{
  int result; // eax
  int v7; // eax
  int v8[4]; // [esp+Ch] [ebp-2Ch] BYREF
  int v9[6]; // [esp+1Ch] [ebp-1Ch] BYREF

  _fltout2(*a1, a1[1], (int)v8, (int)v9, 0x16u);
  if ( a2 != nullptr && a3 != 0 )
  {
    if ( a3 == -1 )
      v7 = -1;
    else
      v7 = a3 - (v8[0] == 45) - (a4 > 0);
    result = _fptostr(&a2[(v8[0] == 45) + (a4 > 0)], v7, a4 + 1, (int)v8);
    if ( result != 0 )
      *a2 = 0;
    else
      return _cftoe2_l(a2, a3, a4, a5, (int)v8, 0, a6);
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  return result;
}

// Address: 0x1000F979
int __cdecl _cftoe(_DWORD *a1, _BYTE *a2, unsigned int a3, int a4, int a5)
{
  return _cftoe_l(a1, a2, a3, a4, a5, nullptr);
}

// Address: 0x1000F999
int __cdecl _cftoa_l(_DWORD *a1, _BYTE *a2, unsigned int a3, int Size, int a5, struct localeinfo_struct *a6)
{
  _BYTE *v6; // esi
  int *v7; // eax
  int v8; // esi
  int result; // eax
  unsigned int v10; // eax
  bool v11; // zf
  _BYTE *v12; // esi
  char *v13; // eax
  _BYTE *v14; // esi
  _BYTE *v15; // esi
  _BYTE *v16; // esi
  _BYTE *v17; // eax
  _BYTE *v18; // esi
  int v19; // eax
  unsigned __int16 v20; // ax
  unsigned int v21; // ecx
  _BYTE *i; // eax
  _BYTE *v23; // esi
  __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE *v26; // esi
  _BYTE *v27; // edi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // [esp-Ch] [ebp-38h]
  int v34; // [esp-4h] [ebp-30h]
  int v35; // [esp+8h] [ebp-24h] BYREF
  int v36; // [esp+10h] [ebp-1Ch]
  char v37; // [esp+14h] [ebp-18h]
  int v38; // [esp+18h] [ebp-14h]
  int v39; // [esp+1Ch] [ebp-10h]
  unsigned __int64 v40; // [esp+20h] [ebp-Ch]
  int v41; // [esp+28h] [ebp-4h]
  _BYTE *v42; // [esp+38h] [ebp+Ch]

  v38 = 1023;
  v41 = 48;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v35, a6);
  if ( Size < 0 )
    Size = 0;
  v6 = a2;
  if ( a2 == nullptr || a3 == 0 )
  {
    v7 = _errno();
    v34 = 22;
LABEL_5:
    v8 = v34;
    *v7 = v34;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v37 != 0 )
      *(_DWORD *)(v36 + 112) &= ~2u;
    return v8;
  }
  *a2 = 0;
  if ( a3 <= Size + 11 )
  {
    v7 = _errno();
    v34 = 34;
    goto LABEL_5;
  }
  LODWORD(v40) = *a1;
  if ( ((a1[1] >> 20) & 0x7FF) == 0x7FF )
  {
    v10 = a3;
    if ( a3 != -1 )
      v10 = a3 - 2;
    result = _cftoe(a1, a2 + 2, v10, Size, 0);
    if ( result != 0 )
    {
      v11 = v37 == 0;
      *a2 = 0;
      if ( !v11 )
        *(_DWORD *)(v36 + 112) &= ~2u;
      return result;
    }
    if ( a2[2] == 45 )
    {
      *a2 = 45;
      v6 = a2 + 1;
    }
    *v6 = 48;
    v12 = v6 + 1;
    *v12 = a5 == 0 ? 120 : 88;
    v13 = strrchr(v12 + 1, 101);
    if ( v13 != nullptr )
    {
      *v13 = a5 == 0 ? 112 : 80;
      v13[3] = 0;
    }
  }
  else
  {
    if ( (a1[1] & 0x80000000) != 0 )
    {
      *a2 = 45;
      v6 = a2 + 1;
    }
    *v6 = 48;
    v14 = v6 + 1;
    *v14 = a5 == 0 ? 120 : 88;
    v15 = v14 + 1;
    if ( (a1[1] & 0x7FF00000) != 0 )
    {
      *v15 = 49;
      v16 = v15 + 1;
    }
    else
    {
      *v15 = 48;
      v16 = v15 + 1;
      if ( (a1[1] & 0xFFFFF | *a1) != 0 )
        v38 = 1022;
      else
        v38 = 0;
    }
    v17 = v16;
    v18 = v16 + 1;
    v42 = v17;
    if ( Size != 0 )
      *v17 = ***(_BYTE ***)(v35 + 188);
    else
      *v17 = 0;
    v19 = *a1;
    HIDWORD(v40) = a1[1] & 0xFFFFF;
    if ( HIDWORD(v40) != 0 || v19 != 0 )
    {
      v40 = 0xF000000000000LL;
      do
      {
        if ( Size <= 0 )
          break;
        v20 = ((v40 & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) >> v41) + 48;
        if ( v20 > 0x39u )
          LOBYTE(v20) = (a5 != 0 ? 7 : 39) + v20;
        v21 = HIDWORD(v40);
        v41 -= 4;
        *v18++ = v20;
        --Size;
        v40 = __PAIR64__(v21, v40) >> 4;
      }
      while ( (v41 & 0x8000u) == 0 );
      if ( (v41 & 0x8000u) == 0 && (unsigned __int16)((v40 & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) >> v41) > 8u )
      {
        for ( i = v18 - 1; *i == 102 || *i == 70; --i )
          *i = 48;
        if ( i == v42 )
        {
          ++*(i - 1);
        }
        else if ( *i == 57 )
        {
          *i = a5 != 0 ? 65 : 97;
        }
        else
        {
          ++*i;
        }
      }
    }
    if ( Size > 0 )
    {
      memset(v18, 48, Size);
      v18 += Size;
    }
    if ( *v42 == 0 )
      v18 = v42;
    *v18 = a5 == 0 ? 112 : 80;
    v23 = v18 + 1;
    HIDWORD(v25) = 0;
    v24 = ((*(_QWORD *)a1 >> 52) & 0x7FFLL) - (unsigned int)v38;
    if ( v24 < 0 )
    {
      *v23 = 45;
      v26 = v23 + 1;
      v24 = -v24;
    }
    else
    {
      *v23 = 43;
      v26 = v23 + 1;
    }
    v27 = v26;
    *v26 = 48;
    if ( v24 >= 0 )
    {
      LODWORD(v25) = 1000;
      if ( v24 >= 1000 )
      {
        v33 = v25;
        v29 = v24 % v25;
        v28 = v24 / v33;
        *v26++ = v28 + 48;
        v39 = HIDWORD(v28);
        v24 = v29;
        if ( v26 != v27 )
          goto LABEL_60;
      }
    }
    if ( v24 >= 100 )
    {
LABEL_60:
      v31 = v24 % 100;
      v30 = v24 / 100;
      *v26 = v30 + 48;
      v39 = HIDWORD(v30);
      ++v26;
      v24 = v31;
    }
    if ( v26 != v27 || v24 >= 10 )
    {
      v32 = v24 % 10;
      *v26++ = v24 / 10 + 48;
      LOBYTE(v24) = v24 % 10;
      v39 = HIDWORD(v32);
    }
    *v26 = v24 + 48;
    v26[1] = 0;
  }
  if ( v37 != 0 )
    *(_DWORD *)(v36 + 112) &= ~2u;
  return 0;
}

// Address: 0x1000FD0C
int __usercall _cftof2_l@<eax>(
        _DWORD *a1@<eax>,
        char *a2@<ecx>,
        int a3,
        int Size,
        char a5,
        struct localeinfo_struct *a6)
{
  int v8; // esi
  char *v10; // eax
  char *v11; // esi
  int v12; // eax
  char *v13; // esi
  int v14; // ebx
  char *v15; // esi
  int v16; // ebx
  int v17; // [esp+Ch] [ebp-10h] BYREF
  int v18; // [esp+14h] [ebp-8h]
  char v19; // [esp+18h] [ebp-4h]

  v8 = a1[1] - 1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v17, a6);
  if ( a2 != nullptr && a3 != 0 )
  {
    if ( a5 != 0 && v8 == Size )
    {
      v10 = &a2[v8 + (*a1 == 45)];
      *v10 = 48;
      v10[1] = 0;
    }
    v11 = a2;
    if ( *a1 == 45 )
    {
      *a2 = 45;
      v11 = a2 + 1;
    }
    v12 = a1[1];
    if ( v12 > 0 )
    {
      v13 = &v11[v12];
    }
    else
    {
      _shift(v11, 1);
      *v11 = 48;
      v13 = v11 + 1;
    }
    if ( Size > 0 )
    {
      _shift(v13, 1);
      *v13 = ***(_BYTE ***)(v17 + 188);
      v14 = a1[1];
      v15 = v13 + 1;
      if ( v14 < 0 )
      {
        v16 = -v14;
        if ( a5 != 0 || Size >= v16 )
          Size = v16;
        _shift(v15, Size);
        memset(v15, 48, Size);
      }
    }
    if ( v19 != 0 )
      *(_DWORD *)(v18 + 112) &= ~2u;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v19 != 0 )
      *(_DWORD *)(v18 + 112) &= ~2u;
    return 22;
  }
}

// Address: 0x1000FE03
int __cdecl _cftof_l(_DWORD *a1, char *a2, int a3, size_t Size, struct localeinfo_struct *a5)
{
  int result; // eax
  int v6; // eax
  int v7[4]; // [esp+Ch] [ebp-2Ch] BYREF
  int v8[6]; // [esp+1Ch] [ebp-1Ch] BYREF

  _fltout2(*a1, a1[1], (int)v7, (int)v8, 0x16u);
  if ( a2 != nullptr && (v6 = a3, a3 != 0) )
  {
    if ( a3 != -1 )
      v6 = a3 - (v7[0] == 45);
    result = _fptostr(&a2[v7[0] == 45], v6, Size + v7[1], (int)v7);
    if ( result != 0 )
      *a2 = 0;
    else
      return _cftof2_l(v7, a2, a3, Size, 0, a5);
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  return result;
}

// Address: 0x1000FEBE
int __cdecl _cftog_l(_DWORD *a1, char *a2, int a3, signed int Size, int a5, struct localeinfo_struct *a6)
{
  int result; // eax
  int v7; // ecx
  BOOL v8; // eax
  char *v9; // edi
  int v10; // [esp+Ch] [ebp-30h] BYREF
  int v11; // [esp+10h] [ebp-2Ch]
  int v12; // [esp+1Ch] [ebp-20h]
  int v13[6]; // [esp+20h] [ebp-1Ch] BYREF

  _fltout2(*a1, a1[1], (int)&v10, (int)v13, 0x16u);
  if ( a2 != nullptr && (v7 = a3, a3 != 0) )
  {
    v12 = v11 - 1;
    v8 = v10 == 45;
    v9 = &a2[v8];
    if ( a3 != -1 )
      v7 = a3 - v8;
    result = _fptostr(v9, v7, Size, (int)&v10);
    if ( result != 0 )
    {
      *a2 = 0;
    }
    else if ( v11 - 1 < -4 || v11 - 1 >= Size )
    {
      return _cftoe2_l(a2, a3, Size, a5, (int)&v10, 1, a6);
    }
    else
    {
      if ( v12 < v11 - 1 )
        v9[strlen(v9) - 1] = 0;
      return _cftof2_l(&v10, a2, a3, Size, 1, a6);
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  return result;
}

// Address: 0x1000FFB8
int __cdecl _cfltcvt_l(_DWORD *a1, char *a2, int a3, int a4, size_t Size, int a6, struct localeinfo_struct *a7)
{
  switch ( a4 )
  {
    case 'e':
    case 'E':
      return _cftoe_l(a1, a2, a3, Size, a6, a7);
    case 'f':
      return _cftof_l(a1, a2, a3, Size, a7);
    case 'a':
    case 'A':
      return _cftoa_l(a1, a2, a3, Size, a6, a7);
    default:
      break;
  }
  return _cftog_l(a1, a2, a3, Size, a6, a7);
}

// Address: 0x10010040
int __cdecl _cfltcvt(_DWORD *a1, char *a2, int a3, int a4, size_t Size, int a6)
{
  return _cfltcvt_l(a1, a2, a3, a4, Size, a6, nullptr);
}

// Address: 0x10010063
int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    v1 = &off_1001EA80[i];
    result = (int (*)())_encode_pointer(off_1001EA80[i]);
    *v1 = result;
  }
  return result;
}

// Address: 0x10010084
errno_t _setdefaultprecision()
{
  errno_t result; // eax

  result = _controlfp_s(nullptr, 0x10000u, 0x30000u);
  if ( result != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return result;
}

// Address: 0x100100AF
BOOL _ms_p5_test_fdiv()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0;
}

// Address: 0x100100ED
int _ms_p5_mp_test_fdiv()
{
  HMODULE ModuleHandleA; // eax
  BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD); // eax

  ModuleHandleA = GetModuleHandleA("KERNEL32");
  if ( ModuleHandleA != nullptr
    && (IsProcessorFeaturePresent = (BOOL (__stdcall *)(DWORD))GetProcAddress(
                                                                 ModuleHandleA,
                                                                 "IsProcessorFeaturePresent")) != nullptr )
  {
    return IsProcessorFeaturePresent(0);
  }
  else
  {
    return _ms_p5_test_fdiv();
  }
}

// Address: 0x10010120
void *__usercall _alloca_probe@<eax>(unsigned int a1@<eax>, int a2@<ecx>)
{
  unsigned int v2; // ecx
  unsigned int i; // eax
  int v5; // [esp-4h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  v5 = a2;
  v2 = ~((unsigned int)((unsigned int)&retaddr - (unsigned __int64)a1) >> 32) & ((unsigned int)&retaddr - a1);
  for ( i = (unsigned int)&v5 & 0xFFFFF000; v2 < i; i -= 4096 )
    ;
  return retaddr;
}

// Address: 0x1001014B
LPVOID __cdecl _calloc_impl(size_t Size, unsigned int a2, _DWORD *a3)
{
  size_t v4; // esi
  LPVOID v5; // ebx
  _DWORD *v6; // [esp+10h] [ebp-1Ch]
  unsigned int Sizea; // [esp+34h] [ebp+8h]

  if ( Size == 0 || 0xFFFFFFE0 / Size >= a2 )
  {
    v4 = a2 * Size;
    Sizea = v4;
    if ( v4 == 0 )
      v4 = 1;
    while ( 1 )
    {
      v5 = nullptr;
      if ( v4 <= 0xFFFFFFE0 )
        break;
LABEL_14:
      if ( v5 != nullptr )
        return v5;
      if ( dword_1001FC3C == 0 )
      {
        if ( a3 != nullptr )
          *a3 = 12;
        return v5;
      }
      if ( _callnewh(v4) == 0 )
      {
        if ( a3 != nullptr )
          *a3 = 12;
        return nullptr;
      }
    }
    if ( dword_10020FF8 == 3 )
    {
      v4 = (v4 + 15) & 0xFFFFFFF0;
      if ( Sizea <= dword_10020FE8 )
      {
        _lock(4);
        v6 = __sbh_alloc_block(Sizea);
        _unlock(4);
        v5 = v6;
        if ( v6 == nullptr )
        {
LABEL_13:
          v5 = HeapAlloc(hHeap, 8u, v4);
          goto LABEL_14;
        }
        memset(v6, 0, Sizea);
      }
    }
    if ( v5 != nullptr )
      return v5;
    goto LABEL_13;
  }
  *_errno() = 12;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return nullptr;
}

// Address: 0x10010269
int __cdecl _initp_misc_winsig(int a1)
{
  dword_1001FD8C = a1;
  dword_1001FD90 = a1;
  dword_1001FD94 = a1;
  dword_1001FD98 = a1;
  return a1;
}

// Address: 0x10010287
unsigned int __usercall siglookup@<eax>(int a1@<edx>, unsigned int a2)
{
  unsigned int result; // eax

  result = a2;
  do
  {
    if ( *(_DWORD *)(result + 4) == a1 )
      break;
    result += 12;
  }
  while ( result < a2 + 12 * dword_1001EA54 );
  if ( result >= a2 + 12 * dword_1001EA54 || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}

// Address: 0x100102BE
PVOID sub_100102BE()
{
  return _decode_pointer((void *)dword_1001FD94);
}

// Address: 0x100102CB
int __cdecl raise(int Signal)
{
  DWORD *v1; // edi
  DWORD *v2; // eax
  int result; // eax
  int *v4; // esi
  void *v5; // eax
  void (__cdecl *v6)(int, DWORD); // eax
  DWORD v7; // [esp+10h] [ebp-30h]
  DWORD v8; // [esp+14h] [ebp-2Ch]
  int i; // [esp+1Ch] [ebp-24h]
  void (__cdecl *v10)(int, DWORD); // [esp+20h] [ebp-20h]
  int v11; // [esp+24h] [ebp-1Ch]

  v1 = nullptr;
  v11 = 0;
  if ( Signal > 11 )
  {
    if ( Signal == 15 )
    {
      v4 = &dword_1001FD98;
      v5 = (void *)dword_1001FD98;
      goto LABEL_18;
    }
    if ( Signal == 21 )
    {
      v4 = &dword_1001FD90;
      v5 = (void *)dword_1001FD90;
      goto LABEL_18;
    }
    if ( Signal != 22 )
      goto LABEL_14;
    goto LABEL_15;
  }
  if ( Signal != 11 )
  {
    if ( Signal == 2 )
    {
      v4 = &dword_1001FD8C;
      v5 = (void *)dword_1001FD8C;
LABEL_18:
      v11 = 1;
      v6 = (void (__cdecl *)(int, DWORD))_decode_pointer(v5);
      goto LABEL_19;
    }
    if ( Signal != 4 )
    {
      if ( Signal != 6 )
      {
        if ( Signal == 8 )
          goto LABEL_7;
LABEL_14:
        *_errno() = 22;
        _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
        return -1;
      }
LABEL_15:
      v4 = &dword_1001FD94;
      v5 = (void *)dword_1001FD94;
      goto LABEL_18;
    }
  }
LABEL_7:
  v2 = _getptd_noexit();
  v1 = v2;
  if ( v2 == nullptr )
    return -1;
  v4 = (int *)(siglookup(Signal, v2[23]) + 8);
  v6 = (void (__cdecl *)(int, DWORD))*v4;
LABEL_19:
  v10 = v6;
  result = 0;
  if ( v10 == (void (__cdecl *)(int, DWORD))1 )
    return result;
  if ( v10 == nullptr )
    _exit(3);
  if ( v11 != 0 )
    _lock(0);
  if ( Signal == 8 || Signal == 11 || Signal == 4 )
  {
    v8 = v1[24];
    v1[24] = 0;
    if ( Signal != 8 )
      goto LABEL_33;
    v7 = v1[25];
    v1[25] = 140;
  }
  if ( Signal == 8 )
  {
    for ( i = dword_1001EA48; i < dword_1001EA48 + dword_1001EA4C; ++i )
      *(_DWORD *)(12 * i + v1[23] + 8) = 0;
    goto LABEL_37;
  }
LABEL_33:
  *v4 = (int)_encoded_null();
LABEL_37:
  if ( v11 != 0 )
    _unlock(0);
  if ( Signal == 8 )
    v10(8, v1[25]);
  else
    ((void (__cdecl *)(int))v10)(Signal);
  if ( Signal == 8 || Signal == 11 || Signal == 4 )
  {
    v1[24] = v8;
    if ( Signal == 8 )
      v1[25] = v7;
  }
  return 0;
}

// Address: 0x1001047B
int __cdecl sub_1001047B(int a1)
{
  dword_1001FDA0 = a1;
  return a1;
}

// Address: 0x1001048A
int __cdecl sub_1001048A(int a1)
{
  dword_1001FDAC = a1;
  return a1;
}

// Address: 0x10010499
int __cdecl sub_10010499(int a1)
{
  dword_1001FDB0 = a1;
  return a1;
}

// Address: 0x100104A8
BOOL __cdecl __crtInitCritSecAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x10010508
__int64 __cdecl _lseeki64_nolock(int FileHandle, LONG a2, int a3, DWORD dwMoveMethod)
{
  void *osfhandle; // eax
  DWORD LastError; // eax
  _BYTE *v7; // eax
  __int64 lDistanceToMove; // [esp+8h] [ebp-8h] BYREF

  HIDWORD(lDistanceToMove) = a3;
  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( osfhandle == (void *)-1 )
  {
    *_errno() = 9;
    return -1;
  }
  LODWORD(lDistanceToMove) = SetFilePointer(osfhandle, a2, (PLONG)&lDistanceToMove + 1, dwMoveMethod);
  if ( (_DWORD)lDistanceToMove == -1 )
  {
    LastError = GetLastError();
    if ( LastError != 0 )
    {
      _dosmaperr(LastError);
      return -1;
    }
  }
  v7 = (_BYTE *)(dword_10020EE0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
  *v7 &= ~2u;
  return lDistanceToMove;
}

// Address: 0x1001058D
__int64 __cdecl _lseeki64(int FileHandle, __int64 Offset, int Origin)
{
  int *v4; // ebx
  int v5; // esi
  __int64 v6; // [esp+10h] [ebp-24h]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0 || FileHandle >= uNumber )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  v4 = &dword_10020EE0[FileHandle >> 5];
  v5 = (FileHandle & 0x1F) << 6;
  if ( (*(_BYTE *)(*v4 + v5 + 4) & 1) != 0 )
  {
    __lock_fhandle(FileHandle);
    if ( (*(_BYTE *)(*v4 + v5 + 4) & 1) != 0 )
    {
      v6 = _lseeki64_nolock(FileHandle, Offset, SHIDWORD(Offset), Origin);
    }
    else
    {
      *_errno() = 9;
      *__doserrno() = 0;
      v6 = -1;
    }
    _unlock_fhandle(FileHandle);
    return v6;
  }
  else
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x100106A6
int __cdecl _write_nolock(int FileHandle, const void *a2, DWORD nNumberOfBytesToWrite)
{
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  char v7; // bl
  DWORD *v8; // eax
  UINT ConsoleCP; // eax
  const char *v10; // ebx
  CHAR v11; // cl
  int *v12; // esi
  int v13; // eax
  int v14; // eax
  DWORD v15; // eax
  signed int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  char v20; // dl
  int v21; // eax
  DWORD v22; // ecx
  CHAR *v23; // eax
  CHAR *v24; // edx
  CHAR v25; // dl
  signed int v26; // ebx
  DWORD v27; // ecx
  CHAR *v28; // eax
  WCHAR *v29; // edx
  WCHAR v30; // dx
  signed int v31; // ebx
  DWORD v32; // ecx
  WCHAR *v33; // eax
  WCHAR v34; // dx
  int v35; // esi
  int v36; // ebx
  void *v37; // [esp-10h] [ebp-1AF8h]
  DWORD Mode; // [esp+4h] [ebp-1AE4h] BYREF
  BOOL v39; // [esp+8h] [ebp-1AE0h]
  char v40; // [esp+Fh] [ebp-1AD9h]
  int *v41; // [esp+10h] [ebp-1AD8h]
  DWORD v42; // [esp+14h] [ebp-1AD4h] BYREF
  int v43; // [esp+18h] [ebp-1AD0h]
  LPCVOID lpBuffer; // [esp+1Ch] [ebp-1ACCh]
  DWORD v45; // [esp+20h] [ebp-1AC8h]
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-1AC4h] BYREF
  WCHAR WideCharStr[2]; // [esp+28h] [ebp-1AC0h] BYREF
  WCHAR *v48; // [esp+2Ch] [ebp-1ABCh]
  CHAR Buffer[1704]; // [esp+30h] [ebp-1AB8h] BYREF
  CHAR v50[3416]; // [esp+6D8h] [ebp-1410h] BYREF
  WCHAR v51[854]; // [esp+1430h] [ebp-6B8h] BYREF
  CHAR MultiByteStr[8]; // [esp+1ADCh] [ebp-Ch] BYREF

  lpBuffer = a2;
  v45 = 0;
  v43 = 0;
  if ( nNumberOfBytesToWrite == 0 )
    return 0;
  if ( a2 == nullptr )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  v4 = &dword_10020EE0[FileHandle >> 5];
  v5 = (FileHandle & 0x1F) << 6;
  v6 = v5 + *v4;
  v7 = (char)(2 * *(_BYTE *)(v6 + 36)) >> 1;
  v41 = v4;
  v40 = v7;
  if ( (v7 == 2 || v7 == 1) && (nNumberOfBytesToWrite & 1) != 0 )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  if ( (*(_BYTE *)(v6 + 4) & 0x20) != 0 )
    _lseeki64_nolock(FileHandle, 0, 0, 2u);
  if ( _isatty(FileHandle) != 0 && *(char *)(v5 + *v4 + 4) < 0 )
  {
    v8 = _getptd();
    v37 = *(void **)(v5 + *v4);
    v39 = *(_DWORD *)(v8[27] + 20) == 0;
    if ( GetConsoleMode(v37, &Mode) && (!v39 || v7 != 0) )
    {
      ConsoleCP = GetConsoleCP();
      v10 = (const char *)lpBuffer;
      Mode = ConsoleCP;
      NumberOfBytesWritten = 0;
      v48 = nullptr;
      while ( 1 )
      {
        if ( v40 != 0 )
        {
          if ( v40 == 1 || v40 == 2 )
          {
            v18 = *(unsigned __int16 *)v10;
            v10 += 2;
            ++v48;
            *(_DWORD *)WideCharStr = v18;
            v39 = (_WORD)v18 == 10;
          }
          if ( v40 == 1 || v40 == 2 )
          {
            if ( _putwch_nolock(WideCharStr[0]) != WideCharStr[0] )
              goto LABEL_85;
            v45 += 2;
            if ( v39 )
            {
              wcscpy(WideCharStr, L"\r");
              if ( _putwch_nolock(0xDu) != WideCharStr[0] )
                goto LABEL_85;
              ++v45;
              ++v43;
            }
          }
          goto LABEL_42;
        }
        v11 = *v10;
        v12 = v41;
        v39 = *v10 == 10;
        v13 = v5 + *v41;
        if ( *(_DWORD *)(v13 + 56) != 0 )
        {
          MultiByteStr[0] = *(_BYTE *)(v13 + 52);
          MultiByteStr[1] = v11;
          *(_DWORD *)(v13 + 56) = 0;
          v14 = mbtowc(WideCharStr, MultiByteStr, 2u);
        }
        else
        {
          if ( isleadbyte(v11) != 0 )
          {
            if ( nNumberOfBytesToWrite + (_BYTE *)lpBuffer - v10 <= 1 )
            {
              v19 = *v12;
              v20 = *v10;
              ++v45;
              *(_BYTE *)(v5 + v19 + 52) = v20;
              *(_DWORD *)(v5 + *v12 + 56) = 1;
              goto LABEL_86;
            }
            if ( mbtowc(WideCharStr, v10, 2u) == -1 )
              goto LABEL_86;
            ++v10;
            v48 = (WCHAR *)((char *)v48 + 1);
            goto LABEL_26;
          }
          v14 = mbtowc(WideCharStr, v10, 1u);
        }
        if ( v14 == -1 )
          goto LABEL_86;
LABEL_26:
        ++v10;
        v48 = (WCHAR *)((char *)v48 + 1);
        v15 = WideCharToMultiByte(Mode, 0, WideCharStr, 1, MultiByteStr, 5, nullptr, nullptr);
        v16 = v15;
        if ( v15 == 0 )
          goto LABEL_86;
        if ( !WriteFile(*(HANDLE *)(v5 + *v41), MultiByteStr, v15, &NumberOfBytesWritten, nullptr) )
          goto LABEL_85;
        v45 = (DWORD)v48 + v43;
        if ( (int)NumberOfBytesWritten < v16 )
          goto LABEL_86;
        if ( v39 )
        {
          v17 = *v41;
          MultiByteStr[0] = 13;
          if ( !WriteFile(*(HANDLE *)(v5 + v17), MultiByteStr, 1u, &NumberOfBytesWritten, nullptr) )
            goto LABEL_85;
          if ( (int)NumberOfBytesWritten < 1 )
            goto LABEL_86;
          ++v43;
          ++v45;
        }
LABEL_42:
        if ( (unsigned int)v48 >= nNumberOfBytesToWrite )
          goto LABEL_86;
      }
    }
  }
  v21 = v5 + *v4;
  if ( *(char *)(v21 + 4) >= 0 )
  {
    if ( WriteFile(*(HANDLE *)v21, lpBuffer, nNumberOfBytesToWrite, &v42, nullptr) )
    {
      *(_DWORD *)WideCharStr = 0;
      v45 = v42;
      goto LABEL_86;
    }
  }
  else
  {
    *(_DWORD *)WideCharStr = 0;
    if ( v7 != 0 )
    {
      v48 = (WCHAR *)lpBuffer;
      if ( v7 == 2 )
      {
        while ( 1 )
        {
          NumberOfBytesWritten = 0;
          v27 = (char *)v48 - (_BYTE *)lpBuffer;
          v28 = Buffer;
          do
          {
            if ( v27 >= nNumberOfBytesToWrite )
              break;
            v29 = v48++;
            v30 = *v29;
            v27 += 2;
            if ( v30 == 10 )
            {
              v43 += 2;
              *(_WORD *)v28 = 13;
              v28 += 2;
              NumberOfBytesWritten += 2;
            }
            NumberOfBytesWritten += 2;
            *(_WORD *)v28 = v30;
            v28 += 2;
          }
          while ( NumberOfBytesWritten < 0x13FE );
          v31 = v28 - Buffer;
          if ( !WriteFile(*(HANDLE *)(v5 + *v4), Buffer, v28 - Buffer, &v42, nullptr) )
            break;
          v45 += v42;
          if ( (int)v42 < v31 || (char *)v48 - (_BYTE *)lpBuffer >= nNumberOfBytesToWrite )
            goto LABEL_86;
          v4 = v41;
        }
      }
      else
      {
        while ( 1 )
        {
          NumberOfBytesWritten = 0;
          v32 = (char *)v48 - (_BYTE *)lpBuffer;
          v33 = v51;
          do
          {
            if ( v32 >= nNumberOfBytesToWrite )
              break;
            v34 = *v48++;
            v32 += 2;
            if ( v34 == 10 )
            {
              *v33++ = 13;
              NumberOfBytesWritten += 2;
            }
            NumberOfBytesWritten += 2;
            *v33++ = v34;
          }
          while ( NumberOfBytesWritten < 0x6A8 );
          v35 = 0;
          v36 = WideCharToMultiByte(0xFDE9u, 0, v51, v33 - v51, v50, 3413, nullptr, nullptr);
          if ( v36 == 0 )
            break;
          while ( WriteFile(*(HANDLE *)(v5 + *v41), &v50[v35], v36 - v35, &v42, nullptr) )
          {
            v35 += v42;
            if ( v36 <= v35 )
              goto LABEL_80;
          }
          *(_DWORD *)WideCharStr = GetLastError();
LABEL_80:
          if ( v36 <= v35 )
          {
            v45 = (char *)v48 - (_BYTE *)lpBuffer;
            if ( (char *)v48 - (_BYTE *)lpBuffer < nNumberOfBytesToWrite )
              continue;
          }
          goto LABEL_86;
        }
      }
    }
    else
    {
      NumberOfBytesWritten = (DWORD)lpBuffer;
      while ( 1 )
      {
        v48 = nullptr;
        v22 = NumberOfBytesWritten - (_DWORD)lpBuffer;
        v23 = Buffer;
        do
        {
          if ( v22 >= nNumberOfBytesToWrite )
            break;
          v24 = (CHAR *)NumberOfBytesWritten++;
          v25 = *v24;
          ++v22;
          if ( v25 == 10 )
          {
            ++v43;
            *v23++ = 13;
            v48 = (WCHAR *)((char *)v48 + 1);
          }
          *v23++ = v25;
          v48 = (WCHAR *)((char *)v48 + 1);
        }
        while ( (unsigned int)v48 < 0x13FF );
        v26 = v23 - Buffer;
        if ( !WriteFile(*(HANDLE *)(v5 + *v4), Buffer, v23 - Buffer, &v42, nullptr) )
          break;
        v45 += v42;
        if ( (int)v42 < v26 || NumberOfBytesWritten - (unsigned int)lpBuffer >= nNumberOfBytesToWrite )
          goto LABEL_86;
        v4 = v41;
      }
    }
  }
LABEL_85:
  *(_DWORD *)WideCharStr = GetLastError();
LABEL_86:
  if ( v45 == 0 )
  {
    if ( *(_DWORD *)WideCharStr != 0 )
    {
      if ( *(_DWORD *)WideCharStr == 5 )
      {
        *_errno() = 9;
        *__doserrno() = 5;
      }
      else
      {
        _dosmaperr(*(unsigned int *)WideCharStr);
      }
    }
    else
    {
      if ( (*(_BYTE *)(v5 + *v41 + 4) & 0x40) != 0 && *(_BYTE *)lpBuffer == 26 )
        return 0;
      *_errno() = 28;
      *__doserrno() = 0;
    }
    return -1;
  }
  return v45 - v43;
}

// Address: 0x10010DD9
int __cdecl _write(int FileHandle, const void *Buf, unsigned int MaxCharCount)
{
  int *v4; // ebx
  int v5; // esi
  int v6; // [esp+14h] [ebp-1Ch]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= uNumber
    || (v4 = &dword_10020EE0[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  __lock_fhandle(FileHandle);
  if ( (*(_BYTE *)(*v4 + v5 + 4) & 1) != 0 )
  {
    v6 = _write_nolock(FileHandle, Buf, MaxCharCount);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    v6 = -1;
  }
  _unlock_fhandle(FileHandle);
  return v6;
}

// Address: 0x10010EB5
int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_1001FDB4;
  v1 = _malloc_crt(0x1000u);
  a1[2] = v1;
  if ( v1 != nullptr )
  {
    a1[3] |= 8u;
    a1[6] = 4096;
  }
  else
  {
    a1[3] |= 4u;
    a1[2] = a1 + 5;
    a1[6] = 2;
  }
  result = a1[2];
  a1[1] = 0;
  *a1 = result;
  return result;
}

// Address: 0x10010EFE
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return 0;
  }
  else if ( FileHandle >= 0 && FileHandle < uNumber )
  {
    return *(_BYTE *)(dword_10020EE0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) & 0x40;
  }
  else
  {
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
}

// Address: 0x10010F62
_UNKNOWN **sub_10010F62()
{
  return &off_1001EAB0;
}

// Address: 0x10010F68
int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_10020EC0;
  if ( dword_10020EC0 == 0 )
  {
    v0 = 512;
LABEL_5:
    dword_10020EC0 = v0;
    goto LABEL_6;
  }
  if ( dword_10020EC0 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)_calloc_crt(v0, 4);
  dword_1001FEB4 = v1;
  if ( v1 == nullptr )
  {
    dword_10020EC0 = 20;
    v1 = (char *)_calloc_crt(0x14u, 4);
    dword_1001FEB4 = v1;
    if ( v1 == nullptr )
      return 26;
  }
  v3 = 0;
  v4 = &off_1001EAB0;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&Str )
      break;
    v1 = (char *)dword_1001FEB4;
  }
  v5 = 0;
  v6 = &unk_1001EAC0;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_10020EE0[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || v7 == 0 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_1001EB20 );
  return 0;
}

// Address: 0x10011019
void __endstdio()
{
  sub_1001315C();
  if ( byte_1001F77C != 0 )
    _fcloseall();
  free(dword_1001FEB4);
}

// Address: 0x10011039
void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1001EAB0 || Stream > &stru_1001ED10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_1001EAB0) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}

// Address: 0x1001107A
void __cdecl _lock_file2(int a1, int a2)
{
  if ( a1 >= 20 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
  }
  else
  {
    _lock(a1 + 16);
    *(_DWORD *)(a2 + 12) |= 0x8000u;
  }
}

// Address: 0x100110AC
void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1001EAB0 || Stream > &stru_1001ED10 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_1001EAB0) >> 5) + 16);
  }
}

// Address: 0x100110E8
void __cdecl _unlock_file2(int a1, int a2)
{
  if ( a1 >= 20 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
  }
  else
  {
    *(_DWORD *)(a2 + 12) &= ~0x8000u;
    _unlock(a1 + 16);
  }
}

// Address: 0x10011117
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x10011149
wint_t __cdecl _fputwc_nolock(wchar_t Character, FILE *Stream)
{
  int *v2; // edi
  _BYTE *v3; // eax
  int *v4; // edi
  _BYTE *v5; // eax
  int *v6; // edi
  char *v7; // eax
  int v9; // edi
  bool v10; // sf
  int v11; // eax
  int SizeConverted; // [esp+Ch] [ebp-10h] BYREF
  char MbCh[8]; // [esp+10h] [ebp-Ch] BYREF

  if ( (Stream->_flag & 0x40) != 0
    || (_fileno(Stream) == -1 || _fileno(Stream) == -2
      ? (v3 = &unk_1001EA08)
      : (v2 = &dword_10020EE0[_fileno(Stream) >> 5], v3 = (_BYTE *)(*v2 + ((_fileno(Stream) & 0x1F) << 6))),
        (v3[36] & 0x7F) == 2
     || (_fileno(Stream) == -1 || _fileno(Stream) == -2
       ? (v5 = &unk_1001EA08)
       : (v4 = &dword_10020EE0[_fileno(Stream) >> 5], v5 = (_BYTE *)(*v4 + ((_fileno(Stream) & 0x1F) << 6))),
         (v5[36] & 0x7F) == 1
      || (_fileno(Stream) == -1 || _fileno(Stream) == -2
        ? (v7 = (char *)&unk_1001EA08)
        : (v6 = &dword_10020EE0[_fileno(Stream) >> 5], v7 = (char *)(*v6 + ((_fileno(Stream) & 0x1F) << 6))),
          v7[4] >= 0))) )
  {
    v10 = Stream->_cnt - 2 < 0;
    Stream->_cnt -= 2;
    if ( v10 )
    {
      return _flswbuf(Character, (int)Stream);
    }
    else
    {
      *(_WORD *)Stream->_ptr = Character;
      Stream->_ptr += 2;
      return Character;
    }
  }
  else
  {
    if ( wctomb_s(&SizeConverted, MbCh, 5u, Character) != 0 )
      return -1;
    v9 = 0;
    if ( SizeConverted > 0 )
    {
      while ( 1 )
      {
        v10 = --Stream->_cnt < 0;
        if ( v10 )
        {
          v11 = _flsbuf(MbCh[v9], Stream);
        }
        else
        {
          *Stream->_ptr = MbCh[v9];
          v11 = *(unsigned __int8 *)Stream->_ptr++;
        }
        if ( v11 == -1 )
          break;
        if ( ++v9 >= SizeConverted )
          return Character;
      }
      return -1;
    }
    return Character;
  }
}

// Address: 0x100112D0
int __cdecl _get_printf_count_output()
{
  return dword_1001FDB8 == (__security_cookie | 1);
}

// Address: 0x100112E6
int __cdecl _mbtowc_l(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes, _locale_t Locale)
{
  int result; // eax
  struct __crt_locale_data *locinfo; // eax
  int v6; // ecx
  bool v7; // zf
  __crt_locale_pointers v8; // [esp+8h] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-8h]
  char v10; // [esp+14h] [ebp-4h]

  if ( SrcCh == nullptr || SrcSizeInBytes == 0 )
    return 0;
  if ( *SrcCh == 0 )
  {
    if ( DstCh != nullptr )
      *DstCh = 0;
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, (struct localeinfo_struct *)Locale);
  if ( *((_DWORD *)v8.locinfo + 5) == 0 )
  {
    if ( DstCh != nullptr )
      *DstCh = *(unsigned __int8 *)SrcCh;
    goto LABEL_11;
  }
  if ( _isleadbyte_l(*(unsigned __int8 *)SrcCh, &v8) != 0 )
  {
    locinfo = v8.locinfo;
    v6 = *((_DWORD *)v8.locinfo + 43);
    if ( v6 > 1
      && (int)SrcSizeInBytes >= v6
      && (v7 = MultiByteToWideChar(*((_DWORD *)v8.locinfo + 1), 9u, SrcCh, v6, DstCh, DstCh != nullptr) == 0,
          locinfo = v8.locinfo,
          !v7)
      || SrcSizeInBytes >= *((_DWORD *)locinfo + 43) && SrcCh[1] != 0 )
    {
      result = *((_DWORD *)locinfo + 43);
      if ( v10 != 0 )
        *(_DWORD *)(v9 + 112) &= ~2u;
      return result;
    }
  }
  else if ( MultiByteToWideChar(*((_DWORD *)v8.locinfo + 1), 9u, SrcCh, 1, DstCh, DstCh != nullptr) != 0 )
  {
LABEL_11:
    if ( v10 != 0 )
      *(_DWORD *)(v9 + 112) &= ~2u;
    return 1;
  }
  *_errno() = 42;
  if ( v10 != 0 )
    *(_DWORD *)(v9 + 112) &= ~2u;
  return -1;
}

// Address: 0x100113FD
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x10011417
int __cdecl _isleadbyte_l(int C, _locale_t Locale)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale);
  result = *(_WORD *)(*(_DWORD *)(v3 + 200) + 2 * (unsigned __int8)C) & 0x8000;
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x1001144F
int __cdecl isleadbyte(int C)
{
  return _isleadbyte_l(C, nullptr);
}

// Address: 0x10011470
unsigned int __stdcall _aulldvrm(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rtt
  unsigned int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  char v7; // cf
  unsigned __int64 v8; // rax

  if ( HIDWORD(a2) != 0 )
  {
    v4 = HIDWORD(a2);
    v5 = a2;
    v6 = a1;
    do
    {
      v7 = v4 & 1;
      v4 >>= 1;
      v5 = (v5 >> 1) | (v7 << 31);
      v6 >>= 1;
    }
    while ( v4 != 0 );
    v3 = v6 / v5;
    v8 = v3 * (unsigned __int64)(unsigned int)a2;
    if ( __CFADD__(HIDWORD(a2) * v3, HIDWORD(v8)) || (HIDWORD(v8) = (a2 * (unsigned __int64)v3) >> 32, v8 > a1) )
      --v3;
  }
  else
  {
    LODWORD(v2) = a1;
    HIDWORD(v2) = HIDWORD(a1) % (unsigned int)a2;
    return v2 / (unsigned int)a2;
  }
  return v3;
}

// Address: 0x10011505
void __cdecl fastcopy_I(__m128i *a1, const __m128i *a2, unsigned int a3)
{
  unsigned int v5; // ecx
  __m128i si128; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm3
  __m128i v9; // xmm5
  __m128i v10; // xmm6
  __m128i v11; // xmm7

  v5 = a3 >> 7;
  do
  {
    si128 = _mm_load_si128(a2 + 1);
    v7 = _mm_load_si128(a2 + 2);
    v8 = _mm_load_si128(a2 + 3);
    *a1 = _mm_load_si128(a2);
    a1[1] = si128;
    a1[2] = v7;
    a1[3] = v8;
    v9 = _mm_load_si128(a2 + 5);
    v10 = _mm_load_si128(a2 + 6);
    v11 = _mm_load_si128(a2 + 7);
    a1[4] = _mm_load_si128(a2 + 4);
    a1[5] = v9;
    a1[6] = v10;
    a1[7] = v11;
    a2 += 8;
    a1 += 8;
    --v5;
  }
  while ( v5 != 0 );
}

// Address: 0x1001158C
__m128i *__cdecl _VEC_memcpy(__m128i *a1, const __m128i *a2, unsigned int a3)
{
  int v3; // ecx
  __m128i *result; // eax
  int v5; // ecx
  unsigned int v6; // [esp+4h] [ebp-18h]

  v3 = (int)a2 % 16;
  result = a1;
  if ( (((int)a1 % 16) | ((int)a2 % 16)) != 0 )
  {
    if ( v3 == (int)a1 % 16 )
    {
      qmemcpy(a1, a2, 16 - v3);
      _VEC_memcpy(&a1->m128i_i8[16 - v3], &a2->m128i_i8[16 - v3], a3 - (16 - v3));
    }
    else
    {
      qmemcpy(a1, a2, a3);
    }
    return a1;
  }
  else
  {
    v5 = a3 & 0x7F;
    v6 = v5;
    if ( a3 != v5 )
    {
      fastcopy_I(a1, a2, a3 - v5);
      result = a1;
      v5 = v6;
    }
    if ( v5 != 0 )
    {
      qmemcpy(&result->m128i_i8[a3 - v5], &a2->m128i_i8[a3 - v5], v6);
      return a1;
    }
  }
  return result;
}

// Address: 0x1001166F
int __cdecl __crtLCMapStringA_stat(
        LCID Locale,
        DWORD dwMapFlags,
        LPCCH lpMultiByteStr,
        const char *cbMultiByte,
        LPWSTR lpDestStr,
        char *cchDest,
        UINT CodePage,
        int a8)
{
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  LPCCH v11; // eax
  const char *v12; // eax
  int v13; // eax
  int v14; // edi
  unsigned int v15; // eax
  void *v16; // esp
  WCHAR *v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  void *v21; // esp
  WCHAR *v22; // esi
  WCHAR *v23; // eax
  int v24; // eax
  UINT v26; // eax
  WCHAR *v27; // eax
  int v28; // eax
  int v29; // esi
  size_t v30; // eax
  void *v31; // esp
  int *v32; // edi
  int *v33; // eax
  _DWORD v34[2]; // [esp+0h] [ebp-20h] BYREF
  int v35; // [esp+8h] [ebp-18h] BYREF
  UINT v36; // [esp+Ch] [ebp-14h]
  void *Block; // [esp+10h] [ebp-10h]
  LPWSTR lpWideCharStr; // [esp+14h] [ebp-Ch]
  int cchWideChar; // [esp+18h] [ebp-8h] BYREF

  v9 = v8;
  if ( dword_1001FDBC == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, nullptr, 0) != 0 )
    {
      dword_1001FDBC = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_1001FDBC = 2;
    }
  }
  if ( (int)cbMultiByte > 0 )
  {
    v10 = (int)cbMultiByte;
    v11 = lpMultiByteStr;
    while ( 1 )
    {
      --v10;
      if ( *v11 == 0 )
        break;
      ++v11;
      if ( v10 == 0 )
      {
        v10 = -1;
        break;
      }
    }
    v12 = &cbMultiByte[-v10 - 1];
    if ( (int)v12 < (int)cbMultiByte )
      v12 = &cbMultiByte[-v10];
    cbMultiByte = v12;
  }
  if ( dword_1001FDBC != 2 && dword_1001FDBC != 0 )
  {
    if ( dword_1001FDBC == 1 )
    {
      cchWideChar = 0;
      if ( CodePage == 0 )
        CodePage = *(_DWORD *)(*(_DWORD *)v9 + 4);
      v13 = MultiByteToWideChar(CodePage, 8 * (a8 != 0) + 1, lpMultiByteStr, (int)cbMultiByte, nullptr, 0);
      v14 = v13;
      if ( v13 != 0 )
      {
        if ( v13 <= 0 || 0xFFFFFFE0 / v13 < 2 )
        {
          lpWideCharStr = nullptr;
LABEL_30:
          if ( lpWideCharStr != nullptr )
          {
            if ( MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, (int)cbMultiByte, lpWideCharStr, v14) != 0 )
            {
              v18 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, v14, nullptr, 0);
              v19 = v18;
              cchWideChar = v18;
              if ( v18 != 0 )
              {
                if ( (dwMapFlags & 0x400) != 0 )
                {
                  if ( cchDest != nullptr && v18 <= (int)cchDest )
                    LCMapStringW(Locale, dwMapFlags, lpWideCharStr, v14, lpDestStr, (int)cchDest);
                  goto LABEL_53;
                }
                if ( v18 <= 0 || 0xFFFFFFE0 / v18 < 2 )
                {
                  v22 = nullptr;
LABEL_46:
                  if ( v22 != nullptr )
                  {
                    if ( LCMapStringW(Locale, dwMapFlags, lpWideCharStr, v14, v22, cchWideChar) != 0 )
                    {
                      if ( cchDest != nullptr )
                        v24 = WideCharToMultiByte(
                                CodePage,
                                0,
                                v22,
                                cchWideChar,
                                (LPSTR)lpDestStr,
                                (int)cchDest,
                                nullptr,
                                nullptr);
                      else
                        v24 = WideCharToMultiByte(CodePage, 0, v22, cchWideChar, nullptr, 0, nullptr, nullptr);
                      cchWideChar = v24;
                    }
                    _freea(v22);
                  }
                  goto LABEL_53;
                }
                v20 = 2 * v18 + 8;
                if ( v20 > 0x400 )
                {
                  v23 = (WCHAR *)malloc(2 * v19 + 8);
                  if ( v23 != nullptr )
                  {
                    *(_DWORD *)v23 = 56797;
                    v23 += 4;
                  }
                  v22 = v23;
                  goto LABEL_46;
                }
                v21 = alloca(v20);
                if ( v34 != nullptr )
                {
                  v34[0] = 52428;
                  v22 = (WCHAR *)&v35;
                  goto LABEL_46;
                }
              }
            }
LABEL_53:
            _freea(lpWideCharStr);
            return cchWideChar;
          }
          return 0;
        }
        v15 = 2 * v13 + 8;
        if ( v15 > 0x400 )
        {
          v17 = (WCHAR *)malloc(2 * v14 + 8);
          if ( v17 != nullptr )
          {
            *(_DWORD *)v17 = 56797;
            goto LABEL_27;
          }
        }
        else
        {
          v16 = alloca(v15);
          v17 = (WCHAR *)v34;
          if ( v34 != nullptr )
          {
            v34[0] = 52428;
LABEL_27:
            v17 += 4;
          }
        }
        lpWideCharStr = v17;
        goto LABEL_30;
      }
    }
    return 0;
  }
  lpWideCharStr = nullptr;
  Block = nullptr;
  if ( Locale == 0 )
    Locale = *(_DWORD *)(*(_DWORD *)v9 + 20);
  if ( CodePage == 0 )
    CodePage = *(_DWORD *)(*(_DWORD *)v9 + 4);
  v26 = __ansicp(Locale);
  v36 = v26;
  if ( v26 == -1 )
    return 0;
  if ( v26 == CodePage )
  {
    v29 = LCMapStringA(Locale, dwMapFlags, lpMultiByteStr, (int)cbMultiByte, (LPSTR)lpDestStr, (int)cchDest);
    goto LABEL_78;
  }
  v27 = (WCHAR *)__convertcp(CodePage, v26, (int)lpMultiByteStr, (int)&cbMultiByte, 0, 0);
  lpWideCharStr = v27;
  if ( v27 == nullptr )
    return 0;
  v28 = LCMapStringA(Locale, dwMapFlags, (LPCSTR)v27, (int)cbMultiByte, nullptr, 0);
  cchWideChar = v28;
  if ( v28 != 0 )
  {
    if ( v28 <= 0 )
    {
      v32 = nullptr;
    }
    else
    {
      v30 = v28 + 8;
      if ( v30 > 0x400 )
      {
        v33 = (int *)malloc(v30);
        if ( v33 != nullptr )
        {
          *v33 = 56797;
          v33 += 2;
        }
        v32 = v33;
      }
      else
      {
        v31 = alloca(v30);
        if ( v34 == nullptr )
          goto LABEL_63;
        v34[0] = 52428;
        v32 = &v35;
      }
    }
    if ( v32 != nullptr )
    {
      memset(v32, 0, cchWideChar);
      cchWideChar = LCMapStringA(Locale, dwMapFlags, (LPCSTR)lpWideCharStr, (int)cbMultiByte, (LPSTR)v32, cchWideChar);
      if ( cchWideChar != 0 )
      {
        Block = (void *)__convertcp(v36, CodePage, (int)v32, (int)&cchWideChar, (int)lpDestStr, (int)cchDest);
        v29 = Block != nullptr ? cchWideChar : 0;
      }
      else
      {
        v29 = 0;
      }
      _freea(v32);
      goto LABEL_78;
    }
  }
LABEL_63:
  v29 = 0;
LABEL_78:
  if ( lpWideCharStr != nullptr )
    free(lpWideCharStr);
  if ( Block != nullptr && lpDestStr != Block )
    free(Block);
  return v29;
}

// Address: 0x10011A14
int __cdecl __crtLCMapStringA(
        struct localeinfo_struct *a1,
        LCID Locale,
        DWORD dwMapFlags,
        LPCCH lpMultiByteStr,
        char *cbMultiByte,
        LPWSTR lpDestStr,
        char *cchDest,
        UINT CodePage,
        int a9)
{
  int result; // eax
  _BYTE v10[8]; // [esp+0h] [ebp-10h] BYREF
  int v11; // [esp+8h] [ebp-8h]
  char v12; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v10, a1);
  result = __crtLCMapStringA_stat(Locale, dwMapFlags, lpMultiByteStr, cbMultiByte, lpDestStr, cchDest, CodePage, a9);
  if ( v12 != 0 )
    *(_DWORD *)(v11 + 112) &= ~2u;
  return result;
}

// Address: 0x10011A59
int __cdecl __crtGetStringTypeA_stat(
        DWORD dwInfoType,
        LPCCH lpMultiByteStr,
        const char *cbMultiByte,
        LPWORD lpCharType,
        UINT CodePage,
        LCID Locale,
        int a7)
{
  int v7; // ecx
  int v8; // eax
  void *v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // edi
  unsigned int v13; // eax
  void *v14; // esp
  _DWORD *v15; // eax
  int v16; // eax
  CHAR *v18; // esi
  UINT v19; // eax
  const CHAR *v20; // eax
  BOOL StringTypeA; // edi
  _DWORD v22[3]; // [esp+0h] [ebp-14h] BYREF
  WORD CharType[2]; // [esp+Ch] [ebp-8h] BYREF

  v8 = dword_1001FDC0;
  v9 = nullptr;
  v10 = v7;
  if ( dword_1001FDC0 == 0 )
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, CharType) )
    {
      dword_1001FDC0 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v8 = 2;
      dword_1001FDC0 = 2;
    }
    else
    {
      v8 = dword_1001FDC0;
    }
  }
  if ( v8 != 2 && v8 != 0 )
  {
    if ( v8 != 1 )
      return 0;
LABEL_10:
    *(_DWORD *)CharType = 0;
    if ( CodePage == 0 )
      CodePage = *(_DWORD *)(*(_DWORD *)v10 + 4);
    v11 = MultiByteToWideChar(CodePage, 8 * (a7 != 0) + 1, lpMultiByteStr, (int)cbMultiByte, nullptr, 0);
    v12 = v11;
    if ( v11 == 0 )
      return 0;
    if ( v11 > 0 && (unsigned int)v11 <= 0x7FFFFFF0 )
    {
      v13 = 2 * v11 + 8;
      if ( v13 > 0x400 )
      {
        v15 = malloc(2 * v12 + 8);
        if ( v15 != nullptr )
        {
          *v15 = 56797;
          goto LABEL_20;
        }
      }
      else
      {
        v14 = alloca(v13);
        v15 = v22;
        if ( v22 != nullptr )
        {
          v22[0] = 52428;
LABEL_20:
          v15 += 2;
        }
      }
      v9 = v15;
    }
    if ( v9 != nullptr )
    {
      memset(v9, 0, 2 * v12);
      v16 = MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, (int)cbMultiByte, (LPWSTR)v9, v12);
      if ( v16 != 0 )
        *(_DWORD *)CharType = GetStringTypeW(dwInfoType, (LPCWCH)v9, v16, lpCharType);
      _freea(v9);
      return *(_DWORD *)CharType;
    }
    return 0;
  }
  v18 = nullptr;
  if ( Locale == 0 )
    Locale = *(_DWORD *)(*(_DWORD *)v10 + 20);
  if ( CodePage == 0 )
    CodePage = *(_DWORD *)(*(_DWORD *)v10 + 4);
  v19 = __ansicp(Locale);
  if ( v19 == -1 )
    return 0;
  if ( v19 != CodePage )
  {
    v20 = (const CHAR *)__convertcp(CodePage, v19, (int)lpMultiByteStr, (int)&cbMultiByte, 0, 0);
    v18 = (CHAR *)v20;
    if ( v20 == nullptr )
      return 0;
    lpMultiByteStr = v20;
  }
  StringTypeA = GetStringTypeA(Locale, dwInfoType, lpMultiByteStr, (int)cbMultiByte, lpCharType);
  if ( v18 != nullptr )
    free(v18);
  return StringTypeA;
}

// Address: 0x10011C13
int __cdecl __crtGetStringTypeA(
        struct localeinfo_struct *a1,
        DWORD dwInfoType,
        LPCCH lpMultiByteStr,
        char *cbMultiByte,
        LPWORD lpCharType,
        UINT CodePage,
        LCID Locale,
        int a8)
{
  int result; // eax
  _BYTE v9[8]; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a1);
  result = __crtGetStringTypeA_stat(dwInfoType, lpMultiByteStr, cbMultiByte, lpCharType, CodePage, Locale, a8);
  if ( v11 != 0 )
    *(_DWORD *)(v10 + 112) &= ~2u;
  return result;
}

// Address: 0x10011C55
void __cdecl __free_lc_time(void **a1)
{
  if ( a1 != nullptr )
  {
    free(a1[1]);
    free(a1[2]);
    free(a1[3]);
    free(a1[4]);
    free(a1[5]);
    free(a1[6]);
    free(*a1);
    free(a1[8]);
    free(a1[9]);
    free(a1[10]);
    free(a1[11]);
    free(a1[12]);
    free(a1[13]);
    free(a1[7]);
    free(a1[14]);
    free(a1[15]);
    free(a1[16]);
    free(a1[17]);
    free(a1[18]);
    free(a1[19]);
    free(a1[20]);
    free(a1[21]);
    free(a1[22]);
    free(a1[23]);
    free(a1[24]);
    free(a1[25]);
    free(a1[26]);
    free(a1[27]);
    free(a1[28]);
    free(a1[29]);
    free(a1[30]);
    free(a1[31]);
    free(a1[32]);
    free(a1[33]);
    free(a1[34]);
    free(a1[35]);
    free(a1[36]);
    free(a1[37]);
    free(a1[38]);
    free(a1[39]);
    free(a1[40]);
    free(a1[41]);
    free(a1[42]);
  }
}

// Address: 0x10011DEA
void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)a1 != off_1001EE08 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_1001EE0C )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_1001EE10 )
      free(v1);
  }
}

// Address: 0x10011E2F
void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_1001EE14 )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_1001EE18 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_1001EE1C )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_1001EE20 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_1001EE24 )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_1001EE28 )
      free(*(void **)(a1 + 32));
    v1 = *(void **)(a1 + 36);
    if ( v1 != off_1001EE2C )
      free(v1);
  }
}

// Address: 0x10011EBD
errno_t __cdecl strcat_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  rsize_t v3; // edi
  errno_t v4; // esi
  const char *v6; // esi
  char *v7; // edx
  char v8; // cl

  if ( Destination == nullptr )
    goto LABEL_3;
  v3 = SizeInBytes;
  if ( SizeInBytes == 0 )
    goto LABEL_3;
  v6 = Source;
  if ( Source != nullptr )
  {
    v7 = Destination;
    do
    {
      if ( *v7 == 0 )
        break;
      ++v7;
      --v3;
    }
    while ( v3 != 0 );
    if ( v3 != 0 )
    {
      do
      {
        v8 = *v6;
        *v7++ = *v6++;
        if ( v8 == 0 )
          break;
        --v3;
      }
      while ( v3 != 0 );
      if ( v3 == 0 )
      {
        *Destination = 0;
        *_errno() = 34;
        v4 = 34;
        goto LABEL_4;
      }
      return 0;
    }
  }
  *Destination = 0;
LABEL_3:
  v4 = 22;
  *_errno() = 22;
LABEL_4:
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return v4;
}

// Address: 0x10011F40
size_t __cdecl strcspn(const char *Str, const char *Control)
{
  unsigned int v2; // eax
  size_t v5; // ecx
  signed __int32 v7[9]; // [esp+0h] [ebp-24h] BYREF

  v2 = 0;
  memset(v7, 0, 32);
  while ( 1 )
  {
    LOBYTE(v2) = *Control;
    if ( *Control == 0 )
      break;
    ++Control;
    _bittestandset(v7, v2);
  }
  v5 = -1;
  do
  {
    ++v5;
    LOBYTE(v2) = *Str;
    if ( *Str == 0 )
      break;
    ++Str;
  }
  while ( !_bittest(v7, v2) );
  return v5;
}

// Address: 0x10011F86
errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  rsize_t v5; // edi
  errno_t v6; // esi
  const char *v7; // edx
  char *v8; // eax
  char v9; // cl
  char v10; // cl

  if ( MaxCount != 0 )
  {
    if ( Destination == nullptr )
    {
LABEL_7:
      v6 = 22;
      *_errno() = 22;
LABEL_8:
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return v6;
    }
  }
  else if ( Destination == nullptr )
  {
    if ( SizeInBytes == 0 )
      return 0;
    goto LABEL_7;
  }
  v5 = SizeInBytes;
  if ( SizeInBytes == 0 )
    goto LABEL_7;
  if ( MaxCount == 0 )
  {
    *Destination = 0;
    return 0;
  }
  v7 = Source;
  if ( Source == nullptr )
  {
    *Destination = 0;
    goto LABEL_7;
  }
  v8 = Destination;
  if ( MaxCount == -1 )
  {
    do
    {
      v9 = *v7;
      *v8++ = *v7++;
      if ( v9 == 0 )
        break;
      --v5;
    }
    while ( v5 != 0 );
  }
  else
  {
    do
    {
      v10 = *v7;
      *v8++ = *v7++;
      if ( v10 == 0 )
        break;
      if ( --v5 == 0 )
        break;
      --MaxCount;
    }
    while ( MaxCount != 0 );
    if ( MaxCount == 0 )
      *v8 = 0;
  }
  if ( v5 != 0 )
    return 0;
  if ( MaxCount != -1 )
  {
    *Destination = 0;
    *_errno() = 34;
    v6 = 34;
    goto LABEL_8;
  }
  Destination[SizeInBytes - 1] = 0;
  return 80;
}

// Address: 0x10012040
char *__cdecl strpbrk(const char *Str, const char *Control)
{
  char *result; // eax
  signed __int32 v5[9]; // [esp+0h] [ebp-24h] BYREF

  result = nullptr;
  memset(v5, 0, 32);
  while ( 1 )
  {
    LOBYTE(result) = *Control;
    if ( *Control == 0 )
      break;
    ++Control;
    _bittestandset(v5, (unsigned int)result);
  }
  while ( 1 )
  {
    LOBYTE(result) = *Str;
    if ( *Str == 0 )
      break;
    ++Str;
    if ( _bittest(v5, (unsigned int)result) )
      return (char *)(Str - 1);
  }
  return result;
}

// Address: 0x10012080
int __cdecl _iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  _DWORD v4[2]; // [esp+0h] [ebp-14h] BYREF
  int v5; // [esp+8h] [ebp-Ch]
  char v6; // [esp+Ch] [ebp-8h]
  WORD CharType[2]; // [esp+10h] [ebp-4h] BYREF

  if ( C == 0xFFFF )
  {
    *(_DWORD *)CharType = 0;
  }
  else if ( C >= 0x100u )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v4, (struct localeinfo_struct *)Locale);
    if ( __crtGetStringTypeW((struct localeinfo_struct *)v4, 1u, &C, 1, CharType) == 0 )
      *(_DWORD *)CharType = 0;
    if ( v6 != 0 )
      *(_DWORD *)(v5 + 112) &= ~2u;
  }
  else
  {
    *(_DWORD *)CharType = (unsigned __int16)(Type & *((_WORD *)off_1001ED44 + C));
  }
  return Type & CharType[0];
}

// Address: 0x1001210A
int __cdecl sub_1001210A(int a1, int a2, int a3)
{
  PVOID v3; // ebx
  HMODULE LibraryA; // eax
  HMODULE v5; // edi
  int (__stdcall *MessageBoxA)(HWND, LPCSTR, LPCSTR, UINT); // eax
  HWND (__stdcall *GetActiveWindow)(); // eax
  HWND (__stdcall *GetLastActivePopup)(HWND); // eax
  BOOL (__stdcall *GetUserObjectInformationA)(HANDLE, int, PVOID, DWORD, LPDWORD); // eax
  HWINSTA (__stdcall *GetProcessWindowStation)(); // eax
  int (*v11)(void); // esi
  PVOID v12; // eax
  int (__stdcall *v13)(int, int, _BYTE *, int, _BYTE *); // edi
  int v14; // eax
  int (*v15)(void); // eax
  int (__stdcall *v16)(int); // eax
  int (__stdcall *v17)(int, int, int, int); // eax
  _BYTE v19[12]; // [esp+10h] [ebp-14h] BYREF
  _BYTE v20[4]; // [esp+1Ch] [ebp-8h] BYREF
  int v21; // [esp+20h] [ebp-4h]

  v21 = 0;
  v3 = _encoded_null();
  if ( dword_1001FDC8 == 0 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( MessageBoxA == nullptr )
      return 0;
    dword_1001FDC8 = (int)_encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v5, "GetActiveWindow");
    dword_1001FDCC = (int)_encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v5, "GetLastActivePopup");
    dword_1001FDD0 = (int)_encode_pointer(GetLastActivePopup);
    GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                          v5,
                                                                                          "GetUserObjectInformationA");
    dword_1001FDD8 = (int)_encode_pointer(GetUserObjectInformationA);
    if ( dword_1001FDD8 != 0 )
    {
      GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v5, "GetProcessWindowStation");
      dword_1001FDD4 = (int)_encode_pointer(GetProcessWindowStation);
    }
  }
  if ( (PVOID)dword_1001FDD4 == v3
    || (PVOID)dword_1001FDD8 == v3
    || (v11 = (int (*)(void))_decode_pointer((void *)dword_1001FDD4),
        v12 = _decode_pointer((void *)dword_1001FDD8),
        v13 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v12,
        v11 == nullptr)
    || v12 == nullptr
    || (v14 = v11()) != 0 && v13(v14, 1, v19, 12, v20) != 0 && (v19[8] & 1) != 0 )
  {
    if ( (PVOID)dword_1001FDCC != v3 )
    {
      v15 = (int (*)(void))_decode_pointer((void *)dword_1001FDCC);
      if ( v15 != nullptr )
      {
        v21 = v15();
        if ( v21 != 0 && (PVOID)dword_1001FDD0 != v3 )
        {
          v16 = (int (__stdcall *)(int))_decode_pointer((void *)dword_1001FDD0);
          if ( v16 != nullptr )
            v21 = v16(v21);
        }
      }
    }
  }
  else
  {
    a3 |= 0x200000u;
  }
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_1001FDC8);
  if ( v17 != nullptr )
    return v17(v21, a1, a2, a3);
  return 0;
}

// Address: 0x10012273
int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_1001F400;
      dword_1001F400 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_1001F400;
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x100122BE
int __cdecl x_ismbbtype_l(struct localeinfo_struct *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  int result; // eax
  _DWORD v5[2]; // [esp+0h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-8h]
  char v7; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v5, a1);
  if ( (a4 & *(_BYTE *)(v5[1] + a2 + 29)) != 0
    || (a3 == 0 ? (result = 0) : (result = (unsigned __int16)(a3 & *(_WORD *)(*(_DWORD *)(v5[0] + 200) + 2 * a2))),
        result != 0) )
  {
    result = 1;
  }
  if ( v7 != 0 )
    *(_DWORD *)(v6 + 112) &= ~2u;
  return result;
}

// Address: 0x10012311
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x10012329
// Microsoft VisualC 2-14/net runtime
BOOL __cdecl unknown_libname_2(int a1)
{
  return a1 != 0;
}

// Address: 0x1001233B
void __cdecl __noreturn abort()
{
  int v0; // esi
  PVOID v1; // eax
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // kr00_4
  int v5; // [esp-4h] [ebp-330h]
  _DWORD v6[20]; // [esp+4h] [ebp-328h] BYREF
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+54h] [ebp-2D8h] BYREF
  int v8; // [esp+5Ch] [ebp-2D0h] BYREF
  __int16 v9; // [esp+E8h] [ebp-244h]
  __int16 v10; // [esp+ECh] [ebp-240h]
  __int16 v11; // [esp+F0h] [ebp-23Ch]
  __int16 v12; // [esp+F4h] [ebp-238h]
  int v13; // [esp+FCh] [ebp-230h]
  int v14; // [esp+104h] [ebp-228h]
  int v15; // [esp+108h] [ebp-224h]
  PVOID v16; // [esp+10Ch] [ebp-220h]
  int v17; // [esp+110h] [ebp-21Ch]
  void *v18; // [esp+114h] [ebp-218h]
  __int16 v19; // [esp+118h] [ebp-214h]
  unsigned int v20; // [esp+11Ch] [ebp-210h]
  void **v21; // [esp+120h] [ebp-20Ch]
  __int16 v22; // [esp+124h] [ebp-208h]
  int savedregs; // [esp+32Ch] [ebp+0h]
  void *retaddr; // [esp+330h] [ebp+4h] BYREF

  if ( (byte_1001EE50 & 1) != 0 )
    _NMSG_WRITE(10);
  v1 = sub_100102BE();
  if ( v1 != nullptr )
  {
    v1 = (PVOID)raise(22);
    v3 = v5;
  }
  if ( (byte_1001EE50 & 2) != 0 )
  {
    v16 = v1;
    v15 = v3;
    v14 = v2;
    v13 = v0;
    v22 = __SS__;
    v19 = __CS__;
    v12 = __DS__;
    v11 = __ES__;
    v10 = __FS__;
    v9 = __GS__;
    v4 = __readeflags();
    v20 = v4;
    v21 = &retaddr;
    v8 = 65537;
    v18 = retaddr;
    v17 = savedregs;
    memset(v6, 0, sizeof(v6));
    ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v6;
    v6[0] = 1073741845;
    v6[3] = retaddr;
    ExceptionInfo.ContextRecord = (PCONTEXT)&v8;
    SetUnhandledExceptionFilter(nullptr);
    UnhandledExceptionFilter(&ExceptionInfo);
  }
  _exit(3);
}

// Address: 0x10012454
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x10012474
int __cdecl _unwind_handler(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int result; // eax

  result = 1;
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    _local_unwind2(*(_DWORD *)(a5 + 36), *(_DWORD *)(a5 + 40));
    *a4 = a2;
    return 3;
  }
  return result;
}

// Address: 0x100124B9
int __cdecl _local_unwind2(int a1, unsigned int a2)
{
  int result; // eax
  int v3; // ebx
  unsigned int v4; // esi
  int v5; // esi
  int v6; // ecx
  int v7; // [esp-4h] [ebp-24h]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+0h] [ebp-20h]

  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  while ( 1 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 8);
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 == -1 || a2 != -1 && v4 <= a2 )
      break;
    v5 = 3 * v4;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(v3 + 4 * v5);
    if ( *(_DWORD *)(v3 + 4 * v5 + 4) == 0 )
    {
      _NLG_Notify(257);
      _NLG_Call(v6, v7, ExceptionList);
    }
  }
  return result;
}

// Address: 0x1001253D
int __cdecl _abnormal_termination()
{
  int result; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ecx

  result = 0;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  if ( (int (__cdecl *)(int, int, int, _DWORD *, int))ExceptionList->Handler == _unwind_handler )
    return ExceptionList[1].Next == *((struct _EXCEPTION_REGISTRATION_RECORD **)ExceptionList[1].Handler + 3);
  return result;
}

// Address: 0x10012560
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x10012574);
}

// Address: 0x10012569
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_1001EE5C = a3;
  unk_1001EE58 = result;
  unk_1001EE60 = a2;
  return result;
}

// Address: 0x10012588
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x10012590
char *__cdecl strrchr(const char *Str, int Ch)
{
  unsigned int v2; // ecx
  const char *v3; // edi
  bool v4; // zf
  char *v5; // edi

  v2 = strlen(Str) + 1;
  v3 = &Str[v2 - 1];
  do
  {
    if ( v2 == 0 )
      break;
    v4 = *v3-- == (unsigned __int8)Ch;
    --v2;
  }
  while ( !v4 );
  v5 = (char *)(v3 + 1);
  if ( *v5 == (_BYTE)Ch )
    return v5;
  else
    return nullptr;
}

// Address: 0x100125BD
int __cdecl _isdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale);
  if ( *((int *)v3.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)v3.locinfo + 50) + 2 * C) & 4;
  else
    result = _isctype_l(C, 4, &v3);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x1001260E
int __cdecl isdigit(int C)
{
  if ( dword_1001F7A4 != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_1001E808[C] & 4;
}

// Address: 0x1001263C
int __cdecl _tolower_l(int C, _locale_t Locale)
{
  struct __crt_locale_data *locinfo; // ecx
  int v4; // eax
  int result; // eax
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  __crt_locale_pointers Localea; // [esp+8h] [ebp-18h] BYREF
  int v10; // [esp+10h] [ebp-10h]
  char v11; // [esp+14h] [ebp-Ch]
  WCHAR DestStr; // [esp+18h] [ebp-8h] BYREF
  CHAR MultiByteStr; // [esp+1Ch] [ebp-4h] BYREF
  char v14; // [esp+1Dh] [ebp-3h]
  char v15; // [esp+1Eh] [ebp-2h]
  int Ca; // [esp+28h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( (unsigned int)C >= 0x100 )
  {
    if ( *((int *)Localea.locinfo + 43) > 1 && (Ca = C >> 8, _isleadbyte_l(BYTE1(C), &Localea) != 0) )
    {
      MultiByteStr = Ca;
      v14 = C;
      v15 = 0;
      v6 = 2;
    }
    else
    {
      *_errno() = 42;
      MultiByteStr = C;
      v14 = 0;
      v6 = 1;
    }
    v7 = __crtLCMapStringA(
           (struct localeinfo_struct *)&Localea,
           *((_DWORD *)Localea.locinfo + 5),
           0x100u,
           &MultiByteStr,
           (char *)v6,
           &DestStr,
           (char *)3,
           *((_DWORD *)Localea.locinfo + 1),
           1);
    if ( v7 != 0 )
    {
      v8 = v7 == 1;
      result = (unsigned __int8)DestStr;
      if ( !v8 )
        result = HIBYTE(DestStr) | ((unsigned __int8)DestStr << 8);
      goto LABEL_17;
    }
  }
  else
  {
    locinfo = Localea.locinfo;
    if ( *((int *)Localea.locinfo + 43) <= 1 )
    {
      v4 = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 1;
    }
    else
    {
      v4 = _isctype_l(C, 1, &Localea);
      locinfo = Localea.locinfo;
    }
    if ( v4 != 0 )
    {
      result = *(unsigned __int8 *)(*((_DWORD *)locinfo + 51) + C);
LABEL_17:
      if ( v11 != 0 )
        *(_DWORD *)(v10 + 112) &= ~2u;
      return result;
    }
  }
  if ( v11 != 0 )
    *(_DWORD *)(v10 + 112) &= ~2u;
  return C;
}

// Address: 0x10012751
int __cdecl tolower(int C)
{
  int result; // eax

  if ( dword_1001F7A4 != 0 )
    return _tolower_l(C, nullptr);
  result = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return result;
}

// Address: 0x1001277D
int __cdecl sub_1001277D(int a1, int a2, struct localeinfo_struct *a3)
{
  int v3; // eax
  _BYTE v6[4]; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+18h] [ebp-1Ch]
  char v9; // [esp+1Ch] [ebp-18h]
  int v10; // [esp+20h] [ebp-14h]
  _BYTE v11[12]; // [esp+24h] [ebp-10h] BYREF

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a3);
  v10 = __strgtold12_l(v11, v6, a2, 0, 0, 0, 0, v7);
  v3 = sub_100139AF(v11, a1);
  if ( (v10 & 3) != 0 )
  {
    if ( (v10 & 1) != 0 )
      goto LABEL_8;
    if ( (v10 & 2) != 0 )
      goto LABEL_3;
  }
  else
  {
    if ( v3 == 1 )
    {
LABEL_3:
      if ( v9 != 0 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 3;
    }
    if ( v3 == 2 )
    {
LABEL_8:
      if ( v9 != 0 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 4;
    }
  }
  if ( v9 != 0 )
    *(_DWORD *)(v8 + 112) &= ~2u;
  return 0;
}

// Address: 0x10012825
int __cdecl sub_10012825(int a1, int a2, struct localeinfo_struct *a3)
{
  int v3; // eax
  _BYTE v6[4]; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+18h] [ebp-1Ch]
  char v9; // [esp+1Ch] [ebp-18h]
  int v10; // [esp+20h] [ebp-14h]
  _BYTE v11[12]; // [esp+24h] [ebp-10h] BYREF

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a3);
  v10 = __strgtold12_l(v11, v6, a2, 0, 0, 0, 0, v7);
  v3 = sub_10013EF3(v11, a1);
  if ( (v10 & 3) != 0 )
  {
    if ( (v10 & 1) != 0 )
      goto LABEL_8;
    if ( (v10 & 2) != 0 )
      goto LABEL_3;
  }
  else
  {
    if ( v3 == 1 )
    {
LABEL_3:
      if ( v9 != 0 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 3;
    }
    if ( v3 == 2 )
    {
LABEL_8:
      if ( v9 != 0 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 4;
    }
  }
  if ( v9 != 0 )
    *(_DWORD *)(v8 + 112) &= ~2u;
  return 0;
}

// Address: 0x100128CD
int __cdecl _fptostr(char *a1, unsigned int a2, int a3, int a4)
{
  int v4; // ecx
  char *v5; // edi
  int v6; // esi
  int v8; // edx
  int v9; // eax
  char *v10; // eax
  char v11; // cl
  size_t v12; // eax

  v4 = a4;
  v5 = *(char **)(a4 + 12);
  if ( a1 == nullptr || a2 == 0 )
  {
    v6 = 22;
    *_errno() = 22;
LABEL_3:
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return v6;
  }
  v8 = a3;
  *a1 = 0;
  if ( a3 <= 0 )
    v9 = 0;
  else
    v9 = a3;
  if ( a2 <= v9 + 1 )
  {
    *_errno() = 34;
    v6 = 34;
    goto LABEL_3;
  }
  *a1 = 48;
  v10 = a1 + 1;
  if ( a3 > 0 )
  {
    do
    {
      v11 = *v5;
      if ( *v5 != 0 )
        ++v5;
      else
        v11 = 48;
      *v10++ = v11;
      --v8;
    }
    while ( v8 > 0 );
    v4 = a4;
  }
  *v10 = 0;
  if ( v8 >= 0 && *v5 >= 53 )
  {
    while ( *--v10 == 57 )
      *v10 = 48;
    ++*v10;
  }
  if ( *a1 == 49 )
  {
    ++*(_DWORD *)(v4 + 4);
  }
  else
  {
    v12 = strlen(a1 + 1);
    memcpy(a1, a1 + 1, v12 + 1);
  }
  return 0;
}

// Address: 0x1001298C
int *__cdecl sub_1001298C(int *a1, int *a2)
{
  int v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  __int16 v7; // bx
  __int16 v8; // di
  int *result; // eax
  __int16 v10; // cx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // [esp+Ch] [ebp-4h]
  __int16 v14; // [esp+1Ch] [ebp+Ch]

  v3 = (*((unsigned __int16 *)a2 + 3) >> 4) & 0x7FF;
  v14 = *((_WORD *)a2 + 3) & 0x8000;
  v4 = a2[1];
  v5 = *a2;
  v6 = v4 & 0xFFFFF;
  v13 = 0x80000000;
  if ( (_WORD)v3 != 0 )
  {
    if ( (unsigned __int16)v3 == 2047 )
    {
      v8 = 0x7FFF;
      goto LABEL_10;
    }
    v7 = v3 + 15360;
  }
  else
  {
    if ( v6 == 0 && v5 == 0 )
    {
      result = a1;
      v10 = v14;
      a1[1] = 0;
      *a1 = 0;
      goto LABEL_14;
    }
    v7 = 15361;
    v13 = 0;
  }
  v8 = v7;
LABEL_10:
  v11 = v13 | (v6 << 11) | (v5 >> 21);
  result = a1;
  v12 = v5 << 11;
  while ( 1 )
  {
    *a1 = v12;
    a1[1] = v11;
    if ( v11 < 0 )
      break;
    v11 = *(__int64 *)a1 >> 31;
    v12 = 2 * *a1;
    --v8;
  }
  v10 = v8 | v14;
LABEL_14:
  *((_WORD *)result + 4) = v10;
  return result;
}

// Address: 0x10012A44
_DWORD *__cdecl _fltout2(int a1, int a2, _DWORD *a3, char *a4, rsize_t SizeInBytes)
{
  _DWORD *v5; // ebx
  __int16 v7; // [esp-10h] [ebp-4Ch]
  char *Destination; // [esp+Ch] [ebp-30h]
  __int16 v9; // [esp+10h] [ebp-2Ch] BYREF
  char v10; // [esp+12h] [ebp-2Ah]
  char Source[24]; // [esp+14h] [ebp-28h] BYREF
  int v12[3]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = a3;
  Destination = a4;
  sub_1001298C(v12, &a1);
  v7 = v12[2];
  v5[2] = sub_10014B2F(v12[0], v12[1], v7, 17, 0, &v9);
  *v5 = v10;
  v5[1] = v9;
  if ( strcpy_s(Destination, SizeInBytes, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v5[3] = Destination;
  return v5;
}

// Address: 0x10012AE0
int __stdcall _alldvrm(unsigned __int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // eax
  unsigned __int64 v4; // rtt
  int v5; // esi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  int result; // eax

  v2 = 0;
  if ( (a1 & 0x8000000000000000uLL) != 0LL )
  {
    v2 = 1;
    HIDWORD(a1) = -HIDWORD(a1) - ((_DWORD)a1 != 0);
    LODWORD(a1) = -(int)a1;
  }
  v3 = HIDWORD(a2);
  if ( a2 < 0 )
  {
    ++v2;
    v3 = -HIDWORD(a2) - ((_DWORD)a2 != 0);
    HIDWORD(a2) = v3;
    LODWORD(a2) = -(int)a2;
  }
  if ( v3 != 0 )
  {
    v6 = __PAIR64__(v3, a2);
    v7 = a1;
    do
    {
      v6 >>= 1;
      v7 >>= 1;
    }
    while ( HIDWORD(v6) != 0 );
    v5 = v7 / (unsigned int)v6;
    v8 = (unsigned int)v5 * (unsigned __int64)(unsigned int)a2;
    if ( __CFADD__(HIDWORD(a2) * v5, HIDWORD(v8))
      || (HIDWORD(v8) = (a2 * (unsigned __int64)(unsigned int)v5) >> 32, v8 > a1) )
    {
      --v5;
    }
  }
  else
  {
    LODWORD(v4) = a1;
    HIDWORD(v4) = HIDWORD(a1) % (unsigned int)a2;
    v5 = v4 / (unsigned int)a2;
  }
  result = v5;
  if ( v2 == 1 )
    return -v5;
  return result;
}

// Address: 0x10012BC0
unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}

// Address: 0x10012BDF
int _fptrap()
{
  return _amsg_exit(2);
}

// Address: 0x10012BE8
errno_t __cdecl _controlfp_s(unsigned int *CurrentState, unsigned int NewValue, unsigned int Mask)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  if ( (Mask & 0xFFF7FFFF & NewValue & 0xFCF0FCE0) != 0 )
  {
    if ( CurrentState != nullptr )
      *CurrentState = _control87(0, 0);
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  else
  {
    v4 = Mask & 0xFFF7FFFF;
    if ( CurrentState != nullptr )
      *CurrentState = _control87(NewValue, v4);
    else
      _control87(NewValue, v4);
    return 0;
  }
}

// Address: 0x10012C60
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x10012C94
int __cdecl atol(const char *String)
{
  return strtol(String, nullptr, 10);
}

// Address: 0x10012CAA
int __cdecl _free_osfhnd(int a1)
{
  int *v1; // edi
  int v2; // esi
  _DWORD *v3; // eax

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = &dword_10020EE0[a1 >> 5], v2 = (a1 & 0x1F) << 6, ((v3 = (_DWORD *)(v2 + *v1))[1] & 1) == 0)
    || *v3 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_1001F404 == 1 )
    {
      if ( a1 != 0 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, nullptr);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, nullptr);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, nullptr);
      }
    }
    *(_DWORD *)(v2 + *v1) = -1;
    return 0;
  }
}

// Address: 0x10012D30
intptr_t __cdecl _get_osfhandle(int FileHandle)
{
  intptr_t *v2; // eax

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  else if ( FileHandle >= 0
         && FileHandle < uNumber
         && ((v2 = (intptr_t *)(dword_10020EE0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6)))[1] & 1) != 0 )
  {
    return *v2;
  }
  else
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x10012DA7
BOOL __cdecl __lock_fhandle(int a1)
{
  int v1; // esi
  BOOL inited; // [esp+10h] [ebp-1Ch]

  v1 = dword_10020EE0[a1 >> 5] + ((a1 & 0x1F) << 6);
  inited = true;
  if ( *(_DWORD *)(v1 + 8) == 0 )
  {
    _lock(10);
    if ( *(_DWORD *)(v1 + 8) == 0 )
    {
      inited = __crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(v1 + 12), 0xFA0u);
      ++*(_DWORD *)(v1 + 8);
    }
    _unlock(10);
  }
  if ( inited )
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_10020EE0[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
  return inited;
}

// Address: 0x10012E47
void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_10020EE0[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}

// Address: 0x10012E6E
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( dword_1001EE70 == 0 )
    goto LABEL_10;
  if ( hObject == (HANDLE)-2 )
    __initconout();
  if ( hObject == (HANDLE)-1 )
    return -1;
  if ( !WriteConsoleW(hObject, &Character, 1u, &NumberOfCharsWritten, nullptr) )
  {
    if ( dword_1001EE70 != 2 || GetLastError() != 120 )
      return -1;
    dword_1001EE70 = 0;
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP();
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, &Character, 1, MultiByteStr, 5, nullptr, nullptr);
    if ( hObject != (HANDLE)-1 && WriteConsoleA(hObject, MultiByteStr, v3, &NumberOfCharsWritten, nullptr) )
      return Character;
    return -1;
  }
  dword_1001EE70 = 1;
  return Character;
}

// Address: 0x10012F33
int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // esi
  int *v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  _lock(1);
  for ( i = 3; i < dword_10020EC0; ++i )
  {
    v1 = 4 * i;
    v2 = (int *)((char *)dword_1001FEB4 + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 && fclose((FILE *)v3) != -1 )
        ++v5;
      if ( i >= 20 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_1001FEB4 + v1) + 32));
        free(*(void **)((char *)dword_1001FEB4 + v1));
        *(_DWORD *)((char *)dword_1001FEB4 + v1) = 0;
      }
    }
  }
  _unlock(1);
  return v5;
}

// Address: 0x10012FD2
int __cdecl _flush(FILE *Stream)
{
  int flag; // eax
  int v2; // ebx
  char *base; // eax
  char *v4; // edi
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  char *v9; // [esp-Ch] [ebp-14h]
  char *v10; // [esp-8h] [ebp-10h]

  flag = Stream->_flag;
  v2 = 0;
  if ( (flag & 3) == 2 && (flag & 0x108) != 0 )
  {
    base = Stream->_base;
    v4 = (char *)(Stream->_ptr - base);
    if ( (int)v4 > 0 )
    {
      v10 = (char *)(Stream->_ptr - base);
      v9 = Stream->_base;
      v5 = _fileno(Stream);
      if ( (char *)_write(v5, v9, (unsigned int)v10) == v4 )
      {
        v6 = Stream->_flag;
        if ( (v6 & 0x80u) != 0 )
          Stream->_flag = v6 & 0xFFFFFFFD;
      }
      else
      {
        Stream->_flag |= 0x20u;
        v2 = -1;
      }
    }
  }
  v7 = Stream->_base;
  Stream->_cnt = 0;
  Stream->_ptr = v7;
  return v2;
}

// Address: 0x1001303A
int __cdecl _fflush_nolock(FILE *Stream)
{
  int v2; // eax

  if ( Stream == nullptr )
    return flsall(0);
  if ( _flush(Stream) != 0 )
    return -1;
  if ( (Stream->_flag & 0x4000) == 0 )
    return 0;
  v2 = _fileno(Stream);
  return -(_commit(v2) != 0);
}

// Address: 0x10013082
int __cdecl flsall(int a1)
{
  int i; // esi
  int *v2; // eax
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // [esp+10h] [ebp-24h]
  int v7; // [esp+18h] [ebp-1Ch]

  v7 = 0;
  v6 = 0;
  _lock(1);
  for ( i = 0; i < dword_10020EC0; ++i )
  {
    v2 = (int *)((char *)dword_1001FEB4 + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 )
      {
        _lock_file2(i, v3);
        v4 = *(_DWORD *)(*((_DWORD *)dword_1001FEB4 + i) + 12);
        if ( (v4 & 0x83) != 0 )
        {
          if ( a1 == 1 )
          {
            if ( _fflush_nolock(*((FILE **)dword_1001FEB4 + i)) != -1 )
              ++v7;
          }
          else if ( a1 == 0 && (v4 & 2) != 0 && _fflush_nolock(*((FILE **)dword_1001FEB4 + i)) == -1 )
          {
            v6 = -1;
          }
        }
        _unlock_file2(i, *((_DWORD *)dword_1001FEB4 + i));
      }
    }
  }
  _unlock(1);
  result = v7;
  if ( a1 != 1 )
    return v6;
  return result;
}

// Address: 0x1001315C
int sub_1001315C()
{
  return flsall(1);
}

// Address: 0x10013165
int __cdecl _flswbuf(unsigned __int16 a1, FILE *FileHandle)
{
  int flag; // eax
  int v5; // eax
  unsigned int v6; // eax
  char *base; // eax
  char *ptr; // edi
  signed int v9; // edi
  _BYTE *v10; // eax
  __int64 v11; // rax
  unsigned __int16 v12; // bx
  int Buf; // [esp+4h] [ebp-4h] BYREF
  int FileHandlea; // [esp+14h] [ebp+Ch]

  FileHandlea = _fileno(FileHandle);
  flag = FileHandle->_flag;
  if ( (flag & 0x82) == 0 )
  {
    *_errno() = 9;
LABEL_3:
    FileHandle->_flag |= 0x20u;
    return 0xFFFF;
  }
  if ( (flag & 0x40) != 0 )
  {
    *_errno() = 34;
    goto LABEL_3;
  }
  if ( (flag & 1) != 0 )
  {
    FileHandle->_cnt = 0;
    if ( (flag & 0x10) == 0 )
    {
      FileHandle->_flag = flag | 0x20;
      return 0xFFFF;
    }
    FileHandle->_ptr = FileHandle->_base;
    FileHandle->_flag = flag & 0xFFFFFFFE;
  }
  v5 = FileHandle->_flag;
  FileHandle->_cnt = 0;
  Buf = 0;
  v6 = v5 & 0xFFFFFFED | 2;
  FileHandle->_flag = v6;
  if ( (v6 & 0x10C) == 0
    && (FileHandle != (FILE *)(sub_10010F62() + 8) && FileHandle != (FILE *)(sub_10010F62() + 16)
     || _isatty(FileHandlea) == 0) )
  {
    _getbuf(FileHandle);
  }
  if ( (FileHandle->_flag & 0x108) != 0 )
  {
    base = FileHandle->_base;
    ptr = FileHandle->_ptr;
    FileHandle->_ptr = base + 2;
    v9 = ptr - base;
    FileHandle->_cnt = FileHandle->_bufsiz - 2;
    if ( v9 <= 0 )
    {
      if ( FileHandlea == -1 || FileHandlea == -2 )
        v10 = &unk_1001EA08;
      else
        v10 = (_BYTE *)(dword_10020EE0[FileHandlea >> 5] + ((FileHandlea & 0x1F) << 6));
      if ( (v10[4] & 0x20) != 0 )
      {
        v11 = _lseeki64(FileHandlea, 0, 2);
        if ( (HIDWORD(v11) & (unsigned int)v11) == 0xFFFFFFFF )
          goto LABEL_28;
      }
    }
    else
    {
      Buf = _write(FileHandlea, base, v9);
    }
    v12 = a1;
    *(_WORD *)FileHandle->_base = a1;
  }
  else
  {
    v9 = 2;
    v12 = a1;
    LOWORD(Buf) = a1;
    Buf = _write(FileHandlea, &Buf, 2u);
  }
  if ( Buf != v9 )
  {
LABEL_28:
    FileHandle->_flag |= 0x20u;
    return 0xFFFF;
  }
  return v12;
}

// Address: 0x100132D9
errno_t __cdecl _wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  char *v5; // esi
  size_t v6; // edi
  errno_t result; // eax
  errno_t v8; // esi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-8h]
  char v12; // [esp+18h] [ebp-4h]

  v5 = MbCh;
  v6 = SizeInBytes;
  if ( MbCh == nullptr && SizeInBytes != 0 )
  {
    if ( SizeConverted != nullptr )
      *SizeConverted = 0;
    return 0;
  }
  if ( SizeConverted != nullptr )
    *SizeConverted = -1;
  if ( v6 > 0x7FFFFFFF )
  {
    v8 = 22;
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return v8;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v10, (struct localeinfo_struct *)Locale);
  if ( *(_DWORD *)(v10 + 20) == 0 )
  {
    if ( WCh > 0xFFu )
    {
      if ( v5 != nullptr && v6 != 0 )
        memset(v5, 0, v6);
      goto LABEL_16;
    }
    if ( v5 != nullptr )
    {
      if ( v6 == 0 )
      {
LABEL_21:
        v8 = 34;
        *_errno() = 34;
        _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
        if ( v12 != 0 )
          *(_DWORD *)(v11 + 112) &= ~2u;
        return v8;
      }
      *v5 = WCh;
    }
    if ( SizeConverted != nullptr )
      *SizeConverted = 1;
LABEL_26:
    if ( v12 != 0 )
      *(_DWORD *)(v11 + 112) &= ~2u;
    return 0;
  }
  MbCh = nullptr;
  v9 = WideCharToMultiByte(*(_DWORD *)(v10 + 4), 0, &WCh, 1, v5, v6, nullptr, (LPBOOL)&MbCh);
  if ( v9 != 0 )
  {
    if ( MbCh == nullptr )
    {
      if ( SizeConverted != nullptr )
        *SizeConverted = v9;
      goto LABEL_26;
    }
  }
  else if ( GetLastError() == 122 )
  {
    if ( v5 != nullptr && v6 != 0 )
      memset(v5, 0, v6);
    goto LABEL_21;
  }
LABEL_16:
  *_errno() = 42;
  result = *_errno();
  if ( v12 != 0 )
    *(_DWORD *)(v11 + 112) &= ~2u;
  return result;
}

// Address: 0x10013445
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x10013462
unsigned int __cdecl strtoxl(struct localeinfo_struct *a1, const char *a2, const char **a3, unsigned int a4, int a5)
{
  struct __crt_locale_data *locinfo; // ecx
  unsigned __int8 v7; // bl
  const char *i; // edi
  int v9; // eax
  _BYTE *v10; // edi
  int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // ecx
  const char *v15; // edi
  __crt_locale_pointers Locale; // [esp+8h] [ebp-14h] BYREF
  int v17; // [esp+10h] [ebp-Ch]
  char v18; // [esp+14h] [ebp-8h]
  unsigned int v19; // [esp+18h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a1);
  if ( a3 != nullptr )
    *a3 = a2;
  if ( a2 == nullptr || a4 != 0 && ((int)a4 < 2 || (int)a4 > 36) )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v18 != 0 )
      *(_DWORD *)(v17 + 112) &= ~2u;
    return 0;
  }
  locinfo = Locale.locinfo;
  v7 = *a2;
  v19 = 0;
  for ( i = a2 + 1; ; ++i )
  {
    if ( *((int *)locinfo + 43) <= 1 )
    {
      v9 = *(_WORD *)(*((_DWORD *)locinfo + 50) + 2 * v7) & 8;
    }
    else
    {
      v9 = _isctype_l(v7, 8, &Locale);
      locinfo = Locale.locinfo;
    }
    if ( v9 == 0 )
      break;
    v7 = *i;
  }
  if ( v7 == 45 )
  {
    a5 |= 2u;
  }
  else if ( v7 != 43 )
  {
    goto LABEL_20;
  }
  v7 = *i++;
LABEL_20:
  if ( a4 != 0 )
  {
    if ( a4 != 16 || v7 != 48 )
      goto LABEL_32;
  }
  else
  {
    if ( v7 != 48 )
    {
      a4 = 10;
      goto LABEL_32;
    }
    if ( *i != 120 && *i != 88 )
    {
      a4 = 8;
      goto LABEL_32;
    }
    a4 = 16;
  }
  if ( *i == 120 || *i == 88 )
  {
    v10 = i + 1;
    v7 = *v10;
    i = v10 + 1;
  }
LABEL_32:
  v11 = *((_DWORD *)locinfo + 50);
  v12 = 0xFFFFFFFF / a4;
  while ( 1 )
  {
    if ( (*(_WORD *)(v11 + 2 * v7) & 4) != 0 )
    {
      v13 = (char)v7 - 48;
    }
    else
    {
      if ( (*(_WORD *)(v11 + 2 * v7) & 0x103) == 0 )
        break;
      v14 = (char)v7;
      if ( (unsigned __int8)(v7 - 97) <= 0x19u )
        v14 = (char)v7 - 32;
      v13 = v14 - 55;
    }
    if ( v13 >= a4 )
      break;
    a5 |= 8u;
    if ( v19 < v12 || v19 == v12 && v13 <= 0xFFFFFFFF % a4 )
    {
      v19 = v13 + a4 * v19;
    }
    else
    {
      a5 |= 4u;
      if ( a3 == nullptr )
        break;
    }
    v7 = *i++;
  }
  v15 = i - 1;
  if ( (a5 & 8) != 0 )
  {
    if ( (a5 & 4) != 0 || (a5 & 1) == 0 && ((a5 & 2) != 0 && v19 > 0x80000000 || (a5 & 2) == 0 && v19 > 0x7FFFFFFF) )
    {
      *_errno() = 34;
      if ( (a5 & 1) != 0 )
        v19 = -1;
      else
        v19 = ((a5 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( a3 != nullptr )
      v15 = a2;
    v19 = 0;
  }
  if ( a3 != nullptr )
    *a3 = v15;
  if ( (a5 & 2) != 0 )
    v19 = -v19;
  if ( v18 != 0 )
    *(_DWORD *)(v17 + 112) &= ~2u;
  return v19;
}

// Address: 0x10013691
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_1001F7A4 != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_1001E820, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x100136BC
int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0;
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) != 0 )
    return atol(LCData);
  else
    return -1;
}

// Address: 0x10013705
void *__cdecl __convertcp(UINT CodePage, UINT a2, const CHAR *a3, int *a4, CHAR *a5, int a6)
{
  signed int v6; // esi
  bool v7; // cc
  unsigned int v8; // eax
  void *v9; // esp
  WCHAR *v10; // eax
  LPSTR v12; // ebx
  void *v13; // eax
  int v14; // eax
  _DWORD v15[3]; // [esp+0h] [ebp-40h] BYREF
  LPSTR v16; // [esp+Ch] [ebp-34h]
  int *v17; // [esp+10h] [ebp-30h]
  int v18; // [esp+14h] [ebp-2Ch]
  LPCCH lpMultiByteStr; // [esp+18h] [ebp-28h]
  int cbMultiByte; // [esp+1Ch] [ebp-24h]
  void *Block; // [esp+20h] [ebp-20h]
  LPWSTR lpWideCharStr; // [esp+24h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+28h] [ebp-18h] BYREF

  lpMultiByteStr = a3;
  v17 = a4;
  cbMultiByte = *a4;
  v16 = a5;
  Block = nullptr;
  v18 = 0;
  if ( CodePage != a2 )
  {
    if ( GetCPInfo(CodePage, &CPInfo) && CPInfo.MaxCharSize == 1 && GetCPInfo(a2, &CPInfo) && CPInfo.MaxCharSize == 1 )
    {
      v6 = cbMultiByte;
      v18 = 1;
      if ( cbMultiByte == -1 )
        v6 = strlen(lpMultiByteStr) + 1;
      v7 = v6 <= 0;
    }
    else
    {
      v6 = MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, cbMultiByte, nullptr, 0);
      v7 = v6 <= 0;
      if ( v6 == 0 )
        return nullptr;
    }
    if ( v7 || (unsigned int)v6 > 0x7FFFFFF0 )
    {
      lpWideCharStr = nullptr;
LABEL_21:
      if ( lpWideCharStr != nullptr )
      {
        memset(lpWideCharStr, 0, 2 * v6);
        if ( MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, cbMultiByte, lpWideCharStr, v6) != 0 )
        {
          v12 = v16;
          if ( v16 != nullptr )
          {
            if ( WideCharToMultiByte(a2, 0, lpWideCharStr, v6, v16, a6, nullptr, nullptr) != 0 )
              Block = v12;
          }
          else if ( v18 != 0 || (v6 = WideCharToMultiByte(a2, 0, lpWideCharStr, v6, nullptr, 0, nullptr, nullptr)) != 0 )
          {
            v13 = (void *)_calloc_crt(1u, v6);
            Block = v13;
            if ( v13 != nullptr )
            {
              v14 = WideCharToMultiByte(a2, 0, lpWideCharStr, v6, (LPSTR)v13, v6, nullptr, nullptr);
              if ( v14 != 0 )
              {
                if ( cbMultiByte != -1 )
                  *v17 = v14;
              }
              else
              {
                free(Block);
                Block = nullptr;
              }
            }
          }
        }
        _freea(lpWideCharStr);
        return Block;
      }
      return nullptr;
    }
    v8 = 2 * v6 + 8;
    if ( v8 > 0x400 )
    {
      v10 = (WCHAR *)malloc(2 * v6 + 8);
      if ( v10 != nullptr )
      {
        *(_DWORD *)v10 = 56797;
        goto LABEL_18;
      }
    }
    else
    {
      v9 = alloca(v8);
      v10 = (WCHAR *)v15;
      if ( v15 != nullptr )
      {
        v15[0] = 52428;
LABEL_18:
        v10 += 4;
      }
    }
    lpWideCharStr = v10;
    goto LABEL_21;
  }
  return Block;
}

// Address: 0x100138B9
BOOL __cdecl __crtGetStringTypeW(
        struct localeinfo_struct *a1,
        DWORD dwInfoType,
        LPCWCH lpSrcStr,
        int cchSrc,
        LPWORD lpCharType)
{
  BOOL result; // eax
  _BYTE v6[8]; // [esp+0h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-8h]
  char v8; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v6, a1);
  result = cchSrc >= -1 && GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
  if ( v8 != 0 )
    *(_DWORD *)(v7 + 112) &= ~2u;
  return result;
}

// Address: 0x100138F7
int __cdecl _isctype_l(int C, int Type, _locale_t Locale)
{
  __int16 v3; // bx
  int v4; // eax
  int v5; // ecx
  int result; // eax
  __crt_locale_pointers Localea; // [esp+4h] [ebp-18h] BYREF
  int v8; // [esp+Ch] [ebp-10h]
  char v9; // [esp+10h] [ebp-Ch]
  CHAR MultiByteStr; // [esp+14h] [ebp-8h] BYREF
  char v11; // [esp+15h] [ebp-7h]
  char v12; // [esp+16h] [ebp-6h]
  WORD CharType; // [esp+18h] [ebp-4h] BYREF
  int Ca; // [esp+24h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  v3 = C;
  if ( (unsigned int)(C + 1) <= 0x100 )
  {
    v4 = *(unsigned __int16 *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C);
    goto LABEL_11;
  }
  Ca = C >> 8;
  if ( _isleadbyte_l(HIBYTE(v3), &Localea) != 0 )
  {
    MultiByteStr = Ca;
    v11 = v3;
    v12 = 0;
    v5 = 2;
  }
  else
  {
    MultiByteStr = v3;
    v11 = 0;
    v5 = 1;
  }
  if ( __crtGetStringTypeA(
         (struct localeinfo_struct *)&Localea,
         1u,
         &MultiByteStr,
         (char *)v5,
         &CharType,
         *((_DWORD *)Localea.locinfo + 1),
         *((_DWORD *)Localea.locinfo + 5),
         1) != 0 )
  {
    v4 = CharType;
LABEL_11:
    result = Type & v4;
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return result;
  }
  if ( v9 != 0 )
    *(_DWORD *)(v8 + 112) &= ~2u;
  return 0;
}

// Address: 0x100139AF
int __cdecl sub_100139AF(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned __int16 v2; // bx
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int result; // eax
  int v8; // esi
  unsigned int *v9; // edi
  int v10; // eax
  bool i; // zf
  int v12; // eax
  unsigned int v13; // edx
  unsigned int *v14; // ecx
  bool v15; // cf
  unsigned int v16; // esi
  int v17; // eax
  int v18; // edx
  int *v19; // ebx
  unsigned int v20; // esi
  char v21; // cl
  int v22; // edx
  unsigned int *v23; // ecx
  int v24; // esi
  int v25; // eax
  unsigned int *v26; // ebx
  bool j; // zf
  int v28; // eax
  unsigned int v29; // edx
  unsigned int *v30; // ecx
  unsigned int v31; // edi
  int k; // ecx
  unsigned int *v33; // ecx
  unsigned int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // edx
  int *v38; // ebx
  unsigned int v39; // esi
  char v40; // cl
  int v41; // edx
  unsigned int *v42; // ecx
  int v43; // eax
  int v44; // edx
  int *v45; // ebx
  unsigned int v46; // esi
  char v47; // cl
  int v48; // edx
  unsigned int *v49; // ecx
  int v50; // eax
  int v51; // edx
  unsigned int v52; // edi
  int v53; // edx
  unsigned int *v54; // ecx
  unsigned int v55; // ebx
  unsigned int v56; // edx
  unsigned int v57; // [esp+8h] [ebp-2Ch]
  unsigned int v58; // [esp+Ch] [ebp-28h]
  int v59; // [esp+10h] [ebp-24h]
  unsigned int v60; // [esp+14h] [ebp-20h] BYREF
  unsigned int v61; // [esp+18h] [ebp-1Ch]
  int v62; // [esp+1Ch] [ebp-18h] BYREF
  int v63; // [esp+20h] [ebp-14h]
  int v64; // [esp+24h] [ebp-10h]
  int v65; // [esp+28h] [ebp-Ch]
  int v66; // [esp+2Ch] [ebp-8h]
  int v67; // [esp+30h] [ebp-4h]
  int v68; // [esp+3Ch] [ebp+8h]
  unsigned int v69; // [esp+3Ch] [ebp+8h]
  int v70; // [esp+3Ch] [ebp+8h]
  int v71; // [esp+3Ch] [ebp+8h]
  int v72; // [esp+3Ch] [ebp+8h]
  int v73; // [esp+3Ch] [ebp+8h]
  int v74; // [esp+3Ch] [ebp+8h]

  v2 = a1[5];
  v63 = v2 & 0x8000;
  v60 = *(_DWORD *)(a1 + 3);
  v3 = (v2 & 0x7FFF) - 0x3FFF;
  v4 = *a1 << 16;
  v61 = *(_DWORD *)(a1 + 1);
  v62 = v4;
  if ( v3 != -16383 )
  {
    v68 = 0;
    v57 = v60;
    v58 = v61;
    v59 = v62;
    v8 = dword_1001EF30 - 1;
    v64 = v3;
    v65 = dword_1001EF30 / 32;
    v9 = &v60 + dword_1001EF30 / 32;
    v66 = 31 - dword_1001EF30 % 32;
    if ( ((1 << (31 - dword_1001EF30 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_1001EF30 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
      {
        if ( ++v10 >= 3 )
          goto LABEL_22;
      }
      v12 = v8 / 32;
      v67 = 0;
      v13 = 1 << (31 - v8 % 32);
      v14 = &v60 + v8 / 32;
      v69 = v13 + *v14;
      if ( v69 >= *v14 )
      {
        v15 = v69 < v13;
        goto LABEL_18;
      }
LABEL_19:
      v67 = 1;
      while ( 1 )
      {
        --v12;
        *v14 = v69;
        if ( v12 < 0 || v67 == 0 )
          break;
        v67 = 0;
        v14 = &v60 + v12;
        v16 = *v14 + 1;
        v69 = v16;
        if ( v16 >= *v14 )
        {
          v15 = v16 == 0;
LABEL_18:
          if ( !v15 )
            continue;
        }
        goto LABEL_19;
      }
      v68 = v67;
    }
LABEL_22:
    *v9 &= -1 << v66;
    if ( v65 + 1 < 3 )
      memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1)));
    if ( v68 != 0 )
      ++v3;
    if ( v3 >= dword_1001EF2C - dword_1001EF30 )
    {
      if ( v3 > dword_1001EF2C )
      {
        if ( v3 < dword_1001EF28 )
        {
          v60 &= ~0x80000000;
          v5 = dword_1001EF3C + v3;
          v50 = dword_1001EF34 / 32;
          v51 = dword_1001EF34 % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_1001EF34 % 32;
          do
          {
            v52 = *(&v60 + v74);
            v64 = ~(-1 << v51) & v52;
            *(&v60 + v74++) = v65 | (v52 >> v51);
            v65 = v64 << v67;
          }
          while ( v74 < 3 );
          v53 = 2;
          v54 = (unsigned int *)(&v62 - v50);
          do
          {
            if ( v53 < v50 )
              *(&v60 + v53) = 0;
            else
              *(&v60 + v53) = *v54;
            --v53;
            --v54;
          }
          while ( v53 >= 0 );
          result = 0;
        }
        else
        {
          v61 = 0;
          v62 = 0;
          v60 = 0x80000000;
          v43 = dword_1001EF34 / 32;
          v44 = dword_1001EF34 % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_1001EF34 % 32;
          do
          {
            v45 = (int *)(&v60 + v73);
            v46 = *v45;
            v64 = ~(-1 << v44) & *v45;
            v47 = v67;
            *v45 = v65 | (v46 >> v44);
            ++v73;
            v65 = v64 << v47;
          }
          while ( v73 < 3 );
          v48 = 2;
          v49 = (unsigned int *)(&v62 - v43);
          do
          {
            if ( v48 < v43 )
              *(&v60 + v48) = 0;
            else
              *(&v60 + v48) = *v49;
            --v48;
            --v49;
          }
          while ( v48 >= 0 );
          v5 = dword_1001EF3C + dword_1001EF28;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_1001EF2C - v64) / 32;
      v62 = v59;
      v18 = (dword_1001EF2C - v64) % 32;
      v65 = 0;
      v70 = 0;
      v67 = 32 - v18;
      do
      {
        v19 = (int *)(&v60 + v70);
        v20 = *v19;
        v64 = ~(-1 << v18) & *v19;
        v21 = v67;
        *v19 = v65 | (v20 >> v18);
        ++v70;
        v65 = v64 << v21;
      }
      while ( v70 < 3 );
      v22 = 2;
      v23 = (unsigned int *)(&v62 - v17);
      do
      {
        if ( v22 < v17 )
          *(&v60 + v22) = 0;
        else
          *(&v60 + v22) = *v23;
        --v22;
        --v23;
      }
      while ( v22 >= 0 );
      v24 = dword_1001EF30 - 1;
      v25 = dword_1001EF30 / 32;
      v65 = dword_1001EF30 / 32;
      v26 = &v60 + dword_1001EF30 / 32;
      v64 = 31 - dword_1001EF30 % 32;
      if ( ((1 << (31 - dword_1001EF30 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_1001EF30 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
        {
          if ( ++v25 >= 3 )
            goto LABEL_52;
        }
        v28 = v24 / 32;
        v71 = 0;
        v29 = 1 << (31 - v24 % 32);
        v30 = &v60 + v24 / 32;
        v31 = *v30 + v29;
        if ( v31 < *v30 || v31 < v29 )
          v71 = 1;
        *v30 = v31;
        for ( k = v71; --v28 >= 0 && k != 0; k = v35 )
        {
          v33 = &v60 + v28;
          v34 = *v33 + 1;
          v35 = 0;
          if ( v34 < *v33 || *v33 == -1 )
            v35 = 1;
          *v33 = v34;
        }
      }
LABEL_52:
      *v26 &= -1 << v64;
      if ( v65 + 1 < 3 )
        memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1)));
      v36 = (dword_1001EF34 + 1) / 32;
      v37 = (dword_1001EF34 + 1) % 32;
      v65 = 0;
      v72 = 0;
      v67 = 32 - v37;
      do
      {
        v38 = (int *)(&v60 + v72);
        v39 = *v38;
        v64 = ~(-1 << v37) & *v38;
        v40 = v67;
        *v38 = v65 | (v39 >> v37);
        ++v72;
        v65 = v64 << v40;
      }
      while ( v72 < 3 );
      v41 = 2;
      v42 = (unsigned int *)(&v62 - v36);
      do
      {
        if ( v41 < v36 )
          *(&v60 + v41) = 0;
        else
          *(&v60 + v41) = *v42;
        --v41;
        --v42;
      }
      while ( v41 >= 0 );
    }
    else
    {
      v60 = 0;
      v61 = 0;
      v62 = 0;
    }
    v5 = 0;
    result = 2;
    goto LABEL_79;
  }
  v5 = 0;
  v6 = 0;
  while ( *(&v60 + v6) == 0 )
  {
    if ( ++v6 >= 3 )
    {
      result = 0;
      goto LABEL_79;
    }
  }
  v60 = 0;
  v61 = 0;
  v62 = 0;
  result = 2;
LABEL_79:
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_1001EF34));
  if ( dword_1001EF38 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_1001EF38 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x10013EF3
int __cdecl sub_10013EF3(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned __int16 v2; // bx
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int result; // eax
  int v8; // esi
  unsigned int *v9; // edi
  int v10; // eax
  bool i; // zf
  int v12; // eax
  unsigned int v13; // edx
  unsigned int *v14; // ecx
  bool v15; // cf
  unsigned int v16; // esi
  int v17; // eax
  int v18; // edx
  int *v19; // ebx
  unsigned int v20; // esi
  char v21; // cl
  int v22; // edx
  unsigned int *v23; // ecx
  int v24; // esi
  int v25; // eax
  unsigned int *v26; // ebx
  bool j; // zf
  int v28; // eax
  unsigned int v29; // edx
  unsigned int *v30; // ecx
  unsigned int v31; // edi
  int k; // ecx
  unsigned int *v33; // ecx
  unsigned int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // edx
  int *v38; // ebx
  unsigned int v39; // esi
  char v40; // cl
  int v41; // edx
  unsigned int *v42; // ecx
  int v43; // eax
  int v44; // edx
  int *v45; // ebx
  unsigned int v46; // esi
  char v47; // cl
  int v48; // edx
  unsigned int *v49; // ecx
  int v50; // eax
  int v51; // edx
  unsigned int v52; // edi
  int v53; // edx
  unsigned int *v54; // ecx
  unsigned int v55; // ebx
  unsigned int v56; // edx
  unsigned int v57; // [esp+8h] [ebp-2Ch]
  unsigned int v58; // [esp+Ch] [ebp-28h]
  int v59; // [esp+10h] [ebp-24h]
  unsigned int v60; // [esp+14h] [ebp-20h] BYREF
  unsigned int v61; // [esp+18h] [ebp-1Ch]
  int v62; // [esp+1Ch] [ebp-18h] BYREF
  int v63; // [esp+20h] [ebp-14h]
  int v64; // [esp+24h] [ebp-10h]
  int v65; // [esp+28h] [ebp-Ch]
  int v66; // [esp+2Ch] [ebp-8h]
  int v67; // [esp+30h] [ebp-4h]
  int v68; // [esp+3Ch] [ebp+8h]
  unsigned int v69; // [esp+3Ch] [ebp+8h]
  int v70; // [esp+3Ch] [ebp+8h]
  int v71; // [esp+3Ch] [ebp+8h]
  int v72; // [esp+3Ch] [ebp+8h]
  int v73; // [esp+3Ch] [ebp+8h]
  int v74; // [esp+3Ch] [ebp+8h]

  v2 = a1[5];
  v63 = v2 & 0x8000;
  v60 = *(_DWORD *)(a1 + 3);
  v3 = (v2 & 0x7FFF) - 0x3FFF;
  v4 = *a1 << 16;
  v61 = *(_DWORD *)(a1 + 1);
  v62 = v4;
  if ( v3 != -16383 )
  {
    v68 = 0;
    v57 = v60;
    v58 = v61;
    v59 = v62;
    v8 = dword_1001EF48 - 1;
    v64 = v3;
    v65 = dword_1001EF48 / 32;
    v9 = &v60 + dword_1001EF48 / 32;
    v66 = 31 - dword_1001EF48 % 32;
    if ( ((1 << (31 - dword_1001EF48 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_1001EF48 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
      {
        if ( ++v10 >= 3 )
          goto LABEL_22;
      }
      v12 = v8 / 32;
      v67 = 0;
      v13 = 1 << (31 - v8 % 32);
      v14 = &v60 + v8 / 32;
      v69 = v13 + *v14;
      if ( v69 >= *v14 )
      {
        v15 = v69 < v13;
        goto LABEL_18;
      }
LABEL_19:
      v67 = 1;
      while ( 1 )
      {
        --v12;
        *v14 = v69;
        if ( v12 < 0 || v67 == 0 )
          break;
        v67 = 0;
        v14 = &v60 + v12;
        v16 = *v14 + 1;
        v69 = v16;
        if ( v16 >= *v14 )
        {
          v15 = v16 == 0;
LABEL_18:
          if ( !v15 )
            continue;
        }
        goto LABEL_19;
      }
      v68 = v67;
    }
LABEL_22:
    *v9 &= -1 << v66;
    if ( v65 + 1 < 3 )
      memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1)));
    if ( v68 != 0 )
      ++v3;
    if ( v3 >= dword_1001EF44 - dword_1001EF48 )
    {
      if ( v3 > dword_1001EF44 )
      {
        if ( v3 < dword_1001EF40 )
        {
          v60 &= ~0x80000000;
          v5 = dword_1001EF54 + v3;
          v50 = dword_1001EF4C / 32;
          v51 = dword_1001EF4C % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_1001EF4C % 32;
          do
          {
            v52 = *(&v60 + v74);
            v64 = ~(-1 << v51) & v52;
            *(&v60 + v74++) = v65 | (v52 >> v51);
            v65 = v64 << v67;
          }
          while ( v74 < 3 );
          v53 = 2;
          v54 = (unsigned int *)(&v62 - v50);
          do
          {
            if ( v53 < v50 )
              *(&v60 + v53) = 0;
            else
              *(&v60 + v53) = *v54;
            --v53;
            --v54;
          }
          while ( v53 >= 0 );
          result = 0;
        }
        else
        {
          v61 = 0;
          v62 = 0;
          v60 = 0x80000000;
          v43 = dword_1001EF4C / 32;
          v44 = dword_1001EF4C % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_1001EF4C % 32;
          do
          {
            v45 = (int *)(&v60 + v73);
            v46 = *v45;
            v64 = ~(-1 << v44) & *v45;
            v47 = v67;
            *v45 = v65 | (v46 >> v44);
            ++v73;
            v65 = v64 << v47;
          }
          while ( v73 < 3 );
          v48 = 2;
          v49 = (unsigned int *)(&v62 - v43);
          do
          {
            if ( v48 < v43 )
              *(&v60 + v48) = 0;
            else
              *(&v60 + v48) = *v49;
            --v48;
            --v49;
          }
          while ( v48 >= 0 );
          v5 = dword_1001EF54 + dword_1001EF40;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_1001EF44 - v64) / 32;
      v62 = v59;
      v18 = (dword_1001EF44 - v64) % 32;
      v65 = 0;
      v70 = 0;
      v67 = 32 - v18;
      do
      {
        v19 = (int *)(&v60 + v70);
        v20 = *v19;
        v64 = ~(-1 << v18) & *v19;
        v21 = v67;
        *v19 = v65 | (v20 >> v18);
        ++v70;
        v65 = v64 << v21;
      }
      while ( v70 < 3 );
      v22 = 2;
      v23 = (unsigned int *)(&v62 - v17);
      do
      {
        if ( v22 < v17 )
          *(&v60 + v22) = 0;
        else
          *(&v60 + v22) = *v23;
        --v22;
        --v23;
      }
      while ( v22 >= 0 );
      v24 = dword_1001EF48 - 1;
      v25 = dword_1001EF48 / 32;
      v65 = dword_1001EF48 / 32;
      v26 = &v60 + dword_1001EF48 / 32;
      v64 = 31 - dword_1001EF48 % 32;
      if ( ((1 << (31 - dword_1001EF48 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_1001EF48 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
        {
          if ( ++v25 >= 3 )
            goto LABEL_52;
        }
        v28 = v24 / 32;
        v71 = 0;
        v29 = 1 << (31 - v24 % 32);
        v30 = &v60 + v24 / 32;
        v31 = *v30 + v29;
        if ( v31 < *v30 || v31 < v29 )
          v71 = 1;
        *v30 = v31;
        for ( k = v71; --v28 >= 0 && k != 0; k = v35 )
        {
          v33 = &v60 + v28;
          v34 = *v33 + 1;
          v35 = 0;
          if ( v34 < *v33 || *v33 == -1 )
            v35 = 1;
          *v33 = v34;
        }
      }
LABEL_52:
      *v26 &= -1 << v64;
      if ( v65 + 1 < 3 )
        memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1)));
      v36 = (dword_1001EF4C + 1) / 32;
      v37 = (dword_1001EF4C + 1) % 32;
      v65 = 0;
      v72 = 0;
      v67 = 32 - v37;
      do
      {
        v38 = (int *)(&v60 + v72);
        v39 = *v38;
        v64 = ~(-1 << v37) & *v38;
        v40 = v67;
        *v38 = v65 | (v39 >> v37);
        ++v72;
        v65 = v64 << v40;
      }
      while ( v72 < 3 );
      v41 = 2;
      v42 = (unsigned int *)(&v62 - v36);
      do
      {
        if ( v41 < v36 )
          *(&v60 + v41) = 0;
        else
          *(&v60 + v41) = *v42;
        --v41;
        --v42;
      }
      while ( v41 >= 0 );
    }
    else
    {
      v60 = 0;
      v61 = 0;
      v62 = 0;
    }
    v5 = 0;
    result = 2;
    goto LABEL_79;
  }
  v5 = 0;
  v6 = 0;
  while ( *(&v60 + v6) == 0 )
  {
    if ( ++v6 >= 3 )
    {
      result = 0;
      goto LABEL_79;
    }
  }
  v60 = 0;
  v61 = 0;
  v62 = 0;
  result = 2;
LABEL_79:
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_1001EF4C));
  if ( dword_1001EF50 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_1001EF50 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x10014437
int __cdecl __strgtold12_l(int a1, char **a2, char *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ecx
  _BYTE *v9; // edi
  char *v11; // edx
  char v12; // al
  char v13; // al
  int v14; // eax
  int v15; // eax
  char *v16; // edx
  int v17; // eax
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  char *v24; // ecx
  char v25; // al
  char *v26; // ecx
  int v27; // eax
  char *v28; // ebx
  __int16 v29; // ax
  __int16 v30; // si
  unsigned __int16 v31; // cx
  int v32; // eax
  _WORD *v33; // edi
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // esi
  __int16 v37; // cx
  unsigned int v38; // eax
  int v39; // esi
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // edi
  int v44; // eax
  __int16 v45; // cx
  int v46; // esi
  unsigned int v47; // edx
  __int16 v48; // ax
  int v49; // [esp-4h] [ebp-8Ch]
  int v50; // [esp-4h] [ebp-8Ch]
  char *v51; // [esp+Ch] [ebp-7Ch]
  __int16 v52; // [esp+14h] [ebp-74h]
  __int16 v53; // [esp+18h] [ebp-70h]
  int v54; // [esp+1Ch] [ebp-6Ch]
  int v55; // [esp+20h] [ebp-68h]
  int v56; // [esp+20h] [ebp-68h]
  int v57; // [esp+24h] [ebp-64h]
  int v58; // [esp+24h] [ebp-64h]
  int v59; // [esp+28h] [ebp-60h]
  unsigned __int16 *v60; // [esp+28h] [ebp-60h]
  int v61; // [esp+2Ch] [ebp-5Ch]
  unsigned __int16 *v62; // [esp+2Ch] [ebp-5Ch]
  int v63; // [esp+30h] [ebp-58h]
  int i; // [esp+30h] [ebp-58h]
  char *v65; // [esp+34h] [ebp-54h]
  int v66; // [esp+34h] [ebp-54h]
  int v67; // [esp+38h] [ebp-50h]
  int v68; // [esp+38h] [ebp-50h]
  unsigned int v69; // [esp+3Ch] [ebp-4Ch]
  int v70; // [esp+3Ch] [ebp-4Ch]
  __int64 v71; // [esp+40h] [ebp-48h] BYREF
  int v72; // [esp+48h] [ebp-40h]
  _DWORD v73[7]; // [esp+4Ch] [ebp-3Ch] BYREF
  _BYTE v74[23]; // [esp+68h] [ebp-20h] BYREF
  char v75; // [esp+7Fh] [ebp-9h]

  v8 = 0;
  v9 = v74;
  v52 = 0;
  v55 = 1;
  v69 = 0;
  v63 = 0;
  v61 = 0;
  v59 = 0;
  v57 = 0;
  v67 = 0;
  v54 = 0;
  if ( a8 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
  v11 = a3;
  v65 = a3;
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 != 32 && v12 != 9 && v12 != 10 && v12 != 13 )
      break;
    ++v11;
  }
  while ( 2 )
  {
    v13 = *v11++;
    switch ( v8 )
    {
      case 0:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_11;
        if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_14;
        v14 = v13 - 43;
        if ( v14 == 0 )
        {
          v52 = 0;
          v8 = 2;
          continue;
        }
        v15 = v14 - 2;
        if ( v15 == 0 )
        {
          v8 = 2;
          v52 = 0x8000;
          continue;
        }
        if ( v15 != 3 )
          goto LABEL_75;
        goto LABEL_19;
      case 1:
        v63 = 1;
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_11;
        if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_24;
        if ( v13 == 43 || v13 == 45 )
          goto LABEL_33;
        if ( v13 == 48 )
          goto LABEL_19;
LABEL_28:
        if ( v13 <= 67 || v13 > 69 && (v13 <= 99 || v13 > 101) )
          goto LABEL_75;
        v50 = 6;
        goto LABEL_15;
      case 2:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
        {
LABEL_11:
          v49 = 3;
LABEL_12:
          v8 = v49;
          --v11;
        }
        else
        {
          if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          {
LABEL_14:
            v50 = 5;
            goto LABEL_15;
          }
          if ( v13 != 48 )
          {
LABEL_37:
            v16 = v65;
            goto LABEL_82;
          }
LABEL_19:
          v8 = 1;
        }
        continue;
      case 3:
        v63 = 1;
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v69 >= 0x19 )
          {
            ++v67;
          }
          else
          {
            ++v69;
            *v9++ = v13 - 48;
          }
          v13 = *v11++;
        }
        if ( v13 != ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_46;
LABEL_24:
        v50 = 4;
        goto LABEL_15;
      case 4:
        v63 = 1;
        v61 = 1;
        if ( v69 == 0 )
        {
          while ( v13 == 48 )
          {
            --v67;
            v13 = *v11++;
          }
        }
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v69 < 0x19 )
          {
            ++v69;
            *v9++ = v13 - 48;
            --v67;
          }
          v13 = *v11++;
        }
LABEL_46:
        if ( v13 != 43 && v13 != 45 )
          goto LABEL_28;
LABEL_33:
        --v11;
        v50 = 11;
        goto LABEL_15;
      case 5:
        v61 = 1;
        if ( (unsigned __int8)(v13 - 48) > 9u )
          goto LABEL_37;
        v49 = 4;
        goto LABEL_12;
      case 6:
        v65 = v11 - 2;
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_63;
        v17 = v13 - 43;
        if ( v17 == 0 )
          goto LABEL_70;
        v18 = v17 - 2;
        if ( v18 == 0 )
          goto LABEL_69;
        v19 = v18 == 3;
LABEL_67:
        if ( !v19 )
          goto LABEL_37;
        v50 = 8;
        goto LABEL_15;
      case 7:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_63;
        v19 = v13 == 48;
        goto LABEL_67;
      case 8:
        v59 = 1;
        while ( v13 == 48 )
          v13 = *v11++;
        if ( (unsigned __int8)(v13 - 49) > 8u )
          goto LABEL_75;
LABEL_63:
        v49 = 9;
        goto LABEL_12;
      case 9:
        v59 = 1;
        v21 = 0;
        while ( 2 )
        {
          if ( v13 >= 48 && v13 <= 57 )
          {
            v21 = 10 * v21 + v13 - 48;
            if ( v21 <= 5200 )
            {
              v13 = *v11++;
              continue;
            }
            v21 = 5201;
          }
          break;
        }
        v57 = v21;
        while ( v13 >= 48 && v13 <= 57 )
          v13 = *v11++;
LABEL_75:
        v16 = v11 - 1;
        goto LABEL_82;
      case 11:
        if ( a7 != 0 )
        {
          v20 = v13 - 43;
          v65 = v11 - 1;
          if ( v20 != 0 )
          {
            if ( v20 != 2 )
            {
              v16 = v11 - 1;
              goto LABEL_82;
            }
LABEL_69:
            v55 = -1;
            v8 = 7;
          }
          else
          {
LABEL_70:
            v50 = 7;
LABEL_15:
            v8 = v50;
          }
          continue;
        }
        v16 = v11 - 1;
LABEL_82:
        *a2 = v16;
        if ( v63 == 0 )
        {
          v54 = 4;
LABEL_177:
          v45 = 0;
          v48 = 0;
          v47 = 0;
          v46 = 0;
          goto LABEL_178;
        }
        if ( v69 > 0x18 )
        {
          if ( v75 >= 5 )
            ++v75;
          --v9;
          ++v67;
          v69 = 24;
        }
        if ( v69 == 0 )
          goto LABEL_177;
        while ( *--v9 == 0 )
        {
          --v69;
          ++v67;
        }
        __mtold12(v74, v69, v73);
        v22 = v57;
        if ( v55 < 0 )
          v22 = -v57;
        v23 = v67 + v22;
        if ( v59 == 0 )
          v23 += a5;
        if ( v61 == 0 )
          v23 -= a6;
        if ( v23 > 5200 )
        {
          v46 = 0;
          v48 = 0x7FFF;
          v47 = 0x80000000;
          v45 = 0;
          v54 = 2;
          goto LABEL_178;
        }
        if ( v23 < -5200 )
        {
          v54 = 1;
          goto LABEL_177;
        }
        v24 = (char *)&unk_1001EFD0 - 96;
        v66 = v23;
        if ( v23 != 0 )
        {
          if ( v23 < 0 )
          {
            v66 = -v23;
            v24 = (char *)&unk_1001F130 - 96;
          }
          if ( a4 == 0 )
            LOWORD(v73[0]) = 0;
          if ( v66 != 0 )
          {
            while ( 1 )
            {
              v25 = v66;
              v66 >>= 3;
              v26 = v24 + 84;
              v27 = v25 & 7;
              v51 = v26;
              if ( v27 == 0 )
                goto LABEL_172;
              v28 = &v26[12 * v27];
              if ( *(_WORD *)v28 >= 0x8000u )
              {
                v71 = *(_QWORD *)v28;
                v72 = *((_DWORD *)v28 + 2);
                --*(_DWORD *)((char *)&v71 + 2);
                v28 = (char *)&v71;
              }
              v68 = 0;
              memset(&v73[4], 0, 12);
              v29 = *((_WORD *)v28 + 5) & 0x7FFF;
              v30 = (HIWORD(v73[2]) ^ *((_WORD *)v28 + 5)) & 0x8000;
              v53 = v30;
              v31 = v29 + (HIWORD(v73[2]) & 0x7FFF);
              if ( (HIWORD(v73[2]) & 0x7FFF) == 0x7FFF || (*((_WORD *)v28 + 5) & 0x7FFF) == 0x7FFF || v31 > 0xBFFDu )
                break;
              if ( v31 <= 0x3FBFu )
              {
                v32 = 0;
                v73[1] = 0;
                v73[0] = 0;
LABEL_171:
                v73[2] = v32;
                goto LABEL_172;
              }
              if ( (v73[2] & 0x7FFF0000) != 0 || (++v31, (v73[2] & 0x7FFFFFFF) != 0) || v73[1] != 0 || v73[0] != 0 )
              {
                if ( v29 != 0
                  || (++v31, (*((_DWORD *)v28 + 2) & 0x7FFFFFFF) != 0)
                  || *((_DWORD *)v28 + 1) != 0
                  || *(_DWORD *)v28 != 0 )
                {
                  v56 = 0;
                  v33 = &v73[5];
                  for ( i = 5; i > 0; --i )
                  {
                    v58 = i;
                    v62 = (unsigned __int16 *)v73 + v56;
                    v60 = (unsigned __int16 *)(v28 + 8);
                    do
                    {
                      v70 = 0;
                      v34 = *v62 * *v60;
                      v35 = *((_DWORD *)v33 - 1);
                      v36 = v35 + v34;
                      if ( v35 + v34 < v35 || v36 < v34 )
                        v70 = 1;
                      *((_DWORD *)v33 - 1) = v36;
                      if ( v70 != 0 )
                        ++*v33;
                      ++v62;
                      --v60;
                      --v58;
                    }
                    while ( v58 > 0 );
                    ++v33;
                    ++v56;
                  }
                  v37 = v31 - 16382;
                  if ( v37 <= 0 )
                    goto LABEL_181;
                  do
                  {
                    if ( v73[6] < 0 )
                      break;
                    v38 = v73[4];
                    v73[4] *= 2;
                    v39 = (v38 >> 31) | (2 * v73[5]);
                    v40 = *(__int64 *)&v73[5] >> 31;
                    --v37;
                    v73[5] = v39;
                    v73[6] = v40;
                  }
                  while ( v37 > 0 );
                  if ( v37 <= 0 )
                  {
LABEL_181:
                    if ( --v37 < 0 )
                    {
                      v41 = (unsigned __int16)-v37;
                      v37 = 0;
                      do
                      {
                        if ( (v73[4] & 1) != 0 )
                          ++v68;
                        v42 = v73[6];
                        v73[6] >>= 1;
                        v43 = (v42 << 31) | (v73[5] >> 1);
                        v44 = *(__int64 *)&v73[4] >> 1;
                        --v41;
                        v73[5] = v43;
                        v73[4] = v44;
                      }
                      while ( v41 != 0 );
                      if ( v68 != 0 )
                        LOWORD(v73[4]) |= 1u;
                    }
                  }
                  if ( LOWORD(v73[4]) > 0x8000u || (v73[4] & 0x1FFFF) == 0x18000 )
                  {
                    if ( *(_DWORD *)((char *)&v73[4] + 2) == -1 )
                    {
                      *(_DWORD *)((char *)&v73[4] + 2) = 0;
                      if ( *(_DWORD *)((char *)&v73[5] + 2) == -1 )
                      {
                        *(_DWORD *)((char *)&v73[5] + 2) = 0;
                        if ( HIWORD(v73[6]) == 0xFFFF )
                        {
                          HIWORD(v73[6]) = 0x8000;
                          ++v37;
                        }
                        else
                        {
                          ++HIWORD(v73[6]);
                        }
                      }
                      else
                      {
                        ++*(_DWORD *)((char *)&v73[5] + 2);
                      }
                    }
                    else
                    {
                      ++*(_DWORD *)((char *)&v73[4] + 2);
                    }
                  }
                  if ( (unsigned __int16)v37 < 0x7FFFu )
                  {
                    LOWORD(v73[0]) = HIWORD(v73[4]);
                    *(_QWORD *)((char *)v73 + 2) = *(_QWORD *)&v73[5];
                    HIWORD(v73[2]) = v53 | v37;
                  }
                  else
                  {
                    v73[1] = 0;
                    v73[0] = 0;
                    v73[2] = v53 == 0 ? 2147450880 : -32768;
                  }
                }
                else
                {
                  memset(v73, 0, 12);
                }
              }
              else
              {
                HIWORD(v73[2]) = 0;
              }
LABEL_172:
              if ( v66 == 0 )
                goto LABEL_173;
              v24 = v51;
            }
            v73[1] = 0;
            v32 = v30 == 0 ? 2147450880 : -32768;
            v73[0] = 0;
            goto LABEL_171;
          }
        }
LABEL_173:
        v45 = v73[0];
        v46 = *(_DWORD *)((char *)v73 + 2);
        v47 = *(_DWORD *)((char *)&v73[1] + 2);
        v48 = HIWORD(v73[2]);
LABEL_178:
        *(_WORD *)a1 = v45;
        *(_WORD *)(a1 + 10) = v52 | v48;
        *(_DWORD *)(a1 + 2) = v46;
        *(_DWORD *)(a1 + 6) = v47;
        return v54;
    }
  }
}

// Address: 0x10014B2F
int __cdecl sub_10014B2F(__int64 a1, __int16 a2, int a3, char a4, int a5)
{
  unsigned __int16 v5; // dx
  __int64 v6; // rdi
  errno_t v8; // eax
  errno_t v9; // eax
  __int16 v10; // ax
  int v11; // ebx
  int v12; // ecx
  char *v13; // eax
  _DWORD *v14; // esi
  __int16 v15; // cx
  unsigned __int16 v16; // di
  _WORD *v17; // esi
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int16 v21; // di
  unsigned int v22; // ecx
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // esi
  int v27; // ecx
  unsigned __int16 v28; // si
  int v29; // eax
  _WORD *v30; // edi
  unsigned __int16 *v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // ebx
  __int16 v35; // si
  unsigned int v36; // ecx
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // edi
  int v43; // esi
  unsigned int v44; // eax
  int v45; // ebx
  int v46; // eax
  bool v47; // zf
  int v48; // esi
  int v49; // eax
  int v50; // ebx
  int v51; // eax
  _BYTE *v52; // ebx
  unsigned int v53; // edx
  unsigned int v54; // edi
  unsigned int v55; // ecx
  int v56; // esi
  int v57; // ecx
  unsigned int v58; // esi
  unsigned int v59; // edi
  int v60; // edx
  unsigned int v61; // edx
  char *v62; // ebx
  char v63; // al
  char *v64; // ebx
  int v65; // eax
  char v66; // bl
  unsigned __int16 *v67; // [esp+10h] [ebp-70h]
  unsigned __int16 *v68; // [esp+14h] [ebp-6Ch]
  char *v69; // [esp+18h] [ebp-68h]
  __int16 v70; // [esp+20h] [ebp-60h]
  int v71; // [esp+24h] [ebp-5Ch]
  __int16 v72; // [esp+24h] [ebp-5Ch]
  __int16 v73; // [esp+28h] [ebp-58h]
  int *v74; // [esp+28h] [ebp-58h]
  int v75; // [esp+2Ch] [ebp-54h]
  int v76; // [esp+2Ch] [ebp-54h]
  int v77; // [esp+30h] [ebp-50h]
  int v78; // [esp+30h] [ebp-50h]
  __int16 v79; // [esp+34h] [ebp-4Ch]
  int k; // [esp+34h] [ebp-4Ch]
  int v81; // [esp+38h] [ebp-48h]
  int v82; // [esp+38h] [ebp-48h]
  char *v83; // [esp+3Ch] [ebp-44h]
  int v84; // [esp+3Ch] [ebp-44h]
  int v85; // [esp+3Ch] [ebp-44h]
  unsigned int v86; // [esp+3Ch] [ebp-44h]
  int i; // [esp+40h] [ebp-40h]
  int j; // [esp+40h] [ebp-40h]
  char *v89; // [esp+40h] [ebp-40h]
  _BYTE v90[12]; // [esp+44h] [ebp-3Ch] BYREF
  int v91; // [esp+50h] [ebp-30h]
  int v92; // [esp+54h] [ebp-2Ch]
  int v93; // [esp+58h] [ebp-28h] BYREF
  _BYTE v94[12]; // [esp+60h] [ebp-20h] BYREF
  _BYTE v95[12]; // [esp+70h] [ebp-10h] BYREF

  *(_QWORD *)v95 = a1;
  *(_WORD *)&v95[8] = a2;
  v70 = a2 & 0x8000;
  v5 = a2 & 0x7FFF;
  v91 = -858993460;
  v92 = -858993460;
  v93 = 1073466572;
  if ( a2 >= 0 )
    *(_BYTE *)(a5 + 2) = 32;
  else
    *(_BYTE *)(a5 + 2) = 45;
  v6 = *(_QWORD *)v95;
  if ( v5 == 0 && *(_QWORD *)v95 == 0 )
  {
    *(_WORD *)a5 = 0;
    *(_BYTE *)(a5 + 2) = v70 != -32768 ? 32 : 45;
    *(_BYTE *)(a5 + 3) = 1;
    *(_BYTE *)(a5 + 4) = 48;
    *(_BYTE *)(a5 + 5) = 0;
    return 1;
  }
  if ( v5 == 0x7FFF )
  {
    *(_WORD *)a5 = 1;
    if ( v6 != 0x8000000000000000uLL && (v6 & 0x4000000000000000LL) == 0 )
    {
      v8 = strcpy_s((char *)(a5 + 4), 0x16u, "1#SNAN");
LABEL_22:
      if ( v8 != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      *(_BYTE *)(a5 + 3) = 6;
      return 0;
    }
    if ( v70 != 0 && HIDWORD(v6) == -1073741824 )
    {
      if ( (_DWORD)v6 == 0 )
      {
        v9 = strcpy_s((char *)(a5 + 4), 0x16u, "1#IND");
LABEL_18:
        if ( v9 != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        *(_BYTE *)(a5 + 3) = 5;
        return 0;
      }
    }
    else if ( v6 == 0x8000000000000000uLL )
    {
      v9 = strcpy_s((char *)(a5 + 4), 0x16u, "1#INF");
      goto LABEL_18;
    }
    v8 = strcpy_s((char *)(a5 + 4), 0x16u, "1#QNAN");
    goto LABEL_22;
  }
  v10 = (77 * (HIBYTE(v5) + 2 * HIBYTE(*(_DWORD *)&v95[4])) + 19728 * (unsigned int)v5 - 323162868) >> 16;
  *(_WORD *)v94 = 0;
  v11 = -v10;
  v79 = v10;
  *(_WORD *)&v94[10] = a2 & 0x7FFF;
  *(_QWORD *)&v94[2] = *(_QWORD *)v95;
  v69 = (char *)&unk_1001EFD0 - 96;
  if ( v10 != 0 )
  {
    if ( v10 > 0 )
    {
      v11 = v10;
      v69 = (char *)&unk_1001F130 - 96;
    }
    while ( v11 != 0 )
    {
      v69 += 84;
      v12 = v11 & 7;
      v11 >>= 3;
      if ( v12 != 0 )
      {
        v13 = &v69[12 * v12];
        v83 = v13;
        if ( *(_WORD *)v13 >= 0x8000u )
        {
          *(_DWORD *)v90 = *(_DWORD *)v13;
          *(_DWORD *)&v90[4] = *((_DWORD *)v13 + 1);
          v14 = v13 + 8;
          v13 = v90;
          *(_DWORD *)&v90[8] = *v14;
          --*(_DWORD *)&v90[2];
          v83 = v90;
        }
        v81 = 0;
        memset(v95, 0, sizeof(v95));
        v73 = (*(_WORD *)&v94[10] ^ *((_WORD *)v13 + 5)) & 0x8000;
        v15 = *((_WORD *)v13 + 5) & 0x7FFF;
        v16 = v15 + (*(_WORD *)&v94[10] & 0x7FFF);
        if ( (*(_WORD *)&v94[10] & 0x7FFF) == 0x7FFF || (*((_WORD *)v13 + 5) & 0x7FFF) == 0x7FFF || v16 > 0xBFFDu )
        {
          *(_DWORD *)&v94[8] = ((*(_WORD *)&v94[10] ^ *((_WORD *)v13 + 5)) & 0x8000u) == 0 ? 2147450880 : -32768;
        }
        else
        {
          if ( v16 > 0x3FBFu )
          {
            if ( (*(_WORD *)&v94[10] & 0x7FFF) == 0 )
            {
              ++v16;
              if ( (*(_DWORD *)&v94[8] & 0x7FFFFFFF) == 0 && *(_DWORD *)&v94[4] == 0 && *(_DWORD *)v94 == 0 )
              {
                *(_WORD *)&v94[10] = 0;
                continue;
              }
            }
            if ( v15 != 0
              || (++v16, (*((_DWORD *)v13 + 2) & 0x7FFFFFFF) != 0)
              || *((_DWORD *)v13 + 1) != 0
              || *(_DWORD *)v13 != 0 )
            {
              v75 = 0;
              v17 = &v95[4];
              for ( i = 5; i > 0; --i )
              {
                v77 = i;
                v67 = (unsigned __int16 *)&v94[2 * v75];
                v68 = (unsigned __int16 *)(v13 + 8);
                do
                {
                  v18 = *((_DWORD *)v17 - 1);
                  v19 = *v68 * *v67;
                  v71 = 0;
                  v20 = v18 + v19;
                  if ( v18 + v19 < v18 || v20 < v19 )
                    v71 = 1;
                  *((_DWORD *)v17 - 1) = v20;
                  if ( v71 != 0 )
                    ++*v17;
                  ++v67;
                  --v68;
                  --v77;
                }
                while ( v77 > 0 );
                v13 = v83;
                ++v17;
                ++v75;
              }
              v21 = v16 - 16382;
              if ( v21 <= 0 )
                goto LABEL_170;
              do
              {
                if ( *(int *)&v95[8] < 0 )
                  break;
                v22 = *(_DWORD *)v95;
                *(_DWORD *)v95 *= 2;
                v23 = *(_DWORD *)&v95[4];
                *(_DWORD *)&v95[4] = (v22 >> 31) | (2 * *(_DWORD *)&v95[4]);
                --v21;
                *(_DWORD *)&v95[8] = (v23 >> 31) | (2 * *(_DWORD *)&v95[8]);
              }
              while ( v21 > 0 );
              if ( v21 <= 0 )
              {
LABEL_170:
                if ( --v21 < 0 )
                {
                  v24 = (unsigned __int16)-v21;
                  v21 = 0;
                  do
                  {
                    if ( (v95[0] & 1) != 0 )
                      ++v81;
                    v25 = *(_DWORD *)&v95[8];
                    *(_DWORD *)&v95[8] >>= 1;
                    v26 = __SPAIR64__(v25, *(unsigned int *)&v95[4]) >> 1;
                    v27 = *(__int64 *)v95 >> 1;
                    --v24;
                    *(_DWORD *)&v95[4] = v26;
                    *(_DWORD *)v95 = v27;
                  }
                  while ( v24 != 0 );
                  if ( v81 != 0 )
                    *(_WORD *)v95 |= 1u;
                }
              }
              if ( *(_WORD *)v95 > 0x8000u || (*(_DWORD *)v95 & 0x1FFFF) == 0x18000 )
              {
                if ( *(_DWORD *)&v95[2] == -1 )
                {
                  *(_DWORD *)&v95[2] = 0;
                  if ( *(_DWORD *)&v95[6] == -1 )
                  {
                    *(_DWORD *)&v95[6] = 0;
                    if ( *(_WORD *)&v95[10] == 0xFFFF )
                    {
                      *(_WORD *)&v95[10] = 0x8000;
                      ++v21;
                    }
                    else
                    {
                      ++*(_WORD *)&v95[10];
                    }
                  }
                  else
                  {
                    ++*(_DWORD *)&v95[6];
                  }
                }
                else
                {
                  ++*(_DWORD *)&v95[2];
                }
              }
              if ( (unsigned __int16)v21 < 0x7FFFu )
              {
                *(_WORD *)v94 = *(_WORD *)&v95[2];
                *(_DWORD *)&v94[2] = *(_DWORD *)&v95[4];
                *(_DWORD *)&v94[6] = *(_DWORD *)&v95[8];
                *(_WORD *)&v94[10] = v73 | v21;
              }
              else
              {
                *(_DWORD *)&v94[4] = 0;
                *(_DWORD *)v94 = 0;
                *(_DWORD *)&v94[8] = v73 == 0 ? 2147450880 : -32768;
              }
              continue;
            }
          }
          *(_DWORD *)&v94[8] = 0;
        }
        *(_DWORD *)&v94[4] = 0;
        *(_DWORD *)v94 = 0;
      }
    }
  }
  if ( *(_WORD *)&v94[10] >= 0x3FFFu )
  {
    ++v79;
    v78 = 0;
    memset(v95, 0, sizeof(v95));
    v72 = (*(_WORD *)&v94[10] ^ HIWORD(v93)) & 0x8000;
    v28 = (HIWORD(v93) & 0x7FFF) + (*(_WORD *)&v94[10] & 0x7FFF);
    if ( (*(_WORD *)&v94[10] & 0x7FFF) == 0x7FFF || (HIWORD(v93) & 0x7FFF) == 0x7FFF || v28 > 0xBFFDu )
    {
      *(_DWORD *)&v94[4] = 0;
      v29 = ((*(_WORD *)&v94[10] ^ HIWORD(v93)) & 0x8000u) == 0 ? 2147450880 : -32768;
      *(_DWORD *)v94 = 0;
    }
    else
    {
      if ( v28 > 0x3FBFu )
      {
        v29 = 0;
        if ( (*(_WORD *)&v94[10] & 0x7FFF) == 0 )
        {
          ++v28;
          if ( (*(_DWORD *)&v94[8] & 0x7FFFFFFF) == 0 && *(_DWORD *)&v94[4] == 0 && *(_DWORD *)v94 == 0 )
          {
            *(_WORD *)&v94[10] = 0;
            goto LABEL_132;
          }
        }
        if ( (v93 & 0x7FFF0000) != 0 || (++v28, (v93 & 0x7FFFFFFF) != 0) || v92 != 0 || v91 != 0 )
        {
          v76 = 0;
          v30 = &v95[4];
          for ( j = 5; j > 0; --j )
          {
            v82 = j;
            v74 = &v93;
            v31 = (unsigned __int16 *)&v94[2 * v76];
            do
            {
              v84 = 0;
              v32 = *v31 * *(unsigned __int16 *)v74;
              v33 = *((_DWORD *)v30 - 1);
              v34 = v33 + v32;
              if ( v33 + v32 < v33 || v34 < v32 )
                v84 = 1;
              *((_DWORD *)v30 - 1) = v34;
              if ( v84 != 0 )
                ++*v30;
              v74 = (int *)((char *)v74 - 2);
              ++v31;
              --v82;
            }
            while ( v82 > 0 );
            ++v30;
            ++v76;
          }
          v35 = v28 - 16382;
          if ( v35 <= 0 )
            goto LABEL_171;
          do
          {
            if ( *(int *)&v95[8] < 0 )
              break;
            v36 = *(_DWORD *)v95;
            *(_DWORD *)v95 *= 2;
            v37 = *(_DWORD *)&v95[4];
            *(_DWORD *)&v95[4] = (v36 >> 31) | (2 * *(_DWORD *)&v95[4]);
            --v35;
            *(_DWORD *)&v95[8] = (v37 >> 31) | (2 * *(_DWORD *)&v95[8]);
          }
          while ( v35 > 0 );
          if ( v35 <= 0 )
          {
LABEL_171:
            if ( --v35 < 0 )
            {
              v38 = (unsigned __int16)-v35;
              v35 = 0;
              do
              {
                if ( (v95[0] & 1) != 0 )
                  ++v78;
                v39 = *(_DWORD *)&v95[8];
                *(_DWORD *)&v95[8] >>= 1;
                v40 = __SPAIR64__(v39, *(unsigned int *)&v95[4]) >> 1;
                v41 = *(__int64 *)v95 >> 1;
                --v38;
                *(_DWORD *)&v95[4] = v40;
                *(_DWORD *)v95 = v41;
              }
              while ( v38 != 0 );
              if ( v78 != 0 )
                *(_WORD *)v95 |= 1u;
            }
          }
          if ( *(_WORD *)v95 > 0x8000u || (*(_DWORD *)v95 & 0x1FFFF) == 0x18000 )
          {
            if ( *(_DWORD *)&v95[2] == -1 )
            {
              *(_DWORD *)&v95[2] = 0;
              if ( *(_DWORD *)&v95[6] == -1 )
              {
                *(_DWORD *)&v95[6] = 0;
                if ( *(_WORD *)&v95[10] == 0xFFFF )
                {
                  *(_WORD *)&v95[10] = 0x8000;
                  ++v35;
                }
                else
                {
                  ++*(_WORD *)&v95[10];
                }
              }
              else
              {
                ++*(_DWORD *)&v95[6];
              }
            }
            else
            {
              ++*(_DWORD *)&v95[2];
            }
          }
          if ( (unsigned __int16)v35 < 0x7FFFu )
          {
            *(_WORD *)v94 = *(_WORD *)&v95[2];
            *(_DWORD *)&v94[2] = *(_DWORD *)&v95[4];
            *(_DWORD *)&v94[6] = *(_DWORD *)&v95[8];
            *(_WORD *)&v94[10] = v72 | v35;
          }
          else
          {
            *(_DWORD *)&v94[4] = 0;
            *(_DWORD *)v94 = 0;
            *(_DWORD *)&v94[8] = v72 == 0 ? 2147450880 : -32768;
          }
          goto LABEL_132;
        }
      }
      else
      {
        v29 = 0;
      }
      *(_DWORD *)&v94[4] = 0;
      *(_DWORD *)v94 = 0;
    }
    *(_DWORD *)&v94[8] = v29;
  }
LABEL_132:
  v42 = a3;
  *(_WORD *)a5 = v79;
  if ( (a4 & 1) != 0 )
  {
    v42 = v79 + a3;
    if ( v42 <= 0 )
    {
      *(_WORD *)a5 = 0;
      *(_BYTE *)(a5 + 3) = 1;
      *(_BYTE *)(a5 + 2) = v70 != -32768 ? 32 : 45;
      *(_BYTE *)(a5 + 4) = 48;
      *(_BYTE *)(a5 + 5) = 0;
      return 1;
    }
  }
  if ( v42 > 21 )
    v42 = 21;
  v43 = *(unsigned __int16 *)&v94[10] - 16382;
  *(_WORD *)&v94[10] = 0;
  v85 = 8;
  do
  {
    v44 = *(_DWORD *)v94;
    *(_DWORD *)v94 *= 2;
    v45 = (v44 >> 31) | (2 * *(_DWORD *)&v94[4]);
    v46 = *(__int64 *)&v94[4] >> 31;
    v47 = v85-- == 1;
    *(_DWORD *)&v94[4] = v45;
    *(_DWORD *)&v94[8] = v46;
  }
  while ( !v47 );
  if ( v43 < 0 )
  {
    v48 = (unsigned __int8)-(char)v43;
    if ( v48 != 0 )
    {
      do
      {
        v49 = *(_DWORD *)&v94[8];
        *(_DWORD *)&v94[8] >>= 1;
        v50 = (v49 << 31) | (*(_DWORD *)&v94[4] >> 1);
        v51 = *(__int64 *)v94 >> 1;
        --v48;
        *(_DWORD *)&v94[4] = v50;
        *(_DWORD *)v94 = v51;
      }
      while ( v48 > 0 );
    }
  }
  v52 = (_BYTE *)(a5 + 4);
  v89 = (char *)(a5 + 4);
  for ( k = v42 + 1; k > 0; v94[11] = 0 )
  {
    v53 = *(_DWORD *)v94;
    *(_DWORD *)v90 = *(_DWORD *)v94;
    *(_QWORD *)&v90[4] = *(_QWORD *)&v94[4];
    *(_DWORD *)v94 *= 2;
    v54 = *(_DWORD *)v94;
    *(_DWORD *)v94 *= 2;
    v55 = (v53 >> 31) | (2 * *(_DWORD *)&v94[4]);
    v56 = 2 * v55;
    v57 = (v55 >> 31) | (2 * (*(__int64 *)&v94[4] >> 31));
    v58 = (v54 >> 31) | v56;
    v59 = *(_DWORD *)v90 + *(_DWORD *)v94;
    if ( (unsigned int)(*(_DWORD *)v90 + *(_DWORD *)v94) < *(_DWORD *)v94 || v59 < *(_DWORD *)v90 )
    {
      v60 = 0;
      if ( v58 + 1 < v58 || v58 == -1 )
        v60 = 1;
      ++v58;
      if ( v60 != 0 )
        ++v57;
    }
    v61 = *(_DWORD *)&v90[4] + v58;
    v86 = *(_DWORD *)&v90[4] + v58;
    if ( *(_DWORD *)&v90[4] + v58 < v58 || v61 < *(_DWORD *)&v90[4] )
      ++v57;
    *(_DWORD *)v94 = 2 * v59;
    *(_DWORD *)&v94[8] = (v61 >> 31) | (2 * (*(_DWORD *)&v90[8] + v57));
    *v52++ = v94[11] + 48;
    --k;
    *(_DWORD *)&v94[4] = (v59 >> 31) | (2 * v86);
  }
  v62 = v52 - 1;
  v63 = *v62;
  v64 = v62 - 1;
  if ( v63 >= 53 )
  {
    while ( v64 >= v89 && *v64 == 57 )
      *v64-- = 48;
    v65 = a5;
    if ( v64 < v89 )
    {
      ++v64;
      ++*(_WORD *)a5;
    }
    ++*v64;
  }
  else
  {
    while ( v64 >= v89 && *v64 == 48 )
      --v64;
    v65 = a5;
    if ( v64 < v89 )
    {
      *(_WORD *)a5 = 0;
      *(_BYTE *)(a5 + 3) = 1;
      *(_BYTE *)(a5 + 2) = v70 != -32768 ? 32 : 45;
      *v89 = 48;
      *(_BYTE *)(a5 + 5) = 0;
      return 1;
    }
  }
  v66 = (_BYTE)v64 - v65 - 3;
  *(_BYTE *)(v65 + 3) = v66;
  *(_BYTE *)(v66 + v65 + 4) = 0;
  return 1;
}

// Address: 0x10015456
int __usercall _hw_cw@<eax>(int a1@<ebx>)
{
  int result; // eax
  int v2; // ecx

  result = (a1 & 0x10) != 0;
  if ( (a1 & 8) != 0 )
    result |= 4u;
  if ( (a1 & 4) != 0 )
    result |= 8u;
  if ( (a1 & 2) != 0 )
    result |= 0x10u;
  if ( (a1 & 1) != 0 )
    result |= 0x20u;
  if ( (a1 & 0x80000) != 0 )
    result |= 2u;
  v2 = a1 & 0x300;
  if ( (a1 & 0x300) != 0 )
  {
    switch ( v2 )
    {
      case 256:
        result |= 0x400u;
        break;
      case 512:
        result |= 0x800u;
        break;
      case 768:
        result |= 0xC00u;
        break;
      default:
        break;
    }
  }
  if ( (a1 & 0x30000) != 0 )
  {
    if ( (a1 & 0x30000) == 0x10000 )
      result |= 0x200u;
  }
  else
  {
    result |= 0x300u;
  }
  if ( (a1 & 0x40000) != 0 )
    return result | 0x1000;
  return result;
}

// Address: 0x100154E4
int __fastcall __hw_cw_sse2(int a1, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // edx

  result = 0;
  if ( (a2 & 0x10) != 0 )
    result = 128;
  if ( (a2 & 8) != 0 )
    result |= 0x200u;
  if ( (a2 & 4) != 0 )
    result |= 0x400u;
  if ( (a2 & 2) != 0 )
    result |= 0x800u;
  if ( (a2 & 1) != 0 )
    result |= 0x1000u;
  if ( (a2 & 0x80000) != 0 )
    result |= 0x100u;
  v3 = a2 & 0x300;
  if ( (a2 & 0x300) != 0 )
  {
    switch ( v3 )
    {
      case 256:
        result |= 0x2000u;
        break;
      case 512:
        result |= 0x4000u;
        break;
      case 768:
        result |= 0x6000u;
        break;
      default:
        break;
    }
  }
  v4 = a2 & 0x3000000;
  switch ( v4 )
  {
    case 16777216:
      return result | 0x8040;
    case 33554432:
      return result | 0x40;
    case 50331648:
      return result | 0x8000;
    default:
      break;
  }
  return result;
}

// Address: 0x10015584
unsigned int __cdecl _control87(unsigned int NewValue, unsigned int Mask)
{
  int v2; // edx
  int v3; // eax
  unsigned int result; // eax
  __int16 v6; // ax
  __int16 v7; // bx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // esi
  __int16 v11; // ax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  __int16 v17; // cx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // [esp+14h] [ebp-Ch]
  __int16 v24; // [esp+18h] [ebp-8h]
  unsigned int Maska; // [esp+2Ch] [ebp+Ch]

  v2 = 0;
  if ( (v24 & 1) != 0 )
    v2 = 16;
  if ( (v24 & 4) != 0 )
    v2 |= 8u;
  if ( (v24 & 8) != 0 )
    v2 |= 4u;
  if ( (v24 & 0x10) != 0 )
    v2 |= 2u;
  if ( (v24 & 0x20) != 0 )
    v2 |= 1u;
  if ( (v24 & 2) != 0 )
    v2 |= 0x80000u;
  v3 = v24 & 0xC00;
  if ( v3 != 0 )
  {
    switch ( v3 )
    {
      case 1024:
        v2 |= 0x100u;
        break;
      case 2048:
        v2 |= 0x200u;
        break;
      case 3072:
        v2 |= 0x300u;
        break;
      default:
        break;
    }
  }
  if ( (v24 & 0x300) != 0 )
  {
    if ( (v24 & 0x300) == 0x200 )
      v2 |= 0x10000u;
  }
  else
  {
    v2 |= 0x20000u;
  }
  if ( (v24 & 0x1000) != 0 )
    v2 |= 0x40000u;
  result = Mask & NewValue | v2 & ~Mask;
  Maska = result;
  if ( result != v2 )
  {
    v6 = _hw_cw(result);
    v7 = v6;
    v8 = 0;
    if ( (v6 & 1) != 0 )
      v8 = 16;
    if ( (v6 & 4) != 0 )
      v8 |= 8u;
    if ( (v6 & 8) != 0 )
      v8 |= 4u;
    if ( (v6 & 0x10) != 0 )
      v8 |= 2u;
    if ( (v6 & 0x20) != 0 )
      v8 |= 1u;
    if ( (v6 & 2) != 0 )
      v8 |= 0x80000u;
    v9 = v6 & 0xC00;
    if ( (v7 & 0xC00) != 0 )
    {
      switch ( v9 )
      {
        case 1024:
          v8 |= 0x100u;
          break;
        case 2048:
          v8 |= 0x200u;
          break;
        case 3072:
          v8 |= 0x300u;
          break;
        default:
          break;
      }
    }
    if ( (v7 & 0x300) != 0 )
    {
      if ( (v7 & 0x300) == 0x200 )
        v8 |= 0x10000u;
    }
    else
    {
      v8 |= 0x20000u;
    }
    if ( (v7 & 0x1000) != 0 )
      v8 |= 0x40000u;
    Maska = v8;
    result = v8;
  }
  v10 = 0;
  if ( dword_10020EC4 != 0 )
  {
    v11 = _mm_getcsr();
    if ( (v11 & 0x80u) != 0 )
      v10 = 16;
    if ( (v11 & 0x200) != 0 )
      v10 |= 8u;
    if ( (v11 & 0x400) != 0 )
      v10 |= 4u;
    if ( (v11 & 0x800) != 0 )
      v10 |= 2u;
    if ( (v11 & 0x1000) != 0 )
      v10 |= 1u;
    if ( (v11 & 0x100) != 0 )
      v10 |= 0x80000u;
    v12 = v11 & 0x6000;
    if ( (v11 & 0x6000) != 0 )
    {
      switch ( v12 )
      {
        case 8192:
          v10 |= 0x100u;
          break;
        case 16384:
          v10 |= 0x200u;
          break;
        case 24576:
          v10 |= 0x300u;
          break;
        default:
          break;
      }
    }
    v13 = (v11 & 0x8040) - 64;
    if ( v13 != 0 )
    {
      v14 = v13 - 32704;
      if ( v14 != 0 )
      {
        if ( v14 == 64 )
          v10 |= 0x1000000u;
      }
      else
      {
        v10 |= 0x3000000u;
      }
    }
    else
    {
      v10 |= 0x2000000u;
    }
    v15 = NewValue & Mask & 0x308031F | v10 & ~(Mask & 0x308031F);
    if ( v15 == v10 )
    {
      v16 = v10;
    }
    else
    {
      v23 = __hw_cw_sse2(v12, v15);
      __set_fpsr_sse2(v23);
      v17 = _mm_getcsr();
      v18 = 0;
      if ( (v17 & 0x80u) != 0 )
        v18 = 16;
      if ( (v17 & 0x200) != 0 )
        v18 |= 8u;
      if ( (v17 & 0x400) != 0 )
        v18 |= 4u;
      if ( (v17 & 0x800) != 0 )
        v18 |= 2u;
      if ( (v17 & 0x1000) != 0 )
        v18 |= 1u;
      if ( (v17 & 0x100) != 0 )
        v18 |= 0x80000u;
      v19 = v17 & 0x6000;
      if ( (v17 & 0x6000) != 0 )
      {
        switch ( v19 )
        {
          case 8192:
            v18 |= 0x100u;
            break;
          case 16384:
            v18 |= 0x200u;
            break;
          case 24576:
            v18 |= 0x300u;
            break;
          default:
            break;
        }
      }
      v20 = (v17 & 0x8040) - 64;
      if ( v20 != 0 )
      {
        v21 = v20 - 32704;
        if ( v21 != 0 )
        {
          if ( v21 == 64 )
            v18 |= 0x1000000u;
        }
        else
        {
          v18 |= 0x3000000u;
        }
      }
      else
      {
        v18 |= 0x2000000u;
      }
      v16 = v18;
    }
    v22 = Maska ^ v16;
    result = Maska | v16;
    if ( (v22 & 0x8031F) != 0 )
      result |= 0x80000000;
  }
  return result;
}

// Address: 0x10015893
HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  hObject = result;
  return result;
}

// Address: 0x100158B2
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hObject != (HANDLE)-1 && hObject != (HANDLE)-2 )
    CloseHandle(hObject);
  result = dword_1001EF58;
  if ( dword_1001EF58 != (HANDLE)-1 && dword_1001EF58 != (HANDLE)-2 )
    return (HANDLE)CloseHandle(dword_1001EF58);
  return result;
}

// Address: 0x100158DF
int __cdecl _fclose_nolock(FILE *Stream)
{
  int v1; // ebx
  int v3; // eax

  v1 = -1;
  if ( Stream != nullptr )
  {
    if ( (Stream->_flag & 0x83) != 0 )
    {
      v1 = _flush(Stream);
      _freebuf(Stream);
      v3 = _fileno(Stream);
      if ( _close(v3) >= 0 )
      {
        if ( Stream->_tmpfname != nullptr )
        {
          free(Stream->_tmpfname);
          Stream->_tmpfname = nullptr;
        }
      }
      else
      {
        v1 = -1;
      }
    }
    Stream->_flag = 0;
    return v1;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x10015956
int __cdecl fclose(FILE *Stream)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = -1;
  if ( Stream != nullptr )
  {
    if ( (Stream->_flag & 0x40) != 0 )
    {
      Stream->_flag = 0;
    }
    else
    {
      _lock_file(Stream);
      v2 = _fclose_nolock(Stream);
      _unlock_file(Stream);
    }
    return v2;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x100159D2
int __cdecl _commit(int FileHandle)
{
  int *v2; // edi
  int v3; // esi
  void *osfhandle; // eax
  DWORD LastError; // [esp+14h] [ebp-1Ch]

  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= uNumber
    || (v2 = &dword_10020EE0[FileHandle >> 5], (*(_BYTE *)((v3 = (FileHandle & 0x1F) << 6) + *v2 + 4) & 1) == 0) )
  {
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  __lock_fhandle(FileHandle);
  if ( (*(_BYTE *)(v3 + *v2 + 4) & 1) != 0 )
  {
    osfhandle = (void *)_get_osfhandle(FileHandle);
    if ( FlushFileBuffers(osfhandle) )
      LastError = 0;
    else
      LastError = GetLastError();
    if ( LastError == 0 )
      goto $good$28866;
    *__doserrno() = LastError;
  }
  *_errno() = 9;
  LastError = -1;
$good$28866:
  _unlock_fhandle(FileHandle);
  return LastError;
}

// Address: 0x10015AC0
int __cdecl __ascii_strnicmp(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  int v3; // ecx
  unsigned __int8 v6; // ah
  unsigned __int8 v7; // al
  bool v8; // cf

  v3 = a3;
  if ( a3 != 0 )
  {
    do
    {
      v6 = *a1;
      v7 = *a2;
      if ( *a1 == 0 || v7 == 0 )
        break;
      ++a1;
      ++a2;
      if ( v6 >= 0x41u && v6 <= 0x5Au )
        v6 += 32;
      if ( v7 >= 0x41u && v7 <= 0x5Au )
        v7 += 32;
      v8 = v6 < v7;
      if ( v6 != v7 )
        goto differ;
      --v3;
    }
    while ( v3 != 0 );
    v3 = 0;
    v8 = v6 < v7;
    if ( v6 == v7 )
      return v3;
differ:
    v3 = -1;
    if ( !v8 )
      return 1;
  }
  return v3;
}

// Address: 0x10015B21
unsigned int *__cdecl __mtold12(char *a1, int a2, unsigned int *a3)
{
  unsigned int *result; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  int v12; // esi
  unsigned int v13; // ecx
  unsigned int v14; // edi
  int v15; // ebx
  unsigned int v16; // edx
  unsigned int v17; // esi
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // esi
  unsigned int v21; // edi
  int v22; // ecx
  __int16 v23; // [esp+Ch] [ebp-18h]
  int v24; // [esp+10h] [ebp-14h]
  int v25; // [esp+10h] [ebp-14h]
  unsigned int v26; // [esp+18h] [ebp-Ch]
  unsigned int v27; // [esp+1Ch] [ebp-8h]

  result = a3;
  v23 = 16462;
  *a3 = 0;
  a3[1] = 0;
  for ( a3[2] = 0; a2 != 0; ++a1 )
  {
    v26 = a3[1];
    v27 = a3[2];
    v24 = 0;
    v4 = __SPAIR64__(*(_QWORD *)(a3 + 1) >> 31, *(__int64 *)a3 >> 31) >> 31;
    v5 = *a3;
    v6 = 4 * *a3;
    v7 = (2LL * *(_QWORD *)a3) >> 31;
    v8 = 5 * *a3;
    *a3 = v6;
    a3[1] = v7;
    a3[2] = v4;
    if ( v8 < v6 || v8 < v5 )
      v24 = 1;
    v9 = 0;
    *a3 = v8;
    if ( v24 != 0 )
    {
      if ( v7 + 1 < v7 || v7 == -1 )
        v9 = 1;
      a3[1] = v7 + 1;
      if ( v9 != 0 )
        a3[2] = v4 + 1;
    }
    v10 = a3[1];
    v11 = v10 + v26;
    v12 = 0;
    if ( v10 + v26 < v10 || v11 < v26 )
      v12 = 1;
    a3[1] = v11;
    if ( v12 != 0 )
      ++a3[2];
    a3[2] += v27;
    v25 = 0;
    v13 = 2 * v8;
    v14 = (v8 >> 31) | (2 * v11);
    v15 = (v11 >> 31) | (2 * a3[2]);
    *a3 = v13;
    a3[1] = v14;
    a3[2] = v15;
    v16 = *a1;
    v17 = v13 + v16;
    if ( v13 + v16 < v13 || v17 < v16 )
      v25 = 1;
    *a3 = v17;
    if ( v25 != 0 )
    {
      v18 = 0;
      if ( v14 + 1 < v14 || v14 == -1 )
        v18 = 1;
      a3[1] = v14 + 1;
      if ( v18 != 0 )
        a3[2] = v15 + 1;
    }
    --a2;
  }
  while ( a3[2] == 0 )
  {
    v19 = a3[1];
    a3[2] = HIWORD(v19);
    v23 -= 16;
    *(_QWORD *)a3 = __PAIR64__(v19, *a3) << 16;
  }
  if ( (a3[2] & 0x8000) == 0 )
  {
    do
    {
      v20 = *a3;
      v21 = a3[1];
      --v23;
      *a3 *= 2;
      v22 = (v21 >> 31) | (2 * a3[2]);
      a3[1] = (v20 >> 31) | (2 * v21);
      a3[2] = v22;
    }
    while ( (v22 & 0x8000) == 0 );
  }
  *((_WORD *)a3 + 5) = v23;
  return result;
}

// Address: 0x10015CEF
int __cdecl __set_fpsr_sse2(unsigned int a1)
{
  int result; // eax

  result = 0;
  if ( dword_10020EC4 != 0 )
  {
    if ( (a1 & 0x40) != 0 && dword_1001F2A4 != 0 )
      _mm_setcsr(a1);
    else
      _mm_setcsr(a1 & 0xFFFFFFBF);
  }
  return result;
}

// Address: 0x10015D61
int __cdecl _close_nolock(int FileHandle)
{
  intptr_t osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_10020EE0[0] + 132) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_10020EE0[0] + 68) & 1) != 0)
    && (osfhandle = _get_osfhandle(2), _get_osfhandle(1) == osfhandle)
    || (v2 = (void *)_get_osfhandle(FileHandle), CloseHandle(v2)) )
  {
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
  }
  _free_osfhnd(FileHandle);
  *(_BYTE *)(dword_10020EE0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) = 0;
  if ( LastError == 0 )
    return 0;
  _dosmaperr(LastError);
  return -1;
}

// Address: 0x10015DFD
int __cdecl _close(int FileHandle)
{
  int *v2; // ebx
  int v3; // esi
  int v4; // [esp+14h] [ebp-1Ch]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= uNumber
    || (v2 = &dword_10020EE0[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v2 + v3 + 4) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  __lock_fhandle(FileHandle);
  if ( (*(_BYTE *)(*v2 + v3 + 4) & 1) != 0 )
  {
    v4 = _close_nolock(FileHandle);
  }
  else
  {
    *_errno() = 9;
    v4 = -1;
  }
  _unlock_fhandle(FileHandle);
  return v4;
}

// Address: 0x10015ECA
int __cdecl _freebuf(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 12);
  if ( (result & 0x83) != 0 && (result & 8) != 0 )
  {
    free(*(void **)(a1 + 8));
    *(_DWORD *)(a1 + 12) &= 0xFFFFFBF7;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    return 0;
  }
  return result;
}

// Address: 0x10015F00
// positive sp value has been detected, the output may be wrong!
int __fastcall found_bx(int a1, int a2)
{
  return a2 - 1;
}

// Address: 0x10015F16
char *__usercall __from_strstr_to_strchr@<eax>(int a1@<eax>, const char *Str, ...)
{
  int v3; // eax
  int v4; // edx
  char v5; // cl
  int v6; // ebx
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax

  v3 = a1 << 8;
  v4 = (int)Str;
  if ( ((unsigned __int8)Str & 3) != 0 )
  {
    while ( 1 )
    {
      v5 = *(_BYTE *)v4++;
      if ( v5 == (_BYTE)a1 )
        return (char *)found_bx(v5, v4);
      if ( v5 == 0 )
        return nullptr;
      if ( (v4 & 3) == 0 )
        goto main_loop_start;
    }
  }
  else
  {
main_loop_start:
    v6 = v3 | a1 | ((v3 | a1) << 16);
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v6 ^ *(_DWORD *)v4;
        v8 = *(_DWORD *)v4 + 2130640639;
        v9 = v8 ^ ~*(_DWORD *)v4;
        v4 += 4;
        if ( (((v7 + 2130640639) ^ ~v7) & 0x81010100) != 0 )
          break;
        v10 = v9 & 0x81010100;
        if ( v10 != 0 && ((v10 & 0x1010100) != 0 || (v8 & 0x80000000) == 0) )
          return nullptr;
      }
      v12 = *(_DWORD *)(v4 - 4);
      if ( (_BYTE)v12 == (_BYTE)v6 )
        break;
      if ( (_BYTE)v12 == 0 )
        return nullptr;
      if ( BYTE1(v12) == (_BYTE)v6 )
        return (char *)(v4 - 3);
      if ( BYTE1(v12) == 0 )
        return nullptr;
      v13 = HIWORD(v12);
      if ( (_BYTE)v13 == (_BYTE)v6 )
        return (char *)(v4 - 2);
      if ( (_BYTE)v13 == 0 )
        return nullptr;
      if ( BYTE1(v13) == (_BYTE)v6 )
        return (char *)(v4 - 1);
      if ( BYTE1(v13) == 0 )
        return nullptr;
    }
    return (char *)(v4 - 4);
  }
}

// Address: 0x10015FCE
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x10015FE0
int __stdcall _alldiv(unsigned __int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // eax
  unsigned __int64 v4; // rtt
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
  unsigned __int64 v9; // rax

  v2 = 0;
  if ( (a1 & 0x8000000000000000uLL) != 0LL )
  {
    v2 = 1;
    HIDWORD(a1) = -HIDWORD(a1) - ((_DWORD)a1 != 0);
    LODWORD(a1) = -(int)a1;
  }
  v3 = HIDWORD(a2);
  if ( a2 < 0 )
  {
    ++v2;
    v3 = -HIDWORD(a2) - ((_DWORD)a2 != 0);
    HIDWORD(a2) = v3;
    LODWORD(a2) = -(int)a2;
  }
  if ( v3 != 0 )
  {
    v6 = __PAIR64__(v3, a2);
    v7 = a1;
    do
    {
      v6 >>= 1;
      v7 >>= 1;
    }
    while ( HIDWORD(v6) != 0 );
    v8 = v7 / (unsigned int)v6;
    v9 = v8 * (unsigned __int64)(unsigned int)a2;
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 32, v9 > a1) )
      --v8;
    v5 = v8;
  }
  else
  {
    LODWORD(v4) = a1;
    HIDWORD(v4) = HIDWORD(a1) % (unsigned int)a2;
    LODWORD(v5) = v4 / (unsigned int)a2;
    HIDWORD(v5) = HIDWORD(a1) / (unsigned int)a2;
  }
  if ( v2 == 1 )
    return -v5;
  return v5;
}

// Address: 0x10016480
int sub_10016480()
{
  dword_1001FEB0 = operator new(0x20000u);
  return atexit(sub_10016500);
}

// Address: 0x1001649D
int sub_1001649D()
{
  sub_100071CC((int)&unk_1001F380);
  return atexit(sub_1001650D);
}

// Address: 0x100164B3
int sub_100164B3()
{
  HANDLE ProcessHeap; // eax

  ProcessHeap = GetProcessHeap();
  dword_1001F3B8 = (int)&off_10017304;
  dword_1001F3BC = (int)ProcessHeap;
  byte_1001F3C0 = 0;
  return atexit(sub_10016517);
}

// Address: 0x100164DB
int sub_100164DB()
{
  sub_100072CD(&dword_1001F3C4, (int)&dword_1001F3B8);
  return atexit(sub_10016521);
}

// Address: 0x10016500
void __cdecl sub_10016500()
{
  operator delete(dword_1001FEB0);
}

// Address: 0x1001650D
void __cdecl sub_1001650D()
{
  sub_10007165((int)&unk_1001F380);
}

// Address: 0x10016517
void __cdecl sub_10016517()
{
  sub_1000720C(&dword_1001F3B8);
}

// Address: 0x10016521
void __cdecl sub_10016521()
{
  dword_1001F3C4 = (int)&off_10017318;
}

// Address: 0x1001652C
void __cdecl sub_1001652C()
{
  dword_1001F3E0[0] = (int)&std::bad_alloc::`vftable';
  sub_10007B8D(dword_1001F3E0);
}

