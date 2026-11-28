// Decompiled from Pcbootldr.dll (ClassM_2.0.57\unpacked\Client\Pcbootldr.dll)

// Address: 0x10001000
int __thiscall sub_10001000(_DWORD *this)
{
  *this = &std::bad_alloc::`vftable';
  return sub_10005DF8();
}

// Address: 0x10001010
_DWORD *__thiscall sub_10001010(_DWORD *this, char a2)
{
  *this = &std::bad_alloc::`vftable';
  sub_10005DF8();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001040
void nullsub_2()
{
  ;
}

// Address: 0x10001050
int __stdcall sub_10001050(int a1)
{
  return 0;
}

// Address: 0x10001060
_DWORD *__thiscall sub_10001060(_DWORD *this, int a2)
{
  sub_10005D1A();
  *this = &std::logic_error::`vftable';
  *(this + 8) = 0;
  *(this + 9) = 15;
  *((_BYTE *)this + 16) = 0;
  sub_10003FF0(a2, 0, -1);
  return this;
}

// Address: 0x100010D0
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_1(_DWORD *this)
{
  if ( *(this + 9) < 0x10u )
    return this + 4;
  else
    return (_DWORD *)*(this + 4);
}

// Address: 0x100010E0
_DWORD *__thiscall sub_100010E0(_DWORD *this, int a2)
{
  sub_10001060(this, a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x10001100
int __thiscall sub_10001100(void **this)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  return sub_10005DF8(this);
}

// Address: 0x10001140
void **__thiscall sub_10001140(void **this, char a2)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  sub_10005DF8(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001190
int __thiscall sub_10001190(int this, struct std::exception *a2)
{
  std::exception::exception((std::exception *)this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  *(_DWORD *)(this + 36) = 15;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 16) = 0;
  sub_10003FF0((char *)a2 + 12, 0, -1);
  return this;
}

// Address: 0x10001210
_DWORD *__stdcall sub_10001210(_DWORD *a1, int a2)
{
  sub_10003D50(a1 + 1);
  *a1 = &data_buffer::`vftable';
  sub_100040D0(a2);
  return a1;
}

// Address: 0x10001270
void __thiscall sub_10001270(void **this)
{
  void *v2; // [esp-4h] [ebp-8h]

  *this = &data_buffer::`vftable';
  if ( *(this + 4) != nullptr )
    operator delete(*(this + 4));
  v2 = *(this + 1);
  *(this + 4) = nullptr;
  *(this + 5) = nullptr;
  *(this + 6) = nullptr;
  operator delete(v2);
}

// Address: 0x100012B0
void **__thiscall sub_100012B0(void **this, char a2)
{
  void *v4; // [esp-4h] [ebp-8h]

  *this = &data_buffer::`vftable';
  if ( *(this + 4) != nullptr )
    operator delete(*(this + 4));
  v4 = *(this + 1);
  *(this + 4) = nullptr;
  *(this + 5) = nullptr;
  *(this + 6) = nullptr;
  operator delete(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001300
bool __cdecl sub_10001300(DWORD NumberOfBytesRead)
{
  DWORD v1; // ebp
  const WCHAR *v2; // eax
  HANDLE FileW; // edi
  int v5; // esi
  DWORD v6; // ebx
  int v7; // esi

  v1 = NumberOfBytesRead;
  if ( *(_DWORD *)(NumberOfBytesRead + 52) < 8u )
    v2 = (const WCHAR *)(NumberOfBytesRead + 32);
  else
    v2 = *(const WCHAR **)(NumberOfBytesRead + 32);
  FileW = CreateFileW(v2, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
    return false;
  v5 = *(_DWORD *)(v1 + 84);
  v6 = *(_DWORD *)(v5 + 20) - *(_DWORD *)(v5 + 16);
  if ( v6 == 0 )
    _invalid_parameter_noinfo();
  if ( ReadFile(FileW, *(LPVOID *)(v5 + 16), v6, &NumberOfBytesRead, nullptr) )
  {
    CloseHandle(FileW);
    v7 = *(_DWORD *)(v1 + 84);
    if ( (unsigned int)(*(_DWORD *)(v7 + 20) - *(_DWORD *)(v7 + 16)) >= 0x400 )
    {
      if ( *(_DWORD *)(v7 + 20) == *(_DWORD *)(v7 + 16) )
        _invalid_parameter_noinfo();
      return *(_WORD *)(*(_DWORD *)(v7 + 16) + 512) != 0xAA55;
    }
    else
    {
      return true;
    }
  }
  else
  {
    CloseHandle(FileW);
    return false;
  }
}

// Address: 0x100013C0
char __cdecl sub_100013C0(int a1)
{
  int v1; // ecx
  int v2; // edi
  const WCHAR *v3; // eax
  HANDLE FileW; // esi
  HANDLE v6; // eax
  void *v7; // esi
  int v8; // [esp-4h] [ebp-A4Ch]
  DWORD BytesReturned; // [esp+14h] [ebp-A34h] BYREF
  _BYTE OutBuffer[8]; // [esp+18h] [ebp-A30h] BYREF
  int v11; // [esp+20h] [ebp-A28h]
  __int64 v12; // [esp+28h] [ebp-A20h]
  WCHAR FileName[260]; // [esp+38h] [ebp-A10h] BYREF
  _BYTE v14[4]; // [esp+240h] [ebp-808h] BYREF
  int v15; // [esp+244h] [ebp-804h]

  v2 = v1;
  if ( *(_DWORD *)(a1 + 80) < 8u )
    v3 = (const WCHAR *)(a1 + 60);
  else
    v3 = *(const WCHAR **)(a1 + 60);
  FileW = CreateFileW(v3, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
    return 0;
  if ( !DeviceIoControl(FileW, 0x560000u, nullptr, 0, OutBuffer, 0x20u, &BytesReturned, nullptr) )
  {
    CloseHandle(FileW);
    return 0;
  }
  CloseHandle(FileW);
  v8 = v11;
  *(_QWORD *)(v2 + 16) = v12 / 512;
  wsprintfW(FileName, L"\\\\.\\PhysicalDrive%d", v8);
  v6 = CreateFileW(FileName, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  v7 = v6;
  if ( v6 == (HANDLE)-1 )
    return 0;
  if ( DeviceIoControl(v6, 0x7400Cu, nullptr, 0, v14, 0x800u, &BytesReturned, nullptr) )
  {
    CloseHandle(v7);
    *(_DWORD *)(v2 + 12) = v15;
    strcpy_s((char *)(v2 + 32), 0x20u, "$MediawebBootimage");
    return 1;
  }
  else
  {
    CloseHandle(v7);
    return 0;
  }
}

// Address: 0x10001500
char __usercall sub_10001500@<al>(int a1@<ebx>, int a2, volatile signed __int32 *a3)
{
  int v3; // esi
  int v4; // edi
  _BYTE v6[5]; // [esp+10h] [ebp-34h]
  _DWORD v7[2]; // [esp+20h] [ebp-24h] BYREF
  __int64 v8; // [esp+28h] [ebp-1Ch]
  int v9; // [esp+30h] [ebp-14h]
  volatile signed __int32 *v10; // [esp+34h] [ebp-10h]
  int v11; // [esp+40h] [ebp-4h]

  v11 = 0;
  *(_DWORD *)&v6[1] = 2;
  v7[1] = 0;
  v6[0] = 1;
  v7[0] = *(_DWORD *)v6;
  v8 = 0;
  if ( a3 != nullptr )
    _InterlockedExchangeAdd(a3 + 2, 1u);
  v10 = a3;
  v9 = a2;
  LOBYTE(v11) = 1;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = sub_10004820(v3, *(_DWORD *)(v3 + 4), v7);
  sub_100048C0(a1);
  *(_DWORD *)(v3 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  LOBYTE(v11) = 0;
  if ( a3 != nullptr && _InterlockedExchangeAdd(a3 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))a3)(a3);
    if ( _InterlockedExchangeAdd(a3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*a3 + 4))(a3);
  }
  v11 = -1;
  if ( a3 != nullptr && _InterlockedExchangeAdd(a3 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))a3)(a3);
    if ( _InterlockedExchangeAdd(a3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*a3 + 4))(a3);
  }
  return 1;
}

// Address: 0x10001640
int __usercall sub_10001640@<eax>(int result@<eax>)
{
  volatile signed __int32 *v1; // esi

  v1 = *(volatile signed __int32 **)(result + 20);
  if ( v1 != nullptr && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    result = (int)(v1 + 3);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      return (*(int (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return result;
}

// Address: 0x10001680
char __cdecl sub_10001680(
        int a1,
        int a2,
        char a3,
        char *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        volatile signed __int32 *a11)
{
  int v11; // eax
  volatile signed __int32 *v12; // esi
  int *v13; // esi
  int v14; // ecx
  unsigned int v15; // ebp
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // ebx
  size_t v19; // esi
  const void **v20; // edi
  const void *v21; // edi
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int v24; // edi
  size_t v25; // esi
  int *v26; // eax
  int v27; // ebp
  char **v28; // eax
  const char *v29; // eax
  int v30; // eax
  int v31; // eax
  volatile signed __int32 *v33; // esi
  int *v34; // [esp+14h] [ebp-D4h]
  int v35; // [esp+14h] [ebp-D4h]
  int v36; // [esp+18h] [ebp-D0h] BYREF
  int v37; // [esp+1Ch] [ebp-CCh]
  _BYTE v38[13]; // [esp+20h] [ebp-C8h]
  __int16 v39; // [esp+2Dh] [ebp-BBh]
  char v40; // [esp+2Fh] [ebp-B9h]
  int v41; // [esp+30h] [ebp-B8h] BYREF
  int v42; // [esp+34h] [ebp-B4h]
  int v43; // [esp+38h] [ebp-B0h] BYREF
  int v44; // [esp+3Ch] [ebp-ACh]
  __int64 v45; // [esp+40h] [ebp-A8h]
  int v46; // [esp+48h] [ebp-A0h]
  int v47; // [esp+4Ch] [ebp-9Ch]
  int v48; // [esp+50h] [ebp-98h]
  char Source[128]; // [esp+54h] [ebp-94h] BYREF
  int v50; // [esp+E4h] [ebp-4h]

  v48 = a1;
  v50 = 1;
  v11 = a10;
  if ( (unsigned int)(*(_DWORD *)(a10 + 20) - *(_DWORD *)(a10 + 16)) < 0x800 )
  {
    LOBYTE(v50) = 0;
    v12 = a11;
    if ( a11 != nullptr && _InterlockedExchangeAdd(a11 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v12 + 4))(v12);
    }
    if ( a9 < 0x10 )
      return 0;
    goto LABEL_52;
  }
  v13 = (int *)(a10 + 16);
  if ( *(_DWORD *)(a10 + 20) == *(_DWORD *)(a10 + 16) )
  {
    _invalid_parameter_noinfo();
    v11 = a10;
  }
  v14 = *v13;
  if ( *(_WORD *)(*v13 + 510) != 0xAA55 || *(_DWORD *)(v14 + 514) != 1400005704 )
  {
    LOBYTE(v50) = 0;
    v33 = a11;
    if ( a11 != nullptr && _InterlockedExchangeAdd(a11 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v33)(v33);
      if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v33 + 4))(v33);
    }
    if ( a9 < 0x10 )
      return 0;
LABEL_52:
    operator delete(a4);
    return 0;
  }
  v15 = (*(unsigned __int8 *)(v14 + 497) + 1) << 9;
  if ( v15 == 0 )
    v15 = 2048;
  if ( *(_DWORD *)(v11 + 20) - *(_DWORD *)(v11 + 16) <= v15 )
  {
    LOBYTE(v50) = 0;
    sub_10003E40();
    sub_10003CC0(&a3);
    return 0;
  }
  v16 = operator new(0x1Cu);
  LOBYTE(v50) = 2;
  if ( v16 != nullptr )
    v17 = sub_10001210(v16, v15);
  else
    v17 = nullptr;
  LOBYTE(v50) = 1;
  v41 = 0;
  v42 = 0;
  sub_10004EE0(&v41, v17);
  LOBYTE(v50) = 3;
  v18 = v41;
  v19 = *(_DWORD *)(v41 + 20) - *(_DWORD *)(v41 + 16);
  v20 = (const void **)(a10 + 16);
  if ( *(_DWORD *)(a10 + 20) == *(_DWORD *)(a10 + 16) )
    _invalid_parameter_noinfo();
  v21 = *v20;
  if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v18 + 16) )
    _invalid_parameter_noinfo();
  memcpy_0(*(void **)(v18 + 16), v21, v19);
  v22 = operator new(0x1Cu);
  LOBYTE(v50) = 4;
  if ( v22 != nullptr )
    v23 = sub_10001210(v22, *(_DWORD *)(a10 + 20) - *(_DWORD *)(a10 + 16) - v15);
  else
    v23 = nullptr;
  LOBYTE(v50) = 3;
  v36 = 0;
  v37 = 0;
  sub_10004EE0(&v36, v23);
  v24 = v36;
  v25 = *(_DWORD *)(v36 + 20) - *(_DWORD *)(v36 + 16);
  v26 = (int *)(a10 + 16);
  v34 = (int *)(a10 + 16);
  if ( *(_DWORD *)(a10 + 20) == *(_DWORD *)(a10 + 16) )
  {
    _invalid_parameter_noinfo();
    v26 = v34;
  }
  v35 = *v26;
  if ( *(_DWORD *)(v24 + 20) == *(_DWORD *)(v24 + 16) )
    _invalid_parameter_noinfo();
  memcpy_0(*(void **)(v24 + 16), (const void *)(v15 + v35), v25);
  if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v18 + 16) )
    _invalid_parameter_noinfo();
  v27 = *(_DWORD *)(v18 + 16);
  *(_WORD *)(v27 + 506) = 769;
  *(_BYTE *)(v27 + 528) = 48;
  *(_DWORD *)(v27 + 552) = 65792;
  *(_DWORD *)(v27 + 568) = 127;
  *(_DWORD *)(v27 + 536) = 0x4000000;
  *(_DWORD *)(v27 + 540) = a2;
  strcpy(Source, "BOOT_IMAGE=PICACopy initrd=PICACopy.gz quiet max_loop=255 vga=769");
  memset(&Source[66], 0, 0x3Du);
  if ( a8 != 0 )
  {
    v28 = (char **)a4;
    if ( a9 < 0x10 )
      v28 = &a4;
    if ( *(_BYTE *)v28 != 32 )
      strcat_s(Source, 0x7Fu, " ");
    v29 = a4;
    if ( a9 < 0x10 )
      v29 = (const char *)&a4;
    strcat_s(Source, 0x7Fu, v29);
  }
  if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v18 + 16) )
    _invalid_parameter_noinfo();
  strcpy_s((char *)(*(_DWORD *)(v18 + 16) + 256), *(_DWORD *)(v27 + 568), Source);
  *(_DWORD *)&v38[1] = 1;
  *(_DWORD *)&v38[9] = 0;
  *(_DWORD *)&v38[5] = 0;
  v39 = 0;
  v40 = 0;
  v44 = 0x10000;
  v30 = v42;
  v38[0] = 2;
  v43 = *(_DWORD *)v38;
  v45 = 0;
  if ( v42 != 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v42 + 8), 1u);
  v47 = v30;
  v46 = v18;
  LOBYTE(v50) = 6;
  sub_10003FB0();
  LOBYTE(v50) = 5;
  sub_10001640((int)&v43);
  v44 = 0x100000;
  v31 = v37;
  *(_WORD *)v38 = 259;
  v43 = *(_DWORD *)v38;
  v45 = 0;
  if ( v37 != 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 8), 1u);
  v47 = v31;
  v46 = v36;
  LOBYTE(v50) = 7;
  sub_10003FB0();
  LOBYTE(v50) = 5;
  sub_10001640((int)&v43);
  LOBYTE(v50) = 3;
  sub_10003E40();
  LOBYTE(v50) = 1;
  sub_10003E40();
  LOBYTE(v50) = 0;
  sub_10003E40();
  sub_10003CC0(&a3);
  return 1;
}

// Address: 0x10001BA0
char __usercall sub_10001BA0@<al>(int a1@<ebx>, int a2, volatile signed __int32 *a3)
{
  int v3; // esi
  int v4; // edi
  _BYTE v6[5]; // [esp+10h] [ebp-34h]
  _DWORD v7[2]; // [esp+20h] [ebp-24h] BYREF
  __int64 v8; // [esp+28h] [ebp-1Ch]
  int v9; // [esp+30h] [ebp-14h]
  volatile signed __int32 *v10; // [esp+34h] [ebp-10h]
  int v11; // [esp+40h] [ebp-4h]

  v11 = 0;
  *(_DWORD *)&v6[1] = 1;
  v7[1] = 0x4000000;
  v6[0] = 4;
  v7[0] = *(_DWORD *)v6;
  v8 = 0;
  if ( a3 != nullptr )
    _InterlockedExchangeAdd(a3 + 2, 1u);
  v10 = a3;
  v9 = a2;
  LOBYTE(v11) = 1;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = sub_10004820(v3, *(_DWORD *)(v3 + 4), v7);
  sub_100048C0(a1);
  *(_DWORD *)(v3 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  LOBYTE(v11) = 0;
  if ( a3 != nullptr && _InterlockedExchangeAdd(a3 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))a3)(a3);
    if ( _InterlockedExchangeAdd(a3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*a3 + 4))(a3);
  }
  v11 = -1;
  if ( a3 != nullptr && _InterlockedExchangeAdd(a3 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))a3)(a3);
    if ( _InterlockedExchangeAdd(a3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*a3 + 4))(a3);
  }
  return 1;
}

// Address: 0x10001CE0
_DWORD *__cdecl sub_10001CE0(
        int a1,
        int a2,
        void *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        volatile signed __int32 *a10,
        char a11,
        volatile signed __int32 *a12,
        int a13,
        volatile signed __int32 *a14)
{
  int v14; // ebp
  volatile signed __int32 *v15; // ebx
  int *v16; // edi
  _DWORD *v17; // edi
  volatile signed __int32 *v18; // esi
  volatile signed __int32 *v19; // esi
  volatile signed __int32 *v20; // esi
  int v22; // eax
  volatile signed __int32 *v23; // esi
  volatile signed __int32 *v24; // esi
  volatile signed __int32 *v25; // esi
  _DWORD *v26; // esi
  _DWORD *v27; // edi
  int *v28; // esi
  _DWORD *v29; // ebx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // eax
  _DWORD *v36; // eax
  int v37; // esi
  size_t v38; // edi
  int v39; // esi
  _DWORD *v40; // edi
  int *v41; // ebx
  _DWORD *v42; // ebp
  _DWORD *v43; // ebp
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  void **v50; // eax
  int v51; // ecx
  int v52; // ecx
  int v53; // eax
  char v54; // [esp-24h] [ebp-80h] BYREF
  char *v55; // [esp-20h] [ebp-7Ch]
  int v56; // [esp-1Ch] [ebp-78h]
  int v57; // [esp-18h] [ebp-74h]
  int v58; // [esp-14h] [ebp-70h]
  int v59; // [esp-10h] [ebp-6Ch]
  unsigned int v60; // [esp-Ch] [ebp-68h]
  int v61; // [esp-8h] [ebp-64h] BYREF
  int *v62; // [esp-4h] [ebp-60h]
  int v63; // [esp+18h] [ebp-44h]
  size_t Size; // [esp+1Ch] [ebp-40h]
  void *Src; // [esp+20h] [ebp-3Ch]
  int v66; // [esp+24h] [ebp-38h]
  int v67; // [esp+28h] [ebp-34h]
  _DWORD v68[2]; // [esp+2Ch] [ebp-30h] BYREF
  int v69[5]; // [esp+34h] [ebp-28h] BYREF
  _DWORD *v70; // [esp+48h] [ebp-14h]
  int v71; // [esp+58h] [ebp-4h]

  v67 = a1;
  v66 = 0;
  v71 = 4;
  sub_10003EE0(v69);
  LOBYTE(v71) = 5;
  v61 = 0;
  v62 = nullptr;
  v14 = a9;
  Size = (size_t)&v61;
  v15 = a10;
  if ( a10 != nullptr )
    _InterlockedExchangeAdd(a10 + 2, 1u);
  v16 = v62;
  if ( v62 != nullptr && _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 0 )
  {
    (*(void (__thiscall **)(int *, int))*v16)(v16, v61);
    if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(int *))(*v16 + 4))(v16);
  }
  if ( sub_10001500((int)v69, v14, v15) == 0 )
  {
    v17 = (_DWORD *)v67;
    *(_DWORD *)(v67 + 4) = 0;
    *v17 = 0;
    v66 = 1;
    LOBYTE(v71) = 4;
    sub_10003F50(v69);
    LOBYTE(v71) = 3;
    v18 = a10;
    if ( a10 != nullptr && _InterlockedExchangeAdd(a10 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v18 + 4))(v18);
    }
    LOBYTE(v71) = 2;
    v19 = a12;
    if ( a12 != nullptr && _InterlockedExchangeAdd(a12 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v19 + 4))(v19);
    }
    LOBYTE(v71) = 1;
    v20 = a14;
    if ( a14 != nullptr && _InterlockedExchangeAdd(a14 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v20 + 4))(v20);
    }
    if ( a8 >= 0x10 )
      operator delete(a3);
    return v17;
  }
  Size = (size_t)&v61;
  sub_10003DE0();
  Src = &v54;
  LOBYTE(v71) = 6;
  v60 = 15;
  v59 = 0;
  LOBYTE(v55) = 0;
  sub_10003FF0(&a2, 0, -1);
  v22 = *(_DWORD *)(a13 + 20) - *(_DWORD *)(a13 + 16);
  LOBYTE(v71) = 5;
  if ( sub_10001680((int)v69, v22, v54, v55, v56, v57, v58, v59, v60, v61, v62) != 0 )
  {
    Size = (size_t)&v61;
    sub_10003DE0();
    if ( sub_10001BA0((int)v69, v61, v62) != 0 )
    {
      v27 = (_DWORD *)*v70;
      v28 = (int *)v69[0];
      v63 = 512;
      while ( 1 )
      {
        v29 = v70;
        if ( v28 == nullptr || v28 != (int *)v69[0] )
          _invalid_parameter_noinfo();
        if ( v27 == v29 )
          break;
        if ( v28 != nullptr )
        {
          v30 = *v28;
        }
        else
        {
          _invalid_parameter_noinfo();
          v30 = 0;
        }
        if ( v27 == *(_DWORD **)(v30 + 20) )
          _invalid_parameter_noinfo();
        v31 = *(_DWORD *)(v27[6] + 20) - *(_DWORD *)(v27[6] + 16);
        if ( v28 != nullptr )
        {
          v32 = *v28;
        }
        else
        {
          _invalid_parameter_noinfo();
          v32 = 0;
        }
        if ( v27 == *(_DWORD **)(v32 + 20) )
          _invalid_parameter_noinfo();
        v27[5] = (unsigned int)(v31 + 511) >> 9 << 9;
        if ( v28 != nullptr )
        {
          v33 = *v28;
        }
        else
        {
          _invalid_parameter_noinfo();
          v33 = 0;
        }
        if ( v27 == *(_DWORD **)(v33 + 20) )
          _invalid_parameter_noinfo();
        v63 += v27[5];
        if ( v28 != nullptr )
        {
          v34 = *v28;
        }
        else
        {
          _invalid_parameter_noinfo();
          v34 = 0;
        }
        if ( v27 == *(_DWORD **)(v34 + 20) )
          _invalid_parameter_noinfo();
        v27 = (_DWORD *)*v27;
      }
      v35 = operator new(0x1Cu);
      Size = (size_t)v35;
      LOBYTE(v71) = 7;
      if ( v35 != nullptr )
        v36 = sub_10001210(v35, v63);
      else
        v36 = nullptr;
      LOBYTE(v71) = 5;
      v68[0] = 0;
      v68[1] = 0;
      sub_10004EE0(v68, v36);
      LOBYTE(v71) = 8;
      v37 = v68[0];
      v38 = *(_DWORD *)(v68[0] + 20) - *(_DWORD *)(v68[0] + 16);
      if ( v38 == 0 )
        _invalid_parameter_noinfo();
      memset(*(void **)(v37 + 16), 0, v38);
      if ( *(_DWORD *)(v37 + 20) == *(_DWORD *)(v37 + 16) )
        _invalid_parameter_noinfo();
      v39 = *(_DWORD *)(v37 + 16);
      *(_WORD *)(v39 + 4) = 0;
      *(_WORD *)(v39 + 6) = 1;
      *(_WORD *)(v39 + 8) = 4096;
      *(_DWORD *)v39 = -1437227611;
      *(_WORD *)(v39 + 10) = -16;
      *(_WORD *)(v39 + 12) = 4128;
      *(_WORD *)(v39 + 14) = 0;
      v40 = (_DWORD *)*v70;
      v41 = (int *)v69[0];
      v63 = 512;
      while ( 1 )
      {
        v42 = v70;
        if ( v41 == nullptr || v41 != (int *)v69[0] )
          _invalid_parameter_noinfo();
        if ( v40 == v42 )
          break;
        v43 = (_DWORD *)(16 * *(unsigned __int8 *)(v39 + 16) + v39 + 24);
        if ( v41 != nullptr )
        {
          v44 = *v41;
        }
        else
        {
          _invalid_parameter_noinfo();
          v44 = 0;
        }
        if ( v40 == *(_DWORD **)(v44 + 20) )
          _invalid_parameter_noinfo();
        *v43 = v40[2];
        v43[1] = v40[3];
        v43[2] = v40[4];
        v43[3] = v40[5];
        v45 = v63;
        v43[2] = v63;
        v63 = v43[3] + v45;
        if ( v41 != nullptr )
        {
          v46 = *v41;
        }
        else
        {
          _invalid_parameter_noinfo();
          v46 = 0;
        }
        if ( v40 == *(_DWORD **)(v46 + 20) )
          _invalid_parameter_noinfo();
        Size = *(_DWORD *)(v40[6] + 20) - *(_DWORD *)(v40[6] + 16);
        if ( v41 != nullptr )
        {
          v47 = *v41;
        }
        else
        {
          _invalid_parameter_noinfo();
          v47 = 0;
        }
        if ( v40 == *(_DWORD **)(v47 + 20) )
          _invalid_parameter_noinfo();
        v48 = v40[6];
        v49 = *(_DWORD *)(v48 + 20);
        v50 = (void **)(v48 + 4);
        v51 = v49 - (_DWORD)v50[3];
        Src = v50;
        if ( v51 == 0 )
        {
          _invalid_parameter_noinfo();
          v50 = (void **)Src;
        }
        v52 = *(_DWORD *)(v68[0] + 20) - *(_DWORD *)(v68[0] + 16);
        Src = v50[3];
        if ( v52 == 0 )
          _invalid_parameter_noinfo();
        memcpy_0((void *)(v43[2] + *(_DWORD *)(v68[0] + 16)), Src, Size);
        ++*(_BYTE *)(v39 + 16);
        if ( v41 != nullptr )
        {
          v53 = *v41;
        }
        else
        {
          _invalid_parameter_noinfo();
          v53 = 0;
        }
        if ( v40 == *(_DWORD **)(v53 + 20) )
          _invalid_parameter_noinfo();
        v40 = (_DWORD *)*v40;
      }
      v26 = (_DWORD *)v67;
      sub_10003DE0();
      v66 = 1;
      LOBYTE(v71) = 5;
      sub_10003E40();
      LOBYTE(v71) = 4;
      sub_10003F50(v69);
      LOBYTE(v71) = 3;
      sub_10003E40();
      LOBYTE(v71) = 2;
      sub_10003E40();
      LOBYTE(v71) = 1;
      sub_10003E40();
      if ( a8 < 0x10 )
        return v26;
      v62 = (int *)a3;
    }
    else
    {
      v26 = (_DWORD *)v67;
      v62 = v69;
      *(_DWORD *)(v67 + 4) = 0;
      *v26 = 0;
      v66 = 1;
      LOBYTE(v71) = 4;
      sub_10003F50(v62);
      LOBYTE(v71) = 3;
      sub_10003E40();
      LOBYTE(v71) = 2;
      sub_10003E40();
      LOBYTE(v71) = 1;
      sub_10003E40();
      if ( a8 < 0x10 )
        return v26;
      v62 = (int *)a3;
    }
    operator delete(v62);
    return v26;
  }
  v17 = (_DWORD *)v67;
  v62 = v69;
  *(_DWORD *)(v67 + 4) = 0;
  *v17 = 0;
  v66 = 1;
  LOBYTE(v71) = 4;
  sub_10003F50(v62);
  LOBYTE(v71) = 3;
  v23 = a10;
  if ( a10 != nullptr && _InterlockedExchangeAdd(a10 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v23)(v23);
    if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v23 + 4))(v23);
  }
  LOBYTE(v71) = 2;
  v24 = a12;
  if ( a12 != nullptr && _InterlockedExchangeAdd(a12 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v24)(v24);
    if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v24 + 4))(v24);
  }
  LOBYTE(v71) = 1;
  v25 = a14;
  if ( a14 != nullptr && _InterlockedExchangeAdd(a14 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v25)(v25);
    if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v25 + 4))(v25);
  }
  if ( a8 < 0x10 )
    return v17;
  operator delete(a3);
  return v17;
}

// Address: 0x100023D0
char __thiscall sub_100023D0(_DWORD *this)
{
  volatile signed __int32 *v2; // esi
  _DWORD *v4; // edi
  HANDLE FileW; // esi
  DWORD v6; // edi
  LPCVOID *v7; // ebp
  BOOL v8; // eax
  int v9; // [esp-2Ch] [ebp-278h] BYREF
  void *v10; // [esp-28h] [ebp-274h]
  int v11; // [esp-24h] [ebp-270h]
  int v12; // [esp-20h] [ebp-26Ch]
  int v13; // [esp-1Ch] [ebp-268h]
  int v14; // [esp-18h] [ebp-264h]
  unsigned int v15; // [esp-14h] [ebp-260h]
  _DWORD v16[2]; // [esp-10h] [ebp-25Ch] BYREF
  volatile signed __int32 *v17[2]; // [esp-8h] [ebp-254h] BYREF
  int v18; // [esp+0h] [ebp-24Ch] BYREF
  volatile signed __int32 *v19; // [esp+4h] [ebp-248h]
  int v20; // [esp+18h] [ebp-234h] BYREF
  volatile signed __int32 *v21; // [esp+1Ch] [ebp-230h]
  int *v22; // [esp+20h] [ebp-22Ch]
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-228h] BYREF
  _DWORD *v24; // [esp+28h] [ebp-224h]
  volatile signed __int32 **v25; // [esp+2Ch] [ebp-220h]
  int *v26; // [esp+30h] [ebp-21Ch]
  WCHAR FileName[260]; // [esp+34h] [ebp-218h] BYREF
  int v28; // [esp+248h] [ebp-4h]

  v26 = &v18;
  sub_10003DE0();
  v28 = 0;
  v25 = v17;
  sub_10003DE0();
  LOBYTE(v28) = 1;
  v24 = v16;
  sub_10003DE0();
  v22 = &v9;
  LOBYTE(v28) = 2;
  v15 = 15;
  v14 = 0;
  LOBYTE(v10) = 0;
  sub_10003FF0(this, 0, -1);
  v28 = -1;
  sub_10001CE0(
    (int)&v20,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16[0],
    (volatile signed __int32 *)v16[1],
    (char)v17[0],
    v17[1],
    v18,
    v19);
  if ( v20 == 0 )
  {
    v28 = -1;
    v2 = v21;
    if ( v21 == nullptr || _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) != 0 )
      return 0;
    goto LABEL_4;
  }
  if ( *(this + 20) < 8u )
    v4 = this + 15;
  else
    v4 = (_DWORD *)*(this + 15);
  wsprintfW(FileName, L"%s\\:%s:$DATA", v4, L"$MediawebBootimage");
  FileW = CreateFileW(FileName, 0x40000000u, 0, nullptr, 2u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
  {
    v28 = -1;
    v2 = v21;
    if ( v21 == nullptr || _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) != 0 )
      return 0;
LABEL_4:
    (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    return 0;
  }
  v6 = *(_DWORD *)(v20 + 20) - *(_DWORD *)(v20 + 16);
  v7 = (LPCVOID *)(v20 + 16);
  if ( v6 == 0 )
    _invalid_parameter_noinfo();
  v8 = WriteFile(FileW, *v7, v6, &NumberOfBytesWritten, nullptr);
  v19 = (volatile signed __int32 *)FileW;
  if ( v8 )
  {
    CloseHandle((HANDLE)v19);
    MoveFileExW(FileName, nullptr, 4u);
    v28 = -1;
    sub_10003E40();
    return 1;
  }
  else
  {
    CloseHandle((HANDLE)v19);
    DeleteFileW(FileName);
    v28 = -1;
    sub_10003E40();
    return 0;
  }
}

// Address: 0x10002600
char __thiscall sub_10002600(_DWORD *NumberOfBytesRead)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int v4; // esi
  size_t v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebp
  int v9; // esi
  size_t v10; // edi
  int v11; // esi
  size_t v12; // edi
  DWORD v13; // eax
  int v14; // esi
  int v15; // ecx
  int v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // esi
  const void *v20; // esi
  int v21; // edi
  const WCHAR *v22; // ebx
  HANDLE FileW; // esi
  int v24; // ebp
  DWORD v25; // edi
  DWORD NumberOfBytesWritten; // [esp+14h] [ebp-10h] BYREF
  int v28; // [esp+20h] [ebp-4h]

  v2 = operator new(0x1Cu);
  NumberOfBytesWritten = (DWORD)v2;
  v28 = 0;
  if ( v2 != nullptr )
    v3 = sub_10001210(v2, 0x2000);
  else
    v3 = nullptr;
  v28 = -1;
  sub_10004EE0(NumberOfBytesRead + 21, v3);
  v4 = *(NumberOfBytesRead + 21);
  v5 = *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16);
  if ( v5 == 0 )
    _invalid_parameter_noinfo();
  memset(*(void **)(v4 + 16), 0, v5);
  v6 = operator new(0x1Cu);
  NumberOfBytesWritten = (DWORD)v6;
  v28 = 1;
  if ( v6 != nullptr )
    v7 = sub_10001210(v6, 0x2000);
  else
    v7 = nullptr;
  v28 = -1;
  v8 = NumberOfBytesRead + 23;
  sub_10004EE0(NumberOfBytesRead + 23, v7);
  v9 = *v8;
  v10 = *(_DWORD *)(v9 + 20) - *(_DWORD *)(v9 + 16);
  if ( *(_DWORD *)(*v8 + 20) == *(_DWORD *)(*v8 + 16) )
    _invalid_parameter_noinfo();
  memset(*(void **)(v9 + 16), 0, v10);
  if ( !sub_10001300((DWORD)NumberOfBytesRead)
    || *(_DWORD *)(*(NumberOfBytesRead + 25) + 20) - *(_DWORD *)(*(NumberOfBytesRead + 25) + 16) > (unsigned int)(*(_DWORD *)(*v8 + 20) - *(_DWORD *)(*v8 + 16)) )
  {
    return 0;
  }
  v11 = *(NumberOfBytesRead + 25);
  v12 = *(_DWORD *)(v11 + 20) - *(_DWORD *)(v11 + 16);
  if ( v12 == 0 )
    _invalid_parameter_noinfo();
  v13 = *(_DWORD *)(v11 + 16);
  v14 = *v8 + 4;
  v15 = *(_DWORD *)(*v8 + 20) - *(_DWORD *)(*v8 + 16);
  NumberOfBytesWritten = v13;
  if ( v15 == 0 )
    _invalid_parameter_noinfo();
  memcpy_0(*(void **)(v14 + 12), (const void *)NumberOfBytesWritten, v12);
  v16 = *v8 + 4;
  if ( *(_DWORD *)(*v8 + 20) == *(_DWORD *)(*v8 + 16) )
    _invalid_parameter_noinfo();
  NumberOfBytesWritten = *(_DWORD *)(v16 + 12) + 512;
  if ( *(_WORD *)NumberOfBytesWritten != 0xAA55 )
    return 0;
  v17 = *(NumberOfBytesRead + 21);
  v18 = *(_DWORD *)(v17 + 20);
  v19 = v17 + 4;
  if ( v18 == *(_DWORD *)(v19 + 12) )
    _invalid_parameter_noinfo();
  v20 = *(const void **)(v19 + 12);
  v21 = *v8 + 4;
  if ( *(_DWORD *)(*v8 + 20) == *(_DWORD *)(*v8 + 16) )
    _invalid_parameter_noinfo();
  qmemcpy(*(void **)(v21 + 12), v20, 0x54u);
  if ( sub_100013C0((int)NumberOfBytesRead) == 0 || sub_100023D0(NumberOfBytesRead) == 0 )
    return 0;
  v22 = *(NumberOfBytesRead + 13) < 8u
      ? (const WCHAR *)(NumberOfBytesRead + 8)
      : (const WCHAR *)*(NumberOfBytesRead + 8);
  FileW = CreateFileW(v22, 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
    return 0;
  v24 = *v8;
  v25 = *(_DWORD *)(v24 + 20) - *(_DWORD *)(v24 + 16);
  if ( v25 == 0 )
    _invalid_parameter_noinfo();
  if ( !WriteFile(FileW, *(LPCVOID *)(v24 + 16), v25, &NumberOfBytesWritten, nullptr) )
  {
    CloseHandle(FileW);
    return 0;
  }
  CloseHandle(FileW);
  return 1;
}

// Address: 0x10002870
char __cdecl sub_10002870(int a1)
{
  HANDLE FileW; // esi
  DWORD v2; // edi
  BOOL v3; // edi
  void *v5[4]; // [esp+8h] [ebp-230h] BYREF
  LPCVOID lpBuffer; // [esp+18h] [ebp-220h]
  _BYTE *v7; // [esp+1Ch] [ebp-21Ch]
  int v8; // [esp+20h] [ebp-218h]
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-214h] BYREF
  WCHAR FileName[262]; // [esp+28h] [ebp-210h] BYREF

  wsprintfW(FileName, L"%s\\:$MediawebTemp:$DATA", a1);
  FileW = CreateFileW(FileName, 0x40000000u, 0, nullptr, 2u, 0, nullptr);
  if ( FileW != (HANDLE)-1 )
  {
    sub_10001210(v5, 0x1000000);
    v2 = v7 - (_BYTE *)lpBuffer;
    if ( v7 == lpBuffer )
      _invalid_parameter_noinfo();
    v3 = WriteFile(FileW, lpBuffer, v2, &NumberOfBytesWritten, nullptr);
    CloseHandle(FileW);
    if ( DeleteFileW(FileName) )
    {
      if ( v3 )
      {
        sub_10001270(v5);
        return 1;
      }
    }
    else
    {
      MoveFileExW(FileName, nullptr, 4u);
    }
    v5[0] = &data_buffer::`vftable';
    if ( lpBuffer != nullptr )
      operator delete((void *)lpBuffer);
    lpBuffer = nullptr;
    v7 = nullptr;
    v8 = 0;
    operator delete(v5[1]);
  }
  return 0;
}

// Address: 0x100029A0
char __cdecl sub_100029A0(int a1)
{
  LSTATUS v1; // esi
  HANDLE FirstVolumeW; // ebx
  unsigned int v3; // kr00_4
  HANDLE FileW; // eax
  int v6; // ebp
  HANDLE v7; // eax
  char v8; // [esp+17h] [ebp-839h]
  HKEY phkResult; // [esp+18h] [ebp-838h] BYREF
  DWORD cbData; // [esp+1Ch] [ebp-834h] BYREF
  int v11; // [esp+20h] [ebp-830h]
  DWORD Type; // [esp+24h] [ebp-82Ch] BYREF
  wchar_t Data[259]; // [esp+28h] [ebp-828h] BYREF
  WCHAR szVolumeName[4]; // [esp+230h] [ebp-620h] BYREF
  WCHAR DeviceName[256]; // [esp+238h] [ebp-618h] BYREF
  WCHAR FileName[260]; // [esp+438h] [ebp-418h] BYREF
  WCHAR TargetPath[262]; // [esp+640h] [ebp-210h] BYREF

  v11 = a1;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SYSTEM\\Setup", 0, 0x20019u, &phkResult) != 0 )
    return 0;
  cbData = 520;
  Type = 1;
  v1 = RegQueryValueExW(phkResult, L"SystemPartition", nullptr, &Type, (LPBYTE)Data, &cbData);
  RegCloseKey(phkResult);
  if ( v1 != 0 )
    return 0;
  Data[cbData >> 1] = 0;
  FirstVolumeW = FindFirstVolumeW(szVolumeName, 0x104u);
  if ( FirstVolumeW == (HANDLE)-1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v3 = wcslen(szVolumeName);
    if ( wcsncmp(szVolumeName, L"\\\\?\\", 4u) == 0 && szVolumeName[v3 - 1] == 92 )
    {
      szVolumeName[wcslen(szVolumeName) - 1] = 0;
      if ( QueryDosDeviceW(DeviceName, TargetPath, 0x104u) != 0 && wcscmp(Data, TargetPath) == 0 )
        break;
    }
    if ( !FindNextVolumeW(FirstVolumeW, szVolumeName, 0x104u) )
      goto LABEL_14;
  }
  wcscpy_s(Data, 0x104u, szVolumeName);
  v8 = 1;
LABEL_14:
  FindVolumeClose(FirstVolumeW);
  if ( v8 == 0 )
    return 0;
  FileW = CreateFileW(Data, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
    return 0;
  CloseHandle(FileW);
  v6 = v11;
  sub_100043E0(wcslen(Data));
  if ( sub_10002870((int)Data) == 0 )
  {
    GetWindowsDirectoryW(Data, 0x104u);
    wsprintfW(FileName, L"\\\\.\\%c:", Data[0]);
    v7 = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
    if ( v7 != (HANDLE)-1 )
    {
      CloseHandle(v7);
      if ( sub_10002870((int)FileName) != 0 )
      {
        sub_10003D20(v6 + 56);
        return 1;
      }
    }
    return 0;
  }
  sub_10004330(0, -1);
  return 1;
}

// Address: 0x10002C90
int __usercall sub_10002C90@<eax>(unsigned int a1@<ebx>, int a2)
{
  int result; // eax
  unsigned int v4; // esi
  unsigned __int8 v5; // al
  unsigned __int16 v6; // cx
  char v7; // al
  int i; // edi
  __int16 v9; // dx
  unsigned __int16 v10; // [esp+8h] [ebp-4h]
  unsigned int v11; // [esp+10h] [ebp+4h]
  unsigned int v12; // [esp+10h] [ebp+4h]

  result = -1;
  v4 = 0;
  v11 = -1;
  if ( a1 != 0 )
  {
    do
    {
      v5 = v11 ^ *(_BYTE *)(v4 + a2);
      v12 = v11 >> 8;
      v6 = v5;
      v7 = 0;
      v10 = 0;
      for ( i = 8; i != 0; --i )
      {
        v10 >>= 1;
        v9 = v6 & 1;
        v6 = (v6 >> 1) | ((v7 & 1) << 15);
        v7 = v10;
        if ( v9 != 0 )
        {
          v6 ^= 0x8320u;
          v7 = v10 ^ 0xB8;
          v10 ^= 0xEDB8u;
        }
      }
      LOWORD(v11) = v6 ^ v12;
      HIWORD(v11) = v10 ^ HIWORD(v12);
      ++v4;
    }
    while ( v4 < a1 );
    return v11;
  }
  return result;
}

// Address: 0x10002D30
unsigned int __usercall sub_10002D30@<eax>(int a1@<eax>, _BYTE *a2@<edx>)
{
  unsigned int result; // eax
  unsigned int i; // ecx
  int v5; // eax

  result = -542349436;
  for ( i = 1661155363; a1 != 0; --a1 )
  {
    *a2 ^= result;
    v5 = (i << 31) | (result >> 1);
    i = (v5 << 31) | (i >> 1);
    ++a2;
    result = i ^ v5;
  }
  return result;
}

// Address: 0x10002D70
int __cdecl sub_10002D70(_DWORD *lpBuffer, int a2, volatile signed __int32 *a3)
{
  HANDLE FileW; // eax
  void *v4; // esi
  volatile signed __int32 *v5; // esi
  DWORD FileSize; // edi
  DWORD v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // ecx
  _BYTE *v11; // edx
  int i; // esi
  int v13; // eax
  DWORD NumberOfBytesRead; // [esp+18h] [ebp-220h] BYREF
  WCHAR Filename[260]; // [esp+1Ch] [ebp-21Ch] BYREF
  int v16; // [esp+234h] [ebp-4h]

  v16 = 0;
  GetModuleFileNameW(hModule, Filename, 0x104u);
  memset(lpBuffer, 0, 0x148u);
  FileW = CreateFileW(Filename, 0x80000000, 1u, nullptr, 3u, 0, nullptr);
  v4 = FileW;
  if ( FileW == (HANDLE)-1 )
  {
    v16 = -1;
    v5 = a3;
    if ( a3 == nullptr || _InterlockedExchangeAdd(a3 + 2, 0xFFFFFFFF) != 0 )
      return 0;
    goto LABEL_4;
  }
  if ( SetFilePointer(FileW, -328, nullptr, 2u) == -1 )
  {
    CloseHandle(v4);
    v16 = -1;
    v5 = a3;
    if ( a3 == nullptr || _InterlockedExchangeAdd(a3 + 2, 0xFFFFFFFF) != 0 )
      return 0;
LABEL_4:
    (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    return 0;
  }
  if ( !ReadFile(v4, lpBuffer, 0x148u, &NumberOfBytesRead, nullptr) )
    goto LABEL_12;
  if ( a2 == 0 )
    goto LABEL_19;
  FileSize = GetFileSize(v4, nullptr);
  if ( FileSize == -1 )
    goto LABEL_12;
  SetFilePointer(v4, 0, nullptr, 0);
  sub_100040D0(FileSize);
  v8 = *(_DWORD *)(a2 + 20) - *(_DWORD *)(a2 + 16);
  if ( v8 == 0 )
    _invalid_parameter_noinfo();
  if ( !ReadFile(v4, *(LPVOID *)(a2 + 16), v8, &NumberOfBytesRead, nullptr) )
  {
LABEL_12:
    CloseHandle(v4);
    v16 = -1;
    sub_10003E40();
    return 0;
  }
  else
  {
LABEL_19:
    CloseHandle(v4);
    v9 = -542349436;
    v10 = 1661155363;
    v11 = lpBuffer;
    for ( i = 328; i != 0; --i )
    {
      *v11 ^= v9;
      v13 = (v10 << 31) | (v9 >> 1);
      v10 = (v13 << 31) | (v10 >> 1);
      ++v11;
      v9 = v10 ^ v13;
    }
    if ( *lpBuffer == 1397181769 )
    {
      v16 = -1;
      sub_10003E40();
      return 1;
    }
    else
    {
      memset(lpBuffer, 0, 0x148u);
      v16 = -1;
      sub_10003E40();
      return 0;
    }
  }
}

// Address: 0x10003000
_DWORD *__cdecl sub_10003000(_DWORD *a1, int a2, size_t Size, int a4, int a5, int a6, volatile signed __int32 *a7)
{
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  unsigned int v12; // ebx
  _DWORD v14[3]; // [esp+18h] [ebp-18h] BYREF
  int v15; // [esp+2Ch] [ebp-4h]

  v15 = 1;
  if ( Size != 0 && Size + a2 <= *(_DWORD *)(a6 + 20) - *(_DWORD *)(a6 + 16) )
  {
    v7 = operator new(0x1Cu);
    v14[0] = v7;
    LOBYTE(v15) = 2;
    if ( v7 != nullptr )
      v8 = sub_10001210(v7, Size);
    else
      v8 = nullptr;
    LOBYTE(v15) = 1;
    v14[0] = 0;
    v14[1] = 0;
    sub_10004EE0(v14, v8);
    LOBYTE(v15) = 3;
    if ( *(_DWORD *)(a6 + 20) == *(_DWORD *)(a6 + 16) )
      _invalid_parameter_noinfo();
    v9 = *(_DWORD *)(a6 + 16);
    v10 = v14[0];
    if ( *(_DWORD *)(v14[0] + 20) == *(_DWORD *)(v14[0] + 16) )
      _invalid_parameter_noinfo();
    memcpy_0(*(void **)(v10 + 16), (const void *)(a2 + v9), Size);
    v11 = *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16);
    if ( v11 == 0 )
      _invalid_parameter_noinfo();
    sub_10002D30(v11, *(_BYTE **)(v10 + 16));
    v12 = *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16);
    if ( v12 == 0 )
      _invalid_parameter_noinfo();
    if ( sub_10002C90(v12, *(_DWORD *)(v10 + 16)) == a4 )
    {
      sub_10003DE0();
      LOBYTE(v15) = 1;
    }
    else
    {
      LOBYTE(v15) = 1;
      a1[1] = 0;
      *a1 = 0;
    }
    sub_10003E40();
    LOBYTE(v15) = 0;
    sub_10003E40();
    return a1;
  }
  else
  {
    a1[1] = 0;
    *a1 = 0;
    LOBYTE(v15) = 0;
    if ( a7 != nullptr && _InterlockedExchangeAdd(a7 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))a7)(a7);
      if ( _InterlockedExchangeAdd(a7 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*a7 + 4))(a7);
    }
    return a1;
  }
}

// Address: 0x10003200
int __cdecl sub_10003200(int a1)
{
  _DWORD *v1; // esi
  volatile signed __int32 *v2; // esi
  volatile signed __int32 *v3; // edi
  volatile signed __int32 *v5; // esi
  volatile signed __int32 *v6; // esi
  volatile signed __int32 *v7; // esi
  char v8; // al
  int v9; // [esp-8h] [ebp-28Ch] BYREF
  volatile signed __int32 *v10; // [esp-4h] [ebp-288h]
  int v11; // [esp+14h] [ebp-270h] BYREF
  volatile signed __int32 *v12; // [esp+18h] [ebp-26Ch]
  void *v13; // [esp+1Ch] [ebp-268h] BYREF
  volatile signed __int32 *v14; // [esp+20h] [ebp-264h]
  DWORD NumberOfBytesRead[32]; // [esp+24h] [ebp-260h] BYREF
  _DWORD v16[82]; // [esp+A4h] [ebp-1E0h] BYREF
  char Buffer[132]; // [esp+1ECh] [ebp-98h] BYREF
  int v18; // [esp+280h] [ebp-4h]

  v1 = operator new(0x1Cu);
  v13 = v1;
  v18 = 0;
  if ( v1 != nullptr )
  {
    sub_10003D50(v1 + 1);
    *v1 = &data_buffer::`vftable';
  }
  else
  {
    v1 = nullptr;
  }
  v18 = -1;
  v11 = 0;
  v12 = nullptr;
  sub_10004EE0(&v11, v1);
  v18 = 1;
  v2 = v12;
  v13 = &v9;
  v9 = 0;
  v10 = nullptr;
  if ( v12 != nullptr )
    _InterlockedExchangeAdd(v12 + 2, 1u);
  v3 = v10;
  if ( v10 != nullptr && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *, int))v3)(v3, v9);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  if ( sub_10002D70(v16, v11, v2) != 0 )
  {
    sub_100036F0(NumberOfBytesRead);
    LOBYTE(v18) = 2;
    if ( a1 >= 0 )
    {
      sprintf_s(Buffer, 0x7Fu, "com=%d", a1);
      sub_100041C0(Buffer, strlen(Buffer));
    }
    if ( sub_100029A0((int)NumberOfBytesRead) != 0 )
    {
      v13 = &v9;
      sub_10003DE0();
      sub_10003000(&v13, v16[2], v16[3], v16[4], v16[5], v9, v10);
      LOBYTE(v18) = 3;
      sub_10003E80();
      LOBYTE(v18) = 2;
      v5 = v14;
      if ( v14 != nullptr && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
      }
      v13 = &v9;
      sub_10003DE0();
      sub_10003000(&v13, v16[6], v16[7], v16[8], v16[9], v9, v10);
      LOBYTE(v18) = 4;
      sub_10003E80();
      LOBYTE(v18) = 2;
      v6 = v14;
      if ( v14 != nullptr && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
      }
      v13 = &v9;
      sub_10003DE0();
      sub_10003000(&v13, v16[10], v16[11], v16[12], v16[13], v9, v10);
      LOBYTE(v18) = 5;
      sub_10003E80();
      LOBYTE(v18) = 2;
      if ( v14 != nullptr )
      {
        v7 = v14;
        if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 0 )
        {
          (**(void (__thiscall ***)(volatile signed __int32 *))v7)(v7);
          if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 0 )
            (*(void (__thiscall **)(volatile signed __int32 *))(*v7 + 4))(v7);
        }
      }
      if ( NumberOfBytesRead[25] != 0 )
      {
        if ( NumberOfBytesRead[27] != 0 )
        {
          if ( NumberOfBytesRead[29] != 0 )
          {
            v8 = sub_10002600(NumberOfBytesRead);
            LOBYTE(v18) = 1;
            if ( v8 != 0 )
            {
              sub_10003780(NumberOfBytesRead);
              v18 = -1;
              sub_10003E40();
              return 0;
            }
            else
            {
              sub_10003780(NumberOfBytesRead);
              v18 = -1;
              sub_10003E40();
              return 5;
            }
          }
          else
          {
            LOBYTE(v18) = 1;
            sub_10003780(NumberOfBytesRead);
            v18 = -1;
            sub_10003E40();
            return 13;
          }
        }
        else
        {
          LOBYTE(v18) = 1;
          sub_10003780(NumberOfBytesRead);
          v18 = -1;
          sub_10003E40();
          return 12;
        }
      }
      else
      {
        LOBYTE(v18) = 1;
        sub_10003780(NumberOfBytesRead);
        v18 = -1;
        sub_10003E40();
        return 11;
      }
    }
    else
    {
      LOBYTE(v18) = 1;
      sub_10003780(NumberOfBytesRead);
      v18 = -1;
      if ( v2 != nullptr && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
        if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
      }
      return 20;
    }
  }
  else
  {
    v18 = -1;
    if ( v2 != nullptr && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
    return 10;
  }
}

// Address: 0x100036F0
int __stdcall sub_100036F0(int a1)
{
  *(_DWORD *)(a1 + 24) = 15;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 52) = 7;
  *(_DWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 80) = 7;
  *(_DWORD *)(a1 + 76) = 0;
  *(_WORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  return a1;
}

// Address: 0x10003780
void __stdcall sub_10003780(int a1)
{
  volatile signed __int32 *v1; // edi
  volatile signed __int32 *v2; // edi
  volatile signed __int32 *v3; // edi
  volatile signed __int32 *v4; // edi
  volatile signed __int32 *v5; // edi

  v1 = *(volatile signed __int32 **)(a1 + 120);
  if ( v1 != nullptr && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  v2 = *(volatile signed __int32 **)(a1 + 112);
  if ( v2 != nullptr && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
  }
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 != nullptr && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  v4 = *(volatile signed __int32 **)(a1 + 96);
  if ( v4 != nullptr && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
  }
  v5 = *(volatile signed __int32 **)(a1 + 88);
  if ( v5 != nullptr && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
  }
  if ( *(_DWORD *)(a1 + 80) >= 8u )
    operator delete(*(void **)(a1 + 60));
  *(_DWORD *)(a1 + 80) = 7;
  *(_DWORD *)(a1 + 76) = 0;
  *(_WORD *)(a1 + 60) = 0;
  if ( *(_DWORD *)(a1 + 52) >= 8u )
    operator delete(*(void **)(a1 + 32));
  *(_DWORD *)(a1 + 52) = 7;
  *(_DWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 32) = 0;
  if ( *(_DWORD *)(a1 + 24) >= 0x10u )
    operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 24) = 15;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 4) = 0;
}

// Address: 0x10003930
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    hModule = hinstDLL;
  return true;
}

// Address: 0x10003950
__int64 __cdecl sub_10003950(SYSTEMTIME SystemTime)
{
  struct _FILETIME FileTime; // [esp+4h] [ebp-8h] BYREF

  SystemTimeToFileTime(&SystemTime, &FileTime);
  return (__int64)(FileTime.dwLowDateTime + ((unsigned __int64)FileTime.dwHighDateTime << 32)) / 10000000;
}

// Address: 0x10003990
int __cdecl SM_PicaCopyInstall(int a1, int a2, int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  _BYTE *v6; // edx
  unsigned int i; // esi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  _BYTE *v11; // edx
  unsigned int j; // esi
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  _BYTE *v17; // edx
  unsigned int k; // esi
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  _BYTE *v22; // edx
  unsigned int m; // esi
  int v24; // eax
  SYSTEMTIME v25; // [esp-10h] [ebp-640h] BYREF
  _DWORD v26[5]; // [esp+0h] [ebp-630h] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+14h] [ebp-61Ch] BYREF
  int v28; // [esp+24h] [ebp-60Ch]
  int v29; // [esp+28h] [ebp-608h] BYREF
  int v30; // [esp+2Ch] [ebp-604h]
  int v31; // [esp+30h] [ebp-600h] BYREF
  _DWORD v32[2]; // [esp+34h] [ebp-5FCh] BYREF
  char v33; // [esp+3Ch] [ebp-5F4h]
  _DWORD v34[82]; // [esp+4ACh] [ebp-184h] BYREF
  CHAR String1[20]; // [esp+5F4h] [ebp-3Ch] BYREF
  CHAR Buffer[4]; // [esp+608h] [ebp-28h] BYREF
  int v37; // [esp+60Ch] [ebp-24h]
  int v38; // [esp+610h] [ebp-20h]
  int v39; // [esp+614h] [ebp-1Ch]
  char v40; // [esp+618h] [ebp-18h]
  _DWORD *v41; // [esp+620h] [ebp-10h]
  int v42; // [esp+62Ch] [ebp-4h]

  v41 = v26;
  v28 = a2;
  v32[1] = &CRijndael::`vftable';
  v33 = 0;
  v42 = 0;
  if ( a1 == 0 || a2 == 0 )
    return 1;
  v26[4] = &v25.wHour;
  if ( sub_10002D70(v34, 0, nullptr) == 0 )
    return 10;
  LOBYTE(v42) = 1;
  *(_DWORD *)Buffer = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v4 = -542349436;
  v5 = 1661155363;
  v6 = &v34[34];
  for ( i = 0; i < 0x40; ++i )
  {
    *v6 ^= v4;
    v8 = (v5 << 31) | (v4 >> 1);
    v5 = (v8 << 31) | (v5 >> 1);
    ++v6;
    v4 = v5 ^ v8;
  }
  sub_10005020((char *)&v34[34]);
  memset(&v34[34], 0, 0x40u);
  sub_10005860(Buffer);
  GetLocalTime(&SystemTime);
  v9 = -542349436;
  v10 = 1661155363;
  v11 = &v34[50];
  for ( j = 0; j < 0x40; ++j )
  {
    *v11 ^= v9;
    v13 = (v10 << 31) | (v9 >> 1);
    v10 = (v13 << 31) | (v10 >> 1);
    ++v11;
    v9 = v10 ^ v13;
  }
  *(_DWORD *)&v25.wSecond = v32;
  *(_DWORD *)&v25.wHour = (char *)&v31 + 2;
  sscanf_s(Buffer, (const char *const)&v34[50], &v29, (char *)&v29 + 2);
  *(_DWORD *)&v25.wYear = v29;
  *(_DWORD *)&v25.wDayOfWeek = v30;
  *(_DWORD *)&v25.wHour = v31;
  *(_DWORD *)&v25.wSecond = v32[0];
  v14 = sub_10003950(v25);
  if ( (unsigned __int64)(sub_10003950(SystemTime) - v14) >= 5 )
    return 1;
  v15 = -542349436;
  v16 = 1661155363;
  v17 = &v34[66];
  for ( k = 0; k < 0x40; ++k )
  {
    *v17 ^= v15;
    v19 = (v16 << 31) | (v15 >> 1);
    v16 = (v19 << 31) | (v16 >> 1);
    ++v17;
    v15 = v16 ^ v19;
  }
  lstrcpyA(String1, (LPCSTR)&v34[66]);
  lstrcatA(String1, Buffer);
  sub_10005020(String1);
  sub_10005860(Buffer);
  v20 = -542349436;
  v21 = 1661155363;
  v22 = &v34[18];
  for ( m = 0; m < 0x40; ++m )
  {
    *v22 ^= v20;
    v24 = (v21 << 31) | (v20 >> 1);
    v21 = (v24 << 31) | (v21 >> 1);
    ++v22;
    v20 = v21 ^ v24;
  }
  if ( lstrcmpiA(Buffer, (LPCSTR)&v34[18]) != 0 )
    return 1;
  memset(v34, 0, sizeof(v34));
  return sub_10003200(a3);
}

// Address: 0x10003C80
int __thiscall sub_10003C80(int this, void *Source)
{
  *(_DWORD *)(this + 24) = 15;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 4) = 0;
  sub_100041C0(Source, strlen((const char *)Source));
  return this;
}

// Address: 0x10003CC0
int __thiscall sub_10003CC0(int this)
{
  if ( *(_DWORD *)(this + 24) >= 0x10u )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 24) = 15;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 4) = 0;
  return 0;
}

// Address: 0x10003D20
int __userpurge sub_10003D20@<eax>(const unsigned __int16 *a1@<eax>, int a2)
{
  return sub_100043E0(wcslen(a1));
}

// Address: 0x10003D50
_DWORD *__stdcall sub_10003D50(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  return a1;
}

// Address: 0x10003DE0
_DWORD *__usercall sub_10003DE0@<eax>(int *a1@<eax>, _DWORD *a2@<esi>)
{
  int v2; // ebx
  int v3; // ebp
  volatile signed __int32 *v4; // edi

  *a2 = 0;
  a2[1] = 0;
  v2 = a1[1];
  v3 = *a1;
  if ( v2 != 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 1u);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 != nullptr && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
  }
  *a2 = v3;
  a2[1] = v2;
  return a2;
}

// Address: 0x10003E40
int __usercall sub_10003E40@<eax>(int result@<eax>)
{
  volatile signed __int32 *v1; // esi

  v1 = *(volatile signed __int32 **)(result + 4);
  if ( v1 != nullptr && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    result = (int)(v1 + 3);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      return (*(int (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return result;
}

// Address: 0x10003E80
_DWORD *__usercall sub_10003E80@<eax>(int *a1@<eax>, _DWORD *a2@<ebx>)
{
  int v2; // ebp
  int v3; // edi
  volatile signed __int32 *v4; // esi

  v2 = *a1;
  v3 = a1[1];
  if ( v3 != 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 1u);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 != nullptr && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
  }
  a2[1] = v3;
  *a2 = v2;
  return a2;
}

// Address: 0x10003EE0
_DWORD *__stdcall sub_10003EE0(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  a1[5] = sub_100041A0();
  a1[6] = 0;
  return a1;
}

// Address: 0x10003F50
void __stdcall sub_10003F50(void **a1)
{
  void *v1; // [esp-8h] [ebp-1Ch]

  sub_100047B0();
  operator delete(a1[5]);
  v1 = *a1;
  a1[5] = nullptr;
  operator delete(v1);
}

// Address: 0x10003FB0
int __usercall sub_10003FB0@<eax>(int a1@<eax>, int a2@<ebx>)
{
  int v2; // esi
  int v3; // edi
  int result; // eax

  v2 = *(_DWORD *)(a2 + 20);
  v3 = sub_10004820(v2, *(_DWORD *)(v2 + 4), a1);
  result = sub_100048C0(a2);
  *(_DWORD *)(v2 + 4) = v3;
  **(_DWORD **)(v3 + 4) = v3;
  return result;
}

// Address: 0x10003FF0
int __thiscall sub_10003FF0(int this, _DWORD *a2, unsigned int a3, char *a4)
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
    sub_10005BCD();
  v5 = (char *)(a2[5] - a3);
  if ( a4 < v5 )
    v5 = a4;
  if ( (_DWORD *)this == a2 )
  {
    sub_100042A0(&v5[a3], -1);
    sub_100042A0(0, a3);
    return this;
  }
  if ( v5 == (char *)-1 )
    sub_10005B95();
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
    sub_10004980(v5, *(_DWORD *)(this + 20));
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

// Address: 0x100040D0
unsigned int __userpurge sub_100040D0@<eax>(int *a1@<eax>, unsigned int a2)
{
  unsigned int v3; // ecx
  char *v4; // edi
  unsigned int result; // eax
  unsigned int v6; // ebx
  int *v7; // edi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // edi
  int Val; // [esp+10h] [ebp-18h] BYREF
  void *Source; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  unsigned int v14; // [esp+1Ch] [ebp-Ch]
  int v15; // [esp+20h] [ebp-8h]

  v3 = a1[3];
  v4 = (char *)a1[4];
  result = (unsigned int)&v4[-v3];
  LOBYTE(Val) = 0;
  Source = v4;
  if ( a2 <= (unsigned int)&v4[-v3] )
  {
    if ( a2 < result )
    {
      if ( v3 > (unsigned int)v4 )
        _invalid_parameter_noinfo();
      v6 = a1[3];
      v15 = *a1;
      if ( v6 > a1[4] )
        _invalid_parameter_noinfo();
      v7 = (int *)*a1;
      v13 = (int)v7;
      v14 = v6;
      if ( v7 != nullptr )
      {
        v8 = *v7;
      }
      else
      {
        _invalid_parameter_noinfo();
        v8 = 0;
      }
      v9 = a2 + v6;
      if ( v9 > *(_DWORD *)(v8 + 16) || (v7 == nullptr ? (v10 = 0) : (v10 = *v7), v9 < *(_DWORD *)(v10 + 12)) )
        _invalid_parameter_noinfo();
      return sub_10004490(v13, v9, v15, Source);
    }
  }
  else
  {
    if ( v3 > (unsigned int)v4 )
      _invalid_parameter_noinfo();
    return sub_10004510((int)a1, (int)&Val, *a1, v4);
  }
  return result;
}

// Address: 0x100041A0
_DWORD *sub_100041A0()
{
  _DWORD *result; // eax

  result = operator new(0x20u);
  if ( result != nullptr )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}

// Address: 0x100041C0
int __fastcall sub_100041C0(int a1, int a2, _BYTE *Source, char *SourceSize)
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
        return sub_10003FF0(a1, (_DWORD *)a1, Source - (_BYTE *)v6, SourceSize);
      }
    }
  }
  if ( SourceSize == (char *)-1 )
    sub_10005B95();
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
    sub_10004980(SourceSize, *(_DWORD *)(a1 + 20));
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

// Address: 0x100042A0
_DWORD *__thiscall sub_100042A0(_DWORD *this, unsigned int a2, unsigned int a3)
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
    sub_10005BCD();
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

// Address: 0x10004330
int __userpurge sub_10004330@<eax>(_DWORD *a1@<eax>, int a2@<ecx>, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  _DWORD *v8; // ecx
  void **v9; // ebp
  void *v10; // eax
  bool v11; // cf

  if ( a1[5] < a3 )
    sub_10005BCD();
  v6 = a1[5] - a3;
  if ( a4 < v6 )
    v6 = a4;
  if ( (_DWORD *)a2 == a1 )
  {
    sub_10004AF0();
    sub_10004AF0();
    return a2;
  }
  else
  {
    if ( (unsigned __int8)sub_10004B80() != 0 )
    {
      if ( a1[6] < 8u )
        v8 = a1 + 1;
      else
        v8 = (_DWORD *)a1[1];
      v9 = (void **)(a2 + 4);
      if ( *(_DWORD *)(a2 + 24) < 8u )
        v10 = (void *)(a2 + 4);
      else
        v10 = *v9;
      memcpy_s(v10, 2 * *(_DWORD *)(a2 + 24), (char *)v8 + 2 * a3, 2 * v6);
      v11 = *(_DWORD *)(a2 + 24) < 8u;
      *(_DWORD *)(a2 + 20) = v6;
      if ( !v11 )
        v9 = (void **)*v9;
      *((_WORD *)v9 + v6) = 0;
    }
    return a2;
  }
}

// Address: 0x100043E0
int __userpurge sub_100043E0@<eax>(_BYTE *a1@<eax>, _DWORD *a2@<esi>, unsigned int a3)
{
  unsigned int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // ecx
  unsigned int v9; // ecx
  void **v10; // edi
  void *v11; // eax
  bool v12; // cf

  if ( a1 != nullptr
    && ((v4 = a2[6], v5 = a2 + 1, v4 < 8) ? (v6 = a2 + 1) : (v6 = (_DWORD *)*v5),
        a1 >= (_BYTE *)v6 && (v4 < 8 ? (v7 = a2 + 1) : (v7 = (_DWORD *)*v5), (char *)v7 + 2 * a2[5] > a1)) )
  {
    if ( v4 >= 8 )
      v5 = (_DWORD *)*v5;
    return sub_10004330(a2, (int)a2, (a1 - (_BYTE *)v5) >> 1, a3);
  }
  else
  {
    if ( (unsigned __int8)sub_10004B80() != 0 )
    {
      v9 = a2[6];
      v10 = (void **)(a2 + 1);
      if ( v9 < 8 )
        v11 = a2 + 1;
      else
        v11 = *v10;
      memcpy_s(v11, 2 * v9, a1, 2 * a3);
      v12 = a2[6] < 8u;
      a2[5] = a3;
      if ( !v12 )
        v10 = (void **)*v10;
      *((_WORD *)v10 + a3) = 0;
    }
    return (int)a2;
  }
}

// Address: 0x10004490
_DWORD *__userpurge sub_10004490@<eax>(
        _DWORD *a1@<ebx>,
        _DWORD *a2@<esi>,
        int a3,
        unsigned int a4,
        int a5,
        char *Source)
{
  unsigned int v6; // eax
  char *v7; // edi
  char *v8; // ecx
  signed int v9; // eax
  char *v10; // ebp

  *a1 = 0;
  if ( a2 == nullptr || (v6 = a4, a2[3] > a4) || a4 > a2[4] )
  {
    _invalid_parameter_noinfo();
    v6 = a4;
  }
  v7 = Source;
  *a1 = *a2;
  a1[1] = v6;
  if ( a2[3] > (unsigned int)Source || (unsigned int)Source > a2[4] )
  {
    _invalid_parameter_noinfo();
    v7 = Source;
  }
  if ( *a1 == 0 || *a1 != *a2 )
    _invalid_parameter_noinfo();
  v8 = (char *)a1[1];
  if ( v8 != v7 )
  {
    v9 = a2[4] - (_DWORD)v7;
    v10 = &v8[v9];
    if ( v9 > 0 )
      memmove_s(v8, v9, v7, a2[4] - (_DWORD)v7);
    a2[4] = v10;
  }
  return a1;
}

// Address: 0x10004510
char *__userpurge sub_10004510@<eax>(unsigned int a1@<eax>, int a2, char *Val, int a4, char *Source)
{
  char *result; // eax
  unsigned int v8; // esi
  _BYTE *v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // esi
  char *v12; // edx
  unsigned int v13; // ecx
  char *v14; // edi
  char *v15; // ecx
  _BYTE *v16; // edi
  rsize_t v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  char *v20; // ebp
  char *v21; // ecx
  char *v22; // [esp+10h] [ebp-4h]
  int v23; // [esp+18h] [ebp+4h]

  result = *(char **)(a2 + 12);
  if ( result != nullptr )
    v8 = *(_DWORD *)(a2 + 20) - (_DWORD)result;
  else
    v8 = 0;
  if ( a1 != 0 )
  {
    v9 = *(_BYTE **)(a2 + 16);
    if ( result - v9 - 1 < a1 )
      sub_100046E0();
    v10 = v9 - result + a1;
    if ( v8 >= v10 )
    {
      LOBYTE(Val) = *Val;
      if ( v9 - Source >= a1 )
      {
        memmove_s(v9, a1, &v9[-a1], a1);
        v21 = Source;
        *(_DWORD *)(a2 + 16) = &v9[a1];
        if ( (int)(v9 - Source - a1) > 0 )
        {
          memmove_s(&Source[a1], v9 - Source - a1, Source, v9 - Source - a1);
          v21 = Source;
        }
        result = &v21[a1];
        if ( v21 != &v21[a1] )
          return (char *)memset(v21, (int)Val, a1);
      }
      else
      {
        if ( v9 != Source )
          memmove_s(&Source[a1], v9 - Source, Source, v9 - Source);
        sub_10004BE0(*(_DWORD *)(a2 + 16));
        *(_DWORD *)(a2 + 16) += a1;
        result = Source;
        v20 = (char *)(*(_DWORD *)(a2 + 16) - a1);
        if ( Source != v20 )
          return (char *)memset(Source, (int)Val, v20 - Source);
      }
    }
    else
    {
      if ( -1 - (v8 >> 1) >= v8 )
        v11 = (v8 >> 1) + v8;
      else
        v11 = 0;
      if ( v11 < v10 )
        v11 = v10;
      v12 = (char *)sub_10004760(v11);
      v23 = (int)v12;
      v13 = a1;
      v22 = &Source[(_DWORD)v12 - *(_DWORD *)(a2 + 12)];
      v14 = v22;
      do
      {
        *v14 = *Val;
        --v13;
        ++v14;
      }
      while ( v13 != 0 );
      v15 = Source;
      v16 = *(_BYTE **)(a2 + 12);
      if ( Source != v16 )
      {
        memmove_s(v12, Source - v16, v16, Source - v16);
        v12 = (char *)v23;
        v15 = Source;
      }
      v17 = *(_DWORD *)(a2 + 16) - (_DWORD)v15;
      if ( v17 != 0 )
      {
        memmove_s(&v22[a1], v17, v15, v17);
        v12 = (char *)v23;
      }
      v18 = *(_DWORD *)(a2 + 12);
      v19 = *(_DWORD *)(a2 + 16) - v18 + a1;
      if ( v18 != 0 )
      {
        operator delete(*(void **)(a2 + 12));
        v12 = (char *)v23;
      }
      *(_DWORD *)(a2 + 20) = &v12[v11];
      *(_DWORD *)(a2 + 16) = &v12[v19];
      *(_DWORD *)(a2 + 12) = v12;
      return &v12[v11];
    }
  }
  return result;
}

// Address: 0x100046E0
void __fastcall __noreturn sub_100046E0(int a1, int a2)
{
  _BYTE v2[20]; // [esp+4h] [ebp-50h] BYREF
  int v3; // [esp+18h] [ebp-3Ch]
  int v4; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v4 = 15;
  v3 = 0;
  v2[4] = 0;
  sub_100041C0((int)v2, a2, "vector<T> too long", (char *)0x12);
  pExceptionObject[12] = 0;
  sub_10001060(pExceptionObject, (int)v2);
  pExceptionObject[0] = &std::length_error::`vftable';
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x10004760
void *__fastcall sub_10004760(size_t a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 != 0 )
  {
    if ( 0xFFFFFFFF / a1 == 0 )
    {
      v2 = nullptr;
      std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&v2);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(a1);
}

// Address: 0x100047B0
void __usercall sub_100047B0(int a1@<ebx>)
{
  _DWORD **v1; // eax
  _DWORD *v2; // edi
  volatile signed __int32 *v3; // esi
  _DWORD *v4; // ebp

  v1 = *(_DWORD ***)(a1 + 20);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 24) = 0;
  if ( v2 != *(_DWORD **)(a1 + 20) )
  {
    do
    {
      v3 = (volatile signed __int32 *)v2[7];
      v4 = (_DWORD *)*v2;
      if ( v3 != nullptr && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
      }
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 20) );
  }
}

// Address: 0x10004820
_DWORD *__stdcall sub_10004820(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  void *v5[9]; // [esp+0h] [ebp-24h] BYREF

  v5[5] = v5;
  v3 = operator new(0x20u);
  v5[4] = v3;
  v5[8] = nullptr;
  if ( v3 != nullptr )
    *v3 = a1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  sub_10004E50(a3, v5[0]);
  return v3;
}

// Address: 0x100048C0
int __thiscall sub_100048C0(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  _BYTE v3[20]; // [esp+4h] [ebp-50h] BYREF
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v1 = *(this + 6);
  if ( v1 == 178956970 )
  {
    v5 = 15;
    v4 = 0;
    v3[4] = 0;
    sub_100041C0((int)v3, 0, "list<T> too long", (char *)0x10);
    pExceptionObject[12] = 0;
    sub_10001060(pExceptionObject, (int)v3);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = v1 + 1;
  *(this + 6) = result;
  return result;
}

// Address: 0x10004960
_DWORD *__thiscall sub_10004960(_DWORD *this, struct std::exception *a2)
{
  sub_10001190((int)this, a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x10004980
_BYTE *__thiscall sub_10004980(int this, unsigned int Destination, rsize_t SourceSize)
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

// Address: 0x10004AF0
_DWORD *__usercall sub_10004AF0@<eax>(unsigned int a1@<eax>, unsigned int a2@<ebx>, _DWORD *a3@<esi>)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // ebp
  unsigned int v7; // eax
  bool v8; // cf
  _DWORD *v10; // [esp+4h] [ebp-8h]
  _DWORD *v11; // [esp+8h] [ebp-4h]

  if ( a3[5] < a2 )
    sub_10005BCD();
  v4 = a3[5] - a2;
  if ( v4 < a1 )
    a1 = a3[5] - a2;
  if ( a1 != 0 )
  {
    v5 = a3[6];
    v6 = a3 + 1;
    if ( v5 < 8 )
      v10 = a3 + 1;
    else
      v10 = (_DWORD *)*v6;
    if ( v5 < 8 )
      v11 = a3 + 1;
    else
      v11 = (_DWORD *)*v6;
    memmove_s((char *)v11 + 2 * a2, 2 * (v5 - a2), (char *)v10 + 2 * a2 + 2 * a1, 2 * (v4 - a1));
    v7 = a3[5] - a1;
    v8 = a3[6] < 8u;
    a3[5] = v7;
    if ( !v8 )
      v6 = (_DWORD *)*v6;
    *((_WORD *)v6 + v7) = 0;
  }
  return a3;
}

// Address: 0x10004B80
BOOL __usercall sub_10004B80@<eax>(int a1@<eax>, unsigned int a2@<edi>)
{
  unsigned int v3; // eax

  if ( a2 > 0x7FFFFFFE )
    sub_10005B95();
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 < a2 )
  {
    sub_10004C70(a1, a2, *(_DWORD *)(a1 + 20));
    return a2 != 0;
  }
  if ( a2 == 0 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    if ( v3 >= 8 )
    {
      **(_WORD **)(a1 + 4) = 0;
      return false;
    }
    *(_WORD *)(a1 + 4) = 0;
  }
  return a2 != 0;
}

// Address: 0x10004BE0
_BYTE *__userpurge sub_10004BE0@<eax>(_BYTE *a1@<edi>, int a2@<esi>, _BYTE *a3)
{
  int v3; // eax
  _BYTE *i; // ecx

  v3 = a2;
  for ( i = a3; v3 != 0; ++i )
  {
    *i = *a1;
    --v3;
  }
  return &a3[a2];
}

// Address: 0x10004C10
void *__stdcall sub_10004C10(char *a1)
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

// Address: 0x10004C70
_WORD *__stdcall sub_10004C70(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  void *v7; // ebx
  int v8; // ecx
  const void *v9; // eax
  _WORD *result; // eax
  int v11; // [esp+0h] [ebp-34h] BYREF
  _DWORD pExceptionObject[3]; // [esp+10h] [ebp-24h] BYREF
  char *v13[5]; // [esp+20h] [ebp-14h] BYREF

  v13[1] = (char *)&v11;
  v3 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFE )
  {
    v4 = a1[6];
    v5 = v4 >> 1;
    if ( v3 / 3 < v4 >> 1 && v4 <= 2147483646 - v5 )
      v3 = v5 + v4;
  }
  else
  {
    v3 = a2;
  }
  v6 = v3 + 1;
  v13[4] = nullptr;
  if ( v3 == -1 )
  {
    v6 = 0;
  }
  else if ( 0xFFFFFFFF / v6 < 2 )
  {
    v13[0] = nullptr;
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)v13);
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  v7 = operator new(2 * v6);
  v8 = a3;
  if ( a3 != 0 )
  {
    if ( a1[6] < 8u )
      v9 = a1 + 1;
    else
      v9 = (const void *)a1[1];
    memcpy_s(v7, 2 * v3 + 2, v9, 2 * a3);
    v8 = a3;
  }
  if ( a1[6] >= 8u )
  {
    operator delete((void *)a1[1]);
    v8 = a3;
  }
  result = a1 + 1;
  a1[1] = v7;
  a1[6] = v3;
  a1[5] = v8;
  if ( v3 >= 8 )
    result = v7;
  result[v8] = 0;
  return result;
}

// Address: 0x10004DF0
void *__fastcall sub_10004DF0(unsigned int a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 != 0 )
  {
    if ( 0xFFFFFFFF / a1 < 2 )
    {
      v2 = nullptr;
      std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&v2);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(2 * a1);
}

// Address: 0x10004E50
_DWORD *__cdecl sub_10004E50(_DWORD *a1)
{
  _DWORD *v1; // ecx
  _DWORD *result; // eax

  result = a1;
  if ( v1 != nullptr )
  {
    *v1 = *a1;
    v1[1] = a1[1];
    v1[2] = a1[2];
    v1[3] = a1[3];
    return sub_10003DE0(a1 + 4, v1 + 4);
  }
  return result;
}

// Address: 0x10004EC0
std::exception *__thiscall sub_10004EC0(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10004EE0
_DWORD *__stdcall sub_10004EE0(int a1, int a2)
{
  void *v2; // edi
  void *v3; // eax
  _DWORD *result; // eax
  volatile signed __int32 *v5; // esi
  _DWORD _0[9]; // [esp+0h] [ebp-20h] BYREF

  _0[4] = _0;
  v2 = nullptr;
  _0[7] = 0;
  v3 = operator new(0x10u);
  if ( v3 != nullptr )
  {
    *((_DWORD *)v3 + 2) = 0;
    *((_DWORD *)v3 + 1) = a2;
    *((_DWORD *)v3 + 3) = 1;
    *(_DWORD *)v3 = &std::tr1::_Ref_count<data_buffer>::`vftable';
    v2 = v3;
    _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 1u);
  }
  result = (_DWORD *)a1;
  v5 = *(volatile signed __int32 **)(a1 + 4);
  if ( v5 != nullptr && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    result = (_DWORD *)a1;
  }
  result[1] = v2;
  *result = a2;
  return result;
}

// Address: 0x10004FB0
int __thiscall sub_10004FB0(_DWORD *this)
{
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  v1 = (int (__thiscall ***)(_DWORD, int))*(this + 1);
  if ( v1 != nullptr )
    return (**v1)(v1, 1);
  return result;
}

// Address: 0x10004FC0
int __thiscall sub_10004FC0(void *this)
{
  int result; // eax

  if ( this != nullptr )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, 1);
  return result;
}

// Address: 0x10004FD0
_DWORD *__thiscall sub_10004FD0(_DWORD *this, char a2)
{
  *this = &std::tr1::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10004FF0
_DWORD *__thiscall sub_10004FF0(_DWORD *this, char a2)
{
  *this = &CRijndael::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10005020
int __userpurge sub_10005020@<eax>(int a1@<esi>, char *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // ebp
  int v6; // edx
  char *v7; // ebx
  int v8; // edx
  char *v9; // ebx
  char *v10; // eax
  int v11; // edi
  _DWORD *v12; // ecx
  int v13; // edx
  int v14; // ebx
  char *v15; // eax
  int v16; // ebx
  int v17; // ebx
  char *v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // edx
  _DWORD *v22; // eax
  int v23; // ecx
  _DWORD *v24; // eax
  int i; // ecx
  _DWORD *v26; // eax
  int j; // ecx
  int *v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // ebp
  char *v32; // ebx
  bool v33; // cc
  int result; // eax
  _DWORD *v35; // ecx
  int k; // edx
  int v37; // edi
  int v38; // [esp+0h] [ebp-1Ch]
  int v39; // [esp+4h] [ebp-18h]
  char *v40; // [esp+8h] [ebp-14h]
  int v41; // [esp+Ch] [ebp-10h]
  int v42; // [esp+Ch] [ebp-10h]
  _BYTE pExceptionObject[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( a2 == nullptr )
  {
    a2 = "Empty key";
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&a2);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  *(_DWORD *)(a1 + 972) = 16;
  *(_DWORD *)(a1 + 968) = 16;
  *(_DWORD *)(a1 + 980) = 0;
  *(_DWORD *)(a1 + 984) = 0;
  *(_DWORD *)(a1 + 988) = 0;
  *(_DWORD *)(a1 + 992) = 0;
  memcpy_0((void *)(a1 + 1012), &dword_10014D8C, *(_DWORD *)(a1 + 972));
  v2 = *(_DWORD *)(a1 + 968);
  if ( v2 == 16 )
  {
    v3 = *(_DWORD *)(a1 + 972);
    if ( v3 == 16 )
      v4 = 10;
    else
      v4 = 2 * (v3 != 24) + 12;
    *(_DWORD *)(a1 + 976) = v4;
  }
  else if ( v2 == 24 )
  {
    *(_DWORD *)(a1 + 976) = 2 * (*(_DWORD *)(a1 + 972) == 32) + 12;
  }
  else
  {
    *(_DWORD *)(a1 + 976) = 14;
  }
  v5 = *(_DWORD *)(a1 + 972) / 4;
  v6 = 0;
  v38 = v5;
  if ( *(int *)(a1 + 976) >= 0 )
  {
    v7 = (char *)(a1 + 8);
    do
    {
      if ( v5 > 0 )
        memset(v7, 0, 4 * v5);
      ++v6;
      v7 += 32;
    }
    while ( v6 <= *(_DWORD *)(a1 + 976) );
  }
  v8 = 0;
  if ( *(int *)(a1 + 976) >= 0 )
  {
    v9 = (char *)(a1 + 488);
    do
    {
      if ( v5 > 0 )
        memset(v9, 0, 4 * v5);
      ++v8;
      v9 += 32;
    }
    while ( v8 <= *(_DWORD *)(a1 + 976) );
  }
  v39 = v5 * (*(_DWORD *)(a1 + 976) + 1);
  v10 = a2;
  v11 = *(_DWORD *)(a1 + 968) / 4;
  v12 = (_DWORD *)(a1 + 1044);
  if ( v11 > 0 )
  {
    v13 = *(_DWORD *)(a1 + 968) / 4;
    do
    {
      *v12 = (unsigned __int8)*v10 << 24;
      v14 = (unsigned __int8)v10[1];
      v15 = v10 + 1;
      *v12 |= v14 << 16;
      v16 = (unsigned __int8)*++v15;
      *v12 |= v16 << 8;
      *v12 |= (unsigned __int8)v15[1];
      v10 = v15 + 2;
      ++v12;
      --v13;
    }
    while ( v13 != 0 );
  }
  v17 = 0;
  a2 = nullptr;
  if ( v11 > 0 )
  {
    v18 = (char *)(a1 + 1044);
    a2 = (char *)(a1 + 1044);
    do
    {
      if ( v17 >= v39 )
        break;
      v19 = v17 / v5;
      v20 = v17 % v5;
      ++v17;
      *(_DWORD *)(a1 + 4 * (v20 + 8 * v19) + 8) = *(_DWORD *)v18;
      v5 = v38;
      v18 = a2 + 4;
      *(_DWORD *)(a1 + 4 * (v20 + 8 * (*(_DWORD *)(a1 + 976) - v19)) + 488) = *(_DWORD *)a2;
      a2 = v18;
    }
    while ( v17 < v11 );
    a2 = (char *)v17;
  }
  if ( v17 < v39 )
  {
    v40 = (char *)&unk_100187E8;
    while ( 1 )
    {
      v21 = *v40++ ^ byte_100155E8[(unsigned __int8)BYTE2(*(_DWORD *)(a1 + 4 * v11 + 1040))];
      *(_DWORD *)(a1 + 1044) ^= (unsigned __int8)byte_100155E8[HIBYTE(*(_DWORD *)(a1 + 4 * v11 + 1040))]
                              ^ (((unsigned __int8)byte_100155E8[(unsigned __int8)*(_DWORD *)(a1 + 4 * v11 + 1040)]
                                ^ (((unsigned __int8)byte_100155E8[BYTE1(*(_DWORD *)(a1 + 4 * v11 + 1040))] ^ (v21 << 8)) << 8)) << 8);
      if ( v11 == 8 )
      {
        v24 = (_DWORD *)(a1 + 1048);
        for ( i = 3; i != 0; --i )
        {
          *v24 ^= *(v24 - 1);
          ++v24;
        }
        *(_DWORD *)(a1 + 1060) ^= (unsigned __int8)byte_100155E8[(unsigned __int8)*(_DWORD *)(a1 + 1056)]
                                ^ (((unsigned __int8)byte_100155E8[BYTE1(*(_DWORD *)(a1 + 1056))]
                                  ^ (((unsigned __int8)byte_100155E8[(unsigned __int8)BYTE2(*(_DWORD *)(a1 + 1056))]
                                    ^ (byte_100155E8[HIBYTE(*(_DWORD *)(a1 + 1056))] << 8)) << 8)) << 8);
        v26 = (_DWORD *)(a1 + 1064);
        for ( j = 3; j != 0; --j )
        {
          *v26 ^= *(v26 - 1);
          ++v26;
        }
      }
      else if ( v11 > 1 )
      {
        v22 = (_DWORD *)(a1 + 1048);
        v23 = v11 - 1;
        do
        {
          *v22 ^= *(v22 - 1);
          ++v22;
          --v23;
        }
        while ( v23 != 0 );
      }
      v41 = 0;
      if ( v11 > 0 )
        break;
LABEL_44:
      if ( v17 >= v39 )
        goto LABEL_45;
    }
    v28 = (int *)(a1 + 1044);
    while ( v17 < v39 )
    {
      v29 = v17 / v5;
      v30 = v17 % v5;
      v31 = *v28++;
      *(_DWORD *)(a1 + 4 * (v30 + 8 * v29) + 8) = v31;
      v5 = v38;
      v32 = a2;
      *(_DWORD *)(a1 + 4 * (v30 + 8 * (*(_DWORD *)(a1 + 976) - v29)) + 488) = *(v28 - 1);
      v17 = (int)(v32 + 1);
      v33 = ++v41 < v11;
      a2 = (char *)v17;
      if ( !v33 )
        goto LABEL_44;
    }
  }
LABEL_45:
  result = 1;
  v33 = *(_DWORD *)(a1 + 976) <= 1;
  a2 = (char *)1;
  if ( !v33 )
  {
    v35 = (_DWORD *)(a1 + 520);
    v42 = a1 + 520;
    do
    {
      if ( v5 > 0 )
      {
        for ( k = v5; k != 0; --k )
        {
          v37 = dword_100183E8[(unsigned __int8)*v35]
              ^ dword_10017FE8[(unsigned __int8)BYTE1(*v35)]
              ^ dword_10017BE8[(unsigned __int8)BYTE2(*v35)]
              ^ dword_100177E8[(unsigned __int8)HIBYTE(*v35)];
          *v35++ = v37;
        }
      }
      result = (int)(a2 + 1);
      v35 = (_DWORD *)(v42 + 32);
      v33 = (int)++a2 < *(_DWORD *)(a1 + 976);
      v42 += 32;
    }
    while ( v33 );
  }
  *(_BYTE *)(a1 + 4) = 1;
  return result;
}

// Address: 0x10005460
int __userpurge sub_10005460@<eax>(int a1@<eax>, int a2, _BYTE *a3)
{
  _BYTE *v3; // edx
  int v4; // ecx
  unsigned __int8 *v5; // eax
  int v6; // edi
  int v7; // edi
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // ebp
  int v18; // ecx
  int v19; // esi
  int v20; // ecx
  int v21; // esi
  unsigned int v22; // ebp
  int v23; // ebx
  int v24; // eax
  int v25; // ebp
  _DWORD *v26; // ebx
  int v27; // eax
  int v28; // edx
  int v29; // ebp
  int v30; // edx
  bool v31; // zf
  char v32; // ebx^2
  int result; // eax
  _DWORD *v34; // [esp+4h] [ebp-1Ch]
  int v35; // [esp+8h] [ebp-18h]
  int v36; // [esp+Ch] [ebp-14h]
  _BYTE pExceptionObject[12]; // [esp+14h] [ebp-Ch] BYREF
  int v38; // [esp+24h] [ebp+4h]
  int v39; // [esp+24h] [ebp+4h]
  int v40; // [esp+24h] [ebp+4h]
  int *v41; // [esp+28h] [ebp+8h]

  v3 = a3;
  if ( *(_BYTE *)(a2 + 4) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&off_1001C1CC);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  v4 = *(unsigned __int8 *)(a1 + 1);
  v5 = (unsigned __int8 *)(a1 + 2);
  v6 = *(v5 - 2);
  v7 = (*v5++ << 8) | (v4 << 16) | (v6 << 24);
  v8 = *v5++;
  v9 = *++v5;
  v10 = v8 | v7;
  v11 = *(v5++ - 1);
  v12 = (v9 << 16) | (v11 << 24);
  v13 = *v5++;
  v14 = (v13 << 8) | v12;
  v15 = *v5;
  v16 = *(_DWORD *)(a2 + 488) ^ v10;
  v17 = (++v5)[1];
  v18 = v15 | v14;
  v19 = *v5;
  v20 = *(_DWORD *)(a2 + 492) ^ v18;
  v5 += 2;
  v21 = *(_DWORD *)(a2 + 496) ^ (v5[1] | (*v5 << 8) | (v17 << 16) | (v19 << 24));
  v22 = _byteswap_ulong(*(_DWORD *)(v5 + 2));
  v23 = a2;
  v24 = *(_DWORD *)(a2 + 976);
  v25 = *(_DWORD *)(a2 + 500) ^ v22;
  if ( v24 > 1 )
  {
    v26 = (_DWORD *)(a2 + 528);
    v34 = (_DWORD *)(a2 + 528);
    v35 = v24 - 1;
    do
    {
      v27 = *(v26 - 1)
          ^ dword_100173E8[(unsigned __int8)v21]
          ^ dword_10016BE8[BYTE2(v16)]
          ^ dword_100167E8[HIBYTE(v20)]
          ^ dword_10016FE8[BYTE1(v25)];
      v36 = *v34
          ^ dword_100173E8[(unsigned __int8)v25]
          ^ dword_10016FE8[BYTE1(v16)]
          ^ dword_10016BE8[BYTE2(v20)]
          ^ dword_100167E8[HIBYTE(v21)];
      v28 = dword_10016BE8[BYTE2(v21)] ^ dword_100167E8[HIBYTE(v25)];
      v29 = dword_10016FE8[BYTE1(v21)] ^ dword_10016BE8[BYTE2(v25)];
      v21 = v36;
      v30 = v34[1] ^ dword_100173E8[(unsigned __int8)v16] ^ dword_10016FE8[BYTE1(v20)] ^ v28;
      v26 = v34 + 8;
      v31 = v35-- == 1;
      v16 = *(v34 - 2) ^ dword_100173E8[(unsigned __int8)v20] ^ dword_100167E8[HIBYTE(v16)] ^ v29;
      v20 = v27;
      v25 = v30;
      v34 += 8;
    }
    while ( !v31 );
    v3 = a3;
    v23 = a2;
    v24 = *(_DWORD *)(a2 + 976);
  }
  v41 = (int *)(32 * v24 + v23 + 488);
  v38 = *v41;
  v32 = BYTE2(*v41);
  *v3 = byte_100156E8[HIBYTE(v16)] ^ HIBYTE(*v41);
  v3[1] = byte_100156E8[BYTE2(v25)] ^ v32;
  v3[2] = byte_100156E8[BYTE1(v21)] ^ BYTE1(v38);
  v3[3] = v38 ^ byte_100156E8[(unsigned __int8)v20];
  v39 = v41[1];
  v3[4] = byte_100156E8[HIBYTE(v20)] ^ HIBYTE(v39);
  v3[5] = byte_100156E8[BYTE2(v16)] ^ BYTE2(v39);
  v3[6] = byte_100156E8[BYTE1(v25)] ^ BYTE1(v39);
  v3[7] = v39 ^ byte_100156E8[(unsigned __int8)v21];
  v40 = v41[2];
  v3[8] = byte_100156E8[HIBYTE(v21)] ^ HIBYTE(v40);
  v3[9] = byte_100156E8[BYTE2(v20)] ^ BYTE2(v40);
  v3[10] = byte_100156E8[BYTE1(v16)] ^ BYTE1(v40);
  v3[11] = v40 ^ byte_100156E8[(unsigned __int8)v25];
  result = v41[3];
  v3[12] = byte_100156E8[HIBYTE(v25)] ^ HIBYTE(result);
  v3[13] = byte_100156E8[BYTE2(v21)] ^ BYTE2(result);
  v3[14] = byte_100156E8[BYTE1(v20)] ^ BYTE1(result);
  v3[15] = result ^ byte_100156E8[(unsigned __int8)v16];
  return result;
}

// Address: 0x10005860
int __userpurge sub_10005860@<eax>(unsigned __int8 *a1@<ecx>, int a2@<esi>, _BYTE *a3)
{
  int v3; // eax
  int result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // ebp
  _DWORD *v10; // eax
  int v11; // ebx
  unsigned __int8 *v12; // ecx
  int v13; // ebx
  int v14; // ebp
  int v15; // ebx
  int v16; // eax
  int v17; // ebp
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // zf
  _BYTE *v22; // ecx
  int v23; // ebx
  int v24; // edx
  bool v25; // cc
  int *v26; // [esp+0h] [ebp-34h]
  _DWORD *v27; // [esp+0h] [ebp-34h]
  int v28; // [esp+0h] [ebp-34h]
  int i; // [esp+4h] [ebp-30h]
  _DWORD *v30; // [esp+4h] [ebp-30h]
  int v31; // [esp+8h] [ebp-2Ch]
  int v32; // [esp+Ch] [ebp-28h]
  int v33; // [esp+10h] [ebp-24h]
  int v34; // [esp+14h] [ebp-20h]
  int v35; // [esp+18h] [ebp-1Ch]
  int v36; // [esp+1Ch] [ebp-18h]
  int v37; // [esp+20h] [ebp-14h]
  int v38; // [esp+20h] [ebp-14h]
  int v39; // [esp+24h] [ebp-10h]
  int v40; // [esp+24h] [ebp-10h]
  _BYTE pExceptionObject[12]; // [esp+28h] [ebp-Ch] BYREF
  int v42; // [esp+38h] [ebp+4h]

  if ( *(_BYTE *)(a2 + 4) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&off_1001C1CC);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  v3 = *(_DWORD *)(a2 + 972);
  if ( v3 == 16 )
    return sub_10005460((int)a1, a2, a3);
  v5 = v3 / 4;
  v6 = 0;
  if ( v5 != 4 )
  {
    LOBYTE(v6) = v5 != 6;
    ++v6;
  }
  v7 = 8 * v6;
  v8 = dword_10018814[v7];
  v9 = dword_1001881C[v7];
  v35 = dword_10018824[v7];
  v34 = v8;
  v32 = v9;
  v10 = (_DWORD *)(a2 + 1108);
  if ( v5 > 0 )
  {
    v26 = (int *)(a2 + 488);
    for ( i = v5; i != 0; --i )
    {
      *v10 = *a1 << 24;
      v11 = a1[1];
      v12 = a1 + 1;
      *v10 |= v11 << 16;
      v13 = *++v12;
      *v10 |= v13 << 8;
      *v10 |= v12[1];
      v14 = *v26++;
      *v10 ^= v14;
      a1 = v12 + 2;
      ++v10;
    }
    v9 = v32;
  }
  result = 1;
  v33 = 1;
  if ( *(int *)(a2 + 976) > 1 )
  {
    v15 = a2 + 1076;
    v27 = (_DWORD *)(a2 + 520);
    do
    {
      if ( v5 > 0 )
      {
        v30 = v27;
        v16 = v9 - v8;
        v17 = v35 - v8;
        v18 = v8;
        v36 = v16;
        v37 = v35 - v8;
        v31 = v5;
        while ( 1 )
        {
          v15 += 4;
          v39 = (unsigned __int8)BYTE1(*(_DWORD *)(a2 + 4 * ((v18 + v16) % v5) + 1108));
          v19 = (v18 + v17) % v5;
          v20 = v18++;
          v21 = v31-- == 1;
          *(_DWORD *)(v15 - 4) = *v30++
                               ^ dword_100167E8[*(unsigned __int8 *)(v15 + 31)]
                               ^ dword_10016BE8[(unsigned __int8)*(_WORD *)(a2 + 4 * (v20 % v5) + 1110)]
                               ^ dword_100173E8[(unsigned __int8)*(_DWORD *)(a2 + 4 * v19 + 1108)]
                               ^ dword_10016FE8[v39];
          if ( v21 )
            break;
          v16 = v36;
          v17 = v37;
        }
        v9 = v32;
      }
      v15 = a2 + 1076;
      memcpy_0((void *)(a2 + 1108), (const void *)(a2 + 1076), 4 * v5);
      v27 += 8;
      v8 = v34;
      result = ++v33;
    }
    while ( v33 < *(_DWORD *)(a2 + 976) );
  }
  v28 = 0;
  if ( v5 > 0 )
  {
    v22 = a3;
    v42 = a2 + 1108;
    v40 = v8 - v9;
    v38 = v35 - v9;
    do
    {
      v23 = *(_DWORD *)(a2 + 4 * (v28 + 8 * *(_DWORD *)(a2 + 976)) + 488);
      *v22 = byte_100156E8[*(unsigned __int8 *)(v42 + 3)] ^ HIBYTE(v23);
      v42 += 4;
      v22 += 4;
      *(v22 - 3) = byte_100156E8[(unsigned __int8)*(_WORD *)(a2 + 4 * ((v9 + v40) % v5) + 1110)] ^ BYTE2(v23);
      *(v22 - 2) = byte_100156E8[BYTE1(*(_DWORD *)(a2 + 4 * (v9 % v5) + 1108))] ^ BYTE1(v23);
      v24 = (v38 + v9++) % v5;
      result = v28 + 1;
      v25 = v28 + 1 < v5;
      *(v22 - 1) = v23 ^ byte_100156E8[(unsigned __int8)*(_DWORD *)(a2 + 4 * v24 + 1108)];
      ++v28;
    }
    while ( v25 );
  }
  return result;
}

// Address: 0x10005B46
_DWORD *__thiscall sub_10005B46(_DWORD *this, int a2)
{
  sub_10001060(this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x10005B63
int __thiscall sub_10005B63(void **this)
{
  *this = &std::out_of_range::`vftable';
  return sub_10001100(this);
}

// Address: 0x10005B6E
void **__thiscall sub_10005B6E(void **this, char a2)
{
  *this = &std::out_of_range::`vftable';
  sub_10001100(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10005B95
void __cdecl __noreturn sub_10005B95()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10003C80((int)v1, "string too long");
  v2 = 0;
  sub_100010E0(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x10005BCD
void __noreturn sub_10005BCD()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10003C80((int)v1, "invalid string position");
  v2 = 0;
  sub_10005B46(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// Address: 0x10005C05
_DWORD *__thiscall sub_10005C05(_DWORD *this, struct std::exception *a2)
{
  sub_10001190((int)this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x10005C22
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x10005C31
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

// Address: 0x10005C8E
int __usercall vscan_fn@<eax>(int a1@<esi>, int (__cdecl *a2)(int *, int, int, int), int a3, int a4, int a5)
{
  size_t v5; // eax
  const char *v7; // [esp+0h] [ebp-28h]
  int v8; // [esp+8h] [ebp-20h] BYREF
  int v9; // [esp+Ch] [ebp-1Ch]
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+14h] [ebp-14h]

  v5 = strlen(v7);
  if ( a1 != 0 && a3 != 0 )
  {
    v11 = 73;
    v10 = a1;
    v8 = a1;
    v9 = 0x7FFFFFFF;
    if ( v5 <= 0x7FFFFFFF )
      v9 = v5;
    return a2(&v8, a3, a4, a5);
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
}

// Address: 0x10005CF8
int sscanf_s(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  return vscan_fn((int)Buffer, (int (__cdecl *)(int *, int, int, int))_input_s_l, (int)Format, 0, (int)va);
}

// Address: 0x10005D1A
_DWORD *__thiscall sub_10005D1A(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = &std::exception::`vftable';
  return this;
}

// Address: 0x10005D2B
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

// Address: 0x10005D7E
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

// Address: 0x10005D9B
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

// Address: 0x10005DF8
void __thiscall sub_10005DF8(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}

// Address: 0x10005E0E
const char *__thiscall exception::what(exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x10005E1B
void *__thiscall sub_10005E1B(void *this, char a2)
{
  sub_10005DF8(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10005E3C
int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [esp+14h] [ebp+14h] BYREF

  va_start(ArgList, Format);
  return _vsprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x10005E5A
int __cdecl sub_10005E5A(int a1)
{
  dword_1001C280 = a1;
  return a1;
}

// Address: 0x10005E69
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
    sub_10008614(2);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x10005F91
int __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))_decode_pointer(dword_1001C280);
  if ( v5 == nullptr )
  {
    sub_10008614(2);
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v5();
}

// Address: 0x10005FB7
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x10005FC7
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

// Address: 0x1000602F
void __noreturn _purecall()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer(dword_1001C8FC);
  if ( v0 != nullptr )
    v0();
  _NMSG_WRITE(25);
  _set_abort_behavior(0, 1u);
  abort();
}

// Address: 0x10006059
void __cdecl operator delete(void *Block)
{
  free(Block);
}

// Address: 0x10006064
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

// Address: 0x100060E1
int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  if ( MaxCount == 0 )
    return 0;
  while ( --MaxCount != 0 && *String1 != 0 && *String1 == *String2 )
  {
    ++String1;
    ++String2;
  }
  return *String1 - *String2;
}

// Address: 0x10006118
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

// Address: 0x1000618C
void __thiscall sub_1000618C(struct type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable';
  type_info::_Type_info_dtor(this);
}

// Address: 0x1000619C
struct type_info *__thiscall sub_1000619C(struct type_info *this, char a2)
{
  sub_1000618C(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100061BD
BOOL __thiscall type_info::operator==(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0;
}

// Address: 0x100061DD
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

// Address: 0x1000624C
std::bad_alloc *__thiscall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  std::exception::exception(this, (const char *const *)&off_1001B044, 1);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10006267
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
      if ( (dword_1001C290 & 1) == 0 )
      {
        dword_1001C290 |= 1u;
        std::bad_alloc::bad_alloc((std::bad_alloc *)&dword_1001C284);
        atexit(sub_100120F3);
      }
      sub_10004EC0((std::exception *)pExceptionObject, (struct std::exception *)&dword_1001C284);
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  return result;
}

// Address: 0x100062CC
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
    sub_1000A0FD();
    dword_1001DE9C = (int)GetCommandLineA();
    dword_1001C298 = (char *)__crtGetEnvironmentStringsA();
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
    ++dword_1001C294;
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
      v8 = dword_1001B1E0;
      v6 = (int (__stdcall *)(int, DWORD *))_decode_pointer(dword_1001C5D4);
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
    if ( dword_1001C294 <= 0 )
      return 0;
    --dword_1001C294;
    if ( dword_1001C93C == 0 )
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

// Address: 0x10006401
BOOL __fastcall __DllMainCRTStartup(void *a1, DWORD a2, HINSTANCE hinstDLL)
{
  BOOL v5; // eax
  BOOL v7; // [esp+10h] [ebp-1Ch]

  if ( a2 == 0 && dword_1001C294 == 0 || (a2 == 1 || a2 == 2) && _CRT_INIT((int)hinstDLL, a2, (int)a1) == 0 )
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

// Address: 0x100064F7
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return __DllMainCRTStartup(lpReserved, fdwReason, hinstDLL);
}

// Address: 0x10006520
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

// Address: 0x100065AB
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_10013250, sizeof(dwExceptionCode));
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)pThrowInfo;
  if ( pThrowInfo != nullptr && (pThrowInfo->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}

// Address: 0x100065F7
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x10006629
// ?_CallMemberFunction0@@YGXPAX0@Z
// doubtful name
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_10006629(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x10006630
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_27112, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x10006684
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *a2,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(a2, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x100066BA
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

// Address: 0x100066ED
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

// Address: 0x100067C4
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

// Address: 0x10006863
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

// Address: 0x100068D8
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 152);
  *(_DWORD *)(_getptd() + 152) = a1;
  return a1;
}

// Address: 0x10006904
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

// Address: 0x1000692B
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

// Address: 0x1000697D
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x100069DD
_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x10006A10
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x10006A46
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

  dword_1001C3B0 = v0;
  dword_1001C3AC = v2;
  dword_1001C3A8 = v1;
  dword_1001C3A4 = v3;
  dword_1001C3A0 = v5;
  dword_1001C39C = v4;
  word_1001C3C8 = __SS__;
  word_1001C3BC = __CS__;
  word_1001C398 = __DS__;
  word_1001C394 = __ES__;
  word_1001C390 = __FS__;
  word_1001C38C = __GS__;
  v6 = __readeflags();
  dword_1001C3C0 = v6;
  dword_1001C3B4 = vars0;
  dword_1001C3B8 = retaddr;
  dword_1001C3C4 = (int)&v10;
  dword_1001C300 = 65537;
  dword_1001C2B4 = retaddr;
  dword_1001C2A8 = -1073740791;
  dword_1001C2AC = 1;
  dword_1001C2F8 = IsDebuggerPresent();
  sub_10008614(1);
  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( dword_1001C2F8 == 0 )
    sub_10008614(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x10006B50
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
         && dword_1001DD5C != 0
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
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 10006BAC case 0 }
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

// Address: 0x10006EB5
int __cdecl _get_errno_from_oserr(int a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_1001B060[2 * i] )
      return dword_1001B064[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x10006EF7
int *__cdecl _errno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 8);
  else
    return (int *)&unk_1001B1C8;
}

// Address: 0x10006F0A
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 12);
  else
    return (unsigned int *)&unk_1001B1CC;
}

// Address: 0x10006F1D
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

// Address: 0x10006F40
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
    if ( *(_UNKNOWN **)this != off_1001B948 && (dword_1001B864 & v3[28]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_1001B864 & *(_DWORD *)(*((_DWORD *)this + 2) + 112)) == 0 )
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

// Address: 0x10006FC7
int __usercall __check_float_string@<eax>(void **a1@<edi>, size_t *a2@<esi>, int a3, void *Src, _DWORD *a5)
{
  size_t v5; // eax
  void *v6; // eax
  int v8; // eax

  v5 = *a2;
  if ( a3 == *a2 )
  {
    if ( *a1 == Src )
    {
      v6 = (void *)_calloc_crt(v5, 2);
      *a1 = v6;
      if ( v6 == nullptr )
        return 0;
      *a5 = 1;
      memcpy_0(*a1, Src, *a2);
    }
    else
    {
      v8 = _recalloc_crt(*a1, v5, 2u);
      if ( v8 == 0 )
        return 0;
      *a1 = (void *)v8;
    }
    *a2 *= 2;
  }
  return 1;
}

// Address: 0x1000701E
unsigned int __cdecl _hextodec(unsigned __int8 a1)
{
  bool v1; // zf
  unsigned int result; // eax

  v1 = isdigit(a1) == 0;
  result = (char)a1;
  if ( v1 )
    return ((char)a1 & 0xFFFFFFDF) - 7;
  return result;
}

// Address: 0x1000703E
int __fastcall _inc(int a1, FILE *a2)
{
  if ( --a2->_cnt < 0 )
    return _filbuf(a2);
  return *(unsigned __int8 *)a2->_ptr++;
}

// Address: 0x10007054
int __cdecl _un_inc(int Character, FILE *Stream)
{
  int result; // eax

  if ( Character != -1 )
    return _ungetc_nolock(Character, Stream);
  return result;
}

// Address: 0x10007067
int __usercall _whiteout@<eax>(int a1@<ecx>, _DWORD *a2@<esi>, FILE *a3)
{
  int v3; // ebx
  int v4; // eax
  int v6; // [esp-4h] [ebp-8h]

  do
  {
    ++*a2;
    v3 = _inc(a1, a3);
    if ( v3 == -1 )
      break;
    v4 = isspace((unsigned __int8)v3);
    a1 = v6;
  }
  while ( v4 != 0 );
  return v3;
}

// Address: 0x10007091
int __cdecl _input_s_l(FILE *Stream, unsigned __int8 *a2, struct localeinfo_struct *a3, _BYTE **a4)
{
  int result; // eax
  int v5; // eax
  _BYTE *v6; // ecx
  char *v7; // eax
  unsigned __int8 v8; // al
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned __int8 *v12; // esi
  unsigned __int8 *v13; // esi
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned __int8 *v17; // eax
  _BYTE *v18; // ebx
  unsigned __int8 v19; // al
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  _BYTE *v23; // eax
  int v24; // eax
  int v25; // ebx
  int i; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int j; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int k; // eax
  int v38; // eax
  int v39; // ecx
  void (__cdecl *v40)(int, _WORD *, void *, __crt_locale_pointers *); // eax
  FILE *v41; // esi
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  unsigned __int8 *v45; // esi
  unsigned __int8 v46; // dl
  unsigned __int8 v47; // cl
  unsigned __int8 v48; // al
  unsigned int v49; // edi
  int v50; // edx
  unsigned __int8 v51; // al
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  unsigned int v56; // eax
  int v57; // eax
  FILE *v58; // edi
  int v59; // ebx
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  int *v63; // eax
  bool v64; // zf
  int v65; // [esp-14h] [ebp-21Ch]
  _WORD *v66; // [esp-10h] [ebp-218h]
  void *v67; // [esp-Ch] [ebp-214h]
  int v68; // [esp-8h] [ebp-210h]
  FILE *v69; // [esp-8h] [ebp-210h]
  int v70; // [esp-8h] [ebp-210h]
  int v71; // [esp-8h] [ebp-210h]
  int v72; // [esp-8h] [ebp-210h]
  int v73; // [esp-8h] [ebp-210h]
  int v74; // [esp-8h] [ebp-210h]
  int v75; // [esp-8h] [ebp-210h]
  int v76; // [esp-8h] [ebp-210h]
  int v77; // [esp-8h] [ebp-210h]
  __crt_locale_pointers Locale; // [esp+8h] [ebp-200h] BYREF
  int v79; // [esp+10h] [ebp-1F8h]
  char v80; // [esp+14h] [ebp-1F4h]
  int v81; // [esp+18h] [ebp-1F0h]
  wchar_t DstCh[2]; // [esp+1Ch] [ebp-1ECh] BYREF
  _BYTE **v83; // [esp+20h] [ebp-1E8h]
  int v84; // [esp+24h] [ebp-1E4h]
  _BYTE **v85; // [esp+28h] [ebp-1E0h]
  char SrcCh[4]; // [esp+2Ch] [ebp-1DCh] BYREF
  size_t v87; // [esp+30h] [ebp-1D8h] BYREF
  unsigned __int8 v88; // [esp+37h] [ebp-1D1h]
  int v89; // [esp+38h] [ebp-1D0h] BYREF
  _BYTE *v90; // [esp+3Ch] [ebp-1CCh]
  int v91; // [esp+40h] [ebp-1C8h]
  int v92; // [esp+44h] [ebp-1C4h]
  int v93; // [esp+48h] [ebp-1C0h]
  _WORD *v94; // [esp+4Ch] [ebp-1BCh]
  unsigned __int64 v95; // [esp+50h] [ebp-1B8h]
  _BYTE *v96; // [esp+58h] [ebp-1B0h]
  unsigned __int8 *v97; // [esp+5Ch] [ebp-1ACh]
  int v98; // [esp+60h] [ebp-1A8h]
  void *Block; // [esp+64h] [ebp-1A4h] BYREF
  char v100; // [esp+69h] [ebp-19Fh]
  char v101; // [esp+6Ah] [ebp-19Eh]
  char v102; // [esp+6Bh] [ebp-19Dh]
  FILE *v103; // [esp+6Ch] [ebp-19Ch]
  char v104; // [esp+72h] [ebp-196h]
  char v105; // [esp+73h] [ebp-195h]
  int v106; // [esp+74h] [ebp-194h]
  char v107; // [esp+79h] [ebp-18Fh]
  char v108; // [esp+7Ah] [ebp-18Eh]
  char v109; // [esp+7Bh] [ebp-18Dh]
  int v110; // [esp+7Ch] [ebp-18Ch] BYREF
  int v111; // [esp+80h] [ebp-188h]
  _BYTE Src[384]; // [esp+84h] [ebp-184h] BYREF

  v85 = a4;
  v103 = Stream;
  v97 = a2;
  Block = Src;
  v87 = 350;
  v89 = 0;
  *(_DWORD *)DstCh = 0;
  v111 = 0;
  v81 = 0;
  if ( a2 == nullptr || Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  if ( (Stream->_flag & 0x40) == 0 )
  {
    v5 = _fileno(Stream);
    if ( v5 == -1 || v5 == -2 )
      v6 = &unk_1001B2C8;
    else
      v6 = (_BYTE *)(dword_1001DD80[v5 >> 5] + ((v5 & 0x1F) << 6));
    if ( (v6[36] & 0x7F) != 0
      || (v5 == -1 || v5 == -2
        ? (v7 = (char *)&unk_1001B2C8)
        : (v7 = (char *)(dword_1001DD80[v5 >> 5] + ((v5 & 0x1F) << 6))),
          v7[36] < 0) )
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return -1;
    }
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  v8 = *a2;
  v102 = 0;
  v110 = 0;
  v92 = 0;
  if ( v8 == 0 )
    goto LABEL_291;
  while ( 2 )
  {
    v9 = isspace(v8);
    v10 = v68;
    if ( v9 != 0 )
    {
      v69 = v103;
      --v110;
      v11 = _whiteout(v10, &v110, v103);
      _un_inc(v11, v69);
      v12 = v97;
      do
        ++v12;
      while ( isspace(*v12) != 0 );
      v97 = v12;
      goto LABEL_268;
    }
    v13 = v97;
    if ( *v97 != 37 )
      goto LABEL_260;
    if ( v97[1] == 37 )
    {
      v13 = v97 + 1;
LABEL_260:
      v58 = v103;
      ++v110;
      v59 = _inc(v68, v103);
      v60 = *v13;
      v12 = v13 + 1;
      v111 = v59;
      v97 = v12;
      if ( v60 == v59 )
      {
        if ( isleadbyte((unsigned __int8)v59) == 0 )
          goto LABEL_264;
        ++v110;
        v61 = _inc(v77, v58);
        v62 = *v12++;
        v97 = v12;
        if ( v62 == v61 )
        {
          --v110;
          goto LABEL_264;
        }
        _un_inc(v61, v58);
        _un_inc(v59, v58);
      }
      else
      {
        _un_inc(v59, v58);
      }
      goto $error_return$29131;
    }
    v91 = 0;
    v88 = 0;
    v98 = 0;
    v93 = 0;
    v106 = 0;
    v90 = nullptr;
    v101 = 0;
    v100 = 0;
    v107 = 0;
    v109 = 0;
    v104 = 0;
    v108 = 0;
    v105 = 1;
    v96 = nullptr;
    do
    {
      v14 = *++v13;
      v15 = isdigit((unsigned __int8)v14);
      v16 = v70;
      if ( v15 != 0 )
      {
        ++v93;
        v106 = 10 * v106 + v14 - 48;
        continue;
      }
      if ( v14 > 78 )
      {
        if ( v14 == 104 )
        {
          --v105;
          --v108;
        }
        else
        {
          if ( v14 == 108 )
          {
            v17 = v13 + 1;
            if ( v13[1] == 108 )
              goto LABEL_35;
            ++v105;
          }
          else if ( v14 != 119 )
          {
            goto $DEFAULT_LABEL$29104;
          }
          ++v108;
        }
      }
      else
      {
        switch ( v14 )
        {
          case 'N':
            continue;
          case '*':
            ++v107;
            continue;
          case 'F':
            continue;
          default:
            break;
        }
        if ( v14 != 73 )
        {
          if ( v14 == 76 )
          {
            ++v105;
            continue;
          }
$DEFAULT_LABEL$29104:
          ++v109;
          continue;
        }
        LOBYTE(v16) = v13[1];
        if ( (_BYTE)v16 == 54 )
        {
          v17 = v13 + 2;
          if ( v13[2] == 52 )
          {
LABEL_35:
            ++v96;
            v13 = v17;
            v95 = 0;
            continue;
          }
        }
        if ( (_BYTE)v16 == 51 && v13[2] == 50 )
        {
          v13 += 2;
          continue;
        }
        if ( (_BYTE)v16 != 100 && (_BYTE)v16 != 105 && (_BYTE)v16 != 111 && (_BYTE)v16 != 120 && (_BYTE)v16 != 88 )
          goto $DEFAULT_LABEL$29104;
      }
    }
    while ( v109 == 0 );
    v97 = v13;
    if ( v107 != 0 )
    {
      v18 = nullptr;
    }
    else
    {
      v18 = *v85;
      v83 = v85++;
    }
    v94 = v18;
    v109 = 0;
    if ( v108 == 0 )
    {
      v19 = *v13;
      if ( *v13 == 83 || (v108 = -1, v19 == 67) )
        v108 = 1;
    }
    v20 = *v13 | 0x20;
    v84 = v20;
    if ( v20 != 110 )
    {
      if ( v20 == 99 || v20 == 123 )
      {
        ++v110;
        v21 = _inc(v16, v103);
      }
      else
      {
        v21 = _whiteout(v16, &v110, v103);
      }
      v111 = v21;
      if ( v21 == -1 )
        goto $error_return$29131;
      v18 = v94;
      v13 = v97;
    }
    v22 = v93;
    if ( v93 != 0 && v106 == 0 )
    {
      _un_inc(v111, v103);
      goto $error_return$29131;
    }
    if ( v107 == 0 && (v20 == 99 || v20 == 115 || v20 == 123) )
    {
      v18 = *v83++;
      v85 = v83 + 1;
      v23 = *v83;
      v94 = v18;
      v90 = v23;
      if ( v23 == nullptr )
      {
        if ( v108 <= 0 )
          *v18 = 0;
        else
          *(_WORD *)v18 = 0;
        *_errno() = 12;
        goto $error_return$29131;
      }
    }
    if ( v20 > 111 )
    {
      if ( v20 == 112 )
      {
        v105 = 1;
        goto LABEL_209;
      }
      if ( v20 != 115 )
      {
        if ( v20 == 117 )
          goto LABEL_209;
        if ( v20 == 120 )
          goto LABEL_87;
        if ( v20 != 123 )
          goto LABEL_155;
        if ( v108 > 0 )
          v104 = 1;
        v45 = v13 + 1;
        if ( *v45 == 94 )
        {
          ++v45;
          v101 = -1;
        }
        memset(&Src[352], 0, 0x20u);
        if ( *v45 == 93 )
        {
          v46 = 93;
          ++v45;
          Src[363] = 32;
        }
        else
        {
          v46 = v88;
        }
        while ( 1 )
        {
          v51 = *v45;
          if ( *v45 == 93 )
            break;
          ++v45;
          if ( v51 == 45 && v46 != 0 && (v47 = *v45, *v45 != 93) )
          {
            ++v45;
            if ( v46 >= v47 )
            {
              v48 = v46;
              v46 = v47;
            }
            else
            {
              v48 = v47;
            }
            if ( v46 <= v48 )
            {
              v49 = v46;
              v50 = (unsigned __int8)(v48 - v46 + 1);
              do
              {
                Src[(v49 >> 3) + 352] |= 1 << (v49 & 7);
                ++v49;
                --v50;
              }
              while ( v50 != 0 );
              v20 = v84;
            }
            v46 = 0;
          }
          else
          {
            v20 = v84;
            v46 = v51;
            Src[(v51 >> 3) + 352] |= 1 << (v51 & 7);
          }
        }
        v18 = v94;
        v97 = v45;
$scanit$29164:
        v41 = v103;
        --v110;
        v96 = v18;
        _un_inc(v111, v103);
        v42 = v72;
        if ( v20 == 99 )
        {
          while ( 1 )
          {
LABEL_134:
            if ( v93 != 0 )
            {
              v43 = v106--;
              if ( v43 == 0 )
                goto LABEL_202;
            }
            ++v110;
            v44 = _inc(v42, v41);
            v111 = v44;
            if ( v44 == -1 )
              goto LABEL_201;
            if ( v20 != 99 )
            {
              if ( v20 != 115 )
                goto LABEL_296;
              if ( v44 >= 9 && v44 <= 13 )
              {
LABEL_201:
                --v110;
                _un_inc(v44, v41);
LABEL_202:
                if ( v96 != v18 )
                {
                  if ( v107 == 0 )
                  {
                    ++v92;
                    if ( v20 != 99 )
                    {
                      if ( v104 != 0 )
                        *v94 = 0;
                      else
                        *(_BYTE *)v94 = 0;
                    }
                  }
                  goto LABEL_258;
                }
                goto $error_return$29131;
              }
              if ( v44 == 32 )
              {
LABEL_296:
                if ( v20 != 123 )
                  goto LABEL_201;
                v42 = v101 ^ (char)Src[(v44 >> 3) + 352];
                v20 = v84;
                if ( ((1 << (v44 & 7)) & v42) == 0 )
                  goto LABEL_201;
              }
            }
            if ( v107 == 0 )
              break;
            ++v96;
          }
          if ( v90 == nullptr )
          {
            v63 = _errno();
            v64 = v104 == 0;
            *v63 = 12;
            if ( v64 )
              *v96 = 0;
            else
              *(_WORD *)v96 = 0;
            goto $error_return$29131;
          }
          if ( v104 != 0 )
          {
            SrcCh[0] = v44;
            if ( isleadbyte((unsigned __int8)v44) != 0 )
            {
              ++v110;
              SrcCh[1] = _inc(v73, v41);
            }
            wcscpy(DstCh, L"?");
            _mbtowc_l(DstCh, SrcCh, *((_DWORD *)Locale.locinfo + 43), &Locale);
            *(_WORD *)v18 = DstCh[0];
            v18 += 2;
          }
          else
          {
            *v18++ = v44;
          }
          v94 = v18;
        }
        --v90;
        goto LABEL_134;
      }
LABEL_130:
      if ( v108 > 0 )
        v104 = 1;
      goto $scanit$29164;
    }
    if ( v20 == 111 )
      goto LABEL_209;
    if ( v20 == 99 )
    {
      if ( v93 == 0 )
      {
        ++v106;
        v93 = 1;
      }
      goto LABEL_130;
    }
    if ( v20 != 100 )
    {
      if ( v20 > 100 )
      {
        if ( v20 > 103 )
        {
          if ( v20 != 105 )
          {
            if ( v20 == 110 )
            {
              v24 = v110;
              if ( v107 == 0 )
              {
$assign_num$29314:
                if ( v96 != nullptr )
                {
                  *(_QWORD *)v18 = v95;
                }
                else if ( v105 != 0 )
                {
                  *(_DWORD *)v18 = v24;
                }
                else
                {
                  *(_WORD *)v18 = v24;
                }
              }
              goto LABEL_258;
            }
            goto LABEL_155;
          }
          v20 = 100;
LABEL_87:
          if ( v111 == 45 )
          {
            v100 = 1;
            goto $x_incwidth$29235;
          }
          if ( v111 == 43 )
          {
$x_incwidth$29235:
            if ( --v106 != 0 || v93 == 0 )
            {
              ++v110;
              v111 = _inc(v93, v103);
            }
            else
            {
              v109 = 1;
            }
          }
          if ( v111 == 48 )
          {
            ++v110;
            v52 = _inc(v22, v103);
            v111 = v52;
            if ( (_BYTE)v52 == 120 || (_BYTE)v52 == 88 )
            {
              ++v110;
              v111 = _inc(v53, v103);
              if ( v93 != 0 )
              {
                v106 -= 2;
                if ( v106 < 1 )
                  ++v109;
              }
              v74 = 120;
LABEL_197:
              v20 = v74;
            }
            else
            {
              v98 = 1;
              if ( v20 != 120 )
              {
                if ( v93 != 0 && --v106 == 0 )
                  ++v109;
                v74 = 111;
                goto LABEL_197;
              }
              --v110;
              _un_inc(v111, v103);
              v111 = 48;
            }
          }
          goto $getnum$29252;
        }
        v25 = 0;
        if ( v111 == 45 )
        {
          *(_BYTE *)Block = 45;
          v25 = 1;
          goto $f_incwidth$29332;
        }
        if ( v111 == 43 )
        {
$f_incwidth$29332:
          --v106;
          ++v110;
          v111 = _inc(v22, v103);
        }
        if ( v93 == 0 )
          v106 = -1;
        for ( i = (unsigned __int8)v111; isdigit(i) != 0; i = (unsigned __int8)v111 )
        {
          v27 = v106--;
          if ( v27 == 0 )
            break;
          ++v98;
          *((_BYTE *)Block + v25) = v111;
          if ( __check_float_string(&Block, &v87, ++v25, Src, &v89) == 0 )
            goto $error_return$29131;
          ++v110;
          v111 = _inc(v28, v103);
        }
        v101 = ***((_BYTE ***)Locale.locinfo + 47);
        if ( v101 == (_BYTE)v111 )
        {
          v29 = v106--;
          if ( v29 != 0 )
          {
            ++v110;
            v111 = _inc(v71, v103);
            *((_BYTE *)Block + v25) = v101;
            if ( __check_float_string(&Block, &v87, ++v25, Src, &v89) == 0 )
              goto $error_return$29131;
            for ( j = (unsigned __int8)v111; isdigit(j) != 0; j = (unsigned __int8)v111 )
            {
              v31 = v106--;
              if ( v31 == 0 )
                break;
              ++v98;
              *((_BYTE *)Block + v25) = v111;
              if ( __check_float_string(&Block, &v87, ++v25, Src, &v89) == 0 )
                goto $error_return$29131;
              ++v110;
              v111 = _inc(v32, v103);
            }
          }
        }
        if ( v98 != 0 && (v111 == 101 || v111 == 69) )
        {
          v33 = v106--;
          if ( v33 != 0 )
          {
            *((_BYTE *)Block + v25) = 101;
            if ( __check_float_string(&Block, &v87, ++v25, Src, &v89) == 0 )
              goto $error_return$29131;
            ++v110;
            v111 = _inc(v34, v103);
            if ( v111 == 45 )
            {
              *((_BYTE *)Block + v25) = 45;
              if ( __check_float_string(&Block, &v87, ++v25, Src, &v89) == 0 )
                goto $error_return$29131;
$f_incwidth2$29362:
              v36 = v106--;
              if ( v36 != 0 )
              {
                ++v110;
                v111 = _inc(v35, v103);
              }
              else
              {
                v106 = 0;
              }
            }
            else if ( v111 == 43 )
            {
              goto $f_incwidth2$29362;
            }
            for ( k = (unsigned __int8)v111; isdigit(k) != 0; k = (unsigned __int8)v111 )
            {
              v38 = v106--;
              if ( v38 == 0 )
                break;
              ++v98;
              *((_BYTE *)Block + v25) = v111;
              if ( __check_float_string(&Block, &v87, ++v25, Src, &v89) == 0 )
                goto $error_return$29131;
              ++v110;
              v111 = _inc(v39, v103);
            }
          }
        }
        --v110;
        _un_inc(v111, v103);
        if ( v98 != 0 )
        {
          if ( v107 == 0 )
          {
            ++v92;
            v67 = Block;
            v66 = v94;
            *((_BYTE *)Block + v25) = 0;
            v65 = v105 - 1;
            v40 = (void (__cdecl *)(int, _WORD *, void *, __crt_locale_pointers *))_decode_pointer(off_1001B974[0]);
            v40(v65, v66, v67, &Locale);
          }
          goto LABEL_258;
        }
        goto $error_return$29131;
      }
LABEL_155:
      if ( *v13 == v111 )
      {
        --v102;
        if ( v107 == 0 )
          v85 = v83;
        goto LABEL_258;
      }
      _un_inc(v111, v103);
      v81 = 1;
      goto $error_return$29131;
    }
LABEL_209:
    if ( v111 == 45 )
    {
      v100 = 1;
    }
    else if ( v111 != 43 )
    {
      goto $getnum$29252;
    }
    if ( --v106 != 0 || v93 == 0 )
    {
      ++v110;
      v111 = _inc(v93, v103);
    }
    else
    {
      v109 = 1;
    }
$getnum$29252:
    if ( v96 != nullptr )
    {
      if ( v109 == 0 )
      {
        while ( 1 )
        {
          if ( v20 == 120 || v20 == 112 )
          {
            if ( isxdigit((unsigned __int8)v111) == 0 )
            {
LABEL_230:
              --v110;
              _un_inc(v111, v103);
              break;
            }
            v95 *= 16LL;
            v56 = _hextodec(v111);
            v55 = v76;
            v111 = v56;
          }
          else
          {
            v54 = isdigit((unsigned __int8)v111);
            v55 = v75;
            if ( v54 == 0 )
              goto LABEL_230;
            if ( v20 == 111 )
            {
              if ( v111 >= 56 )
                goto LABEL_230;
              v55 = v95 >> 29;
              v95 *= 8LL;
            }
            else
            {
              v95 *= 10LL;
            }
          }
          ++v98;
          v95 += v111 - 48;
          if ( v93 != 0 && --v106 == 0 )
            break;
          ++v110;
          v111 = _inc(v55, v103);
        }
      }
      if ( v100 != 0 )
        v95 = -(__int64)v95;
LABEL_233:
      v24 = v91;
      goto LABEL_234;
    }
    if ( v109 != 0 )
      goto LABEL_253;
    while ( 2 )
    {
      if ( v20 != 120 && v20 != 112 )
      {
        if ( isdigit((unsigned __int8)v111) == 0 )
          break;
        if ( v20 == 111 )
        {
          if ( v111 >= 56 )
            break;
          v57 = 8 * v91;
        }
        else
        {
          v57 = 10 * v91;
        }
        goto LABEL_249;
      }
      if ( isxdigit((unsigned __int8)v111) != 0 )
      {
        v91 *= 16;
        v111 = _hextodec(v111);
        v57 = v91;
LABEL_249:
        ++v98;
        v91 = v57 + v111 - 48;
        if ( v93 != 0 && --v106 == 0 )
          goto LABEL_253;
        ++v110;
        v111 = _inc(v111, v103);
        continue;
      }
      break;
    }
    --v110;
    _un_inc(v111, v103);
LABEL_253:
    if ( v100 == 0 )
      goto LABEL_233;
    v24 = -v91;
LABEL_234:
    if ( v98 == 0 )
      goto $error_return$29131;
    if ( v107 == 0 )
    {
      ++v92;
      v18 = v94;
      goto $assign_num$29314;
    }
LABEL_258:
    ++v102;
    v12 = ++v97;
LABEL_264:
    if ( v111 != -1 )
    {
LABEL_268:
      v8 = *v12;
      if ( *v12 == 0 )
        goto $error_return$29131;
      continue;
    }
    break;
  }
  if ( *v12 == 37 && v97[1] == 110 )
  {
    v12 = v97;
    goto LABEL_268;
  }
$error_return$29131:
  if ( v89 == 1 )
    free(Block);
  if ( v111 == -1 )
  {
    result = v92;
    if ( v92 == 0 && v102 == 0 )
      result = -1;
    if ( v80 != 0 )
      *(_DWORD *)(v79 + 112) &= ~2u;
    return result;
  }
  if ( v81 == 1 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  }
LABEL_291:
  if ( v80 != 0 )
    *(_DWORD *)(v79 + 112) &= ~2u;
  return v92;
}

// Address: 0x100081B5
int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = 0;
  if ( a1 <= dword_1001DD4C )
  {
    _lock(4);
    v2 = __sbh_alloc_block(a1);
    _unlock(4);
  }
  return v2;
}

// Address: 0x10008204
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
      if ( dword_1001DD60 == 1 )
      {
        v2 = v1 != 0 ? v1 : 1;
        v3 = HeapAlloc(hHeap, 0, v2);
      }
      else if ( dword_1001DD60 != 3 || (v3 = (LPVOID)V6_HeapAlloc(v1)) == nullptr )
      {
        if ( v1 == 0 )
          v1 = 1;
        v3 = HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
      }
      v4 = v3;
      if ( v3 != nullptr )
        return v4;
      if ( dword_1001CBF4 == 0 )
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

// Address: 0x100082CE
void __cdecl free(void *Block)
{
  int v1; // eax
  int *v2; // esi
  DWORD LastError; // eax
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_1001DD60 != 3 )
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

// Address: 0x1000835C
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
    && (v2 != (FILE *)(sub_1000DC31() + 32) && v2 != (FILE *)(sub_1000DC31() + 64) || _isatty((int)File) == 0) )
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
        v9 = &unk_1001B2C8;
      else
        v9 = (_BYTE *)(dword_1001DD80[(int)File >> 5] + (((unsigned __int8)File & 0x1F) << 6));
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

// Address: 0x100084C0
int __cdecl _vsnprintf_helper(
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
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  if ( a3 != 0 && a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  File._cnt = 0x7FFFFFFF;
  if ( a3 <= 0x7FFFFFFF )
    File._cnt = a3;
  File._flag = 66;
  File._base = a2;
  File._ptr = a2;
  result = a1(&File, a4, a5, a6);
  v9 = result;
  if ( a2 != nullptr )
  {
    if ( result >= 0 )
    {
      if ( --File._cnt >= 0 )
      {
        *File._ptr = 0;
        return v9;
      }
      if ( _flsbuf(0, &File) != -1 )
        return v9;
    }
    v7 = File._cnt < 0;
    a2[a3 - 1] = 0;
    return !v7 - 2;
  }
  return result;
}

// Address: 0x1000858C
int __cdecl _vsprintf_s_l(
        char *const Buffer,
        const size_t BufferCount,
        const char *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax

  if ( Format == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  if ( Buffer == nullptr || BufferCount == 0 )
  {
    *_errno() = 22;
LABEL_10:
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  result = _vsnprintf_helper(
             (int (__cdecl *)(FILE *, int, int, int))_output_s_l,
             Buffer,
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

// Address: 0x10008614
void sub_10008614()
{
  dword_1001DE98 = 0;
}

// Address: 0x10008620
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
  if ( (_BYTE)Val == 0 && Size >= 0x100 && dword_1001DD5C != 0 )
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

// Address: 0x1000869A
PVOID __cdecl _encode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001B1E0 != -1
    && (v6 = dword_1001B1E0, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x1000870C
PVOID _encoded_null()
{
  return _encode_pointer(nullptr);
}

// Address: 0x10008715
PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001B1E0 != -1
    && (v6 = dword_1001B1E0, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x10008787
// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}

// Address: 0x10008790
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

// Address: 0x100087C4
int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_1001B1E0 != -1 )
  {
    v2 = dword_1001B1E0;
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_1001C5D8);
    v0(v2);
    dword_1001B1E0 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}

// Address: 0x10008801
int __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleW; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]
  int savedregs; // [esp+2Ch] [ebp+0h]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
  hModule = ModuleHandleW;
  *(_DWORD *)(a1 + 92) = &unk_10013940;
  *(_DWORD *)(a1 + 20) = 1;
  if ( ModuleHandleW != nullptr )
  {
    *(_DWORD *)(a1 + 504) = GetProcAddress(ModuleHandleW, "EncodePointer");
    *(_DWORD *)(a1 + 508) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 200) = 67;
  *(_BYTE *)(a1 + 331) = 67;
  *(_DWORD *)(a1 + 104) = &unk_1001B340;
  _lock(13);
  InterlockedIncrement(*(volatile LONG **)(a1 + 104));
  _unlock(13);
  _lock(12);
  *(_DWORD *)(a1 + 108) = a2;
  if ( a2 == 0 )
    *(_DWORD *)(a1 + 108) = off_1001B948;
  __addlocaleref(*(volatile LONG **)(a1 + 108));
  savedregs = 268470474;
  return _unlock(12);
}

// Address: 0x100088E8
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
  v9 = dword_1001B1E0;
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
      v8 = dword_1001B1E0;
      v5 = (int (__stdcall *)(int, DWORD *))_decode_pointer((void *)dword_1001C5D4);
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

// Address: 0x10008961
DWORD *_getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( v0 == nullptr )
    _amsg_exit(16);
  return v0;
}

// Address: 0x1000897B
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
    if ( *((_UNKNOWN **)Block + 23) != &unk_10013940 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = *((void **)Block + 26);
    if ( v1 != nullptr && InterlockedDecrement(*((volatile LONG **)Block + 26)) == 0 && v1 != &unk_1001B340 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = *((_DWORD **)Block + 27);
    if ( v2 != nullptr )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != (_DWORD *)off_1001B948 && v2 != (_DWORD *)&unk_1001B870 && *v2 == 0 )
        __freetlocinfo(v2);
    }
    savedregs = 268470915;
    _unlock(12);
    free(Block);
  }
}

// Address: 0x10008AAA
DWORD __cdecl _freeptd(void *Block)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_1001B1E0 != -1 )
  {
    if ( Block == nullptr && TlsGetValue(dwTlsIndex) != nullptr )
    {
      v4 = dword_1001B1E0;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      Block = (void *)Value(v4);
    }
    v5 = dword_1001B1E0;
    v2 = (void (__stdcall *)(int, _DWORD))_decode_pointer((void *)dword_1001C5D4);
    v2(v5, 0);
    _freefls(Block);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, nullptr);
  return result;
}

// Address: 0x10008B18
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
    dword_1001C5D8 = (int)FlsFree;
    if ( FlsAlloc == nullptr || FlsGetValue == nullptr || FlsSetValue == nullptr || FlsFree == nullptr )
    {
      FlsGetValue = TlsGetValue;
      FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))__crtTlsAlloc;
      FlsSetValue = TlsSetValue;
      dword_1001C5D8 = (int)TlsFree;
    }
    v3 = TlsAlloc();
    dwTlsIndex = v3;
    if ( v3 == -1 || !TlsSetValue(v3, FlsGetValue) )
      return 0;
    _init_pointers();
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))_encode_pointer(FlsAlloc);
    FlsGetValue = (PVOID (__stdcall *)(DWORD))_encode_pointer(FlsGetValue);
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))_encode_pointer(FlsSetValue);
    dword_1001C5D8 = (int)_encode_pointer((void *)dword_1001C5D8);
    if ( _mtinitlocks() != 0 )
    {
      v4 = (int (__stdcall *)(_DWORD))_decode_pointer(FlsAlloc);
      dword_1001B1E0 = v4(_freefls);
      if ( dword_1001B1E0 != -1 )
      {
        v5 = (DWORD *)_calloc_crt(1u, 532);
        v6 = v5;
        if ( v5 != nullptr )
        {
          v11 = v5;
          v10 = dword_1001B1E0;
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

// Address: 0x10008CA5
void __cdecl __noreturn abort()
{
  int v0; // esi
  int v1; // eax
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
  int v16; // [esp+10Ch] [ebp-220h]
  int v17; // [esp+110h] [ebp-21Ch]
  void *v18; // [esp+114h] [ebp-218h]
  __int16 v19; // [esp+118h] [ebp-214h]
  unsigned int v20; // [esp+11Ch] [ebp-210h]
  void **v21; // [esp+120h] [ebp-20Ch]
  __int16 v22; // [esp+124h] [ebp-208h]
  int savedregs; // [esp+32Ch] [ebp+0h]
  void *retaddr; // [esp+330h] [ebp+4h] BYREF

  if ( (dword_1001B1E8 & 1) != 0 )
    _NMSG_WRITE(10);
  v1 = sub_1000EDD6();
  if ( v1 != 0 )
  {
    v1 = raise(22);
    v3 = v5;
  }
  if ( (dword_1001B1E8 & 2) != 0 )
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

// Address: 0x10008DBC
unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_1001B1E8;
  dword_1001B1E8 = Mask & Flags | dword_1001B1E8 & ~Mask;
  return result;
}

// Address: 0x10008DDD
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
    if ( a1 == dword_1001B1F0[2 * v1] )
      break;
    v8 = ++v1;
  }
  while ( v1 < 0x17 );
  if ( v1 < 0x17 )
  {
    if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001C2A4 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v4 = StdHandle;
      if ( StdHandle != nullptr && StdHandle != (HANDLE)-1 )
      {
        v5 = (const char **)&(&off_1001B1F4)[2 * v1];
        v6 = strlen(*v5);
        WriteFile(v4, *v5, v6, &NumberOfBytesWritten, nullptr);
      }
    }
    else if ( a1 != 252 )
    {
      if ( strcpy_s(Destination, 0x314u, "Runtime Error!\n\nProgram: ") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      byte_1001C6FD = 0;
      if ( GetModuleFileNameA(nullptr, Str, 0x104u) == 0 && strcpy_s(Str, 0x2FBu, "<program name unknown>") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strlen(Str) + 1 > 0x3C )
      {
        v2 = strlen(Str);
        if ( strncpy_s(&Str[v2 - 59], &unk_1001C8F4 - (_UNKNOWN *)&Str[v2 - 59], "...", 3u) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strcat_s(Destination, 0x314u, "\n\n") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcat_s(Destination, 0x314u, (&off_1001B1F4)[2 * v8]) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      sub_1000EF94(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
}

// Address: 0x10008F88
void _FF_MSGBANNER()
{
  if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001C2A4 == 1 )
  {
    _NMSG_WRITE(252);
    _NMSG_WRITE(255);
  }
}

// Address: 0x10008FC1
int __cdecl sub_10008FC1(int a1)
{
  dword_1001C8FC = a1;
  return a1;
}

// Address: 0x10008FD0
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
         && dword_1001DD5C != 0
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
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 1000902C case 0 }
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

// Address: 0x10009335
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
    v3 = &unk_1001C900;
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

// Address: 0x100093B0
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

// Address: 0x10009438
void *__cdecl _onexit_nolock(void *a1)
{
  PVOID *v1; // edi
  PVOID *v2; // eax
  PVOID *v3; // esi
  int v4; // ebx
  size_t v5; // edi
  int v6; // eax
  size_t v7; // eax
  char *v8; // eax
  PVOID *Block; // [esp+Ch] [ebp-4h]

  v1 = (PVOID *)_decode_pointer((void *)dword_1001DE88);
  Block = v1;
  v2 = (PVOID *)_decode_pointer((void *)dword_1001DE84);
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
        dword_1001DE84 = (int)_encode_pointer(v3 + 1);
        return a1;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = (char *)_realloc_crt(Block, v7)) != nullptr
        || v5 + 16 >= v5 && (v8 = (char *)_realloc_crt(Block, v5 + 16)) != nullptr )
      {
        v3 = (PVOID *)&v8[4 * (v4 >> 2)];
        dword_1001DE88 = (int)_encode_pointer(v8);
        goto LABEL_11;
      }
    }
  }
  return nullptr;
}

// Address: 0x100094F2
int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(0x20u, 4);
  dword_1001DE88 = (int)_encode_pointer(v0);
  dword_1001DE84 = dword_1001DE88;
  if ( v0 == nullptr )
    return 24;
  *v0 = 0;
  return 0;
}

// Address: 0x10009523
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock(Func);
  _unlockexit(268473680);
  return v2;
}

// Address: 0x1000955F
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x10009576
int __cdecl sub_10009576(int a1)
{
  dword_1001C908 = a1;
  return a1;
}

// Address: 0x10009585
int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))_decode_pointer((void *)dword_1001C908);
  return v1 != nullptr && v1(Size) != 0;
}

// Address: 0x100095AD
void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr || dword_1001C90C == 0 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_1001C90C )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}

// Address: 0x100095F2
int __cdecl _calloc_crt(size_t Size, int a2)
{
  DWORD v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = _calloc_impl(Size, a2, 0);
    if ( v3 != 0 || dword_1001C90C == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001C90C )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1000963E
void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 != nullptr || Size == 0 || dword_1001C90C == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001C90C )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1000968C
void *__cdecl _recalloc_crt(void *Block, size_t Count, size_t Size)
{
  DWORD v3; // esi
  void *v4; // edi
  int v5; // eax

  v3 = 0;
  do
  {
    v4 = _recalloc(Block, Count, Size);
    if ( v4 != nullptr || Size == 0 || dword_1001C90C == 0 )
      break;
    Sleep(v3);
    v5 = v3 + 1000;
    if ( v3 + 1000 > dword_1001C90C )
      v5 = -1;
    v3 = v5;
  }
  while ( v5 != -1 );
  return v4;
}

// Address: 0x100096DE
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

// Address: 0x1000970E
int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer(off_1001B2C0);
  return v1(255);
}

// Address: 0x10009737
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

// Address: 0x10009762
void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x1000977A
int _lockexit()
{
  return _lock(8);
}

// Address: 0x10009783
int _unlockexit()
{
  return _unlock(8);
}

// Address: 0x1000978C
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

// Address: 0x100097A9
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

// Address: 0x100097CD
int __cdecl _cinit(int a1)
{
  int result; // eax
  _PVFV *savedregs; // [esp+4h] [ebp+0h]

  if ( dword_1001DE90 != nullptr && _IsNonwritableInCurrentImage(&dword_1001DE90) != 0 )
    dword_1001DE90(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&dword_1001317C, (_PIFV *)&Last);
  if ( result == 0 )
  {
    atexit(sub_1000A123);
    _initterm((_PVFV *)&First, savedregs);
    if ( dword_1001DE94 != nullptr && _IsNonwritableInCurrentImage(&dword_1001DE94) != 0 )
      dword_1001DE94(0, 2, 0);
    return 0;
  }
  return result;
}

// Address: 0x10009852
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
  if ( dword_1001C940 != 1 )
  {
    dword_1001C93C = 1;
    byte_1001C938 = a3;
    if ( a2 == 0 )
    {
      v3 = (void **)_decode_pointer((void *)dword_1001DE88);
      v9 = v3;
      if ( v3 != nullptr )
      {
        v4 = (void **)_decode_pointer((void *)dword_1001DE84);
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
            v6 = (void **)_decode_pointer((void *)dword_1001DE88);
            v7 = (void **)_decode_pointer((void *)dword_1001DE84);
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
      _initterm((_PVFV *)&dword_100131A0, v8);
    }
    _initterm((_PVFV *)&dword_100131A8, v8);
  }
  if ( a3 != 0 )
    _unlock(8);
  if ( a3 == 0 )
  {
    dword_1001C940 = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
}

// Address: 0x1000997E
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x10009994
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x100099A3
void (__cdecl __noreturn *_init_pointers())(int Code)
{
  PVOID v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null();
  sub_10009576((int)v0);
  sub_1000F92C(v0);
  sub_10005E5A((int)v0);
  sub_10008FC1((int)v0);
  sub_1000F91D(v0);
  _initp_misc_winsig(v0);
  nullsub_1(v0);
  _initp_eh_hooks(v0);
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit);
  off_1001B2C0 = result;
  return result;
}

// Address: 0x100099F1
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
  dword_1001DD80[0] = v0;
  uNumber = 32;
  for ( i = v0 + 2048; v0 < i; i = dword_1001DD80[0] + 2048 )
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
      v5 = &dword_1001DD80[k];
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
        v7 = dword_1001DD80[k >> 5] + ((k & 0x1F) << 6);
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
    v9 = dword_1001DD80[0] + (m << 6);
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

// Address: 0x10009C45
void _ioterm()
{
  void **v0; // esi
  char *v1; // edi
  unsigned int i; // eax

  v0 = (void **)dword_1001DD80;
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
  while ( (int)v0 < (int)&dword_1001DE80 );
}

// Address: 0x10009C93
int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( dword_1001DE8C == 0 )
    __initmbctable();
  v0 = dword_1001C298;
  v1 = 0;
  if ( dword_1001C298 != nullptr )
  {
    while ( *v0 != 0 )
    {
      if ( *v0 != 61 )
        ++v1;
      v0 += strlen(v0) + 1;
    }
    v3 = (char **)_calloc_crt(v1 + 1, 4);
    dword_1001C920 = v3;
    if ( v3 != nullptr )
    {
      for ( i = dword_1001C298; ; i += v6 )
      {
        if ( *i == 0 )
        {
          free(dword_1001C298);
          dword_1001C298 = nullptr;
          *v3 = nullptr;
          dword_1001DE80 = 1;
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
      free(dword_1001C920);
      dword_1001C920 = nullptr;
      return -1;
    }
  }
  return -1;
}

// Address: 0x10009D71
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

// Address: 0x10009F0B
int _setargv()
{
  int v0; // edi
  size_t v1; // eax
  char **v2; // esi
  size_t v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( dword_1001DE8C == 0 )
    __initmbctable();
  byte_1001CA4C = 0;
  GetModuleFileNameA(nullptr, byte_1001C948, 0x104u);
  dword_1001C930 = (int)byte_1001C948;
  if ( dword_1001DE9C == 0 || (v6 = (char *)dword_1001DE9C, *(_BYTE *)dword_1001DE9C == 0) )
    v6 = byte_1001C948;
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
  dword_1001C914 = v5 - 1;
  dword_1001C918 = (int)v2;
  return 0;
}

// Address: 0x10009FC6
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

  v0 = dword_1001CA50;
  v1 = nullptr;
  EnvironmentStringsW = nullptr;
  if ( dword_1001CA50 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      dword_1001CA50 = 1;
      goto LABEL_8;
    }
    if ( GetLastError() == 120 )
    {
      v0 = 2;
      dword_1001CA50 = 2;
    }
    else
    {
      v0 = dword_1001CA50;
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

// Address: 0x1000A0FD
void *sub_1000A0FD()
{
  return &unk_10018E48;
}

// Address: 0x1000A123
void __cdecl sub_1000A123()
{
  ;
}

// Address: 0x1000A149
int __cdecl _heap_init(int a1)
{
  int result; // eax

  result = (int)HeapCreate(a1 == 0, 0x1000u, 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    dword_1001DD60 = 1;
    return 1;
  }
  return result;
}

// Address: 0x1000A179
BOOL _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi
  BOOL result; // eax

  if ( dword_1001DD60 == 3 )
  {
    v0 = 0;
    if ( dword_1001DD44 > 0 )
    {
      v1 = (LPVOID *)((char *)lpMem + 16);
      do
      {
        VirtualFree(*(v1 - 1), 0, 0x8000u);
        HeapFree(hHeap, 0, *v1);
        v1 += 5;
        ++v0;
      }
      while ( v0 < dword_1001DD44 );
    }
    HeapFree(hHeap, 0, lpMem);
  }
  result = HeapDestroy(hHeap);
  hHeap = nullptr;
  return result;
}

// Address: 0x1000A1ED
void nullsub_1()
{
  ;
}

// Address: 0x1000A1EE
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
    while ( v5 < &v4[3 * dword_1001B318] );
    if ( v5 < &v4[3 * dword_1001B318] && *v5 == a1 )
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
            v9 = dword_1001B30C;
            if ( dword_1001B30C < dword_1001B30C + dword_1001B310 )
            {
              v10 = 12 * dword_1001B30C;
              do
              {
                *(_DWORD *)(v10 + v3[23] + 8) = 0;
                ++v9;
                v10 += 12;
              }
              while ( v9 < dword_1001B30C + dword_1001B310 );
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

// Address: 0x1000A34E
int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}

// Address: 0x1000A370
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_1000F860;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1000A3B5
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { retn }
}

// Address: 0x1000A3D0
int __cdecl SEH_1000F860(int a1, _DWORD *TargetFrame, int a3)
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
            && _IsNonwritableInCurrentImage(&off_100139B8) != 0 )
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

// Address: 0x1000A55C
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
    dword_1001B054 = ~v4;
  }
  else
  {
    dword_1001B054 = ~__security_cookie;
  }
}

// Address: 0x1000A5F2
std::exception *__thiscall sub_1000A5F2(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000A610
void __thiscall sub_1000A610(void *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_10005DF8(this);
}

// Address: 0x1000A61B
_DWORD *__thiscall sub_1000A61B(_DWORD *this, char a2)
{
  *this = &std::bad_exception::`vftable';
  sub_10005DF8(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000A642
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

// Address: 0x1000A6A1
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

// Address: 0x1000A6EA
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

// Address: 0x1000A7CB
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

// Address: 0x1000A810
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
        sub_10006629(a1[6], v2);
    }
  }
}

// Address: 0x1000A865
int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2;
  if ( (int)a2[1] >= 0 )
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]);
  return result;
}

// Address: 0x1000A88E
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

// Address: 0x1000A909
void __cdecl __noreturn CallUnexpected()
{
  if ( _getptd()[37] != 0 )
    _inconsistency();
  unexpected();
}

// Address: 0x1000A952
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

// Address: 0x1000AAEE
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

// Address: 0x1000AC6D
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
      return sub_10006629((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_10006629((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x1000ACFF
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

// Address: 0x1000AD6D
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

// Address: 0x1000AE61
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
                sub_1000A5F2((std::exception *)pExceptionObject, "bad exception");
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

// Address: 0x1000B1A8
std::exception *__thiscall sub_1000B1A8(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000B1C5
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

// Address: 0x1000B2AB
void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[30];
  if ( v0 != nullptr )
    v0();
  abort();
}

// Address: 0x1000B2E4
void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[31];
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1000B2F7
void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer((void *)dword_1001CA58);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1000B32F
PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = _encode_pointer(terminate);
  dword_1001CA58 = (int)result;
  return result;
}

// Address: 0x1000B340
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

// Address: 0x1000B38C
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

// Address: 0x1000B413
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

// Address: 0x1000B4F6
int has_osfxsr_set()
{
  return 1;
}

// Address: 0x1000B546
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

// Address: 0x1000B5A8
int sub_1000B5A8()
{
  dword_1001DD5C = _get_sse2_info();
  return 0;
}

// Address: 0x1000B5B5
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

// Address: 0x1000B5E4
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
  v3 = &unk_1001B340 - (_UNKNOWN *)a1;
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

// Address: 0x1000B648
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

// Address: 0x1000B7DB
volatile LONG *__updatetmbcinfo()
{
  DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = _getptd();
  if ( (dword_1001B864 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != lpAddend )
    {
      if ( v1 != nullptr && InterlockedDecrement(v1) == 0 && v1 != (volatile LONG *)&unk_1001B340 )
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

// Address: 0x1000B87F
UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, nullptr);
  dword_1001CA5C = 0;
  switch ( a1 )
  {
    case -2:
      dword_1001CA5C = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_1001CA5C = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_1001CA5C = 1;
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

// Address: 0x1000B8FB
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
      if ( dword_1001B770[i] == SystemCP )
      {
        memset(a2 + 7, 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_1001B780 + 48 * v19;
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
              *((_BYTE *)a2 + v10 + 29) |= byte_1001B76C[v18];
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
        v13 = (_WORD *)((char *)&unk_1001B774 + v12);
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
    if ( dword_1001CA5C == 0 )
      return -1;
  }
  setSBCS(a2);
  return 0;
}

// Address: 0x1000BAE0
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
        if ( v4 != (_DWORD *)&unk_1001B340 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( InterlockedDecrement((volatile LONG *)v1[26]) == 0 && (_UNKNOWN *)v1[26] != &unk_1001B340 )
        free((void *)v1[26]);
      v1[26] = (DWORD)v4;
      InterlockedIncrement(v4);
      if ( (v1[28] & 2) == 0 && (dword_1001B864 & 1) == 0 )
      {
        _lock(13);
        dword_1001CA6C = v4[1];
        dword_1001CA70 = v4[2];
        dword_1001CA74 = v4[3];
        for ( i = 0; i < 5; ++i )
          word_1001CA60[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_1001B560[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_1001B668[k] = *((_BYTE *)v4 + k + 285);
        if ( InterlockedDecrement(lpAddend) == 0 && lpAddend != (volatile LONG *)&unk_1001B340 )
          free((void *)lpAddend);
        lpAddend = v4;
        InterlockedIncrement(v4);
        _unlock(13);
      }
    }
  }
  return v10;
}

// Address: 0x1000BC7A
int __initmbctable()
{
  if ( dword_1001DE8C == 0 )
  {
    _setmbcp(-3);
    dword_1001DE8C = 1;
  }
  return 0;
}

// Address: 0x1000BC98
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
  if ( v2 != nullptr && v2 != &off_1001BDF8 )
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
  if ( (_UNKNOWN **)v7 != &off_1001BD38 && *(_DWORD *)(v7 + 180) == 0 )
  {
    __free_lc_time(*((_DWORD *)Block + 53));
    free(*((void **)Block + 53));
  }
  v8 = (void **)(Block + 80);
  for ( Blocka = 6; Blocka != 0; --Blocka )
  {
    if ( *(v8 - 2) != &unk_1001B868 && *v8 != nullptr && *(_DWORD *)*v8 == 0 )
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

// Address: 0x1000BDE1
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
    if ( *(v2 - 2) != (volatile LONG *)&unk_1001B868 && *v2 != nullptr )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
      InterlockedIncrement(v2[1]);
    v2 += 4;
  }
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}

// Address: 0x1000BE70
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
      if ( *(v2 - 2) != (volatile LONG *)&unk_1001B868 && *v2 != nullptr )
        InterlockedDecrement(*v2);
      if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
        InterlockedDecrement(v2[1]);
      v2 += 4;
    }
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
  }
  return lpAddend;
}

// Address: 0x1000BF09
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
      if ( *v2 == 0 && v2 != (volatile LONG *)&unk_1001B870 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}

// Address: 0x1000BF47
DWORD __updatetlocinfo()
{
  DWORD *v0; // esi
  DWORD v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_1001B864 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = _getptd()[27];
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)v0 + 27, (volatile LONG *)off_1001B948);
    _unlock(12);
    v1 = (DWORD)v3;
  }
  if ( v1 == 0 )
    _amsg_exit(32);
  return v1;
}

// Address: 0x1000BFBD
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

// Address: 0x1000C00E
int __cdecl isdigit(int C)
{
  if ( dword_1001CA78 != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_1001B938[C] & 4;
}

// Address: 0x1000C03C
int __cdecl _isxdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale);
  if ( *((int *)v3.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)v3.locinfo + 50) + 2 * C) & 0x80;
  else
    result = _isctype_l(C, 128, &v3);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x1000C092
int __cdecl isxdigit(int C)
{
  if ( dword_1001CA78 != 0 )
    return _isxdigit_l(C, nullptr);
  else
    return off_1001B938[C] & 0x80;
}

// Address: 0x1000C0C2
int __cdecl _isspace_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale);
  if ( *((int *)v3.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)v3.locinfo + 50) + 2 * C) & 8;
  else
    result = _isctype_l(C, 8, &v3);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x1000C113
int __cdecl isspace(int C)
{
  if ( dword_1001CA78 != 0 )
    return _isspace_l(C, nullptr);
  else
    return off_1001B938[C] & 8;
}

// Address: 0x1000C141
int __cdecl _filbuf(FILE *File)
{
  int flag; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int *v5; // edi
  _BYTE *v6; // eax
  int v7; // eax
  char *ptr; // ecx
  int result; // eax
  char *base; // [esp-8h] [ebp-10h]
  unsigned int bufsiz; // [esp-4h] [ebp-Ch]

  if ( File == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  flag = File->_flag;
  if ( (flag & 0x83) == 0 || (flag & 0x40) != 0 )
    return -1;
  if ( (flag & 2) != 0 )
  {
    File->_flag = flag | 0x20;
    return -1;
  }
  v2 = flag | 1;
  File->_flag = v2;
  if ( (v2 & 0x10C) != 0 )
    File->_ptr = File->_base;
  else
    _getbuf(File);
  bufsiz = File->_bufsiz;
  base = File->_base;
  v3 = _fileno(File);
  v4 = _read(v3, base, bufsiz);
  File->_cnt = v4;
  if ( v4 == 0 || v4 == -1 )
  {
    File->_flag |= v4 != 0 ? 32 : 16;
    File->_cnt = 0;
    return -1;
  }
  if ( (File->_flag & 0x82) == 0 )
  {
    if ( _fileno(File) == -1 || _fileno(File) == -2 )
    {
      v6 = &unk_1001B2C8;
    }
    else
    {
      v5 = &dword_1001DD80[_fileno(File) >> 5];
      v6 = (_BYTE *)(*v5 + ((_fileno(File) & 0x1F) << 6));
    }
    if ( (v6[4] & 0x82) == 0x82 )
      File->_flag |= 0x2000u;
  }
  if ( File->_bufsiz == 512 )
  {
    v7 = File->_flag;
    if ( (v7 & 8) != 0 && (v7 & 0x400) == 0 )
      File->_bufsiz = 4096;
  }
  ptr = File->_ptr;
  --File->_cnt;
  result = (unsigned __int8)*ptr;
  File->_ptr = ptr + 1;
  return result;
}

// Address: 0x1000C26C
int __cdecl _ungetc_nolock(int Character, FILE *Stream)
{
  int v2; // eax
  _BYTE *v3; // ecx
  char *v4; // eax
  int flag; // eax
  char *v7; // eax
  int v8; // eax

  if ( (Stream->_flag & 0x40) == 0 )
  {
    v2 = _fileno(Stream);
    if ( v2 == -1 || v2 == -2 )
      v3 = &unk_1001B2C8;
    else
      v3 = (_BYTE *)(dword_1001DD80[v2 >> 5] + ((v2 & 0x1F) << 6));
    if ( (v3[36] & 0x7F) != 0
      || (v2 == -1 || v2 == -2
        ? (v4 = (char *)&unk_1001B2C8)
        : (v4 = (char *)(dword_1001DD80[v2 >> 5] + ((v2 & 0x1F) << 6))),
          v4[36] < 0) )
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return -1;
    }
  }
  if ( Character == -1 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && ((flag & 0x80u) == 0 || (flag & 2) != 0) )
    return -1;
  if ( Stream->_base == nullptr )
    _getbuf(Stream);
  if ( Stream->_ptr == Stream->_base )
  {
    if ( Stream->_cnt != 0 )
      return -1;
    ++Stream->_ptr;
  }
  v7 = --Stream->_ptr;
  if ( (Stream->_flag & 0x40) != 0 )
  {
    if ( *v7 != (_BYTE)Character )
    {
      Stream->_ptr = v7 + 1;
      return -1;
    }
  }
  else
  {
    *v7 = Character;
  }
  v8 = Stream->_flag;
  ++Stream->_cnt;
  Stream->_flag = v8 & 0xFFFFFFEE | 1;
  return (unsigned __int8)Character;
}

// Address: 0x1000C35D
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

// Address: 0x1000C474
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x1000C48E
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

// Address: 0x1000C4C6
int __cdecl isleadbyte(int C)
{
  return _isleadbyte_l(C, nullptr);
}

// Address: 0x1000C4D9
int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    v1 = &off_1001B958[i];
    result = (int (*)())_encode_pointer(off_1001B958[i]);
    *v1 = result;
  }
  return result;
}

// Address: 0x1000C4FA
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x1000C530
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x1000C564
int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_1001CAA0;
  while ( 1 )
  {
    if ( dword_1001B984[2 * v0] == 1 )
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

// Address: 0x1000C5AF
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
  while ( (int)v0 < (int)&off_1001BAA0 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 != nullptr && v2[1] == (LPCRITICAL_SECTION)1 )
      DeleteCriticalSection(*v2);
    v2 += 2;
  }
  while ( (int)v2 < (int)&off_1001BAA0 );
}

// Address: 0x1000C606
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}

// Address: 0x1000C61D
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

// Address: 0x1000C6E0
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 == nullptr && _mtinitlocknum(a1) == 0 )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}

// Address: 0x1000C713
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 20 * dword_1001DD44; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x1000C743
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
      if ( dword_1001CBF0 != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_1001CBF0 + 3) + (dword_1001DD58 << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_1001CBF0 + 2) |= 0x80000000 >> dword_1001DD58;
        *(_DWORD *)(*((_DWORD *)dword_1001CBF0 + 4) + 4 * dword_1001DD58 + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_1001CBF0 + 4) + 67);
        v20 = (LPVOID *)dword_1001CBF0;
        if ( *(_BYTE *)(*((_DWORD *)dword_1001CBF0 + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_1001CBF0 + 1) &= ~1u;
          v20 = (LPVOID *)dword_1001CBF0;
        }
        if ( v20[2] == (LPVOID)-1 )
        {
          VirtualFree(v20[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_1001CBF0 + 4));
          memcpy(
            dword_1001CBF0,
            (char *)dword_1001CBF0 + 20,
            (size_t)lpMem + 20 * dword_1001DD44 - (_DWORD)dword_1001CBF0 - 20);
          --dword_1001DD44;
          if ( a1 > dword_1001CBF0 )
            a1 -= 5;
          dword_1001DD50 = (int)lpMem;
        }
      }
      dword_1001CBF0 = a1;
      dword_1001DD58 = v4;
      return a1;
    }
  }
  return result;
}

// Address: 0x1000CA59
char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v0 = dword_1001DD44;
  if ( dword_1001DD44 == dword_1001DD54 )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_1001DD54 + 16));
    if ( v1 == nullptr )
      return nullptr;
    dword_1001DD54 += 16;
    v0 = dword_1001DD44;
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
  ++dword_1001DD44;
  **((_DWORD **)v3 + 4) = -1;
  return v3;
}

// Address: 0x1000CB09
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

// Address: 0x1000CC11
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

// Address: 0x1000CEF2
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

  v1 = (char *)lpMem + 20 * dword_1001DD44;
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
  for ( i = (char *)dword_1001DD50; ; i += 20 )
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
      if ( (unsigned int)i >= dword_1001DD50 || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
        break;
    }
    if ( i == (char *)dword_1001DD50 )
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
          if ( (unsigned int)i >= dword_1001DD50 || *((_DWORD *)i + 2) != 0 )
            break;
        }
        if ( i == (char *)dword_1001DD50 )
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
  dword_1001DD50 = (int)i;
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
  if ( v24 == 0 && i == dword_1001CBF0 && v31 == dword_1001DD58 )
    dword_1001CBF0 = nullptr;
  *v6 = v31;
  return v23 + 1;
}

// Address: 0x1000D1D7
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
  v7 = (_BYTE *)(dword_1001DD80[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
  *v7 &= ~2u;
  return lDistanceToMove;
}

// Address: 0x1000D25C
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
  v4 = &dword_1001DD80[FileHandle >> 5];
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

// Address: 0x1000D375
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
  v4 = &dword_1001DD80[FileHandle >> 5];
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

// Address: 0x1000DAA8
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
    || (v4 = &dword_1001DD80[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x1000DB84
int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_1001CBF8;
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

// Address: 0x1000DBCD
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return 0;
  }
  else if ( FileHandle >= 0 && FileHandle < uNumber )
  {
    return *(_BYTE *)(dword_1001DD80[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) & 0x40;
  }
  else
  {
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
}

// Address: 0x1000DC31
_UNKNOWN **sub_1000DC31()
{
  return &off_1001BAA0;
}

// Address: 0x1000DC37
int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_1001DD40;
  if ( dword_1001DD40 == 0 )
  {
    v0 = 512;
LABEL_5:
    dword_1001DD40 = v0;
    goto LABEL_6;
  }
  if ( dword_1001DD40 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)_calloc_crt(v0, 4);
  dword_1001CD3C = v1;
  if ( v1 == nullptr )
  {
    dword_1001DD40 = 20;
    v1 = (char *)_calloc_crt(0x14u, 4);
    dword_1001CD3C = v1;
    if ( v1 == nullptr )
      return 26;
  }
  v3 = 0;
  v4 = &off_1001BAA0;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&unk_1001BD20 )
      break;
    v1 = (char *)dword_1001CD3C;
  }
  v5 = 0;
  v6 = &unk_1001BAB0;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_1001DD80[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || v7 == 0 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_1001BB10 );
  return 0;
}

// Address: 0x1000DCE8
void __endstdio()
{
  sub_10011094();
  if ( byte_1001C938 != 0 )
    _fcloseall();
  free(dword_1001CD3C);
}

// Address: 0x1000DD08
void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1001BAA0 || Stream > &stru_1001BD00 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_1001BAA0) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}

// Address: 0x1000DD49
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

// Address: 0x1000DD7B
void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1001BAA0 || Stream > &stru_1001BD00 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_1001BAA0) >> 5) + 16);
  }
}

// Address: 0x1000DDB7
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

// Address: 0x1000DDE6
int __cdecl _get_printf_count_output()
{
  return dword_1001CBFC == (__security_cookie | 1);
}

// Address: 0x1000DDFC
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

// Address: 0x1000DF68
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x1000DF90
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

// Address: 0x1000E025
int __usercall write_char@<eax>(FILE *File@<ecx>, int result@<eax>, _DWORD *a3@<esi>)
{
  bool v3; // sf

  if ( ((File->_flag & 0x40) == 0 || File->_base != nullptr)
    && ((v3 = File->_cnt - 1 < 0, --File->_cnt, v3)
      ? (result = _flsbuf((char)result, File))
      : (*File->_ptr = result, ++File->_ptr, result = (unsigned __int8)result),
        result == -1) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}

// Address: 0x1000E058
_DWORD *__usercall write_multi_char@<eax>(_DWORD *result@<eax>, char a2, int a3, FILE *File)
{
  _DWORD *v4; // esi

  v4 = result;
  do
  {
    if ( a3 <= 0 )
      break;
    LOBYTE(result) = a2;
    --a3;
    result = (_DWORD *)write_char(File, (int)result, v4);
  }
  while ( *v4 != -1 );
  return result;
}

// Address: 0x1000E07E
int *__usercall write_string@<eax>(int *result@<eax>, _BYTE *a2@<ecx>, int a3@<edi>, int a4)
{
  int *v4; // esi

  v4 = result;
  if ( (*(_BYTE *)(a3 + 12) & 0x40) == 0 || *(_DWORD *)(a3 + 8) != 0 )
  {
    while ( a4 > 0 )
    {
      LOBYTE(result) = *a2;
      --a4;
      result = (int *)write_char((FILE *)a3, (int)result, v4);
      ++a2;
      if ( *v4 == -1 )
      {
        result = _errno();
        if ( *result != 42 )
          return result;
        LOBYTE(result) = 63;
        result = (int *)write_char((FILE *)a3, (int)result, v4);
      }
    }
  }
  else
  {
    *result += a4;
    return (int *)a4;
  }
  return result;
}

// Address: 0x1000E0CB
int __cdecl _output_s_l(FILE *Stream, _BYTE *a2, struct localeinfo_struct *a3, int *a4)
{
  _BYTE *v4; // ebx
  int *v5; // edi
  int v7; // eax
  _BYTE *v8; // ecx
  char *v9; // eax
  unsigned __int8 v10; // dl
  _BYTE *v11; // ebx
  int v12; // eax
  int v13; // eax
  char v14; // al
  bool v15; // zf
  int v16; // eax
  char *v17; // ebx
  int v18; // ecx
  char *v19; // edi
  char *v20; // eax
  _DWORD *v21; // edi
  __int16 *v22; // eax
  char *v23; // ecx
  int v24; // eax
  _WORD *v25; // esi
  _DWORD *v26; // edi
  __int64 v27; // rax
  int v28; // esi
  void *v29; // eax
  _DWORD *v30; // edi
  void (__cdecl *v31)(__int64 *, char *, int, int, int, int, __crt_locale_pointers *); // eax
  int v32; // edi
  void (__cdecl *v33)(char *, __crt_locale_pointers *); // eax
  void (__cdecl *v34)(char *, __crt_locale_pointers *); // eax
  unsigned int v35; // ebx
  unsigned int v36; // edi
  char *j; // esi
  int v38; // eax
  unsigned __int64 v39; // rcx
  int v40; // ecx
  char *v41; // eax
  char *v42; // esi
  char *i; // eax
  int v44; // ebx
  FILE *v45; // edi
  wchar_t *v46; // esi
  wchar_t v47; // ax
  unsigned __int8 v48; // al
  int v49; // [esp-14h] [ebp-298h]
  int v50; // [esp-10h] [ebp-294h]
  unsigned __int64 v51; // [esp-10h] [ebp-294h]
  int v52; // [esp-Ch] [ebp-290h]
  int v53; // [esp-8h] [ebp-28Ch]
  __int64 v54; // [esp+Ch] [ebp-278h] BYREF
  int v55; // [esp+14h] [ebp-270h] BYREF
  int v56; // [esp+18h] [ebp-26Ch]
  int v57; // [esp+20h] [ebp-264h]
  FILE *File; // [esp+24h] [ebp-260h]
  int v59; // [esp+28h] [ebp-25Ch]
  int v60; // [esp+2Ch] [ebp-258h]
  void *Block; // [esp+30h] [ebp-254h]
  __crt_locale_pointers Locale; // [esp+34h] [ebp-250h] BYREF
  int v63; // [esp+3Ch] [ebp-248h]
  char v64; // [esp+40h] [ebp-244h]
  int v65; // [esp+44h] [ebp-240h]
  _BYTE *v66; // [esp+48h] [ebp-23Ch]
  int v67; // [esp+4Ch] [ebp-238h]
  int v68; // [esp+50h] [ebp-234h]
  int v69; // [esp+54h] [ebp-230h]
  _BYTE v70[4]; // [esp+58h] [ebp-22Ch] BYREF
  int v71; // [esp+5Ch] [ebp-228h] BYREF
  int v72; // [esp+60h] [ebp-224h]
  int SizeConverted; // [esp+64h] [ebp-220h] BYREF
  char *v74; // [esp+68h] [ebp-21Ch]
  int v75; // [esp+6Ch] [ebp-218h]
  unsigned __int8 v76; // [esp+73h] [ebp-211h]
  int v77; // [esp+74h] [ebp-210h]
  char MbCh[511]; // [esp+78h] [ebp-20Ch] BYREF
  char v79; // [esp+277h] [ebp-Dh] BYREF
  char v80[8]; // [esp+278h] [ebp-Ch] BYREF

  v4 = a2;
  v5 = a4;
  File = Stream;
  v72 = (int)a4;
  v59 = 0;
  v77 = 0;
  v68 = 0;
  v75 = 0;
  v69 = 0;
  v60 = 0;
  v67 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  if ( Stream == nullptr )
    goto LABEL_2;
  if ( (Stream->_flag & 0x40) == 0 )
  {
    v7 = _fileno(Stream);
    if ( v7 == -1 || v7 == -2 )
      v8 = &unk_1001B2C8;
    else
      v8 = (_BYTE *)(dword_1001DD80[v7 >> 5] + ((v7 & 0x1F) << 6));
    if ( (v8[36] & 0x7F) != 0 )
      goto LABEL_2;
    v9 = v7 == -1 || v7 == -2 ? (char *)&unk_1001B2C8 : (char *)(dword_1001DD80[v7 >> 5] + ((v7 & 0x1F) << 6));
    if ( v9[36] < 0 )
      goto LABEL_2;
  }
  if ( a2 == nullptr )
    goto LABEL_2;
  v10 = *a2;
  v71 = 0;
  SizeConverted = 0;
  v65 = 0;
  Block = nullptr;
  v76 = v10;
  if ( v10 == 0 )
    goto LABEL_222;
  while ( 1 )
  {
    v11 = v4 + 1;
    v12 = 0;
    v66 = v11;
    if ( v71 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) <= 0x58u )
      v12 = byte_10013A40[(char)v10] & 0xF;
    v13 = (unsigned __int8)byte_10013A60[9 * v12 + v65] >> 4;
    v65 = v13;
    if ( v13 == 8 )
      goto LABEL_2;
    switch ( v13 )
    {
      case 0:
        goto $NORMAL_STATE$28987;
      case 1:
        v75 = -1;
        v56 = 0;
        v60 = 0;
        v68 = 0;
        v69 = 0;
        v77 = 0;
        v67 = 0;
        goto LABEL_218;
      case 2:
        switch ( v10 )
        {
          case ' ':
            v77 |= 2u;
            break;
          case '#':
            v77 |= 0x80u;
            break;
          case '+':
            v77 |= 1u;
            break;
          case '-':
            v77 |= 4u;
            break;
          case '0':
            v77 |= 8u;
            break;
          default:
            break;
        }
        goto LABEL_218;
      case 3:
        if ( v10 == 42 )
        {
          v72 = (int)(v5 + 1);
          v68 = *v5;
          if ( v68 < 0 )
          {
            v77 |= 4u;
            v68 = -v68;
          }
        }
        else
        {
          v68 = 10 * v68 + (char)v10 - 48;
        }
        goto LABEL_218;
      case 4:
        v75 = 0;
        goto LABEL_218;
      case 5:
        if ( v10 == 42 )
        {
          v72 = (int)(v5 + 1);
          v75 = *v5;
          if ( v75 < 0 )
            v75 = -1;
        }
        else
        {
          v75 = 10 * v75 + (char)v10 - 48;
        }
        goto LABEL_218;
      case 6:
        switch ( v10 )
        {
          case 'I':
            v14 = *v11;
            if ( *v11 == 54 && v11[1] == 52 )
            {
              v77 |= 0x8000u;
              v66 = v11 + 2;
            }
            else if ( v14 == 51 && v11[1] == 50 )
            {
              v77 &= ~0x8000u;
              v66 = v11 + 2;
            }
            else if ( v14 != 100 && v14 != 105 && v14 != 111 && v14 != 117 && v14 != 120 && v14 != 88 )
            {
              v65 = 0;
$NORMAL_STATE$28987:
              v67 = 0;
              v16 = _isleadbyte_l(v10, &Locale);
              v15 = v16 == 0;
              LOBYTE(v16) = v76;
              if ( !v15 )
              {
                v16 = write_char(File, v16, &v71);
                LOBYTE(v16) = *v11;
                v66 = v11 + 1;
                if ( (_BYTE)v16 == 0 )
                  goto LABEL_2;
              }
              write_char(File, v16, &v71);
            }
            break;
          case 'h':
            v77 |= 0x20u;
            break;
          case 'l':
            if ( *v11 == 108 )
            {
              v77 |= 0x1000u;
              v66 = v11 + 1;
            }
            else
            {
              v77 |= 0x10u;
            }
            break;
          case 'w':
            v77 |= 0x800u;
            break;
          default:
            break;
        }
        goto LABEL_218;
      case 7:
        if ( (char)v10 <= 100 )
        {
          if ( v10 == 100 )
          {
LABEL_118:
            v77 |= 0x40u;
            goto LABEL_119;
          }
          if ( (char)v10 > 83 )
          {
            if ( v10 == 88 )
              goto LABEL_140;
            if ( v10 == 90 )
            {
              v22 = (__int16 *)*v5;
              v72 = (int)(v5 + 1);
              if ( v22 != nullptr && (v23 = *((char **)v22 + 1)) != nullptr )
              {
                v24 = *v22;
                v74 = v23;
                if ( (v77 & 0x800) != 0 )
                {
                  v24 /= 2;
                  v67 = 1;
                }
                else
                {
                  v67 = 0;
                }
              }
              else
              {
                v74 = off_1001B1D0;
                v24 = strlen(off_1001B1D0);
              }
              goto LABEL_189;
            }
            if ( v10 != 97 )
            {
              if ( v10 != 99 )
                goto LABEL_190;
              goto LABEL_93;
            }
          }
          else
          {
            if ( v10 == 83 )
            {
              if ( (v77 & 0x830) == 0 )
                v77 |= 0x800u;
              goto LABEL_83;
            }
            if ( v10 != 65 )
            {
              if ( v10 != 67 )
              {
                if ( v10 != 69 && v10 != 71 )
                  goto LABEL_190;
                goto LABEL_76;
              }
              if ( (v77 & 0x830) == 0 )
                v77 |= 0x800u;
LABEL_93:
              v21 = v5 + 1;
              v72 = (int)v21;
              if ( (v77 & 0x810) != 0 )
              {
                if ( wctomb_s(&SizeConverted, MbCh, 0x200u, *((_WORD *)v21 - 2)) != 0 )
                  v60 = 1;
              }
              else
              {
                MbCh[0] = *((_BYTE *)v21 - 4);
                SizeConverted = 1;
              }
              v74 = MbCh;
              goto LABEL_190;
            }
LABEL_76:
            v10 += 32;
            v56 = 1;
            v76 = v10;
          }
LABEL_77:
          v77 |= 0x40u;
          v17 = MbCh;
          v74 = MbCh;
          v57 = 512;
          if ( v75 >= 0 )
          {
            if ( v75 != 0 )
            {
              if ( v75 > 512 )
                v75 = 512;
              if ( v75 > 163 )
              {
                v28 = v75 + 349;
                v29 = _malloc_crt(v75 + 349);
                v10 = v76;
                Block = v29;
                if ( v29 != nullptr )
                {
                  v74 = (char *)v29;
                  v57 = v28;
                  v17 = (char *)v29;
                }
                else
                {
                  v75 = 163;
                }
              }
            }
            else
            {
              v75 = v10 == 103;
            }
          }
          else
          {
            v75 = 6;
          }
          v30 = v5 + 2;
          v54 = *((_QWORD *)v30 - 1);
          v53 = v56;
          v52 = v75;
          v72 = (int)v30;
          v50 = (char)v10;
          v49 = v57;
          v31 = (void (__cdecl *)(__int64 *, char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_1001B970[0]);
          v31(&v54, v17, v49, v50, v52, v53, &Locale);
          v32 = v77 & 0x80;
          if ( (v77 & 0x80) != 0 && v75 == 0 )
          {
            v33 = (void (__cdecl *)(char *, __crt_locale_pointers *))_decode_pointer(off_1001B97C);
            v33(v17, &Locale);
          }
          if ( v76 == 103 && v32 == 0 )
          {
            v34 = (void (__cdecl *)(char *, __crt_locale_pointers *))_decode_pointer(off_1001B978[0]);
            v34(v17, &Locale);
          }
          if ( *v17 == 45 )
          {
            v77 |= 0x100u;
            v74 = ++v17;
          }
          v24 = strlen(v17);
          goto LABEL_189;
        }
        if ( (char)v10 > 112 )
        {
          if ( v10 != 115 )
          {
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_190;
              v59 = 39;
              goto $COMMON_HEX$29148;
            }
LABEL_119:
            SizeConverted = 10;
            goto $COMMON_INT$29141;
          }
LABEL_83:
          v18 = v75;
          if ( v75 == -1 )
            v18 = 0x7FFFFFFF;
          v72 = (int)(v5 + 1);
          v19 = (char *)*v5;
          v74 = v19;
          if ( (v77 & 0x810) != 0 )
          {
            if ( v19 == nullptr )
              v74 = (char *)off_1001B1D4;
            v20 = v74;
            v67 = 1;
            while ( v18 != 0 )
            {
              --v18;
              if ( *(_WORD *)v20 == 0 )
                break;
              v20 += 2;
            }
            v24 = (v20 - v74) >> 1;
          }
          else
          {
            if ( v19 == nullptr )
              v74 = off_1001B1D0;
            for ( i = v74; v18 != 0; ++i )
            {
              --v18;
              if ( *i == 0 )
                break;
            }
            v24 = i - v74;
          }
LABEL_189:
          SizeConverted = v24;
          goto LABEL_190;
        }
        if ( v10 == 112 )
        {
          v75 = 8;
LABEL_140:
          v59 = 7;
$COMMON_HEX$29148:
          SizeConverted = 16;
          if ( (v77 & 0x80u) != 0 )
          {
            v70[0] = 48;
            v70[1] = v59 + 81;
            v69 = 2;
          }
          goto $COMMON_INT$29141;
        }
        if ( (char)v10 < 101 )
          goto LABEL_190;
        if ( (char)v10 <= 103 )
          goto LABEL_77;
        if ( v10 == 105 )
          goto LABEL_118;
        if ( v10 != 110 )
        {
          if ( v10 != 111 )
            goto LABEL_190;
          SizeConverted = 8;
          if ( (v77 & 0x80u) != 0 )
            v77 |= 0x200u;
$COMMON_INT$29141:
          if ( (v77 & 0x8000) != 0 || (v77 & 0x1000) != 0 )
          {
            v26 = v5 + 2;
            v27 = *((_QWORD *)v26 - 1);
          }
          else
          {
            v26 = v5 + 1;
            if ( (v77 & 0x20) != 0 )
            {
              v72 = (int)v26;
              if ( (v77 & 0x40) != 0 )
                LODWORD(v27) = *((__int16 *)v26 - 2);
              else
                LODWORD(v27) = *((unsigned __int16 *)v26 - 2);
              v27 = (int)v27;
LABEL_157:
              if ( (v77 & 0x40) != 0 && v27 < 0 )
              {
                v27 = -v27;
                v77 |= 0x100u;
              }
              v35 = HIDWORD(v27);
              v36 = v27;
              if ( (v77 & 0x9000) == 0 )
                v35 = 0;
              if ( v75 >= 0 )
              {
                v77 &= ~8u;
                if ( v75 > 512 )
                  v75 = 512;
              }
              else
              {
                v75 = 1;
              }
              if ( (v35 | (unsigned int)v27) == 0 )
                v69 = 0;
              for ( j = &v79; ; --j )
              {
                v38 = v75--;
                if ( v38 <= 0 && (v35 | v36) == 0 )
                  break;
                v51 = __PAIR64__(v35, v36);
                v39 = __PAIR64__(v35, v36) % SizeConverted;
                v40 = v39 + 48;
                v57 = HIDWORD(v39);
                v35 = (v51 / SizeConverted) >> 32;
                v36 = v51 / SizeConverted;
                if ( v40 > 57 )
                  LOBYTE(v40) = v59 + v40;
                *j = v40;
              }
              v41 = (char *)(&v79 - j);
              v42 = j + 1;
              SizeConverted = (int)v41;
              v74 = v42;
              if ( (v77 & 0x200) != 0 && (v41 == nullptr || *v42 != 48) )
              {
                *--v74 = 48;
                v24 = (int)(v41 + 1);
                goto LABEL_189;
              }
LABEL_190:
              if ( v60 != 0 )
                goto LABEL_216;
              if ( (v77 & 0x40) != 0 )
              {
                if ( (v77 & 0x100) != 0 )
                {
                  v70[0] = 45;
                  goto LABEL_198;
                }
                if ( (v77 & 1) != 0 )
                {
                  v70[0] = 43;
                  goto LABEL_198;
                }
                if ( (v77 & 2) != 0 )
                {
                  v70[0] = 32;
LABEL_198:
                  v69 = 1;
                }
              }
              v44 = v68 - SizeConverted - v69;
              if ( (v77 & 0xC) == 0 )
                write_multi_char(&v71, 32, v68 - SizeConverted - v69, File);
              v45 = File;
              write_string(&v71, v70, (int)File, v69);
              if ( (v77 & 8) != 0 && (v77 & 4) == 0 )
                write_multi_char(&v71, 48, v44, v45);
              if ( v67 != 0 && SizeConverted > 0 )
              {
                v46 = (wchar_t *)v74;
                v57 = SizeConverted;
                while ( 1 )
                {
                  v47 = *v46;
                  --v57;
                  ++v46;
                  if ( wctomb_s(&v55, v80, 6u, v47) != 0 || v55 == 0 )
                    break;
                  write_string(&v71, v80, (int)v45, v55);
                  if ( v57 == 0 )
                    goto LABEL_213;
                }
                v71 = -1;
              }
              else
              {
                write_string(&v71, v74, (int)v45, SizeConverted);
              }
LABEL_213:
              if ( v71 >= 0 && (v77 & 4) != 0 )
                write_multi_char(&v71, 32, v44, v45);
              goto LABEL_216;
            }
            LODWORD(v27) = *(v26 - 1);
            if ( (v77 & 0x40) != 0 )
              v27 = (int)v27;
            else
              HIDWORD(v27) = 0;
          }
          v72 = (int)v26;
          goto LABEL_157;
        }
        v25 = (_WORD *)*v5;
        v72 = (int)(v5 + 1);
        if ( _get_printf_count_output() == 0 )
          goto LABEL_2;
        if ( (v77 & 0x20) != 0 )
          *v25 = v71;
        else
          *(_DWORD *)v25 = v71;
        v60 = 1;
LABEL_216:
        if ( Block != nullptr )
        {
          free(Block);
          Block = nullptr;
        }
LABEL_218:
        v4 = v66;
        v48 = *v66;
        v76 = v48;
        if ( v48 == 0 )
          goto LABEL_220;
        v5 = (int *)v72;
        v10 = v48;
        break;
      default:
        goto LABEL_218;
    }
  }
LABEL_220:
  if ( v65 == 0 || v65 == 7 )
  {
LABEL_222:
    if ( v64 != 0 )
      *(_DWORD *)(v63 + 112) &= ~2u;
    return v71;
  }
  else
  {
LABEL_2:
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v64 != 0 )
      *(_DWORD *)(v63 + 112) &= ~2u;
    return -1;
  }
}

// Address: 0x1000EC9B
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

// Address: 0x1000ECF2
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

// Address: 0x1000ED81
int __cdecl _initp_misc_winsig(int a1)
{
  dword_1001CC00 = a1;
  dword_1001CC04 = a1;
  dword_1001CC08 = a1;
  dword_1001CC0C = a1;
  return a1;
}

// Address: 0x1000ED9F
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
  while ( result < a2 + 12 * dword_1001B318 );
  if ( result >= a2 + 12 * dword_1001B318 || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}

// Address: 0x1000EDD6
PVOID sub_1000EDD6()
{
  return _decode_pointer((void *)dword_1001CC08);
}

// Address: 0x1000EDE3
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
      v4 = &dword_1001CC0C;
      v5 = (void *)dword_1001CC0C;
      goto LABEL_18;
    }
    if ( Signal == 21 )
    {
      v4 = &dword_1001CC04;
      v5 = (void *)dword_1001CC04;
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
      v4 = &dword_1001CC00;
      v5 = (void *)dword_1001CC00;
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
      v4 = &dword_1001CC08;
      v5 = (void *)dword_1001CC08;
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
    for ( i = dword_1001B30C; i < dword_1001B30C + dword_1001B310; ++i )
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

// Address: 0x1000EF94
int __cdecl sub_1000EF94(int a1, int a2, int a3)
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
  if ( dword_1001CC14 == 0 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( MessageBoxA == nullptr )
      return 0;
    dword_1001CC14 = (int)_encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v5, "GetActiveWindow");
    dword_1001CC18 = (int)_encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v5, "GetLastActivePopup");
    dword_1001CC1C = (int)_encode_pointer(GetLastActivePopup);
    GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                          v5,
                                                                                          "GetUserObjectInformationA");
    dword_1001CC24 = (int)_encode_pointer(GetUserObjectInformationA);
    if ( dword_1001CC24 != 0 )
    {
      GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v5, "GetProcessWindowStation");
      dword_1001CC20 = (int)_encode_pointer(GetProcessWindowStation);
    }
  }
  if ( (PVOID)dword_1001CC20 == v3
    || (PVOID)dword_1001CC24 == v3
    || (v11 = (int (*)(void))_decode_pointer((void *)dword_1001CC20),
        v12 = _decode_pointer((void *)dword_1001CC24),
        v13 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v12,
        v11 == nullptr)
    || v12 == nullptr
    || (v14 = v11()) != 0 && v13(v14, 1, v19, 12, v20) != 0 && (v19[8] & 1) != 0 )
  {
    if ( (PVOID)dword_1001CC18 != v3 )
    {
      v15 = (int (*)(void))_decode_pointer((void *)dword_1001CC18);
      if ( v15 != nullptr )
      {
        v21 = v15();
        if ( v21 != 0 && (PVOID)dword_1001CC1C != v3 )
        {
          v16 = (int (__stdcall *)(int))_decode_pointer((void *)dword_1001CC1C);
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
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_1001CC14);
  if ( v17 != nullptr )
    return v17(v21, a1, a2, a3);
  return 0;
}

// Address: 0x1000F0FD
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

// Address: 0x1000F1B2
int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_1001C2A0;
      dword_1001C2A0 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_1001C2A0;
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x1000F1FD
void __cdecl _freea(void *Memory)
{
  if ( Memory != nullptr && *((_DWORD *)Memory - 2) == 56797 )
    free((char *)Memory - 8);
}

// Address: 0x1000F220
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

// Address: 0x1000F2B0
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

// Address: 0x1000F2F6
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x1000F312
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x1000F329
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x1000F342
void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &ReturnPoint, nullptr, nullptr);
}

// Address: 0x1000F35C
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x1000F373
size_t __cdecl _msize(void *Block)
{
  size_t v2; // esi
  char *v3; // [esp+10h] [ebp-20h]
  int v4; // [esp+14h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_1001DD60 != 3 )
      return HeapSize(hHeap, 0, Block);
    _lock(4);
    v3 = __sbh_find_block((int)Block);
    v2 = v3 != nullptr ? *((_DWORD *)Block - 1) - 9 : v4;
    _unlock(4);
    if ( v3 == nullptr )
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

// Address: 0x1000F416
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
      if ( dword_1001CBF4 == 0 )
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
    if ( dword_1001DD60 == 3 )
    {
      v4 = (v4 + 15) & 0xFFFFFFF0;
      if ( Sizea <= dword_1001DD4C )
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

// Address: 0x1000F534
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
    if ( dword_1001DD60 == 3 )
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
          if ( v3 <= dword_1001DD4C )
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
        if ( dword_1001CBF4 == 0 )
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
        if ( dword_1001CBF4 == 0 )
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

// Address: 0x1000F74F
void *__cdecl _recalloc(void *Block, size_t Count, size_t Size)
{
  size_t v3; // ebx
  size_t v5; // esi
  char *v6; // eax
  void *v7; // edi

  v3 = 0;
  if ( Count != 0 && 0xFFFFFFE0 / Count < Size )
  {
    *_errno() = 12;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return nullptr;
  }
  else
  {
    v5 = Size * Count;
    if ( Block != nullptr )
      v3 = _msize(Block);
    v6 = (char *)realloc(Block, v5);
    v7 = v6;
    if ( v6 != nullptr && v3 < v5 )
      memset(&v6[v3], 0, v5 - v3);
    return v7;
  }
}

// Address: 0x1000F7D0
BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  return *(_WORD *)a1 == 23117 && *(_DWORD *)(v2 = a1 + *(_DWORD *)(a1 + 60)) == 17744 && *(_WORD *)(v2 + 24) == 267;
}

// Address: 0x1000F810
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

// Address: 0x1000F860
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000)
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x1000F91D
int __cdecl sub_1000F91D(int a1)
{
  dword_1001CC64 = a1;
  return a1;
}

// Address: 0x1000F92C
int __cdecl sub_1000F92C(int a1)
{
  dword_1001CC68 = a1;
  return a1;
}

// Address: 0x1000F93B
BOOL __cdecl __crtInitCritSecAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x1000F99B
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

// Address: 0x1000F9EE
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x1000FA06
// Microsoft VisualC 2-14/net runtime
BOOL __cdecl unknown_libname_2(int a1)
{
  return a1 != 0;
}

// Address: 0x1000FA18
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x1000FA38
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

// Address: 0x1000FA7D
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

// Address: 0x1000FB01
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

// Address: 0x1000FB24
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x1000FB38);
}

// Address: 0x1000FB2D
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_1001BD28 = a3;
  unk_1001BD24 = result;
  unk_1001BD2C = a2;
  return result;
}

// Address: 0x1000FB4C
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x1000FB4F
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
  if ( dword_1001CC6C == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, nullptr, 0) != 0 )
    {
      dword_1001CC6C = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_1001CC6C = 2;
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
  if ( dword_1001CC6C != 2 && dword_1001CC6C != 0 )
  {
    if ( dword_1001CC6C == 1 )
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

// Address: 0x1000FEF4
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

// Address: 0x1000FF39
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

  v8 = dword_1001CC70;
  v9 = nullptr;
  v10 = v7;
  if ( dword_1001CC70 == 0 )
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, CharType) )
    {
      dword_1001CC70 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v8 = 2;
      dword_1001CC70 = 2;
    }
    else
    {
      v8 = dword_1001CC70;
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

// Address: 0x100100F3
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

// Address: 0x10010135
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

// Address: 0x100102CA
void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)a1 != off_1001BDF8 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_1001BDFC )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_1001BE00 )
      free(v1);
  }
}

// Address: 0x1001030F
void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_1001BE04 )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_1001BE08 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_1001BE0C )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_1001BE10 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_1001BE14 )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_1001BE18 )
      free(*(void **)(a1 + 32));
    v1 = *(void **)(a1 + 36);
    if ( v1 != off_1001BE1C )
      free(v1);
  }
}

// Address: 0x100103A0
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

// Address: 0x100103F0
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

// Address: 0x10010430
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

// Address: 0x100104E8
unsigned int __cdecl _read_nolock(int FileHandle, CHAR *lpBuffer, DWORD nNumberOfBytesToRead)
{
  DWORD v3; // edx
  unsigned int result; // eax
  int *v5; // edi
  int v6; // esi
  int v7; // eax
  char v8; // cl
  CHAR *v9; // eax
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ecx
  CHAR v13; // cl
  int v14; // ecx
  CHAR v15; // cl
  int v16; // ecx
  bool v17; // zf
  CHAR v18; // cl
  int v19; // ecx
  int v20; // eax
  char *v21; // eax
  CHAR *v22; // ebx
  CHAR v23; // al
  _BYTE *v24; // eax
  _BYTE *v25; // ebx
  int v26; // ecx
  int v27; // eax
  char v28; // dl
  int v29; // ecx
  _BYTE *v30; // ebx
  int v31; // ebx
  DWORD LastError; // eax
  int v33; // edx
  BOOL v34; // ecx
  CHAR *v35; // ebx
  __int16 v36; // cx
  _BYTE *v37; // esi
  __int16 v38; // [esp-Ch] [ebp-2Ch]
  DWORD v39; // [esp+4h] [ebp-1Ch]
  DWORD NumberOfBytesRead; // [esp+8h] [ebp-18h] BYREF
  int v41; // [esp+Ch] [ebp-14h]
  unsigned int v42; // [esp+10h] [ebp-10h]
  LPCCH lpMultiByteStr; // [esp+14h] [ebp-Ch]
  __int16 v44; // [esp+18h] [ebp-8h] BYREF
  char v45; // [esp+1Eh] [ebp-2h]
  char Buffer; // [esp+1Fh] [ebp-1h] BYREF
  LPCCH nNumberOfBytesToReada; // [esp+30h] [ebp+10h]
  LPCCH nNumberOfBytesToReadb; // [esp+30h] [ebp+10h]

  v3 = nNumberOfBytesToRead;
  v41 = -2;
  v39 = nNumberOfBytesToRead;
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
  v5 = &dword_1001DD80[FileHandle >> 5];
  v6 = (FileHandle & 0x1F) << 6;
  v7 = v6 + *v5;
  v8 = *(_BYTE *)(v7 + 4);
  if ( (v8 & 1) == 0 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
LABEL_19:
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  if ( nNumberOfBytesToRead > 0x7FFFFFFF )
    goto LABEL_18;
  v42 = 0;
  if ( nNumberOfBytesToRead == 0 || (v8 & 2) != 0 )
    return 0;
  if ( lpBuffer == nullptr )
    goto LABEL_18;
  v45 = (char)(2 * *(_BYTE *)(v7 + 36)) >> 1;
  if ( v45 != 1 )
  {
    if ( v45 != 2 )
    {
LABEL_16:
      v9 = lpBuffer;
      lpMultiByteStr = lpBuffer;
      goto LABEL_26;
    }
    if ( (nNumberOfBytesToRead & 1) == 0 )
    {
      nNumberOfBytesToRead &= ~1u;
      goto LABEL_16;
    }
LABEL_18:
    *__doserrno() = 0;
    *_errno() = 22;
    goto LABEL_19;
  }
  if ( (nNumberOfBytesToRead & 1) != 0 )
    goto LABEL_18;
  nNumberOfBytesToRead = 4;
  if ( v3 >> 1 >= 4 )
    nNumberOfBytesToRead = v3 >> 1;
  lpMultiByteStr = (LPCCH)_malloc_crt(nNumberOfBytesToRead);
  if ( lpMultiByteStr == nullptr )
  {
    *_errno() = 12;
    *__doserrno() = 8;
    return -1;
  }
  v10 = _lseeki64_nolock(FileHandle, 0, 0, 1u);
  v11 = *v5;
  *(_DWORD *)(v6 + v11 + 40) = v10;
  v9 = (CHAR *)lpMultiByteStr;
  *(_DWORD *)(v6 + v11 + 44) = HIDWORD(v10);
LABEL_26:
  v12 = v6 + *v5;
  if ( (*(_BYTE *)(v12 + 4) & 0x48) != 0 )
  {
    v13 = *(_BYTE *)(v12 + 5);
    if ( v13 != 10 && nNumberOfBytesToRead != 0 )
    {
      *v9 = v13;
      v14 = *v5;
      ++v9;
      --nNumberOfBytesToRead;
      v42 = 1;
      *(_BYTE *)(v6 + v14 + 5) = 10;
      if ( v45 != 0 )
      {
        v15 = *(_BYTE *)(v6 + *v5 + 37);
        if ( v15 != 10 && nNumberOfBytesToRead != 0 )
        {
          *v9 = v15;
          v16 = *v5;
          ++v9;
          --nNumberOfBytesToRead;
          v17 = v45 == 1;
          v42 = 2;
          *(_BYTE *)(v6 + v16 + 37) = 10;
          if ( v17 )
          {
            v18 = *(_BYTE *)(v6 + *v5 + 38);
            if ( v18 != 10 && nNumberOfBytesToRead != 0 )
            {
              *v9 = v18;
              v19 = *v5;
              ++v9;
              --nNumberOfBytesToRead;
              v42 = 3;
              *(_BYTE *)(v6 + v19 + 38) = 10;
            }
          }
        }
      }
    }
  }
  if ( !ReadFile(*(HANDLE *)(v6 + *v5), v9, nNumberOfBytesToRead, &NumberOfBytesRead, nullptr)
    || (NumberOfBytesRead & 0x80000000) != 0
    || NumberOfBytesRead > nNumberOfBytesToRead )
  {
    LastError = GetLastError();
    if ( LastError == 5 )
    {
      *_errno() = 9;
      *__doserrno() = 5;
      goto LABEL_93;
    }
    if ( LastError == 109 )
    {
      v41 = 0;
      goto $error_return$28993;
    }
    goto LABEL_92;
  }
  v20 = *v5;
  v42 += NumberOfBytesRead;
  v21 = (char *)(v6 + v20 + 4);
  if ( *v21 < 0 )
  {
    if ( v45 != 2 )
    {
      if ( NumberOfBytesRead != 0 && *lpMultiByteStr == 10 )
        *v21 |= 4u;
      else
        *v21 &= ~4u;
      v22 = (CHAR *)lpMultiByteStr;
      nNumberOfBytesToReada = lpMultiByteStr;
      v42 += (unsigned int)lpMultiByteStr;
      if ( (unsigned int)lpMultiByteStr < v42 )
      {
        do
        {
          v23 = *nNumberOfBytesToReada;
          if ( *nNumberOfBytesToReada == 26 )
          {
            v24 = (_BYTE *)(v6 + *v5 + 4);
            if ( (*v24 & 0x40) != 0 )
              *v22++ = *nNumberOfBytesToReada;
            else
              *v24 |= 2u;
            break;
          }
          if ( v23 == 13 )
          {
            if ( (unsigned int)nNumberOfBytesToReada < v42 - 1 )
            {
              if ( nNumberOfBytesToReada[1] == 10 )
              {
                nNumberOfBytesToReada += 2;
                goto LABEL_52;
              }
              ++nNumberOfBytesToReada;
LABEL_63:
              *v22 = 13;
LABEL_64:
              ++v22;
              continue;
            }
            ++nNumberOfBytesToReada;
            if ( !ReadFile(*(HANDLE *)(v6 + *v5), &Buffer, 1u, &NumberOfBytesRead, nullptr) && GetLastError() != 0
              || NumberOfBytesRead == 0 )
            {
              goto LABEL_63;
            }
            if ( (*(_BYTE *)(v6 + *v5 + 4) & 0x48) != 0 )
            {
              if ( Buffer != 10 )
              {
                *v22 = 13;
                *(_BYTE *)(v6 + *v5 + 5) = Buffer;
                goto LABEL_64;
              }
LABEL_52:
              *v22 = 10;
              goto LABEL_64;
            }
            if ( v22 == lpMultiByteStr && Buffer == 10 )
              goto LABEL_52;
            _lseeki64_nolock(FileHandle, -1, -1, 1u);
            if ( Buffer != 10 )
              goto LABEL_63;
          }
          else
          {
            *v22++ = v23;
            ++nNumberOfBytesToReada;
          }
        }
        while ( (unsigned int)nNumberOfBytesToReada < v42 );
      }
      v42 = v22 - lpMultiByteStr;
      if ( v45 != 1 || v22 == lpMultiByteStr )
        goto $error_return$28993;
      v25 = v22 - 1;
      LOBYTE(v26) = *v25;
      if ( (char)*v25 < 0 )
      {
        v27 = 1;
        v26 = (unsigned __int8)v26;
        while ( byte_1001BE40[v26] == 0 && v27 <= 4 && v25 >= lpMultiByteStr )
        {
          v26 = (unsigned __int8)*--v25;
          ++v27;
        }
        v28 = *v25;
        if ( byte_1001BE40[(unsigned __int8)*v25] == 0 )
        {
          *_errno() = 42;
LABEL_93:
          v41 = -1;
          goto $error_return$28993;
        }
        if ( byte_1001BE40[(unsigned __int8)*v25] + 1 == v27 )
        {
          v25 += v27;
        }
        else
        {
          v29 = v6 + *v5;
          if ( (*(_BYTE *)(v29 + 4) & 0x48) != 0 )
          {
            v30 = v25 + 1;
            *(_BYTE *)(v29 + 5) = v28;
            if ( v27 >= 2 )
              *(_BYTE *)(v6 + *v5 + 37) = *v30++;
            if ( v27 == 3 )
              *(_BYTE *)(v6 + *v5 + 38) = *v30++;
            v25 = &v30[-v27];
          }
          else
          {
            _lseeki64_nolock(FileHandle, -v27, -v27 >> 31, 1u);
          }
        }
      }
      else
      {
        ++v25;
      }
      v31 = v25 - lpMultiByteStr;
      v42 = MultiByteToWideChar(0xFDE9u, 0, lpMultiByteStr, v31, (LPWSTR)lpBuffer, v39 >> 1);
      if ( v42 != 0 )
      {
        v33 = *v5;
        v34 = v42 != v31;
        v42 *= 2;
        *(_DWORD *)(v6 + v33 + 48) = v34;
        goto $error_return$28993;
      }
      LastError = GetLastError();
LABEL_92:
      _dosmaperr(LastError);
      goto LABEL_93;
    }
    if ( NumberOfBytesRead != 0 && *(_WORD *)lpMultiByteStr == 10 )
      *v21 |= 4u;
    else
      *v21 &= ~4u;
    v35 = (CHAR *)lpMultiByteStr;
    nNumberOfBytesToReadb = lpMultiByteStr;
    v42 += (unsigned int)lpMultiByteStr;
    if ( (unsigned int)lpMultiByteStr >= v42 )
    {
LABEL_129:
      v42 = v35 - lpMultiByteStr;
      goto $error_return$28993;
    }
    while ( 1 )
    {
      v36 = *(_WORD *)nNumberOfBytesToReadb;
      if ( *(_WORD *)nNumberOfBytesToReadb == 26 )
      {
        v37 = (_BYTE *)(v6 + *v5 + 4);
        if ( (*v37 & 0x40) != 0 )
        {
          *(_WORD *)v35 = *(_WORD *)nNumberOfBytesToReadb;
          v35 += 2;
        }
        else
        {
          *v37 |= 2u;
        }
        goto LABEL_129;
      }
      if ( v36 == 13 )
      {
        if ( (unsigned int)nNumberOfBytesToReadb < v42 - 2 )
        {
          if ( *((_WORD *)nNumberOfBytesToReadb + 1) == 10 )
          {
            nNumberOfBytesToReadb += 4;
            goto LABEL_110;
          }
          nNumberOfBytesToReadb += 2;
LABEL_121:
          v38 = 13;
LABEL_122:
          *(_WORD *)v35 = v38;
          goto LABEL_123;
        }
        nNumberOfBytesToReadb += 2;
        if ( !ReadFile(*(HANDLE *)(v6 + *v5), &v44, 2u, &NumberOfBytesRead, nullptr) && GetLastError() != 0
          || NumberOfBytesRead == 0 )
        {
          goto LABEL_121;
        }
        if ( (*(_BYTE *)(v6 + *v5 + 4) & 0x48) != 0 )
        {
          if ( v44 != 10 )
          {
            *(_WORD *)v35 = 13;
            *(_BYTE *)(v6 + *v5 + 5) = v44;
            *(_BYTE *)(v6 + *v5 + 37) = HIBYTE(v44);
            *(_BYTE *)(v6 + *v5 + 38) = 10;
LABEL_123:
            v35 += 2;
            goto LABEL_124;
          }
LABEL_110:
          v38 = 10;
          goto LABEL_122;
        }
        if ( v35 == lpMultiByteStr && v44 == 10 )
          goto LABEL_110;
        _lseeki64_nolock(FileHandle, -2, -1, 1u);
        if ( v44 != 10 )
          goto LABEL_121;
      }
      else
      {
        *(_WORD *)v35 = v36;
        v35 += 2;
        nNumberOfBytesToReadb += 2;
      }
LABEL_124:
      if ( (unsigned int)nNumberOfBytesToReadb >= v42 )
        goto LABEL_129;
    }
  }
$error_return$28993:
  if ( lpMultiByteStr != lpBuffer )
    free((void *)lpMultiByteStr);
  result = v41;
  if ( v41 == -2 )
    return v42;
  return result;
}

// Address: 0x10010AAA
int __cdecl _read(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  int *v4; // ebx
  int v5; // edi
  unsigned int nolock; // [esp+14h] [ebp-1Ch]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= uNumber
    || (v4 = &dword_1001DD80[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
LABEL_7:
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  if ( MaxCharCount > 0x7FFFFFFF )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    goto LABEL_7;
  }
  __lock_fhandle(FileHandle);
  if ( (*(_BYTE *)(*v4 + v5 + 4) & 1) != 0 )
  {
    nolock = _read_nolock(FileHandle, (CHAR *)DstBuf, MaxCharCount);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    nolock = -1;
  }
  _unlock_fhandle(FileHandle);
  return nolock;
}

// Address: 0x10010BA7
int _fptrap()
{
  return _amsg_exit(2);
}

// Address: 0x10010BB0
int __cdecl _free_osfhnd(int a1)
{
  int *v1; // edi
  int v2; // esi
  _DWORD *v3; // eax

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = &dword_1001DD80[a1 >> 5], v2 = (a1 & 0x1F) << 6, ((v3 = (_DWORD *)(v2 + *v1))[1] & 1) == 0)
    || *v3 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_1001C2A4 == 1 )
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

// Address: 0x10010C36
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
         && ((v2 = (intptr_t *)(dword_1001DD80[FileHandle >> 5] + ((FileHandle & 0x1F) << 6)))[1] & 1) != 0 )
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

// Address: 0x10010CAD
BOOL __cdecl __lock_fhandle(int a1)
{
  int v1; // esi
  BOOL inited; // [esp+10h] [ebp-1Ch]

  v1 = dword_1001DD80[a1 >> 5] + ((a1 & 0x1F) << 6);
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
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_1001DD80[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
  return inited;
}

// Address: 0x10010D4D
void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_1001DD80[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}

// Address: 0x10010D74
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( dword_1001BF40 == 0 )
    goto LABEL_10;
  if ( hObject == (HANDLE)-2 )
    __initconout();
  if ( hObject == (HANDLE)-1 )
    return -1;
  if ( !WriteConsoleW(hObject, &Character, 1u, &NumberOfCharsWritten, nullptr) )
  {
    if ( dword_1001BF40 != 2 || GetLastError() != 120 )
      return -1;
    dword_1001BF40 = 0;
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP();
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, &Character, 1, MultiByteStr, 5, nullptr, nullptr);
    if ( hObject != (HANDLE)-1 && WriteConsoleA(hObject, MultiByteStr, v3, &NumberOfCharsWritten, nullptr) )
      return Character;
    return -1;
  }
  dword_1001BF40 = 1;
  return Character;
}

// Address: 0x10010E40
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

// Address: 0x10010E6B
int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // esi
  int *v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  _lock(1);
  for ( i = 3; i < dword_1001DD40; ++i )
  {
    v1 = 4 * i;
    v2 = (int *)((char *)dword_1001CD3C + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 && fclose((FILE *)v3) != -1 )
        ++v5;
      if ( i >= 20 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_1001CD3C + v1) + 32));
        free(*(void **)((char *)dword_1001CD3C + v1));
        *(_DWORD *)((char *)dword_1001CD3C + v1) = 0;
      }
    }
  }
  _unlock(1);
  return v5;
}

// Address: 0x10010F0A
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

// Address: 0x10010F72
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

// Address: 0x10010FBA
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
  for ( i = 0; i < dword_1001DD40; ++i )
  {
    v2 = (int *)((char *)dword_1001CD3C + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 )
      {
        _lock_file2(i, v3);
        v4 = *(_DWORD *)(*((_DWORD *)dword_1001CD3C + i) + 12);
        if ( (v4 & 0x83) != 0 )
        {
          if ( a1 == 1 )
          {
            if ( _fflush_nolock(*((FILE **)dword_1001CD3C + i)) != -1 )
              ++v7;
          }
          else if ( a1 == 0 && (v4 & 2) != 0 && _fflush_nolock(*((FILE **)dword_1001CD3C + i)) == -1 )
          {
            v6 = -1;
          }
        }
        _unlock_file2(i, *((_DWORD *)dword_1001CD3C + i));
      }
    }
  }
  _unlock(1);
  result = v7;
  if ( a1 != 1 )
    return v6;
  return result;
}

// Address: 0x10011094
int sub_10011094()
{
  return flsall(1);
}

// Address: 0x1001109D
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

// Address: 0x100112CC
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_1001CA78 != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_1001B950, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x10011300
void *__usercall _alloca_probe_16@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 0xF;
  return _alloca_probe(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}

// Address: 0x10011316
void *__usercall _alloca_probe_8@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 7;
  return _alloca_probe(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}

// Address: 0x1001132C
int __cdecl atol(const char *String)
{
  return strtol(String, nullptr, 10);
}

// Address: 0x10011342
int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0;
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) != 0 )
    return atol(LCData);
  else
    return -1;
}

// Address: 0x1001138B
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

// Address: 0x1001153F
HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  hObject = result;
  return result;
}

// Address: 0x1001155E
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hObject != (HANDLE)-1 && hObject != (HANDLE)-2 )
    CloseHandle(hObject);
  result = dword_1001C000;
  if ( dword_1001C000 != (HANDLE)-1 && dword_1001C000 != (HANDLE)-2 )
    return (HANDLE)CloseHandle(dword_1001C000);
  return result;
}

// Address: 0x1001158B
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

// Address: 0x10011602
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

// Address: 0x1001167E
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
    || (v2 = &dword_1001DD80[FileHandle >> 5], (*(_BYTE *)((v3 = (FileHandle & 0x1F) << 6) + *v2 + 4) & 1) == 0) )
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

// Address: 0x10011760
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

// Address: 0x100117C1
int __cdecl _close_nolock(int FileHandle)
{
  intptr_t osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_1001DD80[0] + 132) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_1001DD80[0] + 68) & 1) != 0)
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
  *(_BYTE *)(dword_1001DD80[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) = 0;
  if ( LastError == 0 )
    return 0;
  _dosmaperr(LastError);
  return -1;
}

// Address: 0x1001185D
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
    || (v2 = &dword_1001DD80[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v2 + v3 + 4) & 1) == 0) )
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

// Address: 0x1001192A
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

// Address: 0x10011960
// positive sp value has been detected, the output may be wrong!
int __fastcall found_bx(int a1, int a2)
{
  return a2 - 1;
}

// Address: 0x10011976
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

// Address: 0x10011A2E
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x10011A40
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

// Address: 0x100120F3
void __cdecl sub_100120F3()
{
  dword_1001C284 = (int)&std::bad_alloc::`vftable';
  sub_10005DF8(&dword_1001C284);
}

