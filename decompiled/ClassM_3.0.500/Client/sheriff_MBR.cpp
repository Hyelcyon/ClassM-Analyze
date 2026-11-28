// Decompiled from sheriff_MBR.dll (ClassM_3.0.500\ClassM_Client_unpacked\sheriff_MBR.dll)

// Address: 0x10001000
int __thiscall sub_10001000(_DWORD *this)
{
  *this = &std::bad_alloc::`vftable';
  return sub_1001A1EF();
}

// Address: 0x10001010
_DWORD *__thiscall sub_10001010(_DWORD *this, char a2)
{
  *this = &std::bad_alloc::`vftable';
  sub_1001A1EF();
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
_DWORD *__thiscall sub_10001050(_DWORD *this, int a2)
{
  sub_1001A111();
  *this = &std::logic_error::`vftable';
  *(this + 8) = 0;
  *(this + 9) = 15;
  *((_BYTE *)this + 16) = 0;
  sub_100012A0(a2, 0, -1);
  return this;
}

// Address: 0x100010C0
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_1(_DWORD *this)
{
  if ( *(this + 9) < 0x10u )
    return this + 4;
  else
    return (_DWORD *)*(this + 4);
}

// Address: 0x100010D0
void **__thiscall sub_100010D0(void **this, char a2)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  sub_1001A1EF(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001120
_DWORD *__thiscall sub_10001120(_DWORD *this, int a2)
{
  sub_10001050(this, a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x10001140
int __thiscall sub_10001140(void **this)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  return sub_1001A1EF(this);
}

// Address: 0x10001180
_DWORD *__stdcall sub_10001180(_DWORD *a1, int a2)
{
  sub_10002B00(a1 + 1);
  *a1 = &data_buffer::`vftable';
  sub_10001380(a2);
  return a1;
}

// Address: 0x100011E0
void __thiscall sub_100011E0(void **this)
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

// Address: 0x10001220
void **__thiscall sub_10001220(void **this, char a2)
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

// Address: 0x100012A0
int __thiscall sub_100012A0(int this, _DWORD *a2, unsigned int a3, char *a4)
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
    sub_1001A014();
  v5 = (char *)(a2[5] - a3);
  if ( a4 < v5 )
    v5 = a4;
  if ( (_DWORD *)this == a2 )
  {
    sub_10001450(&v5[a3], -1);
    sub_10001450(0, a3);
    return this;
  }
  if ( v5 == (char *)-1 )
    sub_10019FDC();
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
    sub_10001860(v5, *(_DWORD *)(this + 20));
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

// Address: 0x10001380
unsigned int __userpurge sub_10001380@<eax>(int *a1@<eax>, unsigned int a2)
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
      return sub_100014E0(v13, v9, v15, Source);
    }
  }
  else
  {
    if ( v3 > (unsigned int)v4 )
      _invalid_parameter_noinfo();
    return sub_10001560(a2 + a1[3] - a1[4], (int)&Val, *a1, v4);
  }
  return result;
}

// Address: 0x10001450
_DWORD *__thiscall sub_10001450(_DWORD *this, unsigned int a2, unsigned int a3)
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
    sub_1001A014();
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

// Address: 0x100014E0
_DWORD *__userpurge sub_100014E0@<eax>(
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

// Address: 0x10001560
char *__userpurge sub_10001560@<eax>(int a1@<eax>, unsigned int a2, _BYTE *Val, int a4, char *Source)
{
  char *result; // eax
  unsigned int v8; // ecx
  _BYTE *v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  char *v12; // edx
  _BYTE *v13; // ecx
  rsize_t v14; // eax
  int v15; // eax
  unsigned int v16; // ebp
  char *v17; // ebx
  char *v18; // ecx
  char *Destination; // [esp+10h] [ebp-8h]
  char *v20; // [esp+14h] [ebp-4h]
  int v21; // [esp+1Ch] [ebp+4h]

  result = *(char **)(a1 + 12);
  if ( result != nullptr )
    v8 = *(_DWORD *)(a1 + 20) - (_DWORD)result;
  else
    v8 = 0;
  if ( a2 != 0 )
  {
    v9 = *(_BYTE **)(a1 + 16);
    if ( result - v9 - 1 < a2 )
      sub_1000BB60();
    v10 = v9 - result + a2;
    if ( v8 >= v10 )
    {
      LOBYTE(Val) = *Val;
      if ( v9 - Source >= a2 )
      {
        memmove_s(v9, a2, &v9[-a2], a2);
        v18 = Source;
        *(_DWORD *)(a1 + 16) = &v9[a2];
        if ( (int)(v9 - Source - a2) > 0 )
        {
          memmove_s(&Source[a2], v9 - Source - a2, Source, v9 - Source - a2);
          v18 = Source;
        }
        result = &v18[a2];
        if ( v18 != &v18[a2] )
          return (char *)memset(v18, (int)Val, a2);
      }
      else
      {
        if ( v9 != Source )
          memmove_s(&Source[a2], v9 - Source, Source, v9 - Source);
        sub_100019A0(*(_DWORD *)(a1 + 16));
        *(_DWORD *)(a1 + 16) += a2;
        result = Source;
        v17 = (char *)(*(_DWORD *)(a1 + 16) - a2);
        if ( Source != v17 )
          return (char *)memset(Source, (int)Val, v17 - Source);
      }
    }
    else
    {
      if ( -1 - (v8 >> 1) >= v8 )
      {
        v11 = (v8 >> 1) + v8;
        v21 = v11;
      }
      else
      {
        v21 = 0;
        v11 = 0;
      }
      if ( v11 < v10 )
      {
        v21 = v10;
        v11 = v10;
      }
      Destination = (char *)sub_10001730(v11);
      v20 = &Source[(_DWORD)Destination - *(_DWORD *)(a1 + 12)];
      sub_100019A0(v20);
      v12 = Source;
      v13 = *(_BYTE **)(a1 + 12);
      if ( Source != v13 )
      {
        memmove_s(Destination, Source - v13, v13, Source - v13);
        v12 = Source;
      }
      v14 = *(_DWORD *)(a1 + 16) - (_DWORD)v12;
      if ( v14 != 0 )
        memmove_s(&v20[a2], v14, v12, v14);
      v15 = *(_DWORD *)(a1 + 12);
      v16 = *(_DWORD *)(a1 + 16) - v15 + a2;
      if ( v15 != 0 )
        operator delete(*(void **)(a1 + 12));
      *(_DWORD *)(a1 + 20) = &Destination[v21];
      *(_DWORD *)(a1 + 16) = &Destination[v16];
      *(_DWORD *)(a1 + 12) = Destination;
      return &Destination[v21];
    }
  }
  return result;
}

// Address: 0x10001730
void *__fastcall sub_10001730(size_t a1)
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

// Address: 0x10001780
_DWORD *__thiscall sub_10001780(_DWORD *this, struct std::exception *a2)
{
  sub_100017A0(a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x100017A0
int __thiscall sub_100017A0(int this, struct std::exception *a2)
{
  std::exception::exception((std::exception *)this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  *(_DWORD *)(this + 36) = 15;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 16) = 0;
  sub_100012A0(this + 12, (_DWORD *)a2 + 3, 0, (char *)0xFFFFFFFF);
  return this;
}

// Address: 0x10001820
int __thiscall sub_10001820(int this, void *Source)
{
  *(_DWORD *)(this + 24) = 15;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 4) = 0;
  sub_10001A30(Source, strlen((const char *)Source));
  return this;
}

// Address: 0x10001860
_BYTE *__thiscall sub_10001860(_DWORD *this, unsigned int Destination, rsize_t SourceSize)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  const void *v7; // eax
  _BYTE *result; // eax
  _DWORD v9[10]; // [esp+0h] [ebp-28h] BYREF
  void *Destinationa; // [esp+30h] [ebp+8h]

  v9[6] = v9;
  v9[5] = this;
  v4 = Destination | 0xF;
  if ( (Destination | 0xF) == 0xFFFFFFFF )
  {
    v4 = Destination;
  }
  else
  {
    v5 = *(this + 6);
    v6 = v5 >> 1;
    if ( v4 / 3 < v5 >> 1 && v5 <= -2 - v6 )
      v4 = v6 + v5;
  }
  v9[9] = 0;
  Destinationa = (void *)sub_100019D0((char *)(v4 + 1));
  if ( SourceSize != 0 )
  {
    if ( *(this + 6) < 0x10u )
      v7 = this + 1;
    else
      v7 = (const void *)*(this + 1);
    memcpy_s(Destinationa, v4 + 1, v7, SourceSize);
  }
  if ( *(this + 6) >= 0x10u )
    operator delete((void *)*(this + 1));
  result = this + 1;
  *((_BYTE *)this + 4) = 0;
  *(this + 1) = Destinationa;
  *(this + 6) = v4;
  *(this + 5) = SourceSize;
  if ( v4 >= 0x10 )
    result = Destinationa;
  result[SourceSize] = 0;
  return result;
}

// Address: 0x100019A0
_BYTE *__userpurge sub_100019A0@<eax>(_BYTE *a1@<edi>, int a2@<esi>, _BYTE *a3)
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

// Address: 0x100019D0
void *__stdcall sub_100019D0(char *a1)
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

// Address: 0x10001A30
int __fastcall sub_10001A30(int a1, int a2, _BYTE *Source, char *SourceSize)
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
        return sub_100012A0(a1, (_DWORD *)a1, Source - (_BYTE *)v6, SourceSize);
      }
    }
  }
  if ( SourceSize == (char *)-1 )
    sub_10019FDC();
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
    sub_10001860((_DWORD *)a1, (unsigned int)SourceSize, *(_DWORD *)(a1 + 20));
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

// Address: 0x10001B10
std::exception *__thiscall sub_10001B10(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10001B30
BOOL __usercall sub_10001B30@<eax>(const WCHAR *a1@<eax>)
{
  HANDLE v1; // edi
  int v3; // eax
  BOOL result; // eax
  BOOL v5; // esi
  DWORD NumberOfBytesWritten; // [esp+8h] [ebp-4h] BYREF

  v1 = hObject;
  v3 = lstrlenW(a1);
  result = WriteFile(v1, a1, 2 * v3 + 2, &NumberOfBytesWritten, nullptr);
  v5 = result;
  if ( result )
  {
    FlushFileBuffers(v1);
    return v5;
  }
  return result;
}

// Address: 0x10001B70
void __cdecl sub_10001B70()
{
  HANDLE v0; // esi
  LPCWSTR v1; // edi
  int v2; // eax
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-10h] BYREF
  int v4; // [esp+18h] [ebp-4h]
  wchar_t *Format; // [esp+20h] [ebp+4h]
  int ArgList; // [esp+24h] [ebp+8h] BYREF

  if ( hObject == nullptr )
  {
    if ( timeGetTime() - dword_100C6CD4 < 0x3E8 )
      return;
    dword_100C6CD4 = timeGetTime();
    hObject = CreateFileW(L"\\\\.\\pipe\\SENUL_DEBUG_PIPE", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
    if ( hObject == (HANDLE)-1 )
      goto LABEL_10;
    sub_10001B30(L"Logging Start...");
  }
  if ( (dword_100C6CDC & 1) == 0 )
  {
    dword_100C6CDC |= 1u;
    v4 = 0;
    lpBuffer = (LPCWSTR)operator new(0x20000u);
    atexit(sub_1002C9E0);
  }
  _vswprintf_c_l((wchar_t *const)lpBuffer, 0x10000u, Format, nullptr, (va_list)&ArgList);
  v0 = hObject;
  v1 = lpBuffer;
  v2 = lstrlenW(lpBuffer);
  if ( WriteFile(v0, v1, 2 * v2 + 2, &NumberOfBytesWritten, nullptr) )
  {
    FlushFileBuffers(v0);
    return;
  }
  CloseHandle(hObject);
LABEL_10:
  hObject = nullptr;
}

// Address: 0x10001CC0
char __usercall sub_10001CC0@<al>(_DWORD *a1@<ebx>, _DWORD *a2@<edi>, _DWORD *a3)
{
  HANDLE FileW; // eax
  void *v4; // esi
  char result; // al
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  BOOL v10; // [esp+8h] [ebp-440h]
  DWORD BytesReturned; // [esp+Ch] [ebp-43Ch] BYREF
  _DWORD OutBuffer[8]; // [esp+10h] [ebp-438h] BYREF
  WCHAR Buffer[260]; // [esp+30h] [ebp-418h] BYREF
  WCHAR FileName[262]; // [esp+238h] [ebp-210h] BYREF

  GetWindowsDirectoryW(Buffer, 0x104u);
  wsprintfW(FileName, L"\\\\.\\%c:", Buffer[0]);
  FileW = CreateFileW(FileName, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  v4 = FileW;
  if ( FileW == (HANDLE)-1 )
    return 0;
  v10 = DeviceIoControl(FileW, 0x560000u, nullptr, 0, OutBuffer, 0x20u, &BytesReturned, nullptr);
  CloseHandle(v4);
  if ( !v10 )
    return 0;
  if ( BytesReturned != 32 )
    return 0;
  result = 1;
  if ( OutBuffer[0] == 0 )
    return 0;
  v6 = OutBuffer[4];
  *a3 = OutBuffer[2];
  v7 = OutBuffer[5];
  *a2 = v6;
  v8 = OutBuffer[6];
  a2[1] = v7;
  v9 = OutBuffer[7];
  *a1 = v8;
  a1[1] = v9;
  return result;
}

// Address: 0x10001DC0
char __cdecl sub_10001DC0(wchar_t *Source)
{
  wchar_t *Destination; // ecx
  wchar_t *v2; // esi
  HANDLE FileW; // edi
  _BYTE *v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // ebp
  BOOL v7; // ebx
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  const WCHAR *v11; // ebp
  int v12; // edx
  DWORD v13; // edi
  DWORD BytesReturned; // [esp+18h] [ebp-480h] BYREF
  DWORD cchReturnLength; // [esp+1Ch] [ebp-47Ch] BYREF
  LPCWSTR lpszVolumeName; // [esp+20h] [ebp-478h]
  char v18[12]; // [esp+24h] [ebp-474h] BYREF
  LPWCH lpszVolumePathNames; // [esp+30h] [ebp-468h]
  int v20; // [esp+34h] [ebp-464h]
  char v21[12]; // [esp+3Ch] [ebp-45Ch] BYREF
  LPVOID lpOutBuffer; // [esp+48h] [ebp-450h]
  _BYTE *v23; // [esp+4Ch] [ebp-44Ch]
  _DWORD OutBuffer[7]; // [esp+54h] [ebp-444h] BYREF
  int v25; // [esp+70h] [ebp-428h]
  WCHAR FileName[4]; // [esp+74h] [ebp-424h] BYREF
  WCHAR DeviceName[256]; // [esp+7Ch] [ebp-41Ch] BYREF
  WCHAR TargetPath[260]; // [esp+27Ch] [ebp-21Ch] BYREF
  int v29; // [esp+494h] [ebp-4h]

  lpszVolumeName = Source;
  v2 = Destination;
  wcscpy_s(FileName, 0x104u, Source);
  FileName[wcslen(FileName) - 1] = 0;
  if ( QueryDosDeviceW(DeviceName, TargetPath, 0x104u) == 0 )
    return 0;
  wcscpy_s(v2, 0x100u, TargetPath);
  wcscpy_s(v2 + 256, 0x100u, FileName);
  FileW = CreateFileW(FileName, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
    return 0;
  if ( !DeviceIoControl(FileW, 0x560000u, nullptr, 0, OutBuffer, 0x20u, &BytesReturned, nullptr)
    || BytesReturned != 32
    || OutBuffer[0] == 0 )
  {
    CloseHandle(FileW);
    return 0;
  }
  sub_10002A90(v21);
  v29 = 0;
  v4 = v23;
  v5 = lpOutBuffer;
  if ( v23 == lpOutBuffer )
  {
    _invalid_parameter_noinfo();
    v4 = v23;
    v5 = lpOutBuffer;
  }
  v6 = v5;
  v7 = DeviceIoControl(FileW, 0x70050u, nullptr, 0, v5, v4 - (_BYTE *)v5, &BytesReturned, nullptr);
  CloseHandle(FileW);
  if ( v7 && BytesReturned >= 0xC0 && *v6 == 0 )
  {
    v8 = OutBuffer[4];
    *((_DWORD *)v2 + 257) = OutBuffer[2];
    v9 = v6[2];
    v10 = OutBuffer[5];
    v11 = lpszVolumeName;
    *((_DWORD *)v2 + 258) = v9;
    *((_DWORD *)v2 + 262) = OutBuffer[6];
    *((_DWORD *)v2 + 260) = v8;
    v12 = v25;
    *((_DWORD *)v2 + 261) = v10;
    *((_DWORD *)v2 + 263) = v12;
    v2[512] = 63;
    *((_DWORD *)v2 + 259) = 0;
    if ( GetVolumePathNamesForVolumeNameW(v11, nullptr, 0, &cchReturnLength) || GetLastError() == 234 )
    {
      if ( cchReturnLength != 0 )
      {
        sub_10002B60(v18);
        if ( (v20 - (int)lpszVolumePathNames) >> 1 == 0 )
          _invalid_parameter_noinfo();
        *lpszVolumePathNames = 0;
        v13 = (v20 - (int)lpszVolumePathNames) >> 1;
        if ( v13 == 0 )
          _invalid_parameter_noinfo();
        GetVolumePathNamesForVolumeNameW(v11, lpszVolumePathNames, v13, &cchReturnLength);
        if ( (v20 - (int)lpszVolumePathNames) >> 1 == 0 )
          _invalid_parameter_noinfo();
        if ( *lpszVolumePathNames != 0 )
          *((_DWORD *)v2 + 259) |= 0x40u;
        sub_1000AF20();
      }
      sub_1000AF20();
      return 1;
    }
  }
  sub_1000AF20();
  return 0;
}

// Address: 0x100020A0
void __thiscall sub_100020A0(const unsigned __int16 *this)
{
  const unsigned __int16 *v1; // edi
  char *v2; // eax
  char *v3; // edx
  __int16 v4; // cx
  const WCHAR *v5; // eax
  const WCHAR *v6; // eax
  const WCHAR *v7; // eax
  char v9[4]; // [esp+18h] [ebp-64h] BYREF
  void *v10; // [esp+1Ch] [ebp-60h]
  int v11; // [esp+2Ch] [ebp-50h]
  unsigned int v12; // [esp+30h] [ebp-4Ch]
  void *v13; // [esp+38h] [ebp-44h]
  int v14; // [esp+48h] [ebp-34h]
  unsigned int v15; // [esp+4Ch] [ebp-30h]
  LPCWSTR lpFileName[5]; // [esp+54h] [ebp-28h] BYREF
  unsigned int v17; // [esp+68h] [ebp-14h]
  int v18; // [esp+78h] [ebp-4h]

  v17 = 7;
  lpFileName[4] = nullptr;
  LOWORD(lpFileName[0]) = 0;
  v18 = 0;
  v1 = this + 256;
  v12 = 7;
  v2 = (char *)(this + 256);
  LOWORD(v10) = 0;
  v11 = 0;
  v3 = (char *)(this + 257);
  do
  {
    v4 = *(_WORD *)v2;
    v2 += 2;
  }
  while ( v4 != 0 );
  sub_10003390((v2 - v3) >> 1);
  LOBYTE(v18) = 1;
  sub_100039D0(v9);
  LOBYTE(v18) = 2;
  sub_100032E0(0, -1);
  if ( v15 >= 8 )
    operator delete(v13);
  LOBYTE(v18) = 0;
  v15 = 7;
  v14 = 0;
  LOWORD(v13) = 0;
  if ( v12 >= 8 )
    operator delete(v10);
  v5 = lpFileName[0];
  if ( v17 < 8 )
    v5 = (const WCHAR *)lpFileName;
  if ( GetFileAttributesW(v5) != -1 )
    *((_DWORD *)this + 259) |= 0x10u;
  v12 = 7;
  v11 = 0;
  LOWORD(v10) = 0;
  sub_10003390(wcslen(v1));
  LOBYTE(v18) = 3;
  sub_100039D0(v9);
  LOBYTE(v18) = 4;
  sub_100032E0(0, -1);
  if ( v15 >= 8 )
    operator delete(v13);
  LOBYTE(v18) = 0;
  v15 = 7;
  v14 = 0;
  LOWORD(v13) = 0;
  if ( v12 >= 8 )
    operator delete(v10);
  v6 = lpFileName[0];
  if ( v17 < 8 )
    v6 = (const WCHAR *)lpFileName;
  if ( GetFileAttributesW(v6) != -1 )
    *((_DWORD *)this + 259) |= 0x10u;
  LOWORD(v10) = 0;
  v12 = 7;
  v11 = 0;
  sub_10003390(wcslen(v1));
  LOBYTE(v18) = 5;
  sub_100039D0(v9);
  LOBYTE(v18) = 6;
  sub_100032E0(0, -1);
  if ( v15 >= 8 )
    operator delete(v13);
  v15 = 7;
  v14 = 0;
  LOWORD(v13) = 0;
  if ( v12 >= 8 )
    operator delete(v10);
  v7 = lpFileName[0];
  if ( v17 < 8 )
    v7 = (const WCHAR *)lpFileName;
  if ( GetFileAttributesW(v7) != -1 )
    *((_DWORD *)this + 259) |= 0x20u;
  if ( v17 >= 8 )
    operator delete((void *)lpFileName[0]);
}

// Address: 0x10002380
char __usercall sub_10002380@<al>(BYTE *a1@<ebx>, HKEY *a2@<esi>)
{
  LSTATUS v2; // edi
  HKEY v4; // [esp-18h] [ebp-24h]
  DWORD cbData; // [esp+4h] [ebp-8h] BYREF
  DWORD Type; // [esp+8h] [ebp-4h] BYREF

  v4 = *a2;
  cbData = 520;
  Type = 1;
  v2 = RegQueryValueExW(v4, L"SystemPartition", nullptr, &Type, a1, &cbData);
  RegCloseKey(*a2);
  if ( v2 != 0 )
    return 0;
  *(_WORD *)&a1[2 * (cbData >> 1)] = 0;
  return 1;
}

// Address: 0x100023E0
char __thiscall sub_100023E0(int **this)
{
  unsigned int v1; // ebp
  int **v2; // ebx
  DWORD LogicalDriveStringsW; // esi
  DWORD v4; // edi
  LPWSTR v5; // eax
  int v7; // ecx
  unsigned int v8; // esi
  int *v9; // ebx
  int **v10; // eax
  unsigned int v11; // edi
  int *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  WCHAR v16; // dx
  void *v17[3]; // [esp+14h] [ebp-240h] BYREF
  LPWSTR lpBuffer; // [esp+20h] [ebp-234h]
  int v19; // [esp+24h] [ebp-230h]
  int v20; // [esp+28h] [ebp-22Ch]
  int **v21; // [esp+2Ch] [ebp-228h]
  unsigned int v22; // [esp+30h] [ebp-224h]
  WCHAR DeviceName[4]; // [esp+34h] [ebp-220h] BYREF
  WCHAR TargetPath[260]; // [esp+3Ch] [ebp-218h] BYREF
  int v25; // [esp+250h] [ebp-4h]

  v1 = 0;
  v2 = this;
  v21 = this;
  LogicalDriveStringsW = GetLogicalDriveStringsW(0, nullptr);
  sub_10002B00(v17);
  v25 = 0;
  sub_10002D80(v17);
  if ( (v19 - (int)lpBuffer) >> 1 == 0 )
    _invalid_parameter_noinfo();
  v4 = GetLogicalDriveStringsW(LogicalDriveStringsW, lpBuffer);
  v5 = lpBuffer;
  v22 = v4;
  if ( v4 <= LogicalDriveStringsW )
  {
    wcscpy(DeviceName, L"A:");
    if ( v4 != 0 )
    {
      v7 = v19;
      do
      {
        if ( v1 >= (v7 - (int)v5) >> 1 )
        {
          _invalid_parameter_noinfo();
          v7 = v19;
          v5 = lpBuffer;
        }
        if ( v5[v1] == 0 )
          break;
        if ( v1 >= (v7 - (int)v5) >> 1 )
        {
          _invalid_parameter_noinfo();
          v5 = lpBuffer;
        }
        DeviceName[0] = v5[v1];
        if ( QueryDosDeviceW(DeviceName, TargetPath, 0x104u) != 0 )
        {
          v8 = (unsigned int)v2[3];
          if ( v8 > (unsigned int)v2[4] )
            _invalid_parameter_noinfo();
          v9 = *v2;
          while ( 1 )
          {
            v10 = v21;
            v11 = (unsigned int)v21[4];
            if ( (unsigned int)v21[3] > v11 )
            {
              _invalid_parameter_noinfo();
              v10 = v21;
            }
            v12 = *v10;
            if ( v9 == nullptr || v9 != v12 )
              _invalid_parameter_noinfo();
            if ( v8 == v11 )
              break;
            if ( v9 != nullptr )
            {
              v13 = *v9;
            }
            else
            {
              _invalid_parameter_noinfo();
              v13 = 0;
            }
            if ( v8 >= *(_DWORD *)(v13 + 16) )
              _invalid_parameter_noinfo();
            if ( wcscmp(TargetPath, (const unsigned __int16 *)v8) == 0 )
            {
              if ( v9 != nullptr )
              {
                v15 = *v9;
              }
              else
              {
                _invalid_parameter_noinfo();
                v15 = 0;
              }
              if ( v8 >= *(_DWORD *)(v15 + 16) )
                _invalid_parameter_noinfo();
              *(_WORD *)(v8 + 1024) = DeviceName[0];
              break;
            }
            if ( v9 != nullptr )
            {
              v14 = *v9;
            }
            else
            {
              _invalid_parameter_noinfo();
              v14 = 0;
            }
            if ( v8 >= *(_DWORD *)(v14 + 16) )
              _invalid_parameter_noinfo();
            v8 += 1056;
          }
          v7 = v19;
          v5 = lpBuffer;
          while ( v1 < v22 )
          {
            if ( v1 >= (v7 - (int)v5) >> 1 )
            {
              _invalid_parameter_noinfo();
              v7 = v19;
              v5 = lpBuffer;
            }
            v16 = v5[v1++];
            if ( v16 == 0 )
            {
              v4 = v22;
              v2 = v21;
              goto LABEL_48;
            }
          }
          break;
        }
        v7 = v19;
        v5 = lpBuffer;
LABEL_48:
        ;
      }
      while ( v1 < v4 );
    }
    if ( v5 != nullptr )
      operator delete(v5);
    lpBuffer = nullptr;
    v19 = 0;
    v20 = 0;
    operator delete(v17[0]);
    return 1;
  }
  else
  {
    if ( lpBuffer != nullptr )
      operator delete(lpBuffer);
    lpBuffer = nullptr;
    v19 = 0;
    v20 = 0;
    operator delete(v17[0]);
    return 0;
  }
}

// Address: 0x100026A0
char __fastcall sub_100026A0(int a1, char *a2, unsigned int *a3)
{
  HANDLE FileW; // esi
  _BYTE *v5; // eax
  char *v6; // ebp
  BOOL v7; // ebx
  unsigned int v8; // eax
  char *v9; // ebx
  char *v10; // edx
  void *v12[3]; // [esp+18h] [ebp-240h] BYREF
  LPVOID lpOutBuffer; // [esp+24h] [ebp-234h]
  _BYTE *v14; // [esp+28h] [ebp-230h]
  int v15; // [esp+2Ch] [ebp-22Ch]
  unsigned int *v16; // [esp+30h] [ebp-228h]
  unsigned int v17; // [esp+34h] [ebp-224h]
  DWORD BytesReturned; // [esp+38h] [ebp-220h] BYREF
  WCHAR FileName[260]; // [esp+3Ch] [ebp-21Ch] BYREF
  int v20; // [esp+254h] [ebp-4h]

  v16 = a3;
  if ( a3 == nullptr )
    return 0;
  v17 = *a3;
  swprintf_s(FileName, 0x104u, L"\\\\.\\PhysicalDrive%u", a1);
  FileW = CreateFileW(FileName, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
    return 0;
  sub_10002B00(v12);
  v20 = 0;
  sub_10001380((int *)v12, 0x1000u);
  v5 = v14;
  v6 = (char *)lpOutBuffer;
  if ( v14 == lpOutBuffer )
  {
    _invalid_parameter_noinfo();
    v5 = v14;
    v6 = (char *)lpOutBuffer;
  }
  v7 = DeviceIoControl(FileW, 0x70050u, nullptr, 0, v6, v5 - v6, &BytesReturned, nullptr);
  CloseHandle(FileW);
  if ( !v7 || BytesReturned < 0xC0 )
  {
    if ( lpOutBuffer != nullptr )
      operator delete(lpOutBuffer);
    lpOutBuffer = nullptr;
    v14 = nullptr;
    v15 = 0;
    operator delete(v12[0]);
    return 0;
  }
  v8 = 0;
  if ( *((_DWORD *)v6 + 1) != 0 )
  {
    v9 = a2;
    v10 = v6 + 48;
    do
    {
      if ( v8 >= v17 )
        break;
      qmemcpy(v9, v10, 0x90u);
      ++v8;
      v10 += 144;
      v9 += 144;
    }
    while ( v8 < *((_DWORD *)v6 + 1) );
  }
  *v16 = v8;
  if ( lpOutBuffer != nullptr )
    operator delete(lpOutBuffer);
  lpOutBuffer = nullptr;
  v14 = nullptr;
  v15 = 0;
  operator delete(v12[0]);
  return 1;
}

// Address: 0x10002860
char __cdecl sub_10002860(int **a1)
{
  int *v1; // edi
  int *v2; // esi
  int *v3; // ebx
  HKEY FirstVolumeW; // esi
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  char *v8; // eax
  int v9; // [esp+10h] [ebp-A90h] BYREF
  unsigned int v10; // [esp+14h] [ebp-A8Ch] BYREF
  HKEY phkResult[2]; // [esp+18h] [ebp-A88h] BYREF
  _DWORD v12[2]; // [esp+20h] [ebp-A80h] BYREF
  char v13[8]; // [esp+28h] [ebp-A78h] BYREF
  char v14; // [esp+30h] [ebp-A70h] BYREF
  wchar_t Destination[514]; // [esp+268h] [ebp-838h] BYREF
  int v16; // [esp+66Ch] [ebp-434h]
  int v17; // [esp+674h] [ebp-42Ch]
  int v18; // [esp+678h] [ebp-428h]
  int v19; // [esp+67Ch] [ebp-424h]
  WCHAR szVolumeName[260]; // [esp+688h] [ebp-418h] BYREF
  unsigned __int16 v21[262]; // [esp+890h] [ebp-210h] BYREF

  v1 = a1[4];
  if ( a1[3] > v1 )
    _invalid_parameter_noinfo();
  v2 = a1[3];
  v3 = *a1;
  if ( v2 > a1[4] )
    _invalid_parameter_noinfo();
  sub_10002F20(*a1, v2, v3, v1);
  if ( sub_10001CC0(phkResult, v12, &v9) == 0 )
    return 0;
  v10 = 4;
  if ( sub_100026A0(v9, v13, &v10) == 0 )
    return 0;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SYSTEM\\Setup", 0, 0x20019u, phkResult) != 0 )
    return 0;
  if ( sub_10002380((BYTE *)v21, phkResult) == 0 )
    return 0;
  FirstVolumeW = (HKEY)FindFirstVolumeW(szVolumeName, 0x104u);
  phkResult[0] = FirstVolumeW;
  if ( FirstVolumeW == (HKEY)-1 )
    return 0;
  v6 = v10;
  do
  {
    if ( GetDriveTypeW(szVolumeName) == 3 && sub_10001DC0(szVolumeName) != 0 )
    {
      if ( v16 == v9 )
      {
        v17 |= 1u;
        if ( v18 == v12[0] && v19 == v12[1] )
          v17 |= 2u;
        v7 = 0;
        if ( v6 != 0 )
        {
          v8 = &v14;
          while ( v18 != *(_DWORD *)v8 || v19 != *((_DWORD *)v8 + 1) )
          {
            ++v7;
            v8 += 144;
            if ( v7 >= v6 )
              goto LABEL_25;
          }
          v17 |= 8u;
        }
      }
LABEL_25:
      if ( wcscmp(Destination, v21) == 0 )
        v17 |= 4u;
      sub_100020A0(Destination);
      sub_10002C40();
      FirstVolumeW = phkResult[0];
    }
  }
  while ( FindNextVolumeW(FirstVolumeW, szVolumeName, 0x104u) );
  FindVolumeClose(FirstVolumeW);
  return sub_100023E0(a1);
}

// Address: 0x10002A90
_DWORD *__stdcall sub_10002A90(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  sub_10002CE0();
  return a1;
}

// Address: 0x10002B00
_DWORD *__stdcall sub_10002B00(_DWORD *a1)
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

// Address: 0x10002B60
_DWORD *__stdcall sub_10002B60(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  sub_10002D30();
  return a1;
}

// Address: 0x10002BD0
int __usercall sub_10002BD0@<eax>(const unsigned __int16 *a1@<eax>, int a2@<ecx>)
{
  *(_DWORD *)(a2 + 24) = 7;
  *(_DWORD *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 4) = 0;
  sub_10003390(wcslen(a1));
  return a2;
}

// Address: 0x10002C10
void __usercall sub_10002C10(int a1@<esi>)
{
  if ( *(_DWORD *)(a1 + 24) >= 8u )
    operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 24) = 7;
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 4) = 0;
}

// Address: 0x10002C40
int __usercall sub_10002C40@<eax>(int a1@<eax>, _DWORD *a2@<edi>)
{
  unsigned int v2; // ebp
  unsigned int v4; // ecx
  unsigned int v5; // esi
  int result; // eax
  _DWORD v7[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = a2[3];
  if ( v2 != 0 )
    v4 = (int)(a2[5] - v2) / 1056;
  else
    v4 = 0;
  v5 = a2[4];
  if ( (int)(v5 - v2) / 1056 >= v4 )
  {
    if ( v2 > v5 )
      _invalid_parameter_noinfo();
    return sub_10002E50(v7, a1, *a2, v5);
  }
  else
  {
    LOBYTE(v7[0]) = 0;
    result = sub_10003CE0(v7[0], v7[0]);
    a2[4] = v5 + 1056;
  }
  return result;
}

// Address: 0x10002CE0
char *__usercall sub_10002CE0@<eax>(_BYTE *a1@<ebx>, _DWORD *a2@<esi>)
{
  _BYTE *v2; // eax
  int v3; // ecx
  _BYTE *v4; // edi
  char *result; // eax

  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  v2 = sub_10001730(0x1000u);
  a2[5] = v2 + 4096;
  a2[3] = v2;
  a2[4] = v2;
  v3 = 4096;
  v4 = v2;
  do
  {
    *v4 = *a1;
    --v3;
    ++v4;
  }
  while ( v3 != 0 );
  result = v2 + 4096;
  a2[4] = result;
  return result;
}

// Address: 0x10002D30
void __usercall sub_10002D30(_WORD *a1@<ebx>, unsigned int a2@<edi>, _DWORD *a3@<esi>)
{
  int v3; // eax
  unsigned int v4; // ecx
  _WORD *v5; // edx

  a3[3] = 0;
  a3[4] = 0;
  a3[5] = 0;
  if ( a2 != 0 )
  {
    if ( a2 > 0x7FFFFFFF )
      sub_1000B5C0();
    v3 = sub_10003280(a2);
    a3[5] = v3 + 2 * a2;
    a3[3] = v3;
    a3[4] = v3;
    v4 = a2;
    v5 = (_WORD *)v3;
    do
    {
      *v5 = *a1;
      --v4;
      ++v5;
    }
    while ( v4 != 0 );
    a3[4] = v3 + 2 * a2;
  }
}

// Address: 0x10002D80
unsigned int __usercall sub_10002D80@<eax>(unsigned int a1@<eax>, int *a2@<ecx>)
{
  unsigned int v3; // ecx
  void *v5; // edi
  unsigned int result; // eax
  unsigned int v7; // ebp
  int *v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // edi
  int v12; // [esp+14h] [ebp-18h]
  void *Source; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+20h] [ebp-Ch]

  v3 = a2[3];
  v5 = (void *)a2[4];
  result = (int)((int)v5 - v3) >> 1;
  Source = v5;
  if ( a1 <= result )
  {
    if ( a1 < result )
    {
      if ( v3 > (unsigned int)v5 )
        _invalid_parameter_noinfo();
      v7 = a2[3];
      v14 = *a2;
      if ( v7 > a2[4] )
        _invalid_parameter_noinfo();
      v8 = (int *)*a2;
      v12 = *a2;
      if ( *a2 != 0 )
      {
        v9 = *v8;
      }
      else
      {
        _invalid_parameter_noinfo();
        v9 = 0;
      }
      v10 = v7 + 2 * a1;
      if ( v10 > *(_DWORD *)(v9 + 16) || (v8 == nullptr ? (v11 = 0) : (v11 = *v8), v10 < *(_DWORD *)(v11 + 12)) )
        _invalid_parameter_noinfo();
      return sub_10002FD0(v12, v10, v14, Source);
    }
  }
  else
  {
    if ( v3 > (unsigned int)v5 )
      _invalid_parameter_noinfo();
    return sub_10003050(a1 - ((a2[4] - a2[3]) >> 1), *a2, v5);
  }
  return result;
}

// Address: 0x10002E50
_DWORD *__userpurge sub_10002E50@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v7; // esi
  unsigned int v8; // ebx
  _DWORD *v9; // edi
  _DWORD *v10; // ebp
  int v11; // eax
  unsigned int v12; // esi
  int v13; // edi

  v6 = a1[3];
  if ( (int)(a1[4] - v6) / 1056 != 0 )
  {
    if ( v6 > a1[4] )
      _invalid_parameter_noinfo();
    if ( a4 == 0 || a4 != *a1 )
      _invalid_parameter_noinfo();
    v7 = (int)(a5 - v6) / 1056;
  }
  else
  {
    v7 = 0;
  }
  sub_10003440(a3, a4, a5);
  v8 = a1[3];
  if ( v8 > a1[4] )
    _invalid_parameter_noinfo();
  v9 = (_DWORD *)*a1;
  v10 = v9;
  if ( v9 != nullptr )
  {
    v11 = *v9;
  }
  else
  {
    _invalid_parameter_noinfo();
    v11 = 0;
  }
  v12 = v8 + 1056 * v7;
  if ( v12 > *(_DWORD *)(v11 + 16) || (v9 == nullptr ? (v13 = 0) : (v13 = *v9), v12 < *(_DWORD *)(v13 + 12)) )
    _invalid_parameter_noinfo();
  a2[1] = v12;
  *a2 = v10;
  return a2;
}

// Address: 0x10002F20
_DWORD *__userpurge sub_10002F20@<eax>(
        _DWORD *a1@<edi>,
        _DWORD *a2@<esi>,
        int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp

  *a1 = 0;
  if ( a2 == nullptr || (v6 = a4, a2[3] > a4) || a4 > a2[4] )
  {
    _invalid_parameter_noinfo();
    v6 = a4;
  }
  v7 = a6;
  *a1 = *a2;
  a1[1] = v6;
  if ( a2[3] > a6 || a6 > a2[4] )
  {
    _invalid_parameter_noinfo();
    v7 = a6;
  }
  if ( *a1 == 0 || *a1 != *a2 )
    _invalid_parameter_noinfo();
  if ( a1[1] != v7 )
    a2[4] = sub_10003A90(a1[1]);
  return a1;
}

// Address: 0x10002FA0
int __usercall sub_10002FA0@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  LOBYTE(a1) = 0;
  sub_10003CE0(a1, a1);
  return a2 + 1056 * a3;
}

// Address: 0x10002FD0
_DWORD *__userpurge sub_10002FD0@<eax>(
        _DWORD *a1@<ebx>,
        _DWORD *a2@<esi>,
        int a3,
        unsigned int a4,
        int a5,
        char *Source)
{
  unsigned int v6; // eax
  char *v7; // edi
  char *v8; // edx
  int v9; // eax
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
    v9 = (a2[4] - (int)v7) >> 1;
    v10 = &v8[2 * v9];
    if ( v9 > 0 )
      memmove_s(v8, 2 * v9, v7, 2 * v9);
    a2[4] = v10;
  }
  return a1;
}

// Address: 0x10003050
unsigned int __userpurge sub_10003050@<eax>(
        unsigned int result@<eax>,
        int a2@<ecx>,
        unsigned int a3,
        int a4,
        char *Source)
{
  int v6; // edx
  unsigned __int16 *v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  _BYTE *v10; // edi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // ebp
  int v16; // ecx
  char *v17; // edx
  _BYTE *v18; // ecx
  unsigned int v19; // edi
  int v20; // eax
  int v21; // eax
  unsigned int v22; // edi
  char *v23; // ecx
  __int16 v24; // dx
  unsigned int v25; // eax
  int v26; // ebx
  int v27; // ebp
  char *v28; // esi
  rsize_t v29; // eax
  int v30; // esi
  unsigned int v31; // [esp+10h] [ebp-8h]
  char *Destination; // [esp+14h] [ebp-4h]
  __int16 Destinationa; // [esp+14h] [ebp-4h]

  v6 = *(_DWORD *)(a2 + 12);
  v7 = (unsigned __int16 *)result;
  if ( v6 != 0 )
  {
    result = (*(_DWORD *)(a2 + 20) - v6) >> 1;
    v8 = result;
  }
  else
  {
    v8 = 0;
  }
  v9 = a3;
  if ( a3 != 0 )
  {
    v10 = *(_BYTE **)(a2 + 16);
    v11 = (int)&v10[-v6] >> 1;
    if ( 0x7FFFFFFF - v11 < a3 )
      sub_1000B5C0(v8);
    v12 = a3 + v11;
    if ( v8 >= v12 )
    {
      v23 = Source;
      v24 = *v7;
      v25 = (v10 - Source) >> 1;
      if ( v25 >= a3 )
      {
        v27 = 2 * a3;
        v28 = &v10[-2 * a3];
        v29 = 2 * ((int)(2 * a3) >> 1);
        Destinationa = v24;
        a3 = (unsigned int)&v10[v29];
        if ( v27 >> 1 != 0 )
        {
          memmove_s(v10, v29, &v10[-v27], v29);
          v23 = Source;
        }
        v30 = (v28 - v23) >> 1;
        *(_DWORD *)(a2 + 16) = a3;
        if ( v30 > 0 )
        {
          memmove_s(&v10[-2 * v30], 2 * v30, v23, 2 * v30);
          v23 = Source;
        }
        result = (unsigned int)v23;
        if ( v23 != &v23[v27] )
        {
          do
          {
            *(_WORD *)result = Destinationa;
            result += 2;
          }
          while ( (char *)result != &v23[v27] );
        }
      }
      else
      {
        a3 = *v7;
        if ( v25 != 0 )
        {
          memmove_s(&Source[2 * v9], 2 * v25, Source, 2 * v25);
          v23 = Source;
        }
        sub_10003250(v23, &a3);
        *(_DWORD *)(a2 + 16) += 2 * v9;
        v26 = *(_DWORD *)(a2 + 16) - 2 * v9;
        result = (unsigned int)Source;
        if ( Source != (char *)v26 )
        {
          do
          {
            *(_WORD *)result = a3;
            result += 2;
          }
          while ( result != v26 );
        }
      }
    }
    else
    {
      if ( 0x7FFFFFFF - (v8 >> 1) >= v8 )
      {
        v13 = (v8 >> 1) + v8;
        v31 = v13;
      }
      else
      {
        v31 = 0;
        v13 = 0;
      }
      if ( v13 < v12 )
      {
        v31 = v12;
        v13 = v12;
      }
      v14 = sub_10003280(v13);
      v15 = (int)&Source[-*(_DWORD *)(a2 + 12)] >> 1;
      Destination = (char *)v14;
      sub_10003250(v16, v7);
      v17 = Source;
      v18 = *(_BYTE **)(a2 + 12);
      if ( (Source - v18) >> 1 != 0 )
      {
        memmove_s(Destination, 2 * ((Source - v18) >> 1), v18, 2 * ((Source - v18) >> 1));
        v17 = Source;
      }
      v19 = a3;
      v20 = (*(_DWORD *)(a2 + 16) - (int)v17) >> 1;
      if ( v20 != 0 )
        memmove_s(&Destination[2 * a3 + 2 * v15], 2 * v20, v17, 2 * v20);
      v21 = *(_DWORD *)(a2 + 12);
      v22 = ((*(_DWORD *)(a2 + 16) - v21) >> 1) + v19;
      if ( v21 != 0 )
        operator delete(*(void **)(a2 + 12));
      result = (unsigned int)&Destination[2 * v31];
      *(_DWORD *)(a2 + 20) = result;
      *(_DWORD *)(a2 + 16) = &Destination[2 * v22];
      *(_DWORD *)(a2 + 12) = Destination;
    }
  }
  return result;
}

// Address: 0x10003250
_WORD *__usercall sub_10003250@<eax>(_WORD *a1@<edx>, _WORD *a2@<edi>, int a3@<esi>)
{
  int v3; // eax
  _WORD *i; // ecx

  v3 = a3;
  for ( i = a2; v3 != 0; ++i )
  {
    *i = *a1;
    --v3;
  }
  return &a2[a3];
}

// Address: 0x10003280
void *__fastcall sub_10003280(unsigned int a1)
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

// Address: 0x100032E0
int __userpurge sub_100032E0@<eax>(_DWORD *a1@<eax>, int a2@<ecx>, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  _DWORD *v8; // ecx
  void **v9; // ebp
  void *v10; // eax
  bool v11; // cf

  if ( a1[5] < a3 )
    sub_1001A014();
  v6 = a1[5] - a3;
  if ( a4 < v6 )
    v6 = a4;
  if ( (_DWORD *)a2 == a1 )
  {
    sub_10003740();
    sub_10003740();
    return a2;
  }
  else
  {
    if ( (unsigned __int8)sub_100037D0() != 0 )
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

// Address: 0x10003390
int __userpurge sub_10003390@<eax>(_BYTE *a1@<eax>, _DWORD *a2@<esi>, unsigned int a3)
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
    return sub_100032E0(a2, (int)a2, (a1 - (_BYTE *)v5) >> 1, a3);
  }
  else
  {
    if ( (unsigned __int8)sub_100037D0() != 0 )
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

// Address: 0x10003440
void *__thiscall sub_10003440(int this, const void *a2, int a3, int a4)
{
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edi
  void *v11; // ebx
  int v12; // ebx
  void *result; // eax
  char *v14; // ebx
  int v15; // eax
  int v16; // [esp+0h] [ebp-45Ch] BYREF
  const void *v17; // [esp+10h] [ebp-44Ch]
  int v18; // [esp+14h] [ebp-448h]
  void *v19; // [esp+18h] [ebp-444h]
  int v20; // [esp+1Ch] [ebp-440h]
  _DWORD v21[268]; // [esp+20h] [ebp-43Ch] BYREF
  int v22; // [esp+458h] [ebp-4h]

  v21[267] = &v16;
  v5 = *(_DWORD *)(this + 12);
  v19 = (void *)this;
  v17 = a2;
  if ( v5 != 0 )
    v6 = (*(_DWORD *)(this + 20) - v5) / 1056;
  else
    v6 = 0;
  v7 = *(_DWORD *)(this + 16);
  v8 = (v7 - v5) / 1056;
  if ( v8 == 4067203 )
    sub_1000B5C0(0);
  v9 = v8 + 1;
  if ( v6 >= v9 )
  {
    LOBYTE(v20) = 0;
    qmemcpy(v21, v17, 0x420u);
    if ( (v7 - a4) / 1056 != 0 )
    {
      v15 = sub_10003D60(v20, v20);
      LOBYTE(v20) = 0;
      *((_DWORD *)v19 + 4) = v15;
      sub_10003D10(v7);
    }
    else
    {
      sub_10003D60(v20, v20);
      v22 = 2;
      sub_10002FA0((*((_DWORD *)v19 + 4) - a4) / 1056, *((_DWORD *)v19 + 4), 1 - (*((_DWORD *)v19 + 4) - a4) / 1056);
      *((_DWORD *)v19 + 4) += 1056;
    }
    return (void *)sub_10003AE0();
  }
  else
  {
    if ( 4067203 - (v6 >> 1) >= v6 )
      v10 = (v6 >> 1) + v6;
    else
      v10 = 0;
    if ( v10 < v9 )
      v10 = v9;
    v11 = (void *)sub_10003830(v10);
    v20 = (a4 - *(_DWORD *)(this + 12)) / 1056;
    v22 = 0;
    LOBYTE(v18) = 0;
    v19 = v11;
    sub_10003CE0(v20, v18);
    LOBYTE(v18) = 0;
    sub_10003D60(v20, v18);
    LOBYTE(v20) = 0;
    sub_10003D60(v20, v20);
    v12 = (*(_DWORD *)(this + 16) - *(_DWORD *)(this + 12)) / 1056 + 1;
    if ( *(_DWORD *)(this + 12) != 0 )
      operator delete(*(void **)(this + 12));
    result = v19;
    v14 = (char *)v19 + 1056 * v12;
    *(_DWORD *)(this + 20) = (char *)v19 + 1056 * v10;
    *(_DWORD *)(this + 16) = v14;
    *(_DWORD *)(this + 12) = result;
  }
  return result;
}

// Address: 0x10003740
_DWORD *__usercall sub_10003740@<eax>(unsigned int a1@<eax>, unsigned int a2@<ebx>, _DWORD *a3@<esi>)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // ebp
  unsigned int v7; // eax
  bool v8; // cf
  _DWORD *v10; // [esp+4h] [ebp-8h]
  _DWORD *v11; // [esp+8h] [ebp-4h]

  if ( a3[5] < a2 )
    sub_1001A014();
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

// Address: 0x100037D0
BOOL __usercall sub_100037D0@<eax>(int a1@<eax>, unsigned int a2@<edi>)
{
  unsigned int v3; // eax

  if ( a2 > 0x7FFFFFFE )
    sub_10019FDC();
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 < a2 )
  {
    sub_10003890(a1, a2, *(_DWORD *)(a1 + 20));
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

// Address: 0x10003830
void *__fastcall sub_10003830(unsigned int a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 != 0 )
  {
    if ( 0xFFFFFFFF / a1 < 0x420 )
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
  return operator new(1056 * a1);
}

// Address: 0x10003890
_WORD *__stdcall sub_10003890(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  void *v6; // ebx
  int v7; // ecx
  const void *v8; // eax
  _WORD *result; // eax
  _DWORD v10[9]; // [esp+0h] [ebp-24h] BYREF

  v10[5] = v10;
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
  v10[8] = 0;
  v6 = sub_10003280(v3 + 1);
  v7 = a3;
  if ( a3 != 0 )
  {
    if ( a1[6] < 8u )
      v8 = a1 + 1;
    else
      v8 = (const void *)a1[1];
    memcpy_s(v6, 2 * v3 + 2, v8, 2 * a3);
    v7 = a3;
  }
  if ( a1[6] >= 8u )
  {
    operator delete((void *)a1[1]);
    v7 = a3;
  }
  result = a1 + 1;
  a1[1] = v6;
  a1[6] = v3;
  a1[5] = v7;
  if ( v3 >= 8 )
    result = v6;
  result[v7] = 0;
  return result;
}

// Address: 0x100039D0
int __usercall sub_100039D0@<eax>(const unsigned __int16 *a1@<ebx>, int a2@<esi>, _DWORD *a3)
{
  _DWORD *v3; // eax
  _BYTE v5[4]; // [esp+Ch] [ebp-28h] BYREF
  void *v6; // [esp+10h] [ebp-24h]
  int v7; // [esp+20h] [ebp-14h]
  unsigned int v8; // [esp+24h] [ebp-10h]
  int v9; // [esp+30h] [ebp-4h]

  LOWORD(v6) = 0;
  v8 = 7;
  v7 = 0;
  sub_100032E0(a3, (int)v5, 0, 0xFFFFFFFF);
  v9 = 0;
  v3 = (_DWORD *)sub_10003B40(v5, wcslen(a1));
  *(_DWORD *)(a2 + 24) = 7;
  *(_DWORD *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 4) = 0;
  sub_100032E0(v3, a2, 0, 0xFFFFFFFF);
  if ( v8 >= 8 )
    operator delete(v6);
  return a2;
}

// Address: 0x10003A90
int __usercall sub_10003A90@<eax>(char *a1@<eax>, char *a2@<ebx>, int a3)
{
  int result; // eax
  char *v5; // edx
  int v6; // ebp
  char *v7; // edi
  const void *v8; // esi

  result = a3 + 1056 * ((a2 - a1) / 1056);
  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = a3 - (_DWORD)a1;
    do
    {
      v7 = &v5[v6];
      v8 = v5;
      v5 += 1056;
      qmemcpy(v7, v8, 0x420u);
    }
    while ( v5 != a2 );
  }
  return result;
}

// Address: 0x10003AE0
char *__usercall sub_10003AE0@<eax>(char *result@<eax>, char *a2@<edx>, const void *a3@<ebx>)
{
  void *v3; // edi

  while ( result != a2 )
  {
    v3 = result;
    result += 1056;
    qmemcpy(v3, a3, 0x420u);
  }
  return result;
}

// Address: 0x10003B10
int __userpurge sub_10003B10@<eax>(int a1@<esi>, _DWORD *a2)
{
  *(_DWORD *)(a1 + 24) = 7;
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 4) = 0;
  sub_100032E0(a2, a1, 0, 0xFFFFFFFF);
  return a1;
}

// Address: 0x10003B40
_DWORD *__userpurge sub_10003B40@<eax>(_BYTE *a1@<eax>, _DWORD *a2@<ecx>, unsigned int a3)
{
  unsigned int v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // eax
  _DWORD *v13; // edx
  bool v14; // cf

  if ( a1 != nullptr
    && ((v5 = a2[6], v6 = a2 + 1, v5 < 8) ? (v7 = a2 + 1) : (v7 = (_DWORD *)*v6),
        a1 >= (_BYTE *)v7 && (v5 < 8 ? (v8 = a2 + 1) : (v8 = (_DWORD *)*v6), (char *)v8 + 2 * a2[5] > a1)) )
  {
    if ( v5 >= 8 )
      v6 = (_DWORD *)*v6;
    return (_DWORD *)sub_10003C20(a2, (a1 - (_BYTE *)v6) >> 1);
  }
  else
  {
    v10 = a2[5];
    if ( -1 - v10 <= a3 || v10 + a3 < v10 )
      sub_10019FDC();
    if ( a3 != 0 )
    {
      v11 = a3 + a2[5];
      if ( sub_100037D0((int)a2, v11) )
      {
        v12 = a2[6];
        if ( v12 < 8 )
          v13 = a2 + 1;
        else
          v13 = (_DWORD *)a2[1];
        memcpy_s((char *)v13 + 2 * a2[5], 2 * (v12 - a2[5]), a1, 2 * a3);
        v14 = a2[6] < 8u;
        a2[5] = v11;
        if ( !v14 )
        {
          *(_WORD *)(a2[1] + 2 * v11) = 0;
          return a2;
        }
        *((_WORD *)a2 + v11 + 2) = 0;
      }
    }
    return a2;
  }
}

// Address: 0x10003C20
_DWORD *__userpurge sub_10003C20@<eax>(unsigned int a1@<eax>, _DWORD *a2@<esi>, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  _DWORD *result; // eax
  unsigned int v7; // edi
  _DWORD *v8; // ebp
  unsigned int v9; // eax
  _DWORD *v10; // edx
  bool v11; // cf

  v4 = a1;
  if ( a3[5] < a4 )
    sub_1001A014();
  if ( a3[5] - a4 < a1 )
    v4 = a3[5] - a4;
  v5 = a2[5];
  if ( -1 - v5 <= v4 || v5 + v4 < v5 )
    sub_10019FDC();
  result = a2;
  if ( v4 != 0 )
  {
    v7 = v4 + a2[5];
    if ( sub_100037D0((int)a2, v7) )
    {
      if ( a3[6] < 8u )
        v8 = a3 + 1;
      else
        v8 = (_DWORD *)a3[1];
      v9 = a2[6];
      if ( v9 < 8 )
        v10 = a2 + 1;
      else
        v10 = (_DWORD *)a2[1];
      memcpy_s((char *)v10 + 2 * a2[5], 2 * (v9 - a2[5]), (char *)v8 + 2 * a4, 2 * v4);
      v11 = a2[6] < 8u;
      a2[5] = v7;
      if ( !v11 )
      {
        *(_WORD *)(a2[1] + 2 * v7) = 0;
        return a2;
      }
      *((_WORD *)a2 + v7 + 2) = 0;
    }
    return a2;
  }
  return result;
}

// Address: 0x10003CE0
char *__usercall sub_10003CE0@<eax>(char *result@<eax>, int a2@<edx>, const void *a3@<ebx>)
{
  for ( ; a2 != 0; result += 1056 )
  {
    if ( result != nullptr )
      qmemcpy(result, a3, 0x420u);
    --a2;
  }
  return result;
}

// Address: 0x10003D10
int __usercall sub_10003D10@<eax>(char *a1@<eax>, char *a2@<ebx>, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 1056 * ((a1 - a2) / 1056);
  for ( i = a1; i != a2; qmemcpy(&i[a3 - (_DWORD)a1], i, 0x420u) )
    i -= 1056;
  return result;
}

// Address: 0x10003D60
char *__usercall sub_10003D60@<eax>(char *result@<eax>, char *a2@<edx>, char *a3@<ebx>)
{
  for ( ; a2 != a3; result += 1056 )
  {
    if ( result != nullptr )
      qmemcpy(result, a2, 0x420u);
    a2 += 1056;
  }
  return result;
}

// Address: 0x10003D90
int __stdcall sub_10003D90(int a1)
{
  return 0;
}

// Address: 0x10003DA0
_DWORD *__thiscall sub_10003DA0(_DWORD *this, char a2)
{
  *this = &std::tr1::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10003DC0
_DWORD *__stdcall sub_10003DC0(_DWORD *a1)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // ebp
  _DWORD *v3; // edi
  void *v4; // eax
  int v5; // eax
  void *v6; // eax
  int v7; // eax
  void *v8; // eax
  int v9; // eax
  void *v10; // eax
  void *v11; // eax
  int v12; // ecx
  int v13; // edx

  v1 = a1 + 6;
  *a1 = &sheriff_engine::SheriffInstance::`vftable';
  a1[7] = 0;
  a1[6] = 0;
  v2 = a1 + 8;
  a1[9] = 0;
  a1[8] = 0;
  v3 = a1 + 10;
  a1[11] = 0;
  a1[10] = 0;
  a1[13] = 0;
  a1[12] = 0;
  v4 = operator new(0x30u);
  if ( v4 != nullptr )
    v5 = sub_1000C9F0(v4);
  else
    v5 = 0;
  sub_10004140(a1 + 10, v5);
  v6 = operator new(0x38u);
  if ( v6 != nullptr )
    v7 = sub_10004530(v6, *v3);
  else
    v7 = 0;
  sub_10004210(a1 + 8, v7);
  v8 = operator new(0x2B0u);
  if ( v8 != nullptr )
    v9 = sub_10006660(v8, *v2);
  else
    v9 = 0;
  sub_100042E0(v1, v9);
  v10 = operator new(0x40u);
  if ( v10 != nullptr )
    v11 = (void *)sub_1000F740(v10, *v2);
  else
    v11 = nullptr;
  sub_100043B0((int)(a1 + 12), v11);
  v12 = *v2;
  v13 = *v3;
  a1[2] = *v1;
  a1[5] = a1[12];
  a1[1] = 1;
  a1[3] = v12;
  a1[4] = v13;
  return a1;
}

// Address: 0x10003F20
volatile signed __int32 **__thiscall sub_10003F20(volatile signed __int32 **this, char a2)
{
  sub_10003F40(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10003F40
int __thiscall sub_10003F40(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // esi
  int result; // eax
  volatile signed __int32 *v4; // esi
  volatile signed __int32 *v5; // esi
  volatile signed __int32 *v6; // esi

  *this = (volatile signed __int32 *)&sheriff_engine::SheriffInstance::`vftable';
  v2 = *(this + 13);
  if ( v2 != nullptr )
  {
    result = (int)(v2 + 2);
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
  }
  v4 = *(this + 11);
  if ( v4 != nullptr )
  {
    result = (int)(v4 + 2);
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
    }
  }
  v5 = *(this + 9);
  if ( v5 != nullptr )
  {
    result = (int)(v5 + 2);
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  v6 = *(this + 7);
  if ( v6 != nullptr )
  {
    result = (int)(v6 + 2);
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
    }
  }
  return result;
}

// Address: 0x10004060
_DWORD *SheriffCreate()
{
  _DWORD *v0; // eax
  _DWORD *v1; // eax

  sub_10001B70();
  v0 = operator new(0x38u);
  if ( v0 != nullptr && (v1 = sub_10003DC0(v0)) != nullptr )
    return v1 + 1;
  else
    return nullptr;
}

// Address: 0x10004090
int __stdcall SheriffDelete(int a1)
{
  int result; // eax
  int v2[8]; // [esp+0h] [ebp-20h] BYREF

  v2[4] = (int)v2;
  sub_10001B70((wchar_t *)L"Delete sheriff instance.", v2[0]);
  result = a1;
  if ( a1 != 0 )
  {
    v2[7] = 0;
    if ( a1 != 4 )
      return (**(int (__thiscall ***)(int, int))(a1 - 4))(a1 - 4, 1);
  }
  return result;
}

// Address: 0x10004100
int __usercall sub_10004100@<eax>(int result@<eax>)
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

// Address: 0x10004140
_DWORD *__stdcall sub_10004140(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<sheriff_engine::Utility>::`vftable';
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

// Address: 0x10004210
_DWORD *__stdcall sub_10004210(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<sheriff_engine::Control>::`vftable';
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

// Address: 0x100042E0
_DWORD *__stdcall sub_100042E0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<sheriff_engine::Installer>::`vftable';
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

// Address: 0x100043B0
_DWORD *__stdcall sub_100043B0(_DWORD *a1, void *a2)
{
  void *v2; // edi
  void *v3; // eax
  _DWORD *result; // eax
  volatile signed __int32 *v5; // esi
  _DWORD v6[8]; // [esp+0h] [ebp-20h] BYREF

  v6[4] = v6;
  v2 = nullptr;
  v6[7] = 0;
  v3 = operator new(0x10u);
  if ( v3 != nullptr )
  {
    *((_DWORD *)v3 + 2) = 0;
    *((_DWORD *)v3 + 1) = a2;
    *((_DWORD *)v3 + 3) = 1;
    *(_DWORD *)v3 = &std::tr1::_Ref_count<sheriff_engine::Updater>::`vftable';
    v2 = v3;
    _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 1u);
  }
  result = a1;
  v5 = (volatile signed __int32 *)a1[1];
  if ( v5 != nullptr && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    result = a1;
  }
  result[1] = v2;
  *result = a2;
  return result;
}

// Address: 0x10004480
int __thiscall sub_10004480(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(this + 1);
  if ( v1 != 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 48))(v1, 1);
  return result;
}

// Address: 0x100044A0
int __thiscall sub_100044A0(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(this + 1);
  if ( v1 != 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 88))(v1, 1);
  return result;
}

// Address: 0x100044C0
int __thiscall sub_100044C0(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(this + 1);
  if ( v1 != 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 32))(v1, 1);
  return result;
}

// Address: 0x100044E0
int __thiscall sub_100044E0(void *this)
{
  int result; // eax

  if ( this != nullptr )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, 1);
  return result;
}

// Address: 0x100044F0
void __thiscall sub_100044F0(_DWORD *this)
{
  void *v1; // esi

  v1 = (void *)*(this + 1);
  if ( v1 != nullptr )
  {
    sub_1000F810(*(this + 1));
    operator delete(v1);
  }
}

// Address: 0x10004530
int __stdcall sub_10004530(int a1, int a2)
{
  *(_DWORD *)a1 = &sheriff_engine::Control::`vftable';
  *(_DWORD *)(a1 + 8) = a2;
  sub_100062B0(a1 + 16);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = -1;
  *(_BYTE *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 45) = 0;
  sub_10005170();
  return a1;
}

// Address: 0x100045B0
void *__thiscall sub_100045B0(void *this, char a2)
{
  void *v3; // eax

  v3 = *((void **)this + 3);
  *(_DWORD *)this = &sheriff_engine::Control::`vftable';
  if ( v3 != (void *)-1 )
  {
    CloseHandle(v3);
    *((_DWORD *)this + 3) = -1;
  }
  if ( *((_DWORD *)this + 12) != 0 )
  {
    CloseHandle(*((HANDLE *)this + 12));
    *((_DWORD *)this + 12) = 0;
  }
  sub_10006360();
  operator delete(*((void **)this + 4));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10004610
bool __thiscall sub_10004610(_DWORD *this)
{
  int FileW; // edi
  _WORD *v3; // eax
  void *v4; // eax
  _BYTE *v5; // eax
  DWORD v6; // ebp
  DWORD v7; // esi
  void *v8; // ebx
  bool v9; // bl
  void *v11; // [esp-4h] [ebp-250h]
  void **v12; // [esp+10h] [ebp-23Ch] BYREF
  void *v13; // [esp+14h] [ebp-238h]
  LPVOID lpInBuffer; // [esp+20h] [ebp-22Ch]
  _BYTE *v15; // [esp+24h] [ebp-228h]
  int v16; // [esp+28h] [ebp-224h]
  HANDLE hDevice; // [esp+2Ch] [ebp-220h]
  _WORD *v18; // [esp+30h] [ebp-21Ch]
  DWORD BytesReturned; // [esp+34h] [ebp-218h] BYREF
  WCHAR Buffer[262]; // [esp+38h] [ebp-214h] BYREF

  FileW = -1;
  if ( *(this + 3) != -1
    || (GetWindowsDirectoryW(Buffer, 0x104u),
        swprintf_s(Buffer, 0x104u, L"\\\\.\\%c:", Buffer[0]),
        (FileW = (int)CreateFileW(Buffer, 0, 3u, nullptr, 3u, 0, nullptr)) != -1) )
  {
    sub_10001180(&v12, 2048);
    v3 = lpInBuffer;
    if ( v15 == lpInBuffer )
    {
      _invalid_parameter_noinfo();
      v3 = lpInBuffer;
    }
    v18 = v3;
    *v3 = -1;
    v4 = (void *)*(this + 3);
    hDevice = (HANDLE)FileW;
    if ( v4 != (void *)-1 )
      hDevice = v4;
    v5 = lpInBuffer;
    v6 = v15 - (_BYTE *)lpInBuffer;
    if ( v15 == lpInBuffer )
    {
      _invalid_parameter_noinfo();
      v5 = lpInBuffer;
    }
    v7 = v15 - v5;
    v8 = v5;
    if ( v15 == v5 )
    {
      _invalid_parameter_noinfo();
      v5 = lpInBuffer;
    }
    if ( DeviceIoControl(hDevice, 0x223C00u, v5, v7, v8, v6, &BytesReturned, nullptr) )
    {
      if ( FileW != -1 )
        CloseHandle((HANDLE)FileW);
      if ( BytesReturned != 0 && *((_DWORD *)v18 + 3) == 0 )
      {
        v9 = *((_BYTE *)v18 + 9) != 88;
        sub_100011E0((void **)&v12);
        return v9;
      }
      v12 = &data_buffer::`vftable';
      if ( lpInBuffer != nullptr )
        operator delete(lpInBuffer);
      v11 = v13;
    }
    else
    {
      if ( FileW != -1 )
        CloseHandle((HANDLE)FileW);
      v12 = &data_buffer::`vftable';
      if ( lpInBuffer != nullptr )
        operator delete(lpInBuffer);
      v11 = v13;
    }
    lpInBuffer = nullptr;
    v15 = nullptr;
    v16 = 0;
    operator delete(v11);
  }
  return false;
}

// Address: 0x100047C0
char __stdcall sub_100047C0(int a1)
{
  int v1; // ecx
  unsigned __int16 *v2; // eax
  const WCHAR *v3; // eax
  _DWORD *v4; // eax
  const wchar_t *v5; // eax
  _DWORD *v6; // eax
  const WCHAR *v7; // eax
  int v8; // esi
  int v9; // ecx
  const WCHAR *v10; // eax
  HANDLE FileW; // eax
  LPCWSTR *v12; // eax
  unsigned int v13; // edi
  _QWORD *v14; // esi
  unsigned int v15; // ebp
  unsigned int v16; // esi
  _DWORD *v17; // edi
  __int64 v18; // rax
  HANDLE v19; // esi
  int v20; // esi
  int v21; // ecx
  char v23; // [esp+31h] [ebp-1501h]
  DWORD BytesReturned; // [esp+32h] [ebp-1500h] BYREF
  HANDLE hDevice; // [esp+36h] [ebp-14FCh]
  int v26; // [esp+3Ah] [ebp-14F8h]
  int v27; // [esp+3Eh] [ebp-14F4h] BYREF
  HANDLE hFile; // [esp+42h] [ebp-14F0h]
  LARGE_INTEGER NewFilePointer; // [esp+46h] [ebp-14ECh] BYREF
  void *v30; // [esp+56h] [ebp-14DCh]
  int v31; // [esp+66h] [ebp-14CCh]
  unsigned int v32; // [esp+6Ah] [ebp-14C8h]
  int v33; // [esp+6Eh] [ebp-14C4h] BYREF
  int v34; // [esp+72h] [ebp-14C0h] BYREF
  void *v35; // [esp+76h] [ebp-14BCh]
  int v36; // [esp+86h] [ebp-14ACh]
  unsigned int v37; // [esp+8Ah] [ebp-14A8h]
  unsigned int v38; // [esp+8Eh] [ebp-14A4h] BYREF
  int v39; // [esp+96h] [ebp-149Ch]
  int v40; // [esp+9Ah] [ebp-1498h]
  _BYTE v41[2040]; // [esp+9Eh] [ebp-1494h] BYREF
  int v42; // [esp+896h] [ebp-C9Ch] BYREF
  LPCWSTR lpFileName[4]; // [esp+89Ah] [ebp-C98h] BYREF
  unsigned int v44; // [esp+8AAh] [ebp-C88h]
  unsigned int v45; // [esp+8AEh] [ebp-C84h]
  int v46; // [esp+8B2h] [ebp-C80h] BYREF
  LPCWSTR lpszFileName[4]; // [esp+8B6h] [ebp-C7Ch] BYREF
  int v48; // [esp+8C6h] [ebp-C6Ch]
  unsigned int v49; // [esp+8CAh] [ebp-C68h]
  _DWORD Buffer[5]; // [esp+8CEh] [ebp-C64h] BYREF
  int v51; // [esp+8E2h] [ebp-C50h]
  _DWORD v52[64]; // [esp+9CEh] [ebp-B64h]
  int InBuffer; // [esp+ACEh] [ebp-A64h] BYREF
  int v54; // [esp+AD2h] [ebp-A60h]
  int v55; // [esp+AD6h] [ebp-A5Ch]
  int v56; // [esp+ADEh] [ebp-A54h]
  int v57; // [esp+AE2h] [ebp-A50h]
  WCHAR szVolumePathName[260]; // [esp+1316h] [ebp-21Ch] BYREF
  int v59; // [esp+152Eh] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 8);
  v26 = a1;
  v23 = 0;
  v2 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 20))(v1);
  LOWORD(lpszFileName[0]) = 0;
  v49 = 7;
  v48 = 0;
  sub_10003390(v2, &v46, wcslen(v2));
  v59 = 0;
  sub_10003B40(L"bootrom.bin", &v46, 0xBu);
  v3 = lpszFileName[0];
  if ( v49 < 8 )
    v3 = (const WCHAR *)lpszFileName;
  if ( !GetVolumePathNameW(v3, szVolumePathName, 0x104u) )
  {
    if ( v49 >= 8 )
      operator delete((void *)lpszFileName[0]);
    return v23;
  }
  v45 = 7;
  v44 = 0;
  LOWORD(lpFileName[0]) = 0;
  sub_10003390(szVolumePathName, &v42, wcslen(szVolumePathName));
  LOBYTE(v59) = 1;
  v4 = (_DWORD *)sub_10006280(&v42);
  LOBYTE(v59) = 2;
  sub_100032E0(v4, (int)&v42, 0, 0xFFFFFFFF);
  LOBYTE(v59) = 1;
  if ( v32 >= 8 )
    operator delete(v30);
  if ( v44 <= 4 )
    goto LABEL_12;
  v5 = lpFileName[0];
  if ( v45 < 8 )
    v5 = (const wchar_t *)lpFileName;
  if ( wcsncmp(v5, L"\\\\.\\", 4u) != 0 )
  {
LABEL_12:
    v37 = 7;
    v36 = 0;
    LOWORD(v35) = 0;
    sub_10003390(L"\\\\.\\", &v34, 4u);
    LOBYTE(v59) = 3;
    v6 = (_DWORD *)sub_10006490(&v34, &v42);
    LOBYTE(v59) = 4;
    sub_100032E0(v6, (int)&v42, 0, 0xFFFFFFFF);
    if ( v32 >= 8 )
      operator delete(v30);
    LOBYTE(v59) = 1;
    v32 = 7;
    v31 = 0;
    LOWORD(v30) = 0;
    if ( v37 >= 8 )
      operator delete(v35);
  }
  v7 = lpFileName[0];
  if ( v45 < 8 )
    v7 = (const WCHAR *)lpFileName;
  hDevice = CreateFileW(v7, 0, 3u, nullptr, 3u, 0, nullptr);
  if ( hDevice != (HANDLE)-1 )
  {
    v8 = v26;
    v9 = *(_DWORD *)(v26 + 8);
    InBuffer = 13;
    v54 = 8;
    v55 = 0;
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 32))(v9, &InBuffer, 2120);
    BytesReturned = 0;
    if ( DeviceIoControl(hDevice, 0x223E80u, &InBuffer, 0x848u, &InBuffer, 0x848u, &BytesReturned, nullptr) )
    {
      (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(v8 + 8) + 32))(*(_DWORD *)(v8 + 8), &InBuffer, 2120);
      if ( v55 != 0 )
      {
        if ( v45 >= 8 )
          operator delete((void *)lpFileName[0]);
        v45 = 7;
        v44 = 0;
        LOWORD(lpFileName[0]) = 0;
        if ( v49 >= 8 )
          operator delete((void *)lpszFileName[0]);
        v49 = 7;
        v48 = 0;
        LOWORD(lpszFileName[0]) = 0;
        goto LABEL_70;
      }
      v10 = lpszFileName[0];
      if ( v49 < 8 )
        v10 = (const WCHAR *)lpszFileName;
      FileW = CreateFileW(v10, 0xC0000000, 1u, nullptr, 3u, 0, nullptr);
      hFile = FileW;
      if ( FileW != (HANDLE)-1 )
      {
        if ( ReadFile(FileW, Buffer, 0x200u, &BytesReturned, nullptr) )
        {
          if ( Buffer[4] == 1179797587 )
          {
            v12 = (LPCWSTR *)lpszFileName[0];
            if ( v49 < 8 )
              v12 = lpszFileName;
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, LPCWSTR *, int *, int *, unsigned int *))(**(_DWORD **)(v8 + 8) + 28))(
                   *(_DWORD *)(v8 + 8),
                   v12,
                   &v33,
                   &v27,
                   &v38) != 0
              && v38 <= 0x20 )
            {
              if ( v51 == v27 && v56 == v39 && v57 == v40 )
              {
                v13 = 0;
                v14 = v41;
                while ( v13 < v38 )
                {
                  if ( *(v14 - 1) / 512LL != v52[2 * v13] || *v14 / 512LL != v52[2 * v13 + 1] )
                    goto LABEL_58;
                  ++v13;
                  v14 += 2;
                  if ( v13 >= 0x20 )
                    break;
                }
              }
              else
              {
LABEL_58:
                v15 = v38;
                v51 = v27;
                v16 = 0;
                v17 = v41;
                do
                {
                  if ( v16 < v15 )
                  {
                    v18 = *((_QWORD *)v17 - 1) / 512LL;
                    HIDWORD(v18) = v17[1];
                    v52[2 * v16] = v18;
                    LODWORD(v18) = *v17;
                    v52[2 * v16 + 1] = v18 / 512;
                  }
                  else
                  {
                    v52[2 * v16] = 0;
                    v52[2 * v16 + 1] = 0;
                  }
                  ++v16;
                  v17 += 4;
                }
                while ( v16 < 0x20 );
                v19 = hFile;
                NewFilePointer.QuadPart = 0;
                if ( SetFilePointerEx(hFile, 0, &NewFilePointer, 0)
                  && WriteFile(v19, Buffer, 0x200u, &BytesReturned, nullptr) )
                {
                  v20 = v26;
                  v56 = v39;
                  v21 = *(_DWORD *)(v26 + 8);
                  v57 = v40;
                  InBuffer = 14;
                  v54 = 8;
                  v55 = 0;
                  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v21 + 32))(v21, &InBuffer, 2120);
                  if ( DeviceIoControl(
                         hDevice,
                         0x223E80u,
                         &InBuffer,
                         0x848u,
                         &InBuffer,
                         0x848u,
                         &BytesReturned,
                         nullptr) )
                  {
                    (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(v20 + 8) + 32))(
                      *(_DWORD *)(v20 + 8),
                      &InBuffer,
                      2120);
                    if ( v55 == 0 )
                      v23 = 1;
                  }
                }
              }
            }
          }
          sub_10002C10((int)&v42);
          sub_10002C10((int)&v46);
        }
        else
        {
          if ( v45 >= 8 )
            operator delete((void *)lpFileName[0]);
          v45 = 7;
          v44 = 0;
          LOWORD(lpFileName[0]) = 0;
          if ( v49 >= 8 )
            operator delete((void *)lpszFileName[0]);
          v49 = 7;
          v48 = 0;
          LOWORD(lpszFileName[0]) = 0;
        }
        CloseHandle(hFile);
        goto LABEL_70;
      }
    }
    if ( v45 >= 8 )
      operator delete((void *)lpFileName[0]);
    v45 = 7;
    v44 = 0;
    LOWORD(lpFileName[0]) = 0;
    if ( v49 >= 8 )
      operator delete((void *)lpszFileName[0]);
    v49 = 7;
    v48 = 0;
    LOWORD(lpszFileName[0]) = 0;
LABEL_70:
    CloseHandle(hDevice);
    return v23;
  }
  if ( v45 >= 8 )
    operator delete((void *)lpFileName[0]);
  v45 = 7;
  v44 = 0;
  LOWORD(lpFileName[0]) = 0;
  if ( v49 >= 8 )
    operator delete((void *)lpszFileName[0]);
  return v23;
}

// Address: 0x10004F80
void sub_10004F80()
{
  HANDLE FileW; // ebp
  DWORD v1; // esi
  _DWORD *v2; // ebx
  unsigned int v3; // ecx
  const char *v4; // eax
  char *v5; // esi
  size_t v6; // esi
  DWORD v7; // esi
  int v8; // [esp+10h] [ebp-23Ch]
  int i; // [esp+14h] [ebp-238h]
  void *v10[4]; // [esp+18h] [ebp-234h] BYREF
  LPVOID lpBuffer; // [esp+28h] [ebp-224h]
  _BYTE *v12; // [esp+2Ch] [ebp-220h]
  int v13; // [esp+30h] [ebp-21Ch]
  DWORD NumberOfBytesRead; // [esp+34h] [ebp-218h] BYREF
  WCHAR FileName[262]; // [esp+38h] [ebp-214h] BYREF

  sub_10001180(v10, 0x8000);
  v8 = 67;
  for ( i = 24; i != 0; --i )
  {
    swprintf_s(FileName, 0x104u, L"%c:\\%ws\\%ws", v8, L"DRVBKUP", L"DRVBKUP.000");
    FileW = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
    if ( FileW != (HANDLE)-1 )
    {
      v1 = v12 - (_BYTE *)lpBuffer;
      if ( v12 == lpBuffer )
        _invalid_parameter_noinfo();
      if ( ReadFile(FileW, lpBuffer, v1, &NumberOfBytesRead, nullptr) )
      {
        if ( v12 == lpBuffer )
          _invalid_parameter_noinfo();
        v2 = (char *)lpBuffer + 512;
        v3 = 27;
        v4 = "Sheriff BAT Header Ver 3.00";
        v5 = (char *)lpBuffer + 512;
        while ( *(_DWORD *)v5 == *(_DWORD *)v4 )
        {
          v3 -= 4;
          v4 += 4;
          v5 += 4;
          if ( v3 < 4 )
          {
            if ( *v4 == *v5 && v4[1] == v5[1] && v4[2] == v5[2] )
              goto LABEL_19;
            break;
          }
        }
        SetFilePointer(FileW, 0, nullptr, 0);
        v6 = v12 - (_BYTE *)lpBuffer;
        if ( v12 == lpBuffer )
          _invalid_parameter_noinfo();
        memset(lpBuffer, 0, v6);
        qmemcpy(v2, "Sheriff BAT Header Ver 3.00", 27);
        v2[8] = 52;
        v2[10] = 128;
        v2[11] = 0x400000;
        v7 = v12 - (_BYTE *)lpBuffer;
        if ( v12 == lpBuffer )
          _invalid_parameter_noinfo();
        WriteFile(FileW, lpBuffer, v7, &NumberOfBytesRead, nullptr);
      }
LABEL_19:
      CloseHandle(FileW);
    }
    ++v8;
  }
  v10[0] = &data_buffer::`vftable';
  if ( lpBuffer != nullptr )
    operator delete(lpBuffer);
  lpBuffer = nullptr;
  v12 = nullptr;
  v13 = 0;
  operator delete(v10[1]);
}

// Address: 0x10005170
char __usercall sub_10005170@<al>(int a1@<esi>)
{
  HANDLE FileW; // eax
  _DWORD v3[526]; // [esp+4h] [ebp-838h] BYREF

  FileW = CreateFileW(L"\\\\.\\PhysicalDrive0", 0, 3u, nullptr, 3u, 0, nullptr);
  *(_DWORD *)(a1 + 12) = FileW;
  if ( FileW == (HANDLE)-1 )
    return 0;
  if ( sub_10004610((_DWORD *)a1) )
  {
    CloseHandle(*(HANDLE *)(a1 + 12));
    *(_DWORD *)(a1 + 12) = -1;
    *(_BYTE *)(a1 + 44) = 1;
    return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 4))(a1, v3) == 0 )
    return 0;
  if ( (v3[0] & 0x4000000) != 0 )
    *(_BYTE *)(a1 + 45) = sub_100047C0(a1);
  if ( (v3[0] & 4) == 0 )
    return 0;
  sub_10004F80();
  sub_10005200(a1, v3);
  return 1;
}

// Address: 0x10005200
int __stdcall sub_10005200(int a1, int a2)
{
  char v2; // bl
  int result; // eax
  unsigned int v4; // ecx
  int v5; // edi
  int v6; // esi
  int v7; // [esp-4h] [ebp-40h]
  int v8; // [esp+0h] [ebp-3Ch]
  int v9; // [esp+4h] [ebp-38h]
  char v10; // [esp+14h] [ebp-28h]
  int v11; // [esp+18h] [ebp-24h] BYREF
  int v12; // [esp+1Ch] [ebp-20h] BYREF
  _DWORD v13[3]; // [esp+20h] [ebp-1Ch] BYREF
  char v14; // [esp+2Ch] [ebp-10h]
  _DWORD v15[3]; // [esp+30h] [ebp-Ch] BYREF

  v2 = 67;
  v10 = 67;
  do
  {
    result = (*(int (__thiscall **)(_DWORD, char, int *, _DWORD *, _DWORD *, int *))(**(_DWORD **)(a1 + 8) + 16))(
               *(_DWORD *)(a1 + 8),
               v10,
               &v11,
               v13,
               v15,
               &v12);
    if ( (_BYTE)result != 0 )
    {
      v4 = 0;
      result = a2 + 24;
      while ( *(char *)(result + 8) >= 0
           || *(_DWORD *)result != v11
           || *(_DWORD *)(result + 16) != v13[0]
           || *(_DWORD *)(result + 20) != v13[1] )
      {
        ++v4;
        result += 80;
        if ( v4 >= 0x1A )
          goto LABEL_11;
      }
      v5 = *(_DWORD *)(a1 + 36);
      v7 = *(_DWORD *)(v5 + 4);
      v13[2] = *(unsigned __int8 *)(result + 4);
      v14 = v2;
      v6 = sub_100063B0(v5, v7);
      sub_100063F0(v8, v9);
      *(_DWORD *)(v5 + 4) = v6;
      result = *(_DWORD *)(v6 + 4);
      *(_DWORD *)result = v6;
    }
LABEL_11:
    v10 = ++v2;
  }
  while ( v2 <= 90 );
  return result;
}

// Address: 0x100052C0
bool __fastcall sub_100052C0(void *a1, int a2, int a3, int a4)
{
  bool v4; // cl
  size_t v5; // esi
  bool v6; // bl
  bool v7; // zf
  _BYTE v10[2108]; // [esp+20h] [ebp-840h] BYREF

  v4 = false;
  switch ( a4 )
  {
    case 0:
      v5 = 2104;
      v6 = true;
      goto LABEL_7;
    case 1:
    case 2:
      v6 = a4 == 1;
      v5 = 464;
      v4 = a4 == 2;
      goto LABEL_7;
    case 7:
    case 8:
      v5 = 520;
      v7 = a4 == 7;
      goto LABEL_6;
    case 10:
    case 11:
      v5 = 116;
      v7 = a4 == 10;
LABEL_6:
      v4 = true;
      v6 = v7;
LABEL_7:
      if ( v5 != a2 )
      {
        *(_DWORD *)(a3 + 4) = -2147483646;
        return false;
      }
      if ( v4 )
        memcpy_0(v10, a1, v5);
      if ( (unsigned __int8)sub_10005400() == 0 )
        return false;
      if ( v6 )
        memcpy_0(a1, v10, v5);
      return *(_DWORD *)(a3 + 4) == 0;
    default:
      *(_DWORD *)(a3 + 4) = -2147483647;
      return false;
  }
}

// Address: 0x10005400
bool __usercall sub_10005400@<al>(_DWORD *a1@<eax>, DWORD a2@<ecx>, int a3@<edi>)
{
  int v3; // ecx
  int v6; // esi
  DWORD BytesReturned; // [esp+8h] [ebp-4h] BYREF

  BytesReturned = a2;
  v3 = *(_DWORD *)(a3 + 8);
  BytesReturned = 0;
  (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v3 + 32))(v3, a1, 2120);
  if ( DeviceIoControl(*(HANDLE *)(a3 + 12), 0x223E80u, a1, 0x848u, a1, 0x848u, &BytesReturned, nullptr) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(a3 + 8) + 32))(*(_DWORD *)(a3 + 8), a1, 2120);
    v6 = a1[2];
    *(_DWORD *)(a3 + 4) = v6;
    return v6 == 0;
  }
  else
  {
    *(_DWORD *)(a3 + 4) = -2147483645;
    return false;
  }
}

// Address: 0x10005470
char __thiscall sub_10005470(_DWORD *this, char *a2)
{
  _DWORD *v2; // esi
  char *v4; // edi
  int *v5; // ebx
  _DWORD *v6; // esi
  int *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  bool v10; // zf
  char *v11; // [esp+Ch] [ebp-Ch]
  int v13; // [esp+14h] [ebp-4h]

  v2 = this;
  if ( sub_100052C0(a2, 2104, (int)this, 0) )
  {
    v4 = a2 + 24;
    v11 = a2 + 24;
    v13 = 26;
    do
    {
      if ( v4[8] < 0 )
      {
        v5 = *(int **)v2[9];
        v6 = (_DWORD *)v2[4];
        while ( 1 )
        {
          v7 = (int *)*(this + 9);
          if ( v6 == nullptr || v6 != (_DWORD *)*(this + 4) )
            _invalid_parameter_noinfo();
          if ( v5 == v7 )
            break;
          if ( v6 != nullptr )
          {
            v8 = (_DWORD *)*v6;
          }
          else
          {
            _invalid_parameter_noinfo();
            v8 = nullptr;
          }
          if ( v5 == (int *)v8[5] )
            _invalid_parameter_noinfo();
          if ( v5[2] == (unsigned __int8)v11[4] )
          {
            if ( v6 != nullptr )
              v6 = (_DWORD *)*v6;
            else
              _invalid_parameter_noinfo();
            if ( v5 == (int *)v6[5] )
              _invalid_parameter_noinfo();
            v11[5] = *((_BYTE *)v5 + 12);
            break;
          }
          if ( v6 != nullptr )
          {
            v9 = (_DWORD *)*v6;
          }
          else
          {
            _invalid_parameter_noinfo();
            v9 = nullptr;
          }
          if ( v5 == (int *)v9[5] )
            _invalid_parameter_noinfo();
          v5 = (int *)*v5;
        }
        v2 = this;
      }
      v4 = v11 + 80;
      v10 = v13-- == 1;
      v11 += 80;
    }
    while ( !v10 );
    return 1;
  }
  else
  {
    sub_10005580(v2);
    return 1;
  }
}

// Address: 0x10005580
void __usercall sub_10005580(int a1@<ecx>, _DWORD *a2@<edi>)
{
  unsigned __int16 *v3; // eax
  const WCHAR *v4; // eax
  HANDLE FileW; // esi
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-230h] BYREF
  int v7; // [esp+10h] [ebp-22Ch] BYREF
  LPCWSTR lpFileName[5]; // [esp+14h] [ebp-228h] BYREF
  unsigned int v9; // [esp+28h] [ebp-214h]
  _BYTE Buffer[16]; // [esp+2Ch] [ebp-210h] BYREF
  int v11; // [esp+3Ch] [ebp-200h]
  __int16 v12; // [esp+A8h] [ebp-194h]
  int v13; // [esp+238h] [ebp-4h]

  memset(a2, 0, 0x838u);
  if ( *(_BYTE *)(a1 + 44) != 0 )
  {
    *a2 |= 0x8000000u;
    return;
  }
  if ( *(_BYTE *)(a1 + 45) != 0 )
  {
    *a2 |= 0x10000000u;
    return;
  }
  v3 = (unsigned __int16 *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 20))(*(_DWORD *)(a1 + 8));
  LOWORD(lpFileName[0]) = 0;
  v9 = 7;
  lpFileName[4] = nullptr;
  sub_10003390(v3, &v7, wcslen(v3));
  v13 = 0;
  sub_10003B40(L"bootrom.bin", &v7, 0xBu);
  v4 = lpFileName[0];
  if ( v9 < 8 )
    v4 = (const WCHAR *)lpFileName;
  FileW = CreateFileW(v4, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
  {
    *a2 |= 0x1000000u;
  }
  else
  {
    ReadFile(FileW, Buffer, 0x200u, &NumberOfBytesRead, nullptr);
    CloseHandle(FileW);
    if ( v11 == 1179797587 && v12 != 0 )
    {
      *a2 |= 0x4000000u;
      sub_10002C10((int)&v7);
      return;
    }
    *a2 |= 0x2000000u;
  }
  if ( v9 >= 8 )
    operator delete((void *)lpFileName[0]);
}

// Address: 0x10005700
bool __thiscall sub_10005700(_DWORD *this, char *a2)
{
  _DWORD *v2; // edi
  bool result; // al
  char *v4; // esi
  _DWORD *v5; // eax
  int *v6; // ebx
  _DWORD *v7; // esi
  int *v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  bool v12; // zf
  bool v13; // [esp+13h] [ebp-85Dh]
  char *v14; // [esp+14h] [ebp-85Ch]
  int v16; // [esp+1Ch] [ebp-854h]
  _DWORD v17[4]; // [esp+20h] [ebp-850h] BYREF
  char Src[2108]; // [esp+30h] [ebp-840h] BYREF

  v2 = this;
  v17[0] = 1;
  v17[1] = 464;
  v17[2] = 0;
  result = sub_10005400(v17, (DWORD)this, (int)this);
  if ( result )
  {
    memcpy_0(a2, Src, 0x1D0u);
    result = v2[1] == 0;
    v13 = result;
    if ( v2[1] == 0 )
    {
      v4 = a2 + 48;
      v14 = a2 + 48;
      v16 = 26;
      while ( 1 )
      {
        if ( v4[12] < 0 )
        {
          v5 = this;
          v6 = *(int **)v2[9];
          v7 = (_DWORD *)*(this + 4);
          while ( 1 )
          {
            v8 = (int *)v5[9];
            v9 = (_DWORD *)v5[4];
            if ( v7 == nullptr || v7 != v9 )
              _invalid_parameter_noinfo();
            if ( v6 == v8 )
              break;
            if ( v7 != nullptr )
            {
              v10 = (_DWORD *)*v7;
            }
            else
            {
              _invalid_parameter_noinfo();
              v10 = nullptr;
            }
            if ( v6 == (int *)v10[5] )
              _invalid_parameter_noinfo();
            if ( v6[2] == *(_DWORD *)v14 )
            {
              if ( v7 != nullptr )
                v7 = (_DWORD *)*v7;
              else
                _invalid_parameter_noinfo();
              if ( v6 == (int *)v7[5] )
                _invalid_parameter_noinfo();
              v14[4] = *((_BYTE *)v6 + 12);
              break;
            }
            if ( v7 != nullptr )
            {
              v11 = (_DWORD *)*v7;
            }
            else
            {
              _invalid_parameter_noinfo();
              v11 = nullptr;
            }
            if ( v6 == (int *)v11[5] )
              _invalid_parameter_noinfo();
            v6 = (int *)*v6;
            v5 = this;
          }
        }
        v4 = v14 + 16;
        v12 = v16-- == 1;
        v14 += 16;
        if ( v12 )
          return v13;
        v2 = this;
      }
    }
  }
  return result;
}

// Address: 0x10005870
bool __thiscall sub_10005870(void *this, void *a2)
{
  return sub_100052C0(a2, 464, (int)this, 2);
}

// Address: 0x10005890
bool __thiscall sub_10005890(void *this, int a2)
{
  _DWORD v3[531]; // [esp+8h] [ebp-850h] BYREF

  v3[4] = a2;
  v3[0] = 3;
  v3[1] = 4;
  v3[2] = 0;
  return sub_10005400(v3, (DWORD)this, (int)this);
}

// Address: 0x100058F0
bool __thiscall sub_100058F0(void *this, int a2, int a3)
{
  _DWORD v4[531]; // [esp+8h] [ebp-850h] BYREF

  v4[4] = a2;
  v4[5] = a3;
  v4[0] = 4;
  v4[1] = 8;
  v4[2] = 0;
  return sub_10005400(v4, (DWORD)this, (int)this);
}

// Address: 0x10005960
bool __thiscall sub_10005960(void *this, int a2)
{
  _DWORD v3[531]; // [esp+8h] [ebp-850h] BYREF

  v3[4] = a2;
  v3[0] = 21;
  v3[1] = 4;
  v3[2] = 0;
  return sub_10005400(v3, (DWORD)this, (int)this);
}

// Address: 0x100059C0
bool __thiscall sub_100059C0(void *this, int a2, int a3)
{
  _DWORD v4[531]; // [esp+8h] [ebp-850h] BYREF

  v4[4] = a2;
  v4[5] = a3;
  v4[0] = 22;
  v4[1] = 8;
  v4[2] = 0;
  return sub_10005400(v4, (DWORD)this, (int)this);
}

// Address: 0x10005A30
bool __thiscall sub_10005A30(void *this, int a2, int a3, int a4)
{
  _DWORD v5[531]; // [esp+8h] [ebp-850h] BYREF

  v5[4] = a2;
  v5[6] = a4;
  v5[5] = a3;
  v5[0] = 5;
  v5[1] = 12;
  v5[2] = 0;
  return sub_10005400(v5, (DWORD)this, (int)this);
}

// Address: 0x10005AA0
bool __thiscall sub_10005AA0(void *this, int a2, int a3, int a4)
{
  _DWORD v5[531]; // [esp+8h] [ebp-850h] BYREF

  v5[4] = a2;
  v5[6] = a4;
  v5[5] = a3;
  v5[0] = 23;
  v5[1] = 12;
  v5[2] = 0;
  return sub_10005400(v5, (DWORD)this, (int)this);
}

// Address: 0x10005B10
bool __thiscall sub_10005B10(void *this, int a2, int a3)
{
  _DWORD v4[531]; // [esp+8h] [ebp-850h] BYREF

  v4[4] = a2;
  v4[5] = a3;
  v4[0] = 6;
  v4[1] = 8;
  v4[2] = 0;
  return sub_10005400(v4, (DWORD)this, (int)this);
}

// Address: 0x10005B80
bool __thiscall sub_10005B80(_DWORD *this, void *Src)
{
  DWORD v3; // ecx
  bool result; // al
  _DWORD v5[4]; // [esp+8h] [ebp-850h] BYREF
  _BYTE v6[2108]; // [esp+18h] [ebp-840h] BYREF

  v5[0] = 7;
  v5[1] = 520;
  v5[2] = 0;
  memcpy_0(v6, Src, 0x208u);
  result = sub_10005400(v5, v3, (int)this);
  if ( result )
  {
    memcpy_0(Src, v6, 0x208u);
    return *(this + 1) == 0;
  }
  return result;
}

// Address: 0x10005C20
bool __thiscall sub_10005C20(_DWORD *this, void *Src)
{
  DWORD v3; // ecx
  bool result; // al
  _DWORD v5[4]; // [esp+8h] [ebp-850h] BYREF
  _BYTE v6[2108]; // [esp+18h] [ebp-840h] BYREF

  v5[0] = 8;
  v5[1] = 520;
  v5[2] = 0;
  memcpy_0(v6, Src, 0x208u);
  result = sub_10005400(v5, v3, (int)this);
  if ( result )
    return *(this + 1) == 0;
  return result;
}

// Address: 0x10005CB0
bool __thiscall sub_10005CB0(_DWORD *this, void *Src)
{
  DWORD v3; // ecx
  bool result; // al
  _DWORD v5[4]; // [esp+8h] [ebp-850h] BYREF
  _BYTE v6[2108]; // [esp+18h] [ebp-840h] BYREF

  v5[0] = 10;
  v5[1] = 116;
  v5[2] = 0;
  memcpy_0(v6, Src, 0x74u);
  result = sub_10005400(v5, v3, (int)this);
  if ( result )
  {
    memcpy_0(Src, v6, 0x74u);
    return *(this + 1) == 0;
  }
  return result;
}

// Address: 0x10005D50
bool __thiscall sub_10005D50(_DWORD *this, void *Src)
{
  DWORD v3; // ecx
  bool result; // al
  _DWORD v5[4]; // [esp+8h] [ebp-850h] BYREF
  _BYTE v6[2108]; // [esp+18h] [ebp-840h] BYREF

  v5[0] = 11;
  v5[1] = 116;
  v5[2] = 0;
  memcpy_0(v6, Src, 0x74u);
  result = sub_10005400(v5, v3, (int)this);
  if ( result )
    return *(this + 1) == 0;
  return result;
}

// Address: 0x10005DE0
bool __thiscall sub_10005DE0(void *this, int a2, int a3, int a4, int a5)
{
  _DWORD v6[531]; // [esp+8h] [ebp-850h] BYREF

  v6[4] = a2;
  v6[5] = a3;
  v6[6] = a4;
  v6[7] = a5;
  v6[0] = 12;
  v6[1] = 16;
  v6[2] = 0;
  return sub_10005400(v6, (DWORD)this, (int)this);
}

// Address: 0x10005E50
bool __thiscall sub_10005E50(void *this)
{
  _DWORD v2[531]; // [esp+8h] [ebp-850h] BYREF

  v2[1] = 0;
  v2[2] = 0;
  v2[0] = 15;
  return sub_10005400(v2, (DWORD)this, (int)this);
}

// Address: 0x10005EA0
char __thiscall sub_10005EA0(void *this, char *a2, unsigned int a3)
{
  unsigned int v3; // esi
  _DWORD v5[4]; // [esp+10h] [ebp-850h] BYREF
  _BYTE Src[2108]; // [esp+20h] [ebp-840h] BYREF

  if ( a2 == nullptr )
    return 0;
  v3 = a3;
  if ( a3 == 0 )
    return 0;
  v5[0] = 16;
  v5[1] = 18;
  v5[2] = 0;
  if ( !sub_10005400(v5, (DWORD)this, (int)this) )
    return 0;
  if ( a3 > 0x12 )
    v3 = 18;
  memcpy_0(a2, Src, v3 - 1);
  a2[v3 - 1] = 0;
  return 1;
}

// Address: 0x10005F50
char __thiscall sub_10005F50(int this, int a2, void *Src, _BYTE *Size)
{
  const void *v5; // ebp
  size_t v6; // edi
  size_t v7; // esi
  _DWORD *v8; // esi
  int v9; // edi
  _BYTE *v10; // ecx
  DWORD v11; // ebp
  DWORD v12; // edi
  int v14; // edi
  int v15; // esi
  void *v16[4]; // [esp+14h] [ebp-28h] BYREF
  void *lpInBuffer; // [esp+24h] [ebp-18h]
  _BYTE *v18; // [esp+28h] [ebp-14h]
  int v19; // [esp+38h] [ebp-4h]

  v5 = Src;
  if ( Src == nullptr )
    return 0;
  v6 = (size_t)Size;
  if ( Size == nullptr )
    return 0;
  sub_10001180(v16, (int)(Size + 2632));
  v19 = 0;
  v7 = v18 - (_BYTE *)lpInBuffer;
  if ( v18 == lpInBuffer )
    _invalid_parameter_noinfo();
  memset(lpInBuffer, 0, v7);
  v8 = lpInBuffer;
  if ( v18 == lpInBuffer )
  {
    _invalid_parameter_noinfo();
    v8 = lpInBuffer;
  }
  *v8 = 17;
  v8[4] = a2;
  v8[5] = (v6 + 511) >> 9;
  memcpy_0(v8 + 6, v5, v6);
  v8[1] = (v8[5] << 9) + 11;
  v9 = v18 - (_BYTE *)lpInBuffer;
  if ( v18 == lpInBuffer )
    _invalid_parameter_noinfo();
  (*(void (__thiscall **)(_DWORD, void *, int))(**(_DWORD **)(this + 8) + 32))(*(_DWORD *)(this + 8), lpInBuffer, v9);
  v10 = lpInBuffer;
  Src = nullptr;
  v11 = v18 - (_BYTE *)lpInBuffer;
  if ( v18 == lpInBuffer )
  {
    _invalid_parameter_noinfo();
    v10 = lpInBuffer;
  }
  v12 = v18 - v10;
  Size = v10;
  if ( v18 == v10 )
  {
    _invalid_parameter_noinfo();
    v10 = lpInBuffer;
  }
  if ( !DeviceIoControl(*(HANDLE *)(this + 12), 0x223E80u, v10, v12, Size, v11, (LPDWORD)&Src, nullptr) )
  {
    *(_DWORD *)(this + 4) = -2147483645;
LABEL_15:
    sub_100011E0(v16);
    return 0;
  }
  v14 = v18 - (_BYTE *)lpInBuffer;
  if ( v18 == lpInBuffer )
    _invalid_parameter_noinfo();
  (*(void (__thiscall **)(_DWORD, void *, int))(**(_DWORD **)(this + 8) + 32))(*(_DWORD *)(this + 8), lpInBuffer, v14);
  v15 = v8[2];
  if ( v15 != 0 )
  {
    *(_DWORD *)(this + 4) = v15;
    goto LABEL_15;
  }
  sub_100011E0(v16);
  return 1;
}

// Address: 0x100060F0
char __thiscall sub_100060F0(void *this, void *a2)
{
  _DWORD v3[4]; // [esp+10h] [ebp-850h] BYREF
  _BYTE v4[2108]; // [esp+20h] [ebp-840h]

  if ( a2 == nullptr )
    return 0;
  v3[0] = 18;
  v3[1] = 192;
  v3[2] = 0;
  if ( !sub_10005400(v3, (DWORD)this, (int)this) )
    return 0;
  qmemcpy(a2, v4, 192);
  return 1;
}

// Address: 0x10006180
bool __thiscall sub_10006180(void *this, const void *a2)
{
  _DWORD v3[4]; // [esp+8h] [ebp-850h] BYREF
  _BYTE v4[192]; // [esp+18h] [ebp-840h] BYREF

  if ( a2 == nullptr )
    return false;
  qmemcpy(v4, a2, sizeof(v4));
  v3[0] = 19;
  v3[1] = 192;
  v3[2] = 0;
  return sub_10005400(v3, 0, (int)this);
}

// Address: 0x10006210
bool __thiscall sub_10006210(void *this, int a2, int a3)
{
  _DWORD v4[531]; // [esp+8h] [ebp-850h] BYREF

  v4[4] = a2;
  v4[5] = a3;
  v4[0] = 20;
  v4[1] = 8;
  v4[2] = 0;
  return sub_10005400(v4, (DWORD)this, (int)this);
}

// Address: 0x10006280
int __userpurge sub_10006280@<eax>(unsigned int a1@<edx>, int a2@<esi>, _DWORD *a3)
{
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 7;
  *(_WORD *)(a2 + 4) = 0;
  sub_100032E0(a3, a2, 0, a1);
  return a2;
}

// Address: 0x100062B0
_DWORD *__stdcall sub_100062B0(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  a1[5] = sub_10006340();
  a1[6] = 0;
  return a1;
}

// Address: 0x10006340
_DWORD *sub_10006340()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result != nullptr )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}

// Address: 0x10006360
void __usercall sub_10006360(int a1@<esi>)
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

// Address: 0x100063B0
_DWORD *__userpurge sub_100063B0@<eax>(_DWORD *a1@<esi>, int a2, int a3)
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result != nullptr )
    *result = a2;
  if ( result != (_DWORD *)-4 )
    result[1] = a3;
  if ( result != (_DWORD *)-8 )
  {
    result[2] = *a1;
    result[3] = a1[1];
  }
  return result;
}

// Address: 0x100063F0
int __thiscall sub_100063F0(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  _BYTE v3[20]; // [esp+4h] [ebp-50h] BYREF
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v1 = *(this + 6);
  if ( v1 == 0x1FFFFFFF )
  {
    v5 = 15;
    v4 = 0;
    v3[4] = 0;
    sub_10001A30((int)v3, 0, "list<T> too long", (char *)0x10);
    pExceptionObject[12] = 0;
    sub_10001050(pExceptionObject, (int)v3);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = v1 + 1;
  *(this + 6) = result;
  return result;
}

// Address: 0x10006490
int __usercall sub_10006490@<eax>(int a1@<edi>, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  int v5; // [esp+10h] [ebp-28h] BYREF
  void *v6; // [esp+14h] [ebp-24h]
  int v7; // [esp+24h] [ebp-14h]
  unsigned int v8; // [esp+28h] [ebp-10h]
  int v9; // [esp+34h] [ebp-4h]

  LOWORD(v6) = 0;
  v8 = 7;
  v7 = 0;
  sub_100032E0(a2, (int)&v5, 0, 0xFFFFFFFF);
  v9 = 0;
  v3 = sub_10003C20(0xFFFFFFFF, &v5, a3, 0);
  *(_DWORD *)(a1 + 24) = 7;
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 4) = 0;
  sub_100032E0(v3, a1, 0, 0xFFFFFFFF);
  if ( v8 >= 8 )
    operator delete(v6);
  return a1;
}

// Address: 0x10006540
_DWORD *__usercall sub_10006540@<eax>(REGSAM samDesired@<ecx>, LPCWSTR lpSubKey@<edx>, _DWORD *a3@<esi>, HKEY hKey)
{
  _DWORD *v5; // eax
  HKEY v6; // ecx
  HKEY phkResult; // [esp+0h] [ebp-4h] BYREF

  phkResult = nullptr;
  if ( RegOpenKeyExW(hKey, lpSubKey, 0, samDesired, &phkResult) != 0 )
  {
    a3[1] = 0;
    *a3 = 0;
    return a3;
  }
  else
  {
    v5 = operator new(8u);
    if ( v5 != nullptr )
    {
      v6 = phkResult;
      *v5 = &registry::`vftable';
      v5[1] = v6;
    }
    else
    {
      v5 = nullptr;
    }
    *a3 = 0;
    a3[1] = 0;
    sub_1000BDF0(a3, v5);
    return a3;
  }
}

// Address: 0x100065B0
_DWORD *__usercall sub_100065B0@<eax>(_DWORD *a1@<esi>)
{
  _DWORD *v2; // eax
  HKEY v3; // ecx
  HKEY phkResult; // [esp+0h] [ebp-4h] BYREF

  phkResult = nullptr;
  if ( RegCreateKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Innosoft\\HDD Sheriff Engine",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         nullptr) != 0 )
  {
    a1[1] = 0;
    *a1 = 0;
    return a1;
  }
  else
  {
    v2 = operator new(8u);
    if ( v2 != nullptr )
    {
      v3 = phkResult;
      *v2 = &registry::`vftable';
      v2[1] = v3;
    }
    else
    {
      v2 = nullptr;
    }
    *a1 = 0;
    a1[1] = 0;
    sub_1000BDF0(a1, v2);
    return a1;
  }
}

// Address: 0x10006630
HKEY *__thiscall sub_10006630(HKEY *this, char a2)
{
  HKEY v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1);
  *this = (HKEY)&registry::`vftable';
  RegCloseKey(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10006660
int __thiscall sub_10006660(void *this, int a2, int a3)
{
  *(_DWORD *)a2 = &sheriff_engine::Installer::`vftable';
  *(_DWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 12) = this;
  sub_1000AEC0(a2 + 488);
  *(_DWORD *)(a2 + 548) = 7;
  *(_DWORD *)(a2 + 544) = 0;
  *(_WORD *)(a2 + 528) = 0;
  *(_DWORD *)(a2 + 576) = 7;
  *(_DWORD *)(a2 + 572) = 0;
  *(_WORD *)(a2 + 556) = 0;
  *(_DWORD *)(a2 + 604) = 7;
  *(_DWORD *)(a2 + 600) = 0;
  *(_WORD *)(a2 + 584) = 0;
  *(_DWORD *)(a2 + 632) = 7;
  *(_DWORD *)(a2 + 628) = 0;
  *(_WORD *)(a2 + 612) = 0;
  sub_1000AEC0(a2 + 636);
  *(_BYTE *)(a2 + 512) = 0;
  *(_DWORD *)(a2 + 660) = 0;
  *(_DWORD *)(a2 + 664) = 0;
  *(_DWORD *)(a2 + 668) = 0;
  *(_DWORD *)(a2 + 672) = 0;
  *(_DWORD *)(a2 + 676) = 0;
  *(_WORD *)(a2 + 680) = 0;
  return a2;
}

// Address: 0x10006760
void *__thiscall sub_10006760(void *this, char a2)
{
  sub_10006780();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10006780
void __thiscall sub_10006780(void **this)
{
  void *v2; // eax
  void *v3; // [esp-4h] [ebp-Ch]

  *this = &sheriff_engine::Installer::`vftable';
  if ( *(this + 162) != nullptr )
    operator delete(*(this + 162));
  v2 = *(this + 159);
  *(this + 162) = nullptr;
  *(this + 163) = nullptr;
  *(this + 164) = nullptr;
  operator delete(v2);
  if ( (unsigned int)*(this + 158) >= 8 )
    operator delete(*(this + 153));
  *(this + 158) = (void *)7;
  *(this + 157) = nullptr;
  *((_WORD *)this + 306) = 0;
  if ( (unsigned int)*(this + 151) >= 8 )
    operator delete(*(this + 146));
  *(this + 151) = (void *)7;
  *(this + 150) = nullptr;
  *((_WORD *)this + 292) = 0;
  if ( (unsigned int)*(this + 144) >= 8 )
    operator delete(*(this + 139));
  *(this + 144) = (void *)7;
  *(this + 143) = nullptr;
  *((_WORD *)this + 278) = 0;
  if ( (unsigned int)*(this + 137) >= 8 )
    operator delete(*(this + 132));
  *(this + 137) = (void *)7;
  *(this + 136) = nullptr;
  *((_WORD *)this + 264) = 0;
  if ( *(this + 125) != nullptr )
    operator delete(*(this + 125));
  v3 = *(this + 122);
  *(this + 125) = nullptr;
  *(this + 126) = nullptr;
  *(this + 127) = nullptr;
  operator delete(v3);
}

// Address: 0x100068C0
int __thiscall sub_100068C0(_DWORD *this)
{
  return *(this + 1);
}

// Address: 0x100068D0
char __thiscall sub_100068D0(int this)
{
  int v1; // esi
  unsigned int v2; // ebx
  _DWORD *v3; // edi
  unsigned int v4; // ecx
  char v5; // bl
  int v6; // esi
  bool v7; // al
  _DWORD *v8; // eax
  void ***v9; // eax
  char *v10; // ecx
  unsigned int v11; // edi
  int v12; // esi
  int v13; // eax
  unsigned int v14; // edx
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v20; // [esp+18h] [ebp-490h]
  unsigned int v21; // [esp+18h] [ebp-490h]
  char v22; // [esp+1Fh] [ebp-489h]
  int v23; // [esp+20h] [ebp-488h]
  unsigned int v24; // [esp+20h] [ebp-488h]
  int v26; // [esp+28h] [ebp-480h]
  int v27; // [esp+30h] [ebp-478h] BYREF
  void *v28[3]; // [esp+34h] [ebp-474h] BYREF
  void *v29; // [esp+40h] [ebp-468h]
  int v30; // [esp+44h] [ebp-464h]
  int v31; // [esp+48h] [ebp-460h]
  int v32; // [esp+4Ch] [ebp-45Ch] BYREF
  int v33; // [esp+50h] [ebp-458h] BYREF
  void *v34; // [esp+54h] [ebp-454h]
  int v35; // [esp+58h] [ebp-450h]
  int v36; // [esp+60h] [ebp-448h]
  int v37; // [esp+64h] [ebp-444h]
  unsigned int v38; // [esp+68h] [ebp-440h]
  int v39; // [esp+6Ch] [ebp-43Ch]
  _BYTE v40[8]; // [esp+70h] [ebp-438h] BYREF
  _BYTE v41[8]; // [esp+78h] [ebp-430h] BYREF
  WCHAR Buffer[260]; // [esp+80h] [ebp-428h] BYREF
  WCHAR FileSystemNameBuffer[262]; // [esp+288h] [ebp-220h] BYREF
  int v44; // [esp+4A4h] [ebp-4h]

  v1 = this;
  *(_DWORD *)(this + 16) = (***(int (__thiscall ****)(_DWORD))(this + 12))(*(_DWORD *)(this + 12));
  memset((void *)(v1 + 24), 0, 0x1D0u);
  *(_DWORD *)(v1 + 24) = (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(v1 + 12) + 12))(
                           *(_DWORD *)(v1 + 12),
                           "sheriff");
  *(_DWORD *)(v1 + 40) = 1;
  GetWindowsDirectoryW(Buffer, 0x104u);
  v2 = *(_DWORD *)(v1 + 504);
  v3 = (_DWORD *)(v1 + 488);
  v22 = Buffer[0];
  v23 = v1 + 488;
  if ( *(_DWORD *)(v1 + 500) > v2 )
    _invalid_parameter_noinfo();
  v4 = *(_DWORD *)(v1 + 500);
  v26 = *v3;
  v20 = v4;
  if ( v4 > *(_DWORD *)(v1 + 504) )
  {
    _invalid_parameter_noinfo();
    v4 = v20;
  }
  sub_1000B120(*v3, v4, v26, v2);
  v5 = 67;
  LOBYTE(v20) = 67;
  while ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, int *, _BYTE *, _BYTE *, int *))(**(_DWORD **)(v1 + 12) + 16))(
            *(_DWORD *)(v1 + 12),
            v20,
            &v27,
            v40,
            v41,
            &v32) == 0 )
  {
    sub_10001B70((wchar_t *)L"GetFixedDriveInfo fail : %c", v5);
LABEL_18:
    LOBYTE(v20) = ++v5;
    if ( v5 > 90 )
      goto LABEL_19;
  }
  v6 = 16 * ((*(_DWORD *)(v23 + 16) - *(_DWORD *)(v23 + 12)) >> 3) + v1 + 72;
  *(_DWORD *)v6 = (*(_DWORD *)(v23 + 16) - *(_DWORD *)(v23 + 12)) >> 3;
  *(_BYTE *)(v6 + 4) = v5;
  swprintf_s(Buffer, 0x104u, L"%c:\\", v5);
  GetVolumeInformationW(Buffer, nullptr, 0, nullptr, nullptr, nullptr, FileSystemNameBuffer, 0x104u);
  v7 = _wcsicmp(FileSystemNameBuffer, L"NTFS") == 0;
  if ( v22 == v5 )
  {
    *(_DWORD *)(v6 + 12) = 129;
    if ( v7 )
      *(_DWORD *)(v6 + 12) = 137;
  }
  else
  {
    *(_DWORD *)(v6 + 12) = 128;
  }
  if ( v22 == v5 )
  {
    swprintf_s(Buffer, 0x104u, L"\\\\.\\%c:", v5);
    sub_10003390(Buffer, (_DWORD *)(this + 552), wcslen(Buffer));
    v8 = (_DWORD *)sub_100039D0(&SubBlock, (int)&v33, (_DWORD *)(this + 552));
    v44 = 0;
    sub_100032E0(v8, this + 580, 0, 0xFFFFFFFF);
    v44 = -1;
    if ( v38 >= 8 )
      operator delete(v34);
    swprintf_s(Buffer, 0x104u, L"\\\\.\\PhysicalDrive%d", v27);
    sub_10003390(Buffer, (_DWORD *)(this + 524), wcslen(Buffer));
    swprintf_s(Buffer, 0x104u, L"%c:\\%ws\\", v5, L"DRVBKUP");
    sub_10003390(Buffer, (_DWORD *)(this + 608), wcslen(Buffer));
    *(_BYTE *)(this + 512) = 1;
  }
  sub_1000AE50();
  if ( (unsigned int)((*(_DWORD *)(v23 + 16) - *(_DWORD *)(v23 + 12)) >> 3) < 0x1A )
  {
    v5 = v20;
    v1 = this;
    goto LABEL_18;
  }
LABEL_19:
  v9 = (void ***)operator new(4u);
  if ( v9 != nullptr )
    *v9 = v28;
  else
    v9 = nullptr;
  v28[0] = v9;
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  v44 = 2;
  if ( sub_10002860((int **)v28) != 0 )
  {
    v10 = (char *)v29;
    v11 = 0;
    v21 = 0;
    if ( (v30 - (int)v29) / 1056 != 0 )
    {
      v12 = 0;
      do
      {
        v13 = *(_DWORD *)&v10[v12 + 1036];
        if ( (v13 & 0x40) == 0 )
        {
          v34 = *(void **)&v10[v12 + 1028];
          v35 = *(_DWORD *)&v10[v12 + 1032];
          v36 = *(_DWORD *)&v10[v12 + 1040];
          v37 = *(_DWORD *)&v10[v12 + 1044];
          v14 = *(_DWORD *)&v10[v12 + 1048];
          v15 = *(_DWORD *)&v10[v12 + 1052];
          v33 = 0;
          v38 = v14;
          v39 = v15;
          if ( (v13 & 1) != 0 && (v13 & 0x10) != 0 )
            v33 = -2147483647;
          v16 = *(_DWORD *)(this + 648);
          if ( v16 != 0 )
            v17 = (int)(*(_DWORD *)(this + 656) - v16) >> 5;
          else
            v17 = 0;
          v18 = *(_DWORD *)(this + 652);
          v24 = v18;
          if ( (int)(v18 - v16) >> 5 >= v17 )
          {
            if ( v16 > v18 )
            {
              _invalid_parameter_noinfo();
              v18 = v24;
            }
            sub_1000B1B0(v40, &v33, *(_DWORD *)(this + 636), v18);
          }
          else
          {
            LOBYTE(v27) = 0;
            sub_1000C050(v32, v27);
            *(_DWORD *)(this + 652) = v24 + 32;
          }
          if ( (unsigned int)((*(_DWORD *)(this + 652) - *(_DWORD *)(this + 648)) >> 5) >= 8 )
            goto LABEL_41;
          v10 = (char *)v29;
          v11 = v21;
        }
        ++v11;
        v12 += 1056;
        v21 = v11;
      }
      while ( v11 < (v30 - (int)v10) / 1056 );
    }
  }
  else
  {
LABEL_41:
    v10 = (char *)v29;
  }
  if ( v10 != nullptr )
    operator delete(v10);
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  operator delete(v28[0]);
  return 1;
}

// Address: 0x10006E20
char __thiscall sub_10006E20(int this, void *a2)
{
  qmemcpy(a2, (const void *)(this + 24), 0x1D0u);
  return 1;
}

// Address: 0x10006E40
char __thiscall sub_10006E40(int this, const void *a2)
{
  qmemcpy((void *)(this + 24), a2, 0x1D0u);
  return 1;
}

// Address: 0x10006E60
char __usercall sub_10006E60@<al>(CHAR *a1@<esi>)
{
  int v2; // ecx
  CHAR *v3; // edx
  CHAR v4; // al
  CHAR String2[260]; // [esp+0h] [ebp-108h] BYREF

  if ( lstrlenA(a1) != 19 )
    return 0;
  memset(String2, 0, sizeof(String2));
  v2 = 0;
  v3 = String2;
  do
  {
    v4 = a1[v2];
    if ( v4 != 45 )
      *v3++ = v4;
    ++v2;
  }
  while ( v2 < 19 );
  lstrcpyA(a1, String2);
  return 1;
}

// Address: 0x10006EF0
char __thiscall sub_10006EF0(_DWORD *this, char a2)
{
  volatile signed __int32 *v3; // esi
  bool v5; // cf
  char v6; // bl
  int v7; // [esp+14h] [ebp-38h] BYREF
  volatile signed __int32 *v8; // [esp+18h] [ebp-34h]
  void *v9; // [esp+20h] [ebp-2Ch]
  int v10; // [esp+30h] [ebp-1Ch]
  unsigned int v11; // [esp+34h] [ebp-18h]
  int v12; // [esp+48h] [ebp-4h]

  v11 = 7;
  v10 = 0;
  LOWORD(v9) = 0;
  v12 = 0;
  if ( a2 != 0 )
  {
    sub_10006540(0x20019u, L"SYSTEM\\CurrentControlSet\\services\\HidPath", &v7, HKEY_LOCAL_MACHINE);
    LOBYTE(v12) = 0;
    v3 = v8;
    if ( v7 != 0 )
    {
      if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
      }
      if ( v11 >= 8 )
        operator delete(v9);
      return 1;
    }
    if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
LABEL_25:
        (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
    }
  }
  else
  {
    sub_10006540(0x20019u, L"SYSTEM\\CurrentControlSet\\services\\scsidisk", &v7, HKEY_LOCAL_MACHINE);
    LOBYTE(v12) = 0;
    v3 = v8;
    if ( v7 != 0 )
    {
      if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
      }
      if ( v11 >= 8 )
        operator delete(v9);
      return 0;
    }
    if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
        goto LABEL_25;
    }
  }
  if ( (unsigned __int8)sub_1000E050() == 0 )
  {
    v5 = v11 < 8;
    *(this + 1) = 268435466;
    if ( !v5 )
    {
      operator delete(v9);
      return 0;
    }
    return 0;
  }
  v6 = sub_10008D90(a2, L"hidpath.inf");
  if ( v11 >= 8 )
    operator delete(v9);
  return v6;
}

// Address: 0x10007120
char __thiscall sub_10007120(int this, int a2, int a3, int a4, unsigned int a5, int a6)
{
  int v7; // eax
  int v8; // ecx
  unsigned __int8 (__thiscall *v9)(int, int *); // edx
  bool v11; // cf
  wchar_t *v12; // eax
  int v13; // eax
  const WCHAR *v14; // eax
  int v15; // [esp-1Ch] [ebp-AD0h] BYREF
  void *v16; // [esp-18h] [ebp-ACCh]
  int v17; // [esp-14h] [ebp-AC8h]
  int v18; // [esp-10h] [ebp-AC4h]
  int v19; // [esp-Ch] [ebp-AC0h]
  wchar_t *v20; // [esp-8h] [ebp-ABCh]
  int v21; // [esp-4h] [ebp-AB8h]
  int v22; // [esp+0h] [ebp-AB4h]
  int v23; // [esp+4h] [ebp-AB0h]
  int v24; // [esp+14h] [ebp-AA0h]
  int v25; // [esp+18h] [ebp-A9Ch] BYREF
  _BYTE v26[28]; // [esp+1Ch] [ebp-A98h] BYREF
  int *v27; // [esp+38h] [ebp-A7Ch]
  int ArgList[527]; // [esp+3Ch] [ebp-A78h] BYREF
  int v29; // [esp+878h] [ebp-23Ch] BYREF
  LPCWSTR lpFileName[5]; // [esp+87Ch] [ebp-238h] BYREF
  unsigned int v31; // [esp+890h] [ebp-224h]
  WCHAR PathName[262]; // [esp+894h] [ebp-220h] BYREF
  int v33; // [esp+AB0h] [ebp-4h]

  v7 = *(_DWORD *)(this + 12);
  v8 = *(_DWORD *)(this + 8);
  v9 = *(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)v8 + 4);
  v24 = v7;
  if ( v9(v8, ArgList) != 0 && (ArgList[0] & 4) != 0 )
  {
    v21 = ArgList[0];
    v20 = (wchar_t *)L"HDD Sheriff is already installed : 0x%08x";
    *(_DWORD *)(this + 4) = 268435469;
    sub_10001B70(v20, v21);
    return 0;
  }
  else if ( *(_BYTE *)(this + 512) != 0 )
  {
    if ( a5 <= 0x3C )
    {
      if ( a3 != 0 && this != -676 && sub_10006E60((CHAR *)a3) != 0 )
      {
        *(_DWORD *)(this + 660) = *(_DWORD *)a3;
        *(_DWORD *)(this + 664) = *(_DWORD *)(a3 + 4);
        *(_DWORD *)(this + 668) = *(_DWORD *)(a3 + 8);
        *(_DWORD *)(this + 672) = *(_DWORD *)(a3 + 12);
        *(_DWORD *)(this + 676) = *(_DWORD *)a4;
        *(_WORD *)(this + 680) = *(_WORD *)(a4 + 4);
      }
      *(_DWORD *)(this + 516) = a2;
      *(_DWORD *)(this + 520) = a5;
      v31 = 7;
      lpFileName[4] = nullptr;
      LOWORD(lpFileName[0]) = 0;
      v33 = 0;
      if ( (unsigned __int8)sub_1000E050() != 0 )
      {
        v25 = (int)&Transaction::`vftable';
        sub_1000F310(v26);
        LOBYTE(v33) = 1;
        PathName[0] = 0;
        if ( *(_DWORD *)(this + 632) < 8u )
          v12 = (wchar_t *)(this + 612);
        else
          v12 = *(wchar_t **)(this + 612);
        sub_1000E390(PathName, v12);
        if ( *(_DWORD *)(this + 632) < 8u )
          v13 = this + 612;
        else
          v13 = *(_DWORD *)(this + 612);
        sub_1000F130(0, v13);
        if ( (sub_1000E990() & 4) == 0
          && (*(_DWORD *)(this + 40) & 0x40000) != 0
          && (unsigned __int8)sub_10008D90(1, L"cdromnw.inf") == 0 )
        {
          *(_DWORD *)(this + 4) = 268435467;
        }
        if ( (sub_1000E990() & 4) == 0 && (unsigned __int8)sub_10008D90(1, L"hidpath.inf") == 0 )
          *(_DWORD *)(this + 4) = 268435458;
        if ( sub_1000E680(v22, v23) == 0 && (unsigned __int8)sub_10008D90(1, L"scsidisk.inf") == 0 )
          *(_DWORD *)(this + 4) = 268435457;
        sub_1000A9C0(this);
        v27 = &v15;
        v21 = 7;
        v20 = nullptr;
        LOWORD(v16) = 0;
        sub_100032E0(&v29, (int)&v15, 0, 0xFFFFFFFF);
        sub_100087A0((int)&v25, v15, v16, v17, v18, v19, (int)v20, v21);
        sub_10008D00(L"SeManageVolumePrivilege");
        sub_10007CE0(&v25, a6);
        sub_10007F90(v22, v23);
        sub_10007840(this);
        v14 = lpFileName[0];
        if ( v31 < 8 )
          v14 = (const WCHAR *)lpFileName;
        sub_1000E480(v14, 1);
        sub_10001B70((wchar_t *)L"Transaction::Commit", v22);
        sub_1000F3B0();
        LOBYTE(v33) = 0;
        sub_1000EBF0(v22, v23);
        if ( v31 >= 8 )
          operator delete((void *)lpFileName[0]);
        return 1;
      }
      else
      {
        v11 = v31 < 8;
        *(_DWORD *)(this + 4) = 268435466;
        if ( !v11 )
          operator delete((void *)lpFileName[0]);
        return 0;
      }
    }
    else
    {
      *(_DWORD *)(this + 4) = -2147483646;
      return 0;
    }
  }
  else
  {
    *(_DWORD *)(this + 4) = 268435465;
    return 0;
  }
}

// Address: 0x100074B0
char __thiscall sub_100074B0(char *this, int a2, char a3)
{
  unsigned __int16 *v4; // eax
  int v5; // eax
  bool v6; // cf
  void **v8; // eax
  int v9; // eax
  void (__thiscall *v10)(char *, char *); // eax
  void **v11; // eax
  const WCHAR *p_lpFileName; // eax
  LPCWSTR v13[527]; // [esp+18h] [ebp-888h] BYREF
  LPCWSTR lpFileName; // [esp+858h] [ebp-48h] BYREF
  int v15; // [esp+868h] [ebp-38h]
  unsigned int v16; // [esp+86Ch] [ebp-34h]
  int v17; // [esp+870h] [ebp-30h] BYREF
  void *v18[5]; // [esp+874h] [ebp-2Ch] BYREF
  unsigned int v19; // [esp+888h] [ebp-18h]
  int v20; // [esp+89Ch] [ebp-4h]

  v4 = (unsigned __int16 *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 3) + 20))(*((_DWORD *)this + 3));
  LOWORD(v18[0]) = 0;
  v19 = 7;
  v18[4] = nullptr;
  sub_10003390(v4, &v17, wcslen(v4));
  v20 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, LPCWSTR *))(**((_DWORD **)this + 2) + 4))(*((_DWORD *)this + 2), v13) != 0
    && ((int)v13[0] & 4) != 0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 2) + 40))(
           *((_DWORD *)this + 2),
           a2,
           5) == 0 )
    {
      v5 = (***((int (__thiscall ****)(_DWORD))this + 2))(*((_DWORD *)this + 2));
      v6 = v19 < 8;
      *((_DWORD *)this + 1) = v5;
      if ( !v6 )
        operator delete(v18[0]);
      return 0;
    }
    v8 = (void **)v18[0];
    if ( v19 < 8 )
      v8 = v18;
    sub_1000A180(v8);
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 2) + 8))(*((_DWORD *)this + 2), this + 24);
    v9 = *((_DWORD *)this + 10);
    if ( (v9 & 1) != 0 )
    {
      *((_DWORD *)this + 8) |= 1u;
      *((_DWORD *)this + 9) |= 1u;
      *((_DWORD *)this + 10) = v9 ^ 1;
    }
    v10 = *(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 24);
    *((LPCWSTR *)this + 7) = v13[4];
    *((_DWORD *)this + 6) = a2;
    v10(this, this + 24);
    if ( ((int)v13[0] & 0x10) == 0 )
    {
      sub_10002C10((int)&v17);
      return 1;
    }
    sub_10009D50();
  }
  v16 = 7;
  v15 = 0;
  LOWORD(lpFileName) = 0;
  LOBYTE(v20) = 1;
  if ( (unsigned __int8)sub_1000E050() != 0 )
  {
    sub_10008D90(0, L"scsidisk.inf");
    if ( a3 != 0 )
      sub_10008D90(0, L"hidpath.inf");
    sub_10008D90(0, L"cdromnw.inf");
    v11 = (void **)v18[0];
    if ( v19 < 8 )
      v11 = v18;
    sub_100093A0(v11);
    p_lpFileName = lpFileName;
    if ( v16 < 8 )
      p_lpFileName = (const WCHAR *)&lpFileName;
    sub_1000E480(p_lpFileName, 1);
    sub_1000A620(this);
    if ( v16 >= 8 )
      operator delete((void *)lpFileName);
    v16 = 7;
    v15 = 0;
    LOWORD(lpFileName) = 0;
    if ( v19 >= 8 )
      operator delete(v18[0]);
    return 1;
  }
  *((_DWORD *)this + 1) = 268435466;
  if ( v16 >= 8 )
    operator delete((void *)lpFileName);
  v16 = 7;
  v15 = 0;
  LOWORD(lpFileName) = 0;
  if ( v19 < 8 )
    return 0;
  operator delete(v18[0]);
  return 0;
}

// Address: 0x10007840
void __stdcall sub_10007840(int a1)
{
  LPCWSTR *v1; // eax
  const WCHAR *v2; // eax
  const WCHAR *v3; // eax
  const WCHAR *v4; // eax
  HANDLE FileW; // esi
  const void *p_lpBuffer; // eax
  DWORD NumberOfBytesWritten; // [esp+14h] [ebp-4Ch] BYREF
  LPCVOID lpBuffer; // [esp+1Ch] [ebp-44h] BYREF
  int v9; // [esp+2Ch] [ebp-34h]
  unsigned int v10; // [esp+30h] [ebp-30h]
  _BYTE v11[4]; // [esp+34h] [ebp-2Ch] BYREF
  LPCWSTR lpFileName[5]; // [esp+38h] [ebp-28h] BYREF
  unsigned int v13; // [esp+4Ch] [ebp-14h]
  int v14; // [esp+5Ch] [ebp-4h]

  sub_100039D0(L"Uninst.lst", (int)v11, (_DWORD *)(a1 + 608));
  v14 = 0;
  v1 = (LPCWSTR *)lpFileName[0];
  if ( v13 < 8 )
    v1 = lpFileName;
  sub_1000F130(1, (int)v1);
  v2 = lpFileName[0];
  if ( v13 < 8 )
    v2 = (const WCHAR *)lpFileName;
  SetFileAttributesW(v2, 0x80u);
  v3 = lpFileName[0];
  if ( v13 < 8 )
    v3 = (const WCHAR *)lpFileName;
  DeleteFileW(v3);
  sub_1000EF40();
  if ( v9 == 0 )
    goto LABEL_8;
  v4 = lpFileName[0];
  if ( v13 < 8 )
    v4 = (const WCHAR *)lpFileName;
  FileW = CreateFileW(v4, 0x40000000u, 0, nullptr, 2u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
  {
LABEL_8:
    if ( v10 >= 8 )
      operator delete((void *)lpBuffer);
    v10 = 7;
    v9 = 0;
    LOWORD(lpBuffer) = 0;
    if ( v13 >= 8 )
      operator delete((void *)lpFileName[0]);
  }
  else
  {
    p_lpBuffer = lpBuffer;
    if ( v10 < 8 )
      p_lpBuffer = &lpBuffer;
    WriteFile(FileW, p_lpBuffer, 2 * v9, &NumberOfBytesWritten, nullptr);
    CloseHandle(FileW);
    if ( v10 >= 8 )
      operator delete((void *)lpBuffer);
    v10 = 7;
    v9 = 0;
    LOWORD(lpBuffer) = 0;
    if ( v13 >= 8 )
      operator delete((void *)lpFileName[0]);
  }
}

// Address: 0x100079E0
bool __fastcall sub_100079E0(const WCHAR *a1, int a2, int a3, int a4, char a5)
{
  size_t v6; // esi
  _DWORD *v7; // ebp
  char *v8; // edi
  unsigned int v9; // ecx
  double v10; // st7
  unsigned int v11; // eax
  const WCHAR *v12; // edi
  HANDLE FileW; // eax
  void *v14; // esi
  DWORD v16; // edi
  BOOL v17; // edi
  void **v18; // [esp+20h] [ebp-258h] BYREF
  void *v19; // [esp+24h] [ebp-254h]
  LPCVOID lpBuffer; // [esp+30h] [ebp-248h]
  _BYTE *v21; // [esp+34h] [ebp-244h]
  int v22; // [esp+38h] [ebp-240h]
  int InBuffer; // [esp+3Ch] [ebp-23Ch] BYREF
  LPCWSTR lpFileName; // [esp+40h] [ebp-238h]
  ULARGE_INTEGER TotalNumberOfFreeBytes; // [esp+44h] [ebp-234h] BYREF
  ULARGE_INTEGER TotalNumberOfBytes; // [esp+4Ch] [ebp-22Ch] BYREF
  DWORD BytesReturned[2]; // [esp+54h] [ebp-224h] BYREF
  WCHAR DirectoryName[260]; // [esp+5Ch] [ebp-21Ch] BYREF
  int v29; // [esp+274h] [ebp-4h]

  lpFileName = a1;
  sub_10001180(&v18, 0x8000);
  v29 = 0;
  v6 = v21 - (_BYTE *)lpBuffer;
  if ( v21 == lpBuffer )
    _invalid_parameter_noinfo();
  memset((void *)lpBuffer, 0, v6);
  if ( v21 == lpBuffer )
    _invalid_parameter_noinfo();
  v7 = (char *)lpBuffer + 512;
  v8 = (char *)lpBuffer + 512;
  qmemcpy((char *)lpBuffer + 512, "Sheriff BAT Header Ver 3.00", 0x18u);
  qmemcpy(v8 + 24, ".00", 3);
  v7[8] = 52;
  v7[9] = *(_DWORD *)(a3 + 16);
  v7[10] = *(_DWORD *)(a4 + 12);
  if ( (unsigned int)a2 <= 0xA )
  {
    if ( a2 < 2 )
      a2 = 2;
  }
  else
  {
    a2 = 10;
  }
  if ( a5 != 0 )
  {
    v7[11] = a2 << 21;
    sub_10001B70((wchar_t *)L"CreateBackupFile BackupFileSize : %08X", a2 << 21);
  }
  else
  {
    swprintf_s(DirectoryName, 0x104u, L"\\\\.\\%c:\\", *(char *)(a4 + 4));
    if ( GetDiskFreeSpaceExW(DirectoryName, nullptr, &TotalNumberOfBytes, &TotalNumberOfFreeBytes) )
    {
      v9 = TotalNumberOfFreeBytes.QuadPart >> 9;
      v10 = (double)(TotalNumberOfBytes.QuadPart >> 9);
      v7[11] = v9;
      v11 = (__int64)((v10 - (double)0LL) * 0.1);
      if ( v9 > v11 )
        v7[11] = v11;
    }
    if ( v7[11] < 0x800000u )
      v7[11] = 0x800000;
  }
  v12 = lpFileName;
  SetFileAttributesW(lpFileName, 0x80u);
  DeleteFileW(v12);
  FileW = CreateFileW(v12, 0x40000000u, 2u, nullptr, 2u, 0x80000020, nullptr);
  v14 = FileW;
  if ( FileW == (HANDLE)-1 )
  {
    sub_10001B70((wchar_t *)L"CreateBackupFile fail : %s", (int)v12);
    v18 = &data_buffer::`vftable';
    if ( lpBuffer != nullptr )
      operator delete((void *)lpBuffer);
    lpBuffer = nullptr;
    v21 = nullptr;
    v22 = 0;
    operator delete(v19);
    return false;
  }
  else
  {
    InBuffer = 0;
    DeviceIoControl(FileW, 0x9C040u, &InBuffer, 2u, nullptr, 0, BytesReturned, nullptr);
    v16 = v21 - (_BYTE *)lpBuffer;
    if ( v21 == lpBuffer )
      _invalid_parameter_noinfo();
    v17 = WriteFile(v14, lpBuffer, v16, &BytesReturned[1], nullptr);
    CloseHandle(v14);
    v18 = &data_buffer::`vftable';
    if ( lpBuffer != nullptr )
      operator delete((void *)lpBuffer);
    lpBuffer = nullptr;
    v21 = nullptr;
    v22 = 0;
    operator delete(v19);
    return v17;
  }
}

// Address: 0x10007CE0
char __userpurge sub_10007CE0@<al>(int a1@<esi>, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edi
  WCHAR PathName[262]; // [esp+10h] [ebp-214h] BYREF

  v3 = (*(_DWORD *)(a1 + 504) - *(_DWORD *)(a1 + 500)) >> 3;
  v4 = 0;
  if ( v3 != 0 )
  {
    do
    {
      if ( v4 >= (*(_DWORD *)(a1 + 504) - *(_DWORD *)(a1 + 500)) >> 3 )
        _invalid_parameter_noinfo();
      v5 = *(_DWORD *)(a1 + 500) + 8 * v4;
      swprintf_s(PathName, 0x104u, L"%c:\\%ws\\", *(char *)(v5 + 4), L"DRVBKUP");
      sub_1000F130(0, (int)PathName);
      CreateDirectoryW(PathName, nullptr);
      wcscat_s(PathName, 0x104u, L"DRVBKUP.000");
      sub_1000F130(1, (int)PathName);
      sub_10001B70((wchar_t *)L"CreateBackupFile : %s", (int)PathName);
      LOBYTE(v3) = sub_100079E0(PathName, a3, a1, 16 * *(_DWORD *)v5 + a1 + 72, *(_BYTE *)(v5 + 6));
      ++v4;
    }
    while ( v4 < (*(_DWORD *)(a1 + 504) - *(_DWORD *)(a1 + 500)) >> 3 );
  }
  return v3;
}

// Address: 0x10007E10
_DWORD *__stdcall sub_10007E10(_DWORD *a1, LPCWSTR lpFileName)
{
  HANDLE FileW; // eax
  void *v3; // ebp
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  DWORD v7; // ebx
  DWORD NumberOfBytesRead; // [esp+18h] [ebp-24h] BYREF
  _DWORD v10[2]; // [esp+1Ch] [ebp-20h] BYREF
  LARGE_INTEGER FileSize; // [esp+24h] [ebp-18h] BYREF
  int v12; // [esp+38h] [ebp-4h]

  FileW = CreateFileW(lpFileName, 0x80000000, 1u, nullptr, 3u, 0, nullptr);
  v3 = FileW;
  if ( FileW == (HANDLE)-1 )
  {
    a1[1] = 0;
    *a1 = 0;
  }
  else if ( !GetFileSizeEx(FileW, &FileSize) || FileSize.HighPart != 0 )
  {
    CloseHandle(v3);
    a1[1] = 0;
    *a1 = 0;
  }
  else
  {
    v4 = operator new(0x1Cu);
    v12 = 1;
    if ( v4 != nullptr )
      v5 = sub_10001180(v4, FileSize.LowPart);
    else
      v5 = nullptr;
    LOBYTE(v12) = 0;
    v10[0] = 0;
    v10[1] = 0;
    sub_1000BEC0(v10, v5);
    v12 = 2;
    v6 = v10[0];
    v7 = *(_DWORD *)(v10[0] + 20) - *(_DWORD *)(v10[0] + 16);
    if ( v7 == 0 )
      _invalid_parameter_noinfo();
    if ( ReadFile(v3, *(LPVOID *)(v6 + 16), v7, &NumberOfBytesRead, nullptr) )
    {
      CloseHandle(v3);
      sub_1000ACC0();
    }
    else
    {
      CloseHandle(v3);
      a1[1] = 0;
      *a1 = 0;
    }
    LOBYTE(v12) = 0;
    sub_10004100((int)v10);
  }
  return a1;
}

// Address: 0x10007F90
int __usercall sub_10007F90@<eax>(int a1@<edi>)
{
  const BYTE *v1; // edx
  int result; // eax
  volatile signed __int32 *v3; // esi
  int v4; // [esp+8h] [ebp-14h] BYREF
  volatile signed __int32 *v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+18h] [ebp-4h]

  sub_100065B0(&v4);
  v6 = 0;
  sub_1000F250();
  if ( *(_DWORD *)(a1 + 632) < 8u )
    v1 = (const BYTE *)(a1 + 612);
  else
    v1 = *(const BYTE **)(a1 + 612);
  RegSetValueExW(*(HKEY *)(v4 + 4), L"Install Path", 0, 1u, v1, 2 * wcslen((const unsigned __int16 *)v1));
  result = sub_1000F2B0();
  v6 = -1;
  v3 = v5;
  if ( v5 != nullptr )
  {
    result = (int)(v5 + 2);
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
    }
  }
  return result;
}

// Address: 0x10008070
int __fastcall sub_10008070(
        const void *a1,
        void *a2,
        int a3,
        int a4,
        DWORD nNumberOfBytesToWrite,
        int a6,
        void *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        unsigned int a12)
{
  const WCHAR *v12; // eax
  DWORD LastError; // eax
  const WCHAR *v15; // eax
  DWORD v16; // eax
  const WCHAR *v17; // eax
  const WCHAR *v18; // eax
  const WCHAR *v19; // eax
  HANDLE FileW; // esi
  DWORD v21; // eax
  LPCWSTR *v22; // eax
  _DWORD *v23; // ebp
  DWORD v24; // eax
  LPCWSTR *v25; // eax
  int v26; // eax
  DWORD v27; // ebp
  char *v28; // esi
  _DWORD *v29; // ebx
  signed __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // ecx
  DWORD v33; // eax
  char *v34; // esi
  int v35; // ecx
  unsigned int v36; // ebp
  _DWORD *v37; // ebx
  _DWORD *v38; // esi
  unsigned int v39; // ecx
  unsigned int v40; // edx
  __int64 v41; // rax
  unsigned int v42; // ecx
  _DWORD *v43; // ebx
  char *v44; // esi
  const char *v45; // eax
  unsigned int v46; // ecx
  size_t v47; // edi
  const void **v48; // ebp
  volatile signed __int32 *v49; // esi
  HANDLE v50; // esi
  DWORD v51; // eax
  int v52; // [esp-1Ch] [ebp-930h] BYREF
  int v53; // [esp-18h] [ebp-92Ch]
  int v54; // [esp-14h] [ebp-928h]
  unsigned __int64 v55; // [esp-10h] [ebp-924h]
  __int64 v56; // [esp-8h] [ebp-91Ch]
  int v57; // [esp+0h] [ebp-914h]
  int i; // [esp+18h] [ebp-8FCh]
  volatile signed __int32 *v59; // [esp+1Ch] [ebp-8F8h]
  int v60; // [esp+20h] [ebp-8F4h]
  LPCVOID lpBuffer; // [esp+24h] [ebp-8F0h]
  HANDLE hObject; // [esp+28h] [ebp-8ECh]
  void *Src; // [esp+2Ch] [ebp-8E8h]
  DWORD BytesPerSector; // [esp+30h] [ebp-8E4h] BYREF
  int v65; // [esp+34h] [ebp-8E0h] BYREF
  HANDLE hFile; // [esp+38h] [ebp-8DCh]
  DWORD NumberOfBytesWritten; // [esp+3Ch] [ebp-8D8h] BYREF
  DWORD SectorsPerCluster; // [esp+40h] [ebp-8D4h] BYREF
  DWORD BytesReturned; // [esp+44h] [ebp-8D0h] BYREF
  int v70; // [esp+48h] [ebp-8CCh] BYREF
  _BYTE OutBuffer[8]; // [esp+4Ch] [ebp-8C8h] BYREF
  signed __int64 v72; // [esp+54h] [ebp-8C0h]
  _DWORD v73[4]; // [esp+DCh] [ebp-838h] BYREF
  char v74; // [esp+ECh] [ebp-828h] BYREF
  _BYTE v75[4]; // [esp+8E8h] [ebp-2Ch] BYREF
  LPCWSTR lpFileName[5]; // [esp+8ECh] [ebp-28h] BYREF
  unsigned int v77; // [esp+900h] [ebp-14h]
  int v78; // [esp+910h] [ebp-4h]

  v60 = a4;
  lpBuffer = a1;
  Src = a2;
  v78 = 0;
  sub_10001B70((wchar_t *)L"WriteBootROM", v57);
  if ( *(_DWORD *)(a3 + 604) < 8u )
    v12 = (const WCHAR *)(a3 + 584);
  else
    v12 = *(const WCHAR **)(a3 + 584);
  if ( !GetDiskFreeSpaceW(v12, &SectorsPerCluster, &BytesPerSector, nullptr, nullptr) )
  {
    LastError = GetLastError();
    sub_10001B70((wchar_t *)L"GetDiskFreeSpace : %08X", LastError);
    if ( a12 >= 8 )
      operator delete(a7);
    return 0;
  }
  if ( BytesPerSector != 512 )
  {
    sub_10001B70((wchar_t *)L"Not support sector size : %u", BytesPerSector);
    if ( a12 >= 8 )
    {
LABEL_10:
      operator delete(a7);
      return 0;
    }
    return 0;
  }
  if ( *(_DWORD *)(a3 + 576) < 8u )
    v15 = (const WCHAR *)(a3 + 556);
  else
    v15 = *(const WCHAR **)(a3 + 556);
  hObject = CreateFileW(v15, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  if ( hObject == (HANDLE)-1 )
  {
    v16 = GetLastError();
    sub_10001B70((wchar_t *)L"CreateFile MasterDriveName : %08X", v16);
    if ( a12 >= 8 )
      goto LABEL_10;
    return 0;
  }
  sub_100039D0(L"bootrom.bin", (int)v75, (_DWORD *)(a3 + 608));
  LOBYTE(v78) = 1;
  v17 = lpFileName[0];
  if ( v77 < 8 )
    v17 = (const WCHAR *)lpFileName;
  SetFileAttributesW(v17, 0x80u);
  v18 = lpFileName[0];
  if ( v77 < 8 )
    v18 = (const WCHAR *)lpFileName;
  DeleteFileW(v18);
  v19 = lpFileName[0];
  if ( v77 < 8 )
    v19 = (const WCHAR *)lpFileName;
  FileW = CreateFileW(v19, 0xC0000000, 1u, nullptr, 2u, 0, nullptr);
  hFile = FileW;
  if ( FileW == (HANDLE)-1 )
  {
    v21 = GetLastError();
    sub_10001B70((wchar_t *)L"CreateFile szBootrom : %08X", v21);
    CloseHandle(hObject);
    sub_10002C10((int)v75);
    sub_10002C10((int)&a6);
    return 0;
  }
  else
  {
    v22 = (LPCWSTR *)lpFileName[0];
    if ( v77 < 8 )
      v22 = lpFileName;
    sub_1000F130(2, (int)v22);
    v23 = lpBuffer;
    v60 = 0;
    if ( WriteFile(FileW, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, nullptr) )
    {
      v25 = (LPCWSTR *)lpFileName[0];
      if ( v77 < 8 )
        v25 = lpFileName;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, LPCWSTR *, int *, int *, _DWORD *))(**(_DWORD **)(a3 + 12) + 28))(
             *(_DWORD *)(a3 + 12),
             v25,
             &v70,
             &v65,
             v73) != 0 )
      {
        v26 = v73[0];
        *((_DWORD *)lpBuffer + 5) = v65;
        if ( v26 != 0 )
        {
          v27 = BytesPerSector;
          v28 = &v74;
          v29 = (char *)lpBuffer + 260;
          for ( i = v26; i != 0; --i )
          {
            v30 = *((_QWORD *)v28 - 1);
            v56 = v27;
            v55 = v30;
            v31 = v30 / v27;
            v32 = *((_DWORD *)v28 + 1);
            HIDWORD(v31) = *(_DWORD *)v28;
            *(v29 - 1) = v31;
            v56 = v27;
            v55 = __PAIR64__(v32, HIDWORD(v31));
            *v29 = __SPAIR64__(v32, HIDWORD(v31)) / v27;
            v28 += 16;
            v29 += 2;
          }
          v23 = lpBuffer;
        }
        if ( DeviceIoControl(hObject, 0x70048u, nullptr, 0, OutBuffer, 0x90u, &BytesReturned, nullptr) )
        {
          v34 = (char *)v23 + v23[6] * v23[19];
          strcpy_s(v34, 0x20u, "Sheriff Install 2.00");
          *(_DWORD *)(v34 + 194) = *(_DWORD *)(a3 + 660);
          *(_DWORD *)(v34 + 198) = *(_DWORD *)(a3 + 664);
          *(_DWORD *)(v34 + 202) = *(_DWORD *)(a3 + 668);
          *(_DWORD *)(v34 + 206) = *(_DWORD *)(a3 + 672);
          *((_DWORD *)v34 + 47) = *(_DWORD *)(a3 + 676);
          *((_WORD *)v34 + 96) = *(_WORD *)(a3 + 680);
          *((_DWORD *)v34 + 9) = *(_DWORD *)(a3 + 16) ^ *(_DWORD *)(a3 + 24) ^ 0x83F7A93B;
          v35 = *(_DWORD *)(a3 + 16) ^ *(_DWORD *)(a3 + 24);
          *((_DWORD *)v34 + 10) = 1;
          *(_DWORD *)(v34 + 210) = v35 ^ 0x83F7A93B;
          if ( (*(_BYTE *)(a3 + 40) & 1) != 0 )
            *((_DWORD *)v34 + 10) = 3;
          if ( (*(_DWORD *)(a3 + 40) & 0x1000) != 0 )
            *((_DWORD *)v34 + 10) |= 0x10u;
          if ( (*(_DWORD *)(a3 + 40) & 0x2000) != 0 )
            *((_DWORD *)v34 + 10) |= 0x40u;
          if ( (*(_DWORD *)(a3 + 40) & 0x10000) == 0 )
            *((_DWORD *)v34 + 10) |= 4u;
          *((_DWORD *)v34 + 8) = *(_DWORD *)(a3 + 16);
          *((_DWORD *)v34 + 11) = v65;
          v56 = (unsigned int)v23[6];
          v55 = v72;
          *((_DWORD *)v34 + 12) = v72 / v56;
          *((_DWORD *)v34 + 13) = *(_DWORD *)(a3 + 516);
          *((_DWORD *)v34 + 14) = *(_DWORD *)(a3 + 520);
          v36 = 0;
          if ( (*(_DWORD *)(a3 + 652) - *(_DWORD *)(a3 + 648)) >> 5 != 0 )
          {
            i = 0;
            v37 = v34 + 68;
            do
            {
              if ( v36 >= (*(_DWORD *)(a3 + 652) - *(_DWORD *)(a3 + 648)) >> 5 )
                _invalid_parameter_noinfo();
              v38 = (_DWORD *)(i + *(_DWORD *)(a3 + 648));
              HIDWORD(v56) = 0;
              *(v37 - 2) = *v38;
              *(v37 - 1) = v38[2];
              v39 = v38[5];
              v40 = v38[4];
              LODWORD(v56) = 512;
              v55 = __PAIR64__(v39, v40);
              v41 = __SPAIR64__(v39, v40) / v56;
              HIDWORD(v56) = 0;
              *v37 = v41;
              LODWORD(v41) = v38[7];
              v42 = v38[6];
              LODWORD(v56) = 512;
              v55 = __PAIR64__(v41, v42);
              i += 32;
              v37[1] = __SPAIR64__(v41, v42) / v56;
              ++v36;
              v37 += 4;
            }
            while ( v36 < (*(_DWORD *)(a3 + 652) - *(_DWORD *)(a3 + 648)) >> 5 );
          }
          v43 = lpBuffer;
          v44 = (char *)lpBuffer + *((_DWORD *)lpBuffer + 6) * *((_DWORD *)lpBuffer + 15);
          memcpy_0(v44, Src, *((_DWORD *)lpBuffer + 6));
          v45 = "HDD-SHERIFF V9.0";
          v46 = 16;
          while ( *(_DWORD *)&v45[(_BYTE *)Src + 6 - "HDD-SHERIFF V9.0"] == *(_DWORD *)v45 )
          {
            v46 -= 4;
            v45 += 4;
            if ( v46 < 4 )
            {
              sub_10001B70((wchar_t *)L"Installed Sheriff MBR", v57);
              Src = &v52;
              v56 = 0x700000000LL;
              LOWORD(v53) = 0;
              sub_100032E0(&a6, (int)&v52, 0, 0xFFFFFFFF);
              sub_10009B80(a3, v52, v53, v54, v55, HIDWORD(v55), v56, HIDWORD(v56));
              LOBYTE(v78) = 2;
              if ( i != 0 )
              {
                sub_10001B70((wchar_t *)L"change standard MBR", v57);
                v47 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16);
                v48 = (const void **)(i + 16);
                if ( v47 == 0 )
                  _invalid_parameter_noinfo();
                memcpy_0(v44, *v48, v47);
              }
              LOBYTE(v78) = 1;
              v49 = v59;
              if ( v59 != nullptr && _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 0 )
              {
                (**(void (__thiscall ***)(volatile signed __int32 *))v49)(v49);
                if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 0 )
                  (*(void (__thiscall **)(volatile signed __int32 *))(*v49 + 4))(v49);
              }
              break;
            }
          }
          v50 = hFile;
          SetFilePointer(hFile, 0, nullptr, 0);
          if ( WriteFile(v50, v43, nNumberOfBytesToWrite, &NumberOfBytesWritten, nullptr) )
          {
            v60 = v43[64];
          }
          else
          {
            v51 = GetLastError();
            sub_10001B70((wchar_t *)L"WriteFile pBootrom : %08X", v51);
          }
        }
        else
        {
          v33 = GetLastError();
          sub_10001B70((wchar_t *)L"DeviceIoControl IOCTL_DISK_GET_PARTITION_INFO_EX : %08X", v33);
        }
      }
      else
      {
        sub_10001B70((wchar_t *)L"Cannot get file physical offsets", v57);
      }
    }
    else
    {
      v24 = GetLastError();
      sub_10001B70((wchar_t *)L"WriteFile pBootrom : %08X", v24);
    }
    CloseHandle(hObject);
    CloseHandle(hFile);
    if ( v77 >= 8 )
      operator delete((void *)lpFileName[0]);
    v77 = 7;
    lpFileName[4] = nullptr;
    LOWORD(lpFileName[0]) = 0;
    if ( a12 >= 8 )
      operator delete(a7);
    return v60;
  }
}

// Address: 0x100087A0
char __thiscall sub_100087A0(
        const WCHAR *this,
        int a2,
        int a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  const WCHAR *v10; // eax
  HANDLE FileW; // ebp
  int v13; // eax
  const WCHAR *v14; // eax
  int v15; // eax
  const WCHAR *v16; // eax
  int *v17; // esi
  int v18; // ebp
  int v19; // esi
  char v20; // al
  int v21; // esi
  const void **v22; // edi
  int v23; // esi
  int v24; // ebx
  const void **v25; // esi
  HANDLE v26; // edi
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // esi
  BOOL v31; // eax
  volatile signed __int32 *v32; // esi
  volatile signed __int32 *v33; // esi
  DWORD v34; // [esp-20h] [ebp-2B4h]
  int v35; // [esp-1Ch] [ebp-2B0h] BYREF
  void *v36; // [esp-18h] [ebp-2ACh]
  int v37; // [esp-14h] [ebp-2A8h]
  int v38; // [esp-10h] [ebp-2A4h]
  int v39; // [esp-Ch] [ebp-2A0h]
  int v40; // [esp-8h] [ebp-29Ch]
  unsigned int v41; // [esp-4h] [ebp-298h]
  char v42; // [esp+1Bh] [ebp-279h]
  HANDLE hFile; // [esp+1Ch] [ebp-278h]
  int v44; // [esp+20h] [ebp-274h] BYREF
  volatile signed __int32 *v45; // [esp+24h] [ebp-270h]
  int v46; // [esp+28h] [ebp-26Ch] BYREF
  volatile signed __int32 *v47; // [esp+2Ch] [ebp-268h]
  int v48; // [esp+30h] [ebp-264h]
  LARGE_INTEGER NewFilePointer; // [esp+34h] [ebp-260h] BYREF
  int v50; // [esp+40h] [ebp-254h]
  DWORD NumberOfBytesRead; // [esp+44h] [ebp-250h] BYREF
  int *v52; // [esp+48h] [ebp-24Ch]
  _BYTE v53[4]; // [esp+4Ch] [ebp-248h] BYREF
  void *v54; // [esp+50h] [ebp-244h]
  int v55; // [esp+60h] [ebp-234h]
  unsigned int v56; // [esp+64h] [ebp-230h]
  _BYTE v57[4]; // [esp+68h] [ebp-22Ch] BYREF
  void *v58; // [esp+6Ch] [ebp-228h]
  int v59; // [esp+7Ch] [ebp-218h]
  unsigned int v60; // [esp+80h] [ebp-214h]
  _DWORD Buffer[115]; // [esp+84h] [ebp-210h] BYREF
  int v62; // [esp+252h] [ebp-42h]
  int v63; // [esp+256h] [ebp-3Eh]
  int v64; // [esp+25Ah] [ebp-3Ah]
  int v65; // [esp+25Eh] [ebp-36h]
  int v66; // [esp+262h] [ebp-32h]
  int v67; // [esp+266h] [ebp-2Eh]
  int v68; // [esp+26Ah] [ebp-2Ah]
  int v69; // [esp+26Eh] [ebp-26h]
  int v70; // [esp+290h] [ebp-4h]

  v48 = (int)this;
  v50 = a2;
  v70 = 0;
  if ( *((_DWORD *)this + 137) < 8u )
    v10 = this + 264;
  else
    v10 = *((const WCHAR **)this + 132);
  FileW = CreateFileW(v10, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
  hFile = FileW;
  if ( FileW == (HANDLE)-1 )
  {
    *((_DWORD *)this + 1) = 268435459;
    if ( a9 >= 8 )
      operator delete(a4);
    return 0;
  }
  v42 = 0;
  v13 = sub_100039D0(L"rom.bin", (int)v57, &a3);
  LOBYTE(v70) = 1;
  if ( *(_DWORD *)(v13 + 24) < 8u )
    v14 = (const WCHAR *)(v13 + 4);
  else
    v14 = *(const WCHAR **)(v13 + 4);
  sub_10007E10(&v44, v14);
  LOBYTE(v70) = 3;
  if ( v60 >= 8 )
    operator delete(v58);
  v60 = 7;
  v59 = 0;
  LOWORD(v58) = 0;
  if ( v44 != 0 )
  {
    v15 = sub_100039D0(L"bootldr.bin", (int)v53, &a3);
    LOBYTE(v70) = 4;
    if ( *(_DWORD *)(v15 + 24) < 8u )
      v16 = (const WCHAR *)(v15 + 4);
    else
      v16 = *(const WCHAR **)(v15 + 4);
    sub_10007E10(&v46, v16);
    LOBYTE(v70) = 6;
    if ( v56 >= 8 )
      operator delete(v54);
    v56 = 7;
    v55 = 0;
    LOWORD(v54) = 0;
    if ( v46 == 0 )
    {
      *((_DWORD *)this + 1) = 268435461;
      LOBYTE(v70) = 3;
      sub_10004100((int)&v46);
      LOBYTE(v70) = 0;
      sub_10004100((int)&v44);
      goto LABEL_57;
    }
    NewFilePointer.QuadPart = 0;
    if ( !SetFilePointerEx(FileW, 0, &NewFilePointer, 0)
      || !ReadFile(FileW, Buffer, 0x200u, &NumberOfBytesRead, nullptr) )
    {
      *((_DWORD *)this + 1) = 268435462;
      LOBYTE(v70) = 3;
      sub_10004100((int)&v46);
      LOBYTE(v70) = 0;
      sub_10004100((int)&v44);
      goto LABEL_57;
    }
    sub_1000AB60(FileW, Buffer);
    v17 = (int *)(v44 + 16);
    if ( *(_DWORD *)(v44 + 20) == *(_DWORD *)(v44 + 16) )
      _invalid_parameter_noinfo();
    v18 = *v17;
    v19 = v46 + 16;
    if ( *(_DWORD *)(v46 + 20) == *(_DWORD *)(v46 + 16) )
      _invalid_parameter_noinfo();
    v20 = *(_BYTE *)(*(_DWORD *)v19 + 436);
    *(_BYTE *)(v18 + 126) = v20;
    if ( (*((_DWORD *)this + 10) & 0x4000) != 0 )
      *(_BYTE *)(v18 + 126) = v20 | 1;
    if ( (*((_DWORD *)this + 10) & 0x8000) != 0 )
      *(_BYTE *)(v18 + 126) |= 4u;
    v52 = &v35;
    v41 = 7;
    v40 = 0;
    LOWORD(v36) = 0;
    sub_100032E0(&a3, (int)&v35, 0, 0xFFFFFFFF);
    v21 = *(_DWORD *)(v44 + 20) - *(_DWORD *)(v44 + 16);
    v22 = (const void **)(v44 + 16);
    if ( v21 == 0 )
      _invalid_parameter_noinfo();
    v34 = v21;
    v23 = v48;
    v24 = sub_10008070(*v22, Buffer, v48, v50, v34, v35, v36, v37, v38, v39, v40, v41);
    if ( v24 != 0 )
    {
      v25 = (const void **)(v46 + 16);
      if ( *(_DWORD *)(v46 + 20) == *(_DWORD *)(v46 + 16) )
        _invalid_parameter_noinfo();
      qmemcpy(Buffer, *v25, 0x1B8u);
      v26 = hFile;
      LOBYTE(Buffer[109]) = *(_BYTE *)(v18 + 126);
      Buffer[108] = v24;
      NewFilePointer.QuadPart = 0;
      if ( SetFilePointerEx(hFile, 0, &NewFilePointer, 0) )
      {
        if ( (unsigned __int8)sub_1000AAE0() != 0 && (_BYTE)v67 == 15 )
        {
          v27 = v62;
          v28 = v63;
          v29 = v64;
          v30 = v65;
          v62 = v66;
          v63 = v67;
          v64 = v68;
          v65 = v69;
          v66 = v27;
          v67 = v28;
          v68 = v29;
          v69 = v30;
        }
        v31 = WriteFile(v26, Buffer, 0x200u, &NumberOfBytesRead, nullptr);
        LOBYTE(v70) = 3;
        if ( v31 )
        {
          v32 = v47;
          v42 = 1;
          if ( v47 != nullptr && _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 0 )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v32)(v32);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 0 )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v32 + 4))(v32);
          }
          LOBYTE(v70) = 0;
          v33 = v45;
          if ( v45 != nullptr && _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 0 )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v33)(v33);
            if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 0 )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v33 + 4))(v33);
          }
          goto LABEL_56;
        }
        *(_DWORD *)(v48 + 4) = 268435463;
LABEL_38:
        sub_10004100((int)&v46);
        LOBYTE(v70) = 0;
        sub_10004100((int)&v44);
LABEL_56:
        FileW = hFile;
        goto LABEL_57;
      }
      *(_DWORD *)(v48 + 4) = 268435463;
    }
    else
    {
      *(_DWORD *)(v23 + 4) = 268435464;
    }
    LOBYTE(v70) = 3;
    goto LABEL_38;
  }
  LOBYTE(v70) = 0;
  *((_DWORD *)this + 1) = 268435460;
  sub_10004100((int)&v44);
LABEL_57:
  CloseHandle(FileW);
  if ( a9 >= 8 )
    operator delete(a4);
  return v42;
}

// Address: 0x10008D00
char __thiscall sub_10008D00(LPCWSTR lpName)
{
  HANDLE CurrentProcess; // eax
  HANDLE TokenHandle; // [esp+4h] [ebp-18h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [esp+8h] [ebp-14h] BYREF

  NewState.PrivilegeCount = 1;
  NewState.Privileges[0].Luid.LowPart = 0;
  NewState.Privileges[0].Luid.HighPart = 0;
  NewState.Privileges[0].Attributes = 2;
  LookupPrivilegeValueW(nullptr, lpName, &NewState.Privileges[0].Luid);
  CurrentProcess = GetCurrentProcess();
  if ( !OpenProcessToken(CurrentProcess, 0x20u, &TokenHandle) )
    return 0;
  if ( !AdjustTokenPrivileges(TokenHandle, false, &NewState, 0x10u, nullptr, nullptr) )
  {
    CloseHandle(TokenHandle);
    return 0;
  }
  CloseHandle(TokenHandle);
  return 1;
}

// Address: 0x10008D90
bool __thiscall sub_10008D90(char *this, char a2, const unsigned __int16 *a3)
{
  char *v4; // eax
  _BYTE *v5; // edx
  __int16 v6; // cx
  const wchar_t *v7; // edx
  void *v8; // ecx
  void *v9; // eax
  char v10; // bl
  HMODULE ModuleHandleW; // eax
  ULONG active; // eax
  DWORD v13; // eax
  bool v15; // bl
  DWORD v16; // eax
  DWORD v17; // [esp-4h] [ebp-300h]
  DWORD LastError; // [esp-4h] [ebp-300h]
  int v19; // [esp+0h] [ebp-2FCh]
  DWORD ExitCode; // [esp+14h] [ebp-2E8h] BYREF
  HANDLE phToken; // [esp+18h] [ebp-2E4h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+1Ch] [ebp-2E0h] BYREF
  int v23; // [esp+2Ch] [ebp-2D0h] BYREF
  void *v24; // [esp+30h] [ebp-2CCh]
  int v25; // [esp+40h] [ebp-2BCh]
  unsigned int v26; // [esp+44h] [ebp-2B8h]
  int v27; // [esp+48h] [ebp-2B4h] BYREF
  void *v28; // [esp+4Ch] [ebp-2B0h]
  int v29; // [esp+5Ch] [ebp-2A0h]
  unsigned int v30; // [esp+60h] [ebp-29Ch]
  struct _STARTUPINFOW StartupInfo; // [esp+64h] [ebp-298h] BYREF
  char v32[4]; // [esp+ACh] [ebp-250h] BYREF
  void *v33; // [esp+B0h] [ebp-24Ch] BYREF
  int v34; // [esp+C0h] [ebp-23Ch]
  unsigned int v35; // [esp+C4h] [ebp-238h]
  char v36[4]; // [esp+C8h] [ebp-234h] BYREF
  void *v37; // [esp+CCh] [ebp-230h] BYREF
  unsigned int v38; // [esp+E0h] [ebp-21Ch]
  WCHAR CommandLine[260]; // [esp+E4h] [ebp-218h] BYREF
  int v40; // [esp+2F8h] [ebp-4h]

  LOWORD(v24) = 0;
  v4 = this;
  v26 = 7;
  v25 = 0;
  v5 = this + 2;
  do
  {
    v6 = *(_WORD *)v4;
    v4 += 2;
  }
  while ( v6 != 0 );
  sub_10003390(this, &v23, (v4 - v5) >> 1);
  v40 = 0;
  sub_100039D0(L"setupinf.exe", (int)v36, &v23);
  LOBYTE(v40) = 2;
  if ( v26 >= 8 )
    operator delete(v24);
  v26 = 7;
  v30 = 7;
  LOWORD(v28) = 0;
  v25 = 0;
  LOWORD(v24) = 0;
  v29 = 0;
  sub_10003390(this, &v27, wcslen((const unsigned __int16 *)this));
  LOBYTE(v40) = 3;
  sub_100039D0(a3, (int)v32, &v27);
  LOBYTE(v40) = 5;
  if ( v30 >= 8 )
    operator delete(v28);
  LOWORD(v28) = 0;
  v30 = 7;
  v29 = 0;
  v7 = L"install";
  if ( a2 == 0 )
    v7 = L"uninstall";
  v8 = v33;
  if ( v35 < 8 )
    v8 = &v33;
  v9 = v37;
  if ( v38 < 8 )
    v9 = &v37;
  swprintf_s(CommandLine, 0x104u, L"%s %s \"%s\"", v9, v7, v8);
  v10 = 0;
  phToken = nullptr;
  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( GetProcAddress(ModuleHandleW, "GetProductInfo") == nullptr )
  {
    sub_10008D00(L"SeTcbPrivilege");
    active = WTSGetActiveConsoleSessionId();
    if ( active == -1 )
    {
      LastError = GetLastError();
      sub_10001B70((wchar_t *)L"Cannot get sid: %u", LastError);
    }
    else if ( WTSQueryUserToken(active, &phToken) )
    {
      v10 = 1;
    }
    else
    {
      v17 = GetLastError();
      sub_10001B70(L"Cannot get user token: %u", v17);
    }
  }
  StartupInfo.cb = 68;
  memset(&StartupInfo.lpReserved, 0, 0x40u);
  if ( v10 != 0 )
  {
    sub_10001B70(CommandLine, v19);
    if ( !CreateProcessAsUserW(
            phToken,
            nullptr,
            CommandLine,
            nullptr,
            nullptr,
            false,
            0,
            nullptr,
            nullptr,
            &StartupInfo,
            &ProcessInformation) )
    {
      CloseHandle(phToken);
      v13 = GetLastError();
      sub_10001B70((wchar_t *)L"CreateProcessAsUser failed : %u", v13);
      if ( v35 >= 8 )
        operator delete(v33);
      v35 = 7;
      v34 = 0;
      LOWORD(v33) = 0;
      if ( v38 >= 8 )
        operator delete(v37);
      return false;
    }
    CloseHandle(phToken);
    goto LABEL_27;
  }
  sub_10001B70(CommandLine, v19);
  if ( CreateProcessW(
         nullptr,
         CommandLine,
         nullptr,
         nullptr,
         false,
         0,
         nullptr,
         nullptr,
         &StartupInfo,
         &ProcessInformation) )
  {
LABEL_27:
    ExitCode = 0;
    while ( GetExitCodeProcess(ProcessInformation.hProcess, &ExitCode) )
    {
      if ( ExitCode != 259 )
        break;
      ExitCode = 0;
      Sleep(1u);
    }
    CloseHandle(ProcessInformation.hThread);
    CloseHandle(ProcessInformation.hProcess);
    v15 = ExitCode != 0;
    if ( v35 >= 8 )
      operator delete(v33);
    v35 = 7;
    v34 = 0;
    LOWORD(v33) = 0;
    if ( v38 >= 8 )
      operator delete(v37);
    return v15;
  }
  v16 = GetLastError();
  sub_10001B70((wchar_t *)L"CreateProcess failed : %u", v16);
  if ( v35 >= 8 )
    operator delete(v33);
  v35 = 7;
  v34 = 0;
  LOWORD(v33) = 0;
  if ( v38 < 8 )
    return false;
  operator delete(v37);
  return false;
}

// Address: 0x100091F0
void __stdcall sub_100091F0(int a1, unsigned int a2, __int16 a3)
{
  int v3; // eax
  unsigned int v4; // ebp
  unsigned __int16 v5; // cx
  int v6; // [esp+14h] [ebp-84Ch] BYREF
  void *v7; // [esp+18h] [ebp-848h]
  int v8; // [esp+28h] [ebp-838h]
  unsigned int v9; // [esp+2Ch] [ebp-834h]
  int v10; // [esp+30h] [ebp-830h] BYREF
  void *v11; // [esp+34h] [ebp-82Ch]
  int v12; // [esp+44h] [ebp-81Ch]
  unsigned int v13; // [esp+48h] [ebp-818h]
  unsigned __int16 v14[1024]; // [esp+4Ch] [ebp-814h] BYREF
  int v15; // [esp+85Ch] [ebp-4h]

  v3 = 0;
  v4 = 0;
  if ( a2 != 0 )
  {
    do
    {
      v5 = *(_WORD *)(a1 + 2 * v4);
      if ( v5 == 0 )
        break;
      if ( v5 != 13 )
      {
        if ( v5 == a3 )
        {
          if ( v3 != 0 )
          {
            v14[v3] = 0;
            LOWORD(v11) = 0;
            v13 = 7;
            v12 = 0;
            sub_10003390(v14, &v10, wcslen(v14));
            v15 = 0;
            sub_1000ADB0(&v10);
            v15 = -1;
            if ( v13 >= 8 )
              operator delete(v11);
            v3 = 0;
          }
        }
        else
        {
          if ( (unsigned int)(v3 + 1) >= 0x400 )
            break;
          v14[v3++] = v5;
        }
      }
      ++v4;
    }
    while ( v4 < a2 );
    if ( v3 != 0 )
    {
      v14[v3] = 0;
      LOWORD(v7) = 0;
      v9 = 7;
      v8 = 0;
      sub_10003390(v14, &v6, wcslen(v14));
      v15 = 1;
      sub_1000ADB0(&v6);
      if ( v9 >= 8 )
        operator delete(v7);
    }
  }
}

// Address: 0x100093A0
void __stdcall sub_100093A0(unsigned __int16 *a1)
{
  const WCHAR *v1; // eax
  volatile signed __int32 *v2; // esi
  unsigned int v3; // esi
  int *v4; // edi
  _DWORD *v5; // esi
  unsigned int v6; // eax
  int v7; // esi
  const wchar_t *v8; // esi
  int v9; // eax
  _DWORD *v10; // esi
  int v11; // ecx
  const WCHAR *v12; // esi
  DWORD FileAttributesW; // ebx
  const wchar_t *v14; // esi
  int v15; // eax
  _DWORD *v16; // esi
  int v17; // ecx
  const WCHAR *v18; // esi
  const wchar_t *v19; // esi
  int v20; // eax
  int v21; // eax
  const wchar_t *v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const wchar_t *v27; // eax
  int v28; // eax
  int v29; // eax
  const wchar_t *v30; // eax
  unsigned int v31; // ebx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  const wchar_t *v35; // eax
  int v36; // eax
  const WCHAR *v37; // eax
  int v38; // ebx
  int v39; // eax
  const WCHAR *v40; // eax
  volatile signed __int32 *v41; // esi
  void *v42; // [esp+18h] [ebp-98h] BYREF
  void *v43; // [esp+24h] [ebp-8Ch]
  int v44; // [esp+28h] [ebp-88h]
  int v45; // [esp+2Ch] [ebp-84h]
  int v46; // [esp+30h] [ebp-80h]
  int v47; // [esp+34h] [ebp-7Ch]
  _DWORD v48[3]; // [esp+38h] [ebp-78h] BYREF
  int v49; // [esp+44h] [ebp-6Ch]
  int v50; // [esp+48h] [ebp-68h]
  int v51; // [esp+50h] [ebp-60h] BYREF
  volatile signed __int32 *v52; // [esp+54h] [ebp-5Ch]
  HKEY v53; // [esp+58h] [ebp-58h] BYREF
  HKEY hKey; // [esp+5Ch] [ebp-54h] BYREF
  void *v55; // [esp+60h] [ebp-50h] BYREF
  void *v56; // [esp+6Ch] [ebp-44h]
  int v57; // [esp+70h] [ebp-40h]
  int v58; // [esp+74h] [ebp-3Ch]
  _DWORD v59[2]; // [esp+78h] [ebp-38h] BYREF
  int v60; // [esp+80h] [ebp-30h] BYREF
  LPCWSTR lpFileName[5]; // [esp+84h] [ebp-2Ch] BYREF
  unsigned int v62; // [esp+98h] [ebp-18h]
  int v63; // [esp+ACh] [ebp-4h]

  LOWORD(lpFileName[0]) = 0;
  v62 = 7;
  lpFileName[4] = nullptr;
  sub_10003390(a1, &v60, wcslen(a1));
  v63 = 0;
  sub_10003B40(L"Uninst.lst", &v60, 0xAu);
  v1 = lpFileName[0];
  if ( v62 < 8 )
    v1 = (const WCHAR *)lpFileName;
  sub_10007E10(&v51, v1);
  LOBYTE(v63) = 1;
  if ( v51 == 0 )
  {
    LOBYTE(v63) = 0;
    v2 = v52;
    if ( v52 != nullptr && _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
    if ( v62 >= 8 )
      operator delete((void *)lpFileName[0]);
    return;
  }
  sub_10002B00(&v55);
  LOBYTE(v63) = 2;
  v3 = *(_DWORD *)(v51 + 20) - *(_DWORD *)(v51 + 16);
  v4 = (int *)(v51 + 16);
  if ( v3 == 0 )
    _invalid_parameter_noinfo();
  sub_100091F0(*v4, v3 >> 1, 10);
  if ( (v57 - (int)v56) / 28 == 0 )
  {
    sub_1000AD20();
    goto LABEL_102;
  }
  v46 = 0;
  v47 = 0;
  while ( 1 )
  {
    v5 = (char *)v56 + v47;
    sub_10002B00(&v42);
    LOBYTE(v63) = 3;
    v6 = v5[5];
    v7 = v5[6] < 8u ? (int)(v5 + 1) : v5[1];
    sub_100091F0(v7, v6, 124);
    if ( (v44 - (int)v43) / 28 != 2 )
      break;
    if ( *((_DWORD *)v43 + 6) < 8u )
      v8 = (const wchar_t *)((char *)v43 + 4);
    else
      v8 = *((const wchar_t **)v43 + 1);
    v9 = _wcsicmp(v8, L"DELFILE");
    v10 = v43;
    v11 = v44 - (_DWORD)v43;
    if ( v9 == 0 )
    {
      if ( (unsigned int)(v11 / 28) <= 1 )
      {
        _invalid_parameter_noinfo();
        v10 = v43;
      }
      if ( v10[13] < 8u )
        v12 = (const WCHAR *)(v10 + 8);
      else
        v12 = (const WCHAR *)v10[8];
      goto LABEL_28;
    }
    if ( v11 / 28 == 0 )
    {
      _invalid_parameter_noinfo();
      v10 = v43;
    }
    if ( v10[6] < 8u )
      v14 = (const wchar_t *)(v10 + 1);
    else
      v14 = (const wchar_t *)v10[1];
    v15 = _wcsicmp(v14, L"DELFILELATER");
    v16 = v43;
    v17 = v44 - (_DWORD)v43;
    if ( v15 == 0 )
    {
      if ( (unsigned int)(v17 / 28) <= 1 )
      {
        _invalid_parameter_noinfo();
        v16 = v43;
      }
      if ( v16[13] < 8u )
        v18 = (const WCHAR *)(v16 + 8);
      else
        v18 = (const WCHAR *)v16[8];
      if ( GetFileAttributesW(v18) != -1 )
      {
        SetFileAttributesW(v18, 0x80u);
        MoveFileExW(v18, nullptr, 4u);
      }
      goto LABEL_91;
    }
    if ( v17 / 28 == 0 )
    {
      _invalid_parameter_noinfo();
      v16 = v43;
    }
    if ( v16[6] < 8u )
      v19 = (const wchar_t *)(v16 + 1);
    else
      v19 = (const wchar_t *)v16[1];
    if ( _wcsicmp(v19, L"DELDIR") == 0 )
    {
      v20 = sub_1000AD70();
      if ( *(_DWORD *)(v20 + 24) < 8u )
        v12 = (const WCHAR *)(v20 + 4);
      else
        v12 = *(const WCHAR **)(v20 + 4);
LABEL_28:
      FileAttributesW = GetFileAttributesW(v12);
      if ( FileAttributesW != -1 )
      {
        SetFileAttributesW(v12, 0x80u);
        if ( (FileAttributesW & 0x10) != 0 )
          RemoveDirectoryW(v12);
        else
          DeleteFileW(v12);
      }
      goto LABEL_91;
    }
    v21 = sub_1000AD70();
    if ( *(_DWORD *)(v21 + 24) < 8u )
      v22 = (const wchar_t *)(v21 + 4);
    else
      v22 = *(const wchar_t **)(v21 + 4);
    if ( _wcsicmp(v22, L"DELREGKEY") != 0 )
    {
      v29 = sub_1000AD70();
      if ( *(_DWORD *)(v29 + 24) < 8u )
        v30 = (const wchar_t *)(v29 + 4);
      else
        v30 = *(const wchar_t **)(v29 + 4);
      if ( _wcsicmp(v30, L"DELREGVAL") != 0 )
        goto LABEL_91;
      sub_10002B00(v48);
      LOBYTE(v63) = 5;
      v31 = *(_DWORD *)(sub_1000AD70() + 20);
      v32 = sub_1000AD70();
      if ( *(_DWORD *)(v32 + 24) < 8u )
        v33 = v32 + 4;
      else
        v33 = *(_DWORD *)(v32 + 4);
      sub_100091F0(v33, v31, 44);
      if ( (v50 - v49) / 28 != 3
        || ((v53 = nullptr, *(_DWORD *)((v34 = sub_1000AD70()) + 24) < 8u)
          ? (v35 = (const wchar_t *)(v34 + 4))
          : (v35 = *(const wchar_t **)(v34 + 4)),
            swscanf_s(v35, L"%x", &v53) == 0) )
      {
LABEL_98:
        sub_1000AD20();
        sub_1000AD20();
        goto LABEL_99;
      }
      v36 = sub_1000AD70();
      if ( *(_DWORD *)(v36 + 24) < 8u )
        v37 = (const WCHAR *)(v36 + 4);
      else
        v37 = *(const WCHAR **)(v36 + 4);
      sub_10006540(0xF003Fu, v37, v59, v53);
      v38 = v59[0];
      if ( v59[0] != 0 )
      {
        v39 = sub_1000AD70();
        if ( *(_DWORD *)(v39 + 24) < 8u )
          v40 = (const WCHAR *)(v39 + 4);
        else
          v40 = *(const WCHAR **)(v39 + 4);
        RegDeleteValueW(*(HKEY *)(v38 + 4), v40);
      }
      sub_10004100((int)v59);
    }
    else
    {
      sub_10002B00(v48);
      LOBYTE(v63) = 4;
      v23 = *(_DWORD *)(sub_1000AD70() + 20);
      v24 = sub_1000AD70();
      if ( *(_DWORD *)(v24 + 24) < 8u )
        v25 = v24 + 4;
      else
        v25 = *(_DWORD *)(v24 + 4);
      sub_100091F0(v25, v23, 44);
      if ( (v50 - v49) / 28 != 2 )
        goto LABEL_98;
      hKey = nullptr;
      v26 = sub_1000AD70();
      v27 = *(_DWORD *)(v26 + 24) < 8u ? (const wchar_t *)(v26 + 4) : *(const wchar_t **)(v26 + 4);
      if ( swscanf_s(v27, L"%x", &hKey) == 0 )
        goto LABEL_98;
      v28 = sub_1000AD70();
      if ( *(_DWORD *)(v28 + 24) < 8u )
        RegDeleteKeyW(hKey, (LPCWSTR)(v28 + 4));
      else
        RegDeleteKeyW(hKey, *(LPCWSTR *)(v28 + 4));
    }
    sub_1000AD20();
LABEL_91:
    LOBYTE(v63) = 2;
    if ( v43 != nullptr )
    {
      sub_1000C070(v46);
      operator delete(v43);
    }
    v43 = nullptr;
    v44 = 0;
    v45 = 0;
    operator delete(v42);
    v47 += 28;
    if ( ++v46 >= (unsigned int)((v57 - (int)v56) / 28) )
      goto LABEL_99;
  }
  if ( v43 != nullptr )
  {
    sub_1000C070(v46);
    operator delete(v43);
  }
  v43 = nullptr;
  v44 = 0;
  v45 = 0;
  operator delete(v42);
LABEL_99:
  if ( v56 != nullptr )
  {
    sub_1000C070(v46);
    operator delete(v56);
  }
  v56 = nullptr;
  v57 = 0;
  v58 = 0;
  operator delete(v55);
LABEL_102:
  LOBYTE(v63) = 0;
  v41 = v52;
  if ( v52 != nullptr && _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v41)(v41);
    if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v41 + 4))(v41);
  }
  if ( v62 >= 8 )
    operator delete((void *)lpFileName[0]);
}

// Address: 0x10009B20
int __thiscall sub_10009B20(_DWORD *this, int *a2)
{
  *a2 = (*(this + 163) - *(this + 162)) >> 5;
  if ( ((*(this + 163) - *(this + 162)) & 0xFFFFFFE0) == 0 )
    return 0;
  if ( (*(this + 163) - *(this + 162)) >> 5 == 0 )
    _invalid_parameter_noinfo();
  return *(this + 162);
}

// Address: 0x10009B80
_DWORD *__userpurge sub_10009B80@<eax>(
        _DWORD *a1@<edi>,
        int a2,
        int a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  unsigned int v9; // eax
  int v10; // eax
  const WCHAR *v11; // eax
  int v12; // eax
  const WCHAR *v13; // eax
  int v14; // eax
  const WCHAR *v15; // eax
  bool v16; // cf
  _BYTE v18[4]; // [esp+14h] [ebp-60h] BYREF
  void *v19; // [esp+18h] [ebp-5Ch]
  int v20; // [esp+28h] [ebp-4Ch]
  unsigned int v21; // [esp+2Ch] [ebp-48h]
  _BYTE v22[4]; // [esp+30h] [ebp-44h] BYREF
  void *v23; // [esp+34h] [ebp-40h]
  int v24; // [esp+44h] [ebp-30h]
  unsigned int v25; // [esp+48h] [ebp-2Ch]
  _BYTE v26[28]; // [esp+4Ch] [ebp-28h] BYREF
  int v27; // [esp+70h] [ebp-4h]

  v27 = 0;
  v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 12) + 36))(*(_DWORD *)(a2 + 12));
  if ( v9 > 0x10000600 )
  {
    if ( v9 - 268436993 > 1 )
    {
LABEL_23:
      v16 = a9 < 8;
      a1[1] = 0;
      *a1 = 0;
      if ( v16 )
        return a1;
LABEL_24:
      operator delete(a4);
      return a1;
    }
    v14 = sub_100039D0(L"win7.mbr", (int)v22, &a3);
    LOBYTE(v27) = 3;
    if ( *(_DWORD *)(v14 + 24) < 8u )
      v15 = (const WCHAR *)(v14 + 4);
    else
      v15 = *(const WCHAR **)(v14 + 4);
    sub_10007E10(a1, v15);
    if ( v25 >= 8 )
      operator delete(v23);
    v25 = 7;
    v24 = 0;
    LOWORD(v23) = 0;
    if ( a9 >= 8 )
      operator delete(a4);
  }
  else
  {
    if ( v9 != 268436992 )
    {
      if ( v9 - 268436736 <= 1 )
      {
        v10 = sub_100039D0(L"xp.mbr", (int)v26, &a3);
        LOBYTE(v27) = 1;
        if ( *(_DWORD *)(v10 + 24) < 8u )
          v11 = (const WCHAR *)(v10 + 4);
        else
          v11 = *(const WCHAR **)(v10 + 4);
        sub_10007E10(a1, v11);
        sub_10002C10((int)v26);
        sub_10002C10((int)&a3);
        return a1;
      }
      goto LABEL_23;
    }
    v12 = sub_100039D0(L"vista.mbr", (int)v18, &a3);
    LOBYTE(v27) = 2;
    if ( *(_DWORD *)(v12 + 24) < 8u )
      v13 = (const WCHAR *)(v12 + 4);
    else
      v13 = *(const WCHAR **)(v12 + 4);
    sub_10007E10(a1, v13);
    if ( v21 >= 8 )
      operator delete(v19);
    v21 = 7;
    v20 = 0;
    LOWORD(v19) = 0;
    if ( a9 >= 8 )
      goto LABEL_24;
  }
  return a1;
}

// Address: 0x10009D50
char __thiscall sub_10009D50(char *this)
{
  char *v2; // eax
  _BYTE *v3; // edx
  __int16 v4; // cx
  const WCHAR *v5; // eax
  HANDLE FileW; // ebp
  DWORD LastError; // eax
  const WCHAR *v9; // eax
  DWORD v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  DWORD v14; // edi
  HANDLE v15; // esi
  volatile signed __int32 *v16; // esi
  LARGE_INTEGER v17; // [esp-10h] [ebp-294h]
  DWORD v18; // [esp-4h] [ebp-288h]
  DWORD v19; // [esp-4h] [ebp-288h]
  DWORD v20; // [esp-4h] [ebp-288h]
  DWORD v21; // [esp-4h] [ebp-288h]
  DWORD v22; // [esp-4h] [ebp-288h]
  char v23; // [esp+1Bh] [ebp-269h]
  _DWORD *v24; // [esp+1Ch] [ebp-268h] BYREF
  volatile signed __int32 *v25; // [esp+20h] [ebp-264h]
  LARGE_INTEGER NewFilePointer; // [esp+24h] [ebp-260h] BYREF
  DWORD NumberOfBytesRead; // [esp+2Ch] [ebp-258h] BYREF
  HANDLE hFile; // [esp+30h] [ebp-254h]
  LARGE_INTEGER FileSize; // [esp+34h] [ebp-250h] BYREF
  int v30; // [esp+3Ch] [ebp-248h] BYREF
  LPCWSTR v31; // [esp+40h] [ebp-244h] BYREF
  int v32; // [esp+50h] [ebp-234h]
  unsigned int v33; // [esp+54h] [ebp-230h]
  int v34; // [esp+58h] [ebp-22Ch] BYREF
  LPCWSTR lpFileName[5]; // [esp+5Ch] [ebp-228h] BYREF
  unsigned int v36; // [esp+70h] [ebp-214h]
  _BYTE Buffer[512]; // [esp+74h] [ebp-210h] BYREF
  int v38; // [esp+280h] [ebp-4h]

  LOWORD(lpFileName[0]) = 0;
  v2 = this;
  v23 = 0;
  v36 = 7;
  lpFileName[4] = nullptr;
  v3 = this + 2;
  do
  {
    v4 = *(_WORD *)v2;
    v2 += 2;
  }
  while ( v4 != 0 );
  sub_10003390(this, &v34, (v2 - v3) >> 1);
  v38 = 0;
  sub_10003B40(L"bootrom.bin", &v34, 0xBu);
  v33 = 7;
  v32 = 0;
  LOWORD(v31) = 0;
  sub_10003390(this, &v30, wcslen((const unsigned __int16 *)this));
  LOBYTE(v38) = 1;
  sub_10003B40(L"bkupmbr.bin", &v30, 0xBu);
  v5 = lpFileName[0];
  if ( v36 < 8 )
    v5 = (const WCHAR *)lpFileName;
  FileW = CreateFileW(v5, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
  {
    LastError = GetLastError();
    sub_10001B70((wchar_t *)L"Can't open Disk(ChangeBootRomMbr) : %08X", LastError);
LABEL_7:
    if ( v33 >= 8 )
      operator delete((void *)v31);
    v33 = 7;
    v32 = 0;
    LOWORD(v31) = 0;
    if ( v36 >= 8 )
      operator delete((void *)lpFileName[0]);
    return 0;
  }
  v9 = v31;
  if ( v33 < 8 )
    v9 = (const WCHAR *)&v31;
  hFile = CreateFileW(v9, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
  if ( hFile == (HANDLE)-1 )
  {
    v10 = GetLastError();
    sub_10001B70((wchar_t *)L"Can't open Disk(ChangeBootRomMbr) : %08X", v10);
    CloseHandle(FileW);
    goto LABEL_7;
  }
  if ( !GetFileSizeEx(FileW, &FileSize) || FileSize.HighPart != 0 )
  {
    v22 = GetLastError();
    sub_10001B70((wchar_t *)L"Can't read bootrom file size(ChangeBootRomMbr) : %08X", v22);
    goto LABEL_41;
  }
  NewFilePointer.QuadPart = 0;
  if ( SetFilePointerEx(FileW, 0, &NewFilePointer, 0) )
  {
    v11 = operator new(0x1Cu);
    v24 = v11;
    LOBYTE(v38) = 2;
    if ( v11 != nullptr )
      v12 = sub_10001180(v11, FileSize.LowPart);
    else
      v12 = nullptr;
    LOBYTE(v38) = 1;
    v24 = nullptr;
    v25 = nullptr;
    sub_1000BEC0(&v24, v12);
    LOBYTE(v38) = 3;
    v13 = v24;
    v14 = v24[5] - v24[4];
    if ( v14 == 0 )
      _invalid_parameter_noinfo();
    if ( ReadFile(FileW, (LPVOID)v13[4], v14, &NumberOfBytesRead, nullptr) )
    {
      if ( v13[5] == v13[4] )
        _invalid_parameter_noinfo();
      v17.QuadPart = (unsigned int)(*(_DWORD *)(v13[4] + 24) * *(_DWORD *)(v13[4] + 60));
      NewFilePointer.QuadPart = v17.LowPart;
      if ( !SetFilePointerEx(FileW, v17, &NewFilePointer, 0)
        || (v15 = hFile, NewFilePointer.QuadPart = 0, !SetFilePointerEx(hFile, 0, &NewFilePointer, 0)) )
      {
        v20 = GetLastError();
        sub_10001B70(L"Can't move file pointer(ChangeBootRomMbr) : %08X", v20);
        goto LABEL_27;
      }
      if ( ReadFile(v15, Buffer, 0x200u, &NumberOfBytesRead, nullptr) )
      {
        if ( WriteFile(FileW, Buffer, 0x200u, &NumberOfBytesRead, nullptr) )
        {
          LOBYTE(v38) = 1;
          v16 = v25;
          v23 = 1;
          if ( v25 != nullptr && _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 0 )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v16)(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 0 )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v16 + 4))(v16);
          }
          goto LABEL_41;
        }
        v21 = GetLastError();
        sub_10001B70(L"Can't  Write File(ChangeBootRomMbr) : %08X", v21);
        goto LABEL_27;
      }
    }
    v19 = GetLastError();
    sub_10001B70((wchar_t *)L"Can't read Disk(ChangeBootRomMbr) : %08X", v19);
LABEL_27:
    LOBYTE(v38) = 1;
    sub_10004100((int)&v24);
    goto LABEL_41;
  }
  v18 = GetLastError();
  sub_10001B70(L"Can't move file pointer(ChangeBootRomMbr) : %08X", v18);
LABEL_41:
  CloseHandle(hFile);
  CloseHandle(FileW);
  if ( v33 >= 8 )
    operator delete((void *)v31);
  v33 = 7;
  v32 = 0;
  LOWORD(v31) = 0;
  if ( v36 >= 8 )
    operator delete((void *)lpFileName[0]);
  return v23;
}

// Address: 0x1000A180
char __thiscall sub_1000A180(_DWORD *this, unsigned __int16 *a2)
{
  int v3; // ecx
  DWORD LastError; // eax
  HANDLE FileW; // ecx
  DWORD v7; // eax
  DWORD v8; // eax
  const WCHAR *p_lpFileName; // eax
  HANDLE v10; // eax
  void *v11; // ebp
  DWORD v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  DWORD v16; // edi
  DWORD v17; // eax
  DWORD LowPart; // eax
  DWORD v19; // esi
  DWORD v20; // eax
  DWORD v21; // eax
  volatile signed __int32 *v22; // esi
  DWORD v23; // [esp-4h] [ebp-484h]
  DWORD v24; // [esp-4h] [ebp-484h]
  char v25; // [esp+1Bh] [ebp-465h]
  LARGE_INTEGER NewFilePointer; // [esp+1Ch] [ebp-464h] BYREF
  _DWORD *v27; // [esp+24h] [ebp-45Ch] BYREF
  volatile signed __int32 *v28; // [esp+28h] [ebp-458h]
  LARGE_INTEGER FileSize; // [esp+2Ch] [ebp-454h] BYREF
  DWORD NumberOfBytesRead; // [esp+38h] [ebp-448h] BYREF
  int v31; // [esp+3Ch] [ebp-444h] BYREF
  HANDLE hFile; // [esp+40h] [ebp-440h]
  int v33; // [esp+44h] [ebp-43Ch] BYREF
  int v34; // [esp+48h] [ebp-438h] BYREF
  LPCWSTR lpFileName; // [esp+4Ch] [ebp-434h] BYREF
  int v36; // [esp+5Ch] [ebp-424h]
  unsigned int v37; // [esp+60h] [ebp-420h]
  char Buffer[440]; // [esp+64h] [ebp-41Ch] BYREF
  int v39; // [esp+21Ch] [ebp-264h]
  __int16 v40; // [esp+262h] [ebp-21Eh]
  WCHAR FileName[260]; // [esp+264h] [ebp-21Ch] BYREF
  int v42; // [esp+47Ch] [ebp-4h]

  v3 = *(this + 3);
  v31 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int *, LARGE_INTEGER *, LARGE_INTEGER *, int *))(*(_DWORD *)v3 + 16))(
         v3,
         67,
         &v31,
         &NewFilePointer,
         &FileSize,
         &v33) == 0 )
  {
    LastError = GetLastError();
    sub_10001B70((wchar_t *)L"Can't read disk information(ChangeDiskSig) : %08X", LastError);
    return 0;
  }
  if ( v33 != 0 )
    return 1;
  v25 = 0;
  swprintf_s(FileName, 0x104u, L"\\\\.\\PhysicalDrive%d", v31);
  FileW = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
  hFile = FileW;
  if ( FileW != (HANDLE)-1 )
  {
    NewFilePointer.QuadPart = 0;
    if ( !SetFilePointerEx(FileW, 0, &NewFilePointer, 0) )
    {
      v8 = GetLastError();
      sub_10001B70((wchar_t *)L"Can't move file pointer(ChangeDiskSig) : %08X", v8);
LABEL_9:
      *(this + 1) = 268435462;
LABEL_48:
      CloseHandle(hFile);
      return v25;
    }
    if ( !ReadFile(hFile, Buffer, 0x200u, &NumberOfBytesRead, nullptr) )
      goto LABEL_9;
    if ( v40 != -21931 )
      goto LABEL_48;
    v37 = 7;
    v36 = 0;
    LOWORD(lpFileName) = 0;
    sub_10003390(a2, &v34, wcslen(a2));
    v42 = 0;
    sub_10003B40(L"bootrom.bin", &v34, 0xBu);
    p_lpFileName = lpFileName;
    if ( v37 < 8 )
      p_lpFileName = (const WCHAR *)&lpFileName;
    v10 = CreateFileW(p_lpFileName, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
    v11 = v10;
    if ( v10 == (HANDLE)-1 )
    {
      v12 = GetLastError();
      sub_10001B70((wchar_t *)L"Can't open file(ChangeDiskSig:bootrom.bin) : %08X", v12);
      sub_10002C10((int)&v34);
      goto LABEL_48;
    }
    FileSize.QuadPart = 0;
    if ( !GetFileSizeEx(v10, &FileSize) || FileSize.HighPart != 0 )
    {
      v24 = GetLastError();
      sub_10001B70((wchar_t *)L"Can't read bootrom file size(ChangeDiskSig) : %08X", v24);
      goto LABEL_46;
    }
    if ( FileSize.LowPart != 0 )
    {
      NewFilePointer.QuadPart = 0;
      if ( !SetFilePointerEx(v11, 0, &NewFilePointer, 0) )
      {
        v23 = GetLastError();
        sub_10001B70((wchar_t *)L"Can't move file pointer(ChangeDiskSig) : %08X", v23);
        goto LABEL_46;
      }
      v13 = operator new(0x1Cu);
      v27 = v13;
      LOBYTE(v42) = 1;
      if ( v13 != nullptr )
        v14 = sub_10001180(v13, FileSize.LowPart);
      else
        v14 = nullptr;
      LOBYTE(v42) = 0;
      v27 = nullptr;
      v28 = nullptr;
      sub_1000BEC0(&v27, v14);
      LOBYTE(v42) = 2;
      v15 = v27;
      v16 = v27[5] - v27[4];
      if ( v16 == 0 )
        _invalid_parameter_noinfo();
      if ( !ReadFile(v11, (LPVOID)v15[4], v16, &NumberOfBytesRead, nullptr) )
      {
        v17 = GetLastError();
        sub_10001B70((wchar_t *)L"Can't read rom file (ChangeDiskSig) : %08X", v17);
LABEL_28:
        LOBYTE(v42) = 0;
        sub_10004100((int)&v27);
        goto LABEL_46;
      }
      if ( v15[5] == v15[4] )
        _invalid_parameter_noinfo();
      LowPart = *(_DWORD *)(v15[4] + 24) * *(_DWORD *)(v15[4] + 60);
      NewFilePointer.QuadPart = LowPart;
      if ( v15[5] == v15[4] )
      {
        _invalid_parameter_noinfo();
        LowPart = NewFilePointer.LowPart;
      }
      v19 = LowPart + v15[4];
      if ( *(_WORD *)(v19 + 510) != 0xAA55 )
        goto LABEL_28;
      *(_DWORD *)(v19 + 440) = v39;
      if ( SetFilePointerEx(v11, NewFilePointer, &NewFilePointer, 0) )
      {
        if ( WriteFile(v11, (LPCVOID)v19, 0x200u, &NumberOfBytesRead, nullptr) )
        {
          LOBYTE(v42) = 0;
          v22 = v28;
          v25 = 1;
          if ( v28 != nullptr && _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 0 )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v22)(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 0 )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v22 + 4))(v22);
          }
          if ( v37 >= 8 )
            operator delete((void *)lpFileName);
          v37 = 7;
          v36 = 0;
          LOWORD(lpFileName) = 0;
          goto LABEL_47;
        }
        v21 = GetLastError();
        sub_10001B70((wchar_t *)L"Can't  Write rom file(ChangeDiskSig) : %08X", v21);
        LOBYTE(v42) = 0;
        sub_10004100((int)&v27);
      }
      else
      {
        v20 = GetLastError();
        sub_10001B70((wchar_t *)L"Can't move rom file pointer(ChangeDiskSig) : %08X", v20);
        LOBYTE(v42) = 0;
        sub_10004100((int)&v27);
      }
    }
LABEL_46:
    sub_10002C10((int)&v34);
LABEL_47:
    CloseHandle(v11);
    goto LABEL_48;
  }
  v7 = GetLastError();
  sub_10001B70((wchar_t *)L"Can't open Disk(ChangeDiskSig) : %08X", v7);
  *(this + 1) = 268435459;
  return v25;
}

// Address: 0x1000A620
char __fastcall sub_1000A620(DWORD a1, const unsigned __int16 *a2, int a3)
{
  DWORD LastError; // eax
  DWORD v6; // eax
  const WCHAR *v7; // eax
  HANDLE FileW; // eax
  void *v9; // ebp
  DWORD v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  DWORD v13; // eax
  _DWORD *v14; // edi
  DWORD v15; // esi
  DWORD v16; // eax
  int v17; // esi
  DWORD v18; // eax
  volatile signed __int32 *v19; // esi
  DWORD v20; // eax
  char v21; // [esp+17h] [ebp-279h]
  _DWORD *v22; // [esp+18h] [ebp-278h] BYREF
  volatile signed __int32 *v23; // [esp+1Ch] [ebp-274h]
  HANDLE hObject; // [esp+20h] [ebp-270h]
  LARGE_INTEGER NewFilePointer; // [esp+24h] [ebp-26Ch] BYREF
  LARGE_INTEGER liDistanceToMove; // [esp+2Ch] [ebp-264h] BYREF
  int v27; // [esp+34h] [ebp-25Ch] BYREF
  int v28; // [esp+38h] [ebp-258h] BYREF
  LARGE_INTEGER FileSize; // [esp+3Ch] [ebp-254h] BYREF
  char v30[8]; // [esp+44h] [ebp-24Ch] BYREF
  char v31[12]; // [esp+4Ch] [ebp-244h] BYREF
  int v32; // [esp+58h] [ebp-238h] BYREF
  LPCWSTR lpFileName[6]; // [esp+5Ch] [ebp-234h] BYREF
  WCHAR FileName[260]; // [esp+74h] [ebp-21Ch] BYREF
  int v35; // [esp+28Ch] [ebp-4h]

  liDistanceToMove.LowPart = a1;
  v21 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, int *, char *, char *, int *))(**(_DWORD **)(a3 + 12) + 16))(
         *(_DWORD *)(a3 + 12),
         67,
         &v28,
         v30,
         v31,
         &v27) == 0 )
  {
    LastError = GetLastError();
    sub_10001B70((wchar_t *)L"Can't read disk information(RestoreMbr) : %08X", LastError);
    return 0;
  }
  if ( v27 != 0 )
    return 1;
  swprintf_s(FileName, 0x104u, L"\\\\.\\PhysicalDrive%d", v28);
  hObject = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
  if ( hObject == (HANDLE)-1 )
  {
    v6 = GetLastError();
    sub_10001B70((wchar_t *)L"Can't open Disk(RestoreMbr) : %08X", v6);
    return 0;
  }
  sub_10002BD0(a2, (int)&v32);
  v35 = 0;
  sub_10003B40(L"bkupmbr.bin", &v32, 0xBu);
  v7 = lpFileName[0];
  if ( lpFileName[5] < (LPCWSTR)8 )
    v7 = (const WCHAR *)lpFileName;
  FileW = CreateFileW(v7, 0xC0000000, 3u, nullptr, 3u, 0, nullptr);
  v9 = FileW;
  if ( FileW == (HANDLE)-1 )
  {
    v10 = GetLastError();
    sub_10001B70((wchar_t *)L"Can't open file(RestoreMbr) : %08X", v10);
    CloseHandle(hObject);
    sub_10002C10((int)&v32);
    return 0;
  }
  if ( !GetFileSizeEx(FileW, &FileSize) || FileSize.HighPart != 0 )
  {
    v20 = GetLastError();
    sub_10001B70((wchar_t *)L"Can't read bootrom file size(RestoreMbr) : %08X", v20);
    goto LABEL_32;
  }
  v11 = operator new(0x1Cu);
  v22 = v11;
  LOBYTE(v35) = 1;
  if ( v11 != nullptr )
    v12 = sub_10001180(v11, FileSize.LowPart);
  else
    v12 = nullptr;
  LOBYTE(v35) = 0;
  v22 = nullptr;
  v23 = nullptr;
  sub_1000BEC0(&v22, v12);
  LOBYTE(v35) = 2;
  NewFilePointer.QuadPart = 0;
  if ( SetFilePointerEx(v9, 0, &NewFilePointer, 0) )
  {
    v14 = v22;
    v15 = v22[5] - v22[4];
    if ( v15 == 0 )
      _invalid_parameter_noinfo();
    if ( !ReadFile(v9, (LPVOID)v14[4], v15, (LPDWORD)&liDistanceToMove.HighPart, nullptr) )
    {
      v16 = GetLastError();
      sub_10001B70((wchar_t *)L"Can't read Disk(RestoreMbr) : %08X", v16);
      LOBYTE(v35) = 0;
      sub_10004100((int)&v22);
      goto LABEL_32;
    }
    NewFilePointer.QuadPart = liDistanceToMove.LowPart;
    if ( SetFilePointerEx(hObject, (LARGE_INTEGER)liDistanceToMove.LowPart, &NewFilePointer, 0) )
    {
      v17 = v14[5] - v14[4];
      if ( v17 == 0 )
        _invalid_parameter_noinfo();
      if ( WriteFile(
             hObject,
             (LPCVOID)(v14[4] + liDistanceToMove.LowPart),
             v17 - liDistanceToMove.LowPart,
             (LPDWORD)&liDistanceToMove.HighPart,
             nullptr) )
      {
        LOBYTE(v35) = 0;
        v19 = v23;
        v21 = 1;
        if ( v23 != nullptr && _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 0 )
        {
          (**(void (__thiscall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 0 )
            (*(void (__thiscall **)(volatile signed __int32 *))(*v19 + 4))(v19);
        }
      }
      else
      {
        v18 = GetLastError();
        sub_10001B70((wchar_t *)L"Can't  Write File(RestoreMbr) : %08X", v18);
        LOBYTE(v35) = 0;
        sub_10004100((int)&v22);
      }
      goto LABEL_32;
    }
  }
  v13 = GetLastError();
  sub_10001B70((wchar_t *)L"Can't move file pointer(RestoreMbr) : %08X", v13);
  LOBYTE(v35) = 0;
  sub_10004100((int)&v22);
LABEL_32:
  CloseHandle(v9);
  CloseHandle(hObject);
  sub_10002C10((int)&v32);
  return v21;
}

// Address: 0x1000A9C0
void __stdcall sub_1000A9C0(_DWORD *a1)
{
  const WCHAR *v1; // eax
  const WCHAR *v2; // edi
  const WCHAR *v3; // eax
  DWORD LastError; // eax
  _BYTE v5[4]; // [esp+10h] [ebp-234h] BYREF
  LPCWSTR lpFileName[5]; // [esp+14h] [ebp-230h] BYREF
  unsigned int v7; // [esp+28h] [ebp-21Ch]
  WCHAR TempFileName[260]; // [esp+2Ch] [ebp-218h] BYREF
  int v9; // [esp+240h] [ebp-4h]

  sub_100039D0(L"bkupmbr.bin", (int)v5, a1 + 152);
  v9 = 0;
  v1 = lpFileName[0];
  if ( v7 < 8 )
    v1 = (const WCHAR *)lpFileName;
  if ( GetFileAttributesW(v1) != -1 )
  {
    if ( a1[158] < 8u )
      v2 = (const WCHAR *)(a1 + 153);
    else
      v2 = (const WCHAR *)a1[153];
    if ( GetTempFileNameW(v2, L"mbr", 0, TempFileName) != 0 )
    {
      v3 = lpFileName[0];
      if ( v7 < 8 )
        v3 = (const WCHAR *)lpFileName;
      MoveFileExW(v3, TempFileName, 1u);
    }
    else
    {
      LastError = GetLastError();
      sub_10001B70((wchar_t *)L"Can't change backup mbr file(MbrBackup) : %08X", LastError);
    }
  }
  if ( v7 >= 8 )
    operator delete((void *)lpFileName[0]);
}

// Address: 0x1000AAE0
char sub_1000AAE0()
{
  char v0; // bl
  WCHAR FileName[260]; // [esp+8h] [ebp-20Ch] BYREF

  v0 = 67;
  while ( 1 )
  {
    swprintf_s(FileName, 0x104u, L"%c:\\GRLDR", v0);
    if ( GetFileAttributesW(FileName) != -1 )
      break;
    if ( ++v0 > 90 )
      return 0;
  }
  return 1;
}

// Address: 0x1000AB60
unsigned int __fastcall sub_1000AB60(HANDLE hFile, char *lpBuffer)
{
  const char *v4; // eax
  char *v5; // ecx
  char v6; // bl
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int result; // eax
  int i; // ecx
  unsigned int v11; // ecx
  LARGE_INTEGER NewFilePointer; // [esp+10h] [ebp-41Ch] BYREF
  DWORD NumberOfBytesRead; // [esp+1Ch] [ebp-410h] BYREF
  _DWORD Buffer[257]; // [esp+20h] [ebp-40Ch] BYREF

  v4 = "HDD-SHERIFF V9.0";
  v5 = lpBuffer + 6;
  v6 = 0;
  v7 = 16;
  v8 = v5 - "HDD-SHERIFF V9.0";
  while ( *(_DWORD *)&v4[v8] == *(_DWORD *)v4 )
  {
    v7 -= 4;
    v4 += 4;
    if ( v7 < 4 )
    {
      v6 = 1;
      break;
    }
  }
  memset(&Buffer[128], 0, 0x200u);
  NewFilePointer.QuadPart = 512;
  result = SetFilePointerEx(hFile, (LARGE_INTEGER)512LL, &NewFilePointer, 0);
  if ( result != 0 )
  {
    result = ReadFile(hFile, Buffer, 0x200u, &NumberOfBytesRead, nullptr);
    if ( result != 0 )
    {
      result = 32;
      for ( i = 0; Buffer[i] == Buffer[i + 128]; ++i )
      {
        result -= 4;
        if ( result < 4 )
        {
          if ( v6 == 0 )
          {
            NewFilePointer.QuadPart = 512;
            result = SetFilePointerEx(hFile, (LARGE_INTEGER)512LL, &NewFilePointer, 0);
            if ( result != 0 )
              return WriteFile(hFile, lpBuffer, 0x200u, &NumberOfBytesRead, nullptr);
          }
          return result;
        }
      }
      if ( v6 != 0 )
      {
        result = 43605;
        if ( HIWORD(Buffer[127]) == 0xAA55 )
        {
          result = (unsigned int)&Buffer[111] + 2;
          v11 = 64;
          while ( *(_DWORD *)(lpBuffer + 446 - ((char *)&Buffer[111] + 2) + result) == *(_DWORD *)result )
          {
            v11 -= 4;
            result += 4;
            if ( v11 < 4 )
            {
              Buffer[110] = *((_DWORD *)lpBuffer + 110);
              qmemcpy(lpBuffer, Buffer, 512);
              return result;
            }
          }
        }
      }
    }
  }
  return result;
}

// Address: 0x1000ACC0
_DWORD *__usercall sub_1000ACC0@<eax>(int *a1@<eax>, _DWORD *a2@<esi>)
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

// Address: 0x1000AD20
void __usercall sub_1000AD20(int a1@<ecx>, int a2@<esi>)
{
  void *v2; // [esp-4h] [ebp-8h]

  if ( *(_DWORD *)(a2 + 12) != 0 )
  {
    sub_1000C070(a1);
    operator delete(*(void **)(a2 + 12));
  }
  v2 = *(void **)a2;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  operator delete(v2);
}

// Address: 0x1000AD70
int __usercall sub_1000AD70@<eax>(unsigned int a1@<edi>, int a2@<esi>)
{
  if ( a1 >= (*(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 12)) / 28 )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(a2 + 12) + 28 * a1;
}

// Address: 0x1000ADB0
int __userpurge sub_1000ADB0@<eax>(_DWORD *a1@<ebx>, int a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // esi
  unsigned int v4; // edi
  int result; // eax
  int v6; // [esp+10h] [ebp-8h] BYREF

  v2 = a1[3];
  if ( v2 != 0 )
    v3 = (int)(a1[5] - v2) / 28;
  else
    v3 = 0;
  v4 = a1[4];
  if ( (int)(v4 - v2) / 28 >= v3 )
  {
    if ( v2 > v4 )
      _invalid_parameter_noinfo();
    return sub_1000AF60(&v6, a2, *a1, v4);
  }
  else
  {
    LOBYTE(v6) = 0;
    result = sub_1000BF90(v4, a2);
    a1[4] = v4 + 28;
  }
  return result;
}

// Address: 0x1000AE50
int __usercall sub_1000AE50@<eax>(int a1@<ebx>, _DWORD *a2@<edi>)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // esi
  int result; // eax
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = a2[3];
  if ( v2 != 0 )
    v3 = (int)(a2[5] - v2) >> 3;
  else
    v3 = 0;
  v4 = a2[4];
  if ( (int)(v4 - v2) >> 3 >= v3 )
  {
    if ( v2 > v4 )
      _invalid_parameter_noinfo();
    return sub_1000B070(v6, a1, *a2, v4);
  }
  else
  {
    LOBYTE(v6[0]) = 0;
    result = sub_1000C030(v6[0], v6[0]);
    a2[4] = v4 + 8;
  }
  return result;
}

// Address: 0x1000AEC0
_DWORD *__stdcall sub_1000AEC0(_DWORD *a1)
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

// Address: 0x1000AF20
void __usercall sub_1000AF20(int a1@<esi>)
{
  void *v1; // [esp-4h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 12) != 0 )
    operator delete(*(void **)(a1 + 12));
  v1 = *(void **)a1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  operator delete(v1);
}

// Address: 0x1000AF60
_DWORD *__userpurge sub_1000AF60@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // edi
  int v7; // edi
  unsigned int v8; // ebx
  _DWORD *v9; // esi
  _DWORD *v10; // ebp
  int v11; // eax
  unsigned int v12; // edi
  int v13; // esi

  v6 = a1[3];
  if ( (int)(a1[4] - v6) / 28 != 0 )
  {
    if ( v6 > a1[4] )
      _invalid_parameter_noinfo();
    if ( a4 == 0 || a4 != *a1 )
      _invalid_parameter_noinfo();
    v7 = (int)(a5 - v6) / 28;
  }
  else
  {
    v7 = 0;
  }
  sub_1000B260(a3, a4, a5);
  v8 = a1[3];
  if ( v8 > a1[4] )
    _invalid_parameter_noinfo();
  v9 = (_DWORD *)*a1;
  v10 = v9;
  if ( v9 != nullptr )
  {
    v11 = *v9;
  }
  else
  {
    _invalid_parameter_noinfo();
    v11 = 0;
  }
  v12 = v8 + 28 * v7;
  if ( v12 > *(_DWORD *)(v11 + 16) || (v9 == nullptr ? (v13 = 0) : (v13 = *v9), v12 < *(_DWORD *)(v13 + 12)) )
    _invalid_parameter_noinfo();
  a2[1] = v12;
  *a2 = v10;
  return a2;
}

// Address: 0x1000B040
int __usercall sub_1000B040@<eax>(int a1@<edx>, int a2@<edi>, int a3@<esi>)
{
  sub_1000BF90(a2, a1);
  return a2 + 28 * a3;
}

// Address: 0x1000B070
_DWORD *__userpurge sub_1000B070@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  int v8; // ebx
  unsigned int v9; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // ebp
  int v12; // eax
  unsigned int v13; // edi
  int v14; // esi

  v6 = a1[4];
  v7 = a1[3];
  if ( ((v6 - v7) & 0xFFFFFFF8) != 0 )
  {
    if ( v7 > v6 )
      _invalid_parameter_noinfo();
    if ( a4 == 0 || a4 != *a1 )
      _invalid_parameter_noinfo();
    v8 = (int)(a5 - v7) >> 3;
  }
  else
  {
    v8 = 0;
  }
  sub_1000B640(a3, a4, a5);
  v9 = a1[3];
  if ( v9 > a1[4] )
    _invalid_parameter_noinfo();
  v10 = (_DWORD *)*a1;
  v11 = v10;
  if ( v10 != nullptr )
  {
    v12 = *v10;
  }
  else
  {
    _invalid_parameter_noinfo();
    v12 = 0;
  }
  v13 = v9 + 8 * v8;
  if ( v13 > *(_DWORD *)(v12 + 16) || (v10 == nullptr ? (v14 = 0) : (v14 = *v10), v13 < *(_DWORD *)(v14 + 12)) )
    _invalid_parameter_noinfo();
  a2[1] = v13;
  *a2 = v11;
  return a2;
}

// Address: 0x1000B120
_DWORD *__userpurge sub_1000B120@<eax>(_DWORD *a1@<ebx>, _DWORD *a2@<edi>, int a3, unsigned int a4, int a5, char *a6)
{
  unsigned int v6; // eax
  char *v7; // esi
  char *v8; // edx
  char *v9; // ecx
  char *v10; // ebp
  char *v11; // eax
  int v12; // edx

  *a1 = 0;
  if ( a2 == nullptr || (v6 = a4, a2[3] > a4) || a4 > a2[4] )
  {
    _invalid_parameter_noinfo();
    v6 = a4;
  }
  v7 = a6;
  *a1 = *a2;
  a1[1] = v6;
  if ( a2[3] > (unsigned int)a6 || (unsigned int)a6 > a2[4] )
  {
    _invalid_parameter_noinfo();
    v7 = a6;
  }
  if ( *a1 == 0 || *a1 != *a2 )
    _invalid_parameter_noinfo();
  v8 = (char *)a1[1];
  if ( v8 != v7 )
  {
    v9 = (char *)a2[4];
    v10 = &v8[8 * ((v9 - v7) >> 3)];
    v11 = v7;
    if ( v7 != v9 )
    {
      v12 = v8 - v7;
      do
      {
        *(_DWORD *)&v11[v12] = *(_DWORD *)v11;
        *(_DWORD *)&v11[v12 + 4] = *((_DWORD *)v11 + 1);
        v11 += 8;
      }
      while ( v11 != v9 );
    }
    a2[4] = v10;
  }
  return a1;
}

// Address: 0x1000B1B0
_DWORD *__userpurge sub_1000B1B0@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  _DWORD *v10; // esi
  _DWORD *v11; // ebp
  int v12; // eax
  unsigned int v13; // edi
  int v14; // esi

  v6 = a1[4];
  v7 = a1[3];
  if ( ((v6 - v7) & 0xFFFFFFE0) != 0 )
  {
    if ( v7 > v6 )
      _invalid_parameter_noinfo();
    if ( a4 == 0 || a4 != *a1 )
      _invalid_parameter_noinfo();
    v8 = (int)(a5 - v7) >> 5;
  }
  else
  {
    v8 = 0;
  }
  sub_1000B8F0(a1, a3, a4, a5);
  v9 = a1[3];
  if ( v9 > a1[4] )
    _invalid_parameter_noinfo();
  v10 = (_DWORD *)*a1;
  v11 = v10;
  if ( v10 != nullptr )
  {
    v12 = *v10;
  }
  else
  {
    _invalid_parameter_noinfo();
    v12 = 0;
  }
  v13 = v9 + 32 * v8;
  if ( v13 > *(_DWORD *)(v12 + 16) || (v10 == nullptr ? (v14 = 0) : (v14 = *v10), v13 < *(_DWORD *)(v14 + 12)) )
    _invalid_parameter_noinfo();
  a2[1] = v13;
  *a2 = v11;
  return a2;
}

// Address: 0x1000B260
void __thiscall sub_1000B260(int this, _DWORD *a2, int a3, int a4)
{
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // esi
  char *v10; // eax
  int v11; // ecx
  int v12; // eax
  bool v13; // zf
  int v14; // edx
  char *v15; // eax
  _BYTE *v16; // esi
  _DWORD v17[6]; // [esp+0h] [ebp-74h] BYREF
  _DWORD *v18; // [esp+18h] [ebp-5Ch]
  int v19; // [esp+1Ch] [ebp-58h]
  void *v20; // [esp+20h] [ebp-54h]
  int v21; // [esp+24h] [ebp-50h]
  _BYTE v22[28]; // [esp+28h] [ebp-4Ch] BYREF
  _BYTE v23[28]; // [esp+44h] [ebp-30h] BYREF
  _DWORD *v24; // [esp+64h] [ebp-10h]
  int v25; // [esp+70h] [ebp-4h]

  v24 = v17;
  v18 = a2;
  v5 = *(_DWORD *)(this + 12);
  v21 = this;
  if ( v5 != 0 )
    v6 = (*(_DWORD *)(this + 20) - v5) / 28;
  else
    v6 = 0;
  v7 = (*(_DWORD *)(this + 16) - *(_DWORD *)(this + 12)) / 28;
  if ( v7 == 153391689 )
    sub_1000B5C0(0);
  v8 = v7 + 1;
  if ( v6 >= v8 )
  {
    if ( (*(_DWORD *)(this + 16) - a4) / 28 != 0 )
    {
      sub_10003B10((int)v22, v18);
      v25 = 5;
      *(_DWORD *)(this + 16) = sub_1000BC40(*(_DWORD *)(this + 16) - 28, *(_DWORD *)(this + 16));
      sub_1000BC90();
      sub_1000BC70();
      v16 = v22;
    }
    else
    {
      sub_10003B10((int)v23, v18);
      v25 = 2;
      sub_1000BC40(a4, a4 + 28);
      LOBYTE(v25) = 3;
      sub_1000B040((int)v23, *(_DWORD *)(this + 16), 1 - (*(_DWORD *)(this + 16) - a4) / 28);
      v25 = 2;
      *(_DWORD *)(this + 16) += 28;
      sub_1000BC70();
      v16 = v23;
    }
    sub_10002C10((int)v16);
  }
  else
  {
    if ( 153391689 - (v6 >> 1) >= v6 )
      v9 = (v6 >> 1) + v6;
    else
      v9 = 0;
    if ( v9 < v8 )
      v9 = v8;
    if ( v9 != 0 )
      v10 = (char *)sub_1000BCE0(v9);
    else
      v10 = (char *)operator new(0);
    v11 = a4 - *(_DWORD *)(this + 12);
    v20 = v10;
    v25 = 0;
    v19 = 0;
    LOBYTE(v21) = 0;
    v17[5] = v11 / 28;
    sub_1000BF90(&v10[28 * (v11 / 28)], v18);
    LOBYTE(v21) = 0;
    v19 = 1;
    sub_1000C0C0(a4, v21);
    v12 = *(_DWORD *)(this + 16);
    LOBYTE(v21) = 0;
    v19 = 2;
    sub_1000C0C0(v12, v21);
    v13 = *(_DWORD *)(this + 12) == 0;
    v14 = (*(_DWORD *)(this + 16) - *(_DWORD *)(this + 12)) / 28 + 1;
    v21 = v14;
    if ( !v13 )
    {
      sub_1000C070(v21);
      operator delete(*(void **)(this + 12));
      v14 = v21;
    }
    v15 = (char *)v20;
    *(_DWORD *)(this + 20) = (char *)v20 + 28 * v9;
    *(_DWORD *)(this + 16) = &v15[28 * v14];
    *(_DWORD *)(this + 12) = v15;
  }
}

// Address: 0x1000B5C0
void __fastcall __noreturn sub_1000B5C0(int a1, int a2)
{
  _BYTE v2[20]; // [esp+4h] [ebp-50h] BYREF
  int v3; // [esp+18h] [ebp-3Ch]
  int v4; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v4 = 15;
  v3 = 0;
  v2[4] = 0;
  sub_10001A30((int)v2, a2, "vector<T> too long", (char *)0x12);
  pExceptionObject[12] = 0;
  sub_10001050(pExceptionObject, (int)v2);
  pExceptionObject[0] = &std::length_error::`vftable';
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x1000B640
char *__thiscall sub_1000B640(int this, int *a2, int a3, char *a4)
{
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  char *v11; // eax
  char *v12; // ebx
  int v13; // eax
  int v14; // edi
  char *result; // eax
  int v16; // ebx
  int v17; // ecx
  void *v18; // edx
  int v19; // ecx
  int v20; // [esp-4h] [ebp-38h]
  int v21; // [esp+0h] [ebp-34h] BYREF
  int v22; // [esp+10h] [ebp-24h]
  void *v23; // [esp+14h] [ebp-20h]
  int v24; // [esp+18h] [ebp-1Ch]
  unsigned int v25; // [esp+1Ch] [ebp-18h]
  int *v26; // [esp+24h] [ebp-10h]
  int v27; // [esp+30h] [ebp-4h]

  v26 = &v21;
  v5 = *(_DWORD *)(this + 12);
  if ( v5 != 0 )
    v6 = (*(_DWORD *)(this + 20) - v5) >> 3;
  else
    v6 = 0;
  v7 = *(_DWORD *)(this + 16);
  v8 = (v7 - v5) >> 3;
  if ( v8 == 0x1FFFFFFF )
    sub_1000BB60();
  v9 = v8 + 1;
  if ( v6 >= v9 )
  {
    if ( (v7 - (int)a4) >> 3 != 0 )
    {
      v19 = *a2;
      v20 = *(_DWORD *)(this + 16);
      v23 = (void *)a2[1];
      v22 = v19;
      *(_DWORD *)(this + 16) = sub_1000BD40(v7 - 8, v20);
      sub_1000BD70(v7 - 8, v7);
      result = a4;
      do
      {
        *(_DWORD *)result = v22;
        *((_DWORD *)result + 1) = v23;
        result += 8;
      }
      while ( result != a4 + 8 );
    }
    else
    {
      v16 = *a2;
      v23 = (void *)a2[1];
      v22 = v16;
      sub_1000BD40(a4, a4 + 8);
      v27 = 2;
      LOBYTE(a2) = 0;
      sub_1000C030(a2, a2);
      *(_DWORD *)(this + 16) += 8;
      result = a4;
      v17 = *(_DWORD *)(this + 16) - 8;
      if ( a4 != (char *)v17 )
      {
        do
        {
          v18 = v23;
          *(_DWORD *)result = v16;
          *((_DWORD *)result + 1) = v18;
          result += 8;
        }
        while ( result != (char *)v17 );
      }
    }
  }
  else
  {
    if ( 0x1FFFFFFF - (v6 >> 1) >= v6 )
    {
      v10 = (v6 >> 1) + v6;
      v25 = v10;
    }
    else
    {
      v25 = 0;
      v10 = 0;
    }
    if ( v10 < v9 )
    {
      v25 = v9;
      v10 = v9;
    }
    v11 = (char *)sub_1000B890(v10);
    v27 = 0;
    LOBYTE(v24) = 0;
    v12 = v11;
    v23 = v11;
    sub_1000C030(a2, v24);
    LOBYTE(a2) = 0;
    sub_1000C240(a2, a2);
    LOBYTE(a2) = 0;
    sub_1000C240(a2, a2);
    v13 = *(_DWORD *)(this + 12);
    v14 = ((*(_DWORD *)(this + 16) - v13) >> 3) + 1;
    if ( v13 != 0 )
      operator delete(*(void **)(this + 12));
    result = &v12[8 * v25];
    *(_DWORD *)(this + 20) = result;
    *(_DWORD *)(this + 16) = &v12[8 * v14];
    *(_DWORD *)(this + 12) = v12;
  }
  return result;
}

// Address: 0x1000B890
void *__fastcall sub_1000B890(unsigned int a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 != 0 )
  {
    if ( 0xFFFFFFFF / a1 < 8 )
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
  return operator new(8 * a1);
}

// Address: 0x1000B8F0
char *__stdcall sub_1000B8F0(int a1, const void *a2, int a3, char *a4)
{
  int v4; // ecx
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // edi
  void *v10; // ecx
  int v11; // eax
  int v12; // esi
  char *result; // eax
  char *v14; // esi
  const void *v15; // esi
  int v16; // esi
  int v17; // edx
  char *v18; // edi
  char *v19; // edi
  _QWORD v20[6]; // [esp+0h] [ebp-48h] BYREF
  int v21; // [esp+30h] [ebp-18h]
  void *v22; // [esp+34h] [ebp-14h]
  _QWORD *v23; // [esp+38h] [ebp-10h]
  int v24; // [esp+44h] [ebp-4h]

  v23 = v20;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 != 0 )
    v5 = (*(_DWORD *)(a1 + 20) - v4) >> 5;
  else
    v5 = 0;
  v6 = *(_DWORD *)(a1 + 16);
  v7 = (v6 - v4) >> 5;
  if ( v7 == 0x7FFFFFF )
    sub_1000BB60();
  v8 = v7 + 1;
  if ( v5 >= v8 )
  {
    v15 = a2;
    LOBYTE(a2) = 0;
    qmemcpy(&v20[2], v15, 0x20u);
    if ( (v6 - (int)a4) >> 5 != 0 )
    {
      *(_DWORD *)(a1 + 16) = sub_1000C260(a1, a2);
      sub_1000BDB0(v6);
      result = a4;
      do
      {
        v19 = result;
        result += 32;
        qmemcpy(v19, &v20[2], 32);
      }
      while ( result != a4 + 32 );
    }
    else
    {
      sub_1000C260(a1, a2);
      v24 = 2;
      v16 = a1;
      LOBYTE(a1) = 0;
      sub_1000C050(a1, a1);
      *(_DWORD *)(v16 + 16) += 32;
      result = a4;
      v17 = *(_DWORD *)(v16 + 16) - 32;
      if ( a4 != (char *)v17 )
      {
        do
        {
          v18 = result;
          result += 32;
          qmemcpy(v18, &v20[2], 32);
        }
        while ( result != (char *)v17 );
      }
    }
  }
  else
  {
    if ( 0x7FFFFFF - (v5 >> 1) >= v5 )
      v9 = (v5 >> 1) + v5;
    else
      v9 = 0;
    if ( v9 < v8 )
      v9 = v8;
    v10 = (void *)sub_1000BBE0(v9);
    v24 = 0;
    v22 = v10;
    LOBYTE(v21) = 0;
    sub_1000C050(a1, v21);
    LOBYTE(a2) = 0;
    sub_1000C260(a1, a2);
    LOBYTE(a2) = 0;
    sub_1000C260(a1, a2);
    v11 = *(_DWORD *)(a1 + 12);
    v12 = ((*(_DWORD *)(a1 + 16) - v11) >> 5) + 1;
    if ( v11 != 0 )
      operator delete(*(void **)(a1 + 12));
    result = (char *)v22;
    v14 = (char *)v22 + 32 * v12;
    *(_DWORD *)(a1 + 20) = (char *)v22 + 32 * v9;
    *(_DWORD *)(a1 + 16) = v14;
    *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}

// Address: 0x1000BB60
void __fastcall __noreturn sub_1000BB60(int a1, int a2)
{
  _BYTE v2[20]; // [esp+8h] [ebp-54h] BYREF
  int v3; // [esp+1Ch] [ebp-40h]
  int v4; // [esp+20h] [ebp-3Ch]
  _DWORD pExceptionObject[14]; // [esp+24h] [ebp-38h] BYREF

  v4 = 15;
  v3 = 0;
  v2[4] = 0;
  sub_10001A30((int)v2, a2, "vector<T> too long", (char *)0x12);
  pExceptionObject[13] = 0;
  sub_10001050(pExceptionObject, (int)v2);
  pExceptionObject[0] = &std::length_error::`vftable';
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x1000BBE0
void *__fastcall sub_1000BBE0(unsigned int a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 != 0 )
  {
    if ( 0xFFFFFFFF / a1 < 0x20 )
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
  return operator new(32 * a1);
}

// Address: 0x1000BC40
int __fastcall sub_1000BC40(int a1, int a2, int a3, int a4)
{
  return sub_1000C0C0(a2, a4);
}

// Address: 0x1000BC70
int __usercall sub_1000BC70@<eax>(int result@<eax>, _DWORD *a2@<ebx>, int a3@<edi>)
{
  int i; // esi

  for ( i = result; i != a3; i += 28 )
    result = sub_100032E0(a2, i, 0, 0xFFFFFFFF);
  return result;
}

// Address: 0x1000BC90
int __usercall sub_1000BC90@<eax>(int a1@<eax>, int a2@<ebx>, int a3@<edi>)
{
  sub_1000C1B0(a2, a3);
  return a3 - 28 * ((a1 - a2) / 28);
}

// Address: 0x1000BCE0
void *__fastcall sub_1000BCE0(unsigned int a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( 0xFFFFFFFF / a1 < 0x1C )
  {
    v2 = nullptr;
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&v2);
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  return operator new(28 * a1);
}

// Address: 0x1000BD40
int __thiscall sub_1000BD40(void *this, int a2, int a3)
{
  LOBYTE(this) = 0;
  return sub_1000C240(a3, this);
}

// Address: 0x1000BD70
int __usercall sub_1000BD70@<eax>(int a1@<edx>, int a2@<ecx>, int a3@<esi>)
{
  int result; // eax
  int v4; // edx
  int v5; // edi

  result = a1 - 8 * ((a2 - a3) >> 3);
  if ( a3 != a2 )
  {
    v4 = a1 - a2;
    do
    {
      v5 = *(_DWORD *)(a2 - 8);
      a2 -= 8;
      *(_DWORD *)(v4 + a2) = v5;
      *(_DWORD *)(v4 + a2 + 4) = *(_DWORD *)(a2 + 4);
    }
    while ( a2 != a3 );
  }
  return result;
}

// Address: 0x1000BDB0
int __usercall sub_1000BDB0@<eax>(char *a1@<edx>, char *a2@<ebx>, int a3)
{
  int result; // eax
  int v4; // ebp

  result = a3 - 32 * ((a1 - a2) >> 5);
  if ( a2 != a1 )
  {
    v4 = a3 - (_DWORD)a1;
    do
    {
      a1 -= 32;
      qmemcpy(&a1[v4], a1, 0x20u);
    }
    while ( a1 != a2 );
  }
  return result;
}

// Address: 0x1000BDF0
_DWORD *__stdcall sub_1000BDF0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<registry>::`vftable';
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

// Address: 0x1000BEC0
_DWORD *__stdcall sub_1000BEC0(int a1, int a2)
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

// Address: 0x1000BF90
int __cdecl sub_1000BF90(int a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int result; // eax
  _DWORD v6[6]; // [esp+0h] [ebp-24h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  v6[5] = v6;
  v3 = v2;
  v4 = a1;
  v6[4] = a1;
  v7 = 0;
  while ( v3 != 0 )
  {
    LOBYTE(v7) = 1;
    if ( v4 != 0 )
    {
      *(_DWORD *)(v4 + 24) = 7;
      *(_DWORD *)(v4 + 20) = 0;
      *(_WORD *)(v4 + 4) = 0;
      result = sub_100032E0(a2, v4, 0, 0xFFFFFFFF);
    }
    --v3;
    v4 += 28;
    LOBYTE(v7) = 0;
  }
  return result;
}

// Address: 0x1000C030
_DWORD *__usercall sub_1000C030@<eax>(_DWORD *result@<eax>, _DWORD *a2@<edx>, int a3@<ecx>)
{
  for ( ; a3 != 0; result += 2 )
  {
    if ( result != nullptr )
    {
      *result = *a2;
      result[1] = a2[1];
    }
    --a3;
  }
  return result;
}

// Address: 0x1000C050
char *__usercall sub_1000C050@<eax>(char *result@<eax>, int a2@<edx>, const void *a3@<ebx>)
{
  for ( ; a2 != 0; result += 32 )
  {
    if ( result != nullptr )
      qmemcpy(result, a3, 0x20u);
    --a2;
  }
  return result;
}

// Address: 0x1000C070
void __usercall sub_1000C070(int a1@<eax>, int a2@<edi>)
{
  int i; // esi

  for ( i = a1; i != a2; i += 28 )
  {
    if ( *(_DWORD *)(i + 24) >= 8u )
      operator delete(*(void **)(i + 4));
    *(_DWORD *)(i + 24) = 7;
    *(_DWORD *)(i + 20) = 0;
    *(_WORD *)(i + 4) = 0;
  }
}

// Address: 0x1000C0B0
int __thiscall sub_1000C0B0(_DWORD *this)
{
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  v1 = (int (__thiscall ***)(_DWORD, int))*(this + 1);
  if ( v1 != nullptr )
    return (**v1)(v1, 1);
  return result;
}

// Address: 0x1000C0C0
int __fastcall sub_1000C0C0(int a1, int a2, int a3)
{
  int v3; // esi
  _DWORD v6[5]; // [esp+0h] [ebp-48h] BYREF
  int v7; // [esp+14h] [ebp-34h]
  int v8; // [esp+18h] [ebp-30h] BYREF
  void *v9; // [esp+1Ch] [ebp-2Ch]
  int v10; // [esp+2Ch] [ebp-1Ch]
  unsigned int v11; // [esp+30h] [ebp-18h]
  _DWORD *v12; // [esp+38h] [ebp-10h]
  int v13; // [esp+44h] [ebp-4h]

  v12 = v6;
  v3 = a2;
  v7 = a2;
  v6[4] = a2;
  v11 = 7;
  v10 = 0;
  LOWORD(v9) = 0;
  v13 = 1;
  while ( a1 != a3 )
  {
    LOBYTE(v13) = 2;
    if ( v3 != 0 )
    {
      *(_DWORD *)(v3 + 24) = 7;
      *(_DWORD *)(v3 + 20) = 0;
      *(_WORD *)(v3 + 4) = 0;
      sub_100032E0(&v8, v3, 0, 0xFFFFFFFF);
    }
    LOBYTE(v13) = 1;
    sub_1000C290(v3);
    v3 += 28;
    v7 = v3;
    a1 += 28;
  }
  if ( v11 >= 8 )
    operator delete(v9);
  return v3;
}

// Address: 0x1000C1B0
_DWORD *__cdecl sub_1000C1B0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ecx
  _DWORD *result; // eax
  int v4; // edx
  int v5; // esi
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  int v9; // edx
  int v10; // esi
  int v11; // edx

  result = a2;
  while ( v2 != a1 )
  {
    v2 -= 7;
    result -= 7;
    if ( result != v2 )
    {
      v4 = result[1];
      v5 = result[2];
      v6 = result[3];
      v7 = result[4];
      result[1] = v2[1];
      result[2] = v2[2];
      result[3] = v2[3];
      result[4] = v2[4];
      v2[1] = v4;
      v2[2] = v5;
      v8 = v2[5];
      v2[3] = v6;
      v2[4] = v7;
      v9 = result[5];
      result[5] = v8;
      v10 = v2[6];
      v2[5] = v9;
      v11 = result[6];
      result[6] = v10;
      v2[6] = v11;
    }
  }
  return result;
}

// Address: 0x1000C240
_DWORD *__usercall sub_1000C240@<eax>(_DWORD *result@<eax>, _DWORD *a2@<edx>, _DWORD *a3@<ecx>)
{
  for ( ; a3 != a2; result += 2 )
  {
    if ( result != nullptr )
    {
      *result = *a3;
      result[1] = a3[1];
    }
    a3 += 2;
  }
  return result;
}

// Address: 0x1000C260
char *__usercall sub_1000C260@<eax>(char *result@<eax>, char *a2@<edx>, char *a3@<ebx>)
{
  for ( ; a2 != a3; result += 32 )
  {
    if ( result != nullptr )
      qmemcpy(result, a2, 0x20u);
    a2 += 32;
  }
  return result;
}

// Address: 0x1000C290
_DWORD *__thiscall sub_1000C290(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // esi
  int v10; // edx

  result = a2;
  if ( a2 != this )
  {
    v3 = a2[1];
    v4 = a2[4];
    v5 = a2[2];
    v6 = a2[3];
    a2[1] = *(this + 1);
    a2[2] = *(this + 2);
    a2[3] = *(this + 3);
    a2[4] = *(this + 4);
    *(this + 1) = v3;
    *(this + 2) = v5;
    v7 = *(this + 5);
    *(this + 3) = v6;
    *(this + 4) = v4;
    v8 = a2[5];
    a2[5] = v7;
    v9 = *(this + 6);
    *(this + 5) = v8;
    v10 = a2[6];
    a2[6] = v9;
    *(this + 6) = v10;
  }
  return result;
}

// Address: 0x1000C310
_DWORD *__stdcall sub_1000C310(_DWORD *a1, int a2, int a3, volatile signed __int32 *a4)
{
  volatile signed __int32 *v4; // eax
  volatile signed __int32 *v5; // edi
  volatile signed __int32 *v6; // edi

  *a1 = &registry::value::`vftable';
  a1[3] = 0;
  a1[2] = 0;
  a1[1] = a2;
  v4 = a4;
  if ( a4 != nullptr )
  {
    _InterlockedExchangeAdd(a4 + 2, 1u);
    v4 = a4;
  }
  v5 = (volatile signed __int32 *)a1[3];
  if ( v5 != nullptr )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
    v4 = a4;
  }
  a1[3] = a4;
  a1[2] = a3;
  if ( v4 != nullptr )
  {
    v6 = v4;
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
    }
  }
  return a1;
}

// Address: 0x1000C400
int __usercall sub_1000C400@<eax>(int a1@<eax>)
{
  int v1; // esi

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 0 )
    return 0;
  if ( *(_DWORD *)(v1 + 20) == *(_DWORD *)(v1 + 16) )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(v1 + 16);
}

// Address: 0x1000C420
_DWORD *__stdcall sub_1000C420(int a1, _DWORD *a2, LPCWSTR lpValueName)
{
  const WCHAR *v3; // ebp
  int *v4; // eax
  _DWORD *v5; // eax
  int v6; // esi
  volatile signed __int32 *v7; // esi
  _DWORD *v8; // ebp
  volatile signed __int32 *v9; // eax
  volatile signed __int32 *v10; // esi
  HKEY v12; // [esp-18h] [ebp-50h]
  const WCHAR *v13; // [esp-14h] [ebp-4Ch]
  _DWORD *v14; // [esp-8h] [ebp-40h] BYREF
  volatile signed __int32 *p_lpValueName; // [esp-4h] [ebp-3Ch]
  DWORD Type; // [esp+14h] [ebp-24h] BYREF
  int v17; // [esp+18h] [ebp-20h]
  int *v18; // [esp+1Ch] [ebp-1Ch]
  int v19; // [esp+20h] [ebp-18h] BYREF
  volatile signed __int32 *v20; // [esp+24h] [ebp-14h]
  int v21; // [esp+34h] [ebp-4h]

  v3 = lpValueName;
  p_lpValueName = (volatile signed __int32 *)&lpValueName;
  v14 = nullptr;
  v17 = 0;
  v13 = lpValueName;
  v12 = *(HKEY *)(a1 + 4);
  Type = 0;
  lpValueName = nullptr;
  if ( RegQueryValueExW(v12, v13, nullptr, &Type, nullptr, (LPDWORD)&lpValueName) != 0 )
  {
    a2[1] = 0;
    *a2 = 0;
  }
  else
  {
    v4 = (int *)operator new(0x1Cu);
    v18 = v4;
    v21 = 1;
    if ( v4 != nullptr )
      v5 = sub_10001180(v4, (int)(lpValueName + 1));
    else
      v5 = nullptr;
    LOBYTE(v21) = 0;
    v19 = 0;
    v20 = nullptr;
    sub_1000BEC0((int)&v19, (int)v5);
    v21 = 2;
    v6 = v19;
    if ( *(_DWORD *)(v19 + 20) == *(_DWORD *)(v19 + 16) )
      _invalid_parameter_noinfo();
    memset(*(void **)(v6 + 16), 0, (size_t)(lpValueName + 1));
    if ( *(_DWORD *)(v6 + 20) == *(_DWORD *)(v6 + 16) )
      _invalid_parameter_noinfo();
    if ( RegQueryValueExW(*(HKEY *)(a1 + 4), v3, nullptr, &Type, *(LPBYTE *)(v6 + 16), (LPDWORD)&lpValueName) != 0 )
    {
      LOBYTE(v21) = 0;
      v7 = v20;
      a2[1] = 0;
      *a2 = 0;
      v17 = 1;
      if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v7 + 4))(v7);
      }
    }
    else
    {
      v8 = operator new(0x10u);
      LOBYTE(v21) = 3;
      if ( v8 != nullptr )
      {
        v18 = (int *)&v14;
        sub_1000ACC0(&v19, &v14);
        v9 = sub_1000C310(v8, Type, (int)v14, p_lpValueName);
      }
      else
      {
        v9 = nullptr;
      }
      p_lpValueName = v9;
      LOBYTE(v21) = 2;
      v14 = a2;
      *a2 = 0;
      a2[1] = 0;
      sub_1000EB00(v14, p_lpValueName);
      LOBYTE(v21) = 0;
      v10 = v20;
      v17 = 1;
      if ( v20 != nullptr && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v10 + 4))(v10);
      }
    }
  }
  return a2;
}

// Address: 0x1000C620
int __userpurge sub_1000C620@<eax>(int a1@<ecx>, int a2@<esi>, LPCWSTR lpValueName)
{
  volatile signed __int32 *v4; // edi
  int v5; // edi
  const unsigned __int16 *v6; // eax
  HKEY v8; // [esp-18h] [ebp-70h]
  DWORD Type; // [esp+10h] [ebp-48h] BYREF
  int v10; // [esp+14h] [ebp-44h]
  DWORD cbData; // [esp+18h] [ebp-40h] BYREF
  int v12; // [esp+1Ch] [ebp-3Ch] BYREF
  volatile signed __int32 *v13; // [esp+20h] [ebp-38h]
  int v14; // [esp+24h] [ebp-34h]
  int v15; // [esp+28h] [ebp-30h] BYREF
  void *v16; // [esp+2Ch] [ebp-2Ch]
  int v17; // [esp+3Ch] [ebp-1Ch]
  unsigned int v18; // [esp+40h] [ebp-18h]
  int v19; // [esp+54h] [ebp-4h]

  v10 = 0;
  v8 = *(HKEY *)(a1 + 4);
  v14 = a2;
  Type = 0;
  cbData = 0;
  if ( RegQueryValueExW(v8, lpValueName, nullptr, &Type, nullptr, &cbData) != 0 || Type != 1 && Type != 2 )
  {
    *(_DWORD *)(a2 + 24) = 7;
    *(_DWORD *)(a2 + 20) = 0;
    *(_WORD *)(a2 + 4) = 0;
    return a2;
  }
  sub_1000C420(a1, &v12, lpValueName);
  v19 = 1;
  if ( v12 != 0 )
  {
    v5 = *(_DWORD *)(v12 + 8);
    if ( v5 != 0 )
    {
      if ( *(_DWORD *)(v5 + 20) == *(_DWORD *)(v5 + 16) )
        _invalid_parameter_noinfo();
      v6 = *(const unsigned __int16 **)(v5 + 16);
    }
    else
    {
      v6 = nullptr;
    }
    sub_10002BD0(v6, (int)&v15);
    LOBYTE(v19) = 2;
    *(_DWORD *)(a2 + 24) = 7;
    *(_DWORD *)(a2 + 20) = 0;
    *(_WORD *)(a2 + 4) = 0;
    sub_100032E0(&v15, a2, 0, 0xFFFFFFFF);
    v10 = 1;
    if ( v18 >= 8 )
      operator delete(v16);
    v18 = 7;
    LOBYTE(v19) = 0;
    v4 = v13;
    v17 = 0;
    LOWORD(v16) = 0;
    if ( v13 != nullptr && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
        goto LABEL_8;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 24) = 7;
    *(_DWORD *)(a2 + 20) = 0;
    *(_WORD *)(a2 + 4) = 0;
    LOBYTE(v19) = 0;
    v4 = v13;
    v10 = 1;
    if ( v13 != nullptr && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
LABEL_8:
        (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
    }
  }
  return a2;
}

// Address: 0x1000C7F0
char __thiscall sub_1000C7F0(HKEY *this, _DWORD *a2)
{
  int v3; // eax
  int v5; // esi
  unsigned __int16 *v6; // edi
  int v7; // ecx
  int v8; // eax
  unsigned __int16 *i; // ebp
  HKEY v10; // [esp-18h] [ebp-68h]
  DWORD Type; // [esp+14h] [ebp-3Ch] BYREF
  DWORD cbData; // [esp+18h] [ebp-38h] BYREF
  int v13[2]; // [esp+1Ch] [ebp-34h] BYREF
  int v14; // [esp+24h] [ebp-2Ch] BYREF
  void *v15; // [esp+28h] [ebp-28h]
  int v16; // [esp+38h] [ebp-18h]
  unsigned int v17; // [esp+3Ch] [ebp-14h]
  int v18; // [esp+4Ch] [ebp-4h]

  v10 = *(this + 1);
  Type = 0;
  cbData = 0;
  if ( RegQueryValueExW(v10, L"UpperFilters", nullptr, &Type, nullptr, &cbData) != 0 || Type != 7 )
    return 0;
  sub_1000C420((int)this, v13, L"UpperFilters");
  v18 = 0;
  v3 = v13[0];
  if ( v13[0] == 0 )
  {
    v18 = -1;
    sub_10004100((int)v13);
    return 0;
  }
  v5 = *(_DWORD *)(v13[0] + 8);
  if ( v5 != 0 )
  {
    if ( *(_DWORD *)(v5 + 20) == *(_DWORD *)(v5 + 16) )
    {
      _invalid_parameter_noinfo();
      v3 = v13[0];
    }
    v6 = *(unsigned __int16 **)(v5 + 16);
  }
  else
  {
    v6 = nullptr;
  }
  v7 = *(_DWORD *)(v3 + 8);
  if ( v7 != 0 )
    v8 = *(_DWORD *)(v7 + 20) - *(_DWORD *)(v7 + 16);
  else
    v8 = 0;
  for ( i = &v6[v8]; v6 < i; v6 += wcslen(v6) + 1 )
  {
    if ( *v6 == 0 )
      break;
    LOWORD(v15) = 0;
    v17 = 7;
    v16 = 0;
    sub_10003390(v6, &v14, wcslen(v6));
    LOBYTE(v18) = 1;
    sub_1000ADB0(a2, (int)&v14);
    LOBYTE(v18) = 0;
    if ( v17 >= 8 )
      operator delete(v15);
    LOWORD(v15) = 0;
    v17 = 7;
    v16 = 0;
  }
  v18 = -1;
  sub_10004100((int)v13);
  return 1;
}

// Address: 0x1000C990
volatile signed __int32 **__thiscall sub_1000C990(volatile signed __int32 **this, char a2)
{
  volatile signed __int32 *v3; // esi

  *this = (volatile signed __int32 *)&registry::value::`vftable';
  v3 = *(this + 3);
  if ( v3 != nullptr && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000C9F0
int __stdcall sub_1000C9F0(int a1)
{
  HMODULE ModuleHandleW; // eax
  HMODULE v2; // eax
  HMODULE v3; // edi
  BOOL (__stdcall *IsWow64Process)(HANDLE, PBOOL); // eax
  HANDLE CurrentProcess; // eax
  _DWORD v7[4]; // [esp+14h] [ebp-10h] BYREF

  *(_DWORD *)a1 = &sheriff_engine::Utility::`vftable';
  *(_DWORD *)(a1 + 28) = 7;
  *(_DWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 8) = 0;
  v7[3] = 0;
  *(_DWORD *)(a1 + 32) = 0;
  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( ModuleHandleW != nullptr )
    *(_DWORD *)(a1 + 32) = GetProcAddress(ModuleHandleW, "RtlGetVersion");
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  v2 = GetModuleHandleW(L"kernel32");
  v3 = v2;
  if ( v2 != nullptr )
  {
    IsWow64Process = (BOOL (__stdcall *)(HANDLE, PBOOL))GetProcAddress(v2, "IsWow64Process");
    *(_DWORD *)(a1 + 36) = IsWow64Process;
    v7[0] = 0;
    if ( IsWow64Process != nullptr )
    {
      CurrentProcess = GetCurrentProcess();
      if ( (*(int (__stdcall **)(HANDLE, _DWORD *))(a1 + 36))(CurrentProcess, v7) != 0 && v7[0] != 0 )
      {
        *(_DWORD *)(a1 + 40) = GetProcAddress(v3, "Wow64DisableWow64FsRedirection");
        *(_DWORD *)(a1 + 44) = GetProcAddress(v3, "Wow64RevertWow64FsRedirection");
      }
    }
  }
  return a1;
}

// Address: 0x1000CAD0
void **__thiscall sub_1000CAD0(void **this, char a2)
{
  *this = &sheriff_engine::Utility::`vftable';
  if ( (unsigned int)*(this + 7) >= 8 )
    operator delete(*(this + 2));
  *(this + 7) = (void *)7;
  *(this + 6) = nullptr;
  *((_WORD *)this + 4) = 0;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000CB20
int __thiscall sub_1000CB20(void *this)
{
  unsigned int v2; // eax
  int v4; // [esp+8h] [ebp-Ch] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [esp+Ch] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v2 = (*(int (__thiscall **)(void *, struct _FILETIME *, int))(*(_DWORD *)this + 4))(this, &SystemTimeAsFileTime, 8);
  srand(v2);
  v4 = rand();
  return (*(int (__thiscall **)(void *, int *, int))(*(_DWORD *)this + 4))(this, &v4, 4);
}

// Address: 0x1000CB70
int __stdcall sub_1000CB70(int a1, unsigned int a2)
{
  int result; // eax
  unsigned int v4; // esi
  unsigned __int8 v5; // al
  unsigned __int16 v6; // cx
  char v7; // al
  int i; // edi
  __int16 v9; // dx
  unsigned int v10; // [esp+8h] [ebp-4h]
  unsigned int v11; // [esp+8h] [ebp-4h]
  unsigned __int16 v12; // [esp+14h] [ebp+8h]

  result = -1;
  v4 = 0;
  v10 = -1;
  if ( a2 != 0 )
  {
    do
    {
      v5 = v10 ^ *(_BYTE *)(v4 + a1);
      v11 = v10 >> 8;
      v6 = v5;
      v7 = 0;
      v12 = 0;
      for ( i = 8; i != 0; --i )
      {
        v12 >>= 1;
        v9 = v6 & 1;
        v6 = (v6 >> 1) | ((v7 & 1) << 15);
        v7 = v12;
        if ( v9 != 0 )
        {
          v6 ^= 0x8320u;
          v7 = v12 ^ 0xB8;
          v12 ^= 0xEDB8u;
        }
      }
      LOWORD(v10) = v6 ^ v11;
      HIWORD(v10) = v12 ^ HIWORD(v11);
      ++v4;
    }
    while ( v4 < a2 );
    return v10;
  }
  return result;
}

// Address: 0x1000CC10
int __thiscall sub_1000CC10(void *this, const char *Src)
{
  size_t v3; // eax
  _DWORD v5[4]; // [esp+8h] [ebp-14h] BYREF

  v3 = strlen(Src);
  if ( v3 > 0x10 )
    v3 = 16;
  memset(v5, 32, sizeof(v5));
  memcpy_0(v5, Src, v3);
  return (*(int (__thiscall **)(void *, _DWORD *, int))(*(_DWORD *)this + 4))(this, v5, 16);
}

// Address: 0x1000CC90
int __thiscall sub_1000CC90(void *this, LPCWCH lpWideCharStr)
{
  int (__thiscall *v3)(void *, CHAR *); // edx
  CHAR MultiByteStr[20]; // [esp+4h] [ebp-18h] BYREF

  WideCharToMultiByte(0, 0, lpWideCharStr, -1, MultiByteStr, 17, nullptr, nullptr);
  v3 = *(int (__thiscall **)(void *, CHAR *))(*(_DWORD *)this + 12);
  MultiByteStr[16] = 0;
  return v3(this, MultiByteStr);
}

// Address: 0x1000CCF0
char __stdcall sub_1000CCF0(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  HANDLE FileW; // esi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx
  int v13; // [esp+0h] [ebp-320h]
  DWORD BytesReturned; // [esp+10h] [ebp-310h] BYREF
  _DWORD *v15; // [esp+14h] [ebp-30Ch]
  _DWORD *v16; // [esp+18h] [ebp-308h]
  DWORD BytesPerSector; // [esp+1Ch] [ebp-304h] BYREF
  _DWORD *v18; // [esp+20h] [ebp-300h]
  DWORD SectorsPerCluster; // [esp+24h] [ebp-2FCh] BYREF
  _BYTE v20[8]; // [esp+28h] [ebp-2F8h] BYREF
  int v21; // [esp+30h] [ebp-2F0h]
  _DWORD v22[37]; // [esp+48h] [ebp-2D8h] BYREF
  _DWORD OutBuffer[7]; // [esp+DCh] [ebp-244h] BYREF
  int v24; // [esp+F8h] [ebp-228h]
  int v25; // [esp+FCh] [ebp-224h]
  int v26; // [esp+100h] [ebp-220h]
  _DWORD InBuffer[3]; // [esp+104h] [ebp-21Ch] BYREF
  wchar_t Buffer[262]; // [esp+110h] [ebp-210h] BYREF

  v15 = a2;
  v16 = a3;
  v18 = a4;
  swprintf_s(Buffer, 0x104u, L"%c:\\", a1);
  if ( GetDriveTypeW(Buffer) == 3 )
  {
    if ( GetDiskFreeSpaceW(Buffer, &SectorsPerCluster, &BytesPerSector, nullptr, nullptr) )
    {
      if ( BytesPerSector == 512 )
      {
        swprintf_s(Buffer, 0x104u, L"\\\\.\\%c:", a1);
        FileW = CreateFileW(Buffer, 0, 3u, nullptr, 3u, 0, nullptr);
        if ( FileW == (HANDLE)-1 )
        {
          sub_10001B70((wchar_t *)L"GetFixedDriveInfo : Can not open file %s", (int)Buffer);
        }
        else
        {
          v24 = 0;
          v25 = 0;
          v26 = 0;
          InBuffer[0] = 0;
          InBuffer[1] = 0;
          memset(OutBuffer, 0, sizeof(OutBuffer));
          if ( DeviceIoControl(FileW, 0x2D1400u, InBuffer, 0xCu, OutBuffer, 0x28u, &BytesReturned, nullptr) )
          {
            if ( DeviceIoControl(FileW, 0x70048u, nullptr, 0, v22, 0x90u, &BytesReturned, nullptr) )
            {
              *a5 = v22[0];
              if ( DeviceIoControl(FileW, 0x560000u, nullptr, 0, v20, 0x20u, &BytesReturned, nullptr) )
              {
                CloseHandle(FileW);
                if ( v24 == 7 || v24 == 4 )
                {
                  sub_10001B70((wchar_t *)L"GetFixedDriveInfo : Bus type error", v13);
                }
                else
                {
                  if ( v22[0] == 0 )
                  {
                    v6 = v22[2];
                    *v15 = v21;
                    v7 = v16;
                    v8 = v22[3];
                    *v16 = v6;
                    v9 = v22[4];
                    v7[1] = v8;
                    v10 = v18;
                    v11 = v22[5];
                    *v18 = v9;
                    v10[1] = v11;
                    return 1;
                  }
                  sub_10001B70(L"GetFixedDriveInfo : Partition style error", v13);
                }
              }
              else
              {
                sub_10001B70((wchar_t *)L"GetFixedDriveInfo : IOCTL_VOLUME_GET_VOLUME_DISK_EXTENTS error", v13);
                CloseHandle(FileW);
              }
            }
            else
            {
              sub_10001B70((wchar_t *)L"GetFixedDriveInfo : IOCTL_DISK_GET_PARTITION_INFO_EX error", v13);
              CloseHandle(FileW);
            }
          }
          else
          {
            sub_10001B70((wchar_t *)L"GetFixedDriveInfo : IOCTL_STORAGE_QUERY_PROPERTY error", v13);
            CloseHandle(FileW);
          }
        }
      }
      else
      {
        sub_10001B70((wchar_t *)L"GetFixedDriveInfo : Sector size error %d", BytesPerSector);
      }
    }
    else
    {
      sub_10001B70(L"GetFixedDriveInfo : GetDiskFreeSpace error", v13);
    }
  }
  else
  {
    sub_10001B70((wchar_t *)L"GetFixedDriveInfo : %s No Fixed Drive", (int)Buffer);
  }
  return 0;
}

// Address: 0x1000CFB0
_DWORD *__thiscall sub_1000CFB0(_DWORD *this)
{
  int v3; // ecx
  volatile signed __int32 *v4; // esi
  _DWORD *v5; // eax
  volatile signed __int32 *v6; // esi
  volatile signed __int32 *v7; // ebx
  _DWORD *v8; // esi
  int v9; // [esp+14h] [ebp-268h] BYREF
  volatile signed __int32 *v10; // [esp+18h] [ebp-264h]
  int v11; // [esp+1Ch] [ebp-260h] BYREF
  volatile signed __int32 *v12; // [esp+20h] [ebp-25Ch]
  _BYTE v13[4]; // [esp+24h] [ebp-258h] BYREF
  void *v14; // [esp+28h] [ebp-254h]
  unsigned int v15; // [esp+3Ch] [ebp-240h]
  int v16; // [esp+40h] [ebp-23Ch] BYREF
  void *v17; // [esp+44h] [ebp-238h]
  int v18; // [esp+54h] [ebp-228h]
  unsigned int v19; // [esp+58h] [ebp-224h]
  WCHAR Buffer[262]; // [esp+5Ch] [ebp-220h] BYREF
  int v21; // [esp+278h] [ebp-4h]

  if ( *(this + 6) != 0 )
  {
    if ( *(this + 7) < 8u )
      return this + 2;
    else
      return (_DWORD *)*(this + 2);
  }
  else
  {
    v19 = 7;
    v18 = 0;
    LOWORD(v17) = 0;
    v21 = 0;
    sub_10006540(0xF003Fu, L"SOFTWARE\\MediaWeb\\HDD Sheriff Engine", &v9, HKEY_LOCAL_MACHINE);
    LOBYTE(v21) = 1;
    v3 = v9;
    if ( v9 != 0 )
      goto LABEL_11;
    sub_10006540(0xF003Fu, L"SOFTWARE\\Innosoft\\HDD Sheriff Engine", &v11, HKEY_LOCAL_MACHINE);
    LOBYTE(v21) = 2;
    sub_1000EAA0();
    LOBYTE(v21) = 1;
    if ( v12 != nullptr )
    {
      v4 = v12;
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
      }
    }
    v3 = v9;
    if ( v9 != 0 )
    {
LABEL_11:
      v5 = (_DWORD *)sub_1000C620(v3, (int)v13, L"Install Path");
      LOBYTE(v21) = 3;
      sub_100032E0(v5, (int)&v16, 0, 0xFFFFFFFF);
      LOBYTE(v21) = 1;
      if ( v15 >= 8 )
        operator delete(v14);
      v6 = v10;
      if ( v10 != nullptr && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
      }
      v7 = nullptr;
      v10 = nullptr;
      v9 = 0;
    }
    else
    {
      v7 = v10;
    }
    if ( v18 == 0 )
    {
      GetWindowsDirectoryW(Buffer, 0x104u);
      swprintf_s(Buffer, 0x104u, L"%c:\\%s\\", Buffer[0], L"DRVBKUP");
      sub_10003390(Buffer, &v16, wcslen(Buffer));
    }
    sub_100032E0(&v16, (int)(this + 1), 0, 0xFFFFFFFF);
    if ( *(this + 7) < 8u )
      v8 = this + 2;
    else
      v8 = (_DWORD *)*(this + 2);
    LOBYTE(v21) = 0;
    if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v7 + 4))(v7);
    }
    if ( v19 >= 8 )
      operator delete(v17);
    return v8;
  }
}

// Address: 0x1000D240
char __stdcall sub_1000D240(LPCWSTR lpszFileName, char *a2)
{
  char *v2; // eax
  DWORD v3; // esi
  char *v4; // ebx
  unsigned int v5; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  int v8; // edi
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // ebx
  void *v12; // eax
  void *v14; // [esp-4h] [ebp-274h]
  char v15; // [esp+13h] [ebp-25Dh]
  void **v16; // [esp+14h] [ebp-25Ch] BYREF
  void *v17; // [esp+18h] [ebp-258h]
  LPVOID lpOutBuffer; // [esp+24h] [ebp-24Ch]
  _BYTE *v19; // [esp+28h] [ebp-248h]
  int v20; // [esp+2Ch] [ebp-244h]
  unsigned int v21; // [esp+30h] [ebp-240h]
  char *v22; // [esp+34h] [ebp-23Ch]
  DWORD v23; // [esp+38h] [ebp-238h]
  HANDLE hDevice; // [esp+3Ch] [ebp-234h]
  __int64 v25; // [esp+40h] [ebp-230h]
  DWORD SectorsPerCluster; // [esp+48h] [ebp-228h] BYREF
  DWORD BytesPerSector; // [esp+4Ch] [ebp-224h] BYREF
  _DWORD InBuffer[3]; // [esp+50h] [ebp-220h] BYREF
  DWORD BytesReturned; // [esp+5Ch] [ebp-214h] BYREF
  WCHAR szVolumePathName[262]; // [esp+60h] [ebp-210h] BYREF

  v22 = a2;
  v15 = 0;
  memset(a2, 0, 0x808u);
  if ( GetVolumePathNameW(lpszFileName, szVolumePathName, 0x104u)
    && GetDiskFreeSpaceW(szVolumePathName, &SectorsPerCluster, &BytesPerSector, nullptr, nullptr) )
  {
    v23 = BytesPerSector * SectorsPerCluster;
    hDevice = CreateFileW(lpszFileName, 0x80u, 3u, nullptr, 3u, 0, nullptr);
    if ( hDevice != (HANDLE)-1 )
    {
      sub_10001180(&v16, 1024);
      v2 = (char *)lpOutBuffer;
      if ( v19 == lpOutBuffer )
      {
        _invalid_parameter_noinfo();
        v2 = (char *)lpOutBuffer;
      }
      v3 = v19 - v2;
      v4 = v2;
      InBuffer[0] = 0;
      InBuffer[1] = 0;
      if ( v19 == v2 )
      {
        _invalid_parameter_noinfo();
        v2 = (char *)lpOutBuffer;
      }
      if ( DeviceIoControl(hDevice, 0x90073u, InBuffer, 8u, v2, v3, &BytesReturned, nullptr)
        && (v5 = *(_DWORD *)v4, *(_DWORD *)v4 != 0)
        && v5 <= 0x80 )
      {
        v6 = *((_DWORD *)v4 + 3);
        LODWORD(v25) = *((_DWORD *)v4 + 2);
        HIDWORD(v25) = v6;
        v21 = 0;
        if ( v5 != 0 )
        {
          v7 = v4 + 16;
          v8 = v22 - v4;
          do
          {
            *(_QWORD *)((char *)v7 + v8 - 8) = *((_QWORD *)v7 + 1) * v23;
            v9 = (*(_QWORD *)v7 - v25) * v23;
            *(_QWORD *)((char *)v7 + v8) = v9;
            if ( v9 == 0 )
              break;
            v10 = *v7;
            HIDWORD(v25) = v7[1];
            v7 += 4;
            LODWORD(v25) = v10;
            ++v21;
          }
          while ( v21 < *(_DWORD *)v4 );
        }
        v11 = *(_DWORD *)v4;
        v12 = lpOutBuffer;
        v16 = &data_buffer::`vftable';
        if ( v21 == v11 )
        {
          *(_DWORD *)v22 = v11;
          v15 = 1;
          if ( v12 != nullptr )
            operator delete(v12);
          v14 = v17;
LABEL_23:
          lpOutBuffer = nullptr;
          v19 = nullptr;
          v20 = 0;
          operator delete(v14);
          CloseHandle(hDevice);
          return v15;
        }
      }
      else
      {
        v12 = lpOutBuffer;
        v16 = &data_buffer::`vftable';
      }
      if ( v12 != nullptr )
        operator delete(v12);
      v14 = v17;
      goto LABEL_23;
    }
  }
  return 0;
}

// Address: 0x1000D490
char __thiscall sub_1000D490(int *this, LPCWSTR lpszFileName, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // edx
  _DWORD *v6; // eax
  const wchar_t *v7; // eax
  _DWORD *v8; // eax
  const WCHAR *v9; // eax
  HANDLE FileW; // eax
  bool v12; // cf
  bool v13; // cf
  _BYTE *v14; // eax
  DWORD v15; // esi
  wchar_t **v16; // eax
  unsigned int *v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // rdi
  _QWORD *v20; // eax
  char v21; // [esp+17h] [ebp-4DDh]
  _DWORD *v22; // [esp+18h] [ebp-4DCh]
  HANDLE hDevice; // [esp+1Ch] [ebp-4D8h]
  void *v24[4]; // [esp+20h] [ebp-4D4h] BYREF
  LPVOID lpOutBuffer; // [esp+30h] [ebp-4C4h]
  _BYTE *v26; // [esp+34h] [ebp-4C0h]
  int v27; // [esp+38h] [ebp-4BCh]
  DWORD BytesReturned; // [esp+3Ch] [ebp-4B8h] BYREF
  _DWORD *v29; // [esp+40h] [ebp-4B4h]
  _DWORD *v30; // [esp+44h] [ebp-4B0h]
  _DWORD *v31; // [esp+48h] [ebp-4ACh]
  __int64 v32; // [esp+4Ch] [ebp-4A8h]
  _DWORD OutBuffer[4]; // [esp+54h] [ebp-4A0h] BYREF
  __int64 v34; // [esp+64h] [ebp-490h]
  _BYTE v35[4]; // [esp+78h] [ebp-47Ch] BYREF
  void *v36; // [esp+7Ch] [ebp-478h]
  int v37; // [esp+8Ch] [ebp-468h]
  unsigned int v38; // [esp+90h] [ebp-464h]
  int v39; // [esp+94h] [ebp-460h] BYREF
  void *v40; // [esp+98h] [ebp-45Ch]
  int v41; // [esp+A8h] [ebp-44Ch]
  unsigned int v42; // [esp+ACh] [ebp-448h]
  int v43; // [esp+B0h] [ebp-444h] BYREF
  wchar_t *String1[4]; // [esp+B4h] [ebp-440h] BYREF
  unsigned int v45; // [esp+C4h] [ebp-430h]
  unsigned int v46; // [esp+C8h] [ebp-42Ch]
  WCHAR szVolumePathName[260]; // [esp+CCh] [ebp-428h] BYREF
  WCHAR FileSystemNameBuffer[262]; // [esp+2D4h] [ebp-220h] BYREF
  int v49; // [esp+4F0h] [ebp-4h]

  v30 = a3;
  v29 = a4;
  v5 = *this;
  v31 = a5;
  v21 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int *, LPCWSTR, _DWORD *))(v5 + 24))(this, lpszFileName, a5) != 0
    && GetVolumePathNameW(lpszFileName, szVolumePathName, 0x104u) )
  {
    LOWORD(String1[0]) = 0;
    v46 = 7;
    v45 = 0;
    sub_10003390(szVolumePathName, &v43, wcslen(szVolumePathName));
    v49 = 0;
    v6 = (_DWORD *)sub_10006280(v45 - 1, (int)v35, &v43);
    LOBYTE(v49) = 1;
    sub_100032E0(v6, (int)&v43, 0, 0xFFFFFFFF);
    LOBYTE(v49) = 0;
    if ( v38 >= 8 )
      operator delete(v36);
    if ( v45 <= 4 )
      goto LABEL_9;
    v7 = String1[0];
    if ( v46 < 8 )
      v7 = (const wchar_t *)String1;
    if ( wcsncmp(v7, L"\\\\.\\", 4u) != 0 )
    {
LABEL_9:
      v42 = 7;
      v41 = 0;
      LOWORD(v40) = 0;
      sub_10003390(L"\\\\.\\", &v39, 4u);
      LOBYTE(v49) = 2;
      v8 = (_DWORD *)sub_10006490((int)v35, &v39, &v43);
      LOBYTE(v49) = 3;
      sub_100032E0(v8, (int)&v43, 0, 0xFFFFFFFF);
      if ( v38 >= 8 )
        operator delete(v36);
      LOBYTE(v49) = 0;
      v38 = 7;
      v37 = 0;
      LOWORD(v36) = 0;
      if ( v42 >= 8 )
        operator delete(v40);
    }
    v9 = String1[0];
    if ( v46 < 8 )
      v9 = (const WCHAR *)String1;
    FileW = CreateFileW(v9, 0, 3u, nullptr, 3u, 0, nullptr);
    hDevice = FileW;
    if ( FileW == (HANDLE)-1 )
    {
      if ( v46 >= 8 )
        operator delete(String1[0]);
      return v21;
    }
    if ( !DeviceIoControl(FileW, 0x560000u, nullptr, 0, OutBuffer, 0x20u, &BytesReturned, nullptr) )
    {
      v12 = v46 < 8;
LABEL_45:
      if ( !v12 )
        operator delete(String1[0]);
      LOWORD(String1[0]) = 0;
LABEL_48:
      v45 = 0;
      v46 = 7;
      CloseHandle(hDevice);
      return v21;
    }
    if ( OutBuffer[0] == 0 )
    {
      v13 = v46 < 8;
LABEL_23:
      if ( !v13 )
        operator delete(String1[0]);
      LOWORD(String1[0]) = 0;
      goto LABEL_48;
    }
    sub_10001180(v24, 4096);
    v14 = lpOutBuffer;
    if ( v26 == lpOutBuffer )
    {
      _invalid_parameter_noinfo();
      v14 = lpOutBuffer;
    }
    v15 = v26 - v14;
    v22 = v14;
    if ( v26 == v14 )
    {
      _invalid_parameter_noinfo();
      v14 = lpOutBuffer;
    }
    if ( !DeviceIoControl(hDevice, 0x70050u, nullptr, 0, v14, v15, &BytesReturned, nullptr) )
    {
      sub_100011E0(v24);
      v13 = v46 < 8;
      goto LABEL_23;
    }
    if ( *v22 != 0 )
    {
LABEL_33:
      sub_100011E0(v24);
      sub_10002C10((int)&v43);
      CloseHandle(hDevice);
      return v21;
    }
    GetVolumeInformationW(szVolumePathName, nullptr, 0, nullptr, nullptr, nullptr, FileSystemNameBuffer, 0x104u);
    if ( _wcsicmp(FileSystemNameBuffer, L"NTFS") != 0 )
    {
      v16 = (wchar_t **)String1[0];
      if ( v46 < 8 )
        v16 = String1;
      sub_1000D950(v16, v34, HIDWORD(v34));
      if ( v32 == 0 )
        goto LABEL_33;
      v34 += v32;
    }
    v17 = v31;
    v18 = 0;
    if ( *v31 != 0 )
    {
      v19 = v34;
      v20 = v31 + 2;
      do
      {
        *v20 += v19;
        ++v18;
        v20 += 2;
      }
      while ( v18 < *v17 );
    }
    *v30 = OutBuffer[2];
    *v29 = v22[2];
    v21 = 1;
    v24[0] = &data_buffer::`vftable';
    if ( lpOutBuffer != nullptr )
      operator delete(lpOutBuffer);
    lpOutBuffer = nullptr;
    v26 = nullptr;
    v27 = 0;
    operator delete(v24[1]);
    v12 = v46 < 8;
    goto LABEL_45;
  }
  return 0;
}

// Address: 0x1000D950
_DWORD *__userpurge sub_1000D950@<eax>(void *a1@<edi>, _DWORD *a2@<esi>, const WCHAR *lpFileName, __int64 a4)
{
  HANDLE FileW; // ebp
  unsigned __int16 v5; // dx
  int v6; // eax
  __int64 v8; // [esp-10h] [ebp-230h]
  int InBuffer; // [esp+8h] [ebp-218h] BYREF
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-214h] BYREF
  LARGE_INTEGER NewFilePointer; // [esp+10h] [ebp-210h] BYREF
  _BYTE Buffer[11]; // [esp+18h] [ebp-208h] BYREF
  __int16 v13; // [esp+23h] [ebp-1FDh]
  unsigned __int16 v14; // [esp+26h] [ebp-1FAh]
  unsigned __int8 v15; // [esp+28h] [ebp-1F8h]
  __int16 v16; // [esp+2Eh] [ebp-1F2h]
  int v17; // [esp+3Ch] [ebp-1E4h]
  __int16 v18; // [esp+216h] [ebp-Ah]

  *a2 = 0;
  a2[1] = 0;
  NewFilePointer.QuadPart = 0;
  if ( SetFilePointerEx(a1, 0, &NewFilePointer, 0) )
  {
    FileW = CreateFileW(lpFileName, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
    if ( ReadFile(FileW, Buffer, 0x200u, &NumberOfBytesRead, nullptr)
      || (InBuffer = a4 / 512, DeviceIoControl(
                                 a1,
                                 0x223C82u,
                                 &InBuffer,
                                 4u,
                                 Buffer,
                                 0x200u,
                                 &NumberOfBytesRead,
                                 nullptr)) )
    {
      if ( v18 == -21931 && v13 == 512 )
      {
        v5 = v14;
        if ( v14 != 0 && v15 != 0 && v15 <= 4u && v16 == 0 && v17 != 0 )
        {
          v6 = v17 * v15;
          a2[1] = 0;
          HIDWORD(v8) = a2[1];
          LODWORD(v8) = v5 + v6;
          *(_QWORD *)a2 = v8 << 9;
        }
      }
    }
    if ( FileW != (HANDLE)-1 )
      CloseHandle(FileW);
  }
  return a2;
}

// Address: 0x1000DAB0
unsigned int __stdcall sub_1000DAB0(_BYTE *a1, int a2)
{
  int v3; // esi
  unsigned int result; // eax
  unsigned int i; // ecx
  int v6; // eax

  v3 = a2;
  result = -542349436;
  for ( i = 1661155363; v3 != 0; --v3 )
  {
    *a1 ^= result;
    v6 = (i << 31) | (result >> 1);
    i = (v6 << 31) | (i >> 1);
    ++a1;
    result = i ^ v6;
  }
  return result;
}

// Address: 0x1000DAF0
int __thiscall sub_1000DAF0(int (__stdcall **this)(int *))
{
  int (__stdcall *v1)(int *); // eax
  int v3; // [esp+0h] [ebp-120h] BYREF
  unsigned int v4; // [esp+4h] [ebp-11Ch]
  int v5; // [esp+8h] [ebp-118h]

  v1 = *(this + 8);
  if ( v1 == nullptr )
    return 0;
  v3 = 284;
  if ( v1(&v3) < 0 )
    return 0;
  if ( v4 == 5 )
  {
    if ( v5 != 0 )
    {
      if ( v5 == 1 )
        return 268436737;
      if ( v5 == 2 )
        return 268436738;
    }
    return 0;
  }
  if ( v4 < 5 )
    return 0;
  if ( v4 == 6 )
  {
    if ( v5 != 0 )
    {
      switch ( v5 )
      {
        case 1:
          return 268436993;
        case 2:
          return 268436994;
        case 3:
          return 268436995;
        default:
          return 0;
      }
    }
    else
    {
      return 268436992;
    }
  }
  else
  {
    if ( v4 == 10 )
    {
      if ( v5 == 0 )
        return 268438016;
    }
    else if ( v4 <= 0xA )
    {
      return 0;
    }
    return 0x7FFFFFFF;
  }
}

// Address: 0x1000DC80
int __thiscall sub_1000DC80(int *this, int a2)
{
  int v3; // edi
  int v4; // eax
  CHAR String[260]; // [esp+8h] [ebp-108h] BYREF

  wsprintfA(
    String,
    "%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
    *(_DWORD *)a2,
    *(unsigned __int16 *)(a2 + 4),
    *(unsigned __int16 *)(a2 + 6),
    *(unsigned __int8 *)(a2 + 8),
    *(unsigned __int8 *)(a2 + 9),
    *(unsigned __int8 *)(a2 + 10),
    *(unsigned __int8 *)(a2 + 11),
    *(unsigned __int8 *)(a2 + 12),
    *(unsigned __int8 *)(a2 + 13),
    *(unsigned __int8 *)(a2 + 14),
    *(unsigned __int8 *)(a2 + 15));
  v3 = *this;
  v4 = lstrlenA(String);
  return (*(int (__thiscall **)(int *, CHAR *, int))(v3 + 4))(this, String, v4);
}

// Address: 0x1000DD20
int sub_1000DD20()
{
  volatile signed __int32 *v0; // esi
  volatile signed __int32 *v2; // esi
  const WCHAR *p_lpFileName; // eax
  HANDLE FileW; // eax
  int v5; // [esp+10h] [ebp-8Ch] BYREF
  volatile signed __int32 *v6; // [esp+14h] [ebp-88h]
  int v7; // [esp+18h] [ebp-84h] BYREF
  void *v8; // [esp+1Ch] [ebp-80h]
  int v9; // [esp+2Ch] [ebp-70h]
  unsigned int v10; // [esp+30h] [ebp-6Ch]
  int v11; // [esp+34h] [ebp-68h] BYREF
  void *v12; // [esp+38h] [ebp-64h]
  int v13; // [esp+48h] [ebp-54h]
  unsigned int v14; // [esp+4Ch] [ebp-50h]
  _BYTE v15[4]; // [esp+50h] [ebp-4Ch] BYREF
  LPCWSTR lpFileName; // [esp+54h] [ebp-48h] BYREF
  int v17; // [esp+64h] [ebp-38h]
  unsigned int v18; // [esp+68h] [ebp-34h]
  int v19; // [esp+6Ch] [ebp-30h] BYREF
  void *v20; // [esp+70h] [ebp-2Ch]
  int v21; // [esp+80h] [ebp-1Ch]
  unsigned int v22; // [esp+84h] [ebp-18h]
  int v23; // [esp+98h] [ebp-4h]

  sub_10006540(0x20019u, L"SYSTEM\\Setup", &v5, HKEY_LOCAL_MACHINE);
  v23 = 0;
  if ( v5 == 0 )
  {
    v23 = -1;
    v0 = v6;
    if ( v6 != nullptr && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v0)(v0);
      if ( _InterlockedExchangeAdd(v0 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 4))(v0);
    }
    return 0;
  }
  sub_1000C620(v5, (int)&v11, L"SystemPartition");
  LOBYTE(v23) = 1;
  if ( v13 != 0 )
  {
    LOWORD(v8) = 0;
    v10 = 7;
    v9 = 0;
    sub_10003390(L"\\\\?\\GLOBALROOT", &v7, 0xEu);
    LOBYTE(v23) = 2;
    sub_10006490((int)&v19, &v7, &v11);
    LOBYTE(v23) = 4;
    if ( v10 >= 8 )
      operator delete(v8);
    v9 = 0;
    v10 = 7;
    LOWORD(v8) = 0;
    sub_100039D0(L"\\EFI\\Boot\\bootx64.efi", (int)v15, &v19);
    p_lpFileName = lpFileName;
    if ( v18 < 8 )
      p_lpFileName = (const WCHAR *)&lpFileName;
    FileW = CreateFileW(p_lpFileName, 0x80000000, 1u, nullptr, 3u, 0, nullptr);
    if ( FileW == (HANDLE)-1 )
    {
      if ( v18 >= 8 )
        operator delete((void *)lpFileName);
      v18 = 7;
      v17 = 0;
      LOWORD(lpFileName) = 0;
      if ( v22 >= 8 )
        operator delete(v20);
      v22 = 7;
      v21 = 0;
      LOWORD(v20) = 0;
      if ( v14 >= 8 )
        operator delete(v12);
      v14 = 7;
      v13 = 0;
      LOWORD(v12) = 0;
      v23 = -1;
      sub_10004100((int)&v5);
      return 1;
    }
    else
    {
      CloseHandle(FileW);
      if ( v18 >= 8 )
        operator delete((void *)lpFileName);
      v18 = 7;
      v17 = 0;
      LOWORD(lpFileName) = 0;
      if ( v22 >= 8 )
        operator delete(v20);
      v22 = 7;
      v21 = 0;
      LOWORD(v20) = 0;
      if ( v14 >= 8 )
        operator delete(v12);
      v14 = 7;
      v13 = 0;
      LOWORD(v12) = 0;
      v23 = -1;
      sub_10004100((int)&v5);
      return 2;
    }
  }
  else
  {
    if ( v14 >= 8 )
      operator delete(v12);
    v23 = -1;
    v2 = v6;
    v14 = 7;
    v13 = 0;
    LOWORD(v12) = 0;
    if ( v6 == nullptr )
      return 0;
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) != 0 )
      return 0;
    (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) != 0 )
      return 0;
    (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    return 0;
  }
}

// Address: 0x1000E050
char __thiscall sub_1000E050(_DWORD *this)
{
  unsigned int i; // esi
  unsigned int v4; // eax
  _DWORD v5[11]; // [esp+8h] [ebp-454h] BYREF
  void *v6; // [esp+34h] [ebp-428h]
  void *v7; // [esp+38h] [ebp-424h]
  WCHAR TempFileName[260]; // [esp+3Ch] [ebp-420h] BYREF
  WCHAR Buffer[260]; // [esp+244h] [ebp-218h] BYREF
  int v10; // [esp+458h] [ebp-4h]

  Buffer[0] = 0;
  GetTempPathW(0x104u, Buffer);
  TempFileName[0] = 0;
  if ( GetTempFileNameW(Buffer, L"shr", 0, TempFileName) == 0 )
    return 0;
  DeleteFileW(TempFileName);
  wcscat_s(TempFileName, 0x104u, SubBlock);
  CreateDirectoryW(TempFileName, nullptr);
  sub_10003390(TempFileName, this, wcslen(TempFileName));
  v5[0] = 0;
  v5[1] = 0;
  v10 = 0;
  if ( sub_10013AC0(v5) == 0 )
  {
    sub_1000E480(TempFileName, 1);
LABEL_4:
    if ( v5[0] != 0 )
    {
      operator delete(v6);
      operator delete(v7);
    }
    return 0;
  }
  for ( i = 0; ; ++i )
  {
    v4 = v5[0] != 0 ? v5[6] : -1;
    if ( i >= v4 )
      break;
    if ( (unsigned __int8)sub_1000E200(v5, i) == 0 )
      goto LABEL_4;
  }
  if ( v5[0] != 0 )
  {
    operator delete(v6);
    operator delete(v7);
  }
  return 1;
}

// Address: 0x1000E200
char __fastcall sub_1000E200(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // eax
  int v5; // ecx
  void *v6; // eax
  DWORD v7; // ebx
  void *v8; // edi
  HANDLE FileW; // eax
  DWORD nNumberOfBytesToWrite; // [esp+10h] [ebp-43Ch] BYREF
  FILETIME LastAccessTime; // [esp+14h] [ebp-438h] BYREF
  FILETIME CreationTime; // [esp+1Ch] [ebp-430h] BYREF
  FILETIME LastWriteTime; // [esp+24h] [ebp-428h] BYREF
  DWORD NumberOfBytesWritten; // [esp+2Ch] [ebp-420h] BYREF
  WCHAR FileName[260]; // [esp+30h] [ebp-41Ch] BYREF
  WCHAR PathName[262]; // [esp+238h] [ebp-214h] BYREF

  if ( *a3 == 0 )
    return 0;
  if ( a4 >= a3[6] )
    return 0;
  v4 = *(_DWORD *)(a3[11] + 44 * a4);
  if ( v4 >= a3[9] )
    return 0;
  v5 = v4 + a3[12];
  if ( v5 == 0 )
    return 0;
  swprintf_s(FileName, 0x104u, L"%s%hs", a2, v5);
  PathName[0] = 0;
  sub_1000E390(PathName, FileName);
  v6 = (void *)sub_10013BA0(&nNumberOfBytesToWrite);
  v7 = nNumberOfBytesToWrite;
  v8 = v6;
  if ( nNumberOfBytesToWrite == -1 )
    return 0;
  FileW = CreateFileW(FileName, 0x40000000u, 0, nullptr, 2u, 0, nullptr);
  nNumberOfBytesToWrite = (DWORD)FileW;
  if ( FileW == (HANDLE)-1 )
  {
    if ( v7 != 0 && v8 != nullptr )
      operator delete(v8);
    return 0;
  }
  if ( v7 != 0 )
  {
    if ( !WriteFile(FileW, v8, v7, &NumberOfBytesWritten, nullptr) )
    {
      if ( v8 != nullptr )
        operator delete(v8);
      CloseHandle((HANDLE)nNumberOfBytesToWrite);
      DeleteFileW(FileName);
      return 0;
    }
    if ( v8 != nullptr )
      operator delete(v8);
  }
  if ( sub_10013C00(a3) != 0 )
    SetFileTime((HANDLE)nNumberOfBytesToWrite, &CreationTime, &LastAccessTime, &LastWriteTime);
  CloseHandle((HANDLE)nNumberOfBytesToWrite);
  return 1;
}

// Address: 0x1000E390
wchar_t *__stdcall sub_1000E390(wchar_t *lpPathName, wchar_t *Str)
{
  wchar_t *result; // eax
  wchar_t *v3; // ebx
  wchar_t *v4; // edi
  wchar_t Source[260]; // [esp+Ch] [ebp-20Ch] BYREF

  result = wcschr(Str, 0x5Cu);
  if ( result == nullptr )
    return result;
  wcscpy_s(Source, 0x104u, Str);
  v3 = wcschr(Source, 0x5Cu);
  v4 = wcschr(Str, 0x5Cu);
  if ( wcschr(Str, 0x3Au) == nullptr )
    goto LABEL_5;
  if ( v3 != nullptr )
  {
    v3 = wcschr(v3 + 1, 0x5Cu);
    v4 = wcschr(v4 + 1, 0x5Cu);
LABEL_5:
    if ( v3 != nullptr )
      v3[1] = 0;
  }
  if ( v4 != nullptr )
    ++v4;
  wcscat_s(lpPathName, 0x104u, Source);
  CreateDirectoryW(lpPathName, nullptr);
  return (wchar_t *)sub_1000E390(lpPathName, v4);
}

// Address: 0x1000E480
bool __stdcall sub_1000E480(LPCWSTR lpFileName, int a2)
{
  HANDLE FirstFileW; // esi
  struct _WIN32_FIND_DATAW FindFileData; // [esp+10h] [ebp-66Ch] BYREF
  WCHAR FileName[260]; // [esp+260h] [ebp-41Ch] BYREF
  wchar_t Destination[262]; // [esp+468h] [ebp-214h] BYREF

  wcscpy_s(Destination, 0x104u, lpFileName);
  wcscpy_s(FileName, 0x104u, Destination);
  wcscat_s(FileName, 0x104u, L"*.*");
  FirstFileW = FindFirstFileW(FileName, &FindFileData);
  if ( FirstFileW == (HANDLE)-1 )
    return false;
  do
  {
    if ( wcscmp(FindFileData.cFileName, L".") != 0 && wcscmp(FindFileData.cFileName, L"..") != 0 )
    {
      wcscpy_s(FileName, 0x104u, Destination);
      wcscat_s(FileName, 0x104u, FindFileData.cFileName);
      if ( (FindFileData.dwFileAttributes & 0x10) != 0 )
      {
        wcscat_s(FileName, 0x104u, SubBlock);
        sub_1000E480(FileName, 1);
      }
      else
      {
        SetFileAttributesW(FileName, 0x80u);
        DeleteFileW(FileName);
      }
    }
  }
  while ( FindNextFileW(FirstFileW, &FindFileData) );
  FindClose(FirstFileW);
  SetFileAttributesW(lpFileName, 0x80u);
  return RemoveDirectoryW(lpFileName);
}

// Address: 0x1000E680
int sub_1000E680()
{
  int v0; // ebp
  HKEY *v1; // esi
  char *v2; // esi
  unsigned int v3; // edi
  char *v4; // ebx
  const wchar_t *v5; // esi
  int v6; // ecx
  volatile signed __int32 *v7; // esi
  volatile signed __int32 *v9; // esi
  int v10; // [esp+0h] [ebp-44h]
  int v11; // [esp+18h] [ebp-2Ch] BYREF
  volatile signed __int32 *v12; // [esp+1Ch] [ebp-28h]
  void *v13[3]; // [esp+20h] [ebp-24h] BYREF
  void *v14; // [esp+2Ch] [ebp-18h]
  int v15; // [esp+30h] [ebp-14h]
  int v16; // [esp+34h] [ebp-10h]
  int v17; // [esp+40h] [ebp-4h]

  sub_10006540(
    0xF003Fu,
    L"SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e967-e325-11ce-bfc1-08002be10318}",
    &v11,
    HKEY_LOCAL_MACHINE);
  v0 = 0;
  v17 = 0;
  sub_10001B70(
    (wchar_t *)L"FindRegMultiStr Enter : %s",
    (int)L"SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e967-e325-11ce-bfc1-08002be10318}");
  v1 = (HKEY *)v11;
  if ( v11 == 0 )
  {
LABEL_20:
    sub_10001B70((wchar_t *)L"FindRegMultiStr : fail", v10);
    v17 = -1;
    v9 = v12;
    if ( v12 != nullptr && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v9 + 4))(v9);
    }
    return 0;
  }
  sub_10002B00(v13);
  LOBYTE(v17) = 1;
  if ( sub_1000C7F0(v1, v13) == 0 )
  {
    sub_10001B70((wchar_t *)L"FindRegMultiStr : read multisz error", v10);
    v2 = (char *)v14;
LABEL_17:
    LOBYTE(v17) = 0;
    if ( v2 != nullptr )
    {
      sub_1000C070((int)v2, v15);
      operator delete(v14);
    }
    v14 = nullptr;
    v15 = 0;
    v16 = 0;
    operator delete(v13[0]);
    goto LABEL_20;
  }
  v2 = (char *)v14;
  if ( (v15 - (int)v14) / 28 == 0 )
  {
    sub_1000AD20(v15 - (_DWORD)v14, (int)v13);
    v17 = -1;
    sub_10004100((int)&v11);
    return 0;
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = &v2[v0 + 24];
    v5 = (const wchar_t *)&v2[v0 + 4];
    sub_10001B70((wchar_t *)L"%s[%d] : %s", (int)L"UpperFilters");
    if ( *(_DWORD *)v4 >= 8u )
      v5 = *(const wchar_t **)v5;
    if ( _wcsicmp(v5, L"scsidisk") == 0 )
      break;
    v2 = (char *)v14;
    ++v3;
    v0 += 28;
    if ( v3 >= (v15 - (int)v14) / 28 )
      goto LABEL_17;
  }
  sub_10001B70((wchar_t *)L"FindRegMultiStr : success", v10);
  sub_1000AD20(v6, (int)v13);
  v17 = -1;
  v7 = v12;
  if ( v12 != nullptr && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v7)(v7);
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v7 + 4))(v7);
  }
  return 1;
}

// Address: 0x1000E8E0
int __usercall sub_1000E8E0@<eax>(SC_HANDLE a1@<ebx>)
{
  DWORD v1; // edi
  BYTE *v2; // esi
  int v3; // edi
  int v5; // edi
  int v6; // [esp+0h] [ebp-14h]
  DWORD pcbBytesNeeded; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h]

  v1 = 36;
  v8 = 0;
  pcbBytesNeeded = 0;
  v2 = (BYTE *)operator new[](0x24u);
  if ( QueryServiceStatusEx(a1, SC_STATUS_PROCESS_INFO, v2, 0x24u, &pcbBytesNeeded) )
    goto LABEL_5;
  if ( GetLastError() == 122 )
  {
    v1 = pcbBytesNeeded;
    pcbBytesNeeded = 0;
    operator delete(v2);
    v2 = (BYTE *)operator new[](v1);
  }
  if ( QueryServiceStatusEx(a1, SC_STATUS_PROCESS_INFO, v2, v1, &pcbBytesNeeded) )
  {
LABEL_5:
    v3 = *((_DWORD *)v2 + 1);
    operator delete(v2);
    return v3;
  }
  else
  {
    sub_10001B70((wchar_t *)L"QueryServiceStatusEx Fail\n", v6);
    v5 = v8;
    operator delete(v2);
    return v5;
  }
}

// Address: 0x1000E990
int __usercall sub_1000E990@<eax>(const WCHAR *a1@<eax>)
{
  SC_HANDLE v2; // eax
  SC_HANDLE v3; // edi
  SC_HANDLE v5; // ebx
  int v6; // ebp
  int v7; // [esp-18h] [ebp-20h]
  int v8; // [esp+0h] [ebp-8h]

  v2 = OpenSCManagerW(nullptr, nullptr, 1u);
  v3 = v2;
  if ( v2 != nullptr )
  {
    v5 = OpenServiceW(v2, a1, 0xF01FFu);
    if ( v5 != nullptr )
      goto LABEL_8;
    GetLastError();
    sub_10001B70((wchar_t *)L"(1) Could not open service. %s (%08x , %08x)", (int)a1);
    v5 = OpenServiceW(v3, a1, 0x37u);
    if ( v5 != nullptr
      || (GetLastError(),
          sub_10001B70((wchar_t *)L"(2) Could not open service. %s (%08x , %08x)", (int)a1),
          (v5 = OpenServiceW(v3, a1, 0x35u)) != nullptr)
      || (GetLastError(),
          sub_10001B70((wchar_t *)L"(3) Could not open service. %s (%08x , %08x)", (int)a1),
          (v5 = OpenServiceW(v3, a1, 0x25u)) != nullptr) )
    {
LABEL_8:
      v6 = sub_1000E8E0(v5);
    }
    else
    {
      GetLastError();
      sub_10001B70((wchar_t *)L"Could not open service. %s( %08x , %08x)", (int)a1);
      v3 = nullptr;
      sub_10001B70((wchar_t *)L"Invalid service Handle\n", v7);
      v6 = 0;
    }
    sub_10001B70((wchar_t *)L"%s service status : 0x%08x\n", (int)a1);
    if ( v5 != nullptr )
      CloseServiceHandle(v5);
    if ( v3 != nullptr )
      CloseServiceHandle(v3);
    return v6;
  }
  else
  {
    sub_10001B70((wchar_t *)L"Could not open the service manager.", v8);
    return 0;
  }
}

// Address: 0x1000EAA0
_DWORD *__usercall sub_1000EAA0@<eax>(int *a1@<eax>, _DWORD *a2@<ebx>)
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

// Address: 0x1000EB00
_DWORD *__stdcall sub_1000EB00(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<registry::value>::`vftable';
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

// Address: 0x1000EBD0
void *__thiscall sub_1000EBD0(void *this, char a2)
{
  sub_1000EBF0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000EBF0
void __thiscall sub_1000EBF0(void *this)
{
  void *v2; // [esp-8h] [ebp-24h]

  *(_DWORD *)this = &Transaction::`vftable';
  if ( *((_DWORD *)this + 7) != 0 )
    sub_1000EC70();
  sub_1000F3B0();
  operator delete(*((void **)this + 6));
  v2 = *((void **)this + 1);
  *((_DWORD *)this + 6) = 0;
  operator delete(v2);
}

// Address: 0x1000EC70
int __thiscall sub_1000EC70(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // edi
  _DWORD *v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  const wchar_t *v11; // eax
  wchar_t *v12; // eax
  const WCHAR *v13; // ebx
  bool v14; // cf
  const wchar_t *v15; // edi
  const wchar_t *v16; // eax
  wchar_t *v17; // eax
  const wchar_t *v18; // ebx
  wchar_t *v19; // eax
  rsize_t v20; // esi
  const WCHAR *v21; // ebx
  const wchar_t *v22; // edi
  int v24; // [esp+0h] [ebp-254h]
  _DWORD *v25; // [esp+10h] [ebp-244h]
  int v26; // [esp+14h] [ebp-240h]
  HKEY v27; // [esp+18h] [ebp-23Ch] BYREF
  HKEY hKey; // [esp+1Ch] [ebp-238h] BYREF
  _DWORD *v29; // [esp+20h] [ebp-234h]
  _DWORD v30[2]; // [esp+24h] [ebp-230h] BYREF
  wchar_t *v31; // [esp+2Ch] [ebp-228h]
  int v32; // [esp+30h] [ebp-224h]
  wchar_t Destination[262]; // [esp+34h] [ebp-220h] BYREF
  int v34; // [esp+250h] [ebp-4h]

  sub_10001B70((wchar_t *)L"Transaction::Rollback", v24);
  v2 = *(this + 6);
  v29 = this + 1;
  v3 = (_DWORD *)*(this + 1);
  v25 = v3;
  v26 = v2;
  while ( 1 )
  {
    v4 = *(_DWORD *)v29[5];
    if ( v3 == nullptr || v3 != (_DWORD *)*v29 )
      _invalid_parameter_noinfo();
    if ( v26 == v4 )
      return sub_1000F3B0();
    v5 = v26;
    v6 = v3;
    if ( v3 == nullptr )
      _invalid_parameter_noinfo();
    v7 = *(_DWORD *)(v26 + 4);
    v26 = v7;
    if ( v3 != nullptr )
      v8 = *v3;
    else
      v8 = 0;
    if ( v7 == *(_DWORD *)(v8 + 20) )
      _invalid_parameter_noinfo();
    v32 = v5;
    if ( v3 == nullptr )
      _invalid_parameter_noinfo();
    v9 = *(_DWORD *)(v5 + 4);
    if ( v3 != nullptr )
      v10 = *v3;
    else
      v10 = 0;
    if ( v9 == *(_DWORD *)(v10 + 20) )
      _invalid_parameter_noinfo();
    if ( v3 != nullptr )
      v6 = (_DWORD *)*v3;
    else
      _invalid_parameter_noinfo();
    if ( v9 == v6[5] )
      _invalid_parameter_noinfo();
    switch ( *(_DWORD *)(v9 + 8) )
    {
      case 0:
        if ( *(_DWORD *)(v9 + 36) < 8u )
          RemoveDirectoryW((LPCWSTR)(v9 + 16));
        else
          RemoveDirectoryW(*(LPCWSTR *)(v9 + 16));
        break;
      case 1:
      case 2:
        if ( *(_DWORD *)(v9 + 36) < 8u )
          DeleteFileW((LPCWSTR)(v9 + 16));
        else
          DeleteFileW(*(LPCWSTR *)(v9 + 16));
        break;
      case 3:
        if ( *(_DWORD *)(v9 + 36) < 8u )
          v11 = (const wchar_t *)(v9 + 16);
        else
          v11 = *(const wchar_t **)(v9 + 16);
        v12 = wcschr(v11, 0x2Cu);
        if ( v12 != nullptr )
        {
          v13 = v12 + 1;
          v14 = *(_DWORD *)(v9 + 36) < 8u;
          hKey = nullptr;
          if ( v14 )
            v15 = (const wchar_t *)(v9 + 16);
          else
            v15 = *(const wchar_t **)(v9 + 16);
          if ( swscanf_s(v15, L"%x", &hKey) != 0 )
            RegDeleteKeyW(hKey, v13);
        }
        break;
      case 4:
        if ( *(_DWORD *)(v9 + 36) < 8u )
          v16 = (const wchar_t *)(v9 + 16);
        else
          v16 = *(const wchar_t **)(v9 + 16);
        v17 = wcschr(v16, 0x2Cu);
        if ( v17 != nullptr )
        {
          v18 = v17 + 1;
          v19 = wcschr(v17 + 1, 0x2Cu);
          v31 = v19;
          if ( v19 != nullptr )
          {
            v20 = v19 - v18;
            wcsncpy_s(Destination, 0x104u, v18, v20);
            v21 = v31 + 1;
            v14 = *(_DWORD *)(v9 + 36) < 8u;
            Destination[v20] = 0;
            v27 = nullptr;
            if ( v14 )
              v22 = (const wchar_t *)(v9 + 16);
            else
              v22 = *(const wchar_t **)(v9 + 16);
            if ( swscanf_s(v22, L"%x", &v27) != 0 )
            {
              sub_10006540(0xF003Fu, Destination, v30, v27);
              if ( v30[0] != 0 )
                RegDeleteValueW(*(HKEY *)(v30[0] + 4), v21);
              v34 = -1;
              sub_10004100((int)v30);
            }
            v3 = v25;
          }
        }
        break;
      default:
        continue;
    }
  }
}

// Address: 0x1000EF40
int __fastcall sub_1000EF40(int a1, int a2)
{
  int v2; // edi
  int *v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // esi
  const wchar_t *v12; // eax
  _DWORD *v13; // ecx
  int v15; // [esp+0h] [ebp-24Ch]
  int v18; // [esp+24h] [ebp-228h]
  wchar_t Buffer[260]; // [esp+34h] [ebp-218h] BYREF
  int v20; // [esp+248h] [ebp-4h]

  v2 = a1;
  sub_10001B70((wchar_t *)L"Transaction::GetList", v15);
  *(_DWORD *)(a2 + 24) = 7;
  *(_DWORD *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 4) = 0;
  v20 = 0;
  v4 = *(int **)(v2 + 4);
  v18 = *(_DWORD *)(v2 + 24);
  while ( 1 )
  {
    v5 = **(_DWORD **)(v2 + 24);
    if ( v4 == nullptr || v4 != *(int **)(v2 + 4) )
      _invalid_parameter_noinfo();
    v6 = v18;
    if ( v18 == v5 )
      break;
    if ( v4 == nullptr )
      _invalid_parameter_noinfo();
    v7 = *(_DWORD *)(v18 + 4);
    v18 = v7;
    if ( v4 != nullptr )
      v8 = *v4;
    else
      v8 = 0;
    if ( v7 == *(_DWORD *)(v8 + 20) )
      _invalid_parameter_noinfo();
    if ( v4 == nullptr )
      _invalid_parameter_noinfo();
    v9 = *(_DWORD **)(v6 + 4);
    if ( v4 != nullptr )
      v10 = *v4;
    else
      v10 = 0;
    if ( v9 == *(_DWORD **)(v10 + 20) )
      _invalid_parameter_noinfo();
    if ( v4 != nullptr )
    {
      v11 = *v4;
    }
    else
    {
      _invalid_parameter_noinfo();
      v11 = 0;
    }
    if ( v9 == *(_DWORD **)(v11 + 20) )
      _invalid_parameter_noinfo();
    switch ( v9[2] )
    {
      case 0:
        v12 = L"DELDIR";
        break;
      case 1:
        v12 = L"DELFILE";
        break;
      case 2:
        v12 = L"DELFILELATER";
        break;
      case 3:
        v12 = L"DELREGKEY";
        break;
      case 4:
        v12 = L"DELREGVAL";
        break;
      default:
        v12 = nullptr;
        break;
    }
    if ( v9[9] < 8u )
      v13 = v9 + 4;
    else
      v13 = (_DWORD *)v9[4];
    swprintf_s(Buffer, 0x104u, L"%s|%s\r\n", v12, v13);
    sub_10003B40(Buffer, (_DWORD *)a2, wcslen(Buffer));
    v2 = a1;
  }
  return a2;
}

// Address: 0x1000F130
void __fastcall sub_1000F130(int ArgList, int a2, unsigned __int16 *a3)
{
  int v5; // esi
  int v6; // edi
  int v7; // [esp+14h] [ebp-34h] BYREF
  int v8; // [esp+18h] [ebp-30h] BYREF
  void *v9; // [esp+1Ch] [ebp-2Ch]
  int v10; // [esp+2Ch] [ebp-1Ch]
  unsigned int v11; // [esp+30h] [ebp-18h]
  int v12; // [esp+44h] [ebp-4h]

  sub_10001B70((wchar_t *)L"Transaction::AddTransact %02X %ws", ArgList);
  v11 = 7;
  v10 = 0;
  LOWORD(v9) = 0;
  v12 = 0;
  v7 = ArgList;
  sub_10003390(a3, &v8, wcslen(a3));
  v5 = *(_DWORD *)(a2 + 24);
  v6 = sub_1000F430(v5, *(_DWORD *)(v5 + 4), &v7);
  sub_1000F4D0(a2 + 4);
  *(_DWORD *)(v5 + 4) = v6;
  **(_DWORD **)(v6 + 4) = v6;
  if ( v11 >= 8 )
    operator delete(v9);
}

// Address: 0x1000F250
void __usercall sub_1000F250(int a1@<esi>)
{
  wchar_t Buffer[262]; // [esp+0h] [ebp-214h] BYREF

  swprintf_s(Buffer, 0x104u, L"%08X,%ws", -2147483646, L"SOFTWARE\\Innosoft\\HDD Sheriff Engine");
  sub_1000F130(3, a1, Buffer);
}

// Address: 0x1000F2B0
void __usercall sub_1000F2B0(int a1@<esi>)
{
  wchar_t Buffer[262]; // [esp+0h] [ebp-214h] BYREF

  swprintf_s(Buffer, 0x104u, L"%08X,%ws,%ws", -2147483646, L"SOFTWARE\\Innosoft\\HDD Sheriff Engine", L"Install Path");
  sub_1000F130(4, a1, Buffer);
}

// Address: 0x1000F310
_DWORD *__stdcall sub_1000F310(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  a1[5] = sub_1000F410();
  a1[6] = 0;
  return a1;
}

// Address: 0x1000F380
void __usercall sub_1000F380(void **a1@<eax>)
{
  void *v2; // [esp-8h] [ebp-Ch]

  sub_1000F3B0();
  operator delete(a1[5]);
  v2 = *a1;
  a1[5] = nullptr;
  operator delete(v2);
}

// Address: 0x1000F3B0
void __usercall sub_1000F3B0(int a1@<ebx>)
{
  void **v1; // eax
  void **v2; // esi
  void **v3; // edi

  v1 = *(void ***)(a1 + 20);
  v2 = (void **)*v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 24) = 0;
  if ( v2 != *(void ***)(a1 + 20) )
  {
    do
    {
      v3 = (void **)*v2;
      if ( (unsigned int)v2[9] >= 8 )
        operator delete(v2[4]);
      v2[9] = (void *)7;
      v2[8] = nullptr;
      *((_WORD *)v2 + 8) = 0;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != *(void ***)(a1 + 20) );
  }
}

// Address: 0x1000F410
_DWORD *sub_1000F410()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_1000F570(1);
  if ( result != nullptr )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}

// Address: 0x1000F430
_DWORD *__stdcall sub_1000F430(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  void *v5[9]; // [esp+0h] [ebp-24h] BYREF

  v5[5] = v5;
  v3 = (_DWORD *)sub_1000F570(1);
  v5[4] = v3;
  v5[8] = nullptr;
  if ( v3 != nullptr )
    *v3 = a1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  sub_1000F5D0(a3, v5[0]);
  return v3;
}

// Address: 0x1000F4D0
int __thiscall sub_1000F4D0(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  _BYTE v3[20]; // [esp+4h] [ebp-50h] BYREF
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v1 = *(this + 6);
  if ( v1 == 0x7FFFFFF )
  {
    v5 = 15;
    v4 = 0;
    v3[4] = 0;
    sub_10001A30((int)v3, 0, "list<T> too long", (char *)0x10);
    pExceptionObject[12] = 0;
    sub_10001050(pExceptionObject, (int)v3);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = v1 + 1;
  *(this + 6) = result;
  return result;
}

// Address: 0x1000F570
void *__fastcall sub_1000F570(unsigned int a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( 0xFFFFFFFF / a1 < 0x28 )
  {
    v2 = nullptr;
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&v2);
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  return operator new(40 * a1);
}

// Address: 0x1000F5D0
int __cdecl sub_1000F5D0(_DWORD *a1)
{
  _DWORD *v1; // ecx
  int result; // eax
  int v3; // ecx

  result = (int)a1;
  if ( v1 != nullptr )
  {
    *v1 = *a1;
    v3 = (int)(v1 + 1);
    *(_DWORD *)(v3 + 24) = 7;
    *(_DWORD *)(v3 + 20) = 0;
    *(_WORD *)(v3 + 4) = 0;
    return sub_100032E0(a1 + 1, v3, 0, 0xFFFFFFFF);
  }
  return result;
}

// Address: 0x1000F640
int __stdcall StartAddress(_DWORD *lpThreadParameter)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // edi
  std::tr1 *v5; // [esp+0h] [ebp-4h]

  if ( lpThreadParameter == nullptr )
    return 1;
  if ( lpThreadParameter[4] == 0 )
    std::tr1::_Xfunc(v5);
  v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)lpThreadParameter[4] + 4))(lpThreadParameter[4]);
  v3 = (_DWORD *)lpThreadParameter[4];
  v4 = v2;
  if ( v3 != nullptr )
  {
    (*(void (__stdcall **)(bool))(*v3 + 12))(v3 != lpThreadParameter);
    lpThreadParameter[4] = 0;
  }
  operator delete(lpThreadParameter);
  return v4;
}

// Address: 0x1000F6A0
_DWORD *__thiscall sub_1000F6A0(_DWORD *this, int a2)
{
  sub_10001050(this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x1000F6C0
_DWORD *__thiscall sub_1000F6C0(_DWORD *this, struct std::exception *a2)
{
  sub_100017A0((int)this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x1000F6E0
int __usercall sub_1000F6E0@<eax>(int a1@<ecx>, wchar_t *a2@<ebx>, wchar_t *Format, ...)
{
  int result; // eax
  unsigned int v4; // esi
  int v5; // edi
  int v6; // eax
  va_list Args; // [esp+8h] [ebp+8h] BYREF

  va_start(Args, Format);
  result = 0;
  if ( a1 <= 0 )
    result = -2147024809;
  if ( result >= 0 )
  {
    v4 = a1 - 1;
    v5 = 0;
    v6 = _vsnwprintf(a2, a1 - 1, Format, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      a2[v4] = 0;
      return -2147024774;
    }
    else if ( v6 == v4 )
    {
      a2[v4] = 0;
      return 0;
    }
    return v5;
  }
  return result;
}

// Address: 0x1000F740
_DWORD *__thiscall sub_1000F740(void *this, _DWORD *a2, int a3)
{
  int v4; // [esp+0h] [ebp-14h]

  a2[1] = a3;
  *a2 = &sheriff_engine::Updater::`vftable';
  a2[2] = this;
  a2[3] = 0;
  sub_10012900(a2 + 8);
  sub_10001B70((wchar_t *)L"Updater interface constructor.", v4);
  return a2;
}

// Address: 0x1000F7B0
void __thiscall sub_1000F7B0(void **this)
{
  void **v1; // esi

  v1 = this + 2;
  sub_10012B70();
  operator delete(*v1);
}

// Address: 0x1000F810
int __stdcall sub_1000F810(int a1)
{
  void *v1; // edi
  int result; // eax
  int v3; // [esp+0h] [ebp-1Ch]
  int v4; // [esp+0h] [ebp-1Ch]
  DWORD ExitCode; // [esp+Ch] [ebp-10h] BYREF
  int v6; // [esp+18h] [ebp-4h]

  *(_DWORD *)a1 = &sheriff_engine::Updater::`vftable';
  v6 = 1;
  sub_10001B70((wchar_t *)L"Updater interface destructor.", v3);
  v1 = *(void **)(a1 + 12);
  if ( v1 != nullptr )
  {
    ExitCode = -1;
    GetExitCodeThread(v1, &ExitCode);
    if ( ExitCode == 259 )
      WaitForSingleObject(v1, 0xFFFFFFFF);
  }
  if ( *(_DWORD *)(a1 + 12) != 0 )
  {
    CloseHandle(*(HANDLE *)(a1 + 12));
    *(_DWORD *)(a1 + 12) = 0;
  }
  sub_10001B70((wchar_t *)L"Thread release success.", v4);
  LOBYTE(v6) = 0;
  sub_1000F7B0((void **)(a1 + 24));
  result = *(_DWORD *)(a1 + 12);
  if ( result != 0 )
  {
    result = CloseHandle(*(HANDLE *)(a1 + 12));
    *(_DWORD *)(a1 + 12) = 0;
  }
  return result;
}

// Address: 0x1000F8E0
LSTATUS __stdcall sub_1000F8E0(BYTE Data)
{
  int v1; // esi
  LSTATUS result; // eax
  volatile signed __int32 *v3; // esi
  int v4; // [esp+10h] [ebp-28h] BYREF
  volatile signed __int32 *v5; // [esp+14h] [ebp-24h]
  struct _SYSTEMTIME SystemTime; // [esp+18h] [ebp-20h] BYREF
  int v7; // [esp+34h] [ebp-4h]

  sub_100065B0(&v4);
  v7 = 0;
  GetLocalTime(&SystemTime);
  sub_10001B70((wchar_t *)L"SetUpdataReg : %04d-%02d-%02d ( %d )", SystemTime.wYear);
  v1 = v4;
  RegSetValueExW(*(HKEY *)(v4 + 4), L"Time", 0, 3u, (const BYTE *)&SystemTime, 0x10u);
  result = RegSetValueExW(*(HKEY *)(v1 + 4), L"Count", 0, 4u, &Data, 4u);
  v7 = -1;
  v3 = v5;
  if ( v5 != nullptr )
  {
    result = (LSTATUS)(v5 + 2);
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
    }
  }
  return result;
}

// Address: 0x1000F9D0
char __userpurge sub_1000F9D0@<al>(_DWORD *a1@<edi>, _DWORD *a2)
{
  int v2; // esi
  volatile signed __int32 *v3; // esi
  int *v5; // eax
  volatile signed __int32 *v6; // ebx
  int *v7; // eax
  volatile signed __int32 *v8; // esi
  int v9; // esi
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  char v16; // bl
  volatile signed __int32 *v17; // esi
  volatile signed __int32 *v18; // esi
  volatile signed __int32 *v19; // esi
  int v20; // [esp+10h] [ebp-38h] BYREF
  volatile signed __int32 *v21; // [esp+14h] [ebp-34h]
  int v22; // [esp+18h] [ebp-30h] BYREF
  volatile signed __int32 *v23; // [esp+1Ch] [ebp-2Ch]
  int v24; // [esp+20h] [ebp-28h] BYREF
  volatile signed __int32 *v25; // [esp+24h] [ebp-24h]
  int v26; // [esp+28h] [ebp-20h] BYREF
  volatile signed __int32 *v27; // [esp+2Ch] [ebp-1Ch]
  int v28; // [esp+30h] [ebp-18h] BYREF
  volatile signed __int32 *v29; // [esp+34h] [ebp-14h]
  int v30; // [esp+44h] [ebp-4h]

  sub_10006540(0xF003Fu, L"SOFTWARE\\Innosoft\\HDD Sheriff Engine", &v26, HKEY_LOCAL_MACHINE);
  v30 = 0;
  v2 = v26;
  if ( v26 != 0 )
  {
    v25 = nullptr;
    v24 = 0;
    v23 = nullptr;
    v22 = 0;
    LOBYTE(v30) = 2;
    v5 = sub_1000C420(v26, &v20, L"Time");
    LOBYTE(v30) = 3;
    sub_1000EAA0(v5, &v24);
    LOBYTE(v30) = 2;
    if ( v21 != nullptr )
    {
      v6 = v21;
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
      }
    }
    v7 = sub_1000C420(v2, &v28, L"Count");
    LOBYTE(v30) = 4;
    sub_1000EAA0(v7, &v22);
    LOBYTE(v30) = 2;
    v8 = v29;
    if ( v29 != nullptr && _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v8 + 4))(v8);
    }
    if ( v24 != 0
      && (v9 = v22, v22 != 0)
      && (v10 = *(_DWORD *)(v24 + 8)) != 0
      && *(_DWORD *)(v10 + 20) != *(_DWORD *)(v10 + 16)
      && (v11 = *(_DWORD *)(v22 + 8)) != 0
      && *(_DWORD *)(v11 + 20) != *(_DWORD *)(v11 + 16) )
    {
      v12 = (_DWORD *)sub_1000C400(v24);
      v13 = v12[1];
      *a1 = *v12;
      v14 = v12[2];
      a1[1] = v13;
      v15 = v12[3];
      a1[2] = v14;
      a1[3] = v15;
      *a2 = *(_DWORD *)sub_1000C400(v9);
      v16 = 1;
      sub_10001B70((wchar_t *)L"GetUpdataReg : %04d-%02d-%02d ( %d )", *(unsigned __int16 *)a1);
    }
    else
    {
      v16 = 0;
    }
    LOBYTE(v30) = 1;
    v17 = v23;
    if ( v23 != nullptr && _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v17 + 4))(v17);
    }
    LOBYTE(v30) = 0;
    v18 = v25;
    if ( v25 != nullptr && _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v18 + 4))(v18);
    }
    v30 = -1;
    v19 = v27;
    if ( v27 != nullptr && _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v19 + 4))(v19);
    }
    return v16;
  }
  else
  {
    v30 = -1;
    v3 = v27;
    if ( v27 != nullptr && _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
    }
    return 0;
  }
}

// Address: 0x1000FC70
LSTATUS sub_1000FC70()
{
  LSTATUS result; // eax
  volatile signed __int32 *v1; // esi
  BYTE Data[4]; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+8h] [ebp-Ch] BYREF
  volatile signed __int32 *v4; // [esp+Ch] [ebp-8h]

  *(_DWORD *)Data = 1;
  sub_100065B0(&v3);
  result = RegSetValueExW(*(HKEY *)(v3 + 4), L"Force", 0, 4u, Data, 4u);
  v1 = v4;
  if ( v4 != nullptr )
  {
    result = (LSTATUS)(v4 + 2);
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
    }
  }
  return result;
}

// Address: 0x1000FCE0
int sub_1000FCE0()
{
  int v0; // edi
  volatile signed __int32 *v1; // esi
  int *v3; // eax
  volatile signed __int32 *v4; // esi
  int v5; // esi
  volatile signed __int32 *v6; // esi
  volatile signed __int32 *v7; // esi
  int v8; // [esp+18h] [ebp-24h] BYREF
  volatile signed __int32 *v9; // [esp+1Ch] [ebp-20h]
  int v10; // [esp+20h] [ebp-1Ch] BYREF
  volatile signed __int32 *v11; // [esp+24h] [ebp-18h]
  int v12; // [esp+28h] [ebp-14h] BYREF
  volatile signed __int32 *v13; // [esp+2Ch] [ebp-10h]
  int v14; // [esp+38h] [ebp-4h]

  v0 = 0;
  sub_10006540(0xF003Fu, L"SOFTWARE\\Innosoft\\HDD Sheriff Engine", &v10, HKEY_LOCAL_MACHINE);
  v14 = 0;
  if ( v10 != 0 )
  {
    v9 = nullptr;
    v8 = 0;
    LOBYTE(v14) = 1;
    v3 = sub_1000C420(v10, &v12, L"Force");
    LOBYTE(v14) = 2;
    sub_1000EAA0(v3, &v8);
    LOBYTE(v14) = 1;
    if ( v13 != nullptr )
    {
      v4 = v13;
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
      }
    }
    if ( v8 != 0 )
    {
      v5 = *(_DWORD *)(v8 + 8);
      if ( v5 != 0 && *(_DWORD *)(v5 + 20) != *(_DWORD *)(v5 + 16) )
      {
        v0 = **(_DWORD **)(v5 + 16);
        sub_10001B70((wchar_t *)L"GetForceUpdataReg : %d", v0);
      }
    }
    LOBYTE(v14) = 0;
    v6 = v9;
    if ( v9 != nullptr && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
    }
    v14 = -1;
    v7 = v11;
    if ( v11 != nullptr && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v7 + 4))(v7);
    }
    return v0;
  }
  else
  {
    v14 = -1;
    v1 = v11;
    if ( v11 != nullptr && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
    }
    return 0;
  }
}

// Address: 0x1000FEA0
int sub_1000FEA0()
{
  int result; // eax
  unsigned int v1; // [esp+4h] [ebp-28h] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+8h] [ebp-24h] BYREF
  int v3; // [esp+18h] [ebp-14h] BYREF
  int v4; // [esp+1Ch] [ebp-10h]
  int v5; // [esp+20h] [ebp-Ch]
  int v6; // [esp+24h] [ebp-8h]

  v1 = 0;
  memset(&SystemTime, 0, sizeof(SystemTime));
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  GetLocalTime(&SystemTime);
  if ( sub_1000F9D0(&v3, &v1) == 0 )
    return v1;
  if ( *(_DWORD *)&SystemTime.wYear != v3 || SystemTime.wDay != HIWORD(v4) )
    return 0;
  result = v1;
  if ( v1 >= 5 )
    return -1;
  return result;
}

// Address: 0x1000FF30
BOOL __fastcall sub_1000FF30(DWORD a1, int a2, int a3)
{
  DWORD dwLowDateTime; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  unsigned int *v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int *v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // ecx
  DWORD *v13; // eax
  DWORD v14; // ecx
  DWORD v15; // eax
  WORD *p_wDayOfWeek; // ecx
  const wchar_t *v17; // eax
  int v18; // edi
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // ebx
  int v24; // edx
  unsigned int v25; // esi
  int v26; // eax
  int v27; // ebp
  int v28; // eax
  int v29; // edi
  unsigned int v30; // ebp
  unsigned int v31; // edi
  int v32; // [esp+0h] [ebp-78h]
  struct _FILETIME FileTime; // [esp+14h] [ebp-64h] BYREF
  struct _FILETIME v34; // [esp+1Ch] [ebp-5Ch] BYREF
  unsigned int v35; // [esp+24h] [ebp-54h]
  int ArgList; // [esp+2Ch] [ebp-4Ch]
  SYSTEMTIME v37; // [esp+38h] [ebp-40h] BYREF
  SYSTEMTIME SystemTime; // [esp+48h] [ebp-30h] BYREF
  int v39; // [esp+5Ch] [ebp-1Ch]
  unsigned int v40; // [esp+60h] [ebp-18h]
  int v41; // [esp+74h] [ebp-4h]

  dwLowDateTime = a1;
  v34.dwLowDateTime = a1;
  if ( *(_DWORD *)(a1 + 116) != 0 )
  {
    SystemTime.wDayOfWeek = 0;
    v40 = 7;
    v39 = 0;
    sub_10003390(L"mediaweb", &SystemTime, 8u);
    v41 = 0;
    sub_10001B70((wchar_t *)L"Updater : CheckWinVerifyTrust destination Verified", v32);
    v4 = *(_DWORD *)(dwLowDateTime + 52);
    v5 = (_DWORD *)(dwLowDateTime + 28);
    v6 = v5 + 1;
    if ( v4 < 8 )
    {
      v35 = (unsigned int)(v5 + 1);
      v7 = (unsigned int)(v5 + 1);
    }
    else
    {
      v7 = *v6;
      v35 = *v6;
    }
    if ( v7 == 0 )
      goto LABEL_13;
    v8 = v4 < 8 ? (unsigned int)(v5 + 1) : *v6;
    if ( v8 > v7 )
      goto LABEL_13;
    if ( v4 >= 8 )
      v6 = (unsigned int *)*v6;
    if ( v7 > (unsigned int)v6 + 2 * v5[5] )
LABEL_13:
      _invalid_parameter_noinfo();
    v9 = v5[6];
    v10 = v5 + 1;
    if ( v9 < 8 )
      v11 = (unsigned int)(v5 + 1);
    else
      v11 = *v10;
    if ( v11 == 0 )
      goto LABEL_25;
    v12 = v9 < 8 ? (unsigned int)(v5 + 1) : *v10;
    if ( v12 > v11 )
      goto LABEL_25;
    if ( v9 >= 8 )
      v10 = (unsigned int *)*v10;
    if ( v11 > (unsigned int)v10 + 2 * v5[5] )
LABEL_25:
      _invalid_parameter_noinfo();
    v13 = (DWORD *)sub_10012540();
    v14 = *v13;
    v15 = v13[1];
    FileTime.dwLowDateTime = v14;
    LOBYTE(FileTime.dwLowDateTime) = 0;
    sub_10013940(v15, FileTime.dwLowDateTime, FileTime.dwLowDateTime, (char)v5, v35);
    p_wDayOfWeek = *(WORD **)&SystemTime.wDayOfWeek;
    if ( v40 < 8 )
      p_wDayOfWeek = &SystemTime.wDayOfWeek;
    if ( v5[6] < 8u )
      v17 = (const wchar_t *)(v5 + 1);
    else
      v17 = (const wchar_t *)v5[1];
    if ( wcsstr(v17, p_wDayOfWeek) != nullptr )
    {
      if ( v5[6] < 8u )
        v18 = (int)(v5 + 1);
      else
        v18 = v5[1];
      sub_10001B70((wchar_t *)L"Updater : QueryVerifyTrust find subject string : %s", v18);
      if ( v40 >= 8 )
        operator delete(*(void **)&SystemTime.wDayOfWeek);
      return true;
    }
    v41 = -1;
    if ( v40 >= 8 )
      operator delete(*(void **)&SystemTime.wDayOfWeek);
    dwLowDateTime = v34.dwLowDateTime;
  }
  if ( *(_DWORD *)(a3 + 116) != 0 )
    sub_10001B70((wchar_t *)L"Updater : CheckWinVerifyTrust source Verified", v32);
  v20 = *(_DWORD *)(a3 + 128);
  v21 = *(_DWORD *)(a3 + 120);
  *(_DWORD *)&SystemTime.wDayOfWeek = *(_DWORD *)(a3 + 124);
  *(_DWORD *)&SystemTime.wHour = v20;
  *(_DWORD *)&SystemTime.wYear = v21;
  *(_DWORD *)&SystemTime.wSecond = *(_DWORD *)(a3 + 132);
  SystemTimeToFileTime(&SystemTime, &FileTime);
  v22 = *(_DWORD *)(dwLowDateTime + 128);
  v23 = (unsigned __int64)((__int64)(FileTime.dwLowDateTime + ((unsigned __int64)FileTime.dwHighDateTime << 32))
                         / 10000000) >> 32;
  ArgList = (__int64)(FileTime.dwLowDateTime + ((unsigned __int64)FileTime.dwHighDateTime << 32)) / 10000000;
  v24 = *(_DWORD *)(dwLowDateTime + 120);
  *(_DWORD *)&v37.wDayOfWeek = *(_DWORD *)(dwLowDateTime + 124);
  *(_DWORD *)&v37.wHour = v22;
  *(_DWORD *)&v37.wYear = v24;
  *(_DWORD *)&v37.wSecond = *(_DWORD *)(dwLowDateTime + 132);
  SystemTimeToFileTime(&v37, &v34);
  v25 = (unsigned __int64)((__int64)(v34.dwLowDateTime + ((unsigned __int64)v34.dwHighDateTime << 32)) / 10000000) >> 32;
  v35 = (__int64)(v34.dwLowDateTime + ((unsigned __int64)v34.dwHighDateTime << 32)) / 10000000;
  sub_10001B70((wchar_t *)L"Source Timestamp = %.2d/%.2d/%.4d at %.2d:%.2d:%.2d", *(unsigned __int16 *)(a3 + 126));
  if ( *(_DWORD *)(a3 + 52) < 8u )
    v26 = a3 + 32;
  else
    v26 = *(_DWORD *)(a3 + 32);
  sub_10001B70((wchar_t *)L"Source subject string : %s", v26);
  if ( *(_DWORD *)(a3 + 24) < 8u )
    v27 = a3 + 4;
  else
    v27 = *(_DWORD *)(a3 + 4);
  sub_10001B70((wchar_t *)L"Source Issuer string : %s", v27);
  sub_10001B70(
    (wchar_t *)L"Destination Timestamp = %.2d/%.2d/%.4d at %.2d:%.2d:%.2d",
    *(unsigned __int16 *)(dwLowDateTime + 126));
  if ( *(_DWORD *)(dwLowDateTime + 52) < 8u )
    v28 = dwLowDateTime + 32;
  else
    v28 = *(_DWORD *)(dwLowDateTime + 32);
  sub_10001B70((wchar_t *)L"Destination subject string : %s", v28);
  if ( *(_DWORD *)(dwLowDateTime + 24) < 8u )
    v29 = dwLowDateTime + 4;
  else
    v29 = *(_DWORD *)(dwLowDateTime + 4);
  sub_10001B70((wchar_t *)L"Destination Issuer string : %s", v29);
  v30 = v35;
  v31 = ArgList;
  sub_10001B70((wchar_t *)L"AbsTimestamp = Src : %lld, Dest : %lld", ArgList);
  return v23 >= v25 && (v23 > v25 || v31 > v30);
}

// Address: 0x100102E0
int __stdcall sub_100102E0(
        int a1,
        void **a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        void *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        unsigned int a14)
{
  bool v14; // zf
  void **v15; // eax
  void **v17; // eax

  v14 = sub_10019050() == 0;
  v15 = a2;
  if ( v14 )
  {
    if ( a7 < 8 )
      v15 = (void **)&a2;
    sub_10001B70((wchar_t *)L"Updater : QueryVerifyTrust source failed : %s", (int)v15);
LABEL_5:
    if ( a7 >= 8 )
      operator delete(a2);
    a7 = 7;
    a6 = 0;
    LOWORD(a2) = 0;
    if ( a14 >= 8 )
      operator delete(a9);
    return 0;
  }
  if ( a7 < 8 )
    v15 = (void **)&a2;
  sub_10001B70((wchar_t *)L"Updater : QueryVerifyTrust source success : %s", (int)v15);
  v14 = sub_10019050() == 0;
  v17 = (void **)a9;
  if ( v14 )
  {
    if ( a14 < 8 )
      v17 = &a9;
    sub_10001B70(L"Updater : QueryVerifyTrust destination failed : %s", (int)v17);
    goto LABEL_5;
  }
  if ( a14 < 8 )
    v17 = &a9;
  sub_10001B70((wchar_t *)L"Updater : QueryVerifyTrust destination success : %s", (int)v17);
  if ( a7 >= 8 )
    operator delete(a2);
  a7 = 7;
  a6 = 0;
  LOWORD(a2) = 0;
  if ( a14 >= 8 )
    operator delete(a9);
  return 1;
}

// Address: 0x10010460
int __fastcall sub_10010460(unsigned __int16 a1, _DWORD *a2, LPCVOID pBlock, unsigned __int16 a4, int a5)
{
  LPVOID lpBuffer; // [esp+10h] [ebp-214h] BYREF
  unsigned int puLen; // [esp+14h] [ebp-210h] BYREF
  WCHAR SubBlock[260]; // [esp+18h] [ebp-20Ch] BYREF

  if ( sub_1000F6E0(260, SubBlock, L"\\StringFileInfo\\%04x%04x\\%s", a1, a4, a5) < 0
    || !VerQueryValueW(pBlock, SubBlock, &lpBuffer, &puLen) )
  {
    return 0;
  }
  sub_10003390(lpBuffer, a2, wcslen((const unsigned __int16 *)lpBuffer));
  return 1;
}

// Address: 0x10010510
int __userpurge sub_10010510@<eax>(const WCHAR *a1@<eax>, _WORD *a2)
{
  int v2; // ebx
  DWORD FileVersionInfoSizeW; // eax
  DWORD v5; // edi
  void *v7; // eax
  void *v8; // ebp
  _WORD *v9; // eax
  unsigned int v10; // esi
  unsigned __int16 v11; // di
  unsigned __int16 v12; // bx
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int puLen; // [esp+10h] [ebp-10h] BYREF
  LPVOID lpBuffer; // [esp+14h] [ebp-Ch] BYREF
  LPVOID v25; // [esp+18h] [ebp-8h] BYREF
  unsigned int v26; // [esp+1Ch] [ebp-4h] BYREF

  v2 = 0;
  FileVersionInfoSizeW = GetFileVersionInfoSizeW(a1, nullptr);
  v5 = FileVersionInfoSizeW;
  if ( FileVersionInfoSizeW == 0 )
    return 0;
  v7 = operator new[](FileVersionInfoSizeW);
  v8 = v7;
  if ( v7 == nullptr )
    return 0;
  if ( GetFileVersionInfoW(a1, 0, v5, v7) )
  {
    lpBuffer = nullptr;
    puLen = 0;
    if ( VerQueryValueW(v8, SubBlock, &lpBuffer, &puLen) )
    {
      v9 = lpBuffer;
      *a2 = *((_WORD *)lpBuffer + 5);
      a2[1] = v9[4];
      a2[2] = v9[7];
      a2[3] = v9[6];
    }
    if ( VerQueryValueW(v8, L"\\VarFileInfo\\Translation", &v25, &puLen) )
    {
      v10 = 0;
      if ( (puLen & 0xFFFFFFFC) != 0 )
      {
        do
        {
          v11 = *((_WORD *)v25 + 2 * v10);
          v12 = *((_WORD *)v25 + 2 * v10 + 1);
          v26 = v10;
          v13 = (_DWORD *)sub_10012590(&v26);
          sub_10010460(v11, v13, v8, v12, (int)L"CompanyName");
          v26 = v10;
          v14 = sub_10012590(&v26);
          sub_10010460(v11, (_DWORD *)(v14 + 28), v8, v12, (int)L"FileDescription");
          v26 = v10;
          v15 = sub_10012590(&v26);
          sub_10010460(v11, (_DWORD *)(v15 + 56), v8, v12, (int)L"FileVersion");
          v26 = v10;
          v16 = sub_10012590(&v26);
          sub_10010460(v11, (_DWORD *)(v16 + 84), v8, v12, (int)L"InternalName");
          v26 = v10;
          v17 = sub_10012590(&v26);
          sub_10010460(v11, (_DWORD *)(v17 + 112), v8, v12, (int)L"LegalCopyright");
          v26 = v10;
          v18 = sub_10012590(&v26);
          sub_10010460(v11, (_DWORD *)(v18 + 140), v8, v12, (int)L"LegalTrademarks1");
          v26 = v10;
          v19 = sub_10012590(&v26);
          sub_10010460(v11, (_DWORD *)(v19 + 168), v8, v12, (int)L"LegalTrademarks2");
          v26 = v10;
          v20 = sub_10012590(&v26);
          sub_10010460(v11, (_DWORD *)(v20 + 196), v8, v12, (int)L"OriginalFilename");
          v26 = v10;
          v21 = sub_10012590(&v26);
          sub_10010460(v11, (_DWORD *)(v21 + 224), v8, v12, (int)L"ProductName");
          v26 = v10;
          v22 = sub_10012590(&v26);
          sub_10010460(v11, (_DWORD *)(v22 + 252), v8, v12, (int)L"ProductVersion");
          ++v10;
        }
        while ( v10 < puLen >> 2 );
      }
    }
    v2 = 1;
  }
  operator delete(v8);
  return v2;
}

// Address: 0x10010790
char __thiscall sub_10010790(_DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int *v7; // edx
  unsigned int v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // edx
  unsigned __int16 *v20; // eax
  unsigned __int16 *v21; // esi
  unsigned int v22; // ecx
  unsigned int v23; // edi
  _DWORD *v24; // ecx
  _DWORD *v25; // edx
  unsigned int v26; // eax
  int v27; // edi
  const wchar_t *v28; // edi
  int v29; // eax
  const wchar_t *v30; // eax
  const wchar_t *v31; // edi
  int v32; // eax
  const wchar_t *v33; // eax
  const wchar_t *v34; // edi
  int v35; // eax
  const wchar_t *v36; // ebx
  _DWORD *v38; // [esp+14h] [ebp-78h]
  _DWORD *v39; // [esp+18h] [ebp-74h]
  char *v40; // [esp+1Ch] [ebp-70h]
  unsigned int v42; // [esp+24h] [ebp-68h]
  int v43; // [esp+28h] [ebp-64h] BYREF
  wchar_t *v44; // [esp+2Ch] [ebp-60h] BYREF
  int v45; // [esp+3Ch] [ebp-50h]
  unsigned int v46; // [esp+40h] [ebp-4Ch]
  int v47; // [esp+44h] [ebp-48h] BYREF
  wchar_t *v48; // [esp+48h] [ebp-44h] BYREF
  int v49; // [esp+58h] [ebp-34h]
  unsigned int v50; // [esp+5Ch] [ebp-30h]
  int v51; // [esp+60h] [ebp-2Ch] BYREF
  wchar_t *SubStr[5]; // [esp+64h] [ebp-28h] BYREF
  unsigned int v53; // [esp+78h] [ebp-14h]
  int v54; // [esp+88h] [ebp-4h]

  v1 = this;
  LOWORD(SubStr[0]) = 0;
  v53 = 7;
  SubStr[4] = nullptr;
  sub_10003390(L"mediaweb", &v51, 8u);
  v54 = 0;
  v50 = 7;
  v49 = 0;
  LOWORD(v48) = 0;
  sub_10003390(L"innosoft", &v47, 8u);
  LOBYTE(v54) = 1;
  v46 = 7;
  v45 = 0;
  LOWORD(v44) = 0;
  sub_10003390(L"senul", &v43, 5u);
  v2 = (_DWORD *)v1[2];
  v38 = v2;
  v39 = *(_DWORD **)v1[8];
  while ( 1 )
  {
    v3 = (_DWORD *)v1[8];
    if ( v2 == nullptr || v2 != (_DWORD *)v1[2] )
      _invalid_parameter_noinfo();
    if ( v39 == v3 )
      break;
    if ( v2 != nullptr )
    {
      v4 = *v2;
    }
    else
    {
      _invalid_parameter_noinfo();
      v4 = 0;
    }
    if ( v39 == *(_DWORD **)(v4 + 24) )
      _invalid_parameter_noinfo();
    if ( v39[9] != 0 )
    {
      if ( v2 != nullptr )
      {
        v5 = *v2;
      }
      else
      {
        _invalid_parameter_noinfo();
        v5 = 0;
      }
      if ( v39 == *(_DWORD **)(v5 + 24) )
        _invalid_parameter_noinfo();
      v6 = v39[10];
      v7 = v39 + 5;
      if ( v6 < 8 )
      {
        v8 = (unsigned int)(v39 + 5);
        v40 = (char *)(v39 + 5);
      }
      else
      {
        v8 = *v7;
        v40 = (char *)*v7;
      }
      if ( v8 == 0
        || (v6 < 8 ? (v9 = v39 + 5) : (v9 = (_DWORD *)*v7),
            (unsigned int)v9 > v8
         || (v6 < 8 ? (v10 = v39 + 5) : (v10 = (_DWORD *)*v7), v8 > (unsigned int)v10 + 2 * v39[9])) )
      {
        _invalid_parameter_noinfo();
      }
      if ( v2 != nullptr )
      {
        v11 = *v2;
      }
      else
      {
        _invalid_parameter_noinfo();
        v11 = 0;
      }
      if ( v39 == *(_DWORD **)(v11 + 24) )
        _invalid_parameter_noinfo();
      v12 = v39[10];
      v13 = v39 + 5;
      if ( v12 < 8 )
        v14 = v39 + 5;
      else
        v14 = (_DWORD *)*v13;
      v15 = 2 * v39[9];
      v16 = (unsigned int)v14 + v15;
      v42 = (unsigned int)v14 + v15;
      if ( (_DWORD *)((char *)v14 + v15) == nullptr )
        goto LABEL_46;
      v17 = v12 < 8 ? (unsigned int)(v39 + 5) : *v13;
      if ( v17 > v16 )
        goto LABEL_46;
      if ( v12 >= 8 )
        v13 = (_DWORD *)*v13;
      if ( v16 > (unsigned int)v13 + v15 )
LABEL_46:
        _invalid_parameter_noinfo();
      if ( v2 != nullptr )
      {
        v18 = *v2;
      }
      else
      {
        _invalid_parameter_noinfo();
        v18 = 0;
      }
      if ( v39 == *(_DWORD **)(v18 + 24) )
        _invalid_parameter_noinfo();
      v19 = v39[10];
      v20 = (unsigned __int16 *)(v39 + 5);
      if ( v19 < 8 )
        v21 = (unsigned __int16 *)(v39 + 5);
      else
        v21 = *(unsigned __int16 **)v20;
      if ( v21 == nullptr )
        goto LABEL_63;
      v22 = v19 < 8 ? (unsigned int)(v39 + 5) : *(_DWORD *)v20;
      if ( v22 > (unsigned int)v21 )
        goto LABEL_63;
      if ( v19 >= 8 )
        v20 = *(unsigned __int16 **)v20;
      if ( v21 > &v20[v39[9]] )
LABEL_63:
        _invalid_parameter_noinfo();
      if ( v39 != (_DWORD *)-20 )
      {
        v23 = v39[10];
        v24 = v39 + 5;
        if ( v23 < 8 )
          v25 = v39 + 5;
        else
          v25 = (_DWORD *)*v24;
        v26 = (unsigned int)&v40[2 * ((int)(v16 - (_DWORD)v21) >> 1)];
        if ( v26 > (unsigned int)v25 + 2 * v39[9] )
          goto LABEL_72;
        if ( v23 >= 8 )
          v24 = (_DWORD *)*v24;
        if ( v26 < (unsigned int)v24 )
LABEL_72:
          _invalid_parameter_noinfo();
        v16 = v42;
      }
      if ( v21 != (unsigned __int16 *)v16 )
      {
        v27 = v40 - (char *)v21;
        do
        {
          *(unsigned __int16 *)((char *)v21 + v27) = tolower(*v21);
          ++v21;
        }
        while ( v21 != (unsigned __int16 *)v16 );
      }
      v28 = SubStr[0];
      if ( v53 < 8 )
        v28 = (const wchar_t *)SubStr;
      if ( v38 != nullptr )
      {
        v29 = *v38;
      }
      else
      {
        _invalid_parameter_noinfo();
        v29 = 0;
      }
      if ( v39 == *(_DWORD **)(v29 + 24) )
        _invalid_parameter_noinfo();
      if ( v39[10] < 8u )
        v30 = (const wchar_t *)(v39 + 5);
      else
        v30 = (const wchar_t *)v39[5];
      if ( wcsstr(v30, v28) != nullptr )
      {
        if ( v46 >= 8 )
          operator delete(v44);
        v46 = 7;
        v45 = 0;
        LOWORD(v44) = 0;
        if ( v50 >= 8 )
          operator delete(v48);
        v50 = 7;
        v49 = 0;
        LOWORD(v48) = 0;
        if ( v53 >= 8 )
          operator delete(SubStr[0]);
        return 1;
      }
      v31 = v48;
      if ( v50 < 8 )
        v31 = (const wchar_t *)&v48;
      if ( v38 != nullptr )
      {
        v32 = *v38;
      }
      else
      {
        _invalid_parameter_noinfo();
        v32 = 0;
      }
      if ( v39 == *(_DWORD **)(v32 + 24) )
        _invalid_parameter_noinfo();
      if ( v39[10] < 8u )
        v33 = (const wchar_t *)(v39 + 5);
      else
        v33 = (const wchar_t *)v39[5];
      if ( wcsstr(v33, v31) != nullptr )
      {
        if ( v46 >= 8 )
          operator delete(v44);
        v46 = 7;
        v45 = 0;
        LOWORD(v44) = 0;
        if ( v50 >= 8 )
          operator delete(v48);
        v50 = 7;
        v49 = 0;
        LOWORD(v48) = 0;
        if ( v53 >= 8 )
        {
LABEL_123:
          operator delete(SubStr[0]);
          return 1;
        }
        return 1;
      }
      v34 = v44;
      if ( v46 < 8 )
        v34 = (const wchar_t *)&v44;
      if ( v38 != nullptr )
      {
        v35 = *v38;
      }
      else
      {
        _invalid_parameter_noinfo();
        v35 = 0;
      }
      if ( v39 == *(_DWORD **)(v35 + 24) )
        _invalid_parameter_noinfo();
      if ( v39[10] < 8u )
        v36 = (const wchar_t *)(v39 + 5);
      else
        v36 = (const wchar_t *)v39[5];
      if ( wcsstr(v36, v34) != nullptr )
      {
        if ( v46 >= 8 )
          operator delete(v44);
        v46 = 7;
        v45 = 0;
        LOWORD(v44) = 0;
        if ( v50 >= 8 )
          operator delete(v48);
        v50 = 7;
        v49 = 0;
        LOWORD(v48) = 0;
        if ( v53 >= 8 )
          goto LABEL_123;
        return 1;
      }
    }
    sub_10013720();
    v2 = v38;
    v1 = this;
  }
  if ( v46 >= 8 )
    operator delete(v44);
  v46 = 7;
  v45 = 0;
  LOWORD(v44) = 0;
  if ( v50 >= 8 )
    operator delete(v48);
  v50 = 7;
  v49 = 0;
  LOWORD(v48) = 0;
  if ( v53 >= 8 )
    operator delete(SubStr[0]);
  return 0;
}

// Address: 0x10010CE0
char __thiscall sub_10010CE0(
        const unsigned __int16 *this,
        int a2,
        void *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        void *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        unsigned int a15,
        int a16,
        void *a17,
        int a18,
        int a19,
        int a20,
        int a21,
        unsigned int a22,
        int a23)
{
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  LPCWSTR *v26; // ecx
  LPCWSTR *v27; // eax
  const WCHAR *v28; // ecx
  const WCHAR *v29; // eax
  const WCHAR *v30; // ecx
  const WCHAR *v31; // eax
  const WCHAR *v33; // eax
  bool v34; // zf
  const WCHAR *v35; // eax
  LPCWSTR *v36; // eax
  int v37; // edx
  const WCHAR *v38; // ecx
  const WCHAR *v39; // eax
  const WCHAR *v40; // ecx
  const WCHAR *v41; // eax
  const WCHAR *v42; // eax
  DWORD LastError; // eax
  const WCHAR *v44; // ecx
  const WCHAR *v45; // eax
  const WCHAR *v46; // eax
  LPCWSTR *v47; // eax
  __int16 v48; // cx
  __int16 v49; // dx
  unsigned __int16 v50; // si
  unsigned __int16 v51; // ax
  unsigned __int16 v52; // cx
  unsigned __int16 v53; // dx
  const WCHAR *v54; // ecx
  const WCHAR *v55; // eax
  int v56; // [esp-38h] [ebp-274h] BYREF
  void **v57; // [esp-34h] [ebp-270h]
  int v58; // [esp-30h] [ebp-26Ch]
  int v59; // [esp-2Ch] [ebp-268h]
  int v60; // [esp-28h] [ebp-264h]
  int v61; // [esp-24h] [ebp-260h]
  unsigned int v62; // [esp-20h] [ebp-25Ch]
  int v63; // [esp-1Ch] [ebp-258h] BYREF
  void *v64; // [esp-18h] [ebp-254h]
  int v65; // [esp-14h] [ebp-250h]
  int v66; // [esp-10h] [ebp-24Ch]
  int v67; // [esp-Ch] [ebp-248h]
  int v68; // [esp-8h] [ebp-244h]
  DWORD v69; // [esp-4h] [ebp-240h]
  int v70; // [esp+0h] [ebp-23Ch]
  int ArgList; // [esp+14h] [ebp-228h]
  int v72; // [esp+18h] [ebp-224h] BYREF
  void *v73; // [esp+1Ch] [ebp-220h]
  int v74; // [esp+2Ch] [ebp-210h]
  unsigned int v75; // [esp+30h] [ebp-20Ch]
  unsigned __int64 v76; // [esp+34h] [ebp-208h] BYREF
  _BYTE v77[32]; // [esp+3Ch] [ebp-200h] BYREF
  unsigned __int64 v78; // [esp+5Ch] [ebp-1E0h] BYREF
  _BYTE v79[36]; // [esp+64h] [ebp-1D8h] BYREF
  _BYTE v80[4]; // [esp+88h] [ebp-1B4h] BYREF
  void *v81; // [esp+8Ch] [ebp-1B0h]
  int v82; // [esp+9Ch] [ebp-1A0h]
  unsigned int v83; // [esp+A0h] [ebp-19Ch]
  int v84; // [esp+A4h] [ebp-198h] BYREF
  void *v85; // [esp+A8h] [ebp-194h]
  int v86; // [esp+B8h] [ebp-184h]
  unsigned int v87; // [esp+BCh] [ebp-180h]
  int *v88; // [esp+C0h] [ebp-17Ch]
  int *v89; // [esp+C4h] [ebp-178h]
  int v90; // [esp+C8h] [ebp-174h] BYREF
  LPCWSTR lpExistingFileName[4]; // [esp+CCh] [ebp-170h] BYREF
  int v92; // [esp+DCh] [ebp-160h]
  unsigned int v93; // [esp+E0h] [ebp-15Ch]
  int v94; // [esp+E4h] [ebp-158h] BYREF
  LPCWSTR v95[4]; // [esp+E8h] [ebp-154h] BYREF
  int v96; // [esp+F8h] [ebp-144h]
  unsigned int v97; // [esp+FCh] [ebp-140h]
  _BYTE v98[4]; // [esp+100h] [ebp-13Ch] BYREF
  LPCWSTR lpNewFileName[4]; // [esp+104h] [ebp-138h] BYREF
  int v100; // [esp+114h] [ebp-128h]
  unsigned int v101; // [esp+118h] [ebp-124h]
  _BYTE v102[136]; // [esp+11Ch] [ebp-120h] BYREF
  _BYTE v103[136]; // [esp+1A4h] [ebp-98h] BYREF
  int v104; // [esp+238h] [ebp-4h]

  ArgList = (int)this;
  v104 = 2;
  sub_10012900(v79);
  LOBYTE(v104) = 3;
  sub_10012900(v77);
  LOBYTE(v104) = 4;
  sub_10018920(v103);
  LOBYTE(v104) = 5;
  sub_10018920(v102);
  LOBYTE(v104) = 6;
  v75 = 7;
  v74 = 0;
  LOWORD(v73) = 0;
  sub_10003390((_BYTE *)ArgList, &v72, wcslen(this));
  LOBYTE(v104) = 7;
  v24 = (_DWORD *)sub_10006490((int)v80, &a2, &v72);
  LOBYTE(v104) = 8;
  sub_10006490((int)&v94, v24, &a16);
  if ( v83 >= 8 )
    operator delete(v81);
  v83 = 7;
  v82 = 0;
  LOWORD(v81) = 0;
  LOBYTE(v104) = 11;
  if ( v75 >= 8 )
    operator delete(v73);
  LOWORD(v85) = 0;
  LOWORD(v73) = 0;
  v75 = 7;
  v74 = 0;
  v87 = 7;
  v86 = 0;
  sub_10003390((_BYTE *)ArgList, &v84, wcslen((const unsigned __int16 *)ArgList));
  LOBYTE(v104) = 12;
  sub_10006490((int)&v90, &a9, &v84);
  LOBYTE(v104) = 14;
  if ( v87 >= 8 )
    operator delete(v85);
  LOWORD(v73) = 0;
  v87 = 7;
  v86 = 0;
  LOWORD(v85) = 0;
  v75 = 7;
  v74 = 0;
  sub_10003390((_BYTE *)ArgList, &v72, wcslen((const unsigned __int16 *)ArgList));
  LOBYTE(v104) = 15;
  v25 = (_DWORD *)sub_10006490((int)v80, &a9, &v72);
  LOBYTE(v104) = 16;
  sub_10006490((int)v98, v25, &a16);
  if ( v83 >= 8 )
    operator delete(v81);
  v83 = 7;
  v82 = 0;
  LOWORD(v81) = 0;
  LOBYTE(v104) = 19;
  if ( v75 >= 8 )
    operator delete(v73);
  v26 = (LPCWSTR *)lpExistingFileName[0];
  v75 = 7;
  v74 = 0;
  LOWORD(v73) = 0;
  if ( v93 < 8 )
    v26 = lpExistingFileName;
  v27 = (LPCWSTR *)v95[0];
  if ( v97 < 8 )
    v27 = v95;
  v69 = (DWORD)v26;
  sub_10001B70((wchar_t *)L"UpdateFile file : %s, %s", (int)v27);
  if ( a23 != 0 )
  {
    v28 = lpNewFileName[0];
    if ( v101 < 8 )
      v28 = (const WCHAR *)lpNewFileName;
    v29 = lpExistingFileName[0];
    if ( v93 < 8 )
      v29 = (const WCHAR *)lpExistingFileName;
    MoveFileW(v29, v28);
    v30 = lpExistingFileName[0];
    if ( v93 < 8 )
      v30 = (const WCHAR *)lpExistingFileName;
    v31 = v95[0];
    if ( v97 < 8 )
      v31 = (const WCHAR *)v95;
    if ( CopyFileW(v31, v30, false) )
    {
      sub_10001B70((wchar_t *)L"Update CopyFile success : %s", ArgList);
      if ( v101 >= 8 )
        operator delete((void *)lpNewFileName[0]);
      v101 = 7;
      v100 = 0;
      LOWORD(lpNewFileName[0]) = 0;
      if ( v93 >= 8 )
        operator delete((void *)lpExistingFileName[0]);
      v93 = 7;
      v92 = 0;
      LOWORD(lpExistingFileName[0]) = 0;
      if ( v97 >= 8 )
        operator delete((void *)v95[0]);
      v97 = 7;
      v96 = 0;
      LOWORD(v95[0]) = 0;
      LOBYTE(v104) = 5;
      sub_10018A30(v102);
      LOBYTE(v104) = 4;
      sub_10018A30(v103);
      LOBYTE(v104) = 3;
      sub_1000F7B0((void **)&v76);
      LOBYTE(v104) = 2;
      sub_1000F7B0((void **)&v78);
      if ( a8 >= 8 )
        operator delete(a3);
      a8 = 7;
      a7 = 0;
      LOWORD(a3) = 0;
      if ( a15 >= 8 )
        operator delete(a10);
      a15 = 7;
      a14 = 0;
      LOWORD(a10) = 0;
      if ( a22 >= 8 )
        operator delete(a17);
      return 1;
    }
  }
  v33 = lpExistingFileName[0];
  v76 = 0;
  v78 = 0;
  if ( v93 < 8 )
    v33 = (const WCHAR *)lpExistingFileName;
  v34 = GetFileAttributesW(v33) == -1;
  v35 = lpExistingFileName[0];
  if ( v34 )
  {
    if ( v93 < 8 )
      v35 = (const WCHAR *)lpExistingFileName;
    sub_10001B70((wchar_t *)L"Updater : File does not exist. : %s", (int)v35);
    if ( v101 >= 8 )
      operator delete((void *)lpNewFileName[0]);
    v101 = 7;
    v100 = 0;
    LOWORD(lpNewFileName[0]) = 0;
    if ( v93 >= 8 )
      operator delete((void *)lpExistingFileName[0]);
    v93 = 7;
    v92 = 0;
    LOWORD(lpExistingFileName[0]) = 0;
    if ( v97 >= 8 )
      operator delete((void *)v95[0]);
    v97 = 7;
    v96 = 0;
    LOWORD(v95[0]) = 0;
    LOBYTE(v104) = 5;
    sub_10018A30(v102);
    LOBYTE(v104) = 4;
    sub_10018A30(v103);
    LOBYTE(v104) = 3;
    sub_1000F7B0((void **)&v76);
    LOBYTE(v104) = 2;
    sub_1000F7B0((void **)&v78);
    if ( a8 >= 8 )
      operator delete(a3);
    a8 = 7;
    a7 = 0;
    LOWORD(a3) = 0;
    if ( a15 >= 8 )
      operator delete(a10);
    a15 = 7;
    a14 = 0;
    LOWORD(a10) = 0;
    if ( a22 < 8 )
      return 0;
    goto LABEL_54;
  }
  if ( v93 < 8 )
    v35 = (const WCHAR *)lpExistingFileName;
  if ( sub_10010510(v35, &v76) == 0 )
  {
    v36 = (LPCWSTR *)lpExistingFileName[0];
    if ( v93 < 8 )
      v36 = lpExistingFileName;
    sub_10001B70((wchar_t *)L"Updater : QueryFileInformation fail : %s", (int)v36);
    if ( v101 >= 8 )
      operator delete((void *)lpNewFileName[0]);
    v101 = 7;
    v100 = 0;
    LOWORD(lpNewFileName[0]) = 0;
    if ( v93 >= 8 )
      operator delete((void *)lpExistingFileName[0]);
    v93 = 7;
    v92 = 0;
    LOWORD(lpExistingFileName[0]) = 0;
    if ( v97 >= 8 )
      operator delete((void *)v95[0]);
    v97 = 7;
    v96 = 0;
    LOWORD(v95[0]) = 0;
    LOBYTE(v104) = 5;
    sub_10018A30(v102);
    LOBYTE(v104) = 4;
    sub_10018A30(v103);
    LOBYTE(v104) = 3;
    sub_1000F7B0((void **)&v76);
    LOBYTE(v104) = 2;
    sub_1000F7B0((void **)&v78);
    if ( a8 >= 8 )
      operator delete(a3);
    a8 = 7;
    a7 = 0;
    LOWORD(a3) = 0;
    if ( a15 >= 8 )
      operator delete(a10);
    a15 = 7;
    a14 = 0;
    LOWORD(a10) = 0;
    if ( a22 < 8 )
      return 0;
LABEL_54:
    operator delete(a17);
    return 0;
  }
  v89 = &v63;
  v69 = 7;
  v68 = 0;
  LOWORD(v64) = 0;
  sub_100032E0(&v90, (int)&v63, 0, 0xFFFFFFFF);
  v88 = &v56;
  LOBYTE(v104) = 20;
  v62 = 7;
  v61 = 0;
  LOWORD(v57) = 0;
  sub_100032E0(&v94, (int)&v56, 0, 0xFFFFFFFF);
  LOBYTE(v104) = 19;
  if ( sub_100102E0(v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69) != 0
    && sub_1000FF30((DWORD)v102, v37, (int)v103) )
  {
    v38 = lpNewFileName[0];
    if ( v101 < 8 )
      v38 = (const WCHAR *)lpNewFileName;
    v39 = lpExistingFileName[0];
    if ( v93 < 8 )
      v39 = (const WCHAR *)lpExistingFileName;
    MoveFileW(v39, v38);
    v40 = lpExistingFileName[0];
    if ( v93 < 8 )
      v40 = (const WCHAR *)lpExistingFileName;
    v41 = v95[0];
    if ( v97 < 8 )
      v41 = (const WCHAR *)v95;
    if ( CopyFileW(v41, v40, false) )
    {
      sub_10001B70((wchar_t *)L"Updater:CopyFile success : %s", ArgList);
      v42 = lpNewFileName[0];
      if ( v101 < 8 )
        v42 = (const WCHAR *)lpNewFileName;
      MoveFileExW(v42, nullptr, 4u);
      sub_10002C10((int)v98);
      sub_10002C10((int)&v90);
      sub_10002C10((int)&v94);
      LOBYTE(v104) = 5;
      sub_10018A30(v102);
      v69 = (DWORD)v103;
      goto LABEL_86;
    }
    LastError = GetLastError();
    sub_10001B70((wchar_t *)L"Updater:CopyFile failed. ( %d )", LastError);
    v44 = lpExistingFileName[0];
    if ( v93 < 8 )
      v44 = (const WCHAR *)lpExistingFileName;
    v45 = lpNewFileName[0];
    if ( v101 < 8 )
      v45 = (const WCHAR *)lpNewFileName;
    MoveFileW(v45, v44);
  }
  if ( sub_10010790(&v76) != 0 )
  {
    v46 = v95[0];
    if ( v97 < 8 )
      v46 = (const WCHAR *)v95;
    if ( sub_10010510(v46, &v78) != 0 )
    {
      v48 = HIWORD(v76);
      v49 = WORD2(v76);
      v50 = WORD2(v78);
      WORD2(v76) = WORD1(v76);
      HIWORD(v76) = v76;
      v51 = v78;
      LOWORD(v76) = v48;
      v52 = WORD1(v78);
      WORD1(v76) = v49;
      v53 = HIWORD(v78);
      WORD2(v78) = WORD1(v78);
      HIWORD(v78) = v78;
      LOWORD(v78) = v53;
      WORD1(v78) = v50;
      if ( v76 < v78 )
      {
        v54 = lpExistingFileName[0];
        if ( v93 < 8 )
          v54 = (const WCHAR *)lpExistingFileName;
        v55 = v95[0];
        if ( v97 < 8 )
          v55 = (const WCHAR *)v95;
        if ( CopyFileW(v55, v54, false) )
        {
          sub_10001B70((wchar_t *)L"Update CopyFile success : %s", ArgList);
          sub_10002C10((int)v98);
          sub_10002C10((int)&v90);
          sub_10002C10((int)&v94);
          LOBYTE(v104) = 5;
          sub_10018A30(v102);
          v69 = (DWORD)v103;
LABEL_86:
          LOBYTE(v104) = 4;
          sub_10018A30(v69);
          LOBYTE(v104) = 3;
          sub_1000F7B0((void **)&v76);
          LOBYTE(v104) = 2;
          sub_1000F7B0((void **)&v78);
          sub_10002C10((int)&a2);
          sub_10002C10((int)&a9);
          sub_10002C10((int)&a16);
          return 1;
        }
        v69 = GetLastError();
        sub_10001B70((wchar_t *)L"Update failed : %s (%08x)", ArgList);
      }
      else
      {
        v69 = v51;
        v68 = v52;
        v67 = v50;
        sub_10001B70((wchar_t *)L"Updater : Source version ( %d.%d.%d.%d )", v53);
        v69 = HIWORD(v76);
        v68 = WORD2(v76);
        v67 = WORD1(v76);
        sub_10001B70((wchar_t *)L"Updater : Destination version ( %d.%d.%d.%d )", (unsigned __int16)v76);
      }
      sub_10002C10((int)v98);
      sub_10002C10((int)&v90);
      sub_10002C10((int)&v94);
      LOBYTE(v104) = 5;
      sub_10018A30(v102);
      v69 = (DWORD)v103;
    }
    else
    {
      v47 = (LPCWSTR *)v95[0];
      if ( v97 < 8 )
        v47 = v95;
      sub_10001B70((wchar_t *)L"Updater : QueryFileInformation fail : %s", (int)v47);
      sub_10002C10((int)v98);
      sub_10002C10((int)&v90);
      sub_10002C10((int)&v94);
      LOBYTE(v104) = 5;
      sub_10018A30(v102);
      v69 = (DWORD)v103;
    }
  }
  else
  {
    sub_10001B70((wchar_t *)L"Updater : CompanyName check fail", v70);
    sub_10002C10((int)v98);
    sub_10002C10((int)&v90);
    sub_10002C10((int)&v94);
    LOBYTE(v104) = 5;
    sub_10018A30(v102);
    v69 = (DWORD)v103;
  }
  LOBYTE(v104) = 4;
  sub_10018A30(v69);
  LOBYTE(v104) = 3;
  sub_1000F7B0((void **)&v76);
  LOBYTE(v104) = 2;
  sub_1000F7B0((void **)&v78);
  sub_10002C10((int)&a2);
  sub_10002C10((int)&a9);
  sub_10002C10((int)&a16);
  return 0;
}

// Address: 0x10011A90
char __thiscall sub_10011A90(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  unsigned int v5; // ebx
  int *v6; // eax
  HANDLE CurrentProcess; // eax
  bool v8; // zf
  wchar_t *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  wchar_t *v12; // eax
  _DWORD *v14; // ebp
  _DWORD *v15; // eax
  LPCWSTR *v16; // eax
  _DWORD *v17; // eax
  void *v18; // eax
  int (__stdcall *v19)(int *); // eax
  int v20; // ebp
  void (__stdcall *v21)(int); // eax
  const WCHAR *v22; // eax
  int v23; // [esp-58h] [ebp-35Ch] BYREF
  void *v24; // [esp-54h] [ebp-358h]
  int v25; // [esp-50h] [ebp-354h]
  int v26; // [esp-4Ch] [ebp-350h]
  int v27; // [esp-48h] [ebp-34Ch]
  int v28; // [esp-44h] [ebp-348h]
  unsigned int v29; // [esp-40h] [ebp-344h]
  int v30; // [esp-3Ch] [ebp-340h] BYREF
  void *v31; // [esp-38h] [ebp-33Ch]
  int v32; // [esp-34h] [ebp-338h]
  int v33; // [esp-30h] [ebp-334h]
  int v34; // [esp-2Ch] [ebp-330h]
  int v35; // [esp-28h] [ebp-32Ch]
  unsigned int v36; // [esp-24h] [ebp-328h]
  int v37; // [esp-20h] [ebp-324h] BYREF
  void *v38; // [esp-1Ch] [ebp-320h]
  int v39; // [esp-18h] [ebp-31Ch]
  int v40; // [esp-14h] [ebp-318h]
  int v41; // [esp-10h] [ebp-314h]
  int v42; // [esp-Ch] [ebp-310h]
  unsigned int v43; // [esp-8h] [ebp-30Ch]
  int v44; // [esp-4h] [ebp-308h]
  int v45; // [esp+0h] [ebp-304h]
  int *v46; // [esp+14h] [ebp-2F0h] BYREF
  int *v47; // [esp+18h] [ebp-2ECh]
  int *v48; // [esp+1Ch] [ebp-2E8h]
  _DWORD *v49; // [esp+20h] [ebp-2E4h]
  int v50; // [esp+24h] [ebp-2E0h] BYREF
  char v51[4]; // [esp+28h] [ebp-2DCh] BYREF
  void *v52; // [esp+2Ch] [ebp-2D8h]
  int v53; // [esp+3Ch] [ebp-2C8h]
  unsigned int v54; // [esp+40h] [ebp-2C4h]
  int v55; // [esp+44h] [ebp-2C0h] BYREF
  void *v56; // [esp+48h] [ebp-2BCh]
  int v57; // [esp+58h] [ebp-2ACh]
  unsigned int v58; // [esp+5Ch] [ebp-2A8h]
  int v59; // [esp+60h] [ebp-2A4h] BYREF
  void *v60; // [esp+64h] [ebp-2A0h] BYREF
  int v61; // [esp+74h] [ebp-290h]
  unsigned int v62; // [esp+78h] [ebp-28Ch]
  int v63; // [esp+7Ch] [ebp-288h] BYREF
  void *v64; // [esp+80h] [ebp-284h]
  int v65; // [esp+90h] [ebp-274h]
  unsigned int v66; // [esp+94h] [ebp-270h]
  int v67; // [esp+98h] [ebp-26Ch] BYREF
  void *v68; // [esp+9Ch] [ebp-268h]
  int v69; // [esp+ACh] [ebp-258h]
  unsigned int v70; // [esp+B0h] [ebp-254h]
  int v71; // [esp+B4h] [ebp-250h] BYREF
  void *v72; // [esp+B8h] [ebp-24Ch]
  int v73; // [esp+C8h] [ebp-23Ch]
  unsigned int v74; // [esp+CCh] [ebp-238h]
  int v75; // [esp+D0h] [ebp-234h] BYREF
  LPCWSTR lpFileName[5]; // [esp+D4h] [ebp-230h] BYREF
  unsigned int v77; // [esp+E8h] [ebp-21Ch]
  WCHAR Buffer[260]; // [esp+ECh] [ebp-218h] BYREF
  int v79; // [esp+300h] [ebp-4h]

  v49 = this;
  v77 = 7;
  lpFileName[4] = nullptr;
  LOWORD(lpFileName[0]) = 0;
  v79 = 4;
  v70 = 7;
  v69 = 0;
  LOWORD(v68) = 0;
  v74 = 7;
  v73 = 0;
  LOWORD(v72) = 0;
  v62 = 7;
  v61 = 0;
  LOWORD(v60) = 0;
  v66 = 7;
  v65 = 0;
  LOWORD(v64) = 0;
  v2 = *(this + 2);
  v50 = 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 36))(v2);
  v4 = *(this + 2);
  v5 = v3;
  v6 = nullptr;
  v46 = nullptr;
  if ( *(_DWORD *)(v4 + 36) == 0 )
  {
LABEL_5:
    v46 = v6;
    v8 = v6 == nullptr;
    v9 = L"amd64\\";
    if ( !v8 )
      goto LABEL_7;
    goto LABEL_6;
  }
  CurrentProcess = GetCurrentProcess();
  if ( (*(int (__stdcall **)(HANDLE, int **))(v4 + 36))(CurrentProcess, &v46) != 0 )
  {
    v6 = v46;
    goto LABEL_5;
  }
  v46 = nullptr;
LABEL_6:
  v9 = L"x86\\";
LABEL_7:
  sub_10003390(v9, &v71, wcslen(v9));
  if ( v5 > 0x10000603 )
  {
    if ( v5 != 268438016 && v5 != 0x7FFFFFFF )
      goto LABEL_17;
  }
  else if ( v5 < 0x10000602 )
  {
    v10 = v5 - 268436737;
    if ( v10 != 0 )
    {
      v11 = v10 - 255;
      if ( v11 != 0 )
      {
        if ( v11 == 1 )
        {
          v44 = 5;
          v12 = L".win7";
          goto LABEL_30;
        }
LABEL_17:
        if ( v66 >= 8 )
          operator delete(v64);
        v66 = 7;
        v65 = 0;
        LOWORD(v64) = 0;
        if ( v62 >= 8 )
          operator delete(v60);
        v62 = 7;
        v61 = 0;
        LOWORD(v60) = 0;
        if ( v74 >= 8 )
          operator delete(v72);
        v74 = 7;
        v73 = 0;
        LOWORD(v72) = 0;
        if ( v70 >= 8 )
          operator delete(v68);
        v70 = 7;
        v69 = 0;
        goto LABEL_26;
      }
      v44 = 4;
      v12 = L".wlh";
    }
    else
    {
      v44 = 4;
      v12 = L".wxp";
    }
LABEL_30:
    sub_10003390(v12, &v67, v44);
    v14 = v49;
    if ( sub_1000E050(&v75) == 0 )
    {
      sub_10001B70((wchar_t *)L"Update ExtractCore Error", v45);
      if ( v66 >= 8 )
        operator delete(v64);
      v66 = 7;
      v65 = 0;
      LOWORD(v64) = 0;
      if ( v62 >= 8 )
        operator delete(v60);
      v62 = 7;
      v61 = 0;
      LOWORD(v60) = 0;
      if ( v74 >= 8 )
        operator delete(v72);
      v74 = 7;
      v73 = 0;
      LOWORD(v72) = 0;
      if ( v70 >= 8 )
        operator delete(v68);
      v70 = 7;
      v69 = 0;
LABEL_26:
      LOWORD(v68) = 0;
      if ( v77 >= 8 )
        operator delete((void *)lpFileName[0]);
      return 0;
    }
    v15 = (_DWORD *)sub_10006490((int)v51, &v75, &v71);
    LOBYTE(v79) = 5;
    sub_100032E0(v15, (int)&v63, 0, 0xFFFFFFFF);
    LOBYTE(v79) = 4;
    if ( v54 >= 8 )
      operator delete(v52);
    v16 = (LPCWSTR *)lpFileName[0];
    if ( v77 < 8 )
      v16 = lpFileName;
    sub_10001B70((wchar_t *)L"Update core path : %s", (int)v16);
    if ( GetSystemDirectoryW(Buffer, 0x104u) != 0 )
    {
      v58 = 7;
      v57 = 0;
      LOWORD(v56) = 0;
      sub_10003390(Buffer, &v55, wcslen(Buffer));
      LOBYTE(v79) = 6;
      v17 = (_DWORD *)sub_100039D0(L"\\DRIVERS\\", (int)v51, &v55);
      LOBYTE(v79) = 7;
      sub_100032E0(v17, (int)&v59, 0, 0xFFFFFFFF);
      if ( v54 >= 8 )
        operator delete(v52);
      LOBYTE(v79) = 4;
      v54 = 7;
      v53 = 0;
      LOWORD(v52) = 0;
      if ( v58 >= 8 )
        operator delete(v56);
      v18 = v60;
      if ( v62 < 8 )
        v18 = &v60;
      sub_10001B70((wchar_t *)L"Update system path : %s", (int)v18);
      if ( v46 != nullptr )
      {
        v19 = *(int (__stdcall **)(int *))(v14[2] + 40);
        if ( v19 != nullptr )
          v20 = v19(&v50);
        else
          v20 = 0;
      }
      else
      {
        v20 = 0;
      }
      if ( sub_1000FCE0() != 0 )
      {
        v44 = 0;
        v48 = &v37;
        v43 = 7;
        v42 = 0;
        LOWORD(v38) = 0;
        sub_100032E0(&v67, (int)&v37, 0, 0xFFFFFFFF);
        LOBYTE(v79) = 10;
        v47 = &v30;
        v36 = 7;
        v35 = 0;
        LOWORD(v31) = 0;
        sub_100032E0(&v59, (int)&v30, 0, 0xFFFFFFFF);
        LOBYTE(v79) = 11;
        v46 = &v23;
        v29 = 7;
        v28 = 0;
        LOWORD(v24) = 0;
        sub_100032E0(&v63, (int)&v23, 0, 0xFFFFFFFF);
        LOBYTE(v79) = 4;
        sub_10010CE0(
          L"scsidisk.sys",
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      else
      {
        v44 = 1;
        v47 = &v37;
        v43 = 7;
        v42 = 0;
        LOWORD(v38) = 0;
        sub_100032E0(&v67, (int)&v37, 0, 0xFFFFFFFF);
        LOBYTE(v79) = 8;
        v46 = &v30;
        v36 = 7;
        v35 = 0;
        LOWORD(v31) = 0;
        sub_100032E0(&v59, (int)&v30, 0, 0xFFFFFFFF);
        LOBYTE(v79) = 9;
        v48 = &v23;
        v29 = 7;
        v28 = 0;
        LOWORD(v24) = 0;
        sub_100032E0(&v63, (int)&v23, 0, 0xFFFFFFFF);
        LOBYTE(v79) = 4;
        if ( sub_10010CE0(
               L"scsidisk.sys",
               v23,
               v24,
               v25,
               v26,
               v27,
               v28,
               v29,
               v30,
               v31,
               v32,
               v33,
               v34,
               v35,
               v36,
               v37,
               v38,
               v39,
               v40,
               v41,
               v42,
               v43,
               v44) != 0 )
          sub_1000FC70();
      }
      v44 = 0;
      v48 = &v37;
      v43 = 7;
      v42 = 0;
      LOWORD(v38) = 0;
      sub_100032E0(&v67, (int)&v37, 0, 0xFFFFFFFF);
      LOBYTE(v79) = 12;
      v47 = &v30;
      v36 = 7;
      v35 = 0;
      LOWORD(v31) = 0;
      sub_100032E0(&v59, (int)&v30, 0, 0xFFFFFFFF);
      LOBYTE(v79) = 13;
      v46 = &v23;
      v29 = 7;
      v28 = 0;
      LOWORD(v24) = 0;
      sub_100032E0(&v63, (int)&v23, 0, 0xFFFFFFFF);
      LOBYTE(v79) = 4;
      sub_10010CE0(
        L"hidpath.sys",
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      v44 = 0;
      v48 = &v37;
      v43 = 7;
      v42 = 0;
      LOWORD(v38) = 0;
      sub_100032E0(&v67, (int)&v37, 0, 0xFFFFFFFF);
      LOBYTE(v79) = 14;
      v47 = &v30;
      v36 = 7;
      v35 = 0;
      LOWORD(v31) = 0;
      sub_100032E0(&v59, (int)&v30, 0, 0xFFFFFFFF);
      LOBYTE(v79) = 15;
      v46 = &v23;
      v29 = 7;
      v28 = 0;
      LOWORD(v24) = 0;
      sub_100032E0(&v63, (int)&v23, 0, 0xFFFFFFFF);
      LOBYTE(v79) = 4;
      sub_10010CE0(
        L"cdromnw.sys",
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      if ( v20 != 0 )
      {
        v21 = *(void (__stdcall **)(int))(v49[2] + 44);
        if ( v21 != nullptr )
          v21(v50);
      }
      v22 = lpFileName[0];
      if ( v77 < 8 )
        v22 = (const WCHAR *)lpFileName;
      sub_1000E480(v22, 1);
      if ( v66 >= 8 )
        operator delete(v64);
      v66 = 7;
      v65 = 0;
      LOWORD(v64) = 0;
      if ( v62 >= 8 )
        operator delete(v60);
      v62 = 7;
      v61 = 0;
      LOWORD(v60) = 0;
      if ( v74 >= 8 )
        operator delete(v72);
      v74 = 7;
      v73 = 0;
      LOWORD(v72) = 0;
      if ( v70 >= 8 )
        operator delete(v68);
      v70 = 7;
      v69 = 0;
      LOWORD(v68) = 0;
      if ( v77 >= 8 )
        operator delete((void *)lpFileName[0]);
      return 1;
    }
    else
    {
      if ( v66 >= 8 )
        operator delete(v64);
      v66 = 7;
      v65 = 0;
      LOWORD(v64) = 0;
      if ( v62 >= 8 )
        operator delete(v60);
      v62 = 7;
      v61 = 0;
      LOWORD(v60) = 0;
      if ( v74 >= 8 )
        operator delete(v72);
      v74 = 7;
      v73 = 0;
      LOWORD(v72) = 0;
      if ( v70 >= 8 )
        operator delete(v68);
      v70 = 7;
      v69 = 0;
      LOWORD(v68) = 0;
      if ( v77 < 8 )
        return 0;
      operator delete((void *)lpFileName[0]);
      return 0;
    }
  }
  v44 = 6;
  v12 = L".win10";
  goto LABEL_30;
}

// Address: 0x10012420
int __thiscall sub_10012420(_DWORD *this)
{
  int v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+0h] [ebp-8h]

  sub_10001B70((wchar_t *)L"Update thread start.", v3);
  sub_10008D00(L"SeManageVolumePrivilege");
  sub_10008D00(L"SeBackupPrivilege");
  sub_10011A90(this);
  sub_10001B70((wchar_t *)L"Update thread end.", v4);
  return 0;
}

// Address: 0x10012470
char __thiscall sub_10012470(HANDLE *this, void *a2)
{
  HANDLE *v3; // edi
  void *v4; // esi
  int v6; // [esp+0h] [ebp-18h]
  char v7; // [esp+Fh] [ebp-9h]
  DWORD ExitCode; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v7 = 1;
  v9 = sub_1000FEA0();
  sub_10001B70((wchar_t *)L"EngineUpDate Start.(%d)", v9);
  if ( v9 != -1 )
  {
    v3 = this + 3;
    *(this + 5) = a2;
    v4 = *(this + 3);
    if ( v4 != nullptr )
    {
      ExitCode = -1;
      GetExitCodeThread(v4, &ExitCode);
      if ( ExitCode == 259 )
        WaitForSingleObject(v4, 0xFFFFFFFF);
    }
    if ( *v3 != nullptr )
    {
      CloseHandle(*v3);
      *v3 = nullptr;
    }
    if ( (unsigned __int8)sub_10013820(sub_10012420, this) == 0 )
    {
      sub_10001B70((wchar_t *)L"Cannot create update thread", v6);
      v7 = 0;
    }
    sub_1000F8E0(v9 + 1);
  }
  sub_10001B70((wchar_t *)L"EngineUpDate End.", v6);
  return v7;
}

// Address: 0x10012540
_DWORD *__usercall sub_10012540@<eax>(_DWORD *a1@<ebx>, _DWORD *a2@<edi>)
{
  unsigned int v2; // ebp
  _DWORD *v3; // ecx
  _DWORD *v4; // edx
  int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // edx

  v2 = a2[6];
  v3 = a2 + 1;
  if ( v2 < 8 )
    v4 = a2 + 1;
  else
    v4 = (_DWORD *)*v3;
  v5 = 2 * a2[5];
  v6 = (unsigned int)v4 + v5;
  *a1 = 0;
  if ( (_DWORD *)((char *)v4 + v5) == nullptr )
    goto LABEL_12;
  v7 = v2 < 8 ? (unsigned int)(a2 + 1) : *v3;
  if ( v7 > v6 )
    goto LABEL_12;
  if ( v2 >= 8 )
    v3 = (_DWORD *)*v3;
  if ( v6 > (unsigned int)v3 + v5 )
LABEL_12:
    _invalid_parameter_noinfo();
  a1[1] = v6;
  *a1 = a2;
  return a1;
}

// Address: 0x10012590
int *__thiscall sub_10012590(_DWORD *this, int *a2)
{
  int *v3; // ecx
  int *v4; // eax
  int *v5; // ebp
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  _BYTE v9[4]; // [esp+14h] [ebp-24Ch] BYREF
  int *v10; // [esp+18h] [ebp-248h]
  int v11; // [esp+1Ch] [ebp-244h] BYREF
  _BYTE v12[280]; // [esp+20h] [ebp-240h] BYREF
  int v13; // [esp+25Ch] [ebp-4h]

  v3 = (int *)*(this + 6);
  v4 = (int *)v3[1];
  v5 = v3;
  while ( *((_BYTE *)v4 + 297) == 0 )
  {
    if ( v4[3] >= (unsigned int)*a2 )
    {
      v5 = v4;
      v4 = (int *)*v4;
    }
    else
    {
      v4 = (int *)v4[2];
    }
  }
  v6 = (_DWORD *)*this;
  v10 = (int *)*(this + 6);
  if ( v6 == nullptr )
    _invalid_parameter_noinfo();
  if ( v5 == v10 || *a2 < (unsigned int)v5[3] )
  {
    sub_100126B0();
    v13 = 0;
    v11 = *a2;
    sub_10012BD0(v12);
    LOBYTE(v13) = 1;
    v7 = (_DWORD *)sub_10012980(v9, &v11, v6, v5);
    v6 = (_DWORD *)*v7;
    v5 = (int *)v7[1];
    sub_10012760();
    sub_10012760();
  }
  if ( v6 != nullptr )
    v6 = (_DWORD *)*v6;
  else
    _invalid_parameter_noinfo();
  if ( v5 == (int *)v6[6] )
    _invalid_parameter_noinfo();
  return v5 + 4;
}

// Address: 0x100126B0
int __usercall sub_100126B0@<eax>(int result@<eax>)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 7;
  *(_WORD *)(result + 4) = 0;
  *(_DWORD *)(result + 52) = 7;
  *(_DWORD *)(result + 48) = 0;
  *(_WORD *)(result + 32) = 0;
  *(_DWORD *)(result + 80) = 7;
  *(_DWORD *)(result + 76) = 0;
  *(_WORD *)(result + 60) = 0;
  *(_DWORD *)(result + 108) = 7;
  *(_DWORD *)(result + 104) = 0;
  *(_WORD *)(result + 88) = 0;
  *(_DWORD *)(result + 136) = 7;
  *(_DWORD *)(result + 132) = 0;
  *(_WORD *)(result + 116) = 0;
  *(_DWORD *)(result + 164) = 7;
  *(_DWORD *)(result + 160) = 0;
  *(_WORD *)(result + 144) = 0;
  *(_DWORD *)(result + 192) = 7;
  *(_DWORD *)(result + 188) = 0;
  *(_WORD *)(result + 172) = 0;
  *(_DWORD *)(result + 220) = 7;
  *(_DWORD *)(result + 216) = 0;
  *(_WORD *)(result + 200) = 0;
  *(_DWORD *)(result + 248) = 7;
  *(_DWORD *)(result + 244) = 0;
  *(_WORD *)(result + 228) = 0;
  *(_DWORD *)(result + 276) = 7;
  *(_DWORD *)(result + 272) = 0;
  *(_WORD *)(result + 256) = 0;
  return result;
}

// Address: 0x10012760
void __usercall sub_10012760(int a1@<esi>)
{
  if ( *(_DWORD *)(a1 + 276) >= 8u )
    operator delete(*(void **)(a1 + 256));
  *(_DWORD *)(a1 + 276) = 7;
  *(_DWORD *)(a1 + 272) = 0;
  *(_WORD *)(a1 + 256) = 0;
  if ( *(_DWORD *)(a1 + 248) >= 8u )
    operator delete(*(void **)(a1 + 228));
  *(_DWORD *)(a1 + 248) = 7;
  *(_DWORD *)(a1 + 244) = 0;
  *(_WORD *)(a1 + 228) = 0;
  if ( *(_DWORD *)(a1 + 220) >= 8u )
    operator delete(*(void **)(a1 + 200));
  *(_DWORD *)(a1 + 220) = 7;
  *(_DWORD *)(a1 + 216) = 0;
  *(_WORD *)(a1 + 200) = 0;
  if ( *(_DWORD *)(a1 + 192) >= 8u )
    operator delete(*(void **)(a1 + 172));
  *(_DWORD *)(a1 + 192) = 7;
  *(_DWORD *)(a1 + 188) = 0;
  *(_WORD *)(a1 + 172) = 0;
  if ( *(_DWORD *)(a1 + 164) >= 8u )
    operator delete(*(void **)(a1 + 144));
  *(_DWORD *)(a1 + 164) = 7;
  *(_DWORD *)(a1 + 160) = 0;
  *(_WORD *)(a1 + 144) = 0;
  if ( *(_DWORD *)(a1 + 136) >= 8u )
    operator delete(*(void **)(a1 + 116));
  *(_DWORD *)(a1 + 136) = 7;
  *(_DWORD *)(a1 + 132) = 0;
  *(_WORD *)(a1 + 116) = 0;
  if ( *(_DWORD *)(a1 + 108) >= 8u )
    operator delete(*(void **)(a1 + 88));
  *(_DWORD *)(a1 + 108) = 7;
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 88) = 0;
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
  if ( *(_DWORD *)(a1 + 24) >= 8u )
    operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 7;
  *(_WORD *)(a1 + 4) = 0;
}

// Address: 0x10012900
_DWORD *__stdcall sub_10012900(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v2; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  v2 = sub_100135A0();
  a1[6] = v2;
  *(_BYTE *)(v2 + 297) = 1;
  *(_DWORD *)(a1[6] + 4) = a1[6];
  *(_DWORD *)a1[6] = a1[6];
  *(_DWORD *)(a1[6] + 8) = a1[6];
  a1[7] = 0;
  return a1;
}

// Address: 0x10012980
_DWORD *__userpurge sub_10012980@<eax>(int *a1@<eax>, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int *v6; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // esi
  bool v13; // cf
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // [esp+18h] [ebp-14h]
  int v17; // [esp+18h] [ebp-14h]
  _DWORD v18[4]; // [esp+1Ch] [ebp-10h] BYREF

  v6 = (int *)a1[6];
  if ( a1[7] == 0 )
    goto LABEL_2;
  v8 = a4;
  v9 = *v6;
  if ( a4 == 0 || a4 != *a1 )
  {
    _invalid_parameter_noinfo();
    v8 = a4;
  }
  v10 = a5;
  if ( a5 == v9 )
  {
    v11 = a3;
    if ( *a3 < *(_DWORD *)(a5 + 12) )
    {
LABEL_2:
      sub_10012F40(a2, 1, a3);
      return a2;
    }
    goto LABEL_30;
  }
  v12 = a1[6];
  if ( v8 == 0 || v8 != *a1 )
  {
    _invalid_parameter_noinfo();
    v10 = a5;
  }
  if ( v10 == v12 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1[6] + 8) + 12) < *a3 )
    {
      sub_10012F40(a2, 0, a3);
      return a2;
    }
    goto LABEL_29;
  }
  v13 = *(_DWORD *)(v10 + 12) < *a3;
  if ( *(_DWORD *)(v10 + 12) > *a3 )
  {
    v16 = v10;
    sub_10013690();
    if ( *(_DWORD *)(v16 + 12) < *a3 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(v16 + 8) + 297) != 0 )
        sub_10012F40(a2, 0, a3);
      else
        sub_10012F40(a2, 1, a3);
      return a2;
    }
    v10 = a5;
    v13 = *(_DWORD *)(a5 + 12) < *a3;
  }
  if ( !v13
    || (v14 = *a1, v17 = v10, v18[1] = a1[6], v18[0] = v14, sub_10013720(), (unsigned __int8)sub_10012BB0() == 0)
    && *a3 >= *(_DWORD *)(v17 + 12) )
  {
LABEL_29:
    v11 = a3;
LABEL_30:
    v15 = (_DWORD *)sub_10012D60(v18, v11);
    *a2 = *v15;
    a2[1] = v15[1];
    return a2;
  }
  if ( *(_BYTE *)(*(_DWORD *)(a5 + 8) + 297) != 0 )
    sub_10012F40(a2, 0, a3);
  else
    sub_10012F40(a2, 1, a3);
  return a2;
}

// Address: 0x10012B70
int __usercall sub_10012B70@<eax>(_DWORD *a1@<esi>)
{
  _BYTE v2[8]; // [esp+0h] [ebp-8h] BYREF

  sub_10012E60(v2, *a1, *(_DWORD *)a1[6], *a1, a1[6]);
  operator delete((void *)a1[6]);
  a1[6] = 0;
  a1[7] = 0;
  return 0;
}

// Address: 0x10012BB0
bool __usercall sub_10012BB0@<al>(_DWORD *a1@<edi>, _DWORD *a2@<esi>)
{
  if ( *a1 == 0 || *a1 != *a2 )
    _invalid_parameter_noinfo();
  return a1[1] == a2[1];
}

// Address: 0x10012BD0
int __userpurge sub_10012BD0@<eax>(_DWORD *a1@<edi>, int a2)
{
  *(_DWORD *)(a2 + 24) = 7;
  *(_DWORD *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 4) = 0;
  sub_100032E0(a1, a2, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 52) = 7;
  *(_DWORD *)(a2 + 48) = 0;
  *(_WORD *)(a2 + 32) = 0;
  sub_100032E0(a1 + 7, a2 + 28, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 80) = 7;
  *(_DWORD *)(a2 + 76) = 0;
  *(_WORD *)(a2 + 60) = 0;
  sub_100032E0(a1 + 14, a2 + 56, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 108) = 7;
  *(_DWORD *)(a2 + 104) = 0;
  *(_WORD *)(a2 + 88) = 0;
  sub_100032E0(a1 + 21, a2 + 84, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 136) = 7;
  *(_DWORD *)(a2 + 132) = 0;
  *(_WORD *)(a2 + 116) = 0;
  sub_100032E0(a1 + 28, a2 + 112, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 164) = 7;
  *(_DWORD *)(a2 + 160) = 0;
  *(_WORD *)(a2 + 144) = 0;
  sub_100032E0(a1 + 35, a2 + 140, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 192) = 7;
  *(_DWORD *)(a2 + 188) = 0;
  *(_WORD *)(a2 + 172) = 0;
  sub_100032E0(a1 + 42, a2 + 168, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 220) = 7;
  *(_DWORD *)(a2 + 216) = 0;
  *(_WORD *)(a2 + 200) = 0;
  sub_100032E0(a1 + 49, a2 + 196, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 248) = 7;
  *(_DWORD *)(a2 + 244) = 0;
  *(_WORD *)(a2 + 228) = 0;
  sub_100032E0(a1 + 56, a2 + 224, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 276) = 7;
  *(_DWORD *)(a2 + 272) = 0;
  *(_WORD *)(a2 + 256) = 0;
  sub_100032E0(a1 + 63, a2 + 252, 0, 0xFFFFFFFF);
  return a2;
}

// Address: 0x10012D60
int __userpurge sub_10012D60@<eax>(int *a1@<ebx>, int a2, unsigned int *a3)
{
  int v3; // ebp
  int *v4; // edi
  int *v5; // eax
  bool v6; // cl
  unsigned int v7; // edx
  int v8; // eax
  int *v9; // edx
  int *v10; // esi
  int *v11; // eax
  int v12; // edx
  _DWORD *v14; // eax
  int v15; // [esp+10h] [ebp-Ch] BYREF
  int *v16; // [esp+14h] [ebp-8h]

  v3 = a2;
  v4 = (int *)a1[6];
  v5 = (int *)v4[1];
  v6 = true;
  LOBYTE(a2) = 1;
  if ( *((_BYTE *)v5 + 297) == 0 )
  {
    v7 = *a3;
    do
    {
      v4 = v5;
      v6 = v7 < v5[3];
      LOBYTE(a2) = v6;
      if ( v7 >= v5[3] )
        v5 = (int *)v5[2];
      else
        v5 = (int *)*v5;
    }
    while ( *((_BYTE *)v5 + 297) == 0 );
  }
  v8 = *a1;
  v9 = v4;
  v16 = v4;
  v15 = v8;
  if ( v6 )
  {
    v10 = *(int **)a1[6];
    if ( v8 == 0 )
      _invalid_parameter_noinfo();
    if ( v4 == v10 )
    {
      v11 = (int *)sub_10012F40(&v15, 1, a3);
      v12 = *v11;
      *(_DWORD *)(v3 + 4) = v11[1];
      *(_DWORD *)v3 = v12;
      *(_BYTE *)(v3 + 8) = 1;
      return v3;
    }
    sub_10013690();
    v9 = v16;
    v8 = v15;
  }
  if ( v9[3] >= *a3 )
  {
    *(_DWORD *)v3 = v8;
    *(_BYTE *)(v3 + 8) = 0;
  }
  else
  {
    v14 = (_DWORD *)sub_10012F40(&v15, a2, a3);
    v9 = (int *)v14[1];
    *(_DWORD *)v3 = *v14;
    *(_BYTE *)(v3 + 8) = 1;
  }
  *(_DWORD *)(v3 + 4) = v9;
  return v3;
}

// Address: 0x10012E60
_DWORD *__userpurge sub_10012E60@<eax>(int a1@<eax>, _DWORD *a2, int a3, void *a4, int a5, void *a6)
{
  int v6; // ebx
  void *v8; // esi
  int v9; // eax
  void *v10; // esi
  _DWORD *v11; // eax
  int v13; // edx
  int v14; // [esp+10h] [ebp-8h] BYREF

  v6 = a3;
  v8 = **(void ***)(a1 + 24);
  v9 = *(_DWORD *)a1;
  if ( a3 == 0 || a3 != v9 )
  {
    _invalid_parameter_noinfo();
    v6 = a3;
  }
  if ( a4 != v8 )
    goto LABEL_13;
  v10 = *(void **)(a1 + 24);
  if ( a5 == 0 || a5 != *(_DWORD *)a1 )
  {
    _invalid_parameter_noinfo();
    v6 = a3;
  }
  if ( a6 == v10 )
  {
    sub_10013790(*(void **)(*(_DWORD *)(a1 + 24) + 4));
    *(_DWORD *)(*(_DWORD *)(a1 + 24) + 4) = *(_DWORD *)(a1 + 24);
    v11 = *(_DWORD **)(a1 + 24);
    *(_DWORD *)(a1 + 28) = 0;
    *v11 = v11;
    *(_DWORD *)(*(_DWORD *)(a1 + 24) + 8) = *(_DWORD *)(a1 + 24);
    v13 = *(_DWORD *)a1;
    a2[1] = **(_DWORD **)(a1 + 24);
    *a2 = v13;
    return a2;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      if ( v6 == 0 || v6 != a5 )
      {
        _invalid_parameter_noinfo();
        LOBYTE(v6) = a3;
      }
      if ( a4 == a6 )
        break;
      sub_10013720();
      sub_10013180(a1, (int)&v14, v6, a4);
      v6 = a3;
    }
    *a2 = *(_DWORD *)a1;
    a2[1] = a4;
    return a2;
  }
}

// Address: 0x10012F40
_DWORD *__userpurge sub_10012F40@<eax>(int a1@<edx>, _DWORD *a2@<ecx>, int *a3@<edi>, _DWORD *a4, char a5, int a6)
{
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  int *v11; // eax
  int i; // esi
  int v13; // ecx
  int *v14; // edx
  int v15; // edx
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  int v19; // edx
  _DWORD *v20; // edx
  int v21; // edx
  _DWORD *v22; // edx
  int v24; // ecx
  _BYTE v25[20]; // [esp+14h] [ebp-54h] BYREF
  int v26; // [esp+28h] [ebp-40h]
  int v27; // [esp+2Ch] [ebp-3Ch]
  _DWORD pExceptionObject[14]; // [esp+30h] [ebp-38h] BYREF

  if ( (unsigned int)a3[7] >= 0xE6C2B3 )
  {
    v27 = 15;
    v26 = 0;
    v25[4] = 0;
    sub_10001A30((int)v25, a1, "map/set<T> too long", (char *)0x13);
    pExceptionObject[13] = 0;
    sub_10001050(pExceptionObject, (int)v25);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  v7 = sub_100135E0(a3[6], a2, a3[6]);
  v8 = (_DWORD *)a3[6];
  ++a3[7];
  if ( a2 == v8 )
  {
    v8[1] = v7;
    *(_DWORD *)a3[6] = v7;
    v9 = a3[6];
LABEL_9:
    *(_DWORD *)(v9 + 8) = v7;
    goto LABEL_10;
  }
  if ( a5 == 0 )
  {
    a2[2] = v7;
    v9 = a3[6];
    if ( a2 != *(_DWORD **)(v9 + 8) )
      goto LABEL_10;
    goto LABEL_9;
  }
  *a2 = v7;
  v10 = (_DWORD *)a3[6];
  if ( a2 == (_DWORD *)*v10 )
    *v10 = v7;
LABEL_10:
  v11 = (int *)(v7 + 4);
  for ( i = v7; *(_BYTE *)(*(_DWORD *)(i + 4) + 296) == 0; v11 = (int *)(i + 4) )
  {
    v13 = *v11;
    v14 = *(int **)(*v11 + 4);
    if ( *v11 == *v14 )
    {
      v15 = v14[2];
      if ( *(_BYTE *)(v15 + 296) != 0 )
      {
        if ( i == *(_DWORD *)(v13 + 8) )
        {
          i = *v11;
          sub_100134F0(a3);
        }
        *(_BYTE *)(*(_DWORD *)(i + 4) + 296) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4) + 296) = 0;
        v16 = *(_DWORD **)(*(_DWORD *)(i + 4) + 4);
        v17 = (_DWORD *)*v16;
        *v16 = *(_DWORD *)(*v16 + 8);
        v18 = v17[2];
        if ( *(_BYTE *)(v18 + 297) == 0 )
          *(_DWORD *)(v18 + 4) = v16;
        v17[1] = v16[1];
        v19 = a3[6];
        if ( v16 == *(_DWORD **)(v19 + 4) )
        {
          *(_DWORD *)(v19 + 4) = v17;
          v17[2] = v16;
        }
        else
        {
          v20 = (_DWORD *)v16[1];
          if ( v16 == (_DWORD *)v20[2] )
            v20[2] = v17;
          else
            *v20 = v17;
          v17[2] = v16;
        }
LABEL_35:
        v16[1] = v17;
        continue;
      }
    }
    else
    {
      v15 = *v14;
      if ( *(_BYTE *)(v15 + 296) != 0 )
      {
        if ( i == *(_DWORD *)v13 )
        {
          i = *v11;
          sub_10013540(a3);
        }
        *(_BYTE *)(*(_DWORD *)(i + 4) + 296) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4) + 296) = 0;
        v16 = *(_DWORD **)(*(_DWORD *)(i + 4) + 4);
        v17 = (_DWORD *)v16[2];
        v16[2] = *v17;
        if ( *(_BYTE *)(*v17 + 297) == 0 )
          *(_DWORD *)(*v17 + 4) = v16;
        v17[1] = v16[1];
        v21 = a3[6];
        if ( v16 == *(_DWORD **)(v21 + 4) )
        {
          *(_DWORD *)(v21 + 4) = v17;
        }
        else
        {
          v22 = (_DWORD *)v16[1];
          if ( v16 == (_DWORD *)*v22 )
            *v22 = v17;
          else
            v22[2] = v17;
        }
        *v17 = v16;
        goto LABEL_35;
      }
    }
    *(_BYTE *)(v13 + 296) = 1;
    *(_BYTE *)(v15 + 296) = 1;
    *(_BYTE *)(*(_DWORD *)(*v11 + 4) + 296) = 0;
    i = *(_DWORD *)(*v11 + 4);
  }
  *(_BYTE *)(*(_DWORD *)(a3[6] + 4) + 296) = 1;
  v24 = *a3;
  a4[1] = v7;
  *a4 = v24;
  return a4;
}

// Address: 0x10013180
_DWORD *__fastcall sub_10013180(int a1, int a2, _DWORD *a3, _DWORD *a4, char a5, _BYTE *a6)
{
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // edx
  int v9; // eax
  int *v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  _BYTE v18[20]; // [esp+14h] [ebp-50h] BYREF
  int v19; // [esp+28h] [ebp-3Ch]
  int v20; // [esp+2Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+30h] [ebp-34h] BYREF

  if ( a6[297] != 0 )
  {
    v20 = 15;
    v19 = 0;
    v18[4] = 0;
    sub_10001A30((int)v18, a2, "invalid map/set<T> iterator", (char *)0x1B);
    pExceptionObject[12] = 0;
    sub_10001050(pExceptionObject, (int)v18);
    pExceptionObject[0] = &std::out_of_range::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  sub_10013720();
  if ( *(_BYTE *)(*(_DWORD *)a6 + 297) != 0 )
  {
    v6 = *((_DWORD *)a6 + 2);
  }
  else if ( *(_BYTE *)(*((_DWORD *)a6 + 2) + 297) != 0 )
  {
    v6 = *(_DWORD *)a6;
  }
  else
  {
    v6 = *((_DWORD *)a6 + 2);
  }
  v7 = *((_DWORD *)a6 + 1);
  if ( *(_BYTE *)(v6 + 297) == 0 )
    *(_DWORD *)(v6 + 4) = v7;
  v8 = a3;
  v9 = a3[6];
  if ( *(_BYTE **)(v9 + 4) == a6 )
  {
    *(_DWORD *)(v9 + 4) = v6;
  }
  else if ( *(_BYTE **)v7 == a6 )
  {
    *(_DWORD *)v7 = v6;
  }
  else
  {
    *(_DWORD *)(v7 + 8) = v6;
  }
  v10 = (int *)a3[6];
  if ( (_BYTE *)*v10 == a6 )
  {
    if ( *(_BYTE *)(v6 + 297) != 0 )
    {
      v11 = v7;
    }
    else
    {
      v11 = sub_10013800();
      v8 = a3;
    }
    *v10 = v11;
  }
  v12 = v8[6];
  if ( *(_BYTE **)(v12 + 8) == a6 )
  {
    if ( *(_BYTE *)(v6 + 297) != 0 )
    {
      *(_DWORD *)(v12 + 8) = v7;
    }
    else
    {
      v13 = sub_100137E0();
      v8 = a3;
      *(_DWORD *)(v12 + 8) = v13;
    }
  }
  if ( a6[296] == 1 )
  {
    for ( ; v6 != *(_DWORD *)(v8[6] + 4); v7 = *(_DWORD *)(v7 + 4) )
    {
      if ( *(_BYTE *)(v6 + 296) != 1 )
        break;
      v14 = *(_DWORD *)v7;
      if ( v6 == *(_DWORD *)v7 )
      {
        v14 = *(_DWORD *)(v7 + 8);
        if ( *(_BYTE *)(v14 + 296) == 0 )
        {
          *(_BYTE *)(v14 + 296) = 1;
          *(_BYTE *)(v7 + 296) = 0;
          sub_100134F0(v8);
          v14 = *(_DWORD *)(v7 + 8);
          v8 = a3;
        }
        if ( *(_BYTE *)(v14 + 297) != 0 )
          goto LABEL_42;
        if ( *(_BYTE *)(*(_DWORD *)v14 + 296) != 1 || *(_BYTE *)(*(_DWORD *)(v14 + 8) + 296) != 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)(v14 + 8) + 296) == 1 )
          {
            *(_BYTE *)(*(_DWORD *)v14 + 296) = 1;
            *(_BYTE *)(v14 + 296) = 0;
            sub_10013540(v8);
            v14 = *(_DWORD *)(v7 + 8);
            v8 = a3;
          }
          *(_BYTE *)(v14 + 296) = *(_BYTE *)(v7 + 296);
          *(_BYTE *)(v7 + 296) = 1;
          *(_BYTE *)(*(_DWORD *)(v14 + 8) + 296) = 1;
          sub_100134F0(v8);
          break;
        }
      }
      else
      {
        if ( *(_BYTE *)(v14 + 296) == 0 )
        {
          *(_BYTE *)(v14 + 296) = 1;
          *(_BYTE *)(v7 + 296) = 0;
          sub_10013540(v8);
          v14 = *(_DWORD *)v7;
          v8 = a3;
        }
        if ( *(_BYTE *)(v14 + 297) != 0 )
          goto LABEL_42;
        if ( *(_BYTE *)(*(_DWORD *)(v14 + 8) + 296) != 1 || *(_BYTE *)(*(_DWORD *)v14 + 296) != 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)v14 + 296) == 1 )
          {
            *(_BYTE *)(*(_DWORD *)(v14 + 8) + 296) = 1;
            *(_BYTE *)(v14 + 296) = 0;
            sub_100134F0(v8);
            v14 = *(_DWORD *)v7;
            v8 = a3;
          }
          *(_BYTE *)(v14 + 296) = *(_BYTE *)(v7 + 296);
          *(_BYTE *)(v7 + 296) = 1;
          *(_BYTE *)(*(_DWORD *)v14 + 296) = 1;
          sub_10013540(v8);
          break;
        }
      }
      *(_BYTE *)(v14 + 296) = 0;
LABEL_42:
      v6 = v7;
    }
    *(_BYTE *)(v6 + 296) = 1;
  }
  sub_10012760((int)(a6 + 16));
  operator delete(a6);
  v15 = a3[7];
  if ( v15 != 0 )
    a3[7] = v15 - 1;
  v16 = *a3;
  a4[1] = a6;
  *a4 = v16;
  return a4;
}

// Address: 0x100134F0
_DWORD *__thiscall sub_100134F0(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // edx
  _DWORD *v4; // edx

  result = (_DWORD *)*(this + 2);
  *(this + 2) = *result;
  if ( *(_BYTE *)(*result + 297) == 0 )
    *(_DWORD *)(*result + 4) = this;
  result[1] = *(this + 1);
  v3 = *(_DWORD *)(a2 + 24);
  if ( this == *(_DWORD **)(v3 + 4) )
  {
    *(_DWORD *)(v3 + 4) = result;
    *result = this;
    *(this + 1) = result;
  }
  else
  {
    v4 = (_DWORD *)*(this + 1);
    if ( this == (_DWORD *)*v4 )
      *v4 = result;
    else
      v4[2] = result;
    *result = this;
    *(this + 1) = result;
  }
  return result;
}

// Address: 0x10013540
int __thiscall sub_10013540(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx
  _DWORD *v5; // edx

  result = *this;
  *this = *(_DWORD *)(*this + 8);
  v3 = *(_DWORD *)(result + 8);
  if ( *(_BYTE *)(v3 + 297) == 0 )
    *(_DWORD *)(v3 + 4) = this;
  *(_DWORD *)(result + 4) = *(this + 1);
  v4 = *(_DWORD *)(a2 + 24);
  if ( this == *(_DWORD **)(v4 + 4) )
  {
    *(_DWORD *)(v4 + 4) = result;
    *(_DWORD *)(result + 8) = this;
    *(this + 1) = result;
  }
  else
  {
    v5 = (_DWORD *)*(this + 1);
    if ( this == (_DWORD *)v5[2] )
      v5[2] = result;
    else
      *v5 = result;
    *(_DWORD *)(result + 8) = this;
    *(this + 1) = result;
  }
  return result;
}

// Address: 0x100135A0
int sub_100135A0()
{
  int result; // eax

  result = sub_100138F0(1);
  if ( result != 0 )
    *(_DWORD *)result = 0;
  if ( result != -4 )
    *(_DWORD *)(result + 4) = 0;
  if ( result != -8 )
    *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 296) = 1;
  *(_BYTE *)(result + 297) = 0;
  return result;
}

// Address: 0x100135E0
_DWORD *__thiscall sub_100135E0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // esi
  int v7; // [esp+0h] [ebp-24h] BYREF
  void *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v9 = &v7;
  v5 = (_DWORD *)sub_100138F0(1);
  v8 = v5;
  v10 = 1;
  if ( v5 != nullptr )
  {
    v5[1] = a3;
    *v5 = a2;
    v5[2] = a4;
    v5[3] = *this;
    sub_10012BD0(this + 1, (int)(v5 + 4));
    *((_BYTE *)v5 + 296) = 0;
    *((_BYTE *)v5 + 297) = 0;
  }
  return v5;
}

// Address: 0x10013690
void __usercall sub_10013690(_DWORD *a1@<esi>)
{
  int *v1; // eax
  int v2; // eax
  int v3; // ecx
  int j; // eax
  int i; // eax

  if ( *a1 == 0 )
    _invalid_parameter_noinfo();
  v1 = (int *)a1[1];
  if ( *((_BYTE *)v1 + 297) != 0 )
  {
    v2 = v1[2];
    a1[1] = v2;
    if ( *(_BYTE *)(v2 + 297) == 0 )
      return;
    goto LABEL_5;
  }
  v3 = *v1;
  if ( *(_BYTE *)(*v1 + 297) != 0 )
  {
    for ( i = v1[1]; *(_BYTE *)(i + 297) == 0; i = *(_DWORD *)(i + 4) )
    {
      if ( a1[1] != *(_DWORD *)i )
        break;
      a1[1] = i;
    }
    if ( *(_BYTE *)(a1[1] + 297) != 0 )
    {
LABEL_5:
      _invalid_parameter_noinfo();
      return;
    }
    a1[1] = i;
  }
  else
  {
    for ( j = *(_DWORD *)(v3 + 8); *(_BYTE *)(j + 297) == 0; j = *(_DWORD *)(j + 8) )
      v3 = j;
    a1[1] = v3;
  }
}

// Address: 0x10013720
void __usercall sub_10013720(_DWORD *a1@<esi>)
{
  int v1; // eax
  int **v2; // ecx
  int *j; // eax
  int i; // eax

  if ( *a1 == 0 )
    _invalid_parameter_noinfo();
  v1 = a1[1];
  if ( *(_BYTE *)(v1 + 297) != 0 )
  {
    _invalid_parameter_noinfo();
  }
  else
  {
    v2 = *(int ***)(v1 + 8);
    if ( *((_BYTE *)v2 + 297) != 0 )
    {
      for ( i = *(_DWORD *)(v1 + 4); *(_BYTE *)(i + 297) == 0; i = *(_DWORD *)(i + 4) )
      {
        if ( a1[1] != *(_DWORD *)(i + 8) )
          break;
        a1[1] = i;
      }
      a1[1] = i;
    }
    else
    {
      for ( j = *v2; *((_BYTE *)j + 297) == 0; j = (int *)*j )
        v2 = (int **)j;
      a1[1] = v2;
    }
  }
}

// Address: 0x10013790
void __stdcall sub_10013790(void **a1)
{
  void **v1; // ebx
  void **i; // edi

  v1 = a1;
  for ( i = a1; *((_BYTE *)i + 297) == 0; v1 = i )
  {
    sub_10013790(i[2]);
    i = (void **)*i;
    sub_10012760((int)(v1 + 4));
    operator delete(v1);
  }
}

// Address: 0x100137E0
int __usercall sub_100137E0@<eax>(int result@<eax>)
{
  int i; // ecx

  for ( i = *(_DWORD *)(result + 8); *(_BYTE *)(i + 297) == 0; i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}

// Address: 0x10013800
_DWORD *__usercall sub_10013800@<eax>(_DWORD *result@<eax>)
{
  int *v1; // ecx

  v1 = (int *)*result;
  if ( *(_BYTE *)(*result + 297) == 0 )
  {
    do
    {
      result = v1;
      v1 = (int *)*v1;
    }
    while ( *((_BYTE *)v1 + 297) == 0 );
  }
  return result;
}

// Address: 0x10013820
char __userpurge sub_10013820@<al>(_DWORD *a1@<edi>, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  HANDLE Thread; // eax
  _DWORD *v6; // ecx

  if ( *a1 != 0 )
    return 0;
  v3 = operator new(0x18u);
  if ( v3 != nullptr )
  {
    *v3 = &std::tr1::_Impl0<std::tr1::_Callable_obj<std::tr1::_Bind<std::tr1::_Notforced,std::tr1::_Bind1<std::tr1::_Callable_pmf<unsigned long (__thiscall sheriff_engine::Updater::*const)(void),sheriff_engine::Updater,0>,sheriff_engine::Updater *>>,0>,unsigned long,std::allocator<int>>::`vftable';
    v3[1] = a2;
    v3[2] = a3;
    v3[4] = v3;
    v4 = v3;
  }
  else
  {
    v4 = nullptr;
  }
  Thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)StartAddress, v4, 0, a1 + 1);
  *a1 = Thread;
  if ( Thread == nullptr )
  {
    if ( v4 != nullptr )
    {
      v6 = (_DWORD *)v4[4];
      if ( v6 != nullptr )
      {
        (*(void (__stdcall **)(bool))(*v6 + 12))(v6 != v4);
        v4[4] = 0;
      }
      operator delete(v4);
    }
    return 0;
  }
  return 1;
}

// Address: 0x100138F0
void *__fastcall sub_100138F0(unsigned int a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( 0xFFFFFFFF / a1 < 0x12C )
  {
    v2 = nullptr;
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&v2);
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  return operator new(300 * a1);
}

// Address: 0x10013940
int __usercall sub_10013940@<eax>(
        unsigned __int16 *a1@<eax>,
        int a2@<ecx>,
        unsigned __int16 *a3,
        int a4,
        int a5,
        char a6,
        _WORD *a7)
{
  unsigned __int16 *v7; // esi

  v7 = a1;
  sub_10013990(a3 - a1);
  for ( ; v7 != a3; ++a7 )
    *a7 = tolower(*v7++);
  return a2;
}

// Address: 0x10013990
_DWORD *__userpurge sub_10013990@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<ebx>, int a3)
{
  _DWORD *v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  unsigned int v7; // edx

  v3 = (_DWORD *)*a1;
  v4 = a1[1];
  if ( *a1 != -4 )
  {
    if ( v3 == nullptr )
      _invalid_parameter_noinfo();
    v5 = v3 + 1;
    if ( v3[6] < 8u )
      v6 = v3 + 1;
    else
      v6 = (_DWORD *)*v5;
    v7 = v4 + 2 * a3;
    if ( v7 > (unsigned int)v6 + 2 * v3[5] )
      goto LABEL_11;
    if ( v3[6] >= 8u )
      v5 = (_DWORD *)*v5;
    if ( v7 < (unsigned int)v5 )
LABEL_11:
      _invalid_parameter_noinfo();
  }
  *a2 = v3;
  a2[1] = v4 + 2 * a3;
  return a2;
}

// Address: 0x100139F0
_DWORD *__thiscall sub_100139F0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  if ( a2 != nullptr || (result = operator new(0x10u)) != nullptr )
  {
    *result = &std::tr1::_Impl0<std::tr1::_Callable_obj<std::tr1::_Bind<std::tr1::_Notforced,std::tr1::_Bind1<std::tr1::_Callable_pmf<unsigned long (__thiscall sheriff_engine::Updater::*const)(void),sheriff_engine::Updater,0>,sheriff_engine::Updater *>>,0>,unsigned long,std::allocator<int>>::`vftable';
    result[1] = *(this + 1);
    result[2] = *(this + 2);
  }
  return result;
}

// Address: 0x10013A20
int __thiscall sub_10013A20(int this)
{
  return (*(int (__thiscall **)(_DWORD))(this + 4))(*(_DWORD *)(this + 8));
}

// Address: 0x10013A30
void ***sub_10013A30()
{
  return &std::tr1::_Bind<std::tr1::_Notforced,std::tr1::_Bind1<std::tr1::_Callable_pmf<unsigned long (__thiscall sheriff_engine::Updater::*const)(void),sheriff_engine::Updater,0>,sheriff_engine::Updater *>> `RTTI Type Descriptor';
}

// Address: 0x10013A40
char *__thiscall sub_10013A40(char *this)
{
  return this + 4;
}

// Address: 0x10013A50
void __thiscall sub_10013A50(void *this, char a2)
{
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 16))(this, 0);
  if ( a2 != 0 )
    operator delete(this);
}

// Address: 0x10013A70
_DWORD *__thiscall sub_10013A70(_DWORD *this, char a2)
{
  *this = &std::tr1::_Impl_base0<unsigned long>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10013AC0
int __stdcall sub_10013AC0(int a1)
{
  int v1; // eax
  int v2; // eax

  if ( *(_DWORD *)aSnzp != 1348095571 )
    return 0;
  if ( word_1003B1CE != 1 )
    return 0;
  if ( (unsigned int)dword_1003B1D0 > 0x8A73B )
    return 0;
  if ( (unsigned int)(dword_1003B1D4 + dword_1003B1DC) > 0x8A73B )
    return 0;
  if ( (unsigned int)(dword_1003B1E8 + dword_1003B1E0) > 0x8A73B )
    return 0;
  v1 = sub_10013C50(&aSnzp[dword_1003B1D4]);
  *(_DWORD *)(a1 + 44) = v1;
  if ( v1 == 0 )
    return 0;
  v2 = sub_10013C50(&aSnzp[dword_1003B1E0]);
  *(_DWORD *)(a1 + 48) = v2;
  if ( v2 == 0 )
  {
    operator delete(*(void **)(a1 + 44));
    return 0;
  }
  qmemcpy((void *)(a1 + 8), aSnzp, 0x24u);
  *(_DWORD *)a1 = aSnzp;
  *(_DWORD *)(a1 + 4) = 567099;
  return 1;
}

// Address: 0x10013BA0
int __userpurge sub_10013BA0@<eax>(unsigned int a1@<eax>, _DWORD *a2@<ecx>, _DWORD *a3)
{
  int v3; // eax
  int v4; // esi
  int result; // eax

  if ( a3 != nullptr )
    *a3 = -1;
  if ( *a2 == 0 || a1 >= a2[6] )
    return 0;
  v3 = a2[11] + 44 * a1;
  v4 = v3;
  if ( *(_DWORD *)(v3 + 12) == 0 )
  {
    if ( a3 != nullptr )
      *a3 = 0;
    return 0;
  }
  result = sub_10013C50(*a2 + *(_DWORD *)(v3 + 4));
  if ( result == 0 )
    return 0;
  if ( a3 != nullptr )
    *a3 = *(_DWORD *)(v4 + 12);
  return result;
}

// Address: 0x10013C00
int __userpurge sub_10013C00@<eax>(
        unsigned int a1@<eax>,
        _DWORD *a2@<edx>,
        _DWORD *a3@<edi>,
        _DWORD *a4@<esi>,
        _DWORD *a5)
{
  _DWORD *v6; // eax

  if ( *a5 == 0 || a1 >= a5[6] )
    return 0;
  v6 = (_DWORD *)(a5[11] + 44 * a1);
  if ( a2 != nullptr )
  {
    *a2 = v6[5];
    a2[1] = v6[6];
  }
  if ( a4 != nullptr )
  {
    *a4 = v6[7];
    a4[1] = v6[8];
  }
  if ( a3 != nullptr )
  {
    *a3 = v6[9];
    a3[1] = v6[10];
  }
  return 1;
}

// Address: 0x10013C50
void *__userpurge sub_10013C50@<eax>(void *a1@<ebx>, void *a2@<edi>, void *Src)
{
  void *v3; // ebp
  void *v4; // eax
  void *v5; // esi
  size_t v7; // [esp+0h] [ebp-Ch]

  v3 = Src;
  Src = a2;
  v4 = operator new(v7);
  v5 = v4;
  if ( a1 == a2 )
  {
    memcpy_0(v4, v3, (size_t)a2);
    return v5;
  }
  else if ( sub_10018860(&Src) != 0 || Src != a2 )
  {
    operator delete(v5);
    return nullptr;
  }
  else
  {
    return v5;
  }
}

// Address: 0x10013CB0
unsigned int __usercall sub_10013CB0@<eax>(unsigned int a1@<eax>, unsigned __int8 *a2@<edx>, unsigned int a3@<ecx>)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned __int8 *v5; // esi
  unsigned int v7; // ebp
  int i; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // ecx
  unsigned int v20; // edi
  unsigned int v21; // ecx
  unsigned int v22; // edi
  unsigned int v23; // ecx
  unsigned int v24; // edi
  unsigned int v25; // ecx
  int v26; // edi
  int v27; // ecx
  int v28; // edi
  int v29; // ecx
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // ecx
  int v34; // edi
  int v35; // ecx
  int v36; // edi
  int v37; // ecx
  int v38; // edi
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // edi
  unsigned int v42; // ecx
  unsigned int v43; // edi
  unsigned int v44; // ecx
  unsigned int v45; // edi
  unsigned int v46; // ecx
  unsigned int v47; // edi
  unsigned int v48; // ecx
  unsigned int v49; // edi
  unsigned int v50; // ecx
  unsigned int v51; // edi
  unsigned int v52; // ecx
  unsigned int v53; // edi
  unsigned int v54; // ecx
  unsigned int v55; // edi
  unsigned int v56; // ecx
  int v57; // edi
  int v58; // ecx
  int v59; // edi
  int v60; // ecx
  int v61; // edi
  int v62; // ecx
  int v63; // edi
  int v64; // ecx
  int v65; // edi
  int v66; // ecx
  int v67; // edi
  int v68; // ecx
  int v69; // edi

  v3 = a1;
  v4 = HIWORD(a3);
  a3 = (unsigned __int16)a3;
  v5 = a2;
  if ( a1 == 1 )
  {
    a3 = *a2 + (unsigned __int16)a3;
    if ( a3 >= 0xFFF1 )
      a3 -= 65521;
    v4 += a3;
    if ( v4 >= 0xFFF1 )
      return a3 | ((v4 - 65521) << 16);
    return a3 | (v4 << 16);
  }
  if ( a2 == nullptr )
    return 1;
  if ( a1 >= 0x10 )
  {
    if ( a1 >= 0x15B0 )
    {
      v7 = a1 / 0x15B0;
      do
      {
        v3 -= 5552;
        for ( i = 347; i != 0; --i )
        {
          v9 = *v5 + a3;
          v10 = v9 + v4;
          v11 = v5[1] + v9;
          v12 = v11 + v10;
          v13 = v5[2] + v11;
          v14 = v13 + v12;
          v15 = v5[3] + v13;
          v16 = v15 + v14;
          v17 = v5[4] + v15;
          v18 = v17 + v16;
          v19 = v5[5] + v17;
          v20 = v19 + v18;
          v21 = v5[6] + v19;
          v22 = v21 + v20;
          v23 = v5[7] + v21;
          v24 = v23 + v22;
          v25 = v5[8] + v23;
          v26 = v25 + v24;
          v27 = v5[9] + v25;
          v28 = v27 + v26;
          v29 = v5[10] + v27;
          v30 = v29 + v28;
          v31 = v5[11] + v29;
          v32 = v31 + v30;
          v33 = v5[12] + v31;
          v34 = v33 + v32;
          v35 = v5[13] + v33;
          v36 = v35 + v34;
          v37 = v5[14] + v35;
          v38 = v37 + v36;
          a3 = v5[15] + v37;
          v4 = a3 + v38;
          v5 += 16;
        }
        a3 %= 0xFFF1u;
        v4 %= 0xFFF1u;
        --v7;
      }
      while ( v7 != 0 );
    }
    if ( v3 != 0 )
    {
      if ( v3 >= 0x10 )
      {
        v39 = v3 >> 4;
        do
        {
          v40 = *v5 + a3;
          v41 = v40 + v4;
          v42 = v5[1] + v40;
          v43 = v42 + v41;
          v44 = v5[2] + v42;
          v45 = v44 + v43;
          v46 = v5[3] + v44;
          v47 = v46 + v45;
          v48 = v5[4] + v46;
          v49 = v48 + v47;
          v50 = v5[5] + v48;
          v51 = v50 + v49;
          v52 = v5[6] + v50;
          v53 = v52 + v51;
          v54 = v5[7] + v52;
          v55 = v54 + v53;
          v56 = v5[8] + v54;
          v57 = v56 + v55;
          v58 = v5[9] + v56;
          v59 = v58 + v57;
          v60 = v5[10] + v58;
          v61 = v60 + v59;
          v62 = v5[11] + v60;
          v63 = v62 + v61;
          v64 = v5[12] + v62;
          v65 = v64 + v63;
          v66 = v5[13] + v64;
          v67 = v66 + v65;
          v68 = v5[14] + v66;
          v69 = v68 + v67;
          a3 = v5[15] + v68;
          v3 -= 16;
          v4 = a3 + v69;
          v5 += 16;
          --v39;
        }
        while ( v39 != 0 );
      }
      for ( ; v3 != 0; v4 += a3 )
      {
        a3 += *v5;
        --v3;
        ++v5;
      }
      a3 %= 0xFFF1u;
      v4 %= 0xFFF1u;
    }
    return a3 | (v4 << 16);
  }
  if ( a1 != 0 )
  {
    do
    {
      a3 += *v5;
      --v3;
      ++v5;
      v4 += a3;
    }
    while ( v3 != 0 );
  }
  if ( a3 >= 0xFFF1 )
    a3 -= 65521;
  return a3 | ((v4 + 15 * (v4 / 0xFFF1)) << 16);
}

// Address: 0x10013F10
int __thiscall sub_10013F10(void *this)
{
  if ( this != nullptr )
    return sub_10013F30();
  else
    return 0;
}

// Address: 0x10013F30
int __usercall sub_10013F30@<eax>(int a1@<eax>, unsigned int a2@<edx>, _BYTE *a3@<ecx>)
{
  unsigned int v3; // esi
  unsigned int i; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  _BYTE *v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax

  v3 = a2;
  for ( i = ~a1; v3 != 0; --v3 )
  {
    if ( ((unsigned __int8)a3 & 3) == 0 )
      break;
    i = dword_10033660[(unsigned __int8)(i ^ *a3++)] ^ (i >> 8);
  }
  if ( v3 >= 0x20 )
  {
    v5 = v3 >> 5;
    do
    {
      v6 = *(_DWORD *)a3 ^ i;
      v7 = a3 + 8;
      v8 = *((_DWORD *)v7 - 1)
         ^ dword_10034260[(unsigned __int8)v6]
         ^ dword_10033660[HIBYTE(v6)]
         ^ dword_10033E60[BYTE1(v6)]
         ^ dword_10033A60[BYTE2(v6)];
      v7 += 8;
      v9 = *((_DWORD *)v7 - 2)
         ^ dword_10034260[(unsigned __int8)v8]
         ^ dword_10033660[HIBYTE(v8)]
         ^ dword_10033E60[BYTE1(v8)]
         ^ dword_10033A60[BYTE2(v8)];
      v7 += 8;
      v10 = *((_DWORD *)v7 - 3)
          ^ dword_10034260[(unsigned __int8)v9]
          ^ dword_10033660[HIBYTE(v9)]
          ^ dword_10033E60[BYTE1(v9)]
          ^ dword_10033A60[BYTE2(v9)];
      v11 = *((_DWORD *)v7 - 2)
          ^ dword_10034260[(unsigned __int8)v10]
          ^ dword_10033660[HIBYTE(v10)]
          ^ dword_10033E60[BYTE1(v10)]
          ^ dword_10033A60[BYTE2(v10)];
      v12 = *((_DWORD *)v7 - 1)
          ^ dword_10034260[(unsigned __int8)v11]
          ^ dword_10033660[HIBYTE(v11)]
          ^ dword_10033E60[BYTE1(v11)]
          ^ dword_10033A60[BYTE2(v11)];
      v7 += 4;
      v13 = *((_DWORD *)v7 - 1)
          ^ dword_10034260[(unsigned __int8)v12]
          ^ dword_10033660[HIBYTE(v12)]
          ^ dword_10033E60[BYTE1(v12)]
          ^ dword_10033A60[BYTE2(v12)];
      a3 = v7 + 4;
      v3 -= 32;
      v14 = *((_DWORD *)a3 - 1)
          ^ dword_10034260[(unsigned __int8)v13]
          ^ dword_10033660[HIBYTE(v13)]
          ^ dword_10033E60[BYTE1(v13)]
          ^ dword_10033A60[BYTE2(v13)];
      i = dword_10034260[(unsigned __int8)v14]
        ^ dword_10033660[HIBYTE(v14)]
        ^ dword_10033E60[BYTE1(v14)]
        ^ dword_10033A60[BYTE2(v14)];
      --v5;
    }
    while ( v5 != 0 );
  }
  if ( v3 >= 4 )
  {
    v15 = v3 >> 2;
    do
    {
      v16 = *(_DWORD *)a3 ^ i;
      a3 += 4;
      v3 -= 4;
      --v15;
      i = dword_10034260[(unsigned __int8)v16]
        ^ dword_10033660[HIBYTE(v16)]
        ^ dword_10033E60[BYTE1(v16)]
        ^ dword_10033A60[BYTE2(v16)];
    }
    while ( v15 != 0 );
  }
  for ( ; v3 != 0; --v3 )
    i = dword_10033660[(unsigned __int8)(i ^ *a3++)] ^ (i >> 8);
  return ~i;
}

// Address: 0x10014210
void *__usercall sub_10014210@<eax>(int a1@<edi>)
{
  int v1; // ebx
  size_t v2; // esi
  void *result; // eax
  bool v4; // zf

  v1 = *(_DWORD *)(a1 + 28);
  sub_10018700();
  v2 = *(_DWORD *)(v1 + 20);
  result = *(void **)(a1 + 16);
  if ( v2 > (unsigned int)result )
    v2 = *(_DWORD *)(a1 + 16);
  if ( v2 != 0 )
  {
    result = memcpy_0(*(void **)(a1 + 12), *(const void **)(v1 + 16), v2);
    *(_DWORD *)(a1 + 12) += v2;
    *(_DWORD *)(v1 + 16) += v2;
    *(_DWORD *)(a1 + 20) += v2;
    *(_DWORD *)(a1 + 16) -= v2;
    v4 = *(_DWORD *)(v1 + 20) == v2;
    *(_DWORD *)(v1 + 20) -= v2;
    if ( v4 )
      *(_DWORD *)(v1 + 16) = *(_DWORD *)(v1 + 8);
  }
  return result;
}

// Address: 0x10014260
size_t __usercall sub_10014260@<eax>(size_t a1@<ecx>, _BYTE *a2@<ebx>, int a3@<esi>)
{
  size_t v3; // edi
  int v5; // eax
  unsigned int v6; // eax

  v3 = *(_DWORD *)(a3 + 4);
  if ( v3 > a1 )
    v3 = a1;
  if ( v3 == 0 )
    return 0;
  *(_DWORD *)(a3 + 4) -= v3;
  memcpy_0(a2, *(const void **)a3, v3);
  v5 = *(_DWORD *)(*(_DWORD *)(a3 + 28) + 24);
  if ( v5 == 1 )
  {
    v6 = sub_10013CB0(v3, a2, *(_DWORD *)(a3 + 48));
    *(_DWORD *)a3 += v3;
    *(_DWORD *)(a3 + 8) += v3;
    *(_DWORD *)(a3 + 48) = v6;
    return v3;
  }
  if ( v5 == 2 )
  {
    if ( a2 == nullptr )
    {
      *(_DWORD *)a3 += v3;
      *(_DWORD *)(a3 + 8) += v3;
      *(_DWORD *)(a3 + 48) = 0;
      return v3;
    }
    *(_DWORD *)(a3 + 48) = sub_10013F30(*(_DWORD *)(a3 + 48), v3, a2);
  }
  *(_DWORD *)a3 += v3;
  *(_DWORD *)(a3 + 8) += v3;
  return v3;
}

// Address: 0x100142E0
unsigned int __usercall sub_100142E0@<eax>(unsigned int a1@<eax>, _DWORD *a2@<edi>)
{
  unsigned int v2; // edx
  unsigned int v3; // ebp
  int v4; // esi
  _BYTE *v5; // ecx
  _BYTE *v6; // esi
  _BYTE *v7; // edx
  char v8; // bl
  _BYTE *v9; // edx
  _BYTE *v10; // ecx
  _BYTE *v11; // edx
  char v12; // bl
  _BYTE *v13; // edx
  char v14; // bl
  _BYTE *v15; // edx
  char v16; // bl
  _BYTE *v17; // edx
  char v18; // bl
  _BYTE *v19; // edx
  char v20; // bl
  _BYTE *v21; // edx
  char v22; // bl
  _BYTE *v23; // edx
  char v24; // bl
  _BYTE *v25; // edx
  char v26; // bl
  int v27; // edx
  unsigned int result; // eax
  char v29; // [esp+Eh] [ebp-12h]
  char v30; // [esp+Fh] [ebp-11h]
  unsigned int v31; // [esp+10h] [ebp-10h]
  int v32; // [esp+14h] [ebp-Ch]
  unsigned int v33; // [esp+18h] [ebp-8h]

  v2 = a2[27];
  v3 = a2[30];
  v31 = a2[31];
  v32 = a2[36];
  v4 = a2[11];
  v5 = (_BYTE *)(v2 + a2[14]);
  if ( v2 <= v4 - 262 )
    v33 = 0;
  else
    v33 = v2 - v4 + 262;
  v29 = v5[v3 - 1];
  v6 = v5 + 258;
  v30 = v5[v3];
  if ( v3 >= a2[35] )
    v31 >>= 2;
  if ( (unsigned int)v32 > a2[29] )
    v32 = a2[29];
  do
  {
    v7 = (_BYTE *)(a1 + a2[14]);
    if ( v7[v3] == v30 && v7[v3 - 1] == v29 && *v7 == *v5 )
    {
      v8 = v7[1];
      v9 = v7 + 1;
      if ( v8 == v5[1] )
      {
        v10 = v5 + 2;
        v11 = v9 + 1;
        do
        {
          v12 = *++v10;
          v13 = v11 + 1;
          if ( v12 != *v13 )
            break;
          v14 = *++v10;
          v15 = v13 + 1;
          if ( v14 != *v15 )
            break;
          v16 = *++v10;
          v17 = v15 + 1;
          if ( v16 != *v17 )
            break;
          v18 = *++v10;
          v19 = v17 + 1;
          if ( v18 != *v19 )
            break;
          v20 = *++v10;
          v21 = v19 + 1;
          if ( v20 != *v21 )
            break;
          v22 = *++v10;
          v23 = v21 + 1;
          if ( v22 != *v23 )
            break;
          v24 = *++v10;
          v25 = v23 + 1;
          if ( v24 != *v25 )
            break;
          v26 = *++v10;
          v11 = v25 + 1;
          if ( v26 != *v11 )
            break;
        }
        while ( v10 < v6 );
        v27 = v10 - v6 + 258;
        v5 = v6 - 258;
        if ( v27 > (int)v3 )
        {
          a2[28] = a1;
          v3 = v27;
          if ( v27 >= v32 )
            break;
          v29 = v5[v27 - 1];
          v30 = v5[v27];
        }
      }
    }
    a1 = *(unsigned __int16 *)(a2[16] + 2 * (a1 & a2[13]));
    if ( a1 <= v33 )
      break;
    --v31;
  }
  while ( v31 != 0 );
  result = a2[29];
  if ( v3 <= result )
    return v3;
  return result;
}

// Address: 0x10014440
char *__usercall sub_10014440@<eax>(int *a1@<edi>)
{
  size_t v1; // ebp
  unsigned int v2; // eax
  size_t v3; // esi
  int v4; // edx
  int v5; // eax
  _WORD *v6; // ecx
  unsigned int v7; // eax
  __int16 v8; // ax
  size_t v9; // edx
  _WORD *v10; // ecx
  unsigned int v11; // eax
  __int16 v12; // ax
  int v13; // esi
  int v14; // ecx
  int v15; // edx
  unsigned __int8 *v16; // ebx
  int v17; // eax
  int v18; // ebx
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  char *result; // eax
  unsigned int v24; // ecx
  unsigned int v25; // esi
  size_t v26; // ebx
  size_t v27; // esi
  size_t v28; // ecx

  v1 = a1[11];
  do
  {
    v2 = a1[27];
    v3 = a1[15] - a1[29] - v2;
    if ( v2 >= a1[11] + v1 - 262 )
    {
      memcpy_0((void *)a1[14], (const void *)(a1[14] + v1), v1);
      v4 = a1[19];
      v5 = a1[17];
      a1[28] -= v1;
      a1[27] -= v1;
      a1[23] -= v1;
      v6 = (_WORD *)(v5 + 2 * v4);
      do
      {
        v7 = (unsigned __int16)*--v6;
        if ( v7 < v1 )
          v8 = 0;
        else
          v8 = v7 - v1;
        --v4;
        *v6 = v8;
      }
      while ( v4 != 0 );
      v9 = v1;
      v10 = (_WORD *)(a1[16] + 2 * v1);
      do
      {
        v11 = (unsigned __int16)*--v10;
        if ( v11 < v1 )
          v12 = 0;
        else
          v12 = v11 - v1;
        --v9;
        *v10 = v12;
      }
      while ( v9 != 0 );
      v3 += v1;
    }
    if ( *(_DWORD *)(*a1 + 4) == 0 )
      break;
    a1[29] += sub_10014260(v3, (_BYTE *)(a1[14] + a1[27] + a1[29]), *a1);
    v13 = a1[1453];
    if ( (unsigned int)(v13 + a1[29]) >= 3 )
    {
      v14 = a1[22];
      v15 = a1[27] - v13;
      v16 = (unsigned __int8 *)(a1[14] + v15);
      v17 = *v16;
      a1[18] = v17;
      a1[18] = a1[21] & (v16[1] ^ (v17 << v14));
      if ( v13 != 0 )
      {
        do
        {
          v18 = a1[16];
          v19 = a1[17];
          v20 = a1[21] & ((a1[18] << a1[22]) ^ *(unsigned __int8 *)(a1[14] + v15 + 2));
          v21 = a1[13];
          a1[18] = v20;
          *(_WORD *)(v18 + 2 * (v15 & v21)) = *(_WORD *)(v19 + 2 * v20);
          *(_WORD *)(a1[17] + 2 * a1[18]) = v15;
          v22 = --a1[1453];
          ++v15;
        }
        while ( (unsigned int)(v22 + a1[29]) >= 3 && v22 != 0 );
      }
    }
  }
  while ( (unsigned int)a1[29] < 0x106 && *(_DWORD *)(*a1 + 4) != 0 );
  result = (char *)a1[1456];
  v24 = a1[15];
  if ( (unsigned int)result < v24 )
  {
    v25 = a1[27] + a1[29];
    if ( (unsigned int)result >= v25 )
    {
      if ( (unsigned int)result < v25 + 258 )
      {
        v27 = v25 - (_DWORD)result + 258;
        v28 = v24 - (_DWORD)result;
        if ( v27 > v28 )
          v27 = v28;
        result = (char *)memset(&result[a1[14]], 0, v27);
        a1[1456] += v27;
      }
    }
    else
    {
      v26 = v24 - v25;
      if ( v24 - v25 > 0x102 )
        v26 = 258;
      result = (char *)memset((void *)(v25 + a1[14]), 0, v26);
      a1[1456] = v25 + v26;
    }
  }
  return result;
}

// Address: 0x10014600
int __cdecl sub_10014600(int *a1, int a2)
{
  unsigned int v2; // eax
  bool v3; // zf
  int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // ebx
  size_t v10; // ebp
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // ebx
  size_t v15; // ebp
  int v17; // edx
  int v18; // ecx
  int v19; // edi
  int v20; // ecx
  int v21; // edi
  int v22; // [esp+10h] [ebp-4h]

  v22 = 0xFFFF;
  if ( (unsigned int)(a1[3] - 5) < 0xFFFF )
    v22 = a1[3] - 5;
  while ( 1 )
  {
    v2 = a1[29];
    if ( v2 <= 1 )
    {
      sub_10014440(a1);
      v2 = a1[29];
      if ( v2 == 0 )
        break;
    }
    v3 = v2 + a1[27] == 0;
    a1[27] += v2;
    v4 = a1[23];
    v5 = a1[27];
    a1[29] = 0;
    v6 = v4 + v22;
    if ( !v3 && v5 < v6 )
      goto LABEL_25;
    a1[29] = v5 - v6;
    a1[27] = v6;
    if ( v4 < 0 )
      v7 = 0;
    else
      v7 = v4 + a1[14];
    sub_10018070(v7, 0);
    v8 = *a1;
    a1[23] = a1[27];
    v9 = *(_DWORD *)(v8 + 28);
    sub_10018700();
    v10 = *(_DWORD *)(v9 + 20);
    if ( v10 > *(_DWORD *)(v8 + 16) )
      v10 = *(_DWORD *)(v8 + 16);
    if ( v10 != 0 )
    {
      memcpy_0(*(void **)(v8 + 12), *(const void **)(v9 + 16), v10);
      *(_DWORD *)(v8 + 12) += v10;
      *(_DWORD *)(v9 + 16) += v10;
      *(_DWORD *)(v8 + 20) += v10;
      *(_DWORD *)(v8 + 16) -= v10;
      v3 = *(_DWORD *)(v9 + 20) == v10;
      *(_DWORD *)(v9 + 20) -= v10;
      if ( v3 )
        *(_DWORD *)(v9 + 16) = *(_DWORD *)(v9 + 8);
    }
    if ( *(_DWORD *)(*a1 + 16) != 0 )
    {
LABEL_25:
      v11 = a1[23];
      if ( a1[27] - v11 < (unsigned int)(a1[11] - 262) )
        continue;
      if ( v11 < 0 )
        v12 = 0;
      else
        v12 = v11 + a1[14];
      sub_10018070(v12, 0);
      v13 = *a1;
      a1[23] = a1[27];
      v14 = *(_DWORD *)(v13 + 28);
      sub_10018700();
      v15 = *(_DWORD *)(v14 + 20);
      if ( v15 > *(_DWORD *)(v13 + 16) )
        v15 = *(_DWORD *)(v13 + 16);
      if ( v15 != 0 )
      {
        memcpy_0(*(void **)(v13 + 12), *(const void **)(v14 + 16), v15);
        *(_DWORD *)(v13 + 12) += v15;
        *(_DWORD *)(v14 + 16) += v15;
        *(_DWORD *)(v13 + 20) += v15;
        *(_DWORD *)(v13 + 16) -= v15;
        v3 = *(_DWORD *)(v14 + 20) == v15;
        *(_DWORD *)(v14 + 20) -= v15;
        if ( v3 )
          *(_DWORD *)(v14 + 16) = *(_DWORD *)(v14 + 8);
      }
      if ( *(_DWORD *)(*a1 + 16) != 0 )
        continue;
    }
    return 0;
  }
  if ( a2 == 0 )
    return 0;
  v17 = a1[23];
  a1[1453] = 0;
  if ( a2 != 4 )
  {
    if ( a1[27] <= v17 )
      return 1;
    v20 = v17 < 0 ? 0 : v17 + a1[14];
    sub_10018070(v20, 0);
    v21 = *a1;
    a1[23] = a1[27];
    sub_10014210(v21);
    return *(_DWORD *)(*a1 + 16) != 0;
  }
  if ( v17 < 0 )
    v18 = 0;
  else
    v18 = v17 + a1[14];
  sub_10018070(v18, 1);
  v19 = *a1;
  a1[23] = a1[27];
  sub_10014210(v19);
  return (*(_DWORD *)(*a1 + 16) != 0) + 2;
}

// Address: 0x10014810
int __cdecl sub_10014810(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // edx
  unsigned int v8; // eax
  unsigned __int8 v9; // al
  __int16 v10; // cx
  unsigned __int16 v11; // cx
  int v12; // eax
  unsigned int v13; // eax
  BOOL v14; // ebx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // ebp
  bool v19; // zf
  unsigned __int8 *v20; // edx
  int v21; // ecx
  int v22; // eax
  unsigned __int8 v23; // al
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  int v27; // ebp
  size_t v28; // ebx
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // ecx
  int v33; // edi
  int v34; // edx
  int v35; // ecx
  int v36; // edi

  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 116);
    if ( v2 < 0x106 )
    {
      sub_10014440((int *)a1);
      v2 = *(_DWORD *)(a1 + 116);
      if ( v2 < 0x106 && a2 == 0 )
        return 0;
      if ( v2 == 0 )
        break;
    }
    if ( v2 >= 3 )
    {
      v3 = *(_DWORD *)(a1 + 108);
      v4 = *(_DWORD *)(a1 + 84)
         & (*(unsigned __int8 *)(*(_DWORD *)(a1 + 56) + v3 + 2)
          ^ (*(_DWORD *)(a1 + 72) << *(_DWORD *)(a1 + 88)));
      v5 = *(_DWORD *)(a1 + 68);
      v6 = v3 & *(_DWORD *)(a1 + 52);
      v7 = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 72) = v4;
      *(_WORD *)(v7 + 2 * v6) = *(_WORD *)(v5 + 2 * v4);
      v8 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 64) + 2 * (*(_DWORD *)(a1 + 52) & *(_DWORD *)(a1 + 108)));
      *(_WORD *)(*(_DWORD *)(a1 + 68) + 2 * *(_DWORD *)(a1 + 72)) = *(_WORD *)(a1 + 108);
      if ( v8 != 0 && *(_DWORD *)(a1 + 108) - v8 <= *(_DWORD *)(a1 + 44) - 262 )
        *(_DWORD *)(a1 + 96) = sub_100142E0(v8, (_DWORD *)a1);
    }
    if ( *(_DWORD *)(a1 + 96) < 3u )
    {
      v23 = *(_BYTE *)(*(_DWORD *)(a1 + 108) + *(_DWORD *)(a1 + 56));
      *(_WORD *)(*(_DWORD *)(a1 + 5796) + 2 * *(_DWORD *)(a1 + 5792)) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 5784) + (*(_DWORD *)(a1 + 5792))++) = v23;
      ++*(_WORD *)(a1 + 4 * v23 + 148);
      v14 = *(_DWORD *)(a1 + 5792) == *(_DWORD *)(a1 + 5788) - 1;
      --*(_DWORD *)(a1 + 116);
      ++*(_DWORD *)(a1 + 108);
    }
    else
    {
      v9 = *(_BYTE *)(a1 + 96);
      v10 = *(_WORD *)(a1 + 108) - *(_WORD *)(a1 + 112);
      *(_WORD *)(*(_DWORD *)(a1 + 5796) + 2 * *(_DWORD *)(a1 + 5792)) = v10;
      v9 -= 3;
      *(_BYTE *)(*(_DWORD *)(a1 + 5784) + (*(_DWORD *)(a1 + 5792))++) = v9;
      ++*(_WORD *)(a1 + 4 * (unsigned __int8)byte_10032128[v9] + 1176);
      v11 = v10 - 1;
      if ( v11 >= 0x100u )
        v12 = (unsigned __int8)byte_10032028[v11 >> 7];
      else
        v12 = (unsigned __int8)byte_10031F28[v11];
      ++*(_WORD *)(a1 + 4 * v12 + 2440);
      v13 = *(_DWORD *)(a1 + 96);
      v14 = *(_DWORD *)(a1 + 5792) == *(_DWORD *)(a1 + 5788) - 1;
      *(_DWORD *)(a1 + 116) -= v13;
      if ( v13 > *(_DWORD *)(a1 + 128) || *(_DWORD *)(a1 + 116) < 3u )
      {
        *(_DWORD *)(a1 + 108) += v13;
        v20 = (unsigned __int8 *)(*(_DWORD *)(a1 + 108) + *(_DWORD *)(a1 + 56));
        v21 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 96) = 0;
        v22 = *v20;
        *(_DWORD *)(a1 + 72) = v22;
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 84) & (v20[1] ^ (v22 << v21));
      }
      else
      {
        *(_DWORD *)(a1 + 96) = v13 - 1;
        do
        {
          v15 = ++*(_DWORD *)(a1 + 108);
          v16 = *(_DWORD *)(a1 + 68);
          v17 = *(_DWORD *)(a1 + 84)
              & ((*(_DWORD *)(a1 + 72) << *(_DWORD *)(a1 + 88))
               ^ *(unsigned __int8 *)(v15 + *(_DWORD *)(a1 + 56) + 2));
          v18 = *(_DWORD *)(a1 + 52);
          *(_DWORD *)(a1 + 72) = v17;
          *(_WORD *)(*(_DWORD *)(a1 + 64) + 2 * (v15 & v18)) = *(_WORD *)(v16 + 2 * v17);
          *(_WORD *)(*(_DWORD *)(a1 + 68) + 2 * *(_DWORD *)(a1 + 72)) = *(_WORD *)(a1 + 108);
          v19 = (*(_DWORD *)(a1 + 96))-- == 1;
        }
        while ( !v19 );
        ++*(_DWORD *)(a1 + 108);
      }
    }
    if ( v14 )
    {
      v24 = *(_DWORD *)(a1 + 92);
      if ( v24 < 0 )
        v25 = 0;
      else
        v25 = v24 + *(_DWORD *)(a1 + 56);
      sub_10018070(v25, 0);
      v26 = *(_DWORD *)a1;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      v27 = *(_DWORD *)(v26 + 28);
      sub_10018700();
      v28 = *(_DWORD *)(v27 + 20);
      if ( v28 > *(_DWORD *)(v26 + 16) )
        v28 = *(_DWORD *)(v26 + 16);
      if ( v28 != 0 )
      {
        memcpy_0(*(void **)(v26 + 12), *(const void **)(v27 + 16), v28);
        *(_DWORD *)(v26 + 12) += v28;
        *(_DWORD *)(v27 + 16) += v28;
        *(_DWORD *)(v26 + 20) += v28;
        *(_DWORD *)(v26 + 16) -= v28;
        v19 = *(_DWORD *)(v27 + 20) == v28;
        *(_DWORD *)(v27 + 20) -= v28;
        if ( v19 )
          *(_DWORD *)(v27 + 16) = *(_DWORD *)(v27 + 8);
      }
      if ( *(_DWORD *)(*(_DWORD *)a1 + 16) == 0 )
        return 0;
    }
  }
  v30 = *(_DWORD *)(a1 + 108);
  if ( v30 >= 2 )
    v30 = 2;
  *(_DWORD *)(a1 + 5812) = v30;
  if ( a2 == 4 )
  {
    v31 = *(_DWORD *)(a1 + 92);
    if ( v31 < 0 )
      v32 = 0;
    else
      v32 = v31 + *(_DWORD *)(a1 + 56);
    sub_10018070(v32, 1);
    v33 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
    sub_10014210(v33);
    return (*(_DWORD *)(*(_DWORD *)a1 + 16) != 0) + 2;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 5792) != 0 )
    {
      v34 = *(_DWORD *)(a1 + 92);
      v35 = v34 < 0 ? 0 : v34 + *(_DWORD *)(a1 + 56);
      sub_10018070(v35, 0);
      v36 = *(_DWORD *)a1;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_10014210(v36);
      if ( *(_DWORD *)(*(_DWORD *)a1 + 16) == 0 )
        return 0;
    }
    return 1;
  }
}

// Address: 0x10014B80
int __cdecl sub_10014B80(int *a1, int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edi
  unsigned __int8 v15; // al
  __int16 v16; // cx
  unsigned __int16 v17; // cx
  int v18; // eax
  int v19; // eax
  BOOL v20; // ecx
  unsigned int v21; // edx
  int v22; // ebp
  int v23; // eax
  int v24; // ecx
  bool v25; // zf
  int v26; // edx
  int v27; // ecx
  int v28; // edi
  int v29; // ebx
  size_t v30; // ebp
  unsigned __int8 v32; // al
  int v33; // edx
  int v34; // ecx
  int v35; // edi
  int v36; // ebx
  size_t v37; // ebp
  unsigned __int8 v38; // al
  unsigned int v39; // ecx
  int v40; // edx
  int v41; // ecx
  int v42; // edi
  int v43; // edx
  int v44; // ecx
  int v45; // edi
  BOOL v46; // [esp+14h] [ebp+4h]

  while ( 1 )
  {
    v3 = a1[29];
    if ( v3 < 0x106 )
    {
      sub_10014440(a1);
      v3 = a1[29];
      if ( v3 < 0x106 && a2 == 0 )
        return 0;
      if ( v3 == 0 )
        break;
    }
    v4 = 0;
    if ( v3 >= 3 )
    {
      v5 = a1[27];
      v6 = a1[21] & (*(unsigned __int8 *)(a1[14] + v5 + 2) ^ (a1[18] << a1[22]));
      v7 = a1[17];
      v8 = v5 & a1[13];
      v9 = a1[16];
      a1[18] = v6;
      *(_WORD *)(v9 + 2 * v8) = *(_WORD *)(v7 + 2 * v6);
      v4 = *(unsigned __int16 *)(a1[16] + 2 * (a1[13] & a1[27]));
      *(_WORD *)(a1[17] + 2 * a1[18]) = *((_WORD *)a1 + 54);
    }
    v10 = a1[24];
    v11 = a1[28];
    a1[30] = v10;
    a1[25] = v11;
    a1[24] = 2;
    if ( v4 != 0 && v10 < a1[32] && a1[27] - v4 <= a1[11] - 262 )
    {
      v12 = sub_100142E0(v4, a1);
      a1[24] = v12;
      if ( v12 <= 5 && (a1[34] == 1 || v12 == 3 && (unsigned int)(a1[27] - a1[28]) > 0x1000) )
        a1[24] = 2;
    }
    v13 = a1[30];
    if ( v13 < 3 || a1[24] > v13 )
    {
      if ( a1[26] != 0 )
      {
        v32 = *(_BYTE *)(a1[27] + a1[14] - 1);
        *(_WORD *)(a1[1449] + 2 * a1[1448]) = 0;
        *(_BYTE *)(a1[1446] + a1[1448]++) = v32;
        ++LOWORD(a1[v32 + 37]);
        if ( a1[1448] == a1[1447] - 1 )
        {
          v33 = a1[23];
          if ( v33 < 0 )
            v34 = 0;
          else
            v34 = v33 + a1[14];
          sub_10018070(v34, 0);
          v35 = *a1;
          a1[23] = a1[27];
          v36 = *(_DWORD *)(v35 + 28);
          sub_10018700();
          v37 = *(_DWORD *)(v36 + 20);
          if ( v37 > *(_DWORD *)(v35 + 16) )
            v37 = *(_DWORD *)(v35 + 16);
          if ( v37 != 0 )
          {
            memcpy_0(*(void **)(v35 + 12), *(const void **)(v36 + 16), v37);
            *(_DWORD *)(v35 + 12) += v37;
            *(_DWORD *)(v36 + 16) += v37;
            *(_DWORD *)(v35 + 20) += v37;
            *(_DWORD *)(v35 + 16) -= v37;
            v25 = *(_DWORD *)(v36 + 20) == v37;
            *(_DWORD *)(v36 + 20) -= v37;
            if ( v25 )
              *(_DWORD *)(v36 + 16) = *(_DWORD *)(v36 + 8);
          }
        }
        ++a1[27];
        --a1[29];
        goto LABEL_33;
      }
      ++a1[27];
      --a1[29];
      a1[26] = 1;
    }
    else
    {
      v14 = a1[27] + a1[29] - 3;
      v15 = *((_BYTE *)a1 + 120);
      v16 = *((_WORD *)a1 + 54) - *((_WORD *)a1 + 50) - 1;
      *(_WORD *)(a1[1449] + 2 * a1[1448]) = v16;
      v15 -= 3;
      *(_BYTE *)(a1[1446] + a1[1448]++) = v15;
      ++LOWORD(a1[(unsigned __int8)byte_10032128[v15] + 294]);
      v17 = v16 - 1;
      if ( v17 >= 0x100u )
        v18 = (unsigned __int8)byte_10032028[v17 >> 7];
      else
        v18 = (unsigned __int8)byte_10031F28[v17];
      ++LOWORD(a1[v18 + 610]);
      v19 = a1[30];
      v20 = a1[1448] == a1[1447] - 1;
      a1[29] += 1 - v19;
      a1[30] = v19 - 2;
      v46 = v20;
      do
      {
        v21 = ++a1[27];
        if ( v21 <= v14 )
        {
          v22 = a1[13];
          v23 = a1[21] & (*(unsigned __int8 *)(a1[14] + v21 + 2) ^ (a1[18] << a1[22]));
          v24 = a1[17];
          a1[18] = v23;
          *(_WORD *)(a1[16] + 2 * (v21 & v22)) = *(_WORD *)(v24 + 2 * v23);
          *(_WORD *)(a1[17] + 2 * a1[18]) = *((_WORD *)a1 + 54);
        }
        v25 = a1[30]-- == 1;
      }
      while ( !v25 );
      ++a1[27];
      a1[26] = 0;
      a1[24] = 2;
      if ( v46 )
      {
        v26 = a1[23];
        if ( v26 < 0 )
          v27 = 0;
        else
          v27 = v26 + a1[14];
        sub_10018070(v27, 0);
        v28 = *a1;
        a1[23] = a1[27];
        v29 = *(_DWORD *)(v28 + 28);
        sub_10018700();
        v30 = *(_DWORD *)(v29 + 20);
        if ( v30 > *(_DWORD *)(v28 + 16) )
          v30 = *(_DWORD *)(v28 + 16);
        if ( v30 != 0 )
        {
          memcpy_0(*(void **)(v28 + 12), *(const void **)(v29 + 16), v30);
          *(_DWORD *)(v28 + 12) += v30;
          *(_DWORD *)(v29 + 16) += v30;
          *(_DWORD *)(v28 + 20) += v30;
          *(_DWORD *)(v28 + 16) -= v30;
          v25 = *(_DWORD *)(v29 + 20) == v30;
          *(_DWORD *)(v29 + 20) -= v30;
          if ( v25 )
            *(_DWORD *)(v29 + 16) = *(_DWORD *)(v29 + 8);
        }
LABEL_33:
        if ( *(_DWORD *)(*a1 + 16) == 0 )
          return 0;
      }
    }
  }
  if ( a1[26] != 0 )
  {
    v38 = *(_BYTE *)(a1[27] + a1[14] - 1);
    *(_WORD *)(a1[1449] + 2 * a1[1448]) = 0;
    *(_BYTE *)(a1[1446] + a1[1448]++) = v38;
    ++LOWORD(a1[v38 + 37]);
    a1[26] = 0;
  }
  v39 = a1[27];
  if ( v39 >= 2 )
    v39 = 2;
  a1[1453] = v39;
  if ( a2 == 4 )
  {
    v40 = a1[23];
    if ( v40 < 0 )
      v41 = 0;
    else
      v41 = v40 + a1[14];
    sub_10018070(v41, 1);
    v42 = *a1;
    a1[23] = a1[27];
    sub_10014210(v42);
    return (*(_DWORD *)(*a1 + 16) != 0) + 2;
  }
  else
  {
    if ( a1[1448] != 0 )
    {
      v43 = a1[23];
      v44 = v43 < 0 ? 0 : v43 + a1[14];
      sub_10018070(v44, 0);
      v45 = *a1;
      a1[23] = a1[27];
      sub_10014210(v45);
      if ( *(_DWORD *)(*a1 + 16) == 0 )
        return 0;
    }
    return 1;
  }
}

// Address: 0x10015000
_DWORD *__cdecl sub_10015000(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // ebx
  unsigned __int8 *v4; // ebp
  _BYTE *v5; // esi
  unsigned int v6; // edi
  int v7; // edx
  int v8; // eax
  unsigned int v9; // eax
  char v10; // dl
  unsigned int v11; // edx
  int v12; // eax
  int v13; // edx
  unsigned __int8 *v14; // ebp
  int v15; // eax
  unsigned int v16; // edx
  char v17; // al
  unsigned int v18; // eax
  int v19; // edx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  char v23; // cl
  _BYTE *v24; // eax
  unsigned int v25; // ebp
  _DWORD *v26; // eax
  int v27; // ecx
  _BYTE *v28; // ecx
  char v29; // al
  int v30; // edx
  unsigned int v31; // ebp
  char v32; // dl
  unsigned int i; // ebp
  char v34; // al
  char v35; // al
  unsigned int v36; // ebp
  char v37; // al
  _BYTE *v38; // ecx
  _BYTE *v39; // esi
  char v40; // dl
  char v41; // al
  char v42; // dl
  _BYTE *v43; // ecx
  unsigned int v44; // edx
  _BYTE *v45; // eax
  char v46; // cl
  _BYTE *v47; // eax
  char v48; // dl
  _BYTE *v49; // esi
  char v50; // cl
  unsigned int v51; // ecx
  char v52; // dl
  _BYTE *v53; // eax
  unsigned __int8 *v54; // ebp
  unsigned int v55; // edi
  unsigned __int8 *v57; // [esp+10h] [ebp-3Ch]
  unsigned int v58; // [esp+14h] [ebp-38h]
  _DWORD *v59; // [esp+18h] [ebp-34h]
  unsigned int v60; // [esp+1Ch] [ebp-30h]
  unsigned int v61; // [esp+1Ch] [ebp-30h]
  unsigned __int16 v62; // [esp+1Eh] [ebp-2Eh]
  int v63; // [esp+20h] [ebp-2Ch]
  int v64; // [esp+24h] [ebp-28h]
  int v65; // [esp+28h] [ebp-24h]
  unsigned int v66; // [esp+2Ch] [ebp-20h]
  int v67; // [esp+30h] [ebp-1Ch]
  _BYTE *v68; // [esp+38h] [ebp-14h]
  unsigned int v69; // [esp+3Ch] [ebp-10h]
  int v70; // [esp+40h] [ebp-Ch]
  unsigned int v71; // [esp+44h] [ebp-8h]
  int v72; // [esp+48h] [ebp-4h]
  unsigned int v73; // [esp+54h] [ebp+8h]

  v2 = (_DWORD *)a1[7];
  v3 = v2[14];
  v4 = (unsigned __int8 *)(*a1 - 1);
  v58 = (unsigned int)&v4[a1[1] - 5];
  v5 = (_BYTE *)(a1[3] - 1);
  v68 = &v5[a1[4] - a2];
  v66 = (unsigned int)&v5[a1[4] - 257];
  v65 = v2[10];
  v69 = v2[11];
  v71 = v2[12];
  v70 = v2[13];
  v63 = v2[19];
  v64 = v2[20];
  v59 = v2;
  v6 = v2[15];
  v7 = (1 << v2[21]) - 1;
  v57 = v4;
  v72 = v7;
  v67 = (1 << v2[22]) - 1;
  while ( 1 )
  {
    if ( v6 < 0xF )
    {
      v8 = v4[1];
      v4 += 2;
      v57 = v4;
      v3 += (*v4 << (v6 + 8)) + (v8 << v6);
      v6 += 16;
    }
    v9 = *(_DWORD *)(v63 + 4 * (v3 & v7));
    v10 = v9;
    v3 >>= SBYTE1(v9);
    v6 -= BYTE1(v9);
    if ( (_BYTE)v9 == 0 )
    {
LABEL_8:
      *++v5 = BYTE2(v9);
      goto LABEL_48;
    }
    while ( (v10 & 0x10) == 0 )
    {
      if ( (v10 & 0x40) != 0 )
      {
        if ( (v10 & 0x20) != 0 )
        {
          *v59 = 11;
LABEL_63:
          v44 = v58;
          goto LABEL_64;
        }
        a1[6] = "invalid literal/length code";
LABEL_61:
        v26 = v59;
LABEL_62:
        *v26 = 29;
        goto LABEL_63;
      }
      v9 = *(_DWORD *)(v63 + 4 * (HIWORD(v9) + (v3 & ((1 << v10) - 1))));
      v10 = v9;
      v3 >>= SBYTE1(v9);
      v6 -= BYTE1(v9);
      if ( (_BYTE)v9 == 0 )
        goto LABEL_8;
    }
    v11 = v10 & 0xF;
    v73 = HIWORD(v9);
    if ( v11 != 0 )
    {
      if ( v6 < v11 )
      {
        v12 = *++v4;
        v57 = v4;
        v3 += v12 << v6;
        v6 += 8;
      }
      v73 += v3 & ((1 << v11) - 1);
      v3 >>= v11;
      v6 -= v11;
    }
    if ( v6 < 0xF )
    {
      v13 = v4[1];
      v14 = v4 + 1;
      v15 = v14[1];
      v4 = v14 + 1;
      v57 = v4;
      v3 += (v15 << (v6 + 8)) + (v13 << v6);
      v6 += 16;
    }
    v16 = *(_DWORD *)(v64 + 4 * (v3 & v67));
    v17 = v16;
    v3 >>= SBYTE1(v16);
    v6 -= BYTE1(v16);
    v62 = HIWORD(v16);
    if ( (v16 & 0x10) == 0 )
    {
      while ( (v17 & 0x40) == 0 )
      {
        v16 = *(_DWORD *)(v64 + 4 * (v62 + (v3 & ((1 << v17) - 1))));
        v17 = v16;
        v3 >>= SBYTE1(v16);
        v6 -= BYTE1(v16);
        v62 = HIWORD(v16);
        if ( (v16 & 0x10) != 0 )
          goto LABEL_18;
      }
      a1[6] = "invalid distance code";
      goto LABEL_61;
    }
LABEL_18:
    v18 = v17 & 0xF;
    v60 = HIWORD(v16);
    if ( v6 < v18 )
    {
      v19 = *++v4;
      v20 = v19 << v6;
      v6 += 8;
      v57 = v4;
      v3 += v20;
      if ( v6 < v18 )
      {
        v21 = *++v4;
        v57 = v4;
        v3 += v21 << v6;
        v6 += 8;
      }
    }
    v6 -= v18;
    v22 = (v3 & ((1 << v18) - 1)) + v60;
    v23 = v18;
    v24 = (_BYTE *)(v5 - v68);
    v3 >>= v23;
    v61 = v22;
    if ( v22 > v5 - v68 )
    {
      v25 = v22 - (_DWORD)v24;
      if ( v22 - (unsigned int)v24 > v69 )
      {
        v26 = v59;
        if ( v59[1776] != 0 )
        {
          v4 = v57;
          a1[6] = "invalid distance too far back";
          goto LABEL_62;
        }
      }
      v27 = v70 - 1;
      if ( v71 != 0 )
      {
        if ( v71 < v25 )
        {
          v30 = v65 + v71 - v25;
          v31 = v25 - v71;
          v28 = (_BYTE *)(v30 + v27);
          if ( v31 < v73 )
          {
            v73 -= v31;
            do
            {
              v32 = *++v28;
              ++v5;
              --v31;
              *v5 = v32;
            }
            while ( v31 != 0 );
            v28 = (_BYTE *)(v70 - 1);
            if ( v71 < v73 )
            {
              v73 -= v71;
              for ( i = v71; i != 0; --i )
              {
                v34 = *++v28;
                *++v5 = v34;
              }
              v28 = &v5[-v61];
            }
          }
          goto LABEL_41;
        }
        v28 = (_BYTE *)(v71 - v25 + v27);
        if ( v25 < v73 )
        {
          v73 -= v25;
          do
          {
            v35 = *++v28;
            ++v5;
            --v25;
            *v5 = v35;
          }
          while ( v25 != 0 );
          goto LABEL_40;
        }
      }
      else
      {
        v28 = (_BYTE *)(v65 - v25 + v27);
        if ( v25 < v73 )
        {
          v73 -= v25;
          do
          {
            v29 = *++v28;
            ++v5;
            --v25;
            *v5 = v29;
          }
          while ( v25 != 0 );
LABEL_40:
          v28 = &v5[-v22];
        }
      }
LABEL_41:
      if ( v73 > 2 )
      {
        v36 = (v73 - 3) / 3 + 1;
        do
        {
          v37 = v28[1];
          v73 -= 3;
          v38 = v28 + 1;
          v39 = v5 + 1;
          *v39 = v37;
          v40 = *++v38;
          *++v39 = v40;
          v41 = v38[1];
          v28 = v38 + 1;
          v5 = v39 + 1;
          --v36;
          *v5 = v41;
        }
        while ( v36 != 0 );
      }
      if ( v73 != 0 )
      {
        v42 = v28[1];
        v43 = v28 + 1;
        *++v5 = v42;
        if ( v73 > 1 )
          *++v5 = v43[1];
      }
      v4 = v57;
      goto LABEL_48;
    }
    v45 = &v5[-v22];
    do
    {
      v46 = v45[1];
      v47 = v45 + 1;
      v5[1] = v46;
      v48 = *++v47;
      v49 = v5 + 2;
      *v49 = v48;
      v50 = v47[1];
      v45 = v47 + 1;
      v5 = v49 + 1;
      *v5 = v50;
      v51 = v73 - 3;
      v73 = v51;
    }
    while ( v51 > 2 );
    if ( v51 != 0 )
    {
      v52 = v45[1];
      v53 = v45 + 1;
      *++v5 = v52;
      if ( v51 > 1 )
        *++v5 = v53[1];
    }
LABEL_48:
    v44 = v58;
    if ( (unsigned int)v4 >= v58 || (unsigned int)v5 >= v66 )
      break;
    v7 = v72;
  }
LABEL_64:
  v54 = &v4[-(v6 >> 3)];
  v55 = v6 - 8 * (v6 >> 3);
  *a1 = v54 + 1;
  a1[3] = v5 + 1;
  a1[4] = v66 - (_DWORD)v5 + 257;
  v59[15] = v55;
  v59[14] = ((1 << v55) - 1) & v3;
  a1[1] = v44 - (_DWORD)v54 + 5;
  return v59;
}

// Address: 0x100154C0
int __usercall sub_100154C0@<eax>(int a1@<edi>)
{
  _DWORD *v1; // eax
  int v2; // edx
  _DWORD *v3; // esi
  _DWORD *v4; // eax

  if ( a1 == 0 )
    return -2;
  v3 = *(_DWORD **)(a1 + 28);
  if ( v3 == nullptr )
    return -2;
  if ( v3[13] != 0 && v3[9] != 15 )
  {
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 40), v3[13]);
    v3[13] = 0;
  }
  v4 = *(_DWORD **)(a1 + 28);
  v3[2] = 1;
  v3[9] = 15;
  if ( v4 == nullptr )
    return -2;
  v4[10] = 0;
  v4[11] = 0;
  v4[12] = 0;
  v1 = *(_DWORD **)(a1 + 28);
  if ( v1 == nullptr )
    return -2;
  v2 = v1[2];
  v1[7] = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  if ( v2 != 0 )
    *(_DWORD *)(a1 + 48) = v2 & 1;
  *v1 = 0;
  v1[1] = 0;
  v1[3] = 0;
  v1[8] = 0;
  v1[14] = 0;
  v1[15] = 0;
  v1[5] = 0x8000;
  v1[27] = v1 + 332;
  v1[20] = v1 + 332;
  v1[19] = v1 + 332;
  v1[1776] = 1;
  v1[1777] = -1;
  return 0;
}

// Address: 0x10015520
int __usercall sub_10015520@<eax>(_DWORD *a1@<eax>)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx

  if ( a1 == nullptr )
    return -2;
  a1[6] = 0;
  if ( a1[8] == 0 )
  {
    a1[8] = sub_100188F0;
    a1[10] = 0;
  }
  if ( a1[9] == 0 )
    a1[9] = sub_10018910;
  v3 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[10], 1, 7116);
  v4 = v3;
  if ( v3 == 0 )
    return -4;
  a1[7] = v3;
  *(_DWORD *)(v3 + 52) = 0;
  v5 = sub_100154C0((int)a1);
  if ( v5 != 0 )
  {
    ((void (__cdecl *)(_DWORD, int))a1[9])(a1[10], v4);
    a1[7] = 0;
  }
  return v5;
}

// Address: 0x100155A0
int __usercall sub_100155A0@<eax>(int a1@<eax>, int a2)
{
  int v2; // esi
  int v4; // eax
  int v6; // ecx
  size_t v7; // edi
  size_t v8; // eax
  int v9; // eax
  size_t v10; // ebx
  int v11; // ebp
  size_t v12; // edi
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx

  v2 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v2 + 52) == 0 )
  {
    v4 = (*(int (__cdecl **)(_DWORD, int, int))(a2 + 32))(*(_DWORD *)(a2 + 40), 1 << *(_DWORD *)(v2 + 36), 1);
    *(_DWORD *)(v2 + 52) = v4;
    if ( v4 == 0 )
      return 1;
  }
  if ( *(_DWORD *)(v2 + 40) == 0 )
  {
    v6 = *(_DWORD *)(v2 + 36);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 40) = 1 << v6;
  }
  v7 = a1 - *(_DWORD *)(a2 + 16);
  v8 = *(_DWORD *)(v2 + 40);
  if ( v7 < v8 )
  {
    v10 = v8 - *(_DWORD *)(v2 + 48);
    if ( v10 > v7 )
      v10 = v7;
    v11 = *(_DWORD *)(a2 + 12);
    memcpy_0((void *)(*(_DWORD *)(v2 + 48) + *(_DWORD *)(v2 + 52)), (const void *)(v11 - v7), v10);
    v12 = v7 - v10;
    if ( v12 != 0 )
    {
      memcpy_0(*(void **)(v2 + 52), (const void *)(v11 - v12), v12);
      v13 = *(_DWORD *)(v2 + 40);
      *(_DWORD *)(v2 + 48) = v12;
      *(_DWORD *)(v2 + 44) = v13;
      return 0;
    }
    else
    {
      *(_DWORD *)(v2 + 48) += v10;
      v14 = *(_DWORD *)(v2 + 40);
      if ( *(_DWORD *)(v2 + 48) == v14 )
        *(_DWORD *)(v2 + 48) = 0;
      v15 = *(_DWORD *)(v2 + 44);
      if ( v15 < v14 )
        *(_DWORD *)(v2 + 44) = v10 + v15;
      return 0;
    }
  }
  else
  {
    memcpy_0(*(void **)(v2 + 52), (const void *)(*(_DWORD *)(a2 + 12) - v8), *(_DWORD *)(v2 + 40));
    v9 = *(_DWORD *)(v2 + 40);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 44) = v9;
    return 0;
  }
}

// Address: 0x10015690
int __cdecl sub_10015690(int a1)
{
  _DWORD *v1; // edx
  int *v2; // esi
  void *v3; // eax
  unsigned __int8 *v4; // ebp
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edi
  int result; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // edx
  _DWORD *v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // ecx
  int v30; // edx
  int v31; // eax
  unsigned int v32; // edx
  size_t v33; // edx
  int v34; // edx
  int v35; // eax
  size_t v36; // ecx
  int v37; // edx
  int v38; // ecx
  unsigned int v39; // edx
  int v40; // ecx
  int v41; // ecx
  size_t v42; // ecx
  int v43; // edx
  int v44; // ecx
  unsigned int v45; // edx
  int v46; // ecx
  int v47; // ecx
  int v48; // edx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  int v52; // ecx
  unsigned int v53; // eax
  int v54; // ecx
  int v55; // edx
  int v56; // ecx
  unsigned int v57; // ebx
  unsigned int v58; // edi
  int v59; // ecx
  int v60; // edx
  int v61; // ecx
  size_t v62; // ecx
  int v63; // edx
  int v64; // ecx
  unsigned int v65; // ebx
  char v66; // dl
  unsigned int v67; // edx
  int v68; // ecx
  bool v69; // cc
  int v70; // edx
  size_t v71; // ecx
  int v72; // edx
  size_t v73; // edx
  int v74; // ecx
  int v75; // edx
  int v76; // ecx
  int v77; // ecx
  int v78; // eax
  _BYTE *v79; // ecx
  int v80; // edx
  unsigned int v81; // ebx
  int v82; // edx
  int v83; // edx
  unsigned int v84; // ebx
  __int16 v85; // cx
  int v86; // eax
  void *v87; // edx
  int v88; // ecx
  unsigned int v89; // ecx
  int v90; // edx
  int v91; // ecx
  size_t v92; // edx
  int v93; // edx
  int v94; // edx
  unsigned int v95; // ecx
  int v96; // edx
  int v97; // ecx
  size_t v98; // edx
  int v99; // edx
  int v100; // edx
  unsigned int v101; // ecx
  int v102; // edx
  int v103; // ecx
  unsigned int v104; // ecx
  size_t v105; // ecx
  size_t v106; // edx
  int v107; // edx
  size_t v108; // edx
  char *v109; // edx
  char *v110; // ecx
  bool v111; // zf
  char *v112; // ecx
  int v113; // edx
  unsigned int v114; // edx
  _BYTE *v115; // ecx
  unsigned int v116; // eax
  int v117; // ecx
  int v118; // edx
  void *v119; // ecx
  unsigned int v120; // eax
  unsigned int v121; // ecx
  _BYTE *v122; // ecx
  unsigned int v123; // eax
  int v124; // eax
  int v125; // ecx
  int v126; // [esp-10h] [ebp-44h]
  int v127; // [esp-10h] [ebp-44h]
  unsigned int v128; // [esp+8h] [ebp-2Ch]
  size_t Size; // [esp+Ch] [ebp-28h]
  size_t Sizea; // [esp+Ch] [ebp-28h]
  size_t Sizeb; // [esp+Ch] [ebp-28h]
  size_t Sizec; // [esp+Ch] [ebp-28h]
  size_t Sized; // [esp+Ch] [ebp-28h]
  size_t Sizee; // [esp+Ch] [ebp-28h]
  size_t Sizef; // [esp+Ch] [ebp-28h]
  size_t Sizeg; // [esp+Ch] [ebp-28h]
  size_t Sizeh; // [esp+Ch] [ebp-28h]
  size_t Sizei; // [esp+Ch] [ebp-28h]
  unsigned int v139; // [esp+10h] [ebp-24h]
  __int16 v140; // [esp+14h] [ebp-20h] BYREF
  char v141; // [esp+16h] [ebp-1Eh]
  char v142; // [esp+17h] [ebp-1Dh]
  void *v143; // [esp+18h] [ebp-1Ch]
  int v144; // [esp+1Ch] [ebp-18h]
  unsigned int v145; // [esp+20h] [ebp-14h]
  _BYTE *v146; // [esp+24h] [ebp-10h]
  int v147; // [esp+28h] [ebp-Ch]
  size_t v148; // [esp+2Ch] [ebp-8h]
  unsigned int v149; // [esp+30h] [ebp-4h]

  v1 = (_DWORD *)a1;
  if ( a1 == 0 )
    return -2;
  v2 = *(int **)(a1 + 28);
  if ( v2 == nullptr )
    return -2;
  v3 = *(void **)(a1 + 12);
  if ( v3 == nullptr )
    return -2;
  v4 = *(unsigned __int8 **)a1;
  if ( *(_DWORD *)a1 == 0 && *(_DWORD *)(a1 + 4) != 0 )
    return -2;
  if ( *v2 == 11 )
    *v2 = 12;
  v5 = v2[14];
  v139 = *(_DWORD *)(a1 + 16);
  v145 = v139;
  v6 = *v2;
  v143 = v3;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = v2[15];
  v128 = v7;
  v149 = v7;
  v147 = 0;
  while ( 2 )
  {
    switch ( v6 )
    {
      case 0:
        if ( v2[2] == 0 )
        {
          *v2 = 12;
          goto LABEL_314;
        }
        for ( ; v8 < 0x10; v128 = v7 )
        {
          if ( v7 == 0 )
            goto LABEL_321;
          v10 = *v4 << v8;
          --v7;
          v8 += 8;
          ++v4;
          v5 += v10;
        }
        if ( (v2[2] & 2) != 0 && v5 == 35615 )
        {
          v11 = sub_10013F10(nullptr);
          v2[6] = v11;
          v140 = -29921;
          v2[6] = sub_10013F30(v11, 2u, &v140);
          v7 = v128;
          v5 = 0;
          v8 = 0;
          *v2 = 1;
          goto LABEL_314;
        }
        v12 = v2[8];
        v2[4] = 0;
        if ( v12 != 0 )
          *(_DWORD *)(v12 + 48) = -1;
        if ( (v2[2] & 1) != 0 && ((v5 >> 8) + ((unsigned __int8)v5 << 8)) % 0x1F == 0 )
        {
          if ( (v5 & 0xF) != 8 )
          {
            *(_DWORD *)(a1 + 24) = "unknown compression method";
            v7 = v128;
            goto LABEL_313;
          }
          v13 = v2[9];
          v5 >>= 4;
          v8 -= 4;
          v14 = (v5 & 0xF) + 8;
          if ( v13 != 0 )
          {
            if ( v14 > v13 )
            {
              v7 = v128;
              *(_DWORD *)(a1 + 24) = "invalid window size";
              goto LABEL_313;
            }
          }
          else
          {
            v2[9] = v14;
          }
          v2[5] = 1 << v14;
          v15 = sub_10013CB0(0, nullptr, 0);
          *v2 = ~BYTE1(v5) & 2 | 9;
          v2[6] = v15;
          *(_DWORD *)(a1 + 48) = v15;
          v7 = v128;
          v5 = 0;
          v8 = 0;
          goto LABEL_314;
        }
        v7 = v128;
        *(_DWORD *)(a1 + 24) = "incorrect header check";
        goto LABEL_313;
      case 1:
        for ( ; v8 < 0x10; v128 = v7 )
        {
          if ( v7 == 0 )
            goto LABEL_321;
          v16 = *v4 << v8;
          --v7;
          v8 += 8;
          ++v4;
          v5 += v16;
        }
        v2[4] = v5;
        if ( (_BYTE)v5 != 8 )
        {
          *(_DWORD *)(a1 + 24) = "unknown compression method";
          goto LABEL_313;
        }
        if ( (v5 & 0xE000) != 0 )
        {
          *(_DWORD *)(a1 + 24) = "unknown header flags set";
          goto LABEL_313;
        }
        v17 = (_DWORD *)v2[8];
        if ( v17 != nullptr )
          *v17 = (v5 & 0x100) != 0;
        if ( (v2[4] & 0x200) != 0 )
        {
          v18 = v2[6];
          LOBYTE(v140) = 8;
          HIBYTE(v140) = BYTE1(v5);
          v2[6] = sub_10013F30(v18, 2u, &v140);
          v7 = v128;
        }
        v5 = 0;
        v8 = 0;
        *v2 = 2;
        do
        {
LABEL_46:
          if ( v7 == 0 )
            goto LABEL_321;
          v19 = *v4 << v8;
          --v7;
          v8 += 8;
          ++v4;
          v5 += v19;
          v128 = v7;
        }
        while ( v8 < 0x20 );
LABEL_48:
        v20 = v2[8];
        if ( v20 != 0 )
          *(_DWORD *)(v20 + 4) = v5;
        if ( (v2[4] & 0x200) != 0 )
        {
          v140 = v5;
          v21 = v2[6];
          v141 = BYTE2(v5);
          v142 = HIBYTE(v5);
          v2[6] = sub_10013F30(v21, 4u, &v140);
          v7 = v128;
        }
        v5 = 0;
        v8 = 0;
        *v2 = 3;
        do
        {
LABEL_54:
          if ( v7 == 0 )
            goto LABEL_321;
          v22 = *v4 << v8;
          --v7;
          v8 += 8;
          ++v4;
          v5 += v22;
          v128 = v7;
        }
        while ( v8 < 0x10 );
LABEL_56:
        v23 = v2[8];
        if ( v23 != 0 )
        {
          *(_DWORD *)(v23 + 8) = (unsigned __int8)v5;
          *(_DWORD *)(v2[8] + 12) = v5 >> 8;
        }
        if ( (v2[4] & 0x200) != 0 )
        {
          v24 = v2[6];
          v140 = v5;
          v2[6] = sub_10013F30(v24, 2u, &v140);
          v7 = v128;
        }
        v5 = 0;
        v8 = 0;
        *v2 = 4;
LABEL_61:
        if ( (v2[4] & 0x400) != 0 )
        {
          if ( v8 < 0x10 )
          {
            while ( v7 != 0 )
            {
              v25 = *v4 << v8;
              --v7;
              v8 += 8;
              ++v4;
              v5 += v25;
              v128 = v7;
              if ( v8 >= 0x10 )
                goto LABEL_65;
            }
            goto LABEL_321;
          }
LABEL_65:
          v26 = v2[8];
          v2[16] = v5;
          if ( v26 != 0 )
            *(_DWORD *)(v26 + 20) = v5;
          if ( (v2[4] & 0x200) != 0 )
          {
            v27 = v2[6];
            v140 = v5;
            v2[6] = sub_10013F30(v27, 2u, &v140);
            v7 = v128;
          }
          v5 = 0;
          v8 = 0;
        }
        else
        {
          v28 = v2[8];
          if ( v28 != 0 )
            *(_DWORD *)(v28 + 16) = 0;
        }
        *v2 = 5;
LABEL_73:
        if ( (v2[4] & 0x400) != 0 )
        {
          v29 = v2[16];
          Size = v29;
          if ( v29 > v7 )
          {
            v29 = v7;
            Size = v7;
          }
          if ( v29 != 0 )
          {
            v30 = v2[8];
            if ( v30 != 0 )
            {
              v148 = *(_DWORD *)(v30 + 16);
              if ( v148 != 0 )
              {
                v31 = *(_DWORD *)(v2[8] + 20) - v2[16];
                v32 = *(_DWORD *)(v2[8] + 24);
                if ( v31 + v29 <= v32 )
                  v33 = Size;
                else
                  v33 = v32 - v31;
                memcpy_0((void *)(v31 + v148), v4, v33);
                v29 = Size;
                v7 = v128;
              }
            }
            if ( (v2[4] & 0x200) != 0 )
            {
              if ( v4 != nullptr )
              {
                v35 = sub_10013F30(v2[6], Size, v4);
                v29 = Size;
                v34 = v35;
                v7 = v128;
              }
              else
              {
                v34 = 0;
              }
              v2[6] = v34;
            }
            v7 -= v29;
            v4 += v29;
            v2[16] -= v29;
            v128 = v7;
          }
          if ( v2[16] != 0 )
            goto LABEL_321;
        }
        v2[16] = 0;
        *v2 = 6;
LABEL_91:
        if ( (v2[4] & 0x800) != 0 )
        {
          if ( v7 == 0 )
            goto LABEL_321;
          v36 = 0;
          do
          {
            v37 = v4[v36];
            Sizea = v36 + 1;
            v38 = v2[8];
            v144 = v37;
            if ( v38 != 0 )
            {
              v148 = *(_DWORD *)(v38 + 28);
              if ( v148 != 0 )
              {
                v39 = v2[16];
                if ( v39 < *(_DWORD *)(v38 + 32) )
                {
                  *(_BYTE *)(v148 + v39) = v144;
                  ++v2[16];
                  v7 = v128;
                }
              }
            }
            v36 = Sizea;
          }
          while ( v144 != 0 && Sizea < v7 );
          if ( (v2[4] & 0x200) != 0 )
          {
            if ( v4 != nullptr )
            {
              v40 = sub_10013F30(v2[6], Sizea, v4);
              v7 = v128;
            }
            else
            {
              v40 = 0;
            }
            v2[6] = v40;
            v36 = Sizea;
          }
          v7 -= v36;
          v4 += v36;
          v128 = v7;
          if ( v144 != 0 )
            goto LABEL_321;
        }
        else
        {
          v41 = v2[8];
          if ( v41 != 0 )
            *(_DWORD *)(v41 + 28) = 0;
        }
        v2[16] = 0;
        *v2 = 7;
LABEL_110:
        if ( (v2[4] & 0x1000) != 0 )
        {
          if ( v7 == 0 )
            goto LABEL_321;
          v42 = 0;
          do
          {
            v43 = v4[v42];
            Sizeb = v42 + 1;
            v44 = v2[8];
            v144 = v43;
            if ( v44 != 0 )
            {
              v148 = *(_DWORD *)(v44 + 36);
              if ( v148 != 0 )
              {
                v45 = v2[16];
                if ( v45 < *(_DWORD *)(v44 + 40) )
                {
                  *(_BYTE *)(v148 + v45) = v144;
                  ++v2[16];
                  v7 = v128;
                }
              }
            }
            v42 = Sizeb;
          }
          while ( v144 != 0 && Sizeb < v7 );
          if ( (v2[4] & 0x200) != 0 )
          {
            if ( v4 != nullptr )
            {
              v46 = sub_10013F30(v2[6], Sizeb, v4);
              v7 = v128;
            }
            else
            {
              v46 = 0;
            }
            v2[6] = v46;
            v42 = Sizeb;
          }
          v7 -= v42;
          v4 += v42;
          v128 = v7;
          if ( v144 != 0 )
            goto LABEL_321;
        }
        else
        {
          v47 = v2[8];
          if ( v47 != 0 )
            *(_DWORD *)(v47 + 36) = 0;
        }
        *v2 = 8;
LABEL_129:
        if ( (v2[4] & 0x200) != 0 )
        {
          if ( v8 < 0x10 )
          {
            while ( v7 != 0 )
            {
              v48 = *v4 << v8;
              --v7;
              v8 += 8;
              ++v4;
              v5 += v48;
              v128 = v7;
              if ( v8 >= 0x10 )
                goto LABEL_133;
            }
            goto LABEL_321;
          }
LABEL_133:
          if ( v5 != *((unsigned __int16 *)v2 + 12) )
          {
            *(_DWORD *)(a1 + 24) = "header crc mismatch";
            goto LABEL_313;
          }
          v5 = 0;
          v8 = 0;
        }
        v49 = v2[8];
        if ( v49 != 0 )
        {
          *(_DWORD *)(v49 + 44) = (v2[4] >> 9) & 1;
          *(_DWORD *)(v2[8] + 48) = 1;
        }
        v50 = sub_10013F10(nullptr);
        v2[6] = v50;
        *(_DWORD *)(a1 + 48) = v50;
        v7 = v128;
        *v2 = 11;
        goto LABEL_314;
      case 2:
        if ( v8 < 0x20 )
          goto LABEL_46;
        goto LABEL_48;
      case 3:
        if ( v8 < 0x10 )
          goto LABEL_54;
        goto LABEL_56;
      case 4:
        goto LABEL_61;
      case 5:
        goto LABEL_73;
      case 6:
        goto LABEL_91;
      case 7:
        goto LABEL_110;
      case 8:
        goto LABEL_129;
      case 9:
        for ( ; v8 < 0x20; v128 = v7 )
        {
          if ( v7 == 0 )
            goto LABEL_321;
          v51 = *v4 << v8;
          --v7;
          v8 += 8;
          ++v4;
          v5 += v51;
        }
        v1 = (_DWORD *)a1;
        v52 = HIBYTE(v5) + ((v5 >> 8) & 0xFF00) + (((v5 << 16) + (v5 & 0xFF00)) << 8);
        v5 = 0;
        v2[6] = v52;
        *(_DWORD *)(a1 + 48) = v52;
        v8 = 0;
        *v2 = 10;
LABEL_143:
        if ( v2[3] == 0 )
        {
          v119 = v143;
          v2[15] = v8;
          v2[14] = v5;
          v1[3] = v119;
          *v1 = v4;
          v1[1] = v7;
          v1[4] = v139;
          return 2;
        }
        v53 = sub_10013CB0(0, nullptr, 0);
        v2[6] = v53;
        *(_DWORD *)(a1 + 48) = v53;
        v7 = v128;
        *v2 = 11;
LABEL_145:
        if ( v2[1] != 0 )
        {
          v54 = v8 & 7;
          v5 >>= v54;
          v8 -= v54;
          *v2 = 26;
        }
        else
        {
          if ( v8 < 3 )
          {
            while ( v7 != 0 )
            {
              v55 = *v4 << v8;
              --v7;
              v8 += 8;
              ++v4;
              v5 += v55;
              v128 = v7;
              if ( v8 >= 3 )
                goto LABEL_150;
            }
            goto LABEL_321;
          }
LABEL_150:
          v56 = v5 & 1;
          v57 = v5 >> 1;
          v2[1] = v56;
          v58 = v8 - 1;
          switch ( v57 & 3 )
          {
            case 0u:
              v5 = v57 >> 2;
              *v2 = 13;
              v8 = v58 - 2;
              break;
            case 1u:
              v5 = v57 >> 2;
              v2[19] = (int)&unk_10032448;
              v2[21] = 9;
              v2[20] = (int)&unk_10032C48;
              v2[22] = 5;
              *v2 = 19;
              v8 = v58 - 2;
              break;
            case 2u:
              v5 = v57 >> 2;
              *v2 = 16;
              v8 = v58 - 2;
              break;
            case 3u:
              *(_DWORD *)(a1 + 24) = "invalid block type";
              *v2 = 29;
              v5 = v57 >> 2;
              v8 = v58 - 2;
              break;
          }
        }
        goto LABEL_314;
      case 10:
        goto LABEL_143;
      case 11:
      case 12:
        goto LABEL_145;
      case 13:
        v59 = v8 & 7;
        v8 -= v59;
        for ( v5 >>= v59; v8 < 0x20; v128 = v7 )
        {
          if ( v7 == 0 )
            goto LABEL_321;
          v60 = *v4 << v8;
          --v7;
          v8 += 8;
          ++v4;
          v5 += v60;
        }
        v61 = (unsigned __int16)v5;
        if ( (unsigned __int16)v5 != ~v5 >> 16 )
        {
          *(_DWORD *)(a1 + 24) = "invalid stored block lengths";
          goto LABEL_313;
        }
        v5 = 0;
        v2[16] = v61;
        v8 = 0;
        *v2 = 14;
LABEL_161:
        *v2 = 15;
LABEL_162:
        v62 = v2[16];
        Sizec = v62;
        if ( v62 == 0 )
          goto LABEL_242;
        if ( v62 > v7 )
        {
          v62 = v7;
          Sizec = v7;
        }
        if ( v62 > v139 )
        {
          v62 = v139;
          Sizec = v139;
        }
        if ( v62 == 0 )
          goto LABEL_321;
        memcpy_0(v143, v4, Sizec);
        v128 -= Sizec;
        v139 -= Sizec;
        v143 = (char *)v143 + Sizec;
        v4 += Sizec;
        v2[16] -= Sizec;
        v7 = v128;
        goto LABEL_314;
      case 14:
        goto LABEL_161;
      case 15:
        goto LABEL_162;
      case 16:
        for ( ; v8 < 0xE; v128 = v7 )
        {
          if ( v7 == 0 )
            goto LABEL_321;
          v63 = *v4 << v8;
          --v7;
          v8 += 8;
          ++v4;
          v5 += v63;
        }
        v64 = v5 & 0x1F;
        v65 = v5 >> 5;
        v66 = v65;
        v2[24] = v64 + 257;
        v65 >>= 5;
        v67 = (v66 & 0x1F) + 1;
        v68 = (v65 & 0xF) + 4;
        v5 = v65 >> 4;
        v8 -= 14;
        v69 = (unsigned int)v2[24] <= 0x11E;
        v2[25] = v67;
        v2[23] = v68;
        if ( !v69 || v67 > 0x1E )
        {
          *(_DWORD *)(a1 + 24) = "too many length or distance symbols";
          goto LABEL_313;
        }
        v2[26] = 0;
        *v2 = 17;
LABEL_175:
        if ( v2[26] < (unsigned int)v2[23] )
        {
          while ( v8 >= 3 )
          {
LABEL_179:
            *((_WORD *)v2 + (unsigned __int16)word_10032CC8[v2[26]++] + 56) = v5 & 7;
            v5 >>= 3;
            v8 -= 3;
            if ( v2[26] >= (unsigned int)v2[23] )
              goto LABEL_180;
          }
          while ( v7 != 0 )
          {
            v70 = *v4 << v8;
            --v7;
            v8 += 8;
            ++v4;
            v5 += v70;
            v128 = v7;
            if ( v8 >= 3 )
              goto LABEL_179;
          }
          goto LABEL_321;
        }
LABEL_180:
        while ( (unsigned int)v2[26] < 0x13 )
          *((_WORD *)v2 + (unsigned __int16)word_10032CC8[v2[26]++] + 56) = 0;
        v2[27] = (int)(v2 + 332);
        v2[19] = (int)(v2 + 332);
        v2[21] = 7;
        v147 = sub_10016C30(0, v2 + 28, 19, v2 + 188);
        v7 = v128;
        if ( v147 != 0 )
        {
          *(_DWORD *)(a1 + 24) = "invalid code lengths set";
          goto LABEL_313;
        }
        v2[26] = 0;
        *v2 = 18;
LABEL_186:
        if ( v2[26] < (unsigned int)(v2[24] + v2[25]) )
        {
          while ( 1 )
          {
            v71 = *(_DWORD *)(v2[19] + 4 * (v5 & ((1 << v2[21]) - 1)));
            Sized = v71;
            if ( BYTE1(v71) > v8 )
              break;
LABEL_190:
            v73 = HIWORD(v71);
            v148 = HIWORD(v71);
            if ( HIWORD(v71) >= 0x10u )
            {
              if ( HIWORD(v71) == 16 )
              {
                if ( v8 < (unsigned int)BYTE1(v71) + 2 )
                {
                  while ( v7 != 0 )
                  {
                    v75 = *v4 << v8;
                    BYTE1(v71) = BYTE1(Sized);
                    --v7;
                    v8 += 8;
                    v5 += v75;
                    ++v4;
                    v128 = v7;
                    if ( v8 >= (unsigned int)BYTE1(Sized) + 2 )
                      goto LABEL_196;
                  }
                  goto LABEL_321;
                }
LABEL_196:
                v76 = BYTE1(v71);
                v5 >>= v76;
                v8 -= v76;
                v77 = v2[26];
                if ( v77 == 0 )
                {
                  *(_DWORD *)(a1 + 24) = "invalid bit length repeat";
                  goto LABEL_313;
                }
                v144 = *((unsigned __int16 *)v2 + v77 + 55);
                v78 = (v5 & 3) + 3;
                v5 >>= 2;
                v8 -= 2;
              }
              else
              {
                v79 = (_BYTE *)BYTE1(v71);
                v146 = v79;
                if ( HIWORD(Sized) == 17 )
                {
                  if ( v8 < (unsigned int)(v79 + 3) )
                  {
                    while ( v7 != 0 )
                    {
                      v80 = *v4 << v8;
                      v79 = v146;
                      --v7;
                      v8 += 8;
                      v5 += v80;
                      ++v4;
                      v128 = v7;
                      if ( v8 >= (unsigned int)(v146 + 3) )
                        goto LABEL_202;
                    }
                    goto LABEL_321;
                  }
LABEL_202:
                  v81 = v5 >> (char)v79;
                  v82 = -3;
                  v78 = (v81 & 7) + 3;
                  v5 = v81 >> 3;
                }
                else
                {
                  if ( v8 < (unsigned int)(v79 + 7) )
                  {
                    while ( v7 != 0 )
                    {
                      v83 = *v4 << v8;
                      v79 = v146;
                      --v7;
                      v8 += 8;
                      v5 += v83;
                      ++v4;
                      v128 = v7;
                      if ( v8 >= (unsigned int)(v146 + 7) )
                        goto LABEL_206;
                    }
                    goto LABEL_321;
                  }
LABEL_206:
                  v84 = v5 >> (char)v79;
                  v82 = -7;
                  v78 = (v84 & 0x7F) + 11;
                  v5 = v84 >> 7;
                }
                v8 += v82 - (_DWORD)v79;
                v144 = 0;
              }
              if ( v78 + v2[26] > (unsigned int)(v2[24] + v2[25]) )
              {
                *(_DWORD *)(a1 + 24) = "invalid bit length repeat";
                v7 = v128;
                goto LABEL_313;
              }
              if ( v78 != 0 )
              {
                v85 = v144;
                do
                {
                  --v78;
                  *((_WORD *)v2 + v2[26]++ + 56) = v85;
                }
                while ( v78 != 0 );
              }
              v7 = v128;
            }
            else
            {
              v74 = BYTE1(v71);
              v5 >>= v74;
              v8 -= v74;
              *((_WORD *)v2 + v2[26]++ + 56) = v73;
            }
            if ( v2[26] >= (unsigned int)(v2[24] + v2[25]) )
              goto LABEL_214;
          }
          while ( v7 != 0 )
          {
            v72 = *v4 << v8;
            --v7;
            v8 += 8;
            v5 += v72;
            ++v4;
            v128 = v7;
            v71 = *(_DWORD *)(v2[19] + 4 * (v5 & ((1 << v2[21]) - 1)));
            Sized = v71;
            if ( BYTE1(v71) <= v8 )
              goto LABEL_190;
          }
          goto LABEL_321;
        }
LABEL_214:
        if ( *v2 == 29 )
          goto LABEL_314;
        if ( *((_WORD *)v2 + 312) == 0 )
        {
          *(_DWORD *)(a1 + 24) = "invalid code -- missing end-of-block";
          goto LABEL_313;
        }
        v2[27] = (int)(v2 + 332);
        v2[19] = (int)(v2 + 332);
        v126 = v2[24];
        v2[21] = 9;
        v147 = sub_10016C30(1, v2 + 28, v126, v2 + 188);
        if ( v147 != 0 )
        {
          v7 = v128;
          *(_DWORD *)(a1 + 24) = "invalid literal/lengths set";
          goto LABEL_313;
        }
        v127 = v2[25];
        v86 = (int)v2 + 2 * v2[24] + 112;
        v2[20] = v2[27];
        v2[22] = 6;
        v147 = sub_10016C30(2, v86, v127, v2 + 188);
        v7 = v128;
        if ( v147 != 0 )
        {
          *(_DWORD *)(a1 + 24) = "invalid distances set";
          goto LABEL_313;
        }
        *v2 = 19;
LABEL_224:
        *v2 = 20;
LABEL_225:
        if ( v7 >= 6 && v139 >= 0x102 )
        {
          v87 = v143;
          *(_DWORD *)(a1 + 16) = v139;
          v88 = v145;
          *(_DWORD *)(a1 + 12) = v87;
          *(_DWORD *)a1 = v4;
          *(_DWORD *)(a1 + 4) = v128;
          v2[14] = v5;
          v2[15] = v8;
          sub_10015000((_DWORD *)a1, v88);
          v89 = *(_DWORD *)(a1 + 16);
          v4 = *(unsigned __int8 **)a1;
          v5 = v2[14];
          v8 = v2[15];
          v143 = *(void **)(a1 + 12);
          v139 = v89;
          v128 = *(_DWORD *)(a1 + 4);
          v7 = v128;
          if ( *v2 == 11 )
            v2[1777] = -1;
          goto LABEL_314;
        }
        v90 = 1 << v2[21];
        v91 = v2[19];
        v2[1777] = 0;
        v92 = *(_DWORD *)(v91 + 4 * (v5 & (v90 - 1)));
        Sizee = v92;
        if ( BYTE1(v92) > v8 )
        {
          while ( v7 != 0 )
          {
            v93 = *v4 << v8;
            --v7;
            v8 += 8;
            v5 += v93;
            ++v4;
            v128 = v7;
            v92 = *(_DWORD *)(v2[19] + 4 * (v5 & ((1 << v2[21]) - 1)));
            Sizee = v92;
            if ( BYTE1(v92) <= v8 )
              goto LABEL_232;
          }
          goto LABEL_321;
        }
LABEL_232:
        if ( (_BYTE)v92 != 0 && (v92 & 0xF0) == 0 )
        {
          v148 = v92 >> 8;
          v144 = BYTE1(v92);
          v146 = (_BYTE *)v92;
          Sizef = *(_DWORD *)(v2[19] + 4 * (HIWORD(Sizee) + ((v5 & ((1 << (BYTE1(v92) + v92)) - 1)) >> SBYTE1(v92))));
          if ( BYTE1(v92) + (unsigned int)BYTE1(Sizef) > v8 )
          {
            while ( v7 != 0 )
            {
              v94 = *v4 << v8;
              --v7;
              v8 += 8;
              v5 += v94;
              v144 = BYTE1(v146);
              ++v4;
              v128 = v7;
              Sizef = *(_DWORD *)(v2[19]
                                + 4 * (HIWORD(v146) + ((v5 & ((1 << (BYTE1(v146) + (_BYTE)v146)) - 1)) >> SBYTE1(v146))));
              if ( BYTE1(v146) + (unsigned int)BYTE1(Sizef) <= v8 )
                goto LABEL_237;
            }
            goto LABEL_321;
          }
LABEL_237:
          v92 = Sizef;
          v5 >>= SBYTE1(v146);
          v8 -= BYTE1(v146);
          v2[1777] = BYTE1(v146);
        }
        v2[1777] += BYTE1(v92);
        v5 >>= SBYTE1(v92);
        v8 -= BYTE1(v92);
        v144 = BYTE1(v92);
        v2[16] = HIWORD(v92);
        if ( (_BYTE)v92 == 0 )
        {
          *v2 = 25;
          goto LABEL_314;
        }
        if ( (v92 & 0x20) == 0 )
        {
          if ( (v92 & 0x40) != 0 )
          {
            *(_DWORD *)(a1 + 24) = "invalid literal/length code";
            goto LABEL_313;
          }
          v2[18] = v92 & 0xF;
          *v2 = 21;
LABEL_246:
          v95 = v2[18];
          if ( v95 != 0 )
          {
            if ( v8 < v95 )
            {
              while ( v7 != 0 )
              {
                v96 = *v4 << v8;
                --v7;
                v8 += 8;
                ++v4;
                v5 += v96;
                v128 = v7;
                if ( v8 >= v2[18] )
                  goto LABEL_250;
              }
              goto LABEL_321;
            }
LABEL_250:
            v97 = v2[18];
            v8 -= v97;
            v2[16] += v5 & ((1 << v97) - 1);
            v5 >>= v97;
            v2[1777] += v97;
          }
          v2[1778] = v2[16];
          *v2 = 22;
LABEL_252:
          v98 = *(_DWORD *)(v2[20] + 4 * (v5 & ((1 << v2[22]) - 1)));
          Sizeg = v98;
          if ( BYTE1(v98) > v8 )
          {
            while ( v7 != 0 )
            {
              v99 = *v4 << v8;
              --v7;
              v8 += 8;
              v5 += v99;
              ++v4;
              v128 = v7;
              v98 = *(_DWORD *)(v2[20] + 4 * (v5 & ((1 << v2[22]) - 1)));
              Sizeg = v98;
              if ( BYTE1(v98) <= v8 )
                goto LABEL_255;
            }
            goto LABEL_321;
          }
LABEL_255:
          if ( (v98 & 0xF0) == 0 )
          {
            v148 = v98 >> 8;
            v144 = BYTE1(v98);
            v146 = (_BYTE *)v98;
            Sizeh = *(_DWORD *)(v2[20] + 4 * (HIWORD(Sizeg) + ((v5 & ((1 << (BYTE1(v98) + v98)) - 1)) >> SBYTE1(v98))));
            if ( BYTE1(v98) + (unsigned int)BYTE1(Sizeh) > v8 )
            {
              while ( v7 != 0 )
              {
                v100 = *v4 << v8;
                --v7;
                v8 += 8;
                v5 += v100;
                v144 = BYTE1(v146);
                ++v4;
                v128 = v7;
                Sizeh = *(_DWORD *)(v2[20]
                                  + 4
                                  * (HIWORD(v146) + ((v5 & ((1 << (BYTE1(v146) + (_BYTE)v146)) - 1)) >> SBYTE1(v146))));
                if ( BYTE1(v146) + (unsigned int)BYTE1(Sizeh) <= v8 )
                  goto LABEL_259;
              }
              goto LABEL_321;
            }
LABEL_259:
            v98 = Sizeh;
            v5 >>= SBYTE1(v146);
            v8 -= BYTE1(v146);
            v2[1777] += BYTE1(v146);
          }
          v2[1777] += BYTE1(v98);
          v5 >>= SBYTE1(v98);
          v8 -= BYTE1(v98);
          v144 = BYTE1(v98);
          if ( (v98 & 0x40) != 0 )
          {
            *(_DWORD *)(a1 + 24) = "invalid distance code";
            goto LABEL_313;
          }
          v2[17] = HIWORD(v98);
          v2[18] = v98 & 0xF;
          *v2 = 23;
LABEL_263:
          v101 = v2[18];
          if ( v101 != 0 )
          {
            if ( v8 < v101 )
            {
              while ( v7 != 0 )
              {
                v102 = *v4 << v8;
                --v7;
                v8 += 8;
                ++v4;
                v5 += v102;
                v128 = v7;
                if ( v8 >= v2[18] )
                  goto LABEL_267;
              }
              goto LABEL_321;
            }
LABEL_267:
            v103 = v2[18];
            v8 -= v103;
            v2[17] += v5 & ((1 << v103) - 1);
            v5 >>= v103;
            v2[1777] += v103;
          }
          *v2 = 24;
LABEL_269:
          if ( v139 == 0 )
            goto LABEL_321;
          v104 = v2[17];
          if ( v104 <= v145 - v139 )
          {
            v109 = (char *)v143 - v104;
            v105 = v2[16];
            v146 = v109;
            v148 = v105;
LABEL_280:
            Sizei = v105;
          }
          else
          {
            v105 = v104 - (v145 - v139);
            Sizei = v105;
            if ( v105 > v2[11] && v2[1776] != 0 )
            {
              *(_DWORD *)(a1 + 24) = "invalid distance too far back";
              goto LABEL_313;
            }
            v106 = v2[12];
            if ( v105 <= v106 )
            {
              v107 = v2[12] + v2[13] - v105;
            }
            else
            {
              v105 -= v106;
              Sizei = v105;
              v107 = v2[10] + v2[13] - v105;
            }
            v146 = (_BYTE *)v107;
            v108 = v2[16];
            v148 = v108;
            if ( v105 > v108 )
            {
              v105 = v108;
              goto LABEL_280;
            }
          }
          if ( v105 > v139 )
          {
            v105 = v139;
            Sizei = v139;
          }
          v139 -= v105;
          v2[16] = v148 - v105;
          do
          {
            v110 = (char *)v143;
            *(_BYTE *)v143 = *v146++;
            v111 = Sizei-- == 1;
            v143 = v110 + 1;
          }
          while ( !v111 );
          if ( v2[16] == 0 )
            *v2 = 20;
          goto LABEL_314;
        }
        v2[1777] = -1;
LABEL_242:
        *v2 = 11;
        goto LABEL_314;
      case 17:
        goto LABEL_175;
      case 18:
        goto LABEL_186;
      case 19:
        goto LABEL_224;
      case 20:
        goto LABEL_225;
      case 21:
        goto LABEL_246;
      case 22:
        goto LABEL_252;
      case 23:
        goto LABEL_263;
      case 24:
        goto LABEL_269;
      case 25:
        if ( v139 == 0 )
          goto LABEL_321;
        v112 = (char *)v143;
        *(_BYTE *)v143 = *((_BYTE *)v2 + 64);
        --v139;
        v143 = v112 + 1;
        *v2 = 20;
        goto LABEL_314;
      case 26:
        if ( v2[2] == 0 )
          goto LABEL_305;
        for ( ; v8 < 0x20; v128 = v7 )
        {
          if ( v7 == 0 )
            goto LABEL_321;
          v113 = *v4 << v8;
          --v7;
          v8 += 8;
          ++v4;
          v5 += v113;
        }
        v114 = v145 - v139;
        *(_DWORD *)(a1 + 20) += v145 - v139;
        v2[7] += v114;
        v145 = v114;
        if ( v114 != 0 )
        {
          if ( v2[4] != 0 )
          {
            v115 = (char *)v143 - v114;
            if ( v143 == (void *)v114 )
              goto LABEL_299;
            v116 = sub_10013F30(v2[6], v145, v115);
          }
          else
          {
            v116 = sub_10013CB0(v145, (unsigned __int8 *)v143 - v145, v2[6]);
          }
          v115 = (_BYTE *)v116;
          v7 = v128;
LABEL_299:
          v2[6] = (int)v115;
          *(_DWORD *)(a1 + 48) = v115;
        }
        v111 = v2[4] == 0;
        v145 = v139;
        v117 = v5;
        if ( v111 )
          v117 = HIBYTE(v5) + ((v5 >> 8) & 0xFF00) + (((v5 << 16) + (v5 & 0xFF00)) << 8);
        if ( v117 != v2[6] )
        {
          *(_DWORD *)(a1 + 24) = "incorrect data check";
LABEL_313:
          *v2 = 29;
LABEL_314:
          v6 = *v2;
          if ( (unsigned int)*v2 > 0x1E )
            return -2;
          v1 = (_DWORD *)a1;
          continue;
        }
        v5 = 0;
        v8 = 0;
LABEL_305:
        *v2 = 27;
LABEL_306:
        if ( v2[2] == 0 || v2[4] == 0 )
          goto LABEL_318;
        if ( v8 < 0x20 )
        {
          while ( v7 != 0 )
          {
            v118 = *v4 << v8;
            --v7;
            v8 += 8;
            ++v4;
            v5 += v118;
            v128 = v7;
            if ( v8 >= 0x20 )
              goto LABEL_311;
          }
          goto LABEL_321;
        }
LABEL_311:
        if ( v5 != v2[7] )
        {
          *(_DWORD *)(a1 + 24) = "incorrect length check";
          goto LABEL_313;
        }
        v5 = 0;
        v8 = 0;
LABEL_318:
        *v2 = 28;
LABEL_319:
        v147 = 1;
LABEL_321:
        v111 = v2[10] == 0;
        *(_DWORD *)(a1 + 12) = v143;
        *(_DWORD *)(a1 + 16) = v139;
        *(_DWORD *)a1 = v4;
        *(_DWORD *)(a1 + 4) = v7;
        v2[14] = v5;
        v2[15] = v8;
        if ( v111 && (v145 == v139 || *v2 > 25) || sub_100155A0(v145, a1) == 0 )
        {
          v120 = v145 - *(_DWORD *)(a1 + 16);
          v121 = v149 - *(_DWORD *)(a1 + 4);
          *(_DWORD *)(a1 + 20) += v120;
          *(_DWORD *)(a1 + 8) += v121;
          v2[7] += v120;
          if ( v2[2] != 0 && v120 != 0 )
          {
            if ( v2[4] != 0 )
            {
              v122 = (_BYTE *)(*(_DWORD *)(a1 + 12) - v120);
              if ( v122 != nullptr )
                v123 = sub_10013F30(v2[6], v120, v122);
              else
                v123 = 0;
            }
            else
            {
              v123 = sub_10013CB0(v120, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) - v120), v2[6]);
            }
            v2[6] = v123;
            *(_DWORD *)(a1 + 48) = v123;
          }
          v124 = *v2;
          if ( *v2 == 19 || v124 == 14 )
            v125 = 256;
          else
            v125 = 0;
          v111 = v124 == 11;
          result = v147;
          *(_DWORD *)(a1 + 44) = v2[15] + v125 + (v2[1] != 0 ? 0x40 : 0) + (!v111 ? 0 : 0x80);
          if ( result == 0 )
            return -5;
        }
        else
        {
          *v2 = 30;
          return -4;
        }
        return result;
      case 27:
        goto LABEL_306;
      case 28:
        goto LABEL_319;
      case 29:
        v147 = -3;
        goto LABEL_321;
      case 30:
        return -4;
      default:
        return -2;
    }
  }
}

// Address: 0x10016BE0
int __usercall sub_10016BE0@<eax>(_DWORD *a1@<esi>)
{
  int v1; // eax
  void (__cdecl *v2)(_DWORD, int); // ecx
  int v3; // eax

  if ( a1 == nullptr )
    return -2;
  v1 = a1[7];
  if ( v1 == 0 )
    return -2;
  v2 = (void (__cdecl *)(_DWORD, int))a1[9];
  if ( v2 == nullptr )
    return -2;
  v3 = *(_DWORD *)(v1 + 52);
  if ( v3 != 0 )
    v2(a1[10], v3);
  ((void (__cdecl *)(_DWORD, _DWORD))a1[9])(a1[10], a1[7]);
  a1[7] = 0;
  return 0;
}

// Address: 0x10016C30
int __fastcall sub_10016C30(_DWORD **a1, unsigned int *a2, int a3, int a4, unsigned int a5, _WORD *a6)
{
  unsigned int i; // eax
  unsigned int v9; // eax
  unsigned int j; // edx
  unsigned int k; // ebx
  int v13; // esi
  unsigned int m; // eax
  unsigned int n; // eax
  __int16 v16; // cx
  unsigned int ii; // eax
  int v18; // ebp
  char *v19; // eax
  unsigned int v20; // eax
  bool v21; // cf
  int v22; // eax
  int v23; // eax
  int v24; // edx
  _DWORD *v25; // ecx
  unsigned int jj; // eax
  int v27; // esi
  char v28; // dl
  char v29; // cl
  unsigned int v30; // edx
  int v31; // eax
  unsigned __int16 *v32; // esi
  int v33; // eax
  unsigned int v34; // edx
  bool v35; // cf
  int v36; // [esp+Ch] [ebp-8Ch]
  unsigned __int16 v37; // [esp+Ch] [ebp-8Ch]
  unsigned int v38; // [esp+10h] [ebp-88h]
  _WORD *v39; // [esp+14h] [ebp-84h]
  unsigned int v40; // [esp+18h] [ebp-80h]
  unsigned int v41; // [esp+1Ch] [ebp-7Ch]
  _DWORD *v42; // [esp+20h] [ebp-78h]
  unsigned int v43; // [esp+24h] [ebp-74h]
  char *v44; // [esp+28h] [ebp-70h]
  int v45; // [esp+2Ch] [ebp-6Ch]
  _BYTE *v46; // [esp+30h] [ebp-68h]
  int v47; // [esp+34h] [ebp-64h]
  int v49; // [esp+3Ch] [ebp-5Ch]
  int v50; // [esp+44h] [ebp-54h]
  _WORD v52[32]; // [esp+54h] [ebp-44h] BYREF

  v39 = a6;
  memset(v52, 0, 32);
  for ( i = 0; i < a5; ++i )
    ++v52[*(unsigned __int16 *)(a4 + 2 * i)];
  v9 = *a2;
  v38 = *a2;
  for ( j = 15; j != 0; --j )
  {
    if ( v52[j] != 0 )
      break;
  }
  v43 = j;
  if ( v9 > j )
  {
    v38 = j;
    v9 = j;
  }
  if ( j == 0 )
  {
    *(*a1)++ = 320;
    *(*a1)++ = 320;
    *a2 = 1;
    return 0;
  }
  for ( k = 1; k < j; ++k )
  {
    if ( v52[k] != 0 )
      break;
  }
  if ( v9 < k )
    v38 = k;
  v13 = 1;
  for ( m = 1; m <= 0xF; ++m )
  {
    v13 = 2 * v13 - (unsigned __int16)v52[m];
    if ( v13 < 0 )
      return -1;
  }
  if ( v13 > 0 && (a3 == 0 || j != 1) )
    return -1;
  v52[17] = 0;
  for ( n = 1; n < 15; v52[n + 16] = v16 )
  {
    v16 = v52[n] + v52[n + 16];
    ++n;
  }
  for ( ii = 0; ii < a5; ++ii )
  {
    if ( *(_WORD *)(a4 + 2 * ii) != 0 )
      a6[(unsigned __int16)v52[*(unsigned __int16 *)(a4 + 2 * ii) + 16]++] = ii;
  }
  v18 = -1;
  if ( a3 != 0 )
  {
    if ( a3 != 1 )
    {
      v44 = (char *)&unk_100323C8;
      v46 = &unk_10032408;
      v45 = -1;
      goto LABEL_34;
    }
    v44 = (char *)&unk_10032348 - 514;
    v19 = (char *)&unk_10032388 - 514;
    v45 = 256;
  }
  else
  {
    v19 = (char *)a6;
    v44 = (char *)a6;
    v45 = 19;
  }
  v46 = v19;
LABEL_34:
  v41 = 0;
  v42 = *a1;
  v40 = 0;
  v20 = 1 << v38;
  v49 = 1 << v38;
  v47 = 1 << v38;
  v50 = (1 << v38) - 1;
  if ( a3 == 1 )
  {
    v21 = v20 < 0x354;
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_39;
    v21 = v20 < 0x250;
  }
  if ( !v21 )
    return 1;
  while ( 1 )
  {
LABEL_39:
    if ( (unsigned __int16)*v39 >= v45 )
    {
      if ( (unsigned __int16)*v39 <= v45 )
      {
        LOBYTE(v36) = 96;
        HIWORD(v36) = 0;
      }
      else
      {
        v22 = 2 * (unsigned __int16)*v39;
        LOBYTE(v36) = v46[v22];
        HIWORD(v36) = *(_WORD *)&v44[v22];
      }
    }
    else
    {
      LOBYTE(v36) = 0;
      HIWORD(v36) = *v39;
    }
    v23 = v49;
    v24 = 1 << (k - v40);
    v25 = &v42[v49 + (v41 >> v40)];
    do
    {
      v23 -= v24;
      v25 -= v24;
      BYTE1(v36) = k - v40;
      *v25 = v36;
    }
    while ( v23 != 0 );
    for ( jj = 1 << (k - 1); (jj & v41) != 0; jj >>= 1 )
      ;
    if ( jj != 0 )
      v41 = jj + (v41 & (jj - 1));
    else
      v41 = 0;
    ++v39;
    if ( --v52[k] == 0 )
    {
      if ( k == v43 )
        break;
      k = *(unsigned __int16 *)(a4 + 2 * (unsigned __int16)*v39);
    }
    if ( k > v38 )
    {
      v27 = v41 & v50;
      if ( (v41 & v50) != v18 )
      {
        v28 = v40;
        if ( v40 == 0 )
        {
          v40 = v38;
          v28 = v38;
        }
        v29 = k - v28;
        v42 += v49;
        v30 = k;
        v31 = 1 << v29;
        if ( k < v43 )
        {
          v32 = &v52[k];
          do
          {
            v33 = v31 - *v32;
            if ( v33 <= 0 )
              break;
            ++v30;
            ++v29;
            ++v32;
            v31 = 2 * v33;
          }
          while ( v30 < v43 );
          v27 = v41 & v50;
        }
        v34 = (1 << v29) + v47;
        v49 = 1 << v29;
        v47 = v34;
        if ( a3 == 1 )
        {
          v35 = v34 < 0x354;
        }
        else
        {
          if ( a3 != 2 )
            goto LABEL_68;
          v35 = v34 < 0x250;
        }
        if ( !v35 )
          return 1;
LABEL_68:
        v18 = v27;
        LOBYTE((*a1)[v27]) = v29;
        BYTE1((*a1)[v27]) = v38;
        HIWORD((*a1)[v27]) = v42 - *a1;
      }
    }
  }
  if ( v41 != 0 )
  {
    LOBYTE(v37) = 64;
    HIBYTE(v37) = k - v40;
    v42[v41] = v37;
  }
  *a1 += v47;
  *a2 = v38;
  return 0;
}

// Address: 0x100170C0
int __fastcall sub_100170C0(int a1, int a2)
{
  _WORD *v2; // eax
  int i; // ecx
  _WORD *v4; // eax
  int j; // ecx
  _WORD *v6; // eax
  int k; // ecx

  v2 = (_WORD *)(a2 + 148);
  for ( i = 286; i != 0; --i )
  {
    *v2 = 0;
    v2 += 2;
  }
  v4 = (_WORD *)(a2 + 2440);
  for ( j = 30; j != 0; --j )
  {
    *v4 = 0;
    v4 += 2;
  }
  v6 = (_WORD *)(a2 + 2684);
  for ( k = 19; k != 0; --k )
  {
    *v6 = 0;
    v6 += 2;
  }
  *(_WORD *)(a2 + 1172) = 1;
  *(_DWORD *)(a2 + 5804) = 0;
  *(_DWORD *)(a2 + 5800) = 0;
  *(_DWORD *)(a2 + 5808) = 0;
  *(_DWORD *)(a2 + 5792) = 0;
  return 0;
}

// Address: 0x10017140
int __usercall sub_10017140@<eax>(int result@<eax>, int a2@<edi>, int a3)
{
  int v3; // edx
  int v4; // ebp
  int v5; // ecx
  bool v6; // cc
  int v7; // esi
  int v8; // ebp
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // bx
  int v11; // esi
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // bx
  int v14; // edx
  int v15; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(result + 5200);
  v4 = *(_DWORD *)(result + 4 * a3 + 2908);
  v5 = 2 * a3;
  v6 = 2 * a3 < v3;
  v15 = v4;
  if ( 2 * a3 > v3 )
  {
    *(_DWORD *)(result + 4 * a3 + 2908) = v4;
  }
  else
  {
    while ( 1 )
    {
      if ( v6 )
      {
        v7 = *(_DWORD *)(result + 4 * v5 + 2912);
        v8 = *(_DWORD *)(result + 4 * v5 + 2908);
        v9 = *(_WORD *)(a2 + 4 * v7);
        v10 = *(_WORD *)(a2 + 4 * v8);
        if ( v9 < v10 || v9 == v10 && *(_BYTE *)(v7 + result + 5208) <= *(_BYTE *)(result + v8 + 5208) )
          ++v5;
        v4 = v15;
      }
      v11 = *(_DWORD *)(result + 4 * v5 + 2908);
      v12 = *(_WORD *)(a2 + 4 * v4);
      v13 = *(_WORD *)(a2 + 4 * v11);
      if ( v12 < v13 )
      {
LABEL_12:
        *(_DWORD *)(result + 4 * a3 + 2908) = v4;
        return result;
      }
      if ( v12 == v13 && *(_BYTE *)(result + v4 + 5208) <= *(_BYTE *)(v11 + result + 5208) )
        break;
      *(_DWORD *)(result + 4 * a3 + 2908) = v11;
      v14 = *(_DWORD *)(result + 5200);
      a3 = v5;
      v5 *= 2;
      v6 = v5 < v14;
      if ( v5 > v14 )
        goto LABEL_12;
    }
    *(_DWORD *)(result + 4 * a3 + 2908) = v4;
  }
  return result;
}

// Address: 0x10017210
_DWORD *__usercall sub_10017210@<eax>(_DWORD *result@<eax>, int *a2@<ecx>)
{
  int v2; // edx
  int v3; // ebx
  int *v4; // ecx
  int v5; // ebp
  int v6; // esi
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // edi
  int v15; // ebp
  _WORD *v16; // esi
  int v17; // ecx
  _WORD *i; // edx
  int v19; // edx
  int v20; // esi
  int v21; // ebp
  int v22; // ecx
  int v23; // edi
  int v24; // [esp+10h] [ebp-20h]
  int *v25; // [esp+14h] [ebp-1Ch]
  int v26; // [esp+18h] [ebp-18h]
  int v27; // [esp+1Ch] [ebp-14h]
  int v28; // [esp+1Ch] [ebp-14h]
  int v29; // [esp+20h] [ebp-10h]
  int v30; // [esp+20h] [ebp-10h]
  int v31; // [esp+24h] [ebp-Ch]
  int v32; // [esp+28h] [ebp-8h]
  int v33; // [esp+2Ch] [ebp-4h]

  v2 = a2[1];
  v3 = *a2;
  v4 = (int *)a2[2];
  v31 = v2;
  v5 = *v4;
  v33 = v4[1];
  v6 = v4[4];
  v32 = v4[2];
  result[719] = 0;
  result[720] = 0;
  result[721] = 0;
  result[722] = 0;
  result[723] = 0;
  result[724] = 0;
  result[725] = 0;
  result[726] = 0;
  *(_WORD *)(v3 + 4 * result[result[1301] + 727] + 2) = 0;
  v7 = result[1301] + 1;
  v27 = v6;
  v26 = 0;
  if ( v7 < 573 )
  {
    v8 = 573 - v7;
    v9 = (int)&result[v7 + 727];
    v10 = 573;
    v25 = (int *)v9;
    v29 = v8;
    v24 = 573;
    while ( 1 )
    {
      v11 = *v25;
      v12 = *(unsigned __int16 *)(v3 + 4 * *(unsigned __int16 *)(v3 + 4 * *v25 + 2) + 2) + 1;
      if ( v12 > v6 )
      {
        ++v26;
        v12 = v6;
      }
      *(_WORD *)(v3 + 4 * v11 + 2) = v12;
      if ( v11 <= v31 )
      {
        ++*((_WORD *)result + v12 + 1438);
        v13 = 0;
        if ( v11 >= v32 )
          v13 = *(_DWORD *)(v33 + 4 * (v11 - v32));
        v14 = *(unsigned __int16 *)(v3 + 4 * v11);
        result[1450] += v14 * (v13 + v12);
        if ( v5 != 0 )
          result[1451] += v14 * (v13 + *(unsigned __int16 *)(v5 + 4 * v11 + 2));
        v10 = 573;
      }
      ++v25;
      if ( --v29 == 0 )
        break;
      v6 = v27;
    }
    v15 = v26;
    if ( v26 != 0 )
    {
      v16 = (_WORD *)result + v27 + 1438;
      do
      {
        v17 = v27 - 1;
        for ( i = (_WORD *)result + v27 + 1437; *i == 0; --v17 )
          --i;
        *((_WORD *)result + v17 + 1439) += 2;
        --*((_WORD *)result + v17 + 1438);
        --*v16;
        v15 -= 2;
      }
      while ( v15 > 0 );
      v19 = v27;
      if ( v27 != 0 )
      {
        v30 = (int)result + 2 * v27 + 2876;
        do
        {
          v20 = (unsigned __int16)*v16;
          v28 = v20;
          if ( v20 != 0 )
          {
            v21 = (int)&result[v10 + 727];
            do
            {
              v22 = *(_DWORD *)(v21 - 4);
              --v24;
              v21 -= 4;
              if ( v22 <= v31 )
              {
                v23 = *(unsigned __int16 *)(v3 + 4 * v22 + 2);
                if ( v23 != v19 )
                {
                  result[1450] += *(unsigned __int16 *)(v3 + 4 * v22) * (v19 - v23);
                  *(_WORD *)(v3 + 4 * v22 + 2) = v19;
                }
                v20 = --v28;
              }
            }
            while ( v20 != 0 );
            v10 = v24;
          }
          --v19;
          v16 = (_WORD *)(v30 - 2);
          v30 -= 2;
        }
        while ( v19 != 0 );
      }
    }
  }
  return result;
}

// Address: 0x10017430
int __usercall sub_10017430@<eax>(int a1@<edx>, int a2@<ebx>, int a3@<edi>)
{
  __int16 v3; // cx
  int result; // eax
  int v5; // edx
  int i; // esi
  int v7; // edx
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // ebp
  __int16 v12; // [esp+4h] [ebp-24h]
  char v13; // [esp+6h] [ebp-22h] BYREF

  v3 = 0;
  result = 1;
  v5 = a1 - (_DWORD)&v13;
  do
  {
    v3 = 2 * (v3 + *(__int16 *)((char *)&v12 + 2 * result + v5));
    *(&v12 + result++) = v3;
  }
  while ( result <= 15 );
  for ( i = 0; i <= a2; ++i )
  {
    v7 = *(unsigned __int16 *)(a3 + 4 * i + 2);
    if ( *(_WORD *)(a3 + 4 * i + 2) != 0 )
    {
      v8 = *(&v12 + v7);
      v9 = v8;
      *(&v12 + v7) = v8 + 1;
      v10 = 0;
      do
      {
        v11 = v9 & 1;
        --v7;
        v9 >>= 1;
        v10 = 2 * (v11 | v10);
      }
      while ( v7 > 0 );
      result = v10 >> 1;
      *(_WORD *)(a3 + 4 * i) = result;
    }
  }
  return result;
}

// Address: 0x100174C0
int __usercall sub_100174C0@<eax>(_DWORD *a1@<esi>, int *a2)
{
  int v2; // edi
  int *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int i; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  int v14; // eax
  unsigned __int8 v15; // cl
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]

  v2 = *a2;
  v3 = (int *)a2[2];
  v4 = v3[3];
  v5 = *v3;
  v6 = -1;
  v7 = 0;
  v18 = v4;
  v17 = -1;
  a1[1300] = 0;
  for ( a1[1301] = 573; v7 < v4; ++v7 )
  {
    if ( *(_WORD *)(v2 + 4 * v7) != 0 )
    {
      a1[++a1[1300] + 727] = v7;
      v17 = v7;
      *((_BYTE *)a1 + v7 + 5208) = 0;
      v6 = v7;
    }
    else
    {
      *(_WORD *)(v2 + 4 * v7 + 2) = 0;
    }
  }
  if ( (int)a1[1300] < 2 )
  {
    do
    {
      if ( v6 >= 2 )
        v8 = 0;
      else
        v8 = ++v6;
      a1[++a1[1300] + 727] = v8;
      *(_WORD *)(v2 + 4 * v8) = 1;
      *((_BYTE *)a1 + v8 + 5208) = 0;
      --a1[1450];
      if ( v5 != 0 )
        a1[1451] -= *(unsigned __int16 *)(v5 + 4 * v8 + 2);
    }
    while ( (int)a1[1300] < 2 );
    v17 = v6;
  }
  a2[1] = v6;
  for ( i = a1[1300] / 2; i >= 1; --i )
    sub_10017140((int)a1, v2, i);
  v10 = v18;
  do
  {
    v11 = a1[1300];
    v12 = a1[v11 + 727];
    v13 = a1[728];
    a1[1300] = v11 - 1;
    a1[728] = v12;
    sub_10017140((int)a1, v2, 1);
    v14 = a1[728];
    --a1[1301];
    a1[a1[1301]-- + 727] = v13;
    a1[a1[1301] + 727] = v14;
    *(_WORD *)(v2 + 4 * v10) = *(_WORD *)(v2 + 4 * v13) + *(_WORD *)(v2 + 4 * v14);
    v15 = *((_BYTE *)a1 + v14 + 5208);
    if ( *((_BYTE *)a1 + v13 + 5208) >= v15 )
      v15 = *((_BYTE *)a1 + v13 + 5208);
    *((_BYTE *)a1 + v10 + 5208) = v15 + 1;
    *(_WORD *)(v2 + 4 * v14 + 2) = v10;
    *(_WORD *)(v2 + 4 * v13 + 2) = v10;
    a1[728] = v10++;
    sub_10017140((int)a1, v2, 1);
  }
  while ( (int)a1[1300] >= 2 );
  a1[--a1[1301] + 727] = a1[728];
  sub_10017210(a1, a2);
  return sub_10017430((int)(a1 + 719), v17, v2);
}

// Address: 0x100176C0
int __usercall sub_100176C0@<eax>(int result@<eax>, int a2@<ecx>, _WORD *a3)
{
  int v3; // edi
  int v4; // edx
  int v6; // ecx
  int v7; // esi
  int v8; // ebp
  unsigned __int16 *v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]

  v3 = *(unsigned __int16 *)(result + 2);
  v4 = 0;
  v6 = 7;
  v7 = 4;
  if ( *(_WORD *)(result + 2) == 0 )
  {
    v6 = 138;
    v7 = 3;
  }
  *(_WORD *)(result + 4 * a2 + 6) = -1;
  if ( a2 >= 0 )
  {
    v8 = -1;
    v10 = a2 + 1;
    v9 = (unsigned __int16 *)(result + 6);
    do
    {
      result = v3;
      v3 = *v9;
      if ( ++v4 >= v6 || result != v3 )
      {
        if ( v4 >= v7 )
        {
          if ( result != 0 )
          {
            if ( result != v8 )
              ++a3[2 * result + 1342];
            ++a3[1374];
          }
          else if ( v4 > 10 )
          {
            ++a3[1378];
          }
          else
          {
            ++a3[1376];
          }
        }
        else
        {
          a3[2 * result + 1342] += v4;
        }
        v4 = 0;
        v8 = result;
        if ( v3 != 0 )
        {
          if ( result == v3 )
          {
            v6 = 6;
            v7 = 3;
          }
          else
          {
            v6 = 7;
            v7 = 4;
          }
        }
        else
        {
          v6 = 138;
          v7 = 3;
        }
      }
      v9 += 2;
      --v10;
    }
    while ( v10 != 0 );
  }
  return result;
}

// Address: 0x100177A0
int __usercall sub_100177A0@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // ecx
  unsigned __int16 v10; // si
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  __int16 v14; // si
  int v15; // ecx
  int v16; // ecx
  unsigned __int16 v17; // si
  int v18; // edi
  int v19; // ecx
  int v20; // ebx
  int v21; // ecx
  int v22; // ecx
  unsigned __int16 v23; // si
  int v24; // edi
  int v25; // ecx
  int v26; // ebx
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  int v30; // ecx
  int v31; // ebx
  int v32; // ecx
  int v33; // ecx
  unsigned __int16 v34; // si
  int v35; // edi
  int v36; // ecx
  int v37; // ebx
  int v38; // ecx
  int v39; // esi
  int v40; // edi
  int v41; // ecx
  int v42; // ebx
  unsigned __int16 v43; // si
  int v44; // edi
  int v45; // ecx
  int v46; // ebx
  int v47; // ecx
  int v48; // esi
  int v49; // edi
  int v50; // ecx
  int v51; // ebx
  int v52; // [esp+10h] [ebp-18h]
  int v53; // [esp+14h] [ebp-14h]
  unsigned __int16 *v54; // [esp+18h] [ebp-10h]
  int v55; // [esp+1Ch] [ebp-Ch]
  int v56; // [esp+1Ch] [ebp-Ch]
  int v57; // [esp+1Ch] [ebp-Ch]
  int v58; // [esp+1Ch] [ebp-Ch]
  int v59; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+20h] [ebp-8h]
  int v61; // [esp+24h] [ebp-4h]

  v3 = 0;
  v55 = -1;
  v53 = *(unsigned __int16 *)(a2 + 2);
  v5 = 7;
  v6 = 4;
  if ( *(_WORD *)(a2 + 2) == 0 )
  {
    v5 = 138;
    v6 = 3;
  }
  if ( a3 >= 0 )
  {
    v54 = (unsigned __int16 *)(a2 + 6);
    for ( i = a3 + 1; i != 0; --i )
    {
      v7 = v53;
      ++v3;
      v61 = v53;
      v53 = *v54;
      v52 = v3;
      if ( v3 < v5 && v7 == *v54 )
        goto LABEL_44;
      if ( v3 < v6 )
      {
        do
        {
          v8 = *(unsigned __int16 *)(result + 4 * v7 + 2686);
          v9 = *(_DWORD *)(result + 5820);
          if ( v9 <= 16 - v8 )
          {
            *(_WORD *)(result + 5816) |= *(_WORD *)(result + 4 * v7 + 2684) << v9;
            v15 = v8 + v9;
          }
          else
          {
            v10 = *(_WORD *)(result + 4 * v7 + 2684);
            v11 = v10 << v9;
            v12 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 5816) |= v11;
            *(_BYTE *)(v12 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
            *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
            v13 = *(_DWORD *)(result + 5820);
            ++*(_DWORD *)(result + 20);
            v14 = v10 >> (16 - v13);
            v15 = v13 + v8 - 16;
            v7 = v61;
            *(_WORD *)(result + 5816) = v14;
            v3 = v52;
          }
          --v3;
          *(_DWORD *)(result + 5820) = v15;
          v52 = v3;
        }
        while ( v3 != 0 );
        goto LABEL_39;
      }
      if ( v7 != 0 )
      {
        if ( v7 != v55 )
        {
          v16 = *(_DWORD *)(result + 5820);
          v56 = *(unsigned __int16 *)(result + 4 * v7 + 2686);
          if ( v16 <= 16 - v56 )
          {
            *(_WORD *)(result + 5816) |= *(_WORD *)(result + 4 * v7 + 2684) << v16;
            v21 = v56 + v16;
          }
          else
          {
            v17 = *(_WORD *)(result + 4 * v7 + 2684);
            v18 = v17 << v16;
            v19 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 5816) |= v18;
            *(_BYTE *)(v19 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
            *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
            v20 = *(_DWORD *)(result + 5820);
            ++*(_DWORD *)(result + 20);
            v21 = v20 + v56 - 16;
            *(_WORD *)(result + 5816) = v17 >> (16 - v20);
            v3 = v52;
          }
          --v3;
          *(_DWORD *)(result + 5820) = v21;
          v52 = v3;
        }
        v22 = *(_DWORD *)(result + 5820);
        v57 = *(unsigned __int16 *)(result + 2750);
        if ( v22 <= 16 - v57 )
        {
          *(_WORD *)(result + 5816) |= *(_WORD *)(result + 2748) << v22;
          v27 = v57 + v22;
        }
        else
        {
          v23 = *(_WORD *)(result + 2748);
          v24 = v23 << v22;
          v25 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5816) |= v24;
          *(_BYTE *)(v25 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
          v26 = *(_DWORD *)(result + 5820);
          ++*(_DWORD *)(result + 20);
          v27 = v26 + v57 - 16;
          *(_WORD *)(result + 5816) = v23 >> (16 - v26);
          v3 = v52;
        }
        v28 = v3 - 3;
        *(_DWORD *)(result + 5820) = v27;
        if ( v27 > 14 )
        {
          v29 = v28 << v27;
          v30 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5816) |= v29;
          *(_BYTE *)(v30 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
          v31 = *(_DWORD *)(result + 5820);
          ++*(_DWORD *)(result + 20);
          *(_DWORD *)(result + 5820) = v31 - 14;
          *(_WORD *)(result + 5816) = (unsigned __int16)v28 >> (16 - v31);
          goto LABEL_39;
        }
        *(_WORD *)(result + 5816) |= v28 << v27;
        v32 = v27 + 2;
      }
      else
      {
        v33 = *(_DWORD *)(result + 5820);
        if ( v3 > 10 )
        {
          v59 = *(unsigned __int16 *)(result + 2758);
          if ( v33 <= 16 - v59 )
          {
            *(_WORD *)(result + 5816) |= *(_WORD *)(result + 2756) << v33;
            v47 = v59 + v33;
          }
          else
          {
            v43 = *(_WORD *)(result + 2756);
            v44 = v43 << v33;
            v45 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 5816) |= v44;
            *(_BYTE *)(v45 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
            *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
            v46 = *(_DWORD *)(result + 5820);
            ++*(_DWORD *)(result + 20);
            v47 = v46 + v59 - 16;
            *(_WORD *)(result + 5816) = v43 >> (16 - v46);
            v3 = v52;
          }
          v48 = v3 - 11;
          *(_DWORD *)(result + 5820) = v47;
          if ( v47 > 9 )
          {
            v49 = v48 << v47;
            v50 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 5816) |= v49;
            *(_BYTE *)(v50 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
            *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
            v51 = *(_DWORD *)(result + 5820);
            ++*(_DWORD *)(result + 20);
            *(_DWORD *)(result + 5820) = v51 - 9;
            *(_WORD *)(result + 5816) = (unsigned __int16)v48 >> (16 - v51);
            goto LABEL_39;
          }
          *(_WORD *)(result + 5816) |= v48 << v47;
          v32 = v47 + 7;
        }
        else
        {
          v58 = *(unsigned __int16 *)(result + 2754);
          if ( v33 <= 16 - v58 )
          {
            *(_WORD *)(result + 5816) |= *(_WORD *)(result + 2752) << v33;
            v38 = v58 + v33;
          }
          else
          {
            v34 = *(_WORD *)(result + 2752);
            v35 = v34 << v33;
            v36 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 5816) |= v35;
            *(_BYTE *)(v36 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
            *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
            v37 = *(_DWORD *)(result + 5820);
            ++*(_DWORD *)(result + 20);
            v38 = v37 + v58 - 16;
            *(_WORD *)(result + 5816) = v34 >> (16 - v37);
            v3 = v52;
          }
          v39 = v3 - 3;
          *(_DWORD *)(result + 5820) = v38;
          if ( v38 > 13 )
          {
            v40 = v39 << v38;
            v41 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 5816) |= v40;
            *(_BYTE *)(v41 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
            *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
            v42 = *(_DWORD *)(result + 5820);
            ++*(_DWORD *)(result + 20);
            *(_DWORD *)(result + 5820) = v42 - 13;
            *(_WORD *)(result + 5816) = (unsigned __int16)v39 >> (16 - v42);
            goto LABEL_39;
          }
          *(_WORD *)(result + 5816) |= v39 << v38;
          v32 = v38 + 3;
        }
      }
      *(_DWORD *)(result + 5820) = v32;
LABEL_39:
      v3 = 0;
      v55 = v7;
      if ( v53 != 0 )
      {
        if ( v7 == v53 )
        {
          v5 = 6;
          v6 = 3;
        }
        else
        {
          v5 = 7;
          v6 = 4;
        }
      }
      else
      {
        v5 = 138;
        v6 = 3;
      }
LABEL_44:
      v54 += 2;
    }
  }
  return result;
}

// Address: 0x10017CB0
int __usercall sub_10017CB0@<eax>(int a1@<eax>)
{
  int result; // eax

  sub_100176C0(a1 + 148, *(_DWORD *)(a1 + 2844), (_WORD *)a1);
  sub_100176C0(a1 + 2440, *(_DWORD *)(a1 + 2856), (_WORD *)a1);
  sub_100174C0((_DWORD *)a1, (int *)(a1 + 2864));
  result = 18;
  while ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_10031954[result] + 2686) == 0 )
  {
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_10031953[result] + 2686) != 0 )
    {
      --result;
      *(_DWORD *)(a1 + 5800) += 3 * result + 17;
      return result;
    }
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_10031952[result] + 2686) != 0 )
    {
      result -= 2;
      *(_DWORD *)(a1 + 5800) += 3 * result + 17;
      return result;
    }
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_10031951[result] + 2686) != 0 )
    {
      result -= 3;
      break;
    }
    result -= 4;
    if ( result < 3 )
    {
      *(_DWORD *)(a1 + 5800) += 3 * result + 17;
      return result;
    }
  }
  *(_DWORD *)(a1 + 5800) += 3 * result + 17;
  return result;
}

// Address: 0x10017D80
int __usercall sub_10017D80@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int i; // edi
  int v18; // ecx
  int v19; // edx
  unsigned __int16 v20; // si
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // eax

  v4 = *(_DWORD *)(a1 + 5820);
  v5 = a4;
  if ( v4 <= 11 )
  {
    *(_WORD *)(a1 + 5816) |= (a2 - 257) << v4;
    *(_DWORD *)(a1 + 5820) = v4 + 5;
  }
  else
  {
    v6 = (a2 - 257) << v4;
    v7 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 5816) |= v6;
    *(_BYTE *)(v7 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5816);
    *(_BYTE *)(++*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5817);
    v8 = *(_DWORD *)(a1 + 5820);
    ++*(_DWORD *)(a1 + 20);
    v5 = a4;
    *(_DWORD *)(a1 + 5820) = v8 - 11;
    *(_WORD *)(a1 + 5816) = (unsigned __int16)(a2 - 257) >> (16 - v8);
  }
  v9 = *(_DWORD *)(a1 + 5820);
  if ( v9 <= 11 )
  {
    *(_WORD *)(a1 + 5816) |= (a3 - 1) << v9;
    *(_DWORD *)(a1 + 5820) = v9 + 5;
  }
  else
  {
    v10 = (a3 - 1) << v9;
    v11 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 5816) |= v10;
    *(_BYTE *)(v11 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5816);
    *(_BYTE *)(++*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5817);
    v12 = *(_DWORD *)(a1 + 5820);
    ++*(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 5820) = v12 - 11;
    *(_WORD *)(a1 + 5816) = (unsigned __int16)(a3 - 1) >> (16 - v12);
  }
  v13 = *(_DWORD *)(a1 + 5820);
  if ( v13 <= 12 )
  {
    *(_WORD *)(a1 + 5816) |= (v5 - 4) << v13;
    *(_DWORD *)(a1 + 5820) = v13 + 4;
  }
  else
  {
    v14 = (v5 - 4) << v13;
    v15 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 5816) |= v14;
    *(_BYTE *)(v15 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5816);
    *(_BYTE *)(++*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5817);
    v16 = *(_DWORD *)(a1 + 5820);
    ++*(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 5820) = v16 - 12;
    *(_WORD *)(a1 + 5816) = (unsigned __int16)(v5 - 4) >> (16 - v16);
  }
  for ( i = 0; i < v5; ++i )
  {
    v18 = *(_DWORD *)(a1 + 5820);
    v19 = (unsigned __int8)byte_10031954[i];
    if ( v18 <= 13 )
    {
      *(_WORD *)(a1 + 5816) |= *(_WORD *)(a1 + 4 * v19 + 2686) << v18;
      *(_DWORD *)(a1 + 5820) = v18 + 3;
    }
    else
    {
      v20 = *(_WORD *)(a1 + 4 * v19 + 2686);
      v21 = v20 << v18;
      v22 = *(_DWORD *)(a1 + 20);
      *(_WORD *)(a1 + 5816) |= v21;
      *(_BYTE *)(v22 + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5816);
      *(_BYTE *)(++*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5817);
      v23 = *(_DWORD *)(a1 + 5820);
      ++*(_DWORD *)(a1 + 20);
      v5 = a4;
      *(_DWORD *)(a1 + 5820) = v23 - 13;
      *(_WORD *)(a1 + 5816) = v20 >> (16 - v23);
    }
  }
  v24 = sub_100177A0(a1, a1 + 148, a2 - 1);
  return sub_100177A0(v24, v24 + 2440, a3 - 1);
}

// Address: 0x10017FE0
int __usercall sub_10017FE0@<eax>(int a1@<eax>, int a2@<ecx>, int a3, int a4)
{
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx

  v5 = *(_DWORD *)(a1 + 5820);
  if ( v5 <= 13 )
  {
    *(_WORD *)(a1 + 5816) |= a2 << v5;
    *(_DWORD *)(a1 + 5820) = v5 + 3;
  }
  else
  {
    v6 = a2 << v5;
    v7 = *(_DWORD *)(a1 + 8);
    *(_WORD *)(a1 + 5816) |= v6;
    *(_BYTE *)(v7 + (*(_DWORD *)(a1 + 20))++) = *(_BYTE *)(a1 + 5816);
    *(_BYTE *)(*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 5817);
    v8 = *(_DWORD *)(a1 + 5820);
    ++*(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 5816) = (unsigned __int16)a2 >> (16 - v8);
    *(_DWORD *)(a1 + 5820) = v8 - 13;
  }
  return sub_100187E0(a4, a3);
}

// Address: 0x10018070
int __usercall sub_10018070@<eax>(int a1@<eax>, int *a2@<ecx>, int a3, int a4)
{
  int v7; // edi
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // ebx
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int result; // eax
  int v23; // [esp+18h] [ebp+8h]

  v23 = 0;
  if ( a2[33] <= 0 )
  {
    v10 = a1 + 5;
LABEL_7:
    v9 = v10;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(*a2 + 44) == 2 )
  {
    v7 = *a2;
    *(_DWORD *)(v7 + 44) = sub_10018690();
  }
  sub_100174C0(a2, a2 + 710);
  sub_100174C0(a2, a2 + 713);
  v8 = sub_10017CB0((int)a2);
  v9 = (unsigned int)(a2[1450] + 10) >> 3;
  v10 = (unsigned int)(a2[1451] + 10) >> 3;
  v23 = v8;
  if ( v10 <= v9 )
    goto LABEL_7;
LABEL_8:
  if ( a1 + 4 <= v9 && a3 != 0 )
  {
    sub_10017FE0((int)a2, a4, a3, a1);
  }
  else if ( a2[34] == 4 || v10 == v9 )
  {
    v17 = a2[1455];
    v18 = a4 + 2;
    if ( v17 <= 13 )
    {
      *((_WORD *)a2 + 2908) |= v18 << v17;
      a2[1455] = v17 + 3;
    }
    else
    {
      v19 = v18 << v17;
      v20 = a2[5];
      *((_WORD *)a2 + 2908) |= v19;
      *(_BYTE *)(v20 + a2[2]) = *((_BYTE *)a2 + 5816);
      *(_BYTE *)(++a2[5] + a2[2]) = *((_BYTE *)a2 + 5817);
      v21 = a2[1455];
      ++a2[5];
      a2[1455] = v21 - 13;
      *((_WORD *)a2 + 2908) = (unsigned __int16)v18 >> (16 - v21);
    }
    sub_10018270(&unk_10031A30, &unk_10031EB0);
  }
  else
  {
    v12 = a2[1455];
    v13 = a4 + 4;
    if ( v12 <= 13 )
    {
      *((_WORD *)a2 + 2908) |= v13 << v12;
      a2[1455] = v12 + 3;
    }
    else
    {
      v14 = v13 << v12;
      v15 = a2[5];
      *((_WORD *)a2 + 2908) |= v14;
      *(_BYTE *)(v15 + a2[2]) = *((_BYTE *)a2 + 5816);
      *(_BYTE *)(++a2[5] + a2[2]) = *((_BYTE *)a2 + 5817);
      v16 = a2[1455];
      ++a2[5];
      a2[1455] = v16 - 13;
      *((_WORD *)a2 + 2908) = (unsigned __int16)v13 >> (16 - v16);
    }
    sub_10017D80((int)a2, a2[711] + 1, a2[714] + 1, v23 + 1);
    sub_10018270(a2 + 37, a2 + 610);
  }
  result = sub_100170C0(v11, (int)a2);
  if ( a4 != 0 )
    return sub_10018780(a3, v23);
  return result;
}

// Address: 0x10018270
int __usercall sub_10018270@<eax>(int result@<eax>, int a2, int a3)
{
  unsigned int v3; // ecx
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // esi
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // edi
  int v20; // esi
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // ebp
  int v27; // edi
  int v28; // edx
  int v29; // ecx
  unsigned __int16 v30; // si
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  int v34; // esi
  int v35; // ecx
  unsigned int v36; // ebp
  unsigned int v37; // edx
  int v38; // ecx
  int v39; // edx
  int v40; // edi
  int v41; // ecx
  unsigned __int16 v42; // si
  int v43; // edx
  int v44; // ecx
  int v45; // edx
  int v46; // [esp+10h] [ebp-Ch]
  unsigned int v47; // [esp+14h] [ebp-8h]
  int v48; // [esp+18h] [ebp-4h]
  int v49; // [esp+18h] [ebp-4h]

  v3 = 0;
  if ( *(_DWORD *)(result + 5792) != 0 )
  {
    while ( 1 )
    {
      v4 = *(unsigned __int16 *)(*(_DWORD *)(result + 5796) + 2 * v3);
      v5 = *(unsigned __int8 *)(v3 + *(_DWORD *)(result + 5784));
      v47 = v3 + 1;
      if ( *(_WORD *)(*(_DWORD *)(result + 5796) + 2 * v3) == 0 )
        break;
      v13 = (unsigned __int8)byte_10032128[v5];
      v14 = *(_DWORD *)(result + 5820);
      v46 = *(unsigned __int16 *)(a2 + 4 * v13 + 1030);
      v48 = v13;
      if ( v14 <= 16 - v46 )
      {
        *(_WORD *)(result + 5816) |= *(_WORD *)(a2 + 4 * v13 + 1028) << v14;
        *(_DWORD *)(result + 5820) = v46 + v14;
      }
      else
      {
        v15 = *(unsigned __int16 *)(a2 + 4 * v13 + 1028);
        v16 = v15 << v14;
        v17 = *(_DWORD *)(result + 8);
        *(_WORD *)(result + 5816) |= v16;
        *(_BYTE *)(v17 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
        *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
        v18 = *(_DWORD *)(result + 5820);
        ++*(_DWORD *)(result + 20);
        LOWORD(v15) = (unsigned __int16)v15 >> (16 - v18);
        *(_DWORD *)(result + 5820) = v18 + v46 - 16;
        v13 = v48;
        *(_WORD *)(result + 5816) = v15;
      }
      v19 = dword_100318E0[v13];
      if ( v19 != 0 )
      {
        v20 = v5 - dword_10032228[v13];
        v21 = *(_DWORD *)(result + 5820);
        if ( v21 <= 16 - v19 )
        {
          *(_WORD *)(result + 5816) |= v20 << v21;
          v25 = v19 + v21;
        }
        else
        {
          v22 = v20 << v21;
          v23 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5816) |= v22;
          *(_BYTE *)(v23 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
          v24 = *(_DWORD *)(result + 5820);
          ++*(_DWORD *)(result + 20);
          v25 = v24 + v19 - 16;
          *(_WORD *)(result + 5816) = (unsigned __int16)v20 >> (16 - v24);
        }
        *(_DWORD *)(result + 5820) = v25;
      }
      v26 = v4 - 1;
      if ( v26 >= 0x100 )
        v27 = (unsigned __int8)byte_10032028[v26 >> 7];
      else
        v27 = (unsigned __int8)byte_10031F28[v26];
      v28 = *(unsigned __int16 *)(a3 + 4 * v27 + 2);
      v29 = *(_DWORD *)(result + 5820);
      v49 = v28;
      if ( v29 <= 16 - v28 )
      {
        *(_WORD *)(result + 5816) |= *(_WORD *)(a3 + 4 * v27) << v29;
        *(_DWORD *)(result + 5820) = v28 + v29;
      }
      else
      {
        v30 = *(_WORD *)(a3 + 4 * v27);
        v31 = v30 << v29;
        v32 = *(_DWORD *)(result + 8);
        *(_WORD *)(result + 5816) |= v31;
        *(_BYTE *)(v32 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
        *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
        v33 = *(_DWORD *)(result + 5820);
        ++*(_DWORD *)(result + 20);
        *(_DWORD *)(result + 5820) = v33 + v49 - 16;
        *(_WORD *)(result + 5816) = v30 >> (16 - v33);
      }
      v34 = dword_10031968[v27];
      if ( v34 != 0 )
      {
        v35 = *(_DWORD *)(result + 5820);
        v36 = v26 - dword_100322A0[v27];
        if ( v35 <= 16 - v34 )
        {
          *(_WORD *)(result + 5816) |= v36 << v35;
          v12 = v34 + v35;
        }
        else
        {
          v37 = v36 << v35;
          v38 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 5816) |= v37;
          *(_BYTE *)(v38 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
          *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
          v39 = *(_DWORD *)(result + 5820);
          ++*(_DWORD *)(result + 20);
          v12 = v39 + v34 - 16;
          *(_WORD *)(result + 5816) = (unsigned __int16)v36 >> (16 - v39);
        }
        goto LABEL_26;
      }
LABEL_27:
      if ( v47 >= *(_DWORD *)(result + 5792) )
        goto LABEL_28;
      v3 = v47;
    }
    v6 = *(unsigned __int16 *)(a2 + 4 * v5 + 2);
    v7 = *(_DWORD *)(result + 5820);
    if ( v7 <= 16 - v6 )
    {
      *(_WORD *)(result + 5816) |= *(_WORD *)(a2 + 4 * v5) << v7;
      v12 = v6 + v7;
    }
    else
    {
      v8 = *(unsigned __int16 *)(a2 + 4 * v5);
      v9 = v8 << v7;
      v10 = *(_DWORD *)(result + 8);
      *(_WORD *)(result + 5816) |= v9;
      *(_BYTE *)(v10 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
      *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
      v11 = *(_DWORD *)(result + 5820);
      ++*(_DWORD *)(result + 20);
      v12 = v11 + v6 - 16;
      *(_WORD *)(result + 5816) = (unsigned __int16)v8 >> (16 - v11);
    }
LABEL_26:
    *(_DWORD *)(result + 5820) = v12;
    goto LABEL_27;
  }
LABEL_28:
  v40 = *(unsigned __int16 *)(a2 + 1026);
  v41 = *(_DWORD *)(result + 5820);
  if ( v41 <= 16 - v40 )
  {
    *(_WORD *)(result + 5816) |= *(_WORD *)(a2 + 1024) << v41;
    *(_DWORD *)(result + 5820) = v40 + v41;
  }
  else
  {
    v42 = *(_WORD *)(a2 + 1024);
    v43 = v42 << v41;
    v44 = *(_DWORD *)(result + 8);
    *(_WORD *)(result + 5816) |= v43;
    *(_BYTE *)(v44 + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
    *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 20)) = *(_BYTE *)(result + 5817);
    v45 = *(_DWORD *)(result + 5820);
    ++*(_DWORD *)(result + 20);
    *(_DWORD *)(result + 5820) = v45 + v40 - 16;
    *(_WORD *)(result + 5816) = v42 >> (16 - v45);
  }
  return result;
}

// Address: 0x10018690
int __usercall sub_10018690@<eax>(_WORD *a1@<esi>)
{
  unsigned int v1; // edx
  int v2; // eax
  _WORD *v3; // ecx
  int v4; // eax
  _WORD *i; // ecx

  v1 = -201342849;
  v2 = 0;
  v3 = a1 + 74;
  do
  {
    if ( (v1 & 1) != 0 && *v3 != 0 )
      return 0;
    ++v2;
    v3 += 2;
    v1 >>= 1;
  }
  while ( v2 <= 31 );
  if ( a1[92] == 0 && a1[94] == 0 && a1[100] == 0 )
  {
    v4 = 32;
    for ( i = a1 + 138; *i == 0; i += 2 )
    {
      if ( ++v4 >= 256 )
        return 0;
    }
  }
  return 1;
}

// Address: 0x10018700
int __usercall sub_10018700@<eax>(int result@<eax>)
{
  int v1; // ecx
  __int16 v2; // dx

  v1 = *(_DWORD *)(result + 5820);
  if ( v1 == 16 )
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
    *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 5817);
    ++*(_DWORD *)(result + 20);
    *(_WORD *)(result + 5816) = 0;
    *(_DWORD *)(result + 5820) = 0;
  }
  else if ( v1 >= 8 )
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 20)) = *(_BYTE *)(result + 5816);
    v2 = *(unsigned __int8 *)(result + 5817);
    ++*(_DWORD *)(result + 20);
    *(_DWORD *)(result + 5820) -= 8;
    *(_WORD *)(result + 5816) = v2;
  }
  return result;
}

// Address: 0x10018780
int __usercall sub_10018780@<eax>(int result@<eax>)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // edx
  char v4; // bl

  v1 = *(_DWORD *)(result + 5820);
  if ( v1 > 8 )
  {
    *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 20))++) = *(_BYTE *)(result + 5816);
    v2 = *(_DWORD *)(result + 20);
    v3 = *(_DWORD *)(result + 8);
    v4 = *(_BYTE *)(result + 5817);
LABEL_5:
    *(_BYTE *)(v2 + v3) = v4;
    ++*(_DWORD *)(result + 20);
    goto LABEL_6;
  }
  if ( v1 > 0 )
  {
    v2 = *(_DWORD *)(result + 8);
    v3 = *(_DWORD *)(result + 20);
    v4 = *(_BYTE *)(result + 5816);
    goto LABEL_5;
  }
LABEL_6:
  *(_WORD *)(result + 5816) = 0;
  *(_DWORD *)(result + 5820) = 0;
  return result;
}

// Address: 0x100187E0
int __usercall sub_100187E0@<eax>(int a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  int result; // eax
  int v6; // edx
  int i; // esi

  result = sub_10018780(a1);
  *(_BYTE *)(*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = a3;
  v6 = *(_DWORD *)(result + 8);
  *(_BYTE *)(++*(_DWORD *)(result + 20) + v6) = BYTE1(a3);
  *(_BYTE *)(++*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = ~(_BYTE)a3;
  *(_BYTE *)(++*(_DWORD *)(result + 20) + *(_DWORD *)(result + 8)) = (unsigned __int16)~(_WORD)a3 >> 8;
  for ( i = ++*(_DWORD *)(result + 20); a3 != 0; ++a2 )
  {
    *(_BYTE *)(i + *(_DWORD *)(result + 8)) = *a2;
    i = ++*(_DWORD *)(result + 20);
    --a3;
  }
  return result;
}

// Address: 0x10018860
int __usercall sub_10018860@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int *a4)
{
  int result; // eax
  int v5; // edi
  int v6; // [esp+8h] [ebp-38h] BYREF
  int v7; // [esp+Ch] [ebp-34h]
  int v8; // [esp+14h] [ebp-2Ch]
  int v9; // [esp+18h] [ebp-28h]
  int v10; // [esp+1Ch] [ebp-24h]
  int v11; // [esp+28h] [ebp-18h]
  int v12; // [esp+2Ch] [ebp-14h]

  v6 = a1;
  v9 = *a4;
  v7 = a3;
  v8 = a2;
  v11 = 0;
  v12 = 0;
  result = sub_10015520(&v6);
  if ( result == 0 )
  {
    v5 = sub_10015690((int)&v6);
    if ( v5 == 1 )
    {
      *a4 = v10;
      return sub_10016BE0(&v6);
    }
    else
    {
      sub_10016BE0(&v6);
      if ( v5 == 2 || v5 == -5 && v7 == 0 )
        return -3;
      else
        return v5;
    }
  }
  return result;
}

// Address: 0x100188F0 (sub_100188F0)
// DECOMPILATION FAILED (code=-5, errea=0x100188F9): positive sp value has been found
/*
  0x100188F0: mov     eax, [esp+8]
  0x100188F4: imul    eax, [esp+0Ch]
  0x100188F9: push    eax
  0x100188FA: call    _malloc
  0x100188FF: add     esp, 4
  0x10018902: retn
*/
// Address: 0x10018910
void __cdecl sub_10018910(int a1, void *Block)
{
  free(Block);
}

// Address: 0x10018920
int __stdcall sub_10018920(int a1)
{
  *(_DWORD *)(a1 + 24) = 7;
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 52) = 7;
  *(_DWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 80) = 7;
  *(_DWORD *)(a1 + 76) = 0;
  *(_WORD *)(a1 + 60) = 0;
  sub_100192B0(a1 + 84);
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  return a1;
}

// Address: 0x100189B0
void __usercall sub_100189B0(int a1@<esi>)
{
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
  if ( *(_DWORD *)(a1 + 24) >= 8u )
    operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 24) = 7;
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 4) = 0;
}

// Address: 0x10018A30
void __stdcall sub_10018A30(int a1)
{
  sub_10019550();
  operator delete(*(void **)(a1 + 84));
  sub_100189B0(a1);
}

// Address: 0x10018AA0
BOOL __usercall sub_10018AA0@<eax>(const WCHAR *a1@<eax>, int a2@<edi>)
{
  BOOL v2; // ebx
  HANDLE FileW; // eax
  void *v4; // esi
  DWORD pcbHash; // [esp+8h] [ebp-4h] BYREF

  v2 = false;
  pcbHash = 0;
  FileW = CreateFileW(a1, 0x80000000, 1u, nullptr, 3u, 0, nullptr);
  v4 = FileW;
  if ( FileW != (HANDLE)-1 )
  {
    CryptCATAdminCalcHashFromFileHandle(FileW, &pcbHash, nullptr, 0);
    sub_10001380((int *)a2, pcbHash);
    if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(a2 + 12) )
      _invalid_parameter_noinfo();
    v2 = CryptCATAdminCalcHashFromFileHandle(v4, &pcbHash, *(BYTE **)(a2 + 12), 0);
    if ( !v2 )
      sub_10001380((int *)a2, 0);
    CloseHandle(v4);
  }
  return v2;
}

// Address: 0x10018B20
int __fastcall sub_10018B20(int a1, int a2, int a3, int a4)
{
  int v4; // ebp
  _WORD *v7; // esi
  int *v8; // eax
  LONG v9; // esi
  CRYPT_PROVIDER_DATA *v10; // eax
  CRYPT_PROVIDER_DATA *v11; // esi
  CRYPT_PROVIDER_SGNR *v13; // edi
  CRYPT_PROVIDER_SGNR *ProvSignerFromChain; // eax
  CRYPT_PROVIDER_SGNR *v15; // edi
  _DWORD *v16; // eax
  struct _CRYPT_PROVIDER_CERT *pasCertChain; // ecx
  PCERT_INFO pCertInfo; // ebp
  _DWORD *v19; // esi
  _DWORD *v20; // esi
  _DWORD *v21; // esi
  int v22; // [esp+0h] [ebp-3CCh]
  int v23; // [esp+10h] [ebp-3BCh]
  PCCERT_CONTEXT *p_pCert; // [esp+10h] [ebp-3BCh]
  CRYPT_PROVIDER_SGNR *v25; // [esp+14h] [ebp-3B8h]
  DWORD v26; // [esp+18h] [ebp-3B4h] BYREF
  int v27; // [esp+1Ch] [ebp-3B0h]
  LONG v28; // [esp+20h] [ebp-3ACh]
  HANDLE pWVTData[12]; // [esp+24h] [ebp-3A8h] BYREF
  _DWORD v30[2]; // [esp+54h] [ebp-378h] BYREF
  _WORD *v31; // [esp+5Ch] [ebp-370h]
  int v32; // [esp+60h] [ebp-36Ch]
  int v33; // [esp+64h] [ebp-368h]
  int v34; // [esp+68h] [ebp-364h]
  int v35; // [esp+6Ch] [ebp-360h]
  int v36; // [esp+70h] [ebp-35Ch]
  int v37; // [esp+74h] [ebp-358h]
  int v38; // [esp+78h] [ebp-354h] BYREF
  int v39; // [esp+7Ch] [ebp-350h]
  int v40; // [esp+80h] [ebp-34Ch]
  int v41; // [esp+84h] [ebp-348h]
  struct _FILETIME LocalFileTime; // [esp+88h] [ebp-344h] BYREF
  GUID pgActionID; // [esp+90h] [ebp-33Ch] BYREF
  WCHAR pszNameString[402]; // [esp+A0h] [ebp-32Ch] BYREF

  v4 = a3;
  pgActionID.Data4[1] = -62;
  pgActionID.Data4[5] = -62;
  v27 = a3;
  pgActionID.Data1 = 11191659;
  pgActionID.Data2 = -12988;
  pgActionID.Data3 = 4560;
  pgActionID.Data4[0] = -116;
  pgActionID.Data4[2] = 0;
  pgActionID.Data4[3] = -64;
  pgActionID.Data4[4] = 79;
  pgActionID.Data4[6] = -107;
  pgActionID.Data4[7] = -18;
  memset(&pWVTData[1], 0, 0x2Cu);
  pWVTData[3] = HANDLE_FLAG_PROTECT_FROM_CLOSE;
  pWVTData[5] = HANDLE_FLAG_PROTECT_FROM_CLOSE;
  v7 = (_WORD *)(a2 + 4);
  pWVTData[0] = (HANDLE)48;
  pWVTData[1] = nullptr;
  pWVTData[2] = nullptr;
  pWVTData[4] = nullptr;
  pWVTData[7] = HANDLE_FLAG_INHERIT;
  pWVTData[8] = nullptr;
  pWVTData[9] = nullptr;
  pWVTData[10] = (HANDLE)512;
  pWVTData[11] = nullptr;
  v30[0] = 36;
  v30[1] = 0;
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 16;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( *v7 != 0 )
  {
    v36 = *(_DWORD *)(a1 + 16) - *(_DWORD *)(a1 + 12);
    if ( v36 == 0 )
      _invalid_parameter_noinfo();
    v35 = *(_DWORD *)(a1 + 12);
    v31 = v7;
    v33 = a4;
    v8 = v30;
  }
  else
  {
    v39 = a4;
    v8 = &v38;
    pWVTData[5] = HANDLE_FLAG_INHERIT;
  }
  pWVTData[6] = v8;
  v9 = WinVerifyTrust(nullptr, &pgActionID, pWVTData);
  v28 = v9;
  if ( v9 != 0 )
  {
    sub_10001B70((wchar_t *)L"CWinVerifyTrust  : WinVerifyTrust failed.", v22);
  }
  else
  {
    v10 = WTHelperProvDataFromStateData(pWVTData[8]);
    v11 = v10;
    if ( v10 == nullptr )
    {
      sub_10001B70((wchar_t *)L"CWinVerifyTrust  : WTHelperProvDataFromStateData failed.", v22);
      return 13;
    }
    sub_10001B70((wchar_t *)L"CWinVerifyTrust  : csSigners = %d", v10->csSigners);
    v13 = nullptr;
    v25 = nullptr;
    v23 = 0;
    if ( (int)v11->csSigners > 0 )
    {
      while ( 1 )
      {
        ProvSignerFromChain = WTHelperGetProvSignerFromChain(v11, 0, false, 0);
        v15 = ProvSignerFromChain;
        v25 = ProvSignerFromChain;
        if ( ProvSignerFromChain == nullptr )
          return 13;
        sub_10001B70((wchar_t *)L"CWinVerifyTrust  : csCounterSigners = %d", ProvSignerFromChain->csCounterSigners);
        if ( v15->csCounterSigners != 0 )
        {
          FileTimeToLocalFileTime(&v15->pasCounterSigners->sftVerifyAsOf, &LocalFileTime);
          FileTimeToSystemTime(&LocalFileTime, (LPSYSTEMTIME)(a3 + 120));
          sub_10001B70(
            (wchar_t *)L"CWinVerifyTrust : TimeStamp = %.2d/%.2d/%.4d at %.2d:%.2d:%.2d",
            *(unsigned __int16 *)(a3 + 126));
LABEL_16:
          v13 = v25;
          break;
        }
        if ( ++v23 >= (signed int)v11->csSigners )
          goto LABEL_16;
      }
    }
    CertGetNameStringW(v13->pasCertChain->pCert, 5u, 1u, nullptr, pszNameString, 0x190u);
    sub_10003390(pszNameString, (_DWORD *)a3, wcslen(pszNameString));
    CertGetNameStringW(v13->pasCertChain->pCert, 5u, 0, nullptr, pszNameString, 0x190u);
    sub_10003390(pszNameString, (_DWORD *)(a3 + 28), wcslen(pszNameString));
    memset(pszNameString, 0, 0x190u);
    memcpy_0(pszNameString, v13->psSigner->SerialNumber.pbData, v13->psSigner->SerialNumber.cbData);
    sub_10003390(pszNameString, (_DWORD *)(a3 + 56), wcslen(pszNameString));
    sub_10019510(*(void **)(*(_DWORD *)(a3 + 108) + 4));
    *(_DWORD *)(*(_DWORD *)(a3 + 108) + 4) = *(_DWORD *)(a3 + 108);
    v16 = *(_DWORD **)(a3 + 108);
    *(_DWORD *)(a3 + 112) = 0;
    *v16 = v16;
    *(_DWORD *)(*(_DWORD *)(a3 + 108) + 8) = *(_DWORD *)(a3 + 108);
    pasCertChain = v25->pasCertChain;
    v26 = 0;
    if ( v25->csCertChain != 0 )
    {
      p_pCert = &pasCertChain->pCert;
      do
      {
        pCertInfo = (*p_pCert)->pCertInfo;
        CertNameToStrW(0x10001u, &pCertInfo->Issuer, 3u, pszNameString, 0x190u);
        v19 = (_DWORD *)sub_10019160(&v26);
        sub_10003390(pszNameString, v19, wcslen(pszNameString));
        CertNameToStrW(0x10001u, &pCertInfo->Subject, 3u, pszNameString, 0x190u);
        v20 = (_DWORD *)(sub_10019160(&v26) + 28);
        sub_10003390(pszNameString, v20, wcslen(pszNameString));
        memcpy_0(pszNameString, pCertInfo->SerialNumber.pbData, pCertInfo->SerialNumber.cbData);
        memset(pszNameString, 0, 0x190u);
        v21 = (_DWORD *)(sub_10019160(&v26) + 56);
        sub_10003390(pszNameString, v21, wcslen(pszNameString));
        p_pCert += 15;
        ++v26;
      }
      while ( v26 < v25->csCertChain );
      v4 = v27;
    }
    v9 = v28;
    *(_DWORD *)(v4 + 116) = 1;
  }
  pWVTData[7] = HANDLE_FLAG_PROTECT_FROM_CLOSE;
  WinVerifyTrust(nullptr, &pgActionID, pWVTData);
  return v9;
}

// Address: 0x10019050
int __usercall sub_10019050@<eax>(int a1@<ebx>, const WCHAR *a2@<esi>)
{
  HCATADMIN phCatAdmin; // [esp+10h] [ebp-23Ch] BYREF
  void *v4[3]; // [esp+14h] [ebp-238h] BYREF
  void *v5; // [esp+20h] [ebp-22Ch]
  int v6; // [esp+24h] [ebp-228h]
  int v7; // [esp+28h] [ebp-224h]
  int v8; // [esp+2Ch] [ebp-220h] BYREF
  __int16 v9; // [esp+30h] [ebp-21Ch]
  _BYTE v10[518]; // [esp+32h] [ebp-21Ah] BYREF
  int v11; // [esp+248h] [ebp-4h]

  phCatAdmin = nullptr;
  if ( !CryptCATAdminAcquireContext(&phCatAdmin, nullptr, 0) )
    return 0;
  sub_10002B00(v4);
  v11 = 0;
  if ( a2 != nullptr && sub_10018AA0(a2, (int)v4) )
  {
    v8 = 524;
    v9 = 0;
    memset(v10, 0, sizeof(v10));
    sub_10018B20((int)v4, (int)&v8, a1, (int)a2);
  }
  CryptCATAdminReleaseContext(phCatAdmin, 0);
  if ( v5 != nullptr )
    operator delete(v5);
  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  operator delete(v4[0]);
  return 1;
}

// Address: 0x10019160
int *__thiscall sub_10019160(int **this, int *a2)
{
  int *v2; // edx
  int *v4; // ecx
  int *v5; // eax
  int *v6; // ebx
  int *v7; // ebp
  int v8; // edi
  int **v9; // eax
  _BYTE v11[4]; // [esp+14h] [ebp-C4h] BYREF
  int *v12; // [esp+18h] [ebp-C0h]
  _BYTE v13[4]; // [esp+1Ch] [ebp-BCh] BYREF
  __int16 v14; // [esp+20h] [ebp-B8h]
  int v15; // [esp+30h] [ebp-A8h]
  int v16; // [esp+34h] [ebp-A4h]
  __int16 v17; // [esp+3Ch] [ebp-9Ch]
  int v18; // [esp+4Ch] [ebp-8Ch]
  int v19; // [esp+50h] [ebp-88h]
  __int16 v20; // [esp+58h] [ebp-80h]
  int v21; // [esp+68h] [ebp-70h]
  int v22; // [esp+6Ch] [ebp-6Ch]
  int v23; // [esp+70h] [ebp-68h] BYREF
  _BYTE v24[88]; // [esp+74h] [ebp-64h] BYREF
  int v25; // [esp+D4h] [ebp-4h]

  v2 = a2;
  v4 = *(this + 6);
  v5 = (int *)v4[1];
  v6 = v4;
  while ( *((_BYTE *)v5 + 101) == 0 )
  {
    if ( v5[3] >= (unsigned int)*a2 )
    {
      v6 = v5;
      v5 = (int *)*v5;
    }
    else
    {
      v5 = (int *)v5[2];
    }
  }
  v7 = *this;
  v8 = 0;
  v12 = *(this + 6);
  if ( v7 == nullptr )
  {
    _invalid_parameter_noinfo();
    v2 = a2;
    v8 = 0;
  }
  if ( v6 == v12 || *v2 < (unsigned int)v6[3] )
  {
    v16 = 7;
    v19 = 7;
    v22 = 7;
    v15 = 0;
    v14 = 0;
    v18 = 0;
    v17 = 0;
    v21 = 0;
    v20 = 0;
    v25 = 0;
    v23 = *v2;
    sub_10019590(v24);
    LOBYTE(v25) = 1;
    v9 = (int **)sub_10019330(v11, &v23, v7, v6);
    v7 = *v9;
    v6 = v9[1];
    sub_100189B0((int)v24);
    sub_100189B0((int)v13);
    v8 = 0;
  }
  if ( v7 != nullptr )
    v8 = *v7;
  else
    _invalid_parameter_noinfo();
  if ( v6 == *(int **)(v8 + 24) )
    _invalid_parameter_noinfo();
  return v6 + 4;
}

// Address: 0x100192B0
_DWORD *__stdcall sub_100192B0(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v2; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  v2 = sub_10019DF0();
  a1[6] = v2;
  *(_BYTE *)(v2 + 101) = 1;
  *(_DWORD *)(a1[6] + 4) = a1[6];
  *(_DWORD *)a1[6] = a1[6];
  *(_DWORD *)(a1[6] + 8) = a1[6];
  a1[7] = 0;
  return a1;
}

// Address: 0x10019330
_DWORD *__userpurge sub_10019330@<eax>(int *a1@<eax>, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int *v6; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // esi
  bool v13; // cf
  int v14; // edx
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // [esp+14h] [ebp-18h] BYREF
  int v18; // [esp+18h] [ebp-14h]
  _DWORD v19[4]; // [esp+1Ch] [ebp-10h] BYREF

  v6 = (int *)a1[6];
  if ( a1[7] == 0 )
    goto LABEL_2;
  v8 = a4;
  v9 = *v6;
  if ( a4 == 0 || a4 != *a1 )
  {
    _invalid_parameter_noinfo();
    v8 = a4;
  }
  v10 = a5;
  if ( a5 == v9 )
  {
    v11 = a3;
    if ( *a3 < *(_DWORD *)(a5 + 12) )
    {
LABEL_2:
      sub_10019810(a2, 1, a3);
      return a2;
    }
    goto LABEL_30;
  }
  v12 = a1[6];
  if ( v8 == 0 || v8 != *a1 )
  {
    _invalid_parameter_noinfo();
    v10 = a5;
    v8 = a4;
  }
  if ( v10 == v12 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1[6] + 8) + 12) < *a3 )
    {
      sub_10019810(a2, 0, a3);
      return a2;
    }
    goto LABEL_29;
  }
  v13 = *(_DWORD *)(v10 + 12) < *a3;
  if ( *(_DWORD *)(v10 + 12) > *a3 )
  {
    v17 = v8;
    v18 = v10;
    sub_10019ED0();
    if ( *(_DWORD *)(v18 + 12) < *a3 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(v18 + 8) + 101) != 0 )
        sub_10019810(a2, 0, a3);
      else
        sub_10019810(a2, 1, a3);
      return a2;
    }
    v10 = a5;
    v8 = a4;
    v13 = *(_DWORD *)(a5 + 12) < *a3;
  }
  if ( !v13
    || (v14 = *a1, v18 = v10,
                   v15 = a1[6],
                   v17 = v8,
                   v19[1] = v15,
                   v19[0] = v14,
                   sub_10019F50(),
                   !sub_10012BB0(&v17, v19))
    && *a3 >= *(_DWORD *)(v18 + 12) )
  {
LABEL_29:
    v11 = a3;
LABEL_30:
    v16 = (_DWORD *)sub_10019630(v19, v11);
    *a2 = *v16;
    a2[1] = v16[1];
    return a2;
  }
  if ( *(_BYTE *)(*(_DWORD *)(a5 + 8) + 101) != 0 )
    sub_10019810(a2, 0, a3);
  else
    sub_10019810(a2, 1, a3);
  return a2;
}

// Address: 0x10019510
void __stdcall sub_10019510(void **a1)
{
  void **v1; // ebx
  void **i; // edi

  v1 = a1;
  for ( i = a1; *((_BYTE *)i + 101) == 0; v1 = i )
  {
    sub_10019510(i[2]);
    i = (void **)*i;
    sub_100189B0((int)(v1 + 4));
    operator delete(v1);
  }
}

// Address: 0x10019550
int __usercall sub_10019550@<eax>(_DWORD *a1@<esi>)
{
  _BYTE v2[8]; // [esp+0h] [ebp-8h] BYREF

  sub_10019730(v2, *a1, *(_DWORD *)a1[6], *a1, a1[6]);
  operator delete((void *)a1[6]);
  a1[6] = 0;
  a1[7] = 0;
  return 0;
}

// Address: 0x10019590
int __userpurge sub_10019590@<eax>(_DWORD *a1@<edi>, int a2)
{
  *(_DWORD *)(a2 + 24) = 7;
  *(_DWORD *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 4) = 0;
  sub_100032E0(a1, a2, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 52) = 7;
  *(_DWORD *)(a2 + 48) = 0;
  *(_WORD *)(a2 + 32) = 0;
  sub_100032E0(a1 + 7, a2 + 28, 0, 0xFFFFFFFF);
  *(_DWORD *)(a2 + 80) = 7;
  *(_DWORD *)(a2 + 76) = 0;
  *(_WORD *)(a2 + 60) = 0;
  sub_100032E0(a1 + 14, a2 + 56, 0, 0xFFFFFFFF);
  return a2;
}

// Address: 0x10019630
int __userpurge sub_10019630@<eax>(int *a1@<ebx>, int a2, unsigned int *a3)
{
  int *v4; // edi
  int *v5; // eax
  bool v6; // cl
  unsigned int v7; // edx
  int v8; // eax
  int *v9; // edx
  int *v10; // esi
  int *v11; // eax
  int v12; // edx
  _DWORD *v14; // eax
  int v15; // [esp+10h] [ebp-Ch] BYREF
  int *v16; // [esp+14h] [ebp-8h]
  char v17; // [esp+20h] [ebp+4h]

  v4 = (int *)a1[6];
  v5 = (int *)v4[1];
  v6 = true;
  v17 = 1;
  if ( *((_BYTE *)v5 + 101) == 0 )
  {
    v7 = *a3;
    do
    {
      v4 = v5;
      v6 = v7 < v5[3];
      v17 = v6;
      if ( v7 >= v5[3] )
        v5 = (int *)v5[2];
      else
        v5 = (int *)*v5;
    }
    while ( *((_BYTE *)v5 + 101) == 0 );
  }
  v8 = *a1;
  v9 = v4;
  v16 = v4;
  v15 = v8;
  if ( v6 )
  {
    v10 = *(int **)a1[6];
    if ( v8 == 0 )
      _invalid_parameter_noinfo();
    if ( v4 == v10 )
    {
      v11 = (int *)sub_10019810(&v15, 1, a3);
      v12 = *v11;
      *(_DWORD *)(a2 + 4) = v11[1];
      *(_DWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 1;
      return a2;
    }
    sub_10019ED0();
    v9 = v16;
    v8 = v15;
  }
  if ( v9[3] >= *a3 )
  {
    *(_DWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    v14 = (_DWORD *)sub_10019810(&v15, v17, a3);
    v9 = (int *)v14[1];
    *(_DWORD *)a2 = *v14;
    *(_BYTE *)(a2 + 8) = 1;
  }
  *(_DWORD *)(a2 + 4) = v9;
  return a2;
}

// Address: 0x10019730
_DWORD *__userpurge sub_10019730@<eax>(int a1@<eax>, _DWORD *a2, int a3, void *a4, int a5, void *a6)
{
  int v6; // ebx
  void *v8; // esi
  int v9; // eax
  void *v10; // esi
  _DWORD *v11; // eax
  int v13; // edx
  int v14; // [esp+10h] [ebp-8h] BYREF

  v6 = a3;
  v8 = **(void ***)(a1 + 24);
  v9 = *(_DWORD *)a1;
  if ( a3 == 0 || a3 != v9 )
  {
    _invalid_parameter_noinfo();
    v6 = a3;
  }
  if ( a4 != v8 )
    goto LABEL_13;
  v10 = *(void **)(a1 + 24);
  if ( a5 == 0 || a5 != *(_DWORD *)a1 )
  {
    _invalid_parameter_noinfo();
    v6 = a3;
  }
  if ( a6 == v10 )
  {
    sub_10019510(*(void ***)(*(_DWORD *)(a1 + 24) + 4));
    *(_DWORD *)(*(_DWORD *)(a1 + 24) + 4) = *(_DWORD *)(a1 + 24);
    v11 = *(_DWORD **)(a1 + 24);
    *(_DWORD *)(a1 + 28) = 0;
    *v11 = v11;
    *(_DWORD *)(*(_DWORD *)(a1 + 24) + 8) = *(_DWORD *)(a1 + 24);
    v13 = *(_DWORD *)a1;
    a2[1] = **(_DWORD **)(a1 + 24);
    *a2 = v13;
    return a2;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      if ( v6 == 0 || v6 != a5 )
      {
        _invalid_parameter_noinfo();
        LOBYTE(v6) = a3;
      }
      if ( a4 == a6 )
        break;
      sub_10019F50();
      sub_10019A50(a1, (int)&v14, v6, a4);
      v6 = a3;
    }
    *a2 = *(_DWORD *)a1;
    a2[1] = a4;
    return a2;
  }
}

// Address: 0x10019810
_DWORD *__userpurge sub_10019810@<eax>(int a1@<edx>, _DWORD *a2@<ecx>, int *a3@<edi>, _DWORD *a4, char a5, int a6)
{
  int v7; // eax
  int v8; // ebp
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  int i; // esi
  int v14; // ecx
  int *v15; // edx
  int v16; // edx
  _DWORD *v17; // ecx
  int v18; // edx
  _DWORD *v19; // edx
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  int v22; // edx
  int v23; // edx
  _DWORD *v24; // edx
  int v25; // edx
  _DWORD *v26; // edx
  int v28; // ecx
  _BYTE v29[20]; // [esp+14h] [ebp-54h] BYREF
  int v30; // [esp+28h] [ebp-40h]
  int v31; // [esp+2Ch] [ebp-3Ch]
  _DWORD pExceptionObject[14]; // [esp+30h] [ebp-38h] BYREF

  if ( (unsigned int)a3[7] >= 0x2E8BA2D )
  {
    v31 = 15;
    v30 = 0;
    v29[4] = 0;
    sub_10001A30((int)v29, a1, "map/set<T> too long", (char *)0x13);
    pExceptionObject[13] = 0;
    sub_10001050(pExceptionObject, (int)v29);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  v7 = sub_10019E30(a3[6], a2, a3[6]);
  ++a3[7];
  v8 = v7;
  v9 = (_DWORD *)a3[6];
  if ( a2 == v9 )
  {
    v9[1] = v8;
    *(_DWORD *)a3[6] = v8;
    v10 = a3[6];
LABEL_9:
    *(_DWORD *)(v10 + 8) = v8;
    goto LABEL_10;
  }
  if ( a5 == 0 )
  {
    a2[2] = v8;
    v10 = a3[6];
    if ( a2 != *(_DWORD **)(v10 + 8) )
      goto LABEL_10;
    goto LABEL_9;
  }
  *a2 = v8;
  v11 = (_DWORD *)a3[6];
  if ( a2 == (_DWORD *)*v11 )
    *v11 = v8;
LABEL_10:
  v12 = (int *)(v8 + 4);
  for ( i = v8; *(_BYTE *)(*(_DWORD *)(i + 4) + 100) == 0; v12 = (int *)(i + 4) )
  {
    v14 = *v12;
    v15 = *(int **)(*v12 + 4);
    if ( *v12 == *v15 )
    {
      v16 = v15[2];
      if ( *(_BYTE *)(v16 + 100) != 0 )
      {
        if ( i == *(_DWORD *)(v14 + 8) )
        {
          i = *v12;
          v17 = *(_DWORD **)(v14 + 8);
          *(_DWORD *)(*v12 + 8) = *v17;
          if ( *(_BYTE *)(*v17 + 101) == 0 )
            *(_DWORD *)(*v17 + 4) = i;
          v12 = (int *)(i + 4);
          v17[1] = *(_DWORD *)(i + 4);
          v18 = a3[6];
          if ( i == *(_DWORD *)(v18 + 4) )
          {
            *(_DWORD *)(v18 + 4) = v17;
          }
          else
          {
            v19 = (_DWORD *)*v12;
            if ( i == *(_DWORD *)*v12 )
              *v19 = v17;
            else
              v19[2] = v17;
          }
          *v17 = i;
          *v12 = (int)v17;
        }
        *(_BYTE *)(*v12 + 100) = 1;
        *(_BYTE *)(*(_DWORD *)(*v12 + 4) + 100) = 0;
        v20 = *(_DWORD **)(*v12 + 4);
        v21 = (_DWORD *)*v20;
        *v20 = *(_DWORD *)(*v20 + 8);
        v22 = v21[2];
        if ( *(_BYTE *)(v22 + 101) == 0 )
          *(_DWORD *)(v22 + 4) = v20;
        v21[1] = v20[1];
        v23 = a3[6];
        if ( v20 == *(_DWORD **)(v23 + 4) )
        {
          *(_DWORD *)(v23 + 4) = v21;
          v21[2] = v20;
        }
        else
        {
          v24 = (_DWORD *)v20[1];
          if ( v20 == (_DWORD *)v24[2] )
            v24[2] = v21;
          else
            *v24 = v21;
          v21[2] = v20;
        }
LABEL_42:
        v20[1] = v21;
        continue;
      }
    }
    else
    {
      v16 = *v15;
      if ( *(_BYTE *)(v16 + 100) != 0 )
      {
        if ( i == *(_DWORD *)v14 )
        {
          i = *v12;
          sub_10019DA0(a3);
        }
        *(_BYTE *)(*(_DWORD *)(i + 4) + 100) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4) + 4) + 100) = 0;
        v20 = *(_DWORD **)(*(_DWORD *)(i + 4) + 4);
        v21 = (_DWORD *)v20[2];
        v20[2] = *v21;
        if ( *(_BYTE *)(*v21 + 101) == 0 )
          *(_DWORD *)(*v21 + 4) = v20;
        v21[1] = v20[1];
        v25 = a3[6];
        if ( v20 == *(_DWORD **)(v25 + 4) )
        {
          *(_DWORD *)(v25 + 4) = v21;
        }
        else
        {
          v26 = (_DWORD *)v20[1];
          if ( v20 == (_DWORD *)*v26 )
            *v26 = v21;
          else
            v26[2] = v21;
        }
        *v21 = v20;
        goto LABEL_42;
      }
    }
    *(_BYTE *)(v14 + 100) = 1;
    *(_BYTE *)(v16 + 100) = 1;
    *(_BYTE *)(*(_DWORD *)(*v12 + 4) + 100) = 0;
    i = *(_DWORD *)(*v12 + 4);
  }
  *(_BYTE *)(*(_DWORD *)(a3[6] + 4) + 100) = 1;
  v28 = *a3;
  a4[1] = v8;
  *a4 = v28;
  return a4;
}

// Address: 0x10019A50
_DWORD *__fastcall sub_10019A50(int a1, int a2, int *a3, _DWORD *a4, char a5, _BYTE *a6)
{
  int **v6; // edi
  int *v7; // esi
  int v8; // eax
  _DWORD *v9; // edx
  int *i; // ecx
  int *v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  _BYTE v17[20]; // [esp+14h] [ebp-50h] BYREF
  int v18; // [esp+28h] [ebp-3Ch]
  int v19; // [esp+2Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+30h] [ebp-34h] BYREF

  if ( a6[101] != 0 )
  {
    v19 = 15;
    v18 = 0;
    v17[4] = 0;
    sub_10001A30((int)v17, a2, "invalid map/set<T> iterator", (char *)0x1B);
    pExceptionObject[12] = 0;
    sub_10001050(pExceptionObject, (int)v17);
    pExceptionObject[0] = &std::out_of_range::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  sub_10019F50();
  if ( *(_BYTE *)(*(_DWORD *)a6 + 101) != 0 )
  {
    v6 = *((int ***)a6 + 2);
  }
  else if ( *(_BYTE *)(*((_DWORD *)a6 + 2) + 101) != 0 )
  {
    v6 = *(int ***)a6;
  }
  else
  {
    v6 = *((int ***)a6 + 2);
  }
  v7 = *((int **)a6 + 1);
  if ( *((_BYTE *)v6 + 101) == 0 )
    v6[1] = v7;
  v8 = a3[6];
  if ( *(_BYTE **)(v8 + 4) == a6 )
  {
    *(_DWORD *)(v8 + 4) = v6;
  }
  else if ( (_BYTE *)*v7 == a6 )
  {
    *v7 = (int)v6;
  }
  else
  {
    v7[2] = (int)v6;
  }
  v9 = (_DWORD *)a3[6];
  if ( (_BYTE *)*v9 == a6 )
  {
    if ( *((_BYTE *)v6 + 101) != 0 )
    {
      i = v7;
    }
    else
    {
      v11 = *v6;
      for ( i = (int *)v6; *((_BYTE *)v11 + 101) == 0; v11 = (int *)*v11 )
        i = v11;
    }
    *v9 = i;
  }
  v12 = a3[6];
  if ( *(_BYTE **)(v12 + 8) == a6 )
  {
    if ( *((_BYTE *)v6 + 101) != 0 )
      *(_DWORD *)(v12 + 8) = v7;
    else
      *(_DWORD *)(v12 + 8) = sub_10019FC0();
  }
  if ( a6[100] == 1 )
  {
    for ( ; v6 != *(int ***)(a3[6] + 4); v7 = (int *)v7[1] )
    {
      if ( *((_BYTE *)v6 + 100) != 1 )
        break;
      v13 = *v7;
      if ( v6 == (int **)*v7 )
      {
        v13 = v7[2];
        if ( *(_BYTE *)(v13 + 100) == 0 )
        {
          *(_BYTE *)(v13 + 100) = 1;
          *((_BYTE *)v7 + 100) = 0;
          sub_10019D50(a3);
          v13 = v7[2];
        }
        if ( *(_BYTE *)(v13 + 101) != 0 )
          goto LABEL_43;
        if ( *(_BYTE *)(*(_DWORD *)v13 + 100) != 1 || *(_BYTE *)(*(_DWORD *)(v13 + 8) + 100) != 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)(v13 + 8) + 100) == 1 )
          {
            *(_BYTE *)(*(_DWORD *)v13 + 100) = 1;
            *(_BYTE *)(v13 + 100) = 0;
            sub_10019DA0(a3);
            v13 = v7[2];
          }
          *(_BYTE *)(v13 + 100) = *((_BYTE *)v7 + 100);
          *((_BYTE *)v7 + 100) = 1;
          *(_BYTE *)(*(_DWORD *)(v13 + 8) + 100) = 1;
          sub_10019D50(a3);
          break;
        }
      }
      else
      {
        if ( *(_BYTE *)(v13 + 100) == 0 )
        {
          *(_BYTE *)(v13 + 100) = 1;
          *((_BYTE *)v7 + 100) = 0;
          sub_10019DA0(a3);
          v13 = *v7;
        }
        if ( *(_BYTE *)(v13 + 101) != 0 )
          goto LABEL_43;
        if ( *(_BYTE *)(*(_DWORD *)(v13 + 8) + 100) != 1 || *(_BYTE *)(*(_DWORD *)v13 + 100) != 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)v13 + 100) == 1 )
          {
            *(_BYTE *)(*(_DWORD *)(v13 + 8) + 100) = 1;
            *(_BYTE *)(v13 + 100) = 0;
            sub_10019D50(a3);
            v13 = *v7;
          }
          *(_BYTE *)(v13 + 100) = *((_BYTE *)v7 + 100);
          *((_BYTE *)v7 + 100) = 1;
          *(_BYTE *)(*(_DWORD *)v13 + 100) = 1;
          sub_10019DA0(a3);
          break;
        }
      }
      *(_BYTE *)(v13 + 100) = 0;
LABEL_43:
      v6 = (int **)v7;
    }
    *((_BYTE *)v6 + 100) = 1;
  }
  sub_100189B0((int)(a6 + 16));
  operator delete(a6);
  v14 = a3[7];
  if ( v14 != 0 )
    a3[7] = v14 - 1;
  v15 = *a3;
  a4[1] = a6;
  *a4 = v15;
  return a4;
}

// Address: 0x10019D50
_DWORD *__thiscall sub_10019D50(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // edx
  _DWORD *v4; // edx

  result = (_DWORD *)*(this + 2);
  *(this + 2) = *result;
  if ( *(_BYTE *)(*result + 101) == 0 )
    *(_DWORD *)(*result + 4) = this;
  result[1] = *(this + 1);
  v3 = *(_DWORD *)(a2 + 24);
  if ( this == *(_DWORD **)(v3 + 4) )
  {
    *(_DWORD *)(v3 + 4) = result;
    *result = this;
    *(this + 1) = result;
  }
  else
  {
    v4 = (_DWORD *)*(this + 1);
    if ( this == (_DWORD *)*v4 )
      *v4 = result;
    else
      v4[2] = result;
    *result = this;
    *(this + 1) = result;
  }
  return result;
}

// Address: 0x10019DA0
int __thiscall sub_10019DA0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx
  _DWORD *v5; // edx

  result = *this;
  *this = *(_DWORD *)(*this + 8);
  v3 = *(_DWORD *)(result + 8);
  if ( *(_BYTE *)(v3 + 101) == 0 )
    *(_DWORD *)(v3 + 4) = this;
  *(_DWORD *)(result + 4) = *(this + 1);
  v4 = *(_DWORD *)(a2 + 24);
  if ( this == *(_DWORD **)(v4 + 4) )
  {
    *(_DWORD *)(v4 + 4) = result;
    *(_DWORD *)(result + 8) = this;
    *(this + 1) = result;
  }
  else
  {
    v5 = (_DWORD *)*(this + 1);
    if ( this == (_DWORD *)v5[2] )
      v5[2] = result;
    else
      *v5 = result;
    *(_DWORD *)(result + 8) = this;
    *(this + 1) = result;
  }
  return result;
}

// Address: 0x10019DF0
_DWORD *sub_10019DF0()
{
  _DWORD *result; // eax

  result = operator new(0x68u);
  if ( result != nullptr )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 100) = 1;
  *((_BYTE *)result + 101) = 0;
  return result;
}

// Address: 0x10019E30
_DWORD *__thiscall sub_10019E30(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // esi
  int v7; // [esp+0h] [ebp-24h] BYREF
  void *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v9 = &v7;
  v5 = operator new(0x68u);
  v8 = v5;
  v10 = 1;
  if ( v5 != nullptr )
  {
    v5[1] = a3;
    *v5 = a2;
    v5[2] = a4;
    v5[3] = *this;
    sub_10019590(this + 1, (int)(v5 + 4));
    *((_BYTE *)v5 + 100) = 0;
    *((_BYTE *)v5 + 101) = 0;
  }
  return v5;
}

// Address: 0x10019ED0
void __usercall sub_10019ED0(_DWORD *a1@<esi>)
{
  int *v1; // eax
  int v2; // eax
  int v3; // ecx
  int j; // eax
  int i; // eax

  if ( *a1 == 0 )
    _invalid_parameter_noinfo();
  v1 = (int *)a1[1];
  if ( *((_BYTE *)v1 + 101) != 0 )
  {
    v2 = v1[2];
    a1[1] = v2;
    if ( *(_BYTE *)(v2 + 101) == 0 )
      return;
    goto LABEL_5;
  }
  v3 = *v1;
  if ( *(_BYTE *)(*v1 + 101) != 0 )
  {
    for ( i = v1[1]; *(_BYTE *)(i + 101) == 0; i = *(_DWORD *)(i + 4) )
    {
      if ( a1[1] != *(_DWORD *)i )
        break;
      a1[1] = i;
    }
    if ( *(_BYTE *)(a1[1] + 101) != 0 )
    {
LABEL_5:
      _invalid_parameter_noinfo();
      return;
    }
    a1[1] = i;
  }
  else
  {
    for ( j = *(_DWORD *)(v3 + 8); *(_BYTE *)(j + 101) == 0; j = *(_DWORD *)(j + 8) )
      v3 = j;
    a1[1] = v3;
  }
}

// Address: 0x10019F50
void __usercall sub_10019F50(_DWORD *a1@<esi>)
{
  int v1; // eax
  int **v2; // ecx
  int *j; // eax
  int i; // eax

  if ( *a1 == 0 )
    _invalid_parameter_noinfo();
  v1 = a1[1];
  if ( *(_BYTE *)(v1 + 101) != 0 )
  {
    _invalid_parameter_noinfo();
  }
  else
  {
    v2 = *(int ***)(v1 + 8);
    if ( *((_BYTE *)v2 + 101) != 0 )
    {
      for ( i = *(_DWORD *)(v1 + 4); *(_BYTE *)(i + 101) == 0; i = *(_DWORD *)(i + 4) )
      {
        if ( a1[1] != *(_DWORD *)(i + 8) )
          break;
        a1[1] = i;
      }
      a1[1] = i;
    }
    else
    {
      for ( j = *v2; *((_BYTE *)j + 101) == 0; j = (int *)*j )
        v2 = (int **)j;
      a1[1] = v2;
    }
  }
}

// Address: 0x10019FC0
int __usercall sub_10019FC0@<eax>(int result@<eax>)
{
  int i; // ecx

  for ( i = *(_DWORD *)(result + 8); *(_BYTE *)(i + 101) == 0; i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}

// Address: 0x10019FDC
void __cdecl __noreturn sub_10019FDC()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10001820((int)v1, "string too long");
  v2 = 0;
  sub_10001120(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x1001A014
void __noreturn sub_1001A014()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10001820((int)v1, "invalid string position");
  v2 = 0;
  sub_1000F6A0(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// Address: 0x1001A04C
void *__cdecl operator new[](size_t a1)
{
  return operator new(a1);
}

// Address: 0x1001A057
const char *sub_1001A057()
{
  return "bad function call";
}

// Address: 0x1001A05D
// attributes: thunk
int __thiscall sub_1001A05D(void *this)
{
  return sub_1001A1EF(this);
}

// Address: 0x1001A062
void __cdecl __noreturn std::tr1::_Xfunc()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_1001A111(pExceptionObject);
  pExceptionObject[0] = &std::tr1::bad_function_call::`vftable';
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_function_call_tr1_std__);
}

// Address: 0x1001A088
std::exception *__thiscall sub_1001A088(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::tr1::bad_function_call::`vftable';
  return this;
}

// Address: 0x1001A0A5
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x1001A0B4
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

// Address: 0x1001A111
_DWORD *__thiscall sub_1001A111(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = &std::exception::`vftable';
  return this;
}

// Address: 0x1001A122
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

// Address: 0x1001A175
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

// Address: 0x1001A192
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

// Address: 0x1001A1EF
void __thiscall sub_1001A1EF(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}

// Address: 0x1001A205
const char *__thiscall exception::what(exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x1001A212
void *__thiscall sub_1001A212(void *this, char a2)
{
  sub_1001A1EF(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1001A233
int __cdecl sub_1001A233(int a1)
{
  dword_100C6220 = a1;
  return a1;
}

// Address: 0x1001A242
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
    sub_1001BE50(2);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x1001A36A
int __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))_decode_pointer(dword_100C6220);
  if ( v5 == nullptr )
  {
    sub_1001BE50(2);
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v5();
}

// Address: 0x1001A390
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x1001A3A0
void __cdecl operator delete(void *Block)
{
  free(Block);
}

// Address: 0x1001A3AB
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

// Address: 0x1001A428
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
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return v4;
}

// Address: 0x1001A4A5
void __thiscall sub_1001A4A5(struct type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable';
  type_info::_Type_info_dtor(this);
}

// Address: 0x1001A4B5
struct type_info *__thiscall sub_1001A4B5(struct type_info *this, char a2)
{
  sub_1001A4A5(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1001A4D6
BOOL __thiscall type_info::operator==(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0;
}

// Address: 0x1001A4F6
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

// Address: 0x1001A565
std::bad_alloc *__thiscall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  std::exception::exception(this, (const char *const *)&off_1003A054, 1);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x1001A580
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
      if ( (dword_100C6230 & 1) == 0 )
      {
        dword_100C6230 |= 1u;
        std::bad_alloc::bad_alloc((std::bad_alloc *)&dword_100C6224);
        atexit(sub_1002C9ED);
      }
      sub_10001B10((std::exception *)pExceptionObject, (struct std::exception *)&dword_100C6224);
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  return result;
}

// Address: 0x1001A5E5
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

  v1 = (_DWORD *)_decode_pointer(dword_100C7E44);
  Block = v1;
  v2 = (_DWORD *)_decode_pointer(dword_100C7E40);
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
        dword_100C7E40 = _encode_pointer(v3 + 1);
        return a1;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = _realloc_crt(Block, v7)) != 0 || v5 + 16 >= v5 && (v8 = _realloc_crt(Block, v5 + 16)) != 0 )
      {
        v3 = (_DWORD *)(v8 + 4 * (v4 >> 2));
        dword_100C7E44 = _encode_pointer(v8);
        goto LABEL_11;
      }
    }
  }
  return 0;
}

// Address: 0x1001A69F
int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(0x20u, 4);
  dword_100C7E44 = _encode_pointer(v0);
  dword_100C7E40 = dword_100C7E44;
  if ( v0 == nullptr )
    return 24;
  *v0 = 0;
  return 0;
}

// Address: 0x1001A6D0
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock((int)Func);
  _unlockexit(268543741);
  return v2;
}

// Address: 0x1001A70C
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x1001A723
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
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  if ( a3 != 0 && a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
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

// Address: 0x1001A81B
int __cdecl _vswprintf_c_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax

  result = _vswprintf_helper(
             (int (__cdecl *)(FILE *, int, int, int))_woutput_l,
             (char *)Buffer,
             BufferCount,
             (int)Format,
             (int)Locale,
             (int)ArgList);
  if ( result < 0 )
    return -1;
  return result;
}

// Address: 0x1001A845
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

// Address: 0x1001A8D0
int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [esp+14h] [ebp+14h] BYREF

  va_start(ArgList, Format);
  return _vswprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x1001A8EE
void __noreturn _purecall()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer(dword_100C68DC);
  if ( v0 != nullptr )
    v0();
  _NMSG_WRITE(25);
  _set_abort_behavior(0, 1u);
  abort();
}

// Address: 0x1001A918
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

// Address: 0x1001A9EC
int __cdecl _vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return _vsnwprintf_l(Buffer, BufferCount, Format, nullptr, Args);
}

// Address: 0x1001AA09
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

// Address: 0x1001AA40
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
    if ( *(_UNKNOWN **)this != off_1003A8D0 && (dword_1003A7EC & v3[28]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_1003A7EC & *(_DWORD *)(*((_DWORD *)this + 2) + 112)) == 0 )
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

// Address: 0x1001AAC7
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

// Address: 0x1001ABD8
int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // edi
  const wchar_t *v4; // edx
  wchar_t v5; // ax
  wchar_t v6; // cx
  wchar_t v7; // ax

  if ( dword_100C68FC != 0 )
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

// Address: 0x1001AC6B
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

// Address: 0x1001ACD3
int __usercall vscan_fn@<eax>(int a1@<esi>, int (__cdecl *a2)(int *, int, int, int), int a3, int a4, int a5)
{
  size_t v5; // eax
  const wchar_t *v7; // [esp+0h] [ebp-28h]
  int v8; // [esp+8h] [ebp-20h] BYREF
  int v9; // [esp+Ch] [ebp-1Ch]
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+14h] [ebp-14h]

  v5 = wcslen(v7);
  if ( a1 != 0 && a3 != 0 )
  {
    v11 = 73;
    v10 = a1;
    v8 = a1;
    if ( v5 <= 0x3FFFFFFF )
      v9 = 2 * v5;
    else
      v9 = 0x7FFFFFFF;
    return a2(&v8, a3, a4, a5);
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x1001AD43
int swscanf_s(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  return vscan_fn((int)Buffer, (int (__cdecl *)(int *, int, int, int))_winput_s_l, (int)Format, 0, (int)va);
}

// Address: 0x1001AD65
wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *result; // eax

  for ( result = (wchar_t *)Str; *result != 0; ++result )
  {
    if ( *result == Ch )
      return result;
  }
  if ( *result != Ch )
    return nullptr;
  return result;
}

// Address: 0x1001AD8B
void __cdecl srand(unsigned int Seed)
{
  *(_DWORD *)(_getptd() + 20) = Seed;
}

// Address: 0x1001AD9D
int __cdecl rand()
{
  int v0; // eax
  unsigned int v1; // ecx

  v0 = _getptd();
  v1 = 214013 * *(_DWORD *)(v0 + 20) + 2531011;
  *(_DWORD *)(v0 + 20) = v1;
  return HIWORD(v1) & 0x7FFF;
}

// Address: 0x1001ADBF
errno_t __cdecl wcsncpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  rsize_t v5; // ebx
  errno_t v6; // esi
  const wchar_t *v7; // edx
  wchar_t *v8; // eax
  wchar_t v9; // cx
  wchar_t v10; // cx

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
    if ( SizeInWords == 0 )
      return 0;
    goto LABEL_7;
  }
  v5 = SizeInWords;
  if ( SizeInWords == 0 )
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
  Destination[SizeInWords - 1] = 0;
  return 80;
}

// Address: 0x1001AE92
int __cdecl _tolower_l(int C, _locale_t Locale)
{
  struct __crt_locale_data *locinfo; // ecx
  int v4; // eax
  int result; // eax
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  __crt_locale_pointers v9; // [esp+8h] [ebp-18h] BYREF
  int v10; // [esp+10h] [ebp-10h]
  char v11; // [esp+14h] [ebp-Ch]
  WCHAR DestStr; // [esp+18h] [ebp-8h] BYREF
  CHAR MultiByteStr; // [esp+1Ch] [ebp-4h] BYREF
  char v14; // [esp+1Dh] [ebp-3h]
  char v15; // [esp+1Eh] [ebp-2h]
  int Ca; // [esp+28h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, (struct localeinfo_struct *)Locale);
  if ( (unsigned int)C >= 0x100 )
  {
    if ( *((int *)v9.locinfo + 43) > 1 && (Ca = C >> 8, _isleadbyte_l(BYTE1(C), &v9) != 0) )
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
           (struct localeinfo_struct *)&v9,
           *((_DWORD *)v9.locinfo + 5),
           0x100u,
           &MultiByteStr,
           (char *)v6,
           &DestStr,
           (char *)3,
           *((_DWORD *)v9.locinfo + 1),
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
    locinfo = v9.locinfo;
    if ( *((int *)v9.locinfo + 43) <= 1 )
    {
      v4 = *(_WORD *)(*((_DWORD *)v9.locinfo + 50) + 2 * C) & 1;
    }
    else
    {
      v4 = _isctype_l(C, 1, &v9);
      locinfo = v9.locinfo;
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

// Address: 0x1001AFA7
int __cdecl tolower(int C)
{
  int result; // eax

  if ( dword_100C68FC != 0 )
    return _tolower_l(C, nullptr);
  result = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return result;
}

// Address: 0x1001AFD3
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

// Address: 0x1001B034
void __cdecl free(void *Block)
{
  int v1; // eax
  int *v2; // esi
  DWORD LastError; // eax
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_100C7E38 != 3 )
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

// Address: 0x1001B0C2
int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = 0;
  if ( a1 <= dword_100C7E28 )
  {
    _lock(4);
    v2 = __sbh_alloc_block(a1);
    _unlock(4);
  }
  return v2;
}

// Address: 0x1001B111
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
      if ( dword_100C7E38 == 1 )
      {
        v2 = v1 != 0 ? v1 : 1;
        v3 = HeapAlloc(hHeap, 0, v2);
      }
      else if ( dword_100C7E38 != 3 || (v3 = (LPVOID)V6_HeapAlloc(v1)) == nullptr )
      {
        if ( v1 == 0 )
          v1 = 1;
        v3 = HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
      }
      v4 = v3;
      if ( v3 != nullptr )
        return v4;
      if ( dword_100C6A7C == 0 )
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

// Address: 0x1001B1DB
int __stdcall _CRT_INIT(int a1, int a2, int a3)
{
  int v4; // eax
  DWORD *v5; // esi
  int (__stdcall *v6)(int, int); // eax
  DWORD CurrentThreadId; // eax
  int v8; // [esp-8h] [ebp-10h]
  int v9; // [esp-4h] [ebp-Ch]

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
    sub_100223DE();
    dword_100C7E54 = (int)GetCommandLineA();
    dword_100C6238 = __crtGetEnvironmentStringsA();
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
    ++dword_100C6234;
  }
  else if ( a2 != 0 )
  {
    if ( a2 == 2 )
    {
      __set_flsgetvalue();
      v4 = _calloc_crt(1u, 532);
      v5 = (DWORD *)v4;
      if ( v4 == 0 )
        return 0;
      v9 = v4;
      v8 = dword_1003A1E0;
      v6 = (int (__stdcall *)(int, int))_decode_pointer(FlsSetValue);
      if ( v6(v8, v9) == 0 )
      {
        free(v5);
        return 0;
      }
      _initptd((int)v5, 0);
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
    if ( dword_100C6234 <= 0 )
      return 0;
    --dword_100C6234;
    if ( dword_100C65B8 == 0 )
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

// Address: 0x1001B310
BOOL __fastcall __DllMainCRTStartup(void *a1, DWORD a2, HINSTANCE hinstDLL)
{
  BOOL v5; // eax
  BOOL v7; // [esp+10h] [ebp-1Ch]

  if ( a2 == 0 && dword_100C6234 == 0 || (a2 == 1 || a2 == 2) && _CRT_INIT((int)hinstDLL, a2, (int)a1) == 0 )
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

// Address: 0x1001B406
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return __DllMainCRTStartup(lpReserved, fdwReason, hinstDLL);
}

// Address: 0x1001B430
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

// Address: 0x1001B4BB
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_1002D360, sizeof(dwExceptionCode));
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)pThrowInfo;
  if ( pThrowInfo != nullptr && (pThrowInfo->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}

// Address: 0x1001B507
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x1001B539
// ?_CallMemberFunction0@@YGXPAX0@Z
// doubtful name
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_1001B539(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x1001B540
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_27112, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x1001B594
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *a2,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(a2, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x1001B5CA
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

// Address: 0x1001B5FD
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

// Address: 0x1001B6D4
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

// Address: 0x1001B773
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

// Address: 0x1001B7E8
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 152);
  *(_DWORD *)(_getptd() + 152) = a1;
  return a1;
}

// Address: 0x1001B814
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

// Address: 0x1001B83B
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

// Address: 0x1001B88D
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x1001B8ED
_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1001B920
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1001B956
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

  dword_100C6350 = v0;
  dword_100C634C = v2;
  dword_100C6348 = v1;
  dword_100C6344 = v3;
  dword_100C6340 = v5;
  dword_100C633C = v4;
  word_100C6368 = __SS__;
  word_100C635C = __CS__;
  word_100C6338 = __DS__;
  word_100C6334 = __ES__;
  word_100C6330 = __FS__;
  word_100C632C = __GS__;
  v6 = __readeflags();
  dword_100C6360 = v6;
  dword_100C6354 = vars0;
  dword_100C6358 = retaddr;
  dword_100C6364 = (int)&v10;
  dword_100C62A0 = 65537;
  dword_100C6254 = retaddr;
  dword_100C6248 = -1073740791;
  dword_100C624C = 1;
  dword_100C6298 = IsDebuggerPresent();
  sub_1001BE50(1);
  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( dword_100C6298 == 0 )
    sub_1001BE50(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x1001BA60
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
         && dword_100C7D04 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 1001BABC case 0 }
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

// Address: 0x1001BDC5
int __cdecl _get_errno_from_oserr(int a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_1003A070[2 * i] )
      return dword_1003A074[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x1001BE07
int *__cdecl _errno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 8);
  else
    return (int *)&unk_1003A1D8;
}

// Address: 0x1001BE1A
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 12);
  else
    return (unsigned int *)&unk_1003A1DC;
}

// Address: 0x1001BE2D
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

// Address: 0x1001BE50
void sub_1001BE50()
{
  dword_100C7E50 = 0;
}

// Address: 0x1001BE60
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
  if ( (_BYTE)Val == 0 && Size >= 0x100 && dword_100C7D04 != 0 )
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

// Address: 0x1001BEDA
PVOID __cdecl _encode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1003A1E0 != -1
    && (v6 = dword_1003A1E0, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x1001BF4C
PVOID _encoded_null()
{
  return _encode_pointer(nullptr);
}

// Address: 0x1001BF55
PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1003A1E0 != -1
    && (v6 = dword_1003A1E0, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x1001BFC7
// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}

// Address: 0x1001BFD0
void *__set_flsgetvalue()
{
  void *Value; // esi

  Value = TlsGetValue(dwTlsIndex);
  if ( Value == nullptr )
  {
    Value = _decode_pointer(FlsGetValue);
    TlsSetValue(dwTlsIndex, Value);
  }
  return Value;
}

// Address: 0x1001C004
int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_1003A1E0 != -1 )
  {
    v2 = dword_1003A1E0;
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_100C6578);
    v0(v2);
    dword_1003A1E0 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}

// Address: 0x1001C041
int __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleW; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]
  int savedregs; // [esp+2Ch] [ebp+0h]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
  hModule = ModuleHandleW;
  *(_DWORD *)(a1 + 92) = &unk_1002DAE0;
  *(_DWORD *)(a1 + 20) = 1;
  if ( ModuleHandleW != nullptr )
  {
    *(_DWORD *)(a1 + 504) = GetProcAddress(ModuleHandleW, "EncodePointer");
    *(_DWORD *)(a1 + 508) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 200) = 67;
  *(_BYTE *)(a1 + 331) = 67;
  *(_DWORD *)(a1 + 104) = &unk_1003A2C8;
  _lock(13);
  InterlockedIncrement(*(volatile LONG **)(a1 + 104));
  _unlock(13);
  _lock(12);
  *(_DWORD *)(a1 + 108) = a2;
  if ( a2 == 0 )
    *(_DWORD *)(a1 + 108) = off_1003A8D0;
  __addlocaleref(*(volatile LONG **)(a1 + 108));
  savedregs = 268550410;
  return _unlock(12);
}

// Address: 0x1001C128
DWORD *_getptd_noexit()
{
  DWORD LastError; // eax
  DWORD v1; // edi
  int (__stdcall *v2)(int); // eax
  DWORD *v3; // esi
  int v4; // eax
  int (__stdcall *v5)(int, int); // eax
  DWORD CurrentThreadId; // eax
  int v8; // [esp-8h] [ebp-10h]
  int v9; // [esp-4h] [ebp-Ch]
  int v10; // [esp-4h] [ebp-Ch]

  LastError = GetLastError();
  v9 = dword_1003A1E0;
  v1 = LastError;
  v2 = (int (__stdcall *)(int))__set_flsgetvalue();
  v3 = (DWORD *)v2(v9);
  if ( v3 == nullptr )
  {
    v4 = _calloc_crt(1u, 532);
    v3 = (DWORD *)v4;
    if ( v4 != 0 )
    {
      v10 = v4;
      v8 = dword_1003A1E0;
      v5 = (int (__stdcall *)(int, int))_decode_pointer(FlsSetValue);
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

// Address: 0x1001C1A1
DWORD *_getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( v0 == nullptr )
    _amsg_exit(16);
  return v0;
}

// Address: 0x1001C1BB
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
    if ( *((_UNKNOWN **)Block + 23) != &unk_1002DAE0 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = *((void **)Block + 26);
    if ( v1 != nullptr && InterlockedDecrement(*((volatile LONG **)Block + 26)) == 0 && v1 != &unk_1003A2C8 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = *((_DWORD **)Block + 27);
    if ( v2 != nullptr )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != (_DWORD *)off_1003A8D0 && v2 != (_DWORD *)&unk_1003A7F8 && *v2 == 0 )
        __freetlocinfo(v2);
    }
    savedregs = 268550851;
    _unlock(12);
    free(Block);
  }
}

// Address: 0x1001C2EA
DWORD __cdecl _freeptd(void *Block)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_1003A1E0 != -1 )
  {
    if ( Block == nullptr && TlsGetValue(dwTlsIndex) != nullptr )
    {
      v4 = dword_1003A1E0;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      Block = (void *)Value(v4);
    }
    v5 = dword_1003A1E0;
    v2 = (void (__stdcall *)(int, _DWORD))_decode_pointer(FlsSetValue);
    v2(v5, 0);
    _freefls(Block);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, nullptr);
  return result;
}

// Address: 0x1001C358
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
    dword_100C6578 = (int)FlsFree;
    if ( FlsAlloc == nullptr || FlsGetValue == nullptr || FlsSetValue == nullptr || FlsFree == nullptr )
    {
      FlsGetValue = TlsGetValue;
      FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))__crtTlsAlloc;
      FlsSetValue = TlsSetValue;
      dword_100C6578 = (int)TlsFree;
    }
    v3 = TlsAlloc();
    dwTlsIndex = v3;
    if ( v3 == -1 || !TlsSetValue(v3, FlsGetValue) )
      return 0;
    _init_pointers();
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))_encode_pointer(FlsAlloc);
    FlsGetValue = (PVOID (__stdcall *)(DWORD))_encode_pointer(FlsGetValue);
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))_encode_pointer(FlsSetValue);
    dword_100C6578 = (int)_encode_pointer((void *)dword_100C6578);
    if ( _mtinitlocks() != 0 )
    {
      v4 = (int (__stdcall *)(_DWORD))_decode_pointer(FlsAlloc);
      dword_1003A1E0 = v4(_freefls);
      if ( dword_1003A1E0 != -1 )
      {
        v5 = (DWORD *)_calloc_crt(1u, 532);
        v6 = v5;
        if ( v5 != nullptr )
        {
          v11 = v5;
          v10 = dword_1003A1E0;
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

// Address: 0x1001C4F0
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
         && dword_100C7D04 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 1001C54C case 0 }
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

// Address: 0x1001C855
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
    v3 = &unk_100C657C;
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

// Address: 0x1001C8D0
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

// Address: 0x1001C958
int __cdecl sub_1001C958(int a1)
{
  dword_100C6584 = a1;
  return a1;
}

// Address: 0x1001C967
int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))_decode_pointer((void *)dword_100C6584);
  return v1 != nullptr && v1(Size) != 0;
}

// Address: 0x1001C98F
void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr || dword_100C6588 == 0 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_100C6588 )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}

// Address: 0x1001C9D4
int __cdecl _calloc_crt(size_t Size, int a2)
{
  DWORD v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = _calloc_impl(Size, a2, 0);
    if ( v3 != 0 || dword_100C6588 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_100C6588 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1001CA20
void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 != nullptr || Size == 0 || dword_100C6588 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_100C6588 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1001CA6E
void *__cdecl _recalloc_crt(void *Block, size_t Count, size_t Size)
{
  DWORD v3; // esi
  void *v4; // edi
  int v5; // eax

  v3 = 0;
  do
  {
    v4 = _recalloc(Block, Count, Size);
    if ( v4 != nullptr || Size == 0 || dword_100C6588 == 0 )
      break;
    Sleep(v3);
    v5 = v3 + 1000;
    if ( v3 + 1000 > dword_100C6588 )
      v5 = -1;
    v3 = v5;
  }
  while ( v5 != -1 );
  return v4;
}

// Address: 0x1001CAC0
size_t __cdecl _msize(void *Block)
{
  size_t v2; // esi
  int v3; // [esp+10h] [ebp-20h]
  int v4; // [esp+14h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_100C7E38 != 3 )
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

// Address: 0x1001CB63
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

// Address: 0x1001CB93
int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer(off_1003A200);
  return v1(255);
}

// Address: 0x1001CBBC
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

// Address: 0x1001CBE7
void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x1001CBFF
int _lockexit()
{
  return _lock(8);
}

// Address: 0x1001CC08
int _unlockexit()
{
  return _unlock(8);
}

// Address: 0x1001CC11
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

// Address: 0x1001CC2E
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

// Address: 0x1001CC52
int __cdecl _cinit(int a1)
{
  int result; // eax
  _PVFV *savedregs; // [esp+4h] [ebp+0h]

  if ( _fpmath != nullptr && _IsNonwritableInCurrentImage(&off_10035AC0) != 0 )
    _fpmath(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&dword_1002D26C, (_PIFV *)&Last);
  if ( result == 0 )
  {
    atexit(sub_10022404);
    _initterm((_PVFV *)&First, savedregs);
    if ( dword_100C7E4C != nullptr && _IsNonwritableInCurrentImage(&dword_100C7E4C) != 0 )
      dword_100C7E4C(0, 2, 0);
    return 0;
  }
  return result;
}

// Address: 0x1001CCD7
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
  if ( dword_100C65BC != 1 )
  {
    dword_100C65B8 = 1;
    byte_100C65B4 = a3;
    if ( a2 == 0 )
    {
      v3 = (void **)_decode_pointer((void *)dword_100C7E44);
      v9 = v3;
      if ( v3 != nullptr )
      {
        v4 = (void **)_decode_pointer((void *)dword_100C7E40);
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
            v6 = (void **)_decode_pointer((void *)dword_100C7E44);
            v7 = (void **)_decode_pointer((void *)dword_100C7E40);
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
      _initterm((_PVFV *)&dword_1002D290, v8);
    }
    _initterm((_PVFV *)&dword_1002D298, v8);
  }
  if ( a3 != 0 )
    _unlock(8);
  if ( a3 == 0 )
  {
    dword_100C65BC = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
}

// Address: 0x1001CE03
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x1001CE19
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x1001CE28
void (__cdecl __noreturn *_init_pointers())(int Code)
{
  PVOID v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null();
  sub_1001C958((int)v0);
  sub_10023F9E(v0);
  sub_1001A233((int)v0);
  sub_1001ECCC(v0);
  sub_10023F8F(v0);
  _initp_misc_winsig(v0);
  nullsub_1(v0);
  _initp_eh_hooks(v0);
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit);
  off_1003A200 = result;
  return result;
}

// Address: 0x1001CE78
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_10023CC0;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1001CEBD
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { retn }
}

// Address: 0x1001CEE0
int __cdecl SEH_10023CC0(int a1, _DWORD *TargetFrame, int a3)
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
            && _IsNonwritableInCurrentImage(&off_1002DB58) != 0 )
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

// Address: 0x1001D06C
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
    && (v2 != (FILE *)(sub_10024A67() + 32) && v2 != (FILE *)(sub_10024A67() + 64) || _isatty((int)File) == 0) )
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
        v9 = &dword_1003AA08;
      else
        v9 = (_BYTE *)(dword_100C7D20[(int)File >> 5] + (((unsigned __int8)File & 0x1F) << 6));
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

// Address: 0x1001D1D0
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

// Address: 0x1001D222
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
      v10 = byte_1002D9D8[(unsigned __int16)v7] & 0xF;
    v55 = byte_1002D9F8[8 * v10 + v8] >> 4;
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
                  v73 = (char *)off_1003A2C4;
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
              v28 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_1003AA98[0]);
              v28(v52, v12, v46, v47, v48, v49, &Locale);
              v29 = v75 & 0x80;
              if ( (v75 & 0x80) != 0 && v74 == 0 )
              {
                v30 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1003AAA4);
                v30(v12, &Locale);
              }
              if ( (_WORD)v71 == 103 && v29 == 0 )
              {
                v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1003AAA0[0]);
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

// Address: 0x1001DDBA
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

// Address: 0x1001DDE9
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

// Address: 0x1001DE10
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
      v8 = *((_BYTE *)off_1002E270 + (unsigned __int16)v7) & 0xF;
    v9 = (unsigned __int8)byte_1002E290[9 * v8 + v65] >> 4;
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
          v29 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_1003AA98[0]);
          v29(v53, v13, v47, v48, v49, v50, &Locale);
          v30 = v76 & 0x80;
          if ( (v76 & 0x80) != 0 && v75 == 0 )
          {
            v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1003AAA4);
            v31(v13, &Locale);
          }
          if ( (_WORD)v71 == 103 && v30 == 0 )
          {
            v32 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1003AAA0[0]);
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
            v74 = (char *)off_1003A2C4;
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

// Address: 0x1001E9B0
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

  if ( (dword_1003A204 & 1) != 0 )
    _NMSG_WRITE(10);
  v1 = sub_10023DD2();
  if ( v1 != 0 )
  {
    v1 = raise(22);
    v3 = v5;
  }
  if ( (dword_1003A204 & 2) != 0 )
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

// Address: 0x1001EAC7
unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_1003A204;
  dword_1003A204 = Mask & Flags | dword_1003A204 & ~Mask;
  return result;
}

// Address: 0x1001EAE8
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
    if ( a1 == dword_1003A208[2 * v1] )
      break;
    v8 = ++v1;
  }
  while ( v1 < 0x17 );
  if ( v1 < 0x17 )
  {
    if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_100C6244 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v4 = StdHandle;
      if ( StdHandle != nullptr && StdHandle != (HANDLE)-1 )
      {
        v5 = (const char **)&(&off_1003A20C)[2 * v1];
        v6 = strlen(*v5);
        WriteFile(v4, *v5, v6, &NumberOfBytesWritten, nullptr);
      }
    }
    else if ( a1 != 252 )
    {
      if ( strcpy_s(Destination, 0x314u, aRuntimeErrorPr) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      byte_100C66DD = 0;
      if ( GetModuleFileNameA(nullptr, Filename, 0x104u) == 0
        && strcpy_s(Filename, 0x2FBu, "<program name unknown>") != 0 )
      {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strlen(Filename) + 1 > 0x3C )
      {
        v2 = strlen(Filename);
        if ( strncpy_s(&Filename[v2 - 59], &unk_100C68D4 - (_UNKNOWN *)&Filename[v2 - 59], "...", 3u) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strcat_s(Destination, 0x314u, "\n\n") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcat_s(Destination, 0x314u, (&off_1003A20C)[2 * v8]) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      sub_10024FB5(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
}

// Address: 0x1001EC93
void _FF_MSGBANNER()
{
  if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_100C6244 == 1 )
  {
    _NMSG_WRITE(252);
    _NMSG_WRITE(255);
  }
}

// Address: 0x1001ECCC
int __cdecl sub_1001ECCC(int a1)
{
  dword_100C68DC = a1;
  return a1;
}

// Address: 0x1001ECDB
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

// Address: 0x1001ED0A
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
  v3 = &unk_1003A2C8 - (_UNKNOWN *)a1;
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

// Address: 0x1001ED6E
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

// Address: 0x1001EF01
volatile LONG *__updatetmbcinfo()
{
  DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = _getptd();
  if ( (dword_1003A7EC & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != lpAddend )
    {
      if ( v1 != nullptr && InterlockedDecrement(v1) == 0 && v1 != (volatile LONG *)&unk_1003A2C8 )
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

// Address: 0x1001EFA5
UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, nullptr);
  dword_100C68E0 = 0;
  switch ( a1 )
  {
    case -2:
      dword_100C68E0 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_100C68E0 = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_100C68E0 = 1;
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

// Address: 0x1001F021
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
      if ( dword_1003A6F8[i] == SystemCP )
      {
        memset(a2 + 7, 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_1003A708 + 48 * v19;
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
              *((_BYTE *)a2 + v10 + 29) |= byte_1003A6F4[v18];
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
        v13 = (_WORD *)((char *)&unk_1003A6FC + v12);
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
    if ( dword_100C68E0 == 0 )
      return -1;
  }
  setSBCS(a2);
  return 0;
}

// Address: 0x1001F206
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
        if ( v4 != (_DWORD *)&unk_1003A2C8 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( InterlockedDecrement((volatile LONG *)v1[26]) == 0 && (_UNKNOWN *)v1[26] != &unk_1003A2C8 )
        free((void *)v1[26]);
      v1[26] = (DWORD)v4;
      InterlockedIncrement(v4);
      if ( (v1[28] & 2) == 0 && (dword_1003A7EC & 1) == 0 )
      {
        _lock(13);
        dword_100C68F0 = v4[1];
        dword_100C68F4 = v4[2];
        dword_100C68F8 = v4[3];
        for ( i = 0; i < 5; ++i )
          word_100C68E4[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_1003A4E8[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_1003A5F0[k] = *((_BYTE *)v4 + k + 285);
        if ( InterlockedDecrement(lpAddend) == 0 && lpAddend != (volatile LONG *)&unk_1003A2C8 )
          free((void *)lpAddend);
        lpAddend = v4;
        InterlockedIncrement(v4);
        _unlock(13);
      }
    }
  }
  return v10;
}

// Address: 0x1001F3A0
int __initmbctable()
{
  if ( dword_100C7E48 == 0 )
  {
    _setmbcp(-3);
    dword_100C7E48 = 1;
  }
  return 0;
}

// Address: 0x1001F3BE
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
  if ( v2 != nullptr && v2 != &off_1003ADF8 )
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
  if ( (_UNKNOWN **)v7 != &off_1003AD38 && *(_DWORD *)(v7 + 180) == 0 )
  {
    __free_lc_time(*((_DWORD *)Block + 53));
    free(*((void **)Block + 53));
  }
  v8 = (void **)(Block + 80);
  for ( Blocka = 6; Blocka != 0; --Blocka )
  {
    if ( *(v8 - 2) != &unk_1003A7F0 && *v8 != nullptr && *(_DWORD *)*v8 == 0 )
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

// Address: 0x1001F507
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
    if ( *(v2 - 2) != (volatile LONG *)&unk_1003A7F0 && *v2 != nullptr )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
      InterlockedIncrement(v2[1]);
    v2 += 4;
  }
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}

// Address: 0x1001F596
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
      if ( *(v2 - 2) != (volatile LONG *)&unk_1003A7F0 && *v2 != nullptr )
        InterlockedDecrement(*v2);
      if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
        InterlockedDecrement(v2[1]);
      v2 += 4;
    }
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
  }
  return lpAddend;
}

// Address: 0x1001F62F
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
      if ( *v2 == 0 && v2 != (volatile LONG *)&unk_1003A7F8 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}

// Address: 0x1001F66D
DWORD __updatetlocinfo()
{
  DWORD *v0; // esi
  DWORD v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_1003A7EC & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = _getptd()[27];
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)v0 + 27, (volatile LONG *)off_1003A8D0);
    _unlock(12);
    v1 = (DWORD)v3;
  }
  if ( v1 == 0 )
    _amsg_exit(32);
  return v1;
}

// Address: 0x1001F6E3
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

// Address: 0x1001F798
size_t __cdecl wcslen(const wchar_t *String)
{
  const wchar_t *v1; // eax
  __int16 v2; // cx

  v1 = String;
  do
    v2 = *v1++;
  while ( v2 != 0 );
  return v1 - String - 1;
}

// Address: 0x1001F7B2
int __usercall __check_float_string@<eax>(void **a1@<edi>, size_t *a2@<esi>, int a3, void *Src, _DWORD *a5)
{
  size_t v5; // eax
  int v6; // eax
  void *v8; // eax

  v5 = *a2;
  if ( a3 == *a2 )
  {
    if ( *a1 == Src )
    {
      v6 = _calloc_crt(v5, 4);
      *a1 = (void *)v6;
      if ( v6 == 0 )
        return 0;
      *a5 = 1;
      memcpy_0(*a1, Src, 2 * *a2);
    }
    else
    {
      v8 = _recalloc_crt(*a1, v5, 4u);
      if ( v8 == nullptr )
        return 0;
      *a1 = v8;
    }
    *a2 *= 2;
  }
  return 1;
}

// Address: 0x1001F80C
int __cdecl _hextodec(unsigned __int16 a1)
{
  if ( (a1 & 0xFF00) != 0 || isdigit((unsigned __int8)a1) == 0 )
    return (a1 & 0xFFDF) - 7;
  else
    return a1;
}

// Address: 0x1001F842
wint_t __cdecl _un_inc(wint_t Character, FILE *Stream)
{
  wint_t result; // ax

  result = -1;
  if ( Character != 0xFFFF )
    return _ungetwc_nolock(Character, Stream);
  return result;
}

// Address: 0x1001F85A
wint_t __usercall _whiteout@<ax>(_DWORD *a1@<esi>, FILE *Stream)
{
  wint_t v2; // di

  do
  {
    ++*a1;
    v2 = _fgetwc_nolock(Stream);
  }
  while ( v2 != 0xFFFF && iswctype(v2, 8u) != 0 );
  return v2;
}

// Address: 0x1001F88C
int __cdecl _winput_s_l(FILE *a1, wint_t *a2, struct localeinfo_struct *a3, char **a4)
{
  int result; // eax
  wint_t v5; // ax
  wint_t v6; // ax
  wint_t *v7; // esi
  wint_t *v8; // esi
  int v9; // ebx
  unsigned __int16 v10; // cx
  unsigned __int16 *v11; // eax
  char *v12; // ebx
  wint_t v13; // ax
  int v14; // edi
  wint_t v15; // ax
  rsize_t v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  wint_t v24; // ax
  int v25; // eax
  int v26; // eax
  size_t v27; // esi
  char *v28; // edi
  errno_t v29; // eax
  void (__cdecl *v30)(int, char *, char *, __crt_locale_pointers *); // eax
  char *v31; // esi
  int v32; // eax
  wint_t v33; // dx
  unsigned __int16 *v34; // esi
  _BYTE *v35; // ebx
  void *v36; // eax
  unsigned __int16 v37; // dx
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // ax
  unsigned int v40; // edi
  unsigned __int16 v41; // ax
  int v42; // eax
  wint_t v43; // ax
  wint_t v44; // cx
  int *v45; // eax
  bool v46; // zf
  int v47; // [esp-14h] [ebp-364h]
  char *v48; // [esp-10h] [ebp-360h]
  FILE *v49; // [esp-8h] [ebp-358h]
  int v50; // [esp-8h] [ebp-358h]
  __crt_locale_pointers Locale; // [esp+8h] [ebp-348h] BYREF
  int v52; // [esp+10h] [ebp-340h]
  char v53; // [esp+14h] [ebp-33Ch]
  int v54; // [esp+18h] [ebp-338h]
  int v55; // [esp+1Ch] [ebp-334h]
  wchar_t DstCh[2]; // [esp+20h] [ebp-330h] BYREF
  char **v57; // [esp+24h] [ebp-32Ch]
  char **v58; // [esp+28h] [ebp-328h]
  int v59; // [esp+2Ch] [ebp-324h]
  void *Block; // [esp+30h] [ebp-320h]
  int v61; // [esp+34h] [ebp-31Ch]
  size_t v62; // [esp+38h] [ebp-318h] BYREF
  int v63; // [esp+3Ch] [ebp-314h] BYREF
  int v64; // [esp+40h] [ebp-310h]
  rsize_t SizeInBytes; // [esp+44h] [ebp-30Ch]
  int v66; // [esp+48h] [ebp-308h]
  int v67; // [esp+4Ch] [ebp-304h]
  char *v68; // [esp+50h] [ebp-300h]
  wint_t *v69; // [esp+54h] [ebp-2FCh]
  char v70; // [esp+5Bh] [ebp-2F5h]
  int SizeConverted; // [esp+5Ch] [ebp-2F4h] BYREF
  __int64 v72; // [esp+60h] [ebp-2F0h]
  int v73; // [esp+68h] [ebp-2E8h]
  wchar_t *Src; // [esp+6Ch] [ebp-2E4h] BYREF
  char v75; // [esp+71h] [ebp-2DFh]
  char v76; // [esp+72h] [ebp-2DEh]
  char v77; // [esp+73h] [ebp-2DDh]
  FILE *Stream; // [esp+74h] [ebp-2DCh]
  char v79; // [esp+7Ah] [ebp-2D6h]
  char v80; // [esp+7Bh] [ebp-2D5h]
  int v81; // [esp+7Ch] [ebp-2D4h]
  int v82; // [esp+80h] [ebp-2D0h]
  char v83; // [esp+87h] [ebp-2C9h]
  int v84; // [esp+88h] [ebp-2C8h] BYREF
  char v85; // [esp+8Fh] [ebp-2C1h]
  _BYTE v86[700]; // [esp+90h] [ebp-2C0h] BYREF

  v58 = a4;
  Stream = a1;
  v69 = a2;
  Src = (wchar_t *)v86;
  v62 = 350;
  v63 = 0;
  Block = nullptr;
  v54 = 0;
  v82 = 0;
  v55 = 0;
  if ( a2 == nullptr || a1 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  v5 = *a2;
  v76 = 0;
  v84 = 0;
  v64 = 0;
  if ( v5 == 0 )
    goto LABEL_290;
  while ( 2 )
  {
    if ( iswctype(v5, 8u) != 0 )
    {
      v49 = Stream;
      --v84;
      v6 = _whiteout(&v84, Stream);
      _un_inc(v6, v49);
      v7 = v69;
      do
        ++v7;
      while ( iswctype(*v7, 8u) != 0 );
      v69 = v7;
      goto LABEL_267;
    }
    v8 = v69;
    if ( *v69 != 37 || v69[1] == 37 )
    {
      if ( *v69 == 37 && v69[1] == 37 )
        v8 = v69 + 1;
      ++v84;
      v43 = _fgetwc_nolock(Stream);
      v44 = *v8;
      v7 = v8 + 1;
      v82 = v43;
      v69 = v7;
      if ( v44 == v43 )
        goto LABEL_263;
LABEL_277:
      _un_inc(v82, Stream);
      goto $error_return$29629;
    }
    v66 = 0;
    v61 = 0;
    v73 = 0;
    v67 = 0;
    v81 = 0;
    SizeInBytes = 0;
    v70 = 0;
    v75 = 0;
    v80 = 0;
    v85 = 0;
    v77 = 0;
    v83 = 0;
    v79 = 1;
    SizeConverted = 0;
    do
    {
      v9 = *++v8;
      if ( (v9 & 0xFF00) == 0 && isdigit((unsigned __int8)v9) != 0 )
      {
        ++v67;
        v81 = 10 * v81 + v9 - 48;
        continue;
      }
      if ( v9 > 78 )
      {
        if ( v9 == 104 )
        {
          --v79;
          --v83;
        }
        else
        {
          if ( v9 == 108 )
          {
            v11 = v8 + 1;
            if ( v8[1] == 108 )
              goto LABEL_24;
            ++v79;
          }
          else if ( v9 != 119 )
          {
            goto $DEFAULT_LABEL$29601;
          }
          ++v83;
        }
      }
      else
      {
        switch ( v9 )
        {
          case 'N':
            continue;
          case '*':
            ++v80;
            continue;
          case 'F':
            continue;
          default:
            break;
        }
        if ( v9 != 73 )
        {
          if ( v9 == 76 )
          {
            ++v79;
            continue;
          }
$DEFAULT_LABEL$29601:
          ++v85;
          continue;
        }
        v10 = v8[1];
        if ( v10 == 54 )
        {
          v11 = v8 + 2;
          if ( v8[2] == 52 )
          {
LABEL_24:
            ++SizeConverted;
            v8 = v11;
            v72 = 0;
            continue;
          }
        }
        if ( v10 == 51 && v8[2] == 50 )
        {
          v8 += 2;
          continue;
        }
        if ( v10 != 100 && v10 != 105 && v10 != 111 && v10 != 120 && v10 != 88 )
          goto $DEFAULT_LABEL$29601;
      }
    }
    while ( v85 == 0 );
    v69 = v8;
    if ( v80 != 0 )
    {
      v12 = nullptr;
    }
    else
    {
      v12 = *v58;
      v57 = v58++;
    }
    v68 = v12;
    v85 = 0;
    if ( v83 == 0 )
    {
      v13 = *v8;
      if ( *v8 == 83 || (v83 = 1, v13 == 67) )
        v83 = -1;
    }
    v14 = *v8 | 0x20;
    v59 = v14;
    if ( v14 != 110 )
    {
      if ( v14 == 99 || v14 == 123 )
      {
        ++v84;
        v15 = _fgetwc_nolock(Stream);
      }
      else
      {
        v15 = _whiteout(&v84, Stream);
      }
      v82 = v15;
      if ( v15 == 0xFFFF )
        goto $error_return$29629;
      v12 = v68;
      v8 = v69;
      v14 = v59;
    }
    if ( v67 != 0 && v81 == 0 )
      goto LABEL_277;
    if ( v80 == 0 && (v14 == 99 || v14 == 115 || v14 == 123) )
    {
      v12 = *v57++;
      v58 = v57 + 1;
      v16 = (rsize_t)*v57;
      v68 = v12;
      SizeInBytes = v16;
      if ( v16 == 0 )
      {
        if ( v83 <= 0 )
          *v12 = 0;
        else
          *(_WORD *)v12 = 0;
        *_errno() = 12;
        goto $error_return$29629;
      }
    }
    if ( v14 <= 111 )
    {
      if ( v14 == 111 )
        goto LABEL_205;
      if ( v14 != 99 )
      {
        if ( v14 != 100 )
        {
          if ( v14 <= 100 )
            goto LABEL_148;
          if ( v14 > 103 )
          {
            if ( v14 != 105 )
            {
              if ( v14 == 110 )
              {
                v17 = v84;
                if ( v80 != 0 )
                  goto LABEL_258;
                goto $assign_num$29810;
              }
LABEL_148:
              if ( *v8 == (_WORD)v82 )
              {
                --v76;
                if ( v80 == 0 )
                  v58 = v57;
                goto LABEL_258;
              }
              _un_inc(v82, Stream);
              v55 = 1;
              goto $error_return$29629;
            }
            v14 = 100;
LABEL_76:
            LOWORD(v18) = v82;
            if ( (_WORD)v82 == 45 )
            {
              v75 = 1;
              goto $x_incwidth$29735;
            }
            if ( (_WORD)v82 == 43 )
            {
$x_incwidth$29735:
              if ( --v81 != 0 || v67 == 0 )
              {
                ++v84;
                LOWORD(v18) = _fgetwc_nolock(Stream);
                v82 = (unsigned __int16)v18;
              }
              else
              {
                v85 = 1;
              }
            }
            if ( (_WORD)v18 == 48 )
            {
              ++v84;
              LOWORD(v18) = _fgetwc_nolock(Stream);
              v82 = (unsigned __int16)v18;
              if ( (_WORD)v18 == 120 || (_WORD)v18 == 88 )
              {
                ++v84;
                LOWORD(v18) = _fgetwc_nolock(Stream);
                v82 = (unsigned __int16)v18;
                if ( v67 != 0 )
                {
                  v81 -= 2;
                  if ( v81 < 1 )
                    ++v85;
                }
                v50 = 120;
LABEL_192:
                v14 = v50;
              }
              else
              {
                v73 = 1;
                if ( v14 != 120 )
                {
                  if ( v67 != 0 && --v81 == 0 )
                    ++v85;
                  v50 = 111;
                  goto LABEL_192;
                }
                --v84;
                _un_inc(v18, Stream);
                v18 = 48;
LABEL_212:
                v82 = v18;
              }
            }
            goto $getnum$29752;
          }
          v19 = 0;
          if ( (_WORD)v82 == 45 )
          {
            *Src = 45;
            v19 = 1;
            goto $f_incwidth$29828;
          }
          if ( (_WORD)v82 == 43 )
          {
$f_incwidth$29828:
            --v81;
            ++v84;
            v82 = _fgetwc_nolock(Stream);
          }
          if ( v67 == 0 )
            v81 = -1;
          for ( ; (v82 & 0xFF00) == 0; v82 = _fgetwc_nolock(Stream) )
          {
            if ( isdigit((unsigned __int8)v82) == 0 )
              break;
            v20 = v81--;
            if ( v20 == 0 )
              break;
            ++v73;
            Src[v19++] = (char)v82;
            if ( __check_float_string((void **)&Src, &v62, v19, v86, &v63) == 0 )
              goto $error_return$29629;
            ++v84;
          }
          wcscpy(DstCh, L".");
          _mbtowc_l(DstCh, **((const char ***)Locale.locinfo + 47), *((_DWORD *)Locale.locinfo + 43), &Locale);
          if ( DstCh[0] == (char)v82 )
          {
            v21 = v81--;
            if ( v21 != 0 )
            {
              ++v84;
              v82 = _fgetwc_nolock(Stream);
              Src[v19++] = DstCh[0];
              if ( __check_float_string((void **)&Src, &v62, v19, v86, &v63) == 0 )
                goto $error_return$29629;
              for ( ; (v82 & 0xFF00) == 0; v82 = _fgetwc_nolock(Stream) )
              {
                if ( isdigit((unsigned __int8)v82) == 0 )
                  break;
                v22 = v81--;
                if ( v22 == 0 )
                  break;
                ++v73;
                Src[v19++] = v82;
                if ( __check_float_string((void **)&Src, &v62, v19, v86, &v63) == 0 )
                  goto $error_return$29629;
                ++v84;
              }
            }
          }
          if ( v73 != 0 && ((_WORD)v82 == 101 || (_WORD)v82 == 69) )
          {
            v23 = v81--;
            if ( v23 != 0 )
            {
              Src[v19++] = 101;
              if ( __check_float_string((void **)&Src, &v62, v19, v86, &v63) == 0 )
                goto $error_return$29629;
              ++v84;
              v24 = _fgetwc_nolock(Stream);
              v82 = v24;
              if ( v24 == 45 )
              {
                Src[v19++] = 45;
                if ( __check_float_string((void **)&Src, &v62, v19, v86, &v63) == 0 )
                  goto $error_return$29629;
$f_incwidth2$29856:
                v25 = v81--;
                if ( v25 != 0 )
                {
                  ++v84;
                  v82 = _fgetwc_nolock(Stream);
                }
                else
                {
                  v81 = 0;
                }
              }
              else if ( (_WORD)v82 == 43 )
              {
                goto $f_incwidth2$29856;
              }
              for ( ; (v82 & 0xFF00) == 0; v82 = _fgetwc_nolock(Stream) )
              {
                if ( isdigit((unsigned __int8)v82) == 0 )
                  break;
                v26 = v81--;
                if ( v26 == 0 )
                  break;
                ++v73;
                Src[v19++] = v82;
                if ( __check_float_string((void **)&Src, &v62, v19, v86, &v63) == 0 )
                  goto $error_return$29629;
                ++v84;
              }
            }
          }
          --v84;
          _un_inc(v82, Stream);
          if ( v73 != 0 )
          {
            if ( v80 != 0 )
              goto LABEL_258;
            ++v64;
            v27 = 2 * v62 + 2;
            Src[v19] = 0;
            v28 = (char *)_malloc_crt(v27);
            if ( v28 != nullptr )
            {
              v29 = wcstombs_s(nullptr, v28, v27, Src, v27 - 1);
              if ( v29 != 0 && (v29 == 22 || v29 == 34) )
                _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
              v48 = v68;
              v47 = v79 - 1;
              v30 = (void (__cdecl *)(int, char *, char *, __crt_locale_pointers *))_decode_pointer(off_1003AA9C[0]);
              v30(v47, v48, v28, &Locale);
              free(v28);
              goto LABEL_258;
            }
          }
          goto $error_return$29629;
        }
LABEL_205:
        LOWORD(v18) = v82;
        if ( (_WORD)v82 == 45 )
        {
          v75 = 1;
        }
        else if ( (_WORD)v82 != 43 )
        {
          goto $getnum$29752;
        }
        if ( --v81 != 0 || v67 == 0 )
        {
          ++v84;
          v18 = _fgetwc_nolock(Stream);
          goto LABEL_212;
        }
        v85 = 1;
$getnum$29752:
        if ( SizeConverted != 0 )
        {
          if ( v85 == 0 )
          {
            while ( 1 )
            {
              if ( v14 == 120 || v14 == 112 )
              {
                if ( (v18 & 0xFF00) != 0 || isxdigit((unsigned __int8)v18) == 0 )
                {
LABEL_229:
                  --v84;
                  _un_inc(v18, Stream);
                  break;
                }
                v72 *= 16;
                LOWORD(v18) = _hextodec(v18);
                v82 = (unsigned __int16)v18;
              }
              else
              {
                if ( (v18 & 0xFF00) != 0 || isdigit((unsigned __int8)v18) == 0 )
                  goto LABEL_229;
                if ( v14 == 111 )
                {
                  if ( (unsigned __int16)v18 >= 0x38u )
                    goto LABEL_229;
                  v72 *= 8;
                }
                else
                {
                  v72 *= 10;
                }
              }
              ++v73;
              v72 += (unsigned __int16)v18 - 48;
              if ( v67 != 0 && --v81 == 0 )
                break;
              ++v84;
              LOWORD(v18) = _fgetwc_nolock(Stream);
              v82 = (unsigned __int16)v18;
            }
          }
          if ( v75 != 0 )
            v72 = -v72;
        }
        else
        {
          if ( v85 == 0 )
          {
            while ( 1 )
            {
              if ( v14 == 120 || v14 == 112 )
              {
                if ( (v18 & 0xFF00) != 0 || isxdigit((unsigned __int8)v18) == 0 )
                {
LABEL_247:
                  --v84;
                  _un_inc(v18, Stream);
                  break;
                }
                v66 *= 16;
                v18 = (unsigned __int16)_hextodec(v18);
                v42 = v66;
                v82 = v18;
              }
              else
              {
                if ( (v18 & 0xFF00) != 0 || isdigit((unsigned __int8)v18) == 0 )
                  goto LABEL_247;
                if ( v14 == 111 )
                {
                  if ( (unsigned __int16)v18 >= 0x38u )
                    goto LABEL_247;
                  v42 = 8 * v66;
                }
                else
                {
                  v42 = 10 * v66;
                }
              }
              ++v73;
              v66 = v42 + (unsigned __int16)v18 - 48;
              if ( v67 != 0 && --v81 == 0 )
                break;
              ++v84;
              LOWORD(v18) = _fgetwc_nolock(Stream);
              v82 = (unsigned __int16)v18;
            }
          }
          if ( v75 != 0 )
            v66 = -v66;
        }
        if ( v73 == 0 )
          goto $error_return$29629;
        if ( v80 != 0 )
          goto LABEL_258;
        ++v64;
        v12 = v68;
        v17 = v66;
$assign_num$29810:
        if ( SizeConverted != 0 )
        {
          *(_QWORD *)v12 = v72;
        }
        else if ( v79 != 0 )
        {
          *(_DWORD *)v12 = v17;
        }
        else
        {
          *(_WORD *)v12 = v17;
        }
        goto LABEL_258;
      }
      if ( v67 == 0 )
      {
        ++v81;
        v67 = 1;
      }
LABEL_124:
      if ( v83 > 0 )
        v77 = 1;
$scanit$29662:
      --v84;
      v31 = v12;
      _un_inc(v82, Stream);
      if ( v14 != 99 )
LABEL_127:
        --SizeInBytes;
      while ( 2 )
      {
        if ( v67 != 0 )
        {
          v32 = v81--;
          if ( v32 == 0 )
            goto LABEL_198;
        }
        ++v84;
        v33 = _fgetwc_nolock(Stream);
        v82 = v33;
        if ( v33 == 0xFFFF )
          break;
        if ( v14 == 99 )
          goto LABEL_139;
        if ( v14 != 115 )
        {
LABEL_136:
          if ( v14 != 123 || ((1 << (v33 & 7)) & (v70 ^ *((char *)Block + (v33 >> 3)))) == 0 )
            break;
          v14 = v59;
          goto LABEL_139;
        }
        if ( v33 < 9u || v33 > 0xDu )
        {
          if ( v33 == 32 )
            goto LABEL_136;
LABEL_139:
          if ( v80 != 0 )
          {
            v31 += 2;
          }
          else
          {
            if ( SizeInBytes == 0 )
              goto LABEL_274;
            if ( v77 != 0 )
            {
              *(_WORD *)v12 = v33;
              v12 += 2;
              v68 = v12;
              goto LABEL_127;
            }
            SizeConverted = 0;
            if ( wctomb_s(&SizeConverted, v12, SizeInBytes, v33) == 34 )
            {
LABEL_274:
              v45 = _errno();
              v46 = v77 == 0;
              *v45 = 12;
              if ( v46 )
                *v31 = 0;
              else
                *(_WORD *)v31 = 0;
              goto $error_return$29629;
            }
            if ( SizeConverted > 0 )
            {
              v12 += SizeConverted;
              SizeInBytes -= SizeConverted;
              v68 = v12;
            }
          }
          continue;
        }
        break;
      }
      --v84;
      _un_inc(v33, Stream);
LABEL_198:
      if ( v31 == v12 )
        goto $error_return$29629;
      if ( v80 == 0 )
      {
        ++v64;
        if ( v59 != 99 )
        {
          if ( v77 != 0 )
            *(_WORD *)v68 = 0;
          else
            *v68 = 0;
        }
      }
LABEL_258:
      ++v76;
      v7 = ++v69;
LABEL_263:
      if ( (_WORD)v82 == 0xFFFF )
      {
        if ( *v7 == 37 && v69[1] == 110 )
        {
          v7 = v69;
          goto LABEL_267;
        }
        goto $error_return$29629;
      }
LABEL_267:
      v5 = *v7;
      if ( *v7 == 0 )
        goto $error_return$29629;
      continue;
    }
    break;
  }
  switch ( v14 )
  {
    case 'p':
      v79 = 1;
      goto LABEL_205;
    case 's':
      goto LABEL_124;
    case 'u':
      goto LABEL_205;
    case 'x':
      goto LABEL_76;
    default:
      break;
  }
  if ( v14 != 123 )
    goto LABEL_148;
  if ( v83 > 0 )
    v77 = 1;
  v34 = v8 + 1;
  if ( *v34 == 94 )
  {
    ++v34;
    v70 = -1;
  }
  v35 = Block;
  if ( Block == nullptr )
  {
    v36 = _malloc_crt(0x2000u);
    Block = v36;
    if ( v36 == nullptr )
      goto $error_return$29629;
    v54 = 1;
    v35 = v36;
  }
  memset(v35, 0, 0x2000u);
  if ( *v34 == 93 )
  {
    v61 = 93;
    ++v34;
    v35[11] = 32;
  }
  while ( 1 )
  {
    v41 = *v34;
    if ( *v34 == 93 )
      break;
    ++v34;
    if ( v41 == 45 && (v37 = v61, (_WORD)v61 != 0) && (v38 = *v34, *v34 != 93) )
    {
      ++v34;
      if ( (unsigned __int16)v61 >= v38 )
      {
        v39 = v61;
        v37 = v38;
        v61 = v38;
      }
      else
      {
        v39 = v38;
      }
      if ( v37 <= v39 )
      {
        v40 = (unsigned __int16)v61;
        SizeConverted = (unsigned __int16)(v39 - v61 + 1);
        do
        {
          v35[v40 >> 3] |= 1 << (v40 & 7);
          ++v40;
          --SizeConverted;
        }
        while ( SizeConverted != 0 );
      }
      v61 = 0;
    }
    else
    {
      v61 = v41;
      v35[v41 >> 3] |= 1 << (v41 & 7);
    }
  }
  if ( *v34 != 0 )
  {
    v12 = v68;
    v14 = v59;
    v69 = v34;
    goto $scanit$29662;
  }
$error_return$29629:
  if ( v54 == 1 )
    free(Block);
  if ( v63 == 1 )
    free(Src);
  if ( (_WORD)v82 == 0xFFFF )
  {
    result = v64;
    if ( v64 == 0 && v76 == 0 )
      result = -1;
    if ( v53 != 0 )
      *(_DWORD *)(v52 + 112) &= ~2u;
    return result;
  }
  if ( v55 == 1 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  }
LABEL_290:
  if ( v53 != 0 )
    *(_DWORD *)(v52 + 112) &= ~2u;
  return v64;
}

// Address: 0x10020AAD
void __cdecl _freea(void *Memory)
{
  if ( Memory != nullptr && *((_DWORD *)Memory - 2) == 56797 )
    free((char *)Memory - 8);
}

// Address: 0x10020ACD
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
  if ( dword_100C6920 == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, nullptr, 0) != 0 )
    {
      dword_100C6920 = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_100C6920 = 2;
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
  if ( dword_100C6920 != 2 && dword_100C6920 != 0 )
  {
    if ( dword_100C6920 == 1 )
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

// Address: 0x10020E72
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

// Address: 0x10020EB7
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

// Address: 0x10020EEF
int __cdecl isleadbyte(int C)
{
  return _isleadbyte_l(C, nullptr);
}

// Address: 0x10020F02
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

// Address: 0x10020FBA
int __cdecl _heap_init(int a1)
{
  int result; // eax

  result = (int)HeapCreate(a1 == 0, 0x1000u, 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    dword_100C7E38 = 1;
    return 1;
  }
  return result;
}

// Address: 0x10020FEB
BOOL _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi
  BOOL result; // eax

  if ( dword_100C7E38 == 3 )
  {
    v0 = 0;
    if ( dword_100C7E20 > 0 )
    {
      v1 = (LPVOID *)((char *)lpMem + 16);
      do
      {
        VirtualFree(*(v1 - 1), 0, 0x8000u);
        HeapFree(hHeap, 0, *v1);
        v1 += 5;
        ++v0;
      }
      while ( v0 < dword_100C7E20 );
    }
    HeapFree(hHeap, 0, lpMem);
  }
  result = HeapDestroy(hHeap);
  hHeap = nullptr;
  return result;
}

// Address: 0x1002105F
int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_100C6928;
  while ( 1 )
  {
    if ( dword_1003A8EC[2 * v0] == 1 )
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

// Address: 0x100210AA
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
  while ( (int)v0 < (int)dword_1003AA08 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 != nullptr && v2[1] == (LPCRITICAL_SECTION)1 )
      DeleteCriticalSection(*v2);
    v2 += 2;
  }
  while ( (int)v2 < (int)dword_1003AA08 );
}

// Address: 0x10021101
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}

// Address: 0x10021118
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

// Address: 0x100211DB
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 == nullptr && _mtinitlocknum(a1) == 0 )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}

// Address: 0x1002120E
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 20 * dword_100C7E20; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x1002123E
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
      if ( dword_100C6A78 != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_100C6A78 + 3) + (dword_100C7E34 << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_100C6A78 + 2) |= 0x80000000 >> dword_100C7E34;
        *(_DWORD *)(*((_DWORD *)dword_100C6A78 + 4) + 4 * dword_100C7E34 + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_100C6A78 + 4) + 67);
        v20 = (LPVOID *)dword_100C6A78;
        if ( *(_BYTE *)(*((_DWORD *)dword_100C6A78 + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_100C6A78 + 1) &= ~1u;
          v20 = (LPVOID *)dword_100C6A78;
        }
        if ( v20[2] == (LPVOID)-1 )
        {
          VirtualFree(v20[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_100C6A78 + 4));
          memcpy(
            dword_100C6A78,
            (char *)dword_100C6A78 + 20,
            (size_t)lpMem + 20 * dword_100C7E20 - (_DWORD)dword_100C6A78 - 20);
          --dword_100C7E20;
          if ( a1 > dword_100C6A78 )
            a1 -= 5;
          dword_100C7E2C = (int)lpMem;
        }
      }
      dword_100C6A78 = a1;
      dword_100C7E34 = v4;
      return a1;
    }
  }
  return result;
}

// Address: 0x10021554
char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v0 = dword_100C7E20;
  if ( dword_100C7E20 == dword_100C7E30 )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_100C7E30 + 16));
    if ( v1 == nullptr )
      return nullptr;
    dword_100C7E30 += 16;
    v0 = dword_100C7E20;
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
  ++dword_100C7E20;
  **((_DWORD **)v3 + 4) = -1;
  return v3;
}

// Address: 0x10021604
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

// Address: 0x1002170C
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

// Address: 0x100219ED
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

  v1 = (char *)lpMem + 20 * dword_100C7E20;
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
  for ( i = (char *)dword_100C7E2C; ; i += 20 )
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
      if ( (unsigned int)i >= dword_100C7E2C || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
        break;
    }
    if ( i == (char *)dword_100C7E2C )
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
          if ( (unsigned int)i >= dword_100C7E2C || *((_DWORD *)i + 2) != 0 )
            break;
        }
        if ( i == (char *)dword_100C7E2C )
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
  dword_100C7E2C = (int)i;
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
  if ( v24 == 0 && i == dword_100C6A78 && v31 == dword_100C7E34 )
    dword_100C6A78 = nullptr;
  *v6 = v31;
  return v23 + 1;
}

// Address: 0x10021CD2
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
  dword_100C7D20[0] = v0;
  uNumber = 32;
  for ( i = v0 + 2048; v0 < i; i = dword_100C7D20[0] + 2048 )
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
      v5 = &dword_100C7D20[k];
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
        v7 = dword_100C7D20[k >> 5] + ((k & 0x1F) << 6);
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
    v9 = dword_100C7D20[0] + (m << 6);
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

// Address: 0x10021F26
void _ioterm()
{
  void **v0; // esi
  char *v1; // edi
  unsigned int i; // eax

  v0 = (void **)dword_100C7D20;
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
  while ( (int)v0 < (int)&dword_100C7E20 );
}

// Address: 0x10021F74
int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( dword_100C7E48 == 0 )
    __initmbctable();
  v0 = dword_100C6238;
  v1 = 0;
  if ( dword_100C6238 != nullptr )
  {
    while ( *v0 != 0 )
    {
      if ( *v0 != 61 )
        ++v1;
      v0 += strlen(v0) + 1;
    }
    v3 = (char **)_calloc_crt(v1 + 1, 4);
    dword_100C659C = v3;
    if ( v3 != nullptr )
    {
      for ( i = dword_100C6238; ; i += v6 )
      {
        if ( *i == 0 )
        {
          free(dword_100C6238);
          dword_100C6238 = nullptr;
          *v3 = nullptr;
          dword_100C7E3C = 1;
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
      free(dword_100C659C);
      dword_100C659C = nullptr;
      return -1;
    }
  }
  return -1;
}

// Address: 0x10022052
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

// Address: 0x100221EC
int _setargv()
{
  int v0; // edi
  size_t v1; // eax
  char **v2; // esi
  size_t v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( dword_100C7E48 == 0 )
    __initmbctable();
  byte_100C6B84 = 0;
  GetModuleFileNameA(nullptr, byte_100C6A80, 0x104u);
  dword_100C65AC = (int)byte_100C6A80;
  if ( dword_100C7E54 == 0 || (v6 = (char *)dword_100C7E54, *(_BYTE *)dword_100C7E54 == 0) )
    v6 = byte_100C6A80;
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
  dword_100C6590 = v5 - 1;
  dword_100C6594 = (int)v2;
  return 0;
}

// Address: 0x100222A7
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

  v0 = dword_100C6B88;
  v1 = nullptr;
  EnvironmentStringsW = nullptr;
  if ( dword_100C6B88 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      dword_100C6B88 = 1;
      goto LABEL_8;
    }
    if ( GetLastError() == 120 )
    {
      v0 = 2;
      dword_100C6B88 = 2;
    }
    else
    {
      v0 = dword_100C6B88;
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

// Address: 0x100223DE
void *sub_100223DE()
{
  return &unk_100367FC;
}

// Address: 0x10022404
void __cdecl sub_10022404()
{
  ;
}

// Address: 0x1002242A
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
    while ( v5 < &v4[3 * dword_1003AA54] );
    if ( v5 < &v4[3 * dword_1003AA54] && *v5 == a1 )
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
            v9 = dword_1003AA48;
            if ( dword_1003AA48 < dword_1003AA48 + dword_1003AA4C )
            {
              v10 = 12 * dword_1003AA48;
              do
              {
                *(_DWORD *)(v10 + v3[23] + 8) = 0;
                ++v9;
                v10 += 12;
              }
              while ( v9 < dword_1003AA48 + dword_1003AA4C );
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

// Address: 0x1002258A
int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}

// Address: 0x100225AA
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return true;
}

// Address: 0x100225B0
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
    dword_1003A064 = ~v4;
  }
  else
  {
    dword_1003A064 = ~__security_cookie;
  }
}

// Address: 0x10022646
std::exception *__thiscall sub_10022646(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x10022664
void __thiscall sub_10022664(void *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_1001A1EF(this);
}

// Address: 0x1002266F
_DWORD *__thiscall sub_1002266F(_DWORD *this, char a2)
{
  *this = &std::bad_exception::`vftable';
  sub_1001A1EF(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10022696
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

// Address: 0x100226F5
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

// Address: 0x1002273E
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

// Address: 0x1002281F
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

// Address: 0x10022864
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
        sub_1001B539(a1[6], v2);
    }
  }
}

// Address: 0x100228B9
int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2;
  if ( (int)a2[1] >= 0 )
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]);
  return result;
}

// Address: 0x100228E2
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

// Address: 0x1002295D
void __cdecl __noreturn CallUnexpected()
{
  if ( _getptd()[37] != 0 )
    _inconsistency();
  unexpected();
}

// Address: 0x100229A6
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

// Address: 0x10022B42
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

// Address: 0x10022CC1
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
      return sub_1001B539((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_1001B539((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x10022D53
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

// Address: 0x10022DC1
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

// Address: 0x10022EB5
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
                sub_10022646((std::exception *)pExceptionObject, "bad exception");
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

// Address: 0x100231FC
std::exception *__thiscall sub_100231FC(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x10023219
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

// Address: 0x100232FF
void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[30];
  if ( v0 != nullptr )
    v0();
  abort();
}

// Address: 0x10023338
void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[31];
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1002334B
void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer((void *)dword_100C6B8C);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x10023383
PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = _encode_pointer(terminate);
  dword_100C6B8C = (int)result;
  return result;
}

// Address: 0x100233A0
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

// Address: 0x100233EC
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

// Address: 0x10023473
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

// Address: 0x10023556
int has_osfxsr_set()
{
  return 1;
}

// Address: 0x100235A6
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

// Address: 0x10023608
int sub_10023608()
{
  dword_100C7D04 = _get_sse2_info();
  return 0;
}

// Address: 0x10023615
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

// Address: 0x1002366C
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

// Address: 0x100236FC
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

// Address: 0x1002378C
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

// Address: 0x100237D2
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x100237EE
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x10023805
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x1002381E
void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &ReturnPoint, nullptr, nullptr);
}

// Address: 0x10023838
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x1002384F
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
      if ( dword_100C6A7C == 0 )
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
    if ( dword_100C7E38 == 3 )
    {
      v4 = (v4 + 15) & 0xFFFFFFF0;
      if ( Sizea <= dword_100C7E28 )
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

// Address: 0x1002396D
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
    if ( dword_100C7E38 == 3 )
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
          if ( v3 <= dword_100C7E28 )
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
        if ( dword_100C6A7C == 0 )
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
        if ( dword_100C6A7C == 0 )
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

// Address: 0x10023B88
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

// Address: 0x10023C03
int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    v1 = &off_1003AA80[i];
    result = (int (*)())_encode_pointer(off_1003AA80[i]);
    *v1 = result;
  }
  return result;
}

// Address: 0x10023C30
BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  return *(_WORD *)a1 == 23117 && *(_DWORD *)(v2 = a1 + *(_DWORD *)(a1 + 60)) == 17744 && *(_WORD *)(v2 + 24) == 267;
}

// Address: 0x10023C70
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

// Address: 0x10023CC0
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000)
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x10023D7D
int __cdecl _initp_misc_winsig(int a1)
{
  dword_100C6BCC = a1;
  dword_100C6BD0 = a1;
  dword_100C6BD4 = a1;
  dword_100C6BD8 = a1;
  return a1;
}

// Address: 0x10023D9B
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
  while ( result < a2 + 12 * dword_1003AA54 );
  if ( result >= a2 + 12 * dword_1003AA54 || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}

// Address: 0x10023DD2
PVOID sub_10023DD2()
{
  return _decode_pointer((void *)dword_100C6BD4);
}

// Address: 0x10023DDF
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
      v4 = &dword_100C6BD8;
      v5 = (void *)dword_100C6BD8;
      goto LABEL_18;
    }
    if ( Signal == 21 )
    {
      v4 = &dword_100C6BD0;
      v5 = (void *)dword_100C6BD0;
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
      v4 = &dword_100C6BCC;
      v5 = (void *)dword_100C6BCC;
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
      v4 = &dword_100C6BD4;
      v5 = (void *)dword_100C6BD4;
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
    for ( i = dword_1003AA48; i < dword_1003AA48 + dword_1003AA4C; ++i )
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

// Address: 0x10023F8F
int __cdecl sub_10023F8F(int a1)
{
  dword_100C6BE0 = a1;
  return a1;
}

// Address: 0x10023F9E
int __cdecl sub_10023F9E(int a1)
{
  dword_100C6BE4 = a1;
  return a1;
}

// Address: 0x10023FAD
BOOL __cdecl __crtInitCritSecAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x1002400D
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
  v7 = (_BYTE *)(dword_100C7D20[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
  *v7 &= ~2u;
  return lDistanceToMove;
}

// Address: 0x10024092
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
  v4 = &dword_100C7D20[FileHandle >> 5];
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

// Address: 0x100241AB
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
  v4 = &dword_100C7D20[FileHandle >> 5];
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

// Address: 0x100248DE
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
    || (v4 = &dword_100C7D20[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x100249BA
int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_100C6BE8;
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

// Address: 0x10024A03
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return 0;
  }
  else if ( FileHandle >= 0 && FileHandle < uNumber )
  {
    return *(_BYTE *)(dword_100C7D20[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) & 0x40;
  }
  else
  {
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
}

// Address: 0x10024A67
_UNKNOWN **sub_10024A67()
{
  return &off_1003AAA8;
}

// Address: 0x10024A6D
int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_100C7D00;
  if ( dword_100C7D00 == 0 )
  {
    v0 = 512;
LABEL_5:
    dword_100C7D00 = v0;
    goto LABEL_6;
  }
  if ( dword_100C7D00 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)_calloc_crt(v0, 4);
  dword_100C6CEC = v1;
  if ( v1 == nullptr )
  {
    dword_100C7D00 = 20;
    v1 = (char *)_calloc_crt(0x14u, 4);
    dword_100C6CEC = v1;
    if ( v1 == nullptr )
      return 26;
  }
  v3 = 0;
  v4 = &off_1003AAA8;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&unk_1003AD28 )
      break;
    v1 = (char *)dword_100C6CEC;
  }
  v5 = 0;
  v6 = &unk_1003AAB8;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_100C7D20[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || v7 == 0 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_1003AB18 );
  return 0;
}

// Address: 0x10024B1E
void __endstdio()
{
  sub_10026B24();
  if ( byte_100C65B4 != 0 )
    _fcloseall();
  free(dword_100C6CEC);
}

// Address: 0x10024B3E
void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1003AAA8 || Stream > &stru_1003AD08 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_1003AAA8) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}

// Address: 0x10024B7F
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

// Address: 0x10024BB1
void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1003AAA8 || Stream > &stru_1003AD08 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_1003AAA8) >> 5) + 16);
  }
}

// Address: 0x10024BED
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

// Address: 0x10024C1C
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x10024C4E
wint_t __cdecl _fputwc_nolock(wchar_t Character, FILE *Stream)
{
  int *v2; // edi
  LPCRITICAL_SECTION *v3; // eax
  int *v4; // edi
  LPCRITICAL_SECTION *v5; // eax
  int *v6; // edi
  LPCRITICAL_SECTION *v7; // eax
  int v9; // edi
  bool v10; // sf
  int v11; // eax
  int SizeConverted; // [esp+Ch] [ebp-10h] BYREF
  char MbCh[8]; // [esp+10h] [ebp-Ch] BYREF

  if ( (Stream->_flag & 0x40) != 0
    || (_fileno(Stream) == -1 || _fileno(Stream) == -2
      ? (v3 = dword_1003AA08)
      : (v2 = &dword_100C7D20[_fileno(Stream) >> 5], v3 = (LPCRITICAL_SECTION *)(*v2 + ((_fileno(Stream) & 0x1F) << 6))),
        ((_BYTE)v3[9] & 0x7F) == 2
     || (_fileno(Stream) == -1 || _fileno(Stream) == -2
       ? (v5 = dword_1003AA08)
       : (v4 = &dword_100C7D20[_fileno(Stream) >> 5], v5 = (LPCRITICAL_SECTION *)(*v4 + ((_fileno(Stream) & 0x1F) << 6))),
         ((_BYTE)v5[9] & 0x7F) == 1
      || (_fileno(Stream) == -1 || _fileno(Stream) == -2
        ? (v7 = dword_1003AA08)
        : (v6 = &dword_100C7D20[_fileno(Stream) >> 5], v7 = (LPCRITICAL_SECTION *)(*v6 + ((_fileno(Stream) & 0x1F) << 6))),
          *((char *)v7 + 4) >= 0))) )
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

// Address: 0x10024DD5
int __cdecl _get_printf_count_output()
{
  return dword_100C6BEC == (__security_cookie | 1);
}

// Address: 0x10024DEB
int __cdecl _mbtowc_l(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes, _locale_t Locale)
{
  int result; // eax
  struct __crt_locale_data *locinfo; // eax
  int v6; // ecx
  bool v7; // zf
  __crt_locale_pointers Localea; // [esp+8h] [ebp-10h] BYREF
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
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((_DWORD *)Localea.locinfo + 5) == 0 )
  {
    if ( DstCh != nullptr )
      *DstCh = *(unsigned __int8 *)SrcCh;
    goto LABEL_11;
  }
  if ( _isleadbyte_l(*(unsigned __int8 *)SrcCh, &Localea) != 0 )
  {
    locinfo = Localea.locinfo;
    v6 = *((_DWORD *)Localea.locinfo + 43);
    if ( v6 > 1
      && (int)SrcSizeInBytes >= v6
      && (v7 = MultiByteToWideChar(*((_DWORD *)Localea.locinfo + 1), 9u, SrcCh, v6, DstCh, DstCh != nullptr) == 0,
          locinfo = Localea.locinfo,
          !v7)
      || SrcSizeInBytes >= *((_DWORD *)locinfo + 43) && SrcCh[1] != 0 )
    {
      result = *((_DWORD *)locinfo + 43);
      if ( v10 != 0 )
        *(_DWORD *)(v9 + 112) &= ~2u;
      return result;
    }
  }
  else if ( MultiByteToWideChar(*((_DWORD *)Localea.locinfo + 1), 9u, SrcCh, 1, DstCh, DstCh != nullptr) != 0 )
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

// Address: 0x10024F02
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x10024F20
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

// Address: 0x10024FB5
int __cdecl sub_10024FB5(int a1, int a2, int a3)
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
  if ( dword_100C6BF0 == 0 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( MessageBoxA == nullptr )
      return 0;
    dword_100C6BF0 = (int)_encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v5, "GetActiveWindow");
    dword_100C6BF4 = (int)_encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v5, "GetLastActivePopup");
    dword_100C6BF8 = (int)_encode_pointer(GetLastActivePopup);
    GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                          v5,
                                                                                          "GetUserObjectInformationA");
    dword_100C6C00 = (int)_encode_pointer(GetUserObjectInformationA);
    if ( dword_100C6C00 != 0 )
    {
      GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v5, "GetProcessWindowStation");
      dword_100C6BFC = (int)_encode_pointer(GetProcessWindowStation);
    }
  }
  if ( (PVOID)dword_100C6BFC == v3
    || (PVOID)dword_100C6C00 == v3
    || (v11 = (int (*)(void))_decode_pointer((void *)dword_100C6BFC),
        v12 = _decode_pointer((void *)dword_100C6C00),
        v13 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v12,
        v11 == nullptr)
    || v12 == nullptr
    || (v14 = v11()) != 0 && v13(v14, 1, v19, 12, v20) != 0 && (v19[8] & 1) != 0 )
  {
    if ( (PVOID)dword_100C6BF4 != v3 )
    {
      v15 = (int (*)(void))_decode_pointer((void *)dword_100C6BF4);
      if ( v15 != nullptr )
      {
        v21 = v15();
        if ( v21 != 0 && (PVOID)dword_100C6BF8 != v3 )
        {
          v16 = (int (__stdcall *)(int))_decode_pointer((void *)dword_100C6BF8);
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
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_100C6BF0);
  if ( v17 != nullptr )
    return v17(v21, a1, a2, a3);
  return 0;
}

// Address: 0x1002511E
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

// Address: 0x10025192
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

// Address: 0x10025247
int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_100C6240;
      dword_100C6240 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_100C6240;
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x10025292
int __cdecl _isdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 4;
  else
    result = _isctype_l(C, 4, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x100252E3
int __cdecl isdigit(int C)
{
  if ( dword_100C68FC != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_1003A8C0[C] & 4;
}

// Address: 0x10025311
int __cdecl _isxdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 0x80;
  else
    result = _isctype_l(C, 128, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x10025367
int __cdecl isxdigit(int C)
{
  if ( dword_100C68FC != 0 )
    return _isxdigit_l(C, nullptr);
  else
    return off_1003A8C0[C] & 0x80;
}

// Address: 0x10025397
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

// Address: 0x10025503
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x10025520
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

  v8 = dword_100C6C04;
  v9 = nullptr;
  v10 = v7;
  if ( dword_100C6C04 == 0 )
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, CharType) )
    {
      dword_100C6C04 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v8 = 2;
      dword_100C6C04 = 2;
    }
    else
    {
      v8 = dword_100C6C04;
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

// Address: 0x100256DA
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

// Address: 0x1002571C
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

// Address: 0x100258B1
void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)a1 != off_1003ADF8 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_1003ADFC )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_1003AE00 )
      free(v1);
  }
}

// Address: 0x100258F6
void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_1003AE04 )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_1003AE08 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_1003AE0C )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_1003AE10 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_1003AE14 )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_1003AE18 )
      free(*(void **)(a1 + 32));
    v1 = *(void **)(a1 + 36);
    if ( v1 != off_1003AE1C )
      free(v1);
  }
}

// Address: 0x10025990
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

// Address: 0x100259E0
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

// Address: 0x10025A20
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

// Address: 0x10025A77
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
    *(_DWORD *)CharType = (unsigned __int16)(Type & *((_WORD *)off_1003AD34 + C));
  }
  return Type & CharType[0];
}

// Address: 0x10025B01
int __cdecl iswctype(wint_t C, wctype_t Type)
{
  int v2; // ecx
  int CharType; // [esp+0h] [ebp-4h] BYREF

  CharType = v2;
  if ( C == 0xFFFF )
    return 0;
  if ( C < 0x100u )
    return Type & *((_WORD *)off_1003AD34 + C);
  if ( dword_100C68FC == 0 )
    __crtGetStringTypeW((struct localeinfo_struct *)&off_1003A8D8, 1u, &C, 1, (LPWORD)&CharType);
  return _iswctype_l(C, Type, nullptr);
}

// Address: 0x10025B77
wint_t __cdecl _fgetwc_nolock(FILE *Stream)
{
  FILE *v1; // esi
  int *v2; // edi
  LPCRITICAL_SECTION *v3; // eax
  bool v4; // sf
  int v5; // eax
  wint_t result; // ax
  int v7; // eax
  int *v8; // edi
  LPCRITICAL_SECTION *v9; // eax
  size_t v10; // edi
  int v11; // eax
  int v12; // eax
  char SrcCh[4]; // [esp+Ch] [ebp-4h] BYREF

  v1 = Stream;
  if ( (Stream->_flag & 0x40) == 0 )
  {
    if ( _fileno(Stream) == -1 || _fileno(v1) == -2 )
    {
      v3 = dword_1003AA08;
    }
    else
    {
      v2 = &dword_100C7D20[_fileno(v1) >> 5];
      v3 = (LPCRITICAL_SECTION *)(*v2 + ((_fileno(v1) & 0x1F) << 6));
    }
    if ( ((_BYTE)v3[9] & 0x7F) != 0 )
    {
      v4 = --v1->_cnt < 0;
      if ( v4 )
        v5 = _filbuf(v1);
      else
        v5 = *(unsigned __int8 *)v1->_ptr++;
      if ( v5 != -1 )
      {
        v4 = --v1->_cnt < 0;
        LOBYTE(Stream) = v5;
        if ( v4 )
          v7 = _filbuf(v1);
        else
          v7 = *(unsigned __int8 *)v1->_ptr++;
        if ( v7 != -1 )
        {
          BYTE1(Stream) = v7;
          return (unsigned __int16)Stream;
        }
      }
      return -1;
    }
    if ( (v1->_flag & 0x40) == 0 )
    {
      if ( _fileno(v1) == -1 || _fileno(v1) == -2 )
      {
        v9 = dword_1003AA08;
      }
      else
      {
        v8 = &dword_100C7D20[_fileno(v1) >> 5];
        v9 = (LPCRITICAL_SECTION *)(*v8 + ((_fileno(v1) & 0x1F) << 6));
      }
      if ( *((char *)v9 + 4) < 0 )
      {
        v10 = 1;
        v4 = --v1->_cnt < 0;
        if ( v4 )
          v11 = _filbuf(v1);
        else
          v11 = *(unsigned __int8 *)v1->_ptr++;
        if ( v11 == -1 )
          return -1;
        SrcCh[0] = v11;
        if ( isleadbyte((unsigned __int8)v11) != 0 )
        {
          v4 = --v1->_cnt < 0;
          if ( v4 )
            v12 = _filbuf(v1);
          else
            v12 = *(unsigned __int8 *)v1->_ptr++;
          if ( v12 == -1 )
          {
            ungetc(SrcCh[0], v1);
            return -1;
          }
          SrcCh[1] = v12;
          v10 = 2;
        }
        if ( mbtowc((wchar_t *)&Stream, SrcCh, v10) != -1 )
          return (unsigned __int16)Stream;
        *_errno() = 42;
        return -1;
      }
    }
  }
  v4 = v1->_cnt - 2 < 0;
  v1->_cnt -= 2;
  if ( v4 )
    return _filwbuf(v1);
  result = *(_WORD *)v1->_ptr;
  v1->_ptr += 2;
  return result;
}

// Address: 0x10025D22
wint_t __cdecl _ungetwc_nolock(wint_t Character, FILE *Stream)
{
  wint_t v2; // bx
  int flag; // eax
  int *v4; // edi
  LPCRITICAL_SECTION *v5; // eax
  int *v6; // edi
  LPCRITICAL_SECTION *v7; // eax
  wint_t v8; // dx
  int v9; // eax
  char *v10; // ecx
  int v11; // ecx
  char *v13; // eax
  char *ptr; // eax
  int v15; // eax
  int SizeConverted; // [esp+Ch] [ebp-10h] BYREF
  char MbCh[8]; // [esp+10h] [ebp-Ch] BYREF

  v2 = Character;
  if ( Character == 0xFFFF )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && ((flag & 0x80u) == 0 || (flag & 2) != 0) )
    return -1;
  if ( Stream->_base == nullptr )
    _getbuf(Stream);
  if ( (Stream->_flag & 0x40) != 0 )
  {
LABEL_30:
    v13 = Stream->_base + 2;
    if ( Stream->_ptr < v13 )
    {
      if ( Stream->_cnt != 0 || Stream->_bufsiz < 2u )
        return -1;
      Stream->_ptr = v13;
    }
    Stream->_ptr -= 2;
    ptr = Stream->_ptr;
    if ( (Stream->_flag & 0x40) != 0 )
    {
      if ( *(_WORD *)ptr != v2 )
      {
        Stream->_ptr = ptr + 2;
        return -1;
      }
    }
    else
    {
      *(_WORD *)ptr = v2;
    }
    v15 = Stream->_flag;
    Stream->_cnt += 2;
    Stream->_flag = v15 & 0xFFFFFFEE | 1;
    return v2;
  }
  if ( _fileno(Stream) == -1 || _fileno(Stream) == -2 )
  {
    v5 = dword_1003AA08;
  }
  else
  {
    v4 = &dword_100C7D20[_fileno(Stream) >> 5];
    v5 = (LPCRITICAL_SECTION *)(*v4 + ((_fileno(Stream) & 0x1F) << 6));
  }
  if ( *((char *)v5 + 4) >= 0 )
  {
    v2 = Character;
    goto LABEL_30;
  }
  if ( _fileno(Stream) == -1 || _fileno(Stream) == -2 )
  {
    v7 = dword_1003AA08;
  }
  else
  {
    v6 = &dword_100C7D20[_fileno(Stream) >> 5];
    v7 = (LPCRITICAL_SECTION *)(*v6 + ((_fileno(Stream) & 0x1F) << 6));
  }
  if ( ((_BYTE)v7[9] & 0x7F) != 0 )
  {
    v8 = Character;
    v9 = 2;
    *(_WORD *)MbCh = Character;
    SizeConverted = 2;
  }
  else
  {
    if ( wctomb_s(&SizeConverted, MbCh, 5u, Character) != 0 )
      return -1;
    v9 = SizeConverted;
    v8 = Character;
  }
  v10 = &Stream->_base[v9];
  if ( Stream->_ptr < v10 )
  {
    if ( Stream->_cnt == 0 && v9 <= Stream->_bufsiz )
    {
      Stream->_ptr = v10;
      goto LABEL_25;
    }
    return -1;
  }
LABEL_25:
  v11 = v9 - 1;
  if ( v9 - 1 >= 0 )
  {
    do
      *--Stream->_ptr = MbCh[v11--];
    while ( v11 >= 0 );
    v9 = SizeConverted;
  }
  Stream->_cnt += v9;
  Stream->_flag = Stream->_flag & 0xFFFFFFEE | 1;
  return v8;
}

// Address: 0x10025EDC
unsigned int __cdecl _wcstombs_l_helper(
        CHAR *a1,
        LPCWCH lpWideCharStr,
        unsigned int cchWideChar,
        struct localeinfo_struct *a4)
{
  LPCWCH v4; // edi
  unsigned int result; // eax
  UINT *v6; // esi
  __int16 v7; // cx
  unsigned int v8; // ecx
  LPCWCH v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // edx
  CHAR v14; // cl
  const WCHAR *v15; // [esp+Ch] [ebp-2Ch]
  int v16; // [esp+14h] [ebp-24h]
  UINT *v17; // [esp+18h] [ebp-20h] BYREF
  int v18; // [esp+20h] [ebp-18h]
  char v19; // [esp+24h] [ebp-14h]
  BOOL UsedDefaultChar; // [esp+28h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+2Ch] [ebp-Ch] BYREF

  v4 = lpWideCharStr;
  v15 = lpWideCharStr;
  v16 = 0;
  UsedDefaultChar = false;
  if ( a1 != nullptr && cchWideChar == 0 )
    return 0;
  if ( lpWideCharStr == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v17, a4);
  if ( a1 == nullptr )
  {
    if ( v17[5] == 0 )
    {
      result = wcslen(lpWideCharStr);
      goto LABEL_15;
    }
    result = WideCharToMultiByte(v17[1], 0, lpWideCharStr, -1, nullptr, 0, nullptr, &UsedDefaultChar);
    if ( result != 0 && !UsedDefaultChar )
    {
LABEL_54:
      --result;
LABEL_15:
      if ( v19 != 0 )
        *(_DWORD *)(v18 + 112) &= ~2u;
      return result;
    }
    goto LABEL_34;
  }
  v6 = v17;
  if ( v17[5] != 0 )
  {
    if ( v17[43] == 1 )
    {
      v8 = cchWideChar;
      if ( cchWideChar != 0 )
      {
        v9 = lpWideCharStr;
        do
        {
          if ( *v9 == 0 )
            break;
          ++v9;
          --v8;
        }
        while ( v8 != 0 );
        if ( v8 != 0 && *v9 == 0 )
          cchWideChar = v9 - lpWideCharStr + 1;
      }
      result = WideCharToMultiByte(v17[1], 0, lpWideCharStr, cchWideChar, a1, cchWideChar, nullptr, &UsedDefaultChar);
      if ( result != 0 && !UsedDefaultChar )
      {
        if ( a1[result - 1] != 0 )
          goto LABEL_15;
        goto LABEL_54;
      }
    }
    else
    {
      v10 = WideCharToMultiByte(v17[1], 0, lpWideCharStr, -1, a1, cchWideChar, nullptr, &UsedDefaultChar);
      v11 = v10;
      if ( v10 != 0 )
      {
        if ( !UsedDefaultChar )
        {
          result = v10 - 1;
          goto LABEL_15;
        }
      }
      else if ( !UsedDefaultChar && GetLastError() == 122 )
      {
LABEL_46:
        if ( v11 < cchWideChar )
        {
          v12 = WideCharToMultiByte(v6[1], 0, v15, 1, MultiByteStr, v6[43], nullptr, &UsedDefaultChar);
          if ( v12 == 0 || UsedDefaultChar || (unsigned int)v12 > 5 )
            goto LABEL_34;
          if ( v12 + v11 <= cchWideChar )
          {
            v13 = 0;
            while ( 1 )
            {
              v14 = MultiByteStr[v13];
              a1[v11] = v14;
              if ( v14 == 0 )
                break;
              ++v13;
              ++v11;
              if ( v13 >= v12 )
              {
                ++v15;
                goto LABEL_46;
              }
            }
          }
        }
        if ( v19 != 0 )
          *(_DWORD *)(v18 + 112) &= ~2u;
        return v11;
      }
    }
LABEL_34:
    *_errno() = 42;
    if ( v19 != 0 )
      *(_DWORD *)(v18 + 112) &= ~2u;
    return -1;
  }
  if ( cchWideChar != 0 )
  {
    while ( *v4 <= 0xFFu )
    {
      result = v16;
      a1[v16] = *(_BYTE *)v4;
      v7 = *v4++;
      if ( v7 == 0 )
        goto LABEL_15;
      ++v16;
      if ( result + 1 >= cchWideChar )
        goto LABEL_12;
    }
    goto LABEL_34;
  }
LABEL_12:
  if ( v19 != 0 )
    *(_DWORD *)(v18 + 112) &= ~2u;
  return v16;
}

// Address: 0x1002611E
errno_t __cdecl _wcstombs_s_l(
        size_t *PtNumOfCharConverted,
        char *Dst,
        size_t DstSizeInBytes,
        const wchar_t *Src,
        size_t MaxCountInBytes,
        _locale_t Locale)
{
  size_t v6; // eax
  unsigned int v7; // eax
  int *v9; // eax
  errno_t v10; // esi
  size_t v11; // eax
  int v12; // [esp-4h] [ebp-14h]
  errno_t v13; // [esp+Ch] [ebp-4h]

  v13 = 0;
  if ( Dst != nullptr )
  {
    if ( DstSizeInBytes != 0 )
      goto LABEL_3;
LABEL_15:
    v9 = _errno();
    v12 = 22;
LABEL_16:
    v10 = v12;
    *v9 = v12;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return v10;
  }
  if ( DstSizeInBytes != 0 )
    goto LABEL_15;
LABEL_3:
  if ( Dst != nullptr )
    *Dst = 0;
  if ( PtNumOfCharConverted != nullptr )
    *PtNumOfCharConverted = 0;
  v6 = MaxCountInBytes;
  if ( MaxCountInBytes > DstSizeInBytes )
    v6 = DstSizeInBytes;
  if ( v6 > 0x7FFFFFFF )
    goto LABEL_15;
  v7 = _wcstombs_l_helper(Dst, Src, v6, (struct localeinfo_struct *)Locale);
  if ( v7 == -1 )
  {
    if ( Dst != nullptr )
      *Dst = 0;
    return *_errno();
  }
  v11 = v7 + 1;
  if ( Dst != nullptr )
  {
    if ( v11 > DstSizeInBytes )
    {
      if ( MaxCountInBytes != -1 )
      {
        *Dst = 0;
        if ( DstSizeInBytes <= v11 )
        {
          v9 = _errno();
          v12 = 34;
          goto LABEL_16;
        }
      }
      v11 = DstSizeInBytes;
      v13 = 80;
    }
    Dst[v11 - 1] = 0;
  }
  if ( PtNumOfCharConverted != nullptr )
    *PtNumOfCharConverted = v11;
  return v13;
}

// Address: 0x100261D8
errno_t __cdecl wcstombs_s(
        size_t *PtNumOfCharConverted,
        char *Dst,
        size_t DstSizeInBytes,
        const wchar_t *Src,
        size_t MaxCountInBytes)
{
  return _wcstombs_s_l(PtNumOfCharConverted, Dst, DstSizeInBytes, Src, MaxCountInBytes, nullptr);
}

// Address: 0x10026200
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x10026234
int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0;
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) != 0 )
    return atol(LCData);
  else
    return -1;
}

// Address: 0x1002627D
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

// Address: 0x10026440
int _alloca_probe_16()
{
  return _alloca_probe();
}

// Address: 0x10026456
int _alloca_probe_8()
{
  return _alloca_probe();
}

// Address: 0x1002646C
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

// Address: 0x100264BF
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x100264D7
// Microsoft VisualC 2-14/net runtime
BOOL __cdecl unknown_libname_2(int a1)
{
  return a1 != 0;
}

// Address: 0x100264EC
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x1002650C
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

// Address: 0x10026551
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

// Address: 0x100265D5
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

// Address: 0x100265F8
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x1002660C);
}

// Address: 0x10026601
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_1003AE48 = a3;
  unk_1003AE44 = result;
  unk_1003AE4C = a2;
  return result;
}

// Address: 0x10026620
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x10026623
int __cdecl atol(const char *String)
{
  return strtol(String, nullptr, 10);
}

// Address: 0x10026639
int _fptrap()
{
  return _amsg_exit(2);
}

// Address: 0x10026642
int __cdecl _free_osfhnd(int a1)
{
  int *v1; // edi
  int v2; // esi
  _DWORD *v3; // eax

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = &dword_100C7D20[a1 >> 5], v2 = (a1 & 0x1F) << 6, ((v3 = (_DWORD *)(v2 + *v1))[1] & 1) == 0)
    || *v3 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_100C6244 == 1 )
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

// Address: 0x100266C8
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
         && ((v2 = (intptr_t *)(dword_100C7D20[FileHandle >> 5] + ((FileHandle & 0x1F) << 6)))[1] & 1) != 0 )
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

// Address: 0x1002673F
BOOL __cdecl __lock_fhandle(int a1)
{
  int v1; // esi
  BOOL inited; // [esp+10h] [ebp-1Ch]

  v1 = dword_100C7D20[a1 >> 5] + ((a1 & 0x1F) << 6);
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
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_100C7D20[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
  return inited;
}

// Address: 0x100267DF
void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_100C7D20[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}

// Address: 0x10026806
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( dword_1003AE50 == 0 )
    goto LABEL_10;
  if ( hConsoleOutput == (HANDLE)-2 )
    __initconout();
  if ( hConsoleOutput == (HANDLE)-1 )
    return -1;
  if ( !WriteConsoleW(hConsoleOutput, &Character, 1u, &NumberOfCharsWritten, nullptr) )
  {
    if ( dword_1003AE50 != 2 || GetLastError() != 120 )
      return -1;
    dword_1003AE50 = 0;
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP();
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, &Character, 1, MultiByteStr, 5, nullptr, nullptr);
    if ( hConsoleOutput != (HANDLE)-1 && WriteConsoleA(hConsoleOutput, MultiByteStr, v3, &NumberOfCharsWritten, nullptr) )
      return Character;
    return -1;
  }
  dword_1003AE50 = 1;
  return Character;
}

// Address: 0x100268D0
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

// Address: 0x100268FB
int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // esi
  int *v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  _lock(1);
  for ( i = 3; i < dword_100C7D00; ++i )
  {
    v1 = 4 * i;
    v2 = (int *)((char *)dword_100C6CEC + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 && fclose((FILE *)v3) != -1 )
        ++v5;
      if ( i >= 20 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_100C6CEC + v1) + 32));
        free(*(void **)((char *)dword_100C6CEC + v1));
        *(_DWORD *)((char *)dword_100C6CEC + v1) = 0;
      }
    }
  }
  _unlock(1);
  return v5;
}

// Address: 0x1002699A
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

// Address: 0x10026A02
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

// Address: 0x10026A4A
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
  for ( i = 0; i < dword_100C7D00; ++i )
  {
    v2 = (int *)((char *)dword_100C6CEC + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 )
      {
        _lock_file2(i, v3);
        v4 = *(_DWORD *)(*((_DWORD *)dword_100C6CEC + i) + 12);
        if ( (v4 & 0x83) != 0 )
        {
          if ( a1 == 1 )
          {
            if ( _fflush_nolock(*((FILE **)dword_100C6CEC + i)) != -1 )
              ++v7;
          }
          else if ( a1 == 0 && (v4 & 2) != 0 && _fflush_nolock(*((FILE **)dword_100C6CEC + i)) == -1 )
          {
            v6 = -1;
          }
        }
        _unlock_file2(i, *((_DWORD *)dword_100C6CEC + i));
      }
    }
  }
  _unlock(1);
  result = v7;
  if ( a1 != 1 )
    return v6;
  return result;
}

// Address: 0x10026B24
int sub_10026B24()
{
  return flsall(1);
}

// Address: 0x10026B2D
int __cdecl _flswbuf(unsigned __int16 a1, FILE *FileHandle)
{
  int flag; // eax
  int v5; // eax
  unsigned int v6; // eax
  char *base; // eax
  char *ptr; // edi
  signed int v9; // edi
  LPCRITICAL_SECTION *v10; // eax
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
    && (FileHandle != (FILE *)(sub_10024A67() + 8) && FileHandle != (FILE *)(sub_10024A67() + 16)
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
        v10 = dword_1003AA08;
      else
        v10 = (LPCRITICAL_SECTION *)(dword_100C7D20[FileHandlea >> 5] + ((FileHandlea & 0x1F) << 6));
      if ( ((_BYTE)v10[1] & 0x20) != 0 )
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

// Address: 0x10026CA1
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

// Address: 0x10026ED0
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_100C68FC != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_1003A8D8, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x10026EFB
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

// Address: 0x10026F39
int __cdecl _filwbuf(FILE *Stream)
{
  int flag; // eax
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  int *v5; // edi
  LPCRITICAL_SECTION *v6; // eax
  int v7; // eax
  char *ptr; // ecx
  int result; // eax
  char *base; // [esp-8h] [ebp-10h]
  unsigned int bufsiz; // [esp-4h] [ebp-Ch]

  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0xFFFF;
  }
  flag = Stream->_flag;
  if ( (flag & 0x83) == 0 || (flag & 0x40) != 0 )
    return 0xFFFF;
  if ( (flag & 2) != 0 )
  {
    Stream->_flag = flag | 0x20;
    return 0xFFFF;
  }
  v2 = flag | 1;
  Stream->_flag = v2;
  if ( (v2 & 0x10C) != 0 )
    Stream->_ptr = Stream->_base;
  else
    _getbuf(Stream);
  bufsiz = Stream->_bufsiz;
  base = Stream->_base;
  v3 = _fileno(Stream);
  v4 = _read(v3, base, bufsiz);
  Stream->_cnt = v4;
  if ( v4 < 2 || v4 == -1 )
  {
    Stream->_flag |= v4 != 0 ? 32 : 16;
    Stream->_cnt = 0;
    return 0xFFFF;
  }
  if ( (Stream->_flag & 0x82) == 0 )
  {
    if ( _fileno(Stream) == -1 || _fileno(Stream) == -2 )
    {
      v6 = dword_1003AA08;
    }
    else
    {
      v5 = &dword_100C7D20[_fileno(Stream) >> 5];
      v6 = (LPCRITICAL_SECTION *)(*v5 + ((_fileno(Stream) & 0x1F) << 6));
    }
    if ( ((_BYTE)v6[1] & 0x82) == 0x82 )
      Stream->_flag |= 0x2000u;
  }
  if ( Stream->_bufsiz == 512 )
  {
    v7 = Stream->_flag;
    if ( (v7 & 8) != 0 && (v7 & 0x400) == 0 )
      Stream->_bufsiz = 4096;
  }
  ptr = Stream->_ptr;
  Stream->_cnt -= 2;
  result = *(unsigned __int16 *)ptr;
  Stream->_ptr = ptr + 2;
  return result;
}

// Address: 0x10027072
int __cdecl _ungetc_nolock(int Character, FILE *Stream)
{
  int v2; // eax
  LPCRITICAL_SECTION *v3; // ecx
  LPCRITICAL_SECTION *v4; // eax
  int flag; // eax
  char *v7; // eax
  int v8; // eax

  if ( (Stream->_flag & 0x40) == 0 )
  {
    v2 = _fileno(Stream);
    if ( v2 == -1 || v2 == -2 )
      v3 = dword_1003AA08;
    else
      v3 = (LPCRITICAL_SECTION *)(dword_100C7D20[v2 >> 5] + ((v2 & 0x1F) << 6));
    if ( ((_BYTE)v3[9] & 0x7F) != 0
      || (v2 == -1 || v2 == -2
        ? (v4 = dword_1003AA08)
        : (v4 = (LPCRITICAL_SECTION *)(dword_100C7D20[v2 >> 5] + ((v2 & 0x1F) << 6))),
          *((char *)v4 + 36) < 0) )
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

// Address: 0x10027163
int __cdecl ungetc(int Character, FILE *Stream)
{
  int v3; // [esp+10h] [ebp-1Ch]

  if ( Stream != nullptr )
  {
    _lock_file(Stream);
    v3 = _ungetc_nolock(Character, Stream);
    _unlock_file(Stream);
    return v3;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x100271D5
int __cdecl _filbuf(FILE *File)
{
  int flag; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int *v5; // edi
  LPCRITICAL_SECTION *v6; // eax
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
      v6 = dword_1003AA08;
    }
    else
    {
      v5 = &dword_100C7D20[_fileno(File) >> 5];
      v6 = (LPCRITICAL_SECTION *)(*v5 + ((_fileno(File) & 0x1F) << 6));
    }
    if ( ((_BYTE)v6[1] & 0x82) == 0x82 )
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

// Address: 0x10027300
HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  hConsoleOutput = result;
  return result;
}

// Address: 0x1002731F
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 )
    CloseHandle(hConsoleOutput);
  result = dword_1003AF10;
  if ( dword_1003AF10 != (HANDLE)-1 && dword_1003AF10 != (HANDLE)-2 )
    return (HANDLE)CloseHandle(dword_1003AF10);
  return result;
}

// Address: 0x1002734C
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

// Address: 0x100273C3
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

// Address: 0x1002743F
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
    || (v2 = &dword_100C7D20[FileHandle >> 5], (*(_BYTE *)((v3 = (FileHandle & 0x1F) << 6) + *v2 + 4) & 1) == 0) )
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

// Address: 0x10027520
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

// Address: 0x10027581
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
  v5 = &dword_100C7D20[FileHandle >> 5];
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
        while ( byte_1003AF80[v26] == 0 && v27 <= 4 && v25 >= lpMultiByteStr )
        {
          v26 = (unsigned __int8)*--v25;
          ++v27;
        }
        v28 = *v25;
        if ( byte_1003AF80[(unsigned __int8)*v25] == 0 )
        {
          *_errno() = 42;
LABEL_93:
          v41 = -1;
          goto $error_return$28993;
        }
        if ( byte_1003AF80[(unsigned __int8)*v25] + 1 == v27 )
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

// Address: 0x10027B43
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
    || (v4 = &dword_100C7D20[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x10027C40
int __cdecl _close_nolock(int FileHandle)
{
  intptr_t osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_100C7D20[0] + 132) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_100C7D20[0] + 68) & 1) != 0)
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
  *(_BYTE *)(dword_100C7D20[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) = 0;
  if ( LastError == 0 )
    return 0;
  _dosmaperr(LastError);
  return -1;
}

// Address: 0x10027CDC
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
    || (v2 = &dword_100C7D20[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v2 + v3 + 4) & 1) == 0) )
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

// Address: 0x10027DA9
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

// Address: 0x10027DE0
// positive sp value has been detected, the output may be wrong!
int __fastcall found_bx(int a1, int a2)
{
  return a2 - 1;
}

// Address: 0x10027DF0
char *__cdecl strchr(const char *Str, int Val)
{
  return __from_strstr_to_strchr((unsigned __int8)Val, Str);
}

// Address: 0x10027DF6
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

// Address: 0x10027EAE
// attributes: thunk
BOOL __stdcall WTSQueryUserToken(ULONG SessionId, PHANDLE phToken)
{
  return __imp_WTSQueryUserToken(SessionId, phToken);
}

// Address: 0x10027EB4
// attributes: thunk
BOOL __stdcall GetFileVersionInfoW(LPCWSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
{
  return __imp_GetFileVersionInfoW(lptstrFilename, dwHandle, dwLen, lpData);
}

// Address: 0x10027EBA
// attributes: thunk
BOOL __stdcall VerQueryValueW(LPCVOID pBlock, LPCWSTR lpSubBlock, LPVOID *lplpBuffer, PUINT puLen)
{
  return __imp_VerQueryValueW(pBlock, lpSubBlock, lplpBuffer, puLen);
}

// Address: 0x10027EC0
// attributes: thunk
DWORD __stdcall GetFileVersionInfoSizeW(LPCWSTR lptstrFilename, LPDWORD lpdwHandle)
{
  return __imp_GetFileVersionInfoSizeW(lptstrFilename, lpdwHandle);
}

// Address: 0x10027EC6
// attributes: thunk
BOOL __stdcall CryptCATAdminAcquireContext(HCATADMIN *phCatAdmin, const GUID *pgSubsystem, DWORD dwFlags)
{
  return __imp_CryptCATAdminAcquireContext(phCatAdmin, pgSubsystem, dwFlags);
}

// Address: 0x10027ECC
// attributes: thunk
LONG __stdcall WinVerifyTrust(HWND hwnd, GUID *pgActionID, LPVOID pWVTData)
{
  return __imp_WinVerifyTrust(hwnd, pgActionID, pWVTData);
}

// Address: 0x10027ED2
// attributes: thunk
CRYPT_PROVIDER_SGNR *__stdcall WTHelperGetProvSignerFromChain(
        CRYPT_PROVIDER_DATA *pProvData,
        DWORD idxSigner,
        BOOL fCounterSigner,
        DWORD idxCounterSigner)
{
  return __imp_WTHelperGetProvSignerFromChain(pProvData, idxSigner, fCounterSigner, idxCounterSigner);
}

// Address: 0x10027ED8
// attributes: thunk
BOOL __stdcall CryptCATAdminReleaseContext(HCATADMIN hCatAdmin, DWORD dwFlags)
{
  return __imp_CryptCATAdminReleaseContext(hCatAdmin, dwFlags);
}

// Address: 0x10027EDE
// attributes: thunk
CRYPT_PROVIDER_DATA *__stdcall WTHelperProvDataFromStateData(HANDLE hStateData)
{
  return __imp_WTHelperProvDataFromStateData(hStateData);
}

// Address: 0x10027EE4
// attributes: thunk
BOOL __stdcall CryptCATAdminCalcHashFromFileHandle(HANDLE hFile, DWORD *pcbHash, BYTE *pbHash, DWORD dwFlags)
{
  return __imp_CryptCATAdminCalcHashFromFileHandle(hFile, pcbHash, pbHash, dwFlags);
}

// Address: 0x10027EEA
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x10027EF0
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

// Address: 0x10027F9A
void nullsub_1()
{
  ;
}

// Address: 0x10027F9B
int (__cdecl *_cfltcvt_init())(int, int, int, int, size_t Size, int)
{
  off_1003AA80[0] = (int (*)())_cfltcvt;
  off_1003AA84[0] = (int (*)())_cropzeros;
  off_1003AA88[0] = (int (*)())_fassign;
  off_1003AA8C[0] = (int (*)())_forcdecpt;
  off_1003AA90[0] = (int (*)())_positive;
  off_1003AA94[0] = (int (*)())_cfltcvt;
  off_1003AA98[0] = (int (*)())_cfltcvt_l;
  off_1003AA9C[0] = (int (*)())_fassign_l;
  off_1003AAA0[0] = (int (*)())_cropzeros_l;
  off_1003AAA4 = (int (*)())_forcdecpt_l;
  return _cfltcvt;
}

// Address: 0x10027FFB
int __cdecl _fpmath(int a1)
{
  int result; // eax

  _cfltcvt_init();
  result = _ms_p5_mp_test_fdiv();
  dword_100C6CE4 = result;
  if ( a1 != 0 )
    result = _setdefaultprecision();
  __asm { fnclex }
  return result;
}

// Address: 0x1002801E
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

// Address: 0x10028091
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

// Address: 0x10028113
BOOL __cdecl _positive(double *a1)
{
  return *a1 >= 0.0;
}

// Address: 0x1002812F
_QWORD *__cdecl _fassign_l(int a1, _QWORD *a2, int a3, struct localeinfo_struct *a4)
{
  _QWORD *result; // eax
  __int64 v5; // [esp+0h] [ebp-8h] BYREF

  if ( a1 != 0 )
  {
    sub_10028BBD((int)&v5, a3, a4);
    result = a2;
    *a2 = v5;
  }
  else
  {
    sub_10028C65((int)&a1, a3, a4);
    result = a2;
    *(_DWORD *)a2 = a1;
  }
  return result;
}

// Address: 0x10028171
_QWORD *__cdecl _fassign(int a1, _QWORD *a2, int a3)
{
  return _fassign_l(a1, a2, a3, nullptr);
}

// Address: 0x1002818B
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

// Address: 0x100281AA
char __cdecl _forcdecpt(char *a1)
{
  return _forcdecpt_l(a1, nullptr);
}

// Address: 0x100281BD
char *__cdecl _cropzeros(char *a1)
{
  return _cropzeros_l(a1, nullptr);
}

// Address: 0x100281D0
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
  if ( (byte_100C6CE8 & 1) != 0 && *v15 == 48 )
    memcpy(v15, v15 + 1, 3u);
  if ( v23 != 0 )
    *(_DWORD *)(v22 + 112) &= ~2u;
  return 0;
}

// Address: 0x1002833F
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

// Address: 0x1002840F
int __cdecl _cftoe(_DWORD *a1, _BYTE *a2, unsigned int a3, int a4, int a5)
{
  return _cftoe_l(a1, a2, a3, a4, a5, nullptr);
}

// Address: 0x1002842F
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

// Address: 0x100287A2
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

// Address: 0x10028899
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

// Address: 0x10028954
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

// Address: 0x10028A4E
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

// Address: 0x10028AD6
int __cdecl _cfltcvt(_DWORD *a1, char *a2, int a3, int a4, size_t Size, int a6)
{
  return _cfltcvt_l(a1, a2, a3, a4, Size, a6, nullptr);
}

// Address: 0x10028AF9
errno_t _setdefaultprecision()
{
  errno_t result; // eax

  result = _controlfp_s(nullptr, 0x10000u, 0x30000u);
  if ( result != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return result;
}

// Address: 0x10028B24
BOOL _ms_p5_test_fdiv()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0;
}

// Address: 0x10028B62
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

// Address: 0x10028B90
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

// Address: 0x10028BBD
int __cdecl sub_10028BBD(int a1, int a2, struct localeinfo_struct *a3)
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
  v3 = sub_1002908B(v11, a1);
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

// Address: 0x10028C65
int __cdecl sub_10028C65(int a1, int a2, struct localeinfo_struct *a3)
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
  v3 = sub_100295CF(v11, a1);
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

// Address: 0x10028D0D
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

// Address: 0x10028DCC
int *__cdecl __dtold(int *a1, int *a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  __int16 v7; // cx
  __int16 v8; // di
  int *result; // eax
  __int16 v10; // cx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // [esp+Ch] [ebp-4h]
  __int16 v15; // [esp+1Ch] [ebp+Ch]

  v3 = (*((unsigned __int16 *)a2 + 3) >> 4) & 0x7FF;
  v15 = *((_WORD *)a2 + 3) & 0x8000;
  v4 = a2[1];
  v5 = *a2;
  v6 = v4 & 0xFFFFF;
  v14 = 0x80000000;
  if ( (_WORD)v3 == 0 )
  {
    if ( v6 == 0 && v5 == 0 )
    {
      result = a1;
      v10 = v15;
      a1[1] = 0;
      *a1 = 0;
      goto LABEL_13;
    }
    v7 = 15361;
    v14 = 0;
    goto LABEL_9;
  }
  if ( (unsigned __int16)v3 != 2047 )
  {
    v7 = v3 + 15360;
LABEL_9:
    v8 = v7;
    goto LABEL_10;
  }
  v8 = 0x7FFF;
LABEL_10:
  v11 = v14 | (v6 << 11) | (v5 >> 21);
  result = a1;
  a1[1] = v11;
  *a1 = v5 << 11;
  if ( (v11 & 0x80000000) == 0 )
  {
    do
    {
      v12 = *(__int64 *)a1 >> 31;
      v13 = 2 * *a1;
      --v8;
      a1[1] = v12;
      *a1 = v13;
    }
    while ( (v12 & 0x80000000) == 0 );
  }
  v10 = v8 | v15;
LABEL_13:
  *((_WORD *)result + 4) = v10;
  return result;
}

// Address: 0x10028E89
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
  __dtold(v12, &a1);
  v7 = v12[2];
  v5[2] = _I10_OUTPUT(v12[0], v12[1], v7, 17, 0, &v9);
  *v5 = v10;
  v5[1] = v9;
  if ( strcpy_s(Destination, SizeInBytes, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v5[3] = Destination;
  return v5;
}

// Address: 0x10028F20
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

// Address: 0x10029000
unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}

// Address: 0x1002901F
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

// Address: 0x1002908B
int __cdecl sub_1002908B(unsigned __int16 *a1, unsigned int *a2)
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
    v8 = dword_100C5F18 - 1;
    v64 = v3;
    v65 = dword_100C5F18 / 32;
    v9 = &v60 + dword_100C5F18 / 32;
    v66 = 31 - dword_100C5F18 % 32;
    if ( ((1 << (31 - dword_100C5F18 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_100C5F18 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
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
    if ( v3 >= dword_100C5F14 - dword_100C5F18 )
    {
      if ( v3 > dword_100C5F14 )
      {
        if ( v3 < dword_100C5F10 )
        {
          v60 &= ~0x80000000;
          v5 = dword_100C5F24 + v3;
          v50 = dword_100C5F1C / 32;
          v51 = dword_100C5F1C % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_100C5F1C % 32;
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
          v43 = dword_100C5F1C / 32;
          v44 = dword_100C5F1C % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_100C5F1C % 32;
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
          v5 = dword_100C5F24 + dword_100C5F10;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_100C5F14 - v64) / 32;
      v62 = v59;
      v18 = (dword_100C5F14 - v64) % 32;
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
      v24 = dword_100C5F18 - 1;
      v25 = dword_100C5F18 / 32;
      v65 = dword_100C5F18 / 32;
      v26 = &v60 + dword_100C5F18 / 32;
      v64 = 31 - dword_100C5F18 % 32;
      if ( ((1 << (31 - dword_100C5F18 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_100C5F18 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
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
      v36 = (dword_100C5F1C + 1) / 32;
      v37 = (dword_100C5F1C + 1) % 32;
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
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_100C5F1C));
  if ( dword_100C5F20 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_100C5F20 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x100295CF
int __cdecl sub_100295CF(unsigned __int16 *a1, unsigned int *a2)
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
    v8 = dword_100C5F30 - 1;
    v64 = v3;
    v65 = dword_100C5F30 / 32;
    v9 = &v60 + dword_100C5F30 / 32;
    v66 = 31 - dword_100C5F30 % 32;
    if ( ((1 << (31 - dword_100C5F30 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_100C5F30 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
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
    if ( v3 >= dword_100C5F2C - dword_100C5F30 )
    {
      if ( v3 > dword_100C5F2C )
      {
        if ( v3 < dword_100C5F28 )
        {
          v60 &= ~0x80000000;
          v5 = dword_100C5F3C + v3;
          v50 = dword_100C5F34 / 32;
          v51 = dword_100C5F34 % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_100C5F34 % 32;
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
          v43 = dword_100C5F34 / 32;
          v44 = dword_100C5F34 % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_100C5F34 % 32;
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
          v5 = dword_100C5F3C + dword_100C5F28;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_100C5F2C - v64) / 32;
      v62 = v59;
      v18 = (dword_100C5F2C - v64) % 32;
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
      v24 = dword_100C5F30 - 1;
      v25 = dword_100C5F30 / 32;
      v65 = dword_100C5F30 / 32;
      v26 = &v60 + dword_100C5F30 / 32;
      v64 = 31 - dword_100C5F30 % 32;
      if ( ((1 << (31 - dword_100C5F30 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_100C5F30 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
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
      v36 = (dword_100C5F34 + 1) / 32;
      v37 = (dword_100C5F34 + 1) % 32;
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
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_100C5F34));
  if ( dword_100C5F38 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_100C5F38 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x10029B13
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
  __int16 v29; // cx
  __int16 v30; // si
  unsigned __int16 v31; // cx
  __int16 v32; // si
  unsigned __int16 v33; // dx
  int v34; // eax
  _WORD *v35; // edi
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // esi
  __int16 v39; // dx
  unsigned int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // esi
  int v44; // eax
  int v45; // edi
  int v46; // eax
  __int16 v47; // cx
  int v48; // esi
  unsigned int v49; // edx
  __int16 v50; // ax
  int v51; // [esp-4h] [ebp-8Ch]
  int v52; // [esp-4h] [ebp-8Ch]
  char *v53; // [esp+Ch] [ebp-7Ch]
  __int16 v54; // [esp+14h] [ebp-74h]
  __int16 v55; // [esp+18h] [ebp-70h]
  int v56; // [esp+1Ch] [ebp-6Ch]
  int v57; // [esp+20h] [ebp-68h]
  int v58; // [esp+20h] [ebp-68h]
  int v59; // [esp+24h] [ebp-64h]
  int v60; // [esp+24h] [ebp-64h]
  int v61; // [esp+28h] [ebp-60h]
  unsigned __int16 *v62; // [esp+28h] [ebp-60h]
  int v63; // [esp+2Ch] [ebp-5Ch]
  unsigned __int16 *v64; // [esp+2Ch] [ebp-5Ch]
  int v65; // [esp+30h] [ebp-58h]
  int i; // [esp+30h] [ebp-58h]
  char *v67; // [esp+34h] [ebp-54h]
  int v68; // [esp+34h] [ebp-54h]
  int v69; // [esp+38h] [ebp-50h]
  int v70; // [esp+38h] [ebp-50h]
  unsigned int v71; // [esp+3Ch] [ebp-4Ch]
  int v72; // [esp+3Ch] [ebp-4Ch]
  __int64 v73; // [esp+40h] [ebp-48h] BYREF
  int v74; // [esp+48h] [ebp-40h]
  _DWORD v75[7]; // [esp+4Ch] [ebp-3Ch] BYREF
  _BYTE v76[23]; // [esp+68h] [ebp-20h] BYREF
  char v77; // [esp+7Fh] [ebp-9h]

  v8 = 0;
  v9 = v76;
  v54 = 0;
  v57 = 1;
  v71 = 0;
  v65 = 0;
  v63 = 0;
  v61 = 0;
  v59 = 0;
  v69 = 0;
  v56 = 0;
  if ( a8 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
  v11 = a3;
  v67 = a3;
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
          v54 = 0;
          v8 = 2;
          continue;
        }
        v15 = v14 - 2;
        if ( v15 == 0 )
        {
          v8 = 2;
          v54 = 0x8000;
          continue;
        }
        if ( v15 != 3 )
          goto LABEL_75;
        goto LABEL_19;
      case 1:
        v65 = 1;
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
        v52 = 6;
        goto LABEL_15;
      case 2:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
        {
LABEL_11:
          v51 = 3;
LABEL_12:
          v8 = v51;
          --v11;
        }
        else
        {
          if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          {
LABEL_14:
            v52 = 5;
            goto LABEL_15;
          }
          if ( v13 != 48 )
          {
LABEL_37:
            v16 = v67;
            goto LABEL_82;
          }
LABEL_19:
          v8 = 1;
        }
        continue;
      case 3:
        v65 = 1;
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v71 >= 0x19 )
          {
            ++v69;
          }
          else
          {
            ++v71;
            *v9++ = v13 - 48;
          }
          v13 = *v11++;
        }
        if ( v13 != ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_46;
LABEL_24:
        v52 = 4;
        goto LABEL_15;
      case 4:
        v65 = 1;
        v63 = 1;
        if ( v71 == 0 )
        {
          while ( v13 == 48 )
          {
            --v69;
            v13 = *v11++;
          }
        }
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v71 < 0x19 )
          {
            ++v71;
            *v9++ = v13 - 48;
            --v69;
          }
          v13 = *v11++;
        }
LABEL_46:
        if ( v13 != 43 && v13 != 45 )
          goto LABEL_28;
LABEL_33:
        --v11;
        v52 = 11;
        goto LABEL_15;
      case 5:
        v63 = 1;
        if ( (unsigned __int8)(v13 - 48) > 9u )
          goto LABEL_37;
        v51 = 4;
        goto LABEL_12;
      case 6:
        v67 = v11 - 2;
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
        v52 = 8;
        goto LABEL_15;
      case 7:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_63;
        v19 = v13 == 48;
        goto LABEL_67;
      case 8:
        v61 = 1;
        while ( v13 == 48 )
          v13 = *v11++;
        if ( (unsigned __int8)(v13 - 49) > 8u )
          goto LABEL_75;
LABEL_63:
        v51 = 9;
        goto LABEL_12;
      case 9:
        v61 = 1;
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
        v59 = v21;
        while ( v13 >= 48 && v13 <= 57 )
          v13 = *v11++;
LABEL_75:
        v16 = v11 - 1;
        goto LABEL_82;
      case 11:
        if ( a7 != 0 )
        {
          v20 = v13 - 43;
          v67 = v11 - 1;
          if ( v20 != 0 )
          {
            if ( v20 != 2 )
            {
              v16 = v11 - 1;
              goto LABEL_82;
            }
LABEL_69:
            v57 = -1;
            v8 = 7;
          }
          else
          {
LABEL_70:
            v52 = 7;
LABEL_15:
            v8 = v52;
          }
          continue;
        }
        v16 = v11 - 1;
LABEL_82:
        *a2 = v16;
        if ( v65 == 0 )
        {
          v56 = 4;
LABEL_177:
          v47 = 0;
          v50 = 0;
          v49 = 0;
          v48 = 0;
          goto LABEL_178;
        }
        if ( v71 > 0x18 )
        {
          if ( v77 >= 5 )
            ++v77;
          --v9;
          ++v69;
          v71 = 24;
        }
        if ( v71 == 0 )
          goto LABEL_177;
        while ( *--v9 == 0 )
        {
          --v71;
          ++v69;
        }
        __mtold12(v76, v71, v75);
        v22 = v59;
        if ( v57 < 0 )
          v22 = -v59;
        v23 = v69 + v22;
        if ( v61 == 0 )
          v23 += a5;
        if ( v63 == 0 )
          v23 -= a6;
        if ( v23 > 5200 )
        {
          v48 = 0;
          v50 = 0x7FFF;
          v49 = 0x80000000;
          v47 = 0;
          v56 = 2;
          goto LABEL_178;
        }
        if ( v23 < -5200 )
        {
          v56 = 1;
          goto LABEL_177;
        }
        v24 = (char *)&unk_100C5F40 - 96;
        v68 = v23;
        if ( v23 != 0 )
        {
          if ( v23 < 0 )
          {
            v68 = -v23;
            v24 = (char *)&unk_100C60A0 - 96;
          }
          if ( a4 == 0 )
            LOWORD(v75[0]) = 0;
          if ( v68 != 0 )
          {
            while ( 1 )
            {
              v25 = v68;
              v68 >>= 3;
              v26 = v24 + 84;
              v27 = v25 & 7;
              v53 = v26;
              if ( v27 == 0 )
                goto LABEL_172;
              v28 = &v26[12 * v27];
              if ( *(_WORD *)v28 >= 0x8000u )
              {
                v73 = *(_QWORD *)v28;
                v74 = *((_DWORD *)v28 + 2);
                --*(_DWORD *)((char *)&v73 + 2);
                v28 = (char *)&v73;
              }
              v29 = *((_WORD *)v28 + 5);
              v70 = 0;
              memset(&v75[4], 0, 12);
              v30 = HIWORD(v75[2]) ^ v29;
              v31 = v29 & 0x7FFF;
              v32 = v30 & 0x8000;
              v55 = v32;
              v33 = v31 + (HIWORD(v75[2]) & 0x7FFF);
              if ( (HIWORD(v75[2]) & 0x7FFF) == 0x7FFF || v31 >= 0x7FFFu || v33 > 0xBFFDu )
                break;
              if ( v33 <= 0x3FBFu )
              {
                v34 = 0;
                v75[1] = 0;
                v75[0] = 0;
LABEL_171:
                v75[2] = v34;
                goto LABEL_172;
              }
              if ( (v75[2] & 0x7FFF0000) != 0 || (++v33, (v75[2] & 0x7FFFFFFF) != 0) || v75[1] != 0 || v75[0] != 0 )
              {
                if ( v31 != 0
                  || (++v33, (*((_DWORD *)v28 + 2) & 0x7FFFFFFF) != 0)
                  || *((_DWORD *)v28 + 1) != 0
                  || *(_DWORD *)v28 != 0 )
                {
                  v58 = 0;
                  v35 = &v75[5];
                  for ( i = 5; i > 0; --i )
                  {
                    v60 = i;
                    v64 = (unsigned __int16 *)v75 + v58;
                    v62 = (unsigned __int16 *)(v28 + 8);
                    do
                    {
                      v72 = 0;
                      v36 = *v64 * *v62;
                      v37 = *((_DWORD *)v35 - 1);
                      v38 = v37 + v36;
                      if ( v37 + v36 < v37 || v38 < v36 )
                        v72 = 1;
                      *((_DWORD *)v35 - 1) = v38;
                      if ( v72 != 0 )
                        ++*v35;
                      ++v64;
                      --v62;
                      --v60;
                    }
                    while ( v60 > 0 );
                    ++v35;
                    ++v58;
                  }
                  v39 = v33 - 16382;
                  if ( v39 <= 0 )
                    goto LABEL_181;
                  do
                  {
                    if ( v75[6] < 0 )
                      break;
                    v40 = v75[4];
                    v75[4] *= 2;
                    v41 = (v40 >> 31) | (2 * v75[5]);
                    v42 = *(__int64 *)&v75[5] >> 31;
                    --v39;
                    v75[5] = v41;
                    v75[6] = v42;
                  }
                  while ( v39 > 0 );
                  if ( v39 <= 0 )
                  {
LABEL_181:
                    if ( --v39 < 0 )
                    {
                      v43 = (unsigned __int16)-v39;
                      v39 = 0;
                      do
                      {
                        if ( (v75[4] & 1) != 0 )
                          ++v70;
                        v44 = v75[6];
                        v75[6] >>= 1;
                        v45 = (v44 << 31) | (v75[5] >> 1);
                        v46 = *(__int64 *)&v75[4] >> 1;
                        --v43;
                        v75[5] = v45;
                        v75[4] = v46;
                      }
                      while ( v43 != 0 );
                      if ( v70 != 0 )
                        LOWORD(v75[4]) |= 1u;
                    }
                  }
                  if ( LOWORD(v75[4]) > 0x8000u || (v75[4] & 0x1FFFF) == 0x18000 )
                  {
                    if ( *(_DWORD *)((char *)&v75[4] + 2) == -1 )
                    {
                      *(_DWORD *)((char *)&v75[4] + 2) = 0;
                      if ( *(_DWORD *)((char *)&v75[5] + 2) == -1 )
                      {
                        *(_DWORD *)((char *)&v75[5] + 2) = 0;
                        if ( HIWORD(v75[6]) == 0xFFFF )
                        {
                          HIWORD(v75[6]) = 0x8000;
                          ++v39;
                        }
                        else
                        {
                          ++HIWORD(v75[6]);
                        }
                      }
                      else
                      {
                        ++*(_DWORD *)((char *)&v75[5] + 2);
                      }
                    }
                    else
                    {
                      ++*(_DWORD *)((char *)&v75[4] + 2);
                    }
                  }
                  if ( (unsigned __int16)v39 < 0x7FFFu )
                  {
                    LOWORD(v75[0]) = HIWORD(v75[4]);
                    *(_QWORD *)((char *)v75 + 2) = *(_QWORD *)&v75[5];
                    HIWORD(v75[2]) = v55 | v39;
                  }
                  else
                  {
                    v75[1] = 0;
                    v75[0] = 0;
                    v75[2] = v55 == 0 ? 2147450880 : -32768;
                  }
                }
                else
                {
                  memset(v75, 0, 12);
                }
              }
              else
              {
                HIWORD(v75[2]) = 0;
              }
LABEL_172:
              if ( v68 == 0 )
                goto LABEL_173;
              v24 = v53;
            }
            v75[1] = 0;
            v34 = v32 == 0 ? 2147450880 : -32768;
            v75[0] = 0;
            goto LABEL_171;
          }
        }
LABEL_173:
        v47 = v75[0];
        v48 = *(_DWORD *)((char *)v75 + 2);
        v49 = *(_DWORD *)((char *)&v75[1] + 2);
        v50 = HIWORD(v75[2]);
LABEL_178:
        *(_WORD *)a1 = v47;
        *(_WORD *)(a1 + 10) = v54 | v50;
        *(_DWORD *)(a1 + 2) = v48;
        *(_DWORD *)(a1 + 6) = v49;
        return v56;
    }
  }
}

// Address: 0x1002A20B
int __cdecl _I10_OUTPUT(__int64 a1, __int16 a2, int a3, char a4, int a5)
{
  __int16 v5; // cx
  unsigned __int16 v6; // dx
  __int64 v7; // rdi
  errno_t v9; // eax
  errno_t v10; // eax
  __int16 v11; // ax
  int v12; // ebx
  int v13; // ecx
  char *v14; // eax
  _DWORD *v15; // esi
  __int16 v16; // dx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // di
  _WORD *v19; // esi
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int16 v23; // di
  unsigned int v24; // ecx
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // esi
  int v29; // ecx
  unsigned __int16 v30; // si
  int v31; // eax
  _WORD *v32; // edi
  unsigned __int16 *v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // ebx
  __int16 v37; // si
  unsigned int v38; // ecx
  unsigned int v39; // edx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // edi
  int v43; // ecx
  int v44; // edi
  int v45; // esi
  unsigned int v46; // eax
  int v47; // ebx
  int v48; // eax
  bool v49; // zf
  int v50; // esi
  int v51; // eax
  int v52; // ebx
  int v53; // eax
  _BYTE *v54; // ebx
  unsigned int v55; // edx
  unsigned int v56; // edi
  unsigned int v57; // ecx
  int v58; // esi
  int v59; // ecx
  unsigned int v60; // esi
  unsigned int v61; // edi
  int v62; // edx
  unsigned int v63; // edx
  char *v64; // ebx
  char v65; // al
  char *v66; // ebx
  int v67; // eax
  char v68; // bl
  __int16 v69; // [esp+10h] [ebp-70h]
  unsigned __int16 *v70; // [esp+14h] [ebp-6Ch]
  unsigned __int16 *v71; // [esp+18h] [ebp-68h]
  char *v72; // [esp+1Ch] [ebp-64h]
  int v73; // [esp+24h] [ebp-5Ch]
  __int16 v74; // [esp+24h] [ebp-5Ch]
  int v75; // [esp+28h] [ebp-58h]
  int v76; // [esp+28h] [ebp-58h]
  int v77; // [esp+2Ch] [ebp-54h]
  int v78; // [esp+2Ch] [ebp-54h]
  int v79; // [esp+30h] [ebp-50h]
  int v80; // [esp+30h] [ebp-50h]
  __int16 v81; // [esp+34h] [ebp-4Ch]
  int k; // [esp+34h] [ebp-4Ch]
  __int16 v83; // [esp+38h] [ebp-48h]
  int *v84; // [esp+38h] [ebp-48h]
  char *v85; // [esp+3Ch] [ebp-44h]
  int v86; // [esp+3Ch] [ebp-44h]
  int v87; // [esp+3Ch] [ebp-44h]
  unsigned int v88; // [esp+3Ch] [ebp-44h]
  int i; // [esp+40h] [ebp-40h]
  int j; // [esp+40h] [ebp-40h]
  char *v91; // [esp+40h] [ebp-40h]
  _BYTE v92[12]; // [esp+44h] [ebp-3Ch] BYREF
  int v93; // [esp+50h] [ebp-30h]
  int v94; // [esp+54h] [ebp-2Ch]
  int v95; // [esp+58h] [ebp-28h] BYREF
  _BYTE v96[12]; // [esp+60h] [ebp-20h] BYREF
  _BYTE v97[12]; // [esp+70h] [ebp-10h] BYREF

  *(_QWORD *)v97 = a1;
  *(_WORD *)&v97[8] = a2;
  v5 = a2 & 0x8000;
  v6 = a2 & 0x7FFF;
  v93 = -858993460;
  v94 = -858993460;
  v95 = 1073466572;
  v69 = a2 & 0x8000;
  if ( a2 >= 0 )
    *(_BYTE *)(a5 + 2) = 32;
  else
    *(_BYTE *)(a5 + 2) = 45;
  v7 = *(_QWORD *)v97;
  if ( v6 == 0 && *(_QWORD *)v97 == 0 )
  {
    *(_WORD *)a5 = 0;
    *(_BYTE *)(a5 + 2) = v5 != -32768 ? 32 : 45;
    *(_BYTE *)(a5 + 3) = 1;
    *(_BYTE *)(a5 + 4) = 48;
    *(_BYTE *)(a5 + 5) = 0;
    return 1;
  }
  if ( v6 == 0x7FFF )
  {
    *(_WORD *)a5 = 1;
    if ( v7 != 0x8000000000000000uLL && (v7 & 0x4000000000000000LL) == 0 )
    {
      v9 = strcpy_s((char *)(a5 + 4), 0x16u, "1#SNAN");
LABEL_22:
      if ( v9 != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      *(_BYTE *)(a5 + 3) = 6;
      return 0;
    }
    if ( v5 != 0 && HIDWORD(v7) == -1073741824 )
    {
      if ( (_DWORD)v7 == 0 )
      {
        v10 = strcpy_s((char *)(a5 + 4), 0x16u, "1#IND");
LABEL_18:
        if ( v10 != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        *(_BYTE *)(a5 + 3) = 5;
        return 0;
      }
    }
    else if ( v7 == 0x8000000000000000uLL )
    {
      v10 = strcpy_s((char *)(a5 + 4), 0x16u, "1#INF");
      goto LABEL_18;
    }
    v9 = strcpy_s((char *)(a5 + 4), 0x16u, "1#QNAN");
    goto LABEL_22;
  }
  v11 = (77 * (HIBYTE(v6) + 2 * HIBYTE(*(_DWORD *)&v97[4])) + 19728 * (unsigned int)v6 - 323162868) >> 16;
  *(_WORD *)v96 = 0;
  v12 = -v11;
  v81 = v11;
  *(_WORD *)&v96[10] = a2 & 0x7FFF;
  *(_QWORD *)&v96[2] = *(_QWORD *)v97;
  v72 = (char *)&unk_100C5F40 - 96;
  if ( v11 != 0 )
  {
    if ( v11 > 0 )
    {
      v12 = v11;
      v72 = (char *)&unk_100C60A0 - 96;
    }
    while ( v12 != 0 )
    {
      v72 += 84;
      v13 = v12 & 7;
      v12 >>= 3;
      if ( v13 != 0 )
      {
        v14 = &v72[12 * v13];
        v85 = v14;
        if ( *(_WORD *)v14 >= 0x8000u )
        {
          *(_DWORD *)v92 = *(_DWORD *)v14;
          *(_DWORD *)&v92[4] = *((_DWORD *)v14 + 1);
          v15 = v14 + 8;
          v14 = v92;
          *(_DWORD *)&v92[8] = *v15;
          --*(_DWORD *)&v92[2];
          v85 = v92;
        }
        v16 = *((_WORD *)v14 + 5);
        v77 = 0;
        memset(v97, 0, sizeof(v97));
        v83 = (*(_WORD *)&v96[10] ^ v16) & 0x8000;
        v17 = v16 & 0x7FFF;
        v18 = v17 + (*(_WORD *)&v96[10] & 0x7FFF);
        if ( (*(_WORD *)&v96[10] & 0x7FFF) == 0x7FFF || v17 >= 0x7FFFu || v18 > 0xBFFDu )
        {
          *(_DWORD *)&v96[8] = v83 == 0 ? 2147450880 : -32768;
        }
        else
        {
          if ( v18 > 0x3FBFu )
          {
            if ( (*(_WORD *)&v96[10] & 0x7FFF) == 0 )
            {
              ++v18;
              if ( (*(_DWORD *)&v96[8] & 0x7FFFFFFF) == 0 && *(_DWORD *)&v96[4] == 0 && *(_DWORD *)v96 == 0 )
              {
                *(_WORD *)&v96[10] = 0;
                continue;
              }
            }
            if ( v17 != 0
              || (++v18, (*((_DWORD *)v14 + 2) & 0x7FFFFFFF) != 0)
              || *((_DWORD *)v14 + 1) != 0
              || *(_DWORD *)v14 != 0 )
            {
              v75 = 0;
              v19 = &v97[4];
              for ( i = 5; i > 0; --i )
              {
                v79 = i;
                v70 = (unsigned __int16 *)&v96[2 * v75];
                v71 = (unsigned __int16 *)(v14 + 8);
                do
                {
                  v20 = *((_DWORD *)v19 - 1);
                  v21 = *v71 * *v70;
                  v73 = 0;
                  v22 = v20 + v21;
                  if ( v20 + v21 < v20 || v22 < v21 )
                    v73 = 1;
                  *((_DWORD *)v19 - 1) = v22;
                  if ( v73 != 0 )
                    ++*v19;
                  ++v70;
                  --v71;
                  --v79;
                }
                while ( v79 > 0 );
                v14 = v85;
                ++v19;
                ++v75;
              }
              v23 = v18 - 16382;
              if ( v23 <= 0 )
                goto LABEL_170;
              do
              {
                if ( *(int *)&v97[8] < 0 )
                  break;
                v24 = *(_DWORD *)v97;
                *(_DWORD *)v97 *= 2;
                v25 = *(_DWORD *)&v97[4];
                *(_DWORD *)&v97[4] = (v24 >> 31) | (2 * *(_DWORD *)&v97[4]);
                --v23;
                *(_DWORD *)&v97[8] = (v25 >> 31) | (2 * *(_DWORD *)&v97[8]);
              }
              while ( v23 > 0 );
              if ( v23 <= 0 )
              {
LABEL_170:
                if ( --v23 < 0 )
                {
                  v26 = (unsigned __int16)-v23;
                  v23 = 0;
                  do
                  {
                    if ( (v97[0] & 1) != 0 )
                      ++v77;
                    v27 = *(_DWORD *)&v97[8];
                    *(_DWORD *)&v97[8] >>= 1;
                    v28 = __SPAIR64__(v27, *(unsigned int *)&v97[4]) >> 1;
                    v29 = *(__int64 *)v97 >> 1;
                    --v26;
                    *(_DWORD *)&v97[4] = v28;
                    *(_DWORD *)v97 = v29;
                  }
                  while ( v26 != 0 );
                  if ( v77 != 0 )
                    *(_WORD *)v97 |= 1u;
                }
              }
              if ( *(_WORD *)v97 > 0x8000u || (*(_DWORD *)v97 & 0x1FFFF) == 0x18000 )
              {
                if ( *(_DWORD *)&v97[2] == -1 )
                {
                  *(_DWORD *)&v97[2] = 0;
                  if ( *(_DWORD *)&v97[6] == -1 )
                  {
                    *(_DWORD *)&v97[6] = 0;
                    if ( *(_WORD *)&v97[10] == 0xFFFF )
                    {
                      *(_WORD *)&v97[10] = 0x8000;
                      ++v23;
                    }
                    else
                    {
                      ++*(_WORD *)&v97[10];
                    }
                  }
                  else
                  {
                    ++*(_DWORD *)&v97[6];
                  }
                }
                else
                {
                  ++*(_DWORD *)&v97[2];
                }
              }
              if ( (unsigned __int16)v23 < 0x7FFFu )
              {
                *(_WORD *)v96 = *(_WORD *)&v97[2];
                *(_DWORD *)&v96[2] = *(_DWORD *)&v97[4];
                *(_DWORD *)&v96[6] = *(_DWORD *)&v97[8];
                *(_WORD *)&v96[10] = v83 | v23;
              }
              else
              {
                *(_DWORD *)&v96[4] = 0;
                *(_DWORD *)v96 = 0;
                *(_DWORD *)&v96[8] = v83 == 0 ? 2147450880 : -32768;
              }
              continue;
            }
          }
          *(_DWORD *)&v96[8] = 0;
        }
        *(_DWORD *)&v96[4] = 0;
        *(_DWORD *)v96 = 0;
      }
    }
  }
  if ( *(_WORD *)&v96[10] >= 0x3FFFu )
  {
    ++v81;
    v80 = 0;
    memset(v97, 0, sizeof(v97));
    v74 = (*(_WORD *)&v96[10] ^ HIWORD(v95)) & 0x8000;
    v30 = (HIWORD(v95) & 0x7FFF) + (*(_WORD *)&v96[10] & 0x7FFF);
    if ( (*(_WORD *)&v96[10] & 0x7FFF) == 0x7FFF || (HIWORD(v95) & 0x7FFF) == 0x7FFF || v30 > 0xBFFDu )
    {
      *(_DWORD *)&v96[4] = 0;
      v31 = ((*(_WORD *)&v96[10] ^ HIWORD(v95)) & 0x8000u) == 0 ? 2147450880 : -32768;
      *(_DWORD *)v96 = 0;
    }
    else
    {
      if ( v30 > 0x3FBFu )
      {
        v31 = 0;
        if ( (*(_WORD *)&v96[10] & 0x7FFF) == 0 )
        {
          ++v30;
          if ( (*(_DWORD *)&v96[8] & 0x7FFFFFFF) == 0 && *(_DWORD *)&v96[4] == 0 && *(_DWORD *)v96 == 0 )
          {
            *(_WORD *)&v96[10] = 0;
            goto LABEL_132;
          }
        }
        if ( (v95 & 0x7FFF0000) != 0 || (++v30, (v95 & 0x7FFFFFFF) != 0) || v94 != 0 || v93 != 0 )
        {
          v76 = 0;
          v32 = &v97[4];
          for ( j = 5; j > 0; --j )
          {
            v78 = j;
            v84 = &v95;
            v33 = (unsigned __int16 *)&v96[2 * v76];
            do
            {
              v86 = 0;
              v34 = *v33 * *(unsigned __int16 *)v84;
              v35 = *((_DWORD *)v32 - 1);
              v36 = v35 + v34;
              if ( v35 + v34 < v35 || v36 < v34 )
                v86 = 1;
              *((_DWORD *)v32 - 1) = v36;
              if ( v86 != 0 )
                ++*v32;
              v84 = (int *)((char *)v84 - 2);
              ++v33;
              --v78;
            }
            while ( v78 > 0 );
            ++v32;
            ++v76;
          }
          v37 = v30 - 16382;
          if ( v37 <= 0 )
            goto LABEL_171;
          do
          {
            if ( *(int *)&v97[8] < 0 )
              break;
            v38 = *(_DWORD *)v97;
            *(_DWORD *)v97 *= 2;
            v39 = *(_DWORD *)&v97[4];
            *(_DWORD *)&v97[4] = (v38 >> 31) | (2 * *(_DWORD *)&v97[4]);
            --v37;
            *(_DWORD *)&v97[8] = (v39 >> 31) | (2 * *(_DWORD *)&v97[8]);
          }
          while ( v37 > 0 );
          if ( v37 <= 0 )
          {
LABEL_171:
            if ( --v37 < 0 )
            {
              v40 = (unsigned __int16)-v37;
              v37 = 0;
              do
              {
                if ( (v97[0] & 1) != 0 )
                  ++v80;
                v41 = *(_DWORD *)&v97[8];
                *(_DWORD *)&v97[8] >>= 1;
                v42 = __SPAIR64__(v41, *(unsigned int *)&v97[4]) >> 1;
                v43 = *(__int64 *)v97 >> 1;
                --v40;
                *(_DWORD *)&v97[4] = v42;
                *(_DWORD *)v97 = v43;
              }
              while ( v40 != 0 );
              if ( v80 != 0 )
                *(_WORD *)v97 |= 1u;
            }
          }
          if ( *(_WORD *)v97 > 0x8000u || (*(_DWORD *)v97 & 0x1FFFF) == 0x18000 )
          {
            if ( *(_DWORD *)&v97[2] == -1 )
            {
              *(_DWORD *)&v97[2] = 0;
              if ( *(_DWORD *)&v97[6] == -1 )
              {
                *(_DWORD *)&v97[6] = 0;
                if ( *(_WORD *)&v97[10] == 0xFFFF )
                {
                  *(_WORD *)&v97[10] = 0x8000;
                  ++v37;
                }
                else
                {
                  ++*(_WORD *)&v97[10];
                }
              }
              else
              {
                ++*(_DWORD *)&v97[6];
              }
            }
            else
            {
              ++*(_DWORD *)&v97[2];
            }
          }
          if ( (unsigned __int16)v37 < 0x7FFFu )
          {
            *(_WORD *)v96 = *(_WORD *)&v97[2];
            *(_DWORD *)&v96[2] = *(_DWORD *)&v97[4];
            *(_DWORD *)&v96[6] = *(_DWORD *)&v97[8];
            *(_WORD *)&v96[10] = v74 | v37;
          }
          else
          {
            *(_DWORD *)&v96[4] = 0;
            *(_DWORD *)v96 = 0;
            *(_DWORD *)&v96[8] = v74 == 0 ? 2147450880 : -32768;
          }
          goto LABEL_132;
        }
      }
      else
      {
        v31 = 0;
      }
      *(_DWORD *)&v96[4] = 0;
      *(_DWORD *)v96 = 0;
    }
    *(_DWORD *)&v96[8] = v31;
  }
LABEL_132:
  v44 = a3;
  *(_WORD *)a5 = v81;
  if ( (a4 & 1) != 0 )
  {
    v44 = v81 + a3;
    if ( v44 <= 0 )
    {
      *(_WORD *)a5 = 0;
      *(_BYTE *)(a5 + 3) = 1;
      *(_BYTE *)(a5 + 2) = v69 != -32768 ? 32 : 45;
      *(_BYTE *)(a5 + 4) = 48;
      *(_BYTE *)(a5 + 5) = 0;
      return 1;
    }
  }
  if ( v44 > 21 )
    v44 = 21;
  v45 = *(unsigned __int16 *)&v96[10] - 16382;
  *(_WORD *)&v96[10] = 0;
  v87 = 8;
  do
  {
    v46 = *(_DWORD *)v96;
    *(_DWORD *)v96 *= 2;
    v47 = (v46 >> 31) | (2 * *(_DWORD *)&v96[4]);
    v48 = *(__int64 *)&v96[4] >> 31;
    v49 = v87-- == 1;
    *(_DWORD *)&v96[4] = v47;
    *(_DWORD *)&v96[8] = v48;
  }
  while ( !v49 );
  if ( v45 < 0 )
  {
    v50 = (unsigned __int8)-(char)v45;
    if ( v50 != 0 )
    {
      do
      {
        v51 = *(_DWORD *)&v96[8];
        *(_DWORD *)&v96[8] >>= 1;
        v52 = (v51 << 31) | (*(_DWORD *)&v96[4] >> 1);
        v53 = *(__int64 *)v96 >> 1;
        --v50;
        *(_DWORD *)&v96[4] = v52;
        *(_DWORD *)v96 = v53;
      }
      while ( v50 > 0 );
    }
  }
  v54 = (_BYTE *)(a5 + 4);
  v91 = (char *)(a5 + 4);
  for ( k = v44 + 1; k > 0; v96[11] = 0 )
  {
    v55 = *(_DWORD *)v96;
    *(_DWORD *)v92 = *(_DWORD *)v96;
    *(_QWORD *)&v92[4] = *(_QWORD *)&v96[4];
    *(_DWORD *)v96 *= 2;
    v56 = *(_DWORD *)v96;
    *(_DWORD *)v96 *= 2;
    v57 = (v55 >> 31) | (2 * *(_DWORD *)&v96[4]);
    v58 = 2 * v57;
    v59 = (v57 >> 31) | (2 * (*(__int64 *)&v96[4] >> 31));
    v60 = (v56 >> 31) | v58;
    v61 = *(_DWORD *)v92 + *(_DWORD *)v96;
    if ( (unsigned int)(*(_DWORD *)v92 + *(_DWORD *)v96) < *(_DWORD *)v96 || v61 < *(_DWORD *)v92 )
    {
      v62 = 0;
      if ( v60 + 1 < v60 || v60 == -1 )
        v62 = 1;
      ++v60;
      if ( v62 != 0 )
        ++v59;
    }
    v63 = *(_DWORD *)&v92[4] + v60;
    v88 = *(_DWORD *)&v92[4] + v60;
    if ( *(_DWORD *)&v92[4] + v60 < v60 || v63 < *(_DWORD *)&v92[4] )
      ++v59;
    *(_DWORD *)v96 = 2 * v61;
    *(_DWORD *)&v96[8] = (v63 >> 31) | (2 * (*(_DWORD *)&v92[8] + v59));
    *v54++ = v96[11] + 48;
    --k;
    *(_DWORD *)&v96[4] = (v61 >> 31) | (2 * v88);
  }
  v64 = v54 - 1;
  v65 = *v64;
  v66 = v64 - 1;
  if ( v65 >= 53 )
  {
    while ( v66 >= v91 && *v66 == 57 )
      *v66-- = 48;
    v67 = a5;
    if ( v66 < v91 )
    {
      ++v66;
      ++*(_WORD *)a5;
    }
    ++*v66;
  }
  else
  {
    while ( v66 >= v91 && *v66 == 48 )
      --v66;
    v67 = a5;
    if ( v66 < v91 )
    {
      *(_WORD *)a5 = 0;
      *(_BYTE *)(a5 + 3) = 1;
      *(_BYTE *)(a5 + 2) = v69 != -32768 ? 32 : 45;
      *v91 = 48;
      *(_BYTE *)(a5 + 5) = 0;
      return 1;
    }
  }
  v68 = (_BYTE)v66 - v67 - 3;
  *(_BYTE *)(v67 + 3) = v68;
  *(_BYTE *)(v68 + v67 + 4) = 0;
  return 1;
}

// Address: 0x1002AB2F
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

// Address: 0x1002ABBD
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

// Address: 0x1002AC5D
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
  if ( dword_100C7D04 != 0 )
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

// Address: 0x1002AF6C
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

// Address: 0x1002B13A
int __cdecl __set_fpsr_sse2(unsigned int a1)
{
  int result; // eax

  result = 0;
  if ( dword_100C7D04 != 0 )
  {
    if ( (a1 & 0x40) != 0 && dword_100C6214 != 0 )
      _mm_setcsr(a1);
    else
      _mm_setcsr(a1 & 0xFFFFFFBF);
  }
  return result;
}

// Address: 0x1002C9E0
void __cdecl sub_1002C9E0()
{
  operator delete((void *)lpBuffer);
}

// Address: 0x1002C9ED
void __cdecl sub_1002C9ED()
{
  dword_100C6224 = (int)&std::bad_alloc::`vftable';
  sub_1001A1EF(&dword_100C6224);
}

