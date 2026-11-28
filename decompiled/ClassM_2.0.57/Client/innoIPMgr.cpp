// Decompiled from innoIPMgr.dll (ClassM_2.0.57\unpacked\Client\innoIPMgr.dll)

// Address: 0x10001020
int __fastcall sub_10001020(void *a1, size_t Size, void *Src, size_t Sizea)
{
  if ( Sizea == 0 )
    return 0;
  if ( a1 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( Src != nullptr && Size >= Sizea )
  {
    memmove_0(a1, Src, Sizea);
    return 0;
  }
  memset(a1, 0, Size);
  if ( Src == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( Size >= Sizea )
    return 22;
  *_errno() = 34;
  _invalid_parameter_noinfo();
  return 34;
}

// Address: 0x100010C0
void _guard_check_icall_nop()
{
  ;
}

// Address: 0x100010D0
void *sub_100010D0()
{
  return &unk_100263B0;
}

// Address: 0x100010E0
int sub_100010E0(int a1, ...)
{
  _DWORD *v1; // eax
  FILE *v3; // [esp-10h] [ebp-14h]
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, a1);
  v3 = __acrt_iob_func(1u);
  v1 = sub_100010D0();
  return sub_1000CF6C(*v1, v1[1], v3, a1, 0, va);
}

// Address: 0x10001110
void __cdecl __noreturn sub_10001110(int pExceptionObject)
{
  _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1_AVCAtlException_ATL__);
}

// Address: 0x10001130
int __cdecl sub_10001130(int a1)
{
  switch ( a1 )
  {
    case 0:
    case 80:
      return a1;
    case 12:
      sub_10001110(-2147024882);
    case 22:
    case 34:
      sub_10001110(-2147024809);
    default:
      sub_10001110(-2147467259);
  }
}

// Address: 0x100011D0
int __thiscall sub_100011D0(LPCRITICAL_SECTION lpCriticalSection)
{
  int result; // eax

  if ( InitializeCriticalSectionEx(lpCriticalSection, 0, 0) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}

// Address: 0x10001200
_WORD *__fastcall sub_10001200(HMODULE hModule, HRSRC hResInfo, char a3)
{
  _WORD *result; // eax
  _WORD *v6; // esi
  unsigned int v7; // edx
  int v8; // ecx

  result = LoadResource(hModule, hResInfo);
  if ( result != nullptr )
  {
    v6 = LockResource(result);
    if ( v6 == nullptr )
      return nullptr;
    v7 = (unsigned int)v6 + SizeofResource(hModule, hResInfo);
    v8 = a3 & 0xF;
    if ( (a3 & 0xF) != 0 )
    {
      while ( (unsigned int)v6 < v7 )
      {
        v6 += (unsigned __int16)*v6 + 1;
        if ( --v8 == 0 )
          goto LABEL_6;
      }
      return nullptr;
    }
LABEL_6:
    if ( (unsigned int)v6 >= v7 )
      return nullptr;
    if ( *v6 == 0 )
      return nullptr;
    return v6;
  }
  return result;
}

// Address: 0x10001270
HMODULE __fastcall sub_10001270(unsigned int a1)
{
  HMODULE v2; // esi
  int v3; // edi
  unsigned int v4; // ebx
  HRSRC Resource; // eax
  char v7; // [esp+Ch] [ebp-4h]

  v7 = a1;
  v2 = (HMODULE)sub_100074CF(0);
  v3 = 1;
  if ( v2 == nullptr )
    return nullptr;
  v4 = a1 >> 4;
  while ( 1 )
  {
    Resource = FindResourceExW(v2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)(v4 + 1), 0);
    if ( Resource != nullptr && sub_10001200(v2, Resource, v7) != nullptr )
      break;
    v2 = (HMODULE)sub_100074CF(v3++);
    if ( v2 == nullptr )
      return nullptr;
  }
  return v2;
}

// Address: 0x100012F0
LPVOID __thiscall sub_100012F0(HANDLE *this, SIZE_T dwBytes)
{
  return HeapAlloc(*(this + 1), 0, dwBytes);
}

// Address: 0x10001310
LPVOID __thiscall sub_10001310(HANDLE *this, LPVOID lpMem)
{
  LPVOID result; // eax

  result = lpMem;
  if ( lpMem != nullptr )
    return (LPVOID)HeapFree(*(this + 1), 0, lpMem);
  return result;
}

// Address: 0x10001330
LPVOID __thiscall sub_10001330(HANDLE *this, LPVOID lpMem, SIZE_T dwBytes)
{
  if ( lpMem == nullptr )
    return (LPVOID)(*(int (__thiscall **)(HANDLE *, SIZE_T))*this)(this, dwBytes);
  if ( dwBytes != 0 )
    return HeapReAlloc(*(this + 1), 0, lpMem, dwBytes);
  (*((void (__thiscall **)(HANDLE *, LPVOID))*this + 1))(this, lpMem);
  return nullptr;
}

// Address: 0x10001370
SIZE_T __thiscall sub_10001370(HANDLE *this, LPCVOID lpMem)
{
  return HeapSize(*(this + 1), 0, lpMem);
}

// Address: 0x10001390
void *__thiscall sub_10001390(void *Block, char a2)
{
  bool v3; // zf

  v3 = *((_BYTE *)Block + 8) == 0;
  *(_DWORD *)Block = &ATL::CWin32Heap::`vftable';
  if ( !v3 && *((_DWORD *)Block + 1) != 0 )
    HeapDestroy(*((HANDLE *)Block + 1));
  if ( (a2 & 1) != 0 )
    sub_10007C2D(Block);
  return Block;
}

// Address: 0x100013D0
int *sub_100013D0()
{
  int v0; // esi
  HANDLE ProcessHeap; // eax

  v0 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( dword_100265F0 > *(_DWORD *)(v0 + 4) )
  {
    _Init_thread_header(&dword_100265F0);
    if ( dword_100265F0 == -1 )
    {
      ProcessHeap = GetProcessHeap();
      dword_100265E4 = (int)&ATL::CWin32Heap::`vftable';
      dword_100265E8 = ProcessHeap;
      byte_100265EC = 0;
      atexit(sub_1001B800);
      _Init_thread_footer(&dword_100265F0);
    }
  }
  if ( dword_100265F4 > *(_DWORD *)(v0 + 4) )
  {
    _Init_thread_header(&dword_100265F4);
    if ( dword_100265F4 == -1 )
    {
      dword_100265C8 = (int)&ATL::CAtlStringMgr::`vftable';
      dword_100265CC = (int)&dword_100265E4;
      dword_100265DC = 2;
      dword_100265D4 = 0;
      dword_100265D8 = 0;
      dword_100265E0 = 0;
      dword_100265D0 = (int)&dword_100265C8;
      atexit(sub_1001B7F0);
      _Init_thread_footer(&dword_100265F4);
    }
  }
  return &dword_100265C8;
}

// Address: 0x100014C0
_DWORD *__thiscall sub_100014C0(int (__thiscall ****this)(_DWORD, _DWORD), int a2, unsigned int a3)
{
  signed int v5; // esi
  unsigned int v6; // eax
  _DWORD *v7; // ecx

  if ( a2 < 0 || 0x7FFFFFFF - a2 < 1 )
    return nullptr;
  v5 = (a2 + 8) & 0xFFFFFFF8;
  if ( a2 + 1 > v5 )
    return nullptr;
  v6 = a3 * v5;
  if ( !is_mul_ok(a3, v5) )
    return nullptr;
  if ( v6 > 0xFFFFFFEF )
    return nullptr;
  v7 = (_DWORD *)(***(this + 1))(*(this + 1), v6 + 16);
  if ( v7 == nullptr )
    return nullptr;
  *v7 = this;
  v7[2] = v5 - 1;
  v7[3] = 1;
  v7[1] = 0;
  return v7;
}

// Address: 0x10001540
int __thiscall sub_10001540(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 4))(*(this + 1));
}

// Address: 0x10001550
int __thiscall sub_10001550(_DWORD **this, int a2, int a3, unsigned int a4)
{
  int result; // eax
  signed int v5; // esi
  unsigned int v6; // eax

  if ( a3 < 0 || 0x7FFFFFFF - a3 < 1 )
    return 0;
  v5 = (a3 + 8) & 0xFFFFFFF8;
  if ( a3 + 1 > v5 )
    return 0;
  v6 = a4 * v5;
  if ( !is_mul_ok(a4, v5) )
    return 0;
  if ( v6 > 0xFFFFFFEF )
    return 0;
  result = (*(int (__thiscall **)(_DWORD, int, unsigned int))(**(this + 1) + 8))(*(this + 1), a2, v6 + 16);
  if ( result == 0 )
    return 0;
  *(_DWORD *)(result + 8) = v5 - 1;
  return result;
}

// Address: 0x100015C0
volatile signed __int32 *__thiscall sub_100015C0(volatile signed __int32 *this)
{
  _InterlockedIncrement(this + 5);
  return this + 2;
}

// Address: 0x100015D0
void *__thiscall sub_100015D0(void *this)
{
  return this;
}

// Address: 0x100015E0
_DWORD *__thiscall sub_100015E0(_DWORD *Block, char a2)
{
  *Block = &ATL::CAtlStringMgr::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10007C2D(Block);
  return Block;
}

// Address: 0x10001610
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return true;
}

// Address: 0x10001620
int __thiscall sub_10001620(WCHAR *this)
{
  HANDLE ProcessHeap; // eax
  struct _IP_ADAPTER_INFO *v2; // eax
  struct _IP_ADAPTER_INFO *v3; // ebx
  HANDLE v5; // eax
  HANDLE v6; // eax
  struct _IP_ADAPTER_INFO *v7; // eax
  ULONG AdaptersInfo; // eax
  struct _IP_ADAPTER_INFO *v9; // esi
  int v10; // edi
  WCHAR *v11; // edx
  LPWSTR v12; // eax
  int v13; // edi
  WCHAR *v14; // edx
  LPWSTR v15; // eax
  int v16; // edi
  WCHAR *v17; // edx
  LPWSTR v18; // eax
  int v19; // edi
  WCHAR *v20; // edx
  LPWSTR v21; // eax
  int v22; // edi
  WCHAR *v23; // edx
  LPWSTR v24; // eax
  HANDLE v25; // eax
  ULONG v26; // [esp-4h] [ebp-4Ch]
  void *v27; // [esp-4h] [ebp-4Ch]
  int v28; // [esp+0h] [ebp-48h]
  int v29; // [esp+4h] [ebp-44h]
  int v30; // [esp+10h] [ebp-38h] BYREF
  int v31; // [esp+14h] [ebp-34h] BYREF
  int v32; // [esp+18h] [ebp-30h] BYREF
  LPWSTR lpWideCharStr; // [esp+1Ch] [ebp-2Ch] BYREF
  LPWSTR v34; // [esp+20h] [ebp-28h] BYREF
  LPWSTR v35; // [esp+24h] [ebp-24h] BYREF
  LPWSTR v36; // [esp+28h] [ebp-20h] BYREF
  LPWSTR v37[2]; // [esp+2Ch] [ebp-1Ch] BYREF
  LPVOID lpMem; // [esp+34h] [ebp-14h]
  ULONG SizePointer; // [esp+38h] [ebp-10h] BYREF
  int v40; // [esp+44h] [ebp-4h]

  v37[1] = this;
  SizePointer = 648;
  ProcessHeap = GetProcessHeap();
  v2 = (struct _IP_ADAPTER_INFO *)HeapAlloc(ProcessHeap, 0, 0x288u);
  v3 = v2;
  lpMem = v2;
  if ( v2 == nullptr )
    return sub_100010E0((int)"Error allocating memory needed to call GetAdaptersinfo\n");
  memset(v2, 0, 0x288u);
  if ( GetAdaptersInfo(v3, &SizePointer) == 111 )
  {
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v3);
    v26 = SizePointer;
    v6 = GetProcessHeap();
    v7 = (struct _IP_ADAPTER_INFO *)HeapAlloc(v6, 0, v26);
    v3 = v7;
    lpMem = v7;
    if ( v7 == nullptr )
      return sub_100010E0((int)"Error allocating memory needed to call GetAdaptersinfo\n");
    memset(v7, 0, SizePointer);
    AdaptersInfo = GetAdaptersInfo(v3, &SizePointer);
  }
  else
  {
    AdaptersInfo = GetLastError();
  }
  if ( AdaptersInfo == 0 )
  {
    v9 = v3;
    while ( 1 )
    {
      if ( v9->Type == 6 )
      {
        sub_10001A30(v28, v29);
        v40 = 0;
        sub_10005D30((int)&v30, (wchar_t *)L"%d", v9->Index);
        sub_10005D30((int)&v31, (wchar_t *)L"%d", v9->DhcpEnabled);
        if ( v9 == (struct _IP_ADAPTER_INFO *)-8
          || (v10 = MultiByteToWideChar(3u, 0, v9->AdapterName, -1, nullptr, 0) - 1) <= 0 )
        {
          sub_10004960(&lpWideCharStr);
        }
        else
        {
          v11 = lpWideCharStr;
          if ( ((1 - *((_DWORD *)lpWideCharStr - 1)) | (*((_DWORD *)lpWideCharStr - 2) - v10)) < 0 )
          {
            sub_10004F70(v10);
            v11 = lpWideCharStr;
          }
          MultiByteToWideChar(3u, 0, v9->AdapterName, -1, v11, v10);
          v12 = lpWideCharStr;
          if ( v10 > *((_DWORD *)lpWideCharStr - 2) )
LABEL_48:
            sub_10001110(-2147024809);
          *((_DWORD *)lpWideCharStr - 3) = v10;
          v12[v10] = 0;
        }
        if ( v9 == (struct _IP_ADAPTER_INFO *)-268
          || (v13 = MultiByteToWideChar(3u, 0, v9->Description, -1, nullptr, 0) - 1) <= 0 )
        {
          sub_10004960(&v34);
        }
        else
        {
          v14 = v34;
          if ( ((1 - *((_DWORD *)v34 - 1)) | (*((_DWORD *)v34 - 2) - v13)) < 0 )
          {
            sub_10004F70(v13);
            v14 = v34;
          }
          MultiByteToWideChar(3u, 0, v9->Description, -1, v14, v13);
          v15 = v34;
          if ( v13 > *((_DWORD *)v34 - 2) )
            goto LABEL_48;
          *((_DWORD *)v34 - 3) = v13;
          v15[v13] = 0;
        }
        sub_10005D30((int)&v32, (wchar_t *)L"%.2X-%.2X-%.2X-%.2X-%.2X-%.2X-%.2X-%.2X", v9->Address[0]);
        if ( v9 == (struct _IP_ADAPTER_INFO *)-432
          || (v16 = MultiByteToWideChar(3u, 0, v9->IpAddressList.IpAddress.String, -1, nullptr, 0) - 1) <= 0 )
        {
          sub_10004960(&v35);
        }
        else
        {
          v17 = v35;
          if ( ((1 - *((_DWORD *)v35 - 1)) | (*((_DWORD *)v35 - 2) - v16)) < 0 )
          {
            sub_10004F70(v16);
            v17 = v35;
          }
          MultiByteToWideChar(3u, 0, v9->IpAddressList.IpAddress.String, -1, v17, v16);
          v18 = v35;
          if ( v16 > *((_DWORD *)v35 - 2) )
            goto LABEL_48;
          *((_DWORD *)v35 - 3) = v16;
          v18[v16] = 0;
        }
        if ( v9 == (struct _IP_ADAPTER_INFO *)-448
          || (v19 = MultiByteToWideChar(3u, 0, v9->IpAddressList.IpMask.String, -1, nullptr, 0) - 1) <= 0 )
        {
          sub_10004960(&v36);
        }
        else
        {
          v20 = v36;
          if ( ((1 - *((_DWORD *)v36 - 1)) | (*((_DWORD *)v36 - 2) - v19)) < 0 )
          {
            sub_10004F70(v19);
            v20 = v36;
          }
          MultiByteToWideChar(3u, 0, v9->IpAddressList.IpMask.String, -1, v20, v19);
          v21 = v36;
          if ( v19 > *((_DWORD *)v36 - 2) )
            goto LABEL_48;
          *((_DWORD *)v36 - 3) = v19;
          v21[v19] = 0;
        }
        if ( v9 == (struct _IP_ADAPTER_INFO *)-472
          || (v22 = MultiByteToWideChar(3u, 0, v9->GatewayList.IpAddress.String, -1, nullptr, 0) - 1) <= 0 )
        {
          sub_10004960(v37);
        }
        else
        {
          v23 = v37[0];
          if ( ((1 - *((_DWORD *)v37[0] - 1)) | (*((_DWORD *)v37[0] - 2) - v22)) < 0 )
          {
            sub_10004F70(v22);
            v23 = v37[0];
          }
          MultiByteToWideChar(3u, 0, v9->GatewayList.IpAddress.String, -1, v23, v22);
          v24 = v37[0];
          if ( v22 > *((_DWORD *)v37[0] - 2) )
            goto LABEL_48;
          *((_DWORD *)v37[0] - 3) = v22;
          v24[v22] = 0;
        }
        sub_10004310(&v30);
        v40 = -1;
        sub_10001B70(&v30);
      }
      v9 = v9->Next;
      if ( v9 == nullptr )
        goto LABEL_50;
    }
  }
  sub_100010E0((int)"GetAdaptersInfo failed with error: %d\n", AdaptersInfo);
LABEL_50:
  v27 = lpMem;
  v25 = GetProcessHeap();
  return HeapFree(v25, 0, v27);
}

// Address: 0x10001A30
_DWORD *__thiscall sub_10001A30(_DWORD *this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx

  v2 = sub_100013D0();
  if ( v2 == nullptr )
    sub_10001110(-2147467259);
  *this = (*(int (__thiscall **)(int *))(*v2 + 12))(v2) + 16;
  v3 = sub_100013D0();
  if ( v3 == nullptr )
    sub_10001110(-2147467259);
  *(this + 1) = (*(int (__thiscall **)(int *))(*v3 + 12))(v3) + 16;
  v4 = sub_100013D0();
  if ( v4 == nullptr )
    sub_10001110(-2147467259);
  *(this + 2) = (*(int (__thiscall **)(int *))(*v4 + 12))(v4) + 16;
  v5 = sub_100013D0();
  if ( v5 == nullptr )
    sub_10001110(-2147467259);
  *(this + 3) = (*(int (__thiscall **)(int *))(*v5 + 12))(v5) + 16;
  v6 = sub_100013D0();
  if ( v6 == nullptr )
    sub_10001110(-2147467259);
  *(this + 4) = (*(int (__thiscall **)(int *))(*v6 + 12))(v6) + 16;
  v7 = sub_100013D0();
  if ( v7 == nullptr )
    sub_10001110(-2147467259);
  *(this + 5) = (*(int (__thiscall **)(int *))(*v7 + 12))(v7) + 16;
  v8 = sub_100013D0();
  if ( v8 == nullptr )
    sub_10001110(-2147467259);
  *(this + 6) = (*(int (__thiscall **)(int *))(*v8 + 12))(v8) + 16;
  v9 = sub_100013D0();
  if ( v9 == nullptr )
    sub_10001110(-2147467259);
  *(this + 7) = (*(int (__thiscall **)(int *))(*v9 + 12))(v9) + 16;
  return this;
}

// Address: 0x10001B70
int __thiscall sub_10001B70(_DWORD *this)
{
  volatile signed __int32 *v2; // edx
  volatile signed __int32 *v3; // edx
  volatile signed __int32 *v4; // edx
  volatile signed __int32 *v5; // edx
  volatile signed __int32 *v6; // edx
  volatile signed __int32 *v7; // edx
  volatile signed __int32 *v8; // edx
  int result; // eax
  volatile signed __int32 *v10; // edx

  v2 = (volatile signed __int32 *)(*(this + 7) - 16);
  if ( _InterlockedDecrement(v2 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v2 + 4))(v2);
  v3 = (volatile signed __int32 *)(*(this + 6) - 16);
  if ( _InterlockedDecrement(v3 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v3 + 4))(v3);
  v4 = (volatile signed __int32 *)(*(this + 5) - 16);
  if ( _InterlockedDecrement(v4 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v4 + 4))(v4);
  v5 = (volatile signed __int32 *)(*(this + 4) - 16);
  if ( _InterlockedDecrement(v5 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v5 + 4))(v5);
  v6 = (volatile signed __int32 *)(*(this + 3) - 16);
  if ( _InterlockedDecrement(v6 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v6 + 4))(v6);
  v7 = (volatile signed __int32 *)(*(this + 2) - 16);
  if ( _InterlockedDecrement(v7 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v7 + 4))(v7);
  v8 = (volatile signed __int32 *)(*(this + 1) - 16);
  result = _InterlockedDecrement(v8 + 3);
  if ( result <= 0 )
    result = (*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v8 + 4))(v8);
  v10 = (volatile signed __int32 *)(*this - 16);
  if ( _InterlockedDecrement(v10 + 3) <= 0 )
    return (*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v10 + 4))(v10);
  return result;
}

// Address: 0x10001C80
IP_ADAPTER_ADDRESSES_LH *__thiscall sub_10001C80(const unsigned __int16 ***this)
{
  const unsigned __int16 ***v1; // ebx
  HANDLE ProcessHeap; // eax
  IP_ADAPTER_ADDRESSES_LH *result; // eax
  HANDLE v4; // eax
  HANDLE v5; // eax
  IP_ADAPTER_ADDRESSES_LH *v6; // edi
  IP_ADAPTER_ADDRESSES_LH *v7; // eax
  const unsigned __int16 **v8; // esi
  const unsigned __int16 **v9; // edi
  const unsigned __int16 **v10; // eax
  int v11; // eax
  bool v12; // bl
  unsigned __int16 *v13; // edx
  volatile signed __int32 *v14; // esi
  int v15; // ebx
  struct _IP_ADAPTER_DNS_SERVER_ADDRESS_XP *Next; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  HANDLE v20; // eax
  IF_INDEX IfIndex; // [esp-10h] [ebp-64h]
  void *v22; // [esp-4h] [ebp-58h]
  ULONG v23; // [esp-4h] [ebp-58h]
  PIP_ADAPTER_DNS_SERVER_ADDRESS_XP FirstDnsServerAddress; // [esp+14h] [ebp-40h]
  int v25; // [esp+18h] [ebp-3Ch]
  int Src; // [esp+1Ch] [ebp-38h] BYREF
  int v27; // [esp+20h] [ebp-34h] BYREF
  int v28; // [esp+24h] [ebp-30h] BYREF
  const unsigned __int16 ***v29; // [esp+28h] [ebp-2Ch]
  ULONG SizePointer; // [esp+2Ch] [ebp-28h] BYREF
  LPVOID lpMem; // [esp+30h] [ebp-24h]
  IP_ADAPTER_ADDRESSES_LH *v32; // [esp+34h] [ebp-20h]
  CHAR MultiByteStr; // [esp+38h] [ebp-1Ch] BYREF
  __int64 v34; // [esp+39h] [ebp-1Bh]
  char v35; // [esp+41h] [ebp-13h]
  int v36; // [esp+50h] [ebp-4h]

  v1 = this;
  v29 = this;
  SizePointer = 376;
  ProcessHeap = GetProcessHeap();
  lpMem = HeapAlloc(ProcessHeap, 0, 0x178u);
  result = (IP_ADAPTER_ADDRESSES_LH *)GetAdaptersAddresses(
                                        2u,
                                        0x10u,
                                        nullptr,
                                        (PIP_ADAPTER_ADDRESSES)lpMem,
                                        &SizePointer);
  if ( result == (IP_ADAPTER_ADDRESSES_LH *)111 )
  {
    v22 = lpMem;
    v4 = GetProcessHeap();
    HeapFree(v4, 0, v22);
    v23 = SizePointer;
    v5 = GetProcessHeap();
    result = (IP_ADAPTER_ADDRESSES_LH *)HeapAlloc(v5, 0, v23);
    v6 = result;
    lpMem = result;
  }
  else
  {
    v6 = (IP_ADAPTER_ADDRESSES_LH *)lpMem;
  }
  if ( v6 != nullptr )
  {
    if ( GetAdaptersAddresses(2u, 0x10u, nullptr, v6, &SizePointer) == 0 )
    {
      v7 = v6;
      v32 = v6;
      do
      {
        FirstDnsServerAddress = v7->FirstDnsServerAddress;
        if ( FirstDnsServerAddress != nullptr && (v7->Flags & 1) != 0 )
        {
          v8 = *v1;
          v9 = v1[1];
          if ( *v1 != v9 )
          {
            while ( 1 )
            {
              MultiByteStr = 0;
              IfIndex = v7->IfIndex;
              v35 = 0;
              v34 = 0;
              unknown_libname_7(IfIndex, &MultiByteStr, 10, 10);
              v10 = (const unsigned __int16 **)sub_10004570(&MultiByteStr);
              v36 = 0;
              if ( *v10 == nullptr )
                sub_10001110(-2147467259);
              v11 = wcscmp(*v8, *v10);
              if ( v11 != 0 )
                v11 = v11 < 0 ? -1 : 1;
              v36 = -1;
              v12 = v11 == 0;
              if ( _InterlockedDecrement((volatile signed __int32 *)(v25 - 16 + 12)) <= 0 )
                (*(void (__stdcall **)(int))(**(_DWORD **)(v25 - 16) + 4))(v25 - 16);
              if ( v12 )
                break;
              v7 = v32;
              v8 += 8;
              if ( v8 == v9 )
                goto LABEL_33;
            }
            sub_10001F80(&Src);
            v36 = 1;
            v13 = (unsigned __int16 *)*v8;
            v14 = (volatile signed __int32 *)(Src - 16);
            if ( v13 - 8 != (unsigned __int16 *)(Src - 16) )
            {
              if ( *((int *)v14 + 3) >= 0 && *((_DWORD *)v13 - 4) == *v14 )
              {
                v15 = sub_10004F10();
                if ( _InterlockedDecrement(v14 + 3) <= 0 )
                  (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v14 + 4))(v14);
                Src = v15 + 16;
              }
              else
              {
                sub_10004FD0(v13, *((_DWORD *)v13 - 3));
              }
            }
            sub_10005D30((int)&v27, (wchar_t *)L"%d.%d.%d.%d", FirstDnsServerAddress->Address.lpSockaddr->sa_data[2]);
            Next = FirstDnsServerAddress->Next;
            if ( Next != nullptr )
              sub_10005D30((int)&v28, (wchar_t *)L"%d.%d.%d.%d", Next->Address.lpSockaddr->sa_data[2]);
            sub_10004100(&Src);
            v36 = -1;
            v17 = v28 - 16;
            if ( _InterlockedDecrement((volatile signed __int32 *)(v28 - 16 + 12)) <= 0 )
              (*(void (__stdcall **)(int))(**(_DWORD **)v17 + 4))(v17);
            v18 = v27 - 16;
            if ( _InterlockedDecrement((volatile signed __int32 *)(v27 - 16 + 12)) <= 0 )
              (*(void (__stdcall **)(int))(**(_DWORD **)v18 + 4))(v18);
            v19 = Src - 16;
            if ( _InterlockedDecrement((volatile signed __int32 *)(Src - 16 + 12)) <= 0 )
              (*(void (__stdcall **)(int))(**(_DWORD **)v19 + 4))(v19);
LABEL_33:
            v7 = v32;
            v1 = v29;
          }
        }
        v7 = v7->Next;
        v32 = v7;
      }
      while ( v7 != nullptr );
      v6 = (IP_ADAPTER_ADDRESSES_LH *)lpMem;
    }
    v20 = GetProcessHeap();
    return (IP_ADAPTER_ADDRESSES_LH *)HeapFree(v20, 0, v6);
  }
  return result;
}

// Address: 0x10001F80
_DWORD *__thiscall sub_10001F80(_DWORD *this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx

  v2 = sub_100013D0();
  if ( v2 == nullptr )
    sub_10001110(-2147467259);
  *this = (*(int (__thiscall **)(int *))(*v2 + 12))(v2) + 16;
  v3 = sub_100013D0();
  if ( v3 == nullptr )
    sub_10001110(-2147467259);
  *(this + 1) = (*(int (__thiscall **)(int *))(*v3 + 12))(v3) + 16;
  v4 = sub_100013D0();
  if ( v4 == nullptr )
    sub_10001110(-2147467259);
  *(this + 2) = (*(int (__thiscall **)(int *))(*v4 + 12))(v4) + 16;
  return this;
}

// Address: 0x10002020
int __thiscall sub_10002020(_DWORD *this)
{
  volatile signed __int32 *v2; // edx
  volatile signed __int32 *v3; // edx
  int result; // eax
  volatile signed __int32 *v5; // edx

  v2 = (volatile signed __int32 *)(*(this + 2) - 16);
  if ( _InterlockedDecrement(v2 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v2 + 4))(v2);
  v3 = (volatile signed __int32 *)(*(this + 1) - 16);
  result = _InterlockedDecrement(v3 + 3);
  if ( result <= 0 )
    result = (*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v3 + 4))(v3);
  v5 = (volatile signed __int32 *)(*this - 16);
  if ( _InterlockedDecrement(v5 + 3) <= 0 )
    return (*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v5 + 4))(v5);
  return result;
}

// Address: 0x100020B0
int innoBackupIPinfo()
{
  int *v0; // eax
  const WCHAR *v1; // edi
  int v2; // ecx
  void **v3; // eax
  const WCHAR *v4; // ecx
  char *v5; // edx
  volatile signed __int32 *v6; // edi
  int v7; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // ecx
  const unsigned __int16 **v11; // esi
  int *v12; // eax
  const WCHAR *v13; // esi
  volatile signed __int32 *v14; // esi
  signed int v15; // esi
  int *v16; // eax
  const WCHAR *v17; // esi
  volatile signed __int32 *v18; // esi
  LPCWSTR v19; // edx
  volatile signed __int32 *v20; // edi
  int v22; // [esp-8h] [ebp-498h]
  int v23; // [esp-8h] [ebp-498h]
  const WCHAR *v24; // [esp-8h] [ebp-498h]
  int v25; // [esp-4h] [ebp-494h]
  int v26; // [esp-4h] [ebp-494h]
  int v27; // [esp+Ch] [ebp-484h] BYREF
  int v28; // [esp+10h] [ebp-480h]
  int v29; // [esp+14h] [ebp-47Ch]
  void **v30; // [esp+18h] [ebp-478h]
  HKEY hKey; // [esp+1Ch] [ebp-474h]
  const unsigned __int16 **v32; // [esp+28h] [ebp-468h] BYREF
  int v33; // [esp+2Ch] [ebp-464h]
  int v34; // [esp+30h] [ebp-460h]
  char ArgList[4]; // [esp+34h] [ebp-45Ch]
  LPCWSTR lpString; // [esp+38h] [ebp-458h] BYREF
  int v37; // [esp+3Ch] [ebp-454h]
  const WCHAR *v38; // [esp+40h] [ebp-450h]
  LPCWSTR lpAppName; // [esp+44h] [ebp-44Ch] BYREF
  DWORD nSize; // [esp+48h] [ebp-448h] BYREF
  const unsigned __int16 **v41; // [esp+4Ch] [ebp-444h]
  WCHAR String[260]; // [esp+50h] [ebp-440h] BYREF
  WCHAR Filename[260]; // [esp+258h] [ebp-238h] BYREF
  WCHAR Buffer; // [esp+460h] [ebp-30h] BYREF
  __int128 v45; // [esp+462h] [ebp-2Eh]
  __int64 v46; // [esp+472h] [ebp-1Eh]
  int v47; // [esp+47Ah] [ebp-16h]
  __int16 v48; // [esp+47Eh] [ebp-12h]
  int v49; // [esp+48Ch] [ebp-4h]

  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  v49 = 1;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v0 = sub_100013D0();
  if ( v0 == nullptr )
    goto LABEL_2;
  v1 = (const WCHAR *)((*(int (__thiscall **)(int *))(*v0 + 12))(v0) + 16);
  v38 = v1;
  LOBYTE(v49) = 2;
  if ( GetModuleFileNameW(nullptr, Filename, 0x104u) != 0 )
  {
    *wcsrchr(Filename, 0x5Cu) = 0;
    sub_10004FD0(Filename, wcslen(Filename));
    v1 = v38;
  }
  v3 = (void **)sub_10004450(v2);
  LOBYTE(v49) = 3;
  v4 = v1 - 8;
  v5 = (char *)*v3;
  lpAppName = v1 - 8;
  v37 = (int)(v5 - 16);
  if ( v5 - 16 != (char *)(v1 - 8) )
  {
    v6 = (volatile signed __int32 *)(v4 + 6);
    if ( *((int *)v4 + 3) >= 0 && *((_DWORD *)v5 - 4) == *(_DWORD *)v4 )
    {
      v7 = sub_10004F10(v37);
      v37 = v7;
      if ( _InterlockedDecrement(v6) <= 0 )
      {
        (*(void (__thiscall **)(_DWORD, LPCWSTR))(**(_DWORD **)lpAppName + 4))(*(_DWORD *)lpAppName, lpAppName);
        v7 = v37;
      }
      v1 = (const WCHAR *)(v7 + 16);
      v38 = (const WCHAR *)(v7 + 16);
    }
    else
    {
      sub_10004FD0(v5, *((_DWORD *)v5 - 3));
      v1 = v38;
    }
  }
  LOBYTE(v49) = 2;
  if ( _InterlockedDecrement((volatile signed __int32 *)(nSize - 16 + 12)) <= 0 )
    (*(void (__thiscall **)(_DWORD, DWORD))(**(_DWORD **)(nSize - 16) + 4))(*(_DWORD *)(nSize - 16), nSize - 16);
  sub_10001620((WCHAR *)&v32);
  sub_10001C80(&v32);
  DeleteFileW(v1);
  v8 = sub_100013D0();
  if ( v8 == nullptr )
    sub_10001110(-2147467259);
  lpString = (LPCWSTR)((*(int (__thiscall **)(int *))(*v8 + 12))(v8) + 16);
  LOBYTE(v49) = 4;
  lpAppName = (LPCWSTR)((v33 - (int)v32) >> 5);
  sub_10005D30((int)&lpString, (wchar_t *)L"%d", (char)lpAppName);
  WritePrivateProfileStringW(L"BASE", L"ipinfo_cnt", lpString, v1);
  v37 = (v28 - v27) / 12;
  sub_10005D30((int)&lpString, (wchar_t *)L"%d", v37);
  WritePrivateProfileStringW(L"BASE", L"dnsinfo_cnt", lpString, v1);
  v30 = &CRegInfo::`vftable';
  hKey = nullptr;
  LOBYTE(v49) = 5;
  Buffer = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  if ( sub_10007270(v9, L"SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ComputerName", v22, v25) != 0 )
  {
    sub_10007320(L"ComputerName", (int)&Buffer);
    SetLastError(0);
  }
  if ( wcslen(&Buffer) == 0 )
    GetComputerNameExW(ComputerNameDnsHostname, &Buffer, &nSize);
  if ( wcslen(&Buffer) != 0 )
    WritePrivateProfileStringW(L"BASE", L"Pcname", &Buffer, v1);
  memset(String, 0, sizeof(String));
  if ( sub_10007270(v10, L"SYSTEM\\CurrentControlSet\\Services\\LanmanServer\\Parameters", v23, v26) != 0
    && sub_10007320(L"srvcomment", (int)String) != 0 )
  {
    WritePrivateProfileStringW(L"BASE", L"Pcdesc", String, v1);
  }
  *(_DWORD *)ArgList = 0;
  if ( (int)lpAppName > 0 )
  {
    v11 = v32 + 2;
    v41 = v32 + 2;
    while ( 1 )
    {
      v12 = sub_100013D0();
      if ( v12 == nullptr )
        break;
      nSize = (*(int (__thiscall **)(int *))(*v12 + 12))(v12) + 16;
      LOBYTE(v49) = 6;
      sub_10005D30((int)&nSize, (wchar_t *)L"IPinfo%d", ArgList[0]);
      v24 = *(v11 - 2);
      v13 = (const WCHAR *)nSize;
      WritePrivateProfileStringW((LPCWSTR)nSize, L"Index", v24, v1);
      WritePrivateProfileStringW(v13, L"Dhcp", *(v41 - 1), v1);
      WritePrivateProfileStringW(v13, L"MacAddr", *v41, v1);
      WritePrivateProfileStringW(v13, L"Name", v41[1], v1);
      WritePrivateProfileStringW(v13, L"Desc", v41[2], v1);
      WritePrivateProfileStringW(v13, L"IpAddr", v41[3], v1);
      WritePrivateProfileStringW(v13, L"SubNet", v41[4], v1);
      WritePrivateProfileStringW(v13, L"GateWay", v41[5], v1);
      LOBYTE(v49) = 5;
      v14 = (volatile signed __int32 *)(v13 - 8);
      if ( _InterlockedDecrement(v14 + 3) <= 0 )
        (*(void (__thiscall **)(volatile signed __int32, volatile signed __int32 *))(**(_DWORD **)v14 + 4))(*v14, v14);
      v11 = v41 + 8;
      ++*(_DWORD *)ArgList;
      v41 += 8;
      if ( *(int *)ArgList >= (int)lpAppName )
        goto LABEL_31;
    }
LABEL_2:
    sub_10001110(-2147467259);
  }
LABEL_31:
  LOBYTE(v15) = 0;
  nSize = 0;
  if ( v37 > 0 )
  {
    v41 = (const unsigned __int16 **)(v27 + 8);
    do
    {
      v16 = sub_100013D0();
      if ( v16 == nullptr )
        goto LABEL_2;
      lpAppName = (LPCWSTR)((*(int (__thiscall **)(int *))(*v16 + 12))(v16) + 16);
      LOBYTE(v49) = 7;
      sub_10005D30((int)&lpAppName, (wchar_t *)L"Dnsinfo%d", v15);
      v17 = lpAppName;
      WritePrivateProfileStringW(lpAppName, L"Index", *(v41 - 2), v1);
      WritePrivateProfileStringW(v17, L"Dns1", *(v41 - 1), v1);
      WritePrivateProfileStringW(v17, L"Dns2", *v41, v1);
      LOBYTE(v49) = 5;
      v18 = (volatile signed __int32 *)(v17 - 8);
      if ( _InterlockedDecrement(v18 + 3) <= 0 )
        (*(void (__thiscall **)(volatile signed __int32, volatile signed __int32 *))(**(_DWORD **)v18 + 4))(*v18, v18);
      v41 += 3;
      v15 = nSize + 1;
      nSize = v15;
    }
    while ( v15 < v37 );
  }
  v30 = &CRegInfo::`vftable';
  SetLastError(0);
  LOBYTE(v49) = 2;
  v19 = lpString - 8;
  if ( _InterlockedDecrement((volatile signed __int32 *)lpString - 1) <= 0 )
    (*(void (__thiscall **)(_DWORD, LPCWSTR))(**(_DWORD **)v19 + 4))(*(_DWORD *)v19, v19);
  LOBYTE(v49) = 1;
  v20 = (volatile signed __int32 *)(v1 - 8);
  if ( _InterlockedDecrement(v20 + 3) <= 0 )
    (*(void (__thiscall **)(volatile signed __int32, volatile signed __int32 *))(**(_DWORD **)v20 + 4))(*v20, v20);
  sub_10004790(&v27);
  return sub_10004830(&v32);
}

// Address: 0x10002740
int __fastcall sub_10002740(int a1, const WCHAR *a2, const WCHAR *lpKeyName, int a4, const WCHAR *lpFileName)
{
  int v7; // ecx

  memset(&Src, 0, 0x208u);
  GetPrivateProfileStringW(a2, lpKeyName, &Default, &Src, 0x104u, lpFileName);
  sub_10004670(v7);
  return a1;
}

// Address: 0x100027A0
void innoRestoreIPinfo()
{
  int *v0; // eax
  const WCHAR *v1; // edi
  int v2; // ecx
  void **v3; // eax
  const WCHAR *v4; // ecx
  char *v5; // edx
  volatile signed __int32 *v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  BYTE *v10; // eax
  int v11; // ecx
  BYTE *v12; // eax
  int v13; // ecx
  BYTE *v14; // eax
  int v15; // ecx
  BYTE *v16; // eax
  int v17; // ecx
  BYTE *v18; // eax
  BYTE *v19; // eax
  int *v20; // eax
  char v21; // al
  int v22; // esi
  volatile signed __int32 *v23; // esi
  int v24; // ecx
  BYTE *v25; // eax
  LSTATUS v26; // eax
  int v27; // esi
  int *v28; // eax
  const WCHAR *v29; // esi
  int v30; // ecx
  void **v31; // eax
  char *v32; // edx
  int v33; // ecx
  bool v34; // sf
  int v35; // eax
  int v36; // edx
  void **v37; // eax
  char *v38; // edx
  int v39; // ecx
  int v40; // edx
  void **v41; // eax
  char *v42; // edx
  int v43; // ecx
  int v44; // edx
  void **v45; // eax
  char *v46; // edx
  int v47; // ecx
  int v48; // edx
  void **v49; // eax
  char *v50; // edx
  int v51; // ecx
  int v52; // edx
  void **v53; // eax
  char *v54; // edx
  int v55; // ecx
  int v56; // edx
  void **v57; // eax
  char *v58; // edx
  int v59; // ecx
  _DWORD *v60; // edx
  void **v61; // eax
  char *v62; // edx
  int v63; // ecx
  volatile signed __int32 *v64; // edx
  volatile signed __int32 *v65; // esi
  int v66; // esi
  int *v67; // eax
  int *v68; // eax
  int *v69; // eax
  int *v70; // eax
  const WCHAR *v71; // esi
  int v72; // ecx
  void **v73; // eax
  char *v74; // edx
  int v75; // ecx
  int v76; // eax
  int v77; // edx
  void **v78; // eax
  char *v79; // edx
  int v80; // ecx
  int v81; // edx
  void **v82; // eax
  char *v83; // edx
  int v84; // ecx
  int v85; // edx
  int v86; // edx
  int v87; // edx
  int v88; // edx
  int v89; // esi
  _DWORD *v90; // eax
  _DWORD *v91; // ecx
  const unsigned __int16 *v92; // ecx
  int v93; // ecx
  bool v94; // zf
  const unsigned __int16 **v95; // edi
  const unsigned __int16 *v96; // eax
  int v97; // eax
  int *v98; // eax
  int v99; // eax
  int v100; // edi
  _DWORD *v101; // esi
  _DWORD *v102; // eax
  const unsigned __int16 *v103; // eax
  int v104; // eax
  volatile signed __int32 *v105; // edi
  BYTE *v106; // edx
  BYTE *v107; // edx
  LSTATUS v108; // eax
  volatile signed __int32 *v109; // edi
  int v110; // [esp-8h] [ebp-4D8h]
  int v111; // [esp-8h] [ebp-4D8h]
  int v112; // [esp-8h] [ebp-4D8h]
  int v113; // [esp-8h] [ebp-4D8h]
  int v114; // [esp-8h] [ebp-4D8h]
  int v115; // [esp-8h] [ebp-4D8h]
  int v116; // [esp-8h] [ebp-4D8h]
  int v117; // [esp-4h] [ebp-4D4h]
  int v118; // [esp-4h] [ebp-4D4h]
  int v119; // [esp-4h] [ebp-4D4h]
  int v120; // [esp-4h] [ebp-4D4h]
  int v121; // [esp-4h] [ebp-4D4h]
  int v122; // [esp-4h] [ebp-4D4h]
  int v123; // [esp-4h] [ebp-4D4h]
  _DWORD v124[2]; // [esp+Ch] [ebp-4C4h] BYREF
  int v125; // [esp+14h] [ebp-4BCh] BYREF
  int v126; // [esp+18h] [ebp-4B8h] BYREF
  int v127; // [esp+1Ch] [ebp-4B4h] BYREF
  int v128; // [esp+20h] [ebp-4B0h]
  int v129; // [esp+24h] [ebp-4ACh]
  int v130; // [esp+28h] [ebp-4A8h] BYREF
  int v131; // [esp+2Ch] [ebp-4A4h] BYREF
  int v132; // [esp+30h] [ebp-4A0h] BYREF
  signed int v133; // [esp+34h] [ebp-49Ch] BYREF
  void *v134[2]; // [esp+38h] [ebp-498h] BYREF
  void *Block[2]; // [esp+40h] [ebp-490h] BYREF
  int v136; // [esp+48h] [ebp-488h] BYREF
  int v137; // [esp+4Ch] [ebp-484h]
  int v138; // [esp+50h] [ebp-480h]
  BYTE *v139; // [esp+54h] [ebp-47Ch] BYREF
  void **v140; // [esp+58h] [ebp-478h] BYREF
  HKEY hKey; // [esp+5Ch] [ebp-474h]
  volatile signed __int32 *v142; // [esp+68h] [ebp-468h] BYREF
  _DWORD *v143; // [esp+6Ch] [ebp-464h] BYREF
  int PrivateProfileIntW; // [esp+70h] [ebp-460h] BYREF
  volatile signed __int32 *v145; // [esp+74h] [ebp-45Ch]
  int v146; // [esp+78h] [ebp-458h] BYREF
  const WCHAR *v147; // [esp+7Ch] [ebp-454h]
  int v148; // [esp+80h] [ebp-450h] BYREF
  const unsigned __int16 **v149; // [esp+84h] [ebp-44Ch]
  char *v150; // [esp+88h] [ebp-448h]
  BYTE *lpData; // [esp+8Ch] [ebp-444h] BYREF
  wchar_t Filename[260]; // [esp+90h] [ebp-440h] BYREF
  int v153[130]; // [esp+298h] [ebp-238h] BYREF
  int v154[8]; // [esp+4A0h] [ebp-30h] BYREF
  int v155; // [esp+4CCh] [ebp-4h]

  v134[1] = nullptr;
  v134[0] = (void *)sub_10005CA0();
  v155 = 2;
  Block[1] = nullptr;
  Block[0] = (void *)sub_10005C30();
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v0 = sub_100013D0();
  if ( v0 == nullptr )
    goto LABEL_2;
  v1 = (const WCHAR *)((*(int (__thiscall **)(int *))(*v0 + 12))(v0) + 16);
  v147 = v1;
  LOBYTE(v155) = 3;
  if ( GetModuleFileNameW(nullptr, Filename, 0x104u) != 0 )
  {
    *wcsrchr(Filename, 0x5Cu) = 0;
    sub_10004FD0(Filename, wcslen(Filename));
    v1 = v147;
  }
  v3 = (void **)sub_10004450(v2);
  LOBYTE(v155) = 4;
  v4 = v1 - 8;
  v5 = (char *)*v3;
  v148 = (int)(v1 - 8);
  v149 = (const unsigned __int16 **)(v5 - 16);
  if ( v5 - 16 != (char *)(v1 - 8) )
  {
    v6 = (volatile signed __int32 *)(v4 + 6);
    if ( *((int *)v4 + 3) >= 0 && *((_DWORD *)v5 - 4) == *(_DWORD *)v4 )
    {
      v7 = sub_10004F10(v149);
      v149 = (const unsigned __int16 **)v7;
      if ( _InterlockedDecrement(v6) <= 0 )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)v148 + 4))(*(_DWORD *)v148, v148);
        v7 = (int)v149;
      }
      v1 = (const WCHAR *)(v7 + 16);
      v147 = (const WCHAR *)(v7 + 16);
    }
    else
    {
      sub_10004FD0(v5, *((_DWORD *)v5 - 3));
      v1 = v147;
    }
  }
  LOBYTE(v155) = 3;
  if ( _InterlockedDecrement((volatile signed __int32 *)(v146 - 16 + 12)) <= 0 )
    (*(void (__stdcall **)(int))(**(_DWORD **)(v146 - 16) + 4))(v146 - 16);
  if ( PathFileExistsW(v1) )
  {
    v140 = &CRegInfo::`vftable';
    hKey = nullptr;
    LOBYTE(v155) = 5;
    memset(v153, 0, sizeof(v153));
    memset(v154, 0, sizeof(v154));
    sub_10002740((int)&lpData, L"BASE", L"Pcname", v8, v1);
    LOBYTE(v155) = 6;
    if ( *((_DWORD *)lpData - 3) != 0 )
    {
      v148 = 0;
      if ( sub_10007270(v9, L"SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ActiveComputerName", v110, v117) != 0 )
      {
        if ( sub_10007320(L"ComputerName", (int)v154) != 0 && sub_10004500(v153) != 0 )
        {
          v10 = lpData;
          if ( ((1 - *((_DWORD *)lpData - 1)) | *((_DWORD *)lpData - 2)) < 0 )
          {
            sub_10004F70(0);
            v10 = lpData;
          }
          sub_100073D0(L"ComputerName", v10);
          v148 = 1;
        }
        SetLastError(0);
        if ( v148 != 0 )
        {
          if ( sub_10007270(v9, L"SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ComputerName", v111, v118) != 0 )
          {
            if ( sub_10004500(v153) != 0 )
            {
              v12 = lpData;
              if ( ((1 - *((_DWORD *)lpData - 1)) | *((_DWORD *)lpData - 2)) < 0 )
              {
                sub_10004F70(0);
                v12 = lpData;
              }
              sub_100073D0(L"ComputerName", v12);
            }
            sub_100072F0(&v140);
          }
          if ( sub_10007270(v11, L"SYSTEM\\CurrentControlSet\\services\\Tcpip\\Parameters", v112, v119) != 0 )
          {
            if ( sub_10004500(v153) != 0 )
            {
              v14 = lpData;
              if ( ((1 - *((_DWORD *)lpData - 1)) | *((_DWORD *)lpData - 2)) < 0 )
              {
                sub_10004F70(0);
                v14 = lpData;
              }
              sub_100073D0(L"Hostname", v14);
            }
            sub_100072F0(&v140);
          }
          if ( sub_10007270(v13, L"SYSTEM\\CurrentControlSet\\services\\Tcpip\\Parameters", v113, v120) != 0 )
          {
            if ( sub_10004500(v153) != 0 )
            {
              v16 = lpData;
              if ( ((1 - *((_DWORD *)lpData - 1)) | *((_DWORD *)lpData - 2)) < 0 )
              {
                sub_10004F70(0);
                v16 = lpData;
              }
              sub_100073D0(L"NV Hostname", v16);
            }
            sub_100072F0(&v140);
          }
          if ( sub_10007270(v15, L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon", v114, v121) != 0 )
          {
            if ( sub_10004500(v153) != 0 )
            {
              v18 = lpData;
              if ( ((1 - *((_DWORD *)lpData - 1)) | *((_DWORD *)lpData - 2)) < 0 )
              {
                sub_10004F70(0);
                v18 = lpData;
              }
              sub_100073D0(L"DefaultDomainName", v18);
            }
            sub_100072F0(&v140);
          }
          if ( sub_10007270(v17, L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon", v115, v122) != 0 )
          {
            if ( sub_10004500(v153) != 0 )
            {
              v19 = lpData;
              if ( ((1 - *((_DWORD *)lpData - 1)) | *((_DWORD *)lpData - 2)) < 0 )
              {
                sub_10004F70(0);
                v19 = lpData;
              }
              sub_100073D0(L"AltDefaultDomainName", v19);
            }
            sub_100072F0(&v140);
          }
          v20 = sub_100013D0();
          if ( v20 == nullptr )
            sub_10001110(-2147467259);
          v148 = (*(int (__thiscall **)(int *))(*v20 + 12))(v20) + 16;
          LOBYTE(v155) = 7;
          v21 = (char)lpData;
          if ( ((1 - *((_DWORD *)lpData - 1)) | *((_DWORD *)lpData - 2)) < 0 )
          {
            sub_10004F70(0);
            v21 = (char)lpData;
          }
          sub_10005D30((int)&v148, (wchar_t *)L"set computername = \"%s\"", v21);
          v22 = v148;
          sub_1000D4A1(v148);
          LOBYTE(v155) = 6;
          v23 = (volatile signed __int32 *)(v22 - 16);
          if ( _InterlockedDecrement(v23 + 3) <= 0 )
            (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v23 + 4))(v23);
        }
      }
    }
    sub_10002740((int)&v139, L"BASE", L"Pcdesc", v9, v1);
    LOBYTE(v155) = 8;
    if ( *((_DWORD *)v139 - 3) != 0
      && sub_10007270(v24, L"SYSTEM\\CurrentControlSet\\Services\\LanmanServer\\Parameters", v116, v123) != 0 )
    {
      if ( sub_10007320(L"srvcomment", (int)v153) != 0 && sub_10004500(v153) != 0 )
      {
        v25 = v139;
        if ( ((1 - *((_DWORD *)v139 - 1)) | *((_DWORD *)v139 - 2)) < 0 )
        {
          sub_10004F70(0);
          v25 = v139;
        }
        sub_100073D0(L"srvcomment", v25);
      }
      v26 = 0;
      if ( hKey != nullptr )
      {
        v26 = RegCloseKey(hKey);
        hKey = nullptr;
      }
      SetLastError(v26);
    }
    LOBYTE(v27) = 0;
    PrivateProfileIntW = GetPrivateProfileIntW(L"BASE", L"ipinfo_cnt", 0, v1);
    v146 = 0;
    if ( PrivateProfileIntW > 0 )
    {
      while ( 1 )
      {
        sub_10001A30(v154);
        LOBYTE(v155) = 9;
        v28 = sub_100013D0();
        if ( v28 == nullptr )
          break;
        v148 = (*(int (__thiscall **)(int *))(*v28 + 12))(v28) + 16;
        LOBYTE(v155) = 10;
        sub_10005D30((int)&v148, (wchar_t *)L"IPinfo%d", v27);
        v29 = (const WCHAR *)v148;
        v31 = (void **)sub_10002740((int)&v126, (const WCHAR *)v148, L"Index", v30, v1);
        LOBYTE(v155) = 11;
        v32 = (char *)*v31;
        v33 = v154[0] - 16;
        v150 = (char *)(v154[0] - 16);
        v149 = (const unsigned __int16 **)(v32 - 16);
        if ( v32 - 16 != (char *)(v154[0] - 16) )
        {
          v34 = *(int *)(v33 + 12) < 0;
          v145 = (volatile signed __int32 *)(v33 + 12);
          if ( v34 || *((_DWORD *)v32 - 4) != *(_DWORD *)v33 )
          {
            sub_10004FD0(v32, *((_DWORD *)v32 - 3));
          }
          else
          {
            v35 = sub_10004F10(v149);
            v149 = (const unsigned __int16 **)v35;
            v33 = _InterlockedDecrement(v145);
            if ( v33 <= 0 )
            {
              (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)v150 + 4))(*(_DWORD *)v150, v150);
              v35 = (int)v149;
            }
            v154[0] = v35 + 16;
          }
        }
        LOBYTE(v155) = 10;
        v36 = v126 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v126 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v36 + 4))(v36);
        v37 = (void **)sub_10002740((int)&v125, v29, L"Dhcp", v33, v1);
        LOBYTE(v155) = 12;
        v38 = (char *)*v37;
        v150 = v38 - 16;
        v39 = v154[1] - 16;
        v149 = (const unsigned __int16 **)(v154[1] - 16);
        if ( v38 - 16 != (char *)(v154[1] - 16) )
        {
          v34 = *(int *)(v39 + 12) < 0;
          v145 = (volatile signed __int32 *)(v39 + 12);
          v1 = v147;
          if ( v34 || *((_DWORD *)v38 - 4) != *(_DWORD *)v39 )
          {
            sub_10004FD0(v38, *((_DWORD *)v38 - 3));
          }
          else
          {
            v150 = (char *)sub_10004F10(v150);
            v39 = _InterlockedDecrement(v145);
            if ( v39 <= 0 )
              (*(void (__thiscall **)(const unsigned __int16 *, const unsigned __int16 **))(*(_DWORD *)*v149 + 4))(
                *v149,
                v149);
            v154[1] = (int)(v150 + 16);
          }
        }
        LOBYTE(v155) = 10;
        v40 = v125 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v125 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v40 + 4))(v40);
        v41 = (void **)sub_10002740((int)&v133, v29, L"MacAddr", v39, v1);
        LOBYTE(v155) = 13;
        v42 = (char *)*v41;
        v150 = v42 - 16;
        v43 = v154[2] - 16;
        v149 = (const unsigned __int16 **)(v154[2] - 16);
        if ( v42 - 16 != (char *)(v154[2] - 16) )
        {
          v34 = *(int *)(v43 + 12) < 0;
          v145 = (volatile signed __int32 *)(v43 + 12);
          v1 = v147;
          if ( v34 || *((_DWORD *)v42 - 4) != *(_DWORD *)v43 )
          {
            sub_10004FD0(v42, *((_DWORD *)v42 - 3));
          }
          else
          {
            v150 = (char *)sub_10004F10(v150);
            v43 = _InterlockedDecrement(v145);
            if ( v43 <= 0 )
              (*(void (__thiscall **)(const unsigned __int16 *, const unsigned __int16 **))(*(_DWORD *)*v149 + 4))(
                *v149,
                v149);
            v154[2] = (int)(v150 + 16);
          }
        }
        LOBYTE(v155) = 10;
        v44 = v133 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v133 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v44 + 4))(v44);
        v45 = (void **)sub_10002740((int)&v132, v29, L"Name", v43, v1);
        LOBYTE(v155) = 14;
        v46 = (char *)*v45;
        v150 = v46 - 16;
        v47 = v154[3] - 16;
        v149 = (const unsigned __int16 **)(v154[3] - 16);
        if ( v46 - 16 != (char *)(v154[3] - 16) )
        {
          v34 = *(int *)(v47 + 12) < 0;
          v145 = (volatile signed __int32 *)(v47 + 12);
          v1 = v147;
          if ( v34 || *((_DWORD *)v46 - 4) != *(_DWORD *)v47 )
          {
            sub_10004FD0(v46, *((_DWORD *)v46 - 3));
          }
          else
          {
            v150 = (char *)sub_10004F10(v150);
            v47 = _InterlockedDecrement(v145);
            if ( v47 <= 0 )
              (*(void (__thiscall **)(const unsigned __int16 *, const unsigned __int16 **))(*(_DWORD *)*v149 + 4))(
                *v149,
                v149);
            v154[3] = (int)(v150 + 16);
          }
        }
        LOBYTE(v155) = 10;
        v48 = v132 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v132 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v48 + 4))(v48);
        v49 = (void **)sub_10002740((int)&v131, v29, L"Desc", v47, v1);
        LOBYTE(v155) = 15;
        v50 = (char *)*v49;
        v150 = v50 - 16;
        v51 = v154[4] - 16;
        v149 = (const unsigned __int16 **)(v154[4] - 16);
        if ( v50 - 16 != (char *)(v154[4] - 16) )
        {
          v34 = *(int *)(v51 + 12) < 0;
          v145 = (volatile signed __int32 *)(v51 + 12);
          v1 = v147;
          if ( v34 || *((_DWORD *)v50 - 4) != *(_DWORD *)v51 )
          {
            sub_10004FD0(v50, *((_DWORD *)v50 - 3));
          }
          else
          {
            v150 = (char *)sub_10004F10(v150);
            v51 = _InterlockedDecrement(v145);
            if ( v51 <= 0 )
              (*(void (__thiscall **)(const unsigned __int16 *, const unsigned __int16 **))(*(_DWORD *)*v149 + 4))(
                *v149,
                v149);
            v154[4] = (int)(v150 + 16);
          }
        }
        LOBYTE(v155) = 10;
        v52 = v131 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v131 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v52 + 4))(v52);
        v53 = (void **)sub_10002740((int)&v130, v29, L"IpAddr", v51, v1);
        LOBYTE(v155) = 16;
        v54 = (char *)*v53;
        v150 = v54 - 16;
        v55 = v154[5] - 16;
        v149 = (const unsigned __int16 **)(v154[5] - 16);
        if ( v54 - 16 != (char *)(v154[5] - 16) )
        {
          v34 = *(int *)(v55 + 12) < 0;
          v145 = (volatile signed __int32 *)(v55 + 12);
          v1 = v147;
          if ( v34 || *((_DWORD *)v54 - 4) != *(_DWORD *)v55 )
          {
            sub_10004FD0(v54, *((_DWORD *)v54 - 3));
          }
          else
          {
            v150 = (char *)sub_10004F10(v150);
            v55 = _InterlockedDecrement(v145);
            if ( v55 <= 0 )
              (*(void (__thiscall **)(const unsigned __int16 *, const unsigned __int16 **))(*(_DWORD *)*v149 + 4))(
                *v149,
                v149);
            v154[5] = (int)(v150 + 16);
          }
        }
        LOBYTE(v155) = 10;
        v56 = v130 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v130 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v56 + 4))(v56);
        v57 = (void **)sub_10002740((int)&v143, v29, L"SubNet", v55, v1);
        LOBYTE(v155) = 17;
        v58 = (char *)*v57;
        v150 = v58 - 16;
        v59 = v154[6] - 16;
        v149 = (const unsigned __int16 **)(v154[6] - 16);
        if ( v58 - 16 != (char *)(v154[6] - 16) )
        {
          v34 = *(int *)(v59 + 12) < 0;
          v145 = (volatile signed __int32 *)(v59 + 12);
          v1 = v147;
          if ( v34 || *((_DWORD *)v58 - 4) != *(_DWORD *)v59 )
          {
            sub_10004FD0(v58, *((_DWORD *)v58 - 3));
          }
          else
          {
            v150 = (char *)sub_10004F10(v150);
            v59 = _InterlockedDecrement(v145);
            if ( v59 <= 0 )
              (*(void (__thiscall **)(const unsigned __int16 *, const unsigned __int16 **))(*(_DWORD *)*v149 + 4))(
                *v149,
                v149);
            v154[6] = (int)(v150 + 16);
          }
        }
        LOBYTE(v155) = 10;
        v60 = v143 - 4;
        if ( _InterlockedDecrement(v143 - 1) <= 0 )
          (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)*v60 + 4))(v60);
        v61 = (void **)sub_10002740((int)&v142, v29, L"GateWay", v59, v1);
        LOBYTE(v155) = 18;
        v62 = (char *)*v61;
        v150 = v62 - 16;
        v63 = v154[7] - 16;
        v149 = (const unsigned __int16 **)(v154[7] - 16);
        if ( v62 - 16 != (char *)(v154[7] - 16) )
        {
          v34 = *(int *)(v63 + 12) < 0;
          v145 = (volatile signed __int32 *)(v63 + 12);
          v1 = v147;
          if ( v34 || *((_DWORD *)v62 - 4) != *(_DWORD *)v63 )
          {
            sub_10004FD0(v62, *((_DWORD *)v62 - 3));
          }
          else
          {
            v150 = (char *)sub_10004F10(v150);
            if ( _InterlockedDecrement(v145) <= 0 )
              (*(void (__thiscall **)(const unsigned __int16 *, const unsigned __int16 **))(*(_DWORD *)*v149 + 4))(
                *v149,
                v149);
            v154[7] = (int)(v150 + 16);
          }
        }
        LOBYTE(v155) = 10;
        v64 = v142 - 4;
        if ( _InterlockedDecrement(v142 - 1) <= 0 )
          (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v64 + 4))(v64);
        sub_10005F50(v134, v124, &v154[2]);
        sub_10003D10(v154);
        LOBYTE(v155) = 9;
        v65 = (volatile signed __int32 *)(v29 - 8);
        if ( _InterlockedDecrement(v65 + 3) <= 0 )
          (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v65 + 4))(v65);
        LOBYTE(v155) = 8;
        sub_10001B70(v154);
        v27 = v146 + 1;
        v146 = v27;
        if ( v27 >= PrivateProfileIntW )
          goto LABEL_146;
      }
LABEL_2:
      sub_10001110(-2147467259);
    }
LABEL_146:
    LOBYTE(v66) = 0;
    v133 = GetPrivateProfileIntW(L"BASE", L"dnsinfo_cnt", 0, v1);
    v146 = 0;
    if ( v133 > 0 )
    {
      do
      {
        v67 = sub_100013D0();
        if ( v67 == nullptr )
          goto LABEL_2;
        v136 = (*(int (__thiscall **)(int *))(*v67 + 12))(v67) + 16;
        v68 = sub_100013D0();
        if ( v68 == nullptr )
          goto LABEL_2;
        v137 = (*(int (__thiscall **)(int *))(*v68 + 12))(v68) + 16;
        v69 = sub_100013D0();
        if ( v69 == nullptr )
          goto LABEL_2;
        v138 = (*(int (__thiscall **)(int *))(*v69 + 12))(v69) + 16;
        LOBYTE(v155) = 19;
        v70 = sub_100013D0();
        if ( v70 == nullptr )
          goto LABEL_2;
        v148 = (*(int (__thiscall **)(int *))(*v70 + 12))(v70) + 16;
        LOBYTE(v155) = 20;
        sub_10005D30((int)&v148, (wchar_t *)L"Dnsinfo%d", v66);
        v71 = (const WCHAR *)v148;
        v73 = (void **)sub_10002740((int)&v130, (const WCHAR *)v148, L"Index", v72, v1);
        LOBYTE(v155) = 21;
        v74 = (char *)*v73;
        v75 = v136 - 16;
        v143 = (_DWORD *)(v136 - 16);
        PrivateProfileIntW = (int)(v74 - 16);
        if ( v74 - 16 != (char *)(v136 - 16) )
        {
          v34 = *(int *)(v75 + 12) < 0;
          v142 = (volatile signed __int32 *)(v75 + 12);
          if ( v34 || *((_DWORD *)v74 - 4) != *(_DWORD *)v75 )
          {
            sub_10004FD0(v74, *((_DWORD *)v74 - 3));
          }
          else
          {
            v76 = sub_10004F10(PrivateProfileIntW);
            PrivateProfileIntW = v76;
            v75 = _InterlockedDecrement(v142);
            if ( v75 <= 0 )
            {
              (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*v143 + 4))(*v143, v143);
              v76 = PrivateProfileIntW;
            }
            v136 = v76 + 16;
          }
        }
        LOBYTE(v155) = 20;
        v77 = v130 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v130 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v77 + 4))(v77);
        v78 = (void **)sub_10002740((int)&v131, v71, L"Dns1", v75, v1);
        LOBYTE(v155) = 22;
        v79 = (char *)*v78;
        PrivateProfileIntW = (int)(v79 - 16);
        v80 = v137 - 16;
        v143 = (_DWORD *)(v137 - 16);
        if ( v79 - 16 != (char *)(v137 - 16) )
        {
          v34 = *(int *)(v80 + 12) < 0;
          v142 = (volatile signed __int32 *)(v80 + 12);
          v1 = v147;
          if ( v34 || *((_DWORD *)v79 - 4) != *(_DWORD *)v80 )
          {
            sub_10004FD0(v79, *((_DWORD *)v79 - 3));
          }
          else
          {
            PrivateProfileIntW = sub_10004F10(PrivateProfileIntW);
            v80 = _InterlockedDecrement(v142);
            if ( v80 <= 0 )
              (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*v143 + 4))(*v143, v143);
            v137 = PrivateProfileIntW + 16;
          }
        }
        LOBYTE(v155) = 20;
        v81 = v131 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v131 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v81 + 4))(v81);
        v82 = (void **)sub_10002740((int)&v132, v71, L"Dns2", v80, v1);
        LOBYTE(v155) = 23;
        v83 = (char *)*v82;
        PrivateProfileIntW = (int)(v83 - 16);
        v84 = v138 - 16;
        v143 = (_DWORD *)(v138 - 16);
        if ( v83 - 16 != (char *)(v138 - 16) )
        {
          v34 = *(int *)(v84 + 12) < 0;
          v142 = (volatile signed __int32 *)(v84 + 12);
          v1 = v147;
          if ( v34 || *((_DWORD *)v83 - 4) != *(_DWORD *)v84 )
          {
            sub_10004FD0(v83, *((_DWORD *)v83 - 3));
          }
          else
          {
            PrivateProfileIntW = sub_10004F10(PrivateProfileIntW);
            if ( _InterlockedDecrement(v142) <= 0 )
              (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*v143 + 4))(*v143, v143);
            v138 = PrivateProfileIntW + 16;
          }
        }
        LOBYTE(v155) = 20;
        v85 = v132 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v132 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v85 + 4))(v85);
        sub_10005EB0(Block, v124, &v136);
        sub_10003FE0(&v136);
        LOBYTE(v155) = 19;
        if ( _InterlockedDecrement((volatile signed __int32 *)v71 - 1) <= 0 )
          (*(void (__stdcall **)(const WCHAR *))(**((_DWORD **)v71 - 4) + 4))(v71 - 8);
        LOBYTE(v155) = 8;
        v86 = v138 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v138 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v86 + 4))(v86);
        v87 = v137 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v137 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v87 + 4))(v87);
        v88 = v136 - 16;
        if ( _InterlockedDecrement((volatile signed __int32 *)(v136 - 16 + 12)) <= 0 )
          (*(void (__stdcall **)(int))(**(_DWORD **)v88 + 4))(v88);
        v66 = v146 + 1;
        v146 = v66;
      }
      while ( v66 < v133 );
    }
    sub_10001620((WCHAR *)&v127);
    v89 = v127;
    v148 = v127;
    if ( v127 != v128 )
    {
      do
      {
        v90 = (_DWORD *)sub_10005D50(v89 + 8);
        v91 = v134[0];
        if ( v90 == v134[0] )
          goto LABEL_193;
        v92 = (const unsigned __int16 *)v90[4];
        if ( v92 == nullptr )
          goto LABEL_2;
        v93 = wcscmp(*(const unsigned __int16 **)(v89 + 8), v92);
        if ( v93 != 0 )
          v93 = v93 < 0 ? -1 : 1;
        v94 = v93 >= 0;
        v91 = v134[0];
        if ( !v94 )
LABEL_193:
          v90 = v91;
        if ( v90 != v91 )
        {
          v95 = (const unsigned __int16 **)(v90 + 5);
          v96 = *(const unsigned __int16 **)(v89 + 20);
          v149 = v95;
          if ( v96 == nullptr )
            goto LABEL_2;
          v97 = wcscmp(v95[5], v96);
          if ( v97 != 0 )
            v97 = v97 < 0 ? -1 : 1;
          if ( v97 != 0 )
          {
            v98 = sub_100013D0();
            if ( v98 == nullptr )
              goto LABEL_2;
            v146 = (*(int (__thiscall **)(int *))(*v98 + 12))(v98) + 16;
            LOBYTE(v155) = 24;
            v99 = wcscmp(v95[1], L"0");
            if ( v99 != 0 )
              v99 = v99 < 0 ? -1 : 1;
            if ( v99 != 0 )
              sub_10005D30(
                (int)&v146,
                (wchar_t *)L"netsh interface ipv4 set address name = \"%s\" dhcp",
                *(_DWORD *)v89);
            else
              sub_10005D30(
                (int)&v146,
                (wchar_t *)L"netsh interface ipv4 set address name = \"%s\" static %s %s %s",
                *(_DWORD *)v89);
            v100 = v146;
            sub_1000D4A1(v146);
            v101 = (_DWORD *)sub_10005D50(v149);
            v102 = Block[0];
            if ( v101 == Block[0] )
              goto LABEL_210;
            v103 = (const unsigned __int16 *)v101[4];
            if ( v103 == nullptr )
              goto LABEL_2;
            v104 = wcscmp(*v149, v103);
            if ( v104 != 0 )
              v104 = v104 < 0 ? -1 : 1;
            v94 = v104 >= 0;
            v102 = Block[0];
            if ( !v94 )
LABEL_210:
              v101 = v102;
            if ( v101 == v102 )
              goto LABEL_217;
            if ( *(_DWORD *)(v101[6] - 12) != 0 )
            {
              sub_10005D30(
                (int)&v146,
                (wchar_t *)L"netsh interface ipv4 set dns name=\"%s\" static %s primary validate=no",
                *(_DWORD *)v148);
              v100 = v146;
              sub_1000D4A1(v146);
            }
            if ( *(_DWORD *)(v101[7] - 12) != 0 && *(_DWORD *)(v101[6] - 12) != 0 )
            {
              v89 = v148;
              sub_10005D30(
                (int)&v146,
                (wchar_t *)L"netsh interface ipv4 add dns name=\"%s\" %s validate=no",
                *(_DWORD *)v148);
              v100 = v146;
              sub_1000D4A1(v146);
            }
            else
            {
LABEL_217:
              v89 = v148;
            }
            LOBYTE(v155) = 8;
            v105 = (volatile signed __int32 *)(v100 - 16);
            if ( _InterlockedDecrement(v105 + 3) <= 0 )
              (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v105 + 4))(v105);
          }
        }
        v89 += 32;
        v148 = v89;
      }
      while ( v89 != v128 );
      v1 = v147;
    }
    LOBYTE(v155) = 6;
    v106 = v139 - 16;
    if ( _InterlockedDecrement((volatile signed __int32 *)v139 - 1) <= 0 )
      (*(void (__stdcall **)(BYTE *))(**(_DWORD **)v106 + 4))(v106);
    LOBYTE(v155) = 5;
    v107 = lpData - 16;
    if ( _InterlockedDecrement((volatile signed __int32 *)lpData - 1) <= 0 )
      (*(void (__stdcall **)(BYTE *))(**(_DWORD **)v107 + 4))(v107);
    v108 = 0;
    v140 = &CRegInfo::`vftable';
    if ( hKey != nullptr )
    {
      v108 = RegCloseKey(hKey);
      hKey = nullptr;
    }
    SetLastError(v108);
  }
  LOBYTE(v155) = 2;
  v109 = (volatile signed __int32 *)(v1 - 8);
  if ( _InterlockedDecrement(v109 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v109 + 4))(v109);
  sub_10004830(&v127);
  sub_100049C0((int)&PrivateProfileIntW, *(void **)Block[0], (int)Block[0]);
  j_j___free_base(Block[0]);
  sub_10004A60((int)&PrivateProfileIntW, *(void **)v134[0], (int)v134[0]);
  j_j___free_base(v134[0]);
}

// Address: 0x10003CB0
void __thiscall sub_10003CB0(void ***this)
{
  int v2; // [esp+4h] [ebp-4h] BYREF

  sub_10004A60((int)&v2, **this, (int)*this);
  j_j___free_base(*this);
}

// Address: 0x10003CE0
void __thiscall sub_10003CE0(void ***this)
{
  int v2; // [esp+4h] [ebp-4h] BYREF

  sub_100049C0((int)&v2, **this, (int)*this);
  j_j___free_base(*this);
}

// Address: 0x10003D10
int *__thiscall sub_10003D10(int *this, int a2)
{
  int v3; // esi
  volatile signed __int32 *v4; // ecx
  volatile signed __int32 *v5; // esi
  int v6; // eax
  volatile signed __int32 *v7; // esi
  char *v8; // edx
  char *v9; // ecx
  int v10; // eax
  volatile signed __int32 *v11; // esi
  char *v12; // edx
  char *v13; // ecx
  int v14; // eax
  volatile signed __int32 *v15; // esi
  char *v16; // edx
  char *v17; // ecx
  int v18; // eax
  volatile signed __int32 *v19; // esi
  char *v20; // edx
  char *v21; // ecx
  int v22; // eax
  volatile signed __int32 *v23; // esi
  char *v24; // edx
  char *v25; // ecx
  int v26; // eax
  volatile signed __int32 *v27; // esi
  char *v28; // edx
  char *v29; // ecx
  int v30; // eax
  volatile signed __int32 *v31; // esi
  char *v32; // edx
  char *v33; // ecx
  int v34; // eax
  int v36; // [esp+Ch] [ebp-4h]
  int v37; // [esp+Ch] [ebp-4h]
  int v38; // [esp+Ch] [ebp-4h]
  int v39; // [esp+Ch] [ebp-4h]
  int v40; // [esp+Ch] [ebp-4h]
  int v41; // [esp+Ch] [ebp-4h]
  int v42; // [esp+Ch] [ebp-4h]
  int v43; // [esp+18h] [ebp+8h]

  v3 = *this;
  v4 = (volatile signed __int32 *)(*(_DWORD *)a2 - 16);
  v5 = (volatile signed __int32 *)(v3 - 16);
  if ( v4 != v5 )
  {
    if ( *((int *)v5 + 3) >= 0 && *v4 == *v5 )
    {
      v6 = sub_10004F10(v4);
      v36 = v6;
      if ( _InterlockedDecrement(v5 + 3) <= 0 )
      {
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v5 + 4))(v5);
        v6 = v36;
      }
      *this = v6 + 16;
    }
    else
    {
      sub_10004FD0(*(void **)a2, *(_DWORD *)(*(_DWORD *)a2 - 12));
    }
  }
  v7 = (volatile signed __int32 *)(*(this + 1) - 16);
  v8 = *(char **)(a2 + 4);
  v9 = v8 - 16;
  if ( v8 - 16 != (char *)v7 )
  {
    if ( *((int *)v7 + 3) >= 0 && *(_DWORD *)v9 == *v7 )
    {
      v10 = sub_10004F10(v9);
      v37 = v10;
      if ( _InterlockedDecrement(v7 + 3) <= 0 )
      {
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v7 + 4))(v7);
        v10 = v37;
      }
      *(this + 1) = v10 + 16;
    }
    else
    {
      sub_10004FD0(v8, *((_DWORD *)v8 - 3));
    }
  }
  v11 = (volatile signed __int32 *)(*(this + 2) - 16);
  v12 = *(char **)(a2 + 8);
  v13 = v12 - 16;
  if ( v12 - 16 != (char *)v11 )
  {
    if ( *((int *)v11 + 3) >= 0 && *(_DWORD *)v13 == *v11 )
    {
      v14 = sub_10004F10(v13);
      v38 = v14;
      if ( _InterlockedDecrement(v11 + 3) <= 0 )
      {
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v11 + 4))(v11);
        v14 = v38;
      }
      *(this + 2) = v14 + 16;
    }
    else
    {
      sub_10004FD0(v12, *((_DWORD *)v12 - 3));
    }
  }
  v15 = (volatile signed __int32 *)(*(this + 3) - 16);
  v16 = *(char **)(a2 + 12);
  v17 = v16 - 16;
  if ( v16 - 16 != (char *)v15 )
  {
    if ( *((int *)v15 + 3) >= 0 && *(_DWORD *)v17 == *v15 )
    {
      v18 = sub_10004F10(v17);
      v39 = v18;
      if ( _InterlockedDecrement(v15 + 3) <= 0 )
      {
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v15 + 4))(v15);
        v18 = v39;
      }
      *(this + 3) = v18 + 16;
    }
    else
    {
      sub_10004FD0(v16, *((_DWORD *)v16 - 3));
    }
  }
  v19 = (volatile signed __int32 *)(*(this + 4) - 16);
  v20 = *(char **)(a2 + 16);
  v21 = v20 - 16;
  if ( v20 - 16 != (char *)v19 )
  {
    if ( *((int *)v19 + 3) >= 0 && *(_DWORD *)v21 == *v19 )
    {
      v22 = sub_10004F10(v21);
      v40 = v22;
      if ( _InterlockedDecrement(v19 + 3) <= 0 )
      {
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v19 + 4))(v19);
        v22 = v40;
      }
      *(this + 4) = v22 + 16;
    }
    else
    {
      sub_10004FD0(v20, *((_DWORD *)v20 - 3));
    }
  }
  v23 = (volatile signed __int32 *)(*(this + 5) - 16);
  v24 = *(char **)(a2 + 20);
  v25 = v24 - 16;
  if ( v24 - 16 != (char *)v23 )
  {
    if ( *((int *)v23 + 3) >= 0 && *(_DWORD *)v25 == *v23 )
    {
      v26 = sub_10004F10(v25);
      v41 = v26;
      if ( _InterlockedDecrement(v23 + 3) <= 0 )
      {
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v23 + 4))(v23);
        v26 = v41;
      }
      *(this + 5) = v26 + 16;
    }
    else
    {
      sub_10004FD0(v24, *((_DWORD *)v24 - 3));
    }
  }
  v27 = (volatile signed __int32 *)(*(this + 6) - 16);
  v28 = *(char **)(a2 + 24);
  v29 = v28 - 16;
  if ( v28 - 16 != (char *)v27 )
  {
    if ( *((int *)v27 + 3) >= 0 && *(_DWORD *)v29 == *v27 )
    {
      v30 = sub_10004F10(v29);
      v42 = v30;
      if ( _InterlockedDecrement(v27 + 3) <= 0 )
      {
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v27 + 4))(v27);
        v30 = v42;
      }
      *(this + 6) = v30 + 16;
    }
    else
    {
      sub_10004FD0(v28, *((_DWORD *)v28 - 3));
    }
  }
  v31 = (volatile signed __int32 *)(*(this + 7) - 16);
  v32 = *(char **)(a2 + 28);
  v33 = v32 - 16;
  if ( v32 - 16 == (char *)v31 )
    return this;
  if ( *((int *)v31 + 3) < 0 || *(_DWORD *)v33 != *v31 )
  {
    sub_10004FD0(v32, *((_DWORD *)v32 - 3));
    return this;
  }
  v34 = sub_10004F10(v33);
  v43 = v34;
  if ( _InterlockedDecrement(v31 + 3) <= 0 )
  {
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v31 + 4))(v31);
    v34 = v43;
  }
  *(this + 7) = v34 + 16;
  return this;
}

// Address: 0x10003FE0
int *__thiscall sub_10003FE0(int *this, int a2)
{
  int v3; // edi
  volatile signed __int32 *v4; // ecx
  volatile signed __int32 *v5; // edi
  int v6; // eax
  volatile signed __int32 *v7; // edi
  char *v8; // edx
  char *v9; // ecx
  int v10; // eax
  volatile signed __int32 *v11; // edi
  char *v12; // edx
  char *v13; // ecx
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+Ch] [ebp-4h]
  int v17; // [esp+18h] [ebp+8h]

  v3 = *this;
  v4 = (volatile signed __int32 *)(*(_DWORD *)a2 - 16);
  v5 = (volatile signed __int32 *)(v3 - 16);
  if ( v4 != v5 )
  {
    if ( *((int *)v5 + 3) >= 0 && *v4 == *v5 )
    {
      v6 = sub_10004F10(v4);
      v15 = v6;
      if ( _InterlockedDecrement(v5 + 3) <= 0 )
      {
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v5 + 4))(v5);
        v6 = v15;
      }
      *this = v6 + 16;
    }
    else
    {
      sub_10004FD0(*(void **)a2, *(_DWORD *)(*(_DWORD *)a2 - 12));
    }
  }
  v7 = (volatile signed __int32 *)(*(this + 1) - 16);
  v8 = *(char **)(a2 + 4);
  v9 = v8 - 16;
  if ( v8 - 16 != (char *)v7 )
  {
    if ( *((int *)v7 + 3) >= 0 && *(_DWORD *)v9 == *v7 )
    {
      v10 = sub_10004F10(v9);
      v16 = v10;
      if ( _InterlockedDecrement(v7 + 3) <= 0 )
      {
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v7 + 4))(v7);
        v10 = v16;
      }
      *(this + 1) = v10 + 16;
    }
    else
    {
      sub_10004FD0(v8, *((_DWORD *)v8 - 3));
    }
  }
  v11 = (volatile signed __int32 *)(*(this + 2) - 16);
  v12 = *(char **)(a2 + 8);
  v13 = v12 - 16;
  if ( v12 - 16 == (char *)v11 )
    return this;
  if ( *((int *)v11 + 3) < 0 || *(_DWORD *)v13 != *v11 )
  {
    sub_10004FD0(v12, *((_DWORD *)v12 - 3));
    return this;
  }
  v17 = sub_10004F10(v13);
  if ( _InterlockedDecrement(v11 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v11 + 4))(v11);
  *(this + 2) = v17 + 16;
  return this;
}

// Address: 0x10004100
int __thiscall sub_10004100(_DWORD *this, char *Src)
{
  unsigned int v3; // esi
  char *v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edi
  unsigned int v9; // edi
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // esi
  int result; // eax
  int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // esi
  int v18; // [esp+10h] [ebp-10h]
  void *Srca; // [esp+28h] [ebp+8h]

  v3 = *(this + 1);
  v4 = Src;
  if ( (unsigned int)Src >= v3 || *this > (unsigned int)Src )
  {
    result = *(this + 2);
    if ( v3 == result )
    {
      result = (int)(result - v3) / 12;
      if ( result == 0 )
      {
        v18 = *this;
        v14 = (int)(v3 - *this) / 12;
        if ( v14 == 357913941 )
          sub_1000764B("vector<T> too long");
        v15 = v14 + 1;
        v16 = 0;
        v17 = (*(this + 2) - v18) / 12;
        if ( 357913941 - (v17 >> 1) >= v17 )
          v16 = v17 + (v17 >> 1);
        if ( v16 >= v15 )
          v15 = v16;
        result = sub_10004BB0(this, v15);
        v4 = Src;
      }
    }
    if ( *(this + 1) != 0 )
      goto LABEL_24;
  }
  else
  {
    v5 = *(this + 2);
    v6 = (int)&Src[-*this] / 12;
    Srca = (void *)v6;
    if ( v3 == v5 && (int)(v5 - v3) / 12 == 0 )
    {
      v7 = *this;
      v8 = (int)(v3 - *this) / 12;
      if ( v8 == 357913941 )
        sub_1000764B("vector<T> too long");
      v9 = v8 + 1;
      v10 = (unsigned __int64)(715827883LL * (*(this + 2) - v7)) >> 32;
      v11 = 0;
      v12 = (v10 >> 1) + ((unsigned int)v10 >> 31);
      if ( 357913941 - (v12 >> 1) >= v12 )
        v11 = v12 + (v12 >> 1);
      if ( v11 >= v9 )
        v9 = v11;
      sub_10004BB0(this, v9);
      v6 = (int)Srca;
    }
    result = *this;
    v4 = (char *)(*this + 12 * v6);
    if ( *(this + 1) != 0 )
    {
LABEL_24:
      sub_10005080(v4);
      sub_10005080(v4 + 4);
      result = sub_10005080(v4 + 8);
    }
  }
  *(this + 1) += 12;
  return result;
}

// Address: 0x10004300
// attributes: thunk
int __thiscall sub_10004300(void *this)
{
  return sub_10004790(this);
}

// Address: 0x10004310
int __thiscall sub_10004310(unsigned int *this, char *a2)
{
  unsigned int v3; // edx
  void *v4; // edi
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int v7; // edi
  int result; // eax
  int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  int v12; // ecx
  int v13; // ebx
  int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned int v18; // [esp+24h] [ebp+8h]

  v3 = *(this + 1);
  v4 = a2;
  if ( (unsigned int)a2 >= v3 || (v5 = *this, *this > (unsigned int)a2) )
  {
    v13 = *(this + 2);
    if ( v3 == v13 )
    {
      result = (int)(v13 - v3) >> 5;
      if ( result == 0 )
      {
        v14 = (int)(v3 - *this) >> 5;
        if ( v14 == 0x7FFFFFF )
          sub_1000764B("vector<T> too long");
        v15 = v14 + 1;
        v16 = (int)(v13 - *this) >> 5;
        v17 = 0;
        if ( 0x7FFFFFF - (v16 >> 1) >= v16 )
          v17 = v16 + (v16 >> 1);
        if ( v17 >= v15 )
          v15 = v17;
        result = sub_10004DA0(this, v15);
      }
    }
    v12 = *(this + 1);
  }
  else
  {
    v6 = *(this + 2);
    v7 = (unsigned int)&a2[-v5];
    if ( v3 == v6 )
    {
      result = (int)(v6 - v3) >> 5;
      if ( result == 0 )
      {
        v9 = (int)(v3 - v5) >> 5;
        if ( v9 == 0x7FFFFFF )
          sub_1000764B("vector<T> too long");
        v10 = v9 + 1;
        v18 = (int)(v6 - *this) >> 5;
        v11 = 0;
        if ( 0x7FFFFFF - (v18 >> 1) >= v18 )
          v11 = v18 + (v18 >> 1);
        if ( v11 >= v10 )
          v10 = v11;
        result = sub_10004DA0(this, v10);
      }
    }
    v12 = *(this + 1);
    v4 = (void *)(*this + (v7 & 0xFFFFFFE0));
  }
  if ( v12 != 0 )
    result = sub_10006060(v4);
  *(this + 1) += 32;
  return result;
}

// Address: 0x10004440
// attributes: thunk
int __thiscall sub_10004440(void *this)
{
  return sub_10004830(this);
}

// Address: 0x10004450
_DWORD *__fastcall sub_10004450(_DWORD *a1, _DWORD *a2)
{
  int v4; // ecx
  int v5; // ecx
  int *v6; // eax
  int v7; // ecx

  v4 = *(_DWORD *)(*a2 - 16);
  if ( v4 == 0 || (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 16))(v4)) == 0 )
  {
    v6 = sub_100013D0();
    v5 = (*(int (__thiscall **)(int *))(*v6 + 16))(v6);
    if ( v5 == 0 )
      sub_10001110(-2147467259);
  }
  *a1 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5) + 16;
  sub_100048D0(*(_DWORD *)(*a2 - 12), v7, 13);
  return a1;
}

// Address: 0x10004500
int __thiscall sub_10004500(const unsigned __int16 **this, const unsigned __int16 *a2)
{
  int result; // eax

  if ( a2 == nullptr )
    sub_10001110(-2147467259);
  result = wcscmp(*this, a2);
  if ( result != 0 )
    return result < 0 ? -1 : 1;
  return result;
}

// Address: 0x10004570
LPWSTR *__thiscall sub_10004570(LPWSTR *this, LPCCH lpMultiByteStr)
{
  int *v3; // ecx
  HMODULE v4; // eax
  int v5; // edi

  v3 = sub_100013D0();
  if ( v3 == nullptr )
    sub_10001110(-2147467259);
  *this = (LPWSTR)((*(int (__thiscall **)(int *))(*v3 + 12))(v3) + 16);
  if ( lpMultiByteStr != nullptr )
  {
    if ( ((unsigned int)lpMultiByteStr & 0xFFFF0000) == 0 )
    {
      v4 = sub_10001270((unsigned __int16)lpMultiByteStr);
      if ( v4 != nullptr )
        sub_10005A00(v4, (unsigned __int16)lpMultiByteStr);
      return this;
    }
    v5 = MultiByteToWideChar(3u, 0, lpMultiByteStr, -1, nullptr, 0) - 1;
    if ( v5 > 0 )
    {
      if ( ((*((_DWORD *)*this - 2) - v5) | (1 - *((_DWORD *)*this - 1))) < 0 )
        sub_10004F70(v5);
      MultiByteToWideChar(3u, 0, lpMultiByteStr, -1, *this, v5);
      if ( v5 > *((_DWORD *)*this - 2) )
        sub_10001110(-2147024809);
      *((_DWORD *)*this - 3) = v5;
      (*this)[v5] = 0;
      return this;
    }
  }
  sub_10004960(this);
  return this;
}

// Address: 0x10004670
_DWORD *__thiscall sub_10004670(_DWORD *this, int a2)
{
  int *v3; // ecx
  HMODULE v4; // eax

  v3 = sub_100013D0();
  if ( v3 == nullptr )
    sub_10001110(-2147467259);
  *this = (*(int (__thiscall **)(int *))(*v3 + 12))(v3) + 16;
  if ( ((unsigned int)Src & 0xFFFF0000) != 0 )
  {
    sub_10004FD0(Src, wcslen(Src));
  }
  else
  {
    v4 = sub_10001270((unsigned __int16)Src);
    if ( v4 != nullptr )
      sub_10005A00(v4, (unsigned __int16)Src);
  }
  return this;
}

// Address: 0x10004730
bool __stdcall sub_10004730(const unsigned __int16 **a1, const unsigned __int16 **a2)
{
  int v2; // kr00_4

  if ( *a2 == nullptr )
    sub_10001110(-2147467259);
  v2 = wcscmp(*a1, *a2);
  return v2 != 0 && -(v2 < 0) < 0;
}

// Address: 0x10004790
void __thiscall sub_10004790(char **this)
{
  char *v2; // ecx
  char *v3; // ebx
  unsigned int v4; // eax
  char *v5; // eax
  unsigned int v6; // ebx

  v2 = *this;
  if ( v2 != nullptr )
  {
    ((void (__cdecl *)(char *))sub_10005FF0)(v2);
    v3 = *this;
    v4 = (*(this + 2) - *this) / 12;
    if ( v4 > 0x15555555 )
      _invalid_parameter_noinfo_noreturn();
    if ( 12 * v4 >= 0x1000 )
    {
      if ( ((unsigned __int8)v3 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v5 = *((char **)v3 - 1);
      if ( v5 >= v3 )
        _invalid_parameter_noinfo_noreturn();
      v6 = v3 - v5;
      if ( v6 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v6 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v3 = v5;
    }
    j_j___free_base(v3);
    *this = nullptr;
    *(this + 1) = nullptr;
    *(this + 2) = nullptr;
  }
}

// Address: 0x10004830
void __thiscall sub_10004830(char **this)
{
  char *v2; // esi
  char *i; // ebx
  char *v4; // eax
  unsigned int v5; // ecx
  char *v6; // ecx
  unsigned int v7; // eax

  v2 = *this;
  if ( *this != nullptr )
  {
    for ( i = *(this + 1); v2 != i; v2 += 32 )
      sub_10001B70(v2);
    v4 = *this;
    v5 = (*(this + 2) - *this) >> 5;
    if ( v5 > 0x7FFFFFF )
      _invalid_parameter_noinfo_noreturn();
    if ( 32 * v5 >= 0x1000 )
    {
      if ( ((unsigned __int8)v4 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v6 = *((char **)v4 - 1);
      if ( v6 >= v4 )
        _invalid_parameter_noinfo_noreturn();
      v7 = v4 - v6;
      if ( v7 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v7 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v4 = v6;
    }
    j_j___free_base(v4);
    *this = nullptr;
    *(this + 1) = nullptr;
    *(this + 2) = nullptr;
  }
}

// Address: 0x100048D0
void *__fastcall sub_100048D0(void **a1, void *a2, int a3, int a4, int a5)
{
  int v5; // ebx
  char *v7; // edi
  void *result; // eax

  v5 = a5 + a3;
  if ( a5 + a3 >= 0 )
  {
    if ( ((*((_DWORD *)*a1 - 2) - v5) | (1 - *((_DWORD *)*a1 - 1))) < 0 )
      sub_10004F70(a5 + a3);
    v7 = (char *)*a1;
    sub_10001020(*a1, 2 * a3, a2, 2 * a3);
    sub_10001020(&v7[2 * a3], 2 * a5, L"\\innoipbk.cfg", 2 * a5);
    if ( v5 <= *((_DWORD *)*a1 - 2) )
    {
      *((_DWORD *)*a1 - 3) = v5;
      result = *a1;
      *((_WORD *)*a1 + v5) = 0;
      return result;
    }
  }
  sub_10001110(-2147024809);
}

// Address: 0x10004960
int *__thiscall sub_10004960(int **this)
{
  int *result; // eax
  volatile signed __int32 *v3; // edx
  volatile signed __int32 v4; // edi

  result = *this;
  v3 = *this - 4;
  v4 = *v3;
  if ( *(*this - 3) != 0 )
  {
    if ( *((int *)v3 + 3) >= 0 )
    {
      if ( _InterlockedDecrement(v3 + 3) <= 0 )
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v3 + 4))(v3);
      result = (int *)((*(int (__thiscall **)(volatile signed __int32))(*(_DWORD *)v4 + 12))(v4) + 16);
      *this = result;
    }
    else
    {
      if ( *(result - 2) < 0 )
        sub_10001110(-2147024809);
      *(result - 3) = 0;
      result = *this;
      *(_WORD *)*this = 0;
    }
  }
  return result;
}

// Address: 0x100049C0
void **__thiscall sub_100049C0(void ***this, void **a2, _DWORD *Block, void **a4)
{
  void *v4; // eax
  void *v7; // ecx
  _DWORD *i; // edx
  _BYTE *j; // eax
  int v10; // [esp+8h] [ebp-4h] BYREF

  v4 = Block;
  if ( Block == **this && a4 == *this )
  {
    sub_10005100();
    *a2 = **this;
    return a2;
  }
  else
  {
    for ( ; Block != a4; v4 = Block )
    {
      v7 = v4;
      if ( *((_BYTE *)v4 + 13) == 0 )
      {
        i = *((_DWORD **)v4 + 2);
        if ( *((_BYTE *)i + 13) != 0 )
        {
          for ( i = *((_DWORD **)v4 + 1); *((_BYTE *)i + 13) == 0; i = (_DWORD *)i[1] )
          {
            if ( v4 != (void *)i[2] )
              break;
            v4 = i;
          }
        }
        else
        {
          for ( j = (_BYTE *)*i; j[13] == 0; j = *(_BYTE **)j )
            i = j;
        }
        Block = i;
      }
      sub_10005180((int)&v10, v7);
    }
    *a2 = v4;
    return a2;
  }
}

// Address: 0x10004A60
void **__thiscall sub_10004A60(void ***this, void **a2, void *Block, void **a4)
{
  void **v5; // edx
  void *v6; // eax
  void *v8; // ecx
  _DWORD *i; // edx
  _BYTE *j; // eax
  int v11[4]; // [esp+8h] [ebp-10h] BYREF

  v5 = *this;
  v6 = Block;
  if ( Block == **this && a4 == v5 )
  {
    v11[3] = 0;
    sub_10005CD0(v5[1]);
    (*this)[1] = *this;
    **this = *this;
    (*this)[2] = *this;
    *(this + 1) = nullptr;
    *a2 = **this;
    return a2;
  }
  else
  {
    for ( ; Block != a4; v6 = Block )
    {
      v8 = v6;
      if ( *((_BYTE *)v6 + 13) == 0 )
      {
        i = *((_DWORD **)v6 + 2);
        if ( *((_BYTE *)i + 13) != 0 )
        {
          for ( i = *((_DWORD **)v6 + 1); *((_BYTE *)i + 13) == 0; i = (_DWORD *)i[1] )
          {
            if ( v6 != (void *)i[2] )
              break;
            v6 = i;
          }
        }
        else
        {
          for ( j = (_BYTE *)*i; j[13] == 0; j = *(_BYTE **)j )
            i = j;
        }
        Block = i;
      }
      sub_100055B0((int)v11, v8);
    }
    *a2 = v6;
    return a2;
  }
}

// Address: 0x10004B50
void __stdcall sub_10004B50(_DWORD *Block, unsigned int a2)
{
  void *v2; // ecx
  unsigned int v3; // eax

  v2 = Block;
  if ( a2 > 0x15555555 )
    _invalid_parameter_noinfo_noreturn();
  if ( 12 * a2 >= 0x1000 )
  {
    if ( ((unsigned __int8)Block & 0x1F) != 0 )
      _invalid_parameter_noinfo_noreturn();
    v3 = *(Block - 1);
    if ( v3 >= (unsigned int)Block )
      _invalid_parameter_noinfo_noreturn();
    if ( (unsigned int)Block - v3 < 4 )
      _invalid_parameter_noinfo_noreturn();
    if ( (unsigned int)Block - v3 > 0x23 )
      _invalid_parameter_noinfo_noreturn();
    v2 = (void *)*(Block - 1);
  }
  j_j___free_base(v2);
}

// Address: 0x10004BB0
char *__thiscall sub_10004BB0(void **this, unsigned int a2)
{
  void **v2; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // eax
  void *v6; // eax
  int v7; // ecx
  char *v8; // ebx
  unsigned int v9; // eax
  char *v10; // eax
  unsigned int v11; // ebx
  char *result; // eax
  _BYTE v13[24]; // [esp+0h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-18h]
  void **v15; // [esp+1Ch] [ebp-14h]
  _BYTE *v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+2Ch] [ebp-4h]
  int v18; // [esp+38h] [ebp+8h]

  v16 = v13;
  v2 = this;
  v15 = this;
  if ( a2 != 0 )
  {
    if ( a2 > 0x15555555 )
      sub_10008218();
    v5 = 12 * a2;
    if ( 12 * a2 < 0x1000 )
    {
      v4 = operator new(12 * a2);
    }
    else
    {
      if ( v5 + 35 < v5 )
        sub_10008218();
      v6 = operator new(v5 + 35);
      v4 = (_DWORD *)(((unsigned int)v6 + 35) & 0xFFFFFFE0);
      *(v4 - 1) = v6;
    }
  }
  else
  {
    v4 = nullptr;
  }
  v17 = 0;
  v13[20] = 0;
  Block = v4;
  sub_100067C0(*v2, (int)v4, (int)this);
  v7 = ((_BYTE *)v2[1] - (_BYTE *)*v2) / 12;
  v18 = v7;
  if ( *v2 != nullptr )
  {
    sub_10005FF0(v7, v7);
    v8 = (char *)*v2;
    v9 = ((_BYTE *)v15[2] - v8) / 12;
    if ( v9 > 0x15555555 )
      _invalid_parameter_noinfo_noreturn();
    if ( 12 * v9 >= 0x1000 )
    {
      if ( ((unsigned __int8)v8 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v10 = *((char **)v8 - 1);
      if ( v10 >= v8 )
        _invalid_parameter_noinfo_noreturn();
      v11 = v8 - v10;
      if ( v11 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v11 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v8 = v10;
    }
    j_j___free_base(v8);
    v2 = v15;
    v7 = v18;
  }
  v2[2] = &v4[3 * a2];
  result = (char *)&v4[3 * v7];
  v2[1] = result;
  *v2 = v4;
  return result;
}

// Address: 0x10004D40
void __stdcall sub_10004D40(_DWORD *Block, unsigned int a2)
{
  void *v2; // eax
  unsigned int v3; // ecx

  v2 = Block;
  if ( a2 > 0x7FFFFFF )
    _invalid_parameter_noinfo_noreturn();
  if ( 32 * a2 >= 0x1000 )
  {
    if ( ((unsigned __int8)Block & 0x1F) != 0 )
      _invalid_parameter_noinfo_noreturn();
    v3 = *(Block - 1);
    if ( v3 >= (unsigned int)Block )
      _invalid_parameter_noinfo_noreturn();
    if ( (unsigned int)Block - v3 < 4 )
      _invalid_parameter_noinfo_noreturn();
    if ( (unsigned int)Block - v3 > 0x23 )
      _invalid_parameter_noinfo_noreturn();
    v2 = (void *)*(Block - 1);
  }
  j_j___free_base(v2);
}

// Address: 0x10004DA0
char *__thiscall sub_10004DA0(int this, unsigned int a2)
{
  _DWORD *v4; // edi
  unsigned int v5; // eax
  void *v6; // eax
  char *v7; // ecx
  char *v8; // esi
  int v9; // eax
  _DWORD *v10; // esi
  char *v11; // eax
  unsigned int v12; // ecx
  char *v13; // ecx
  unsigned int v14; // eax
  char *result; // eax
  int v16; // [esp+0h] [ebp-30h] BYREF
  int v17; // [esp+14h] [ebp-1Ch]
  void *Block; // [esp+18h] [ebp-18h]
  _DWORD *v19; // [esp+1Ch] [ebp-14h]
  int *v20; // [esp+20h] [ebp-10h]
  int v21; // [esp+2Ch] [ebp-4h]
  int v22; // [esp+38h] [ebp+8h]

  v20 = &v16;
  v19 = (_DWORD *)this;
  if ( a2 != 0 )
  {
    if ( a2 > 0x7FFFFFF )
      sub_10008218();
    v5 = 32 * a2;
    if ( 32 * a2 < 0x1000 )
    {
      v4 = operator new(32 * a2);
    }
    else
    {
      if ( v5 + 35 < v5 )
        sub_10008218();
      v6 = operator new(v5 + 35);
      v4 = (_DWORD *)(((unsigned int)v6 + 35) & 0xFFFFFFE0);
      *(v4 - 1) = v6;
    }
  }
  else
  {
    v4 = nullptr;
  }
  v21 = 0;
  LOBYTE(v17) = 0;
  Block = v4;
  sub_10006880(*(void **)this, (int)v4, this);
  v7 = *(char **)(this + 4);
  v8 = *(char **)this;
  v22 = (int)v7;
  v9 = (v7 - v8) >> 5;
  v17 = v9;
  if ( v8 != nullptr )
  {
    if ( v8 != v7 )
    {
      do
      {
        sub_10001B70(v8);
        v8 += 32;
      }
      while ( v8 != (char *)v22 );
    }
    v10 = v19;
    v11 = (char *)*v19;
    v12 = (v19[2] - *v19) >> 5;
    if ( v12 > 0x7FFFFFF )
      _invalid_parameter_noinfo_noreturn();
    if ( 32 * v12 >= 0x1000 )
    {
      if ( ((unsigned __int8)v11 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v13 = *((char **)v11 - 1);
      if ( v13 >= v11 )
        _invalid_parameter_noinfo_noreturn();
      v14 = v11 - v13;
      if ( v14 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v14 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v11 = v13;
    }
    j_j___free_base(v11);
    v9 = v17;
  }
  else
  {
    v10 = v19;
  }
  v10[2] = &v4[8 * a2];
  result = (char *)&v4[8 * v9];
  v10[1] = result;
  *v10 = v4;
  return result;
}

// Address: 0x10004F10
volatile signed __int32 *__thiscall sub_10004F10(volatile signed __int32 *this)
{
  int (__stdcall ***v2)(_DWORD, int); // eax
  int v4; // eax
  int v5; // edi

  v2 = (int (__stdcall ***)(_DWORD, int))(*(int (__thiscall **)(volatile signed __int32))(**(_DWORD **)this + 16))(*this);
  if ( *((int *)this + 3) >= 0 && v2 == *(int (__stdcall ****)(_DWORD, int))this )
  {
    _InterlockedIncrement(this + 3);
    return this;
  }
  else
  {
    v4 = (**v2)(*((_DWORD *)this + 1), 2);
    v5 = v4;
    if ( v4 == 0 )
      sub_10005B60();
    *(_DWORD *)(v4 + 4) = *((_DWORD *)this + 1);
    sub_10001020((void *)(v4 + 16), 2 * *((_DWORD *)this + 1) + 2, (void *)(this + 4), 2 * *((_DWORD *)this + 1) + 2);
    return (volatile signed __int32 *)v5;
  }
}

// Address: 0x10004F70
void __thiscall sub_10004F70(int *this, int a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx

  v2 = a2;
  v3 = *this;
  if ( *(_DWORD *)(v3 - 12) > a2 )
    v2 = *(_DWORD *)(v3 - 12);
  if ( *(int *)(v3 - 4) <= 1 )
  {
    v4 = *(_DWORD *)(v3 - 8);
    if ( v4 < v2 )
    {
      if ( v4 <= 0x40000000 )
        v5 = v4 / 2;
      else
        v5 = 0x100000;
      v6 = v5 + v4;
      if ( v6 < v2 )
        v6 = v2;
      sub_10005AA0(v6);
    }
  }
  else
  {
    sub_10005AE0(v2);
  }
}

// Address: 0x10004FD0
int *__thiscall sub_10004FD0(int **this, void *Src, int a3)
{
  int *result; // eax
  void *v6; // edx
  unsigned int v7; // ebx
  int *v8; // ecx
  unsigned int v9; // [esp+14h] [ebp+Ch]

  if ( a3 == 0 )
    return sub_10004960(this);
  v6 = Src;
  if ( Src != nullptr )
  {
    v7 = ((_BYTE *)Src - (_BYTE *)*this) >> 1;
    v9 = *(*this - 3);
    if ( a3 < 0 )
      sub_10001110(-2147024809);
    if ( ((*(*this - 2) - a3) | (1 - *(*this - 1))) < 0 )
    {
      sub_10004F70((int *)this, a3);
      v6 = Src;
    }
    v8 = *this;
    if ( v7 > v9 )
      sub_10001020(v8, 2 * *(v8 - 2), v6, 2 * a3);
    else
      sub_10005B70(v8, (char *)v8 + 2 * v7, a3);
    if ( a3 <= *(*this - 2) )
    {
      *(*this - 3) = a3;
      result = *this;
      *((_WORD *)*this + a3) = 0;
      return result;
    }
  }
  sub_10001110(-2147024809);
}

// Address: 0x10005080
_DWORD *__thiscall sub_10005080(_DWORD *this, void **Src)
{
  int v3; // ecx
  int v4; // esi
  int (__stdcall ***v5)(_DWORD, int); // eax
  _DWORD *v7; // ebx
  int v8; // eax
  int v9; // esi
  void *Srca; // [esp+10h] [ebp+8h]

  v3 = *((_DWORD *)*Src - 4);
  v4 = (int)*Src - 16;
  Srca = *Src;
  v5 = (int (__stdcall ***)(_DWORD, int))(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
  if ( *(int *)(v4 + 12) >= 0 && v5 == *(int (__stdcall ****)(_DWORD, int))v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    *this = v4 + 16;
    return this;
  }
  else
  {
    v7 = (_DWORD *)(v4 + 4);
    v8 = (**v5)(*(_DWORD *)(v4 + 4), 2);
    v9 = v8;
    if ( v8 == 0 )
      sub_10005B60();
    *(_DWORD *)(v8 + 4) = *v7;
    sub_10001020((void *)(v8 + 16), 2 * *v7 + 2, Srca, 2 * *v7 + 2);
    *this = v9 + 16;
    return this;
  }
}

// Address: 0x10005100
int __thiscall sub_10005100(_DWORD *this)
{
  char *v2; // edi
  char *i; // esi
  int result; // eax

  v2 = *(char **)(*this + 4);
  for ( i = v2; i[13] == 0; v2 = i )
  {
    sub_10005C60(*((void **)i + 2));
    i = *(char **)i;
    sub_10006140(v2 + 16);
    j_j___free_base(v2);
  }
  *(_DWORD *)(*this + 4) = *this;
  *(_DWORD *)*this = *this;
  result = *this;
  *(_DWORD *)(*this + 8) = *this;
  *(this + 1) = 0;
  return result;
}

// Address: 0x10005180
int ***__thiscall sub_10005180(_DWORD *this, int ***a2, int **Block)
{
  int **v3; // esi
  int **v4; // ebx
  int **v5; // eax
  int *j; // eax
  int *i; // eax
  int *v8; // edi
  int **v9; // edx
  _DWORD *v10; // eax
  int *v11; // ecx
  int *v12; // eax
  int v13; // esi
  int *v14; // eax
  int *k; // ecx
  int ***v16; // eax
  char v17; // cl
  _DWORD *v18; // esi
  int *v19; // ecx
  int *v20; // ecx
  int ***v21; // eax
  int v22; // esi
  int v23; // eax
  int *v24; // ecx
  int v25; // eax
  int *v26; // eax
  int v27; // eax
  _DWORD *v29; // eax
  int *v30; // ecx
  int ***v31; // eax
  int **v32; // esi
  int **v33; // eax
  int *v34; // ecx
  int v35; // eax
  int *v36; // eax
  int *v37; // [esp+Ch] [ebp-10h]
  int **v38; // [esp+10h] [ebp-Ch]
  int *v39; // [esp+14h] [ebp-8h]

  v3 = Block;
  v4 = Block;
  if ( *((_BYTE *)Block + 13) == 0 )
  {
    v5 = (int **)Block[2];
    if ( *((_BYTE *)v5 + 13) != 0 )
    {
      for ( i = Block[1]; *((_BYTE *)i + 13) == 0; i = (int *)i[1] )
      {
        if ( v3 != (int **)i[2] )
          break;
        v3 = (int **)i;
      }
      v3 = (int **)i;
    }
    else
    {
      v3 = (int **)Block[2];
      for ( j = *v5; *((_BYTE *)j + 13) == 0; j = (int *)*j )
        v3 = (int **)j;
    }
    Block = v3;
  }
  if ( *((_BYTE *)*v4 + 13) != 0 )
  {
    v8 = v4[2];
LABEL_16:
    v9 = (int **)v4[1];
    if ( *((_BYTE *)v8 + 13) == 0 )
      v8[1] = (int)v9;
    if ( *(int ***)(*this + 4) == v4 )
    {
      *(_DWORD *)(*this + 4) = v8;
    }
    else if ( *v9 == (int *)v4 )
    {
      *v9 = v8;
    }
    else
    {
      v9[2] = v8;
    }
    v10 = this;
    if ( *(int ***)*this == v4 )
    {
      if ( *((_BYTE *)v8 + 13) != 0 )
      {
        v11 = (int *)v9;
      }
      else
      {
        v12 = (int *)*v8;
        v11 = v8;
        if ( *(_BYTE *)(*v8 + 13) == 0 )
        {
          do
          {
            v11 = v12;
            v12 = (int *)*v12;
          }
          while ( *((_BYTE *)v12 + 13) == 0 );
        }
        v10 = this;
      }
      *(_DWORD *)*this = v11;
    }
    v13 = *v10;
    if ( *(int ***)(*v10 + 8) == v4 )
    {
      if ( *((_BYTE *)v8 + 13) != 0 )
      {
        *(_DWORD *)(v13 + 8) = v9;
      }
      else
      {
        v14 = (int *)v8[2];
        for ( k = v8; *((_BYTE *)v14 + 13) == 0; v14 = (int *)v14[2] )
          k = v14;
        *(_DWORD *)(v13 + 8) = k;
      }
    }
    goto LABEL_47;
  }
  if ( *((_BYTE *)v4[2] + 13) != 0 )
  {
    v8 = *v4;
    goto LABEL_16;
  }
  v8 = v3[2];
  if ( v3 == v4 )
    goto LABEL_16;
  (*v4)[1] = (int)v3;
  *v3 = *v4;
  if ( v3 == (int **)v4[2] )
  {
    v9 = v3;
  }
  else
  {
    v9 = (int **)v3[1];
    if ( *((_BYTE *)v8 + 13) == 0 )
      v8[1] = (int)v9;
    *v9 = v8;
    v3[2] = v4[2];
    v4[2][1] = (int)v3;
  }
  if ( *(int ***)(*this + 4) == v4 )
  {
    *(_DWORD *)(*this + 4) = v3;
  }
  else
  {
    v16 = (int ***)v4[1];
    if ( *v16 == v4 )
      *v16 = v3;
    else
      v16[2] = v3;
  }
  v3[1] = v4[1];
  v17 = *((_BYTE *)v3 + 12);
  *((_BYTE *)v3 + 12) = *((_BYTE *)v4 + 12);
  *((_BYTE *)v4 + 12) = v17;
LABEL_47:
  v18 = this;
  if ( *((_BYTE *)v4 + 12) == 1 )
  {
    if ( v8 != *(int **)(*this + 4) )
    {
      while ( 1 )
      {
        v38 = v9;
        v39 = (int *)v9;
        v37 = (int *)v9;
        if ( *((_BYTE *)v8 + 12) != 1 )
          break;
        v19 = *v9;
        if ( v8 == *v9 )
        {
          v19 = v9[2];
          if ( *((_BYTE *)v19 + 12) == 0 )
          {
            *((_BYTE *)v19 + 12) = 1;
            v20 = v9[2];
            *((_BYTE *)v9 + 12) = 0;
            v9[2] = (int *)*v20;
            if ( *(_BYTE *)(*v20 + 13) == 0 )
              *(_DWORD *)(*v20 + 4) = v9;
            v20[1] = (int)v9[1];
            if ( v9 == *(int ***)(*this + 4) )
            {
              *(_DWORD *)(*this + 4) = v20;
            }
            else
            {
              v21 = (int ***)v9[1];
              if ( v9 == *v21 )
                *v21 = (int **)v20;
              else
                v21[2] = (int **)v20;
            }
            *v20 = (int)v9;
            v9[1] = v20;
            v19 = v9[2];
          }
          if ( *((_BYTE *)v19 + 13) != 0 )
            goto LABEL_81;
          if ( *(_BYTE *)(*v19 + 12) != 1 || *(_BYTE *)(v19[2] + 12) != 1 )
          {
            if ( *(_BYTE *)(v19[2] + 12) == 1 )
            {
              *(_BYTE *)(*v19 + 12) = 1;
              v22 = *v19;
              *((_BYTE *)v19 + 12) = 0;
              *v19 = *(_DWORD *)(v22 + 8);
              v23 = *(_DWORD *)(v22 + 8);
              if ( *(_BYTE *)(v23 + 13) == 0 )
                *(_DWORD *)(v23 + 4) = v19;
              *(_DWORD *)(v22 + 4) = v19[1];
              if ( v19 == *(int **)(*this + 4) )
              {
                *(_DWORD *)(*this + 4) = v22;
              }
              else
              {
                v29 = (_DWORD *)v19[1];
                if ( v19 == (int *)v29[2] )
                  v29[2] = v22;
                else
                  *v29 = v22;
              }
              *(_DWORD *)(v22 + 8) = v19;
              v19[1] = v22;
              v19 = v9[2];
              v18 = this;
            }
            *((_BYTE *)v19 + 12) = *((_BYTE *)v9 + 12);
            *((_BYTE *)v9 + 12) = 1;
            *(_BYTE *)(v19[2] + 12) = 1;
            v30 = v9[2];
            v9[2] = (int *)*v30;
            if ( *(_BYTE *)(*v30 + 13) == 0 )
              *(_DWORD *)(*v30 + 4) = v9;
            v30[1] = (int)v9[1];
            if ( v9 == *(int ***)(*v18 + 4) )
            {
              *(_DWORD *)(*v18 + 4) = v30;
              *v30 = (int)v9;
              v9[1] = v30;
            }
            else
            {
              v31 = (int ***)v9[1];
              if ( v9 == *v31 )
                *v31 = (int **)v30;
              else
                v31[2] = (int **)v30;
              *v30 = (int)v9;
              v9[1] = v30;
            }
            break;
          }
        }
        else
        {
          if ( *((_BYTE *)v19 + 12) == 0 )
          {
            *((_BYTE *)v19 + 12) = 1;
            v24 = *v9;
            *((_BYTE *)v9 + 12) = 0;
            *v9 = (int *)v24[2];
            v25 = v24[2];
            if ( *(_BYTE *)(v25 + 13) == 0 )
              *(_DWORD *)(v25 + 4) = v9;
            v24[1] = (int)v9[1];
            if ( v9 == *(int ***)(*this + 4) )
            {
              *(_DWORD *)(*this + 4) = v24;
            }
            else
            {
              v26 = v9[1];
              if ( v9 == (int **)v26[2] )
                v26[2] = (int)v24;
              else
                *v26 = (int)v24;
            }
            v24[2] = (int)v9;
            v9[1] = v24;
            v19 = *v9;
          }
          if ( *((_BYTE *)v19 + 13) != 0 )
            goto LABEL_81;
          if ( *(_BYTE *)(v19[2] + 12) != 1 || *(_BYTE *)(*v19 + 12) != 1 )
          {
            if ( *(_BYTE *)(*v19 + 12) == 1 )
            {
              *(_BYTE *)(v19[2] + 12) = 1;
              v32 = (int **)v19[2];
              *((_BYTE *)v19 + 12) = 0;
              v19[2] = (int)*v32;
              if ( *((_BYTE *)*v32 + 13) == 0 )
                (*v32)[1] = (int)v19;
              v32[1] = (int *)v19[1];
              if ( v19 == *(int **)(*this + 4) )
              {
                *(_DWORD *)(*this + 4) = v32;
              }
              else
              {
                v33 = (int **)v19[1];
                if ( v19 == *v33 )
                  *v33 = (int *)v32;
                else
                  v33[2] = (int *)v32;
              }
              *v32 = v19;
              v19[1] = (int)v32;
              v19 = *v9;
              v18 = this;
            }
            *((_BYTE *)v19 + 12) = *((_BYTE *)v9 + 12);
            *((_BYTE *)v9 + 12) = 1;
            *(_BYTE *)(*v19 + 12) = 1;
            v34 = *v9;
            *v9 = (int *)(*v9)[2];
            v35 = v34[2];
            if ( *(_BYTE *)(v35 + 13) == 0 )
              *(_DWORD *)(v35 + 4) = v9;
            v34[1] = (int)v9[1];
            if ( v9 == *(int ***)(*v18 + 4) )
            {
              *(_DWORD *)(*v18 + 4) = v34;
              v34[2] = (int)v9;
              v9[1] = v34;
            }
            else
            {
              v36 = v9[1];
              if ( v9 == (int **)v36[2] )
                v36[2] = (int)v34;
              else
                *v36 = (int)v34;
              v34[2] = (int)v9;
              v9[1] = v34;
            }
            break;
          }
        }
        *((_BYTE *)v19 + 12) = 0;
LABEL_81:
        v9 = (int **)v9[1];
        v8 = v39;
        if ( v38 == *(int ***)(*this + 4) )
        {
          v8 = v37;
          break;
        }
      }
    }
    *((_BYTE *)v8 + 12) = 1;
  }
  sub_10006140(v4 + 4);
  j_j___free_base(v4);
  v27 = v18[1];
  if ( v27 != 0 )
    v18[1] = v27 - 1;
  *a2 = Block;
  return a2;
}

// Address: 0x100055B0
int ***__thiscall sub_100055B0(_DWORD *this, int ***a2, int **Block)
{
  int **v3; // esi
  int **v4; // ebx
  int **v5; // eax
  int *j; // eax
  int *i; // eax
  int *v8; // edi
  int **v9; // edx
  _DWORD *v10; // eax
  int *v11; // ecx
  int *v12; // eax
  int v13; // esi
  int *v14; // eax
  int *k; // ecx
  int ***v16; // eax
  char v17; // cl
  _DWORD *v18; // esi
  int *v19; // ecx
  int *v20; // ecx
  int ***v21; // eax
  int v22; // esi
  int v23; // eax
  int *v24; // ecx
  int v25; // eax
  int *v26; // eax
  volatile signed __int32 *v27; // edx
  int v28; // eax
  _DWORD *v30; // eax
  int *v31; // ecx
  int ***v32; // eax
  int **v33; // esi
  int **v34; // eax
  int *v35; // ecx
  int v36; // eax
  int *v37; // eax
  int *v38; // [esp+8h] [ebp-10h]
  int **v39; // [esp+Ch] [ebp-Ch]
  int *v40; // [esp+10h] [ebp-8h]

  v3 = Block;
  v4 = Block;
  if ( *((_BYTE *)Block + 13) == 0 )
  {
    v5 = (int **)Block[2];
    if ( *((_BYTE *)v5 + 13) != 0 )
    {
      for ( i = Block[1]; *((_BYTE *)i + 13) == 0; i = (int *)i[1] )
      {
        if ( v3 != (int **)i[2] )
          break;
        v3 = (int **)i;
      }
      v3 = (int **)i;
    }
    else
    {
      v3 = (int **)Block[2];
      for ( j = *v5; *((_BYTE *)j + 13) == 0; j = (int *)*j )
        v3 = (int **)j;
    }
    Block = v3;
  }
  if ( *((_BYTE *)*v4 + 13) != 0 )
  {
    v8 = v4[2];
LABEL_16:
    v9 = (int **)v4[1];
    if ( *((_BYTE *)v8 + 13) == 0 )
      v8[1] = (int)v9;
    if ( *(int ***)(*this + 4) == v4 )
    {
      *(_DWORD *)(*this + 4) = v8;
    }
    else if ( *v9 == (int *)v4 )
    {
      *v9 = v8;
    }
    else
    {
      v9[2] = v8;
    }
    v10 = this;
    if ( *(int ***)*this == v4 )
    {
      if ( *((_BYTE *)v8 + 13) != 0 )
      {
        v11 = (int *)v9;
      }
      else
      {
        v12 = (int *)*v8;
        v11 = v8;
        if ( *(_BYTE *)(*v8 + 13) == 0 )
        {
          do
          {
            v11 = v12;
            v12 = (int *)*v12;
          }
          while ( *((_BYTE *)v12 + 13) == 0 );
        }
        v10 = this;
      }
      *(_DWORD *)*this = v11;
    }
    v13 = *v10;
    if ( *(int ***)(*v10 + 8) == v4 )
    {
      if ( *((_BYTE *)v8 + 13) != 0 )
      {
        *(_DWORD *)(v13 + 8) = v9;
      }
      else
      {
        v14 = (int *)v8[2];
        for ( k = v8; *((_BYTE *)v14 + 13) == 0; v14 = (int *)v14[2] )
          k = v14;
        *(_DWORD *)(v13 + 8) = k;
      }
    }
    goto LABEL_47;
  }
  if ( *((_BYTE *)v4[2] + 13) != 0 )
  {
    v8 = *v4;
    goto LABEL_16;
  }
  v8 = v3[2];
  if ( v3 == v4 )
    goto LABEL_16;
  (*v4)[1] = (int)v3;
  *v3 = *v4;
  if ( v3 == (int **)v4[2] )
  {
    v9 = v3;
  }
  else
  {
    v9 = (int **)v3[1];
    if ( *((_BYTE *)v8 + 13) == 0 )
      v8[1] = (int)v9;
    *v9 = v8;
    v3[2] = v4[2];
    v4[2][1] = (int)v3;
  }
  if ( *(int ***)(*this + 4) == v4 )
  {
    *(_DWORD *)(*this + 4) = v3;
  }
  else
  {
    v16 = (int ***)v4[1];
    if ( *v16 == v4 )
      *v16 = v3;
    else
      v16[2] = v3;
  }
  v3[1] = v4[1];
  v17 = *((_BYTE *)v3 + 12);
  *((_BYTE *)v3 + 12) = *((_BYTE *)v4 + 12);
  *((_BYTE *)v4 + 12) = v17;
LABEL_47:
  v18 = this;
  if ( *((_BYTE *)v4 + 12) == 1 )
  {
    if ( v8 != *(int **)(*this + 4) )
    {
      while ( 1 )
      {
        v39 = v9;
        v40 = (int *)v9;
        v38 = (int *)v9;
        if ( *((_BYTE *)v8 + 12) != 1 )
          break;
        v19 = *v9;
        if ( v8 == *v9 )
        {
          v19 = v9[2];
          if ( *((_BYTE *)v19 + 12) == 0 )
          {
            *((_BYTE *)v19 + 12) = 1;
            v20 = v9[2];
            *((_BYTE *)v9 + 12) = 0;
            v9[2] = (int *)*v20;
            if ( *(_BYTE *)(*v20 + 13) == 0 )
              *(_DWORD *)(*v20 + 4) = v9;
            v20[1] = (int)v9[1];
            if ( v9 == *(int ***)(*this + 4) )
            {
              *(_DWORD *)(*this + 4) = v20;
            }
            else
            {
              v21 = (int ***)v9[1];
              if ( v9 == *v21 )
                *v21 = (int **)v20;
              else
                v21[2] = (int **)v20;
            }
            *v20 = (int)v9;
            v9[1] = v20;
            v19 = v9[2];
          }
          if ( *((_BYTE *)v19 + 13) != 0 )
            goto LABEL_81;
          if ( *(_BYTE *)(*v19 + 12) != 1 || *(_BYTE *)(v19[2] + 12) != 1 )
          {
            if ( *(_BYTE *)(v19[2] + 12) == 1 )
            {
              *(_BYTE *)(*v19 + 12) = 1;
              v22 = *v19;
              *((_BYTE *)v19 + 12) = 0;
              *v19 = *(_DWORD *)(v22 + 8);
              v23 = *(_DWORD *)(v22 + 8);
              if ( *(_BYTE *)(v23 + 13) == 0 )
                *(_DWORD *)(v23 + 4) = v19;
              *(_DWORD *)(v22 + 4) = v19[1];
              if ( v19 == *(int **)(*this + 4) )
              {
                *(_DWORD *)(*this + 4) = v22;
              }
              else
              {
                v30 = (_DWORD *)v19[1];
                if ( v19 == (int *)v30[2] )
                  v30[2] = v22;
                else
                  *v30 = v22;
              }
              *(_DWORD *)(v22 + 8) = v19;
              v19[1] = v22;
              v19 = v9[2];
              v18 = this;
            }
            *((_BYTE *)v19 + 12) = *((_BYTE *)v9 + 12);
            *((_BYTE *)v9 + 12) = 1;
            *(_BYTE *)(v19[2] + 12) = 1;
            v31 = v9[2];
            v9[2] = (int *)*v31;
            if ( *(_BYTE *)(*v31 + 13) == 0 )
              *(_DWORD *)(*v31 + 4) = v9;
            v31[1] = (int)v9[1];
            if ( v9 == *(int ***)(*v18 + 4) )
            {
              *(_DWORD *)(*v18 + 4) = v31;
              *v31 = (int)v9;
              v9[1] = v31;
            }
            else
            {
              v32 = (int ***)v9[1];
              if ( v9 == *v32 )
                *v32 = (int **)v31;
              else
                v32[2] = (int **)v31;
              *v31 = (int)v9;
              v9[1] = v31;
            }
            break;
          }
        }
        else
        {
          if ( *((_BYTE *)v19 + 12) == 0 )
          {
            *((_BYTE *)v19 + 12) = 1;
            v24 = *v9;
            *((_BYTE *)v9 + 12) = 0;
            *v9 = (int *)v24[2];
            v25 = v24[2];
            if ( *(_BYTE *)(v25 + 13) == 0 )
              *(_DWORD *)(v25 + 4) = v9;
            v24[1] = (int)v9[1];
            if ( v9 == *(int ***)(*this + 4) )
            {
              *(_DWORD *)(*this + 4) = v24;
            }
            else
            {
              v26 = v9[1];
              if ( v9 == (int **)v26[2] )
                v26[2] = (int)v24;
              else
                *v26 = (int)v24;
            }
            v24[2] = (int)v9;
            v9[1] = v24;
            v19 = *v9;
          }
          if ( *((_BYTE *)v19 + 13) != 0 )
            goto LABEL_81;
          if ( *(_BYTE *)(v19[2] + 12) != 1 || *(_BYTE *)(*v19 + 12) != 1 )
          {
            if ( *(_BYTE *)(*v19 + 12) == 1 )
            {
              *(_BYTE *)(v19[2] + 12) = 1;
              v33 = (int **)v19[2];
              *((_BYTE *)v19 + 12) = 0;
              v19[2] = (int)*v33;
              if ( *((_BYTE *)*v33 + 13) == 0 )
                (*v33)[1] = (int)v19;
              v33[1] = (int *)v19[1];
              if ( v19 == *(int **)(*this + 4) )
              {
                *(_DWORD *)(*this + 4) = v33;
              }
              else
              {
                v34 = (int **)v19[1];
                if ( v19 == *v34 )
                  *v34 = (int *)v33;
                else
                  v34[2] = (int *)v33;
              }
              *v33 = v19;
              v19[1] = (int)v33;
              v19 = *v9;
              v18 = this;
            }
            *((_BYTE *)v19 + 12) = *((_BYTE *)v9 + 12);
            *((_BYTE *)v9 + 12) = 1;
            *(_BYTE *)(*v19 + 12) = 1;
            v35 = *v9;
            *v9 = (int *)(*v9)[2];
            v36 = v35[2];
            if ( *(_BYTE *)(v36 + 13) == 0 )
              *(_DWORD *)(v36 + 4) = v9;
            v35[1] = (int)v9[1];
            if ( v9 == *(int ***)(*v18 + 4) )
            {
              *(_DWORD *)(*v18 + 4) = v35;
              v35[2] = (int)v9;
              v9[1] = v35;
            }
            else
            {
              v37 = v9[1];
              if ( v9 == (int **)v37[2] )
                v37[2] = (int)v35;
              else
                *v37 = (int)v35;
              v35[2] = (int)v9;
              v9[1] = v35;
            }
            break;
          }
        }
        *((_BYTE *)v19 + 12) = 0;
LABEL_81:
        v9 = (int **)v9[1];
        v8 = v40;
        if ( v39 == *(int ***)(*this + 4) )
        {
          v8 = v38;
          break;
        }
      }
    }
    *((_BYTE *)v8 + 12) = 1;
  }
  sub_10001B70(v4 + 5);
  v27 = v4[4] - 4;
  if ( _InterlockedDecrement(v27 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v27 + 4))(v27);
  j_j___free_base(v4);
  v28 = v18[1];
  if ( v28 != 0 )
    v18[1] = v28 - 1;
  *a2 = Block;
  return a2;
}

// Address: 0x10005A00
int __thiscall sub_10005A00(int *this, HMODULE hModule, unsigned int a3)
{
  HRSRC ResourceW; // eax
  unsigned __int16 *v5; // eax
  unsigned __int16 *v6; // ebx
  signed int v7; // esi
  errno_t v8; // eax

  ResourceW = FindResourceW(hModule, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), (LPCWSTR)6);
  if ( ResourceW == nullptr )
    return 0;
  v5 = sub_10001200(hModule, ResourceW, a3);
  v6 = v5;
  if ( v5 == nullptr )
    return 0;
  v7 = *v5;
  if ( ((*(_DWORD *)(*this - 8) - v7) | (1 - *(_DWORD *)(*this - 4))) < 0 )
    sub_10004F70(this, *v5);
  v8 = wmemcpy_s((wchar_t *)*this, v7, v6 + 1, *v6);
  sub_10001130(v8);
  if ( v7 > *(_DWORD *)(*this - 8) )
    sub_10001110(-2147024809);
  *(_DWORD *)(*this - 12) = v7;
  *(_WORD *)(*this + 2 * v7) = 0;
  return 1;
}

// Address: 0x10005AA0
int __thiscall sub_10005AA0(int *this, int a2)
{
  int *v3; // edx
  int v4; // ecx
  int v5; // eax
  int result; // eax

  v3 = (int *)(*this - 16);
  v4 = *v3;
  if ( v3[2] >= a2
    || a2 <= 0
    || (v5 = (*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)v4 + 8))(v4, v3, a2, 2)) == 0 )
  {
    sub_10005B60(v4);
  }
  result = v5 + 16;
  *this = result;
  return result;
}

// Address: 0x10005AE0
void **__thiscall sub_10005AE0(void **this, int a2)
{
  volatile signed __int32 *v2; // esi
  int v3; // ebx
  int (__thiscall ***v4)(_DWORD, int, int); // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  size_t v8; // edx
  int v9; // edi
  void *Src; // [esp+10h] [ebp-4h]
  int v13; // [esp+1Ch] [ebp+8h]

  v2 = (volatile signed __int32 *)((char *)*this - 16);
  v3 = *((_DWORD *)v2 + 1);
  Src = *this;
  v4 = (int (__thiscall ***)(_DWORD, int, int))(*(int (__thiscall **)(volatile signed __int32))(**(_DWORD **)v2 + 16))(*v2);
  v5 = a2;
  v6 = (**v4)(v4, a2, 2);
  v13 = v6;
  if ( v6 == 0 )
    sub_10005B60(v7);
  if ( v3 < v5 )
    v5 = v3;
  v8 = 2 * v5 + 2;
  v9 = v6 + 16;
  sub_10001020((void *)(v6 + 16), v8, Src, v8);
  *(_DWORD *)(v13 + 4) = v3;
  if ( _InterlockedDecrement(v2 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v2 + 4))(v2);
  *this = (void *)v9;
  return this;
}

// Address: 0x10005B60
void __noreturn sub_10005B60()
{
  sub_10001110(-2147024882);
}

// Address: 0x10005B70
void __fastcall sub_10005B70(void *a1, int a2, void *Src, int a4)
{
  if ( 2 * a4 != 0 )
  {
    if ( a1 == nullptr || Src == nullptr )
    {
      *_errno() = 22;
LABEL_4:
      _invalid_parameter_noinfo();
      return;
    }
    if ( 2 * a2 < (unsigned int)(2 * a4) )
    {
      *_errno() = 34;
      goto LABEL_4;
    }
    memmove(a1, Src, 2 * a4);
  }
}

// Address: 0x10005BE0
int *__thiscall sub_10005BE0(int *this)
{
  int v2; // eax
  int **v3; // ecx
  int *j; // eax
  int i; // eax

  v2 = *this;
  if ( *(_BYTE *)(*this + 13) != 0 )
    return this;
  v3 = *(int ***)(v2 + 8);
  if ( *((_BYTE *)v3 + 13) != 0 )
  {
    for ( i = *(_DWORD *)(v2 + 4); *(_BYTE *)(i + 13) == 0; i = *(_DWORD *)(i + 4) )
    {
      if ( *this != *(_DWORD *)(i + 8) )
        break;
      *this = i;
    }
    *this = i;
    return this;
  }
  for ( j = *v3; *((_BYTE *)j + 13) == 0; j = (int *)*j )
    v3 = (int **)j;
  *this = (int)v3;
  return this;
}

// Address: 0x10005C30
_DWORD *sub_10005C30()
{
  _DWORD *result; // eax

  result = operator new(0x20u);
  if ( result != nullptr )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  if ( result != (_DWORD *)-8 )
    result[2] = result;
  *((_WORD *)result + 6) = 257;
  return result;
}

// Address: 0x10005C60
void __stdcall sub_10005C60(void **Block)
{
  void **v1; // edi
  void **i; // esi

  v1 = Block;
  for ( i = Block; *((_BYTE *)i + 13) == 0; v1 = i )
  {
    sub_10005C60(i[2]);
    i = (void **)*i;
    sub_10006140(v1 + 4);
    j_j___free_base(v1);
  }
}

// Address: 0x10005CA0
_DWORD *sub_10005CA0()
{
  _DWORD *result; // eax

  result = operator new(0x34u);
  if ( result != nullptr )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  if ( result != (_DWORD *)-8 )
    result[2] = result;
  *((_WORD *)result + 6) = 257;
  return result;
}

// Address: 0x10005CD0
void __stdcall sub_10005CD0(_DWORD *Block)
{
  _DWORD *v1; // esi
  void *i; // edi
  volatile signed __int32 *v3; // edx

  v1 = Block;
  for ( i = Block; *((_BYTE *)i + 13) == 0; v1 = i )
  {
    sub_10005CD0(*((void **)i + 2));
    i = *(void **)i;
    sub_10001B70(v1 + 5);
    v3 = (volatile signed __int32 *)(v1[4] - 16);
    if ( _InterlockedDecrement(v3 + 3) <= 0 )
      (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v3 + 4))(v3);
    j_j___free_base(v1);
  }
}

// Address: 0x10005D30
int sub_10005D30(int a1, wchar_t *Format, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, Format);
  return sub_10005E00(Format, va);
}

// Address: 0x10005D50
int *__thiscall sub_10005D50(int *this, const unsigned __int16 **a2)
{
  int *v2; // ebx
  int *v3; // esi
  int v4; // eax

  v2 = (int *)*this;
  v3 = *(int **)(*this + 4);
  while ( *((_BYTE *)v3 + 13) == 0 )
  {
    if ( *a2 == nullptr )
      sub_10001110(-2147467259);
    v4 = wcscmp((const unsigned __int16 *)v3[4], *a2);
    if ( v4 != 0 )
      v4 = v4 < 0 ? -1 : 1;
    if ( v4 >= 0 )
    {
      v2 = v3;
      v3 = (int *)*v3;
    }
    else
    {
      v3 = (int *)v3[2];
    }
  }
  return v2;
}

// Address: 0x10005DD0
int __fastcall sub_10005DD0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 8 )
    result = sub_10001B70(i);
  return result;
}

// Address: 0x10005E00
int __thiscall sub_10005E00(int *this, wchar_t *Format, va_list ArgList)
{
  int v5; // esi
  int result; // eax
  unsigned __int64 v7; // [esp-1Ch] [ebp-28h]
  wchar_t *Formata; // [esp+14h] [ebp+8h]

  if ( Format != nullptr )
  {
    Formata = (wchar_t *)sub_100010D0();
    v5 = sub_1000CFE3(*(_DWORD *)Formata | 6, *((_DWORD *)Formata + 1), 0, 0, (int)Format, nullptr, (int)ArgList);
    if ( v5 < 0 )
      v5 = -1;
    if ( v5 < 0 )
      sub_10001110(-2147467259);
    if ( ((*(_DWORD *)(*this - 8) - v5) | (1 - *(_DWORD *)(*this - 4))) < 0 )
      sub_10004F70(this, v5);
    HIDWORD(v7) = *((_DWORD *)Formata + 1);
    LODWORD(v7) = *(_DWORD *)Formata | 4;
    __stdio_common_vswprintf_s(v7, (wchar_t *)*this, v5 + 1, Format, nullptr, ArgList);
    if ( v5 <= *(_DWORD *)(*this - 8) )
    {
      *(_DWORD *)(*this - 12) = v5;
      result = *this;
      *(_WORD *)(*this + 2 * v5) = 0;
      return result;
    }
  }
  sub_10001110(-2147024809);
}

// Address: 0x10005EB0
int __thiscall sub_10005EB0(int *this, int a2, const unsigned __int16 **a3)
{
  const unsigned __int16 **v3; // ebx
  int *v5; // eax
  const unsigned __int16 *v6; // ecx
  int v7; // esi
  const unsigned __int16 *v8; // eax
  bool v9; // cf
  unsigned __int16 v10; // dx
  int v11; // eax
  void *v13; // eax

  v3 = a3;
  v5 = sub_10005D50(this, a3);
  v7 = (int)v5;
  if ( v5 == (int *)*this )
    goto LABEL_12;
  v8 = (const unsigned __int16 *)v5[4];
  if ( v8 == nullptr )
    sub_10001110(-2147467259);
  v6 = *v3;
  while ( 1 )
  {
    v9 = *v6 < *v8;
    if ( *v6 != *v8 )
      break;
    if ( *v6 == 0 )
      goto LABEL_8;
    v10 = v6[1];
    v9 = v10 < v8[1];
    if ( v10 != v8[1] )
      break;
    v6 += 2;
    v8 += 2;
    if ( v10 == 0 )
    {
LABEL_8:
      v11 = 0;
      goto LABEL_10;
    }
  }
  v11 = v9 ? -1 : 1;
LABEL_10:
  if ( v11 < 0 )
  {
LABEL_12:
    a3 = v3;
    v13 = (void *)sub_100061E0(v6, &a3, v6);
    sub_10006280((int)this, (int)&a3, v7, (int)v13 + 16, v13);
    *(_DWORD *)a2 = a3;
    *(_BYTE *)(a2 + 4) = 1;
    return a2;
  }
  else
  {
    *(_DWORD *)a2 = v7;
    *(_BYTE *)(a2 + 4) = 0;
    return a2;
  }
}

// Address: 0x10005F50
int __thiscall sub_10005F50(int *this, int a2, const unsigned __int16 **a3)
{
  const unsigned __int16 **v3; // ebx
  int *v5; // eax
  const unsigned __int16 *v6; // ecx
  int v7; // esi
  const unsigned __int16 *v8; // eax
  bool v9; // cf
  unsigned __int16 v10; // dx
  int v11; // eax
  void *v13; // eax

  v3 = a3;
  v5 = sub_10005D50(this, a3);
  v7 = (int)v5;
  if ( v5 == (int *)*this )
    goto LABEL_12;
  v8 = (const unsigned __int16 *)v5[4];
  if ( v8 == nullptr )
    sub_10001110(-2147467259);
  v6 = *v3;
  while ( 1 )
  {
    v9 = *v6 < *v8;
    if ( *v6 != *v8 )
      break;
    if ( *v6 == 0 )
      goto LABEL_8;
    v10 = v6[1];
    v9 = v10 < v8[1];
    if ( v10 != v8[1] )
      break;
    v6 += 2;
    v8 += 2;
    if ( v10 == 0 )
    {
LABEL_8:
      v11 = 0;
      goto LABEL_10;
    }
  }
  v11 = v9 ? -1 : 1;
LABEL_10:
  if ( v11 < 0 )
  {
LABEL_12:
    a3 = v3;
    v13 = (void *)sub_100064D0(v6, &a3, v6);
    sub_10006570((int)this, (int)&a3, v7, (int)v13 + 16, v13);
    *(_DWORD *)a2 = a3;
    *(_BYTE *)(a2 + 4) = 1;
    return a2;
  }
  else
  {
    *(_DWORD *)a2 = v7;
    *(_BYTE *)(a2 + 4) = 0;
    return a2;
  }
}

// Address: 0x10005FF0
int __fastcall sub_10005FF0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // esi
  volatile signed __int32 *v4; // edx
  volatile signed __int32 *v5; // edx
  volatile signed __int32 *v6; // edx
  int result; // eax

  for ( i = a1; i != a2; i += 3 )
  {
    v4 = (volatile signed __int32 *)(i[2] - 16);
    if ( _InterlockedDecrement(v4 + 3) <= 0 )
      (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v4 + 4))(v4);
    v5 = (volatile signed __int32 *)(i[1] - 16);
    if ( _InterlockedDecrement(v5 + 3) <= 0 )
      (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v5 + 4))(v5);
    v6 = (volatile signed __int32 *)(*i - 16);
    result = _InterlockedDecrement(v6 + 3);
    if ( result <= 0 )
      result = (*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v6 + 4))(v6);
  }
  return result;
}

// Address: 0x10006060
_DWORD *__thiscall sub_10006060(_DWORD *this, void **Src)
{
  sub_10005080(this, Src);
  sub_10005080(this + 1, Src + 1);
  sub_10005080(this + 2, Src + 2);
  sub_10005080(this + 3, Src + 3);
  sub_10005080(this + 4, Src + 4);
  sub_10005080(this + 5, Src + 5);
  sub_10005080(this + 6, Src + 6);
  sub_10005080(this + 7, Src + 7);
  return this;
}

// Address: 0x10006140
int __thiscall sub_10006140(_DWORD *this)
{
  volatile signed __int32 *v2; // edx
  volatile signed __int32 *v3; // edx
  volatile signed __int32 *v4; // edx
  int result; // eax
  volatile signed __int32 *v6; // edx

  v2 = (volatile signed __int32 *)(*(this + 3) - 16);
  if ( _InterlockedDecrement(v2 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v2 + 4))(v2);
  v3 = (volatile signed __int32 *)(*(this + 2) - 16);
  if ( _InterlockedDecrement(v3 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v3 + 4))(v3);
  v4 = (volatile signed __int32 *)(*(this + 1) - 16);
  result = _InterlockedDecrement(v4 + 3);
  if ( result <= 0 )
    result = (*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v4 + 4))(v4);
  v6 = (volatile signed __int32 *)(*this - 16);
  if ( _InterlockedDecrement(v6 + 3) <= 0 )
    return (*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v6 + 4))(v6);
  return result;
}

// Address: 0x100061E0
int __stdcall sub_100061E0(int a1, void ***a2, int a3)
{
  int v3; // edi
  int v5; // [esp+0h] [ebp-28h] BYREF
  void *Block; // [esp+14h] [ebp-14h]
  int *v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v7 = &v5;
  v3 = sub_10006910();
  v8 = 0;
  Block = (void *)v3;
  *(_WORD *)(v3 + 12) = 0;
  LOBYTE(v8) = 1;
  if ( v3 != -16 )
  {
    sub_10005080((_DWORD *)(v3 + 16), *a2);
    *(_QWORD *)(v3 + 20) = 0;
    *(_DWORD *)(v3 + 28) = 0;
    sub_10001F80((_DWORD *)(v3 + 20));
  }
  return v3;
}

// Address: 0x10006280
_DWORD *__thiscall sub_10006280(int *this, _DWORD *a2, int a3, const unsigned __int16 **a4, void *Block)
{
  bool v6; // zf
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // esi
  int v12; // ecx
  int v13; // [esp-8h] [ebp-34h]
  int v14; // [esp+0h] [ebp-2Ch] BYREF
  int v15; // [esp+10h] [ebp-1Ch] BYREF
  int v16[2]; // [esp+18h] [ebp-14h] BYREF
  int v17; // [esp+28h] [ebp-4h]

  v16[1] = (int)&v14;
  v17 = 0;
  v6 = *(this + 1) == 0;
  v16[0] = 0;
  if ( v6 )
  {
    sub_10006A50((int)a2, 1, *this, (int)this, Block);
    return a2;
  }
  v8 = *this;
  if ( a3 == *(_DWORD *)*this )
  {
    if ( sub_10004730(a4, (const unsigned __int16 **)(a3 + 16)) )
    {
      sub_10006A50((int)a2, 1, a3, v9, Block);
      return a2;
    }
    goto LABEL_23;
  }
  if ( a3 == v8 )
  {
    if ( sub_10004730((const unsigned __int16 **)(*(_DWORD *)(v8 + 8) + 16), a4) )
    {
      sub_10006A50((int)a2, 0, *(_DWORD *)(*this + 8), v9, Block);
      return a2;
    }
    goto LABEL_23;
  }
  if ( sub_10004730(a4, (const unsigned __int16 **)(a3 + 16)) )
  {
    v16[0] = a3;
    sub_100069F0(v16);
    if ( sub_10004730((const unsigned __int16 **)(v16[0] + 16), a4) )
    {
      v13 = *(_DWORD *)(v16[0] + 8);
      if ( *(_BYTE *)(v13 + 13) != 0 )
        sub_10006A50((int)a2, 0, v16[0], v13, Block);
      else
        sub_10006A50((int)a2, 1, a3, v13, Block);
      return a2;
    }
  }
  if ( !sub_10004730((const unsigned __int16 **)(a3 + 16), a4) )
    goto LABEL_23;
  v10 = a3;
  v11 = *this;
  v16[0] = a3;
  if ( *sub_10005BE0(v16) != v11 )
  {
    if ( sub_10004730(a4, (const unsigned __int16 **)(v16[0] + 16)) )
    {
      v10 = a3;
      goto LABEL_19;
    }
LABEL_23:
    v17 = -1;
    v12 = *(_DWORD *)sub_10006C70((int)&v15, v9, (int)a4, Block);
    *a2 = v12;
    return a2;
  }
LABEL_19:
  if ( *(_BYTE *)(*(_DWORD *)(v10 + 8) + 13) != 0 )
    sub_10006A50((int)a2, 0, v10, v9, Block);
  else
    sub_10006A50((int)a2, 1, v16[0], v9, Block);
  return a2;
}

// Address: 0x100064D0
int __stdcall sub_100064D0(int a1, void ***a2, int a3)
{
  int v3; // edi
  int v5; // [esp+0h] [ebp-28h] BYREF
  void *Block; // [esp+14h] [ebp-14h]
  int *v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v7 = &v5;
  v3 = sub_10006970();
  v8 = 0;
  Block = (void *)v3;
  *(_WORD *)(v3 + 12) = 0;
  LOBYTE(v8) = 1;
  if ( v3 != -16 )
  {
    sub_10005080((_DWORD *)(v3 + 16), *a2);
    *(_OWORD *)(v3 + 20) = 0;
    *(_OWORD *)(v3 + 36) = 0;
    sub_10001A30((_DWORD *)(v3 + 20));
  }
  return v3;
}

// Address: 0x10006570
_DWORD *__thiscall sub_10006570(int *this, _DWORD *a2, int a3, const unsigned __int16 **a4, void *Block)
{
  bool v6; // zf
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // esi
  int v12; // ecx
  int v13; // [esp-8h] [ebp-34h]
  int v14; // [esp+0h] [ebp-2Ch] BYREF
  int v15; // [esp+10h] [ebp-1Ch] BYREF
  int v16[2]; // [esp+18h] [ebp-14h] BYREF
  int v17; // [esp+28h] [ebp-4h]

  v16[1] = (int)&v14;
  v17 = 0;
  v6 = *(this + 1) == 0;
  v16[0] = 0;
  if ( v6 )
  {
    sub_10006E00((int)a2, 1, *this, (int)this, Block);
    return a2;
  }
  v8 = *this;
  if ( a3 == *(_DWORD *)*this )
  {
    if ( sub_10004730(a4, (const unsigned __int16 **)(a3 + 16)) )
    {
      sub_10006E00((int)a2, 1, a3, v9, Block);
      return a2;
    }
    goto LABEL_23;
  }
  if ( a3 == v8 )
  {
    if ( sub_10004730((const unsigned __int16 **)(*(_DWORD *)(v8 + 8) + 16), a4) )
    {
      sub_10006E00((int)a2, 0, *(_DWORD *)(*this + 8), v9, Block);
      return a2;
    }
    goto LABEL_23;
  }
  if ( sub_10004730(a4, (const unsigned __int16 **)(a3 + 16)) )
  {
    v16[0] = a3;
    sub_100069F0(v16);
    if ( sub_10004730((const unsigned __int16 **)(v16[0] + 16), a4) )
    {
      v13 = *(_DWORD *)(v16[0] + 8);
      if ( *(_BYTE *)(v13 + 13) != 0 )
        sub_10006E00((int)a2, 0, v16[0], v13, Block);
      else
        sub_10006E00((int)a2, 1, a3, v13, Block);
      return a2;
    }
  }
  if ( !sub_10004730((const unsigned __int16 **)(a3 + 16), a4) )
    goto LABEL_23;
  v10 = a3;
  v11 = *this;
  v16[0] = a3;
  if ( *sub_10005BE0(v16) != v11 )
  {
    if ( sub_10004730(a4, (const unsigned __int16 **)(v16[0] + 16)) )
    {
      v10 = a3;
      goto LABEL_19;
    }
LABEL_23:
    v17 = -1;
    v12 = *(_DWORD *)sub_10007040((int)&v15, v9, (int)a4, Block);
    *a2 = v12;
    return a2;
  }
LABEL_19:
  if ( *(_BYTE *)(*(_DWORD *)(v10 + 8) + 13) != 0 )
    sub_10006E00((int)a2, 0, v10, v9, Block);
  else
    sub_10006E00((int)a2, 1, v16[0], v9, Block);
  return a2;
}

// Address: 0x100067C0
_DWORD *__fastcall sub_100067C0(void **Src, void **a2, _DWORD *a3)
{
  _DWORD *v5; // esi
  int v7; // [esp+0h] [ebp-2Ch] BYREF
  _DWORD *v8; // [esp+10h] [ebp-1Ch]
  _DWORD *v9; // [esp+14h] [ebp-18h]
  int v10; // [esp+18h] [ebp-14h]
  int *v11; // [esp+1Ch] [ebp-10h]
  int v12; // [esp+28h] [ebp-4h]

  v11 = &v7;
  v5 = a3;
  v10 = (int)a3;
  v12 = 0;
  while ( Src != a2 )
  {
    v9 = v5;
    LOBYTE(v12) = 1;
    if ( v5 != nullptr )
    {
      sub_10005080(v5, Src);
      LOBYTE(v12) = 2;
      v8 = v5 + 1;
      sub_10005080(v5 + 1, Src + 1);
      LOBYTE(v12) = 3;
      v8 = v5 + 2;
      sub_10005080(v5 + 2, Src + 2);
    }
    v5 += 3;
    LOBYTE(v12) = 0;
    Src += 3;
  }
  return v5;
}

// Address: 0x10006880
_DWORD *__fastcall sub_10006880(void **Src, void **a2, _DWORD *a3)
{
  _DWORD *v5; // esi
  _DWORD v7[7]; // [esp+0h] [ebp-28h] BYREF
  int v8; // [esp+24h] [ebp-4h]

  v7[6] = v7;
  v5 = a3;
  v7[5] = a3;
  v8 = 0;
  while ( Src != a2 )
  {
    LOBYTE(v8) = 1;
    if ( v5 != nullptr )
      sub_10006060(v5, Src);
    v5 += 8;
    LOBYTE(v8) = 0;
    Src += 8;
  }
  return v5;
}

// Address: 0x10006910
_DWORD *__thiscall sub_10006910(_DWORD *this)
{
  _DWORD *result; // eax

  result = operator new(0x20u);
  if ( result != nullptr )
    *result = *this;
  if ( result != (_DWORD *)-4 )
    result[1] = *this;
  if ( result != (_DWORD *)-8 )
    result[2] = *this;
  return result;
}

// Address: 0x10006950
void __stdcall sub_10006950(_DWORD *Block)
{
  sub_10006140(Block + 4);
  j_j___free_base(Block);
}

// Address: 0x10006970
_DWORD *__thiscall sub_10006970(_DWORD *this)
{
  _DWORD *result; // eax

  result = operator new(0x34u);
  if ( result != nullptr )
    *result = *this;
  if ( result != (_DWORD *)-4 )
    result[1] = *this;
  if ( result != (_DWORD *)-8 )
    result[2] = *this;
  return result;
}

// Address: 0x100069B0
void __stdcall sub_100069B0(_DWORD *Block)
{
  volatile signed __int32 *v1; // edx

  sub_10001B70(Block + 5);
  v1 = (volatile signed __int32 *)(Block[4] - 16);
  if ( _InterlockedDecrement(v1 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v1 + 4))(v1);
  j_j___free_base(Block);
}

// Address: 0x100069F0
void *__thiscall sub_100069F0(void *this)
{
  _DWORD *v2; // eax
  int i; // ecx
  int v5; // eax
  int v6; // ecx

  v2 = *(_DWORD **)this;
  if ( *(_BYTE *)(*(_DWORD *)this + 13) != 0 )
  {
    *(_DWORD *)this = v2[2];
    return this;
  }
  i = *v2;
  if ( *(_BYTE *)(*v2 + 13) != 0 )
  {
    for ( i = v2[1]; *(_BYTE *)(i + 13) == 0; i = *(_DWORD *)(i + 4) )
    {
      if ( *(_DWORD *)this != *(_DWORD *)i )
        break;
      *(_DWORD *)this = i;
    }
    if ( *(_BYTE *)(*(_DWORD *)this + 13) != 0 )
      return this;
    goto LABEL_11;
  }
  v5 = *(_DWORD *)(i + 8);
  if ( *(_BYTE *)(v5 + 13) != 0 )
  {
LABEL_11:
    *(_DWORD *)this = i;
    return this;
  }
  do
  {
    v6 = v5;
    v5 = *(_DWORD *)(v5 + 8);
  }
  while ( *(_BYTE *)(v5 + 13) == 0 );
  *(_DWORD *)this = v6;
  return this;
}

// Address: 0x10006A50
_DWORD *__thiscall sub_10006A50(unsigned int *this, _DWORD *a2, char a3, _DWORD *a4, int a5, _DWORD *Block)
{
  unsigned int v7; // eax
  _DWORD *v8; // eax
  int *v9; // ecx
  int *v10; // esi
  int *v11; // edx
  _DWORD *v12; // edx
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  _DWORD *v15; // esi
  int v16; // ecx
  _DWORD *v17; // ecx
  int v18; // edx
  int v19; // ecx
  _DWORD *v20; // ecx
  _DWORD *v21; // ecx

  v7 = *(this + 1);
  if ( v7 >= 0x7FFFFFE )
  {
    sub_10006140(Block + 4);
    j_j___free_base(Block);
    sub_1000764B("map/set<T> too long");
  }
  *(this + 1) = v7 + 1;
  Block[1] = a4;
  if ( a4 == (_DWORD *)*this )
  {
    *(_DWORD *)(*this + 4) = Block;
    *(_DWORD *)*this = Block;
    *(_DWORD *)(*this + 8) = Block;
  }
  else if ( a3 != 0 )
  {
    *a4 = Block;
    if ( a4 == *(_DWORD **)*this )
      *(_DWORD *)*this = Block;
  }
  else
  {
    a4[2] = Block;
    if ( a4 == *(_DWORD **)(*this + 8) )
      *(_DWORD *)(*this + 8) = Block;
  }
  v8 = Block;
  while ( *(_BYTE *)(v8[1] + 12) == 0 )
  {
    v9 = (int *)v8[1];
    v10 = (int *)v9[1];
    v11 = (int *)*v10;
    if ( v9 == (int *)*v10 )
    {
      v11 = (int *)v10[2];
      if ( *((_BYTE *)v11 + 12) != 0 )
      {
        if ( v8 == (_DWORD *)v9[2] )
        {
          v8 = (_DWORD *)v8[1];
          v12 = (_DWORD *)v9[2];
          v9[2] = *v12;
          if ( *(_BYTE *)(*v12 + 13) == 0 )
            *(_DWORD *)(*v12 + 4) = v9;
          v12[1] = v9[1];
          if ( v9 == *(int **)(*this + 4) )
          {
            *(_DWORD *)(*this + 4) = v12;
          }
          else
          {
            v13 = (_DWORD *)v9[1];
            if ( v8 == (_DWORD *)*v13 )
              *v13 = v12;
            else
              v13[2] = v12;
          }
          *v12 = v8;
          v8[1] = v12;
        }
        *(_BYTE *)(v8[1] + 12) = 1;
        *(_BYTE *)(*(_DWORD *)(v8[1] + 4) + 12) = 0;
        v14 = *(_DWORD **)(v8[1] + 4);
        v15 = (_DWORD *)*v14;
        *v14 = *(_DWORD *)(*v14 + 8);
        v16 = v15[2];
        if ( *(_BYTE *)(v16 + 13) == 0 )
          *(_DWORD *)(v16 + 4) = v14;
        v15[1] = v14[1];
        if ( v14 == *(_DWORD **)(*this + 4) )
        {
          *(_DWORD *)(*this + 4) = v15;
          v15[2] = v14;
        }
        else
        {
          v17 = (_DWORD *)v14[1];
          if ( v14 == (_DWORD *)v17[2] )
            v17[2] = v15;
          else
            *v17 = v15;
          v15[2] = v14;
        }
LABEL_48:
        v14[1] = v15;
        continue;
      }
    }
    else if ( *((_BYTE *)v11 + 12) != 0 )
    {
      if ( v8 == (_DWORD *)*v9 )
      {
        v8 = (_DWORD *)v8[1];
        v18 = *v9;
        *v9 = *(_DWORD *)(*v9 + 8);
        v19 = *(_DWORD *)(v18 + 8);
        if ( *(_BYTE *)(v19 + 13) == 0 )
          *(_DWORD *)(v19 + 4) = v8;
        *(_DWORD *)(v18 + 4) = v8[1];
        if ( v8 == *(_DWORD **)(*this + 4) )
        {
          *(_DWORD *)(*this + 4) = v18;
        }
        else
        {
          v20 = (_DWORD *)v8[1];
          if ( v8 == (_DWORD *)v20[2] )
            v20[2] = v18;
          else
            *v20 = v18;
        }
        *(_DWORD *)(v18 + 8) = v8;
        v8[1] = v18;
      }
      *(_BYTE *)(v8[1] + 12) = 1;
      *(_BYTE *)(*(_DWORD *)(v8[1] + 4) + 12) = 0;
      v14 = *(_DWORD **)(v8[1] + 4);
      v15 = (_DWORD *)v14[2];
      v14[2] = *v15;
      if ( *(_BYTE *)(*v15 + 13) == 0 )
        *(_DWORD *)(*v15 + 4) = v14;
      v15[1] = v14[1];
      if ( v14 == *(_DWORD **)(*this + 4) )
      {
        *(_DWORD *)(*this + 4) = v15;
      }
      else
      {
        v21 = (_DWORD *)v14[1];
        if ( v14 == (_DWORD *)*v21 )
          *v21 = v15;
        else
          v21[2] = v15;
      }
      *v15 = v14;
      goto LABEL_48;
    }
    *((_BYTE *)v9 + 12) = 1;
    *((_BYTE *)v11 + 12) = 1;
    *(_BYTE *)(*(_DWORD *)(v8[1] + 4) + 12) = 0;
    v8 = *(_DWORD **)(v8[1] + 4);
  }
  *(_BYTE *)(*(_DWORD *)(*this + 4) + 12) = 1;
  *a2 = Block;
  return a2;
}

// Address: 0x10006C70
int __thiscall sub_10006C70(unsigned int *this, int a2, int a3, const unsigned __int16 **a4, _DWORD *Block)
{
  unsigned int *v5; // edx
  bool v6; // al
  const unsigned __int16 **v7; // ecx
  const unsigned __int16 **v8; // edi
  const unsigned __int16 **v9; // ebx
  unsigned __int16 *v10; // esi
  const unsigned __int16 *v11; // eax
  int v12; // eax
  const unsigned __int16 **v13; // esi
  _DWORD *v14; // eax
  const unsigned __int16 *v16; // eax
  const unsigned __int16 *v17; // ecx
  bool v18; // cf
  unsigned __int16 v19; // dx
  int v20; // eax
  void *v21; // edi
  int v22; // [esp+0h] [ebp-2Ch] BYREF
  unsigned int v23; // [esp+10h] [ebp-1Ch]
  unsigned int *v24; // [esp+14h] [ebp-18h]
  int v25; // [esp+18h] [ebp-14h]
  int *v26; // [esp+1Ch] [ebp-10h]
  int v27; // [esp+28h] [ebp-4h]

  v26 = &v22;
  v5 = this;
  v24 = this;
  v27 = 0;
  v6 = true;
  v7 = (const unsigned __int16 **)*this;
  v8 = v7;
  v9 = a4;
  v23 = *v5;
  LOBYTE(v25) = 1;
  v10 = (unsigned __int16 *)v7[1];
  if ( *((_BYTE *)v10 + 13) == 0 )
  {
    do
    {
      v11 = *((const unsigned __int16 **)v10 + 4);
      v8 = (const unsigned __int16 **)v10;
      if ( v11 == nullptr )
        goto LABEL_16;
      v12 = wcscmp(*a4, v11);
      if ( v12 != 0 )
        v12 = v12 < 0 ? -1 : 1;
      v6 = v12 < 0;
      LOBYTE(v25) = v6;
      if ( v6 )
        v10 = *(unsigned __int16 **)v10;
      else
        v10 = *((unsigned __int16 **)v10 + 2);
    }
    while ( *((_BYTE *)v10 + 13) == 0 );
    v7 = (const unsigned __int16 **)v23;
    v5 = v24;
  }
  v13 = v8;
  a4 = v8;
  if ( v6 )
  {
    if ( v8 == (const unsigned __int16 **)*v7 )
    {
      v14 = sub_10006A50(v5, &a4, 1, v8, (int)v7, Block);
LABEL_13:
      *(_DWORD *)a2 = *v14;
      *(_BYTE *)(a2 + 4) = 1;
      return a2;
    }
    sub_100069F0(&a4);
    v13 = a4;
  }
  v16 = *v9;
  if ( *v9 == nullptr )
LABEL_16:
    sub_10001110(-2147467259);
  v17 = v13[4];
  while ( 1 )
  {
    v18 = *v17 < *v16;
    if ( *v17 != *v16 )
      break;
    if ( *v17 == 0 )
      goto LABEL_22;
    v19 = v17[1];
    v18 = v19 < v16[1];
    if ( v19 != v16[1] )
      break;
    v17 += 2;
    v16 += 2;
    if ( v19 == 0 )
    {
LABEL_22:
      v20 = 0;
      goto LABEL_24;
    }
  }
  v20 = v18 ? -1 : 1;
LABEL_24:
  if ( v20 < 0 )
  {
    v14 = sub_10006A50(v24, &a4, v25, v8, (int)v17, Block);
    goto LABEL_13;
  }
  v21 = Block;
  sub_10006140(Block + 4);
  j_j___free_base(v21);
  *(_DWORD *)a2 = v13;
  *(_BYTE *)(a2 + 4) = 0;
  return a2;
}

// Address: 0x10006E00
_DWORD *__thiscall sub_10006E00(unsigned int *this, _DWORD *a2, char a3, _DWORD *a4, int a5, _DWORD *Block)
{
  unsigned int v7; // eax
  volatile signed __int32 *v8; // edx
  _DWORD *v9; // eax
  int *v10; // ecx
  int *v11; // esi
  int *v12; // edx
  _DWORD *v13; // edx
  _DWORD *v14; // ecx
  _DWORD *v15; // edx
  _DWORD *v16; // esi
  int v17; // ecx
  _DWORD *v18; // ecx
  int v19; // edx
  int v20; // ecx
  _DWORD *v21; // ecx
  _DWORD *v22; // ecx

  v7 = *(this + 1);
  if ( v7 >= 0x4EC4EC3 )
  {
    sub_10001B70(Block + 5);
    v8 = (volatile signed __int32 *)(Block[4] - 16);
    if ( _InterlockedDecrement(v8 + 3) <= 0 )
      (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v8 + 4))(v8);
    j_j___free_base(Block);
    sub_1000764B("map/set<T> too long");
  }
  *(this + 1) = v7 + 1;
  Block[1] = a4;
  if ( a4 == (_DWORD *)*this )
  {
    *(_DWORD *)(*this + 4) = Block;
    *(_DWORD *)*this = Block;
    *(_DWORD *)(*this + 8) = Block;
  }
  else if ( a3 != 0 )
  {
    *a4 = Block;
    if ( a4 == *(_DWORD **)*this )
      *(_DWORD *)*this = Block;
  }
  else
  {
    a4[2] = Block;
    if ( a4 == *(_DWORD **)(*this + 8) )
      *(_DWORD *)(*this + 8) = Block;
  }
  v9 = Block;
  while ( *(_BYTE *)(v9[1] + 12) == 0 )
  {
    v10 = (int *)v9[1];
    v11 = (int *)v10[1];
    v12 = (int *)*v11;
    if ( v10 == (int *)*v11 )
    {
      v12 = (int *)v11[2];
      if ( *((_BYTE *)v12 + 12) != 0 )
      {
        if ( v9 == (_DWORD *)v10[2] )
        {
          v9 = (_DWORD *)v9[1];
          v13 = (_DWORD *)v10[2];
          v10[2] = *v13;
          if ( *(_BYTE *)(*v13 + 13) == 0 )
            *(_DWORD *)(*v13 + 4) = v10;
          v13[1] = v10[1];
          if ( v10 == *(int **)(*this + 4) )
          {
            *(_DWORD *)(*this + 4) = v13;
          }
          else
          {
            v14 = (_DWORD *)v10[1];
            if ( v9 == (_DWORD *)*v14 )
              *v14 = v13;
            else
              v14[2] = v13;
          }
          *v13 = v9;
          v9[1] = v13;
        }
        *(_BYTE *)(v9[1] + 12) = 1;
        *(_BYTE *)(*(_DWORD *)(v9[1] + 4) + 12) = 0;
        v15 = *(_DWORD **)(v9[1] + 4);
        v16 = (_DWORD *)*v15;
        *v15 = *(_DWORD *)(*v15 + 8);
        v17 = v16[2];
        if ( *(_BYTE *)(v17 + 13) == 0 )
          *(_DWORD *)(v17 + 4) = v15;
        v16[1] = v15[1];
        if ( v15 == *(_DWORD **)(*this + 4) )
        {
          *(_DWORD *)(*this + 4) = v16;
          v16[2] = v15;
        }
        else
        {
          v18 = (_DWORD *)v15[1];
          if ( v15 == (_DWORD *)v18[2] )
            v18[2] = v16;
          else
            *v18 = v16;
          v16[2] = v15;
        }
LABEL_50:
        v15[1] = v16;
        continue;
      }
    }
    else if ( *((_BYTE *)v12 + 12) != 0 )
    {
      if ( v9 == (_DWORD *)*v10 )
      {
        v9 = (_DWORD *)v9[1];
        v19 = *v10;
        *v10 = *(_DWORD *)(*v10 + 8);
        v20 = *(_DWORD *)(v19 + 8);
        if ( *(_BYTE *)(v20 + 13) == 0 )
          *(_DWORD *)(v20 + 4) = v9;
        *(_DWORD *)(v19 + 4) = v9[1];
        if ( v9 == *(_DWORD **)(*this + 4) )
        {
          *(_DWORD *)(*this + 4) = v19;
        }
        else
        {
          v21 = (_DWORD *)v9[1];
          if ( v9 == (_DWORD *)v21[2] )
            v21[2] = v19;
          else
            *v21 = v19;
        }
        *(_DWORD *)(v19 + 8) = v9;
        v9[1] = v19;
      }
      *(_BYTE *)(v9[1] + 12) = 1;
      *(_BYTE *)(*(_DWORD *)(v9[1] + 4) + 12) = 0;
      v15 = *(_DWORD **)(v9[1] + 4);
      v16 = (_DWORD *)v15[2];
      v15[2] = *v16;
      if ( *(_BYTE *)(*v16 + 13) == 0 )
        *(_DWORD *)(*v16 + 4) = v15;
      v16[1] = v15[1];
      if ( v15 == *(_DWORD **)(*this + 4) )
      {
        *(_DWORD *)(*this + 4) = v16;
      }
      else
      {
        v22 = (_DWORD *)v15[1];
        if ( v15 == (_DWORD *)*v22 )
          *v22 = v16;
        else
          v22[2] = v16;
      }
      *v16 = v15;
      goto LABEL_50;
    }
    *((_BYTE *)v10 + 12) = 1;
    *((_BYTE *)v12 + 12) = 1;
    *(_BYTE *)(*(_DWORD *)(v9[1] + 4) + 12) = 0;
    v9 = *(_DWORD **)(v9[1] + 4);
  }
  *(_BYTE *)(*(_DWORD *)(*this + 4) + 12) = 1;
  *a2 = Block;
  return a2;
}

// Address: 0x10007040
int __thiscall sub_10007040(unsigned int *this, int a2, int a3, const unsigned __int16 **a4, _DWORD *Block)
{
  unsigned int *v5; // edx
  bool v6; // al
  const unsigned __int16 **v7; // ecx
  const unsigned __int16 **v8; // edi
  const unsigned __int16 **v9; // ebx
  unsigned __int16 *v10; // esi
  const unsigned __int16 *v11; // eax
  int v12; // eax
  const unsigned __int16 **v13; // esi
  _DWORD *v14; // eax
  const unsigned __int16 *v16; // eax
  const unsigned __int16 *v17; // ecx
  bool v18; // cf
  unsigned __int16 v19; // dx
  int v20; // eax
  _DWORD *v21; // edi
  volatile signed __int32 *v22; // edx
  int v23; // [esp+0h] [ebp-2Ch] BYREF
  unsigned int v24; // [esp+10h] [ebp-1Ch]
  unsigned int *v25; // [esp+14h] [ebp-18h]
  int v26; // [esp+18h] [ebp-14h]
  int *v27; // [esp+1Ch] [ebp-10h]
  int v28; // [esp+28h] [ebp-4h]

  v27 = &v23;
  v5 = this;
  v25 = this;
  v28 = 0;
  v6 = true;
  v7 = (const unsigned __int16 **)*this;
  v8 = v7;
  v9 = a4;
  v24 = *v5;
  LOBYTE(v26) = 1;
  v10 = (unsigned __int16 *)v7[1];
  if ( *((_BYTE *)v10 + 13) == 0 )
  {
    do
    {
      v11 = *((const unsigned __int16 **)v10 + 4);
      v8 = (const unsigned __int16 **)v10;
      if ( v11 == nullptr )
        goto LABEL_16;
      v12 = wcscmp(*a4, v11);
      if ( v12 != 0 )
        v12 = v12 < 0 ? -1 : 1;
      v6 = v12 < 0;
      LOBYTE(v26) = v6;
      if ( v6 )
        v10 = *(unsigned __int16 **)v10;
      else
        v10 = *((unsigned __int16 **)v10 + 2);
    }
    while ( *((_BYTE *)v10 + 13) == 0 );
    v7 = (const unsigned __int16 **)v24;
    v5 = v25;
  }
  v13 = v8;
  a4 = v8;
  if ( v6 )
  {
    if ( v8 == (const unsigned __int16 **)*v7 )
    {
      v14 = sub_10006E00(v5, &a4, 1, v8, (int)v7, Block);
LABEL_13:
      *(_DWORD *)a2 = *v14;
      *(_BYTE *)(a2 + 4) = 1;
      return a2;
    }
    sub_100069F0(&a4);
    v13 = a4;
  }
  v16 = *v9;
  if ( *v9 == nullptr )
LABEL_16:
    sub_10001110(-2147467259);
  v17 = v13[4];
  while ( 1 )
  {
    v18 = *v17 < *v16;
    if ( *v17 != *v16 )
      break;
    if ( *v17 == 0 )
      goto LABEL_22;
    v19 = v17[1];
    v18 = v19 < v16[1];
    if ( v19 != v16[1] )
      break;
    v17 += 2;
    v16 += 2;
    if ( v19 == 0 )
    {
LABEL_22:
      v20 = 0;
      goto LABEL_24;
    }
  }
  v20 = v18 ? -1 : 1;
LABEL_24:
  if ( v20 < 0 )
  {
    v14 = sub_10006E00(v25, &a4, v26, v8, (int)v17, Block);
    goto LABEL_13;
  }
  v21 = Block;
  sub_10001B70(Block + 5);
  v22 = (volatile signed __int32 *)(v21[4] - 16);
  if ( _InterlockedDecrement(v22 + 3) <= 0 )
    (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v22 + 4))(v22);
  j_j___free_base(v21);
  *(_DWORD *)a2 = v13;
  *(_BYTE *)(a2 + 4) = 0;
  return a2;
}

// Address: 0x100071F0
HKEY *__thiscall sub_100071F0(HKEY *Block, char a2)
{
  LSTATUS v3; // eax
  HKEY v4; // ecx

  v3 = 0;
  v4 = *(Block + 1);
  *Block = (HKEY)&CRegInfo::`vftable';
  if ( v4 != nullptr )
  {
    v3 = RegCloseKey(v4);
    *(Block + 1) = nullptr;
  }
  SetLastError(v3);
  if ( (a2 & 1) != 0 )
    sub_10007C2D(Block);
  return Block;
}

// Address: 0x10007270
BOOL __thiscall sub_10007270(int this, int a2, LPCWSTR lpSubKey, int a4, int a5)
{
  LSTATUS v6; // edx
  HKEY *v7; // esi
  LSTATUS Key; // edi

  v6 = 0;
  v7 = (HKEY *)(this + 4);
  if ( *(_DWORD *)(this + 4) != 0 )
  {
    v6 = RegCloseKey(*(HKEY *)(this + 4));
    *v7 = nullptr;
  }
  SetLastError(v6);
  Key = RegCreateKeyExW(HKEY_LOCAL_MACHINE, lpSubKey, 0, nullptr, 0, 0xF003Fu, nullptr, v7, nullptr);
  if ( Key == 0 )
    RegQueryInfoKeyW(
      *v7,
      nullptr,
      nullptr,
      nullptr,
      nullptr,
      nullptr,
      nullptr,
      nullptr,
      nullptr,
      nullptr,
      nullptr,
      (PFILETIME)(this + 8));
  SetLastError(Key);
  return Key == 0;
}

// Address: 0x100072F0
BOOL __thiscall sub_100072F0(HKEY *this)
{
  LSTATUS v2; // esi

  v2 = 0;
  if ( *(this + 1) != nullptr )
  {
    v2 = RegCloseKey(*(this + 1));
    *(this + 1) = nullptr;
  }
  SetLastError(v2);
  return v2 == 0;
}

// Address: 0x10007320
BOOL __thiscall sub_10007320(HKEY *this, LPCWSTR lpValueName, int a3)
{
  LSTATUS v4; // esi
  BYTE *v5; // edi
  BYTE *v6; // eax
  __int16 v7; // cx
  DWORD Type; // [esp+8h] [ebp-8h] BYREF
  DWORD cbData; // [esp+Ch] [ebp-4h] BYREF

  v4 = RegQueryValueExW(*(this + 1), lpValueName, nullptr, &Type, nullptr, &cbData);
  if ( v4 == 0 )
  {
    if ( Type == 1 )
    {
      v5 = (BYTE *)unknown_libname_3(cbData + 2);
      v4 = RegQueryValueExW(*(this + 1), lpValueName, nullptr, nullptr, v5, &cbData);
      if ( v4 == 0 )
      {
        *(_WORD *)&v5[2 * (cbData >> 1)] = 0;
        v6 = v5;
        do
        {
          v7 = *(_WORD *)v6;
          v6 += 2;
          *(_WORD *)&v6[a3 - (_DWORD)v5 - 2] = v7;
        }
        while ( v7 != 0 );
      }
      j_j_j___free_base(v5);
    }
    else
    {
      v4 = 13;
    }
  }
  SetLastError(v4);
  return v4 == 0;
}

// Address: 0x100073D0
BOOL __thiscall sub_100073D0(HKEY *this, LPCWSTR lpValueName, BYTE *lpData)
{
  LSTATUS v3; // esi

  v3 = RegSetValueExW(*(this + 1), lpValueName, 0, 1u, lpData, 2 * wcslen((const unsigned __int16 *)lpData));
  SetLastError(v3);
  return v3 == 0;
}

// Address: 0x10007419
char *__thiscall sub_10007419(char *this)
{
  sub_1000746C();
  *(_DWORD *)this = 56;
  *((_DWORD *)this + 2) = 0x10000000;
  *((_DWORD *)this + 1) = 0x10000000;
  *((_DWORD *)this + 3) = 3584;
  *((_DWORD *)this + 4) = &unk_1001C1E0;
  if ( sub_100011D0((LPCRITICAL_SECTION)(this + 20)) < 0 )
  {
    if ( IsDebuggerPresent() )
      OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
    byte_100263B8 = 1;
  }
  return this;
}

// Address: 0x1000746C
_DWORD *__thiscall sub_1000746C(_DWORD *this)
{
  memset(this + 5, 0, 0x18u);
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  return this;
}

// Address: 0x100074A5
int __thiscall sub_100074A5(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= *(this + 1) )
  {
    RaiseException(0xC000008C, 1u, 0, nullptr);
    JUMPOUT(0x100074CE);
  }
  return *this + 4 * a2;
}

// Address: 0x100074CF
int __thiscall sub_100074CF(int this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // edi
  int v4; // esi

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 20);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 20));
  if ( a2 > *(_DWORD *)(this + 48) || a2 < 0 )
  {
    v4 = 0;
  }
  else if ( a2 == *(_DWORD *)(this + 48) )
  {
    v4 = *(_DWORD *)(this + 8);
  }
  else
  {
    v4 = *(_DWORD *)sub_100074A5((_DWORD *)(this + 44), a2);
  }
  LeaveCriticalSection(v3);
  return v4;
}

// Address: 0x10007531
std::exception *__thiscall sub_10007531(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x1000754C
_DWORD *__thiscall sub_1000754C(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad allocation";
  *this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10007564
std::exception *__thiscall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  __std_exception_copy((char *)a2 + 4, (char *)this + 4);
  return this;
}

// Address: 0x10007590
std::exception *__thiscall std::exception::exception(std::exception *this, const char *a2)
{
  const char *v4; // [esp+4h] [ebp-8h] BYREF
  char v5; // [esp+8h] [ebp-4h]

  v4 = a2;
  v5 = 1;
  *(_DWORD *)this = &std::exception::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  __std_exception_copy(&v4, (char *)this + 4);
  return this;
}

// Address: 0x100075C7
std::exception *__thiscall sub_100075C7(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}

// Address: 0x100075E2
std::exception *__thiscall sub_100075E2(std::exception *this, char *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}

// Address: 0x10007603
std::exception *__thiscall sub_10007603(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  return this;
}

// Address: 0x1000761E
// Microsoft VisualC 14/net runtime
char *__thiscall unknown_libname_1(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_10007C2D(Block);
  return Block;
}

// Address: 0x1000764B
void __cdecl __noreturn sub_1000764B(char *a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_100075E2((std::exception *)pExceptionObject, a1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x1000766B
const char *__thiscall std::exception::what(std::exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x10007678
// attributes: thunk
void __cdecl j_j___free_base(void *Block)
{
  j___free_base(Block);
}

// Address: 0x1000767D
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x1000768E
int __cdecl __scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // eax
  HMODULE v1; // esi
  void (__stdcall *InitializeConditionVariable)(PCONDITION_VARIABLE); // ebx
  BOOL (__stdcall *SleepConditionVariableCS)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD); // edi
  void (__stdcall *WakeAllConditionVariable)(PCONDITION_VARIABLE); // eax
  void (__stdcall *v5)(PCONDITION_VARIABLE); // esi

  __vcrt_InitializeCriticalSectionEx(&CriticalSection, 0xFA0u, 0);
  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  v1 = ModuleHandleW;
  if ( ModuleHandleW == nullptr )
    goto LABEL_8;
  InitializeConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(
                                                                           ModuleHandleW,
                                                                           "InitializeConditionVariable");
  SleepConditionVariableCS = (BOOL (__stdcall *)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD))GetProcAddress(
                                                                                                  v1,
                                                                                                  "SleepConditionVariableCS");
  WakeAllConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(v1, "WakeAllConditionVariable");
  v5 = WakeAllConditionVariable;
  if ( InitializeConditionVariable == nullptr
    || SleepConditionVariableCS == nullptr
    || WakeAllConditionVariable == nullptr )
  {
    hObject = CreateEventW(nullptr, true, false, nullptr);
    if ( hObject != nullptr )
      goto LABEL_7;
LABEL_8:
    __scrt_fastfail(7);
    __debugbreak();
  }
  hObject = nullptr;
  ((void (__thiscall *)(void (__stdcall *)(PCONDITION_VARIABLE), void *))InitializeConditionVariable)(
    InitializeConditionVariable,
    &unk_10025984);
  dword_1002598C = unknown_libname_2(SleepConditionVariableCS);
  dword_10025990 = unknown_libname_2(v5);
LABEL_7:
  atexit(__scrt_uninitialize_thread_safe_statics);
  return 0;
}

// Address: 0x1000774E
// Microsoft VisualC 14/net runtime
uintptr_t __cdecl unknown_libname_2(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

// Address: 0x1000776B
void __cdecl __scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&CriticalSection);
  if ( hObject != nullptr )
    CloseHandle(hObject);
}

// Address: 0x10007787
int __usercall _Init_thread_footer@<eax>(int a1@<esi>, _DWORD *a2)
{
  int (__thiscall *v2)(_DWORD, void *, int); // ecx

  _Init_thread_lock();
  *a2 = ++dword_10025000;
  *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) = dword_10025000;
  _Init_thread_unlock();
  if ( hObject != nullptr )
  {
    SetEvent(hObject);
    return ResetEvent(hObject);
  }
  else
  {
    v2 = (int (__thiscall *)(_DWORD, void *, int))__ROR4__(dword_10025990 ^ __security_cookie, __security_cookie & 0x1F);
    return v2(v2, &unk_10025984, a1);
  }
}

// Address: 0x100077C6
int __cdecl _Init_thread_header(_DWORD *a1)
{
  _Init_thread_lock();
  while ( *a1 != 0 )
  {
    if ( *a1 != -1 )
    {
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) = dword_10025000;
      return _Init_thread_unlock();
    }
    _Init_thread_wait(0x64u);
  }
  *a1 = -1;
  return _Init_thread_unlock();
}

// Address: 0x1000780C
void _Init_thread_lock()
{
  EnterCriticalSection(&CriticalSection);
}

// Address: 0x10007859
void _Init_thread_unlock()
{
  LeaveCriticalSection(&CriticalSection);
}

// Address: 0x10007865
BOOL __cdecl _Init_thread_wait(DWORD dwMilliseconds)
{
  int (__thiscall *v1)(_DWORD, void *, struct _RTL_CRITICAL_SECTION *, DWORD); // ecx
  DWORD v3; // esi

  if ( hObject != nullptr )
  {
    _Init_thread_unlock();
    v3 = WaitForSingleObjectEx(hObject, dwMilliseconds, false);
    _Init_thread_lock();
    return v3 == 0;
  }
  else
  {
    v1 = (int (__thiscall *)(_DWORD, void *, struct _RTL_CRITICAL_SECTION *, DWORD))__ROR4__(
                                                                                      dword_1002598C ^ __security_cookie,
                                                                                      __security_cookie & 0x1F);
    return v1(v1, &unk_10025984, &CriticalSection, dwMilliseconds) != 0;
  }
}

// Address: 0x100078CA
void *__cdecl operator new(size_t Size)
{
  void *result; // eax

  while ( 1 )
  {
    result = malloc(Size);
    if ( result != nullptr )
      break;
    if ( _callnewh(Size) == 0 )
    {
      if ( Size == -1 )
        sub_10008235();
      sub_10008218();
    }
  }
  return result;
}

// Address: 0x100078FD
struct _IMAGE_SECTION_HEADER *__cdecl find_pe_section(unsigned __int8 *const a1, unsigned int a2)
{
  unsigned __int8 *v2; // ecx
  int v3; // edx
  int v4; // esi

  v2 = &a1[*((_DWORD *)a1 + 15)];
  v3 = (int)&v2[*((unsigned __int16 *)v2 + 10) + 24];
  v4 = v3 + 40 * *((unsigned __int16 *)v2 + 3);
  if ( v3 == v4 )
    return nullptr;
  while ( a2 < *(_DWORD *)(v3 + 12) || a2 >= *(_DWORD *)(v3 + 12) + *(_DWORD *)(v3 + 8) )
  {
    v3 += 40;
    if ( v3 == v4 )
      return nullptr;
  }
  return (struct _IMAGE_SECTION_HEADER *)v3;
}

// Address: 0x10007941
char __scrt_acquire_startup_lock()
{
  PVOID StackBase; // edx
  signed __int32 v2; // eax

  if ( __scrt_is_ucrt_dll_in_use() == 0 )
    return 0;
  StackBase = NtCurrentTeb()->NtTib.StackBase;
  do
  {
    v2 = _InterlockedCompareExchange(&dword_10025998, (signed __int32)StackBase, 0);
    if ( v2 == 0 )
      return 0;
  }
  while ( StackBase != (PVOID)v2 );
  return 1;
}

// Address: 0x10007976
char __scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode v0; // eax

  if ( __scrt_is_ucrt_dll_in_use() != 0 )
  {
    __isa_available_init();
  }
  else
  {
    v0 = sub_100083EC();
    if ( _configure_narrow_argv(v0) != 0 )
      return 0;
    common_initialize_environment_nolock<char>();
  }
  return 1;
}

// Address: 0x100079A1
bool __scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)__scrt_initialize_onexit_tables(0) != 0;
}

// Address: 0x100079AF
char __scrt_dllmain_crt_thread_attach()
{
  if ( !__vcrt_thread_attach() )
    return 0;
  if ( !__acrt_thread_attach() )
  {
    __vcrt_thread_detach();
    return 0;
  }
  return 1;
}

// Address: 0x100079CE
char sub_100079CE()
{
  __acrt_thread_detach();
  __vcrt_thread_detach();
  return 1;
}

// Address: 0x100079DB
int __cdecl __scrt_dllmain_exception_filter(
        int a1,
        int a2,
        int a3,
        void (__thiscall *a4)(_DWORD, int, _DWORD, int),
        unsigned int ExceptionNum,
        struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  if ( __scrt_is_ucrt_dll_in_use() == 0 && a2 == 1 )
    a4(a4, a1, 0, a3);
  return _seh_filter_dll(ExceptionNum, ExceptionPtr);
}

// Address: 0x10007A0E
void __scrt_dllmain_uninitialize_c()
{
  if ( __scrt_is_ucrt_dll_in_use() != 0 )
  {
    _execute_onexit_table(&Table);
  }
  else if ( sub_1000DA4C() == 0 )
  {
    _cexit();
  }
}

// Address: 0x10007A31
__vcrt_bool sub_10007A31()
{
  __acrt_uninitialize_critical(false);
  return __vcrt_uninitialize_critical();
}

// Address: 0x10007A3E
char __cdecl __scrt_initialize_crt(int a1)
{
  if ( a1 == 0 )
    byte_100259B4 = 1;
  __isa_available_init();
  if ( !__vcrt_initialize() )
    return 0;
  if ( !__acrt_initialize() )
  {
    __vcrt_uninitialize(false);
    return 0;
  }
  return 1;
}

// Address: 0x10007A77
bool __cdecl __scrt_initialize_onexit_tables(unsigned int a1)
{
  _PVFV *v2; // eax
  _onexit_table_t v3; // 0:^C.12

  if ( a1 > 1 )
  {
    __scrt_fastfail(5);
    __debugbreak();
  }
  if ( __scrt_is_ucrt_dll_in_use() != 0 && a1 == 0 )
    return _initialize_onexit_table(&Table) == 0 && _initialize_onexit_table(&stru_100259A8) == 0;
  v2 = (_PVFV *)(__security_cookie ^ __ROR4__(-1, 32 - (__security_cookie & 0x1F)));
  Table._first = v2;
  Table._last = v2;
  Table._end = v2;
  v3._first = v2;
  v3._last = v2;
  v3._end = v2;
  stru_100259A8 = v3;
  return true;
}

// Address: 0x10007B0E
bool __cdecl __scrt_is_nonwritable_in_current_image(int a1)
{
  struct _IMAGE_SECTION_HEADER *pe_section; // eax
  bool result; // al

  result = false;
  if ( *(_WORD *)&MEMORY[0x10000000] == 23117
    && *(_DWORD *)(MEMORY[0x1000003C] + 0x10000000) == 17744
    && *(_WORD *)(MEMORY[0x1000003C] + 268435480) == 267 )
  {
    pe_section = find_pe_section((unsigned __int8 *const)0x10000000, a1 - 0x10000000);
    if ( pe_section != nullptr && (pe_section->Characteristics & 0x80000000) == 0 )
      return true;
  }
  return result;
}

// Address: 0x10007B98
__int32 __cdecl __scrt_release_startup_lock(char a1)
{
  __int32 result; // eax

  result = __scrt_is_ucrt_dll_in_use();
  if ( result != 0 && a1 == 0 )
    return _InterlockedExchange(&dword_10025998, 0);
  return result;
}

// Address: 0x10007BB5
char __cdecl __scrt_uninitialize_crt(__vcrt_bool Terminating, char a2)
{
  if ( byte_100259B4 == 0 || a2 == 0 )
  {
    __acrt_uninitialize(Terminating);
    __vcrt_uninitialize(Terminating);
  }
  return 1;
}

// Address: 0x10007BDD
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int v1; // eax

  if ( __ROR4__((int)Table._first ^ __security_cookie, __security_cookie & 0x1F) == -1 )
    v1 = sub_1000E4F4(Func);
  else
    v1 = _register_onexit_function(&Table, Func);
  return v1 == 0 ? Func : nullptr;
}

// Address: 0x10007C18
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x10007C2D
void __cdecl sub_10007C2D(void *Block)
{
  j_j___free_base(Block);
}

// Address: 0x10007C3B
_DWORD *__thiscall sub_10007C3B(_DWORD *Block, char a2)
{
  *Block = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10007C2D(Block);
  return Block;
}

// Address: 0x10007C5E
// attributes: thunk
void __cdecl j_j_j___free_base(void *Block)
{
  j_j___free_base(Block);
}

// Address: 0x10007C63
// Microsoft VisualC 14/net runtime
void *__cdecl unknown_libname_3(size_t a1)
{
  return operator new(a1);
}

// Address: 0x10007C6C
int __stdcall dllmain_crt_dispatch(HINSTANCE a1, unsigned int a2, void *const a3)
{
  int result; // eax

  switch ( a2 )
  {
    case 0u:
      return dllmain_crt_process_detach(a3 != nullptr);
    case 1u:
      return dllmain_crt_process_attach(a1, a3);
    case 2u:
      LOBYTE(result) = __scrt_dllmain_crt_thread_attach();
      break;
    case 3u:
      LOBYTE(result) = sub_100079CE();
      break;
    default:
      return 1;
  }
  return (unsigned __int8)result;
}

// Address: 0x10007CBF
int __cdecl dllmain_crt_process_attach(HINSTANCE a1, void *const a2)
{
  char v3; // bl
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  char v6; // [esp+1Bh] [ebp-1Dh]

  if ( __scrt_initialize_crt(0) == 0 )
    return 0;
  v6 = __scrt_acquire_startup_lock();
  v3 = 1;
  if ( dword_10025994 != 0 )
    __scrt_fastfail(7);
  dword_10025994 = 1;
  if ( __scrt_dllmain_before_initialize_c() )
  {
    sub_10008538();
    atexit(sub_10008563);
    sub_100084F7();
    atexit(sub_10008503);
    __scrt_initialize_default_local_stdio_options();
    if ( _initterm_e((_PIFV *)&dword_1001C1A4, (_PIFV *)&dword_1001C1B8) == 0
      && __scrt_dllmain_after_initialize_c() != 0 )
    {
      _initterm((_PVFV *)&First, (_PVFV *)&Last);
      dword_10025994 = 2;
      v3 = 0;
    }
  }
  __scrt_release_startup_lock(v6);
  if ( v3 != 0 )
    return 0;
  v4 = (_DWORD *)sub_10008532();
  v5 = v4;
  if ( *v4 != 0 && __scrt_is_nonwritable_in_current_image((int)v4) )
    ((void (__thiscall *)(_DWORD, HINSTANCE, int, void *const))*v5)(*v5, a1, 2, a2);
  ++dword_100259B8;
  return 1;
}

// Address: 0x10007DD1
BOOL __cdecl dllmain_crt_process_detach(__vcrt_bool Terminating)
{
  char v2; // [esp+10h] [ebp-1Ch]

  if ( dword_100259B8 <= 0 )
    return false;
  --dword_100259B8;
  v2 = __scrt_acquire_startup_lock();
  if ( dword_10025994 != 2 )
    __scrt_fastfail(7);
  __scrt_dllmain_uninitialize_c();
  dword_10025994 = 0;
  sub_10007A31();
  __scrt_release_startup_lock(v2);
  return __scrt_uninitialize_crt(Terminating, 0) != 0;
}

// Address: 0x10007E4E
int __cdecl dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, void *const lpvReserved)
{
  void *v4; // ebx
  int v5; // esi
  BOOL v6; // eax

  if ( fdwReason == 0 && dword_100259B8 <= 0 )
    return 0;
  if ( fdwReason != 1 && fdwReason != 2 )
  {
    v4 = lpvReserved;
LABEL_9:
    v6 = DllMain(hinstDLL, fdwReason, v4);
    v5 = v6;
    if ( fdwReason == 1 && !v6 )
    {
      DllMain(hinstDLL, 0, v4);
      dllmain_crt_dispatch(hinstDLL, 0, v4);
      dllmain_raw(hinstDLL, 0, v4);
    }
    if ( fdwReason == 0 || fdwReason == 3 )
    {
      v5 = dllmain_crt_dispatch(hinstDLL, fdwReason, v4);
      if ( v5 != 0 )
        return dllmain_raw(hinstDLL, fdwReason, v4);
    }
    return v5;
  }
  v4 = lpvReserved;
  v5 = dllmain_raw(hinstDLL, fdwReason, lpvReserved);
  if ( v5 != 0 )
  {
    v5 = dllmain_crt_dispatch(hinstDLL, fdwReason, lpvReserved);
    if ( v5 != 0 )
      goto LABEL_9;
  }
  return v5;
}

// Address: 0x10007F4A
int __stdcall dllmain_raw(HINSTANCE a1, unsigned int a2, void *const a3)
{
  return 1;
}

// Address: 0x10007F74
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}

// Address: 0x10007F97
BOOL __cdecl __raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // eax

  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x10007FC1
void __cdecl __noreturn __report_gsfailure()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // kr00_4
  int vars0; // [esp+324h] [ebp+0h]
  int retaddr; // [esp+328h] [ebp+4h]
  char v8; // [esp+32Ch] [ebp+8h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  dword_10025AC0 = 0;
  dword_10025ABC = v4;
  dword_10025AB8 = v3;
  dword_10025AB4 = v0;
  dword_10025AB0 = v2;
  dword_10025AAC = v1;
  word_10025AD8 = __SS__;
  word_10025ACC = __CS__;
  word_10025AA8 = __DS__;
  word_10025AA4 = __ES__;
  word_10025AA0 = __FS__;
  word_10025A9C = __GS__;
  v5 = __readeflags();
  dword_10025AD0 = v5;
  dword_10025AC4 = vars0;
  dword_10025AC8 = retaddr;
  dword_10025AD4 = (int)&v8;
  dword_10025A10 = 65537;
  dword_100259CC = retaddr;
  dword_100259C0 = -1073740791;
  dword_100259C4 = 1;
  dword_100259D0 = 1;
  dword_100259D4 = 2;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}

// Address: 0x100080BC
LONG __usercall __scrt_fastfail@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int a3)
{
  void *v3; // eax
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // kr00_4
  BOOL v7; // eax
  bool v8; // bl
  LONG result; // eax
  _DWORD v10[179]; // [esp+8h] [ebp-324h] BYREF
  _DWORD v11[20]; // [esp+2D4h] [ebp-58h] BYREF
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+324h] [ebp-8h] BYREF
  int savedregs; // [esp+32Ch] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+330h] [ebp+4h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a3);
  dword_10025CDC = 0;
  v3 = memset(v10, 0, sizeof(v10));
  v10[44] = v3;
  v10[43] = v4;
  v10[42] = v5;
  v10[41] = a1;
  v10[40] = 0;
  v10[39] = a2;
  LOWORD(v10[50]) = __SS__;
  LOWORD(v10[47]) = __CS__;
  LOWORD(v10[38]) = __DS__;
  LOWORD(v10[37]) = __ES__;
  LOWORD(v10[36]) = __FS__;
  LOWORD(v10[35]) = __GS__;
  v6 = __readeflags();
  v10[48] = v6;
  v10[46] = retaddr;
  v10[49] = &retaddr;
  v10[0] = 65537;
  v10[45] = savedregs;
  memset(v11, 0, sizeof(v11));
  v11[0] = 1073741845;
  v11[1] = 1;
  v11[3] = retaddr;
  v7 = IsDebuggerPresent();
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v11;
  ExceptionInfo.ContextRecord = (PCONTEXT)v10;
  v8 = v7;
  SetUnhandledExceptionFilter(nullptr);
  result = UnhandledExceptionFilter(&ExceptionInfo);
  if ( result == 0 )
  {
    result = -v8;
    dword_10025CDC &= result;
  }
  return result;
}

// Address: 0x100081D7
void sub_100081D7()
{
  dword_10025CDC = 0;
}

// Address: 0x100081DF
// attributes: thunk
void _guard_check_icall_nop()
{
  ;
}

// Address: 0x100081E5
std::exception *__thiscall sub_100081E5(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}

// Address: 0x10008200
_DWORD *__thiscall sub_10008200(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad array new length";
  *this = &std::bad_array_new_length::`vftable';
  return this;
}

// Address: 0x10008218
void __noreturn sub_10008218()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000754C(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
}

// Address: 0x10008235
void __noreturn sub_10008235()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_10008200(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVbad_array_new_length_std__);
}

// Address: 0x10008252
int __cdecl __isa_available_init()
{
  bool v5; // zf
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v19; // eax
  int v21; // [esp+4h] [ebp-28h]
  char v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+24h] [ebp-8h]
  int v24; // [esp+28h] [ebp-4h]

  dword_10025CE4 = 0;
  dword_10025010 |= 1u;
  if ( IsProcessorFeaturePresent(0xAu) )
  {
    v22 = 0;
    _EAX = 0;
    dword_10025010 |= 2u;
    dword_10025CE4 = 1;
    __asm { cpuid }
    v23 = _EAX;
    v5 = (_EBX ^ 0x756E6547 | _ECX ^ 0x6C65746E | _EDX ^ 0x49656E69) == 0;
    _EAX = 1;
    __asm { cpuid }
    v21 = _EAX;
    if ( v5
      && ((v11 = _EAX & 0xFFF3FF0, (v21 & 0xFFF3FF0) == 0x106C0)
       || v11 == 132704
       || v11 == 132720
       || v11 == 198224
       || v11 == 198240
       || v11 == 198256) )
    {
      v12 = dword_10025CE8 | 1;
      dword_10025CE8 |= 1u;
    }
    else
    {
      v12 = dword_10025CE8;
    }
    v13 = _ECX;
    v24 = _ECX;
    if ( v23 >= 7 )
    {
      _EAX = 7;
      __asm { cpuid }
      v22 = _EBX;
      v13 = v24;
      if ( (_EBX & 0x200) != 0 )
        dword_10025CE8 = v12 | 2;
    }
    if ( (v13 & 0x100000) != 0 )
    {
      dword_10025010 |= 4u;
      dword_10025CE4 = 2;
      if ( (v13 & 0x8000000) != 0 && (v13 & 0x10000000) != 0 )
      {
        __asm { xgetbv }
        if ( (v13 & 6) == 6 )
        {
          v19 = dword_10025010 | 8;
          dword_10025CE4 = 3;
          dword_10025010 |= 8u;
          if ( (v22 & 0x20) != 0 )
          {
            dword_10025CE4 = 5;
            dword_10025010 = v19 | 0x20;
          }
        }
      }
    }
  }
  return 0;
}

// Address: 0x100083EC
int sub_100083EC()
{
  return 1;
}

// Address: 0x100083F0
BOOL __scrt_is_ucrt_dll_in_use()
{
  return dword_100265FC != 0;
}

// Address: 0x10008400
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_1001A500;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x10008446
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { bnd retn }
}

// Address: 0x1000845B
void __cdecl __security_init_cookie()
{
  uintptr_t v0; // ecx
  LARGE_INTEGER PerformanceCount; // [esp+8h] [ebp-14h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [esp+10h] [ebp-Ch] BYREF
  DWORD v3; // [esp+18h] [ebp-4h] BYREF

  SystemTimeAsFileTime.dwLowDateTime = 0;
  SystemTimeAsFileTime.dwHighDateTime = 0;
  if ( __security_cookie == -1153374642 || (__security_cookie & 0xFFFF0000) == 0 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = SystemTimeAsFileTime.dwLowDateTime ^ SystemTimeAsFileTime.dwHighDateTime;
    v3 ^= GetCurrentThreadId();
    v3 ^= GetCurrentProcessId();
    QueryPerformanceCounter(&PerformanceCount);
    v0 = (unsigned int)&v3 ^ v3 ^ PerformanceCount.LowPart ^ PerformanceCount.HighPart;
    if ( v0 == -1153374642 )
    {
      v0 = -1153374641;
    }
    else if ( (v0 & 0xFFFF0000) == 0 )
    {
      v0 |= (v0 | 0x4711) << 16;
    }
    __security_cookie = v0;
    dword_10025008 = ~v0;
  }
  else
  {
    dword_10025008 = ~__security_cookie;
  }
}

// Address: 0x100084F7
void sub_100084F7()
{
  InitializeSListHead(&ListHead);
}

// Address: 0x10008503
void __cdecl sub_10008503()
{
  __std_type_info_destroy_list(&ListHead);
}

// Address: 0x1000850F
void *sub_1000850F()
{
  return &unk_10025CF8;
}

// Address: 0x10008515
_DWORD *__scrt_initialize_default_local_stdio_options()
{
  _DWORD *v0; // eax
  int v1; // ecx
  _DWORD *result; // eax
  int v3; // ecx

  v0 = sub_100010D0();
  v1 = v0[1];
  *v0 |= 4u;
  v0[1] = v1;
  result = sub_1000850F();
  v3 = result[1];
  *result |= 2u;
  result[1] = v3;
  return result;
}

// Address: 0x10008532
void *sub_10008532()
{
  return &unk_100265F8;
}

// Address: 0x10008538
void sub_10008538()
{
  ;
}

// Address: 0x10008563
void __cdecl sub_10008563()
{
  ;
}

// Address: 0x10008590
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  const __m128i *v3; // esi
  signed int v4; // ecx
  __m128i *v5; // edi
  void *result; // eax
  __int64 v7; // xmm1_8
  __m128i v8; // xmm1
  const __m128i *v9; // esi
  __m128i v10; // xmm3
  __m128i v11; // xmm0
  __m128i v12; // xmm5
  const __m128i *v13; // esi
  __m128i v14; // xmm1
  const __m128i *v15; // esi
  __m128i v16; // xmm3
  __m128i v17; // xmm0
  __m128i v18; // xmm5
  __m128i v19; // xmm1
  const __m128i *v20; // esi
  __m128i v21; // xmm3
  __m128i v22; // xmm0
  __m128i v23; // xmm5
  __m128i v24; // xmm1
  __int32 v25; // eax
  __int64 v26; // xmm1_8
  char v27; // dl
  unsigned int v28; // ecx
  const __m128i *v29; // esi
  __m128i *v30; // edi
  int v31; // edx
  char v32; // dl
  unsigned int v33; // ecx
  int v34; // edx
  __int8 *v35; // esi
  char *v36; // edi
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  __m128i v41; // xmm5
  __m128i v42; // xmm6
  __m128i v43; // xmm7
  __m128i v44; // xmm1
  int v45; // eax
  unsigned int v46; // edx
  unsigned int k; // edx
  __m128i si128; // xmm1
  __m128i v49; // xmm2
  __m128i v50; // xmm3
  __m128i v51; // xmm5
  __m128i v52; // xmm6
  __m128i v53; // xmm7
  unsigned int m; // edx
  __m128i v55; // xmm1
  unsigned int v56; // ecx
  char v57; // al
  unsigned int n; // ecx
  int ii; // ecx
  unsigned int v60; // eax
  int i; // ecx
  unsigned int j; // eax
  size_t v63; // [esp-4h] [ebp-Ch]

  v3 = (const __m128i *)Src;
  v4 = Size;
  v5 = (__m128i *)a1;
  if ( a1 > Src && a1 < (char *)Src + Size )
  {
    v29 = (const __m128i *)((char *)Src + Size);
    v30 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x20 )
    {
      if ( _bittest(&dword_10025010, 1u) )
      {
        for ( ; ((unsigned __int8)v30 & 0xF) != 0; v30->m128i_i8[0] = v29->m128i_i8[0] )
        {
          --v4;
          v29 = (const __m128i *)((char *)v29 - 1);
          v30 = (__m128i *)((char *)v30 - 1);
        }
        do
        {
          if ( (unsigned int)v4 < 0x80 )
            break;
          v29 -= 8;
          v30 -= 8;
          v37 = _mm_loadu_si128(v29 + 1);
          v38 = _mm_loadu_si128(v29 + 2);
          v39 = _mm_loadu_si128(v29 + 3);
          v40 = _mm_loadu_si128(v29 + 4);
          v41 = _mm_loadu_si128(v29 + 5);
          v42 = _mm_loadu_si128(v29 + 6);
          v43 = _mm_loadu_si128(v29 + 7);
          *v30 = _mm_loadu_si128(v29);
          v30[1] = v37;
          v30[2] = v38;
          v30[3] = v39;
          v30[4] = v40;
          v30[5] = v41;
          v30[6] = v42;
          v30[7] = v43;
          v4 -= 128;
        }
        while ( (v4 & 0xFFFFFF80) != 0 );
        if ( (unsigned int)v4 >= 0x20 )
        {
          do
          {
            v29 -= 2;
            v30 -= 2;
            v44 = _mm_loadu_si128(v29 + 1);
            *v30 = _mm_loadu_si128(v29);
            v30[1] = v44;
            v4 -= 32;
          }
          while ( (v4 & 0xFFFFFFE0) != 0 );
        }
      }
      else
      {
        if ( ((unsigned __int8)v30 & 3) != 0 )
        {
          v31 = (unsigned __int8)v30 & 3;
          v4 = Size - v31;
          do
          {
            v30[-1].m128i_i8[15] = v29[-1].m128i_i8[15];
            v29 = (const __m128i *)((char *)v29 - 1);
            v30 = (__m128i *)((char *)v30 - 1);
            --v31;
          }
          while ( v31 != 0 );
        }
        if ( (unsigned int)v4 >= 0x20 )
        {
          v32 = v4;
          v33 = (unsigned int)v4 >> 2;
          v34 = v32 & 3;
          v35 = &v29[-1].m128i_i8[12];
          v36 = &v30[-1].m128i_i8[12];
          while ( v33 != 0 )
          {
            *(_DWORD *)v36 = *(_DWORD *)v35;
            v35 -= 4;
            v36 -= 4;
            --v33;
          }
          switch ( v34 )
          {
            case 0:
              result = a1;
              break;
            case 1:
              v36[3] = v35[3];
              result = a1;
              break;
            case 2:
              v36[3] = v35[3];
              v36[2] = v35[2];
              result = a1;
              break;
            case 3:
              v36[3] = v35[3];
              v36[2] = v35[2];
              v36[1] = v35[1];
              result = a1;
              break;
          }
          return result;
        }
      }
    }
    for ( ; (v4 & 0xFFFFFFFC) != 0; v4 -= 4 )
    {
      v30 = (__m128i *)((char *)v30 - 4);
      v29 = (const __m128i *)((char *)v29 - 4);
      v30->m128i_i32[0] = v29->m128i_i32[0];
    }
    for ( ; v4 != 0; --v4 )
    {
      v30 = (__m128i *)((char *)v30 - 1);
      v29 = (const __m128i *)((char *)v29 - 1);
      v30->m128i_i8[0] = v29->m128i_i8[0];
    }
    return a1;
  }
  else
  {
    if ( Size < 0x20 )
      goto CopyUpDwordMov;
    if ( Size < 0x80 )
    {
      if ( !_bittest(&dword_10025010, 1u) )
        goto Dword_align;
      goto XmmCopySmallTest;
    }
    if ( _bittest(&dword_10025CE8, 1u) )
    {
      qmemcpy(a1, Src, Size);
      return a1;
    }
    if ( (((unsigned int)Src ^ (unsigned int)a1) & 0xF) == 0 && _bittest(&dword_10025010, 1u) )
    {
      v45 = (unsigned __int8)Src & 0xF;
      if ( ((unsigned __int8)Src & 0xF) != 0 )
      {
        v63 = Size - (16 - v45);
        v60 = 16 - v45;
        for ( i = v60 & 3; i != 0; --i )
        {
          v5->m128i_i8[0] = v3->m128i_i8[0];
          v3 = (const __m128i *)((char *)v3 + 1);
          v5 = (__m128i *)((char *)v5 + 1);
        }
        for ( j = v60 >> 2; j != 0; --j )
        {
          v5->m128i_i32[0] = v3->m128i_i32[0];
          v3 = (const __m128i *)((char *)v3 + 4);
          v5 = (__m128i *)((char *)v5 + 4);
        }
        v4 = v63;
      }
      v46 = v4;
      v4 &= 0x7Fu;
      for ( k = v46 >> 7; k != 0; --k )
      {
        si128 = _mm_load_si128(v3 + 1);
        v49 = _mm_load_si128(v3 + 2);
        v50 = _mm_load_si128(v3 + 3);
        *v5 = _mm_load_si128(v3);
        v5[1] = si128;
        v5[2] = v49;
        v5[3] = v50;
        v51 = _mm_load_si128(v3 + 5);
        v52 = _mm_load_si128(v3 + 6);
        v53 = _mm_load_si128(v3 + 7);
        v5[4] = _mm_load_si128(v3 + 4);
        v5[5] = v51;
        v5[6] = v52;
        v5[7] = v53;
        v3 += 8;
        v5 += 8;
      }
XmmCopySmallTest:
      if ( v4 == 0 )
        return a1;
      for ( m = (unsigned int)v4 >> 5; m != 0; --m )
      {
        v55 = _mm_loadu_si128(v3 + 1);
        *v5 = _mm_loadu_si128(v3);
        v5[1] = v55;
        v3 += 2;
        v5 += 2;
      }
CopyUpDwordMov:
      v56 = v4 & 0x1F;
      if ( v56 != 0 )
      {
        v57 = v56;
        for ( n = v56 >> 2; n != 0; --n )
        {
          v5->m128i_i32[0] = v3->m128i_i32[0];
          v5 = (__m128i *)((char *)v5 + 4);
          v3 = (const __m128i *)((char *)v3 + 4);
        }
        for ( ii = v57 & 3; ii != 0; --ii )
        {
          v5->m128i_i8[0] = v3->m128i_i8[0];
          v3 = (const __m128i *)((char *)v3 + 1);
          v5 = (__m128i *)((char *)v5 + 1);
        }
      }
      return a1;
    }
    if ( !_bittest(&dword_10025CE8, 0) || ((unsigned __int8)a1 & 3) != 0 )
    {
Dword_align:
      if ( ((unsigned __int8)a1 & 3) != 0 )
      {
        do
        {
          v5->m128i_i8[0] = v3->m128i_i8[0];
          --v4;
          v3 = (const __m128i *)((char *)v3 + 1);
          v5 = (__m128i *)((char *)v5 + 1);
        }
        while ( ((unsigned __int8)v5 & 3) != 0 );
      }
      goto Dword_align_Ok;
    }
    if ( ((unsigned __int8)Src & 3) != 0 )
    {
Dword_align_Ok:
      v27 = v4;
      if ( (unsigned int)v4 >= 0x20 )
      {
        v28 = (unsigned int)v4 >> 2;
        qmemcpy(v5, v3, 4 * v28);
        v13 = (const __m128i *)((char *)v3 + 4 * v28);
        v5 = (__m128i *)((char *)v5 + 4 * v28);
        switch ( v27 & 3 )
        {
          case 0:
            goto TrailingUp0;
          case 1:
            goto TrailingUp1;
          case 2:
            goto TrailingUp2;
          case 3:
            goto TrailingUp3;
        }
      }
      goto CopyUpDwordMov;
    }
    if ( ((unsigned __int8)a1 & 4) != 0 )
    {
      v4 = Size - 4;
      v3 = (const __m128i *)((char *)Src + 4);
      *(_DWORD *)a1 = *(_DWORD *)Src;
      v5 = (__m128i *)((char *)a1 + 4);
    }
    if ( ((unsigned __int8)v5 & 8) != 0 )
    {
      v7 = v3->m128i_i64[0];
      v4 -= 8;
      v3 = (const __m128i *)((char *)v3 + 8);
      v5->m128i_i64[0] = v7;
      v5 = (__m128i *)((char *)v5 + 8);
    }
    if ( ((unsigned __int8)v3 & 7) != 0 )
    {
      if ( ((unsigned __int8)v3 & 8) != 0 )
      {
        v8 = _mm_load_si128((const __m128i *)((char *)v3 - 12));
        v9 = (const __m128i *)((char *)v3 - 12);
        do
        {
          v10 = _mm_load_si128(v9 + 1);
          v4 -= 48;
          v11 = _mm_load_si128(v9 + 2);
          v12 = _mm_load_si128(v9 + 3);
          v9 += 3;
          *v5 = _mm_alignr_epi8(v10, v8, 12);
          v5[1] = _mm_alignr_epi8(v11, v10, 12);
          v8 = v12;
          v5[2] = _mm_alignr_epi8(v12, v11, 12);
          v5 += 3;
        }
        while ( v4 >= 48 );
        v13 = (const __m128i *)((char *)&v9->m128i_u64[1] + 4);
      }
      else
      {
        v19 = _mm_load_si128((const __m128i *)((char *)v3 - 4));
        v20 = (const __m128i *)((char *)v3 - 4);
        do
        {
          v21 = _mm_load_si128(v20 + 1);
          v4 -= 48;
          v22 = _mm_load_si128(v20 + 2);
          v23 = _mm_load_si128(v20 + 3);
          v20 += 3;
          *v5 = _mm_alignr_epi8(v21, v19, 4);
          v5[1] = _mm_alignr_epi8(v22, v21, 4);
          v19 = v23;
          v5[2] = _mm_alignr_epi8(v23, v22, 4);
          v5 += 3;
        }
        while ( v4 >= 48 );
        v13 = (const __m128i *)((char *)v20->m128i_i64 + 4);
      }
    }
    else
    {
      v14 = _mm_load_si128((const __m128i *)((char *)v3 - 8));
      v15 = (const __m128i *)((char *)v3 - 8);
      do
      {
        v16 = _mm_load_si128(v15 + 1);
        v4 -= 48;
        v17 = _mm_load_si128(v15 + 2);
        v18 = _mm_load_si128(v15 + 3);
        v15 += 3;
        *v5 = _mm_alignr_epi8(v16, v14, 8);
        v5[1] = _mm_alignr_epi8(v17, v16, 8);
        v14 = v18;
        v5[2] = _mm_alignr_epi8(v18, v17, 8);
        v5 += 3;
      }
      while ( v4 >= 48 );
      v13 = (const __m128i *)&v15->m128i_u64[1];
    }
    while ( v4 >= 16 )
    {
      v24 = _mm_loadu_si128(v13);
      v4 -= 16;
      ++v13;
      *v5++ = v24;
    }
    if ( (v4 & 4) != 0 )
    {
      v25 = v13->m128i_i32[0];
      v4 -= 4;
      v13 = (const __m128i *)((char *)v13 + 4);
      v5->m128i_i32[0] = v25;
      v5 = (__m128i *)((char *)v5 + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v26 = v13->m128i_i64[0];
      v4 -= 8;
      v13 = (const __m128i *)((char *)v13 + 8);
      v5->m128i_i64[0] = v26;
      v5 = (__m128i *)((char *)v5 + 8);
    }
    switch ( v4 )
    {
      case 0:
TrailingUp0:
        result = a1;
        break;
      case 1:
TrailingUp1:
        v5->m128i_i8[0] = v13->m128i_i8[0];
        result = a1;
        break;
      case 2:
TrailingUp2:
        v5->m128i_i8[0] = v13->m128i_i8[0];
        v5->m128i_i8[1] = v13->m128i_i8[1];
        result = a1;
        break;
      case 3:
TrailingUp3:
        v5->m128i_i8[0] = v13->m128i_i8[0];
        v5->m128i_i8[1] = v13->m128i_i8[1];
        v5->m128i_i8[2] = v13->m128i_i8[2];
        result = a1;
        break;
    }
  }
  return result;
}

// Address: 0x10008B04
_DWORD *__cdecl __DestructExceptionObject(_DWORD *a1)
{
  _DWORD *result; // eax
  int v2; // ecx
  int v3; // edx

  result = a1;
  if ( a1 != nullptr
    && *a1 == -529697949
    && a1[4] == 3
    && (a1[5] == 429065504 || a1[5] == 429065505 || a1[5] == 429065506) )
  {
    v2 = a1[7];
    if ( v2 != 0 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      if ( v3 != 0 )
      {
        return (_DWORD *)sub_100093F5(a1[6], v3);
      }
      else if ( (*(_BYTE *)v2 & 0x10) != 0 )
      {
        result = (_DWORD *)a1[6];
        if ( *result != 0 )
          return (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*result + 8))(
                             *(_DWORD *)(*(_DWORD *)*result + 8),
                             *result);
      }
    }
  }
  return result;
}

// Address: 0x10008B98
std::exception *__thiscall sub_10008B98(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x10008BB3
_DWORD *__thiscall sub_10008BB3(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad exception";
  *this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x10008BCB
// Microsoft VisualC 14/net runtime
int __thiscall unknown_libname_4(_DWORD *this)
{
  *this = &std::exception::`vftable';
  return __std_exception_destroy(this + 1);
}

// Address: 0x10008BDC
void *__cdecl CallCatchBlock(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        const struct _s_FuncInfo *a4,
        void *a5,
        int a6,
        unsigned int a7)
{
  int v8; // eax
  int v9; // eax
  void *v10; // ebx
  int v11; // [esp-4h] [ebp-5Ch]
  _BYTE v12[8]; // [esp+10h] [ebp-48h] BYREF
  int v13; // [esp+18h] [ebp-40h]
  int v14; // [esp+1Ch] [ebp-3Ch]
  int v15; // [esp+20h] [ebp-38h]
  int v16; // [esp+24h] [ebp-34h]
  int FrameInfo; // [esp+28h] [ebp-30h]
  __ehstate_t state; // [esp+2Ch] [ebp-2Ch]
  void *v19; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v19 = a5;
  v14 = 0;
  state = a2[-1].state;
  FrameInfo = _CreateFrameInfo(v12, a1->params.pExceptionObject);
  v16 = *(_DWORD *)(((int (*)(void))__vcrt_getptd)() + 16);
  v15 = *(_DWORD *)(((int (*)(void))__vcrt_getptd)() + 20);
  *(_DWORD *)(((int (*)(void))__vcrt_getptd)() + 16) = a1;
  *(_DWORD *)(((int (*)(void))__vcrt_getptd)() + 20) = a3;
  v13 = 1;
  ms_exc.registration.TryLevel = 1;
  v19 = _CallCatchBlock2(a2, a4, a5, a6, a7);
  ms_exc.registration.TryLevel = -2;
  v13 = 0;
  a2[-1].state = state;
  _FindAndUnlinkFrame(FrameInfo);
  v8 = __vcrt_getptd(268471561);
  *(_DWORD *)(v8 + 16) = v16;
  v9 = __vcrt_getptd(v11);
  *(_DWORD *)(v9 + 20) = v15;
  if ( a1->ExceptionCode != -529697949
    || a1->NumberParameters != 3
    || a1->params.magicNumber != 429065504 && a1->params.magicNumber != 429065505 && a1->params.magicNumber != 429065506 )
  {
    return v19;
  }
  v10 = v19;
  if ( v14 == 0 && v19 != nullptr && _IsExceptionObjectToBeDestroyed(a1->params.pExceptionObject) != 0 )
    __DestructExceptionObject(a1);
  return v10;
}

// Address: 0x10008D98
void __cdecl __noreturn CallUnexpected()
{
  if ( *(_DWORD *)(__vcrt_getptd() + 28) == 0 )
    unexpected();
  terminate();
}

// Address: 0x10008DD2
void __cdecl CatchIt(
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        const struct _s_HandlerType *a6,
        const struct _s_CatchableType *a7,
        const struct _s_TryBlockMapEntry *a8,
        int a9,
        PVOID TargetFrame)
{
  void *v10; // eax

  if ( a7 != nullptr )
    __BuildCatchObject((int)ExceptionRecord, a2, (int)a6, (int)a7);
  if ( TargetFrame != nullptr )
    _UnwindNestedFrames(TargetFrame, ExceptionRecord);
  else
    _UnwindNestedFrames(a2, ExceptionRecord);
  __FrameUnwindToState(a2, a4, a5, a8->tryLow);
  a2->state = a8->tryHigh + 1;
  v10 = CallCatchBlock((struct EHExceptionRecord *)ExceptionRecord, a2, a3, a5, a6->addressOfHandler, a9, 0x100u);
  if ( v10 != nullptr )
    _JumpToContinuation(v10, a2);
}

// Address: 0x10008E4D
int __cdecl ExFilterRethrow(struct _EXCEPTION_POINTERS *a1)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax

  ExceptionRecord = a1->ExceptionRecord;
  if ( a1->ExceptionRecord->ExceptionCode != -529697949
    || ExceptionRecord->NumberParameters != 3
    || ExceptionRecord->ExceptionInformation[0] != 429065504
    && ExceptionRecord->ExceptionInformation[0] != 429065505
    && ExceptionRecord->ExceptionInformation[0] != 429065506
    || ExceptionRecord->ExceptionInformation[2] != 0 )
  {
    return 0;
  }
  *(_DWORD *)(__vcrt_getptd() + 32) = 1;
  return 1;
}

// Address: 0x10008E97
void __cdecl FindHandler(
        struct EHExceptionRecord *ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        char a6,
        int a7,
        PVOID TargetFrame)
{
  struct EHRegistrationNode *v8; // ebx
  const struct _s_FuncInfo *v9; // edi
  __ehstate_t state; // eax
  struct EHExceptionRecord *v11; // esi
  struct _CONTEXT *v12; // ecx
  const struct _s_TryBlockMapEntry *v13; // eax
  unsigned int v14; // edx
  struct _s_ESTypeList *p_pHandlerArray; // ecx
  int v16; // eax
  bool v17; // cc
  struct _s_HandlerType *v18; // ecx
  CatchableTypeArray *pCatchableTypeArray; // eax
  int nCatchableTypes; // edx
  int v21; // eax
  struct _s_ESTypeList *v22; // [esp-4h] [ebp-54h]
  _DWORD pExceptionObject[3]; // [esp+Ch] [ebp-44h] BYREF
  struct _s_TryBlockMapEntry *v24; // [esp+18h] [ebp-38h]
  int i; // [esp+1Ch] [ebp-34h]
  const struct _s_CatchableType **arrayOfCatchableTypes; // [esp+20h] [ebp-30h]
  unsigned int v27; // [esp+24h] [ebp-2Ch] BYREF
  unsigned __int8 v28[4]; // [esp+28h] [ebp-28h]
  int v29; // [esp+2Ch] [ebp-24h]
  struct _s_ESTypeList *v30; // [esp+30h] [ebp-20h]
  HandlerType *pTypeArray; // [esp+34h] [ebp-1Ch]
  unsigned int v32; // [esp+38h] [ebp-18h] BYREF
  struct _s_HandlerType *nCount; // [esp+3Ch] [ebp-14h]
  const struct _s_CatchableType **v34; // [esp+40h] [ebp-10h]
  struct _CONTEXT *v35; // [esp+44h] [ebp-Ch]
  __ehstate_t v36; // [esp+48h] [ebp-8h]
  char v37; // [esp+4Fh] [ebp-1h]

  v8 = a2;
  v9 = a5;
  v28[0] = 0;
  v37 = 0;
  if ( a5->maxState > 128 )
    state = a2->state;
  else
    state = SLOBYTE(a2->state);
  v36 = state;
  if ( state < -1 || state >= a5->maxState )
    goto LABEL_64;
  v11 = ExceptionRecord;
  if ( ExceptionRecord->ExceptionCode != -529697949 )
  {
    v12 = a3;
    goto LABEL_59;
  }
  if ( ExceptionRecord->NumberParameters != 3
    || ExceptionRecord->params.magicNumber != 429065504
    && ExceptionRecord->params.magicNumber != 429065505
    && ExceptionRecord->params.magicNumber != 429065506
    || ExceptionRecord->params.pThrowInfo != nullptr )
  {
    v12 = a3;
    v35 = a3;
    goto LABEL_26;
  }
  if ( *(_DWORD *)(__vcrt_getptd() + 16) == 0 )
    return;
  v11 = *(struct EHExceptionRecord **)(__vcrt_getptd() + 16);
  v28[0] = 1;
  v35 = *(struct _CONTEXT **)(__vcrt_getptd() + 20);
  if ( v11 == nullptr
    || v11->ExceptionCode == -529697949
    && v11->NumberParameters == 3
    && (v11->params.magicNumber == 429065504
     || v11->params.magicNumber == 429065505
     || v11->params.magicNumber == 429065506)
    && v11->params.pThrowInfo == nullptr )
  {
LABEL_64:
    terminate();
  }
  if ( *(_DWORD *)(__vcrt_getptd() + 28) != 0 )
  {
    v30 = *(struct _s_ESTypeList **)(__vcrt_getptd() + 28);
    v22 = v30;
    *(_DWORD *)(__vcrt_getptd() + 28) = 0;
    if ( IsInExceptionSpec(v11, v22) == 0 )
    {
      if ( Is_bad_exception_allowed(v30) != 0 )
      {
        __DestructExceptionObject(v11);
        sub_10008BB3(pExceptionObject);
        _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_exception_std__);
      }
      goto LABEL_64;
    }
  }
  v12 = v35;
  state = v36;
LABEL_26:
  if ( v11->ExceptionCode == -529697949
    && v11->NumberParameters == 3
    && (v11->params.magicNumber == 429065504
     || v11->params.magicNumber == 429065505
     || v11->params.magicNumber == 429065506) )
  {
    if ( a5->nTryBlocks != 0 )
    {
      v13 = _GetRangeOfTrysToCheck(a5, a7, state, &v32, &v27);
      v14 = v32;
      if ( v32 < v27 )
      {
        p_pHandlerArray = (struct _s_ESTypeList *)&v13->pHandlerArray;
        v16 = v36;
        v30 = p_pHandlerArray;
        do
        {
          v24 = (struct _s_TryBlockMapEntry *)&p_pHandlerArray[-2];
          v9 = a5;
          if ( p_pHandlerArray[-2].nCount <= v16 && v16 <= (int)p_pHandlerArray[-2].pTypeArray )
          {
            nCount = (struct _s_HandlerType *)p_pHandlerArray->nCount;
            v17 = (int)p_pHandlerArray[-1].pTypeArray <= 0;
            pTypeArray = p_pHandlerArray[-1].pTypeArray;
            v8 = a2;
            if ( !v17 )
            {
              v18 = nCount;
              pCatchableTypeArray = v11->params.pThrowInfo->pCatchableTypeArray;
              nCatchableTypes = pCatchableTypeArray->nCatchableTypes;
              arrayOfCatchableTypes = (const struct _s_CatchableType **)pCatchableTypeArray->arrayOfCatchableTypes;
              v21 = (int)pTypeArray;
              for ( i = nCatchableTypes; ; nCatchableTypes = i )
              {
                v34 = arrayOfCatchableTypes;
                v9 = a5;
                v29 = nCatchableTypes;
                if ( nCatchableTypes > 0 )
                  break;
LABEL_42:
                --v21;
                ++v18;
                pTypeArray = (HandlerType *)v21;
                nCount = v18;
                if ( v21 <= 0 )
                  goto LABEL_45;
              }
              while ( TypeMatchHelper<__FrameHandler3>(v18, *v34, v11->params.pThrowInfo) == 0 )
              {
                ++v34;
                v18 = nCount;
                if ( --v29 <= 0 )
                {
                  v21 = (int)pTypeArray;
                  goto LABEL_42;
                }
              }
              v37 = 1;
              CatchIt((PEXCEPTION_RECORD)v11, a2, v35, a4, a5, nCount, *v34, v24, a7, TargetFrame);
LABEL_45:
              v14 = v32;
              p_pHandlerArray = v30;
              v16 = v36;
            }
          }
          ++v14;
          p_pHandlerArray = (struct _s_ESTypeList *)((char *)p_pHandlerArray + 20);
          v32 = v14;
          v30 = p_pHandlerArray;
        }
        while ( v14 < v27 );
      }
    }
    if ( a6 != 0 )
      __DestructExceptionObject(v11);
    if ( v37 == 0
      && (*(_DWORD *)v9 & 0x1FFFFFFFu) >= 0x19930521
      && (v9->pESTypeList != nullptr || (v9->EHFlags & 4) != 0 && a7 == 0) )
    {
      if ( (v9->EHFlags & 4) != 0 )
        goto LABEL_64;
      if ( IsInExceptionSpec(v11, v9->pESTypeList) == 0 )
      {
        __vcrt_getptd();
        __vcrt_getptd();
        *(_DWORD *)(__vcrt_getptd() + 16) = v11;
        *(_DWORD *)(__vcrt_getptd() + 20) = v35;
        if ( TargetFrame != nullptr )
          _UnwindNestedFrames(TargetFrame, (PEXCEPTION_RECORD)v11);
        else
          _UnwindNestedFrames(v8, (PEXCEPTION_RECORD)v11);
        __FrameUnwindToState(v8, a4, v9, -1);
        CallUnexpected();
      }
    }
    goto LABEL_62;
  }
LABEL_59:
  if ( a5->nTryBlocks != 0 )
  {
    if ( a6 != 0 )
      goto LABEL_64;
    FindHandlerForForeignException((PEXCEPTION_RECORD)v11, a2, v12, a4, a5, state, a7, TargetFrame);
  }
LABEL_62:
  if ( *(_DWORD *)(__vcrt_getptd() + 28) != 0 )
    goto LABEL_64;
}

// Address: 0x100091FF
void __cdecl FindHandlerForForeignException(
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        int a6,
        int a7,
        struct EHRegistrationNode *TargetFrame)
{
  const struct _s_FuncInfo *v8; // ebx
  PVOID v9; // esi
  const struct _s_TryBlockMapEntry *v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int *p_nCatches; // esi
  int v14; // eax
  int v15; // eax
  const struct _s_HandlerType *v16; // eax
  unsigned int v17; // [esp+4h] [ebp-8h] BYREF
  unsigned int v18; // [esp+8h] [ebp-4h] BYREF

  if ( ExceptionRecord->ExceptionCode != -2147483645 )
  {
    v8 = a5;
    if ( *(_DWORD *)(__vcrt_getptd() + 8) == 0
      || (v9 = EncodePointer(nullptr), *(PVOID *)(__vcrt_getptd() + 8) == v9)
      || ExceptionRecord->ExceptionCode == -532459699
      || ExceptionRecord->ExceptionCode == -532462766
      || _CallSETranslator((struct EHExceptionRecord *)ExceptionRecord, a2, a3, a4, a5, a7, TargetFrame) == 0 )
    {
      if ( a5->nTryBlocks == 0 )
        terminate();
      v10 = _GetRangeOfTrysToCheck(a5, a7, a6, &v17, &v18);
      v11 = v17;
      v12 = v18;
      if ( v17 < v18 )
      {
        p_nCatches = &v10->nCatches;
        v14 = a6;
        do
        {
          if ( v14 >= *(p_nCatches - 3) && v14 <= *(p_nCatches - 2) )
          {
            v15 = 16 * *p_nCatches;
            if ( *(_DWORD *)(p_nCatches[1] + v15 - 12) == 0
              || (v12 = v18, v8 = a5, *(_BYTE *)(*(_DWORD *)(p_nCatches[1] + v15 - 12) + 8) == 0) )
            {
              v16 = (const struct _s_HandlerType *)(p_nCatches[1] - 16 + v15);
              if ( (v16->adjectives & 0x40) == 0 )
              {
                CatchIt(
                  ExceptionRecord,
                  a2,
                  a3,
                  a4,
                  v8,
                  v16,
                  nullptr,
                  (const struct _s_TryBlockMapEntry *)(p_nCatches - 3),
                  a7,
                  TargetFrame);
                v12 = v18;
                v11 = v17;
              }
            }
            v14 = a6;
          }
          ++v11;
          p_nCatches += 5;
          v17 = v11;
        }
        while ( v11 < v12 );
      }
    }
  }
}

// Address: 0x1000931A
char __cdecl IsInExceptionSpec(struct EHExceptionRecord *a1, const struct _s_ESTypeList *a2)
{
  int nCount; // edi
  char v3; // bl
  int v4; // edx
  CatchableTypeArray *pCatchableTypeArray; // eax
  int nCatchableTypes; // ecx
  CatchableType **arrayOfCatchableTypes; // eax
  CatchableType **v8; // ecx
  char *v9; // eax
  CatchableType **v11; // [esp+Ch] [ebp-18h]
  char *v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  CatchableType **v14; // [esp+18h] [ebp-Ch]
  int v15; // [esp+1Ch] [ebp-8h]
  int v16; // [esp+20h] [ebp-4h]

  if ( a2 == nullptr )
    terminate();
  nCount = a2->nCount;
  v3 = 0;
  if ( a2->nCount > 0 )
  {
    v4 = 0;
    v16 = 0;
    pCatchableTypeArray = a1->params.pThrowInfo->pCatchableTypeArray;
    nCatchableTypes = pCatchableTypeArray->nCatchableTypes;
    arrayOfCatchableTypes = pCatchableTypeArray->arrayOfCatchableTypes;
    v13 = nCatchableTypes;
    v11 = arrayOfCatchableTypes;
    do
    {
      v8 = arrayOfCatchableTypes;
      v14 = arrayOfCatchableTypes;
      v15 = v13;
      if ( v13 > 0 )
      {
        v9 = (char *)a2->pTypeArray + v4;
        v12 = v9;
        while ( TypeMatchHelper<__FrameHandler3>(v9, *v8, a1->params.pThrowInfo) == 0 )
        {
          v8 = v14 + 1;
          --v15;
          ++v14;
          v9 = v12;
          if ( v15 <= 0 )
            goto LABEL_10;
        }
        v3 = 1;
LABEL_10:
        v4 = v16;
      }
      arrayOfCatchableTypes = v11;
      v4 += 16;
      v16 = v4;
      --nCount;
    }
    while ( nCount != 0 );
  }
  return v3;
}

// Address: 0x100093B6
unsigned __int8 __cdecl Is_bad_exception_allowed(const struct _s_ESTypeList *a1)
{
  int v1; // esi
  int i; // ebx

  v1 = 0;
  if ( a1->nCount <= 0 )
    return 0;
  for ( i = 0; __std_type_info_compare(&a1->pTypeArray[i].pType->spare, &dword_1002585C) != 0; ++i )
  {
    if ( ++v1 >= a1->nCount )
      return 0;
  }
  return 1;
}

// Address: 0x100093F5
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_100093F5(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x100093FC
int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int v2; // esi
  int result; // eax

  v2 = a2[1];
  result = a1 + *a2;
  if ( v2 >= 0 )
    result += v2 + *(_DWORD *)(*(_DWORD *)(v2 + a1) + a2[2]);
  return result;
}

// Address: 0x10009421
int __cdecl __BuildCatchObject(int a1, char *a2, int *a3, int a4)
{
  char *v4; // edi
  int v5; // eax
  int result; // eax

  if ( *a3 >= 0 )
    v4 = &a2[a3[2] + 12];
  else
    v4 = a2;
  v5 = __BuildCatchObjectHelper(a1, a2, (int)a3, a4) - 1;
  if ( v5 != 0 )
  {
    result = v5 - 1;
    if ( result == 0 )
    {
      __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
      return sub_100093F5((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_100093F5((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x100094B0
int __cdecl __BuildCatchObjectHelper(int a1, int *a2, int *a3, int a4)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  const void *v12; // eax
  size_t v14; // [esp-4h] [ebp-34h]

  v4 = 0;
  v5 = a3[1];
  if ( v5 != 0 && *(_BYTE *)(v5 + 8) != 0 )
  {
    v6 = a3[2];
    if ( v6 != 0 || *a3 < 0 )
    {
      v7 = *a3;
      v8 = a2;
      if ( *a3 >= 0 )
        v8 = (int *)((char *)a2 + v6 + 12);
      if ( (v7 & 0x80u) != 0 && (*(_BYTE *)a4 & 0x10) != 0 && dword_10025D00 != 0 )
      {
        v9 = ((int (__thiscall *)(int))dword_10025D00)(dword_10025D00);
      }
      else
      {
        if ( (v7 & 8) == 0 )
        {
          if ( (*(_BYTE *)a4 & 1) != 0 )
          {
            if ( *(_DWORD *)(a1 + 24) != 0 && v8 != nullptr )
            {
              memmove(v8, *(const void **)(a1 + 24), *(_DWORD *)(a4 + 20));
              if ( *(_DWORD *)(a4 + 20) != 4 || *v8 == 0 )
                return v4;
              v10 = __AdjustPointer(*v8, (_DWORD *)(a4 + 8));
              goto LABEL_23;
            }
          }
          else if ( *(_DWORD *)(a4 + 24) != 0 )
          {
            if ( *(_DWORD *)(a1 + 24) != 0 && v8 != nullptr )
              return ((*(_BYTE *)a4 & 4) != 0) + 1;
          }
          else
          {
            v11 = *(_DWORD *)(a1 + 24);
            if ( v11 != 0 && v8 != nullptr )
            {
              v14 = *(_DWORD *)(a4 + 20);
              v12 = (const void *)__AdjustPointer(v11, (_DWORD *)(a4 + 8));
              memmove(v8, v12, v14);
              return v4;
            }
          }
LABEL_11:
          terminate();
        }
        v9 = *(_DWORD *)(a1 + 24);
      }
      if ( v9 != 0 && v8 != nullptr )
      {
        *v8 = v9;
        v10 = __AdjustPointer(v9, (_DWORD *)(a4 + 8));
LABEL_23:
        *v8 = v10;
        return v4;
      }
      goto LABEL_11;
    }
  }
  return 0;
}

// Address: 0x100095DE
int __cdecl __FrameUnwindFilter(_DWORD **a1)
{
  _DWORD *v1; // eax
  int v2; // eax

  v1 = *a1;
  if ( **a1 == -532462766 || *v1 == -532459699 )
  {
    if ( *(int *)(__vcrt_getptd() + 24) > 0 )
    {
      v2 = __vcrt_getptd();
      --*(_DWORD *)(v2 + 24);
    }
  }
  else if ( *v1 == -529697949 )
  {
    *(_DWORD *)(__vcrt_getptd() + 24) = 0;
    terminate();
  }
  return 0;
}

// Address: 0x10009623
int __cdecl __FrameUnwindToState(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v8; // eax
  int v9; // [esp+10h] [ebp-20h]

  if ( *(int *)(a3 + 4) > 128 )
    v4 = *(_DWORD *)(a1 + 8);
  else
    v4 = *(char *)(a1 + 8);
  v5 = __vcrt_getptd();
  ++*(_DWORD *)(v5 + 24);
  while ( v4 != a4 )
  {
    if ( v4 <= -1 || v4 >= *(_DWORD *)(a3 + 4) )
      goto LABEL_11;
    v6 = *(_DWORD *)(a3 + 8);
    v9 = *(_DWORD *)(v6 + 8 * v4);
    if ( *(_DWORD *)(v6 + 8 * v4 + 4) != 0 )
    {
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(v6 + 8 * v4);
      _CallSettingFrame(*(_DWORD *)(*(_DWORD *)(a3 + 8) + 8 * v4 + 4), a1, 259);
    }
    v4 = v9;
  }
  if ( *(int *)(__vcrt_getptd() + 24) > 0 )
  {
    v8 = __vcrt_getptd();
    --*(_DWORD *)(v8 + 24);
  }
  if ( v4 != a4 )
LABEL_11:
    terminate();
  *(_DWORD *)(a1 + 8) = v4;
  return a1;
}

// Address: 0x100096EB
int __cdecl __InternalCxxFrameHandler(
        struct EHExceptionRecord *ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        struct _s_FuncInfo *a5,
        int a6,
        PVOID TargetFrame,
        unsigned __int8 a8)
{
  unsigned int v8; // eax
  int (__cdecl *pForwardCompat)(); // esi

  if ( *(_DWORD *)(__vcrt_getptd() + 32) != 0
    || ExceptionRecord->ExceptionCode == -529697949
    || ExceptionRecord->ExceptionCode == -2147483610
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) < 0x19930522
    || (a5->EHFlags & 1) == 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
    {
      if ( a5->maxState != 0 && a6 == 0 )
        __FrameUnwindToState((int)a2, (int)a4, (int)a5, -1);
    }
    else if ( a5->nTryBlocks != 0
           || (v8 = *(_DWORD *)a5 & 0x1FFFFFFF) >= 0x19930521 && a5->pESTypeList != nullptr
           || v8 >= 0x19930522 && (a5->EHFlags & 4) != 0 )
    {
      if ( ExceptionRecord->ExceptionCode == -529697949
        && ExceptionRecord->NumberParameters >= 3
        && ExceptionRecord->params.magicNumber > 0x19930522 )
      {
        pForwardCompat = ExceptionRecord->params.pThrowInfo->pForwardCompat;
        if ( pForwardCompat != nullptr )
          return ((int (__cdecl *)(struct EHExceptionRecord *, struct EHRegistrationNode *, struct _CONTEXT *, void *, struct _s_FuncInfo *, int, PVOID, _DWORD))pForwardCompat)(
                   ExceptionRecord,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   TargetFrame,
                   a8);
      }
      FindHandler(ExceptionRecord, a2, a3, a4, a5, a8, a6, TargetFrame);
    }
  }
  return 1;
}

// Address: 0x100097E7
int __cdecl TypeMatchHelper<__FrameHandler3>(int a1, int a2, _BYTE *a3)
{
  int v3; // eax
  int v4; // ebx
  int v5; // esi
  int v6; // eax

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == 0 || *(_BYTE *)(v3 + 8) == 0 || *(char *)a1 < 0 && (*(_BYTE *)a2 & 0x10) != 0 )
    return 1;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = 0;
  if ( v3 != v4 )
  {
    v6 = strcmp((const char *)(v3 + 8), (const char *)(v4 + 8));
    if ( v6 != 0 )
      v6 = v6 < 0 ? -1 : 1;
    if ( v6 != 0 )
      return 0;
  }
  if ( ((*(_BYTE *)a2 & 2) == 0 || (*(_BYTE *)a1 & 8) != 0)
    && ((*a3 & 1) == 0 || (*(_BYTE *)a1 & 1) != 0)
    && ((*a3 & 2) == 0 || (*(_BYTE *)a1 & 2) != 0) )
  {
    return 1;
  }
  return v5;
}

// Address: 0x10009875
// attributes: thunk
void __noreturn j__terminate()
{
  terminate();
}

// Address: 0x1000987A
wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *v2; // esi
  const wchar_t *v3; // ecx
  wchar_t v4; // ax
  __m128i *i; // edx
  __m128i v7; // xmm1
  int v8; // ecx
  __m128i v9; // xmm0
  unsigned __int8 v10; // zf
  int v11; // ecx

  v2 = nullptr;
  if ( dword_10025CE4 >= 2 )
  {
    for ( i = (__m128i *)Str; (((_BYTE)i + 1) & 0xE) != 0; i = (__m128i *)((char *)i + 2) )
    {
      if ( i->m128i_i16[0] == Ch )
        v2 = (wchar_t *)i;
      if ( i->m128i_i16[0] == 0 )
        return v2;
    }
    if ( Ch != 0 )
    {
      v9 = _mm_cvtsi32_si128(Ch);
      while ( 1 )
      {
        v11 = _mm_cmpistri(v9, *i, 65);
        v10 = _mm_cmpistrz(v9, *i, 65);
        if ( _mm_cmpistrc(v9, *i, 65) )
          v2 = (wchar_t *)i + v11;
        if ( v10 )
          break;
        ++i;
      }
      return v2;
    }
    v7 = _mm_cvtsi32_si128(0xFFFF0001);
    while ( 1 )
    {
      v8 = _mm_cmpistri(v7, *i, 21);
      if ( _mm_cmpistrz(v7, *i, 21) )
        break;
      ++i;
    }
    return (wchar_t *)i + v8;
  }
  else
  {
    v3 = Str;
    do
      v4 = *v3++;
    while ( v4 != 0 );
    do
      --v3;
    while ( v3 != Str && *v3 != Ch );
    if ( *v3 == Ch )
      return (wchar_t *)v3;
    else
      return nullptr;
  }
}

// Address: 0x10009920
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  size_t v3; // ecx
  __m128i *v4; // edi
  unsigned int v5; // eax
  __m128i v7; // xmm0
  __m128i *v8; // edi

  v3 = Size;
  v4 = (__m128i *)a1;
  if ( Size == 0 )
    return a1;
  v5 = 16843009 * (unsigned __int8)Val;
  if ( (int)Size <= 32 )
    goto SmallMov;
  if ( (int)Size >= 128 )
  {
    if ( _bittest(&dword_10025CE8, 1u) )
    {
      memset(a1, Val, Size);
      return a1;
    }
    if ( !_bittest(&dword_10025010, 1u) )
      goto SmallMov;
    v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
    *(__m128i *)a1 = v7;
    v4 = (__m128i *)(((unsigned int)a1 + 16) & 0xFFFFFFF0);
    v3 = (_BYTE *)a1 + Size - (_BYTE *)v4;
    if ( (int)v3 > 128 )
    {
      do
      {
        *v4 = v7;
        v4[1] = v7;
        v4[2] = v7;
        v4[3] = v7;
        v4[4] = v7;
        v4[5] = v7;
        v4[6] = v7;
        v4[7] = v7;
        v4 += 8;
        v3 -= 128;
      }
      while ( (v3 & 0xFFFFFF00) != 0 );
      goto XmmSmallLoop;
    }
  }
  if ( !_bittest(&dword_10025010, 1u) )
  {
SmallMov:
    while ( (v3 & 3) != 0 )
    {
      v4->m128i_i8[0] = Val;
      v4 = (__m128i *)((char *)v4 + 1);
      --v3;
    }
    if ( (v3 & 4) != 0 )
    {
      v4->m128i_i32[0] = v5;
      v4 = (__m128i *)((char *)v4 + 4);
      v3 -= 4;
    }
    for ( ; (v3 & 0xFFFFFFF8) != 0; v3 -= 8 )
    {
      v4->m128i_i32[0] = v5;
      v4->m128i_i32[1] = v5;
      v4 = (__m128i *)((char *)v4 + 8);
    }
    return a1;
  }
  v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
XmmSmallLoop:
  if ( v3 >= 0x20 )
  {
    do
    {
      *v4 = v7;
      v4[1] = v7;
      v4 += 2;
      v3 -= 32;
    }
    while ( v3 >= 0x20 );
    if ( (v3 & 0x1F) == 0 )
      return a1;
  }
  v8 = (__m128i *)((char *)v4 + v3 - 32);
  *v8 = v7;
  v8[1] = v7;
  return a1;
}

// Address: 0x10009A7A
void __cdecl __std_exception_copy(int a1, int a2)
{
  unsigned int v2; // kr00_4
  char *v3; // eax
  char *v4; // esi
  char *v5; // ecx

  if ( *(_BYTE *)(a1 + 4) != 0 && *(_DWORD *)a1 != 0 )
  {
    v2 = strlen(*(const char **)a1);
    v3 = (char *)malloc(v2 + 1);
    v4 = v3;
    if ( v3 != nullptr )
    {
      strcpy_s(v3, v2 + 1, *(const char **)a1);
      v5 = v4;
      v4 = nullptr;
      *(_DWORD *)a2 = v5;
      *(_BYTE *)(a2 + 4) = 1;
    }
    j___free_base(v4);
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_BYTE *)(a2 + 4) = 0;
  }
}

// Address: 0x10009ADD
void __cdecl __std_exception_destroy(int a1)
{
  if ( *(_BYTE *)(a1 + 4) != 0 )
    j___free_base(*(void **)a1);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
}

// Address: 0x10009AFC
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _ThrowInfo *v2; // edi
  int v3; // [esp-4h] [ebp-30h]
  DWORD dwExceptionCode[8]; // [esp+Ch] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_1001C390, sizeof(dwExceptionCode));
  v2 = pThrowInfo;
  if ( pThrowInfo != nullptr && (pThrowInfo->attributes & 0x10) != 0 )
  {
    v3 = *(_DWORD *)pExceptionObject - 4;
    v2 = *(_ThrowInfo **)(*(_DWORD *)v3 + 24);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v3 + 32))(*(_DWORD *)(*(_DWORD *)v3 + 32), v3);
  }
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)v2;
  if ( v2 != nullptr && (v2->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}

// Address: 0x10009B6A
FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, _DWORD *a3, _DWORD *a4)
{
  volatile signed __int32 *v4; // ebx
  signed __int32 v5; // eax
  uintptr_t v6; // edx
  FARPROC v7; // esi
  _DWORD *v9; // esi
  HMODULE module; // eax
  FARPROC ProcAddress; // eax

  v4 = (volatile signed __int32 *)((char *)&unk_10025D14 + 4 * a1);
  v5 = _InterlockedCompareExchange(v4, 0, 0);
  v6 = __security_cookie;
  v7 = (FARPROC)__ROR4__(v5 ^ __security_cookie, __security_cookie & 0x1F);
  if ( v7 != (FARPROC)-1 )
  {
    if ( v7 != nullptr )
      return v7;
    v9 = a3;
    if ( a3 == a4 )
    {
LABEL_8:
      module = nullptr;
    }
    else
    {
      while ( 1 )
      {
        module = (HMODULE)try_get_module(*v9);
        if ( module != nullptr )
          break;
        if ( ++v9 == a4 )
        {
          v6 = __security_cookie;
          goto LABEL_8;
        }
      }
      v6 = __security_cookie;
    }
    if ( module != nullptr )
    {
      ProcAddress = GetProcAddress(module, lpProcName);
      v7 = ProcAddress;
      if ( ProcAddress != nullptr )
      {
        _InterlockedExchange(v4, unknown_libname_2((int)ProcAddress));
        return v7;
      }
      v6 = __security_cookie;
    }
    _InterlockedExchange(v4, v6 ^ __ROR4__(-1, 32 - (v6 & 0x1F)));
  }
  return nullptr;
}

// Address: 0x10009C0A
HMODULE __cdecl try_get_module(int a1)
{
  volatile signed __int32 *v1; // edi
  signed __int32 v2; // eax
  const WCHAR *v4; // ebx
  HMODULE Library; // esi

  v1 = (volatile signed __int32 *)((char *)&unk_10025D04 + 4 * a1);
  v2 = _InterlockedCompareExchange(v1, 0, 0);
  if ( v2 != 0 )
    return v2 != -1 ? (HMODULE)v2 : nullptr;
  v4 = (&lpLibFileName)[a1];
  Library = LoadLibraryExW(v4, nullptr, 0x800u);
  if ( Library != nullptr
    || (GetLastError() != 87 ? (Library = nullptr) : (Library = LoadLibraryExW(v4, nullptr, 0)), Library != nullptr) )
  {
    if ( _InterlockedExchange(v1, (__int32)Library) != 0 )
      FreeLibrary(Library);
    return Library;
  }
  else
  {
    _InterlockedExchange(v1, -1);
    return nullptr;
  }
}

// Address: 0x10009C8B
DWORD __cdecl __vcrt_FlsAlloc(int a1)
{
  FARPROC function; // eax

  function = try_get_function(4, "FlsAlloc", dword_1001C460, "FlsAlloc");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int))function)(function, a1);
  else
    return TlsAlloc();
}

// Address: 0x10009CC5
int __cdecl __vcrt_FlsFree(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(5, "FlsFree", dword_1001C474, "FlsFree");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}

// Address: 0x10009CFF
LPVOID __cdecl __vcrt_FlsGetValue(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(6, "FlsGetValue", dword_1001C484, "FlsGetValue");
  if ( function != nullptr )
    return (LPVOID)((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}

// Address: 0x10009D39
int __cdecl __vcrt_FlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC function; // eax

  function = try_get_function(7, "FlsSetValue", dword_1001C498, "FlsSetValue");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD, LPVOID))function)(function, dwTlsIndex, lpTlsValue);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x10009D76
int __cdecl __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC function; // eax

  function = try_get_function(8, "InitializeCriticalSectionEx", dword_1001C4AC, "InitializeCriticalSectionEx");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))function)(
             function,
             lpCriticalSection,
             dwSpinCount,
             a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x10009DBC
uintptr_t *__vcrt_initialize_winapi_thunks()
{
  uintptr_t *result; // eax
  int v1; // ecx
  uintptr_t v2; // esi

  result = (uintptr_t *)&unk_10025D14;
  v1 = 0;
  v2 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  do
  {
    ++v1;
    *result++ = v2;
  }
  while ( v1 != (&unk_10025D38 < &unk_10025D14 ? 0 : 9) );
  return result;
}

// Address: 0x10009DF6
BOOL __cdecl __vcrt_uninitialize_winapi_thunks(char a1)
{
  HMODULE *v1; // esi
  BOOL result; // eax

  if ( a1 == 0 )
  {
    v1 = (HMODULE *)&unk_10025D04;
    do
    {
      if ( *v1 != nullptr )
      {
        if ( *v1 != (HMODULE)-1 )
          result = FreeLibrary(*v1);
        *v1 = nullptr;
      }
      ++v1;
    }
    while ( v1 != (HMODULE *)&unk_10025D14 );
  }
  return result;
}

// Address: 0x10009E28
__vcrt_bool __cdecl __vcrt_initialize()
{
  __vcrt_initialize_pure_virtual_call_handler();
  __vcrt_initialize_winapi_thunks();
  if ( (unsigned __int8)__vcrt_initialize_locks() == 0 )
    return false;
  if ( (unsigned __int8)__vcrt_initialize_ptd() == 0 )
  {
    __vcrt_uninitialize_locks();
    return false;
  }
  return true;
}

// Address: 0x10009E51
__vcrt_bool __cdecl __vcrt_thread_attach()
{
  return __vcrt_getptd_noexit() != 0;
}

// Address: 0x10009E5C
__vcrt_bool __cdecl __vcrt_thread_detach()
{
  __vcrt_freeptd(nullptr);
  return true;
}

// Address: 0x10009E67
__vcrt_bool __cdecl __vcrt_uninitialize(__vcrt_bool Terminating)
{
  if ( !Terminating )
  {
    __vcrt_uninitialize_ptd();
    __vcrt_uninitialize_locks();
    __vcrt_uninitialize_winapi_thunks(0);
  }
  return true;
}

// Address: 0x10009E86
__vcrt_bool __cdecl __vcrt_uninitialize_critical()
{
  __vcrt_uninitialize_ptd();
  return true;
}

// Address: 0x10009E90
int __cdecl ValidateLocalCookies(int a1)
{
  return *(_DWORD *)(a1 + 8);
}

// Address: 0x10009ED0
int __cdecl SEH_1001A500(PEXCEPTION_RECORD ExceptionRecord, _DWORD *TargetFrame, int a3)
{
  _DWORD *v3; // esi
  uintptr_t v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // eax
  char v11; // cl
  EXCEPTION_RECORD *v12; // eax
  _DWORD v14[3]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD *v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  uintptr_t v17; // [esp+20h] [ebp-8h]
  char v18; // [esp+27h] [ebp-1h]

  v3 = TargetFrame;
  v18 = 0;
  v16 = 1;
  v4 = __security_cookie ^ TargetFrame[2];
  v14[2] = TargetFrame + 4;
  v17 = v4;
  ValidateLocalCookies(v4);
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    if ( TargetFrame[3] != -2 )
    {
      _EH4_LocalUnwind(TargetFrame + 4, &__security_cookie);
      goto LABEL_21;
    }
  }
  else
  {
    v14[0] = ExceptionRecord;
    v14[1] = a3;
    v5 = TargetFrame[3];
    *(TargetFrame - 1) = v14;
    if ( v5 != -2 )
    {
      while ( 1 )
      {
        v6 = v5 + 2 * (v5 + 2);
        v7 = *(_DWORD *)(v4 + 4 * v6 + 4);
        v8 = (_DWORD *)(v4 + 4 * v6);
        v9 = *v8;
        v15 = v8;
        if ( v7 != 0 )
        {
          v10 = _EH4_CallFilterFunc(v7, TargetFrame + 4);
          v11 = 1;
          v18 = 1;
          if ( v10 < 0 )
          {
            v4 = v17;
            v16 = 0;
            goto LABEL_21;
          }
          if ( v10 > 0 )
          {
            v12 = ExceptionRecord;
            if ( ExceptionRecord->ExceptionCode == -529697949 && __DestructExceptionObject != nullptr )
            {
              if ( _IsNonwritableInCurrentImage(&off_1001C370) != 0 )
              {
                __DestructExceptionObject(ExceptionRecord);
                v3 = TargetFrame;
              }
              v12 = ExceptionRecord;
            }
            _EH4_GlobalUnwind2(v3, v12);
            if ( v3[3] != v5 )
              _EH4_LocalUnwind(v3 + 4, &__security_cookie);
            v3[3] = v9;
            ValidateLocalCookies(v17);
            _EH4_TransferToHandler(v15[2], v3 + 4);
            __debugbreak();
          }
        }
        else
        {
          v11 = v18;
        }
        v5 = v9;
        if ( v9 == -2 )
          break;
        v4 = v17;
      }
      if ( v11 != 0 )
      {
        v4 = v17;
LABEL_21:
        ValidateLocalCookies(v4);
      }
    }
  }
  return v16;
}

// Address: 0x1000A036
int __cdecl __std_type_info_compare(int a1, int a2)
{
  _BYTE *v3; // ecx
  _BYTE *i; // eax
  bool v5; // cf
  unsigned __int8 v6; // dl

  if ( a1 == a2 )
    return 0;
  v3 = (_BYTE *)(a2 + 5);
  for ( i = (_BYTE *)(a1 + 5); ; i += 2 )
  {
    v5 = *i < *v3;
    if ( *i != *v3 )
      break;
    if ( *i == 0 )
      return 0;
    v6 = i[1];
    v5 = v6 < v3[1];
    if ( v6 != v3[1] )
      break;
    v3 += 2;
    if ( v6 == 0 )
      return 0;
  }
  return v5 ? -1 : 1;
}

// Address: 0x1000A072
PSLIST_ENTRY __cdecl __std_type_info_destroy_list(PSLIST_HEADER ListHead)
{
  PSLIST_ENTRY result; // eax
  PSLIST_ENTRY Next; // esi

  result = InterlockedFlushSList(ListHead);
  if ( result != nullptr )
  {
    do
    {
      Next = result->Next;
      _free_base(result);
      result = Next;
    }
    while ( Next != nullptr );
  }
  return result;
}

// Address: 0x1000A095
void __noreturn unexpected()
{
  int v0; // eax
  void (__thiscall *v1)(_DWORD); // esi

  v0 = __vcrt_getptd();
  v1 = *(void (__thiscall **)(_DWORD))(v0 + 4);
  if ( v1 != nullptr )
    v1(*(_DWORD *)(v0 + 4));
  terminate();
}

// Address: 0x1000A0B1
void __stdcall __vcrt_freefls(void *Block)
{
  if ( Block != nullptr && Block != &unk_10025D38 )
    _free_base(Block);
}

// Address: 0x1000A0CD
void __cdecl __vcrt_freeptd(void *Block)
{
  DWORD v1; // eax
  void *Value; // esi

  v1 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = Block;
    if ( Block == nullptr )
    {
      Value = __vcrt_FlsGetValue(dwTlsIndex);
      v1 = dwTlsIndex;
    }
    __vcrt_FlsSetValue(v1, nullptr);
    __vcrt_freefls(Value);
  }
}

// Address: 0x1000A103
int __cdecl __vcrt_getptd()
{
  int result; // eax

  result = __vcrt_getptd_noexit();
  if ( result == 0 )
    abort();
  return result;
}

// Address: 0x1000A111
void *__vcrt_getptd_noexit()
{
  DWORD LastError; // edi
  LPVOID Value; // eax
  void *v3; // ebx
  void *v4; // eax
  void *v5; // esi

  if ( dwTlsIndex == -1 )
    return nullptr;
  LastError = GetLastError();
  Value = __vcrt_FlsGetValue(dwTlsIndex);
  v3 = Value;
  if ( Value == (LPVOID)-1 )
  {
LABEL_6:
    v3 = nullptr;
    goto LABEL_12;
  }
  if ( Value == nullptr )
  {
    if ( __vcrt_FlsSetValue(dwTlsIndex, (LPVOID)0xFFFFFFFF) != 0 )
    {
      v4 = _calloc_base(1u, 0x28u);
      v5 = v4;
      if ( v4 != nullptr && __vcrt_FlsSetValue(dwTlsIndex, v4) != 0 )
      {
        v3 = v5;
        v5 = nullptr;
      }
      else
      {
        v3 = nullptr;
        __vcrt_FlsSetValue(dwTlsIndex, nullptr);
      }
      _free_base(v5);
      goto LABEL_12;
    }
    goto LABEL_6;
  }
LABEL_12:
  SetLastError(LastError);
  return v3;
}

// Address: 0x1000A1A3
char __vcrt_initialize_ptd()
{
  DWORD v0; // eax

  v0 = __vcrt_FlsAlloc((int)__vcrt_freefls);
  dwTlsIndex = v0;
  if ( v0 == -1 )
    return 0;
  if ( __vcrt_FlsSetValue(v0, &unk_10025D38) == 0 )
  {
    __vcrt_uninitialize_ptd();
    return 0;
  }
  return 1;
}

// Address: 0x1000A1D6
char __vcrt_uninitialize_ptd()
{
  if ( dwTlsIndex != -1 )
  {
    __vcrt_FlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return 1;
}

// Address: 0x1000A200
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

// Address: 0x1000A24C
int __cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return _CallSettingFrame((int)a3, (int)a1, a5);
}

// Address: 0x1000A2AC
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
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+4h] [ebp-38h]
  int (__cdecl *v10)(PEXCEPTION_RECORD, PVOID, struct _CONTEXT *); // [esp+8h] [ebp-34h]
  const struct _s_FuncInfo *v11; // [esp+10h] [ebp-2Ch]
  struct EHRegistrationNode *v12; // [esp+14h] [ebp-28h]
  int v13; // [esp+18h] [ebp-24h]
  struct EHRegistrationNode *v14; // [esp+1Ch] [ebp-20h]
  int *v15; // [esp+20h] [ebp-1Ch]
  int *v16; // [esp+24h] [ebp-18h]
  int v17; // [esp+28h] [ebp-14h]
  _DWORD v18[2]; // [esp+2Ch] [ebp-10h] BYREF
  int v19; // [esp+34h] [ebp-8h]
  void (__cdecl *v20)(unsigned int, _DWORD *); // [esp+38h] [ebp-4h]
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  if ( a1 == (struct EHExceptionRecord *)291 )
  {
    a2->pNext = (EHRegistrationNode *)&_ExceptionContinuation_6;
    return 1;
  }
  else
  {
    v10 = _TranslatorGuardHandler;
    v11 = a5;
    v12 = a2;
    v13 = a6;
    v14 = a7;
    v17 = 0;
    v15 = &v8;
    v16 = &savedregs;
    ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
    v19 = 1;
    v18[0] = a1;
    v18[1] = a3;
    v20 = *(void (__cdecl **)(unsigned int, _DWORD *))(__vcrt_getptd() + 8);
    v20(a1->ExceptionCode, v18);
    v19 = 0;
    if ( v17 != 0 )
      ExceptionList->Next = NtCurrentTeb()->NtTib.ExceptionList->Next;
    return v19;
  }
}

// Address: 0x1000A389
TryBlockMapEntry *__cdecl _GetRangeOfTrysToCheck(
        const struct _s_FuncInfo *a1,
        int a2,
        int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v5; // esi
  const struct _s_FuncInfo *v6; // edi
  unsigned int nTryBlocks; // ecx
  unsigned int v8; // edx
  TryBlockMapEntry *pTryBlockMap; // ebx
  int *p_catchHigh; // eax
  unsigned int v11; // ecx
  unsigned int v13; // [esp+Ch] [ebp-4h]

  v5 = a2;
  v6 = a1;
  nTryBlocks = a1->nTryBlocks;
  v8 = nTryBlocks;
  pTryBlockMap = a1->pTryBlockMap;
  v13 = nTryBlocks;
  if ( a2 >= 0 )
  {
    p_catchHigh = &pTryBlockMap[nTryBlocks].catchHigh;
    while ( nTryBlocks != -1 )
    {
      p_catchHigh -= 5;
      --nTryBlocks;
      v6 = a1;
      if ( *(p_catchHigh - 1) < a3 && (v6 = a1, a3 <= *p_catchHigh) || nTryBlocks == -1 )
      {
        v8 = v13;
        --v5;
        v13 = nTryBlocks;
      }
      if ( v5 < 0 )
        goto LABEL_9;
    }
LABEL_12:
    terminate();
  }
LABEL_9:
  v11 = nTryBlocks + 1;
  *a4 = v11;
  *a5 = v8;
  if ( v8 > v6->nTryBlocks || v11 > v8 )
    goto LABEL_12;
  return &pTryBlockMap[v11];
}

// Address: 0x1000A401
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x1000A433
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_3, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x1000A488
int __cdecl _CatchGuardHandler(struct EHExceptionRecord *ExceptionRecord, PVOID TargetFrame, struct _CONTEXT *a3)
{
  return __InternalCxxFrameHandler(
           ExceptionRecord,
           *((struct EHRegistrationNode **)TargetFrame + 4),
           a3,
           nullptr,
           *((struct _s_FuncInfo **)TargetFrame + 3),
           *((_DWORD *)TargetFrame + 5),
           TargetFrame,
           0);
}

// Address: 0x1000A4B9
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(__vcrt_getptd() + 36);
  *(_DWORD *)(__vcrt_getptd() + 36) = a1;
  return a1;
}

// Address: 0x1000A4DD
int __cdecl _FindAndUnlinkFrame(int a1)
{
  _DWORD *v1; // ecx
  int result; // eax
  int i; // ecx

  if ( a1 == *(_DWORD *)(__vcrt_getptd() + 36) )
  {
    v1 = (_DWORD *)(__vcrt_getptd() + 36);
    result = *(_DWORD *)(a1 + 4);
    *v1 = result;
  }
  else
  {
    for ( i = *(_DWORD *)(__vcrt_getptd() + 36); ; i = *(_DWORD *)(i + 4) )
    {
      if ( *(_DWORD *)(i + 4) == 0 )
        terminate();
      if ( a1 == *(_DWORD *)(i + 4) )
        break;
    }
    result = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(i + 4) = result;
  }
  return result;
}

// Address: 0x1000A527
int __cdecl _IsExceptionObjectToBeDestroyed(int a1)
{
  _DWORD *v1; // eax

  v1 = *(_DWORD **)(__vcrt_getptd() + 36);
  if ( v1 == nullptr )
    return 1;
  while ( *v1 != a1 )
  {
    v1 = (_DWORD *)v1[1];
    if ( v1 == nullptr )
      return 1;
  }
  return 0;
}

// Address: 0x1000A54D
int __usercall _TranslatorGuardHandler@<eax>(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        struct EHExceptionRecord *ExceptionRecord,
        PVOID TargetFrame,
        struct _CONTEXT *a4)
{
  int (*v5)(void); // [esp+4h] [ebp-4h] BYREF

  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    *((_DWORD *)TargetFrame + 9) = 1;
    return 1;
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
      *((PVOID *)TargetFrame + 6),
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

// Address: 0x1000A5EC
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *ExceptionRecord,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(ExceptionRecord, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x1000A622
char __vcrt_initialize_locks()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_10025D60;
  v1 = 0;
  while ( __vcrt_InitializeCriticalSectionEx(v0, 0xFA0u, 0) != 0 )
  {
    ++dword_10025D78;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x18 )
      return 1;
  }
  __vcrt_uninitialize_locks();
  return 0;
}

// Address: 0x1000A65E
char __vcrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_10025D78;
  if ( dword_10025D78 != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_10025D48 + 24 * dword_10025D78);
    do
    {
      DeleteCriticalSection(v1);
      --dword_10025D78;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

// Address: 0x1000A68D
uintptr_t __vcrt_initialize_pure_virtual_call_handler()
{
  uintptr_t result; // eax

  result = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  dword_10025D7C = result;
  return result;
}

// Address: 0x1000A6B0
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

// Address: 0x1000A740
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

// Address: 0x1000A786
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x1000A7AE
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x1000A7C5
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x1000A7DE
void __fastcall _EH4_GlobalUnwind2(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &ReturnPoint, ExceptionRecord, nullptr);
}

// Address: 0x1000A7F7
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x1000A810
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x1000A830
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

// Address: 0x1000A875
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

// Address: 0x1000A8F9
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

// Address: 0x1000A91C
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x1000A930);
}

// Address: 0x1000A925
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_10025038 = a3;
  unk_10025034 = result;
  unk_1002503C = a2;
  return result;
}

// Address: 0x1000A944
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x1000A947
int __cdecl common_xtox<unsigned long,char>(unsigned int a1, char *a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v5; // eax
  unsigned int v6; // ecx
  char *v7; // esi
  char *v8; // edi
  char v9; // dl
  unsigned int v10; // et2
  char v11; // dl
  char *v13; // esi
  char v14; // cl

  v5 = a1;
  v6 = 0;
  v7 = a2;
  if ( a5 != 0 )
  {
    v6 = 1;
    *a2 = 45;
    v7 = a2 + 1;
    v5 = -a1;
  }
  v8 = v7;
  do
  {
    v10 = v5 % a4;
    v5 /= a4;
    v9 = v10;
    if ( v10 <= 9 )
      v11 = v9 + 48;
    else
      v11 = v9 + 87;
    *v7++ = v11;
    ++v6;
  }
  while ( v5 != 0 && v6 < a3 );
  if ( v6 < a3 )
  {
    *v7 = 0;
    v13 = v7 - 1;
    do
    {
      v14 = *v13;
      *v13-- = *v8;
      *v8++ = v14;
    }
    while ( v8 < v13 );
    return 0;
  }
  else
  {
    *a2 = 0;
    *_errno() = 34;
    _invalid_parameter_noinfo();
    return 34;
  }
}

// Address: 0x1000A9BC
int __cdecl common_xtox_s<unsigned long,char>(unsigned int a1, char *a2, unsigned int a3, unsigned int a4, char a5)
{
  int *v5; // eax
  int v7; // [esp-4h] [ebp-8h]

  if ( a2 != nullptr && a3 != 0 )
  {
    *a2 = 0;
    if ( a3 <= (unsigned int)(a5 != 0) + 1 )
    {
      v5 = _errno();
      v7 = 34;
      goto LABEL_3;
    }
    if ( a4 - 2 <= 0x22 )
      return common_xtox<unsigned long,char>(a1, a2, a3, a4, a5);
  }
  v5 = _errno();
  v7 = 22;
LABEL_3:
  *v5 = v7;
  _invalid_parameter_noinfo();
  return v7;
}

// Address: 0x1000AA1B
// Microsoft VisualC universal runtime
int __cdecl unknown_libname_7(signed int a1, char *a2, unsigned int a3, unsigned int a4)
{
  char v5; // [esp+0h] [ebp-4h]

  if ( a4 != 10 || (v5 = 1, a1 >= 0) )
    v5 = 0;
  return common_xtox_s<unsigned long,char>(a1, a2, a3, a4, v5);
}

// Address: 0x1000AA50
errno_t __cdecl wmemcpy_s(wchar_t *S1, rsize_t N1, const wchar_t *S2, rsize_t N)
{
  int *v5; // eax
  errno_t v6; // [esp-8h] [ebp-Ch]

  if ( N == 0 )
    return 0;
  if ( S1 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( S2 != nullptr && N1 >= N )
  {
    memmove_0(S1, S2, 2 * N);
    return 0;
  }
  wmemset(S1, 0, N1);
  if ( S2 == nullptr )
  {
    v5 = _errno();
    v6 = 22;
LABEL_12:
    *v5 = v6;
    _invalid_parameter_noinfo();
    return v6;
  }
  if ( N1 < N )
  {
    v5 = _errno();
    v6 = 34;
    goto LABEL_12;
  }
  return 22;
}

// Address: 0x1000AAD4
wchar_t *__cdecl wmemset(wchar_t *S, wchar_t C, size_t N)
{
  wchar_t *v3; // edi
  size_t i; // ecx

  if ( N != 0 )
  {
    memset32(S, (C << 16) | C, N >> 1);
    v3 = &S[2 * (N >> 1)];
    for ( i = N & 1; i != 0; --i )
      *v3++ = C;
  }
  return S;
}

// Address: 0x1000AB00
int __stdcall __crt_seh_guarded_call<unsigned int>::operator()<_lambda_11b4f7b0d3157825a5656a18eba1ae27_,_lambda_b51c0495177f500e782686251704ae76_ &,_lambda_cf89b47920b5017557bfe891e78aca36_>(
        FILE **a1,
        int a2,
        FILE **a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  _lock_file(*a1);
  v4 = _lambda_0a97c9e57da7be065955385c79108ff2_::operator()(a2);
  _unlock_file(*a3);
  return v4;
}

// Address: 0x1000AB51
int __cdecl sub_1000AB51(FILE *a1, int a2)
{
  FILE *v3; // [esp+0h] [ebp-Ch] BYREF
  FILE *v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<unsigned int>::operator()<_lambda_11b4f7b0d3157825a5656a18eba1ae27_,_lambda_b51c0495177f500e782686251704ae76_ &,_lambda_cf89b47920b5017557bfe891e78aca36_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x1000AB79
int __cdecl sub_1000AB79(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  _WORD *v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+4h] [ebp-484h] BYREF
  _BYTE v12[12]; // [esp+8h] [ebp-480h] BYREF
  int v13; // [esp+14h] [ebp-474h]
  _DWORD v14[2]; // [esp+18h] [ebp-470h] BYREF
  int v15; // [esp+20h] [ebp-468h]
  int v16; // [esp+24h] [ebp-464h]
  _DWORD *v17; // [esp+28h] [ebp-460h] BYREF
  _BYTE v18[64]; // [esp+2Ch] [ebp-45Ch] BYREF
  _BYTE v19[1048]; // [esp+6Ch] [ebp-41Ch] BYREF

  v17 = a3;
  if ( a5 == 0 || a4 != 0 && a3 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v11, a6);
  v16 = 0;
  v8 = v17;
  v13 = a1 & 2;
  v14[0] = v17;
  v14[1] = a4;
  v15 = 0;
  if ( (a1 & 2) != 0 || (LOBYTE(v16) = 0, v17 == nullptr) )
    LOBYTE(v16) = 1;
  v17 = v14;
  unknown_libname_13(&v17, a1, a2, a5, v12, a7);
  v9 = sub_1000B7BB(v18);
  if ( v8 == nullptr )
    goto LABEL_22;
  if ( (a1 & 1) == 0 )
  {
    if ( v13 != 0 )
    {
      if ( a4 == 0 )
        goto LABEL_22;
      if ( v9 < 0 )
      {
        *v8 = 0;
        goto LABEL_22;
      }
      v10 = v15;
      if ( v15 != a4 )
      {
LABEL_21:
        v8[v10] = 0;
        goto LABEL_22;
      }
    }
    else
    {
      if ( a4 == 0 )
      {
LABEL_26:
        v9 = -1;
        goto LABEL_22;
      }
      v10 = v15;
      if ( v15 != a4 )
        goto LABEL_21;
      v9 = -2;
    }
    v8[a4 - 1] = 0;
    goto LABEL_22;
  }
  if ( a4 == 0 && v9 != 0 )
    goto LABEL_26;
  v10 = v15;
  if ( v15 != a4 )
    goto LABEL_21;
  if ( v9 >= 0 && v9 > a4 )
    goto LABEL_26;
LABEL_22:
  __crt_stdio_output::formatting_buffer::~formatting_buffer((__crt_stdio_output::formatting_buffer *)v19);
  if ( v12[8] != 0 )
    *(_DWORD *)(v11 + 848) &= ~2u;
  return v9;
}

// Address: 0x1000ACFE
int __cdecl sub_1000ACFE(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  _WORD *v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+4h] [ebp-484h] BYREF
  _BYTE v12[12]; // [esp+8h] [ebp-480h] BYREF
  int v13; // [esp+14h] [ebp-474h]
  _DWORD v14[2]; // [esp+18h] [ebp-470h] BYREF
  int v15; // [esp+20h] [ebp-468h]
  int v16; // [esp+24h] [ebp-464h]
  _DWORD *v17; // [esp+28h] [ebp-460h] BYREF
  _BYTE v18[64]; // [esp+2Ch] [ebp-45Ch] BYREF
  _BYTE v19[1048]; // [esp+6Ch] [ebp-41Ch] BYREF

  v17 = a3;
  if ( a5 == 0 || a4 != 0 && a3 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v11, a6);
  v16 = 0;
  v8 = v17;
  v13 = a1 & 2;
  v14[0] = v17;
  v14[1] = a4;
  v15 = 0;
  if ( (a1 & 2) != 0 || (LOBYTE(v16) = 0, v17 == nullptr) )
    LOBYTE(v16) = 1;
  v17 = v14;
  unknown_libname_13(&v17, a1, a2, a5, v12, a7);
  v9 = sub_1000B8EB(v18);
  if ( v8 == nullptr )
    goto LABEL_22;
  if ( (a1 & 1) == 0 )
  {
    if ( v13 != 0 )
    {
      if ( a4 == 0 )
        goto LABEL_22;
      if ( v9 < 0 )
      {
        *v8 = 0;
        goto LABEL_22;
      }
      v10 = v15;
      if ( v15 != a4 )
      {
LABEL_21:
        v8[v10] = 0;
        goto LABEL_22;
      }
    }
    else
    {
      if ( a4 == 0 )
      {
LABEL_26:
        v9 = -1;
        goto LABEL_22;
      }
      v10 = v15;
      if ( v15 != a4 )
        goto LABEL_21;
      v9 = -2;
    }
    v8[a4 - 1] = 0;
    goto LABEL_22;
  }
  if ( a4 == 0 && v9 != 0 )
    goto LABEL_26;
  v10 = v15;
  if ( v15 != a4 )
    goto LABEL_21;
  if ( v9 >= 0 && v9 > a4 )
    goto LABEL_26;
LABEL_22:
  __crt_stdio_output::formatting_buffer::~formatting_buffer((__crt_stdio_output::formatting_buffer *)v19);
  if ( v12[8] != 0 )
    *(_DWORD *)(v11 + 848) &= ~2u;
  return v9;
}

// Address: 0x1000AE83
int __cdecl common_vsprintf_s<wchar_t>(
        int a1,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        struct __crt_locale_pointers *a6,
        int a7)
{
  int result; // eax

  if ( a5 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( a3 == nullptr || a4 == 0 )
  {
    *_errno() = 22;
    goto LABEL_10;
  }
  result = sub_1000AB79(a1, a2, a3, a4, a5, a6, a7);
  if ( result < 0 )
    *(_WORD *)a3 = 0;
  if ( result == -2 )
  {
    *_errno() = 34;
LABEL_10:
    _invalid_parameter_noinfo();
    return -1;
  }
  return result;
}

// Address: 0x1000AEFD
int __thiscall __crt_stdio_output::formatting_buffer::count<char>(_DWORD *this)
{
  if ( *(this + 257) != 0 )
    return *(this + 256) >> 1;
  else
    return 512;
}

// Address: 0x1000AF15
char __thiscall __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(_DWORD *this, unsigned int a2)
{
  char v4; // bl
  size_t v5; // esi
  void *v6; // eax
  void *v7; // [esp+8h] [ebp-4h] BYREF

  if ( ((0xFFFFFFFF / a2) & 0xFFFFFFFE) >= 2 )
  {
    v4 = 0;
    v5 = 2 * a2;
    if ( (*(this + 257) != 0 || v5 > 0x400) && v5 > *(this + 256) )
    {
      v6 = _malloc_base(v5);
      v7 = v6;
      if ( v6 != nullptr )
      {
        unknown_libname_14(&v7);
        v6 = v7;
        v4 = 1;
        *(this + 256) = v5;
      }
      _free_base(v6);
      return v4;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *_errno() = 12;
    return 0;
  }
}

// Address: 0x1000AF9B
bool __cdecl __crt_stdio_output::is_wide_character_specifier<char>(int a1, int a2, char a3, int a4)
{
  bool v4; // cl

  switch ( a4 )
  {
    case 2:
      return false;
    case 3:
    case 12:
      return true;
    case 13:
      return false;
    default:
      break;
  }
  v4 = a3 == 99 || a3 == 115;
  return !v4;
}

// Address: 0x1000AFDB
bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(char a1, int a2, __int16 a3, int a4)
{
  char v4; // cl

  if ( a4 == 2 )
    return false;
  if ( a4 == 3 || a4 == 12 || a4 == 13 )
    return true;
  v4 = 0;
  if ( a3 == 99 || a3 == 115 )
    v4 = 1;
  return ((a1 & 4) != 0) == v4;
}

// Address: 0x1000B02A
char *__thiscall __crt_stdio_output::formatting_buffer::scratch_data<char>(_DWORD *this)
{
  int v2; // edi
  int v3; // eax

  v2 = *(this + 257);
  v3 = __crt_stdio_output::formatting_buffer::count<char>(this);
  if ( v2 != 0 )
    return (char *)(v2 + v3);
  else
    return (char *)this + v3;
}

// Address: 0x1000B048
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_8(int *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  char *v8; // edi
  int v9; // ecx
  char v10; // dl
  int v11; // eax
  int result; // eax

  v5 = this + 16;
  v6 = (_DWORD *)v5[257];
  if ( v6 == nullptr )
    v6 = v5;
  v8 = (char *)v6 + __crt_stdio_output::formatting_buffer::count<char>(v5) - 1;
  for ( *(this + 13) = (int)v8; ; --*(this + 13) )
  {
    v9 = *(this + 10);
    if ( v9 <= 0 && a2 == 0 )
      break;
    v10 = a2 % a3 + 48;
    *(this + 10) = v9 - 1;
    a2 /= a3;
    if ( v10 > 57 )
      v10 += a4 == 0 ? 39 : 7;
    *(_BYTE *)*(this + 13) = v10;
  }
  v11 = *(this + 13);
  *(this + 14) = (int)&v8[-v11];
  result = v11 + 1;
  *(this + 13) = result;
  return result;
}

// Address: 0x1000B0BD
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_9(int *this, unsigned int a2, unsigned int a3, unsigned int a4, char a5)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // edi
  unsigned __int64 v8; // rax
  char *v10; // edi
  int v11; // ecx
  unsigned __int64 v12; // rcx
  char v13; // cl
  int v14; // eax
  int result; // eax
  unsigned __int64 v16; // [esp-10h] [ebp-24h]

  v6 = this + 16;
  v7 = (_DWORD *)v6[257];
  if ( v7 == nullptr )
    v7 = v6;
  v8 = __PAIR64__(a3, __crt_stdio_output::formatting_buffer::count<char>(v6));
  v10 = (char *)v7 + v8 - 1;
  for ( *(this + 13) = (int)v10; ; --*(this + 13) )
  {
    v11 = *(this + 10);
    if ( v11 <= 0 && (HIDWORD(v8) | a2) == 0 )
      break;
    v16 = __PAIR64__(HIDWORD(v8), a2);
    *(this + 10) = v11 - 1;
    v12 = __PAIR64__(HIDWORD(v8), a2) % a4;
    v8 = v16 / a4;
    v13 = v12 + 48;
    a2 = v8;
    if ( v13 > 57 )
      v13 += a5 == 0 ? 39 : 7;
    *(_BYTE *)*(this + 13) = v13;
  }
  v14 = *(this + 13);
  *(this + 14) = (int)&v10[-v14];
  result = v14 + 1;
  *(this + 13) = result;
  return result;
}

// Address: 0x1000B145
int __cdecl __crt_stdio_output::write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>(
        int a1,
        char a2,
        int a3,
        _DWORD *a4)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < a3; ++i )
  {
    result = __crt_stdio_output::stream_output_adapter<char>::write_character(a2, a4);
    if ( *a4 == -1 )
      break;
  }
  return result;
}

// Address: 0x1000B171
int __cdecl __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>(
        int a1,
        char a2,
        int a3,
        _DWORD *a4)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < a3; ++i )
  {
    result = __crt_stdio_output::string_output_adapter<wchar_t>::write_character(a2, a4);
    if ( *a4 == -1 )
      break;
  }
  return result;
}

// Address: 0x1000B1A2
_DWORD *__thiscall __crt_stdio_output::common_data<char>::common_data<char>(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *((_WORD *)this + 24) = 0;
  *(this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *(this + 272) = 0;
  *(this + 273) = 0;
  return this;
}

// Address: 0x1000B1E9
_WORD *__thiscall __crt_stdio_output::common_data<wchar_t>::common_data<wchar_t>(_WORD *this)
{
  *(_DWORD *)this = 0;
  *(this + 25) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_DWORD *)this + 272) = 0;
  *((_DWORD *)this + 273) = 0;
  return this;
}

// Address: 0x1000B235
// Microsoft VisualC universal runtime
_DWORD *__thiscall unknown_libname_10(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  __crt_stdio_output::common_data<char>::common_data<char>(this);
  *(this + 274) = *a2;
  *this = a3;
  *(this + 1) = a4;
  *(this + 2) = a6;
  *(this + 4) = a5;
  *(this + 5) = a7;
  return this;
}

// Address: 0x1000B271
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_11(int this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  __crt_stdio_output::common_data<wchar_t>::common_data<wchar_t>((_WORD *)this);
  *(_DWORD *)(this + 1096) = *a2;
  *(_DWORD *)this = a3;
  *(_DWORD *)(this + 4) = a4;
  *(_DWORD *)(this + 8) = a6;
  *(_DWORD *)(this + 16) = a5;
  *(_DWORD *)(this + 20) = a7;
  return this;
}

// Address: 0x1000B2AD
// Microsoft VisualC universal runtime
_DWORD *__thiscall unknown_libname_12(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  unknown_libname_10(this, a2, a3, a4, a5, a6, a7);
  *(this + 276) = 0;
  *(this + 3) = _errno();
  return this;
}

// Address: 0x1000B2E2
// Microsoft VisualC universal runtime
_DWORD *__thiscall unknown_libname_13(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  unknown_libname_11((int)this, a2, a3, a4, a5, a6, a7);
  *(this + 276) = 0;
  *(this + 3) = _errno();
  return this;
}

// Address: 0x1000B317
_LocaleUpdate *__thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this, struct __crt_locale_pointers *const a2)
{
  struct __crt_multibyte_data *mbcinfo; // eax
  int v4; // eax
  int v5; // eax

  *((_BYTE *)this + 12) = 0;
  if ( a2 != nullptr )
  {
    *((_DWORD *)this + 1) = a2->locinfo;
    mbcinfo = a2->mbcinfo;
LABEL_5:
    *((_DWORD *)this + 2) = mbcinfo;
    return this;
  }
  if ( dword_10025F1C == 0 )
  {
    *((_DWORD *)this + 1) = off_100251B0;
    mbcinfo = (struct __crt_multibyte_data *)off_100251B4;
    goto LABEL_5;
  }
  v4 = __acrt_getptd();
  *(_DWORD *)this = v4;
  *((_DWORD *)this + 1) = *(_DWORD *)(v4 + 76);
  *((_DWORD *)this + 2) = *(_DWORD *)(v4 + 72);
  sub_1000FFB8(v4, (char *)this + 4);
  sub_1000FFE5(*(_DWORD *)this, (char *)this + 8);
  v5 = *(_DWORD *)(*(_DWORD *)this + 848);
  if ( (v5 & 2) == 0 )
  {
    *(_DWORD *)(*(_DWORD *)this + 848) = v5 | 2;
    *((_BYTE *)this + 12) = 1;
  }
  return this;
}

// Address: 0x1000B39A
void __thiscall __crt_stdio_output::formatting_buffer::~formatting_buffer(void **this)
{
  _free_base(*(this + 257));
  *(this + 257) = nullptr;
}

// Address: 0x1000B3B4
// Microsoft VisualC universal runtime
void **__thiscall unknown_libname_14(void **this, void **a2)
{
  _free_base(*this);
  *this = nullptr;
  *this = *a2;
  *a2 = nullptr;
  return this;
}

// Address: 0x1000B3D8
int __thiscall _lambda_0a97c9e57da7be065955385c79108ff2_::operator()(int **this)
{
  FILE *v2; // edi
  int v3; // esi
  int v5; // [esp+8h] [ebp-478h] BYREF
  char v6[16]; // [esp+Ch] [ebp-474h] BYREF
  char v7[4]; // [esp+1Ch] [ebp-464h]
  int v8; // [esp+20h] [ebp-460h] BYREF
  _DWORD v9[16]; // [esp+24h] [ebp-45Ch] BYREF
  void *v10; // [esp+64h] [ebp-41Ch] BYREF

  v2 = (FILE *)**this;
  v7[0] = __acrt_stdio_begin_temporary_buffering_nolock(v2);
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v5, (struct __crt_locale_pointers *const)**(this + 1));
  v8 = **this;
  unknown_libname_12(v9, &v8, **(this + 2), (*(this + 2))[1], **(this + 3), (int)v6, **(this + 4));
  v3 = sub_1000B69F(v9);
  __crt_stdio_output::formatting_buffer::~formatting_buffer(&v10);
  if ( v6[8] != 0 )
    *(_DWORD *)(v5 + 848) &= ~2u;
  __acrt_stdio_end_temporary_buffering_nolock(v7[0], v2);
  return v3;
}

// Address: 0x1000B495
void __cdecl __crt_stdio_output::crop_zeroes(__crt_stdio_output *this, char *a2)
{
  char v3; // bl
  char v4; // al
  char *v5; // ecx
  char v6; // al
  char *v7; // edx
  char v8; // al

  v3 = ***(_BYTE ***)(*(_DWORD *)a2 + 136);
  while ( *(_BYTE *)this != 0 && *(_BYTE *)this != v3 )
    this = (__crt_stdio_output *)((char *)this + 1);
  v4 = *(_BYTE *)this;
  v5 = (char *)this + 1;
  if ( v4 != 0 )
  {
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == 0 || v6 == 101 || v6 == 69 )
        break;
      ++v5;
    }
    v7 = v5;
    do
      --v5;
    while ( *v5 == 48 );
    if ( *v5 == v3 )
      --v5;
    do
    {
      v8 = *v7;
      ++v5;
      ++v7;
      *v5 = v8;
    }
    while ( v8 != 0 );
  }
}

// Address: 0x1000B4EC
// Microsoft VisualC universal runtime
int __stdcall unknown_libname_15(char a1, int a2)
{
  int v2; // ecx

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_1001CC10[a1] & 0xF;
  return (unsigned __int8)byte_1001CC30[8 * v2 + a2] >> 4;
}

// Address: 0x1000B51E
// Microsoft VisualC universal runtime
int __stdcall unknown_libname_16(unsigned __int16 a1, int a2)
{
  int v2; // eax

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_1001CC70[a1] & 0xF;
  return (unsigned __int8)byte_1001CC90[9 * v2 + a2] >> 4;
}

// Address: 0x1000B555
// Microsoft VisualC universal runtime
int __stdcall unknown_libname_17(unsigned __int16 a1, int a2)
{
  int v2; // ecx

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_1001CC10[a1] & 0xF;
  return (unsigned __int8)byte_1001CC30[8 * v2 + a2] >> 4;
}

// Address: 0x1000B589
void __cdecl __crt_stdio_output::force_decimal_point(__crt_stdio_output *this, char *a2)
{
  __crt_stdio_output *v2; // esi
  bool i; // zf
  char v4; // cl
  char *v5; // esi
  char v6; // al
  char v7; // al

  v2 = this;
  for ( i = tolower(*(char *)this) == 101; !i; i = isdigit(*(unsigned __int8 *)v2) == 0 )
    v2 = (__crt_stdio_output *)((char *)v2 + 1);
  if ( tolower(*(char *)v2) == 120 )
    v2 = (__crt_stdio_output *)((char *)v2 + 2);
  v4 = *(_BYTE *)v2;
  *(_BYTE *)v2 = ***(_BYTE ***)(*(_DWORD *)a2 + 136);
  v5 = (char *)v2 + 1;
  do
  {
    v6 = *v5;
    *v5 = v4;
    v4 = v6;
    v7 = *v5++;
  }
  while ( v7 != 0 );
}

// Address: 0x1000B5E5
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_18(int **this, int *a2)
{
  int *v3; // edi
  int v4; // ebx
  int v5; // eax
  char result; // al
  char *EndPtr; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(this + 3);
  v4 = *v3;
  *v3 = 0;
  v5 = (int)*(this + 4);
  EndPtr = nullptr;
  *a2 = strtol((const char *)(v5 - 1), &EndPtr, 10);
  if ( **(this + 3) == 34 || EndPtr < (char *)*(this + 4) )
  {
    result = 0;
  }
  else
  {
    *(this + 4) = (int *)EndPtr;
    result = 1;
  }
  if ( *v3 == 0 && v4 != 0 )
    *v3 = v4;
  return result;
}

// Address: 0x1000B641
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_19(int **this, int *a2)
{
  int *v3; // edi
  int v4; // ebx
  int v5; // eax
  char result; // al
  wchar_t *EndPtr; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(this + 3);
  v4 = *v3;
  *v3 = 0;
  v5 = (int)*(this + 4);
  EndPtr = nullptr;
  *a2 = wcstol((const wchar_t *)(v5 - 2), &EndPtr, 10);
  if ( **(this + 3) == 34 || EndPtr < (wchar_t *)*(this + 4) )
  {
    result = 0;
  }
  else
  {
    *(this + 4) = (int *)EndPtr;
    result = 1;
  }
  if ( *v3 == 0 && v4 != 0 )
    *v3 = v4;
  return result;
}

// Address: 0x1000B69F
int __thiscall sub_1000B69F(int this)
{
  int v3; // eax
  char v4; // al
  char v5; // al

  if ( (unsigned __int8)unknown_libname_33(this + 1096) == 0 )
    return -1;
  if ( *(_DWORD *)(this + 16) != 0 )
  {
LABEL_21:
    while ( ++*(_DWORD *)(this + 1104) != 2 )
    {
      *(_DWORD *)(this + 56) = 0;
      *(_DWORD *)(this + 28) = 0;
      while ( 1 )
      {
        v5 = **(_BYTE **)(this + 16);
        *(_BYTE *)(this + 49) = v5;
        if ( v5 == 0 )
          break;
        ++*(_DWORD *)(this + 16);
        if ( *(int *)(this + 24) < 0 )
          goto LABEL_21;
        v3 = unknown_libname_15(*(_BYTE *)(this + 49), *(_DWORD *)(this + 28));
        *(_DWORD *)(this + 28) = v3;
        if ( v3 == 8 )
          goto LABEL_4;
        switch ( v3 )
        {
          case 0:
            v4 = sub_1000BA85(this);
            break;
          case 1:
            *(_DWORD *)(this + 40) = -1;
            *(_DWORD *)(this + 36) = 0;
            *(_BYTE *)(this + 48) = 0;
            *(_DWORD *)(this + 32) = 0;
            *(_DWORD *)(this + 44) = 0;
            *(_BYTE *)(this + 60) = 0;
            continue;
          case 2:
            v4 = unknown_libname_20(this);
            break;
          case 3:
            v4 = sub_1000C32B(this);
            break;
          case 4:
            *(_DWORD *)(this + 40) = 0;
            continue;
          case 5:
            v4 = sub_1000BB69(this);
            break;
          case 6:
            v4 = sub_1000BBBA(this);
            break;
          case 7:
            v4 = sub_1000BE9F(this);
            break;
          default:
            return -1;
        }
        if ( v4 == 0 )
          return -1;
      }
      ++*(_DWORD *)(this + 16);
    }
    return *(_DWORD *)(this + 24);
  }
  else
  {
LABEL_4:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

// Address: 0x1000B7BB
int __thiscall sub_1000B7BB(int this)
{
  int v3; // eax
  char v4; // al
  __int16 v5; // ax

  if ( (unsigned __int8)unknown_libname_34(this + 1096) == 0 )
    return -1;
  if ( *(_DWORD *)(this + 16) != 0 )
  {
    while ( ++*(_DWORD *)(this + 1104) != 2 )
    {
      *(_DWORD *)(this + 56) = 0;
      *(_DWORD *)(this + 28) = 0;
      while ( 1 )
      {
        v5 = **(_WORD **)(this + 16);
        *(_WORD *)(this + 50) = v5;
        if ( v5 == 0 )
          break;
        *(_DWORD *)(this + 16) += 2;
        if ( *(int *)(this + 24) < 0 )
          goto LABEL_21;
        v3 = unknown_libname_16(*(_WORD *)(this + 50), *(_DWORD *)(this + 28));
        *(_DWORD *)(this + 28) = v3;
        if ( v3 == 8 )
          goto LABEL_4;
        switch ( v3 )
        {
          case 0:
            v4 = sub_1000BAA4(this);
            break;
          case 1:
            *(_DWORD *)(this + 40) = -1;
            *(_DWORD *)(this + 36) = 0;
            *(_BYTE *)(this + 48) = 0;
            *(_DWORD *)(this + 32) = 0;
            *(_DWORD *)(this + 44) = 0;
            *(_BYTE *)(this + 60) = 0;
            continue;
          case 2:
            v4 = unknown_libname_21(this);
            break;
          case 3:
            v4 = sub_1000C356(this);
            break;
          case 4:
            *(_DWORD *)(this + 40) = 0;
            continue;
          case 5:
            v4 = sub_1000BB91(this);
            break;
          case 6:
            v4 = sub_1000BD23(this);
            break;
          case 7:
            v4 = sub_1000C0CE(this);
            break;
          default:
            return -1;
        }
        if ( v4 == 0 )
          return -1;
      }
      *(_DWORD *)(this + 16) += 2;
LABEL_21:
      if ( (unsigned __int8)unknown_libname_35(this) == 0 )
        return -1;
    }
    return *(_DWORD *)(this + 24);
  }
  else
  {
LABEL_4:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

// Address: 0x1000B8EB
int __thiscall sub_1000B8EB(int this)
{
  int v3; // eax
  char v4; // al
  __int16 v5; // ax

  if ( (unsigned __int8)unknown_libname_34(this + 1096) == 0 )
    return -1;
  if ( *(_DWORD *)(this + 16) != 0 )
  {
LABEL_21:
    while ( ++*(_DWORD *)(this + 1104) != 2 )
    {
      *(_DWORD *)(this + 56) = 0;
      *(_DWORD *)(this + 28) = 0;
      while ( 1 )
      {
        v5 = **(_WORD **)(this + 16);
        *(_WORD *)(this + 50) = v5;
        if ( v5 == 0 )
          break;
        *(_DWORD *)(this + 16) += 2;
        if ( *(int *)(this + 24) < 0 )
          goto LABEL_21;
        v3 = unknown_libname_17(*(_WORD *)(this + 50), *(_DWORD *)(this + 28));
        *(_DWORD *)(this + 28) = v3;
        if ( v3 == 8 )
          goto LABEL_4;
        switch ( v3 )
        {
          case 0:
            v4 = sub_1000BAA4(this);
            break;
          case 1:
            *(_DWORD *)(this + 40) = -1;
            *(_DWORD *)(this + 36) = 0;
            *(_BYTE *)(this + 48) = 0;
            *(_DWORD *)(this + 32) = 0;
            *(_DWORD *)(this + 44) = 0;
            *(_BYTE *)(this + 60) = 0;
            continue;
          case 2:
            v4 = unknown_libname_21(this);
            break;
          case 3:
            v4 = sub_1000C356(this);
            break;
          case 4:
            *(_DWORD *)(this + 40) = 0;
            continue;
          case 5:
            v4 = sub_1000BB91(this);
            break;
          case 6:
            v4 = sub_1000BD23(this);
            break;
          case 7:
            v4 = sub_1000C0CE(this);
            break;
          default:
            return -1;
        }
        if ( v4 == 0 )
          return -1;
      }
      *(_DWORD *)(this + 16) += 2;
    }
    return *(_DWORD *)(this + 24);
  }
  else
  {
LABEL_4:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

// Address: 0x1000BA0B
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_20(int this)
{
  switch ( *(_BYTE *)(this + 49) )
  {
    case ' ':
      *(_DWORD *)(this + 32) |= 2u;
      break;
    case '#':
      *(_DWORD *)(this + 32) |= 0x20u;
      break;
    case '+':
      *(_DWORD *)(this + 32) |= 1u;
      break;
    case '-':
      *(_DWORD *)(this + 32) |= 4u;
      break;
    case '0':
      *(_DWORD *)(this + 32) |= 8u;
      break;
    default:
      break;
  }
  return 1;
}

// Address: 0x1000BA48
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_21(int this)
{
  switch ( *(_WORD *)(this + 50) )
  {
    case ' ':
      *(_DWORD *)(this + 32) |= 2u;
      break;
    case '#':
      *(_DWORD *)(this + 32) |= 0x20u;
      break;
    case '+':
      *(_DWORD *)(this + 32) |= 1u;
      break;
    case '-':
      *(_DWORD *)(this + 32) |= 4u;
      break;
    case '0':
      *(_DWORD *)(this + 32) |= 8u;
      break;
    default:
      break;
  }
  return 1;
}

// Address: 0x1000BA85
char sub_1000BA85()
{
  if ( (unsigned __int8)sub_1000BAC3() != 0 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x1000BAA4
char sub_1000BAA4()
{
  if ( (unsigned __int8)unknown_libname_22() != 0 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x1000BAC3
char __thiscall sub_1000BAC3(char *this)
{
  char result; // al

  result = unknown_libname_23(0);
  if ( result != 0 )
  {
    __crt_stdio_output::stream_output_adapter<char>::write_character(*(this + 49), this + 24);
    return 1;
  }
  return result;
}

// Address: 0x1000BAED
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_22(int this)
{
  *(_BYTE *)(this + 60) = 1;
  __crt_stdio_output::string_output_adapter<wchar_t>::write_character(*(_WORD *)(this + 50), this + 24);
  return 1;
}

// Address: 0x1000BB08
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_23(int this, int a2)
{
  _DWORD **v3; // eax
  unsigned __int8 v4; // cl
  _BYTE *v5; // ecx
  bool v6; // zf

  v3 = *(_DWORD ***)(this + 8);
  v4 = *(_BYTE *)(this + 49);
  *(_BYTE *)(this + 60) = 0;
  if ( *(__int16 *)(**v3 + 2 * v4) >= 0 )
    return 1;
  __crt_stdio_output::stream_output_adapter<char>::write_character(v4, this + 24);
  v5 = *(_BYTE **)(this + 16);
  *(_BYTE *)(this + 49) = *v5;
  v6 = *(_BYTE *)(this + 49) == 0;
  *(_DWORD *)(this + 16) = v5 + 1;
  if ( !v6 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x1000BB69
char __thiscall sub_1000BB69(int this)
{
  int v2; // eax

  if ( *(_BYTE *)(this + 49) != 42 )
    return unknown_libname_18((int **)this, (int *)(this + 40));
  *(_DWORD *)(this + 20) += 4;
  v2 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *(_DWORD *)(this + 40) = v2;
  if ( v2 < 0 )
    *(_DWORD *)(this + 40) = -1;
  return 1;
}

// Address: 0x1000BB91
char __thiscall sub_1000BB91(int this)
{
  int v2; // eax

  if ( *(_WORD *)(this + 50) != 42 )
    return unknown_libname_19((int **)this, (int *)(this + 40));
  *(_DWORD *)(this + 20) += 4;
  v2 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *(_DWORD *)(this + 40) = v2;
  if ( v2 < 0 )
    *(_DWORD *)(this + 40) = -1;
  return 1;
}

// Address: 0x1000BBBA
char __thiscall sub_1000BBBA(_BYTE *this)
{
  char v1; // al
  _BYTE *v3; // eax
  char *v4; // edx
  char v5; // al
  _BYTE *v6; // eax

  v1 = *(this + 49);
  if ( v1 == 70 )
  {
    if ( (*(_DWORD *)this & 8) == 0 )
    {
      *((_DWORD *)this + 7) = 7;
      return sub_1000BE9F(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_DWORD *)this & 8) == 0 )
    {
      *((_DWORD *)this + 7) = 8;
LABEL_7:
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 11) != 0 )
      goto LABEL_7;
    if ( v1 > 106 )
    {
      switch ( v1 )
      {
        case 'l':
          v6 = *((_BYTE **)this + 4);
          if ( *v6 == 108 )
          {
            *((_DWORD *)this + 11) = 4;
            *((_DWORD *)this + 4) = v6 + 1;
          }
          else
          {
            *((_DWORD *)this + 11) = 3;
          }
          break;
        case 't':
          *((_DWORD *)this + 11) = 7;
          break;
        case 'w':
          *((_DWORD *)this + 11) = 12;
          break;
        case 'z':
          *((_DWORD *)this + 11) = 6;
          break;
        default:
          break;
      }
    }
    else
    {
      switch ( v1 )
      {
        case 'j':
          *((_DWORD *)this + 11) = 5;
          break;
        case 'I':
          v4 = *((char **)this + 4);
          v5 = *v4;
          if ( *v4 == 51 && v4[1] == 50 )
          {
            *((_DWORD *)this + 11) = 10;
            *((_DWORD *)this + 4) = v4 + 2;
          }
          else if ( v5 == 54 && v4[1] == 52 )
          {
            *((_DWORD *)this + 11) = 11;
            *((_DWORD *)this + 4) = v4 + 2;
          }
          else if ( v5 == 100 || v5 == 105 || v5 == 111 || v5 == 117 || v5 == 120 || v5 == 88 )
          {
            *((_DWORD *)this + 11) = 9;
          }
          break;
        case 'L':
          *((_DWORD *)this + 11) = 8;
          break;
        case 'T':
          *((_DWORD *)this + 11) = 13;
          break;
        case 'h':
          v3 = *((_BYTE **)this + 4);
          if ( *v3 == 104 )
          {
            *((_DWORD *)this + 11) = 1;
            *((_DWORD *)this + 4) = v3 + 1;
          }
          else
          {
            *((_DWORD *)this + 11) = 2;
          }
          break;
        default:
          break;
      }
    }
  }
  return 1;
}

// Address: 0x1000BD23
char __thiscall sub_1000BD23(_DWORD *this)
{
  int v1; // eax
  _WORD *v3; // eax
  unsigned __int16 *v4; // edx
  int v5; // eax
  _WORD *v6; // eax

  v1 = *((unsigned __int16 *)this + 25);
  if ( v1 == 70 )
  {
    if ( (*this & 8) == 0 )
    {
      *(this + 7) = 7;
      return sub_1000C0CE(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*this & 8) == 0 )
    {
      *(this + 7) = 8;
LABEL_7:
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(this + 11) != 0 )
      goto LABEL_7;
    if ( *((unsigned __int16 *)this + 25) > 0x6Au )
    {
      switch ( v1 )
      {
        case 'l':
          v6 = (_WORD *)*(this + 4);
          if ( *v6 == 108 )
          {
            *(this + 11) = 4;
            *(this + 4) = v6 + 1;
          }
          else
          {
            *(this + 11) = 3;
          }
          break;
        case 't':
          *(this + 11) = 7;
          break;
        case 'w':
          *(this + 11) = 12;
          break;
        case 'z':
          *(this + 11) = 6;
          break;
        default:
          break;
      }
    }
    else
    {
      switch ( v1 )
      {
        case 'j':
          *(this + 11) = 5;
          break;
        case 'I':
          v4 = (unsigned __int16 *)*(this + 4);
          v5 = *v4;
          if ( v5 == 51 && v4[1] == 50 )
          {
            *(this + 11) = 10;
            *(this + 4) = v4 + 2;
          }
          else if ( v5 == 54 && v4[1] == 52 )
          {
            *(this + 11) = 11;
            *(this + 4) = v4 + 2;
          }
          else if ( v5 == 100 || v5 == 105 || v5 == 111 || v5 == 117 || v5 == 120 || v5 == 88 )
          {
            *(this + 11) = 9;
          }
          break;
        case 'L':
          *(this + 11) = 8;
          break;
        case 'T':
          *(this + 11) = 13;
          break;
        case 'h':
          v3 = (_WORD *)*(this + 4);
          if ( *v3 == 104 )
          {
            *(this + 11) = 1;
            *(this + 4) = v3 + 1;
          }
          else
          {
            *(this + 11) = 2;
          }
          break;
        default:
          break;
      }
    }
  }
  return 1;
}

// Address: 0x1000BE9F
char __thiscall sub_1000BE9F(int this)
{
  char v2; // bl
  int v3; // eax
  char v4; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // edi
  char v12; // cl
  bool v13; // al
  bool v14; // al
  int v15; // ebx
  int v16; // [esp-4h] [ebp-10h]
  __int16 v17; // [esp+8h] [ebp-4h] BYREF
  char v18; // [esp+Ah] [ebp-2h]

  v2 = 1;
  v3 = *(char *)(this + 49);
  if ( v3 <= 100 )
  {
    if ( v3 != 100 )
    {
      if ( v3 > 88 )
      {
        v6 = v3 - 90;
        if ( v6 == 0 )
        {
          v4 = unknown_libname_24(this);
          goto LABEL_11;
        }
        v7 = v6 - 7;
        if ( v7 == 0 )
          goto LABEL_31;
        if ( v7 != 2 )
          return 0;
        goto LABEL_18;
      }
      if ( v3 != 88 )
      {
        if ( v3 != 65 )
        {
          if ( v3 != 67 )
          {
            if ( v3 <= 68 )
              return 0;
            if ( v3 > 71 )
            {
              if ( v3 == 83 )
              {
LABEL_10:
                v4 = unknown_libname_31(this);
                goto LABEL_11;
              }
              return 0;
            }
            goto LABEL_31;
          }
LABEL_18:
          v4 = unknown_libname_28(0);
          goto LABEL_11;
        }
LABEL_31:
        v4 = unknown_libname_26(this);
        goto LABEL_11;
      }
      v16 = 1;
LABEL_14:
      v4 = sub_1000C898(16, v16);
      goto LABEL_11;
    }
    goto LABEL_28;
  }
  if ( v3 > 112 )
  {
    v8 = v3 - 115;
    if ( v8 == 0 )
      goto LABEL_10;
    v9 = v8 - 2;
    if ( v9 != 0 )
    {
      if ( v9 != 3 )
        return 0;
      v16 = 0;
      goto LABEL_14;
    }
    goto LABEL_29;
  }
  if ( v3 == 112 )
  {
    v4 = sub_1000CA75(this);
    goto LABEL_11;
  }
  if ( v3 <= 103 )
    goto LABEL_31;
  switch ( v3 )
  {
    case 'i':
LABEL_28:
      *(_DWORD *)(this + 32) |= 0x10u;
LABEL_29:
      v4 = sub_1000C898(10, 0);
      break;
    case 'n':
      v4 = unknown_libname_30(this);
      break;
    case 'o':
      v4 = sub_1000CA56(this);
      break;
    default:
      return 0;
  }
LABEL_11:
  if ( v4 == 0 )
    return 0;
  if ( *(_BYTE *)(this + 48) != 0 )
    return 1;
  v10 = *(_DWORD *)(this + 32);
  v17 = 0;
  v11 = 0;
  v18 = 0;
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      LOBYTE(v17) = 45;
LABEL_46:
      v11 = 1;
      goto LABEL_47;
    }
    if ( (v10 & 1) != 0 )
    {
      LOBYTE(v17) = 43;
      goto LABEL_46;
    }
    if ( (v10 & 2) != 0 )
    {
      LOBYTE(v17) = 32;
      goto LABEL_46;
    }
  }
LABEL_47:
  v12 = *(_BYTE *)(this + 49);
  if ( v12 != 120 && v12 != 88 || (v10 & 0x20) == 0 )
    v2 = 0;
  v13 = v12 == 97 || v12 == 65;
  if ( v2 != 0 || v13 )
  {
    *((_BYTE *)&v17 + v11) = 48;
    v14 = v12 == 88 || v12 == 65;
    *((_BYTE *)&v17 + v11 + 1) = !v14 ? 120 : 88;
    v11 += 2;
  }
  v15 = *(_DWORD *)(this + 36) - *(_DWORD *)(this + 56) - v11;
  if ( (v10 & 0xC) == 0 )
    __crt_stdio_output::write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>(
      this + 1096,
      32,
      v15,
      (_DWORD *)(this + 24));
  __crt_stdio_output::stream_output_adapter<char>::write_string(&v17, v11, this + 24, *(_DWORD *)(this + 12));
  if ( (*(_DWORD *)(this + 32) & 8) != 0 && (*(_DWORD *)(this + 32) & 4) == 0 )
    __crt_stdio_output::write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>(
      this + 1096,
      48,
      v15,
      (_DWORD *)(this + 24));
  unknown_libname_36(0);
  if ( *(int *)(this + 24) >= 0 && (*(_DWORD *)(this + 32) & 4) != 0 )
    __crt_stdio_output::write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>(
      this + 1096,
      32,
      v15,
      (_DWORD *)(this + 24));
  return 1;
}

// Address: 0x1000C0CE
char __thiscall sub_1000C0CE(int this)
{
  int v2; // ebx
  unsigned int v3; // eax
  char v4; // al
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  bool v12; // ah
  bool v13; // al
  bool v14; // al
  int v15; // edi
  __int16 v16; // [esp-8h] [ebp-1Ch]
  int v17; // [esp-4h] [ebp-18h]
  int Src; // [esp+8h] [ebp-Ch] BYREF
  __int16 v19; // [esp+Ch] [ebp-8h]

  v2 = 0;
  v3 = *(unsigned __int16 *)(this + 50);
  if ( v3 <= 0x64 )
  {
    if ( v3 != 100 )
    {
      if ( *(unsigned __int16 *)(this + 50) > 0x58u )
      {
        v6 = v3 - 90;
        if ( v6 == 0 )
        {
          v4 = unknown_libname_25(this);
          goto LABEL_11;
        }
        v7 = v6 - 7;
        if ( v7 == 0 )
          goto LABEL_31;
        if ( v7 != 2 )
          return 0;
        goto LABEL_18;
      }
      if ( v3 != 88 )
      {
        if ( v3 != 65 )
        {
          if ( v3 != 67 )
          {
            if ( *(unsigned __int16 *)(this + 50) <= 0x44u )
              return 0;
            if ( *(unsigned __int16 *)(this + 50) > 0x47u )
            {
              if ( v3 == 83 )
              {
LABEL_10:
                v4 = sub_1000CB00(this);
                goto LABEL_11;
              }
              return 0;
            }
            goto LABEL_31;
          }
LABEL_18:
          v4 = unknown_libname_29(0);
          goto LABEL_11;
        }
LABEL_31:
        v4 = unknown_libname_27(this);
        goto LABEL_11;
      }
      v17 = 1;
LABEL_14:
      v4 = sub_1000C898(16, v17);
      goto LABEL_11;
    }
    goto LABEL_28;
  }
  if ( *(unsigned __int16 *)(this + 50) > 0x70u )
  {
    v8 = v3 - 115;
    if ( v8 == 0 )
      goto LABEL_10;
    v9 = v8 - 2;
    if ( v9 != 0 )
    {
      if ( v9 != 3 )
        return 0;
      v17 = 0;
      goto LABEL_14;
    }
    goto LABEL_29;
  }
  if ( v3 == 112 )
  {
    v4 = sub_1000CA75(this);
    goto LABEL_11;
  }
  if ( *(unsigned __int16 *)(this + 50) <= 0x67u )
    goto LABEL_31;
  switch ( v3 )
  {
    case 'i':
LABEL_28:
      *(_DWORD *)(this + 32) |= 0x10u;
LABEL_29:
      v4 = sub_1000C898(10, 0);
      break;
    case 'n':
      v4 = unknown_libname_30(this);
      break;
    case 'o':
      v4 = sub_1000CA56(this);
      break;
    default:
      return 0;
  }
LABEL_11:
  if ( v4 == 0 )
    return 0;
  if ( *(_BYTE *)(this + 48) == 0 )
  {
    v10 = *(_DWORD *)(this + 32);
    Src = 0;
    v19 = 0;
    if ( (v10 & 0x10) != 0 )
    {
      if ( (v10 & 0x40) != 0 )
      {
        v16 = 45;
LABEL_41:
        LOWORD(Src) = v16;
LABEL_46:
        v2 = 1;
        goto LABEL_47;
      }
      if ( (v10 & 1) != 0 )
      {
        v16 = 43;
        goto LABEL_41;
      }
      if ( (v10 & 2) != 0 )
      {
        LOWORD(Src) = 32;
        goto LABEL_46;
      }
    }
LABEL_47:
    v11 = *(unsigned __int16 *)(this + 50);
    v12 = (v11 == 120 || (_WORD)v11 == 88) && (v10 & 0x20) != 0;
    v13 = v11 == 97 || (_WORD)v11 == 65;
    if ( v12 || v13 )
    {
      *((_WORD *)&Src + v2) = 48;
      v14 = (_WORD)v11 == 88 || (_WORD)v11 == 65;
      *((_WORD *)&Src + v2 + 1) = !v14 ? 120 : 88;
      v2 += 2;
    }
    v15 = *(_DWORD *)(this + 36) - *(_DWORD *)(this + 56) - v2;
    if ( (v10 & 0xC) == 0 )
      __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>(
        this + 1096,
        32,
        v15,
        (_DWORD *)(this + 24));
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string(&Src, v2, this + 24, *(_DWORD *)(this + 12));
    if ( (*(_DWORD *)(this + 32) & 8) != 0 && (*(_DWORD *)(this + 32) & 4) == 0 )
      __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>(
        this + 1096,
        48,
        v15,
        (_DWORD *)(this + 24));
    unknown_libname_37(0);
    if ( *(int *)(this + 24) >= 0 && (*(_DWORD *)(this + 32) & 4) != 0 )
      __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>(
        this + 1096,
        32,
        v15,
        (_DWORD *)(this + 24));
  }
  return 1;
}

// Address: 0x1000C32B
char __thiscall sub_1000C32B(int this)
{
  int v2; // eax

  if ( *(_BYTE *)(this + 49) != 42 )
    return unknown_libname_18((int **)this, (int *)(this + 36));
  *(_DWORD *)(this + 20) += 4;
  v2 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *(_DWORD *)(this + 36) = v2;
  if ( v2 < 0 )
  {
    *(_DWORD *)(this + 32) |= 4u;
    *(_DWORD *)(this + 36) = -*(_DWORD *)(this + 36);
  }
  return 1;
}

// Address: 0x1000C356
char __thiscall sub_1000C356(int this)
{
  int v2; // eax

  if ( *(_WORD *)(this + 50) != 42 )
    return unknown_libname_19((int **)this, (int *)(this + 36));
  *(_DWORD *)(this + 20) += 4;
  v2 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *(_DWORD *)(this + 36) = v2;
  if ( v2 < 0 )
  {
    *(_DWORD *)(this + 32) |= 4u;
    *(_DWORD *)(this + 36) = -*(_DWORD *)(this + 36);
  }
  return 1;
}

// Address: 0x1000C382
int __cdecl __crt_stdio_output::to_integer_size(int a1)
{
  int result; // eax
  int v2; // [esp-4h] [ebp-4h]

  switch ( a1 )
  {
    case 0:
    case 3:
    case 6:
    case 7:
    case 9:
    case 10:
      v2 = 4;
      goto LABEL_3;
    case 1:
      return 1;
    case 2:
      v2 = 2;
      goto LABEL_3;
    case 4:
    case 5:
    case 11:
      v2 = 8;
LABEL_3:
      result = v2;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// Address: 0x1000C3DE
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_24(int this)
{
  unsigned __int16 *v2; // edi
  int v3; // ebx
  bool is_wide_character; // al
  bool v5; // zf
  unsigned int v6; // eax

  *(_DWORD *)(this + 20) += 4;
  v2 = *(unsigned __int16 **)(*(_DWORD *)(this + 20) - 4);
  if ( v2 == nullptr || (v3 = *((_DWORD *)v2 + 1)) == 0 )
  {
    *(_DWORD *)(this + 52) = "(null)";
    *(_DWORD *)(this + 56) = 6;
    goto LABEL_7;
  }
  is_wide_character = __crt_stdio_output::is_wide_character_specifier<char>(
                        *(_DWORD *)this,
                        *(_DWORD *)(this + 4),
                        *(_BYTE *)(this + 49),
                        *(_DWORD *)(this + 44));
  *(_DWORD *)(this + 52) = v3;
  v5 = !is_wide_character;
  v6 = *v2;
  if ( v5 )
  {
    *(_DWORD *)(this + 56) = v6;
LABEL_7:
    *(_BYTE *)(this + 60) = 0;
    return 1;
  }
  *(_DWORD *)(this + 56) = v6 >> 1;
  *(_BYTE *)(this + 60) = 1;
  return 1;
}

// Address: 0x1000C441
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_25(void *this)
{
  unsigned __int16 *v2; // edi
  int v3; // ebx
  bool is_wide_character; // al
  bool v5; // zf
  unsigned int v6; // eax

  *((_DWORD *)this + 5) += 4;
  v2 = *(unsigned __int16 **)(*((_DWORD *)this + 5) - 4);
  if ( v2 == nullptr || (v3 = *((_DWORD *)v2 + 1)) == 0 )
  {
    *((_DWORD *)this + 13) = "(null)";
    *((_DWORD *)this + 14) = 6;
    goto LABEL_7;
  }
  is_wide_character = __crt_stdio_output::is_wide_character_specifier<wchar_t>(
                        *(_DWORD *)this,
                        *((_DWORD *)this + 1),
                        *((_WORD *)this + 25),
                        *((_DWORD *)this + 11));
  *((_DWORD *)this + 13) = v3;
  v5 = !is_wide_character;
  v6 = *v2;
  if ( v5 )
  {
    *((_DWORD *)this + 14) = v6;
LABEL_7:
    *((_BYTE *)this + 60) = 0;
    return 1;
  }
  *((_DWORD *)this + 14) = v6 >> 1;
  *((_BYTE *)this + 60) = 1;
  return 1;
}

// Address: 0x1000C4A4
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_26(char *this)
{
  int v2; // eax
  char v3; // al
  char v4; // al
  char *v5; // eax
  int v6; // eax
  char *v7; // ebx
  unsigned int v8; // eax
  char v9; // al
  _BYTE *v10; // eax
  const char *v11; // edx
  char v12; // al
  char *v14; // [esp-20h] [ebp-30h]
  rsize_t v15; // [esp-1Ch] [ebp-2Ch]
  int v16; // [esp-18h] [ebp-28h]
  size_t v17; // [esp-14h] [ebp-24h]
  int v18; // [esp-10h] [ebp-20h]
  int v19; // [esp-Ch] [ebp-1Ch]
  struct __crt_locale_pointers *v20; // [esp-8h] [ebp-18h]
  double v21; // [esp+8h] [ebp-8h] BYREF

  *((_DWORD *)this + 8) |= 0x10u;
  v2 = *((_DWORD *)this + 10);
  if ( v2 >= 0 )
  {
    if ( v2 == 0 )
    {
      v4 = *(this + 49);
      if ( v4 == 103 || v4 == 71 )
        *((_DWORD *)this + 10) = 1;
    }
  }
  else
  {
    v3 = *(this + 49);
    if ( v3 == 97 || v3 == 65 )
      *((_DWORD *)this + 10) = 13;
    else
      *((_DWORD *)this + 10) = 6;
  }
  if ( __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(
         (_DWORD *)this + 16,
         *((_DWORD *)this + 10) + 349) == 0 )
    *((_DWORD *)this + 10) = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)this + 16) - 349;
  v5 = *((char **)this + 273);
  if ( v5 == nullptr )
    v5 = this + 64;
  v21 = 0.0;
  *((_DWORD *)this + 13) = v5;
  *((_DWORD *)this + 5) += 8;
  v21 = *(double *)(*((_DWORD *)this + 5) - 8);
  v6 = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)this + 16);
  v7 = *((char **)this + 273);
  if ( v7 == nullptr )
    v7 = this + 64;
  v20 = *((struct __crt_locale_pointers **)this + 2);
  v19 = *((_DWORD *)this + 1);
  v18 = *(_DWORD *)this;
  v17 = *((_DWORD *)this + 10);
  v16 = *(this + 49);
  v15 = v6;
  v14 = __crt_stdio_output::formatting_buffer::scratch_data<char>((_DWORD *)this + 16);
  v8 = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)this + 16);
  __acrt_fp_format(&v21, v7, v8, v14, v15, v16, v17, v18, v19, v20);
  if ( (*((_DWORD *)this + 8) & 0x20) != 0 && *((_DWORD *)this + 10) == 0 )
    __crt_stdio_output::force_decimal_point(*((__crt_stdio_output **)this + 13), *((char **)this + 2));
  v9 = *(this + 49);
  if ( (v9 == 103 || v9 == 71) && (*((_DWORD *)this + 8) & 0x20) == 0 )
    __crt_stdio_output::crop_zeroes(*((__crt_stdio_output **)this + 13), *((char **)this + 2));
  v10 = *((_BYTE **)this + 13);
  if ( *v10 == 45 )
  {
    *((_DWORD *)this + 8) |= 0x40u;
    *((_DWORD *)this + 13) = v10 + 1;
  }
  v11 = *((const char **)this + 13);
  v12 = *v11;
  if ( *v11 == 105 || v12 == 73 || v12 == 110 || v12 == 78 )
    *(this + 49) = 115;
  *((_DWORD *)this + 14) = strlen(v11);
  return 1;
}

// Address: 0x1000C5FE
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_27(unsigned __int16 *this)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // ax
  char *v5; // eax
  int v6; // eax
  char *v7; // ebx
  unsigned int v8; // eax
  __int16 v9; // ax
  _BYTE *v10; // eax
  const char *v11; // edx
  char v12; // al
  char *v14; // [esp-20h] [ebp-30h]
  rsize_t v15; // [esp-1Ch] [ebp-2Ch]
  int v16; // [esp-18h] [ebp-28h]
  size_t v17; // [esp-14h] [ebp-24h]
  int v18; // [esp-10h] [ebp-20h]
  int v19; // [esp-Ch] [ebp-1Ch]
  struct __crt_locale_pointers *v20; // [esp-8h] [ebp-18h]
  double v21; // [esp+8h] [ebp-8h] BYREF

  *((_DWORD *)this + 8) |= 0x10u;
  v2 = *((_DWORD *)this + 10);
  if ( v2 >= 0 )
  {
    if ( v2 == 0 )
    {
      v4 = *(this + 25);
      if ( v4 == 103 || v4 == 71 )
        *((_DWORD *)this + 10) = 1;
    }
  }
  else
  {
    v3 = *(this + 25);
    if ( v3 == 97 || v3 == 65 )
      *((_DWORD *)this + 10) = 13;
    else
      *((_DWORD *)this + 10) = 6;
  }
  if ( __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(
         (_DWORD *)this + 16,
         *((_DWORD *)this + 10) + 349) == 0 )
    *((_DWORD *)this + 10) = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)this + 16) - 349;
  v5 = *((char **)this + 273);
  if ( v5 == nullptr )
    v5 = (char *)(this + 32);
  v21 = 0.0;
  *((_DWORD *)this + 13) = v5;
  *((_DWORD *)this + 5) += 8;
  v21 = *(double *)(*((_DWORD *)this + 5) - 8);
  v6 = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)this + 16);
  v7 = *((char **)this + 273);
  if ( v7 == nullptr )
    v7 = (char *)(this + 32);
  v20 = *((struct __crt_locale_pointers **)this + 2);
  v19 = *((_DWORD *)this + 1);
  v18 = *(_DWORD *)this;
  v17 = *((_DWORD *)this + 10);
  v16 = *((char *)this + 50);
  v15 = v6;
  v14 = __crt_stdio_output::formatting_buffer::scratch_data<char>((_DWORD *)this + 16);
  v8 = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)this + 16);
  __acrt_fp_format(&v21, v7, v8, v14, v15, v16, v17, v18, v19, v20);
  if ( (*((_DWORD *)this + 8) & 0x20) != 0 && *((_DWORD *)this + 10) == 0 )
    __crt_stdio_output::force_decimal_point(*((__crt_stdio_output **)this + 13), *((char **)this + 2));
  v9 = *(this + 25);
  if ( (v9 == 103 || v9 == 71) && (*((_DWORD *)this + 8) & 0x20) == 0 )
    __crt_stdio_output::crop_zeroes(*((__crt_stdio_output **)this + 13), *((char **)this + 2));
  v10 = *((_BYTE **)this + 13);
  if ( *v10 == 45 )
  {
    *((_DWORD *)this + 8) |= 0x40u;
    *((_DWORD *)this + 13) = v10 + 1;
  }
  v11 = *((const char **)this + 13);
  v12 = *v11;
  if ( *v11 == 105 || v12 == 73 || v12 == 110 || v12 == 78 )
    *(this + 25) = 115;
  *((_DWORD *)this + 14) = strlen(v11);
  return 1;
}

// Address: 0x1000C770
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_28(int this, int a2)
{
  int v3; // edi
  char *v4; // ebx
  rsize_t v5; // eax
  _BYTE *v6; // ecx
  wchar_t v8; // [esp-8h] [ebp-10h]

  v3 = this + 64;
  if ( __crt_stdio_output::is_wide_character_specifier<char>(
         *(_DWORD *)this,
         *(_DWORD *)(this + 4),
         *(_BYTE *)(this + 49),
         *(_DWORD *)(this + 44)) )
  {
    *(_DWORD *)(this + 20) += 4;
    v4 = *(char **)(this + 1092);
    if ( v4 == nullptr )
      v4 = (char *)(this + 64);
    v8 = *(_WORD *)(*(_DWORD *)(this + 20) - 4);
    v5 = __crt_stdio_output::formatting_buffer::count<char>((_DWORD *)(this + 64));
    if ( wctomb_s((int *)(this + 56), v4, v5, v8) != 0 )
      *(_BYTE *)(this + 48) = 1;
  }
  else
  {
    v6 = *(_BYTE **)(this + 1092);
    if ( v6 == nullptr )
      v6 = (_BYTE *)(this + 64);
    *(_DWORD *)(this + 20) += 4;
    *v6 = *(_BYTE *)(*(_DWORD *)(this + 20) - 4);
    *(_DWORD *)(this + 56) = 1;
  }
  if ( *(_DWORD *)(this + 1092) != 0 )
    v3 = *(_DWORD *)(v3 + 1028);
  *(_DWORD *)(this + 52) = v3;
  return 1;
}

// Address: 0x1000C800
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_29(char *this, int a2)
{
  __int16 v3; // bx
  char *v4; // edi
  wchar_t *v5; // ecx
  _WORD *v6; // eax
  char SrcCh[4]; // [esp+Ch] [ebp-4h] BYREF

  *(this + 60) = 1;
  *((_DWORD *)this + 5) += 4;
  v3 = *(_WORD *)(*((_DWORD *)this + 5) - 4);
  v4 = this + 64;
  if ( __crt_stdio_output::is_wide_character_specifier<wchar_t>(
         *(_DWORD *)this,
         *((_DWORD *)this + 1),
         *((_WORD *)this + 25),
         *((_DWORD *)this + 11)) )
  {
    v6 = *((_WORD **)this + 273);
    if ( v6 == nullptr )
      v6 = this + 64;
    *v6 = v3;
  }
  else
  {
    v5 = *((wchar_t **)this + 273);
    SrcCh[0] = v3;
    SrcCh[1] = 0;
    if ( v5 == nullptr )
      v5 = (wchar_t *)(this + 64);
    if ( _mbtowc_l(v5, SrcCh, *(_DWORD *)(**((_DWORD **)this + 2) + 4), *((_locale_t *)this + 2)) < 0 )
      *(this + 48) = 1;
  }
  if ( *((_DWORD *)this + 273) != 0 )
    v4 = *((char **)v4 + 257);
  *((_DWORD *)this + 13) = v4;
  *((_DWORD *)this + 14) = 1;
  return 1;
}

// Address: 0x1000C898
char __thiscall sub_1000C898(int *this, unsigned int a2, char a3)
{
  int v4; // eax
  int v5; // ebx
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax

  v4 = __crt_stdio_output::to_integer_size(*(this + 11));
  v5 = v4;
  switch ( v4 )
  {
    case 1:
      v13 = *(this + 8);
      *(this + 5) += 4;
      v10 = (v13 & 0x10) == 0;
      v14 = *(this + 5);
      if ( v10 )
        LODWORD(v8) = *(unsigned __int8 *)(v14 - 4);
      else
        LODWORD(v8) = *(char *)(v14 - 4);
      goto LABEL_16;
    case 2:
      v11 = *(this + 8);
      *(this + 5) += 4;
      v10 = (v11 & 0x10) == 0;
      v12 = *(this + 5);
      if ( v10 )
        LODWORD(v8) = *(unsigned __int16 *)(v12 - 4);
      else
        LODWORD(v8) = *(__int16 *)(v12 - 4);
LABEL_16:
      v8 = (int)v8;
      v7 = v8;
      goto LABEL_17;
    case 4:
      v9 = *(this + 8);
      *(this + 5) += 4;
      v10 = (v9 & 0x10) == 0;
      LODWORD(v8) = *(this + 5);
      if ( v10 )
      {
        v7 = *(_DWORD *)(v8 - 4);
        HIDWORD(v8) = 0;
        goto LABEL_17;
      }
      LODWORD(v8) = *(_DWORD *)(v8 - 4);
      goto LABEL_16;
    default:
      break;
  }
  if ( v4 != 8 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  *(this + 5) += 8;
  LODWORD(v8) = *(this + 5);
  v7 = *(_DWORD *)(v8 - 8);
  HIDWORD(v8) = *(_DWORD *)(v8 - 4);
LABEL_17:
  if ( (*(this + 8) & 0x10) != 0 && v8 < 0 )
  {
    v7 = -v7;
    HIDWORD(v8) = (unsigned __int64)-__SPAIR64__(HIDWORD(v8), v7) >> 32;
    *(this + 8) |= 0x40u;
  }
  if ( *(this + 10) >= 0 )
  {
    *(this + 8) &= ~8u;
    if ( *(this + 10) > 512 )
      *(this + 10) = 512;
  }
  else
  {
    *(this + 10) = 1;
  }
  if ( __PAIR64__(v7, HIDWORD(v8)) == 0 )
    *(this + 8) &= ~0x20u;
  if ( v5 == 8 )
    unknown_libname_9(this, v7, HIDWORD(v8), a2, a3);
  else
    unknown_libname_8(this, v7, a2, a3);
  if ( (*(this + 8) & 0x80) != 0 && (*(this + 14) == 0 || *(_BYTE *)*(this + 13) != 48) )
  {
    *(_BYTE *)--*(this + 13) = 48;
    ++*(this + 14);
  }
  return 1;
}

// Address: 0x1000C9E2
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_30(int this)
{
  _QWORD *v2; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax

  *(_DWORD *)(this + 20) += 4;
  v2 = *(_QWORD **)(*(_DWORD *)(this + 20) - 4);
  if ( _get_printf_count_output() == 0 )
    goto LABEL_2;
  v4 = __crt_stdio_output::to_integer_size(*(_DWORD *)(this + 44)) - 1;
  if ( v4 != 0 )
  {
    v5 = v4 - 1;
    if ( v5 != 0 )
    {
      v6 = v5 - 2;
      if ( v6 != 0 )
      {
        if ( v6 != 4 )
        {
LABEL_2:
          *_errno() = 22;
          _invalid_parameter_noinfo();
          return 0;
        }
        *v2 = *(int *)(this + 24);
      }
      else
      {
        *(_DWORD *)v2 = *(_DWORD *)(this + 24);
      }
    }
    else
    {
      *(_WORD *)v2 = *(_WORD *)(this + 24);
    }
  }
  else
  {
    *(_BYTE *)v2 = *(_BYTE *)(this + 24);
  }
  *(_BYTE *)(this + 48) = 1;
  return 1;
}

// Address: 0x1000CA56
char __thiscall sub_1000CA56(int *this)
{
  if ( (*(this + 8) & 0x20) != 0 )
    *(this + 8) |= 0x80u;
  return sub_1000C898(this, 8u, 0);
}

// Address: 0x1000CA75
char __thiscall sub_1000CA75(int *this)
{
  *(this + 10) = 8;
  *(this + 11) = 10;
  return sub_1000C898(this, 0x10u, 1);
}

// Address: 0x1000CA8D
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_31(int this)
{
  size_t v2; // edi
  int v3; // ebx
  size_t v4; // eax
  const wchar_t *v6; // [esp-8h] [ebp-14h]

  *(_DWORD *)(this + 20) += 4;
  v2 = *(_DWORD *)(this + 40);
  v3 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *(_DWORD *)(this + 52) = v3;
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  if ( __crt_stdio_output::is_wide_character_specifier<char>(
         *(_DWORD *)this,
         *(_DWORD *)(this + 4),
         *(_BYTE *)(this + 49),
         *(_DWORD *)(this + 44)) )
  {
    if ( v3 == 0 )
      *(_DWORD *)(this + 52) = L"(null)";
    v6 = *(const wchar_t **)(this + 52);
    *(_BYTE *)(this + 60) = 1;
    v4 = wcsnlen(v6, v2);
  }
  else
  {
    if ( v3 == 0 )
      *(_DWORD *)(this + 52) = "(null)";
    v4 = strnlen(*(const char **)(this + 52), v2);
  }
  *(_DWORD *)(this + 56) = v4;
  return 1;
}

// Address: 0x1000CB00
char __thiscall sub_1000CB00(void *this)
{
  size_t v2; // edi
  int v3; // ebx
  size_t v4; // eax
  const wchar_t *v6; // [esp-8h] [ebp-14h]

  *((_DWORD *)this + 5) += 4;
  v2 = *((_DWORD *)this + 10);
  v3 = *(_DWORD *)(*((_DWORD *)this + 5) - 4);
  *((_DWORD *)this + 13) = v3;
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  if ( __crt_stdio_output::is_wide_character_specifier<wchar_t>(
         *(_DWORD *)this,
         *((_DWORD *)this + 1),
         *((_WORD *)this + 25),
         *((_DWORD *)this + 11)) )
  {
    if ( v3 == 0 )
      *((_DWORD *)this + 13) = L"(null)";
    v6 = *((const wchar_t **)this + 13);
    *((_BYTE *)this + 60) = 1;
    v4 = wcsnlen(v6, v2);
  }
  else
  {
    if ( v3 == 0 )
      *((_DWORD *)this + 13) = "(null)";
    v4 = unknown_libname_32(v2, 0);
  }
  *((_DWORD *)this + 14) = v4;
  return 1;
}

// Address: 0x1000CB74
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_32(int this, int a2, int a3)
{
  int v3; // esi
  _BYTE *i; // edx

  v3 = 0;
  for ( i = *(_BYTE **)(this + 52); v3 < a2; ++v3 )
  {
    if ( *i == 0 )
      break;
    if ( *(__int16 *)(***(_DWORD ***)(this + 8) + 2 * (unsigned __int8)*i) < 0 )
      ++i;
    ++i;
  }
  return v3;
}

// Address: 0x1000CBB4
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_33(FILE **this)
{
  if ( *this != nullptr )
    return __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(*this);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x1000CBD5
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_34(_DWORD *this)
{
  if ( *this != 0 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x1000CBF0
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_35(_DWORD *this)
{
  if ( *(this + 7) == 0 || *(this + 7) == 7 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x1000CC12
char __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(FILE *Stream)
{
  int v1; // eax
  int v2; // edx
  _BYTE *v3; // esi
  _BYTE *v4; // eax

  if ( (Stream->_flag & 0x1000) != 0 )
    return 1;
  v1 = _fileno(Stream);
  v2 = v1;
  v3 = &unk_100251C0;
  if ( v1 == -1 || v1 == -2 )
    v4 = &unk_100251C0;
  else
    v4 = (_BYTE *)(dword_10025F28[v1 >> 6] + 48 * (v1 & 0x3F));
  if ( v4[41] == 0 )
  {
    if ( v2 != -1 && v2 != -2 )
      v3 = (_BYTE *)(dword_10025F28[v2 >> 6] + 48 * (v2 & 0x3F));
    if ( (v3[45] & 1) == 0 )
      return 1;
  }
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x1000CC94
_DWORD *__thiscall __crt_stdio_output::stream_output_adapter<char>::write_character(FILE **this, char a2, _DWORD *a3)
{
  if ( (((*this)->_flag & 0x1000) == 0 || (*this)->_cnt != 0) && _fputc_nolock(a2, *this) == -1 )
  {
    *a3 = -1;
    return a3;
  }
  else
  {
    ++*a3;
    return a3;
  }
}

// Address: 0x1000CCD1
char __thiscall __crt_stdio_output::string_output_adapter<wchar_t>::write_character(int *this, __int16 a2, _DWORD *a3)
{
  int v4; // ecx

  v4 = *this;
  if ( *(_DWORD *)(v4 + 8) == *(_DWORD *)(v4 + 4) )
  {
    if ( *(_BYTE *)(v4 + 12) != 0 )
      ++*a3;
    else
      *a3 = -1;
    return *(_BYTE *)(*this + 12);
  }
  else
  {
    ++*a3;
    ++*(_DWORD *)(*this + 8);
    **(_WORD **)*this = a2;
    *(_DWORD *)*this += 2;
    return 1;
  }
}

// Address: 0x1000CD16
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_36(int this, int a2)
{
  wchar_t *v3; // edi
  int v4; // ebx
  wchar_t v5; // ax
  int SizeConverted; // [esp+Ch] [ebp-10h] BYREF
  char MbCh[8]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 60) != 0 && *(int *)(this + 56) > 0 )
  {
    v3 = *(wchar_t **)(this + 52);
    v4 = 0;
    while ( 1 )
    {
      v5 = *v3++;
      SizeConverted = 0;
      if ( wctomb_s(&SizeConverted, MbCh, 6u, v5) != 0 || SizeConverted == 0 )
        break;
      __crt_stdio_output::stream_output_adapter<char>::write_string(
        MbCh,
        SizeConverted,
        this + 24,
        *(_DWORD *)(this + 12));
      if ( ++v4 == *(_DWORD *)(this + 56) )
        return 1;
    }
    *(_DWORD *)(this + 24) = -1;
  }
  else
  {
    __crt_stdio_output::stream_output_adapter<char>::write_string(
      *(_DWORD *)(this + 52),
      *(_DWORD *)(this + 56),
      this + 24,
      *(_DWORD *)(this + 12));
  }
  return 1;
}

// Address: 0x1000CDBD
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_37(int this, int a2)
{
  const char *v3; // ebx
  int v4; // edi
  int v6; // [esp+Ch] [ebp-8h]
  wchar_t DstCh[2]; // [esp+10h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 60) != 0 || *(int *)(this + 56) <= 0 )
  {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string(
      *(void **)(this + 52),
      *(_DWORD *)(this + 56),
      this + 24,
      *(_DWORD *)(this + 12));
  }
  else
  {
    v3 = *(const char **)(this + 52);
    v4 = 0;
    while ( 1 )
    {
      DstCh[0] = 0;
      v6 = _mbtowc_l(DstCh, v3, *(_DWORD *)(**(_DWORD **)(this + 8) + 4), *(_locale_t *)(this + 8));
      if ( v6 <= 0 )
        break;
      __crt_stdio_output::string_output_adapter<wchar_t>::write_character(
        (int *)(this + 1096),
        DstCh[0],
        (_DWORD *)(this + 24));
      v3 += v6;
      if ( ++v4 == *(_DWORD *)(this + 56) )
        return 1;
    }
    *(_DWORD *)(this + 24) = -1;
  }
  return 1;
}

// Address: 0x1000CE48
char *__thiscall __crt_stdio_output::stream_output_adapter<char>::write_string(
        FILE **this,
        char *a2,
        int a3,
        char *a4,
        int *a5)
{
  char *result; // eax
  char *v7; // edi
  int v8; // ecx
  int v9; // [esp+4h] [ebp-8h]

  if ( ((*this)->_flag & 0x1000) == 0 || (*this)->_cnt != 0 )
  {
    v7 = a2;
    result = &a2[a3];
    v8 = *a5;
    *a5 = 0;
    v9 = v8;
    if ( a2 != &a2[a3] )
    {
      result = a4;
      do
      {
        __crt_stdio_output::stream_output_adapter<char>::write_character(this, *v7, result);
        result = a4;
        if ( *(_DWORD *)a4 == -1 )
        {
          if ( *a5 != 42 )
            break;
          __crt_stdio_output::stream_output_adapter<char>::write_character(this, 63, a4);
          result = a4;
        }
        ++v7;
      }
      while ( v7 != &a2[a3] );
      v8 = v9;
    }
    if ( *a5 == 0 && v8 != 0 )
      *a5 = v8;
  }
  else
  {
    *(_DWORD *)a4 += a3;
    return (char *)a3;
  }
  return result;
}

// Address: 0x1000CED2
_DWORD *__thiscall __crt_stdio_output::string_output_adapter<wchar_t>::write_string(
        int *this,
        void *Src,
        unsigned int a3,
        _DWORD *a4,
        int *a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  _DWORD *result; // eax
  unsigned int v10; // edi
  int v12; // [esp+Ch] [ebp-4h]

  v6 = *a5;
  *a5 = 0;
  v7 = *this;
  v12 = v6;
  v8 = *(_DWORD *)(*this + 4);
  if ( *(_DWORD *)(*this + 8) == v8 )
  {
    if ( *(_BYTE *)(v7 + 12) == 0 )
    {
      result = a4;
      *a4 = -1;
      goto LABEL_13;
    }
    result = (_DWORD *)a3;
    *a4 += a3;
  }
  else
  {
    v10 = v8 - *(_DWORD *)(v7 + 8);
    if ( v10 >= a3 )
      v10 = a3;
    memmove_0(*(void **)v7, Src, 2 * v10);
    *(_DWORD *)*this += 2 * v10;
    *(_DWORD *)(*this + 8) += v10;
    result = a4;
    if ( *(_BYTE *)(*this + 12) != 0 )
    {
      *a4 += a3;
    }
    else if ( v10 == a3 )
    {
      *a4 += v10;
    }
    else
    {
      *a4 = -1;
    }
  }
  v6 = v12;
LABEL_13:
  if ( *a5 == 0 && v6 != 0 )
    *a5 = v6;
  return result;
}

// Address: 0x1000CF6C
int __cdecl sub_1000CF6C(int a1, int a2, FILE *a3, int a4, int a5, int a6)
{
  _DWORD v7[5]; // [esp+0h] [ebp-2Ch] BYREF
  _DWORD v8[2]; // [esp+14h] [ebp-18h] BYREF
  int v9; // [esp+1Ch] [ebp-10h] BYREF
  int v10; // [esp+20h] [ebp-Ch] BYREF
  int v11; // [esp+24h] [ebp-8h] BYREF
  FILE *v12; // [esp+28h] [ebp-4h] BYREF

  v9 = a6;
  v11 = a5;
  v8[0] = a1;
  v10 = a4;
  v12 = a3;
  v8[1] = a2;
  if ( a3 != nullptr && a4 != 0 )
  {
    v7[0] = &v12;
    v7[1] = &v11;
    v7[2] = v8;
    v7[3] = &v10;
    v7[4] = &v9;
    return sub_1000AB51(a3, (int)v7);
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

// Address: 0x1000CFE3
int __cdecl sub_1000CFE3(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  return sub_1000ACFE(a1, a2, a3, a4, a5, a6, a7);
}

// Address: 0x1000D007
int __cdecl __stdio_common_vswprintf_s(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return common_vsprintf_s<wchar_t>(Options, SHIDWORD(Options), Buffer, BufferCount, (int)Format, Locale, (int)ArgList);
}

// Address: 0x1000D02B
int __acrt_initialize_stdio()
{
  size_t v0; // eax
  int v2; // edi
  char *v3; // esi
  int v4; // eax

  v0 = Count;
  if ( Count == 0 )
  {
    v0 = 512;
LABEL_5:
    Count = v0;
    goto LABEL_6;
  }
  if ( (int)Count < 3 )
  {
    v0 = 3;
    goto LABEL_5;
  }
LABEL_6:
  dword_10025DC0 = _calloc_base(v0, 4u);
  _free_base(nullptr);
  if ( dword_10025DC0 == nullptr )
  {
    Count = 3;
    dword_10025DC0 = _calloc_base(3u, 4u);
    _free_base(nullptr);
    if ( dword_10025DC0 == nullptr )
      return -1;
  }
  v2 = 0;
  v3 = (char *)&unk_10025040;
  do
  {
    __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 32), 0xFA0u, 0);
    *((_DWORD *)dword_10025DC0 + v2) = v3;
    v4 = *(_DWORD *)(dword_10025F28[v2 >> 6] + 48 * (v2 & 0x3F) + 24);
    if ( v4 == -1 || v4 == -2 || v4 == 0 )
      *((_DWORD *)v3 + 4) = -2;
    v3 += 56;
    ++v2;
  }
  while ( v3 != (char *)&unk_100250E8 );
  return 0;
}

// Address: 0x1000D0F3
FILE *__cdecl __acrt_iob_func(unsigned int Ix)
{
  return (FILE *)((char *)&unk_10025040 + 56 * Ix);
}

// Address: 0x1000D103
void __acrt_uninitialize_stdio()
{
  int i; // esi

  sub_1001143A();
  _fcloseall();
  for ( i = 0; i != 12; i += 4 )
  {
    __acrt_stdio_free_buffer_nolock(*(_DWORD *)((char *)dword_10025DC0 + i));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_10025DC0 + i) + 32));
  }
  _free_base(dword_10025DC0);
  dword_10025DC0 = nullptr;
}

// Address: 0x1000D14F
void __cdecl _lock_file(FILE *Stream)
{
  EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
}

// Address: 0x1000D163
void __cdecl _unlock_file(FILE *Stream)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
}

// Address: 0x1000D177
void __usercall __acrt_call_reportfault(int a1@<ebx>, int a2@<edi>, int a3@<esi>, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // kr00_4
  BOOL v9; // edi
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+4h] [ebp-328h] BYREF
  _DWORD v11[20]; // [esp+Ch] [ebp-320h] BYREF
  _DWORD v12[179]; // [esp+5Ch] [ebp-2D0h] BYREF
  int savedregs; // [esp+32Ch] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+330h] [ebp+4h] BYREF

  if ( a4 != -1 )
    sub_100081D7();
  memset(v11, 0, sizeof(v11));
  memset(v12, 0, sizeof(v12));
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v11;
  ExceptionInfo.ContextRecord = (PCONTEXT)v12;
  v12[44] = v12;
  v12[43] = v6;
  v12[42] = v7;
  v12[41] = a1;
  v12[40] = a3;
  v12[39] = a2;
  LOWORD(v12[50]) = __SS__;
  LOWORD(v12[47]) = __CS__;
  LOWORD(v12[38]) = __DS__;
  LOWORD(v12[37]) = __ES__;
  LOWORD(v12[36]) = __FS__;
  LOWORD(v12[35]) = __GS__;
  v8 = __readeflags();
  v12[48] = v8;
  v12[46] = retaddr;
  v12[49] = &retaddr;
  v12[0] = 65537;
  v12[45] = savedregs;
  v11[0] = a5;
  v11[1] = a6;
  v11[3] = retaddr;
  v9 = IsDebuggerPresent();
  SetUnhandledExceptionFilter(nullptr);
  if ( UnhandledExceptionFilter(&ExceptionInfo) == 0 && !v9 && a4 != -1 )
    sub_100081D7();
}

// Address: 0x1000D2B2
int __cdecl sub_1000D2B2(int a1)
{
  return unknown_libname_40(a1);
}

// Address: 0x1000D2C6
int __cdecl _invalid_parameter(
        wchar_t *Expression,
        wchar_t *FunctionName,
        wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int v5; // eax
  int (__cdecl *v6)(wchar_t *, wchar_t *, wchar_t *, unsigned int, uintptr_t); // esi
  wchar_t *v8; // [esp-14h] [ebp-1Ch]
  wchar_t *v9; // [esp-10h] [ebp-18h]
  wchar_t *v10; // [esp-Ch] [ebp-14h]
  unsigned int v11; // [esp-8h] [ebp-10h]
  uintptr_t v12; // [esp-4h] [ebp-Ch]

  v5 = __acrt_getptd_noexit();
  if ( v5 != 0
    && (v6 = *(int (__cdecl **)(wchar_t *, wchar_t *, wchar_t *, unsigned int, uintptr_t))(v5 + 860)) != nullptr )
  {
    v12 = Reserved;
    v11 = LineNo;
    v10 = FileName;
    v9 = FunctionName;
    v8 = Expression;
  }
  else
  {
    v12 = Reserved;
    v11 = LineNo;
    v10 = FileName;
    v6 = (int (__cdecl *)(wchar_t *, wchar_t *, wchar_t *, unsigned int, uintptr_t))__ROR4__(
                                                                                      dword_10025DC8 ^ __security_cookie,
                                                                                      __security_cookie & 0x1F);
    v9 = FunctionName;
    v8 = Expression;
    if ( v6 == nullptr )
      _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v6(v8, v9, v10, v11, v12);
}

// Address: 0x1000D341
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x1000D351
void __cdecl __noreturn _invalid_parameter_noinfo_noreturn()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x1000D36E
void __cdecl __noreturn _invoke_watson(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int v5; // ebx
  int v6; // edi
  HANDLE CurrentProcess; // eax

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(5u);
  __acrt_call_reportfault(v5, v6, -1073740777, 2, -1073740777, 1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x1000D3A1
intptr_t __cdecl sub_1000D3A1(wchar_t *a1)
{
  intptr_t v1; // esi
  int v2; // edi
  intptr_t v3; // ebx
  int *v4; // eax
  void *Block; // [esp+Ch] [ebp-18h] BYREF
  wchar_t *FileName[4]; // [esp+10h] [ebp-14h] BYREF

  v1 = 0;
  Block = nullptr;
  if ( _wdupenv_s((wchar_t **)&Block, nullptr, L"COMSPEC") == 22 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( a1 != nullptr )
  {
    FileName[0] = (wchar_t *)Block;
    FileName[1] = L"/c";
    FileName[2] = a1;
    FileName[3] = nullptr;
    if ( Block != nullptr )
    {
      v2 = *_errno();
      *_errno() = 0;
      v3 = _wspawnve(0, FileName[0], (const wchar_t *const *)FileName, nullptr);
      v4 = _errno();
      if ( v3 != -1 )
      {
        *v4 = v2;
        v1 = v3;
        goto LABEL_13;
      }
      if ( *v4 != 2 && *_errno() != 13 )
      {
        v1 = -1;
        goto LABEL_13;
      }
      *_errno() = v2;
    }
    FileName[0] = (wchar_t *)L"cmd.exe";
    v1 = _wspawnvpe(0, L"cmd.exe", (const wchar_t *const *)FileName, nullptr);
    goto LABEL_13;
  }
  if ( Block != nullptr )
    v1 = _waccess_s((const wchar_t *)Block, 0) == 0;
LABEL_13:
  _free_base(Block);
  return v1;
}

// Address: 0x1000D4A1
intptr_t __cdecl sub_1000D4A1(wchar_t *a1)
{
  return sub_1000D3A1(a1);
}

// Address: 0x1000D4AC
int __cdecl __acrt_errno_from_os_error(int a1)
{
  unsigned int i; // eax

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_1001CD30[2 * i] )
      return dword_1001CD34[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x1000D4EF
int *__cdecl __acrt_errno_map_os_error(unsigned int a1)
{
  int v1; // esi
  int *result; // eax

  *__doserrno() = a1;
  v1 = __acrt_errno_from_os_error(a1);
  result = _errno();
  *result = v1;
  return result;
}

// Address: 0x1000D512
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = __acrt_getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 20);
  else
    return (unsigned int *)&unk_100250EC;
}

// Address: 0x1000D525
int *__cdecl _errno()
{
  int v0; // eax

  v0 = __acrt_getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 16);
  else
    return (int *)&unk_100250E8;
}

// Address: 0x1000D538
// attributes: thunk
void __cdecl j___free_base(void *Block)
{
  _free_base(Block);
}

// Address: 0x1000D53D
char *__cdecl sub_1000D53D(void *Block, unsigned int a2, unsigned int a3)
{
  size_t v4; // edi
  unsigned int v5; // esi
  char *v6; // ebx
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  savedregs = (int)&savedregs;
  if ( a2 != 0 && 0xFFFFFFE0 / a2 < a3 )
  {
    *_errno() = 12;
    return nullptr;
  }
  else
  {
    if ( Block != nullptr )
      v4 = _msize(Block);
    else
      v4 = 0;
    v5 = a3 * a2;
    v6 = (char *)_realloc_base(Block, a3 * a2);
    if ( v6 != nullptr && v4 < v5 )
      memset(&v6[v4], 0, v5 - v4);
    return v6;
  }
}

// Address: 0x1000D5B5
int __cdecl sub_1000D5B5(int a1)
{
  return unknown_libname_40(a1);
}

// Address: 0x1000D5C9
int __cdecl _callnewh(size_t Size)
{
  _PNH new_handler; // eax

  new_handler = _query_new_handler();
  return new_handler != nullptr && new_handler(Size) != 0;
}

// Address: 0x1000D60D
_PNH __cdecl _query_new_handler()
{
  int (__cdecl *v1)(size_t); // [esp+10h] [ebp-1Ch]

  __acrt_lock(0);
  v1 = (int (__cdecl *)(size_t))__ROR4__(dword_10025DCC ^ __security_cookie, __security_cookie & 0x1F);
  __acrt_unlock(0);
  return v1;
}

// Address: 0x1000D65F
void *__cdecl malloc(size_t Size)
{
  return _malloc_base(Size);
}

// Address: 0x1000D66A
int __cdecl _seh_filter_dll(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  if ( ExceptionNum == -529697949 )
    return _seh_filter_exe(0xE06D7363, ExceptionPtr);
  else
    return 0;
}

// Address: 0x1000D68A
int __cdecl _seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  int result; // eax
  int v3; // esi
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  int v6; // eax
  void (__cdecl *v7)(int); // edi
  _DWORD *v8; // eax
  _DWORD *v9; // edx
  int v10; // ebx
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp+4h] [ebp-8h]

  result = __acrt_getptd_noexit();
  v3 = result;
  if ( result != 0 )
  {
    v4 = *(_DWORD **)result;
    v5 = *(_DWORD **)result;
    v6 = *(_DWORD *)result + 144;
    while ( *v5 != ExceptionNum )
    {
      v5 += 3;
      if ( v5 == (_DWORD *)v6 )
      {
        v5 = nullptr;
        break;
      }
    }
    if ( v5 != nullptr && (v7 = (void (__cdecl *)(int))v5[2]) != nullptr )
    {
      if ( v7 == (void (__cdecl *)(int))5 )
      {
        v5[2] = 0;
        return 1;
      }
      else
      {
        if ( v7 != (void (__cdecl *)(int))1 )
        {
          v12 = *(_DWORD *)(v3 + 4);
          *(_DWORD *)(v3 + 4) = ExceptionPtr;
          if ( v5[1] == 8 )
          {
            v8 = v4 + 9;
            v9 = v4 + 36;
            while ( v8 != v9 )
            {
              v8[2] = 0;
              v8 += 3;
            }
            v10 = *(_DWORD *)(v3 + 8);
            if ( *v5 > 0xC0000091 )
            {
              switch ( *v5 )
              {
                case 0xC0000092:
                  *(_DWORD *)(v3 + 8) = 138;
                  break;
                case 0xC0000093:
                  *(_DWORD *)(v3 + 8) = 133;
                  break;
                case 0xC00002B4:
                  *(_DWORD *)(v3 + 8) = 142;
                  break;
                case 0xC00002B5:
                  *(_DWORD *)(v3 + 8) = 141;
                  break;
                default:
                  break;
              }
            }
            else
            {
              switch ( *v5 )
              {
                case 0xC0000091:
                  *(_DWORD *)(v3 + 8) = 132;
                  break;
                case 0xC000008D:
                  *(_DWORD *)(v3 + 8) = 130;
                  break;
                case 0xC000008E:
                  *(_DWORD *)(v3 + 8) = 131;
                  break;
                case 0xC000008F:
                  *(_DWORD *)(v3 + 8) = 134;
                  break;
                case 0xC0000090:
                  *(_DWORD *)(v3 + 8) = 129;
                  break;
                default:
                  break;
              }
            }
            v7(8);
            *(_DWORD *)(v3 + 8) = v10;
          }
          else
          {
            v11 = v5[1];
            v5[2] = 0;
            v7(v11);
          }
          *(_DWORD *)(v3 + 4) = v12;
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

// Address: 0x1000D7FD
BOOL __cdecl atexit_exception_filter(unsigned int a1)
{
  return a1 == -529697949;
}

// Address: 0x1000D810
void __cdecl common_exit(UINT uExitCode, enum _crt_exit_cleanup_mode a2, enum _crt_exit_return_mode a3)
{
  void (__thiscall *v3)(_DWORD, _DWORD, _DWORD, _DWORD); // ecx

  if ( a3 == _crt_exit_terminate_process && (unsigned __int8)__scrt_is_managed_app() != 0 )
    try_cor_exit_process(uExitCode);
  __acrt_lock(2);
  if ( byte_10025DD8 == 0 )
  {
    _InterlockedExchange(&dword_10025DD0, 1);
    if ( a2 != _crt_exit_full_cleanup )
    {
      if ( a2 == _crt_exit_quick_cleanup )
        _execute_onexit_table(&stru_10025F04);
    }
    else
    {
      if ( dword_10025DD4 != (__security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F))) )
      {
        v3 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))__ROR4__(
                                                                    dword_10025DD4 ^ __security_cookie,
                                                                    __security_cookie & 0x1F);
        v3(v3, 0, 0, 0);
      }
      _execute_onexit_table(&stru_10025EF8);
    }
    if ( a2 == _crt_exit_full_cleanup )
      _initterm((_PVFV *)&dword_1001C1C4, (_PVFV *)&dword_1001C1D4);
    _initterm((_PVFV *)&dword_1001C1D8, (_PVFV *)&dword_1001C1DC);
    if ( a3 == _crt_exit_terminate_process )
      byte_10025DD8 = 1;
  }
  __acrt_unlock(2);
  if ( a3 == _crt_exit_terminate_process )
    exit_or_terminate_process(uExitCode);
}

// Address: 0x1000D929
void __cdecl __noreturn exit_or_terminate_process(UINT uExitCode)
{
  HANDLE CurrentProcess; // eax

  if ( (unsigned __int8)__acrt_is_packaged_app() != 0 && (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, uExitCode);
  }
  try_cor_exit_process(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x1000D96A
bool __scrt_is_managed_app()
{
  HMODULE ModuleHandleW; // ecx
  char *v2; // eax

  ModuleHandleW = GetModuleHandleW(nullptr);
  return ModuleHandleW != nullptr
      && *(_WORD *)ModuleHandleW == 23117
      && *(_DWORD *)(v2 = (char *)ModuleHandleW + *((_DWORD *)ModuleHandleW + 15)) == 17744
      && *((_WORD *)v2 + 12) == 267
      && *((_DWORD *)v2 + 29) > 0xEu
      && *((_DWORD *)v2 + 58) != 0;
}

// Address: 0x1000D9AE
void __cdecl try_cor_exit_process(unsigned int a1)
{
  FARPROC CorExitProcess; // eax
  HMODULE phModule; // [esp+0h] [ebp-8h] BYREF

  phModule = nullptr;
  if ( GetModuleHandleExW(0, L"mscoree.dll", &phModule) )
  {
    CorExitProcess = GetProcAddress(phModule, "CorExitProcess");
    if ( CorExitProcess != nullptr )
      ((void (__thiscall *)(FARPROC, unsigned int))CorExitProcess)(CorExitProcess, a1);
  }
  if ( phModule != nullptr )
    FreeLibrary(phModule);
}

// Address: 0x1000DA18
int __cdecl sub_1000DA18(int a1)
{
  dword_10025DD4 = a1;
  return a1;
}

// Address: 0x1000DA27
void __cdecl _cexit()
{
  common_exit(0, _crt_exit_full_cleanup, _crt_exit_return_to_caller);
}

// Address: 0x1000DA36
void __cdecl __noreturn _exit(int Code)
{
  common_exit(Code, _crt_exit_no_cleanup, _crt_exit_terminate_process);
}

// Address: 0x1000DA4C
int sub_1000DA4C()
{
  return dword_10025DD0;
}

// Address: 0x1000DA52
int __cdecl common_configure_argv<char>(int a1)
{
  int v2; // edi
  CHAR *v3; // ebx
  char *buffer_for_argv; // esi
  void *v5; // eax
  int v6; // ebx
  void *v7; // eax
  void *v8; // edx
  int v9; // ecx
  _DWORD *i; // eax
  int v11; // [esp+4h] [ebp-Ch] BYREF
  void *Block; // [esp+8h] [ebp-8h] BYREF
  int v13; // [esp+Ch] [ebp-4h] BYREF

  if ( a1 != 2 && a1 != 1 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  __acrt_initialize_multibyte();
  v2 = 0;
  GetModuleFileNameA(nullptr, Filename, 0x104u);
  v3 = (CHAR *)dword_10026370;
  dword_10026378 = (int)Filename;
  if ( dword_10026370 == 0 || *(_BYTE *)dword_10026370 == 0 )
    v3 = Filename;
  v13 = 0;
  v11 = 0;
  parse_command_line<char>(v3, 0, 0, &v13, &v11);
  buffer_for_argv = (char *)__acrt_allocate_buffer_for_argv(v13, v11, 1);
  if ( buffer_for_argv != nullptr )
  {
    parse_command_line<char>(v3, buffer_for_argv, &buffer_for_argv[4 * v13], &v13, &v11);
    if ( a1 != 1 )
    {
      Block = nullptr;
      v6 = __acrt_expand_narrow_argv_wildcards(buffer_for_argv, &Block);
      if ( v6 != 0 )
      {
        v7 = Block;
      }
      else
      {
        v8 = Block;
        v9 = 0;
        for ( i = Block; *i != 0; ++v9 )
          ++i;
        v7 = nullptr;
        dword_10026364 = v9;
        Block = nullptr;
        v6 = 0;
        dword_10026368 = v8;
      }
      _free_base(v7);
      Block = nullptr;
      goto LABEL_18;
    }
    dword_10026364 = v13 - 1;
    v5 = buffer_for_argv;
    buffer_for_argv = nullptr;
    dword_10026368 = v5;
  }
  else
  {
    v2 = 12;
    *_errno() = 12;
  }
  v6 = v2;
LABEL_18:
  _free_base(buffer_for_argv);
  return v6;
}

// Address: 0x1000DB76
_DWORD *__cdecl parse_command_line<char>(char *a1, char **a2, char *a3, _DWORD *a4, _DWORD *a5)
{
  char *v6; // edi
  bool v7; // cl
  char v8; // al
  char v9; // al
  int v10; // edx
  unsigned int v11; // eax
  bool v12; // cl
  char v13; // al
  char v15; // [esp+Eh] [ebp-2h]
  bool v16; // [esp+Fh] [ebp-1h]
  bool v17; // [esp+Fh] [ebp-1h]

  *a5 = 0;
  v6 = a3;
  *a4 = 1;
  if ( a2 != nullptr )
    *a2++ = a3;
  v7 = false;
  v16 = false;
  do
  {
    if ( *a1 == 34 )
    {
      v8 = 34;
      v7 = !v7;
      ++a1;
      v16 = v7;
    }
    else
    {
      ++*a5;
      if ( v6 != nullptr )
        *v6++ = *a1;
      v9 = *a1++;
      v15 = v9;
      if ( _ismbblead(v9) != 0 )
      {
        ++*a5;
        if ( v6 != nullptr )
          *v6++ = *a1;
        ++a1;
      }
      v8 = v15;
      if ( v15 == 0 )
      {
        --a1;
        goto LABEL_20;
      }
      v7 = v16;
    }
  }
  while ( v7 || v8 != 32 && v8 != 9 );
  if ( v6 != nullptr )
    *(v6 - 1) = 0;
LABEL_20:
  v17 = false;
LABEL_21:
  if ( *a1 != 0 )
  {
    while ( *a1 == 32 || *a1 == 9 )
      ++a1;
    if ( *a1 != 0 )
    {
      if ( a2 != nullptr )
        *a2++ = v6;
      ++*a4;
      while ( 1 )
      {
        v10 = 1;
        v11 = 0;
        while ( *a1 == 92 )
        {
          ++a1;
          ++v11;
        }
        if ( *a1 == 34 )
          break;
LABEL_43:
        while ( v11 != 0 )
        {
          --v11;
          if ( v6 != nullptr )
            *v6++ = 92;
          ++*a5;
        }
        v13 = *a1;
        if ( *a1 == 0 || !v17 && (v13 == 32 || v13 == 9) )
        {
          if ( v6 != nullptr )
            *v6++ = 0;
          ++*a5;
          goto LABEL_21;
        }
        if ( v10 != 0 )
        {
          if ( v6 != nullptr )
            *v6++ = v13;
          if ( _ismbblead(*a1) != 0 )
          {
            ++a1;
            ++*a5;
            if ( v6 != nullptr )
              *v6++ = *a1;
          }
          ++*a5;
        }
        ++a1;
      }
      if ( (v11 & 1) == 0 )
      {
        v12 = v17;
        if ( v17 )
        {
          if ( a1[1] == 34 )
          {
            ++a1;
            goto LABEL_39;
          }
          v12 = v17;
        }
        v10 = 0;
        v17 = !v12;
      }
LABEL_39:
      v11 >>= 1;
      goto LABEL_43;
    }
  }
  if ( a2 != nullptr )
    *a2 = nullptr;
  ++*a4;
  return a4;
}

// Address: 0x1000DCEB
void *__cdecl __acrt_allocate_buffer_for_argv(unsigned int a1, unsigned int a2, unsigned int a3)
{
  void *v4; // esi

  if ( a1 >= 0x3FFFFFFF )
    return nullptr;
  if ( a2 >= 0xFFFFFFFF / a3 || -1 - 4 * a1 <= a3 * a2 )
    return nullptr;
  v4 = _calloc_base(a3 * a2 + 4 * a1, 1u);
  _free_base(nullptr);
  return v4;
}

// Address: 0x1000DD40
errno_t __cdecl _configure_narrow_argv(_crt_argv_mode mode)
{
  return common_configure_argv<char>(mode);
}

// Address: 0x1000DD4B
void *sub_1000DD4B()
{
  void *result; // eax

  result = dword_10025EEC;
  if ( dword_10025EEC == nullptr )
  {
    if ( dword_10025EE8 == 0 || common_initialize_environment_nolock<wchar_t>() != 0 )
      return nullptr;
    else
      return initialize_environment_by_cloning_nolock<wchar_t>() == 0 ? dword_10025EEC : nullptr;
  }
  return result;
}

// Address: 0x1000DD7A
int common_initialize_environment_nolock<char>()
{
  char *narrow_environment_from_os; // eax
  char *v2; // esi
  int v3; // edi
  void *v4; // eax

  if ( dword_10025EE8 != 0 )
    return 0;
  __acrt_initialize_multibyte();
  narrow_environment_from_os = (char *)__dcrt_get_narrow_environment_from_os();
  v2 = narrow_environment_from_os;
  if ( narrow_environment_from_os != nullptr )
  {
    v4 = (void *)create_environment<char>(narrow_environment_from_os);
    if ( v4 != nullptr )
    {
      dword_10025EF4 = v4;
      unknown_libname_40(v4);
      v3 = 0;
    }
    else
    {
      v3 = -1;
    }
    _free_base(nullptr);
  }
  else
  {
    v3 = -1;
  }
  _free_base(v2);
  return v3;
}

// Address: 0x1000DDD3
int common_initialize_environment_nolock<wchar_t>()
{
  wchar_t *wide_environment_from_os; // eax
  wchar_t *v2; // esi
  int v3; // edi
  void *v4; // eax

  if ( dword_10025EEC != nullptr )
    return 0;
  wide_environment_from_os = (wchar_t *)__dcrt_get_wide_environment_from_os();
  v2 = wide_environment_from_os;
  if ( wide_environment_from_os != nullptr )
  {
    v4 = (void *)create_environment<wchar_t>(wide_environment_from_os);
    if ( v4 != nullptr )
    {
      dword_10025EF0 = v4;
      unknown_libname_40(v4);
      v3 = 0;
    }
    else
    {
      v3 = -1;
    }
    _free_base(nullptr);
  }
  else
  {
    v3 = -1;
  }
  _free_base(v2);
  return v3;
}

// Address: 0x1000DE27
void *__cdecl create_environment<char>(char *Source)
{
  const char *v1; // edi
  int v2; // edx
  char *v3; // esi
  char i; // al
  void *v5; // eax
  void *v6; // ebx
  unsigned int v7; // ecx
  rsize_t v8; // eax
  char *v9; // eax
  char *v10; // esi
  rsize_t SizeInBytes; // [esp+Ch] [ebp-8h]
  char **v13; // [esp+10h] [ebp-4h]

  v1 = Source;
  v2 = 0;
  v3 = Source;
  for ( i = *Source; i != 0; i = *v3 )
  {
    if ( i != 61 )
      ++v2;
    v3 += strlen(v3) + 1;
  }
  v5 = _calloc_base(v2 + 1, 4u);
  v6 = v5;
  if ( v5 != nullptr )
  {
    v13 = (char **)v5;
    while ( *v1 != 0 )
    {
      v7 = strlen(v1);
      v8 = v7 + 1;
      SizeInBytes = v7 + 1;
      if ( *v1 != 61 )
      {
        v9 = (char *)_calloc_base(v7 + 1, 1u);
        v10 = v9;
        if ( v9 == nullptr )
        {
          unknown_libname_38(v6);
          _free_base(nullptr);
          goto LABEL_16;
        }
        if ( strcpy_s(v9, SizeInBytes, v1) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        *v13++ = v10;
        _free_base(nullptr);
        v8 = SizeInBytes;
      }
      v1 += v8;
    }
  }
  else
  {
LABEL_16:
    v6 = nullptr;
  }
  _free_base(nullptr);
  return v6;
}

// Address: 0x1000DEF8
void *__cdecl create_environment<wchar_t>(wchar_t *Source)
{
  const unsigned __int16 *v1; // ebx
  int v2; // edx
  unsigned __int16 v3; // ax
  const unsigned __int16 *v4; // esi
  void *v5; // eax
  void *v6; // edi
  size_t v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // esi
  rsize_t SizeInWords; // [esp+Ch] [ebp-8h]
  wchar_t **v12; // [esp+10h] [ebp-4h]

  v1 = Source;
  v2 = 0;
  v3 = *Source;
  v4 = Source;
  if ( *Source != 0 )
  {
    do
    {
      if ( v3 != 61 )
        ++v2;
      v4 += wcslen(v4) + 1;
      v3 = *v4;
    }
    while ( *v4 != 0 );
    v1 = Source;
  }
  v5 = _calloc_base(v2 + 1, 4u);
  v6 = v5;
  if ( v5 != nullptr )
  {
    v12 = (wchar_t **)v5;
    while ( *v1 != 0 )
    {
      v7 = wcslen(v1) + 1;
      SizeInWords = v7;
      if ( *v1 != 61 )
      {
        v8 = (wchar_t *)_calloc_base(v7, 2u);
        v9 = v8;
        if ( v8 == nullptr )
        {
          unknown_libname_38(v6);
          _free_base(nullptr);
          goto LABEL_16;
        }
        if ( wcscpy_s(v8, SizeInWords, v1) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        *v12++ = v9;
        _free_base(nullptr);
        v7 = SizeInWords;
      }
      v1 += v7;
    }
  }
  else
  {
LABEL_16:
    v6 = nullptr;
  }
  _free_base(nullptr);
  return v6;
}

// Address: 0x1000DFF2
// Microsoft VisualC universal runtime
void __cdecl unknown_libname_38(void **Block)
{
  void *v1; // eax
  void **v2; // edi

  if ( Block != nullptr )
  {
    v1 = *Block;
    v2 = Block;
    while ( v1 != nullptr )
    {
      _free_base(v1);
      v1 = *++v2;
    }
    _free_base(Block);
  }
}

// Address: 0x1000E021
int initialize_environment_by_cloning_nolock<wchar_t>()
{
  LPCCH *v0; // edi
  size_t v2; // eax
  int v3; // ebx
  WCHAR *v4; // eax
  WCHAR *v5; // esi

  v0 = (LPCCH *)dword_10025EE8;
  if ( dword_10025EE8 == 0 )
    return -1;
  while ( 1 )
  {
    if ( *v0 == nullptr )
      return 0;
    v2 = MultiByteToWideChar(0, 0, *v0, -1, nullptr, 0);
    v3 = v2;
    if ( v2 == 0 )
      break;
    v4 = (WCHAR *)_calloc_base(v2, 2u);
    v5 = v4;
    if ( v4 == nullptr || MultiByteToWideChar(0, 0, *v0, -1, v4, v3) == 0 )
    {
      _free_base(v5);
      return -1;
    }
    __dcrt_set_variable_in_wide_environment_nolock(v5, 0);
    _free_base(nullptr);
    ++v0;
  }
  return -1;
}

// Address: 0x1000E09A
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_39(char *this, int (__cdecl *a2)(char *))
{
  char *v2; // esi
  char *v3; // edi
  int result; // eax

  v2 = this;
  v3 = this + 4;
  while ( v2 != v3 )
  {
    result = a2(v2);
    v2 += 4;
  }
  return result;
}

// Address: 0x1000E0DA
void __cdecl sub_1000E0DA(void ***a1)
{
  if ( *a1 != dword_10025EF4 )
    unknown_libname_38(*a1);
}

// Address: 0x1000E0F5
void __cdecl sub_1000E0F5(void ***a1)
{
  if ( *a1 != dword_10025EF0 )
    unknown_libname_38(*a1);
}

// Address: 0x1000E110
// Microsoft VisualC universal runtime
int __fastcall unknown_libname_40(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax

  v3 = 0;
  result = a1 + 1 >= a1;
  if ( result != 0 )
  {
    do
    {
      ++v3;
      *a1++ = a3;
    }
    while ( v3 != result );
  }
  return result;
}

// Address: 0x1000E141
// attributes: thunk
void *sub_1000E141()
{
  return sub_1000DD4B();
}

// Address: 0x1000E146
void __dcrt_uninitialize_environments_nolock()
{
  unknown_libname_39((char *)&dword_10025EE8, (int (__cdecl *)(char *))sub_1000E0DA);
  unknown_libname_39((char *)&dword_10025EEC, (int (__cdecl *)(char *))sub_1000E0F5);
  unknown_libname_38((void **)dword_10025EF4);
  unknown_libname_38((void **)dword_10025EF0);
}

// Address: 0x1000E17D
// attributes: thunk
int common_initialize_environment_nolock<char>(void)
{
  return ??$common_initialize_environment_nolock@D@@YAHXZ();
}

// Address: 0x1000E182
int __stdcall __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = _lambda_4e60a939b0d047cfe11ddc22648dfba9_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x1000E1D3
int __stdcall __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = _lambda_275893d493268fdec8709772e3fcec0e_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x1000E224
int __cdecl sub_1000E224(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x1000E24C
int __cdecl sub_1000E24C(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x1000E274
// Microsoft VisualC universal runtime
uintptr_t __cdecl unknown_libname_41(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

// Address: 0x1000E293
int __thiscall _lambda_275893d493268fdec8709772e3fcec0e_::operator()(_DWORD **this)
{
  _DWORD *v1; // ebx
  uintptr_t v3; // edx
  char v4; // si
  int *v5; // edi
  int *v6; // ebx
  int v7; // eax
  void (__thiscall *v8)(_DWORD); // ecx
  _DWORD *v9; // eax
  int *v10; // eax
  int *v11; // ecx
  uintptr_t v12; // edx
  char v14; // [esp+8h] [ebp-14h]
  int *v15; // [esp+Ch] [ebp-10h]
  int *v16; // [esp+10h] [ebp-Ch]
  int *v17; // [esp+14h] [ebp-8h]

  v1 = (_DWORD *)**this;
  if ( v1 == nullptr )
    return -1;
  v3 = __security_cookie;
  v4 = __security_cookie & 0x1F;
  v14 = __security_cookie & 0x1F;
  v5 = (int *)__ROR4__(__security_cookie ^ *v1, __security_cookie & 0x1F);
  v6 = (int *)__ROR4__(__security_cookie ^ v1[1], __security_cookie & 0x1F);
  if ( v5 != nullptr && v5 != (int *)-1 )
  {
    v16 = v5;
    v15 = v6;
LABEL_6:
    v7 = v3 ^ __ROR4__(0, 32 - v4);
    while ( --v6 >= v5 )
    {
      if ( *v6 != v7 )
      {
        v8 = (void (__thiscall *)(_DWORD))__ROR4__(v3 ^ *v6, v14);
        *v6 = v7;
        v8(v8);
        v3 = __security_cookie;
        v4 = __security_cookie & 0x1F;
        v14 = __security_cookie & 0x1F;
        v9 = (_DWORD *)**this;
        v17 = (int *)__ROR4__(__security_cookie ^ *v9, __security_cookie & 0x1F);
        v10 = (int *)__ROR4__(__security_cookie ^ v9[1], __security_cookie & 0x1F);
        v11 = v17;
        if ( v17 == v16 )
        {
          if ( v10 == v15 )
            goto LABEL_6;
          v11 = v17;
        }
        v16 = v11;
        v5 = v11;
        v15 = v10;
        v6 = v10;
        goto LABEL_6;
      }
    }
    if ( v5 != (int *)-1 )
    {
      _free_base(v5);
      LOBYTE(v3) = __security_cookie;
    }
    v12 = __security_cookie ^ __ROR4__(0, 32 - (v3 & 0x1F));
    *(_DWORD *)**this = v12;
    *(_DWORD *)(**this + 4) = v12;
    *(_DWORD *)(**this + 8) = v12;
  }
  return 0;
}

// Address: 0x1000E3B3
int __thiscall _lambda_4e60a939b0d047cfe11ddc22648dfba9_::operator()(_DWORD **this)
{
  int *v1; // esi
  int v3; // ebx
  uintptr_t *v4; // edi
  unsigned int v5; // esi
  char *v6; // ebx
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // edi
  char *v10; // ecx
  uintptr_t *v11; // ecx
  int i; // eax
  uintptr_t v13; // [esp+4h] [ebp-Ch]
  char *v15; // [esp+Ch] [ebp-4h]
  char *v16; // [esp+Ch] [ebp-4h]
  uintptr_t *v17; // [esp+Ch] [ebp-4h]
  unsigned int v18; // [esp+Ch] [ebp-4h]

  v1 = (int *)**this;
  if ( v1 == nullptr )
    return -1;
  v3 = *v1;
  v4 = (uintptr_t *)__ROR4__(__security_cookie ^ v1[1], __security_cookie & 0x1F);
  v5 = __ROR4__(__security_cookie ^ v1[2], __security_cookie & 0x1F);
  v6 = (char *)__ROR4__(__security_cookie ^ v3, __security_cookie & 0x1F);
  if ( v4 == (uintptr_t *)v5 )
  {
    v7 = 512;
    v8 = (int)(v5 - (_DWORD)v6) >> 2;
    if ( v8 <= 0x200 )
      v7 = v8;
    v9 = v7 + v8;
    if ( v7 + v8 == 0 )
      v9 = 32;
    if ( v9 < v8 || (v15 = sub_1000D53D(v6, v9, 4u), _free_base(nullptr), v10 = v15, v15 == nullptr) )
    {
      v9 = v8 + 4;
      v16 = sub_1000D53D(v6, v8 + 4, 4u);
      _free_base(nullptr);
      v10 = v16;
      if ( v16 == nullptr )
        return -1;
    }
    v6 = v10;
    v17 = (uintptr_t *)&v10[4 * v8];
    v5 = (unsigned int)&v10[4 * v9];
    v4 = v17;
    v11 = v17;
    v13 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
    v18 = v5 >= (unsigned int)v17 ? (v5 - (unsigned int)v17 + 3) >> 2 : 0;
    if ( v18 != 0 )
    {
      for ( i = 0; i != v18; ++i )
        *v11++ = v13;
    }
  }
  *v4 = unknown_libname_41(**(this + 1));
  *(_DWORD *)**this = unknown_libname_2((int)v6);
  *(_DWORD *)(**this + 4) = unknown_libname_2((int)(v4 + 1));
  *(_DWORD *)(**this + 8) = unknown_libname_2(v5);
  return 0;
}

// Address: 0x1000E4F4
int __cdecl sub_1000E4F4(_onexit_t Function)
{
  return _register_onexit_function(&stru_10025EF8, Function);
}

// Address: 0x1000E50A
int __cdecl _execute_onexit_table(_onexit_table_t *Table)
{
  _onexit_table_t **p_Table; // [esp+0h] [ebp-4h] BYREF

  p_Table = &Table;
  return sub_1000E224(2, (int)&p_Table);
}

// Address: 0x1000E527
int __cdecl _initialize_onexit_table(_onexit_table_t *Table)
{
  _PVFV *v2; // eax

  if ( Table == nullptr )
    return -1;
  if ( Table->_first == Table->_end )
  {
    v2 = (_PVFV *)(__security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F)));
    Table->_first = v2;
    Table->_last = v2;
    Table->_end = v2;
  }
  return 0;
}

// Address: 0x1000E564
int __cdecl _register_onexit_function(_onexit_table_t *Table, _onexit_t Function)
{
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  v3[0] = &Table;
  v3[1] = &Function;
  return sub_1000E24C(2, (int)v3);
}

// Address: 0x1000E588
char __fastcall sub_1000E588(int a1, int a2)
{
  unknown_libname_40(&dword_10025F20, a2, (int)&off_100250F8);
  return 1;
}

// Address: 0x1000E59A
char initialize_c()
{
  _initialize_onexit_table(&stru_10025EF8);
  _initialize_onexit_table(&stru_10025F04);
  return 1;
}

// Address: 0x1000E5B4
char sub_1000E5B4()
{
  __dcrt_uninitialize_environments_nolock();
  return 1;
}

// Address: 0x1000E5BC
char initialize_pointers()
{
  uintptr_t v0; // esi

  v0 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  sub_1000D2B2(v0);
  sub_1000D5B5(v0);
  __acrt_initialize_signal_handlers(v0);
  sub_10013859(v0);
  sub_1000DA18(v0);
  return 1;
}

// Address: 0x1000E5F9
__vcrt_bool sub_1000E5F9()
{
  return __vcrt_uninitialize(false);
}

// Address: 0x1000E602
char uninitialize_allocated_memory()
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 0 && Block != &unk_100254F0 )
  {
    _free_base(Block);
    Block = &unk_100254F0;
  }
  _free_base(dword_10025F14);
  dword_10025F14 = nullptr;
  _free_base(dword_10025F18);
  dword_10025F18 = nullptr;
  _free_base(dword_10026368);
  dword_10026368 = nullptr;
  _free_base(dword_1002636C);
  dword_1002636C = nullptr;
  return 1;
}

// Address: 0x1000E679
__crt_bool __cdecl __acrt_initialize()
{
  return __acrt_execute_initializers(&off_1001CF60, &unk_1001CFD8);
}

// Address: 0x1000E68B
__crt_bool __cdecl __acrt_thread_attach()
{
  return __acrt_getptd_noexit() != 0;
}

// Address: 0x1000E696
__crt_bool __cdecl __acrt_thread_detach()
{
  __acrt_freeptd();
  return true;
}

// Address: 0x1000E69E
__crt_bool __cdecl __acrt_uninitialize(__crt_bool Terminating)
{
  return __acrt_execute_uninitializers(&off_1001CF60, &unk_1001CFD8);
}

// Address: 0x1000E6B0
__crt_bool __cdecl __acrt_uninitialize_critical(__crt_bool Terminating)
{
  __acrt_uninitialize_ptd(Terminating);
  return true;
}

// Address: 0x1000E6C2
void __cdecl _initterm(_PVFV *First, _PVFV *Last)
{
  _PVFV *v2; // esi
  int v3; // edi
  unsigned int v4; // ebx

  v2 = First;
  v3 = 0;
  v4 = Last >= First ? (unsigned int)((char *)Last - (char *)First + 3) >> 2 : 0;
  if ( v4 != 0 )
  {
    do
    {
      if ( *v2 != nullptr )
        ((void (__thiscall *)(_PVFV))*v2)(*v2);
      ++v2;
      ++v3;
    }
    while ( v3 != v4 );
  }
}

// Address: 0x1000E71E
int __cdecl _initterm_e(_PIFV *First, _PIFV *Last)
{
  int result; // eax

  while ( First != Last )
  {
    if ( *First != nullptr )
    {
      result = ((int (__thiscall *)(_PIFV))*First)(*First);
      if ( result != 0 )
        return result;
    }
    ++First;
  }
  return 0;
}

// Address: 0x1000E763
void __noreturn terminate()
{
  void (__thiscall *v0)(_DWORD); // esi

  v0 = *(void (__thiscall **)(_DWORD))(__acrt_getptd() + 12);
  if ( v0 != nullptr )
    v0(v0);
  abort();
}

// Address: 0x1000E79F
errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  rsize_t v3; // ecx
  int *v4; // eax
  errno_t v5; // esi
  char *v7; // edi
  char v8; // al
  int v9; // [esp-4h] [ebp-8h]

  if ( Destination == nullptr )
    goto LABEL_5;
  v3 = SizeInBytes;
  if ( SizeInBytes == 0 )
    goto LABEL_5;
  if ( Source == nullptr )
  {
    *Destination = 0;
LABEL_5:
    v4 = _errno();
    v9 = 22;
    goto LABEL_6;
  }
  v7 = Destination;
  do
  {
    v8 = v7[Source - Destination];
    *v7++ = v8;
    if ( v8 == 0 )
      break;
    --v3;
  }
  while ( v3 != 0 );
  if ( v3 != 0 )
    return 0;
  *Destination = 0;
  v4 = _errno();
  v9 = 34;
LABEL_6:
  v5 = v9;
  *v4 = v9;
  _invalid_parameter_noinfo();
  return v5;
}

// Address: 0x1000E7F9
void __cdecl _free_base(void *Block)
{
  int *v1; // esi
  DWORD LastError; // eax

  if ( Block != nullptr && !HeapFree(hHeap, 0, Block) )
  {
    v1 = _errno();
    LastError = GetLastError();
    *v1 = __acrt_errno_from_os_error(LastError);
  }
}

// Address: 0x1000E833
void *__cdecl _malloc_base(size_t Size)
{
  size_t v1; // esi
  void *result; // eax

  v1 = Size;
  if ( Size > 0xFFFFFFE0 )
  {
LABEL_8:
    *_errno() = 12;
    return nullptr;
  }
  else
  {
    if ( Size == 0 )
      v1 = 1;
    while ( 1 )
    {
      result = HeapAlloc(hHeap, 0, v1);
      if ( result != nullptr )
        break;
      if ( sub_100138B6() == 0 || _callnewh(v1) == 0 )
        goto LABEL_8;
    }
  }
  return result;
}

// Address: 0x1000E881
void __cdecl __noreturn abort()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi

  if ( __acrt_get_sigabrt_handler() != 0 )
    raise(22);
  if ( (byte_100250F0 & 2) != 0 )
  {
    if ( IsProcessorFeaturePresent(0x17u) )
      __fastfail(7u);
    __acrt_call_reportfault(v0, v1, v2, 3, 1073741845, 1);
  }
  _exit(3);
}

// Address: 0x1000E8C4
void *__cdecl _calloc_base(size_t Count, size_t Size)
{
  SIZE_T v2; // esi
  void *result; // eax

  if ( Count != 0 && 0xFFFFFFE0 / Count < Size )
  {
LABEL_9:
    *_errno() = 12;
    return nullptr;
  }
  else
  {
    v2 = Size * Count;
    if ( Size * Count == 0 )
      v2 = 1;
    while ( 1 )
    {
      result = HeapAlloc(hHeap, 8u, v2);
      if ( result != nullptr )
        break;
      if ( sub_100138B6() == 0 || _callnewh(v2) == 0 )
        goto LABEL_9;
    }
  }
  return result;
}

// Address: 0x1000E921
bool __cdecl __crt_strtox::is_overflow_condition<unsigned long>(char a1, unsigned int a2)
{
  return (a1 & 4) != 0 || (a1 & 1) != 0 && ((a1 & 2) != 0 && a2 > 0x80000000 || (a1 & 2) == 0 && a2 > 0x7FFFFFFF);
}

// Address: 0x1000E954
unsigned int __cdecl __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<char>>(
        struct __crt_locale_pointers *a1,
        unsigned __int8 *a2,
        unsigned __int8 **a3,
        int a4,
        char a5)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned __int8 *v8; // eax
  unsigned __int8 v9; // bl
  unsigned __int8 *v10; // esi
  int v11; // eax
  unsigned __int8 v12; // al
  unsigned __int8 *v13; // esi
  int v14; // edx
  unsigned int v15; // ecx
  char v16; // bl
  int v17; // esi
  int v18; // [esp+8h] [ebp-28h] BYREF
  __crt_locale_pointers Locale; // [esp+Ch] [ebp-24h] BYREF
  char v20; // [esp+14h] [ebp-1Ch]
  unsigned __int8 *v21; // [esp+18h] [ebp-18h]
  unsigned __int64 v22; // [esp+1Ch] [ebp-14h]
  unsigned int v23; // [esp+24h] [ebp-Ch]
  int v24; // [esp+28h] [ebp-8h]
  int v25; // [esp+2Ch] [ebp-4h]

  if ( unknown_libname_34(&a2) == 0 )
    goto LABEL_6;
  v5 = a4;
  if ( a4 != 0 && (a4 < 2 || a4 > 36) )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
LABEL_6:
    v6 = 0;
    goto LABEL_7;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v18, a1);
  v8 = a2;
  v23 = 0;
  v21 = a2;
  while ( 1 )
  {
    v9 = *v8;
    a2 = v8 + 1;
    LOBYTE(v25) = v9;
    if ( _ischartype_l(v9, 8, &Locale) == 0 )
      break;
    v8 = a2;
  }
  v24 = a5 != 0;
  if ( v9 == 45 )
  {
    v24 = (a5 != 0) | 2;
  }
  else if ( v9 != 43 )
  {
    v10 = a2;
    goto LABEL_18;
  }
  v9 = *a2;
  v10 = a2 + 1;
  LOBYTE(v25) = *a2++;
LABEL_18:
  if ( v5 == 0 || v5 == 16 )
  {
    if ( (unsigned __int8)(v9 - 48) > 9u )
    {
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
      {
        if ( (unsigned __int8)(v9 - 65) > 0x19u )
          v11 = -1;
        else
          v11 = (char)v9 - 55;
      }
      else
      {
        v11 = (char)v9 - 87;
      }
    }
    else
    {
      v11 = (char)v9 - 48;
    }
    if ( v11 != 0 )
    {
      if ( v5 == 0 )
        v5 = 10;
    }
    else
    {
      v12 = *v10;
      v13 = v10 + 1;
      BYTE4(v22) = v12;
      a2 = v13;
      if ( v12 == 120 || v12 == 88 )
      {
        if ( v5 == 0 )
          v5 = 16;
        v9 = *v13;
        v10 = v13 + 1;
        LOBYTE(v25) = v9;
        a2 = v10;
      }
      else
      {
        if ( v5 == 0 )
          v5 = 8;
        __crt_strtox::c_string_character_source<char>::unget(SBYTE4(v22));
        v10 = a2;
      }
    }
  }
  LODWORD(v22) = 0xFFFFFFFF % v5;
  v14 = v24;
  HIDWORD(v22) = 0xFFFFFFFF / v5;
  while ( 1 )
  {
    if ( (unsigned __int8)(v9 - 48) > 9u )
    {
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
        v15 = (unsigned __int8)(v9 - 65) > 0x19u ? -1 : (char)v9 - 55;
      else
        v15 = (char)v9 - 87;
    }
    else
    {
      v15 = (char)v9 - 48;
    }
    if ( v15 == -1 || v15 >= v5 )
      break;
    v14 |= 8u;
    if ( __PAIR64__(v23, v15) <= v22 )
      v23 = v15 + v5 * v23;
    else
      v14 |= 4u;
    v9 = *v10++;
    LOBYTE(v25) = v9;
    a2 = v10;
  }
  v24 = v14;
  __crt_strtox::c_string_character_source<char>::unget(v25);
  v16 = v24;
  if ( (v24 & 8) == 0 )
  {
    v6 = 0;
    a2 = v21;
    goto LABEL_63;
  }
  v17 = v23;
  if ( !__crt_strtox::is_overflow_condition<unsigned long>(v24, v23) )
  {
    if ( (v16 & 2) != 0 )
      v17 = -v17;
    goto LABEL_62;
  }
  *_errno() = 34;
  if ( (v16 & 1) == 0 )
  {
    v17 = -1;
LABEL_62:
    v6 = v17;
    goto LABEL_63;
  }
  if ( (v16 & 2) != 0 )
    v6 = 0x80000000;
  else
    v6 = 0x7FFFFFFF;
LABEL_63:
  if ( v20 != 0 )
    *(_DWORD *)(v18 + 848) &= ~2u;
LABEL_7:
  if ( a3 != nullptr )
    *a3 = a2;
  return v6;
}

// Address: 0x1000EB7C
unsigned int __cdecl __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<wchar_t>>(
        struct __crt_locale_pointers *a1,
        wint_t *a2,
        wint_t **a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // ebx
  wint_t *v7; // eax
  wint_t v8; // si
  int v9; // ebx
  wint_t *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  wint_t *v14; // edi
  unsigned int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18[3]; // [esp+8h] [ebp-1Ch] BYREF
  char v19; // [esp+14h] [ebp-10h]
  wint_t *v20; // [esp+18h] [ebp-Ch]
  unsigned int v21; // [esp+1Ch] [ebp-8h]
  int v22; // [esp+20h] [ebp-4h]

  if ( unknown_libname_34(&a2) == 0 )
    goto LABEL_6;
  if ( a4 != 0 && ((int)a4 < 2 || (int)a4 > 36) )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v18, a1);
  v7 = a2;
  v21 = 0;
  v20 = a2;
  while ( 1 )
  {
    v8 = *v7;
    a2 = v7 + 1;
    if ( iswctype(v8, 8u) == 0 )
      break;
    v7 = a2;
  }
  v9 = a5 != 0;
  if ( v8 == 45 )
  {
    v9 |= 2u;
  }
  else if ( v8 != 43 )
  {
    v10 = a2;
    goto LABEL_18;
  }
  v8 = *a2;
  v10 = ++a2;
LABEL_18:
  v22 = 25;
  if ( a4 != 0 && a4 != 16 )
    goto LABEL_94;
  if ( v8 < 0x30u )
    goto LABEL_76;
  if ( v8 >= 0x3Au )
  {
    if ( v8 >= 0xFF10u )
    {
      if ( v8 >= 0xFF1Au )
        v11 = -1;
      else
        v11 = v8 - 65296;
    }
    else
    {
      if ( v8 < 0x660u )
        goto LABEL_76;
      if ( v8 >= 0x66Au )
      {
        if ( v8 < 0x6F0u )
          goto LABEL_76;
        if ( v8 >= 0x6FAu )
        {
          if ( v8 < 0x966u )
            goto LABEL_76;
          if ( v8 >= 0x970u )
          {
            if ( v8 < 0x9E6u )
              goto LABEL_76;
            if ( v8 >= 0x9F0u )
            {
              if ( v8 < 0xA66u )
                goto LABEL_76;
              if ( v8 >= 0xA70u )
              {
                if ( v8 < 0xAE6u )
                  goto LABEL_76;
                if ( v8 >= 0xAF0u )
                {
                  if ( v8 < 0xB66u )
                    goto LABEL_76;
                  if ( v8 >= 0xB70u )
                  {
                    if ( v8 < 0xC66u )
                      goto LABEL_76;
                    if ( v8 >= 0xC70u )
                    {
                      if ( v8 < 0xCE6u )
                        goto LABEL_76;
                      if ( v8 >= 0xCF0u )
                      {
                        if ( v8 < 0xD66u )
                          goto LABEL_76;
                        if ( v8 >= 0xD70u )
                        {
                          if ( v8 < 0xE50u )
                            goto LABEL_76;
                          if ( v8 >= 0xE5Au )
                          {
                            if ( v8 < 0xED0u )
                              goto LABEL_76;
                            if ( v8 >= 0xEDAu )
                            {
                              if ( v8 < 0xF20u )
                                goto LABEL_76;
                              if ( v8 >= 0xF2Au )
                              {
                                if ( v8 < 0x1040u )
                                  goto LABEL_76;
                                if ( v8 >= 0x104Au )
                                {
                                  if ( v8 < 0x17E0u )
                                    goto LABEL_76;
                                  if ( v8 >= 0x17EAu )
                                  {
                                    if ( v8 < 0x1810u || v8 >= 0x181Au )
                                      goto LABEL_76;
                                    v11 = v8 - 6160;
                                  }
                                  else
                                  {
                                    v11 = v8 - 6112;
                                  }
                                }
                                else
                                {
                                  v11 = v8 - 4160;
                                }
                              }
                              else
                              {
                                v11 = v8 - 3872;
                              }
                            }
                            else
                            {
                              v11 = v8 - 3792;
                            }
                          }
                          else
                          {
                            v11 = v8 - 3664;
                          }
                        }
                        else
                        {
                          v11 = v8 - 3430;
                        }
                      }
                      else
                      {
                        v11 = v8 - 3302;
                      }
                    }
                    else
                    {
                      v11 = v8 - 3174;
                    }
                  }
                  else
                  {
                    v11 = v8 - 2918;
                  }
                }
                else
                {
                  v11 = v8 - 2790;
                }
              }
              else
              {
                v11 = v8 - 2662;
              }
            }
            else
            {
              v11 = v8 - 2534;
            }
          }
          else
          {
            v11 = v8 - 2406;
          }
        }
        else
        {
          v11 = v8 - 1776;
        }
      }
      else
      {
        v11 = v8 - 1632;
      }
    }
  }
  else
  {
    v11 = v8 - 48;
  }
  if ( v11 == -1 )
  {
LABEL_76:
    if ( (v8 < 0x41u || v8 > 0x5Au) && (unsigned __int16)(v8 - 97) > (unsigned __int16)v22 )
    {
      v11 = -1;
    }
    else
    {
      v12 = v8;
      if ( (unsigned __int16)(v8 - 97) <= (unsigned __int16)v22 )
        v12 = v8 - 32;
      v11 = v12 - 55;
    }
  }
  if ( v11 != 0 )
  {
    if ( a4 == 0 )
      a4 = 10;
  }
  else
  {
    v13 = *v10;
    v14 = v10 + 1;
    a2 = v14;
    if ( v13 == 120 || v13 == 88 )
    {
      if ( a4 == 0 )
        a4 = 16;
      v8 = *v14;
      v10 = v14 + 1;
      a2 = v10;
    }
    else
    {
      if ( a4 == 0 )
        a4 = 8;
      __crt_strtox::c_string_character_source<wchar_t>::unget(v13);
      v10 = a2;
    }
  }
  while ( 1 )
  {
LABEL_94:
    if ( v8 >= 0x30u )
    {
      if ( v8 < 0x3Au )
      {
        v15 = v8 - 48;
        goto LABEL_149;
      }
      if ( v8 >= 0xFF10u )
      {
        if ( v8 >= 0xFF1Au )
          v15 = -1;
        else
          v15 = v8 - 65296;
LABEL_149:
        if ( v15 != -1 )
          goto LABEL_157;
        goto LABEL_150;
      }
      if ( v8 >= 0x660u )
      {
        if ( v8 < 0x66Au )
        {
          v15 = v8 - 1632;
          goto LABEL_149;
        }
        if ( v8 >= 0x6F0u )
        {
          if ( v8 < 0x6FAu )
          {
            v15 = v8 - 1776;
            goto LABEL_149;
          }
          if ( v8 >= 0x966u )
          {
            if ( v8 < 0x970u )
            {
              v15 = v8 - 2406;
              goto LABEL_149;
            }
            if ( v8 >= 0x9E6u )
            {
              if ( v8 < 0x9F0u )
              {
                v15 = v8 - 2534;
                goto LABEL_149;
              }
              if ( v8 >= 0xA66u )
              {
                if ( v8 < 0xA70u )
                {
                  v15 = v8 - 2662;
                  goto LABEL_149;
                }
                if ( v8 >= 0xAE6u )
                {
                  if ( v8 < 0xAF0u )
                  {
                    v15 = v8 - 2790;
                    goto LABEL_149;
                  }
                  if ( v8 >= 0xB66u )
                  {
                    if ( v8 < 0xB70u )
                    {
                      v15 = v8 - 2918;
                      goto LABEL_149;
                    }
                    if ( v8 >= 0xC66u )
                    {
                      if ( v8 < 0xC70u )
                      {
                        v15 = v8 - 3174;
                        goto LABEL_149;
                      }
                      if ( v8 >= 0xCE6u )
                      {
                        if ( v8 < 0xCF0u )
                        {
                          v15 = v8 - 3302;
                          goto LABEL_149;
                        }
                        if ( v8 >= 0xD66u )
                        {
                          if ( v8 < 0xD70u )
                          {
                            v15 = v8 - 3430;
                            goto LABEL_149;
                          }
                          if ( v8 >= 0xE50u )
                          {
                            if ( v8 < 0xE5Au )
                            {
                              v15 = v8 - 3664;
                              goto LABEL_149;
                            }
                            if ( v8 >= 0xED0u )
                            {
                              if ( v8 < 0xEDAu )
                              {
                                v15 = v8 - 3792;
                                goto LABEL_149;
                              }
                              if ( v8 >= 0xF20u )
                              {
                                if ( v8 < 0xF2Au )
                                {
                                  v15 = v8 - 3872;
                                  goto LABEL_149;
                                }
                                if ( v8 >= 0x1040u )
                                {
                                  if ( v8 < 0x104Au )
                                  {
                                    v15 = v8 - 4160;
                                    goto LABEL_149;
                                  }
                                  if ( v8 >= 0x17E0u )
                                  {
                                    if ( v8 < 0x17EAu )
                                    {
                                      v15 = v8 - 6112;
                                      goto LABEL_149;
                                    }
                                    if ( v8 >= 0x1810u && v8 < 0x181Au )
                                    {
                                      v15 = v8 - 6160;
                                      goto LABEL_149;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_150:
    if ( (v8 < 0x41u || v8 > 0x5Au) && (unsigned __int16)(v8 - 97) > (unsigned __int16)v22 )
    {
      v15 = -1;
    }
    else
    {
      v16 = v8;
      if ( (unsigned __int16)(v8 - 97) <= (unsigned __int16)v22 )
        v16 = v8 - 32;
      v15 = v16 - 55;
    }
LABEL_157:
    if ( v15 == -1 || v15 >= a4 )
      break;
    v9 |= 8u;
    if ( __PAIR64__(v21, v15) <= __PAIR64__(0xFFFFFFFF / a4, 0xFFFFFFFF % a4) )
      v21 = v15 + a4 * v21;
    else
      v9 |= 4u;
    v8 = *v10++;
    a2 = v10;
  }
  __crt_strtox::c_string_character_source<wchar_t>::unget(v8);
  if ( (v9 & 8) != 0 )
  {
    v17 = v21;
    if ( __crt_strtox::is_overflow_condition<unsigned long>(v9, v21) )
    {
      *_errno() = 34;
      if ( (v9 & 1) != 0 )
      {
        if ( (v9 & 2) != 0 )
          v5 = 0x80000000;
        else
          v5 = 0x7FFFFFFF;
        goto LABEL_174;
      }
      v17 = -1;
    }
    else if ( (v9 & 2) != 0 )
    {
      v17 = -v17;
    }
    v5 = v17;
  }
  else
  {
    v5 = 0;
    a2 = v20;
  }
LABEL_174:
  if ( v19 != 0 )
    *(_DWORD *)(v18[0] + 848) &= ~2u;
LABEL_7:
  if ( a3 != nullptr )
    *a3 = a2;
  return v5;
}

// Address: 0x1000F261
void __thiscall __crt_strtox::c_string_character_source<char>::unget(_DWORD *this, char a2)
{
  _BYTE *v2; // ecx

  v2 = (_BYTE *)--*this;
  if ( a2 != 0 && *v2 != a2 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
  }
}

// Address: 0x1000F289
void __thiscall __crt_strtox::c_string_character_source<wchar_t>::unget(_DWORD *this, __int16 a2)
{
  _WORD *v2; // ecx

  *this -= 2;
  v2 = (_WORD *)*this;
  if ( a2 != 0 && *v2 != a2 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
  }
}

// Address: 0x1000F2B5
int __cdecl _chvalidchk_l(const int C, const int Mask, const _locale_t Locale)
{
  int v3; // eax

  if ( Locale != nullptr )
    v3 = *(unsigned __int16 *)(*(_DWORD *)Locale->locinfo + 2 * C);
  else
    v3 = __pctype_func()[C];
  return Mask & v3;
}

// Address: 0x1000F2DF
int __cdecl _ischartype_l(const int C, const int Mask, const _locale_t Locale)
{
  if ( Locale != nullptr && *((int *)Locale->locinfo + 1) > 1 )
    return _isctype_l(C, Mask, Locale);
  else
    return _chvalidchk_l(C, Mask, Locale);
}

// Address: 0x1000F312
int __cdecl _isdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  __crt_locale_pointers Localea; // [esp+4h] [ebp-Ch] BYREF
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, Locale);
  result = _ischartype_l(C, 4, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v3 + 848) &= ~2u;
  return result;
}

// Address: 0x1000F34A
int __cdecl isdigit(int C)
{
  if ( dword_10025F1C != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_100250F8[C] & 4;
}

// Address: 0x1000F377
int __cdecl common_tox_l<&bool internal_isupper_l(int,__crt_locale_pointers * const),&int internal_map_lower(int,__crt_locale_pointers * const)>(
        unsigned int C,
        DWORD dwMapFlags,
        struct __crt_locale_pointers *a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // [esp+4h] [ebp-1Ch] BYREF
  __crt_locale_pointers Locale; // [esp+8h] [ebp-18h] BYREF
  char v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+14h] [ebp-Ch]
  WCHAR DestStr; // [esp+18h] [ebp-8h] BYREF
  char v13; // [esp+1Ah] [ebp-6h]
  CHAR MultiByteStr[2]; // [esp+1Ch] [ebp-4h] BYREF
  char v15; // [esp+1Eh] [ebp-2h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, a3);
  if ( C < 0x100 )
  {
    if ( internal_isupper_l(C, &Locale) )
    {
      v3 = *(unsigned __int8 *)(*((_DWORD *)Locale.locinfo + 37) + C);
      if ( v10 != 0 )
        *(_DWORD *)(v8 + 848) &= ~2u;
      return v3;
    }
    if ( v10 != 0 )
      *(_DWORD *)(v8 + 848) &= ~2u;
    return C;
  }
  *(_WORD *)MultiByteStr = 0;
  v15 = 0;
  if ( *((int *)Locale.locinfo + 1) > 1 && (v11 = (int)C >> 8, _isleadbyte_l(BYTE1(C), &Locale) != 0) )
  {
    MultiByteStr[0] = v11;
    MultiByteStr[1] = C;
    v15 = 0;
    v5 = 2;
  }
  else
  {
    *_errno() = 42;
    MultiByteStr[0] = C;
    v5 = 1;
    MultiByteStr[1] = 0;
  }
  DestStr = 0;
  v13 = 0;
  v6 = __acrt_LCMapStringA(
         &Locale,
         *((wchar_t **)Locale.locinfo + 42),
         dwMapFlags,
         MultiByteStr,
         v5,
         &DestStr,
         3,
         *((_DWORD *)Locale.locinfo + 2),
         1);
  if ( v6 == 0 )
  {
    if ( v10 != 0 )
      *(_DWORD *)(v8 + 848) &= ~2u;
    return C;
  }
  if ( v6 == 1 )
  {
    result = (unsigned __int8)DestStr;
    if ( v10 != 0 )
      *(_DWORD *)(v8 + 848) &= ~2u;
  }
  else
  {
    v7 = HIBYTE(DestStr) | ((unsigned __int8)DestStr << 8);
    if ( v10 != 0 )
      *(_DWORD *)(v8 + 848) &= ~2u;
    return v7;
  }
  return result;
}

// Address: 0x1000F4C1
BOOL __cdecl internal_isupper_l(int C, _locale_t Locale)
{
  return _ischartype_l(C, 1, Locale) != 0;
}

// Address: 0x1000F4DE
int __cdecl _tolower_l(int C, _locale_t Locale)
{
  return common_tox_l<&bool internal_isupper_l(int,__crt_locale_pointers * const),&int internal_map_lower(int,__crt_locale_pointers * const)>(
           C,
           0x100u,
           Locale);
}

// Address: 0x1000F4F8
int __cdecl tolower(int C)
{
  int v1; // ecx

  if ( dword_10025F1C != 0 )
    return _tolower_l(C, nullptr);
  v1 = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return v1;
}

// Address: 0x1000F528
// Microsoft VisualC universal runtime
_DWORD *__cdecl unknown_libname_42(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a3 != nullptr )
    *a3 = a2;
  return result;
}

// Address: 0x1000F543
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  unsigned __int8 **v3; // ecx
  unsigned __int8 *v5; // [esp-14h] [ebp-14h] BYREF
  unsigned __int8 **v6; // [esp-10h] [ebp-10h]
  int v7; // [esp-Ch] [ebp-Ch]
  int v8; // [esp-8h] [ebp-8h]
  unsigned __int8 **v9; // [esp-4h] [ebp-4h]

  v9 = v3;
  v8 = 1;
  v7 = Radix;
  v6 = v3;
  v5 = (unsigned __int8 *)v3;
  unknown_libname_42(&v5, (int)String, EndPtr);
  return __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<char>>(
           nullptr,
           v5,
           v6,
           v7,
           v8);
}

// Address: 0x1000F56F
int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  wint_t **v3; // ecx
  wint_t **v5; // [esp-14h] [ebp-14h] BYREF
  wint_t **v6; // [esp-10h] [ebp-10h]
  unsigned int v7; // [esp-Ch] [ebp-Ch]
  int v8; // [esp-8h] [ebp-8h]
  wint_t **v9; // [esp-4h] [ebp-4h]

  v9 = v3;
  v8 = 1;
  v7 = Radix;
  v6 = v3;
  v5 = v3;
  unknown_libname_42(&v5, (int)String, EndPtr);
  return __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<wchar_t>>(
           nullptr,
           (wint_t *)v5,
           v6,
           v7,
           v8);
}

// Address: 0x1000F59B
int __cdecl _mbtowc_l(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes, _locale_t Locale)
{
  int v5; // edi
  struct __crt_locale_data *locinfo; // edi
  bool v7; // cf
  int v8; // eax
  int v9; // [esp+8h] [ebp-10h] BYREF
  __crt_locale_pointers v10; // [esp+Ch] [ebp-Ch] BYREF
  char v11; // [esp+14h] [ebp-4h]

  if ( SrcCh == nullptr || SrcSizeInBytes == 0 )
    return 0;
  if ( *SrcCh == 0 )
  {
    if ( DstCh != nullptr )
      *DstCh = 0;
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, Locale);
  if ( *((_DWORD *)v10.locinfo + 42) == 0 )
  {
    if ( DstCh != nullptr )
      *DstCh = *(unsigned __int8 *)SrcCh;
    v5 = 1;
    goto LABEL_21;
  }
  if ( _isleadbyte_l(*(unsigned __int8 *)SrcCh, &v10) == 0 )
  {
    v5 = 1;
    if ( MultiByteToWideChar(*((_DWORD *)v10.locinfo + 2), 9u, SrcCh, 1, DstCh, DstCh != nullptr) != 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  locinfo = v10.locinfo;
  if ( *((int *)v10.locinfo + 1) > 1 )
  {
    v7 = SrcSizeInBytes < *((_DWORD *)v10.locinfo + 1);
    if ( (signed int)SrcSizeInBytes < *((_DWORD *)v10.locinfo + 1) )
    {
LABEL_16:
      if ( !v7 && SrcCh[1] != 0 )
        goto LABEL_18;
LABEL_20:
      v5 = -1;
      *_errno() = 42;
      goto LABEL_21;
    }
    v8 = MultiByteToWideChar(
           *((_DWORD *)v10.locinfo + 2),
           9u,
           SrcCh,
           *((_DWORD *)v10.locinfo + 1),
           DstCh,
           DstCh != nullptr);
    locinfo = v10.locinfo;
    if ( v8 != 0 )
    {
LABEL_18:
      v5 = *((_DWORD *)locinfo + 1);
LABEL_21:
      if ( v11 != 0 )
        *(_DWORD *)(v9 + 848) &= ~2u;
      return v5;
    }
  }
  v7 = SrcSizeInBytes < *((_DWORD *)locinfo + 1);
  goto LABEL_16;
}

// Address: 0x1000F695
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x1000F6AF
errno_t __cdecl _wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  errno_t v6; // esi
  int v7; // ecx
  int v8; // [esp+8h] [ebp-14h] BYREF
  int v9; // [esp+Ch] [ebp-10h]
  char v10; // [esp+14h] [ebp-8h]
  BOOL UsedDefaultChar; // [esp+18h] [ebp-4h] BYREF

  if ( MbCh != nullptr || SizeInBytes == 0 )
  {
    if ( SizeConverted != nullptr )
      *SizeConverted = -1;
    if ( SizeInBytes > 0x7FFFFFFF )
    {
      v6 = 22;
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return v6;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, Locale);
    v6 = 0;
    if ( *(_DWORD *)(v9 + 168) != 0 )
    {
      UsedDefaultChar = false;
      v7 = WideCharToMultiByte(*(_DWORD *)(v9 + 8), 0, &WCh, 1, MbCh, SizeInBytes, nullptr, &UsedDefaultChar);
      if ( v7 != 0 )
      {
        if ( !UsedDefaultChar )
        {
          if ( SizeConverted != nullptr )
            *SizeConverted = v7;
          goto LABEL_16;
        }
        goto LABEL_15;
      }
      if ( GetLastError() != 122 )
      {
LABEL_15:
        v6 = 42;
        *_errno() = 42;
        goto LABEL_16;
      }
      if ( MbCh != nullptr && SizeInBytes != 0 )
        memset(MbCh, 0, SizeInBytes);
    }
    else
    {
      if ( WCh > 0xFFu )
      {
        if ( MbCh != nullptr && SizeInBytes != 0 )
          memset(MbCh, 0, SizeInBytes);
        goto LABEL_15;
      }
      if ( MbCh == nullptr )
      {
LABEL_22:
        if ( SizeConverted != nullptr )
          *SizeConverted = 1;
        goto LABEL_16;
      }
      if ( SizeInBytes != 0 )
      {
        *MbCh = WCh;
        goto LABEL_22;
      }
    }
    v6 = 34;
    *_errno() = 34;
    _invalid_parameter_noinfo();
LABEL_16:
    if ( v10 != 0 )
      *(_DWORD *)(v8 + 848) &= ~2u;
    return v6;
  }
  if ( SizeConverted != nullptr )
    *SizeConverted = 0;
  return 0;
}

// Address: 0x1000F7D0
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x1000F7ED
size_t __cdecl strnlen(const char *String, size_t MaxCount)
{
  unsigned int v3; // edx
  const char *k; // ecx
  size_t v5; // ecx
  const char *v6; // ecx
  const char *v8; // edi
  unsigned int v11; // edx
  const char *j; // ecx
  __m128i *v13; // ecx
  __m128i *v14; // edi
  const char *i; // ecx

  if ( dword_10025CE4 < 5 )
  {
    if ( dword_10025CE4 < 1 )
    {
      for ( i = String; i != &String[MaxCount]; ++i )
      {
        if ( *i == 0 )
          break;
      }
      return i - String;
    }
    else
    {
      v11 = ((unsigned __int8)String & 0xF) != 0 ? 16 - ((unsigned __int8)String & 0xF) : 0;
      if ( MaxCount < v11 )
        v11 = MaxCount;
      for ( j = String; j != &String[v11]; ++j )
      {
        if ( *j == 0 )
          break;
      }
      v5 = j - String;
      if ( v5 == v11 )
      {
        v13 = (__m128i *)&String[v5];
        v14 = (__m128i *)((char *)v13 + MaxCount - v11 - (((_BYTE)MaxCount - (_BYTE)v11) & 0xF));
        while ( v13 != v14 && _mm_movemask_epi8(_mm_cmpeq_epi8(*v13, (__m128i)0LL)) == 0 )
          ++v13;
        while ( v13 != (__m128i *)&String[MaxCount] && v13->m128i_i8[0] != 0 )
          v13 = (__m128i *)((char *)v13 + 1);
        return (char *)v13 - String;
      }
    }
  }
  else
  {
    v3 = ((unsigned __int8)String & 0x1F) != 0 ? 32 - ((unsigned __int8)String & 0x1F) : 0;
    if ( MaxCount < v3 )
      v3 = MaxCount;
    for ( k = String; k != &String[v3]; ++k )
    {
      if ( *k == 0 )
        break;
    }
    v5 = k - String;
    if ( v5 == v3 )
    {
      v6 = &String[v5];
      __asm { vxorps  ymm1, ymm1, ymm1 }
      v8 = &v6[MaxCount - v3 - (((_BYTE)MaxCount - (_BYTE)v3) & 0x1F)];
      while ( v6 != v8 )
      {
        __asm
        {
          vpcmpeqb ymm0, ymm1, ymmword ptr [ecx]
          vpmovmskb eax, ymm0
        }
        if ( _EAX != 0 )
          break;
        v6 += 32;
      }
      while ( v6 != &String[MaxCount] && *v6 != 0 )
        ++v6;
      v5 = v6 - String;
      __asm { vzeroupper }
    }
  }
  return v5;
}

// Address: 0x1000F914
size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  const wchar_t *v3; // edx
  const wchar_t *v4; // eax
  size_t v5; // esi
  const wchar_t *j; // edx
  size_t v7; // edx
  const wchar_t *v8; // edx
  const wchar_t *v10; // ecx
  const wchar_t *v13; // eax
  size_t v14; // esi
  const wchar_t *i; // edx
  __m128i *v16; // edx
  __m128i *v17; // ecx
  int v18; // edx
  const wchar_t *v19; // eax
  const wchar_t *v21; // [esp+8h] [ebp-4h]
  const wchar_t *v22; // [esp+8h] [ebp-4h]

  if ( dword_10025CE4 < 5 )
  {
    if ( dword_10025CE4 < 1 )
    {
      v3 = Source;
      v19 = &Source[MaxCount];
      if ( Source != v19 )
      {
        do
        {
          if ( *v3 == 0 )
            break;
          ++v3;
        }
        while ( v3 != v19 );
      }
      goto LABEL_46;
    }
    if ( ((unsigned __int8)Source & 1) != 0 )
    {
      v3 = Source;
      v13 = &Source[MaxCount];
      if ( Source != v13 )
      {
        do
        {
          if ( *v3 == 0 )
            break;
          ++v3;
        }
        while ( v3 != v13 );
      }
      goto LABEL_46;
    }
    v14 = ((16 - ((unsigned __int8)Source & 0xF)) & (unsigned int)-(((unsigned __int8)Source & 0xF) != 0)) >> 1;
    if ( MaxCount < v14 )
      v14 = MaxCount;
    v22 = &Source[v14];
    for ( i = Source; i != v22; ++i )
    {
      if ( *i == 0 )
        break;
    }
    v7 = i - Source;
    if ( v7 == v14 )
    {
      v16 = (__m128i *)&Source[v7];
      v17 = (__m128i *)((char *)v16 + 2 * (MaxCount - v14 - (((_BYTE)MaxCount - (_BYTE)v14) & 0xF)));
      while ( v16 != v17 && _mm_movemask_epi8(_mm_cmpeq_epi16(*v16, (__m128i)0LL)) == 0 )
        ++v16;
      while ( v16 != (__m128i *)&Source[MaxCount] && v16->m128i_i16[0] != 0 )
        v16 = (__m128i *)((char *)v16 + 2);
      v18 = (char *)v16 - (char *)Source;
      return v18 >> 1;
    }
  }
  else
  {
    if ( ((unsigned __int8)Source & 1) != 0 )
    {
      v3 = Source;
      v4 = &Source[MaxCount];
      if ( Source != v4 )
      {
        do
        {
          if ( *v3 == 0 )
            break;
          ++v3;
        }
        while ( v3 != v4 );
      }
LABEL_46:
      v18 = (char *)v3 - (char *)Source;
      return v18 >> 1;
    }
    v5 = ((32 - ((unsigned __int8)Source & 0x1F)) & (unsigned int)-(((unsigned __int8)Source & 0x1F) != 0)) >> 1;
    if ( MaxCount < v5 )
      v5 = MaxCount;
    v21 = &Source[v5];
    for ( j = Source; j != v21; ++j )
    {
      if ( *j == 0 )
        break;
    }
    v7 = j - Source;
    if ( v7 == v5 )
    {
      v8 = &Source[v7];
      __asm { vxorps  ymm1, ymm1, ymm1 }
      v10 = &v8[MaxCount - v5 - (((_BYTE)MaxCount - (_BYTE)v5) & 0x1F)];
      while ( v8 != v10 )
      {
        __asm
        {
          vpcmpeqw ymm0, ymm1, ymmword ptr [edx]
          vpmovmskb eax, ymm0
        }
        if ( _EAX != 0 )
          break;
        v8 += 16;
      }
      while ( v8 != &Source[MaxCount] && *v8 != 0 )
        ++v8;
      v7 = v8 - Source;
      __asm { vzeroupper }
    }
  }
  return v7;
}

// Address: 0x1000FACB
int __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_3518db117f0e7cdb002338c5d3c47b6c_,_lambda_b2ea41f6bbb362cd97d94c6828d90b61_ &,_lambda_abdedf541bb04549bc734292b4a045d4_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  __acrt_lock(*a1);
  replace_current_thread_locale_nolock(
    **(struct __acrt_ptd *const **)a2,
    ***(struct __crt_locale_data *const ***)(a2 + 4));
  return __acrt_unlock(*a3);
}

// Address: 0x1000FB1B
int __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_51b6e8b1eb166f2a3faf91f424b38130_,_lambda_6250bd4b2a391816dd638c3bf72b0bcb_ &,_lambda_0b5a4a3e68152e1d9b943535f5f47bed_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  void *v3; // ecx

  __acrt_lock(*a1);
  v3 = *(void **)(**(_DWORD **)a2 + 72);
  if ( v3 != nullptr && _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 0 && v3 != &unk_100254F0 )
    _free_base(v3);
  return __acrt_unlock(*a3);
}

// Address: 0x1000FB7C
int __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_5b71d36f03204c0beab531769a5b5694_,_lambda_be2b3da3f62db62e9dad5dc70221a656_ &,_lambda_8f9ce462984622f9bf76b59e2aaaf805_>(
        _DWORD *a1,
        struct __acrt_ptd *const **a2,
        _DWORD *a3)
{
  __acrt_lock(*a1);
  replace_current_thread_locale_nolock(**a2, nullptr);
  return __acrt_unlock(*a3);
}

// Address: 0x1000FBC7
int __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_9df27f884b057bc3edfc946cb5b7cf47_,_lambda_e69574bed617af4e071282c136b37893_ &,_lambda_cc0d902bcbbeb830f749456577db4721_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  __acrt_lock(*a1);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_DWORD **)a2 + 72));
  return __acrt_unlock(*a3);
}

// Address: 0x1000FC0F
int __cdecl sub_1000FC0F(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void>::operator()<_lambda_51b6e8b1eb166f2a3faf91f424b38130_,_lambda_6250bd4b2a391816dd638c3bf72b0bcb_ &,_lambda_0b5a4a3e68152e1d9b943535f5f47bed_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x1000FC37
int __cdecl sub_1000FC37(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void>::operator()<_lambda_3518db117f0e7cdb002338c5d3c47b6c_,_lambda_b2ea41f6bbb362cd97d94c6828d90b61_ &,_lambda_abdedf541bb04549bc734292b4a045d4_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x1000FC5F
int __cdecl sub_1000FC5F(int a1, struct __acrt_ptd *const **a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void>::operator()<_lambda_5b71d36f03204c0beab531769a5b5694_,_lambda_be2b3da3f62db62e9dad5dc70221a656_ &,_lambda_8f9ce462984622f9bf76b59e2aaaf805_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x1000FC87
int __cdecl sub_1000FC87(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void>::operator()<_lambda_9df27f884b057bc3edfc946cb5b7cf47_,_lambda_e69574bed617af4e071282c136b37893_ &,_lambda_cc0d902bcbbeb830f749456577db4721_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x1000FCAF
void __cdecl construct_ptd(struct __acrt_ptd *const a1, struct __crt_locale_data **const a2)
{
  struct __acrt_ptd *const *v2; // [esp+0h] [ebp-8h] BYREF
  struct __crt_locale_data **const *v3; // [esp+4h] [ebp-4h] BYREF

  *((_DWORD *)a1 + 6) = 1;
  *(_DWORD *)a1 = &unk_1001CE98;
  *((_DWORD *)a1 + 212) = 1;
  *((_DWORD *)a1 + 18) = &unk_100254F0;
  *((_WORD *)a1 + 54) = 67;
  *((_WORD *)a1 + 185) = 67;
  *((_DWORD *)a1 + 211) = 0;
  v3 = (struct __crt_locale_data **const *)&a1;
  sub_1000FC87(5, (int)&v3);
  v2 = &a1;
  v3 = &a2;
  sub_1000FC37(4, (int)&v2);
}

// Address: 0x1000FD28
void __stdcall destroy_fls(struct __acrt_ptd *Block)
{
  if ( Block != nullptr )
  {
    destroy_ptd(Block);
    _free_base(Block);
  }
}

// Address: 0x1000FD49
void __cdecl destroy_ptd(void **a1)
{
  struct __acrt_ptd *const *v1; // ecx
  void **v2; // eax
  void ***v3; // [esp+0h] [ebp-4h] BYREF

  v3 = (void ***)v1;
  v2 = a1;
  if ( *a1 != &unk_1001CE98 )
  {
    _free_base(*a1);
    v2 = a1;
  }
  _free_base(v2[15]);
  _free_base(a1[12]);
  _free_base(a1[13]);
  _free_base(a1[14]);
  _free_base(a1[10]);
  _free_base(a1[11]);
  _free_base(a1[16]);
  _free_base(a1[17]);
  _free_base(a1[216]);
  v3 = &a1;
  sub_1000FC0F(5, (int)&v3);
  v3 = &a1;
  sub_1000FC5F(4, (struct __acrt_ptd *const **)&v3);
}

// Address: 0x1000FDF2
void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd *const a1, struct __crt_locale_data *const a2)
{
  int v2; // eax

  if ( *((_DWORD *)a1 + 19) != 0 )
  {
    __acrt_release_locale_ref(*((_DWORD *)a1 + 19));
    v2 = *((_DWORD *)a1 + 19);
    if ( (struct __crt_locale_data *)v2 != dword_10025F20
      && (wchar_t **)v2 != &off_100250F8
      && *(_DWORD *)(v2 + 12) == 0 )
    {
      __acrt_free_locale(*((void **)a1 + 19));
    }
  }
  *((_DWORD *)a1 + 19) = a2;
  if ( a2 != nullptr )
    __acrt_add_locale_ref(a2);
}

// Address: 0x1000FE3D
void __acrt_freeptd()
{
  struct __acrt_ptd *Value; // esi

  if ( dword_100250F4 != -1 )
  {
    Value = (struct __acrt_ptd *)__acrt_FlsGetValue(dword_100250F4);
    if ( Value != nullptr )
    {
      __acrt_FlsSetValue(dword_100250F4, nullptr);
      destroy_fls(Value);
    }
  }
}

// Address: 0x1000FE69
void *__acrt_getptd()
{
  DWORD LastError; // esi
  void *Value; // edi
  void *v2; // eax

  LastError = GetLastError();
  if ( dword_100250F4 == -1 || (Value = (void *)__acrt_FlsGetValue(dword_100250F4)) == nullptr )
  {
    v2 = _calloc_base(1u, 0x364u);
    Value = v2;
    if ( v2 == nullptr )
    {
      _free_base(nullptr);
      goto LABEL_9;
    }
    if ( __acrt_FlsSetValue(dword_100250F4, v2) == 0 )
    {
      _free_base(Value);
      goto LABEL_9;
    }
    construct_ptd((struct __acrt_ptd *const)Value, &dword_10025F20);
    _free_base(nullptr);
    if ( Value == nullptr )
    {
LABEL_9:
      SetLastError(LastError);
      abort();
    }
  }
  SetLastError(LastError);
  return Value;
}

// Address: 0x1000FEED
void *__acrt_getptd_noexit()
{
  DWORD LastError; // esi
  int v1; // ebx
  void *Value; // edi
  void *v3; // eax

  LastError = GetLastError();
  v1 = 0;
  if ( dword_100250F4 != -1 )
  {
    Value = (void *)__acrt_FlsGetValue(dword_100250F4);
    if ( Value != nullptr )
      goto LABEL_9;
  }
  v3 = _calloc_base(1u, 0x364u);
  Value = v3;
  if ( v3 != nullptr )
  {
    if ( __acrt_FlsSetValue(dword_100250F4, v3) == 0 )
    {
      _free_base(Value);
      goto LABEL_8;
    }
    construct_ptd((struct __acrt_ptd *const)Value, &dword_10025F20);
    _free_base(nullptr);
    if ( Value == nullptr )
      goto LABEL_8;
LABEL_9:
    SetLastError(LastError);
    return Value;
  }
  _free_base(nullptr);
LABEL_8:
  SetLastError(LastError);
  return (void *)v1;
}

// Address: 0x1000FF72
char __acrt_initialize_ptd()
{
  dword_100250F4 = __acrt_FlsAlloc(destroy_fls);
  if ( dword_100250F4 == -1 )
    return 0;
  if ( __acrt_getptd_noexit() == nullptr )
  {
    __acrt_uninitialize_ptd(0);
    return 0;
  }
  return 1;
}

// Address: 0x1000FF9E
char __acrt_uninitialize_ptd()
{
  if ( dword_100250F4 != -1 )
  {
    __acrt_FlsFree(dword_100250F4);
    dword_100250F4 = -1;
  }
  return 1;
}

// Address: 0x1000FFB8
struct __crt_locale_data *__cdecl sub_1000FFB8(int a1, struct __crt_locale_data **a2)
{
  struct __crt_locale_data *result; // eax

  result = *a2;
  if ( *a2 != dword_10025F20 )
  {
    result = (struct __crt_locale_data *)dword_10025718;
    if ( (dword_10025718 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_locale_data *)__acrt_update_thread_locale_data();
      *a2 = result;
    }
  }
  return result;
}

// Address: 0x1000FFE5
void *__cdecl sub_1000FFE5(int a1, void **a2)
{
  void *result; // eax

  result = *a2;
  if ( *a2 != Block )
  {
    result = (void *)dword_10025718;
    if ( (dword_10025718 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (void *)__acrt_update_thread_multibyte_data();
      *a2 = result;
    }
  }
  return result;
}

// Address: 0x10010012
int __cdecl __acrt_fp_classify(int *a1)
{
  int v1; // ebx
  unsigned int v2; // esi

  v1 = *a1;
  v2 = a1[1];
  if ( ((v2 >> 20) & 0x7FF) != 0x7FF )
    return 0;
  if ( (v2 & 0xFFFFF | v1) == 0 )
    return 1;
  if ( (v2 & 0x80000000) != 0 && v1 == 0 && (v2 & 0xFFFFF) == 0x80000 )
    return 4;
  if ( (v2 & 0x80000) != 0 )
    return 2;
  return 3;
}

// Address: 0x1001007E
bool __cdecl __acrt_fp_is_negative(const double *a1)
{
  return *((int *)a1 + 1) < 0;
}

// Address: 0x1001009C
int __cdecl fp_format_a(
        double *a1,
        char *Str,
        unsigned int a3,
        char *const Destination,
        rsize_t SizeInBytes,
        signed int Size,
        bool a7,
        unsigned int a8,
        struct __crt_locale_pointers *const a9)
{
  int v9; // edi
  char *v10; // esi
  int v11; // edi
  double *v12; // edx
  unsigned int v13; // ecx
  char *v14; // eax
  int v15; // ecx
  char *v16; // esi
  char *v17; // ecx
  char *v18; // esi
  int v19; // ecx
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  char *i; // eax
  __int64 v26; // rcx
  _BYTE *v27; // esi
  _BYTE *v28; // edi
  __int64 v30; // [esp-10h] [ebp-4Ch]
  __int64 v31; // [esp-10h] [ebp-4Ch]
  __int64 v32; // [esp-10h] [ebp-4Ch]
  _DWORD v33[3]; // [esp+Ch] [ebp-30h] BYREF
  char v34; // [esp+18h] [ebp-24h]
  int v35; // [esp+1Ch] [ebp-20h]
  int v36; // [esp+20h] [ebp-1Ch]
  char *v37; // [esp+24h] [ebp-18h]
  int v38; // [esp+2Ch] [ebp-10h]
  int v39; // [esp+30h] [ebp-Ch]
  int v40; // [esp+34h] [ebp-8h]
  unsigned int v41; // [esp+38h] [ebp-4h]

  v9 = Size;
  if ( Size < 0 )
    v9 = 0;
  v10 = Str;
  *Str = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v33, a9);
  if ( a3 > v9 + 11 )
  {
    v12 = a1;
    v13 = *((_DWORD *)a1 + 1);
    v35 = *(_DWORD *)a1;
    if ( ((v13 >> 20) & 0x7FF) == 0x7FF )
    {
      v11 = fp_format_e(a1, Str, a3, Destination, SizeInBytes, v9, false, a8, nullptr);
      if ( v11 != 0 )
      {
        *Str = 0;
      }
      else
      {
        v14 = strrchr(Str, 101);
        if ( v14 != nullptr )
        {
          *v14 = !a7 ? 112 : 80;
          v14[3] = 0;
        }
        v11 = 0;
      }
    }
    else
    {
      if ( (v13 & 0x80000000) != 0 )
      {
        *Str = 45;
        v10 = Str + 1;
      }
      v15 = *((_DWORD *)a1 + 1);
      v39 = 1023;
      v36 = !a7 ? 39 : 7;
      if ( (v15 & 0x7FF00000) != 0 )
      {
        *v10 = 49;
        v16 = v10 + 1;
      }
      else
      {
        *v10 = 48;
        v16 = v10 + 1;
        if ( (*((_DWORD *)a1 + 1) & 0xFFFFF | *(_DWORD *)a1) != 0 )
          v39 = 1022;
        else
          v39 = 0;
      }
      v17 = v16;
      v18 = v16 + 1;
      v37 = v17;
      if ( v9 != 0 )
        *v17 = ***(_BYTE ***)(v33[1] + 136);
      else
        *v17 = 0;
      v38 = *((_DWORD *)a1 + 1) & 0xFFFFF;
      if ( v38 != 0 || *(_DWORD *)a1 != 0 )
      {
        v41 = 0;
        v19 = 983040;
        LOWORD(v20) = 48;
        v40 = 48;
        v38 = 983040;
        do
        {
          if ( v9 <= 0 )
            break;
          LODWORD(v21) = v41 & *(_DWORD *)v12;
          HIDWORD(v21) = v19 & *((_DWORD *)v12 + 1) & 0xFFFFF;
          v22 = (unsigned __int16)((v21 >> v40) + 48);
          if ( v22 > 0x39 )
            LOBYTE(v22) = (!a7 ? 39 : 7) + v22;
          v23 = v38;
          v12 = a1;
          *v18++ = v22;
          v41 = __PAIR64__(v23, v41) >> 4;
          v19 = v23 >> 4;
          v20 = v40 - 4;
          --v9;
          v38 = v19;
          v40 = v20;
        }
        while ( (v20 & 0x8000u) == 0 );
        if ( (v20 & 0x8000u) == 0 )
        {
          LODWORD(v24) = v41 & *(_DWORD *)v12;
          HIDWORD(v24) = v19 & *((_DWORD *)v12 + 1) & 0xFFFFF;
          if ( (unsigned __int16)(v24 >> v40) > 8u )
          {
            for ( i = v18 - 1; *i == 102 || *i == 70; --i )
              *i = 48;
            if ( i == v37 )
            {
              ++*(i - 1);
            }
            else if ( *i == 57 )
            {
              *i = v36 + 58;
            }
            else
            {
              ++*i;
            }
          }
        }
      }
      if ( v9 > 0 )
      {
        memset(v18, 48, v9);
        v18 += v9;
      }
      if ( *v37 == 0 )
        v18 = v37;
      *v18 = !a7 ? 112 : 80;
      v26 = ((*(_QWORD *)a1 >> 52) & 0x7FFLL) - (unsigned int)v39;
      if ( v26 < 0 )
      {
        v18[1] = 45;
        v27 = v18 + 2;
        v26 = -v26;
      }
      else
      {
        v18[1] = 43;
        v27 = v18 + 2;
      }
      v28 = v27;
      *v27 = 48;
      if ( v26 >= 0 )
      {
        if ( v26 >= 1000
          && (v30 = v26,
              v26 %= 1000,
              v36 = (unsigned __int64)(v30 / 1000) >> 32,
              *v27 = v30 / 1000 + 48,
              ++v27,
              v27 != v28)
          || v26 >= 100 )
        {
          v31 = v26;
          v26 %= 100;
          v36 = (unsigned __int64)(v31 / 100) >> 32;
          *v27++ = v31 / 100 + 48;
        }
      }
      if ( v27 != v28 || v26 >= 10 )
      {
        v32 = v26;
        v26 %= 10;
        v36 = (unsigned __int64)(v32 / 10) >> 32;
        *v27++ = v32 / 10 + 48;
      }
      v11 = 0;
      *v27 = v26 + 48;
      v27[1] = 0;
    }
  }
  else
  {
    v11 = 34;
    *_errno() = 34;
    _invalid_parameter_noinfo();
  }
  if ( v34 != 0 )
    *(_DWORD *)(v33[0] + 848) &= ~2u;
  return v11;
}

// Address: 0x1001039F
int __cdecl fp_format_e(
        double *a1,
        char *const a2,
        unsigned int a3,
        char *const Destination,
        rsize_t SizeInBytes,
        int a6,
        bool a7,
        unsigned int a8,
        struct __crt_locale_pointers *const a9)
{
  int v9; // ecx
  int result; // eax
  int v11[3]; // [esp+8h] [ebp-Ch] BYREF

  __acrt_fltout(*a1, a6 + 1, (int)v11, Destination, SizeInBytes);
  v9 = -1;
  if ( a3 != -1 )
    v9 = a3 - (v11[0] == 45) - (a6 > 0);
  result = __acrt_fp_strflt_to_string(&a2[(v11[0] == 45) + (a6 > 0)], v9, a6 + 1, (int)v11);
  if ( result == 0 )
    return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *const)v11, false, a9);
  *a2 = 0;
  return result;
}

// Address: 0x1001043A
int __cdecl fp_format_e_internal(
        char *const a1,
        unsigned int a2,
        int a3,
        bool a4,
        unsigned int a5,
        struct _strflt *const a6,
        bool a7,
        struct __crt_locale_pointers *const a8)
{
  int v8; // eax
  bool v10; // dl
  char *v11; // esi
  char *v12; // esi
  rsize_t v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  _DWORD v17[3]; // [esp+8h] [ebp-10h] BYREF
  char v18; // [esp+14h] [ebp-4h]

  if ( a3 <= 0 )
    v8 = 0;
  else
    v8 = a3;
  if ( a2 > v8 + 9 )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v17, a8);
    v10 = a7;
    if ( a7 )
    {
      shift_bytes(a1, a2, &a1[*(_DWORD *)a6 == 45], a3 > 0);
      v10 = a7;
    }
    v11 = a1;
    if ( *(_DWORD *)a6 == 45 )
    {
      *a1 = 45;
      v11 = a1 + 1;
    }
    if ( a3 > 0 )
    {
      *v11 = v11[1];
      *++v11 = ***(_BYTE ***)(v17[1] + 136);
    }
    v12 = &v11[a3 + !v10];
    v13 = -1;
    if ( a2 != -1 )
      v13 = a2 + a1 - v12;
    if ( strcpy_s(v12, v13, "e+000") != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( a4 )
      *v12 = 69;
    if ( **((_BYTE **)a6 + 2) != 48 )
    {
      v14 = *((_DWORD *)a6 + 1) - 1;
      if ( v14 < 0 )
      {
        v14 = 1 - *((_DWORD *)a6 + 1);
        v12[1] = 45;
      }
      if ( v14 >= 100 )
      {
        v15 = v14 / 100;
        v14 %= 100;
        v12[2] += v15;
      }
      if ( v14 >= 10 )
      {
        v16 = v14 / 10;
        v14 %= 10;
        v12[3] += v16;
      }
      v12[4] += v14;
    }
    if ( a5 == 2 && v12[2] == 48 )
      memmove(v12 + 2, v12 + 3, 3u);
    if ( v18 != 0 )
      *(_DWORD *)(v17[0] + 848) &= ~2u;
    return 0;
  }
  else
  {
    *_errno() = 34;
    _invalid_parameter_noinfo();
    return 34;
  }
}

// Address: 0x10010585
int __cdecl fp_format_f(
        double *a1,
        char *const Src,
        unsigned int a3,
        char *const Destination,
        rsize_t SizeInBytes,
        size_t Size,
        struct __crt_locale_pointers *const a7)
{
  int v7; // ecx
  int result; // eax
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  __acrt_fltout(*a1, Size, (int)&v9, Destination, SizeInBytes);
  v7 = -1;
  if ( a3 != -1 )
    v7 = a3 - (v9 == 45);
  result = __acrt_fp_strflt_to_string(&Src[v9 == 45], v7, Size + v10, (int)&v9);
  if ( result == 0 )
    return fp_format_f_internal(Src, a3, Size, (struct _strflt *const)&v9, false, a7);
  *Src = 0;
  return result;
}

// Address: 0x10010612
int __cdecl fp_format_f_internal(
        char *const Src,
        unsigned int a2,
        signed int Size,
        struct _strflt *const a4,
        bool a5,
        struct __crt_locale_pointers *const a6)
{
  int v6; // edi
  int v7; // ecx
  char *v8; // esi
  int v9; // eax
  char *v10; // esi
  char *v11; // esi
  int v12; // ecx
  _DWORD v14[3]; // [esp+Ch] [ebp-10h] BYREF
  char v15; // [esp+18h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v14, a6);
  v6 = Size;
  v7 = *((_DWORD *)a4 + 1) - 1;
  if ( a5 && v7 == Size )
    *(_WORD *)&Src[v7 + (*(_DWORD *)a4 == 45)] = 48;
  v8 = Src;
  if ( *(_DWORD *)a4 == 45 )
  {
    *Src = 45;
    v8 = Src + 1;
  }
  v9 = *((_DWORD *)a4 + 1);
  if ( v9 > 0 )
  {
    v10 = &v8[v9];
  }
  else
  {
    shift_bytes(Src, a2, v8, 1);
    *v8 = 48;
    v10 = v8 + 1;
  }
  if ( Size > 0 )
  {
    shift_bytes(Src, a2, v10, 1);
    *v10 = ***(_BYTE ***)(v14[1] + 136);
    v11 = v10 + 1;
    v12 = *((_DWORD *)a4 + 1);
    if ( v12 < 0 )
    {
      if ( a5 || -v12 < Size )
        v6 = -v12;
      shift_bytes(Src, a2, v11, v6);
      memset(v11, 48, v6);
    }
  }
  if ( v15 != 0 )
    *(_DWORD *)(v14[0] + 848) &= ~2u;
  return 0;
}

// Address: 0x100106E9
int __cdecl fp_format_g(
        double *a1,
        char *const Src,
        unsigned int a3,
        char *const Destination,
        rsize_t SizeInBytes,
        signed int Size,
        bool a7,
        unsigned int a8,
        struct __crt_locale_pointers *const a9)
{
  BOOL v9; // ecx
  int v10; // eax
  char *v11; // esi
  int result; // eax
  int v13; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  __acrt_fltout(*a1, Size, (int)&v13, Destination, SizeInBytes);
  v9 = v13 == 45;
  v16 = v14 - 1;
  v10 = -1;
  v11 = &Src[v9];
  if ( a3 != -1 )
    v10 = a3 - v9;
  result = __acrt_fp_strflt_to_string(v11, v10, Size, (int)&v13);
  if ( result != 0 )
  {
    *Src = 0;
  }
  else if ( v14 - 1 < -4 || v14 - 1 >= Size )
  {
    return fp_format_e_internal(Src, a3, Size, a7, a8, (struct _strflt *const)&v13, true, a9);
  }
  else
  {
    if ( v16 < v14 - 1 )
      v11[strlen(v11) - 1] = 0;
    return fp_format_f_internal(Src, a3, Size, (struct _strflt *const)&v13, true, a9);
  }
  return result;
}

// Address: 0x100107B1
errno_t __cdecl fp_format_nan_or_infinity(int a1, unsigned __int8 a2, char *Destination, rsize_t SizeInBytes, char a5)
{
  rsize_t v5; // edx
  char *v6; // ecx
  errno_t result; // eax
  char *Source[16]; // [esp+8h] [ebp-44h]

  v5 = SizeInBytes;
  v6 = Destination;
  if ( SizeInBytes >= (unsigned int)a2 + 4 )
  {
    if ( a2 != 0 )
    {
      *Destination = 45;
      v6 = Destination + 1;
      v5 = SizeInBytes - 1;
      Destination[1] = 0;
    }
    Source[8] = "NAN(SNAN)";
    Source[0] = (char *)&unk_1001CFD8;
    Source[1] = (char *)&unk_1001CFD8;
    Source[2] = (char *)&unk_1001CFDC;
    Source[3] = (char *)&unk_1001CFDC;
    Source[10] = "nan(snan)";
    Source[6] = (char *)&unk_1001CFE4;
    Source[7] = (char *)&unk_1001CFE4;
    Source[11] = (char *)&unk_1001CFE4;
    Source[15] = (char *)&unk_1001CFE4;
    Source[12] = "NAN(IND)";
    Source[4] = (char *)&unk_1001CFE0;
    Source[5] = (char *)&unk_1001CFE0;
    Source[9] = (char *)&unk_1001CFE0;
    Source[13] = (char *)&unk_1001CFE0;
    Source[14] = "nan(ind)";
    result = strcpy_s(
               v6,
               v5,
               (&Source[a5 != 0 ? 0 : 2])[(__PAIR64__(4 * a1 - 4 + 1, strlen((&Source[4 * a1 - 4])[a5 != 0 ? 0 : 2]))
                                         - v5) >> 32]);
    if ( result != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  else
  {
    *Destination = 0;
    return 12;
  }
  return result;
}

// Address: 0x100108A9
void __cdecl shift_bytes(char *const a1, unsigned int a2, char *const Src, int a4)
{
  if ( a4 != 0 )
    memmove(&Src[a4], Src, strlen(Src) + 1);
}

// Address: 0x100108DD
errno_t __cdecl __acrt_fp_format(
        double *a1,
        char *Src,
        rsize_t a3,
        char *Destination,
        rsize_t SizeInBytes,
        int a6,
        size_t Size,
        char a8,
        int a9,
        struct __crt_locale_pointers *a10)
{
  unsigned __int8 is_negative; // al
  bool v12; // zf
  int v13; // esi
  unsigned int v14; // [esp-8h] [ebp-18h]
  int v15; // [esp+8h] [ebp-8h]
  char v16; // [esp+Ch] [ebp-4h]

  if ( Src == nullptr || a3 == 0 || Destination == nullptr || SizeInBytes == 0 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( a6 == 65 || a6 == 69 || a6 == 70 || (v16 = 0, a6 == 71) )
    v16 = 1;
  if ( (a8 & 8) == 0 )
  {
    v15 = __acrt_fp_classify((int *)a1);
    if ( v15 != 0 )
    {
      is_negative = __acrt_fp_is_negative(a1);
      return fp_format_nan_or_infinity(v15, is_negative, Src, a3, v16);
    }
  }
  if ( (a8 & 0x10) != 0 )
    v14 = 3;
  else
    v14 = 2;
  if ( a6 > 97 )
  {
    v13 = a6 - 101;
    v12 = a6 == 101;
  }
  else
  {
    if ( a6 == 97 || a6 == 65 )
      return fp_format_a(a1, Src, a3, Destination, SizeInBytes, Size, v16, v14, a10);
    v13 = a6 - 69;
    v12 = a6 == 69;
  }
  if ( v12 )
    return fp_format_e(a1, Src, a3, Destination, SizeInBytes, Size, v16, v14, a10);
  if ( v13 == 1 )
    return fp_format_f(a1, Src, a3, Destination, SizeInBytes, Size, a10);
  return fp_format_g(a1, Src, a3, Destination, SizeInBytes, Size, v16, v14, a10);
}

// Address: 0x10010A27
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

// Address: 0x10010A4D
int __cdecl _fputc_nolock(int Character, FILE *Stream)
{
  if ( (int)--Stream->_base < 0 )
    return __acrt_stdio_flush_and_write_narrow_nolock(Character, Stream);
  *Stream->_ptr++ = Character;
  return (unsigned __int8)Character;
}

// Address: 0x10010A76
int __cdecl _get_printf_count_output()
{
  return dword_10025F10 == (__security_cookie | 1);
}

// Address: 0x10010A8B
char __cdecl __acrt_stdio_begin_temporary_buffering_nolock(FILE *Stream)
{
  int v1; // eax
  void **v3; // edi
  char *v4; // eax

  v1 = _fileno(Stream);
  if ( _isatty(v1) == 0 )
    return 0;
  if ( Stream == __acrt_iob_func(1u) )
  {
    v3 = &dword_10025F14;
  }
  else
  {
    if ( Stream != __acrt_iob_func(2u) )
      return 0;
    v3 = &dword_10025F18;
  }
  ++dword_10025DC4;
  if ( (Stream->_flag & 0x4C0) != 0 )
    return 0;
  _InterlockedOr(&Stream->_flag, 0x282u);
  v4 = (char *)*v3;
  if ( *v3 != nullptr || (*v3 = _malloc_base(0x1000u), _free_base(nullptr), v4 = (char *)*v3, *v3 != nullptr) )
  {
    Stream->_cnt = (int)v4;
    Stream->_ptr = (char *)*v3;
    Stream->_base = (char *)4096;
    Stream->_bufsiz = 4096;
  }
  else
  {
    Stream->_base = (char *)2;
    Stream->_cnt = (int)&Stream->_charbuf;
    Stream->_ptr = (char *)&Stream->_charbuf;
    Stream->_bufsiz = 2;
  }
  return 1;
}

// Address: 0x10010B40
unsigned int __cdecl __acrt_stdio_end_temporary_buffering_nolock(char a1, FILE *Stream)
{
  unsigned int result; // eax

  if ( a1 != 0 )
  {
    result = (unsigned int)Stream->_flag >> 9;
    if ( (Stream->_flag & 0x200) != 0 )
    {
      __acrt_stdio_flush_nolock(Stream);
      _InterlockedAnd(&Stream->_flag, 0xFFFFFD7F);
      Stream->_bufsiz = 0;
      Stream->_cnt = 0;
      Stream->_ptr = nullptr;
      return 0;
    }
  }
  return result;
}

// Address: 0x10010B79
__int32 sub_10010B79()
{
  return _InterlockedExchange(&dword_10025F1C, 1);
}

// Address: 0x10010B84
void __acrt_uninitialize_locale()
{
  if ( dword_10025F20 != (struct __crt_locale_data *)&off_100250F8 )
  {
    __acrt_lock(4);
    dword_10025F20 = (struct __crt_locale_data *)_updatetlocinfoEx_nolock(&dword_10025F20, &off_100250F8);
    __acrt_unlock(4);
  }
}

// Address: 0x10010BD6
void __cdecl initialize_inherited_file_handles_nolock()
{
  int v0; // esi
  LPBYTE v1; // ebx
  int v2; // edi
  HANDLE *v3; // eax
  int v4; // edx
  struct _STARTUPINFOW StartupInfo; // [esp+0h] [ebp-48h] BYREF
  BYTE *v6; // [esp+44h] [ebp-4h]

  GetStartupInfoW(&StartupInfo);
  if ( StartupInfo.cbReserved2 != 0 && StartupInfo.lpReserved2 != nullptr )
  {
    v0 = *(_DWORD *)StartupInfo.lpReserved2;
    v1 = StartupInfo.lpReserved2 + 4;
    v6 = &StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4];
    if ( v0 >= 0x2000 )
      v0 = 0x2000;
    __acrt_lowio_ensure_fh_exists(v0);
    if ( v0 > dword_10026128 )
      v0 = dword_10026128;
    v2 = 0;
    if ( v0 != 0 )
    {
      v3 = (HANDLE *)v6;
      do
      {
        if ( *v3 != (HANDLE)-1 && *v3 != (HANDLE)-2 && (*v1 & 1) != 0 )
        {
          if ( (*v1 & 8) != 0 || GetFileType(*v3) != 0 )
          {
            v4 = dword_10025F28[v2 >> 6] + 48 * (v2 & 0x3F);
            *(_DWORD *)(v4 + 24) = *(_DWORD *)v6;
            *(_BYTE *)(v4 + 40) = *v1;
          }
          v3 = (HANDLE *)v6;
        }
        ++v2;
        ++v3;
        ++v1;
        v6 = (BYTE *)v3;
      }
      while ( v2 != v0 );
    }
  }
}

// Address: 0x10010C8C
void __cdecl initialize_stdio_handles_nolock()
{
  int i; // edi
  int v1; // esi
  HANDLE StdHandle; // eax
  HANDLE v3; // ebx
  DWORD FileType; // eax

  for ( i = 0; i != 3; ++i )
  {
    v1 = dword_10025F28[i >> 6] + 48 * (i & 0x3F);
    if ( *(_DWORD *)(v1 + 24) == -1 || *(_DWORD *)(v1 + 24) == -2 )
    {
      *(_BYTE *)(v1 + 40) = -127;
      if ( i != 0 )
      {
        if ( i == 1 )
          StdHandle = GetStdHandle(0xFFFFFFF5);
        else
          StdHandle = GetStdHandle(0xFFFFFFF4);
      }
      else
      {
        StdHandle = GetStdHandle(0xFFFFFFF6);
      }
      v3 = StdHandle;
      if ( StdHandle == (HANDLE)-1 || StdHandle == nullptr )
        FileType = 0;
      else
        FileType = GetFileType(StdHandle);
      if ( FileType != 0 )
      {
        *(_DWORD *)(v1 + 24) = v3;
        if ( (unsigned __int8)FileType == 2 )
        {
          *(_BYTE *)(v1 + 40) |= 0x40u;
        }
        else if ( (unsigned __int8)FileType == 3 )
        {
          *(_BYTE *)(v1 + 40) |= 8u;
        }
      }
      else
      {
        *(_BYTE *)(v1 + 40) |= 0x40u;
        *(_DWORD *)(v1 + 24) = -2;
        if ( dword_10025DC0 != nullptr )
          *(_DWORD *)(*((_DWORD *)dword_10025DC0 + i) + 16) = -2;
      }
    }
    else
    {
      *(_BYTE *)(v1 + 40) |= 0x80u;
    }
  }
}

// Address: 0x10010D42
char __acrt_initialize_lowio()
{
  char v0; // bl

  __acrt_lock(7);
  v0 = 0;
  if ( __acrt_lowio_ensure_fh_exists(0) == 0 )
  {
    initialize_inherited_file_handles_nolock();
    initialize_stdio_handles_nolock();
    v0 = 1;
  }
  __acrt_unlock(7);
  return v0;
}

// Address: 0x10010D98
char __acrt_uninitialize_lowio()
{
  unsigned int i; // esi

  for ( i = 0; i < 128; ++i )
  {
    if ( dword_10025F28[i] != 0 )
    {
      __acrt_lowio_destroy_handle_array((LPCRITICAL_SECTION)dword_10025F28[i]);
      dword_10025F28[i] = 0;
    }
  }
  return 1;
}

// Address: 0x10010DC4
int (__stdcall *__cdecl try_get_CompareStringEx())(const wchar_t *, unsigned int, const wchar_t *, int, const wchar_t *, int, struct _nlsversioninfo *, void *, int)
{
  return try_get_function(1, "CompareStringEx", L"\a", "CompareStringEx");
}

// Address: 0x10010DDE
FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, _DWORD *a3, _DWORD *a4)
{
  volatile __int32 *v4; // ebx
  uintptr_t v5; // edx
  FARPROC v6; // esi
  _DWORD *v8; // esi
  HMODULE module; // eax
  FARPROC ProcAddress; // eax

  v4 = (volatile __int32 *)((char *)&unk_10026180 + 4 * a1);
  v5 = __security_cookie;
  v6 = (FARPROC)__ROR4__(*v4 ^ __security_cookie, __security_cookie & 0x1F);
  if ( v6 != (FARPROC)-1 )
  {
    if ( v6 != nullptr )
      return v6;
    v8 = a3;
    if ( a3 == a4 )
    {
LABEL_8:
      module = nullptr;
    }
    else
    {
      while ( 1 )
      {
        module = (HMODULE)try_get_module(*v8);
        if ( module != nullptr )
          break;
        if ( ++v8 == a4 )
        {
          v5 = __security_cookie;
          goto LABEL_8;
        }
      }
      v5 = __security_cookie;
    }
    if ( module != nullptr )
    {
      ProcAddress = GetProcAddress(module, lpProcName);
      v6 = ProcAddress;
      if ( ProcAddress != nullptr )
      {
        _InterlockedExchange(v4, unknown_libname_2((int)ProcAddress));
        return v6;
      }
      v5 = __security_cookie;
    }
    _InterlockedExchange(v4, v5 ^ __ROR4__(-1, 32 - (v5 & 0x1F)));
  }
  return nullptr;
}

// Address: 0x10010E7A
HMODULE __cdecl try_get_module(int a1)
{
  volatile __int32 *v1; // edi
  const WCHAR *v3; // ebx
  HMODULE Library; // esi

  v1 = (volatile __int32 *)((char *)&unk_10026130 + 4 * a1);
  if ( *v1 != 0 )
    return *v1 != -1 ? (HMODULE)*v1 : nullptr;
  v3 = (&off_1001D4E8)[a1];
  Library = LoadLibraryExW(v3, nullptr, 0x800u);
  if ( Library != nullptr
    || (GetLastError() != 87 ? (Library = nullptr) : (Library = LoadLibraryExW(v3, nullptr, 0)), Library != nullptr) )
  {
    if ( _InterlockedExchange(v1, (__int32)Library) != 0 )
      FreeLibrary(Library);
    return Library;
  }
  else
  {
    _InterlockedExchange(v1, -1);
    return nullptr;
  }
}

// Address: 0x10010EF5
int __stdcall __acrt_CompareStringEx(
        wchar_t *a1,
        DWORD dwCmpFlags,
        PCNZWCH lpString1,
        int cchCount1,
        PCNZWCH lpString2,
        int cchCount2,
        int a7,
        int a8,
        int a9)
{
  int (__stdcall *CompareString)(const wchar_t *, unsigned int, const wchar_t *, int, const wchar_t *, int, struct _nlsversioninfo *, void *, int); // eax
  LCID v11; // eax

  CompareString = try_get_CompareStringEx();
  if ( CompareString != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)(const wchar_t *, unsigned int, const wchar_t *, int, const wchar_t *, int, struct _nlsversioninfo *, void *, int), wchar_t *, DWORD, PCNZWCH, int, PCNZWCH, int, int, int, int))CompareString)(
             CompareString,
             a1,
             dwCmpFlags,
             lpString1,
             cchCount1,
             lpString2,
             cchCount2,
             a7,
             a8,
             a9);
  v11 = __acrt_LocaleNameToLCID(a1, 0);
  return CompareStringW(v11, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}

// Address: 0x10010F69
DWORD __stdcall __acrt_FlsAlloc(int a1)
{
  FARPROC function; // eax

  function = try_get_function(3, "FlsAlloc", dword_1001D9A0, dword_1001D9A8);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int))function)(function, a1);
  else
    return TlsAlloc();
}

// Address: 0x10010FBF
int __stdcall __acrt_FlsFree(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(4, "FlsFree", dword_1001D9A8, dword_1001D9B0);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}

// Address: 0x10011015
LPVOID __stdcall __acrt_FlsGetValue(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(5, "FlsGetValue", dword_1001D9B0, dword_1001D9B8);
  if ( function != nullptr )
    return (LPVOID)((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}

// Address: 0x1001106B
int __stdcall __acrt_FlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC function; // eax

  function = try_get_function(6, "FlsSetValue", dword_1001D9B8, dword_1001D9C0);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD, LPVOID))function)(function, dwTlsIndex, lpTlsValue);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x100110C4
int __stdcall __acrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC function; // eax

  function = try_get_function(20, "InitializeCriticalSectionEx", "\b", dword_1001D9E4);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))function)(
             function,
             lpCriticalSection,
             dwSpinCount,
             a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x10011126
int __stdcall __acrt_LCMapStringEx(
        wchar_t *a1,
        DWORD dwMapFlags,
        LPCWSTR lpSrcStr,
        int cchSrc,
        LPWSTR lpDestStr,
        int cchDest,
        int a7,
        int a8,
        int a9)
{
  FARPROC function; // eax
  LCID v11; // eax

  function = try_get_function(22, "LCMapStringEx", dword_1001D9E4, "LCMapStringEx");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, wchar_t *, DWORD, LPCWSTR, int, LPWSTR, int, int, int, int))function)(
             function,
             a1,
             dwMapFlags,
             lpSrcStr,
             cchSrc,
             lpDestStr,
             cchDest,
             a7,
             a8,
             a9);
  v11 = __acrt_LocaleNameToLCID(a1, 0);
  return LCMapStringW(v11, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}

// Address: 0x100111AE
int __stdcall __acrt_LocaleNameToLCID(wchar_t *a1, int a2)
{
  FARPROC function; // eax

  function = try_get_function(24, "LocaleNameToLCID", dword_1001D9FC, "LocaleNameToLCID");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, wchar_t *, int))function)(function, a1, a2);
  else
    return __acrt_DownlevelLocaleNameToLCID(a1);
}

// Address: 0x1001120A
char __acrt_initialize_winapi_thunks()
{
  memset32(&unk_10026180, __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F)), 0x20u);
  return 1;
}

// Address: 0x10011230
bool __acrt_is_packaged_app()
{
  FARPROC function; // esi
  int v2; // [esp+0h] [ebp-8h] BYREF

  if ( dword_10026200 != 0 )
    return dword_10026200 == 1;
  function = try_get_function(8, "GetCurrentPackageId", dword_1001D9C0, "GetCurrentPackageId");
  if ( function != nullptr && (v2 = 0, ((int (__thiscall *)(FARPROC, int *, _DWORD))function)(function, &v2, 0) == 122) )
  {
    _InterlockedExchange(&dword_10026200, 1);
    return true;
  }
  else
  {
    _InterlockedExchange(&dword_10026200, 2);
    return false;
  }
}

// Address: 0x100112B7
int __cdecl __acrt_uninitialize_winapi_thunks(char a1)
{
  return __vcrt_uninitialize_winapi_thunks_0(a1);
}

// Address: 0x100112B9
char __cdecl __vcrt_uninitialize_winapi_thunks_0(char a1)
{
  HMODULE *v1; // esi

  if ( a1 == 0 )
  {
    v1 = (HMODULE *)&unk_10026130;
    do
    {
      if ( *v1 != nullptr )
      {
        if ( *v1 != (HMODULE)-1 )
          FreeLibrary(*v1);
        *v1 = nullptr;
      }
      ++v1;
    }
    while ( v1 != (HMODULE *)&unk_10026180 );
  }
  return 1;
}

// Address: 0x100112ED
int __cdecl _fcloseall()
{
  int i; // esi
  int v1; // eax
  int v3; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  __acrt_lock(8);
  for ( i = 3; i != Count; ++i )
  {
    v1 = *((_DWORD *)dword_10025DC0 + i);
    if ( v1 != 0 )
    {
      if ( (*(_DWORD *)(v1 + 12) & 0x2000) != 0 && fclose(*((FILE **)dword_10025DC0 + i)) != -1 )
        ++v3;
      DeleteCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)dword_10025DC0 + i) + 32));
      _free_base(*((void **)dword_10025DC0 + i));
      *((_DWORD *)dword_10025DC0 + i) = 0;
    }
  }
  __acrt_unlock(8);
  return v3;
}

// Address: 0x1001138D
int __cdecl __acrt_stdio_flush_nolock(FILE *Stream)
{
  int *p_flag; // esi
  int cnt; // eax
  char *v4; // edi
  int v5; // eax
  const void *v6; // [esp-Ch] [ebp-10h]

  p_flag = &Stream->_flag;
  if ( (Stream->_flag & 3) != 2 || (*p_flag & 0xC0) == 0 )
    return 0;
  cnt = Stream->_cnt;
  v4 = &Stream->_ptr[-cnt];
  Stream->_ptr = (char *)cnt;
  Stream->_base = nullptr;
  if ( (int)v4 > 0 )
  {
    v6 = (const void *)cnt;
    v5 = _fileno(Stream);
    if ( v4 != (char *)_write(v5, v6, (unsigned int)v4) )
    {
      _InterlockedOr(p_flag, 0x10u);
      return -1;
    }
    if ( (*p_flag & 4) != 0 )
      _InterlockedAnd(p_flag, 0xFFFFFFFD);
  }
  return 0;
}

// Address: 0x100113F3
int __cdecl _fflush_nolock(FILE *Stream)
{
  int v2; // eax

  if ( Stream == nullptr )
    return common_flush_all(0);
  if ( __acrt_stdio_flush_nolock(Stream) != 0 )
    return -1;
  if ( (Stream->_flag & 0x800) != 0 )
  {
    v2 = _fileno(Stream);
    if ( _commit(v2) != 0 )
      return -1;
  }
  return 0;
}

// Address: 0x1001143A
int sub_1001143A()
{
  return common_flush_all(1);
}

// Address: 0x10011443
int __cdecl common_flush_all(int a1)
{
  FILE **v1; // esi
  FILE **v2; // eax
  FILE *v3; // edi
  int result; // eax
  FILE **v5; // [esp+10h] [ebp-2Ch]
  FILE *Stream; // [esp+14h] [ebp-28h]
  int v7; // [esp+18h] [ebp-24h]
  int v8; // [esp+20h] [ebp-1Ch]

  v8 = 0;
  v7 = 0;
  __acrt_lock(8);
  v1 = (FILE **)dword_10025DC0;
  v2 = (FILE **)((char *)dword_10025DC0 + 4 * Count);
  v5 = v2;
  while ( v1 != v2 )
  {
    v3 = *v1;
    Stream = *v1;
    if ( *v1 != nullptr )
    {
      _lock_file(v3);
      if ( (v3->_flag & 0x2000) != 0 )
      {
        if ( a1 == 1 )
        {
          if ( _fflush_nolock(v3) != -1 )
            ++v8;
        }
        else if ( a1 == 0 && (v3->_flag & 2) != 0 && _fflush_nolock(v3) == -1 )
        {
          v7 = -1;
        }
      }
      _unlock_file(Stream);
      v2 = v5;
    }
    ++v1;
  }
  __acrt_unlock(8);
  result = v8;
  if ( a1 != 1 )
    return v7;
  return result;
}

// Address: 0x1001151B
int __cdecl __acrt_stdio_free_buffer_nolock(int a1)
{
  volatile signed __int32 *v1; // edi
  int result; // eax

  v1 = (volatile signed __int32 *)(a1 + 12);
  result = *(_DWORD *)(a1 + 12) >> 13;
  if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
  {
    result = (unsigned __int32)*v1 >> 6;
    if ( (*v1 & 0x40) != 0 )
    {
      _free_base(*(void **)(a1 + 4));
      _InterlockedAnd(v1, 0xFFFFFEBF);
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      return 0;
    }
  }
  return result;
}

// Address: 0x10011559
int __cdecl common_dupenv_s<wchar_t>(int a1, int a2, wchar_t *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(11);
  v4 = common_dupenv_s_nolock<wchar_t>(a1, a2, a3);
  __acrt_unlock(11);
  return v4;
}

// Address: 0x100115B4
int __cdecl common_dupenv_s_nolock<wchar_t>(wchar_t **a1, rsize_t *a2, wchar_t *String2)
{
  int v4; // eax
  const wchar_t *v5; // ebx
  __int16 *v6; // ecx
  int v7; // edx
  __int16 v8; // ax
  wchar_t *v9; // eax
  rsize_t SizeInWords; // [esp+8h] [ebp-4h]

  if ( a1 != nullptr )
  {
    *a1 = nullptr;
    if ( a2 != nullptr )
      *a2 = 0;
    if ( String2 != nullptr )
    {
      v4 = common_getenv_nolock<wchar_t>(String2);
      v5 = (const wchar_t *)v4;
      if ( v4 == 0 )
        return 0;
      v6 = (__int16 *)v4;
      v7 = v4 + 2;
      do
        v8 = *v6++;
      while ( v8 != 0 );
      SizeInWords = (((int)v6 - v7) >> 1) + 1;
      v9 = (wchar_t *)calloc(SizeInWords, 2u);
      *a1 = v9;
      if ( v9 != nullptr )
      {
        if ( wcscpy_s(v9, SizeInWords, v5) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        if ( a2 != nullptr )
          *a2 = SizeInWords;
        return 0;
      }
      *_errno() = 12;
      return 12;
    }
  }
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 22;
}

// Address: 0x10011662
size_t __cdecl common_getenv_nolock<wchar_t>(wchar_t *String2)
{
  const wchar_t **v1; // edi
  size_t v2; // esi
  const wchar_t *v3; // edx
  const wchar_t *v4; // ecx
  __int16 v5; // ax

  v1 = (const wchar_t **)sub_1000E141();
  if ( v1 == nullptr )
    return 0;
  if ( String2 == nullptr )
    return 0;
  v2 = wcslen(String2);
  if ( *v1 == nullptr )
    return 0;
  while ( 1 )
  {
    v3 = *v1;
    v4 = *v1;
    do
      v5 = *v4++;
    while ( v5 != 0 );
    if ( v4 - (*v1 + 1) > v2 && v3[v2] == 61 && _wcsnicoll(v3, String2, v2) == 0 )
      break;
    if ( *++v1 == nullptr )
      return 0;
  }
  return (size_t)&(*v1)[v2 + 1];
}

// Address: 0x100116EC
errno_t __cdecl _wdupenv_s(wchar_t **Buffer, size_t *BufferCount, const wchar_t *VarName)
{
  return common_dupenv_s<wchar_t>((int)Buffer, (int)BufferCount, (wchar_t *)VarName);
}

// Address: 0x1001170A
char __stdcall __crt_seh_guarded_call<bool>::operator()<_lambda_eee62cb4a147bfbb98180ad682ce6e17_,_lambda_5056f36f92c185fae794536d1ce2027b_ &,_lambda_57c77e0e75d6a1e6f8ecaa6bd26c2518_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  char v4; // [esp+13h] [ebp-19h]

  __acrt_lock(*a1);
  v4 = _lambda_5056f36f92c185fae794536d1ce2027b_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x1001175B
char __cdecl sub_1001175B(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<bool>::operator()<_lambda_eee62cb4a147bfbb98180ad682ce6e17_,_lambda_5056f36f92c185fae794536d1ce2027b_ &,_lambda_57c77e0e75d6a1e6f8ecaa6bd26c2518_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x10011783
int __cdecl common_spawnv<wchar_t>(int a1, wchar_t *Str, _DWORD *a3, int a4)
{
  wchar_t *v5; // edi
  wchar_t *v6; // eax
  wchar_t *v7; // ebx
  size_t v8; // edi
  wchar_t *v9; // eax
  wchar_t *v10; // esi
  int v11; // ebx
  unsigned int v12; // kr00_4
  wchar_t *v13; // eax
  wchar_t *v14; // edi
  const wchar_t *v15; // ebx
  int v16; // [esp+4h] [ebp-8h]

  if ( Str == nullptr || *Str == 0 || a3 == nullptr || *a3 == 0 || *(_WORD *)*a3 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  v5 = wcsrchr(Str, 0x5Cu);
  v6 = wcsrchr(Str, 0x2Fu);
  v7 = Str;
  if ( v6 != nullptr )
  {
    if ( v5 == nullptr || v6 > v5 )
      v5 = v6;
  }
  else if ( v5 == nullptr )
  {
    v5 = wcsrchr(Str, 0x3Au);
    if ( v5 == nullptr )
    {
      v8 = wcslen(Str) + 3;
      v9 = (wchar_t *)_calloc_base(v8, 2u);
      v7 = v9;
      if ( v9 == nullptr )
      {
        _free_base(nullptr);
        return -1;
      }
      if ( wcscpy_s(v9, v8, L".\\") != 0 || wcscat_s(v7, v8, Str) != 0 )
        goto LABEL_33;
      v5 = v7 + 2;
      _free_base(nullptr);
    }
  }
  v10 = v7 != Str ? v7 : nullptr;
  if ( wcsrchr(v5, 0x2Eu) != nullptr )
  {
    if ( _waccess_s(v7, 0) != 0 )
LABEL_29:
      v11 = -1;
    else
      v11 = execute_command<wchar_t>(a1, v7, (int)a3, a4);
    goto LABEL_32;
  }
  v12 = wcslen(v7);
  v13 = (wchar_t *)_calloc_base(v12 + 5, 2u);
  v14 = v13;
  if ( v13 != nullptr )
  {
    if ( wcscpy_s(v13, v12 + 5, v7) == 0 )
    {
      v15 = L".com";
      v16 = *_errno();
      while ( 1 )
      {
        if ( wcscpy_s(&v14[v12], 5u, v15) != 0 )
          goto LABEL_33;
        if ( _waccess_s(v14, 0) == 0 )
          break;
        v15 += 5;
        if ( v15 == (const wchar_t *)off_1001DA48 )
        {
          _free_base(v14);
          goto LABEL_29;
        }
      }
      *_errno() = v16;
      v11 = execute_command<wchar_t>(a1, v14, (int)a3, a4);
      goto LABEL_31;
    }
LABEL_33:
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  v11 = -1;
LABEL_31:
  _free_base(v14);
LABEL_32:
  _free_base(v10);
  return v11;
}

// Address: 0x1001198D
int __cdecl execute_command<wchar_t>(unsigned int a1, LPCWSTR lpApplicationName, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  BOOL v7; // eax
  HANDLE hProcess; // ebx
  HANDLE hThread; // esi
  DWORD LastError; // eax
  struct _STARTUPINFOW StartupInfo; // [esp+0h] [ebp-7Ch] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+44h] [ebp-38h] BYREF
  _DWORD v13[3]; // [esp+54h] [ebp-28h] BYREF
  WORD v14; // [esp+60h] [ebp-1Ch] BYREF
  DWORD ExitCode; // [esp+64h] [ebp-18h] BYREF
  void **p_Block; // [esp+68h] [ebp-14h] BYREF
  LPWSTR lpCommandLine; // [esp+6Ch] [ebp-10h] BYREF
  void *Block; // [esp+70h] [ebp-Ch] BYREF
  LPVOID lpEnvironment; // [esp+74h] [ebp-8h] BYREF
  bool v20; // [esp+78h] [ebp-4h] BYREF

  if ( lpApplicationName == nullptr || a3 == 0 )
    goto LABEL_2;
  if ( a1 > 4 )
  {
    *__doserrno() = 0;
LABEL_2:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  lpCommandLine = nullptr;
  lpEnvironment = nullptr;
  v5 = -1;
  if ( __acrt_pack_wide_command_line_and_environment(a3, a4, &lpCommandLine, &lpEnvironment) == -1 )
  {
    _free_base(lpEnvironment);
    lpEnvironment = nullptr;
    _free_base(lpCommandLine);
    return -1;
  }
  ExitCode = (DWORD)&v14;
  p_Block = &Block;
  v20 = a1 != 4;
  Block = nullptr;
  v13[0] = &p_Block;
  v13[1] = &ExitCode;
  v13[2] = &v20;
  if ( sub_1001175B(7, (int)v13) == 0 )
  {
    _free_base(Block);
    Block = nullptr;
    _free_base(lpEnvironment);
    lpEnvironment = nullptr;
    _free_base(lpCommandLine);
    return -1;
  }
  v6 = 0;
  if ( a1 == 4 )
    v6 = 8;
  *__doserrno() = 0;
  memset(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.cbReserved2 = v14;
  StartupInfo.lpReserved2 = (LPBYTE)Block;
  StartupInfo.cb = 68;
  v7 = CreateProcessW(
         lpApplicationName,
         lpCommandLine,
         nullptr,
         nullptr,
         true,
         v6 | 0x400,
         lpEnvironment,
         nullptr,
         &StartupInfo,
         &ProcessInformation);
  hProcess = ProcessInformation.hProcess;
  hThread = ProcessInformation.hThread;
  if ( !v7 )
  {
    LastError = GetLastError();
    __acrt_errno_map_os_error(LastError);
    if ( hThread != (HANDLE)-1 )
      CloseHandle(hThread);
    if ( hProcess != (HANDLE)-1 )
      CloseHandle(hProcess);
LABEL_31:
    _free_base(Block);
    Block = nullptr;
    _free_base(lpEnvironment);
    lpEnvironment = nullptr;
    _free_base(lpCommandLine);
    return v5;
  }
  switch ( a1 )
  {
    case 2u:
      _exit(0);
    case 0u:
      WaitForSingleObject(ProcessInformation.hProcess, 0xFFFFFFFF);
      GetExitCodeProcess(ProcessInformation.hProcess, &ExitCode);
      p_Block = (void **)ExitCode;
      if ( hThread != (HANDLE)-1 )
        CloseHandle(hThread);
      if ( hProcess != (HANDLE)-1 )
        CloseHandle(hProcess);
      v5 = (int)p_Block;
      goto LABEL_31;
    case 4u:
      if ( ProcessInformation.hThread != (HANDLE)-1 )
        CloseHandle(ProcessInformation.hThread);
      if ( hProcess != (HANDLE)-1 )
        CloseHandle(hProcess);
      v5 = 0;
      goto LABEL_31;
    default:
      break;
  }
  if ( ProcessInformation.hThread != (HANDLE)-1 )
    CloseHandle(ProcessInformation.hThread);
  _free_base(Block);
  Block = nullptr;
  _free_base(lpEnvironment);
  lpEnvironment = nullptr;
  _free_base(lpCommandLine);
  return (int)hProcess;
}

// Address: 0x10011BB9
char __thiscall _lambda_5056f36f92c185fae794536d1ce2027b_::operator()(_DWORD ***this)
{
  _DWORD ***v1; // ebx
  unsigned int v2; // esi
  unsigned int v3; // edi
  _DWORD *v5; // eax
  char v6; // bl
  _BYTE *v7; // edx
  _DWORD *v8; // ecx
  unsigned int v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // ebx
  int v12; // ecx
  char v13; // dl
  int i; // ecx
  int v15; // edi
  _DWORD **v16; // ecx
  _DWORD *v18; // [esp+14h] [ebp-10h]
  _DWORD *v19; // [esp+1Ch] [ebp-8h]
  _BYTE *v20; // [esp+20h] [ebp-4h]

  v1 = this;
  ***this = 0;
  ***(this + 1) = 0;
  v2 = dword_10026128;
  if ( dword_10026128 != 0 )
  {
    v3 = dword_10026128 - 1;
    do
    {
      if ( *(_BYTE *)(dword_10025F28[v3 >> 6] + 48 * (v3 & 0x3F) + 40) == 0 )
        break;
      --v3;
      --v2;
    }
    while ( v2 != 0 );
  }
  if ( v2 < 0x3332 )
  {
    v5 = _calloc_base((unsigned __int16)(5 * v2 + 4), 1u);
    v18 = v5;
    if ( v5 != nullptr )
    {
      v7 = v5 + 1;
      *v5 = v2;
      v8 = (_DWORD *)((char *)v5 + v2 + 4);
      v20 = v5 + 1;
      v9 = 0;
      v19 = v8;
      if ( v2 != 0 )
      {
        v10 = v5 + 1;
        v11 = v8;
        do
        {
          v12 = dword_10025F28[v9 >> 6] + 48 * (v9 & 0x3F);
          v13 = *(_BYTE *)(v12 + 40);
          if ( (v13 & 0x10) != 0 )
          {
            *((_BYTE *)v10 + v9) = 0;
            *v11 = -1;
          }
          else
          {
            *((_BYTE *)v10 + v9) = v13;
            *v11 = *(_DWORD *)(v12 + 24);
          }
          ++v9;
          ++v11;
        }
        while ( v9 != v2 );
        v5 = v18;
        v1 = this;
        v7 = v20;
      }
      if ( *(_BYTE *)v1[2] == 0 )
      {
        for ( i = 0; ; ++i )
        {
          v15 = v2 >= 3 ? 3 : v2;
          if ( i == v15 )
            break;
          *v7 = 0;
          *v19 = -1;
          ++v7;
          ++v19;
        }
      }
      ***v1 = v5;
      v16 = v1[1];
      v6 = 1;
      **v16 = (unsigned __int16)(5 * v2 + 4);
    }
    else
    {
      v6 = 0;
      *_errno() = 12;
    }
    _free_base(nullptr);
    return v6;
  }
  else
  {
    *_errno() = 12;
    return 0;
  }
}

// Address: 0x10011CF9
intptr_t __cdecl _wspawnve(int Mode, const wchar_t *FileName, const wchar_t *const *ArgList, const wchar_t *const *Env)
{
  return common_spawnv<wchar_t>(Mode, (wchar_t *)FileName, ArgList, (int)Env);
}

// Address: 0x10011D04
intptr_t __cdecl common_spawnvp<wchar_t>(int Mode, wchar_t *Str, wchar_t **ArgList, wchar_t **Env)
{
  int *v5; // eax
  intptr_t v6; // edi
  errno_t v7; // eax
  void *v8; // ecx
  unsigned __int16 *v9; // eax
  unsigned __int16 *v10; // esi
  int i; // eax
  wchar_t *v12; // edi
  bool v13; // al
  int v14; // [esp+14h] [ebp-2Ch]
  int *v15; // [esp+18h] [ebp-28h]
  int v16; // [esp+20h] [ebp-20h]
  wchar_t Source[2]; // [esp+24h] [ebp-1Ch] BYREF
  void *Block; // [esp+28h] [ebp-18h] BYREF
  bool v19; // [esp+2Fh] [ebp-11h]
  wchar_t VarName[6]; // [esp+30h] [ebp-10h] BYREF

  if ( Str == nullptr || *Str == 0 || ArgList == nullptr || *ArgList == nullptr || **ArgList == 0 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  v5 = _errno();
  v14 = *v5;
  v15 = v5;
  *v5 = 0;
  v6 = _wspawnve(Mode, Str, (const wchar_t *const *)ArgList, (const wchar_t *const *)Env);
  if ( v6 == -1 )
  {
    if ( *_errno() != 2 || wcschr(Str, 0x5Cu) != nullptr || wcschr(Str, 0x2Fu) != nullptr || Str[1] == 58 )
    {
      v6 = -1;
      goto LABEL_44;
    }
    wcscpy(VarName, L"PATH");
    Block = nullptr;
    v7 = _wdupenv_s((wchar_t **)&Block, nullptr, VarName);
    v8 = Block;
    if ( v7 != 0 )
    {
      if ( v7 == 22 )
LABEL_48:
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
    else if ( Block != nullptr )
    {
      v9 = (unsigned __int16 *)_calloc_base(0x104u, 2u);
      v10 = v9;
      if ( v9 != nullptr )
      {
        for ( i = __acrt_wgetpath(Block, v9, 259); ; i = __acrt_wgetpath(v16, v10, 259) )
        {
          v16 = i;
          if ( i == 0 || *v10 == 0 )
            break;
          v12 = &v10[wcslen(v10) - 1];
          if ( v12 != wcsrchr(v10, 0x5Cu) && v12 != wcsrchr(v10, 0x2Fu) )
          {
            wcscpy(Source, L"\\");
            if ( wcscat_s(v10, 0x104u, Source) != 0 )
              goto LABEL_48;
          }
          if ( wcslen(Str) + wcslen(v10) >= 0x104 )
            break;
          if ( wcscat_s(v10, 0x104u, Str) != 0 )
            goto LABEL_48;
          *_errno() = 0;
          v6 = _wspawnve(Mode, v10, (const wchar_t *const *)ArgList, (const wchar_t *const *)Env);
          if ( v6 != -1 )
            goto LABEL_42;
          if ( *_errno() != 2 && *__doserrno() != 21 )
          {
            v19 = wcschr(v10, 0x2Fu) == v10 && wcschr(v10 + 1, 0x2Fu) == v10 + 1;
            v13 = wcschr(v10, 0x5Cu) == v10 && wcschr(v10 + 1, 0x5Cu) == v10 + 1;
            if ( !v19 && !v13 )
              break;
          }
        }
      }
      v6 = -1;
LABEL_42:
      _free_base(v10);
      v8 = Block;
      goto LABEL_43;
    }
    v6 = -1;
LABEL_43:
    _free_base(v8);
    Block = nullptr;
  }
LABEL_44:
  if ( *v15 == 0 && v14 != 0 )
    *v15 = v14;
  return v6;
}

// Address: 0x10011FED
intptr_t __cdecl _wspawnvpe(
        int Mode,
        const wchar_t *FileName,
        const wchar_t *const *ArgList,
        const wchar_t *const *Env)
{
  return common_spawnvp<wchar_t>(Mode, (wchar_t *)FileName, (wchar_t **)ArgList, (wchar_t **)Env);
}

// Address: 0x10011FF8
errno_t __cdecl _waccess_s(const wchar_t *FileName, int AccessMode)
{
  DWORD LastError; // eax
  _BYTE FileInformation[36]; // [esp+4h] [ebp-28h] BYREF

  if ( FileName == nullptr || (AccessMode & 0xFFFFFFF9) != 0 )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( !GetFileAttributesExW(FileName, GetFileExInfoStandard, FileInformation) )
  {
    LastError = GetLastError();
    __acrt_errno_map_os_error(LastError);
    return *_errno();
  }
  if ( (FileInformation[0] & 0x10) == 0 && (FileInformation[0] & 1) != 0 && (AccessMode & 2) != 0 )
  {
    *__doserrno() = 5;
    *_errno() = 13;
    return *_errno();
  }
  return 0;
}

// Address: 0x100120B8
size_t __cdecl _msize(void *Block)
{
  if ( Block != nullptr )
    return HeapSize(hHeap, 0, Block);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

// Address: 0x100120EB
void *__cdecl _realloc_base(void *Block, size_t Size)
{
  void *result; // eax

  if ( Block == nullptr )
    return _malloc_base(Size);
  if ( Size == 0 )
  {
    _free_base(Block);
    return nullptr;
  }
  if ( Size > 0xFFFFFFE0 )
  {
LABEL_6:
    *_errno() = 12;
    return nullptr;
  }
  while ( 1 )
  {
    result = HeapReAlloc(hHeap, 0, Block, Size);
    if ( result != nullptr )
      return result;
    if ( sub_100138B6() == 0 || _callnewh(Size) == 0 )
      goto LABEL_6;
  }
}

// Address: 0x10012154
char __acrt_initialize_locks()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_10026208;
  v1 = 0;
  while ( __acrt_InitializeCriticalSectionEx(v0, 0xFA0u, 0) != 0 )
  {
    ++dword_10026340;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x138 )
      return 1;
  }
  __acrt_uninitialize_locks(0);
  return 0;
}

// Address: 0x10012195
void __cdecl __acrt_lock(int a1)
{
  EnterCriticalSection(&stru_10026208 + a1);
}

// Address: 0x100121AC
char __acrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_10026340;
  if ( dword_10026340 != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_100261F0 + 24 * dword_10026340);
    do
    {
      DeleteCriticalSection(v1);
      --dword_10026340;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

// Address: 0x100121DD
void __cdecl __acrt_unlock(int a1)
{
  LeaveCriticalSection(&stru_10026208 + a1);
}

// Address: 0x100121F4
// Microsoft VisualC universal runtime
int __cdecl CompareFunction(const void *a1, const void *a2)
{
  if ( a2 <= a1 )
    return a2 < a1;
  else
    return -1;
}

// Address: 0x1001220C
int __cdecl common_expand_argv_wildcards<char>(const char **a1, _DWORD *a2)
{
  const char **v3; // esi
  const char **v4; // edi
  const char **v5; // ebx
  unsigned __int8 *v6; // eax
  int v7; // eax
  int v8; // edi
  unsigned int v9; // edx
  unsigned int v10; // esi
  const char **v11; // edx
  int v12; // ebx
  const char *v13; // ecx
  _BYTE *buffer_for_argv; // esi
  char *v15; // edx
  const char *v16; // ecx
  unsigned int v17; // edx
  const char *v18; // [esp-10h] [ebp-34h]
  int v19; // [esp+4h] [ebp-20h] BYREF
  const char **v20; // [esp+8h] [ebp-1Ch]
  int v21; // [esp+Ch] [ebp-18h]
  int v22; // [esp+10h] [ebp-14h]
  char *v23; // [esp+14h] [ebp-10h]
  unsigned int v24; // [esp+18h] [ebp-Ch]
  const char *v25; // [esp+1Ch] [ebp-8h]
  char Control[4]; // [esp+20h] [ebp-4h] BYREF

  if ( a2 != nullptr )
  {
    v3 = a1;
    *a2 = 0;
    v4 = nullptr;
    v5 = nullptr;
    v19 = 0;
    v20 = nullptr;
    v21 = 0;
    if ( *a1 != nullptr )
    {
      while ( 1 )
      {
        strcpy(Control, "*?");
        v6 = (unsigned __int8 *)strpbrk(*v3, Control);
        v7 = v6 != nullptr
           ? expand_argument_wildcards<char>(*v3, v6, (int)&v19)
           : copy_and_add_argument_to_buffer<char>((char *)*v3, nullptr, 0, (int)&v19);
        v8 = v7;
        if ( v7 != 0 )
          break;
        if ( *++v3 == nullptr )
        {
          v5 = v20;
          v4 = (const char **)v19;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_10:
      v25 = nullptr;
      *(_DWORD *)Control = 0;
      v9 = v5 - v4 + 1;
      v24 = v9;
      v10 = v5 >= v4 ? (unsigned int)((char *)v5 - (char *)v4 + 3) >> 2 : 0;
      if ( v10 != 0 )
      {
        v11 = v4;
        v12 = 0;
        do
        {
          v13 = *v11;
          *(_DWORD *)Control = *v11 + 1;
          v12 += (int)&v13[strlen(v13) + 1 - *(_DWORD *)Control + 1];
          ++v11;
          ++v25;
        }
        while ( v25 != (const char *)v10 );
        v9 = v24;
        *(_DWORD *)Control = v12;
        v5 = v20;
      }
      buffer_for_argv = __acrt_allocate_buffer_for_argv(v9, *(unsigned int *)Control, 1u);
      if ( buffer_for_argv != nullptr )
      {
        v23 = &buffer_for_argv[4 * v24];
        v15 = v23;
        v24 = (unsigned int)v23;
        if ( v4 != v5 )
        {
          v22 = buffer_for_argv - (_BYTE *)v4;
          do
          {
            v16 = *v4;
            v25 = *v4 + 1;
            v18 = *v4;
            v25 = (const char *)(&v16[strlen(v16) + 1] - v25 + 1);
            if ( strncpy_s(v15, *(_DWORD *)Control + v23 - v15, v18, (rsize_t)v25) != 0 )
              _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            v17 = v24;
            *(const char **)((char *)v4++ + v22) = (const char *)v24;
            v15 = (char *)&v25[v17];
            v24 = (unsigned int)v15;
          }
          while ( v4 != v5 );
        }
        v8 = 0;
        *a2 = buffer_for_argv;
      }
      else
      {
        v8 = -1;
      }
      _free_base(nullptr);
    }
    unknown_libname_44(&v19);
    return v8;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x1001239C
int __cdecl copy_and_add_argument_to_buffer<char>(char *a1, char *Source, rsize_t MaxCount)
{
  unsigned int v3; // ecx
  size_t v5; // ebx
  char *v6; // eax
  char *v7; // esi
  int v8; // esi
  rsize_t v9; // [esp+0h] [ebp-4h]

  v3 = strlen(a1) + 1;
  v9 = v3;
  if ( v3 > -1 - MaxCount )
    return 12;
  v5 = v3 + MaxCount + 1;
  v6 = (char *)_calloc_base(v5, 1u);
  v7 = v6;
  if ( MaxCount != 0 && strncpy_s(v6, v5, Source, MaxCount) != 0 || strncpy_s(&v7[MaxCount], v5 - MaxCount, a1, v9) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v8 = sub_100125DB(v7);
  _free_base(nullptr);
  return v8;
}

// Address: 0x10012432
int __cdecl expand_argument_wildcards<char>(unsigned __int8 *lpFileName, unsigned __int8 *Pos, _DWORD *a3)
{
  unsigned __int8 v4; // al
  unsigned __int8 v5; // dl
  int v7; // edi
  bool v8; // al
  HANDLE FirstFile; // esi
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp-150h]
  int MaxCount; // [esp+10h] [ebp-14Ch]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+18h] [ebp-144h] BYREF

  while ( Pos != lpFileName )
  {
    v4 = *Pos;
    if ( *Pos == 47 || v4 == 92 || v4 == 58 )
      break;
    Pos = _mbsdec(lpFileName, Pos);
  }
  v5 = *Pos;
  if ( *Pos == 58 && Pos != lpFileName + 1 )
    return copy_and_add_argument_to_buffer<char>((char *)lpFileName, nullptr, 0);
  v7 = 0;
  v8 = v5 == 47 || v5 == 92 || v5 == 58;
  MaxCount = v8 ? Pos - lpFileName + 1 : 0;
  memset(&FindFileData, 0, sizeof(FindFileData));
  FirstFile = FindFirstFileExA((LPCSTR)lpFileName, FindExInfoStandard, &FindFileData, FindExSearchNameMatch, nullptr, 0);
  if ( FirstFile == (HANDLE)-1 )
  {
    v10 = copy_and_add_argument_to_buffer<char>((char *)lpFileName, nullptr, 0);
  }
  else
  {
    v12 = (a3[1] - *a3) >> 2;
    while ( 1 )
    {
      if ( FindFileData.cFileName[0] != 46
        || FindFileData.cFileName[1] != 0 && (FindFileData.cFileName[1] != 46 || FindFileData.cFileName[2] != 0) )
      {
        v10 = copy_and_add_argument_to_buffer<char>(FindFileData.cFileName, (char *)lpFileName, MaxCount);
        if ( v10 != 0 )
          break;
      }
      if ( !FindNextFileA(FirstFile, &FindFileData) )
      {
        v11 = (a3[1] - *a3) >> 2;
        if ( v12 != v11 )
          qsort((void *)(*a3 + 4 * v12), v11 - v12, 4u, CompareFunction);
        goto LABEL_18;
      }
    }
  }
  v7 = v10;
LABEL_18:
  if ( FirstFile != (HANDLE)-1 )
    FindClose(FirstFile);
  return v7;
}

// Address: 0x100125B6
// Microsoft VisualC universal runtime
void __thiscall unknown_libname_44(void ***this)
{
  void **i; // esi

  for ( i = *this; i != *(this + 1); ++i )
    _free_base(*i);
  _free_base(*this);
}

// Address: 0x100125DB
int __thiscall sub_100125DB(_DWORD **this, void *Block)
{
  int v3; // edi

  v3 = unknown_libname_45();
  if ( v3 != 0 )
  {
    _free_base(Block);
    return v3;
  }
  else
  {
    *(*(this + 1))++ = Block;
    return 0;
  }
}

// Address: 0x10012610
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_45(int *this)
{
  int v2; // edi
  int v4; // eax
  unsigned int v5; // edi
  char *v6; // eax
  int v7; // esi

  v2 = *(this + 2);
  if ( *(this + 1) != v2 )
    return 0;
  if ( *this == 0 )
  {
    *this = (int)_calloc_base(4u, 4u);
    _free_base(nullptr);
    v4 = *this;
    if ( *this != 0 )
    {
      *(this + 1) = v4;
      *(this + 2) = v4 + 16;
      return 0;
    }
    return 12;
  }
  v5 = (v2 - *this) >> 2;
  if ( v5 > 0x7FFFFFFF )
    return 12;
  v6 = sub_1000D53D((void *)*this, 2 * v5, 4u);
  if ( v6 != nullptr )
  {
    *this = (int)v6;
    *(this + 1) = (int)&v6[4 * v5];
    *(this + 2) = (int)&v6[8 * v5];
    v7 = 0;
  }
  else
  {
    v7 = 12;
  }
  _free_base(nullptr);
  return v7;
}

// Address: 0x10012697
int __cdecl __acrt_expand_narrow_argv_wildcards(const char **a1, _DWORD *a2)
{
  return common_expand_argv_wildcards<char>(a1, a2);
}

// Address: 0x100126A2
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_c76fdea48760d5f9368b465f31df4405_,_lambda_e378711a6f6581bf7f0efd7cdf97f5d9_ &,_lambda_e927a58b2a85c081d733e8c6192ae2d2_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  _lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c_::operator()(a2);
  __acrt_unlock(*a3);
}

// Address: 0x100126E5
void __cdecl sub_100126E5(int a1, int a2)
{
  int v2; // [esp+0h] [ebp-Ch] BYREF
  int v3; // [esp+4h] [ebp-8h] BYREF

  v3 = a1;
  v2 = a1;
  __crt_seh_guarded_call<void>::operator()<_lambda_c76fdea48760d5f9368b465f31df4405_,_lambda_e378711a6f6581bf7f0efd7cdf97f5d9_ &,_lambda_e927a58b2a85c081d733e8c6192ae2d2_>(
    &v2,
    a2,
    &v3);
}

// Address: 0x1001270D
volatile signed __int32 *__thiscall _lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c_::operator()(void *this)
{
  volatile signed __int32 *result; // eax

  dword_10026348 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 4);
  dword_1002634C = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 8);
  dword_10026344 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 540);
  memcpy_s(&unk_10026350, 0xCu, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 12), 0xCu);
  memcpy_s(&unk_100252E8, 0x101u, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 24), 0x101u);
  memcpy_s(&unk_100253F0, 0x100u, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 281), 0x100u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 0 && Block != &unk_100254F0 )
    _free_base(Block);
  Block = *(void **)(**(_DWORD **)this + 72);
  result = *(volatile signed __int32 **)(**(_DWORD **)this + 72);
  _InterlockedIncrement(result);
  return result;
}

// Address: 0x100127D1
const wchar_t *__cdecl CPtoLocaleName(int a1)
{
  switch ( a1 )
  {
    case 932:
      return L"ja-JP";
    case 936:
      return L"zh-CN";
    case 949:
      return L"ko-KR";
    case 950:
      return L"zh-TW";
    default:
      break;
  }
  return nullptr;
}

// Address: 0x1001280F
UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax
  _DWORD v2[3]; // [esp+0h] [ebp-10h] BYREF
  char v3; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v2, nullptr);
  dword_1002635C = 0;
  result = a1;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_1002635C = 1;
      result = GetOEMCP();
      break;
    case 0xFFFFFFFD:
      dword_1002635C = 1;
      result = GetACP();
      break;
    case 0xFFFFFFFC:
      dword_1002635C = 1;
      result = *(_DWORD *)(v2[1] + 8);
      break;
    default:
      break;
  }
  if ( v3 != 0 )
    *(_DWORD *)(v2[0] + 848) &= ~2u;
  return result;
}

// Address: 0x10012882
void __cdecl setSBCS(struct __crt_multibyte_data *a1)
{
  _BYTE *v1; // esi
  int v2; // ecx
  int v3; // edi
  _BYTE *v4; // ecx
  int i; // edx

  v1 = (char *)a1 + 24;
  memset((char *)a1 + 24, 0, 0x101u);
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 135) = 0;
  v2 = 257;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  v3 = &unk_100254F0 - (_UNKNOWN *)a1;
  do
  {
    *v1 = v1[v3];
    ++v1;
    --v2;
  }
  while ( v2 != 0 );
  v4 = (char *)a1 + 281;
  for ( i = 256; i != 0; --i )
  {
    *v4 = v4[v3];
    ++v4;
  }
}

// Address: 0x100128E7
void __cdecl setSBUpLow(struct __crt_multibyte_data *a1)
{
  unsigned int i; // eax
  unsigned int j; // eax
  BYTE *LeadByte; // ecx
  unsigned int v4; // edx
  int v5; // ecx
  WORD v6; // ax
  char v7; // al
  char *v8; // edx
  unsigned int v9; // ecx
  int v10; // eax
  char *v11; // edx
  char v12; // al
  struct _cpinfo CPInfo; // [esp+14h] [ebp-718h] BYREF
  WORD CharType[512]; // [esp+28h] [ebp-704h] BYREF
  WCHAR v15[128]; // [esp+428h] [ebp-304h] BYREF
  WCHAR DestStr[128]; // [esp+528h] [ebp-204h] BYREF
  CHAR MultiByteStr[256]; // [esp+628h] [ebp-104h] BYREF

  if ( GetCPInfo(*((_DWORD *)a1 + 1), &CPInfo) )
  {
    for ( i = 0; i < 0x100; ++i )
      MultiByteStr[i] = i;
    LOBYTE(j) = CPInfo.LeadByte[0];
    LeadByte = CPInfo.LeadByte;
    MultiByteStr[0] = 32;
    while ( (_BYTE)j != 0 )
    {
      v4 = LeadByte[1];
      for ( j = (unsigned __int8)j; j <= v4 && j < 0x100; ++j )
        MultiByteStr[j] = 32;
      LeadByte += 2;
      LOBYTE(j) = *LeadByte;
    }
    __acrt_GetStringTypeA(nullptr, 1u, MultiByteStr, 256, CharType, *((_DWORD *)a1 + 1), 0);
    __acrt_LCMapStringA(
      nullptr,
      *((wchar_t **)a1 + 135),
      0x100u,
      MultiByteStr,
      256,
      DestStr,
      256,
      *((_DWORD *)a1 + 1),
      0);
    __acrt_LCMapStringA(nullptr, *((wchar_t **)a1 + 135), 0x200u, MultiByteStr, 256, v15, 256, *((_DWORD *)a1 + 1), 0);
    v5 = 0;
    while ( 1 )
    {
      v6 = CharType[v5];
      if ( (v6 & 1) != 0 )
      {
        *((_BYTE *)a1 + v5 + 25) |= 0x10u;
        v7 = *((_BYTE *)DestStr + v5);
      }
      else
      {
        if ( (v6 & 2) == 0 )
        {
          *((_BYTE *)a1 + v5 + 281) = 0;
          goto LABEL_18;
        }
        *((_BYTE *)a1 + v5 + 25) |= 0x20u;
        v7 = *((_BYTE *)v15 + v5);
      }
      *((_BYTE *)a1 + v5 + 281) = v7;
LABEL_18:
      if ( (unsigned int)++v5 >= 0x100 )
        return;
    }
  }
  v8 = (char *)a1 + 281;
  v9 = 0;
  v10 = -97 - ((_DWORD)a1 + 281);
  do
  {
    v11 = &v8[v9];
    if ( (unsigned int)&v11[v10 + 32] <= 0x19 )
    {
      *((_BYTE *)a1 + v9 + 25) |= 0x10u;
      v12 = v9 + 32;
LABEL_25:
      *v11 = v12;
      goto LABEL_27;
    }
    if ( (unsigned int)&v11[v10] <= 0x19 )
    {
      *((_BYTE *)a1 + v9 + 25) |= 0x20u;
      v12 = v9 - 32;
      goto LABEL_25;
    }
    *v11 = 0;
LABEL_27:
    v10 = -97 - ((_DWORD)a1 + 281);
    v8 = (char *)a1 + 281;
    ++v9;
  }
  while ( v9 < 0x100 );
}

// Address: 0x10012A7B
int __cdecl setmbcp_internal(UINT a1, bool a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // esi
  _DWORD *v6; // ecx
  int v7; // [esp-14h] [ebp-20h]
  int SystemCP; // [esp+0h] [ebp-Ch] BYREF
  void *v9; // [esp+8h] [ebp-4h] BYREF

  v9 = __acrt_getptd();
  __acrt_update_thread_multibyte_data();
  SystemCP = getSystemCP(a1);
  if ( SystemCP == *(_DWORD *)(*((_DWORD *)v9 + 18) + 4) )
    return 0;
  v3 = _malloc_base(0x220u);
  v4 = v3;
  if ( v3 != nullptr )
  {
    qmemcpy(v3, *((const void **)v9 + 18), 0x220u);
    v4 = v3;
    v7 = SystemCP;
    *v3 = 0;
    v5 = _setmbcp_nolock(v7, (struct __crt_multibyte_data *)v3);
    if ( v5 != -1 )
    {
      if ( !a2 )
        sub_10010B79();
      if ( _InterlockedDecrement(*((volatile signed __int32 **)v9 + 18)) == 0
        && *((_UNKNOWN **)v9 + 18) != &unk_100254F0 )
      {
        _free_base(*((void **)v9 + 18));
      }
      *v4 = 1;
      v6 = v4;
      v4 = nullptr;
      *((_DWORD *)v9 + 18) = v6;
      if ( (*((_BYTE *)v9 + 848) & 2) == 0 && (dword_10025718 & 1) == 0 )
      {
        SystemCP = (int)&v9;
        sub_100126E5(5, (int)&SystemCP);
        if ( a2 )
          off_100251B4 = Block;
      }
      goto LABEL_7;
    }
    *_errno() = 22;
  }
  v5 = -1;
LABEL_7:
  _free_base(v4);
  return v5;
}

// Address: 0x10012B7C
char __acrt_initialize_multibyte()
{
  if ( byte_10026360 == 0 )
  {
    setmbcp_internal(0xFFFFFFFD, true);
    byte_10026360 = 1;
  }
  return 1;
}

// Address: 0x10012B9A
void *__acrt_update_thread_multibyte_data()
{
  _DWORD *v0; // eax
  _DWORD *v1; // edi
  void *v2; // esi

  v0 = __acrt_getptd();
  v1 = v0;
  if ( (dword_10025718 & v0[212]) != 0 && v0[19] != 0 )
  {
    v2 = (void *)v0[18];
  }
  else
  {
    __acrt_lock(5);
    v2 = (void *)v1[18];
    if ( v2 != Block )
    {
      if ( v2 != nullptr
        && _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 0
        && v2 != &unk_100254F0 )
      {
        _free_base(v2);
      }
      v1[18] = Block;
      v2 = Block;
      _InterlockedIncrement((volatile signed __int32 *)Block);
    }
    __acrt_unlock(5);
  }
  if ( v2 == nullptr )
    abort();
  return v2;
}

// Address: 0x10012C3C
int __cdecl _setmbcp_nolock(UINT a1, struct __crt_multibyte_data *a2)
{
  UINT SystemCP; // ebx
  unsigned int v4; // edi
  int v5; // ecx
  unsigned int v6; // eax
  BYTE *k; // eax
  BYTE v8; // cl
  unsigned int v9; // edx
  unsigned int m; // ecx
  char *v11; // eax
  int n; // ecx
  _BYTE *v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned int i; // eax
  unsigned int v16; // edx
  _WORD *v17; // ecx
  __int16 *v18; // edx
  int j; // edi
  __int16 v20; // ax
  int v21; // [esp+8h] [ebp-20h]
  int v22; // [esp+Ch] [ebp-1Ch]
  _BYTE *v23; // [esp+Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+10h] [ebp-18h] BYREF

  SystemCP = getSystemCP(a1);
  if ( SystemCP != 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v22 = 0;
    do
    {
      if ( dword_100251F8[v6] == SystemCP )
      {
        memset((char *)a2 + 24, 0, 0x101u);
        v21 = 48 * v22;
        v13 = (char *)&unk_10025208 + 48 * v22;
        v23 = v13;
        do
        {
          v14 = v13;
          if ( *v13 != 0 )
          {
            do
            {
              LOBYTE(i) = v14[1];
              if ( (_BYTE)i == 0 )
                break;
              v16 = *v14;
              for ( i = (unsigned __int8)i; v16 <= i && v16 < 0x100; i = v14[1] )
                *((_BYTE *)a2 + v16++ + 25) |= byte_100251F0[v4];
              v14 += 2;
            }
            while ( *v14 != 0 );
            v13 = v23;
          }
          ++v4;
          v13 += 8;
          v23 = v13;
        }
        while ( v4 < 4 );
        *((_DWORD *)a2 + 1) = SystemCP;
        *((_DWORD *)a2 + 2) = 1;
        *((_DWORD *)a2 + 135) = CPtoLocaleName(SystemCP);
        v17 = (_WORD *)((char *)a2 + 12);
        v18 = (__int16 *)((char *)&unk_100251FC + v21);
        for ( j = 6; j != 0; --j )
        {
          v20 = *v18++;
          *v17++ = v20;
        }
LABEL_37:
        setSBUpLow(a2);
        return 0;
      }
      ++v5;
      v6 += 12;
      v22 = v5;
    }
    while ( v6 < 60 );
    if ( SystemCP == 65000 || SystemCP == 65001 || !IsValidCodePage((unsigned __int16)SystemCP) )
      return -1;
    if ( GetCPInfo(SystemCP, &CPInfo) )
    {
      memset((char *)a2 + 24, 0, 0x101u);
      *((_DWORD *)a2 + 1) = SystemCP;
      *((_DWORD *)a2 + 135) = 0;
      if ( CPInfo.MaxCharSize <= 1 )
      {
        *((_DWORD *)a2 + 2) = 0;
      }
      else
      {
        for ( k = CPInfo.LeadByte; *k != 0; k += 2 )
        {
          v8 = k[1];
          if ( v8 == 0 )
            break;
          v9 = v8;
          for ( m = *k; m <= v9; ++m )
            *((_BYTE *)a2 + m + 25) |= 4u;
        }
        v11 = (char *)a2 + 26;
        for ( n = 254; n != 0; --n )
          *v11++ |= 8u;
        *((_DWORD *)a2 + 135) = CPtoLocaleName(*((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 2) = 1;
      }
      *((_DWORD *)a2 + 3) = 0;
      *((_DWORD *)a2 + 4) = 0;
      *((_DWORD *)a2 + 5) = 0;
      goto LABEL_37;
    }
    if ( dword_1002635C == 0 )
      return -1;
    setSBCS(a2);
    return 0;
  }
  else
  {
    setSBCS(a2);
    return 0;
  }
}

// Address: 0x10012E2D
static errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  int *v5; // eax
  errno_t v6; // [esp-8h] [ebp-Ch]

  if ( SourceSize == 0 )
    return 0;
  if ( Destination == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( Source != nullptr && DestinationSize >= SourceSize )
  {
    memmove_0(Destination, Source, SourceSize);
    return 0;
  }
  memset(Destination, 0, DestinationSize);
  if ( Source == nullptr )
  {
    v5 = _errno();
    v6 = 22;
LABEL_12:
    *v5 = v6;
    _invalid_parameter_noinfo();
    return v6;
  }
  if ( DestinationSize < SourceSize )
  {
    v5 = _errno();
    v6 = 34;
    goto LABEL_12;
  }
  return 22;
}

// Address: 0x10012EAE
int __cdecl x_ismbbtype_l(struct __crt_locale_pointers *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  int v4; // edx
  int v5; // eax
  _DWORD v7[3]; // [esp+4h] [ebp-10h] BYREF
  char v8; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a1);
  if ( (a4 & *(_BYTE *)(v7[2] + a2 + 25)) != 0
    || ((v4 = 0, a3 == 0) ? (v5 = 0) : (v5 = (unsigned __int16)(a3 & *(_WORD *)(*(_DWORD *)v7[1] + 2 * a2))), v5 != 0) )
  {
    v4 = 1;
  }
  if ( v8 != 0 )
    *(_DWORD *)(v7[0] + 848) &= ~2u;
  return v4;
}

// Address: 0x10012F07
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x10012F1F
char __acrt_initialize_command_line()
{
  dword_10026370 = (int)GetCommandLineA();
  dword_10026374 = (int)GetCommandLineW();
  return 1;
}

// Address: 0x10012F38
char sub_10012F38()
{
  return 1;
}

// Address: 0x10012F3B
errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  rsize_t v3; // ecx
  int *v4; // eax
  errno_t v5; // esi
  wchar_t *v7; // edi
  wchar_t v8; // ax
  int v9; // [esp-4h] [ebp-8h]

  if ( Destination == nullptr )
    goto LABEL_5;
  v3 = SizeInWords;
  if ( SizeInWords == 0 )
    goto LABEL_5;
  if ( Source == nullptr )
  {
    *Destination = 0;
LABEL_5:
    v4 = _errno();
    v9 = 22;
    goto LABEL_6;
  }
  v7 = Destination;
  do
  {
    v8 = *(wchar_t *)((char *)v7 + (char *)Source - (char *)Destination);
    *v7++ = v8;
    if ( v8 == 0 )
      break;
    --v3;
  }
  while ( v3 != 0 );
  if ( v3 != 0 )
    return 0;
  *Destination = 0;
  v4 = _errno();
  v9 = 34;
LABEL_6:
  v5 = v9;
  *v4 = v9;
  _invalid_parameter_noinfo();
  return v5;
}

// Address: 0x10012F9F
const wchar_t *__cdecl find_end_of_double_null_terminated_sequence(const wchar_t *a1)
{
  const unsigned __int16 *i; // edx

  for ( i = a1; *i != 0; i += wcslen(i) + 1 )
    ;
  return i + 1;
}

// Address: 0x10012FD6
CHAR *__dcrt_get_narrow_environment_from_os()
{
  const wchar_t *EnvironmentStringsW; // eax
  WCHAR *v1; // esi
  int v2; // ebx
  size_t v3; // eax
  CHAR *v4; // edi
  CHAR *v5; // ebx
  int cbMultiByte; // [esp+Ch] [ebp-4h]

  EnvironmentStringsW = GetEnvironmentStringsW();
  v1 = (WCHAR *)EnvironmentStringsW;
  if ( EnvironmentStringsW != nullptr
    && (v2 = find_end_of_double_null_terminated_sequence(EnvironmentStringsW) - EnvironmentStringsW,
        v3 = WideCharToMultiByte(0, 0, v1, v2, nullptr, 0, nullptr, nullptr),
        cbMultiByte = v3,
        v3 != 0) )
  {
    v4 = (CHAR *)_malloc_base(v3);
    if ( v4 != nullptr && WideCharToMultiByte(0, 0, v1, v2, v4, cbMultiByte, nullptr, nullptr) != 0 )
    {
      v5 = v4;
      v4 = nullptr;
    }
    else
    {
      v5 = nullptr;
    }
    _free_base(v4);
  }
  else
  {
    v5 = nullptr;
  }
  if ( v1 != nullptr )
    FreeEnvironmentStringsW(v1);
  return v5;
}

// Address: 0x10013059
void *__dcrt_get_wide_environment_from_os()
{
  const wchar_t *EnvironmentStringsW; // eax
  wchar_t *v1; // esi
  void *v2; // edi
  size_t v3; // ebx
  void *v4; // eax

  EnvironmentStringsW = GetEnvironmentStringsW();
  v1 = (wchar_t *)EnvironmentStringsW;
  if ( EnvironmentStringsW == nullptr )
    return nullptr;
  v3 = 2 * (find_end_of_double_null_terminated_sequence(EnvironmentStringsW) - EnvironmentStringsW);
  v4 = _malloc_base(v3);
  v2 = v4;
  if ( v4 != nullptr )
    memmove_0(v4, v1, v3);
  _free_base(nullptr);
  FreeEnvironmentStringsW(v1);
  return v2;
}

// Address: 0x100130A9
int __cdecl common_set_variable_in_environment_nolock<wchar_t>(wchar_t *Str, int a2)
{
  wchar_t *v3; // edi
  wchar_t *v4; // eax
  _DWORD *v5; // esi
  int v6; // ebx
  bool v7; // cl
  _DWORD *v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  wchar_t *v11; // eax
  char *v12; // esi
  unsigned int v13; // eax
  wchar_t *v14; // ecx
  wchar_t *v15; // edx
  __int16 v16; // ax
  wchar_t *v17; // esi
  const WCHAR *v18; // ecx
  wchar_t *v19; // [esp+4h] [ebp-Ch]
  size_t v20; // [esp+4h] [ebp-Ch]
  rsize_t SizeInWords; // [esp+8h] [ebp-8h]
  rsize_t SizeInWordsa; // [esp+8h] [ebp-8h]
  rsize_t SizeInWordsb; // [esp+8h] [ebp-8h]
  bool v24; // [esp+Fh] [ebp-1h]

  if ( Str == nullptr )
  {
    *_errno() = 22;
    return -1;
  }
  v3 = Str;
  v4 = wcschr(Str, 0x3Du);
  v19 = v4;
  if ( v4 == nullptr || v4 == Str )
    goto LABEL_11;
  v5 = dword_10025EEC;
  v6 = 0;
  v7 = v4[1] == 0;
  v24 = v7;
  if ( dword_10025EEC == dword_10025EF0 )
  {
    v8 = (_DWORD *)copy_environment<wchar_t>(dword_10025EEC);
    v7 = v24;
    v5 = v8;
    dword_10025EEC = v8;
  }
  if ( v5 != nullptr )
    goto LABEL_20;
  if ( a2 == 0 || dword_10025EE8 == 0 )
  {
    if ( v7 )
      goto LABEL_13;
    if ( dword_10025EE8 == 0 )
    {
      dword_10025EE8 = (int)_calloc_base(1u, 4u);
      _free_base(nullptr);
      if ( dword_10025EE8 == 0 )
        goto LABEL_12;
      v5 = dword_10025EEC;
      if ( dword_10025EEC != nullptr )
      {
LABEL_20:
        v20 = v19 - Str;
        v9 = find_in_environment_nolock<wchar_t>(Str, v20);
        SizeInWords = v9;
        if ( v9 >= 0 && *v5 != 0 )
        {
          _free_base((void *)v5[v9]);
          v10 = SizeInWords;
          if ( !v24 )
          {
            v11 = Str;
            v3 = nullptr;
            v5[SizeInWords] = Str;
            goto LABEL_34;
          }
          while ( v5[v10] != 0 )
          {
            v5[v10] = v5[v10 + 1];
            ++v10;
          }
          v12 = sub_1000D53D(v5, v10, 4u);
          _free_base(nullptr);
          v11 = Str;
          if ( v12 == nullptr )
          {
LABEL_34:
            if ( a2 != 0 )
            {
              v14 = v11;
              v15 = v11 + 1;
              do
                v16 = *v14++;
              while ( v16 != 0 );
              SizeInWordsb = v14 - v15 + 2;
              v17 = (wchar_t *)_calloc_base(SizeInWordsb, 2u);
              if ( v17 != nullptr )
              {
                if ( wcscpy_s(v17, SizeInWordsb, Str) != 0 )
                  _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                v18 = &v17[v20 + 1];
                *((_WORD *)v18 - 1) = 0;
                if ( !SetEnvironmentVariableW(v17, !v24 ? v18 : nullptr) )
                {
                  v6 = -1;
                  *_errno() = 42;
                }
              }
              _free_base(v17);
            }
            goto LABEL_13;
          }
        }
        else
        {
          if ( v24 )
            goto LABEL_13;
          v13 = -v9;
          SizeInWordsa = v13;
          if ( v13 + 2 < v13 )
            goto LABEL_12;
          if ( v13 + 2 >= 0x3FFFFFFF )
            goto LABEL_12;
          v12 = sub_1000D53D(v5, v13 + 2, 4u);
          _free_base(nullptr);
          if ( v12 == nullptr )
            goto LABEL_12;
          v3 = nullptr;
          v11 = Str;
          *(_DWORD *)&v12[4 * SizeInWordsa] = Str;
          *(_DWORD *)&v12[4 * SizeInWordsa + 4] = 0;
        }
        dword_10025EEC = v12;
        goto LABEL_34;
      }
    }
    dword_10025EEC = _calloc_base(1u, 4u);
    _free_base(nullptr);
LABEL_19:
    v5 = dword_10025EEC;
    if ( dword_10025EEC == nullptr )
      goto LABEL_12;
    goto LABEL_20;
  }
  if ( sub_1000E141() != nullptr )
    goto LABEL_19;
LABEL_11:
  *_errno() = 22;
LABEL_12:
  v6 = -1;
LABEL_13:
  _free_base(v3);
  return v6;
}

// Address: 0x100132E6
_BYTE *__cdecl copy_environment<wchar_t>(const wchar_t **a1)
{
  const wchar_t **v1; // edi
  const wchar_t **v3; // eax
  int i; // ecx
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  int v7; // ebx
  const wchar_t *v8; // ecx
  __int16 v9; // ax
  rsize_t SizeInWords; // [esp+4h] [ebp-8h]

  v1 = a1;
  if ( a1 == nullptr )
    return nullptr;
  v3 = a1;
  for ( i = 0; *v3 != nullptr; ++i )
    ++v3;
  v5 = _calloc_base(i + 1, 4u);
  v6 = v5;
  if ( v5 == nullptr )
LABEL_14:
    abort();
  if ( *a1 != nullptr )
  {
    v7 = v5 - (_BYTE *)a1;
    do
    {
      v8 = *v1;
      do
        v9 = *v8++;
      while ( v9 != 0 );
      SizeInWords = v8 - (*v1 + 1) + 1;
      *(const wchar_t **)((char *)v1 + v7) = (const wchar_t *)_calloc_base(SizeInWords, 2u);
      _free_base(nullptr);
      if ( *(const wchar_t **)((char *)v1 + v7) == nullptr )
        goto LABEL_14;
      if ( wcscpy_s(*(wchar_t **)((char *)v1 + v7), SizeInWords, *v1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      ++v1;
    }
    while ( *v1 != nullptr );
  }
  _free_base(nullptr);
  return v6;
}

// Address: 0x100133A4
int __cdecl find_in_environment_nolock<wchar_t>(wchar_t *String1, size_t MaxCount)
{
  _BYTE *v2; // edi
  const wchar_t **v3; // esi
  int v4; // eax

  v2 = dword_10025EEC;
  v3 = (const wchar_t **)dword_10025EEC;
  if ( *(_DWORD *)dword_10025EEC == 0 )
    return -(((char *)v3 - v2) >> 2);
  while ( 1 )
  {
    if ( _wcsnicoll(String1, *v3, MaxCount) == 0 )
    {
      v4 = (*v3)[MaxCount];
      if ( v4 == 61 || (_WORD)v4 == 0 )
        break;
    }
    if ( *++v3 == nullptr )
      return -(((char *)v3 - v2) >> 2);
  }
  return ((char *)v3 - v2) >> 2;
}

// Address: 0x100133FB
int __cdecl __dcrt_set_variable_in_wide_environment_nolock(wchar_t *a1, int a2)
{
  return common_set_variable_in_environment_nolock<wchar_t>(a1, a2);
}

// Address: 0x10013406
bool __acrt_initialize_heap()
{
  hHeap = GetProcessHeap();
  return hHeap != nullptr;
}

// Address: 0x10013417
char sub_10013417()
{
  hHeap = nullptr;
  return 1;
}

// Address: 0x10013421
char __cdecl __acrt_execute_initializers(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // esi
  void (__cdecl **v4)(_DWORD); // esi

  if ( a1 == a2 )
    return 1;
  v3 = a1;
  do
  {
    if ( *v3 != 0 && ((unsigned __int8 (__thiscall *)(_DWORD))*v3)(*v3) == 0 )
      break;
    v3 += 2;
  }
  while ( v3 != a2 );
  if ( v3 == a2 )
    return 1;
  if ( v3 != a1 )
  {
    v4 = (void (__cdecl **)(_DWORD))(v3 - 1);
    do
    {
      if ( *(v4 - 1) != nullptr && *v4 != nullptr )
        (*v4)(0);
      v4 -= 2;
    }
    while ( v4 + 1 != a1 );
  }
  return 0;
}

// Address: 0x100134A4
char __cdecl __acrt_execute_uninitializers(void (__cdecl **a1)(_DWORD), void (__cdecl **a2)(_DWORD))
{
  void (__cdecl **v2)(_DWORD); // esi

  if ( a1 != a2 )
  {
    v2 = a2 - 1;
    do
    {
      if ( *v2 != nullptr )
        (*v2)(0);
      v2 -= 2;
    }
    while ( v2 + 1 != a1 );
  }
  return 1;
}

// Address: 0x100134F1
int __stdcall __crt_seh_guarded_call<void (__cdecl *)(int)>::operator()<_lambda_a048d3beccc847880fc8490e18b82769_,_lambda_ec61778202f4f5fc7e7711acc23c3bca_ &,_lambda_f7496a158712204296dd6628a163878e_>(
        int *a1,
        int a2,
        int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = __ROR4__(dword_10026388 ^ __security_cookie, __security_cookie & 0x1F);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x1001354B
int __cdecl sub_1001354B(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void (__cdecl *)(int)>::operator()<_lambda_a048d3beccc847880fc8490e18b82769_,_lambda_ec61778202f4f5fc7e7711acc23c3bca_ &,_lambda_f7496a158712204296dd6628a163878e_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x10013573
void (__cdecl **__cdecl get_global_action_nolock(int a1))(int)
{
  switch ( a1 )
  {
    case 2:
      return (void (__cdecl **)(int))&dword_10026380;
    case 6:
      return (void (__cdecl **)(int))&dword_10026388;
    case 15:
      return (void (__cdecl **)(int))&dword_1002638C;
    default:
      break;
  }
  if ( a1 != 21 )
  {
    if ( a1 != 22 )
      return nullptr;
    return (void (__cdecl **)(int))&dword_10026388;
  }
  return (void (__cdecl **)(int))&dword_10026384;
}

// Address: 0x100135B5
struct __crt_signal_action_t *__cdecl siglookup(int a1, struct __crt_signal_action_t *const a2)
{
  struct __crt_signal_action_t *result; // eax

  result = a2;
  while ( *((_DWORD *)result + 1) != a1 )
  {
    result = (struct __crt_signal_action_t *)((char *)result + 12);
    if ( result == (struct __crt_signal_action_t *const)((char *)a2 + 144) )
      return nullptr;
  }
  return result;
}

// Address: 0x100135DD
int __fastcall __acrt_get_sigabrt_handler(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  return sub_1001354B(3, (int)&v2);
}

// Address: 0x100135F4
int __usercall __acrt_initialize_signal_handlers@<eax>(int a1@<edx>, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  unknown_libname_40(&dword_10026380, a1, a2);
  unknown_libname_40(&dword_10026384, v2, a2);
  unknown_libname_40(&dword_10026388, v3, a2);
  return unknown_libname_40(&dword_1002638C, v4, a2);
}

// Address: 0x1001362F
int *__cdecl __fpecode()
{
  return (int *)((char *)__acrt_getptd() + 8);
}

// Address: 0x10013638
int __cdecl raise(int Signal)
{
  struct __crt_signal_action_t *const *v1; // ebx
  void (__cdecl **global_action_nolock)(int); // eax
  char v3; // cl
  struct __crt_signal_action_t *const *v4; // eax
  struct __crt_signal_action_t *v6; // eax
  void (__cdecl *v7)(_DWORD); // edx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  bool v11; // [esp+14h] [ebp-38h]
  int v12; // [esp+18h] [ebp-34h]
  int v13; // [esp+1Ch] [ebp-30h]
  uintptr_t *v14; // [esp+24h] [ebp-28h]
  void (__cdecl *v15)(_DWORD); // [esp+28h] [ebp-24h]
  char v16; // [esp+2Fh] [ebp-1Dh]

  v1 = nullptr;
  v12 = 0;
  v16 = 1;
  if ( Signal > 8 )
  {
    if ( Signal != 11 )
    {
      if ( Signal == 15 || Signal > 20 && Signal <= 22 )
        goto LABEL_11;
      goto LABEL_15;
    }
  }
  else if ( Signal != 8 )
  {
    if ( Signal == 2 )
    {
LABEL_11:
      global_action_nolock = get_global_action_nolock(Signal);
      goto LABEL_17;
    }
    if ( Signal != 4 )
    {
      if ( Signal == 6 )
        goto LABEL_11;
      goto LABEL_15;
    }
  }
  v4 = (struct __crt_signal_action_t *const *)__acrt_getptd_noexit();
  v1 = v4;
  if ( v4 == nullptr )
    return -1;
  v6 = siglookup(Signal, *v4);
  if ( v6 == nullptr )
  {
LABEL_15:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  global_action_nolock = (void (__cdecl **)(int))((char *)v6 + 8);
  v3 = 0;
  v16 = 0;
LABEL_17:
  v14 = (uintptr_t *)global_action_nolock;
  v13 = 0;
  if ( v3 != 0 )
  {
    __acrt_lock(3);
    v3 = v16;
  }
  if ( v3 != 0 )
  {
    v7 = (void (__cdecl *)(_DWORD))__ROR4__(*v14 ^ __security_cookie, __security_cookie & 0x1F);
    v3 = v16;
  }
  else
  {
    v7 = (void (__cdecl *)(_DWORD))*v14;
  }
  v15 = v7;
  v11 = v7 == (void (__cdecl *)(_DWORD))1;
  if ( v7 == (void (__cdecl *)(_DWORD))1 )
    goto LABEL_41;
  if ( v7 == nullptr )
  {
    if ( v3 != 0 )
      __acrt_unlock(3);
    _exit(3);
  }
  if ( Signal == 8 || Signal == 11 || Signal == 4 )
  {
    v13 = *((_DWORD *)v1 + 1);
    *((_DWORD *)v1 + 1) = 0;
    if ( Signal != 8 )
      goto LABEL_36;
    v12 = *__fpecode();
    *__fpecode() = 140;
  }
  if ( Signal == 8 )
  {
    v8 = (int)*v1 + 36;
    v9 = (int)*v1 + 144;
    while ( v8 != v9 )
    {
      *(_DWORD *)(v8 + 8) = 0;
      v8 += 12;
    }
    goto LABEL_41;
  }
LABEL_36:
  *v14 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
LABEL_41:
  if ( v16 != 0 )
    __acrt_unlock(3);
  if ( !v11 )
  {
    if ( Signal == 8 )
    {
      v10 = __acrt_getptd();
      ((void (__cdecl *)(int, _DWORD))v15)(8, v10[2]);
    }
    else
    {
      v15(Signal);
    }
    if ( Signal == 8 || Signal == 11 || Signal == 4 )
    {
      *((_DWORD *)v1 + 1) = v13;
      if ( Signal == 8 )
        *((_DWORD *)__acrt_getptd() + 2) = v12;
    }
  }
  return 0;
}

// Address: 0x10013840
BOOL __acrt_has_user_matherr()
{
  return __ROR4__(dword_10026390 ^ __security_cookie, __security_cookie & 0x1F) != 0;
}

// Address: 0x10013859
int __usercall sub_10013859@<eax>(int a1@<edx>, int a2)
{
  return unknown_libname_40(&dword_10026390, a1, a2);
}

// Address: 0x1001386D
int __cdecl __acrt_invoke_user_matherr(int a1)
{
  int (__cdecl *v1)(int); // esi

  v1 = (int (__cdecl *)(int))__ROR4__(dword_10026390 ^ __security_cookie, __security_cookie & 0x1F);
  if ( v1 != nullptr )
    return v1(a1);
  else
    return 0;
}

// Address: 0x100138B6
int sub_100138B6()
{
  return dword_10026394;
}

// Address: 0x100138BC
const unsigned __int16 *__cdecl __pctype_func()
{
  struct __crt_locale_data *v0; // ecx
  void *v1; // eax
  const unsigned __int16 **v3; // [esp+0h] [ebp-4h] BYREF

  v3 = (const unsigned __int16 **)v0;
  v1 = __acrt_getptd();
  v3 = *((const unsigned __int16 ***)v1 + 19);
  sub_1000FFB8((int)v1, (struct __crt_locale_data **)&v3);
  return *v3;
}

// Address: 0x100138E2
int __cdecl iswctype(wint_t C, wctype_t Type)
{
  WORD v3; // ax
  WCHAR SrcStr; // [esp+0h] [ebp-8h] BYREF
  WORD CharType; // [esp+4h] [ebp-4h] BYREF

  if ( C == 0xFFFF )
    return 0;
  if ( C >= 0x100u )
  {
    SrcStr = C;
    CharType = 0;
    if ( !GetStringTypeW(1u, &SrcStr, 1, &CharType) )
      return 0;
    v3 = CharType;
  }
  else
  {
    v3 = *(_WORD *)&off_10025714[2 * C];
  }
  return Type & v3;
}

// Address: 0x10013941
int __cdecl _isctype_l(int C, int Type, _locale_t Locale)
{
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // [esp+8h] [ebp-20h] BYREF
  __crt_locale_pointers v7; // [esp+Ch] [ebp-1Ch] BYREF
  char v8; // [esp+14h] [ebp-14h]
  CHAR MultiByteStr; // [esp+18h] [ebp-10h] BYREF
  char v10; // [esp+19h] [ebp-Fh]
  char v11; // [esp+1Ah] [ebp-Eh]
  WORD CharType[2]; // [esp+1Ch] [ebp-Ch] BYREF
  __int16 v13; // [esp+20h] [ebp-8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v6, Locale);
  if ( (unsigned int)(C + 1) <= 0x100 )
  {
    v3 = *(unsigned __int16 *)(*(_DWORD *)v7.locinfo + 2 * C);
    goto LABEL_11;
  }
  if ( _isleadbyte_l(BYTE1(C), &v7) != 0 )
  {
    MultiByteStr = BYTE1(C);
    v10 = C;
    v11 = 0;
    v4 = 2;
  }
  else
  {
    MultiByteStr = C;
    v10 = 0;
    v4 = 1;
  }
  *(_DWORD *)CharType = 0;
  v13 = 0;
  if ( __acrt_GetStringTypeA(&v7, 1u, &MultiByteStr, v4, CharType, *((_DWORD *)v7.locinfo + 2), 1) != 0 )
  {
    v3 = CharType[0];
LABEL_11:
    result = Type & v3;
    if ( v8 != 0 )
      *(_DWORD *)(v6 + 848) &= ~2u;
    return result;
  }
  if ( v8 != 0 )
    *(_DWORD *)(v6 + 848) &= ~2u;
  return 0;
}

// Address: 0x10013A13
int __cdecl _isleadbyte_l(int C, _locale_t Locale)
{
  int result; // eax
  _DWORD v3[3]; // [esp+0h] [ebp-10h] BYREF
  char v4; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v3, Locale);
  result = *(_WORD *)(*(_DWORD *)v3[1] + 2 * (unsigned __int8)C) & 0x8000;
  if ( v4 != 0 )
    *(_DWORD *)(v3[0] + 848) &= ~2u;
  return result;
}

// Address: 0x10013A4C
int __cdecl __acrt_LCMapStringA_stat(
        struct __crt_locale_pointers *a1,
        wchar_t *a2,
        DWORD dwMapFlags,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpDestStr,
        int cchDest,
        UINT CodePage,
        int a9)
{
  int v9; // esi
  signed int v10; // eax
  UINT v11; // edi
  int result; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  void *v15; // esp
  WCHAR *v16; // ebx
  WCHAR *v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // esi
  unsigned int v21; // edx
  unsigned int v22; // ecx
  void *v23; // esp
  WCHAR *v24; // edi
  WCHAR *v25; // eax
  int v26; // eax
  _DWORD v27[3]; // [esp+0h] [ebp-14h] BYREF
  int cchWideChar; // [esp+Ch] [ebp-8h]

  v9 = cbMultiByte;
  if ( cbMultiByte > 0 )
  {
    v10 = __strncnt(lpMultiByteStr, cbMultiByte);
    v9 = v10 + 1;
    if ( v10 >= cbMultiByte )
      v9 = v10;
  }
  v11 = CodePage;
  if ( CodePage == 0 )
  {
    v11 = *((_DWORD *)a1->locinfo + 2);
    CodePage = v11;
  }
  result = MultiByteToWideChar(v11, 8 * (a9 != 0) + 1, lpMultiByteStr, v9, nullptr, 0);
  cchWideChar = result;
  if ( result != 0 )
  {
    v13 = 2 * result;
    if ( (2 * result < (unsigned int)(2 * result + 8) ? 2 * result + 8 : 0) == 0 )
    {
      v16 = nullptr;
      goto LABEL_15;
    }
    v14 = v13 + 8;
    if ( (v13 < v13 + 8 ? v13 + 8 : 0) > 0x400 )
    {
      v17 = (WCHAR *)_malloc_base(v13 < v14 ? v14 : 0);
      v16 = v17;
      if ( v17 != nullptr )
      {
        *(_DWORD *)v17 = 56797;
        goto LABEL_13;
      }
    }
    else
    {
      v15 = alloca(v13 < v14 ? v14 : 0);
      v16 = (WCHAR *)v27;
      if ( v27 != nullptr )
      {
        v27[0] = 52428;
LABEL_13:
        v16 += 4;
LABEL_15:
        if ( v16 == nullptr )
          goto LABEL_37;
        if ( MultiByteToWideChar(v11, 1u, lpMultiByteStr, v9, v16, cchWideChar) == 0 )
          goto LABEL_37;
        v18 = cchWideChar;
        v19 = __acrt_LCMapStringEx(a2, dwMapFlags, v16, cchWideChar, nullptr, 0, 0, 0, 0);
        v20 = v19;
        if ( v19 == 0 )
          goto LABEL_37;
        if ( (dwMapFlags & 0x400) != 0 )
        {
          if ( cchDest == 0 )
            goto LABEL_38;
          if ( v19 <= cchDest )
          {
            v20 = __acrt_LCMapStringEx(a2, dwMapFlags, v16, v18, lpDestStr, cchDest, 0, 0, 0);
            if ( v20 != 0 )
              goto LABEL_38;
          }
          goto LABEL_37;
        }
        v21 = 2 * v19;
        if ( (2 * v19 < (unsigned int)(2 * v19 + 8) ? 2 * v19 + 8 : 0) == 0 )
        {
          v24 = nullptr;
LABEL_31:
          if ( v24 != nullptr && __acrt_LCMapStringEx(a2, dwMapFlags, v16, cchWideChar, v24, v20, 0, 0, 0) != 0 )
          {
            v26 = cchDest != 0
                ? WideCharToMultiByte(CodePage, 0, v24, v20, (LPSTR)lpDestStr, cchDest, nullptr, nullptr)
                : WideCharToMultiByte(CodePage, 0, v24, v20, nullptr, 0, nullptr, nullptr);
            v20 = v26;
            if ( v26 != 0 )
            {
              _freea_crt(v24);
              goto LABEL_38;
            }
          }
          goto LABEL_36;
        }
        v22 = v21 + 8;
        if ( (v21 < v21 + 8 ? v21 + 8 : 0) > 0x400 )
        {
          v25 = (WCHAR *)_malloc_base(v21 < v22 ? v22 : 0);
          v24 = v25;
          if ( v25 != nullptr )
          {
            *(_DWORD *)v25 = 56797;
            goto LABEL_29;
          }
        }
        else
        {
          v23 = alloca(v21 < v22 ? v22 : 0);
          v24 = (WCHAR *)v27;
          if ( v27 != nullptr )
          {
            v27[0] = 52428;
LABEL_29:
            v24 += 4;
            goto LABEL_31;
          }
        }
LABEL_36:
        _freea_crt(v24);
      }
    }
LABEL_37:
    v20 = 0;
LABEL_38:
    _freea_crt(v16);
    return v20;
  }
  return result;
}

// Address: 0x10013C69
int __cdecl __acrt_LCMapStringA(
        struct __crt_locale_pointers *a1,
        wchar_t *a2,
        DWORD dwMapFlags,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpDestStr,
        int cchDest,
        UINT CodePage,
        int a9)
{
  int result; // eax
  int v10; // [esp+0h] [ebp-10h] BYREF
  struct __crt_locale_pointers v11; // [esp+4h] [ebp-Ch] BYREF
  char v12; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v10, a1);
  result = __acrt_LCMapStringA_stat(&v11, a2, dwMapFlags, lpMultiByteStr, cbMultiByte, lpDestStr, cchDest, CodePage, a9);
  if ( v12 != 0 )
    *(_DWORD *)(v10 + 848) &= ~2u;
  return result;
}

// Address: 0x10013CB4
void __cdecl _freea_crt(int a1)
{
  if ( a1 != 0 && *(_DWORD *)(a1 - 8) == 56797 )
    _free_base((void *)(a1 - 8));
}

// Address: 0x10013CD4
int __cdecl __acrt_add_locale_ref(int a1)
{
  volatile signed __int32 *v1; // ecx
  volatile signed __int32 *v2; // ecx
  volatile signed __int32 *v3; // ecx
  volatile signed __int32 *v4; // ecx
  volatile signed __int32 **v5; // ecx
  int i; // esi
  volatile signed __int32 *v7; // edx

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 12));
  v1 = *(volatile signed __int32 **)(a1 + 124);
  if ( v1 != nullptr )
    _InterlockedIncrement(v1);
  v2 = *(volatile signed __int32 **)(a1 + 132);
  if ( v2 != nullptr )
    _InterlockedIncrement(v2);
  v3 = *(volatile signed __int32 **)(a1 + 128);
  if ( v3 != nullptr )
    _InterlockedIncrement(v3);
  v4 = *(volatile signed __int32 **)(a1 + 140);
  if ( v4 != nullptr )
    _InterlockedIncrement(v4);
  v5 = (volatile signed __int32 **)(a1 + 40);
  for ( i = 6; i != 0; --i )
  {
    if ( *(v5 - 2) != (volatile signed __int32 *)&unk_100251B8 && *v5 != nullptr )
      _InterlockedIncrement(*v5);
    if ( *(v5 - 3) != nullptr )
    {
      v7 = *(v5 - 1);
      if ( v7 != nullptr )
        _InterlockedIncrement(v7);
    }
    v5 += 4;
  }
  return __acrt_locale_add_lc_time_reference(*(_DWORD *)(a1 + 156));
}

// Address: 0x10013D51
void __cdecl __acrt_free_locale(char *Block)
{
  _UNKNOWN **v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  void **v7; // ebx
  void **v8; // edi
  _DWORD *v9; // eax
  int v10; // [esp+Ch] [ebp-4h]

  v1 = *((_UNKNOWN ***)Block + 34);
  if ( v1 != nullptr && v1 != &off_10025728 )
  {
    v2 = *((_DWORD **)Block + 31);
    if ( v2 != nullptr && *v2 == 0 )
    {
      v3 = *((_DWORD **)Block + 33);
      if ( v3 != nullptr && *v3 == 0 )
      {
        _free_base(*((void **)Block + 33));
        __acrt_locale_free_monetary(*((_DWORD *)Block + 34));
      }
      v4 = *((_DWORD **)Block + 32);
      if ( v4 != nullptr && *v4 == 0 )
      {
        _free_base(*((void **)Block + 32));
        __acrt_locale_free_numeric(*((_DWORD *)Block + 34));
      }
      _free_base(*((void **)Block + 31));
      _free_base(*((void **)Block + 34));
    }
  }
  v5 = *((_DWORD **)Block + 35);
  if ( v5 != nullptr && *v5 == 0 )
  {
    _free_base((void *)(*((_DWORD *)Block + 36) - 254));
    _free_base((void *)(*((_DWORD *)Block + 37) - 128));
    _free_base((void *)(*((_DWORD *)Block + 38) - 128));
    _free_base(*((void **)Block + 35));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*((void **)Block + 39));
  v6 = 6;
  v7 = (void **)(Block + 160);
  v10 = 6;
  v8 = (void **)(Block + 40);
  do
  {
    if ( *(v8 - 2) != &unk_100251B8 )
    {
      if ( *v8 != nullptr && *(_DWORD *)*v8 == 0 )
      {
        _free_base(*v8);
        _free_base(*v7);
      }
      v6 = v10;
    }
    if ( *(v8 - 3) != nullptr )
    {
      v9 = *(v8 - 1);
      if ( v9 != nullptr && *v9 == 0 )
        _free_base(*(v8 - 1));
      v6 = v10;
    }
    ++v7;
    v8 += 4;
    v10 = --v6;
  }
  while ( v6 != 0 );
  _free_base(Block);
}

// Address: 0x10013E9B
signed __int32 __cdecl __acrt_locale_add_lc_time_reference(int a1)
{
  if ( a1 == 0 || (char **)a1 == off_1001D380 )
    return 0x7FFFFFFF;
  else
    return _InterlockedIncrement((volatile signed __int32 *)(a1 + 176));
}

// Address: 0x10013EC4
void __cdecl __acrt_locale_free_lc_time_if_unreferenced(void **Block)
{
  if ( Block != nullptr && Block != (void **)off_1001D380 && Block[44] == nullptr )
  {
    __acrt_locale_free_time(Block);
    _free_base(Block);
  }
}

// Address: 0x10013EF4
signed __int32 __cdecl __acrt_locale_release_lc_time_reference(int a1)
{
  if ( a1 == 0 || (char **)a1 == off_1001D380 )
    return 0x7FFFFFFF;
  else
    return _InterlockedDecrement((volatile signed __int32 *)(a1 + 176));
}

// Address: 0x10013F1D
signed __int32 __cdecl __acrt_release_locale_ref(signed __int32 a1)
{
  signed __int32 result; // eax
  volatile signed __int32 *v2; // ecx
  volatile signed __int32 *v3; // ecx
  volatile signed __int32 *v4; // ecx
  volatile signed __int32 *v5; // ecx
  volatile signed __int32 **v6; // ecx
  int i; // esi
  volatile signed __int32 *v8; // edx

  result = a1;
  if ( a1 != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 12));
    v2 = *(volatile signed __int32 **)(a1 + 124);
    if ( v2 != nullptr )
      _InterlockedDecrement(v2);
    v3 = *(volatile signed __int32 **)(a1 + 132);
    if ( v3 != nullptr )
      _InterlockedDecrement(v3);
    v4 = *(volatile signed __int32 **)(a1 + 128);
    if ( v4 != nullptr )
      _InterlockedDecrement(v4);
    v5 = *(volatile signed __int32 **)(a1 + 140);
    if ( v5 != nullptr )
      _InterlockedDecrement(v5);
    v6 = (volatile signed __int32 **)(a1 + 40);
    for ( i = 6; i != 0; --i )
    {
      if ( *(v6 - 2) != (volatile signed __int32 *)&unk_100251B8 && *v6 != nullptr )
        _InterlockedDecrement(*v6);
      if ( *(v6 - 3) != nullptr )
      {
        v8 = *(v6 - 1);
        if ( v8 != nullptr )
          _InterlockedDecrement(v8);
      }
      v6 += 4;
    }
    return __acrt_locale_release_lc_time_reference(*(_DWORD *)(a1 + 156));
  }
  return result;
}

// Address: 0x10013F9E
int __acrt_update_thread_locale_data()
{
  _DWORD *v0; // eax
  _DWORD *v1; // edi
  int v2; // esi

  v0 = __acrt_getptd();
  v1 = v0;
  if ( (dword_10025718 & v0[212]) == 0 || (v2 = v0[19]) == 0 )
  {
    __acrt_lock(4);
    v2 = _updatetlocinfoEx_nolock(v1 + 19, dword_10025F20);
    __acrt_unlock(4);
    if ( v2 == 0 )
      abort();
  }
  return v2;
}

// Address: 0x10014015
int __cdecl _updatetlocinfoEx_nolock(signed __int32 *a1, int a2)
{
  signed __int32 v2; // edi

  if ( a2 == 0 || a1 == nullptr )
    return 0;
  v2 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    __acrt_add_locale_ref(a2);
    if ( v2 != 0 )
    {
      __acrt_release_locale_ref(v2);
      if ( *(_DWORD *)(v2 + 12) == 0 && (wchar_t **)v2 != &off_100250F8 )
        __acrt_free_locale((char *)v2);
    }
  }
  return a2;
}

// Address: 0x10014065
int __cdecl __acrt_fp_strflt_to_string(char *a1, unsigned int a2, int a3, int a4)
{
  int *v4; // eax
  int v6; // ecx
  int v7; // eax
  char *v8; // ebx
  char *v9; // eax
  char *v10; // edi
  char v11; // bl
  int v12; // [esp-4h] [ebp-8h]

  if ( a1 != nullptr && a2 != 0 )
  {
    v6 = a3;
    *a1 = 0;
    if ( a3 <= 0 )
      v7 = 0;
    else
      v7 = a3;
    if ( a2 <= v7 + 1 )
    {
      v4 = _errno();
      v12 = 34;
      goto LABEL_3;
    }
    if ( a4 != 0 )
    {
      v8 = a1 + 1;
      v9 = a1 + 1;
      v10 = *(char **)(a4 + 8);
      *a1 = 48;
      if ( a3 > 0 )
      {
        do
        {
          v11 = *v10;
          if ( *v10 != 0 )
            ++v10;
          else
            v11 = 48;
          *v9++ = v11;
          --v6;
        }
        while ( v6 > 0 );
        v8 = a1 + 1;
      }
      *v9 = 0;
      if ( v6 >= 0 && *v10 >= 53 )
      {
        while ( *--v9 == 57 )
          *v9 = 48;
        ++*v9;
      }
      if ( *a1 == 49 )
        ++*(_DWORD *)(a4 + 4);
      else
        memmove(a1, v8, strlen(v8) + 1);
      return 0;
    }
  }
  v4 = _errno();
  v12 = 22;
LABEL_3:
  *v4 = v12;
  _invalid_parameter_noinfo();
  return v12;
}

// Address: 0x10014121
fenv_t *__thiscall `anonymous namespace'::scoped_fp_state_reset::scoped_fp_state_reset(fenv_t *Env)
{
  fegetenv(Env);
  if ( (Env->_Fe_ctl & 0x1F) == 0x1F )
  {
    *((_BYTE *)Env + 8) = 0;
  }
  else
  {
    feholdexcept(Env);
    *((_BYTE *)Env + 8) = 1;
  }
  return Env;
}

// Address: 0x10014150
int __cdecl __crt_strtox::divide(__crt_strtox *this, struct __crt_strtox::big_integer *a2)
{
  __crt_strtox *v2; // ebx
  int result; // eax
  unsigned int v4; // ecx
  rsize_t v5; // esi
  rsize_t v6; // eax
  unsigned int v7; // ecx
  int v8; // esi
  unsigned int v9; // esi
  bool v10; // cf
  unsigned int v11; // edi
  _DWORD *v12; // esi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // zf
  char *v16; // eax
  signed int v17; // edx
  signed int v18; // ecx
  _DWORD *v19; // esi
  _DWORD *v20; // edi
  unsigned int v21; // esi
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  bool v25; // sf
  int v26; // edx
  unsigned int v27; // eax
  unsigned int *v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned int v33; // edi
  int v34; // esi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rdi
  unsigned int *v39; // ebx
  unsigned int *v40; // eax
  unsigned int v41; // ecx
  int v42; // edi
  _DWORD *v43; // edx
  char *v44; // esi
  unsigned __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // et0
  int v48; // edi
  unsigned int v49; // edx
  unsigned int v50; // eax
  _DWORD *v51; // ecx
  int v52; // ecx
  unsigned __int64 v53; // [esp-10h] [ebp-230h]
  _BYTE Source[460]; // [esp+8h] [ebp-218h] BYREF
  unsigned int *v55; // [esp+1D4h] [ebp-4Ch]
  int v56; // [esp+1D8h] [ebp-48h]
  unsigned __int64 v57; // [esp+1DCh] [ebp-44h]
  int v58; // [esp+1E4h] [ebp-3Ch]
  unsigned int v59; // [esp+1E8h] [ebp-38h]
  int v60; // [esp+1ECh] [ebp-34h]
  unsigned int v61; // [esp+1F0h] [ebp-30h]
  unsigned int v62; // [esp+1F8h] [ebp-28h]
  int v63; // [esp+1FCh] [ebp-24h]
  unsigned int v64; // [esp+200h] [ebp-20h]
  int v65; // [esp+204h] [ebp-1Ch]
  unsigned int v66; // [esp+208h] [ebp-18h]
  int v67; // [esp+20Ch] [ebp-14h]
  char *v68; // [esp+210h] [ebp-10h]
  unsigned int v69; // [esp+214h] [ebp-Ch]
  unsigned __int64 v70; // [esp+218h] [ebp-8h]

  v2 = this;
  result = *(_DWORD *)this;
  if ( *(_DWORD *)this != 0 )
  {
    v4 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 != 0 )
    {
      v5 = result - 1;
      v6 = v4 - 1;
      v69 = v5;
      if ( v4 == 1 )
      {
        v7 = *((_DWORD *)a2 + 1);
        v62 = v7;
        if ( v7 == 1 )
        {
          v8 = *((_DWORD *)this + 1);
          *(_DWORD *)this = v6;
          memcpy_s((char *)this + 4, 0x1CCu, Source, v6);
          return v8;
        }
        else if ( v5 != 0 )
        {
          v11 = 0;
          v70 = 0;
          v68 = nullptr;
          if ( v5 != -1 )
          {
            v65 = v69 + 1;
            v12 = (_DWORD *)((char *)this + 4 * v5 + 4);
            do
            {
              v53 = v7;
              v14 = __PAIR64__(v11, *v12) % v7;
              v13 = __PAIR64__(v11, *v12) / v53;
              HIDWORD(v57) = (__PAIR64__(v11, *v12--) / v53) >> 32;
              v68 = (char *)HIDWORD(v14);
              v11 = v14;
              v70 = __PAIR64__(v70, v13);
              v15 = v65-- == 1;
              v7 = v62;
            }
            while ( !v15 );
            v2 = this;
          }
          *(_DWORD *)v2 = 0;
          memcpy_s((char *)v2 + 4, 0x1CCu, Source, 0);
          v16 = v68;
          v10 = v68 != nullptr;
          *((_DWORD *)v2 + 1) = v11;
          *((_DWORD *)v2 + 2) = v16;
          result = v70;
          *(_DWORD *)v2 = v10 + 1;
        }
        else
        {
          v9 = *((_DWORD *)this + 1);
          *(_DWORD *)this = 0;
          memcpy_s((char *)this + 4, 0x1CCu, Source, 0);
          result = v9 / v62;
          v10 = v9 % v62 != 0;
          *((_DWORD *)this + 1) = v9 % v62;
          *(_DWORD *)this = v10;
        }
      }
      else
      {
        if ( v6 > v5 )
          return 0;
        v17 = v5 - v6;
        v59 = v4;
        v18 = v5;
        if ( (int)v5 < (int)(v5 - v6) )
          goto LABEL_21;
        v19 = (_DWORD *)((char *)this + 4 * v5 + 4);
        v20 = (_DWORD *)((char *)a2 + 4 * (v18 - v17) + 4);
        while ( *v20 == *v19 )
        {
          --v18;
          --v20;
          --v19;
          if ( v18 < v17 )
            goto LABEL_21;
        }
        if ( *((_DWORD *)a2 + v18 - v17 + 1) < *((_DWORD *)this + v18 + 1) )
LABEL_21:
          ++v17;
        if ( v17 != 0 )
        {
          v21 = *((_DWORD *)a2 + v59);
          v64 = *((_DWORD *)a2 + v59 - 1);
          v15 = !_BitScanReverse((unsigned int *)&v22, v21);
          v60 = v21;
          if ( v15 )
            v23 = 32;
          else
            v23 = 31 - v22;
          v63 = v23;
          v58 = 32 - v23;
          if ( v23 != 0 )
          {
            v24 = v64 >> v58;
            v64 <<= v63;
            v60 = v24 | (v21 << v63);
            if ( v59 > 2 )
              v64 |= *((_DWORD *)a2 + v59 - 2) >> v58;
          }
          v56 = 0;
          v25 = v17 - 1 < 0;
          v26 = v17 - 1;
          v65 = v26;
          if ( v25 )
          {
            v48 = 0;
          }
          else
          {
            v68 = (char *)this + 4 * v26 + 4;
            v27 = v26 + v59;
            LODWORD(v70) = v26 + v59;
            v28 = (unsigned int *)((char *)this + 4 * v26 + 4 * v59 - 4);
            v55 = v28;
            do
            {
              if ( v27 > v69 )
                v29 = 0;
              else
                v29 = v28[2];
              v30 = v28[1];
              v31 = *v28;
              v61 = v29;
              v62 = 0;
              HIDWORD(v70) = v29;
              v67 = v31;
              if ( v63 != 0 )
              {
                v32 = __PAIR64__(HIDWORD(v70), v30) << v63;
                v33 = v32 | (v31 >> v58);
                v29 = HIDWORD(v32);
                v30 = v33;
                v34 = v67 << v63;
                HIDWORD(v70) = v29;
                v67 <<= v63;
                if ( (unsigned int)v70 >= 3 )
                {
                  v29 = HIDWORD(v70);
                  v67 = (*((_DWORD *)v2 + v65 + v59 - 2) >> v58) | v34;
                }
              }
              v35 = __PAIR64__(v29, v30) % (unsigned int)v60;
              v36 = __PAIR64__(v29, v30) / (unsigned int)v60;
              HIDWORD(v35) = v36;
              v62 = 0;
              LODWORD(v36) = HIDWORD(v36);
              HIDWORD(v70) = HIDWORD(v35);
              v66 = HIDWORD(v36);
              v37 = (unsigned int)v35;
              v57 = __PAIR64__(HIDWORD(v36), HIDWORD(v35));
              if ( HIDWORD(v36) != 0 )
              {
                v37 = (__PAIR64__(HIDWORD(v36), HIDWORD(v35)) - 0xFFFFFFFF) * (unsigned int)v60 + (unsigned int)v35;
                HIDWORD(v35) = -1;
                LODWORD(v36) = 0;
                v62 = HIDWORD(v37);
                HIDWORD(v70) = -1;
                v57 = 0xFFFFFFFFLL;
                v66 = 0;
              }
              if ( HIDWORD(v37) == 0 )
              {
                while ( v64 * __PAIR64__(v36, HIDWORD(v35)) > __PAIR64__(v37, v67) )
                {
                  v10 = HIDWORD(v35)-- != 0;
                  LODWORD(v57) = HIDWORD(v35);
                  LODWORD(v36) = v10 + v66 - 1;
                  v66 = v36;
                  v15 = __CFADD__(v60, (_DWORD)v37) + v62 == 0;
                  v62 = (__PAIR64__(v62, v60) + (unsigned int)v37) >> 32;
                  LODWORD(v37) = v60 + v37;
                  HIDWORD(v57) = v36;
                  if ( !v15 )
                    goto LABEL_45;
                }
                LODWORD(v36) = v66;
LABEL_45:
                HIDWORD(v70) = HIDWORD(v35);
              }
              if ( (_DWORD)v36 != 0 || HIDWORD(v35) != 0 )
              {
                LODWORD(v35) = v59;
                v38 = 0;
                if ( v59 != 0 )
                {
                  v39 = (unsigned int *)v68;
                  v40 = (unsigned int *)((char *)a2 + 4);
                  v67 = (int)a2 + 4;
                  v69 = v59;
                  do
                  {
                    v62 = *v40;
                    v41 = v57 * v62 + v38;
                    LODWORD(v38) = (v57 * v62 + v38) >> 32;
                    HIDWORD(v38) = 0;
                    if ( *v39 < v41 )
                      ++v38;
                    *v39++ -= v41;
                    v40 = (unsigned int *)(v67 + 4);
                    v15 = v69-- == 1;
                    v67 += 4;
                  }
                  while ( !v15 );
                  v35 = __PAIR64__(HIDWORD(v70), v59);
                }
                if ( v61 < v38 )
                {
                  if ( (_DWORD)v35 != 0 )
                  {
                    v42 = v35;
                    v43 = v68;
                    v44 = (char *)a2 + 4;
                    HIDWORD(v45) = 0;
                    do
                    {
                      LODWORD(v45) = *v43;
                      v44 += 4;
                      ++v43;
                      v46 = (*((unsigned int *)v44 - 1) + (unsigned __int64)(unsigned int)v45) >> 32;
                      LODWORD(v45) = *((_DWORD *)v44 - 1) + v45;
                      *(v43 - 1) = HIDWORD(v45) + v45;
                      v45 = __PAIR64__(v46, HIDWORD(v45)) + (unsigned int)v45;
                      --v42;
                    }
                    while ( v42 != 0 );
                    HIDWORD(v35) = HIDWORD(v70);
                  }
                  v47 = (__PAIR64__(v66, HIDWORD(v35)) - 1) >> 32;
                  --HIDWORD(v35);
                  v66 = v47;
                }
                v69 = v70 - 1;
              }
              v48 = HIDWORD(v35);
              v68 -= 4;
              v2 = this;
              v28 = v55 - 1;
              v27 = v70 - 1;
              v56 = v48;
              --v65;
              --v55;
              LODWORD(v70) = v70 - 1;
            }
            while ( v65 >= 0 );
          }
          v49 = v69 + 1;
          v50 = v69 + 1;
          if ( v69 + 1 < *(_DWORD *)v2 )
          {
            v51 = (_DWORD *)((char *)v2 + 4 * v69 + 8);
            do
            {
              *v51++ = 0;
              ++v50;
            }
            while ( v50 < *(_DWORD *)v2 );
          }
          *(_DWORD *)v2 = v49;
          if ( v49 != 0 )
          {
            do
            {
              v52 = *(_DWORD *)v2;
              if ( *((_DWORD *)v2 + *(_DWORD *)v2) != 0 )
                break;
              *(_DWORD *)v2 = v52 - 1;
            }
            while ( v52 != 1 );
          }
          return v48;
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// Address: 0x100145FE
unsigned int __cdecl __acrt_fltout(double a1, int a2, int a3, char *Destination, rsize_t SizeInBytes)
{
  char *v5; // ebx
  double v6; // rdi
  char v7; // al
  unsigned int result; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  long double v13; // st7
  char v14; // dl
  int v15; // esi
  unsigned __int64 v16; // kr28_8
  int v17; // esi
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // esi
  __int64 v23; // rax
  bool v24; // zf
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  bool v28; // al
  unsigned int v29; // ecx
  unsigned int v30; // esi
  unsigned int v31; // edx
  unsigned int v32; // esi
  _DWORD *v33; // eax
  int v34; // edi
  int v35; // eax
  int v36; // ecx
  unsigned int v37; // edx
  __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned int v40; // edi
  __int64 v41; // rax
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // edx
  bool v45; // al
  unsigned int v46; // eax
  unsigned int v47; // esi
  unsigned int v48; // edx
  unsigned int v49; // esi
  _DWORD *v50; // ecx
  int v51; // edi
  int v52; // eax
  unsigned int v53; // edi
  int v54; // eax
  unsigned int v55; // edx
  int v56; // edx
  int v57; // eax
  int v58; // edx
  unsigned int v59; // esi
  _DWORD *v60; // edi
  unsigned int v61; // edx
  int v62; // eax
  unsigned int v63; // edi
  unsigned int v64; // eax
  unsigned int v65; // eax
  unsigned int v66; // ecx
  unsigned int v68; // esi
  _DWORD *v69; // edi
  unsigned int v70; // edx
  int v71; // eax
  unsigned int v72; // ebx
  unsigned int v73; // eax
  unsigned int v74; // ecx
  int v75; // ecx
  int v76; // esi
  int v77; // edi
  int v78; // ecx
  int v79; // edi
  rsize_t v80; // eax
  unsigned int v81; // ecx
  int i; // esi
  unsigned __int64 v83; // rax
  int v84; // kr00_4
  unsigned int v85; // edi
  int j; // esi
  unsigned __int64 v87; // rax
  int v88; // kr04_4
  int *v89; // edi
  int *v90; // edx
  unsigned int v91; // edx
  int v92; // esi
  int v93; // edi
  int v94; // eax
  int v95; // edi
  int v96; // ecx
  unsigned __int64 v97; // rax
  bool v98; // cf
  char v99; // al
  int v100; // edi
  unsigned int v101; // esi
  int v102; // ecx
  unsigned __int64 v103; // rax
  int v104; // kr08_4
  unsigned __int64 v105; // rax
  unsigned int v106; // eax
  unsigned int v107; // ecx
  int v108; // ecx
  int v109; // esi
  int v110; // edi
  unsigned int v111; // ecx
  int v112; // edi
  unsigned int v113; // ecx
  int v114; // esi
  unsigned __int64 v115; // rax
  int v116; // kr0C_4
  unsigned int v117; // edi
  int v118; // esi
  unsigned __int64 v119; // rax
  int v120; // kr10_4
  int *p_Source; // edi
  int *v122; // edx
  unsigned int v123; // edx
  int v124; // esi
  int v125; // edi
  unsigned int v126; // eax
  int v127; // edi
  int v128; // ecx
  unsigned __int64 v129; // rax
  char v130; // al
  int v131; // eax
  unsigned int v132; // ecx
  unsigned int v133; // edi
  int v134; // esi
  unsigned __int64 v135; // rax
  unsigned int v136; // kr18_4
  unsigned __int64 v137; // kr30_8
  char *v138; // edi
  char *v139; // esi
  unsigned int v140; // ecx
  unsigned int v141; // esi
  int v142; // edi
  __int64 v143; // rax
  int v144; // kr1C_4
  unsigned __int64 v145; // rax
  int v146; // eax
  unsigned int v147; // eax
  unsigned int v148; // edi
  unsigned int v149; // esi
  int k; // ecx
  __int64 v151; // rax
  int v152; // eax
  unsigned int v153; // ecx
  rsize_t v154; // eax
  unsigned int v155; // edi
  unsigned int v156; // esi
  int n; // ecx
  __int64 v158; // rax
  int v159; // kr24_4
  unsigned __int64 v160; // rax
  int v161; // esi
  unsigned int v162; // edi
  unsigned int v163; // ecx
  unsigned int v164; // et2
  char v165; // dl
  _BYTE v166[460]; // [esp+18h] [ebp-960h] BYREF
  fenv_t Env; // [esp+1E4h] [ebp-794h] BYREF
  char v168; // [esp+1ECh] [ebp-78Ch]
  int v169; // [esp+1F4h] [ebp-784h]
  int v170; // [esp+1F8h] [ebp-780h]
  char *v171; // [esp+1FCh] [ebp-77Ch]
  unsigned int m; // [esp+200h] [ebp-778h]
  unsigned int v173; // [esp+204h] [ebp-774h]
  unsigned int v174; // [esp+208h] [ebp-770h]
  unsigned int v175; // [esp+20Ch] [ebp-76Ch]
  double v176; // [esp+210h] [ebp-768h]
  int v177; // [esp+218h] [ebp-760h]
  unsigned int v178; // [esp+21Ch] [ebp-75Ch]
  unsigned int v179; // [esp+220h] [ebp-758h]
  int v180; // [esp+224h] [ebp-754h]
  unsigned int v181; // [esp+228h] [ebp-750h]
  int v182; // [esp+22Ch] [ebp-74Ch]
  bool v183; // [esp+233h] [ebp-745h]
  unsigned int v184; // [esp+234h] [ebp-744h]
  _DWORD v185[115]; // [esp+238h] [ebp-740h] BYREF
  unsigned int v186; // [esp+404h] [ebp-574h]
  int Source; // [esp+408h] [ebp-570h] BYREF
  int v188; // [esp+40Ch] [ebp-56Ch]
  unsigned int v189; // [esp+5D4h] [ebp-3A4h] BYREF
  _DWORD v190[115]; // [esp+5D8h] [ebp-3A0h] BYREF
  unsigned int v191; // [esp+7A4h] [ebp-1D4h] BYREF
  unsigned __int64 v192; // [esp+7A8h] [ebp-1D0h] BYREF
  _BYTE v193[452]; // [esp+7B0h] [ebp-1C8h] BYREF

  v5 = Destination;
  LODWORD(v6) = a3;
  v170 = a3;
  v171 = Destination;
  `anonymous namespace'::scoped_fp_state_reset::scoped_fp_state_reset(&Env);
  HIDWORD(v6) = HIDWORD(a1);
  v7 = 45;
  if ( a1 >= 0.0 )
    v7 = 32;
  *(_DWORD *)LODWORD(v6) = v7;
  *(_DWORD *)(LODWORD(v6) + 8) = v5;
  LODWORD(v6) = LODWORD(a1);
  if ( (HIDWORD(v6) & 0x7FF00000) == 0 && (HIDWORD(v6) & 0xFFFFF | LODWORD(a1)) == 0 )
  {
    *(_DWORD *)(v170 + 4) = 0;
    result = strcpy_s(v5, SizeInBytes, "0");
    goto LABEL_298;
  }
  v9 = __acrt_fp_classify((int *)&a1);
  if ( v9 != 0 )
    *(_DWORD *)(v170 + 4) = 1;
  v10 = v9 - 1;
  if ( v10 == 0 )
  {
    result = strcpy_s(v5, SizeInBytes, "1#INF");
LABEL_298:
    if ( result != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    goto LABEL_299;
  }
  v11 = v10 - 1;
  if ( v11 == 0 )
  {
    result = strcpy_s(v5, SizeInBytes, "1#QNAN");
    goto LABEL_298;
  }
  v12 = v11 - 1;
  if ( v12 == 0 )
  {
    result = strcpy_s(v5, SizeInBytes, "1#SNAN");
    goto LABEL_298;
  }
  if ( v12 == 1 )
  {
    result = strcpy_s(v5, SizeInBytes, "1#IND");
    goto LABEL_298;
  }
  v6 = fabs(v6);
  v169 = 0;
  a1 = v6;
  v13 = v6;
  v176 = v6;
  m = a2 + 1;
  if ( ((HIDWORD(v176) >> 20) & 0x7FF) != 0 )
  {
    v14 = 0;
    v15 = 0x100000;
  }
  else
  {
    v14 = 1;
    v15 = 0;
  }
  v16 = __PAIR64__(v15, 0) + __PAIR64__(HIDWORD(v176) & 0xFFFFF, LODWORD(v176));
  v17 = (v14 != 0) + 1 + ((HIDWORD(v176) >> 20) & 0x7FF) - 1076;
  v182 = v17;
  v18 = (int)ceil(log10(v13));
  v175 = v18;
  if ( v18 == 0x7FFFFFFF || v18 == 0x80000000 )
    v175 = 0;
  v192 = v16;
  v19 = (HIDWORD(v16) != 0) + 1;
  v191 = v19;
  if ( v17 < 0 )
  {
    if ( v17 != -1022 )
    {
      Source = 0;
      v188 = 0x100000;
      v186 = 2;
      if ( HIDWORD(v16) != 0 )
      {
        v56 = 0;
        while ( *(int *)((char *)&Source + v56) == *(_DWORD *)&v193[v56 - 8] )
        {
          v56 += 4;
          if ( v56 == 8 )
          {
            HIDWORD(v176) = 0;
            v24 = !_BitScanReverse((unsigned int *)&v57, HIDWORD(v16));
            if ( v24 )
              v58 = 0;
            else
              v58 = v57 + 1;
            v59 = 2;
            v180 = (int)v193;
            v60 = v193;
            v183 = (unsigned int)(32 - v58) < 2;
            while ( 1 )
            {
              v181 = v59 >= v19 ? 0 : *v60;
              v61 = v59 - 1 >= v19 ? 0 : *--v60;
              v62 = v180;
              --v59;
              *(_DWORD *)v180 = (4 * v181) ^ (v61 >> 30);
              v180 = v62 - 4;
              if ( v59 == -1 )
                break;
              v19 = v191;
            }
            v191 = v183 + 2;
            v63 = (unsigned int)(2 - v182) >> 5;
            v179 = 2 - v182;
            memset(&Source, 0, 4 * v63);
            *(&Source + v63) = 1 << (v179 & 0x1F);
            v64 = v63 + 1;
            goto LABEL_121;
          }
        }
      }
    }
    v65 = *(&v191 + v19);
    HIDWORD(v176) = 0;
    v24 = !_BitScanReverse(&v65, v65);
    if ( v24 )
      v66 = 0;
    else
      v66 = v65 + 1;
    v183 = v66 == 32;
    if ( (HIDWORD(v16) != 0) == 114 && v66 == 32 )
    {
      v186 = 0;
      v191 = 0;
      memcpy_s(&v192, 0x1CCu, &Source, 0);
    }
    else
    {
      if ( (HIDWORD(v16) != 0) != -2 )
      {
        v68 = (HIDWORD(v16) != 0) + 1;
        v69 = &v193[4 * v68 - 8];
        v180 = (int)v69;
        while ( 1 )
        {
          v181 = v68 >= v19 ? 0 : *v69;
          v70 = v68 - 1 >= v19 ? 0 : *--v69;
          v71 = v180;
          --v68;
          *(_DWORD *)v180 = (2 * v181) ^ (v70 >> 31);
          v180 = v71 - 4;
          if ( v68 == -1 )
            break;
          v19 = v191;
        }
        v17 = v182;
      }
      if ( v183 )
        v191 = (HIDWORD(v16) != 0) + 2;
      else
        v191 = (HIDWORD(v16) != 0) + 1;
    }
    v72 = (unsigned int)(1 - v17) >> 5;
    memset(&Source, 0, 4 * v72);
    *(&Source + v72) = 1 << ((1 - v17) & 0x1F);
    v64 = v72 + 1;
LABEL_121:
    v186 = v64;
    v189 = v64;
    memcpy_s(v190, 0x1CCu, &Source, 4 * v64);
  }
  else
  {
    Source = 0;
    v188 = 0x100000;
    v186 = 2;
    if ( HIDWORD(v16) != 0 )
    {
      v20 = 0;
      while ( *(int *)((char *)&Source + v20) == *(_DWORD *)&v193[v20 - 8] )
      {
        v20 += 4;
        if ( v20 == 8 )
        {
          v21 = (v182 + 2) & 0x1FLL;
          v25 = 32 - v21;
          v178 = (v182 + 2) & 0x1F;
          v22 = (unsigned int)(v182 + 2) >> 5;
          LODWORD(v21) = 1;
          v181 = v22;
          v174 = v25;
          v23 = v21 << v25;
          HIDWORD(v176) = 0;
          v24 = !_BitScanReverse(&v25, HIDWORD(v16));
          v179 = v23 - 1;
          v173 = ~(v23 - 1);
          if ( v24 )
            v26 = 0;
          else
            v26 = v25 + 1;
          v27 = v22 + 2;
          v180 = v22 + 2;
          v183 = v178 > 32 - v26;
          v28 = v22 == 113 && v178 > 32 - v26;
          if ( v22 + 2 > 0x73 || v28 )
          {
            v186 = 0;
            v191 = 0;
            memcpy_s(&v192, 0x1CCu, &Source, 0);
          }
          else
          {
            if ( v27 >= 0x72 )
            {
              v27 = 114;
              v180 = 114;
            }
            v29 = v27;
            v177 = v27;
            v30 = v27;
            v31 = v181;
            v32 = v30 - v181;
            v33 = &v193[4 * v32 - 8];
            v182 = (int)v33;
            while ( v29 >= v31 )
            {
              v34 = v32 >= v19 ? 0 : *v33;
              v35 = v32 - 1 >= v19 ? 0 : *(_DWORD *)(v182 - 4);
              v36 = v177;
              *(_DWORD *)&v193[4 * v177 - 8] = ((v179 & v34) << v178) | ((v173 & v35) >> v174);
              v29 = v36 - 1;
              --v32;
              v33 = (_DWORD *)(v182 - 4);
              v177 = v29;
              v182 -= 4;
              if ( v29 == -1 )
                break;
              v19 = v191;
            }
            v37 = v180;
            if ( v181 != 0 )
              memset(&v192, 0, 4 * v181);
            if ( v183 )
              v191 = v37 + 1;
            else
              v191 = v37;
          }
          v188 = 0;
          Source = 4;
          v186 = 1;
          v189 = 1;
          memcpy_s(v190, 0x1CCu, &Source, 4u);
          goto LABEL_122;
        }
      }
    }
    v38 = (v182 + 1) & 0x1FLL;
    v39 = 32 - v38;
    v181 = (v182 + 1) & 0x1F;
    v40 = (unsigned int)(v182 + 1) >> 5;
    LODWORD(v38) = 1;
    v182 = v40;
    v174 = v39;
    v41 = v38 << v39;
    v42 = *(&v191 + v19);
    HIDWORD(v176) = 0;
    v24 = !_BitScanReverse(&v42, v42);
    v179 = v41 - 1;
    v173 = ~(v41 - 1);
    if ( v24 )
      v43 = 0;
    else
      v43 = v42 + 1;
    v44 = v19 + v40;
    v177 = v19 + v40;
    v183 = v181 > 32 - v43;
    v45 = v19 + v40 == 115 && v181 > 32 - v43;
    if ( v19 + v40 > 0x73 || v45 )
    {
      v186 = 0;
      v191 = 0;
      memcpy_s(&v192, 0x1CCu, &Source, 0);
    }
    else
    {
      if ( v44 >= 0x72 )
      {
        v44 = 114;
        v177 = 114;
      }
      v46 = v44;
      v180 = v44;
      v47 = v44;
      v48 = v182;
      v49 = v47 - v182;
      v50 = &v193[4 * v49 - 8];
      v178 = (unsigned int)v50;
      while ( v46 >= v48 )
      {
        v51 = v49 >= v19 ? 0 : *v50;
        v52 = v49 - 1 >= v19 ? 0 : *(v50 - 1);
        v53 = ((v173 & v52) >> v174) | ((v179 & v51) << v181);
        v54 = v180;
        v50 = (_DWORD *)(v178 - 4);
        v178 -= 4;
        *(_DWORD *)&v193[4 * v180 - 8] = v53;
        v46 = v54 - 1;
        --v49;
        v180 = v46;
        if ( v46 == -1 )
          break;
        v19 = v191;
      }
      v55 = v177;
      if ( v182 != 0 )
        memset(&v192, 0, 4 * v182);
      if ( v183 )
        v191 = v55 + 1;
      else
        v191 = v55;
    }
    v188 = 0;
    Source = 2;
    v186 = 1;
    v189 = 1;
    memcpy_s(v190, 0x1CCu, &Source, 4u);
  }
LABEL_122:
  v173 = 10;
  if ( (v175 & 0x80000000) != 0 )
  {
    v106 = -v175 / 0xA;
    v180 = v106;
    v107 = -v175 % 0xA;
    v179 = v107;
    if ( v106 == 0 )
      goto LABEL_240;
    while ( 1 )
    {
      if ( v106 > 0x26 )
        v106 = 38;
      v108 = (unsigned __int8)byte_1001EB96[4 * v106];
      v109 = (unsigned __int8)byte_1001EB97[4 * v106];
      v182 = v106;
      v110 = 4 * v108;
      v186 = v108 + v109;
      memset(&Source, 0, 4 * v108);
      memmove_0((char *)&Source + v110, (char *)&unk_1001E290 + 4 * (unsigned __int16)word_1001EB94[2 * v182], 4 * v109);
      v111 = v186;
      v177 = v186;
      if ( v186 > 1 )
      {
        if ( v191 > 1 )
        {
          p_Source = &Source;
          if ( v186 < v191 )
          {
            v122 = (int *)&v192;
          }
          else
          {
            p_Source = (int *)&v192;
            v122 = &Source;
          }
          v174 = (unsigned int)v122;
          if ( v186 >= v191 )
            v111 = v191;
          v181 = v111;
          if ( v186 < v191 )
            v177 = v191;
          v123 = 0;
          v124 = 0;
          v184 = 0;
          if ( v111 != 0 )
          {
            v125 = (char *)p_Source - (char *)v185;
            v169 = v125;
            do
            {
              HIDWORD(v176) = *(_DWORD *)((char *)&v185[v124] + v125);
              if ( HIDWORD(v176) != 0 )
              {
                v126 = 0;
                v127 = 0;
                v128 = v124;
                v178 = 0;
                if ( v177 != 0 )
                {
                  do
                  {
                    if ( v128 == 115 )
                      break;
                    if ( v128 == v123 )
                    {
                      v185[v128] = 0;
                      v184 = v124 + v126 + 1;
                      v126 = v178;
                    }
                    v129 = (unsigned int)v127 + HIDWORD(v176) * (unsigned __int64)*(unsigned int *)(v174 + 4 * v126);
                    v98 = __CFADD__((_DWORD)v129, v185[v128]);
                    v185[v128] += v129;
                    v126 = v178 + 1;
                    ++v128;
                    v178 = v126;
                    v127 = v98 + HIDWORD(v129);
                    v123 = v184;
                  }
                  while ( v126 != v177 );
                  while ( v127 != 0 )
                  {
                    if ( v128 == 115 )
                      goto LABEL_249;
                    if ( v128 == v123 )
                    {
                      v185[v128] = 0;
                      v184 = v128 + 1;
                    }
                    v98 = __CFADD__(v127, v185[v128]);
                    v185[v128] += v127;
                    v123 = v184;
                    v127 = v98;
                    ++v128;
                  }
                }
                if ( v128 == 115 )
                  goto LABEL_249;
                v125 = v169;
                v111 = v181;
              }
              else if ( v124 == v123 )
              {
                v185[v124] = 0;
                v123 = v124 + 1;
                v184 = v124 + 1;
              }
              ++v124;
            }
            while ( v124 != v111 );
          }
          v191 = v123;
          memcpy_s(&v192, 0x1CCu, v185, 4 * v123);
          goto LABEL_236;
        }
        v117 = v192;
        v191 = v186;
        memcpy_s(&v192, 0x1CCu, &Source, 4 * v186);
        if ( v117 == 0 )
        {
LABEL_195:
          v191 = 0;
          memcpy_s(&v192, 0x1CCu, v166, 0);
LABEL_236:
          v130 = 1;
          goto LABEL_237;
        }
        if ( v117 == 1 || v191 == 0 )
          goto LABEL_236;
        v113 = 0;
        HIDWORD(v176) = v191;
        v118 = 0;
        do
        {
          v119 = *(unsigned int *)&v193[4 * v118 - 8] * (unsigned __int64)v117;
          v120 = *(_DWORD *)&v193[4 * v118 - 8] * v117;
          *(_DWORD *)&v193[4 * v118++ - 8] = v113 + v120;
          v113 = (__PAIR64__(HIDWORD(v119), v113) + (unsigned int)v120) >> 32;
        }
        while ( v118 != HIDWORD(v176) );
      }
      else
      {
        v112 = Source;
        if ( Source == 0 )
          goto LABEL_195;
        if ( Source == 1 || v191 == 0 )
          goto LABEL_236;
        v113 = 0;
        HIDWORD(v176) = v191;
        v114 = 0;
        do
        {
          v115 = *(unsigned int *)&v193[4 * v114 - 8] * (unsigned __int64)(unsigned int)v112;
          v116 = *(_DWORD *)&v193[4 * v114 - 8] * v112;
          *(_DWORD *)&v193[4 * v114++ - 8] = v113 + v116;
          v113 = (__PAIR64__(HIDWORD(v115), v113) + (unsigned int)v116) >> 32;
        }
        while ( v114 != HIDWORD(v176) );
      }
      if ( v113 == 0 )
        goto LABEL_236;
      if ( v191 < 0x73 )
      {
        *(_DWORD *)&v193[4 * v191++ - 8] = v113;
        goto LABEL_236;
      }
LABEL_249:
      v191 = 0;
      memcpy_s(&v192, 0x1CCu, v166, 0);
      v130 = 0;
LABEL_237:
      if ( v130 == 0 )
      {
        v191 = 0;
        goto LABEL_252;
      }
      v106 = v180 - v182;
      v180 -= v182;
      if ( v180 == 0 )
      {
        v107 = v179;
LABEL_240:
        if ( v107 == 0 )
          goto LABEL_253;
        v131 = dword_1001EC2C[v107];
        HIDWORD(v176) = v131;
        if ( v131 != 0 )
        {
          if ( v131 == 1 )
            goto LABEL_253;
          v132 = v191;
          if ( v191 == 0 )
            goto LABEL_253;
          v133 = 0;
          v134 = 0;
          do
          {
            v135 = *(unsigned int *)&v193[4 * v134 - 8] * (unsigned __int64)(unsigned int)v131;
            v136 = v135;
            *(_DWORD *)&v193[4 * v134 - 8] = v133 + v135;
            v131 = HIDWORD(v176);
            v137 = __PAIR64__(HIDWORD(v135), v133) + v136;
            ++v134;
            v133 = HIDWORD(v137);
          }
          while ( v134 != v132 );
          if ( HIDWORD(v137) == 0 )
            goto LABEL_253;
          if ( v191 < 0x73 )
          {
            *(_DWORD *)&v193[4 * v191++ - 8] = HIDWORD(v137);
            goto LABEL_253;
          }
        }
        v191 = 0;
LABEL_252:
        memcpy_s(&v192, 0x1CCu, v166, 0);
        goto LABEL_253;
      }
    }
  }
  v73 = v175 / 0xA;
  v174 = v175 / 0xA;
  v74 = v175 % 0xA;
  HIDWORD(v176) = v175 % 0xA;
  if ( v175 / 0xA == 0 )
    goto LABEL_176;
  do
  {
    if ( v73 > 0x26 )
      v73 = 38;
    v75 = (unsigned __int8)byte_1001EB96[4 * v73];
    v76 = (unsigned __int8)byte_1001EB97[4 * v73];
    v178 = v73;
    v77 = 4 * v75;
    v186 = v75 + v76;
    memset(&Source, 0, 4 * v75);
    memmove_0((char *)&Source + v77, (char *)&unk_1001E290 + 4 * (unsigned __int16)word_1001EB94[2 * v178], 4 * v76);
    v78 = v186;
    v177 = v186;
    if ( v186 <= 1 )
    {
      v79 = Source;
      if ( Source == 0 )
      {
        v80 = 0;
        v184 = 0;
        v189 = 0;
LABEL_171:
        memcpy_s(v190, 0x1CCu, v185, v80);
        goto LABEL_172;
      }
      if ( Source == 1 || v189 == 0 )
        goto LABEL_172;
      v81 = 0;
      v179 = v189;
      for ( i = 0; i != v179; ++i )
      {
        v83 = (unsigned int)v190[i] * (unsigned __int64)(unsigned int)v79;
        v84 = v190[i] * v79;
        v190[i] = v81 + v84;
        v81 = (__PAIR64__(HIDWORD(v83), v81) + (unsigned int)v84) >> 32;
      }
LABEL_142:
      if ( v81 != 0 )
      {
        if ( v189 >= 0x73 )
        {
          v186 = 0;
          v189 = 0;
          memcpy_s(v190, 0x1CCu, &Source, 0);
          goto LABEL_180;
        }
        v190[v189++] = v81;
      }
      goto LABEL_172;
    }
    if ( v189 <= 1 )
    {
      v85 = v190[0];
      v189 = v186;
      memcpy_s(v190, 0x1CCu, &Source, 4 * v186);
      if ( v85 == 0 )
      {
        v186 = 0;
        v189 = 0;
        memcpy_s(v190, 0x1CCu, &Source, 0);
LABEL_172:
        v99 = 1;
        goto LABEL_173;
      }
      if ( v85 == 1 || v189 == 0 )
        goto LABEL_172;
      v81 = 0;
      v179 = v189;
      for ( j = 0; j != v179; ++j )
      {
        v87 = (unsigned int)v190[j] * (unsigned __int64)v85;
        v88 = v190[j] * v85;
        v190[j] = v81 + v88;
        v81 = (__PAIR64__(HIDWORD(v87), v81) + (unsigned int)v88) >> 32;
      }
      goto LABEL_142;
    }
    v89 = &Source;
    if ( v186 < v189 )
    {
      v90 = v190;
    }
    else
    {
      v89 = v190;
      v90 = &Source;
    }
    v181 = (unsigned int)v90;
    if ( v186 >= v189 )
      v78 = v189;
    v180 = v78;
    if ( v186 < v189 )
      v177 = v189;
    v91 = 0;
    v92 = 0;
    v184 = 0;
    if ( v78 == 0 )
    {
LABEL_170:
      v189 = v91;
      v80 = 4 * v91;
      goto LABEL_171;
    }
    v93 = (char *)v89 - (char *)v185;
    v169 = v93;
    while ( 1 )
    {
      v179 = *(_DWORD *)((char *)&v185[v92] + v93);
      if ( v179 == 0 )
      {
        if ( v92 == v91 )
        {
          v185[v92] = 0;
          v91 = v92 + 1;
          v184 = v92 + 1;
        }
        goto LABEL_169;
      }
      v94 = 0;
      v95 = 0;
      v96 = v92;
      v182 = 0;
      if ( v177 != 0 )
      {
        do
        {
          if ( v96 == 115 )
            break;
          if ( v96 == v91 )
          {
            v185[v96] = 0;
            v184 = v92 + v94 + 1;
            v94 = v182;
          }
          v97 = (unsigned int)v95 + v179 * (unsigned __int64)*(unsigned int *)(v181 + 4 * v94);
          v98 = __CFADD__((_DWORD)v97, v185[v96]);
          v185[v96] += v97;
          v94 = v182 + 1;
          ++v96;
          v182 = v94;
          v95 = v98 + HIDWORD(v97);
          v91 = v184;
        }
        while ( v94 != v177 );
        while ( v95 != 0 )
        {
          if ( v96 == 115 )
            goto LABEL_179;
          if ( v96 == v91 )
          {
            v185[v96] = 0;
            v184 = v96 + 1;
          }
          v98 = __CFADD__(v95, v185[v96]);
          v185[v96] += v95;
          v91 = v184;
          v95 = v98;
          ++v96;
        }
      }
      if ( v96 == 115 )
        break;
      v93 = v169;
      v78 = v180;
LABEL_169:
      if ( ++v92 == v78 )
        goto LABEL_170;
    }
LABEL_179:
    v189 = 0;
    memcpy_s(v190, 0x1CCu, v166, 0);
LABEL_180:
    v99 = 0;
LABEL_173:
    if ( v99 == 0 )
    {
      v189 = 0;
      goto LABEL_182;
    }
    v73 = v174 - v178;
    v174 -= v178;
  }
  while ( v174 != 0 );
  v74 = HIDWORD(v176);
LABEL_176:
  if ( v74 != 0 )
  {
    v100 = dword_1001EC2C[v74];
    if ( v100 == 0 )
      goto LABEL_178;
    if ( v100 != 1 )
    {
      HIDWORD(v176) = v189;
      if ( v189 != 0 )
      {
        v101 = 0;
        v102 = 0;
        do
        {
          v103 = (unsigned int)v190[v102] * (unsigned __int64)(unsigned int)v100;
          v104 = v190[v102] * v100;
          v190[v102] = v101 + v104;
          v105 = __PAIR64__(HIDWORD(v103), v101) + (unsigned int)v104;
          ++v102;
          v101 = HIDWORD(v105);
        }
        while ( v102 != HIDWORD(v176) );
        if ( HIDWORD(v105) != 0 )
        {
          if ( v189 < 0x73 )
          {
            v190[v189++] = HIDWORD(v105);
            goto LABEL_253;
          }
LABEL_178:
          v189 = 0;
LABEL_182:
          memcpy_s(v190, 0x1CCu, v166, 0);
        }
      }
    }
  }
LABEL_253:
  v138 = v171;
  v139 = v171;
  v140 = v191;
  v182 = (int)v171;
  if ( v191 != 0 )
  {
    v141 = 0;
    v142 = 0;
    do
    {
      v143 = 10LL * *(unsigned int *)&v193[4 * v142 - 8];
      v144 = 10 * *(_DWORD *)&v193[4 * v142 - 8];
      *(_DWORD *)&v193[4 * v142 - 8] = v141 + v144;
      v145 = __PAIR64__(HIDWORD(v143), v141) + (unsigned int)v144;
      ++v142;
      v141 = HIDWORD(v145);
    }
    while ( v142 != v140 );
    HIDWORD(v176) = HIDWORD(v145);
    v139 = (char *)v182;
    if ( HIDWORD(v145) != 0 )
    {
      if ( v191 >= 0x73 )
      {
        v191 = 0;
        memcpy_s(&v192, 0x1CCu, v166, 0);
      }
      else
      {
        *(_DWORD *)&v193[4 * v191++ - 8] = HIDWORD(v145);
      }
    }
    v138 = v139;
  }
  v146 = __crt_strtox::divide((__crt_strtox *)&v191, (struct __crt_strtox::big_integer *)&v189);
  if ( v146 == 10 )
  {
    ++v175;
    v139 = v138 + 1;
    v147 = v189;
    *v138 = 49;
    v182 = (int)(v138 + 1);
    if ( v147 != 0 )
    {
      v148 = 0;
      v149 = v147;
      for ( k = 0; k != v149; ++k )
      {
        v151 = 10LL * (unsigned int)v190[k];
        v190[k] = v148 + v151;
        v148 = (v151 + (unsigned __int64)v148) >> 32;
      }
      v139 = (char *)v182;
      if ( v148 != 0 )
      {
        if ( v189 >= 0x73 )
        {
          v189 = 0;
          memcpy_s(v190, 0x1CCu, v166, 0);
        }
        else
        {
          v190[v189++] = v148;
        }
      }
    }
LABEL_272:
    v152 = v175;
  }
  else
  {
    if ( v146 != 0 )
    {
      v139 = v138 + 1;
      *v138 = v146 + 48;
      v182 = (int)(v138 + 1);
      goto LABEL_272;
    }
    v152 = v175 - 1;
  }
  *(_DWORD *)(v170 + 4) = v152;
  v153 = m;
  if ( v152 >= 0 && m <= 0x7FFFFFFF )
    v153 = v152 + m;
  v154 = SizeInBytes - 1;
  if ( SizeInBytes - 1 >= v153 )
    v154 = v153;
  result = (unsigned int)&v171[v154];
  for ( m = result; v139 != (char *)m; v182 = (int)v139 )
  {
    result = v191;
    if ( v191 == 0 )
      break;
    v155 = 0;
    v156 = v191;
    for ( n = 0; n != v156; ++n )
    {
      v158 = 1000000000LL * *(unsigned int *)&v193[4 * n - 8];
      v159 = 1000000000 * *(_DWORD *)&v193[4 * n - 8];
      *(_DWORD *)&v193[4 * n - 8] = v155 + v159;
      v160 = __PAIR64__(HIDWORD(v158), v155) + (unsigned int)v159;
      v155 = HIDWORD(v160);
    }
    v161 = v182;
    if ( HIDWORD(v160) != 0 )
    {
      if ( v191 >= 0x73 )
      {
        v191 = 0;
        memcpy_s(&v192, 0x1CCu, v166, 0);
      }
      else
      {
        *(_DWORD *)&v193[4 * v191++ - 8] = HIDWORD(v160);
      }
    }
    result = __crt_strtox::divide((__crt_strtox *)&v191, (struct __crt_strtox::big_integer *)&v189);
    v162 = 8;
    v163 = m - v161;
    do
    {
      v164 = result % v173;
      result /= v173;
      v165 = v164 + 48;
      if ( v163 >= v162 )
        *(_BYTE *)(v162 + v161) = v165;
      --v162;
    }
    while ( v162 != -1 );
    if ( v163 > 9 )
      v163 = 9;
    v139 = (char *)(v163 + v161);
  }
  *v139 = 0;
LABEL_299:
  if ( v168 != 0 )
    return fesetenv(&Env);
  return result;
}

// Address: 0x1001599A
int __cdecl common_flush_and_write_nolock<char>(unsigned __int8 Buf, FILE *Stream)
{
  int v2; // edi
  FILE *v3; // eax

  v2 = _fileno(Stream);
  if ( (Stream->_flag & 6) == 0 )
  {
    *_errno() = 9;
LABEL_3:
    v3 = Stream;
LABEL_4:
    _InterlockedOr(&v3->_flag, 0x10u);
    return -1;
  }
  if ( (Stream->_flag & 0x1000) != 0 )
  {
    *_errno() = 34;
    goto LABEL_3;
  }
  if ( (Stream->_flag & 1) != 0 )
  {
    Stream->_base = nullptr;
    v3 = Stream;
    if ( (Stream->_flag & 8) == 0 )
      goto LABEL_4;
    Stream->_ptr = (char *)Stream->_cnt;
    _InterlockedAnd(&Stream->_flag, 0xFFFFFFFE);
  }
  _InterlockedOr(&Stream->_flag, 2u);
  _InterlockedAnd(&Stream->_flag, 0xFFFFFFF7);
  Stream->_base = nullptr;
  if ( (Stream->_flag & 0x4C0) == 0
    && (Stream != __acrt_iob_func(1u) && Stream != __acrt_iob_func(2u) || _isatty(v2) == 0) )
  {
    __acrt_stdio_allocate_buffer_nolock(Stream);
  }
  if ( (unsigned __int8)write_buffer_nolock<char>(Buf, Stream) != 0 )
    return Buf;
  _InterlockedOr(&Stream->_flag, 0x10u);
  return -1;
}

// Address: 0x10015AAB
char __cdecl write_buffer_nolock<char>(char Buf, FILE *Stream)
{
  int v2; // edx
  int v3; // edi
  int cnt; // eax
  char *v5; // esi
  _BYTE *v7; // eax
  __int64 v8; // rax

  v2 = _fileno(Stream);
  if ( (Stream->_flag & 0xC0) == 0 )
    return _write(v2, &Buf, 1u) == 1;
  v3 = 0;
  cnt = Stream->_cnt;
  v5 = &Stream->_ptr[-cnt];
  Stream->_ptr = (char *)(cnt + 1);
  Stream->_base = (char *)(Stream->_bufsiz - 1);
  if ( (int)v5 > 0 )
  {
    v3 = _write(v2, (const void *)Stream->_cnt, (unsigned int)v5);
LABEL_4:
    *(_BYTE *)Stream->_cnt = Buf;
    return v3 == (_DWORD)v5;
  }
  if ( v2 == -1 || v2 == -2 )
    v7 = &unk_100251C0;
  else
    v7 = (_BYTE *)(dword_10025F28[v2 >> 6] + 48 * (v2 & 0x3F));
  if ( (v7[40] & 0x20) == 0 )
    goto LABEL_4;
  v8 = _lseeki64(v2, 0, 2);
  if ( (HIDWORD(v8) & (unsigned int)v8) != 0xFFFFFFFF )
    goto LABEL_4;
  _InterlockedOr(&Stream->_flag, 0x10u);
  return 1;
}

// Address: 0x10015B77
int __cdecl __acrt_stdio_flush_and_write_narrow_nolock(unsigned __int8 Buf, FILE *Stream)
{
  return common_flush_and_write_nolock<char>(Buf, Stream);
}

// Address: 0x10015B82
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_10026128 )
      return *(_BYTE *)(dword_10025F28[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) & 0x40;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return 0;
}

// Address: 0x10015BD8
void __cdecl __acrt_locale_free_monetary(void **a1)
{
  if ( a1 != nullptr )
  {
    if ( a1[3] != off_10025734 )
      _free_base(a1[3]);
    if ( a1[4] != off_10025738 )
      _free_base(a1[4]);
    if ( a1[5] != off_1002573C )
      _free_base(a1[5]);
    if ( a1[6] != off_10025740 )
      _free_base(a1[6]);
    if ( a1[7] != off_10025744 )
      _free_base(a1[7]);
    if ( a1[8] != off_10025748 )
      _free_base(a1[8]);
    if ( a1[9] != off_1002574C )
      _free_base(a1[9]);
    if ( a1[14] != off_10025760 )
      _free_base(a1[14]);
    if ( a1[15] != off_10025764 )
      _free_base(a1[15]);
    if ( a1[16] != off_10025768 )
      _free_base(a1[16]);
    if ( a1[17] != off_1002576C )
      _free_base(a1[17]);
    if ( a1[18] != off_10025770 )
      _free_base(a1[18]);
    if ( a1[19] != off_10025774 )
      _free_base(a1[19]);
  }
}

// Address: 0x10015CD6
void __cdecl __acrt_locale_free_numeric(void **a1)
{
  if ( a1 != nullptr )
  {
    if ( *a1 != off_10025728 )
      _free_base(*a1);
    if ( a1[1] != off_1002572C )
      _free_base(a1[1]);
    if ( a1[2] != off_10025730 )
      _free_base(a1[2]);
    if ( a1[12] != off_10025758 )
      _free_base(a1[12]);
    if ( a1[13] != off_1002575C )
      _free_base(a1[13]);
  }
}

// Address: 0x10015D3F
void __cdecl free_crt_array_internal(const void **const a1, unsigned int a2)
{
  void **v2; // esi
  int v3; // edi
  unsigned int v4; // ebx

  v2 = (void **)a1;
  v3 = 0;
  v4 = &a1[a2] >= a1 ? (4 * a2 + 3) >> 2 : 0;
  if ( v4 != 0 )
  {
    do
    {
      _free_base(*v2);
      ++v3;
      ++v2;
    }
    while ( v3 != v4 );
  }
}

// Address: 0x10015D7B
void __cdecl __acrt_locale_free_time(const void **a1)
{
  if ( a1 != nullptr )
  {
    free_crt_array_internal(a1, 7u);
    free_crt_array_internal(a1 + 7, 7u);
    free_crt_array_internal(a1 + 14, 0xCu);
    free_crt_array_internal(a1 + 26, 0xCu);
    free_crt_array_internal(a1 + 38, 2u);
    _free_base((void *)a1[40]);
    _free_base((void *)a1[41]);
    _free_base((void *)a1[42]);
    free_crt_array_internal(a1 + 45, 7u);
    free_crt_array_internal(a1 + 52, 7u);
    free_crt_array_internal(a1 + 59, 0xCu);
    free_crt_array_internal(a1 + 71, 0xCu);
    free_crt_array_internal(a1 + 83, 2u);
    _free_base((void *)a1[85]);
    _free_base((void *)a1[86]);
    _free_base((void *)a1[87]);
    _free_base((void *)a1[88]);
  }
}

// Address: 0x10015E5F
errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  rsize_t v3; // ecx
  int *v4; // eax
  errno_t v5; // esi
  wchar_t *v7; // edx
  char *v8; // ebx
  wchar_t v9; // ax
  int v10; // [esp-4h] [ebp-10h]

  if ( Destination == nullptr )
    goto LABEL_5;
  v3 = SizeInWords;
  if ( SizeInWords == 0 )
    goto LABEL_5;
  if ( Source != nullptr )
  {
    v7 = Destination;
    v5 = 0;
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
      v8 = (char *)((char *)Source - (char *)v7);
      do
      {
        v9 = *(wchar_t *)((char *)v7 + (_DWORD)v8);
        *v7++ = v9;
        if ( v9 == 0 )
          break;
        --v3;
      }
      while ( v3 != 0 );
      if ( v3 == 0 )
      {
        *Destination = 0;
        v4 = _errno();
        v10 = 34;
        goto LABEL_6;
      }
      return v5;
    }
  }
  *Destination = 0;
LABEL_5:
  v4 = _errno();
  v10 = 22;
LABEL_6:
  v5 = v10;
  *v4 = v10;
  _invalid_parameter_noinfo();
  return v5;
}

// Address: 0x10015ED4
BOOL __cdecl __acrt_GetStringTypeA(
        struct __crt_locale_pointers *a1,
        DWORD dwInfoType,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWORD lpCharType,
        UINT CodePage,
        int a7)
{
  UINT v7; // ecx
  BOOL StringTypeW; // edi
  int v9; // eax
  size_t v10; // ebx
  size_t v11; // ecx
  void *v12; // esp
  _DWORD *v13; // esi
  _DWORD *v14; // eax
  int v15; // eax
  _DWORD v17[3]; // [esp+0h] [ebp-24h] BYREF
  _DWORD v18[3]; // [esp+Ch] [ebp-18h] BYREF
  char v19; // [esp+18h] [ebp-Ch]
  int cchWideChar; // [esp+1Ch] [ebp-8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v18, a1);
  v7 = CodePage;
  if ( CodePage == 0 )
  {
    v7 = *(_DWORD *)(v18[1] + 8);
    CodePage = v7;
  }
  StringTypeW = false;
  v9 = MultiByteToWideChar(v7, 8 * (a7 != 0) + 1, lpMultiByteStr, cbMultiByte, nullptr, 0);
  cchWideChar = v9;
  if ( v9 != 0 )
  {
    v10 = 2 * v9;
    if ( (2 * v9 < (unsigned int)(2 * v9 + 8) ? 2 * v9 + 8 : 0) == 0 )
    {
      v13 = nullptr;
      goto LABEL_12;
    }
    v11 = v10 + 8;
    if ( (v10 < v10 + 8 ? v10 + 8 : 0) > 0x400 )
    {
      v14 = _malloc_base(v10 < v11 ? v11 : 0);
      v13 = v14;
      if ( v14 != nullptr )
      {
        *v14 = 56797;
        goto LABEL_10;
      }
    }
    else
    {
      v12 = alloca(v10 < v11 ? v11 : 0);
      v13 = v17;
      if ( v17 != nullptr )
      {
        v17[0] = 52428;
LABEL_10:
        v13 += 2;
LABEL_12:
        if ( v13 != nullptr )
        {
          memset(v13, 0, v10);
          v15 = MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, cbMultiByte, (LPWSTR)v13, cchWideChar);
          if ( v15 != 0 )
            StringTypeW = GetStringTypeW(dwInfoType, (LPCWCH)v13, v15, lpCharType);
        }
      }
    }
    _freea_crt((int)v13);
  }
  if ( v19 != 0 )
    *(_DWORD *)(v18[0] + 848) &= ~2u;
  return StringTypeW;
}

// Address: 0x10015FF1
char *__acrt_lowio_create_handle_array()
{
  char *v0; // eax
  char *v1; // edi
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  char *v5; // [esp+8h] [ebp-8h]

  v0 = (char *)_calloc_base(0x40u, 0x30u);
  v5 = v0;
  if ( v0 != nullptr )
  {
    v2 = v0 + 32;
    v3 = v0 + 3072;
    do
    {
      __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 - 8), 0xFA0u, 0);
      *(v2 - 2) = -1;
      *v2 = 0;
      v2 += 12;
      *(v2 - 11) = 0;
      *(v2 - 10) = 168427520;
      *((_BYTE *)v2 - 36) = 10;
      *((_BYTE *)v2 - 35) &= 0xF8u;
      *((_BYTE *)v2 - 34) = 0;
    }
    while ( v2 - 8 != v3 );
    v1 = v5;
  }
  else
  {
    v1 = nullptr;
  }
  _free_base(nullptr);
  return v1;
}

// Address: 0x1001606B
void __cdecl __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION lpCriticalSection)
{
  struct _RTL_CRITICAL_SECTION *v1; // edi

  if ( lpCriticalSection != nullptr )
  {
    v1 = lpCriticalSection;
    do
    {
      DeleteCriticalSection(v1);
      v1 += 2;
    }
    while ( v1 != &lpCriticalSection[128] );
    _free_base(lpCriticalSection);
  }
}

// Address: 0x100160A0
int __cdecl __acrt_lowio_ensure_fh_exists(unsigned int a1)
{
  int v1; // esi
  int v3; // edi
  int v4; // eax
  char *handle_array; // eax

  if ( a1 < 0x2000 )
  {
    v1 = 0;
    __acrt_lock(7);
    v3 = 0;
    v4 = dword_10026128;
    while ( (int)a1 >= v4 )
    {
      if ( dword_10025F28[v3] == 0 )
      {
        handle_array = __acrt_lowio_create_handle_array();
        dword_10025F28[v3] = (int)handle_array;
        if ( handle_array == nullptr )
        {
          v1 = 12;
          break;
        }
        v4 = dword_10026128 + 64;
        dword_10026128 += 64;
      }
      ++v3;
    }
    __acrt_unlock(7);
  }
  else
  {
    v1 = 9;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return v1;
}

// Address: 0x10016138
void __cdecl __acrt_lowio_lock_fh(int a1)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(dword_10025F28[a1 >> 6] + 48 * (a1 & 0x3F)));
}

// Address: 0x1001615B
void __cdecl __acrt_lowio_unlock_fh(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_10025F28[a1 >> 6] + 48 * (a1 & 0x3F)));
}

// Address: 0x1001617E
int __cdecl _free_osfhnd(int a1)
{
  int v1; // ebx
  int v2; // eax

  if ( a1 < 0
    || a1 >= (unsigned int)dword_10026128
    || (v1 = 48 * (a1 & 0x3F), v2 = dword_10025F28[a1 >> 6], (*(_BYTE *)(v1 + v2 + 40) & 1) == 0)
    || *(_DWORD *)(v1 + v2 + 24) == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( sub_1001830C() == 1 )
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
    *(_DWORD *)(v1 + dword_10025F28[a1 >> 6] + 24) = -1;
    return 0;
  }
}

// Address: 0x1001620F
intptr_t __cdecl _get_osfhandle(int FileHandle)
{
  int v1; // ecx
  int v2; // eax

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_10026128 )
    {
      v1 = 48 * (FileHandle & 0x3F);
      v2 = dword_10025F28[FileHandle >> 6];
      if ( (*(_BYTE *)(v2 + v1 + 40) & 1) != 0 )
        return *(_DWORD *)(v2 + v1 + 24);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x10016279
int __cdecl GetTableIndexFromLocaleName(const wchar_t *a1)
{
  int v1; // edi
  int v2; // ebx
  __int16 *v3; // esi
  char *v4; // ecx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax
  int v8; // edx
  int v10; // [esp+Ch] [ebp-10h]
  int v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  v1 = 0;
  v2 = 227;
  v11 = 0;
  v12 = 227;
  while ( 1 )
  {
    v13 = 85;
    v10 = (v2 + v1) / 2;
    v3 = (&off_1001FDA0)[2 * v10];
    v4 = (char *)((char *)a1 - (char *)v3);
    do
    {
      v5 = *(__int16 *)((char *)v3 + (_DWORD)v4);
      if ( v5 < 0x41u || v5 > 0x5Au )
        v6 = *(__int16 *)((char *)v3 + (_DWORD)v4);
      else
        v6 = v5 + 32;
      v7 = *v3;
      if ( (unsigned __int16)*v3 >= 0x41u && v7 <= 0x5Au )
        v7 += 32;
      ++v3;
      --v13;
    }
    while ( v13 != 0 && v6 != 0 && v6 == v7 );
    v1 = v11;
    v2 = v12;
    v8 = v6 - v7;
    if ( v8 == 0 )
      break;
    if ( v8 >= 0 )
    {
      v1 = v10 + 1;
      v11 = v10 + 1;
    }
    else
    {
      v2 = v10 - 1;
      v12 = v10 - 1;
    }
    if ( v1 > v2 )
      return -1;
  }
  return dword_1001FDA4[2 * v10];
}

// Address: 0x10016335
int __cdecl __acrt_DownlevelLocaleNameToLCID(wchar_t *a1)
{
  int TableIndexFromLocaleName; // eax

  if ( a1 != nullptr && (unsigned int)(TableIndexFromLocaleName = GetTableIndexFromLocaleName(a1)) < 0xE4 )
    return dword_1001EC80[2 * TableIndexFromLocaleName];
  else
    return 0;
}

// Address: 0x10016361
int __cdecl _fclose_nolock(FILE *Stream)
{
  int v2; // edi
  int v3; // eax

  if ( Stream != nullptr )
  {
    v2 = -1;
    if ( (Stream->_flag & 0x2000) != 0 )
    {
      v2 = __acrt_stdio_flush_nolock(Stream);
      __acrt_stdio_free_buffer_nolock((int)Stream);
      v3 = _fileno(Stream);
      if ( (int)sub_100183BC(v3) >= 0 )
      {
        if ( Stream->_tmpfname != nullptr )
        {
          _free_base(Stream->_tmpfname);
          Stream->_tmpfname = nullptr;
        }
      }
      else
      {
        v2 = -1;
      }
    }
    __acrt_stdio_free_stream(Stream);
    return v2;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

// Address: 0x100163D7
int __cdecl fclose(FILE *Stream)
{
  int v2; // [esp+14h] [ebp-1Ch]

  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( (Stream->_flag & 0x1000) != 0 )
  {
    __acrt_stdio_free_stream(Stream);
    return -1;
  }
  _lock_file(Stream);
  v2 = _fclose_nolock(Stream);
  _unlock_file(Stream);
  return v2;
}

// Address: 0x10016457
int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_61cee617f5178ae960314fd4d05640a0_,_lambda_6978c1fb23f02e42e1d9e99668cc68aa_ &,_lambda_9cd88cf8ad10232537feb2133f08c833_>(
        int *a1,
        int **a2,
        int *a3)
{
  int v3; // esi
  void *osfhandle; // eax
  unsigned int *v5; // esi

  v3 = 0;
  __acrt_lowio_lock_fh(*a1);
  if ( (*(_BYTE *)(dword_10025F28[**a2 >> 6] + 48 * (**a2 & 0x3F) + 40) & 1) == 0 )
    goto LABEL_4;
  osfhandle = (void *)_get_osfhandle(**a2);
  if ( !FlushFileBuffers(osfhandle) )
  {
    v5 = __doserrno();
    *v5 = GetLastError();
LABEL_4:
    *_errno() = 9;
    v3 = -1;
  }
  __acrt_lowio_unlock_fh(*a3);
  return v3;
}

// Address: 0x100164EF
int __cdecl sub_100164EF(int a1, int **a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<int>::operator()<_lambda_61cee617f5178ae960314fd4d05640a0_,_lambda_6978c1fb23f02e42e1d9e99668cc68aa_ &,_lambda_9cd88cf8ad10232537feb2133f08c833_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x10016517
int __cdecl _commit(int FileHandle)
{
  int *p_FileHandle; // [esp+4h] [ebp-4h] BYREF

  if ( FileHandle == -2 )
  {
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0
      && FileHandle < (unsigned int)dword_10026128
      && (*(_BYTE *)(dword_10025F28[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) & 1) != 0 )
    {
      p_FileHandle = &FileHandle;
      return sub_100164EF(FileHandle, &p_FileHandle);
    }
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x10016586
DWORD *__cdecl write_double_translated_ansi_nolock(DWORD *a1, int a2, char *SrcCh, int a4)
{
  int v4; // ebx
  const char *v5; // edi
  char v6; // ch
  int v7; // edx
  char v8; // cl
  int v9; // eax
  DWORD v10; // eax
  UINT CodePage; // [esp+Ch] [ebp-38h]
  DWORD v13; // [esp+10h] [ebp-34h]
  int v14; // [esp+18h] [ebp-2Ch]
  HANDLE hFile; // [esp+1Ch] [ebp-28h]
  char *v16; // [esp+20h] [ebp-24h]
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-20h] BYREF
  __int16 Buffer; // [esp+28h] [ebp-1Ch] BYREF
  WCHAR WideCharStr; // [esp+2Ch] [ebp-18h] BYREF
  CHAR MultiByteStr[8]; // [esp+30h] [ebp-14h] BYREF
  char v21[8]; // [esp+38h] [ebp-Ch] BYREF

  v4 = 48 * (a2 & 0x3F);
  v5 = SrcCh;
  v14 = a2 >> 6;
  hFile = *(HANDLE *)(dword_10025F28[a2 >> 6] + v4 + 24);
  v16 = &SrcCh[a4];
  CodePage = GetConsoleCP();
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( SrcCh < &SrcCh[a4] )
  {
    while ( 1 )
    {
      v6 = *v5;
      WideCharStr = 0;
      HIBYTE(Buffer) = v6;
      v7 = dword_10025F28[v14];
      v8 = *(_BYTE *)(v7 + v4 + 45);
      if ( (v8 & 4) != 0 )
        break;
      if ( (__pctype_func()[*(unsigned __int8 *)v5] & 0x8000u) == 0 )
      {
        v9 = mbtowc(&WideCharStr, v5, 1u);
LABEL_9:
        if ( v9 == -1 )
          return a1;
        goto LABEL_10;
      }
      if ( v5 >= v16 )
      {
        *(_BYTE *)(dword_10025F28[v14] + v4 + 46) = *v5;
        *(_BYTE *)(dword_10025F28[v14] + v4 + 45) |= 4u;
        ++a1[1];
        return a1;
      }
      if ( mbtowc(&WideCharStr, v5, 2u) == -1 )
        return a1;
      ++v5;
LABEL_10:
      ++v5;
      v10 = WideCharToMultiByte(CodePage, 0, &WideCharStr, 1, MultiByteStr, 5, nullptr, nullptr);
      v13 = v10;
      if ( v10 == 0 )
        return a1;
      if ( !WriteFile(hFile, MultiByteStr, v10, &NumberOfBytesWritten, nullptr) )
      {
LABEL_20:
        *a1 = GetLastError();
        return a1;
      }
      a1[1] = (DWORD)&v5[a1[2] - (_DWORD)SrcCh];
      if ( NumberOfBytesWritten < v13 )
        return a1;
      if ( HIBYTE(Buffer) == 10 )
      {
        Buffer = 13;
        if ( !WriteFile(hFile, &Buffer, 1u, &NumberOfBytesWritten, nullptr) )
          goto LABEL_20;
        if ( NumberOfBytesWritten == 0 )
          return a1;
        ++a1[2];
        ++a1[1];
      }
      if ( v5 >= v16 )
        return a1;
    }
    v21[0] = *(_BYTE *)(v7 + v4 + 46);
    v21[1] = v6;
    *(_BYTE *)(v7 + v4 + 45) = v8 & 0xFB;
    v9 = mbtowc(&WideCharStr, v21, 2u);
    goto LABEL_9;
  }
  return a1;
}

// Address: 0x10016739
DWORD *__cdecl write_double_translated_unicode_nolock(DWORD *a1, wchar_t *a2, int a3)
{
  wchar_t *v3; // edi
  int v4; // ebx

  v3 = a2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( v3 < (wchar_t *)((char *)v3 + a3) )
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( _putwch_nolock(*v3) != (_WORD)v4 )
        break;
      a1[1] += 2;
      if ( v4 == 10 )
      {
        if ( _putwch_nolock(0xDu) != 13 )
          break;
        ++a1[1];
        ++a1[2];
      }
      if ( ++v3 >= (wchar_t *)((char *)a2 + a3) )
        return a1;
    }
    *a1 = GetLastError();
  }
  return a1;
}

// Address: 0x100167A6
bool __cdecl write_requires_double_translation_nolock(int FileHandle)
{
  int v2; // edi
  int v3; // esi
  DWORD Mode; // [esp+4h] [ebp-4h] BYREF

  if ( _isatty(FileHandle) == 0 )
    return false;
  v2 = FileHandle >> 6;
  v3 = 48 * (FileHandle & 0x3F);
  return *(char *)(dword_10025F28[FileHandle >> 6] + v3 + 40) < 0
      && (*(_DWORD *)(*((_DWORD *)__acrt_getptd() + 19) + 168) != 0 || *(_BYTE *)(dword_10025F28[v2] + v3 + 41) != 0)
      && GetConsoleMode(*(HANDLE *)(dword_10025F28[v2] + v3 + 24), &Mode);
}

// Address: 0x1001681C
DWORD *__cdecl write_text_ansi_nolock(DWORD *a1, int a2, char *a3, int a4)
{
  char *v4; // ebx
  void *v5; // ecx
  unsigned int v6; // eax
  char *v7; // edi
  char v8; // al
  DWORD v9; // edi
  DWORD v10; // eax
  void *v12; // [esp+Ch] [ebp-1410h]
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-140Ch] BYREF
  char *v14; // [esp+14h] [ebp-1408h]
  _BYTE Buffer[5119]; // [esp+18h] [ebp-1404h] BYREF
  char v16; // [esp+1417h] [ebp-5h] BYREF

  v4 = a3;
  v5 = *(void **)(dword_10025F28[a2 >> 6] + 48 * (a2 & 0x3F) + 24);
  *a1 = 0;
  v6 = (unsigned int)&a3[a4];
  a1[1] = 0;
  a1[2] = 0;
  v12 = v5;
  v14 = &a3[a4];
  while ( (unsigned int)v4 < v6 )
  {
    v7 = Buffer;
    do
    {
      if ( (unsigned int)v4 >= v6 )
        break;
      v8 = *v4++;
      if ( v8 == 10 )
      {
        ++a1[2];
        *v7++ = 13;
      }
      *v7++ = v8;
      v6 = (unsigned int)v14;
    }
    while ( v7 < &v16 );
    v9 = v7 - Buffer;
    if ( !WriteFile(v5, Buffer, v9, &NumberOfBytesWritten, nullptr) )
    {
      *a1 = GetLastError();
      return a1;
    }
    v10 = NumberOfBytesWritten;
    a1[1] += NumberOfBytesWritten;
    if ( v10 < v9 )
      return a1;
    v6 = (unsigned int)v14;
    v5 = v12;
  }
  return a1;
}

// Address: 0x100168FB
DWORD *__cdecl write_text_utf16le_nolock(DWORD *a1, int a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 *v4; // ebx
  void *v5; // ecx
  unsigned int v6; // eax
  char *v7; // edi
  int v8; // eax
  DWORD v9; // edi
  DWORD v10; // eax
  void *v12; // [esp+Ch] [ebp-1410h]
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-140Ch] BYREF
  char *v14; // [esp+14h] [ebp-1408h]
  _BYTE Buffer[5118]; // [esp+18h] [ebp-1404h] BYREF
  char v16; // [esp+1416h] [ebp-6h] BYREF

  v4 = a3;
  v5 = *(void **)(dword_10025F28[a2 >> 6] + 48 * (a2 & 0x3F) + 24);
  v6 = (unsigned int)a3 + a4;
  v12 = v5;
  v14 = (char *)a3 + a4;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  while ( (unsigned int)v4 < v6 )
  {
    v7 = Buffer;
    do
    {
      if ( (unsigned int)v4 >= v6 )
        break;
      v8 = *v4++;
      if ( v8 == 10 )
      {
        a1[2] += 2;
        *(_WORD *)v7 = 13;
        v7 += 2;
      }
      *(_WORD *)v7 = v8;
      v7 += 2;
      v6 = (unsigned int)v14;
    }
    while ( v7 < &v16 );
    v9 = (v7 - Buffer) & 0xFFFFFFFE;
    if ( !WriteFile(v5, Buffer, v9, &NumberOfBytesWritten, nullptr) )
    {
      *a1 = GetLastError();
      return a1;
    }
    v10 = NumberOfBytesWritten;
    a1[1] += NumberOfBytesWritten;
    if ( v10 < v9 )
      return a1;
    v6 = (unsigned int)v14;
    v5 = v12;
  }
  return a1;
}

// Address: 0x100169E9
DWORD *__cdecl write_text_utf8_nolock(DWORD *a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebx
  DWORD *v5; // esi
  unsigned __int16 *v6; // edi
  unsigned int v7; // esi
  WCHAR *v8; // eax
  int v9; // ecx
  int v10; // eax
  unsigned int v12; // [esp+Ch] [ebp-1418h]
  HANDLE hFile; // [esp+10h] [ebp-1414h]
  DWORD NumberOfBytesWritten; // [esp+14h] [ebp-1410h] BYREF
  unsigned int v15; // [esp+18h] [ebp-140Ch]
  CHAR MultiByteStr[3416]; // [esp+1Ch] [ebp-1408h] BYREF
  WCHAR WideCharStr[852]; // [esp+D74h] [ebp-6B0h] BYREF
  char v18; // [esp+141Ch] [ebp-8h] BYREF

  v4 = 0;
  v5 = a1;
  v6 = (unsigned __int16 *)a3;
  hFile = *(HANDLE *)(dword_10025F28[a2 >> 6] + 48 * (a2 & 0x3F) + 24);
  *a1 = 0;
  a1[1] = 0;
  v15 = a3 + a4;
  a1[2] = 0;
  if ( a3 < a3 + a4 )
  {
LABEL_2:
    v7 = v15;
    v8 = WideCharStr;
    do
    {
      if ( (unsigned int)v6 >= v7 )
        break;
      v9 = *v6++;
      if ( v9 == 10 )
        *v8++ = 13;
      *v8++ = v9;
    }
    while ( v8 < (WCHAR *)&v18 );
    v10 = WideCharToMultiByte(0xFDE9u, 0, WideCharStr, v8 - WideCharStr, MultiByteStr, 3413, nullptr, nullptr);
    v5 = a1;
    v12 = v10;
    if ( v10 != 0 )
    {
      while ( WriteFile(hFile, &MultiByteStr[v4], v10 - v4, &NumberOfBytesWritten, nullptr) )
      {
        v4 += NumberOfBytesWritten;
        v10 = v12;
        if ( v4 >= v12 )
        {
          a1[1] = (DWORD)v6 - a3;
          if ( (unsigned int)v6 >= v15 )
            return v5;
          v4 = 0;
          goto LABEL_2;
        }
      }
    }
    *a1 = GetLastError();
  }
  return v5;
}

// Address: 0x10016B16
int __cdecl _write(int FileHandle, const void *Buf, unsigned int MaxCharCount)
{
  int v3; // edi
  int v5; // [esp+14h] [ebp-20h]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= (unsigned int)dword_10026128
    || (v5 = 48 * (FileHandle & 0x3F), (*(_BYTE *)(dword_10025F28[FileHandle >> 6] + v5 + 40) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  v3 = -1;
  if ( (*(_BYTE *)(dword_10025F28[FileHandle >> 6] + v5 + 40) & 1) != 0 )
  {
    v3 = _write_nolock(FileHandle, Buf, MaxCharCount);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
  }
  __acrt_lowio_unlock_fh(FileHandle);
  return v3;
}

// Address: 0x10016C01
int __cdecl _write_nolock(int FileHandle, wchar_t *lpBuffer, DWORD a3)
{
  wchar_t *v3; // edi
  int v5; // edx
  int v6; // eax
  char v7; // bl
  DWORD *v8; // eax
  unsigned int *p_LastError; // esi
  int v10; // ecx
  void *v11; // eax
  _DWORD *v12; // esi
  unsigned int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+1Ch] [ebp-1Ch]
  int v15; // [esp+20h] [ebp-18h]
  DWORD LastError; // [esp+24h] [ebp-14h] BYREF
  DWORD NumberOfBytesWritten; // [esp+28h] [ebp-10h] BYREF
  int v18; // [esp+2Ch] [ebp-Ch]
  DWORD nNumberOfBytesToWrite; // [esp+30h] [ebp-8h]

  nNumberOfBytesToWrite = a3;
  v3 = lpBuffer;
  if ( a3 == 0 )
    return 0;
  if ( lpBuffer == nullptr )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  v5 = 48 * (FileHandle & 0x3F);
  v14 = FileHandle >> 6;
  v6 = dword_10025F28[FileHandle >> 6];
  v15 = v5;
  v7 = *(_BYTE *)(v6 + v5 + 41);
  if ( (v7 == 2 || v7 == 1) && (a3 & 1) != 0 )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( (*(_BYTE *)(v6 + v5 + 40) & 0x20) != 0 )
    _lseeki64_nolock(FileHandle, 0, 2u);
  if ( write_requires_double_translation_nolock(FileHandle) )
  {
    if ( v7 != 0 )
    {
      if ( (unsigned __int8)(v7 - 1) > 1u )
        goto LABEL_33;
      v8 = write_double_translated_unicode_nolock(&LastError, lpBuffer, nNumberOfBytesToWrite);
    }
    else
    {
      v8 = write_double_translated_ansi_nolock(&LastError, FileHandle, (char *)lpBuffer, nNumberOfBytesToWrite);
    }
LABEL_15:
    p_LastError = v8;
    goto LABEL_27;
  }
  v10 = dword_10025F28[v14];
  if ( *(char *)(v10 + v15 + 40) < 0 )
  {
    if ( v7 != 0 )
    {
      if ( v7 == 1 )
      {
        v8 = write_text_utf8_nolock(&LastError, FileHandle, (unsigned int)lpBuffer, nNumberOfBytesToWrite);
      }
      else
      {
        if ( v7 != 2 )
          goto LABEL_33;
        v8 = write_text_utf16le_nolock(&LastError, FileHandle, lpBuffer, nNumberOfBytesToWrite);
      }
    }
    else
    {
      v8 = write_text_ansi_nolock(&LastError, FileHandle, (char *)lpBuffer, nNumberOfBytesToWrite);
    }
    goto LABEL_15;
  }
  v11 = *(void **)(v10 + v15 + 24);
  LastError = 0;
  NumberOfBytesWritten = 0;
  v18 = 0;
  if ( !WriteFile(v11, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, nullptr) )
    LastError = GetLastError();
  p_LastError = &LastError;
LABEL_27:
  v13 = *p_LastError;
  v12 = p_LastError + 1;
  if ( *v12 == 0 )
  {
    if ( v13 != 0 )
    {
      if ( v13 == 5 )
      {
        *_errno() = 9;
        *__doserrno() = 5;
      }
      else
      {
        __acrt_errno_map_os_error(v13);
      }
      return -1;
    }
    v3 = lpBuffer;
LABEL_33:
    if ( (*(_BYTE *)(dword_10025F28[v14] + v15 + 40) & 0x40) != 0 && *(_BYTE *)v3 == 26 )
      return 0;
    *_errno() = 28;
    *__doserrno() = 0;
    return -1;
  }
  return *v12 - v12[1];
}

// Address: 0x10016E0D
void *__cdecl calloc(size_t Count, size_t Size)
{
  return _calloc_base(Count, Size);
}

// Address: 0x10016E18
int __cdecl _wcsnicoll(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  const wchar_t *v3; // ecx
  size_t v4; // edi
  int v6; // edx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // si
  wchar_t v9; // ax

  if ( dword_10025F1C != 0 )
    return _wcsnicoll_l(String1, String2, MaxCount, nullptr);
  if ( String1 != nullptr && (v3 = String2, String2 != nullptr) && (v4 = MaxCount, MaxCount <= 0x7FFFFFFF) )
  {
    v6 = (char *)String1 - (char *)String2;
    do
    {
      v7 = *(const wchar_t *)((char *)v3 + v6);
      if ( v7 < 0x41u || v7 > 0x5Au )
        v8 = *(const wchar_t *)((char *)v3 + v6);
      else
        v8 = v7 + 32;
      v9 = *v3;
      if ( *v3 >= 0x41u && v9 <= 0x5Au )
        v9 += 32;
      ++v3;
      --v4;
    }
    while ( v4 != 0 && v8 != 0 && v8 == v9 );
    return v8 - v9;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}

// Address: 0x10016EE8
int __cdecl _wcsnicoll_l(const wchar_t *String1, const wchar_t *String2, size_t MaxCount, _locale_t Locale)
{
  size_t v4; // ebx
  const wchar_t *v6; // edi
  int v7; // esi
  wchar_t *v8; // eax
  int v9; // eax
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  wchar_t v12; // ax
  wchar_t v13; // dx
  int v14; // eax
  _DWORD v15[3]; // [esp+4h] [ebp-10h] BYREF
  char v16; // [esp+10h] [ebp-4h]
  const wchar_t *String1a; // [esp+1Ch] [ebp+8h]

  v4 = MaxCount;
  if ( MaxCount == 0 )
    return 0;
  if ( String1 != nullptr && (v6 = String2, String2 != nullptr) )
  {
    v7 = 0x7FFFFFFF;
    if ( MaxCount <= 0x7FFFFFFF )
    {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v15, Locale);
      v8 = *(wchar_t **)(v15[1] + 164);
      if ( v8 != nullptr )
      {
        v14 = __acrt_CompareStringW(v8, 0x1001u, (wchar_t *)String1, MaxCount, String2, MaxCount);
        if ( v14 != 0 )
          v7 = v14 - 2;
        else
          *_errno() = 22;
      }
      else
      {
        v9 = (char *)String1 - (char *)String2;
        String1a = (const wchar_t *)((char *)String1 - (char *)String2);
        do
        {
          v10 = *(const wchar_t *)((char *)v6 + v9);
          if ( v10 < 0x41u || v10 > 0x5Au )
            v11 = v10;
          else
            v11 = v10 + 32;
          v12 = *v6;
          if ( *v6 < 0x41u || v12 > 0x5Au )
            v13 = *v6;
          else
            v13 = v12 + 32;
          ++v6;
          if ( --v4 == 0 )
            break;
          if ( v11 == 0 )
            break;
          v9 = (int)String1a;
        }
        while ( v11 == v13 );
        v7 = v11 - v13;
      }
      if ( v16 != 0 )
        *(_DWORD *)(v15[0] + 848) &= ~2u;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
    }
    return v7;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}

// Address: 0x10017015
int __cdecl construct_command_line<wchar_t>(const wchar_t **a1, wchar_t **a2)
{
  const wchar_t **v2; // ebx
  size_t v3; // edx
  const wchar_t **v4; // esi
  const wchar_t *v5; // ecx
  _WORD *v6; // edi
  __int16 v7; // ax
  wchar_t *v8; // eax
  wchar_t *v9; // esi
  int v10; // esi
  wchar_t *v11; // edi
  const wchar_t *v12; // ecx
  int v13; // edx
  __int16 v14; // ax
  wchar_t *v15; // edi
  int v17; // [esp+10h] [ebp-4h]

  v2 = a1;
  v3 = 0;
  v4 = a1;
  *a2 = nullptr;
  v5 = *a1;
  if ( *a1 == nullptr )
    goto LABEL_6;
  do
  {
    v6 = v5 + 1;
    do
      v7 = *v5++;
    while ( v7 != 0 );
    ++v4;
    v3 += v5 - v6 + 1;
    v5 = *v4;
  }
  while ( *v4 != nullptr );
  v17 = v3;
  if ( v3 <= 1 )
  {
LABEL_6:
    v3 = 1;
    v17 = 1;
  }
  v8 = (wchar_t *)_calloc_base(v3, 2u);
  v9 = v8;
  if ( v8 != nullptr )
  {
    v11 = v8;
    if ( *a1 != nullptr )
    {
      do
      {
        if ( wcscpy_s(v11, v17 - (v11 - v9), *v2) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        v12 = *v2;
        v13 = (int)(*v2 + 1);
        do
          v14 = *v12++;
        while ( v14 != 0 );
        ++v2;
        v15 = &v11[((int)v12 - v13) >> 1];
        *v15 = 32;
        v11 = v15 + 1;
      }
      while ( *v2 != nullptr );
      *(v11 - 1) = 0;
    }
    *a2 = v9;
    v10 = 0;
  }
  else
  {
    __acrt_errno_map_os_error(8u);
    v10 = 12;
    *_errno() = 12;
  }
  _free_base(nullptr);
  return v10;
}

// Address: 0x10017100
int __cdecl construct_environment_block<wchar_t>(__int16 **a1, wchar_t **a2)
{
  int result; // eax
  errno_t v3; // eax
  int v4; // esi
  char *v5; // eax
  __int16 v6; // cx
  int v7; // eax
  __int16 **v8; // edx
  int v9; // ebx
  __int16 *v10; // ecx
  _WORD *v11; // esi
  __int16 v12; // ax
  unsigned __int16 *wide_environment_from_os; // edi
  unsigned __int16 *i; // esi
  int v15; // ebx
  char v16; // al
  size_t v17; // ecx
  wchar_t *v18; // esi
  wchar_t *v19; // ebx
  int v20; // ebx
  rsize_t v21; // ecx
  const wchar_t **j; // edx
  void **v23; // edx
  char *v24; // ecx
  __int16 v25; // ax
  int v26; // eax
  uintptr_t v27; // [esp-8h] [ebp-54h]
  _DWORD v28[2]; // [esp+4h] [ebp-48h] BYREF
  wchar_t **v29; // [esp+Ch] [ebp-40h]
  int v30; // [esp+10h] [ebp-3Ch]
  void *Src; // [esp+14h] [ebp-38h] BYREF
  __int16 **v32; // [esp+18h] [ebp-34h] BYREF
  rsize_t SizeInWords; // [esp+1Ch] [ebp-30h]
  void *Block; // [esp+20h] [ebp-2Ch] BYREF
  char v35; // [esp+27h] [ebp-25h]
  void **p_Src; // [esp+28h] [ebp-24h] BYREF
  int v37; // [esp+2Ch] [ebp-20h]
  wchar_t Source[12]; // [esp+30h] [ebp-1Ch] BYREF

  result = (int)a1;
  v32 = a1;
  v29 = a2;
  v30 = 0;
  *a2 = nullptr;
  if ( a1 != nullptr )
  {
    wcscpy(Source, L"SystemRoot");
    Block = nullptr;
    v3 = _wdupenv_s((wchar_t **)&Block, nullptr, Source);
    if ( v3 != 0 )
    {
      if ( v3 == 22 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v4 = *_errno();
    }
    else
    {
      v5 = (char *)Block;
      if ( Block != nullptr )
      {
        do
        {
          v6 = *(_WORD *)v5;
          v5 += 2;
        }
        while ( v6 != 0 );
        v7 = ((v5 - ((_BYTE *)Block + 2)) >> 1) + 1;
      }
      else
      {
        v7 = 0;
      }
      v8 = v32;
      v9 = 2;
      v10 = *v32;
      SizeInWords = v7 + 11;
      v37 = 2;
      if ( v10 != nullptr )
      {
        do
        {
          v11 = v10 + 1;
          do
            v12 = *v10++;
          while ( v12 != 0 );
          ++v8;
          v9 += v10 - v11 + 1;
          v10 = *v8;
        }
        while ( *v8 != nullptr );
        v37 = v9;
      }
      wide_environment_from_os = (unsigned __int16 *)__dcrt_get_wide_environment_from_os();
      if ( wide_environment_from_os != nullptr )
      {
        for ( i = wide_environment_from_os; *i != 61; i += wcslen(i) + 1 )
          ;
        Src = i;
        p_Src = &Src;
        v28[0] = &v32;
        v15 = (unknown_libname_47(&p_Src) - (int)i) >> 1;
        p_Src = (void **)v15;
        v28[1] = Source;
        v16 = unknown_libname_46(v28);
        v17 = v15 + v37;
        v35 = v16;
        if ( v16 == 0 )
          v17 += SizeInWords;
        v37 = v17;
        v18 = (wchar_t *)_calloc_base(v17, 2u);
        if ( v18 != nullptr )
        {
          v19 = v18;
          if ( p_Src != nullptr )
          {
            v20 = (int)p_Src;
            memmove_0(v18, Src, 2 * (_DWORD)p_Src);
            v19 = &v18[v20];
            v21 = v37 - (_DWORD)p_Src;
            v37 -= (int)p_Src;
          }
          else
          {
            v21 = v37;
          }
          for ( j = (const wchar_t **)v32; ; j = (const wchar_t **)(v23 + 1) )
          {
            p_Src = (void **)j;
            if ( *j == nullptr )
              break;
            if ( wcscpy_s(v19, v21, *j) != 0 )
              goto LABEL_44;
            v23 = p_Src;
            v24 = (char *)*p_Src;
            p_Src = (void **)((char *)*p_Src + 2);
            do
            {
              v25 = *(_WORD *)v24;
              v24 += 2;
            }
            while ( v25 != (_WORD)v30 );
            v26 = ((v24 - (char *)p_Src) >> 1) + 1;
            v21 = v37 - v26;
            v19 += v26;
            v37 -= v26;
          }
          if ( v35 == 0 )
          {
            if ( wcscpy_s(v19, SizeInWords, Source) != 0
              || wcscat_s(v19, SizeInWords, asc_10020CF0) != 0
              || Block != nullptr && wcscat_s(v19, SizeInWords, (const wchar_t *)Block) != 0 )
            {
LABEL_44:
              _invoke_watson(nullptr, nullptr, nullptr, 0, v27);
            }
            v19 += SizeInWords;
          }
          if ( v19 == v18 )
            *v19++ = 0;
          *v19 = 0;
          *v29 = v18;
          v4 = 0;
        }
        else
        {
          __acrt_errno_map_os_error(0xEu);
          v4 = 12;
          *_errno() = 12;
        }
        _free_base(nullptr);
      }
      else
      {
        v4 = 22;
      }
      _free_base(wide_environment_from_os);
    }
    _free_base(Block);
    return v4;
  }
  return result;
}

// Address: 0x100173BD
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_46(void *this)
{
  const wchar_t **i; // esi
  __int16 *v3; // ecx
  _WORD *v4; // ebx
  __int16 v5; // ax

  for ( i = **(const wchar_t ****)this; ; ++i )
  {
    if ( *i == nullptr )
      return 0;
    v3 = *((__int16 **)this + 1);
    v4 = v3 + 1;
    do
      v5 = *v3++;
    while ( v5 != 0 );
    if ( _wcsnicmp(*i, *((const wchar_t **)this + 1), v3 - v4) == 0 )
      break;
  }
  return 1;
}

// Address: 0x10017403
// Microsoft VisualC universal runtime
_WORD *__thiscall unknown_libname_47(_DWORD **this)
{
  _WORD *i; // ecx
  __int16 *v2; // edx
  __int16 v3; // ax

  for ( i = (_WORD *)**this; *i == 61; i += v2 - (i + 5) + 5 )
  {
    if ( i[1] == 0 )
      break;
    if ( i[2] != 58 )
      break;
    if ( i[3] != 61 )
      break;
    v2 = i + 4;
    do
      v3 = *v2++;
    while ( v3 != 0 );
  }
  return i;
}

// Address: 0x1001744D
int __cdecl __acrt_pack_wide_command_line_and_environment(const wchar_t **a1, __int16 **a2, void **a3, void **a4)
{
  int v4; // esi
  void *v6; // [esp+4h] [ebp-8h] BYREF
  void *Block; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  Block = nullptr;
  if ( construct_command_line<wchar_t>(a1, (wchar_t **)&Block) != 0 )
  {
    _free_base(Block);
    return -1;
  }
  else
  {
    v6 = nullptr;
    if ( construct_environment_block<wchar_t>(a2, (wchar_t **)&v6) != 0 )
    {
      _free_base(v6);
      _free_base(Block);
      return -1;
    }
    else
    {
      *a3 = Block;
      *a4 = v6;
      _free_base(nullptr);
      _free_base(nullptr);
    }
  }
  return v4;
}

// Address: 0x100174C8
_WORD *__cdecl common_getpath<wchar_t>(_WORD *a1, _WORD *a2, unsigned int a3)
{
  _WORD *v3; // eax
  _WORD *v6; // edi
  _WORD *v7; // esi
  __int16 i; // dx
  __int16 v9; // dx

  v3 = a2;
  if ( a2 != nullptr )
  {
    if ( a3 != 0 )
      *a2 = 0;
    if ( a3 > 1 )
    {
      while ( *a1 == 59 )
        ++a1;
      v6 = a1;
      v7 = &a2[a3 - 1];
      for ( i = *a1; *a1 != 0; i = *a1 )
      {
        if ( i == 59 )
          goto LABEL_23;
        ++a1;
        if ( i == 34 )
        {
          v9 = *a1;
          if ( *a1 == 0 )
            break;
          do
          {
            if ( v9 == 34 )
              break;
            *v3 = v9;
            ++a1;
            if ( ++v3 == v7 )
              goto LABEL_22;
            v9 = *a1;
          }
          while ( *a1 != 0 );
          if ( *a1 == 0 )
            break;
          ++a1;
        }
        else
        {
          *v3++ = i;
          if ( v3 == v7 )
          {
LABEL_22:
            *v3 = 0;
            *_errno() = 34;
            return nullptr;
          }
        }
      }
      while ( *a1 == 59 )
LABEL_23:
        ++a1;
      *v3 = 0;
      return v6 != a1 ? a1 : nullptr;
    }
  }
  *_errno() = 22;
  return nullptr;
}

// Address: 0x100175A8
_WORD *__cdecl __acrt_wgetpath(_WORD *a1, _WORD *a2, unsigned int a3)
{
  return common_getpath<wchar_t>(a1, a2, a3);
}

// Address: 0x100175C0
void __cdecl shortsort(char *a1, char *a2, unsigned int a3, int (__cdecl *a4)(const void *, const void *))
{
  char *v4; // ecx
  char *v5; // ebx
  unsigned int v6; // eax
  char *v7; // edx
  char *v8; // esi
  char *v9; // edi
  unsigned int v10; // esi
  char *v11; // edx
  int v12; // edi
  char v13; // al
  char v14; // cl

  v4 = a1;
  v5 = a2;
  if ( a2 > a1 )
  {
    v6 = a3;
    v7 = &a1[a3];
    do
    {
      v8 = v7;
      v9 = v4;
      if ( v7 <= v5 )
      {
        do
        {
          if ( a4(v8, v9) > 0 )
            v9 = v8;
          v6 = a3;
          v8 += a3;
        }
        while ( v8 <= v5 );
        v4 = a1;
      }
      v10 = v6;
      v11 = v5;
      if ( v9 != v5 && v6 != 0 )
      {
        v12 = v9 - v5;
        do
        {
          v13 = *v11++;
          v14 = v11[v12 - 1];
          v11[v12 - 1] = v13;
          *(v11 - 1) = v14;
          --v10;
        }
        while ( v10 != 0 );
        v6 = a3;
        v4 = a1;
      }
      v5 -= v6;
      v7 = &v4[v6];
    }
    while ( v5 > v4 );
  }
}

// Address: 0x10017660
void __cdecl swap(char *a1, char *a2, unsigned int a3)
{
  char *v3; // eax
  unsigned int v4; // esi
  int v5; // edi
  char v6; // cl
  char v7; // dl

  v3 = a2;
  if ( a1 != a2 )
  {
    v4 = a3;
    if ( a3 != 0 )
    {
      v5 = a1 - a2;
      do
      {
        v6 = *v3++;
        v7 = v3[v5 - 1];
        v3[v5 - 1] = v6;
        *(v3 - 1) = v7;
        --v4;
      }
      while ( v4 != 0 );
    }
  }
}

// Address: 0x100176A0
void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  char *v4; // ecx
  int (__cdecl *v5)(const void *, const void *); // esi
  size_t v6; // edi
  char *v7; // edx
  unsigned int v8; // ebx
  char *v9; // ebx
  char *v10; // eax
  char *v11; // edi
  char *v12; // esi
  size_t v13; // edx
  int v14; // eax
  int v15; // eax
  bool v16; // cc
  char *v17; // edx
  size_t v18; // esi
  int v19; // ebx
  char v20; // al
  char v21; // cl
  char *v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  size_t v26; // [esp+Ch] [ebp-118h]
  char *v27; // [esp+10h] [ebp-114h]
  char *v28; // [esp+14h] [ebp-110h]
  char *v29; // [esp+18h] [ebp-10Ch]
  int v30; // [esp+1Ch] [ebp-108h]
  char *v31; // [esp+20h] [ebp-104h]
  char *v32; // [esp+2Ch] [ebp-F8h]
  _DWORD v33[60]; // [esp+30h] [ebp-F4h]

  v4 = (char *)Base;
  v31 = (char *)Base;
  v5 = CompareFunction;
  v6 = SizeOfElements;
  if ( (Base != nullptr || NumOfElements == 0) && SizeOfElements != 0 && CompareFunction != nullptr )
  {
    v30 = 0;
    if ( NumOfElements >= 2 )
    {
      v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      while ( 1 )
      {
        v32 = v7;
        while ( 1 )
        {
          v8 = (v7 - v4) / v6 + 1;
          if ( v8 <= 8 )
          {
            shortsort(v4, v32, v6, v5);
            goto LABEL_54;
          }
          v9 = &v4[v6 * (v8 >> 1)];
          v28 = v9;
          if ( v5(v4, v9) > 0 )
            swap(v31, v9, v6);
          if ( v5(v31, v32) > 0 )
            swap(v31, v32, v6);
          if ( v5(v9, v32) > 0 )
            swap(v9, v32, v6);
          v10 = v32;
          v11 = v32;
          v12 = v31;
          v13 = SizeOfElements;
          v27 = v32;
          while ( 1 )
          {
            if ( v9 > v12 )
            {
              while ( 1 )
              {
                v12 += v13;
                v29 = v12;
                if ( v12 >= v9 )
                  break;
                v14 = CompareFunction(v12, v9);
                v13 = SizeOfElements;
                if ( v14 > 0 )
                {
                  if ( v9 > v12 )
                    goto LABEL_26;
                  break;
                }
              }
              v10 = v32;
            }
            do
            {
              v12 += v13;
              if ( v12 > v10 )
                break;
              v15 = CompareFunction(v12, v9);
              v13 = SizeOfElements;
              v16 = v15 <= 0;
              v10 = v32;
            }
            while ( v16 );
            v11 = v27;
            v29 = v12;
LABEL_26:
            while ( 1 )
            {
              v13 = SizeOfElements;
              v11 -= SizeOfElements;
              if ( v11 <= v9 )
                break;
              if ( CompareFunction(v11, v9) <= 0 )
              {
                v13 = SizeOfElements;
                break;
              }
            }
            v12 = v29;
            v27 = v11;
            if ( v11 < v29 )
              break;
            v26 = v13;
            if ( v29 != v11 )
            {
              v17 = v11;
              v18 = v26;
              v19 = v29 - v11;
              do
              {
                v20 = *v17++;
                v21 = v17[v19 - 1];
                v17[v19 - 1] = v20;
                *(v17 - 1) = v21;
                --v18;
              }
              while ( v18 != 0 );
              v12 = v29;
              v9 = v28;
              v13 = SizeOfElements;
            }
            v10 = v32;
            if ( v9 == v11 )
            {
              v9 = v12;
              v28 = v12;
            }
          }
          v22 = &v11[v13];
          if ( v9 < v22 )
          {
            while ( 1 )
            {
              v22 -= v13;
              if ( v22 <= v9 )
                break;
              v23 = CompareFunction(v22, v9);
              v13 = SizeOfElements;
              if ( v23 != 0 )
              {
                if ( v9 < v22 )
                  goto LABEL_43;
                goto LABEL_40;
              }
            }
          }
          do
          {
LABEL_40:
            v22 -= v13;
            if ( v22 <= v31 )
              break;
            v24 = CompareFunction(v22, v9);
            v13 = SizeOfElements;
          }
          while ( v24 == 0 );
          v12 = v29;
LABEL_43:
          v7 = v32;
          if ( v22 - v31 < v32 - v12 )
            break;
          if ( v31 < v22 )
          {
            v33[v30] = v31;
            v33[v30++ + 30] = v22;
          }
          v6 = SizeOfElements;
          if ( v12 >= v32 )
          {
            v5 = CompareFunction;
            goto LABEL_54;
          }
          v4 = v12;
          v5 = CompareFunction;
          v31 = v4;
        }
        if ( v12 < v32 )
        {
          v33[v30] = v12;
          v33[v30++ + 30] = v32;
        }
        v4 = v31;
        v5 = CompareFunction;
        if ( v31 < v22 )
        {
          v7 = v22;
          v6 = SizeOfElements;
          continue;
        }
        v6 = SizeOfElements;
LABEL_54:
        v25 = --v30;
        if ( v30 < 0 )
          break;
        v4 = (char *)v33[v25];
        v7 = (char *)v33[v25 + 30];
        v31 = v4;
      }
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
  }
}

// Address: 0x10017A3A
int __cdecl common_tcsncpy_s<char>(_BYTE *a1, int a2, int a3, int a4)
{
  int v4; // edx
  int *v6; // eax
  int v7; // esi
  int v8; // ebx
  _BYTE *v9; // edi
  char v10; // al
  char v11; // al
  bool v12; // zf
  int v13; // [esp-4h] [ebp-Ch]

  v4 = a4;
  if ( a4 != 0 )
  {
    if ( a1 == nullptr )
    {
LABEL_11:
      v6 = _errno();
      v13 = 22;
LABEL_12:
      *v6 = v13;
      _invalid_parameter_noinfo();
      return v13;
    }
  }
  else if ( a1 == nullptr )
  {
    if ( a2 == 0 )
      return 0;
    goto LABEL_11;
  }
  if ( a2 == 0 )
    goto LABEL_11;
  if ( a4 == 0 )
  {
    *a1 = 0;
    return 0;
  }
  if ( a3 == 0 )
  {
    *a1 = 0;
    goto LABEL_11;
  }
  v7 = a3 - (_DWORD)a1;
  v8 = a2;
  v9 = a1;
  if ( a4 == -1 )
  {
    do
    {
      v10 = v9[v7];
      *v9++ = v10;
      if ( v10 == 0 )
        break;
      --v8;
    }
    while ( v8 != 0 );
  }
  else
  {
    do
    {
      v11 = v9[v7];
      *v9++ = v11;
      if ( v11 == 0 )
        break;
      if ( --v8 == 0 )
        break;
      --v4;
    }
    while ( v4 != 0 );
    v12 = v4 == 0;
    v4 = a4;
    if ( v12 )
      *v9 = 0;
  }
  if ( v8 != 0 )
    return 0;
  if ( v4 != -1 )
  {
    *a1 = 0;
    v6 = _errno();
    v13 = 34;
    goto LABEL_12;
  }
  a1[a2 - 1] = 0;
  return 80;
}

// Address: 0x10017AEB
errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  return common_tcsncpy_s<char>(Destination, SizeInBytes, (int)Source, MaxCount);
}

// Address: 0x10017B00
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

// Address: 0x10017B40
unsigned __int8 *__cdecl _mbsdec(const unsigned __int8 *Start, const unsigned __int8 *Pos)
{
  return _mbsdec_l(Start, Pos, nullptr);
}

// Address: 0x10017B57
unsigned __int8 *__cdecl _mbsdec_l(const unsigned __int8 *Start, const unsigned __int8 *Pos, _locale_t Locale)
{
  const unsigned __int8 *v4; // esi
  const unsigned __int8 *v5; // ecx
  unsigned __int8 *v6; // esi
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-8h]
  char v9; // [esp+Ch] [ebp-4h]

  if ( Start == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return nullptr;
  }
  v4 = Pos;
  if ( Pos == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return nullptr;
  }
  if ( Start >= Pos )
    return nullptr;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v7, Locale);
  if ( *(_DWORD *)(v8 + 8) != 0 )
  {
    v5 = Pos - 1;
    do
      --v5;
    while ( Start <= v5 && (*(_BYTE *)(*v5 + v8 + 25) & 4) != 0 );
    v4 = &Pos[-(((_BYTE)Pos - (_BYTE)v5) & 1)];
  }
  v6 = (unsigned __int8 *)(v4 - 1);
  if ( v9 != 0 )
    *(_DWORD *)(v7 + 848) &= ~2u;
  return v6;
}

// Address: 0x10017BE4
BOOL __cdecl initialize_multibyte()
{
  return __acrt_initialize_multibyte() == 0;
}

// Address: 0x10017BF3
size_t __cdecl __strncnt(const char *String, size_t Count)
{
  size_t result; // eax

  result = 0;
  if ( *String != 0 )
  {
    do
    {
      if ( result == Count )
        break;
      ++result;
    }
    while ( String[result] != 0 );
  }
  return result;
}

// Address: 0x10017C0F
int __cdecl fegetenv(fenv_t *Env)
{
  Env->_Fe_ctl = _getfpcontrolword();
  Env->_Fe_stat = _getfpstatusword();
  return 0;
}

// Address: 0x10017C2C
int __cdecl fesetenv(const fenv_t *Env)
{
  fenv_t Enva; // [esp+4h] [ebp-8h] BYREF

  Enva._Fe_ctl = 0;
  Enva._Fe_stat = 0;
  _setfpcontrolword(Env->_Fe_ctl);
  _setfpstatusword(Env->_Fe_stat);
  fegetenv(&Enva);
  return Env->_Fe_ctl != Enva._Fe_ctl || Env->_Fe_stat != Enva._Fe_stat;
}

// Address: 0x10017C75
int __cdecl feholdexcept(fenv_t *Env)
{
  unsigned int Fe_ctl; // edx
  fenv_t Enva; // [esp+0h] [ebp-8h] BYREF

  Enva._Fe_ctl = 0;
  Enva._Fe_stat = 0;
  if ( fegetenv(&Enva) != 0 )
    return 1;
  Fe_ctl = Enva._Fe_ctl;
  Env->_Fe_stat = Enva._Fe_stat;
  Env->_Fe_ctl = Fe_ctl;
  Enva._Fe_ctl = Fe_ctl | 0x1F;
  if ( fesetenv(&Enva) != 0 )
    return 1;
  _clearfp();
  return 0;
}

// Address: 0x10017CD0
double __cdecl log10(double X)
{
  int v1; // eax
  bool v2; // zf
  char v4; // [esp+0h] [ebp-8h]

  if ( dword_10026604 != 0 )
  {
    v1 = _mm_getcsr() & 0x7F80;
    v2 = v1 == 8064;
    if ( v1 == 8064 )
      v2 = (v4 & 0x7F) == 127;
    if ( v2 )
      return start_0(X);
  }
  _fload_withFB();
  return start(X);
}

// Address: 0x10017D10
double __usercall _CIlog10@<st0>(double x@<st0>)
{
  int v1; // eax
  bool v2; // zf
  int v3; // [esp+0h] [ebp-Ch]
  char v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+4h] [ebp-8h]

  if ( dword_10026604 == 0 )
    goto __CIlog10_default;
  v1 = _mm_getcsr() & 0x7F80;
  v2 = v1 == 8064;
  if ( v1 == 8064 )
    v2 = (v4 & 0x7F) == 127;
  if ( v2 )
  {
    _CIlog10_pentium4();
  }
  else
  {
__CIlog10_default:
    _checkTOS_withFB(LODWORD(x), HIDWORD(*(unsigned __int64 *)&x));
    start(v3, v5);
  }
  return x;
}

// Address: 0x10017D68
long double __usercall start@<st0>(
        char a1@<zf>,
        int a2@<eax>,
        __int16 a3@<dx>,
        char a4@<fpstat>,
        long double result@<st0>,
        int a6,
        int a7)
{
  int v7; // eax

  if ( a1 )
  {
    if ( (a2 & 0xFFFFF) != 0 || a6 != 0 )
    {
      result = _convertTOStoQNaN(a2, result);
      goto _ErrorHandling;
    }
    if ( (a2 & 0x80000000) == 0 )
      goto exit_0;
negative_x:
    result = -2.0;
    v7 = 1;
    goto _ErrorHandling;
  }
  if ( (a7 & 0x7FF00000) != 0 )
  {
    if ( a7 >= 0 )
    {
normal:
      result = __FYL2X__(result, 0.3010299956639811952);
exit_0:
      if ( dword_100263A4 == 0 && a3 != 639 && (a3 & 0x20) != 0 && (a4 & 0x20) != 0 )
        return _startOneArgErrorHandling(8, 27, (int)"log10", result);
      return result;
    }
    goto negative_x;
  }
  if ( (a7 & 0xFFFFF) != 0 || a6 != 0 )
  {
    if ( a7 >= 0 )
      goto normal;
    goto negative_x;
  }
  result = -0.0;
  v7 = 2;
_ErrorHandling:
  if ( dword_100263A4 == 0 )
    return _startOneArgErrorHandling(v7, 27, (int)"log10", result);
  return result;
}

// Address: 0x10017E20
double __cdecl ceil(double X)
{
  int v1; // eax
  bool v2; // zf
  __m128i v3; // xmm7
  __m128d v4; // xmm0
  int v5; // eax
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  double v8; // xmm1_8
  double result; // st7
  __m128d v10; // xmm1
  __m128d v11; // xmm3
  double v12; // xmm0_8
  char v13; // [esp+8h] [ebp-8h]

  if ( dword_10026604 == 0 )
    goto _ceil;
  v1 = _mm_getcsr() & 0x7F80;
  v2 = v1 == 8064;
  if ( v1 == 8064 )
    v2 = (v13 & 0x7F) == 127;
  if ( v2 )
  {
    v3 = _mm_loadl_epi64((const __m128i *)&X);
    v4 = (__m128d)_mm_srli_epi64(v3, 0x34u);
    v5 = _mm_cvtsi128_si32((__m128i)v4);
    v6 = _mm_sub_epi32((__m128i)xmmword_10020D20, (__m128i)_mm_and_pd(v4, (__m128d)xmmword_10020D40));
    v7 = _mm_srl_epi64(v3, v6);
    if ( (v5 & 0x800) != 0 )
    {
      if ( v5 >= 3071 )
      {
        *(_QWORD *)&v8 = v7.m128i_i64[0] << v6.m128i_i8[0];
        if ( v5 <= 3122 )
        {
          X = v8;
          return v8;
        }
        return X;
      }
      return -0.0;
    }
    else
    {
      v10 = (__m128d)_mm_sll_epi64(v7, v6);
      v11 = (__m128d)_mm_loadl_epi64((const __m128i *)&X);
      v12 = _mm_cmpnle_pd(v11, v10).m128d_f64[0];
      if ( v5 < 1023 )
      {
        *(_QWORD *)&X = *(_QWORD *)&_mm_cmpnle_pd(v11, (__m128d)xmmword_10020D30).m128d_f64[0] & 0x3FF0000000000000LL;
        return X;
      }
      else
      {
        if ( v5 > 1074 )
          return X;
        return v10.m128d_f64[0] + COERCE_DOUBLE(*(_QWORD *)&v12 & 0x3FF0000000000000LL);
      }
    }
  }
  else
  {
_ceil:
    _ceil_default(X);
  }
  return result;
}

// Address: 0x10017F3D
int __cdecl common_lseek<__int64>(int FileHandle, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod)
{
  int v3; // esi
  int v5; // [esp+1Ch] [ebp-20h]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= (unsigned int)dword_10026128
    || (v5 = 48 * (FileHandle & 0x3F), (*(_BYTE *)(dword_10025F28[FileHandle >> 6] + v5 + 40) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  v3 = -1;
  if ( (*(_BYTE *)(dword_10025F28[FileHandle >> 6] + v5 + 40) & 1) != 0 )
  {
    v3 = common_lseek_nolock<__int64>(FileHandle, liDistanceToMove, dwMoveMethod);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
  }
  __acrt_lowio_unlock_fh(FileHandle);
  return v3;
}

// Address: 0x10018042
DWORD __cdecl common_lseek_nolock<__int64>(int FileHandle, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod)
{
  void *osfhandle; // eax
  DWORD result; // eax
  DWORD LastError; // eax
  LARGE_INTEGER NewFilePointer; // [esp+8h] [ebp-8h] BYREF

  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( osfhandle == (void *)-1 )
  {
    *_errno() = 9;
    return -1;
  }
  if ( !SetFilePointerEx(osfhandle, liDistanceToMove, &NewFilePointer, dwMoveMethod) )
  {
    LastError = GetLastError();
    __acrt_errno_map_os_error(LastError);
    return -1;
  }
  if ( (NewFilePointer.HighPart & NewFilePointer.LowPart) == -1 )
    return -1;
  result = NewFilePointer.LowPart;
  *(_BYTE *)(dword_10025F28[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) &= ~2u;
  return result;
}

// Address: 0x100180C0
__int64 __cdecl _lseeki64(int FileHandle, __int64 Offset, int Origin)
{
  __int64 result; // rax

  LODWORD(result) = common_lseek<__int64>(FileHandle, (LARGE_INTEGER)Offset, Origin);
  return result;
}

// Address: 0x100180DB
DWORD __cdecl _lseeki64_nolock(int FileHandle, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod)
{
  return common_lseek_nolock<__int64>(FileHandle, liDistanceToMove, dwMoveMethod);
}

// Address: 0x100180F6
int __cdecl __acrt_stdio_allocate_buffer_nolock(_DWORD *a1)
{
  volatile signed __int32 *v1; // eax
  int result; // eax

  ++dword_10025DC4;
  a1[1] = _malloc_base(0x1000u);
  _free_base(nullptr);
  v1 = a1 + 3;
  if ( a1[1] != 0 )
  {
    _InterlockedOr(v1, 0x40u);
    a1[6] = 4096;
  }
  else
  {
    _InterlockedOr(v1, 0x400u);
    a1[6] = 2;
    a1[1] = a1 + 5;
  }
  result = a1[1];
  a1[2] = 0;
  *a1 = result;
  return result;
}

// Address: 0x10018153
int __cdecl _wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int result; // eax
  size_t v4; // edi
  const wchar_t *v5; // ecx
  int v6; // edx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // si
  wchar_t v9; // ax

  result = dword_10025F1C;
  if ( dword_10025F1C != 0 )
    return _wcsnicmp_l(String1, String2, MaxCount, nullptr);
  v4 = MaxCount;
  if ( MaxCount != 0 )
  {
    if ( String1 != nullptr && (v5 = String2, String2 != nullptr) )
    {
      v6 = (char *)String1 - (char *)String2;
      do
      {
        v7 = *(const wchar_t *)((char *)v5 + v6);
        if ( v7 < 0x41u || v7 > 0x5Au )
          v8 = *(const wchar_t *)((char *)v5 + v6);
        else
          v8 = v7 + 32;
        v9 = *v5;
        if ( *v5 >= 0x41u && v9 <= 0x5Au )
          v9 += 32;
        ++v5;
        --v4;
      }
      while ( v4 != 0 && v8 != 0 && v8 == v9 );
      return v8 - v9;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return 0x7FFFFFFF;
    }
  }
  return result;
}

// Address: 0x1001820B
int __cdecl _wcsnicmp_l(const wchar_t *String1, const wchar_t *String2, size_t MaxCount, _locale_t Locale)
{
  int v4; // esi
  wint_t *v5; // ebx
  wint_t *v7; // edi
  size_t v8; // ecx
  int v9; // ebx
  unsigned __int16 v10; // ax
  wint_t v11; // si
  unsigned __int16 v12; // ax
  bool v13; // zf
  int v14; // [esp+Ch] [ebp-14h] BYREF
  __crt_locale_pointers v15; // [esp+10h] [ebp-10h] BYREF
  char v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]

  v4 = 0;
  if ( MaxCount != 0 )
  {
    v5 = (wint_t *)String1;
    if ( String1 == nullptr || (v7 = (wint_t *)String2, String2 == nullptr) )
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return 0x7FFFFFFF;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v14, Locale);
    if ( *((_DWORD *)v15.locinfo + 42) != 0 )
    {
      do
      {
        v11 = _towlower_l(*v5, &v15);
        v12 = _towlower_l(*v7, &v15);
        v13 = MaxCount-- == 1;
        ++v5;
        ++v7;
      }
      while ( !v13 && v11 != 0 && v11 == v12 );
    }
    else
    {
      v8 = MaxCount;
      v9 = (char *)String1 - (char *)String2;
      v17 = 90;
      do
      {
        v10 = *(wint_t *)((char *)v7 + v9);
        if ( v10 < 0x41u || v10 > 0x5Au )
          v11 = *(wint_t *)((char *)v7 + v9);
        else
          v11 = v10 + 32;
        v12 = *v7;
        if ( *v7 >= 0x41u && v12 <= (unsigned __int16)v17 )
          v12 += 32;
        ++v7;
        --v8;
      }
      while ( v8 != 0 && v11 != 0 && v11 == v12 );
    }
    v4 = v11 - v12;
    if ( v16 != 0 )
      *(_DWORD *)(v14 + 848) &= ~2u;
  }
  return v4;
}

// Address: 0x1001830C
int sub_1001830C()
{
  return dword_100263A0;
}

// Address: 0x10018312
int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_123407a5e2ac06da108355a851863b7a_,_lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec_ &,_lambda_ae55bdf541ad94d75914d381c370e64d_>(
        int *a1,
        int **a2,
        int *a3)
{
  int v3; // esi

  __acrt_lowio_lock_fh(*a1);
  if ( (*(_BYTE *)(dword_10025F28[**a2 >> 6] + 48 * (**a2 & 0x3F) + 40) & 1) != 0 )
  {
    v3 = _close_nolock(**a2);
  }
  else
  {
    *_errno() = 9;
    v3 = -1;
  }
  __acrt_lowio_unlock_fh(*a3);
  return v3;
}

// Address: 0x10018394
int __cdecl sub_10018394(int a1, int **a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<int>::operator()<_lambda_123407a5e2ac06da108355a851863b7a_,_lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec_ &,_lambda_ae55bdf541ad94d75914d381c370e64d_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x100183BC
int __cdecl sub_100183BC(int a1)
{
  int *v2; // [esp+4h] [ebp-4h] BYREF

  if ( a1 == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
  }
  else
  {
    if ( a1 >= 0
      && a1 < (unsigned int)dword_10026128
      && (*(_BYTE *)(dword_10025F28[a1 >> 6] + 48 * (a1 & 0x3F) + 40) & 1) != 0 )
    {
      v2 = &a1;
      return sub_10018394(a1, &v2);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x1001843B
int __cdecl _close_nolock(int FileHandle)
{
  DWORD LastError; // esi
  intptr_t osfhandle; // esi
  void *v3; // eax

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_10025F28[0] + 136) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_10025F28[0] + 88) & 1) != 0)
    && (osfhandle = _get_osfhandle(2), _get_osfhandle(1) == osfhandle)
    || (v3 = (void *)_get_osfhandle(FileHandle), CloseHandle(v3)) )
  {
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
  }
  _free_osfhnd(FileHandle);
  *(_BYTE *)(dword_10025F28[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) = 0;
  if ( LastError == 0 )
    return 0;
  __acrt_errno_map_os_error(LastError);
  return -1;
}

// Address: 0x100184D7
int __cdecl __acrt_stdio_free_stream(int a1)
{
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 12), 0);
  return a1 + 12;
}

// Address: 0x10018512
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  DWORD v1; // ecx
  HANDLE v2; // eax
  DWORD NumberOfCharsWritten; // [esp+0h] [ebp-4h] BYREF

  NumberOfCharsWritten = v1;
  v2 = hConsoleOutput;
  if ( hConsoleOutput == (HANDLE)-2 )
  {
    __dcrt_lowio_initialize_console_output();
    v2 = hConsoleOutput;
  }
  if ( v2 == (HANDLE)-1 || !WriteConsoleW(v2, &Character, 1u, &NumberOfCharsWritten, nullptr) )
    return -1;
  else
    return Character;
}

// Address: 0x10018557
int __cdecl __acrt_CompareStringW(
        wchar_t *a1,
        DWORD dwCmpFlags,
        wchar_t *Source,
        int MaxCount,
        PCNZWCH lpString2,
        int a6)
{
  size_t v6; // esi
  size_t v7; // eax
  signed int v9; // esi

  v6 = MaxCount;
  if ( MaxCount > 0 )
    v6 = wcsnlen(Source, MaxCount);
  v7 = a6;
  if ( a6 > 0 )
    v7 = wcsnlen(lpString2, a6);
  if ( v6 != 0 && v7 != 0 )
    return __acrt_CompareStringEx(a1, dwCmpFlags, Source, v6, lpString2, v7, 0, 0, 0);
  v9 = v6 - v7;
  if ( v9 != 0 )
    return 2 * (v9 >= 0) + 1;
  else
    return 2;
}

// Address: 0x100185BF
int __cdecl __get_abstract_control_sse2(__int16 a1)
{
  int v1; // ecx

  v1 = 0;
  if ( (a1 & 0x7E80) != 0 )
  {
    if ( (a1 & 0x80u) != 0 )
      v1 = 16;
    if ( (a1 & 0x200) != 0 )
      v1 |= 8u;
    if ( (a1 & 0x400) != 0 )
      v1 |= 4u;
    if ( (a1 & 0x800) != 0 )
      v1 |= 2u;
    if ( (a1 & 0x1000) != 0 )
      v1 |= 1u;
    if ( (a1 & 0x6000) == 0x6000 )
    {
      return v1 | 0x300;
    }
    else if ( (a1 & 0x4000) != 0 )
    {
      return v1 | 0x100;
    }
    else if ( (a1 & 0x2000) != 0 )
    {
      return v1 | 0x200;
    }
  }
  return v1;
}

// Address: 0x1001863C
int __cdecl __get_abstract_control_x87(__int16 a1)
{
  int v1; // ecx

  v1 = 0;
  if ( (a1 & 0xC3D) != 0 )
  {
    if ( (a1 & 1) != 0 )
      v1 = 16;
    if ( (a1 & 4) != 0 )
      v1 |= 8u;
    if ( (a1 & 8) != 0 )
      v1 |= 4u;
    if ( (a1 & 0x10) != 0 )
      v1 |= 2u;
    if ( (a1 & 0x20) != 0 )
      v1 |= 1u;
    if ( (a1 & 0xC00) == 0xC00 )
    {
      return v1 | 0x300;
    }
    else if ( (a1 & 0x800) != 0 )
    {
      return v1 | 0x100;
    }
    else if ( (a1 & 0x400) != 0 )
    {
      return v1 | 0x200;
    }
  }
  return v1;
}

// Address: 0x100186AF
int __cdecl __get_machine_control(__int16 a1)
{
  int v1; // ecx

  v1 = 0;
  if ( (a1 & 0x31F) != 0 )
  {
    v1 = (a1 & 0x10) != 0;
    if ( (a1 & 8) != 0 )
      v1 |= 4u;
    if ( (a1 & 4) != 0 )
      v1 |= 8u;
    if ( (a1 & 2) != 0 )
      v1 |= 0x10u;
    if ( (a1 & 1) != 0 )
      v1 |= 0x20u;
    if ( (a1 & 0x300) == 0x300 )
    {
      return v1 | 0xC00;
    }
    else if ( (a1 & 0x200) != 0 )
    {
      return v1 | 0x400;
    }
    else if ( (a1 & 0x100) != 0 )
    {
      return v1 | 0x800;
    }
  }
  return v1;
}

// Address: 0x10018720
int __cdecl __get_machine_control_sse2(__int16 a1)
{
  int v1; // ecx

  v1 = 0;
  if ( (a1 & 0x31F) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
      v1 = 128;
    if ( (a1 & 8) != 0 )
      v1 |= 0x200u;
    if ( (a1 & 4) != 0 )
      v1 |= 0x400u;
    if ( (a1 & 2) != 0 )
      v1 |= 0x800u;
    if ( (a1 & 1) != 0 )
      v1 |= 0x1000u;
    if ( (a1 & 0x300) == 0x300 )
    {
      return v1 | 0x6000;
    }
    else if ( (a1 & 0x200) != 0 )
    {
      return v1 | 0x2000;
    }
    else if ( (a1 & 0x100) != 0 )
    {
      return v1 | 0x4000;
    }
  }
  return v1;
}

// Address: 0x100187A0
int __cdecl __get_machine_status_sse2(int a1)
{
  int v1; // ecx

  v1 = 0;
  if ( (a1 & 0x1F) != 0 )
  {
    v1 = (a1 & 0x10000010) == 268435472;
    if ( (a1 & 0x8000008) == 0x8000008 )
      v1 |= 4u;
    if ( (a1 & 0x4000004) == 0x4000004 )
      v1 |= 8u;
    if ( (a1 & 0x2000002) == 0x2000002 )
      v1 |= 0x10u;
    if ( (a1 & 0x1000001) == 0x1000001 )
      return v1 | 0x20;
  }
  return v1;
}

// Address: 0x10018801
int __cdecl __get_machine_status_x87(int a1)
{
  int v1; // ecx

  v1 = 0;
  if ( (a1 & 0x1F) != 0 )
  {
    v1 = (a1 & 0x100010) == 1048592;
    if ( (a1 & 0x80008) == 0x80008 )
      v1 |= 4u;
    if ( (a1 & 0x40004) == 0x40004 )
      v1 |= 8u;
    if ( (a1 & 0x20002) == 0x20002 )
      v1 |= 0x10u;
    if ( (a1 & 0x10001) == 0x10001 )
      return v1 | 0x20;
  }
  return v1;
}

// Address: 0x10018862
int _getfpcontrolword()
{
  unsigned __int16 abstract_control_x87; // si
  __int16 v2; // [esp+0h] [ebp-8h]

  v2 = 0;
  if ( dword_10025CE4 >= 1 )
    v2 = _mm_getcsr();
  abstract_control_x87 = __get_abstract_control_x87(0);
  return (abstract_control_x87 | (unsigned __int16)__get_abstract_control_sse2(v2)) & 0x31F;
}

// Address: 0x100188A5
int __usercall _getfpstatusword@<eax>(char a1@<fpstat>)
{
  int v1; // ecx
  int v2; // eax
  char v4; // [esp+0h] [ebp-8h]

  v1 = 0;
  v4 = 0;
  if ( dword_10025CE4 >= 1 )
    v4 = _mm_getcsr();
  v2 = 0;
  if ( (a1 & 0x3D) != 0 )
  {
    if ( (a1 & 1) != 0 )
      v2 = 1048592;
    if ( (a1 & 4) != 0 )
      v2 |= 0x80008u;
    if ( (a1 & 8) != 0 )
      v2 |= 0x40004u;
    if ( (a1 & 0x10) != 0 )
      v2 |= 0x20002u;
    if ( (a1 & 0x20) != 0 )
      v2 |= 0x10001u;
  }
  if ( (v4 & 0x3D) != 0 )
  {
    if ( (v4 & 1) != 0 )
      v1 = 268435472;
    if ( (v4 & 4) != 0 )
      v1 |= 0x8000008u;
    if ( (v4 & 8) != 0 )
      v1 |= 0x4000004u;
    if ( (v4 & 0x10) != 0 )
      v1 |= 0x2000002u;
    if ( (v4 & 0x20) != 0 )
      v1 |= 0x1000001u;
  }
  return (v1 | v2) & 0x1F1F001F;
}

// Address: 0x1001894D
int __cdecl _setfpcontrolword(__int16 a1)
{
  int v1; // esi
  int result; // eax
  int v3; // esi
  unsigned __int8 v4; // [esp+Ch] [ebp-20h]
  char v5; // [esp+Ch] [ebp-20h]

  __asm { fnstenv byte ptr [ebp+var_20] }
  v1 = v4 & ~__get_machine_control(799);
  result = __get_machine_control(a1);
  v5 = result | v1;
  __asm { fldenv  byte ptr [ebp+var_20] }
  if ( dword_10025CE4 >= 1 )
  {
    v3 = _mm_getcsr() & ~__get_machine_control_sse2(799);
    result = __get_machine_control_sse2(a1);
    _mm_setcsr(result | v3);
  }
  return result;
}

// Address: 0x100189CD
int __cdecl _setfpstatusword(int a1)
{
  int result; // eax
  int v2; // esi

  __asm { fnstenv byte ptr [ebp+var_20] }
  __get_machine_status_x87(522125343);
  result = __get_machine_status_x87(a1);
  __asm { fldenv  byte ptr [ebp+var_20] }
  if ( dword_10025CE4 >= 1 )
  {
    v2 = _mm_getcsr() & ~__get_machine_status_sse2(522125343);
    result = __get_machine_status_sse2(a1);
    _mm_setcsr(result | v2);
  }
  return result;
}

// Address: 0x10018A4D
unsigned int __cdecl _clearfp()
{
  char v0; // fps
  int v1; // ecx
  int v2; // edx
  unsigned int result; // eax
  int v4; // [esp+4h] [ebp-8h]

  __asm { fnclex }
  if ( dword_10025CE4 < 1 )
  {
    result = 0;
    if ( (v0 & 0x3F) != 0 )
    {
      if ( (v0 & 1) != 0 )
        result = 16;
      if ( (v0 & 4) != 0 )
        result |= 8u;
      if ( (v0 & 8) != 0 )
        result |= 4u;
      if ( (v0 & 0x10) != 0 )
        result |= 2u;
      if ( (v0 & 0x20) != 0 )
        result |= 1u;
      if ( (v0 & 2) != 0 )
        result |= 0x80000u;
    }
  }
  else
  {
    v1 = 0;
    v2 = 0;
    if ( (v0 & 0x3F) != 0 )
    {
      if ( (v0 & 1) != 0 )
        v2 = 16;
      if ( (v0 & 4) != 0 )
        v2 |= 8u;
      if ( (v0 & 8) != 0 )
        v2 |= 4u;
      if ( (v0 & 0x10) != 0 )
        v2 |= 2u;
      if ( (v0 & 0x20) != 0 )
        v2 |= 1u;
      if ( (v0 & 2) != 0 )
        v2 |= 0x80000u;
    }
    v4 = _mm_getcsr();
    _mm_setcsr(v4 & 0xFFFFFFC0);
    if ( (v4 & 0x3F) != 0 )
    {
      if ( (v4 & 1) != 0 )
        v1 = 16;
      if ( (v4 & 4) != 0 )
        v1 |= 8u;
      if ( (v4 & 8) != 0 )
        v1 |= 4u;
      if ( (v4 & 0x10) != 0 )
        v1 |= 2u;
      if ( (v4 & 0x20) != 0 )
        v1 |= 1u;
      if ( (v4 & 2) != 0 )
        v1 |= 0x80000u;
    }
    return v2 | v1;
  }
  return result;
}

// Address: 0x10018B2B
int sub_10018B2B()
{
  dword_10026604 = IsProcessorFeaturePresent(0xAu);
  return 0;
}

// Address: 0x10018B40
void __usercall _CIlog10_pentium4(double a1@<st0>)
{
  start_0(a1);
}

// Address: 0x10018B5E
double __usercall start_0@<st0>(__m128d a1@<xmm0>, double a2)
{
  int i; // edx
  __m128i v3; // xmm5
  __m128i v4; // xmm2
  __m128d v5; // xmm0
  int v6; // eax
  __m128d v7; // xmm4
  __m128d v8; // xmm6
  __m128d v9; // xmm0
  __m128d v10; // xmm6
  __m128d v11; // xmm7
  __m128d v12; // xmm4
  unsigned int v13; // ecx
  int v14; // ecx
  __m128d v15; // xmm6
  int v16; // edx
  __m128d v17; // xmm3
  __m128d v18; // xmm7
  double v19; // xmm2_8
  __m128d v20; // xmm0
  __m128d v22; // xmm0
  __m128i v23; // xmm1
  int v24; // edx
  double v25; // [esp+10h] [ebp-Ch] BYREF

  for ( i = 0; ; i = -52 )
  {
    v3 = (__m128i)a1;
    v4.m128i_i64[1] = 0x3FDBC00000000000LL;
    v5 = _mm_or_pd(_mm_and_pd(_mm_unpacklo_pd(a1, a1), (__m128d)xmmword_10020D60), (__m128d)xmmword_10020DD0);
    v6 = _mm_extract_epi16((__m128i)_mm_add_pd((__m128d)xmmword_10020D80, v5), 0) & 0x7F0;
    v7 = *(__m128d *)((char *)&xmmword_100213B0 + v6);
    v11 = *(__m128d *)((char *)&xmmword_10020FA0 + v6);
    v8 = _mm_and_pd((__m128d)xmmword_10020D90, v5);
    v9 = _mm_sub_pd(v5, v8);
    v10 = _mm_sub_pd(_mm_mul_pd(v8, v7), (__m128d)xmmword_10020D70);
    v11.m128d_f64[0] = v11.m128d_f64[0] + v10.m128d_f64[0];
    v12 = _mm_mul_pd(v9, v7);
    a1 = _mm_add_pd(v12, v10);
    v13 = (_mm_extract_epi16(_mm_srli_epi64(v3, 0x34u), 0) & 0xFFF) - 1;
    if ( v13 <= 0x7FD )
      break;
    v22.m128d_f64[0] = a2;
    v23 = (__m128i)_mm_cmpeq_sd((__m128d)xmmword_10020DE0, v22);
    if ( _mm_extract_epi16(v23, 0) != 0 )
    {
      *(double *)v23.m128i_i64 = -INFINITY;
      v24 = 8;
CALL_LIBM_ERROR:
      v25 = *(double *)v23.m128i_i64;
      __libm_error_support(&a2, &a2, &v25, v24);
      return v25;
    }
    if ( v13 != -1 )
    {
      if ( v13 > 0x7FE )
      {
        if ( (((_WORD)v13 + 1) & 0x7FF) == 0x7FF
          && (*(double *)v4.m128i_i64 = a2,
              (_mm_cvtsi128_si32(_mm_srli_epi64(v4, 0x20u)) & 0xFFFFF | _mm_cvtsi128_si32(v4)) != 0) )
        {
          v24 = 1001;
        }
        else
        {
          *(double *)v23.m128i_i64 = 0.0 / 0.0;
          v24 = 9;
        }
      }
      else
      {
        a1.m128d_f64[0] = a2;
        v23.m128i_i64[0] = 0xFFFFFFFFFFFFFLL;
        if ( _mm_extract_epi16(
               (__m128i)_mm_cmpeq_sd(
                          (__m128d)xmmword_10020DD0,
                          _mm_or_pd(_mm_and_pd(a1, (__m128d)xmmword_10020D60), (__m128d)xmmword_10020DD0)),
               0) != 0 )
          return INFINITY;
        v24 = 1001;
      }
      goto CALL_LIBM_ERROR;
    }
    a1.m128d_f64[0] = a2 * 4.503599627370496e15;
  }
  v14 = i + v13 - 1022;
  v10.m128d_f64[0] = (double)v14;
  v15 = _mm_unpacklo_pd(v10, v10);
  v16 = 0;
  if ( (v14 << 10) + v6 == 0 )
    v16 = 1;
  v17 = _mm_mul_pd(a1, a1);
  v18 = _mm_add_pd(
          _mm_add_pd(v11, _mm_mul_pd(v15, (__m128d)xmmword_10020DA0)),
          _mm_and_pd(v12, (__m128d)xmmword_10020DB0[v16]));
  v17.m128d_f64[0] = v17.m128d_f64[0] * v17.m128d_f64[0] * a1.m128d_f64[0];
  v19 = 0.001616102407499711 * a1.m128d_f64[0];
  v20 = _mm_mul_pd(
          _mm_add_pd(
            _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_10020E20, a1), (__m128d)xmmword_10020E30), a1),
            (__m128d)xmmword_10020E40),
          v17);
  return _mm_unpackhi_pd(v20, v20).m128d_f64[0]
       + v20.m128d_f64[0]
       + v19
       + _mm_unpackhi_pd(v18, v18).m128d_f64[0]
       + v18.m128d_f64[0];
}

// Address: 0x10018DC4
void __usercall sub_10018DC4(char a1@<ch>, int a2@<ebp>)
{
  *(_BYTE *)(a2 - 144) = -2;
  if ( a1 != 0 && isintTOS() == 0 )
    JUMPOUT(0x10019183);
  _ffexpm1();
  JUMPOUT(0x100190C8);
}

// Address: 0x10018EA7
void zerotoxdone()
{
  ;
}

// Address: 0x10018EF2
void expbigret()
{
  ;
}

// Address: 0x10018F11
double __fastcall rtforexpinf(char a1)
{
  if ( a1 != 0 )
    JUMPOUT(0x100190D6);
  return -0.0;
}

// Address: 0x10018F1E
// positive sp value has been detected, the output may be wrong!
void __usercall _ffexpm1(int a1@<ebp>, long double a2@<st0>)
{
  bool v2; // c0
  char v3; // c2
  bool v4; // c3
  long double v5; // st6
  __int16 v6; // fps
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  __int16 v10; // fps
  long double v11; // st6
  bool v12; // c0
  char v13; // c2
  bool v14; // c3
  __int16 v15; // fps
  long double v16; // st6
  bool v17; // c0
  char v18; // c2
  bool v19; // c3

  v5 = fabs(a2);
  v7 = v5 > NAN;
  v8 = 0;
  v9 = NAN == v5;
  *(_WORD *)(a1 - 160) = v6;
  if ( (*(_BYTE *)(a1 - 159) & 0x41) != 0 )
  {
    v2 = a2 < 0.0;
    v3 = 0;
    v4 = a2 == 0.0;
    *(_WORD *)(a1 - 160) = v6;
    if ( (*(_BYTE *)(a1 - 159) & 1) != 0 )
    {
      *(_BYTE *)(a1 - 144) = 4;
      JUMPOUT(0x100190D6);
    }
    expbigret();
  }
  else
  {
    v11 = rint(a2);
    v12 = v11 < 0.0;
    v13 = 0;
    v14 = v11 == 0.0;
    *(_WORD *)(a1 - 160) = v10;
    v16 = a2 - v11;
    v17 = v16 < 0.0;
    v18 = 0;
    v19 = v16 == 0.0;
    *(_WORD *)(a1 - 160) = v15;
  }
}

// Address: 0x10018F61
int __usercall isintTOS@<eax>(long double a1@<st0>)
{
  if ( rint(a1) != a1 )
    return notanint();
  if ( rint(a1 * 0.5) == a1 * 0.5 )
    return evenint();
  return isintTOSret();
}

// Address: 0x10018F86
void isintTOSret()
{
  ;
}

// Address: 0x10018F87
void notanint()
{
  isintTOSret();
}

// Address: 0x10018F8E
void evenint()
{
  isintTOSret();
}

// Address: 0x10018F95
double __usercall usepowhlp@<st0>(int a1@<ebp>, double a2@<st1>, double a3@<st0>)
{
  int v4; // eax
  double result; // st7
  double *v6; // [esp+10h] [ebp-7Ch]
  double v7[15]; // [esp+14h] [ebp-78h] BYREF

  _ESI = v7;
  v6 = v7;
  __asm { fsave   byte ptr [esi+8] }
  v4 = _powhlp(a3, a2, (int)v7);
  __asm { frstor  byte ptr [esi+8] }
  result = v7[0];
  if ( v4 != 0 )
    *(_BYTE *)(a1 - 144) = 1;
  return result;
}

// Address: 0x100191D0
long double __usercall _twoToTOS@<st0>(long double a1@<st0>)
{
  long double v1; // rt0

  v1 = rint(a1);
  return __FSCALE__(__F2XM1__(-(v1 - a1)) + 1.0, v1);
}

// Address: 0x100191FC
double __usercall _convertTOStoQNaN@<st0>(int a1@<eax>, double result@<st0>)
{
  if ( (a1 & 0x80000) == 0 )
    return result + 1.0;
  return result;
}

// Address: 0x10019215
double __fastcall _fload_withFB(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 )
    return *(double *)a2;
  *(_QWORD *)&result = *(_QWORD *)a2 << 11;
  return result;
}

// Address: 0x10019258
int __cdecl _checkTOS_withFB(int a1, int a2)
{
  int result; // eax

  result = a2 & 0x7FF00000;
  if ( (a2 & 0x7FF00000) == 0x7FF00000 )
    return a2;
  return result;
}

// Address: 0x100192A5
// positive sp value has been detected, the output may be wrong!
double __usercall _check_overflow_exit@<st0>(int a1@<edx>, int a2@<ecx>, double result@<st0>)
{
  char v3; // fps
  int v4; // eax
  double v5; // [esp-4h] [ebp-Ch]
  __int16 v6; // [esp+4h] [ebp-4h]

  v5 = result;
  if ( (HIDWORD(v5) & 0x7FF00000) == 0x7FF00000 )
  {
    result = __FSCALE__(result, -1536.0);
    v4 = 3;
    if ( fabs(result) > 1.797693134862316e308 )
      result = result * INFINITY;
    goto have_error;
  }
  if ( v6 != 639 && (v6 & 0x20) == 0 && (v3 & 0x20) != 0 )
  {
    v4 = 8;
have_error:
    if ( a1 == 29 )
      _startTwoArgErrorHandling();
    else
      return _startOneArgErrorHandling(v4, a1, a2, result);
  }
  return result;
}

// Address: 0x10019360
void _startTwoArgErrorHandling()
{
  JUMPOUT(0x10019380);
}

// Address: 0x10019377
double __usercall _startOneArgErrorHandling@<st0>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, double a4@<st0>)
{
  _DWORD v5[6]; // [esp+0h] [ebp-20h] BYREF
  double v6; // [esp+18h] [ebp-8h]
  int savedregs; // [esp+20h] [ebp+0h] BYREF
  unsigned __int16 v8[4]; // [esp+28h] [ebp+8h] BYREF
  int v9; // [esp+30h] [ebp+10h]
  int v10; // [esp+34h] [ebp+14h]

  v5[0] = a1;
  v6 = a4;
  v5[1] = a3;
  v5[2] = v9;
  v5[3] = v10;
  _87except((int)&savedregs, a2, (int)v5, v8);
  return v6;
}

// Address: 0x100193B3
int *__cdecl __libm_error_support(double *a1, double *a2, double *a3, int a4)
{
  int (__cdecl *v4)(int *); // edi
  int *result; // eax
  double *v6; // esi
  double v7; // st7
  int v8; // [esp+8h] [ebp-24h] BYREF
  const char *v9; // [esp+Ch] [ebp-20h]
  double v10; // [esp+10h] [ebp-1Ch]
  double v11; // [esp+18h] [ebp-14h]
  double v12; // [esp+20h] [ebp-Ch]

  if ( dword_100263A8 != 0 )
    v4 = (int (__cdecl *)(int *))DecodePointer(Ptr);
  else
    v4 = (int (__cdecl *)(int *))__acrt_invoke_user_matherr;
  if ( a4 <= 26 )
  {
    if ( a4 != 26 )
    {
      if ( a4 <= 14 )
      {
        if ( a4 == 14 )
        {
          v8 = 3;
          v9 = "exp";
          goto LABEL_42;
        }
        if ( a4 == 2 )
        {
          v8 = 2;
          v9 = (const char *)&unk_10020F44;
          goto LABEL_42;
        }
        if ( a4 != 3 )
        {
          if ( a4 != 8 )
          {
            result = (int *)(a4 - 9);
            if ( a4 != 9 )
              return result;
            v9 = "log10";
            goto LABEL_13;
          }
          v8 = 2;
          v9 = "log10";
LABEL_42:
          v6 = a3;
          v10 = *a1;
          v11 = *a2;
          v12 = *a3;
          result = (int *)v4(&v8);
          if ( result == nullptr )
          {
            result = _errno();
            *result = 34;
          }
          goto LABEL_44;
        }
        v9 = (const char *)&unk_10020F44;
LABEL_13:
        v6 = a3;
        v8 = 1;
        v10 = *a1;
        v11 = *a2;
        v12 = *a3;
        result = (int *)v4(&v8);
        if ( result == nullptr )
        {
          result = _errno();
          *result = 33;
        }
        goto LABEL_44;
      }
      if ( a4 == 15 )
      {
        v9 = "exp";
LABEL_23:
        v6 = a3;
        v8 = 4;
        v10 = *a1;
        v11 = *a2;
        v12 = *a3;
        result = (int *)v4(&v8);
LABEL_44:
        *v6 = v12;
        return result;
      }
      if ( a4 != 24 )
      {
        result = (int *)(a4 - 25);
        if ( a4 != 25 )
          return result;
        v9 = "pow";
        goto LABEL_23;
      }
      v8 = 3;
LABEL_41:
      v9 = "pow";
      goto LABEL_42;
    }
    v7 = 1.0;
LABEL_27:
    *a3 = v7;
    return (int *)a3;
  }
  switch ( a4 )
  {
    case 27:
      v8 = 2;
      goto LABEL_41;
    case 28:
      v9 = "pow";
      goto LABEL_13;
    case 49:
      v9 = "sqrt";
      goto LABEL_13;
    case 58:
      v9 = "acos";
      goto LABEL_13;
    case 61:
      v9 = "asin";
      goto LABEL_13;
    default:
      break;
  }
  if ( a4 == 1000 || (result = (int *)(a4 - 1001), a4 == 1001) )
  {
    v7 = *a1;
    goto LABEL_27;
  }
  return result;
}

// Address: 0x100195CB
double __cdecl _ceil_default(double a1)
{
  double result; // st7
  int v2; // ebx

  result = a1;
  v2 = _ctrlfp(6975, 0xFFFF);
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    if ( (unsigned int)(_sptype(LODWORD(a1), HIDWORD(a1)) - 1) > 2 )
    {
      return _except1(
               8,
               12,
               LODWORD(a1),
               HIDWORD(a1),
               COERCE_UNSIGNED_INT64(a1 + 1.0),
               HIDWORD(COERCE_UNSIGNED_INT64(a1 + 1.0)),
               v2);
    }
    else
    {
      _ctrlfp(v2, 0xFFFF);
      return a1;
    }
  }
  else
  {
    _frnd(a1);
    _ctrlfp(v2, 0xFFFF);
  }
  return result;
}

// Address: 0x10019684
wint_t __cdecl _towlower_l(wint_t C, _locale_t Locale)
{
  wint_t result; // ax
  wchar_t *v3; // eax
  wint_t v4; // cx
  int v5; // [esp+0h] [ebp-18h] BYREF
  int v6; // [esp+4h] [ebp-14h]
  char v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+10h] [ebp-8h]
  WCHAR DestStr; // [esp+14h] [ebp-4h] BYREF

  result = -1;
  if ( C != 0xFFFF )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v5, Locale);
    v3 = *(wchar_t **)(v6 + 168);
    if ( v3 != nullptr )
    {
      if ( C >= 0x100u )
      {
        if ( __acrt_LCMapStringW(v3, 0x100u, &C, 1u, &DestStr, 1) != 0 )
        {
          result = DestStr;
LABEL_16:
          if ( v7 != 0 )
            *(_DWORD *)(v5 + 848) &= ~2u;
          return result;
        }
        result = C;
LABEL_14:
        v8 = result;
        goto LABEL_16;
      }
      if ( iswctype(C, 1u) != 0 )
        result = *(unsigned __int8 *)(*(_DWORD *)(v6 + 148) + C);
      else
        result = C;
    }
    else
    {
      v4 = C;
      if ( (unsigned __int16)(C - 65) <= 0x19u )
      {
        v8 = (unsigned __int16)(C + 32);
        v4 = C + 32;
      }
      result = v4;
      v8 = v4;
    }
    v8 = result;
    goto LABEL_14;
  }
  return result;
}

// Address: 0x1001974D
void __cdecl __dcrt_lowio_initialize_console_output()
{
  hConsoleOutput = CreateFileW(L"CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
}

// Address: 0x1001976C
// Microsoft VisualC universal runtime
HANDLE unknown_libname_48()
{
  HANDLE result; // eax

  result = hConsoleOutput;
  if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 )
    return (HANDLE)CloseHandle(hConsoleOutput);
  return result;
}

// Address: 0x10019790
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

// Address: 0x100197F1
int __usercall _clrfp@<eax>(__int16 a1@<fpstat>)
{
  __asm { fnclex }
  return a1;
}

// Address: 0x10019804
int _ctrlfp()
{
  __int16 v1; // [esp+4h] [ebp-4h]

  return v1;
}

// Address: 0x10019830
void _set_statfp()
{
  ;
}

// Address: 0x1001988B
int __usercall _statfp@<eax>(__int16 a1@<fpstat>)
{
  return a1;
}

// Address: 0x1001989D
int __cdecl _d_inttype(double X)
{
  if ( (_fpclass(X) & 0x90) != 0 )
    return 0;
  _frnd(X);
  _frnd(X * 0.5);
  return 2;
}

// Address: 0x10019907
int __cdecl _powhlp(long double a1, double a2, double *a3)
{
  long double v3; // st7
  double v4; // st7
  bool v5; // c3
  double *v6; // eax
  bool v7; // c3
  int v8; // eax

  v3 = fabs(a1);
  if ( HIDWORD(a2) == 2146435072 )
  {
    if ( LODWORD(a2) == 0 )
    {
      if ( v3 <= 1.0 )
      {
        v5 = 1.0 == v3;
        v4 = 1.0;
        v6 = a3;
        if ( !v5 )
          v4 = 0.0;
        goto LABEL_26;
      }
      goto LABEL_4;
    }
  }
  else if ( a2 == -INFINITY )
  {
    if ( v3 <= 1.0 )
    {
      v7 = 1.0 == v3;
      v4 = 1.0;
      v6 = a3;
      if ( !v7 )
        v4 = INFINITY;
      goto LABEL_26;
    }
    v4 = 0.0;
    goto LABEL_25;
  }
  if ( HIDWORD(a1) == 2146435072 )
  {
    if ( LODWORD(a1) == 0 )
    {
      v4 = 0.0;
      if ( a2 <= 0.0 )
      {
        v6 = a3;
        if ( a2 >= 0.0 )
          v4 = 1.0;
        goto LABEL_26;
      }
LABEL_4:
      v4 = INFINITY;
LABEL_25:
      v6 = a3;
LABEL_26:
      *v6 = v4;
    }
  }
  else if ( a1 == -INFINITY )
  {
    v8 = _d_inttype(a2);
    v4 = 0.0;
    if ( a2 <= 0.0 )
    {
      if ( a2 >= 0.0 )
      {
        v4 = 1.0;
      }
      else if ( v8 == 1 )
      {
        v4 = -0.0;
      }
    }
    else
    {
      v4 = INFINITY;
      if ( v8 == 1 )
        v4 = -INFINITY;
    }
    goto LABEL_25;
  }
  return 0;
}

// Address: 0x10019A32
int __usercall _87except@<eax>(int a1@<ebp>, int a2, int a3, unsigned __int16 *a4)
{
  int v4; // ecx
  int v5; // edi
  int result; // eax
  int v7; // [esp-94h] [ebp-A0h]
  int v8; // [esp-84h] [ebp-90h] BYREF
  double v9[8]; // [esp-80h] [ebp-8Ch] BYREF
  unsigned int v10; // [esp-40h] [ebp-4Ch]
  int v11; // [esp+0h] [ebp-Ch]
  void *v12; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v11 = a1;
  v12 = retaddr;
  v4 = *a4;
  v8 = v4;
  switch ( *(_DWORD *)a3 )
  {
    case 1:
      goto LABEL_11;
    case 2:
      v7 = 4;
      break;
    case 3:
      v7 = 17;
      break;
    case 4:
      v7 = 18;
      break;
    case 5:
LABEL_11:
      v7 = 8;
      break;
    case 8:
      v7 = 16;
      break;
    default:
      goto LABEL_19;
  }
  v5 = v7;
  if ( _handle_exc(v7, a3 + 24, v4) == 0 )
  {
    if ( a2 == 16 || a2 == 22 || a2 == 29 )
    {
      v9[6] = *(double *)(a3 + 16);
      v10 = v10 & 0xFFFFFFE0 | 3;
    }
    else
    {
      v10 &= ~1u;
    }
    _raise_exc((ULONG_PTR)v9, (int)&v8, v5, a2, a3 + 8, a3 + 24);
  }
LABEL_19:
  _ctrlfp();
  if ( *(_DWORD *)a3 == 8 )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  if ( !__acrt_has_user_matherr() )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  result = __acrt_invoke_user_matherr(a3);
  if ( result == 0 )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  return result;
}

// Address: 0x10019B3D
long double __cdecl _frnd(long double a1)
{
  return rint(a1);
}

// Address: 0x10019B53
int __cdecl _errcode(char a1)
{
  if ( (a1 & 0x20) != 0 )
    return 5;
  if ( (a1 & 8) != 0 )
    return 1;
  if ( (a1 & 4) != 0 )
    return 2;
  if ( (a1 & 1) != 0 )
    return 3;
  return 2 * (a1 & 2);
}

// Address: 0x10019B87
double __usercall _except1@<st0>(int a1@<ebp>, int a2, int a3, double a4, double a5, int a6)
{
  int v6; // esi
  int v7; // edi
  double result; // st7
  int v9; // [esp+2Ch] [ebp-8Ch] BYREF
  int v10; // [esp+6Ch] [ebp-4Ch]
  int v11; // [esp+ACh] [ebp-Ch]
  void *v12; // [esp+B0h] [ebp-8h]
  void *retaddr; // [esp+B8h] [ebp+0h]

  v11 = a1;
  v12 = retaddr;
  v6 = a6;
  if ( _handle_exc(a2, &a5, a6) == 0 )
  {
    v10 &= ~1u;
    _raise_exc_ex((ULONG_PTR)&v9, (int)&a6, a2, a3, (int)&a4, (int)&a5, 0);
    v6 = a6;
  }
  v7 = _errcode(a2);
  if ( __acrt_has_user_matherr() && v7 != 0 )
  {
    result = a4;
    _umatherr(
      v7,
      a3,
      SLODWORD(a4),
      SHIDWORD(a4),
      COERCE_UNSIGNED_INT64(0.0),
      HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
      a5,
      v6);
  }
  else
  {
    _set_errno_from_matherr(v7);
    _ctrlfp();
    return a5;
  }
  return result;
}

// Address: 0x10019C55
BOOL __cdecl _handle_exc(unsigned __int8 a1, double *a2, __int16 a3)
{
  int v3; // esi
  int v4; // eax
  double *v5; // ecx
  double v6; // st7
  BOOL v7; // edi
  double v8; // st7
  double v9; // st7
  BOOL v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  double v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h] BYREF

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a3 & 1) != 0 )
  {
    _set_statfp();
    v3 = a1 & 0x17;
    goto LABEL_44;
  }
  if ( ((unsigned __int8)a3 & a1 & 4) != 0 )
  {
    _set_statfp();
    v3 = a1 & 0x1B;
    goto LABEL_44;
  }
  if ( (a1 & 1) != 0 && (a3 & 8) != 0 )
  {
    _set_statfp();
    v4 = a3 & 0xC00;
    if ( (a3 & 0xC00) != 0 )
    {
      if ( v4 != 1024 )
      {
        if ( v4 != 2048 )
        {
          if ( v4 != 3072 )
          {
LABEL_23:
            v3 = a1 & 0x1E;
            goto LABEL_44;
          }
          v5 = a2;
          v6 = 1.797693134862316e308;
          if ( *a2 <= 0.0 )
            goto LABEL_21;
LABEL_22:
          *v5 = v6;
          goto LABEL_23;
        }
        v5 = a2;
        if ( *a2 <= 0.0 )
        {
          v6 = 1.797693134862316e308;
LABEL_21:
          v6 = -v6;
          goto LABEL_22;
        }
LABEL_19:
        v6 = INFINITY;
        goto LABEL_22;
      }
      v5 = a2;
      if ( *a2 > 0.0 )
      {
        v6 = 1.797693134862316e308;
        goto LABEL_22;
      }
    }
    else
    {
      v5 = a2;
      if ( *a2 > 0.0 )
        goto LABEL_19;
    }
    v6 = INFINITY;
    goto LABEL_21;
  }
  if ( (a1 & 2) != 0 && (a3 & 0x10) != 0 )
  {
    v7 = (a1 & 0x10) != 0;
    if ( 0.0 == *a2 )
    {
      v7 = true;
    }
    else
    {
      v8 = *a2;
      _decomp(v8, (int)&v15);
      v15 -= 1536;
      v14 = v8;
      if ( v15 >= -1074 )
      {
        v10 = v8 < 0.0;
        HIWORD(v14) = BYTE6(v14) & 0xF | 0x10;
        if ( v15 < -1021 )
        {
          v11 = -1021 - v15;
          v12 = LODWORD(v14);
          do
          {
            if ( (LOBYTE(v14) & 1) != 0 && !v7 )
              v7 = true;
            v12 >>= 1;
            LODWORD(v14) = v12;
            if ( (BYTE4(v14) & 1) != 0 )
            {
              v12 |= 0x80000000;
              LODWORD(v14) = v12;
            }
            HIDWORD(v14) >>= 1;
            --v11;
          }
          while ( v11 != 0 );
        }
        v9 = v14;
        if ( v10 )
          v9 = -v14;
      }
      else
      {
        v9 = v8 * 0.0;
        v7 = true;
      }
      *a2 = v9;
    }
    if ( v7 )
      _set_statfp();
    v3 = a1 & 0x1D;
  }
LABEL_44:
  if ( (a1 & 0x10) != 0 && (a3 & 0x20) != 0 )
  {
    _set_statfp();
    v3 &= ~0x10u;
  }
  return v3 == 0;
}

// Address: 0x10019E35
int __cdecl _raise_exc(ULONG_PTR Arguments, int a2, int a3, int a4, int a5, int a6)
{
  return _raise_exc_ex(Arguments, a2, a3, a4, a5, a6, 0);
}

// Address: 0x10019E58
unsigned int __usercall _raise_exc_ex@<eax>(
        __int16 a1@<fpstat>,
        ULONG_PTR Arguments,
        unsigned int *a3,
        char a4,
        int a5,
        float *a6,
        float *a7,
        int a8)
{
  DWORD v8; // edi
  char v9; // cl
  unsigned int *v10; // esi
  char v11; // al
  int v12; // eax
  unsigned int *v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int *v16; // ecx
  unsigned int v17; // eax
  float *v18; // ebx
  __int16 v19; // fps
  ULONG_PTR v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int result; // eax

  *(_DWORD *)(Arguments + 4) = 0;
  v8 = -1073741811;
  *(_DWORD *)(Arguments + 8) = 0;
  *(_DWORD *)(Arguments + 12) = 0;
  v9 = a4;
  if ( (a4 & 0x10) != 0 )
  {
    v8 = -1073741681;
    *(_DWORD *)(Arguments + 4) |= 1u;
  }
  if ( (v9 & 2) != 0 )
  {
    v8 = -1073741677;
    *(_DWORD *)(Arguments + 4) |= 2u;
  }
  if ( (v9 & 1) != 0 )
  {
    v8 = -1073741679;
    *(_DWORD *)(Arguments + 4) |= 4u;
  }
  if ( (v9 & 4) != 0 )
  {
    v8 = -1073741682;
    *(_DWORD *)(Arguments + 4) |= 8u;
  }
  if ( (v9 & 8) != 0 )
  {
    v8 = -1073741680;
    *(_DWORD *)(Arguments + 4) |= 0x10u;
  }
  v10 = a3;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(16 * *a3)) & 0x10;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(2 * *v10)) & 8;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v10 >> 1)) & 4;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v10 >> 3)) & 2;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v10 >> 5)) & 1;
  v11 = _statfp(a1);
  if ( (v11 & 1) != 0 )
    *(_DWORD *)(Arguments + 12) |= 0x10u;
  if ( (v11 & 4) != 0 )
    *(_DWORD *)(Arguments + 12) |= 8u;
  if ( (v11 & 8) != 0 )
    *(_DWORD *)(Arguments + 12) |= 4u;
  if ( (v11 & 0x10) != 0 )
    *(_DWORD *)(Arguments + 12) |= 2u;
  if ( (v11 & 0x20) != 0 )
    *(_DWORD *)(Arguments + 12) |= 1u;
  v12 = *v10 & 0xC00;
  switch ( v12 )
  {
    case 0:
      *(_DWORD *)Arguments &= 0xFFFFFFFC;
      break;
    case 1024:
      v13 = (unsigned int *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1;
      goto LABEL_27;
    case 2048:
      v13 = (unsigned int *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2;
LABEL_27:
      *v13 = v14;
      break;
    case 3072:
      *(_DWORD *)Arguments |= 3u;
      break;
    default:
      break;
  }
  v15 = *v10 & 0x300;
  switch ( v15 )
  {
    case 0:
      v16 = (unsigned int *)Arguments;
      v17 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8;
      goto LABEL_36;
    case 512:
      v16 = (unsigned int *)Arguments;
      v17 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4;
LABEL_36:
      *v16 = v17;
      break;
    case 768:
      *(_DWORD *)Arguments &= 0xFFFFFFE3;
      break;
    default:
      break;
  }
  *(_DWORD *)Arguments ^= (*(_DWORD *)Arguments ^ (32 * a5)) & 0x1FFE0;
  *(_DWORD *)(Arguments + 32) |= 1u;
  if ( a8 != 0 )
  {
    *(_DWORD *)(Arguments + 32) &= 0xFFFFFFE1;
    *(float *)(Arguments + 16) = *a6;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v18 = a7;
    *(_DWORD *)(Arguments + 96) &= 0xFFFFFFE1;
    *(float *)(Arguments + 80) = *v18;
  }
  else
  {
    *(_DWORD *)(Arguments + 32) = *(_DWORD *)(Arguments + 32) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 16) = *(double *)a6;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v18 = a7;
    *(_DWORD *)(Arguments + 96) = *(_DWORD *)(Arguments + 96) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 80) = *(double *)v18;
  }
  _clrfp(v19);
  RaiseException(v8, 0, 1u, &Arguments);
  v20 = Arguments;
  if ( (*(_BYTE *)(Arguments + 8) & 0x10) != 0 )
    *v10 &= ~1u;
  if ( (*(_BYTE *)(v20 + 8) & 8) != 0 )
    *v10 &= ~4u;
  if ( (*(_BYTE *)(v20 + 8) & 4) != 0 )
    *v10 &= ~8u;
  if ( (*(_BYTE *)(v20 + 8) & 2) != 0 )
    *v10 &= ~0x10u;
  if ( (*(_BYTE *)(v20 + 8) & 1) != 0 )
    *v10 &= ~0x20u;
  v21 = *(_DWORD *)v20 & 3;
  if ( v21 == 0 )
  {
    *v10 &= 0xFFFFF3FF;
    goto LABEL_59;
  }
  v22 = v21 - 1;
  if ( v22 == 0 )
  {
    v24 = *v10 & 0xFFFFF3FF | 0x400;
    goto LABEL_56;
  }
  v23 = v22 - 1;
  if ( v23 == 0 )
  {
    v24 = *v10 & 0xFFFFF3FF | 0x800;
LABEL_56:
    *v10 = v24;
    goto LABEL_59;
  }
  if ( v23 == 1 )
    *v10 |= 0xC00u;
LABEL_59:
  v25 = (*(_DWORD *)v20 >> 2) & 7;
  if ( v25 == 0 )
  {
    result = *v10 & 0xFFFFF0FF | 0x300;
    goto LABEL_65;
  }
  v26 = v25 - 1;
  if ( v26 == 0 )
  {
    result = *v10 & 0xFFFFF1FF | 0x200;
LABEL_65:
    *v10 = result;
    goto LABEL_66;
  }
  result = v26 - 1;
  if ( result == 0 )
    *v10 &= 0xFFFFF3FF;
LABEL_66:
  if ( a8 != 0 )
    *v18 = *(float *)(v20 + 80);
  else
    *(double *)v18 = *(double *)(v20 + 80);
  return result;
}

// Address: 0x1001A149
int *__cdecl _set_errno_from_matherr(int a1)
{
  int *result; // eax

  if ( a1 == 1 )
  {
    result = _errno();
    *result = 33;
  }
  else
  {
    result = (int *)(a1 - 2);
    if ( (unsigned int)(a1 - 2) <= 1 )
    {
      result = _errno();
      *result = 34;
    }
  }
  return result;
}

// Address: 0x1001A178
double __cdecl _umatherr(int a1, int a2, int a3, int a4, int a5, int a6, double a7)
{
  char *v7; // ecx
  int v8; // eax
  _DWORD v10[6]; // [esp+0h] [ebp-20h] BYREF
  double v11; // [esp+18h] [ebp-8h]

  v7 = nullptr;
  v8 = 0;
  while ( dword_10021858[2 * v8] != a2 )
  {
    if ( ++v8 >= 29 )
      goto LABEL_6;
  }
  v7 = (&off_1002185C)[2 * v8];
LABEL_6:
  v10[1] = v7;
  if ( v7 != nullptr )
  {
    v10[2] = a3;
    v10[3] = a4;
    v10[4] = a5;
    v10[5] = a6;
    v11 = a7;
    v10[0] = a1;
    _ctrlfp();
    if ( __acrt_invoke_user_matherr((int)v10) == 0 )
      _set_errno_from_matherr(a1);
    return v11;
  }
  else
  {
    _ctrlfp();
    _set_errno_from_matherr(a1);
    return a7;
  }
}

// Address: 0x1001A21A
double __cdecl _decomp(double a1, int *a2)
{
  double result; // st7
  int v3; // edi
  int v4; // ecx
  int v5; // edx

  if ( 0.0 == a1 )
  {
    result = 0.0;
    v3 = 0;
  }
  else if ( (HIWORD(a1) & 0x7FF0) == 0
         && ((v4 = HIDWORD(a1), v5 = LODWORD(a1), (HIDWORD(a1) & 0xFFFFF) != 0) || LODWORD(a1) != 0) )
  {
    v3 = -1021;
    if ( (BYTE6(a1) & 0x10) == 0 )
    {
      do
      {
        v4 *= 2;
        HIDWORD(a1) = v4;
        if ( v5 < 0 )
        {
          v4 |= 1u;
          HIDWORD(a1) = v4;
        }
        v5 *= 2;
        --v3;
      }
      while ( (BYTE6(a1) & 0x10) == 0 );
      LODWORD(a1) = v5;
    }
    result = _set_exp(LODWORD(a1), SWORD2(a1), 0);
  }
  else
  {
    result = _set_exp(LODWORD(a1), SWORD2(a1), 0);
    v3 = ((HIWORD(a1) >> 4) & 0x7FF) - 1022;
  }
  *a2 = v3;
  return result;
}

// Address: 0x1001A2EE
double __cdecl _set_exp(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1;
  HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * (a2 + 1022));
  return v3;
}

// Address: 0x1001A31D
int __cdecl _sptype(int a1, int a2)
{
  if ( a2 == 2146435072 )
  {
    if ( a1 == 0 )
      return 1;
  }
  else if ( a2 == -1048576 && a1 == 0 )
  {
    return 2;
  }
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF8 )
    return 3;
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF0 && ((a2 & 0x7FFFF) != 0 || a1 != 0) )
    return 4;
  return 0;
}

// Address: 0x1001A37B
int __cdecl __acrt_LCMapStringW(
        wchar_t *a1,
        DWORD dwMapFlags,
        wchar_t *Source,
        int MaxCount,
        LPWSTR lpDestStr,
        int cchDest)
{
  int v6; // esi
  signed int v7; // eax

  v6 = MaxCount;
  if ( MaxCount > 0 )
  {
    v7 = wcsnlen(Source, MaxCount);
    v6 = v7 + 1;
    if ( v7 >= MaxCount )
      v6 = v7;
  }
  return __acrt_LCMapStringEx(a1, dwMapFlags, Source, v6, lpDestStr, cchDest, 0, 0, 0);
}

// Address: 0x1001A3B9
int __cdecl _fpclass(double X)
{
  int v1; // eax
  int v2; // eax
  int v4; // ecx

  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 )
  {
    v1 = _sptype(SLODWORD(X), SHIDWORD(X)) - 1;
    if ( v1 != 0 )
    {
      v2 = v1 - 1;
      if ( v2 == 0 )
        return 4;
      if ( v2 != 1 )
        return 1;
      return 2;
    }
    else
    {
      return 512;
    }
  }
  else
  {
    v4 = HIWORD(X) & 0x8000;
    if ( (HIWORD(X) & 0x7FF0) == 0 && ((HIDWORD(X) & 0xFFFFF) != 0 || LODWORD(X) != 0) )
    {
      return v4 != 0 ? 16 : 128;
    }
    else if ( 0.0 == X )
    {
      return v4 != 0 ? 32 : 64;
    }
    else
    {
      return v4 != 0 ? 8 : 256;
    }
  }
}

// Address: 0x1001A45E
// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)
{
  return __imp_IsProcessorFeaturePresent(ProcessorFeature);
}

// Address: 0x1001A464
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x1001A46A
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1001A4B0
int __cdecl _FindPESection(int a1, unsigned int a2)
{
  unsigned int v2; // edx
  int v3; // ecx
  int result; // eax
  unsigned int v5; // esi

  v2 = 0;
  v3 = a1 + *(_DWORD *)(a1 + 60);
  result = v3 + *(unsigned __int16 *)(v3 + 20) + 24;
  if ( *(_WORD *)(v3 + 6) == 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(result + 12);
    if ( a2 >= v5 && a2 < v5 + *(_DWORD *)(result + 8) )
      break;
    ++v2;
    result += 40;
    if ( v2 >= *(unsigned __int16 *)(v3 + 6) )
      return 0;
  }
  return result;
}

// Address: 0x1001A500
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000) != 0
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x1001A5C0
bool __cdecl _ValidateImageBase(int a1)
{
  bool result; // al
  int v2; // ecx

  if ( *(_WORD *)a1 != 23117 )
    return false;
  v2 = a1 + *(_DWORD *)(a1 + 60);
  result = false;
  if ( *(_DWORD *)v2 == 17744 )
    return *(_WORD *)(v2 + 24) == 267;
  return result;
}

// Address: 0x1001A600
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

// Address: 0x1001A6A0
_DWORD *__cdecl _SEH_prolog4_GS(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-14h] [ebp-14h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_1001A500;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1001A6E9
void _SEH_epilog4_GS()
{
  ;
}

// Address: 0x1001A700
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x1001A740
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

// Address: 0x1001A820
unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}

// Address: 0x1001A840
int _alloca_probe_16()
{
  return _alloca_probe();
}

// Address: 0x1001A856
int _alloca_probe_8()
{
  return _alloca_probe();
}

// Address: 0x1001A870
int __usercall _allshl@<eax>(__int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  __int64 v2; // rax

  if ( a2 >= 0x40u )
  {
    LODWORD(v2) = 0;
  }
  else if ( a2 >= 0x20u )
  {
    LODWORD(v2) = 0;
  }
  else
  {
    return a1 << (a2 & 0x1F);
  }
  return v2;
}

// Address: 0x1001A890
int __usercall _ftol2_sse@<eax>(double a1@<st0>)
{
  int result; // eax
  int v2; // edx
  float v3; // [esp+0h] [ebp-24h]
  int v4; // [esp+18h] [ebp-Ch]

  if ( dword_10025CE4 != 0 )
    return (int)a1;
  *(float *)&v4 = a1;
  v2 = v4;
  result = (__int64)a1;
  if ( result != 0 || ((v2 = (unsigned __int64)(__int64)a1 >> 32) & 0x7FFFFFFF) != 0 )
  {
    if ( v2 >= 0 )
    {
      v3 = a1 - (double)(__int64)a1;
      result -= __CFADD__(LODWORD(v3), 0x7FFFFFFF);
    }
    else
    {
      return (__PAIR64__(result, -(float)(a1 - (double)(__int64)a1)) + 0x7FFFFFFF) >> 32;
    }
  }
  return result;
}

// Address: 0x1001A950
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

// Address: 0x1001A980
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  const __m128i *v3; // esi
  signed int v4; // ecx
  __m128i *v5; // edi
  void *result; // eax
  __int64 v7; // xmm1_8
  __m128i v8; // xmm1
  const __m128i *v9; // esi
  __m128i v10; // xmm3
  __m128i v11; // xmm0
  __m128i v12; // xmm5
  const __m128i *v13; // esi
  __m128i v14; // xmm1
  const __m128i *v15; // esi
  __m128i v16; // xmm3
  __m128i v17; // xmm0
  __m128i v18; // xmm5
  __m128i v19; // xmm1
  const __m128i *v20; // esi
  __m128i v21; // xmm3
  __m128i v22; // xmm0
  __m128i v23; // xmm5
  __m128i v24; // xmm1
  __int32 v25; // eax
  __int64 v26; // xmm1_8
  char v27; // dl
  unsigned int v28; // ecx
  const __m128i *v29; // esi
  __m128i *v30; // edi
  int v31; // edx
  char v32; // dl
  unsigned int v33; // ecx
  int v34; // edx
  __int8 *v35; // esi
  char *v36; // edi
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  __m128i v41; // xmm5
  __m128i v42; // xmm6
  __m128i v43; // xmm7
  __m128i v44; // xmm1
  int v45; // eax
  unsigned int v46; // edx
  unsigned int k; // edx
  __m128i si128; // xmm1
  __m128i v49; // xmm2
  __m128i v50; // xmm3
  __m128i v51; // xmm5
  __m128i v52; // xmm6
  __m128i v53; // xmm7
  unsigned int m; // edx
  __m128i v55; // xmm1
  unsigned int v56; // ecx
  char v57; // al
  unsigned int n; // ecx
  int ii; // ecx
  unsigned int v60; // eax
  int i; // ecx
  unsigned int j; // eax
  size_t v63; // [esp-4h] [ebp-Ch]

  v3 = (const __m128i *)Src;
  v4 = Size;
  v5 = (__m128i *)a1;
  if ( a1 > Src && a1 < (char *)Src + Size )
  {
    v29 = (const __m128i *)((char *)Src + Size);
    v30 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x20 )
    {
      if ( _bittest(&dword_10025010, 1u) )
      {
        for ( ; ((unsigned __int8)v30 & 0xF) != 0; v30->m128i_i8[0] = v29->m128i_i8[0] )
        {
          --v4;
          v29 = (const __m128i *)((char *)v29 - 1);
          v30 = (__m128i *)((char *)v30 - 1);
        }
        do
        {
          if ( (unsigned int)v4 < 0x80 )
            break;
          v29 -= 8;
          v30 -= 8;
          v37 = _mm_loadu_si128(v29 + 1);
          v38 = _mm_loadu_si128(v29 + 2);
          v39 = _mm_loadu_si128(v29 + 3);
          v40 = _mm_loadu_si128(v29 + 4);
          v41 = _mm_loadu_si128(v29 + 5);
          v42 = _mm_loadu_si128(v29 + 6);
          v43 = _mm_loadu_si128(v29 + 7);
          *v30 = _mm_loadu_si128(v29);
          v30[1] = v37;
          v30[2] = v38;
          v30[3] = v39;
          v30[4] = v40;
          v30[5] = v41;
          v30[6] = v42;
          v30[7] = v43;
          v4 -= 128;
        }
        while ( (v4 & 0xFFFFFF80) != 0 );
        if ( (unsigned int)v4 >= 0x20 )
        {
          do
          {
            v29 -= 2;
            v30 -= 2;
            v44 = _mm_loadu_si128(v29 + 1);
            *v30 = _mm_loadu_si128(v29);
            v30[1] = v44;
            v4 -= 32;
          }
          while ( (v4 & 0xFFFFFFE0) != 0 );
        }
      }
      else
      {
        if ( ((unsigned __int8)v30 & 3) != 0 )
        {
          v31 = (unsigned __int8)v30 & 3;
          v4 = Size - v31;
          do
          {
            v30[-1].m128i_i8[15] = v29[-1].m128i_i8[15];
            v29 = (const __m128i *)((char *)v29 - 1);
            v30 = (__m128i *)((char *)v30 - 1);
            --v31;
          }
          while ( v31 != 0 );
        }
        if ( (unsigned int)v4 >= 0x20 )
        {
          v32 = v4;
          v33 = (unsigned int)v4 >> 2;
          v34 = v32 & 3;
          v35 = &v29[-1].m128i_i8[12];
          v36 = &v30[-1].m128i_i8[12];
          while ( v33 != 0 )
          {
            *(_DWORD *)v36 = *(_DWORD *)v35;
            v35 -= 4;
            v36 -= 4;
            --v33;
          }
          switch ( v34 )
          {
            case 0:
              result = a1;
              break;
            case 1:
              v36[3] = v35[3];
              result = a1;
              break;
            case 2:
              v36[3] = v35[3];
              v36[2] = v35[2];
              result = a1;
              break;
            case 3:
              v36[3] = v35[3];
              v36[2] = v35[2];
              v36[1] = v35[1];
              result = a1;
              break;
          }
          return result;
        }
      }
    }
    for ( ; (v4 & 0xFFFFFFFC) != 0; v4 -= 4 )
    {
      v30 = (__m128i *)((char *)v30 - 4);
      v29 = (const __m128i *)((char *)v29 - 4);
      v30->m128i_i32[0] = v29->m128i_i32[0];
    }
    for ( ; v4 != 0; --v4 )
    {
      v30 = (__m128i *)((char *)v30 - 1);
      v29 = (const __m128i *)((char *)v29 - 1);
      v30->m128i_i8[0] = v29->m128i_i8[0];
    }
    return a1;
  }
  else
  {
    if ( Size < 0x20 )
      goto CopyUpDwordMov_0;
    if ( Size < 0x80 )
    {
      if ( !_bittest(&dword_10025010, 1u) )
        goto Dword_align_0;
      goto XmmCopySmallTest_0;
    }
    if ( _bittest(&dword_10025CE8, 1u) )
    {
      qmemcpy(a1, Src, Size);
      return a1;
    }
    if ( (((unsigned int)Src ^ (unsigned int)a1) & 0xF) == 0 && _bittest(&dword_10025010, 1u) )
    {
      v45 = (unsigned __int8)Src & 0xF;
      if ( ((unsigned __int8)Src & 0xF) != 0 )
      {
        v63 = Size - (16 - v45);
        v60 = 16 - v45;
        for ( i = v60 & 3; i != 0; --i )
        {
          v5->m128i_i8[0] = v3->m128i_i8[0];
          v3 = (const __m128i *)((char *)v3 + 1);
          v5 = (__m128i *)((char *)v5 + 1);
        }
        for ( j = v60 >> 2; j != 0; --j )
        {
          v5->m128i_i32[0] = v3->m128i_i32[0];
          v3 = (const __m128i *)((char *)v3 + 4);
          v5 = (__m128i *)((char *)v5 + 4);
        }
        v4 = v63;
      }
      v46 = v4;
      v4 &= 0x7Fu;
      for ( k = v46 >> 7; k != 0; --k )
      {
        si128 = _mm_load_si128(v3 + 1);
        v49 = _mm_load_si128(v3 + 2);
        v50 = _mm_load_si128(v3 + 3);
        *v5 = _mm_load_si128(v3);
        v5[1] = si128;
        v5[2] = v49;
        v5[3] = v50;
        v51 = _mm_load_si128(v3 + 5);
        v52 = _mm_load_si128(v3 + 6);
        v53 = _mm_load_si128(v3 + 7);
        v5[4] = _mm_load_si128(v3 + 4);
        v5[5] = v51;
        v5[6] = v52;
        v5[7] = v53;
        v3 += 8;
        v5 += 8;
      }
XmmCopySmallTest_0:
      if ( v4 == 0 )
        return a1;
      for ( m = (unsigned int)v4 >> 5; m != 0; --m )
      {
        v55 = _mm_loadu_si128(v3 + 1);
        *v5 = _mm_loadu_si128(v3);
        v5[1] = v55;
        v3 += 2;
        v5 += 2;
      }
CopyUpDwordMov_0:
      v56 = v4 & 0x1F;
      if ( v56 != 0 )
      {
        v57 = v56;
        for ( n = v56 >> 2; n != 0; --n )
        {
          v5->m128i_i32[0] = v3->m128i_i32[0];
          v5 = (__m128i *)((char *)v5 + 4);
          v3 = (const __m128i *)((char *)v3 + 4);
        }
        for ( ii = v57 & 3; ii != 0; --ii )
        {
          v5->m128i_i8[0] = v3->m128i_i8[0];
          v3 = (const __m128i *)((char *)v3 + 1);
          v5 = (__m128i *)((char *)v5 + 1);
        }
      }
      return a1;
    }
    if ( !_bittest(&dword_10025CE8, 0) || ((unsigned __int8)a1 & 3) != 0 )
    {
Dword_align_0:
      if ( ((unsigned __int8)a1 & 3) != 0 )
      {
        do
        {
          v5->m128i_i8[0] = v3->m128i_i8[0];
          --v4;
          v3 = (const __m128i *)((char *)v3 + 1);
          v5 = (__m128i *)((char *)v5 + 1);
        }
        while ( ((unsigned __int8)v5 & 3) != 0 );
      }
      goto Dword_align_Ok_0;
    }
    if ( ((unsigned __int8)Src & 3) != 0 )
    {
Dword_align_Ok_0:
      v27 = v4;
      if ( (unsigned int)v4 >= 0x20 )
      {
        v28 = (unsigned int)v4 >> 2;
        qmemcpy(v5, v3, 4 * v28);
        v13 = (const __m128i *)((char *)v3 + 4 * v28);
        v5 = (__m128i *)((char *)v5 + 4 * v28);
        switch ( v27 & 3 )
        {
          case 0:
            goto TrailingUp0_0;
          case 1:
            goto TrailingUp1_0;
          case 2:
            goto TrailingUp2_0;
          case 3:
            goto TrailingUp3_0;
        }
      }
      goto CopyUpDwordMov_0;
    }
    if ( ((unsigned __int8)a1 & 4) != 0 )
    {
      v4 = Size - 4;
      v3 = (const __m128i *)((char *)Src + 4);
      *(_DWORD *)a1 = *(_DWORD *)Src;
      v5 = (__m128i *)((char *)a1 + 4);
    }
    if ( ((unsigned __int8)v5 & 8) != 0 )
    {
      v7 = v3->m128i_i64[0];
      v4 -= 8;
      v3 = (const __m128i *)((char *)v3 + 8);
      v5->m128i_i64[0] = v7;
      v5 = (__m128i *)((char *)v5 + 8);
    }
    if ( ((unsigned __int8)v3 & 7) != 0 )
    {
      if ( ((unsigned __int8)v3 & 8) != 0 )
      {
        v8 = _mm_load_si128((const __m128i *)((char *)v3 - 12));
        v9 = (const __m128i *)((char *)v3 - 12);
        do
        {
          v10 = _mm_load_si128(v9 + 1);
          v4 -= 48;
          v11 = _mm_load_si128(v9 + 2);
          v12 = _mm_load_si128(v9 + 3);
          v9 += 3;
          *v5 = _mm_alignr_epi8(v10, v8, 12);
          v5[1] = _mm_alignr_epi8(v11, v10, 12);
          v8 = v12;
          v5[2] = _mm_alignr_epi8(v12, v11, 12);
          v5 += 3;
        }
        while ( v4 >= 48 );
        v13 = (const __m128i *)((char *)&v9->m128i_u64[1] + 4);
      }
      else
      {
        v19 = _mm_load_si128((const __m128i *)((char *)v3 - 4));
        v20 = (const __m128i *)((char *)v3 - 4);
        do
        {
          v21 = _mm_load_si128(v20 + 1);
          v4 -= 48;
          v22 = _mm_load_si128(v20 + 2);
          v23 = _mm_load_si128(v20 + 3);
          v20 += 3;
          *v5 = _mm_alignr_epi8(v21, v19, 4);
          v5[1] = _mm_alignr_epi8(v22, v21, 4);
          v19 = v23;
          v5[2] = _mm_alignr_epi8(v23, v22, 4);
          v5 += 3;
        }
        while ( v4 >= 48 );
        v13 = (const __m128i *)((char *)v20->m128i_i64 + 4);
      }
    }
    else
    {
      v14 = _mm_load_si128((const __m128i *)((char *)v3 - 8));
      v15 = (const __m128i *)((char *)v3 - 8);
      do
      {
        v16 = _mm_load_si128(v15 + 1);
        v4 -= 48;
        v17 = _mm_load_si128(v15 + 2);
        v18 = _mm_load_si128(v15 + 3);
        v15 += 3;
        *v5 = _mm_alignr_epi8(v16, v14, 8);
        v5[1] = _mm_alignr_epi8(v17, v16, 8);
        v14 = v18;
        v5[2] = _mm_alignr_epi8(v18, v17, 8);
        v5 += 3;
      }
      while ( v4 >= 48 );
      v13 = (const __m128i *)&v15->m128i_u64[1];
    }
    while ( v4 >= 16 )
    {
      v24 = _mm_loadu_si128(v13);
      v4 -= 16;
      ++v13;
      *v5++ = v24;
    }
    if ( (v4 & 4) != 0 )
    {
      v25 = v13->m128i_i32[0];
      v4 -= 4;
      v13 = (const __m128i *)((char *)v13 + 4);
      v5->m128i_i32[0] = v25;
      v5 = (__m128i *)((char *)v5 + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v26 = v13->m128i_i64[0];
      v4 -= 8;
      v13 = (const __m128i *)((char *)v13 + 8);
      v5->m128i_i64[0] = v26;
      v5 = (__m128i *)((char *)v5 + 8);
    }
    switch ( v4 )
    {
      case 0:
TrailingUp0_0:
        result = a1;
        break;
      case 1:
TrailingUp1_0:
        v5->m128i_i8[0] = v13->m128i_i8[0];
        result = a1;
        break;
      case 2:
TrailingUp2_0:
        v5->m128i_i8[0] = v13->m128i_i8[0];
        v5->m128i_i8[1] = v13->m128i_i8[1];
        result = a1;
        break;
      case 3:
TrailingUp3_0:
        v5->m128i_i8[0] = v13->m128i_i8[0];
        v5->m128i_i8[1] = v13->m128i_i8[1];
        v5->m128i_i8[2] = v13->m128i_i8[2];
        result = a1;
        break;
    }
  }
  return result;
}

// Address: 0x1001AF00
char *__cdecl strrchr(const char *Str, int Ch)
{
  char *v2; // edi
  __m128 v3; // xmm3
  __m128i v4; // xmm3
  int v5; // eax
  const __m128i *v6; // edi
  char *v7; // edx
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm1
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  char *v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  char *result; // eax
  __m128i v18; // xmm0
  bool v19; // zf
  char *v20; // ecx
  __m128i *v21; // eax
  unsigned int i; // edi
  __m128i v23; // xmm0
  unsigned int v24; // edx
  unsigned int v25; // ecx
  const char *v26; // edi
  char *v27; // edi

  if ( dword_10025CE4 != 0 )
  {
    v2 = (char *)Str;
    if ( (unsigned int)dword_10025CE4 > 1 )
    {
      if ( (_BYTE)Ch != 0 )
      {
        result = nullptr;
        if ( ((unsigned __int8)Str & 0xF) != 0 )
        {
          while ( 1 )
          {
            if ( (unsigned __int8)*v2 == (unsigned __int8)Ch )
              result = v2;
            if ( *v2 == 0 )
              break;
            if ( ((unsigned __int8)++v2 & 0xF) == 0 )
              goto strrchr_sttni_aligned;
          }
        }
        else
        {
strrchr_sttni_aligned:
          v18 = _mm_cvtsi32_si128((unsigned __int8)Ch);
          do
          {
            v2 += 16;
            v19 = _mm_cmpistrz(v18, *((__m128i *)v2 - 1), 64);
            v20 = &v2[_mm_cmpistri(v18, *((__m128i *)v2 - 1), 64) - 16];
            if ( _mm_cmpistrc(v18, *((__m128i *)v2 - 1), 64) )
              result = v20;
          }
          while ( !v19 );
        }
      }
      else
      {
        v21 = (__m128i *)((unsigned int)Str & 0xFFFFFFF0);
        for ( i = (-1 << ((unsigned __int8)Str & 0xF))
                & _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *(__m128i *)((unsigned int)Str & 0xFFFFFFF0)));
              i == 0;
              i = _mm_movemask_epi8(v23) )
        {
          v23 = _mm_cmpeq_epi8((__m128i)0LL, v21[1]);
          ++v21;
        }
        _BitScanForward(&v24, i);
        return &v21->m128i_i8[v24];
      }
    }
    else
    {
      v3 = (__m128)_mm_shufflelo_epi16(_mm_cvtsi32_si128((unsigned __int8)Ch | ((unsigned __int8)Ch << 8)), 0);
      v4 = (__m128i)_mm_movelh_ps(v3, v3);
      v5 = -1 << ((unsigned __int8)Str & 0xF);
      v6 = (const __m128i *)&Str[-((unsigned __int8)Str & 0xF)];
      v7 = nullptr;
      while ( 1 )
      {
        v8 = _mm_loadu_si128(v6);
        v9 = _mm_cmpeq_epi8((__m128i)0LL, v8);
        v10 = _mm_cmpeq_epi8(v8, v4);
        v11 = v5 & _mm_movemask_epi8(v9);
        if ( v11 != 0 )
          break;
        v12 = v5 & _mm_movemask_epi8(v10);
        _BitScanReverse(&v13, v12);
        v14 = &v6->m128i_i8[v13];
        if ( v12 != 0 )
          v7 = v14;
        v5 = -1;
        ++v6;
      }
      v15 = v5 & _mm_movemask_epi8(v10) & (((-2 * v11) & (2 * v11)) - 1);
      _BitScanReverse(&v16, v15);
      result = &v6->m128i_i8[v16];
      if ( v15 == 0 )
        return v7;
    }
  }
  else
  {
    v25 = strlen(Str) + 1;
    v26 = &Str[v25 - 1];
    do
    {
      if ( v25 == 0 )
        break;
      v19 = *v26-- == (unsigned __int8)Ch;
      --v25;
    }
    while ( !v19 );
    v27 = (char *)(v26 + 1);
    if ( *v27 == (_BYTE)Ch )
      return v27;
    else
      return nullptr;
  }
  return result;
}

// Address: 0x1001B040
char *__cdecl strchr(const char *Str, int Val)
{
  __m128 v2; // xmm3
  __m128i v3; // xmm3
  int v4; // eax
  const __m128i *i; // edx
  __m128i v6; // xmm1
  unsigned int v7; // ecx
  unsigned int v8; // eax
  char *result; // eax
  const char *v10; // edx
  char v11; // cl
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax

  if ( dword_10025CE4 != 0 )
  {
    v2 = (__m128)_mm_shufflelo_epi16(
                   _mm_cvtsi32_si128(((unsigned __int8)Val << 8) | (unsigned int)(unsigned __int8)Val),
                   0);
    v3 = (__m128i)_mm_movelh_ps(v2, v2);
    v4 = -1 << ((unsigned __int8)Str & 0xF);
    for ( i = (const __m128i *)&Str[-((unsigned __int8)Str & 0xF)]; ; ++i )
    {
      v6 = _mm_loadu_si128(i);
      v7 = v4 & _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8((__m128i)0LL, v6), _mm_cmpeq_epi8(v6, v3)));
      if ( v7 != 0 )
        break;
      v4 = -1;
    }
    _BitScanForward(&v8, v7);
    result = &i->m128i_i8[v8];
    if ( (unsigned __int8)_mm_cvtsi128_si32(v3) != *result )
      return nullptr;
  }
  else
  {
    v10 = Str;
    if ( ((unsigned __int8)Str & 3) == 0 )
      goto main_loop;
    do
    {
      v11 = *v10++;
      if ( v11 == (_BYTE)Val )
        return (char *)(v10 - 1);
      if ( v11 == 0 )
        return nullptr;
    }
    while ( ((unsigned __int8)v10 & 3) != 0 );
    while ( 1 )
    {
main_loop:
      while ( 1 )
      {
        v12 = (((unsigned __int8)Val << 8)
             | (unsigned __int8)Val
             | ((((unsigned __int8)Val << 8) | (unsigned __int8)Val) << 16))
            ^ *(_DWORD *)v10;
        v13 = *(_DWORD *)v10 + 2130640639;
        v14 = v13 ^ ~*(_DWORD *)v10;
        v10 += 4;
        if ( (((v12 + 2130640639) ^ ~v12) & 0x81010100) != 0 )
          break;
        v15 = v14 & 0x81010100;
        if ( v15 != 0 && ((v15 & 0x1010100) != 0 || (v13 & 0x80000000) == 0) )
          return nullptr;
      }
      v16 = *((_DWORD *)v10 - 1);
      if ( (_BYTE)v16 == (_BYTE)Val )
        break;
      if ( (_BYTE)v16 == 0 )
        return nullptr;
      if ( BYTE1(v16) == (_BYTE)Val )
        return (char *)(v10 - 3);
      if ( BYTE1(v16) == 0 )
        return nullptr;
      v17 = HIWORD(v16);
      if ( (_BYTE)v17 == (_BYTE)Val )
        return (char *)(v10 - 2);
      if ( (_BYTE)v17 == 0 )
        return nullptr;
      if ( BYTE1(v17) == (_BYTE)Val )
        return (char *)(v10 - 1);
      if ( BYTE1(v17) == 0 )
        return nullptr;
    }
    return (char *)(v10 - 4);
  }
  return result;
}

// Address: 0x1001B16B
wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  __m128i v3; // xmm2
  unsigned int v4; // eax
  int v6; // [esp-24h] [ebp-30h]

  if ( dword_10025CE4 >= 1 )
  {
    v3 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(Ch), 0), 0);
    while ( 1 )
    {
      if ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0 )
      {
        if ( *Str == Ch )
          return (wchar_t *)Str;
        if ( *Str == 0 )
          return nullptr;
        v6 = 2;
      }
      else
      {
        v4 = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi16((__m128i)0LL, *(__m128i *)Str), _mm_cmpeq_epi16(*(__m128i *)Str, v3)));
        if ( v4 != 0 )
        {
          _BitScanForward(&v4, v4);
          Str = (const wchar_t *)((char *)Str + v4);
          return *Str != Ch ? nullptr : (wchar_t *)Str;
        }
        v6 = 16;
      }
      Str = (const wchar_t *)((char *)Str + v6);
    }
  }
  while ( *Str != 0 && *Str != Ch )
    ++Str;
  return *Str != Ch ? nullptr : (wchar_t *)Str;
}

// Address: 0x1001B5B5
void nullsub_1()
{
  ;
}

// Address: 0x1001B7F0
void __cdecl sub_1001B7F0()
{
  dword_100265C8 = (int)&ATL::CAtlStringMgr::`vftable';
}

// Address: 0x1001B800
void __cdecl sub_1001B800()
{
  dword_100265E4 = (int)&ATL::CWin32Heap::`vftable';
  if ( byte_100265EC != 0 && dword_100265E8 != nullptr )
    HeapDestroy(dword_100265E8);
}

// Address: 0x1001B824
void sub_1001B824()
{
  DeleteCriticalSection(&stru_10025944);
  if ( unk_1002595C != 0 )
  {
    j___free_base(unk_1002595C);
    unk_1002595C = 0;
  }
  unk_10025960 = 0;
  unk_10025964 = 0;
}

