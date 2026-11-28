// Decompiled from hsewnds.dll (ClassM_3.0.500\ClassM_Client_unpacked\hsewnds.dll)

// Address: 0x10001000
// attributes: thunk
int sub_10001000()
{
  return sub_10006790();
}

// Address: 0x10001010
// attributes: thunk
int sub_10001010()
{
  return sub_10006790();
}

// Address: 0x10001020
// attributes: thunk
int sub_10001020()
{
  return sub_10006CA0();
}

// Address: 0x10001030
// attributes: thunk
int sub_10001030()
{
  return sub_10006CA0();
}

// Address: 0x10001040
// attributes: thunk
int sub_10001040()
{
  return sub_10006CA0();
}

// Address: 0x10001050
// attributes: thunk
int sub_10001050()
{
  return sub_10006CA0();
}

// Address: 0x10001060
// attributes: thunk
int sub_10001060()
{
  return sub_10003C50();
}

// Address: 0x10001070
__int32 sub_10001070()
{
  __int32 result; // eax
  struct WSAData WSAData; // [esp+0h] [ebp-198h] BYREF

  atexit(sub_1001E8C0);
  result = _InterlockedIncrement(&dword_1002FEA4);
  if ( result == 1 )
    return _InterlockedExchange(&dword_1002FEA8, WSAStartup(2u, &WSAData));
  return result;
}

// Address: 0x100010D0
int sub_100010D0()
{
  int result; // eax

  result = dword_1002FE80;
  if ( dword_1002FE80 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002FE80);
    if ( dword_1002FE80 == -1 )
      return _Init_thread_footer(&dword_1002FE80);
  }
  return result;
}

// Address: 0x10001110
int sub_10001110()
{
  int result; // eax

  result = dword_1002FEA0;
  if ( dword_1002FEA0 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002FEA0);
    if ( dword_1002FEA0 == -1 )
      return _Init_thread_footer(&dword_1002FEA0);
  }
  return result;
}

// Address: 0x10001150
int sub_10001150()
{
  int result; // eax

  result = dword_1002FEA0;
  if ( dword_1002FEA0 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002FEA0);
    if ( dword_1002FEA0 == -1 )
      return _Init_thread_footer(&dword_1002FEA0);
  }
  return result;
}

// Address: 0x10001190
int sub_10001190()
{
  int result; // eax

  result = dword_1002FEA0;
  if ( dword_1002FEA0 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002FEA0);
    if ( dword_1002FEA0 == -1 )
      return _Init_thread_footer(&dword_1002FEA0);
  }
  return result;
}

// Address: 0x100011D0
int sub_100011D0()
{
  dword_1002FF3C = sub_10003CE0();
  return atexit(sub_1001E8F0);
}

// Address: 0x100011F0
int sub_100011F0()
{
  dword_1002FF34 = sub_10003CE0();
  return atexit(sub_1001E8E0);
}

// Address: 0x10001210
int sub_10001210()
{
  sub_10004520();
  return atexit(_guard_check_icall_nop`...');
}

// Address: 0x10001230
int sub_10001230()
{
  sub_10004530();
  return atexit(_guard_check_icall_nop`...');
}

// Address: 0x10001250
int sub_10001250()
{
  sub_10004540();
  return atexit(_guard_check_icall_nop`...');
}

// Address: 0x10001270
// attributes: thunk
int sub_10001270()
{
  return sub_10006790();
}

// Address: 0x10001280
// attributes: thunk
int sub_10001280()
{
  return sub_10006790();
}

// Address: 0x10001290
// attributes: thunk
int sub_10001290()
{
  return sub_10006CA0();
}

// Address: 0x100012A0
// attributes: thunk
int sub_100012A0()
{
  return sub_10006CA0();
}

// Address: 0x100012B0
// attributes: thunk
int sub_100012B0()
{
  return sub_10006CA0();
}

// Address: 0x100012C0
// attributes: thunk
int sub_100012C0()
{
  return sub_10006CA0();
}

// Address: 0x100012D0
// attributes: thunk
int sub_100012D0()
{
  return sub_10003C50();
}

// Address: 0x100012E0
__int32 sub_100012E0()
{
  __int32 result; // eax
  struct WSAData WSAData; // [esp+0h] [ebp-198h] BYREF

  atexit(sub_1001E940);
  result = _InterlockedIncrement(&dword_1002FEA4);
  if ( result == 1 )
    return _InterlockedExchange(&dword_1002FEA8, WSAStartup(2u, &WSAData));
  return result;
}

// Address: 0x10001340
int sub_10001340()
{
  int result; // eax

  result = dword_1002FE80;
  if ( dword_1002FE80 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002FE80);
    if ( dword_1002FE80 == -1 )
      return _Init_thread_footer(&dword_1002FE80);
  }
  return result;
}

// Address: 0x10001380
int sub_10001380()
{
  int result; // eax

  result = dword_1002FEA0;
  if ( dword_1002FEA0 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002FEA0);
    if ( dword_1002FEA0 == -1 )
      return _Init_thread_footer(&dword_1002FEA0);
  }
  return result;
}

// Address: 0x100013C0
int sub_100013C0()
{
  int result; // eax

  result = dword_1002FEA0;
  if ( dword_1002FEA0 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002FEA0);
    if ( dword_1002FEA0 == -1 )
      return _Init_thread_footer(&dword_1002FEA0);
  }
  return result;
}

// Address: 0x10001400
int sub_10001400()
{
  int result; // eax

  result = dword_1002FEA0;
  if ( dword_1002FEA0 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002FEA0);
    if ( dword_1002FEA0 == -1 )
      return _Init_thread_footer(&dword_1002FEA0);
  }
  return result;
}

// Address: 0x10001440
void sub_10001440()
{
  _BYTE v0[4]; // [esp+0h] [ebp-8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v0, 2);
  ++dword_1002F064;
  std::_Lockit::~_Lockit((std::_Lockit *)v0);
}

// Address: 0x10001476
int sub_10001476()
{
  sub_10005777(&unk_1002F028);
  return atexit(sub_1001E954);
}

// Address: 0x10001490
int sub_10001490()
{
  return atexit(sub_1001E960);
}

// Address: 0x1000149C
int sub_1000149C()
{
  return atexit(sub_1001E96C);
}

// Address: 0x100014A8
int sub_100014A8()
{
  return atexit(sub_1001E976);
}

// Address: 0x100014B4
int sub_100014B4()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_1002F0D0);
  return atexit(sub_1001E980);
}

// Address: 0x100014CA
int sub_100014CA()
{
  return atexit(sub_1001E98A);
}

// Address: 0x100014D6
int sub_100014D6()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_1002F1E4);
  return atexit(sub_1001E994);
}

// Address: 0x100014F0
int sub_100014F0()
{
  int result; // eax

  result = dword_1002F334;
  if ( dword_1002F334 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002F334);
    if ( dword_1002F334 == -1 )
    {
      off_1002E094 = &off_1002E090;
      off_1002E090 = &boost::system::error_category::std_category::`vftable';
      off_1002E098 = off_1002E08C;
      off_1002E08C[0] = &boost::system::`anonymous namespace'::generic_error_category::`vftable';
      atexit(sub_1001E9A0);
      result = _Init_thread_footer(&dword_1002F334);
    }
  }
  dword_1002F310 = (int)off_1002E08C;
  return result;
}

// Address: 0x100015B0
int sub_100015B0()
{
  int result; // eax

  result = dword_1002F330;
  if ( dword_1002F330 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002F330);
    if ( dword_1002F330 == -1 )
    {
      off_1002E084 = &off_1002E080;
      off_1002E080 = &boost::system::error_category::std_category::`vftable';
      off_1002E088 = off_1002E07C;
      off_1002E07C[0] = &boost::system::`anonymous namespace'::system_error_category::`vftable';
      atexit(sub_1001E9C0);
      result = _Init_thread_footer(&dword_1002F330);
    }
  }
  dword_1002F30C = (int)off_1002E07C;
  return result;
}

// Address: 0x10001670
int sub_10001670()
{
  int result; // eax

  result = dword_1002F334;
  if ( dword_1002F334 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    result = _Init_thread_header(&dword_1002F334);
    if ( dword_1002F334 == -1 )
    {
      off_1002E094 = &off_1002E090;
      off_1002E090 = &boost::system::error_category::std_category::`vftable';
      off_1002E098 = off_1002E08C;
      off_1002E08C[0] = &boost::system::`anonymous namespace'::generic_error_category::`vftable';
      atexit(sub_1001E9A0);
      result = _Init_thread_footer(&dword_1002F334);
    }
  }
  dword_1002F300 = (int)off_1002E08C;
  return result;
}

// Address: 0x10001730
_DWORD *sub_10001730()
{
  dword_1002F304[0] = 0;
  dword_1002F304[1] = sub_10006CA0();
  return dword_1002F304;
}

// Address: 0x10001740
int sub_10001740()
{
  return sub_10007430(&unk_1002F343);
}

// Address: 0x10001750
int sub_10001750()
{
  sub_1000A300(&dword_1002F350);
  return atexit(__std_execution_wake_by_address_all);
}

// Address: 0x10001770
int sub_10001770()
{
  sub_1000A560(&dword_1002F358);
  return atexit(sub_1001EAF0);
}

// Address: 0x100017D0
void __stdcall sub_100017D0(_DWORD *Block, unsigned int a2)
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

// Address: 0x10001830
_DWORD *__thiscall sub_10001830(_DWORD *this)
{
  if ( *(this + 5) < 8u )
    return this;
  else
    return (_DWORD *)*this;
}

// Address: 0x10001840
_DWORD *__thiscall sub_10001840(_DWORD *this, _DWORD *a2, unsigned int a3, unsigned int a4)
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
    sub_10005A78("invalid string position");
  v8 = a4;
  v9 = v7 - a3;
  if ( a4 > v9 )
    v8 = v9;
  if ( this != a2 )
  {
    if ( v8 > 0x7FFFFFFE )
      sub_10005A58("string too long");
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
      sub_10001B70(v8, *(this + 4));
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
    sub_10005A78("invalid string position");
  *(this + 4) = v10;
  if ( *(this + 5) < 8u )
    v11 = this;
  else
    v11 = (_DWORD *)*this;
  *((_WORD *)v11 + v10) = 0;
  sub_10001A60(0, a3);
  return this;
}

// Address: 0x10001960
_DWORD *__thiscall sub_10001960(_DWORD *this, _BYTE *Src, unsigned int a3)
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
        return sub_10001840(this, this, (Src - (_BYTE *)v7) >> 1, a3);
      }
    }
  }
  if ( a3 > 0x7FFFFFFE )
    sub_10005A58("string too long");
  if ( *(this + 5) < a3 )
  {
    sub_10001B70(a3, *(this + 4));
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

// Address: 0x10001A60
_DWORD *__thiscall sub_10001A60(_DWORD *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  _DWORD *v6; // eax
  unsigned int v7; // edi
  bool v8; // cf

  v4 = *(this + 4);
  if ( v4 < a2 )
    sub_10005A78("invalid string position");
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

// Address: 0x10001B10
void *__stdcall sub_10001B10(unsigned int a1)
{
  size_t v2; // eax
  void *v3; // eax

  if ( a1 == 0 )
    return nullptr;
  if ( a1 > 0x7FFFFFFF )
    sub_1000CD20();
  v2 = 2 * a1;
  if ( 2 * a1 < 0x1000 )
    return operator new(v2);
  if ( v2 + 35 < v2 )
    sub_1000CD20();
  v3 = operator new(v2 + 35);
  *(_DWORD *)((((unsigned int)v3 + 35) & 0xFFFFFFE0) - 4) = v3;
  return (void *)(((unsigned int)v3 + 35) & 0xFFFFFFE0);
}

// Address: 0x10001B70
unsigned int __thiscall sub_10001B70(unsigned int *this, unsigned int a2, unsigned int a3)
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
      sub_1000CD20();
    v9 = 2 * v7;
    if ( v9 < 0x1000 )
    {
      v8 = operator new(v9);
    }
    else
    {
      if ( v9 + 35 < v9 )
        sub_1000CD20();
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
    sub_100017D0((_DWORD *)*v3, v12 + 1);
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

// Address: 0x10001D20
_BYTE *__thiscall sub_10001D20(_BYTE *this, int a2)
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
      sub_10001F00();
  }
  *(this + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2 + 12) == 0;
  return this;
}

// Address: 0x10001DB0
int __thiscall sub_10001DB0(int *this)
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

// Address: 0x10001E00
int __thiscall sub_10001E00(_BYTE *this)
{
  int result; // eax
  char *v3; // ecx
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
      v4 = *((_DWORD *)v3 + 3) | 4;
      if ( *((_DWORD *)v3 + 14) != 0 )
        v4 = *((_DWORD *)v3 + 3);
      return sub_10003050(v4 | 4, 0);
    }
  }
  return result;
}

// Address: 0x10001E90
int __thiscall sub_10001E90(_BYTE **this)
{
  int result; // eax
  int v3; // ecx

  if ( (unsigned __int8)j____uncaught_exception() == 0 )
    sub_10001E00(*this);
  result = *(_DWORD *)(*(_DWORD *)*this + 4);
  v3 = *(_DWORD *)&(*this)[result + 56];
  if ( v3 != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  return result;
}

// Address: 0x10001F00
char *__thiscall sub_10001F00(char *this)
{
  int v2; // ecx
  char *v3; // ecx
  int v4; // edx
  int v5; // ecx
  _BYTE *v7; // [esp+8h] [ebp-18h] BYREF
  char v8; // [esp+Ch] [ebp-14h]
  int v9; // [esp+1Ch] [ebp-4h]

  if ( *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 56) != 0 )
  {
    sub_10001D20(&v7, (int)this);
    v9 = 0;
    if ( v8 != 0 )
    {
      v2 = *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 56);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2) == -1 )
      {
        v3 = this + *(_DWORD *)(*(_DWORD *)this + 4);
        v4 = *((_DWORD *)v3 + 3) | 4;
        if ( *((_DWORD *)v3 + 14) != 0 )
          v4 = *((_DWORD *)v3 + 3);
        sub_10003050(v4 | 4, 0);
      }
    }
    v9 = 1;
    if ( (unsigned __int8)j____uncaught_exception() == 0 )
      sub_10001E00(v7);
    LOBYTE(v9) = 2;
    v5 = *(_DWORD *)&v7[*(_DWORD *)(*(_DWORD *)v7 + 4) + 56];
    if ( v5 != 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  }
  return this;
}

// Address: 0x10001FD0
// Microsoft VisualC 14/net runtime
int __thiscall unknown_libname_1(_DWORD *this)
{
  *this = &std::exception::`vftable';
  return __std_exception_destroy(this + 1);
}

// Address: 0x10001FF0
char *__thiscall sub_10001FF0(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x10002020
char *__thiscall sub_10002020(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::bad_cast::`vftable';
  return this;
}

// Address: 0x10002060
void __thiscall sub_10002060(_DWORD *this)
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

// Address: 0x100020B0
char *__thiscall sub_100020B0(char *this, int a2)
{
  int v4; // [esp+4h] [ebp-Ch] BYREF
  char v5; // [esp+8h] [ebp-8h]

  v4 = a2;
  v5 = 1;
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(&v4, this + 4);
  return this;
}

// Address: 0x10002100
_DWORD *__thiscall sub_10002100(_DWORD *this, _BYTE *Src, size_t Size)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  size_t v8; // edx
  size_t v9; // ecx
  size_t v10; // edi
  _DWORD *v11; // edx
  bool v12; // cf

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
          return (_DWORD *)sub_10002230((int)this, Src - (_BYTE *)this, Size);
        else
          return (_DWORD *)sub_10002230((int)this, (int)&Src[-*this], Size);
      }
    }
  }
  v8 = *(this + 4);
  v9 = Size;
  if ( ~v8 <= Size )
    sub_10005A58("string too long");
  v10 = v8 + Size;
  if ( Size == 0 )
    return this;
  if ( v10 == -1 )
    sub_10005A58("string too long");
  if ( *(this + 5) < v10 )
  {
    sub_10002A00(v8 + Size, v8);
    v9 = Size;
    if ( v10 != 0 )
    {
LABEL_18:
      if ( *(this + 5) < 0x10u )
        v11 = this;
      else
        v11 = (_DWORD *)*this;
      if ( v9 != 0 )
        memmove_0((char *)v11 + *(this + 4), Src, v9);
      v12 = *(this + 5) < 0x10u;
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
  if ( *(this + 5) < 0x10u )
    *(_BYTE *)this = 0;
  else
    *(_BYTE *)*this = 0;
  return this;
}

// Address: 0x10002230
_DWORD *__thiscall sub_10002230(_DWORD *this, _DWORD *a2, unsigned int a3, size_t Size)
{
  _DWORD *v4; // ebx
  unsigned int v6; // eax
  size_t v7; // edx
  size_t v8; // eax
  size_t v9; // ecx
  size_t v10; // edi
  _BYTE *v11; // edx
  bool v13; // cf
  size_t Sizea; // [esp+1Ch] [ebp+10h]

  v4 = a2;
  v6 = a2[4];
  if ( v6 < a3 )
    sub_10005A78("invalid string position");
  v7 = *(this + 4);
  v8 = v6 - a3;
  v9 = Size;
  if ( Size > v8 )
    v9 = v8;
  Sizea = v9;
  if ( ~v7 <= v9 )
    sub_10005A58("string too long");
  v10 = v7 + v9;
  if ( v9 == 0 )
    return this;
  if ( v10 == -1 )
    sub_10005A58("string too long");
  if ( *(this + 5) < v10 )
  {
    sub_10002A00(v7 + v9, v7);
    v9 = Sizea;
    if ( v10 != 0 )
    {
LABEL_9:
      if ( a2[5] >= 0x10u )
        v4 = (_DWORD *)*a2;
      if ( *(this + 5) < 0x10u )
        v11 = this;
      else
        v11 = (_BYTE *)*this;
      if ( v9 != 0 )
        memmove_0(&v11[*(this + 4)], (char *)v4 + a3, v9);
      v13 = *(this + 5) < 0x10u;
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
  if ( *(this + 5) < 0x10u )
    *(_BYTE *)this = 0;
  else
    *(_BYTE *)*this = 0;
  return this;
}

// Address: 0x10002330
int __thiscall sub_10002330(_DWORD **this, int a2)
{
  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 1) + 8))(*(this + 1), a2, *this, 0);
  return a2;
}

// Address: 0x10002360
int __thiscall sub_10002360(_DWORD *this, _DWORD *Src)
{
  int result; // eax
  bool v4; // cf

  if ( Src[5] >= 0x10u )
  {
    if ( this != nullptr )
      *this = *Src;
    *Src = 0;
  }
  else if ( Src[4] != -1 )
  {
    memmove(this, Src, Src[4] + 1);
  }
  *(this + 4) = Src[4];
  result = Src[5];
  *(this + 5) = result;
  Src[5] = 15;
  v4 = Src[5] < 0x10u;
  Src[4] = 0;
  if ( v4 )
  {
    *(_BYTE *)Src = 0;
  }
  else
  {
    result = *Src;
    *(_BYTE *)*Src = 0;
  }
  return result;
}

// Address: 0x100023D0
_DWORD *__thiscall sub_100023D0(_DWORD *this, _DWORD *Src)
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

// Address: 0x10002450
_DWORD *__cdecl sub_10002450(_DWORD *a1, int a2, int a3, _DWORD *Src, int a5, int a6, int a7, int a8, unsigned int a9)
{
  _DWORD *v9; // eax
  void *v10; // ecx
  unsigned int v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *Block; // [esp+8h] [ebp-2Ch] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-18h]
  int v17; // [esp+20h] [ebp-14h]
  int v18; // [esp+30h] [ebp-4h]

  v17 = 0;
  v18 = 0;
  if ( a8 != 0 )
    sub_10002100(&Src, ": ", 2u);
  v9 = (_DWORD *)sub_10002330((_DWORD **)&a2, (int)&Block);
  LOBYTE(v18) = 1;
  sub_10002230(&Src, v9, 0, 0xFFFFFFFF);
  if ( v16 >= 0x10 )
  {
    v10 = Block;
    if ( v16 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)Block & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v11 = *((_DWORD *)Block - 1);
      if ( v11 >= (unsigned int)Block )
        _invalid_parameter_noinfo_noreturn();
      if ( (char *)Block - v11 < (char *)4 )
        _invalid_parameter_noinfo_noreturn();
      if ( (char *)Block - v11 > (char *)0x23 )
        _invalid_parameter_noinfo_noreturn();
      v10 = *((void **)Block - 1);
    }
    j_j___free_base(v10);
  }
  sub_100023D0(a1, &Src);
  if ( a9 >= 0x10 )
  {
    v12 = Src;
    if ( a9 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)Src & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v13 = *(Src - 1);
      if ( v13 >= (unsigned int)Src )
        _invalid_parameter_noinfo_noreturn();
      if ( (unsigned int)Src - v13 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( (unsigned int)Src - v13 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v12 = (void *)*(Src - 1);
    }
    j_j___free_base(v12);
  }
  return a1;
}

// Address: 0x10002570
char *__thiscall sub_10002570(char *this, int a2, int a3, int a4)
{
  char *v5; // eax
  char *v6; // ecx
  void *v7; // eax
  void *v8; // ecx
  void *v9; // eax
  _DWORD *v11; // [esp-18h] [ebp-40h]
  int v12; // [esp-14h] [ebp-3Ch]
  int v13; // [esp-10h] [ebp-38h]
  int v14; // [esp-Ch] [ebp-34h]
  void *Block[6]; // [esp+4h] [ebp-24h] BYREF
  char *v16; // [esp+1Ch] [ebp-Ch] BYREF
  char v17; // [esp+20h] [ebp-8h]

  v16 = this;
  LOBYTE(v11) = 0;
  sub_10002880(a4, 0, -1);
  v5 = (char *)sub_10002450(Block, a2, a3, v11, v12, v13, v14, 0, 0xFu);
  v6 = v5;
  if ( *((_DWORD *)v5 + 5) >= 0x10u )
    v6 = *(char **)v5;
  *(_DWORD *)this = &std::exception::`vftable';
  v16 = v6;
  *(_QWORD *)(this + 4) = 0;
  v17 = 1;
  __std_exception_copy(&v16, this + 4);
  v7 = Block[5];
  *(_DWORD *)this = &std::runtime_error::`vftable';
  if ( (unsigned int)v7 >= 0x10 )
  {
    v8 = Block[0];
    if ( (unsigned int)v7 + 1 >= 0x1000 )
    {
      if ( ((int)Block[0] & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v9 = *((void **)Block[0] - 1);
      if ( v9 >= Block[0] )
        _invalid_parameter_noinfo_noreturn();
      if ( (unsigned int)((char *)Block[0] - (char *)v9) < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( (unsigned int)((char *)Block[0] - (char *)v9) > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v8 = *((void **)Block[0] - 1);
    }
    j_j___free_base(v8);
  }
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &std::_System_error::`vftable';
  return this;
}

// Address: 0x10002670
char *__thiscall sub_10002670(char *this, int a2, int a3, char *Src)
{
  size_t v5; // ecx
  void *v6; // ecx
  void *v7; // eax
  void *Block[5]; // [esp+10h] [ebp-2Ch] BYREF
  unsigned int v10; // [esp+24h] [ebp-18h]
  char *v11; // [esp+28h] [ebp-14h]
  int v12; // [esp+38h] [ebp-4h]

  v11 = this;
  v10 = 15;
  Block[4] = nullptr;
  LOBYTE(Block[0]) = 0;
  if ( *Src != 0 )
    v5 = strlen(Src);
  else
    v5 = 0;
  sub_10002BA0(Src, v5);
  v12 = 0;
  sub_10002570(this, a2, a3, (int)Block);
  if ( v10 >= 0x10 )
  {
    v6 = Block[0];
    if ( v10 + 1 >= 0x1000 )
    {
      if ( ((int)Block[0] & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v7 = *((void **)Block[0] - 1);
      if ( v7 >= Block[0] )
        _invalid_parameter_noinfo_noreturn();
      if ( (unsigned int)((char *)Block[0] - (char *)v7) < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( (unsigned int)((char *)Block[0] - (char *)v7) > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v6 = *((void **)Block[0] - 1);
    }
    j_j___free_base(v6);
  }
  *(_DWORD *)this = &std::system_error::`vftable';
  return this;
}

// Address: 0x10002750
_DWORD *__thiscall sub_10002750(_DWORD *Block, char a2)
{
  *Block = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x10002780
const char *sub_10002780()
{
  return "generic";
}

// Address: 0x10002790
const char *sub_10002790()
{
  return "iostream";
}

// Address: 0x100027A0
_DWORD *__thiscall sub_100027A0(_DWORD *this, unsigned int a2)
{
  if ( *(this + 4) < a2 )
    sub_10005A78("invalid string position");
  *(this + 4) = a2;
  if ( *(this + 5) < 0x10u )
    *((_BYTE *)this + a2) = 0;
  else
    *(_BYTE *)(*this + a2) = 0;
  return this;
}

// Address: 0x100027E0
_DWORD *__thiscall sub_100027E0(_DWORD *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  _DWORD *v6; // eax
  unsigned int v7; // edi
  bool v8; // cf

  v4 = *(this + 4);
  if ( v4 < a2 )
    sub_10005A78("invalid string position");
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

// Address: 0x10002880
_DWORD *__thiscall sub_10002880(_DWORD *this, _DWORD *a2, unsigned int a3, size_t a4)
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
    sub_10005A78("invalid string position");
  v8 = a4;
  v9 = v7 - a3;
  if ( a4 > v9 )
    v8 = v9;
  if ( this != a2 )
  {
    if ( v8 == -1 )
      sub_10005A58("string too long");
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
      sub_10002A00(v8, *(this + 4));
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
    sub_10005A78("invalid string position");
  *(this + 4) = v10;
  if ( *(this + 5) < 0x10u )
    *((_BYTE *)this + v10) = 0;
  else
    *(_BYTE *)(*this + v10) = 0;
  sub_100027E0(this, 0, a3);
  return this;
}

// Address: 0x100029B0
void *__stdcall sub_100029B0(size_t Size)
{
  void *v2; // eax

  if ( Size == 0 )
    return nullptr;
  if ( Size < 0x1000 )
    return operator new(Size);
  if ( Size + 35 < Size )
    sub_1000CD20();
  v2 = operator new(Size + 35);
  *(_DWORD *)((((unsigned int)v2 + 35) & 0xFFFFFFE0) - 4) = v2;
  return (void *)(((unsigned int)v2 + 35) & 0xFFFFFFE0);
}

// Address: 0x10002A00
int __thiscall sub_10002A00(unsigned int *this, unsigned int a2, int Size)
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
      sub_1000CD20();
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

// Address: 0x10002BA0
_DWORD *__thiscall sub_10002BA0(_DWORD *this, _BYTE *Src, size_t Size)
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
          return sub_10002880(this, this, Src - (_BYTE *)this, Size);
        else
          return sub_10002880(this, this, (unsigned int)&Src[-*this], Size);
      }
    }
  }
  if ( Size == -1 )
    sub_10005A58("string too long");
  if ( *(this + 5) < Size )
  {
    sub_10002A00(this, Size, *(this + 4));
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

// Address: 0x10002CA0
_DWORD *__thiscall sub_10002CA0(_DWORD *this, char *Src)
{
  *(this + 5) = 15;
  *(this + 4) = 0;
  *(_BYTE *)this = 0;
  if ( *Src != 0 )
    sub_10002BA0(this, Src, strlen(Src));
  else
    sub_10002BA0(this, Src, 0);
  return this;
}

// Address: 0x10002D00
_DWORD *__stdcall sub_10002D00(_DWORD *a1, int a2)
{
  char *v2; // eax

  v2 = (char *)std::_Syserror_map(a2);
  a1[5] = 15;
  a1[4] = 0;
  *(_BYTE *)a1 = 0;
  if ( *v2 != 0 )
    sub_10002BA0(a1, v2, strlen(v2));
  else
    sub_10002BA0(a1, v2, 0);
  return a1;
}

// Address: 0x10002D70
_DWORD *__stdcall sub_10002D70(_DWORD *a1, int a2)
{
  if ( a2 == 1 )
  {
    a1[5] = 15;
    a1[4] = 0;
    *(_BYTE *)a1 = 0;
    sub_10002BA0(a1, "iostream stream error", 0x15u);
  }
  else
  {
    sub_10002D00(a1, a2);
  }
  return a1;
}

// Address: 0x10002DC0
bool __thiscall sub_10002DC0(_DWORD *this, _DWORD *a2, int a3)
{
  return *(this + 1) == *(_DWORD *)(a2[1] + 4) && *a2 == a3;
}

// Address: 0x10002DF0
_DWORD *__thiscall std::error_category::default_error_condition(void *this, _DWORD *a2, int a3)
{
  *a2 = a3;
  a2[1] = this;
  return a2;
}

// Address: 0x10002E10
bool __thiscall sub_10002E10(void *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  _BYTE v5[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 12))(this, v5, a2);
  return *(_DWORD *)(v3[1] + 4) == *(_DWORD *)(a3[1] + 4) && *v3 == *a3;
}

// Address: 0x10002E50
int *sub_10002E50()
{
  if ( dword_1002FE6C > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_1002FE6C);
    if ( dword_1002FE6C == -1 )
    {
      dword_1002FE70 = (int)&std::_Iostream_error_category::`vftable';
      dword_1002FE74 = 5;
      atexit(nullsub_2);
      _Init_thread_footer(&dword_1002FE6C);
    }
  }
  return &dword_1002FE70;
}

// Address: 0x10002EC0
char *__thiscall sub_10002EC0(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x10002EF0
char *__thiscall sub_10002EF0(char *this, int a2)
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

// Address: 0x10002F40
char *__thiscall sub_10002F40(char *this, int a2)
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

// Address: 0x10002F90
char *__thiscall sub_10002F90(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::_System_error::`vftable';
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)this + 4) = *(_DWORD *)(a2 + 16);
  return this;
}

// Address: 0x10002FE0
char *__thiscall sub_10002FE0(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::runtime_error::`vftable';
  return this;
}

// Address: 0x10003020
char *__thiscall sub_10003020(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  return this;
}

// Address: 0x10003050
int __thiscall sub_10003050(_DWORD *this, char a2, char a3)
{
  int result; // eax
  int v4; // ecx
  int *v5; // eax
  int *v6; // eax
  int *v7; // eax
  char pExceptionObject[20]; // [esp+4h] [ebp-14h] BYREF

  result = a2 & 0x17;
  *(this + 3) = result;
  v4 = result & *(this + 4);
  if ( v4 != 0 )
  {
    if ( a3 == 0 )
    {
      if ( (v4 & 4) == 0 )
      {
        if ( (v4 & 2) == 0 )
        {
          v7 = sub_10002E50();
          sub_10002670(pExceptionObject, 1, (int)v7, "ios_base::eofbit set");
          *(_DWORD *)pExceptionObject = &std::ios_base::failure::`vftable';
          _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI5_AVfailure_ios_base_std__);
        }
        v6 = sub_10002E50();
        sub_10002670(pExceptionObject, 1, (int)v6, "ios_base::failbit set");
        *(_DWORD *)pExceptionObject = &std::ios_base::failure::`vftable';
        _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI5_AVfailure_ios_base_std__);
      }
      v5 = sub_10002E50();
      sub_10002670(pExceptionObject, 1, (int)v5, "ios_base::badbit set");
      *(_DWORD *)pExceptionObject = &std::ios_base::failure::`vftable';
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI5_AVfailure_ios_base_std__);
    }
    _CxxThrowException(nullptr, nullptr);
  }
  return result;
}

// Address: 0x10003120
const char *__thiscall sub_10003120(_DWORD *this)
{
  int v1; // ecx
  const char *result; // eax

  v1 = *(this + 1);
  result = "Unknown exception";
  if ( v1 != 0 )
    return (const char *)v1;
  return result;
}

// Address: 0x10003130
void _guard_check_icall_nop()
{
  ;
}

// Address: 0x10003140
void __stdcall nullsub_1(int a1)
{
  ;
}

// Address: 0x10003150
void __stdcall sub_10003150(_DWORD *Block, unsigned int a2)
{
  void *v2; // eax
  unsigned int v3; // ecx

  v2 = Block;
  if ( a2 >= 0x1000 )
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

// Address: 0x100031A0
void __thiscall sub_100031A0(_DWORD *this, char a2, size_t Size)
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

// Address: 0x10003230
void __thiscall sub_10003230(_DWORD *this)
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

// Address: 0x100032A0
void *sub_100032A0()
{
  return &unk_1002FE78;
}

// Address: 0x100032B0
void __fastcall sub_100032B0(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // edi
  _WORD *v4; // esi
  int v5; // ebx
  _DWORD *v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int *v10; // [esp+Ch] [ebp-8h]

  v3 = 2 * a2[4];
  v4 = (_WORD *)sub_1000C002((unsigned __int64)(unsigned int)v3 >> 31 != 0 ? -1 : 4 * a2[4]);
  v10 = (int *)sub_100032A0();
  while ( 1 )
  {
    v5 = 2 * v3;
    memset(v4, 0, 2 * v3);
    v6 = sub_10001830(a2);
    v7 = sub_10011B43(*v10, v10[1], (int)v4, v3 - 1, (int)v6, nullptr, a3);
    if ( v7 < 0 )
      v7 = -1;
    if ( v7 != -1 )
      break;
    j_j_j___free_base(v4);
    v3 *= 2;
    v4 = (_WORD *)sub_1000C002((unsigned __int64)(unsigned int)v5 >> 31 != 0 ? -1 : 2 * v5);
  }
  if ( *v4 != 0 )
    v8 = wcslen(v4);
  else
    v8 = 0;
  sub_10001960(a1, v4, v8);
  j_j_j___free_base(v4);
}

// Address: 0x10003390
void __thiscall sub_10003390(_DWORD *this, unsigned __int16 *Src, int a3)
{
  unsigned int v4; // ecx
  void *Block[5]; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v6; // [esp+20h] [ebp-10h]
  int v7; // [esp+2Ch] [ebp-4h]

  v6 = 7;
  Block[4] = nullptr;
  LOWORD(Block[0]) = 0;
  if ( *Src != 0 )
    v4 = wcslen(Src);
  else
    v4 = 0;
  sub_10001960(Block, Src, v4);
  v7 = 0;
  sub_100032B0(this, Block, a3);
  if ( v6 >= 8 )
    sub_100017D0((_DWORD *)Block[0], v6 + 1);
}

// Address: 0x10003440
void __cdecl sub_10003440(_DWORD *a1, unsigned __int16 *Src, int a3)
{
  sub_10003390(a1, Src, (int)&a3);
}

// Address: 0x10003460
int __thiscall sub_10003460(LPCRITICAL_SECTION lpCriticalSection)
{
  int result; // eax

  if ( InitializeCriticalSectionEx(lpCriticalSection, 0, 0) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}

// Address: 0x100034A0
_DWORD *__thiscall sub_100034A0(_DWORD *Block, char a2)
{
  *Block = &boost::exception_detail::clone_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x100034D0
int __cdecl sub_100034D0(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // ecx
  int *v4; // eax
  int result; // eax
  int v6; // ecx
  int v7; // [esp+10h] [ebp-18h] BYREF
  int v8; // [esp+14h] [ebp-14h]
  int v9; // [esp+24h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  v9 = 0;
  v3 = a2[1];
  if ( v3 != 0 )
  {
    v4 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 20))(v3, &v7);
    LOBYTE(v9) = 1;
    v2 = *v4;
    v8 = v2;
    if ( v2 != 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    LOBYTE(v9) = 2;
    if ( v7 != 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 16))(v7);
    LOBYTE(v9) = 0;
  }
  a1[3] = a2[3];
  a1[4] = a2[4];
  result = a2[2];
  a1[2] = result;
  v6 = a1[1];
  if ( v6 != 0 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 16))(v6);
    if ( (_BYTE)result != 0 )
      a1[1] = 0;
  }
  a1[1] = v2;
  if ( v2 != 0 )
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  v9 = 3;
  if ( v2 != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2);
  return result;
}

// Address: 0x100035B0
int __thiscall sub_100035B0(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD))(**(this + 2) + 4))(*(this + 2));
}

// Address: 0x100035F0
int __thiscall sub_100035F0(_DWORD **this, int a2, int a3)
{
  (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(this + 2) + 8))(*(this + 2), a2, a3, 0);
  return a2;
}

// Address: 0x10003620
_DWORD *__thiscall sub_10003620(_DWORD *Block, char a2)
{
  *Block = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x10003650
_DWORD *__thiscall sub_10003650(_DWORD *Block, char a2)
{
  *Block = &boost::system::error_category::`vftable';
  *(Block + 1) = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x100036A0
bool __thiscall sub_100036A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  _BYTE v5[8]; // [esp+0h] [ebp-8h] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 12))(this, v5, a2);
  return v3[1] == a3[1] && *v3 == *a3;
}

// Address: 0x100036E0
bool __thiscall sub_100036E0(void *this, _DWORD *a2, int a3)
{
  return this == (void *)a2[1] && *a2 == a3;
}

// Address: 0x10003700
_DWORD *__thiscall sub_10003700(_DWORD **this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // ecx
  _BYTE v6[8]; // [esp+0h] [ebp-8h] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *, int))(**(this + 2) + 12))(*(this + 2), v6, a3);
  *a2 = *v3;
  v4 = v3[1];
  a2[1] = v4 + 4;
  return a2;
}

// Address: 0x10003730
char __thiscall sub_10003730(_DWORD *this, int a2, unsigned int *a3)
{
  int v4; // ecx
  int v5; // eax
  void **v6; // edx
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  unsigned int v11; // esi
  __int64 v12; // [esp+10h] [ebp-18h] BYREF

  if ( *(_DWORD *)(a3[1] + 4) == *(this + 1) )
  {
    v4 = *(this + 2);
    LODWORD(v12) = *a3;
    HIDWORD(v12) = v4;
    return (*(int (__thiscall **)(int, int, __int64 *))(*(_DWORD *)v4 + 20))(v4, a2, &v12);
  }
  if ( *(_DWORD *)(a3[1] + 4) == *(_DWORD *)(sub_10003DB0() + 4)
    || (v5 = sub_10006790(), (v6 = (void **)a3[1])[1] == *(void **)(v5 + 8)) )
  {
    v11 = *a3;
    v8 = sub_10006790();
    v12 = v11;
    goto LABEL_12;
  }
  v7 = __RTDynamicCast(
         v6,
         0,
         &std::error_category `RTTI Type Descriptor',
         &boost::system::error_category::std_category `RTTI Type Descriptor',
         0);
  if ( v7 != 0 )
  {
    v8 = *(_DWORD *)(v7 + 8);
    v12 = *a3;
LABEL_12:
    v4 = *(this + 2);
    HIDWORD(v12) = v8;
    return (*(int (__thiscall **)(int, int, __int64 *))(*(_DWORD *)v4 + 20))(v4, a2, &v12);
  }
  v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, __int64 *, int))(*this + 12))(this, &v12, a2);
  return *(_DWORD *)(v9[1] + 4) == *(_DWORD *)(a3[1] + 4) && *v9 == *a3;
}

// Address: 0x10003840
char __thiscall sub_10003840(_DWORD *this, unsigned int *a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  void **v6; // edx
  int v7; // eax
  int v8; // eax
  int (__stdcall *v9)(unsigned int *, int); // eax
  unsigned int v11; // esi
  __int64 v12; // [esp+Ch] [ebp-18h] BYREF

  if ( *(_DWORD *)(a2[1] + 4) == *(this + 1) )
  {
    v4 = *(this + 2);
    LODWORD(v12) = *a2;
    HIDWORD(v12) = v4;
    return (*(int (__stdcall **)(__int64 *, int))(*(_DWORD *)v4 + 16))(&v12, a3);
  }
  if ( *(_DWORD *)(a2[1] + 4) == *(_DWORD *)(sub_10003DB0() + 4)
    || (v5 = sub_10006790(), (v6 = (void **)a2[1])[1] == *(void **)(v5 + 8)) )
  {
    v11 = *a2;
    v8 = sub_10006790();
    v12 = v11;
    goto LABEL_11;
  }
  v7 = __RTDynamicCast(
         v6,
         0,
         &std::error_category `RTTI Type Descriptor',
         &boost::system::error_category::std_category `RTTI Type Descriptor',
         0);
  if ( v7 != 0 )
  {
    v8 = *(_DWORD *)(v7 + 8);
    v12 = *a2;
LABEL_11:
    v4 = *(this + 2);
    HIDWORD(v12) = v8;
    return (*(int (__stdcall **)(__int64 *, int))(*(_DWORD *)v4 + 16))(&v12, a3);
  }
  if ( *(this + 2) != sub_10006790() )
    return 0;
  v9 = *(int (__stdcall **)(unsigned int *, int))(*(_DWORD *)sub_10003DB0() + 16);
  return v9(a2, a3);
}

// Address: 0x10003980
_DWORD *__thiscall sub_10003980(_DWORD *Block, char a2)
{
  *Block = &boost::system::system_error::`vftable';
  sub_10003230(Block + 5);
  *Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 1);
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x100039C0
int __thiscall sub_100039C0(int this)
{
  char *v2; // edx
  size_t v3; // ecx
  _DWORD *v4; // eax
  int result; // eax
  int v6; // [esp+0h] [ebp-3Ch] BYREF
  _DWORD v7[8]; // [esp+10h] [ebp-2Ch] BYREF
  int v8; // [esp+38h] [ebp-4h]

  v7[7] = &v6;
  v7[6] = this;
  if ( *(_DWORD *)(this + 36) != 0 )
    goto LABEL_10;
  v8 = 0;
  v2 = *(char **)(this + 4);
  if ( v2 == nullptr )
  {
    v2 = "Unknown exception";
  }
  else if ( *v2 == 0 )
  {
    v3 = 0;
LABEL_7:
    sub_10002BA0((_DWORD *)(this + 20), v2, v3);
    if ( *(_DWORD *)(this + 36) != 0 )
      sub_10002100((_DWORD *)(this + 20), ": ", 2u);
    v4 = (_DWORD *)sub_10002330((_DWORD **)(this + 12), (int)v7);
    LOBYTE(v8) = 1;
    sub_10002230((_DWORD *)(this + 20), v4, 0, 0xFFFFFFFF);
    sub_10003230(v7);
LABEL_10:
    result = this + 20;
    if ( *(_DWORD *)(this + 40) >= 0x10u )
      return *(_DWORD *)result;
    return result;
  }
  v3 = strlen(v2);
  goto LABEL_7;
}

// Address: 0x10003AB0
void __fastcall __noreturn sub_10003AB0(int *a1, int a2, int a3, int a4)
{
  int v6; // edi
  int v7; // esi
  int v8; // eax
  _BYTE v9[64]; // [esp+10h] [ebp-D8h] BYREF
  _BYTE pExceptionObject[84]; // [esp+50h] [ebp-98h] BYREF
  int v11; // [esp+A4h] [ebp-44h] BYREF
  char v12; // [esp+A8h] [ebp-40h]
  _DWORD v13[11]; // [esp+ACh] [ebp-3Ch] BYREF
  int v14; // [esp+E4h] [ebp-4h]

  memset(v13, 0, sizeof(v13));
  v6 = *a1;
  v7 = a1[1];
  v13[0] = &std::exception::`vftable';
  *(_QWORD *)&v13[1] = 0;
  v11 = a2;
  v12 = 1;
  __std_exception_copy(&v11, &v13[1]);
  v13[0] = &boost::system::system_error::`vftable';
  v13[3] = v6;
  v13[4] = v7;
  v13[10] = 15;
  v13[9] = 0;
  LOBYTE(v13[5]) = 0;
  v14 = 0;
  v8 = sub_100044D0(v9, v13);
  LOBYTE(v14) = 1;
  sub_100044F0(pExceptionObject, v8);
  _CxxThrowException(
    pExceptionObject,
    (_ThrowInfo *)&_TI7_AV__clone_impl_U__error_info_injector_Vsystem_error_system_boost___exception_detail_boost___exception_detail_boost__);
}

// Address: 0x10003B80
const char *sub_10003B80()
{
  return "asio.misc";
}

// Address: 0x10003B90
_DWORD *__stdcall sub_10003B90(_DWORD *a1, int a2)
{
  if ( a2 == 1 )
  {
    a1[5] = 15;
    a1[4] = 0;
    *(_BYTE *)a1 = 0;
    sub_10002BA0(a1, "Already open", 0xCu);
    return a1;
  }
  else if ( a2 == 2 )
  {
    a1[5] = 15;
    a1[4] = 0;
    *(_BYTE *)a1 = 0;
    sub_10002BA0(a1, "End of file", 0xBu);
    return a1;
  }
  else if ( a2 == 3 )
  {
    sub_10002CA0(a1, "Element not found");
    return a1;
  }
  else
  {
    if ( a2 == 4 )
      sub_10002CA0(a1, "The descriptor does not fit into the select call's fd_set");
    else
      sub_10002CA0(a1, "asio.misc error");
    return a1;
  }
}

// Address: 0x10003C50
__int128 *sub_10003C50()
{
  if ( dword_1002FE9C > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_1002FE9C);
    if ( dword_1002FE9C == -1 )
    {
      DWORD2(xmmword_1002FE88) = (char *)&xmmword_1002FE88 + 4;
      DWORD1(xmmword_1002FE88) = &boost::system::error_category::std_category::`vftable';
      HIDWORD(xmmword_1002FE88) = &xmmword_1002FE88;
      LODWORD(xmmword_1002FE88) = &boost::asio::error::detail::misc_category::`vftable';
      atexit(sub_1001E8A0);
      _Init_thread_footer(&dword_1002FE9C);
    }
  }
  return &xmmword_1002FE88;
}

// Address: 0x10003CE0
DWORD sub_10003CE0()
{
  DWORD v0; // edi
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+4h] [ebp-14h]
  int v4[2]; // [esp+Ch] [ebp-Ch] BYREF

  v0 = TlsAlloc();
  if ( v0 == -1 )
  {
    v4[0] = GetLastError();
    v4[1] = sub_10006CA0();
    if ( v4[0] != 0 )
      sub_10003AB0(v4, (int)"tss", v2, v3);
  }
  return v0;
}

// Address: 0x10003D50
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return true;
}

// Address: 0x10003D60
void __thiscall sub_10003D60(int *this)
{
  int v2; // ecx

  v2 = *this;
  if ( v2 != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2) != 0 )
    *this = 0;
}

// Address: 0x10003DB0
int *sub_10003DB0()
{
  if ( dword_1002FE84 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_1002FE84);
    if ( dword_1002FE84 == -1 )
    {
      dword_1002FEAC = (int)&std::_Generic_error_category::`vftable';
      dword_1002FEB0 = 3;
      atexit(nullsub_3);
      _Init_thread_footer(&dword_1002FE84);
    }
  }
  return &dword_1002FEAC;
}

// Address: 0x10003E20
_DWORD *__thiscall sub_10003E20(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx

  *this = &boost::exception::`vftable';
  v3 = a2[1];
  *(this + 1) = v3;
  if ( v3 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  *(this + 2) = a2[2];
  *(this + 3) = a2[3];
  *(this + 4) = a2[4];
  return this;
}

// Address: 0x10003E60
_DWORD *__thiscall sub_10003E60(_DWORD *this, int a2)
{
  *this = &boost::exception_detail::clone_base::`vftable';
  return this;
}

// Address: 0x10003E70
int __thiscall sub_10003E70(_DWORD *this)
{
  int result; // eax

  result = sub_100042C0();
  *(this + 18) = &boost::exception_detail::clone_base::`vftable';
  return result;
}

// Address: 0x10003E90
_DWORD *__thiscall sub_10003E90(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  if ( a3 != 0 )
  {
    *(this + 16) = &unk_1002AA50;
    *(this + 18) = &boost::exception_detail::clone_base::`vftable';
  }
  sub_10003F40(a2);
  v4 = *(this + 16);
  *this = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(this + 11) = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(v4 + 4) + 64) = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*(this + 16) + 4) + 60) = 0;
  return this;
}

// Address: 0x10003F40
char *__thiscall sub_10003F40(char *this, _DWORD *a2)
{
  _DWORD *v3; // ecx
  _BYTE *v4; // eax
  int v5; // ecx

  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 1, this + 4);
  v3 = this + 20;
  *(_DWORD *)this = &boost::system::system_error::`vftable';
  *((_DWORD *)this + 3) = a2[3];
  *((_DWORD *)this + 4) = a2[4];
  *((_DWORD *)this + 10) = 15;
  *((_DWORD *)this + 9) = 0;
  if ( *((_DWORD *)this + 10) < 0x10u )
    v4 = this + 20;
  else
    v4 = (_BYTE *)*v3;
  *v4 = 0;
  sub_10002880(v3, a2 + 5, 0, 0xFFFFFFFF);
  *((_DWORD *)this + 11) = &boost::exception::`vftable';
  v5 = a2[12];
  *((_DWORD *)this + 12) = v5;
  if ( v5 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  *((_DWORD *)this + 13) = a2[13];
  *((_DWORD *)this + 14) = a2[14];
  *((_DWORD *)this + 15) = a2[15];
  *(_DWORD *)this = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  *((_DWORD *)this + 11) = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  return this;
}

// Address: 0x10004030
char *__thiscall sub_10004030(char *this, _DWORD *a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 1, this + 4);
  *(_DWORD *)this = &boost::system::system_error::`vftable';
  *((_DWORD *)this + 3) = a2[3];
  *((_DWORD *)this + 4) = a2[4];
  *((_DWORD *)this + 10) = 15;
  *((_DWORD *)this + 9) = 0;
  *(this + 20) = 0;
  sub_10002880((_DWORD *)this + 5, a2 + 5, 0, 0xFFFFFFFF);
  return this;
}

// Address: 0x100040D0
_DWORD *__thiscall sub_100040D0(_DWORD *Block, char a2)
{
  sub_100042C0();
  *(Block + 18) = &boost::exception_detail::clone_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x10004100
_DWORD *__thiscall sub_10004100(_DWORD *Block, char a2)
{
  int v3; // ecx

  *Block = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  *(Block + 11) = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  *(Block + 11) = &boost::exception::`vftable';
  v3 = *(Block + 12);
  if ( v3 != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3) != 0 )
    *(Block + 12) = 0;
  *Block = &boost::system::system_error::`vftable';
  sub_10003230(Block + 5);
  *Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 1);
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x100041A0
void __thiscall __noreturn sub_100041A0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  _DWORD pExceptionObject[16]; // [esp+4h] [ebp-5Ch] BYREF
  _DWORD v5[4]; // [esp+44h] [ebp-1Ch]
  int v6; // [esp+5Ch] [ebp-4h]

  v5[0] = &unk_1002AA50;
  v5[2] = &boost::exception_detail::clone_base::`vftable';
  v6 = 0;
  v5[3] = 1;
  sub_10003F40((char *)pExceptionObject, this - 18);
  pExceptionObject[0] = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  pExceptionObject[11] = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)((char *)v5 + *(_DWORD *)(v5[0] + 4)) = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  v3 = *(_DWORD *)(v5[0] + 4);
  v6 = -1;
  *(_DWORD *)((char *)&pExceptionObject[15] + v3) = 0;
  _CxxThrowException(
    pExceptionObject,
    (_ThrowInfo *)&_TI7_AV__clone_impl_U__error_info_injector_Vsystem_error_system_boost___exception_detail_boost___exception_detail_boost__);
}

// Address: 0x10004240
int __thiscall sub_10004240(char *this)
{
  int result; // eax
  int v3; // [esp-4h] [ebp-1Ch]
  void *Block; // [esp+8h] [ebp-10h]

  Block = operator new(0x4Cu);
  result = sub_10004410(this - 72, Block, v3);
  if ( result != 0 )
    result += *(_DWORD *)(*(_DWORD *)(result + 64) + 4) + 64;
  return result;
}

// Address: 0x100042C0
int __thiscall sub_100042C0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(this + 16);
  *this = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(this + 11) = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(v2 + 4) + 64) = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*(this + 16) + 4) + 60) = *(_DWORD *)(*(this + 16) + 4) - 8;
  *this = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  *(this + 11) = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  *(this + 11) = &boost::exception::`vftable';
  v3 = *(this + 12);
  if ( v3 != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3) != 0 )
    *(this + 12) = 0;
  *this = &boost::system::system_error::`vftable';
  sub_10003230(this + 5);
  *this = &std::exception::`vftable';
  return __std_exception_destroy(this + 1);
}

// Address: 0x10004380
int __thiscall sub_10004380(_DWORD *this)
{
  int v2; // ecx

  *this = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  *(this + 11) = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  *(this + 11) = &boost::exception::`vftable';
  v2 = *(this + 12);
  if ( v2 != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2) != 0 )
    *(this + 12) = 0;
  *this = &boost::system::system_error::`vftable';
  sub_10003230(this + 5);
  *this = &std::exception::`vftable';
  return __std_exception_destroy(this + 1);
}

// Address: 0x10004410
int __thiscall sub_10004410(int this, _DWORD *a2, int a3, int a4)
{
  int v5; // eax

  *(_DWORD *)(this + 64) = &unk_1002AA50;
  *(_DWORD *)(this + 72) = &boost::exception_detail::clone_base::`vftable';
  sub_10003F40((char *)this, a2);
  v5 = *(_DWORD *)(this + 64);
  *(_DWORD *)this = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)(this + 44) = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)(*(_DWORD *)(v5 + 4) + this + 64) = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 64) + 4) + this + 60) = *(_DWORD *)(*(_DWORD *)(this + 64) + 4) - 8;
  sub_100034D0((_DWORD *)(this + 44), a2 != nullptr ? a2 + 11 : nullptr);
  return this;
}

// Address: 0x100044D0
int __fastcall sub_100044D0(int a1, int a2)
{
  sub_10004610(a2);
  return a1;
}

// Address: 0x100044F0
int __fastcall sub_100044F0(int a1, int a2)
{
  sub_10004550(a2, a1);
  return a1;
}

// Address: 0x10004520
void *sub_10004520()
{
  return &unk_1002FF39;
}

// Address: 0x10004530
void *sub_10004530()
{
  return &unk_1002FF38;
}

// Address: 0x10004540
void *sub_10004540()
{
  return &unk_1002FEC4;
}

// Address: 0x10004550
int __thiscall sub_10004550(int this, _DWORD *a2, int a3)
{
  int v4; // eax

  *(_DWORD *)(this + 64) = &unk_1002AA50;
  *(_DWORD *)(this + 72) = &boost::exception_detail::clone_base::`vftable';
  sub_10003F40((char *)this, a2);
  v4 = *(_DWORD *)(this + 64);
  *(_DWORD *)this = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)(this + 44) = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)(*(_DWORD *)(v4 + 4) + this + 64) = &boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::system::system_error>>::`vftable';
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 64) + 4) + this + 60) = *(_DWORD *)(*(_DWORD *)(this + 64) + 4) - 8;
  sub_100034D0((_DWORD *)(this + 44), a2 != nullptr ? a2 + 11 : nullptr);
  return this;
}

// Address: 0x10004610
char *__thiscall sub_10004610(char *this, _DWORD *a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 1, this + 4);
  *(_DWORD *)this = &boost::system::system_error::`vftable';
  *((_DWORD *)this + 3) = a2[3];
  *((_DWORD *)this + 4) = a2[4];
  *((_DWORD *)this + 10) = 15;
  *((_DWORD *)this + 9) = 0;
  *(this + 20) = 0;
  sub_10002880((_DWORD *)this + 5, a2 + 5, 0, 0xFFFFFFFF);
  *((_DWORD *)this + 11) = &boost::exception::`vftable';
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = -1;
  *(_DWORD *)this = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  *((_DWORD *)this + 11) = &boost::exception_detail::error_info_injector<boost::system::system_error>::`vftable';
  return this;
}

// Address: 0x100046D9
_DWORD *__thiscall sub_100046D9(_DWORD *this, char a2)
{
  return sub_10004100(this - 11, a2);
}

// Address: 0x100046E1
_DWORD *__thiscall sub_100046E1(_DWORD *this, char a2)
{
  return sub_100040D0((_DWORD *)((char *)this - *(this - 1) - 72), a2);
}

// Address: 0x100046EC
void __thiscall __noreturn sub_100046EC(_DWORD *this, int a2, int a3)
{
  sub_100041A0((_DWORD *)((char *)this - *(this - 1)), a2, a3);
}

// Address: 0x100046F4
_DWORD *__thiscall sub_100046F4(_DWORD *this, char a2)
{
  return sub_100040D0(this - 11, a2);
}

// Address: 0x100046FC
int __thiscall sub_100046FC(char *this)
{
  return sub_10004240(this - *((_DWORD *)this - 1));
}

// Address: 0x10004710
BOOL __stdcall EnumFunc(HWND hWnd, HWND **a2)
{
  HWND *v2; // eax
  HWND *v3; // ecx
  int v4; // edi
  HWND *v5; // ecx
  HWND *v7; // eax
  HWND v8; // [esp+8h] [ebp-198h] BYREF
  WCHAR ClassName[200]; // [esp+Ch] [ebp-194h] BYREF

  v8 = hWnd;
  GetClassNameW(hWnd, ClassName, 200);
  if ( _wcsicmp(ClassName, L"Windows.UI.Core.CoreWindow") != 0 )
    return true;
  v2 = a2[1];
  v3 = &v8;
  if ( &v8 >= v2 || (v3 = *a2, *a2 > &v8) )
  {
    if ( v2 == a2[2] )
      sub_10005550(v3);
    v7 = a2[1];
    if ( v7 != nullptr )
      *v7 = hWnd;
  }
  else
  {
    v4 = &v8 - v3;
    if ( v2 == a2[2] )
      sub_10005550(*a2);
    v5 = a2[1];
    if ( v5 != nullptr )
    {
      *v5 = (*a2)[v4];
      ++a2[1];
      return false;
    }
  }
  ++a2[1];
  return false;
}

// Address: 0x10004800
BOOL __stdcall sub_10004800(HWND hWnd, LPARAM lParam)
{
  int v2; // ecx
  int v3; // ecx
  const WCHAR *v4; // eax
  HWND v6; // [esp+10h] [ebp-350h] BYREF
  LPCWSTR lpOutputString[5]; // [esp+14h] [ebp-34Ch] BYREF
  unsigned int v8; // [esp+28h] [ebp-338h]
  int pvAttribute; // [esp+2Ch] [ebp-334h] BYREF
  WCHAR String[200]; // [esp+30h] [ebp-330h] BYREF
  WCHAR ClassName[200]; // [esp+1C0h] [ebp-1A0h] BYREF
  int v12; // [esp+35Ch] [ebp-4h]

  v6 = hWnd;
  GetClassNameW(hWnd, ClassName, 200);
  pvAttribute = 0;
  if ( !IsWindowVisible(hWnd)
    || _wcsicmp(ClassName, L"button") == 0
    || _wcsicmp(ClassName, L"progman") == 0
    || _wcsicmp(ClassName, L"workerw") == 0
    || _wcsicmp(ClassName, L"internet explorer_hidden") == 0
    || _wcsicmp(ClassName, L"shell_secondarytraywnd") == 0
    || _wcsicmp(ClassName, L"shell_traywnd") == 0
    || _wcsicmp(ClassName, L"alternate owner") == 0 )
  {
    v3 = pvAttribute;
LABEL_17:
    if ( v3 == 0 )
      return true;
    goto LABEL_18;
  }
  if ( (unsigned __int8)sub_100056B0(v2) == 0 || DwmGetWindowAttribute(hWnd, 0xEu, &pvAttribute, 4u) >= 0 )
  {
    v3 = pvAttribute;
    if ( pvAttribute == 0 )
    {
      if ( _wcsicmp(ClassName, L"ApplicationFrameWindow") != 0 )
        sub_10005460(&v6);
      else
        EnumChildWindows(hWnd, (WNDENUMPROC)EnumFunc, lParam);
      return true;
    }
    goto LABEL_17;
  }
LABEL_18:
  GetWindowTextW(hWnd, String, 200);
  v8 = 7;
  lpOutputString[4] = nullptr;
  LOWORD(lpOutputString[0]) = 0;
  v12 = 0;
  sub_10003440(lpOutputString, L"[%s]ClassName: %s, hRes: %08X, bCloaked: %08X\n", (int)String);
  v4 = (const WCHAR *)lpOutputString;
  if ( v8 >= 8 )
    v4 = lpOutputString[0];
  OutputDebugStringW(v4);
  if ( v8 >= 8 )
    sub_100017D0((_DWORD *)lpOutputString[0], v8 + 1);
  return true;
}

// Address: 0x10004A60
_DWORD *CreateSnapshot()
{
  _DWORD *v0; // esi
  DWORD LastError; // edi

  v0 = operator new(0xCu);
  LastError = 0;
  *(_QWORD *)v0 = 0;
  v0[2] = 0;
  *v0 = 0;
  v0[1] = 0;
  v0[2] = 0;
  if ( !EnumWindows(sub_10004800, (LPARAM)v0) )
  {
    LastError = GetLastError();
    sub_100054D0(v0);
    sub_1000BFD1(v0);
    v0 = nullptr;
  }
  SetLastError(LastError);
  return v0;
}

// Address: 0x10004AD0
int __cdecl GetWindowCount(_DWORD *a1)
{
  int v1; // esi

  if ( a1 != nullptr )
  {
    v1 = (a1[1] - *a1) >> 2;
    SetLastError(0);
    return v1;
  }
  else
  {
    SetLastError(0x57u);
    return -1;
  }
}

// Address: 0x10004B10
int __cdecl GetWindowHandle(_DWORD *a1, unsigned int a2)
{
  int v2; // esi

  if ( a1 != nullptr && a2 < (a1[1] - *a1) >> 2 )
  {
    v2 = *(_DWORD *)(*a1 + 4 * a2);
    SetLastError(0);
    return v2;
  }
  else
  {
    SetLastError(0x57u);
    return 0;
  }
}

// Address: 0x10004B70
int __cdecl GetWindowTitleA(_DWORD *a1, unsigned int a2, LPSTR lpString, int nMaxCount)
{
  DWORD v4; // ebx
  int WindowTextLengthA; // [esp+Ch] [ebp-4h]

  v4 = 0;
  WindowTextLengthA = 0;
  if ( a1 == nullptr || a2 >= (a1[1] - *a1) >> 2 )
  {
    v4 = 87;
LABEL_8:
    SetLastError(v4);
    return WindowTextLengthA;
  }
  WindowTextLengthA = GetWindowTextLengthA(*(HWND *)(*a1 + 4 * a2));
  if ( lpString == nullptr || nMaxCount == 0 )
    goto LABEL_8;
  if ( (a1[1] - *a1) >> 2 <= a2 )
    sub_10005A78("invalid vector<T> subscript");
  GetWindowTextA(*(HWND *)(*a1 + 4 * a2), lpString, nMaxCount);
  SetLastError(0);
  return WindowTextLengthA;
}

// Address: 0x10004C10
int __cdecl GetWindowTitleW(_DWORD *a1, unsigned int a2, LPWSTR lpString, int nMaxCount)
{
  DWORD v4; // ebx
  int WindowTextLengthW; // [esp+Ch] [ebp-4h]

  v4 = 0;
  WindowTextLengthW = 0;
  if ( a1 == nullptr || a2 >= (a1[1] - *a1) >> 2 )
  {
    v4 = 87;
LABEL_8:
    SetLastError(v4);
    return WindowTextLengthW;
  }
  WindowTextLengthW = GetWindowTextLengthW(*(HWND *)(*a1 + 4 * a2));
  if ( lpString == nullptr || nMaxCount == 0 )
    goto LABEL_8;
  if ( (a1[1] - *a1) >> 2 <= a2 )
    sub_10005A78("invalid vector<T> subscript");
  GetWindowTextW(*(HWND *)(*a1 + 4 * a2), lpString, nMaxCount);
  SetLastError(0);
  return WindowTextLengthW;
}

// Address: 0x10004CB0
signed int __cdecl GetWindowProcessPathA(_DWORD *a1, unsigned int a2, char *a3, signed int a4)
{
  size_t v4; // ebx
  signed int v5; // esi
  DWORD LastError; // edi
  HANDLE v7; // eax
  signed int v8; // kr00_4
  HANDLE hObject; // [esp+Ch] [ebp-118h]
  DWORD dwProcessId; // [esp+14h] [ebp-110h] BYREF
  DWORD dwSize; // [esp+18h] [ebp-10Ch] BYREF
  CHAR ExeName[260]; // [esp+1Ch] [ebp-108h] BYREF

  v4 = a4;
  v5 = 0;
  LastError = 0;
  if ( a1 == nullptr || a2 >= (a1[1] - *a1) >> 2 )
  {
    LastError = 87;
    goto LABEL_14;
  }
  GetWindowThreadProcessId(*(HWND *)(*a1 + 4 * a2), &dwProcessId);
  v7 = OpenProcess(0x1000u, false, dwProcessId);
  hObject = v7;
  if ( v7 == nullptr )
  {
    LastError = GetLastError();
    goto LABEL_14;
  }
  dwSize = 260;
  if ( !QueryFullProcessImageNameA(v7, 0, ExeName, &dwSize) )
  {
    LastError = GetLastError();
LABEL_11:
    CloseHandle(hObject);
    goto LABEL_14;
  }
  v8 = strlen(ExeName);
  v5 = v8;
  if ( a3 == nullptr || a4 == 0 )
    goto LABEL_11;
  if ( v8 < a4 )
    v4 = v8;
  strncpy(a3, ExeName, v4);
  a3[v4] = 0;
  CloseHandle(hObject);
LABEL_14:
  SetLastError(LastError);
  return v5;
}

// Address: 0x10004DF0
signed int __cdecl GetWindowProcessPathW(_DWORD *a1, unsigned int a2, wchar_t *a3, signed int a4)
{
  size_t v4; // ebx
  signed int v5; // esi
  DWORD LastError; // edi
  HANDLE v7; // eax
  signed int v8; // kr00_4
  HANDLE hObject; // [esp+Ch] [ebp-21Ch]
  DWORD dwProcessId; // [esp+14h] [ebp-214h] BYREF
  DWORD dwSize; // [esp+18h] [ebp-210h] BYREF
  WCHAR ExeName[260]; // [esp+1Ch] [ebp-20Ch] BYREF

  v4 = a4;
  v5 = 0;
  LastError = 0;
  if ( a1 == nullptr || a2 >= (a1[1] - *a1) >> 2 )
  {
    LastError = 87;
    goto LABEL_14;
  }
  GetWindowThreadProcessId(*(HWND *)(*a1 + 4 * a2), &dwProcessId);
  v7 = OpenProcess(0x1000u, false, dwProcessId);
  hObject = v7;
  if ( v7 == nullptr )
  {
    LastError = GetLastError();
    goto LABEL_14;
  }
  dwSize = 260;
  if ( !QueryFullProcessImageNameW(v7, 0, ExeName, &dwSize) )
  {
    LastError = GetLastError();
LABEL_11:
    CloseHandle(hObject);
    goto LABEL_14;
  }
  v8 = wcslen(ExeName);
  v5 = v8;
  if ( a3 == nullptr || a4 == 0 )
    goto LABEL_11;
  if ( v8 < a4 )
    v4 = v8;
  wcsncpy(a3, ExeName, v4);
  a3[v4] = 0;
  CloseHandle(hObject);
LABEL_14:
  SetLastError(LastError);
  return v5;
}

// Address: 0x10004F40
int __cdecl GetWindowProcessNameA(_DWORD *a1, unsigned int a2, char *a3, signed int Count)
{
  signed int v4; // ebx
  signed int v5; // esi
  DWORD LastError; // edi
  HANDLE v7; // eax
  char *v8; // eax
  const char *v9; // ecx
  size_t v10; // eax
  HANDLE hObject; // [esp+Ch] [ebp-118h]
  DWORD dwProcessId; // [esp+14h] [ebp-110h] BYREF
  DWORD dwSize; // [esp+18h] [ebp-10Ch] BYREF
  CHAR ExeName[260]; // [esp+1Ch] [ebp-108h] BYREF

  v4 = Count;
  v5 = 0;
  LastError = 0;
  if ( a1 == nullptr || a2 >= (a1[1] - *a1) >> 2 )
  {
    LastError = 87;
    goto LABEL_18;
  }
  GetWindowThreadProcessId(*(HWND *)(*a1 + 4 * a2), &dwProcessId);
  v7 = OpenProcess(0x1000u, false, dwProcessId);
  hObject = v7;
  if ( v7 == nullptr )
  {
    LastError = GetLastError();
    goto LABEL_18;
  }
  dwSize = 260;
  if ( !QueryFullProcessImageNameA(v7, 0, ExeName, &dwSize) )
  {
    LastError = GetLastError();
    goto LABEL_15;
  }
  v8 = strrchr(ExeName, 92);
  if ( v8 == nullptr )
  {
    LastError = 1805;
    CloseHandle(hObject);
    goto LABEL_18;
  }
  v9 = v8 + 1;
  v5 = strlen(v8 + 1);
  if ( a3 == nullptr || Count == 0 )
  {
LABEL_15:
    CloseHandle(hObject);
    goto LABEL_18;
  }
  v10 = v5;
  if ( Count < v5 )
    v10 = Count;
  strncpy(a3, v9, v10);
  if ( v5 < Count )
    v4 = v5;
  a3[v4] = 0;
  CloseHandle(hObject);
LABEL_18:
  SetLastError(LastError);
  return v5;
}

// Address: 0x100050B0
int __cdecl GetWindowProcessNameW(_DWORD *a1, unsigned int a2, wchar_t *a3, signed int Count)
{
  signed int v4; // ebx
  int v5; // esi
  DWORD LastError; // edi
  HANDLE v7; // eax
  wchar_t *v8; // eax
  const wchar_t *v9; // ecx
  __int16 *v10; // esi
  __int16 v11; // ax
  size_t v12; // eax
  HANDLE hObject; // [esp+Ch] [ebp-21Ch]
  DWORD dwProcessId; // [esp+14h] [ebp-214h] BYREF
  DWORD dwSize; // [esp+18h] [ebp-210h] BYREF
  WCHAR ExeName[260]; // [esp+1Ch] [ebp-20Ch] BYREF

  v4 = Count;
  v5 = 0;
  LastError = 0;
  if ( a1 == nullptr || a2 >= (a1[1] - *a1) >> 2 )
  {
    LastError = 87;
    goto LABEL_20;
  }
  GetWindowThreadProcessId(*(HWND *)(*a1 + 4 * a2), &dwProcessId);
  v7 = OpenProcess(0x1000u, false, dwProcessId);
  hObject = v7;
  if ( v7 == nullptr )
  {
    LastError = GetLastError();
    goto LABEL_20;
  }
  dwSize = Count;
  if ( !QueryFullProcessImageNameW(v7, 0, ExeName, &dwSize) )
  {
    LastError = GetLastError();
    goto LABEL_17;
  }
  v8 = wcsrchr(ExeName, 0x5Cu);
  if ( v8 == nullptr )
  {
    LastError = 1805;
    CloseHandle(hObject);
    goto LABEL_20;
  }
  v9 = v8 + 1;
  v10 = (__int16 *)(v8 + 1);
  do
    v11 = *v10++;
  while ( v11 != 0 );
  v5 = ((char *)v10 - (char *)(v9 + 1)) >> 1;
  if ( a3 == nullptr || Count == 0 )
  {
LABEL_17:
    CloseHandle(hObject);
    goto LABEL_20;
  }
  v12 = v5;
  if ( Count < v5 )
    v12 = Count;
  wcsncpy(a3, v9, v12);
  if ( v5 < Count )
    v4 = v5;
  a3[v4] = 0;
  CloseHandle(hObject);
LABEL_20:
  SetLastError(LastError);
  return v5;
}

// Address: 0x10005220
HICON __cdecl GetWindowIcon(_DWORD *a1, unsigned int a2)
{
  HICON hIcon; // edi
  DWORD LastError; // esi
  HANDLE v4; // ebx
  SHFILEINFOW psfi; // [esp+Ch] [ebp-4C8h] BYREF
  DWORD dwProcessId; // [esp+2C0h] [ebp-214h] BYREF
  DWORD dwSize; // [esp+2C4h] [ebp-210h] BYREF
  WCHAR ExeName[260]; // [esp+2C8h] [ebp-20Ch] BYREF

  hIcon = nullptr;
  LastError = 0;
  if ( a1 != nullptr && a2 < (a1[1] - *a1) >> 2 )
  {
    GetWindowThreadProcessId(*(HWND *)(*a1 + 4 * a2), &dwProcessId);
    v4 = OpenProcess(0x1000u, false, dwProcessId);
    if ( v4 != nullptr )
    {
      dwSize = 260;
      if ( QueryFullProcessImageNameW(v4, 0, ExeName, &dwSize) && SHGetFileInfoW(ExeName, 0, &psfi, 0x2B4u, 0x100u) != 0 )
      {
        hIcon = psfi.hIcon;
        CloseHandle(v4);
      }
      else
      {
        LastError = GetLastError();
        CloseHandle(v4);
      }
    }
    else
    {
      LastError = GetLastError();
    }
  }
  else
  {
    LastError = 87;
  }
  SetLastError(LastError);
  return hIcon;
}

// Address: 0x10005330
HICON __cdecl GetWindowIconSmall(_DWORD *a1, unsigned int a2)
{
  HICON hIcon; // edi
  DWORD LastError; // esi
  HANDLE v4; // ebx
  SHFILEINFOW psfi; // [esp+Ch] [ebp-4C8h] BYREF
  DWORD dwProcessId; // [esp+2C0h] [ebp-214h] BYREF
  DWORD dwSize; // [esp+2C4h] [ebp-210h] BYREF
  WCHAR ExeName[260]; // [esp+2C8h] [ebp-20Ch] BYREF

  hIcon = nullptr;
  LastError = 0;
  if ( a1 != nullptr && a2 < (a1[1] - *a1) >> 2 )
  {
    GetWindowThreadProcessId(*(HWND *)(*a1 + 4 * a2), &dwProcessId);
    v4 = OpenProcess(0x1000u, false, dwProcessId);
    if ( v4 != nullptr )
    {
      dwSize = 260;
      if ( QueryFullProcessImageNameW(v4, 0, ExeName, &dwSize) && SHGetFileInfoW(ExeName, 0, &psfi, 0x2B4u, 0x101u) != 0 )
      {
        hIcon = psfi.hIcon;
        CloseHandle(v4);
      }
      else
      {
        LastError = GetLastError();
        CloseHandle(v4);
      }
    }
    else
    {
      LastError = GetLastError();
    }
  }
  else
  {
    LastError = 87;
  }
  SetLastError(LastError);
  return hIcon;
}

// Address: 0x10005440
int __cdecl CloseSnaphot(void *Block)
{
  int result; // eax

  if ( Block != nullptr )
  {
    sub_100054D0(Block);
    return sub_1000BFD1(Block);
  }
  return result;
}

// Address: 0x10005460
unsigned int __thiscall sub_10005460(_DWORD *this, unsigned int *a2)
{
  _DWORD *v2; // esi
  unsigned int result; // eax
  int v4; // edi
  unsigned int *v5; // ecx
  unsigned int *v6; // ecx

  v2 = this;
  result = *(this + 1);
  if ( (unsigned int)a2 >= result || (this = (_DWORD *)*this, *v2 > (unsigned int)a2) )
  {
    if ( result == v2[2] )
      result = sub_10005550(this);
    v6 = (unsigned int *)v2[1];
    if ( v6 != nullptr )
    {
      result = *a2;
      *v6 = *a2;
    }
  }
  else
  {
    v4 = a2 - this;
    if ( result == v2[2] )
      result = sub_10005550(*v2);
    v5 = (unsigned int *)v2[1];
    if ( v5 != nullptr )
    {
      result = *(_DWORD *)(*v2 + 4 * v4);
      *v5 = result;
      v2[1] += 4;
      return result;
    }
  }
  v2[1] += 4;
  return result;
}

// Address: 0x100054D0
void __thiscall sub_100054D0(char **this)
{
  char *v2; // edx
  unsigned int v3; // eax
  char *v4; // eax
  unsigned int v5; // edx

  v2 = *this;
  if ( *this != nullptr )
  {
    v3 = (*(this + 2) - v2) >> 2;
    if ( v3 > 0x3FFFFFFF )
      _invalid_parameter_noinfo_noreturn();
    if ( 4 * v3 >= 0x1000 )
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

// Address: 0x10005550
int __thiscall sub_10005550(int *this, int a2)
{
  int v3; // edi
  int v4; // edx
  int result; // eax
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edi
  unsigned int v10; // ecx

  v3 = *(this + 2);
  v4 = *(this + 1);
  result = (v3 - v4) >> 2;
  if ( result == 0 )
  {
    v6 = *this;
    v7 = (v4 - *this) >> 2;
    if ( v7 == 0x3FFFFFFF )
      sub_10005A58("vector<T> too long");
    v8 = v7 + 1;
    v9 = (v3 - v6) >> 2;
    v10 = 0;
    if ( 0x3FFFFFFF - (v9 >> 1) >= v9 )
      v10 = v9 + (v9 >> 1);
    if ( v10 >= v8 )
      v8 = v10;
    return sub_100055B0(v8);
  }
  return result;
}

// Address: 0x100055B0
char *__thiscall sub_100055B0(int this, unsigned int a2)
{
  _DWORD *v3; // esi
  unsigned int v4; // eax
  void *v5; // eax
  char *v6; // ecx
  unsigned int v7; // eax
  char *v8; // eax
  unsigned int v9; // ecx
  char *result; // eax
  int v11; // [esp+Ch] [ebp-4h]

  if ( a2 != 0 )
  {
    if ( a2 > 0x3FFFFFFF )
      sub_1000CD20();
    v4 = 4 * a2;
    if ( 4 * a2 < 0x1000 )
    {
      v3 = operator new(4 * a2);
    }
    else
    {
      if ( v4 + 35 < v4 )
        sub_1000CD20();
      v5 = operator new(v4 + 35);
      v3 = (_DWORD *)(((unsigned int)v5 + 35) & 0xFFFFFFE0);
      *(v3 - 1) = v5;
    }
  }
  else
  {
    v3 = nullptr;
  }
  memmove(v3, *(const void **)this, *(_DWORD *)(this + 4) - *(_DWORD *)this);
  v6 = *(char **)this;
  v11 = (*(_DWORD *)(this + 4) - *(_DWORD *)this) >> 2;
  if ( *(_DWORD *)this != 0 )
  {
    v7 = (*(_DWORD *)(this + 8) - (int)v6) >> 2;
    if ( v7 > 0x3FFFFFFF )
      _invalid_parameter_noinfo_noreturn();
    if ( 4 * v7 >= 0x1000 )
    {
      if ( ((unsigned __int8)v6 & 0x1F) != 0 )
        _invalid_parameter_noinfo_noreturn();
      v8 = *((char **)v6 - 1);
      if ( v8 >= v6 )
        _invalid_parameter_noinfo_noreturn();
      v9 = v6 - v8;
      if ( v9 < 4 )
        _invalid_parameter_noinfo_noreturn();
      if ( v9 > 0x23 )
        _invalid_parameter_noinfo_noreturn();
      v6 = v8;
    }
    j_j___free_base(v6);
  }
  *(_DWORD *)(this + 8) = &v3[a2];
  result = (char *)&v3[v11];
  *(_DWORD *)(this + 4) = result;
  *(_DWORD *)this = v3;
  return result;
}

// Address: 0x100056B0
BOOL sub_100056B0()
{
  ULONGLONG v0; // rax
  ULONGLONG v1; // rax
  ULONGLONG v2; // rax
  struct _OSVERSIONINFOEXW VersionInformation; // [esp+8h] [ebp-128h] BYREF

  VersionInformation.dwOSVersionInfoSize = 284;
  memset(&VersionInformation.dwBuildNumber, 0, 272);
  v0 = VerSetConditionMask(0, 2u, 3u);
  v1 = VerSetConditionMask(v0, 1u, 3u);
  v2 = VerSetConditionMask(v1, 0x20u, 3u);
  VersionInformation.dwMajorVersion = 6;
  VersionInformation.dwMinorVersion = 2;
  VersionInformation.wServicePackMajor = 0;
  return VerifyVersionInfoW(&VersionInformation, 0x23u, v2);
}

// Address: 0x10005777
char *__thiscall sub_10005777(char *this)
{
  sub_100057CA();
  *(_DWORD *)this = 56;
  *((_DWORD *)this + 2) = 0x10000000;
  *((_DWORD *)this + 1) = 0x10000000;
  *((_DWORD *)this + 3) = 3584;
  *((_DWORD *)this + 4) = &unk_1001F2A0;
  if ( sub_10003460((LPCRITICAL_SECTION)(this + 20)) < 0 )
  {
    if ( IsDebuggerPresent() )
      OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
    byte_1002FE98 = 1;
  }
  return this;
}

// Address: 0x100057CA
_DWORD *__thiscall sub_100057CA(_DWORD *this)
{
  memset(this + 5, 0, 0x18u);
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  return this;
}

// Address: 0x10005820
_DWORD *__thiscall sub_10005820(_DWORD *this, int a2)
{
  int v3; // ecx

  *this = &off_1001F334;
  *(this + 1) = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  *(this + 2) = v3;
  *(this + 3) = 0;
  if ( v3 != 0 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v3 + 4))(*(_DWORD *)(*(_DWORD *)v3 + 4), v3);
  return this;
}

// Address: 0x10005860
_DWORD *__thiscall sub_10005860(_DWORD *this, int a2, int a3, char a4)
{
  *this = &off_1001F334;
  *(this + 1) = a2;
  *(this + 2) = a3;
  *(this + 3) = 0;
  if ( a3 != 0 && a4 != 0 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a3 + 4))(*(_DWORD *)(*(_DWORD *)a3 + 4), a3);
  return this;
}

// Address: 0x100058B0
HLOCAL __thiscall sub_100058B0(void *this)
{
  int v2; // ecx
  HLOCAL result; // eax

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_1001F334;
  if ( v2 != 0 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v2 + 8))(*(_DWORD *)(*(_DWORD *)v2 + 8), v2);
  result = *((HLOCAL *)this + 3);
  if ( result != nullptr )
    return LocalFree(*((HLOCAL *)this + 3));
  return result;
}

// Address: 0x100058F0
void *__thiscall sub_100058F0(void *Block, char a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)Block + 2);
  *(_DWORD *)Block = &off_1001F334;
  if ( v3 != 0 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v3 + 8))(*(_DWORD *)(*(_DWORD *)v3 + 8), v3);
  if ( *((_DWORD *)Block + 3) != 0 )
    LocalFree(*((HLOCAL *)Block + 3));
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x10005940
void __cdecl __noreturn sub_10005940(int a1, int a2)
{
  _DWORD pExceptionObject[4]; // [esp+0h] [ebp-10h] BYREF

  sub_10005860(pExceptionObject, a1, a2, 0);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AV_com_error__);
}

// Address: 0x10005965
char *__thiscall sub_10005965(char *this, int a2)
{
  sub_10003020(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10005980
_DWORD *__thiscall sub_10005980(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad allocation";
  *this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10005998
char *__thiscall sub_10005998(char *this, int a2)
{
  sub_10003020(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}

// Address: 0x100059B3
char *__thiscall sub_100059B3(char *this, int a2)
{
  sub_100020B0(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}

// Address: 0x100059D4
char *__thiscall sub_100059D4(char *this, int a2)
{
  sub_10003020(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  return this;
}

// Address: 0x100059EF
char *__thiscall sub_100059EF(char *this, int a2)
{
  sub_10003020(this, a2);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x10005A0A
char *__thiscall sub_10005A0A(char *this, int a2)
{
  sub_100020B0(this, a2);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x10005A2B
// Microsoft VisualC 14/net runtime
char *__thiscall unknown_libname_2(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x10005A58
void __cdecl __noreturn sub_10005A58(int a1)
{
  char pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_100059B3(pExceptionObject, a1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x10005A78
void __cdecl __noreturn sub_10005A78(int a1)
{
  char pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_10005A0A(pExceptionObject, a1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// Address: 0x10005A98
const char *__cdecl std::_Syserror_map(int a1)
{
  const char *v1; // eax

  v1 = (const char *)&unk_1001FA18;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 8;
    if ( v1 == "address family not supported" )
      return "unknown error";
  }
  return *((const char **)v1 + 1);
}

// Address: 0x10005ABD
void __thiscall std::_Fac_node::~_Fac_node(std::_Fac_node *this)
{
  void (__thiscall ***v1)(_DWORD, int); // eax

  v1 = (void (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 8))(*((_DWORD *)this + 1));
  if ( v1 != nullptr )
    (**v1)(v1, 1);
}

// Address: 0x10005B1C
void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(std::_Fac_tidy_reg_t *this)
{
  std::_Fac_node *v1; // ecx
  std::_Fac_node *v2; // esi

  while ( 1 )
  {
    v2 = dword_1002F0A8;
    if ( dword_1002F0A8 == nullptr )
      break;
    v1 = dword_1002F0A8;
    dword_1002F0A8 = *(std::_Fac_node **)dword_1002F0A8;
    std::_Fac_node::~_Fac_node(v1);
    sub_1000BFD1(v2);
  }
}

// Address: 0x10005B43
std::_Init_locks *__thiscall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi

  if ( _InterlockedExchangeAdd(&dword_1002E01C, 1u) == 0 )
  {
    v2 = &stru_1002F0D8;
    do
      _Mtxinit(v2++);
    while ( (int)v2 < (int)&stru_1002F198 );
  }
  return this;
}

// Address: 0x10005B70
std::_Lockit *__thiscall std::_Lockit::_Lockit(std::_Lockit *this, int a2)
{
  *(_DWORD *)this = a2;
  if ( a2 != 0 )
  {
    if ( a2 < 8 )
      unknown_libname_4(&stru_1002F0D8 + a2);
  }
  else
  {
    _lock_locales();
  }
  return this;
}

// Address: 0x10005BC8
void __thiscall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this != 0 )
  {
    if ( v1 < 8 )
      sub_10005C83(&stru_1002F0D8 + v1);
  }
  else
  {
    _unlock_locales();
  }
}

// Address: 0x10005BE7
// attributes: thunk
int j____uncaught_exception(void)
{
  return __uncaught_exception();
}

// Address: 0x10005BEC
void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)
{
  void (__thiscall *v1)(_DWORD); // eax
  PVOID v2; // [esp-4h] [ebp-18h]

  while ( (unsigned int)dword_1002E020 < 0xA )
  {
    v2 = dword_1002F1BC[dword_1002E020++];
    v1 = (void (__thiscall *)(_DWORD))DecodePointer(v2);
    if ( v1 != nullptr )
      v1(v1);
  }
}

// Address: 0x10005C50
void __cdecl _Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

// Address: 0x10005C5E
int __cdecl _Mtxinit(LPCRITICAL_SECTION lpCriticalSection)
{
  return __crtInitializeCriticalSectionEx(lpCriticalSection, 0xFA0u, 0);
}

// Address: 0x10005C75
// Microsoft VisualC 14/net runtime
void __cdecl unknown_libname_4(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}

// Address: 0x10005C83
void __cdecl sub_10005C83(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}

// Address: 0x10005C91
void __cdecl _freea_crt(int a1)
{
  if ( a1 != 0 && *(_DWORD *)(a1 - 8) == 56797 )
    _free_base((void *)(a1 - 8));
}

// Address: 0x10005CAF
int __cdecl initialize_pointers()
{
  HMODULE ModuleHandleW; // esi

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  dword_1002F260 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlsAlloc");
  dword_1002F264 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlsFree");
  dword_1002F268 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlsGetValue");
  dword_1002F26C = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlsSetValue");
  dword_1002F270 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "InitializeCriticalSectionEx");
  dword_1002F274 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "InitOnceExecuteOnce");
  dword_1002F278 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateEventExW");
  dword_1002F27C = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateSemaphoreW");
  dword_1002F280 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateSemaphoreExW");
  dword_1002F284 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateThreadpoolTimer");
  dword_1002F288 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SetThreadpoolTimer");
  dword_1002F28C = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "WaitForThreadpoolTimerCallbacks");
  dword_1002F290 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CloseThreadpoolTimer");
  dword_1002F294 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateThreadpoolWait");
  dword_1002F298 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SetThreadpoolWait");
  dword_1002F29C = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CloseThreadpoolWait");
  dword_1002F2A0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FlushProcessWriteBuffers");
  dword_1002F2A4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "FreeLibraryWhenCallbackReturns");
  dword_1002F2A8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetCurrentProcessorNumber");
  dword_1002F2AC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateSymbolicLinkW");
  dword_1002F2B0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetCurrentPackageId");
  dword_1002F2B4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetTickCount64");
  dword_1002F2B8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetFileInformationByHandleEx");
  dword_1002F2BC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SetFileInformationByHandle");
  dword_1002F2C0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetSystemTimePreciseAsFileTime");
  dword_1002F2C4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "InitializeConditionVariable");
  dword_1002F2C8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "WakeConditionVariable");
  dword_1002F2CC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "WakeAllConditionVariable");
  dword_1002F2D0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SleepConditionVariableCS");
  dword_1002F2D4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "InitializeSRWLock");
  dword_1002F2D8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "AcquireSRWLockExclusive");
  dword_1002F2DC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "TryAcquireSRWLockExclusive");
  dword_1002F2E0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "ReleaseSRWLockExclusive");
  dword_1002F2E4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SleepConditionVariableSRW");
  dword_1002F2E8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CreateThreadpoolWork");
  dword_1002F2EC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "SubmitThreadpoolWork");
  dword_1002F2F0 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CloseThreadpoolWork");
  dword_1002F2F4 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "CompareStringEx");
  dword_1002F2F8 = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "GetLocaleInfoEx");
  dword_1002F2FC = __security_cookie ^ (unsigned int)GetProcAddress(ModuleHandleW, "LCMapStringEx");
  return 0;
}

// Address: 0x10006059
int __cdecl __crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  if ( __security_cookie != dword_1002F270 )
    return ((int (__thiscall *)(uintptr_t, LPCRITICAL_SECTION, DWORD, int))(__security_cookie ^ dword_1002F270))(
             __security_cookie ^ dword_1002F270,
             lpCriticalSection,
             dwSpinCount,
             a3);
  InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
  return 1;
}

// Address: 0x100060A0
HLOCAL __thiscall sub_100060A0(HLOCAL *this)
{
  return LocalFree(*this);
}

// Address: 0x100060E0
_DWORD *__thiscall sub_100060E0(_DWORD *Block, char a2)
{
  *Block = &boost::system::error_category::`vftable';
  *(Block + 1) = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x10006110
int *__stdcall sub_10006110(int *a1, int a2)
{
  int *result; // eax
  int v3; // eax

  if ( a2 > 267 )
  {
    if ( a2 > 10004 )
    {
      switch ( a2 )
      {
        case 10009:
          sub_10006810(a1, 9);
          result = a1;
          break;
        case 10013:
LABEL_31:
          sub_10006810(a1, 13);
          result = a1;
          break;
        case 10014:
          sub_10006810(a1, 14);
          result = a1;
          break;
        case 10022:
          goto LABEL_17;
        case 10024:
LABEL_16:
          sub_10006810(a1, 24);
          result = a1;
          break;
        case 10035:
          sub_10006810(a1, 140);
          result = a1;
          break;
        case 10036:
          sub_10006810(a1, 112);
          result = a1;
          break;
        case 10037:
          sub_10006810(a1, 103);
          result = a1;
          break;
        case 10038:
          sub_10006810(a1, 128);
          result = a1;
          break;
        case 10039:
          sub_10006810(a1, 109);
          result = a1;
          break;
        case 10040:
          sub_10006810(a1, 115);
          result = a1;
          break;
        case 10041:
          sub_10006810(a1, 136);
          result = a1;
          break;
        case 10042:
          sub_10006810(a1, 123);
          result = a1;
          break;
        case 10043:
          sub_10006810(a1, 135);
          result = a1;
          break;
        case 10045:
          sub_10006810(a1, 130);
          result = a1;
          break;
        case 10047:
          sub_10006810(a1, 102);
          result = a1;
          break;
        case 10048:
          sub_10006810(a1, 100);
          result = a1;
          break;
        case 10049:
          sub_10006810(a1, 101);
          result = a1;
          break;
        case 10050:
          sub_10006810(a1, 116);
          result = a1;
          break;
        case 10051:
          sub_10006810(a1, 118);
          result = a1;
          break;
        case 10052:
          sub_10006810(a1, 117);
          result = a1;
          break;
        case 10053:
          sub_10006810(a1, 106);
          result = a1;
          break;
        case 10054:
          sub_10006810(a1, 108);
          result = a1;
          break;
        case 10055:
          sub_10006810(a1, 119);
          result = a1;
          break;
        case 10056:
          sub_10006810(a1, 113);
          result = a1;
          break;
        case 10057:
          sub_10006810(a1, 126);
          result = a1;
          break;
        case 10060:
          sub_10006810(a1, 138);
          result = a1;
          break;
        case 10061:
          sub_10006810(a1, 107);
          result = a1;
          break;
        case 10063:
LABEL_7:
          sub_10006810(a1, 38);
          result = a1;
          break;
        case 10065:
          sub_10006810(a1, 110);
          result = a1;
          break;
        default:
          goto LABEL_58;
      }
    }
    else if ( a2 == 10004 )
    {
      sub_10006810(a1, 4);
      return a1;
    }
    else if ( a2 > 1013 )
    {
      if ( a2 == 1237 )
      {
LABEL_14:
        sub_10006810(a1, 11);
        return a1;
      }
      else if ( a2 == 2401 || a2 == 2404 )
      {
LABEL_28:
        sub_10006810(a1, 16);
        return a1;
      }
      else
      {
LABEL_58:
        v3 = sub_10006CA0();
        *a1 = a2;
        a1[1] = v3;
        return a1;
      }
    }
    else if ( a2 == 1013 )
    {
LABEL_23:
      sub_10006810(a1, 5);
      return a1;
    }
    else
    {
      switch ( a2 )
      {
        case 995:
          sub_10006810(a1, 105);
          result = a1;
          break;
        case 998:
          goto LABEL_31;
        case 1011:
        case 1012:
          goto LABEL_23;
        default:
          goto LABEL_58;
      }
    }
  }
  else if ( a2 == 267 )
  {
LABEL_17:
    sub_10006810(a1, 22);
    return a1;
  }
  else
  {
    switch ( a2 )
    {
      case 0:
        sub_10006810(a1, 0);
        result = a1;
        break;
      case 1:
        sub_10006810(a1, 40);
        result = a1;
        break;
      case 2:
      case 3:
        sub_10006810(a1, 2);
        result = a1;
        break;
      case 4:
        goto LABEL_16;
      case 5:
      case 12:
      case 16:
      case 19:
      case 32:
      case 82:
        goto LABEL_31;
      case 6:
      case 123:
      case 131:
        goto LABEL_17;
      case 8:
      case 14:
        sub_10006810(a1, 12);
        result = a1;
        break;
      case 15:
      case 20:
      case 55:
        sub_10006810(a1, 19);
        result = a1;
        break;
      case 17:
        sub_10006810(a1, 18);
        result = a1;
        break;
      case 21:
        goto LABEL_14;
      case 25:
      case 29:
      case 30:
      case 110:
        goto LABEL_23;
      case 33:
      case 212:
        sub_10006810(a1, 39);
        result = a1;
        break;
      case 39:
      case 112:
        sub_10006810(a1, 28);
        result = a1;
        break;
      case 80:
      case 183:
        sub_10006810(a1, 17);
        result = a1;
        break;
      case 111:
        goto LABEL_7;
      case 142:
      case 170:
        goto LABEL_28;
      case 145:
        sub_10006810(a1, 41);
        result = a1;
        break;
      default:
        goto LABEL_58;
    }
  }
  return result;
}

// Address: 0x10006790
int (__thiscall ***sub_10006790())(void *Block, char)
{
  if ( dword_1002F334 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_1002F334);
    if ( dword_1002F334 == -1 )
    {
      atexit(sub_1001E9A0);
      _Init_thread_footer(&dword_1002F334);
    }
  }
  return off_1002E08C;
}

// Address: 0x10006810
_DWORD *__cdecl sub_10006810(_DWORD *a1, int a2)
{
  if ( dword_1002F334 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_1002F334);
    if ( dword_1002F334 == -1 )
    {
      off_1002E094 = &off_1002E090;
      off_1002E090 = &boost::system::error_category::std_category::`vftable';
      off_1002E098 = off_1002E08C;
      off_1002E08C[0] = &boost::system::`anonymous namespace'::generic_error_category::`vftable';
      atexit(sub_1001E9A0);
      _Init_thread_footer(&dword_1002F334);
    }
  }
  *a1 = a2;
  a1[1] = off_1002E08C;
  return a1;
}

// Address: 0x100068D0
_DWORD *__stdcall sub_100068D0(_DWORD *a1, int ErrorMessage)
{
  char *v2; // eax
  char *v3; // edx
  bool v4; // zf
  size_t v5; // ecx
  void **v6; // ecx
  char v7; // bl
  bool v8; // cf
  _BYTE *v9; // eax
  char v10; // bl
  _DWORD *Src[5]; // [esp+14h] [ebp-40h] BYREF
  unsigned int v13; // [esp+28h] [ebp-2Ch]
  void *Block[4]; // [esp+2Ch] [ebp-28h] BYREF
  int v15; // [esp+3Ch] [ebp-18h]
  unsigned int v16; // [esp+40h] [ebp-14h]
  int v17; // [esp+50h] [ebp-4h]

  if ( dword_1002F32C > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_1002F32C);
    if ( dword_1002F32C == -1 )
    {
      sub_10002CA0(&dword_1002F314, "Unknown error");
      atexit(sub_1001E9E0);
      v17 = -1;
      _Init_thread_footer(&dword_1002F32C);
    }
  }
  v2 = strerror(ErrorMessage);
  v3 = v2;
  if ( v2 != nullptr )
  {
    v4 = *v2 == 0;
    v13 = 15;
    Src[4] = nullptr;
    LOBYTE(Src[0]) = 0;
    if ( v4 )
      v5 = 0;
    else
      v5 = strlen(v2);
    sub_10002BA0(Src, v3, v5);
    v6 = (void **)Src;
    v7 = 1;
  }
  else
  {
    v16 = 15;
    v15 = 0;
    LOBYTE(Block[0]) = 0;
    sub_10002880(Block, &dword_1002F314, 0, 0xFFFFFFFF);
    v6 = Block;
    v7 = 2;
  }
  a1[5] = 15;
  a1[4] = 0;
  v8 = a1[5] < 0x10u;
  v17 = 2;
  if ( v8 )
    v9 = a1;
  else
    v9 = (_BYTE *)*a1;
  *v9 = 0;
  sub_10002360(a1, v6);
  v10 = v7 | 4;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    v17 = 3;
    if ( v16 >= 0x10 )
      sub_10003150((_DWORD *)Block[0], v16 + 1);
    v16 = 15;
    v15 = 0;
    LOBYTE(Block[0]) = 0;
  }
  v17 = -1;
  if ( (v10 & 1) != 0 )
  {
    v17 = 4;
    if ( v13 >= 0x10 )
      sub_10003150(Src[0], v13 + 1);
  }
  return a1;
}

// Address: 0x10006AA0
_DWORD *__stdcall sub_10006AA0(_DWORD *a1, DWORD dwMessageId)
{
  DWORD v2; // eax
  char *v3; // esi
  _BYTE *v4; // eax
  size_t v5; // ecx
  int v6; // ecx
  _DWORD **v7; // eax
  _DWORD **v8; // eax
  _DWORD **v9; // eax
  bool v10; // cf
  _BYTE *v11; // eax
  _DWORD **v12; // eax
  CHAR Buffer[4]; // [esp+18h] [ebp-2Ch] BYREF
  _DWORD *Src[4]; // [esp+1Ch] [ebp-28h] BYREF
  int v16; // [esp+2Ch] [ebp-18h]
  unsigned int v17; // [esp+30h] [ebp-14h]
  int v18; // [esp+40h] [ebp-4h]

  *(_DWORD *)Buffer = 0;
  v2 = FormatMessageA(0x1300u, nullptr, dwMessageId, 0x400u, Buffer, 0, nullptr);
  v3 = *(char **)Buffer;
  v18 = 0;
  if ( v2 != 0 )
  {
    v17 = 15;
    v16 = 0;
    LOBYTE(Src[0]) = 0;
    if ( **(_BYTE **)Buffer != 0 )
      v5 = strlen(*(const char **)Buffer);
    else
      v5 = 0;
    sub_10002BA0(Src, *(_BYTE **)Buffer, v5);
    v6 = v16;
    LOBYTE(v18) = 2;
    if ( v16 != 0 )
    {
      while ( 1 )
      {
        v7 = Src;
        if ( v17 >= 0x10 )
          v7 = (_DWORD **)Src[0];
        if ( *((_BYTE *)v7 + v6 - 1) != 10 )
        {
          v8 = Src;
          if ( v17 >= 0x10 )
            v8 = (_DWORD **)Src[0];
          if ( *((_BYTE *)v8 + v6 - 1) != 13 )
            break;
        }
        if ( v6 == 0 )
          sub_10005A78((int)"invalid string position");
        v16 = v6 - 1;
        v9 = Src;
        if ( v17 >= 0x10 )
          v9 = (_DWORD **)Src[0];
        *((_BYTE *)v9 + v6 - 1) = 0;
        v6 = v16;
        if ( v16 == 0 )
          goto LABEL_20;
      }
      if ( v6 != 0 )
      {
        v12 = Src;
        if ( v17 >= 0x10 )
          v12 = (_DWORD **)Src[0];
        if ( *((_BYTE *)v12 + v6 - 1) == 46 )
          sub_100027A0(Src, v6 - 1);
      }
    }
LABEL_20:
    a1[4] = 0;
    a1[5] = 0;
    a1[5] = 15;
    v10 = a1[5] < 0x10u;
    LOBYTE(v18) = 3;
    a1[4] = 0;
    if ( v10 )
      v11 = a1;
    else
      v11 = (_BYTE *)*a1;
    *v11 = 0;
    sub_10002360(a1, Src);
    LOBYTE(v18) = 4;
    if ( v17 >= 0x10 )
      sub_10003150(Src[0], v17 + 1);
    v17 = 15;
    v16 = 0;
    LOBYTE(Src[0]) = 0;
    v18 = 5;
  }
  else
  {
    a1[5] = 15;
    a1[4] = 0;
    if ( a1[5] < 0x10u )
      v4 = a1;
    else
      v4 = (_BYTE *)*a1;
    *v4 = 0;
    sub_10002BA0(a1, "Unknown error", 0xDu);
    v18 = 1;
  }
  LocalFree(v3);
  return a1;
}

// Address: 0x10006C90
const char *sub_10006C90()
{
  return "system";
}

// Address: 0x10006CA0
int (__thiscall ***sub_10006CA0())(void *Block, char)
{
  if ( dword_1002F330 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_1002F330);
    if ( dword_1002F330 == -1 )
    {
      atexit(sub_1001E9C0);
      _Init_thread_footer(&dword_1002F330);
    }
  }
  return off_1002E07C;
}

// Address: 0x10006D20
int __thiscall sub_10006D20(int *this)
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

// Address: 0x10006D70
int __thiscall sub_10006D70(volatile signed __int32 **this)
{
  volatile signed __int32 *v1; // esi
  int result; // eax

  v1 = *this;
  if ( *this != nullptr )
  {
    result = _InterlockedExchangeAdd(v1 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
      result = (int)(v1 + 2);
      if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v1 + 8))(v1);
    }
  }
  return result;
}

// Address: 0x10006DE0
_DWORD *__thiscall sub_10006DE0(_DWORD *Block, char a2)
{
  *Block = &boost::detail::sp_counted_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x10006E10
int __thiscall sub_10006E10(int (__thiscall ***this)(void *, int))
{
  int result; // eax

  if ( this != nullptr )
    return (**this)(this, 1);
  return result;
}

// Address: 0x10006E20
char *__thiscall sub_10006E20(char *this)
{
  int v2; // ecx
  int v3; // eax
  char *v4; // ecx
  int v5; // ecx
  char *v6; // ecx
  int v7; // edx
  int v8; // ecx

  v2 = *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 56);
  if ( v2 != 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
    v3 = *(_DWORD *)(*(_DWORD *)this + 4);
    if ( *(_DWORD *)(this + v3 + 12) == 0 )
    {
      v4 = *(char **)(this + v3 + 60);
      if ( v4 != nullptr && v4 != this )
        sub_10006E20();
    }
    v5 = *(_DWORD *)(*(_DWORD *)this + 4);
    if ( *(_DWORD *)(this + v5 + 12) == 0
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + v5 + 56) + 52))(*(_DWORD *)(this + v5 + 56)) == -1 )
    {
      v6 = this + *(_DWORD *)(*(_DWORD *)this + 4);
      v7 = *((_DWORD *)v6 + 3) | 4;
      if ( *((_DWORD *)v6 + 14) != 0 )
        v7 = *((_DWORD *)v6 + 3);
      sub_10003050(v6, v7 | 4, 0);
    }
    if ( (unsigned __int8)j____uncaught_exception() == 0 )
      sub_10007650();
    v8 = *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 56);
    if ( v8 != 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  }
  return this;
}

// Address: 0x10006F10
int __cdecl sub_10006F10(char *a1, unsigned int a2, int a3)
{
  char *v3; // ebp
  char *v5; // edi
  int result; // eax
  char *v7; // eax
  int i; // ebx
  char v9; // dl
  unsigned int v10; // ecx
  bool v11; // zf
  char *v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // [esp+10h] [ebp-11h]
  char *v16; // [esp+18h] [ebp-9h]
  char v17; // [esp+20h] [ebp-1h] BYREF
  char v18; // [esp+21h] [ebp+0h] BYREF
  char v19; // [esp+22h] [ebp+1h] BYREF
  int v20; // [esp+320h] [ebp+2FFh] BYREF

  v3 = &v18;
  v16 = &v18;
  v5 = &a0123456789abcd[16 * ((*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a3 + 4) + a3 + 20) & 4) != 0)];
  result = (unsigned __int8)a2;
  v15 = a2 >> 8;
  if ( a2 >> 8 != 0 )
  {
    do
    {
      v7 = &v19;
      for ( i = 256; i != 0; --i )
      {
        v9 = *a1;
        v7 += 3;
        v10 = (unsigned __int8)*a1;
        *(v7 - 5) = 32;
        ++a1;
        *(v7 - 4) = v5[v10 >> 4];
        *(v7 - 3) = v5[v9 & 0xF];
      }
      sub_10007800(v3, (char *)&v20 - v3, ((char *)&v20 - v3) >> 31);
      v11 = v15-- == 1;
      v3 = &v17;
    }
    while ( !v11 );
    result = (unsigned __int8)a2;
    v16 = &v17;
  }
  if ( result != 0 )
  {
    v12 = &v17;
    v13 = 0;
    do
    {
      v14 = (unsigned __int8)*a1++;
      *v12 = 32;
      ++v13;
      v12[1] = v5[v14 >> 4];
      v12[2] = v5[v14 & 0xF];
      v12 += 3;
    }
    while ( v13 < (unsigned __int8)a2 );
    return sub_10007800(v16, v12 - v16, (v12 - v16) >> 31);
  }
  return result;
}

// Address: 0x10007050
int __cdecl sub_10007050(char *a1, unsigned int a2, int a3)
{
  char *v4; // edi
  int result; // eax
  char *v6; // eax
  int i; // ebx
  char v8; // dl
  unsigned int v9; // ecx
  bool v10; // zf
  char *v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  char *v14; // [esp+10h] [ebp-12h]
  unsigned int v15; // [esp+14h] [ebp-Eh]
  _BYTE v16[2]; // [esp+20h] [ebp-2h] BYREF
  __int16 v17; // [esp+22h] [ebp+0h] BYREF
  char v18; // [esp+24h] [ebp+2h] BYREF
  int v19; // [esp+620h] [ebp+5FEh] BYREF

  v14 = (char *)&v17;
  v4 = &a0123456789abcd[16 * ((*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a3 + 4) + a3 + 20) & 4) != 0)];
  result = (unsigned __int8)a2;
  v15 = a2 >> 8;
  if ( a2 >> 8 != 0 )
  {
    do
    {
      v6 = &v18;
      for ( i = 256; i != 0; --i )
      {
        v8 = *a1;
        v6 += 6;
        v9 = (unsigned __int8)*a1;
        *((_WORD *)v6 - 5) = 32;
        ++a1;
        *((_WORD *)v6 - 4) = v4[v9 >> 4];
        *((_WORD *)v6 - 3) = v4[v8 & 0xF];
      }
      sub_10007B00(v14, ((char *)&v19 - v14) >> 1, ((char *)&v19 - v14) >> 31);
      v10 = v15-- == 1;
      v14 = v16;
    }
    while ( !v10 );
    result = (unsigned __int8)a2;
  }
  if ( result != 0 )
  {
    v11 = v16;
    v12 = 0;
    do
    {
      v13 = (unsigned __int8)*a1++;
      ++v12;
      *(_WORD *)v11 = 32;
      *((_WORD *)v11 + 1) = v4[v13 >> 4];
      *((_WORD *)v11 + 2) = v4[v13 & 0xF];
      v11 += 6;
    }
    while ( v12 < (unsigned __int8)a2 );
    return sub_10007B00(v14, (v11 - v14) >> 1, (v11 - v14) >> 31);
  }
  return result;
}

// Address: 0x100071A0
int __cdecl sub_100071A0(char *a1, unsigned int a2, int a3)
{
  char *v4; // edi
  int result; // eax
  char *v6; // eax
  int i; // ebx
  char v8; // dl
  unsigned int v9; // ecx
  bool v10; // zf
  char *v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  char *v14; // [esp+10h] [ebp-12h]
  unsigned int v15; // [esp+14h] [ebp-Eh]
  _BYTE v16[2]; // [esp+20h] [ebp-2h] BYREF
  __int16 v17; // [esp+22h] [ebp+0h] BYREF
  char v18; // [esp+24h] [ebp+2h] BYREF
  int v19; // [esp+620h] [ebp+5FEh] BYREF

  v14 = (char *)&v17;
  v4 = &a0123456789abcd[16 * ((*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a3 + 4) + a3 + 20) & 4) != 0)];
  result = (unsigned __int8)a2;
  v15 = a2 >> 8;
  if ( a2 >> 8 != 0 )
  {
    do
    {
      v6 = &v18;
      for ( i = 256; i != 0; --i )
      {
        v8 = *a1;
        v6 += 6;
        v9 = (unsigned __int8)*a1;
        *((_WORD *)v6 - 5) = 32;
        ++a1;
        *((_WORD *)v6 - 4) = v4[v9 >> 4];
        *((_WORD *)v6 - 3) = v4[v8 & 0xF];
      }
      sub_10007980(v14, ((char *)&v19 - v14) >> 1, ((char *)&v19 - v14) >> 31);
      v10 = v15-- == 1;
      v14 = v16;
    }
    while ( !v10 );
    result = (unsigned __int8)a2;
  }
  if ( result != 0 )
  {
    v11 = v16;
    v12 = 0;
    do
    {
      v13 = (unsigned __int8)*a1++;
      ++v12;
      *(_WORD *)v11 = 32;
      *((_WORD *)v11 + 1) = v4[v13 >> 4];
      *((_WORD *)v11 + 2) = v4[v13 & 0xF];
      v11 += 6;
    }
    while ( v12 < (unsigned __int8)a2 );
    return sub_10007980(v14, (v11 - v14) >> 1, (v11 - v14) >> 31);
  }
  return result;
}

// Address: 0x100072F0
int __cdecl sub_100072F0(char *a1, unsigned int a2, int a3)
{
  int *v3; // ebp
  char *v5; // edi
  int result; // eax
  char *v7; // eax
  int i; // ebx
  char v9; // dl
  unsigned int v10; // ecx
  bool v11; // zf
  char *v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // [esp+10h] [ebp-14h]
  int *v16; // [esp+18h] [ebp-Ch]
  char v17; // [esp+20h] [ebp-4h] BYREF
  int v18; // [esp+24h] [ebp+0h] BYREF
  char v19; // [esp+28h] [ebp+4h] BYREF
  int v20; // [esp+C20h] [ebp+BFCh] BYREF

  v3 = &v18;
  v16 = &v18;
  v5 = &a0123456789abcd[16 * ((*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a3 + 4) + a3 + 20) & 4) != 0)];
  result = (unsigned __int8)a2;
  v15 = a2 >> 8;
  if ( a2 >> 8 != 0 )
  {
    do
    {
      v7 = &v19;
      for ( i = 256; i != 0; --i )
      {
        v9 = *a1;
        v7 += 12;
        v10 = (unsigned __int8)*a1;
        *((_DWORD *)v7 - 5) = 32;
        ++a1;
        *((_DWORD *)v7 - 4) = v5[v10 >> 4];
        *((_DWORD *)v7 - 3) = v5[v9 & 0xF];
      }
      sub_10007980(v3, &v20 - v3, ((char *)&v20 - (char *)v3) >> 31);
      v11 = v15-- == 1;
      v3 = (int *)&v17;
    }
    while ( !v11 );
    result = (unsigned __int8)a2;
    v16 = (int *)&v17;
  }
  if ( result != 0 )
  {
    v12 = &v17;
    v13 = 0;
    do
    {
      v14 = (unsigned __int8)*a1++;
      *(_DWORD *)v12 = 32;
      ++v13;
      *((_DWORD *)v12 + 1) = v5[v14 >> 4];
      *((_DWORD *)v12 + 2) = v5[v14 & 0xF];
      v12 += 12;
    }
    while ( v13 < (unsigned __int8)a2 );
    return sub_10007980(v16, (v12 - (char *)v16) >> 2, (v12 - (char *)v16) >> 31);
  }
  return result;
}

// Address: 0x10007430
void *__thiscall sub_10007430(void *this)
{
  unsigned int v7; // esi
  HMODULE ModuleHandleW; // eax
  FARPROC ProcAddress; // eax
  int v15; // edx
  int v17; // [esp+Ch] [ebp-20h] BYREF
  int v18; // [esp+10h] [ebp-1Ch] BYREF
  char v19[4]; // [esp+14h] [ebp-18h] BYREF
  char v20[4]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v21; // [esp+1Ch] [ebp-10h]
  int v22; // [esp+20h] [ebp-Ch]
  int v23; // [esp+24h] [ebp-8h]
  int v24; // [esp+28h] [ebp-4h]

  _EAX = 0;
  __asm { cpuid }
  v21 = _EAX;
  v22 = _EBX;
  v23 = _ECX;
  v24 = _EDX;
  v7 = _EAX;
  if ( _EAX != 0 )
  {
    _EAX = 1;
    __asm { cpuid }
    v21 = _EAX;
    v22 = _EBX;
    v23 = _ECX;
    v24 = _EDX;
    if ( (_ECX & 0x200) != 0 )
    {
      off_1002E0AC[0] = sub_100086E0;
      off_1002E0B0[0] = sub_10008AA0;
      off_1002E0B4[0] = sub_10007C80;
      off_1002E0B8 = sub_10008110;
    }
    if ( v7 >= 7 && (_ECX & 0x8000000) != 0 )
    {
      ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
      if ( ModuleHandleW != nullptr )
      {
        ProcAddress = GetProcAddress(ModuleHandleW, "GetEnabledExtendedFeatures");
        if ( ProcAddress != nullptr && ((int (__stdcall *)(int, _DWORD))ProcAddress)(6, 0) == 6 && v15 == 0 )
        {
          v18 = 7;
          v17 = 0;
          sub_100076E0(&v18, &v17, v20, v19);
          if ( (v17 & 0x20) != 0 )
          {
            off_1002E0AC[0] = sub_10009930;
            off_1002E0B0[0] = sub_10009D40;
            off_1002E0B4[0] = sub_10008F30;
            off_1002E0B8 = sub_100093B0;
          }
        }
      }
    }
  }
  return this;
}

// Address: 0x10007560
_BYTE *__thiscall sub_10007560(_BYTE *this, int a2)
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
      sub_10007740();
  }
  *(this + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2 + 12) == 0;
  return this;
}

// Address: 0x100075F0
int __thiscall sub_100075F0(void *this)
{
  int result; // eax
  int v3; // ecx

  if ( (unsigned __int8)j____uncaught_exception() == 0 )
    sub_10007650();
  result = *(_DWORD *)(**(_DWORD **)this + 4);
  v3 = *(_DWORD *)(result + *(_DWORD *)this + 56);
  if ( v3 != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  return result;
}

// Address: 0x10007650
int __thiscall sub_10007650(_BYTE *this)
{
  int v2; // eax
  int result; // eax
  _DWORD *v4; // ecx
  int v5; // edx
  _DWORD v6[8]; // [esp+0h] [ebp-20h] BYREF

  v6[4] = v6;
  v2 = *(_DWORD *)this;
  v6[7] = 0;
  result = *(_DWORD *)(v2 + 4);
  if ( *(_DWORD *)(this + result + 12) == 0 && (*(this + result + 20) & 2) != 0 )
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + result + 56) + 52))(*(_DWORD *)(this + result + 56));
    if ( result == -1 )
    {
      v4 = this + *(_DWORD *)(*(_DWORD *)this + 4);
      v5 = v4[3] | 4;
      if ( v4[14] != 0 )
        v5 = v4[3];
      return sub_10003050(v4, v5 | 4, 0);
    }
  }
  return result;
}

// Address: 0x100076E0
int __cdecl sub_100076E0(int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _EAX = *a1;
  __asm { cpuid }
  *a1 = _EAX;
  *a2 = _EBX;
  *a3 = _ECX;
  *a4 = _EDX;
  return _EDX;
}

// Address: 0x10007740
char *__thiscall sub_10007740(char *this)
{
  int v2; // ecx
  char *v3; // ecx
  int v4; // edx
  int v5; // ecx
  _BYTE *v7; // [esp+8h] [ebp-14h] BYREF
  char v8; // [esp+Ch] [ebp-10h]
  int v9; // [esp+18h] [ebp-4h]

  if ( *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 56) != 0 )
  {
    sub_10007560(&v7, (int)this);
    v9 = 0;
    if ( v8 != 0 )
    {
      v2 = *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 56);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2) == -1 )
      {
        v3 = this + *(_DWORD *)(*(_DWORD *)this + 4);
        v4 = *((_DWORD *)v3 + 3) | 4;
        if ( *((_DWORD *)v3 + 14) != 0 )
          v4 = *((_DWORD *)v3 + 3);
        sub_10003050(v3, v4 | 4, 0);
      }
    }
    v9 = 1;
    if ( (unsigned __int8)j____uncaught_exception() == 0 )
      sub_10007650(v7);
    LOBYTE(v9) = 2;
    v5 = *(_DWORD *)&v7[*(_DWORD *)(*(_DWORD *)v7 + 4) + 56];
    if ( v5 != 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  }
  return this;
}

// Address: 0x10007800
char *__thiscall sub_10007800(char *this, int a2, __int64 a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  char *v9; // ecx
  int v10; // ecx
  char *v11; // ecx
  int v12; // edx
  char v13; // al
  int v14; // eax
  int v15; // ecx
  int v17; // eax
  int v18; // edx
  _DWORD v19[5]; // [esp+0h] [ebp-30h] BYREF
  bool v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  char *v22; // [esp+1Ch] [ebp-14h]
  _DWORD *v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-4h]

  v23 = v19;
  v22 = this;
  v4 = *(_DWORD *)this;
  v5 = 0;
  v21 = 0;
  v19[4] = this;
  v6 = *(_DWORD *)(this + *(_DWORD *)(v4 + 4) + 56);
  if ( v6 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *(_DWORD *)this;
  v24 = 0;
  v8 = *(_DWORD *)(v7 + 4);
  if ( *(_DWORD *)(this + v8 + 12) == 0 )
  {
    v9 = *(char **)(this + v8 + 60);
    if ( v9 != nullptr && v9 != this )
      sub_10001F00(v9);
  }
  v10 = *(_DWORD *)(*(_DWORD *)this + 4);
  v20 = *(_DWORD *)(this + v10 + 12) == 0;
  v24 = 1;
  if ( v20 )
  {
    if ( a3 > 0 )
    {
      v17 = **(_DWORD **)(this + v10 + 56);
      LOBYTE(v24) = 2;
      if ( (*(int (__stdcall **)(int, _DWORD, _DWORD))(v17 + 36))(a2, a3, HIDWORD(a3)) != (_DWORD)a3
        || v18 != HIDWORD(a3) )
      {
        v5 = 4;
      }
      v24 = 1;
    }
  }
  else
  {
    v5 = 4;
  }
  v11 = this + *(_DWORD *)(*(_DWORD *)this + 4);
  if ( v5 != 0 )
  {
    v12 = v5 | *((_DWORD *)v11 + 3);
    v13 = v12 | 4;
    if ( *((_DWORD *)v11 + 14) != 0 )
      v13 = v12;
    sub_10003050(v11, v13, 0);
  }
  v24 = 4;
  if ( (unsigned __int8)j____uncaught_exception(v11) == 0 )
    sub_10001E00(this);
  v14 = *(_DWORD *)this;
  LOBYTE(v24) = 5;
  v15 = *(_DWORD *)(this + *(_DWORD *)(v14 + 4) + 56);
  if ( v15 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
  return this;
}

// Address: 0x10007980
char *__thiscall sub_10007980(char *this, int a2, __int64 a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  char *v9; // ecx
  int v10; // ecx
  char *v11; // ecx
  int v12; // edx
  char v13; // al
  int v14; // eax
  int v15; // ecx
  int v17; // eax
  int v18; // edx
  _DWORD v19[5]; // [esp+0h] [ebp-30h] BYREF
  bool v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  char *v22; // [esp+1Ch] [ebp-14h]
  _DWORD *v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-4h]

  v23 = v19;
  v22 = this;
  v4 = *(_DWORD *)this;
  v5 = 0;
  v21 = 0;
  v19[4] = this;
  v6 = *(_DWORD *)(this + *(_DWORD *)(v4 + 4) + 56);
  if ( v6 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *(_DWORD *)this;
  v24 = 0;
  v8 = *(_DWORD *)(v7 + 4);
  if ( *(_DWORD *)(this + v8 + 12) == 0 )
  {
    v9 = *(char **)(this + v8 + 60);
    if ( v9 != nullptr && v9 != this )
      sub_10007740(v9);
  }
  v10 = *(_DWORD *)(*(_DWORD *)this + 4);
  v20 = *(_DWORD *)(this + v10 + 12) == 0;
  v24 = 1;
  if ( v20 )
  {
    if ( a3 > 0 )
    {
      v17 = **(_DWORD **)(this + v10 + 56);
      LOBYTE(v24) = 2;
      if ( (*(int (__stdcall **)(int, _DWORD, _DWORD))(v17 + 36))(a2, a3, HIDWORD(a3)) != (_DWORD)a3
        || v18 != HIDWORD(a3) )
      {
        v5 = 4;
      }
      v24 = 1;
    }
  }
  else
  {
    v5 = 4;
  }
  v11 = this + *(_DWORD *)(*(_DWORD *)this + 4);
  if ( v5 != 0 )
  {
    v12 = v5 | *((_DWORD *)v11 + 3);
    v13 = v12 | 4;
    if ( *((_DWORD *)v11 + 14) != 0 )
      v13 = v12;
    sub_10003050(v11, v13, 0);
  }
  v24 = 4;
  if ( (unsigned __int8)j____uncaught_exception(v11) == 0 )
    sub_10007650(this);
  v14 = *(_DWORD *)this;
  LOBYTE(v24) = 5;
  v15 = *(_DWORD *)(this + *(_DWORD *)(v14 + 4) + 56);
  if ( v15 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
  return this;
}

// Address: 0x10007B00
char *__thiscall sub_10007B00(char *this, int a2, __int64 a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  char *v9; // ecx
  int v10; // ecx
  char *v11; // ecx
  int v12; // edx
  char v13; // al
  int v14; // eax
  int v15; // ecx
  int v17; // eax
  int v18; // edx
  _DWORD v19[5]; // [esp+0h] [ebp-30h] BYREF
  bool v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  char *v22; // [esp+1Ch] [ebp-14h]
  _DWORD *v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-4h]

  v23 = v19;
  v22 = this;
  v4 = *(_DWORD *)this;
  v5 = 0;
  v21 = 0;
  v19[4] = this;
  v6 = *(_DWORD *)(this + *(_DWORD *)(v4 + 4) + 56);
  if ( v6 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *(_DWORD *)this;
  v24 = 0;
  v8 = *(_DWORD *)(v7 + 4);
  if ( *(_DWORD *)(this + v8 + 12) == 0 )
  {
    v9 = *(char **)(this + v8 + 60);
    if ( v9 != nullptr && v9 != this )
      sub_10006E20(v9);
  }
  v10 = *(_DWORD *)(*(_DWORD *)this + 4);
  v20 = *(_DWORD *)(this + v10 + 12) == 0;
  v24 = 1;
  if ( v20 )
  {
    if ( a3 > 0 )
    {
      v17 = **(_DWORD **)(this + v10 + 56);
      LOBYTE(v24) = 2;
      if ( (*(int (__stdcall **)(int, _DWORD, _DWORD))(v17 + 36))(a2, a3, HIDWORD(a3)) != (_DWORD)a3
        || v18 != HIDWORD(a3) )
      {
        v5 = 4;
      }
      v24 = 1;
    }
  }
  else
  {
    v5 = 4;
  }
  v11 = this + *(_DWORD *)(*(_DWORD *)this + 4);
  if ( v5 != 0 )
  {
    v12 = v5 | *((_DWORD *)v11 + 3);
    v13 = v12 | 4;
    if ( *((_DWORD *)v11 + 14) != 0 )
      v13 = v12;
    sub_10003050(v11, v13, 0);
  }
  v24 = 4;
  if ( (unsigned __int8)j____uncaught_exception(v11) == 0 )
    sub_10007650(this);
  v14 = *(_DWORD *)this;
  LOBYTE(v24) = 5;
  v15 = *(_DWORD *)(this + *(_DWORD *)(v14 + 4) + 56);
  if ( v15 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
  return this;
}

// Address: 0x10007C80
char *__cdecl sub_10007C80(__m128i *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edx
  __m128i *v4; // edi
  char v5; // sp
  __m128i *v6; // esi
  __m128i v7; // xmm4
  __m128i v8; // xmm0
  __m128i v9; // xmm3
  __m128i v10; // xmm5
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm5
  __m128i v14; // xmm3
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm5
  __m128i v18; // xmm0
  unsigned int v19; // eax
  unsigned int v20; // edx
  char *result; // eax
  __m128i v22; // xmm4
  int i; // ecx
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm0
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm2
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __m128i v33; // xmm3
  bool v34; // zf
  __m128i *v35; // eax
  __m128i v36; // xmm1
  __m128i v37; // xmm0
  __m128i v38; // xmm3
  __m128i v39; // xmm3
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __m128i v46; // xmm3
  __m128i v47; // xmm0
  int v48; // ecx
  unsigned int v49; // ecx
  int v50; // [esp+14h] [ebp-C4Ch]
  char *v51; // [esp+14h] [ebp-C4Ch]
  unsigned int v52; // [esp+14h] [ebp-C4Ch]
  char *v53; // [esp+14h] [ebp-C4Ch]
  __int8 *v54; // [esp+1Ch] [ebp-C44h]
  __m128i v55; // [esp+20h] [ebp-C40h]
  _BYTE v56[3092]; // [esp+48h] [ebp-C18h] BYREF
  unsigned int v57; // [esp+C6Ch] [ebp+Ch]

  v3 = a2;
  v4 = a1;
  if ( a2 < 0x10 )
    return (char *)sub_100071A0(a1->m128i_i8, a2, (int)a3);
  v6 = (__m128i *)&v56[-((v5 + 56) & 0xF)];
  v54 = &v6->m128i_i8[2];
  if ( (a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0 )
    v7 = (__m128i)xmmword_10022580;
  else
    v7 = (__m128i)xmmword_10022590;
  v55 = v7;
  v50 = -(int)a1 & 0xF;
  if ( v50 != 0 )
  {
    v8 = _mm_lddqu_si128(a1);
    v9 = _mm_and_si128((__m128i)xmmword_10022540, v8);
    v10 = _mm_and_si128(_mm_srli_epi16(v8, 4u), (__m128i)xmmword_10022540);
    v11 = _mm_add_epi8(
            _mm_and_si128(_mm_cmpgt_epi8(v9, (__m128i)xmmword_10022550), v7),
            _mm_add_epi8(v9, (__m128i)xmmword_10022560));
    v12 = _mm_add_epi8(
            _mm_and_si128(_mm_cmpgt_epi8(v10, (__m128i)xmmword_10022550), v7),
            _mm_add_epi8(v10, (__m128i)xmmword_10022560));
    v13 = _mm_unpackhi_epi8(v12, v11);
    v14 = _mm_unpacklo_epi8(v12, v11);
    v15 = _mm_max_epu8(_mm_shuffle_epi8(v14, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
    *v6 = _mm_unpacklo_epi8(v15, (__m128i)0LL);
    v6[1] = _mm_unpackhi_epi8(v15, (__m128i)0LL);
    v16 = v13;
    v17 = _mm_max_epu8(_mm_shuffle_epi8(v13, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
    v18 = _mm_max_epu8(
            _mm_shuffle_epi8(_mm_alignr_epi8(v16, v14, 10), (__m128i)xmmword_10022520),
            (__m128i)xmmword_10022570);
    v6[2] = _mm_unpacklo_epi8(v18, (__m128i)0LL);
    v6[3] = _mm_unpackhi_epi8(v18, (__m128i)0LL);
    v6[4] = _mm_unpacklo_epi8(v17, (__m128i)0LL);
    v6[5] = _mm_unpackhi_epi8(v17, (__m128i)0LL);
    sub_10007980(a3, (int)v54, 3 * (-(int)a1 & 0xFu) - 1);
    v3 = a2 - v50;
    v4 = (__m128i *)((char *)a1 + v50);
    v54 = &v56[-((v5 + 56) & 0xF)];
  }
  v19 = v3;
  v20 = v3 & 0x1FF;
  result = (char *)(v19 >> 9);
  v51 = result;
  v57 = v20;
  if ( result != nullptr )
  {
    v22 = 0;
    result = v6[5].m128i_i8;
    do
    {
      for ( i = 32; i != 0; --i )
      {
        result += 96;
        v24 = _mm_srli_epi16(*v4, 4u);
        v25 = _mm_and_si128((__m128i)xmmword_10022540, *v4++);
        v26 = _mm_and_si128(v24, (__m128i)xmmword_10022540);
        v27 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v25, (__m128i)xmmword_10022550), v55),
                _mm_add_epi8(v25, (__m128i)xmmword_10022560));
        v28 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v26, (__m128i)xmmword_10022550), v55),
                _mm_add_epi8(v26, (__m128i)xmmword_10022560));
        v29 = _mm_unpackhi_epi8(v28, v27);
        v30 = _mm_unpacklo_epi8(v28, v27);
        v31 = _mm_max_epu8(_mm_shuffle_epi8(v30, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
        *((__m128i *)result - 11) = _mm_unpacklo_epi8(v31, v22);
        *((__m128i *)result - 10) = _mm_unpackhi_epi8(v31, v22);
        v32 = _mm_max_epu8(
                _mm_shuffle_epi8(_mm_alignr_epi8(v29, v30, 10), (__m128i)xmmword_10022520),
                (__m128i)xmmword_10022570);
        v33 = _mm_max_epu8(_mm_shuffle_epi8(v29, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
        *((__m128i *)result - 9) = _mm_unpacklo_epi8(v32, v22);
        *((__m128i *)result - 8) = _mm_unpackhi_epi8(v32, v22);
        *((__m128i *)result - 7) = _mm_unpacklo_epi8(v33, v22);
        *((__m128i *)result - 6) = _mm_unpackhi_epi8(v33, v22);
      }
      sub_10007980(a3, (int)v54, ((char *)&v6[192] - v54) >> 1);
      v34 = v51-- == (char *)1;
      result = v6[5].m128i_i8;
      v54 = &v56[-((v5 + 56) & 0xF)];
      v22 = 0;
    }
    while ( !v34 );
    v20 = v57;
  }
  if ( v20 != 0 )
  {
    if ( v20 >= 0x10 )
    {
      v35 = v6 + 5;
      v52 = v20 >> 4;
      do
      {
        v36 = *v4;
        v35 += 6;
        v37 = *v4++;
        v20 -= 16;
        v38 = _mm_and_si128(_mm_srli_epi16(v37, 4u), (__m128i)xmmword_10022540);
        v39 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v38, (__m128i)xmmword_10022550), v55),
                _mm_add_epi8(v38, (__m128i)xmmword_10022560));
        v40 = _mm_and_si128(v36, (__m128i)xmmword_10022540);
        v41 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v40, (__m128i)xmmword_10022550), v55),
                _mm_add_epi8(v40, (__m128i)xmmword_10022560));
        v42 = _mm_unpacklo_epi8(v39, v41);
        v43 = _mm_unpackhi_epi8(v39, v41);
        v44 = _mm_max_epu8(_mm_shuffle_epi8(v42, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
        *v6 = _mm_unpacklo_epi8(v44, (__m128i)0LL);
        v6 += 6;
        v34 = v52-- == 1;
        v35[-10] = _mm_unpackhi_epi8(v44, (__m128i)0LL);
        v45 = v43;
        v46 = _mm_max_epu8(_mm_shuffle_epi8(v43, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
        v47 = _mm_max_epu8(
                _mm_shuffle_epi8(_mm_alignr_epi8(v45, v42, 10), (__m128i)xmmword_10022520),
                (__m128i)xmmword_10022570);
        v35[-9] = _mm_unpacklo_epi8(v47, (__m128i)0LL);
        v35[-8] = _mm_unpackhi_epi8(v47, (__m128i)0LL);
        v35[-7] = _mm_unpacklo_epi8(v46, (__m128i)0LL);
        v35[-6] = _mm_unpackhi_epi8(v46, (__m128i)0LL);
      }
      while ( !v34 );
      v57 = v20;
    }
    v48 = (int)v54;
    v53 = &a0123456789abcd[16 * ((*(_DWORD *)&a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0)];
    if ( v20 != 0 )
    {
      do
      {
        v49 = v4->m128i_u8[0];
        v4 = (__m128i *)((char *)v4 + 1);
        v6->m128i_i16[0] = 32;
        v6->m128i_i16[1] = v53[v49 >> 4];
        v6->m128i_i16[2] = v53[v49 & 0xF];
        v6 = (__m128i *)((char *)v6 + 6);
        --v57;
      }
      while ( v57 != 0 );
      v48 = (int)v54;
    }
    return sub_10007980(a3, v48, ((int)v6->m128i_i32 - v48) >> 1);
  }
  return result;
}

// Address: 0x10008110
char *__cdecl sub_10008110(__m128i *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edx
  __m128i *v4; // edi
  char v5; // sp
  __m128i *v6; // esi
  __m128i v7; // xmm4
  __int8 *v8; // ecx
  __m128i v9; // xmm0
  __m128i v10; // xmm3
  __m128i v11; // xmm6
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm6
  __m128i v15; // xmm3
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm0
  __m128i v19; // xmm2
  __m128i v20; // xmm6
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm6
  unsigned int v26; // eax
  unsigned int v27; // edx
  char *result; // eax
  __m128i v29; // xmm5
  int v30; // edx
  __m128i v31; // xmm3
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm4
  __m128i v35; // xmm0
  __m128i v36; // xmm3
  __m128i v37; // xmm4
  __m128i v38; // xmm3
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  __m128i v41; // xmm0
  __m128i v42; // xmm2
  __m128i v43; // xmm1
  __m128i v44; // xmm2
  __m128i v45; // xmm4
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __m128i v48; // xmm4
  bool v49; // zf
  __m128i *v50; // eax
  __m128i v51; // xmm3
  unsigned int v52; // ecx
  __m128i v53; // xmm1
  __m128i v54; // xmm0
  __m128i v55; // xmm4
  __m128i v56; // xmm4
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  __m128i v59; // xmm3
  __m128i v60; // xmm4
  __m128i v61; // xmm1
  __m128i v62; // xmm2
  __m128i v63; // xmm0
  __m128i v64; // xmm2
  __m128i v65; // xmm1
  __m128i v66; // xmm2
  __m128i v67; // xmm4
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  __m128i v70; // xmm4
  char *v71; // ecx
  unsigned int v72; // ecx
  int v73; // [esp+14h] [ebp-186Ch]
  char *v74; // [esp+14h] [ebp-186Ch]
  char *v75; // [esp+14h] [ebp-186Ch]
  __int8 *v76; // [esp+1Ch] [ebp-1864h]
  __m128i v77; // [esp+20h] [ebp-1860h]
  _BYTE v78[6196]; // [esp+48h] [ebp-1838h] BYREF
  unsigned int v79; // [esp+188Ch] [ebp+Ch]

  v3 = a2;
  v4 = a1;
  if ( a2 < 0x10 )
    return (char *)sub_100072F0(a1->m128i_i8, a2, (int)a3);
  v6 = (__m128i *)&v78[-((v5 + 56) & 0xF)];
  v76 = &v6->m128i_i8[4];
  if ( (a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0 )
    v7 = (__m128i)xmmword_10022580;
  else
    v7 = (__m128i)xmmword_10022590;
  v8 = &v6->m128i_i8[4];
  v77 = v7;
  v73 = -(int)a1 & 0xF;
  if ( v73 != 0 )
  {
    v9 = _mm_lddqu_si128(a1);
    v10 = _mm_and_si128((__m128i)xmmword_10022540, v9);
    v11 = _mm_and_si128(_mm_srli_epi16(v9, 4u), (__m128i)xmmword_10022540);
    v12 = _mm_add_epi8(
            _mm_and_si128(_mm_cmpgt_epi8(v10, (__m128i)xmmword_10022550), v7),
            _mm_add_epi8(v10, (__m128i)xmmword_10022560));
    v13 = _mm_add_epi8(
            _mm_and_si128(_mm_cmpgt_epi8(v11, (__m128i)xmmword_10022550), v7),
            _mm_add_epi8(v11, (__m128i)xmmword_10022560));
    v14 = _mm_unpackhi_epi8(v13, v12);
    v15 = _mm_unpacklo_epi8(v13, v12);
    v16 = _mm_max_epu8(_mm_shuffle_epi8(v15, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
    v17 = _mm_unpackhi_epi8(v16, (__m128i)0LL);
    v18 = _mm_unpacklo_epi8(v16, (__m128i)0LL);
    *v6 = _mm_unpacklo_epi16(v18, (__m128i)0LL);
    v6[1] = _mm_unpackhi_epi16(v18, (__m128i)0LL);
    v6[2] = _mm_unpacklo_epi16(v17, (__m128i)0LL);
    v6[3] = _mm_unpackhi_epi16(v17, (__m128i)0LL);
    v19 = v14;
    v20 = _mm_max_epu8(_mm_shuffle_epi8(v14, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
    v21 = _mm_max_epu8(
            _mm_shuffle_epi8(_mm_alignr_epi8(v19, v15, 10), (__m128i)xmmword_10022520),
            (__m128i)xmmword_10022570);
    v22 = _mm_unpackhi_epi8(v21, (__m128i)0LL);
    v23 = _mm_unpacklo_epi8(v21, (__m128i)0LL);
    v6[4] = _mm_unpacklo_epi16(v23, (__m128i)0LL);
    v6[5] = _mm_unpackhi_epi16(v23, (__m128i)0LL);
    v6[6] = _mm_unpacklo_epi16(v22, (__m128i)0LL);
    v24 = _mm_unpacklo_epi8(v20, (__m128i)0LL);
    v6[7] = _mm_unpackhi_epi16(v22, (__m128i)0LL);
    v6[8] = _mm_unpacklo_epi16(v24, (__m128i)0LL);
    v25 = _mm_unpackhi_epi8(v20, (__m128i)0LL);
    v6[9] = _mm_unpackhi_epi16(v24, (__m128i)0LL);
    v6[10] = _mm_unpacklo_epi16(v25, (__m128i)0LL);
    v6[11] = _mm_unpackhi_epi16(v25, (__m128i)0LL);
    sub_10007980(a3, (int)v76, 3 * (-(int)a1 & 0xFu) - 1);
    v8 = &v78[-((v5 + 56) & 0xF)];
    v3 = a2 - v73;
    v4 = (__m128i *)((char *)a1 + v73);
    v76 = v8;
  }
  v26 = v3;
  v27 = v3 & 0x1FF;
  result = (char *)(v26 >> 9);
  v74 = result;
  v79 = v27;
  if ( result != nullptr )
  {
    v29 = 0;
    result = v6[6].m128i_i8;
    do
    {
      v30 = 32;
      v31 = (__m128i)xmmword_10022550;
      do
      {
        result += 192;
        v32 = _mm_srli_epi16(*v4, 4u);
        v33 = _mm_and_si128((__m128i)xmmword_10022540, *v4++);
        v34 = _mm_and_si128(v32, (__m128i)xmmword_10022540);
        v35 = _mm_add_epi8(_mm_and_si128(_mm_cmpgt_epi8(v33, v31), v77), _mm_add_epi8(v33, (__m128i)xmmword_10022560));
        v36 = _mm_add_epi8(_mm_and_si128(_mm_cmpgt_epi8(v34, v31), v77), _mm_add_epi8(v34, (__m128i)xmmword_10022560));
        v37 = _mm_unpackhi_epi8(v36, v35);
        v38 = _mm_unpacklo_epi8(v36, v35);
        v39 = _mm_max_epu8(_mm_shuffle_epi8(v38, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
        v40 = _mm_unpackhi_epi8(v39, v29);
        v41 = _mm_unpacklo_epi8(v39, v29);
        *((__m128i *)result - 18) = _mm_unpacklo_epi16(v41, v29);
        *((__m128i *)result - 17) = _mm_unpackhi_epi16(v41, v29);
        *((__m128i *)result - 16) = _mm_unpacklo_epi16(v40, v29);
        *((__m128i *)result - 15) = _mm_unpackhi_epi16(v40, v29);
        v42 = _mm_alignr_epi8(v37, v38, 10);
        v31 = (__m128i)xmmword_10022550;
        v43 = _mm_max_epu8(_mm_shuffle_epi8(v42, (__m128i)xmmword_10022520), (__m128i)xmmword_10022570);
        v44 = _mm_unpackhi_epi8(v43, v29);
        v45 = _mm_max_epu8(_mm_shuffle_epi8(v37, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
        v46 = _mm_unpacklo_epi8(v43, v29);
        *((__m128i *)result - 14) = _mm_unpacklo_epi16(v46, v29);
        *((__m128i *)result - 13) = _mm_unpackhi_epi16(v46, v29);
        *((__m128i *)result - 12) = _mm_unpacklo_epi16(v44, v29);
        v47 = _mm_unpacklo_epi8(v45, v29);
        *((__m128i *)result - 11) = _mm_unpackhi_epi16(v44, v29);
        *((__m128i *)result - 10) = _mm_unpacklo_epi16(v47, v29);
        v48 = _mm_unpackhi_epi8(v45, v29);
        *((__m128i *)result - 9) = _mm_unpackhi_epi16(v47, v29);
        *((__m128i *)result - 8) = _mm_unpacklo_epi16(v48, v29);
        *((__m128i *)result - 7) = _mm_unpackhi_epi16(v48, v29);
        --v30;
      }
      while ( v30 != 0 );
      sub_10007980(a3, (int)v8, ((char *)&v6[384] - v8) >> 2);
      v49 = v74-- == (char *)1;
      result = v6[6].m128i_i8;
      v8 = &v78[-((v5 + 56) & 0xF)];
      v29 = 0;
    }
    while ( !v49 );
    v27 = v79;
    v76 = &v78[-((v5 + 56) & 0xF)];
  }
  if ( v27 != 0 )
  {
    if ( v27 >= 0x10 )
    {
      v50 = v6 + 6;
      v51 = (__m128i)xmmword_10022550;
      v52 = v27 >> 4;
      do
      {
        v53 = *v4;
        v50 += 12;
        v54 = *v4++;
        v27 -= 16;
        v55 = _mm_and_si128(_mm_srli_epi16(v54, 4u), (__m128i)xmmword_10022540);
        v56 = _mm_add_epi8(_mm_and_si128(_mm_cmpgt_epi8(v55, v51), v77), _mm_add_epi8(v55, (__m128i)xmmword_10022560));
        v57 = _mm_and_si128(v53, (__m128i)xmmword_10022540);
        v58 = _mm_add_epi8(_mm_and_si128(_mm_cmpgt_epi8(v57, v51), v77), _mm_add_epi8(v57, (__m128i)xmmword_10022560));
        v59 = _mm_unpacklo_epi8(v56, v58);
        v60 = _mm_unpackhi_epi8(v56, v58);
        v61 = _mm_max_epu8(_mm_shuffle_epi8(v59, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
        v62 = _mm_unpackhi_epi8(v61, (__m128i)0LL);
        v63 = _mm_unpacklo_epi8(v61, (__m128i)0LL);
        *v6 = _mm_unpacklo_epi16(v63, (__m128i)0LL);
        v50[-17] = _mm_unpackhi_epi16(v63, (__m128i)0LL);
        v6 += 12;
        v50[-16] = _mm_unpacklo_epi16(v62, (__m128i)0LL);
        v50[-15] = _mm_unpackhi_epi16(v62, (__m128i)0LL);
        v64 = _mm_alignr_epi8(v60, v59, 10);
        v51 = (__m128i)xmmword_10022550;
        v65 = _mm_max_epu8(_mm_shuffle_epi8(v64, (__m128i)xmmword_10022520), (__m128i)xmmword_10022570);
        v66 = _mm_unpackhi_epi8(v65, (__m128i)0LL);
        v67 = _mm_max_epu8(_mm_shuffle_epi8(v60, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
        v68 = _mm_unpacklo_epi8(v65, (__m128i)0LL);
        v50[-14] = _mm_unpacklo_epi16(v68, (__m128i)0LL);
        v50[-13] = _mm_unpackhi_epi16(v68, (__m128i)0LL);
        v50[-12] = _mm_unpacklo_epi16(v66, (__m128i)0LL);
        v69 = _mm_unpacklo_epi8(v67, (__m128i)0LL);
        v50[-11] = _mm_unpackhi_epi16(v66, (__m128i)0LL);
        v50[-10] = _mm_unpacklo_epi16(v69, (__m128i)0LL);
        v70 = _mm_unpackhi_epi8(v67, (__m128i)0LL);
        v50[-9] = _mm_unpackhi_epi16(v69, (__m128i)0LL);
        v50[-8] = _mm_unpacklo_epi16(v70, (__m128i)0LL);
        v50[-7] = _mm_unpackhi_epi16(v70, (__m128i)0LL);
        --v52;
      }
      while ( v52 != 0 );
      v79 = v27;
    }
    v71 = a3;
    v75 = &a0123456789abcd[16 * ((*(_DWORD *)&a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0)];
    if ( v27 != 0 )
    {
      do
      {
        v72 = v4->m128i_u8[0];
        v4 = (__m128i *)((char *)v4 + 1);
        v6->m128i_i32[0] = 32;
        v6->m128i_i32[1] = v75[v72 >> 4];
        v6->m128i_i32[2] = v75[v72 & 0xF];
        v6 = (__m128i *)((char *)v6 + 12);
        --v79;
      }
      while ( v79 != 0 );
      v71 = a3;
    }
    return sub_10007980(v71, (int)v76, ((char *)v6 - v76) >> 2);
  }
  return result;
}

// Address: 0x100086E0
char *__cdecl sub_100086E0(__m128i *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edx
  __m128i *v4; // edi
  char v5; // sp
  __m128i *v6; // esi
  __m128i v7; // xmm5
  __int8 *v8; // ecx
  __m128i v9; // xmm0
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  __m128i v12; // xmm4
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm0
  unsigned int v16; // eax
  unsigned int v17; // edx
  char *result; // eax
  int i; // edx
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm3
  __m128i v26; // xmm1
  bool v27; // zf
  unsigned int v28; // eax
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __m128i v35; // xmm2
  __m128i v36; // xmm1
  char *v37; // ecx
  unsigned int v38; // ecx
  int v39; // [esp+14h] [ebp-63Ch]
  char *v40; // [esp+14h] [ebp-63Ch]
  char *v41; // [esp+14h] [ebp-63Ch]
  __int8 *v42; // [esp+1Ch] [ebp-634h]
  _BYTE v43[1540]; // [esp+48h] [ebp-608h] BYREF
  unsigned int v44; // [esp+65Ch] [ebp+Ch]

  v3 = a2;
  v4 = a1;
  if ( a2 < 0x10 )
    return (char *)sub_10006F10(a1->m128i_i8, a2, (int)a3);
  v6 = (__m128i *)&v43[-((v5 + 56) & 0xF)];
  v42 = &v6->m128i_i8[1];
  if ( (a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0 )
    v7 = (__m128i)xmmword_10022580;
  else
    v7 = (__m128i)xmmword_10022590;
  v8 = &v6->m128i_i8[1];
  v39 = -(int)a1 & 0xF;
  if ( v39 != 0 )
  {
    v9 = _mm_lddqu_si128(a1);
    v10 = _mm_and_si128((__m128i)xmmword_10022540, v9);
    v11 = _mm_and_si128(_mm_srli_epi16(v9, 4u), (__m128i)xmmword_10022540);
    v12 = _mm_add_epi8(
            _mm_and_si128(_mm_cmpgt_epi8(v11, (__m128i)xmmword_10022550), v7),
            _mm_add_epi8(v11, (__m128i)xmmword_10022560));
    v13 = _mm_add_epi8(
            _mm_and_si128(_mm_cmpgt_epi8(v10, (__m128i)xmmword_10022550), v7),
            _mm_add_epi8(v10, (__m128i)xmmword_10022560));
    v14 = _mm_unpacklo_epi8(v12, v13);
    *v6 = _mm_max_epu8(_mm_shuffle_epi8(v14, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
    v15 = _mm_unpackhi_epi8(v12, v13);
    v6[1] = _mm_max_epu8(
              _mm_shuffle_epi8(_mm_alignr_epi8(v15, v14, 10), (__m128i)xmmword_10022520),
              (__m128i)xmmword_10022570);
    v6[2] = _mm_max_epu8(_mm_shuffle_epi8(v15, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
    sub_10007800(a3, (int)v42, 3 * (-(int)a1 & 0xFu) - 1);
    v8 = &v43[-((v5 + 56) & 0xF)];
    v3 = a2 - v39;
    v4 = (__m128i *)((char *)a1 + v39);
    v42 = v8;
  }
  v16 = v3;
  v17 = v3 & 0x1FF;
  result = (char *)(v16 >> 9);
  v40 = result;
  v44 = v17;
  if ( result != nullptr )
  {
    result = v6[2].m128i_i8;
    do
    {
      for ( i = 32; i != 0; --i )
      {
        result += 48;
        v20 = _mm_srli_epi16(*v4, 4u);
        v21 = _mm_and_si128((__m128i)xmmword_10022540, *v4++);
        v22 = _mm_and_si128(v20, (__m128i)xmmword_10022540);
        v23 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v21, (__m128i)xmmword_10022550), v7),
                _mm_add_epi8(v21, (__m128i)xmmword_10022560));
        v24 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v22, (__m128i)xmmword_10022550), v7),
                _mm_add_epi8(v22, (__m128i)xmmword_10022560));
        v25 = _mm_unpackhi_epi8(v24, v23);
        v26 = _mm_unpacklo_epi8(v24, v23);
        *((__m128i *)result - 5) = _mm_max_epu8(
                                     _mm_shuffle_epi8(v26, (__m128i)xmmword_10022510),
                                     (__m128i)xmmword_10022570);
        *((__m128i *)result - 4) = _mm_max_epu8(
                                     _mm_shuffle_epi8(_mm_alignr_epi8(v25, v26, 10), (__m128i)xmmword_10022520),
                                     (__m128i)xmmword_10022570);
        *((__m128i *)result - 3) = _mm_max_epu8(
                                     _mm_shuffle_epi8(v25, (__m128i)xmmword_10022530),
                                     (__m128i)xmmword_10022570);
      }
      sub_10007800(a3, (int)v8, (char *)&v6[96] - v8);
      v27 = v40-- == (char *)1;
      result = v6[2].m128i_i8;
      v8 = &v43[-((v5 + 56) & 0xF)];
    }
    while ( !v27 );
    v17 = v44;
    v42 = &v43[-((v5 + 56) & 0xF)];
  }
  if ( v17 != 0 )
  {
    if ( v17 >= 0x10 )
    {
      v28 = v17 >> 4;
      do
      {
        v29 = *v4;
        v17 -= 16;
        v30 = *v4++;
        v31 = _mm_and_si128(v29, (__m128i)xmmword_10022540);
        v32 = _mm_and_si128(_mm_srli_epi16(v30, 4u), (__m128i)xmmword_10022540);
        v33 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v31, (__m128i)xmmword_10022550), v7),
                _mm_add_epi8(v31, (__m128i)xmmword_10022560));
        v34 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v32, (__m128i)xmmword_10022550), v7),
                _mm_add_epi8(v32, (__m128i)xmmword_10022560));
        v35 = _mm_unpackhi_epi8(v34, v33);
        v36 = _mm_unpacklo_epi8(v34, v33);
        *v6 = _mm_max_epu8(_mm_shuffle_epi8(v36, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
        v6[1] = _mm_max_epu8(
                  _mm_shuffle_epi8(_mm_alignr_epi8(v35, v36, 10), (__m128i)xmmword_10022520),
                  (__m128i)xmmword_10022570);
        v6[2] = _mm_max_epu8(_mm_shuffle_epi8(v35, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
        v6 += 3;
        --v28;
      }
      while ( v28 != 0 );
      v44 = v17;
    }
    v37 = a3;
    v41 = &a0123456789abcd[16 * ((*(_DWORD *)&a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0)];
    if ( v17 != 0 )
    {
      do
      {
        v38 = v4->m128i_u8[0];
        v4 = (__m128i *)((char *)v4 + 1);
        v6->m128i_i8[0] = 32;
        v6->m128i_i8[1] = v41[v38 >> 4];
        v6->m128i_i8[2] = v41[v38 & 0xF];
        v6 = (__m128i *)((char *)v6 + 3);
        --v44;
      }
      while ( v44 != 0 );
      v37 = a3;
    }
    return sub_10007800(v37, (int)v42, (char *)v6 - v42);
  }
  return result;
}

// Address: 0x10008AA0
char *__cdecl sub_10008AA0(__m128i *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edx
  __m128i *v4; // edi
  char v5; // sp
  __m128i *v6; // esi
  __m128i v7; // xmm4
  __m128i v8; // xmm0
  __m128i v9; // xmm3
  __m128i v10; // xmm5
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm5
  __m128i v14; // xmm3
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm5
  __m128i v18; // xmm0
  unsigned int v19; // eax
  unsigned int v20; // edx
  char *result; // eax
  __m128i v22; // xmm4
  int i; // ecx
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm0
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm2
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __m128i v33; // xmm3
  bool v34; // zf
  __m128i *v35; // eax
  __m128i v36; // xmm1
  __m128i v37; // xmm0
  __m128i v38; // xmm3
  __m128i v39; // xmm3
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __m128i v46; // xmm3
  __m128i v47; // xmm0
  int v48; // ecx
  unsigned int v49; // ecx
  int v50; // [esp+14h] [ebp-C4Ch]
  char *v51; // [esp+14h] [ebp-C4Ch]
  unsigned int v52; // [esp+14h] [ebp-C4Ch]
  char *v53; // [esp+14h] [ebp-C4Ch]
  __int8 *v54; // [esp+1Ch] [ebp-C44h]
  __m128i v55; // [esp+20h] [ebp-C40h]
  _BYTE v56[3092]; // [esp+48h] [ebp-C18h] BYREF
  unsigned int v57; // [esp+C6Ch] [ebp+Ch]

  v3 = a2;
  v4 = a1;
  if ( a2 < 0x10 )
    return (char *)sub_10007050(a1->m128i_i8, a2, (int)a3);
  v6 = (__m128i *)&v56[-((v5 + 56) & 0xF)];
  v54 = &v6->m128i_i8[2];
  if ( (a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0 )
    v7 = (__m128i)xmmword_10022580;
  else
    v7 = (__m128i)xmmword_10022590;
  v55 = v7;
  v50 = -(int)a1 & 0xF;
  if ( v50 != 0 )
  {
    v8 = _mm_lddqu_si128(a1);
    v9 = _mm_and_si128((__m128i)xmmword_10022540, v8);
    v10 = _mm_and_si128(_mm_srli_epi16(v8, 4u), (__m128i)xmmword_10022540);
    v11 = _mm_add_epi8(
            _mm_and_si128(_mm_cmpgt_epi8(v9, (__m128i)xmmword_10022550), v7),
            _mm_add_epi8(v9, (__m128i)xmmword_10022560));
    v12 = _mm_add_epi8(
            _mm_and_si128(_mm_cmpgt_epi8(v10, (__m128i)xmmword_10022550), v7),
            _mm_add_epi8(v10, (__m128i)xmmword_10022560));
    v13 = _mm_unpackhi_epi8(v12, v11);
    v14 = _mm_unpacklo_epi8(v12, v11);
    v15 = _mm_max_epu8(_mm_shuffle_epi8(v14, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
    *v6 = _mm_unpacklo_epi8(v15, (__m128i)0LL);
    v6[1] = _mm_unpackhi_epi8(v15, (__m128i)0LL);
    v16 = v13;
    v17 = _mm_max_epu8(_mm_shuffle_epi8(v13, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
    v18 = _mm_max_epu8(
            _mm_shuffle_epi8(_mm_alignr_epi8(v16, v14, 10), (__m128i)xmmword_10022520),
            (__m128i)xmmword_10022570);
    v6[2] = _mm_unpacklo_epi8(v18, (__m128i)0LL);
    v6[3] = _mm_unpackhi_epi8(v18, (__m128i)0LL);
    v6[4] = _mm_unpacklo_epi8(v17, (__m128i)0LL);
    v6[5] = _mm_unpackhi_epi8(v17, (__m128i)0LL);
    sub_10007B00(a3, (int)v54, 3 * (-(int)a1 & 0xFu) - 1);
    v3 = a2 - v50;
    v4 = (__m128i *)((char *)a1 + v50);
    v54 = &v56[-((v5 + 56) & 0xF)];
  }
  v19 = v3;
  v20 = v3 & 0x1FF;
  result = (char *)(v19 >> 9);
  v51 = result;
  v57 = v20;
  if ( result != nullptr )
  {
    v22 = 0;
    result = v6[5].m128i_i8;
    do
    {
      for ( i = 32; i != 0; --i )
      {
        result += 96;
        v24 = _mm_srli_epi16(*v4, 4u);
        v25 = _mm_and_si128((__m128i)xmmword_10022540, *v4++);
        v26 = _mm_and_si128(v24, (__m128i)xmmword_10022540);
        v27 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v25, (__m128i)xmmword_10022550), v55),
                _mm_add_epi8(v25, (__m128i)xmmword_10022560));
        v28 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v26, (__m128i)xmmword_10022550), v55),
                _mm_add_epi8(v26, (__m128i)xmmword_10022560));
        v29 = _mm_unpackhi_epi8(v28, v27);
        v30 = _mm_unpacklo_epi8(v28, v27);
        v31 = _mm_max_epu8(_mm_shuffle_epi8(v30, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
        *((__m128i *)result - 11) = _mm_unpacklo_epi8(v31, v22);
        *((__m128i *)result - 10) = _mm_unpackhi_epi8(v31, v22);
        v32 = _mm_max_epu8(
                _mm_shuffle_epi8(_mm_alignr_epi8(v29, v30, 10), (__m128i)xmmword_10022520),
                (__m128i)xmmword_10022570);
        v33 = _mm_max_epu8(_mm_shuffle_epi8(v29, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
        *((__m128i *)result - 9) = _mm_unpacklo_epi8(v32, v22);
        *((__m128i *)result - 8) = _mm_unpackhi_epi8(v32, v22);
        *((__m128i *)result - 7) = _mm_unpacklo_epi8(v33, v22);
        *((__m128i *)result - 6) = _mm_unpackhi_epi8(v33, v22);
      }
      sub_10007B00(a3, (int)v54, ((char *)&v6[192] - v54) >> 1);
      v34 = v51-- == (char *)1;
      result = v6[5].m128i_i8;
      v54 = &v56[-((v5 + 56) & 0xF)];
      v22 = 0;
    }
    while ( !v34 );
    v20 = v57;
  }
  if ( v20 != 0 )
  {
    if ( v20 >= 0x10 )
    {
      v35 = v6 + 5;
      v52 = v20 >> 4;
      do
      {
        v36 = *v4;
        v35 += 6;
        v37 = *v4++;
        v20 -= 16;
        v38 = _mm_and_si128(_mm_srli_epi16(v37, 4u), (__m128i)xmmword_10022540);
        v39 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v38, (__m128i)xmmword_10022550), v55),
                _mm_add_epi8(v38, (__m128i)xmmword_10022560));
        v40 = _mm_and_si128(v36, (__m128i)xmmword_10022540);
        v41 = _mm_add_epi8(
                _mm_and_si128(_mm_cmpgt_epi8(v40, (__m128i)xmmword_10022550), v55),
                _mm_add_epi8(v40, (__m128i)xmmword_10022560));
        v42 = _mm_unpacklo_epi8(v39, v41);
        v43 = _mm_unpackhi_epi8(v39, v41);
        v44 = _mm_max_epu8(_mm_shuffle_epi8(v42, (__m128i)xmmword_10022510), (__m128i)xmmword_10022570);
        *v6 = _mm_unpacklo_epi8(v44, (__m128i)0LL);
        v6 += 6;
        v34 = v52-- == 1;
        v35[-10] = _mm_unpackhi_epi8(v44, (__m128i)0LL);
        v45 = v43;
        v46 = _mm_max_epu8(_mm_shuffle_epi8(v43, (__m128i)xmmword_10022530), (__m128i)xmmword_10022570);
        v47 = _mm_max_epu8(
                _mm_shuffle_epi8(_mm_alignr_epi8(v45, v42, 10), (__m128i)xmmword_10022520),
                (__m128i)xmmword_10022570);
        v35[-9] = _mm_unpacklo_epi8(v47, (__m128i)0LL);
        v35[-8] = _mm_unpackhi_epi8(v47, (__m128i)0LL);
        v35[-7] = _mm_unpacklo_epi8(v46, (__m128i)0LL);
        v35[-6] = _mm_unpackhi_epi8(v46, (__m128i)0LL);
      }
      while ( !v34 );
      v57 = v20;
    }
    v48 = (int)v54;
    v53 = &a0123456789abcd[16 * ((*(_DWORD *)&a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0)];
    if ( v20 != 0 )
    {
      do
      {
        v49 = v4->m128i_u8[0];
        v4 = (__m128i *)((char *)v4 + 1);
        v6->m128i_i16[0] = 32;
        v6->m128i_i16[1] = v53[v49 >> 4];
        v6->m128i_i16[2] = v53[v49 & 0xF];
        v6 = (__m128i *)((char *)v6 + 6);
        --v57;
      }
      while ( v57 != 0 );
      v48 = (int)v54;
    }
    return sub_10007B00(a3, v48, ((int)v6->m128i_i32 - v48) >> 1);
  }
  return result;
}

// Address: 0x10008F30
char *__cdecl sub_10008F30(char *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edx
  char v5; // sp
  _BYTE *v8; // ecx
  int v9; // eax
  unsigned int v42; // eax
  unsigned int v43; // edx
  char *result; // eax
  int i; // edx
  bool v81; // zf
  unsigned int v87; // eax
  char *v108; // ecx
  unsigned int v109; // ecx
  int v110; // [esp+10h] [ebp-1890h]
  char *v111; // [esp+10h] [ebp-1890h]
  char *v112; // [esp+10h] [ebp-1890h]
  unsigned int v113; // [esp+14h] [ebp-188Ch]
  _BYTE *v114; // [esp+1Ch] [ebp-1884h]
  _BYTE v116[6180]; // [esp+78h] [ebp-1828h] BYREF

  v3 = a2;
  _EDI = a1;
  if ( a2 < 0x20 )
  {
    result = (char *)sub_100071A0(a1, a2, (int)a3);
LABEL_25:
    __asm { vzeroupper }
    return result;
  }
  _ESI = &v116[-((v5 + 88) & 0x1F)];
  v114 = _ESI + 2;
  if ( (a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0 )
    __asm { vmovdqu ymm6, ds:ymmword_100226A0 }
  else
    __asm { vmovdqu ymm6, ds:ymmword_100226C0 }
  v8 = _ESI + 2;
  __asm { vmovdqu [esp+18A0h+var_1880], ymm6 }
  if ( a2 == 32 )
  {
    v9 = 32;
    v110 = 32;
  }
  else
  {
    v9 = -(int)a1 & 0x1F;
    v110 = v9;
    if ( v9 == 0 )
      goto LABEL_9;
  }
  __asm
  {
    vlddqu  ymm2, ymmword ptr [edi]
    vmovdqu ymm1, ds:ymmword_10022620
    vpand   ymm5, ymm1, ymm2
    vpsrlw  ymm0, ymm2, 4
    vpand   ymm0, ymm0, ymm1
    vpaddb  ymm1, ymm0, ds:ymmword_10022660
    vpcmpgtb ymm0, ymm0, ds:ymmword_10022640
    vmovdqu ymm2, ds:ymmword_10022680
    vpand   ymm0, ymm0, ymm6
    vpaddb  ymm4, ymm0, ymm1
    vpcmpgtb ymm0, ymm5, ds:ymmword_10022640
    vpaddb  ymm1, ymm5, ds:ymmword_10022660
    vpand   ymm0, ymm0, ymm6
    vpaddb  ymm0, ymm0, ymm1
    vpunpckhbw ymm1, ymm4, ymm0
    vpunpcklbw ymm3, ymm4, ymm0
    vpshufb ymm0, ymm1, ds:ymmword_100225E0
    vpmaxub ymm5, ymm0, ymm2
    vpalignr ymm0, ymm1, ymm3, 0Ah
    vpshufb ymm0, ymm0, ds:ymmword_100225C0
    vpmaxub ymm4, ymm0, ymm2
    vpshufb ymm0, ymm3, ds:ymmword_100225A0
    vpmaxub ymm1, ymm0, ymm2
    vpmovzxbw ymm0, xmm1
    vmovdqa ymmword ptr [esi], ymm0
    vpmovzxbw ymm0, xmm4
    vmovdqa ymmword ptr [esi+20h], ymm0
    vpmovzxbw ymm0, xmm5
    vmovdqa ymmword ptr [esi+40h], ymm0
    vextracti128 xmm0, ymm1, 1
    vpmovzxbw ymm0, xmm0
    vmovdqa ymmword ptr [esi+60h], ymm0
    vextracti128 xmm0, ymm4, 1
    vpmovzxbw ymm0, xmm0
    vmovdqa ymmword ptr [esi+80h], ymm0
  }
  __asm { vextracti128 xmm0, ymm5, 1 }
  __asm { vpmovzxbw ymm0, xmm0 }
  __asm { vmovdqa ymmword ptr [esi+0A0h], ymm0 }
  __asm { vzeroall }
  sub_10007980(a3, (int)v114, (unsigned int)(3 * v9 - 1));
  v8 = &v116[-((v5 + 88) & 0x1F)];
  v3 = a2 - v110;
  _EDI = &a1[v110];
  v114 = v8;
LABEL_9:
  v42 = v3;
  v43 = v3 & 0x3FF;
  result = (char *)(v42 >> 10);
  v111 = result;
  v113 = v43;
  if ( result != nullptr )
  {
    result = _ESI + 64;
    do
    {
      __asm
      {
        vmovdqu ymm6, ds:ymmword_10022620
        vmovdqu ymm7, ds:ymmword_10022640
        vmovdqu ymm4, ds:ymmword_10022660
        vmovdqu ymm5, ds:ymmword_10022680
      }
      for ( i = 32; i != 0; --i )
      {
        __asm
        {
          vmovdqu ymm1, ymmword ptr [edi]
          vpsrlw  ymm0, ymm1, 4
          vpand   ymm0, ymm0, ymm6
          vpand   ymm2, ymm6, ymm1
          vpaddb  ymm1, ymm0, ymm4
          vpcmpgtb ymm0, ymm0, ymm7
          vpand   ymm0, ymm0, [esp+18A0h+var_1880]
          vpaddb  ymm3, ymm0, ymm1
          vpaddb  ymm1, ymm2, ymm4
          vpcmpgtb ymm0, ymm2, ymm7
          vpand   ymm0, ymm0, [esp+18A0h+var_1880]
          vpaddb  ymm0, ymm0, ymm1
          vpunpckhbw ymm1, ymm3, ymm0
          vpunpcklbw ymm2, ymm3, ymm0
          vpshufb ymm0, ymm1, ds:ymmword_100225E0
          vpmaxub ymm4, ymm0, ymm5
          vpalignr ymm0, ymm1, ymm2, 0Ah
          vpshufb ymm0, ymm0, ds:ymmword_100225C0
          vpmaxub ymm3, ymm0, ymm5
          vpshufb ymm0, ymm2, ds:ymmword_100225A0
          vpmaxub ymm1, ymm0, ymm5
          vpmovzxbw ymm0, xmm1
          vmovdqa ymmword ptr [eax-40h], ymm0
          vpmovzxbw ymm0, xmm3
          vmovdqa ymmword ptr [eax-20h], ymm0
          vpmovzxbw ymm0, xmm4
          vmovdqa ymmword ptr [eax], ymm0
          vextracti128 xmm0, ymm1, 1
          vpmovzxbw ymm0, xmm0
          vmovdqa ymmword ptr [eax+20h], ymm0
          vextracti128 xmm0, ymm3, 1
          vpmovzxbw ymm0, xmm0
          vmovdqa ymmword ptr [eax+40h], ymm0
          vextracti128 xmm0, ymm4, 1
          vmovdqu ymm4, ds:ymmword_10022660
          vpmovzxbw ymm0, xmm0
        }
        _EDI += 32;
        result += 192;
        __asm { vmovdqa ymmword ptr [eax-60h], ymm0 }
      }
      __asm { vzeroall }
      sub_10007980(a3, (int)v8, (_ESI + 6144 - v8) >> 1);
      v81 = v111-- == (char *)1;
      result = _ESI + 64;
      v8 = &v116[-((v5 + 88) & 0x1F)];
    }
    while ( !v81 );
    v43 = v113;
    v114 = &v116[-((v5 + 88) & 0x1F)];
  }
  if ( v43 == 0 )
    goto LABEL_25;
  if ( v43 >= 0x10 )
  {
    __asm
    {
      vmovdqu xmm3, xmmword ptr ds:ymmword_100225C0
      vmovdqu xmm4, xmmword ptr ds:ymmword_10022680
      vmovdqu ymm5, ds:ymmword_10022620
      vmovdqu ymm6, ds:ymmword_10022640
      vmovdqu ymm7, ds:ymmword_10022660
    }
    v87 = v43 >> 4;
    do
    {
      __asm
      {
        vmovdqa xmm2, xmmword ptr [edi]
        vpsrlw  xmm0, xmm2, 4
        vpunpckhbw xmm1, xmm0, xmm2
        vpunpcklbw xmm0, xmm0, xmm2
        vinserti128 ymm0, ymm0, xmm1, 1
        vpand   ymm0, ymm0, ymm5
        vpaddb  ymm1, ymm0, ymm7
        vpcmpgtb ymm0, ymm0, ymm6
        vpand   ymm0, ymm0, [esp+18A0h+var_1880]
        vpaddb  ymm1, ymm0, ymm1
        vpshufb ymm0, ymm1, ds:ymmword_10022600
        vpmaxub ymm2, ymm0, ds:ymmword_10022680
        vpmovzxbw ymm0, xmm2
        vmovdqa ymmword ptr [esi], ymm0
        vextracti128 xmm0, ymm1, 1
        vpalignr xmm0, xmm0, xmm1, 0Ah
        vpshufb xmm0, xmm0, xmm3
        vpmaxub xmm0, xmm0, xmm4
        vpmovzxbw ymm0, xmm0
        vmovdqa ymmword ptr [esi+20h], ymm0
        vextracti128 xmm0, ymm2, 1
        vpmovzxbw ymm0, xmm0
        vmovdqa ymmword ptr [esi+40h], ymm0
      }
      _ESI += 96;
      _EDI += 16;
      v43 -= 16;
      --v87;
    }
    while ( v87 != 0 );
    v113 = v43;
  }
  v108 = a3;
  __asm { vzeroall }
  v112 = &a0123456789abcd[16 * ((*(_DWORD *)&a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0)];
  if ( v43 != 0 )
  {
    do
    {
      v109 = (unsigned __int8)*_EDI++;
      *(_WORD *)_ESI = 32;
      *((_WORD *)_ESI + 1) = v112[v109 >> 4];
      *((_WORD *)_ESI + 2) = v112[v109 & 0xF];
      _ESI += 6;
      --v113;
    }
    while ( v113 != 0 );
    v108 = a3;
  }
  result = sub_10007980(v108, (int)v114, (_ESI - v114) >> 1);
  __asm { vzeroupper }
  return result;
}

// Address: 0x100093B0
char *__cdecl sub_100093B0(char *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edx
  char v5; // sp
  _BYTE *v8; // ecx
  int v9; // eax
  unsigned int v54; // eax
  unsigned int v55; // edx
  char *result; // eax
  int i; // edx
  bool v103; // zf
  unsigned int v110; // ecx
  char *v137; // ecx
  unsigned int v138; // ecx
  int v139; // [esp+10h] [ebp-30D0h]
  char *v140; // [esp+10h] [ebp-30D0h]
  char *v141; // [esp+10h] [ebp-30D0h]
  unsigned int v142; // [esp+14h] [ebp-30CCh]
  _BYTE *v143; // [esp+1Ch] [ebp-30C4h]
  _BYTE v145[12388]; // [esp+78h] [ebp-3068h] BYREF

  v3 = a2;
  _EDI = a1;
  if ( a2 < 0x20 )
  {
    result = (char *)sub_100072F0(a1, a2, (int)a3);
LABEL_25:
    __asm { vzeroupper }
    return result;
  }
  _ESI = &v145[-((v5 + 88) & 0x1F)];
  v143 = _ESI + 4;
  if ( (a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0 )
    __asm { vmovdqu ymm6, ds:ymmword_100226A0 }
  else
    __asm { vmovdqu ymm6, ds:ymmword_100226C0 }
  v8 = _ESI + 4;
  __asm { vmovdqu [esp+30E0h+var_30C0], ymm6 }
  if ( a2 == 32 )
  {
    v9 = 32;
    v139 = 32;
  }
  else
  {
    v9 = -(int)a1 & 0x1F;
    v139 = v9;
    if ( v9 == 0 )
      goto LABEL_9;
  }
  __asm
  {
    vlddqu  ymm2, ymmword ptr [edi]
    vmovdqu ymm1, ds:ymmword_10022620
    vpand   ymm5, ymm1, ymm2
    vpsrlw  ymm0, ymm2, 4
    vpand   ymm0, ymm0, ymm1
    vpaddb  ymm1, ymm0, ds:ymmword_10022660
    vpcmpgtb ymm0, ymm0, ds:ymmword_10022640
    vpand   ymm0, ymm0, ymm6
    vpaddb  ymm4, ymm0, ymm1
    vpcmpgtb ymm0, ymm5, ds:ymmword_10022640
    vpaddb  ymm1, ymm5, ds:ymmword_10022660
    vmovdqu ymm2, ds:ymmword_10022680
    vpand   ymm0, ymm0, ymm6
    vpaddb  ymm0, ymm0, ymm1
    vpunpckhbw ymm1, ymm4, ymm0
    vpunpcklbw ymm3, ymm4, ymm0
    vpshufb ymm0, ymm1, ds:ymmword_100225E0
    vpmaxub ymm5, ymm0, ymm2
    vpalignr ymm0, ymm1, ymm3, 0Ah
    vpshufb ymm0, ymm0, ds:ymmword_100225C0
    vpmaxub ymm4, ymm0, ymm2
    vpshufb ymm0, ymm3, ds:ymmword_100225A0
    vpmaxub ymm1, ymm0, ymm2
    vpmovzxbd ymm0, xmm1
    vmovdqa ymmword ptr [esi], ymm0
    vpunpckhqdq xmm0, xmm1, xmm1
    vpmovzxbd ymm0, xmm0
    vmovdqa ymmword ptr [esi+20h], ymm0
    vpmovzxbd ymm0, xmm4
    vmovdqa ymmword ptr [esi+40h], ymm0
    vpunpckhqdq xmm0, xmm4, xmm4
    vpmovzxbd ymm0, xmm0
    vmovdqa ymmword ptr [esi+60h], ymm0
    vpmovzxbd ymm0, xmm5
    vmovdqa ymmword ptr [esi+80h], ymm0
    vpunpckhqdq xmm0, xmm5, xmm5
    vpmovzxbd ymm0, xmm0
    vmovdqa ymmword ptr [esi+0A0h], ymm0
    vextracti128 xmm1, ymm1, 1
    vpmovzxbd ymm0, xmm1
    vmovdqa ymmword ptr [esi+0C0h], ymm0
    vpunpckhqdq xmm0, xmm1, xmm1
    vpmovzxbd ymm0, xmm0
    vmovdqa ymmword ptr [esi+0E0h], ymm0
    vextracti128 xmm1, ymm4, 1
    vpmovzxbd ymm0, xmm1
    vmovdqa ymmword ptr [esi+100h], ymm0
    vpunpckhqdq xmm0, xmm1, xmm1
    vpmovzxbd ymm0, xmm0
    vmovdqa ymmword ptr [esi+120h], ymm0
    vextracti128 xmm1, ymm5, 1
    vpmovzxbd ymm0, xmm1
    vmovdqa ymmword ptr [esi+140h], ymm0
  }
  __asm { vpunpckhqdq xmm0, xmm1, xmm1 }
  __asm { vpmovzxbd ymm0, xmm0 }
  __asm { vmovdqa ymmword ptr [esi+160h], ymm0 }
  __asm { vzeroall }
  sub_10007980(a3, (int)v143, (unsigned int)(3 * v9 - 1));
  v8 = &v145[-((v5 + 88) & 0x1F)];
  v3 = a2 - v139;
  _EDI = &a1[v139];
  v143 = v8;
LABEL_9:
  v54 = v3;
  v55 = v3 & 0x3FF;
  result = (char *)(v54 >> 10);
  v140 = result;
  v142 = v55;
  if ( result != nullptr )
  {
    result = _ESI + 160;
    do
    {
      __asm
      {
        vmovdqu ymm6, ds:ymmword_10022620
        vmovdqu ymm7, ds:ymmword_10022640
        vmovdqu ymm5, ds:ymmword_10022680
      }
      for ( i = 32; i != 0; --i )
      {
        __asm
        {
          vmovdqu ymm1, ymmword ptr [edi]
          vpsrlw  ymm0, ymm1, 4
          vpand   ymm0, ymm0, ymm6
          vpand   ymm2, ymm6, ymm1
          vpaddb  ymm1, ymm0, ds:ymmword_10022660
          vpcmpgtb ymm0, ymm0, ymm7
          vpand   ymm0, ymm0, [esp+30E0h+var_30C0]
          vpaddb  ymm3, ymm0, ymm1
          vpaddb  ymm1, ymm2, ds:ymmword_10022660
          vpcmpgtb ymm0, ymm2, ymm7
          vpand   ymm0, ymm0, [esp+30E0h+var_30C0]
          vpaddb  ymm0, ymm0, ymm1
          vpunpckhbw ymm1, ymm3, ymm0
          vpunpcklbw ymm2, ymm3, ymm0
          vpshufb ymm0, ymm1, ds:ymmword_100225E0
          vpmaxub ymm4, ymm0, ymm5
          vpalignr ymm0, ymm1, ymm2, 0Ah
          vpshufb ymm0, ymm0, ds:ymmword_100225C0
          vpmaxub ymm3, ymm0, ymm5
          vpshufb ymm0, ymm2, ds:ymmword_100225A0
          vpmaxub ymm1, ymm0, ymm5
          vpmovzxbd ymm0, xmm1
          vmovdqa ymmword ptr [eax-0A0h], ymm0
          vpunpckhqdq xmm0, xmm1, xmm1
          vpmovzxbd ymm0, xmm0
          vmovdqa ymmword ptr [eax-80h], ymm0
          vpmovzxbd ymm0, xmm3
          vmovdqa ymmword ptr [eax-60h], ymm0
          vpunpckhqdq xmm0, xmm3, xmm3
          vpmovzxbd ymm0, xmm0
          vmovdqa ymmword ptr [eax-40h], ymm0
          vpmovzxbd ymm0, xmm4
          vmovdqa ymmword ptr [eax-20h], ymm0
          vpunpckhqdq xmm0, xmm4, xmm4
          vpmovzxbd ymm0, xmm0
          vmovdqa ymmword ptr [eax], ymm0
          vextracti128 xmm1, ymm1, 1
          vpmovzxbd ymm0, xmm1
          vmovdqa ymmword ptr [eax+20h], ymm0
          vpunpckhqdq xmm0, xmm1, xmm1
          vpmovzxbd ymm0, xmm0
          vmovdqa ymmword ptr [eax+40h], ymm0
          vextracti128 xmm1, ymm3, 1
          vpmovzxbd ymm0, xmm1
          vmovdqa ymmword ptr [eax+60h], ymm0
          vpunpckhqdq xmm0, xmm1, xmm1
          vpmovzxbd ymm0, xmm0
          vmovdqa ymmword ptr [eax+80h], ymm0
          vextracti128 xmm1, ymm4, 1
          vpmovzxbd ymm0, xmm1
          vmovdqa ymmword ptr [eax+0A0h], ymm0
          vpunpckhqdq xmm0, xmm1, xmm1
          vpmovzxbd ymm0, xmm0
        }
        _EDI += 32;
        result += 384;
        __asm { vmovdqa ymmword ptr [eax-0C0h], ymm0 }
      }
      __asm { vzeroall }
      sub_10007980(a3, (int)v8, (_ESI + 12288 - v8) >> 2);
      v103 = v140-- == (char *)1;
      result = _ESI + 160;
      v8 = &v145[-((v5 + 88) & 0x1F)];
    }
    while ( !v103 );
    v55 = v142;
    v143 = &v145[-((v5 + 88) & 0x1F)];
  }
  if ( v55 == 0 )
    goto LABEL_25;
  if ( v55 >= 0x10 )
  {
    __asm
    {
      vmovdqu xmm4, xmmword ptr ds:ymmword_100225C0
      vmovdqu xmm5, xmmword ptr ds:ymmword_10022680
      vmovdqu ymm6, ds:ymmword_10022620
      vmovdqu ymm7, ds:ymmword_10022640
      vmovdqu ymm3, [esp+30E0h+var_30C0]
    }
    _EAX = _ESI + 160;
    v110 = v55 >> 4;
    do
    {
      __asm
      {
        vmovdqa xmm2, xmmword ptr [edi]
        vpsrlw  xmm0, xmm2, 4
        vpunpckhbw xmm1, xmm0, xmm2
        vpunpcklbw xmm0, xmm0, xmm2
        vinserti128 ymm0, ymm0, xmm1, 1
        vpand   ymm0, ymm0, ymm6
        vpaddb  ymm1, ymm0, ds:ymmword_10022660
        vpcmpgtb ymm0, ymm0, ymm7
        vpand   ymm0, ymm0, ymm3
        vpaddb  ymm1, ymm0, ymm1
        vpshufb ymm0, ymm1, ds:ymmword_10022600
        vpmaxub ymm2, ymm0, ds:ymmword_10022680
        vpmovzxbd ymm0, xmm2
        vmovdqa ymmword ptr [esi], ymm0
        vpunpckhqdq xmm0, xmm2, xmm2
        vpmovzxbd ymm0, xmm0
        vmovdqa ymmword ptr [eax-80h], ymm0
        vextracti128 xmm0, ymm1, 1
        vpalignr xmm0, xmm0, xmm1, 0Ah
        vpshufb xmm0, xmm0, xmm4
        vpmaxub xmm1, xmm0, xmm5
        vpmovzxbd ymm0, xmm1
        vmovdqa ymmword ptr [eax-60h], ymm0
        vpunpckhqdq xmm0, xmm1, xmm1
        vpmovzxbd ymm0, xmm0
        vmovdqa ymmword ptr [eax-40h], ymm0
        vextracti128 xmm1, ymm2, 1
        vpmovzxbd ymm0, xmm1
        vmovdqa ymmword ptr [eax-20h], ymm0
        vpunpckhqdq xmm0, xmm1, xmm1
        vpmovzxbd ymm0, xmm0
      }
      _ESI += 192;
      _EAX += 48;
      _EDI += 16;
      v55 -= 16;
      __asm { vmovdqa ymmword ptr [eax-0C0h], ymm0 }
      --v110;
    }
    while ( v110 != 0 );
    v142 = v55;
  }
  v137 = a3;
  __asm { vzeroall }
  v141 = &a0123456789abcd[16 * ((*(_DWORD *)&a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0)];
  if ( v55 != 0 )
  {
    do
    {
      v138 = (unsigned __int8)*_EDI++;
      *(_DWORD *)_ESI = 32;
      *((_DWORD *)_ESI + 1) = v141[v138 >> 4];
      *((_DWORD *)_ESI + 2) = v141[v138 & 0xF];
      _ESI += 12;
      --v142;
    }
    while ( v142 != 0 );
    v137 = a3;
  }
  result = sub_10007980(v137, (int)v143, (_ESI - v143) >> 2);
  __asm { vzeroupper }
  return result;
}

// Address: 0x10009930
char *__cdecl sub_10009930(char *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edx
  char v5; // sp
  _BYTE *v8; // ecx
  int v9; // eax
  unsigned int v36; // eax
  unsigned int v37; // edx
  char *result; // eax
  int i; // edx
  bool v68; // zf
  unsigned int v74; // eax
  char *v92; // ecx
  unsigned int v93; // ecx
  int v94; // [esp+10h] [ebp-C70h]
  char *v95; // [esp+10h] [ebp-C70h]
  char *v96; // [esp+10h] [ebp-C70h]
  unsigned int v97; // [esp+14h] [ebp-C6Ch]
  _BYTE *v98; // [esp+1Ch] [ebp-C64h]
  _BYTE v100[3076]; // [esp+78h] [ebp-C08h] BYREF

  v3 = a2;
  _EDI = a1;
  if ( a2 < 0x20 )
  {
    result = (char *)sub_10006F10(a1, a2, (int)a3);
LABEL_25:
    __asm { vzeroupper }
    return result;
  }
  _ESI = &v100[-((v5 + 88) & 0x1F)];
  v98 = _ESI + 1;
  if ( (a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0 )
    __asm { vmovdqu ymm6, ds:ymmword_100226A0 }
  else
    __asm { vmovdqu ymm6, ds:ymmword_100226C0 }
  v8 = _ESI + 1;
  __asm { vmovdqu [esp+0C80h+var_C60], ymm6 }
  if ( a2 == 32 )
  {
    v9 = 32;
    v94 = 32;
  }
  else
  {
    v9 = -(int)a1 & 0x1F;
    v94 = v9;
    if ( v9 == 0 )
      goto LABEL_9;
  }
  __asm
  {
    vlddqu  ymm2, ymmword ptr [edi]
    vmovdqu ymm1, ds:ymmword_10022620
    vpand   ymm5, ymm1, ymm2
    vpsrlw  ymm0, ymm2, 4
    vmovdqu ymm2, ds:ymmword_10022680
    vpand   ymm0, ymm0, ymm1
    vpaddb  ymm1, ymm0, ds:ymmword_10022660
    vpcmpgtb ymm0, ymm0, ds:ymmword_10022640
    vpand   ymm0, ymm0, ymm6
    vpaddb  ymm4, ymm0, ymm1
    vpcmpgtb ymm0, ymm5, ds:ymmword_10022640
    vpaddb  ymm1, ymm5, ds:ymmword_10022660
    vpand   ymm0, ymm0, ymm6
    vpaddb  ymm0, ymm0, ymm1
    vpunpckhbw ymm1, ymm4, ymm0
    vpunpcklbw ymm3, ymm4, ymm0
    vpshufb ymm0, ymm1, ds:ymmword_100225E0
    vpmaxub ymm4, ymm0, ymm2
    vpalignr ymm0, ymm1, ymm3, 0Ah
    vpshufb ymm0, ymm0, ds:ymmword_100225C0
    vpmaxub ymm1, ymm0, ymm2
    vpshufb ymm0, ymm3, ds:ymmword_100225A0
    vpmaxub ymm0, ymm0, ymm2
    vmovdqa xmmword ptr [esi], xmm0
    vmovdqa xmmword ptr [esi+10h], xmm1
    vextracti128 xmm0, ymm0, 1
    vmovdqa xmmword ptr [esi+20h], xmm4
    vmovdqa xmmword ptr [esi+30h], xmm0
    vextracti128 xmm0, ymm1, 1
  }
  __asm { vmovdqa xmmword ptr [esi+40h], xmm0 }
  __asm { vextracti128 xmm0, ymm4, 1 }
  __asm { vmovdqa xmmword ptr [esi+50h], xmm0 }
  __asm { vzeroall }
  sub_10007800(a3, (int)v98, (unsigned int)(3 * v9 - 1));
  v8 = &v100[-((v5 + 88) & 0x1F)];
  v3 = a2 - v94;
  _EDI = &a1[v94];
  v98 = v8;
LABEL_9:
  v36 = v3;
  v37 = v3 & 0x3FF;
  result = (char *)(v36 >> 10);
  v95 = result;
  v97 = v37;
  if ( result != nullptr )
  {
    result = _ESI + 32;
    do
    {
      __asm
      {
        vmovdqu ymm5, ds:ymmword_10022620
        vmovdqu ymm6, ds:ymmword_10022640
        vmovdqu ymm7, ds:ymmword_10022660
        vmovdqu ymm4, ds:ymmword_10022680
      }
      for ( i = 32; i != 0; --i )
      {
        __asm
        {
          vmovdqu ymm1, ymmword ptr [edi]
          vpsrlw  ymm0, ymm1, 4
          vpand   ymm0, ymm0, ymm5
          vpand   ymm2, ymm5, ymm1
          vpaddb  ymm1, ymm0, ymm7
          vpcmpgtb ymm0, ymm0, ymm6
          vpand   ymm0, ymm0, [esp+0C80h+var_C60]
          vpaddb  ymm3, ymm0, ymm1
          vpcmpgtb ymm0, ymm2, ymm6
          vpand   ymm0, ymm0, [esp+0C80h+var_C60]
          vpaddb  ymm1, ymm2, ymm7
          vpaddb  ymm0, ymm0, ymm1
          vpunpckhbw ymm1, ymm3, ymm0
          vpunpcklbw ymm2, ymm3, ymm0
          vpshufb ymm0, ymm1, ds:ymmword_100225E0
          vpmaxub ymm3, ymm0, ymm4
          vpalignr ymm0, ymm1, ymm2, 0Ah
          vpshufb ymm0, ymm0, ds:ymmword_100225C0
          vpmaxub ymm1, ymm0, ymm4
          vpshufb ymm0, ymm2, ds:ymmword_100225A0
          vpmaxub ymm0, ymm0, ymm4
          vmovdqa xmmword ptr [eax-20h], xmm0
          vmovdqa xmmword ptr [eax-10h], xmm1
          vmovdqa xmmword ptr [eax], xmm3
          vextracti128 xmm0, ymm0, 1
          vmovdqa xmmword ptr [eax+10h], xmm0
          vextracti128 xmm0, ymm1, 1
          vmovdqa xmmword ptr [eax+20h], xmm0
          vextracti128 xmm0, ymm3, 1
        }
        _EDI += 32;
        result += 96;
        __asm { vmovdqa xmmword ptr [eax-30h], xmm0 }
      }
      __asm { vzeroall }
      sub_10007800(a3, (int)v8, _ESI + 3072 - v8);
      v68 = v95-- == (char *)1;
      result = _ESI + 32;
      v8 = &v100[-((v5 + 88) & 0x1F)];
    }
    while ( !v68 );
    v37 = v97;
    v98 = &v100[-((v5 + 88) & 0x1F)];
  }
  if ( v37 == 0 )
    goto LABEL_25;
  if ( v37 >= 0x10 )
  {
    __asm
    {
      vmovdqu xmm3, xmmword ptr ds:ymmword_100225C0
      vmovdqu xmm4, xmmword ptr ds:ymmword_10022680
      vmovdqu ymm5, ds:ymmword_10022620
      vmovdqu ymm6, ds:ymmword_10022640
      vmovdqu ymm7, ds:ymmword_10022660
    }
    v74 = v37 >> 4;
    do
    {
      __asm
      {
        vmovdqa xmm2, xmmword ptr [edi]
        vpsrlw  xmm0, xmm2, 4
        vpunpckhbw xmm1, xmm0, xmm2
        vpunpcklbw xmm0, xmm0, xmm2
        vinserti128 ymm0, ymm0, xmm1, 1
        vpand   ymm0, ymm0, ymm5
        vpaddb  ymm1, ymm0, ymm7
        vpcmpgtb ymm0, ymm0, ymm6
        vpand   ymm0, ymm0, [esp+0C80h+var_C60]
        vpaddb  ymm1, ymm0, ymm1
        vpshufb ymm0, ymm1, ds:ymmword_10022600
        vpmaxub ymm2, ymm0, ds:ymmword_10022680
        vextracti128 xmm0, ymm1, 1
        vpalignr xmm0, xmm0, xmm1, 0Ah
        vpshufb xmm0, xmm0, xmm3
        vmovdqa xmmword ptr [esi], xmm2
        vpmaxub xmm0, xmm0, xmm4
        vmovdqa xmmword ptr [esi+10h], xmm0
        vextracti128 xmm0, ymm2, 1
        vmovdqa xmmword ptr [esi+20h], xmm0
      }
      _ESI += 48;
      _EDI += 16;
      v37 -= 16;
      --v74;
    }
    while ( v74 != 0 );
    v97 = v37;
  }
  v92 = a3;
  __asm { vzeroall }
  v96 = &a0123456789abcd[16 * ((*(_DWORD *)&a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0)];
  if ( v37 != 0 )
  {
    do
    {
      v93 = (unsigned __int8)*_EDI++;
      *_ESI = 32;
      _ESI[1] = v96[v93 >> 4];
      _ESI[2] = v96[v93 & 0xF];
      _ESI += 3;
      --v97;
    }
    while ( v97 != 0 );
    v92 = a3;
  }
  result = sub_10007800(v92, (int)v98, _ESI - v98);
  __asm { vzeroupper }
  return result;
}

// Address: 0x10009D40
char *__cdecl sub_10009D40(char *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edx
  char v5; // sp
  _BYTE *v8; // ecx
  int v9; // eax
  unsigned int v42; // eax
  unsigned int v43; // edx
  char *result; // eax
  int i; // edx
  bool v81; // zf
  unsigned int v87; // eax
  char *v108; // ecx
  unsigned int v109; // ecx
  int v110; // [esp+10h] [ebp-1890h]
  char *v111; // [esp+10h] [ebp-1890h]
  char *v112; // [esp+10h] [ebp-1890h]
  unsigned int v113; // [esp+14h] [ebp-188Ch]
  _BYTE *v114; // [esp+1Ch] [ebp-1884h]
  _BYTE v116[6180]; // [esp+78h] [ebp-1828h] BYREF

  v3 = a2;
  _EDI = a1;
  if ( a2 < 0x20 )
  {
    result = (char *)sub_10007050(a1, a2, (int)a3);
LABEL_25:
    __asm { vzeroupper }
    return result;
  }
  _ESI = &v116[-((v5 + 88) & 0x1F)];
  v114 = _ESI + 2;
  if ( (a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0 )
    __asm { vmovdqu ymm6, ds:ymmword_100226A0 }
  else
    __asm { vmovdqu ymm6, ds:ymmword_100226C0 }
  v8 = _ESI + 2;
  __asm { vmovdqu [esp+18A0h+var_1880], ymm6 }
  if ( a2 == 32 )
  {
    v9 = 32;
    v110 = 32;
  }
  else
  {
    v9 = -(int)a1 & 0x1F;
    v110 = v9;
    if ( v9 == 0 )
      goto LABEL_9;
  }
  __asm
  {
    vlddqu  ymm2, ymmword ptr [edi]
    vmovdqu ymm1, ds:ymmword_10022620
    vpand   ymm5, ymm1, ymm2
    vpsrlw  ymm0, ymm2, 4
    vpand   ymm0, ymm0, ymm1
    vpaddb  ymm1, ymm0, ds:ymmword_10022660
    vpcmpgtb ymm0, ymm0, ds:ymmword_10022640
    vmovdqu ymm2, ds:ymmword_10022680
    vpand   ymm0, ymm0, ymm6
    vpaddb  ymm4, ymm0, ymm1
    vpcmpgtb ymm0, ymm5, ds:ymmword_10022640
    vpaddb  ymm1, ymm5, ds:ymmword_10022660
    vpand   ymm0, ymm0, ymm6
    vpaddb  ymm0, ymm0, ymm1
    vpunpckhbw ymm1, ymm4, ymm0
    vpunpcklbw ymm3, ymm4, ymm0
    vpshufb ymm0, ymm1, ds:ymmword_100225E0
    vpmaxub ymm5, ymm0, ymm2
    vpalignr ymm0, ymm1, ymm3, 0Ah
    vpshufb ymm0, ymm0, ds:ymmword_100225C0
    vpmaxub ymm4, ymm0, ymm2
    vpshufb ymm0, ymm3, ds:ymmword_100225A0
    vpmaxub ymm1, ymm0, ymm2
    vpmovzxbw ymm0, xmm1
    vmovdqa ymmword ptr [esi], ymm0
    vpmovzxbw ymm0, xmm4
    vmovdqa ymmword ptr [esi+20h], ymm0
    vpmovzxbw ymm0, xmm5
    vmovdqa ymmword ptr [esi+40h], ymm0
    vextracti128 xmm0, ymm1, 1
    vpmovzxbw ymm0, xmm0
    vmovdqa ymmword ptr [esi+60h], ymm0
    vextracti128 xmm0, ymm4, 1
    vpmovzxbw ymm0, xmm0
    vmovdqa ymmword ptr [esi+80h], ymm0
  }
  __asm { vextracti128 xmm0, ymm5, 1 }
  __asm { vpmovzxbw ymm0, xmm0 }
  __asm { vmovdqa ymmword ptr [esi+0A0h], ymm0 }
  __asm { vzeroall }
  sub_10007B00(a3, (int)v114, (unsigned int)(3 * v9 - 1));
  v8 = &v116[-((v5 + 88) & 0x1F)];
  v3 = a2 - v110;
  _EDI = &a1[v110];
  v114 = v8;
LABEL_9:
  v42 = v3;
  v43 = v3 & 0x3FF;
  result = (char *)(v42 >> 10);
  v111 = result;
  v113 = v43;
  if ( result != nullptr )
  {
    result = _ESI + 64;
    do
    {
      __asm
      {
        vmovdqu ymm6, ds:ymmword_10022620
        vmovdqu ymm7, ds:ymmword_10022640
        vmovdqu ymm4, ds:ymmword_10022660
        vmovdqu ymm5, ds:ymmword_10022680
      }
      for ( i = 32; i != 0; --i )
      {
        __asm
        {
          vmovdqu ymm1, ymmword ptr [edi]
          vpsrlw  ymm0, ymm1, 4
          vpand   ymm0, ymm0, ymm6
          vpand   ymm2, ymm6, ymm1
          vpaddb  ymm1, ymm0, ymm4
          vpcmpgtb ymm0, ymm0, ymm7
          vpand   ymm0, ymm0, [esp+18A0h+var_1880]
          vpaddb  ymm3, ymm0, ymm1
          vpaddb  ymm1, ymm2, ymm4
          vpcmpgtb ymm0, ymm2, ymm7
          vpand   ymm0, ymm0, [esp+18A0h+var_1880]
          vpaddb  ymm0, ymm0, ymm1
          vpunpckhbw ymm1, ymm3, ymm0
          vpunpcklbw ymm2, ymm3, ymm0
          vpshufb ymm0, ymm1, ds:ymmword_100225E0
          vpmaxub ymm4, ymm0, ymm5
          vpalignr ymm0, ymm1, ymm2, 0Ah
          vpshufb ymm0, ymm0, ds:ymmword_100225C0
          vpmaxub ymm3, ymm0, ymm5
          vpshufb ymm0, ymm2, ds:ymmword_100225A0
          vpmaxub ymm1, ymm0, ymm5
          vpmovzxbw ymm0, xmm1
          vmovdqa ymmword ptr [eax-40h], ymm0
          vpmovzxbw ymm0, xmm3
          vmovdqa ymmword ptr [eax-20h], ymm0
          vpmovzxbw ymm0, xmm4
          vmovdqa ymmword ptr [eax], ymm0
          vextracti128 xmm0, ymm1, 1
          vpmovzxbw ymm0, xmm0
          vmovdqa ymmword ptr [eax+20h], ymm0
          vextracti128 xmm0, ymm3, 1
          vpmovzxbw ymm0, xmm0
          vmovdqa ymmword ptr [eax+40h], ymm0
          vextracti128 xmm0, ymm4, 1
          vmovdqu ymm4, ds:ymmword_10022660
          vpmovzxbw ymm0, xmm0
        }
        _EDI += 32;
        result += 192;
        __asm { vmovdqa ymmword ptr [eax-60h], ymm0 }
      }
      __asm { vzeroall }
      sub_10007B00(a3, (int)v8, (_ESI + 6144 - v8) >> 1);
      v81 = v111-- == (char *)1;
      result = _ESI + 64;
      v8 = &v116[-((v5 + 88) & 0x1F)];
    }
    while ( !v81 );
    v43 = v113;
    v114 = &v116[-((v5 + 88) & 0x1F)];
  }
  if ( v43 == 0 )
    goto LABEL_25;
  if ( v43 >= 0x10 )
  {
    __asm
    {
      vmovdqu xmm3, xmmword ptr ds:ymmword_100225C0
      vmovdqu xmm4, xmmword ptr ds:ymmword_10022680
      vmovdqu ymm5, ds:ymmword_10022620
      vmovdqu ymm6, ds:ymmword_10022640
      vmovdqu ymm7, ds:ymmword_10022660
    }
    v87 = v43 >> 4;
    do
    {
      __asm
      {
        vmovdqa xmm2, xmmword ptr [edi]
        vpsrlw  xmm0, xmm2, 4
        vpunpckhbw xmm1, xmm0, xmm2
        vpunpcklbw xmm0, xmm0, xmm2
        vinserti128 ymm0, ymm0, xmm1, 1
        vpand   ymm0, ymm0, ymm5
        vpaddb  ymm1, ymm0, ymm7
        vpcmpgtb ymm0, ymm0, ymm6
        vpand   ymm0, ymm0, [esp+18A0h+var_1880]
        vpaddb  ymm1, ymm0, ymm1
        vpshufb ymm0, ymm1, ds:ymmword_10022600
        vpmaxub ymm2, ymm0, ds:ymmword_10022680
        vpmovzxbw ymm0, xmm2
        vmovdqa ymmword ptr [esi], ymm0
        vextracti128 xmm0, ymm1, 1
        vpalignr xmm0, xmm0, xmm1, 0Ah
        vpshufb xmm0, xmm0, xmm3
        vpmaxub xmm0, xmm0, xmm4
        vpmovzxbw ymm0, xmm0
        vmovdqa ymmword ptr [esi+20h], ymm0
        vextracti128 xmm0, ymm2, 1
        vpmovzxbw ymm0, xmm0
        vmovdqa ymmword ptr [esi+40h], ymm0
      }
      _ESI += 96;
      _EDI += 16;
      v43 -= 16;
      --v87;
    }
    while ( v87 != 0 );
    v113 = v43;
  }
  v108 = a3;
  __asm { vzeroall }
  v112 = &a0123456789abcd[16 * ((*(_DWORD *)&a3[*(_DWORD *)(*(_DWORD *)a3 + 4) + 20] & 4) != 0)];
  if ( v43 != 0 )
  {
    do
    {
      v109 = (unsigned __int8)*_EDI++;
      *(_WORD *)_ESI = 32;
      *((_WORD *)_ESI + 1) = v112[v109 >> 4];
      *((_WORD *)_ESI + 2) = v112[v109 & 0xF];
      _ESI += 6;
      --v113;
    }
    while ( v113 != 0 );
    v108 = a3;
  }
  result = sub_10007B00(v108, (int)v114, (_ESI - v114) >> 1);
  __asm { vzeroupper }
  return result;
}

// Address: 0x1000A1C0
_DWORD *__thiscall sub_1000A1C0(_DWORD *this, int a2)
{
  _DWORD *v3; // edx
  _DWORD _0[10]; // [esp+0h] [ebp-24h] BYREF

  _0[5] = _0;
  *this = 0;
  _0[8] = 0;
  v3 = operator new(0x10u);
  if ( v3 != nullptr )
  {
    v3[1] = 1;
    v3[2] = 1;
    *v3 = &boost::detail::sp_counted_impl_p<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>::`vftable';
    v3[3] = a2;
  }
  else
  {
    v3 = nullptr;
  }
  *this = v3;
  return this;
}

// Address: 0x1000A260
_DWORD *__thiscall sub_1000A260(_DWORD *this, int a2)
{
  _DWORD *v3; // edx
  _DWORD _0[10]; // [esp+0h] [ebp-24h] BYREF

  _0[5] = _0;
  *this = 0;
  _0[8] = 0;
  v3 = operator new(0x10u);
  if ( v3 != nullptr )
  {
    v3[1] = 1;
    v3[2] = 1;
    *v3 = &boost::detail::sp_counted_impl_p<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>::`vftable';
    v3[3] = a2;
  }
  else
  {
    v3 = nullptr;
  }
  *this = v3;
  return this;
}

// Address: 0x1000A300
_DWORD *__cdecl sub_1000A300(_DWORD *a1)
{
  _DWORD *ThreadLocalStoragePointer; // eax
  int v2; // eax
  volatile signed __int32 *v3; // esi
  int v4; // eax
  _DWORD v6[10]; // [esp+10h] [ebp-68h] BYREF
  void **v7; // [esp+38h] [ebp-40h]
  void **v8; // [esp+3Ch] [ebp-3Ch] BYREF
  __int128 v9; // [esp+40h] [ebp-38h]
  void **v10; // [esp+50h] [ebp-28h]
  _DWORD v11[2]; // [esp+54h] [ebp-24h] BYREF
  int v12; // [esp+5Ch] [ebp-1Ch] BYREF
  int v13; // [esp+60h] [ebp-18h] BYREF
  void *Block; // [esp+64h] [ebp-14h]
  int v15; // [esp+68h] [ebp-10h]
  int v16; // [esp+74h] [ebp-4h]

  v9 = xmmword_10022940;
  v8 = &boost::exception_detail::bad_alloc_::`vftable';
  v10 = &boost::exception_detail::bad_alloc_::`vftable';
  v11[1] = 0;
  v11[0] = "bad allocation";
  v16 = 1;
  v6[8] = &unk_10022784;
  v15 = 2;
  sub_1000AB20(&v8);
  v6[0] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  v6[5] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  v16 = 2;
  v7 = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  v6[9] = 0;
  sub_100034D0(v6, &v8);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6[2] = "class boost::exception_ptr __cdecl boost::exception_detail::get_static_exception_object<struct boost::exceptio"
          "n_detail::bad_alloc_>(void)";
  v6[3] = ".\\boost/exception/detail/exception_ptr.hpp";
  v6[4] = 129;
  if ( dword_1002F368 <= *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 4) )
    goto LABEL_15;
  _Init_thread_header(&dword_1002F368);
  if ( dword_1002F368 != -1 )
    goto LABEL_15;
  LOBYTE(v16) = 4;
  Block = operator new(0x2Cu);
  LOBYTE(v16) = 5;
  if ( Block == nullptr )
  {
    v2 = 0;
    goto LABEL_7;
  }
  v2 = sub_1000A9E0(v6, 1);
  if ( v2 == 0 )
  {
LABEL_7:
    v12 = 0;
    goto LABEL_8;
  }
  v12 = v2 + *(_DWORD *)(*(_DWORD *)(v2 + 32) + 4) + 32;
LABEL_8:
  v13 = 0;
  LOBYTE(v16) = 6;
  sub_1000A8A0(&v12, v2, &v13);
  v3 = (volatile signed __int32 *)v13;
  dword_1002F360 = v12;
  dword_1002F364 = v13;
  if ( v13 != 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 4), 1u);
    v3 = (volatile signed __int32 *)v13;
  }
  LOBYTE(v16) = 7;
  if ( v3 != nullptr && _InterlockedExchangeAdd(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 8))(v3);
  }
  LOBYTE(v16) = 4;
  atexit(__std_execution_wake_by_address_all);
  _Init_thread_footer(&dword_1002F368);
LABEL_15:
  *a1 = dword_1002F360;
  v4 = dword_1002F364;
  a1[1] = dword_1002F364;
  if ( v4 != 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 4), 1u);
  sub_1000AC80(v6);
  v7 = &boost::exception_detail::clone_base::`vftable';
  v16 = -1;
  v8 = &boost::exception_detail::bad_alloc_::`vftable';
  v10 = &std::exception::`vftable';
  __std_exception_destroy(v11);
  v8 = &boost::exception::`vftable';
  v16 = 8;
  if ( (_DWORD)v9 != 0 )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 16))(v9);
  return a1;
}

// Address: 0x1000A560
_DWORD *__cdecl sub_1000A560(_DWORD *a1)
{
  _DWORD *ThreadLocalStoragePointer; // eax
  int v2; // eax
  volatile signed __int32 *v3; // esi
  int v4; // eax
  _DWORD v6[10]; // [esp+10h] [ebp-68h] BYREF
  void **v7; // [esp+38h] [ebp-40h]
  void **v8; // [esp+3Ch] [ebp-3Ch] BYREF
  __int128 v9; // [esp+40h] [ebp-38h]
  void **v10; // [esp+50h] [ebp-28h]
  _DWORD v11[2]; // [esp+54h] [ebp-24h] BYREF
  int v12; // [esp+5Ch] [ebp-1Ch] BYREF
  int v13; // [esp+60h] [ebp-18h] BYREF
  void *Block; // [esp+64h] [ebp-14h]
  int v15; // [esp+68h] [ebp-10h]
  int v16; // [esp+74h] [ebp-4h]

  v9 = xmmword_10022940;
  v8 = &boost::exception_detail::bad_exception_::`vftable';
  v10 = &boost::exception_detail::bad_exception_::`vftable';
  v11[1] = 0;
  v11[0] = "bad exception";
  v16 = 1;
  v6[8] = &unk_10022868;
  v15 = 2;
  sub_1000AC10(&v8);
  v6[0] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  v6[5] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  v16 = 2;
  v7 = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  v6[9] = 0;
  sub_100034D0(v6, &v8);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6[2] = "class boost::exception_ptr __cdecl boost::exception_detail::get_static_exception_object<struct boost::exceptio"
          "n_detail::bad_exception_>(void)";
  v6[3] = ".\\boost/exception/detail/exception_ptr.hpp";
  v6[4] = 129;
  if ( dword_1002F374 <= *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 4) )
    goto LABEL_15;
  _Init_thread_header(&dword_1002F374);
  if ( dword_1002F374 != -1 )
    goto LABEL_15;
  LOBYTE(v16) = 4;
  Block = operator new(0x2Cu);
  LOBYTE(v16) = 5;
  if ( Block == nullptr )
  {
    v2 = 0;
    goto LABEL_7;
  }
  v2 = sub_1000AA80(v6, 1);
  if ( v2 == 0 )
  {
LABEL_7:
    v12 = 0;
    goto LABEL_8;
  }
  v12 = v2 + *(_DWORD *)(*(_DWORD *)(v2 + 32) + 4) + 32;
LABEL_8:
  v13 = 0;
  LOBYTE(v16) = 6;
  sub_1000A940(&v12, v2, &v13);
  v3 = (volatile signed __int32 *)v13;
  dword_1002F36C = v12;
  dword_1002F370 = v13;
  if ( v13 != 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 4), 1u);
    v3 = (volatile signed __int32 *)v13;
  }
  LOBYTE(v16) = 7;
  if ( v3 != nullptr && _InterlockedExchangeAdd(v3 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 8))(v3);
  }
  LOBYTE(v16) = 4;
  atexit(sub_1001EBF0);
  _Init_thread_footer(&dword_1002F374);
LABEL_15:
  *a1 = dword_1002F36C;
  v4 = dword_1002F370;
  a1[1] = dword_1002F370;
  if ( v4 != 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 4), 1u);
  sub_1000AD30(v6);
  v7 = &boost::exception_detail::clone_base::`vftable';
  v16 = -1;
  v8 = &boost::exception_detail::bad_exception_::`vftable';
  v10 = &std::exception::`vftable';
  __std_exception_destroy(v11);
  v8 = &boost::exception::`vftable';
  v16 = 8;
  if ( (_DWORD)v9 != 0 )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 16))(v9);
  return a1;
}

// Address: 0x1000A7C0
char __cdecl sub_1000A7C0(int a1, _BYTE *a2)
{
  char result; // al

  *a2 = (a1 & 0xF) + 65;
  a2[1] = ((a1 >> 4) & 0xF) + 65;
  a2[2] = (BYTE1(a1) & 0xF) + 65;
  a2[3] = ((a1 >> 12) & 0xF) + 65;
  a2[4] = (BYTE2(a1) & 0xF) + 65;
  a2[5] = ((a1 >> 20) & 0xF) + 65;
  result = (HIBYTE(a1) & 0xF) + 65;
  a2[6] = result;
  a2[7] = ((a1 >> 28) & 0xF) + 65;
  a2[8] = 0;
  return result;
}

// Address: 0x1000A830
char __cdecl sub_1000A830(unsigned int a1, _BYTE *a2)
{
  char result; // al

  *a2 = (a1 & 0xF) + 65;
  a2[1] = ((a1 >> 4) & 0xF) + 65;
  a2[2] = (BYTE1(a1) & 0xF) + 65;
  a2[3] = ((a1 >> 12) & 0xF) + 65;
  a2[4] = (BYTE2(a1) & 0xF) + 65;
  a2[5] = ((a1 >> 20) & 0xF) + 65;
  result = (HIBYTE(a1) & 0xF) + 65;
  a2[6] = result;
  a2[7] = (a1 >> 28) + 65;
  a2[8] = 0;
  return result;
}

// Address: 0x1000A8A0
int *__cdecl sub_1000A8A0(int a1, int a2, int *a3)
{
  int *result; // eax
  int v4; // esi
  volatile signed __int32 *v5; // esi
  _DWORD v6[4]; // [esp+10h] [ebp-10h] BYREF

  result = sub_1000A1C0(v6, a2);
  v4 = *a3;
  *a3 = *result;
  *result = v4;
  v5 = (volatile signed __int32 *)v6[0];
  v6[3] = 0;
  if ( v6[0] != 0 )
  {
    result = (int *)_InterlockedExchangeAdd((volatile signed __int32 *)(v6[0] + 4), 0xFFFFFFFF);
    if ( result == (int *)1 )
    {
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
      result = (int *)(v5 + 2);
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
        return (int *)(*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 8))(v5);
    }
  }
  return result;
}

// Address: 0x1000A940
int *__cdecl sub_1000A940(int a1, int a2, int *a3)
{
  int *result; // eax
  int v4; // esi
  volatile signed __int32 *v5; // esi
  _DWORD v6[4]; // [esp+10h] [ebp-10h] BYREF

  result = sub_1000A260(v6, a2);
  v4 = *a3;
  *a3 = *result;
  *result = v4;
  v5 = (volatile signed __int32 *)v6[0];
  v6[3] = 0;
  if ( v6[0] != 0 )
  {
    result = (int *)_InterlockedExchangeAdd((volatile signed __int32 *)(v6[0] + 4), 0xFFFFFFFF);
    if ( result == (int *)1 )
    {
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
      result = (int *)(v5 + 2);
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
        return (int *)(*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 8))(v5);
    }
  }
  return result;
}

// Address: 0x1000A9E0
_DWORD *__thiscall sub_1000A9E0(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  if ( a3 != 0 )
  {
    *(this + 8) = &unk_10022784;
    *(this + 10) = &boost::exception_detail::clone_base::`vftable';
  }
  sub_1000AB20(a2);
  v4 = *(this + 8);
  *this = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  *(this + 5) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(v4 + 4) + 32) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*(this + 8) + 4) + 28) = 0;
  return this;
}

// Address: 0x1000AA80
_DWORD *__thiscall sub_1000AA80(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  if ( a3 != 0 )
  {
    *(this + 8) = &unk_10022868;
    *(this + 10) = &boost::exception_detail::clone_base::`vftable';
  }
  sub_1000AC10(a2);
  v4 = *(this + 8);
  *this = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  *(this + 5) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(v4 + 4) + 32) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*(this + 8) + 4) + 28) = 0;
  return this;
}

// Address: 0x1000AB20
_DWORD *__thiscall sub_1000AB20(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx

  *this = &boost::exception::`vftable';
  v3 = a2[1];
  *(this + 1) = v3;
  if ( v3 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  *(this + 2) = a2[2];
  *(this + 3) = a2[3];
  *(this + 4) = a2[4];
  *(this + 5) = &std::exception::`vftable';
  *((_QWORD *)this + 3) = 0;
  __std_exception_copy(a2 + 6, this + 6);
  *(this + 5) = &std::bad_alloc::`vftable';
  *this = &boost::exception_detail::bad_alloc_::`vftable';
  *(this + 5) = &boost::exception_detail::bad_alloc_::`vftable';
  return this;
}

// Address: 0x1000AB90
char *__thiscall sub_1000AB90(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000ABF0
char *__thiscall sub_1000ABF0(char *this)
{
  *(_QWORD *)(this + 4) = 0;
  *((_DWORD *)this + 1) = "bad exception";
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000AC10
_DWORD *__thiscall sub_1000AC10(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx

  *this = &boost::exception::`vftable';
  v3 = a2[1];
  *(this + 1) = v3;
  if ( v3 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  *(this + 2) = a2[2];
  *(this + 3) = a2[3];
  *(this + 4) = a2[4];
  *(this + 5) = &std::exception::`vftable';
  *((_QWORD *)this + 3) = 0;
  __std_exception_copy(a2 + 6, this + 6);
  *(this + 5) = &std::bad_exception::`vftable';
  *this = &boost::exception_detail::bad_exception_::`vftable';
  *(this + 5) = &boost::exception_detail::bad_exception_::`vftable';
  return this;
}

// Address: 0x1000AC80
int __thiscall sub_1000AC80(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx

  v2 = *(this + 8);
  *this = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  *(this + 5) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(v2 + 4) + 32) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*(this + 8) + 4) + 28) = *(_DWORD *)(*(this + 8) + 4) - 8;
  *this = &boost::exception_detail::bad_alloc_::`vftable';
  *(this + 5) = &boost::exception_detail::bad_alloc_::`vftable';
  *(this + 5) = &std::exception::`vftable';
  result = __std_exception_destroy(this + 6);
  *this = &boost::exception::`vftable';
  v4 = *(this + 1);
  if ( v4 != 0 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 16))(v4);
    if ( (_BYTE)result != 0 )
      *(this + 1) = 0;
  }
  return result;
}

// Address: 0x1000AD30
int __thiscall sub_1000AD30(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx

  v2 = *(this + 8);
  *this = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  *(this + 5) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(v2 + 4) + 32) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*(this + 8) + 4) + 28) = *(_DWORD *)(*(this + 8) + 4) - 8;
  *this = &boost::exception_detail::bad_exception_::`vftable';
  *(this + 5) = &boost::exception_detail::bad_exception_::`vftable';
  *(this + 5) = &std::exception::`vftable';
  result = __std_exception_destroy(this + 6);
  *this = &boost::exception::`vftable';
  v4 = *(this + 1);
  if ( v4 != 0 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 16))(v4);
    if ( (_BYTE)result != 0 )
      *(this + 1) = 0;
  }
  return result;
}

// Address: 0x1000ADE0
void __thiscall sub_1000ADE0(volatile signed __int32 **this)
{
  volatile signed __int32 *v1; // esi
  HANDLE ProcessHeap; // eax

  v1 = *this;
  if ( *this != nullptr && _InterlockedExchangeAdd(v1 + 1, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *, _DWORD))v1)(v1, 0);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)v1);
  }
}

// Address: 0x1000AE40
int __thiscall sub_1000AE40(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  *this = &boost::exception_detail::bad_alloc_::`vftable';
  *(this + 5) = &boost::exception_detail::bad_alloc_::`vftable';
  *(this + 5) = &std::exception::`vftable';
  result = __std_exception_destroy(this + 6);
  *this = &boost::exception::`vftable';
  v3 = *(this + 1);
  if ( v3 != 0 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
    if ( (_BYTE)result != 0 )
      *(this + 1) = 0;
  }
  return result;
}

// Address: 0x1000AEC0
void __thiscall std::exception::~exception(std::exception *this)
{
  *(_DWORD *)this = &std::exception::`vftable';
  __std_exception_destroy((char *)this + 4);
}

// Address: 0x1000AF10
int __thiscall sub_1000AF10(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  *this = &boost::exception_detail::bad_exception_::`vftable';
  *(this + 5) = &boost::exception_detail::bad_exception_::`vftable';
  *(this + 5) = &std::exception::`vftable';
  result = __std_exception_destroy(this + 6);
  *this = &boost::exception::`vftable';
  v3 = *(this + 1);
  if ( v3 != 0 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
    if ( (_BYTE)result != 0 )
      *(this + 1) = 0;
  }
  return result;
}

// Address: 0x1000AF90
void *__thiscall sub_1000AF90(_DWORD *this)
{
  void *result; // eax

  result = (void *)*(this + 3);
  if ( result != nullptr && result != (void *)-1 )
    return (void *)CloseHandle(result);
  return result;
}

// Address: 0x1000AFE0
int *__thiscall sub_1000AFE0(int *this)
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

// Address: 0x1000B030
int __thiscall sub_1000B030(_DWORD *this)
{
  int result; // eax

  result = sub_1000AC80(this);
  *(this + 10) = &boost::exception_detail::clone_base::`vftable';
  return result;
}

// Address: 0x1000B050
int __thiscall sub_1000B050(_DWORD *this)
{
  int result; // eax

  result = sub_1000AD30(this);
  *(this + 10) = &boost::exception_detail::clone_base::`vftable';
  return result;
}

// Address: 0x1000B061
int __thiscall sub_1000B061(_DWORD *this, char a2)
{
  return sub_1000B0A0((char *)this - *(this - 1) - 40, a2);
}

// Address: 0x1000B06C
int __thiscall sub_1000B06C(char *this, char a2)
{
  return sub_1000B0A0(this - 20, a2);
}

// Address: 0x1000B074
int __thiscall sub_1000B074(_DWORD *this, char a2)
{
  return sub_1000B0D0((char *)this - *(this - 1) - 40, a2);
}

// Address: 0x1000B07F
int __thiscall sub_1000B07F(char *this, char a2)
{
  return sub_1000B0D0(this - 20, a2);
}

// Address: 0x1000B087
int __thiscall sub_1000B087(char *this, char a2)
{
  return sub_1000B130(this - 20, a2);
}

// Address: 0x1000B08F
int __thiscall sub_1000B08F(char *this, char a2)
{
  return sub_1000B220(this - 20, a2);
}

// Address: 0x1000B0A0
_DWORD *__thiscall sub_1000B0A0(_DWORD *Block, char a2)
{
  sub_1000AC80(Block);
  *(Block + 10) = &boost::exception_detail::clone_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x1000B0D0
_DWORD *__thiscall sub_1000B0D0(_DWORD *Block, char a2)
{
  sub_1000AD30(Block);
  *(Block + 10) = &boost::exception_detail::clone_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x1000B100
_DWORD *__thiscall sub_1000B100(_DWORD *Block, char a2)
{
  *Block = &boost::detail::sp_counted_base::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x1000B130
_DWORD *__thiscall sub_1000B130(_DWORD *Block, char a2)
{
  int v3; // ecx

  *Block = &boost::exception_detail::bad_alloc_::`vftable';
  *(Block + 5) = &boost::exception_detail::bad_alloc_::`vftable';
  *(Block + 5) = &std::exception::`vftable';
  __std_exception_destroy(Block + 6);
  *Block = &boost::exception::`vftable';
  v3 = *(Block + 1);
  if ( v3 != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3) != 0 )
    *(Block + 1) = 0;
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x1000B1C0
std::exception *__thiscall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  __std_exception_destroy((char *)this + 4);
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(this);
  return this;
}

// Address: 0x1000B220
_DWORD *__thiscall sub_1000B220(_DWORD *Block, char a2)
{
  int v3; // ecx

  *Block = &boost::exception_detail::bad_exception_::`vftable';
  *(Block + 5) = &boost::exception_detail::bad_exception_::`vftable';
  *(Block + 5) = &std::exception::`vftable';
  __std_exception_destroy(Block + 6);
  *Block = &boost::exception::`vftable';
  v3 = *(Block + 1);
  if ( v3 != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3) != 0 )
    *(Block + 1) = 0;
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x1000B2B0
_DWORD *__thiscall sub_1000B2B0(void *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax

  v2 = *(_DWORD **)(a2 + 8);
  *(_DWORD *)(a2 + 8) = *v2;
  if ( *(_BYTE *)(*v2 + 13) == 0 )
    *(_DWORD *)(*v2 + 4) = a2;
  v2[1] = *(_DWORD *)(a2 + 4);
  result = *(_DWORD **)this;
  if ( a2 == *(_DWORD *)(*(_DWORD *)this + 4) )
  {
    result[1] = v2;
    *v2 = a2;
    *(_DWORD *)(a2 + 4) = v2;
  }
  else
  {
    result = *(_DWORD **)(a2 + 4);
    if ( a2 == *result )
      *result = v2;
    else
      result[2] = v2;
    *v2 = a2;
    *(_DWORD *)(a2 + 4) = v2;
  }
  return result;
}

// Address: 0x1000B300
_DWORD *__thiscall sub_1000B300(void *this, _DWORD *a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *result; // eax

  v2 = *a2;
  *a2 = *(_DWORD *)(*a2 + 8);
  v3 = *(_DWORD *)(v2 + 8);
  if ( *(_BYTE *)(v3 + 13) == 0 )
    *(_DWORD *)(v3 + 4) = a2;
  *(_DWORD *)(v2 + 4) = a2[1];
  result = *(_DWORD **)this;
  if ( a2 == *(_DWORD **)(*(_DWORD *)this + 4) )
  {
    result[1] = v2;
    *(_DWORD *)(v2 + 8) = a2;
    a2[1] = v2;
  }
  else
  {
    result = (_DWORD *)a2[1];
    if ( a2 == (_DWORD *)result[2] )
      result[2] = v2;
    else
      *result = v2;
    *(_DWORD *)(v2 + 8) = a2;
    a2[1] = v2;
  }
  return result;
}

// Address: 0x1000B360
HANDLE __cdecl sub_1000B360(volatile signed __int32 *a1, void (*a2)(void))
{
  void (*v2)(void); // edx
  signed __int32 v3; // eax
  HANDLE v4; // esi
  DWORD CurrentProcessId; // eax
  char v6; // al
  HANDLE result; // eax
  volatile signed __int32 v8; // eax
  DWORD v9; // eax
  HANDLE EventA; // esi
  _DWORD v11[5]; // [esp+0h] [ebp-84h] BYREF
  void (*v12)(void); // [esp+14h] [ebp-70h]
  int v13; // [esp+18h] [ebp-6Ch] BYREF
  signed __int32 v14; // [esp+1Ch] [ebp-68h]
  char v15; // [esp+20h] [ebp-64h]
  HANDLE hObject; // [esp+24h] [ebp-60h]
  CHAR Name[62]; // [esp+28h] [ebp-5Ch] BYREF
  _BYTE v18[10]; // [esp+66h] [ebp-1Eh] BYREF
  _DWORD *v19; // [esp+74h] [ebp-10h]
  int v20; // [esp+80h] [ebp-4h]

  v19 = v11;
  v2 = a2;
  v11[4] = a1;
  v12 = a2;
  v13 = -1051250462;
  v14 = 2131174883;
  v15 = 0;
  hObject = nullptr;
  Name[0] = 0;
  v20 = 0;
  while ( *a1 != v13 )
  {
    LOBYTE(v20) = 1;
    v3 = _InterlockedCompareExchange(a1, v14, 0);
    v4 = hObject;
    if ( v3 != 0 )
    {
      v6 = 0;
    }
    else
    {
      if ( hObject != nullptr )
        goto LABEL_11;
      if ( Name[0] == 0 )
      {
        strcpy(Name, "Local\\{C15730E2-145C-4c5e-B005-3BC753F42475}-once-flag");
        sub_1000A7C0((int)a1, &Name[54]);
        CurrentProcessId = GetCurrentProcessId();
        sub_1000A830(CurrentProcessId, v18);
      }
      v4 = OpenEventA(0x100002u, false, Name);
      if ( hObject != nullptr && hObject != (HANDLE)-1 )
        CloseHandle(hObject);
      hObject = v4;
      if ( v4 != nullptr )
      {
LABEL_11:
        ResetEvent(v4);
        v4 = hObject;
      }
      v2 = v12;
      v6 = 1;
    }
    LOBYTE(v20) = 0;
    if ( v6 != 0 )
    {
      LOBYTE(v20) = 2;
      v2();
      sub_1000B780(a1, &v13);
      break;
    }
    if ( v15 != 0 )
      goto LABEL_29;
    _InterlockedIncrement(a1 + 1);
    v8 = *a1;
    v15 = 1;
    if ( v8 == v13 )
      break;
    v4 = hObject;
    if ( hObject != nullptr )
    {
LABEL_29:
      WaitForSingleObjectEx(v4, 0xFFFFFFFF, false);
      v2 = v12;
    }
    else
    {
      if ( Name[0] == 0 )
      {
        strcpy(Name, "Local\\{C15730E2-145C-4c5e-B005-3BC753F42475}-once-flag");
        sub_1000A7C0((int)a1, &Name[54]);
        v9 = GetCurrentProcessId();
        sub_1000A830(v9, v18);
      }
      EventA = CreateEventA(nullptr, true, false, Name);
      if ( hObject != nullptr && hObject != (HANDLE)-1 )
        CloseHandle(hObject);
      v2 = v12;
      hObject = EventA;
    }
  }
  result = hObject;
  v20 = 4;
  if ( hObject != nullptr && hObject != (HANDLE)-1 )
    return (HANDLE)CloseHandle(hObject);
  return result;
}

// Address: 0x1000B5B4
char *__thiscall sub_1000B5B4(_DWORD *this)
{
  char *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  char *v4; // esi
  int v5; // eax

  v1 = (char *)this - *(this - 1);
  v2 = operator new(0x2Cu);
  v3 = v2;
  if ( v2 == nullptr )
    return nullptr;
  v2[8] = &unk_10022784;
  v4 = v1 - 40;
  v2[10] = &boost::exception_detail::clone_base::`vftable';
  sub_1000AB20(v2, v4);
  v5 = v3[8];
  *v3 = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  v3[5] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  *(_DWORD *)((char *)v3 + *(_DWORD *)(v5 + 4) + 32) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  *(_DWORD *)((char *)v3 + *(_DWORD *)(v3[8] + 4) + 28) = *(_DWORD *)(v3[8] + 4) - 8;
  sub_100034D0(v3, v4);
  return (char *)v3 + *(_DWORD *)(v3[8] + 4) + 32;
}

// Address: 0x1000B696
char *__thiscall sub_1000B696(_DWORD *this)
{
  char *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  char *v4; // esi
  int v5; // eax

  v1 = (char *)this - *(this - 1);
  v2 = operator new(0x2Cu);
  v3 = v2;
  if ( v2 == nullptr )
    return nullptr;
  v2[8] = &unk_10022868;
  v4 = v1 - 40;
  v2[10] = &boost::exception_detail::clone_base::`vftable';
  sub_1000AC10(v2, v4);
  v5 = v3[8];
  *v3 = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  v3[5] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  *(_DWORD *)((char *)v3 + *(_DWORD *)(v5 + 4) + 32) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  *(_DWORD *)((char *)v3 + *(_DWORD *)(v3[8] + 4) + 28) = *(_DWORD *)(v3[8] + 4) - 8;
  sub_100034D0(v3, v4);
  return (char *)v3 + *(_DWORD *)(v3[8] + 4) + 32;
}

// Address: 0x1000B780
int __cdecl sub_1000B780(volatile __int32 *a1, int a2)
{
  HANDLE EventA; // eax
  int v3; // ecx
  HANDLE v4; // edi
  int result; // eax

  if ( *(_BYTE *)(a2 + 8) == 0 )
  {
    _InterlockedIncrement(a1 + 1);
    *(_BYTE *)(a2 + 8) = 1;
  }
  _InterlockedExchange(a1, *(_DWORD *)a2);
  if ( *(_DWORD *)(a2 + 12) == 0 && *((int *)a1 + 1) > 1 )
  {
    if ( *(_BYTE *)(a2 + 16) == 0 )
      sub_1000BB70(a2 + 16, a1);
    EventA = CreateEventA(nullptr, true, false, (LPCSTR)(a2 + 16));
    v3 = *(_DWORD *)(a2 + 12);
    v4 = EventA;
    if ( v3 != 0 && v3 != -1 )
      CloseHandle(*(HANDLE *)(a2 + 12));
    *(_DWORD *)(a2 + 12) = v4;
  }
  result = *(_DWORD *)(a2 + 12);
  if ( result != 0 )
    return SetEvent(*(HANDLE *)(a2 + 12));
  return result;
}

// Address: 0x1000B830
DWORD sub_1000B830()
{
  DWORD result; // eax

  result = TlsAlloc();
  dwTlsIndex = result;
  return result;
}

// Address: 0x1000B850
int __thiscall sub_1000B850(_DWORD *this)
{
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  v1 = (int (__thiscall ***)(_DWORD, int))*(this + 3);
  if ( v1 != nullptr )
    return (**v1)(v1, 1);
  return result;
}

// Address: 0x1000B860
int **__thiscall sub_1000B860(_DWORD *this, int **a2, int *Block)
{
  int *v3; // ebx
  int v4; // edi
  int *v5; // edx
  int v6; // esi
  void *v7; // edx
  int *v8; // eax
  int i; // ecx
  int v10; // eax
  int v11; // eax
  int j; // ecx
  int **v13; // eax
  char v14; // cl
  _BYTE *v15; // ecx
  volatile signed __int32 *v16; // esi
  int v17; // eax
  int v19; // [esp+10h] [ebp-1Ch]
  int v20; // [esp+14h] [ebp-18h]
  int v21; // [esp+18h] [ebp-14h]

  v3 = Block;
  sub_1000AFE0((int *)&Block);
  if ( *(_BYTE *)(*v3 + 13) != 0 )
  {
    v4 = v3[2];
LABEL_6:
    v6 = v3[1];
    if ( *(_BYTE *)(v4 + 13) == 0 )
      *(_DWORD *)(v4 + 4) = v6;
    v7 = this;
    if ( *(int **)(*this + 4) == v3 )
    {
      *(_DWORD *)(*this + 4) = v4;
    }
    else if ( *(int **)v6 == v3 )
    {
      *(_DWORD *)v6 = v4;
    }
    else
    {
      *(_DWORD *)(v6 + 8) = v4;
    }
    v8 = (int *)*this;
    if ( *(int **)*this == v3 )
    {
      if ( *(_BYTE *)(v4 + 13) != 0 )
      {
        i = v6;
      }
      else
      {
        v10 = *(_DWORD *)v4;
        for ( i = v4; *(_BYTE *)(v10 + 13) == 0; v10 = *(_DWORD *)v10 )
          i = v10;
        v8 = (int *)*this;
      }
      *v8 = i;
    }
    if ( *(int **)(*this + 8) == v3 )
    {
      if ( *(_BYTE *)(v4 + 13) != 0 )
      {
        *(_DWORD *)(*this + 8) = v6;
      }
      else
      {
        v11 = *(_DWORD *)(v4 + 8);
        for ( j = v4; *(_BYTE *)(v11 + 13) == 0; v11 = *(_DWORD *)(v11 + 8) )
          j = v11;
        *(_DWORD *)(*this + 8) = j;
      }
    }
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v3[2] + 13) != 0 )
  {
    v4 = *v3;
    goto LABEL_6;
  }
  v5 = Block;
  v4 = Block[2];
  if ( Block == v3 )
    goto LABEL_6;
  *(_DWORD *)(*v3 + 4) = Block;
  *v5 = *v3;
  if ( v5 == (int *)v3[2] )
  {
    v6 = (int)v5;
  }
  else
  {
    v6 = v5[1];
    if ( *(_BYTE *)(v4 + 13) == 0 )
      *(_DWORD *)(v4 + 4) = v6;
    *(_DWORD *)v6 = v4;
    v5[2] = v3[2];
    *(_DWORD *)(v3[2] + 4) = v5;
  }
  if ( *(int **)(*this + 4) == v3 )
  {
    *(_DWORD *)(*this + 4) = v5;
  }
  else
  {
    v13 = (int **)v3[1];
    if ( *v13 == v3 )
      *v13 = v5;
    else
      v13[2] = v5;
  }
  v5[1] = v3[1];
  v14 = *((_BYTE *)v5 + 12);
  *((_BYTE *)v5 + 12) = *((_BYTE *)v3 + 12);
  v7 = this;
  *((_BYTE *)v3 + 12) = v14;
LABEL_37:
  if ( *((_BYTE *)v3 + 12) == 1 )
  {
    if ( v4 != *(_DWORD *)(*(_DWORD *)v7 + 4) )
    {
      while ( 1 )
      {
        v20 = v6;
        v21 = v6;
        v19 = v6;
        if ( *(_BYTE *)(v4 + 12) != 1 )
          break;
        v15 = *(_BYTE **)v6;
        if ( v4 == *(_DWORD *)v6 )
        {
          v15 = *(_BYTE **)(v6 + 8);
          if ( v15[12] == 0 )
          {
            v15[12] = 1;
            *(_BYTE *)(v6 + 12) = 0;
            sub_1000B2B0(v7, v6);
            v15 = *(_BYTE **)(v6 + 8);
            v7 = this;
          }
          if ( v15[13] != 0 )
            goto LABEL_55;
          if ( *(_BYTE *)(*(_DWORD *)v15 + 12) != 1 || *(_BYTE *)(*((_DWORD *)v15 + 2) + 12) != 1 )
          {
            if ( *(_BYTE *)(*((_DWORD *)v15 + 2) + 12) == 1 )
            {
              *(_BYTE *)(*(_DWORD *)v15 + 12) = 1;
              v15[12] = 0;
              sub_1000B300(v7, v15);
              v15 = *(_BYTE **)(v6 + 8);
            }
            v15[12] = *(_BYTE *)(v6 + 12);
            *(_BYTE *)(v6 + 12) = 1;
            *(_BYTE *)(*((_DWORD *)v15 + 2) + 12) = 1;
            sub_1000B2B0(this, v6);
            break;
          }
        }
        else
        {
          if ( v15[12] == 0 )
          {
            v15[12] = 1;
            *(_BYTE *)(v6 + 12) = 0;
            sub_1000B300(v7, (_DWORD *)v6);
            v15 = *(_BYTE **)v6;
            v7 = this;
          }
          if ( v15[13] != 0 )
            goto LABEL_55;
          if ( *(_BYTE *)(*((_DWORD *)v15 + 2) + 12) != 1 || *(_BYTE *)(*(_DWORD *)v15 + 12) != 1 )
          {
            if ( *(_BYTE *)(*(_DWORD *)v15 + 12) == 1 )
            {
              *(_BYTE *)(*((_DWORD *)v15 + 2) + 12) = 1;
              v15[12] = 0;
              sub_1000B2B0(v7, (int)v15);
              v15 = *(_BYTE **)v6;
            }
            v15[12] = *(_BYTE *)(v6 + 12);
            *(_BYTE *)(v6 + 12) = 1;
            *(_BYTE *)(*(_DWORD *)v15 + 12) = 1;
            sub_1000B300(this, (_DWORD *)v6);
            break;
          }
        }
        v15[12] = 0;
LABEL_55:
        v6 = *(_DWORD *)(v6 + 4);
        v4 = v21;
        if ( v20 == *(_DWORD *)(*(_DWORD *)v7 + 4) )
        {
          v4 = v19;
          break;
        }
      }
    }
    *(_BYTE *)(v4 + 12) = 1;
  }
  v16 = (volatile signed __int32 *)v3[6];
  if ( v16 != nullptr && _InterlockedExchangeAdd(v16 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (__thiscall **)(volatile signed __int32 *))(*v16 + 4))(v16);
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v16 + 8))(v16);
  }
  j_j___free_base(v3);
  v17 = *(this + 1);
  if ( v17 != 0 )
    *(this + 1) = v17 - 1;
  *a2 = Block;
  return a2;
}

// Address: 0x1000BB50
int __stdcall sub_1000BB50(int a1)
{
  return 0;
}

// Address: 0x1000BB60
int sub_1000BB60()
{
  return 0;
}

// Address: 0x1000BB70
char __cdecl sub_1000BB70(char *a1, int a2)
{
  DWORD CurrentProcessId; // eax

  strcpy(a1, "Local\\{C15730E2-145C-4c5e-B005-3BC753F42475}-once-flag");
  sub_1000A7C0(a2, a1 + 54);
  CurrentProcessId = GetCurrentProcessId();
  return sub_1000A830(CurrentProcessId, a1 + 62);
}

// Address: 0x1000BBE0
DWORD sub_1000BBE0()
{
  DWORD result; // eax

  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    result = TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return result;
}

// Address: 0x1000BC00
// attributes: thunk
void __cdecl sub_1000BC00()
{
  sub_1000BDE0();
}

// Address: 0x1000BC05
void __thiscall __noreturn sub_1000BC05(_DWORD *this, int a2, int a3)
{
  char *v3; // ecx
  int v4; // eax
  _DWORD v5[8]; // [esp-40h] [ebp-40h] BYREF
  _DWORD v6[6]; // [esp-20h] [ebp-20h]
  int v7; // [esp-8h] [ebp-8h]

  v3 = (char *)this - *(this - 1);
  v7 = -1;
  v6[5] = &loc_1001E819;
  v6[4] = NtCurrentTeb()->NtTib.ExceptionList;
  v6[0] = &unk_10022784;
  v6[2] = &boost::exception_detail::clone_base::`vftable';
  v7 = 0;
  v6[3] = 1;
  sub_1000AB20(v5, (_DWORD *)v3 - 10);
  v5[0] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  v5[5] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  v4 = *(_DWORD *)(v6[0] + 4);
  v7 = -1;
  *(_DWORD *)((char *)v6 + v4) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>::`vftable';
  *(_DWORD *)((char *)&v5[7] + *(_DWORD *)(v6[0] + 4)) = 0;
  _CxxThrowException(
    v5,
    (_ThrowInfo *)&_TI6_AV__clone_impl_Ubad_alloc__exception_detail_boost___exception_detail_boost__);
}

// Address: 0x1000BCA4
void __thiscall __noreturn sub_1000BCA4(_DWORD *this)
{
  char *v1; // ecx
  int v2; // eax
  _DWORD v3[8]; // [esp-40h] [ebp-40h] BYREF
  _DWORD v4[6]; // [esp-20h] [ebp-20h]
  int v5; // [esp-8h] [ebp-8h]

  v1 = (char *)this - *(this - 1);
  v5 = -1;
  v4[5] = &loc_1001E819;
  v4[4] = NtCurrentTeb()->NtTib.ExceptionList;
  v4[0] = &unk_10022868;
  v4[2] = &boost::exception_detail::clone_base::`vftable';
  v5 = 0;
  v4[3] = 1;
  sub_1000AC10(v3, (_DWORD *)v1 - 10);
  v3[0] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  v3[5] = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  v2 = *(_DWORD *)(v4[0] + 4);
  v5 = -1;
  *(_DWORD *)((char *)v4 + v2) = &boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>::`vftable';
  *(_DWORD *)((char *)&v3[7] + *(_DWORD *)(v4[0] + 4)) = 0;
  _CxxThrowException(
    v3,
    (_ThrowInfo *)&_TI6_AV__clone_impl_Ubad_exception__exception_detail_boost___exception_detail_boost__);
}

// Address: 0x1000BD50
int __cdecl sub_1000BD50(volatile __int32 *a1, int a2)
{
  HANDLE v2; // eax
  int v3; // ecx
  HANDLE v4; // edi
  int result; // eax

  _InterlockedExchange(a1, 0);
  if ( *(_DWORD *)(a2 + 12) == 0 )
  {
    if ( *(_BYTE *)(a2 + 16) == 0 )
      sub_1000BB70((char *)(a2 + 16), (int)a1);
    v2 = OpenEventA(0x100002u, false, (LPCSTR)(a2 + 16));
    v3 = *(_DWORD *)(a2 + 12);
    v4 = v2;
    if ( v3 != 0 && v3 != -1 )
      CloseHandle(*(HANDLE *)(a2 + 12));
    *(_DWORD *)(a2 + 12) = v4;
  }
  result = *(_DWORD *)(a2 + 12);
  if ( result != 0 )
    return SetEvent(*(HANDLE *)(a2 + 12));
  return result;
}

// Address: 0x1000BDE0
LPVOID sub_1000BDE0()
{
  LPVOID result; // eax
  int v1; // ebx
  _DWORD *v2; // esi
  HANDLE v3; // eax
  void *v4; // edi
  HANDLE ProcessHeap; // eax
  HANDLE v6; // eax
  int *v7; // esi
  int v8; // ecx
  int v9[2]; // [esp+10h] [ebp-14h] BYREF
  int v10; // [esp+20h] [ebp-4h]

  result = (LPVOID)dwTlsIndex;
  if ( dwTlsIndex == -1 )
  {
    v1 = 0;
  }
  else
  {
    result = TlsGetValue(dwTlsIndex);
    v1 = (int)result;
  }
  v9[1] = v1;
  v10 = 0;
  if ( v1 == 0 )
    goto LABEL_9;
  while ( 1 )
  {
    v2 = *(_DWORD **)(v1 + 12);
    if ( *(_DWORD *)(v1 + 24) != 0 )
    {
      if ( v2 == nullptr )
        goto LABEL_17;
      goto LABEL_14;
    }
    if ( v2 == nullptr )
      break;
    do
    {
LABEL_14:
      *(_DWORD *)(v1 + 12) = v2[1];
      if ( *v2 != 0 )
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v2 + 4))(*v2);
        v4 = (void *)*v2;
        (**(void (__thiscall ***)(_DWORD, _DWORD))*v2)(*v2, 0);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
      }
      v6 = GetProcessHeap();
      HeapFree(v6, 0, v2);
      v2 = *(_DWORD **)(v1 + 12);
    }
    while ( v2 != nullptr );
LABEL_17:
    while ( *(_DWORD *)(v1 + 24) != 0 )
    {
      v7 = **(int ***)(v1 + 20);
      v8 = v7[5];
      if ( v8 != 0 && v7[7] != 0 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 4))(v8, v7[7]);
      sub_1000B860((_DWORD *)(v1 + 20), (int **)v9, v7);
    }
  }
  sub_1000B360(dword_1002F344, (void (*)(void))sub_1000B830);
  result = (LPVOID)dwTlsIndex;
  if ( dwTlsIndex != -1 )
    result = (LPVOID)TlsSetValue(dwTlsIndex, nullptr);
LABEL_9:
  v10 = 1;
  if ( v1 != 0 )
  {
    result = (LPVOID)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4), 0xFFFFFFFF);
    if ( result == nullptr )
    {
      (**(void (__thiscall ***)(void *, _DWORD))v1)((void *)v1, 0);
      v3 = GetProcessHeap();
      return (LPVOID)HeapFree(v3, 0, (LPVOID)v1);
    }
  }
  return result;
}

// Address: 0x1000BF30
int sub_1000BF30()
{
  return 0;
}

// Address: 0x1000BF40
int sub_1000BF40()
{
  atexit((void (__cdecl *)())sub_1000BC00);
  return 0;
}

// Address: 0x1000BF60
int sub_1000BF60()
{
  sub_1000BBE0();
  return 0;
}

// Address: 0x1000BF70
void __stdcall TlsCallback_0(int a1, int a2, int a3)
{
  if ( a2 == 3 )
    sub_1000BC00();
}

// Address: 0x1000BF80
int __stdcall sub_1000BF80(int a1, int a2, int a3)
{
  if ( a2 != 0 )
  {
    if ( a2 == 3 )
      sub_1000BC00();
  }
  else
  {
    sub_1000BBE0();
  }
  return 1;
}

// Address: 0x1000BFBB
// attributes: thunk
void __cdecl j_j___free_base(void *Block)
{
  j___free_base(Block);
}

// Address: 0x1000BFC0
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x1000BFD1
void __cdecl sub_1000BFD1(void *Block)
{
  j_j___free_base(Block);
}

// Address: 0x1000BFDF
_DWORD *__thiscall sub_1000BFDF(_DWORD *Block, char a2)
{
  *Block = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000BFD1(Block);
  return Block;
}

// Address: 0x1000C002
void *__cdecl sub_1000C002(size_t a1)
{
  return operator new(a1);
}

// Address: 0x1000C00B
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
        sub_1000CD3D();
      sub_1000CD20();
    }
  }
  return result;
}

// Address: 0x1000C03E
// attributes: thunk
void __cdecl j_j_j___free_base(void *Block)
{
  j_j___free_base(Block);
}

// Address: 0x1000C043
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
    hEvent = CreateEventW(nullptr, true, false, nullptr);
    if ( hEvent != nullptr )
      goto LABEL_7;
LABEL_8:
    __scrt_fastfail(7);
    __debugbreak();
  }
  hEvent = nullptr;
  ((void (__thiscall *)(void (__stdcall *)(PCONDITION_VARIABLE), void *))InitializeConditionVariable)(
    InitializeConditionVariable,
    &unk_1002F390);
  dword_1002F398 = unknown_libname_5(SleepConditionVariableCS);
  dword_1002F39C = unknown_libname_5(v5);
LABEL_7:
  atexit(__scrt_uninitialize_thread_safe_statics);
  return 0;
}

// Address: 0x1000C103
// Microsoft VisualC 14/net runtime
uintptr_t __cdecl unknown_libname_5(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

// Address: 0x1000C120
void __cdecl __scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&CriticalSection);
  if ( hEvent != nullptr )
    CloseHandle(hEvent);
}

// Address: 0x1000C13C
int __usercall _Init_thread_abort@<eax>(int a1@<esi>, _DWORD *a2)
{
  int (__thiscall *v2)(_DWORD, void *, int); // ecx

  _Init_thread_lock();
  *a2 = 0;
  _Init_thread_unlock();
  if ( hEvent != nullptr )
  {
    SetEvent(hEvent);
    return ResetEvent(hEvent);
  }
  else
  {
    v2 = (int (__thiscall *)(_DWORD, void *, int))__ROR4__(dword_1002F39C ^ __security_cookie, __security_cookie & 0x1F);
    return v2(v2, &unk_1002F390, a1);
  }
}

// Address: 0x1000C155
int __usercall _Init_thread_footer@<eax>(int a1@<esi>, _DWORD *a2)
{
  int (__thiscall *v2)(_DWORD, void *, int); // ecx

  _Init_thread_lock();
  *a2 = ++dword_1002E0C0;
  *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) = dword_1002E0C0;
  _Init_thread_unlock();
  if ( hEvent != nullptr )
  {
    SetEvent(hEvent);
    return ResetEvent(hEvent);
  }
  else
  {
    v2 = (int (__thiscall *)(_DWORD, void *, int))__ROR4__(dword_1002F39C ^ __security_cookie, __security_cookie & 0x1F);
    return v2(v2, &unk_1002F390, a1);
  }
}

// Address: 0x1000C194
int __cdecl _Init_thread_header(_DWORD *a1)
{
  _Init_thread_lock();
  while ( *a1 != 0 )
  {
    if ( *a1 != -1 )
    {
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) = dword_1002E0C0;
      return _Init_thread_unlock();
    }
    _Init_thread_wait(0x64u);
  }
  *a1 = -1;
  return _Init_thread_unlock();
}

// Address: 0x1000C1DA
void _Init_thread_lock()
{
  EnterCriticalSection(&CriticalSection);
}

// Address: 0x1000C227
void _Init_thread_unlock()
{
  LeaveCriticalSection(&CriticalSection);
}

// Address: 0x1000C233
BOOL __cdecl _Init_thread_wait(DWORD dwMilliseconds)
{
  int (__thiscall *v1)(_DWORD, void *, struct _RTL_CRITICAL_SECTION *, DWORD); // ecx
  DWORD v3; // esi

  if ( hEvent != nullptr )
  {
    _Init_thread_unlock();
    v3 = WaitForSingleObjectEx(hEvent, dwMilliseconds, false);
    _Init_thread_lock();
    return v3 == 0;
  }
  else
  {
    v1 = (int (__thiscall *)(_DWORD, void *, struct _RTL_CRITICAL_SECTION *, DWORD))__ROR4__(
                                                                                      dword_1002F398 ^ __security_cookie,
                                                                                      __security_cookie & 0x1F);
    return v1(v1, &unk_1002F390, &CriticalSection, dwMilliseconds) != 0;
  }
}

// Address: 0x1000C298
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

// Address: 0x1000C2DC
char __scrt_acquire_startup_lock()
{
  PVOID StackBase; // edx
  signed __int32 v2; // eax

  if ( __scrt_is_ucrt_dll_in_use() == 0 )
    return 0;
  StackBase = NtCurrentTeb()->NtTib.StackBase;
  do
  {
    v2 = _InterlockedCompareExchange(&dword_1002F3A4, (signed __int32)StackBase, 0);
    if ( v2 == 0 )
      return 0;
  }
  while ( StackBase != (PVOID)v2 );
  return 1;
}

// Address: 0x1000C311
char __scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode v0; // eax

  if ( __scrt_is_ucrt_dll_in_use() != 0 )
  {
    __isa_available_init();
  }
  else
  {
    v0 = sub_1000D017();
    if ( _configure_narrow_argv(v0) != 0 )
      return 0;
    common_initialize_environment_nolock<char>();
  }
  return 1;
}

// Address: 0x1000C33C
bool __scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)__scrt_initialize_onexit_tables(0) != 0;
}

// Address: 0x1000C34A
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

// Address: 0x1000C369
char sub_1000C369()
{
  __acrt_thread_detach();
  __vcrt_thread_detach();
  return 1;
}

// Address: 0x1000C376
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

// Address: 0x1000C3A9
void __scrt_dllmain_uninitialize_c()
{
  if ( __scrt_is_ucrt_dll_in_use() != 0 )
  {
    _execute_onexit_table(&Table);
  }
  else if ( sub_10013AE2() == 0 )
  {
    _cexit();
  }
}

// Address: 0x1000C3CC
__vcrt_bool sub_1000C3CC()
{
  __acrt_uninitialize_critical(false);
  return __vcrt_uninitialize_critical();
}

// Address: 0x1000C3D9
char __cdecl __scrt_initialize_crt(int a1)
{
  if ( a1 == 0 )
    byte_1002F3C0 = 1;
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

// Address: 0x1000C412
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
    return _initialize_onexit_table(&Table) == 0 && _initialize_onexit_table(&stru_1002F3B4) == 0;
  v2 = (_PVFV *)(__security_cookie ^ __ROR4__(-1, 32 - (__security_cookie & 0x1F)));
  Table._first = v2;
  Table._last = v2;
  Table._end = v2;
  v3._first = v2;
  v3._last = v2;
  v3._end = v2;
  stru_1002F3B4 = v3;
  return true;
}

// Address: 0x1000C4A9
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

// Address: 0x1000C533
__int32 __cdecl __scrt_release_startup_lock(char a1)
{
  __int32 result; // eax

  result = __scrt_is_ucrt_dll_in_use();
  if ( result != 0 && a1 == 0 )
    return _InterlockedExchange(&dword_1002F3A4, 0);
  return result;
}

// Address: 0x1000C550
char __cdecl __scrt_uninitialize_crt(__vcrt_bool Terminating, char a2)
{
  if ( byte_1002F3C0 == 0 || a2 == 0 )
  {
    __acrt_uninitialize(Terminating);
    __vcrt_uninitialize(Terminating);
  }
  return 1;
}

// Address: 0x1000C578
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int v1; // eax

  if ( __ROR4__((int)Table._first ^ __security_cookie, __security_cookie & 0x1F) == -1 )
    v1 = sub_1001435E(Func);
  else
    v1 = _register_onexit_function(&Table, Func);
  return v1 == 0 ? Func : nullptr;
}

// Address: 0x1000C5B3
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x1000C5C8
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
      LOBYTE(result) = sub_1000C369();
      break;
    default:
      return 1;
  }
  return (unsigned __int8)result;
}

// Address: 0x1000C61B
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
  if ( dword_1002F3A0 != 0 )
    __scrt_fastfail(7);
  dword_1002F3A0 = 1;
  if ( __scrt_dllmain_before_initialize_c() )
  {
    sub_1000D150();
    atexit(sub_1000D17B);
    sub_1000CAD2();
    atexit(sub_1000CADE);
    __scrt_initialize_default_local_stdio_options();
    if ( _initterm_e((_PIFV *)&dword_1001F250, (_PIFV *)&dword_1001F270) == 0
      && __scrt_dllmain_after_initialize_c() != 0 )
    {
      _initterm((_PVFV *)&First, (_PVFV *)&Last);
      dword_1002F3A0 = 2;
      v3 = 0;
    }
  }
  __scrt_release_startup_lock(v6);
  if ( v3 != 0 )
    return 0;
  v4 = (_DWORD *)sub_1000D14A();
  v5 = v4;
  if ( *v4 != 0 && __scrt_is_nonwritable_in_current_image((int)v4) )
    ((void (__thiscall *)(_DWORD, HINSTANCE, int, void *const))*v5)(*v5, a1, 2, a2);
  ++dword_1002F3C4;
  return 1;
}

// Address: 0x1000C72D
BOOL __cdecl dllmain_crt_process_detach(__vcrt_bool Terminating)
{
  char v2; // [esp+10h] [ebp-1Ch]

  if ( dword_1002F3C4 <= 0 )
    return false;
  --dword_1002F3C4;
  v2 = __scrt_acquire_startup_lock();
  if ( dword_1002F3A0 != 2 )
    __scrt_fastfail(7);
  __scrt_dllmain_uninitialize_c();
  dword_1002F3A0 = 0;
  sub_1000C3CC();
  __scrt_release_startup_lock(v2);
  return __scrt_uninitialize_crt(Terminating, 0) != 0;
}

// Address: 0x1000C7AA
int __cdecl dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, void *const lpvReserved)
{
  void *v4; // ebx
  int v5; // esi
  BOOL v6; // eax

  if ( fdwReason == 0 && dword_1002F3C4 <= 0 )
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

// Address: 0x1000C8A6
int __stdcall dllmain_raw(HINSTANCE a1, unsigned int a2, void *const a3)
{
  if ( sub_1000BF80 != nullptr )
    return sub_1000BF80(a1, a2, a3);
  else
    return 1;
}

// Address: 0x1000C8D0
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}

// Address: 0x1000C8F3
// attributes: thunk
void _guard_check_icall_nop()
{
  ;
}

// Address: 0x1000C900
int _alloca_probe_16()
{
  return _alloca_probe();
}

// Address: 0x1000C916
int _alloca_probe_8()
{
  return _alloca_probe();
}

// Address: 0x1000C92C
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1000C970
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x1000C9B0
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

// Address: 0x1000CA20
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

// Address: 0x1000CAD2
void sub_1000CAD2()
{
  InitializeSListHead(&ListHead);
}

// Address: 0x1000CADE
void __cdecl sub_1000CADE()
{
  __std_type_info_destroy_list(&ListHead);
}

// Address: 0x1000CAF0
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

// Address: 0x1000CB20
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

// Address: 0x1000CBCA
BOOL __cdecl __raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // eax

  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x1000CBF2
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
  dword_1002F4D8 = 0;
  dword_1002F4D4 = v4;
  dword_1002F4D0 = v3;
  dword_1002F4CC = v0;
  dword_1002F4C8 = v2;
  dword_1002F4C4 = v1;
  word_1002F4F0 = __SS__;
  word_1002F4E4 = __CS__;
  word_1002F4C0 = __DS__;
  word_1002F4BC = __ES__;
  word_1002F4B8 = __FS__;
  word_1002F4B4 = __GS__;
  v5 = __readeflags();
  dword_1002F4E8 = v5;
  dword_1002F4DC = vars0;
  dword_1002F4E0 = retaddr;
  dword_1002F4EC = (int)&v8;
  dword_1002F428 = 65537;
  dword_1002F3E4 = retaddr;
  dword_1002F3D8 = -1073740791;
  dword_1002F3DC = 1;
  dword_1002F3E8 = 1;
  dword_1002F3EC = 2;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}

// Address: 0x1000CCED
char *__thiscall sub_1000CCED(char *this, int a2)
{
  sub_10003020(this, a2);
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}

// Address: 0x1000CD08
_DWORD *__thiscall sub_1000CD08(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad array new length";
  *this = &std::bad_array_new_length::`vftable';
  return this;
}

// Address: 0x1000CD20
void __noreturn sub_1000CD20()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_10005980(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
}

// Address: 0x1000CD3D
void __noreturn sub_1000CD3D()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000CD08(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVbad_array_new_length_std__);
}

// Address: 0x1000CD5A
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
  dword_1002F6F4 = 0;
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
    dword_1002F6F4 &= result;
  }
  return result;
}

// Address: 0x1000CE75
void sub_1000CE75()
{
  dword_1002F6F4 = 0;
}

// Address: 0x1000CE7D
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

  dword_1002F6F8 = 0;
  dword_1002E0E0 |= 1u;
  if ( IsProcessorFeaturePresent(0xAu) )
  {
    v22 = 0;
    _EAX = 0;
    dword_1002E0E0 |= 2u;
    dword_1002F6F8 = 1;
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
      v12 = dword_1002F6FC | 1;
      dword_1002F6FC |= 1u;
    }
    else
    {
      v12 = dword_1002F6FC;
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
        dword_1002F6FC = v12 | 2;
    }
    if ( (v13 & 0x100000) != 0 )
    {
      dword_1002E0E0 |= 4u;
      dword_1002F6F8 = 2;
      if ( (v13 & 0x8000000) != 0 && (v13 & 0x10000000) != 0 )
      {
        __asm { xgetbv }
        if ( (v13 & 6) == 6 )
        {
          v19 = dword_1002E0E0 | 8;
          dword_1002F6F8 = 3;
          dword_1002E0E0 |= 8u;
          if ( (v22 & 0x20) != 0 )
          {
            dword_1002F6F8 = 5;
            dword_1002E0E0 = v19 | 0x20;
          }
        }
      }
    }
  }
  return 0;
}

// Address: 0x1000D017
int sub_1000D017()
{
  return 1;
}

// Address: 0x1000D01B
BOOL __scrt_is_ucrt_dll_in_use()
{
  return dword_1002FF44 != 0;
}

// Address: 0x1000D030
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_1001D970;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1000D076
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { bnd retn }
}

// Address: 0x1000D08B
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
    dword_1002E0D0 = ~v0;
  }
  else
  {
    dword_1002E0D0 = ~__security_cookie;
  }
}

// Address: 0x1000D127
void *sub_1000D127()
{
  return &unk_1002F700;
}

// Address: 0x1000D12D
_DWORD *__scrt_initialize_default_local_stdio_options()
{
  _DWORD *v0; // eax
  int v1; // ecx
  _DWORD *result; // eax
  int v3; // ecx

  v0 = sub_100032A0();
  v1 = v0[1];
  *v0 |= 4u;
  v0[1] = v1;
  result = sub_1000D127();
  v3 = result[1];
  *result |= 2u;
  result[1] = v3;
  return result;
}

// Address: 0x1000D14A
void *sub_1000D14A()
{
  return &unk_1002FF40;
}

// Address: 0x1000D150
void sub_1000D150()
{
  ;
}

// Address: 0x1000D17B
void __cdecl sub_1000D17B()
{
  ;
}

// Address: 0x1000D1A6
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
        return (_DWORD *)sub_1000DA53(a1[6], v3);
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

// Address: 0x1000D23A
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
  v8 = __vcrt_getptd(268489575);
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

// Address: 0x1000D3F6
void __cdecl __noreturn CallUnexpected()
{
  if ( *(_DWORD *)(__vcrt_getptd() + 28) == 0 )
    unexpected();
  terminate();
}

// Address: 0x1000D430
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

// Address: 0x1000D4AB
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

// Address: 0x1000D4F5
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
  char pExceptionObject[12]; // [esp+Ch] [ebp-44h] BYREF
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
        sub_1000ABF0(pExceptionObject);
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

// Address: 0x1000D85D
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

// Address: 0x1000D978
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

// Address: 0x1000DA14
unsigned __int8 __cdecl Is_bad_exception_allowed(const struct _s_ESTypeList *a1)
{
  int v1; // esi
  int i; // ebx

  v1 = 0;
  if ( a1->nCount <= 0 )
    return 0;
  for ( i = 0; __std_type_info_compare(&a1->pTypeArray[i].pType->spare, &dword_1002EA18) != 0; ++i )
  {
    if ( ++v1 >= a1->nCount )
      return 0;
  }
  return 1;
}

// Address: 0x1000DA53
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_1000DA53(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x1000DA5A
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

// Address: 0x1000DA7F
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
      return sub_1000DA53((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_1000DA53((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x1000DB0E
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
      if ( (v7 & 0x80u) != 0 && (*(_BYTE *)a4 & 0x10) != 0 && dword_1002F708 != 0 )
      {
        v9 = ((int (__thiscall *)(int))dword_1002F708)(dword_1002F708);
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

// Address: 0x1000DC3C
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

// Address: 0x1000DC81
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

// Address: 0x1000DD49
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

// Address: 0x1000DE45
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

// Address: 0x1000DED3
// attributes: thunk
void __noreturn j__terminate()
{
  terminate();
}

// Address: 0x1000DED8
bool __uncaught_exception()
{
  return *(_DWORD *)(__vcrt_getptd() + 24) != 0;
}

// Address: 0x1000DEF0
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
      if ( _bittest(&dword_1002E0E0, 1u) )
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
      if ( !_bittest(&dword_1002E0E0, 1u) )
        goto Dword_align;
      goto XmmCopySmallTest;
    }
    if ( _bittest(&dword_1002F6FC, 1u) )
    {
      qmemcpy(a1, Src, Size);
      return a1;
    }
    if ( (((unsigned int)Src ^ (unsigned int)a1) & 0xF) == 0 && _bittest(&dword_1002E0E0, 1u) )
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
    if ( !_bittest(&dword_1002F6FC, 0) || ((unsigned __int8)a1 & 3) != 0 )
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

// Address: 0x1000E464
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
  if ( dword_1002F6F8 >= 2 )
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

// Address: 0x1000E505
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

// Address: 0x1000E568
void __cdecl __std_exception_destroy(int a1)
{
  if ( *(_BYTE *)(a1 + 4) != 0 )
    j___free_base(*(void **)a1);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
}

// Address: 0x1000E587
_purecall_handler __cdecl _get_purecall_handler()
{
  return (_purecall_handler)__ROR4__(
                              __security_cookie ^ _InterlockedCompareExchange(dword_1002F768, 0, 0),
                              __security_cookie & 0x1F);
}

// Address: 0x1000E5A6
void __noreturn _purecall()
{
  _purecall_handler purecall_handler; // eax

  purecall_handler = _get_purecall_handler();
  if ( purecall_handler != nullptr )
    ((void (__thiscall *)(_purecall_handler))purecall_handler)(purecall_handler);
  abort();
}

// Address: 0x1000E5D0
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

  if ( dword_1002F6F8 != 0 )
  {
    v2 = (char *)Str;
    if ( (unsigned int)dword_1002F6F8 > 1 )
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

// Address: 0x1000E710
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
    if ( _bittest(&dword_1002F6FC, 1u) )
    {
      memset(a1, Val, Size);
      return a1;
    }
    if ( !_bittest(&dword_1002E0E0, 1u) )
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
  if ( !_bittest(&dword_1002E0E0, 1u) )
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

// Address: 0x1000E86A
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x1000E8CA
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

// Address: 0x1000E9A7
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

// Address: 0x1000EA1F
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x1000EA51
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_3, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x1000EAA6
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

// Address: 0x1000EAD7
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(__vcrt_getptd() + 36);
  *(_DWORD *)(__vcrt_getptd() + 36) = a1;
  return a1;
}

// Address: 0x1000EAFB
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

// Address: 0x1000EB45
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

// Address: 0x1000EB6B
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

// Address: 0x1000EC0A
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *ExceptionRecord,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(ExceptionRecord, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x1000EC40
int __cdecl ValidateLocalCookies(int a1)
{
  return *(_DWORD *)(a1 + 8);
}

// Address: 0x1000EC80
int __cdecl SEH_1001D970(PEXCEPTION_RECORD ExceptionRecord, _DWORD *TargetFrame, int a3)
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
              if ( _IsNonwritableInCurrentImage(&off_10022990) != 0 )
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

// Address: 0x1000EDE6
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _ThrowInfo *v2; // edi
  int v3; // [esp-4h] [ebp-30h]
  DWORD dwExceptionCode[8]; // [esp+Ch] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_10022994, sizeof(dwExceptionCode));
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

// Address: 0x1000EE60
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
      if ( _bittest(&dword_1002E0E0, 1u) )
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
      if ( !_bittest(&dword_1002E0E0, 1u) )
        goto Dword_align_0;
      goto XmmCopySmallTest_0;
    }
    if ( _bittest(&dword_1002F6FC, 1u) )
    {
      qmemcpy(a1, Src, Size);
      return a1;
    }
    if ( (((unsigned int)Src ^ (unsigned int)a1) & 0xF) == 0 && _bittest(&dword_1002E0E0, 1u) )
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
    if ( !_bittest(&dword_1002F6FC, 0) || ((unsigned __int8)a1 & 3) != 0 )
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

// Address: 0x1000F3E0
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

// Address: 0x1000F48D
char *__thiscall sub_1000F48D(char *this, int a2)
{
  sub_10003020(this, a2);
  *(_DWORD *)this = &std::__non_rtti_object::`vftable';
  return this;
}

// Address: 0x1000F4A8
char *__thiscall sub_1000F4A8(char *this, int a2)
{
  sub_10003020(this, a2);
  *(_DWORD *)this = &std::bad_typeid::`vftable';
  return this;
}

// Address: 0x1000F4C3
_BYTE *__cdecl FindCompleteObject(void **a1)
{
  int v1; // ecx
  _BYTE *result; // eax

  v1 = *((_DWORD *)*a1 - 1);
  result = (char *)a1 - *(_DWORD *)(v1 + 4);
  if ( *(_DWORD *)(v1 + 8) != 0 )
    result -= *(unsigned int *)((char *)a1 - *(_DWORD *)(v1 + 8));
  return result;
}

// Address: 0x1000F4E0
const struct _s_RTTIBaseClassDescriptor *__cdecl FindMITargetTypeInstance(
        void *a1,
        const struct _s_RTTICompleteObjectLocator *a2,
        struct TypeDescriptor *a3,
        int a4,
        struct TypeDescriptor *a5)
{
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  unsigned int v15; // ebx
  int v16; // [esp+Ch] [ebp-14h]
  unsigned int v17; // [esp+10h] [ebp-10h]
  unsigned int v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v5 = 0;
  v18 = 0;
  v6 = -1;
  v7 = *((_DWORD *)a2 + 4);
  v8 = 0;
  v9 = 0;
  v20 = 0;
  v19 = -1;
  v10 = *(_DWORD *)(v7 + 12);
  v16 = v10;
  v17 = *(_DWORD *)(v7 + 8);
  if ( v17 == 0 )
    return nullptr;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v10 + 4 * v8);
    if ( v8 - v6 <= v18 )
      goto LABEL_10;
    if ( *(struct TypeDescriptor **)v11 != a5 )
    {
      v12 = strcmp((const char *)(*(_DWORD *)v11 + 8), a5->name);
      if ( v12 != 0 )
        v12 = v12 < 0 ? -1 : 1;
      if ( v12 != 0 )
        goto LABEL_10;
      v5 = v20;
    }
    if ( v5 != 0 )
    {
      if ( (*(_BYTE *)(v11 + 20) & 3) == 0 && (*(_BYTE *)(v5 + 20) & 1) == 0 )
        return (const struct _s_RTTIBaseClassDescriptor *)v11;
      return nullptr;
    }
    v9 = v11;
    v19 = v8;
    v18 = *(_DWORD *)(v11 + 4);
LABEL_10:
    if ( *(struct TypeDescriptor **)v11 == a3 )
      goto LABEL_14;
    v13 = strcmp((const char *)(*(_DWORD *)v11 + 8), a3->name);
    if ( v13 != 0 )
      v13 = v13 < 0 ? -1 : 1;
    if ( v13 == 0 )
    {
LABEL_14:
      if ( PMDtoOffset(a1, (const struct PMD *)(v11 + 8)) == a4 )
        break;
    }
    v5 = v20;
LABEL_18:
    if ( ++v8 >= v17 )
      return nullptr;
    v6 = v19;
    v10 = v16;
  }
  if ( v9 == 0 )
  {
    v5 = v11;
    v20 = v11;
    goto LABEL_18;
  }
  v15 = v8 - v19;
  if ( v15 > v18 )
  {
    if ( (*(_BYTE *)(v9 + 20) & 3) == 0 )
      goto LABEL_26;
    return nullptr;
  }
  if ( (*(_BYTE *)(v9 + 20) & 0x40) == 0 )
  {
    if ( v19 == 0 )
    {
LABEL_26:
      if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
        return nullptr;
    }
    return (const struct _s_RTTIBaseClassDescriptor *)v9;
  }
  return (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 24) + 12) + 4 * v15) + 20) & 1) == 0
       ? (const struct _s_RTTIBaseClassDescriptor *)v9
       : nullptr;
}

// Address: 0x1000F62D
const struct _s_RTTIBaseClassDescriptor *__cdecl FindSITargetTypeInstance(
        const struct _s_RTTICompleteObjectLocator *a1,
        struct TypeDescriptor *a2,
        struct TypeDescriptor *a3)
{
  int v3; // eax
  int v4; // edx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ecx
  unsigned int i; // ecx
  int *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]

  v3 = *((_DWORD *)a1 + 4);
  v4 = *(_DWORD *)(v3 + 12);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = 0;
  v14 = v4;
  if ( v5 != 0 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v4 + 4 * v6);
      if ( *(struct TypeDescriptor **)v13 == a3 )
        break;
      v7 = strcmp((const char *)(*(_DWORD *)v13 + 8), a3->name);
      if ( v7 != 0 )
        v7 = v7 < 0 ? -1 : 1;
      v4 = v14;
      if ( v7 == 0 )
        break;
      if ( ++v6 >= v5 )
        return nullptr;
    }
    for ( i = v6 + 1; i < v5; ++i )
    {
      v10 = *(int **)(v4 + 4 * i);
      if ( (v10[5] & 4) != 0 )
        break;
      v11 = *v10;
      if ( (struct TypeDescriptor *)v11 == a2 )
        return (const struct _s_RTTIBaseClassDescriptor *)v13;
      v12 = strcmp((const char *)(v11 + 8), a2->name);
      if ( v12 != 0 )
        v12 = v12 < 0 ? -1 : 1;
      if ( v12 == 0 )
        return (const struct _s_RTTIBaseClassDescriptor *)v13;
      v4 = v14;
    }
  }
  return nullptr;
}

// Address: 0x1000F6F0
const struct _s_RTTIBaseClassDescriptor *__cdecl FindVITargetTypeInstance(
        void *a1,
        const struct _s_RTTICompleteObjectLocator *a2,
        struct TypeDescriptor *a3,
        int a4,
        struct TypeDescriptor *a5)
{
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // esi
  int v10; // esi
  int v11; // eax
  int v12; // eax
  char v13; // dl
  int v14; // esi
  bool v15; // cl
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const struct _s_RTTIBaseClassDescriptor *result; // eax
  int v20; // [esp+Ch] [ebp-24h]
  unsigned int v21; // [esp+10h] [ebp-20h]
  const struct _s_RTTIBaseClassDescriptor *v22; // [esp+14h] [ebp-1Ch]
  int v23; // [esp+18h] [ebp-18h]
  unsigned int v24; // [esp+1Ch] [ebp-14h]
  int v25; // [esp+20h] [ebp-10h]
  int v26; // [esp+24h] [ebp-Ch]
  int v27; // [esp+28h] [ebp-8h]
  char v28; // [esp+2Fh] [ebp-1h]

  v5 = -1;
  v6 = *((_DWORD *)a2 + 4);
  v7 = 0;
  v27 = 0;
  v8 = 0;
  v22 = nullptr;
  v26 = 0;
  v9 = *(_DWORD *)(v6 + 12);
  v20 = v9;
  v21 = *(_DWORD *)(v6 + 8);
  v24 = 0;
  v25 = -1;
  v28 = 1;
  v23 = -1;
  if ( v21 == 0 )
    return nullptr;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v9 + 4 * v7);
    if ( v7 - v5 > v24 )
    {
      if ( *(struct TypeDescriptor **)v10 == a5 )
        goto LABEL_7;
      v11 = strcmp((const char *)(*(_DWORD *)v10 + 8), a5->name);
      if ( v11 != 0 )
        v11 = v11 < 0 ? -1 : 1;
      if ( v11 == 0 )
      {
LABEL_7:
        if ( (*(_BYTE *)(v10 + 20) & 3) == 0 )
          v22 = (const struct _s_RTTIBaseClassDescriptor *)v10;
        v26 = v10;
        v25 = v7;
        v24 = *(_DWORD *)(v10 + 4);
      }
    }
    if ( *(struct TypeDescriptor **)v10 != a3 )
    {
      v12 = strcmp((const char *)(*(_DWORD *)v10 + 8), a3->name);
      if ( v12 != 0 )
        v12 = v12 < 0 ? -1 : 1;
      if ( v12 != 0 )
        goto LABEL_27;
    }
    if ( PMDtoOffset(a1, (const struct PMD *)(v10 + 8)) != a4 )
      goto LABEL_27;
    v13 = v28;
    if ( v7 - v25 <= v24 )
    {
      if ( v28 != 0 )
      {
        if ( (*(_BYTE *)(v26 + 20) & 0x40) != 0 )
        {
          v14 = v26;
          v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v26 + 24) + 12) + 4 * (v7 - v25)) + 20);
          v15 = (v16 & 4) == 0;
          v13 = (v16 & 1) == 0 ? v28 : 0;
          v28 = v13;
        }
        else
        {
          if ( v25 == 0 )
          {
            v13 = (*(_BYTE *)(v10 + 20) & 1) == 0 ? v28 : 0;
            v28 = v13;
          }
          v14 = v26;
          v15 = true;
        }
        if ( v13 != 0 && v15 )
        {
          v17 = PMDtoOffset(a1, (const struct PMD *)(v14 + 8));
          if ( v8 != 0 && v23 != v17 )
            return nullptr;
          v8 = v14;
          v23 = v17;
LABEL_27:
          v13 = v28;
        }
      }
LABEL_28:
      v18 = v27;
      goto LABEL_29;
    }
    if ( (*(_BYTE *)(v10 + 20) & 5) != 0 )
      goto LABEL_28;
    v18 = v10;
    v27 = v10;
LABEL_29:
    if ( ++v7 >= v21 )
      break;
    v5 = v25;
    v9 = v20;
  }
  if ( v13 != 0 && v8 != 0 )
    return (const struct _s_RTTIBaseClassDescriptor *)v8;
  if ( v18 == 0 )
    return nullptr;
  result = v22;
  if ( v22 == nullptr )
    return nullptr;
  return result;
}

// Address: 0x1000F8A7
int __cdecl PMDtoOffset(char *a1, const struct PMD *a2)
{
  int v2; // edx

  v2 = 0;
  if ( a2->pdisp >= 0 )
    v2 = *(_DWORD *)(*(_DWORD *)&a1[a2->pdisp] + a2->vdisp) + a2->pdisp;
  return v2 + a2->mdisp;
}

// Address: 0x1000F8CB
_DWORD *__cdecl sub_1000F8CB(_DWORD *a1, int a2)
{
  a1[1] = 0;
  a1[2] = 0;
  a1[1] = a2;
  *a1 = &std::__non_rtti_object::`vftable';
  return a1;
}

// Address: 0x1000F8E7
_DWORD *__cdecl sub_1000F8E7(_DWORD *a1, int a2)
{
  a1[1] = 0;
  a1[2] = 0;
  a1[1] = a2;
  *a1 = &std::bad_cast::`vftable';
  return a1;
}

// Address: 0x1000F903
_BYTE *__cdecl __RTDynamicCast(void **a1, int a2, struct TypeDescriptor *a3, struct TypeDescriptor *a4, int a5)
{
  _BYTE *v6; // esi
  _BYTE *CompleteObject; // ebx
  int v8; // eax
  char *v9; // edi
  int v10; // ecx
  const struct _s_RTTIBaseClassDescriptor *VITargetTypeInstance; // eax
  _DWORD pExceptionObject[3]; // [esp+10h] [ebp-28h] BYREF
  _BYTE *v13; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  if ( a1 == nullptr )
    return nullptr;
  v6 = nullptr;
  ms_exc.registration.TryLevel = 0;
  CompleteObject = FindCompleteObject(a1);
  v8 = *((_DWORD *)*a1 - 1);
  v9 = (char *)((char *)a1 - a2 - CompleteObject);
  v10 = *(_DWORD *)(*(_DWORD *)(v8 + 16) + 4);
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 2) != 0 )
      VITargetTypeInstance = FindVITargetTypeInstance(
                               CompleteObject,
                               (const struct _s_RTTICompleteObjectLocator *)v8,
                               a3,
                               (int)v9,
                               a4);
    else
      VITargetTypeInstance = FindMITargetTypeInstance(
                               CompleteObject,
                               (const struct _s_RTTICompleteObjectLocator *)v8,
                               a3,
                               (int)v9,
                               a4);
  }
  else
  {
    VITargetTypeInstance = FindSITargetTypeInstance((const struct _s_RTTICompleteObjectLocator *)v8, a3, a4);
  }
  if ( VITargetTypeInstance != nullptr )
  {
    v6 = &CompleteObject[PMDtoOffset(CompleteObject, (const struct PMD *)((char *)VITargetTypeInstance + 8))];
    v13 = v6;
  }
  else
  {
    v13 = nullptr;
    if ( a5 != 0 )
    {
      sub_1000F8E7(pExceptionObject, (int)"Bad dynamic_cast!");
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast_std__);
    }
  }
  ms_exc.registration.TryLevel = -2;
  return v6;
}

// Address: 0x1000F9E5
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

// Address: 0x1000FA21
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

// Address: 0x1000FA50
char *__cdecl strstr(const char *Str, const char *SubStr)
{
  __m128i v2; // xmm0
  const __m128i *v3; // ecx
  char *result; // eax
  int v5; // ebx
  __m128 v6; // xmm3
  __m128i v7; // xmm3
  int v8; // edi
  int v9; // ebx
  char v10; // dl
  __m128i v11; // xmm1
  unsigned int v12; // ebx
  char v13; // bl
  const __m128i *v14; // edx
  unsigned int j; // ecx
  __m128i si128; // xmm2
  unsigned int v17; // ebx
  int v18; // ebx
  int v19; // esi
  char v20; // dl
  unsigned __int8 v21; // cf
  int v22; // ecx
  const __m128i *v23; // edx
  __m128i *i; // esi
  __m128i v25; // xmm1
  unsigned __int8 v26; // sf
  unsigned __int8 v27; // dl
  const char *v28; // edi
  char v29; // dh
  const char *v30; // ecx
  char *v31; // esi
  char v32; // al
  char v33; // ah
  char v34; // al
  char v35; // al

  v3 = (const __m128i *)SubStr;
  result = (char *)Str;
  if ( dword_1002F6F8 != 0 )
  {
    if ( (unsigned int)dword_1002F6F8 > 1 )
    {
      if ( *SubStr != 0 )
      {
        if ( ((unsigned __int16)SubStr & 0xFFFu) > 0xFF0 )
        {
          v18 = 15;
strstr_sttni_setloopchar:
          v19 = v3->m128i_u8[0];
          v3 = (const __m128i *)((char *)v3 + 1);
          while ( 1 )
          {
            v2 = _mm_srli_si128(_mm_insert_epi8(v2, v19, 15), 1);
            if ( --v18 == 0 )
              break;
            if ( v19 != 0 )
              goto strstr_sttni_setloopchar;
          }
        }
        else
        {
          v2 = _mm_loadu_si128((const __m128i *)SubStr);
        }
        while ( 2 )
        {
          v20 = _mm_cvtsi128_si32(v2);
          do
          {
            while ( ((unsigned __int16)result & 0xFFFu) > 0xFF0 )
            {
              if ( *result == 0 )
                return nullptr;
              if ( v20 == *result )
                goto strstr_sttni_srchcheck;
              ++result;
            }
            result += 16;
            v22 = _mm_cmpistri(v2, *((__m128i *)result - 1), 12);
            v21 = _mm_cmpistrc(v2, *((__m128i *)result - 1), 12);
          }
          while ( !(v21 | _mm_cmpistrz(v2, *((__m128i *)result - 1), 12)) );
          if ( v21 )
          {
            result = &result[v22 - 16];
strstr_sttni_srchcheck:
            v23 = (const __m128i *)SubStr;
            for ( i = (__m128i *)result; ; i = (__m128i *)((char *)i + 1) )
            {
              while ( ((unsigned __int16)i & 0xFFFu) <= 0xFF0 && ((unsigned __int16)v23 & 0xFFFu) <= 0xFF0 )
              {
                v25 = _mm_loadu_si128(v23);
                ++i;
                ++v23;
                v26 = _mm_cmpistrs(v25, i[-1], 12);
                if ( !_mm_cmpistro(v25, i[-1], 12) )
                  goto strstr_sttni_srchnext;
                if ( v26 )
                  return result;
              }
              if ( v23->m128i_i8[0] == 0 )
                return result;
              if ( v23->m128i_i8[0] != i->m128i_i8[0] )
                break;
              v23 = (const __m128i *)((char *)v23 + 1);
            }
strstr_sttni_srchnext:
            ++result;
            continue;
          }
          return nullptr;
        }
      }
    }
    else
    {
      v5 = *(unsigned __int8 *)SubStr;
      if ( (v5 | (v5 << 8)) != 0 )
      {
        v6 = (__m128)_mm_shufflelo_epi16(_mm_cvtsi32_si128(v5 | (unsigned int)(v5 << 8)), 0);
        v7 = (__m128i)_mm_movelh_ps(v6, v6);
        v8 = -1;
        do
        {
          v9 = v3->m128i_u8[0];
          v3 = (const __m128i *)((char *)v3 + 1);
          if ( v9 == 0 )
            goto strstr_sse_unsafe;
        }
        while ( ((unsigned __int8)v3 & 0xF) != 0 );
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v3), (__m128i)0LL)) == 0 )
          v8 = 15;
strstr_sse_unsafe:
        v10 = _mm_cvtsi128_si32(v7);
        while ( 1 )
        {
          while ( ((unsigned __int16)result & 0xFFFu) > 0xFF0 )
          {
strstr_sse_srchchar:
            v13 = *result;
            if ( *result == 0 )
              return nullptr;
            ++result;
            if ( v10 == v13 )
            {
              v14 = (const __m128i *)result;
              for ( j = (unsigned int)(SubStr + 1); ; ++j )
              {
                while ( 2 )
                {
                  if ( (j & v8) == 0 && ((unsigned __int16)v14 & 0xFFFu) <= 0xFF0 )
                  {
                    si128 = _mm_load_si128((const __m128i *)j);
                    v17 = _mm_movemask_epi8(
                            _mm_or_si128(
                              _mm_cmpeq_epi8(si128, (__m128i)0LL),
                              _mm_cmpeq_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v14), si128), (__m128i)0LL)));
                    if ( v17 == 0 )
                    {
                      ++v14;
                      j += 16;
                      continue;
                    }
                    _BitScanForward(&v17, v17);
                    v14 = (const __m128i *)((char *)v14 + v17);
                    j += v17;
                  }
                  break;
                }
                if ( *(_BYTE *)j == 0 )
                  return --result;
                if ( *(_BYTE *)j != v14->m128i_i8[0] )
                  goto strstr_sse_unsafe;
                v14 = (const __m128i *)((char *)v14 + 1);
              }
            }
          }
          v11 = _mm_loadu_si128((const __m128i *)result);
          v12 = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8(v11, v7), _mm_cmpeq_epi8((__m128i)0LL, v11)));
          result += 16;
          if ( v12 != 0 )
          {
            _BitScanForward(&v12, v12);
            result = &result[v12 - 16];
            goto strstr_sse_srchchar;
          }
        }
      }
    }
  }
  else
  {
    v27 = *SubStr;
    v28 = Str;
    if ( *SubStr != 0 )
    {
      v29 = SubStr[1];
      if ( v29 != 0 )
      {
findnext:
        v30 = SubStr;
        v31 = (char *)(v28 + 1);
        if ( *v28 == v27 )
          goto first_char_found;
        if ( *v28 != 0 )
        {
          while ( 2 )
          {
            v32 = *v31++;
            while ( v32 == v27 )
            {
first_char_found:
              v32 = *v31++;
              if ( v32 == v29 )
              {
                v28 = v31 - 1;
                while ( 1 )
                {
                  v33 = v30[2];
                  if ( v33 == 0 )
                    break;
                  v34 = *v31;
                  v31 += 2;
                  if ( v34 != v33 )
                    goto findnext;
                  v35 = v30[3];
                  if ( v35 == 0 )
                    break;
                  v30 += 2;
                  if ( v35 != *(v31 - 1) )
                    goto findnext;
                }
                return (char *)(v28 - 1);
              }
            }
            if ( v32 != 0 )
              continue;
            break;
          }
        }
        return nullptr;
      }
      else
      {
        return __from_strstr_to_strchr(v27, (char *)Str);
      }
    }
  }
  return result;
}

// Address: 0x1000FCB3
FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, _DWORD *a3, _DWORD *a4)
{
  volatile signed __int32 *v4; // ebx
  signed __int32 v5; // eax
  uintptr_t v6; // edx
  FARPROC v7; // esi
  _DWORD *v9; // esi
  HMODULE module; // eax
  FARPROC ProcAddress; // eax

  v4 = (volatile signed __int32 *)((char *)&unk_1002F71C + 4 * a1);
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
        _InterlockedExchange(v4, unknown_libname_5((int)ProcAddress));
        return v7;
      }
      v6 = __security_cookie;
    }
    _InterlockedExchange(v4, v6 ^ __ROR4__(-1, 32 - (v6 & 0x1F)));
  }
  return nullptr;
}

// Address: 0x1000FD53
HMODULE __cdecl try_get_module(int a1)
{
  volatile signed __int32 *v1; // edi
  signed __int32 v2; // eax
  const WCHAR *v4; // ebx
  HMODULE Library; // esi

  v1 = (volatile signed __int32 *)((char *)&unk_1002F70C + 4 * a1);
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

// Address: 0x1000FDD4
DWORD __cdecl __vcrt_FlsAlloc(int a1)
{
  FARPROC function; // eax

  function = try_get_function(4, "FlsAlloc", dword_10022AA0, dword_10022AA8);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int))function)(function, a1);
  else
    return TlsAlloc();
}

// Address: 0x1000FE0E
int __cdecl __vcrt_FlsFree(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(5, "FlsFree", dword_10022AA8, dword_10022AB0);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}

// Address: 0x1000FE48
LPVOID __cdecl __vcrt_FlsGetValue(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(6, "FlsGetValue", dword_10022AB0, dword_10022AB8);
  if ( function != nullptr )
    return (LPVOID)((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}

// Address: 0x1000FE82
int __cdecl __vcrt_FlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC function; // eax

  function = try_get_function(7, "FlsSetValue", dword_10022AB8, dword_10022AC0);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD, LPVOID))function)(function, dwTlsIndex, lpTlsValue);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x1000FEBF
int __cdecl __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC function; // eax

  function = try_get_function(8, "InitializeCriticalSectionEx", dword_10022AC0, off_10022AC8);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))function)(
             function,
             lpCriticalSection,
             dwSpinCount,
             a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x1000FF05
uintptr_t *__vcrt_initialize_winapi_thunks()
{
  uintptr_t *result; // eax
  int v1; // ecx
  uintptr_t v2; // esi

  result = (uintptr_t *)&unk_1002F71C;
  v1 = 0;
  v2 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  do
  {
    ++v1;
    *result++ = v2;
  }
  while ( v1 != (&unk_1002F740 < &unk_1002F71C ? 0 : 9) );
  return result;
}

// Address: 0x1000FF3F
BOOL __cdecl __vcrt_uninitialize_winapi_thunks(char a1)
{
  HMODULE *v1; // esi
  BOOL result; // eax

  if ( a1 == 0 )
  {
    v1 = (HMODULE *)&unk_1002F70C;
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
    while ( v1 != (HMODULE *)&unk_1002F71C );
  }
  return result;
}

// Address: 0x1000FF71
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

// Address: 0x1000FF9A
__vcrt_bool __cdecl __vcrt_thread_attach()
{
  return __vcrt_getptd_noexit() != 0;
}

// Address: 0x1000FFA5
__vcrt_bool __cdecl __vcrt_thread_detach()
{
  __vcrt_freeptd(nullptr);
  return true;
}

// Address: 0x1000FFB0
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

// Address: 0x1000FFCF
__vcrt_bool __cdecl __vcrt_uninitialize_critical()
{
  __vcrt_uninitialize_ptd();
  return true;
}

// Address: 0x1000FFD7
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

// Address: 0x1000FFF5
void __stdcall __vcrt_freefls(void *Block)
{
  if ( Block != nullptr && Block != &unk_1002F740 )
    _free_base(Block);
}

// Address: 0x10010011
void __cdecl __vcrt_freeptd(void *Block)
{
  DWORD v1; // eax
  void *Value; // esi

  v1 = dword_1002E0F0;
  if ( dword_1002E0F0 != -1 )
  {
    Value = Block;
    if ( Block == nullptr )
    {
      Value = __vcrt_FlsGetValue(dword_1002E0F0);
      v1 = dword_1002E0F0;
    }
    __vcrt_FlsSetValue(v1, nullptr);
    __vcrt_freefls(Value);
  }
}

// Address: 0x10010047
int __cdecl __vcrt_getptd()
{
  int result; // eax

  result = __vcrt_getptd_noexit();
  if ( result == 0 )
    abort();
  return result;
}

// Address: 0x10010055
void *__vcrt_getptd_noexit()
{
  DWORD LastError; // edi
  LPVOID Value; // eax
  void *v3; // ebx
  void *v4; // eax
  void *v5; // esi

  if ( dword_1002E0F0 == -1 )
    return nullptr;
  LastError = GetLastError();
  Value = __vcrt_FlsGetValue(dword_1002E0F0);
  v3 = Value;
  if ( Value == (LPVOID)-1 )
  {
LABEL_6:
    v3 = nullptr;
    goto LABEL_12;
  }
  if ( Value == nullptr )
  {
    if ( __vcrt_FlsSetValue(dword_1002E0F0, (LPVOID)0xFFFFFFFF) != 0 )
    {
      v4 = _calloc_base(1u, 0x28u);
      v5 = v4;
      if ( v4 != nullptr && __vcrt_FlsSetValue(dword_1002E0F0, v4) != 0 )
      {
        v3 = v5;
        v5 = nullptr;
      }
      else
      {
        v3 = nullptr;
        __vcrt_FlsSetValue(dword_1002E0F0, nullptr);
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

// Address: 0x100100E7
char __vcrt_initialize_ptd()
{
  DWORD v0; // eax

  v0 = __vcrt_FlsAlloc((int)__vcrt_freefls);
  dword_1002E0F0 = v0;
  if ( v0 == -1 )
    return 0;
  if ( __vcrt_FlsSetValue(v0, &unk_1002F740) == 0 )
  {
    __vcrt_uninitialize_ptd();
    return 0;
  }
  return 1;
}

// Address: 0x1001011A
char __vcrt_uninitialize_ptd()
{
  if ( dword_1002E0F0 != -1 )
  {
    __vcrt_FlsFree(dword_1002E0F0);
    dword_1002E0F0 = -1;
  }
  return 1;
}

// Address: 0x10010140
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

// Address: 0x1001018C
uintptr_t __vcrt_initialize_pure_virtual_call_handler()
{
  uintptr_t result; // eax

  result = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  dword_1002F768[0] = result;
  return result;
}

// Address: 0x100101B0
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

// Address: 0x10010240
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

// Address: 0x10010286
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x100102AE
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x100102C5
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x100102DE
void __fastcall _EH4_GlobalUnwind2(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &ReturnPoint, ExceptionRecord, nullptr);
}

// Address: 0x100102F7
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x10010310
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

  if ( dword_1002F6F8 == 0 )
    return __from_strstr_to_strchr((unsigned __int8)Val, (char *)Str);
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
  return result;
}

// Address: 0x1001037E
char *__usercall __from_strstr_to_strchr@<eax>(int a1@<eax>, char *Str, ...)
{
  int v3; // eax
  char *v4; // edx
  char v5; // cl
  int v6; // ebx
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax

  v3 = a1 << 8;
  v4 = Str;
  if ( ((unsigned __int8)Str & 3) != 0 )
  {
    while ( 1 )
    {
      v5 = *v4++;
      if ( v5 == (_BYTE)a1 )
        return v4 - 1;
      if ( v5 == 0 )
        return nullptr;
      if ( ((unsigned __int8)v4 & 3) == 0 )
        goto main_loop_start_0;
    }
  }
  else
  {
main_loop_start_0:
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
      v12 = *((_DWORD *)v4 - 1);
      if ( (_BYTE)v12 == (_BYTE)v6 )
        break;
      if ( (_BYTE)v12 == 0 )
        return nullptr;
      if ( BYTE1(v12) == (_BYTE)v6 )
        return v4 - 3;
      if ( BYTE1(v12) == 0 )
        return nullptr;
      v13 = HIWORD(v12);
      if ( (_BYTE)v13 == (_BYTE)v6 )
        return v4 - 2;
      if ( (_BYTE)v13 == 0 )
        return nullptr;
      if ( BYTE1(v13) == (_BYTE)v6 )
        return v4 - 1;
      if ( BYTE1(v13) == 0 )
        return nullptr;
    }
    return v4 - 4;
  }
}

// Address: 0x1001043B
char __vcrt_initialize_locks()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_1002F7A8;
  v1 = 0;
  while ( __vcrt_InitializeCriticalSectionEx(v0, 0xFA0u, 0) != 0 )
  {
    ++dword_1002F7C0;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x18 )
      return 1;
  }
  __vcrt_uninitialize_locks();
  return 0;
}

// Address: 0x10010477
char __vcrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_1002F7C0;
  if ( dword_1002F7C0 != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_1002F790 + 24 * dword_1002F7C0);
    do
    {
      DeleteCriticalSection(v1);
      --dword_1002F7C0;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

// Address: 0x100104B0
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x100104D0
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

// Address: 0x10010515
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

// Address: 0x10010599
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

// Address: 0x100105BC
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x100105D0);
}

// Address: 0x100105C5
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_1002E108 = a3;
  unk_1002E104 = result;
  unk_1002E10C = a2;
  return result;
}

// Address: 0x100105E4
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x100105E7
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
    sub_1000CE75();
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
    sub_1000CE75();
}

// Address: 0x10010722
int __cdecl sub_10010722(int a1)
{
  return unknown_libname_25(a1);
}

// Address: 0x10010736
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
                                                                                      dword_1002F7C4 ^ __security_cookie,
                                                                                      __security_cookie & 0x1F);
    v9 = FunctionName;
    v8 = Expression;
    if ( v6 == nullptr )
      _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v6(v8, v9, v10, v11, v12);
}

// Address: 0x100107B1
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x100107C1
void __cdecl __noreturn _invalid_parameter_noinfo_noreturn()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x100107DE
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

// Address: 0x10010811
void *__cdecl malloc(size_t Size)
{
  return _malloc_base(Size);
}

// Address: 0x1001081C
// attributes: thunk
void __cdecl j___free_base(void *Block)
{
  _free_base(Block);
}

// Address: 0x10010821
int __cdecl sub_10010821(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
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
  unknown_libname_11(&v17, a1, a2, a5, v12, a7);
  v9 = sub_10010EA2(v18);
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

// Address: 0x100109A6
int __thiscall __crt_stdio_output::formatting_buffer::count<char>(_DWORD *this)
{
  if ( *(this + 257) != 0 )
    return *(this + 256) >> 1;
  else
    return 512;
}

// Address: 0x100109BE
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
        unknown_libname_12(&v7);
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

// Address: 0x10010A44
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

// Address: 0x10010A93
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

// Address: 0x10010AB1
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

// Address: 0x10010B26
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

// Address: 0x10010BAE
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

// Address: 0x10010BDF
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

// Address: 0x10010C2B
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_10(int this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
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

// Address: 0x10010C67
// Microsoft VisualC universal runtime
_DWORD *__thiscall unknown_libname_11(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  unknown_libname_10((int)this, a2, a3, a4, a5, a6, a7);
  *(this + 276) = 0;
  *(this + 3) = _errno();
  return this;
}

// Address: 0x10010C9C
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
  if ( dword_1002FC78 == 0 )
  {
    *((_DWORD *)this + 1) = off_1002E2F0;
    mbcinfo = (struct __crt_multibyte_data *)off_1002E2F4;
    goto LABEL_5;
  }
  v4 = __acrt_getptd();
  *(_DWORD *)this = v4;
  *((_DWORD *)this + 1) = *(_DWORD *)(v4 + 76);
  *((_DWORD *)this + 2) = *(_DWORD *)(v4 + 72);
  sub_100155BF(v4, (char *)this + 4);
  sub_100155EC(*(_DWORD *)this, (char *)this + 8);
  v5 = *(_DWORD *)(*(_DWORD *)this + 848);
  if ( (v5 & 2) == 0 )
  {
    *(_DWORD *)(*(_DWORD *)this + 848) = v5 | 2;
    *((_BYTE *)this + 12) = 1;
  }
  return this;
}

// Address: 0x10010D1F
void __thiscall __crt_stdio_output::formatting_buffer::~formatting_buffer(void **this)
{
  _free_base(*(this + 257));
  *(this + 257) = nullptr;
}

// Address: 0x10010D39
// Microsoft VisualC universal runtime
void **__thiscall unknown_libname_12(void **this, void **a2)
{
  _free_base(*this);
  *this = nullptr;
  *this = *a2;
  *a2 = nullptr;
  return this;
}

// Address: 0x10010D5D
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

// Address: 0x10010DB4
// Microsoft VisualC universal runtime
int __stdcall unknown_libname_13(unsigned __int16 a1, int a2)
{
  int v2; // ecx

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_10023200[a1] & 0xF;
  return (unsigned __int8)byte_10023220[8 * v2 + a2] >> 4;
}

// Address: 0x10010DE8
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

// Address: 0x10010E44
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_14(int **this, int *a2)
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

// Address: 0x10010EA2
int __thiscall sub_10010EA2(int this)
{
  int v3; // eax
  char v4; // al
  __int16 v5; // ax

  if ( (unsigned __int8)unknown_libname_24(this + 1096) == 0 )
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
        v3 = unknown_libname_13(*(_WORD *)(this + 50), *(_DWORD *)(this + 28));
        *(_DWORD *)(this + 28) = v3;
        if ( v3 == 8 )
          goto LABEL_4;
        switch ( v3 )
        {
          case 0:
            v4 = sub_10010FFF(this);
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
            v4 = unknown_libname_15(this);
            break;
          case 3:
            v4 = sub_1001143B(this);
            break;
          case 4:
            *(_DWORD *)(this + 40) = 0;
            continue;
          case 5:
            v4 = sub_10011039(this);
            break;
          case 6:
            v4 = sub_10011062(this);
            break;
          case 7:
            v4 = sub_100111DE(this);
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

// Address: 0x10010FC2
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_15(int this)
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

// Address: 0x10010FFF
char sub_10010FFF()
{
  if ( (unsigned __int8)unknown_libname_16() != 0 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x1001101E
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_16(int this)
{
  *(_BYTE *)(this + 60) = 1;
  __crt_stdio_output::string_output_adapter<wchar_t>::write_character(*(_WORD *)(this + 50), this + 24);
  return 1;
}

// Address: 0x10011039
char __thiscall sub_10011039(int this)
{
  int v2; // eax

  if ( *(_WORD *)(this + 50) != 42 )
    return unknown_libname_14((int **)this, (int *)(this + 40));
  *(_DWORD *)(this + 20) += 4;
  v2 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *(_DWORD *)(this + 40) = v2;
  if ( v2 < 0 )
    *(_DWORD *)(this + 40) = -1;
  return 1;
}

// Address: 0x10011062
char __thiscall sub_10011062(_DWORD *this)
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
      return sub_100111DE(this);
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

// Address: 0x100111DE
char __thiscall sub_100111DE(int this)
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
          v4 = unknown_libname_17(this);
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
                v4 = sub_10011925(this);
                goto LABEL_11;
              }
              return 0;
            }
            goto LABEL_31;
          }
LABEL_18:
          v4 = unknown_libname_19(0);
          goto LABEL_11;
        }
LABEL_31:
        v4 = unknown_libname_18(this);
        goto LABEL_11;
      }
      v17 = 1;
LABEL_14:
      v4 = sub_10011730(16, v17);
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
    v4 = sub_1001190D(this);
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
      v4 = sub_10011730(10, 0);
      break;
    case 'n':
      v4 = unknown_libname_20(this);
      break;
    case 'o':
      v4 = sub_100118EE(this);
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
    unknown_libname_22(0);
    if ( *(int *)(this + 24) >= 0 && (*(_DWORD *)(this + 32) & 4) != 0 )
      __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>(
        this + 1096,
        32,
        v15,
        (_DWORD *)(this + 24));
  }
  return 1;
}

// Address: 0x1001143B
char __thiscall sub_1001143B(int this)
{
  int v2; // eax

  if ( *(_WORD *)(this + 50) != 42 )
    return unknown_libname_14((int **)this, (int *)(this + 36));
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

// Address: 0x10011467
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

// Address: 0x100114C3
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_17(void *this)
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

// Address: 0x10011526
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_18(unsigned __int16 *this)
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

// Address: 0x10011698
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_19(char *this, int a2)
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

// Address: 0x10011730
char __thiscall sub_10011730(int *this, unsigned int a2, char a3)
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

// Address: 0x1001187A
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_20(int this)
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

// Address: 0x100118EE
char __thiscall sub_100118EE(int *this)
{
  if ( (*(this + 8) & 0x20) != 0 )
    *(this + 8) |= 0x80u;
  return sub_10011730(this, 8u, 0);
}

// Address: 0x1001190D
char __thiscall sub_1001190D(int *this)
{
  *(this + 10) = 8;
  *(this + 11) = 10;
  return sub_10011730(this, 0x10u, 1);
}

// Address: 0x10011925
char __thiscall sub_10011925(void *this)
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
    v4 = unknown_libname_21(v2, 0);
  }
  *((_DWORD *)this + 14) = v4;
  return 1;
}

// Address: 0x10011999
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_21(int this, int a2, int a3)
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

// Address: 0x100119D9
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

// Address: 0x10011A1E
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_22(int this, int a2)
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

// Address: 0x10011AA9
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

// Address: 0x10011B43
int __cdecl sub_10011B43(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  return sub_10010821(a1, a2, a3, a4, a5, a6, a7);
}

// Address: 0x10011B67
int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v3; // ecx
  int v4; // edx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // si
  wchar_t v7; // ax

  if ( dword_1002FC78 != 0 )
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

// Address: 0x10011BFC
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

// Address: 0x10011CDC
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

// Address: 0x10011D42
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

// Address: 0x10011D89
int sub_10011D89()
{
  return common_flush_all(1);
}

// Address: 0x10011D92
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
  v1 = (FILE **)dword_1002F7CC;
  v2 = (FILE **)((char *)dword_1002F7CC + 4 * Count);
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

// Address: 0x10011E6A
int __cdecl __acrt_errno_from_os_error(int a1)
{
  unsigned int i; // eax

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_10023298[2 * i] )
      return dword_1002329C[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x10011EAD
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

// Address: 0x10011ED0
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = __acrt_getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 20);
  else
    return (unsigned int *)&unk_1002E114;
}

// Address: 0x10011EE3
int *__cdecl _errno()
{
  int v0; // eax

  v0 = __acrt_getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 16);
  else
    return (int *)&unk_1002E110;
}

// Address: 0x10011EF6
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
  dword_1002F7CC = _calloc_base(v0, 4u);
  _free_base(nullptr);
  if ( dword_1002F7CC == nullptr )
  {
    Count = 3;
    dword_1002F7CC = _calloc_base(3u, 4u);
    _free_base(nullptr);
    if ( dword_1002F7CC == nullptr )
      return -1;
  }
  v2 = 0;
  v3 = (char *)&unk_1002E118;
  do
  {
    __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 32), 0xFA0u, 0);
    *((_DWORD *)dword_1002F7CC + v2) = v3;
    v4 = *(_DWORD *)(dword_1002FA68[v2 >> 6] + 48 * (v2 & 0x3F) + 24);
    if ( v4 == -1 || v4 == -2 || v4 == 0 )
      *((_DWORD *)v3 + 4) = -2;
    v3 += 56;
    ++v2;
  }
  while ( v3 != (char *)&unk_1002E1C0 );
  return 0;
}

// Address: 0x10011FBE
void __acrt_uninitialize_stdio()
{
  int i; // esi

  sub_10011D89();
  _fcloseall();
  for ( i = 0; i != 12; i += 4 )
  {
    __acrt_stdio_free_buffer_nolock(*(_DWORD *)((char *)dword_1002F7CC + i));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_1002F7CC + i) + 32));
  }
  _free_base(dword_1002F7CC);
  dword_1002F7CC = nullptr;
}

// Address: 0x1001200A
void __cdecl _lock_file(FILE *Stream)
{
  EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
}

// Address: 0x1001201E
void __cdecl _unlock_file(FILE *Stream)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
}

// Address: 0x10012032
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
      if ( (int)sub_10017214(v3) >= 0 )
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

// Address: 0x100120A8
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

// Address: 0x10012130
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

// Address: 0x10012176
int __stdcall __crt_seh_guarded_call<void (__cdecl *)(int)>::operator()<_lambda_a048d3beccc847880fc8490e18b82769_,_lambda_ec61778202f4f5fc7e7711acc23c3bca_ &,_lambda_f7496a158712204296dd6628a163878e_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = __ROR4__(dword_1002F7E0 ^ __security_cookie, __security_cookie & 0x1F);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x100121D0
int __cdecl sub_100121D0(int a1, int a2)
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

// Address: 0x100121F8
void (__cdecl **__cdecl get_global_action_nolock(int a1))(int)
{
  switch ( a1 )
  {
    case 2:
      return (void (__cdecl **)(int))&unk_1002F7D8;
    case 6:
      return (void (__cdecl **)(int))&dword_1002F7E0;
    case 15:
      return (void (__cdecl **)(int))&unk_1002F7E4;
    default:
      break;
  }
  if ( a1 != 21 )
  {
    if ( a1 != 22 )
      return nullptr;
    return (void (__cdecl **)(int))&dword_1002F7E0;
  }
  return (void (__cdecl **)(int))&unk_1002F7DC;
}

// Address: 0x1001223A
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

// Address: 0x10012262
int __fastcall __acrt_get_sigabrt_handler(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  return sub_100121D0(3, (int)&v2);
}

// Address: 0x10012279
int __cdecl __acrt_initialize_signal_handlers(int a1)
{
  unknown_libname_25(a1);
  unknown_libname_25(a1);
  unknown_libname_25(a1);
  return unknown_libname_25(a1);
}

// Address: 0x100122B4
int *__cdecl __fpecode()
{
  return (int *)(__acrt_getptd() + 8);
}

// Address: 0x100122BD
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
  int v10; // eax
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
      ((void (__cdecl *)(int, _DWORD))v15)(8, *(_DWORD *)(v10 + 8));
    }
    else
    {
      v15(Signal);
    }
    if ( Signal == 8 || Signal == 11 || Signal == 4 )
    {
      *((_DWORD *)v1 + 1) = v13;
      if ( Signal == 8 )
        *(_DWORD *)(__acrt_getptd() + 8) = v12;
    }
  }
  return 0;
}

// Address: 0x100124D0
char *__cdecl strncpy(char *Destination, const char *Source, size_t Count)
{
  size_t v3; // ecx
  size_t v4; // ebx
  const char *v5; // esi
  char *v6; // edi
  size_t v7; // ecx
  char v8; // al
  size_t v10; // ecx
  int v11; // eax
  int v12; // edx

  v3 = Count;
  if ( Count == 0 )
    return Destination;
  v4 = Count;
  v5 = Source;
  v6 = Destination;
  if ( ((unsigned __int8)Source & 3) == 0 )
  {
    v7 = Count >> 2;
    if ( Count >> 2 != 0 )
      goto main_loop_entrance;
copy_tail_loop:
    while ( 1 )
    {
      v8 = *v5++;
      *v6++ = v8;
      if ( v8 == 0 )
        break;
      if ( --v4 == 0 )
        return Destination;
    }
    while ( --v4 != 0 )
finish_loop:
      *v6++ = v8;
    return Destination;
  }
  do
  {
    v8 = *v5++;
    *v6++ = v8;
    if ( --v3 == 0 )
      return Destination;
    if ( v8 == 0 )
    {
      while ( ((unsigned __int8)v6 & 3) != 0 )
      {
        *v6++ = 0;
        if ( --v3 == 0 )
          return Destination;
      }
      v4 = v3;
      v10 = v3 >> 2;
      if ( v10 == 0 )
        goto finish_loop;
      goto fill_dwords_with_EOS;
    }
  }
  while ( ((unsigned __int8)v5 & 3) != 0 );
  LOBYTE(v4) = v3;
  v7 = v3 >> 2;
  if ( v7 == 0 )
  {
tail_loop_start:
    v4 &= 3u;
    if ( v4 != 0 )
      goto copy_tail_loop;
    return Destination;
  }
  while ( 1 )
  {
main_loop_entrance:
    v11 = (*(_DWORD *)v5 + 2130640639) ^ ~*(_DWORD *)v5;
    v12 = *(_DWORD *)v5;
    v5 += 4;
    if ( (v11 & 0x81010100) != 0 )
    {
      if ( (_BYTE)v12 == 0 )
        break;
      if ( BYTE1(v12) == 0 )
      {
        *(_DWORD *)v6 = (unsigned __int8)v12;
        goto fill_with_EOS_dwords;
      }
      if ( (v12 & 0xFF0000) == 0 )
      {
        *(_DWORD *)v6 = (unsigned __int16)v12;
        goto fill_with_EOS_dwords;
      }
      if ( (v12 & 0xFF000000) == 0 )
      {
        *(_DWORD *)v6 = v12;
        goto fill_with_EOS_dwords;
      }
    }
    *(_DWORD *)v6 = v12;
    v6 += 4;
    if ( --v7 == 0 )
      goto tail_loop_start;
  }
  *(_DWORD *)v6 = 0;
fill_with_EOS_dwords:
  v6 += 4;
  v8 = 0;
  v10 = v7 - 1;
  if ( v10 != 0 )
  {
fill_dwords_with_EOS:
    v8 = 0;
    do
    {
      *(_DWORD *)v6 = 0;
      v6 += 4;
      --v10;
    }
    while ( v10 != 0 );
  }
  v4 &= 3u;
  if ( v4 != 0 )
    goto finish_loop;
  return Destination;
}

// Address: 0x100125F4
wchar_t *__cdecl wcsncpy(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  size_t v3; // ecx
  wchar_t *v4; // edi
  wchar_t v5; // ax
  size_t v6; // ecx
  char v7; // cf
  size_t v8; // ecx
  wchar_t *v9; // edi
  int i; // ecx

  v3 = Count;
  v4 = Destination;
  if ( Count != 0 )
  {
    do
    {
      v5 = *(wchar_t *)((char *)v4 + (char *)Source - (char *)Destination);
      *v4++ = v5;
      if ( v5 == 0 )
        break;
      --v3;
    }
    while ( v3 != 0 );
    if ( v3 != 0 )
    {
      v6 = v3 - 1;
      if ( v6 != 0 )
      {
        v7 = v6 & 1;
        v8 = v6 >> 1;
        memset(v4, 0, 4 * v8);
        v9 = &v4[2 * v8];
        for ( i = v7; i != 0; --i )
          *v9++ = 0;
      }
    }
  }
  return Destination;
}

// Address: 0x10012637
char *__cdecl sub_10012637(void *Block, unsigned int a2, unsigned int a3)
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

// Address: 0x100126AF
char __acrt_initialize_locks()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_1002F7E8;
  v1 = 0;
  while ( __acrt_InitializeCriticalSectionEx(v0, 0xFA0u, 0) != 0 )
  {
    ++dword_1002F920;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x138 )
      return 1;
  }
  __acrt_uninitialize_locks(0);
  return 0;
}

// Address: 0x100126F0
void __cdecl __acrt_lock(int a1)
{
  EnterCriticalSection(&stru_1002F7E8 + a1);
}

// Address: 0x10012707
char __acrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_1002F920;
  if ( dword_1002F920 != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_1002F7D0 + 24 * dword_1002F920);
    do
    {
      DeleteCriticalSection(v1);
      --dword_1002F920;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

// Address: 0x10012738
void __cdecl __acrt_unlock(int a1)
{
  LeaveCriticalSection(&stru_1002F7E8 + a1);
}

// Address: 0x1001274F
void __cdecl _lock_locales()
{
  __acrt_lock(4);
}

// Address: 0x10012758
void __cdecl _unlock_locales()
{
  __acrt_unlock(4);
}

// Address: 0x10012761
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
      if ( sub_10017C71() == 0 || _callnewh(v2) == 0 )
        goto LABEL_9;
    }
  }
  return result;
}

// Address: 0x100127BE
const unsigned __int16 *__cdecl __pctype_func()
{
  int v0; // eax
  const unsigned __int16 **v2; // [esp+0h] [ebp-4h] BYREF

  v0 = ((int (__cdecl *)())__acrt_getptd)();
  v2 = *(const unsigned __int16 ***)(v0 + 76);
  sub_100155BF(v0, &v2);
  return *v2;
}

// Address: 0x100127E4
int __cdecl _chvalidchk_l(const int C, const int Mask, const _locale_t Locale)
{
  int v3; // eax

  if ( Locale != nullptr )
    v3 = *(unsigned __int16 *)(*(_DWORD *)Locale->locinfo + 2 * C);
  else
    v3 = __pctype_func()[C];
  return Mask & v3;
}

// Address: 0x1001280E
int __cdecl _ischartype_l(const int C, const int Mask, const _locale_t Locale)
{
  if ( Locale != nullptr && *((int *)Locale->locinfo + 1) > 1 )
    return _isctype_l(C, Mask, Locale);
  else
    return _chvalidchk_l(C, Mask, Locale);
}

// Address: 0x10012841
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

// Address: 0x10012879
int __cdecl isdigit(int C)
{
  if ( dword_1002FC78 != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_1002E238[C] & 4;
}

// Address: 0x100128A6
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

// Address: 0x100128FF
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x10012917
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
      if ( sub_10017C71() == 0 || _callnewh(v1) == 0 )
        goto LABEL_8;
    }
  }
  return result;
}

// Address: 0x10012965
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
    if ( sub_10017C71() == 0 || _callnewh(Size) == 0 )
      goto LABEL_6;
  }
}

// Address: 0x100129CE
// Microsoft VisualC universal runtime
_DWORD *__cdecl unknown_libname_23(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a3 != nullptr )
    *a3 = a2;
  return result;
}

// Address: 0x100129F0
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

// Address: 0x10012E9E
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

// Address: 0x10012ECA
// Microsoft VisualC universal runtime
char __thiscall unknown_libname_24(_DWORD *this)
{
  if ( *this != 0 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

// Address: 0x10012EF0
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

  if ( dword_1002FF4C != 0 )
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
        if ( dword_1002FE24 == 0 )
          _startTwoArgErrorHandling();
        return result;
      }
    }
    result = _twoToTOS(__FYL2X__(_ST6, v14));
    if ( v19 == 1 )
      result = -result;
    if ( dword_1002FE24 == 0 )
      ((void (__fastcall *)(void *, int))_check_range_exit)(&unk_100245E0, 29);
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

// Address: 0x10013151
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

// Address: 0x10013175
void odd()
{
  ;
}

// Address: 0x10013179
void __cdecl __noreturn abort()
{
  int v0; // ecx
  int v1; // ebx
  int v2; // edi
  int v3; // esi

  if ( __acrt_get_sigabrt_handler(v0) != 0 )
    raise(22);
  if ( (byte_1002E230 & 2) != 0 )
  {
    if ( IsProcessorFeaturePresent(0x17u) )
      __fastfail(7u);
    __acrt_call_reportfault(v1, v2, v3, 3, 1073741845, 1);
  }
  _exit(3);
}

// Address: 0x100131BC
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

// Address: 0x100131D8
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

// Address: 0x10013212
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

// Address: 0x1001335C
BOOL __cdecl internal_isupper_l(int C, _locale_t Locale)
{
  return _ischartype_l(C, 1, Locale) != 0;
}

// Address: 0x10013379
int __cdecl _tolower_l(int C, _locale_t Locale)
{
  return common_tox_l<&bool internal_isupper_l(int,__crt_locale_pointers * const),&int internal_map_lower(int,__crt_locale_pointers * const)>(
           C,
           0x100u,
           Locale);
}

// Address: 0x10013393
int __cdecl tolower(int C)
{
  int v1; // ecx

  if ( dword_1002FC78 != 0 )
    return _tolower_l(C, nullptr);
  v1 = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return v1;
}

// Address: 0x100133C3
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

  if ( dword_1002F6F8 < 5 )
  {
    if ( dword_1002F6F8 < 1 )
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

// Address: 0x1001357A
const char *__cdecl common_strerror<char>(int a1)
{
  int v1; // eax
  int v2; // esi
  char *v4; // edi
  const char *sys_err_msg; // eax

  v1 = __acrt_getptd_noexit();
  v2 = v1;
  if ( v1 == 0 )
    return "Visual C++ CRT: Not enough memory to complete call to strerror.";
  v4 = *(char **)(v1 + 64);
  if ( v4 == nullptr )
  {
    *(_DWORD *)(v1 + 64) = _calloc_base(0x86u, 1u);
    _free_base(nullptr);
    v4 = *(char **)(v2 + 64);
    if ( v4 == nullptr )
      return "Visual C++ CRT: Not enough memory to complete call to strerror.";
  }
  sys_err_msg = (const char *)_get_sys_err_msg(a1);
  if ( strncpy_s(v4, 0x86u, sys_err_msg, 0x85u) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return *(const char **)(v2 + 64);
}

// Address: 0x100135F6
int __cdecl _get_sys_err_msg(unsigned int a1)
{
  unsigned int v1; // esi

  v1 = a1;
  if ( a1 >= *(_DWORD *)sub_100194E0() )
    v1 = *(_DWORD *)sub_100194E0();
  return *(_DWORD *)(sub_100194DA() + 4 * v1);
}

// Address: 0x1001361A
char *__cdecl strerror(int ErrorMessage)
{
  return (char *)common_strerror<char>(ErrorMessage);
}

// Address: 0x10013625
// Microsoft VisualC universal runtime
int __fastcall unknown_libname_25(_DWORD *a1, int a2, int a3)
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

// Address: 0x10013656
int __usercall sub_10013656@<eax>(int a1@<edx>, int a2)
{
  return unknown_libname_25(&dword_1002F924, a1, a2);
}

// Address: 0x1001366A
int __cdecl _callnewh(size_t Size)
{
  _PNH new_handler; // eax

  new_handler = _query_new_handler();
  return new_handler != nullptr && new_handler(Size) != 0;
}

// Address: 0x100136AE
_PNH __cdecl _query_new_handler()
{
  int (__cdecl *v1)(size_t); // [esp+10h] [ebp-1Ch]

  __acrt_lock(0);
  v1 = (int (__cdecl *)(size_t))__ROR4__(dword_1002F924 ^ __security_cookie, __security_cookie & 0x1F);
  __acrt_unlock(0);
  return v1;
}

// Address: 0x10013700
int __cdecl _seh_filter_dll(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  if ( ExceptionNum == -529697949 )
    return _seh_filter_exe(0xE06D7363, ExceptionPtr);
  else
    return 0;
}

// Address: 0x10013720
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

// Address: 0x10013893
BOOL __cdecl atexit_exception_filter(unsigned int a1)
{
  return a1 == -529697949;
}

// Address: 0x100138A6
void __cdecl common_exit(UINT uExitCode, enum _crt_exit_cleanup_mode a2, enum _crt_exit_return_mode a3)
{
  void (__thiscall *v3)(_DWORD, _DWORD, _DWORD, _DWORD); // ecx

  if ( a3 == _crt_exit_terminate_process && (unsigned __int8)__scrt_is_managed_app() != 0 )
    try_cor_exit_process(uExitCode);
  __acrt_lock(2);
  if ( byte_1002F930 == 0 )
  {
    _InterlockedExchange(&dword_1002F928, 1);
    if ( a2 != _crt_exit_full_cleanup )
    {
      if ( a2 == _crt_exit_quick_cleanup )
        _execute_onexit_table(&stru_1002FA5C);
    }
    else
    {
      if ( dword_1002F92C != (__security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F))) )
      {
        v3 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))__ROR4__(
                                                                    dword_1002F92C ^ __security_cookie,
                                                                    __security_cookie & 0x1F);
        v3(v3, 0, 0, 0);
      }
      _execute_onexit_table(&stru_1002FA50);
    }
    if ( a2 == _crt_exit_full_cleanup )
      _initterm((_PVFV *)&dword_1001F280, (_PVFV *)&dword_1001F290);
    _initterm((_PVFV *)&dword_1001F294, (_PVFV *)&dword_1001F29C);
    if ( a3 == _crt_exit_terminate_process )
      byte_1002F930 = 1;
  }
  __acrt_unlock(2);
  if ( a3 == _crt_exit_terminate_process )
    exit_or_terminate_process(uExitCode);
}

// Address: 0x100139BF
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

// Address: 0x10013A00
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

// Address: 0x10013A44
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

// Address: 0x10013AAE
int __cdecl sub_10013AAE(int a1)
{
  dword_1002F92C = a1;
  return a1;
}

// Address: 0x10013ABD
void __cdecl _cexit()
{
  common_exit(0, _crt_exit_full_cleanup, _crt_exit_return_to_caller);
}

// Address: 0x10013ACC
void __cdecl __noreturn _exit(int Code)
{
  common_exit(Code, _crt_exit_no_cleanup, _crt_exit_terminate_process);
}

// Address: 0x10013AE2
int sub_10013AE2()
{
  return dword_1002F928;
}

// Address: 0x10013AE8
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
  v3 = (CHAR *)dword_1002FE54;
  dword_1002FE5C = (int)Filename;
  if ( dword_1002FE54 == 0 || *(_BYTE *)dword_1002FE54 == 0 )
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
        dword_1002FE48 = v9;
        Block = nullptr;
        v6 = 0;
        dword_1002FE4C = v8;
      }
      _free_base(v7);
      Block = nullptr;
      goto LABEL_18;
    }
    dword_1002FE48 = v13 - 1;
    v5 = buffer_for_argv;
    buffer_for_argv = nullptr;
    dword_1002FE4C = v5;
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

// Address: 0x10013C0C
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

// Address: 0x10013D81
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

// Address: 0x10013DD6
errno_t __cdecl _configure_narrow_argv(_crt_argv_mode mode)
{
  return common_configure_argv<char>(mode);
}

// Address: 0x10013DE1
int common_initialize_environment_nolock<char>()
{
  char *narrow_environment_from_os; // eax
  char *v2; // esi
  int v3; // edi
  void *v4; // eax
  int v5; // edx

  if ( dword_1002FA40 != 0 )
    return 0;
  __acrt_initialize_multibyte();
  narrow_environment_from_os = (char *)__dcrt_get_narrow_environment_from_os();
  v2 = narrow_environment_from_os;
  if ( narrow_environment_from_os != nullptr )
  {
    v4 = (void *)create_environment<char>(narrow_environment_from_os);
    if ( v4 != nullptr )
    {
      dword_1002FA4C = v4;
      unknown_libname_25(&dword_1002FA40, v5, (int)v4);
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

// Address: 0x10013E3A
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
          unknown_libname_26(v6);
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

// Address: 0x10013F0B
// Microsoft VisualC universal runtime
void __cdecl unknown_libname_26(void **Block)
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

// Address: 0x10013F3A
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_27(char *this, int (__cdecl *a2)(char *))
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

// Address: 0x10013F7A
void __cdecl sub_10013F7A(void ***a1)
{
  if ( *a1 != dword_1002FA4C )
    unknown_libname_26(*a1);
}

// Address: 0x10013F95
void __cdecl sub_10013F95(void ***a1)
{
  if ( *a1 != dword_1002FA48 )
    unknown_libname_26(*a1);
}

// Address: 0x10013FB0
void __dcrt_uninitialize_environments_nolock()
{
  unknown_libname_27((char *)&dword_1002FA40, (int (__cdecl *)(char *))sub_10013F7A);
  unknown_libname_27(byte_1002FA44, (int (__cdecl *)(char *))sub_10013F95);
  unknown_libname_26((void **)dword_1002FA4C);
  unknown_libname_26((void **)dword_1002FA48);
}

// Address: 0x10013FE7
// attributes: thunk
int common_initialize_environment_nolock<char>(void)
{
  return ??$common_initialize_environment_nolock@D@@YAHXZ();
}

// Address: 0x10013FEC
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

// Address: 0x1001403D
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

// Address: 0x1001408E
int __cdecl sub_1001408E(int a1, int a2)
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

// Address: 0x100140B6
int __cdecl sub_100140B6(int a1, int a2)
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

// Address: 0x100140DE
// Microsoft VisualC universal runtime
uintptr_t __cdecl unknown_libname_28(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

// Address: 0x100140FD
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

// Address: 0x1001421D
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
    if ( v9 < v8 || (v15 = sub_10012637(v6, v9, 4u), _free_base(nullptr), v10 = v15, v15 == nullptr) )
    {
      v9 = v8 + 4;
      v16 = sub_10012637(v6, v8 + 4, 4u);
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
  *v4 = unknown_libname_28(**(this + 1));
  *(_DWORD *)**this = unknown_libname_5((int)v6);
  *(_DWORD *)(**this + 4) = unknown_libname_5((int)(v4 + 1));
  *(_DWORD *)(**this + 8) = unknown_libname_5(v5);
  return 0;
}

// Address: 0x1001435E
int __cdecl sub_1001435E(_onexit_t Function)
{
  return _register_onexit_function(&stru_1002FA50, Function);
}

// Address: 0x10014374
int __cdecl _execute_onexit_table(_onexit_table_t *Table)
{
  _onexit_table_t **p_Table; // [esp+0h] [ebp-4h] BYREF

  p_Table = &Table;
  return sub_1001408E(2, (int)&p_Table);
}

// Address: 0x10014391
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

// Address: 0x100143CE
int __cdecl _register_onexit_function(_onexit_table_t *Table, _onexit_t Function)
{
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  v3[0] = &Table;
  v3[1] = &Function;
  return sub_100140B6(2, (int)v3);
}

// Address: 0x100143F2
char __fastcall sub_100143F2(int a1, int a2)
{
  unknown_libname_25(&dword_1002FC7C, a2, (int)&off_1002E238);
  return 1;
}

// Address: 0x10014404
char initialize_c()
{
  _initialize_onexit_table(&stru_1002FA50);
  _initialize_onexit_table(&stru_1002FA5C);
  return 1;
}

// Address: 0x1001441E
char sub_1001441E()
{
  return 1;
}

// Address: 0x10014421
char sub_10014421()
{
  __dcrt_uninitialize_environments_nolock();
  return 1;
}

// Address: 0x10014429
char initialize_pointers()
{
  uintptr_t v0; // esi
  int v1; // edx

  v0 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  sub_10010722(v0);
  sub_10013656(v1, v0);
  __acrt_initialize_signal_handlers(v0);
  sub_1001A418(v0);
  sub_10013AAE(v0);
  return 1;
}

// Address: 0x10014466
__vcrt_bool sub_10014466()
{
  return __vcrt_uninitialize(false);
}

// Address: 0x1001446F
char uninitialize_allocated_memory()
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 0 && Block != &unk_1002E690 )
  {
    _free_base(Block);
    Block = &unk_1002E690;
  }
  _free_base(dword_1002FC70);
  dword_1002FC70 = nullptr;
  _free_base(dword_1002FC74);
  dword_1002FC74 = nullptr;
  _free_base(dword_1002FE4C);
  dword_1002FE4C = nullptr;
  _free_base(dword_1002FE50);
  dword_1002FE50 = nullptr;
  return 1;
}

// Address: 0x100144E6
__crt_bool __cdecl __acrt_initialize()
{
  return __acrt_execute_initializers(&off_100246F8, &unk_10024770);
}

// Address: 0x100144F8
__crt_bool __cdecl __acrt_thread_attach()
{
  return __acrt_getptd_noexit() != 0;
}

// Address: 0x10014503
__crt_bool __cdecl __acrt_thread_detach()
{
  __acrt_freeptd();
  return true;
}

// Address: 0x1001450B
__crt_bool __cdecl __acrt_uninitialize(__crt_bool Terminating)
{
  return __acrt_execute_uninitializers(&off_100246F8, &unk_10024770);
}

// Address: 0x1001451D
__crt_bool __cdecl __acrt_uninitialize_critical(__crt_bool Terminating)
{
  __acrt_uninitialize_ptd(Terminating);
  return true;
}

// Address: 0x1001452F
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

// Address: 0x1001458B
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

// Address: 0x100145D0
void __noreturn terminate()
{
  void (__thiscall *v0)(_DWORD); // esi

  v0 = *(void (__thiscall **)(_DWORD))(__acrt_getptd() + 12);
  if ( v0 != nullptr )
    v0(v0);
  abort();
}

// Address: 0x1001460C
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

// Address: 0x10014666
bool __cdecl __crt_strtox::is_overflow_condition<unsigned long>(char a1, unsigned int a2)
{
  return (a1 & 4) != 0 || (a1 & 1) != 0 && ((a1 & 2) != 0 && a2 > 0x80000000 || (a1 & 2) == 0 && a2 > 0x7FFFFFFF);
}

// Address: 0x10014699
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

  if ( unknown_libname_24(&a2) == 0 )
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

// Address: 0x10014D7E
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

// Address: 0x10014DCE
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_51b6e8b1eb166f2a3faf91f424b38130_,_lambda_6250bd4b2a391816dd638c3bf72b0bcb_ &,_lambda_0b5a4a3e68152e1d9b943535f5f47bed_>(
        int *a1,
        int a2,
        int *a3)
{
  void *v3; // ecx

  __acrt_lock(*a1);
  v3 = *(void **)(**(_DWORD **)a2 + 72);
  if ( v3 != nullptr && _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 0 && v3 != &unk_1002E690 )
    _free_base(v3);
  __acrt_unlock(*a3);
}

// Address: 0x10014E2F
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_5b71d36f03204c0beab531769a5b5694_,_lambda_be2b3da3f62db62e9dad5dc70221a656_ &,_lambda_8f9ce462984622f9bf76b59e2aaaf805_>(
        int *a1,
        struct __acrt_ptd *const **a2,
        int *a3)
{
  __acrt_lock(*a1);
  replace_current_thread_locale_nolock(**a2, nullptr);
  __acrt_unlock(*a3);
}

// Address: 0x10014E7A
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_9df27f884b057bc3edfc946cb5b7cf47_,_lambda_e69574bed617af4e071282c136b37893_ &,_lambda_cc0d902bcbbeb830f749456577db4721_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_DWORD **)a2 + 72));
  __acrt_unlock(*a3);
}

// Address: 0x10014EC2
void __cdecl sub_10014EC2(int a1, int a2)
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

// Address: 0x10014EEA
void __cdecl sub_10014EEA(int a1, int a2)
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

// Address: 0x10014F12
void __cdecl sub_10014F12(int a1, struct __acrt_ptd *const **a2)
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

// Address: 0x10014F3A
void __cdecl sub_10014F3A(int a1, int a2)
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

// Address: 0x10014F62
void __cdecl construct_ptd(struct __acrt_ptd *const a1, struct __crt_locale_data **const a2)
{
  struct __acrt_ptd *const *v2; // [esp+0h] [ebp-8h] BYREF
  struct __crt_locale_data **const *v3; // [esp+4h] [ebp-4h] BYREF

  *((_DWORD *)a1 + 6) = 1;
  *(_DWORD *)a1 = &unk_10024630;
  *((_DWORD *)a1 + 212) = 1;
  *((_DWORD *)a1 + 18) = &unk_1002E690;
  *((_WORD *)a1 + 54) = 67;
  *((_WORD *)a1 + 185) = 67;
  *((_DWORD *)a1 + 211) = 0;
  v3 = (struct __crt_locale_data **const *)&a1;
  sub_10014F3A(5, (int)&v3);
  v2 = &a1;
  v3 = &a2;
  sub_10014EEA(4, (int)&v2);
}

// Address: 0x10014FDB
void __stdcall destroy_fls(struct __acrt_ptd *Block)
{
  if ( Block != nullptr )
  {
    destroy_ptd(Block);
    _free_base(Block);
  }
}

// Address: 0x10014FFC
void __cdecl destroy_ptd(void **a1)
{
  struct __acrt_ptd *const *v1; // ecx
  void **v2; // eax
  void ***v3; // [esp+0h] [ebp-4h] BYREF

  v3 = (void ***)v1;
  v2 = a1;
  if ( *a1 != &unk_10024630 )
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
  sub_10014EC2(5, (int)&v3);
  v3 = &a1;
  sub_10014F12(4, (struct __acrt_ptd *const **)&v3);
}

// Address: 0x100150A5
void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd *const a1, struct __crt_locale_data *const a2)
{
  int v2; // eax

  if ( *((_DWORD *)a1 + 19) != 0 )
  {
    __acrt_release_locale_ref(*((_DWORD *)a1 + 19));
    v2 = *((_DWORD *)a1 + 19);
    if ( (struct __crt_locale_data *)v2 != dword_1002FC7C
      && (wchar_t **)v2 != &off_1002E238
      && *(_DWORD *)(v2 + 12) == 0 )
    {
      __acrt_free_locale(*((void **)a1 + 19));
    }
  }
  *((_DWORD *)a1 + 19) = a2;
  if ( a2 != nullptr )
    __acrt_add_locale_ref(a2);
}

// Address: 0x100150F0
void __acrt_freeptd()
{
  struct __acrt_ptd *Value; // esi

  if ( dword_1002E234 != -1 )
  {
    Value = (struct __acrt_ptd *)__acrt_FlsGetValue(dword_1002E234);
    if ( Value != nullptr )
    {
      __acrt_FlsSetValue(dword_1002E234, nullptr);
      destroy_fls(Value);
    }
  }
}

// Address: 0x1001511C
void *__cdecl __acrt_getptd()
{
  DWORD LastError; // esi
  void *Value; // edi
  void *v2; // eax

  LastError = GetLastError();
  if ( dword_1002E234 == -1 || (Value = (void *)__acrt_FlsGetValue(dword_1002E234)) == nullptr )
  {
    v2 = _calloc_base(1u, 0x364u);
    Value = v2;
    if ( v2 == nullptr )
    {
      _free_base(nullptr);
      goto LABEL_9;
    }
    if ( __acrt_FlsSetValue(dword_1002E234, v2) == 0 )
    {
      _free_base(Value);
      goto LABEL_9;
    }
    construct_ptd((struct __acrt_ptd *const)Value, &dword_1002FC7C);
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

// Address: 0x100151A0
void *__acrt_getptd_noexit()
{
  DWORD LastError; // esi
  int v1; // ebx
  void *Value; // edi
  void *v3; // eax

  LastError = GetLastError();
  v1 = 0;
  if ( dword_1002E234 != -1 )
  {
    Value = (void *)__acrt_FlsGetValue(dword_1002E234);
    if ( Value != nullptr )
      goto LABEL_9;
  }
  v3 = _calloc_base(1u, 0x364u);
  Value = v3;
  if ( v3 != nullptr )
  {
    if ( __acrt_FlsSetValue(dword_1002E234, v3) == 0 )
    {
      _free_base(Value);
      goto LABEL_8;
    }
    construct_ptd((struct __acrt_ptd *const)Value, &dword_1002FC7C);
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

// Address: 0x10015225
char __acrt_initialize_ptd()
{
  dword_1002E234 = __acrt_FlsAlloc(destroy_fls);
  if ( dword_1002E234 == -1 )
    return 0;
  if ( __acrt_getptd_noexit() == nullptr )
  {
    __acrt_uninitialize_ptd(0);
    return 0;
  }
  return 1;
}

// Address: 0x10015251
char __acrt_uninitialize_ptd()
{
  if ( dword_1002E234 != -1 )
  {
    __acrt_FlsFree(dword_1002E234);
    dword_1002E234 = -1;
  }
  return 1;
}

// Address: 0x1001526B
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

// Address: 0x10015291
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
    if ( v0 > dword_1002FC68 )
      v0 = dword_1002FC68;
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
            v4 = dword_1002FA68[v2 >> 6] + 48 * (v2 & 0x3F);
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

// Address: 0x10015347
void __cdecl initialize_stdio_handles_nolock()
{
  int i; // edi
  int v1; // esi
  HANDLE StdHandle; // eax
  HANDLE v3; // ebx
  DWORD FileType; // eax

  for ( i = 0; i != 3; ++i )
  {
    v1 = dword_1002FA68[i >> 6] + 48 * (i & 0x3F);
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
        if ( dword_1002F7CC != nullptr )
          *(_DWORD *)(*((_DWORD *)dword_1002F7CC + i) + 16) = -2;
      }
    }
    else
    {
      *(_BYTE *)(v1 + 40) |= 0x80u;
    }
  }
}

// Address: 0x100153FD
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

// Address: 0x10015453
char __acrt_uninitialize_lowio()
{
  unsigned int i; // esi

  for ( i = 0; i < 128; ++i )
  {
    if ( dword_1002FA68[i] != 0 )
    {
      __acrt_lowio_destroy_handle_array((LPCRITICAL_SECTION)dword_1002FA68[i]);
      dword_1002FA68[i] = 0;
    }
  }
  return 1;
}

// Address: 0x1001547F
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
  unknown_libname_23(&v5, (int)String, EndPtr);
  return __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<wchar_t>>(
           nullptr,
           (wint_t *)v5,
           v6,
           v7,
           v8);
}

// Address: 0x100154AB
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

// Address: 0x100155A5
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x100155BF
struct __crt_locale_data *__cdecl sub_100155BF(int a1, struct __crt_locale_data **a2)
{
  struct __crt_locale_data *result; // eax

  result = *a2;
  if ( *a2 != dword_1002FC7C )
  {
    result = (struct __crt_locale_data *)dword_1002E388;
    if ( (dword_1002E388 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_locale_data *)__acrt_update_thread_locale_data();
      *a2 = result;
    }
  }
  return result;
}

// Address: 0x100155EC
void *__cdecl sub_100155EC(int a1, void **a2)
{
  void *result; // eax

  result = *a2;
  if ( *a2 != Block )
  {
    result = (void *)dword_1002E388;
    if ( (dword_1002E388 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (void *)__acrt_update_thread_multibyte_data();
      *a2 = result;
    }
  }
  return result;
}

// Address: 0x10015619
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

// Address: 0x10015685
bool __cdecl __acrt_fp_is_negative(const double *a1)
{
  return *((int *)a1 + 1) < 0;
}

// Address: 0x100156A3
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

// Address: 0x100159A6
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

// Address: 0x10015A41
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

// Address: 0x10015B8C
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

// Address: 0x10015C19
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

// Address: 0x10015CF0
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

// Address: 0x10015DB8
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
    Source[0] = (char *)&unk_10024770;
    Source[1] = (char *)&unk_10024770;
    Source[2] = (char *)&unk_10024774;
    Source[3] = (char *)&unk_10024774;
    Source[10] = "nan(snan)";
    Source[6] = (char *)&unk_1002477C;
    Source[7] = (char *)&unk_1002477C;
    Source[11] = (char *)&unk_1002477C;
    Source[15] = (char *)&unk_1002477C;
    Source[12] = "NAN(IND)";
    Source[4] = (char *)&unk_10024778;
    Source[5] = (char *)&unk_10024778;
    Source[9] = (char *)&unk_10024778;
    Source[13] = (char *)&unk_10024778;
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

// Address: 0x10015EB0
void __cdecl shift_bytes(char *const a1, unsigned int a2, char *const Src, int a4)
{
  if ( a4 != 0 )
    memmove(&Src[a4], Src, strlen(Src) + 1);
}

// Address: 0x10015EE4
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

// Address: 0x1001602E
int __cdecl _get_printf_count_output()
{
  return dword_1002FC6C == (__security_cookie | 1);
}

// Address: 0x10016043
__int32 sub_10016043()
{
  return _InterlockedExchange(&dword_1002FC78, 1);
}

// Address: 0x1001604E
void __acrt_uninitialize_locale()
{
  if ( dword_1002FC7C != (struct __crt_locale_data *)&off_1002E238 )
  {
    __acrt_lock(4);
    dword_1002FC7C = (struct __crt_locale_data *)_updatetlocinfoEx_nolock(&dword_1002FC7C, &off_1002E238);
    __acrt_unlock(4);
  }
}

// Address: 0x100160A0
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

// Address: 0x10016169
int __fastcall __acrt_initialize_timeset(int a1, int a2)
{
  int v2; // edx
  int v3; // edx

  unknown_libname_25(&dword_1002FC80, a2, 28800);
  unknown_libname_25(&dword_1002FC84, v2, 1);
  unknown_libname_25(&dword_1002FC88, v3, -3600);
  dword_1002FC8C = (int)&off_1002E380;
  return 0;
}

// Address: 0x100161A0
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
  if ( (*(_BYTE *)(dword_1002FA68[**a2 >> 6] + 48 * (**a2 & 0x3F) + 40) & 1) == 0 )
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

// Address: 0x10016238
int __cdecl sub_10016238(int a1, int **a2)
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

// Address: 0x10016260
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
      && FileHandle < (unsigned int)dword_1002FC68
      && (*(_BYTE *)(dword_1002FA68[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) & 1) != 0 )
    {
      p_FileHandle = &FileHandle;
      return sub_10016238(FileHandle, &p_FileHandle);
    }
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x100162CF
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
  hFile = *(HANDLE *)(dword_1002FA68[a2 >> 6] + v4 + 24);
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
      v7 = dword_1002FA68[v14];
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
        *(_BYTE *)(dword_1002FA68[v14] + v4 + 46) = *v5;
        *(_BYTE *)(dword_1002FA68[v14] + v4 + 45) |= 4u;
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

// Address: 0x10016482
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

// Address: 0x100164EF
bool __cdecl write_requires_double_translation_nolock(int FileHandle)
{
  int v2; // edi
  int v3; // esi
  DWORD Mode; // [esp+4h] [ebp-4h] BYREF

  if ( _isatty(FileHandle) == 0 )
    return false;
  v2 = FileHandle >> 6;
  v3 = 48 * (FileHandle & 0x3F);
  return *(char *)(dword_1002FA68[FileHandle >> 6] + v3 + 40) < 0
      && (*(_DWORD *)(*((_DWORD *)__acrt_getptd() + 19) + 168) != 0 || *(_BYTE *)(dword_1002FA68[v2] + v3 + 41) != 0)
      && GetConsoleMode(*(HANDLE *)(dword_1002FA68[v2] + v3 + 24), &Mode);
}

// Address: 0x10016565
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
  v5 = *(void **)(dword_1002FA68[a2 >> 6] + 48 * (a2 & 0x3F) + 24);
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

// Address: 0x10016644
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
  v5 = *(void **)(dword_1002FA68[a2 >> 6] + 48 * (a2 & 0x3F) + 24);
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

// Address: 0x10016732
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
  hFile = *(HANDLE *)(dword_1002FA68[a2 >> 6] + 48 * (a2 & 0x3F) + 24);
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

// Address: 0x1001685F
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
    || FileHandle >= (unsigned int)dword_1002FC68
    || (v5 = 48 * (FileHandle & 0x3F), (*(_BYTE *)(dword_1002FA68[FileHandle >> 6] + v5 + 40) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  v3 = -1;
  if ( (*(_BYTE *)(dword_1002FA68[FileHandle >> 6] + v5 + 40) & 1) != 0 )
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

// Address: 0x1001694A
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
  v6 = dword_1002FA68[FileHandle >> 6];
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
  v10 = dword_1002FA68[v14];
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
    if ( (*(_BYTE *)(dword_1002FA68[v14] + v15 + 40) & 0x40) != 0 && *(_BYTE *)v3 == 26 )
      return 0;
    *_errno() = 28;
    *__doserrno() = 0;
    return -1;
  }
  return *v12 - v12[1];
}

// Address: 0x10016B56
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

// Address: 0x10016B94
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
  *(_BYTE *)(dword_1002FA68[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) &= ~2u;
  return result;
}

// Address: 0x10016C12
DWORD __cdecl _lseeki64_nolock(int FileHandle, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod)
{
  return common_lseek_nolock<__int64>(FileHandle, liDistanceToMove, dwMoveMethod);
}

// Address: 0x10016C2D
FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, _DWORD *a3, _DWORD *a4)
{
  volatile __int32 *v4; // ebx
  uintptr_t v5; // edx
  FARPROC v6; // esi
  _DWORD *v8; // esi
  HMODULE module; // eax
  FARPROC ProcAddress; // eax

  v4 = (volatile __int32 *)((char *)&unk_1002FD98 + 4 * a1);
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
        _InterlockedExchange(v4, unknown_libname_5((int)ProcAddress));
        return v6;
      }
      v5 = __security_cookie;
    }
    _InterlockedExchange(v4, v5 ^ __ROR4__(-1, 32 - (v5 & 0x1F)));
  }
  return nullptr;
}

// Address: 0x10016CC9
HMODULE __cdecl try_get_module(int a1)
{
  volatile __int32 *v1; // edi
  const WCHAR *v3; // ebx
  HMODULE Library; // esi

  v1 = (volatile __int32 *)((char *)&unk_1002FD48 + 4 * a1);
  if ( *v1 != 0 )
    return *v1 != -1 ? (HMODULE)*v1 : nullptr;
  v3 = (&off_10024C70)[a1];
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

// Address: 0x10016D44
DWORD __stdcall __acrt_FlsAlloc(int a1)
{
  FARPROC function; // eax

  function = try_get_function(3, "FlsAlloc", dword_10025110, dword_10025118);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int))function)(function, a1);
  else
    return TlsAlloc();
}

// Address: 0x10016D9A
int __stdcall __acrt_FlsFree(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(4, "FlsFree", dword_10025118, dword_10025120);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}

// Address: 0x10016DF0
LPVOID __stdcall __acrt_FlsGetValue(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(5, "FlsGetValue", dword_10025120, dword_10025128);
  if ( function != nullptr )
    return (LPVOID)((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}

// Address: 0x10016E46
int __stdcall __acrt_FlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC function; // eax

  function = try_get_function(6, "FlsSetValue", dword_10025128, dword_10025130);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD, LPVOID))function)(function, dwTlsIndex, lpTlsValue);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x10016E9F
int __stdcall __acrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC function; // eax

  function = try_get_function(20, "InitializeCriticalSectionEx", dword_10025138, dword_10025140);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))function)(
             function,
             lpCriticalSection,
             dwSpinCount,
             a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x10016F01
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

  function = try_get_function(22, "LCMapStringEx", dword_10025140, dword_10025148);
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

// Address: 0x10016F89
int __stdcall __acrt_LocaleNameToLCID(wchar_t *a1, int a2)
{
  FARPROC function; // eax

  function = try_get_function(24, "LocaleNameToLCID", dword_10025148, "LocaleNameToLCID");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, wchar_t *, int))function)(function, a1, a2);
  else
    return __acrt_DownlevelLocaleNameToLCID(a1);
}

// Address: 0x10016FE7
char __acrt_initialize_winapi_thunks()
{
  memset32(&unk_1002FD98, __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F)), 0x20u);
  return 1;
}

// Address: 0x1001700D
bool __acrt_is_packaged_app()
{
  FARPROC function; // esi
  int v2; // [esp+0h] [ebp-8h] BYREF

  if ( dword_1002FE18 != 0 )
    return dword_1002FE18 == 1;
  function = try_get_function(8, "GetCurrentPackageId", dword_10025130, dword_10025138);
  if ( function != nullptr && (v2 = 0, ((int (__thiscall *)(FARPROC, int *, _DWORD))function)(function, &v2, 0) == 122) )
  {
    _InterlockedExchange(&dword_1002FE18, 1);
    return true;
  }
  else
  {
    _InterlockedExchange(&dword_1002FE18, 2);
    return false;
  }
}

// Address: 0x10017094
int __cdecl __acrt_uninitialize_winapi_thunks(char a1)
{
  return __vcrt_uninitialize_winapi_thunks_0(a1);
}

// Address: 0x10017096
char __cdecl __vcrt_uninitialize_winapi_thunks_0(char a1)
{
  HMODULE *v1; // esi

  if ( a1 == 0 )
  {
    v1 = (HMODULE *)&unk_1002FD48;
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
    while ( v1 != (HMODULE *)&unk_1002FD98 );
  }
  return 1;
}

// Address: 0x100170CA
int __cdecl _fcloseall()
{
  int i; // esi
  int v1; // eax
  int v3; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  __acrt_lock(8);
  for ( i = 3; i != Count; ++i )
  {
    v1 = *((_DWORD *)dword_1002F7CC + i);
    if ( v1 != 0 )
    {
      if ( (*(_DWORD *)(v1 + 12) & 0x2000) != 0 && fclose(*((FILE **)dword_1002F7CC + i)) != -1 )
        ++v3;
      DeleteCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)dword_1002F7CC + i) + 32));
      _free_base(*((void **)dword_1002F7CC + i));
      *((_DWORD *)dword_1002F7CC + i) = 0;
    }
  }
  __acrt_unlock(8);
  return v3;
}

// Address: 0x1001716A
int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_123407a5e2ac06da108355a851863b7a_,_lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec_ &,_lambda_ae55bdf541ad94d75914d381c370e64d_>(
        _DWORD *a1,
        int **a2,
        _DWORD *a3)
{
  int v3; // esi

  __acrt_lowio_lock_fh(*a1);
  if ( (*(_BYTE *)(dword_1002FA68[**a2 >> 6] + 48 * (**a2 & 0x3F) + 40) & 1) != 0 )
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

// Address: 0x100171EC
int __cdecl sub_100171EC(int a1, int **a2)
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

// Address: 0x10017214
int __cdecl sub_10017214(int a1)
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
      && a1 < (unsigned int)dword_1002FC68
      && (*(_BYTE *)(dword_1002FA68[a1 >> 6] + 48 * (a1 & 0x3F) + 40) & 1) != 0 )
    {
      v2 = &a1;
      return sub_100171EC(a1, &v2);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x10017293
int __cdecl _close_nolock(int FileHandle)
{
  DWORD LastError; // esi
  intptr_t osfhandle; // esi
  void *v3; // eax

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_1002FA68[0] + 136) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_1002FA68[0] + 88) & 1) != 0)
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
  *(_BYTE *)(dword_1002FA68[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) = 0;
  if ( LastError == 0 )
    return 0;
  __acrt_errno_map_os_error(LastError);
  return -1;
}

// Address: 0x1001732F
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

// Address: 0x1001736A
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

// Address: 0x1001739E
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

// Address: 0x1001746C
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

// Address: 0x1001764C
int __cdecl _raise_exc(ULONG_PTR Arguments, int a2, int a3, int a4, int a5, int a6)
{
  return _raise_exc_ex(Arguments, a2, a3, a4, a5, a6, 0);
}

// Address: 0x1001766F
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

// Address: 0x10017960
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

// Address: 0x1001798F
double __cdecl _umatherr(int a1, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
  int v8; // ecx
  int v9; // eax
  _DWORD v11[6]; // [esp+0h] [ebp-20h] BYREF
  double v12; // [esp+18h] [ebp-8h]

  v8 = 0;
  v9 = 0;
  while ( dword_10025208[2 * v9] != a2 )
  {
    if ( ++v9 >= 29 )
      goto LABEL_6;
  }
  v8 = (int)*(&off_1002520C + 2 * v9);
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

// Address: 0x10017A31
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

// Address: 0x10017B05
double __cdecl _set_exp(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1;
  HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * (a2 + 1022));
  return v3;
}

// Address: 0x10017B34
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

// Address: 0x10017B92
int __usercall _clrfp@<eax>(__int16 a1@<fpstat>)
{
  __asm { fnclex }
  return a1;
}

// Address: 0x10017BA5
int _ctrlfp()
{
  __int16 v1; // [esp+4h] [ebp-4h]

  return v1;
}

// Address: 0x10017BD1
void _set_statfp()
{
  ;
}

// Address: 0x10017C2C
int __usercall _statfp@<eax>(__int16 a1@<fpstat>)
{
  return a1;
}

// Address: 0x10017C3E
size_t __cdecl _msize(void *Block)
{
  if ( Block != nullptr )
    return HeapSize(hHeap, 0, Block);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

// Address: 0x10017C71
int sub_10017C71()
{
  return dword_1002FE1C;
}

// Address: 0x10017C77
bool __acrt_initialize_heap()
{
  hHeap = GetProcessHeap();
  return hHeap != nullptr;
}

// Address: 0x10017C88
char sub_10017C88()
{
  hHeap = nullptr;
  return 1;
}

// Address: 0x10017C92
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

// Address: 0x10017D64
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

// Address: 0x10017E81
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

// Address: 0x1001809E
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

// Address: 0x100180E9
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
    v3 = *((_WORD *)off_1002E220 + C);
  }
  return Type & v3;
}

// Address: 0x10018148
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

// Address: 0x100181EC
int sub_100181EC()
{
  dword_1002FF4C = IsProcessorFeaturePresent(0xAu);
  return 0;
}

// Address: 0x10018200
int __usercall _CIpow_pentium4@<eax>(__int64 a1@<st1>, __int64 a2@<st0>)
{
  return _pow_pentium4(a2, a1);
}

// Address: 0x10018219
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
  v13.m128d_f64[0] = v13.m128d_f64[0] * *(double *)((char *)&qword_10026750 + 4 * v12);
  a6.m128d_f64[0] = *(double *)((char *)&qword_10026750 + 4 * v12);
  v14 = *(__m128d *)((char *)&xmmword_10026B60 + 8 * v12);
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
                  _mm_srli_epi64((__m128i)_mm_and_pd((__m128d)v71, (__m128d)xmmword_10025380), 0x34u),
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
  v64 = _mm_sub_epi32(_mm_srli_epi64((__m128i)_mm_and_pd((__m128d)v60, (__m128d)xmmword_10025380), 0x34u), (__m128i)a4);
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
  inserted = _mm_srli_epi64((__m128i)_mm_and_pd((__m128d)inserted, (__m128d)xmmword_10025380), 0x2Cu);
  v13 = _mm_or_pd(v67, a3);
  v68 = ((unsigned __int8)_mm_extract_epi16(inserted, 0) + 1) & 0x1FE;
  v13.m128d_f64[0] = v13.m128d_f64[0] * *(double *)((char *)&qword_10026750 + 4 * v68);
  a6.m128d_f64[0] = *(double *)((char *)&qword_10026750 + 4 * v68);
  v14 = *(__m128d *)((char *)&xmmword_10026B60 + 8 * v68);
  v17 = 278143;
BACK_MAIN:
  v18 = (__m128d)_mm_cvtsi32_si128(v17);
  v19 = _mm_cvtepi32_pd(_mm_srli_epi64(_mm_sub_epi64(inserted, (__m128i)v18), 8u));
  v18.m128d_f64[0] = NAN;
  a4.m128d_f64[0] = v13.m128d_f64[0];
  v20 = (__m128d)_mm_srli_epi64((__m128i)v13, 0x26u);
  v21 = ((unsigned __int8)_mm_extract_epi16((__m128i)v20, 0) + 1) & 0x1FE;
  a4.m128d_f64[0] = a4.m128d_f64[0] * *(double *)((char *)&qword_10027370 + 4 * v21);
  a6.m128d_f64[0] = a6.m128d_f64[0] * *(double *)((char *)&qword_10027370 + 4 * v21);
  v22 = _mm_add_pd(v14, *(__m128d *)((char *)&xmmword_10027780 + 8 * v21));
  a5 = _mm_or_pd(_mm_and_pd(a5, (__m128d)xmmword_10025360), (__m128d)xmmword_10025370);
  v22.m128d_f64[0] = v22.m128d_f64[0] + v19.m128d_f64[0];
  v29 = (__m128i)_mm_and_pd(v18, a5);
  v23 = a4.m128d_f64[0];
  a4 = (__m128d)_mm_srli_epi64((__m128i)a4, 0x1Fu);
  v19.m128d_f64[0] = NAN;
  a5.m128d_f64[0] = a5.m128d_f64[0] - *(double *)v29.m128i_i64;
  v24 = ((_mm_extract_epi16((__m128i)a4, 0) & 0x1FF) + 1) & 0x3FE;
  a6.m128d_f64[0] = a6.m128d_f64[0] * *(double *)((char *)&qword_10027F90 + 4 * v24);
  v25 = v23 * *(double *)((char *)&qword_10027F90 + 4 * v24);
  v33 = _mm_add_pd(v22, *(__m128d *)((char *)&xmmword_100287A0 + 8 * v24));
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
      v46 = _mm_mul_pd((__m128d)xmmword_100297B0, v34);
      v47 = _mm_mul_pd(v34, v34);
      v48 = (__m128i)_mm_add_pd(v46, _mm_mul_pd((__m128d)xmmword_100297C0, v47));
      *(double *)v48.m128i_i64 = *(double *)v48.m128i_i64 * v47.m128d_f64[0]
                               + *(double *)_mm_shuffle_epi32(v48, 238).m128i_i64
                               + v43
                               + v32.m128d_f64[0];
      v32.m128d_f64[0] = (v40 - (v40 + 6.755399441055744e15 - 6.755399441055744e15))
                       * *(double *)_mm_insert_epi16((__m128i)0LL, 0x3F80u, 3).m128i_i64;
      v49 = (__m128i)_mm_mul_pd(
                       (__m128d)xmmword_100297D0[(int)v40 & 0x7F],
                       (__m128d)_mm_shuffle_epi32(
                                  _mm_slli_epi64(_mm_cvtsi32_si128((((int)v40 + v16) & 0xFFFFFF80) + 130944), 0x2Du),
                                  68));
      v32.m128d_f64[0] = v32.m128d_f64[0] + v44 + *(double *)v48.m128i_i64 * a9;
      v50 = _mm_unpacklo_pd(v32, v32);
      v51 = _mm_mul_pd((__m128d)xmmword_10025390, v50);
      v52 = 0.6931471805599453 * v50.m128d_f64[0];
      v53 = _mm_mul_pd(v50, v50);
      v54 = (__m128i)_mm_mul_pd(_mm_add_pd((__m128d)xmmword_100253A0, v51), v53);
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
    v83 = _mm_mul_pd((__m128d)xmmword_100297B0, v34);
    v84 = _mm_mul_pd(v34, v34);
    v32.m128d_f64[0] = v40 - (v40 + 6.755399441055744e15 - 6.755399441055744e15);
    v85 = (__m128i)_mm_add_pd(v83, _mm_mul_pd((__m128d)xmmword_100297C0, v84));
    v86 = (__m128i)_mm_mul_pd(
                     (__m128d)xmmword_100297D0[v78],
                     (__m128d)_mm_shuffle_epi32(_mm_slli_epi64(_mm_cvtsi32_si128(v80), 0x2Du), 68));
    v32.m128d_f64[0] = v32.m128d_f64[0] * *(double *)_mm_insert_epi16((__m128i)0LL, 0x3F80u, 3).m128i_i64
                     + v44
                     + (*(double *)v85.m128i_i64 * v84.m128d_f64[0]
                      + *(double *)_mm_shuffle_epi32(v85, 238).m128i_i64
                      + v82)
                     * a9;
    v87 = _mm_unpacklo_pd(v32, v32);
    v88 = _mm_mul_pd((__m128d)xmmword_10025390, v87);
    v89 = 0.6931471805599453 * v87.m128d_f64[0];
    v69 = _mm_mul_pd(v87, v87);
    v90 = (__m128i)_mm_mul_pd(_mm_add_pd((__m128d)xmmword_100253A0, v88), v69);
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

// Address: 0x10018D31
void __usercall _fFEXP(__int16 a1@<cx>, int a2@<ebp>)
{
  *(_BYTE *)(a2 - 144) = -2;
  HIBYTE(a1) = 0;
  _ffexpm1(a1);
  JUMPOUT(0x10019018);
}

// Address: 0x10018DF7
void zerotoxdone()
{
  ;
}

// Address: 0x10018E42
void expbigret()
{
  ;
}

// Address: 0x10018E61
double __fastcall rtforexpinf(char a1)
{
  if ( a1 != 0 )
    JUMPOUT(0x10019026);
  return -0.0;
}

// Address: 0x10018E6E
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
      JUMPOUT(0x10019026);
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

// Address: 0x10018EB1
int __usercall isintTOS@<eax>(long double a1@<st0>)
{
  if ( rint(a1) != a1 )
    return notanint();
  if ( rint(a1 * 0.5) == a1 * 0.5 )
    return evenint();
  return isintTOSret();
}

// Address: 0x10018ED6
void isintTOSret()
{
  ;
}

// Address: 0x10018ED7
void notanint()
{
  isintTOSret();
}

// Address: 0x10018EDE
void evenint()
{
  isintTOSret();
}

// Address: 0x10018EE5
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

// Address: 0x10019120
void _startTwoArgErrorHandling()
{
  JUMPOUT(0x10019140);
}

// Address: 0x10019137
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

// Address: 0x10019180
long double __usercall _twoToTOS@<st0>(long double a1@<st0>)
{
  long double v1; // rt0

  v1 = rint(a1);
  return __FSCALE__(__F2XM1__(-(v1 - a1)) + 1.0, v1);
}

// Address: 0x10019195
void _load_CW()
{
  ;
}

// Address: 0x100191AC
double __usercall _convertTOStoQNaN@<st0>(int a1@<eax>, double result@<st0>)
{
  if ( (a1 & 0x80000) == 0 )
    return result + 1.0;
  return result;
}

// Address: 0x100191C5
double __fastcall _fload_withFB(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 )
    return *(double *)a2;
  *(_QWORD *)&result = *(_QWORD *)a2 << 11;
  return result;
}

// Address: 0x10019208
int __cdecl _checkTOS_withFB(int a1, int a2)
{
  int result; // eax

  result = a2 & 0x7FF00000;
  if ( (a2 & 0x7FF00000) == 0x7FF00000 )
    return a2;
  return result;
}

// Address: 0x10019255
void _check_overflow_exit()
{
  JUMPOUT(0x1001927D);
}

// Address: 0x10019269
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

// Address: 0x1001930C
int __cdecl _d_inttype(double X)
{
  if ( (_fpclass(X) & 0x90) != 0 )
    return 0;
  _frnd(X);
  _frnd(X * 0.5);
  return 2;
}

// Address: 0x10019376
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

// Address: 0x100194A1
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

// Address: 0x100194DA
char **sub_100194DA()
{
  return off_10025500;
}

// Address: 0x100194E0
const char *sub_100194E0()
{
  return "+";
}

// Address: 0x100194E6
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

// Address: 0x10019597
errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  return common_tcsncpy_s<char>(Destination, SizeInBytes, (int)Source, MaxCount);
}

// Address: 0x100195A2
// Microsoft VisualC universal runtime
int __cdecl CompareFunction(const void *a1, const void *a2)
{
  if ( a2 <= a1 )
    return a2 < a1;
  else
    return -1;
}

// Address: 0x100195BA
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
    unknown_libname_30(&v19);
    return v8;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x1001974A
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
  v8 = sub_10019989(v7);
  _free_base(nullptr);
  return v8;
}

// Address: 0x100197E0
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

// Address: 0x10019964
// Microsoft VisualC universal runtime
void __thiscall unknown_libname_30(void ***this)
{
  void **i; // esi

  for ( i = *this; i != *(this + 1); ++i )
    _free_base(*i);
  _free_base(*this);
}

// Address: 0x10019989
int __thiscall sub_10019989(_DWORD **this, void *Block)
{
  int v3; // edi

  v3 = unknown_libname_31();
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

// Address: 0x100199BE
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_31(int *this)
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
  v6 = sub_10012637((void *)*this, 2 * v5, 4u);
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

// Address: 0x10019A45
int __cdecl __acrt_expand_narrow_argv_wildcards(const char **a1, _DWORD *a2)
{
  return common_expand_argv_wildcards<char>(a1, a2);
}

// Address: 0x10019A50
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_c76fdea48760d5f9368b465f31df4405_,_lambda_e378711a6f6581bf7f0efd7cdf97f5d9_ &,_lambda_e927a58b2a85c081d733e8c6192ae2d2_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  _lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c_::operator()(a2);
  __acrt_unlock(*a3);
}

// Address: 0x10019A93
void __cdecl sub_10019A93(int a1, int a2)
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

// Address: 0x10019ABB
volatile signed __int32 *__thiscall _lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c_::operator()(void *this)
{
  volatile signed __int32 *result; // eax

  dword_1002FE2C = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 4);
  dword_1002FE30 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 8);
  dword_1002FE28 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 540);
  memcpy_s(&unk_1002FE34, 0xCu, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 12), 0xCu);
  memcpy_s(&unk_1002E488, 0x101u, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 24), 0x101u);
  memcpy_s(&unk_1002E590, 0x100u, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 281), 0x100u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 0 && Block != &unk_1002E690 )
    _free_base(Block);
  Block = *(void **)(**(_DWORD **)this + 72);
  result = *(volatile signed __int32 **)(**(_DWORD **)this + 72);
  _InterlockedIncrement(result);
  return result;
}

// Address: 0x10019B7F
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

// Address: 0x10019BBD
UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax
  _DWORD v2[3]; // [esp+0h] [ebp-10h] BYREF
  char v3; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v2, nullptr);
  dword_1002FE40 = 0;
  result = a1;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_1002FE40 = 1;
      result = GetOEMCP();
      break;
    case 0xFFFFFFFD:
      dword_1002FE40 = 1;
      result = GetACP();
      break;
    case 0xFFFFFFFC:
      dword_1002FE40 = 1;
      result = *(_DWORD *)(v2[1] + 8);
      break;
    default:
      break;
  }
  if ( v3 != 0 )
    *(_DWORD *)(v2[0] + 848) &= ~2u;
  return result;
}

// Address: 0x10019C30
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
  v3 = &unk_1002E690 - (_UNKNOWN *)a1;
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

// Address: 0x10019C95
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

// Address: 0x10019E29
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
        sub_10016043();
      if ( _InterlockedDecrement(*((volatile signed __int32 **)v9 + 18)) == 0
        && *((_UNKNOWN **)v9 + 18) != &unk_1002E690 )
      {
        _free_base(*((void **)v9 + 18));
      }
      *v4 = 1;
      v6 = v4;
      v4 = nullptr;
      *((_DWORD *)v9 + 18) = v6;
      if ( (*((_BYTE *)v9 + 848) & 2) == 0 && (dword_1002E388 & 1) == 0 )
      {
        SystemCP = (int)&v9;
        sub_10019A93(5, (int)&SystemCP);
        if ( a2 )
          off_1002E2F4 = Block;
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

// Address: 0x10019F2A
char __acrt_initialize_multibyte()
{
  if ( byte_1002FE44 == 0 )
  {
    setmbcp_internal(0xFFFFFFFD, true);
    byte_1002FE44 = 1;
  }
  return 1;
}

// Address: 0x10019F48
void *__acrt_update_thread_multibyte_data()
{
  _DWORD *v0; // eax
  _DWORD *v1; // edi
  void *v2; // esi

  v0 = __acrt_getptd();
  v1 = v0;
  if ( (dword_1002E388 & v0[212]) != 0 && v0[19] != 0 )
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
        && v2 != &unk_1002E690 )
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

// Address: 0x10019FEA
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
      if ( dword_1002E398[v6] == SystemCP )
      {
        memset((char *)a2 + 24, 0, 0x101u);
        v21 = 48 * v22;
        v13 = (char *)&unk_1002E3A8 + 48 * v22;
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
                *((_BYTE *)a2 + v16++ + 25) |= byte_1002E390[v4];
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
        v18 = (__int16 *)((char *)&unk_1002E39C + v21);
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
    if ( dword_1002FE40 == 0 )
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

// Address: 0x1001A1DB
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

// Address: 0x1001A25C
char __acrt_initialize_command_line()
{
  dword_1002FE54 = (int)GetCommandLineA();
  dword_1002FE58 = (int)GetCommandLineW();
  return 1;
}

// Address: 0x1001A275
const wchar_t *__cdecl find_end_of_double_null_terminated_sequence(const wchar_t *a1)
{
  const unsigned __int16 *i; // edx

  for ( i = a1; *i != 0; i += wcslen(i) + 1 )
    ;
  return i + 1;
}

// Address: 0x1001A2AC
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

// Address: 0x1001A32F
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

// Address: 0x1001A3B2
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

// Address: 0x1001A3FF
BOOL __acrt_has_user_matherr()
{
  return __ROR4__(dword_1002FE60 ^ __security_cookie, __security_cookie & 0x1F) != 0;
}

// Address: 0x1001A418
int __usercall sub_1001A418@<eax>(int a1@<edx>, int a2)
{
  return unknown_libname_25(&dword_1002FE60, a1, a2);
}

// Address: 0x1001A42C
int __cdecl __acrt_invoke_user_matherr(int a1)
{
  int (__cdecl *v1)(int); // esi

  v1 = (int (__cdecl *)(int))__ROR4__(dword_1002FE60 ^ __security_cookie, __security_cookie & 0x1F);
  if ( v1 != nullptr )
    return v1(a1);
  else
    return 0;
}

// Address: 0x1001A475
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
    if ( *(v5 - 2) != (volatile signed __int32 *)&unk_1002E2F8 && *v5 != nullptr )
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

// Address: 0x1001A4F2
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
  if ( v1 != nullptr && v1 != &off_1002E1C8 )
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
    if ( *(v8 - 2) != &unk_1002E2F8 )
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

// Address: 0x1001A63C
signed __int32 __cdecl __acrt_locale_add_lc_time_reference(int a1)
{
  if ( a1 == 0 || (char **)a1 == off_10024B08 )
    return 0x7FFFFFFF;
  else
    return _InterlockedIncrement((volatile signed __int32 *)(a1 + 176));
}

// Address: 0x1001A665
void __cdecl __acrt_locale_free_lc_time_if_unreferenced(void **Block)
{
  if ( Block != nullptr && Block != (void **)off_10024B08 && Block[44] == nullptr )
  {
    __acrt_locale_free_time(Block);
    _free_base(Block);
  }
}

// Address: 0x1001A695
signed __int32 __cdecl __acrt_locale_release_lc_time_reference(int a1)
{
  if ( a1 == 0 || (char **)a1 == off_10024B08 )
    return 0x7FFFFFFF;
  else
    return _InterlockedDecrement((volatile signed __int32 *)(a1 + 176));
}

// Address: 0x1001A6BE
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
      if ( *(v6 - 2) != (volatile signed __int32 *)&unk_1002E2F8 && *v6 != nullptr )
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

// Address: 0x1001A73F
int __acrt_update_thread_locale_data()
{
  _DWORD *v0; // eax
  _DWORD *v1; // edi
  int v2; // esi

  v0 = __acrt_getptd();
  v1 = v0;
  if ( (dword_1002E388 & v0[212]) == 0 || (v2 = v0[19]) == 0 )
  {
    __acrt_lock(4);
    v2 = _updatetlocinfoEx_nolock(v1 + 19, dword_1002FC7C);
    __acrt_unlock(4);
    if ( v2 == 0 )
      abort();
  }
  return v2;
}

// Address: 0x1001A7B6
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
      if ( *(_DWORD *)(v2 + 12) == 0 && (wchar_t **)v2 != &off_1002E238 )
        __acrt_free_locale((char *)v2);
    }
  }
  return a2;
}

// Address: 0x1001A806
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

// Address: 0x1001A880
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

// Address: 0x1001A8B5
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
    v4 = dword_1002FC68;
    while ( (int)a1 >= v4 )
    {
      if ( dword_1002FA68[v3] == 0 )
      {
        handle_array = __acrt_lowio_create_handle_array();
        dword_1002FA68[v3] = (int)handle_array;
        if ( handle_array == nullptr )
        {
          v1 = 12;
          break;
        }
        v4 = dword_1002FC68 + 64;
        dword_1002FC68 += 64;
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

// Address: 0x1001A94D
void __cdecl __acrt_lowio_lock_fh(int a1)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(dword_1002FA68[a1 >> 6] + 48 * (a1 & 0x3F)));
}

// Address: 0x1001A970
void __cdecl __acrt_lowio_unlock_fh(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_1002FA68[a1 >> 6] + 48 * (a1 & 0x3F)));
}

// Address: 0x1001A993
int __cdecl _free_osfhnd(int a1)
{
  int v1; // ebx
  int v2; // eax

  if ( a1 < 0
    || a1 >= (unsigned int)dword_1002FC68
    || (v1 = 48 * (a1 & 0x3F), v2 = dword_1002FA68[a1 >> 6], (*(_BYTE *)(v1 + v2 + 40) & 1) == 0)
    || *(_DWORD *)(v1 + v2 + 24) == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( sub_1001D113() == 1 )
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
    *(_DWORD *)(v1 + dword_1002FA68[a1 >> 6] + 24) = -1;
    return 0;
  }
}

// Address: 0x1001AA24
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
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_1002FC68 )
    {
      v1 = 48 * (FileHandle & 0x3F);
      v2 = dword_1002FA68[FileHandle >> 6];
      if ( (*(_BYTE *)(v2 + v1 + 40) & 1) != 0 )
        return *(_DWORD *)(v2 + v1 + 24);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x1001AA8E
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_1002FC68 )
      return *(_BYTE *)(dword_1002FA68[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) & 0x40;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return 0;
}

// Address: 0x1001AAE4
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

// Address: 0x1001ABA0
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

// Address: 0x1001ABCA
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
      v108 = (unsigned __int8)byte_10024516[4 * v106];
      v109 = (unsigned __int8)byte_10024517[4 * v106];
      v182 = v106;
      v110 = 4 * v108;
      v186 = v108 + v109;
      memset(&Source, 0, 4 * v108);
      memmove_0((char *)&Source + v110, (char *)&unk_10023C10 + 4 * (unsigned __int16)word_10024514[2 * v182], 4 * v109);
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
        v131 = dword_100245AC[v107];
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
    v75 = (unsigned __int8)byte_10024516[4 * v73];
    v76 = (unsigned __int8)byte_10024517[4 * v73];
    v178 = v73;
    v77 = 4 * v75;
    v186 = v75 + v76;
    memset(&Source, 0, 4 * v75);
    memmove_0((char *)&Source + v77, (char *)&unk_10023C10 + 4 * (unsigned __int16)word_10024514[2 * v178], 4 * v76);
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
    v100 = dword_100245AC[v74];
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

// Address: 0x1001BF66
void __cdecl __acrt_locale_free_monetary(void **a1)
{
  if ( a1 != nullptr )
  {
    if ( a1[3] != off_1002E1D4 )
      _free_base(a1[3]);
    if ( a1[4] != off_1002E1D8 )
      _free_base(a1[4]);
    if ( a1[5] != off_1002E1DC )
      _free_base(a1[5]);
    if ( a1[6] != off_1002E1E0 )
      _free_base(a1[6]);
    if ( a1[7] != off_1002E1E4 )
      _free_base(a1[7]);
    if ( a1[8] != off_1002E1E8 )
      _free_base(a1[8]);
    if ( a1[9] != off_1002E1EC )
      _free_base(a1[9]);
    if ( a1[14] != off_1002E200 )
      _free_base(a1[14]);
    if ( a1[15] != off_1002E204 )
      _free_base(a1[15]);
    if ( a1[16] != off_1002E208 )
      _free_base(a1[16]);
    if ( a1[17] != off_1002E20C )
      _free_base(a1[17]);
    if ( a1[18] != off_1002E210 )
      _free_base(a1[18]);
    if ( a1[19] != off_1002E214 )
      _free_base(a1[19]);
  }
}

// Address: 0x1001C064
void __cdecl __acrt_locale_free_numeric(void **a1)
{
  if ( a1 != nullptr )
  {
    if ( *a1 != off_1002E1C8 )
      _free_base(*a1);
    if ( a1[1] != off_1002E1CC )
      _free_base(a1[1]);
    if ( a1[2] != off_1002E1D0 )
      _free_base(a1[2]);
    if ( a1[12] != off_1002E1F8 )
      _free_base(a1[12]);
    if ( a1[13] != off_1002E1FC )
      _free_base(a1[13]);
  }
}

// Address: 0x1001C0CD
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

// Address: 0x1001C109
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

// Address: 0x1001C1ED
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

// Address: 0x1001C22B
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  DWORD v1; // ecx
  HANDLE v2; // eax
  DWORD NumberOfCharsWritten; // [esp+0h] [ebp-4h] BYREF

  NumberOfCharsWritten = v1;
  v2 = hObject;
  if ( hObject == (HANDLE)-2 )
  {
    __dcrt_lowio_initialize_console_output();
    v2 = hObject;
  }
  if ( v2 == (HANDLE)-1 || !WriteConsoleW(v2, &Character, 1u, &NumberOfCharsWritten, nullptr) )
    return -1;
  else
    return Character;
}

// Address: 0x1001C270
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
    v3 = (char *)*(&off_10026030 + 2 * v10);
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
  return dword_10026034[2 * v10];
}

// Address: 0x1001C32C
int __cdecl __acrt_DownlevelLocaleNameToLCID(wchar_t *a1)
{
  int TableIndexFromLocaleName; // eax

  if ( a1 != nullptr && (unsigned int)(TableIndexFromLocaleName = GetTableIndexFromLocaleName(a1)) < 0xE4 )
    return dword_10025910[2 * TableIndexFromLocaleName];
  else
    return 0;
}

// Address: 0x1001C360
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

// Address: 0x1001C3D8
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

// Address: 0x1001C455
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

// Address: 0x1001C4C8
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

// Address: 0x1001C539
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

// Address: 0x1001C5B9
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

// Address: 0x1001C61A
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

// Address: 0x1001C67B
int _getfpcontrolword()
{
  unsigned __int16 abstract_control_x87; // si
  __int16 v2; // [esp+0h] [ebp-8h]

  v2 = 0;
  if ( dword_1002F6F8 >= 1 )
    v2 = _mm_getcsr();
  abstract_control_x87 = __get_abstract_control_x87(0);
  return (abstract_control_x87 | (unsigned __int16)__get_abstract_control_sse2(v2)) & 0x31F;
}

// Address: 0x1001C6BE
int __usercall _getfpstatusword@<eax>(char a1@<fpstat>)
{
  int v1; // ecx
  int v2; // eax
  char v4; // [esp+0h] [ebp-8h]

  v1 = 0;
  v4 = 0;
  if ( dword_1002F6F8 >= 1 )
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

// Address: 0x1001C766
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
  if ( dword_1002F6F8 >= 1 )
  {
    v3 = _mm_getcsr() & ~__get_machine_control_sse2(799);
    result = __get_machine_control_sse2(a1);
    _mm_setcsr(result | v3);
  }
  return result;
}

// Address: 0x1001C7E6
int __cdecl _setfpstatusword(int a1)
{
  int result; // eax
  int v2; // esi

  __asm { fnstenv byte ptr [ebp+var_20] }
  __get_machine_status_x87(522125343);
  result = __get_machine_status_x87(a1);
  __asm { fldenv  byte ptr [ebp+var_20] }
  if ( dword_1002F6F8 >= 1 )
  {
    v2 = _mm_getcsr() & ~__get_machine_status_sse2(522125343);
    result = __get_machine_status_sse2(a1);
    _mm_setcsr(result | v2);
  }
  return result;
}

// Address: 0x1001C866
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

  if ( dword_1002FE64 != 0 )
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
          v9 = (const char *)&unk_100252F0;
          goto LABEL_42;
        }
        if ( a4 == 2 )
        {
          v8 = 2;
          v9 = (const char *)&unk_100252F8;
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
        v9 = (const char *)&unk_100252F8;
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
        v9 = (const char *)&unk_100252F0;
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
        v9 = (const char *)&unk_100252F4;
        goto LABEL_23;
      }
      v8 = 3;
LABEL_41:
      v9 = (const char *)&unk_100252F4;
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
      v9 = (const char *)&unk_100252F4;
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

// Address: 0x1001CA7E
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

// Address: 0x1001CB89
long double __cdecl _frnd(long double a1)
{
  return rint(a1);
}

// Address: 0x1001CBA0
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

// Address: 0x1001CC40
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

// Address: 0x1001CC80
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

// Address: 0x1001D020
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

// Address: 0x1001D060
unsigned __int8 *__cdecl _mbsdec(const unsigned __int8 *Start, const unsigned __int8 *Pos)
{
  return _mbsdec_l(Start, Pos, nullptr);
}

// Address: 0x1001D077
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

// Address: 0x1001D104
BOOL __cdecl initialize_multibyte()
{
  return __acrt_initialize_multibyte() == 0;
}

// Address: 0x1001D113
int sub_1001D113()
{
  return dword_1002FE68;
}

// Address: 0x1001D119
int __cdecl fegetenv(fenv_t *Env)
{
  char v1; // fps

  Env->_Fe_ctl = _getfpcontrolword();
  Env->_Fe_stat = _getfpstatusword(v1);
  return 0;
}

// Address: 0x1001D136
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

// Address: 0x1001D17F
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

// Address: 0x1001D1D0
double __cdecl log10(double X)
{
  int v1; // ecx
  int v2; // eax
  bool v3; // zf
  char v5; // [esp+0h] [ebp-8h]

  if ( dword_1002FF4C != 0 )
  {
    v2 = _mm_getcsr() & 0x7F80;
    v3 = v2 == 8064;
    if ( v2 == 8064 )
      v3 = (v5 & 0x7F) == 127;
    if ( v3 )
      return start_1(X);
  }
  _fload_withFB(v1, &X);
  return start_0(X);
}

// Address: 0x1001D210
double __usercall _CIlog10@<st0>(double x@<st0>)
{
  int v1; // eax
  bool v2; // zf
  int v3; // [esp+0h] [ebp-Ch]
  char v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+4h] [ebp-8h]

  if ( dword_1002FF4C == 0 )
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
    start_0(v3, v5);
  }
  return x;
}

// Address: 0x1001D268
long double __usercall start_0@<st0>(
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
      goto exit_1;
negative_x:
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
exit_1:
      if ( dword_1002FE24 == 0 && a3 != 639 && (a3 & 0x20) != 0 && (a4 & 0x20) != 0 )
        return _startOneArgErrorHandling(8, 27, (int)"log10", result);
      return result;
    }
    goto negative_x;
  }
  if ( (a7 & 0xFFFFF) != 0 || a6 != 0 )
  {
    if ( a7 >= 0 )
      goto normal_0;
    goto negative_x;
  }
  result = -0.0;
  v7 = 2;
_ErrorHandling_0:
  if ( dword_1002FE24 == 0 )
    return _startOneArgErrorHandling(v7, 27, (int)"log10", result);
  return result;
}

// Address: 0x1001D320
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

  if ( dword_1002FF4C == 0 )
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
    v6 = _mm_sub_epi32((__m128i)xmmword_10029FF0, (__m128i)_mm_and_pd(v4, (__m128d)xmmword_1002A010));
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
        *(_QWORD *)&X = *(_QWORD *)&_mm_cmpnle_pd(v11, (__m128d)xmmword_1002A000).m128d_f64[0] & 0x3FF0000000000000LL;
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

// Address: 0x1001D43D
void __cdecl __dcrt_lowio_initialize_console_output()
{
  hObject = CreateFileW(L"CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
}

// Address: 0x1001D45C
// Microsoft VisualC universal runtime
HANDLE unknown_libname_32()
{
  HANDLE result; // eax

  result = hObject;
  if ( hObject != (HANDLE)-1 && hObject != (HANDLE)-2 )
    return (HANDLE)CloseHandle(hObject);
  return result;
}

// Address: 0x1001D480
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

// Address: 0x1001D4E1
unsigned int __cdecl _clearfp()
{
  char v0; // fps
  int v1; // ecx
  int v2; // edx
  unsigned int result; // eax
  int v4; // [esp+4h] [ebp-8h]

  __asm { fnclex }
  if ( dword_1002F6F8 < 1 )
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

// Address: 0x1001D5C0
void __usercall _CIlog10_pentium4(double a1@<st0>)
{
  start_1(a1);
}

// Address: 0x1001D5DE
double __usercall start_1@<st0>(__m128d a1@<xmm0>, double a2)
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
    v5 = _mm_or_pd(_mm_and_pd(_mm_unpacklo_pd(a1, a1), (__m128d)xmmword_1002A040), (__m128d)xmmword_1002A0B0);
    v6 = _mm_extract_epi16((__m128i)_mm_add_pd((__m128d)xmmword_1002A060, v5), 0) & 0x7F0;
    v7 = *(__m128d *)((char *)&xmmword_1002A550 + v6);
    v11 = *(__m128d *)((char *)&xmmword_1002A140 + v6);
    v8 = _mm_and_pd((__m128d)xmmword_1002A070, v5);
    v9 = _mm_sub_pd(v5, v8);
    v10 = _mm_sub_pd(_mm_mul_pd(v8, v7), (__m128d)xmmword_1002A050);
    v11.m128d_f64[0] = v11.m128d_f64[0] + v10.m128d_f64[0];
    v12 = _mm_mul_pd(v9, v7);
    a1 = _mm_add_pd(v12, v10);
    v13 = (_mm_extract_epi16(_mm_srli_epi64(v3, 0x34u), 0) & 0xFFF) - 1;
    if ( v13 <= 0x7FD )
      break;
    v22.m128d_f64[0] = a2;
    v23 = (__m128i)_mm_cmpeq_sd((__m128d)xmmword_1002A0C0, v22);
    if ( _mm_extract_epi16(v23, 0) != 0 )
    {
      *(double *)v23.m128i_i64 = -INFINITY;
      v24 = 8;
CALL_LIBM_ERROR_0:
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
                          (__m128d)xmmword_1002A0B0,
                          _mm_or_pd(_mm_and_pd(a1, (__m128d)xmmword_1002A040), (__m128d)xmmword_1002A0B0)),
               0) != 0 )
          return INFINITY;
        v24 = 1001;
      }
      goto CALL_LIBM_ERROR_0;
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
          _mm_add_pd(v11, _mm_mul_pd(v15, (__m128d)xmmword_1002A080)),
          _mm_and_pd(v12, (__m128d)xmmword_1002A090[v16]));
  v17.m128d_f64[0] = v17.m128d_f64[0] * v17.m128d_f64[0] * a1.m128d_f64[0];
  v19 = 0.001616102407499711 * a1.m128d_f64[0];
  v20 = _mm_mul_pd(
          _mm_add_pd(
            _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_1002A100, a1), (__m128d)xmmword_1002A110), a1),
            (__m128d)xmmword_1002A120),
          v17);
  return _mm_unpackhi_pd(v20, v20).m128d_f64[0]
       + v20.m128d_f64[0]
       + v19
       + _mm_unpackhi_pd(v18, v18).m128d_f64[0]
       + v18.m128d_f64[0];
}

// Address: 0x1001D844
int __cdecl sub_1001D844(double a1)
{
  return _ceil_default(a1);
}

// Address: 0x1001D850
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

// Address: 0x1001D90A
// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)
{
  return __imp_IsProcessorFeaturePresent(ProcessorFeature);
}

// Address: 0x1001D910
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x1001D920
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

// Address: 0x1001D970
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000) != 0
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x1001DA30
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

// Address: 0x1001DA70
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

// Address: 0x1001DB10
_DWORD *__cdecl _SEH_prolog4_GS(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-14h] [ebp-14h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_1001D970;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1001DB59
void _SEH_epilog4_GS()
{
  ;
}

// Address: 0x1001DB70
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

// Address: 0x1001DB90
unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}

// Address: 0x1001DBB0
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

// Address: 0x1001DC90
int __usercall _ftol2_sse@<eax>(double a1@<st0>)
{
  int result; // eax
  int v2; // edx
  float v3; // [esp+0h] [ebp-24h]
  int v4; // [esp+18h] [ebp-Ch]

  if ( dword_1002F6F8 != 0 )
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

// Address: 0x1001DDE5
void nullsub_4()
{
  ;
}

// Address: 0x1001DE1D
void nullsub_5()
{
  ;
}

// Address: 0x1001DE23
void nullsub_6()
{
  ;
}

// Address: 0x1001DF15
void nullsub_7()
{
  ;
}

// Address: 0x1001DF1B
void nullsub_8()
{
  ;
}

// Address: 0x1001E205
void nullsub_9()
{
  ;
}

// Address: 0x1001E25A
void nullsub_10()
{
  ;
}

// Address: 0x1001E260
void nullsub_11()
{
  ;
}

// Address: 0x1001E266
void nullsub_12()
{
  ;
}

// Address: 0x1001E29D
void nullsub_13()
{
  ;
}

// Address: 0x1001E2AB
void nullsub_14()
{
  ;
}

// Address: 0x1001E2B1
void nullsub_15()
{
  ;
}

// Address: 0x1001E2B7
void nullsub_16()
{
  ;
}

// Address: 0x1001E2F5
void nullsub_17()
{
  ;
}

// Address: 0x1001E2FB
void nullsub_18()
{
  ;
}

// Address: 0x1001E355
void nullsub_19()
{
  ;
}

// Address: 0x1001E3AD
void nullsub_20()
{
  ;
}

// Address: 0x1001E3B3
void nullsub_21()
{
  ;
}

// Address: 0x1001E3E5
void nullsub_22()
{
  ;
}

// Address: 0x1001E3EB
void nullsub_23()
{
  ;
}

// Address: 0x1001E425
void nullsub_24()
{
  ;
}

// Address: 0x1001E42B
void nullsub_25()
{
  ;
}

// Address: 0x1001E465
void nullsub_26()
{
  ;
}

// Address: 0x1001E46B
void nullsub_27()
{
  ;
}

// Address: 0x1001E529
void nullsub_28()
{
  ;
}

// Address: 0x1001E52F
void nullsub_29()
{
  ;
}

// Address: 0x1001E5A9
void nullsub_30()
{
  ;
}

// Address: 0x1001E5AF
void nullsub_31()
{
  ;
}

// Address: 0x1001E5D5
void nullsub_32()
{
  ;
}

// Address: 0x1001E645
void nullsub_33()
{
  ;
}

// Address: 0x1001E675
void nullsub_34()
{
  ;
}

// Address: 0x1001E6A5
void nullsub_35()
{
  ;
}

// Address: 0x1001E6DD
void nullsub_36()
{
  ;
}

// Address: 0x1001E6E3
void nullsub_37()
{
  ;
}

// Address: 0x1001E7D5
void nullsub_38()
{
  ;
}

// Address: 0x1001E84D
void nullsub_39()
{
  ;
}

// Address: 0x1001E890
void __cdecl nullsub_2()
{
  ;
}

// Address: 0x1001E8A0
void __cdecl sub_1001E8A0()
{
  LODWORD(xmmword_1002FE88) = &boost::system::error_category::`vftable';
  DWORD1(xmmword_1002FE88) = &std::error_category::`vftable';
}

// Address: 0x1001E8C0
void __cdecl sub_1001E8C0()
{
  if ( _InterlockedExchangeAdd(&dword_1002FEA4, 0xFFFFFFFF) == 0 )
    WSACleanup();
}

// Address: 0x1001E8E0
void __cdecl sub_1001E8E0()
{
  TlsFree(dword_1002FF34);
}

// Address: 0x1001E8F0
void __cdecl sub_1001E8F0()
{
  TlsFree(dword_1002FF3C);
}

// Address: 0x1001E900
void __cdecl nullsub_3()
{
  ;
}

// Address: 0x1001E910
// attributes: thunk
void __cdecl _guard_check_icall_nop`...'()
{
  ;
}

// Address: 0x1001E920
// attributes: thunk
void __cdecl _guard_check_icall_nop`...'()
{
  ;
}

// Address: 0x1001E930
// attributes: thunk
void __cdecl _guard_check_icall_nop`...'()
{
  ;
}

// Address: 0x1001E940
void __cdecl sub_1001E940()
{
  if ( _InterlockedExchangeAdd(&dword_1002FEA4, 0xFFFFFFFF) == 0 )
    WSACleanup();
}

// Address: 0x1001E954
void __cdecl sub_1001E954()
{
  DeleteCriticalSection(&stru_1002F03C);
  if ( unk_1002F054 != 0 )
  {
    j___free_base(unk_1002F054);
    unk_1002F054 = 0;
  }
  unk_1002F058 = 0;
  unk_1002F05C = 0;
}

// Address: 0x1001E960
void __cdecl sub_1001E960()
{
  VariantClear(&pvarg);
}

// Address: 0x1001E96C
void __cdecl sub_1001E96C()
{
  std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t((std::_Fac_tidy_reg_t *)&unk_1002F0C8);
}

// Address: 0x1001E976
void __cdecl sub_1001E976()
{
  sub_10002060(dword_1002F0C0);
}

// Address: 0x1001E980
void __cdecl sub_1001E980()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( _InterlockedExchangeAdd(&dword_1002E01C, 0xFFFFFFFF) < 0 )
  {
    v0 = &stru_1002F0D8;
    do
      _Mtxdst(v0++);
    while ( (int)v0 < (int)&stru_1002F198 );
  }
}

// Address: 0x1001E98A
void __cdecl sub_1001E98A()
{
  _Init_atexit::~_Init_atexit((_Init_atexit *)&unk_1002F1E5);
}

// Address: 0x1001E994
void __cdecl sub_1001E994()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( _InterlockedExchangeAdd(&dword_1002E01C, 0xFFFFFFFF) < 0 )
  {
    v0 = &stru_1002F0D8;
    do
      _Mtxdst(v0++);
    while ( (int)v0 < (int)&stru_1002F198 );
  }
}

// Address: 0x1001E9A0
void __cdecl sub_1001E9A0()
{
  off_1002E08C[0] = (int (__thiscall **)(void *, char))&boost::system::error_category::`vftable';
  off_1002E090 = &std::error_category::`vftable';
}

// Address: 0x1001E9C0
void __cdecl sub_1001E9C0()
{
  off_1002E07C[0] = (int (__thiscall **)(void *, char))&boost::system::error_category::`vftable';
  off_1002E080 = &std::error_category::`vftable';
}

// Address: 0x1001E9E0
void __cdecl sub_1001E9E0()
{
  _DWORD *v0; // esi

  if ( (unsigned int)dword_1002F328 >= 0x10 )
  {
    v0 = dword_1002F314;
    nullsub_1((int)&dword_1002F314);
    sub_10003150(v0, dword_1002F328 + 1);
  }
  dword_1002F328 = 15;
  dword_1002F324 = 0;
  LOBYTE(dword_1002F314) = 0;
}

// Address: 0x1001EA70
void __cdecl __std_execution_wake_by_address_all()
{
  volatile signed __int32 *v0; // esi

  v0 = (volatile signed __int32 *)dword_1002F354;
  if ( dword_1002F354 != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(dword_1002F354 + 4), 0xFFFFFFFF) == 1 )
  {
    (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 4))(v0);
    if ( _InterlockedExchangeAdd(v0 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 8))(v0);
  }
}

// Address: 0x1001EAF0
void __cdecl sub_1001EAF0()
{
  volatile signed __int32 *v0; // esi

  v0 = (volatile signed __int32 *)dword_1002F35C;
  if ( dword_1002F35C != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(dword_1002F35C + 4), 0xFFFFFFFF) == 1 )
  {
    (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 4))(v0);
    if ( _InterlockedExchangeAdd(v0 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 8))(v0);
  }
}

// Address: 0x1001EB70
void __cdecl __std_execution_wake_by_address_all()
{
  volatile signed __int32 *v0; // esi

  v0 = (volatile signed __int32 *)dword_1002F364;
  if ( dword_1002F364 != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(dword_1002F364 + 4), 0xFFFFFFFF) == 1 )
  {
    (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 4))(v0);
    if ( _InterlockedExchangeAdd(v0 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 8))(v0);
  }
}

// Address: 0x1001EBF0
void __cdecl sub_1001EBF0()
{
  volatile signed __int32 *v0; // esi

  v0 = (volatile signed __int32 *)dword_1002F370;
  if ( dword_1002F370 != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(dword_1002F370 + 4), 0xFFFFFFFF) == 1 )
  {
    (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 4))(v0);
    if ( _InterlockedExchangeAdd(v0 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 8))(v0);
  }
}

