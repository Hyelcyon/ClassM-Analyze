// Decompiled from innoguard.dll (ClassM_2.0.57\unpacked\Client\innoguard.dll)

// Address: 0x10001016
int sub_10001016()
{
  sub_10004570(&dword_10040398, 0, 1);
  return atexit(sub_1002C0EB);
}

// Address: 0x10001035
int std::`dynamic initializer for 'fout''()
{
  FILE *v0; // esi

  v0 = __acrt_iob_func(1u);
  sub_100046D0(&dword_10040398);
  dword_10040398 = (int)&std::filebuf::`vftable';
  sub_10004310(v0, nullptr);
  return atexit(sub_1002C0F5);
}

// Address: 0x1000106F
void *sub_1000106F()
{
  void *v0; // edx

  v0 = &byte_10040348;
  dword_1004045C = (int)&byte_10040348;
  if ( dword_10040458 != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_10040458 + 4) + dword_10040458 + 60) = &byte_10040348;
    v0 = (void *)dword_1004045C;
  }
  if ( dword_10040460 != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_10040460 + 4) + dword_10040460 + 60) = v0;
    v0 = (void *)dword_1004045C;
  }
  if ( dword_10040464 != 0 )
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_10040464 + 4) + dword_10040464 + 60) = v0;
  return &unk_10040341;
}

// Address: 0x1000108F
int sub_1000108F()
{
  return atexit(sub_1002C109);
}

// Address: 0x1000109B
int sub_1000109B()
{
  return atexit(sub_1002C113);
}

// Address: 0x100010A7
int sub_100010A7()
{
  return atexit(sub_1002C11D);
}

// Address: 0x100010B3
int sub_100010B3()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_100404A0);
  return atexit(sub_1002C127);
}

// Address: 0x100010C9
int sub_100010C9()
{
  return atexit(sub_1002C131);
}

// Address: 0x100010D5
FILE *sub_100010D5()
{
  FILE *result; // eax

  result = __acrt_iob_func(2u);
  dword_10040B30 = (int)result;
  return result;
}

// Address: 0x100010E3
int sub_100010E3()
{
  int result; // eax

  result = sub_1000DD0C();
  dword_10040B88 = result;
  return result;
}

// Address: 0x100010EE
void sub_100010EE()
{
  InitializeSListHead(&stru_10040B90);
}

// Address: 0x100010FA
int sub_100010FA()
{
  __ExceptionPtr::_InitBadAllocException(&dword_100413B0);
  return atexit(sub_1002C13B);
}

// Address: 0x10001120
void *sub_10001120()
{
  return &unk_10041430;
}

// Address: 0x10001130
void *__fastcall sub_10001130(void *a1, const unsigned __int16 *a2)
{
  unsigned int v3; // esi
  int v4; // esi
  CHAR *v5; // edi
  size_t v6; // ecx
  _BYTE Src[16]; // [esp+20h] [ebp-28h] BYREF
  int v10; // [esp+30h] [ebp-18h]
  int v11; // [esp+34h] [ebp-14h]
  int v12; // [esp+44h] [ebp-4h]

  v11 = 15;
  v10 = 0;
  Src[0] = 0;
  v12 = 0;
  v3 = wcslen(a2);
  if ( v3 != 0 )
  {
    v4 = 2 * v3 + 1;
    v5 = (CHAR *)unknown_libname_5(v4);
    WideCharToMultiByte(0, 0, a2, -1, v5, v4, nullptr, nullptr);
    if ( *v5 != 0 )
      v6 = strlen(v5);
    else
      v6 = 0;
    sub_10001630(v5, v6);
    sub_1000CA99(v5);
  }
  sub_10001480(a1, Src);
  sub_10001410(Src);
  return a1;
}

// Address: 0x10001230
LSTATUS sub_10001230()
{
  LSTATUS result; // eax
  LSTATUS v1; // eax
  int v2; // ecx
  DWORD Type; // [esp+0h] [ebp-10h] BYREF
  DWORD cbData; // [esp+4h] [ebp-Ch] BYREF
  HKEY phkResult; // [esp+8h] [ebp-8h] BYREF
  BYTE Data[4]; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)Data = 0;
  result = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SYSTEM\\CurrentControlSet\\Services\\hidpath", 0, 0x20019u, &phkResult);
  if ( result == 0 )
  {
    Type = 4;
    cbData = 4;
    v1 = RegQueryValueExW(phkResult, L"DebugLog", nullptr, &Type, Data, &cbData);
    v2 = dword_10041438;
    if ( v1 == 0 )
      v2 = *(_DWORD *)Data;
    dword_10041438 = v2;
    return RegCloseKey(phkResult);
  }
  return result;
}

// Address: 0x100012B0
void __cdecl sub_100012B0()
{
  _DWORD *v0; // eax
  int v1; // eax
  _DWORD *v2; // eax
  int v3; // eax
  int v4; // eax
  int *v5; // eax
  int v6; // esi
  char *v7; // eax
  char *v8; // eax
  _DWORD v9[6]; // [esp+8h] [ebp-848h] BYREF
  WCHAR OutputString[524]; // [esp+20h] [ebp-830h] BYREF
  WCHAR v11[522]; // [esp+438h] [ebp-418h] BYREF
  int v12; // [esp+858h] [ebp+8h]
  int v13; // [esp+85Ch] [ebp+Ch] BYREF

  if ( dword_10041438 != 0 )
  {
    if ( dword_10041438 == 3 )
    {
      v0 = sub_10001120();
      v1 = sub_100143B7(*v0 | 1, v0[1], OutputString, 0x103u, v12, nullptr, (int)&v13);
      if ( v1 < 0 )
        v1 = -1;
      if ( (unsigned int)v1 > 0x102 )
        OutputString[259] = 0;
    }
    else
    {
      wsprintfW(v11, L"[INNOGUARD] : %s", v12);
      v2 = sub_10001120();
      v3 = sub_100143B7(*v2 | 1, v2[1], OutputString, 0x207u, (int)v11, nullptr, (int)&v13);
      if ( v3 < 0 )
        v3 = -1;
      if ( (unsigned int)v3 > 0x206 )
        OutputString[519] = 0;
    }
    v4 = dword_10041438;
    if ( dword_10041438 == 1 )
    {
      OutputDebugStringW(OutputString);
      v4 = dword_10041438;
    }
    if ( v4 == 3 )
    {
      v5 = (int *)sub_10001130(v9, OutputString);
      v6 = (int)v5;
      if ( (unsigned int)v5[5] >= 0x10 )
        v6 = *v5;
      v7 = (char *)dword_1004143C;
      if ( dword_1004143C == 0 )
      {
        v8 = (char *)operator new(0xD0u);
        v7 = sub_10002880(v8);
        dword_1004143C = (int)v7;
      }
      sub_10002AA0((int)v7, v6);
      sub_10001410(v9);
    }
  }
}

// Address: 0x10001410
void __thiscall sub_10001410(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned int v2; // eax
  char *v3; // ecx
  char *v4; // eax
  unsigned int v5; // ecx
  bool v6; // cf

  v1 = this;
  v2 = *(this + 5);
  if ( v2 >= 0x10 )
  {
    v3 = (char *)*this;
    if ( v2 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v3 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v4 = *((char **)v3 - 1);
      if ( v4 >= v3 )
        _invalid_parameter_noinfo_noreturn();
      v5 = v3 - v4;
      if ( v5 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v5 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v3 = v4;
    }
    j_j___free_base(v3);
  }
  v1[5] = 15;
  v6 = v1[5] < 0x10u;
  v1[4] = 0;
  if ( !v6 )
    v1 = (_DWORD *)*v1;
  *(_BYTE *)v1 = 0;
}

// Address: 0x10001480
_DWORD *__thiscall sub_10001480(_DWORD *this, _DWORD *Src)
{
  bool v3; // cf

  *(this + 5) = 15;
  *(this + 4) = 0;
  *(_BYTE *)this = 0;
  if ( Src[5] >= 0x10u )
  {
    *this = *Src;
    *Src = 0;
  }
  else if ( Src[4] != -1 )
  {
    memmove(this, Src, Src[4] + 1);
  }
  *(this + 4) = Src[4];
  *(this + 5) = Src[5];
  Src[5] = 15;
  v3 = Src[5] < 0x10u;
  Src[4] = 0;
  if ( v3 )
  {
    *(_BYTE *)Src = 0;
    return this;
  }
  else
  {
    *(_BYTE *)*Src = 0;
    return this;
  }
}

// Address: 0x10001500
void __thiscall sub_10001500(_DWORD *this, char a2, size_t Size)
{
  _DWORD *v3; // esi
  _BYTE *v4; // ebx
  _BYTE *v5; // eax
  unsigned int v6; // ebx
  bool v7; // cf

  v3 = this;
  if ( a2 != 0 && *(this + 5) >= 0x10u )
  {
    v4 = (_BYTE *)*this;
    if ( Size != 0 )
      memmove_0(this, v4, Size);
    if ( (unsigned int)(v3[5] + 1) >= 0x1000 )
    {
      if ( ((unsigned __int8)v4 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v5 = *((_BYTE **)v4 - 1);
      if ( v5 >= v4 )
        _invalid_parameter_noinfo_noreturn();
      v6 = v4 - v5;
      if ( v6 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v6 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v4 = v5;
    }
    j_j___free_base(v4);
  }
  v3[5] = 15;
  v7 = v3[5] < 0x10u;
  v3[4] = Size;
  if ( !v7 )
    v3 = (_DWORD *)*v3;
  *((_BYTE *)v3 + Size) = 0;
}

// Address: 0x10001590
_DWORD *__thiscall sub_10001590(_DWORD *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  _DWORD *v6; // eax
  unsigned int v7; // edi
  bool v8; // cf

  v4 = *(this + 4);
  if ( v4 < a2 )
    sub_1000B6B3("invalid string position");
  if ( v4 - a2 > a3 )
  {
    if ( a3 != 0 )
    {
      if ( *(this + 5) < 0x10u )
        v6 = this;
      else
        v6 = (_DWORD *)*this;
      v7 = v4 - a3;
      if ( v7 != a2 )
        memmove((char *)v6 + a2, (char *)v6 + a2 + a3, v7 - a2);
      v8 = *(this + 5) < 0x10u;
      *(this + 4) = v7;
      if ( !v8 )
      {
        *(_BYTE *)(*this + v7) = 0;
        return this;
      }
      *((_BYTE *)this + v7) = 0;
    }
    return this;
  }
  else
  {
    *(this + 4) = a2;
    if ( *(this + 5) < 0x10u )
    {
      *((_BYTE *)this + a2) = 0;
      return this;
    }
    else
    {
      *(_BYTE *)(*this + a2) = 0;
      return this;
    }
  }
}

// Address: 0x10001630
_DWORD *__thiscall sub_10001630(_DWORD *this, char *Src, size_t Size)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  void *v8; // eax
  bool v9; // cf

  if ( Src != nullptr )
  {
    v4 = *(this + 5);
    v5 = v4 < 0x10 ? (unsigned int)this : *this;
    if ( (unsigned int)Src >= v5 )
    {
      v6 = v4 < 0x10 ? this : (_DWORD *)*this;
      if ( (char *)v6 + *(this + 4) > Src )
      {
        if ( v4 < 0x10 )
          return (_DWORD *)sub_10001730(this, Src - (char *)this, Size);
        else
          return (_DWORD *)sub_10001730(this, &Src[-*this], Size);
      }
    }
  }
  if ( Size == -1 )
    sub_1000B693("string too long");
  if ( *(this + 5) < Size )
  {
    sub_10001860(Size, *(this + 4));
    if ( Size == 0 )
      return this;
LABEL_16:
    if ( *(this + 5) < 0x10u )
      v8 = this;
    else
      v8 = (void *)*this;
    memmove_0(v8, Src, Size);
    v9 = *(this + 5) < 0x10u;
    *(this + 4) = Size;
    if ( !v9 )
    {
      *(_BYTE *)(*this + Size) = 0;
      return this;
    }
    *((_BYTE *)this + Size) = 0;
    return this;
  }
  if ( Size != 0 )
    goto LABEL_16;
  v9 = *(this + 5) < 0x10u;
  *(this + 4) = 0;
  if ( v9 )
    *(_BYTE *)this = 0;
  else
    *(_BYTE *)*this = 0;
  return this;
}

// Address: 0x10001730
_DWORD *__thiscall sub_10001730(_DWORD *this, _DWORD *a2, unsigned int a3, size_t a4)
{
  _DWORD *v4; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  size_t v8; // edi
  size_t v9; // eax
  unsigned int v10; // eax
  void *v12; // edx
  bool v13; // cf

  v4 = a2;
  v6 = a3;
  v7 = a2[4];
  if ( v7 < a3 )
    sub_1000B6B3("invalid string position");
  v8 = a4;
  v9 = v7 - a3;
  if ( a4 > v9 )
    v8 = v9;
  if ( this != a2 )
  {
    if ( v8 == -1 )
      sub_1000B693("string too long");
    if ( *(this + 5) >= v8 )
    {
      if ( v8 == 0 )
      {
        v13 = *(this + 5) < 0x10u;
        *(this + 4) = 0;
        if ( v13 )
          *(_BYTE *)this = 0;
        else
          *(_BYTE *)*this = 0;
        return this;
      }
    }
    else
    {
      sub_10001860(v8, *(this + 4));
      v6 = a3;
      if ( v8 == 0 )
        return this;
    }
    if ( a2[5] >= 0x10u )
      v4 = (_DWORD *)*a2;
    if ( *(this + 5) < 0x10u )
      v12 = this;
    else
      v12 = (void *)*this;
    memmove_0(v12, (char *)v4 + v6, v8);
    v13 = *(this + 5) < 0x10u;
    *(this + 4) = v8;
    if ( !v13 )
    {
      *(_BYTE *)(*this + v8) = 0;
      return this;
    }
    *((_BYTE *)this + v8) = 0;
    return this;
  }
  v10 = a3 + v8;
  if ( *(this + 4) < a3 + v8 )
    sub_1000B6B3("invalid string position");
  *(this + 4) = v10;
  if ( *(this + 5) < 0x10u )
    *((_BYTE *)this + v10) = 0;
  else
    *(_BYTE *)(*this + v10) = 0;
  sub_10001590(this, 0, a3);
  return this;
}

// Address: 0x10001860
int __thiscall sub_10001860(unsigned int *this, unsigned int a2, int Size)
{
  unsigned int *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  _DWORD *v7; // ebx
  void *v8; // eax
  unsigned int *v9; // ecx
  unsigned int v10; // eax
  char *v11; // ecx
  char *v12; // eax
  unsigned int v13; // ecx
  bool v14; // cf
  unsigned int *v15; // eax
  int result; // eax
  int v17; // [esp+0h] [ebp-28h] BYREF
  void *v18; // [esp+14h] [ebp-14h]
  int *v19; // [esp+18h] [ebp-10h]
  int v20; // [esp+24h] [ebp-4h]

  v19 = &v17;
  v3 = this;
  v18 = this;
  v4 = a2 | 0xF;
  if ( (a2 | 0xF) == 0xFFFFFFFF )
  {
    v4 = a2;
  }
  else
  {
    v5 = *(this + 5);
    v6 = v5 >> 1;
    if ( v5 >> 1 > v4 / 3 )
    {
      v4 = v6 + v5;
      if ( v5 > -2 - v6 )
        v4 = -2;
    }
  }
  v20 = 0;
  if ( v4 == -1 )
  {
    v7 = nullptr;
  }
  else if ( v4 + 1 < 0x1000 )
  {
    v7 = operator new(v4 + 1);
  }
  else
  {
    if ( v4 + 36 < v4 + 1 )
      sub_1000B676();
    v8 = operator new(v4 + 36);
    v7 = (_DWORD *)(((unsigned int)v8 + 35) & 0xFFFFFFE0);
    *(v7 - 1) = v8;
  }
  if ( Size != 0 )
  {
    if ( v3[5] < 0x10 )
      v9 = v3;
    else
      v9 = (unsigned int *)*v3;
    memmove_0(v7, v9, Size);
  }
  v10 = v3[5];
  if ( v10 >= 0x10 )
  {
    v11 = (char *)*v3;
    if ( v10 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v11 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v12 = *((char **)v11 - 1);
      if ( v12 >= v11 )
        _invalid_parameter_noinfo_noreturn();
      v13 = v11 - v12;
      if ( v13 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v13 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v11 = v12;
    }
    j_j___free_base(v11);
  }
  v3[5] = 15;
  v14 = v3[5] < 0x10;
  v3[4] = 0;
  if ( v14 )
    v15 = v3;
  else
    v15 = (unsigned int *)*v3;
  *(_BYTE *)v15 = 0;
  result = Size;
  *v3 = (unsigned int)v7;
  v3[5] = v4;
  v14 = v3[5] < 0x10;
  v3[4] = Size;
  if ( !v14 )
    v3 = v7;
  *((_BYTE *)v3 + Size) = 0;
  return result;
}

// Address: 0x10001A00
void *__stdcall sub_10001A00(size_t Size)
{
  void *v2; // eax

  if ( Size == 0 )
    return nullptr;
  if ( Size < 0x1000 )
    return operator new(Size);
  if ( Size + 35 < Size )
    sub_1000B676();
  v2 = operator new(Size + 35);
  *(_DWORD *)((((unsigned int)v2 + 35) & 0xFFFFFFE0) - 4) = v2;
  return (void *)(((unsigned int)v2 + 35) & 0xFFFFFFE0);
}

// Address: 0x10001A50
int __cdecl sub_10001A50(char *Buffer, size_t BufferCount, char *Format, _locale_t Locale, va_list ArgList)
{
  unsigned __int64 *v5; // eax
  int result; // eax

  v5 = (unsigned __int64 *)sub_10001120();
  result = __stdio_common_vsprintf_s(*v5, Buffer, BufferCount, Format, Locale, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}

// Address: 0x10001A90
int __cdecl sub_10001A90(int a1, int a2, int a3)
{
  _DWORD *v3; // eax
  int result; // eax

  v3 = sub_10001120();
  result = sub_1001436F(*v3 | 1, v3[1], a1, -1, a2, nullptr, (int)&a3);
  if ( result < 0 )
    return -1;
  return result;
}

// Address: 0x10001AD0
char *__thiscall sub_10001AD0(char *this, int a2)
{
  int v4; // [esp+0h] [ebp-8h] BYREF
  char v5; // [esp+4h] [ebp-4h]

  v4 = a2;
  v5 = 1;
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(&v4, this + 4);
  return this;
}

// Address: 0x10001B10
char *__thiscall sub_10001B10(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  return this;
}

// Address: 0x10001B40
const char *__thiscall sub_10001B40(_DWORD *this)
{
  int v1; // ecx
  const char *result; // eax

  v1 = *(this + 1);
  result = "Unknown exception";
  if ( v1 != 0 )
    return (const char *)v1;
  return result;
}

// Address: 0x10001B50
char *__thiscall sub_10001B50(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10001B80
// Microsoft VisualC 14/net runtime
int __thiscall unknown_libname_1(_DWORD *this)
{
  *this = &std::exception::`vftable';
  return __std_exception_destroy(this + 1);
}

// Address: 0x10001BA0
struct std::_Locinfo *__thiscall sub_10001BA0(struct std::_Locinfo *this, char *Locale)
{
  void **pExceptionObject; // [esp+8h] [ebp-24h] BYREF
  __int64 v5; // [esp+Ch] [ebp-20h] BYREF
  const char *v6; // [esp+14h] [ebp-18h] BYREF
  char v7; // [esp+18h] [ebp-14h]
  std::_Lockit *v8; // [esp+1Ch] [ebp-10h]
  int v9; // [esp+28h] [ebp-4h]

  v8 = this;
  std::_Lockit::_Lockit(this, 0);
  v9 = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_WORD *)this + 12) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 16) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 40) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 48) = 0;
  LOBYTE(v9) = 6;
  if ( Locale == nullptr )
  {
    v6 = "bad locale name";
    v7 = 1;
    v5 = 0;
    __std_exception_copy(&v6, &v5);
    pExceptionObject = &std::runtime_error::`vftable';
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI2_AVruntime_error_std__);
  }
  std::_Locinfo::_Locinfo_ctor(this, Locale);
  return this;
}

// Address: 0x10001C80
void __thiscall sub_10001C80(std::_Lockit *this)
{
  std::_Locinfo::_Locinfo_dtor(this);
  if ( *((_DWORD *)this + 11) != 0 )
    j___free_base(*((void **)this + 11));
  *((_DWORD *)this + 11) = 0;
  if ( *((_DWORD *)this + 9) != 0 )
    j___free_base(*((void **)this + 9));
  *((_DWORD *)this + 9) = 0;
  if ( *((_DWORD *)this + 7) != 0 )
    j___free_base(*((void **)this + 7));
  *((_DWORD *)this + 7) = 0;
  if ( *((_DWORD *)this + 5) != 0 )
    j___free_base(*((void **)this + 5));
  *((_DWORD *)this + 5) = 0;
  if ( *((_DWORD *)this + 3) != 0 )
    j___free_base(*((void **)this + 3));
  *((_DWORD *)this + 3) = 0;
  if ( *((_DWORD *)this + 1) != 0 )
    j___free_base(*((void **)this + 1));
  *((_DWORD *)this + 1) = 0;
  std::_Lockit::~_Lockit(this);
}

// Address: 0x10001D50
char *__thiscall sub_10001D50(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::runtime_error::`vftable';
  return this;
}

// Address: 0x10001D90
_DWORD *__thiscall sub_10001D90(_DWORD *Block, char a2)
{
  *Block = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10001DC0
void __thiscall sub_10001DC0(volatile signed __int32 *this)
{
  _InterlockedIncrement(this + 1);
}

// Address: 0x10001DD0
volatile signed __int32 *__thiscall sub_10001DD0(volatile signed __int32 *this)
{
  volatile signed __int32 *result; // eax

  result = nullptr;
  if ( _InterlockedExchangeAdd(this + 1, 0xFFFFFFFF) == 0 )
    return this;
  return result;
}

// Address: 0x10001DF0
void __thiscall sub_10001DF0(_DWORD *this)
{
  int v1; // ecx
  void (__thiscall ***v2)(_DWORD, int); // eax

  v1 = *(this + 1);
  if ( v1 != 0 )
  {
    v2 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
    if ( v2 != nullptr )
      (**v2)(v2, 1);
  }
}

// Address: 0x10001E40
int sub_10001E40()
{
  return 1;
}

// Address: 0x10001E50
int __cdecl sub_10001E50(_DWORD *Block, int a2)
{
  char *v2; // edi
  int v3; // edx
  char *v4; // ecx
  _BYTE v6[52]; // [esp+Ch] [ebp-54h] BYREF
  _Ctypevec v7; // [esp+40h] [ebp-20h] BYREF
  int v8; // [esp+50h] [ebp-10h]
  int v9; // [esp+5Ch] [ebp-4h]

  v8 = 0;
  if ( Block != nullptr && *Block == 0 )
  {
    v2 = (char *)operator new(0x18u);
    v9 = 0;
    v3 = *(_DWORD *)(a2 + 4);
    if ( v3 != 0 )
    {
      v4 = *(char **)(v3 + 24);
      if ( v4 == nullptr )
        v4 = (char *)(v3 + 28);
    }
    else
    {
      v4 = (char *)Locale;
    }
    sub_10001BA0((struct std::_Locinfo *)v6, v4);
    *((_DWORD *)v2 + 1) = 0;
    *(_DWORD *)v2 = &std::ctype<char>::`vftable';
    *(_Ctypevec *)(v2 + 8) = *_Getctype(&v7);
    *Block = v2;
    sub_10001C80((std::_Lockit *)v6);
  }
  return 2;
}

// Address: 0x10001F10
int __thiscall sub_10001F10(int this, unsigned __int8 a2)
{
  return _Tolower(a2, (const _Ctypevec *)(this + 8));
}

// Address: 0x10001F30
_BYTE *__thiscall sub_10001F30(char *this, _BYTE *a2, unsigned int a3)
{
  _BYTE *v3; // esi
  unsigned int v4; // ebx
  int v5; // edi
  const _Ctypevec *v6; // eax
  const _Ctypevec *v8; // [esp+18h] [ebp+Ch]

  v3 = a2;
  v4 = a3 - (_DWORD)a2;
  v5 = 0;
  if ( (unsigned int)a2 > a3 )
    v4 = 0;
  if ( v4 != 0 )
  {
    v6 = (const _Ctypevec *)(this + 8);
    v8 = (const _Ctypevec *)(this + 8);
    do
    {
      *v3 = _Tolower((unsigned __int8)*v3, v6);
      ++v5;
      v6 = v8;
      ++v3;
    }
    while ( v5 != v4 );
  }
  return v3;
}

// Address: 0x10001F80
int __thiscall sub_10001F80(int this, unsigned __int8 a2)
{
  return _Toupper(a2, (const _Ctypevec *)(this + 8));
}

// Address: 0x10001FA0
_BYTE *__thiscall sub_10001FA0(char *this, _BYTE *a2, unsigned int a3)
{
  _BYTE *v3; // esi
  unsigned int v4; // ebx
  int v5; // edi
  const _Ctypevec *v6; // eax
  const _Ctypevec *v8; // [esp+18h] [ebp+Ch]

  v3 = a2;
  v4 = a3 - (_DWORD)a2;
  v5 = 0;
  if ( (unsigned int)a2 > a3 )
    v4 = 0;
  if ( v4 != 0 )
  {
    v6 = (const _Ctypevec *)(this + 8);
    v8 = (const _Ctypevec *)(this + 8);
    do
    {
      *v3 = _Toupper((unsigned __int8)*v3, v6);
      ++v5;
      v6 = v8;
      ++v3;
    }
    while ( v5 != v4 );
  }
  return v3;
}

// Address: 0x10001FF0
char __stdcall std::ctype<char>::do_widen(char a1)
{
  return a1;
}

// Address: 0x10002000
int __stdcall sub_10002000(void *Src, int a2, void *a3)
{
  memmove_0(a3, Src, a2 - (_DWORD)Src);
  return a2;
}

// Address: 0x10002020
char __stdcall std::ctype<char>::do_narrow(char a1, int a2)
{
  return a1;
}

// Address: 0x10002030
int __stdcall sub_10002030(void *Src, int a2, int a3, void *a4)
{
  memmove_0(a4, Src, a2 - (_DWORD)Src);
  return a2;
}

// Address: 0x10002050
void *__thiscall sub_10002050(void *Block, char a2)
{
  int v3; // eax

  v3 = *((_DWORD *)Block + 4);
  *(_DWORD *)Block = &std::ctype<char>::`vftable';
  if ( v3 <= 0 )
  {
    if ( v3 < 0 )
      j_j_j___free_base(*((void **)Block + 3));
  }
  else
  {
    j___free_base(*((void **)Block + 3));
  }
  j___free_base(*((void **)Block + 5));
  *(_DWORD *)Block = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x100020B0
_DWORD *__thiscall sub_100020B0(_DWORD *Block, char a2)
{
  *Block = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x100020E0
int __thiscall sub_100020E0(_DWORD **this, int a2)
{
  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 1) + 8))(*(this + 1), a2, *this, 0);
  return a2;
}

// Address: 0x10002110
_DWORD *__thiscall std::error_category::default_error_condition(void *this, _DWORD *a2, int a3)
{
  *a2 = a3;
  a2[1] = this;
  return a2;
}

// Address: 0x10002130
bool __thiscall sub_10002130(void *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  _BYTE v5[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 12))(this, v5, a2);
  return *(_DWORD *)(v3[1] + 4) == *(_DWORD *)(a3[1] + 4) && *v3 == *a3;
}

// Address: 0x10002170
bool __thiscall sub_10002170(_DWORD *this, _DWORD *a2, int a3)
{
  return *(this + 1) == *(_DWORD *)(a2[1] + 4) && *a2 == a3;
}

// Address: 0x100021A0
_DWORD *__cdecl sub_100021A0(_DWORD *a1, int a2, int a3, int Src, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  _DWORD v10[6]; // [esp+10h] [ebp-2Ch] BYREF
  int v11; // [esp+38h] [ebp-4h]

  v11 = 0;
  if ( a8 != 0 )
    sub_10003E00(": ", 2u);
  v8 = sub_100020E0((_DWORD **)&a2, (int)v10);
  LOBYTE(v11) = 1;
  sub_10003F30(v8, 0, 0xFFFFFFFF);
  sub_10001410(v10);
  sub_10001480(a1, &Src);
  sub_10001410(&Src);
  return a1;
}

// Address: 0x10002250
char *__thiscall sub_10002250(char *this, int a2, int a3, _DWORD *a4)
{
  char *v5; // eax
  char *v6; // ecx
  int v8[4]; // [esp-18h] [ebp-40h] BYREF
  int v9; // [esp-8h] [ebp-30h]
  int v10; // [esp-4h] [ebp-2Ch]
  char *v11; // [esp+4h] [ebp-24h] BYREF
  char v12; // [esp+8h] [ebp-20h]
  _DWORD v13[6]; // [esp+Ch] [ebp-1Ch] BYREF

  v11 = this;
  v10 = 15;
  v9 = 0;
  LOBYTE(v8[0]) = 0;
  sub_10001730(v8, a4, 0, 0xFFFFFFFF);
  v5 = (char *)sub_100021A0(v13, a2, a3, v8[0], v8[1], v8[2], v8[3], v9);
  v6 = v5;
  if ( *((_DWORD *)v5 + 5) >= 0x10u )
    v6 = *(char **)v5;
  *(_DWORD *)this = &std::exception::`vftable';
  v11 = v6;
  v10 = (int)(this + 4);
  *(_QWORD *)(this + 4) = 0;
  v12 = 1;
  __std_exception_copy(&v11, v10);
  *(_DWORD *)this = &std::runtime_error::`vftable';
  sub_10001410(v13);
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &std::_System_error::`vftable';
  return this;
}

// Address: 0x10002310
char *__thiscall sub_10002310(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10002340
_DWORD *__stdcall sub_10002340(_DWORD *a1, int a2)
{
  char *v2; // eax

  v2 = (char *)std::_Syserror_map(a2);
  a1[5] = 15;
  a1[4] = 0;
  *(_BYTE *)a1 = 0;
  if ( *v2 != 0 )
    sub_10001630(a1, v2, strlen(v2));
  else
    sub_10001630(a1, v2, 0);
  return a1;
}

// Address: 0x100023B0
const char *sub_100023B0()
{
  return "iostream";
}

// Address: 0x100023C0
_DWORD *__stdcall sub_100023C0(_DWORD *a1, int a2)
{
  if ( a2 == 1 )
  {
    a1[5] = 15;
    a1[4] = 0;
    *(_BYTE *)a1 = 0;
    sub_10001630(a1, "iostream stream error", 0x15u);
  }
  else
  {
    sub_10002340(a1, a2);
  }
  return a1;
}

// Address: 0x10002410
char *__thiscall sub_10002410(char *this, char *Src, int *a3)
{
  int v4; // ebx
  bool v5; // zf
  size_t v6; // ecx
  int v8; // [esp+10h] [ebp-2Ch]
  _DWORD v9[10]; // [esp+14h] [ebp-28h] BYREF

  v9[5] = 15;
  v9[4] = 0;
  v4 = *a3;
  v5 = *Src == 0;
  v8 = a3[1];
  LOBYTE(v9[0]) = 0;
  if ( v5 )
    v6 = 0;
  else
    v6 = strlen(Src);
  sub_10001630(v9, Src, v6);
  v9[9] = 0;
  sub_10002250(this, v4, v8, v9);
  sub_10001410(v9);
  *(_DWORD *)this = &std::ios_base::failure::`vftable';
  return this;
}

// Address: 0x100024D0
int __thiscall sub_100024D0(_DWORD *this, char a2, char a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // [esp+4h] [ebp-1Ch] BYREF
  int v6; // [esp+8h] [ebp-18h]
  char pExceptionObject[20]; // [esp+Ch] [ebp-14h] BYREF

  result = a2 & 0x17;
  *(this + 3) = result;
  v4 = result & *(this + 4);
  if ( v4 != 0 )
  {
    if ( a3 == 0 )
    {
      v5 = 1;
      if ( (v4 & 4) == 0 )
      {
        if ( (v4 & 2) == 0 )
        {
          v6 = sub_10004990();
          sub_10002410(pExceptionObject, "ios_base::eofbit set", &v5);
          _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI5_AVfailure_ios_base_std__);
        }
        v6 = sub_10004990();
        sub_10002410(pExceptionObject, "ios_base::failbit set", &v5);
        _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI5_AVfailure_ios_base_std__);
      }
      v6 = sub_10004990();
      sub_10002410(pExceptionObject, "ios_base::badbit set", &v5);
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI5_AVfailure_ios_base_std__);
    }
    _CxxThrowException(nullptr, nullptr);
  }
  return result;
}

// Address: 0x100025A0
int __thiscall sub_100025A0(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = *(_DWORD *)(*(this + 12) + 4);
  *(_DWORD *)(a2 + 4) = v2;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  return a2;
}

// Address: 0x100025F0
struct std::locale::_Locimp *__thiscall sub_100025F0(_DWORD *this)
{
  _DWORD *v2; // esi
  struct std::locale::_Locimp *result; // eax

  *(this + 12) = 0;
  *(this + 2) = 0;
  *(this + 4) = 0;
  *(this + 5) = 513;
  *(this + 6) = 6;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  sub_100024D0(this, 0, 0);
  v2 = operator new(8u);
  result = std::locale::_Init(true);
  v2[1] = result;
  *(this + 12) = v2;
  return result;
}

// Address: 0x100026A0
char *__thiscall sub_100026A0(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::_System_error::`vftable';
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)this + 4) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)this = &std::ios_base::failure::`vftable';
  return this;
}

// Address: 0x100026F0
char *__thiscall sub_100026F0(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::_System_error::`vftable';
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)this + 4) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)this = &std::system_error::`vftable';
  return this;
}

// Address: 0x10002740
char *__thiscall sub_10002740(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::_System_error::`vftable';
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)this + 4) = *(_DWORD *)(a2 + 16);
  return this;
}

// Address: 0x10002790
struct std::ios_base *__thiscall sub_10002790(struct std::ios_base *this, char a2)
{
  *(_DWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(this);
  return this;
}

// Address: 0x100027F0
void __thiscall sub_100027F0(char *this)
{
  struct std::ios_base *v1; // esi

  v1 = (struct std::ios_base *)(this + 104);
  *(_DWORD *)((char *)v1 + *(_DWORD *)(*(_DWORD *)this + 4) - 104) = &std::ofstream::`vftable';
  *(_DWORD *)((char *)v1 + *(_DWORD *)(*(_DWORD *)this + 4) - 108) = *(_DWORD *)(*(_DWORD *)this + 4) - 104;
  sub_100035A0(this + 4);
  *(_DWORD *)((char *)v1 + *(_DWORD *)(*((_DWORD *)v1 - 26) + 4) - 104) = &std::ostream::`vftable';
  *(_DWORD *)((char *)v1 + *(_DWORD *)(*((_DWORD *)v1 - 26) + 4) - 108) = *(_DWORD *)(*((_DWORD *)v1 - 26) + 4) - 8;
  *(_DWORD *)v1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(v1);
}

// Address: 0x10002880
char *__thiscall sub_10002880(char *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  char *v5; // ecx
  unsigned __int8 v6; // dl
  int v7; // eax
  int v9; // [esp-4h] [ebp-2A8h]
  int v10; // [esp+0h] [ebp-2A4h]
  int v11; // [esp+0h] [ebp-2A4h]
  int v12[67]; // [esp+14h] [ebp-290h] BYREF
  int v13[13]; // [esp+120h] [ebp-184h] BYREF
  CHAR Filename[268]; // [esp+154h] [ebp-150h] BYREF
  char ArgList[52]; // [esp+260h] [ebp-44h] BYREF
  int v16; // [esp+2A0h] [ebp-4h]

  sub_10002BB0(v10);
  v16 = 0;
  GetModuleFileNameA(nullptr, Filename, 0x104u);
  sub_10015C80(Filename, (int)ArgList, 50, (int)v12, 260, (int)v13, 50, 0, 0);
  sub_10004A00(Filename, "%s%s\\Log\\", (char)ArgList);
  MakeSureDirectoryPathExists(Filename);
  strcat_s(Filename, 0x104u, "innoguard.log");
  v2 = sub_100044B0(Filename, v9, v11);
  v3 = *(_DWORD *)(*(_DWORD *)this + 4);
  if ( v2 != 0 )
  {
    v5 = this + v3;
    v6 = 0;
    LOBYTE(v7) = 4;
  }
  else
  {
    v4 = *(_DWORD *)(this + v3 + 12);
    v5 = this + v3;
    v6 = v4 | 2;
    v7 = v6 | 4;
  }
  if ( *((_DWORD *)v5 + 14) != 0 )
    LOBYTE(v7) = v6;
  sub_100024D0(v5, v7, 0);
  *((_DWORD *)this + 50) = 4;
  *((_DWORD *)this + 51) = 3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 176));
  return this;
}

// Address: 0x100029D0
_DWORD *__stdcall sub_100029D0(_DWORD *a1)
{
  int v1; // eax
  size_t v2; // eax
  __time64_t v4; // [esp+Ch] [ebp-118h] BYREF
  char Src[268]; // [esp+14h] [ebp-110h] BYREF

  v4 = _time64(nullptr);
  v1 = unknown_libname_41(&v4);
  ++*(_DWORD *)(v1 + 16);
  *(_DWORD *)(v1 + 20) += 1900;
  sub_10001A90((int)Src, (int)"%04d/%02d/%02d %02d:%02d:%02d", *(_DWORD *)(v1 + 20));
  a1[5] = 15;
  a1[4] = 0;
  *(_BYTE *)a1 = 0;
  if ( Src[0] != 0 )
    v2 = strlen(Src);
  else
    v2 = 0;
  sub_10001630(a1, Src, v2);
  return a1;
}

// Address: 0x10002AA0
void __thiscall sub_10002AA0(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD v6[6]; // [esp+Ch] [ebp-20h] BYREF

  v3 = *(_DWORD *)(this + 204);
  if ( v3 == 3 && *(int *)(this + 200) >= 3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 176));
    sub_100029D0(v6);
    sub_10004A20();
    sub_10004C90();
    v4 = sub_10004C90();
    sub_10004F40(v4);
    sub_10001410(v6);
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 176));
  }
  else if ( v3 == 2 && *(int *)(this + 200) >= 3 )
  {
    sub_100029D0(v6);
    sub_10004A20();
    sub_10004C90();
    v5 = sub_10004C90();
    sub_10004F40(v5);
    sub_10001410(v6);
  }
}

// Address: 0x10002BB0
_DWORD *__thiscall sub_10002BB0(_DWORD *this, int a2)
{
  _DWORD *v3; // esi

  *this = &unk_10039B90;
  *(this + 26) = &std::ios::`vftable';
  v3 = this + 1;
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4)) = &std::ostream::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4) - 4) = *(_DWORD *)(*this + 4) - 8;
  sub_10004790((struct std::ios_base *)((char *)this + *(_DWORD *)(*this + 4)), (int)(this + 1), 0);
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4)) = &std::ofstream::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4) - 4) = *(_DWORD *)(*this + 4) - 104;
  sub_100046D0(v3);
  *v3 = &std::filebuf::`vftable';
  sub_10004310(nullptr, nullptr);
  return this;
}

// Address: 0x10002C80
int __stdcall sub_10002C80(int a1)
{
  int v1; // eax

  v1 = sub_10004FF0(a1);
  return sub_100040A0(v1);
}

// Address: 0x10002CA0
int __thiscall sub_10002CA0(FILE **this)
{
  if ( *(this + 19) == nullptr
    || ((int (__thiscall *)(FILE **, int))(*this)->_flag)(this, -1) == -1
    || fflush(*(this + 19)) >= 0 )
  {
    return 0;
  }
  else
  {
    return -1;
  }
}

// Address: 0x10002CD0
FILE **__thiscall sub_10002CD0(FILE **this, char *Buffer, __int64 Size)
{
  FILE *v4; // ecx
  int v5; // eax

  v4 = *(this + 19);
  if ( v4 == nullptr )
    return nullptr;
  v5 = Buffer != nullptr || Size != 0 ? 0 : 4;
  if ( setvbuf(v4, Buffer, v5, Size) != 0 )
    return nullptr;
  sub_10004310(*(this + 19), (char **)1);
  return this;
}

// Address: 0x10002D20
int __thiscall sub_10002D20(int this, int a2, __int64 Offset, fpos_t a4, int a5, int a6, int a7)
{
  int v9; // edx
  int v10; // esi
  int v11; // ecx
  fpos_t Position; // [esp+10h] [ebp-8h] BYREF

  Position = a4;
  if ( *(_DWORD *)(this + 76) == 0
    || (unsigned __int8)sub_10004130() == 0
    || fsetpos(*(FILE **)(this + 76), &Position) != 0
    || Offset != 0 && _fseeki64(*(FILE **)(this + 76), Offset, 1) != 0
    || fgetpos(*(FILE **)(this + 76), &Position) != 0 )
  {
    *(_DWORD *)a2 = -1;
    *(_DWORD *)(a2 + 4) = -1;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    return a2;
  }
  else
  {
    *(_DWORD *)(this + 64) = a5;
    *(_DWORD *)(this + 68) = a6;
    std::filebuf::_Reset_back(this);
    v9 = *(_DWORD *)(this + 64);
    v10 = *(_DWORD *)(this + 68);
    *(_DWORD *)(a2 + 8) = Position;
    v11 = HIDWORD(Position);
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 12) = v11;
    *(_DWORD *)(a2 + 16) = v9;
    *(_DWORD *)(a2 + 20) = v10;
    return a2;
  }
}

// Address: 0x10002E20
int __thiscall sub_10002E20(int this, int a2, __int64 a3, int Origin, int a5)
{
  __int64 v6; // kr00_8
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v11; // edx
  int v12; // esi
  int v13; // ecx
  fpos_t Position; // [esp+10h] [ebp-8h] BYREF

  if ( **(_DWORD **)(this + 28) == this + 60 && Origin == 1 && *(_DWORD *)(this + 56) == 0 )
    v6 = a3 - 1;
  else
    v6 = a3;
  if ( *(_DWORD *)(this + 76) == 0
    || (unsigned __int8)sub_10004130(this) == 0
    || (v6 != 0 || Origin != 1) && _fseeki64(*(FILE **)(this + 76), v6, Origin) != 0
    || fgetpos(*(FILE **)(this + 76), &Position) != 0 )
  {
    *(_DWORD *)a2 = -1;
    *(_DWORD *)(a2 + 4) = -1;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    return a2;
  }
  else
  {
    v7 = *(_DWORD **)(this + 12);
    if ( *v7 == this + 60 )
    {
      v8 = *(_DWORD *)(this + 80);
      v9 = *(_DWORD *)(this + 84) - v8;
      *v7 = v8;
      **(_DWORD **)(this + 28) = v8;
      **(_DWORD **)(this + 44) = v9;
    }
    v11 = *(_DWORD *)(this + 64);
    v12 = *(_DWORD *)(this + 68);
    *(_DWORD *)(a2 + 8) = Position;
    v13 = HIDWORD(Position);
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 12) = v13;
    *(_DWORD *)(a2 + 16) = v11;
    *(_DWORD *)(a2 + 20) = v12;
    return a2;
  }
}

// Address: 0x10002F30
int __thiscall sub_10002F30(int this)
{
  unsigned int v2; // ecx
  _DWORD *v3; // edx
  _DWORD *v4; // ecx
  unsigned __int8 *v5; // edx
  int result; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  size_t v11; // ebx
  size_t v12; // esi
  unsigned int v13; // ecx
  void **v14; // eax
  void **v15; // eax
  void **v16; // edi
  void **v17; // esi
  char *v18; // eax
  int v19; // edi
  int v20; // eax
  char *v21; // ecx
  void **v22; // eax
  int v23; // esi
  void **v24; // eax
  void **v25; // ecx
  void **v26; // eax
  int v27; // edx
  int v28; // esi
  int v29; // eax
  char *v30; // eax
  unsigned int v31; // ecx
  unsigned __int8 *v32; // [esp+10h] [ebp-3Ch] BYREF
  int v33; // [esp+14h] [ebp-38h]
  int v34; // [esp+18h] [ebp-34h]
  int v35; // [esp+1Ch] [ebp-30h] BYREF
  unsigned __int8 v36; // [esp+23h] [ebp-29h] BYREF
  void *Block[4]; // [esp+24h] [ebp-28h] BYREF
  size_t Size; // [esp+34h] [ebp-18h]
  unsigned int v39; // [esp+38h] [ebp-14h]
  int v40; // [esp+48h] [ebp-4h]

  v34 = this;
  v2 = **(_DWORD **)(this + 28);
  if ( v2 != 0 )
  {
    v3 = *(_DWORD **)(this + 44);
    if ( v2 < *v3 + v2 )
    {
      --*v3;
      v4 = *(_DWORD **)(this + 28);
      v5 = (unsigned __int8 *)(*v4)++;
      return *v5;
    }
  }
  if ( *(_DWORD *)(this + 76) == 0 )
    return -1;
  v7 = *(_DWORD **)(this + 12);
  if ( *v7 == this + 60 )
  {
    v8 = *(_DWORD *)(this + 80);
    v9 = *(_DWORD *)(this + 84) - v8;
    *v7 = v8;
    **(_DWORD **)(this + 28) = v8;
    **(_DWORD **)(this + 44) = v9;
  }
  if ( *(_DWORD *)(this + 56) == 0 )
  {
    result = fgetc(*(FILE **)(this + 76));
    if ( result != -1 )
      return (unsigned __int8)result;
    return -1;
  }
  v39 = 15;
  Size = 0;
  LOBYTE(Block[0]) = 0;
  v40 = 0;
  v10 = fgetc(*(FILE **)(this + 76));
  v33 = v10;
  if ( v10 == -1 )
  {
LABEL_42:
    v21 = (char *)Block[0];
    v23 = -1;
    goto LABEL_43;
  }
  while ( 1 )
  {
    v11 = Size;
    if ( Size == -1 || Size == -2 || (v12 = Size + 1, Size == -2) )
      sub_1000B693("string too long");
    v13 = v39;
    if ( v39 >= v12 )
    {
      if ( Size == -1 )
      {
        Size = 0;
        v24 = Block;
        if ( v39 >= 0x10 )
          v24 = (void **)Block[0];
        *(_BYTE *)v24 = 0;
        goto LABEL_21;
      }
    }
    else
    {
      sub_10001860((unsigned int *)Block, Size + 1, Size);
      v13 = v39;
      v11 = Size;
      LOBYTE(v10) = v33;
      if ( v12 == 0 )
        goto LABEL_22;
    }
    v14 = Block;
    if ( v13 >= 0x10 )
      v14 = (void **)Block[0];
    *((_BYTE *)v14 + v11) = v10;
    v15 = Block;
    Size = v12;
    if ( v39 >= 0x10 )
      v15 = (void **)Block[0];
    *((_BYTE *)v15 + v12) = 0;
LABEL_21:
    v11 = Size;
    v13 = v39;
LABEL_22:
    v16 = Block;
    if ( v13 >= 0x10 )
      v16 = (void **)Block[0];
    v17 = Block;
    if ( v13 >= 0x10 )
      v17 = (void **)Block[0];
    v18 = (char *)v16 + v11;
    v19 = v34;
    v20 = (*(int (__thiscall **)(_DWORD, int, void **, char *, int *, unsigned __int8 *, void **, unsigned __int8 **))(**(_DWORD **)(v34 + 56) + 24))(
            *(_DWORD *)(v34 + 56),
            v34 + 64,
            v17,
            v18,
            &v35,
            &v36,
            Block,
            &v32);
    if ( v20 < 0 )
      goto LABEL_42;
    if ( v20 > 1 )
      break;
    if ( v32 != &v36 )
    {
      v26 = Block;
      v21 = (char *)Block[0];
      if ( v39 >= 0x10 )
        v26 = (void **)Block[0];
      v27 = v35;
      v28 = (int)v26 + Size - v35;
      if ( v28 > 0 )
      {
        while ( 1 )
        {
          v29 = *(char *)(v28 + v27 - 1);
          --v28;
          ungetc(v29, *(FILE **)(v19 + 76));
          if ( v28 <= 0 )
            break;
          v27 = v35;
        }
        v21 = (char *)Block[0];
      }
      v23 = v36;
      goto LABEL_43;
    }
    v25 = Block;
    if ( v39 >= 0x10 )
      v25 = (void **)Block[0];
    sub_10001590(Block, 0, v35 - (_DWORD)v25);
LABEL_41:
    v10 = fgetc(*(FILE **)(v19 + 76));
    v33 = v10;
    if ( v10 == -1 )
      goto LABEL_42;
  }
  if ( v20 != 3 )
    goto LABEL_42;
  if ( Size == 0 )
    goto LABEL_41;
  v21 = (char *)Block[0];
  if ( v39 < 0x10 )
  {
    v22 = Block;
  }
  else
  {
    v22 = (void **)Block[0];
    if ( Block[0] == nullptr )
    {
      v36 = 0;
      *_errno() = 22;
      _invalid_parameter_noinfo();
      v21 = (char *)Block[0];
      v23 = v36;
      goto LABEL_43;
    }
  }
  v36 = *(_BYTE *)v22;
  v23 = v36;
LABEL_43:
  if ( v39 >= 0x10 )
  {
    if ( v39 + 1 >= 0x1000 )
    {
      if ( ((int)Block[0] & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v30 = *((char **)v21 - 1);
      if ( v30 >= v21 )
        _invalid_parameter_noinfo_noreturn();
      v31 = v21 - v30;
      if ( v31 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v31 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v21 = v30;
    }
    j_j___free_base(v21);
  }
  return v23;
}

// Address: 0x10003220
int __thiscall sub_10003220(unsigned __int8 ***this)
{
  unsigned __int8 *v2; // ecx
  int result; // eax
  int v4; // edi

  v2 = **(this + 7);
  if ( v2 != nullptr && v2 < &(**(this + 11))[(int)v2] )
    return *v2;
  result = ((int (__thiscall *)(unsigned __int8 ***))(*this)[7])(this);
  v4 = result;
  if ( result != -1 )
  {
    ((void (__thiscall *)(unsigned __int8 ***, int))(*this)[4])(this, result);
    return v4;
  }
  return result;
}

// Address: 0x10003260
int __thiscall sub_10003260(int this, int a2)
{
  unsigned int v3; // ecx
  int result; // eax

  v3 = **(_DWORD **)(this + 28);
  if ( v3 == 0 || **(_DWORD **)(this + 12) >= v3 || a2 != -1 && *(unsigned __int8 *)(v3 - 1) != a2 )
  {
    if ( *(_DWORD *)(this + 76) != 0 && a2 != -1 )
    {
      if ( *(_DWORD *)(this + 56) == 0 && ungetc((unsigned __int8)a2, *(FILE **)(this + 76)) != -1 )
        return a2;
      if ( **(_DWORD **)(this + 28) != this + 60 )
      {
        *(_BYTE *)(this + 60) = a2;
        std::filebuf::_Set_back(this);
        return a2;
      }
    }
    return -1;
  }
  ++**(_DWORD **)(this + 44);
  --**(_DWORD **)(this + 28);
  result = 0;
  if ( a2 != -1 )
    return a2;
  return result;
}

// Address: 0x100032F0
int __thiscall sub_100032F0(char *this, int a2)
{
  char *v2; // ebx
  char v3; // cl
  unsigned int v5; // edx
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  _BYTE *v8; // edx
  void **v9; // esi
  void *v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  size_t v15; // ecx
  size_t v16; // edi
  void **v17; // esi
  bool v18; // cf
  void **v19; // eax
  int v20; // ecx
  void **v21; // edx
  int v22; // eax
  void **v23; // eax
  size_t v24; // edi
  void **v25; // eax
  bool v26; // zf
  size_t v27; // ebx
  void **v28; // eax
  void **v29; // eax
  int v30; // ebx
  int v31; // eax
  char *v32; // [esp+10h] [ebp-38h] BYREF
  void **v33; // [esp+14h] [ebp-34h] BYREF
  char *v34; // [esp+18h] [ebp-30h]
  char v35; // [esp+1Fh] [ebp-29h] BYREF
  void *Buffer[4]; // [esp+20h] [ebp-28h] BYREF
  size_t Size; // [esp+30h] [ebp-18h]
  unsigned int v38; // [esp+34h] [ebp-14h]
  int v39; // [esp+44h] [ebp-4h]

  v2 = this;
  v34 = this;
  v3 = a2;
  if ( a2 == -1 )
    return 0;
  v5 = **((_DWORD **)v2 + 8);
  if ( v5 != 0 && (v6 = *((_DWORD **)v2 + 12), v5 < *v6 + v5) )
  {
    --*v6;
    v7 = *((_DWORD **)v2 + 8);
    v8 = (_BYTE *)(*v7)++;
    *v8 = a2;
    return a2;
  }
  else if ( *((_DWORD *)v2 + 19) != 0 )
  {
    v9 = *((void ***)v2 + 3);
    if ( *v9 == v2 + 60 )
    {
      v10 = *((void **)v2 + 20);
      v11 = *((_DWORD *)v2 + 21);
      *v9 = v10;
      v12 = v11 - (_DWORD)v10;
      **((_DWORD **)v2 + 7) = v10;
      v3 = a2;
      **((_DWORD **)v2 + 11) = v12;
    }
    if ( *((_DWORD *)v2 + 14) != 0 )
    {
      v35 = v3;
      v38 = 15;
      Size = 0;
      LOBYTE(Buffer[0]) = 0;
      sub_10003D30(8u, 0);
      v39 = 0;
      v15 = 15;
      v16 = 0;
      v17 = (void **)Buffer[0];
      while ( 1 )
      {
        v18 = v15 < 0x10;
        v19 = Buffer;
        v20 = *((_DWORD *)v2 + 14);
        v21 = Buffer;
        if ( !v18 )
          v19 = v17;
        v2 = v34;
        if ( !v18 )
          v21 = v17;
        v22 = (*(int (__thiscall **)(int, char *, char *, void **, char **, void **, size_t, void ***))(*(_DWORD *)v20 + 28))(
                v20,
                v34 + 64,
                &v35,
                Buffer,
                &v32,
                v21,
                (size_t)v19 + v16,
                &v33);
        if ( v22 < 0 )
          goto LABEL_47;
        if ( v22 > 1 )
          break;
        v15 = v38;
        v23 = Buffer;
        v17 = (void **)Buffer[0];
        if ( v38 >= 0x10 )
          v23 = (void **)Buffer[0];
        v24 = (char *)v33 - (char *)v23;
        if ( v33 != v23 )
        {
          v25 = Buffer;
          if ( v38 >= 0x10 )
            v25 = (void **)Buffer[0];
          if ( v24 != fwrite(v25, 1u, v24, *((FILE **)v2 + 19)) )
            goto LABEL_47;
          v15 = v38;
          v17 = (void **)Buffer[0];
        }
        v2[61] = 1;
        if ( v32 != &v35 )
        {
          v30 = a2;
          goto LABEL_48;
        }
        v26 = v24 == 0;
        v16 = Size;
        if ( v26 )
        {
          if ( Size >= 0x20 )
            goto LABEL_47;
          if ( -1 - Size <= 8 )
            sub_1000B693("string too long");
          v27 = Size + 8;
          if ( v15 >= Size + 8
            || (sub_10001860((unsigned int *)Buffer, Size + 8, Size),
                v15 = v38,
                v16 = Size,
                v17 = (void **)Buffer[0],
                v27 != 0) )
          {
            v28 = Buffer;
            if ( v15 >= 0x10 )
              v28 = v17;
            *(_QWORD *)((char *)v28 + v16) = 0;
            v29 = Buffer;
            Size = v27;
            if ( v38 >= 0x10 )
              v29 = (void **)Buffer[0];
            *((_BYTE *)v29 + v27) = 0;
            v15 = v38;
            v16 = Size;
            v17 = (void **)Buffer[0];
          }
          v2 = v34;
        }
      }
      if ( v22 != 3 )
      {
LABEL_47:
        v30 = -1;
        goto LABEL_48;
      }
      v31 = fputc(v35, *((FILE **)v2 + 19));
      v30 = -1;
      if ( v31 != -1 )
        v30 = a2;
LABEL_48:
      sub_10001410(Buffer);
      return v30;
    }
    else
    {
      v13 = fputc(v3, *((FILE **)v2 + 19));
      v14 = -1;
      if ( v13 != -1 )
        return a2;
      return v14;
    }
  }
  else
  {
    return -1;
  }
}

// Address: 0x10003580
void __thiscall sub_10003580(FILE **this)
{
  if ( *(this + 19) != nullptr )
    _unlock_file(*(this + 19));
}

// Address: 0x10003590
void __thiscall sub_10003590(FILE **this)
{
  if ( *(this + 19) != nullptr )
    _lock_file(*(this + 19));
}

// Address: 0x100035A0
void __thiscall sub_100035A0(_DWORD *this)
{
  bool v2; // zf
  void **v3; // edi
  int v4; // edx
  void *v5; // ecx
  _DWORD *v6; // esi
  int v7; // ecx
  void (__thiscall ***v8)(_DWORD, int); // eax

  v2 = *(this + 19) == 0;
  *this = &std::filebuf::`vftable';
  if ( !v2 )
  {
    v3 = (void **)*(this + 3);
    if ( *v3 == this + 15 )
    {
      v4 = *(this + 21);
      v5 = (void *)*(this + 20);
      *v3 = v5;
      *(_DWORD *)*(this + 7) = v5;
      *(_DWORD *)*(this + 11) = v4 - (_DWORD)v5;
    }
  }
  if ( *((_BYTE *)this + 72) != 0 )
    sub_100043F0(this);
  *this = &std::streambuf::`vftable';
  v6 = (_DWORD *)*(this + 13);
  if ( v6 != nullptr )
  {
    v7 = v6[1];
    if ( v7 != 0 )
    {
      v8 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( v8 != nullptr )
        (**v8)(v8, 1);
    }
    sub_1000CA99(v6);
  }
}

// Address: 0x10003650
int __thiscall sub_10003650(_DWORD *this)
{
  int v1; // edx

  *(_DWORD *)((char *)this + *(_DWORD *)(*(this - 2) + 4) - 8) = &std::ostream::`vftable';
  v1 = *(_DWORD *)(*(this - 2) + 4);
  *(_DWORD *)((char *)this + v1 - 12) = v1 - 8;
  return v1 - 8;
}

// Address: 0x10003670
void __stdcall nullsub_2(int a1)
{
  ;
}

// Address: 0x10003680
int sub_10003680()
{
  return 0;
}

// Address: 0x10003690
void *__thiscall sub_10003690(void *this, int a2, int a3, int a4)
{
  return this;
}

// Address: 0x100036A0
int __stdcall sub_100036A0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  *(_DWORD *)a1 = -1;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return a1;
}

// Address: 0x100036E0
int __stdcall sub_100036E0(int a1, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)a1 = -1;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return a1;
}

// Address: 0x10003720
int __thiscall sub_10003720(void ***this, unsigned __int8 *Src, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // kr10_8
  __int64 v6; // rax
  unsigned __int64 v7; // kr00_8
  unsigned __int64 v8; // kr08_8

  v3 = HIDWORD(a3);
  if ( a3 < 0 )
    return 0;
  v4 = a3;
  if ( a3 <= 0 )
    return 0;
  v5 = 0;
  do
  {
    v6 = sub_10004610();
    v7 = v6;
    if ( v6 <= 0 )
    {
      if ( ((int (__thiscall *)(void ***, _DWORD))(*this)[3])(this, *Src) == -1 )
        return v5;
      ++Src;
      ++v5;
      v3 = (__PAIR64__(v3, v4--) - 1) >> 32;
    }
    else
    {
      if ( __SPAIR64__(v3, v4) < v6 )
        v7 = __PAIR64__(v3, v4);
      if ( (_DWORD)v7 != 0 )
        memmove_0(**(this + 8), Src, v7);
      Src += v7;
      v8 = __PAIR64__(v3, v4) - v7;
      v3 = (__PAIR64__(v3, v4) - v7) >> 32;
      v4 = v8;
      **(this + 12) = (char *)**(this + 12) - v7;
      **(this + 8) = (char *)**(this + 8) + v7;
      v5 += v7;
    }
  }
  while ( v3 > 0 || v3 >= 0 && v4 != 0 );
  return v5;
}

// Address: 0x10003830
int __thiscall sub_10003830(const void ***this, char *a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // kr10_8
  __int64 v6; // rax
  unsigned __int64 v7; // kr00_8
  unsigned __int64 v8; // kr08_8
  int v9; // eax
  bool v10; // cf

  v3 = HIDWORD(a3);
  if ( a3 < 0 )
    return 0;
  v4 = a3;
  if ( a3 <= 0 )
    return 0;
  v5 = 0;
  do
  {
    v6 = sub_10004630();
    v7 = v6;
    if ( v6 <= 0 )
    {
      v9 = ((int (__thiscall *)(const void ***))(*this)[7])(this);
      if ( v9 == -1 )
        return v5;
      *a2++ = v9;
      ++v5;
      v10 = v4-- != 0;
      v3 = v10 + v3 - 1;
    }
    else
    {
      if ( __SPAIR64__(v3, v4) < v6 )
        v7 = __PAIR64__(v3, v4);
      if ( (_DWORD)v7 != 0 )
        memmove_0(a2, **(this + 7), v7);
      a2 += v7;
      v8 = __PAIR64__(v3, v4) - v7;
      v3 = (__PAIR64__(v3, v4) - v7) >> 32;
      v4 = v8;
      **(this + 11) = (char *)**(this + 11) - v7;
      **(this + 7) = (char *)**(this + 7) + v7;
      v5 += v7;
    }
  }
  while ( v3 > 0 || v3 >= 0 && v4 != 0 );
  return v5;
}

// Address: 0x10003940
int __thiscall sub_10003940(_DWORD **this)
{
  int result; // eax
  _DWORD *v3; // ecx
  unsigned __int8 *v4; // edx

  result = ((int (__thiscall *)(_DWORD **))(*this)[6])(this);
  if ( result != -1 )
  {
    --**(this + 11);
    v3 = *(this + 7);
    v4 = (unsigned __int8 *)(*v3)++;
    return *v4;
  }
  return result;
}

// Address: 0x10003970
int sub_10003970()
{
  return -1;
}

// Address: 0x10003980
__int64 sub_10003980()
{
  return 0;
}

// Address: 0x10003990
int __stdcall sub_10003990(int a1)
{
  return -1;
}

// Address: 0x100039A0
void _guard_check_icall_nop()
{
  ;
}

// Address: 0x100039B0
void __thiscall sub_100039B0(struct std::ios_base *this)
{
  *(_DWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
}

// Address: 0x10003A00
char *__thiscall sub_10003A00(struct std::ios_base *this, char a2)
{
  char *v3; // edi

  v3 = (char *)this - 104;
  *(_DWORD *)((char *)this + *(_DWORD *)(*((_DWORD *)this - 26) + 4) - 104) = &std::ofstream::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*((_DWORD *)this - 26) + 4) - 108) = *(_DWORD *)(*((_DWORD *)this - 26) + 4)
                                                                            - 104;
  sub_100035A0((_DWORD *)this - 25);
  *(_DWORD *)((char *)this + *(_DWORD *)(*((_DWORD *)this - 26) + 4) - 104) = &std::ostream::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*((_DWORD *)this - 26) + 4) - 108) = *(_DWORD *)(*((_DWORD *)this - 26) + 4)
                                                                            - 8;
  *(_DWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(v3);
  return v3;
}

// Address: 0x10003AB0
_DWORD *__thiscall sub_10003AB0(_DWORD *Block, char a2)
{
  sub_100035A0(Block);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10003AE0
char *__thiscall sub_10003AE0(struct std::ios_base *this, char a2)
{
  char *v2; // esi

  v2 = (char *)this - 8;
  *(_DWORD *)((char *)this + *(_DWORD *)(*((_DWORD *)this - 2) + 4) - 8) = &std::ostream::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*((_DWORD *)this - 2) + 4) - 12) = *(_DWORD *)(*((_DWORD *)this - 2) + 4) - 8;
  *(_DWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(v2);
  return v2;
}

// Address: 0x10003B60
_DWORD *__thiscall sub_10003B60(_DWORD *Block, char a2)
{
  _DWORD *v3; // edi
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // eax

  v3 = (_DWORD *)*(Block + 13);
  *Block = &std::streambuf::`vftable';
  if ( v3 != nullptr )
  {
    v4 = v3[1];
    if ( v4 != 0 )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( v5 != nullptr )
        (**v5)(v5, 1);
    }
    sub_1000CA99(v3);
  }
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10003BF0
struct std::ios_base *__thiscall sub_10003BF0(struct std::ios_base *this, char a2)
{
  *(_DWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(this);
  return this;
}

// Address: 0x10003C50
void __thiscall sub_10003C50(char *this)
{
  char *v1; // edx

  v1 = this + 8;
  *(_DWORD *)&v1[*(_DWORD *)(*(_DWORD *)this + 4) - 8] = &std::ostream::`vftable';
  *(_DWORD *)&v1[*(_DWORD *)(*(_DWORD *)this + 4) - 12] = *(_DWORD *)(*(_DWORD *)this + 4) - 8;
  *((_DWORD *)this + 2) = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)(this + 8));
}

// Address: 0x10003CC0
unsigned int __stdcall sub_10003CC0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int result; // eax

  result = a3 - a2;
  if ( a4 < a3 - a2 )
    return a4;
  return result;
}

// Address: 0x10003CE0
int __stdcall std::codecvt<char,char,_Mbstatet>::do_unshift(int a1, int a2, int a3, _DWORD *a4)
{
  *a4 = a2;
  return 0;
}

// Address: 0x10003D00
int __stdcall sub_10003D00(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, _DWORD *a7)
{
  *a4 = a2;
  *a7 = a5;
  return 3;
}

// Address: 0x10003D20
char sub_10003D20()
{
  return 1;
}

// Address: 0x10003D30
_DWORD *__thiscall sub_10003D30(_DWORD *this, size_t Size, char a3)
{
  bool v4; // cf
  void *v6; // ecx

  if ( Size == -1 )
    sub_1000B693("string too long");
  if ( *(this + 5) < Size )
  {
    sub_10001860(this, Size, *(this + 4));
    if ( Size == 0 )
      return this;
LABEL_4:
    if ( Size == 1 )
    {
      if ( *(this + 5) < 0x10u )
        *(_BYTE *)this = a3;
      else
        *(_BYTE *)*this = a3;
    }
    else
    {
      if ( *(this + 5) < 0x10u )
        v6 = this;
      else
        v6 = (void *)*this;
      memset(v6, a3, Size);
    }
    v4 = *(this + 5) < 0x10u;
    *(this + 4) = Size;
    if ( !v4 )
    {
      *(_BYTE *)(*this + Size) = 0;
      return this;
    }
    *((_BYTE *)this + Size) = 0;
    return this;
  }
  if ( Size != 0 )
    goto LABEL_4;
  v4 = *(this + 5) < 0x10u;
  *(this + 4) = 0;
  if ( v4 )
    *(_BYTE *)this = 0;
  else
    *(_BYTE *)*this = 0;
  return this;
}

// Address: 0x10003E00
unsigned int *__thiscall sub_10003E00(unsigned int *this, _BYTE *Src, size_t Size)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int *v6; // edx
  int v8; // edx
  size_t v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // edx
  bool v12; // cf

  if ( Src != nullptr )
  {
    v4 = *(this + 5);
    v5 = v4 < 0x10 ? (unsigned int)this : *this;
    if ( (unsigned int)Src >= v5 )
    {
      v6 = v4 < 0x10 ? this : (unsigned int *)*this;
      if ( (char *)v6 + *(this + 4) > Src )
      {
        if ( v4 < 0x10 )
          return (unsigned int *)sub_10003F30((int)this, Src - (_BYTE *)this, Size);
        else
          return (unsigned int *)sub_10003F30((int)this, (int)&Src[-*this], Size);
      }
    }
  }
  v8 = *(this + 4);
  v9 = Size;
  if ( ~v8 <= Size )
    sub_1000B693("string too long");
  v10 = v8 + Size;
  if ( Size == 0 )
    return this;
  if ( v10 == -1 )
    sub_1000B693("string too long");
  if ( *(this + 5) < v10 )
  {
    sub_10001860(this, v8 + Size, v8);
    v9 = Size;
    if ( v10 != 0 )
    {
LABEL_18:
      if ( *(this + 5) < 0x10 )
        v11 = (unsigned int)this;
      else
        v11 = *this;
      if ( v9 != 0 )
        memmove_0((void *)(v11 + *(this + 4)), Src, v9);
      v12 = *(this + 5) < 0x10;
      *(this + 4) = v10;
      if ( !v12 )
      {
        *(_BYTE *)(*this + v10) = 0;
        return this;
      }
      *((_BYTE *)this + v10) = 0;
    }
    return this;
  }
  if ( v10 != 0 )
    goto LABEL_18;
  *(this + 4) = 0;
  if ( *(this + 5) < 0x10 )
    *(_BYTE *)this = 0;
  else
    *(_BYTE *)*this = 0;
  return this;
}

// Address: 0x10003F30
unsigned int *__thiscall sub_10003F30(unsigned int *this, _DWORD *a2, unsigned int a3, size_t Size)
{
  _DWORD *v4; // ebx
  unsigned int v6; // eax
  int v7; // edx
  size_t v8; // eax
  size_t v9; // ecx
  size_t v10; // edi
  unsigned int v11; // edx
  bool v13; // cf
  size_t Sizea; // [esp+1Ch] [ebp+10h]

  v4 = a2;
  v6 = a2[4];
  if ( v6 < a3 )
    sub_1000B6B3("invalid string position");
  v7 = *(this + 4);
  v8 = v6 - a3;
  v9 = Size;
  if ( Size > v8 )
    v9 = v8;
  Sizea = v9;
  if ( ~v7 <= v9 )
    sub_1000B693("string too long");
  v10 = v7 + v9;
  if ( v9 == 0 )
    return this;
  if ( v10 == -1 )
    sub_1000B693("string too long");
  if ( *(this + 5) < v10 )
  {
    sub_10001860(this, v7 + v9, v7);
    v9 = Sizea;
    if ( v10 != 0 )
    {
LABEL_9:
      if ( a2[5] >= 0x10u )
        v4 = (_DWORD *)*a2;
      if ( *(this + 5) < 0x10 )
        v11 = (unsigned int)this;
      else
        v11 = *this;
      if ( v9 != 0 )
        memmove_0((void *)(v11 + *(this + 4)), (char *)v4 + a3, v9);
      v13 = *(this + 5) < 0x10;
      *(this + 4) = v10;
      if ( !v13 )
      {
        *(_BYTE *)(*this + v10) = 0;
        return this;
      }
      *((_BYTE *)this + v10) = 0;
    }
    return this;
  }
  if ( v10 != 0 )
    goto LABEL_9;
  *(this + 4) = 0;
  if ( *(this + 5) < 0x10 )
    *(_BYTE *)this = 0;
  else
    *(_BYTE *)*this = 0;
  return this;
}

// Address: 0x10004030
_DWORD *__thiscall std::filebuf::_Set_back(int this)
{
  _DWORD *v2; // edi
  int v3; // esi
  _DWORD *v4; // ecx
  _DWORD *result; // eax

  v2 = *(_DWORD **)(this + 12);
  v3 = this + 60;
  if ( *v2 != this + 60 )
  {
    v4 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 80) = *v2;
    *(_DWORD *)(this + 84) = *v4 + **(_DWORD **)(this + 44);
  }
  *v2 = v3;
  **(_DWORD **)(this + 28) = v3;
  result = *(_DWORD **)(this + 44);
  *result = this - v3 + 61;
  return result;
}

// Address: 0x10004070
_DWORD *__thiscall std::filebuf::_Reset_back(int this)
{
  _DWORD *v1; // edi
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi

  v1 = *(_DWORD **)(this + 12);
  result = (_DWORD *)(this + 60);
  if ( *v1 == this + 60 )
  {
    v3 = *(_DWORD *)(this + 80);
    v4 = *(_DWORD *)(this + 84);
    *v1 = v3;
    **(_DWORD **)(this + 28) = v3;
    result = *(_DWORD **)(this + 44);
    *result = v4 - v3;
  }
  return result;
}

// Address: 0x100040A0
_DWORD *__thiscall sub_100040A0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  if ( (_BYTE)result != 0 )
  {
    *(this + 14) = 0;
  }
  else
  {
    *(this + 14) = a2;
    *(this + 3) = this + 1;
    *(this + 4) = this + 2;
    *(this + 7) = this + 5;
    *(this + 8) = this + 6;
    *(this + 11) = this + 9;
    *(this + 12) = this + 10;
    *(this + 2) = 0;
    *(_DWORD *)*(this + 8) = 0;
    *(_DWORD *)*(this + 12) = 0;
    *(_DWORD *)*(this + 3) = 0;
    *(_DWORD *)*(this + 7) = 0;
    result = (_DWORD *)*(this + 11);
    *result = 0;
  }
  return result;
}

// Address: 0x10004130
char __thiscall sub_10004130(_DWORD *this)
{
  unsigned int v3; // edx
  void **v4; // ebx
  void **v5; // edi
  void **v6; // esi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  void **v10; // eax
  size_t v11; // esi
  void **v12; // eax
  size_t v13; // esi
  void **v14; // ecx
  void **v15; // eax
  void **v16; // eax
  void **v17; // [esp+14h] [ebp-34h] BYREF
  char *v18; // [esp+18h] [ebp-30h]
  _DWORD *v19; // [esp+1Ch] [ebp-2Ch]
  void *Buffer[4]; // [esp+20h] [ebp-28h] BYREF
  size_t Size; // [esp+30h] [ebp-18h]
  unsigned int v22; // [esp+34h] [ebp-14h]
  int v23; // [esp+44h] [ebp-4h]

  v19 = this;
  if ( *(this + 14) == 0 || *((_BYTE *)this + 61) == 0 )
    return 1;
  if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 12))(this, -1) == -1 )
    return 0;
  v22 = 15;
  Size = 0;
  LOBYTE(Buffer[0]) = 0;
  sub_10003D30(Buffer, 8u, 0);
  v23 = 0;
  v18 = (char *)(this + 16);
LABEL_6:
  v3 = v22;
  v4 = (void **)Buffer[0];
  while ( 1 )
  {
    v5 = Buffer;
    v6 = Buffer;
    if ( v3 >= 0x10 )
    {
      v5 = v4;
      v6 = v4;
    }
    v7 = (*(int (__thiscall **)(_DWORD, char *, void **, size_t, void ***))(*(_DWORD *)v19[14] + 32))(
           v19[14],
           v18,
           v6,
           (size_t)v5 + Size,
           &v17);
    if ( v7 == 0 )
    {
      v9 = v19;
      *((_BYTE *)v19 + 61) = 0;
      goto LABEL_13;
    }
    v8 = v7 - 1;
    if ( v8 != 0 )
      break;
    v9 = v19;
LABEL_13:
    v3 = v22;
    v10 = Buffer;
    v4 = (void **)Buffer[0];
    if ( v22 >= 0x10 )
      v10 = (void **)Buffer[0];
    v11 = (char *)v17 - (char *)v10;
    if ( v17 != v10 )
    {
      v12 = Buffer;
      if ( v22 >= 0x10 )
        v12 = (void **)Buffer[0];
      if ( v11 != fwrite(v12, 1u, v11, (FILE *)v9[19]) )
        goto LABEL_36;
      v3 = v22;
      v4 = (void **)Buffer[0];
    }
    if ( *((_BYTE *)v9 + 61) == 0 )
      goto LABEL_38;
    if ( v11 == 0 )
    {
      if ( -1 - Size <= 8 || (v13 = Size + 8, Size == -9) )
        sub_1000B693("string too long");
      if ( v3 >= v13 )
      {
        if ( Size == -8 )
        {
          Size = 0;
          v16 = Buffer;
          if ( v3 >= 0x10 )
            v16 = v4;
          *(_BYTE *)v16 = 0;
        }
        else
        {
LABEL_26:
          v14 = Buffer;
          if ( v3 >= 0x10 )
            v14 = v4;
          *(_QWORD *)((char *)v14 + Size) = 0;
          v15 = Buffer;
          Size = v13;
          if ( v22 >= 0x10 )
            v15 = (void **)Buffer[0];
          *((_BYTE *)v15 + v13) = 0;
        }
        goto LABEL_6;
      }
      sub_10001860((unsigned int *)Buffer, Size + 8, Size);
      v3 = v22;
      v4 = (void **)Buffer[0];
      if ( v13 != 0 )
        goto LABEL_26;
    }
  }
  if ( v8 != 2 )
  {
LABEL_36:
    sub_10001410(Buffer);
    return 0;
  }
LABEL_38:
  sub_10001410(Buffer);
  return 1;
}

// Address: 0x10004310
int __thiscall sub_10004310(int this, FILE *Stream, char **Base)
{
  FILE *v4; // edi
  char **v5; // eax
  FILE *v6; // eax
  int *v7; // eax
  int result; // eax
  int *Count; // [esp+8h] [ebp-4h] BYREF

  v4 = Stream;
  *(_BYTE *)(this + 72) = Base == (char **)1;
  *(_DWORD *)(this + 12) = this + 4;
  *(_DWORD *)(this + 28) = this + 20;
  *(_DWORD *)(this + 32) = this + 24;
  *(_DWORD *)(this + 44) = this + 36;
  *(_DWORD *)(this + 48) = this + 40;
  *(_BYTE *)(this + 61) = 0;
  *(_DWORD *)(this + 16) = this + 8;
  *(_DWORD *)(this + 8) = 0;
  **(_DWORD **)(this + 32) = 0;
  **(_DWORD **)(this + 48) = 0;
  **(_DWORD **)(this + 12) = 0;
  **(_DWORD **)(this + 28) = 0;
  **(_DWORD **)(this + 44) = 0;
  if ( v4 != nullptr )
  {
    Base = nullptr;
    Stream = nullptr;
    Count = nullptr;
    _get_stream_buffer_pointers(v4, &Base, (char ***)&Stream, &Count);
    v5 = Base;
    *(_DWORD *)(this + 12) = Base;
    *(_DWORD *)(this + 16) = v5;
    v6 = Stream;
    *(_DWORD *)(this + 28) = Stream;
    *(_DWORD *)(this + 32) = v6;
    v7 = Count;
    *(_DWORD *)(this + 44) = Count;
    *(_DWORD *)(this + 48) = v7;
  }
  *(_DWORD *)(this + 76) = v4;
  *(_DWORD *)(this + 64) = dword_10041458;
  result = dword_1004145C;
  *(_DWORD *)(this + 68) = dword_1004145C;
  *(_DWORD *)(this + 56) = 0;
  return result;
}

// Address: 0x100043F0
int __thiscall sub_100043F0(int this)
{
  int v2; // edi

  if ( *(_DWORD *)(this + 76) != 0 )
  {
    v2 = this;
    if ( sub_10004130((_DWORD *)this) == 0 )
      v2 = 0;
    if ( fclose(*(FILE **)(this + 76)) != 0 )
      v2 = 0;
  }
  else
  {
    v2 = 0;
  }
  *(_BYTE *)(this + 72) = 0;
  *(_DWORD *)(this + 12) = this + 4;
  *(_DWORD *)(this + 16) = this + 8;
  *(_DWORD *)(this + 28) = this + 20;
  *(_DWORD *)(this + 32) = this + 24;
  *(_DWORD *)(this + 44) = this + 36;
  *(_DWORD *)(this + 48) = this + 40;
  *(_BYTE *)(this + 61) = 0;
  *(_DWORD *)(this + 8) = 0;
  **(_DWORD **)(this + 32) = 0;
  **(_DWORD **)(this + 48) = 0;
  **(_DWORD **)(this + 12) = 0;
  **(_DWORD **)(this + 28) = 0;
  **(_DWORD **)(this + 44) = 0;
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 64) = dword_10041458;
  *(_DWORD *)(this + 68) = dword_1004145C;
  *(_DWORD *)(this + 56) = 0;
  return v2;
}

// Address: 0x100044B0
_DWORD *__thiscall sub_100044B0(_DWORD *this, int a2, int a3, int a4)
{
  FILE *v5; // eax
  int v6; // eax
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // eax
  _BYTE v10[4]; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+20h] [ebp-4h]

  if ( *(this + 19) != 0 )
    return nullptr;
  v5 = (FILE *)sub_1000BD72(a2, 10, 64);
  if ( v5 == nullptr )
    return nullptr;
  sub_10004310((int)this, v5, (char **)1);
  v6 = sub_10004680(v10);
  v12 = 0;
  v7 = sub_10004FF0(v6);
  sub_100040A0(this, v7);
  v12 = 1;
  if ( v11 != 0 )
  {
    v8 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
    if ( v8 != nullptr )
      (**v8)(v8, 1);
  }
  return this;
}

// Address: 0x10004570
_DWORD *__thiscall sub_10004570(_DWORD *this, int a2, int a3, int a4)
{
  if ( a4 != 0 )
  {
    *this = &unk_10039B98;
    *(this + 2) = &std::ios::`vftable';
  }
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4)) = &std::ostream::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4) - 4) = *(_DWORD *)(*this + 4) - 8;
  sub_10004790((struct std::ios_base *)((char *)this + *(_DWORD *)(*this + 4)), a2, a3);
  return this;
}

// Address: 0x10004610
__int64 __thiscall sub_10004610(_DWORD **this)
{
  if ( **(this + 8) != 0 )
    return (int)**(this + 12);
  else
    return 0;
}

// Address: 0x10004630
__int64 __thiscall sub_10004630(_DWORD **this)
{
  if ( **(this + 7) != 0 )
    return (int)**(this + 11);
  else
    return 0;
}

// Address: 0x10004650
_DWORD *__thiscall sub_10004650(_DWORD *Block, char a2)
{
  *Block = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10004680
int __thiscall sub_10004680(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = *(_DWORD *)(*(this + 13) + 4);
  *(_DWORD *)(a2 + 4) = v2;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  return a2;
}

// Address: 0x100046D0
_DWORD *__thiscall sub_100046D0(_DWORD *this)
{
  _DWORD *v2; // esi

  *this = &std::streambuf::`vftable';
  v2 = operator new(8u);
  v2[1] = std::locale::_Init(true);
  *(this + 13) = v2;
  *(this + 3) = this + 1;
  *(this + 4) = this + 2;
  *(this + 7) = this + 5;
  *(this + 8) = this + 6;
  *(this + 11) = this + 9;
  *(this + 12) = this + 10;
  *(this + 2) = 0;
  *(_DWORD *)*(this + 8) = 0;
  *(_DWORD *)*(this + 12) = 0;
  *(_DWORD *)*(this + 3) = 0;
  *(_DWORD *)*(this + 7) = 0;
  *(_DWORD *)*(this + 11) = 0;
  return this;
}

// Address: 0x10004790
void __thiscall sub_10004790(struct std::ios_base *this, int a2, char a3)
{
  int v4; // eax
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // eax
  char v7; // al
  bool v8; // zf
  _BYTE v9[4]; // [esp+Ch] [ebp-14h] BYREF
  int v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+1Ch] [ebp-4h]

  sub_100025F0(this);
  *((_DWORD *)this + 14) = a2;
  *((_DWORD *)this + 15) = 0;
  v4 = sub_100025A0(this, (int)v9);
  v11 = 0;
  v5 = sub_10004860(v4);
  v11 = 1;
  if ( v10 != 0 )
  {
    v6 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
    if ( v6 != nullptr )
      (**v6)(v6, 1);
  }
  v11 = -1;
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 32);
  v8 = *((_DWORD *)this + 14) == 0;
  *((_BYTE *)this + 64) = v7;
  if ( v8 )
    sub_100024D0(this, *((_DWORD *)this + 3) | 4, 0);
  if ( a3 != 0 )
    std::ios_base::_Addstd(this);
}

// Address: 0x10004860
struct std::_Facet_base *__cdecl sub_10004860(int a1)
{
  unsigned int v1; // edi
  int v2; // ebx
  int v3; // ecx
  struct std::_Facet_base *v4; // esi
  int v5; // eax
  _DWORD pExceptionObject[3]; // [esp+14h] [ebp-28h] BYREF
  _BYTE v8[4]; // [esp+20h] [ebp-1Ch] BYREF
  _BYTE v9[4]; // [esp+24h] [ebp-18h] BYREF
  struct std::_Facet_base *v10[5]; // [esp+28h] [ebp-14h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v8, 0);
  v10[4] = nullptr;
  v1 = dword_10040410;
  v2 = dword_1004144C;
  v10[0] = (struct std::_Facet_base *)dword_1004144C;
  if ( dword_10040410 == 0 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v9, 0);
    if ( dword_10040410 == 0 )
      dword_10040410 = ++dword_100403F0;
    std::_Lockit::~_Lockit((std::_Lockit *)v9);
    v1 = dword_10040410;
  }
  v3 = *(_DWORD *)(a1 + 4);
  if ( v1 >= *(_DWORD *)(v3 + 12) )
  {
    v4 = nullptr;
  }
  else
  {
    v4 = *(struct std::_Facet_base **)(*(_DWORD *)(v3 + 8) + 4 * v1);
    if ( v4 != nullptr )
      goto LABEL_18;
  }
  if ( *(_BYTE *)(v3 + 20) == 0 )
    goto LABEL_12;
  v5 = sub_1000B998();
  if ( v1 < *(_DWORD *)(v5 + 12) )
  {
    v4 = *(struct std::_Facet_base **)(*(_DWORD *)(v5 + 8) + 4 * v1);
LABEL_12:
    if ( v4 != nullptr )
      goto LABEL_18;
  }
  if ( v2 != 0 )
  {
    v4 = (struct std::_Facet_base *)v2;
  }
  else
  {
    if ( sub_10001E50(v10, a1) == -1 )
    {
      pExceptionObject[0] = &std::bad_cast::`vftable';
      pExceptionObject[2] = 0;
      pExceptionObject[1] = "bad cast";
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast_std__);
    }
    v4 = v10[0];
    dword_1004144C = (int)v10[0];
    (*(void (__thiscall **)(struct std::_Facet_base *))(*(_DWORD *)v10[0] + 4))(v10[0]);
    std::_Facet_Register(v4);
  }
LABEL_18:
  std::_Lockit::~_Lockit((std::_Lockit *)v8);
  return v4;
}

// Address: 0x10004990
int *sub_10004990()
{
  if ( dword_10041440 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_10041440);
    if ( dword_10041440 == -1 )
    {
      dword_10041444 = (int)&std::_Iostream_error_category::`vftable';
      dword_10041448 = 5;
      atexit(nullsub_1);
      _Init_thread_footer(&dword_10041440);
    }
  }
  return &dword_10041444;
}

// Address: 0x10004A00
int sub_10004A00(char *Buffer, char *Format, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, Format);
  return sub_10001A50(Buffer, 0x104u, Format, nullptr, va);
}

// Address: 0x10004A20
int *__fastcall sub_10004A20(int *a1, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // esi
  int v10; // ecx
  int v11; // eax
  int *v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  unsigned __int8 v16; // dl
  int v17; // eax
  _DWORD *v18; // ecx
  unsigned __int8 *v19; // edx
  int v20; // eax
  _DWORD *v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  unsigned __int8 v27; // dl
  int v28; // eax
  _DWORD *v29; // ecx
  unsigned __int8 *v30; // edx
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // ecx
  int v34; // edx
  char v35; // al
  char v36; // al
  int *v37; // esi
  int v38; // ecx
  _DWORD v40[4]; // [esp+0h] [ebp-40h] BYREF
  int *v41; // [esp+10h] [ebp-30h]
  unsigned int v42; // [esp+14h] [ebp-2Ch]
  _DWORD *v43; // [esp+18h] [ebp-28h]
  int v44; // [esp+20h] [ebp-20h]
  int *v45; // [esp+24h] [ebp-1Ch]
  unsigned int v46; // [esp+28h] [ebp-18h]
  unsigned __int8 v47; // [esp+2Fh] [ebp-11h]
  _DWORD *v48; // [esp+30h] [ebp-10h]
  int v49; // [esp+3Ch] [ebp-4h]

  v48 = v40;
  v43 = a2;
  v45 = a1;
  v3 = *a1;
  v4 = 0;
  v5 = a2[4];
  v44 = 0;
  v46 = v5;
  v6 = *(_DWORD *)(v3 + 4);
  v7 = *(int *)((char *)v45 + v6 + 36);
  v8 = *(int *)((char *)v45 + v6 + 32);
  if ( __SPAIR64__(v7, v8) <= 0 || (v42 = *(int *)((char *)v45 + v6 + 36), v8 <= v5) )
  {
    v9 = 0;
  }
  else
  {
    v42 = v7;
    v9 = v8 - v5;
  }
  v10 = *(int *)((char *)a1 + v6 + 56);
  v41 = a1;
  if ( v10 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
  v49 = 0;
  v11 = *(_DWORD *)(*a1 + 4);
  if ( *(int *)((char *)a1 + v11 + 12) == 0 )
  {
    v12 = *(int **)((char *)a1 + v11 + 60);
    if ( v12 != nullptr && v12 != a1 )
      sub_10005310(v40[0], v40[1]);
  }
  v13 = *(_DWORD *)(*a1 + 4);
  LOBYTE(v42) = *(int *)((char *)a1 + v13 + 12) == 0;
  v49 = 1;
  if ( (_BYTE)v42 != 0 )
  {
    LOBYTE(v49) = 2;
    if ( (*(int *)((char *)a1 + v13 + 20) & 0x1C0) != 0x40 )
    {
      while ( v9 != 0 )
      {
        v14 = *(_DWORD *)(*a1 + 4);
        v15 = *(int *)((char *)a1 + v14 + 56);
        v16 = *((_BYTE *)a1 + v14 + 64);
        v47 = v16;
        if ( **(_DWORD **)(v15 + 32) != 0 && (v17 = **(_DWORD **)(v15 + 48)) > 0 )
        {
          **(_DWORD **)(v15 + 48) = v17 - 1;
          v18 = *(_DWORD **)(v15 + 32);
          v19 = (unsigned __int8 *)(*v18)++;
          LOBYTE(v20) = v47;
          *v19 = v47;
          v20 = (unsigned __int8)v20;
        }
        else
        {
          v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 12))(v15, v16);
        }
        if ( v20 == -1 )
        {
          v4 = 4;
          v44 = 4;
          goto LABEL_26;
        }
        --v9;
      }
    }
    v21 = v43;
    if ( v43[5] >= 0x10u )
      v21 = (_DWORD *)*v43;
    v22 = *(int *)((char *)a1 + *(_DWORD *)(*a1 + 4) + 56);
    v23 = (*(int (__thiscall **)(int, _DWORD *, unsigned int, _DWORD))(*(_DWORD *)v22 + 36))(v22, v21, v46, 0);
    if ( v23 != v46 || v24 != 0 )
    {
      v4 = 4;
    }
    else
    {
LABEL_26:
      while ( v9 != 0 )
      {
        v25 = *(_DWORD *)(*a1 + 4);
        v26 = *(int *)((char *)a1 + v25 + 56);
        v27 = *((_BYTE *)a1 + v25 + 64);
        v47 = v27;
        if ( **(_DWORD **)(v26 + 32) != 0 && (v28 = **(_DWORD **)(v26 + 48)) > 0 )
        {
          **(_DWORD **)(v26 + 48) = v28 - 1;
          v29 = *(_DWORD **)(v26 + 32);
          v30 = (unsigned __int8 *)(*v29)++;
          LOBYTE(v31) = v47;
          *v30 = v47;
          v31 = (unsigned __int8)v31;
        }
        else
        {
          v31 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v26 + 12))(v26, v27);
        }
        if ( v31 == -1 )
        {
          v4 |= 4u;
          break;
        }
        --v9;
      }
    }
    v32 = *(_DWORD *)(*a1 + 4);
    *(int *)((char *)a1 + v32 + 32) = 0;
    *(int *)((char *)a1 + v32 + 36) = 0;
    v49 = 1;
  }
  else
  {
    v4 = 4;
  }
  v33 = (int *)((char *)a1 + *(_DWORD *)(*a1 + 4));
  if ( v4 != 0 )
  {
    v34 = v4 | v33[3];
    v35 = v34 | 4;
    if ( v33[14] != 0 )
      v35 = v34;
    sub_100024D0(v33, v35, 0);
  }
  v49 = 4;
  v36 = j____uncaught_exception(v33);
  v37 = v41;
  if ( v36 == 0 )
    sub_100055B0(v40[0], v40[1]);
  LOBYTE(v49) = 5;
  v38 = *(int *)((char *)v37 + *(_DWORD *)(*v37 + 4) + 56);
  if ( v38 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v38 + 8))(v38);
  return a1;
}

// Address: 0x10004C90
int *__fastcall sub_10004C90(int *a1, const char *a2)
{
  bool v3; // zf
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edi
  unsigned int v8; // esi
  signed __int64 v9; // kr00_8
  int v10; // ecx
  int v11; // eax
  int *v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // ecx
  _DWORD *v17; // edx
  _DWORD *v18; // ecx
  unsigned __int8 *v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  unsigned __int8 v26; // dl
  int v27; // eax
  _DWORD *v28; // ecx
  unsigned __int8 *v29; // edx
  int v30; // eax
  int v31; // eax
  int v32; // esi
  char v33; // al
  char v34; // al
  int v35; // esi
  int v36; // ecx
  _DWORD v38[4]; // [esp+0h] [ebp-40h] BYREF
  __int64 v39; // [esp+10h] [ebp-30h]
  int v40; // [esp+1Ch] [ebp-24h]
  const char *v41; // [esp+20h] [ebp-20h]
  int *v42; // [esp+24h] [ebp-1Ch]
  unsigned int v43; // [esp+28h] [ebp-18h]
  unsigned __int8 v44; // [esp+2Fh] [ebp-11h]
  _DWORD *v45; // [esp+30h] [ebp-10h]
  int v46; // [esp+3Ch] [ebp-4h]

  v45 = v38;
  v41 = a2;
  v42 = a1;
  v3 = *a2 == 0;
  v40 = 0;
  if ( v3 )
    v4 = 0;
  else
    v4 = strlen(a2);
  v5 = *a1;
  v43 = v4;
  v6 = *(_DWORD *)(v5 + 4);
  v7 = *(int *)((char *)a1 + v6 + 36);
  v8 = *(int *)((char *)a1 + v6 + 32);
  if ( v7 >= 0 && (v7 > 0 || v8 != 0 && v8 > v4) )
  {
    v9 = __PAIR64__(v7, v8) - v4;
  }
  else
  {
    v39 = 0;
    v9 = 0;
  }
  v10 = *(int *)((char *)a1 + v6 + 56);
  LODWORD(v39) = a1;
  if ( v10 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
  v46 = 0;
  v11 = *(_DWORD *)(*a1 + 4);
  if ( *(int *)((char *)a1 + v11 + 12) == 0 )
  {
    v12 = *(int **)((char *)a1 + v11 + 60);
    if ( v12 != nullptr && v12 != a1 )
      sub_10005310(v38[0], v38[1]);
  }
  v13 = *(_DWORD *)(*a1 + 4);
  BYTE4(v39) = *(int *)((char *)a1 + v13 + 12) == 0;
  v46 = 1;
  if ( BYTE4(v39) != 0 )
  {
    LOBYTE(v46) = 2;
    if ( (*(int *)((char *)a1 + v13 + 20) & 0x1C0) != 0x40 )
    {
      while ( v9 > 0 )
      {
        v15 = *(_DWORD *)(*a1 + 4);
        v44 = *((_BYTE *)a1 + v15 + 64);
        v16 = *(_DWORD **)((char *)a1 + v15 + 56);
        if ( *(_DWORD *)v16[8] != 0 && (int)*(v17 = (_DWORD *)v16[12]) > 0 )
        {
          --*v17;
          v18 = (_DWORD *)v16[8];
          v19 = (unsigned __int8 *)(*v18)++;
          LOBYTE(v20) = v44;
          *v19 = v44;
          v20 = (unsigned __int8)v20;
        }
        else
        {
          v20 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v16 + 12))(v16, v44);
        }
        if ( v20 == -1 )
          goto LABEL_25;
        --v9;
      }
    }
    v21 = *(int *)((char *)a1 + *(_DWORD *)(*a1 + 4) + 56);
    v22 = (*(int (__thiscall **)(int, const char *, unsigned int, _DWORD))(*(_DWORD *)v21 + 36))(v21, v41, v43, 0);
    if ( v22 != v43 || v23 != 0 )
    {
LABEL_25:
      v14 = 4;
    }
    else
    {
      while ( v9 > 0 )
      {
        v24 = *(_DWORD *)(*a1 + 4);
        v25 = *(int *)((char *)a1 + v24 + 56);
        v26 = *((_BYTE *)a1 + v24 + 64);
        v44 = v26;
        if ( **(_DWORD **)(v25 + 32) != 0 && (v27 = **(_DWORD **)(v25 + 48)) > 0 )
        {
          **(_DWORD **)(v25 + 48) = v27 - 1;
          v28 = *(_DWORD **)(v25 + 32);
          v29 = (unsigned __int8 *)(*v28)++;
          LOBYTE(v30) = v44;
          *v29 = v44;
          v30 = (unsigned __int8)v30;
        }
        else
        {
          v30 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v25 + 12))(v25, v26);
        }
        if ( v30 == -1 )
        {
          v14 = 4;
          goto LABEL_38;
        }
        --v9;
      }
      v14 = 0;
    }
LABEL_38:
    v31 = *(_DWORD *)(*a1 + 4);
    *(int *)((char *)a1 + v31 + 32) = 0;
    *(int *)((char *)a1 + v31 + 36) = 0;
    v46 = 1;
  }
  else
  {
    v14 = 4;
  }
  v32 = (int)a1 + *(_DWORD *)(*a1 + 4);
  if ( v14 != 0 )
  {
    v33 = v14 | *(_BYTE *)(v32 + 12) | 4;
    if ( *(_DWORD *)(v32 + 56) != 0 )
      v33 = v14 | *(_BYTE *)(v32 + 12);
    sub_100024D0((int *)((char *)a1 + *(_DWORD *)(*a1 + 4)), v33, 0);
  }
  v46 = 4;
  v34 = j____uncaught_exception(v14);
  v35 = v39;
  if ( v34 == 0 )
    sub_100055B0(v38[0], v38[1]);
  LOBYTE(v46) = 5;
  v36 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v35 + 4) + v35 + 56);
  if ( v36 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 8))(v36);
  return a1;
}

// Address: 0x10004F40
int __cdecl sub_10004F40(int a1)
{
  int v1; // eax
  struct std::_Facet_base *v2; // edi
  void (__thiscall ***v3)(_DWORD, int); // eax
  char v4; // al
  _BYTE v6[4]; // [esp+Ch] [ebp-14h] BYREF
  int v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v1 = sub_100025A0((_DWORD *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4)), (int)v6);
  v8 = 0;
  v2 = sub_10004860(v1);
  v8 = 1;
  if ( v7 != 0 )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    if ( v3 != nullptr )
      (**v3)(v3, 1);
  }
  v8 = -1;
  v4 = (*(int (__thiscall **)(struct std::_Facet_base *, int))(*(_DWORD *)v2 + 32))(v2, 10);
  sub_100053D0(v4);
  sub_10005310();
  return a1;
}

// Address: 0x10004FF0
struct std::_Facet_base *__cdecl sub_10004FF0(int a1)
{
  unsigned int v1; // edi
  int v2; // ebx
  int v3; // ecx
  struct std::_Facet_base *v4; // esi
  int v5; // eax
  _DWORD pExceptionObject[3]; // [esp+10h] [ebp-24h] BYREF
  _BYTE v8[4]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v9[4]; // [esp+20h] [ebp-14h] BYREF
  struct std::_Facet_base *v10[4]; // [esp+24h] [ebp-10h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v8, 0);
  v10[3] = nullptr;
  v1 = dword_10041454;
  v2 = dword_10041450;
  v10[0] = (struct std::_Facet_base *)dword_10041450;
  if ( dword_10041454 == 0 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v9, 0);
    if ( dword_10041454 == 0 )
      dword_10041454 = ++dword_100403F0;
    std::_Lockit::~_Lockit((std::_Lockit *)v9);
    v1 = dword_10041454;
  }
  v3 = *(_DWORD *)(a1 + 4);
  if ( v1 >= *(_DWORD *)(v3 + 12) )
  {
    v4 = nullptr;
  }
  else
  {
    v4 = *(struct std::_Facet_base **)(*(_DWORD *)(v3 + 8) + 4 * v1);
    if ( v4 != nullptr )
      goto LABEL_18;
  }
  if ( *(_BYTE *)(v3 + 20) == 0 )
    goto LABEL_12;
  v5 = sub_1000B998();
  if ( v1 < *(_DWORD *)(v5 + 12) )
  {
    v4 = *(struct std::_Facet_base **)(*(_DWORD *)(v5 + 8) + 4 * v1);
LABEL_12:
    if ( v4 != nullptr )
      goto LABEL_18;
  }
  if ( v2 != 0 )
  {
    v4 = (struct std::_Facet_base *)v2;
  }
  else
  {
    if ( sub_10005160(v10, a1) == -1 )
    {
      pExceptionObject[0] = &std::bad_cast::`vftable';
      pExceptionObject[2] = 0;
      pExceptionObject[1] = "bad cast";
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast_std__);
    }
    v4 = v10[0];
    dword_10041450 = (int)v10[0];
    (*(void (__thiscall **)(struct std::_Facet_base *))(*(_DWORD *)v10[0] + 4))(v10[0]);
    std::_Facet_Register(v4);
  }
LABEL_18:
  std::_Lockit::~_Lockit((std::_Lockit *)v8);
  return v4;
}

// Address: 0x10005120
char *__thiscall sub_10005120(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::bad_cast::`vftable';
  return this;
}

// Address: 0x10005160
int __cdecl sub_10005160(_DWORD *Block, int a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  char *v4; // ecx
  _BYTE v6[52]; // [esp+Ch] [ebp-44h] BYREF
  int v7; // [esp+40h] [ebp-10h]
  int v8; // [esp+4Ch] [ebp-4h]

  v7 = 0;
  if ( Block != nullptr && *Block == 0 )
  {
    v2 = operator new(8u);
    v8 = 0;
    v3 = *(_DWORD *)(a2 + 4);
    if ( v3 != 0 )
    {
      v4 = *(char **)(v3 + 24);
      if ( v4 == nullptr )
        v4 = (char *)(v3 + 28);
    }
    else
    {
      v4 = (char *)Locale;
    }
    sub_10001BA0((struct std::_Locinfo *)v6, v4);
    v2[1] = 0;
    *v2 = &std::codecvt<char,char,_Mbstatet>::`vftable';
    *Block = v2;
    sub_10001C80((std::_Lockit *)v6);
  }
  return 2;
}

// Address: 0x10005210
int __thiscall sub_10005210(void *this)
{
  int result; // eax
  int v3; // ecx

  if ( (unsigned __int8)j____uncaught_exception(this) == 0 )
    sub_100055B0();
  result = *(_DWORD *)(**(_DWORD **)this + 4);
  v3 = *(_DWORD *)(result + *(_DWORD *)this + 56);
  if ( v3 != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  return result;
}

// Address: 0x10005280
_BYTE *__thiscall sub_10005280(_BYTE *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx

  *(_DWORD *)this = a2;
  v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2 + 56);
  if ( v3 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  if ( *(_DWORD *)(v4 + a2 + 12) == 0 )
  {
    v5 = *(_DWORD *)(v4 + a2 + 60);
    if ( v5 != 0 && v5 != a2 )
      sub_10005310();
  }
  *(this + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2 + 12) == 0;
  return this;
}

// Address: 0x10005310
char *__thiscall sub_10005310(char *this)
{
  int v2; // ecx
  int v3; // ecx
  char *v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-14h] BYREF
  char v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+1Ch] [ebp-4h]

  if ( *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 56) != 0 )
  {
    sub_10005280(&v8, (int)this);
    v10 = 0;
    if ( v9 != 0 )
    {
      v3 = *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 56);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3) == -1 )
      {
        v4 = this + *(_DWORD *)(*(_DWORD *)this + 4);
        v5 = *((_DWORD *)v4 + 3) | 4;
        if ( *((_DWORD *)v4 + 14) != 0 )
          v5 = *((_DWORD *)v4 + 3);
        sub_100024D0(v4, v5 | 4, 0);
      }
    }
    v10 = 1;
    if ( (unsigned __int8)j____uncaught_exception(v2) == 0 )
      sub_100055B0();
    LOBYTE(v10) = 2;
    v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8 + 4) + v8 + 56);
    if ( v6 != 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  }
  return this;
}

// Address: 0x100053D0
char *__thiscall sub_100053D0(char *this, unsigned __int8 a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  char *v6; // ecx
  int v7; // ecx
  int v8; // ecx
  _DWORD *v9; // ecx
  _DWORD *v10; // edx
  _DWORD *v11; // ecx
  unsigned __int8 *v12; // edx
  int v13; // eax
  char *v14; // edi
  char v15; // al
  int v16; // ecx
  _DWORD v18[6]; // [esp+0h] [ebp-34h] BYREF
  bool v19; // [esp+18h] [ebp-1Ch]
  int v20; // [esp+1Ch] [ebp-18h]
  char *v21; // [esp+20h] [ebp-14h]
  _DWORD *v22; // [esp+24h] [ebp-10h]
  int v23; // [esp+30h] [ebp-4h]

  v22 = v18;
  v21 = this;
  v3 = *(_DWORD *)this;
  v20 = 0;
  v18[5] = this;
  v4 = *(_DWORD *)(this + *(_DWORD *)(v3 + 4) + 56);
  if ( v4 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v23 = 0;
  v5 = *(_DWORD *)(*(_DWORD *)this + 4);
  if ( *(_DWORD *)(this + v5 + 12) == 0 )
  {
    v6 = *(char **)(this + v5 + 60);
    if ( v6 != nullptr && v6 != this )
      sub_10005310(v6);
  }
  v7 = *(_DWORD *)(*(_DWORD *)this + 4);
  v19 = *(_DWORD *)(this + v7 + 12) == 0;
  v23 = 1;
  if ( v19 )
  {
    LOBYTE(v23) = 2;
    v9 = *(_DWORD **)(this + v7 + 56);
    if ( *(_DWORD *)v9[8] != 0 && (int)*(v10 = (_DWORD *)v9[12]) > 0 )
    {
      --*v10;
      v11 = (_DWORD *)v9[8];
      v12 = (unsigned __int8 *)(*v11)++;
      v8 = 4;
      *v12 = a2;
      if ( a2 != -1 )
        v8 = 0;
    }
    else
    {
      v13 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 12))(v9, a2);
      v8 = 4;
      if ( v13 != -1 )
        v8 = 0;
    }
    v23 = 1;
  }
  else
  {
    v8 = 4;
  }
  v14 = this + *(_DWORD *)(*(_DWORD *)this + 4);
  if ( v8 != 0 )
  {
    v15 = v8 | v14[12] | 4;
    if ( *((_DWORD *)v14 + 14) != 0 )
      v15 = v8 | v14[12];
    sub_100024D0(this + *(_DWORD *)(*(_DWORD *)this + 4), v15, 0);
  }
  v23 = 4;
  if ( (unsigned __int8)j____uncaught_exception(v8) == 0 )
    sub_100055B0();
  LOBYTE(v23) = 5;
  v16 = *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 56);
  if ( v16 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
  return this;
}

// Address: 0x10005560
int __thiscall sub_10005560(int *this)
{
  int v1; // ecx
  int result; // eax
  int v3; // ecx

  v1 = *this;
  result = *(_DWORD *)(*(_DWORD *)v1 + 4);
  v3 = *(_DWORD *)(result + v1 + 56);
  if ( v3 != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  return result;
}

// Address: 0x100055B0
int __thiscall sub_100055B0(_BYTE *this)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  v5[4] = v5;
  v5[7] = 0;
  result = *(_DWORD *)(*(_DWORD *)this + 4);
  if ( *(_DWORD *)(this + result + 12) == 0 && (*(this + result + 20) & 2) != 0 )
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + result + 56) + 52))(*(_DWORD *)(this + result + 56));
    if ( result == -1 )
    {
      v3 = this + *(_DWORD *)(*(_DWORD *)this + 4);
      v4 = v3[3] | 4;
      if ( v3[14] != 0 )
        v4 = v3[3];
      return sub_100024D0(v3, v4 | 4, 0);
    }
  }
  return result;
}

// Address: 0x1000563B
char *__thiscall sub_1000563B(_DWORD *this, char a2)
{
  return sub_10003AE0((struct std::ios_base *)((char *)this - *(this - 1)), a2);
}

// Address: 0x10005643
char *__thiscall sub_10005643(_DWORD *this, char a2)
{
  return sub_10003A00((struct std::ios_base *)((char *)this - *(this - 1)), a2);
}

// Address: 0x10005660
int __thiscall sub_10005660(volatile signed __int32 *this)
{
  int result; // eax

  result = _InterlockedExchangeAdd(this + 1, 0xFFFFFFFF);
  if ( result == 0 )
  {
    result = (**(int (__thiscall ***)(volatile signed __int32 *))this)(this);
    if ( _InterlockedDecrement(this + 2) == 0 )
      return (*(int (__thiscall **)(volatile signed __int32 *))(*this + 4))(this);
  }
  return result;
}

// Address: 0x10005690
int __stdcall sub_10005690(int a1)
{
  return 0;
}

// Address: 0x100056A0
_DWORD *__thiscall sub_100056A0(_DWORD *Block, char a2)
{
  *Block = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x100056D0
volatile signed __int32 **__thiscall sub_100056D0(volatile signed __int32 **this)
{
  int v2; // eax
  volatile signed __int32 *v3; // edi
  _DWORD *v4; // edi
  int v5; // ecx
  volatile signed __int32 *v6; // edi
  int v8; // [esp+0h] [ebp-28h]

  *this = (volatile signed __int32 *)&Innoguard_engine::InnoGuardInstance::`vftable';
  *(this + 4) = nullptr;
  *(this + 5) = nullptr;
  *(this + 6) = nullptr;
  *(this + 7) = nullptr;
  operator new(0x868u);
  v2 = sub_10007540();
  sub_10005A30(v2);
  v3 = *(this + 7);
  *(this + 7) = nullptr;
  *(this + 6) = nullptr;
  if ( v3 != nullptr && _InterlockedExchangeAdd(v3 + 1, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  v4 = operator new(0x20u);
  v5 = (int)*(this + 6);
  *v4 = &Innoguard_engine::Control::`vftable';
  v4[1] = v5;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[2] = 0;
  v4[3] = -1;
  sub_10001230();
  if ( (unsigned __int8)sub_10005DD0(v4) != 0 )
    sub_100012B0((int)L"Control::Control succes", v8);
  sub_10005AF0(v4);
  v6 = *(this + 5);
  *(this + 5) = nullptr;
  *(this + 4) = nullptr;
  if ( v6 != nullptr && _InterlockedExchangeAdd(v6 + 1, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v6)(v6);
    if ( _InterlockedDecrement(v6 + 2) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
  }
  *(this + 2) = *(this + 4);
  *(this + 3) = *(this + 6);
  *(this + 1) = (volatile signed __int32 *)1;
  return this;
}

// Address: 0x10005880
volatile signed __int32 **__thiscall sub_10005880(volatile signed __int32 **Block, char a2)
{
  volatile signed __int32 *v3; // edi
  volatile signed __int32 *v4; // edi

  *Block = (volatile signed __int32 *)&Innoguard_engine::InnoGuardInstance::`vftable';
  v3 = *(Block + 7);
  if ( v3 != nullptr && _InterlockedExchangeAdd(v3 + 1, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  v4 = *(Block + 5);
  if ( v4 != nullptr && _InterlockedExchangeAdd(v4 + 1, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
    if ( _InterlockedDecrement(v4 + 2) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
  }
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10005930
volatile signed __int32 **InnoGuardCreate()
{
  volatile signed __int32 **v0; // eax
  volatile signed __int32 **v1; // esi
  int v3; // [esp+0h] [ebp-4h]

  v0 = (volatile signed __int32 **)operator new(0x20u);
  v1 = sub_100056D0(v0);
  sub_100012B0((int)L"InnoGuardInstance create.", v3);
  if ( v1 != nullptr )
    return v1 + 1;
  else
    return nullptr;
}

// Address: 0x10005960
int __stdcall InnoGuardDelete(int a1)
{
  int result; // eax
  int v2[8]; // [esp+0h] [ebp-20h] BYREF

  v2[4] = (int)v2;
  result = a1;
  if ( a1 != 0 )
  {
    v2[7] = 0;
    if ( a1 != 4 )
      (**(void (__thiscall ***)(int, int))(a1 - 4))(a1 - 4, 1);
    return sub_100012B0((int)L"InnoGuardInstance destory.", v2[0]);
  }
  return result;
}

// Address: 0x100059D0
int __thiscall sub_100059D0(volatile signed __int32 **this)
{
  volatile signed __int32 *v1; // esi
  int result; // eax

  v1 = *(this + 1);
  if ( v1 != nullptr )
  {
    result = _InterlockedExchangeAdd(v1 + 1, 0xFFFFFFFF);
    if ( result == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedDecrement(v1 + 2) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
    }
  }
  return result;
}

// Address: 0x10005A30
int __thiscall sub_10005A30(volatile signed __int32 **this, int a2)
{
  volatile signed __int32 *v3; // esi
  int result; // eax
  volatile signed __int32 *v5; // edi
  _DWORD _0[10]; // [esp+0h] [ebp-24h] BYREF

  _0[5] = _0;
  _0[8] = 0;
  v3 = (volatile signed __int32 *)operator new(0x10u);
  result = a2;
  *((_DWORD *)v3 + 1) = 1;
  *((_DWORD *)v3 + 2) = 1;
  *v3 = (volatile signed __int32)&std::_Ref_count<Innoguard_engine::Utility>::`vftable';
  *((_DWORD *)v3 + 3) = a2;
  v5 = *(this + 1);
  if ( v5 != nullptr )
  {
    result = _InterlockedExchangeAdd(v5 + 1, 0xFFFFFFFF);
    if ( result == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      result = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
      if ( result == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  *(this + 1) = v3;
  *this = (volatile signed __int32 *)a2;
  return result;
}

// Address: 0x10005AF0
int __thiscall sub_10005AF0(volatile signed __int32 **this, int a2)
{
  volatile signed __int32 *v3; // esi
  int result; // eax
  volatile signed __int32 *v5; // edi
  _DWORD _0[10]; // [esp+0h] [ebp-24h] BYREF

  _0[5] = _0;
  _0[8] = 0;
  v3 = (volatile signed __int32 *)operator new(0x10u);
  result = a2;
  *((_DWORD *)v3 + 1) = 1;
  *((_DWORD *)v3 + 2) = 1;
  *v3 = (volatile signed __int32)&std::_Ref_count<Innoguard_engine::Control>::`vftable';
  *((_DWORD *)v3 + 3) = a2;
  v5 = *(this + 1);
  if ( v5 != nullptr )
  {
    result = _InterlockedExchangeAdd(v5 + 1, 0xFFFFFFFF);
    if ( result == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      result = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
      if ( result == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  *(this + 1) = v3;
  *this = (volatile signed __int32 *)a2;
  return result;
}

// Address: 0x10005BB0
int __thiscall sub_10005BB0(void *this)
{
  int result; // eax

  if ( this != nullptr )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, 1);
  return result;
}

// Address: 0x10005BC0
int __thiscall sub_10005BC0(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(this + 3);
  if ( v1 != 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 88))(v1, 1);
  return result;
}

// Address: 0x10005C00
int __thiscall sub_10005C00(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(this + 3);
  if ( v1 != 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 24))(v1, 1);
  return result;
}

// Address: 0x10005C40
_DWORD *__thiscall sub_10005C40(_DWORD *Block, char a2)
{
  *Block = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10005C70
void __thiscall sub_10005C70(char **this)
{
  char *v2; // edx
  char *v3; // eax
  unsigned int v4; // edx

  *this = (char *)&data_buffer::`vftable';
  v2 = *(this + 1);
  if ( v2 != nullptr )
  {
    if ( (unsigned int)(*(this + 3) - v2) >= 0x1000 )
    {
      if ( ((unsigned __int8)v2 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v3 = *((char **)v2 - 1);
      if ( v3 >= v2 )
        _invalid_parameter_noinfo_noreturn();
      v4 = v2 - v3;
      if ( v4 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v4 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v2 = v3;
    }
    j_j___free_base(v2);
    *(this + 1) = nullptr;
    *(this + 2) = nullptr;
    *(this + 3) = nullptr;
  }
}

// Address: 0x10005CE0
char **__thiscall sub_10005CE0(char **Block, char a2)
{
  sub_10005C70(Block);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10005D10
char *__thiscall sub_10005D10(char *Block, char a2)
{
  int v3; // ecx
  int v5; // [esp+0h] [ebp-18h]

  *(_DWORD *)Block = &Innoguard_engine::Control::`vftable';
  sub_10006E10();
  if ( *((_DWORD *)Block + 7) != 0 )
  {
    sub_1000A230();
    v3 = *((_DWORD *)Block + 7);
    if ( v3 != 0 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, 1);
    *((_DWORD *)Block + 7) = 0;
  }
  if ( *((_DWORD *)Block + 3) != -1 )
  {
    CloseHandle(*((HANDLE *)Block + 3));
    *((_DWORD *)Block + 3) = -1;
  }
  *((_DWORD *)Block + 5) = *((_DWORD *)Block + 4);
  sub_100012B0((int)L"IControl destory", v5);
  sub_10007150(Block + 16);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10005DC0
int __thiscall sub_10005DC0(_DWORD *this)
{
  return *(this + 2);
}

// Address: 0x10005DD0
char __thiscall sub_10005DD0(_DWORD *this)
{
  HANDLE FileW; // eax
  int v4; // ecx

  FileW = CreateFileW(L"\\\\.\\hidpath", 0, 3u, nullptr, 3u, 0, nullptr);
  *(this + 3) = FileW;
  if ( FileW == (HANDLE)-1 )
  {
    sub_100012B0((int)L"Innoguard can not be initialized.(%s)", (int)L"\\\\.\\hidpath");
    return 0;
  }
  else
  {
    *(this + 5) = *(this + 4);
    sub_10006500();
    sub_10005E30(v4);
    return 1;
  }
}

// Address: 0x10005E30
char __stdcall sub_10005E30(int a1)
{
  HANDLE CurrentProcess; // eax
  HANDLE TokenHandle; // [esp+0h] [ebp-1Ch] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [esp+4h] [ebp-18h] BYREF

  NewState.PrivilegeCount = 1;
  NewState.Privileges[0].Luid.LowPart = 0;
  NewState.Privileges[0].Luid.HighPart = 0;
  NewState.Privileges[0].Attributes = 2;
  LookupPrivilegeValueW(nullptr, L"SeTcbPrivilege", &NewState.Privileges[0].Luid);
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

// Address: 0x10005ED0
char __thiscall sub_10005ED0(_DWORD *this, void *Block, void *Src, size_t Size)
{
  _DWORD *v6; // esi
  int v7; // [esp+20h] [ebp-14h]
  _DWORD *Blocka; // [esp+3Ch] [ebp+8h]

  if ( Size != 0 )
  {
    v7 = 544;
    switch ( (unsigned int)Block )
    {
      case 0u:
      case 1u:
      case 2u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
        break;
      case 3u:
        v7 = Size + 16;
        break;
      default:
        return 0;
    }
    Blocka = operator new(0x10u);
    Blocka[1] = 0;
    Blocka[2] = 0;
    Blocka[3] = 0;
    *Blocka = &data_buffer::`vftable';
    sub_10006FA0(v7);
    sub_10007470(Blocka);
    sub_100012B0((int)L"Control::CallControl %d - %d / %d", (int)Block);
    v6 = (_DWORD *)MEMORY[4];
    *MEMORY[4] = Block;
    v6[1] = v7;
    memmove_0(v6 + 4, Src, Size);
    HIBYTE(Blocka) = sub_10006050(v6);
    memmove_0(Src, v6 + 4, Size);
    return HIBYTE(Blocka);
  }
  else
  {
    *(this + 2) = -2147483643;
    return 0;
  }
}

// Address: 0x10006050
bool __thiscall sub_10006050(int this, _DWORD *lpInBuffer)
{
  DWORD v3; // ebx
  DWORD LastError; // eax
  int v6; // eax
  DWORD BytesReturned; // [esp+Ch] [ebp-4h] BYREF

  BytesReturned = 0;
  v3 = lpInBuffer[1];
  (*(void (__thiscall **)(_DWORD, _DWORD *, DWORD))(**(_DWORD **)(this + 4) + 16))(
    *(_DWORD *)(this + 4),
    lpInBuffer,
    v3);
  if ( DeviceIoControl(*(HANDLE *)(this + 12), 0x222C04u, lpInBuffer, v3, lpInBuffer, v3, &BytesReturned, nullptr) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, DWORD))(**(_DWORD **)(this + 4) + 16))(
      *(_DWORD *)(this + 4),
      lpInBuffer,
      v3);
    v6 = lpInBuffer[2];
    *(_DWORD *)(this + 8) = v6;
    return v6 == 0;
  }
  else
  {
    LastError = GetLastError();
    sub_100012B0((int)L"Control::ERR_CONTROL_FAILURE (%08x)", LastError);
    *(_DWORD *)(this + 8) = -2147483645;
    return false;
  }
}

// Address: 0x100060D0
char __thiscall sub_100060D0(_DWORD *this, void *Src)
{
  int v4; // [esp+0h] [ebp-8h]

  sub_100012B0((int)L"Control::GetVersion", v4);
  return sub_10005ED0(this, nullptr, Src, 4u);
}

// Address: 0x10006100
char __thiscall sub_10006100(_DWORD *this, void *Src)
{
  int v4; // [esp+0h] [ebp-8h]

  sub_100012B0((int)L"Control::GetStatus", v4);
  return sub_10005ED0(this, (void *)1, Src, 0x20u);
}

// Address: 0x10006130
char __thiscall sub_10006130(_DWORD *this, char Src)
{
  int v4; // [esp+0h] [ebp-8h]

  sub_100012B0((int)L"Control::EnableGuard", v4);
  return sub_10005ED0(this, (void *)2, &Src, 4u);
}

// Address: 0x10006160
bool __thiscall sub_10006160(void *this, int a2)
{
  _DWORD *v3; // esi
  _DWORD *v5; // [esp-4h] [ebp-28h]
  int v6; // [esp+0h] [ebp-24h]

  sub_100012B0((int)L"Control::EnableGuard", v6);
  v3 = operator new(0x10u);
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *v3 = &data_buffer::`vftable';
  sub_10006FA0(544);
  sub_10007470(v3);
  sub_100012B0((int)L"Control::CallControl %d - %d / %d", 7);
  v5 = (_DWORD *)MEMORY[4];
  *MEMORY[4] = 7;
  v5[1] = 544;
  v5[4] = a2;
  return sub_10006050((int)this, v5);
}

// Address: 0x10006280
bool __thiscall sub_10006280(void *this, int a2)
{
  _DWORD *v3; // esi
  _DWORD *v5; // [esp-4h] [ebp-28h]
  int v6; // [esp+0h] [ebp-24h]

  sub_100012B0((int)L"Control::EnableGuard", v6);
  v3 = operator new(0x10u);
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *v3 = &data_buffer::`vftable';
  sub_10006FA0(544);
  sub_10007470(v3);
  sub_100012B0((int)L"Control::CallControl %d - %d / %d", 8);
  v5 = (_DWORD *)MEMORY[4];
  *MEMORY[4] = 8;
  v5[1] = 544;
  v5[4] = a2;
  return sub_10006050((int)this, v5);
}

// Address: 0x100063A0
bool __thiscall sub_100063A0(_DWORD *this, void *Src, size_t Size)
{
  _DWORD *v5; // esi
  _DWORD *v6; // esi
  int v8; // [esp+0h] [ebp-28h]
  bool Src_3; // [esp+33h] [ebp+Bh]

  sub_100012B0((int)L"Control::GetGuardList", v8);
  if ( Size != 0 )
  {
    v5 = operator new(0x10u);
    v5[1] = 0;
    v5[2] = 0;
    v5[3] = 0;
    *v5 = &data_buffer::`vftable';
    sub_10006FA0(Size + 16);
    sub_10007470(v5);
    sub_100012B0((int)L"Control::CallControl %d - %d / %d", 3);
    v6 = (_DWORD *)MEMORY[4];
    *(_DWORD *)(MEMORY[4] + 4) = Size + 16;
    *v6 = 3;
    memmove_0(v6 + 4, Src, Size);
    Src_3 = sub_10006050((int)this, v6);
    memmove_0(Src, v6 + 4, Size);
    return Src_3;
  }
  else
  {
    *(this + 2) = -2147483643;
    return false;
  }
}

// Address: 0x10006500
char __thiscall sub_10006500(void *this)
{
  int v2; // edi
  _DWORD *v3; // esi
  unsigned int *v4; // ebx
  unsigned int v6; // esi
  _DWORD *v7; // edi
  int v8; // [esp-Ch] [ebp-24Ch]
  _DWORD v10[132]; // [esp+20h] [ebp-220h] BYREF
  int v11; // [esp+23Ch] [ebp-4h]

  memset(v10, 0, sizeof(v10));
  sub_100012B0((int)L"Control::ReadGuardList", v8);
  if ( (*(unsigned __int8 (__thiscall **)(void *, _DWORD *, int))(*(_DWORD *)this + 24))(this, v10, 528) != 0 )
  {
    if ( v10[0] != 0 )
      sub_10007060(&v10[1]);
  }
  else if ( v10[0] != 0 )
  {
    v2 = 524 * (v10[0] - 1) + 528;
    v3 = operator new(0x10u);
    v11 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    LOBYTE(v11) = 1;
    *v3 = &data_buffer::`vftable';
    sub_10006FA0(v2);
    v11 = -1;
    sub_10007470(v3);
    v11 = 2;
    v4 = (unsigned int *)MEMORY[4];
    if ( (*(unsigned __int8 (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 24))(this, MEMORY[4], v2) == 0 )
    {
      v11 = 3;
      return 0;
    }
    v6 = 0;
    if ( *v4 != 0 )
    {
      v7 = v4 + 1;
      do
      {
        sub_10007060(v7);
        ++v6;
        v7 += 131;
      }
      while ( v6 < *v4 );
    }
    v11 = 4;
  }
  return 1;
}

// Address: 0x10006700
char __thiscall sub_10006700(int this, void **a2)
{
  int v4; // [esp+0h] [ebp-4h]

  sub_100012B0((int)L"Control::ReadGuardList 2", v4);
  memmove(*a2, *(const void **)(this + 16), *(_DWORD *)(this + 20) - *(_DWORD *)(this + 16));
  return 1;
}

// Address: 0x10006730
char __thiscall sub_10006730(void *this, wchar_t *Source, int a3)
{
  _DWORD *v5; // esi
  _DWORD *v6; // esi
  int v7; // [esp+0h] [ebp-23Ch]
  bool v8; // [esp+1Bh] [ebp-221h]
  _DWORD Src[132]; // [esp+1Ch] [ebp-220h] BYREF
  int v10; // [esp+238h] [ebp-4h]

  memset(Src, 0, 0x20Cu);
  sub_100012B0((int)L"Control::AddGuardPath", v7);
  if ( Source == nullptr )
    return 0;
  wcscpy_s((wchar_t *)&Src[1], 0x104u, Source);
  Src[0] = a3;
  v5 = operator new(0x10u);
  v10 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  LOBYTE(v10) = 1;
  *v5 = &data_buffer::`vftable';
  sub_10006FA0(544);
  v10 = -1;
  sub_10007470(v5);
  v10 = 2;
  sub_100012B0((int)L"Control::CallControl %d - %d / %d", 4);
  v6 = (_DWORD *)MEMORY[4];
  *MEMORY[4] = 4;
  v6[1] = 544;
  memmove_0(v6 + 4, Src, 0x20Cu);
  v8 = sub_10006050((int)this, v6);
  memmove_0(Src, v6 + 4, 0x20Cu);
  v10 = -1;
  if ( !v8 )
    return 0;
  sub_10007060(Src);
  return 1;
}

// Address: 0x10006900
char __thiscall sub_10006900(wchar_t **this, wchar_t *Source)
{
  _DWORD *v3; // esi
  _DWORD *v4; // esi
  wchar_t *v5; // esi
  int v7; // [esp+0h] [ebp-240h]
  bool v8; // [esp+1Fh] [ebp-221h]
  wchar_t Src[264]; // [esp+20h] [ebp-220h] BYREF
  int v10; // [esp+23Ch] [ebp-4h]

  memset(Src, 0, 0x20Cu);
  sub_100012B0((int)L"Control::DeleteGuardPath", v7);
  if ( Source == nullptr )
    return 0;
  wcscpy_s(&Src[2], 0x104u, Source);
  v3 = operator new(0x10u);
  v10 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  LOBYTE(v10) = 1;
  *v3 = &data_buffer::`vftable';
  sub_10006FA0(544);
  v10 = -1;
  sub_10007470(v3);
  v10 = 2;
  sub_100012B0((int)L"Control::CallControl %d - %d / %d", 5);
  v4 = (_DWORD *)MEMORY[4];
  *MEMORY[4] = 5;
  v4[1] = 544;
  memmove_0(v4 + 4, Src, 0x20Cu);
  v8 = sub_10006050((int)this, v4);
  memmove_0(Src, v4 + 4, 0x20Cu);
  v10 = 3;
  if ( !v8 )
    return 0;
  v5 = *(this + 4);
  if ( v5 == *(this + 5) )
    return 0;
  while ( _wcsicmp(v5 + 2, Source) != 0 )
  {
    v5 += 262;
    if ( v5 == *(this + 5) )
      return 0;
  }
  memmove(v5, v5 + 262, (char *)*(this + 5) - (char *)(v5 + 262));
  *(this + 5) -= 262;
  return 1;
}

// Address: 0x10006B00
bool __thiscall sub_10006B00(void *this, wchar_t *Source, int a3)
{
  _DWORD *v4; // esi
  _DWORD *v5; // esi
  bool v6; // bl
  _DWORD *v7; // eax
  int v9; // [esp+0h] [ebp-240h]
  _DWORD Src[132]; // [esp+20h] [ebp-220h] BYREF
  int v12; // [esp+23Ch] [ebp-4h]

  memset(Src, 0, 0x20Cu);
  sub_100012B0((int)L"Control::SetPathConfig", v9);
  wcscpy_s((wchar_t *)&Src[1], 0x104u, Source);
  Src[0] = a3;
  v4 = operator new(0x10u);
  v12 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  LOBYTE(v12) = 1;
  *v4 = &data_buffer::`vftable';
  sub_10006FA0(544);
  v12 = -1;
  sub_10007470(v4);
  v12 = 2;
  sub_100012B0((int)L"Control::CallControl %d - %d / %d", 6);
  v5 = (_DWORD *)MEMORY[4];
  *MEMORY[4] = 6;
  v5[1] = 544;
  memmove_0(v5 + 4, Src, 0x20Cu);
  v6 = sub_10006050((int)this, v5);
  memmove_0(Src, v5 + 4, 0x20Cu);
  v12 = -1;
  if ( v6 )
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(void *, wchar_t *))(*(_DWORD *)this + 44))(this, Source);
    if ( v7 != nullptr )
      *v7 = a3;
  }
  return v6;
}

// Address: 0x10006CD0
int __thiscall sub_10006CD0(_DWORD *this, wchar_t *String2)
{
  int v4; // esi

  if ( String2 == nullptr )
    return 0;
  v4 = *(this + 4);
  if ( v4 == *(this + 5) )
    return 0;
  while ( _wcsicmp((const wchar_t *)(v4 + 4), String2) != 0 )
  {
    v4 += 524;
    if ( v4 == *(this + 5) )
      return 0;
  }
  return v4;
}

// Address: 0x10006D20
int __thiscall sub_10006D20(_DWORD *this)
{
  return (*(this + 5) - *(this + 4)) / 524;
}

// Address: 0x10006D40
char __thiscall sub_10006D40(int this)
{
  int v3; // [esp-4h] [ebp-20h]
  _DWORD *Block; // [esp+Ch] [ebp-10h]

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 20))(*(_DWORD *)(this + 4));
  if ( *(_DWORD *)(this + 28) == 0 )
  {
    Block = operator new(0x20u);
    *Block = &ServiceMonitor::`vftable';
    Block[2] = 0;
    Block[3] = 0;
    Block[4] = 0;
    *((_WORD *)Block + 2) = 0;
    Block[3] = Block[2];
    sub_100012B0((int)L"ServiceMonitor create", v3);
    Block[7] = CreateMutexW(nullptr, false, nullptr);
    *(_DWORD *)(this + 28) = Block;
  }
  return 1;
}

// Address: 0x10006DF0
char __usercall sub_10006DF0@<al>(int a1@<ecx>, int a2@<esi>)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 == 0 )
    return 0;
  sub_1000A1B0(v2, a2);
  sub_100012B0();
  return 1;
}

// Address: 0x10006E10
char __thiscall sub_10006E10(_DWORD *this)
{
  int v2; // ecx
  int v4; // [esp+0h] [ebp-4h]

  if ( *(this + 7) != 0 )
  {
    sub_1000A230();
    v2 = *(this + 7);
    if ( v2 != 0 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, 1);
    *(this + 7) = 0;
    sub_100012B0((int)L"Service monitor stop.", v4);
  }
  return 1;
}

// Address: 0x10006E50
char __thiscall sub_10006E50(_DWORD *this, wchar_t *a2, int a3)
{
  if ( *(this + 7) != 0 )
    return sub_10009C70(a2, a3);
  else
    return 0;
}

// Address: 0x10006E70
char __thiscall sub_10006E70(_DWORD *this, wchar_t *a2)
{
  if ( *(this + 7) != 0 )
    return sub_10009D20(a2);
  else
    return 0;
}

// Address: 0x10006E90
int __thiscall sub_10006E90(_DWORD *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // [esp-8h] [ebp-8h]

  if ( *(this + 7) != 0 )
  {
    *a2 = 1;
    v3 = *(this + 7);
    a2[1] = *(unsigned __int8 *)(v3 + 4);
    v4 = (*(_DWORD *)(v3 + 12) - *(_DWORD *)(v3 + 8)) / 524;
    a2[2] = v4;
    return sub_100012B0((int)L"Service count : %d", v4);
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    return (int)a2;
  }
}

// Address: 0x10006F00
char __stdcall sub_10006F00(wchar_t *String2, int a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)sub_10009DB0(String2);
  if ( v2 == nullptr )
    return 0;
  *v2 = a2;
  return 1;
}

// Address: 0x10006F30
int __thiscall sub_10006F30(_DWORD *this, wchar_t *a2)
{
  if ( *(this + 7) != 0 )
    return sub_10009DB0(a2);
  else
    return 0;
}

// Address: 0x10006F50
char __thiscall sub_10006F50(_DWORD *this, void **a2)
{
  int v2; // esi

  v2 = *(this + 7);
  if ( v2 == 0 )
    return 0;
  WaitForSingleObject(*(HANDLE *)(v2 + 28), 0xFFFFFFFF);
  memmove(*a2, *(const void **)(v2 + 8), *(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 8));
  ReleaseMutex(*(HANDLE *)(v2 + 28));
  return 1;
}

// Address: 0x10006FA0
int __thiscall sub_10006FA0(int *this, unsigned int a2)
{
  int v3; // edx
  int result; // eax
  unsigned int v5; // ecx

  v3 = *(this + 1);
  result = *this;
  v5 = v3 - *this;
  if ( v5 <= a2 )
  {
    if ( v5 >= a2 )
      return result;
    sub_100070F0(a2 + result - v3);
    memset((void *)*(this + 1), 0, a2 + *this - *(this + 1));
    result = *this;
  }
  result += a2;
  *(this + 1) = result;
  return result;
}

// Address: 0x10006FF0
void __thiscall sub_10006FF0(char **this)
{
  char *v2; // edx
  char *v3; // eax
  unsigned int v4; // edx

  v2 = *this;
  if ( *this != nullptr )
  {
    if ( (unsigned int)(*(this + 2) - v2) >= 0x1000 )
    {
      if ( ((unsigned __int8)v2 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v3 = *((char **)v2 - 1);
      if ( v3 >= v2 )
        _invalid_parameter_noinfo_noreturn();
      v4 = v2 - v3;
      if ( v4 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v4 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v2 = v3;
    }
    j_j___free_base(v2);
    *this = nullptr;
    *(this + 1) = nullptr;
    *(this + 2) = nullptr;
  }
}

// Address: 0x10007060
void __thiscall sub_10007060(unsigned int *this, const void *a2)
{
  const void *v3; // esi
  unsigned int v4; // ecx
  int v5; // esi
  void *v6; // edi

  v3 = a2;
  v4 = *(this + 1);
  if ( (unsigned int)a2 >= v4 || *this > (unsigned int)a2 )
  {
    if ( v4 == *(this + 2) )
      sub_100071E0(v4);
    v6 = (void *)*(this + 1);
    if ( v6 != nullptr )
      goto LABEL_10;
  }
  else
  {
    v5 = (int)((int)a2 - *this) / 524;
    if ( v4 == *(this + 2) )
      sub_100071E0(v4);
    v6 = (void *)*(this + 1);
    if ( v6 != nullptr )
    {
      v3 = (const void *)(*this + 524 * v5);
LABEL_10:
      qmemcpy(v6, v3, 0x20Cu);
    }
  }
  *(this + 1) += 524;
}

// Address: 0x100070E0
// attributes: thunk
int __thiscall sub_100070E0(void *this)
{
  return sub_10007150(this);
}

// Address: 0x100070F0
unsigned int __thiscall sub_100070F0(int *this, unsigned int a2)
{
  int v2; // esi
  unsigned int result; // eax
  int v4; // edx
  unsigned int v5; // ebx
  size_t v6; // esi
  unsigned int v7; // edx

  v2 = *(this + 1);
  result = *(this + 2) - v2;
  if ( result < a2 )
  {
    v4 = *this;
    if ( *this - v2 - 1 < a2 )
      sub_1000B693("vector<T> too long");
    v5 = *(this + 2) - v4;
    v6 = a2 + v2 - v4;
    v7 = 0;
    if ( ~(v5 >> 1) >= v5 )
      v7 = v5 + (v5 >> 1);
    if ( v7 >= v6 )
      v6 = v7;
    return sub_10007270(v6);
  }
  return result;
}

// Address: 0x10007150
void __thiscall sub_10007150(char **this)
{
  char *v2; // ecx
  unsigned int v3; // eax
  char *v4; // eax
  unsigned int v5; // ecx

  v2 = *this;
  if ( v2 != nullptr )
  {
    v3 = (*(this + 2) - v2) / 524;
    if ( v3 > 0x7D1196 )
      _invalid_parameter_noinfo_noreturn();
    if ( 524 * v3 >= 0x1000 )
    {
      if ( ((unsigned __int8)v2 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v4 = *((char **)v2 - 1);
      if ( v4 >= v2 )
        _invalid_parameter_noinfo_noreturn();
      v5 = v2 - v4;
      if ( v5 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v5 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v2 = v4;
    }
    j_j___free_base(v2);
    *this = nullptr;
    *(this + 1) = nullptr;
    *(this + 2) = nullptr;
  }
}

// Address: 0x100071E0
int __thiscall sub_100071E0(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // esi
  int result; // eax
  int v6; // edi
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // esi

  v3 = *(this + 2);
  v4 = *(this + 1);
  result = (v3 - v4) / 524;
  if ( result == 0 )
  {
    v6 = (v4 - *this) / 524;
    if ( v6 == 8196502 )
      sub_1000B693("vector<T> too long");
    v7 = (unsigned __int64)(1049152317LL * (v3 - *this)) >> 32;
    v8 = 0;
    v9 = v6 + 1;
    v10 = (v7 >> 7) + ((unsigned int)v7 >> 31);
    if ( 8196502 - (v10 >> 1) >= v10 )
      v8 = v10 + (v10 >> 1);
    if ( v8 >= v9 )
      v9 = v8;
    return sub_10007340(v9);
  }
  return result;
}

// Address: 0x10007270
int __thiscall sub_10007270(int this, size_t Size)
{
  _DWORD *v4; // esi
  void *v5; // eax
  char *v6; // ecx
  char *v7; // eax
  unsigned int v8; // ecx
  size_t Sizea; // [esp+14h] [ebp+8h]

  if ( Size != 0 )
  {
    if ( Size < 0x1000 )
    {
      v4 = operator new(Size);
    }
    else
    {
      if ( Size + 35 < Size )
        sub_1000B676();
      v5 = operator new(Size + 35);
      v4 = (_DWORD *)(((unsigned int)v5 + 35) & 0xFFFFFFE0);
      *(v4 - 1) = v5;
    }
  }
  else
  {
    v4 = nullptr;
  }
  memmove(v4, *(const void **)this, *(_DWORD *)(this + 4) - *(_DWORD *)this);
  v6 = *(char **)this;
  Sizea = *(_DWORD *)(this + 4) - *(_DWORD *)this;
  if ( *(_DWORD *)this != 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(this + 8) - (_DWORD)v6) >= 0x1000 )
    {
      if ( ((unsigned __int8)v6 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v7 = *((char **)v6 - 1);
      if ( v7 >= v6 )
        _invalid_parameter_noinfo_noreturn();
      v8 = v6 - v7;
      if ( v8 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v8 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v6 = v7;
    }
    j_j___free_base(v6);
  }
  *(_DWORD *)(this + 8) = (char *)v4 + Size;
  *(_DWORD *)(this + 4) = (char *)v4 + Sizea;
  *(_DWORD *)this = v4;
  return (int)v4 + Sizea;
}

// Address: 0x10007340
char *__thiscall sub_10007340(int this, unsigned int a2)
{
  _DWORD *v4; // esi
  unsigned int v5; // eax
  void *v6; // eax
  char *v7; // ebx
  unsigned int v8; // eax
  char *v9; // eax
  unsigned int v10; // ebx
  char *result; // eax
  int v13; // [esp+18h] [ebp+8h]

  if ( a2 != 0 )
  {
    if ( a2 > 0x7D1196 )
      sub_1000B676();
    v5 = 524 * a2;
    if ( 524 * a2 < 0x1000 )
    {
      v4 = operator new(524 * a2);
    }
    else
    {
      if ( v5 + 35 < v5 )
        sub_1000B676();
      v6 = operator new(v5 + 35);
      v4 = (_DWORD *)(((unsigned int)v6 + 35) & 0xFFFFFFE0);
      *(v4 - 1) = v6;
    }
  }
  else
  {
    v4 = nullptr;
  }
  memmove(v4, *(const void **)this, *(_DWORD *)(this + 4) - *(_DWORD *)this);
  v7 = *(char **)this;
  v13 = (*(_DWORD *)(this + 4) - (int)v7) / 524;
  if ( v7 != nullptr )
  {
    v8 = (*(_DWORD *)(this + 8) - (int)v7) / 524;
    if ( v8 > 0x7D1196 )
      _invalid_parameter_noinfo_noreturn();
    if ( 524 * v8 >= 0x1000 )
    {
      if ( ((unsigned __int8)v7 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v9 = *((char **)v7 - 1);
      if ( v9 >= v7 )
        _invalid_parameter_noinfo_noreturn();
      v10 = v7 - v9;
      if ( v10 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v10 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v7 = v9;
    }
    j_j___free_base(v7);
  }
  *(_DWORD *)(this + 8) = &v4[131 * a2];
  result = (char *)&v4[131 * v13];
  *(_DWORD *)(this + 4) = result;
  *(_DWORD *)this = v4;
  return result;
}

// Address: 0x10007470
int __thiscall sub_10007470(volatile signed __int32 **this, int a2)
{
  volatile signed __int32 *v3; // esi
  int result; // eax
  volatile signed __int32 *v5; // edi
  _DWORD _0[10]; // [esp+0h] [ebp-24h] BYREF

  _0[5] = _0;
  _0[8] = 0;
  v3 = (volatile signed __int32 *)operator new(0x10u);
  result = a2;
  *((_DWORD *)v3 + 1) = 1;
  *((_DWORD *)v3 + 2) = 1;
  *v3 = (volatile signed __int32)&std::_Ref_count<data_buffer>::`vftable';
  *((_DWORD *)v3 + 3) = a2;
  v5 = *(this + 1);
  if ( v5 != nullptr )
  {
    result = _InterlockedExchangeAdd(v5 + 1, 0xFFFFFFFF);
    if ( result == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      result = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
      if ( result == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  *(this + 1) = v3;
  *this = (volatile signed __int32 *)a2;
  return result;
}

// Address: 0x10007530
int __thiscall sub_10007530(_DWORD *this)
{
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  v1 = (int (__thiscall ***)(_DWORD, int))*(this + 3);
  if ( v1 != nullptr )
    return (**v1)(v1, 1);
  return result;
}

// Address: 0x10007540
_DWORD *__thiscall sub_10007540(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ecx
  bool v4; // zf
  _DWORD *result; // eax
  int v6; // [esp-8h] [ebp-28h]
  int v7; // [esp-4h] [ebp-24h]

  *this = &Innoguard_engine::Utility::`vftable';
  *(this + 1) = &SheriffCtrl::`vftable';
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 2) = 0;
  *(this + 5) = 1;
  *(this + 6) = 0;
  v2 = this + 8;
  *(this + 8) = &SheriffCtrl::Status::`vftable';
  memset(this + 10, 0, 0x838u);
  if ( (unsigned __int8)sub_1000B3A0(v6, v7) == 0 )
    return this;
  v3 = *(this + 2);
  if ( v3 == 0 )
    return this;
  v4 = (*(unsigned __int8 (__thiscall **)(_DWORD, unsigned int))(**(_DWORD **)(v3 + 8) + 4))(
         *(_DWORD *)(v3 + 8),
         v2 != nullptr ? (unsigned int)(v2 + 2) : 0) == 0;
  result = this;
  if ( !v4 )
    *(this + 536) = 1;
  return result;
}

// Address: 0x10007620
void *__thiscall sub_10007620(void *Block, char a2)
{
  sub_10007650();
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10007650
void __thiscall sub_10007650(_DWORD *this)
{
  HMODULE v2; // eax
  FARPROC SheriffDelete; // eax
  bool v4; // zf
  HMODULE v5; // eax
  FARPROC ProcAddress; // eax
  volatile signed __int32 *v7; // esi

  *this = &Innoguard_engine::Utility::`vftable';
  if ( *(this + 2) != 0 )
  {
    v2 = (HMODULE)*(this + 6);
    if ( v2 != nullptr )
    {
      SheriffDelete = GetProcAddress(v2, "SheriffDelete");
      if ( SheriffDelete != nullptr )
      {
        ((void (__stdcall *)(_DWORD))SheriffDelete)(*(this + 2));
        *(this + 2) = 0;
      }
    }
  }
  *(this + 8) = &SheriffCtrl::Status::`vftable';
  v4 = *(this + 2) == 0;
  *(this + 1) = &SheriffCtrl::`vftable';
  if ( !v4 )
  {
    v5 = (HMODULE)*(this + 6);
    if ( v5 != nullptr )
    {
      ProcAddress = GetProcAddress(v5, "SheriffDelete");
      if ( ProcAddress != nullptr )
      {
        ((void (__stdcall *)(_DWORD))ProcAddress)(*(this + 2));
        *(this + 2) = 0;
      }
    }
  }
  v7 = (volatile signed __int32 *)*(this + 4);
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 1, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v7)(v7);
    if ( _InterlockedDecrement(v7 + 2) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v7 + 4))(v7);
  }
}

// Address: 0x10007720
int __thiscall sub_10007720(void *this)
{
  unsigned int v2; // eax
  struct _FILETIME SystemTimeAsFileTime; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v2 = (*(int (__thiscall **)(void *, struct _FILETIME *, int))(*(_DWORD *)this + 4))(this, &SystemTimeAsFileTime, 8);
  srand(v2);
  v5 = rand();
  return (*(int (__thiscall **)(void *, int *, int))(*(_DWORD *)this + 4))(this, &v5, 4);
}

// Address: 0x10007770
int __stdcall sub_10007770(int a1, unsigned int a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  __int16 v4; // ax
  unsigned __int16 v5; // cx
  char v6; // dl
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // cx
  bool v9; // zf
  char v10; // dl
  char v11; // si
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // di
  char v14; // dl
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // si
  char v17; // dl
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // di
  char v20; // dl
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // si
  char v23; // dl
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // di
  char v26; // dl
  __int16 v27; // dx
  __int16 v28; // ax
  unsigned int v30; // [esp+4h] [ebp-10h]
  unsigned int v31; // [esp+4h] [ebp-10h]
  unsigned __int16 v32; // [esp+Ch] [ebp-8h]
  __int16 v33; // [esp+Ch] [ebp-8h]
  unsigned __int16 v34; // [esp+Ch] [ebp-8h]
  unsigned __int16 v35; // [esp+Ch] [ebp-8h]
  unsigned __int16 v36; // [esp+Ch] [ebp-8h]
  unsigned __int16 v37; // [esp+Ch] [ebp-8h]
  unsigned __int16 v38; // [esp+Ch] [ebp-8h]
  __int16 v39; // [esp+Ch] [ebp-8h]
  unsigned __int16 v40; // [esp+10h] [ebp-4h]
  __int16 v41; // [esp+10h] [ebp-4h]

  v2 = -1;
  v3 = 0;
  LOBYTE(v30) = -1;
  if ( a2 == 0 )
    return -1;
  while ( 1 )
  {
    v40 = 0;
    v32 = (unsigned __int8)(v30 ^ *(_BYTE *)(v3 + a1));
    v4 = v32 & 1;
    v31 = v2 >> 8;
    v5 = v32 >> 1;
    v33 = v32 >> 1;
    v6 = v33;
    if ( v4 != 0 )
    {
      v6 = v33 ^ 0x20;
      v40 = -4680;
      v5 = v33 ^ 0x8320;
    }
    v7 = v40 >> 1;
    v8 = v5 >> 1;
    v9 = (v6 & 1) == 0;
    v41 = v40 >> 1;
    v10 = v41;
    v11 = v8;
    if ( !v9 )
    {
      v11 = v8 ^ 0x20;
      v10 = v41 ^ 0xB8;
      v8 ^= 0x8320u;
      v7 = v41 ^ 0xEDB8;
    }
    v12 = v7 >> 1;
    v13 = (v8 >> 1) | ((v10 & 1) << 15);
    v14 = v12;
    v34 = v13;
    if ( (v11 & 1) != 0 )
    {
      v13 ^= 0x8320u;
      v14 = v12 ^ 0xB8;
      v34 = v13;
      v12 ^= 0xEDB8u;
    }
    v15 = v12 >> 1;
    v16 = (v34 >> 1) | ((v14 & 1) << 15);
    v17 = v15;
    v35 = v16;
    if ( (v13 & 1) != 0 )
    {
      v16 ^= 0x8320u;
      v17 = v15 ^ 0xB8;
      v35 = v16;
      v15 ^= 0xEDB8u;
    }
    v18 = v15 >> 1;
    v19 = (v35 >> 1) | ((v17 & 1) << 15);
    v20 = v18;
    v36 = v19;
    if ( (v16 & 1) != 0 )
    {
      v19 ^= 0x8320u;
      v20 = v18 ^ 0xB8;
      v36 = v19;
      v18 ^= 0xEDB8u;
    }
    v21 = v18 >> 1;
    v22 = (v36 >> 1) | ((v20 & 1) << 15);
    v23 = v21;
    v37 = v22;
    if ( (v19 & 1) != 0 )
    {
      v22 ^= 0x8320u;
      v23 = v21 ^ 0xB8;
      v37 = v22;
      v21 ^= 0xEDB8u;
    }
    v24 = v21 >> 1;
    v25 = (v37 >> 1) | ((v23 & 1) << 15);
    v26 = v24;
    v38 = v25;
    if ( (v22 & 1) != 0 )
    {
      v25 ^= 0x8320u;
      v26 = v24 ^ 0xB8;
      v38 = v25;
      v24 ^= 0xEDB8u;
    }
    v27 = (v38 >> 1) | ((v26 & 1) << 15);
    v28 = v24 >> 1;
    v39 = v27;
    if ( (v25 & 1) != 0 )
    {
      v28 ^= 0xEDB8u;
      v39 = v27 ^ 0x8320;
    }
    ++v3;
    LOWORD(v30) = v39 ^ v31;
    HIWORD(v30) = v28 ^ HIWORD(v31);
    if ( v3 >= a2 )
      break;
    v2 = v30;
  }
  return v30;
}

// Address: 0x100079B0
int __thiscall sub_100079B0(void *this, const char *Src)
{
  size_t v3; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-10h] BYREF

  v3 = strlen(Src);
  if ( v3 > 0xA )
    v3 = 10;
  memset(v5, 32, 10);
  memmove_0(v5, Src, v3);
  return (*(int (__thiscall **)(void *, _DWORD *, int))(*(_DWORD *)this + 4))(this, v5, 10);
}

// Address: 0x10007A20
int __thiscall sub_10007A20(int *this, LPCWCH lpWideCharStr)
{
  int v3; // eax
  CHAR MultiByteStr[16]; // [esp+4h] [ebp-14h] BYREF

  WideCharToMultiByte(0, 0, lpWideCharStr, -1, MultiByteStr, 11, nullptr, nullptr);
  v3 = *this;
  MultiByteStr[10] = 0;
  return (*(int (__thiscall **)(int *, CHAR *))(v3 + 12))(this, MultiByteStr);
}

// Address: 0x10007A70
int __stdcall sub_10007A70(_BYTE *a1, int a2)
{
  unsigned __int64 v3; // rax
  int i; // edi
  unsigned __int64 v5; // rax

  v3 = 0x63033823DFAC6784LL;
  for ( i = a2; i != 0; --i )
  {
    *a1++ ^= v3;
    v5 = v3 >> 1;
    HIDWORD(v3) = ((_DWORD)v5 << 31) | HIDWORD(v5);
    LODWORD(v3) = HIDWORD(v3) ^ v5;
  }
  return v3;
}

// Address: 0x10007AC0
char __thiscall sub_10007AC0(_DWORD *this)
{
  int v2; // ecx

  if ( *(this + 536) == 0 )
    return 1;
  v2 = *(this + 10);
  if ( (v2 & 4) == 0 || (v2 & 0x20) != 0 || (v2 & 0x200) != 0 )
    return 1;
  else
    return HIBYTE(v2) & 1;
}

// Address: 0x10007B10
_WORD *__thiscall sub_10007B10(int this)
{
  unsigned int v2; // eax
  void **v3; // esi
  bool v4; // cf
  void **v5; // esi
  unsigned int v6; // eax
  void **v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // eax
  void **v10; // esi
  unsigned int v11; // eax
  _WORD *result; // eax

  v2 = *(_DWORD *)(this + 148);
  v3 = (void **)(this + 128);
  if ( v2 >= 8 )
    sub_10009050(*v3, v2 + 1);
  v3[5] = (void *)7;
  v4 = (unsigned int)v3[5] < 8;
  v3[4] = nullptr;
  if ( !v4 )
    v3 = (void **)*v3;
  *(_WORD *)v3 = 0;
  v5 = (void **)(this + 104);
  v6 = *(_DWORD *)(this + 124);
  if ( v6 >= 8 )
    sub_10009050(*v5, v6 + 1);
  *(_DWORD *)(this + 124) = 7;
  v4 = *(_DWORD *)(this + 124) < 8u;
  *(_DWORD *)(this + 120) = 0;
  if ( !v4 )
    v5 = (void **)*v5;
  *(_WORD *)v5 = 0;
  v7 = (void **)(this + 80);
  v8 = *(_DWORD *)(this + 100);
  if ( v8 >= 8 )
    sub_10009050(*v7, v8 + 1);
  *(_DWORD *)(this + 100) = 7;
  v4 = *(_DWORD *)(this + 100) < 8u;
  *(_DWORD *)(this + 96) = 0;
  if ( !v4 )
    v7 = (void **)*v7;
  *(_WORD *)v7 = 0;
  sub_10008BC0(this + 68);
  v9 = *(_DWORD *)(this + 60);
  v10 = (void **)(this + 40);
  if ( v9 >= 8 )
    sub_10009050(*v10, v9 + 1);
  *(_DWORD *)(this + 60) = 7;
  v4 = *(_DWORD *)(this + 60) < 8u;
  *(_DWORD *)(this + 56) = 0;
  if ( !v4 )
    v10 = (void **)*v10;
  *(_WORD *)v10 = 0;
  v11 = *(_DWORD *)(this + 36);
  if ( v11 >= 8 )
    sub_10009050(*(void **)(this + 16), v11 + 1);
  *(_DWORD *)(this + 36) = 7;
  v4 = *(_DWORD *)(this + 36) < 8u;
  *(_DWORD *)(this + 32) = 0;
  if ( v4 )
  {
    *(_WORD *)(this + 16) = 0;
    return nullptr;
  }
  else
  {
    result = *(_WORD **)(this + 16);
    *result = 0;
  }
  return result;
}

// Address: 0x10007C30
char *__fastcall sub_10007C30(char *a1, int a2)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax

  memset(a1, 0, 0x98u);
  v4 = a1 + 16;
  *((_DWORD *)a1 + 9) = 7;
  *((_DWORD *)a1 + 8) = 0;
  if ( *((_DWORD *)a1 + 9) >= 8u )
    v4 = (_DWORD *)*v4;
  *(_WORD *)v4 = 0;
  v5 = a1 + 40;
  *((_DWORD *)a1 + 15) = 7;
  *((_DWORD *)a1 + 14) = 0;
  if ( *((_DWORD *)a1 + 15) >= 8u )
    v5 = (_DWORD *)*v5;
  *(_WORD *)v5 = 0;
  v6 = a1 + 80;
  *((_DWORD *)a1 + 17) = 0;
  *((_DWORD *)a1 + 18) = 0;
  *((_DWORD *)a1 + 19) = 0;
  *((_DWORD *)a1 + 25) = 7;
  *((_DWORD *)a1 + 24) = 0;
  if ( *((_DWORD *)a1 + 25) >= 8u )
    v6 = (_DWORD *)*v6;
  *(_WORD *)v6 = 0;
  v7 = a1 + 104;
  *((_DWORD *)a1 + 31) = 7;
  *((_DWORD *)a1 + 30) = 0;
  if ( *((_DWORD *)a1 + 31) >= 8u )
    v7 = (_DWORD *)*v7;
  *(_WORD *)v7 = 0;
  v8 = a1 + 128;
  *((_DWORD *)a1 + 37) = 7;
  *((_DWORD *)a1 + 36) = 0;
  if ( *((_DWORD *)a1 + 37) >= 8u )
    v8 = (_DWORD *)*v8;
  *(_WORD *)v8 = 0;
  *(_DWORD *)a1 = a2;
  sub_10007D30();
  return a1;
}

// Address: 0x10007D30
void __thiscall sub_10007D30(int this)
{
  int v2; // ecx
  int v3; // ecx
  _DWORD *v4; // ebx
  int v5; // ecx
  int v6; // ecx
  LPQUERY_SERVICE_CONFIGW v7; // ebx
  _WORD *dwServiceType; // edx
  int v9; // ecx
  __int16 *v10; // ecx
  __int16 v11; // ax
  _DWORD *v12; // esi
  SC_HANDLE v13; // [esp-14h] [ebp-50h]
  SC_HANDLE v14; // [esp-10h] [ebp-4Ch]
  int v15; // [esp+0h] [ebp-3Ch]
  _BYTE v16[12]; // [esp+10h] [ebp-2Ch] BYREF
  LPQUERY_SERVICE_CONFIGW lpServiceConfig; // [esp+1Ch] [ebp-20h] BYREF
  int v18; // [esp+20h] [ebp-1Ch]
  int v19; // [esp+24h] [ebp-18h]
  DWORD pcbBytesNeeded; // [esp+28h] [ebp-14h] BYREF
  _BYTE v21[9]; // [esp+2Fh] [ebp-Dh] BYREF
  int v22; // [esp+38h] [ebp-4h]

  v14 = *(SC_HANDLE *)this;
  pcbBytesNeeded = 0;
  if ( !QueryServiceConfigW(v14, nullptr, 0, &pcbBytesNeeded) && GetLastError() == 122 && pcbBytesNeeded != 0 )
  {
    v21[0] = 0;
    lpServiceConfig = nullptr;
    v18 = 0;
    v19 = 0;
    sub_10008B60(pcbBytesNeeded, (int)v21);
    v22 = 0;
    sub_100012B0((int)L"Alloc QUERY_SERVICE_CONFIG Buffer size. %d - %d", pcbBytesNeeded);
    if ( QueryServiceConfigW(*(SC_HANDLE *)this, nullptr, pcbBytesNeeded, &pcbBytesNeeded) )
    {
      *(_DWORD *)(this + 4) = MEMORY[0];
      *(_DWORD *)(this + 8) = MEMORY[4];
      *(_DWORD *)(this + 12) = MEMORY[8];
      if ( *MEMORY[0xC] != 0 )
        v2 = wcslen(MEMORY[0xC]);
      else
        v2 = 0;
      sub_10008CF0(MEMORY[0xC], v2);
      if ( *MEMORY[0x10] != 0 )
        v3 = wcslen(MEMORY[0x10]);
      else
        v3 = 0;
      sub_10008CF0(MEMORY[0x10], v3);
      *(_DWORD *)(this + 64) = MEMORY[0x14];
      v4 = (_DWORD *)sub_10008020(v16, MEMORY[0x18]);
      if ( (_DWORD *)(this + 68) != v4 )
      {
        sub_10008BC0(this + 68);
        *(_DWORD *)(this + 68) = *v4;
        *(_DWORD *)(this + 72) = v4[1];
        *(_DWORD *)(this + 76) = v4[2];
        *v4 = 0;
        v4[1] = 0;
        v4[2] = 0;
      }
      sub_10008BC0(v16);
      if ( *MEMORY[0x1C] != 0 )
        v5 = wcslen(MEMORY[0x1C]);
      else
        v5 = 0;
      sub_10008CF0(MEMORY[0x1C], v5);
      if ( *MEMORY[0x20] != 0 )
        v6 = wcslen(MEMORY[0x20]);
      else
        v6 = 0;
      sub_10008CF0(MEMORY[0x20], v6);
    }
    v22 = -1;
    sub_10006FF0((char **)&lpServiceConfig);
  }
  v13 = *(SC_HANDLE *)this;
  pcbBytesNeeded = 0;
  if ( !QueryServiceConfig2W(v13, 1u, nullptr, 0, &pcbBytesNeeded) && GetLastError() == 122 && pcbBytesNeeded != 0 )
  {
    v21[0] = 0;
    lpServiceConfig = nullptr;
    v18 = 0;
    v19 = 0;
    sub_10008B60(pcbBytesNeeded, (int)v21);
    v22 = 1;
    sub_100012B0((int)L"Alloc SERVICE_CONFIG_DESCRIPTION Buffer size. %d - %d", pcbBytesNeeded);
    v7 = lpServiceConfig;
    if ( QueryServiceConfig2W(*(SC_HANDLE *)this, 1u, (LPBYTE)lpServiceConfig, pcbBytesNeeded, &pcbBytesNeeded) )
    {
      dwServiceType = (_WORD *)v7->dwServiceType;
      if ( v7->dwServiceType != 0 )
      {
        if ( *dwServiceType != 0 )
        {
          v10 = (__int16 *)v7->dwServiceType;
          do
            v11 = *v10++;
          while ( v11 != 0 );
          v9 = v10 - (dwServiceType + 1);
        }
        else
        {
          v9 = 0;
        }
        v12 = (_DWORD *)(this + 128);
        sub_10008CF0(dwServiceType, v9);
        if ( v12[5] >= 8u )
          v12 = (_DWORD *)*v12;
        sub_100012B0((int)L"SERVICE_CONFIG_DESCRIPTION : %s", (int)v12);
      }
      else
      {
        sub_100012B0((int)L"SERVICE_CONFIG_DESCRIPTION NULL", v15);
      }
    }
    sub_10006FF0((char **)&lpServiceConfig);
  }
}

// Address: 0x10008020
_DWORD *__fastcall sub_10008020(_DWORD *a1, unsigned __int16 *a2)
{
  int v4; // eax
  void **v5; // ecx
  int v6; // ecx
  int v7; // ebx
  void **v8; // eax
  void *v9; // ecx
  void *Block[5]; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v12; // [esp+30h] [ebp-14h]
  int v13; // [esp+40h] [ebp-4h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v13 = 0;
  do
  {
    v4 = 0;
    v12 = 7;
    Block[4] = nullptr;
    LOWORD(Block[0]) = 0;
    if ( *a2 != 0 )
      v4 = wcslen(a2);
    sub_10008CF0(a2, v4);
    v13 = 1;
    if ( (unsigned int)Block >= a1[1] || (v5 = Block, *a1 > (unsigned int)Block) )
    {
      if ( a1[1] == a1[2] )
        sub_10008C60(v5);
      v9 = (void *)a1[1];
      if ( v9 != nullptr )
      {
        v8 = Block;
LABEL_14:
        sub_10008AE0(v9, v8);
      }
    }
    else
    {
      v6 = (int)Block - *a1;
      v7 = v6 / 24;
      if ( a1[1] == a1[2] )
        sub_10008C60(v6);
      v8 = (void **)(*a1 + 24 * v7);
      v9 = (void *)a1[1];
      if ( v9 != nullptr )
        goto LABEL_14;
    }
    a1[1] += 24;
    LOBYTE(v13) = 0;
    if ( v12 >= 8 )
      sub_10009050(Block[0], v12 + 1);
    a2 += *(_DWORD *)(a1[1] - 8) + 1;
  }
  while ( *a2 != 0 );
  return a1;
}

// Address: 0x10008180
SC_HANDLE *__thiscall sub_10008180(
        SC_HANDLE *this,
        WCHAR *lpServiceName,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        DWORD dwDesiredAccess,
        int a9)
{
  DWORD v10; // esi
  SC_HANDLE *v11; // ecx
  LPCWSTR v12; // eax
  SC_HANDLE v13; // esi
  const WCHAR *p_lpServiceName; // eax
  SC_HANDLE v15; // esi
  SC_HANDLE v16; // eax
  WCHAR **v17; // esi
  const WCHAR *v18; // eax
  SC_HANDLE v19; // eax
  SC_HANDLE v20; // ecx
  SC_HANDLE v21; // esi
  WCHAR **v22; // esi
  const WCHAR *v23; // eax
  SC_HANDLE v24; // eax
  SC_HANDLE v25; // ecx
  SC_HANDLE v26; // esi
  WCHAR **v27; // esi
  const WCHAR *v28; // eax
  SC_HANDLE v29; // eax
  SC_HANDLE v30; // ecx
  SC_HANDLE v31; // esi
  WCHAR **v32; // esi
  int v34; // [esp+0h] [ebp-28h]
  int v35; // [esp+18h] [ebp-10h]

  v10 = dwDesiredAccess;
  v35 = a9;
  *this = nullptr;
  *(this + 1) = nullptr;
  v11 = this + 2;
  v11[5] = (SC_HANDLE)7;
  v11[4] = nullptr;
  if ( (unsigned int)v11[5] < 8 )
    v12 = (LPCWSTR)v11;
  else
    v12 = (LPCWSTR)*v11;
  *v12 = 0;
  if ( v11 != (SC_HANDLE *)&lpServiceName )
    sub_10008DF0(&lpServiceName, 0, -1);
  v13 = OpenSCManagerW(nullptr, nullptr, v10);
  if ( *this != v13 )
  {
    if ( *this != nullptr )
      CloseServiceHandle(*this);
    *this = v13;
  }
  if ( *this != nullptr )
  {
    p_lpServiceName = (const WCHAR *)&lpServiceName;
    if ( a7 >= 8 )
      p_lpServiceName = lpServiceName;
    v15 = OpenServiceW(*this, p_lpServiceName, v35);
    v16 = *(this + 1);
    if ( v16 != v15 )
    {
      if ( v16 != nullptr )
        CloseServiceHandle(*(this + 1));
      *(this + 1) = v15;
    }
    if ( *(this + 1) == nullptr )
    {
      v17 = &lpServiceName;
      if ( a7 >= 8 )
        v17 = (WCHAR **)lpServiceName;
      GetLastError();
      sub_100012B0((int)L"(1) Could not open service. %s (%08x , %08x)", (int)v17);
      v18 = (const WCHAR *)&lpServiceName;
      if ( a7 >= 8 )
        v18 = lpServiceName;
      v19 = OpenServiceW(*this, v18, 0x37u);
      v20 = *(this + 1);
      v21 = v19;
      if ( v20 != v19 )
      {
        if ( v20 != nullptr )
          CloseServiceHandle(*(this + 1));
        *(this + 1) = v21;
      }
      if ( *(this + 1) == nullptr )
      {
        v22 = &lpServiceName;
        if ( a7 >= 8 )
          v22 = (WCHAR **)lpServiceName;
        GetLastError();
        sub_100012B0((int)L"(2) Could not open service. %s (%08x , %08x)", (int)v22);
        v23 = (const WCHAR *)&lpServiceName;
        if ( a7 >= 8 )
          v23 = lpServiceName;
        v24 = OpenServiceW(*this, v23, 0x35u);
        v25 = *(this + 1);
        v26 = v24;
        if ( v25 != v24 )
        {
          if ( v25 != nullptr )
            CloseServiceHandle(*(this + 1));
          *(this + 1) = v26;
        }
        if ( *(this + 1) == nullptr )
        {
          v27 = &lpServiceName;
          if ( a7 >= 8 )
            v27 = (WCHAR **)lpServiceName;
          GetLastError();
          sub_100012B0((int)L"(3) Could not open service. %s (%08x , %08x)", (int)v27);
          v28 = (const WCHAR *)&lpServiceName;
          if ( a7 >= 8 )
            v28 = lpServiceName;
          v29 = OpenServiceW(*this, v28, 0x25u);
          v30 = *(this + 1);
          v31 = v29;
          if ( v30 != v29 )
          {
            if ( v30 != nullptr )
              CloseServiceHandle(*(this + 1));
            *(this + 1) = v31;
          }
          if ( *(this + 1) == nullptr )
          {
            v32 = &lpServiceName;
            if ( a7 >= 8 )
              v32 = (WCHAR **)lpServiceName;
            GetLastError();
            sub_100012B0((int)L"Could not open service. %s( %08x , %08x)", (int)v32);
            if ( *this != nullptr )
            {
              CloseServiceHandle(*this);
              *this = nullptr;
            }
          }
        }
      }
    }
  }
  else
  {
    sub_100012B0((int)L"Could not open the service manager.", v34);
  }
  if ( a7 >= 8 )
    sub_10009050(lpServiceName, a7 + 1);
  return this;
}

// Address: 0x100083D0
char __thiscall sub_100083D0(SC_HANDLE *this, LPBYTE lpBuffer)
{
  SC_HANDLE v2; // eax
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+8h] [ebp-10h] BYREF
  DWORD pcbBytesNeeded; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD v7[2]; // [esp+10h] [ebp-8h] BYREF

  v2 = *(this + 1);
  if ( v2 != nullptr )
  {
    pcbBytesNeeded = 0;
    if ( QueryServiceStatusEx(v2, SC_STATUS_PROCESS_INFO, lpBuffer, 0x24u, &pcbBytesNeeded) )
    {
      v5 = 1;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 2;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 8;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 16;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 256;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 4;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 32;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 64;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 128;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 1024;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 512;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      v5 = 2048;
      sub_10009370(lpBuffer + 36, v7, &v5);
      *(_BYTE *)(v7[0] + 20) = (v5 & *((_DWORD *)lpBuffer + 2)) != 0;
      return 1;
    }
    else
    {
      sub_100012B0((int)L"QueryServiceStatusEx Fail", v4);
      return 0;
    }
  }
  else
  {
    sub_100012B0((int)L"Invalid service Handle", v4);
    return 0;
  }
}

// Address: 0x10008650
char __thiscall sub_10008650(SC_HANDLE *this)
{
  SC_HANDLE *v1; // esi
  LPENUM_SERVICE_STATUSW v2; // edi
  DWORD v3; // eax
  __m128i v4; // xmm1
  SC_HANDLE v5; // esi
  int v6; // ecx
  LPENUM_SERVICE_STATUSW v8; // ecx
  struct _ENUM_SERVICE_STATUSW *dwWaitHint; // eax
  _BYTE Size[5]; // [esp+13h] [ebp-8Dh] BYREF
  DWORD ServicesReturned; // [esp+18h] [ebp-88h] BYREF
  DWORD i; // [esp+1Ch] [ebp-84h]
  LPENUM_SERVICE_STATUSW lpServices[2]; // [esp+20h] [ebp-80h] BYREF
  int v14; // [esp+28h] [ebp-78h]
  SC_HANDLE *v15; // [esp+2Ch] [ebp-74h]
  __int128 v16; // [esp+40h] [ebp-60h]
  _BYTE ServiceStatus[32]; // [esp+60h] [ebp-40h] BYREF
  int v18; // [esp+80h] [ebp-20h]

  *(_DWORD *)&Size[1] = 0;
  ServicesReturned = 0;
  v1 = this;
  v15 = this;
  if ( EnumDependentServicesW(*(this + 1), 1u, nullptr, 0, (LPDWORD)&Size[1], &ServicesReturned) )
    return 1;
  if ( GetLastError() == 234 )
  {
    Size[0] = 0;
    lpServices[0] = nullptr;
    lpServices[1] = nullptr;
    v14 = 0;
    sub_10008B60(*(size_t *)&Size[1], (int)Size);
    v2 = lpServices[0];
    if ( !EnumDependentServicesW(v1[1], 1u, lpServices[0], *(DWORD *)&Size[1], (LPDWORD)&Size[1], &ServicesReturned) )
    {
LABEL_12:
      v8 = lpServices[0];
      if ( lpServices[0] != nullptr )
      {
        if ( v14 - (unsigned int)lpServices[0] >= 0x1000 )
        {
          if ( ((int)lpServices[0] & 0x1F) != 0 )
            _invalid_parameter_noinfo_noreturn();
          dwWaitHint = (struct _ENUM_SERVICE_STATUSW *)lpServices[0][-1].ServiceStatus.dwWaitHint;
          if ( dwWaitHint >= lpServices[0] )
            _invalid_parameter_noinfo_noreturn();
          if ( (unsigned int)((char *)lpServices[0] - (char *)dwWaitHint) < 4 )
            _invalid_parameter_noinfo_noreturn();
          if ( (unsigned int)((char *)lpServices[0] - (char *)dwWaitHint) > 0x23 )
            _invalid_parameter_noinfo_noreturn();
          v8 = (LPENUM_SERVICE_STATUSW)lpServices[0][-1].ServiceStatus.dwWaitHint;
        }
        j_j___free_base(v8);
      }
      return 0;
    }
    v3 = 0;
    for ( i = 0; v3 < ServicesReturned; i = v3 )
    {
      v4 = *(__m128i *)((char *)&v2->lpServiceName + v3);
      v16 = *(_OWORD *)((char *)&v2->ServiceStatus.dwControlsAccepted + v3);
      v5 = OpenServiceW(*v1, (LPCWSTR)_mm_cvtsi128_si32(v4), 0x24u);
      if ( v5 == nullptr )
        goto LABEL_12;
      v18 = 0;
      memset(ServiceStatus, 0, sizeof(ServiceStatus));
      if ( !ControlService(v5, 1u, (LPSERVICE_STATUS)ServiceStatus) || (unsigned __int8)sub_10008840(v6, 3000, 0) == 0 )
      {
        CloseServiceHandle(v5);
        goto LABEL_12;
      }
      CloseServiceHandle(v5);
      v1 = v15;
      v3 = i + 1;
    }
    sub_10006FF0((char **)lpServices);
    return 1;
  }
  return 0;
}

// Address: 0x10008840
char __fastcall sub_10008840(SC_HANDLE a1, int a2, int a3, __int64 a4)
{
  bool v6; // cl
  __int64 perf_frequency; // kr00_8
  __int64 perf_counter; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // kr10_8
  __int64 v14; // rax
  __int64 v15; // kr20_8
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v19; // [esp-10h] [ebp-74h]
  xtime v20; // [esp+10h] [ebp-54h]
  unsigned int v21; // [esp+28h] [ebp-3Ch]
  DWORD pcbBytesNeeded; // [esp+30h] [ebp-34h] BYREF
  __int64 v24; // [esp+34h] [ebp-30h]
  unsigned int v25; // [esp+3Ch] [ebp-28h]
  unsigned int v26; // [esp+40h] [ebp-24h]
  bool v27; // [esp+47h] [ebp-1Dh]
  xtime v28; // [esp+48h] [ebp-1Ch] BYREF

  v6 = *(_DWORD *)(a2 + 4) == 1;
  v27 = v6;
  if ( v6 || a1 == nullptr )
    return v6;
  perf_frequency = _Query_perf_frequency();
  v25 = HIDWORD(perf_frequency);
  perf_counter = _Query_perf_counter();
  v10 = perf_counter % perf_frequency;
  v9 = perf_counter / perf_frequency;
  v19 = v10;
  HIDWORD(v10) = HIDWORD(v9);
  HIDWORD(v24) = v9;
  v11 = 1000000000 * v19 / perf_frequency;
  v26 = (1000000000 * __PAIR64__(HIDWORD(v10), HIDWORD(v24)) + v11) >> 32;
  v21 = 1000000000 * HIDWORD(v24) + v11;
  v12 = *(_DWORD *)(a2 + 24) / 0xAu;
  if ( v12 >= 0x3E8 )
  {
    if ( v12 > 0x2710 )
      v12 = 10000;
  }
  else
  {
    v12 = 1000;
  }
  v25 = v12;
  if ( *(_DWORD *)(a2 + 4) != 1 )
  {
    while ( 1 )
    {
      if ( v12 != 0 )
      {
        v13 = 100 * _Xtime_get_ticks();
        v14 = 1000000LL * v25;
        HIDWORD(v24) = v13 + v14;
        v20.sec = (v13 + v14) / 1000000000;
        v20.nsec = (v13 + v14) % 1000000000;
      }
      else
      {
        v20.nsec = 0;
        v20.sec = 0;
      }
      v28 = v20;
      _Thrd_sleep(&v28);
      pcbBytesNeeded = 0;
      if ( !QueryServiceStatusEx(a1, SC_STATUS_PROCESS_INFO, (LPBYTE)a2, 0x24u, &pcbBytesNeeded) )
        break;
      if ( *(_DWORD *)(a2 + 4) == 1 )
        return 1;
      v15 = _Query_perf_frequency();
      v24 = v15;
      v16 = _Query_perf_counter();
      v17 = (unsigned __int64)(1000000000 * (v16 % v15) / v24) >> 32;
      LODWORD(v24) = 1000000000 * (v16 % v15) / v24;
      if ( 1000000 * a4 < (__int64)(1000000000 * (v16 / v15) + __PAIR64__(v17, v24) - __PAIR64__(v26, v21))
        || *(_DWORD *)(a2 + 4) == 1 )
      {
        return v27;
      }
      v12 = v25;
    }
  }
  return v27;
}

// Address: 0x10008A90
// attributes: thunk
int __thiscall sub_10008A90(void *this)
{
  return sub_10008BC0(this);
}

// Address: 0x10008AE0
_DWORD *__thiscall sub_10008AE0(_DWORD *this, _DWORD *Src)
{
  _WORD *v2; // esi
  bool v4; // cf

  v2 = Src;
  *(this + 5) = 7;
  *(this + 4) = 0;
  *(_WORD *)this = 0;
  if ( Src[5] >= 8u )
  {
    *this = *Src;
    *Src = 0;
  }
  else if ( Src[4] != -1 )
  {
    memmove(this, Src, 2 * (Src[4] + 1));
  }
  *(this + 4) = Src[4];
  *(this + 5) = Src[5];
  Src[5] = 7;
  v4 = Src[5] < 8u;
  Src[4] = 0;
  if ( !v4 )
    v2 = (_WORD *)*Src;
  *v2 = 0;
  return this;
}

// Address: 0x10008B60
void __thiscall sub_10008B60(int *this, size_t Size, unsigned __int8 *a3)
{
  void *v4; // eax
  int v5; // esi

  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  if ( Size != 0 )
  {
    v4 = sub_10001A00(Size);
    *this = (int)v4;
    *(this + 1) = (int)v4;
    *(this + 2) = Size + *this;
    v5 = *this;
    memset((void *)*this, *a3, Size);
    *(this + 1) = v5 + Size;
  }
}

// Address: 0x10008BC0
void __thiscall sub_10008BC0(char **this)
{
  char *v2; // ecx
  char *v3; // ebx
  unsigned int v4; // eax
  char *v5; // eax
  unsigned int v6; // ebx

  v2 = *this;
  if ( v2 != nullptr )
  {
    ((void (__cdecl *)(char *))sub_10009400)(v2);
    v3 = *this;
    v4 = (*(this + 2) - *this) / 24;
    if ( v4 > 0xAAAAAAA )
      _invalid_parameter_noinfo_noreturn();
    if ( 24 * v4 >= 0x1000 )
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

// Address: 0x10008C60
int __thiscall sub_10008C60(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // esi
  int result; // eax
  int v6; // edi
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // esi

  v3 = *(this + 2);
  v4 = *(this + 1);
  result = (v3 - v4) / 24;
  if ( result == 0 )
  {
    v6 = (v4 - *this) / 24;
    if ( v6 == 178956970 )
      sub_1000B693("vector<T> too long");
    v7 = (unsigned __int64)(715827883LL * (v3 - *this)) >> 32;
    v8 = 0;
    v9 = v6 + 1;
    v10 = (v7 >> 2) + ((unsigned int)v7 >> 31);
    if ( 178956970 - (v10 >> 1) >= v10 )
      v8 = v10 + (v10 >> 1);
    if ( v8 >= v9 )
      v9 = v8;
    return sub_10008F10(v9);
  }
  return result;
}

// Address: 0x10008CF0
_DWORD *__thiscall sub_10008CF0(_DWORD *this, _BYTE *Src, unsigned int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  _WORD *v7; // eax
  void *v9; // ecx
  bool v10; // cf

  if ( Src != nullptr )
  {
    v4 = *(this + 5);
    v5 = v4 < 8 ? (unsigned int)this : *this;
    if ( (unsigned int)Src >= v5 )
    {
      v6 = v4 < 8 ? this : (_DWORD *)*this;
      if ( (char *)v6 + 2 * *(this + 4) > Src )
      {
        if ( v4 < 8 )
          v7 = this;
        else
          v7 = (_WORD *)*this;
        return (_DWORD *)sub_10008DF0(this, (Src - (_BYTE *)v7) >> 1, a3);
      }
    }
  }
  if ( a3 > 0x7FFFFFFE )
    sub_1000B693("string too long");
  if ( *(this + 5) < a3 )
  {
    sub_10009160(a3, *(this + 4));
    if ( a3 == 0 )
      return this;
LABEL_17:
    if ( *(this + 5) < 8u )
      v9 = this;
    else
      v9 = (void *)*this;
    memmove_0(v9, Src, 2 * a3);
    v10 = *(this + 5) < 8u;
    *(this + 4) = a3;
    if ( !v10 )
    {
      *(_WORD *)(*this + 2 * a3) = 0;
      return this;
    }
    *((_WORD *)this + a3) = 0;
    return this;
  }
  if ( a3 != 0 )
    goto LABEL_17;
  v10 = *(this + 5) < 8u;
  *(this + 4) = 0;
  if ( v10 )
    *(_WORD *)this = 0;
  else
    *(_WORD *)*this = 0;
  return this;
}

// Address: 0x10008DF0
_DWORD *__thiscall sub_10008DF0(_DWORD *this, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v4; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // eax
  _DWORD *v11; // edx
  void *v13; // edx
  bool v14; // cf

  v4 = a2;
  v6 = a3;
  v7 = a2[4];
  if ( v7 < a3 )
    sub_1000B6B3("invalid string position");
  v8 = a4;
  v9 = v7 - a3;
  if ( a4 > v9 )
    v8 = v9;
  if ( this != a2 )
  {
    if ( v8 > 0x7FFFFFFE )
      sub_1000B693("string too long");
    if ( *(this + 5) >= v8 )
    {
      if ( v8 == 0 )
      {
        v14 = *(this + 5) < 8u;
        *(this + 4) = 0;
        if ( v14 )
          *(_WORD *)this = 0;
        else
          *(_WORD *)*this = 0;
        return this;
      }
    }
    else
    {
      sub_10009160(v8, *(this + 4));
      v6 = a3;
      if ( v8 == 0 )
        return this;
    }
    if ( a2[5] >= 8u )
      v4 = (_DWORD *)*a2;
    if ( *(this + 5) < 8u )
      v13 = this;
    else
      v13 = (void *)*this;
    memmove_0(v13, (char *)v4 + 2 * v6, 2 * v8);
    v14 = *(this + 5) < 8u;
    *(this + 4) = v8;
    if ( !v14 )
    {
      *(_WORD *)(*this + 2 * v8) = 0;
      return this;
    }
    *((_WORD *)this + v8) = 0;
    return this;
  }
  v10 = a3 + v8;
  if ( *(this + 4) < a3 + v8 )
    sub_1000B6B3("invalid string position");
  *(this + 4) = v10;
  if ( *(this + 5) < 8u )
    v11 = this;
  else
    v11 = (_DWORD *)*this;
  *((_WORD *)v11 + v10) = 0;
  sub_100090B0(0, a3);
  return this;
}

// Address: 0x10008F10
char *__thiscall sub_10008F10(void **this, unsigned int a2)
{
  void **v3; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // eax
  void *v6; // eax
  int v7; // ecx
  char *v8; // ebx
  unsigned int v9; // eax
  char *v10; // eax
  unsigned int v11; // ebx
  char *result; // eax
  int v14; // [esp+1Ch] [ebp+8h]

  v3 = this;
  if ( a2 != 0 )
  {
    if ( a2 > 0xAAAAAAA )
      sub_1000B676();
    v5 = 24 * a2;
    if ( 24 * a2 < 0x1000 )
    {
      v4 = operator new(24 * a2);
    }
    else
    {
      if ( v5 + 35 < v5 )
        sub_1000B676();
      v6 = operator new(v5 + 35);
      v4 = (_DWORD *)(((unsigned int)v6 + 35) & 0xFFFFFFE0);
      *(v4 - 1) = v6;
    }
  }
  else
  {
    v4 = nullptr;
  }
  sub_100096A0(*v3, v4);
  v7 = ((_BYTE *)v3[1] - (_BYTE *)*v3) / 24;
  v14 = v7;
  if ( *v3 != nullptr )
  {
    sub_10009400(v7, v7);
    v8 = (char *)*v3;
    v9 = ((_BYTE *)*(this + 2) - v8) / 24;
    if ( v9 > 0xAAAAAAA )
      _invalid_parameter_noinfo_noreturn();
    if ( 24 * v9 >= 0x1000 )
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
    v3 = this;
    v7 = v14;
  }
  v3[2] = &v4[6 * a2];
  result = (char *)&v4[6 * v7];
  v3[1] = result;
  *v3 = v4;
  return result;
}

// Address: 0x10009050
void __stdcall sub_10009050(_DWORD *Block, unsigned int a2)
{
  void *v2; // ecx
  unsigned int v3; // eax

  v2 = Block;
  if ( a2 > 0x7FFFFFFF )
    _invalid_parameter_noinfo_noreturn();
  if ( 2 * a2 >= 0x1000 )
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

// Address: 0x100090B0
_DWORD *__thiscall sub_100090B0(_DWORD *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  _DWORD *v6; // eax
  unsigned int v7; // edi
  bool v8; // cf

  v4 = *(this + 4);
  if ( v4 < a2 )
    sub_1000B6B3("invalid string position");
  if ( v4 - a2 > a3 )
  {
    if ( a3 != 0 )
    {
      if ( *(this + 5) < 8u )
        v6 = this;
      else
        v6 = (_DWORD *)*this;
      v7 = v4 - a3;
      if ( v7 != a2 )
        memmove((char *)v6 + 2 * a2, (char *)v6 + 2 * a2 + 2 * a3, 2 * (v7 - a2));
      v8 = *(this + 5) < 8u;
      *(this + 4) = v7;
      if ( !v8 )
      {
        *(_WORD *)(*this + 2 * v7) = 0;
        return this;
      }
      *((_WORD *)this + v7) = 0;
    }
    return this;
  }
  else
  {
    *(this + 4) = a2;
    if ( *(this + 5) < 8u )
    {
      *((_WORD *)this + a2) = 0;
      return this;
    }
    else
    {
      *(_WORD *)(*this + 2 * a2) = 0;
      return this;
    }
  }
}

// Address: 0x10009160
unsigned int __thiscall sub_10009160(unsigned int *this, unsigned int a2, unsigned int a3)
{
  unsigned int *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // ebx
  size_t v9; // eax
  void *v10; // eax
  unsigned int *v11; // ecx
  unsigned int v12; // eax
  bool v13; // cf
  unsigned int *v14; // eax
  unsigned int result; // eax
  _DWORD v16[10]; // [esp+0h] [ebp-28h] BYREF

  v16[6] = v16;
  v3 = this;
  v16[5] = this;
  v4 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFE )
  {
    v5 = *(this + 5);
    v6 = v5 >> 1;
    if ( v5 >> 1 > v4 / 3 )
    {
      v4 = v6 + v5;
      if ( v5 > 2147483646 - v6 )
        v4 = 2147483646;
    }
  }
  else
  {
    v4 = a2;
  }
  v7 = v4 + 1;
  v16[9] = 0;
  if ( v4 == -1 )
  {
    v8 = nullptr;
  }
  else
  {
    if ( v7 > 0x7FFFFFFF )
      sub_1000B676();
    v9 = 2 * v7;
    if ( v9 < 0x1000 )
    {
      v8 = operator new(v9);
    }
    else
    {
      if ( v9 + 35 < v9 )
        sub_1000B676();
      v10 = operator new(v9 + 35);
      v8 = (_DWORD *)(((unsigned int)v10 + 35) & 0xFFFFFFE0);
      *(v8 - 1) = v10;
    }
  }
  if ( a3 != 0 )
  {
    if ( v3[5] < 8 )
      v11 = v3;
    else
      v11 = (unsigned int *)*v3;
    memmove_0(v8, v11, 2 * a3);
  }
  v12 = v3[5];
  if ( v12 >= 8 )
    sub_10009050((_DWORD *)*v3, v12 + 1);
  v3[5] = 7;
  v13 = v3[5] < 8;
  v3[4] = 0;
  if ( v13 )
    v14 = v3;
  else
    v14 = (unsigned int *)*v3;
  *(_WORD *)v14 = 0;
  result = a3;
  *v3 = (unsigned int)v8;
  v3[5] = v4;
  v13 = v3[5] < 8;
  v3[4] = a3;
  if ( !v13 )
    v3 = v8;
  *((_WORD *)v3 + a3) = 0;
  return result;
}

// Address: 0x10009310
void *__stdcall sub_10009310(unsigned int a1)
{
  size_t v2; // eax
  void *v3; // eax

  if ( a1 == 0 )
    return nullptr;
  if ( a1 > 0x7FFFFFFF )
    sub_1000B676();
  v2 = 2 * a1;
  if ( 2 * a1 < 0x1000 )
    return operator new(v2);
  if ( v2 + 35 < v2 )
    sub_1000B676();
  v3 = operator new(v2 + 35);
  *(_DWORD *)((((unsigned int)v3 + 35) & 0xFFFFFFE0) - 4) = v3;
  return (void *)(((unsigned int)v3 + 35) & 0xFFFFFFE0);
}

// Address: 0x10009370
int __thiscall sub_10009370(int *this, int a2, _DWORD *a3)
{
  int v4; // esi
  int v5; // edx
  void *v7; // eax

  v4 = *this;
  v5 = *(_DWORD *)(*this + 4);
  while ( *(_BYTE *)(v5 + 13) == 0 )
  {
    if ( *(_DWORD *)(v5 + 16) >= *a3 )
    {
      v4 = v5;
      v5 = *(_DWORD *)v5;
    }
    else
    {
      v5 = *(_DWORD *)(v5 + 8);
    }
  }
  if ( v4 == *this || *a3 < *(_DWORD *)(v4 + 16) )
  {
    v7 = (void *)sub_10009450(a3, &a3, a3);
    sub_10009480((int)this, (int)&a3, v4, (int)v7 + 16, v7);
    *(_DWORD *)a2 = a3;
    *(_BYTE *)(a2 + 4) = 1;
    return a2;
  }
  else
  {
    *(_DWORD *)a2 = v4;
    *(_BYTE *)(a2 + 4) = 0;
    return a2;
  }
}

// Address: 0x10009400
void __fastcall sub_10009400(_WORD *a1, _WORD *a2)
{
  _WORD *i; // esi
  unsigned int v4; // eax
  bool v5; // cf
  _WORD *v6; // eax

  for ( i = a1; i != a2; *v6 = 0 )
  {
    v4 = *((_DWORD *)i + 5);
    if ( v4 >= 8 )
      sub_10009050(*(_DWORD **)i, v4 + 1);
    *((_DWORD *)i + 5) = 7;
    v5 = *((_DWORD *)i + 5) < 8u;
    *((_DWORD *)i + 4) = 0;
    if ( v5 )
      v6 = i;
    else
      v6 = *(_WORD **)i;
    i += 12;
  }
}

// Address: 0x10009450
int __stdcall sub_10009450(int a1, _DWORD **a2, int a3)
{
  int result; // eax

  result = sub_10009730();
  *(_WORD *)(result + 12) = 0;
  if ( result != -16 )
  {
    *(_DWORD *)(result + 16) = **a2;
    *(_BYTE *)(result + 20) = 0;
  }
  return result;
}

// Address: 0x10009480
_DWORD *__thiscall sub_10009480(int *this, _DWORD *a2, int a3, _DWORD *a4, void *Block)
{
  bool v6; // zf
  int v8; // edi
  _DWORD *v9; // ecx
  int v10; // edx
  bool v11; // cc
  int v12; // ecx
  int v13; // [esp-8h] [ebp-34h]
  int v14; // [esp-8h] [ebp-34h]
  int v15; // [esp+0h] [ebp-2Ch] BYREF
  int v16; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v17; // [esp+14h] [ebp-18h]
  int v18[2]; // [esp+18h] [ebp-14h] BYREF
  int v19; // [esp+28h] [ebp-4h]

  v18[1] = (int)&v15;
  v19 = 0;
  v6 = *(this + 1) == 0;
  v18[0] = 0;
  if ( v6 )
  {
    sub_100097D0((int)a2, 1, *this, (int)this, Block);
    return a2;
  }
  v8 = *this;
  v9 = a4;
  if ( a3 == *(_DWORD *)*this )
  {
    if ( *a4 < *(_DWORD *)(a3 + 16) )
    {
      sub_100097D0((int)a2, 1, a3, (int)a4, Block);
      return a2;
    }
    goto LABEL_23;
  }
  if ( a3 == v8 )
  {
    v10 = *(_DWORD *)(v8 + 8);
    if ( *(_DWORD *)(v10 + 16) < *a4 )
    {
      sub_100097D0((int)a2, 0, v10, (int)a4, Block);
      return a2;
    }
    goto LABEL_23;
  }
  v17 = (_DWORD *)*a4;
  v11 = *(_DWORD *)(a3 + 16) < (int)v17;
  if ( *(_DWORD *)(a3 + 16) > (int)v17 )
  {
    v18[0] = a3;
    sub_10009770(v18);
    v9 = v17;
    if ( *(_DWORD *)(v18[0] + 16) < (int)v17 )
    {
      v13 = *(_DWORD *)(v18[0] + 8);
      if ( *(_BYTE *)(v13 + 13) != 0 )
        sub_100097D0((int)a2, 0, v18[0], v13, Block);
      else
        sub_100097D0((int)a2, 1, a3, v13, Block);
      return a2;
    }
    v11 = *(_DWORD *)(a3 + 16) < (int)v17;
  }
  if ( !v11 || (v18[0] = a3, *(_DWORD *)sub_100096E0(v18) != v8) && (v9 = v17, (int)v17 >= *(_DWORD *)(v18[0] + 16)) )
  {
LABEL_23:
    v19 = -1;
    v12 = *(_DWORD *)sub_100099E0((int)this, (int)&v16, (int)v9, (int)a4, Block);
    *a2 = v12;
    return a2;
  }
  v14 = *(_DWORD *)(a3 + 8);
  if ( *(_BYTE *)(v14 + 13) != 0 )
    sub_100097D0((int)a2, 0, a3, v14, Block);
  else
    sub_100097D0((int)a2, 1, v18[0], v14, Block);
  return a2;
}

// Address: 0x100096A0
_DWORD *__fastcall sub_100096A0(_DWORD *Src, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  _DWORD *v5; // esi

  v4 = Src;
  if ( Src == a2 )
    return a3;
  v5 = a3;
  do
  {
    if ( v5 != nullptr )
      sub_10008AE0(v5, v4);
    v4 += 6;
    v5 += 6;
  }
  while ( v4 != a2 );
  return v5;
}

// Address: 0x100096E0
int *__thiscall sub_100096E0(int *this)
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

// Address: 0x10009730
_DWORD *__thiscall sub_10009730(_DWORD *this)
{
  _DWORD *result; // eax

  result = operator new(0x18u);
  if ( result != nullptr )
    *result = *this;
  if ( result != (_DWORD *)-4 )
    result[1] = *this;
  if ( result != (_DWORD *)-8 )
    result[2] = *this;
  return result;
}

// Address: 0x10009770
void *__thiscall sub_10009770(void *this)
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

// Address: 0x100097D0
_DWORD *__thiscall sub_100097D0(unsigned int *this, _DWORD *a2, char a3, _DWORD *a4, int a5, void *Block)
{
  unsigned int v7; // eax
  _DWORD *v8; // eax
  int *v9; // ecx
  int *v10; // esi
  int *v11; // edx
  _DWORD *v12; // edx
  void **v13; // ecx
  _DWORD *v14; // edx
  _DWORD *v15; // esi
  int v16; // ecx
  _DWORD *v17; // ecx
  int v18; // edx
  int v19; // ecx
  _DWORD *v20; // ecx
  _DWORD *v21; // ecx

  v7 = *(this + 1);
  if ( v7 >= 0xAAAAAA9 )
  {
    j_j___free_base(Block);
    sub_1000B693("map/set<T> too long");
  }
  *(this + 1) = v7 + 1;
  *((_DWORD *)Block + 1) = a4;
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
  if ( *(_BYTE *)(*((_DWORD *)Block + 1) + 12) == 0 )
  {
    do
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
              v13 = (void **)v9[1];
              if ( v8 == *v13 )
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
    while ( *(_BYTE *)(v8[1] + 12) == 0 );
  }
  *(_BYTE *)(*(_DWORD *)(*this + 4) + 12) = 1;
  *a2 = Block;
  return a2;
}

// Address: 0x100099E0
int __thiscall sub_100099E0(unsigned int *this, int a2, int a3, int *a4, void *Block)
{
  bool v5; // dl
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  int *v8; // eax
  int v9; // ecx
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  int v13; // [esp+0h] [ebp-2Ch] BYREF
  unsigned int *v14; // [esp+10h] [ebp-1Ch]
  int v15; // [esp+14h] [ebp-18h]
  _DWORD v16[5]; // [esp+18h] [ebp-14h] BYREF

  v16[1] = &v13;
  v14 = this;
  v16[4] = 0;
  v5 = true;
  v6 = (_DWORD *)*this;
  v7 = v6;
  LOBYTE(v15) = 1;
  v8 = (int *)v6[1];
  if ( *((_BYTE *)v8 + 13) == 0 )
  {
    v9 = *a4;
    do
    {
      v7 = v8;
      v5 = v9 < v8[4];
      LOBYTE(v15) = v5;
      if ( v5 )
        v8 = (int *)*v8;
      else
        v8 = (int *)v8[2];
    }
    while ( *((_BYTE *)v8 + 13) == 0 );
    this = v14;
  }
  v10 = v7;
  v16[0] = v7;
  if ( v5 )
  {
    if ( v7 == (_DWORD *)*v6 )
    {
      v11 = sub_100097D0(this, &a4, 1, v7, (int)this, Block);
LABEL_11:
      *(_DWORD *)a2 = *v11;
      *(_BYTE *)(a2 + 4) = 1;
      return a2;
    }
    sub_10009770(v16);
    v10 = (_DWORD *)v16[0];
  }
  if ( v10[4] < *a4 )
  {
    v11 = sub_100097D0(v14, &a4, v15, v7, (int)a4, Block);
    goto LABEL_11;
  }
  j_j___free_base(Block);
  *(_DWORD *)a2 = v10;
  *(_BYTE *)(a2 + 4) = 0;
  return a2;
}

// Address: 0x10009AF0
char *__thiscall sub_10009AF0(int *this, char *a2)
{
  sub_10007C30(a2, *(this + 1));
  return a2;
}

// Address: 0x10009B10
void __stdcall sub_10009B10(ULONG_PTR a1, int a2)
{
  ULONG_PTR Arguments[4]; // [esp+10h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  Arguments[0] = 4096;
  Arguments[1] = (ULONG_PTR)"ServiceMonitor";
  Arguments[2] = a1;
  Arguments[3] = 0;
  ms_exc.registration.TryLevel = 0;
  RaiseException(0x406D1388u, 0, 4u, Arguments);
}

// Address: 0x10009BA0
DWORD __stdcall StartAddress(_BYTE *lpThreadParameter)
{
  void (**v1)(void); // eax

  v1 = *(void (***)(void))lpThreadParameter;
  lpThreadParameter[4] = 1;
  (*v1)();
  return 0;
}

// Address: 0x10009BC0
void *__thiscall sub_10009BC0(void *Block, char a2)
{
  void *v3; // edi

  *(_DWORD *)Block = &ServiceMonitor::`vftable';
  sub_1000A230();
  *((_DWORD *)Block + 3) = *((_DWORD *)Block + 2);
  CloseHandle(*((HANDLE *)Block + 7));
  *((_DWORD *)Block + 7) = 0;
  v3 = *((void **)Block + 2);
  if ( v3 != nullptr )
  {
    sub_1000A8F0(v3, (*((_DWORD *)Block + 4) - (int)v3) / 524);
    *((_DWORD *)Block + 2) = 0;
    *((_DWORD *)Block + 3) = 0;
    *((_DWORD *)Block + 4) = 0;
  }
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x10009C70
char __thiscall sub_10009C70(int this, wchar_t *Source, int a3)
{
  _DWORD v5[131]; // [esp+8h] [ebp-210h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( Source == nullptr || sub_10009DB0(Source) != 0 )
    return 0;
  wcscpy_s((wchar_t *)&v5[1], 0x104u, Source);
  v5[0] = a3;
  WaitForSingleObject(*(HANDLE *)(this + 28), 0xFFFFFFFF);
  sub_10007060((unsigned int *)(this + 8), v5);
  ReleaseMutex(*(HANDLE *)(this + 28));
  return 1;
}

// Address: 0x10009D20
char __thiscall sub_10009D20(int this, wchar_t *String2)
{
  wchar_t *v4; // esi

  if ( String2 == nullptr )
    return 0;
  WaitForSingleObject(*(HANDLE *)(this + 28), 0xFFFFFFFF);
  v4 = *(wchar_t **)(this + 8);
  if ( v4 == *(wchar_t **)(this + 12) )
  {
LABEL_6:
    ReleaseMutex(*(HANDLE *)(this + 28));
    return 0;
  }
  else
  {
    while ( _wcsicmp(v4 + 2, String2) != 0 )
    {
      v4 += 262;
      if ( v4 == *(wchar_t **)(this + 12) )
        goto LABEL_6;
    }
    memmove(v4, v4 + 262, *(_DWORD *)(this + 12) - (_DWORD)(v4 + 262));
    *(_DWORD *)(this + 12) -= 524;
    ReleaseMutex(*(HANDLE *)(this + 28));
    return 1;
  }
}

// Address: 0x10009DB0
int __thiscall sub_10009DB0(int this, wchar_t *String2)
{
  int v4; // esi

  if ( String2 == nullptr )
    return 0;
  WaitForSingleObject(*(HANDLE *)(this + 28), 0xFFFFFFFF);
  v4 = *(_DWORD *)(this + 8);
  if ( v4 == *(_DWORD *)(this + 12) )
  {
LABEL_6:
    ReleaseMutex(*(HANDLE *)(this + 28));
    return 0;
  }
  else
  {
    while ( _wcsicmp((const wchar_t *)(v4 + 4), String2) != 0 )
    {
      v4 += 524;
      if ( v4 == *(_DWORD *)(this + 12) )
        goto LABEL_6;
    }
    ReleaseMutex(*(HANDLE *)(this + 28));
    return v4;
  }
}

// Address: 0x10009E20
BOOL __stdcall sub_10009E20(DWORD dwProcessId)
{
  HANDLE v1; // eax
  void *v2; // edi
  BOOL v3; // ebx

  sub_100012B0((int)L"RunTerminateProcess : %d\n", dwProcessId);
  v1 = OpenProcess(0x100401u, false, dwProcessId);
  v2 = v1;
  if ( v1 != nullptr )
  {
    v3 = TerminateProcess(v1, 0);
    if ( v3 )
    {
      sub_100012B0((int)L"RunTerminateProcess Success %d", dwProcessId);
      CloseHandle(v2);
      return v3;
    }
    else
    {
      GetLastError();
      sub_100012B0((int)L"RunTerminateProcess Error %d, 0x%08x", dwProcessId);
      CloseHandle(v2);
      return false;
    }
  }
  else
  {
    GetLastError();
    sub_100012B0((int)L"RunTerminateProcess OpenProcess Error %d, 0x%08x", dwProcessId);
    return false;
  }
}

// Address: 0x10009ED0
bool __stdcall sub_10009ED0(unsigned __int16 *Src)
{
  unsigned int v1; // ecx
  WCHAR *v2; // eax
  LPWSTR *v3; // esi
  bool v4; // bl
  struct _STARTUPINFOW StartupInfo; // [esp+10h] [ebp-98h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+54h] [ebp-54h] BYREF
  DWORD ExitCode; // [esp+64h] [ebp-44h] BYREF
  LPWSTR lpCommandLine[5]; // [esp+68h] [ebp-40h] BYREF
  unsigned int v10; // [esp+7Ch] [ebp-2Ch]
  void *Block[4]; // [esp+80h] [ebp-28h] BYREF
  int v12; // [esp+90h] [ebp-18h]
  unsigned int v13; // [esp+94h] [ebp-14h]
  int v14; // [esp+A4h] [ebp-4h]

  StartupInfo.cb = 68;
  memset(&StartupInfo.lpReserved, 0, 0x40u);
  v13 = 7;
  v12 = 0;
  LOWORD(Block[0]) = 0;
  if ( *Src != 0 )
    v1 = wcslen(Src);
  else
    v1 = 0;
  sub_10008CF0(Block, Src, v1);
  v14 = 0;
  sub_1000AF10(lpCommandLine, (int)Block);
  LOBYTE(v14) = 2;
  if ( v13 >= 8 )
    sub_10009050((_DWORD *)Block[0], v13 + 1);
  v13 = 7;
  v12 = 0;
  LOWORD(Block[0]) = 0;
  v2 = (WCHAR *)lpCommandLine;
  if ( v10 >= 8 )
    v2 = lpCommandLine[0];
  if ( CreateProcessW(nullptr, v2, nullptr, nullptr, false, 0, nullptr, nullptr, &StartupInfo, &ProcessInformation) )
  {
    ExitCode = -1;
    while ( GetExitCodeProcess(ProcessInformation.hProcess, &ExitCode) )
    {
      if ( ExitCode != 259 )
        break;
      ExitCode = -1;
      Sleep(1u);
    }
    CloseHandle(ProcessInformation.hThread);
    CloseHandle(ProcessInformation.hProcess);
    v4 = ExitCode == 0;
  }
  else
  {
    v3 = lpCommandLine;
    if ( v10 >= 8 )
      v3 = (LPWSTR *)lpCommandLine[0];
    GetLastError();
    sub_100012B0((int)L"CreateProcess failed : %s, %08x\n\r", (int)v3);
    v4 = false;
  }
  if ( v10 >= 8 )
    sub_10009050((_DWORD *)lpCommandLine[0], v10 + 1);
  return v4;
}

// Address: 0x1000A080
char __stdcall sub_1000A080(int a1)
{
  HANDLE CurrentProcess; // eax
  DWORD LastError; // eax
  DWORD v4; // eax
  DWORD v5; // eax
  HANDLE TokenHandle; // [esp+0h] [ebp-20h] BYREF
  struct _LUID Luid; // [esp+4h] [ebp-1Ch] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [esp+Ch] [ebp-14h] BYREF

  TokenHandle = nullptr;
  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 0x20u, &TokenHandle) )
  {
    if ( !LookupPrivilegeValueW(nullptr, L"SeDebugPrivilege", &Luid) )
    {
      LastError = GetLastError();
      sub_100012B0((int)L"LookupPrivilegeValue failed : %08x\n\r", LastError);
      return 0;
    }
    NewState.Privileges[0].Luid = Luid;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = 2;
    if ( !AdjustTokenPrivileges(TokenHandle, false, &NewState, 0x10u, nullptr, nullptr) )
    {
      v4 = GetLastError();
      sub_100012B0((int)L"AdjustTokenPrivileges failed : %08x\n\r", v4);
      return 0;
    }
    if ( GetLastError() == 1300 )
      return 0;
  }
  else
  {
    v5 = GetLastError();
    sub_100012B0((int)L"OpenProcessToken failed : %08x\n\r", v5);
  }
  if ( TokenHandle != nullptr )
    CloseHandle(TokenHandle);
  return 1;
}

// Address: 0x1000A1B0
void __usercall sub_1000A1B0(int a1@<ecx>, int a2@<esi>)
{
  void *v3; // esi
  HANDLE v4; // eax
  int v5; // ecx
  ULONG_PTR v6; // [esp-Ch] [ebp-14h]
  DWORD ThreadId; // [esp+4h] [ebp-4h] BYREF

  if ( *(_BYTE *)(a1 + 4) == 0 )
  {
    v3 = operator new(0xCu);
    ThreadId = (DWORD)v3;
    *((_DWORD *)v3 + 1) = a1;
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 2) = 0;
    *(_DWORD *)(a1 + 24) = v3;
    v4 = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)StartAddress, *((LPVOID *)v3 + 1), 0, &ThreadId);
    v6 = ThreadId;
    *(_DWORD *)v3 = v4;
    sub_10009B10(v6, v5);
    *((_DWORD *)v3 + 2) = CreateEventW(nullptr, true, false, "ServiceMonitor");
    sub_100012B0((int)L"Thread Start", a2);
  }
}

// Address: 0x1000A230
void __usercall sub_1000A230(int a1@<ecx>, int a2@<esi>)
{
  int v3; // esi
  int v4; // esi

  if ( *(_BYTE *)(a1 + 4) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 24);
    *(_BYTE *)(a1 + 5) = 1;
    *(_BYTE *)(*(_DWORD *)(v3 + 4) + 4) = 0;
    if ( WaitForSingleObject(*(HANDLE *)v3, 0x64u) == 258 && *(_DWORD *)v3 != 0 )
      TerminateThread(*(HANDLE *)v3, 0);
    sub_100012B0((int)L"Thread TerminateThread", a2);
    v4 = *(_DWORD *)(a1 + 24);
    if ( v4 != 0 )
    {
      if ( *(_DWORD *)(v4 + 8) != 0 )
      {
        ResetEvent(*(HANDLE *)(v4 + 8));
        CloseHandle(*(HANDLE *)(v4 + 8));
      }
      if ( *(_DWORD *)v4 != 0 )
      {
        CloseHandle(*(HANDLE *)v4);
        *(_DWORD *)v4 = 0;
      }
      *(_DWORD *)(v4 + 4) = 0;
      sub_1000CA99((void *)v4);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}

// Address: 0x1000A2D0
int __thiscall sub_1000A2D0(HANDLE *this)
{
  HANDLE *v1; // esi
  HANDLE *v2; // eax
  DWORD *v3; // esi
  char *v4; // edi
  unsigned int v5; // ecx
  char *v6; // ecx
  _BYTE *v7; // edi
  __int16 v8; // ax
  int v9; // ecx
  int v10; // edi
  BOOL v11; // eax
  int v12; // ecx
  DWORD (__stdcall *v13)(); // edi
  DWORD v14; // eax
  int *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
  DWORD v19; // eax
  WCHAR *v21[4]; // [esp-20h] [ebp-154h] BYREF
  int v22; // [esp-10h] [ebp-144h]
  unsigned int v23; // [esp-Ch] [ebp-140h]
  DWORD v24; // [esp-8h] [ebp-13Ch]
  DWORD LastError; // [esp-4h] [ebp-138h]
  int v26; // [esp+0h] [ebp-134h]
  int v27; // [esp+4h] [ebp-130h]
  int v28; // [esp+Ch] [ebp-128h] BYREF
  DWORD **v29; // [esp+14h] [ebp-120h]
  void *Src; // [esp+18h] [ebp-11Ch]
  SC_HANDLE hService[2]; // [esp+1Ch] [ebp-118h] BYREF
  DWORD v32; // [esp+24h] [ebp-110h]
  _BYTE ServiceStatus[32]; // [esp+B4h] [ebp-80h] BYREF
  int v34; // [esp+D4h] [ebp-60h]
  BYTE Buffer[4]; // [esp+D8h] [ebp-5Ch] BYREF
  int v36; // [esp+DCh] [ebp-58h]
  DWORD dwProcessId; // [esp+F4h] [ebp-40h]
  void *Block; // [esp+FCh] [ebp-38h]
  SC_HANDLE v39; // [esp+104h] [ebp-30h] BYREF
  SC_HANDLE hSCObject; // [esp+108h] [ebp-2Ch]
  void *v41; // [esp+10Ch] [ebp-28h]
  int v42; // [esp+11Ch] [ebp-18h]
  unsigned int v43; // [esp+120h] [ebp-14h]
  int v44; // [esp+130h] [ebp-4h]

  v1 = this;
  v29 = (DWORD **)this;
  sub_1000A080((int)this);
  if ( *((_BYTE *)v1 + 4) != 0 )
  {
    while ( 1 )
    {
      WaitForSingleObject(v1[7], 0xFFFFFFFF);
      v2 = (HANDLE *)v29;
      v3 = v29[2];
      if ( v3 != v29[3] )
        break;
LABEL_54:
      ReleaseMutex(v2[7]);
      v1 = (HANDLE *)v29;
      if ( *((_BYTE *)v29 + 5) == 0 )
      {
        Sleep(0xBB8u);
        if ( *((_BYTE *)v1 + 4) != 0 )
          continue;
      }
      return sub_100012B0((int)L"Thread Run Exit", v26);
    }
    v4 = (char *)(v3 + 1);
    Src = v3 + 1;
    while ( 1 )
    {
      if ( *((_BYTE *)v2 + 5) != 0 )
        goto LABEL_54;
      LastError = 983551;
      v24 = 1;
      v23 = 7;
      v22 = 0;
      v5 = 0;
      LOWORD(v21[0]) = 0;
      if ( *(_WORD *)v4 != 0 )
      {
        v6 = v4;
        v7 = v4 + 2;
        do
        {
          v8 = *(_WORD *)v6;
          v6 += 2;
        }
        while ( v8 != 0 );
        v9 = v6 - v7;
        v4 = (char *)Src;
        v5 = v9 >> 1;
      }
      sub_10008CF0(v21, v4, v5);
      sub_10008180(&v39, v21[0], (int)v21[1], (int)v21[2], (int)v21[3], v22, v23, v24, LastError);
      v44 = 0;
      sub_1000A760(v26, v27);
      LOBYTE(v44) = 1;
      if ( sub_100083D0(&v39, Buffer) == 0 )
      {
        LastError = GetLastError();
        sub_100012B0((int)L"Can not read service Status.(%s, %08x)", (int)v4);
        goto LABEL_47;
      }
      sub_10009AF0((int *)&v39, (char *)hService);
      LOBYTE(v44) = 2;
      v10 = v32;
      LastError = v32;
      v24 = *v3;
      sub_100012B0((int)L"Check Service : %s (%d , %d)", (int)Src);
      if ( *v3 != 0 )
      {
        if ( v10 == 4 )
        {
          v13 = GetLastError;
        }
        else
        {
          v13 = GetLastError;
          if ( ChangeServiceConfigW(
                 hService[0],
                 0xFFFFFFFF,
                 4u,
                 0xFFFFFFFF,
                 nullptr,
                 nullptr,
                 nullptr,
                 nullptr,
                 nullptr,
                 nullptr,
                 nullptr) )
          {
            v32 = 4;
          }
          else
          {
            v14 = GetLastError();
            sub_100012B0((int)L"Can not change the service start value.(%08x)", v14);
          }
        }
        if ( v36 != 4 )
        {
          LastError = (DWORD)L"The service is not running.";
          goto LABEL_43;
        }
        v15 = (int *)Block;
        v16 = *((_DWORD **)Block + 1);
        if ( *((_BYTE *)v16 + 13) != 0 )
          goto LABEL_31;
        do
        {
          if ( (int)v16[4] >= 1 )
          {
            v15 = v16;
            v16 = (_DWORD *)*v16;
          }
          else
          {
            v16 = (_DWORD *)v16[2];
          }
        }
        while ( *((_BYTE *)v16 + 13) == 0 );
        if ( v15 == Block || v15[4] > 1 )
LABEL_31:
          v15 = (int *)Block;
        if ( v15 == Block || *((_BYTE *)v15 + 20) == 0 )
        {
          LastError = (DWORD)L"The service can not be stopped.";
LABEL_43:
          sub_100012B0(LastError, v26);
LABEL_44:
          v4 = (char *)Src;
LABEL_45:
          sub_10007B10((int)hService);
          goto LABEL_47;
        }
        if ( hSCObject != nullptr && sub_10008650(&v39) != 0 )
        {
          v34 = 0;
          memset(ServiceStatus, 0, sizeof(ServiceStatus));
          if ( hSCObject != nullptr && ControlService(hSCObject, 1u, (LPSERVICE_STATUS)ServiceStatus) )
            goto LABEL_44;
        }
        v17 = v13();
        sub_100012B0((int)L"(1)An error occurred while stopping the service.(%08x)", v17);
        if ( sub_10009E20(dwProcessId) )
          goto LABEL_44;
        v18 = v13();
        sub_100012B0((int)L"(2)An error occurred while stopping the service.(%08x)", v18);
        v4 = (char *)Src;
        if ( sub_10009ED0((unsigned __int16 *)Src) )
          goto LABEL_45;
        v19 = GetLastError();
        sub_100012B0((int)L"(3)An error occurred while stopping the service.(%08x)", v19);
        sub_10007B10((int)hService);
      }
      else
      {
        if ( v10 != 2 )
        {
          sub_100012B0((int)L"Change the service start value.(%d)", v10);
          v11 = ChangeServiceConfigW(
                  hService[0],
                  0xFFFFFFFF,
                  2u,
                  0xFFFFFFFF,
                  nullptr,
                  nullptr,
                  nullptr,
                  nullptr,
                  nullptr,
                  nullptr,
                  nullptr);
          v12 = v32;
          if ( v11 )
            v12 = 2;
          v32 = v12;
        }
        if ( v36 == 4 )
          goto LABEL_44;
        sub_100012B0((int)L"The service is not running. Restart the service.", v26);
        if ( hSCObject == nullptr )
          goto LABEL_44;
        StartServiceW(hSCObject, 0, nullptr);
        v4 = (char *)Src;
        sub_10007B10((int)hService);
      }
LABEL_47:
      v4 += 524;
      v3 += 131;
      Src = v4;
      sub_1000A950((int)&v28, *(void **)Block, (int)Block);
      j_j___free_base(Block);
      v44 = -1;
      if ( v43 >= 8 )
        sub_10009050(v41, v43 + 1);
      v43 = 7;
      LOWORD(v41) = 0;
      v42 = 0;
      if ( hSCObject != nullptr )
        CloseServiceHandle(hSCObject);
      if ( v39 != nullptr )
        CloseServiceHandle(v39);
      v2 = (HANDLE *)v29;
      if ( v3 == v29[3] )
        goto LABEL_54;
    }
  }
  return sub_100012B0((int)L"Thread Run Exit", v26);
}

// Address: 0x1000A760
int *__thiscall sub_1000A760(int *this)
{
  int *v1; // edi
  int *v2; // ebx
  int v3; // esi
  _DWORD *v4; // eax
  int v6; // [esp+10h] [ebp-78h] BYREF
  int *v7; // [esp+14h] [ebp-74h]
  int v8; // [esp+18h] [ebp-70h] BYREF
  char v9; // [esp+1Ch] [ebp-6Ch]
  int v10; // [esp+20h] [ebp-68h]
  char v11; // [esp+24h] [ebp-64h]
  int v12; // [esp+28h] [ebp-60h]
  char v13; // [esp+2Ch] [ebp-5Ch]
  int v14; // [esp+30h] [ebp-58h]
  char v15; // [esp+34h] [ebp-54h]
  int v16; // [esp+38h] [ebp-50h]
  char v17; // [esp+3Ch] [ebp-4Ch]
  int v18; // [esp+40h] [ebp-48h]
  char v19; // [esp+44h] [ebp-44h]
  int v20; // [esp+48h] [ebp-40h]
  char v21; // [esp+4Ch] [ebp-3Ch]
  int v22; // [esp+50h] [ebp-38h]
  char v23; // [esp+54h] [ebp-34h]
  int v24; // [esp+58h] [ebp-30h]
  char v25; // [esp+5Ch] [ebp-2Ch]
  int v26; // [esp+60h] [ebp-28h]
  char v27; // [esp+64h] [ebp-24h]
  int v28; // [esp+68h] [ebp-20h]
  char v29; // [esp+6Ch] [ebp-1Ch]
  int v30; // [esp+70h] [ebp-18h]
  char v31; // [esp+74h] [ebp-14h]
  int v32; // [esp+78h] [ebp-10h] BYREF

  v7 = this;
  v1 = this + 9;
  v8 = 1;
  v9 = 0;
  v10 = 2;
  v11 = 0;
  v12 = 8;
  v13 = 0;
  v14 = 16;
  v15 = 0;
  v16 = 256;
  v17 = 0;
  v18 = 4;
  v19 = 0;
  v20 = 32;
  v21 = 0;
  v22 = 64;
  v23 = 0;
  v24 = 128;
  v25 = 0;
  v26 = 1024;
  v27 = 0;
  v28 = 512;
  v29 = 0;
  v30 = 2048;
  v31 = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 9) = sub_1000AEA0();
  v2 = &v8;
  do
  {
    v3 = *v1;
    v4 = (_DWORD *)sub_1000B220(v2);
    sub_10009480(v1, &v6, v3, v4 + 4, v4);
    v2 += 2;
  }
  while ( v2 != &v32 );
  return v7;
}

// Address: 0x1000A880
void __thiscall sub_1000A880(void ***this)
{
  void **v1; // esi
  int v2; // [esp+4h] [ebp-4h] BYREF

  v1 = (void **)(this + 9);
  sub_1000A950((int)&v2, **(this + 9), (int)*(this + 9));
  j_j___free_base(*v1);
}

// Address: 0x1000A8F0
void __stdcall sub_1000A8F0(_DWORD *Block, unsigned int a2)
{
  void *v2; // ecx
  unsigned int v3; // eax

  v2 = Block;
  if ( a2 > 0x7D1196 )
    _invalid_parameter_noinfo_noreturn();
  if ( 524 * a2 >= 0x1000 )
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

// Address: 0x1000A950
void **__thiscall sub_1000A950(void ***this, void **a2, _DWORD *Block, void **a4)
{
  void *v4; // eax
  void *v7; // ecx
  _DWORD *i; // edx
  _BYTE *j; // eax
  int v10; // [esp+8h] [ebp-4h] BYREF

  v4 = Block;
  if ( Block == **this && a4 == *this )
  {
    sub_1000A9F0();
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
      sub_1000AA70((int)&v10, v7);
    }
    *a2 = v4;
    return a2;
  }
}

// Address: 0x1000A9F0
int __thiscall sub_1000A9F0(_DWORD *this)
{
  _DWORD *v2; // ebx
  _DWORD *i; // esi
  int result; // eax

  v2 = *(_DWORD **)(*this + 4);
  for ( i = v2; *((_BYTE *)i + 13) == 0; v2 = i )
  {
    sub_1000AED0((void *)i[2]);
    i = (_DWORD *)*i;
    j_j___free_base(v2);
  }
  *(_DWORD *)(*this + 4) = *this;
  *(_DWORD *)*this = *this;
  result = *this;
  *(_DWORD *)(*this + 8) = *this;
  *(this + 1) = 0;
  return result;
}

// Address: 0x1000AA70
int ***__thiscall sub_1000AA70(_DWORD *this, int ***a2, int **Block)
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
  j_j___free_base(v4);
  v27 = v18[1];
  if ( v27 != 0 )
    v18[1] = v27 - 1;
  *a2 = Block;
  return a2;
}

// Address: 0x1000AEA0
_DWORD *sub_1000AEA0()
{
  _DWORD *result; // eax

  result = operator new(0x18u);
  if ( result != nullptr )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  if ( result != (_DWORD *)-8 )
    result[2] = result;
  *((_WORD *)result + 6) = 257;
  return result;
}

// Address: 0x1000AED0
void __stdcall sub_1000AED0(void **Block)
{
  void **v1; // edi
  void **i; // esi

  v1 = Block;
  for ( i = Block; *((_BYTE *)i + 13) == 0; v1 = i )
  {
    sub_1000AED0(i[2]);
    i = (void **)*i;
    j_j___free_base(v1);
  }
}

// Address: 0x1000AF10
_DWORD *__thiscall sub_1000AF10(_DWORD *this)
{
  _DWORD *v2; // eax
  int v4; // [esp-Ch] [ebp-18h]
  int v5; // [esp-8h] [ebp-14h]

  v2 = (_DWORD *)sub_1000AF40(v4, v5, 8);
  sub_10008AE0(this, v2);
  return this;
}

// Address: 0x1000AF40
unsigned int *__thiscall sub_1000AF40(unsigned int *this, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int *v6; // eax
  unsigned int *v7; // edx
  unsigned int *v8; // ecx
  unsigned int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned int *v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int *v16; // ecx
  bool v17; // cf

  v5 = *(this + 5);
  if ( v5 < 8 )
    v6 = this;
  else
    v6 = (unsigned int *)*this;
  if ( v6 <= (unsigned int *)L"sc stop " )
  {
    v7 = v5 < 8 ? this : (unsigned int *)*this;
    if ( (char *)v7 + 2 * *(this + 4) > (char *)L"sc stop " )
    {
      if ( v5 < 8 )
        v8 = this;
      else
        v8 = (unsigned int *)*this;
      return (unsigned int *)sub_1000B0A0(v8, this, ((char *)L"sc stop " - (char *)v8) >> 1, a4);
    }
  }
  v10 = *(this + 4);
  if ( ~v10 <= a4 )
    sub_1000B693("string too long");
  v11 = v10 + a4;
  if ( a4 == 0 )
    return this;
  if ( v11 > 0x7FFFFFFE )
    sub_1000B693("string too long");
  if ( v5 < v11 )
  {
    sub_10009160(this, v10 + a4, v10);
    if ( v11 != 0 )
    {
LABEL_18:
      v12 = *(this + 5);
      if ( v12 < 8 )
        v13 = this;
      else
        v13 = (unsigned int *)*this;
      if ( v12 < 8 )
        v14 = (unsigned int)this;
      else
        v14 = *this;
      v15 = *(this + 4);
      if ( v15 != 0 )
        memmove((void *)(v14 + 2 * a4), v13, 2 * v15);
      if ( *(this + 5) < 8 )
        v16 = this;
      else
        v16 = (unsigned int *)*this;
      memmove_0(v16, L"sc stop ", 2 * a4);
      v17 = *(this + 5) < 8;
      *(this + 4) = v11;
      if ( !v17 )
      {
        *(_WORD *)(*this + 2 * v11) = 0;
        return this;
      }
      *((_WORD *)this + v11) = 0;
    }
    return this;
  }
  if ( v11 != 0 )
    goto LABEL_18;
  *(this + 4) = 0;
  if ( v5 < 8 )
    *(_WORD *)this = 0;
  else
    *(_WORD *)*this = 0;
  return this;
}

// Address: 0x1000B0A0
unsigned int *__thiscall sub_1000B0A0(unsigned int *this, int a2, unsigned int *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int *v12; // edx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int *v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int *v19; // edx
  unsigned int *v20; // edx
  bool v21; // cf
  unsigned int v22; // [esp+1Ch] [ebp+10h]

  v6 = a3[4];
  if ( v6 < a4 )
    sub_1000B6B3("invalid string position");
  v7 = a5;
  v8 = v6 - a4;
  v9 = *(this + 4);
  if ( a5 > v8 )
    v7 = v8;
  if ( ~v9 <= v7 )
    sub_1000B693("string too long");
  v10 = v9 + v7;
  if ( v7 == 0 )
    return this;
  if ( v10 > 0x7FFFFFFE )
    sub_1000B693("string too long");
  if ( *(this + 5) < v10 )
  {
    sub_10009160(this, v9 + v7, *(this + 4));
    if ( v10 != 0 )
    {
LABEL_9:
      v11 = *(this + 5);
      if ( v11 < 8 )
        v12 = this;
      else
        v12 = (unsigned int *)*this;
      if ( v11 < 8 )
        v14 = (unsigned int)this;
      else
        v14 = *this;
      v15 = *(this + 4);
      if ( v15 != 0 )
        memmove((void *)(v14 + 2 * v7), v12, 2 * v15);
      v16 = a3;
      if ( this == a3 )
      {
        v17 = a4 + v7;
        if ( a4 == 0 )
          v17 = 0;
        v18 = *(this + 5);
        if ( v18 < 8 )
          v22 = (unsigned int)this;
        else
          v22 = *this;
        if ( v18 < 8 )
          v19 = this;
        else
          v19 = (unsigned int *)*this;
        memmove(v19, (const void *)(v22 + 2 * v17), 2 * v7);
      }
      else
      {
        if ( a3[5] >= 8 )
          v16 = (unsigned int *)*a3;
        if ( *(this + 5) < 8 )
          v20 = this;
        else
          v20 = (unsigned int *)*this;
        memmove_0(v20, (char *)v16 + 2 * a4, 2 * v7);
      }
      v21 = *(this + 5) < 8;
      *(this + 4) = v10;
      if ( !v21 )
      {
        *(_WORD *)(*this + 2 * v10) = 0;
        return this;
      }
      *((_WORD *)this + v10) = 0;
    }
    return this;
  }
  if ( v10 != 0 )
    goto LABEL_9;
  *(this + 4) = 0;
  if ( *(this + 5) < 8 )
    *(_WORD *)this = 0;
  else
    *(_WORD *)*this = 0;
  return this;
}

// Address: 0x1000B220
_DWORD *__thiscall sub_1000B220(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = sub_10009730(this);
  *((_WORD *)result + 6) = 0;
  if ( result != (_DWORD *)-16 )
  {
    result[4] = *a2;
    result[5] = a2[1];
  }
  return result;
}

// Address: 0x1000B250
_DWORD *__thiscall sub_1000B250(_DWORD *Block, char a2)
{
  bool v3; // zf
  HMODULE v4; // eax
  FARPROC SheriffDelete; // eax
  volatile signed __int32 *v6; // edi

  v3 = *(Block + 1) == 0;
  *Block = &SheriffCtrl::`vftable';
  if ( !v3 )
  {
    v4 = (HMODULE)*(Block + 5);
    if ( v4 != nullptr )
    {
      SheriffDelete = GetProcAddress(v4, "SheriffDelete");
      if ( SheriffDelete != nullptr )
      {
        ((void (__stdcall *)(_DWORD))SheriffDelete)(*(Block + 1));
        *(Block + 1) = 0;
      }
    }
  }
  v6 = (volatile signed __int32 *)*(Block + 3);
  if ( v6 != nullptr && _InterlockedExchangeAdd(v6 + 1, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v6)(v6);
    if ( _InterlockedDecrement(v6 + 2) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
  }
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x1000B300
void __thiscall sub_1000B300(_DWORD *this)
{
  bool v2; // zf
  HMODULE v3; // eax
  FARPROC SheriffDelete; // eax
  volatile signed __int32 *v5; // esi

  v2 = *(this + 1) == 0;
  *this = &SheriffCtrl::`vftable';
  if ( !v2 )
  {
    v3 = (HMODULE)*(this + 5);
    if ( v3 != nullptr )
    {
      SheriffDelete = GetProcAddress(v3, "SheriffDelete");
      if ( SheriffDelete != nullptr )
      {
        ((void (__stdcall *)(_DWORD))SheriffDelete)(*(this + 1));
        *(this + 1) = 0;
      }
    }
  }
  v5 = (volatile signed __int32 *)*(this + 3);
  if ( v5 != nullptr && _InterlockedExchangeAdd(v5 + 1, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
    if ( _InterlockedDecrement(v5 + 2) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
  }
}

// Address: 0x1000B3A0
bool __thiscall sub_1000B3A0(HMODULE *this, int a2, int a3)
{
  HMODULE v5; // eax
  void (__stdcall *v6)(HMODULE); // ebx
  wchar_t *v7; // edi
  DWORD v8; // ebx
  wchar_t *v9; // eax
  HMODULE v10; // eax
  int (*SheriffCreate)(void); // eax
  bool v12; // zf
  LPWSTR lpFilename[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( *(this + 1) != nullptr )
    return false;
  v5 = *(this + 5);
  v6 = (void (__stdcall *)(HMODULE))FreeLibrary;
  if ( v5 != nullptr )
  {
    FreeLibrary(v5);
    *(this + 5) = nullptr;
  }
  if ( *(this + 5) == nullptr )
  {
    sub_1000B4C0(this);
    v7 = lpFilename[0];
    v8 = lpFilename[1] - lpFilename[0];
    if ( GetModuleFileNameW(nullptr, lpFilename[0], v8) == 0 )
      *lpFilename[0] = 0;
    v9 = wcsrchr(v7, 0x5Cu);
    if ( v9 != nullptr )
      v9[1] = 0;
    wcscat_s(v7, v8, L"sheriff.dll");
    *(this + 5) = LoadLibraryW(v7);
    sub_1000B510(lpFilename);
    v6 = (void (__stdcall *)(HMODULE))FreeLibrary;
  }
  v10 = *(this + 5);
  if ( v10 != nullptr )
  {
    SheriffCreate = GetProcAddress(v10, "SheriffCreate");
    if ( SheriffCreate != nullptr )
      *(this + 1) = (HMODULE)SheriffCreate();
    v12 = *(this + 1) == nullptr;
    if ( *(this + 1) != nullptr )
      return !v12;
    v6(*(this + 5));
    *(this + 5) = nullptr;
  }
  v12 = *(this + 1) == nullptr;
  return !v12;
}

// Address: 0x1000B480
_DWORD *__thiscall sub_1000B480(_DWORD *Block, char a2)
{
  *Block = &SheriffCtrl::Status::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x1000B4B0
void __thiscall sub_1000B4B0(_DWORD *this)
{
  *this = &SheriffCtrl::Status::`vftable';
}

// Address: 0x1000B4C0
int __thiscall sub_1000B4C0(int this, int a2)
{
  void *v3; // eax

  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  v3 = sub_10009310(0x1000u);
  *(_DWORD *)this = v3;
  *(_DWORD *)(this + 4) = v3;
  *(_DWORD *)(this + 8) = *(_DWORD *)this + 0x2000;
  memset(*(void **)this, 0, 0x2000u);
  *(_DWORD *)(this + 4) += 0x2000;
  return this;
}

// Address: 0x1000B510
void __thiscall sub_1000B510(char **this)
{
  char *v2; // edx
  unsigned int v3; // eax
  char *v4; // eax
  unsigned int v5; // edx

  v2 = *this;
  if ( *this != nullptr )
  {
    v3 = (*(this + 2) - v2) >> 1;
    if ( v3 > 0x7FFFFFFF )
      _invalid_parameter_noinfo_noreturn();
    if ( 2 * v3 >= 0x1000 )
    {
      if ( ((unsigned __int8)v2 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v4 = *((char **)v2 - 1);
      if ( v4 >= v2 )
        _invalid_parameter_noinfo_noreturn();
      v5 = v2 - v4;
      if ( v5 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v5 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v2 = v4;
    }
    j_j___free_base(v2);
    *this = nullptr;
    *(this + 1) = nullptr;
    *(this + 2) = nullptr;
  }
}

// Address: 0x1000B583
char *__thiscall sub_1000B583(char *this, int a2)
{
  sub_10001B10(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x1000B59E
_DWORD *__thiscall sub_1000B59E(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad allocation";
  *this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x1000B5B6
char *__thiscall sub_1000B5B6(char *this, int a2)
{
  sub_10001B10(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}

// Address: 0x1000B5D1
char *__thiscall sub_1000B5D1(char *this, int a2)
{
  sub_10001AD0(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}

// Address: 0x1000B5F2
char *__thiscall sub_1000B5F2(char *this, int a2)
{
  sub_10001B10(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  return this;
}

// Address: 0x1000B60D
char *__thiscall sub_1000B60D(char *this, int a2)
{
  sub_10001B10(this, a2);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x1000B628
char *__thiscall sub_1000B628(char *this, int a2)
{
  sub_10001AD0(this, a2);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x1000B649
// Microsoft VisualC 14/net runtime
char *__thiscall unknown_libname_2(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x1000B676
void __noreturn sub_1000B676()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000B59E(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
}

// Address: 0x1000B693
void __cdecl __noreturn sub_1000B693(int a1)
{
  char pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000B5D1(pExceptionObject, a1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x1000B6B3
void __cdecl __noreturn sub_1000B6B3(int a1)
{
  char pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000B628(pExceptionObject, a1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// Address: 0x1000B6D3
std::_Init_locks *__thiscall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi

  if ( _InterlockedExchangeAdd(&dword_1003F000, 1u) == 0 )
  {
    v2 = &stru_10040280;
    do
      _Mtxinit(v2++);
    while ( (int)v2 < (int)&unk_10040340 );
  }
  return this;
}

// Address: 0x1000B700
std::_Lockit *__thiscall std::_Lockit::_Lockit(std::_Lockit *this, int a2)
{
  *(_DWORD *)this = a2;
  if ( a2 != 0 )
  {
    if ( a2 < 8 )
      unknown_libname_4(&stru_10040280 + a2);
  }
  else
  {
    _lock_locales();
  }
  return this;
}

// Address: 0x1000B758
void __thiscall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this != 0 )
  {
    if ( v1 < 8 )
      sub_1000C243(&stru_10040280 + v1);
  }
  else
  {
    _unlock_locales();
  }
}

// Address: 0x1000B7D0
std::locale::_Locimp *__thiscall std::locale::_Locimp::_Locimp(std::locale::_Locimp *this, bool a2)
{
  char *v3; // ecx

  v3 = (char *)this + 24;
  *((_DWORD *)this + 1) = 1;
  *(_DWORD *)this = &std::locale::_Locimp::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = a2;
  *(_DWORD *)v3 = 0;
  v3[4] = 0;
  std::_Yarn<char>::operator=(&unk_1002D444);
  return this;
}

// Address: 0x1000B813
void __thiscall std::_Fac_node::~_Fac_node(std::_Fac_node *this)
{
  void (__thiscall ***v1)(_DWORD, int); // eax

  v1 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 8))(*((_DWORD *)this + 1));
  if ( v1 != nullptr )
    (**v1)(v1, 1);
}

// Address: 0x1000B872
void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(std::_Fac_tidy_reg_t *this)
{
  std::_Fac_node *v1; // ecx
  std::_Fac_node *v2; // esi

  while ( 1 )
  {
    v2 = dword_100403FC;
    if ( dword_100403FC == nullptr )
      break;
    v1 = dword_100403FC;
    dword_100403FC = *(std::_Fac_node **)dword_100403FC;
    std::_Fac_node::~_Fac_node(v1);
    sub_1000CA99(v2);
  }
}

// Address: 0x1000B899
void __thiscall std::locale::_Locimp::~_Locimp(void **this)
{
  *this = &std::locale::_Locimp::`vftable';
  std::locale::_Locimp::_Locimp_dtor((struct std::locale::_Locimp *)this);
  if ( *(this + 6) != nullptr )
    j___free_base(*(this + 6));
  *(this + 6) = nullptr;
  *this = &std::_Facet_base::`vftable';
}

// Address: 0x1000B8F4
void **__thiscall std::_Yarn<char>::operator=(void **this, _BYTE *Src)
{
  _BYTE *i; // esi
  size_t v4; // esi
  void *v5; // eax

  if ( *this != Src )
  {
    if ( *this != nullptr )
      j___free_base(*this);
    *this = nullptr;
    if ( Src != nullptr )
    {
      for ( i = Src; *i != 0; ++i )
        ;
      v4 = i - Src + 1;
      v5 = malloc(v4);
      *this = v5;
      if ( v5 != nullptr )
        memmove_0(v5, Src, v4);
    }
  }
  return this;
}

// Address: 0x1000B948
void **__thiscall std::locale::_Locimp::`scalar deleting destructor'(void **this, char a2)
{
  std::locale::_Locimp::~_Locimp(this);
  if ( (a2 & 1) != 0 )
    sub_1000CA99(this);
  return this;
}

// Address: 0x1000B96A
void __cdecl std::_Facet_Register(struct std::_Facet_base *a1)
{
  std::_Fac_node *v1; // eax

  v1 = (std::_Fac_node *)operator new(8u);
  if ( v1 != nullptr )
  {
    *(_DWORD *)v1 = dword_100403FC;
    *((_DWORD *)v1 + 1) = a1;
  }
  else
  {
    v1 = nullptr;
  }
  dword_100403FC = v1;
}

// Address: 0x1000B998
int sub_1000B998()
{
  return dword_100403F8;
}

// Address: 0x1000B99E
static struct std::locale::_Locimp *__cdecl std::locale::_Init(bool a1)
{
  struct std::locale::_Locimp *v1; // edi
  _BYTE v3[12]; // [esp+14h] [ebp-10h] BYREF
  int v4; // [esp+20h] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v3, 0);
  v1 = (struct std::locale::_Locimp *)dword_100403F8;
  v4 = 0;
  if ( dword_100403F8 == 0 )
  {
    v1 = std::locale::_Locimp::_New_Locimp(false);
    std::locale::_Setgloballocale(v1);
    *((_DWORD *)v1 + 4) = 63;
    std::_Yarn<char>::operator=((void **)v1 + 6, byte_1002D448);
    dword_100403F4 = (int)v1;
    (*(void (__thiscall **)(struct std::locale::_Locimp *))(*(_DWORD *)v1 + 4))(v1);
    dword_10040418 = dword_100403F4;
  }
  if ( a1 )
    (*(void (__thiscall **)(struct std::locale::_Locimp *))(*(_DWORD *)v1 + 4))(v1);
  std::_Lockit::~_Lockit((std::_Lockit *)v3);
  return v1;
}

// Address: 0x1000BA2C
static void __cdecl std::locale::_Locimp::_Locimp_dtor(struct std::locale::_Locimp *a1)
{
  int v1; // edi
  void (__thiscall ***v2)(_DWORD, int); // eax
  void (__thiscall ***v3)(_DWORD, int); // eax
  char v4[4]; // [esp+10h] [ebp-14h] BYREF
  void (__thiscall ***v5)(_DWORD, int); // [esp+14h] [ebp-10h]
  int v6; // [esp+20h] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v4, 0);
  v6 = 0;
  v1 = *((_DWORD *)a1 + 3);
  while ( v1 != 0 )
  {
    --v1;
    v2 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)a1 + 2) + 4 * v1);
    v5 = v2;
    if ( v2 != nullptr )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))((int (__thiscall *)(void (__thiscall ***)(_DWORD, int)))(*v2)[2])(v5);
      v5 = v3;
      if ( v3 != nullptr )
        (**v3)(v5, 1);
    }
  }
  j___free_base(*((void **)a1 + 2));
  std::_Lockit::~_Lockit((std::_Lockit *)v4);
}

// Address: 0x1000BAA1
static void __cdecl std::_Locinfo::_Locinfo_ctor(void **a1, char *Locale)
{
  char *v2; // eax
  char *v3; // eax

  v2 = setlocale(0, nullptr);
  if ( v2 == nullptr )
    v2 = (char *)::Locale;
  std::_Yarn<char>::operator=(a1 + 9, v2);
  if ( Locale == nullptr || (v3 = setlocale(0, Locale)) == nullptr )
    v3 = (char *)&unk_1002D444;
  std::_Yarn<char>::operator=(a1 + 11, v3);
}

// Address: 0x1000BAEC
static void __cdecl std::_Locinfo::_Locinfo_dtor(struct std::_Locinfo *a1)
{
  const char *v1; // ecx

  if ( *((_DWORD *)a1 + 9) != 0 )
  {
    v1 = *((const char **)a1 + 9);
    if ( v1 == nullptr )
      v1 = (char *)a1 + 40;
    setlocale(0, v1);
  }
}

// Address: 0x1000BB0E
static struct std::locale::_Locimp *__cdecl std::locale::_Locimp::_New_Locimp(bool a1)
{
  std::locale::_Locimp *v1; // eax

  v1 = (std::locale::_Locimp *)operator new(0x20u);
  if ( v1 != nullptr )
    return std::locale::_Locimp::_Locimp(v1, a1);
  else
    return nullptr;
}

// Address: 0x1000BB33
static void __cdecl std::locale::_Setgloballocale(void *a1)
{
  if ( byte_1004041D == 0 )
  {
    byte_1004041D = 1;
    _Atexit(tidy_global);
  }
  dword_100403F8 = (int)a1;
}

// Address: 0x1000BB5B
int (__thiscall ***__cdecl _Deletegloballocale(_DWORD *a1))(_DWORD, int)
{
  int (__thiscall ***result)(_DWORD, int); // eax

  result = (int (__thiscall ***)(_DWORD, int))a1;
  if ( *a1 != 0 )
  {
    result = (int (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 8))(*a1);
    if ( result != nullptr )
      return (int (__thiscall ***)(_DWORD, int))(**result)(result, 1);
  }
  return result;
}

// Address: 0x1000BB94
void __thiscall tidy_global(void *this)
{
  void *v1; // [esp+0h] [ebp-4h] BYREF

  v1 = this;
  std::_Lockit::_Lockit((std::_Lockit *)&v1, 0);
  _Deletegloballocale(&dword_100403F8);
  dword_100403F8 = 0;
  std::_Lockit::~_Lockit((std::_Lockit *)&v1);
}

// Address: 0x1000BBC0
// attributes: thunk
int __fastcall j____uncaught_exception(int a1)
{
  return __uncaught_exception(a1);
}

// Address: 0x1000BBC5
static void __cdecl std::ios_base::_Addstd(struct std::ios_base *a1)
{
  int v1; // ecx
  int v2; // edx
  struct std::ios_base *v3; // eax
  int v4; // eax
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = v1;
  std::_Lockit::_Lockit((std::_Lockit *)&v5, 2);
  *((_DWORD *)a1 + 2) = 1;
  do
  {
    v2 = *((_DWORD *)a1 + 2);
    v3 = (struct std::ios_base *)dword_10040424[v2];
    if ( v3 == nullptr )
      break;
    if ( v3 == a1 )
      break;
    *((_DWORD *)a1 + 2) = v2 + 1;
  }
  while ( (unsigned int)(v2 + 1) < 8 );
  v4 = *((_DWORD *)a1 + 2);
  ++byte_1004044C[v4];
  dword_10040424[v4] = (int)a1;
  std::_Lockit::~_Lockit((std::_Lockit *)&v5);
}

// Address: 0x1000BC16
int __thiscall std::ios_base::_Callfns(int ***this, int a2)
{
  int **i; // edi
  int result; // eax

  for ( i = *(this + 11); i != nullptr; i = (int **)*i )
    result = ((int (__cdecl *)(int, int ***, int *))i[2])(a2, this, i[1]);
  return result;
}

// Address: 0x1000BC48
static void __cdecl std::ios_base::_Ios_base_dtor(struct std::ios_base *a1)
{
  int v1; // eax
  _DWORD *v2; // esi

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 == 0 || (--byte_1004044C[v1], byte_1004044C[v1] <= 0) )
  {
    std::ios_base::_Tidy(a1);
    v2 = *((_DWORD **)a1 + 12);
    if ( v2 != nullptr )
    {
      sub_10001DF0(v2);
      sub_1000CA99(v2);
    }
  }
}

// Address: 0x1000BC88
void __thiscall std::ios_base::_Tidy(int ***this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  std::ios_base::_Callfns(this, 0);
  v2 = *(this + 10);
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_1000CA99(v2);
      v2 = v3;
    }
    while ( v3 != nullptr );
  }
  *(this + 10) = nullptr;
  v4 = *(this + 11);
  if ( v4 != nullptr )
  {
    do
    {
      v5 = (_DWORD *)*v4;
      sub_1000CA99(v4);
      v4 = v5;
    }
    while ( v5 != nullptr );
  }
  *(this + 11) = nullptr;
}

// Address: 0x1000BCD0
FILE *__cdecl sub_1000BCD0(char *FileName, int a2, int ShFlag)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // esi
  FILE *v8; // eax
  FILE *v9; // eax
  FILE *v10; // esi

  v3 = a2;
  v4 = 1;
  if ( (a2 & 0x40) != 0 )
    v3 = a2 | 1;
  if ( (v3 & 8) != 0 )
    v3 |= 2u;
  v5 = v3 & 0xFFFFFF3B;
  v6 = 0;
  do
  {
    if ( v4 == v5 )
      break;
    v4 = dword_1002D4C8[v6++];
  }
  while ( v4 != 0 );
  if ( dword_1002D4C4[v6] == 0 )
    return nullptr;
  if ( (a2 & 0x80) != 0 && (v5 & 0xA) != 0 )
  {
    v8 = (FILE *)sub_1000BD7B(FileName, 0, ShFlag);
    if ( v8 != nullptr )
    {
      fclose(v8);
      return nullptr;
    }
  }
  v9 = (FILE *)sub_1000BD7B(FileName, v6, ShFlag);
  v10 = v9;
  if ( v9 == nullptr )
    return nullptr;
  if ( (a2 & 4) != 0 && fseek(v9, 0, 2) != 0 )
  {
    fclose(v10);
    return nullptr;
  }
  return v10;
}

// Address: 0x1000BD72
FILE *__cdecl sub_1000BD72(char *FileName, int a2, int ShFlag)
{
  return sub_1000BCD0(FileName, a2, ShFlag);
}

// Address: 0x1000BD7B
FILE *__cdecl sub_1000BD7B(char *FileName, int a2, int ShFlag)
{
  return _fsopen(FileName, (&Mode)[a2], ShFlag);
}

// Address: 0x1000BD98
const char *__cdecl std::_Syserror_map(int a1)
{
  const char *v1; // eax

  v1 = (const char *)&unk_1002DB80;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 8;
    if ( v1 == "address family not supported" )
      return "unknown error";
  }
  return *((const char **)v1 + 1);
}

// Address: 0x1000BDBD
_Ctypevec *__cdecl _Getctype(_Ctypevec *__return_ptr retstr)
{
  const __int16 *v1; // eax
  const unsigned __int16 *v2; // eax
  __int16 *Table; // edi
  const __int16 *v4; // eax
  wchar_t *v5; // eax

  retstr->_Page = ___lc_codepage_func();
  v1 = (const __int16 *)_calloc_base(0x100u, 2u);
  retstr->_Table = v1;
  if ( v1 != nullptr )
  {
    v2 = __pctype_func();
    Table = (__int16 *)retstr->_Table;
    retstr->_Delfl = 1;
    qmemcpy(Table, v2, 0x200u);
  }
  else
  {
    v4 = (const __int16 *)__pctype_func();
    retstr->_Delfl = 0;
    retstr->_Table = v4;
  }
  v5 = ___lc_locale_name_func()[1];
  retstr->_LocaleName = v5;
  if ( v5 != nullptr )
    retstr->_LocaleName = _wcsdup(v5);
  return retstr;
}

// Address: 0x1000BE28
int __cdecl _Tolower(int C, const _Ctypevec *a2)
{
  wchar_t *LocaleName; // edi
  UINT Page; // eax
  int result; // eax
  const unsigned __int16 *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  CHAR MultiByteStr; // [esp+8h] [ebp-14h] BYREF
  char v12; // [esp+9h] [ebp-13h]
  char v13; // [esp+Ah] [ebp-12h]
  int v14; // [esp+10h] [ebp-Ch]
  UINT CodePage; // [esp+14h] [ebp-8h]
  WCHAR DestStr; // [esp+18h] [ebp-4h] BYREF

  if ( a2 != nullptr )
  {
    LocaleName = a2->_LocaleName;
    Page = a2->_Page;
  }
  else
  {
    LocaleName = ___lc_locale_name_func()[2];
    Page = ___lc_codepage_func();
  }
  CodePage = Page;
  if ( LocaleName == nullptr )
  {
    result = C;
    if ( (unsigned int)(C - 65) <= 0x19 )
      return C + 32;
    return result;
  }
  if ( (unsigned int)C < 0x100 )
  {
    if ( a2 == nullptr )
    {
      if ( isupper(C) == 0 )
        return C;
      goto LABEL_13;
    }
    if ( (a2->_Table[C] & 1) == 0 )
      return C;
  }
  if ( a2 == nullptr )
  {
LABEL_13:
    v14 = C >> 8;
    v5 = __pctype_func();
    LOBYTE(v6) = BYTE1(C);
    v7 = v5[BYTE1(C)] & 0x8000;
    goto LABEL_15;
  }
  v6 = C >> 8;
  v7 = a2->_Table[BYTE1(C)] < 0;
LABEL_15:
  if ( v7 != 0 )
  {
    MultiByteStr = v6;
    v12 = C;
    v13 = 0;
    v8 = 2;
  }
  else
  {
    MultiByteStr = C;
    v12 = 0;
    v8 = 1;
  }
  v9 = __crtLCMapStringA((int)LocaleName, 0x100u, &MultiByteStr, v8, &DestStr, 3, CodePage, 1);
  if ( v9 == 0 )
    return C;
  v10 = v9 == 1;
  result = (unsigned __int8)DestStr;
  if ( !v10 )
    return HIBYTE(DestStr) | ((unsigned __int8)DestStr << 8);
  return result;
}

// Address: 0x1000BF22
int __cdecl _Toupper(int C, const _Ctypevec *a2)
{
  wchar_t *LocaleName; // edi
  UINT Page; // eax
  int result; // eax
  const unsigned __int16 *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  CHAR MultiByteStr; // [esp+8h] [ebp-14h] BYREF
  char v12; // [esp+9h] [ebp-13h]
  char v13; // [esp+Ah] [ebp-12h]
  int v14; // [esp+10h] [ebp-Ch]
  UINT CodePage; // [esp+14h] [ebp-8h]
  WCHAR DestStr; // [esp+18h] [ebp-4h] BYREF

  if ( a2 != nullptr )
  {
    LocaleName = a2->_LocaleName;
    Page = a2->_Page;
  }
  else
  {
    LocaleName = ___lc_locale_name_func()[2];
    Page = ___lc_codepage_func();
  }
  CodePage = Page;
  if ( LocaleName == nullptr )
  {
    result = C;
    if ( (unsigned int)(C - 97) <= 0x19 )
      return C - 32;
    return result;
  }
  if ( (unsigned int)C < 0x100 )
  {
    if ( a2 == nullptr )
    {
      if ( islower(C) == 0 )
        return C;
      goto LABEL_13;
    }
    if ( (a2->_Table[C] & 2) == 0 )
      return C;
  }
  if ( a2 == nullptr )
  {
LABEL_13:
    v14 = C >> 8;
    v5 = __pctype_func();
    LOBYTE(v6) = BYTE1(C);
    v7 = v5[BYTE1(C)] & 0x8000;
    goto LABEL_15;
  }
  v6 = C >> 8;
  v7 = a2->_Table[BYTE1(C)] < 0;
LABEL_15:
  if ( v7 != 0 )
  {
    MultiByteStr = v6;
    v12 = C;
    v13 = 0;
    v8 = 2;
  }
  else
  {
    MultiByteStr = C;
    v12 = 0;
    v8 = 1;
  }
  v9 = __crtLCMapStringA((int)LocaleName, 0x200u, &MultiByteStr, v8, &DestStr, 3, CodePage, 1);
  if ( v9 == 0 )
    return C;
  v10 = v9 == 1;
  result = (unsigned __int8)DestStr;
  if ( !v10 )
    return HIBYTE(DestStr) | ((unsigned __int8)DestStr << 8);
  return result;
}

// Address: 0x1000C01C
__int64 __cdecl _Query_perf_counter()
{
  LARGE_INTEGER PerformanceCount; // [esp+0h] [ebp-8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  return PerformanceCount.QuadPart;
}

// Address: 0x1000C035
__int64 __cdecl _Query_perf_frequency()
{
  LARGE_INTEGER Frequency; // [esp+0h] [ebp-8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  return Frequency.QuadPart;
}

// Address: 0x1000C04E
int __cdecl _Xtime_diff_to_millis2(const xtime *a1, const xtime *a2)
{
  int *v2; // eax
  _BYTE v4[16]; // [esp+8h] [ebp-20h] BYREF
  int v5; // [esp+18h] [ebp-10h]
  int v6; // [esp+1Ch] [ebp-Ch]

  v2 = (int *)xtime_diff(v4, a1, a2);
  v5 = *v2;
  v6 = v2[1];
  return 1000 * v5 + (v2[2] + 999999) / 1000000;
}

// Address: 0x1000C090
__int64 __cdecl _Xtime_get_ticks()
{
  struct _FILETIME SystemTimeAsFileTime; // [esp+0h] [ebp-8h] BYREF

  __crtGetSystemTimePreciseAsFileTime(&SystemTimeAsFileTime);
  return *(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL;
}

// Address: 0x1000C0B9
_DWORD *__cdecl xtime_diff(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  bool v4; // cf
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax

  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  v3 = a1[2];
  if ( v3 < 0 )
  {
    do
    {
      v4 = (*a1)-- != 0;
      a1[1] = v4 + a1[1] - 1;
      v3 += 1000000000;
    }
    while ( v3 < 0 );
    a1[2] = v3;
  }
  v5 = a1[2];
  if ( v5 >= 1000000000 )
  {
    do
    {
      ++*(_QWORD *)a1;
      v5 -= 1000000000;
    }
    while ( v5 >= 1000000000 );
    a1[2] = v5;
  }
  v6 = a1[2];
  if ( v6 >= a3[2] )
  {
    v4 = *a1 < *a3;
    *a1 -= *a3;
    a1[1] -= v4 + a3[1];
    v7 = v6 - a3[2];
  }
  else
  {
    *(_QWORD *)a1 += -1LL - *(_QWORD *)a3;
    v7 = v6 - a3[2] + 1000000000;
  }
  v8 = *a1;
  a1[2] = v7;
  if ( (int)a1[1] < 0 || (a1[1] | v8) == 0 && (int)a1[2] <= 0 )
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return a1;
}

// Address: 0x1000C156
int __cdecl xtime_get(xtime *a1, int a2)
{
  int v2; // esi
  unsigned __int64 ticks; // [esp-18h] [ebp-28h]

  v2 = a2;
  if ( a2 != 1 || a1 == nullptr )
    return 0;
  ticks = _Xtime_get_ticks();
  a1->sec = ticks / 0x989680;
  a1->nsec = 100 * (ticks % 0x989680);
  return v2;
}

// Address: 0x1000C19D
void __cdecl _Thrd_sleep(const xtime *a1)
{
  DWORD v1; // eax
  xtime v2; // [esp+4h] [ebp-14h] BYREF

  xtime_get(&v2, 1);
  do
  {
    do
    {
      v1 = _Xtime_diff_to_millis2(a1, &v2);
      Sleep(v1);
      xtime_get(&v2, 1);
    }
    while ( v2.sec < a1->sec );
  }
  while ( v2.sec == a1->sec && v2.nsec < a1->nsec );
}

// Address: 0x1000C210
void __cdecl _Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

// Address: 0x1000C21E
int __cdecl _Mtxinit(LPCRITICAL_SECTION lpCriticalSection)
{
  return __crtInitializeCriticalSectionEx(lpCriticalSection, 0xFA0u, 0);
}

// Address: 0x1000C235
// Microsoft VisualC 14/net runtime
void __cdecl unknown_libname_4(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}

// Address: 0x1000C243
void __cdecl sub_1000C243(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}

// Address: 0x1000C251
void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)
{
  void (__thiscall *v1)(_DWORD); // eax
  PVOID v2; // [esp-4h] [ebp-18h]

  while ( (unsigned int)dword_1003F008 < 0xA )
  {
    v2 = dword_10040478[dword_1003F008++];
    v1 = (void (__thiscall *)(_DWORD))DecodePointer(v2);
    if ( v1 != nullptr )
      v1(v1);
  }
}

// Address: 0x1000C2B5
void __cdecl _Atexit(PVOID Ptr)
{
  if ( dword_1003F008 == 0 )
    abort();
  --dword_1003F008;
  dword_10040478[dword_1003F008] = EncodePointer(Ptr);
}

// Address: 0x1000C2E3
int __cdecl __crtLCMapStringA(
        int a1,
        DWORD dwMapFlags,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpDestStr,
        int cchDest,
        UINT CodePage,
        int a8)
{
  int v8; // esi
  signed int v9; // eax
  int v10; // edi
  int result; // eax
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  void *v16; // esp
  WCHAR *v17; // ebx
  WCHAR *v18; // eax
  int v19; // eax
  int v20; // esi
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  void *v25; // esp
  WCHAR *v26; // ebx
  WCHAR *v27; // eax
  int v28; // eax
  _DWORD v29[3]; // [esp+0h] [ebp-18h] BYREF
  int cchWideChar; // [esp+Ch] [ebp-Ch]
  LPCWSTR lpSrcStr; // [esp+10h] [ebp-8h]

  v8 = cbMultiByte;
  if ( cbMultiByte > 0 )
  {
    v9 = __strncnt(lpMultiByteStr, cbMultiByte);
    v8 = v9 + 1;
    if ( v9 >= cbMultiByte )
      v8 = v9;
  }
  v10 = 0;
  result = MultiByteToWideChar(CodePage, 8 * (a8 != 0) + 1, lpMultiByteStr, v8, nullptr, 0);
  v12 = result;
  cchWideChar = result;
  if ( result != 0 )
  {
    v13 = 2 * result;
    v14 = 2 * result + 8;
    if ( (2 * result < v14 ? v14 : 0) == 0 )
    {
      v17 = nullptr;
      lpSrcStr = nullptr;
      goto LABEL_14;
    }
    v15 = v13 + 8;
    if ( (v13 < v14 ? v14 : 0) > 0x400 )
    {
      v18 = (WCHAR *)_malloc_base(v13 < v15 ? v15 : 0);
      v17 = v18;
      lpSrcStr = v18;
      if ( v18 != nullptr )
      {
        *(_DWORD *)v18 = 56797;
        goto LABEL_11;
      }
    }
    else
    {
      v16 = alloca(v13 < v15 ? v15 : 0);
      v17 = (WCHAR *)v29;
      lpSrcStr = (LPCWSTR)v29;
      if ( v29 != nullptr )
      {
        v29[0] = 52428;
LABEL_11:
        v17 += 4;
        lpSrcStr = v17;
      }
    }
    v12 = cchWideChar;
LABEL_14:
    if ( v17 == nullptr )
      goto LABEL_38;
    if ( MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, v8, v17, v12) == 0 )
      goto LABEL_38;
    v19 = __crtLCMapStringEx(a1, dwMapFlags, v17, cchWideChar, nullptr, 0);
    v20 = v19;
    if ( v19 == 0 )
      goto LABEL_38;
    if ( (dwMapFlags & 0x400) != 0 )
    {
      if ( cchDest != 0 && v19 <= cchDest )
        __crtLCMapStringEx(a1, dwMapFlags, v17, cchWideChar, lpDestStr, cchDest);
      goto LABEL_39;
    }
    v21 = 2 * v19;
    v22 = 2 * v19 + 8;
    if ( (2 * v19 < v22 ? v22 : 0) != 0 )
    {
      v23 = v21 < v22 ? v22 : 0;
      v24 = v21 + 8;
      if ( v23 > 0x400 )
      {
        v27 = (WCHAR *)_malloc_base(v21 < v24 ? v24 : 0);
        v26 = v27;
        if ( v27 == nullptr )
          goto LABEL_36;
        *(_DWORD *)v27 = 56797;
      }
      else
      {
        v25 = alloca(v21 < v24 ? v24 : 0);
        v26 = (WCHAR *)v29;
        if ( v29 == nullptr )
          goto LABEL_36;
        v29[0] = 52428;
      }
      v26 += 4;
    }
    else
    {
      v26 = nullptr;
    }
    if ( v26 != nullptr && __crtLCMapStringEx(a1, dwMapFlags, lpSrcStr, cchWideChar, v26, v20) != 0 )
    {
      if ( cchDest != 0 )
        v28 = WideCharToMultiByte(CodePage, 0, v26, v20, (LPSTR)lpDestStr, cchDest, nullptr, nullptr);
      else
        v28 = WideCharToMultiByte(CodePage, 0, v26, v20, nullptr, 0, nullptr, nullptr);
      v20 = v28;
      if ( v28 != 0 )
      {
        _freea_crt(v26);
LABEL_39:
        _freea_crt(lpSrcStr);
        return v20;
      }
      goto LABEL_37;
    }
LABEL_36:
    v10 = v20;
LABEL_37:
    _freea_crt(v26);
LABEL_38:
    v20 = v10;
    goto LABEL_39;
  }
  return result;
}

// Address: 0x1000C4E6
void __cdecl _freea_crt(int a1)
{
  if ( a1 != 0 && *(_DWORD *)(a1 - 8) == 56797 )
    _free_base((void *)(a1 - 8));
}

// Address: 0x1000C504
int __cdecl initialize_pointers()
{
  HMODULE ModuleHandleW; // esi

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  dword_100404B0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlsAlloc");
  dword_100404B4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlsFree");
  dword_100404B8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlsGetValue");
  dword_100404BC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlsSetValue");
  dword_100404C0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "InitializeCriticalSectionEx");
  dword_100404C4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "InitOnceExecuteOnce");
  dword_100404C8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateEventExW");
  dword_100404CC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateSemaphoreW");
  dword_100404D0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateSemaphoreExW");
  dword_100404D4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateThreadpoolTimer");
  dword_100404D8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SetThreadpoolTimer");
  dword_100404DC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "WaitForThreadpoolTimerCallbacks");
  dword_100404E0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CloseThreadpoolTimer");
  dword_100404E4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateThreadpoolWait");
  dword_100404E8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SetThreadpoolWait");
  dword_100404EC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CloseThreadpoolWait");
  dword_100404F0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlushProcessWriteBuffers");
  dword_100404F4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FreeLibraryWhenCallbackReturns");
  dword_100404F8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetCurrentProcessorNumber");
  dword_100404FC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateSymbolicLinkW");
  dword_10040500 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetCurrentPackageId");
  dword_10040504 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetTickCount64");
  dword_10040508 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetFileInformationByHandleEx");
  dword_1004050C = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SetFileInformationByHandle");
  dword_10040510 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetSystemTimePreciseAsFileTime");
  dword_10040514 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "InitializeConditionVariable");
  dword_10040518 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "WakeConditionVariable");
  dword_1004051C = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "WakeAllConditionVariable");
  dword_10040520 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SleepConditionVariableCS");
  dword_10040524 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "InitializeSRWLock");
  dword_10040528 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "AcquireSRWLockExclusive");
  dword_1004052C = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "TryAcquireSRWLockExclusive");
  dword_10040530 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "ReleaseSRWLockExclusive");
  dword_10040534 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SleepConditionVariableSRW");
  dword_10040538 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateThreadpoolWork");
  dword_1004053C = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SubmitThreadpoolWork");
  dword_10040540 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CloseThreadpoolWork");
  dword_10040544 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CompareStringEx");
  dword_10040548 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetLocaleInfoEx");
  dword_1004054C = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "LCMapStringEx");
  return 0;
}

// Address: 0x1000C8AE
void __cdecl __crtGetSystemTimePreciseAsFileTime(LPFILETIME lpSystemTimeAsFileTime)
{
  if ( __security_cookie != dword_10040510 )
    ((void (__thiscall *)(uintptr_t, LPFILETIME))(__security_cookie ^ dword_10040510))(
      __security_cookie ^ dword_10040510,
      lpSystemTimeAsFileTime);
  else
    GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
}

// Address: 0x1000C8D7
int __cdecl __crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  if ( __security_cookie != dword_100404C0 )
    return ((int (__thiscall *)(uintptr_t, LPCRITICAL_SECTION, DWORD, int))(__security_cookie ^ dword_100404C0))(
             __security_cookie ^ dword_100404C0,
             lpCriticalSection,
             dwSpinCount,
             a3);
  InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
  return 1;
}

// Address: 0x1000C90F
int __cdecl GetTableIndexFromLocaleName(int a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // eax

  v1 = 0;
  v2 = 227;
  while ( 1 )
  {
    v3 = (v2 + v1) / 2;
    v4 = __wcsnicmp_ascii(a1, *(&off_1002EB58 + 2 * v3), 85);
    if ( v4 == 0 )
      break;
    if ( v4 >= 0 )
      v1 = v3 + 1;
    else
      v2 = v3 - 1;
    if ( v1 > v2 )
      return -1;
  }
  return dword_1002EB5C[2 * v3];
}

// Address: 0x1000C95D
int __cdecl __crtDownlevelLocaleNameToLCID(int a1)
{
  int TableIndexFromLocaleName; // eax

  if ( a1 != 0 && (unsigned int)(TableIndexFromLocaleName = GetTableIndexFromLocaleName(a1)) < 0xE4 )
    return dword_1002E438[2 * TableIndexFromLocaleName];
  else
    return 0;
}

// Address: 0x1000C987
int __cdecl __crtLCMapStringEx(int a1, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
{
  LCID v7; // eax

  if ( __security_cookie != dword_1004054C )
    return ((int (__thiscall *)(uintptr_t, int, DWORD, LPCWSTR, int, LPWSTR, int, _DWORD, _DWORD, _DWORD))(__security_cookie ^ dword_1004054C))(
             __security_cookie ^ dword_1004054C,
             a1,
             dwMapFlags,
             lpSrcStr,
             cchSrc,
             lpDestStr,
             cchDest,
             0,
             0,
             0);
  v7 = __crtDownlevelLocaleNameToLCID(a1);
  return LCMapStringW(v7, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}

// Address: 0x1000C9DD
int __cdecl __wcsnicmp_ascii(int a1, unsigned __int16 *a2, int a3)
{
  int v3; // esi
  int result; // eax
  unsigned __int16 *v5; // ecx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // ax

  v3 = a3;
  result = 0;
  if ( a3 != 0 )
  {
    v5 = a2;
    do
    {
      v6 = *(unsigned __int16 *)((char *)v5 + a1 - (_DWORD)a2);
      if ( v6 < 0x41u || v6 > 0x5Au )
        v7 = *(unsigned __int16 *)((char *)v5 + a1 - (_DWORD)a2);
      else
        v7 = v6 + 32;
      v8 = *v5;
      if ( *v5 >= 0x41u && v8 <= 0x5Au )
        v8 += 32;
      ++v5;
      --v3;
    }
    while ( v3 != 0 && v7 != 0 && v7 == v8 );
    return v7 - v8;
  }
  return result;
}

// Address: 0x1000CA50
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x1000CA61
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
        sub_1000D7AB();
      sub_1000B676();
    }
  }
  return result;
}

// Address: 0x1000CA94
// attributes: thunk
void __cdecl j_j___free_base(void *Block)
{
  j___free_base(Block);
}

// Address: 0x1000CA99
void __cdecl sub_1000CA99(void *Block)
{
  j_j___free_base(Block);
}

// Address: 0x1000CAA7
// Microsoft VisualC 14/net runtime
void *__cdecl unknown_libname_5(size_t a1)
{
  return operator new(a1);
}

// Address: 0x1000CAB0
// attributes: thunk
void __cdecl j_j_j___free_base(void *Block)
{
  j_j___free_base(Block);
}

// Address: 0x1000CAB5
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
    &unk_10040780);
  dword_10040788 = unknown_libname_6(SleepConditionVariableCS);
  dword_1004078C = unknown_libname_6(v5);
LABEL_7:
  atexit(loc_1000CB75);
  return 0;
}

// Address: 0x1000CB91
int __usercall _Init_thread_footer@<eax>(int a1@<esi>, _DWORD *a2)
{
  int (__thiscall *v2)(_DWORD, void *, int); // ecx

  _Init_thread_lock();
  *a2 = ++dword_1003F064;
  *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) = dword_1003F064;
  _Init_thread_unlock();
  if ( hObject != nullptr )
  {
    SetEvent(hObject);
    return ResetEvent(hObject);
  }
  else
  {
    v2 = (int (__thiscall *)(_DWORD, void *, int))__ROR4__(dword_1004078C ^ __security_cookie, __security_cookie & 0x1F);
    return v2(v2, &unk_10040780, a1);
  }
}

// Address: 0x1000CBD0
int __cdecl _Init_thread_header(_DWORD *a1)
{
  _Init_thread_lock();
  while ( *a1 != 0 )
  {
    if ( *a1 != -1 )
    {
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) = dword_1003F064;
      return _Init_thread_unlock();
    }
    _Init_thread_wait(0x64u);
  }
  *a1 = -1;
  return _Init_thread_unlock();
}

// Address: 0x1000CC16
void _Init_thread_lock()
{
  EnterCriticalSection(&CriticalSection);
}

// Address: 0x1000CC63
void _Init_thread_unlock()
{
  LeaveCriticalSection(&CriticalSection);
}

// Address: 0x1000CC6F
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
                                                                                      dword_10040788 ^ __security_cookie,
                                                                                      __security_cookie & 0x1F);
    return v1(v1, &unk_10040780, &CriticalSection, dwMilliseconds) != 0;
  }
}

// Address: 0x1000CCD4
// Microsoft VisualC 14/net runtime
uintptr_t __cdecl unknown_libname_6(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

// Address: 0x1000CCF1
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

// Address: 0x1000CD35
char __scrt_acquire_startup_lock()
{
  PVOID StackBase; // edx
  signed __int32 v2; // eax

  if ( __scrt_is_ucrt_dll_in_use() == 0 )
    return 0;
  StackBase = NtCurrentTeb()->NtTib.StackBase;
  do
  {
    v2 = _InterlockedCompareExchange(&dword_10040794, (signed __int32)StackBase, 0);
    if ( v2 == 0 )
      return 0;
  }
  while ( StackBase != (PVOID)v2 );
  return 1;
}

// Address: 0x1000CD6A
char __scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode v0; // eax

  if ( __scrt_is_ucrt_dll_in_use() != 0 )
  {
    __isa_available_init();
  }
  else
  {
    v0 = sub_1000DA85();
    if ( _configure_narrow_argv(v0) != 0 )
      return 0;
    common_initialize_environment_nolock<char>();
  }
  return 1;
}

// Address: 0x1000CD95
bool __scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)__scrt_initialize_onexit_tables(0) != 0;
}

// Address: 0x1000CDA3
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

// Address: 0x1000CDC2
char sub_1000CDC2()
{
  __acrt_thread_detach();
  __vcrt_thread_detach();
  return 1;
}

// Address: 0x1000CDCF
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

// Address: 0x1000CE02
void __scrt_dllmain_uninitialize_c()
{
  if ( __scrt_is_ucrt_dll_in_use() != 0 )
  {
    _execute_onexit_table(&Table);
  }
  else if ( sub_10017C78() == 0 )
  {
    _cexit();
  }
}

// Address: 0x1000CE25
__vcrt_bool sub_1000CE25()
{
  __acrt_uninitialize_critical(false);
  return __vcrt_uninitialize_critical();
}

// Address: 0x1000CE32
char __cdecl __scrt_initialize_crt(int a1)
{
  if ( a1 == 0 )
    byte_100407B0 = 1;
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

// Address: 0x1000CE6B
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
    return _initialize_onexit_table(&Table) == 0 && _initialize_onexit_table(&stru_100407A4) == 0;
  v2 = (_PVFV *)(__security_cookie ^ __ROR4__(-1, 32 - (__security_cookie & 0x1F)));
  Table._first = v2;
  Table._last = v2;
  Table._end = v2;
  v3._first = v2;
  v3._last = v2;
  v3._end = v2;
  stru_100407A4 = v3;
  return true;
}

// Address: 0x1000CF02
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

// Address: 0x1000CF8C
__int32 __cdecl __scrt_release_startup_lock(char a1)
{
  __int32 result; // eax

  result = __scrt_is_ucrt_dll_in_use();
  if ( result != 0 && a1 == 0 )
    return _InterlockedExchange(&dword_10040794, 0);
  return result;
}

// Address: 0x1000CFA9
char __cdecl __scrt_uninitialize_crt(__vcrt_bool Terminating, char a2)
{
  if ( byte_100407B0 == 0 || a2 == 0 )
  {
    __acrt_uninitialize(Terminating);
    __vcrt_uninitialize(Terminating);
  }
  return 1;
}

// Address: 0x1000CFD1
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int v1; // eax

  if ( __ROR4__((int)Table._first ^ __security_cookie, __security_cookie & 0x1F) == -1 )
    v1 = sub_100185A7(Func);
  else
    v1 = _register_onexit_function(&Table, Func);
  return v1 == 0 ? Func : nullptr;
}

// Address: 0x1000D00C
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x1000D021
_DWORD *__thiscall sub_1000D021(_DWORD *Block, char a2)
{
  *Block = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x1000D044
BOOL __cdecl __raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // eax

  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x1000D06C
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
  dword_100408B8 = 0;
  dword_100408B4 = v4;
  dword_100408B0 = v3;
  dword_100408AC = v0;
  dword_100408A8 = v2;
  dword_100408A4 = v1;
  word_100408D0 = __SS__;
  word_100408C4 = __CS__;
  word_100408A0 = __DS__;
  word_1004089C = __ES__;
  word_10040898 = __FS__;
  word_10040894 = __GS__;
  v5 = __readeflags();
  dword_100408C8 = v5;
  dword_100408BC = vars0;
  dword_100408C0 = retaddr;
  dword_100408CC = (int)&v8;
  dword_10040808 = 65537;
  dword_100407C4 = retaddr;
  dword_100407B8 = -1073740791;
  dword_100407BC = 1;
  dword_100407C8 = 1;
  dword_100407CC = 2;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}

// Address: 0x1000D167
void __noreturn __report_rangecheckfailure()
{
  __report_securityfailure(8);
}

// Address: 0x1000D173
void __usercall __noreturn __report_securityfailure(int a1@<ebx>, int a2@<edi>, int a3@<esi>, unsigned int a4)
{
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // kr00_4
  int vars0; // [esp+31Ch] [ebp+0h]
  int retaddr; // [esp+320h] [ebp+4h]

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a4);
  dword_100408B8 = 0;
  dword_100408B4 = v5;
  dword_100408B0 = v4;
  dword_100408AC = a1;
  dword_100408A8 = a3;
  dword_100408A4 = a2;
  word_100408D0 = __SS__;
  word_100408C4 = __CS__;
  word_100408A0 = __DS__;
  word_1004089C = __ES__;
  word_10040898 = __FS__;
  word_10040894 = __GS__;
  v6 = __readeflags();
  dword_100408C8 = v6;
  dword_100408BC = vars0;
  dword_100408C0 = retaddr;
  dword_100408CC = (int)&a4;
  dword_100407C4 = retaddr;
  dword_100407B8 = -1073740791;
  dword_100407BC = 1;
  dword_100407C8 = 1;
  dword_100407CC = a4;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}

// Address: 0x1000D243
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
      LOBYTE(result) = sub_1000CDC2();
      break;
    default:
      return 1;
  }
  return (unsigned __int8)result;
}

// Address: 0x1000D296
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
  if ( dword_10040790 != 0 )
    __scrt_fastfail(7);
  dword_10040790 = 1;
  if ( __scrt_dllmain_before_initialize_c() )
  {
    sub_1000DBDE();
    atexit(sub_1000DC09);
    sub_1000DB9D();
    atexit(sub_1000DBA9);
    __scrt_initialize_default_local_stdio_options();
    if ( _initterm_e((_PIFV *)&dword_1002D21C, (_PIFV *)&dword_1002D238) == 0
      && __scrt_dllmain_after_initialize_c() != 0 )
    {
      _initterm((_PVFV *)&First, (_PVFV *)&Last);
      dword_10040790 = 2;
      v3 = 0;
    }
  }
  __scrt_release_startup_lock(v6);
  if ( v3 != 0 )
    return 0;
  v4 = (_DWORD *)sub_1000DBD8();
  v5 = v4;
  if ( *v4 != 0 && __scrt_is_nonwritable_in_current_image((int)v4) )
    ((void (__thiscall *)(_DWORD, HINSTANCE, int, void *const))*v5)(*v5, a1, 2, a2);
  ++dword_10040AD4;
  return 1;
}

// Address: 0x1000D3A8
BOOL __cdecl dllmain_crt_process_detach(__vcrt_bool Terminating)
{
  char v2; // [esp+10h] [ebp-1Ch]

  if ( dword_10040AD4 <= 0 )
    return false;
  --dword_10040AD4;
  v2 = __scrt_acquire_startup_lock();
  if ( dword_10040790 != 2 )
    __scrt_fastfail(7);
  __scrt_dllmain_uninitialize_c();
  dword_10040790 = 0;
  sub_1000CE25();
  __scrt_release_startup_lock(v2);
  return __scrt_uninitialize_crt(Terminating, 0) != 0;
}

// Address: 0x1000D425
int __cdecl dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, void *const lpvReserved)
{
  void *v4; // ebx
  int v5; // esi
  BOOL v6; // eax

  if ( fdwReason == 0 && dword_10040AD4 <= 0 )
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

// Address: 0x1000D521
int __stdcall dllmain_raw(HINSTANCE a1, unsigned int a2, void *const a3)
{
  return 1;
}

// Address: 0x1000D54B
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}

// Address: 0x1000D56E
// attributes: thunk
void _guard_check_icall_nop()
{
  ;
}

// Address: 0x1000D574
// positive sp value has been detected, the output may be wrong!
void _EH_epilog3()
{
  __asm { bnd retn }
}

// Address: 0x1000D589
_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1000D5BD
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1000D600
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

// Address: 0x1000D6A0
int _alloca_probe_16()
{
  return _alloca_probe();
}

// Address: 0x1000D6B6
int _alloca_probe_8()
{
  return _alloca_probe();
}

// Address: 0x1000D6D0
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x1000D710
unsigned int __stdcall _aulldiv(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  char v7; // cf
  unsigned int v8; // esi
  unsigned __int64 v9; // rax

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
    v8 = v6 / v5;
    v9 = v8 * (unsigned __int64)(unsigned int)a2;
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 32, v9 > a1) )
      --v8;
    return v8;
  }
  else
  {
    LODWORD(v3) = a1;
    HIDWORD(v3) = HIDWORD(a1) % (unsigned int)a2;
    return v3 / (unsigned int)a2;
  }
}

// Address: 0x1000D778
char *__thiscall sub_1000D778(char *this, int a2)
{
  sub_10001B10(this, a2);
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}

// Address: 0x1000D793
_DWORD *__thiscall sub_1000D793(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad array new length";
  *this = &std::bad_array_new_length::`vftable';
  return this;
}

// Address: 0x1000D7AB
void __noreturn sub_1000D7AB()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000D793(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVbad_array_new_length_std__);
}

// Address: 0x1000D7C8
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
  dword_10040AD8 = 0;
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
    dword_10040AD8 &= result;
  }
  return result;
}

// Address: 0x1000D8E3
void sub_1000D8E3()
{
  dword_10040AD8 = 0;
}

// Address: 0x1000D8EB
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

  dword_10040AE0 = 0;
  dword_1003F090 |= 1u;
  if ( IsProcessorFeaturePresent(0xAu) )
  {
    v22 = 0;
    _EAX = 0;
    dword_1003F090 |= 2u;
    dword_10040AE0 = 1;
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
      v12 = dword_10040AE4 | 1;
      dword_10040AE4 |= 1u;
    }
    else
    {
      v12 = dword_10040AE4;
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
        dword_10040AE4 = v12 | 2;
    }
    if ( (v13 & 0x100000) != 0 )
    {
      dword_1003F090 |= 4u;
      dword_10040AE0 = 2;
      if ( (v13 & 0x8000000) != 0 && (v13 & 0x10000000) != 0 )
      {
        __asm { xgetbv }
        if ( (v13 & 6) == 6 )
        {
          v19 = dword_1003F090 | 8;
          dword_10040AE0 = 3;
          dword_1003F090 |= 8u;
          if ( (v22 & 0x20) != 0 )
          {
            dword_10040AE0 = 5;
            dword_1003F090 = v19 | 0x20;
          }
        }
      }
    }
  }
  return 0;
}

// Address: 0x1000DA85
int sub_1000DA85()
{
  return 1;
}

// Address: 0x1000DA89
BOOL __scrt_is_ucrt_dll_in_use()
{
  return dword_10041464 != 0;
}

// Address: 0x1000DAA0
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = _except_handler4;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1000DAE6
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { bnd retn }
}

// Address: 0x1000DAFB
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
    dword_1003F06C = ~v0;
  }
  else
  {
    dword_1003F06C = ~__security_cookie;
  }
}

// Address: 0x1000DB97
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return true;
}

// Address: 0x1000DB9D
void sub_1000DB9D()
{
  InitializeSListHead(&ListHead);
}

// Address: 0x1000DBA9
void __cdecl sub_1000DBA9()
{
  __std_type_info_destroy_list(&ListHead);
}

// Address: 0x1000DBB5
void *sub_1000DBB5()
{
  return &unk_10040AF0;
}

// Address: 0x1000DBBB
_DWORD *__scrt_initialize_default_local_stdio_options()
{
  _DWORD *v0; // eax
  int v1; // ecx
  _DWORD *result; // eax
  int v3; // ecx

  v0 = sub_10001120();
  v1 = v0[1];
  *v0 |= 4u;
  v0[1] = v1;
  result = sub_1000DBB5();
  v3 = result[1];
  *result |= 2u;
  result[1] = v3;
  return result;
}

// Address: 0x1000DBD8
void *sub_1000DBD8()
{
  return &unk_10041460;
}

// Address: 0x1000DBDE
void sub_1000DBDE()
{
  ;
}

// Address: 0x1000DC09
void __cdecl sub_1000DC09()
{
  ;
}

// Address: 0x1000DC40
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

// Address: 0x1000DC9A
void __thiscall sub_1000DC9A(char *this)
{
  int v2; // ecx

  v2 = *(_DWORD *)this;
  if ( v2 != 0 )
  {
    **(_DWORD **)(v2 + 256) = 0;
    sub_1000DCCA(1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 4));
}

// Address: 0x1000DCBC
BOOL __cdecl sub_1000DCBC(DWORD dwTlsIndex)
{
  return TlsFree(dwTlsIndex);
}

// Address: 0x1000DCCA
int __thiscall sub_1000DCCA(int this, char a2)
{
  int result; // eax

  if ( a2 != 0 )
    result = _InterlockedIncrement((volatile signed __int32 *)(this + 1288));
  else
    result = *(_DWORD *)(this + 1280) - *(_DWORD *)(this + 1284);
  if ( result == 1 )
    return SetEvent(*(HANDLE *)this);
  return result;
}

// Address: 0x1000DCFE
int *sub_1000DCFE()
{
  int *result; // eax

  if ( dword_10040B2C != 0 )
  {
    result = (int *)_InterlockedDecrement(dword_1003F0B4);
    if ( result == (int *)0x80000000 )
    {
      sub_1000DD80();
      _InterlockedAnd(dword_1003F0B4, 0x7FFFFFFFu);
      return dword_1003F0B4;
    }
  }
  return result;
}

// Address: 0x1000DD0C
uintptr_t sub_1000DD0C()
{
  uintptr_t v0; // esi
  HANDLE CurrentThread; // eax
  struct _FILETIME CreationTime; // [esp+4h] [ebp-10h] BYREF
  struct _FILETIME ExitTime; // [esp+Ch] [ebp-8h] BYREF

  dword_10040B80 = 1;
  v0 = __security_cookie ^ (unsigned int)EncodePointer(&dword_10040B88);
  CurrentThread = GetCurrentThread();
  if ( GetThreadTimes(CurrentThread, &CreationTime, &ExitTime, &ExitTime, &ExitTime) )
    v0 ^= CreationTime.dwLowDateTime ^ CreationTime.dwHighDateTime;
  return v0;
}

// Address: 0x1000DD80
BOOL sub_1000DD80()
{
  BOOL result; // eax

  sub_1000DD99();
  result = sub_1000DCBC(dword_10040B6C);
  dword_10040B6C = 0;
  return result;
}

// Address: 0x1000DD99
BOOL sub_1000DD99()
{
  BOOL result; // eax

  result = TlsFree(dwTlsIndex);
  dwTlsIndex = 0;
  return result;
}

// Address: 0x1000DDB0
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
      if ( _bittest(&dword_1003F090, 1u) )
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
      if ( !_bittest(&dword_1003F090, 1u) )
        goto Dword_align;
      goto XmmCopySmallTest;
    }
    if ( _bittest(&dword_10040AE4, 1u) )
    {
      qmemcpy(a1, Src, Size);
      return a1;
    }
    if ( (((unsigned int)Src ^ (unsigned int)a1) & 0xF) == 0 && _bittest(&dword_1003F090, 1u) )
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
    if ( !_bittest(&dword_10040AE4, 0) || ((unsigned __int8)a1 & 3) != 0 )
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

// Address: 0x1000E324
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
        return (_DWORD *)sub_1000EC04(a1[6], v3);
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

// Address: 0x1000E3B8
char *__thiscall sub_1000E3B8(char *this, int a2)
{
  sub_10001B10(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000E3D3
_DWORD *__thiscall sub_1000E3D3(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad exception";
  *this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000E3EB
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
  v8 = __vcrt_getptd(268494104);
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

// Address: 0x1000E5A7
void __cdecl __noreturn CallUnexpected()
{
  if ( *(_DWORD *)(__vcrt_getptd() + 28) == 0 )
    unexpected();
  terminate();
}

// Address: 0x1000E5E1
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

// Address: 0x1000E65C
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

// Address: 0x1000E6A6
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
        sub_1000E3D3(pExceptionObject);
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

// Address: 0x1000EA0E
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

// Address: 0x1000EB29
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

// Address: 0x1000EBC5
unsigned __int8 __cdecl Is_bad_exception_allowed(const struct _s_ESTypeList *a1)
{
  int v1; // esi
  int i; // ebx

  v1 = 0;
  if ( a1->nCount <= 0 )
    return 0;
  for ( i = 0; __std_type_info_compare(&a1->pTypeArray[i].pType->spare, &dword_1003FB34) != 0; ++i )
  {
    if ( ++v1 >= a1->nCount )
      return 0;
  }
  return 1;
}

// Address: 0x1000EC04
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_1000EC04(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x1000EC0B
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

// Address: 0x1000EC30
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
      return sub_1000EC04((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_1000EC04((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x1000ECBF
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
      if ( (v7 & 0x80u) != 0 && (*(_BYTE *)a4 & 0x10) != 0 && dword_10040C20 != 0 )
      {
        v9 = ((int (__thiscall *)(int))dword_10040C20)(dword_10040C20);
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

// Address: 0x1000EDED
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

// Address: 0x1000EE32
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

// Address: 0x1000EEFA
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

// Address: 0x1000EFF6
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

// Address: 0x1000F084
// attributes: thunk
void __noreturn j__terminate()
{
  terminate();
}

// Address: 0x1000F089
bool __uncaught_exception()
{
  return *(_DWORD *)(__vcrt_getptd() + 24) != 0;
}

// Address: 0x1000F096
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

// Address: 0x1000F0F9
void __cdecl __std_exception_destroy(int a1)
{
  if ( *(_BYTE *)(a1 + 4) != 0 )
    j___free_base(*(void **)a1);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
}

// Address: 0x1000F118
_purecall_handler __cdecl _get_purecall_handler()
{
  return (_purecall_handler)__ROR4__(
                              __security_cookie ^ _InterlockedCompareExchange(&dword_10040C80, 0, 0),
                              __security_cookie & 0x1F);
}

// Address: 0x1000F137
void __noreturn _purecall()
{
  _purecall_handler purecall_handler; // eax

  purecall_handler = _get_purecall_handler();
  if ( purecall_handler != nullptr )
    ((void (__thiscall *)(_purecall_handler))purecall_handler)(purecall_handler);
  abort();
}

// Address: 0x1000F152
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
  if ( dword_10040AE0 >= 2 )
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

// Address: 0x1000F1F3
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _ThrowInfo *v2; // edi
  int v3; // [esp-4h] [ebp-30h]
  DWORD dwExceptionCode[8]; // [esp+Ch] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_10030888, sizeof(dwExceptionCode));
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

// Address: 0x1000F261
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x1000F2C1
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

// Address: 0x1000F39E
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

// Address: 0x1000F416
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x1000F448
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_3, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x1000F49D
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

// Address: 0x1000F4CE
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(__vcrt_getptd() + 36);
  *(_DWORD *)(__vcrt_getptd() + 36) = a1;
  return a1;
}

// Address: 0x1000F4F2
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

// Address: 0x1000F53C
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

// Address: 0x1000F562
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

// Address: 0x1000F601
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *ExceptionRecord,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(ExceptionRecord, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x1000F640
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
      if ( _bittest(&dword_1003F090, 1u) )
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
      if ( !_bittest(&dword_1003F090, 1u) )
        goto Dword_align_0;
      goto XmmCopySmallTest_0;
    }
    if ( _bittest(&dword_10040AE4, 1u) )
    {
      qmemcpy(a1, Src, Size);
      return a1;
    }
    if ( (((unsigned int)Src ^ (unsigned int)a1) & 0xF) == 0 && _bittest(&dword_1003F090, 1u) )
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
    if ( !_bittest(&dword_10040AE4, 0) || ((unsigned __int8)a1 & 3) != 0 )
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

// Address: 0x1000FBC0
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
    if ( _bittest(&dword_10040AE4, 1u) )
    {
      memset(a1, Val, Size);
      return a1;
    }
    if ( !_bittest(&dword_1003F090, 1u) )
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
  if ( !_bittest(&dword_1003F090, 1u) )
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

// Address: 0x1000FD20
void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  void *result; // eax
  unsigned __int8 *v4; // edx
  int v5; // ebx
  unsigned __int8 v6; // cl
  bool v7; // cf
  char *v8; // eax
  unsigned __int8 v9; // cl
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx

  result = (void *)MaxCount;
  if ( MaxCount != 0 )
  {
    v4 = (unsigned __int8 *)Buf;
    LOBYTE(v5) = Val;
    if ( ((unsigned __int8)Buf & 3) != 0 )
    {
      do
      {
        v6 = *v4++;
        if ( (unsigned __int8)Val == v6 )
          return v4 - 1;
        result = (char *)result - 1;
        if ( result == nullptr )
          return result;
      }
      while ( ((unsigned __int8)v4 & 3) != 0 );
    }
    v7 = (unsigned int)result < 4;
    v8 = (char *)result - 4;
    if ( !v7 )
    {
      v5 = 16843009 * (unsigned __int8)Val;
      do
      {
        v10 = v5 ^ *(_DWORD *)v4;
        v4 += 4;
        if ( (((v10 + 2130640639) ^ ~v10) & 0x81010100) != 0 )
        {
          v11 = *((_DWORD *)v4 - 1);
          LOBYTE(v11) = Val ^ v11;
          if ( (_BYTE)v11 == 0 )
            return v4 - 4;
          BYTE1(v11) ^= Val;
          if ( BYTE1(v11) == 0 )
            return v4 - 3;
          v12 = HIWORD(v11);
          if ( (unsigned __int8)Val == (unsigned __int8)v12 )
            return v4 - 2;
          if ( (unsigned __int8)Val == BYTE1(v12) )
            return v4 - 1;
        }
        v7 = (unsigned int)v8 < 4;
        v8 -= 4;
      }
      while ( !v7 );
    }
    result = v8 + 4;
    if ( result != nullptr )
    {
      while ( 1 )
      {
        v9 = *v4++;
        if ( (unsigned __int8)v5 == v9 )
          break;
        result = (char *)result - 1;
        if ( result == nullptr )
          return result;
      }
      return v4 - 1;
    }
  }
  return result;
}

// Address: 0x1000FDCD
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  size_t v3; // ebx
  unsigned __int8 *v4; // edx
  int *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char *v14; // esi
  unsigned __int8 *v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int result; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx

  v3 = Size;
  switch ( Size )
  {
    case 0u:
      return 0;
    case 1u:
      v40 = *(unsigned __int8 *)Buf1;
      v41 = *(unsigned __int8 *)Buf2;
LABEL_422:
      v42 = v40 - v41;
      if ( v42 != 0 )
        return 2 * (v42 > 0) - 1;
      return v42;
    case 2u:
      if ( *(unsigned __int8 *)Buf1 != *(unsigned __int8 *)Buf2 )
      {
        result = 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) - 1;
        if ( 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) != 1 )
          return result;
      }
      v40 = *((unsigned __int8 *)Buf1 + 1);
      v41 = *((unsigned __int8 *)Buf2 + 1);
      goto LABEL_422;
    case 3u:
      if ( *(unsigned __int8 *)Buf1 != *(unsigned __int8 *)Buf2 )
      {
        result = 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) - 1;
        if ( 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) != 1 )
          return result;
      }
      if ( *((unsigned __int8 *)Buf1 + 1) != *((unsigned __int8 *)Buf2 + 1) )
      {
        result = 2 * (*((unsigned __int8 *)Buf1 + 1) > (unsigned int)*((unsigned __int8 *)Buf2 + 1)) - 1;
        if ( 2 * (*((unsigned __int8 *)Buf1 + 1) > (unsigned int)*((unsigned __int8 *)Buf2 + 1)) != 1 )
          return result;
      }
      v40 = *((unsigned __int8 *)Buf1 + 2);
      v41 = *((unsigned __int8 *)Buf2 + 2);
      goto LABEL_422;
    default:
      break;
  }
  v4 = (unsigned __int8 *)Buf2;
  if ( Size == 4 )
  {
    if ( *(unsigned __int8 *)Buf1 != *(unsigned __int8 *)Buf2 )
    {
      result = 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) - 1;
      if ( 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) != 1 )
        return result;
    }
    if ( *((unsigned __int8 *)Buf1 + 1) != *((unsigned __int8 *)Buf2 + 1) )
    {
      result = 2 * (*((unsigned __int8 *)Buf1 + 1) > (unsigned int)*((unsigned __int8 *)Buf2 + 1)) - 1;
      if ( 2 * (*((unsigned __int8 *)Buf1 + 1) > (unsigned int)*((unsigned __int8 *)Buf2 + 1)) != 1 )
        return result;
    }
    if ( *((unsigned __int8 *)Buf1 + 2) != *((unsigned __int8 *)Buf2 + 2) )
    {
      result = 2 * (*((unsigned __int8 *)Buf1 + 2) > (unsigned int)*((unsigned __int8 *)Buf2 + 2)) - 1;
      if ( 2 * (*((unsigned __int8 *)Buf1 + 2) > (unsigned int)*((unsigned __int8 *)Buf2 + 2)) != 1 )
        return result;
    }
    v40 = *((unsigned __int8 *)Buf1 + 3);
    v41 = *((unsigned __int8 *)Buf2 + 3);
    goto LABEL_422;
  }
  v5 = (int *)Buf1;
  if ( Size >= 0x20 )
  {
    do
    {
      v6 = *v5;
      if ( *v5 == *(_DWORD *)v4 )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v6 != *v4 )
        {
          v7 = 2 * ((unsigned __int8)v6 > (unsigned int)*v4) - 1;
          if ( 2 * ((unsigned __int8)v6 > (unsigned int)*v4) != 1 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 1) != v4[1] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 1) > (unsigned int)v4[1]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 1) > (unsigned int)v4[1]) != 1 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 2) != v4[2] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 2) > (unsigned int)v4[2]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 2) > (unsigned int)v4[2]) != 1 )
            return v7;
        }
        v7 = *((unsigned __int8 *)v5 + 3) - v4[3];
        if ( v7 != 0 )
          v7 = 2 * (*((unsigned __int8 *)v5 + 3) > (unsigned int)v4[3]) - 1;
      }
      if ( v7 != 0 )
        return v7;
      v8 = v5[1];
      if ( v8 == *((_DWORD *)v4 + 1) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v8 != v4[4] )
        {
          LOBYTE(v7) = (unsigned __int8)v8 > (unsigned int)v4[4];
          v7 = 2 * v7 - 1;
          if ( v7 != 0 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 5) != v4[5] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 5) > (unsigned int)v4[5]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 5) > (unsigned int)v4[5]) != 1 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 6) != v4[6] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 6) > (unsigned int)v4[6]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 6) > (unsigned int)v4[6]) != 1 )
            return v7;
        }
        v7 = *((unsigned __int8 *)v5 + 7) - v4[7];
        if ( v7 != 0 )
          v7 = 2 * (*((unsigned __int8 *)v5 + 7) > (unsigned int)v4[7]) - 1;
      }
      if ( v7 != 0 )
        return v7;
      v9 = v5[2];
      if ( v9 == *((_DWORD *)v4 + 2) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v9 != v4[8] )
        {
          LOBYTE(v7) = (unsigned __int8)v9 > (unsigned int)v4[8];
          v7 = 2 * v7 - 1;
          if ( v7 != 0 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 9) != v4[9] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 9) > (unsigned int)v4[9]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 9) > (unsigned int)v4[9]) != 1 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 10) != v4[10] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 10) > (unsigned int)v4[10]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 10) > (unsigned int)v4[10]) != 1 )
            return v7;
        }
        v7 = *((unsigned __int8 *)v5 + 11) - v4[11];
        if ( v7 != 0 )
          v7 = 2 * (*((unsigned __int8 *)v5 + 11) > (unsigned int)v4[11]) - 1;
      }
      if ( v7 != 0 )
        return v7;
      v10 = v5[3];
      if ( v10 == *((_DWORD *)v4 + 3) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v10 != v4[12] )
        {
          LOBYTE(v7) = (unsigned __int8)v10 > (unsigned int)v4[12];
          v7 = 2 * v7 - 1;
          if ( v7 != 0 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 13) != v4[13] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 13) > (unsigned int)v4[13]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 13) > (unsigned int)v4[13]) != 1 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 14) != v4[14] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 14) > (unsigned int)v4[14]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 14) > (unsigned int)v4[14]) != 1 )
            return v7;
        }
        v7 = *((unsigned __int8 *)v5 + 15) - v4[15];
        if ( v7 != 0 )
          v7 = 2 * (*((unsigned __int8 *)v5 + 15) > (unsigned int)v4[15]) - 1;
      }
      if ( v7 != 0 )
        return v7;
      if ( v5[4] == *((_DWORD *)v4 + 4) )
      {
        v7 = 0;
      }
      else
      {
        if ( *((unsigned __int8 *)v5 + 16) != v4[16] )
        {
          LOBYTE(v7) = *((unsigned __int8 *)v5 + 16) > (unsigned int)v4[16];
          v7 = 2 * v7 - 1;
          if ( v7 != 0 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 17) != v4[17] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 17) > (unsigned int)v4[17]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 17) > (unsigned int)v4[17]) != 1 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 18) != v4[18] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 18) > (unsigned int)v4[18]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 18) > (unsigned int)v4[18]) != 1 )
            return v7;
        }
        v7 = *((unsigned __int8 *)v5 + 19) - v4[19];
        if ( v7 != 0 )
          v7 = 2 * (*((unsigned __int8 *)v5 + 19) > (unsigned int)v4[19]) - 1;
      }
      if ( v7 != 0 )
        return v7;
      v11 = v5[5];
      if ( v11 == *((_DWORD *)v4 + 5) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v11 != v4[20] )
        {
          LOBYTE(v7) = (unsigned __int8)v11 > (unsigned int)v4[20];
          v7 = 2 * v7 - 1;
          if ( v7 != 0 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 21) != v4[21] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 21) > (unsigned int)v4[21]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 21) > (unsigned int)v4[21]) != 1 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 22) != v4[22] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 22) > (unsigned int)v4[22]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 22) > (unsigned int)v4[22]) != 1 )
            return v7;
        }
        v7 = *((unsigned __int8 *)v5 + 23) - v4[23];
        if ( v7 != 0 )
          v7 = 2 * (*((unsigned __int8 *)v5 + 23) > (unsigned int)v4[23]) - 1;
      }
      if ( v7 != 0 )
        return v7;
      v12 = v5[6];
      if ( v12 == *((_DWORD *)v4 + 6) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v12 != v4[24] )
        {
          LOBYTE(v7) = (unsigned __int8)v12 > (unsigned int)v4[24];
          v7 = 2 * v7 - 1;
          if ( v7 != 0 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 25) != v4[25] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 25) > (unsigned int)v4[25]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 25) > (unsigned int)v4[25]) != 1 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 26) != v4[26] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 26) > (unsigned int)v4[26]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 26) > (unsigned int)v4[26]) != 1 )
            return v7;
        }
        v7 = *((unsigned __int8 *)v5 + 27) - v4[27];
        if ( v7 != 0 )
          v7 = 2 * (*((unsigned __int8 *)v5 + 27) > (unsigned int)v4[27]) - 1;
      }
      if ( v7 != 0 )
        return v7;
      v13 = v5[7];
      if ( v13 == *((_DWORD *)v4 + 7) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v13 != v4[28] )
        {
          LOBYTE(v7) = (unsigned __int8)v13 > (unsigned int)v4[28];
          v7 = 2 * v7 - 1;
          if ( v7 != 0 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 29) != v4[29] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 29) > (unsigned int)v4[29]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 29) > (unsigned int)v4[29]) != 1 )
            return v7;
        }
        if ( *((unsigned __int8 *)v5 + 30) != v4[30] )
        {
          v7 = 2 * (*((unsigned __int8 *)v5 + 30) > (unsigned int)v4[30]) - 1;
          if ( 2 * (*((unsigned __int8 *)v5 + 30) > (unsigned int)v4[30]) != 1 )
            return v7;
        }
        v7 = *((unsigned __int8 *)v5 + 31) - v4[31];
        if ( v7 != 0 )
          v7 = 2 * (*((unsigned __int8 *)v5 + 31) > (unsigned int)v4[31]) - 1;
      }
      if ( v7 != 0 )
        return v7;
      v3 -= 32;
      v5 += 8;
      v4 += 32;
    }
    while ( v3 >= 0x20 );
  }
  v14 = (char *)v5 + v3;
  v15 = &v4[v3];
  switch ( v3 )
  {
    case 1u:
      goto LABEL_253;
    case 2u:
      goto LABEL_332;
    case 3u:
      goto LABEL_411;
    case 4u:
      goto LABEL_163;
    case 5u:
      goto LABEL_242;
    case 6u:
      goto LABEL_321;
    case 7u:
      goto LABEL_400;
    case 8u:
      goto LABEL_152;
    case 9u:
      goto LABEL_231;
    case 0xAu:
      goto LABEL_310;
    case 0xBu:
      goto LABEL_389;
    case 0xCu:
      goto LABEL_141;
    case 0xDu:
      goto LABEL_220;
    case 0xEu:
      goto LABEL_299;
    case 0xFu:
      goto LABEL_378;
    case 0x10u:
      goto LABEL_130;
    case 0x11u:
      goto LABEL_209;
    case 0x12u:
      goto LABEL_288;
    case 0x13u:
      goto LABEL_367;
    case 0x14u:
      goto LABEL_119;
    case 0x15u:
      goto LABEL_198;
    case 0x16u:
      goto LABEL_277;
    case 0x17u:
      goto LABEL_356;
    case 0x18u:
      goto LABEL_108;
    case 0x19u:
      goto LABEL_187;
    case 0x1Au:
      goto LABEL_266;
    case 0x1Bu:
      goto LABEL_345;
    case 0x1Cu:
      v16 = *((_DWORD *)v14 - 7);
      if ( v16 == *((_DWORD *)v15 - 7) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v16 != *(v15 - 28) )
        {
          v7 = 2 * ((unsigned __int8)v16 > (unsigned int)*(v15 - 28)) - 1;
          if ( 2 * ((unsigned __int8)v16 > (unsigned int)*(v15 - 28)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 27) != *(v15 - 27) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 27) > (unsigned int)*(v15 - 27)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 27) > (unsigned int)*(v15 - 27)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 26) != *(v15 - 26) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 26) > (unsigned int)*(v15 - 26)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 26) > (unsigned int)*(v15 - 26)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 25) - *(v15 - 25);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 25) > (unsigned int)*(v15 - 25)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_108:
      v17 = *((_DWORD *)v14 - 6);
      if ( v17 == *((_DWORD *)v15 - 6) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v17 != *(v15 - 24) )
        {
          v7 = 2 * ((unsigned __int8)v17 > (unsigned int)*(v15 - 24)) - 1;
          if ( 2 * ((unsigned __int8)v17 > (unsigned int)*(v15 - 24)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 23) != *(v15 - 23) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 23) > (unsigned int)*(v15 - 23)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 23) > (unsigned int)*(v15 - 23)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 22) != *(v15 - 22) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 22) > (unsigned int)*(v15 - 22)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 22) > (unsigned int)*(v15 - 22)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 21) - *(v15 - 21);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 21) > (unsigned int)*(v15 - 21)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_119:
      v18 = *((_DWORD *)v14 - 5);
      if ( v18 == *((_DWORD *)v15 - 5) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v18 != *(v15 - 20) )
        {
          v7 = 2 * ((unsigned __int8)v18 > (unsigned int)*(v15 - 20)) - 1;
          if ( 2 * ((unsigned __int8)v18 > (unsigned int)*(v15 - 20)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 19) != *(v15 - 19) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 19) > (unsigned int)*(v15 - 19)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 19) > (unsigned int)*(v15 - 19)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 18) != *(v15 - 18) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 18) > (unsigned int)*(v15 - 18)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 18) > (unsigned int)*(v15 - 18)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 17) - *(v15 - 17);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 17) > (unsigned int)*(v15 - 17)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_130:
      v19 = *((_DWORD *)v14 - 4);
      if ( v19 == *((_DWORD *)v15 - 4) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v19 != *(v15 - 16) )
        {
          v7 = 2 * ((unsigned __int8)v19 > (unsigned int)*(v15 - 16)) - 1;
          if ( 2 * ((unsigned __int8)v19 > (unsigned int)*(v15 - 16)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 15) != *(v15 - 15) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 15) > (unsigned int)*(v15 - 15)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 15) > (unsigned int)*(v15 - 15)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 14) != *(v15 - 14) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 14) > (unsigned int)*(v15 - 14)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 14) > (unsigned int)*(v15 - 14)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 13) - *(v15 - 13);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 13) > (unsigned int)*(v15 - 13)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_141:
      if ( *((_DWORD *)v14 - 3) == *((_DWORD *)v15 - 3) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)*(v14 - 12) != *(v15 - 12) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 12) > (unsigned int)*(v15 - 12)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 12) > (unsigned int)*(v15 - 12)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 11) != *(v15 - 11) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 11) > (unsigned int)*(v15 - 11)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 11) > (unsigned int)*(v15 - 11)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 10) != *(v15 - 10) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 10) > (unsigned int)*(v15 - 10)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 10) > (unsigned int)*(v15 - 10)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 9) - *(v15 - 9);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 9) > (unsigned int)*(v15 - 9)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_152:
      v20 = *((_DWORD *)v14 - 2);
      if ( v20 == *((_DWORD *)v15 - 2) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v20 != *(v15 - 8) )
        {
          v7 = 2 * ((unsigned __int8)v20 > (unsigned int)*(v15 - 8)) - 1;
          if ( 2 * ((unsigned __int8)v20 > (unsigned int)*(v15 - 8)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 7) != *(v15 - 7) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 7) > (unsigned int)*(v15 - 7)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 7) > (unsigned int)*(v15 - 7)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 6) != *(v15 - 6) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 6) > (unsigned int)*(v15 - 6)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 6) > (unsigned int)*(v15 - 6)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 5) - *(v15 - 5);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 5) > (unsigned int)*(v15 - 5)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_163:
      v21 = *((_DWORD *)v14 - 1);
      if ( v21 == *((_DWORD *)v15 - 1) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v21 != *(v15 - 4) )
        {
          v7 = 2 * ((unsigned __int8)v21 > (unsigned int)*(v15 - 4)) - 1;
          if ( 2 * ((unsigned __int8)v21 > (unsigned int)*(v15 - 4)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 3) != *(v15 - 3) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 3) > (unsigned int)*(v15 - 3)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 3) > (unsigned int)*(v15 - 3)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 2) != *(v15 - 2) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 2) > (unsigned int)*(v15 - 2)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 2) > (unsigned int)*(v15 - 2)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 1) - *(v15 - 1);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 1) > (unsigned int)*(v15 - 1)) - 1;
      }
      if ( v7 != 0 )
        return v7;
      return 0;
    case 0x1Du:
      v23 = *(_DWORD *)(v14 - 29);
      if ( v23 == *(_DWORD *)(v15 - 29) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v23 != *(v15 - 29) )
        {
          v7 = 2 * ((unsigned __int8)v23 > (unsigned int)*(v15 - 29)) - 1;
          if ( 2 * ((unsigned __int8)v23 > (unsigned int)*(v15 - 29)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 28) != *(v15 - 28) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 28) > (unsigned int)*(v15 - 28)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 28) > (unsigned int)*(v15 - 28)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 27) != *(v15 - 27) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 27) > (unsigned int)*(v15 - 27)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 27) > (unsigned int)*(v15 - 27)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 26) - *(v15 - 26);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 26) > (unsigned int)*(v15 - 26)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_187:
      v24 = *(_DWORD *)(v14 - 25);
      if ( v24 == *(_DWORD *)(v15 - 25) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v24 != *(v15 - 25) )
        {
          v7 = 2 * ((unsigned __int8)v24 > (unsigned int)*(v15 - 25)) - 1;
          if ( 2 * ((unsigned __int8)v24 > (unsigned int)*(v15 - 25)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 24) != *(v15 - 24) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 24) > (unsigned int)*(v15 - 24)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 24) > (unsigned int)*(v15 - 24)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 23) != *(v15 - 23) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 23) > (unsigned int)*(v15 - 23)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 23) > (unsigned int)*(v15 - 23)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 22) - *(v15 - 22);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 22) > (unsigned int)*(v15 - 22)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_198:
      v25 = *(_DWORD *)(v14 - 21);
      if ( v25 == *(_DWORD *)(v15 - 21) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v25 != *(v15 - 21) )
        {
          v7 = 2 * ((unsigned __int8)v25 > (unsigned int)*(v15 - 21)) - 1;
          if ( 2 * ((unsigned __int8)v25 > (unsigned int)*(v15 - 21)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 20) != *(v15 - 20) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 20) > (unsigned int)*(v15 - 20)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 20) > (unsigned int)*(v15 - 20)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 19) != *(v15 - 19) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 19) > (unsigned int)*(v15 - 19)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 19) > (unsigned int)*(v15 - 19)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 18) - *(v15 - 18);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 18) > (unsigned int)*(v15 - 18)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_209:
      v26 = *(_DWORD *)(v14 - 17);
      if ( v26 == *(_DWORD *)(v15 - 17) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v26 != *(v15 - 17) )
        {
          v7 = 2 * ((unsigned __int8)v26 > (unsigned int)*(v15 - 17)) - 1;
          if ( 2 * ((unsigned __int8)v26 > (unsigned int)*(v15 - 17)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 16) != *(v15 - 16) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 16) > (unsigned int)*(v15 - 16)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 16) > (unsigned int)*(v15 - 16)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 15) != *(v15 - 15) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 15) > (unsigned int)*(v15 - 15)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 15) > (unsigned int)*(v15 - 15)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 14) - *(v15 - 14);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 14) > (unsigned int)*(v15 - 14)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_220:
      v27 = *(_DWORD *)(v14 - 13);
      if ( v27 == *(_DWORD *)(v15 - 13) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v27 != *(v15 - 13) )
        {
          v7 = 2 * ((unsigned __int8)v27 > (unsigned int)*(v15 - 13)) - 1;
          if ( 2 * ((unsigned __int8)v27 > (unsigned int)*(v15 - 13)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 12) != *(v15 - 12) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 12) > (unsigned int)*(v15 - 12)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 12) > (unsigned int)*(v15 - 12)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 11) != *(v15 - 11) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 11) > (unsigned int)*(v15 - 11)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 11) > (unsigned int)*(v15 - 11)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 10) - *(v15 - 10);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 10) > (unsigned int)*(v15 - 10)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_231:
      if ( *(_DWORD *)(v14 - 9) == *(_DWORD *)(v15 - 9) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)*(v14 - 9) != *(v15 - 9) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 9) > (unsigned int)*(v15 - 9)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 9) > (unsigned int)*(v15 - 9)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 8) != *(v15 - 8) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 8) > (unsigned int)*(v15 - 8)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 8) > (unsigned int)*(v15 - 8)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 7) != *(v15 - 7) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 7) > (unsigned int)*(v15 - 7)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 7) > (unsigned int)*(v15 - 7)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 6) - *(v15 - 6);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 6) > (unsigned int)*(v15 - 6)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_242:
      v28 = *(_DWORD *)(v14 - 5);
      if ( v28 == *(_DWORD *)(v15 - 5) )
      {
        v7 = 0;
        goto LABEL_252;
      }
      if ( (unsigned __int8)v28 != *(v15 - 5) )
      {
        v7 = 2 * ((unsigned __int8)v28 > (unsigned int)*(v15 - 5)) - 1;
        if ( 2 * ((unsigned __int8)v28 > (unsigned int)*(v15 - 5)) != 1 )
          return v7;
      }
      if ( (unsigned __int8)*(v14 - 4) != *(v15 - 4) )
      {
        v7 = 2 * ((unsigned __int8)*(v14 - 4) > (unsigned int)*(v15 - 4)) - 1;
        if ( 2 * ((unsigned __int8)*(v14 - 4) > (unsigned int)*(v15 - 4)) != 1 )
          return v7;
      }
      if ( (unsigned __int8)*(v14 - 3) != *(v15 - 3) )
      {
        v7 = 2 * ((unsigned __int8)*(v14 - 3) > (unsigned int)*(v15 - 3)) - 1;
        if ( 2 * ((unsigned __int8)*(v14 - 3) > (unsigned int)*(v15 - 3)) != 1 )
          return v7;
      }
      v7 = (unsigned __int8)*(v14 - 2) - *(v15 - 2);
      if ( v7 != 0 )
        v7 = 2 * ((unsigned __int8)*(v14 - 2) > (unsigned int)*(v15 - 2)) - 1;
      goto LABEL_252;
    case 0x1Eu:
      v29 = *(_DWORD *)(v14 - 30);
      if ( v29 == *(_DWORD *)(v15 - 30) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v29 != *(v15 - 30) )
        {
          v7 = 2 * ((unsigned __int8)v29 > (unsigned int)*(v15 - 30)) - 1;
          if ( 2 * ((unsigned __int8)v29 > (unsigned int)*(v15 - 30)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 29) != *(v15 - 29) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 29) > (unsigned int)*(v15 - 29)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 29) > (unsigned int)*(v15 - 29)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 28) != *(v15 - 28) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 28) > (unsigned int)*(v15 - 28)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 28) > (unsigned int)*(v15 - 28)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 27) - *(v15 - 27);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 27) > (unsigned int)*(v15 - 27)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_266:
      v30 = *(_DWORD *)(v14 - 26);
      if ( v30 == *(_DWORD *)(v15 - 26) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v30 != *(v15 - 26) )
        {
          v7 = 2 * ((unsigned __int8)v30 > (unsigned int)*(v15 - 26)) - 1;
          if ( 2 * ((unsigned __int8)v30 > (unsigned int)*(v15 - 26)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 25) != *(v15 - 25) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 25) > (unsigned int)*(v15 - 25)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 25) > (unsigned int)*(v15 - 25)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 24) != *(v15 - 24) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 24) > (unsigned int)*(v15 - 24)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 24) > (unsigned int)*(v15 - 24)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 23) - *(v15 - 23);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 23) > (unsigned int)*(v15 - 23)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_277:
      v31 = *(_DWORD *)(v14 - 22);
      if ( v31 == *(_DWORD *)(v15 - 22) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v31 != *(v15 - 22) )
        {
          v7 = 2 * ((unsigned __int8)v31 > (unsigned int)*(v15 - 22)) - 1;
          if ( 2 * ((unsigned __int8)v31 > (unsigned int)*(v15 - 22)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 21) != *(v15 - 21) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 21) > (unsigned int)*(v15 - 21)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 21) > (unsigned int)*(v15 - 21)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 20) != *(v15 - 20) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 20) > (unsigned int)*(v15 - 20)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 20) > (unsigned int)*(v15 - 20)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 19) - *(v15 - 19);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 19) > (unsigned int)*(v15 - 19)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_288:
      v32 = *(_DWORD *)(v14 - 18);
      if ( v32 == *(_DWORD *)(v15 - 18) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v32 != *(v15 - 18) )
        {
          v7 = 2 * ((unsigned __int8)v32 > (unsigned int)*(v15 - 18)) - 1;
          if ( 2 * ((unsigned __int8)v32 > (unsigned int)*(v15 - 18)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 17) != *(v15 - 17) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 17) > (unsigned int)*(v15 - 17)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 17) > (unsigned int)*(v15 - 17)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 16) != *(v15 - 16) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 16) > (unsigned int)*(v15 - 16)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 16) > (unsigned int)*(v15 - 16)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 15) - *(v15 - 15);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 15) > (unsigned int)*(v15 - 15)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_299:
      v33 = *(_DWORD *)(v14 - 14);
      if ( v33 == *(_DWORD *)(v15 - 14) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v33 != *(v15 - 14) )
        {
          v7 = 2 * ((unsigned __int8)v33 > (unsigned int)*(v15 - 14)) - 1;
          if ( 2 * ((unsigned __int8)v33 > (unsigned int)*(v15 - 14)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 13) != *(v15 - 13) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 13) > (unsigned int)*(v15 - 13)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 13) > (unsigned int)*(v15 - 13)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 12) != *(v15 - 12) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 12) > (unsigned int)*(v15 - 12)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 12) > (unsigned int)*(v15 - 12)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 11) - *(v15 - 11);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 11) > (unsigned int)*(v15 - 11)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_310:
      if ( *(_DWORD *)(v14 - 10) == *(_DWORD *)(v15 - 10) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)*(v14 - 10) != *(v15 - 10) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 10) > (unsigned int)*(v15 - 10)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 10) > (unsigned int)*(v15 - 10)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 9) != *(v15 - 9) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 9) > (unsigned int)*(v15 - 9)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 9) > (unsigned int)*(v15 - 9)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 8) != *(v15 - 8) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 8) > (unsigned int)*(v15 - 8)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 8) > (unsigned int)*(v15 - 8)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 7) - *(v15 - 7);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 7) > (unsigned int)*(v15 - 7)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_321:
      v34 = *(_DWORD *)(v14 - 6);
      if ( v34 == *(_DWORD *)(v15 - 6) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v34 != *(v15 - 6) )
        {
          v7 = 2 * ((unsigned __int8)v34 > (unsigned int)*(v15 - 6)) - 1;
          if ( 2 * ((unsigned __int8)v34 > (unsigned int)*(v15 - 6)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 5) != *(v15 - 5) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 5) > (unsigned int)*(v15 - 5)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 5) > (unsigned int)*(v15 - 5)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 4) != *(v15 - 4) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 4) > (unsigned int)*(v15 - 4)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 4) > (unsigned int)*(v15 - 4)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 3) - *(v15 - 3);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 3) > (unsigned int)*(v15 - 3)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_332:
      if ( *((_WORD *)v14 - 1) == *((_WORD *)v15 - 1) )
        return 0;
      goto LABEL_413;
    case 0x1Fu:
      if ( *(_DWORD *)(v14 - 31) == *(_DWORD *)(v15 - 31) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)*(v14 - 31) != *(v15 - 31) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 31) > (unsigned int)*(v15 - 31)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 31) > (unsigned int)*(v15 - 31)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 30) != *(v15 - 30) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 30) > (unsigned int)*(v15 - 30)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 30) > (unsigned int)*(v15 - 30)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 29) != *(v15 - 29) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 29) > (unsigned int)*(v15 - 29)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 29) > (unsigned int)*(v15 - 29)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 28) - *(v15 - 28);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 28) > (unsigned int)*(v15 - 28)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_345:
      v35 = *(_DWORD *)(v14 - 27);
      if ( v35 == *(_DWORD *)(v15 - 27) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v35 != *(v15 - 27) )
        {
          v7 = 2 * ((unsigned __int8)v35 > (unsigned int)*(v15 - 27)) - 1;
          if ( 2 * ((unsigned __int8)v35 > (unsigned int)*(v15 - 27)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 26) != *(v15 - 26) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 26) > (unsigned int)*(v15 - 26)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 26) > (unsigned int)*(v15 - 26)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 25) != *(v15 - 25) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 25) > (unsigned int)*(v15 - 25)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 25) > (unsigned int)*(v15 - 25)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 24) - *(v15 - 24);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 24) > (unsigned int)*(v15 - 24)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_356:
      v36 = *(_DWORD *)(v14 - 23);
      if ( v36 == *(_DWORD *)(v15 - 23) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v36 != *(v15 - 23) )
        {
          v7 = 2 * ((unsigned __int8)v36 > (unsigned int)*(v15 - 23)) - 1;
          if ( 2 * ((unsigned __int8)v36 > (unsigned int)*(v15 - 23)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 22) != *(v15 - 22) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 22) > (unsigned int)*(v15 - 22)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 22) > (unsigned int)*(v15 - 22)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 21) != *(v15 - 21) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 21) > (unsigned int)*(v15 - 21)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 21) > (unsigned int)*(v15 - 21)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 20) - *(v15 - 20);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 20) > (unsigned int)*(v15 - 20)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_367:
      v37 = *(_DWORD *)(v14 - 19);
      if ( v37 == *(_DWORD *)(v15 - 19) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v37 != *(v15 - 19) )
        {
          v7 = 2 * ((unsigned __int8)v37 > (unsigned int)*(v15 - 19)) - 1;
          if ( 2 * ((unsigned __int8)v37 > (unsigned int)*(v15 - 19)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 18) != *(v15 - 18) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 18) > (unsigned int)*(v15 - 18)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 18) > (unsigned int)*(v15 - 18)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 17) != *(v15 - 17) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 17) > (unsigned int)*(v15 - 17)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 17) > (unsigned int)*(v15 - 17)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 16) - *(v15 - 16);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 16) > (unsigned int)*(v15 - 16)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_378:
      if ( *(_DWORD *)(v14 - 15) == *(_DWORD *)(v15 - 15) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)*(v14 - 15) != *(v15 - 15) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 15) > (unsigned int)*(v15 - 15)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 15) > (unsigned int)*(v15 - 15)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 14) != *(v15 - 14) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 14) > (unsigned int)*(v15 - 14)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 14) > (unsigned int)*(v15 - 14)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 13) != *(v15 - 13) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 13) > (unsigned int)*(v15 - 13)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 13) > (unsigned int)*(v15 - 13)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 12) - *(v15 - 12);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 12) > (unsigned int)*(v15 - 12)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_389:
      v38 = *(_DWORD *)(v14 - 11);
      if ( v38 == *(_DWORD *)(v15 - 11) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v38 != *(v15 - 11) )
        {
          v7 = 2 * ((unsigned __int8)v38 > (unsigned int)*(v15 - 11)) - 1;
          if ( 2 * ((unsigned __int8)v38 > (unsigned int)*(v15 - 11)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 10) != *(v15 - 10) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 10) > (unsigned int)*(v15 - 10)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 10) > (unsigned int)*(v15 - 10)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 9) != *(v15 - 9) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 9) > (unsigned int)*(v15 - 9)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 9) > (unsigned int)*(v15 - 9)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 8) - *(v15 - 8);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 8) > (unsigned int)*(v15 - 8)) - 1;
      }
      if ( v7 != 0 )
        return v7;
LABEL_400:
      v39 = *(_DWORD *)(v14 - 7);
      if ( v39 == *(_DWORD *)(v15 - 7) )
      {
        v7 = 0;
      }
      else
      {
        if ( (unsigned __int8)v39 != *(v15 - 7) )
        {
          v7 = 2 * ((unsigned __int8)v39 > (unsigned int)*(v15 - 7)) - 1;
          if ( 2 * ((unsigned __int8)v39 > (unsigned int)*(v15 - 7)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 6) != *(v15 - 6) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 6) > (unsigned int)*(v15 - 6)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 6) > (unsigned int)*(v15 - 6)) != 1 )
            return v7;
        }
        if ( (unsigned __int8)*(v14 - 5) != *(v15 - 5) )
        {
          v7 = 2 * ((unsigned __int8)*(v14 - 5) > (unsigned int)*(v15 - 5)) - 1;
          if ( 2 * ((unsigned __int8)*(v14 - 5) > (unsigned int)*(v15 - 5)) != 1 )
            return v7;
        }
        v7 = (unsigned __int8)*(v14 - 4) - *(v15 - 4);
        if ( v7 != 0 )
          v7 = 2 * ((unsigned __int8)*(v14 - 4) > (unsigned int)*(v15 - 4)) - 1;
      }
      if ( v7 == 0 )
      {
LABEL_411:
        if ( (unsigned __int8)*(v14 - 3) == *(v15 - 3)
          || (v7 = 2 * ((unsigned __int8)*(v14 - 3) > (unsigned int)*(v15 - 3)) - 1,
              2 * ((unsigned __int8)*(v14 - 3) > (unsigned int)*(v15 - 3)) == 1) )
        {
LABEL_413:
          if ( (unsigned __int8)*(v14 - 2) == *(v15 - 2) )
            goto LABEL_253;
          v7 = 2 * ((unsigned __int8)*(v14 - 2) > (unsigned int)*(v15 - 2)) - 1;
LABEL_252:
          if ( v7 == 0 )
          {
LABEL_253:
            v7 = (unsigned __int8)*(v14 - 1) - *(v15 - 1);
            if ( v7 != 0 )
              v7 = 2 * ((unsigned __int8)*(v14 - 1) > (unsigned int)*(v15 - 1)) - 1;
          }
        }
      }
      break;
    default:
      return 0;
  }
  return v7;
}

// Address: 0x1001154D
FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, _DWORD *a3, _DWORD *a4)
{
  volatile signed __int32 *v4; // ebx
  signed __int32 v5; // eax
  uintptr_t v6; // edx
  FARPROC v7; // esi
  _DWORD *v9; // esi
  HMODULE module; // eax
  FARPROC ProcAddress; // eax

  v4 = (volatile signed __int32 *)((char *)&unk_10040C34 + 4 * a1);
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
        _InterlockedExchange(v4, unknown_libname_6((int)ProcAddress));
        return v7;
      }
      v6 = __security_cookie;
    }
    _InterlockedExchange(v4, v6 ^ __ROR4__(-1, 32 - (v6 & 0x1F)));
  }
  return nullptr;
}

// Address: 0x100115ED
HMODULE __cdecl try_get_module(int a1)
{
  volatile signed __int32 *v1; // edi
  signed __int32 v2; // eax
  const WCHAR *v4; // ebx
  HMODULE Library; // esi

  v1 = (volatile signed __int32 *)((char *)&unk_10040C24 + 4 * a1);
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

// Address: 0x1001166E
DWORD __cdecl __vcrt_FlsAlloc(int a1)
{
  FARPROC function; // eax

  function = try_get_function(4, "FlsAlloc", dword_10030958, dword_10030960);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int))function)(function, a1);
  else
    return TlsAlloc();
}

// Address: 0x100116A8
int __cdecl __vcrt_FlsFree(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(5, "FlsFree", dword_10030960, dword_10030968);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}

// Address: 0x100116E2
LPVOID __cdecl __vcrt_FlsGetValue(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(6, "FlsGetValue", dword_10030968, dword_10030970);
  if ( function != nullptr )
    return (LPVOID)((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}

// Address: 0x1001171C
int __cdecl __vcrt_FlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC function; // eax

  function = try_get_function(7, "FlsSetValue", dword_10030970, dword_10030978);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD, LPVOID))function)(function, dwTlsIndex, lpTlsValue);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x10011759
int __cdecl __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC function; // eax

  function = try_get_function(8, "InitializeCriticalSectionEx", dword_10030978, off_10030980);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))function)(
             function,
             lpCriticalSection,
             dwSpinCount,
             a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x1001179F
uintptr_t *__vcrt_initialize_winapi_thunks()
{
  uintptr_t *result; // eax
  int v1; // ecx
  uintptr_t v2; // esi

  result = (uintptr_t *)&unk_10040C34;
  v1 = 0;
  v2 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  do
  {
    ++v1;
    *result++ = v2;
  }
  while ( v1 != (&unk_10040C58 < &unk_10040C34 ? 0 : 9) );
  return result;
}

// Address: 0x100117D9
BOOL __cdecl __vcrt_uninitialize_winapi_thunks(char a1)
{
  HMODULE *v1; // esi
  BOOL result; // eax

  if ( a1 == 0 )
  {
    v1 = (HMODULE *)&unk_10040C24;
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
    while ( v1 != (HMODULE *)&unk_10040C34 );
  }
  return result;
}

// Address: 0x1001180B
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

// Address: 0x10011834
__vcrt_bool __cdecl __vcrt_thread_attach()
{
  return __vcrt_getptd_noexit() != 0;
}

// Address: 0x1001183F
__vcrt_bool __cdecl __vcrt_thread_detach()
{
  __vcrt_freeptd(nullptr);
  return true;
}

// Address: 0x1001184A
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

// Address: 0x10011869
__vcrt_bool __cdecl __vcrt_uninitialize_critical()
{
  __vcrt_uninitialize_ptd();
  return true;
}

// Address: 0x10011880
int __cdecl ValidateLocalCookies(int a1)
{
  return *(_DWORD *)(a1 + 8);
}

// Address: 0x100118C0
int __cdecl _except_handler4(PEXCEPTION_RECORD ExceptionRecord, _DWORD *TargetFrame, int a3)
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
              if ( _IsNonwritableInCurrentImage(&off_10030868) != 0 )
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

// Address: 0x10011A26
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

// Address: 0x10011A62
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

// Address: 0x10011A85
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

// Address: 0x10011AA1
void __stdcall __vcrt_freefls(void *Block)
{
  if ( Block != nullptr && Block != &unk_10040C58 )
    _free_base(Block);
}

// Address: 0x10011ABD
void __cdecl __vcrt_freeptd(void *Block)
{
  DWORD v1; // eax
  void *Value; // esi

  v1 = dword_1003F110;
  if ( dword_1003F110 != -1 )
  {
    Value = Block;
    if ( Block == nullptr )
    {
      Value = __vcrt_FlsGetValue(dword_1003F110);
      v1 = dword_1003F110;
    }
    __vcrt_FlsSetValue(v1, nullptr);
    __vcrt_freefls(Value);
  }
}

// Address: 0x10011AF3
int __cdecl __vcrt_getptd()
{
  int result; // eax

  result = __vcrt_getptd_noexit();
  if ( result == 0 )
    abort();
  return result;
}

// Address: 0x10011B01
void *__vcrt_getptd_noexit()
{
  DWORD LastError; // edi
  LPVOID Value; // eax
  void *v3; // ebx
  void *v4; // eax
  void *v5; // esi

  if ( dword_1003F110 == -1 )
    return nullptr;
  LastError = GetLastError();
  Value = __vcrt_FlsGetValue(dword_1003F110);
  v3 = Value;
  if ( Value == (LPVOID)-1 )
  {
LABEL_6:
    v3 = nullptr;
    goto LABEL_12;
  }
  if ( Value == nullptr )
  {
    if ( __vcrt_FlsSetValue(dword_1003F110, (LPVOID)0xFFFFFFFF) != 0 )
    {
      v4 = _calloc_base(1u, 0x28u);
      v5 = v4;
      if ( v4 != nullptr && __vcrt_FlsSetValue(dword_1003F110, v4) != 0 )
      {
        v3 = v5;
        v5 = nullptr;
      }
      else
      {
        v3 = nullptr;
        __vcrt_FlsSetValue(dword_1003F110, nullptr);
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

// Address: 0x10011B93
char __vcrt_initialize_ptd()
{
  DWORD v0; // eax

  v0 = __vcrt_FlsAlloc((int)__vcrt_freefls);
  dword_1003F110 = v0;
  if ( v0 == -1 )
    return 0;
  if ( __vcrt_FlsSetValue(v0, &unk_10040C58) == 0 )
  {
    __vcrt_uninitialize_ptd();
    return 0;
  }
  return 1;
}

// Address: 0x10011BC6
char __vcrt_uninitialize_ptd()
{
  if ( dword_1003F110 != -1 )
  {
    __vcrt_FlsFree(dword_1003F110);
    dword_1003F110 = -1;
  }
  return 1;
}

// Address: 0x10011BF0
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

// Address: 0x10011C3C
uintptr_t __vcrt_initialize_pure_virtual_call_handler()
{
  uintptr_t result; // eax

  result = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  dword_10040C80 = result;
  return result;
}

// Address: 0x10011C59
char __vcrt_initialize_locks()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_10040C84;
  v1 = 0;
  while ( __vcrt_InitializeCriticalSectionEx(v0, 0xFA0u, 0) != 0 )
  {
    ++dword_10040C9C;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x18 )
      return 1;
  }
  __vcrt_uninitialize_locks();
  return 0;
}

// Address: 0x10011C95
char __vcrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_10040C9C;
  if ( dword_10040C9C != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_10040C6C + 24 * dword_10040C9C);
    do
    {
      DeleteCriticalSection(v1);
      --dword_10040C9C;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

// Address: 0x10011CD0
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

// Address: 0x10011D60
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

// Address: 0x10011DA6
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x10011DCE
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x10011DE5
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x10011DFE
void __fastcall _EH4_GlobalUnwind2(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &ReturnPoint, ExceptionRecord, nullptr);
}

// Address: 0x10011E17
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x10011E30
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x10011E50
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

// Address: 0x10011E95
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

// Address: 0x10011F19
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

// Address: 0x10011F3C
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x10011F50);
}

// Address: 0x10011F45
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_1003F128 = a3;
  unk_1003F124 = result;
  unk_1003F12C = a2;
  return result;
}

// Address: 0x10011F64
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x10011F67
int __cdecl sub_10011F67(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  _BYTE *v8; // edi
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
  unknown_libname_16(&v17, a1, a2, a5, v12, a7);
  v9 = sub_10012B3F(v18);
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

// Address: 0x100120E3
int __cdecl sub_100120E3(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  _BYTE *v8; // edi
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
  unknown_libname_16(&v17, a1, a2, a5, v12, a7);
  v9 = sub_10012C67(v18);
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

// Address: 0x1001225F
int __cdecl sub_1001225F(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
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
  unknown_libname_17(&v17, a1, a2, a5, v12, a7);
  v9 = sub_10012D83(v18);
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

// Address: 0x100123E4
int __cdecl common_vsprintf_s<char>(
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
  result = sub_10011F67(a1, a2, a3, a4, a5, a6, a7);
  if ( result < 0 )
    *(_BYTE *)a3 = 0;
  if ( result == -2 )
  {
    *_errno() = 34;
LABEL_10:
    _invalid_parameter_noinfo();
    return -1;
  }
  return result;
}

// Address: 0x1001245C
int __thiscall __crt_stdio_output::formatting_buffer::count<char>(_DWORD *this)
{
  if ( *(this + 257) != 0 )
    return *(this + 256) >> 1;
  else
    return 512;
}

// Address: 0x10012474
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
        unknown_libname_18(&v7);
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

// Address: 0x100124FA
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

// Address: 0x1001253A
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

// Address: 0x10012589
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

// Address: 0x100125A7
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_12(int *this, unsigned int a2, unsigned int a3, char a4)
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

// Address: 0x1001261C
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_13(int *this, unsigned int a2, unsigned int a3, unsigned int a4, char a5)
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

// Address: 0x100126A4
int __cdecl __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<char>,char>(
        int a1,
        char a2,
        int a3,
        _DWORD *a4)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < a3; ++i )
  {
    result = __crt_stdio_output::string_output_adapter<char>::write_character(a2, a4);
    if ( *a4 == -1 )
      break;
  }
  return result;
}

// Address: 0x100126D0
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

// Address: 0x10012701
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

// Address: 0x10012748
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

// Address: 0x10012794
// Microsoft VisualC universal runtime
_DWORD *__thiscall unknown_libname_14(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
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

// Address: 0x100127D0
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_15(int this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
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

// Address: 0x1001280C
// Microsoft VisualC universal runtime
_DWORD *__thiscall unknown_libname_16(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  unknown_libname_14(this, a2, a3, a4, a5, a6, a7);
  *(this + 276) = 0;
  *(this + 3) = _errno();
  return this;
}

// Address: 0x10012841
// Microsoft VisualC universal runtime
_DWORD *__thiscall unknown_libname_17(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  unknown_libname_15((int)this, a2, a3, a4, a5, a6, a7);
  *(this + 276) = 0;
  *(this + 3) = _errno();
  return this;
}

// Address: 0x10012876
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
  if ( dword_10040F84 == 0 )
  {
    *((_DWORD *)this + 1) = off_1003F318;
    mbcinfo = (struct __crt_multibyte_data *)off_1003F31C;
    goto LABEL_5;
  }
  v4 = __acrt_getptd();
  *(_DWORD *)this = v4;
  *((_DWORD *)this + 1) = *(_DWORD *)(v4 + 76);
  *((_DWORD *)this + 2) = *(_DWORD *)(v4 + 72);
  sub_10019BE2(v4, (char *)this + 4);
  sub_10019C0F(*(_DWORD *)this, (char *)this + 8);
  v5 = *(_DWORD *)(*(_DWORD *)this + 848);
  if ( (v5 & 2) == 0 )
  {
    *(_DWORD *)(*(_DWORD *)this + 848) = v5 | 2;
    *((_BYTE *)this + 12) = 1;
  }
  return this;
}

// Address: 0x100128F9
void __thiscall __crt_stdio_output::formatting_buffer::~formatting_buffer(void **this)
{
  _free_base(*(this + 257));
  *(this + 257) = nullptr;
}

// Address: 0x10012913
// Microsoft VisualC universal runtime
void **__thiscall unknown_libname_18(void **this, void **a2)
{
  _free_base(*this);
  *this = nullptr;
  *this = *a2;
  *a2 = nullptr;
  return this;
}

// Address: 0x10012937
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

// Address: 0x1001298E
// Microsoft VisualC universal runtime
int __stdcall unknown_libname_19(char a1, int a2)
{
  int v2; // eax

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_10031118[a1] & 0xF;
  return (unsigned __int8)byte_10031138[9 * v2 + a2] >> 4;
}

// Address: 0x100129C3
// Microsoft VisualC universal runtime
int __stdcall unknown_libname_20(char a1, int a2)
{
  int v2; // ecx

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100310B8[a1] & 0xF;
  return (unsigned __int8)byte_100310D8[8 * v2 + a2] >> 4;
}

// Address: 0x100129F5
// Microsoft VisualC universal runtime
int __stdcall unknown_libname_21(unsigned __int16 a1, int a2)
{
  int v2; // ecx

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100310B8[a1] & 0xF;
  return (unsigned __int8)byte_100310D8[8 * v2 + a2] >> 4;
}

// Address: 0x10012A29
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

// Address: 0x10012A85
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_22(int **this, int *a2)
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

// Address: 0x10012AE1
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_23(int **this, int *a2)
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

// Address: 0x10012B3F
int __thiscall sub_10012B3F(int this)
{
  int v3; // eax
  char v4; // al
  char v5; // al

  if ( (unsigned __int8)unknown_libname_37(this + 1096) == 0 )
    return -1;
  if ( *(_DWORD *)(this + 16) != 0 )
  {
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
        v3 = unknown_libname_19(*(_BYTE *)(this + 49), *(_DWORD *)(this + 28));
        *(_DWORD *)(this + 28) = v3;
        if ( v3 == 8 )
          goto LABEL_4;
        switch ( v3 )
        {
          case 0:
            v4 = sub_10012F1D(this);
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
            v4 = unknown_libname_24(this);
            break;
          case 3:
            v4 = sub_100137C3(this);
            break;
          case 4:
            *(_DWORD *)(this + 40) = 0;
            continue;
          case 5:
            v4 = sub_10013001(this);
            break;
          case 6:
            v4 = sub_10013052(this);
            break;
          case 7:
            v4 = sub_10013337(this);
            break;
          default:
            return -1;
        }
        if ( v4 == 0 )
          return -1;
      }
      ++*(_DWORD *)(this + 16);
LABEL_21:
      if ( (unsigned __int8)unknown_libname_38(this) == 0 )
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

// Address: 0x10012C67
int __thiscall sub_10012C67(int this)
{
  int v3; // eax
  char v4; // al
  char v5; // al

  if ( (unsigned __int8)unknown_libname_37(this + 1096) == 0 )
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
        v3 = unknown_libname_20(*(_BYTE *)(this + 49), *(_DWORD *)(this + 28));
        *(_DWORD *)(this + 28) = v3;
        if ( v3 == 8 )
          goto LABEL_4;
        switch ( v3 )
        {
          case 0:
            v4 = sub_10012F1D(this);
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
            v4 = unknown_libname_24(this);
            break;
          case 3:
            v4 = sub_100137C3(this);
            break;
          case 4:
            *(_DWORD *)(this + 40) = 0;
            continue;
          case 5:
            v4 = sub_10013001(this);
            break;
          case 6:
            v4 = sub_10013052(this);
            break;
          case 7:
            v4 = sub_10013337(this);
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

// Address: 0x10012D83
int __thiscall sub_10012D83(int this)
{
  int v3; // eax
  char v4; // al
  __int16 v5; // ax

  if ( (unsigned __int8)unknown_libname_37(this + 1096) == 0 )
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
        v3 = unknown_libname_21(*(_WORD *)(this + 50), *(_DWORD *)(this + 28));
        *(_DWORD *)(this + 28) = v3;
        if ( v3 == 8 )
          goto LABEL_4;
        switch ( v3 )
        {
          case 0:
            v4 = sub_10012F3C(this);
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
            v4 = unknown_libname_25(this);
            break;
          case 3:
            v4 = sub_100137EE(this);
            break;
          case 4:
            *(_DWORD *)(this + 40) = 0;
            continue;
          case 5:
            v4 = sub_10013029(this);
            break;
          case 6:
            v4 = sub_100131BB(this);
            break;
          case 7:
            v4 = sub_10013566(this);
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

// Address: 0x10012EA3
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_24(int this)
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

// Address: 0x10012EE0
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_25(int this)
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

// Address: 0x10012F1D
char sub_10012F1D()
{
  if ( (unsigned __int8)sub_10012F5B() != 0 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x10012F3C
char sub_10012F3C()
{
  if ( (unsigned __int8)unknown_libname_26() != 0 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x10012F5B
char __thiscall sub_10012F5B(char *this)
{
  char result; // al

  result = unknown_libname_27(0);
  if ( result != 0 )
  {
    __crt_stdio_output::string_output_adapter<char>::write_character(*(this + 49), this + 24);
    return 1;
  }
  return result;
}

// Address: 0x10012F85
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_26(int this)
{
  *(_BYTE *)(this + 60) = 1;
  __crt_stdio_output::string_output_adapter<wchar_t>::write_character(*(_WORD *)(this + 50), this + 24);
  return 1;
}

// Address: 0x10012FA0
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_27(int this, int a2)
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
  __crt_stdio_output::string_output_adapter<char>::write_character(v4, this + 24);
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

// Address: 0x10013001
char __thiscall sub_10013001(int this)
{
  int v2; // eax

  if ( *(_BYTE *)(this + 49) != 42 )
    return unknown_libname_22((int **)this, (int *)(this + 40));
  *(_DWORD *)(this + 20) += 4;
  v2 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *(_DWORD *)(this + 40) = v2;
  if ( v2 < 0 )
    *(_DWORD *)(this + 40) = -1;
  return 1;
}

// Address: 0x10013029
char __thiscall sub_10013029(int this)
{
  int v2; // eax

  if ( *(_WORD *)(this + 50) != 42 )
    return unknown_libname_23((int **)this, (int *)(this + 40));
  *(_DWORD *)(this + 20) += 4;
  v2 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *(_DWORD *)(this + 40) = v2;
  if ( v2 < 0 )
    *(_DWORD *)(this + 40) = -1;
  return 1;
}

// Address: 0x10013052
char __thiscall sub_10013052(_BYTE *this)
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
      return sub_10013337(this);
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

// Address: 0x100131BB
char __thiscall sub_100131BB(_DWORD *this)
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
      return sub_10013566(this);
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

// Address: 0x10013337
char __thiscall sub_10013337(int this)
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
  __int16 Src; // [esp+8h] [ebp-4h] BYREF
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
          v4 = unknown_libname_28(this);
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
                v4 = unknown_libname_35(this);
                goto LABEL_11;
              }
              return 0;
            }
            goto LABEL_31;
          }
LABEL_18:
          v4 = unknown_libname_32(0);
          goto LABEL_11;
        }
LABEL_31:
        v4 = unknown_libname_30(this);
        goto LABEL_11;
      }
      v16 = 1;
LABEL_14:
      v4 = sub_10013D30(16, v16);
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
    v4 = sub_10013F0D(this);
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
      v4 = sub_10013D30(10, 0);
      break;
    case 'n':
      v4 = unknown_libname_34(this);
      break;
    case 'o':
      v4 = sub_10013EEE(this);
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
  Src = 0;
  v11 = 0;
  v18 = 0;
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      LOBYTE(Src) = 45;
LABEL_46:
      v11 = 1;
      goto LABEL_47;
    }
    if ( (v10 & 1) != 0 )
    {
      LOBYTE(Src) = 43;
      goto LABEL_46;
    }
    if ( (v10 & 2) != 0 )
    {
      LOBYTE(Src) = 32;
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
    *((_BYTE *)&Src + v11) = 48;
    v14 = v12 == 88 || v12 == 65;
    *((_BYTE *)&Src + v11 + 1) = !v14 ? 120 : 88;
    v11 += 2;
  }
  v15 = *(_DWORD *)(this + 36) - *(_DWORD *)(this + 56) - v11;
  if ( (v10 & 0xC) == 0 )
    __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<char>,char>(
      this + 1096,
      32,
      v15,
      (_DWORD *)(this + 24));
  __crt_stdio_output::string_output_adapter<char>::write_string(&Src, v11, this + 24, *(_DWORD *)(this + 12));
  if ( (*(_DWORD *)(this + 32) & 8) != 0 && (*(_DWORD *)(this + 32) & 4) == 0 )
    __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<char>,char>(
      this + 1096,
      48,
      v15,
      (_DWORD *)(this + 24));
  unknown_libname_39(0);
  if ( *(int *)(this + 24) >= 0 && (*(_DWORD *)(this + 32) & 4) != 0 )
    __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<char>,char>(
      this + 1096,
      32,
      v15,
      (_DWORD *)(this + 24));
  return 1;
}

// Address: 0x10013566
char __thiscall sub_10013566(int this)
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
          v4 = unknown_libname_29(this);
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
                v4 = sub_10013F98(this);
                goto LABEL_11;
              }
              return 0;
            }
            goto LABEL_31;
          }
LABEL_18:
          v4 = unknown_libname_33(0);
          goto LABEL_11;
        }
LABEL_31:
        v4 = unknown_libname_31(this);
        goto LABEL_11;
      }
      v17 = 1;
LABEL_14:
      v4 = sub_10013D30(16, v17);
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
    v4 = sub_10013F0D(this);
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
      v4 = sub_10013D30(10, 0);
      break;
    case 'n':
      v4 = unknown_libname_34(this);
      break;
    case 'o':
      v4 = sub_10013EEE(this);
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
    unknown_libname_40(0);
    if ( *(int *)(this + 24) >= 0 && (*(_DWORD *)(this + 32) & 4) != 0 )
      __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>(
        this + 1096,
        32,
        v15,
        (_DWORD *)(this + 24));
  }
  return 1;
}

// Address: 0x100137C3
char __thiscall sub_100137C3(int this)
{
  int v2; // eax

  if ( *(_BYTE *)(this + 49) != 42 )
    return unknown_libname_22((int **)this, (int *)(this + 36));
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

// Address: 0x100137EE
char __thiscall sub_100137EE(int this)
{
  int v2; // eax

  if ( *(_WORD *)(this + 50) != 42 )
    return unknown_libname_23((int **)this, (int *)(this + 36));
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

// Address: 0x1001381A
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

// Address: 0x10013876
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_28(int this)
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

// Address: 0x100138D9
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_29(void *this)
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

// Address: 0x1001393C
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_30(char *this)
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

// Address: 0x10013A96
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_31(unsigned __int16 *this)
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

// Address: 0x10013C08
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_32(int this, int a2)
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

// Address: 0x10013C98
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_33(char *this, int a2)
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

// Address: 0x10013D30
char __thiscall sub_10013D30(int *this, unsigned int a2, char a3)
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
    unknown_libname_13(this, v7, HIDWORD(v8), a2, a3);
  else
    unknown_libname_12(this, v7, a2, a3);
  if ( (*(this + 8) & 0x80) != 0 && (*(this + 14) == 0 || *(_BYTE *)*(this + 13) != 48) )
  {
    *(_BYTE *)--*(this + 13) = 48;
    ++*(this + 14);
  }
  return 1;
}

// Address: 0x10013E7A
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_34(int this)
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

// Address: 0x10013EEE
char __thiscall sub_10013EEE(int *this)
{
  if ( (*(this + 8) & 0x20) != 0 )
    *(this + 8) |= 0x80u;
  return sub_10013D30(this, 8u, 0);
}

// Address: 0x10013F0D
char __thiscall sub_10013F0D(int *this)
{
  *(this + 10) = 8;
  *(this + 11) = 10;
  return sub_10013D30(this, 0x10u, 1);
}

// Address: 0x10013F25
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_35(int this)
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

// Address: 0x10013F98
char __thiscall sub_10013F98(void *this)
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
    v4 = unknown_libname_36(v2, 0);
  }
  *((_DWORD *)this + 14) = v4;
  return 1;
}

// Address: 0x1001400C
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_36(int this, int a2, int a3)
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

// Address: 0x1001404C
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_37(_DWORD *this)
{
  if ( *this != 0 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x10014067
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_38(_DWORD *this)
{
  if ( *(this + 7) == 0 || *(this + 7) == 7 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x10014089
char __thiscall __crt_stdio_output::string_output_adapter<char>::write_character(int *this, char a2, _DWORD *a3)
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
    *(_BYTE *)(*(_DWORD *)*this)++ = a2;
    return 1;
  }
}

// Address: 0x100140CB
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

// Address: 0x10014110
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_39(int this, int a2)
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
      __crt_stdio_output::string_output_adapter<char>::write_string(
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
    __crt_stdio_output::string_output_adapter<char>::write_string(
      *(void **)(this + 52),
      *(_DWORD *)(this + 56),
      this + 24,
      *(_DWORD *)(this + 12));
  }
  return 1;
}

// Address: 0x100141B7
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_40(int this, int a2)
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

// Address: 0x10014242
_DWORD *__thiscall __crt_stdio_output::string_output_adapter<char>::write_string(
        void *this,
        void *Src,
        unsigned int a3,
        _DWORD *a4,
        int *a5)
{
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // esi
  _DWORD *result; // eax
  size_t v10; // esi
  int v12; // [esp+Ch] [ebp-4h]

  v6 = *a5;
  *a5 = 0;
  v7 = *(_DWORD **)this;
  v12 = v6;
  v8 = v7[1];
  if ( v7[2] == v8 )
  {
    if ( *((_BYTE *)v7 + 12) == 0 )
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
    v10 = v8 - v7[2];
    if ( v10 >= a3 )
      v10 = a3;
    memmove_0((void *)*v7, Src, v10);
    **(_DWORD **)this += v10;
    *(_DWORD *)(*(_DWORD *)this + 8) += v10;
    result = a4;
    if ( *(_BYTE *)(*(_DWORD *)this + 12) != 0 )
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

// Address: 0x100142D5
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

// Address: 0x1001436F
int __cdecl sub_1001436F(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  return sub_100120E3(a1, a2, a3, a4, a5, a6, a7);
}

// Address: 0x10014393
int __cdecl __stdio_common_vsprintf_s(
        unsigned __int64 Options,
        char *Buffer,
        size_t BufferCount,
        const char *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return common_vsprintf_s<char>(Options, SHIDWORD(Options), Buffer, BufferCount, (int)Format, Locale, (int)ArgList);
}

// Address: 0x100143B7
int __cdecl sub_100143B7(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  return sub_1001225F(a1, a2, a3, a4, a5, a6, a7);
}

// Address: 0x100143DB
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
    sub_1000D8E3();
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
    sub_1000D8E3();
}

// Address: 0x10014516
int __cdecl sub_10014516(int a1)
{
  return unknown_libname_55(a1);
}

// Address: 0x1001452A
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
                                                                                      dword_10040CDC ^ __security_cookie,
                                                                                      __security_cookie & 0x1F);
    v9 = FunctionName;
    v8 = Expression;
    if ( v6 == nullptr )
      _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v6(v8, v9, v10, v11, v12);
}

// Address: 0x100145A5
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x100145B5
void __cdecl __noreturn _invalid_parameter_noinfo_noreturn()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x100145D2
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

// Address: 0x10014605
int __cdecl _fputc_nolock(int Character, FILE *Stream)
{
  if ( (int)--Stream->_base < 0 )
    return __acrt_stdio_flush_and_write_narrow_nolock(Character, Stream);
  *Stream->_ptr++ = Character;
  return (unsigned __int8)Character;
}

// Address: 0x1001462E
int __cdecl fputc(int Character, FILE *Stream)
{
  int v3; // eax
  int v4; // edx
  struct _RTL_CRITICAL_SECTION *v5; // eax
  struct _RTL_CRITICAL_SECTION *v6; // ecx
  int v7; // [esp+10h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h] BYREF

  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _lock_file(Stream);
  ms_exc.registration.TryLevel = 0;
  if ( (Stream->_flag & 0x1000) == 0 )
  {
    v3 = _fileno(Stream);
    v4 = v3;
    if ( v3 == -1 || v3 == -2 )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
      v5 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
    }
    else
    {
      v5 = &lpCriticalSection[v3 >> 6][2 * (v3 & 0x3F)];
      v6 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
    }
    if ( BYTE1(v5[1].LockSemaphore) != 0 )
      goto LABEL_14;
    if ( v4 != -1 && v4 != -2 )
      v6 = &lpCriticalSection[v4 >> 6][2 * (v4 & 0x3F)];
    if ( (v6[1].SpinCount & 0x100) != 0 )
    {
LABEL_14:
      *_errno() = 22;
      _invalid_parameter_noinfo();
      _local_unwind4(&__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
      return -1;
    }
  }
  v7 = _fputc_nolock(Character, Stream);
  _unlock_file(Stream);
  return v7;
}

// Address: 0x10014732
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

// Address: 0x10014798
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

// Address: 0x100147DF
int sub_100147DF()
{
  return common_flush_all(1);
}

// Address: 0x100147E8
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
  v1 = (FILE **)Block;
  v2 = (FILE **)((char *)Block + 4 * Count);
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

// Address: 0x100148C0
int __cdecl fflush(FILE *Stream)
{
  int v2; // [esp+10h] [ebp-1Ch]

  if ( Stream == nullptr )
    return common_flush_all(0);
  _lock_file(Stream);
  v2 = _fflush_nolock(Stream);
  _unlock_file(Stream);
  return v2;
}

// Address: 0x10014919
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
      __acrt_stdio_free_buffer_nolock(Stream);
      v3 = _fileno(Stream);
      if ( (int)sub_1001C6C3(v3) >= 0 )
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

// Address: 0x1001498F
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

// Address: 0x10014A0F
int __cdecl _fgetc_nolock(FILE *Stream)
{
  if ( Stream != nullptr )
  {
    if ( (int)--Stream->_base < 0 )
      return __acrt_stdio_refill_and_read_narrow_nolock(Stream);
    else
      return (unsigned __int8)*Stream->_ptr++;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

// Address: 0x10014A4B
int __cdecl fgetc(FILE *Stream)
{
  int v2; // eax
  int v3; // edx
  struct _RTL_CRITICAL_SECTION *v4; // eax
  struct _RTL_CRITICAL_SECTION *v5; // ecx
  int v6; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h] BYREF

  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _lock_file(Stream);
  ms_exc.registration.TryLevel = 0;
  if ( (Stream->_flag & 0x1000) == 0 )
  {
    v2 = _fileno(Stream);
    v3 = v2;
    if ( v2 == -1 || v2 == -2 )
    {
      v5 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
      v4 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
    }
    else
    {
      v4 = &lpCriticalSection[v2 >> 6][2 * (v2 & 0x3F)];
      v5 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
    }
    if ( BYTE1(v4[1].LockSemaphore) != 0 )
      goto LABEL_14;
    if ( v3 != -1 && v3 != -2 )
      v5 = &lpCriticalSection[v3 >> 6][2 * (v3 & 0x3F)];
    if ( (v5[1].SpinCount & 0x100) != 0 )
    {
LABEL_14:
      *_errno() = 22;
      _invalid_parameter_noinfo();
      _local_unwind4(&__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
      return -1;
    }
  }
  v6 = _fgetc_nolock(Stream);
  _unlock_file(Stream);
  return v6;
}

// Address: 0x10014B4D
int __acrt_initialize_stdio()
{
  size_t v0; // eax
  int v2; // edi
  char *v3; // esi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // eax

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
  Block = _calloc_base(v0, 4u);
  _free_base(nullptr);
  if ( Block == nullptr )
  {
    Count = 3;
    Block = _calloc_base(3u, 4u);
    _free_base(nullptr);
    if ( Block == nullptr )
      return -1;
  }
  v2 = 0;
  v3 = (char *)&unk_1003F130;
  do
  {
    __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 32), 0xFA0u, 0);
    *((_DWORD *)Block + v2) = v3;
    DebugInfo = lpCriticalSection[v2 >> 6][2 * (v2 & 0x3F) + 1].DebugInfo;
    if ( DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-1
      || DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-2
      || DebugInfo == nullptr )
    {
      *((_DWORD *)v3 + 4) = -2;
    }
    v3 += 56;
    ++v2;
  }
  while ( v3 != (char *)&unk_1003F1D8 );
  return 0;
}

// Address: 0x10014C15
FILE *__cdecl __acrt_iob_func(unsigned int Ix)
{
  return (FILE *)((char *)&unk_1003F130 + 56 * Ix);
}

// Address: 0x10014C25
void __acrt_uninitialize_stdio()
{
  int i; // esi

  sub_100147DF();
  _fcloseall();
  for ( i = 0; i != 12; i += 4 )
  {
    __acrt_stdio_free_buffer_nolock(*(_DWORD *)((char *)Block + i));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)Block + i) + 32));
  }
  _free_base(Block);
  Block = nullptr;
}

// Address: 0x10014C71
errno_t __cdecl _get_stream_buffer_pointers(FILE *Stream, char ***Base, char ***Pointer, int **Count)
{
  if ( Stream != nullptr )
  {
    if ( Base != nullptr )
      *Base = (char **)&Stream->_cnt;
    if ( Pointer != nullptr )
      *Pointer = &Stream->_ptr;
    if ( Count != nullptr )
      *Count = (int *)&Stream->_base;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x10014CB7
void __cdecl _lock_file(FILE *Stream)
{
  EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
}

// Address: 0x10014CCB
void __cdecl _unlock_file(FILE *Stream)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
}

// Address: 0x10014CDF
int __stdcall __crt_seh_guarded_call<unsigned int>::operator()<_lambda_11b4f7b0d3157825a5656a18eba1ae27_,_lambda_b51c0495177f500e782686251704ae76_ &,_lambda_cf89b47920b5017557bfe891e78aca36_>(
        FILE **a1,
        int a2,
        FILE **a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  _lock_file(*a1);
  v4 = _lambda_b51c0495177f500e782686251704ae76_::operator()(a2);
  _unlock_file(*a3);
  return v4;
}

// Address: 0x10014D30
int __cdecl sub_10014D30(FILE *a1, int a2)
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

// Address: 0x10014D58
size_t __thiscall _lambda_b51c0495177f500e782686251704ae76_::operator()(FILE ***this)
{
  FILE *v2; // edi
  size_t v3; // esi
  char v5; // [esp+Ch] [ebp-4h]

  v2 = **this;
  v5 = __acrt_stdio_begin_temporary_buffering_nolock(v2);
  v3 = _fwrite_nolock(**(this + 1), (size_t)**(this + 2), (size_t)**(this + 3), **this);
  __acrt_stdio_end_temporary_buffering_nolock(v5, v2);
  return v3;
}

// Address: 0x10014D9E
size_t __cdecl _fwrite_nolock(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  char *v5; // ecx
  int bufsiz; // edx
  size_t v7; // edi
  char *base; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  const void *v13; // [esp-8h] [ebp-20h]
  unsigned int v14; // [esp-4h] [ebp-1Ch]
  char *v15; // [esp+10h] [ebp-8h]
  unsigned int v16; // [esp+10h] [ebp-8h]
  unsigned int v17; // [esp+14h] [ebp-4h]

  if ( ElementSize == 0 || ElementCount == 0 )
    return 0;
  if ( Stream == nullptr || (v5 = (char *)Buffer, Buffer == nullptr) || ElementCount > 0xFFFFFFFF / ElementSize )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  if ( (Stream->_flag & 0x4C0) != 0 )
    bufsiz = Stream->_bufsiz;
  else
    bufsiz = 4096;
  v17 = bufsiz;
  v7 = ElementCount * ElementSize;
  if ( ElementCount * ElementSize == 0 )
    return ElementCount;
  while ( 1 )
  {
    if ( (Stream->_flag & 0xC0) != 0 )
    {
      base = Stream->_base;
      v15 = base;
      if ( base != nullptr )
      {
        if ( (int)base < 0 )
          goto LABEL_38;
        if ( v7 < (unsigned int)base )
        {
          base = (char *)v7;
          v15 = (char *)v7;
        }
        memmove_0(Stream->_ptr, v5, (size_t)base);
        Stream->_base -= (unsigned int)v15;
        v7 -= (unsigned int)v15;
        Stream->_ptr += (unsigned int)v15;
        v5 = (char *)Buffer + (_DWORD)v15;
        Buffer = (char *)Buffer + (_DWORD)v15;
        goto LABEL_32;
      }
    }
    if ( v7 >= bufsiz )
      break;
    if ( __acrt_stdio_flush_and_write_narrow_nolock(*v5, Stream) == -1 )
      return (ElementCount * ElementSize - v7) / ElementSize;
    bufsiz = Stream->_bufsiz;
    v5 = (char *)Buffer + 1;
    --v7;
    Buffer = (char *)Buffer + 1;
    v17 = bufsiz;
    if ( bufsiz <= 0 )
    {
      bufsiz = 1;
      v17 = 1;
    }
LABEL_36:
    if ( v7 == 0 )
      return ElementCount;
  }
  if ( (Stream->_flag & 0xC0) != 0 )
  {
    if ( __acrt_stdio_flush_nolock(Stream) != 0 )
      return (ElementCount * ElementSize - v7) / ElementSize;
    v5 = (char *)Buffer;
    bufsiz = v17;
  }
  v9 = v7;
  if ( bufsiz != 0 )
  {
    v9 = v7 - v7 % v17;
    v16 = v9;
  }
  else
  {
    v16 = v7;
  }
  if ( v9 == -1 )
  {
    v9 = -1;
    v16 = -1;
  }
  v14 = v9;
  v13 = v5;
  v10 = _fileno(Stream);
  v11 = _write(v10, v13, v14);
  if ( v11 != -1 )
  {
    v12 = v16;
    if ( v11 <= v16 )
      v12 = v11;
    Buffer = (char *)Buffer + v12;
    v7 -= v12;
    if ( v11 >= v16 )
    {
      v5 = (char *)Buffer;
LABEL_32:
      bufsiz = v17;
      goto LABEL_36;
    }
  }
LABEL_38:
  _InterlockedOr(&Stream->_flag, 0x10u);
  return (ElementCount * ElementSize - v7) / ElementSize;
}

// Address: 0x10014F17
size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  if ( ElementSize == 0 || ElementCount == 0 )
    return 0;
  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  v5[0] = &Stream;
  v5[1] = &Buffer;
  v5[2] = &ElementSize;
  v5[3] = &ElementCount;
  return sub_10014D30(Stream, (int)v5);
}

// Address: 0x10014F6F
int __cdecl __acrt_errno_from_os_error(int a1)
{
  unsigned int i; // eax

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_100311B0[2 * i] )
      return dword_100311B4[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x10014FB2
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

// Address: 0x10014FD5
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = __acrt_getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 20);
  else
    return (unsigned int *)&unk_1003F1DC;
}

// Address: 0x10014FE8
int *__cdecl _errno()
{
  int v0; // eax

  v0 = __acrt_getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 16);
  else
    return (int *)&unk_1003F1D8;
}

// Address: 0x10014FFB
int __cdecl fgetpos(FILE *Stream, fpos_t *Position)
{
  int result; // eax
  fpos_t v3; // rax
  int v4; // ecx

  if ( Stream != nullptr && Position != nullptr )
  {
    v3 = _ftelli64(Stream);
    *Position = v3;
    v4 = HIDWORD(v3) & v3;
    result = -1;
    if ( v4 != -1 )
      return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  return result;
}

// Address: 0x10015056
int __stdcall __crt_seh_guarded_call<unsigned int>::operator()<_lambda_11b4f7b0d3157825a5656a18eba1ae27_,_lambda_b51c0495177f500e782686251704ae76_ &,_lambda_cf89b47920b5017557bfe891e78aca36_>(
        FILE **a1,
        int a2,
        FILE **a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  _lock_file(*a1);
  v4 = _lambda_b721fa326cdb32351d23dfa67958c160_::operator()(a2);
  _unlock_file(*a3);
  return v4;
}

// Address: 0x100150A7
int __cdecl sub_100150A7(FILE *a1, int a2)
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

// Address: 0x100150CF
int __thiscall _lambda_b721fa326cdb32351d23dfa67958c160_::operator()(FILE ***this)
{
  size_t v2; // ebx
  void *v4; // esi
  void *v5; // [esp-Ch] [ebp-18h]
  size_t v6; // [esp-8h] [ebp-14h]
  int v7; // [esp-4h] [ebp-10h]

  v2 = (unsigned int)**this & 0xFFFFFFFE;
  __acrt_stdio_flush_nolock(**(this + 1));
  __acrt_stdio_free_buffer_nolock(**(this + 1));
  _InterlockedAnd(&(**(this + 1))->_flag, 0xFFFFF81F);
  if ( (*(_BYTE *)*(this + 2) & 4) != 0 )
    return set_buffer(**(this + 1), &(**(this + 1))->_charbuf, 2, 1024);
  if ( **(this + 3) != nullptr )
  {
    v7 = 384;
    v6 = v2;
    v5 = **(this + 3);
  }
  else
  {
    v4 = _malloc_base(v2);
    _free_base(nullptr);
    if ( v4 == nullptr )
    {
      ++dword_10040CE8;
      return -1;
    }
    v7 = 320;
    v6 = v2;
    v5 = v4;
  }
  return set_buffer(**(this + 1), v5, v6, v7);
}

// Address: 0x10015169
int __cdecl set_buffer(int a1, int a2, int a3, unsigned int a4)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 12), a4);
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  return 0;
}

// Address: 0x1001519C
int __cdecl setvbuf(FILE *Stream, char *Buffer, int Mode, size_t Size)
{
  _DWORD v5[4]; // [esp+0h] [ebp-14h] BYREF
  FILE *v6; // [esp+10h] [ebp-4h] BYREF

  v6 = Stream;
  if ( Stream == nullptr )
    goto LABEL_2;
  if ( Mode != 4 )
  {
    if ( Mode == 0 )
      goto LABEL_7;
    if ( Mode != 64 )
      goto LABEL_2;
  }
  if ( Mode == 64 )
  {
LABEL_7:
    if ( Size - 2 <= 0x7FFFFFFD )
      goto LABEL_8;
LABEL_2:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
LABEL_8:
  v5[0] = &Size;
  v5[1] = &v6;
  v5[2] = &Mode;
  v5[3] = &Buffer;
  return sub_100150A7(Stream, (int)v5);
}

// Address: 0x10015212
int __cdecl common_timespec_get<_timespec64>(int a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  struct _FILETIME SystemTimeAsFileTime; // [esp+4h] [ebp-8h] BYREF

  if ( a1 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  if ( a2 != 1 )
    return 0;
  SystemTimeAsFileTime = 0;
  __acrt_GetSystemTimePreciseAsFileTime(&SystemTimeAsFileTime);
  v4 = (*(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL) % 10000000;
  v3 = (*(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL) / 10000000;
  SystemTimeAsFileTime.dwHighDateTime = HIDWORD(v4);
  if ( v3 > 0x793406FFFLL )
    return 0;
  *(_QWORD *)a1 = v3;
  *(_DWORD *)(a1 + 8) = 100 * v4;
  return 1;
}

// Address: 0x10015291
__time64_t __cdecl _time64(__time64_t *Time)
{
  __time64_t result; // rax
  __time64_t v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  int v4; // [esp+10h] [ebp-4h]

  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( common_timespec_get<_timespec64>((int)&v2, 1) == 1 )
    result = v2;
  else
    result = -1;
  if ( Time != nullptr )
    *Time = result;
  return result;
}

// Address: 0x100152D3
errno_t __cdecl common_localtime_s<__int64>(struct tm *Tm, __time64_t *a2)
{
  errno_t result; // eax
  __int64 v3; // rcx
  __int64 tm_sec; // kr00_8
  int v5; // eax
  __int64 v6; // kr08_8
  __int64 v7; // kr18_8
  __int64 v8; // kr28_8
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int tm_mday; // eax
  __time64_t Time; // [esp+4h] [ebp-14h] BYREF
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h] BYREF
  int v17; // [esp+14h] [ebp-4h] BYREF

  if ( Tm == nullptr || (memset(Tm, 0xFFu, sizeof(struct tm)), a2 == nullptr) )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( *((int *)a2 + 1) < 0 || *a2 > 0x793406FFFLL )
  {
    *_errno() = 22;
    return 22;
  }
  __tzset();
  v16 = 0;
  v15 = 0;
  v17 = 0;
  if ( sub_1001DA10(&v16) != 0 || sub_1001DA3C(&v15) != 0 || sub_1001DA68(&v17) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v3 = *a2;
  if ( *a2 <= 259200 || v3 >= 0x7933C7B7FLL )
  {
    result = _gmtime64_s(Tm, a2);
    if ( result == 0 )
    {
      tm_sec = Tm->tm_sec;
      if ( v16 != 0 && _isindst(Tm) != 0 )
      {
        v5 = v15 + v17;
        Tm->tm_isdst = 1;
      }
      else
      {
        v5 = v17;
      }
      v6 = tm_sec - v5;
      Tm->tm_sec = v6 % 60;
      if ( v6 % 60 < 0 )
      {
        Tm->tm_sec = v6 % 60 + 60;
        v6 -= 60;
      }
      v7 = Tm->tm_min + v6 / 60;
      Tm->tm_min = v7 % 60;
      if ( v7 % 60 < 0 )
      {
        Tm->tm_min = v7 % 60 + 60;
        v7 -= 60;
      }
      v8 = Tm->tm_hour + v7 / 60;
      Tm->tm_hour = v8 % 24;
      if ( v8 % 24 < 0 )
      {
        Tm->tm_hour = v8 % 24 + 24;
        v8 -= 24;
      }
      v9 = v8 / 24;
      if ( (((unsigned __int64)(v8 / 24) >> 32) & 0x80000000) != 0LL )
      {
        v11 = Tm->tm_wday + 7;
        Tm->tm_mday += v9;
        v12 = (v9 + v11) % 7;
        tm_mday = Tm->tm_mday;
        Tm->tm_wday = v12;
        if ( tm_mday <= 0 )
        {
          Tm->tm_mon = 11;
          Tm->tm_mday = tm_mday + 31;
          Tm->tm_yday += v9 + 365;
          --Tm->tm_year;
          return 0;
        }
      }
      else
      {
        if ( v8 / 24 <= 0 )
          return 0;
        v10 = (v9 + Tm->tm_wday) % 7;
        Tm->tm_mday += v9;
        Tm->tm_wday = v10;
      }
      Tm->tm_yday += v9;
      return 0;
    }
  }
  else
  {
    Time = v3 - v17;
    result = _gmtime64_s(Tm, &Time);
    if ( result == 0 )
    {
      if ( v16 == 0 || _isindst(Tm) == 0 )
        return 0;
      Time -= v15;
      result = _gmtime64_s(Tm, &Time);
      if ( result == 0 )
      {
        Tm->tm_isdst = 1;
        return 0;
      }
    }
  }
  return result;
}

// Address: 0x1001555D
// Microsoft VisualC universal runtime
struct tm *__cdecl unknown_libname_41(__time64_t *a1)
{
  struct tm *result; // eax

  result = (struct tm *)__getgmtimebuf();
  if ( result != nullptr )
    return common_localtime_s<__int64>(result, a1) == 0 ? result : nullptr;
  return result;
}

// Address: 0x10015584
// attributes: thunk
void __cdecl j___free_base(void *Block)
{
  _free_base(Block);
}

// Address: 0x10015589
int __cdecl _ungetc_nolock(int Character, FILE *Stream)
{
  int *p_flag; // edx
  int v3; // eax
  int v4; // edx
  struct _RTL_CRITICAL_SECTION *v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // eax
  unsigned int v8; // eax
  bool v9; // zf
  char *ptr; // eax

  p_flag = &Stream->_flag;
  if ( (Stream->_flag & 0x1000) == 0 )
  {
    v3 = _fileno(Stream);
    v4 = v3;
    v5 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
    if ( v3 == -1 || v3 == -2 )
      v6 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
    else
      v6 = &lpCriticalSection[v3 >> 6][2 * (v3 & 0x3F)];
    if ( BYTE1(v6[1].LockSemaphore) != 0 )
      goto LABEL_11;
    if ( v4 != -1 && v4 != -2 )
      v5 = &lpCriticalSection[v4 >> 6][2 * (v4 & 0x3F)];
    if ( (v5[1].SpinCount & 0x100) != 0 )
    {
LABEL_11:
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return -1;
    }
    p_flag = &Stream->_flag;
  }
  if ( Character == -1 || (*p_flag & 1) == 0 && (*p_flag & 6) != 6 )
    return -1;
  if ( Stream->_cnt == 0 )
  {
    __acrt_stdio_allocate_buffer_nolock(Stream);
    p_flag = &Stream->_flag;
  }
  if ( Stream->_ptr == (char *)Stream->_cnt )
  {
    if ( Stream->_base == nullptr )
      return -1;
    ++Stream->_ptr;
  }
  v8 = (unsigned int)*p_flag >> 12;
  --Stream->_ptr;
  v9 = (v8 & 1) == 0;
  ptr = Stream->_ptr;
  if ( v9 )
  {
    *ptr = Character;
  }
  else if ( *ptr != (_BYTE)Character )
  {
    Stream->_ptr = ptr + 1;
    return -1;
  }
  ++Stream->_base;
  _InterlockedAnd(p_flag, 0xFFFFFFF7);
  _InterlockedOr(p_flag, 1u);
  return (unsigned __int8)Character;
}

// Address: 0x10015678
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
    _invalid_parameter_noinfo();
    return -1;
  }
}

// Address: 0x100156E8
errno_t __cdecl strcat_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  rsize_t v3; // ecx
  int *v4; // eax
  errno_t v5; // esi
  char *v7; // edx
  const char *v8; // edi
  char v9; // al
  int v10; // [esp-4h] [ebp-Ch]

  if ( Destination == nullptr )
    goto LABEL_5;
  v3 = SizeInBytes;
  if ( SizeInBytes == 0 )
    goto LABEL_5;
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
      v8 = (const char *)(Source - v7);
      do
      {
        v9 = v7[(_DWORD)v8];
        *v7++ = v9;
        if ( v9 == 0 )
          break;
        --v3;
      }
      while ( v3 != 0 );
      if ( v3 != 0 )
        return 0;
      *Destination = 0;
      v4 = _errno();
      v10 = 34;
LABEL_6:
      v5 = v10;
      *v4 = v10;
      _invalid_parameter_noinfo();
      return v5;
    }
  }
  *Destination = 0;
LABEL_5:
  v4 = _errno();
  v10 = 22;
  goto LABEL_6;
}

// Address: 0x10015751
int __cdecl fsetpos(FILE *Stream, const fpos_t *Position)
{
  if ( Stream != nullptr && Position != nullptr )
    return _fseeki64(Stream, *Position, 0);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

// Address: 0x1001578C
int __cdecl LongLongSub(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // kr00_8
  int result; // eax

  v3 = a1 - a2;
  result = 0;
  if ( a1 < 0 == a2 < 0 || a1 < 0 == v3 < 0 )
  {
    *a3 = v3;
  }
  else
  {
    *(_DWORD *)a3 = -1;
    *((_DWORD *)a3 + 1) = -1;
    return -2147024362;
  }
  return result;
}

// Address: 0x1001580D
int __cdecl common_fseek(FILE *Stream, int a2, int a3, unsigned int a4)
{
  int v5; // [esp+10h] [ebp-1Ch]

  if ( Stream != nullptr && a4 <= 2 )
  {
    _lock_file(Stream);
    v5 = common_fseek_nolock(Stream, a2, a3, a4);
    _unlock_file(Stream);
    return v5;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

// Address: 0x10015894
char __cdecl common_fseek_binary_mode_read_only_fast_track_nolock(int *a1, __int64 a2, int a3)
{
  int v4; // edx
  int v5; // eax
  LPCRITICAL_SECTION v6; // ecx
  __int64 v7; // rax
  int *v8; // esi
  __int64 v9; // rax
  int v10; // edi

  if ( a3 == 2 || (a1[3] & 0x4C0) == 0 || (a1[3] & 6) != 0 )
    return 0;
  if ( a1[2] < 0 )
    return 0;
  v4 = a1[4];
  v5 = 2 * (v4 & 0x3F);
  v6 = lpCriticalSection[v4 >> 6];
  if ( SLOBYTE(v6[v5 + 1].LockSemaphore) < 0 || BYTE1(v6[v5 + 1].LockSemaphore) != 0 )
    return 0;
  if ( a3 != 0 )
  {
    v8 = a1;
  }
  else
  {
    LODWORD(v7) = _lseeki64_nolock(v4, 0, 1u);
    if ( v7 < 0 )
      return 0;
    v8 = a1;
    if ( LongLongSub(a2, v7 - a1[2], &a2) < 0 )
      return 0;
  }
  v9 = v8[1] - *v8;
  if ( SHIDWORD(v9) > SHIDWORD(a2) )
    return 0;
  v10 = a2;
  if ( SHIDWORD(v9) >= SHIDWORD(a2) && (unsigned int)v9 > (unsigned int)a2 )
    return 0;
  if ( a2 > v8[2] )
    return 0;
  *v8 += a2;
  a1[2] -= v10;
  return 1;
}

// Address: 0x1001596D
int __cdecl common_fseek_nolock(FILE *Stream, __int64 liDistanceToMove, DWORD dwMoveMethod)
{
  int result; // eax
  DWORD v4; // esi
  LARGE_INTEGER v5; // kr00_8
  char *cnt; // ecx
  int v7; // eax
  int v8; // edx

  if ( (Stream->_flag & 0x2000) != 0 )
  {
    _InterlockedAnd(&Stream->_flag, 0xFFFFFFF7);
    v4 = dwMoveMethod;
    v5.QuadPart = liDistanceToMove;
    if ( common_fseek_binary_mode_read_only_fast_track_nolock((int *)Stream, liDistanceToMove, dwMoveMethod) != 0 )
      return 0;
    if ( dwMoveMethod == 1 )
    {
      v5.QuadPart = _ftelli64_nolock(Stream) + liDistanceToMove;
      v4 = 0;
    }
    __acrt_stdio_flush_nolock(Stream);
    cnt = (char *)Stream->_cnt;
    Stream->_base = nullptr;
    Stream->_ptr = cnt;
    if ( (Stream->_flag & 4) != 0 )
    {
      _InterlockedAnd(&Stream->_flag, 0xFFFFFFFC);
    }
    else if ( (Stream->_flag & 0x41) == 0x41 && (Stream->_flag & 0x100) == 0 )
    {
      Stream->_bufsiz = 512;
    }
    v7 = _lseeki64_nolock(Stream->_file, v5, v4);
    result = v8 & v7;
    if ( result != -1 )
      return 0;
  }
  else
  {
    *_errno() = 22;
    return -1;
  }
  return result;
}

// Address: 0x10015A46
int __cdecl _fseeki64(FILE *Stream, __int64 Offset, int Origin)
{
  return common_fseek(Stream, Offset, SHIDWORD(Offset), Origin);
}

// Address: 0x10015A61
int __cdecl fseek(FILE *Stream, int Offset, int Origin)
{
  return common_fseek(Stream, Offset, Offset >> 31, Origin);
}

// Address: 0x10015A7C
int __cdecl sub_10015A7C(char *Source, int a2)
{
  char *v2; // edx
  char *v3; // edi
  char *v4; // ebx
  int i; // eax
  char v7; // al
  char *v8; // ecx
  const char *v9; // ebx
  char *v10; // edi
  _BYTE *v11; // eax
  rsize_t v12; // edi
  rsize_t v13; // edi
  _BYTE *v14; // eax
  char *v15; // [esp+Ch] [ebp-4h]

  v2 = Source;
  if ( Source != nullptr
    && a2 != 0
    && (v3 = *(char **)a2, (*(_DWORD *)a2 == 0) == (*(_DWORD *)(a2 + 4) == 0))
    && (*(_DWORD *)(a2 + 8) == 0) == (*(_DWORD *)(a2 + 12) == 0)
    && (*(_DWORD *)(a2 + 16) == 0) == (*(_DWORD *)(a2 + 20) == 0)
    && (*(_DWORD *)(a2 + 24) == 0) == (*(_DWORD *)(a2 + 28) == 0) )
  {
    v4 = Source;
    for ( i = 1; i != 0; --i )
    {
      if ( *v4 == 0 )
        break;
      ++v4;
    }
    if ( *v4 == 58 )
    {
      if ( v3 != nullptr )
      {
        if ( *(_DWORD *)(a2 + 4) < 3u )
        {
LABEL_13:
          unknown_libname_42(a2);
          *_errno() = 34;
          return 34;
        }
        strncpy_s(v3, *(_DWORD *)(a2 + 4), Source, 2u);
      }
      v2 = v4 + 1;
    }
    else if ( v3 != nullptr )
    {
      *v3 = 0;
    }
    v7 = *v2;
    v8 = nullptr;
    v9 = nullptr;
    v10 = v2;
    if ( *v2 == 0 )
      goto LABEL_30;
    do
    {
      if ( v7 == 47 || v7 == 92 )
      {
        v8 = v10 + 1;
      }
      else if ( v7 == 46 )
      {
        v9 = v10;
      }
      v7 = *++v10;
    }
    while ( *v10 != 0 );
    v15 = v8;
    if ( v8 != nullptr )
    {
      if ( *(_DWORD *)(a2 + 8) != 0 )
      {
        if ( *(_DWORD *)(a2 + 12) <= (unsigned int)(v8 - v2) )
          goto LABEL_13;
        strncpy_s(*(char **)(a2 + 8), *(_DWORD *)(a2 + 12), v2, v8 - v2);
        v8 = v15;
      }
      v2 = v8;
    }
    else
    {
LABEL_30:
      v11 = *(_BYTE **)(a2 + 8);
      if ( v11 != nullptr )
        *v11 = 0;
    }
    if ( v9 != nullptr && v9 >= v2 )
    {
      if ( *(_DWORD *)(a2 + 16) != 0 )
      {
        if ( *(_DWORD *)(a2 + 20) <= (unsigned int)(v9 - v2) )
          goto LABEL_13;
        strncpy_s(*(char **)(a2 + 16), *(_DWORD *)(a2 + 20), v2, v9 - v2);
      }
      if ( *(_DWORD *)(a2 + 24) != 0 )
      {
        v12 = v10 - v9;
        if ( *(_DWORD *)(a2 + 28) <= v12 )
          goto LABEL_13;
        strncpy_s(*(char **)(a2 + 24), *(_DWORD *)(a2 + 28), v9, v12);
      }
    }
    else
    {
      if ( *(_DWORD *)(a2 + 16) != 0 )
      {
        v13 = v10 - v2;
        if ( *(_DWORD *)(a2 + 20) <= v13 )
          goto LABEL_13;
        strncpy_s(*(char **)(a2 + 16), *(_DWORD *)(a2 + 20), v2, v13);
      }
      v14 = *(_BYTE **)(a2 + 24);
      if ( v14 != nullptr )
        *v14 = 0;
    }
    return 0;
  }
  else
  {
    unknown_libname_42(a2);
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x10015C51
// Microsoft VisualC universal runtime
_BYTE *__cdecl unknown_libname_42(int a1)
{
  _BYTE *v1; // ecx
  _BYTE *v2; // ecx
  _BYTE *result; // eax

  if ( *(_DWORD *)a1 != 0 )
    **(_BYTE **)a1 = 0;
  v1 = *(_BYTE **)(a1 + 8);
  if ( v1 != nullptr )
    *v1 = 0;
  v2 = *(_BYTE **)(a1 + 16);
  if ( v2 != nullptr )
    *v2 = 0;
  result = *(_BYTE **)(a1 + 24);
  if ( result != nullptr )
    *result = 0;
  return result;
}

// Address: 0x10015C80
int __cdecl sub_10015C80(char *Source, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10[8]; // [esp+0h] [ebp-24h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  v10[2] = a4;
  v10[3] = a5;
  v10[4] = a6;
  v10[5] = a7;
  v10[6] = a8;
  v10[7] = a9;
  return sub_10015A7C(Source, (int)v10);
}

// Address: 0x10015CD1
int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v3; // ecx
  int v4; // edx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // si
  wchar_t v7; // ax

  if ( dword_10040F84 != 0 )
    return _wcsicmp_l(String1, String2, nullptr);
  if ( String1 != nullptr && (v3 = String2, String2 != nullptr) )
  {
    v4 = (char *)String1 - (char *)String2;
    do
    {
      v5 = *(const wchar_t *)((char *)v3 + v4);
      if ( v5 < 0x41u || v5 > 0x5Au )
        v6 = *(const wchar_t *)((char *)v3 + v4);
      else
        v6 = v5 + 32;
      v7 = *v3;
      if ( *v3 >= 0x41u && v7 <= 0x5Au )
        v7 += 32;
      ++v3;
    }
    while ( v6 != 0 && v6 == v7 );
    return v6 - v7;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0x7FFFFFFF;
  }
}

// Address: 0x10015D66
int __cdecl _wcsicmp_l(const wchar_t *String1, const wchar_t *String2, _locale_t Locale)
{
  wint_t *v3; // ebx
  wint_t *v4; // esi
  int v5; // edx
  int v6; // ebx
  unsigned __int16 v7; // ax
  wint_t v8; // di
  wint_t v9; // ax
  int v11; // [esp+8h] [ebp-10h] BYREF
  __crt_locale_pointers v12; // [esp+Ch] [ebp-Ch] BYREF
  char v13; // [esp+14h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v11, Locale);
  v3 = (wint_t *)String1;
  if ( String1 != nullptr && (v4 = (wint_t *)String2, String2 != nullptr) )
  {
    if ( *((_DWORD *)v12.locinfo + 42) != 0 )
    {
      do
      {
        v8 = _towlower_l(*v3++, &v12);
        v9 = _towlower_l(*v4++, &v12);
      }
      while ( v8 != 0 && v8 == v9 );
    }
    else
    {
      v6 = (char *)String1 - (char *)String2;
      do
      {
        v7 = *(wint_t *)((char *)v4 + v6);
        if ( v7 < 0x41u || v7 > 0x5Au )
          v8 = *(wint_t *)((char *)v4 + v6);
        else
          v8 = v7 + 32;
        v9 = *v4;
        if ( *v4 >= 0x41u && v9 <= 0x5Au )
          v9 += 32;
        ++v4;
      }
      while ( v8 != 0 && v8 == v9 );
    }
    v5 = v8 - v9;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    v5 = 0x7FFFFFFF;
  }
  if ( v13 != 0 )
    *(_DWORD *)(v11 + 848) &= ~2u;
  return v5;
}

// Address: 0x10015E46
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

// Address: 0x10015EAA
int __cdecl rand()
{
  int v0; // eax
  unsigned int v1; // ecx

  v0 = __acrt_getptd();
  v1 = 214013 * *(_DWORD *)(v0 + 24) + 2531011;
  *(_DWORD *)(v0 + 24) = v1;
  return HIWORD(v1) & 0x7FFF;
}

// Address: 0x10015ECB
void __cdecl srand(unsigned int Seed)
{
  *(_DWORD *)(__acrt_getptd() + 24) = Seed;
}

// Address: 0x10015EDD
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

// Address: 0x10015F52
char __acrt_initialize_locks()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_10040CF0;
  v1 = 0;
  while ( __acrt_InitializeCriticalSectionEx(v0, 0xFA0u, 0) != 0 )
  {
    ++dword_10040E28;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x138 )
      return 1;
  }
  __acrt_uninitialize_locks(0);
  return 0;
}

// Address: 0x10015F93
void __cdecl __acrt_lock(int a1)
{
  EnterCriticalSection(&stru_10040CF0 + a1);
}

// Address: 0x10015FAA
char __acrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_10040E28;
  if ( dword_10040E28 != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_10040CD8 + 24 * dword_10040E28);
    do
    {
      DeleteCriticalSection(v1);
      --dword_10040E28;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

// Address: 0x10015FDB
void __cdecl __acrt_unlock(int a1)
{
  LeaveCriticalSection(&stru_10040CF0 + a1);
}

// Address: 0x10015FF2
void __cdecl _lock_locales()
{
  __acrt_lock(4);
}

// Address: 0x10015FFB
void __cdecl _unlock_locales()
{
  __acrt_unlock(4);
}

// Address: 0x10016004
void *__cdecl malloc(size_t Size)
{
  return _malloc_base(Size);
}

// Address: 0x1001600F
wchar_t *__cdecl call_wsetlocale(int Category, char *SrcBuf)
{
  size_t v2; // ecx
  wchar_t *v4; // edi
  errno_t v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  errno_t v8; // eax
  size_t Count; // [esp+0h] [ebp-4h] BYREF

  Count = v2;
  if ( SrcBuf == nullptr )
    return _wsetlocale(Category, nullptr);
  v4 = nullptr;
  v5 = mbstowcs_s(&Count, nullptr, 0, SrcBuf, 0x7FFFFFFFu);
  if ( v5 != 0 && (v5 == 22 || v5 == 34) )
LABEL_13:
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v6 = (wchar_t *)_calloc_base(Count, 2u);
  v7 = v6;
  if ( v6 != nullptr )
  {
    v8 = mbstowcs_s(nullptr, v6, Count, SrcBuf, 0xFFFFFFFF);
    if ( v8 != 0 )
    {
      if ( v8 == 22 || v8 == 34 )
        goto LABEL_13;
    }
    else
    {
      v4 = _wsetlocale(Category, v7);
    }
  }
  _free_base(v7);
  return v4;
}

// Address: 0x100160AC
char *__cdecl setlocale(int Category, const char *Locale)
{
  wchar_t *v2; // edi
  errno_t v4; // eax
  char *v5; // eax
  _DWORD *v6; // ebx
  errno_t v7; // eax
  struct __crt_locale_data *locinfo; // edi
  volatile signed __int32 *v9; // edx
  volatile signed __int32 *v10; // eax
  char *v11; // ebx
  __crt_locale_pointers v12; // [esp+10h] [ebp-2Ch] BYREF
  int v13; // [esp+18h] [ebp-24h]
  char *v14; // [esp+1Ch] [ebp-20h]
  size_t PtNumOfCharConverted; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v2 = call_wsetlocale(Category, (char *)Locale);
  if ( v2 == nullptr )
    return nullptr;
  v13 = __acrt_getptd();
  v12.locinfo = *(struct __crt_locale_data **)(v13 + 76);
  v12.mbcinfo = *(struct __crt_multibyte_data **)(v13 + 72);
  PtNumOfCharConverted = 0;
  v4 = _wcstombs_s_l(&PtNumOfCharConverted, nullptr, 0, v2, 0, &v12);
  if ( v4 != 0 )
  {
    if ( v4 == 22 || v4 == 34 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    return nullptr;
  }
  v5 = (char *)_malloc_base(PtNumOfCharConverted + 4);
  v6 = v5;
  if ( v5 == nullptr )
    return nullptr;
  v14 = v5 + 4;
  v7 = _wcstombs_s_l(nullptr, v5 + 4, PtNumOfCharConverted, v2, 0xFFFFFFFF, &v12);
  if ( v7 != 0 )
  {
    if ( v7 == 22 || v7 == 34 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    _free_base(v6);
    return nullptr;
  }
  locinfo = v12.locinfo;
  __acrt_lock(4);
  ms_exc.registration.TryLevel = 0;
  v9 = *((volatile signed __int32 **)locinfo + 4 * Category + 9);
  if ( v9 != nullptr && _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 0 )
  {
    _free_base(*((void **)locinfo + 4 * Category + 9));
    *((_DWORD *)locinfo + 4 * Category + 9) = 0;
  }
  if ( (*(_BYTE *)(v13 + 848) & 2) == 0 && (dword_1003F3F8 & 1) == 0 )
  {
    v10 = *((volatile signed __int32 **)locinfo + 4 * Category + 9);
    if ( v10 != nullptr && _InterlockedDecrement(v10) == 0 )
    {
      _free_base(*((void **)locinfo + 4 * Category + 9));
      *((_DWORD *)locinfo + 4 * Category + 9) = 0;
    }
  }
  *v6 = *((_DWORD *)locinfo + 3);
  *((_DWORD *)locinfo + 4 * Category + 9) = v6;
  v11 = v14;
  *((_DWORD *)locinfo + 4 * Category + 7) = v14;
  ms_exc.registration.TryLevel = -2;
  __acrt_unlock(4);
  return v11;
}

// Address: 0x10016209
int __cdecl common_fsopen<char>(_BYTE *a1, _BYTE *a2)
{
  int v3; // esi
  FILE *Stream; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  if ( a1 == nullptr || a2 == nullptr || *a2 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  if ( *a1 == 0 )
  {
    *_errno() = 22;
    return 0;
  }
  __acrt_stdio_allocate_stream(&Stream);
  if ( Stream == nullptr )
  {
    *_errno() = 24;
    return 0;
  }
  ms_exc.registration.TryLevel = 0;
  v3 = _openfile(a1);
  ms_exc.registration.TryLevel = -2;
  if ( v3 == 0 )
    __acrt_stdio_free_stream(Stream);
  _unlock_file(Stream);
  return v3;
}

// Address: 0x100162CA
FILE *__cdecl _fsopen(const char *FileName, const char *Mode, int ShFlag)
{
  return (FILE *)common_fsopen<char>(FileName, Mode);
}

// Address: 0x100162D5
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
      if ( sub_1001F204() == 0 || _callnewh(v2) == 0 )
        goto LABEL_9;
    }
  }
  return result;
}

// Address: 0x10016332
const unsigned __int16 *__cdecl __pctype_func()
{
  int v0; // eax
  const unsigned __int16 **v2; // [esp+0h] [ebp-4h] BYREF

  v0 = ((int (__cdecl *)())__acrt_getptd)();
  v2 = *(const unsigned __int16 ***)(v0 + 76);
  sub_10019BE2(v0, &v2);
  return *v2;
}

// Address: 0x10016358
int __cdecl _chvalidchk_l(const int C, const int Mask, const _locale_t Locale)
{
  int v3; // eax

  if ( Locale != nullptr )
    v3 = *(unsigned __int16 *)(*(_DWORD *)Locale->locinfo + 2 * C);
  else
    v3 = __pctype_func()[C];
  return Mask & v3;
}

// Address: 0x10016382
int __cdecl _ischartype_l(const int C, const int Mask, const _locale_t Locale)
{
  if ( Locale != nullptr && *((int *)Locale->locinfo + 1) > 1 )
    return _isctype_l(C, Mask, Locale);
  else
    return _chvalidchk_l(C, Mask, Locale);
}

// Address: 0x100163B5
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

// Address: 0x100163ED
int __cdecl _islower_l(int C, _locale_t Locale)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  __crt_locale_pointers Localea; // [esp+4h] [ebp-Ch] BYREF
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, Locale);
  result = _ischartype_l(C, 2, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v3 + 848) &= ~2u;
  return result;
}

// Address: 0x10016425
int __cdecl _isupper_l(int C, _locale_t Locale)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  __crt_locale_pointers Localea; // [esp+4h] [ebp-Ch] BYREF
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, Locale);
  result = _ischartype_l(C, 1, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v3 + 848) &= ~2u;
  return result;
}

// Address: 0x1001645D
int __cdecl isdigit(int C)
{
  if ( dword_10040F84 != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_1003F260[C] & 4;
}

// Address: 0x1001648A
int __cdecl islower(int C)
{
  if ( dword_10040F84 != 0 )
    return _islower_l(C, nullptr);
  else
    return off_1003F260[C] & 2;
}

// Address: 0x100164B7
int __cdecl isupper(int C)
{
  if ( dword_10040F84 != 0 )
    return _isupper_l(C, nullptr);
  else
    return off_1003F260[C] & 1;
}

// Address: 0x100164E4
wchar_t *__cdecl _wcsdup(const wchar_t *String)
{
  wchar_t *result; // eax
  unsigned int v2; // kr00_4
  wchar_t *v3; // edi

  if ( String == nullptr )
    return nullptr;
  v2 = wcslen(String);
  result = (wchar_t *)malloc(2 * (v2 + 1));
  v3 = result;
  if ( result != nullptr )
  {
    if ( wcscpy_s(result, v2 + 1, String) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    return v3;
  }
  return result;
}

// Address: 0x10016545
unsigned int __cdecl ___lc_codepage_func()
{
  int v0; // ecx
  int v1; // eax
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = v0;
  v1 = __acrt_getptd();
  v3 = *(_DWORD *)(v1 + 76);
  sub_10019BE2(v1, &v3);
  return *(_DWORD *)(v3 + 8);
}

// Address: 0x1001656C
wchar_t **__cdecl ___lc_locale_name_func()
{
  int v0; // ecx
  int v1; // eax
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = v0;
  v1 = __acrt_getptd();
  v3 = *(_DWORD *)(v1 + 76);
  sub_10019BE2(v1, &v3);
  return (wchar_t **)(v3 + 160);
}

// Address: 0x10016595
int __cdecl __acrt_locale_initialize_ctype(int a1)
{
  int v1; // ebx
  wchar_t *v2; // ecx
  CHAR *v3; // edi
  int i; // eax
  BYTE *v5; // ecx
  int j; // eax
  int v7; // edx
  _WORD *v8; // edx
  char *v9; // eax
  _BYTE *v10; // ecx
  _BYTE *v11; // eax
  bool v12; // cc
  BYTE *v13; // ecx
  int v14; // esi
  _WORD *v15; // edi
  _WORD *v16; // edi
  _WORD *v17; // esi
  char *v18; // edx
  int v19; // esi
  volatile signed __int32 *v20; // ecx
  void *v21; // eax
  volatile signed __int32 *v23; // eax
  UINT v24; // [esp-8h] [ebp-5Ch]
  UINT v25; // [esp-8h] [ebp-5Ch]
  struct __crt_locale_pointers v26; // [esp+Ch] [ebp-48h] BYREF
  char *v27; // [esp+14h] [ebp-40h]
  int v28; // [esp+18h] [ebp-3Ch]
  char *v29; // [esp+1Ch] [ebp-38h]
  _BYTE *v30; // [esp+20h] [ebp-34h]
  void *v31; // [esp+24h] [ebp-30h]
  int MaxCharSize_low; // [esp+28h] [ebp-2Ch]
  void *Block; // [esp+2Ch] [ebp-28h]
  void *v34; // [esp+30h] [ebp-24h]
  void *v35; // [esp+34h] [ebp-20h]
  void *v36; // [esp+38h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+3Ch] [ebp-18h] BYREF

  v1 = 0;
  v28 = a1;
  v36 = nullptr;
  v2 = *(wchar_t **)(a1 + 168);
  v35 = nullptr;
  v34 = nullptr;
  v31 = nullptr;
  v26.locinfo = (struct __crt_locale_data *)a1;
  v26.mbcinfo = nullptr;
  if ( v2 != nullptr )
  {
    Block = nullptr;
    if ( *(_DWORD *)(a1 + 8) == 0 && __acrt_GetLocaleInfoA(&v26, 0, v2, 0x1004u, a1 + 8) != 0 )
      goto $error_cleanup$115;
    Block = _calloc_base(1u, 4u);
    _free_base(nullptr);
    v36 = _calloc_base(0x180u, 2u);
    _free_base(nullptr);
    v35 = _calloc_base(0x180u, 1u);
    _free_base(nullptr);
    v34 = _calloc_base(0x180u, 1u);
    _free_base(nullptr);
    v3 = (CHAR *)_calloc_base(0x101u, 1u);
    v31 = v3;
    _free_base(nullptr);
    if ( Block == nullptr )
      goto $error_cleanup$115;
    if ( v36 == nullptr )
      goto $error_cleanup$115;
    if ( v3 == nullptr )
      goto $error_cleanup$115;
    if ( v35 == nullptr )
      goto $error_cleanup$115;
    if ( v34 == nullptr )
      goto $error_cleanup$115;
    for ( i = 0; i < 256; ++i )
      v3[i] = i;
    if ( !GetCPInfo(*(_DWORD *)(a1 + 8), &CPInfo) )
      goto $error_cleanup$115;
    if ( CPInfo.MaxCharSize > 5 )
      goto $error_cleanup$115;
    v24 = *(_DWORD *)(a1 + 8);
    MaxCharSize_low = LOWORD(CPInfo.MaxCharSize);
    if ( __acrt_LCMapStringA(
           nullptr,
           *(wchar_t **)(a1 + 168),
           0x100u,
           v3 + 1,
           255,
           (LPWSTR)((char *)v35 + 129),
           255,
           v24,
           0) == 0
      || __acrt_LCMapStringA(
           nullptr,
           *(wchar_t **)(a1 + 168),
           0x200u,
           v3 + 1,
           255,
           (LPWSTR)((char *)v34 + 129),
           255,
           *(_DWORD *)(a1 + 8),
           0) == 0 )
    {
      goto $error_cleanup$115;
    }
    if ( MaxCharSize_low > 1 && CPInfo.LeadByte[0] != 0 )
    {
      v5 = &CPInfo.LeadByte[1];
      do
      {
        LOBYTE(j) = *v5;
        if ( *v5 == 0 )
          break;
        v7 = *(v5 - 1);
        for ( j = (unsigned __int8)j; v7 <= j; j = *v5 )
          v3[v7++] = 32;
        v5 += 2;
      }
      while ( *(v5 - 1) != 0 );
    }
    v25 = *(_DWORD *)(a1 + 8);
    v29 = (char *)v36 + 256;
    if ( __acrt_GetStringTypeA(nullptr, 1u, v3, 256, (LPWORD)v36 + 128, v25, 0) != 0 )
    {
      v8 = v36;
      v9 = (char *)v36 + 254;
      *((_WORD *)v36 + 127) = 0;
      v10 = v35;
      v36 = v9;
      v11 = v34;
      *((_BYTE *)v35 + 127) = 0;
      v12 = MaxCharSize_low <= 1;
      v11[127] = 0;
      v27 = v10 + 128;
      v10[128] = 0;
      v30 = v11 + 128;
      v11[128] = 0;
      if ( !v12 && CPInfo.LeadByte[0] != 0 )
      {
        v13 = &CPInfo.LeadByte[1];
        do
        {
          if ( *v13 == 0 )
            break;
          v14 = *(v13 - 1);
          if ( v14 <= (unsigned int)*v13 )
          {
            v15 = &v8[v14 + 128];
            do
            {
              ++v14;
              *v15++ = 0x8000;
            }
            while ( v14 <= *v13 );
          }
          v13 += 2;
        }
        while ( *(v13 - 1) != 0 );
        v11 = v34;
      }
      qmemcpy(v8, v8 + 256, 0xFCu);
      v17 = v8 + 382;
      v16 = v8 + 126;
      v18 = (char *)v35;
      *v16 = *v17;
      qmemcpy(v18, v18 + 256, 0x7Fu);
      qmemcpy(v11, v11 + 256, 0x7Fu);
      v19 = v28;
      v20 = *(volatile signed __int32 **)(v28 + 140);
      if ( v20 != nullptr && _InterlockedExchangeAdd(v20, 0xFFFFFFFF) == 0 )
      {
        _free_base((void *)(*(_DWORD *)(v19 + 144) - 254));
        _free_base((void *)(*(_DWORD *)(v19 + 148) - 128));
        _free_base((void *)(*(_DWORD *)(v19 + 152) - 128));
        _free_base(*(void **)(v19 + 140));
      }
      v21 = Block;
      *(_DWORD *)Block = 1;
      *(_DWORD *)(v19 + 140) = v21;
      *(_DWORD *)v19 = v29;
      *(_DWORD *)(v19 + 144) = v36;
      *(_DWORD *)(v19 + 148) = v27;
      *(_DWORD *)(v19 + 152) = v30;
      *(_DWORD *)(v19 + 4) = MaxCharSize_low;
    }
    else
    {
$error_cleanup$115:
      _free_base(Block);
      _free_base(v36);
      _free_base(v35);
      _free_base(v34);
      v1 = 1;
    }
    _free_base(v31);
    return v1;
  }
  else
  {
    v23 = *(volatile signed __int32 **)(a1 + 140);
    if ( v23 != nullptr )
      _InterlockedDecrement(v23);
    *(_DWORD *)(a1 + 140) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)a1 = asc_10031620;
    *(_DWORD *)(a1 + 148) = &unk_100318A0;
    *(_DWORD *)(a1 + 152) = &unk_10031A20;
    *(_DWORD *)(a1 + 4) = 1;
    return 0;
  }
}

// Address: 0x10016933
void __cdecl __noreturn abort()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi

  if ( __acrt_get_sigabrt_handler() != 0 )
    raise(22);
  if ( (byte_1003F1E8 & 2) != 0 )
  {
    if ( IsProcessorFeaturePresent(0x17u) )
      __fastfail(7u);
    __acrt_call_reportfault(v0, v1, v2, 3, 1073741845, 1);
  }
  _exit(3);
}

// Address: 0x10016976
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
      if ( sub_1001F204() == 0 || _callnewh(v1) == 0 )
        goto LABEL_8;
    }
  }
  return result;
}

// Address: 0x100169C4
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
    if ( sub_1001F204() == 0 || _callnewh(Size) == 0 )
      goto LABEL_6;
  }
}

// Address: 0x10016A30
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

// Address: 0x10016EDE
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

// Address: 0x10016F06
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

// Address: 0x10016F40
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

// Address: 0x10016F90
// positive sp value has been detected, the output may be wrong!
double __cdecl pow(double X, double Y)
{
  int v2; // ecx
  __m128d v3; // xmm0
  __m128d v4; // xmm1
  __m128d v5; // xmm2
  __m128d v6; // xmm3
  __m128d v7; // xmm4
  __m128d v8; // xmm5
  __m128d v9; // xmm7
  int v10; // eax
  bool v11; // zf
  double result; // st7
  int v13; // eax
  double v14; // st7
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  char v19; // cl
  int v20; // ecx
  int v21; // ecx
  double v23; // rt0
  char v24; // c3
  int v25; // eax
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // ch
  char v29; // cl
  double *v30; // [esp+Ch] [ebp-80h]
  double *v31; // [esp+Ch] [ebp-80h]
  double v32[13]; // [esp+10h] [ebp-7Ch] BYREF
  char v33; // [esp+80h] [ebp-Ch]
  int v34; // [esp+84h] [ebp-8h]
  unsigned int retaddr; // [esp+8Ch] [ebp+0h] BYREF

  if ( dword_1004146C != 0 )
  {
    v10 = _mm_getcsr() & 0x7F80;
    v11 = v10 == 8064;
    if ( v10 == 8064 )
      v11 = (v33 & 0x7F) == 127;
    if ( v11 )
      return _pow_pentium4(v3, v4, v5, v6, v7, v8, v9, X, Y);
  }
  v14 = _fload_withFB(v2, (_DWORD *)&X + 1);
  v15 = v13;
  v34 = v13;
  if ( (_WORD)v13 != 639 )
    _load_CW();
  v16 = v15 & 0x7FF00000;
  if ( v16 == 2146435072 )
  {
    if ( (HIDWORD(X) | v13 & 0xFFFFF) != 0 )
    {
      _ST6 = _fload_withFB(0, &X);
      if ( 1.0 == _ST6 )
        return 1.0;
      v21 = v20 + 1;
    }
    else
    {
      _ST6 = _fload_withFB(0, &retaddr);
    }
test_base:
    if ( (LODWORD(X) & 0x7FF00000) != 0x7FF00000 || (retaddr | LODWORD(X) & 0xFFFFF) == 0 )
    {
      if ( v21 == 0 )
      {
        v30 = v32;
        __asm { fsave   byte ptr [ecx+8] }
        v25 = _powhlp(_ST6, v14, v32);
        _ECX = v31;
        __asm { frstor  byte ptr [ecx+8] }
        result = *v31;
        if ( v25 == 0 )
          return result;
        goto _ErrorHandling;
      }
      return v14 + _ST6;
    }
    v23 = _ST6;
    _ST6 = v14;
    v14 = v23;
    __asm { fxam }
    if ( v24 == 0 )
      return v14 + _ST6;
    return 1.0;
  }
  _ST6 = _fload_withFB(v16, &retaddr);
  if ( v11 )
  {
    v21 = 0;
    goto test_base;
  }
  if ( (v17 & 0x7FF00000) != 0 || (retaddr | LODWORD(X) & 0xFFFFF) != 0 )
  {
    if ( SBYTE3(X) < 0 )
    {
      test_whether_TOS_is_int(v14);
      _ST6 = -_ST6;
      if ( v29 == 0 )
      {
        result = -2.0;
_ErrorHandling:
        if ( dword_10041358 == 0 )
          _startTwoArgErrorHandling();
        return result;
      }
    }
    result = _twoToTOS(__FYL2X__(_ST6, v14));
    if ( v19 == 1 )
      result = -result;
    if ( dword_10041358 == 0 )
      ((void (__fastcall *)(void *, int))_check_range_exit)(&unk_100324F0, 29);
  }
  else
  {
    if ( (HIDWORD(X) | LODWORD(Y) & 0x7FFFFFFF) == 0 )
      return 1.0;
    test_whether_TOS_is_int(v14);
    v28 = BYTE3(X) >> 7;
    if ( (BYTE3(Y) & 0x80) != 0 )
    {
      result = -0.0;
      if ( (v27 & v28) != 0 )
        result = --0.0;
      goto _ErrorHandling;
    }
    result = 0.0;
    if ( (v27 & v28) != 0 )
      return -0.0;
  }
  return result;
}

// Address: 0x100171F1
void __usercall test_whether_TOS_is_int(long double a1@<st0>)
{
  char v1; // cl

  if ( rint(a1) == a1 )
  {
    v1 = 1;
    if ( rint(a1 * 0.5) == a1 * 0.5 )
      v1 = 2;
    odd(v1);
  }
}

// Address: 0x10017215
void odd()
{
  ;
}

// Address: 0x10017219
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

// Address: 0x10017235
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

// Address: 0x1001726F
void __noreturn terminate()
{
  void (__thiscall *v0)(_DWORD); // esi

  v0 = *(void (__thiscall **)(_DWORD))(__acrt_getptd() + 12);
  if ( v0 != nullptr )
    v0(v0);
  abort();
}

// Address: 0x100172AB
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

// Address: 0x10017304
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x1001731C
// Microsoft VisualC universal runtime
bool __cdecl unknown_libname_43(int a1)
{
  return a1 % 4 == 0 && a1 % 100 != 0 || (a1 + 1900) % 400 == 0;
}

// Address: 0x1001735D
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

// Address: 0x100174A7
BOOL __cdecl internal_isupper_l(int C, _locale_t Locale)
{
  return _ischartype_l(C, 1, Locale) != 0;
}

// Address: 0x100174C4
int __cdecl _tolower_l(int C, _locale_t Locale)
{
  return common_tox_l<&bool internal_isupper_l(int,__crt_locale_pointers * const),&int internal_map_lower(int,__crt_locale_pointers * const)>(
           C,
           0x100u,
           Locale);
}

// Address: 0x100174DE
int __cdecl tolower(int C)
{
  int v1; // ecx

  if ( dword_10040F84 != 0 )
    return _tolower_l(C, nullptr);
  v1 = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return v1;
}

// Address: 0x1001750E
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

  if ( dword_10040AE0 < 5 )
  {
    if ( dword_10040AE0 < 1 )
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

// Address: 0x10017635
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

  if ( dword_10040AE0 < 5 )
  {
    if ( dword_10040AE0 < 1 )
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

// Address: 0x100177EC
int __cdecl sub_100177EC(int a1)
{
  return unknown_libname_55(a1);
}

// Address: 0x10017800
int __cdecl _callnewh(size_t Size)
{
  _PNH new_handler; // eax

  new_handler = _query_new_handler();
  return new_handler != nullptr && new_handler(Size) != 0;
}

// Address: 0x10017844
_PNH __cdecl _query_new_handler()
{
  int (__cdecl *v1)(size_t); // [esp+10h] [ebp-1Ch]

  __acrt_lock(0);
  v1 = (int (__cdecl *)(size_t))__ROR4__(dword_10040E34 ^ __security_cookie, __security_cookie & 0x1F);
  __acrt_unlock(0);
  return v1;
}

// Address: 0x10017896
int __cdecl _seh_filter_dll(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  if ( ExceptionNum == -529697949 )
    return _seh_filter_exe(0xE06D7363, ExceptionPtr);
  else
    return 0;
}

// Address: 0x100178B6
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

// Address: 0x10017A29
BOOL __cdecl atexit_exception_filter(unsigned int a1)
{
  return a1 == -529697949;
}

// Address: 0x10017A3C
void __cdecl common_exit(UINT uExitCode, enum _crt_exit_cleanup_mode a2, enum _crt_exit_return_mode a3)
{
  void (__thiscall *v3)(_DWORD, _DWORD, _DWORD, _DWORD); // ecx

  if ( a3 == _crt_exit_terminate_process && (unsigned __int8)__scrt_is_managed_app() != 0 )
    try_cor_exit_process(uExitCode);
  __acrt_lock(2);
  if ( byte_10040E40 == 0 )
  {
    _InterlockedExchange(&dword_10040E38, 1);
    if ( a2 != _crt_exit_full_cleanup )
    {
      if ( a2 == _crt_exit_quick_cleanup )
        _execute_onexit_table(&stru_10040F6C);
    }
    else
    {
      if ( dword_10040E3C != (__security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F))) )
      {
        v3 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))__ROR4__(
                                                                    dword_10040E3C ^ __security_cookie,
                                                                    __security_cookie & 0x1F);
        v3(v3, 0, 0, 0);
      }
      _execute_onexit_table(&stru_10040F60);
    }
    if ( a2 == _crt_exit_full_cleanup )
      _initterm((_PVFV *)&dword_1002D244, (_PVFV *)&dword_1002D258);
    _initterm((_PVFV *)&dword_1002D25C, (_PVFV *)&dword_1002D260);
    if ( a3 == _crt_exit_terminate_process )
      byte_10040E40 = 1;
  }
  __acrt_unlock(2);
  if ( a3 == _crt_exit_terminate_process )
    exit_or_terminate_process(uExitCode);
}

// Address: 0x10017B55
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

// Address: 0x10017B96
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

// Address: 0x10017BDA
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

// Address: 0x10017C44
int __cdecl sub_10017C44(int a1)
{
  dword_10040E3C = a1;
  return a1;
}

// Address: 0x10017C53
void __cdecl _cexit()
{
  common_exit(0, _crt_exit_full_cleanup, _crt_exit_return_to_caller);
}

// Address: 0x10017C62
void __cdecl __noreturn _exit(int Code)
{
  common_exit(Code, _crt_exit_no_cleanup, _crt_exit_terminate_process);
}

// Address: 0x10017C78
int sub_10017C78()
{
  return dword_10040E38;
}

// Address: 0x10017C7E
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
  v3 = (CHAR *)dword_10041388;
  dword_10041390 = (int)Filename;
  if ( dword_10041388 == 0 || *(_BYTE *)dword_10041388 == 0 )
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
        dword_1004137C = v9;
        Block = nullptr;
        v6 = 0;
        dword_10041380 = v8;
      }
      _free_base(v7);
      Block = nullptr;
      goto LABEL_18;
    }
    dword_1004137C = v13 - 1;
    v5 = buffer_for_argv;
    buffer_for_argv = nullptr;
    dword_10041380 = v5;
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

// Address: 0x10017DA2
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

// Address: 0x10017F17
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

// Address: 0x10017F6C
errno_t __cdecl _configure_narrow_argv(_crt_argv_mode mode)
{
  return common_configure_argv<char>(mode);
}

// Address: 0x10017F77
void *sub_10017F77()
{
  void *result; // eax

  result = dword_10040F50;
  if ( dword_10040F50 == nullptr )
  {
    if ( dword_10040F54 == 0 || common_initialize_environment_nolock<char>() != 0 )
      return nullptr;
    else
      return initialize_environment_by_cloning_nolock<char>() == 0 ? dword_10040F50 : nullptr;
  }
  return result;
}

// Address: 0x10017FA6
int common_initialize_environment_nolock<char>()
{
  char *narrow_environment_from_os; // eax
  char *v2; // esi
  int v3; // edi
  void *v4; // eax

  if ( dword_10040F50 != nullptr )
    return 0;
  __acrt_initialize_multibyte();
  narrow_environment_from_os = (char *)__dcrt_get_narrow_environment_from_os();
  v2 = narrow_environment_from_os;
  if ( narrow_environment_from_os != nullptr )
  {
    v4 = (void *)create_environment<char>(narrow_environment_from_os);
    if ( v4 != nullptr )
    {
      dword_10040F5C = v4;
      unknown_libname_55(v4);
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

// Address: 0x10017FFF
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
          unknown_libname_44(v6);
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

// Address: 0x100180D0
// Microsoft VisualC universal runtime
void __cdecl unknown_libname_44(void **Block)
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

// Address: 0x100180FF
int initialize_environment_by_cloning_nolock<char>()
{
  LPCWCH *v0; // edi
  size_t v2; // eax
  int v3; // ebx
  CHAR *v4; // eax
  CHAR *v5; // esi

  v0 = (LPCWCH *)dword_10040F54;
  if ( dword_10040F54 == 0 )
    return -1;
  while ( 1 )
  {
    if ( *v0 == nullptr )
      return 0;
    v2 = WideCharToMultiByte(0, 0, *v0, -1, nullptr, 0, nullptr, nullptr);
    v3 = v2;
    if ( v2 == 0 )
      break;
    v4 = (CHAR *)_calloc_base(v2, 1u);
    v5 = v4;
    if ( v4 == nullptr || WideCharToMultiByte(0, 0, *v0, -1, v4, v3, nullptr, nullptr) == 0 )
    {
      _free_base(v5);
      return -1;
    }
    __dcrt_set_variable_in_narrow_environment_nolock(v5, 0);
    _free_base(nullptr);
    ++v0;
  }
  return -1;
}

// Address: 0x1001817E
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_45(char *this, int (__cdecl *a2)(char *))
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

// Address: 0x100181BE
void __cdecl sub_100181BE(void ***a1)
{
  if ( *a1 != dword_10040F5C )
    unknown_libname_44(*a1);
}

// Address: 0x100181D9
void __cdecl sub_100181D9(void ***a1)
{
  if ( *a1 != dword_10040F58 )
    unknown_libname_44(*a1);
}

// Address: 0x100181F4
// attributes: thunk
void *sub_100181F4()
{
  return sub_10017F77();
}

// Address: 0x100181F9
void __dcrt_uninitialize_environments_nolock()
{
  unknown_libname_45((char *)&dword_10040F50, (int (__cdecl *)(char *))sub_100181BE);
  unknown_libname_45((char *)&dword_10040F54, (int (__cdecl *)(char *))sub_100181D9);
  unknown_libname_44((void **)dword_10040F5C);
  unknown_libname_44((void **)dword_10040F58);
}

// Address: 0x10018230
// attributes: thunk
int common_initialize_environment_nolock<char>(void)
{
  return ??$common_initialize_environment_nolock@D@@YAHXZ();
}

// Address: 0x10018235
int __stdcall __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
        int *a1,
        int a2,
        int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = _lambda_4e60a939b0d047cfe11ddc22648dfba9_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x10018286
int __stdcall __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
        int *a1,
        int a2,
        int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = _lambda_275893d493268fdec8709772e3fcec0e_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x100182D7
int __cdecl sub_100182D7(int a1, int a2)
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

// Address: 0x100182FF
int __cdecl sub_100182FF(int a1, int a2)
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

// Address: 0x10018327
// Microsoft VisualC universal runtime
uintptr_t __cdecl unknown_libname_46(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

// Address: 0x10018346
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

// Address: 0x10018466
int __thiscall _lambda_4e60a939b0d047cfe11ddc22648dfba9_::operator()(_DWORD **this)
{
  int *v1; // esi
  int v3; // ebx
  uintptr_t *v4; // edi
  unsigned int v5; // esi
  void *v6; // ebx
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // edi
  char *v10; // ecx
  uintptr_t *v11; // ecx
  int i; // eax
  uintptr_t v13; // [esp+4h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+Ch] [ebp-4h]
  uintptr_t *v17; // [esp+Ch] [ebp-4h]
  unsigned int v18; // [esp+Ch] [ebp-4h]

  v1 = (int *)**this;
  if ( v1 == nullptr )
    return -1;
  v3 = *v1;
  v4 = (uintptr_t *)__ROR4__(__security_cookie ^ v1[1], __security_cookie & 0x1F);
  v5 = __ROR4__(__security_cookie ^ v1[2], __security_cookie & 0x1F);
  v6 = (void *)__ROR4__(__security_cookie ^ v3, __security_cookie & 0x1F);
  if ( v4 == (uintptr_t *)v5 )
  {
    v7 = 512;
    v8 = (int)(v5 - (_DWORD)v6) >> 2;
    if ( v8 <= 0x200 )
      v7 = v8;
    v9 = v7 + v8;
    if ( v7 + v8 == 0 )
      v9 = 32;
    if ( v9 < v8 || (v15 = sub_10022A12(v6, v9, 4), _free_base(nullptr), v10 = (char *)v15, v15 == 0) )
    {
      v9 = v8 + 4;
      v16 = sub_10022A12(v6, v8 + 4, 4);
      _free_base(nullptr);
      v10 = (char *)v16;
      if ( v16 == 0 )
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
  *v4 = unknown_libname_46(**(this + 1));
  *(_DWORD *)**this = unknown_libname_6((int)v6);
  *(_DWORD *)(**this + 4) = unknown_libname_6((int)(v4 + 1));
  *(_DWORD *)(**this + 8) = unknown_libname_6(v5);
  return 0;
}

// Address: 0x100185A7
int __cdecl sub_100185A7(_onexit_t Function)
{
  return _register_onexit_function(&stru_10040F60, Function);
}

// Address: 0x100185BD
int __cdecl _execute_onexit_table(_onexit_table_t *Table)
{
  _onexit_table_t **p_Table; // [esp+0h] [ebp-4h] BYREF

  p_Table = &Table;
  return sub_100182D7(2, (int)&p_Table);
}

// Address: 0x100185DA
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

// Address: 0x10018617
int __cdecl _register_onexit_function(_onexit_table_t *Table, _onexit_t Function)
{
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  v3[0] = &Table;
  v3[1] = &Function;
  return sub_100182FF(2, (int)v3);
}

// Address: 0x1001863B
char sub_1001863B()
{
  unknown_libname_55(&off_1003F260);
  return 1;
}

// Address: 0x1001864D
char initialize_c()
{
  _initialize_onexit_table(&stru_10040F60);
  _initialize_onexit_table(&stru_10040F6C);
  return 1;
}

// Address: 0x10018667
char sub_10018667()
{
  __dcrt_uninitialize_environments_nolock();
  return 1;
}

// Address: 0x1001866F
char initialize_pointers()
{
  uintptr_t v0; // esi

  v0 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  sub_10014516(v0);
  sub_100177EC(v0);
  __acrt_initialize_signal_handlers(v0);
  sub_10022BA4(v0);
  sub_10017C44(v0);
  return 1;
}

// Address: 0x100186AC
__vcrt_bool sub_100186AC()
{
  return __vcrt_uninitialize(false);
}

// Address: 0x100186B5
char uninitialize_allocated_memory()
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)off_1003F920, 0xFFFFFFFF) == 0
    && off_1003F920 != &unk_1003F700 )
  {
    _free_base(off_1003F920);
    off_1003F920 = &unk_1003F700;
  }
  _free_base(dword_10040F7C);
  dword_10040F7C = nullptr;
  _free_base(dword_10040F80);
  dword_10040F80 = nullptr;
  _free_base(dword_10041380);
  dword_10041380 = nullptr;
  _free_base(dword_10041384);
  dword_10041384 = nullptr;
  return 1;
}

// Address: 0x1001872C
__crt_bool __cdecl __acrt_initialize()
{
  return __acrt_execute_initializers(&off_100325C8, "sqrt");
}

// Address: 0x1001873E
__crt_bool __cdecl __acrt_thread_attach()
{
  return __acrt_getptd_noexit() != 0;
}

// Address: 0x10018749
__crt_bool __cdecl __acrt_thread_detach()
{
  __acrt_freeptd();
  return true;
}

// Address: 0x10018751
__crt_bool __cdecl __acrt_uninitialize(__crt_bool Terminating)
{
  return __acrt_execute_uninitializers(&off_100325C8, "sqrt");
}

// Address: 0x10018763
__crt_bool __cdecl __acrt_uninitialize_critical(__crt_bool Terminating)
{
  __acrt_uninitialize_ptd(Terminating);
  return true;
}

// Address: 0x10018775
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

// Address: 0x100187D1
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

// Address: 0x10018820
double __cdecl exp(double X)
{
  int v1; // eax
  bool v2; // zf
  double result; // st7
  char v4; // [esp+0h] [ebp-8h]

  if ( dword_1004146C != 0 )
  {
    v1 = _mm_getcsr() & 0x7F80;
    v2 = v1 == 8064;
    if ( v1 == 8064 )
      v2 = (v4 & 0x7F) == 127;
    if ( v2 )
      return start_1(X);
  }
  _ctrandisp1(X);
  return result;
}

// Address: 0x100188B0
double __usercall _CIsqrt@<st0>(unsigned __int64 x@<st0>)
{
  int v2; // [esp+0h] [ebp-Ch]
  int v3; // [esp+4h] [ebp-8h]

  _checkTOS_withFB(x, HIDWORD(x));
  return start_0(v2, v3);
}

// Address: 0x100188C4
double __cdecl sqrt(double X)
{
  _fload_withFB();
  return start_0(LODWORD(X), HIDWORD(X));
}

// Address: 0x100188CD
long double __usercall start_0@<st0>(
        char a1@<zf>,
        __int16 a2@<dx>,
        char a3@<fpstat>,
        long double result@<st0>,
        int a5,
        int a6)
{
  int v6; // eax
  int v7; // eax

  v6 = a6;
  if ( a1 )
  {
    if ( (a6 & 0xFFFFF) != 0 || a5 != 0 )
    {
      result = _convertTOStoQNaN(a6, result);
      goto _Error_handling;
    }
    if ( (a6 & 0x80000000) == 0 )
      goto exit_1;
  }
  else
  {
    if ( a2 != 639 )
      _load_CW();
    if ( v6 >= 0 )
    {
      result = sqrt(result);
      goto exit_1;
    }
    if ( (v6 & 0x7FF00000) == 0 && (v6 & 0xFFFFF) == 0 && a5 == 0 )
    {
exit_1:
      if ( dword_10041358 == 0 && a2 != 639 && (a2 & 0x20) != 0 && (a3 & 0x20) != 0 )
        return _startOneArgErrorHandling(8, 5, (int)"sqrt", result);
      return result;
    }
  }
  result = -2.0;
  v7 = 1;
_Error_handling:
  if ( dword_10041358 == 0 )
    return _startOneArgErrorHandling(v7, 5, (int)"sqrt", result);
  return result;
}

// Address: 0x1001896A
int __cdecl common_tcsncpy_s<wchar_t>(_WORD *a1, int a2, int a3, int a4)
{
  int v4; // edx
  int *v6; // eax
  int v7; // esi
  int v8; // ebx
  _WORD *v9; // edi
  __int16 v10; // ax
  __int16 v11; // ax
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
      v10 = *(_WORD *)((char *)v9 + v7);
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
      v11 = *(_WORD *)((char *)v9 + v7);
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

// Address: 0x10018A37
errno_t __cdecl wcsncpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  return common_tcsncpy_s<wchar_t>(Destination, SizeInWords, (int)Source, MaxCount);
}

// Address: 0x10018A42
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

// Address: 0x10018A9C
bool __cdecl __crt_strtox::is_overflow_condition<unsigned long>(char a1, unsigned int a2)
{
  return (a1 & 4) != 0 || (a1 & 1) != 0 && ((a1 & 2) != 0 && a2 > 0x80000000 || (a1 & 2) == 0 && a2 > 0x7FFFFFFF);
}

// Address: 0x10018ACF
// Microsoft VisualC universal runtime
_DWORD *__cdecl unknown_libname_47(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a3 != nullptr )
    *a3 = a2;
  return result;
}

// Address: 0x10018AEA
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

  if ( unknown_libname_37(&a2) == 0 )
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
        __crt_strtox::c_string_character_source<char>::unget(&a2, SBYTE4(v22));
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
  __crt_strtox::c_string_character_source<char>::unget(&a2, v25);
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

// Address: 0x10018D12
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

  if ( unknown_libname_37(&a2) == 0 )
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
      __crt_strtox::c_string_character_source<wchar_t>::unget(&a2, v13);
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
  __crt_strtox::c_string_character_source<wchar_t>::unget(&a2, v8);
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

// Address: 0x100193F7
// Microsoft VisualC universal runtime
unsigned int __cdecl unknown_libname_48(int a1)
{
  wint_t **v1; // ecx
  wint_t **v3; // [esp-14h] [ebp-14h] BYREF
  wint_t **v4; // [esp-10h] [ebp-10h]
  unsigned int v5; // [esp-Ch] [ebp-Ch]
  int v6; // [esp-8h] [ebp-8h]
  wint_t **v7; // [esp-4h] [ebp-4h]

  v7 = v1;
  v6 = 1;
  v5 = 10;
  v4 = v1;
  v3 = v1;
  unknown_libname_47(&v3, a1, nullptr);
  return __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<wchar_t>>(
           nullptr,
           (wint_t *)v3,
           v4,
           v5,
           v6);
}

// Address: 0x10019421
unsigned int __cdecl sub_10019421(int a1)
{
  unsigned __int8 **v1; // ecx
  unsigned __int8 *v3; // [esp-14h] [ebp-14h] BYREF
  unsigned __int8 **v4; // [esp-10h] [ebp-10h]
  int v5; // [esp-Ch] [ebp-Ch]
  int v6; // [esp-8h] [ebp-8h]
  unsigned __int8 **v7; // [esp-4h] [ebp-4h]

  v7 = v1;
  v6 = 1;
  v5 = 10;
  v4 = v1;
  v3 = (unsigned __int8 *)v1;
  unknown_libname_47(&v3, a1, nullptr);
  return __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<char>>(
           nullptr,
           v3,
           v4,
           v5,
           v6);
}

// Address: 0x1001944B
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
  unknown_libname_47(&v5, (int)String, EndPtr);
  return __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<char>>(
           nullptr,
           v5,
           v6,
           v7,
           v8);
}

// Address: 0x10019477
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
  unknown_libname_47(&v5, (int)String, EndPtr);
  return __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<wchar_t>>(
           nullptr,
           (wint_t *)v5,
           v6,
           v7,
           v8);
}

// Address: 0x100194A3
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

// Address: 0x1001959D
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x100195B7
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

// Address: 0x100196D8
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x100196F5
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_3518db117f0e7cdb002338c5d3c47b6c_,_lambda_b2ea41f6bbb362cd97d94c6828d90b61_ &,_lambda_abdedf541bb04549bc734292b4a045d4_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  replace_current_thread_locale_nolock(
    **(struct __acrt_ptd *const **)a2,
    ***(struct __crt_locale_data *const ***)(a2 + 4));
  __acrt_unlock(*a3);
}

// Address: 0x10019745
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_51b6e8b1eb166f2a3faf91f424b38130_,_lambda_6250bd4b2a391816dd638c3bf72b0bcb_ &,_lambda_0b5a4a3e68152e1d9b943535f5f47bed_>(
        int *a1,
        int a2,
        int *a3)
{
  void *v3; // ecx

  __acrt_lock(*a1);
  v3 = *(void **)(**(_DWORD **)a2 + 72);
  if ( v3 != nullptr && _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 0 && v3 != &unk_1003F700 )
    _free_base(v3);
  __acrt_unlock(*a3);
}

// Address: 0x100197A6
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_5b71d36f03204c0beab531769a5b5694_,_lambda_be2b3da3f62db62e9dad5dc70221a656_ &,_lambda_8f9ce462984622f9bf76b59e2aaaf805_>(
        int *a1,
        struct __acrt_ptd *const **a2,
        int *a3)
{
  __acrt_lock(*a1);
  replace_current_thread_locale_nolock(**a2, nullptr);
  __acrt_unlock(*a3);
}

// Address: 0x100197F1
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_9df27f884b057bc3edfc946cb5b7cf47_,_lambda_e69574bed617af4e071282c136b37893_ &,_lambda_cc0d902bcbbeb830f749456577db4721_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_DWORD **)a2 + 72));
  __acrt_unlock(*a3);
}

// Address: 0x10019839
void __cdecl sub_10019839(int a1, int a2)
{
  int v2; // [esp+0h] [ebp-Ch] BYREF
  int v3; // [esp+4h] [ebp-8h] BYREF

  v3 = a1;
  v2 = a1;
  __crt_seh_guarded_call<void>::operator()<_lambda_51b6e8b1eb166f2a3faf91f424b38130_,_lambda_6250bd4b2a391816dd638c3bf72b0bcb_ &,_lambda_0b5a4a3e68152e1d9b943535f5f47bed_>(
    &v2,
    a2,
    &v3);
}

// Address: 0x10019861
void __cdecl sub_10019861(int a1, int a2)
{
  int v2; // [esp+0h] [ebp-Ch] BYREF
  int v3; // [esp+4h] [ebp-8h] BYREF

  v3 = a1;
  v2 = a1;
  __crt_seh_guarded_call<void>::operator()<_lambda_3518db117f0e7cdb002338c5d3c47b6c_,_lambda_b2ea41f6bbb362cd97d94c6828d90b61_ &,_lambda_abdedf541bb04549bc734292b4a045d4_>(
    &v2,
    a2,
    &v3);
}

// Address: 0x10019889
void __cdecl sub_10019889(int a1, struct __acrt_ptd *const **a2)
{
  int v2; // [esp+0h] [ebp-Ch] BYREF
  int v3; // [esp+4h] [ebp-8h] BYREF

  v3 = a1;
  v2 = a1;
  __crt_seh_guarded_call<void>::operator()<_lambda_5b71d36f03204c0beab531769a5b5694_,_lambda_be2b3da3f62db62e9dad5dc70221a656_ &,_lambda_8f9ce462984622f9bf76b59e2aaaf805_>(
    &v2,
    a2,
    &v3);
}

// Address: 0x100198B1
void __cdecl sub_100198B1(int a1, int a2)
{
  int v2; // [esp+0h] [ebp-Ch] BYREF
  int v3; // [esp+4h] [ebp-8h] BYREF

  v3 = a1;
  v2 = a1;
  __crt_seh_guarded_call<void>::operator()<_lambda_9df27f884b057bc3edfc946cb5b7cf47_,_lambda_e69574bed617af4e071282c136b37893_ &,_lambda_cc0d902bcbbeb830f749456577db4721_>(
    &v2,
    a2,
    &v3);
}

// Address: 0x100198D9
void __cdecl construct_ptd(struct __acrt_ptd *const a1, struct __crt_locale_data **const a2)
{
  struct __acrt_ptd *const *v2; // [esp+0h] [ebp-8h] BYREF
  struct __crt_locale_data **const *v3; // [esp+4h] [ebp-4h] BYREF

  *((_DWORD *)a1 + 6) = 1;
  *(_DWORD *)a1 = &unk_10032500;
  *((_DWORD *)a1 + 212) = 1;
  *((_DWORD *)a1 + 18) = &unk_1003F700;
  *((_WORD *)a1 + 54) = 67;
  *((_WORD *)a1 + 185) = 67;
  *((_DWORD *)a1 + 211) = 0;
  v3 = (struct __crt_locale_data **const *)&a1;
  sub_100198B1(5, (int)&v3);
  v2 = &a1;
  v3 = &a2;
  sub_10019861(4, (int)&v2);
}

// Address: 0x10019952
void __stdcall destroy_fls(struct __acrt_ptd *Block)
{
  if ( Block != nullptr )
  {
    destroy_ptd(Block);
    _free_base(Block);
  }
}

// Address: 0x10019973
void __cdecl destroy_ptd(void **a1)
{
  struct __acrt_ptd *const *v1; // ecx
  void **v2; // eax
  void ***v3; // [esp+0h] [ebp-4h] BYREF

  v3 = (void ***)v1;
  v2 = a1;
  if ( *a1 != &unk_10032500 )
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
  sub_10019839(5, (int)&v3);
  v3 = &a1;
  sub_10019889(4, (struct __acrt_ptd *const **)&v3);
}

// Address: 0x10019A1C
void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd *const a1, struct __crt_locale_data *const a2)
{
  int v2; // eax

  if ( *((_DWORD *)a1 + 19) != 0 )
  {
    __acrt_release_locale_ref(*((_DWORD *)a1 + 19));
    v2 = *((_DWORD *)a1 + 19);
    if ( (struct __crt_locale_data *)v2 != dword_10040F88
      && (wchar_t **)v2 != &off_1003F260
      && *(_DWORD *)(v2 + 12) == 0 )
    {
      __acrt_free_locale(*((void **)a1 + 19));
    }
  }
  *((_DWORD *)a1 + 19) = a2;
  if ( a2 != nullptr )
    __acrt_add_locale_ref(a2);
}

// Address: 0x10019A67
void __acrt_freeptd()
{
  struct __acrt_ptd *Value; // esi

  if ( dword_1003F250 != -1 )
  {
    Value = (struct __acrt_ptd *)__acrt_FlsGetValue(dword_1003F250);
    if ( Value != nullptr )
    {
      __acrt_FlsSetValue(dword_1003F250, nullptr);
      destroy_fls(Value);
    }
  }
}

// Address: 0x10019A93
void *__cdecl __acrt_getptd()
{
  DWORD LastError; // esi
  void *Value; // edi
  void *v2; // eax

  LastError = GetLastError();
  if ( dword_1003F250 == -1 || (Value = (void *)__acrt_FlsGetValue(dword_1003F250)) == nullptr )
  {
    v2 = _calloc_base(1u, 0x364u);
    Value = v2;
    if ( v2 == nullptr )
    {
      _free_base(nullptr);
      goto LABEL_9;
    }
    if ( __acrt_FlsSetValue(dword_1003F250, v2) == 0 )
    {
      _free_base(Value);
      goto LABEL_9;
    }
    construct_ptd((struct __acrt_ptd *const)Value, &dword_10040F88);
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

// Address: 0x10019B17
void *__acrt_getptd_noexit()
{
  DWORD LastError; // esi
  int v1; // ebx
  void *Value; // edi
  void *v3; // eax

  LastError = GetLastError();
  v1 = 0;
  if ( dword_1003F250 != -1 )
  {
    Value = (void *)__acrt_FlsGetValue(dword_1003F250);
    if ( Value != nullptr )
      goto LABEL_9;
  }
  v3 = _calloc_base(1u, 0x364u);
  Value = v3;
  if ( v3 != nullptr )
  {
    if ( __acrt_FlsSetValue(dword_1003F250, v3) == 0 )
    {
      _free_base(Value);
      goto LABEL_8;
    }
    construct_ptd((struct __acrt_ptd *const)Value, &dword_10040F88);
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

// Address: 0x10019B9C
char __acrt_initialize_ptd()
{
  dword_1003F250 = __acrt_FlsAlloc(destroy_fls);
  if ( dword_1003F250 == -1 )
    return 0;
  if ( __acrt_getptd_noexit() == nullptr )
  {
    __acrt_uninitialize_ptd(0);
    return 0;
  }
  return 1;
}

// Address: 0x10019BC8
char __acrt_uninitialize_ptd()
{
  if ( dword_1003F250 != -1 )
  {
    __acrt_FlsFree(dword_1003F250);
    dword_1003F250 = -1;
  }
  return 1;
}

// Address: 0x10019BE2
struct __crt_locale_data *__cdecl sub_10019BE2(int a1, struct __crt_locale_data **a2)
{
  struct __crt_locale_data *result; // eax

  result = *a2;
  if ( *a2 != dword_10040F88 )
  {
    result = (struct __crt_locale_data *)dword_1003F3F8;
    if ( (dword_1003F3F8 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_locale_data *)__acrt_update_thread_locale_data();
      *a2 = result;
    }
  }
  return result;
}

// Address: 0x10019C0F
void *__cdecl sub_10019C0F(int a1, void **a2)
{
  void *result; // eax

  result = *a2;
  if ( *a2 != off_1003F920 )
  {
    result = (void *)dword_1003F3F8;
    if ( (dword_1003F3F8 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (void *)__acrt_update_thread_multibyte_data();
      *a2 = result;
    }
  }
  return result;
}

// Address: 0x10019C3C
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

// Address: 0x10019CA8
bool __cdecl __acrt_fp_is_negative(const double *a1)
{
  return *((int *)a1 + 1) < 0;
}

// Address: 0x10019CC6
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

// Address: 0x10019FC9
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

// Address: 0x1001A064
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

// Address: 0x1001A1AF
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

// Address: 0x1001A23C
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

// Address: 0x1001A313
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

// Address: 0x1001A3DB
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
    Source[0] = "INF";
    Source[1] = "INF";
    Source[2] = "inf";
    Source[3] = "inf";
    Source[10] = "nan(snan)";
    Source[6] = "nan";
    Source[7] = "nan";
    Source[11] = "nan";
    Source[15] = "nan";
    Source[12] = "NAN(IND)";
    Source[4] = "NAN";
    Source[5] = "NAN";
    Source[9] = "NAN";
    Source[13] = "NAN";
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

// Address: 0x1001A4D3
void __cdecl shift_bytes(char *const a1, unsigned int a2, char *const Src, int a4)
{
  if ( a4 != 0 )
    memmove(&Src[a4], Src, strlen(Src) + 1);
}

// Address: 0x1001A507
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

// Address: 0x1001A651
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

// Address: 0x1001A677
int __cdecl _get_printf_count_output()
{
  return dword_10040F78 == (__security_cookie | 1);
}

// Address: 0x1001A68C
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
    v3 = &dword_10040F7C;
  }
  else
  {
    if ( Stream != __acrt_iob_func(2u) )
      return 0;
    v3 = &dword_10040F80;
  }
  ++dword_10040CE8;
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

// Address: 0x1001A741
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

// Address: 0x1001A77A
int __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_70818de7b02deff9841e8b0962a60ed9_,_lambda_2af78c5f5901b1372d98f9ab3177dfa6_ &,_lambda_f51fe5fd7c79a33db34fc9310f277369_ &>(
        int a1,
        int a2,
        int **a3)
{
  int result; // eax

  sub_1001A820(a2);
  result = **a3;
  *(_DWORD *)(result + 848) &= ~0x10u;
  return result;
}

// Address: 0x1001A7B5
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_c76fdea48760d5f9368b465f31df4405_,_lambda_e378711a6f6581bf7f0efd7cdf97f5d9_ &,_lambda_e927a58b2a85c081d733e8c6192ae2d2_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  unknown_libname_49(a2);
  __acrt_unlock(*a3);
}

// Address: 0x1001A7F8
void __cdecl sub_1001A7F8(int a1, int a2)
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

// Address: 0x1001A820
void __thiscall sub_1001A820(_DWORD **this)
{
  void *v2; // esi
  _DWORD v3[5]; // [esp+8h] [ebp-14h] BYREF

  v2 = _calloc_base(1u, 0xB8u);
  **this = v2;
  _free_base(nullptr);
  if ( v2 != nullptr )
  {
    qmemcpy(v3, this, sizeof(v3));
    sub_1001A7F8(4, (int)v3);
  }
}

// Address: 0x1001A87C
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_49(void ***this)
{
  int v2; // eax
  const unsigned __int16 *v3; // eax
  int v4; // eax
  int result; // eax

  _copytlocinfo_nolock(**this, *((_DWORD *)**(this + 1) + 19));
  v2 = _wsetlocale_nolock((int)**this, (int)**(this + 3), (wchar_t *)**(this + 4));
  **(this + 2) = (void *)v2;
  if ( v2 != 0 )
  {
    v3 = (const unsigned __int16 *)**(this + 4);
    if ( v3 != nullptr )
    {
      v4 = wcscmp(v3, word_1003F320);
      if ( v4 != 0 )
        v4 = v4 < 0 ? -1 : 1;
      if ( v4 != 0 )
        _InterlockedExchange(&dword_10040F84, 1);
    }
    _updatetlocinfoEx_nolock((char *)**(this + 1) + 76, **this);
    __acrt_release_locale_ref(**this);
    result = (int)**(this + 1);
    if ( (*(_BYTE *)(result + 848) & 2) == 0 && (dword_1003F3F8 & 1) == 0 )
    {
      _updatetlocinfoEx_nolock(&dword_10040F88, *(_DWORD *)(result + 76));
      off_1003F248 = *((_UNKNOWN ***)dword_10040F88 + 34);
      off_1003F1E0 = *(wchar_t **)dword_10040F88;
      result = *((_DWORD *)dword_10040F88 + 1);
      dword_1003F258 = result;
    }
  }
  else
  {
    __acrt_release_locale_ref(**this);
    return __acrt_free_locale(**this);
  }
  return result;
}

// Address: 0x1001A97A
wchar_t *__cdecl __acrt_copy_locale_name(wchar_t *Source)
{
  wchar_t *result; // eax
  size_t v2; // ebx
  wchar_t *v3; // edi

  if ( Source == nullptr )
    return nullptr;
  v2 = wcsnlen(Source, 0x55u);
  if ( v2 >= 0x55 )
    return nullptr;
  result = (wchar_t *)_malloc_base(2 * v2 + 2);
  v3 = result;
  if ( result != nullptr )
  {
    if ( wcsncpy_s(result, v2 + 1, Source, v2 + 1) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    return v3;
  }
  return result;
}

// Address: 0x1001A9E0
__int32 sub_1001A9E0()
{
  return _InterlockedExchange(&dword_10040F84, 1);
}

// Address: 0x1001A9EB
void __acrt_uninitialize_locale()
{
  if ( dword_10040F88 != (struct __crt_locale_data *)&off_1003F260 )
  {
    __acrt_lock(4);
    dword_10040F88 = (struct __crt_locale_data *)_updatetlocinfoEx_nolock(&dword_10040F88, &off_1003F260);
    __acrt_unlock(4);
  }
}

// Address: 0x1001AA3D
wchar_t *__cdecl __lc_lctowcs(wchar_t *Destination, rsize_t SizeInWords, wchar_t *Source)
{
  wchar_t *result; // eax

  if ( wcscpy_s(Destination, SizeInWords, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  result = Source + 64;
  if ( Source[64] != 0 )
    result = (wchar_t *)_wcscats(Destination, SizeInWords, 2);
  if ( Source[128] != 0 )
    return (wchar_t *)_wcscats(Destination, SizeInWords, 2);
  return result;
}

// Address: 0x1001AAAD
int __cdecl __lc_wcstolc(wchar_t *a1, wchar_t *Source)
{
  const wchar_t *v2; // esi
  rsize_t v4; // eax
  int v5; // ebx
  errno_t v6; // eax
  wchar_t *v7; // eax
  rsize_t v8; // [esp-Ch] [ebp-20h]
  const wchar_t *v9; // [esp-8h] [ebp-1Ch]
  rsize_t v10; // [esp-4h] [ebp-18h]
  const wchar_t *v11; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  memset(a1, 0, 0x1CAu);
  v2 = Source;
  if ( *Source == 0 )
    return 0;
  if ( *Source == 46 && Source[1] != 0 )
  {
    if ( wcsncpy_s(a1 + 128, 0x10u, Source + 1, 0xFu) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    a1[143] = 0;
    return 0;
  }
  for ( i = 0; ; ++i )
  {
    v4 = wcscspn(v2, L"_.,");
    if ( v4 == 0 )
      break;
    v5 = v2[v4];
    v11 = &v2[v4];
    if ( i != 0 )
    {
      if ( i == 1 )
      {
        if ( v4 >= 0x40 || v5 == 95 )
          return -1;
        v10 = v4;
        v9 = v2;
        v8 = 64;
        v7 = a1 + 64;
      }
      else
      {
        if ( i != 2 || v4 >= 0x10 || (_WORD)v5 != 0 && (_WORD)v5 != 44 )
          return -1;
        v10 = v4;
        v9 = v2;
        v8 = 16;
        v7 = a1 + 128;
      }
      v6 = wcsncpy_s(v7, v8, v9, v10);
    }
    else
    {
      if ( v4 >= 0x40 || (_WORD)v5 == 46 )
        return -1;
      v6 = wcsncpy_s(a1, 0x40u, v2, v4);
    }
    if ( v6 != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( (_WORD)v5 == 44 || (_WORD)v5 == 0 )
      return 0;
    v2 = v11 + 1;
  }
  return -1;
}

// Address: 0x1001ABDC
void __cdecl _copytlocinfo_nolock(_DWORD *a1, _DWORD *a2)
{
  if ( a2 != nullptr && a1 != nullptr && a1 != a2 )
  {
    qmemcpy(a1, a2, 0xB8u);
    a1[3] = 0;
    __acrt_add_locale_ref(a1);
  }
}

// Address: 0x1001AC0B
wchar_t *__cdecl _expandlocale(wchar_t *a1, wchar_t *a2, rsize_t SizeInWords, wchar_t *a4, rsize_t a5, _DWORD *a6)
{
  _DWORD *v6; // ebx
  char *v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  BOOL v12; // ebx
  bool v13; // zf
  _DWORD *v14; // ebx
  int qualified_locale; // eax
  errno_t v16; // eax
  UINT ACP; // eax
  wchar_t *v18; // ebx
  wchar_t *v19; // [esp+10h] [ebp-1F0h]
  WCHAR LCData[2]; // [esp+1Ch] [ebp-1E4h] BYREF
  wchar_t *v21; // [esp+20h] [ebp-1E0h]
  wchar_t *v22; // [esp+24h] [ebp-1DCh]
  int v23; // [esp+28h] [ebp-1D8h]
  wchar_t *Source; // [esp+2Ch] [ebp-1D4h]
  wchar_t v25[144]; // [esp+30h] [ebp-1D0h] BYREF
  wchar_t v26[86]; // [esp+150h] [ebp-B0h] BYREF

  v6 = a6;
  v22 = a4;
  if ( a1 == nullptr )
    return nullptr;
  v8 = (char *)__acrt_getptd();
  v23 = (int)(v8 + 104);
  v21 = (wchar_t *)(v8 + 108);
  Source = (wchar_t *)(v8 + 370);
  v19 = (wchar_t *)(v8 + 672);
  *(_DWORD *)LCData = 0;
  if ( wcsncpy_s(a4, a5, (const wchar_t *)v8 + 336, 0x55u) != 0 )
    goto LABEL_24;
  if ( *a1 != 67 || a1[1] != 0 )
  {
    v9 = wcslen(a1);
    if ( v9 < 0x83 )
    {
      v10 = wcscmp(Source, a1);
      if ( v10 != 0 )
        v10 = v10 < 0 ? -1 : 1;
      if ( v10 == 0 )
        goto LABEL_40;
      v11 = wcscmp(v21, a1);
      if ( v11 != 0 )
        v11 = v11 < 0 ? -1 : 1;
      if ( v11 == 0 )
      {
LABEL_40:
        if ( v6 != nullptr )
          *v6 = *(_DWORD *)v23;
        v18 = Source;
        if ( wcscpy_s(a2, SizeInWords, Source) == 0 )
          return v18;
LABEL_24:
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
    }
    v12 = (unsigned __int8)__uncaught_exception_0() == 0;
    if ( __lc_wcstolc(v25, a1) != 0 )
    {
      v14 = (_DWORD *)v23;
    }
    else
    {
      v13 = !v12;
      v14 = (_DWORD *)v23;
      if ( v13 )
        qualified_locale = __acrt_get_qualified_locale((int)v25, v23, v25);
      else
        qualified_locale = __acrt_get_qualified_locale_downlevel((int)v25, v23, v25);
      if ( qualified_locale != 0 )
      {
        __lc_lctowcs(Source, 0x83u, v25);
        if ( v22 == nullptr )
        {
LABEL_34:
          if ( *a1 != 0 && v9 < 0x83 )
          {
            if ( wcsncpy_s(v21, 0x83u, a1, v9 + 1) != 0 )
              _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
          }
          else
          {
            *v21 = 0;
          }
          v6 = a6;
          goto LABEL_40;
        }
        v16 = wcsncpy_s(v22, a5, v26, wcslen(v26) + 1);
LABEL_33:
        if ( v16 != 0 )
          goto LABEL_24;
        goto LABEL_34;
      }
    }
    if ( __acrt_IsValidLocaleName(a1) == 0 )
    {
      if ( wcsncpy_s(v19, 0x55u, v22, wcslen(v22) + 1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      return nullptr;
    }
    if ( __acrt_GetLocaleInfoEx(a1, 0x20001004u, LCData, 2) == 0 || (LOWORD(ACP) = LCData[0], *(_DWORD *)LCData == 0) )
    {
      ACP = GetACP();
      *(_DWORD *)LCData = ACP;
    }
    *v14 = (unsigned __int16)ACP;
    if ( wcsncpy_s(Source, 0x83u, a1, v9 + 1) != 0 || wcsncpy_s(v22, a5, a1, v9 + 1) != 0 )
      goto LABEL_24;
    v16 = wcsncpy_s(v19, 0x55u, a1, v9 + 1);
    goto LABEL_33;
  }
  if ( wcscpy_s(a2, SizeInWords, L"C") != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( a6 != nullptr )
    *a6 = 0;
  return a2;
}

// Address: 0x1001AF82
void __cdecl _wcscats(wchar_t *Destination, rsize_t SizeInWords, int a3)
{
  int v3; // esi
  const wchar_t **v4; // edi

  v3 = 0;
  if ( a3 > 0 )
  {
    v4 = (const wchar_t **)&a3;
    do
    {
      if ( wcscat_s(Destination, SizeInWords, *++v4) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      ++v3;
    }
    while ( v3 < a3 );
  }
}

// Address: 0x1001AFC3
wchar_t *__cdecl _wsetlocale(int Category, const wchar_t *Locale)
{
  _DWORD v3[5]; // [esp+0h] [ebp-28h] BYREF
  void **v4; // [esp+14h] [ebp-14h] BYREF
  int v5; // [esp+18h] [ebp-10h] BYREF
  wchar_t *v6; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD *v7; // [esp+20h] [ebp-8h] BYREF
  char v8; // [esp+27h] [ebp-1h] BYREF

  v6 = nullptr;
  v5 = 0;
  if ( (unsigned int)Category <= 5 )
  {
    v7 = __acrt_getptd();
    __acrt_update_thread_locale_data();
    v7[212] |= 0x10u;
    v4 = (void **)&v7;
    v3[0] = &v5;
    v3[1] = &v7;
    v3[2] = &v6;
    v3[3] = &Category;
    v3[4] = &Locale;
    __crt_seh_guarded_call<void>::operator()<_lambda_70818de7b02deff9841e8b0962a60ed9_,_lambda_2af78c5f5901b1372d98f9ab3177dfa6_ &,_lambda_f51fe5fd7c79a33db34fc9310f277369_ &>(
      (int)&v8,
      (int)v3,
      (int **)&v4);
    return v6;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return nullptr;
  }
}

// Address: 0x1001B043
char *__cdecl _wsetlocale_get_all(int a1)
{
  char *v1; // ebx
  char *result; // eax
  wchar_t *v3; // edi
  const unsigned __int16 *v4; // eax
  int v5; // eax
  volatile signed __int32 *v6; // ecx
  volatile signed __int32 *v7; // eax
  volatile signed __int32 *v8; // ecx
  volatile signed __int32 *v9; // eax
  const unsigned __int16 **v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  wchar_t **v12; // [esp+10h] [ebp-4h]

  v11 = 1;
  v1 = (char *)_malloc_base(0x6A6u);
  result = nullptr;
  if ( v1 != nullptr )
  {
    v3 = (wchar_t *)(v1 + 4);
    *((_WORD *)v1 + 2) = 0;
    *(_DWORD *)v1 = 1;
    v10 = (const unsigned __int16 **)(a1 + 48);
    _wcscats((wchar_t *)v1 + 2, 0x351u, 3);
    v12 = &off_1003269C;
    do
    {
      if ( wcscat_s(v3, 0x351u, L";") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v4 = *v10;
      v10 += 4;
      v5 = wcscmp(v4, *v10);
      if ( v5 != 0 )
        v5 = v5 < 0 ? -1 : 1;
      v12 += 3;
      v11 = v5 == 0 ? v11 : 0;
      _wcscats(v3, 0x351u, 3);
    }
    while ( (int)v12 < (int)&off_100326CC );
    if ( v11 != 0 )
    {
      _free_base(v1);
      v8 = *(volatile signed __int32 **)(a1 + 40);
      if ( v8 != nullptr && _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 0 )
        _free_base(*(void **)(a1 + 40));
      v9 = *(volatile signed __int32 **)(a1 + 36);
      if ( v9 != nullptr && _InterlockedDecrement(v9) == 0 )
        _free_base(*(void **)(a1 + 36));
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      return *(char **)(a1 + 64);
    }
    else
    {
      v6 = *(volatile signed __int32 **)(a1 + 40);
      if ( v6 != nullptr && _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 0 )
        _free_base(*(void **)(a1 + 40));
      v7 = *(volatile signed __int32 **)(a1 + 36);
      if ( v7 != nullptr && _InterlockedDecrement(v7) == 0 )
        _free_base(*(void **)(a1 + 36));
      *(_DWORD *)(a1 + 36) = 0;
      result = v1 + 4;
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 40) = v1;
      *(_DWORD *)(a1 + 32) = v1 + 4;
    }
  }
  return result;
}

// Address: 0x1001B1DC
char *__cdecl _wsetlocale_nolock(int a1, int a2, wchar_t *String2)
{
  const wchar_t *v3; // esi
  int v4; // edi
  char *result; // eax
  int v6; // ebx
  wchar_t *v7; // eax
  const wchar_t **v8; // ebx
  const wchar_t *v9; // ecx
  __int16 v10; // ax
  const wchar_t *v11; // ebx
  rsize_t v12; // esi
  int v13; // eax
  const wchar_t *v14; // esi
  bool v15; // zf
  wchar_t **v16; // edx
  int v17; // esi
  wchar_t *v18; // ecx
  wchar_t *v19; // eax
  bool v20; // cf
  wchar_t v21; // dx
  int v22; // eax
  int v23; // eax
  size_t v24; // eax
  wchar_t *v25; // [esp+Ch] [ebp-1D0h]
  int v26; // [esp+18h] [ebp-1C4h]
  wchar_t v27; // [esp+1Ah] [ebp-1C2h]
  size_t MaxCount; // [esp+1Ch] [ebp-1C0h]
  int MaxCounta; // [esp+1Ch] [ebp-1C0h]
  int v30; // [esp+20h] [ebp-1BCh]
  wchar_t **v31; // [esp+20h] [ebp-1BCh]
  wchar_t v32[86]; // [esp+24h] [ebp-1B8h] BYREF
  wchar_t Destination[132]; // [esp+D0h] [ebp-10Ch] BYREF

  v3 = String2;
  v4 = a1;
  if ( a2 != 0 )
  {
    if ( String2 != nullptr )
      return (char *)_wsetlocale_set_cat(a1, a2, String2);
    else
      return *(char **)(a1 + 16 * (a2 + 2));
  }
  MaxCount = 1;
  v6 = 0;
  v30 = 0;
  if ( String2 == nullptr )
    return _wsetlocale_get_all(v4);
  if ( *String2 == 76 && String2[1] == 67 && String2[2] == 95 )
  {
    while ( 1 )
    {
      v7 = wcspbrk(v3, L"=;");
      v25 = v7;
      if ( v7 == nullptr )
        return nullptr;
      MaxCounta = v7 - v3;
      if ( MaxCounta == 0 || *v7 == 59 )
        return nullptr;
      v8 = (const wchar_t **)&off_1003269C;
      v26 = 1;
      do
      {
        if ( wcsncmp(*v8, v3, MaxCounta) == 0 )
        {
          v9 = *v8;
          do
            v10 = *v9++;
          while ( v10 != 0 );
          if ( MaxCounta == v9 - (*v8 + 1) )
            break;
        }
        ++v26;
        v8 += 3;
      }
      while ( (int)v8 <= (int)&off_100326CC );
      v11 = v25 + 1;
      v4 = a1;
      v12 = wcscspn(v25 + 1, L";");
      if ( v12 == 0 && *v11 != 59 )
        return nullptr;
      if ( v26 > 5 )
      {
        v13 = v30;
      }
      else
      {
        if ( wcsncpy_s(Destination, 0x83u, v11, v12) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        if ( 2 * v12 >= 0x106 )
          __report_rangecheckfailure();
        Destination[v12] = 0;
        v15 = _wsetlocale_set_cat(a1, v26, Destination) == 0;
        v13 = v30;
        if ( !v15 )
          v13 = ++v30;
      }
      v14 = &v11[v12];
      if ( *v14 != 0 )
      {
        v3 = v14 + 1;
        if ( *v3 != 0 )
          continue;
      }
      v15 = v13 == 0;
      goto LABEL_49;
    }
  }
  result = (char *)_expandlocale(String2, Destination, 0x83u, v32, 0x55u, nullptr);
  if ( result == nullptr )
    return result;
  v16 = (wchar_t **)(a1 + 32);
  v17 = 0;
  v31 = (wchar_t **)(a1 + 32);
  do
  {
    if ( v17 != 0 )
    {
      v18 = *v16;
      v19 = Destination;
      while ( 1 )
      {
        v20 = *v19 < *v18;
        v4 = a1;
        if ( *v19 != *v18 )
          break;
        if ( *v19 == 0 )
          goto LABEL_38;
        v21 = v19[1];
        v20 = v21 < v18[1];
        v15 = v21 == v18[1];
        v27 = v21;
        v16 = v31;
        if ( !v15 )
          break;
        v19 += 2;
        v18 += 2;
        if ( v27 == 0 )
        {
LABEL_38:
          v22 = 0;
          goto LABEL_40;
        }
      }
      v22 = v20 ? -1 : 1;
LABEL_40:
      if ( v22 != 0 )
      {
        v23 = _wsetlocale_set_cat(a1, v17, Destination);
        v16 = v31;
        if ( v23 == 0 )
        {
          v24 = 0;
          MaxCount = 0;
          goto LABEL_46;
        }
        ++v6;
      }
      else
      {
        ++v6;
      }
    }
    v24 = MaxCount;
LABEL_46:
    ++v17;
    v16 += 4;
    v31 = v16;
  }
  while ( v17 <= 5 );
  if ( v24 == 0 )
  {
    v15 = v6 == 0;
LABEL_49:
    if ( v15 )
      return nullptr;
  }
  return _wsetlocale_get_all(v4);
}

// Address: 0x1001B4C1
UINT __cdecl _wsetlocale_set_cat(UINT *a1, int a2, wchar_t *a3)
{
  int v3; // ebx
  UINT result; // eax
  wchar_t *p_Source; // eax
  wchar_t *v6; // edx
  wchar_t *v7; // ecx
  wchar_t v8; // si
  bool v9; // cf
  bool v10; // zf
  int v11; // esi
  wchar_t v12; // si
  wchar_t *v13; // eax
  wchar_t *v14; // ecx
  __int16 v15; // ax
  char *v16; // eax
  wchar_t *v17; // ecx
  wchar_t *v18; // eax
  _DWORD *v19; // esi
  int v20; // edx
  rsize_t *v21; // ecx
  rsize_t v22; // eax
  int v23; // ecx
  int v24; // ebx
  wchar_t *v25; // eax
  int v26; // eax
  wchar_t *v27; // ecx
  UINT v28; // [esp+10h] [ebp-2E0h]
  UINT v29; // [esp+14h] [ebp-2DCh]
  _DWORD *Block; // [esp+18h] [ebp-2D8h]
  char *v31; // [esp+1Ch] [ebp-2D4h]
  unsigned __int16 *v32; // [esp+20h] [ebp-2D0h]
  int SizeInWords; // [esp+24h] [ebp-2CCh]
  rsize_t SizeInWordsa; // [esp+24h] [ebp-2CCh]
  int v35; // [esp+28h] [ebp-2C8h]
  char *v36; // [esp+2Ch] [ebp-2C4h]
  rsize_t *v37; // [esp+2Ch] [ebp-2C4h]
  wchar_t v38; // [esp+2Eh] [ebp-2C2h]
  int v39; // [esp+30h] [ebp-2C0h] BYREF
  wchar_t *Expression; // [esp+34h] [ebp-2BCh]
  wchar_t v41[86]; // [esp+38h] [ebp-2B8h] BYREF
  WORD Buf1[128]; // [esp+E4h] [ebp-20Ch] BYREF
  wchar_t Source; // [esp+1E4h] [ebp-10Ch] BYREF
  __int16 v44; // [esp+1E6h] [ebp-10Ah] BYREF

  v3 = a2;
  v31 = (char *)__acrt_getptd() + 632;
  if ( _expandlocale(a3, &Source, 0x83u, v41, 0x55u, &v39) == nullptr )
    return 0;
  p_Source = &Source;
  v35 = 4 * (a2 + 2);
  v6 = (wchar_t *)a1[v35];
  v7 = v6;
  while ( 1 )
  {
    v8 = *p_Source;
    Expression = nullptr;
    v9 = v8 < *v7;
    v10 = v8 == *v7;
    v11 = 4 * (a2 + 2);
    if ( !v10 )
      break;
    if ( *p_Source == 0 )
      goto LABEL_8;
    v12 = p_Source[1];
    v9 = v12 < v7[1];
    v10 = v12 == v7[1];
    v38 = v12;
    v11 = 4 * (a2 + 2);
    if ( !v10 )
      break;
    p_Source += 2;
    v7 += 2;
    if ( v38 == 0 )
    {
LABEL_8:
      v13 = Expression;
      goto LABEL_10;
    }
  }
  v13 = (wchar_t *)(v9 ? -1 : 1);
LABEL_10:
  if ( v13 == nullptr )
    return (UINT)v6;
  v14 = &Source;
  do
    v15 = *v14++;
  while ( v15 != (_WORD)Expression );
  SizeInWords = (((char *)v14 - (char *)&v44) >> 1) + 1;
  v16 = (char *)_malloc_base(2 * SizeInWords + 4);
  Block = v16;
  if ( v16 == nullptr )
    return 0;
  v32 = (unsigned __int16 *)a1[v11];
  v29 = a1[a2 + 40];
  v28 = a1[2];
  v36 = v16 + 4;
  if ( wcscpy_s((wchar_t *)v16 + 2, SizeInWords, &Source) != 0 )
    _invoke_watson(Expression, Expression, Expression, (unsigned int)Expression, (uintptr_t)Expression);
  v10 = Source == 67;
  a1[v11] = (UINT)v36;
  if ( !v10 || v44 != 0 )
  {
    v18 = __acrt_copy_locale_name(v41);
    v17 = Expression;
    a1[a2 + 40] = (UINT)v18;
  }
  else
  {
    v17 = Expression;
    a1[a2 + 40] = (UINT)Expression;
  }
  switch ( a2 )
  {
    case 2:
      v19 = v31;
      v20 = (int)v17;
      v21 = (rsize_t *)v31;
      a1[2] = v39;
      v37 = (rsize_t *)v31;
      SizeInWordsa = *((_DWORD *)v31 + 8);
      v39 = *((_DWORD *)v31 + 9);
      while ( a1[2] != *v21 )
      {
        ++v20;
        v22 = *v21;
        v23 = v21[1];
        *v37 = SizeInWordsa;
        v24 = v39;
        v39 = v23;
        v21 = v37 + 2;
        v37[1] = v24;
        v3 = a2;
        v19 = v31;
        SizeInWordsa = v22;
        v37 += 2;
        if ( v20 >= 5 )
          goto LABEL_27;
      }
      if ( v20 != 0 )
      {
        *v19 = v19[2 * v20];
        v19[1] = v19[2 * v20 + 1];
        v19[2 * v20] = SizeInWordsa;
        v19[2 * v20 + 1] = v39;
      }
LABEL_27:
      if ( v20 == 5 )
      {
        v10 = __acrt_GetStringTypeA((struct __crt_locale_pointers *)Expression, 1u, &MultiByteStr, 127, Buf1, a1[2], 1) == 0;
        v25 = Expression;
        if ( v10 )
        {
          v19[1] = Expression;
        }
        else
        {
          do
          {
            Buf1[(_DWORD)v25] &= 0x1FFu;
            v25 = (wchar_t *)((char *)v25 + 1);
          }
          while ( (unsigned int)v25 < 0x7F );
          v19[1] = memcmp(Buf1, Buf2, 0xFEu) == 0;
        }
        *v19 = a1[2];
      }
      a1[6] = v19[1];
      break;
    case 1:
      a1[4] = v39;
      break;
    case 5:
      a1[5] = v39;
      break;
    default:
      break;
  }
  if ( ((int (__cdecl *)(UINT *))*(&off_10032698 + 3 * v3))(a1) != 0 )
  {
    a1[v35] = (UINT)v32;
    _free_base((void *)a1[v3 + 40]);
    a1[v3 + 40] = v29;
    _free_base(Block);
    a1[2] = v28;
    return 0;
  }
  if ( v32 == word_1003F320 || _InterlockedExchangeAdd((volatile signed __int32 *)a1[4 * v3 + 10], 0xFFFFFFFF) != 0 )
  {
    v26 = 4 * (a2 + 2);
  }
  else
  {
    _free_base((void *)a1[4 * v3 + 10]);
    _free_base((void *)a1[4 * v3 + 9]);
    _free_base((void *)a1[v3 + 40]);
    v26 = 4 * (a2 + 2);
    v27 = Expression;
    a1[v35] = (UINT)Expression;
    a1[v3 + 40] = (UINT)v27;
  }
  *Block = 1;
  result = a1[v26];
  a1[4 * v3 + 10] = (UINT)Block;
  return result;
}

// Address: 0x1001B88D
void __cdecl initialize_inherited_file_handles_nolock()
{
  int v0; // esi
  LPBYTE v1; // ebx
  int v2; // edi
  HANDLE *v3; // eax
  struct _RTL_CRITICAL_SECTION *v4; // edx
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
    if ( v0 > dword_10041190 )
      v0 = dword_10041190;
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
            v4 = &lpCriticalSection[v2 >> 6][2 * (v2 & 0x3F)];
            v4[1].DebugInfo = *(PRTL_CRITICAL_SECTION_DEBUG *)v6;
            LOBYTE(v4[1].LockSemaphore) = *v1;
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

// Address: 0x1001B943
void __cdecl initialize_stdio_handles_nolock()
{
  int i; // edi
  struct _RTL_CRITICAL_SECTION *v1; // esi
  struct _RTL_CRITICAL_SECTION_DEBUG *StdHandle; // eax
  struct _RTL_CRITICAL_SECTION_DEBUG *v3; // ebx
  DWORD FileType; // eax

  for ( i = 0; i != 3; ++i )
  {
    v1 = &lpCriticalSection[i >> 6][2 * (i & 0x3F)];
    if ( v1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-1 || v1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-2 )
    {
      LOBYTE(v1[1].LockSemaphore) = -127;
      if ( i != 0 )
      {
        if ( i == 1 )
          StdHandle = (struct _RTL_CRITICAL_SECTION_DEBUG *)GetStdHandle(0xFFFFFFF5);
        else
          StdHandle = (struct _RTL_CRITICAL_SECTION_DEBUG *)GetStdHandle(0xFFFFFFF4);
      }
      else
      {
        StdHandle = (struct _RTL_CRITICAL_SECTION_DEBUG *)GetStdHandle(0xFFFFFFF6);
      }
      v3 = StdHandle;
      if ( StdHandle == (struct _RTL_CRITICAL_SECTION_DEBUG *)-1 || StdHandle == nullptr )
        FileType = 0;
      else
        FileType = GetFileType(StdHandle);
      if ( FileType != 0 )
      {
        v1[1].DebugInfo = v3;
        if ( (unsigned __int8)FileType == 2 )
        {
          LOBYTE(v1[1].LockSemaphore) |= 0x40u;
        }
        else if ( (unsigned __int8)FileType == 3 )
        {
          LOBYTE(v1[1].LockSemaphore) |= 8u;
        }
      }
      else
      {
        LOBYTE(v1[1].LockSemaphore) |= 0x40u;
        v1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-2;
        if ( Block != nullptr )
          *(_DWORD *)(*((_DWORD *)Block + i) + 16) = -2;
      }
    }
    else
    {
      LOBYTE(v1[1].LockSemaphore) |= 0x80u;
    }
  }
}

// Address: 0x1001B9F9
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

// Address: 0x1001BA4F
char __acrt_uninitialize_lowio()
{
  unsigned int i; // esi

  for ( i = 0; i < 128; ++i )
  {
    if ( lpCriticalSection[i] != nullptr )
    {
      __acrt_lowio_destroy_handle_array(lpCriticalSection[i]);
      lpCriticalSection[i] = nullptr;
    }
  }
  return 1;
}

// Address: 0x1001BA7B
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

// Address: 0x1001BB8C
char __cdecl write_buffer_nolock<char>(char Buf, FILE *Stream)
{
  int v2; // edx
  int v3; // edi
  int cnt; // eax
  char *v5; // esi
  struct _RTL_CRITICAL_SECTION *v7; // eax
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
    v7 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
  else
    v7 = &lpCriticalSection[v2 >> 6][2 * (v2 & 0x3F)];
  if ( ((int)v7[1].LockSemaphore & 0x20) == 0 )
    goto LABEL_4;
  v8 = _lseeki64(v2, 0, 2);
  if ( (HIDWORD(v8) & (unsigned int)v8) != 0xFFFFFFFF )
    goto LABEL_4;
  _InterlockedOr(&Stream->_flag, 0x10u);
  return 1;
}

// Address: 0x1001BC58
int __cdecl __acrt_stdio_flush_and_write_narrow_nolock(unsigned __int8 Buf, FILE *Stream)
{
  return common_flush_and_write_nolock<char>(Buf, Stream);
}

// Address: 0x1001BC63
int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_61cee617f5178ae960314fd4d05640a0_,_lambda_6978c1fb23f02e42e1d9e99668cc68aa_ &,_lambda_9cd88cf8ad10232537feb2133f08c833_>(
        _DWORD *a1,
        int **a2,
        _DWORD *a3)
{
  int v3; // esi
  void *osfhandle; // eax
  unsigned int *v5; // esi

  v3 = 0;
  __acrt_lowio_lock_fh(*a1);
  if ( ((int)lpCriticalSection[**a2 >> 6][2 * (**a2 & 0x3F) + 1].LockSemaphore & 1) == 0 )
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

// Address: 0x1001BCFB
int __cdecl sub_1001BCFB(int a1, int **a2)
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

// Address: 0x1001BD23
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
      && FileHandle < (unsigned int)dword_10041190
      && ((int)lpCriticalSection[FileHandle >> 6][2 * (FileHandle & 0x3F) + 1].LockSemaphore & 1) != 0 )
    {
      p_FileHandle = &FileHandle;
      return sub_1001BCFB(FileHandle, &p_FileHandle);
    }
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x1001BD92
DWORD *__cdecl write_double_translated_ansi_nolock(DWORD *a1, int a2, char *SrcCh, int a4)
{
  int v4; // ebx
  const char *v5; // edi
  char v6; // ch
  LPCRITICAL_SECTION v7; // edx
  char v8; // cl
  int v9; // eax
  DWORD v10; // eax
  UINT CodePage; // [esp+Ch] [ebp-38h]
  DWORD v13; // [esp+10h] [ebp-34h]
  int v14; // [esp+18h] [ebp-2Ch]
  PRTL_CRITICAL_SECTION_DEBUG hFile; // [esp+1Ch] [ebp-28h]
  char *v16; // [esp+20h] [ebp-24h]
  DWORD NumberOfBytesWritten; // [esp+24h] [ebp-20h] BYREF
  __int16 Buffer; // [esp+28h] [ebp-1Ch] BYREF
  WCHAR WideCharStr; // [esp+2Ch] [ebp-18h] BYREF
  CHAR MultiByteStr[8]; // [esp+30h] [ebp-14h] BYREF
  char v21[8]; // [esp+38h] [ebp-Ch] BYREF

  v4 = 2 * (a2 & 0x3F);
  v5 = SrcCh;
  v14 = a2 >> 6;
  hFile = lpCriticalSection[a2 >> 6][v4 + 1].DebugInfo;
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
      v7 = lpCriticalSection[v14];
      v8 = BYTE1(v7[v4 + 1].SpinCount);
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
        BYTE2(lpCriticalSection[v14][v4 + 1].SpinCount) = *v5;
        BYTE1(lpCriticalSection[v14][v4 + 1].SpinCount) |= 4u;
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
    v21[0] = BYTE2(v7[v4 + 1].SpinCount);
    v21[1] = v6;
    BYTE1(v7[v4 + 1].SpinCount) = v8 & 0xFB;
    v9 = mbtowc(&WideCharStr, v21, 2u);
    goto LABEL_9;
  }
  return a1;
}

// Address: 0x1001BF45
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

// Address: 0x1001BFB2
bool __cdecl write_requires_double_translation_nolock(int FileHandle)
{
  int v2; // edi
  int v3; // esi
  DWORD Mode; // [esp+4h] [ebp-4h] BYREF

  if ( _isatty(FileHandle) == 0 )
    return false;
  v2 = FileHandle >> 6;
  v3 = 2 * (FileHandle & 0x3F);
  return SLOBYTE(lpCriticalSection[FileHandle >> 6][v3 + 1].LockSemaphore) < 0
      && (*(_DWORD *)(*((_DWORD *)__acrt_getptd() + 19) + 168) != 0
       || BYTE1(lpCriticalSection[v2][v3 + 1].LockSemaphore) != 0)
      && GetConsoleMode(lpCriticalSection[v2][v3 + 1].DebugInfo, &Mode);
}

// Address: 0x1001C028
DWORD *__cdecl write_text_ansi_nolock(DWORD *a1, int a2, char *a3, int a4)
{
  char *v4; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // ecx
  unsigned int v6; // eax
  char *v7; // edi
  char v8; // al
  DWORD v9; // edi
  DWORD v10; // eax
  struct _RTL_CRITICAL_SECTION_DEBUG *v12; // [esp+Ch] [ebp-1410h]
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-140Ch] BYREF
  char *v14; // [esp+14h] [ebp-1408h]
  _BYTE Buffer[5119]; // [esp+18h] [ebp-1404h] BYREF
  char v16; // [esp+1417h] [ebp-5h] BYREF

  v4 = a3;
  DebugInfo = lpCriticalSection[a2 >> 6][2 * (a2 & 0x3F) + 1].DebugInfo;
  *a1 = 0;
  v6 = (unsigned int)&a3[a4];
  a1[1] = 0;
  a1[2] = 0;
  v12 = DebugInfo;
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
    if ( !WriteFile(DebugInfo, Buffer, v9, &NumberOfBytesWritten, nullptr) )
    {
      *a1 = GetLastError();
      return a1;
    }
    v10 = NumberOfBytesWritten;
    a1[1] += NumberOfBytesWritten;
    if ( v10 < v9 )
      return a1;
    v6 = (unsigned int)v14;
    DebugInfo = v12;
  }
  return a1;
}

// Address: 0x1001C107
DWORD *__cdecl write_text_utf16le_nolock(DWORD *a1, int a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 *v4; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // ecx
  unsigned int v6; // eax
  char *v7; // edi
  int v8; // eax
  DWORD v9; // edi
  DWORD v10; // eax
  struct _RTL_CRITICAL_SECTION_DEBUG *v12; // [esp+Ch] [ebp-1410h]
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-140Ch] BYREF
  char *v14; // [esp+14h] [ebp-1408h]
  _BYTE Buffer[5118]; // [esp+18h] [ebp-1404h] BYREF
  char v16; // [esp+1416h] [ebp-6h] BYREF

  v4 = a3;
  DebugInfo = lpCriticalSection[a2 >> 6][2 * (a2 & 0x3F) + 1].DebugInfo;
  v6 = (unsigned int)a3 + a4;
  v12 = DebugInfo;
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
    if ( !WriteFile(DebugInfo, Buffer, v9, &NumberOfBytesWritten, nullptr) )
    {
      *a1 = GetLastError();
      return a1;
    }
    v10 = NumberOfBytesWritten;
    a1[1] += NumberOfBytesWritten;
    if ( v10 < v9 )
      return a1;
    v6 = (unsigned int)v14;
    DebugInfo = v12;
  }
  return a1;
}

// Address: 0x1001C1F5
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
  PRTL_CRITICAL_SECTION_DEBUG hFile; // [esp+10h] [ebp-1414h]
  DWORD NumberOfBytesWritten; // [esp+14h] [ebp-1410h] BYREF
  unsigned int v15; // [esp+18h] [ebp-140Ch]
  CHAR MultiByteStr[3416]; // [esp+1Ch] [ebp-1408h] BYREF
  WCHAR WideCharStr[852]; // [esp+D74h] [ebp-6B0h] BYREF
  char v18; // [esp+141Ch] [ebp-8h] BYREF

  v4 = 0;
  v5 = a1;
  v6 = (unsigned __int16 *)a3;
  hFile = lpCriticalSection[a2 >> 6][2 * (a2 & 0x3F) + 1].DebugInfo;
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

// Address: 0x1001C322
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
    || FileHandle >= (unsigned int)dword_10041190
    || (v5 = 2 * (FileHandle & 0x3F), ((int)lpCriticalSection[FileHandle >> 6][v5 + 1].LockSemaphore & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  v3 = -1;
  if ( ((int)lpCriticalSection[FileHandle >> 6][v5 + 1].LockSemaphore & 1) != 0 )
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

// Address: 0x1001C40D
int __cdecl _write_nolock(int FileHandle, wchar_t *lpBuffer, DWORD a3)
{
  wchar_t *v3; // edi
  int v5; // edx
  LPCRITICAL_SECTION v6; // eax
  char v7; // bl
  DWORD *v8; // eax
  unsigned int *p_LastError; // esi
  LPCRITICAL_SECTION v10; // ecx
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
  v5 = 2 * (FileHandle & 0x3F);
  v14 = FileHandle >> 6;
  v6 = lpCriticalSection[FileHandle >> 6];
  v15 = v5 * 24;
  v7 = BYTE1(v6[v5 + 1].LockSemaphore);
  if ( (v7 == 2 || v7 == 1) && (a3 & 1) != 0 )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( ((int)v6[v5 + 1].LockSemaphore & 0x20) != 0 )
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
  v10 = lpCriticalSection[v14];
  if ( *((char *)&v10[1].LockSemaphore + v15) < 0 )
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
  v11 = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v10[1].DebugInfo + v15);
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
    if ( (*((_BYTE *)&lpCriticalSection[v14][1].LockSemaphore + v15) & 0x40) != 0 && *(_BYTE *)v3 == 26 )
      return 0;
    *_errno() = 28;
    *__doserrno() = 0;
    return -1;
  }
  return *v12 - v12[1];
}

// Address: 0x1001C619
int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_123407a5e2ac06da108355a851863b7a_,_lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec_ &,_lambda_ae55bdf541ad94d75914d381c370e64d_>(
        _DWORD *a1,
        int **a2,
        _DWORD *a3)
{
  int v3; // esi

  __acrt_lowio_lock_fh(*a1);
  if ( ((int)lpCriticalSection[**a2 >> 6][2 * (**a2 & 0x3F) + 1].LockSemaphore & 1) != 0 )
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

// Address: 0x1001C69B
int __cdecl sub_1001C69B(int a1, int **a2)
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

// Address: 0x1001C6C3
int __cdecl sub_1001C6C3(int a1)
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
      && a1 < (unsigned int)dword_10041190
      && ((int)lpCriticalSection[a1 >> 6][2 * (a1 & 0x3F) + 1].LockSemaphore & 1) != 0 )
    {
      v2 = &a1;
      return sub_1001C69B(a1, &v2);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x1001C742
int __cdecl _close_nolock(int FileHandle)
{
  DWORD LastError; // esi
  intptr_t osfhandle; // esi
  void *v3; // eax

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && ((int)lpCriticalSection[0][5].LockSemaphore & 1) != 0
     || FileHandle == 2 && ((int)lpCriticalSection[0][3].LockSemaphore & 1) != 0)
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
  LOBYTE(lpCriticalSection[FileHandle >> 6][2 * (FileHandle & 0x3F) + 1].LockSemaphore) = 0;
  if ( LastError == 0 )
    return 0;
  __acrt_errno_map_os_error(LastError);
  return -1;
}

// Address: 0x1001C7DE
_DWORD *__cdecl __acrt_stdio_allocate_stream(_DWORD *a1)
{
  _DWORD *v1; // eax
  _BYTE v3[4]; // [esp+10h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  *a1 = 0;
  __acrt_lock(8);
  ms_exc.registration.TryLevel = 0;
  v1 = *(_DWORD **)find_or_allocate_unused_stream_nolock(v3);
  *a1 = v1;
  if ( v1 != nullptr )
  {
    v1[2] = 0;
    v1[7] = 0;
    *v1 = 0;
    v1[1] = 0;
    v1[4] = -1;
  }
  ms_exc.registration.TryLevel = -2;
  __acrt_unlock(8);
  return a1;
}

// Address: 0x1001C83D
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

// Address: 0x1001C878
FILE **__cdecl find_or_allocate_unused_stream_nolock(FILE **a1)
{
  FILE **v1; // edi
  FILE **v2; // ebx
  FILE *v3; // esi
  FILE **v5; // [esp+Ch] [ebp-4h]

  v1 = (FILE **)((char *)Block + 12);
  v2 = (FILE **)((char *)Block + 4 * Count);
  v5 = v2;
  while ( 1 )
  {
    if ( v1 == v2 )
      goto LABEL_8;
    v3 = *v1;
    if ( *v1 == nullptr )
      break;
    if ( (v3->_flag & 0x2000) == 0 )
    {
      _lock_file(*v1);
      v2 = v5;
      if ( (_InterlockedOr(&v3->_flag, 0x2000u) & 0x2000) == 0 )
        goto LABEL_9;
      _unlock_file(v3);
    }
    ++v1;
  }
  *v1 = (FILE *)_calloc_base(1u, 0x38u);
  _free_base(nullptr);
  if ( *v1 == nullptr )
  {
LABEL_8:
    *a1 = nullptr;
    return a1;
  }
  (*v1)->_file = -1;
  __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)&(*v1)[1], 0xFA0u, 0);
  v3 = *v1;
  _InterlockedOr(&(*v1)->_flag, 0x2000u);
  _lock_file(v3);
LABEL_9:
  *a1 = v3;
  return a1;
}

// Address: 0x1001C93B
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

// Address: 0x1001C979
int __cdecl common_refill_and_read_nolock<char>(FILE *Stream)
{
  int v2; // eax
  char *base; // edx
  int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // eax
  FILE *v6; // eax
  void *cnt; // [esp-Ch] [ebp-10h]
  unsigned int bufsiz; // [esp-8h] [ebp-Ch]

  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( (Stream->_flag & 0x2000) == 0 || (Stream->_flag & 0x1000) != 0 )
    return -1;
  if ( (Stream->_flag & 2) != 0 )
  {
    _InterlockedOr(&Stream->_flag, 0x10u);
    return -1;
  }
  _InterlockedOr(&Stream->_flag, 1u);
  if ( (Stream->_flag & 0x4C0) == 0 )
    __acrt_stdio_allocate_buffer_nolock(Stream);
  Stream->_ptr = (char *)Stream->_cnt;
  bufsiz = Stream->_bufsiz;
  cnt = (void *)Stream->_cnt;
  v2 = _fileno(Stream);
  Stream->_base = (char *)_read(v2, cnt, bufsiz);
  base = Stream->_base;
  if ( base == nullptr || base == (char *)-1 )
  {
    _InterlockedOr(&Stream->_flag, 8 * (base != nullptr) + 8);
    Stream->_base = nullptr;
    return -1;
  }
  if ( (Stream->_flag & 6) == 0 )
  {
    if ( _fileno(Stream) == -1 || _fileno(Stream) == -2 )
    {
      v5 = (struct _RTL_CRITICAL_SECTION *)&unk_1003F328;
    }
    else
    {
      v4 = _fileno(Stream) >> 6;
      v5 = &lpCriticalSection[v4][2 * (_fileno(Stream) & 0x3F)];
    }
    if ( ((int)v5[1].LockSemaphore & 0x82) == 0x82 )
      _InterlockedOr(&Stream->_flag, 0x20u);
  }
  v6 = Stream;
  if ( Stream->_bufsiz == 512 )
  {
    if ( (Stream->_flag & 0x40) != 0 && (Stream->_flag & 0x100) == 0 )
      Stream->_bufsiz = 4096;
    v6 = Stream;
  }
  --v6->_base;
  return (unsigned __int8)*v6->_ptr++;
}

// Address: 0x1001CAFA
int __cdecl __acrt_stdio_refill_and_read_narrow_nolock(FILE *a1)
{
  return common_refill_and_read_nolock<char>(a1);
}

// Address: 0x1001CB05
// Microsoft VisualC universal runtime
BOOL __stdcall unknown_libname_50(LPWSTR a1)
{
  BOOL (__thiscall *v1)(_DWORD, LPWSTR, _DWORD, _DWORD); // ecx

  v1 = (BOOL (__thiscall *)(_DWORD, LPWSTR, _DWORD, _DWORD))__ROR4__(
                                                              dword_10041268 ^ __security_cookie,
                                                              __security_cookie & 0x1F);
  return v1(v1, a1, 0, 0);
}

// Address: 0x1001CB4B
BOOL __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_9227be29367c048ad7fd93a717dcb1a1_,_lambda_a463b7b0560cfcaf9b17f27c6ef46564_ &,_lambda_ccea11b5727ccf69be64f5f5d9a08d9f_>(
        int *a1,
        int **a2,
        int *a3)
{
  BOOL v3; // esi

  __acrt_lock(*a1);
  dword_10041268 = unknown_libname_46(**a2);
  v3 = EnumSystemLocalesW(unknown_libname_50, 1u);
  dword_10041268 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  __acrt_unlock(*a3);
  return v3;
}

// Address: 0x1001CBCF
BOOL __cdecl sub_1001CBCF(int a1, int **a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<int>::operator()<_lambda_9227be29367c048ad7fd93a717dcb1a1_,_lambda_a463b7b0560cfcaf9b17f27c6ef46564_ &,_lambda_ccea11b5727ccf69be64f5f5d9a08d9f_>(
           &v3,
           a2,
           &v4);
}

// Address: 0x1001CBF7
int (__stdcall *__cdecl try_get_CompareStringEx())(const wchar_t *, unsigned int, const wchar_t *, int, const wchar_t *, int, struct _nlsversioninfo *, void *, int)
{
  return try_get_function(1, "CompareStringEx", "\a", &dword_10033174);
}

// Address: 0x1001CC11
FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, _DWORD *a3, _DWORD *a4)
{
  volatile __int32 *v4; // ebx
  uintptr_t v5; // edx
  FARPROC v6; // esi
  _DWORD *v8; // esi
  HMODULE module; // eax
  FARPROC ProcAddress; // eax

  v4 = (volatile __int32 *)((char *)&unk_100411E8 + 4 * a1);
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
        _InterlockedExchange(v4, unknown_libname_6((int)ProcAddress));
        return v6;
      }
      v5 = __security_cookie;
    }
    _InterlockedExchange(v4, v5 ^ __ROR4__(-1, 32 - (v5 & 0x1F)));
  }
  return nullptr;
}

// Address: 0x1001CCAD
HMODULE __cdecl try_get_module(int a1)
{
  volatile __int32 *v1; // edi
  const WCHAR *v3; // ebx
  HMODULE Library; // esi

  v1 = (volatile __int32 *)((char *)&unk_10041198 + 4 * a1);
  if ( *v1 != 0 )
    return *v1 != -1 ? (HMODULE)*v1 : nullptr;
  v3 = (&off_10032CB8)[a1];
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

// Address: 0x1001CD28
int __stdcall __acrt_AreFileApisANSI()
{
  FARPROC function; // eax

  function = try_get_function(0, "AreFileApisANSI", &dword_10033158, "AreFileApisANSI");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC))function)(function);
  else
    return 1;
}

// Address: 0x1001CD76
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

// Address: 0x1001CDEA
int __stdcall __acrt_EnumSystemLocalesEx(int a1, int a2, int a3, int a4)
{
  FARPROC function; // eax
  int *v6; // [esp+4h] [ebp-8h] BYREF

  function = try_get_function(2, "EnumSystemLocalesEx", dword_10033174, "EnumSystemLocalesEx");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int, int, int, int))function)(function, a1, a2, a3, a4);
  v6 = &a1;
  return sub_1001CBCF(4, &v6);
}

// Address: 0x1001CE57
DWORD __stdcall __acrt_FlsAlloc(int a1)
{
  FARPROC function; // eax

  function = try_get_function(3, "FlsAlloc", dword_10033190, dword_10033198);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int))function)(function, a1);
  else
    return TlsAlloc();
}

// Address: 0x1001CEAD
int __stdcall __acrt_FlsFree(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(4, "FlsFree", dword_10033198, dword_100331A0);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}

// Address: 0x1001CF03
LPVOID __stdcall __acrt_FlsGetValue(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(5, "FlsGetValue", dword_100331A0, dword_100331A8);
  if ( function != nullptr )
    return (LPVOID)((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}

// Address: 0x1001CF59
int __stdcall __acrt_FlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC function; // eax

  function = try_get_function(6, "FlsSetValue", dword_100331A8, dword_100331B0);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD, LPVOID))function)(function, dwTlsIndex, lpTlsValue);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x1001CFB2
int __stdcall __acrt_GetLocaleInfoEx(wchar_t *a1, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  FARPROC function; // eax
  LCID v6; // eax

  function = try_get_function(13, "GetLocaleInfoEx", dword_100331B8, &dword_100331C0);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, wchar_t *, LCTYPE, LPWSTR, int))function)(
             function,
             a1,
             LCType,
             lpLCData,
             cchData);
  v6 = __acrt_LocaleNameToLCID(a1, 0);
  return GetLocaleInfoW(v6, LCType, lpLCData, cchData);
}

// Address: 0x1001D01C
void __stdcall __acrt_GetSystemTimePreciseAsFileTime(LPFILETIME lpSystemTimeAsFileTime)
{
  FARPROC function; // eax

  function = try_get_function(15, "GetSystemTimePreciseAsFileTime", &dword_100331C0, dword_100331C4);
  if ( function != nullptr )
    ((void (__thiscall *)(FARPROC, LPFILETIME))function)(function, lpSystemTimeAsFileTime);
  else
    GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
}

// Address: 0x1001D072
int __stdcall __acrt_GetUserDefaultLocaleName(wchar_t *Destination, rsize_t SizeInWords)
{
  FARPROC function; // eax
  LCID UserDefaultLCID; // eax

  function = try_get_function(17, "GetUserDefaultLocaleName", dword_100331C4, "GetUserDefaultLocaleName");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, wchar_t *, rsize_t))function)(function, Destination, SizeInWords);
  UserDefaultLCID = GetUserDefaultLCID();
  return __acrt_LCIDToLocaleName(UserDefaultLCID, Destination, SizeInWords, 0);
}

// Address: 0x1001D0D9
int __stdcall __acrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC function; // eax

  function = try_get_function(20, "InitializeCriticalSectionEx", "\b", dword_100331F0);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))function)(
             function,
             lpCriticalSection,
             dwSpinCount,
             a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x1001D13B
int __stdcall __acrt_IsValidLocaleName(wchar_t *a1)
{
  FARPROC function; // eax
  LCID v3; // eax

  function = try_get_function(21, "IsValidLocaleName", dword_100331F0, "IsValidLocaleName");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, wchar_t *))function)(function, a1);
  v3 = __acrt_LocaleNameToLCID(a1, 0);
  return IsValidLocale(v3, 1u);
}

// Address: 0x1001D19E
int __stdcall __acrt_LCIDToLocaleName(int a1, wchar_t *Destination, rsize_t SizeInWords, int a4)
{
  FARPROC function; // eax

  function = try_get_function(23, "LCIDToLocaleName", dword_10033214, "LCIDToLocaleName");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int, wchar_t *, rsize_t, int))function)(
             function,
             a1,
             Destination,
             SizeInWords,
             a4);
  else
    return __acrt_DownlevelLCIDToLocaleName(a1, Destination, SizeInWords);
}

// Address: 0x1001D208
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

  function = try_get_function(22, "LCMapStringEx", dword_1003320C, dword_10033214);
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

// Address: 0x1001D290
int __stdcall __acrt_LocaleNameToLCID(wchar_t *a1, int a2)
{
  FARPROC function; // eax

  function = try_get_function(24, "LocaleNameToLCID", dword_10033230, "LocaleNameToLCID");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, wchar_t *, int))function)(function, a1, a2);
  else
    return __acrt_DownlevelLocaleNameToLCID(a1);
}

// Address: 0x1001D2EC
BOOL __uncaught_exception_0()
{
  return try_get_CompareStringEx() != nullptr;
}

// Address: 0x1001D2F8
char __acrt_initialize_winapi_thunks()
{
  memset32(&unk_100411E8, __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F)), 0x20u);
  return 1;
}

// Address: 0x1001D31E
bool __acrt_is_packaged_app()
{
  FARPROC function; // esi
  int v2; // [esp+0h] [ebp-8h] BYREF

  if ( dword_1004126C != 0 )
    return dword_1004126C == 1;
  function = try_get_function(8, "GetCurrentPackageId", dword_100331B0, dword_100331B8);
  if ( function != nullptr && (v2 = 0, ((int (__thiscall *)(FARPROC, int *, _DWORD))function)(function, &v2, 0) == 122) )
  {
    _InterlockedExchange(&dword_1004126C, 1);
    return true;
  }
  else
  {
    _InterlockedExchange(&dword_1004126C, 2);
    return false;
  }
}

// Address: 0x1001D3A5
int __cdecl __acrt_uninitialize_winapi_thunks(char a1)
{
  return __vcrt_uninitialize_winapi_thunks_0(a1);
}

// Address: 0x1001D3A7
char __cdecl __vcrt_uninitialize_winapi_thunks_0(char a1)
{
  HMODULE *v1; // esi

  if ( a1 == 0 )
  {
    v1 = (HMODULE *)&unk_10041198;
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
    while ( v1 != (HMODULE *)&unk_100411E8 );
  }
  return 1;
}

// Address: 0x1001D3DB
int __cdecl _fcloseall()
{
  int i; // esi
  int v1; // eax
  int v3; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  __acrt_lock(8);
  for ( i = 3; i != Count; ++i )
  {
    v1 = *((_DWORD *)Block + i);
    if ( v1 != 0 )
    {
      if ( (*(_DWORD *)(v1 + 12) & 0x2000) != 0 && fclose(*((FILE **)Block + i)) != -1 )
        ++v3;
      DeleteCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)Block + i) + 32));
      _free_base(*((void **)Block + i));
      *((_DWORD *)Block + i) = 0;
    }
  }
  __acrt_unlock(8);
  return v3;
}

// Address: 0x1001D47B
int __cdecl common_ftell<__int64>(FILE *Stream)
{
  int v2; // [esp+10h] [ebp-20h]

  if ( Stream != nullptr )
  {
    _lock_file(Stream);
    v2 = common_ftell_nolock<__int64>(Stream);
    _unlock_file(Stream);
    return v2;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

// Address: 0x1001D4F7
unsigned int __cdecl common_ftell_nolock<__int64>(FILE *Stream)
{
  int v2; // eax
  int v3; // esi
  __int64 v4; // rax
  int v5; // ebx
  int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // esi
  FILE *v9; // eax
  _BYTE *cnt; // ecx
  int v11; // edi
  int v12; // [esp+0h] [ebp-10h]
  int v13; // [esp+4h] [ebp-Ch]
  int v14; // [esp+8h] [ebp-8h]
  char v15; // [esp+Fh] [ebp-1h]

  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  v2 = _fileno(Stream);
  v3 = v2;
  if ( (int)Stream->_base < 0 )
    Stream->_base = nullptr;
  v4 = _lseeki64(v2, 0, 1);
  v5 = HIDWORD(v4);
  v6 = v4;
  v14 = v4;
  if ( v4 < 0 )
    return -1;
  if ( (Stream->_flag & 0xC0) == 0 )
    return v4 - (unsigned int)Stream->_base;
  v13 = v3 >> 6;
  v12 = 2 * (v3 & 0x3F);
  v15 = BYTE1(lpCriticalSection[v3 >> 6][v12 + 1].LockSemaphore);
  v7 = (__int64)&Stream->_ptr[-Stream->_cnt];
  v8 = (unsigned int)&Stream->_ptr[-Stream->_cnt];
  if ( (Stream->_flag & 3) == 0 )
  {
    if ( (Stream->_flag & 4) != 0 )
    {
LABEL_22:
      v9 = Stream;
      goto LABEL_23;
    }
    *_errno() = 22;
    return -1;
  }
  if ( v15 == 1 )
  {
    v6 = v14;
    if ( (lpCriticalSection[v13][v12 + 1].SpinCount & 0x200) != 0 )
      return common_ftell_translated_utf8_nolock(Stream, v14, v5);
  }
  if ( SLOBYTE(lpCriticalSection[v13][v12 + 1].LockSemaphore) >= 0 )
    goto LABEL_22;
  v9 = Stream;
  v6 = v14;
  if ( ((int)&Stream->_ptr[-Stream->_cnt]
      & ~((unsigned int)&Stream->_ptr[-(unsigned __int64)(unsigned int)Stream->_cnt] >> 32)) != 0 )
  {
    cnt = (_BYTE *)Stream->_cnt;
    v11 = 0;
    do
    {
      if ( *cnt == 10 )
        HIDWORD(v7) = (__PAIR64__(HIDWORD(v7), v8++) + 1) >> 32;
      ++cnt;
      ++v11;
    }
    while ( v11 != ((int)&Stream->_ptr[-Stream->_cnt]
                  & ~((unsigned int)&Stream->_ptr[-(unsigned __int64)(unsigned int)Stream->_cnt] >> 32)) );
    v6 = v14;
  }
LABEL_23:
  if ( (v5 | v6) != 0 )
  {
    if ( (v9->_flag & 1) != 0 )
      return common_ftell_read_mode_nolock(Stream, v6, v5, v8, HIDWORD(v7));
    if ( v15 == 1 )
      v8 = __SPAIR64__(HIDWORD(v7), v8) / 2;
    v8 += v6;
  }
  return v8;
}

// Address: 0x1001D68C
int __cdecl common_ftell_read_mode_nolock(FILE *Stream, __int64 Offset, __int64 a3)
{
  __int64 v3; // rax
  __int64 bufsiz; // kr10_8
  int v5; // edx
  _BYTE *cnt; // ecx
  bool v7; // zf
  __int64 v8; // rax
  LPCRITICAL_SECTION v10; // [esp+8h] [ebp-18h]
  char *base; // [esp+Ch] [ebp-14h]
  unsigned int v12; // [esp+10h] [ebp-10h]
  int FileHandle; // [esp+14h] [ebp-Ch]
  int FileHandlea; // [esp+14h] [ebp-Ch]
  __int64 v15; // [esp+18h] [ebp-8h]

  FileHandle = _fileno(Stream);
  v15 = 2;
  v10 = lpCriticalSection[FileHandle >> 6];
  v12 = 2 * (FileHandle & 0x3F);
  if ( BYTE1(v10[v12 + 1].LockSemaphore) != 1 )
    LODWORD(v15) = 1;
  base = Stream->_base;
  if ( base != nullptr )
  {
    bufsiz = (__int64)&base[(__int64)&Stream->_ptr[-Stream->_cnt]];
    if ( SLOBYTE(v10[v12 + 1].LockSemaphore) < 0 )
    {
      if ( _lseeki64(FileHandle, 0, 2) == Offset )
      {
        FileHandlea = 0;
        v5 = (unsigned int)(bufsiz + Stream->_cnt) >= Stream->_cnt ? bufsiz : 0;
        if ( v5 != 0 )
        {
          cnt = (_BYTE *)Stream->_cnt;
          do
          {
            if ( *cnt == 10 )
              ++bufsiz;
            ++cnt;
            ++FileHandlea;
          }
          while ( FileHandlea != v5 );
        }
        v7 = (Stream->_flag & 0x20) == 0;
      }
      else
      {
        v8 = _lseeki64(FileHandle, Offset, 0);
        if ( (HIDWORD(v8) & (unsigned int)v8) == 0xFFFFFFFF )
        {
          LODWORD(v3) = -1;
          return v3;
        }
        if ( bufsiz > 512 || (Stream->_flag & 0x40) == 0 || (Stream->_flag & 0x100) != 0 )
          bufsiz = Stream->_bufsiz;
        else
          bufsiz = 512;
        v7 = ((int)lpCriticalSection[FileHandle >> 6][v12 + 1].LockSemaphore & 4) == 0;
      }
      if ( !v7 )
        ++bufsiz;
    }
    return Offset + a3 / v15 - bufsiz / v15;
  }
  LODWORD(v3) = Offset;
  return v3;
}

// Address: 0x1001D810
unsigned __int64 __cdecl common_ftell_translated_utf8_nolock(FILE *Stream, __int64 Offset)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v5; // edi
  __int64 v6; // rax
  LPCRITICAL_SECTION v7; // ecx
  unsigned __int8 *v8; // edi
  unsigned __int8 *v9; // ecx
  __int64 v10; // kr08_8
  int v11; // [esp+4h] [ebp-1018h]
  unsigned int v12; // [esp+8h] [ebp-1014h]
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-1010h] BYREF
  unsigned int v14; // [esp+10h] [ebp-100Ch]
  DWORD v15; // [esp+14h] [ebp-1008h]
  _BYTE Buffer[4096]; // [esp+18h] [ebp-1004h] BYREF

  v2 = _fileno(Stream);
  v3 = v2;
  if ( Stream->_base == nullptr )
    return Offset;
  v11 = (unsigned __int64)((__int64)&Stream->_ptr[-Stream->_cnt] / 2) >> 32;
  v15 = (int)&Stream->_ptr[-Stream->_cnt] / 2;
  v5 = 2 * (v2 & 0x3F);
  v6 = _lseeki64(v2, *(_QWORD *)&lpCriticalSection[v2 >> 6][v5 + 1].RecursionCount, 0);
  v7 = lpCriticalSection[v3 >> 6];
  v12 = HIDWORD(v6);
  v14 = v6;
  if ( v6 != *(_QWORD *)&v7[v5 + 1].RecursionCount
    || !ReadFile(v7[v5 + 1].DebugInfo, Buffer, 0x1000u, &NumberOfBytesRead, nullptr)
    || (((unsigned __int64)_lseeki64(v3, Offset, 0) >> 32) & 0x80000000) != 0LL
    || v11 >= 0 && (v11 > 0 || v15 > NumberOfBytesRead) )
  {
    return -1;
  }
  v8 = &Buffer[NumberOfBytesRead];
  v9 = Buffer;
  v10 = 0;
  if ( v15 != 0 || v11 != 0 )
  {
    do
    {
      if ( v9 >= v8 )
        break;
      if ( *v9 == 13 )
      {
        if ( v9 < v8 - 1 && v9[1] == 10 )
          ++v9;
      }
      else
      {
        v9 += byte_1003F930[*v9];
      }
      ++v10;
      ++v9;
    }
    while ( v10 != __PAIR64__(v11, v15) );
  }
  return __PAIR64__(v12, v14) + v9 - Buffer;
}

// Address: 0x1001D9AB
__int64 __cdecl _ftelli64(FILE *Stream)
{
  __int64 result; // rax

  LODWORD(result) = common_ftell<__int64>(Stream);
  return result;
}

// Address: 0x1001D9B6
__int64 __cdecl _ftelli64_nolock(FILE *Stream)
{
  __int64 result; // rax

  LODWORD(result) = common_ftell_nolock<__int64>(Stream);
  return result;
}

// Address: 0x1001D9C1
int __acrt_initialize_timeset()
{
  unknown_libname_55(28800);
  unknown_libname_55(1);
  unknown_libname_55(-3600);
  dword_1004127C = (int)&off_1003F3D8;
  return 0;
}

// Address: 0x1001D9F8
int *sub_1001D9F8()
{
  return &dword_10041274;
}

// Address: 0x1001D9FE
int *sub_1001D9FE()
{
  return &dword_10041278;
}

// Address: 0x1001DA04
int *sub_1001DA04()
{
  return &dword_10041270;
}

// Address: 0x1001DA0A
int sub_1001DA0A()
{
  return dword_1004127C;
}

// Address: 0x1001DA10
int __cdecl sub_1001DA10(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_10041274;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x1001DA3C
int __cdecl sub_1001DA3C(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_10041278;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x1001DA68
int __cdecl sub_1001DA68(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_10041270;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x1001DA94
// Microsoft VisualC universal runtime
int __cdecl unknown_libname_51(int a1)
{
  return (a1 + 299) / 400 - (a1 - 1) / 100 + (a1 - 1) / 4 - 17;
}

// Address: 0x1001DACE
int __cdecl common_gmtime_s<__int64>(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // ecx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int *v7; // ecx
  unsigned int v8; // kr00_4
  unsigned __int64 v9; // kr10_8
  int v10; // edx
  int i; // eax
  int v12; // eax
  unsigned int v13; // edi
  signed __int64 v14; // kr08_8
  __int64 v15; // [esp+4h] [ebp-Ch] BYREF
  bool v16; // [esp+Fh] [ebp-1h] BYREF

  if ( a1 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  memset(a1, 0xFFu, 0x24u);
  if ( a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  v3 = a2[1];
  LODWORD(v15) = *a2;
  HIDWORD(v15) = v3;
  if ( __SPAIR64__(v3, v15) < -43200 || __SPAIR64__(v3, v15) > 0x7934126CFLL )
  {
    *_errno() = 22;
    return 22;
  }
  v16 = false;
  v4 = compute_year(&v15, &v16);
  v5 = v15;
  a1[5] = v4;
  v6 = __SPAIR64__(HIDWORD(v15), v5) / 86400;
  a1[7] = __SPAIR64__(HIDWORD(v15), v5) / 86400;
  v7 = &dword_1003538C;
  v9 = __PAIR64__(HIDWORD(v15), v5) - 86400LL * (int)v6;
  HIDWORD(v15) = HIDWORD(v9);
  v8 = v9;
  if ( !v16 )
    v7 = &dword_10035358;
  v10 = a1[7];
  for ( i = 1; v7[i] < v10; ++i )
    ;
  v12 = i - 1;
  a1[4] = v12;
  a1[3] = v10 - v7[v12];
  v13 = HIDWORD(v15);
  a1[6] = (int)(*(_QWORD *)a2 / 86400LL + 4) % 7;
  a1[2] = __SPAIR64__(v13, v8) / 3600;
  v14 = __PAIR64__(v13, v8) - 3600LL * (int)(__SPAIR64__(v13, v8) / 3600);
  a1[8] = 0;
  a1[1] = v14 / 60;
  *a1 = v14 % 60;
  return 0;
}

// Address: 0x1001DC1B
int __cdecl compute_year(__int64 *a1, bool *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  bool v4; // cf
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  int v9; // [esp+Ch] [ebp-4h]

  v2 = *a1 / 31536000;
  v9 = v2 + 70;
  *a1 -= 31536000LL * (int)v2;
  v3 = 86400LL * unknown_libname_51(v2 + 70);
  v4 = *(_DWORD *)a1 < (unsigned int)v3;
  *(_DWORD *)a1 -= v3;
  v5 = *(_DWORD *)a1;
  *((_DWORD *)a1 + 1) -= v4 + HIDWORD(v3);
  v6 = *((_DWORD *)a1 + 1);
  if ( v6 >= 0 )
  {
    v7 = v9;
    if ( unknown_libname_43(v9) )
      *a2 = true;
  }
  else
  {
    *(_DWORD *)a1 = v5 + 31536000;
    v7 = v9 - 1;
    *((_DWORD *)a1 + 1) = __CFADD__(v5, 31536000) + v6;
    if ( unknown_libname_43(v9 - 1) )
    {
      v4 = __CFADD__(*(_DWORD *)a1, 86400);
      *(_DWORD *)a1 += 86400;
      *((_DWORD *)a1 + 1) += v4;
      *a2 = true;
    }
  }
  return v7;
}

// Address: 0x1001DCBF
int __getgmtimebuf()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  int result; // eax

  v0 = __acrt_getptd_noexit();
  v1 = v0;
  if ( v0 == nullptr
    || (result = v0[14]) == 0 && (v1[14] = _malloc_base(0x24u), _free_base(nullptr), (result = v1[14]) == 0) )
  {
    *_errno() = 12;
    return 0;
  }
  return result;
}

// Address: 0x1001DCFD
errno_t __cdecl _gmtime64_s(struct tm *Tm, const __time64_t *Time)
{
  return common_gmtime_s<__int64>(Tm, Time);
}

// Address: 0x1001DD08
char __cdecl _isindst_nolock(struct tm *const a1)
{
  int v1; // eax
  int tm_year; // ecx
  int v3; // eax
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  int tm_yday; // ecx
  int v8; // esi
  int v10; // [esp+4h] [ebp-4h] BYREF

  v10 = 0;
  v1 = sub_1001DA10(&v10);
  if ( v1 != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( v10 != 0 )
  {
    tm_year = a1->tm_year;
    if ( tm_year != dword_1003F3E0 || tm_year != dword_1003F3EC )
    {
      if ( dword_10041288 != 0 )
      {
        if ( TimeZoneInformation.DaylightDate.wYear != 0 )
          cvtdate(
            0,
            0,
            tm_year,
            TimeZoneInformation.DaylightDate.wMonth,
            0,
            0,
            TimeZoneInformation.DaylightDate.wDay,
            TimeZoneInformation.DaylightDate.wHour,
            TimeZoneInformation.DaylightDate.wMinute,
            TimeZoneInformation.DaylightDate.wSecond,
            TimeZoneInformation.DaylightDate.wMilliseconds);
        else
          cvtdate(
            0,
            1,
            tm_year,
            TimeZoneInformation.DaylightDate.wMonth,
            TimeZoneInformation.DaylightDate.wDay,
            TimeZoneInformation.DaylightDate.wDayOfWeek,
            0,
            TimeZoneInformation.DaylightDate.wHour,
            TimeZoneInformation.DaylightDate.wMinute,
            TimeZoneInformation.DaylightDate.wSecond,
            TimeZoneInformation.DaylightDate.wMilliseconds);
        if ( TimeZoneInformation.StandardDate.wYear != 0 )
          cvtdate(
            1,
            0,
            a1->tm_year,
            TimeZoneInformation.StandardDate.wMonth,
            0,
            0,
            TimeZoneInformation.StandardDate.wDay,
            TimeZoneInformation.StandardDate.wHour,
            TimeZoneInformation.StandardDate.wMinute,
            TimeZoneInformation.StandardDate.wSecond,
            TimeZoneInformation.StandardDate.wMilliseconds);
        else
          cvtdate(
            1,
            1,
            a1->tm_year,
            TimeZoneInformation.StandardDate.wMonth,
            TimeZoneInformation.StandardDate.wDay,
            TimeZoneInformation.StandardDate.wDayOfWeek,
            0,
            TimeZoneInformation.StandardDate.wHour,
            TimeZoneInformation.StandardDate.wMinute,
            TimeZoneInformation.StandardDate.wSecond,
            TimeZoneInformation.StandardDate.wMilliseconds);
      }
      else
      {
        v3 = 3;
        v4 = 2;
        v5 = 1;
        v6 = 11;
        if ( tm_year < 107 )
        {
          v3 = 4;
          v6 = 10;
          v4 = 1;
          v5 = 5;
        }
        cvtdate(0, 1, tm_year, v3, v4, 0, 0, 2, 0, 0, 0);
        cvtdate(1, 1, a1->tm_year, v6, v5, 0, 0, 2, 0, 0, 0);
      }
    }
    tm_yday = a1->tm_yday;
    if ( dword_1003F3E4 >= dword_1003F3F0 )
    {
      if ( tm_yday < dword_1003F3F0 || tm_yday > dword_1003F3E4 )
        goto LABEL_21;
      if ( tm_yday <= dword_1003F3F0 || tm_yday >= dword_1003F3E4 )
        goto LABEL_28;
    }
    else if ( tm_yday >= dword_1003F3E4 && tm_yday <= dword_1003F3F0 )
    {
      if ( tm_yday > dword_1003F3E4 && tm_yday < dword_1003F3F0 )
      {
LABEL_21:
        LOBYTE(v1) = 1;
        return v1;
      }
LABEL_28:
      v8 = 1000 * (a1->tm_sec + 60 * (a1->tm_min + 60 * a1->tm_hour));
      if ( tm_yday == dword_1003F3E4 )
        LOBYTE(v1) = v8 >= dword_1003F3E8;
      else
        LOBYTE(v1) = v8 < dword_1003F3F4;
      return v1;
    }
    LOBYTE(v1) = 0;
  }
  return v1;
}

// Address: 0x1001DEEF
int __cdecl cvtdate(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // esi
  int v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int result; // eax
  bool v19; // sf
  int v20; // ecx
  int v21; // ecx
  int v22; // [esp+8h] [ebp-8h] BYREF
  bool v23; // [esp+Fh] [ebp-1h]

  v22 = 0;
  if ( a2 == 1 )
  {
    v23 = unknown_libname_43(a3);
    if ( v23 )
      v11 = dword_10035388[a4];
    else
      v11 = dword_10035354[a4];
    v12 = v11 + 1;
    v13 = (365 * a3 - 25546 + v12 + unknown_libname_51(a3)) % 7;
    v14 = 7 * a5 - v13;
    if ( v13 <= a6 )
      v14 -= 7;
    v15 = a6 + v14 + v12;
    if ( v23 )
      v16 = dword_1003538C[a4];
    else
      v16 = dword_10035358[a4];
    if ( a5 == 5 && v15 > v16 )
      v15 -= 7;
  }
  else
  {
    if ( unknown_libname_43(a3) )
      v17 = dword_10035388[a4];
    else
      v17 = dword_10035354[a4];
    v15 = a7 + v17;
  }
  result = a11 + 1000 * (a10 + 60 * (a9 + 60 * a8));
  if ( a1 == 0 )
  {
    dword_1003F3E4 = v15;
    dword_1003F3E8 = a11 + 1000 * (a10 + 60 * (a9 + 60 * a8));
    dword_1003F3E0 = a3;
    return result;
  }
  dword_1003F3F4 = a11 + 1000 * (a10 + 60 * (a9 + 60 * a8));
  dword_1003F3F0 = v15;
  if ( sub_1001DA3C(&v22) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  result = 1000 * v22;
  v19 = 1000 * v22 + dword_1003F3F4 < 0;
  v20 = 1000 * v22 + dword_1003F3F4;
  dword_1003F3F4 = v20;
  if ( v19 )
  {
    v21 = v20 + 86400000;
    --dword_1003F3F0;
LABEL_24:
    dword_1003F3F4 = v21;
    goto LABEL_25;
  }
  result = 86400000;
  if ( v20 >= 86400000 )
  {
    v21 = v20 - 86400000;
    ++dword_1003F3F0;
    goto LABEL_24;
  }
LABEL_25:
  dword_1003F3EC = a3;
  return result;
}

// Address: 0x1001E03F
void __cdecl tzset_from_environment_nolock(char *Source)
{
  char **v1; // ebx
  char *v2; // esi
  int v3; // eax
  int v4; // edi
  bool v5; // bl
  unsigned int v6; // ecx
  char v7; // al
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // esi
  int v11; // esi
  BOOL v12; // [esp+8h] [ebp-Ch] BYREF
  char **v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h] BYREF

  v14 = 0;
  v1 = (char **)sub_1001DA0A();
  v12 = false;
  v13 = v1;
  if ( sub_1001DA68(&v14) != 0 || sub_1001DA10(&v12) != 0 )
    goto LABEL_38;
  v2 = Source;
  if ( Destination != nullptr )
  {
    v3 = strcmp(Source, Destination);
    if ( v3 != 0 )
      v3 = v3 < 0 ? -1 : 1;
    if ( v3 == 0 )
      return;
    v1 = v13;
  }
  _free_base(Destination);
  Destination = (char *)_malloc_base(strlen(Source) + 1);
  _free_base(nullptr);
  if ( Destination == nullptr )
    return;
  if ( strcpy_s(Destination, strlen(Source) + 1, Source) != 0 || (v4 = 3, strncpy_s(*v1, 0x40u, Source, 3u) != 0) )
LABEL_38:
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  do
  {
    if ( *v2 == 0 )
      break;
    ++v2;
    --v4;
  }
  while ( v4 != 0 );
  v5 = *v2 == 45;
  if ( *v2 == 45 )
    ++v2;
  v6 = 3600 * sub_10019421((int)v2);
  v14 = v6;
  while ( 1 )
  {
    v7 = *v2;
    if ( *v2 != 43 && (v7 < 48 || v7 > 57) )
      break;
    ++v2;
  }
  if ( *v2 == 58 )
  {
    v8 = sub_10019421((int)++v2);
    v6 = 60 * v8 + v14;
    v14 = v6;
    while ( *v2 >= 48 && *v2 <= 57 )
      ++v2;
    if ( *v2 == 58 )
    {
      v9 = sub_10019421((int)++v2);
      v6 = v9 + v14;
      v14 += v9;
      while ( *v2 >= 48 && *v2 <= 57 )
        ++v2;
    }
  }
  if ( v5 )
    v14 = -v6;
  v12 = *v2 != 0;
  if ( v12 )
  {
    if ( strncpy_s(v13[1], 0x40u, v2, 3u) != 0 )
      goto LABEL_38;
  }
  else
  {
    *v13[1] = 0;
  }
  v10 = v14;
  *sub_1001DA04() = v10;
  v11 = v12;
  *sub_1001D9F8() = v11;
}

// Address: 0x1001E214
void __cdecl tzset_from_system_nolock()
{
  LPSTR *v0; // esi
  UINT v1; // edi
  int v2; // esi
  int v3; // esi
  int v4; // esi
  BOOL UsedDefaultChar; // [esp+Ch] [ebp-10h] BYREF
  int v6; // [esp+10h] [ebp-Ch] BYREF
  int v7; // [esp+14h] [ebp-8h] BYREF
  int v8; // [esp+18h] [ebp-4h] BYREF

  v0 = (LPSTR *)sub_1001DA0A();
  v8 = 0;
  v7 = 0;
  v6 = 0;
  if ( sub_1001DA68(&v8) != 0 || sub_1001DA10(&v7) != 0 || sub_1001DA3C(&v6) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  _free_base(Destination);
  Destination = nullptr;
  if ( GetTimeZoneInformation(&TimeZoneInformation) != -1 )
  {
    dword_10041288 = 1;
    v8 = 60 * TimeZoneInformation.Bias;
    if ( TimeZoneInformation.StandardDate.wMonth != 0 )
      v8 = 60 * TimeZoneInformation.StandardBias + 60 * TimeZoneInformation.Bias;
    if ( TimeZoneInformation.DaylightDate.wMonth != 0 && TimeZoneInformation.DaylightBias != 0 )
    {
      v7 = 1;
      v6 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
    }
    else
    {
      v7 = 0;
      v6 = 0;
    }
    v1 = ___lc_codepage_func();
    if ( WideCharToMultiByte(v1, 0, TimeZoneInformation.StandardName, -1, *v0, 63, nullptr, &UsedDefaultChar) == 0
      || UsedDefaultChar )
    {
      **v0 = 0;
    }
    else
    {
      (*v0)[63] = 0;
    }
    if ( WideCharToMultiByte(v1, 0, TimeZoneInformation.DaylightName, -1, v0[1], 63, nullptr, &UsedDefaultChar) == 0
      || UsedDefaultChar )
    {
      *v0[1] = 0;
    }
    else
    {
      v0[1][63] = 0;
    }
  }
  v2 = v8;
  *sub_1001DA04() = v2;
  v3 = v7;
  *sub_1001D9F8() = v3;
  v4 = v6;
  *sub_1001D9FE() = v4;
}

// Address: 0x1001E36F
void __cdecl tzset_nolock()
{
  char *v0; // edi
  errno_t v1; // eax
  void *v2; // esi
  size_t RequiredCount; // [esp+Ch] [ebp-10Ch] BYREF
  size_t Size; // [esp+10h] [ebp-108h] BYREF
  char Buffer[256]; // [esp+14h] [ebp-104h] BYREF

  dword_1003F3EC = -1;
  dword_1003F3E0 = -1;
  v0 = nullptr;
  dword_10041288 = 0;
  v1 = getenv_s(&Size, Buffer, 0x100u, "TZ");
  if ( v1 != 0 )
  {
    if ( v1 == 34 )
    {
      v2 = _malloc_base(Size);
      if ( v2 != nullptr )
      {
        if ( getenv_s(&RequiredCount, (char *)v2, Size, "TZ") != 0 )
        {
          _free_base(v2);
        }
        else
        {
          _free_base(nullptr);
          v0 = (char *)v2;
        }
      }
      else
      {
        _free_base(nullptr);
      }
    }
  }
  else
  {
    v0 = Buffer;
  }
  if ( v0 != nullptr && *v0 != 0 )
    tzset_from_environment_nolock(v0);
  else
    tzset_from_system_nolock();
  _free_base(Buffer != v0 ? v0 : nullptr);
}

// Address: 0x1001E44F
void __tzset()
{
  if ( dword_1004133C == 0 )
  {
    __acrt_lock(6);
    if ( dword_1004133C == 0 )
    {
      tzset_nolock();
      _InterlockedIncrement(&dword_1004133C);
    }
    __acrt_unlock(6);
  }
}

// Address: 0x1001E4A0
int __cdecl _isindst(struct tm *a1)
{
  int v1; // eax
  int v2; // esi

  __acrt_lock(6);
  LOBYTE(v1) = _isindst_nolock(a1);
  v2 = v1;
  __acrt_unlock(6);
  return v2;
}

// Address: 0x1001E4EA
int __cdecl __acrt_stdio_allocate_buffer_nolock(_DWORD *a1)
{
  volatile signed __int32 *v1; // eax
  int result; // eax

  ++dword_10040CE8;
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

// Address: 0x1001E547
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
    || FileHandle >= (unsigned int)dword_10041190
    || (v5 = 2 * (FileHandle & 0x3F), ((int)lpCriticalSection[FileHandle >> 6][v5 + 1].LockSemaphore & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  v3 = -1;
  if ( ((int)lpCriticalSection[FileHandle >> 6][v5 + 1].LockSemaphore & 1) != 0 )
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

// Address: 0x1001E64C
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
  LOBYTE(lpCriticalSection[FileHandle >> 6][2 * (FileHandle & 0x3F) + 1].LockSemaphore) &= ~2u;
  return result;
}

// Address: 0x1001E6CA
__int64 __cdecl _lseeki64(int FileHandle, __int64 Offset, int Origin)
{
  __int64 result; // rax

  LODWORD(result) = common_lseek<__int64>(FileHandle, (LARGE_INTEGER)Offset, Origin);
  return result;
}

// Address: 0x1001E6E5
DWORD __cdecl _lseeki64_nolock(int FileHandle, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod)
{
  return common_lseek_nolock<__int64>(FileHandle, liDistanceToMove, dwMoveMethod);
}

// Address: 0x1001E700
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

// Address: 0x1001E7B1
errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  return common_tcsncpy_s<char>(Destination, SizeInBytes, (int)Source, MaxCount);
}

// Address: 0x1001E7BC
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

// Address: 0x1001E885
unsigned int __cdecl _mbstowcs_l_helper(
        LPWSTR lpWideCharStr,
        LPCCH lpMultiByteStr,
        unsigned int cchWideChar,
        struct __crt_locale_pointers *a4)
{
  LPWSTR v4; // edi
  unsigned int v5; // esi
  unsigned int result; // eax
  int v7; // eax
  const CHAR *v8; // eax
  LPCCH v9; // ecx
  unsigned int v10; // edx
  unsigned __int8 v11; // al
  int v12; // eax
  LPCCH v13; // ecx
  int v14; // eax
  int v15; // [esp+Ch] [ebp-18h] BYREF
  __crt_locale_pointers Locale; // [esp+10h] [ebp-14h] BYREF
  char v17; // [esp+18h] [ebp-Ch]
  unsigned int v18; // [esp+1Ch] [ebp-8h]
  LPCCH v19; // [esp+20h] [ebp-4h]

  v4 = lpWideCharStr;
  v5 = 0;
  if ( lpWideCharStr != nullptr )
  {
    result = 0;
    if ( cchWideChar == 0 )
      return result;
    *lpWideCharStr = 0;
  }
  if ( lpMultiByteStr == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v15, a4);
  if ( lpWideCharStr != nullptr )
  {
    if ( *((_DWORD *)Locale.locinfo + 42) == 0 )
    {
      if ( cchWideChar != 0 )
      {
        do
        {
          *v4 = (unsigned __int8)lpMultiByteStr[v5];
          if ( lpMultiByteStr[v5] == 0 )
            break;
          ++v5;
          ++v4;
        }
        while ( v5 < cchWideChar );
      }
      goto LABEL_28;
    }
    v5 = -1;
    v7 = MultiByteToWideChar(*((_DWORD *)Locale.locinfo + 2), 9u, lpMultiByteStr, -1, lpWideCharStr, cchWideChar);
    if ( v7 == 0 )
    {
      if ( GetLastError() != 122 )
        goto LABEL_21;
      v8 = lpMultiByteStr;
      v9 = lpMultiByteStr;
      v19 = lpMultiByteStr;
      v10 = cchWideChar;
      if ( cchWideChar != 0 )
      {
        do
        {
          v11 = *v9;
          v18 = v10 - 1;
          if ( v11 == 0 )
            break;
          v12 = _isleadbyte_l(v11, &Locale);
          v13 = v19;
          if ( v12 != 0 )
          {
            v13 = v19 + 1;
            if ( v19[1] == 0 )
              goto LABEL_21;
          }
          v10 = v18;
          v9 = v13 + 1;
          v19 = v9;
        }
        while ( v18 != 0 );
        v8 = lpMultiByteStr;
      }
      v14 = MultiByteToWideChar(*((_DWORD *)Locale.locinfo + 2), 1u, v8, v9 - v8, lpWideCharStr, cchWideChar);
      if ( v14 != 0 )
      {
        v5 = v14;
      }
      else
      {
LABEL_21:
        *_errno() = 42;
        *lpWideCharStr = 0;
      }
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( *((_DWORD *)Locale.locinfo + 42) != 0 )
  {
    v5 = -1;
    v7 = MultiByteToWideChar(*((_DWORD *)Locale.locinfo + 2), 9u, lpMultiByteStr, -1, nullptr, 0);
    if ( v7 != 0 )
    {
LABEL_27:
      v5 = v7 - 1;
      goto LABEL_28;
    }
    *_errno() = 42;
  }
  else
  {
    v5 = strlen(lpMultiByteStr);
  }
LABEL_28:
  if ( v17 != 0 )
    *(_DWORD *)(v15 + 848) &= ~2u;
  return v5;
}

// Address: 0x1001E9FE
errno_t __cdecl _mbstowcs_s_l(
        size_t *PtNumOfCharConverted,
        wchar_t *DstBuf,
        size_t SizeInWords,
        const char *SrcBuf,
        size_t MaxCount,
        _locale_t Locale)
{
  errno_t v6; // esi
  size_t v7; // eax
  int *v8; // eax
  unsigned int v9; // eax
  size_t v10; // eax
  int v12; // [esp-4h] [ebp-20h]
  int v13; // [esp+Ch] [ebp-10h] BYREF
  struct __crt_locale_pointers v14; // [esp+10h] [ebp-Ch] BYREF
  char v15; // [esp+18h] [ebp-4h]

  v6 = 0;
  if ( DstBuf != nullptr )
  {
    if ( SizeInWords == 0 )
    {
LABEL_5:
      v6 = 22;
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return v6;
    }
    *DstBuf = 0;
  }
  else if ( SizeInWords != 0 )
  {
    goto LABEL_5;
  }
  if ( PtNumOfCharConverted != nullptr )
    *PtNumOfCharConverted = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v13, Locale);
  v7 = SizeInWords;
  if ( MaxCount <= SizeInWords )
    v7 = MaxCount;
  if ( v7 <= 0x7FFFFFFF )
  {
    v9 = _mbstowcs_l_helper(DstBuf, SrcBuf, v7, &v14);
    if ( v9 == -1 )
    {
      if ( DstBuf != nullptr )
        *DstBuf = 0;
      v6 = *_errno();
      goto LABEL_26;
    }
    v10 = v9 + 1;
    if ( DstBuf != nullptr )
    {
      if ( v10 > SizeInWords )
      {
        if ( MaxCount != -1 )
        {
          *DstBuf = 0;
          v8 = _errno();
          v12 = 34;
          goto LABEL_21;
        }
        v10 = SizeInWords;
        v6 = 80;
      }
      DstBuf[v10 - 1] = 0;
    }
    if ( PtNumOfCharConverted != nullptr )
      *PtNumOfCharConverted = v10;
    goto LABEL_26;
  }
  v8 = _errno();
  v12 = 22;
LABEL_21:
  v6 = v12;
  *v8 = v12;
  _invalid_parameter_noinfo();
LABEL_26:
  if ( v15 != 0 )
    *(_DWORD *)(v13 + 848) &= ~2u;
  return v6;
}

// Address: 0x1001EAE1
errno_t __cdecl mbstowcs_s(
        size_t *PtNumOfCharConverted,
        wchar_t *DstBuf,
        size_t SizeInWords,
        const char *SrcBuf,
        size_t MaxCount)
{
  return _mbstowcs_s_l(PtNumOfCharConverted, DstBuf, SizeInWords, SrcBuf, MaxCount, nullptr);
}

// Address: 0x1001EB01
unsigned int __cdecl _wcstombs_l_helper(
        char *a1,
        LPCWCH lpWideCharStr,
        const WCHAR *cchWideChar,
        struct __crt_locale_pointers *a4)
{
  int v4; // ebx
  int v5; // esi
  LPCWCH v6; // edi
  LPSTR v8; // ecx
  __int16 v9; // ax
  LPCWCH v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  const WCHAR *v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // edx
  int v17; // eax
  LPSTR v18; // ecx
  CHAR v19; // al
  WCHAR v20; // ax
  int v21; // eax
  int v22; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD *v23; // [esp+10h] [ebp-28h]
  char v24; // [esp+18h] [ebp-20h]
  int v25; // [esp+1Ch] [ebp-1Ch]
  LPSTR lpMultiByteStr; // [esp+20h] [ebp-18h]
  LPCWCH i; // [esp+24h] [ebp-14h]
  BOOL UsedDefaultChar; // [esp+28h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+2Ch] [ebp-Ch] BYREF

  v4 = (int)cchWideChar;
  v5 = 0;
  lpMultiByteStr = a1;
  UsedDefaultChar = false;
  v6 = lpWideCharStr;
  i = lpWideCharStr;
  if ( a1 != nullptr && cchWideChar == nullptr )
    return 0;
  if ( lpWideCharStr == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v22, a4);
  v8 = lpMultiByteStr;
  if ( lpMultiByteStr == nullptr )
  {
    if ( v23[42] != 0 )
    {
      v21 = WideCharToMultiByte(v23[2], 0, lpWideCharStr, -1, nullptr, 0, nullptr, &UsedDefaultChar);
      if ( v21 != 0 && !UsedDefaultChar )
      {
        v12 = v21 - 1;
        goto LABEL_54;
      }
    }
    else
    {
      v20 = *lpWideCharStr;
      if ( *lpWideCharStr == 0 )
        goto LABEL_49;
      while ( v20 <= 0xFFu )
      {
        ++v6;
        ++v5;
        v20 = *v6;
        if ( *v6 == 0 )
          goto LABEL_49;
      }
    }
LABEL_53:
    v12 = -1;
    *_errno() = 42;
    goto LABEL_54;
  }
  if ( v23[42] == 0 )
  {
    if ( cchWideChar != nullptr )
    {
      while ( *v6 <= 0xFFu )
      {
        v8[v5] = *(_BYTE *)v6;
        v9 = *v6++;
        if ( v9 != 0 && ++v5 < (unsigned int)cchWideChar )
          continue;
        goto LABEL_49;
      }
      goto LABEL_44;
    }
LABEL_49:
    v12 = v5;
    goto LABEL_54;
  }
  if ( v23[1] == 1 )
  {
    if ( cchWideChar != nullptr )
    {
      v10 = lpWideCharStr;
      for ( i = cchWideChar; i != nullptr; i = (LPCWCH)((char *)i - 1) )
      {
        if ( *v10 == 0 )
          break;
        ++v10;
      }
      if ( i != nullptr && *v10 == 0 )
        v4 = v10 - lpWideCharStr + 1;
    }
    v5 = WideCharToMultiByte(v23[2], 0, lpWideCharStr, v4, lpMultiByteStr, v4, nullptr, &UsedDefaultChar);
    if ( v5 != 0 && !UsedDefaultChar )
    {
      if ( lpMultiByteStr[v5 - 1] == 0 )
        --v5;
      goto LABEL_49;
    }
    goto LABEL_44;
  }
  v11 = WideCharToMultiByte(v23[2], 0, lpWideCharStr, -1, lpMultiByteStr, (int)cchWideChar, nullptr, &UsedDefaultChar);
  v12 = v11;
  if ( v11 != 0 )
  {
    if ( !UsedDefaultChar )
    {
      v5 = v11 - 1;
      goto LABEL_49;
    }
LABEL_44:
    v5 = -1;
    *_errno() = 42;
    goto LABEL_49;
  }
  if ( UsedDefaultChar || GetLastError() != 122 )
    goto LABEL_44;
  if ( cchWideChar != nullptr )
  {
    v13 = i;
    do
    {
      v14 = v23[1];
      if ( v14 > 5 )
        v14 = 5;
      v15 = WideCharToMultiByte(v23[2], 0, v13, 1, MultiByteStr, v14, nullptr, &UsedDefaultChar);
      v16 = v15;
      if ( v15 == 0 || UsedDefaultChar || v15 > 5 )
        goto LABEL_53;
      if ( v15 + v12 > (unsigned int)cchWideChar )
        break;
      v17 = 0;
      v25 = 0;
      if ( v16 > 0 )
      {
        v18 = lpMultiByteStr;
        do
        {
          v19 = MultiByteStr[v17];
          v18[v12] = v19;
          if ( v19 == 0 )
            goto LABEL_54;
          v17 = v25 + 1;
          ++v12;
          v25 = v17;
        }
        while ( v17 < v16 );
      }
      v13 = ++i;
    }
    while ( v12 < (unsigned int)cchWideChar );
  }
LABEL_54:
  if ( v24 != 0 )
    *(_DWORD *)(v22 + 848) &= ~2u;
  return v12;
}

// Address: 0x1001ED82
errno_t __cdecl _wcstombs_s_l(
        size_t *PtNumOfCharConverted,
        char *Dst,
        size_t DstSizeInBytes,
        const wchar_t *Src,
        size_t MaxCountInBytes,
        _locale_t Locale)
{
  const WCHAR *v6; // eax
  int *v7; // eax
  unsigned int v9; // eax
  size_t v10; // eax
  errno_t v11; // ecx
  errno_t v12; // [esp-8h] [ebp-14h]

  if ( Dst != nullptr )
  {
    if ( DstSizeInBytes != 0 )
      goto LABEL_3;
LABEL_12:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( DstSizeInBytes != 0 )
    goto LABEL_12;
LABEL_3:
  if ( Dst != nullptr )
    *Dst = 0;
  if ( PtNumOfCharConverted != nullptr )
    *PtNumOfCharConverted = 0;
  v6 = (const WCHAR *)DstSizeInBytes;
  if ( MaxCountInBytes <= DstSizeInBytes )
    v6 = (const WCHAR *)MaxCountInBytes;
  if ( (unsigned int)v6 > 0x7FFFFFFF )
  {
    v7 = _errno();
    v12 = 22;
LABEL_22:
    *v7 = v12;
    _invalid_parameter_noinfo();
    return v12;
  }
  v9 = _wcstombs_l_helper(Dst, Src, v6, Locale);
  if ( v9 == -1 )
  {
    if ( Dst != nullptr )
      *Dst = 0;
    return *_errno();
  }
  else
  {
    v10 = v9 + 1;
    if ( Dst != nullptr )
    {
      if ( v10 <= DstSizeInBytes )
      {
        v11 = 0;
      }
      else
      {
        if ( MaxCountInBytes != -1 )
        {
          *Dst = 0;
          if ( DstSizeInBytes <= v10 )
          {
            v7 = _errno();
            v12 = 34;
            goto LABEL_22;
          }
        }
        v10 = DstSizeInBytes;
        v11 = 80;
      }
      Dst[v10 - 1] = 0;
    }
    else
    {
      v11 = 0;
    }
    if ( PtNumOfCharConverted != nullptr )
      *PtNumOfCharConverted = v10;
    return v11;
  }
}

// Address: 0x1001EE4F
struct __acrt_stdio_stream_mode *__cdecl __acrt_stdio_parse_mode<char>(struct __acrt_stdio_stream_mode *a1, _BYTE *a2)
{
  char v3; // al
  char v4; // dl
  const char *v5; // esi
  char v6; // cl
  char v7; // al
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // ch
  bool v14; // al
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const char *i; // esi
  bool v21; // [esp+18h] [ebp-4h] BYREF
  bool v22; // [esp+19h] [ebp-3h] BYREF
  char v23; // [esp+1Ah] [ebp-2h]
  char v24; // [esp+1Bh] [ebp-1h]

  *(_DWORD *)a1 = 0;
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 1) = dword_10041398;
  while ( *a2 == 32 )
    ++a2;
  v3 = *a2;
  if ( *a2 == 97 )
  {
    *(_DWORD *)a1 = 265;
LABEL_10:
    *((_DWORD *)a1 + 1) = 2;
    goto LABEL_11;
  }
  if ( v3 != 114 )
  {
    if ( v3 != 119 )
      goto LABEL_67;
    *(_DWORD *)a1 = 769;
    goto LABEL_10;
  }
  *(_DWORD *)a1 = 0;
  *((_DWORD *)a1 + 1) = 1;
LABEL_11:
  v4 = 0;
  v22 = false;
  v21 = false;
  v5 = a2 + 1;
  v23 = 0;
  v24 = 0;
  v6 = 1;
  while ( 1 )
  {
    v7 = *v5;
    if ( *v5 == 0 )
      break;
    if ( v7 > 83 )
    {
      v15 = v7 - 84;
      if ( v15 != 0 )
      {
        v16 = v15 - 14;
        if ( v16 != 0 )
        {
          v17 = v16 - 1;
          if ( v17 != 0 )
          {
            v18 = v17 - 11;
            if ( v18 != 0 )
            {
              if ( v18 != 6 )
                goto LABEL_67;
              v14 = __acrt_stdio_parse_mode_t(a1);
            }
            else
            {
              v14 = __acrt_stdio_parse_mode_n(a1, &v22);
            }
          }
          else
          {
            v14 = __acrt_stdio_parse_mode_c(a1, &v22);
          }
        }
        else
        {
          v14 = __acrt_stdio_parse_mode_b(a1);
        }
      }
      else
      {
        v14 = __acrt_stdio_parse_mode_T(a1);
      }
      goto LABEL_41;
    }
    if ( v7 == 83 )
    {
      v13 = v24;
      if ( v4 == 0 )
      {
        *(_DWORD *)a1 |= 0x20u;
        goto LABEL_30;
      }
    }
    else
    {
      v8 = v7 - 32;
      if ( v8 == 0 )
        goto LABEL_42;
      v9 = v8 - 11;
      if ( v9 == 0 )
      {
        v14 = __acrt_stdio_parse_mode_plus(a1, &v21);
LABEL_41:
        v4 = v23;
        v6 = v14;
        goto LABEL_42;
      }
      v10 = v9 - 1;
      if ( v10 != 0 )
      {
        v11 = v10 - 24;
        if ( v11 == 0 )
        {
          v14 = __acrt_stdio_parse_mode_D(a1);
          goto LABEL_41;
        }
        v12 = v11 - 10;
        if ( v12 == 0 )
        {
          *(_DWORD *)a1 |= 0x80u;
          v6 = 1;
LABEL_42:
          v13 = v24;
          goto LABEL_43;
        }
        if ( v12 != 4 )
          goto LABEL_67;
        v13 = v24;
        if ( v4 == 0 )
        {
          *(_DWORD *)a1 |= 0x10u;
LABEL_30:
          v4 = 1;
          v23 = 1;
          v6 = 1;
          goto LABEL_43;
        }
      }
      else
      {
        v13 = 1;
        v24 = 1;
      }
    }
    v6 = 0;
LABEL_43:
    v5 += v6 != 0;
    if ( v6 == 0 )
      goto LABEL_46;
  }
  v13 = v24;
LABEL_46:
  if ( v13 == 0 )
    goto LABEL_48;
  do
  {
    ++v5;
LABEL_48:
    ;
  }
  while ( *v5 == 32 );
  if ( v13 != 0 )
  {
    if ( strncmp(v5, "ccs", 3u) != 0 )
      goto LABEL_67;
    for ( i = v5 + 3; *i == 32; ++i )
      ;
    if ( *i != 61 )
      goto LABEL_67;
    do
      ++i;
    while ( *i == 32 );
    if ( _strnicmp(i, "UTF-8", 5u) == 0 )
    {
      v5 = i + 5;
      *(_DWORD *)a1 |= 0x40000u;
    }
    else if ( _strnicmp(i, "UTF-16LEUNICODE", 8u) == 0 )
    {
      v5 = i + 8;
      *(_DWORD *)a1 |= 0x20000u;
    }
    else
    {
      if ( _strnicmp(i, "UNICODE", 7u) != 0 )
        goto LABEL_67;
      v5 = i + 7;
      *(_DWORD *)a1 |= 0x10000u;
    }
    while ( *v5 == 32 )
      ++v5;
  }
  if ( *v5 != 0 )
  {
LABEL_67:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return a1;
  }
  *((_BYTE *)a1 + 8) = 1;
  return a1;
}

// Address: 0x1001F081
int __cdecl common_openfile<char>(char *FileName, _BYTE *a2, int ShareFlag, int a4)
{
  int *v4; // eax
  _BYTE v6[12]; // [esp+8h] [ebp-1Ch] BYREF
  int OpenFlag; // [esp+14h] [ebp-10h]
  unsigned int v8; // [esp+18h] [ebp-Ch]
  int v9; // [esp+1Ch] [ebp-8h]
  int FileHandle; // [esp+20h] [ebp-4h] BYREF

  v4 = (int *)__acrt_stdio_parse_mode<char>((struct __acrt_stdio_stream_mode *)v6, a2);
  OpenFlag = *v4;
  v8 = v4[1];
  v9 = v4[2];
  if ( (_BYTE)v9 == 0 || _sopen_s(&FileHandle, FileName, OpenFlag, ShareFlag, 384) != 0 )
    return 0;
  ++dword_10040CE8;
  _InterlockedOr((volatile signed __int32 *)(a4 + 12), v8);
  *(_DWORD *)(a4 + 8) = 0;
  *(_DWORD *)(a4 + 28) = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 16) = FileHandle;
  return a4;
}

// Address: 0x1001F106
char __cdecl __acrt_stdio_parse_mode_D(struct __acrt_stdio_stream_mode *a1)
{
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
    return 0;
  *(_DWORD *)a1 |= 0x40u;
  return 1;
}

// Address: 0x1001F121
char __cdecl __acrt_stdio_parse_mode_T(struct __acrt_stdio_stream_mode *a1)
{
  if ( (*(_DWORD *)a1 & 0x1000) != 0 )
    return 0;
  *(_DWORD *)a1 |= 0x1000u;
  return 1;
}

// Address: 0x1001F140
char __cdecl __acrt_stdio_parse_mode_b(struct __acrt_stdio_stream_mode *a1)
{
  if ( (*(_DWORD *)a1 & 0xC000) != 0 )
    return 0;
  *(_DWORD *)a1 |= 0x8000u;
  return 1;
}

// Address: 0x1001F160
char __cdecl __acrt_stdio_parse_mode_c(struct __acrt_stdio_stream_mode *a1, bool *a2)
{
  if ( *a2 )
    return 0;
  *a2 = true;
  *((_DWORD *)a1 + 1) |= 0x800u;
  return 1;
}

// Address: 0x1001F182
char __cdecl __acrt_stdio_parse_mode_n(struct __acrt_stdio_stream_mode *a1, bool *a2)
{
  if ( *a2 )
    return 0;
  *a2 = true;
  *((_DWORD *)a1 + 1) &= ~0x800u;
  return 1;
}

// Address: 0x1001F1A4
char __cdecl __acrt_stdio_parse_mode_plus(struct __acrt_stdio_stream_mode *a1, bool *a2)
{
  unsigned int v3; // ecx

  if ( *a2 )
    return 0;
  *a2 = true;
  if ( (*(_DWORD *)a1 & 2) != 0 )
    return 0;
  v3 = *((_DWORD *)a1 + 1) & 0xFFFFFFF8 | 4;
  *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFFC | 2;
  *((_DWORD *)a1 + 1) = v3;
  return 1;
}

// Address: 0x1001F1D9
char __cdecl __acrt_stdio_parse_mode_t(struct __acrt_stdio_stream_mode *a1)
{
  if ( (*(_DWORD *)a1 & 0xC000) != 0 )
    return 0;
  *(_DWORD *)a1 |= 0x4000u;
  return 1;
}

// Address: 0x1001F1F9
int __cdecl _openfile(char *FileName, _BYTE *a2, int ShareFlag, int a4)
{
  return common_openfile<char>(FileName, a2, ShareFlag, a4);
}

// Address: 0x1001F204
int sub_1001F204()
{
  return dword_10041340;
}

// Address: 0x1001F20A
bool __acrt_initialize_heap()
{
  hHeap = GetProcessHeap();
  return hHeap != nullptr;
}

// Address: 0x1001F21B
char sub_1001F21B()
{
  hHeap = nullptr;
  return 1;
}

// Address: 0x1001F225
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

// Address: 0x1001F2F7
int __cdecl InternalGetLocaleInfoA(
        struct __crt_locale_pointers *const a1,
        wchar_t *a2,
        LCTYPE LCType,
        char *const a4,
        int cbMultiByte)
{
  int v5; // edi
  int LocaleInfo; // eax
  int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  void *v10; // esp
  WCHAR *v11; // esi
  WCHAR *v12; // eax
  _DWORD v14[3]; // [esp+0h] [ebp-24h] BYREF
  _DWORD v15[3]; // [esp+Ch] [ebp-18h] BYREF
  char v16; // [esp+18h] [ebp-Ch]
  UINT CodePage; // [esp+1Ch] [ebp-8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v15, a1);
  v5 = 0;
  CodePage = *(_DWORD *)(v15[1] + 8);
  LocaleInfo = __acrt_GetLocaleInfoEx(a2, LCType, nullptr, 0);
  v7 = LocaleInfo;
  if ( LocaleInfo != 0 )
  {
    v8 = 2 * LocaleInfo;
    if ( (2 * LocaleInfo < (unsigned int)(2 * LocaleInfo + 8) ? 2 * LocaleInfo + 8 : 0) == 0 )
    {
      v11 = nullptr;
      goto LABEL_10;
    }
    v9 = v8 + 8;
    if ( (v8 < v8 + 8 ? v8 + 8 : 0) > 0x400 )
    {
      v12 = (WCHAR *)_malloc_base(v8 < v9 ? v9 : 0);
      v11 = v12;
      if ( v12 != nullptr )
      {
        *(_DWORD *)v12 = 56797;
        goto LABEL_8;
      }
    }
    else
    {
      v10 = alloca(v8 < v9 ? v9 : 0);
      v11 = (WCHAR *)v14;
      if ( v14 != nullptr )
      {
        v14[0] = 52428;
LABEL_8:
        v11 += 4;
LABEL_10:
        if ( v11 != nullptr && __acrt_GetLocaleInfoEx(a2, LCType, v11, v7) != 0 )
          v5 = WideCharToMultiByte(CodePage, 0, v11, -1, cbMultiByte != 0 ? a4 : nullptr, cbMultiByte, nullptr, nullptr);
      }
    }
    _freea_crt((int)v11);
  }
  if ( v16 != 0 )
    *(_DWORD *)(v15[0] + 848) &= ~2u;
  return v5;
}

// Address: 0x1001F3F2
int __cdecl __acrt_GetLocaleInfoA(struct __crt_locale_pointers *a1, int a2, wchar_t *a3, LCTYPE LCType, char **a5)
{
  int v5; // edi
  size_t LocaleInfoA; // eax
  size_t v8; // eax
  char *v9; // eax
  char *v10; // esi
  int v11; // eax
  char *v12; // eax
  size_t LocaleInfo; // eax
  WCHAR *v14; // eax
  rsize_t SizeInBytes; // [esp+10h] [ebp-8Ch]
  rsize_t SizeInBytesa; // [esp+10h] [ebp-8Ch]
  rsize_t SizeInBytesb; // [esp+10h] [ebp-8Ch]
  WCHAR LCData[2]; // [esp+14h] [ebp-88h] BYREF
  char Source[128]; // [esp+18h] [ebp-84h] BYREF

  v5 = 0;
  *(_DWORD *)LCData = a3;
  *a5 = nullptr;
  if ( a2 == 1 )
  {
    LocaleInfoA = InternalGetLocaleInfoA(a1, a3, LCType, Source, 128);
    SizeInBytes = LocaleInfoA;
    if ( LocaleInfoA != 0 )
    {
      *a5 = (char *)_calloc_base(LocaleInfoA, 1u);
      _free_base(nullptr);
      if ( *a5 != nullptr )
      {
        if ( strncpy_s(*a5, SizeInBytes, Source, SizeInBytes - 1) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        return 0;
      }
      return -1;
    }
    if ( GetLastError() == 122 )
    {
      v8 = InternalGetLocaleInfoA(a1, a3, LCType, nullptr, 0);
      SizeInBytesa = v8;
      if ( v8 != 0 )
      {
        v9 = (char *)_calloc_base(v8, 1u);
        v10 = v9;
        if ( v9 != nullptr )
        {
          v11 = InternalGetLocaleInfoA(a1, *(wchar_t **)LCData, LCType, v9, SizeInBytesa);
LABEL_10:
          if ( v11 != 0 )
          {
            v12 = v10;
            v10 = nullptr;
            *a5 = v12;
LABEL_13:
            _free_base(v10);
            return v5;
          }
        }
LABEL_12:
        v5 = -1;
        goto LABEL_13;
      }
    }
  }
  else
  {
    if ( a2 != 2 )
    {
      if ( a2 == 0 )
      {
        *(_DWORD *)LCData = 0;
        if ( __acrt_GetLocaleInfoEx(a3, LCType | 0x20000000, LCData, 2) != 0 )
        {
          *(_BYTE *)a5 = LCData[0];
          return 0;
        }
      }
      return -1;
    }
    LocaleInfo = __acrt_GetLocaleInfoEx(a3, LCType, nullptr, 0);
    SizeInBytesb = LocaleInfo;
    if ( LocaleInfo != 0 )
    {
      v14 = (WCHAR *)_calloc_base(LocaleInfo, 2u);
      v10 = (char *)v14;
      if ( v14 == nullptr )
        goto LABEL_12;
      v11 = __acrt_GetLocaleInfoEx(*(wchar_t **)LCData, LCType, v14, SizeInBytesb);
      goto LABEL_10;
    }
  }
  return -1;
}

// Address: 0x1001F5A4
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

// Address: 0x1001F6C1
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
              _freea_crt((int)v24);
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
        _freea_crt((int)v24);
      }
    }
LABEL_37:
    v20 = 0;
LABEL_38:
    _freea_crt((int)v16);
    return v20;
  }
  return result;
}

// Address: 0x1001F8DE
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

// Address: 0x1001F929
int __stdcall __crt_seh_guarded_call<void (__cdecl *)(int)>::operator()<_lambda_a048d3beccc847880fc8490e18b82769_,_lambda_ec61778202f4f5fc7e7711acc23c3bca_ &,_lambda_f7496a158712204296dd6628a163878e_>(
        int *a1,
        int a2,
        int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = __ROR4__(dword_10041350 ^ __security_cookie, __security_cookie & 0x1F);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x1001F983
int __cdecl sub_1001F983(int a1, int a2)
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

// Address: 0x1001F9AB
void (__cdecl **__cdecl get_global_action_nolock(int a1))(int)
{
  switch ( a1 )
  {
    case 2:
      return (void (__cdecl **)(int))&unk_10041348;
    case 6:
      return (void (__cdecl **)(int))&dword_10041350;
    case 15:
      return (void (__cdecl **)(int))&unk_10041354;
    default:
      break;
  }
  if ( a1 != 21 )
  {
    if ( a1 != 22 )
      return nullptr;
    return (void (__cdecl **)(int))&dword_10041350;
  }
  return (void (__cdecl **)(int))&unk_1004134C;
}

// Address: 0x1001F9ED
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

// Address: 0x1001FA15
int __fastcall __acrt_get_sigabrt_handler(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  return sub_1001F983(3, (int)&v2);
}

// Address: 0x1001FA2C
int __cdecl __acrt_initialize_signal_handlers(int a1)
{
  unknown_libname_55(a1);
  unknown_libname_55(a1);
  unknown_libname_55(a1);
  return unknown_libname_55(a1);
}

// Address: 0x1001FA67
int *__cdecl __fpecode()
{
  return (int *)((char *)__acrt_getptd() + 8);
}

// Address: 0x1001FA70
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

// Address: 0x1001FC78
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
    v3 = *((_WORD *)off_1003F1E4 + C);
  }
  return Type & v3;
}

// Address: 0x1001FCD7
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

// Address: 0x1001FD0B
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
  if ( (unsigned __int8)__acrt_has_user_matherr() != 0 && v7 != 0 )
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
    _ctrlfp(v6, 0xFFFF);
    return a5;
  }
  return result;
}

// Address: 0x1001FDD9
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
    _set_statfp(1);
    v3 = a1 & 0x17;
    goto LABEL_44;
  }
  if ( ((unsigned __int8)a3 & a1 & 4) != 0 )
  {
    _set_statfp(4);
    v3 = a1 & 0x1B;
    goto LABEL_44;
  }
  if ( (a1 & 1) != 0 && (a3 & 8) != 0 )
  {
    _set_statfp(8);
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
      _set_statfp(16);
    v3 = a1 & 0x1D;
  }
LABEL_44:
  if ( (a1 & 0x10) != 0 && (a3 & 0x20) != 0 )
  {
    _set_statfp(32);
    v3 &= ~0x10u;
  }
  return v3 == 0;
}

// Address: 0x1001FFB9
int __cdecl _raise_exc(ULONG_PTR Arguments, int a2, int a3, int a4, int a5, int a6)
{
  return _raise_exc_ex(Arguments, a2, a3, a4, a5, a6, 0);
}

// Address: 0x1001FFDC
unsigned int __cdecl _raise_exc_ex(
        ULONG_PTR Arguments,
        unsigned int *a2,
        char a3,
        int a4,
        float *a5,
        float *a6,
        int a7)
{
  DWORD v7; // edi
  char v8; // cl
  unsigned int *v9; // esi
  char v10; // al
  int v11; // eax
  unsigned int *v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  unsigned int *v15; // ecx
  unsigned int v16; // eax
  float *v17; // ebx
  ULONG_PTR v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int result; // eax

  *(_DWORD *)(Arguments + 4) = 0;
  v7 = -1073741811;
  *(_DWORD *)(Arguments + 8) = 0;
  *(_DWORD *)(Arguments + 12) = 0;
  v8 = a3;
  if ( (a3 & 0x10) != 0 )
  {
    v7 = -1073741681;
    *(_DWORD *)(Arguments + 4) |= 1u;
  }
  if ( (v8 & 2) != 0 )
  {
    v7 = -1073741677;
    *(_DWORD *)(Arguments + 4) |= 2u;
  }
  if ( (v8 & 1) != 0 )
  {
    v7 = -1073741679;
    *(_DWORD *)(Arguments + 4) |= 4u;
  }
  if ( (v8 & 4) != 0 )
  {
    v7 = -1073741682;
    *(_DWORD *)(Arguments + 4) |= 8u;
  }
  if ( (v8 & 8) != 0 )
  {
    v7 = -1073741680;
    *(_DWORD *)(Arguments + 4) |= 0x10u;
  }
  v9 = a2;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(16 * *a2)) & 0x10;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(2 * *v9)) & 8;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v9 >> 1)) & 4;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v9 >> 3)) & 2;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v9 >> 5)) & 1;
  v10 = _statfp();
  if ( (v10 & 1) != 0 )
    *(_DWORD *)(Arguments + 12) |= 0x10u;
  if ( (v10 & 4) != 0 )
    *(_DWORD *)(Arguments + 12) |= 8u;
  if ( (v10 & 8) != 0 )
    *(_DWORD *)(Arguments + 12) |= 4u;
  if ( (v10 & 0x10) != 0 )
    *(_DWORD *)(Arguments + 12) |= 2u;
  if ( (v10 & 0x20) != 0 )
    *(_DWORD *)(Arguments + 12) |= 1u;
  v11 = *v9 & 0xC00;
  switch ( v11 )
  {
    case 0:
      *(_DWORD *)Arguments &= 0xFFFFFFFC;
      break;
    case 1024:
      v12 = (unsigned int *)Arguments;
      v13 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1;
      goto LABEL_27;
    case 2048:
      v12 = (unsigned int *)Arguments;
      v13 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2;
LABEL_27:
      *v12 = v13;
      break;
    case 3072:
      *(_DWORD *)Arguments |= 3u;
      break;
    default:
      break;
  }
  v14 = *v9 & 0x300;
  switch ( v14 )
  {
    case 0:
      v15 = (unsigned int *)Arguments;
      v16 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8;
      goto LABEL_36;
    case 512:
      v15 = (unsigned int *)Arguments;
      v16 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4;
LABEL_36:
      *v15 = v16;
      break;
    case 768:
      *(_DWORD *)Arguments &= 0xFFFFFFE3;
      break;
    default:
      break;
  }
  *(_DWORD *)Arguments ^= (*(_DWORD *)Arguments ^ (32 * a4)) & 0x1FFE0;
  *(_DWORD *)(Arguments + 32) |= 1u;
  if ( a7 != 0 )
  {
    *(_DWORD *)(Arguments + 32) &= 0xFFFFFFE1;
    *(float *)(Arguments + 16) = *a5;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v17 = a6;
    *(_DWORD *)(Arguments + 96) &= 0xFFFFFFE1;
    *(float *)(Arguments + 80) = *v17;
  }
  else
  {
    *(_DWORD *)(Arguments + 32) = *(_DWORD *)(Arguments + 32) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 16) = *(double *)a5;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v17 = a6;
    *(_DWORD *)(Arguments + 96) = *(_DWORD *)(Arguments + 96) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 80) = *(double *)v17;
  }
  _clrfp();
  RaiseException(v7, 0, 1u, &Arguments);
  v18 = Arguments;
  if ( (*(_BYTE *)(Arguments + 8) & 0x10) != 0 )
    *v9 &= ~1u;
  if ( (*(_BYTE *)(v18 + 8) & 8) != 0 )
    *v9 &= ~4u;
  if ( (*(_BYTE *)(v18 + 8) & 4) != 0 )
    *v9 &= ~8u;
  if ( (*(_BYTE *)(v18 + 8) & 2) != 0 )
    *v9 &= ~0x10u;
  if ( (*(_BYTE *)(v18 + 8) & 1) != 0 )
    *v9 &= ~0x20u;
  v19 = *(_DWORD *)v18 & 3;
  if ( v19 == 0 )
  {
    *v9 &= 0xFFFFF3FF;
    goto LABEL_59;
  }
  v20 = v19 - 1;
  if ( v20 == 0 )
  {
    v22 = *v9 & 0xFFFFF3FF | 0x400;
    goto LABEL_56;
  }
  v21 = v20 - 1;
  if ( v21 == 0 )
  {
    v22 = *v9 & 0xFFFFF3FF | 0x800;
LABEL_56:
    *v9 = v22;
    goto LABEL_59;
  }
  if ( v21 == 1 )
    *v9 |= 0xC00u;
LABEL_59:
  v23 = (*(_DWORD *)v18 >> 2) & 7;
  if ( v23 == 0 )
  {
    result = *v9 & 0xFFFFF0FF | 0x300;
    goto LABEL_65;
  }
  v24 = v23 - 1;
  if ( v24 == 0 )
  {
    result = *v9 & 0xFFFFF1FF | 0x200;
LABEL_65:
    *v9 = result;
    goto LABEL_66;
  }
  result = v24 - 1;
  if ( result == 0 )
    *v9 &= 0xFFFFF3FF;
LABEL_66:
  if ( a7 != 0 )
    *v17 = *(float *)(v18 + 80);
  else
    *(double *)v17 = *(double *)(v18 + 80);
  return result;
}

// Address: 0x100202CD
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

// Address: 0x100202FC
double __cdecl _umatherr(int a1, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
  int v8; // ecx
  int v9; // eax
  _DWORD v11[6]; // [esp+0h] [ebp-20h] BYREF
  double v12; // [esp+18h] [ebp-8h]

  v8 = 0;
  v9 = 0;
  while ( dword_10033310[2 * v9] != a2 )
  {
    if ( ++v9 >= 29 )
      goto LABEL_6;
  }
  v8 = (int)*(&off_10033314 + 2 * v9);
LABEL_6:
  v11[1] = v8;
  if ( v8 != 0 )
  {
    v11[2] = a3;
    v11[3] = a4;
    v11[4] = a5;
    v11[5] = a6;
    v12 = a7;
    v11[0] = a1;
    _ctrlfp(a8, 0xFFFF);
    if ( __acrt_invoke_user_matherr(v11) == 0 )
      _set_errno_from_matherr(a1);
    return v12;
  }
  else
  {
    _ctrlfp(a8, 0xFFFF);
    _set_errno_from_matherr(a1);
    return a7;
  }
}

// Address: 0x1002039E
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

// Address: 0x10020472
double __cdecl _set_exp(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1;
  HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * (a2 + 1022));
  return v3;
}

// Address: 0x100204A1
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

// Address: 0x100204FF
int __usercall _clrfp@<eax>(__int16 a1@<fpstat>)
{
  __asm { fnclex }
  return a1;
}

// Address: 0x10020512
int _ctrlfp()
{
  __int16 v1; // [esp+4h] [ebp-4h]

  return v1;
}

// Address: 0x1002053E
void _set_statfp()
{
  ;
}

// Address: 0x10020599
int __usercall _statfp@<eax>(__int16 a1@<fpstat>)
{
  return a1;
}

// Address: 0x100205AB
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

// Address: 0x1002064F
int sub_1002064F()
{
  dword_1004146C = IsProcessorFeaturePresent(0xAu);
  return 0;
}

// Address: 0x10020660
int __usercall _CIpow_pentium4@<eax>(__int64 a1@<st1>, __int64 a2@<st0>)
{
  return _pow_pentium4(a2, a1);
}

// Address: 0x10020679
double __usercall _pow_pentium4@<st0>(
        __m128d a1@<xmm0>,
        __m128d a2@<xmm1>,
        __m128d a3@<xmm2>,
        __m128d a4@<xmm3>,
        __m128d a5@<xmm4>,
        __m128d a6@<xmm5>,
        __m128d a7@<xmm7>,
        double a8,
        double a9)
{
  __m128d v9; // xmm7
  __m128i inserted; // xmm0
  int epi16; // ecx
  int v12; // eax
  __m128d v13; // xmm7
  __m128d v14; // xmm6
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  __m128d v18; // xmm1
  __m128d v19; // xmm0
  __m128d v20; // xmm7
  int v21; // eax
  __m128d v22; // xmm6
  double v23; // xmm2_8
  int v24; // eax
  double v25; // xmm2_8
  double v26; // xmm5_8
  double v27; // xmm2_8
  double v28; // xmm2_8
  __m128i v29; // xmm1
  int v30; // edx
  double v31; // xmm2_8
  __m128d v32; // xmm0
  __m128d v33; // xmm6
  __m128d v34; // xmm7
  unsigned int v35; // eax
  double v36; // xmm2_8
  double v37; // xmm4_8
  double v38; // xmm3_8
  double v39; // xmm1_8
  double v40; // xmm3_8
  double v41; // xmm5_8
  double v42; // xmm5_8
  double v43; // xmm4_8
  double v44; // xmm5_8
  int v45; // eax
  __m128d v46; // xmm2
  __m128d v47; // xmm7
  __m128i v48; // xmm2
  __m128i v49; // xmm3
  __m128d v50; // xmm0
  __m128d v51; // xmm6
  double v52; // xmm4_8
  __m128d v53; // xmm0
  __m128i v54; // xmm7
  double result; // st7
  int v56; // eax
  __m128i v57; // xmm1
  unsigned int v58; // ecx
  __m128i v59; // xmm2
  __m128i v60; // xmm1
  __m128i v61; // xmm2
  unsigned __int8 v62; // al
  unsigned int v63; // edx
  __m128i v64; // xmm1
  int v65; // edx
  int v66; // eax
  __m128d v67; // xmm7
  int v68; // eax
  __m128d v69; // xmm0
  int v70; // edx
  __m128i v71; // xmm1
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __m128i v75; // xmm4
  int v76; // ecx
  unsigned int v77; // eax
  int v78; // eax
  unsigned int v79; // ecx
  unsigned int v80; // edx
  unsigned int v81; // edi
  double v82; // xmm4_8
  __m128d v83; // xmm2
  __m128d v84; // xmm7
  __m128i v85; // xmm2
  __m128i v86; // xmm3
  __m128d v87; // xmm0
  __m128d v88; // xmm6
  double v89; // xmm4_8
  __m128i v90; // xmm7
  double v91; // xmm7_8
  double v92; // xmm1_8
  __int64 v93; // xmm4_8
  double v94; // xmm1_8
  double v95; // xmm6_8
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // edx
  unsigned int v100; // eax
  int v101; // [esp+0h] [ebp-1Ch] BYREF
  double v102; // [esp+10h] [ebp-Ch] BYREF

  a1.m128d_f64[0] = a8;
  a7.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL);
  a3.m128d_f64[0] = 1.0;
  v9 = _mm_and_pd(a7, a1);
  a5.m128d_f64[0] = a8;
  inserted = _mm_srli_epi64((__m128i)a1, 0x2Cu);
  v13 = _mm_or_pd(v9, a3);
  epi16 = _mm_extract_epi16((__m128i)a5, 3);
  v12 = ((unsigned __int8)_mm_extract_epi16(inserted, 0) + 1) & 0x1FE;
  v13.m128d_f64[0] = v13.m128d_f64[0] * *(double *)((char *)&qword_100353C0 + 4 * v12);
  a6.m128d_f64[0] = *(double *)((char *)&qword_100353C0 + 4 * v12);
  v14 = *(__m128d *)((char *)&xmmword_100357D0 + 8 * v12);
  v15 = 32751 - epi16;
  if ( ((32751 - epi16) | (unsigned int)(epi16 - 16)) < 0x80000000 )
  {
    v16 = 0;
    v17 = 261759;
    goto BACK_MAIN;
  }
  a2.m128d_f64[0] = a9;
  a4.m128d_f64[0] = NAN;
  v56 = _mm_cvtsi128_si32((__m128i)a2);
  a3.m128d_f64[0] = a9;
  v57 = _mm_srli_epi64((__m128i)_mm_and_pd(a2, a4), 0x20u);
  v58 = _mm_cvtsi128_si32(v57);
  if ( v58 >= 0x7FF00000 )
  {
    v13.m128d_f64[0] = a8;
    a5.m128d_f64[0] = a8;
    v30 = _mm_cvtsi128_si32((__m128i)v13);
    v16 = _mm_cvtsi128_si32(_mm_srli_epi64((__m128i)v13, 0x20u));
    if ( (v16 & 0x7FFFFFFF) < 0x7FF00000 || (v16 & 0x7FFFFFFF) <= 0x7FF00000 && v30 == 0 )
      goto Y_INF_NAN;
    goto X_NAN;
  }
  if ( (v58 | v56) == 0 )
  {
    v74 = _mm_cvtsi128_si32((__m128i)a5);
    v75 = _mm_srli_epi64((__m128i)a5, 0x20u);
    v76 = v74;
    v69.m128d_f64[0] = 1.0;
    v70 = 26;
    if ( (_mm_cvtsi128_si32(v75) & 0x7FFFFFFF | v74) != 0 )
    {
      v70 = 29;
      v77 = _mm_cvtsi128_si32(v75) & 0x7FFFFFFF;
      if ( v77 <= 0x7FF00000 && (v77 < 0x7FF00000 || v76 == 0) )
      {
        v102 = 1.0;
        return 1.0;
      }
    }
    goto CALL_LIBM_ERROR;
  }
  if ( v15 >= 0 )
  {
    v16 = 0;
    goto DENORMAL_X;
  }
  v59 = (__m128i)_mm_or_pd(a3, (__m128d)_mm_slli_epi64((__m128i)a4, 0x34u));
  a4 = 0;
  v60 = _mm_max_epi16(_mm_sub_epi32(_mm_srli_epi64(v57, 0x14u), _mm_cvtsi32_si128(0x3F3u)), (__m128i)0LL);
  v61 = _mm_cmpeq_epi32(_mm_sll_epi64(v59, v60), (__m128i)0LL);
  v62 = _mm_movemask_epi8(v61);
  v63 = (32751 - v15) & 0x7FFF;
  if ( v63 >= 0x7FF0 )
  {
    a4.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL);
    v71 = _mm_cmpeq_epi32((__m128i)0LL, (__m128i)_mm_and_pd(a4, a5));
    if ( (unsigned __int8)_mm_movemask_epi8(v71) == 255 )
    {
      if ( (_mm_extract_epi16((__m128i)a5, 3) & 0x8000) != 0 )
      {
        if ( v62 == 255 )
        {
          *(double *)v71.m128i_i64 = a9;
          *(double *)v61.m128i_i64 = a9;
          v71 = _mm_sub_epi32(
                  _mm_srli_epi64((__m128i)_mm_and_pd((__m128d)v71, (__m128d)xmmword_10033480), 0x34u),
                  _mm_cvtsi32_si128(0x3F4u));
          if ( (unsigned __int8)_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_sll_epi64(v61, v71), (__m128i)0LL)) != 255 )
          {
            *(double *)v71.m128i_i64 = a9;
            if ( (_mm_extract_epi16(v71, 3) & 0x8000) == 0 )
              return -INFINITY;
            return -0.0;
          }
        }
        *(double *)v71.m128i_i64 = a9;
        if ( (_mm_extract_epi16(v71, 3) & 0x8000) != 0 )
          return 0.0;
      }
      else
      {
        *(double *)v71.m128i_i64 = a9;
        if ( (_mm_extract_epi16(v71, 3) & 0x8000) != 0 )
          return 0.0;
      }
      return INFINITY;
    }
X_NAN:
    v69.m128d_f64[0] = a5.m128d_f64[0] + a5.m128d_f64[0];
    v70 = 1006;
    goto CALL_LIBM_ERROR;
  }
  if ( v62 != 255 )
  {
    *(double *)v61.m128i_i64 = a8;
    v72 = _mm_cvtsi128_si32(v61);
    a3 = (__m128d)_mm_srli_epi64(v61, 0x20u);
    v66 = _mm_cvtsi128_si32((__m128i)a3) & 0x7FFFFFFF | v72;
    v16 = 0;
    if ( v66 != 0 )
    {
      v69.m128d_f64[0] = NAN;
      v70 = 28;
      goto CALL_LIBM_ERROR;
    }
    goto ZERO_X;
  }
  *(double *)v60.m128i_i64 = a9;
  *(double *)v61.m128i_i64 = a9;
  a4 = (__m128d)_mm_cvtsi32_si128(0x3F4u);
  v64 = _mm_sub_epi32(_mm_srli_epi64((__m128i)_mm_and_pd((__m128d)v60, (__m128d)xmmword_10033480), 0x34u), (__m128i)a4);
  a4.m128d_f64[0] = -0.0;
  a3 = (__m128d)_mm_cmpeq_epi32(_mm_sll_epi64(v61, v64), (__m128i)a4);
  v16 = ((unsigned __int8)_mm_movemask_epi8((__m128i)a3) + 261889) & 0x40000;
  if ( v63 >= 0x10 )
  {
    v17 = 786047;
    goto BACK_MAIN;
  }
DENORMAL_X:
  inserted = _mm_insert_epi16((__m128i)0LL, 0x43F0u, 3);
  v13.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL);
  a3.m128d_f64[0] = 1.0;
  *(double *)inserted.m128i_i64 = *(double *)inserted.m128i_i64 * a8;
  v65 = _mm_cvtsi128_si32((__m128i)a5);
  a5 = (__m128d)_mm_srli_epi64((__m128i)a5, 0x20u);
  v66 = _mm_cvtsi128_si32((__m128i)a5);
  if ( v65 == 0 )
  {
ZERO_X:
    if ( (v66 & 0x7FFFFFFF) != 0 )
      goto BACK_DEN;
    if ( a9 < 0.0 )
    {
      *(_QWORD *)&v69.m128d_f64[0] = _mm_cvtsi32_si128((v16 << 13) & v66 | 0x7FF00000).m128i_u64[0] << 32;
      v70 = 27;
      goto CALL_LIBM_ERROR;
    }
    if ( ((v16 << 13) & v66) == 0 )
      return 0.0;
    return -0.0;
  }
BACK_DEN:
  v67 = _mm_and_pd(v13, (__m128d)inserted);
  a5.m128d_f64[0] = *(double *)inserted.m128i_i64;
  inserted = _mm_srli_epi64((__m128i)_mm_and_pd((__m128d)inserted, (__m128d)xmmword_10033480), 0x2Cu);
  v13 = _mm_or_pd(v67, a3);
  v68 = ((unsigned __int8)_mm_extract_epi16(inserted, 0) + 1) & 0x1FE;
  v13.m128d_f64[0] = v13.m128d_f64[0] * *(double *)((char *)&qword_100353C0 + 4 * v68);
  a6.m128d_f64[0] = *(double *)((char *)&qword_100353C0 + 4 * v68);
  v14 = *(__m128d *)((char *)&xmmword_100357D0 + 8 * v68);
  v17 = 278143;
BACK_MAIN:
  v18 = (__m128d)_mm_cvtsi32_si128(v17);
  v19 = _mm_cvtepi32_pd(_mm_srli_epi64(_mm_sub_epi64(inserted, (__m128i)v18), 8u));
  v18.m128d_f64[0] = NAN;
  a4.m128d_f64[0] = v13.m128d_f64[0];
  v20 = (__m128d)_mm_srli_epi64((__m128i)v13, 0x26u);
  v21 = ((unsigned __int8)_mm_extract_epi16((__m128i)v20, 0) + 1) & 0x1FE;
  a4.m128d_f64[0] = a4.m128d_f64[0] * *(double *)((char *)&qword_10035FE0 + 4 * v21);
  a6.m128d_f64[0] = a6.m128d_f64[0] * *(double *)((char *)&qword_10035FE0 + 4 * v21);
  v22 = _mm_add_pd(v14, *(__m128d *)((char *)&xmmword_100363F0 + 8 * v21));
  a5 = _mm_or_pd(_mm_and_pd(a5, (__m128d)xmmword_10033460), (__m128d)xmmword_10033470);
  v22.m128d_f64[0] = v22.m128d_f64[0] + v19.m128d_f64[0];
  v29 = (__m128i)_mm_and_pd(v18, a5);
  v23 = a4.m128d_f64[0];
  a4 = (__m128d)_mm_srli_epi64((__m128i)a4, 0x1Fu);
  v19.m128d_f64[0] = NAN;
  a5.m128d_f64[0] = a5.m128d_f64[0] - *(double *)v29.m128i_i64;
  v24 = ((_mm_extract_epi16((__m128i)a4, 0) & 0x1FF) + 1) & 0x3FE;
  a6.m128d_f64[0] = a6.m128d_f64[0] * *(double *)((char *)&qword_10036C00 + 4 * v24);
  v25 = v23 * *(double *)((char *)&qword_10036C00 + 4 * v24);
  v33 = _mm_add_pd(v22, *(__m128d *)((char *)&xmmword_10037410 + 8 * v24));
  v32 = _mm_and_pd(v19, a6);
  v26 = a6.m128d_f64[0] - v32.m128d_f64[0];
  v20.m128d_f64[0] = v25 + -1.442694902420044;
  a4.m128d_f64[0] = v32.m128d_f64[0];
  v27 = v25 - v32.m128d_f64[0] * *(double *)v29.m128i_i64;
  v32.m128d_f64[0] = v33.m128d_f64[0];
  v28 = v27 - *(double *)v29.m128i_i64 * v26;
  v33.m128d_f64[0] = v33.m128d_f64[0] + v20.m128d_f64[0];
  *(double *)v29.m128i_i64 = a9;
  v30 = _mm_extract_epi16((__m128i)v33, 3);
  v31 = v28 - a4.m128d_f64[0] * a5.m128d_f64[0] - a5.m128d_f64[0] * v26;
  a5.m128d_f64[0] = v33.m128d_f64[0];
  v32.m128d_f64[0] = v32.m128d_f64[0] - v33.m128d_f64[0] + v20.m128d_f64[0];
  v20.m128d_f64[0] = v20.m128d_f64[0] - v31;
  v33.m128d_f64[0] = v33.m128d_f64[0] - v31;
  v34 = _mm_unpacklo_pd(v20, v20);
  v35 = _mm_extract_epi16(v29, 3) & 0x7FF0;
  if ( v35 >= 0x7FF0 )
  {
    a5.m128d_f64[0] = a8;
    a3.m128d_f64[0] = a9;
    if ( _mm_cvtsi128_si32((__m128i)a5) == 0 )
    {
      a5 = (__m128d)_mm_srli_epi64((__m128i)a5, 0x20u);
      v30 = _mm_cvtsi128_si32((__m128i)a5);
      if ( v30 == 1072693248 )
        return 1.0;
      if ( v30 == -1074790400 )
        return 1.0;
    }
Y_INF_NAN:
    a4.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL);
    if ( (unsigned __int8)_mm_movemask_epi8(_mm_cmpeq_epi32((__m128i)0LL, (__m128i)_mm_and_pd(a4, a3))) != 255 )
    {
      v69.m128d_f64[0] = a3.m128d_f64[0] + a3.m128d_f64[0];
      v70 = 1006;
      goto CALL_LIBM_ERROR;
    }
    a5.m128d_f64[0] = a8;
    v73 = _mm_extract_epi16((__m128i)a3, 3) & 0x8000;
    if ( (v16 ^ 0xBFF00000 | v30) != 0 )
    {
      if ( v73 != 0 )
      {
        if ( (_mm_extract_epi16((__m128i)a5, 3) & 0x7FF0u) >= 0x3FF0 )
          return 0.0;
      }
      else if ( (_mm_extract_epi16((__m128i)a5, 3) & 0x7FF0u) < 0x3FF0 )
      {
        return 0.0;
      }
      return INFINITY;
    }
    return 1.0;
  }
  if ( (((v30 & 0x7FF0) + v35 - 16368 - 15472) | (16544 - ((v30 & 0x7FF0) + v35 - 16368))) < 0x80000000
    || (a5 = _mm_mul_pd((__m128d)_mm_shuffle_epi32(v29, 68), v33),
        v98 = _mm_extract_epi16((__m128i)a5, 3) & 0x7FF0,
        v99 = 16544 - v98,
        ((v100 = v98 - 15472) | v99) < 0x80000000) )
  {
    v36 = v31 - (a5.m128d_f64[0] - v33.m128d_f64[0]);
    *(_QWORD *)&v37 = COERCE_UNSIGNED_INT64(NAN) & *(_QWORD *)&v33.m128d_f64[0];
    v32.m128d_f64[0] = v32.m128d_f64[0] - v36;
    v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & *(_QWORD *)&a9)
        * COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & *(_QWORD *)&v33.m128d_f64[0]);
    v33.m128d_f64[0] = v33.m128d_f64[0] - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & *(_QWORD *)&v33.m128d_f64[0]);
    v39 = a9 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & *(_QWORD *)&a9);
    v40 = v38 * *(double *)_mm_insert_epi16((__m128i)0LL, 0x4060u, 3).m128i_i64;
    v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & *(_QWORD *)&a9) * v33.m128d_f64[0];
    v33.m128d_f64[0] = v33.m128d_f64[0] * v39;
    v42 = v41 + v37 * v39;
    *(_QWORD *)&v43 = _mm_shuffle_epi32((__m128i)v33, 238).m128i_u64[0];
    v44 = v42 + v33.m128d_f64[0];
    v45 = (int)v40;
    if ( (((int)v40 + 123391) | (130943 - (int)v40)) > 0 )
    {
      v46 = _mm_mul_pd((__m128d)xmmword_10038420, v34);
      v47 = _mm_mul_pd(v34, v34);
      v48 = (__m128i)_mm_add_pd(v46, _mm_mul_pd((__m128d)xmmword_10038430, v47));
      *(double *)v48.m128i_i64 = *(double *)v48.m128i_i64 * v47.m128d_f64[0]
                               + *(double *)_mm_shuffle_epi32(v48, 238).m128i_i64
                               + v43
                               + v32.m128d_f64[0];
      v32.m128d_f64[0] = (v40 - (v40 + 6.755399441055744e15 - 6.755399441055744e15))
                       * *(double *)_mm_insert_epi16((__m128i)0LL, 0x3F80u, 3).m128i_i64;
      v49 = (__m128i)_mm_mul_pd(
                       (__m128d)xmmword_10038440[(int)v40 & 0x7F],
                       (__m128d)_mm_shuffle_epi32(
                                  _mm_slli_epi64(_mm_cvtsi32_si128((((int)v40 + v16) & 0xFFFFFF80) + 130944), 0x2Du),
                                  68));
      v32.m128d_f64[0] = v32.m128d_f64[0] + v44 + *(double *)v48.m128i_i64 * a9;
      v50 = _mm_unpacklo_pd(v32, v32);
      v51 = _mm_mul_pd((__m128d)xmmword_10033490, v50);
      v52 = 0.6931471805599453 * v50.m128d_f64[0];
      v53 = _mm_mul_pd(v50, v50);
      v54 = (__m128i)_mm_mul_pd(_mm_add_pd((__m128d)xmmword_100334A0, v51), v53);
      return v53.m128d_f64[0] * *(double *)v49.m128i_i64 * *(double *)v54.m128i_i64
           + *(double *)_mm_shuffle_epi32(v49, 238).m128i_i64
           + *(double *)_mm_shuffle_epi32(v54, 238).m128i_i64 * *(double *)v49.m128i_i64
           + v52 * *(double *)v49.m128i_i64
           + *(double *)v49.m128i_i64;
    }
    if ( v45 <= 0 )
    {
      if ( v45 <= -261632 )
      {
RET_ZERO_UF:
        *(_QWORD *)&v69.m128d_f64[0] = COERCE_UNSIGNED_INT64(2.225073858507201e-308 * 2.225073858507201e-308)
                                     | (_mm_cvtsi32_si128(v16).m128i_u64[0] << 45);
        v70 = 25;
        goto CALL_LIBM_ERROR;
      }
      v78 = (int)v40 & 0x7F;
      v79 = v16 + 128;
      v80 = ((int)v40 & 0xFFFFFF80) + 261760;
      v81 = 0;
    }
    else
    {
      if ( (unsigned int)v45 >= 0x40000 )
        goto RET_INF_OF;
      v78 = (int)v40 & 0x7F;
      v79 = v16 + 261888;
      v80 = ((int)v40 - 128) & 0xFFFFFF80;
      v81 = 16368;
    }
    v82 = v43 + v32.m128d_f64[0];
    v83 = _mm_mul_pd((__m128d)xmmword_10038420, v34);
    v84 = _mm_mul_pd(v34, v34);
    v32.m128d_f64[0] = v40 - (v40 + 6.755399441055744e15 - 6.755399441055744e15);
    v85 = (__m128i)_mm_add_pd(v83, _mm_mul_pd((__m128d)xmmword_10038430, v84));
    v86 = (__m128i)_mm_mul_pd(
                     (__m128d)xmmword_10038440[v78],
                     (__m128d)_mm_shuffle_epi32(_mm_slli_epi64(_mm_cvtsi32_si128(v80), 0x2Du), 68));
    v32.m128d_f64[0] = v32.m128d_f64[0] * *(double *)_mm_insert_epi16((__m128i)0LL, 0x3F80u, 3).m128i_i64
                     + v44
                     + (*(double *)v85.m128i_i64 * v84.m128d_f64[0]
                      + *(double *)_mm_shuffle_epi32(v85, 238).m128i_i64
                      + v82)
                     * a9;
    v87 = _mm_unpacklo_pd(v32, v32);
    v88 = _mm_mul_pd((__m128d)xmmword_10033490, v87);
    v89 = 0.6931471805599453 * v87.m128d_f64[0];
    v69 = _mm_mul_pd(v87, v87);
    v90 = (__m128i)_mm_mul_pd(_mm_add_pd((__m128d)xmmword_100334A0, v88), v69);
    v88.m128d_f64[0] = *(double *)_mm_shuffle_epi32(v90, 238).m128i_i64;
    v69.m128d_f64[0] = v69.m128d_f64[0] * *(double *)v86.m128i_i64 * *(double *)v90.m128i_i64;
    *(_QWORD *)&v91 = _mm_cvtsi32_si128(v79).m128i_u64[0] << 45;
    v85.m128i_i8[0] = _mm_cvtsi32_si128((((unsigned __int8)((int)(130944 - v80) >> 7) + 2) & 0x20u) + ((int)(130944 - v80) >> 7) + 2).m128i_u8[0];
    *(_QWORD *)&v92 = (-1LL << v85.m128i_i8[0]) & v86.m128i_i64[0];
    v69.m128d_f64[0] = v69.m128d_f64[0]
                     + *(double *)_mm_shuffle_epi32(v86, 238).m128i_i64
                     + v88.m128d_f64[0] * *(double *)v86.m128i_i64
                     + v89 * *(double *)v86.m128i_i64;
    v93 = -1LL << v85.m128i_i8[0];
    *(double *)v86.m128i_i64 = *(double *)v86.m128i_i64 - v92;
    *(double *)v85.m128i_i64 = v92;
    *(_QWORD *)&v94 = COERCE_UNSIGNED_INT64(v92 + v69.m128d_f64[0]) & v93;
    *(_QWORD *)&v95 = _mm_insert_epi16((__m128i)0LL, v81, 3).m128i_u64[0];
    v69.m128d_f64[0] = v69.m128d_f64[0] + *(double *)v85.m128i_i64 - v94 + *(double *)v86.m128i_i64;
    if ( (int)(v80 - 130944) > 0 )
    {
      v69.m128d_f64[0] = (v69.m128d_f64[0] + v94) * v91 + v95 * ((v69.m128d_f64[0] + v94) * v91);
      v97 = _mm_extract_epi16((__m128i)v69, 3) & 0x7FF0;
      v70 = 24;
      if ( v97 != 32752 )
      {
        v70 = 25;
        if ( v97 != 0 )
        {
          v102 = v69.m128d_f64[0];
          return v69.m128d_f64[0];
        }
      }
    }
    else
    {
      v69.m128d_f64[0] = v69.m128d_f64[0] * v91 + v94 * v91 + v95 * (v69.m128d_f64[0] * v91 + v94 * v91);
      v96 = _mm_extract_epi16((__m128i)v69, 3) & 0x7FF0;
      v70 = 24;
      if ( v96 != 32752 )
      {
        v70 = 25;
        if ( v96 != 0 )
        {
          v102 = v69.m128d_f64[0];
          return v69.m128d_f64[0];
        }
      }
    }
CALL_LIBM_ERROR:
    v102 = v69.m128d_f64[0];
    __libm_error_support(&v101 + 8, &a9, &v102, v70);
    return v102;
  }
  if ( v100 < 0x80000000 )
  {
    a5.m128d_f64[0] = a8;
    if ( (((unsigned __int16)((_mm_extract_epi16((__m128i)a5, 3) & 0x7FF0) - 16368)
         ^ (unsigned __int16)_mm_extract_epi16(v29, 3))
        & 0x8000) == 0 )
    {
RET_INF_OF:
      v70 = 24;
      if ( v16 != 0 )
        v69.m128d_f64[0] = -8.98846567431158e307 * 8.98846567431158e307;
      else
        v69.m128d_f64[0] = 8.98846567431158e307 * 8.98846567431158e307;
      goto CALL_LIBM_ERROR;
    }
    goto RET_ZERO_UF;
  }
  *(_QWORD *)&result = _mm_cvtsi32_si128(v16 | 0x1FF80).m128i_u64[0] << 45;
  return result;
}

// Address: 0x10021191
long double __usercall _fFEXP@<st0>(__int16 a1@<cx>, int a2@<ebp>, double a3@<st0>)
{
  long double v3; // st7
  char v4; // dl
  char v5; // ch
  long double v6; // st6

  *(_BYTE *)(a2 - 144) = -2;
  HIBYTE(a1) = 0;
  v3 = a3 * 1.442695040888963407;
  _ffexpm1(a1);
  v6 = 1.442695040888963407 + 1.0;
  if ( (*(_BYTE *)(a2 - 159) & 1) != 0 )
    v6 = 1.0 / v6;
  if ( (v4 & 0x40) == 0 )
    v6 = __FSCALE__(v6, v3);
  if ( v5 != 0 )
    return -v6;
  return v6;
}

// Address: 0x10021257
void zerotoxdone()
{
  ;
}

// Address: 0x100212A2
void expbigret()
{
  ;
}

// Address: 0x100212C1
// positive sp value has been detected, the output may be wrong!
double __fastcall rtforexpinf(char a1)
{
  if ( a1 != 0 )
    return 0.0;
  else
    return -0.0;
}

// Address: 0x100212CE
// positive sp value has been detected, the output may be wrong!
void __usercall _ffexpm1(char a1@<ch>, int _EBP@<ebp>)
{
  __asm
  {
    fld     st
    fabs
    fld     ds:tbyte_1003352E
    fcompp
    fstsw   word ptr [ebp-0A0h]
  }
  if ( (*(_BYTE *)(_EBP - 159) & 0x41) != 0 )
  {
    __asm
    {
      ftst
      fstsw   word ptr [ebp-0A0h]
    }
    if ( (*(_BYTE *)(_EBP - 159) & 1) != 0 )
    {
      *(_BYTE *)(_EBP - 144) = 4;
      __asm
      {
        fstp    st
        fldz
      }
    }
    else
    {
      __asm
      {
        fstp    st
        fld     ds:tbyte_10033510
      }
      if ( a1 != 0 )
        __asm { fchs }
      expbigret();
    }
  }
  else
  {
    __asm
    {
      fld     st
      frndint
      ftst
      fstsw   word ptr [ebp-0A0h]
    }
    __asm
    {
      fxch    st(1)
      fsub    st, st(1)
      ftst
      fstsw   word ptr [ebp-0A0h]
      fabs
      f2xm1
    }
  }
}

// Address: 0x10021311
int __usercall isintTOS@<eax>(long double a1@<st0>)
{
  if ( rint(a1) != a1 )
    return notanint();
  if ( rint(a1 * 0.5) == a1 * 0.5 )
    return evenint();
  return isintTOSret();
}

// Address: 0x10021336
void isintTOSret()
{
  ;
}

// Address: 0x10021337
void notanint()
{
  isintTOSret();
}

// Address: 0x1002133E
void evenint()
{
  isintTOSret();
}

// Address: 0x10021345
double __usercall usepowhlp@<st0>(double a1@<st1>, double a2@<st0>)
{
  int v3; // eax
  double result; // st7
  double *v5; // [esp+10h] [ebp-7Ch]
  double v6[15]; // [esp+14h] [ebp-78h] BYREF

  _ESI = v6;
  v5 = v6;
  __asm { fsave   byte ptr [esi+8] }
  v3 = _powhlp(a2, a1, (int)v6);
  __asm { frstor  byte ptr [esi+8] }
  result = v6[0];
  if ( v3 != 0 )
    _rttosnpopde();
  return result;
}

// Address: 0x10021380
int __usercall _trandisp1@<eax>(int a1@<edx>, __int16 a2@<cx>, int a3@<ebp>, __int16 a4@<fpstat>, double _ST7@<st0>)
{
  __int16 v5; // bx

  if ( *(_BYTE *)(a1 + 14) == 5 )
  {
    HIBYTE(v5) = HIBYTE(*(_WORD *)(a3 - 164)) & 0xFC | 2;
    LOBYTE(v5) = 63;
  }
  else
  {
    v5 = 4927;
  }
  *(_WORD *)(a3 - 162) = v5;
  _EBX = &unk_1003359E;
  __asm { fxam }
  *(_DWORD *)(a3 - 148) = a1;
  *(_WORD *)(a3 - 160) = a4;
  *(_BYTE *)(a3 - 144) = 0;
  LOBYTE(a2) = __ROL1__((char)(2 * *(_BYTE *)(a3 - 159)) >> 1, 1);
  _AL = a2 & 0xF;
  __asm { xlat }
  return (*(int (__thiscall **)(int))(_AL + a1 + 16))(a2 & 0x404);
}

// Address: 0x100213E7
int __usercall _trandisp2@<eax>(int a1@<edx>, int a2@<ebp>, __int16 a3@<fpstat>, double _ST6@<st1>, double a5@<st0>)
{
  __int16 v5; // bx
  __int16 v7; // fps
  char v9; // cl
  __int16 v10; // cx
  char v13; // ah

  if ( *(_BYTE *)(a1 + 14) == 5 )
  {
    HIBYTE(v5) = HIBYTE(*(_WORD *)(a2 - 164)) & 0xFC | 2;
    LOBYTE(v5) = 63;
  }
  else
  {
    v5 = 4927;
  }
  *(_WORD *)(a2 - 162) = v5;
  _EBX = &unk_1003359E;
  __asm { fxam }
  *(_DWORD *)(a2 - 148) = a1;
  *(_WORD *)(a2 - 160) = a3;
  *(_BYTE *)(a2 - 144) = 0;
  _ST6 = a5;
  v9 = *(_BYTE *)(a2 - 159);
  __asm { fxam }
  *(_WORD *)(a2 - 160) = v7;
  HIBYTE(v10) = __ROL1__((char)(2 * *(_BYTE *)(a2 - 159)) >> 1, 1);
  _AL = HIBYTE(v10) & 0xF;
  __asm { xlat }
  v13 = _AL;
  LOBYTE(v10) = __ROL1__((char)(2 * v9) >> 1, 1);
  _AL = v10 & 0xF;
  __asm { xlat }
  return (*(int (__thiscall **)(int))((char)((4 * v13) | _AL) + a1 + 16))(v10 & 0x404);
}

// Address: 0x10021497
void dont_change_zerosign()
{
  ;
}

// Address: 0x1002149A
double _rtonenpop()
{
  return 1.0;
}

// Address: 0x1002149F
double __usercall _tosnan1@<st0>(int a1@<ebp>, double a2@<st0>)
{
  double result; // st7

  *(double *)(a1 - 158) = a2;
  result = *(double *)(a1 - 158);
  if ( (*(_BYTE *)(a1 - 151) & 0x40) != 0 )
  {
    *(_BYTE *)(a1 - 144) = 0;
  }
  else
  {
    *(_BYTE *)(a1 - 144) = 0;
    return result + 1.0;
  }
  return result;
}

// Address: 0x10021546
void __usercall _rttosnpopde(int a1@<ebp>)
{
  *(_BYTE *)(a1 - 144) = 1;
}

// Address: 0x1002156C
void retinf()
{
  ;
}

// Address: 0x10021573
void chsifnegret()
{
  ;
}

// Address: 0x10021580
void _startTwoArgErrorHandling()
{
  JUMPOUT(0x100215A0);
}

// Address: 0x10021597
double __usercall _startOneArgErrorHandling@<st0>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, double a4@<st0>)
{
  _DWORD v5[6]; // [esp+0h] [ebp-20h] BYREF
  double v6; // [esp+18h] [ebp-8h]
  int savedregs; // [esp+20h] [ebp+0h] BYREF
  __int16 v8[4]; // [esp+28h] [ebp+8h] BYREF
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

// Address: 0x100215E0
long double __usercall _twoToTOS@<st0>(long double a1@<st0>)
{
  long double v1; // rt0

  v1 = rint(a1);
  return __FSCALE__(__F2XM1__(-(v1 - a1)) + 1.0, v1);
}

// Address: 0x100215F5
void _load_CW()
{
  ;
}

// Address: 0x1002160C
double __usercall _convertTOStoQNaN@<st0>(int a1@<eax>, double result@<st0>)
{
  if ( (a1 & 0x80000) == 0 )
    return result + 1.0;
  return result;
}

// Address: 0x10021625
double __fastcall _fload_withFB(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 )
    return *(double *)a2;
  *(_QWORD *)&result = *(_QWORD *)a2 << 11;
  return result;
}

// Address: 0x10021668
int __cdecl _checkTOS_withFB(int a1, int a2)
{
  int result; // eax

  result = a2 & 0x7FF00000;
  if ( (a2 & 0x7FF00000) == 0x7FF00000 )
    return a2;
  return result;
}

// Address: 0x100216B5
void _check_overflow_exit()
{
  JUMPOUT(0x100216DD);
}

// Address: 0x100216C9
// positive sp value has been detected, the output may be wrong!
double __usercall _check_range_exit@<st0>(int a1@<edx>, int a2@<ecx>, double result@<st0>)
{
  char v3; // fps
  int v4; // eax
  double v5; // [esp-4h] [ebp-Ch]
  __int16 v6; // [esp+4h] [ebp-4h]

  v5 = result;
  if ( (HIDWORD(v5) & 0x7FF00000) == 0 )
  {
    result = __FSCALE__(result, 1536.0);
    v4 = 4;
    if ( fabs(result) < 2.225073858507201e-308 )
      result = result * 0.0;
    goto have_error;
  }
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

// Address: 0x1002176C
int __cdecl _d_inttype(double X)
{
  if ( (_fpclass(X) & 0x90) != 0 )
    return 0;
  _frnd(X);
  _frnd(X * 0.5);
  return 2;
}

// Address: 0x100217D6
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

// Address: 0x10021901
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

// Address: 0x1002193A
// Microsoft VisualC universal runtime
int __cdecl CompareFunction(const void *a1, const void *a2)
{
  if ( a2 <= a1 )
    return a2 < a1;
  else
    return -1;
}

// Address: 0x10021952
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
    unknown_libname_53(&v19);
    return v8;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x10021AE2
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
  v8 = sub_10021D21(v7);
  _free_base(nullptr);
  return v8;
}

// Address: 0x10021B78
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

// Address: 0x10021CFC
// Microsoft VisualC universal runtime
void __thiscall unknown_libname_53(void ***this)
{
  void **i; // esi

  for ( i = *this; i != *(this + 1); ++i )
    _free_base(*i);
  _free_base(*this);
}

// Address: 0x10021D21
int __thiscall sub_10021D21(_DWORD **this, void *Block)
{
  int v3; // edi

  v3 = unknown_libname_54();
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

// Address: 0x10021D56
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_54(int *this)
{
  int v2; // edi
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
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
  v6 = sub_10022A12((void *)*this, 2 * v5, 4);
  if ( v6 != 0 )
  {
    *this = v6;
    *(this + 1) = v6 + 4 * v5;
    *(this + 2) = v6 + 8 * v5;
    v7 = 0;
  }
  else
  {
    v7 = 12;
  }
  _free_base(nullptr);
  return v7;
}

// Address: 0x10021DDD
int __cdecl __acrt_expand_narrow_argv_wildcards(const char **a1, _DWORD *a2)
{
  return common_expand_argv_wildcards<char>(a1, a2);
}

// Address: 0x10021DE8
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_c76fdea48760d5f9368b465f31df4405_,_lambda_e378711a6f6581bf7f0efd7cdf97f5d9_ &,_lambda_e927a58b2a85c081d733e8c6192ae2d2_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  _lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c_::operator()(a2);
  __acrt_unlock(*a3);
}

// Address: 0x10021E2B
void __cdecl sub_10021E2B(int a1, int a2)
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

// Address: 0x10021E53
volatile signed __int32 *__thiscall _lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c_::operator()(void *this)
{
  volatile signed __int32 *result; // eax

  dword_10041360 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 4);
  dword_10041364 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 8);
  dword_1004135C = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 540);
  memcpy_s(&unk_10041368, 0xCu, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 12), 0xCu);
  memcpy_s(&unk_1003F4F8, 0x101u, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 24), 0x101u);
  memcpy_s(&unk_1003F600, 0x100u, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 281), 0x100u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)off_1003F920, 0xFFFFFFFF) == 0
    && off_1003F920 != &unk_1003F700 )
  {
    _free_base(off_1003F920);
  }
  off_1003F920 = *(void **)(**(_DWORD **)this + 72);
  result = *(volatile signed __int32 **)(**(_DWORD **)this + 72);
  _InterlockedIncrement(result);
  return result;
}

// Address: 0x10021F17
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

// Address: 0x10021F55
UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax
  _DWORD v2[3]; // [esp+0h] [ebp-10h] BYREF
  char v3; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v2, nullptr);
  dword_10041374 = 0;
  result = a1;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_10041374 = 1;
      result = GetOEMCP();
      break;
    case 0xFFFFFFFD:
      dword_10041374 = 1;
      result = GetACP();
      break;
    case 0xFFFFFFFC:
      dword_10041374 = 1;
      result = *(_DWORD *)(v2[1] + 8);
      break;
    default:
      break;
  }
  if ( v3 != 0 )
    *(_DWORD *)(v2[0] + 848) &= ~2u;
  return result;
}

// Address: 0x10021FC8
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
  v3 = &unk_1003F700 - (_UNKNOWN *)a1;
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

// Address: 0x1002202D
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

// Address: 0x100221C1
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
        sub_1001A9E0();
      if ( _InterlockedDecrement(*((volatile signed __int32 **)v9 + 18)) == 0
        && *((_UNKNOWN **)v9 + 18) != &unk_1003F700 )
      {
        _free_base(*((void **)v9 + 18));
      }
      *v4 = 1;
      v6 = v4;
      v4 = nullptr;
      *((_DWORD *)v9 + 18) = v6;
      if ( (*((_BYTE *)v9 + 848) & 2) == 0 && (dword_1003F3F8 & 1) == 0 )
      {
        SystemCP = (int)&v9;
        sub_10021E2B(5, (int)&SystemCP);
        if ( a2 )
          off_1003F31C = off_1003F920;
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

// Address: 0x100222C2
char __acrt_initialize_multibyte()
{
  if ( byte_10041378 == 0 )
  {
    setmbcp_internal(0xFFFFFFFD, true);
    byte_10041378 = 1;
  }
  return 1;
}

// Address: 0x100222E0
void *__acrt_update_thread_multibyte_data()
{
  _DWORD *v0; // eax
  _DWORD *v1; // edi
  void *v2; // esi

  v0 = __acrt_getptd();
  v1 = v0;
  if ( (dword_1003F3F8 & v0[212]) != 0 && v0[19] != 0 )
  {
    v2 = (void *)v0[18];
  }
  else
  {
    __acrt_lock(5);
    v2 = (void *)v1[18];
    if ( v2 != off_1003F920 )
    {
      if ( v2 != nullptr
        && _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 0
        && v2 != &unk_1003F700 )
      {
        _free_base(v2);
      }
      v1[18] = off_1003F920;
      v2 = off_1003F920;
      _InterlockedIncrement((volatile signed __int32 *)off_1003F920);
    }
    __acrt_unlock(5);
  }
  if ( v2 == nullptr )
    abort();
  return v2;
}

// Address: 0x10022382
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
      if ( dword_1003F408[v6] == SystemCP )
      {
        memset((char *)a2 + 24, 0, 0x101u);
        v21 = 48 * v22;
        v13 = (char *)&unk_1003F418 + 48 * v22;
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
                *((_BYTE *)a2 + v16++ + 25) |= byte_1003F400[v4];
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
        v18 = (__int16 *)((char *)&unk_1003F40C + v21);
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
    if ( dword_10041374 == 0 )
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

// Address: 0x10022573
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

// Address: 0x100225F4
char __acrt_initialize_command_line()
{
  dword_10041388 = (int)GetCommandLineA();
  dword_1004138C = (int)GetCommandLineW();
  return 1;
}

// Address: 0x1002260D
const wchar_t *__cdecl find_end_of_double_null_terminated_sequence(const wchar_t *a1)
{
  const unsigned __int16 *i; // edx

  for ( i = a1; *i != 0; i += wcslen(i) + 1 )
    ;
  return i + 1;
}

// Address: 0x10022644
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

// Address: 0x100226C7
int __cdecl common_set_variable_in_environment_nolock<char>(char *Str, int a2)
{
  char *v3; // edi
  char *v4; // eax
  _DWORD *v5; // esi
  bool v6; // al
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  const char *v10; // eax
  _DWORD *v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // kr00_4
  char *v14; // eax
  CHAR *v15; // esi
  const CHAR *v16; // ecx
  char *v17; // [esp+4h] [ebp-Ch]
  rsize_t SizeInBytes; // [esp+8h] [ebp-8h]
  rsize_t SizeInBytesa; // [esp+8h] [ebp-8h]
  bool v20; // [esp+Fh] [ebp-1h]

  if ( Str == nullptr )
  {
    *_errno() = 22;
    return -1;
  }
  v3 = Str;
  v4 = strchr(Str, 61);
  v17 = v4;
  if ( v4 == nullptr || v4 == Str )
    goto LABEL_11;
  v5 = dword_10040F50;
  v6 = v4[1] == 0;
  v20 = v6;
  if ( dword_10040F50 == dword_10040F5C )
  {
    v5 = (_DWORD *)copy_environment<char>(dword_10040F50);
    v6 = v20;
    dword_10040F50 = v5;
  }
  v7 = 0;
  if ( v5 != nullptr )
  {
LABEL_21:
    v8 = find_in_environment_nolock<char>(Str, v17 - Str);
    SizeInBytes = v8;
    if ( v8 >= 0 && *v5 != 0 )
    {
      _free_base((void *)v5[v8]);
      v9 = SizeInBytes;
      if ( !v20 )
      {
        v10 = Str;
        v3 = nullptr;
        v5[SizeInBytes] = Str;
        goto LABEL_35;
      }
      while ( v5[v9] != 0 )
      {
        v5[v9] = v5[v9 + 1];
        ++v9;
      }
      v11 = (_DWORD *)sub_10022A12(v5, v9, 4);
      _free_base(nullptr);
      v10 = Str;
      if ( v11 == nullptr )
      {
LABEL_35:
        if ( a2 != 0 )
        {
          v13 = strlen(v10);
          v14 = (char *)_calloc_base(v13 + 2, 1u);
          v15 = v14;
          if ( v14 != nullptr )
          {
            if ( strcpy_s(v14, v13 + 2, Str) != 0 )
              _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            v16 = &v17[v15 - Str + 1];
            *((_BYTE *)v16 - 1) = 0;
            if ( !SetEnvironmentVariableA(v15, !v20 ? v16 : nullptr) )
            {
              v7 = -1;
              *_errno() = 42;
            }
          }
          _free_base(v15);
        }
        goto LABEL_13;
      }
    }
    else
    {
      if ( v20 )
        goto LABEL_13;
      v12 = -v8;
      SizeInBytesa = v12;
      if ( v12 + 2 < v12 )
        goto LABEL_12;
      if ( v12 + 2 >= 0x3FFFFFFF )
        goto LABEL_12;
      v11 = (_DWORD *)sub_10022A12(v5, v12 + 2, 4);
      _free_base(nullptr);
      if ( v11 == nullptr )
        goto LABEL_12;
      v3 = nullptr;
      v10 = Str;
      v11[SizeInBytesa] = Str;
      v11[SizeInBytesa + 1] = 0;
    }
    dword_10040F50 = v11;
    goto LABEL_35;
  }
  if ( a2 != 0 && dword_10040F54 != 0 )
  {
    if ( sub_100181F4() == nullptr )
    {
LABEL_11:
      *_errno() = 22;
      goto LABEL_12;
    }
    goto LABEL_19;
  }
  if ( v6 )
  {
    v7 = 0;
    goto LABEL_13;
  }
  dword_10040F50 = _calloc_base(1u, 4u);
  _free_base(nullptr);
  v5 = dword_10040F50;
  if ( dword_10040F50 != nullptr )
  {
    if ( dword_10040F54 == 0 )
    {
      dword_10040F54 = (int)_calloc_base(1u, 4u);
      _free_base(nullptr);
      if ( dword_10040F54 == 0 )
        goto LABEL_12;
LABEL_19:
      v5 = dword_10040F50;
    }
    if ( v5 == nullptr )
      goto LABEL_12;
    goto LABEL_21;
  }
LABEL_12:
  v7 = -1;
LABEL_13:
  _free_base(v3);
  return v7;
}

// Address: 0x10022902
_BYTE *__cdecl copy_environment<char>(const char **a1)
{
  const char **v1; // edi
  int v3; // ecx
  const char **i; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  int v7; // ebx
  rsize_t SizeInBytes; // [esp+4h] [ebp-4h]

  v1 = a1;
  if ( a1 == nullptr )
    return nullptr;
  v3 = 0;
  for ( i = a1; *i != nullptr; ++v3 )
    ++i;
  v5 = _calloc_base(v3 + 1, 4u);
  v6 = v5;
  if ( v5 == nullptr )
LABEL_12:
    abort();
  if ( *a1 != nullptr )
  {
    v7 = v5 - (_BYTE *)a1;
    do
    {
      SizeInBytes = &(*v1)[strlen(*v1) + 1] - *v1;
      *(const char **)((char *)v1 + v7) = (const char *)_calloc_base(SizeInBytes, 1u);
      _free_base(nullptr);
      if ( *(const char **)((char *)v1 + v7) == nullptr )
        goto LABEL_12;
      if ( strcpy_s(*(char **)((char *)v1 + v7), SizeInBytes, *v1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      ++v1;
    }
    while ( *v1 != nullptr );
  }
  _free_base(nullptr);
  return v6;
}

// Address: 0x100229B3
int __cdecl find_in_environment_nolock<char>(char *String1, size_t MaxCount)
{
  _BYTE *v2; // edi
  const char **v3; // esi
  char v4; // al

  v2 = dword_10040F50;
  v3 = (const char **)dword_10040F50;
  if ( *(_DWORD *)dword_10040F50 == 0 )
    return -(((char *)v3 - v2) >> 2);
  while ( 1 )
  {
    if ( _strnicoll(String1, *v3, MaxCount) == 0 )
    {
      v4 = (*v3)[MaxCount];
      if ( v4 == 61 || v4 == 0 )
        break;
    }
    if ( *++v3 == nullptr )
      return -(((char *)v3 - v2) >> 2);
  }
  return ((char *)v3 - v2) >> 2;
}

// Address: 0x10022A07
int __cdecl __dcrt_set_variable_in_narrow_environment_nolock(char *a1, int a2)
{
  return common_set_variable_in_environment_nolock<char>(a1, a2);
}

// Address: 0x10022A12
char *__cdecl sub_10022A12(void *Block, unsigned int a2, unsigned int a3)
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

// Address: 0x10022A8A
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

// Address: 0x10022B0D
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

// Address: 0x10022B5A
// Microsoft VisualC universal runtime
int __fastcall unknown_libname_55(_DWORD *a1, int a2, int a3)
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

// Address: 0x10022B8B
BOOL __acrt_has_user_matherr()
{
  return __ROR4__(dword_10041394 ^ __security_cookie, __security_cookie & 0x1F) != 0;
}

// Address: 0x10022BA4
int __usercall sub_10022BA4@<eax>(int a1@<edx>, int a2)
{
  return unknown_libname_55(&dword_10041394, a1, a2);
}

// Address: 0x10022BB8
int __cdecl __acrt_invoke_user_matherr(int a1)
{
  int (__cdecl *v1)(int); // esi

  v1 = (int (__cdecl *)(int))__ROR4__(dword_10041394 ^ __security_cookie, __security_cookie & 0x1F);
  if ( v1 != nullptr )
    return v1(a1);
  else
    return 0;
}

// Address: 0x10022C10
void __usercall _CIexp_pentium4(double a1@<st0>)
{
  start_1(a1);
}

// Address: 0x10022C2E
double __usercall start_1@<st0>(__m128d a1@<xmm0>, double a2)
{
  __m128d v2; // xmm0
  int v3; // eax
  __m128d v4; // xmm7
  __m128d v5; // xmm1
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  __m128d v9; // xmm0
  __m128d v10; // xmm2
  __m128d v11; // xmm4
  __m128d v12; // xmm0
  __m128d v13; // xmm0
  __m128i v14; // xmm2
  int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // edx
  unsigned int v20; // eax
  _TBYTE v21; // [esp+10h] [ebp-Ch] BYREF

  v2 = _mm_unpacklo_pd(a1, a1);
  v3 = _mm_extract_epi16((__m128i)v2, 3) & 0x7FFF;
  if ( ((v3 - 15504) | (unsigned int)(16527 - v3)) < 0x80000000 )
  {
    v4 = _mm_add_pd(_mm_mul_pd((__m128d)xmmword_10033670, v2), (__m128d)xmmword_10033650);
    v5 = _mm_sub_pd(v4, (__m128d)xmmword_10033650);
    v6 = _mm_cvtsi128_si32((__m128i)v4);
    v7 = v6 & 0x3F;
    v8 = v6 >> 6;
    v9 = _mm_sub_pd(
           _mm_sub_pd(v2, _mm_mul_pd((__m128d)xmmword_10033680, v5)),
           _mm_mul_pd((__m128d)xmmword_10033690, v5));
    v10 = (__m128d)xmmword_10038C40[v7];
    v11 = _mm_mul_pd((__m128d)xmmword_100336A0, v9);
    v5.m128d_f64[0] = v9.m128d_f64[0];
    v12 = _mm_mul_pd(v9, v9);
    v12.m128d_f64[0] = v12.m128d_f64[0] * v12.m128d_f64[0];
    v13 = _mm_mul_pd(v12, _mm_add_pd((__m128d)xmmword_100336B0, v11));
    v5.m128d_f64[0] = v5.m128d_f64[0] + v10.m128d_f64[0] + v13.m128d_f64[0];
    v14 = (__m128i)_mm_or_pd(
                     _mm_unpackhi_pd(v10, v10),
                     (__m128d)_mm_slli_epi64(
                                _mm_add_epi64(
                                  _mm_and_si128((__m128i)v4, _mm_load_si128((const __m128i *)&xmmword_10033630)),
                                  _mm_load_si128((const __m128i *)&xmmword_10033640)),
                                0x2Eu));
    v2 = _mm_unpackhi_pd(v13, v13);
    v2.m128d_f64[0] = v2.m128d_f64[0] + v5.m128d_f64[0];
    if ( (unsigned int)(v8 + 894) <= 0x77C )
      return v2.m128d_f64[0] * *(double *)v14.m128i_i64 + *(double *)v14.m128i_i64;
    v16 = v8;
    v17 = v8 >> 1;
    *(_QWORD *)((char *)&v21 + 2) = _mm_andnot_si128(_mm_load_si128((const __m128i *)&xmmword_10033620), v14).m128i_u64[0]
                                  | (_mm_cvtsi32_si128(v17 + 1023).m128i_u64[0] << 52);
    v2.m128d_f64[0] = (v2.m128d_f64[0] * *(double *)((char *)&v21 + 2) + *(double *)((char *)&v21 + 2))
                    * COERCE_DOUBLE(_mm_cvtsi32_si128(v16 - v17 + 1023).m128i_u64[0] << 52);
    v18 = _mm_extract_epi16((__m128i)v2, 3) & 0x7FF0;
    if ( v18 >= 0x7FF0 )
    {
      v19 = 14;
    }
    else
    {
      if ( v18 != 0 )
        goto RETURN;
      v19 = 15;
    }
CALL_LIBM_ERROR_0:
    *(double *)&v21 = v2.m128d_f64[0];
    __libm_error_support(&a2, &a2, &v21, v19);
    v2.m128d_f64[0] = *(double *)&v21;
RETURN:
    *(double *)&v21 = v2.m128d_f64[0];
    return v2.m128d_f64[0];
  }
  v20 = HIDWORD(a2) & 0x7FFFFFFF;
  if ( (HIDWORD(a2) & 0x7FFFFFFFu) < 0x40900000 )
    return a2 + 1.0;
  if ( v20 < 0x7FF00000 )
  {
    if ( HIDWORD(a2) >= 0x80000000 )
    {
      v2.m128d_f64[0] = 2.225073858507201e-308 * 2.225073858507201e-308;
      v19 = 15;
    }
    else
    {
      v2.m128d_f64[0] = 1.797693134862316e308 * 1.797693134862316e308;
      v19 = 14;
    }
    goto CALL_LIBM_ERROR_0;
  }
  if ( v20 > 0x7FF00000 || LODWORD(a2) != 0 )
  {
    v19 = 1002;
    goto CALL_LIBM_ERROR_0;
  }
  if ( HIDWORD(a2) == 2146435072 )
    return INFINITY;
  else
    return 0.0;
}

// Address: 0x10022ED0
int __usercall _cintrindisp2@<eax>(int a1@<edx>, double a2@<st1>, double a3@<st0>)
{
  __int16 v3; // fps
  int savedregs; // [esp+2D4h] [ebp+0h] BYREF

  __acrt_has_user_matherr();
  _trandisp2(a1, (int)&savedregs, v3, a2, a3);
  return cintrinexit();
}

// Address: 0x10022F14
int __usercall _cintrindisp1@<eax>(int a1@<edx>, __int16 a2@<cx>, double a3@<st0>)
{
  __int16 v3; // fps
  int savedregs; // [esp+2D4h] [ebp+0h] BYREF

  __acrt_has_user_matherr();
  _trandisp1(a1, a2, (int)&savedregs, v3, a3);
  return cintrinexit();
}

// Address: 0x10022F57
int __usercall _ctrandisp2@<eax>(double a2@<st0>, double a3, double a4)
{
  double v4; // st6
  int v5; // edx
  __int16 v6; // fps
  int savedregs; // [esp+2D4h] [ebp+0h] BYREF

  _fload(a3);
  v4 = _fload(a4);
  _trandisp2(v5, (int)&savedregs, v6, v4, a2);
  return ctranexit((int)&savedregs);
}

// Address: 0x10022F98
int __usercall ctranexit@<eax>(int a1@<ebp>)
{
  *(_BYTE *)(a1 - 712) &= ~1u;
  return cintrinexit();
}

// Address: 0x10022F9F
long double __usercall cintrinexit@<st0>(long double *a1@<ebp>, long double result@<st0>)
{
  char v2; // fps
  char v3; // al
  __int16 v4; // ax
  int v5; // ebx

  if ( dword_10041358 != 0 )
    return result;
  *(a1 - 90) = result;
  v3 = *((_BYTE *)a1 - 144);
  switch ( v3 )
  {
    case 0:
      goto checkinexact;
    case -1:
      if ( (*((_WORD *)a1 - 357) & 0x7FF0) != 0x7FF0 )
        goto checkinexact;
      goto haveoverflow_0;
    case -2:
      v4 = *((_WORD *)a1 - 357) & 0x7FF0;
      if ( v4 == 0 )
      {
        *(_DWORD *)((char *)a1 - 142) = 4;
        result = __FSCALE__(result, 1536.0);
        if ( fabs(result) < 2.225073858507201e-308 )
          result = result * 0.0;
        goto haveerror;
      }
      if ( v4 != 32752 )
      {
checkinexact:
        if ( (*((_WORD *)a1 - 82) & 0x20) != 0 || (v2 & 0x20) == 0 )
          return result;
        *(_DWORD *)((char *)a1 - 142) = 8;
        goto haveerror;
      }
haveoverflow_0:
      *(_DWORD *)((char *)a1 - 142) = 3;
      result = __FSCALE__(result, -1536.0);
      if ( fabs(result) > 1.797693134862316e308 )
        result = result * INFINITY;
      goto haveerror;
    default:
      break;
  }
  *(_DWORD *)((char *)a1 - 142) = v3;
haveerror:
  v5 = *((_DWORD *)a1 - 37) + 1;
  *(_DWORD *)((char *)a1 - 138) = v5;
  if ( (*(_BYTE *)(a1 - 89) & 1) == 0 )
  {
    *(_DWORD *)((char *)a1 - 134) = *((_DWORD *)a1 + 2);
    *(_DWORD *)((char *)a1 - 130) = *((_DWORD *)a1 + 3);
    if ( *(_BYTE *)(v5 + 12) != 1 )
    {
      *(_DWORD *)((char *)a1 - 126) = *((_DWORD *)a1 + 4);
      *(_DWORD *)((char *)a1 - 122) = *((_DWORD *)a1 + 5);
    }
  }
  *(long double *)((char *)a1 - 118) = result;
  _87except(*(char *)(*((_DWORD *)a1 - 37) + 14), (char *)a1 - 142, (char *)a1 - 164);
  return *(long double *)((char *)a1 - 118);
}

// Address: 0x100230E6
int __usercall _ctrandisp1@<eax>(double a1@<st0>, double a2)
{
  int v2; // edx
  __int16 v3; // cx
  __int16 v4; // fps
  int savedregs; // [esp+2D4h] [ebp+0h] BYREF

  _fload(a2);
  _trandisp1(v2, v3, (int)&savedregs, v4, a1);
  return ctranexit((int)&savedregs);
}

// Address: 0x10023119
double __cdecl _fload(double a1)
{
  double v2; // [esp+6h] [ebp-Ah]

  if ( (HIWORD(a1) & 0x7FF0) != 0x7FF0 )
    return a1;
  HIDWORD(v2) = *(_QWORD *)&a1 >> 21;
  LODWORD(v2) = LODWORD(a1);
  return v2;
}

// Address: 0x10023155
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
    if ( *(v5 - 2) != (volatile signed __int32 *)word_1003F320 && *v5 != nullptr )
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

// Address: 0x100231D2
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
  if ( v1 != nullptr && v1 != &off_1003F1F8 )
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
    if ( *(v8 - 2) != word_1003F320 )
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

// Address: 0x1002331C
signed __int32 __cdecl __acrt_locale_add_lc_time_reference(int a1)
{
  if ( a1 == 0 || (char **)a1 == off_10032B50 )
    return 0x7FFFFFFF;
  else
    return _InterlockedIncrement((volatile signed __int32 *)(a1 + 176));
}

// Address: 0x10023345
void __cdecl __acrt_locale_free_lc_time_if_unreferenced(void **Block)
{
  if ( Block != nullptr && Block != (void **)off_10032B50 && Block[44] == nullptr )
  {
    __acrt_locale_free_time(Block);
    _free_base(Block);
  }
}

// Address: 0x10023375
signed __int32 __cdecl __acrt_locale_release_lc_time_reference(int a1)
{
  if ( a1 == 0 || (char **)a1 == off_10032B50 )
    return 0x7FFFFFFF;
  else
    return _InterlockedDecrement((volatile signed __int32 *)(a1 + 176));
}

// Address: 0x1002339E
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
      if ( *(v6 - 2) != (volatile signed __int32 *)word_1003F320 && *v6 != nullptr )
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

// Address: 0x1002341F
int __acrt_update_thread_locale_data()
{
  _DWORD *v0; // eax
  _DWORD *v1; // edi
  int v2; // esi

  v0 = __acrt_getptd();
  v1 = v0;
  if ( (dword_1003F3F8 & v0[212]) == 0 || (v2 = v0[19]) == 0 )
  {
    __acrt_lock(4);
    v2 = _updatetlocinfoEx_nolock(v1 + 19, dword_10040F88);
    __acrt_unlock(4);
    if ( v2 == 0 )
      abort();
  }
  return v2;
}

// Address: 0x10023496
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
      if ( *(_DWORD *)(v2 + 12) == 0 && (wchar_t **)v2 != &off_1003F260 )
        __acrt_free_locale((char *)v2);
    }
  }
  return a2;
}

// Address: 0x100234E6
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

// Address: 0x100235A2
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

// Address: 0x100235CC
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
      v108 = (unsigned __int8)byte_10032426[4 * v106];
      v109 = (unsigned __int8)byte_10032427[4 * v106];
      v182 = v106;
      v110 = 4 * v108;
      v186 = v108 + v109;
      memset(&Source, 0, 4 * v108);
      memmove_0((char *)&Source + v110, (char *)&unk_10031B20 + 4 * (unsigned __int16)word_10032424[2 * v182], 4 * v109);
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
        v131 = dword_100324BC[v107];
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
    v75 = (unsigned __int8)byte_10032426[4 * v73];
    v76 = (unsigned __int8)byte_10032427[4 * v73];
    v178 = v73;
    v77 = 4 * v75;
    v186 = v75 + v76;
    memset(&Source, 0, 4 * v75);
    memmove_0((char *)&Source + v77, (char *)&unk_10031B20 + 4 * (unsigned __int16)word_10032424[2 * v178], 4 * v76);
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
    v100 = dword_100324BC[v74];
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

// Address: 0x10024968
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_10041190 )
      return (int)lpCriticalSection[FileHandle >> 6][2 * (FileHandle & 0x3F) + 1].LockSemaphore & 0x40;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return 0;
}

// Address: 0x100249BE
void __cdecl __acrt_locale_free_monetary(void **a1)
{
  if ( a1 != nullptr )
  {
    if ( a1[3] != off_1003F204 )
      _free_base(a1[3]);
    if ( a1[4] != off_1003F208 )
      _free_base(a1[4]);
    if ( a1[5] != off_1003F20C )
      _free_base(a1[5]);
    if ( a1[6] != off_1003F210 )
      _free_base(a1[6]);
    if ( a1[7] != off_1003F214 )
      _free_base(a1[7]);
    if ( a1[8] != off_1003F218 )
      _free_base(a1[8]);
    if ( a1[9] != off_1003F21C )
      _free_base(a1[9]);
    if ( a1[14] != off_1003F230 )
      _free_base(a1[14]);
    if ( a1[15] != off_1003F234 )
      _free_base(a1[15]);
    if ( a1[16] != off_1003F238 )
      _free_base(a1[16]);
    if ( a1[17] != off_1003F23C )
      _free_base(a1[17]);
    if ( a1[18] != off_1003F240 )
      _free_base(a1[18]);
    if ( a1[19] != off_1003F244 )
      _free_base(a1[19]);
  }
}

// Address: 0x10024ABC
int __cdecl __acrt_locale_initialize_monetary(int a1)
{
  _DWORD *v1; // edi
  _UNKNOWN **v2; // esi
  char **v3; // esi
  wchar_t *v5; // edi
  int LocaleInfoA; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  void *v26; // ebx
  char *v27; // edx
  char v28; // al
  char *v29; // esi
  volatile signed __int32 *v30; // eax
  volatile signed __int32 *v31; // ecx
  struct __crt_locale_pointers v32; // [esp+Ch] [ebp-18h] BYREF
  char **v33; // [esp+14h] [ebp-10h]
  void *v34; // [esp+18h] [ebp-Ch]
  void *Block; // [esp+1Ch] [ebp-8h]
  void *v36; // [esp+20h] [ebp-4h]

  v34 = nullptr;
  v32.locinfo = (struct __crt_locale_data *)a1;
  v32.mbcinfo = nullptr;
  if ( *(_DWORD *)(a1 + 172) != 0 || *(_DWORD *)(a1 + 176) != 0 )
  {
    v3 = (char **)_calloc_base(1u, 0x50u);
    v36 = v3;
    _free_base(nullptr);
    if ( v3 == nullptr )
      return 1;
    Block = _calloc_base(1u, 4u);
    _free_base(nullptr);
    if ( Block == nullptr )
    {
      _free_base(v3);
      return 1;
    }
    if ( *(_DWORD *)(a1 + 172) == 0 )
    {
      qmemcpy(v36, &off_1003F1F8, 80);
LABEL_25:
      v2 = (_UNKNOWN **)v36;
      v1 = v34;
      *(_DWORD *)v36 = **(_DWORD **)(a1 + 136);
      v2[1] = *(_UNKNOWN **)(*(_DWORD *)(a1 + 136) + 4);
      v2[2] = *(_UNKNOWN **)(*(_DWORD *)(a1 + 136) + 8);
      v2[12] = *(_UNKNOWN **)(*(_DWORD *)(a1 + 136) + 48);
      v2[13] = *(_UNKNOWN **)(*(_DWORD *)(a1 + 136) + 52);
      *(_DWORD *)Block = 1;
      if ( v1 != nullptr )
        *v1 = 1;
      goto LABEL_27;
    }
    v34 = _calloc_base(1u, 4u);
    _free_base(nullptr);
    if ( v34 == nullptr )
    {
      _free_base(v3);
      _free_base(Block);
      return 1;
    }
    v5 = *(wchar_t **)(a1 + 172);
    LocaleInfoA = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x15u, v3 + 3);
    v7 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x14u, (char **)v36 + 4) | LocaleInfoA;
    v8 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x16u, (char **)v36 + 5) | v7;
    v9 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x17u, (char **)v36 + 6) | v8;
    v33 = (char **)((char *)v36 + 28);
    v10 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x18u, (char **)v36 + 7) | v9;
    v11 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x50u, (char **)v36 + 8) | v10;
    v12 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x51u, (char **)v36 + 9) | v11;
    v13 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x1Au, (char **)v36 + 10) | v12;
    v14 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x19u, (char **)((char *)v36 + 41)) | v13;
    v15 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x54u, (char **)((char *)v36 + 42)) | v14;
    v16 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x55u, (char **)((char *)v36 + 43)) | v15;
    v17 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x56u, (char **)v36 + 11) | v16;
    v18 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x57u, (char **)((char *)v36 + 45)) | v17;
    v19 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x52u, (char **)((char *)v36 + 46)) | v18;
    v20 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x53u, (char **)((char *)v36 + 47)) | v19;
    v21 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x15u, (char **)v36 + 14) | v20;
    v22 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x14u, (char **)v36 + 15) | v21;
    v23 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x16u, (char **)v36 + 16) | v22;
    v24 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x17u, (char **)v36 + 17) | v23;
    v25 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x50u, (char **)v36 + 18) | v24;
    if ( (v25 | __acrt_GetLocaleInfoA(&v32, 2, v5, 0x51u, (char **)v36 + 19)) != 0 )
    {
      v26 = v36;
      __acrt_locale_free_monetary((void **)v36);
      _free_base(v26);
      _free_base(Block);
      _free_base(v34);
      return 1;
    }
    v27 = *v33;
    while ( 1 )
    {
      if ( *v27 == 0 )
        goto LABEL_25;
      v28 = *v27;
      if ( *v27 >= 48 && v28 <= 57 )
        break;
      if ( v28 == 59 )
      {
        v29 = v27;
        do
        {
          *v29 = v29[1];
          ++v29;
        }
        while ( *v29 != 0 );
      }
      else
      {
LABEL_17:
        ++v27;
      }
    }
    *v27 = v28 - 48;
    goto LABEL_17;
  }
  v1 = nullptr;
  Block = nullptr;
  v2 = &off_1003F1F8;
LABEL_27:
  v30 = *(volatile signed __int32 **)(a1 + 132);
  if ( v30 != nullptr )
    _InterlockedDecrement(v30);
  v31 = *(volatile signed __int32 **)(a1 + 124);
  if ( v31 != nullptr && _InterlockedExchangeAdd(v31, 0xFFFFFFFF) == 0 )
  {
    _free_base(*(void **)(a1 + 136));
    _free_base(*(void **)(a1 + 124));
  }
  *(_DWORD *)(a1 + 124) = Block;
  *(_DWORD *)(a1 + 132) = v1;
  *(_DWORD *)(a1 + 136) = v2;
  return 0;
}

// Address: 0x10024E78
void __cdecl __acrt_locale_free_numeric(void **a1)
{
  if ( a1 != nullptr )
  {
    if ( *a1 != off_1003F1F8 )
      _free_base(*a1);
    if ( a1[1] != off_1003F1FC )
      _free_base(a1[1]);
    if ( a1[2] != off_1003F200 )
      _free_base(a1[2]);
    if ( a1[12] != off_1003F228 )
      _free_base(a1[12]);
    if ( a1[13] != off_1003F22C )
      _free_base(a1[13]);
  }
}

// Address: 0x10024EE1
int __cdecl __acrt_locale_initialize_numeric(int a1)
{
  _DWORD *v1; // edi
  _UNKNOWN **v2; // esi
  void *v3; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // esi
  wchar_t *v7; // edi
  int LocaleInfoA; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  char *v12; // edx
  char v13; // al
  volatile signed __int32 *v14; // eax
  volatile signed __int32 *v15; // ecx
  char *v16; // esi
  char **v17; // [esp-4h] [ebp-28h]
  struct __crt_locale_pointers v18; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v19; // [esp+14h] [ebp-10h]
  int v20; // [esp+18h] [ebp-Ch]
  void *v21; // [esp+1Ch] [ebp-8h]
  void *Block; // [esp+20h] [ebp-4h]

  v18.locinfo = (struct __crt_locale_data *)a1;
  v18.mbcinfo = nullptr;
  if ( *(_DWORD *)(a1 + 176) == 0 && *(_DWORD *)(a1 + 172) == 0 )
  {
    v1 = nullptr;
    v21 = nullptr;
    v2 = &off_1003F1F8;
    goto LABEL_22;
  }
  v20 = 1;
  v3 = _calloc_base(1u, 0x50u);
  Block = v3;
  if ( v3 == nullptr )
    return 1;
  qmemcpy(v3, *(const void **)(a1 + 136), 0x50u);
  v5 = _malloc_base(4u);
  v1 = nullptr;
  v21 = v5;
  _free_base(nullptr);
  if ( v5 == nullptr )
  {
    _free_base(Block);
    return 1;
  }
  *v5 = 0;
  if ( *(_DWORD *)(a1 + 176) == 0 )
  {
    v2 = (_UNKNOWN **)Block;
    *(_DWORD *)Block = off_1003F1F8;
    v2[1] = off_1003F1FC;
    v2[2] = off_1003F200;
    v2[12] = off_1003F228;
    v2[13] = off_1003F22C;
    goto LABEL_20;
  }
  v6 = _malloc_base(4u);
  v19 = v6;
  _free_base(nullptr);
  if ( v6 == nullptr )
    goto LABEL_12;
  v17 = (char **)Block;
  *v6 = 0;
  v7 = *(wchar_t **)(a1 + 176);
  LocaleInfoA = __acrt_GetLocaleInfoA(&v18, 1, v7, 0xEu, v17);
  v9 = __acrt_GetLocaleInfoA(&v18, 1, v7, 0xFu, (char **)Block + 1) | LocaleInfoA;
  v20 = (int)Block + 8;
  v10 = __acrt_GetLocaleInfoA(&v18, 1, v7, 0x10u, (char **)Block + 2) | v9;
  v11 = __acrt_GetLocaleInfoA(&v18, 2, v7, 0xEu, (char **)Block + 12) | v10;
  if ( (v11 | __acrt_GetLocaleInfoA(&v18, 2, v7, 0xFu, (char **)Block + 13)) != 0 )
  {
    __acrt_locale_free_numeric((void **)Block);
    v20 = -1;
LABEL_12:
    _free_base(Block);
    _free_base(v21);
    return v20;
  }
  v12 = *(char **)v20;
  while ( *v12 != 0 )
  {
    v13 = *v12;
    if ( *v12 >= 48 && v13 <= 57 )
    {
      *v12 = v13 - 48;
      goto LABEL_17;
    }
    if ( v13 == 59 )
    {
      v16 = v12;
      do
      {
        *v16 = v16[1];
        ++v16;
      }
      while ( *v16 != 0 );
    }
    else
    {
LABEL_17:
      ++v12;
    }
  }
  v1 = v19;
  v2 = (_UNKNOWN **)Block;
LABEL_20:
  *(_DWORD *)v21 = 1;
  if ( v1 != nullptr )
    *v1 = 1;
LABEL_22:
  v14 = *(volatile signed __int32 **)(a1 + 128);
  if ( v14 != nullptr )
    _InterlockedDecrement(v14);
  v15 = *(volatile signed __int32 **)(a1 + 124);
  if ( v15 != nullptr && _InterlockedExchangeAdd(v15, 0xFFFFFFFF) == 0 )
  {
    _free_base(*(void **)(a1 + 124));
    _free_base(*(void **)(a1 + 136));
  }
  *(_DWORD *)(a1 + 124) = v21;
  *(_DWORD *)(a1 + 128) = v1;
  *(_DWORD *)(a1 + 136) = v2;
  return 0;
}

// Address: 0x100250FD
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

// Address: 0x10025139
BOOL __cdecl initialize_lc_time(struct __crt_lc_time_data *const a1, struct __crt_locale_data *const a2)
{
  wchar_t *v2; // esi
  wchar_t *v3; // eax
  struct __crt_lc_time_data *v4; // ecx
  int v5; // ebx
  LCTYPE v6; // eax
  unsigned int v7; // edi
  int v8; // ebx
  LCTYPE v9; // esi
  int v10; // ebx
  int v11; // ebx
  char **v12; // eax
  wchar_t *v13; // edi
  bool v14; // zf
  LCTYPE v15; // esi
  char **v16; // eax
  LCTYPE v17; // esi
  int v18; // ebx
  int v19; // ebx
  int LocaleInfoA; // eax
  LCTYPE v21; // esi
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  struct __crt_locale_pointers v33; // [esp+Ch] [ebp-14h] BYREF
  int v34; // [esp+14h] [ebp-Ch]
  LCTYPE v35; // [esp+18h] [ebp-8h]
  LCTYPE LCType; // [esp+1Ch] [ebp-4h]

  v33.mbcinfo = nullptr;
  v35 = *((_DWORD *)a2 + 45);
  v2 = (wchar_t *)v35;
  v33.locinfo = a2;
  v3 = __acrt_copy_locale_name((wchar_t *)v35);
  v4 = a1;
  v5 = 0;
  *((_DWORD *)a1 + 88) = v3;
  v6 = 49;
  LCType = 49;
  v34 = 7;
  while ( 1 )
  {
    v7 = (v6 - 48) % 7;
    v8 = __acrt_GetLocaleInfoA(&v33, 1, v2, LCType, (char **)v4 + v7) | v5;
    v9 = LCType - 7;
    v10 = __acrt_GetLocaleInfoA(&v33, 1, (wchar_t *)v35, LCType - 7, (char **)a1 + v7 + 7) | v8;
    v11 = __acrt_GetLocaleInfoA(&v33, 2, (wchar_t *)v35, LCType, (char **)a1 + v7 + 45) | v10;
    v12 = (char **)((char *)a1 + 4 * v7);
    v13 = (wchar_t *)v35;
    v5 = __acrt_GetLocaleInfoA(&v33, 2, (wchar_t *)v35, v9, v12 + 52) | v11;
    v6 = LCType + 1;
    v14 = v34-- == 1;
    ++LCType;
    if ( v14 )
      break;
    v4 = a1;
    v2 = v13;
  }
  v15 = 56;
  v16 = (char **)((char *)a1 + 104);
  v35 = 56;
  LCType = (LCTYPE)a1 + 104;
  v34 = 12;
  do
  {
    v17 = v15 + 12;
    v18 = __acrt_GetLocaleInfoA(&v33, 1, v13, v17, v16 - 12) | v5;
    v19 = __acrt_GetLocaleInfoA(&v33, 1, v13, v35, (char **)LCType) | v18;
    LocaleInfoA = __acrt_GetLocaleInfoA(&v33, 2, v13, v17, (char **)(LCType + 132));
    v21 = v35;
    v5 = __acrt_GetLocaleInfoA(&v33, 2, v13, v35, (char **)(LCType + 180)) | LocaleInfoA | v19;
    v16 = (char **)(LCType + 4);
    v15 = v21 + 1;
    v14 = v34-- == 1;
    LCType += 4;
    v35 = v15;
  }
  while ( !v14 );
  v22 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x28u, (char **)a1 + 38) | v5;
  v23 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x29u, (char **)a1 + 39) | v22;
  v24 = __acrt_GetLocaleInfoA(&v33, 2, v13, 0x28u, (char **)a1 + 83) | v23;
  v25 = __acrt_GetLocaleInfoA(&v33, 2, v13, 0x29u, (char **)a1 + 84) | v24;
  v26 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x1Fu, (char **)a1 + 40) | v25;
  v27 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x20u, (char **)a1 + 41) | v26;
  v28 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x1003u, (char **)a1 + 42) | v27;
  v29 = __acrt_GetLocaleInfoA(&v33, 0, v13, 0x1009u, (char **)a1 + 43) | v28;
  v30 = __acrt_GetLocaleInfoA(&v33, 2, v13, 0x1Fu, (char **)a1 + 85) | v29;
  v31 = __acrt_GetLocaleInfoA(&v33, 2, v13, 0x20u, (char **)a1 + 86) | v30;
  return (v31 | __acrt_GetLocaleInfoA(&v33, 2, v13, 0x1003u, (char **)a1 + 87)) == 0;
}

// Address: 0x100253B6
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

// Address: 0x1002549A
int __cdecl __acrt_locale_initialize_time(struct __crt_locale_data *a1)
{
  char **v1; // esi
  struct __crt_lc_time_data *v2; // eax

  if ( *((_DWORD *)a1 + 45) != 0 )
  {
    v2 = (struct __crt_lc_time_data *)_calloc_base(1u, 0x164u);
    v1 = (char **)v2;
    if ( v2 != nullptr )
    {
      if ( initialize_lc_time(v2, a1) )
      {
        v1[44] = (char *)1;
        _free_base(nullptr);
        goto LABEL_9;
      }
      __acrt_locale_free_time((const void **)v1);
      _free_base(v1);
    }
    else
    {
      _free_base(nullptr);
    }
    return 1;
  }
  v1 = off_10032B50;
LABEL_9:
  __acrt_locale_release_lc_time_reference(*((_DWORD *)a1 + 39));
  *((_DWORD *)a1 + 39) = v1;
  return 0;
}

// Address: 0x10025519
size_t __cdecl wcscspn(const wchar_t *String, const wchar_t *Control)
{
  const wchar_t *v2; // eax
  const wchar_t *v3; // esi
  wchar_t v4; // dx

  v2 = String;
  if ( *String != 0 )
  {
    while ( 1 )
    {
      v3 = Control;
      if ( *Control != 0 )
        break;
LABEL_6:
      if ( *++v2 == 0 )
        return v2 - String;
    }
    v4 = *Control;
    while ( *v2 != v4 )
    {
      v4 = *++v3;
      if ( *v3 == 0 )
        goto LABEL_6;
    }
  }
  return v2 - String;
}

// Address: 0x10025569
int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int result; // eax

  result = MaxCount;
  if ( MaxCount != 0 )
  {
    while ( --result != 0 && *String1 != 0 && *String1 == *String2 )
    {
      ++String1;
      ++String2;
    }
    return *String1 - *String2;
  }
  return result;
}

// Address: 0x100255A3
wchar_t *__cdecl wcspbrk(const wchar_t *String, const wchar_t *Control)
{
  wchar_t *result; // eax
  const wchar_t *v3; // ecx
  wchar_t v4; // dx

  result = (wchar_t *)String;
  if ( *String == 0 )
    return nullptr;
  while ( 1 )
  {
    v3 = Control;
    if ( *Control != 0 )
      break;
LABEL_6:
    if ( *++result == 0 )
      return nullptr;
  }
  v4 = *Control;
  while ( v4 != *result )
  {
    v4 = *++v3;
    if ( *v3 == 0 )
      goto LABEL_6;
  }
  return result;
}

// Address: 0x100255E8
errno_t __cdecl GetLocaleNameFromDefault(int a1)
{
  errno_t result; // eax
  wchar_t Source[86]; // [esp+4h] [ebp-B0h] BYREF

  *(_DWORD *)(a1 + 8) |= 0x104u;
  result = __acrt_GetUserDefaultLocaleName(Source, 0x55u);
  if ( result > 1 )
  {
    result = wcsncpy_s((wchar_t *)(a1 + 592), 0x55u, Source, wcslen(Source) + 1);
    if ( result != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  return result;
}

// Address: 0x10025671
bool __cdecl GetLocaleNameFromLangCountry(__int16 **a1)
{
  int PrimaryLen; // edx
  __int16 *v2; // ecx
  __int16 v3; // ax
  bool v4; // zf
  __int16 *v5; // ecx
  _WORD *v6; // edi
  __int16 v7; // ax
  bool result; // al

  PrimaryLen = 2;
  v2 = *a1;
  do
    v3 = *v2++;
  while ( v3 != 0 );
  v4 = v2 - (*a1 + 1) == 3;
  v5 = a1[1];
  a1[4] = (__int16 *)v4;
  v6 = v5 + 1;
  do
    v7 = *v5++;
  while ( v7 != 0 );
  a1[5] = (__int16 *)(v5 - v6 == 3);
  if ( !v4 )
    PrimaryLen = GetPrimaryLen(*a1);
  a1[3] = (__int16 *)PrimaryLen;
  __acrt_EnumSystemLocalesEx((int)LangCountryEnumProcEx, 3, 0, 0);
  result = ((unsigned int)a1[2] & 0x100) != 0;
  if ( ((unsigned int)a1[2] & 0x200) == 0 || ((unsigned __int8)a1[2] & 7) == 0 || !result )
    a1[2] = nullptr;
  return result;
}

// Address: 0x1002570B
int __cdecl GetLocaleNameFromLanguage(__int16 **a1)
{
  int PrimaryLen; // edx
  __int16 *v2; // ecx
  __int16 v3; // ax
  int v4; // ecx
  int result; // eax

  PrimaryLen = 2;
  v2 = *a1;
  do
    v3 = *v2++;
  while ( v3 != 0 );
  v4 = v2 - (*a1 + 1);
  a1[4] = (__int16 *)(v4 == 3);
  if ( v4 != 3 )
    PrimaryLen = GetPrimaryLen(*a1);
  a1[3] = (__int16 *)PrimaryLen;
  result = __acrt_EnumSystemLocalesEx((int)LanguageEnumProcEx, 3, 0, 0);
  if ( ((_BYTE)a1[2] & 4) == 0 )
    a1[2] = nullptr;
  return result;
}

// Address: 0x10025766
int __cdecl GetPrimaryLen(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // ecx
  int v2; // edx
  unsigned __int16 v4; // ax

  v1 = a1;
  v2 = 0;
  if ( a1 == nullptr )
    return 0;
  while ( 1 )
  {
    v4 = *v1++;
    if ( (v4 < 0x41u || v4 > 0x5Au) && (unsigned __int16)(v4 - 97) > 0x19u )
      break;
    ++v2;
  }
  return v2;
}

// Address: 0x1002579A
BOOL __stdcall LangCountryEnumProcEx(wchar_t *Source, int a2, int a3)
{
  char *v3; // esi
  wchar_t *v5; // ecx
  wchar_t *v6; // edx
  __int16 v7; // ax
  __int16 v8; // ax
  __int16 v9; // ax
  int v10; // edx
  wchar_t *v11; // edx
  wchar_t *v12; // ecx
  wchar_t *v13; // ebx
  __int16 v14; // ax
  __int16 *v15; // ecx
  _WORD *v16; // ebx
  __int16 v17; // ax
  __int16 *v18; // ebx
  _WORD *v19; // ecx
  __int16 v20; // ax
  __int16 v21; // ax
  __int16 v22; // ax
  wchar_t String2[64]; // [esp+Ch] [ebp-84h] BYREF

  v3 = (char *)__acrt_getptd();
  if ( __acrt_GetLocaleInfoEx(Source, *((_DWORD *)v3 + 25) != 0 ? 7 : 4098, String2, 64) == 0 )
  {
    *((_DWORD *)v3 + 22) = 0;
    return true;
  }
  if ( _wcsicmp(*((const wchar_t **)v3 + 21), String2) != 0 )
    goto LABEL_22;
  if ( __acrt_GetLocaleInfoEx(Source, *((_DWORD *)v3 + 24) != 0 ? 3 : 4097, String2, 64) == 0 )
  {
    *((_DWORD *)v3 + 22) = 0;
    return true;
  }
  if ( _wcsicmp(*((const wchar_t **)v3 + 20), String2) == 0 )
  {
    *((_DWORD *)v3 + 22) |= 0x304u;
    v5 = Source;
    v6 = Source + 1;
    do
      v7 = *v5++;
    while ( v7 != 0 );
    goto LABEL_9;
  }
  if ( (v3[88] & 2) == 0 )
  {
    if ( *((_DWORD *)v3 + 23) != 0 && _wcsnicmp(*((const wchar_t **)v3 + 20), String2, *((_DWORD *)v3 + 23)) == 0 )
    {
      *((_DWORD *)v3 + 22) |= 2u;
      v5 = Source;
      v6 = Source + 1;
      do
        v8 = *v5++;
      while ( v8 != 0 );
      goto LABEL_9;
    }
    if ( (v3[88] & 1) == 0 && TestDefaultCountry(Source) != 0 )
    {
      *((_DWORD *)v3 + 22) |= 1u;
      v5 = Source;
      v6 = Source + 1;
      do
        v9 = *v5++;
      while ( v9 != 0 );
LABEL_9:
      if ( wcsncpy_s((wchar_t *)v3 + 336, 0x55u, Source, v5 - v6 + 1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
  }
LABEL_22:
  if ( (*((_DWORD *)v3 + 22) & 0x300) != 0x300 )
  {
    if ( __acrt_GetLocaleInfoEx(Source, *((_DWORD *)v3 + 24) != 0 ? 3 : 4097, String2, 64) == 0 )
    {
      *((_DWORD *)v3 + 22) = 0;
      return true;
    }
    if ( _wcsicmp(*((const wchar_t **)v3 + 20), String2) == 0 )
    {
      *((_DWORD *)v3 + 22) |= 0x200u;
      v10 = *((_DWORD *)v3 + 22);
      if ( *((_DWORD *)v3 + 24) != 0 )
      {
        *((_DWORD *)v3 + 22) = v10 | 0x100;
        v11 = (wchar_t *)(v3 + 672);
        if ( *((_WORD *)v3 + 336) == 0 )
        {
          v12 = Source;
          v13 = Source + 1;
          do
            v14 = *v12++;
          while ( v14 != 0 );
LABEL_31:
          if ( wcsncpy_s(v11, 0x55u, Source, v12 - v13 + 1) != 0 )
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        }
      }
      else
      {
        if ( *((_DWORD *)v3 + 23) != 0 )
        {
          v15 = *((__int16 **)v3 + 20);
          v16 = v15 + 1;
          do
            v17 = *v15++;
          while ( v17 != 0 );
          if ( v15 - v16 == *((_DWORD *)v3 + 23) )
          {
            if ( TestDefaultCountry(Source) == 0 )
            {
              v18 = *((__int16 **)v3 + 20);
              v19 = v18 + 1;
              do
                v20 = *v18++;
              while ( v20 != 0 );
              if ( GetPrimaryLen(*((unsigned __int16 **)v3 + 20)) == v18 - v19 )
                return (*((_DWORD *)v3 + 22) & 4) == 0;
            }
            *((_DWORD *)v3 + 22) |= 0x100u;
            v11 = (wchar_t *)(v3 + 672);
            if ( *((_WORD *)v3 + 336) != 0 )
              return (*((_DWORD *)v3 + 22) & 4) == 0;
            v12 = Source;
            v13 = Source + 1;
            do
              v21 = *v12++;
            while ( v21 != 0 );
            goto LABEL_31;
          }
        }
        *((_DWORD *)v3 + 22) = v10 | 0x100;
        v11 = (wchar_t *)(v3 + 672);
        if ( *((_WORD *)v3 + 336) == 0 )
        {
          v12 = Source;
          v13 = Source + 1;
          do
            v22 = *v12++;
          while ( v22 != 0 );
          goto LABEL_31;
        }
      }
    }
  }
  return (*((_DWORD *)v3 + 22) & 4) == 0;
}

// Address: 0x10025A84
BOOL __stdcall LanguageEnumProcEx(wchar_t *Source, int a2, int a3)
{
  void *v3; // esi
  wchar_t String2[120]; // [esp+8h] [ebp-F4h] BYREF

  v3 = __acrt_getptd();
  if ( __acrt_GetLocaleInfoEx(Source, *((_DWORD *)v3 + 24) != 0 ? 3 : 4097, String2, 120) != 0 )
  {
    if ( _wcsicmp(*((const wchar_t **)v3 + 20), String2) == 0 )
    {
      if ( wcsncpy_s((wchar_t *)v3 + 336, 0x55u, Source, wcslen(Source) + 1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      *((_DWORD *)v3 + 22) |= 4u;
    }
    return (*((_DWORD *)v3 + 22) & 4) == 0;
  }
  else
  {
    *((_DWORD *)v3 + 22) = 0;
    return true;
  }
}

// Address: 0x10025B45
UINT __cdecl ProcessCodePage(const unsigned __int16 *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  const wchar_t *v4; // esi
  const unsigned __int16 *v5; // edx
  bool v6; // cf
  wchar_t v7; // di
  UINT result; // eax
  WCHAR LCData[2]; // [esp+8h] [ebp-4h] BYREF

  if ( a1 != nullptr )
  {
    v2 = 0;
    if ( *a1 != 0 )
    {
      v3 = wcscmp(a1, L"ACP");
      if ( v3 != 0 )
        v3 = v3 < 0 ? -1 : 1;
      if ( v3 != 0 )
      {
        v4 = L"OCP";
        v5 = a1;
        while ( 1 )
        {
          v6 = *v5 < *v4;
          if ( *v5 != *v4 )
            break;
          if ( *v5 == 0 )
            goto LABEL_13;
          v7 = v5[1];
          v6 = v7 < v4[1];
          if ( v7 != v4[1] )
            break;
          v5 += 2;
          v4 += 2;
          if ( v7 == 0 )
            goto LABEL_13;
        }
        v2 = v6 ? -1 : 1;
LABEL_13:
        if ( v2 != 0 )
          return unknown_libname_48((int)a1);
        if ( __acrt_GetLocaleInfoEx((wchar_t *)(a2 + 592), 0x2000000Bu, LCData, 2) != 0 )
          return *(_DWORD *)LCData;
        return 0;
      }
    }
  }
  if ( __acrt_GetLocaleInfoEx((wchar_t *)(a2 + 592), 0x20001004u, LCData, 2) == 0 )
    return 0;
  result = *(_DWORD *)LCData;
  if ( *(_DWORD *)LCData == 0 )
    return GetACP();
  return result;
}

// Address: 0x10025C2C
int __cdecl TestDefaultCountry(wchar_t *String2)
{
  int result; // eax
  wchar_t String1[10]; // [esp+4h] [ebp-18h] BYREF

  result = __acrt_GetLocaleInfoEx(String2, 0x59u, String1, 9);
  if ( result != 0 )
    return wcsncmp(String1, String2, 9u) == 0;
  return result;
}

// Address: 0x10025C77
BOOL __cdecl TranslateName(int a1, int a2, const wchar_t **a3)
{
  int v3; // esi
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  v3 = a2;
  v4 = 1;
  v5 = 0;
  while ( v5 <= v3 )
  {
    if ( v4 == 0 )
      break;
    v6 = (v5 + v3) / 2;
    v7 = _wcsicmp(*a3, *(const wchar_t **)(12 * v6 + a1));
    v4 = v7;
    if ( v7 != 0 )
    {
      if ( v7 >= 0 )
        v5 = v6 + 1;
      else
        v3 = v6 - 1;
    }
    else
    {
      *a3 = (const wchar_t *)(a1 + 4 + 12 * v6);
    }
  }
  return v4 == 0;
}

// Address: 0x10025CE6
int __cdecl __acrt_get_qualified_locale(int a1, UINT *a2, LPWSTR lpLCData)
{
  wchar_t *v3; // eax
  int v4; // esi
  _WORD **v5; // edi
  UINT v6; // eax
  UINT v7; // esi
  wchar_t *Source; // [esp+10h] [ebp-4h]

  v3 = (wchar_t *)__acrt_getptd();
  v4 = (int)(v3 + 40);
  v3 += 336;
  *(_DWORD *)(v4 + 8) = 0;
  *v3 = 0;
  v5 = (_WORD **)(v4 + 4);
  Source = v3;
  *(_DWORD *)v4 = a1;
  *(_DWORD *)(v4 + 4) = a1 + 128;
  if ( *(_WORD *)(a1 + 128) != 0 )
    TranslateName((int)&off_100343D8, 22, (const wchar_t **)(v4 + 4));
  if ( **(_WORD **)v4 != 0 )
  {
    if ( **v5 != 0 )
      GetLocaleNameFromLangCountry((__int16 **)v4);
    else
      GetLocaleNameFromLanguage((__int16 **)v4);
    if ( *(_DWORD *)(v4 + 8) == 0 && TranslateName((int)&off_100340C8, 64, (const wchar_t **)v4) )
    {
      if ( **v5 != 0 )
        GetLocaleNameFromLangCountry((__int16 **)v4);
      else
        GetLocaleNameFromLanguage((__int16 **)v4);
    }
  }
  else
  {
    GetLocaleNameFromDefault(v4);
  }
  if ( *(_DWORD *)(v4 + 8) != 0 )
  {
    v6 = ProcessCodePage((const unsigned __int16 *)(a1 + 256), v4);
    v7 = v6;
    if ( v6 != 0 && v6 != 65000 && v6 != 65001 && IsValidCodePage((unsigned __int16)v6) )
    {
      if ( a2 != nullptr )
        *a2 = v7;
      if ( lpLCData == nullptr )
        return 1;
      lpLCData[144] = 0;
      if ( wcsncpy_s(lpLCData + 144, 0x55u, Source, wcslen(Source) + 1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( __acrt_GetLocaleInfoEx(lpLCData + 144, 0x1001u, lpLCData, 64) != 0
        && __acrt_GetLocaleInfoEx(lpLCData + 144, 0x1002u, lpLCData + 64, 64) != 0
        && (wcschr(lpLCData + 64, 0x5Fu) == nullptr && wcschr(lpLCData + 64, 0x2Eu) == nullptr
         || __acrt_GetLocaleInfoEx(lpLCData + 144, 7u, lpLCData + 64, 64) != 0) )
      {
        unknown_libname_56(v7, lpLCData + 128, 16, 10);
        return 1;
      }
    }
  }
  return 0;
}

// Address: 0x10025EB5
BOOL __stdcall CountryEnumProc(LPWSTR a1)
{
  const wchar_t **v1; // ebx
  _DWORD *v2; // edi
  LCID v3; // esi
  WCHAR LCData[120]; // [esp+Ch] [ebp-F4h] BYREF

  v1 = (const wchar_t **)__acrt_getptd();
  v2 = *((_DWORD **)__acrt_getptd() + 211);
  v3 = LcidFromHexString(a1);
  if ( GetLocaleInfoW(v3, v1[25] != nullptr ? 7 : 4098, LCData, 120) != 0 )
  {
    if ( _wcsicmp(v1[21], LCData) == 0 && TestDefaultCountry_0(v3) != 0 )
    {
      *v2 |= 4u;
      v2[2] = v3;
      v2[1] = v3;
    }
    return (*v2 & 4) == 0;
  }
  else
  {
    *v2 = 0;
    return true;
  }
}

// Address: 0x10025F5E
_DWORD *__cdecl GetLcidFromCountry(_DWORD *a1)
{
  _DWORD *v1; // edx
  __int16 *v2; // ecx
  _WORD *v3; // esi
  __int16 v4; // ax
  _DWORD *result; // eax

  v1 = __acrt_getptd();
  v2 = (__int16 *)v1[21];
  v3 = v2 + 1;
  do
    v4 = *v2++;
  while ( v4 != 0 );
  v1[25] = v2 - v3 == 3;
  EnumSystemLocalesW(CountryEnumProc, 1u);
  result = a1;
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

// Address: 0x10025FA9
bool __cdecl GetLcidFromLangCountry(_DWORD *a1)
{
  _DWORD *v1; // esi
  int PrimaryLen_0; // edx
  __int16 *v3; // ecx
  _WORD *v4; // edi
  __int16 v5; // ax
  bool v6; // zf
  __int16 *v7; // ecx
  _WORD *v8; // edi
  __int16 v9; // ax
  bool result; // al

  v1 = __acrt_getptd();
  PrimaryLen_0 = 2;
  v3 = (__int16 *)v1[20];
  v4 = v3 + 1;
  do
    v5 = *v3++;
  while ( v5 != 0 );
  v6 = v3 - v4 == 3;
  v7 = (__int16 *)v1[21];
  v1[24] = v6;
  v8 = v7 + 1;
  do
    v9 = *v7++;
  while ( v9 != 0 );
  v1[25] = v7 - v8 == 3;
  a1[1] = 0;
  if ( v1[24] == 0 )
    PrimaryLen_0 = GetPrimaryLen_0(v1[20]);
  v1[23] = PrimaryLen_0;
  EnumSystemLocalesW(LangCountryEnumProc, 1u);
  result = (*a1 & 0x100) != 0;
  if ( (*a1 & 0x200) == 0 || (*a1 & 7) == 0 || !result )
    *a1 = 0;
  return result;
}

// Address: 0x10026044
_DWORD *__cdecl GetLcidFromLanguage(_DWORD *a1)
{
  _DWORD *v1; // esi
  int PrimaryLen_0; // edx
  __int16 *v3; // ecx
  _WORD *v4; // edi
  __int16 v5; // ax
  int v6; // ecx
  _DWORD *result; // eax

  v1 = __acrt_getptd();
  PrimaryLen_0 = 2;
  v3 = (__int16 *)v1[20];
  v4 = v3 + 1;
  do
    v5 = *v3++;
  while ( v5 != 0 );
  v6 = v3 - v4;
  v1[24] = v6 == 3;
  if ( v6 != 3 )
    PrimaryLen_0 = GetPrimaryLen_0(v1[20]);
  v1[23] = PrimaryLen_0;
  EnumSystemLocalesW(LanguageEnumProc, 1u);
  result = a1;
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

// Address: 0x100260A5
int __cdecl GetPrimaryLen_0(unsigned __int16 *a1)
{
  int i; // edx
  unsigned __int16 v3; // ax

  for ( i = 0; ; ++i )
  {
    v3 = *a1++;
    if ( (v3 < 0x41u || v3 > 0x5Au) && (unsigned __int16)(v3 - 97) > 0x19u )
      break;
  }
  return i;
}

// Address: 0x100260D1
BOOL __stdcall LangCountryEnumProc(LPWSTR a1)
{
  void *v1; // ebx
  int *v2; // edi
  LCID v3; // esi
  __int16 *v5; // ecx
  _WORD *v6; // edx
  __int16 v7; // ax
  int v8; // edx
  bool v9; // zf
  __int16 *v10; // ecx
  __int16 v11; // ax
  _WORD *v12; // [esp+Ch] [ebp-FCh]
  WCHAR LCData[120]; // [esp+14h] [ebp-F4h] BYREF

  v1 = __acrt_getptd();
  v2 = *((int **)__acrt_getptd() + 211);
  v3 = LcidFromHexString(a1);
  if ( GetLocaleInfoW(v3, *((_DWORD *)v1 + 25) != 0 ? 7 : 4098, LCData, 120) == 0 )
    goto LABEL_2;
  if ( _wcsicmp(*((const wchar_t **)v1 + 21), LCData) == 0 )
  {
    if ( GetLocaleInfoW(v3, *((_DWORD *)v1 + 24) != 0 ? 3 : 4097, LCData, 120) == 0 )
    {
LABEL_2:
      *v2 = 0;
      return true;
    }
    if ( _wcsicmp(*((const wchar_t **)v1 + 20), LCData) == 0 )
    {
      *v2 |= 0x304u;
      v2[1] = v3;
LABEL_18:
      v2[2] = v3;
      goto LABEL_19;
    }
    if ( (*(_BYTE *)v2 & 2) != 0 )
      goto LABEL_19;
    if ( *((_DWORD *)v1 + 23) == 0 || _wcsnicmp(*((const wchar_t **)v1 + 20), LCData, *((_DWORD *)v1 + 23)) != 0 )
    {
      if ( (*v2 & 1) == 0 && TestDefaultCountry_0(v3) != 0 )
      {
        *v2 = v8 | 1;
        goto LABEL_18;
      }
    }
    else
    {
      *v2 |= 2u;
      v2[2] = v3;
      v5 = *((__int16 **)v1 + 20);
      v6 = v5 + 1;
      do
        v7 = *v5++;
      while ( v7 != 0 );
      if ( v5 - v6 == *((_DWORD *)v1 + 23) )
        v2[1] = v3;
    }
  }
LABEL_19:
  if ( (*v2 & 0x300) != 0x300 )
  {
    if ( GetLocaleInfoW(v3, *((_DWORD *)v1 + 24) != 0 ? 3 : 4097, LCData, 120) == 0 )
    {
      *v2 = 0;
      return true;
    }
    if ( _wcsicmp(*((const wchar_t **)v1 + 20), LCData) != 0 )
    {
      if ( *((_DWORD *)v1 + 24) != 0
        || *((_DWORD *)v1 + 23) == 0
        || _wcsicmp(*((const wchar_t **)v1 + 20), LCData) != 0
        || TestDefaultLanguage(v3, 0) == 0 )
      {
        return (*v2 & 4) == 0;
      }
      *v2 |= 0x100u;
      v9 = v2[1] == 0;
      goto LABEL_38;
    }
    *v2 |= 0x200u;
    if ( *((_DWORD *)v1 + 24) != 0 )
      goto LABEL_24;
    if ( *((_DWORD *)v1 + 23) == 0 )
      goto LABEL_24;
    v10 = *((__int16 **)v1 + 20);
    v12 = v10 + 1;
    do
      v11 = *v10++;
    while ( v11 != 0 );
    if ( v10 - v12 != *((_DWORD *)v1 + 23) )
    {
LABEL_24:
      *v2 |= 0x100u;
LABEL_25:
      v9 = v2[1] == 0;
LABEL_38:
      if ( v9 )
        v2[1] = v3;
      return (*v2 & 4) == 0;
    }
    if ( TestDefaultLanguage(v3, 1) != 0 )
    {
      *v2 |= 0x100u;
      goto LABEL_25;
    }
  }
  return (*v2 & 4) == 0;
}

// Address: 0x10026321
BOOL __stdcall LanguageEnumProc(LPWSTR a1)
{
  void *v1; // ebx
  _DWORD *v2; // edi
  LCID v3; // esi
  int v5; // eax
  WCHAR LCData[120]; // [esp+Ch] [ebp-F4h] BYREF

  v1 = __acrt_getptd();
  v2 = *((_DWORD **)__acrt_getptd() + 211);
  v3 = LcidFromHexString(a1);
  if ( GetLocaleInfoW(v3, *((_DWORD *)v1 + 24) != 0 ? 3 : 4097, LCData, 120) == 0 )
  {
    *v2 = 0;
    return true;
  }
  if ( _wcsicmp(*((const wchar_t **)v1 + 20), LCData) != 0 )
  {
    if ( *((_DWORD *)v1 + 24) != 0 || *((_DWORD *)v1 + 23) == 0 || _wcsicmp(*((const wchar_t **)v1 + 20), LCData) != 0 )
      return (*v2 & 4) == 0;
    v5 = TestDefaultLanguage(v3, 0);
  }
  else
  {
    if ( *((_DWORD *)v1 + 24) != 0 )
    {
LABEL_11:
      *v2 |= 4u;
      v2[1] = v3;
      v2[2] = v3;
      return (*v2 & 4) == 0;
    }
    v5 = TestDefaultLanguage(v3, 1);
  }
  if ( v5 != 0 )
    goto LABEL_11;
  return (*v2 & 4) == 0;
}

// Address: 0x100263F9
int __cdecl LcidFromHexString(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // edx
  int v2; // esi
  unsigned __int16 i; // cx

  v1 = a1;
  v2 = 0;
  for ( i = *a1; *v1 != 0; i = *v1 )
  {
    ++v1;
    if ( (unsigned __int16)(i - 97) > 5u )
    {
      if ( (unsigned __int16)(i - 65) <= 5u )
        i -= 7;
    }
    else
    {
      i -= 39;
    }
    v2 = i - 48 + 16 * v2;
  }
  return v2;
}

// Address: 0x1002644A
UINT __cdecl ProcessCodePage_0(const unsigned __int16 *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  const wchar_t *v4; // esi
  const unsigned __int16 *v5; // edx
  bool v6; // cf
  wchar_t v7; // di
  UINT result; // eax
  WCHAR LCData[2]; // [esp+8h] [ebp-4h] BYREF

  if ( a1 != nullptr )
  {
    v2 = 0;
    if ( *a1 != 0 )
    {
      v3 = wcscmp(a1, L"ACP");
      if ( v3 != 0 )
        v3 = v3 < 0 ? -1 : 1;
      if ( v3 != 0 )
      {
        v4 = L"OCP";
        v5 = a1;
        while ( 1 )
        {
          v6 = *v5 < *v4;
          if ( *v5 != *v4 )
            break;
          if ( *v5 == 0 )
            goto LABEL_13;
          v7 = v5[1];
          v6 = v7 < v4[1];
          if ( v7 != v4[1] )
            break;
          v5 += 2;
          v4 += 2;
          if ( v7 == 0 )
            goto LABEL_13;
        }
        v2 = v6 ? -1 : 1;
LABEL_13:
        if ( v2 != 0 )
          return unknown_libname_48((int)a1);
        if ( GetLocaleInfoW(*(_DWORD *)(a2 + 8), 0x2000000Bu, LCData, 2) != 0 )
          return *(_DWORD *)LCData;
        return 0;
      }
    }
  }
  if ( GetLocaleInfoW(*(_DWORD *)(a2 + 8), 0x20001004u, LCData, 2) == 0 )
    return 0;
  result = *(_DWORD *)LCData;
  if ( *(_DWORD *)LCData == 0 )
    return GetACP();
  return result;
}

// Address: 0x1002652D
int __cdecl TestDefaultCountry_0(__int16 a1)
{
  int v1; // eax

  v1 = 0;
  while ( a1 != word_10034500[v1] )
  {
    if ( (unsigned int)++v1 >= 10 )
      return 1;
  }
  return 0;
}

// Address: 0x10026551
BOOL __cdecl TestDefaultLanguage(int a1, int a2)
{
  void *v2; // edi
  __int16 *v4; // esi
  _WORD *v5; // ecx
  __int16 v6; // ax
  WCHAR LCData[2]; // [esp+8h] [ebp-4h] BYREF

  v2 = __acrt_getptd();
  if ( GetLocaleInfoW(a1 & 0x3FF | 0x400, 0x20000001u, LCData, 2) == 0 )
    return false;
  if ( a1 == *(_DWORD *)LCData )
    return true;
  if ( a2 == 0 )
    return true;
  v4 = *((__int16 **)v2 + 20);
  v5 = v4 + 1;
  do
    v6 = *v4++;
  while ( v6 != 0 );
  return GetPrimaryLen_0(*((unsigned __int16 **)v2 + 20)) != v4 - v5;
}

// Address: 0x100265C1
char __cdecl TranslateName_0(int a1, int a2, const wchar_t **a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // eax

  v3 = a2;
  v4 = 0;
  if ( a2 < 0 )
    return 0;
  while ( 1 )
  {
    v5 = (v4 + v3) / 2;
    v6 = _wcsicmp(*a3, *(const wchar_t **)(12 * v5 + a1));
    if ( v6 == 0 )
      break;
    if ( v6 >= 0 )
      v4 = v5 + 1;
    else
      v3 = v5 - 1;
    if ( v4 > v3 )
      return 0;
  }
  *a3 = (const wchar_t *)(a1 + 4 + 12 * v5);
  return 1;
}

// Address: 0x1002661E
int __cdecl __acrt_get_qualified_locale_downlevel(int a1, UINT *a2, LPWSTR lpLCData)
{
  _WORD **v3; // eax
  _DWORD *v4; // edi
  _WORD *v5; // eax
  UINT v7; // eax
  UINT v8; // esi
  char *v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h] BYREF
  LCID Locale; // [esp+18h] [ebp-Ch]
  LCID UserDefaultLCID; // [esp+1Ch] [ebp-8h]

  v9 = (char *)__acrt_getptd() + 80;
  v10 = 0;
  Locale = 0;
  UserDefaultLCID = 0;
  *((_DWORD *)__acrt_getptd() + 211) = &v10;
  v3 = (_WORD **)v9;
  *(_DWORD *)v9 = a1;
  v4 = v9 + 4;
  *((_DWORD *)v9 + 1) = a1 + 128;
  if ( a1 != -128 && *(_WORD *)(a1 + 128) != 0 )
  {
    TranslateName_0((int)&off_100343D8, 22, (const wchar_t **)v9 + 1);
    v3 = (_WORD **)v9;
  }
  v10 = 0;
  v5 = *v3;
  if ( v5 != nullptr && *v5 != 0 )
  {
    if ( *v4 != 0 && *(_WORD *)*v4 != 0 )
      GetLcidFromLangCountry(&v10);
    else
      GetLcidFromLanguage(&v10);
    if ( v10 != 0 )
      goto LABEL_22;
    if ( TranslateName_0((int)&off_100340C8, 64, (const wchar_t **)v9) != 0 )
    {
      if ( *v4 != 0 && *(_WORD *)*v4 != 0 )
        GetLcidFromLangCountry(&v10);
      else
        GetLcidFromLanguage(&v10);
    }
  }
  else if ( *v4 != 0 && *(_WORD *)*v4 != 0 )
  {
    GetLcidFromCountry(&v10);
  }
  else
  {
    v10 = 260;
    UserDefaultLCID = GetUserDefaultLCID();
    Locale = UserDefaultLCID;
  }
  if ( v10 == 0 )
    return 0;
LABEL_22:
  v7 = ProcessCodePage_0(a1 != 0 ? (const unsigned __int16 *)(a1 + 256) : nullptr, (int)&v10);
  v8 = v7;
  if ( v7 == 0 || v7 == 65000 || v7 == 65001 || !IsValidCodePage((unsigned __int16)v7) || !IsValidLocale(Locale, 1u) )
    return 0;
  if ( a2 != nullptr )
    *a2 = v8;
  __acrt_LCIDToLocaleName(Locale, (wchar_t *)v9 + 296, 0x55u, 0);
  if ( lpLCData != nullptr )
  {
    __acrt_LCIDToLocaleName(Locale, lpLCData + 144, 0x55u, 0);
    if ( GetLocaleInfoW(Locale, 0x1001u, lpLCData, 64) == 0
      || GetLocaleInfoW(UserDefaultLCID, 0x1002u, lpLCData + 64, 64) == 0 )
    {
      return 0;
    }
    unknown_libname_56(v8, lpLCData + 128, 16, 10);
  }
  return 1;
}

// Address: 0x10026825
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

// Address: 0x1002689F
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

// Address: 0x100268D4
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
    v4 = dword_10041190;
    while ( (int)a1 >= v4 )
    {
      if ( lpCriticalSection[v3] == nullptr )
      {
        handle_array = __acrt_lowio_create_handle_array();
        lpCriticalSection[v3] = (LPCRITICAL_SECTION)handle_array;
        if ( handle_array == nullptr )
        {
          v1 = 12;
          break;
        }
        v4 = dword_10041190 + 64;
        dword_10041190 += 64;
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

// Address: 0x1002696C
void __cdecl __acrt_lowio_lock_fh(int a1)
{
  EnterCriticalSection(&lpCriticalSection[a1 >> 6][2 * (a1 & 0x3F)]);
}

// Address: 0x1002698F
int __cdecl __acrt_lowio_set_os_handle(int a1, struct _RTL_CRITICAL_SECTION_DEBUG *hHandle)
{
  int v3; // [esp+8h] [ebp-4h]

  if ( a1 >= 0
    && a1 < (unsigned int)dword_10041190
    && *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection[a1 >> 6][1].DebugInfo + (v3 = 2 * (a1 & 0x3F))) == (PRTL_CRITICAL_SECTION_DEBUG)-1 )
  {
    if ( sub_1002990F() == 1 )
    {
      if ( a1 != 0 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, hHandle);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, hHandle);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, hHandle);
      }
    }
    lpCriticalSection[a1 >> 6][v3 + 1].DebugInfo = hHandle;
    return 0;
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}

// Address: 0x10026A23
void __cdecl __acrt_lowio_unlock_fh(int a1)
{
  LeaveCriticalSection(&lpCriticalSection[a1 >> 6][2 * (a1 & 0x3F)]);
}

// Address: 0x10026A46
int _alloc_osfhnd()
{
  int v0; // edi
  int i; // ebx
  LPCRITICAL_SECTION v2; // eax
  char *handle_array; // eax
  struct _RTL_CRITICAL_SECTION *v5; // ecx
  LPCRITICAL_SECTION j; // esi
  int v7; // esi
  int v8; // ecx
  LPCRITICAL_SECTION v9; // [esp+14h] [ebp-28h]
  LPCRITICAL_SECTION v10; // [esp+1Ch] [ebp-20h]

  __acrt_lock(7);
  v0 = -1;
  for ( i = 0; i < 128; ++i )
  {
    v2 = lpCriticalSection[i];
    v9 = v2;
    if ( v2 == nullptr )
    {
      handle_array = __acrt_lowio_create_handle_array();
      lpCriticalSection[i] = (LPCRITICAL_SECTION)handle_array;
      if ( handle_array != nullptr )
      {
        dword_10041190 += 64;
        v0 = i << 6;
        __acrt_lowio_lock_fh(i << 6);
        LOBYTE(lpCriticalSection[i << 6 >> 6][1].LockSemaphore) = 1;
      }
      break;
    }
    v5 = v2 + 128;
    v10 = v2 + 128;
    for ( j = lpCriticalSection[i]; j != v5; j += 2 )
    {
      if ( ((int)j[1].LockSemaphore & 1) == 0 )
      {
        EnterCriticalSection(j);
        if ( ((int)j[1].LockSemaphore & 1) == 0 )
        {
          v7 = (i << 6) + ((char *)j - (char *)v9) / 48;
          v8 = 2 * (v7 & 0x3F);
          LOBYTE(lpCriticalSection[v7 >> 6][v8 + 1].LockSemaphore) = 1;
          lpCriticalSection[v7 >> 6][v8 + 1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-1;
          v0 = v7;
          goto LABEL_6;
        }
        LeaveCriticalSection(j);
        v5 = v10;
      }
    }
  }
LABEL_6:
  __acrt_unlock(7);
  return v0;
}

// Address: 0x10026B58
int __cdecl _free_osfhnd(int a1)
{
  unsigned int v1; // ebx
  LPCRITICAL_SECTION v2; // eax

  if ( a1 < 0
    || a1 >= (unsigned int)dword_10041190
    || (v1 = 2 * (a1 & 0x3F), v2 = lpCriticalSection[a1 >> 6], ((int)v2[v1 + 1].LockSemaphore & 1) == 0)
    || v2[v1 + 1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( sub_1002990F() == 1 )
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
    lpCriticalSection[a1 >> 6][v1 + 1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-1;
    return 0;
  }
}

// Address: 0x10026BE9
intptr_t __cdecl _get_osfhandle(int FileHandle)
{
  int v1; // ecx
  LPCRITICAL_SECTION v2; // eax

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_10041190 )
    {
      v1 = 2 * (FileHandle & 0x3F);
      v2 = lpCriticalSection[FileHandle >> 6];
      if ( ((int)v2[v1 + 1].LockSemaphore & 1) != 0 )
        return (intptr_t)v2[v1 + 1].DebugInfo;
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x10026C53
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

// Address: 0x10026C98
int __cdecl translate_text_mode_nolock<char>(int FileHandle, char *a2, int a3)
{
  char *v3; // edx
  unsigned int v4; // edi
  LPCRITICAL_SECTION v5; // eax
  char *v6; // ebx
  char *v7; // esi
  char *v8; // eax
  char v9; // cl
  unsigned int v10; // ecx
  int v11; // ecx
  char v12; // dl
  LPCRITICAL_SECTION v13; // ecx
  char LockSemaphore; // al
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-18h] BYREF
  HANDLE hFile; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]
  char *v19; // [esp+18h] [ebp-Ch]
  char *v20; // [esp+1Ch] [ebp-8h]
  char Buffer; // [esp+23h] [ebp-1h] BYREF

  v3 = a2;
  v4 = 2 * (FileHandle & 0x3F);
  v5 = lpCriticalSection[FileHandle >> 6];
  v18 = FileHandle >> 6;
  hFile = v5[v4 + 1].DebugInfo;
  if ( a3 != 0 && *a2 == 10 )
    LOBYTE(v5[v4 + 1].LockSemaphore) |= 4u;
  else
    LOBYTE(v5[v4 + 1].LockSemaphore) &= ~4u;
  v6 = a2;
  v20 = &a2[a3];
  v7 = a2;
  if ( a2 < &a2[a3] )
  {
    v8 = a2 + 1;
    while ( 1 )
    {
      v9 = *v6;
      if ( *v6 == 26 )
      {
        v13 = lpCriticalSection[v18];
        LockSemaphore = (char)v13[v4 + 1].LockSemaphore;
        if ( (LockSemaphore & 0x40) != 0 )
          *v7++ = *v6;
        else
          LOBYTE(v13[v4 + 1].LockSemaphore) = LockSemaphore | 2;
        return v7 - v3;
      }
      if ( v9 == 13 )
        break;
      *v7++ = v9;
      ++v6;
      ++v8;
LABEL_27:
      v10 = (unsigned int)v20;
LABEL_28:
      if ( (unsigned int)v6 >= v10 )
        return v7 - v3;
    }
    v10 = (unsigned int)v20;
    if ( v8 < v20 )
    {
      if ( *v8 == 10 )
      {
        v6 += 2;
        *v7 = 10;
        v8 += 2;
        ++v7;
      }
      else
      {
        *v7++ = 13;
        ++v6;
        ++v8;
      }
      goto LABEL_28;
    }
    ++v6;
    v19 = v8 + 1;
    if ( !ReadFile(hFile, &Buffer, 1u, &NumberOfBytesRead, nullptr) || NumberOfBytesRead == 0 )
      goto LABEL_24;
    v11 = v18;
    if ( ((int)lpCriticalSection[v18][v4 + 1].LockSemaphore & 0x48) != 0 )
    {
      v12 = Buffer;
      if ( Buffer == 10 )
      {
        *v7 = 10;
      }
      else
      {
        *v7 = 13;
        BYTE2(lpCriticalSection[v11][v4 + 1].LockSemaphore) = v12;
      }
      goto LABEL_25;
    }
    if ( Buffer == 10 )
    {
      v3 = a2;
      if ( v7 == a2 )
      {
        *v7++ = 10;
LABEL_26:
        v8 = v19;
        goto LABEL_27;
      }
    }
    _lseeki64_nolock(FileHandle, (LARGE_INTEGER)-1LL, 1u);
    if ( Buffer != 10 )
LABEL_24:
      *v7++ = 13;
LABEL_25:
    v3 = a2;
    goto LABEL_26;
  }
  return v7 - v3;
}

// Address: 0x10026DEF
unsigned int __cdecl translate_text_mode_nolock<wchar_t>(int FileHandle, char *a2, int a3)
{
  unsigned int v3; // edi
  LPCRITICAL_SECTION v4; // eax
  char *v5; // edx
  char *v6; // ebx
  char *v7; // esi
  _WORD *v8; // eax
  int v9; // ecx
  __int16 v10; // dx
  LPCRITICAL_SECTION v11; // ecx
  char LockSemaphore; // al
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-18h] BYREF
  HANDLE hFile; // [esp+10h] [ebp-14h]
  unsigned int v16; // [esp+14h] [ebp-10h]
  _WORD *v17; // [esp+18h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-8h]
  __int16 Buffer; // [esp+20h] [ebp-4h] BYREF

  v3 = 2 * (FileHandle & 0x3F);
  v18 = FileHandle >> 6;
  v4 = lpCriticalSection[FileHandle >> 6];
  hFile = v4[v3 + 1].DebugInfo;
  v5 = a2;
  if ( a3 != 0 && *(_WORD *)a2 == 10 )
    LOBYTE(v4[v3 + 1].LockSemaphore) |= 4u;
  else
    LOBYTE(v4[v3 + 1].LockSemaphore) &= ~4u;
  v6 = a2;
  v16 = (unsigned int)&a2[2 * a3];
  v7 = a2;
  if ( (unsigned int)a2 < v16 )
  {
    v8 = a2 + 2;
    do
    {
      v17 = (_WORD *)*(unsigned __int16 *)v6;
      if ( v17 == (_WORD *)26 )
      {
        v11 = lpCriticalSection[v18];
        LockSemaphore = (char)v11[v3 + 1].LockSemaphore;
        if ( (LockSemaphore & 0x40) != 0 )
        {
          *(_WORD *)v7 = *(_WORD *)v6;
          v7 += 2;
        }
        else
        {
          LOBYTE(v11[v3 + 1].LockSemaphore) = LockSemaphore | 2;
        }
        return (v7 - v5) & 0xFFFFFFFE;
      }
      v5 = a2;
      if ( (_WORD)v17 == 13 )
      {
        if ( (unsigned int)v8 >= v16 )
        {
          v6 += 2;
          v17 = v8 + 1;
          if ( !ReadFile(hFile, &Buffer, 2u, &NumberOfBytesRead, nullptr) || NumberOfBytesRead == 0 )
            goto LABEL_24;
          v9 = v18;
          if ( ((int)lpCriticalSection[v18][v3 + 1].LockSemaphore & 0x48) != 0 )
          {
            v10 = Buffer;
            if ( Buffer == 10 )
            {
              *(_WORD *)v7 = 10;
            }
            else
            {
              *(_WORD *)v7 = 13;
              HIWORD(lpCriticalSection[v9][v3 + 1].LockSemaphore) = v10;
              LOBYTE(lpCriticalSection[v9][v3 + 1].SpinCount) = 10;
            }
            goto LABEL_25;
          }
          if ( Buffer != 10 || (v5 = a2, v7 != a2) )
          {
            _lseeki64_nolock(FileHandle, (LARGE_INTEGER)-2LL, 1u);
            if ( Buffer != 10 )
            {
LABEL_24:
              *(_WORD *)v7 = 13;
              v7 += 2;
            }
LABEL_25:
            v8 = v17;
LABEL_26:
            v5 = a2;
            continue;
          }
          *(_WORD *)v7 = 10;
          v7 += 2;
          v8 = v17;
        }
        else
        {
          v5 = a2;
          if ( *v8 != 10 )
          {
            *(_WORD *)v7 = 13;
            v6 += 2;
            v7 += 2;
            ++v8;
            goto LABEL_26;
          }
          v6 += 4;
          *(_WORD *)v7 = 10;
          v8 += 2;
          v7 += 2;
        }
      }
      else
      {
        v6 += 2;
        *(_WORD *)v7 = (_WORD)v17;
        v7 += 2;
        ++v8;
      }
    }
    while ( (unsigned int)v6 < v16 );
  }
  return (v7 - v5) & 0xFFFFFFFE;
}

// Address: 0x10026FAF
int __cdecl translate_ansi_or_utf8_nolock(
        int FileHandle,
        char *lpMultiByteStr,
        unsigned int a3,
        LPWSTR lpWideCharStr,
        unsigned int cchWideChar)
{
  int result; // eax
  int v6; // ecx
  int v7; // edi
  const CHAR *v8; // esi
  unsigned int i; // edx
  CHAR v10; // cl
  char *v11; // esi
  char v12; // al
  char v13; // al
  int v14; // esi
  int v15; // eax
  DWORD LastError; // eax
  LPCRITICAL_SECTION v17; // [esp+4h] [ebp-8h]
  int v18; // [esp+8h] [ebp-4h]

  result = translate_text_mode_nolock<char>(FileHandle, lpMultiByteStr, a3);
  v6 = result;
  if ( result != 0 )
  {
    v7 = 2 * (FileHandle & 0x3F);
    v18 = FileHandle >> 6;
    v17 = lpCriticalSection[FileHandle >> 6];
    if ( BYTE1(v17[v7 + 1].LockSemaphore) != 0 )
    {
      v8 = &lpMultiByteStr[result - 1];
      LOBYTE(result) = *v8;
      if ( *v8 < 0 )
      {
        result = (unsigned __int8)result;
        for ( i = 1; byte_1003F930[result] == 0 && i <= 4 && v8 >= lpMultiByteStr; ++i )
          result = *(unsigned __int8 *)--v8;
        v10 = *v8;
        if ( byte_1003F930[*(unsigned __int8 *)v8] == 0 )
        {
          *_errno() = 42;
          return -1;
        }
        if ( byte_1003F930[*(unsigned __int8 *)v8] + 1 == i )
        {
          v8 += i;
        }
        else if ( ((int)v17[v7 + 1].LockSemaphore & 0x48) != 0 )
        {
          v11 = (char *)(v8 + 1);
          BYTE2(v17[v7 + 1].LockSemaphore) = v10;
          if ( i >= 2 )
          {
            v12 = *v11++;
            HIBYTE(lpCriticalSection[v18][v7 + 1].LockSemaphore) = v12;
          }
          if ( i == 3 )
          {
            v13 = *v11++;
            LOBYTE(lpCriticalSection[v18][v7 + 1].SpinCount) = v13;
          }
          v8 = &v11[-i];
        }
        else
        {
          _lseeki64_nolock(FileHandle, (LARGE_INTEGER)-i, 1u);
        }
      }
      else
      {
        v8 = &lpMultiByteStr[v6];
      }
      v14 = v8 - lpMultiByteStr;
      v15 = MultiByteToWideChar(0xFDE9u, 0, lpMultiByteStr, v14, lpWideCharStr, cchWideChar);
      if ( v15 == 0 )
      {
        LastError = GetLastError();
        __acrt_errno_map_os_error(LastError);
        return -1;
      }
      BYTE1(lpCriticalSection[v18][v7 + 1].SpinCount) ^= (BYTE1(lpCriticalSection[v18][v7 + 1].SpinCount)
                                                        ^ (2 * (v15 != v14)))
                                                       & 2;
      return 2 * v15;
    }
  }
  return result;
}

// Address: 0x100270FF
unsigned int __cdecl translate_utf16_from_console_nolock(int a1, wchar_t *const a2, unsigned int a3)
{
  wchar_t *v3; // edi
  wchar_t *v4; // esi
  wchar_t *v5; // edx
  wchar_t *v6; // eax
  wchar_t *v7; // ecx
  int v8; // ebx

  v3 = a2;
  v4 = a2;
  v5 = &a2[a3];
  v6 = a2;
  if ( a2 < v5 )
  {
    v7 = a2 + 1;
    while ( 1 )
    {
      v8 = *v6;
      if ( v8 == 26 )
        break;
      if ( v8 == 13 && v7 < v5 && (v3 = a2, *v7 == 10) )
      {
        v6 += 2;
        *v4 = 10;
        v7 += 2;
        ++v4;
      }
      else
      {
        *v4 = v8;
        ++v6;
        ++v4;
        ++v7;
      }
      if ( v6 >= v5 )
        return ((char *)v4 - (char *)v3) & 0xFFFFFFFE;
    }
    LOBYTE(lpCriticalSection[a1 >> 6][2 * (a1 & 0x3F) + 1].LockSemaphore) |= 2u;
  }
  return ((char *)v4 - (char *)v3) & 0xFFFFFFFE;
}

// Address: 0x10027180
int __cdecl _read(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  int nolock; // edi
  int v5; // [esp+14h] [ebp-20h]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= (unsigned int)dword_10041190
    || (v5 = 2 * (FileHandle & 0x3F), ((int)lpCriticalSection[FileHandle >> 6][v5 + 1].LockSemaphore & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    goto LABEL_13;
  }
  if ( MaxCharCount > 0x7FFFFFFF )
  {
    *__doserrno() = 0;
    *_errno() = 22;
LABEL_13:
    _invalid_parameter_noinfo();
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  nolock = -1;
  if ( ((int)lpCriticalSection[FileHandle >> 6][v5 + 1].LockSemaphore & 1) != 0 )
  {
    nolock = _read_nolock(FileHandle, (LPWSTR)DstBuf, MaxCharCount);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
  }
  __acrt_lowio_unlock_fh(FileHandle);
  return nolock;
}

// Address: 0x10027293
unsigned int __cdecl _read_nolock(int FileHandle, LPWSTR lpWideCharStr, DWORD a3)
{
  int v3; // edx
  LPCRITICAL_SECTION v4; // eax
  DWORD v5; // ecx
  void *v6; // esi
  void *v7; // esi
  LPWSTR v8; // eax
  size_t v9; // eax
  DWORD v10; // eax
  LPCRITICAL_SECTION v11; // ecx
  int v12; // edi
  void *v13; // edx
  DWORD v14; // edi
  int v15; // ebx
  DWORD v16; // ecx
  bool v17; // zf
  char *v18; // eax
  DWORD v19; // ecx
  char *v20; // eax
  DWORD LastError; // eax
  unsigned int v22; // edi
  DWORD v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // [esp-8h] [ebp-38h]
  DWORD Mode; // [esp+8h] [ebp-28h] BYREF
  wchar_t *v28; // [esp+Ch] [ebp-24h]
  DWORD NumberOfCharsRead; // [esp+10h] [ebp-20h] BYREF
  HANDLE hConsoleHandle; // [esp+14h] [ebp-1Ch]
  int v31; // [esp+18h] [ebp-18h]
  DWORD dwMoveMethod; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+20h] [ebp-10h]
  DWORD nNumberOfBytesToRead; // [esp+24h] [ebp-Ch]
  LPVOID lpBuffer; // [esp+28h] [ebp-8h]
  char v36; // [esp+2Eh] [ebp-2h]
  char v37; // [esp+2Fh] [ebp-1h]

  if ( FileHandle != -2 )
  {
    if ( FileHandle >= 0
      && FileHandle < (unsigned int)dword_10041190
      && (dwMoveMethod = 1,
          v3 = 48 * (FileHandle & 0x3F),
          v33 = FileHandle >> 6,
          v4 = lpCriticalSection[FileHandle >> 6],
          v31 = v3,
          ((v37 = *((_BYTE *)&v4[1].LockSemaphore + v3)) & 1) != 0) )
    {
      v5 = a3;
      if ( a3 <= 0x7FFFFFFF )
      {
        if ( a3 == 0 || (v37 & 2) != 0 )
          return 0;
        if ( lpWideCharStr != nullptr )
        {
          v6 = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v4[1].DebugInfo + v3);
          v37 = *((_BYTE *)&v4[1].LockSemaphore + v3 + 1);
          hConsoleHandle = v6;
          v7 = nullptr;
          if ( v37 == 1 )
          {
            if ( ((unsigned __int8)~(_BYTE)a3 & (unsigned __int8)dwMoveMethod) != 0 )
            {
              v9 = 4;
              nNumberOfBytesToRead = 4;
              if ( a3 >> 1 >= 4 )
              {
                v9 = a3 >> 1;
                nNumberOfBytesToRead = a3 >> 1;
              }
              v7 = _malloc_base(v9);
              _free_base(nullptr);
              _free_base(nullptr);
              lpBuffer = v7;
              if ( v7 != nullptr )
              {
                v10 = _lseeki64_nolock(FileHandle, 0, dwMoveMethod);
                v11 = lpCriticalSection[FileHandle >> 6];
                v12 = v31;
                *(LONG *)((char *)&v11[1].RecursionCount + v31) = v10;
                v8 = (LPWSTR)v7;
                *(HANDLE *)((char *)&v11[1].OwningThread + v12) = v13;
                v3 = v12;
                v5 = nNumberOfBytesToRead;
                goto LABEL_22;
              }
              *_errno() = 12;
              *__doserrno() = 8;
LABEL_39:
              v22 = -1;
LABEL_40:
              _free_base(v7);
              return v22;
            }
          }
          else if ( v37 != 2 || (a3 & 1) == 0 )
          {
            v8 = lpWideCharStr;
            nNumberOfBytesToRead = a3;
            lpBuffer = lpWideCharStr;
LABEL_22:
            v14 = 0;
            v28 = v8;
            NumberOfCharsRead = (DWORD)lpCriticalSection[v33];
            v15 = FileHandle;
            if ( (*(_BYTE *)(v3 + NumberOfCharsRead + 40) & 0x48) != 0 )
            {
              v36 = *(_BYTE *)(v3 + NumberOfCharsRead + 42);
              v15 = FileHandle;
              if ( v36 != 10 && v5 != 0 )
              {
                v14 = dwMoveMethod;
                *(_BYTE *)v8 = v36;
                v15 = FileHandle;
                v16 = v5 - 1;
                v17 = v37 == 0;
                lpBuffer = (char *)v8 + 1;
                nNumberOfBytesToRead = v16;
                *((_BYTE *)&lpCriticalSection[v33][1].LockSemaphore + v3 + 2) = 10;
                if ( !v17 )
                {
                  v36 = *((_BYTE *)&lpCriticalSection[v33][1].LockSemaphore + v3 + 3);
                  if ( v36 != 10 && v16 != 0 )
                  {
                    v18 = (char *)lpBuffer;
                    v14 = 2;
                    *(_BYTE *)lpBuffer = v36;
                    v15 = FileHandle;
                    v19 = v16 - 1;
                    lpBuffer = v18 + 1;
                    nNumberOfBytesToRead = v19;
                    *((_BYTE *)&lpCriticalSection[v33][1].LockSemaphore + v3 + 3) = 10;
                    if ( v37 == (_BYTE)dwMoveMethod )
                    {
                      v36 = *((_BYTE *)&lpCriticalSection[v33][1].SpinCount + v3);
                      if ( v36 != 10 && v19 != 0 )
                      {
                        v20 = (char *)lpBuffer;
                        v14 = 3;
                        *(_BYTE *)lpBuffer = v36;
                        v15 = FileHandle;
                        lpBuffer = v20 + 1;
                        nNumberOfBytesToRead = v19 - 1;
                        *((_BYTE *)&lpCriticalSection[v33][1].SpinCount + v3) = 10;
                      }
                    }
                  }
                }
              }
            }
            if ( _isatty(v15) != 0
              && *((char *)&lpCriticalSection[v33][1].LockSemaphore + v31) < 0
              && GetConsoleMode(hConsoleHandle, &Mode) )
            {
              if ( v37 == 2 )
              {
                if ( !ReadConsoleW(hConsoleHandle, lpBuffer, nNumberOfBytesToRead >> 1, &NumberOfCharsRead, nullptr) )
                {
                  LastError = GetLastError();
LABEL_38:
                  __acrt_errno_map_os_error(LastError);
                  goto LABEL_39;
                }
                v24 = a3;
                v22 = v14 + 2 * NumberOfCharsRead;
                goto LABEL_46;
              }
            }
            else
            {
              LOBYTE(dwMoveMethod) = 0;
            }
            if ( !ReadFile(hConsoleHandle, lpBuffer, nNumberOfBytesToRead, &NumberOfCharsRead, nullptr)
              || (v24 = a3, NumberOfCharsRead > a3) )
            {
              LastError = GetLastError();
              if ( LastError == 5 )
              {
                *_errno() = 9;
                *__doserrno() = 5;
                goto LABEL_39;
              }
              if ( LastError == 109 )
              {
                v22 = 0;
                goto LABEL_40;
              }
              goto LABEL_38;
            }
            v22 = NumberOfCharsRead + v14;
LABEL_46:
            if ( *((char *)&lpCriticalSection[v33][1].LockSemaphore + v31) < 0 )
            {
              if ( v37 == 2 )
              {
                v26 = v22 >> 1;
                if ( (_BYTE)dwMoveMethod != 0 )
                  v25 = translate_utf16_from_console_nolock(v15, v28, v26);
                else
                  v25 = translate_text_mode_nolock<wchar_t>(v15, (char *)v28, v26);
              }
              else
              {
                v25 = translate_ansi_or_utf8_nolock(v15, (char *)lpBuffer, v22, lpWideCharStr, v24 >> 1);
              }
              v22 = v25;
            }
            goto LABEL_40;
          }
          *__doserrno() = 0;
          *_errno() = 22;
          _invalid_parameter_noinfo();
          goto LABEL_39;
        }
      }
      *__doserrno() = 0;
      *_errno() = 22;
    }
    else
    {
      *__doserrno() = 0;
      *_errno() = 9;
    }
    _invalid_parameter_noinfo();
    return -1;
  }
  *__doserrno() = 0;
  *_errno() = 9;
  return -1;
}

// Address: 0x10027648
int __cdecl GetTableIndexFromLocaleName(const wchar_t *a1)
{
  int v1; // edi
  int v2; // ebx
  char *v3; // esi
  int v4; // ecx
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
    v3 = (char *)*(&off_10034C38 + 2 * v10);
    v4 = (char *)a1 - v3;
    do
    {
      v5 = *(_WORD *)&v3[v4];
      if ( v5 < 0x41u || v5 > 0x5Au )
        v6 = *(_WORD *)&v3[v4];
      else
        v6 = v5 + 32;
      v7 = *(_WORD *)v3;
      if ( *(_WORD *)v3 >= 0x41u && v7 <= 0x5Au )
        v7 += 32;
      v3 += 2;
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
  return dword_10034C3C[2 * v10];
}

// Address: 0x10027704
int __cdecl __acrt_DownlevelLCIDToLocaleName(int a1, wchar_t *Destination, int SizeInWords)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  const wchar_t *v6; // ebx
  signed int v7; // eax
  signed int v8; // edi

  if ( a1 != 0 && a1 != 1024 && a1 != 2048 && (Destination != nullptr || SizeInWords <= 0) && SizeInWords >= 0 )
  {
    v3 = 0;
    v4 = 227;
    while ( 1 )
    {
      v5 = (v4 + v3) / 2;
      if ( a1 == dword_10034518[2 * v5] )
        break;
      if ( a1 - dword_10034518[2 * v5] >= 0 )
        v3 = v5 + 1;
      else
        v4 = v5 - 1;
      if ( v3 > v4 )
      {
        v5 = -1;
        break;
      }
    }
    if ( v5 >= 0 )
    {
      v6 = (&off_1003451C)[2 * v5];
      v7 = wcsnlen(v6, 0x55u);
      v8 = v7;
      if ( SizeInWords <= 0 )
        return v8 + 1;
      if ( v7 < SizeInWords )
      {
        if ( wcscpy_s(Destination, SizeInWords, v6) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        return v8 + 1;
      }
    }
  }
  return 0;
}

// Address: 0x100277AE
int __cdecl __acrt_DownlevelLocaleNameToLCID(wchar_t *a1)
{
  int TableIndexFromLocaleName; // eax

  if ( a1 != nullptr && (unsigned int)(TableIndexFromLocaleName = GetTableIndexFromLocaleName(a1)) < 0xE4 )
    return dword_10034518[2 * TableIndexFromLocaleName];
  else
    return 0;
}

// Address: 0x100277DA
const char *__cdecl common_getenv_nolock<char>(char *String2)
{
  const char **v1; // edi
  size_t v2; // esi
  const char *v3; // edx

  v1 = (const char **)sub_100181F4();
  if ( v1 != nullptr && String2 != nullptr )
  {
    v2 = strlen(String2);
    while ( *v1 != nullptr )
    {
      v3 = *v1;
      if ( strlen(*v1) > v2 && v3[v2] == 61 && _strnicoll(v3, String2, v2) == 0 )
        return &(*v1)[v2 + 1];
      ++v1;
    }
  }
  return nullptr;
}

// Address: 0x1002784A
int __cdecl common_getenv_s<char>(int a1, char *Destination, rsize_t SizeInBytes, char *String2)
{
  int v5; // [esp+10h] [ebp-1Ch]

  __acrt_lock(11);
  v5 = common_getenv_s_nolock<char>(a1, Destination, SizeInBytes, String2);
  __acrt_unlock(11);
  return v5;
}

// Address: 0x1002789F
int __cdecl common_getenv_s_nolock<char>(unsigned int *a1, char *Destination, rsize_t SizeInBytes, char *String2)
{
  const char *v5; // eax
  const char *v6; // edx
  unsigned int v7; // ecx

  if ( a1 == nullptr )
    goto LABEL_2;
  *a1 = 0;
  if ( Destination != nullptr )
  {
    if ( SizeInBytes != 0 )
      goto LABEL_5;
LABEL_2:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( SizeInBytes != 0 )
    goto LABEL_2;
LABEL_5:
  if ( Destination != nullptr )
    *Destination = 0;
  v5 = common_getenv_nolock<char>(String2);
  v6 = v5;
  if ( v5 != nullptr )
  {
    v7 = strlen(v5) + 1;
    *a1 = v7;
    if ( SizeInBytes != 0 )
    {
      if ( v7 > SizeInBytes )
        return 34;
      if ( strcpy_s(Destination, SizeInBytes, v6) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
  }
  return 0;
}

// Address: 0x10027947
errno_t __cdecl getenv_s(size_t *RequiredCount, char *Buffer, rsize_t BufferCount, const char *VarName)
{
  return common_getenv_s<char>((int)RequiredCount, Buffer, BufferCount, (char *)VarName);
}

// Address: 0x10027952
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

// Address: 0x10027990
int __cdecl _wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int result; // eax
  size_t v4; // edi
  const wchar_t *v5; // ecx
  int v6; // edx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // si
  wchar_t v9; // ax

  result = dword_10040F84;
  if ( dword_10040F84 != 0 )
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

// Address: 0x10027A48
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
  __crt_locale_pointers Localea; // [esp+10h] [ebp-10h] BYREF
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
    if ( *((_DWORD *)Localea.locinfo + 42) != 0 )
    {
      do
      {
        v11 = _towlower_l(*v5, &Localea);
        v12 = _towlower_l(*v7, &Localea);
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

// Address: 0x10027B50
int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  const char *v3; // edx
  size_t v4; // ebx
  int v5; // ecx
  unsigned __int8 v6; // al
  bool v7; // cc
  int v8; // eax

  v3 = Str2;
  v4 = MaxCount;
  if ( MaxCount == 0 )
    return 0;
  v5 = Str1 - Str2;
  if ( ((unsigned __int8)Str2 & 3) == 0 )
  {
_dword_loop_begin:
    while ( (((_WORD)v3 + (_WORD)v5) & 0xFFFu) <= 0xFFC )
    {
      v8 = *(_DWORD *)&v3[v5];
      if ( v8 != *(_DWORD *)v3 )
        break;
      v7 = v4 <= 4;
      v4 -= 4;
      if ( !v7 )
      {
        v3 += 4;
        if ( ((v8 - 16843009) & ~v8 & 0x80808080) == 0 )
          continue;
      }
      return 0;
    }
  }
  while ( 1 )
  {
    v6 = v3[v5];
    if ( v6 != *v3 )
      return v6 < (unsigned int)*v3 ? -1 : 1;
    if ( v3[v5] == 0 )
      return 0;
    ++v3;
    v7 = v4-- <= 1;
    if ( v7 )
      return 0;
    if ( ((unsigned __int8)v3 & 3) == 0 )
      goto _dword_loop_begin;
  }
}

// Address: 0x10027BC8
int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  if ( dword_10040F84 != 0 )
    return _strnicmp_l(String1, String2, MaxCount, nullptr);
  if ( String1 != nullptr && String2 != nullptr && MaxCount <= 0x7FFFFFFF )
    return __ascii_strnicmp(String1, String2, MaxCount);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}

// Address: 0x10027C34
int __cdecl _strnicmp_l(const char *String1, const char *String2, size_t MaxCount, _locale_t Locale)
{
  int v4; // esi
  const char *v5; // ebx
  int v6; // esi
  int v7; // eax
  int v9; // [esp+0h] [ebp-10h] BYREF
  __crt_locale_pointers Localea; // [esp+4h] [ebp-Ch] BYREF
  char v11; // [esp+Ch] [ebp-4h]

  if ( MaxCount == 0 )
    return 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, Locale);
  v4 = 0x7FFFFFFF;
  if ( String1 != nullptr && (v5 = String2, String2 != nullptr) && MaxCount <= 0x7FFFFFFF )
  {
    if ( *((_DWORD *)Localea.locinfo + 42) != 0 )
    {
      do
      {
        v6 = _tolower_l((unsigned __int8)v5[String1 - String2], &Localea);
        v7 = _tolower_l(*(unsigned __int8 *)v5++, &Localea);
        --MaxCount;
      }
      while ( MaxCount != 0 && v6 != 0 && v6 == v7 );
      v4 = v6 - v7;
    }
    else
    {
      v4 = __ascii_strnicmp(String1, String2, MaxCount);
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
  }
  if ( v11 != 0 )
    *(_DWORD *)(v9 + 848) &= ~2u;
  return v4;
}

// Address: 0x10027CEB
int __cdecl common_sopen_dispatch<char>(LPCCH lpMultiByteStr, int a2, int a3, int a4, int *a5, int a6)
{
  int v7; // eax
  int v8; // edi
  LPCRITICAL_SECTION v9; // eax
  int v10; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  if ( a5 == nullptr || (*a5 = -1, lpMultiByteStr == nullptr) || a6 != 0 && (a4 & 0xFFFFFE7F) != 0 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  else
  {
    v10 = 0;
    v11 = 0;
    ms_exc.registration.TryLevel = 0;
    v7 = _sopen_nolock((int)&v10, (int)a5, lpMultiByteStr, a2, a3, a4, a6);
    v8 = v7;
    v11 = v7;
    ms_exc.registration.TryLevel = -2;
    if ( v10 != 0 )
    {
      if ( v7 != 0 )
      {
        v9 = lpCriticalSection[*a5 >> 6];
        LOBYTE(v9[2 * (*a5 & 0x3F) + 1].LockSemaphore) &= ~1u;
      }
      __acrt_lowio_unlock_fh(*a5);
    }
    if ( v8 != 0 )
      *a5 = -1;
    return v8;
  }
}

// Address: 0x10027DB7
int __cdecl configure_text_mode(
        int FileHandle,
        char a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _BYTE *a9)
{
  int v9; // ebx
  int v11; // esi
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // esi
  __int64 v16; // rax
  DWORD v17; // eax
  int v18; // edx
  signed int nolock; // eax
  DWORD v20; // eax
  int v21; // edx
  DWORD v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // eax
  WCHAR WideCharStr[2]; // [esp+8h] [ebp-4h] BYREF

  v9 = 0;
  *a9 = 0;
  if ( SLOBYTE(lpCriticalSection[FileHandle >> 6][2 * (FileHandle & 0x3F) + 1].LockSemaphore) >= 0 )
    return 0;
  v11 = a8;
  if ( (a8 & 0x74000) == 0 )
  {
    *(_DWORD *)WideCharStr = 0;
    if ( sub_100299B1(WideCharStr) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( (*(_DWORD *)WideCharStr & 0x74000) != 0 )
      v11 = *(_DWORD *)WideCharStr & 0x74000 | a8;
    else
      v11 = a8 | 0x4000;
  }
  v12 = v11 & 0x74000;
  if ( (v11 & 0x74000) == 0x4000 )
  {
    *a9 = 0;
    goto LABEL_19;
  }
  switch ( v12 )
  {
    case 65536:
    case 81920:
      if ( (v11 & 0x301) != 0x301 )
        break;
LABEL_17:
      *a9 = 2;
      break;
    case 131072:
    case 147456:
      goto LABEL_17;
    case 262144:
    case 278528:
      *a9 = 1;
      break;
    default:
      break;
  }
LABEL_19:
  if ( (v11 & 0x70000) == 0 || (a2 & 0x40) != 0 )
    return 0;
  v13 = a3 & 0xC0000000;
  v14 = 0;
  v15 = 0;
  if ( (a3 & 0xC0000000) == 0x40000000 )
    goto LABEL_24;
  if ( v13 == 0x80000000 )
    goto LABEL_35;
  if ( v13 == -1073741824 )
  {
LABEL_24:
    if ( a4 != 0 )
    {
      if ( a4 > 2 )
      {
        if ( a4 <= 4 )
        {
          LODWORD(v16) = _lseeki64_nolock(FileHandle, 0, 2u);
          if ( v16 == 0 )
          {
LABEL_50:
            v24 = (char)*a9;
            v25 = 0;
            *(_DWORD *)WideCharStr = 0;
            v26 = v24 - 1;
            if ( v26 != 0 )
            {
              if ( v26 == 1 )
              {
                wcscpy(WideCharStr, L"﻿");
                v25 = 2;
                goto LABEL_55;
              }
            }
            else
            {
              *(_DWORD *)WideCharStr = 12565487;
              v25 = 3;
            }
            if ( v25 <= 0 )
              return 0;
LABEL_55:
            while ( 1 )
            {
              v27 = _write(FileHandle, (char *)WideCharStr + v9, v25 - v9);
              if ( v27 == -1 )
                break;
              v9 += v27;
              if ( v25 <= v9 )
                return 0;
            }
            return *_errno();
          }
          v17 = _lseeki64_nolock(FileHandle, 0, 0);
          if ( (v18 & v17) == 0xFFFFFFFF )
            return *_errno();
          v14 = a3 >> 31;
LABEL_34:
          if ( v14 == 0 )
            goto LABEL_49;
LABEL_35:
          *(_DWORD *)WideCharStr = 0;
          nolock = _read_nolock(FileHandle, WideCharStr, 3u);
          if ( nolock > 0 )
            v15 = v15 != 1 ? v15 : 0;
          if ( nolock == -1 )
            return *_errno();
          if ( nolock != 2 )
          {
            if ( nolock != 3 )
            {
LABEL_48:
              v22 = _lseeki64_nolock(FileHandle, 0, 0);
              if ( (v23 & v22) == 0xFFFFFFFF )
                return *_errno();
              goto LABEL_49;
            }
            if ( *(_DWORD *)WideCharStr == 12565487 )
            {
              *a9 = 1;
LABEL_49:
              if ( v15 == 0 )
                return 0;
              goto LABEL_50;
            }
          }
          if ( WideCharStr[0] == 65534 )
          {
            *_errno() = 22;
            return *_errno();
          }
          if ( WideCharStr[0] == 65279 )
          {
            v20 = _lseeki64_nolock(FileHandle, (LARGE_INTEGER)2LL, 0);
            if ( (v21 & v20) == 0xFFFFFFFF )
              return *_errno();
            *a9 = 2;
            goto LABEL_49;
          }
          goto LABEL_48;
        }
        if ( a4 != 5 )
          return 0;
      }
      v15 = 1;
      goto LABEL_34;
    }
  }
  return 0;
}

// Address: 0x10028004
HANDLE __cdecl create_file(
        const WCHAR *lpFileName,
        struct _SECURITY_ATTRIBUTES *lpSecurityAttributes,
        int a3,
        DWORD dwDesiredAccess,
        DWORD dwCreationDisposition,
        DWORD dwShareMode,
        int a7,
        int a8)
{
  return CreateFileW(
           lpFileName,
           dwDesiredAccess,
           dwShareMode,
           lpSecurityAttributes,
           dwCreationDisposition,
           a8 | a7,
           nullptr);
}

// Address: 0x10028029
unsigned int __cdecl decode_open_create_flags(__int16 a1)
{
  unsigned int v1; // eax

  v1 = a1 & 0x700;
  if ( v1 <= 0x400 )
  {
    if ( (a1 & 0x700) == 0x400 || (a1 & 0x700) == 0 )
      return 3;
    if ( v1 == 256 )
      return 4;
    if ( v1 != 512 )
    {
      if ( v1 == 768 )
        return 2;
      goto LABEL_14;
    }
    return 5;
  }
  if ( v1 != 1280 )
  {
    if ( v1 == 1536 )
      return 5;
    if ( v1 != 1792 )
    {
LABEL_14:
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return -1;
    }
  }
  return 1;
}

// Address: 0x10028099
int __cdecl decode_options(int a1, int a2, int a3, char a4)
{
  int v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  *(_BYTE *)a1 = 0;
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 3) == 1 )
    {
      v4 = (a2 & 8) != 0 && (a2 & 0x70000) != 0 ? -1073741824 : 0x40000000;
    }
    else if ( (a2 & 3) == 2 )
    {
      v4 = -1073741824;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      v4 = -1;
    }
  }
  else
  {
    v4 = 0x80000000;
  }
  *(_DWORD *)(a1 + 4) = v4;
  *(_DWORD *)(a1 + 8) = decode_open_create_flags(a2);
  switch ( a3 )
  {
    case 16:
      v5 = 0;
      break;
    case 32:
      v5 = 1;
      break;
    case 48:
      v7 = 2;
      goto LABEL_17;
    case 64:
      v7 = 3;
LABEL_17:
      v5 = v7;
      break;
    case 128:
      v5 = *(_DWORD *)(a1 + 4) == 0x80000000;
      break;
    default:
      *_errno() = 22;
      _invalid_parameter_noinfo();
      v5 = -1;
      break;
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = v5;
  *(_DWORD *)(a1 + 16) = 128;
  if ( (a2 & 0x80u) != 0 )
    *(_BYTE *)a1 |= 0x10u;
  if ( (a2 & 0x8000) == 0 )
  {
    if ( (a2 & 0x74000) != 0 )
      goto LABEL_26;
    if ( sub_100299B1(&v8) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( v8 != 0x8000 )
LABEL_26:
      *(_BYTE *)a1 |= 0x80u;
  }
  if ( (a2 & 0x100) != 0 && (a4 & ~(_BYTE)dword_100413A4 & 0x80u) == 0 )
    *(_DWORD *)(a1 + 16) = 1;
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x4000000u;
    *(_DWORD *)(a1 + 4) |= 0x10000u;
    *(_DWORD *)(a1 + 12) |= 4u;
  }
  if ( (a2 & 0x1000) != 0 )
    *(_DWORD *)(a1 + 16) |= 0x100u;
  if ( (a2 & 0x2000) != 0 )
    *(_DWORD *)(a1 + 20) |= 0x2000000u;
  if ( (a2 & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x8000000u;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x10000000u;
  }
  return a1;
}

// Address: 0x10028215
int __cdecl truncate_ctrl_z_if_present(int FileHandle)
{
  char LockSemaphore; // al
  DWORD v3; // edi
  unsigned int v4; // edx
  unsigned int v5; // ebx
  DWORD v6; // eax
  int v7; // edx
  WCHAR WideCharStr; // [esp+4h] [ebp-4h] BYREF

  LockSemaphore = (char)lpCriticalSection[FileHandle >> 6][2 * (FileHandle & 0x3F) + 1].LockSemaphore;
  if ( (LockSemaphore & 0x48) != 0 || LockSemaphore >= 0 )
    return 0;
  v3 = _lseeki64_nolock(FileHandle, (LARGE_INTEGER)-1LL, 2u);
  v5 = v4;
  if ( (v4 & v3) != 0xFFFFFFFF )
  {
    WideCharStr = 0;
    if ( _read_nolock(FileHandle, &WideCharStr, 1u) != 0
      || WideCharStr != 26
      || _chsize_nolock(FileHandle, (LARGE_INTEGER)__PAIR64__(v5, v3)) != -1 )
    {
      v6 = _lseeki64_nolock(FileHandle, 0, 0);
      if ( (v7 & v6) != 0xFFFFFFFF )
        return 0;
    }
    return *_errno();
  }
  if ( *__doserrno() != 131 )
    return *_errno();
  return 0;
}

// Address: 0x100282C5
int __cdecl _sopen_nolock(int a1, int a2, LPCCH lpMultiByteStr, int a4, int a5, int a6)
{
  void *v7; // esi
  int v8; // edi
  void *Block; // [esp+0h] [ebp-4h] BYREF

  Block = nullptr;
  if ( __acrt_copy_path_to_wide_string(lpMultiByteStr, (int)&Block) == 0 )
    return -1;
  v7 = Block;
  v8 = _wsopen_nolock(a1, a2, Block, a4, a5, a6);
  _free_base(v7);
  return v8;
}

// Address: 0x10028316
errno_t __cdecl _sopen_s(int *FileHandle, const char *FileName, int OpenFlag, int ShareFlag, int PermissionMode)
{
  return common_sopen_dispatch<char>(FileName, OpenFlag, ShareFlag, PermissionMode, FileHandle, 1);
}

// Address: 0x10028336
int __cdecl _wsopen_nolock(_DWORD *a1, int *a2, const WCHAR *a3, int a4, int a5, char a6)
{
  int v7; // eax
  struct _RTL_CRITICAL_SECTION_DEBUG *v8; // edi
  LPCRITICAL_SECTION v9; // eax
  DWORD LastError; // eax
  DWORD FileType; // eax
  DWORD v12; // esi
  char v13; // al
  bool v14; // zf
  int v15; // eax
  int v16; // esi
  int v17; // eax
  LPCRITICAL_SECTION v18; // ecx
  LPCRITICAL_SECTION v19; // eax
  int v20; // esi
  struct _RTL_CRITICAL_SECTION_DEBUG *v21; // edx
  DWORD v22; // eax
  LPCRITICAL_SECTION v23; // eax
  int v24; // [esp-8h] [ebp-58h]
  _DWORD v25[6]; // [esp+Ch] [ebp-44h] BYREF
  int v26[6]; // [esp+24h] [ebp-2Ch] BYREF
  struct _SECURITY_ATTRIBUTES v27; // [esp+3Ch] [ebp-14h] BYREF
  HANDLE hObject; // [esp+48h] [ebp-8h]
  char v29; // [esp+4Eh] [ebp-2h] BYREF
  char v30; // [esp+4Fh] [ebp-1h]

  qmemcpy(v26, (const void *)decode_options((int)v25, a4, a5, a6), sizeof(v26));
  if ( v26[3] == -1 )
  {
    *__doserrno() = 0;
    *a2 = -1;
    return *_errno();
  }
  v7 = _alloc_osfhnd();
  *a2 = v7;
  if ( v7 == -1 )
  {
    *__doserrno() = 0;
    *a2 = -1;
    *_errno() = 24;
    return *_errno();
  }
  v27.lpSecurityDescriptor = nullptr;
  v27.nLength = 12;
  *a1 = 1;
  v27.bInheritHandle = (a4 & 0x80) == 0;
  v8 = (struct _RTL_CRITICAL_SECTION_DEBUG *)create_file(a3, &v27, v26[0], v26[1], v26[2], v26[3], v26[4], v26[5]);
  hObject = v8;
  if ( v8 == (struct _RTL_CRITICAL_SECTION_DEBUG *)-1 )
  {
    if ( (v26[1] & 0xC0000000) != 0xC0000000
      || (a4 & 1) == 0
      || (v26[1] &= ~0x80000000,
          v8 = (struct _RTL_CRITICAL_SECTION_DEBUG *)create_file(
                                                       a3,
                                                       &v27,
                                                       v26[0],
                                                       v26[1],
                                                       v26[2],
                                                       v26[3],
                                                       v26[4],
                                                       v26[5]),
          hObject = v8,
          v8 == (struct _RTL_CRITICAL_SECTION_DEBUG *)-1) )
    {
      v9 = lpCriticalSection[*a2 >> 6];
      LOBYTE(v9[2 * (*a2 & 0x3F) + 1].LockSemaphore) &= ~1u;
      LastError = GetLastError();
      __acrt_errno_map_os_error(LastError);
      return *_errno();
    }
  }
  FileType = GetFileType(v8);
  if ( FileType == 0 )
  {
    v12 = GetLastError();
    __acrt_errno_map_os_error(v12);
    LOBYTE(lpCriticalSection[*a2 >> 6][2 * (*a2 & 0x3F) + 1].LockSemaphore) &= ~1u;
    CloseHandle(v8);
    if ( v12 == 0 )
      *_errno() = 13;
    return *_errno();
  }
  if ( FileType == 2 )
  {
    v13 = LOBYTE(v26[0]) | 0x40;
  }
  else
  {
    v14 = FileType == 3;
    v13 = v26[0];
    if ( v14 )
      v13 = LOBYTE(v26[0]) | 8;
  }
  v24 = *a2;
  v30 = v13;
  __acrt_lowio_set_os_handle(v24, v8);
  v15 = *a2;
  v30 |= 1u;
  LOBYTE(v26[0]) = v30;
  LOBYTE(lpCriticalSection[v15 >> 6][2 * (v15 & 0x3F) + 1].LockSemaphore) = v30;
  BYTE1(lpCriticalSection[*a2 >> 6][2 * (*a2 & 0x3F) + 1].LockSemaphore) = 0;
  if ( (a4 & 2) != 0 )
  {
    v16 = truncate_ctrl_z_if_present(*a2);
    if ( v16 != 0 )
      goto LABEL_23;
  }
  v29 = 0;
  v17 = configure_text_mode(*a2, v26[0], v26[1], v26[2], v26[3], v26[4], v26[5], a4, &v29);
  if ( v17 != 0 )
  {
    v16 = v17;
LABEL_23:
    _close_nolock(*a2);
    return v16;
  }
  BYTE1(lpCriticalSection[*a2 >> 6][2 * (*a2 & 0x3F) + 1].LockSemaphore) = v29;
  v18 = lpCriticalSection[*a2 >> 6];
  BYTE1(v18[2 * (*a2 & 0x3F) + 1].SpinCount) ^= (BYTE1(v18[2 * (*a2 & 0x3F) + 1].SpinCount) ^ BYTE2(a4)) & 1;
  if ( (v30 & 0x48) == 0 && (a4 & 8) != 0 )
  {
    v19 = lpCriticalSection[*a2 >> 6];
    LOBYTE(v19[2 * (*a2 & 0x3F) + 1].LockSemaphore) |= 0x20u;
  }
  v20 = v26[1];
  if ( (v26[1] & 0xC0000000) == 0xC0000000 && (a4 & 1) != 0 )
  {
    CloseHandle(hObject);
    v26[1] = v20 & 0x7FFFFFFF;
    v21 = (struct _RTL_CRITICAL_SECTION_DEBUG *)create_file(
                                                  a3,
                                                  &v27,
                                                  v26[0],
                                                  v20 & 0x7FFFFFFF,
                                                  v26[2],
                                                  v26[3],
                                                  v26[4],
                                                  v26[5]);
    if ( v21 == (struct _RTL_CRITICAL_SECTION_DEBUG *)-1 )
    {
      v22 = GetLastError();
      __acrt_errno_map_os_error(v22);
      v23 = lpCriticalSection[*a2 >> 6];
      LOBYTE(v23[2 * (*a2 & 0x3F) + 1].LockSemaphore) &= ~1u;
      _free_osfhnd(*a2);
      return *_errno();
    }
    lpCriticalSection[*a2 >> 6][2 * (*a2 & 0x3F) + 1].DebugInfo = v21;
  }
  return 0;
}

// Address: 0x1002865F
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

// Address: 0x100286DC
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

// Address: 0x1002874F
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

// Address: 0x100287C0
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

// Address: 0x10028840
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

// Address: 0x100288A1
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

// Address: 0x10028902
int _getfpcontrolword()
{
  unsigned __int16 abstract_control_x87; // si
  __int16 v2; // [esp+0h] [ebp-8h]

  v2 = 0;
  if ( dword_10040AE0 >= 1 )
    v2 = _mm_getcsr();
  abstract_control_x87 = __get_abstract_control_x87(0);
  return (abstract_control_x87 | (unsigned __int16)__get_abstract_control_sse2(v2)) & 0x31F;
}

// Address: 0x10028945
int __usercall _getfpstatusword@<eax>(char a1@<fpstat>)
{
  int v1; // ecx
  int v2; // eax
  char v4; // [esp+0h] [ebp-8h]

  v1 = 0;
  v4 = 0;
  if ( dword_10040AE0 >= 1 )
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

// Address: 0x100289ED
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
  if ( dword_10040AE0 >= 1 )
  {
    v3 = _mm_getcsr() & ~__get_machine_control_sse2(799);
    result = __get_machine_control_sse2(a1);
    _mm_setcsr(result | v3);
  }
  return result;
}

// Address: 0x10028A6D
int __cdecl _setfpstatusword(int a1)
{
  int result; // eax
  int v2; // esi

  __asm { fnstenv byte ptr [ebp+var_20] }
  __get_machine_status_x87(522125343);
  result = __get_machine_status_x87(a1);
  __asm { fldenv  byte ptr [ebp+var_20] }
  if ( dword_10040AE0 >= 1 )
  {
    v2 = _mm_getcsr() & ~__get_machine_status_sse2(522125343);
    result = __get_machine_status_sse2(a1);
    _mm_setcsr(result | v2);
  }
  return result;
}

// Address: 0x10028AED
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

  if ( dword_1004139C != 0 )
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
          v9 = (const char *)&unk_100333F8;
          goto LABEL_42;
        }
        if ( a4 == 2 )
        {
          v8 = 2;
          v9 = (const char *)&unk_10033400;
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
        v9 = (const char *)&unk_10033400;
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
        v9 = (const char *)&unk_100333F8;
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
        v9 = (const char *)&unk_100333FC;
        goto LABEL_23;
      }
      v8 = 3;
LABEL_41:
      v9 = (const char *)&unk_100333FC;
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
      v9 = (const char *)&unk_100333FC;
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

// Address: 0x10028D05
int *__usercall _87except@<eax>(int a1@<ebp>, int a2, int a3, __int16 *a4)
{
  __int16 v4; // cx
  int v5; // edi
  int *result; // eax
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
  v8 = (unsigned __int16)*a4;
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
  if ( !_handle_exc(v7, (double *)(a3 + 24), v4) )
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
  result = (int *)__acrt_invoke_user_matherr(a3);
  if ( result == nullptr )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  return result;
}

// Address: 0x10028E10
long double __cdecl _frnd(long double a1)
{
  return rint(a1);
}

// Address: 0x10028E30
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

// Address: 0x10028ED0
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

// Address: 0x10028F10
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

// Address: 0x100292B0
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

// Address: 0x100292F0
unsigned __int8 *__cdecl _mbsdec(const unsigned __int8 *Start, const unsigned __int8 *Pos)
{
  return _mbsdec_l(Start, Pos, nullptr);
}

// Address: 0x10029307
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

// Address: 0x10029394
BOOL __cdecl initialize_multibyte()
{
  return __acrt_initialize_multibyte() == 0;
}

// Address: 0x100293A3
int __cdecl _strnicoll(const char *String1, const char *String2, size_t MaxCount)
{
  if ( dword_10040F84 != 0 )
    return _strnicoll_l(String1, String2, MaxCount, nullptr);
  else
    return _strnicmp(String1, String2, MaxCount);
}

// Address: 0x100293CC
int __cdecl _strnicoll_l(const char *String1, const char *String2, size_t MaxCount, _locale_t Locale)
{
  int v4; // esi
  wchar_t *v5; // ebx
  int v6; // eax
  int v8; // [esp+Ch] [ebp-10h] BYREF
  __crt_locale_pointers Localea; // [esp+10h] [ebp-Ch] BYREF
  char v10; // [esp+18h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, Locale);
  if ( MaxCount != 0 )
  {
    if ( String1 != nullptr && String2 != nullptr )
    {
      v4 = 0x7FFFFFFF;
      if ( MaxCount <= 0x7FFFFFFF )
      {
        v5 = *((wchar_t **)Localea.locinfo + 41);
        if ( v5 != nullptr )
        {
          v6 = __acrt_CompareStringA(
                 &Localea,
                 v5,
                 0x1001u,
                 (char *)String1,
                 MaxCount,
                 (char *)String2,
                 MaxCount,
                 *((_DWORD *)Localea.locinfo + 4));
          if ( v6 != 0 )
            v4 = v6 - 2;
          else
            *_errno() = 22;
        }
        else
        {
          v4 = _strnicmp_l(String1, String2, MaxCount, &Localea);
        }
      }
      else
      {
        *_errno() = 22;
        _invalid_parameter_noinfo();
      }
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter_noinfo();
      v4 = 0x7FFFFFFF;
    }
  }
  else
  {
    v4 = 0;
  }
  if ( v10 != 0 )
    *(_DWORD *)(v8 + 848) &= ~2u;
  return v4;
}

// Address: 0x10029496
size_t __cdecl _msize(void *Block)
{
  if ( Block != nullptr )
    return HeapSize(hHeap, 0, Block);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

// Address: 0x100294C9
int __cdecl fegetenv(fenv_t *Env)
{
  char v1; // fps

  Env->_Fe_ctl = _getfpcontrolword();
  Env->_Fe_stat = _getfpstatusword(v1);
  return 0;
}

// Address: 0x100294E6
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

// Address: 0x1002952F
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

// Address: 0x10029580
double __cdecl log10(double X)
{
  int v1; // ecx
  int v2; // eax
  bool v3; // zf
  char v5; // [esp+0h] [ebp-8h]

  if ( dword_1004146C != 0 )
  {
    v2 = _mm_getcsr() & 0x7F80;
    v3 = v2 == 8064;
    if ( v2 == 8064 )
      v3 = (v5 & 0x7F) == 127;
    if ( v3 )
      return start_3(X);
  }
  _fload_withFB(v1, &X);
  return start_2(X);
}

// Address: 0x100295C0
double __usercall _CIlog10@<st0>(double x@<st0>)
{
  int v1; // eax
  bool v2; // zf
  int v3; // [esp+0h] [ebp-Ch]
  char v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+4h] [ebp-8h]

  if ( dword_1004146C == 0 )
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
    _checkTOS_withFB(SLODWORD(x), HIDWORD(*(unsigned __int64 *)&x));
    start_2(v3, v5);
  }
  return x;
}

// Address: 0x10029618
long double __usercall start_2@<st0>(
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
      goto _ErrorHandling_0;
    }
    if ( (a2 & 0x80000000) == 0 )
      goto exit_2;
negative_x_0:
    result = -2.0;
    v7 = 1;
    goto _ErrorHandling_0;
  }
  if ( (a7 & 0x7FF00000) != 0 )
  {
    if ( a7 >= 0 )
    {
normal_0:
      result = __FYL2X__(result, 0.3010299956639811952);
exit_2:
      if ( dword_10041358 == 0 && a3 != 639 && (a3 & 0x20) != 0 && (a4 & 0x20) != 0 )
        return _startOneArgErrorHandling(8, 27, (int)"log10", result);
      return result;
    }
    goto negative_x_0;
  }
  if ( (a7 & 0xFFFFF) != 0 || a6 != 0 )
  {
    if ( a7 >= 0 )
      goto normal_0;
    goto negative_x_0;
  }
  result = -0.0;
  v7 = 2;
_ErrorHandling_0:
  if ( dword_10041358 == 0 )
    return _startOneArgErrorHandling(v7, 27, (int)"log10", result);
  return result;
}

// Address: 0x100296D0
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

  if ( dword_1004146C == 0 )
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
    v6 = _mm_sub_epi32((__m128i)xmmword_10039060, (__m128i)_mm_and_pd(v4, (__m128d)xmmword_10039080));
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
        *(_QWORD *)&X = *(_QWORD *)&_mm_cmpnle_pd(v11, (__m128d)xmmword_10039070).m128d_f64[0] & 0x3FF0000000000000LL;
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

// Address: 0x100297ED
int __cdecl common_xtox<unsigned long,wchar_t>(unsigned int a1, __int16 *a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int16 *v7; // esi
  __int16 *v8; // edi
  unsigned int v9; // edx
  __int16 v10; // ax
  __int16 *v12; // esi
  __int16 v13; // cx

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
    v9 = v5 % a4;
    v5 /= a4;
    v10 = v9 + 87;
    if ( v9 <= 9 )
      v10 = v9 + 48;
    *v7++ = v10;
    ++v6;
  }
  while ( v5 != 0 && v6 < a3 );
  if ( v6 < a3 )
  {
    *v7 = 0;
    v12 = v7 - 1;
    do
    {
      v13 = *v12;
      *v12-- = *v8;
      *v8++ = v13;
    }
    while ( v8 < v12 );
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

// Address: 0x1002987B
int __cdecl common_xtox_s<unsigned long,wchar_t>(
        unsigned int a1,
        __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
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
      return common_xtox<unsigned long,wchar_t>(a1, a2, a3, a4, a5);
  }
  v5 = _errno();
  v7 = 22;
LABEL_3:
  *v5 = v7;
  _invalid_parameter_noinfo();
  return v7;
}

// Address: 0x100298DA
// Microsoft VisualC universal runtime
int __cdecl unknown_libname_56(signed int a1, __int16 *a2, unsigned int a3, unsigned int a4)
{
  char v5; // [esp+0h] [ebp-4h]

  if ( a4 != 10 || (v5 = 1, a1 >= 0) )
    v5 = 0;
  return common_xtox_s<unsigned long,wchar_t>(a1, a2, a3, a4, v5);
}

// Address: 0x1002990F
int sub_1002990F()
{
  return dword_100413A0;
}

// Address: 0x10029915
void __cdecl __dcrt_lowio_initialize_console_output()
{
  hConsoleOutput = CreateFileW(L"CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
}

// Address: 0x10029934
// Microsoft VisualC universal runtime
HANDLE unknown_libname_57()
{
  HANDLE result; // eax

  result = hConsoleOutput;
  if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 )
    return (HANDLE)CloseHandle(hConsoleOutput);
  return result;
}

// Address: 0x10029950
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

// Address: 0x100299B1
int __cdecl sub_100299B1(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_100413A8;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x100299DD
int __cdecl _setmode_nolock(int a1, int a2)
{
  int v2; // edi
  unsigned int v3; // edx
  LPCRITICAL_SECTION v4; // esi
  char LockSemaphore; // al
  char v6; // bl

  v2 = a1 >> 6;
  v3 = 2 * (a1 & 0x3F);
  v4 = lpCriticalSection[a1 >> 6];
  LockSemaphore = (char)v4[v3 + 1].LockSemaphore;
  v6 = BYTE1(v4[v3 + 1].LockSemaphore);
  switch ( a2 )
  {
    case 0x4000:
      LOBYTE(v4[v3 + 1].LockSemaphore) = LockSemaphore | 0x80;
      BYTE1(lpCriticalSection[v2][v3 + 1].LockSemaphore) = 0;
      break;
    case 0x8000:
      LOBYTE(v4[v3 + 1].LockSemaphore) = LockSemaphore & 0x7F;
      break;
    case 0x10000:
    case 0x20000:
      LOBYTE(v4[v3 + 1].LockSemaphore) = LockSemaphore | 0x80;
      BYTE1(lpCriticalSection[v2][v3 + 1].LockSemaphore) = 2;
      break;
    case 0x40000:
      LOBYTE(v4[v3 + 1].LockSemaphore) = LockSemaphore | 0x80;
      BYTE1(lpCriticalSection[v2][v3 + 1].LockSemaphore) = 1;
      break;
    default:
      break;
  }
  if ( (LockSemaphore & 0x80) == 0 )
    return 0x8000;
  if ( v6 != 0 )
    return v6 != 1 ? 0x10000 : 0x40000;
  return 0x4000;
}

// Address: 0x10029AAE
int __cdecl __acrt_copy_path_to_wide_string(LPCCH lpMultiByteStr, WCHAR **a2)
{
  int v3; // edi
  UINT v4; // ebx
  int v5; // eax
  DWORD v6; // eax
  WCHAR *v7; // eax
  WCHAR *v8; // esi
  DWORD LastError; // eax
  WCHAR *v10; // eax
  int cchWideChar; // [esp+0h] [ebp-4h]

  if ( lpMultiByteStr != nullptr && a2 != nullptr )
  {
    v3 = 0;
    v4 = __acrt_AreFileApisANSI() == 0;
    *a2 = nullptr;
    v5 = MultiByteToWideChar(v4, 0, lpMultiByteStr, -1, nullptr, 0);
    cchWideChar = v5;
    if ( v5 != 0 )
    {
      v7 = (WCHAR *)_malloc_base(2 * v5);
      v8 = v7;
      if ( v7 != nullptr )
      {
        if ( MultiByteToWideChar(v4, 0, lpMultiByteStr, -1, v7, cchWideChar) != 0 )
        {
          v10 = v8;
          v8 = nullptr;
          v3 = 1;
          *a2 = v10;
        }
        else
        {
          LastError = GetLastError();
          __acrt_errno_map_os_error(LastError);
        }
      }
      _free_base(v8);
      return v3;
    }
    else
    {
      v6 = GetLastError();
      __acrt_errno_map_os_error(v6);
      return 0;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
}

// Address: 0x10029B75
int __cdecl _chsize_nolock(int FileHandle, LARGE_INTEGER a2)
{
  LARGE_INTEGER v2; // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // kr00_4
  bool v8; // of
  wchar_t *v9; // esi
  int v10; // eax
  DWORD v11; // eax
  int v12; // eax
  unsigned int v13; // kr08_4
  DWORD v14; // eax
  int v15; // edx
  int v16; // edi
  DWORD v17; // eax
  int v18; // edx
  void *osfhandle; // eax
  unsigned int *v20; // esi
  LARGE_INTEGER liDistanceToMove; // [esp+8h] [ebp-10h]
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]

  v2.LowPart = _lseeki64_nolock(FileHandle, 0, 1u);
  liDistanceToMove = v2;
  if ( (v2.HighPart & v2.LowPart) == -1 )
    return *_errno();
  LODWORD(v4) = _lseeki64_nolock(FileHandle, 0, 2u);
  if ( (HIDWORD(v4) & (unsigned int)v4) == 0xFFFFFFFF )
    return *_errno();
  v8 = __OFSUB__(a2.QuadPart, v4);
  v7 = a2.LowPart - v4;
  v5 = (unsigned __int64)(a2.QuadPart - v4) >> 32;
  v6 = v7;
  v23 = v5;
  if ( v5 < 0 || (v5 < 0) ^ v8 | (v5 == 0) && v7 == 0 )
  {
    if ( v5 >= 0 )
      goto LABEL_19;
    v17 = _lseeki64_nolock(FileHandle, a2, 0);
    if ( (v18 & v17) == 0xFFFFFFFF )
      return *_errno();
    osfhandle = (void *)_get_osfhandle(FileHandle);
    if ( SetEndOfFile(osfhandle) )
    {
LABEL_19:
      v14 = _lseeki64_nolock(FileHandle, liDistanceToMove, 0);
      if ( (v15 & v14) != 0xFFFFFFFF )
        return 0;
    }
    else
    {
      *_errno() = 13;
      v20 = __doserrno();
      *v20 = GetLastError();
    }
    return *_errno();
  }
  v9 = (wchar_t *)_calloc_base(0x1000u, 1u);
  if ( v9 == nullptr )
  {
    *_errno() = 12;
    goto LABEL_23;
  }
  v22 = _setmode_nolock(FileHandle, 0x8000);
  v10 = v23;
  while ( 1 )
  {
    if ( v10 >= 0 && (v10 > 0 || v6 >= 0x1000) )
    {
LABEL_13:
      v11 = 4096;
      goto LABEL_15;
    }
    v11 = v6;
LABEL_15:
    v12 = _write_nolock(FileHandle, v9, v11);
    if ( v12 == -1 )
      break;
    v13 = v6 - v12;
    v10 = (__PAIR64__(v23, v6) - v12) >> 32;
    v6 = v13;
    v23 = v10;
    if ( v10 > 0 )
      goto LABEL_13;
    if ( __SPAIR64__(v10, v13) <= 0 )
    {
      _setmode_nolock(FileHandle, v22);
      _free_base(v9);
      goto LABEL_19;
    }
  }
  if ( *__doserrno() == 5 )
    *_errno() = 13;
LABEL_23:
  v16 = *_errno();
  _free_base(v9);
  return v16;
}

// Address: 0x10029D06
int __cdecl InternalCompareStringA(
        struct __crt_locale_pointers *a1,
        wchar_t *a2,
        DWORD dwCmpFlags,
        char *String,
        int Count,
        const char *a6,
        int a7,
        UINT CodePage)
{
  signed int v8; // esi
  const char *v9; // eax
  signed int v10; // ebx
  int result; // eax
  UINT v12; // eax
  BYTE *LeadByte; // ecx
  unsigned __int8 v14; // dl
  BYTE *i; // ecx
  unsigned __int8 v16; // dl
  int v17; // edi
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // ecx
  void *v21; // esp
  WCHAR *v22; // eax
  WCHAR *v23; // eax
  int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  void *v27; // esp
  WCHAR *v28; // esi
  WCHAR *v29; // eax
  PCNZWCH v30; // ebx
  _DWORD v32[3]; // [esp+0h] [ebp-38h] BYREF
  wchar_t *v33; // [esp+Ch] [ebp-2Ch]
  int cchWideChar; // [esp+10h] [ebp-28h]
  LPCCH v35; // [esp+14h] [ebp-24h]
  LPCCH lpMultiByteStr; // [esp+18h] [ebp-20h]
  PCNZWCH lpString1; // [esp+1Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+20h] [ebp-18h] BYREF

  v8 = Count;
  cchWideChar = (int)a1;
  v33 = a2;
  v9 = a6;
  v35 = a6;
  lpMultiByteStr = String;
  if ( Count <= 0 )
  {
    if ( Count < -1 )
      return 0;
  }
  else
  {
    v8 = __strncnt(String, Count);
    v9 = v35;
  }
  v10 = a7;
  if ( a7 <= 0 )
  {
    if ( a7 < -1 )
      return 0;
  }
  else
  {
    v10 = __strncnt(v9, a7);
  }
  v12 = CodePage;
  if ( CodePage == 0 )
  {
    v12 = *(_DWORD *)(*(_DWORD *)cchWideChar + 8);
    CodePage = v12;
  }
  if ( v8 != 0 && v10 != 0 )
    goto LABEL_36;
  if ( v8 == v10 )
    return 2;
  if ( v10 > 1 )
    return 1;
  if ( v8 > 1 )
    return 3;
  if ( !GetCPInfo(v12, &CPInfo) )
    return 0;
  if ( v8 > 0 )
  {
    result = 2;
    if ( CPInfo.MaxCharSize >= 2 )
    {
      LeadByte = CPInfo.LeadByte;
      if ( CPInfo.LeadByte[0] != 0 )
      {
        while ( 1 )
        {
          v14 = LeadByte[1];
          if ( v14 == 0 )
            break;
          if ( (unsigned __int8)*String >= *LeadByte && (unsigned __int8)*String <= v14 )
            return result;
          LeadByte += 2;
          if ( *LeadByte == 0 )
            return 3;
        }
      }
    }
    return 3;
  }
  if ( v10 > 0 )
  {
    result = 2;
    if ( CPInfo.MaxCharSize >= 2 )
    {
      for ( i = CPInfo.LeadByte; *i != 0; i += 2 )
      {
        v16 = i[1];
        if ( v16 == 0 )
          break;
        if ( (unsigned int)*v35 >= *i && (unsigned int)*v35 <= v16 )
          return result;
      }
    }
    return 1;
  }
LABEL_36:
  v17 = 0;
  v18 = MultiByteToWideChar(CodePage, 9u, lpMultiByteStr, v8, nullptr, 0);
  cchWideChar = v18;
  if ( v18 == 0 )
    return 0;
  v19 = 2 * v18;
  if ( (2 * v18 < (unsigned int)(2 * v18 + 8) ? 2 * v18 + 8 : 0) == 0 )
  {
    v23 = nullptr;
    lpString1 = nullptr;
    goto LABEL_45;
  }
  v20 = v19 + 8;
  if ( (v19 < v19 + 8 ? v19 + 8 : 0) > 0x400 )
  {
    v22 = (WCHAR *)_malloc_base(v19 < v20 ? v20 : 0);
    lpString1 = v22;
    if ( v22 != nullptr )
    {
      *(_DWORD *)v22 = 56797;
      goto LABEL_43;
    }
LABEL_61:
    v30 = lpString1;
    goto LABEL_62;
  }
  v21 = alloca(v19 < v20 ? v20 : 0);
  v22 = (WCHAR *)v32;
  lpString1 = (PCNZWCH)v32;
  if ( v32 == nullptr )
    goto LABEL_61;
  v32[0] = 52428;
LABEL_43:
  v23 = v22 + 4;
  lpString1 = v23;
LABEL_45:
  if ( v23 == nullptr )
    goto LABEL_61;
  if ( MultiByteToWideChar(CodePage, 1u, lpMultiByteStr, v8, v23, cchWideChar) == 0 )
    goto LABEL_61;
  v24 = MultiByteToWideChar(CodePage, 9u, v35, v10, nullptr, 0);
  lpMultiByteStr = (LPCCH)v24;
  if ( v24 == 0 )
    goto LABEL_61;
  v25 = 2 * v24;
  if ( (2 * v24 < (unsigned int)(2 * v24 + 8) ? 2 * v24 + 8 : 0) == 0 )
  {
    v28 = nullptr;
    goto LABEL_56;
  }
  v26 = v25 + 8;
  if ( (v25 < v25 + 8 ? v25 + 8 : 0) > 0x400 )
  {
    v29 = (WCHAR *)_malloc_base(v25 < v26 ? v26 : 0);
    v28 = v29;
    if ( v29 != nullptr )
    {
      *(_DWORD *)v29 = 56797;
      goto LABEL_54;
    }
LABEL_59:
    v30 = lpString1;
    goto LABEL_60;
  }
  v27 = alloca(v25 < v26 ? v26 : 0);
  v28 = (WCHAR *)v32;
  if ( v32 == nullptr )
    goto LABEL_59;
  v32[0] = 52428;
LABEL_54:
  v28 += 4;
LABEL_56:
  if ( v28 == nullptr || MultiByteToWideChar(CodePage, 1u, v35, v10, v28, (int)lpMultiByteStr) == 0 )
    goto LABEL_59;
  v30 = lpString1;
  v17 = __acrt_CompareStringEx(v33, dwCmpFlags, lpString1, cchWideChar, v28, (int)lpMultiByteStr, 0, 0, 0);
LABEL_60:
  _freea_crt((int)v28);
LABEL_62:
  _freea_crt((int)v30);
  return v17;
}

// Address: 0x10029FAE
int __cdecl __acrt_CompareStringA(
        struct __crt_locale_pointers *a1,
        wchar_t *a2,
        DWORD dwCmpFlags,
        char *String,
        size_t Count,
        char *a6,
        size_t a7,
        UINT CodePage)
{
  int result; // eax
  int v9; // [esp+0h] [ebp-10h] BYREF
  struct __crt_locale_pointers v10; // [esp+4h] [ebp-Ch] BYREF
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, a1);
  result = InternalCompareStringA(&v10, a2, dwCmpFlags, String, Count, a6, a7, CodePage);
  if ( v11 != 0 )
    *(_DWORD *)(v9 + 848) &= ~2u;
  return result;
}

// Address: 0x10029FF6
unsigned int __cdecl _clearfp()
{
  char v0; // fps
  int v1; // ecx
  int v2; // edx
  unsigned int result; // eax
  int v4; // [esp+4h] [ebp-8h]

  __asm { fnclex }
  if ( dword_10040AE0 < 1 )
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

// Address: 0x1002A0E0
void __usercall _CIlog10_pentium4(double a1@<st0>)
{
  start_3(a1);
}

// Address: 0x1002A0FE
double __usercall start_3@<st0>(__m128d a1@<xmm0>, double a2)
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
    v5 = _mm_or_pd(_mm_and_pd(_mm_unpacklo_pd(a1, a1), (__m128d)xmmword_100390B0), (__m128d)xmmword_10039120);
    v6 = _mm_extract_epi16((__m128i)_mm_add_pd((__m128d)xmmword_100390D0, v5), 0) & 0x7F0;
    v7 = *(__m128d *)((char *)&xmmword_100395C0 + v6);
    v11 = *(__m128d *)((char *)&xmmword_100391B0 + v6);
    v8 = _mm_and_pd((__m128d)xmmword_100390E0, v5);
    v9 = _mm_sub_pd(v5, v8);
    v10 = _mm_sub_pd(_mm_mul_pd(v8, v7), (__m128d)xmmword_100390C0);
    v11.m128d_f64[0] = v11.m128d_f64[0] + v10.m128d_f64[0];
    v12 = _mm_mul_pd(v9, v7);
    a1 = _mm_add_pd(v12, v10);
    v13 = (_mm_extract_epi16(_mm_srli_epi64(v3, 0x34u), 0) & 0xFFF) - 1;
    if ( v13 <= 0x7FD )
      break;
    v22.m128d_f64[0] = a2;
    v23 = (__m128i)_mm_cmpeq_sd((__m128d)xmmword_10039130, v22);
    if ( _mm_extract_epi16(v23, 0) != 0 )
    {
      *(double *)v23.m128i_i64 = -INFINITY;
      v24 = 8;
CALL_LIBM_ERROR_1:
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
                          (__m128d)xmmword_10039120,
                          _mm_or_pd(_mm_and_pd(a1, (__m128d)xmmword_100390B0), (__m128d)xmmword_10039120)),
               0) != 0 )
          return INFINITY;
        v24 = 1001;
      }
      goto CALL_LIBM_ERROR_1;
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
          _mm_add_pd(v11, _mm_mul_pd(v15, (__m128d)xmmword_100390F0)),
          _mm_and_pd(v12, (__m128d)xmmword_10039100[v16]));
  v17.m128d_f64[0] = v17.m128d_f64[0] * v17.m128d_f64[0] * a1.m128d_f64[0];
  v19 = 0.001616102407499711 * a1.m128d_f64[0];
  v20 = _mm_mul_pd(
          _mm_add_pd(
            _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_10039170, a1), (__m128d)xmmword_10039180), a1),
            (__m128d)xmmword_10039190),
          v17);
  return _mm_unpackhi_pd(v20, v20).m128d_f64[0]
       + v20.m128d_f64[0]
       + v19
       + _mm_unpackhi_pd(v18, v18).m128d_f64[0]
       + v18.m128d_f64[0];
}

// Address: 0x1002A364
int __cdecl sub_1002A364(double a1)
{
  return _ceil_default(a1);
}

// Address: 0x1002A370
long double __cdecl _ceil_default(long double a1)
{
  int v1; // ebx
  long double result; // st7
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v1 = _ctrlfp();
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    if ( (unsigned int)(_sptype(SLODWORD(a1), SHIDWORD(a1)) - 1) > 2 )
    {
      return _except1((int)&savedregs, 8, 12, a1, a1 + 1.0, v1);
    }
    else
    {
      _ctrlfp();
      return a1;
    }
  }
  else
  {
    result = _frnd(a1);
    if ( a1 == result || (v1 & 0x20) != 0 )
      _ctrlfp();
    else
      return _except1((int)&savedregs, 16, 12, a1, result, v1);
  }
  return result;
}

// Address: 0x1002A42A
// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)
{
  return __imp_IsProcessorFeaturePresent(ProcessorFeature);
}

// Address: 0x1002A430
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x1002A436
_DWORD *__thiscall std::_Ref_count_obj<__ExceptionPtr>::_Ref_count_obj<__ExceptionPtr>(
        _DWORD *this,
        const struct EHExceptionRecord **a2,
        bool *a3)
{
  __ExceptionPtr *v4; // ecx

  *(this + 1) = 1;
  *(this + 2) = 1;
  v4 = (__ExceptionPtr *)(this + 3);
  *this = &std::_Ref_count_obj<__ExceptionPtr>::`vftable';
  if ( v4 != nullptr )
    __ExceptionPtr::__ExceptionPtr(v4, *a2, *a3);
  return this;
}

// Address: 0x1002A482
_DWORD *__thiscall std::_Ref_count_obj_alloc<__ExceptionPtr,_StaticAllocator<int>>::_Ref_count_obj_alloc<__ExceptionPtr,_StaticAllocator<int>>(
        _DWORD *this,
        int a2,
        const struct EHExceptionRecord **a3,
        bool *a4)
{
  __ExceptionPtr *v5; // edi

  *(this + 1) = 1;
  *(this + 2) = 1;
  v5 = (__ExceptionPtr *)(this + 3);
  *this = &std::_Ref_count_obj_alloc<__ExceptionPtr,_StaticAllocator<int>>::`vftable';
  memset(this + 3, 0, 0x54u);
  if ( v5 != nullptr )
    __ExceptionPtr::__ExceptionPtr(v5, *a3, *a4);
  return this;
}

// Address: 0x1002A4E0
_DWORD *__cdecl std::allocate_shared<__ExceptionPtr,_StaticAllocator<int>,EHExceptionRecord * &,bool>(
        _DWORD *a1,
        int a2,
        const struct EHExceptionRecord **a3,
        bool *a4)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ebx

  v4 = _StaticAlloc(0x60u);
  v5 = v4;
  if ( v4 != nullptr )
    std::_Ref_count_obj_alloc<__ExceptionPtr,_StaticAllocator<int>>::_Ref_count_obj_alloc<__ExceptionPtr,_StaticAllocator<int>>(
      v4,
      a2,
      a3,
      a4);
  *a1 = 0;
  a1[1] = 0;
  std::_Ptr_base<__ExceptionPtr>::_Reset0(v5 + 3, v5);
  return a1;
}

// Address: 0x1002A542
_DWORD *__cdecl std::make_shared<__ExceptionPtr,EHExceptionRecord * &,bool>(
        _DWORD *a1,
        const struct EHExceptionRecord **a2,
        bool *a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  v3 = operator new(0x60u);
  if ( v3 != nullptr )
    v4 = std::_Ref_count_obj<__ExceptionPtr>::_Ref_count_obj<__ExceptionPtr>(v3, a2, a3);
  else
    v4 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  std::_Ptr_base<__ExceptionPtr>::_Reset0(v4 + 3, v4);
  return a1;
}

// Address: 0x1002A592
__ExceptionPtr *__thiscall __ExceptionPtr::__ExceptionPtr(
        __ExceptionPtr *this,
        const struct EHExceptionRecord *a2,
        bool a3)
{
  const struct EHExceptionRecord *v3; // ebx
  unsigned int v5; // edi
  unsigned int NumberParameters; // eax
  _DWORD *v7; // edx
  unsigned int v8; // eax
  unsigned int magicNumber; // eax
  ThrowInfo *pThrowInfo; // edi
  int *p_nCatchableTypes; // eax
  void *v12; // eax
  void *v13; // edi
  size_t sizeOrOffset; // [esp-4h] [ebp-20h]
  _DWORD pExceptionObject[3]; // [esp+Ch] [ebp-10h] BYREF
  struct _s_CatchableType *v17; // [esp+18h] [ebp-4h]

  v3 = a2;
  v5 = 0;
  *((_BYTE *)this + 80) = a3;
  *(_DWORD *)this = a2->ExceptionCode;
  *((_DWORD *)this + 1) = a2->ExceptionFlags;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  NumberParameters = a2->NumberParameters;
  *((_DWORD *)this + 4) = NumberParameters;
  if ( NumberParameters != 0 )
  {
    v7 = (_DWORD *)((char *)this + 20);
    do
    {
      if ( v5 >= 0xF )
        break;
      ++v5;
      *v7 = *(_DWORD *)((char *)v7 + (char *)a2 - (char *)this);
      ++v7;
    }
    while ( v5 < *((_DWORD *)this + 4) );
    v3 = a2;
  }
  v8 = *((_DWORD *)this + 4);
  if ( v8 < 0xF )
    memset((char *)this + 4 * v8 + 20, 0, 4 * (15 - v8));
  if ( v3->ExceptionCode == -529697949 && v3->NumberParameters == 3 )
  {
    magicNumber = v3->params.magicNumber;
    if ( magicNumber == 429065504 || magicNumber == 429065505 || magicNumber == 429065506 || magicNumber == 26820608 )
    {
      *((_DWORD *)this + 6) = 0;
      pThrowInfo = v3->params.pThrowInfo;
      if ( v3->params.pExceptionObject == nullptr
        || pThrowInfo == nullptr
        || (p_nCatchableTypes = &pThrowInfo->pCatchableTypeArray->nCatchableTypes) == nullptr
        || *p_nCatchableTypes <= 0 )
      {
        terminate();
      }
      *((_DWORD *)this + 7) = EncodePointer(v3->params.pThrowInfo);
      v17 = pThrowInfo->pCatchableTypeArray->arrayOfCatchableTypes[0];
      sizeOrOffset = v17->sizeOrOffset;
      if ( a3 )
        v12 = malloc(sizeOrOffset);
      else
        v12 = _StaticAlloc(sizeOrOffset);
      v13 = v12;
      if ( v12 == nullptr )
      {
        sub_1000B59E(pExceptionObject);
        _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
      }
      __ExceptionPtr::_CallCopyCtor(this, v12, v3->params.pExceptionObject, v17->sizeOrOffset, v17);
      *((_DWORD *)this + 6) = v13;
    }
  }
  return this;
}

// Address: 0x1002A6AC
void __thiscall __ExceptionPtr::~__ExceptionPtr(__ExceptionPtr *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int *v5; // ecx
  _BYTE *v6; // eax
  int v7; // ecx

  if ( *((_BYTE *)this + 80) != 0 && *(_DWORD *)this == -529697949 && *((_DWORD *)this + 4) == 3 )
  {
    v2 = *((_DWORD *)this + 5);
    if ( v2 == 429065504 || v2 == 429065505 || v2 == 429065506 || v2 == 26820608 )
    {
      v3 = DecodePointer(*((PVOID *)this + 7));
      v4 = v3;
      if ( v3 == nullptr )
        terminate();
      v5 = *((int **)this + 6);
      if ( v5 != nullptr )
      {
        v6 = *(_BYTE **)(v3[3] + 4);
        if ( v4[1] != 0 )
        {
          sub_1000EC04((int)v5, v4[1]);
        }
        else if ( (*v6 & 8) != 0 )
        {
          v7 = *v5;
          if ( v7 != 0 )
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v7 + 8))(*(_DWORD *)(*(_DWORD *)v7 + 8), v7);
        }
      }
      j___free_base(*((void **)this + 6));
    }
  }
}

// Address: 0x1002A76F
// Microsoft VisualC 14/net runtime
_DWORD *__thiscall unknown_libname_9(_DWORD *Block, char a2)
{
  *Block = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000CA99(Block);
  return Block;
}

// Address: 0x1002A792
void __thiscall __ExceptionPtr::_CallCopyCtor(
        __ExceptionPtr *this,
        void *a2,
        _DWORD *Src,
        size_t Size,
        const struct _s_CatchableType *const a5)
{
  if ( (a5->properties & 1) != 0 || a5->copyFunction == nullptr )
  {
    memmove_0(a2, Src, Size);
    if ( (a5->properties & 8) != 0 && *Src != 0 )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*Src + 4))(*(_DWORD *)(*(_DWORD *)*Src + 4), *Src);
  }
  else if ( (a5->properties & 4) != 0 )
  {
    __AdjustPointer((int)Src, &a5->thisDisplacement.mdisp);
    sub_1000EC04((int)a2, (int)a5->copyFunction);
  }
  else
  {
    __AdjustPointer((int)Src, &a5->thisDisplacement.mdisp);
    sub_1000EC04((int)a2, (int)a5->copyFunction);
  }
}

// Address: 0x1002A825
_DWORD *__cdecl __ExceptionPtr::_CopyException(_DWORD *a1, _DWORD *a2, _BYTE *a3, char a4)
{
  _BYTE *v4; // eax
  _DWORD v6[5]; // [esp+10h] [ebp-3Ch] BYREF
  int v7; // [esp+24h] [ebp-28h]
  _DWORD *v8; // [esp+28h] [ebp-24h]
  _BYTE *v9; // [esp+2Ch] [ebp-20h]
  int v10; // [esp+30h] [ebp-1Ch]
  const struct EHExceptionRecord *v11; // [esp+34h] [ebp-18h] BYREF
  char v12; // [esp+3Ah] [ebp-12h] BYREF
  bool v13[13]; // [esp+3Bh] [ebp-11h] BYREF
  int v14; // [esp+48h] [ebp-4h]

  v11 = (const struct EHExceptionRecord *)v6;
  v4 = a3;
  v10 = 0;
  v14 = 0;
  v6[0] = -529697949;
  v6[1] = 1;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 3;
  v7 = 429065504;
  v8 = a2;
  if ( a3 != nullptr && (*a3 & 0x10) != 0 )
    v4 = *(_BYTE **)(*(_DWORD *)(*a2 - 4) + 24);
  v9 = v4;
  if ( v4 != nullptr && (*v4 & 8) != 0 )
    v7 = 26820608;
  if ( a4 != 0 )
  {
    v13[0] = true;
    std::make_shared<__ExceptionPtr,EHExceptionRecord * &,bool>(a1, &v11, v13);
  }
  else
  {
    v13[0] = false;
    std::allocate_shared<__ExceptionPtr,_StaticAllocator<int>,EHExceptionRecord * &,bool>(a1, (int)&v12, &v11, v13);
  }
  return a1;
}

// Address: 0x1002A8FA
// Microsoft VisualC 14/net runtime
void __thiscall unknown_libname_10(void *this)
{
  if ( this != nullptr )
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, 1);
}

// Address: 0x1002A917
int __thiscall std::_Ref_count_obj_alloc<__ExceptionPtr,_StaticAllocator<int>>::_Delete_this(void *this)
{
  return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 8))(this, 0);
}

// Address: 0x1002A930
// Microsoft VisualC 14/net runtime
void __thiscall unknown_libname_11(int this)
{
  __ExceptionPtr::~__ExceptionPtr((__ExceptionPtr *)(this + 12));
}

// Address: 0x1002A938
_DWORD *__cdecl __ExceptionPtr::_InitBadAllocException(_DWORD *a1)
{
  void **v2; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD v3[6]; // [esp+14h] [ebp-18h] BYREF

  v3[0] = "bad allocation";
  v3[2] = 0;
  v3[1] = 0;
  v2 = &std::bad_alloc::`vftable';
  v3[5] = 0;
  __ExceptionPtr::_CopyException(a1, &v2, &_TI2_AVbad_alloc_std__, 0);
  v2 = &std::exception::`vftable';
  __std_exception_destroy((int)v3);
  return a1;
}

// Address: 0x1002A98B
volatile signed __int32 *__thiscall std::_Ptr_base<__ExceptionPtr>::_Reset0(
        volatile signed __int32 **this,
        volatile signed __int32 *a2,
        volatile signed __int32 *a3)
{
  volatile signed __int32 *v4; // ecx

  v4 = *(this + 1);
  if ( v4 != nullptr )
    sub_10005660(v4);
  *(this + 1) = a3;
  *this = a2;
  return a2;
}

// Address: 0x1002A9AD
void *__cdecl _StaticAlloc(unsigned int a1)
{
  void *result; // eax
  void *v2; // [esp+4h] [ebp-4h] BYREF

  v2 = (char *)&unk_1004142C - dword_1003FA40;
  result = std::align(8u, a1, &v2, &dword_1003FA40);
  if ( result == nullptr )
    terminate();
  dword_1003FA40 -= a1;
  return result;
}

// Address: 0x1002A9EC
unsigned int __cdecl std::align(unsigned int a1, unsigned int a2, void **a3, unsigned int *a4)
{
  unsigned int v4; // edx

  v4 = (unsigned int)*a3 & (a1 - 1);
  if ( v4 != 0 )
    v4 = a1 - v4;
  if ( *a4 < v4 || *a4 - v4 < a2 )
    return 0;
  *a3 = (char *)*a3 + v4;
  *a4 -= v4;
  return (unsigned int)*a3;
}

// Address: 0x1002AA30
unsigned __int64 __stdcall _aullrem(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  bool v7; // cf
  int v8; // ecx
  unsigned __int64 v9; // rax

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
    v8 = HIDWORD(a2) * (v6 / v5);
    v9 = (unsigned int)a2 * (unsigned __int64)(unsigned int)(v6 / v5);
    v7 = __CFADD__(v8, HIDWORD(v9));
    HIDWORD(v9) += v8;
    if ( v7 || v9 > a1 )
      v9 -= a2;
    return a1 - v9;
  }
  else
  {
    LODWORD(v2) = a1;
    HIDWORD(v2) = HIDWORD(a1) % (unsigned int)a2;
    return v2 % (unsigned int)a2;
  }
}

// Address: 0x1002AAB0
int __usercall _ftol2_sse@<eax>(double a1@<st0>)
{
  int result; // eax
  int v2; // edx
  float v3; // [esp+0h] [ebp-24h]
  int v4; // [esp+18h] [ebp-Ch]

  if ( dword_10040AE0 != 0 )
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

// Address: 0x1002AB70
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

// Address: 0x1002ABC0
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000) != 0
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x1002AC80
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

// Address: 0x1002ACC0
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

// Address: 0x1002ADA0
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

// Address: 0x1002AE50
unsigned __int64 __stdcall _allrem(unsigned __int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // eax
  unsigned __int64 v4; // rtt
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  int v9; // ecx
  bool v10; // cf
  unsigned __int64 v11; // rax

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
    v3 = -HIDWORD(a2) - ((_DWORD)a2 != 0);
    HIDWORD(a2) = v3;
    LODWORD(a2) = -(int)a2;
  }
  if ( v3 == 0 )
  {
    LODWORD(v4) = a1;
    HIDWORD(v4) = HIDWORD(a1) % (unsigned int)a2;
    result = v4 % (unsigned int)a2;
    if ( v2 - 1 < 0 )
      return result;
    return -(__int64)result;
  }
  v6 = __PAIR64__(v3, a2);
  v7 = a1;
  do
  {
    v6 >>= 1;
    v7 >>= 1;
  }
  while ( HIDWORD(v6) != 0 );
  v8 = v7 / (unsigned int)v6;
  v9 = HIDWORD(a2) * v8;
  v11 = (unsigned int)a2 * (unsigned __int64)v8;
  v10 = __CFADD__(v9, HIDWORD(v11));
  HIDWORD(v11) += v9;
  if ( v10 || v11 > a1 )
    v11 -= a2;
  result = v11 - a1;
  if ( v2 - 1 < 0 )
    return -(__int64)result;
  return result;
}

// Address: 0x1002AF10
_DWORD *__cdecl _SEH_prolog4_GS(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-14h] [ebp-14h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = _except_handler4;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1002AF59
void _SEH_epilog4_GS()
{
  ;
}

// Address: 0x1002AF70
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

// Address: 0x1002AF90
unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}

// Address: 0x1002AFB0
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

  if ( dword_10040AE0 != 0 )
  {
    v2 = (char *)Str;
    if ( (unsigned int)dword_10040AE0 > 1 )
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

// Address: 0x1002B0F0
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

  if ( dword_10040AE0 != 0 )
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
      goto main_loop_0;
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
main_loop_0:
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

// Address: 0x1002B21B
wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  __m128i v3; // xmm2
  unsigned int v4; // eax
  int v6; // [esp-24h] [ebp-30h]

  if ( dword_10040AE0 >= 1 )
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

// Address: 0x1002B475
void nullsub_3()
{
  ;
}

// Address: 0x1002B4A5
void nullsub_4()
{
  ;
}

// Address: 0x1002B4D5
void nullsub_5()
{
  ;
}

// Address: 0x1002B505
void nullsub_6()
{
  ;
}

// Address: 0x1002B62D
void nullsub_7()
{
  ;
}

// Address: 0x1002B69D
void nullsub_8()
{
  ;
}

// Address: 0x1002B705
void nullsub_9()
{
  ;
}

// Address: 0x1002B70B
void nullsub_10()
{
  ;
}

// Address: 0x1002B745
void nullsub_11()
{
  ;
}

// Address: 0x1002B74B
void nullsub_12()
{
  ;
}

// Address: 0x1002B80D
void nullsub_13()
{
  ;
}

// Address: 0x1002B813
void nullsub_14()
{
  ;
}

// Address: 0x1002B845
void nullsub_15()
{
  ;
}

// Address: 0x1002B84B
void nullsub_16()
{
  ;
}

// Address: 0x1002B8BD
void nullsub_17()
{
  ;
}

// Address: 0x1002B8DD
void nullsub_18()
{
  ;
}

// Address: 0x1002B905
void nullsub_19()
{
  ;
}

// Address: 0x1002B90B
void nullsub_20()
{
  ;
}

// Address: 0x1002B9D7
void nullsub_21()
{
  ;
}

// Address: 0x1002BA27
void nullsub_22()
{
  ;
}

// Address: 0x1002BA77
void nullsub_23()
{
  ;
}

// Address: 0x1002BAD0
void nullsub_24()
{
  ;
}

// Address: 0x1002BAD6
void nullsub_25()
{
  ;
}

// Address: 0x1002BB30
void nullsub_26()
{
  ;
}

// Address: 0x1002BB90
void nullsub_27()
{
  ;
}

// Address: 0x1002BBF0
void nullsub_28()
{
  ;
}

// Address: 0x1002BCC5
void nullsub_29()
{
  ;
}

// Address: 0x1002BCCB
void nullsub_30()
{
  ;
}

// Address: 0x1002BF45
void nullsub_31()
{
  ;
}

// Address: 0x1002BF4B
void nullsub_32()
{
  ;
}

// Address: 0x1002C0E0
void __cdecl nullsub_1()
{
  ;
}

// Address: 0x1002C0E1
void sub_1002C0E1()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( _InterlockedExchangeAdd(&dword_1003F000, 0xFFFFFFFF) < 0 )
  {
    v0 = &stru_10040280;
    do
      _Mtxdst(v0++);
    while ( (int)v0 < (int)&unk_10040340 );
  }
}

// Address: 0x1002C0EB
void __cdecl sub_1002C0EB()
{
  sub_10003C50(byte_10040348);
}

// Address: 0x1002C0F5
void __cdecl sub_1002C0F5()
{
  sub_100035A0(dword_10040398);
}

// Address: 0x1002C0FF
void sub_1002C0FF()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( _InterlockedExchangeAdd(&dword_1003F000, 0xFFFFFFFF) < 0 )
  {
    v0 = &stru_10040280;
    do
      _Mtxdst(v0++);
    while ( (int)v0 < (int)&unk_10040340 );
  }
}

// Address: 0x1002C109
void __cdecl sub_1002C109()
{
  std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t((std::_Fac_tidy_reg_t *)&unk_1004041C);
}

// Address: 0x1002C113
void __cdecl sub_1002C113()
{
  sub_10001DF0(&dword_10040414);
}

// Address: 0x1002C11D
void __cdecl sub_1002C11D()
{
  _Init_atexit::~_Init_atexit((_Init_atexit *)&unk_100404A1);
}

// Address: 0x1002C127
void __cdecl sub_1002C127()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( _InterlockedExchangeAdd(&dword_1003F000, 0xFFFFFFFF) < 0 )
  {
    v0 = &stru_10040280;
    do
      _Mtxdst(v0++);
    while ( (int)v0 < (int)&unk_10040340 );
  }
}

// Address: 0x1002C131
void __cdecl sub_1002C131()
{
  void *v0; // esi

  v0 = dword_10040B00;
  if ( dword_10040B00 != nullptr )
  {
    sub_1000DC9A((char *)dword_10040B00);
    sub_1000CA99(v0);
    dword_10040B00 = nullptr;
  }
}

// Address: 0x1002C13B
void __cdecl sub_1002C13B()
{
  if ( dword_100413B4 != 0 )
    sub_10005660((volatile signed __int32 *)dword_100413B4);
}

