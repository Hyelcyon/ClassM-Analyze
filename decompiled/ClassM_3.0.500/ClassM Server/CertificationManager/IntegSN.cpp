// Decompiled from IntegSN.dll (ClassM_3.0.500\ClassM_x64_unpacked\ClassM Server\CertificationManager\IntegSN.dll)

// Address: 0x10001005
// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return _DllMain@12_0(hinstDLL, fdwReason, lpvReserved);
}

// Address: 0x1000100A
// attributes: thunk
int __cdecl CheckSerialNumber(int a1)
{
  return CheckSerialNumber_0(a1);
}

// Address: 0x10001020
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    dword_1001CFC0 = (int)hinstDLL;
  return true;
}

// Address: 0x10001040
int __cdecl CheckSerialNumber_0(int a1)
{
  int v1; // edx
  CHAR *v2; // eax
  CHAR v3; // cl
  CHAR v4; // cl
  CHAR v5; // cl
  CHAR v6; // cl
  CHAR v7; // cl
  int i; // esi
  char v10; // al
  int v11; // eax
  int j; // eax
  int v13; // ecx
  bool v14; // zf
  int v15; // kr00_4
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  int v19; // ebp
  int v20; // edi
  int v21; // esi
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // ecx
  bool v25; // zf
  char v26; // bl
  bool v27; // zf
  int v28; // [esp+4h] [ebp-D0h]
  int v29; // [esp+8h] [ebp-CCh]
  int v30; // [esp+Ch] [ebp-C8h]
  int v31; // [esp+10h] [ebp-C4h]
  int v32; // [esp+14h] [ebp-C0h]
  int v33; // [esp+18h] [ebp-BCh]
  int v34; // [esp+1Ch] [ebp-B8h]
  int v35; // [esp+20h] [ebp-B4h]
  int v36; // [esp+24h] [ebp-B0h]
  int v37; // [esp+28h] [ebp-ACh]
  int v38; // [esp+2Ch] [ebp-A8h]
  int v39; // [esp+30h] [ebp-A4h]
  int v40; // [esp+34h] [ebp-A0h]
  int v41; // [esp+38h] [ebp-9Ch]
  int v42; // [esp+3Ch] [ebp-98h]
  int v43; // [esp+40h] [ebp-94h]
  int v44; // [esp+44h] [ebp-90h]
  int v45; // [esp+48h] [ebp-8Ch]
  int v46; // [esp+4Ch] [ebp-88h]
  int v47; // [esp+50h] [ebp-84h]
  int v48; // [esp+54h] [ebp-80h]
  int v49; // [esp+5Ch] [ebp-78h]
  _DWORD *v50; // [esp+60h] [ebp-74h]
  _DWORD v51[16]; // [esp+64h] [ebp-70h]
  CHAR String1[4]; // [esp+A4h] [ebp-30h] BYREF
  _DWORD v53[5]; // [esp+A8h] [ebp-2Ch]
  CHAR String[20]; // [esp+BCh] [ebp-18h] BYREF

  v50 = (_DWORD *)a1;
  lstrcpyA(String1, (LPCSTR)(a1 + 4));
  v1 = 0;
  v2 = String;
  do
  {
    v3 = String1[v1];
    if ( v3 != 45 )
      *v2++ = v3;
    v4 = String1[v1 + 1];
    if ( v4 != 45 )
      *v2++ = v4;
    v5 = String1[v1 + 2];
    if ( v5 != 45 )
      *v2++ = v5;
    v6 = String1[v1 + 3];
    if ( v6 != 45 )
      *v2++ = v6;
    v7 = *((_BYTE *)v53 + v1);
    if ( v7 != 45 )
      *v2++ = v7;
    v1 += 5;
  }
  while ( v1 < 20 );
  if ( lstrlenA(String) != 16 )
  {
    *(_DWORD *)a1 = 0;
    return 1;
  }
  for ( i = 0; i < 16; ++i )
  {
    v10 = String[i];
    if ( v10 < 48 || v10 > 57 )
      v11 = toupper(v10) - 55;
    else
      v11 = v10 - 48;
    v51[i] = v11;
  }
  for ( j = 0; j < 16; ++j )
  {
    switch ( j )
    {
      case 0:
      case 3:
      case 5:
      case 6:
        v13 = v51[j];
        switch ( v13 )
        {
          case 1:
            *(&v30 + j) = 0;
            continue;
          case 3:
            *(&v30 + j) = 1;
            continue;
          case 9:
            *(&v30 + j) = 2;
            continue;
          case 27:
            *(&v30 + j) = 3;
            continue;
          case 19:
            *(&v30 + j) = 4;
            continue;
          case 26:
            *(&v30 + j) = 5;
            continue;
          case 16:
            *(&v30 + j) = 6;
            continue;
          case 17:
            *(&v30 + j) = 7;
            continue;
          case 20:
            *(&v30 + j) = 8;
            continue;
          case 29:
            *(&v30 + j) = 9;
            continue;
          case 25:
            *(&v30 + j) = 10;
            continue;
          case 13:
            *(&v30 + j) = 11;
            continue;
          case 8:
            *(&v30 + j) = 12;
            continue;
          case 24:
            *(&v30 + j) = 13;
            continue;
          default:
            break;
        }
        v14 = v13 == 10;
        break;
      case 1:
      case 11:
      case 13:
      case 14:
        v13 = v51[j];
        switch ( v13 )
        {
          case 1:
            *(&v30 + j) = 0;
            continue;
          case 11:
            *(&v30 + j) = 1;
            continue;
          case 28:
            *(&v30 + j) = 2;
            continue;
          case 29:
            *(&v30 + j) = 3;
            continue;
          case 9:
            *(&v30 + j) = 4;
            continue;
          case 6:
            *(&v30 + j) = 5;
            continue;
          case 4:
            *(&v30 + j) = 6;
            continue;
          case 13:
            *(&v30 + j) = 7;
            continue;
          case 19:
            *(&v30 + j) = 8;
            continue;
          case 23:
            *(&v30 + j) = 9;
            continue;
          case 5:
            *(&v30 + j) = 10;
            continue;
          case 24:
            *(&v30 + j) = 11;
            continue;
          case 16:
            *(&v30 + j) = 12;
            continue;
          case 21:
            *(&v30 + j) = 13;
            continue;
          default:
            break;
        }
        v14 = v13 == 14;
        break;
      case 2:
      case 4:
      case 8:
      case 7:
        v13 = v51[j];
        switch ( v13 )
        {
          case 1:
            *(&v30 + j) = 0;
            continue;
          case 13:
            *(&v30 + j) = 1;
            continue;
          case 14:
            *(&v30 + j) = 2;
            continue;
          case 27:
            *(&v30 + j) = 3;
            continue;
          case 10:
            *(&v30 + j) = 4;
            continue;
          case 6:
            *(&v30 + j) = 5;
            continue;
          case 16:
            *(&v30 + j) = 6;
            continue;
          case 22:
            *(&v30 + j) = 7;
            continue;
          case 7:
            *(&v30 + j) = 8;
            continue;
          case 29:
            *(&v30 + j) = 9;
            continue;
          case 5:
            *(&v30 + j) = 10;
            continue;
          case 3:
            *(&v30 + j) = 11;
            continue;
          case 8:
            *(&v30 + j) = 12;
            continue;
          case 11:
            *(&v30 + j) = 13;
            continue;
          default:
            break;
        }
        v14 = v13 == 19;
        break;
      case 10:
      case 12:
      case 9:
      case 15:
        v13 = v51[j];
        switch ( v13 )
        {
          case 1:
            *(&v30 + j) = 0;
            continue;
          case 17:
            *(&v30 + j) = 1;
            continue;
          case 10:
            *(&v30 + j) = 2;
            continue;
          case 15:
            *(&v30 + j) = 3;
            continue;
          case 7:
            *(&v30 + j) = 4;
            continue;
          case 26:
            *(&v30 + j) = 5;
            continue;
          case 8:
            *(&v30 + j) = 6;
            continue;
          case 12:
            *(&v30 + j) = 7;
            continue;
          case 18:
            *(&v30 + j) = 8;
            continue;
          case 27:
            *(&v30 + j) = 9;
            continue;
          case 25:
            *(&v30 + j) = 10;
            continue;
          case 22:
            *(&v30 + j) = 11;
            continue;
          case 2:
            *(&v30 + j) = 12;
            continue;
          case 3:
            *(&v30 + j) = 13;
            continue;
          default:
            break;
        }
        v14 = v13 == 20;
        break;
      default:
        continue;
    }
    if ( v14 )
    {
      *(&v30 + j) = 14;
    }
    else if ( v13 == 30 )
    {
      *(&v30 + j) = 15;
    }
  }
  v15 = v44 + 16 * v36;
  v49 = v45 + 16 * v37;
  v16 = v15 / 2;
  v28 = v30 - v15 / 2 + 16;
  if ( v28 >= 16 )
    v28 = v30 - v15 / 2;
  v29 = v31 - v16 + 16;
  if ( v29 >= 16 )
    v29 = v31 - v16;
  v48 = v38 - v16 + 16;
  if ( v48 >= 16 )
    v48 = v38 - v16;
  v17 = v39 - v16 + 16;
  if ( v17 >= 16 )
    v17 = v39 - v16;
  v46 = v35 - v16 + 16;
  if ( v46 >= 16 )
    v46 = v35 - v16;
  v18 = v43 - v16 + 16;
  if ( v18 >= 16 )
    v18 = v43 - v16;
  v47 = v18;
  *(_DWORD *)String1 = v32 - v16 + 16;
  if ( *(int *)String1 >= 16 )
    *(_DWORD *)String1 = v32 - v16;
  v53[0] = v40 - v16 + 16;
  if ( v53[0] >= 16 )
    v53[0] = v40 - v16;
  v19 = v33 - v16 + 16;
  if ( v19 >= 16 )
    v19 = v33 - v16;
  v20 = v41 - v16 + 16;
  if ( v20 >= 16 )
    v20 = v41 - v16;
  v21 = v34 - v16 + 16;
  if ( v21 >= 16 )
    v21 = v34 - v16;
  v22 = v42 - v16;
  v23 = v42 - v16 + 16;
  if ( v23 < 16 )
    v22 = v23;
  if ( *(_DWORD *)String1 + v53[0] + v19 + v20 + v21 + v22 + v28 + v29 + v48 + v17 + v18 + v46 != v49 )
    return 0;
  v24 = v50;
  *v50 = 1;
  switch ( v28 )
  {
    case 5:
      v25 = v29 == 5;
      goto LABEL_193;
    case 4:
      v25 = v29 == 4;
      goto LABEL_193;
    case 8:
      v25 = v29 == 8;
      goto LABEL_193;
    default:
      break;
  }
  if ( v28 != 6 )
    goto LABEL_194;
  v25 = v29 == 6;
LABEL_193:
  if ( !v25 )
LABEL_194:
    *v24 = 0;
  v26 = v48;
  switch ( v48 )
  {
    case 1:
    case 7:
      v27 = v17 == 10;
      break;
    case 2:
      if ( v17 != 12 && v17 != 11 && v17 != 10 )
        goto LABEL_203;
      goto LABEL_216;
    case 3:
      if ( v17 != 11 && v17 != 14 )
        goto LABEL_199;
      goto LABEL_216;
    case 4:
LABEL_203:
      v27 = v17 == 13;
      break;
    case 5:
      v27 = v17 == 14;
      break;
    case 6:
LABEL_199:
      v27 = v17 == 15;
      break;
    case 8:
      if ( v17 == 10 || v17 == 11 || v17 == 12 )
        goto LABEL_216;
      v27 = v17 == 13;
      break;
    case 9:
      if ( v17 == 10 )
        goto LABEL_216;
      v27 = v17 == 11;
      break;
    case 10:
      if ( v17 == 5 || v17 == 6 )
        goto LABEL_216;
      v27 = v17 == 4;
      break;
    default:
      goto LABEL_215;
  }
  if ( !v27 )
LABEL_215:
    *v24 = 0;
LABEL_216:
  if ( v46 != 0 || v47 != 1 )
    *v24 = 0;
  *((_BYTE *)v24 + 24) = v28;
  *((_BYTE *)v24 + 25) = v29;
  *((_BYTE *)v24 + 26) = v26;
  *((_BYTE *)v24 + 27) = v17;
  *((_BYTE *)v24 + 28) = 0;
  *((_BYTE *)v24 + 29) = 1;
  return 1;
}

// Address: 0x10001A18
// attributes: thunk
int __stdcall lstrlenA(LPCSTR lpString)
{
  return __imp_lstrlenA(lpString);
}

// Address: 0x10001A1E
// attributes: thunk
LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2)
{
  return __imp_lstrcpyA(lpString1, lpString2);
}

// Address: 0x10001A24
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
    if ( *(_UNKNOWN **)this != off_1001C610 && (dword_1001C52C & v3[28]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != Block && (dword_1001C52C & *(_DWORD *)(*((_DWORD *)this + 2) + 112)) == 0 )
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

// Address: 0x10001AAB
void __thiscall _LocaleUpdate::~_LocaleUpdate(_LocaleUpdate *this)
{
  if ( *((_BYTE *)this + 12) != 0 )
    *(_DWORD *)(*((_DWORD *)this + 2) + 112) &= ~2u;
}

// Address: 0x10001AB9
void *__thiscall sub_10001AB9(void *this)
{
  return this;
}

// Address: 0x10001ABC
int __cdecl _toupper(int C)
{
  return C - 32;
}

// Address: 0x10001AC9
int __cdecl _toupper_l(int C, _locale_t Locale)
{
  struct __crt_locale_data *locinfo; // ecx
  int v4; // eax
  int result; // eax
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  __crt_locale_pointers v9; // [esp+4h] [ebp-18h] BYREF
  int v10; // [esp+Ch] [ebp-10h]
  char v11; // [esp+10h] [ebp-Ch]
  WCHAR DestStr; // [esp+14h] [ebp-8h] BYREF
  CHAR MultiByteStr; // [esp+18h] [ebp-4h] BYREF
  char v14; // [esp+19h] [ebp-3h]
  char v15; // [esp+1Ah] [ebp-2h]
  int Ca; // [esp+24h] [ebp+8h]

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
           0x200u,
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
      v4 = *(_WORD *)(*((_DWORD *)v9.locinfo + 50) + 2 * C) & 2;
    }
    else
    {
      v4 = _isctype_l(C, 2, &v9);
      locinfo = v9.locinfo;
    }
    if ( v4 != 0 )
    {
      result = *(unsigned __int8 *)(*((_DWORD *)locinfo + 52) + C);
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

// Address: 0x10001BDF
int __cdecl toupper(int C)
{
  int result; // eax

  if ( dword_1001CFF4 != 0 )
    return _toupper_l(C, nullptr);
  result = C;
  if ( (unsigned int)(C - 97) <= 0x19 )
    return C - 32;
  return result;
}

// Address: 0x10001C0B
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x10001C1A
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
    sub_100055CD();
    dword_1001DC18 = (int)GetCommandLineA();
    Str = (char *)__crtGetEnvironmentStringsA();
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
    ++dword_1001CFC4;
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
      v8 = dword_1001C620;
      v6 = (int (__stdcall *)(int, DWORD *))_decode_pointer(dword_1001D020);
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
    if ( dword_1001CFC4 <= 0 )
      return 0;
    --dword_1001CFC4;
    if ( dword_1001D384 == 0 )
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

// Address: 0x10001D4F
BOOL __fastcall __DllMainCRTStartup(void *a1, DWORD a2, HINSTANCE hinstDLL)
{
  BOOL v5; // eax
  BOOL v7; // [esp+10h] [ebp-1Ch]

  if ( a2 == 0 && dword_1001CFC4 == 0 || (a2 == 1 || a2 == 2) && _CRT_INIT((int)hinstDLL, a2, (int)a1) == 0 )
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

// Address: 0x10001E45
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return __DllMainCRTStartup(lpReserved, fdwReason, hinstDLL);
}

// Address: 0x10001E68
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

// Address: 0x10001E97
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
  v3 = &unk_1001C008 - (_UNKNOWN *)a1;
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

// Address: 0x10001EFB
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

// Address: 0x1000208E
volatile LONG *__updatetmbcinfo()
{
  _DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = (_DWORD *)_getptd();
  if ( (dword_1001C52C & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != Block )
    {
      if ( v1 != nullptr && InterlockedDecrement(v1) == 0 && v1 != (volatile LONG *)&unk_1001C008 )
        free((void *)v1);
      v0[26] = Block;
      v1 = Block;
      InterlockedIncrement(Block);
    }
    _unlock(13);
  }
  if ( v1 == nullptr )
    _amsg_exit(32);
  return v1;
}

// Address: 0x10002132
UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, nullptr);
  dword_1001CFD8 = 0;
  switch ( a1 )
  {
    case -2:
      dword_1001CFD8 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_1001CFD8 = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_1001CFD8 = 1;
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

// Address: 0x100021AE
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
      if ( dword_1001C438[i] == SystemCP )
      {
        memset(a2 + 7, 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_1001C448 + 48 * v19;
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
              *((_BYTE *)a2 + v10 + 29) |= byte_1001C434[v18];
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
        v13 = (_WORD *)((char *)&unk_1001C43C + v12);
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
    if ( dword_1001CFD8 == 0 )
      return -1;
  }
  setSBCS(a2);
  return 0;
}

// Address: 0x10002393
int __cdecl _getmbcp()
{
  int result; // eax
  _BYTE v1[4]; // [esp+0h] [ebp-10h] BYREF
  int v2; // [esp+4h] [ebp-Ch]
  int v3; // [esp+8h] [ebp-8h]
  char v4; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v1, nullptr);
  if ( *(_DWORD *)(v2 + 8) != 0 )
  {
    result = *(_DWORD *)(v2 + 4);
    if ( v4 != 0 )
      *(_DWORD *)(v3 + 112) &= ~2u;
  }
  else
  {
    if ( v4 != 0 )
      *(_DWORD *)(v3 + 112) &= ~2u;
    return 0;
  }
  return result;
}

// Address: 0x100023D1
int __cdecl _setmbcp(int CodePage)
{
  int v1; // edi
  int v2; // ebx
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
  v2 = *(_DWORD *)(v1 + 104);
  CodePagea = getSystemCP(CodePage);
  if ( CodePagea == *(_DWORD *)(v2 + 4) )
    return 0;
  v3 = (_DWORD *)_malloc_crt(0x220u);
  v4 = v3;
  if ( v3 != nullptr )
  {
    qmemcpy(v3, *(const void **)(v1 + 104), 0x220u);
    *v3 = 0;
    v5 = _setmbcp_nolock(CodePagea, v3);
    v10 = v5;
    if ( v5 != 0 )
    {
      if ( v5 == -1 )
      {
        if ( v4 != (_DWORD *)&unk_1001C008 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( InterlockedDecrement(*(volatile LONG **)(v1 + 104)) == 0 && *(_UNKNOWN **)(v1 + 104) != &unk_1001C008 )
        free(*(void **)(v1 + 104));
      *(_DWORD *)(v1 + 104) = v4;
      InterlockedIncrement(v4);
      if ( (*(_BYTE *)(v1 + 112) & 2) == 0 && (dword_1001C52C & 1) == 0 )
      {
        _lock(13);
        dword_1001CFE8 = v4[1];
        dword_1001CFEC = v4[2];
        dword_1001CFF0 = v4[3];
        for ( i = 0; i < 5; ++i )
          word_1001CFDC[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_1001C228[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_1001C330[k] = *((_BYTE *)v4 + k + 285);
        if ( InterlockedDecrement(Block) == 0 && Block != (volatile LONG *)&unk_1001C008 )
          free((void *)Block);
        Block = v4;
        InterlockedIncrement(v4);
        _unlock(13);
      }
    }
  }
  return v10;
}

// Address: 0x1000256B
int __initmbctable()
{
  if ( dword_1001DBF8 == 0 )
  {
    _setmbcp(-3);
    dword_1001DBF8 = 1;
  }
  return 0;
}

// Address: 0x10002589
void __cdecl _invoke_watson_if_error(
        int a1,
        wchar_t *Expression,
        wchar_t *FunctionName,
        wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  if ( a1 != 0 )
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
}

// Address: 0x100025AD
int sub_100025AD()
{
  return dword_1001DC04;
}

// Address: 0x100025B3
void *sub_100025B3()
{
  return &unk_1001DC14;
}

// Address: 0x100025B9
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
  if ( v2 != nullptr && v2 != &off_1001C9E8 )
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
  if ( (_UNKNOWN **)v7 != &off_1001C928 && *(_DWORD *)(v7 + 180) == 0 )
  {
    __free_lc_time(*((_DWORD *)Block + 53));
    free(*((void **)Block + 53));
  }
  v8 = (void **)(Block + 80);
  for ( Blocka = 6; Blocka != 0; --Blocka )
  {
    if ( *(v8 - 2) != Str2 && *v8 != nullptr && *(_DWORD *)*v8 == 0 )
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

// Address: 0x10002702
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
    if ( *(v2 - 2) != (volatile LONG *)Str2 && *v2 != nullptr )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
      InterlockedIncrement(v2[1]);
    v2 += 4;
  }
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}

// Address: 0x10002791
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
      if ( *(v2 - 2) != (volatile LONG *)Str2 && *v2 != nullptr )
        InterlockedDecrement(*v2);
      if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
        InterlockedDecrement(v2[1]);
      v2 += 4;
    }
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
  }
  return lpAddend;
}

// Address: 0x1000282A
_DWORD *__usercall _copytlocinfo_nolock@<eax>(_DWORD *result@<eax>, _DWORD *a2@<ecx>)
{
  if ( a2 != nullptr && result != nullptr && result != a2 )
  {
    qmemcpy(result, a2, 0xD8u);
    *result = 0;
    return (_DWORD *)__addlocaleref(result);
  }
  return result;
}

// Address: 0x10002850
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
      if ( *v2 == 0 && v2 != (volatile LONG *)&unk_1001C538 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}

// Address: 0x1000288E
volatile LONG *__updatetlocinfo()
{
  int v0; // esi
  volatile LONG *v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_1001C52C & *(_DWORD *)(v0 + 112)) != 0 && *(_DWORD *)(v0 + 108) != 0 )
  {
    v1 = *(volatile LONG **)(_getptd() + 108);
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)(v0 + 108), (volatile LONG *)off_1001C610);
    _unlock(12);
    v1 = v3;
  }
  if ( v1 == nullptr )
    _amsg_exit(32);
  return v1;
}

// Address: 0x10002904
int __cdecl _configthreadlocale(int Flag)
{
  int v1; // eax
  int v2; // ecx
  int v3; // edi
  unsigned int v5; // ecx

  v1 = _getptd();
  v2 = *(_DWORD *)(v1 + 112);
  v3 = ((v2 & 2) == 0) + 1;
  if ( Flag == -1 )
  {
    dword_1001C52C = -1;
  }
  else if ( Flag != 0 )
  {
    if ( Flag == 1 )
    {
      v5 = v2 | 2;
    }
    else
    {
      if ( Flag != 2 )
      {
        *_errno() = 22;
        _invalid_parameter(0, 0, 0, 0, 0);
        return -1;
      }
      v5 = v2 & 0xFFFFFFFD;
    }
    *(_DWORD *)(v1 + 112) = v5;
  }
  return v3;
}

// Address: 0x1000296E
int sync_legacy_variables_lk()
{
  int result; // eax

  dword_1001D010 = *((_DWORD *)off_1001C610 + 1);
  dword_1001D014 = *((_DWORD *)off_1001C610 + 2);
  dword_1001C614 = *((_DWORD *)off_1001C610 + 42);
  off_1001C9E0 = *((_UNKNOWN ***)off_1001C610 + 53);
  off_1001CA18 = *((_UNKNOWN ***)off_1001C610 + 47);
  off_1001C920 = *((wchar_t **)off_1001C610 + 50);
  result = *((_DWORD *)off_1001C610 + 43);
  dword_1001CA1C = result;
  return result;
}

// Address: 0x100029C1
void __cdecl _free_locale(_locale_t Locale)
{
  struct __crt_locale_data *locinfo; // eax

  if ( Locale != nullptr )
  {
    _lock(13);
    if ( Locale->mbcinfo != nullptr
      && InterlockedDecrement((volatile LONG *)Locale->mbcinfo) == 0
      && (_UNKNOWN *)Locale->mbcinfo != &unk_1001C008 )
    {
      free(Locale->mbcinfo);
    }
    _unlock(13);
    if ( Locale->locinfo != nullptr )
    {
      _lock(12);
      __removelocaleref((volatile LONG *)Locale->locinfo);
      locinfo = Locale->locinfo;
      if ( Locale->locinfo != nullptr && *(_DWORD *)locinfo == 0 && locinfo != (struct __crt_locale_data *)&unk_1001C538 )
        __freetlocinfo((char *)Locale->locinfo);
      _unlock(12);
    }
    Locale->locinfo = (struct __crt_locale_data *)-1163005939;
    Locale->mbcinfo = (struct __crt_multibyte_data *)-1163005939;
    free(Locale);
  }
}

// Address: 0x10002A83
void __cdecl __free_locale(_locale_t Locale)
{
  _free_locale(Locale);
}

// Address: 0x10002A8E
_locale_t __cdecl _get_current_locale()
{
  int v0; // edi
  volatile LONG **v1; // esi
  int savedregs; // [esp+2Ch] [ebp+0h]

  v0 = _getptd();
  v1 = (volatile LONG **)_calloc_crt(8u, 1);
  if ( v1 != nullptr )
  {
    __updatetlocinfo();
    __updatetmbcinfo();
    *v1 = *(volatile LONG **)(v0 + 108);
    v1[1] = *(volatile LONG **)(v0 + 104);
    _lock(12);
    __addlocaleref(*v1);
    _unlock(12);
    _lock(13);
    InterlockedIncrement(v1[1]);
    savedregs = 268446493;
    _unlock(13);
    return (_locale_t)v1;
  }
  else
  {
    *_errno() = 12;
    return nullptr;
  }
}

// Address: 0x10002B42
int sub_10002B42()
{
  return 0;
}

// Address: 0x10002B45
void __cdecl _strcats(char *Destination, rsize_t SizeInBytes, int a3)
{
  int v3; // edi
  const char **v4; // esi

  v3 = a3;
  if ( a3 > 0 )
  {
    v4 = (const char **)&a3;
    do
    {
      if ( strcat_s(Destination, SizeInBytes, *++v4) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      --v3;
    }
    while ( v3 != 0 );
  }
}

// Address: 0x10002B85
int __cdecl __lc_strtolc(char *a1, char *Str)
{
  const char *v2; // esi
  rsize_t v4; // eax
  bool i; // zf
  const char *v6; // edi
  char v7; // bl
  errno_t v8; // eax
  char *v9; // eax
  rsize_t v10; // [esp-Ch] [ebp-18h]
  const char *v12; // [esp-8h] [ebp-14h]
  rsize_t v13; // [esp-4h] [ebp-10h]
  char *Stra; // [esp+18h] [ebp+Ch]

  memset(a1, 0, 0x90u);
  v2 = Str;
  if ( *Str == 0 )
    return 0;
  if ( *Str == 46 && Str[1] != 0 )
  {
    if ( strncpy_s(a1 + 128, 0x10u, Str + 1, 0xFu) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    a1[143] = 0;
    return 0;
  }
  Stra = nullptr;
  v4 = strcspn(Str, "_.,");
  for ( i = v4 == 0; !i; i = v4 == 0 )
  {
    v6 = &v2[v4];
    v7 = v2[v4];
    if ( Stra != nullptr )
    {
      if ( Stra == (char *)1 )
      {
        if ( v4 >= 0x40 || v7 == 95 )
          return -1;
        v13 = v4;
        v12 = v2;
        v10 = 64;
        v9 = a1 + 64;
      }
      else
      {
        if ( Stra != (char *)2 || v4 >= 0x10 || v7 != 0 && v7 != 44 )
          return -1;
        v13 = v4;
        v12 = v2;
        v10 = 16;
        v9 = a1 + 128;
      }
      v8 = strncpy_s(v9, v10, v12, v13);
    }
    else
    {
      if ( v4 >= 0x40 || v7 == 46 )
        return -1;
      v8 = strncpy_s(a1, 0x40u, v2, v4);
    }
    if ( v8 != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( v7 == 44 || v7 == 0 )
      return 0;
    ++Stra;
    v2 = v6 + 1;
    v4 = strcspn(v6 + 1, "_.,");
  }
  return -1;
}

// Address: 0x10002CAE
void __cdecl __lc_lctostr(char *Destination, rsize_t SizeInBytes, char *Source)
{
  if ( strcpy_s(Destination, SizeInBytes, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( Source[64] != 0 )
    _strcats(Destination, SizeInBytes, 2);
  if ( Source[128] != 0 )
    _strcats(Destination, SizeInBytes, 2);
}

// Address: 0x10002D1B
int __usercall _setlocale_get_all@<eax>(int a1@<esi>)
{
  int result; // eax
  char *v2; // edi
  int v3; // ebx
  void *Block; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h]
  const char **v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  char **v8; // [esp+14h] [ebp-4h]

  v5 = 1;
  result = _malloc_crt(0x355u);
  Block = (void *)result;
  if ( result != 0 )
  {
    v2 = (char *)(result + 4);
    *(_BYTE *)(result + 4) = 0;
    *(_DWORD *)result = 1;
    v7 = 1;
    v3 = a1 + 16;
    v6 = (const char **)(a1 + 88);
    _strcats((char *)(result + 4), 0x351u, 3);
    v8 = off_10018994;
    do
    {
      if ( strcat_s(v2, 0x351u, ";") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcmp(*v6, *(const char **)(v3 + 88)) != 0 )
        v5 = 0;
      ++v7;
      v8 += 3;
      v3 = 16 * v7 + a1;
      v6 = (const char **)(v3 + 72);
      _strcats(v2, 0x351u, 3);
    }
    while ( (int)v8 < (int)off_100189C4 );
    if ( v5 != 0 )
    {
      free(Block);
      if ( *(_DWORD *)(a1 + 80) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 80)) == 0 )
        free(*(void **)(a1 + 80));
      if ( *(_DWORD *)(a1 + 84) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 84)) == 0 )
        free(*(void **)(a1 + 84));
      result = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 72) = 0;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 80) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 80)) == 0 )
        free(*(void **)(a1 + 80));
      if ( *(_DWORD *)(a1 + 84) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 84)) == 0 )
        free(*(void **)(a1 + 84));
      *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 80) = Block;
      *(_DWORD *)(a1 + 72) = v2;
      return (int)v2;
    }
  }
  return result;
}

// Address: 0x10002E98
char *__cdecl _expandlocale(char *Source, char *a2, rsize_t SizeInBytes, _WORD *a4, _DWORD *a5)
{
  const char *v5; // esi
  int v6; // eax
  unsigned __int16 *v7; // ebx
  size_t v9; // eax
  size_t v10; // [esp+10h] [ebp-B0h]
  _DWORD *Src; // [esp+14h] [ebp-ACh]
  char *Destination; // [esp+18h] [ebp-A8h]
  char *Str1; // [esp+28h] [ebp-98h]
  CHAR LCData[144]; // [esp+2Ch] [ebp-94h] BYREF

  v5 = Source;
  v6 = _getptd() + 156;
  Src = (_DWORD *)(v6 + 40);
  v7 = (unsigned __int16 *)(v6 + 32);
  Destination = (char *)(v6 + 44);
  Str1 = (char *)(v6 + 175);
  if ( Source == nullptr || a2 == nullptr || SizeInBytes == 0 )
    return nullptr;
  if ( *Source == 67 && Source[1] == 0 )
  {
    if ( strcpy_s(a2, SizeInBytes, "C") != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( a4 != nullptr )
    {
      *a4 = 0;
      a4[1] = 0;
      a4[2] = 0;
    }
    if ( a5 != nullptr )
      *a5 = 0;
    return a2;
  }
  v10 = strlen(Source);
  if ( v10 >= 0x83 || strcmp(Str1, Source) != 0 && strcmp(Destination, Source) != 0 )
  {
    if ( __lc_strtolc(LCData, Source) == 0 && __get_qualified_locale((int)LCData, (int)v7, LCData) != 0 )
    {
      *Src = v7[2];
      __lc_lctostr(Str1, 0x83u, LCData);
      if ( *Source == 0 || (v9 = v10, v10 >= 0x83) )
      {
        v9 = 0;
        v5 = (const char *)&unk_10018A62;
      }
      if ( strncpy_s(Destination, 0x83u, v5, v9 + 1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      goto LABEL_23;
    }
    return nullptr;
  }
LABEL_23:
  if ( a4 != nullptr )
    memcpy(a4, v7, 6u);
  if ( a5 != nullptr )
    *a5 = *Src;
  if ( strcpy_s(a2, SizeInBytes, Str1) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return Str1;
}

// Address: 0x100030C9
UINT __usercall _setlocale_set_cat@<eax>(char *Source@<ecx>, UINT *a2@<esi>, int a3)
{
  int v4; // edi
  UINT *v6; // ebx
  UINT *v7; // ecx
  int v8; // ecx
  int *v9; // eax
  int v10; // edx
  void *v11; // edx
  _DWORD *v12; // eax
  unsigned int i; // eax
  void **v14; // edi
  void *v15; // eax
  void *v16; // [esp-4h] [ebp-1D0h]
  _BYTE v17[6]; // [esp+8h] [ebp-1C4h] BYREF
  int v18; // [esp+10h] [ebp-1BCh]
  UINT v19; // [esp+18h] [ebp-1B4h]
  _WORD Src[4]; // [esp+1Ch] [ebp-1B0h] BYREF
  UINT v21; // [esp+24h] [ebp-1A8h]
  char *v22; // [esp+28h] [ebp-1A4h]
  void *v23; // [esp+30h] [ebp-19Ch]
  int v24; // [esp+34h] [ebp-198h] BYREF
  UINT *v25; // [esp+38h] [ebp-194h]
  void *Block; // [esp+3Ch] [ebp-190h]
  signed int v27; // [esp+40h] [ebp-18Ch]
  WORD Buf1[128]; // [esp+44h] [ebp-188h] BYREF
  char Sourcea[132]; // [esp+144h] [ebp-88h] BYREF

  v4 = _getptd() + 464;
  if ( _expandlocale(Source, Sourcea, 0x83u, Src, &v24) == nullptr )
    return 0;
  v6 = &a2[4 * a3];
  if ( strcmp(Sourcea, (const char *)v6[18]) != 0 )
  {
    v27 = strlen(Sourcea) + 5;
    Block = (void *)_malloc_crt(v27);
    if ( Block == nullptr )
      return 0;
    v22 = (char *)v6[18];
    v25 = &a2[a3 + 3];
    v21 = *v25;
    v23 = (char *)a2 + 6 * a3 + 36;
    memcpy(v17, v23, sizeof(v17));
    v19 = a2[1];
    if ( strcpy_s((char *)Block + 4, v27 - 4, Sourcea) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v7 = v25;
    v6[18] = (UINT)Block + 4;
    *v7 = Src[0];
    memcpy(v23, Src, 6u);
    if ( a3 == 2 )
    {
      v27 = 0;
      a2[1] = v24;
      v8 = *(_DWORD *)(v4 + 32);
      v23 = *(void **)(v4 + 36);
      v9 = (int *)v4;
      while ( a2[1] != *v9 )
      {
        v10 = *v9;
        ++v27;
        *v9 = v8;
        v18 = v10;
        v11 = (void *)v9[1];
        v9[1] = (int)v23;
        v8 = v18;
        v9 += 2;
        v23 = v11;
        if ( v27 >= 5 )
          goto LABEL_14;
      }
      if ( v27 != 0 )
      {
        v12 = (_DWORD *)(v4 + 8 * v27);
        *(_DWORD *)v4 = *v12;
        *(_DWORD *)(v4 + 4) = v12[1];
        *v12 = v8;
        v12[1] = v23;
      }
LABEL_14:
      if ( v27 == 5 )
      {
        if ( __crtGetStringTypeA(nullptr, 1u, &MultiByteStr, (char *)0x7F, Buf1, a2[1], a2[5], 1) != 0 )
        {
          for ( i = 0; i < 0x7F; ++i )
            Buf1[i] &= 0x1FFu;
          *(_DWORD *)(v4 + 4) = memcmp(Buf1, Buf2, 0xFEu) == 0;
        }
        else
        {
          *(_DWORD *)(v4 + 4) = 0;
        }
        *(_DWORD *)v4 = a2[1];
      }
      a2[42] = *(_DWORD *)(v4 + 4);
    }
    if ( a3 == 1 )
      a2[2] = v24;
    if ( (*(&off_10018990 + 3 * a3))() != 0 )
    {
      v16 = Block;
      v6[18] = (UINT)v22;
      free(v16);
      *v25 = v21;
      a2[1] = v19;
      return 0;
    }
    if ( v22 != Str2 )
    {
      v14 = (void **)&a2[4 * a3 + 20];
      if ( InterlockedDecrement((volatile LONG *)*v14) == 0 )
      {
        free(*v14);
        free((void *)v6[21]);
        v6[19] = 0;
      }
    }
    v15 = Block;
    *(_DWORD *)Block = 1;
    a2[4 * a3 + 20] = (UINT)v15;
  }
  return v6[18];
}

// Address: 0x100033CB
char *__fastcall _setlocale_nolock(char *Source, UINT *a2, int a3)
{
  int v3; // ebx
  UINT *v4; // esi
  char *result; // eax
  const char *v6; // edi
  char *v7; // eax
  char *v8; // ebx
  size_t v9; // eax
  const char **v10; // esi
  const char *v11; // ebx
  rsize_t v12; // edi
  const char *v13; // edi
  const char **v14; // edi
  int v16; // [esp+10h] [ebp-94h]
  int v17; // [esp+14h] [ebp-90h]
  size_t v18; // [esp+14h] [ebp-90h]
  int v19; // [esp+18h] [ebp-8Ch]
  char Destination[132]; // [esp+1Ch] [ebp-88h] BYREF

  v3 = 0;
  v4 = a2;
  if ( a3 != 0 )
  {
    if ( Source != nullptr )
      return (char *)_setlocale_set_cat(Source, a2, a3);
    else
      return (char *)a2[4 * a3 + 18];
  }
  v17 = 1;
  v19 = 0;
  if ( Source == nullptr )
    return (char *)_setlocale_get_all((int)v4);
  if ( *Source == 76 && Source[1] == 67 && Source[2] == 95 )
  {
    v6 = Source;
    do
    {
      v7 = strpbrk(v6, "=;");
      v8 = v7;
      if ( v7 == nullptr )
        return nullptr;
      v9 = v7 - v6;
      v18 = v9;
      if ( v9 == 0 || *v8 == 59 )
        return nullptr;
      v16 = 1;
      v10 = (const char **)off_10018994;
      while ( strncmp(*v10, v6, v9) != 0 || v18 != strlen(*v10) )
      {
        ++v16;
        v10 += 3;
        if ( (int)v10 > (int)off_100189C4 )
          break;
        v9 = v18;
      }
      v11 = v8 + 1;
      v12 = strcspn(v11, ";");
      if ( v12 == 0 && *v11 != 59 )
        return nullptr;
      if ( v16 <= 5 )
      {
        if ( strncpy_s(Destination, 0x83u, v11, v12) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        Destination[v12] = 0;
        if ( _setlocale_set_cat(Destination, a2, v16) != 0 )
          ++v19;
      }
      v13 = &v11[v12];
      if ( *v13 == 0 )
        break;
      v6 = v13 + 1;
    }
    while ( *v6 != 0 );
    result = nullptr;
    if ( v19 == 0 )
      return result;
    v4 = a2;
    return (char *)_setlocale_get_all((int)v4);
  }
  result = _expandlocale(Source, Destination, 0x83u, nullptr, nullptr);
  if ( result != nullptr )
  {
    v14 = (const char **)(v4 + 18);
    do
    {
      if ( v3 != 0 )
      {
        if ( strcmp(Destination, *v14) == 0 || _setlocale_set_cat(Destination, v4, v3) != 0 )
          ++v19;
        else
          v17 = 0;
      }
      ++v3;
      v14 += 4;
    }
    while ( v3 <= 5 );
    result = nullptr;
    if ( v17 != 0 || v19 != 0 )
      return (char *)_setlocale_get_all((int)v4);
  }
  return result;
}

// Address: 0x100035E6
_locale_t __cdecl _create_locale(int Category, const char *Locale)
{
  __crt_locale_pointers *v2; // esi
  struct __crt_locale_data *v4; // eax
  struct __crt_multibyte_data *v5; // eax

  if ( (unsigned int)Category > 5 || Locale == nullptr )
    return nullptr;
  v2 = (__crt_locale_pointers *)_calloc_crt(8u, 1);
  if ( v2 == nullptr )
  {
LABEL_4:
    *_errno() = 12;
    return nullptr;
  }
  v4 = (struct __crt_locale_data *)_calloc_crt(0xD8u, 1);
  v2->locinfo = v4;
  if ( v4 == nullptr )
  {
    free(v2);
    goto LABEL_4;
  }
  v5 = (struct __crt_multibyte_data *)_calloc_crt(0x220u, 1);
  v2->mbcinfo = v5;
  if ( v5 == nullptr )
  {
    free(v2->locinfo);
    free(v2);
    goto LABEL_4;
  }
  _copytlocinfo_nolock(v2->locinfo, &dword_1001C538);
  if ( _setlocale_nolock((char *)Locale, (UINT *)v2->locinfo, Category) != nullptr )
  {
    if ( _setmbcp_nolock(*((_DWORD *)v2->locinfo + 1), (_DWORD *)v2->mbcinfo) == 0 )
    {
      *(_DWORD *)v2->mbcinfo = 1;
      *(_DWORD *)v2->mbcinfo = 1;
      return v2;
    }
    free(v2->mbcinfo);
    __removelocaleref((volatile LONG *)v2->locinfo);
    __freetlocinfo((char *)v2->locinfo);
    free(v2);
  }
  else
  {
    __removelocaleref((volatile LONG *)v2->locinfo);
    __freetlocinfo((char *)v2->locinfo);
    free(v2);
  }
  return nullptr;
}

// Address: 0x100036DB
_locale_t __cdecl __create_locale(int Category, const char *Locale)
{
  return _create_locale(Category, Locale);
}

// Address: 0x100036E6
char *__cdecl setlocale(int Category, const char *Locale)
{
  int v3; // esi
  UINT *v4; // edi
  char *v5; // [esp+14h] [ebp-20h]

  v5 = nullptr;
  if ( (unsigned int)Category <= 5 )
  {
    v3 = _getptd();
    __updatetlocinfo();
    *(_DWORD *)(v3 + 112) |= 0x10u;
    v4 = (UINT *)_calloc_crt(0xD8u, 1);
    if ( v4 != nullptr )
    {
      _lock(12);
      _copytlocinfo_nolock(v4, *(_DWORD **)(v3 + 108));
      _unlock(12);
      v5 = _setlocale_nolock((char *)Locale, v4, Category);
      if ( v5 != nullptr )
      {
        if ( Locale != nullptr && strcmp(Locale, Str2) != 0 )
          dword_1001CFF4 = 1;
        _lock(12);
        _updatetlocinfoEx_nolock((volatile LONG **)(v3 + 108), (volatile LONG *)v4);
        __removelocaleref((volatile LONG *)v4);
        if ( (*(_BYTE *)(v3 + 112) & 2) == 0 && (dword_1001C52C & 1) == 0 )
        {
          _updatetlocinfoEx_nolock((volatile LONG **)&off_1001C610, *(volatile LONG **)(v3 + 108));
          memcpy(&unk_1001CFF8, (char *)off_1001C610 + 12, 0x18u);
          sync_legacy_variables_lk();
        }
        _unlock(12);
      }
      else
      {
        __removelocaleref((volatile LONG *)v4);
        __freetlocinfo((char *)v4);
      }
    }
    *(_DWORD *)(v3 + 112) &= ~0x10u;
    return v5;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return nullptr;
  }
}

// Address: 0x10003856
HMODULE __cdecl _crt_wait_module_handle(LPCWSTR lpModuleName)
{
  HMODULE result; // eax

  result = GetModuleHandleW(lpModuleName);
  if ( result == nullptr )
    return (HMODULE)_crt_waiting_on_module_handle(lpModuleName);
  return result;
}

// Address: 0x10003870
int __cdecl _encode_pointer(int a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  FARPROC ProcAddress; // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001C620 != -1
    && (v6 = dword_1001C620, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
  {
    ProcAddress = *(FARPROC *)(v2 + 504);
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
    ProcAddress = GetProcAddress(ModuleHandleW, "EncodePointer");
  }
  if ( ProcAddress != nullptr )
    return ((int (__stdcall *)(int))ProcAddress)(a1);
  return a1;
}

// Address: 0x100038E2
int _encoded_null()
{
  return _encode_pointer(0);
}

// Address: 0x100038EB
int __cdecl _decode_pointer(int a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  FARPROC ProcAddress; // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001C620 != -1
    && (v6 = dword_1001C620, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
  {
    ProcAddress = *(FARPROC *)(v2 + 508);
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
    ProcAddress = GetProcAddress(ModuleHandleW, "DecodePointer");
  }
  if ( ProcAddress != nullptr )
    return ((int (__stdcall *)(int))ProcAddress)(a1);
  return a1;
}

// Address: 0x1000395D
// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}

// Address: 0x10003966
int __stdcall __fls_getvalue(int a1)
{
  int (__stdcall *Value)(int); // eax

  Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
  return Value(a1);
}

// Address: 0x10003980
int sub_10003980()
{
  return dword_1001C620;
}

// Address: 0x10003986
void *__set_flsgetvalue()
{
  void *Value; // esi

  Value = TlsGetValue(dwTlsIndex);
  if ( Value == nullptr )
  {
    Value = (void *)_decode_pointer((int)lpTlsValue);
    TlsSetValue(dwTlsIndex, Value);
  }
  return Value;
}

// Address: 0x100039BA
int __stdcall __fls_setvalue(int a1, int a2)
{
  int (__stdcall *v2)(int, int); // eax

  v2 = (int (__stdcall *)(int, int))_decode_pointer(dword_1001D020);
  return v2(a1, a2);
}

// Address: 0x100039D7
int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_1001C620 != -1 )
  {
    v2 = dword_1001C620;
    v0 = (void (__stdcall *)(int))_decode_pointer(dword_1001D024);
    v0(v2);
    dword_1001C620 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}

// Address: 0x10003A14
int __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleW; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]
  int savedregs; // [esp+2Ch] [ebp+0h]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
  hModule = ModuleHandleW;
  *(_DWORD *)(a1 + 92) = &unk_10018B08;
  *(_DWORD *)(a1 + 20) = 1;
  if ( ModuleHandleW != nullptr )
  {
    *(_DWORD *)(a1 + 504) = GetProcAddress(ModuleHandleW, "EncodePointer");
    *(_DWORD *)(a1 + 508) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 200) = 67;
  *(_BYTE *)(a1 + 331) = 67;
  *(_DWORD *)(a1 + 104) = &unk_1001C008;
  _lock(13);
  InterlockedIncrement(*(volatile LONG **)(a1 + 104));
  _unlock(13);
  _lock(12);
  *(_DWORD *)(a1 + 108) = a2;
  if ( a2 == 0 )
    *(_DWORD *)(a1 + 108) = off_1001C610;
  __addlocaleref(*(volatile LONG **)(a1 + 108));
  savedregs = 268450525;
  return _unlock(12);
}

// Address: 0x10003AFB
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
  v9 = dword_1001C620;
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
      v8 = dword_1001C620;
      v5 = (int (__stdcall *)(int, DWORD *))_decode_pointer(dword_1001D020);
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

// Address: 0x10003B74
DWORD *_getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( v0 == nullptr )
    _amsg_exit(16);
  return v0;
}

// Address: 0x10003B8E
void __stdcall _freefls(void *Block)
{
  void *v1; // edi
  char *v2; // edi

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
    if ( *((_UNKNOWN **)Block + 23) != &unk_10018B08 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = *((void **)Block + 26);
    if ( v1 != nullptr && InterlockedDecrement(*((volatile LONG **)Block + 26)) == 0 && v1 != &unk_1001C008 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = *((char **)Block + 27);
    if ( v2 != nullptr )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != (char *)off_1001C610 && v2 != (char *)&dword_1001C538 && *(_DWORD *)v2 == 0 )
        __freetlocinfo(v2);
    }
    _unlock(12);
    free(Block);
  }
}

// Address: 0x10003CBD
DWORD __cdecl _freeptd(void *Block)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_1001C620 != -1 )
  {
    if ( Block == nullptr && TlsGetValue(dwTlsIndex) != nullptr )
    {
      v4 = dword_1001C620;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      Block = (void *)Value(v4);
    }
    v5 = dword_1001C620;
    v2 = (void (__stdcall *)(int, _DWORD))_decode_pointer(dword_1001D020);
    v2(v5, 0);
    _freefls(Block);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, nullptr);
  return result;
}

// Address: 0x10003D2B
// attributes: thunk
DWORD __stdcall GetCurrentThreadId()
{
  return __imp_GetCurrentThreadId();
}

// Address: 0x10003D31
// attributes: thunk
HANDLE __stdcall GetCurrentThread()
{
  return __imp_GetCurrentThread();
}

// Address: 0x10003D37
int _mtinit()
{
  HMODULE ModuleHandleW; // eax
  HMODULE v1; // edi
  FARPROC ProcAddress; // eax
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
    dword_1001D018 = (int)GetProcAddress(ModuleHandleW, "FlsAlloc");
    lpTlsValue = GetProcAddress(v1, "FlsGetValue");
    dword_1001D020 = (int)GetProcAddress(v1, "FlsSetValue");
    ProcAddress = GetProcAddress(v1, "FlsFree");
    dword_1001D024 = (int)ProcAddress;
    if ( dword_1001D018 == 0 || lpTlsValue == nullptr || dword_1001D020 == 0 || ProcAddress == nullptr )
    {
      lpTlsValue = TlsGetValue;
      dword_1001D018 = (int)__crtTlsAlloc;
      dword_1001D020 = (int)TlsSetValue;
      dword_1001D024 = (int)TlsFree;
    }
    v3 = TlsAlloc();
    dwTlsIndex = v3;
    if ( v3 == -1 || !TlsSetValue(v3, lpTlsValue) )
      return 0;
    _init_pointers();
    dword_1001D018 = _encode_pointer(dword_1001D018);
    lpTlsValue = (LPVOID)_encode_pointer((int)lpTlsValue);
    dword_1001D020 = _encode_pointer(dword_1001D020);
    dword_1001D024 = _encode_pointer(dword_1001D024);
    if ( _mtinitlocks() != 0 )
    {
      v4 = (int (__stdcall *)(_DWORD))_decode_pointer(dword_1001D018);
      dword_1001C620 = v4(_freefls);
      if ( dword_1001C620 != -1 )
      {
        v5 = (DWORD *)_calloc_crt(1u, 532);
        v6 = v5;
        if ( v5 != nullptr )
        {
          v11 = v5;
          v10 = dword_1001C620;
          v7 = (int (__stdcall *)(int, DWORD *))_decode_pointer(dword_1001D020);
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

// Address: 0x10003EC4
_DWORD *__cdecl _MarkAllocaS(_DWORD *a1, int a2)
{
  _DWORD *result; // eax

  result = a1;
  if ( a1 != nullptr )
  {
    *a1 = a2;
    return a1 + 2;
  }
  return result;
}

// Address: 0x10003EDA
void __cdecl _freea(void *Memory)
{
  if ( Memory != nullptr && *((_DWORD *)Memory - 2) == 56797 )
    free((char *)Memory - 8);
}

// Address: 0x10003EFA
const char *__usercall strncnt@<eax>(_BYTE *a1@<eax>, const char *a2)
{
  int v2; // ecx

  v2 = (int)a2;
  while ( v2 != 0 )
  {
    --v2;
    if ( *a1 == 0 )
      return &a2[-v2 - 1];
    ++a1;
  }
  v2 = -1;
  return &a2[-v2 - 1];
}

// Address: 0x10003F18
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
  if ( dword_1001D028 == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &String2, 1, nullptr, 0) != 0 )
    {
      dword_1001D028 = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_1001D028 = 2;
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
  if ( dword_1001D028 != 2 && dword_1001D028 != 0 )
  {
    if ( dword_1001D028 == 1 )
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

// Address: 0x100042BD
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

// Address: 0x10004302
int __cdecl _get_errno_from_oserr(int a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_1001C628[2 * i] )
      return dword_1001C62C[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x10004344
int *__cdecl _errno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != nullptr )
    return (int *)(v0 + 2);
  else
    return (int *)&unk_1001C790;
}

// Address: 0x10004357
unsigned int *__cdecl __doserrno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != nullptr )
    return v0 + 3;
  else
    return (unsigned int *)&unk_1001C794;
}

// Address: 0x1000436A
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

// Address: 0x1000438D
errno_t __cdecl _set_errno(int Value)
{
  if ( _getptd_noexit() == nullptr )
    return 12;
  *_errno() = Value;
  return 0;
}

// Address: 0x100043AE
errno_t __cdecl _get_errno(int *Value)
{
  if ( Value != nullptr )
  {
    *Value = *_errno();
    return 0;
  }
  else
  {
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}

// Address: 0x100043DD
errno_t __cdecl _set_doserrno(unsigned int Value)
{
  if ( _getptd_noexit() == nullptr )
    return 12;
  *__doserrno() = Value;
  return 0;
}

// Address: 0x100043FE
errno_t __cdecl _get_doserrno(unsigned int *Value)
{
  if ( Value != nullptr )
  {
    *Value = *__doserrno();
    return 0;
  }
  else
  {
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}

// Address: 0x1000442D
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

// Address: 0x10004465
int __cdecl isleadbyte(int C)
{
  return _isleadbyte_l(C, nullptr);
}

// Address: 0x10004478
int __cdecl _iswalpha_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 0x103u, Locale);
}

// Address: 0x10004492
int __cdecl iswalpha(wint_t C)
{
  return iswctype(C, 0x103u);
}

// Address: 0x100044A8
int __cdecl _iswupper_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 1u, Locale);
}

// Address: 0x100044BF
int __cdecl iswupper(wint_t C)
{
  return iswctype(C, 1u);
}

// Address: 0x100044D2
int __cdecl _iswlower_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 2u, Locale);
}

// Address: 0x100044E9
int __cdecl iswlower(wint_t C)
{
  return iswctype(C, 2u);
}

// Address: 0x100044FC
int __cdecl _iswdigit_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 4u, Locale);
}

// Address: 0x10004513
int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}

// Address: 0x10004526
int __cdecl _iswxdigit_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 0x80u, Locale);
}

// Address: 0x10004540
int __cdecl iswxdigit(wint_t C)
{
  return iswctype(C, 0x80u);
}

// Address: 0x10004556
int __cdecl _iswspace_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 8u, Locale);
}

// Address: 0x1000456D
int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}

// Address: 0x10004580
int __cdecl _iswpunct_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 0x10u, Locale);
}

// Address: 0x10004597
int __cdecl iswpunct(wint_t C)
{
  return iswctype(C, 0x10u);
}

// Address: 0x100045AA
int __cdecl _iswalnum_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 0x107u, Locale);
}

// Address: 0x100045C4
int __cdecl iswalnum(wint_t C)
{
  return iswctype(C, 0x107u);
}

// Address: 0x100045DA
int __cdecl _iswprint_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 0x157u, Locale);
}

// Address: 0x100045F4
int __cdecl iswprint(wint_t C)
{
  return iswctype(C, 0x157u);
}

// Address: 0x1000460A
int __cdecl _iswgraph_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 0x117u, Locale);
}

// Address: 0x10004624
int __cdecl iswgraph(wint_t C)
{
  return iswctype(C, 0x117u);
}

// Address: 0x1000463A
int __cdecl _iswcntrl_l(wint_t C, _locale_t Locale)
{
  return _iswctype_l(C, 0x20u, Locale);
}

// Address: 0x10004651
int __cdecl iswcntrl(wint_t C)
{
  return iswctype(C, 0x20u);
}

// Address: 0x10004664
int __cdecl iswascii(wint_t C)
{
  return C < 0x80u;
}

// Address: 0x10004678
int __cdecl _iswcsym_l(wint_t C, _locale_t Locale)
{
  int result; // eax

  result = _iswctype_l(C, 0x107u, Locale);
  if ( result != 0 || C == 95 )
    return 1;
  return result;
}

// Address: 0x100046A2
int __cdecl __iswcsym(wint_t C)
{
  int result; // eax

  result = iswctype(C, 0x107u);
  if ( result != 0 || C == 95 )
    return 1;
  return result;
}

// Address: 0x100046C8
int __cdecl _iswcsymf_l(wint_t C, _locale_t Locale)
{
  int result; // eax

  result = _iswctype_l(C, 0x103u, Locale);
  if ( result != 0 || C == 95 )
    return 1;
  return result;
}

// Address: 0x100046F2
int __cdecl __iswcsymf(wint_t C)
{
  int result; // eax

  result = iswctype(C, 0x103u);
  if ( result != 0 || C == 95 )
    return 1;
  return result;
}

// Address: 0x10004718
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

// Address: 0x100047D0
int __cdecl _isctype(int C, int Type)
{
  if ( dword_1001CFF4 != 0 )
    return _isctype_l(C, Type, nullptr);
  else
    return (unsigned __int16)Type & off_1001C600[C];
}

// Address: 0x10004802
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

  dword_1001D138 = v0;
  dword_1001D134 = v2;
  dword_1001D130 = v1;
  dword_1001D12C = v3;
  dword_1001D128 = v5;
  dword_1001D124 = v4;
  word_1001D150 = __SS__;
  word_1001D144 = __CS__;
  word_1001D120 = __DS__;
  word_1001D11C = __ES__;
  word_1001D118 = __FS__;
  word_1001D114 = __GS__;
  v6 = __readeflags();
  dword_1001D148 = v6;
  dword_1001D13C = vars0;
  dword_1001D140 = retaddr;
  dword_1001D14C = (int)&v10;
  dword_1001D088 = 65537;
  dword_1001D03C = retaddr;
  dword_1001D030 = -1073740791;
  dword_1001D034 = 1;
  dword_1001D080 = IsDebuggerPresent();
  sub_1000C297(1);
  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( dword_1001D080 == 0 )
    sub_1000C297(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x10004908
void __cdecl free(void *Block)
{
  int v1; // eax
  int *v2; // esi
  DWORD LastError; // eax
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_1001DA78 != 3 )
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

// Address: 0x10004996
int __cdecl wait_a_bit(DWORD dwMilliseconds)
{
  DWORD v1; // esi

  Sleep(dwMilliseconds);
  v1 = dwMilliseconds + 1000;
  if ( dwMilliseconds + 1000 > dword_1001D354 )
    return -1;
  return v1;
}

// Address: 0x100049BC
int __cdecl sub_100049BC(int a1)
{
  int result; // eax

  result = dword_1001D354;
  dword_1001D354 = a1;
  return result;
}

// Address: 0x100049D1
void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr || dword_1001D354 == 0 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_1001D354 )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}

// Address: 0x10004A16
int __cdecl _calloc_crt(size_t Size, int a2)
{
  DWORD v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = _calloc_impl(Size, a2, 0);
    if ( v3 != 0 || dword_1001D354 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001D354 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x10004A62
void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 != nullptr || Size == 0 || dword_1001D354 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001D354 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x10004AB0
void *__cdecl _recalloc_crt(void *Block, size_t Count, size_t Size)
{
  DWORD v3; // esi
  void *v4; // edi
  int v5; // eax

  v3 = 0;
  do
  {
    v4 = _recalloc(Block, Count, Size);
    if ( v4 != nullptr || Size == 0 || dword_1001D354 == 0 )
      break;
    Sleep(v3);
    v5 = v3 + 1000;
    if ( v3 + 1000 > dword_1001D354 )
      v5 = -1;
    v3 = v5;
  }
  while ( v5 != -1 );
  return v4;
}

// Address: 0x10004B02
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

// Address: 0x10004B32
int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer((int)off_1001C798);
  return v1(255);
}

// Address: 0x10004B5B
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

// Address: 0x10004B86
void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x10004B9E
int _lockexit()
{
  return _lock(8);
}

// Address: 0x10004BA7
int _unlockexit()
{
  return _unlock(8);
}

// Address: 0x10004BB0
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

// Address: 0x10004BCD
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

// Address: 0x10004BF1
int __cdecl sub_10004BF1(_DWORD *a1)
{
  if ( a1 != nullptr && dword_1001D37C != 0 )
  {
    *a1 = dword_1001D37C;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}

// Address: 0x10004C2D
int __cdecl sub_10004C2D(_DWORD *a1)
{
  if ( a1 != nullptr && dword_1001D378 != 0 )
  {
    *a1 = dword_1001D378;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}

// Address: 0x10004C69
int __cdecl _cinit(int a1)
{
  int result; // eax
  _PVFV *savedregs; // [esp+4h] [ebp+0h]

  if ( dword_1001DBFC != nullptr && _IsNonwritableInCurrentImage(&dword_1001DBFC) != 0 )
    dword_1001DBFC(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&dword_10018208, (_PIFV *)&Last);
  if ( result == 0 )
  {
    atexit(sub_100055F3);
    _initterm((_PVFV *)&First, savedregs);
    if ( dword_1001DC00 != nullptr && _IsNonwritableInCurrentImage(&dword_1001DC00) != 0 )
      dword_1001DC00(0, 2, 0);
    return 0;
  }
  return result;
}

// Address: 0x10004CEE
void __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  unsigned int v3; // edi
  int *v4; // esi
  void (*v5)(void); // edi
  int v6; // edi
  int v7; // eax
  _PVFV *v8; // [esp+0h] [ebp-38h]
  unsigned int v9; // [esp+10h] [ebp-28h]
  int *v10; // [esp+18h] [ebp-20h]
  unsigned int v11; // [esp+1Ch] [ebp-1Ch]

  _lock(8);
  if ( dword_1001D388 != 1 )
  {
    dword_1001D384 = 1;
    byte_1001D380 = a3;
    if ( a2 == 0 )
    {
      v3 = _decode_pointer(dword_1001DBF4);
      v9 = v3;
      if ( v3 != 0 )
      {
        v4 = (int *)_decode_pointer(dword_1001DBF0);
        v11 = v3;
        v10 = v4;
        while ( (unsigned int)--v4 >= v3 )
        {
          if ( *v4 != _encoded_null() )
          {
            if ( (unsigned int)v4 < v3 )
              break;
            v5 = (void (*)(void))_decode_pointer(*v4);
            *v4 = _encoded_null();
            v5();
            v6 = _decode_pointer(dword_1001DBF4);
            v7 = _decode_pointer(dword_1001DBF0);
            if ( v11 != v6 || v10 != (int *)v7 )
            {
              v11 = v6;
              v9 = v6;
              v10 = (int *)v7;
              v4 = (int *)v7;
            }
            v3 = v9;
          }
        }
      }
      _initterm((_PVFV *)&dword_10018624, v8);
    }
    _initterm((_PVFV *)&dword_1001882C, v8);
  }
  if ( a3 != 0 )
    _unlock(8);
  if ( a3 == 0 )
  {
    dword_1001D388 = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
}

// Address: 0x10004E1A
void __cdecl __noreturn exit(int Code)
{
  doexit(Code, 0, 0);
}

// Address: 0x10004E30
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x10004E46
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x10004E55
void __cdecl _c_exit()
{
  doexit(0, 1, 1);
}

// Address: 0x10004E64
void (__cdecl __noreturn *_init_pointers())(int Code)
{
  int v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null();
  sub_1000E3D2(v0);
  sub_1000E363(v0);
  sub_10006FFA(v0);
  sub_1000E354(v0);
  sub_1000E0BE(v0);
  _initp_misc_winsig(v0);
  nullsub_1(v0);
  _initp_eh_hooks(v0);
  result = (void (__cdecl __noreturn *)(int))_encode_pointer((int)_exit);
  off_1001C798 = result;
  return result;
}

// Address: 0x10004EB2
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
  dword_1001DAE0[0] = v0;
  uNumber = 32;
  for ( i = v0 + 2048; v0 < i; i = dword_1001DAE0[0] + 2048 )
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
      v5 = &dword_1001DAE0[k];
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
        v7 = dword_1001DAE0[k >> 5] + ((k & 0x1F) << 6);
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
    v9 = dword_1001DAE0[0] + (m << 6);
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

// Address: 0x10005106
void _ioterm()
{
  void **v0; // esi
  char *v1; // edi
  unsigned int i; // eax

  v0 = (void **)dword_1001DAE0;
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
  while ( (int)v0 < (int)&dword_1001DBE0 );
}

// Address: 0x10005154
int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( dword_1001DBF8 == 0 )
    __initmbctable();
  v0 = Str;
  v1 = 0;
  if ( Str != nullptr )
  {
    while ( *v0 != 0 )
    {
      if ( *v0 != 61 )
        ++v1;
      v0 += strlen(v0) + 1;
    }
    v3 = (char **)_calloc_crt(v1 + 1, 4);
    dword_1001D368 = v3;
    if ( v3 != nullptr )
    {
      for ( i = Str; ; i += v6 )
      {
        if ( *i == 0 )
        {
          free(Str);
          Str = nullptr;
          *v3 = nullptr;
          dword_1001DBE0 = 1;
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
      free(dword_1001D368);
      dword_1001D368 = nullptr;
      return -1;
    }
  }
  return -1;
}

// Address: 0x10005232
int __cdecl sub_10005232(int a1)
{
  dword_1001D378 = a1;
  return a1;
}

// Address: 0x10005241
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

// Address: 0x100053DB
int _setargv()
{
  int v0; // edi
  size_t v1; // eax
  char **v2; // esi
  size_t v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( dword_1001DBF8 == 0 )
    __initmbctable();
  byte_1001D494 = 0;
  GetModuleFileNameA(nullptr, Filename, 0x104u);
  dword_1001D378 = (int)Filename;
  if ( dword_1001DC18 == 0 || (v6 = (char *)dword_1001DC18, *(_BYTE *)dword_1001DC18 == 0) )
    v6 = Filename;
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
  dword_1001D35C = v5 - 1;
  dword_1001D360 = (int)v2;
  return 0;
}

// Address: 0x10005496
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

  v0 = dword_1001D498;
  v1 = nullptr;
  EnvironmentStringsW = nullptr;
  if ( dword_1001D498 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      dword_1001D498 = 1;
      goto LABEL_8;
    }
    if ( GetLastError() == 120 )
    {
      v0 = 2;
      dword_1001D498 = 2;
    }
    else
    {
      v0 = dword_1001D498;
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
  memcpy(v9, v8, cbMultiBytea);
  FreeEnvironmentStringsA(v8);
  return (CHAR *)v10;
}

// Address: 0x100055CD
int (*sub_100055CD())(void)
{
  int (*result)(void); // eax
  int (**v1)(void); // edi

  result = (int (*)(void))&unk_1001AB04;
  v1 = (int (**)(void))&unk_1001AB04;
  if ( &unk_1001AB04 < (_UNKNOWN *)dword_1001AC04 )
  {
    do
    {
      result = *v1;
      if ( *v1 != nullptr )
        result = (int (*)(void))result();
      ++v1;
    }
    while ( v1 < dword_1001AC04 );
  }
  return result;
}

// Address: 0x100055F3
void __cdecl sub_100055F3()
{
  void (**v0)(void); // edi

  v0 = (void (**)(void))&unk_1001AD0C;
  if ( &unk_1001AD0C < (_UNKNOWN *)dword_1001AE0C )
  {
    do
    {
      if ( *v0 != nullptr )
        (*v0)();
      ++v0;
    }
    while ( v0 < dword_1001AE0C );
  }
}

// Address: 0x10005619
int sub_10005619()
{
  return 1;
}

// Address: 0x1000561D
int __cdecl _heap_init(int a1)
{
  int result; // eax

  result = (int)HeapCreate(a1 == 0, 0x1000u, 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    dword_1001DA78 = 1;
    return 1;
  }
  return result;
}

// Address: 0x1000564D
BOOL _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi
  BOOL result; // eax

  if ( dword_1001DA78 == 3 )
  {
    v0 = 0;
    if ( dword_1001DA48 > 0 )
    {
      v1 = (LPVOID *)((char *)lpMem + 16);
      do
      {
        VirtualFree(*(v1 - 1), 0, 0x8000u);
        HeapFree(hHeap, 0, *v1);
        v1 += 5;
        ++v0;
      }
      while ( v0 < dword_1001DA48 );
    }
    HeapFree(hHeap, 0, lpMem);
  }
  result = HeapDestroy(hHeap);
  hHeap = nullptr;
  return result;
}

// Address: 0x100056C1
HANDLE sub_100056C1()
{
  return hHeap;
}

// Address: 0x100056C7
void nullsub_1()
{
  ;
}

// Address: 0x100056C8
_DWORD *__usercall xcptlookup@<eax>(int a1@<edx>, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  do
  {
    if ( *result == a1 )
      break;
    result += 3;
  }
  while ( result < &a2[3 * dword_1001C7F0] );
  if ( result >= &a2[3 * dword_1001C7F0] || *result != a1 )
    return nullptr;
  return result;
}

// Address: 0x100056FD
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
    while ( v5 < &v4[3 * dword_1001C7F0] );
    if ( v5 < &v4[3 * dword_1001C7F0] && *v5 == a1 )
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
            v9 = dword_1001C7E4;
            if ( dword_1001C7E4 < dword_1001C7E4 + dword_1001C7E8 )
            {
              v10 = 12 * dword_1001C7E4;
              do
              {
                *(_DWORD *)(v10 + v3[23] + 8) = 0;
                ++v9;
                v10 += 12;
              }
              while ( v9 < dword_1001C7E4 + dword_1001C7E8 );
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

// Address: 0x1000585D
int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}

// Address: 0x10005880
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_1000DA70;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x100058C5
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { retn }
}

// Address: 0x100058E0
int __usercall ValidateLocalCookies@<eax>(int a1@<edi>)
{
  return *(_DWORD *)(a1 + 8);
}

// Address: 0x10005910
int __cdecl SEH_1000DA70(int a1, _DWORD *TargetFrame, int a3)
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
            && dword_1001DA6C != nullptr
            && _IsNonwritableInCurrentImage(&dword_1001DA6C) != 0 )
          {
            dword_1001DA6C(a1, 1);
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

// Address: 0x10005A9C
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
    dword_1001C004 = ~v4;
  }
  else
  {
    dword_1001C004 = ~__security_cookie;
  }
}

// Address: 0x10005B40
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
  if ( (_BYTE)Val == 0 && Size >= 0x100 && dword_1001DA28 != 0 )
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

// Address: 0x10005BBA
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

  v8 = dword_1001D4A0;
  v9 = nullptr;
  v10 = v7;
  if ( dword_1001D4A0 == 0 )
  {
    if ( GetStringTypeW(1u, &String2, 1, CharType) )
    {
      dword_1001D4A0 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v8 = 2;
      dword_1001D4A0 = 2;
    }
    else
    {
      v8 = dword_1001D4A0;
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

// Address: 0x10005D74
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

// Address: 0x10005DB6
int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_1001D4A8;
  while ( 1 )
  {
    if ( dword_1001C804[2 * v0] == 1 )
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

// Address: 0x10005E01
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
  while ( (int)v0 < (int)&off_1001C920 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 != nullptr && v2[1] == (LPCRITICAL_SECTION)1 )
      DeleteCriticalSection(*v2);
    v2 += 2;
  }
  while ( (int)v2 < (int)&off_1001C920 );
}

// Address: 0x10005E58
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}

// Address: 0x10005E7B
void __noreturn sub_10005E7B()
{
  __crtExitProcess(0xFFu);
}

// Address: 0x10005E87
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

// Address: 0x10005F4A
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 == nullptr && _mtinitlocknum(a1) == 0 )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}

// Address: 0x10005F7D
void *sub_10005F7D()
{
  return off_1001C924;
}

// Address: 0x10005F83
const unsigned __int16 *__cdecl __pctype_func()
{
  DWORD *v0; // ecx
  volatile LONG *v1; // eax

  v0 = _getptd();
  v1 = (volatile LONG *)v0[27];
  if ( v1 != (volatile LONG *)off_1001C610 && (dword_1001C52C & v0[28]) == 0 )
    v1 = __updatetlocinfo();
  return *((const unsigned __int16 **)v1 + 50);
}

// Address: 0x10005FAC
int __usercall _get_lc_time@<eax>(int a1@<eax>, int a2@<esi>)
{
  LCID v2; // ecx
  LCID v3; // edx
  int result; // eax
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  int v39; // edi
  int v40; // edi
  int v41; // edi
  int v42; // edi
  int v43; // edi
  int v44; // edi
  int v45; // edi
  int v46; // edi
  int v47; // edi
  LCID v48; // ebx
  _DWORD v49[2]; // [esp+0h] [ebp-10h] BYREF
  LCID v50; // [esp+8h] [ebp-8h]
  LCID v51; // [esp+Ch] [ebp-4h]

  v2 = *(unsigned __int16 *)(a1 + 66);
  v3 = *(unsigned __int16 *)(a1 + 68);
  v51 = v2;
  v50 = v3;
  if ( a2 == 0 )
    return -1;
  v49[1] = 0;
  v49[0] = a1;
  v5 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v2, 0x31u, a2 + 4);
  v6 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x32u, a2 + 8) | v5;
  v7 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x33u, a2 + 12) | v6;
  v8 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x34u, a2 + 16) | v7;
  v9 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x35u, a2 + 20) | v8;
  v10 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x36u, a2 + 24) | v9;
  v11 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x37u, a2) | v10;
  v12 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Au, a2 + 32) | v11;
  v13 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Bu, a2 + 36) | v12;
  v14 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Cu, a2 + 40) | v13;
  v15 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Du, a2 + 44) | v14;
  v16 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Eu, a2 + 48) | v15;
  v17 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Fu, a2 + 52) | v16;
  v18 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x30u, a2 + 28) | v17;
  v19 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x44u, a2 + 56) | v18;
  v20 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x45u, a2 + 60) | v19;
  v21 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x46u, a2 + 64) | v20;
  v22 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x47u, a2 + 68) | v21;
  v23 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x48u, a2 + 72) | v22;
  v24 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x49u, a2 + 76) | v23;
  v25 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Au, a2 + 80) | v24;
  v26 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Bu, a2 + 84) | v25;
  v27 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Cu, a2 + 88) | v26;
  v28 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Du, a2 + 92) | v27;
  v29 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Eu, a2 + 96) | v28;
  v30 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Fu, a2 + 100) | v29;
  v31 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x38u, a2 + 104) | v30;
  v32 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x39u, a2 + 108) | v31;
  v33 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Au, a2 + 112) | v32;
  v34 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Bu, a2 + 116) | v33;
  v35 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Cu, a2 + 120) | v34;
  v36 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Du, a2 + 124) | v35;
  v37 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Eu, a2 + 128) | v36;
  v38 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Fu, a2 + 132) | v37;
  v39 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x40u, a2 + 136) | v38;
  v40 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x41u, a2 + 140) | v39;
  v41 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x42u, a2 + 144) | v40;
  v42 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x43u, a2 + 148) | v41;
  v43 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x28u, a2 + 152) | v42;
  v44 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x29u, a2 + 156) | v43;
  v45 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v50, 0x1Fu, a2 + 160) | v44;
  v46 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v50, 0x20u, a2 + 164) | v45;
  v47 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v50, 0x1003u, a2 + 168) | v46;
  v48 = v50;
  result = __getlocaleinfo((struct localeinfo_struct *)v49, 0, v50, 0x1009u, a2 + 176) | v47;
  *(_DWORD *)(a2 + 172) = v48;
  return result;
}

// Address: 0x100063C7
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

// Address: 0x1000655C
int __cdecl __init_time(int a1)
{
  void **v1; // esi
  int v3; // edi

  if ( *(_DWORD *)(a1 + 32) != 0 )
  {
    v1 = (void **)_calloc_crt(1u, 184);
    if ( v1 == nullptr )
      return 1;
    if ( _get_lc_time(a1, (int)v1) != 0 )
    {
      __free_lc_time(v1);
      free(v1);
      return 1;
    }
    v1[45] = (void *)1;
  }
  else
  {
    v1 = (void **)&off_1001C928;
  }
  v3 = a1 + 212;
  if ( *(_UNKNOWN ***)(a1 + 212) != &off_1001C928 )
    InterlockedDecrement((volatile LONG *)(*(_DWORD *)v3 + 180));
  *(_DWORD *)v3 = v1;
  return 0;
}

// Address: 0x10006608
void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)a1 != off_1001C9E8 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_1001C9EC )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_1001C9F0 )
      free(v1);
  }
}

// Address: 0x1000664D
int __cdecl __init_numeric(unsigned __int16 *Block)
{
  char **v2; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // esi
  LCID v7; // edi
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  char v11; // cl
  char *v12; // esi
  _DWORD v13[2]; // [esp+Ch] [ebp-18h] BYREF
  char **v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch]
  void *v16; // [esp+1Ch] [ebp-8h]
  _DWORD *v17; // [esp+20h] [ebp-4h]
  char **Blocka; // [esp+2Ch] [ebp+8h]

  v13[0] = Block;
  v13[1] = 0;
  if ( *((_DWORD *)Block + 7) != 0 || *((_DWORD *)Block + 6) != 0 )
  {
    v2 = (char **)_calloc_crt(1u, 48);
    Blocka = v2;
    if ( v2 == nullptr )
      return 1;
    qmemcpy(v2, *((const void **)Block + 47), 0x30u);
    v4 = _malloc_crt(4u);
    v16 = v4;
    if ( v4 == nullptr )
    {
      free(Blocka);
      return 1;
    }
    *v4 = 0;
    if ( *((_DWORD *)Block + 7) == 0 )
    {
      *Blocka = (char *)off_1001C9E8;
      Blocka[1] = (char *)off_1001C9EC;
      v17 = nullptr;
      Blocka[2] = (char *)off_1001C9F0;
LABEL_26:
      *(_DWORD *)v16 = 1;
      if ( v17 != nullptr )
        *v17 = 1;
      goto LABEL_28;
    }
    v5 = _malloc_crt(4u);
    v17 = v5;
    if ( v5 == nullptr )
    {
      v6 = 1;
LABEL_11:
      free(Blocka);
      free(v16);
      return v6;
    }
    *v5 = 0;
    v7 = Block[31];
    v15 = __getlocaleinfo((struct localeinfo_struct *)v13, 1, v7, 0xEu, Blocka);
    v8 = __getlocaleinfo((struct localeinfo_struct *)v13, 1, v7, 0xFu, Blocka + 1);
    v15 |= v8;
    v14 = Blocka + 2;
    v9 = __getlocaleinfo((struct localeinfo_struct *)v13, 1, v7, 0x10u, Blocka + 2);
    if ( (v15 | v9) != 0 )
    {
      __free_lconv_num((int)Blocka);
      v6 = -1;
      goto LABEL_11;
    }
    v10 = *v14;
    while ( 1 )
    {
      if ( *v10 == 0 )
        goto LABEL_26;
      v11 = *v10;
      if ( *v10 >= 48 && v11 <= 57 )
        break;
      if ( v11 == 59 )
      {
        v12 = v10;
        do
        {
          *v12 = v12[1];
          ++v12;
        }
        while ( *v12 != 0 );
      }
      else
      {
LABEL_18:
        ++v10;
      }
    }
    *v10 = v11 - 48;
    goto LABEL_18;
  }
  v17 = nullptr;
  v16 = nullptr;
  Blocka = (char **)&off_1001C9E8;
LABEL_28:
  if ( *((_DWORD *)Block + 45) != 0 )
    InterlockedDecrement(*((volatile LONG **)Block + 45));
  if ( *((_DWORD *)Block + 44) != 0 && InterlockedDecrement(*((volatile LONG **)Block + 44)) == 0 )
  {
    free(*((void **)Block + 44));
    free(*((void **)Block + 47));
  }
  *((_DWORD *)Block + 45) = v17;
  *((_DWORD *)Block + 44) = v16;
  *((_DWORD *)Block + 47) = Blocka;
  return 0;
}

// Address: 0x1000684A
void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_1001C9F4 )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_1001C9F8 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_1001C9FC )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_1001CA00 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_1001CA04 )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_1001CA08 )
      free(*(void **)(a1 + 32));
    v1 = *(void **)(a1 + 36);
    if ( v1 != off_1001CA0C )
      free(v1);
  }
}

// Address: 0x100068D8
int __cdecl __init_monetary(int a1)
{
  int v1; // esi
  char *v2; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  LCID v6; // esi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  char *v21; // eax
  char v22; // cl
  char *v23; // esi
  _DWORD *v24; // ecx
  _DWORD v25[2]; // [esp+Ch] [ebp-10h] BYREF
  void *Block; // [esp+14h] [ebp-8h]
  void *v27; // [esp+18h] [ebp-4h]

  v1 = a1;
  v27 = nullptr;
  v25[0] = a1;
  v25[1] = 0;
  if ( *(_DWORD *)(a1 + 24) != 0 || *(_DWORD *)(a1 + 28) != 0 )
  {
    v2 = (char *)_calloc_crt(1u, 48);
    if ( v2 == nullptr )
      return 1;
    v4 = _malloc_crt(4u);
    Block = v4;
    if ( v4 == nullptr )
    {
      free(v2);
      return 1;
    }
    *v4 = 0;
    if ( *(_DWORD *)(a1 + 24) == 0 )
    {
      qmemcpy(v2, &off_1001C9E8, 48);
LABEL_25:
      v1 = a1;
      *(_DWORD *)v2 = **(_DWORD **)(a1 + 188);
      *((_DWORD *)v2 + 1) = *(_DWORD *)(*(_DWORD *)(a1 + 188) + 4);
      v24 = Block;
      *((_DWORD *)v2 + 2) = *(_DWORD *)(*(_DWORD *)(a1 + 188) + 8);
      *v24 = 1;
      if ( v27 != nullptr )
        *(_DWORD *)v27 = 1;
      goto LABEL_27;
    }
    v5 = _malloc_crt(4u);
    v27 = v5;
    if ( v5 == nullptr )
    {
      free(v2);
      free(Block);
      return 1;
    }
    *v5 = 0;
    v6 = *(unsigned __int16 *)(a1 + 56);
    v7 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x15u, v2 + 12);
    v8 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x14u, v2 + 16) | v7;
    v9 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x16u, v2 + 20) | v8;
    v10 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x17u, v2 + 24) | v9;
    v11 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x18u, v2 + 28) | v10;
    v12 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x50u, v2 + 32) | v11;
    v13 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x51u, v2 + 36) | v12;
    v14 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x1Au, v2 + 40) | v13;
    v15 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x19u, v2 + 41) | v14;
    v16 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x54u, v2 + 42) | v15;
    v17 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x55u, v2 + 43) | v16;
    v18 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x56u, v2 + 44) | v17;
    v19 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x57u, v2 + 45) | v18;
    v20 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x52u, v2 + 46) | v19;
    if ( (v20 | __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x53u, v2 + 47)) != 0 )
    {
      __free_lconv_mon((int)v2);
      free(v2);
      free(Block);
      free(v27);
      return 1;
    }
    v21 = *((char **)v2 + 7);
    while ( 1 )
    {
      if ( *v21 == 0 )
        goto LABEL_25;
      v22 = *v21;
      if ( *v21 >= 48 && v22 <= 57 )
        break;
      if ( v22 == 59 )
      {
        v23 = v21;
        do
        {
          *v23 = v23[1];
          ++v23;
        }
        while ( *v23 != 0 );
      }
      else
      {
LABEL_17:
        ++v21;
      }
    }
    *v21 = v22 - 48;
    goto LABEL_17;
  }
  v27 = nullptr;
  Block = nullptr;
  v2 = (char *)&off_1001C9E8;
LABEL_27:
  if ( *(_DWORD *)(v1 + 184) != 0 )
    InterlockedDecrement(*(volatile LONG **)(v1 + 184));
  if ( *(_DWORD *)(v1 + 176) != 0 && InterlockedDecrement(*(volatile LONG **)(v1 + 176)) == 0 )
  {
    free(*(void **)(v1 + 188));
    free(*(void **)(v1 + 176));
  }
  *(_DWORD *)(v1 + 184) = v27;
  *(_DWORD *)(v1 + 176) = Block;
  *(_DWORD *)(v1 + 188) = v2;
  return 0;
}

// Address: 0x10006B9E
int __cdecl __init_ctype(int a1)
{
  int v1; // ebx
  void *v2; // eax
  int i; // eax
  BYTE *v4; // eax
  int v5; // ecx
  int v6; // edi
  char *v7; // eax
  _BYTE *v8; // edi
  char *v9; // ecx
  bool v10; // cc
  _BYTE *v11; // edx
  BYTE *v12; // ecx
  BYTE v13; // dl
  unsigned int v14; // ecx
  char *j; // ecx
  void *v16; // eax
  UINT v18; // [esp-Ch] [ebp-64h]
  _DWORD v19[2]; // [esp+Ch] [ebp-4Ch] BYREF
  _BYTE *v20; // [esp+14h] [ebp-44h]
  char *v21; // [esp+18h] [ebp-40h]
  char *v22; // [esp+1Ch] [ebp-3Ch]
  char *v23; // [esp+20h] [ebp-38h]
  char *v24; // [esp+24h] [ebp-34h]
  int MaxCharSize_low; // [esp+28h] [ebp-30h]
  void *v26; // [esp+2Ch] [ebp-2Ch]
  void *v27; // [esp+30h] [ebp-28h]
  void *Block; // [esp+34h] [ebp-24h]
  void *v29; // [esp+38h] [ebp-20h]
  void *v30; // [esp+3Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+40h] [ebp-18h] BYREF

  v1 = 0;
  v26 = nullptr;
  v30 = nullptr;
  v29 = nullptr;
  v27 = nullptr;
  Block = nullptr;
  v19[0] = a1;
  v19[1] = 0;
  if ( *(_DWORD *)(a1 + 20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) == 0
      && __getlocaleinfo((struct localeinfo_struct *)v19, 0, *(unsigned __int16 *)(a1 + 48), 0x1004u, a1 + 4) != 0 )
    {
      goto $error_cleanup$28330;
    }
    v26 = _malloc_crt(4u);
    v30 = (void *)_calloc_crt(0x180u, 2);
    v29 = (void *)_calloc_crt(0x180u, 1);
    v27 = (void *)_calloc_crt(0x180u, 1);
    v2 = (void *)_calloc_crt(0x101u, 1);
    Block = v2;
    if ( v26 == nullptr )
      goto $error_cleanup$28330;
    if ( v30 == nullptr )
      goto $error_cleanup$28330;
    if ( v2 == nullptr )
      goto $error_cleanup$28330;
    if ( v29 == nullptr )
      goto $error_cleanup$28330;
    if ( v27 == nullptr )
      goto $error_cleanup$28330;
    *(_DWORD *)v26 = 0;
    for ( i = 0; i < 256; ++i )
      *((_BYTE *)Block + i) = i;
    if ( !GetCPInfo(*(_DWORD *)(a1 + 4), &CPInfo) || CPInfo.MaxCharSize > 5 )
      goto $error_cleanup$28330;
    MaxCharSize_low = LOWORD(CPInfo.MaxCharSize);
    if ( LOWORD(CPInfo.MaxCharSize) > 1u && CPInfo.LeadByte[0] != 0 )
    {
      v4 = &CPInfo.LeadByte[1];
      do
      {
        LOBYTE(v5) = *v4;
        if ( *v4 == 0 )
          break;
        v6 = *(v4 - 1);
        v5 = (unsigned __int8)v5;
        while ( v6 <= v5 )
        {
          *((_BYTE *)Block + v6) = 32;
          v5 = *v4;
          ++v6;
        }
        v4 += 2;
      }
      while ( *(v4 - 1) != 0 );
    }
    v18 = *(_DWORD *)(a1 + 4);
    v21 = (char *)v30 + 256;
    if ( __crtGetStringTypeA(nullptr, 1u, (LPCCH)Block, (char *)0x100, (LPWORD)v30 + 128, v18, 0, 0) != 0
      && __crtLCMapStringA(
           nullptr,
           *(_DWORD *)(a1 + 20),
           0x100u,
           (LPCCH)Block + 1,
           (char *)0xFF,
           (LPWSTR)((char *)v29 + 129),
           (char *)0xFF,
           *(_DWORD *)(a1 + 4),
           0) != 0
      && __crtLCMapStringA(
           nullptr,
           *(_DWORD *)(a1 + 20),
           0x200u,
           (LPCCH)Block + 1,
           (char *)0xFF,
           (LPWSTR)((char *)v27 + 129),
           (char *)0xFF,
           *(_DWORD *)(a1 + 4),
           0) != 0 )
    {
      v7 = (char *)v30;
      v8 = v29;
      v9 = (char *)v30 + 254;
      v10 = MaxCharSize_low <= 1;
      *((_WORD *)v30 + 127) = 0;
      v11 = v27;
      v22 = v9;
      v8[127] = 0;
      v11[127] = 0;
      v8[128] = 0;
      v20 = v8 + 128;
      v23 = v11 + 128;
      v11[128] = 0;
      if ( !v10 && CPInfo.LeadByte[0] != 0 )
      {
        v12 = &CPInfo.LeadByte[1];
        v30 = &CPInfo.LeadByte[1];
        do
        {
          v13 = *v12;
          if ( *v12 == 0 )
            break;
          v14 = *(v12 - 1);
          v29 = (void *)v14;
          if ( v14 <= v13 )
          {
            for ( j = &v7[2 * v14 + 256]; ; j = v24 )
            {
              v29 = (char *)v29 + 1;
              *(_WORD *)j = 0x8000;
              v24 = j + 2;
              if ( (int)v29 > *(unsigned __int8 *)v30 )
                break;
            }
          }
          v12 = (BYTE *)v30 + 2;
          v30 = v12;
        }
        while ( *(v12 - 1) != 0 );
      }
      memcpy(v7, v7 + 512, 0xFEu);
      memcpy(v8, v8 + 256, 0x7Fu);
      memcpy(v27, (char *)v27 + 256, 0x7Fu);
      if ( *(_DWORD *)(a1 + 192) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 192)) == 0 )
      {
        free((void *)(*(_DWORD *)(a1 + 196) - 254));
        free((void *)(*(_DWORD *)(a1 + 204) - 128));
        free((void *)(*(_DWORD *)(a1 + 208) - 128));
        free(*(void **)(a1 + 192));
      }
      v16 = v26;
      *(_DWORD *)v26 = 1;
      *(_DWORD *)(a1 + 192) = v16;
      *(_DWORD *)(a1 + 200) = v21;
      *(_DWORD *)(a1 + 196) = v22;
      *(_DWORD *)(a1 + 204) = v20;
      *(_DWORD *)(a1 + 208) = v23;
      *(_DWORD *)(a1 + 172) = MaxCharSize_low;
    }
    else
    {
$error_cleanup$28330:
      free(v26);
      free(v30);
      free(v29);
      free(v27);
      v1 = 1;
    }
    free(Block);
    return v1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 192) != 0 )
      InterlockedDecrement(*(volatile LONG **)(a1 + 192));
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 196) = 0;
    *(_DWORD *)(a1 + 200) = asc_10018C80;
    *(_DWORD *)(a1 + 204) = &unk_10019108;
    *(_DWORD *)(a1 + 208) = &unk_10019288;
    *(_DWORD *)(a1 + 172) = 1;
    return 0;
  }
}

// Address: 0x10006F40
int __cdecl ___mb_cur_max_func()
{
  DWORD *v0; // ecx
  volatile LONG *v1; // eax

  v0 = _getptd();
  v1 = (volatile LONG *)v0[27];
  if ( v1 != (volatile LONG *)off_1001C610 && (dword_1001C52C & v0[28]) == 0 )
    v1 = __updatetlocinfo();
  return *((_DWORD *)v1 + 43);
}

// Address: 0x10006F69
int __cdecl ___mb_cur_max_l_func(_locale_t Locale)
{
  if ( Locale != nullptr )
    return *((_DWORD *)Locale->locinfo + 43);
  else
    return ___mb_cur_max_func();
}

// Address: 0x10006F85
unsigned int __cdecl ___lc_codepage_func()
{
  DWORD *v0; // ecx
  volatile LONG *v1; // eax

  v0 = _getptd();
  v1 = (volatile LONG *)v0[27];
  if ( v1 != (volatile LONG *)off_1001C610 && (dword_1001C52C & v0[28]) == 0 )
    v1 = __updatetlocinfo();
  return *((_DWORD *)v1 + 1);
}

// Address: 0x10006FAB
unsigned int __cdecl ___lc_collate_cp_func()
{
  DWORD *v0; // ecx
  volatile LONG *v1; // eax

  v0 = _getptd();
  v1 = (volatile LONG *)v0[27];
  if ( v1 != (volatile LONG *)off_1001C610 && (dword_1001C52C & v0[28]) == 0 )
    v1 = __updatetlocinfo();
  return *((_DWORD *)v1 + 2);
}

// Address: 0x10006FF7
int sub_10006FF7()
{
  return 0;
}

// Address: 0x10006FFA
int __cdecl sub_10006FFA(int a1)
{
  dword_1001D5F8 = a1;
  return a1;
}

// Address: 0x10007009
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
    sub_1000C297(2);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x10007131
int __cdecl sub_10007131(int a1)
{
  int v1; // esi

  v1 = _decode_pointer(dword_1001D5F8);
  dword_1001D5F8 = _encode_pointer(a1);
  return v1;
}

// Address: 0x10007165
void __cdecl __noreturn _invoke_watson(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
}

// Address: 0x10007170
int __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))_decode_pointer(dword_1001D5F8);
  if ( v5 == nullptr )
  {
    sub_1000C297(2);
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v5();
}

// Address: 0x10007196
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x100071A6
void __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  _invalid_parameter(Expression, FunctionName, FileName, LineNo, Reserved);
}

// Address: 0x100071B1
size_t __cdecl _Getdays_l(struct localeinfo_struct *a1)
{
  int v1; // ebx
  int v2; // edi
  size_t v3; // eax
  char *v4; // esi
  unsigned int v5; // eax
  char *v6; // esi
  char *v7; // esi
  unsigned int v8; // eax
  char *v9; // esi
  const char *v11; // [esp-8h] [ebp-2Ch]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-10h]
  char v14; // [esp+18h] [ebp-Ch]
  size_t v15; // [esp+1Ch] [ebp-8h]
  unsigned int i; // [esp+20h] [ebp-4h]

  v1 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v12, a1);
  v2 = *(_DWORD *)(v12 + 212);
  i = 0;
  do
  {
    v11 = *(const char **)(4 * i + v2);
    v15 = strlen(*(const char **)(4 * i + v2 + 28));
    v3 = strlen(v11);
    ++i;
    v1 += v3 + v15 + 2;
  }
  while ( i < 7 );
  v4 = (char *)_malloc_crt(v1 + 1);
  v15 = (size_t)v4;
  if ( v4 != nullptr )
  {
    for ( i = 0; i < 7; ++i )
    {
      v5 = i;
      *v4 = 58;
      v6 = v4 + 1;
      if ( strcpy_s(v6, v15 - (_DWORD)v6 + v1 + 1, *(const char **)(v2 + 4 * v5)) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v7 = &v6[strlen(v6)];
      v8 = i;
      *v7 = 58;
      v9 = v7 + 1;
      if ( strcpy_s(v9, v15 - (_DWORD)v9 + v1 + 1, *(const char **)(v2 + 4 * v8 + 28)) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v4 = &v9[strlen(v9)];
    }
    *v4 = 0;
  }
  if ( v14 != 0 )
    *(_DWORD *)(v13 + 112) &= ~2u;
  return v15;
}

// Address: 0x100072BA
char *__cdecl _Getmonths_l(struct localeinfo_struct *a1)
{
  int v1; // ebx
  int v2; // edi
  const char **v3; // esi
  size_t v4; // eax
  bool v5; // zf
  char *v6; // esi
  const char **v7; // edi
  char *v8; // eax
  char *v9; // esi
  char *v10; // esi
  char *v11; // eax
  char *v12; // esi
  const char *v14; // [esp-8h] [ebp-30h]
  int v15; // [esp+Ch] [ebp-1Ch] BYREF
  int v16; // [esp+14h] [ebp-14h]
  char v17; // [esp+18h] [ebp-10h]
  size_t v18; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+20h] [ebp-8h]
  char *v20; // [esp+24h] [ebp-4h]

  v1 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v15, a1);
  v2 = *(_DWORD *)(v15 + 212);
  v3 = (const char **)(v2 + 56);
  v20 = (char *)(v2 + 56);
  i = 12;
  do
  {
    v14 = *v3;
    v18 = strlen(v3[12]);
    v4 = strlen(v14);
    v3 = (const char **)(v20 + 4);
    v5 = i-- == 1;
    v1 += v4 + v18 + 2;
    v20 += 4;
  }
  while ( !v5 );
  v6 = (char *)_malloc_crt(v1 + 1);
  v20 = v6;
  if ( v6 != nullptr )
  {
    v7 = (const char **)(v2 + 104);
    for ( i = 12; i != 0; --i )
    {
      v8 = v20;
      *v6 = 58;
      v9 = v6 + 1;
      if ( strcpy_s(v9, v8 - v9 + v1 + 1, *(v7 - 12)) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v10 = &v9[strlen(v9)];
      v11 = v20;
      *v10 = 58;
      v12 = v10 + 1;
      if ( strcpy_s(v12, v11 - v12 + v1 + 1, *v7) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v6 = &v12[strlen(v12)];
      ++v7;
    }
    *v6 = 0;
  }
  if ( v17 != 0 )
    *(_DWORD *)(v16 + 112) &= ~2u;
  return v20;
}

// Address: 0x100073C3
char *__cdecl _Gettnames_l(struct localeinfo_struct *a1)
{
  int v1; // edi
  const char **v2; // esi
  size_t v3; // eax
  size_t v4; // eax
  bool v5; // zf
  size_t v6; // ebx
  size_t v7; // edi
  size_t v8; // edi
  size_t v9; // edi
  char *v10; // eax
  char *v11; // ebx
  char *v12; // edi
  char *v13; // edi
  const char **v14; // eax
  size_t v15; // eax
  const char **v16; // eax
  char *v17; // edi
  size_t v18; // eax
  rsize_t v19; // eax
  char *v20; // edi
  rsize_t v21; // eax
  char *v22; // edi
  rsize_t v23; // eax
  char *v24; // edi
  rsize_t v25; // eax
  char *v26; // eax
  rsize_t v27; // ecx
  const char *v29; // [esp-8h] [ebp-38h]
  const char *v30; // [esp-8h] [ebp-38h]
  int v31; // [esp+Ch] [ebp-24h] BYREF
  int v32; // [esp+14h] [ebp-1Ch]
  char v33; // [esp+18h] [ebp-18h]
  size_t v34; // [esp+1Ch] [ebp-14h]
  const char **v35; // [esp+20h] [ebp-10h]
  int v36; // [esp+24h] [ebp-Ch]
  size_t v37; // [esp+28h] [ebp-8h]
  unsigned int v38; // [esp+2Ch] [ebp-4h]

  v1 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v31, a1);
  v2 = *(const char ***)(v31 + 212);
  v38 = 0;
  do
  {
    v29 = v2[v38];
    v34 = strlen(v2[v38 + 7]);
    v3 = strlen(v29);
    ++v38;
    v1 += v3 + v34 + 2;
  }
  while ( v38 < 7 );
  v35 = v2 + 14;
  v36 = 12;
  do
  {
    v30 = *v35;
    v34 = strlen(v35[12]);
    v4 = strlen(v30);
    ++v35;
    v5 = v36-- == 1;
    v1 += v4 + v34 + 2;
  }
  while ( !v5 );
  v6 = strlen(v2[39]);
  v7 = v1 + strlen(v2[38]) + v6 + 2;
  v8 = v7 + strlen(v2[40]) + 1;
  v9 = v8 + strlen(v2[41]) + 1;
  v37 = v9 + strlen(v2[42]) + 185;
  v10 = (char *)_malloc_crt(v37);
  v11 = v10;
  if ( v10 != nullptr )
  {
    v12 = v10 + 184;
    memcpy(v10, v2, 0xB8u);
    v38 = 0;
    v35 = (const char **)(v11 - (char *)v2);
    v36 = (int)(v2 + 7);
    do
    {
      *(_DWORD *)&v11[4 * v38] = v12;
      if ( strcpy_s(v12, v37 + v11 - v12, *(const char **)(v36 - 28)) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v13 = &v12[strlen(v12) + 1];
      v14 = (const char **)v36;
      *(const char **)((char *)v35 + v36) = v13;
      if ( strcpy_s(v13, v37 + v11 - v13, *v14) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v15 = strlen(v13);
      ++v38;
      v36 += 4;
      v12 = &v13[v15 + 1];
    }
    while ( v38 < 7 );
    v38 = (unsigned int)(v11 + 104);
    v16 = v2 + 14;
    v36 = (int)(v2 + 14);
    v34 = 12;
    while ( 1 )
    {
      *(const char **)((char *)v35 + (_DWORD)v16) = v12;
      if ( strcpy_s(v12, v37 + v11 - v12, *v16) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v17 = &v12[strlen(v12) + 1];
      *(_DWORD *)v38 = v17;
      if ( strcpy_s(v17, v37 + v11 - v17, *(const char **)(v36 + 48)) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v18 = strlen(v17);
      v36 += 4;
      v38 += 4;
      v5 = v34-- == 1;
      v12 = &v17[v18 + 1];
      if ( v5 )
        break;
      v16 = (const char **)v36;
    }
    v19 = v37 + v11 - v12;
    *((_DWORD *)v11 + 38) = v12;
    if ( strcpy_s(v12, v19, v2[38]) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v20 = &v12[strlen(v12) + 1];
    v21 = v37 + v11 - v20;
    *((_DWORD *)v11 + 39) = v20;
    if ( strcpy_s(v20, v21, v2[39]) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v22 = &v20[strlen(v20) + 1];
    v23 = v37 + v11 - v22;
    *((_DWORD *)v11 + 40) = v22;
    if ( strcpy_s(v22, v23, v2[40]) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v24 = &v22[strlen(v22) + 1];
    v25 = v37 + v11 - v24;
    *((_DWORD *)v11 + 41) = v24;
    if ( strcpy_s(v24, v25, v2[41]) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v26 = &v24[strlen(v24) + 1];
    v27 = v37 + v11 - v26;
    *((_DWORD *)v11 + 42) = v26;
    if ( strcpy_s(v26, v27, v2[42]) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  if ( v33 != 0 )
    *(_DWORD *)(v32 + 112) &= ~2u;
  return v11;
}

// Address: 0x10007723
_DWORD *__usercall _store_str@<eax>(_DWORD *result@<eax>, _BYTE *a2@<edx>, _DWORD *a3@<ecx>)
{
  for ( ; *result != 0; --*result )
  {
    if ( *a2 == 0 )
      break;
    *(_BYTE *)(*a3)++ = *a2++;
  }
  return result;
}

// Address: 0x10007743
void __usercall _store_number(int a1@<eax>, char **a2@<edi>, _DWORD *a3@<esi>)
{
  char *v3; // ecx
  int v4; // et2
  char *v5; // eax
  char *v6; // ecx
  char v7; // dl

  v3 = *a2;
  if ( *a3 > 1u )
  {
    do
    {
      v4 = a1 % 10;
      a1 /= 10;
      *v3++ = v4 + 48;
      --*a3;
    }
    while ( a1 > 0 && *a3 > 1u );
  }
  v5 = *a2;
  *a2 = v3;
  v6 = v3 - 1;
  do
  {
    v7 = *v6;
    *v6-- = *v5;
    *v5++ = v7;
  }
  while ( v5 < v6 );
}

// Address: 0x10007779
void __usercall _store_num(int a1@<eax>, unsigned int a2@<edx>, unsigned int *a3@<ecx>, char **a4@<edi>, int a5)
{
  char *v5; // esi
  int v6; // et2
  char *v7; // eax
  char *v8; // esi
  char v9; // cl
  unsigned int v10; // esi
  int v11; // et2
  int v12; // [esp+8h] [ebp-4h]

  v12 = 0;
  if ( a5 != 0 )
  {
    v5 = *a4;
    if ( *a3 > 1 )
    {
      do
      {
        v6 = a1 % 10;
        a1 /= 10;
        *v5++ = v6 + 48;
        --*a3;
      }
      while ( a1 > 0 && *a3 > 1 );
    }
    v7 = *a4;
    *a4 = v5;
    v8 = v5 - 1;
    do
    {
      v9 = *v8;
      *v8-- = *v7;
      *v7++ = v9;
    }
    while ( v7 < v8 );
  }
  else if ( a2 >= *a3 )
  {
    *a3 = 0;
  }
  else
  {
    v10 = a2 - 1;
    if ( a2 != 0 )
    {
      do
      {
        v11 = a1 % 10;
        a1 /= 10;
        ++v12;
        (*a4)[v10--] = v11 + 48;
      }
      while ( v10 != -1 );
    }
    *a4 += v12;
    *a3 -= v12;
  }
}

// Address: 0x100077F4
BOOL __usercall _expandtime@<eax>(
        char a1@<al>,
        const struct tm *a2@<edx>,
        char **a3@<ecx>,
        struct localeinfo_struct *a4,
        unsigned int *a5,
        struct tm *a6,
        char **a7)
{
  char **v7; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int tm_sec; // eax
  bool v15; // cc
  unsigned int v16; // esi
  _BYTE *tm_mday; // edx
  unsigned int v18; // esi
  unsigned int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  signed int v27; // eax
  int v28; // et2
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int tm_yday; // esi
  int v36; // esi
  int v37; // eax
  unsigned int v38; // esi
  unsigned int v39; // esi
  unsigned int tm_mon; // esi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int tm_year; // eax
  unsigned int tm_wday; // eax
  int tm_hour; // esi
  unsigned int v50; // [esp-8h] [ebp-18h]
  char **v51; // [esp-4h] [ebp-14h]

  v7 = a3;
  if ( a1 > 89 )
  {
    if ( a1 > 109 )
    {
      v42 = a1 - 112;
      if ( v42 == 0 )
      {
        tm_hour = a2->tm_hour;
        if ( (unsigned int)tm_hour >= 0x18 )
          goto LABEL_74;
        if ( tm_hour > 11 )
          tm_mday = (_BYTE *)a6[4].tm_mday;
        else
          tm_mday = (_BYTE *)a6[4].tm_hour;
        goto LABEL_96;
      }
      v43 = v42 - 7;
      if ( v43 == 0 )
      {
        tm_wday = a2->tm_wday;
        if ( tm_wday <= 6 )
        {
          _store_num(tm_wday, 1u, a5, a3, (int)a7);
          return true;
        }
        goto LABEL_74;
      }
      v44 = v43 - 1;
      if ( v44 == 0 )
      {
        if ( a7 != nullptr )
          v25 = _store_winword(a4, 1, a2, a3, a5, (struct __lc_time_data *)a6);
        else
          v25 = _store_winword(a4, 0, a2, a3, a5, (struct __lc_time_data *)a6);
        return v25 != 0;
      }
      v45 = v44 - 1;
      if ( v45 == 0 )
      {
        tm_year = a2->tm_year;
        if ( tm_year >= 0 )
        {
          v51 = a7;
          tm_sec = tm_year % 100;
          goto LABEL_61;
        }
        goto LABEL_74;
      }
      if ( v45 != 1 )
        return false;
    }
    else
    {
      if ( a1 == 109 )
      {
        tm_mon = a2->tm_mon;
        if ( tm_mon >= 0xC )
          goto LABEL_74;
        tm_sec = tm_mon + 1;
        goto LABEL_60;
      }
      v30 = a1 - 90;
      if ( v30 != 0 )
      {
        v31 = v30 - 7;
        if ( v31 == 0 )
        {
          v39 = a2->tm_wday;
          if ( v39 > 6 )
            goto LABEL_74;
          tm_mday = (_BYTE *)*(&a6->tm_sec + v39);
          goto LABEL_96;
        }
        v32 = v31 - 1;
        if ( v32 == 0 )
        {
          v38 = a2->tm_mon;
          if ( v38 >= 0xC )
            goto LABEL_74;
          tm_mday = (_BYTE *)*(&a6[1].tm_year + v38);
          goto LABEL_96;
        }
        v33 = v32 - 1;
        if ( v33 != 0 )
        {
          v34 = v33 - 1;
          if ( v34 != 0 )
          {
            if ( v34 != 6 )
              return false;
            tm_yday = a2->tm_yday;
            if ( tm_yday > 0x16D )
              goto LABEL_74;
            v51 = a7;
            tm_sec = tm_yday + 1;
            v50 = 3;
LABEL_62:
            _store_num(tm_sec, v50, a5, v7, (int)v51);
            return true;
          }
          v36 = a2->tm_mday;
          if ( v36 < 1 || v36 > 31 )
            goto LABEL_74;
          tm_sec = a2->tm_mday;
LABEL_60:
          v51 = a7;
LABEL_61:
          v50 = 2;
          goto LABEL_62;
        }
        if ( a7 != nullptr )
          v37 = _store_winword(a4, 1, a2, a3, a5, (struct __lc_time_data *)a6);
        else
          v37 = _store_winword(a4, 0, a2, a3, a5, (struct __lc_time_data *)a6);
        if ( v37 == 0 || *a5 == 0 )
          return false;
        *(*v7)++ = 32;
        --*a5;
        v25 = _store_winword(a4, 2, a2, v7, a5, (struct __lc_time_data *)a6);
        return v25 != 0;
      }
    }
    __tzset();
    v46 = sub_1000EB6D();
    a3 = v7;
    tm_mday = *(_BYTE **)(v46 + 4 * (a2->tm_isdst != 0));
    goto LABEL_96;
  }
  if ( a1 == 89 )
  {
    v29 = a2->tm_year;
    if ( v29 < -1900 || v29 > 8099 )
      goto LABEL_74;
    v51 = a7;
    v50 = 4;
    tm_sec = v29 % 100 + 100 * (v29 / 100 + 19);
    goto LABEL_62;
  }
  if ( a1 > 73 )
  {
    v20 = a1 - 77;
    if ( v20 != 0 )
    {
      v21 = 6;
      v22 = v20 - 6;
      if ( v22 != 0 )
      {
        v23 = v22 - 2;
        if ( v23 != 0 )
        {
          v24 = v23 - 2;
          if ( v24 != 0 )
          {
            if ( v24 != 1 )
              return false;
            v25 = _store_winword(a4, 2, a2, v7, a5, (struct __lc_time_data *)a6);
            return v25 != 0;
          }
          v26 = a2->tm_wday;
          if ( v26 > 6 )
            goto LABEL_74;
          if ( v26 != 0 )
            v21 = v26 - 1;
        }
        else
        {
          if ( a2->tm_wday > 6u )
            goto LABEL_74;
          v21 = a2->tm_wday;
        }
        v27 = a2->tm_yday;
        if ( (unsigned int)v27 <= 0x16D )
        {
          if ( v27 >= v21 )
          {
            v28 = v27 % 7;
            tm_sec = v27 / 7;
            if ( v28 >= v21 )
              ++tm_sec;
          }
          else
          {
            tm_sec = 0;
          }
          goto LABEL_60;
        }
        goto LABEL_74;
      }
      tm_sec = a2->tm_sec;
    }
    else
    {
      tm_sec = a2->tm_min;
    }
    if ( tm_sec >= 0 )
    {
      v15 = tm_sec <= 59;
LABEL_13:
      if ( v15 )
        goto LABEL_60;
    }
LABEL_74:
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return false;
  }
  if ( a1 == 73 )
  {
    v19 = a2->tm_hour;
    if ( v19 < 0x18 )
    {
      tm_sec = (int)v19 % 12;
      if ( tm_sec == 0 )
        tm_sec = 12;
      goto LABEL_60;
    }
    goto LABEL_74;
  }
  v9 = a1 - 4;
  if ( v9 == 0 )
    return true;
  v10 = v9 - 9;
  if ( v10 == 0 )
    return true;
  v11 = v10 - 24;
  if ( v11 != 0 )
  {
    v12 = v11 - 28;
    if ( v12 != 0 )
    {
      v13 = v12 - 1;
      if ( v13 != 0 )
      {
        if ( v13 == 6 )
        {
          tm_sec = a2->tm_hour;
          if ( tm_sec >= 0 )
          {
            v15 = tm_sec <= 23;
            goto LABEL_13;
          }
          goto LABEL_74;
        }
        return false;
      }
      v16 = a2->tm_mon;
      if ( v16 >= 0xC )
        goto LABEL_74;
      tm_mday = (_BYTE *)*(&a6[2].tm_isdst + v16);
    }
    else
    {
      v18 = a2->tm_wday;
      if ( v18 > 6 )
        goto LABEL_74;
      tm_mday = (_BYTE *)*(&a6->tm_yday + v18);
    }
LABEL_96:
    _store_str(a5, tm_mday, a3);
    return true;
  }
  *(*a3)++ = 37;
  --*a5;
  return true;
}

// Address: 0x10007BDC
int __cdecl _store_winword(
        struct localeinfo_struct *Locale,
        int a2,
        const struct tm *a3,
        char **a4,
        unsigned int *a5,
        struct tm *a6)
{
  const CHAR *tm_year; // edi
  int (__stdcall *v7)(LCID, DWORD, const SYSTEMTIME *, LPCSTR, LPSTR, int); // ecx
  WORD tm_min; // dx
  int v9; // eax
  int v10; // eax
  void *v11; // esp
  _DWORD *v12; // eax
  char *v13; // ebx
  int i; // eax
  char *v15; // edx
  int v16; // eax
  CHAR v18; // al
  int v19; // edx
  const CHAR *v20; // ecx
  char v21; // al
  const CHAR *v22; // edi
  CHAR v23; // al
  char *tm_mday; // edi
  LCID tm_yday; // [esp-18h] [ebp-44h]
  _DWORD v26[3]; // [esp+0h] [ebp-2Ch] BYREF
  SYSTEMTIME Date; // [esp+Ch] [ebp-20h] BYREF
  int v28; // [esp+1Ch] [ebp-10h]
  int (__stdcall *v29)(LCID, DWORD, const SYSTEMTIME *, LPCSTR, LPSTR, int); // [esp+20h] [ebp-Ch]
  void *Memory; // [esp+24h] [ebp-8h]

  if ( a2 != 0 )
  {
    if ( a2 == 1 )
      tm_year = (const CHAR *)a6[4].tm_year;
    else
      tm_year = (const CHAR *)a6[4].tm_wday;
  }
  else
  {
    tm_year = (const CHAR *)a6[4].tm_mon;
  }
  if ( a6[4].tm_isdst == 1 )
    goto LABEL_22;
  v7 = GetDateFormatA;
  if ( a2 == 2 )
    v7 = GetTimeFormatA;
  Date.wYear = LOWORD(a3->tm_year) + 1900;
  Date.wMonth = LOWORD(a3->tm_mon) + 1;
  Date.wDay = a3->tm_mday;
  Date.wHour = a3->tm_hour;
  tm_min = a3->tm_min;
  Date.wSecond = a3->tm_sec;
  Date.wMilliseconds = 0;
  tm_yday = a6[4].tm_yday;
  v29 = v7;
  Date.wMinute = tm_min;
  v9 = v7(tm_yday, 0, &Date, tm_year, nullptr, 0);
  v28 = v9;
  if ( v9 == 0 )
    goto LABEL_22;
  v10 = v9 + 8;
  if ( v10 > 1024 )
  {
    v12 = malloc(v10);
    if ( v12 == nullptr )
      goto LABEL_16;
    *v12 = 56797;
  }
  else
  {
    v11 = alloca(v10);
    v12 = v26;
    if ( v26 == nullptr )
      goto LABEL_16;
    v26[0] = 52428;
  }
  v12 += 2;
LABEL_16:
  Memory = v12;
  if ( v12 != nullptr )
  {
    v13 = (char *)v12;
    for ( i = v29(a6[4].tm_yday, 0, &Date, tm_year, (LPSTR)v12, v28) - 1; i > 0; i = v16 - 1 )
    {
      if ( *a5 == 0 )
        break;
      v15 = *a4;
      v28 = i;
      *v15 = *v13;
      ++*a4;
      v16 = v28;
      ++v13;
      --*a5;
    }
    _freea(Memory);
    return 1;
  }
LABEL_22:
  v18 = *tm_year;
  while ( *tm_year != 0 )
  {
    if ( *a5 == 0 )
      return 1;
    v19 = 0;
    Memory = nullptr;
    v20 = tm_year;
    do
    {
      ++v20;
      ++v19;
    }
    while ( *v20 == v18 );
    v29 = (int (__stdcall *)(LCID, DWORD, const SYSTEMTIME *, LPCSTR, LPSTR, int))v20;
    if ( v18 > 100 )
    {
      switch ( v18 )
      {
        case 'h':
          if ( v19 == 1 )
          {
            Memory = (void *)1;
LABEL_119:
            v21 = 73;
LABEL_120:
            if ( !_expandtime(v21, a3, a4, Locale, a5, a6, (char **)Memory) )
              return 0;
LABEL_121:
            tm_year = (const CHAR *)v29;
            goto LABEL_38;
          }
          if ( v19 == 2 )
            goto LABEL_119;
          break;
        case 'm':
          if ( v19 == 1 )
          {
            Memory = (void *)1;
LABEL_114:
            v21 = 77;
            goto LABEL_120;
          }
          if ( v19 == 2 )
            goto LABEL_114;
          break;
        case 's':
          if ( v19 == 1 )
          {
            Memory = (void *)1;
LABEL_109:
            v21 = 83;
            goto LABEL_120;
          }
          if ( v19 == 2 )
            goto LABEL_109;
          break;
        case 't':
          if ( a3->tm_hour > 11 )
            tm_mday = (char *)a6[4].tm_mday;
          else
            tm_mday = (char *)a6[4].tm_hour;
          if ( v19 == 1 && *a5 != 0 )
          {
            if ( _isleadbyte_l(*tm_mday, (_locale_t)Locale) != 0 && *a5 > 1 )
            {
              if ( tm_mday[1] == 0 )
                return 0;
              *(*a4)++ = *tm_mday;
              --*a5;
              ++tm_mday;
            }
            *(*a4)++ = *tm_mday;
            --*a5;
          }
          else
          {
            while ( *tm_mday != 0 && *a5 != 0 )
            {
              if ( _isleadbyte_l(*tm_mday, (_locale_t)Locale) != 0 && *a5 > 1 )
              {
                if ( tm_mday[1] == 0 )
                  return 0;
                *(*a4)++ = *tm_mday;
                --*a5;
                ++tm_mday;
              }
              *(*a4)++ = *tm_mday++;
              --*a5;
            }
          }
          goto LABEL_121;
        case 'y':
          if ( v19 == 2 )
          {
            v21 = 121;
            goto LABEL_120;
          }
          if ( v19 == 4 )
          {
            v21 = 89;
            goto LABEL_120;
          }
          break;
        default:
          break;
      }
    }
    else
    {
      switch ( v18 )
      {
        case 'd':
          switch ( v19 )
          {
            case 1:
              Memory = (void *)1;
LABEL_77:
              v21 = 100;
              goto LABEL_120;
            case 2:
              goto LABEL_77;
            case 3:
              v21 = 97;
              goto LABEL_120;
            case 4:
              v21 = 65;
              goto LABEL_120;
            default:
              break;
          }
          break;
        case '\'':
          tm_year += v19;
          if ( (v19 & 1) != 0 )
          {
            v23 = *tm_year;
            if ( *tm_year == 0 )
              return 1;
            while ( *a5 != 0 )
            {
              if ( v23 == 39 )
              {
                ++tm_year;
                goto LABEL_38;
              }
              if ( _isleadbyte_l(v23, (_locale_t)Locale) != 0 && *a5 > 1 )
              {
                if ( tm_year[1] == 0 )
                  return 0;
                *(*a4)++ = *tm_year;
                --*a5;
                ++tm_year;
              }
              *(*a4)++ = *tm_year++;
              --*a5;
              v23 = *tm_year;
              if ( *tm_year == 0 )
                goto LABEL_38;
            }
          }
          goto LABEL_38;
        case 'A':
          goto LABEL_53;
        case 'H':
          if ( v19 == 1 )
          {
            Memory = (void *)1;
LABEL_52:
            v21 = 72;
            goto LABEL_120;
          }
          if ( v19 == 2 )
            goto LABEL_52;
          break;
        case 'M':
          switch ( v19 )
          {
            case 1:
              Memory = (void *)1;
LABEL_47:
              v21 = 109;
              goto LABEL_120;
            case 2:
              goto LABEL_47;
            case 3:
              v21 = 98;
              goto LABEL_120;
            case 4:
              v21 = 66;
              goto LABEL_120;
            default:
              break;
          }
          break;
        case 'a':
LABEL_53:
          if ( __ascii_stricmp(tm_year, "am/pm") == 0 )
          {
            v22 = tm_year + 5;
            goto LABEL_57;
          }
          if ( __ascii_stricmp(tm_year, &unk_100194B4) == 0 )
          {
            v22 = tm_year + 3;
LABEL_57:
            v29 = (int (__stdcall *)(LCID, DWORD, const SYSTEMTIME *, LPCSTR, LPSTR, int))v22;
          }
          v21 = 112;
          goto LABEL_120;
        default:
          break;
      }
    }
    if ( _isleadbyte_l(v18, (_locale_t)Locale) != 0 && *a5 > 1 )
    {
      if ( tm_year[1] == 0 )
        return 0;
      *(*a4)++ = *tm_year;
      --*a5;
      ++tm_year;
    }
    *(*a4)++ = *tm_year++;
    --*a5;
LABEL_38:
    v18 = *tm_year;
  }
  return 1;
}

// Address: 0x1000803D
int __cdecl _Strftime_l(char *a1, int a2, char *a3, const struct tm *a4, struct tm *a5, struct localeinfo_struct *a6)
{
  int result; // eax
  int v7; // edi
  char *v8; // esi
  struct tm *v9; // eax
  char v10; // al
  char *v11; // esi
  int v12; // eax
  __crt_locale_pointers Locale; // [esp+4h] [ebp-20h] BYREF
  int v14; // [esp+Ch] [ebp-18h]
  char v15; // [esp+10h] [ebp-14h]
  char *v16; // [esp+14h] [ebp-10h]
  struct tm *v17; // [esp+18h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-8h]
  char v19[4]; // [esp+20h] [ebp-4h] BYREF

  v18 = 0;
  v16 = a1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a6);
  if ( a1 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v15 != 0 )
      *(_DWORD *)(v14 + 112) &= ~2u;
    return 0;
  }
  v7 = a2;
  if ( a2 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v15 != 0 )
      *(_DWORD *)(v14 + 112) &= ~2u;
    return 0;
  }
  v8 = a3;
  *a1 = 0;
  if ( v8 == nullptr )
    goto LABEL_35;
  v9 = a5;
  if ( a5 == nullptr )
    v9 = *((struct tm **)Locale.locinfo + 53);
  v17 = v9;
  *(_DWORD *)v19 = v7;
  if ( v7 == 0 )
  {
LABEL_30:
    *v16 = 0;
    if ( v18 == 0 && *(_DWORD *)v19 == 0 )
    {
      *_errno() = 34;
LABEL_36:
      if ( v15 != 0 )
        *(_DWORD *)(v14 + 112) &= ~2u;
      return 0;
    }
LABEL_35:
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    goto LABEL_36;
  }
  do
  {
    v10 = *v8;
    if ( *v8 == 0 )
      break;
    if ( v10 == 37 )
    {
      if ( a4 == nullptr )
        goto LABEL_35;
      v11 = v8 + 1;
      v12 = 0;
      if ( *v11 == 35 )
      {
        v12 = 1;
        ++v11;
      }
      if ( !_expandtime(*v11, a4, &a1, (struct localeinfo_struct *)&Locale, (unsigned int *)v19, v17, (char **)v12) )
      {
        if ( *(_DWORD *)v19 != 0 )
          v18 = 1;
        goto LABEL_30;
      }
      v8 = v11 + 1;
    }
    else
    {
      if ( _isleadbyte_l(v10, &Locale) != 0 && *(_DWORD *)v19 > 1u )
      {
        if ( v8[1] == 0 )
        {
          v18 = 1;
          goto LABEL_30;
        }
        *a1++ = *v8;
        --*(_DWORD *)v19;
        ++v8;
      }
      *a1++ = *v8++;
      --*(_DWORD *)v19;
    }
  }
  while ( *(_DWORD *)v19 != 0 );
  if ( *(_DWORD *)v19 == 0 )
    goto LABEL_30;
  *a1 = 0;
  result = v7 - *(_DWORD *)v19;
  if ( v15 != 0 )
    *(_DWORD *)(v14 + 112) &= ~2u;
  return result;
}

// Address: 0x100081E1
size_t __cdecl _strftime_l(char *Buffer, size_t MaxSize, const char *Format, const struct tm *Tm, _locale_t Locale)
{
  return _Strftime_l(Buffer, MaxSize, (char *)Format, Tm, nullptr, (struct localeinfo_struct *)Locale);
}

// Address: 0x10008201
size_t __cdecl strftime(char *Buffer, size_t SizeInBytes, const char *Format, const struct tm *Tm)
{
  return _Strftime_l(Buffer, SizeInBytes, (char *)Format, Tm, nullptr, nullptr);
}

// Address: 0x10008220
size_t __cdecl _Strftime(
        char *Buffer,
        size_t Max_size,
        const char *Format,
        const struct tm *Timeptr,
        void *Lc_time_arg)
{
  return _Strftime_l(Buffer, Max_size, (char *)Format, Timeptr, (struct tm *)Lc_time_arg, nullptr);
}

// Address: 0x10008240
struct lconv *__cdecl localeconv()
{
  DWORD *v0; // eax

  v0 = _getptd();
  if ( (_UNKNOWN *)v0[27] != off_1001C610 && (dword_1001C52C & v0[28]) == 0 )
    __updatetlocinfo();
  return (struct lconv *)off_1001CA18;
}

// Address: 0x10008266
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

// Address: 0x100082E0
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

// Address: 0x10008326
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

// Address: 0x100083DB
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

// Address: 0x10008450
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

// Address: 0x100084E0
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
         && dword_1001DA28 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 1000853C case 0 }
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

// Address: 0x10008845
BOOL __cdecl TranslateName(int a1, int a2, const char **a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  const char **v6; // edi

  v3 = 0;
  v4 = 1;
  while ( v3 <= a2 )
  {
    if ( v4 == 0 )
      break;
    v5 = (v3 + a2) / 2;
    v6 = (const char **)(a1 + 8 * v5);
    v4 = _stricmp(*a3, *v6);
    if ( v4 != 0 )
    {
      if ( v4 >= 0 )
        v3 = v5 + 1;
      else
        a2 = v5 - 1;
    }
    else
    {
      *a3 = (const char *)(v6 + 1);
    }
  }
  return v4 == 0;
}

// Address: 0x100088BB
UINT __usercall ProcessCodePage@<eax>(char *String@<ecx>, int a2@<edi>)
{
  CHAR *v2; // esi
  CHAR LCData[8]; // [esp+4h] [ebp-Ch] BYREF

  v2 = String;
  if ( String != nullptr && *String != 0 && strcmp(String, "ACP") != 0 )
  {
    if ( strcmp(v2, "OCP") != 0 )
      return atol(v2);
    if ( GetLocaleInfoA(*(_DWORD *)(a2 + 28), 0xBu, LCData, 8) != 0 )
    {
LABEL_6:
      v2 = LCData;
      return atol(v2);
    }
  }
  else if ( GetLocaleInfoA(*(_DWORD *)(a2 + 28), 0x1004u, LCData, 8) != 0 )
  {
    if ( strcmp(LCData, "0") != 0 )
      goto LABEL_6;
    return GetACP();
  }
  return 0;
}

// Address: 0x1000895F
int __cdecl TestDefaultCountry(__int16 a1)
{
  int v1; // eax

  v1 = 0;
  while ( a1 != word_10019C88[v1] )
  {
    if ( (unsigned int)++v1 >= 10 )
      return 1;
  }
  return 0;
}

// Address: 0x10008983
int __fastcall LcidFromHexString(int a1, char *a2)
{
  int i; // esi
  char v3; // cl

  for ( i = 0; ; i = 16 * i + v3 - 48 )
  {
    v3 = *a2;
    if ( *a2 == 0 )
      break;
    ++a2;
    if ( (unsigned __int8)(v3 - 97) > 5u )
    {
      if ( (unsigned __int8)(v3 - 65) <= 5u )
        v3 -= 7;
    }
    else
    {
      v3 -= 39;
    }
  }
  return i;
}

// Address: 0x100089B7
int __fastcall GetPrimaryLen(int a1, char *a2)
{
  int result; // eax
  char v3; // cl

  for ( result = 0; ; ++result )
  {
    v3 = *a2++;
    if ( (v3 < 65 || v3 > 90) && (unsigned __int8)(v3 - 97) > 0x19u )
      break;
  }
  return result;
}

// Address: 0x100089D2
BOOL __stdcall CountryEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  CHAR LCData[120]; // [esp+8h] [ebp-7Ch] BYREF

  v1 = _getptd() + 39;
  v3 = LcidFromHexString(v2, a1);
  if ( GetLocaleInfoA(v3, v1[5] != 0 ? 7 : 4098, LCData, 120) != 0 )
  {
    if ( _stricmp((const char *)v1[1], LCData) == 0 && TestDefaultCountry(v3) != 0 )
    {
      v1[2] |= 4u;
      v1[7] = v3;
      v1[6] = v3;
    }
    return (v1[2] & 4) == 0;
  }
  else
  {
    v1[2] = 0;
    return true;
  }
}

// Address: 0x10008A6A
BOOL __cdecl TestDefaultLanguage(int a1, int a2)
{
  char **v2; // ecx
  char **v3; // esi
  int v4; // ecx
  BOOL result; // eax
  int v6; // ecx
  char *v7; // esi
  int PrimaryLen; // edi
  CHAR LCData[120]; // [esp+4h] [ebp-7Ch] BYREF

  v3 = v2;
  result = false;
  if ( GetLocaleInfoA(a1 & 0x3FF | 0x400, 1u, LCData, 120) != 0 )
  {
    if ( a1 == LcidFromHexString(v4, LCData) )
      return true;
    if ( a2 == 0 )
      return true;
    v7 = *v3;
    PrimaryLen = GetPrimaryLen(v6, v7);
    if ( PrimaryLen != strlen(v7) )
      return true;
  }
  return result;
}

// Address: 0x10008ADE
BOOL __stdcall LangCountryEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  int v5; // edx
  BOOL v6; // eax
  const char *v7; // [esp-4h] [ebp-8Ch]
  CHAR LCData[120]; // [esp+Ch] [ebp-7Ch] BYREF

  v1 = _getptd() + 39;
  v3 = LcidFromHexString(v2, a1);
  if ( GetLocaleInfoA(v3, v1[5] != 0 ? 7 : 4098, LCData, 120) == 0 )
    goto LABEL_2;
  if ( _stricmp((const char *)v1[1], LCData) == 0 )
  {
    if ( GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 4097, LCData, 120) == 0 )
      goto LABEL_2;
    if ( _stricmp((const char *)*v1, LCData) == 0 )
    {
      v1[2] |= 0x304u;
      v1[6] = v3;
LABEL_15:
      v1[7] = v3;
      goto LABEL_16;
    }
    if ( (v1[2] & 2) != 0 )
      goto LABEL_16;
    if ( v1[3] != 0 && _strnicmp((const char *)*v1, LCData, v1[3]) == 0 )
    {
      v7 = (const char *)*v1;
      v1[2] |= 2u;
      v1[7] = v3;
      if ( strlen(v7) == v1[3] )
        v1[6] = v3;
    }
    else if ( (v1[2] & 1) == 0 && TestDefaultCountry(v3) != 0 )
    {
      v1[2] = v5 | 1;
      goto LABEL_15;
    }
  }
LABEL_16:
  if ( (v1[2] & 0x300) == 0x300 )
    return (v1[2] & 4) == 0;
  if ( GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 4097, LCData, 120) == 0 )
  {
LABEL_2:
    v1[2] = 0;
    return true;
  }
  if ( _stricmp((const char *)*v1, LCData) == 0 )
  {
    v1[2] |= 0x200u;
    if ( v1[4] != 0 )
    {
      v1[2] |= 0x100u;
      goto LABEL_30;
    }
    if ( v1[3] == 0 || strlen((const char *)*v1) != v1[3] )
    {
LABEL_29:
      v1[2] |= 0x100u;
LABEL_30:
      if ( v1[6] == 0 )
        v1[6] = v3;
      return (v1[2] & 4) == 0;
    }
    v6 = TestDefaultLanguage(v3, 1);
  }
  else
  {
    if ( v1[4] != 0 || v1[3] == 0 || _stricmp((const char *)*v1, LCData) != 0 )
      return (v1[2] & 4) == 0;
    v6 = TestDefaultLanguage(v3, 0);
  }
  if ( v6 )
    goto LABEL_29;
  return (v1[2] & 4) == 0;
}

// Address: 0x10008CB0
BOOL __stdcall LanguageEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  BOOL v5; // eax
  CHAR LCData[120]; // [esp+8h] [ebp-7Ch] BYREF

  v1 = _getptd() + 39;
  v3 = LcidFromHexString(v2, a1);
  if ( GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 4097, LCData, 120) == 0 )
  {
    v1[2] = 0;
    return true;
  }
  if ( _stricmp((const char *)*v1, LCData) == 0 )
  {
    if ( v1[4] != 0 )
    {
LABEL_11:
      v1[2] |= 4u;
      v1[6] = v3;
      v1[7] = v3;
      return (v1[2] & 4) == 0;
    }
    v5 = TestDefaultLanguage(v3, 1);
  }
  else
  {
    if ( v1[4] != 0 || v1[3] == 0 || _stricmp((const char *)*v1, LCData) != 0 )
      return (v1[2] & 4) == 0;
    v5 = TestDefaultLanguage(v3, 0);
  }
  if ( v5 )
    goto LABEL_11;
  return (v1[2] & 4) == 0;
}

// Address: 0x10008D9D
int __usercall GetLcidFromLangCountry@<eax>(int a1@<esi>)
{
  size_t v1; // eax
  bool v2; // zf
  int PrimaryLen; // eax
  int result; // eax
  const char *v5; // [esp-8h] [ebp-8h]
  int v6; // [esp-4h] [ebp-4h]

  v5 = *(const char **)(a1 + 4);
  *(_DWORD *)(a1 + 16) = strlen(*(const char **)a1) == 3;
  v1 = strlen(v5);
  *(_DWORD *)(a1 + 24) = 0;
  v2 = *(_DWORD *)(a1 + 16) == 0;
  *(_DWORD *)(a1 + 20) = v1 == 3;
  if ( v2 )
    PrimaryLen = GetPrimaryLen(v6, *(char **)a1);
  else
    PrimaryLen = 2;
  *(_DWORD *)(a1 + 12) = PrimaryLen;
  EnumSystemLocalesA(LangCountryEnumProc, 1u);
  result = *(_DWORD *)(a1 + 8);
  if ( (result & 0x100) == 0 || (result & 0x200) == 0 || (result & 7) == 0 )
    *(_DWORD *)(a1 + 8) = 0;
  return result;
}

// Address: 0x10008E04
BOOL __usercall GetLcidFromLanguage@<eax>(int a1@<esi>)
{
  BOOL v1; // eax
  int PrimaryLen; // eax
  BOOL result; // eax
  int v4; // [esp-4h] [ebp-4h]

  v1 = strlen(*(const char **)a1) == 3;
  *(_DWORD *)(a1 + 16) = v1;
  if ( v1 )
    PrimaryLen = 2;
  else
    PrimaryLen = GetPrimaryLen(v4, *(char **)a1);
  *(_DWORD *)(a1 + 12) = PrimaryLen;
  result = EnumSystemLocalesA(LanguageEnumProc, 1u);
  if ( (*(_BYTE *)(a1 + 8) & 4) == 0 )
    *(_DWORD *)(a1 + 8) = 0;
  return result;
}

// Address: 0x10008E40
int __cdecl __get_qualified_locale(int Value, _WORD *a2, LPSTR lpLCData)
{
  DWORD *v3; // eax
  int v4; // esi
  const char **v5; // edi
  _BYTE *v6; // eax
  const char *v7; // edi
  const char *v8; // edi
  LCID UserDefaultLCID; // eax
  UINT v10; // eax
  __int16 v11; // di
  int Valuea; // [esp+14h] [ebp+8h]

  v3 = _getptd();
  v4 = (int)(v3 + 39);
  if ( Value == 0 )
  {
    v3[41] |= 0x104u;
LABEL_23:
    UserDefaultLCID = GetUserDefaultLCID();
    *(_DWORD *)(v4 + 24) = UserDefaultLCID;
    *(_DWORD *)(v4 + 28) = UserDefaultLCID;
    goto LABEL_24;
  }
  v5 = (const char **)(v3 + 40);
  *(_DWORD *)v4 = Value;
  v3[40] = Value + 64;
  if ( Value != -64 && *(_BYTE *)(Value + 64) != 0 )
    TranslateName((int)&off_10019BD0, 22, (const char **)v3 + 40);
  v6 = *(_BYTE **)v4;
  *(_DWORD *)(v4 + 8) = 0;
  if ( v6 == nullptr || *v6 == 0 )
  {
    v8 = *v5;
    if ( v8 == nullptr || *v8 == 0 )
    {
      *(_DWORD *)(v4 + 8) = 260;
      goto LABEL_23;
    }
    *(_DWORD *)(v4 + 20) = strlen(v8) == 3;
    EnumSystemLocalesA(CountryEnumProc, 1u);
    if ( (*(_BYTE *)(v4 + 8) & 4) == 0 )
      *(_DWORD *)(v4 + 8) = 0;
LABEL_24:
    if ( *(_DWORD *)(v4 + 8) == 0 )
      return 0;
    goto LABEL_25;
  }
  if ( *v5 != nullptr && **v5 != 0 )
    GetLcidFromLangCountry(v4);
  else
    GetLcidFromLanguage(v4);
  if ( *(_DWORD *)(v4 + 8) == 0 )
  {
    if ( TranslateName((int)&off_100199C8, 64, (const char **)v4) )
    {
      v7 = *v5;
      if ( v7 != nullptr && *v7 != 0 )
        GetLcidFromLangCountry(v4);
      else
        GetLcidFromLanguage(v4);
    }
    goto LABEL_24;
  }
LABEL_25:
  v10 = ProcessCodePage(Value != 0 ? (char *)(Value + 128) : nullptr, v4);
  v11 = v10;
  Valuea = v10;
  if ( v10 == 0
    || v10 == 65000
    || v10 == 65001
    || !IsValidCodePage((unsigned __int16)v10)
    || !IsValidLocale(*(_DWORD *)(v4 + 24), 1u) )
  {
    return 0;
  }
  if ( a2 != nullptr )
  {
    *a2 = *(_WORD *)(v4 + 24);
    a2[1] = *(_WORD *)(v4 + 28);
    a2[2] = v11;
  }
  if ( lpLCData == nullptr )
    return 1;
  if ( *a2 == 2068 )
  {
    if ( strcpy_s(lpLCData, 0x40u, "Norwegian-Nynorsk") != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  else if ( GetLocaleInfoA(*(_DWORD *)(v4 + 24), 0x1001u, lpLCData, 64) == 0 )
  {
    return 0;
  }
  if ( GetLocaleInfoA(*(_DWORD *)(v4 + 28), 0x1002u, lpLCData + 64, 64) != 0 )
  {
    _itoa_s(Valuea, lpLCData + 128, 0x10u, 10);
    return 1;
  }
  return 0;
}

// Address: 0x10009040
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

// Address: 0x100091AD
int __usercall unaligned_memcmp@<eax>(int a1@<eax>, unsigned __int8 *a2@<edx>, int *a3@<ecx>)
{
  int v4; // eax
  int v5; // esi
  int result; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int v15; // esi
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // esi
  int v29; // ecx
  int *v30; // kr00_4
  unsigned __int8 *v31; // kr0C_4
  unsigned __int8 *v32; // edx
  int v33; // esi
  int v34; // eax
  int v35; // esi
  int v36; // esi
  int v37; // eax
  int v38; // esi
  int v39; // esi
  int v40; // eax
  int v41; // esi
  int v42; // esi
  int v43; // eax
  int v44; // esi
  int v45; // esi
  int v46; // eax
  int v47; // esi
  int v48; // esi
  int v49; // eax
  int v50; // esi
  int v51; // eax
  int v52; // esi
  int v53; // esi
  int v54; // esi
  int v55; // eax
  int v56; // esi
  int v57; // esi
  int v58; // eax
  int v59; // esi
  int v60; // esi
  int v61; // eax
  int v62; // esi
  int v63; // esi
  int v64; // eax
  int v65; // esi
  int v66; // esi
  int v67; // eax
  int v68; // esi
  int v69; // esi
  int v70; // eax
  int v71; // esi
  int v72; // esi
  int v73; // esi
  int v74; // eax
  int v75; // esi
  int v76; // esi
  int v77; // eax
  int v78; // esi
  int v79; // esi
  int v80; // eax
  int v81; // esi
  int v82; // esi
  int v83; // eax
  int v84; // esi
  int v85; // esi
  int v86; // eax
  int v87; // esi
  int v88; // esi
  int v89; // esi
  int v90; // eax
  int v91; // esi
  int v92; // esi
  int v93; // eax
  int v94; // esi
  int v95; // esi
  int v96; // eax
  int v97; // esi
  int v98; // esi
  int v99; // eax
  int v100; // esi
  int v101; // esi
  int v102; // eax
  int v103; // esi
  int v104; // esi
  int v105; // eax
  int v106; // esi
  int v107; // esi

  while ( 2 )
  {
    v30 = a3;
    v31 = a2;
    v29 = (int)a3 + a1;
    v32 = &a2[a1];
    switch ( a1 )
    {
      case 0:
        return 0;
      case 1:
        goto LABEL_269;
      case 2:
        goto LABEL_355;
      case 3:
        goto LABEL_441;
      case 4:
        goto LABEL_172;
      case 5:
        goto LABEL_257;
      case 6:
        goto LABEL_343;
      case 7:
        goto LABEL_429;
      case 8:
        goto LABEL_160;
      case 9:
        goto LABEL_245;
      case 10:
        goto LABEL_331;
      case 11:
        goto LABEL_417;
      case 12:
        goto LABEL_148;
      case 13:
        goto LABEL_233;
      case 14:
        goto LABEL_319;
      case 15:
        goto LABEL_405;
      case 16:
        goto LABEL_136;
      case 17:
        goto LABEL_221;
      case 18:
        goto LABEL_307;
      case 19:
        goto LABEL_393;
      case 20:
        goto LABEL_124;
      case 21:
        goto LABEL_209;
      case 22:
        goto LABEL_295;
      case 23:
        goto LABEL_381;
      case 24:
        goto LABEL_112;
      case 25:
        goto LABEL_197;
      case 26:
        goto LABEL_283;
      case 27:
        goto LABEL_369;
      case 28:
        if ( *(_DWORD *)(v29 - 28) == *((_DWORD *)v32 - 7) )
        {
          result = 0;
        }
        else
        {
          if ( *(unsigned __int8 *)(v29 - 28) != *(v32 - 28) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 28) > (unsigned int)*(v32 - 28)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 28) > (unsigned int)*(v32 - 28)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 27) != *(v32 - 27) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 27) > (unsigned int)*(v32 - 27)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 27) > (unsigned int)*(v32 - 27)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 26) != *(v32 - 26) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 26) > (unsigned int)*(v32 - 26)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 26) > (unsigned int)*(v32 - 26)) != 1 )
              return result;
          }
          v33 = *(unsigned __int8 *)(v29 - 25) - *(v32 - 25);
          if ( v33 != 0 )
            v33 = 2 * (*(unsigned __int8 *)(v29 - 25) > (unsigned int)*(v32 - 25)) - 1;
          result = v33;
        }
        if ( result != 0 )
          return result;
LABEL_112:
        v34 = *(_DWORD *)(v29 - 24);
        if ( v34 == *((_DWORD *)v32 - 6) )
        {
          result = 0;
        }
        else
        {
          v35 = (unsigned __int8)v34 - *(v32 - 24);
          if ( v35 != 0 )
          {
            result = 2 * ((unsigned __int8)v34 > (unsigned int)*(v32 - 24)) - 1;
            if ( 2 * (v35 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 23) != *(v32 - 23) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 23) > (unsigned int)*(v32 - 23)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 23) > (unsigned int)*(v32 - 23)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 22) != *(v32 - 22) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 22) > (unsigned int)*(v32 - 22)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 22) > (unsigned int)*(v32 - 22)) != 1 )
              return result;
          }
          v36 = *(unsigned __int8 *)(v29 - 21) - *(v32 - 21);
          if ( v36 != 0 )
            v36 = 2 * (*(unsigned __int8 *)(v29 - 21) > (unsigned int)*(v32 - 21)) - 1;
          result = v36;
        }
        if ( result != 0 )
          return result;
LABEL_124:
        v37 = *(_DWORD *)(v29 - 20);
        if ( v37 == *((_DWORD *)v32 - 5) )
        {
          result = 0;
        }
        else
        {
          v38 = (unsigned __int8)v37 - *(v32 - 20);
          if ( v38 != 0 )
          {
            result = 2 * ((unsigned __int8)v37 > (unsigned int)*(v32 - 20)) - 1;
            if ( 2 * (v38 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 19) != *(v32 - 19) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 19) > (unsigned int)*(v32 - 19)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 19) > (unsigned int)*(v32 - 19)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 18) != *(v32 - 18) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 18) > (unsigned int)*(v32 - 18)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 18) > (unsigned int)*(v32 - 18)) != 1 )
              return result;
          }
          v39 = *(unsigned __int8 *)(v29 - 17) - *(v32 - 17);
          if ( v39 != 0 )
            v39 = 2 * (*(unsigned __int8 *)(v29 - 17) > (unsigned int)*(v32 - 17)) - 1;
          result = v39;
        }
        if ( result != 0 )
          return result;
LABEL_136:
        v40 = *(_DWORD *)(v29 - 16);
        if ( v40 == *((_DWORD *)v32 - 4) )
        {
          result = 0;
        }
        else
        {
          v41 = (unsigned __int8)v40 - *(v32 - 16);
          if ( v41 != 0 )
          {
            result = 2 * ((unsigned __int8)v40 > (unsigned int)*(v32 - 16)) - 1;
            if ( 2 * (v41 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 15) != *(v32 - 15) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 15) > (unsigned int)*(v32 - 15)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 15) > (unsigned int)*(v32 - 15)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 14) != *(v32 - 14) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 14) > (unsigned int)*(v32 - 14)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 14) > (unsigned int)*(v32 - 14)) != 1 )
              return result;
          }
          v42 = *(unsigned __int8 *)(v29 - 13) - *(v32 - 13);
          if ( v42 != 0 )
            v42 = 2 * (*(unsigned __int8 *)(v29 - 13) > (unsigned int)*(v32 - 13)) - 1;
          result = v42;
        }
        if ( result != 0 )
          return result;
LABEL_148:
        v43 = *(_DWORD *)(v29 - 12);
        if ( v43 == *((_DWORD *)v32 - 3) )
        {
          result = 0;
        }
        else
        {
          v44 = (unsigned __int8)v43 - *(v32 - 12);
          if ( v44 != 0 )
          {
            result = 2 * ((unsigned __int8)v43 > (unsigned int)*(v32 - 12)) - 1;
            if ( 2 * (v44 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 11) != *(v32 - 11) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 11) > (unsigned int)*(v32 - 11)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 11) > (unsigned int)*(v32 - 11)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 10) != *(v32 - 10) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 10) > (unsigned int)*(v32 - 10)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 10) > (unsigned int)*(v32 - 10)) != 1 )
              return result;
          }
          v45 = *(unsigned __int8 *)(v29 - 9) - *(v32 - 9);
          if ( v45 != 0 )
            v45 = 2 * (*(unsigned __int8 *)(v29 - 9) > (unsigned int)*(v32 - 9)) - 1;
          result = v45;
        }
        if ( result != 0 )
          return result;
LABEL_160:
        v46 = *(_DWORD *)(v29 - 8);
        if ( v46 == *((_DWORD *)v32 - 2) )
        {
          result = 0;
        }
        else
        {
          v47 = (unsigned __int8)v46 - *(v32 - 8);
          if ( v47 != 0 )
          {
            result = 2 * ((unsigned __int8)v46 > (unsigned int)*(v32 - 8)) - 1;
            if ( 2 * (v47 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 7) != *(v32 - 7) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 7) > (unsigned int)*(v32 - 7)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 7) > (unsigned int)*(v32 - 7)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 6) != *(v32 - 6) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 6) > (unsigned int)*(v32 - 6)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 6) > (unsigned int)*(v32 - 6)) != 1 )
              return result;
          }
          v48 = *(unsigned __int8 *)(v29 - 5) - *(v32 - 5);
          if ( v48 != 0 )
            v48 = 2 * (*(unsigned __int8 *)(v29 - 5) > (unsigned int)*(v32 - 5)) - 1;
          result = v48;
        }
        if ( result != 0 )
          return result;
LABEL_172:
        v49 = *(_DWORD *)(v29 - 4);
        if ( v49 == *((_DWORD *)v32 - 1) )
        {
          result = 0;
        }
        else
        {
          v50 = (unsigned __int8)v49 - *(v32 - 4);
          if ( v50 != 0 )
          {
            result = 2 * ((unsigned __int8)v49 > (unsigned int)*(v32 - 4)) - 1;
            if ( 2 * (v50 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 3) != *(v32 - 3) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 3) > (unsigned int)*(v32 - 3)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 3) > (unsigned int)*(v32 - 3)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 2) != *(v32 - 2) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 2) > (unsigned int)*(v32 - 2)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 2) > (unsigned int)*(v32 - 2)) != 1 )
              return result;
          }
          result = *(unsigned __int8 *)(v29 - 1) - *(v32 - 1);
          if ( result != 0 )
            result = 2 * (*(unsigned __int8 *)(v29 - 1) > (unsigned int)*(v32 - 1)) - 1;
        }
        if ( result != 0 )
          return result;
        return 0;
      case 29:
        v51 = *(_DWORD *)(v29 - 29);
        if ( v51 == *(_DWORD *)(v32 - 29) )
        {
          result = 0;
        }
        else
        {
          v52 = (unsigned __int8)v51 - *(v32 - 29);
          if ( v52 != 0 )
          {
            result = 2 * ((unsigned __int8)v51 > (unsigned int)*(v32 - 29)) - 1;
            if ( 2 * (v52 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 28) != *(v32 - 28) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 28) > (unsigned int)*(v32 - 28)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 28) > (unsigned int)*(v32 - 28)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 27) != *(v32 - 27) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 27) > (unsigned int)*(v32 - 27)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 27) > (unsigned int)*(v32 - 27)) != 1 )
              return result;
          }
          v53 = *(unsigned __int8 *)(v29 - 26) - *(v32 - 26);
          if ( v53 != 0 )
            v53 = 2 * (*(unsigned __int8 *)(v29 - 26) > (unsigned int)*(v32 - 26)) - 1;
          result = v53;
        }
        if ( result != 0 )
          return result;
LABEL_197:
        if ( *(_DWORD *)(v29 - 25) == *(_DWORD *)(v32 - 25) )
        {
          result = 0;
        }
        else
        {
          if ( *(unsigned __int8 *)(v29 - 25) != *(v32 - 25) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 25) > (unsigned int)*(v32 - 25)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 25) > (unsigned int)*(v32 - 25)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 24) != *(v32 - 24) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 24) > (unsigned int)*(v32 - 24)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 24) > (unsigned int)*(v32 - 24)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 23) != *(v32 - 23) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 23) > (unsigned int)*(v32 - 23)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 23) > (unsigned int)*(v32 - 23)) != 1 )
              return result;
          }
          v54 = *(unsigned __int8 *)(v29 - 22) - *(v32 - 22);
          if ( v54 != 0 )
            v54 = 2 * (*(unsigned __int8 *)(v29 - 22) > (unsigned int)*(v32 - 22)) - 1;
          result = v54;
        }
        if ( result != 0 )
          return result;
LABEL_209:
        v55 = *(_DWORD *)(v29 - 21);
        if ( v55 == *(_DWORD *)(v32 - 21) )
        {
          result = 0;
        }
        else
        {
          v56 = (unsigned __int8)v55 - *(v32 - 21);
          if ( v56 != 0 )
          {
            result = 2 * ((unsigned __int8)v55 > (unsigned int)*(v32 - 21)) - 1;
            if ( 2 * (v56 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 20) != *(v32 - 20) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 20) > (unsigned int)*(v32 - 20)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 20) > (unsigned int)*(v32 - 20)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 19) != *(v32 - 19) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 19) > (unsigned int)*(v32 - 19)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 19) > (unsigned int)*(v32 - 19)) != 1 )
              return result;
          }
          v57 = *(unsigned __int8 *)(v29 - 18) - *(v32 - 18);
          if ( v57 != 0 )
            v57 = 2 * (*(unsigned __int8 *)(v29 - 18) > (unsigned int)*(v32 - 18)) - 1;
          result = v57;
        }
        if ( result != 0 )
          return result;
LABEL_221:
        v58 = *(_DWORD *)(v29 - 17);
        if ( v58 == *(_DWORD *)(v32 - 17) )
        {
          result = 0;
        }
        else
        {
          v59 = (unsigned __int8)v58 - *(v32 - 17);
          if ( v59 != 0 )
          {
            result = 2 * ((unsigned __int8)v58 > (unsigned int)*(v32 - 17)) - 1;
            if ( 2 * (v59 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 16) != *(v32 - 16) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 16) > (unsigned int)*(v32 - 16)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 16) > (unsigned int)*(v32 - 16)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 15) != *(v32 - 15) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 15) > (unsigned int)*(v32 - 15)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 15) > (unsigned int)*(v32 - 15)) != 1 )
              return result;
          }
          v60 = *(unsigned __int8 *)(v29 - 14) - *(v32 - 14);
          if ( v60 != 0 )
            v60 = 2 * (*(unsigned __int8 *)(v29 - 14) > (unsigned int)*(v32 - 14)) - 1;
          result = v60;
        }
        if ( result != 0 )
          return result;
LABEL_233:
        v61 = *(_DWORD *)(v29 - 13);
        if ( v61 == *(_DWORD *)(v32 - 13) )
        {
          result = 0;
        }
        else
        {
          v62 = (unsigned __int8)v61 - *(v32 - 13);
          if ( v62 != 0 )
          {
            result = 2 * ((unsigned __int8)v61 > (unsigned int)*(v32 - 13)) - 1;
            if ( 2 * (v62 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 12) != *(v32 - 12) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 12) > (unsigned int)*(v32 - 12)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 12) > (unsigned int)*(v32 - 12)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 11) != *(v32 - 11) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 11) > (unsigned int)*(v32 - 11)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 11) > (unsigned int)*(v32 - 11)) != 1 )
              return result;
          }
          v63 = *(unsigned __int8 *)(v29 - 10) - *(v32 - 10);
          if ( v63 != 0 )
            v63 = 2 * (*(unsigned __int8 *)(v29 - 10) > (unsigned int)*(v32 - 10)) - 1;
          result = v63;
        }
        if ( result != 0 )
          return result;
LABEL_245:
        v64 = *(_DWORD *)(v29 - 9);
        if ( v64 == *(_DWORD *)(v32 - 9) )
        {
          result = 0;
        }
        else
        {
          v65 = (unsigned __int8)v64 - *(v32 - 9);
          if ( v65 != 0 )
          {
            result = 2 * ((unsigned __int8)v64 > (unsigned int)*(v32 - 9)) - 1;
            if ( 2 * (v65 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 8) != *(v32 - 8) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 8) > (unsigned int)*(v32 - 8)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 8) > (unsigned int)*(v32 - 8)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 7) != *(v32 - 7) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 7) > (unsigned int)*(v32 - 7)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 7) > (unsigned int)*(v32 - 7)) != 1 )
              return result;
          }
          v66 = *(unsigned __int8 *)(v29 - 6) - *(v32 - 6);
          if ( v66 != 0 )
            v66 = 2 * (*(unsigned __int8 *)(v29 - 6) > (unsigned int)*(v32 - 6)) - 1;
          result = v66;
        }
        if ( result != 0 )
          return result;
LABEL_257:
        v67 = *(_DWORD *)(v29 - 5);
        if ( v67 == *(_DWORD *)(v32 - 5) )
        {
          result = 0;
          goto LABEL_268;
        }
        v68 = (unsigned __int8)v67 - *(v32 - 5);
        if ( v68 != 0 )
        {
          result = 2 * ((unsigned __int8)v67 > (unsigned int)*(v32 - 5)) - 1;
          if ( 2 * (v68 > 0) != 1 )
            return result;
        }
        if ( *(unsigned __int8 *)(v29 - 4) != *(v32 - 4) )
        {
          result = 2 * (*(unsigned __int8 *)(v29 - 4) > (unsigned int)*(v32 - 4)) - 1;
          if ( 2 * (*(unsigned __int8 *)(v29 - 4) > (unsigned int)*(v32 - 4)) != 1 )
            return result;
        }
        if ( *(unsigned __int8 *)(v29 - 3) != *(v32 - 3) )
        {
          result = 2 * (*(unsigned __int8 *)(v29 - 3) > (unsigned int)*(v32 - 3)) - 1;
          if ( 2 * (*(unsigned __int8 *)(v29 - 3) > (unsigned int)*(v32 - 3)) != 1 )
            return result;
        }
        v69 = *(unsigned __int8 *)(v29 - 2) - *(v32 - 2);
        if ( v69 != 0 )
          v69 = 2 * (*(unsigned __int8 *)(v29 - 2) > (unsigned int)*(v32 - 2)) - 1;
        result = v69;
        goto LABEL_268;
      case 30:
        v70 = *(_DWORD *)(v29 - 30);
        if ( v70 == *(_DWORD *)(v32 - 30) )
        {
          result = 0;
        }
        else
        {
          v71 = (unsigned __int8)v70 - *(v32 - 30);
          if ( v71 != 0 )
          {
            result = 2 * ((unsigned __int8)v70 > (unsigned int)*(v32 - 30)) - 1;
            if ( 2 * (v71 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 29) != *(v32 - 29) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 29) > (unsigned int)*(v32 - 29)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 29) > (unsigned int)*(v32 - 29)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 28) != *(v32 - 28) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 28) > (unsigned int)*(v32 - 28)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 28) > (unsigned int)*(v32 - 28)) != 1 )
              return result;
          }
          v72 = *(unsigned __int8 *)(v29 - 27) - *(v32 - 27);
          if ( v72 != 0 )
            v72 = 2 * (*(unsigned __int8 *)(v29 - 27) > (unsigned int)*(v32 - 27)) - 1;
          result = v72;
        }
        if ( result != 0 )
          return result;
LABEL_283:
        if ( *(_DWORD *)(v29 - 26) == *(_DWORD *)(v32 - 26) )
        {
          result = 0;
        }
        else
        {
          if ( *(unsigned __int8 *)(v29 - 26) != *(v32 - 26) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 26) > (unsigned int)*(v32 - 26)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 26) > (unsigned int)*(v32 - 26)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 25) != *(v32 - 25) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 25) > (unsigned int)*(v32 - 25)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 25) > (unsigned int)*(v32 - 25)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 24) != *(v32 - 24) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 24) > (unsigned int)*(v32 - 24)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 24) > (unsigned int)*(v32 - 24)) != 1 )
              return result;
          }
          v73 = *(unsigned __int8 *)(v29 - 23) - *(v32 - 23);
          if ( v73 != 0 )
            v73 = 2 * (*(unsigned __int8 *)(v29 - 23) > (unsigned int)*(v32 - 23)) - 1;
          result = v73;
        }
        if ( result != 0 )
          return result;
LABEL_295:
        v74 = *(_DWORD *)(v29 - 22);
        if ( v74 == *(_DWORD *)(v32 - 22) )
        {
          result = 0;
        }
        else
        {
          v75 = (unsigned __int8)v74 - *(v32 - 22);
          if ( v75 != 0 )
          {
            result = 2 * ((unsigned __int8)v74 > (unsigned int)*(v32 - 22)) - 1;
            if ( 2 * (v75 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 21) != *(v32 - 21) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 21) > (unsigned int)*(v32 - 21)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 21) > (unsigned int)*(v32 - 21)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 20) != *(v32 - 20) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 20) > (unsigned int)*(v32 - 20)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 20) > (unsigned int)*(v32 - 20)) != 1 )
              return result;
          }
          v76 = *(unsigned __int8 *)(v29 - 19) - *(v32 - 19);
          if ( v76 != 0 )
            v76 = 2 * (*(unsigned __int8 *)(v29 - 19) > (unsigned int)*(v32 - 19)) - 1;
          result = v76;
        }
        if ( result != 0 )
          return result;
LABEL_307:
        v77 = *(_DWORD *)(v29 - 18);
        if ( v77 == *(_DWORD *)(v32 - 18) )
        {
          result = 0;
        }
        else
        {
          v78 = (unsigned __int8)v77 - *(v32 - 18);
          if ( v78 != 0 )
          {
            result = 2 * ((unsigned __int8)v77 > (unsigned int)*(v32 - 18)) - 1;
            if ( 2 * (v78 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 17) != *(v32 - 17) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 17) > (unsigned int)*(v32 - 17)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 17) > (unsigned int)*(v32 - 17)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 16) != *(v32 - 16) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 16) > (unsigned int)*(v32 - 16)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 16) > (unsigned int)*(v32 - 16)) != 1 )
              return result;
          }
          v79 = *(unsigned __int8 *)(v29 - 15) - *(v32 - 15);
          if ( v79 != 0 )
            v79 = 2 * (*(unsigned __int8 *)(v29 - 15) > (unsigned int)*(v32 - 15)) - 1;
          result = v79;
        }
        if ( result != 0 )
          return result;
LABEL_319:
        v80 = *(_DWORD *)(v29 - 14);
        if ( v80 == *(_DWORD *)(v32 - 14) )
        {
          result = 0;
        }
        else
        {
          v81 = (unsigned __int8)v80 - *(v32 - 14);
          if ( v81 != 0 )
          {
            result = 2 * ((unsigned __int8)v80 > (unsigned int)*(v32 - 14)) - 1;
            if ( 2 * (v81 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 13) != *(v32 - 13) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 13) > (unsigned int)*(v32 - 13)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 13) > (unsigned int)*(v32 - 13)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 12) != *(v32 - 12) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 12) > (unsigned int)*(v32 - 12)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 12) > (unsigned int)*(v32 - 12)) != 1 )
              return result;
          }
          v82 = *(unsigned __int8 *)(v29 - 11) - *(v32 - 11);
          if ( v82 != 0 )
            v82 = 2 * (*(unsigned __int8 *)(v29 - 11) > (unsigned int)*(v32 - 11)) - 1;
          result = v82;
        }
        if ( result != 0 )
          return result;
LABEL_331:
        v83 = *(_DWORD *)(v29 - 10);
        if ( v83 == *(_DWORD *)(v32 - 10) )
        {
          result = 0;
        }
        else
        {
          v84 = (unsigned __int8)v83 - *(v32 - 10);
          if ( v84 != 0 )
          {
            result = 2 * ((unsigned __int8)v83 > (unsigned int)*(v32 - 10)) - 1;
            if ( 2 * (v84 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 9) != *(v32 - 9) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 9) > (unsigned int)*(v32 - 9)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 9) > (unsigned int)*(v32 - 9)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 8) != *(v32 - 8) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 8) > (unsigned int)*(v32 - 8)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 8) > (unsigned int)*(v32 - 8)) != 1 )
              return result;
          }
          v85 = *(unsigned __int8 *)(v29 - 7) - *(v32 - 7);
          if ( v85 != 0 )
            v85 = 2 * (*(unsigned __int8 *)(v29 - 7) > (unsigned int)*(v32 - 7)) - 1;
          result = v85;
        }
        if ( result != 0 )
          return result;
LABEL_343:
        v86 = *(_DWORD *)(v29 - 6);
        if ( v86 == *(_DWORD *)(v32 - 6) )
        {
          result = 0;
        }
        else
        {
          v87 = (unsigned __int8)v86 - *(v32 - 6);
          if ( v87 != 0 )
          {
            result = 2 * ((unsigned __int8)v86 > (unsigned int)*(v32 - 6)) - 1;
            if ( 2 * (v87 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 5) != *(v32 - 5) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 5) > (unsigned int)*(v32 - 5)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 5) > (unsigned int)*(v32 - 5)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 4) != *(v32 - 4) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 4) > (unsigned int)*(v32 - 4)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 4) > (unsigned int)*(v32 - 4)) != 1 )
              return result;
          }
          v88 = *(unsigned __int8 *)(v29 - 3) - *(v32 - 3);
          if ( v88 != 0 )
            v88 = 2 * (*(unsigned __int8 *)(v29 - 3) > (unsigned int)*(v32 - 3)) - 1;
          result = v88;
        }
        if ( result != 0 )
          return result;
LABEL_355:
        if ( *(_WORD *)(v29 - 2) == *((_WORD *)v32 - 1) )
          return 0;
        goto LABEL_443;
      case 31:
        if ( *(_DWORD *)(v29 - 31) == *(_DWORD *)(v32 - 31) )
        {
          result = 0;
        }
        else
        {
          if ( *(unsigned __int8 *)(v29 - 31) != *(v32 - 31) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 31) > (unsigned int)*(v32 - 31)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 31) > (unsigned int)*(v32 - 31)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 30) != *(v32 - 30) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 30) > (unsigned int)*(v32 - 30)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 30) > (unsigned int)*(v32 - 30)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 29) != *(v32 - 29) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 29) > (unsigned int)*(v32 - 29)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 29) > (unsigned int)*(v32 - 29)) != 1 )
              return result;
          }
          v89 = *(unsigned __int8 *)(v29 - 28) - *(v32 - 28);
          if ( v89 != 0 )
            v89 = 2 * (*(unsigned __int8 *)(v29 - 28) > (unsigned int)*(v32 - 28)) - 1;
          result = v89;
        }
        if ( result != 0 )
          return result;
LABEL_369:
        v90 = *(_DWORD *)(v29 - 27);
        if ( v90 == *(_DWORD *)(v32 - 27) )
        {
          result = 0;
        }
        else
        {
          v91 = (unsigned __int8)v90 - *(v32 - 27);
          if ( v91 != 0 )
          {
            result = 2 * ((unsigned __int8)v90 > (unsigned int)*(v32 - 27)) - 1;
            if ( 2 * (v91 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 26) != *(v32 - 26) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 26) > (unsigned int)*(v32 - 26)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 26) > (unsigned int)*(v32 - 26)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 25) != *(v32 - 25) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 25) > (unsigned int)*(v32 - 25)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 25) > (unsigned int)*(v32 - 25)) != 1 )
              return result;
          }
          v92 = *(unsigned __int8 *)(v29 - 24) - *(v32 - 24);
          if ( v92 != 0 )
            v92 = 2 * (*(unsigned __int8 *)(v29 - 24) > (unsigned int)*(v32 - 24)) - 1;
          result = v92;
        }
        if ( result != 0 )
          return result;
LABEL_381:
        v93 = *(_DWORD *)(v29 - 23);
        if ( v93 == *(_DWORD *)(v32 - 23) )
        {
          result = 0;
        }
        else
        {
          v94 = (unsigned __int8)v93 - *(v32 - 23);
          if ( v94 != 0 )
          {
            result = 2 * ((unsigned __int8)v93 > (unsigned int)*(v32 - 23)) - 1;
            if ( 2 * (v94 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 22) != *(v32 - 22) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 22) > (unsigned int)*(v32 - 22)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 22) > (unsigned int)*(v32 - 22)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 21) != *(v32 - 21) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 21) > (unsigned int)*(v32 - 21)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 21) > (unsigned int)*(v32 - 21)) != 1 )
              return result;
          }
          v95 = *(unsigned __int8 *)(v29 - 20) - *(v32 - 20);
          if ( v95 != 0 )
            v95 = 2 * (*(unsigned __int8 *)(v29 - 20) > (unsigned int)*(v32 - 20)) - 1;
          result = v95;
        }
        if ( result != 0 )
          return result;
LABEL_393:
        v96 = *(_DWORD *)(v29 - 19);
        if ( v96 == *(_DWORD *)(v32 - 19) )
        {
          result = 0;
        }
        else
        {
          v97 = (unsigned __int8)v96 - *(v32 - 19);
          if ( v97 != 0 )
          {
            result = 2 * ((unsigned __int8)v96 > (unsigned int)*(v32 - 19)) - 1;
            if ( 2 * (v97 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 18) != *(v32 - 18) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 18) > (unsigned int)*(v32 - 18)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 18) > (unsigned int)*(v32 - 18)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 17) != *(v32 - 17) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 17) > (unsigned int)*(v32 - 17)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 17) > (unsigned int)*(v32 - 17)) != 1 )
              return result;
          }
          v98 = *(unsigned __int8 *)(v29 - 16) - *(v32 - 16);
          if ( v98 != 0 )
            v98 = 2 * (*(unsigned __int8 *)(v29 - 16) > (unsigned int)*(v32 - 16)) - 1;
          result = v98;
        }
        if ( result != 0 )
          return result;
LABEL_405:
        v99 = *(_DWORD *)(v29 - 15);
        if ( v99 == *(_DWORD *)(v32 - 15) )
        {
          result = 0;
        }
        else
        {
          v100 = (unsigned __int8)v99 - *(v32 - 15);
          if ( v100 != 0 )
          {
            result = 2 * ((unsigned __int8)v99 > (unsigned int)*(v32 - 15)) - 1;
            if ( 2 * (v100 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 14) != *(v32 - 14) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 14) > (unsigned int)*(v32 - 14)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 14) > (unsigned int)*(v32 - 14)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 13) != *(v32 - 13) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 13) > (unsigned int)*(v32 - 13)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 13) > (unsigned int)*(v32 - 13)) != 1 )
              return result;
          }
          v101 = *(unsigned __int8 *)(v29 - 12) - *(v32 - 12);
          if ( v101 != 0 )
            v101 = 2 * (*(unsigned __int8 *)(v29 - 12) > (unsigned int)*(v32 - 12)) - 1;
          result = v101;
        }
        if ( result != 0 )
          return result;
LABEL_417:
        v102 = *(_DWORD *)(v29 - 11);
        if ( v102 == *(_DWORD *)(v32 - 11) )
        {
          result = 0;
        }
        else
        {
          v103 = (unsigned __int8)v102 - *(v32 - 11);
          if ( v103 != 0 )
          {
            result = 2 * ((unsigned __int8)v102 > (unsigned int)*(v32 - 11)) - 1;
            if ( 2 * (v103 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 10) != *(v32 - 10) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 10) > (unsigned int)*(v32 - 10)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 10) > (unsigned int)*(v32 - 10)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 9) != *(v32 - 9) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 9) > (unsigned int)*(v32 - 9)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 9) > (unsigned int)*(v32 - 9)) != 1 )
              return result;
          }
          v104 = *(unsigned __int8 *)(v29 - 8) - *(v32 - 8);
          if ( v104 != 0 )
            v104 = 2 * (*(unsigned __int8 *)(v29 - 8) > (unsigned int)*(v32 - 8)) - 1;
          result = v104;
        }
        if ( result != 0 )
          return result;
LABEL_429:
        v105 = *(_DWORD *)(v29 - 7);
        if ( v105 == *(_DWORD *)(v32 - 7) )
        {
          result = 0;
        }
        else
        {
          v106 = (unsigned __int8)v105 - *(v32 - 7);
          if ( v106 != 0 )
          {
            result = 2 * ((unsigned __int8)v105 > (unsigned int)*(v32 - 7)) - 1;
            if ( 2 * (v106 > 0) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 6) != *(v32 - 6) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 6) > (unsigned int)*(v32 - 6)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 6) > (unsigned int)*(v32 - 6)) != 1 )
              return result;
          }
          if ( *(unsigned __int8 *)(v29 - 5) != *(v32 - 5) )
          {
            result = 2 * (*(unsigned __int8 *)(v29 - 5) > (unsigned int)*(v32 - 5)) - 1;
            if ( 2 * (*(unsigned __int8 *)(v29 - 5) > (unsigned int)*(v32 - 5)) != 1 )
              return result;
          }
          v107 = *(unsigned __int8 *)(v29 - 4) - *(v32 - 4);
          if ( v107 != 0 )
            v107 = 2 * (*(unsigned __int8 *)(v29 - 4) > (unsigned int)*(v32 - 4)) - 1;
          result = v107;
        }
        if ( result == 0 )
        {
LABEL_441:
          if ( *(unsigned __int8 *)(v29 - 3) == *(v32 - 3)
            || (result = 2 * (*(unsigned __int8 *)(v29 - 3) > (unsigned int)*(v32 - 3)) - 1,
                2 * (*(unsigned __int8 *)(v29 - 3) > (unsigned int)*(v32 - 3)) == 1) )
          {
LABEL_443:
            if ( *(unsigned __int8 *)(v29 - 2) == *(v32 - 2) )
              goto LABEL_269;
            result = 2 * (*(unsigned __int8 *)(v29 - 2) > (unsigned int)*(v32 - 2)) - 1;
LABEL_268:
            if ( result == 0 )
            {
LABEL_269:
              result = *(unsigned __int8 *)(v29 - 1) - *(v32 - 1);
              if ( result != 0 )
                return 2 * (*(unsigned __int8 *)(v29 - 1) > (unsigned int)*(v32 - 1)) - 1;
            }
          }
        }
        return result;
      default:
        v4 = *v30;
        if ( *v30 == *(_DWORD *)v31 )
        {
          result = 0;
          goto LABEL_13;
        }
        v5 = (unsigned __int8)v4 - *v31;
        if ( v5 == 0 || (result = 2 * ((unsigned __int8)v4 > (unsigned int)*v31) - 1, 2 * (v5 > 0) == 1) )
        {
          if ( *((unsigned __int8 *)v30 + 1) == v31[1]
            || (result = 2 * (*((unsigned __int8 *)v30 + 1) > (unsigned int)v31[1]) - 1,
                2 * (*((unsigned __int8 *)v30 + 1) > (unsigned int)v31[1]) == 1) )
          {
            if ( *((unsigned __int8 *)v30 + 2) == v31[2]
              || (result = 2 * (*((unsigned __int8 *)v30 + 2) > (unsigned int)v31[2]) - 1,
                  2 * (*((unsigned __int8 *)v30 + 2) > (unsigned int)v31[2]) == 1) )
            {
              v7 = *((unsigned __int8 *)v30 + 3) - v31[3];
              if ( v7 != 0 )
                v7 = 2 * (*((unsigned __int8 *)v30 + 3) > (unsigned int)v31[3]) - 1;
              result = v7;
LABEL_13:
              if ( result != 0 )
                return result;
              v8 = v30[1];
              if ( v8 == *((_DWORD *)v31 + 1) )
              {
                result = 0;
              }
              else
              {
                v9 = (unsigned __int8)v8 - v31[4];
                if ( v9 != 0 )
                {
                  result = 2 * ((unsigned __int8)v8 > (unsigned int)v31[4]) - 1;
                  if ( 2 * (v9 > 0) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 5) != v31[5] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 5) > (unsigned int)v31[5]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 5) > (unsigned int)v31[5]) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 6) != v31[6] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 6) > (unsigned int)v31[6]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 6) > (unsigned int)v31[6]) != 1 )
                    return result;
                }
                v10 = *((unsigned __int8 *)v30 + 7) - v31[7];
                if ( v10 != 0 )
                  v10 = 2 * (*((unsigned __int8 *)v30 + 7) > (unsigned int)v31[7]) - 1;
                result = v10;
              }
              if ( result != 0 )
                return result;
              v11 = v30[2];
              if ( v11 == *((_DWORD *)v31 + 2) )
              {
                result = 0;
              }
              else
              {
                v12 = (unsigned __int8)v11 - v31[8];
                if ( v12 != 0 )
                {
                  result = 2 * ((unsigned __int8)v11 > (unsigned int)v31[8]) - 1;
                  if ( 2 * (v12 > 0) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 9) != v31[9] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 9) > (unsigned int)v31[9]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 9) > (unsigned int)v31[9]) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 10) != v31[10] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 10) > (unsigned int)v31[10]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 10) > (unsigned int)v31[10]) != 1 )
                    return result;
                }
                v13 = *((unsigned __int8 *)v30 + 11) - v31[11];
                if ( v13 != 0 )
                  v13 = 2 * (*((unsigned __int8 *)v30 + 11) > (unsigned int)v31[11]) - 1;
                result = v13;
              }
              if ( result != 0 )
                return result;
              v14 = v30[3];
              if ( v14 == *((_DWORD *)v31 + 3) )
              {
                result = 0;
              }
              else
              {
                v15 = (unsigned __int8)v14 - v31[12];
                if ( v15 != 0 )
                {
                  result = 2 * ((unsigned __int8)v14 > (unsigned int)v31[12]) - 1;
                  if ( 2 * (v15 > 0) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 13) != v31[13] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 13) > (unsigned int)v31[13]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 13) > (unsigned int)v31[13]) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 14) != v31[14] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 14) > (unsigned int)v31[14]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 14) > (unsigned int)v31[14]) != 1 )
                    return result;
                }
                v16 = *((unsigned __int8 *)v30 + 15) - v31[15];
                if ( v16 != 0 )
                  v16 = 2 * (*((unsigned __int8 *)v30 + 15) > (unsigned int)v31[15]) - 1;
                result = v16;
              }
              if ( result != 0 )
                return result;
              v17 = v30[4];
              if ( v17 == *((_DWORD *)v31 + 4) )
              {
                result = 0;
              }
              else
              {
                v18 = (unsigned __int8)v17 - v31[16];
                if ( v18 != 0 )
                {
                  result = 2 * ((unsigned __int8)v17 > (unsigned int)v31[16]) - 1;
                  if ( 2 * (v18 > 0) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 17) != v31[17] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 17) > (unsigned int)v31[17]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 17) > (unsigned int)v31[17]) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 18) != v31[18] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 18) > (unsigned int)v31[18]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 18) > (unsigned int)v31[18]) != 1 )
                    return result;
                }
                v19 = *((unsigned __int8 *)v30 + 19) - v31[19];
                if ( v19 != 0 )
                  v19 = 2 * (*((unsigned __int8 *)v30 + 19) > (unsigned int)v31[19]) - 1;
                result = v19;
              }
              if ( result != 0 )
                return result;
              v20 = v30[5];
              if ( v20 == *((_DWORD *)v31 + 5) )
              {
                result = 0;
              }
              else
              {
                v21 = (unsigned __int8)v20 - v31[20];
                if ( v21 != 0 )
                {
                  result = 2 * ((unsigned __int8)v20 > (unsigned int)v31[20]) - 1;
                  if ( 2 * (v21 > 0) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 21) != v31[21] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 21) > (unsigned int)v31[21]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 21) > (unsigned int)v31[21]) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 22) != v31[22] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 22) > (unsigned int)v31[22]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 22) > (unsigned int)v31[22]) != 1 )
                    return result;
                }
                v22 = *((unsigned __int8 *)v30 + 23) - v31[23];
                if ( v22 != 0 )
                  v22 = 2 * (*((unsigned __int8 *)v30 + 23) > (unsigned int)v31[23]) - 1;
                result = v22;
              }
              if ( result != 0 )
                return result;
              v23 = v30[6];
              if ( v23 == *((_DWORD *)v31 + 6) )
              {
                result = 0;
              }
              else
              {
                v24 = (unsigned __int8)v23 - v31[24];
                if ( v24 != 0 )
                {
                  result = 2 * ((unsigned __int8)v23 > (unsigned int)v31[24]) - 1;
                  if ( 2 * (v24 > 0) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 25) != v31[25] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 25) > (unsigned int)v31[25]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 25) > (unsigned int)v31[25]) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 26) != v31[26] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 26) > (unsigned int)v31[26]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 26) > (unsigned int)v31[26]) != 1 )
                    return result;
                }
                v25 = *((unsigned __int8 *)v30 + 27) - v31[27];
                if ( v25 != 0 )
                  v25 = 2 * (*((unsigned __int8 *)v30 + 27) > (unsigned int)v31[27]) - 1;
                result = v25;
              }
              if ( result != 0 )
                return result;
              v26 = v30[7];
              if ( v26 == *((_DWORD *)v31 + 7) )
              {
                result = 0;
              }
              else
              {
                v27 = (unsigned __int8)v26 - v31[28];
                if ( v27 != 0 )
                {
                  result = 2 * ((unsigned __int8)v26 > (unsigned int)v31[28]) - 1;
                  if ( 2 * (v27 > 0) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 29) != v31[29] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 29) > (unsigned int)v31[29]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 29) > (unsigned int)v31[29]) != 1 )
                    return result;
                }
                if ( *((unsigned __int8 *)v30 + 30) != v31[30] )
                {
                  result = 2 * (*((unsigned __int8 *)v30 + 30) > (unsigned int)v31[30]) - 1;
                  if ( 2 * (*((unsigned __int8 *)v30 + 30) > (unsigned int)v31[30]) != 1 )
                    return result;
                }
                v28 = *((unsigned __int8 *)v30 + 31) - v31[31];
                if ( v28 != 0 )
                  v28 = 2 * (*((unsigned __int8 *)v30 + 31) > (unsigned int)v31[31]) - 1;
                result = v28;
              }
              if ( result != 0 )
                return result;
              a3 = v30 + 8;
              a2 = v31 + 32;
              a1 -= 32;
              continue;
            }
          }
        }
        return result;
    }
  }
}

// Address: 0x1000A641
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  size_t v3; // edi
  unsigned __int8 *v4; // ecx
  unsigned __int8 *v5; // eax
  int v6; // esi
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // kr00_4
  unsigned __int8 *v9; // kr04_4
  unsigned __int8 *v10; // ecx
  int result; // eax
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // esi
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // eax
  int v39; // ecx

  v3 = Size;
  switch ( Size )
  {
    case 0u:
      return 0;
    case 1u:
      v38 = *(unsigned __int8 *)Buf1;
      v39 = *(unsigned __int8 *)Buf2;
LABEL_425:
      result = v38 - v39;
      if ( result != 0 )
        return 2 * (result > 0) - 1;
      return result;
    case 2u:
      if ( *(unsigned __int8 *)Buf1 != *(unsigned __int8 *)Buf2 )
      {
        result = 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) - 1;
        if ( 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) != 1 )
          return result;
      }
      v38 = *((unsigned __int8 *)Buf1 + 1);
      v39 = *((unsigned __int8 *)Buf2 + 1);
      goto LABEL_425;
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
      v38 = *((unsigned __int8 *)Buf1 + 2);
      v39 = *((unsigned __int8 *)Buf2 + 2);
      goto LABEL_425;
    case 4u:
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
      v38 = *((unsigned __int8 *)Buf1 + 3);
      v39 = *((unsigned __int8 *)Buf2 + 3);
      goto LABEL_425;
    default:
      break;
  }
  v4 = (unsigned __int8 *)Buf2;
  v5 = (unsigned __int8 *)Buf1;
  while ( 2 )
  {
    v8 = v5;
    v9 = v4;
    v7 = &v5[v3];
    v10 = &v4[v3];
    switch ( v3 )
    {
      case 0u:
        return 0;
      case 1u:
        goto LABEL_255;
      case 2u:
        goto LABEL_334;
      case 3u:
        goto LABEL_415;
      case 4u:
        goto LABEL_164;
      case 5u:
        goto LABEL_244;
      case 6u:
        goto LABEL_323;
      case 7u:
        goto LABEL_404;
      case 8u:
        goto LABEL_153;
      case 9u:
        goto LABEL_233;
      case 0xAu:
        goto LABEL_312;
      case 0xBu:
        goto LABEL_393;
      case 0xCu:
        goto LABEL_142;
      case 0xDu:
        goto LABEL_222;
      case 0xEu:
        goto LABEL_301;
      case 0xFu:
        goto LABEL_382;
      case 0x10u:
        goto LABEL_131;
      case 0x11u:
        goto LABEL_211;
      case 0x12u:
        goto LABEL_290;
      case 0x13u:
        goto LABEL_371;
      case 0x14u:
        goto LABEL_120;
      case 0x15u:
        goto LABEL_200;
      case 0x16u:
        goto LABEL_279;
      case 0x17u:
        goto LABEL_360;
      case 0x18u:
        goto LABEL_109;
      case 0x19u:
        goto LABEL_189;
      case 0x1Au:
        goto LABEL_268;
      case 0x1Bu:
        goto LABEL_349;
      case 0x1Cu:
        v12 = *((_DWORD *)v7 - 7);
        if ( v12 == *((_DWORD *)v10 - 7) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v12 != *(v10 - 28) )
          {
            v6 = 2 * ((unsigned __int8)v12 > (unsigned int)*(v10 - 28)) - 1;
            if ( 2 * ((unsigned __int8)v12 > (unsigned int)*(v10 - 28)) != 1 )
              return v6;
          }
          if ( *(v7 - 27) != *(v10 - 27) )
          {
            v6 = 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) - 1;
            if ( 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) != 1 )
              return v6;
          }
          if ( *(v7 - 26) != *(v10 - 26) )
          {
            v6 = 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) - 1;
            if ( 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) != 1 )
              return v6;
          }
          v6 = *(v7 - 25) - *(v10 - 25);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_109:
        v13 = *((_DWORD *)v7 - 6);
        if ( v13 == *((_DWORD *)v10 - 6) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v13 != *(v10 - 24) )
          {
            v6 = 2 * ((unsigned __int8)v13 > (unsigned int)*(v10 - 24)) - 1;
            if ( 2 * ((unsigned __int8)v13 > (unsigned int)*(v10 - 24)) != 1 )
              return v6;
          }
          if ( *(v7 - 23) != *(v10 - 23) )
          {
            v6 = 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) - 1;
            if ( 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) != 1 )
              return v6;
          }
          if ( *(v7 - 22) != *(v10 - 22) )
          {
            v6 = 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) - 1;
            if ( 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) != 1 )
              return v6;
          }
          v6 = *(v7 - 21) - *(v10 - 21);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_120:
        v14 = *((_DWORD *)v7 - 5);
        if ( v14 == *((_DWORD *)v10 - 5) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v14 != *(v10 - 20) )
          {
            v6 = 2 * ((unsigned __int8)v14 > (unsigned int)*(v10 - 20)) - 1;
            if ( 2 * ((unsigned __int8)v14 > (unsigned int)*(v10 - 20)) != 1 )
              return v6;
          }
          if ( *(v7 - 19) != *(v10 - 19) )
          {
            v6 = 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) - 1;
            if ( 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) != 1 )
              return v6;
          }
          if ( *(v7 - 18) != *(v10 - 18) )
          {
            v6 = 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) - 1;
            if ( 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) != 1 )
              return v6;
          }
          v6 = *(v7 - 17) - *(v10 - 17);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_131:
        v15 = *((_DWORD *)v7 - 4);
        if ( v15 == *((_DWORD *)v10 - 4) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v15 != *(v10 - 16) )
          {
            v6 = 2 * ((unsigned __int8)v15 > (unsigned int)*(v10 - 16)) - 1;
            if ( 2 * ((unsigned __int8)v15 > (unsigned int)*(v10 - 16)) != 1 )
              return v6;
          }
          if ( *(v7 - 15) != *(v10 - 15) )
          {
            v6 = 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) - 1;
            if ( 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) != 1 )
              return v6;
          }
          if ( *(v7 - 14) != *(v10 - 14) )
          {
            v6 = 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) - 1;
            if ( 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) != 1 )
              return v6;
          }
          v6 = *(v7 - 13) - *(v10 - 13);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_142:
        if ( *((_DWORD *)v7 - 3) == *((_DWORD *)v10 - 3) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 12) != *(v10 - 12) )
          {
            v6 = 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) - 1;
            if ( 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) != 1 )
              return v6;
          }
          if ( *(v7 - 11) != *(v10 - 11) )
          {
            v6 = 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) - 1;
            if ( 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) != 1 )
              return v6;
          }
          if ( *(v7 - 10) != *(v10 - 10) )
          {
            v6 = 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) - 1;
            if ( 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) != 1 )
              return v6;
          }
          v6 = *(v7 - 9) - *(v10 - 9);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_153:
        v16 = *((_DWORD *)v7 - 2);
        if ( v16 == *((_DWORD *)v10 - 2) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v16 != *(v10 - 8) )
          {
            v6 = 2 * ((unsigned __int8)v16 > (unsigned int)*(v10 - 8)) - 1;
            if ( 2 * ((unsigned __int8)v16 > (unsigned int)*(v10 - 8)) != 1 )
              return v6;
          }
          if ( *(v7 - 7) != *(v10 - 7) )
          {
            v6 = 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) - 1;
            if ( 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) != 1 )
              return v6;
          }
          if ( *(v7 - 6) != *(v10 - 6) )
          {
            v6 = 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) - 1;
            if ( 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) != 1 )
              return v6;
          }
          v6 = *(v7 - 5) - *(v10 - 5);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_164:
        v17 = *((_DWORD *)v7 - 1);
        if ( v17 == *((_DWORD *)v10 - 1) )
        {
          result = 0;
        }
        else
        {
          v18 = (unsigned __int8)v17 - *(v10 - 4);
          if ( (v18 == 0 || (v19 = 2 * ((unsigned __int8)v17 > (unsigned int)*(v10 - 4)) - 1, 2 * (v18 > 0) == 1))
            && (*(v7 - 3) == *(v10 - 3)
             || (v19 = 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) - 1, 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) == 1))
            && (*(v7 - 2) == *(v10 - 2)
             || (v19 = 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) - 1, 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) == 1)) )
          {
            result = *(v7 - 1) - *(v10 - 1);
            if ( result != 0 )
              result = 2 * (result > 0) - 1;
          }
          else
          {
            result = v19;
          }
        }
        if ( result == 0 )
          return 0;
        return result;
      case 0x1Du:
        v20 = *(_DWORD *)(v7 - 29);
        if ( v20 == *(_DWORD *)(v10 - 29) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v20 != *(v10 - 29) )
          {
            v6 = 2 * ((unsigned __int8)v20 > (unsigned int)*(v10 - 29)) - 1;
            if ( 2 * ((unsigned __int8)v20 > (unsigned int)*(v10 - 29)) != 1 )
              return v6;
          }
          if ( *(v7 - 28) != *(v10 - 28) )
          {
            v6 = 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) - 1;
            if ( 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) != 1 )
              return v6;
          }
          if ( *(v7 - 27) != *(v10 - 27) )
          {
            v6 = 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) - 1;
            if ( 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) != 1 )
              return v6;
          }
          v6 = *(v7 - 26) - *(v10 - 26);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_189:
        v21 = *(_DWORD *)(v7 - 25);
        if ( v21 == *(_DWORD *)(v10 - 25) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v21 != *(v10 - 25) )
          {
            v6 = 2 * ((unsigned __int8)v21 > (unsigned int)*(v10 - 25)) - 1;
            if ( 2 * ((unsigned __int8)v21 > (unsigned int)*(v10 - 25)) != 1 )
              return v6;
          }
          if ( *(v7 - 24) != *(v10 - 24) )
          {
            v6 = 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) - 1;
            if ( 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) != 1 )
              return v6;
          }
          if ( *(v7 - 23) != *(v10 - 23) )
          {
            v6 = 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) - 1;
            if ( 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) != 1 )
              return v6;
          }
          v6 = *(v7 - 22) - *(v10 - 22);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_200:
        v22 = *(_DWORD *)(v7 - 21);
        if ( v22 == *(_DWORD *)(v10 - 21) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v22 != *(v10 - 21) )
          {
            v6 = 2 * ((unsigned __int8)v22 > (unsigned int)*(v10 - 21)) - 1;
            if ( 2 * ((unsigned __int8)v22 > (unsigned int)*(v10 - 21)) != 1 )
              return v6;
          }
          if ( *(v7 - 20) != *(v10 - 20) )
          {
            v6 = 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) - 1;
            if ( 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) != 1 )
              return v6;
          }
          if ( *(v7 - 19) != *(v10 - 19) )
          {
            v6 = 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) - 1;
            if ( 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) != 1 )
              return v6;
          }
          v6 = *(v7 - 18) - *(v10 - 18);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_211:
        v23 = *(_DWORD *)(v7 - 17);
        if ( v23 == *(_DWORD *)(v10 - 17) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v23 != *(v10 - 17) )
          {
            v6 = 2 * ((unsigned __int8)v23 > (unsigned int)*(v10 - 17)) - 1;
            if ( 2 * ((unsigned __int8)v23 > (unsigned int)*(v10 - 17)) != 1 )
              return v6;
          }
          if ( *(v7 - 16) != *(v10 - 16) )
          {
            v6 = 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) - 1;
            if ( 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) != 1 )
              return v6;
          }
          if ( *(v7 - 15) != *(v10 - 15) )
          {
            v6 = 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) - 1;
            if ( 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) != 1 )
              return v6;
          }
          v6 = *(v7 - 14) - *(v10 - 14);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_222:
        v24 = *(_DWORD *)(v7 - 13);
        if ( v24 == *(_DWORD *)(v10 - 13) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v24 != *(v10 - 13) )
          {
            v6 = 2 * ((unsigned __int8)v24 > (unsigned int)*(v10 - 13)) - 1;
            if ( 2 * ((unsigned __int8)v24 > (unsigned int)*(v10 - 13)) != 1 )
              return v6;
          }
          if ( *(v7 - 12) != *(v10 - 12) )
          {
            v6 = 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) - 1;
            if ( 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) != 1 )
              return v6;
          }
          if ( *(v7 - 11) != *(v10 - 11) )
          {
            v6 = 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) - 1;
            if ( 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) != 1 )
              return v6;
          }
          v6 = *(v7 - 10) - *(v10 - 10);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_233:
        if ( *(_DWORD *)(v7 - 9) == *(_DWORD *)(v10 - 9) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 9) != *(v10 - 9) )
          {
            v6 = 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) - 1;
            if ( 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) != 1 )
              return v6;
          }
          if ( *(v7 - 8) != *(v10 - 8) )
          {
            v6 = 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) - 1;
            if ( 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) != 1 )
              return v6;
          }
          if ( *(v7 - 7) != *(v10 - 7) )
          {
            v6 = 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) - 1;
            if ( 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) != 1 )
              return v6;
          }
          v6 = *(v7 - 6) - *(v10 - 6);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_244:
        v25 = *(_DWORD *)(v7 - 5);
        if ( v25 == *(_DWORD *)(v10 - 5) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v25 != *(v10 - 5) )
          {
            v6 = 2 * ((unsigned __int8)v25 > (unsigned int)*(v10 - 5)) - 1;
            if ( 2 * ((unsigned __int8)v25 > (unsigned int)*(v10 - 5)) != 1 )
              return v6;
          }
          if ( *(v7 - 4) != *(v10 - 4) )
          {
            v6 = 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) - 1;
            if ( 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) != 1 )
              return v6;
          }
          if ( *(v7 - 3) != *(v10 - 3) )
          {
            v6 = 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) - 1;
            if ( 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) != 1 )
              return v6;
          }
          v6 = *(v7 - 2) - *(v10 - 2);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) - 1;
        }
        if ( v6 != 0 )
          return v6;
        goto LABEL_255;
      case 0x1Eu:
        v26 = *(_DWORD *)(v7 - 30);
        if ( v26 == *(_DWORD *)(v10 - 30) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v26 != *(v10 - 30) )
          {
            v6 = 2 * ((unsigned __int8)v26 > (unsigned int)*(v10 - 30)) - 1;
            if ( 2 * ((unsigned __int8)v26 > (unsigned int)*(v10 - 30)) != 1 )
              return v6;
          }
          if ( *(v7 - 29) != *(v10 - 29) )
          {
            v6 = 2 * (*(v7 - 29) > (unsigned int)*(v10 - 29)) - 1;
            if ( 2 * (*(v7 - 29) > (unsigned int)*(v10 - 29)) != 1 )
              return v6;
          }
          if ( *(v7 - 28) != *(v10 - 28) )
          {
            v6 = 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) - 1;
            if ( 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) != 1 )
              return v6;
          }
          v6 = *(v7 - 27) - *(v10 - 27);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_268:
        v27 = *(_DWORD *)(v7 - 26);
        if ( v27 == *(_DWORD *)(v10 - 26) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v27 != *(v10 - 26) )
          {
            v6 = 2 * ((unsigned __int8)v27 > (unsigned int)*(v10 - 26)) - 1;
            if ( 2 * ((unsigned __int8)v27 > (unsigned int)*(v10 - 26)) != 1 )
              return v6;
          }
          if ( *(v7 - 25) != *(v10 - 25) )
          {
            v6 = 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) - 1;
            if ( 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) != 1 )
              return v6;
          }
          if ( *(v7 - 24) != *(v10 - 24) )
          {
            v6 = 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) - 1;
            if ( 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) != 1 )
              return v6;
          }
          v6 = *(v7 - 23) - *(v10 - 23);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_279:
        v28 = *(_DWORD *)(v7 - 22);
        if ( v28 == *(_DWORD *)(v10 - 22) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v28 != *(v10 - 22) )
          {
            v6 = 2 * ((unsigned __int8)v28 > (unsigned int)*(v10 - 22)) - 1;
            if ( 2 * ((unsigned __int8)v28 > (unsigned int)*(v10 - 22)) != 1 )
              return v6;
          }
          if ( *(v7 - 21) != *(v10 - 21) )
          {
            v6 = 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) - 1;
            if ( 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) != 1 )
              return v6;
          }
          if ( *(v7 - 20) != *(v10 - 20) )
          {
            v6 = 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) - 1;
            if ( 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) != 1 )
              return v6;
          }
          v6 = *(v7 - 19) - *(v10 - 19);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_290:
        v29 = *(_DWORD *)(v7 - 18);
        if ( v29 == *(_DWORD *)(v10 - 18) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v29 != *(v10 - 18) )
          {
            v6 = 2 * ((unsigned __int8)v29 > (unsigned int)*(v10 - 18)) - 1;
            if ( 2 * ((unsigned __int8)v29 > (unsigned int)*(v10 - 18)) != 1 )
              return v6;
          }
          if ( *(v7 - 17) != *(v10 - 17) )
          {
            v6 = 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) - 1;
            if ( 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) != 1 )
              return v6;
          }
          if ( *(v7 - 16) != *(v10 - 16) )
          {
            v6 = 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) - 1;
            if ( 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) != 1 )
              return v6;
          }
          v6 = *(v7 - 15) - *(v10 - 15);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_301:
        v30 = *(_DWORD *)(v7 - 14);
        if ( v30 == *(_DWORD *)(v10 - 14) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v30 != *(v10 - 14) )
          {
            v6 = 2 * ((unsigned __int8)v30 > (unsigned int)*(v10 - 14)) - 1;
            if ( 2 * ((unsigned __int8)v30 > (unsigned int)*(v10 - 14)) != 1 )
              return v6;
          }
          if ( *(v7 - 13) != *(v10 - 13) )
          {
            v6 = 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) - 1;
            if ( 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) != 1 )
              return v6;
          }
          if ( *(v7 - 12) != *(v10 - 12) )
          {
            v6 = 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) - 1;
            if ( 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) != 1 )
              return v6;
          }
          v6 = *(v7 - 11) - *(v10 - 11);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_312:
        if ( *(_DWORD *)(v7 - 10) == *(_DWORD *)(v10 - 10) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 10) != *(v10 - 10) )
          {
            v6 = 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) - 1;
            if ( 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) != 1 )
              return v6;
          }
          if ( *(v7 - 9) != *(v10 - 9) )
          {
            v6 = 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) - 1;
            if ( 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) != 1 )
              return v6;
          }
          if ( *(v7 - 8) != *(v10 - 8) )
          {
            v6 = 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) - 1;
            if ( 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) != 1 )
              return v6;
          }
          v6 = *(v7 - 7) - *(v10 - 7);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_323:
        v31 = *(_DWORD *)(v7 - 6);
        if ( v31 == *(_DWORD *)(v10 - 6) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v31 != *(v10 - 6) )
          {
            v6 = 2 * ((unsigned __int8)v31 > (unsigned int)*(v10 - 6)) - 1;
            if ( 2 * ((unsigned __int8)v31 > (unsigned int)*(v10 - 6)) != 1 )
              return v6;
          }
          if ( *(v7 - 5) != *(v10 - 5) )
          {
            v6 = 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) - 1;
            if ( 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) != 1 )
              return v6;
          }
          if ( *(v7 - 4) != *(v10 - 4) )
          {
            v6 = 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) - 1;
            if ( 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) != 1 )
              return v6;
          }
          v6 = *(v7 - 3) - *(v10 - 3);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_334:
        if ( *((_WORD *)v7 - 1) == *((_WORD *)v10 - 1) )
          return 0;
        goto LABEL_335;
      case 0x1Fu:
        if ( *(_DWORD *)(v7 - 31) == *(_DWORD *)(v10 - 31) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 31) != *(v10 - 31) )
          {
            v6 = 2 * (*(v7 - 31) > (unsigned int)*(v10 - 31)) - 1;
            if ( 2 * (*(v7 - 31) > (unsigned int)*(v10 - 31)) != 1 )
              return v6;
          }
          if ( *(v7 - 30) != *(v10 - 30) )
          {
            v6 = 2 * (*(v7 - 30) > (unsigned int)*(v10 - 30)) - 1;
            if ( 2 * (*(v7 - 30) > (unsigned int)*(v10 - 30)) != 1 )
              return v6;
          }
          if ( *(v7 - 29) != *(v10 - 29) )
          {
            v6 = 2 * (*(v7 - 29) > (unsigned int)*(v10 - 29)) - 1;
            if ( 2 * (*(v7 - 29) > (unsigned int)*(v10 - 29)) != 1 )
              return v6;
          }
          v6 = *(v7 - 28) - *(v10 - 28);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_349:
        v33 = *(_DWORD *)(v7 - 27);
        if ( v33 == *(_DWORD *)(v10 - 27) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v33 != *(v10 - 27) )
          {
            v6 = 2 * ((unsigned __int8)v33 > (unsigned int)*(v10 - 27)) - 1;
            if ( 2 * ((unsigned __int8)v33 > (unsigned int)*(v10 - 27)) != 1 )
              return v6;
          }
          if ( *(v7 - 26) != *(v10 - 26) )
          {
            v6 = 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) - 1;
            if ( 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) != 1 )
              return v6;
          }
          if ( *(v7 - 25) != *(v10 - 25) )
          {
            v6 = 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) - 1;
            if ( 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) != 1 )
              return v6;
          }
          v6 = *(v7 - 24) - *(v10 - 24);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_360:
        v34 = *(_DWORD *)(v7 - 23);
        if ( v34 == *(_DWORD *)(v10 - 23) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v34 != *(v10 - 23) )
          {
            v6 = 2 * ((unsigned __int8)v34 > (unsigned int)*(v10 - 23)) - 1;
            if ( 2 * ((unsigned __int8)v34 > (unsigned int)*(v10 - 23)) != 1 )
              return v6;
          }
          if ( *(v7 - 22) != *(v10 - 22) )
          {
            v6 = 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) - 1;
            if ( 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) != 1 )
              return v6;
          }
          if ( *(v7 - 21) != *(v10 - 21) )
          {
            v6 = 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) - 1;
            if ( 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) != 1 )
              return v6;
          }
          v6 = *(v7 - 20) - *(v10 - 20);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_371:
        v35 = *(_DWORD *)(v7 - 19);
        if ( v35 == *(_DWORD *)(v10 - 19) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v35 != *(v10 - 19) )
          {
            v6 = 2 * ((unsigned __int8)v35 > (unsigned int)*(v10 - 19)) - 1;
            if ( 2 * ((unsigned __int8)v35 > (unsigned int)*(v10 - 19)) != 1 )
              return v6;
          }
          if ( *(v7 - 18) != *(v10 - 18) )
          {
            v6 = 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) - 1;
            if ( 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) != 1 )
              return v6;
          }
          if ( *(v7 - 17) != *(v10 - 17) )
          {
            v6 = 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) - 1;
            if ( 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) != 1 )
              return v6;
          }
          v6 = *(v7 - 16) - *(v10 - 16);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_382:
        if ( *(_DWORD *)(v7 - 15) == *(_DWORD *)(v10 - 15) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 15) != *(v10 - 15) )
          {
            v6 = 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) - 1;
            if ( 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) != 1 )
              return v6;
          }
          if ( *(v7 - 14) != *(v10 - 14) )
          {
            v6 = 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) - 1;
            if ( 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) != 1 )
              return v6;
          }
          if ( *(v7 - 13) != *(v10 - 13) )
          {
            v6 = 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) - 1;
            if ( 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) != 1 )
              return v6;
          }
          v6 = *(v7 - 12) - *(v10 - 12);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_393:
        v36 = *(_DWORD *)(v7 - 11);
        if ( v36 == *(_DWORD *)(v10 - 11) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v36 != *(v10 - 11) )
          {
            v6 = 2 * ((unsigned __int8)v36 > (unsigned int)*(v10 - 11)) - 1;
            if ( 2 * ((unsigned __int8)v36 > (unsigned int)*(v10 - 11)) != 1 )
              return v6;
          }
          if ( *(v7 - 10) != *(v10 - 10) )
          {
            v6 = 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) - 1;
            if ( 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) != 1 )
              return v6;
          }
          if ( *(v7 - 9) != *(v10 - 9) )
          {
            v6 = 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) - 1;
            if ( 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) != 1 )
              return v6;
          }
          v6 = *(v7 - 8) - *(v10 - 8);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_404:
        v37 = *(_DWORD *)(v7 - 7);
        if ( v37 != *(_DWORD *)(v10 - 7) )
        {
          if ( (unsigned __int8)v37 == *(v10 - 7)
            || (v6 = 2 * ((unsigned __int8)v37 > (unsigned int)*(v10 - 7)) - 1,
                2 * ((unsigned __int8)v37 > (unsigned int)*(v10 - 7)) == 1) )
          {
            if ( *(v7 - 6) == *(v10 - 6)
              || (v6 = 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) - 1, 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) == 1) )
            {
              if ( *(v7 - 5) == *(v10 - 5)
                || (v6 = 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) - 1, 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) == 1) )
              {
                v6 = *(v7 - 4) - *(v10 - 4);
                if ( v6 != 0 )
                  v6 = 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) - 1;
                goto LABEL_414;
              }
            }
          }
          return v6;
        }
        v6 = 0;
LABEL_414:
        if ( v6 != 0 )
          return v6;
LABEL_415:
        if ( *(v7 - 3) != *(v10 - 3) )
        {
          v32 = 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) - 1;
          if ( 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) != 1 )
            return v32;
        }
LABEL_335:
        if ( *(v7 - 2) != *(v10 - 2) )
        {
          v32 = 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) - 1;
          if ( 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) != 1 )
            return v32;
        }
LABEL_255:
        result = *(v7 - 1) - *(v10 - 1);
        if ( result != 0 )
          return 2 * (result > 0) - 1;
        return result;
      default:
        if ( *(_DWORD *)v8 == *(_DWORD *)v9 )
        {
          v6 = 0;
        }
        else
        {
          if ( *v8 != *v9 )
          {
            v6 = 2 * (*v8 > (unsigned int)*v9) - 1;
            if ( 2 * (*v8 > (unsigned int)*v9) != 1 )
              return v6;
          }
          if ( v8[1] != v9[1] )
          {
            v6 = 2 * (v8[1] > (unsigned int)v9[1]) - 1;
            if ( 2 * (v8[1] > (unsigned int)v9[1]) != 1 )
              return v6;
          }
          if ( v8[2] != v9[2] )
          {
            v6 = 2 * (v8[2] > (unsigned int)v9[2]) - 1;
            if ( 2 * (v8[2] > (unsigned int)v9[2]) != 1 )
              return v6;
          }
          v6 = v8[3] - v9[3];
          if ( v6 != 0 )
            v6 = 2 * (v8[3] > (unsigned int)v9[3]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 1) == *((_DWORD *)v9 + 1) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[4] != v9[4] )
          {
            v6 = 2 * (v8[4] > (unsigned int)v9[4]) - 1;
            if ( 2 * (v8[4] > (unsigned int)v9[4]) != 1 )
              return v6;
          }
          if ( v8[5] != v9[5] )
          {
            v6 = 2 * (v8[5] > (unsigned int)v9[5]) - 1;
            if ( 2 * (v8[5] > (unsigned int)v9[5]) != 1 )
              return v6;
          }
          if ( v8[6] != v9[6] )
          {
            v6 = 2 * (v8[6] > (unsigned int)v9[6]) - 1;
            if ( 2 * (v8[6] > (unsigned int)v9[6]) != 1 )
              return v6;
          }
          v6 = v8[7] - v9[7];
          if ( v6 != 0 )
            v6 = 2 * (v8[7] > (unsigned int)v9[7]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 2) == *((_DWORD *)v9 + 2) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[8] != v9[8] )
          {
            v6 = 2 * (v8[8] > (unsigned int)v9[8]) - 1;
            if ( 2 * (v8[8] > (unsigned int)v9[8]) != 1 )
              return v6;
          }
          if ( v8[9] != v9[9] )
          {
            v6 = 2 * (v8[9] > (unsigned int)v9[9]) - 1;
            if ( 2 * (v8[9] > (unsigned int)v9[9]) != 1 )
              return v6;
          }
          if ( v8[10] != v9[10] )
          {
            v6 = 2 * (v8[10] > (unsigned int)v9[10]) - 1;
            if ( 2 * (v8[10] > (unsigned int)v9[10]) != 1 )
              return v6;
          }
          v6 = v8[11] - v9[11];
          if ( v6 != 0 )
            v6 = 2 * (v8[11] > (unsigned int)v9[11]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 3) == *((_DWORD *)v9 + 3) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[12] != v9[12] )
          {
            v6 = 2 * (v8[12] > (unsigned int)v9[12]) - 1;
            if ( 2 * (v8[12] > (unsigned int)v9[12]) != 1 )
              return v6;
          }
          if ( v8[13] != v9[13] )
          {
            v6 = 2 * (v8[13] > (unsigned int)v9[13]) - 1;
            if ( 2 * (v8[13] > (unsigned int)v9[13]) != 1 )
              return v6;
          }
          if ( v8[14] != v9[14] )
          {
            v6 = 2 * (v8[14] > (unsigned int)v9[14]) - 1;
            if ( 2 * (v8[14] > (unsigned int)v9[14]) != 1 )
              return v6;
          }
          v6 = v8[15] - v9[15];
          if ( v6 != 0 )
            v6 = 2 * (v8[15] > (unsigned int)v9[15]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 4) == *((_DWORD *)v9 + 4) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[16] != v9[16] )
          {
            v6 = 2 * (v8[16] > (unsigned int)v9[16]) - 1;
            if ( 2 * (v8[16] > (unsigned int)v9[16]) != 1 )
              return v6;
          }
          if ( v8[17] != v9[17] )
          {
            v6 = 2 * (v8[17] > (unsigned int)v9[17]) - 1;
            if ( 2 * (v8[17] > (unsigned int)v9[17]) != 1 )
              return v6;
          }
          if ( v8[18] != v9[18] )
          {
            v6 = 2 * (v8[18] > (unsigned int)v9[18]) - 1;
            if ( 2 * (v8[18] > (unsigned int)v9[18]) != 1 )
              return v6;
          }
          v6 = v8[19] - v9[19];
          if ( v6 != 0 )
            v6 = 2 * (v8[19] > (unsigned int)v9[19]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 5) == *((_DWORD *)v9 + 5) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[20] != v9[20] )
          {
            v6 = 2 * (v8[20] > (unsigned int)v9[20]) - 1;
            if ( 2 * (v8[20] > (unsigned int)v9[20]) != 1 )
              return v6;
          }
          if ( v8[21] != v9[21] )
          {
            v6 = 2 * (v8[21] > (unsigned int)v9[21]) - 1;
            if ( 2 * (v8[21] > (unsigned int)v9[21]) != 1 )
              return v6;
          }
          if ( v8[22] != v9[22] )
          {
            v6 = 2 * (v8[22] > (unsigned int)v9[22]) - 1;
            if ( 2 * (v8[22] > (unsigned int)v9[22]) != 1 )
              return v6;
          }
          v6 = v8[23] - v9[23];
          if ( v6 != 0 )
            v6 = 2 * (v8[23] > (unsigned int)v9[23]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 6) == *((_DWORD *)v9 + 6) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[24] != v9[24] )
          {
            v6 = 2 * (v8[24] > (unsigned int)v9[24]) - 1;
            if ( 2 * (v8[24] > (unsigned int)v9[24]) != 1 )
              return v6;
          }
          if ( v8[25] != v9[25] )
          {
            v6 = 2 * (v8[25] > (unsigned int)v9[25]) - 1;
            if ( 2 * (v8[25] > (unsigned int)v9[25]) != 1 )
              return v6;
          }
          if ( v8[26] != v9[26] )
          {
            v6 = 2 * (v8[26] > (unsigned int)v9[26]) - 1;
            if ( 2 * (v8[26] > (unsigned int)v9[26]) != 1 )
              return v6;
          }
          v6 = v8[27] - v9[27];
          if ( v6 != 0 )
            v6 = 2 * (v8[27] > (unsigned int)v9[27]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 7) == *((_DWORD *)v9 + 7) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[28] != v9[28] )
          {
            v6 = 2 * (v8[28] > (unsigned int)v9[28]) - 1;
            if ( 2 * (v8[28] > (unsigned int)v9[28]) != 1 )
              return v6;
          }
          if ( v8[29] != v9[29] )
          {
            v6 = 2 * (v8[29] > (unsigned int)v9[29]) - 1;
            if ( 2 * (v8[29] > (unsigned int)v9[29]) != 1 )
              return v6;
          }
          if ( v8[30] != v9[30] )
          {
            v6 = 2 * (v8[30] > (unsigned int)v9[30]) - 1;
            if ( 2 * (v8[30] > (unsigned int)v9[30]) != 1 )
              return v6;
          }
          v6 = v8[31] - v9[31];
          if ( v6 != 0 )
            v6 = 2 * (v8[31] > (unsigned int)v9[31]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        v5 = v8 + 32;
        v4 = v9 + 32;
        v3 -= 32;
        continue;
    }
  }
}

// Address: 0x1000BCC1
int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  const char *v4; // ecx
  const char *v5; // eax
  char v6; // dl
  char v7; // dl
  char v8; // dl
  char v9; // dl
  int v10; // eax
  int v11; // ecx
  size_t v12; // [esp+4h] [ebp-4h]

  v12 = 0;
  if ( MaxCount == 0 )
    return 0;
  if ( MaxCount <= 4 )
  {
    v4 = Str2;
    v5 = Str1;
    goto LABEL_23;
  }
  v4 = Str2;
  v5 = Str1;
  do
  {
    v6 = *v5;
    v5 += 4;
    v4 += 4;
    if ( v6 == 0 || v6 != *(v4 - 4) )
    {
      v10 = *((unsigned __int8 *)v5 - 4);
      v11 = *((unsigned __int8 *)v4 - 4);
      return v10 - v11;
    }
    v7 = *(v5 - 3);
    if ( v7 == 0 || v7 != *(v4 - 3) )
    {
      v10 = *((unsigned __int8 *)v5 - 3);
      v11 = *((unsigned __int8 *)v4 - 3);
      return v10 - v11;
    }
    v8 = *(v5 - 2);
    if ( v8 == 0 || v8 != *(v4 - 2) )
    {
      v10 = *((unsigned __int8 *)v5 - 2);
      v11 = *((unsigned __int8 *)v4 - 2);
      return v10 - v11;
    }
    v9 = *(v5 - 1);
    if ( v9 == 0 || v9 != *(v4 - 1) )
    {
      v10 = *((unsigned __int8 *)v5 - 1);
      v11 = *((unsigned __int8 *)v4 - 1);
      return v10 - v11;
    }
    v12 += 4;
  }
  while ( v12 < MaxCount - 4 );
  while ( 1 )
  {
LABEL_23:
    if ( v12 >= MaxCount )
      return 0;
    if ( *v5 == 0 || *v5 != *v4 )
      break;
    ++v5;
    ++v4;
    ++v12;
  }
  v10 = *(unsigned __int8 *)v5;
  v11 = *(unsigned __int8 *)v4;
  return v10 - v11;
}

// Address: 0x1000BD90
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

// Address: 0x1000BDD0
int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0;
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) != 0 )
    return atol(LCData);
  else
    return -1;
}

// Address: 0x1000BE19
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

// Address: 0x1000BFCD
int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = 0;
  if ( a1 <= dword_1001DA50 )
  {
    _lock(4);
    v2 = __sbh_alloc_block(a1);
    _unlock(4);
  }
  return v2;
}

// Address: 0x1000C01C
LPVOID __cdecl _heap_alloc(SIZE_T dwBytes)
{
  SIZE_T v1; // eax
  LPVOID result; // eax
  SIZE_T v3; // esi

  if ( hHeap == nullptr )
  {
    _FF_MSGBANNER();
    _NMSG_WRITE(30);
    __crtExitProcess(0xFFu);
  }
  if ( dword_1001DA78 == 1 )
  {
    v1 = dwBytes;
    if ( dwBytes == 0 )
      v1 = 1;
    return HeapAlloc(hHeap, 0, v1);
  }
  else
  {
    v3 = dwBytes;
    if ( dword_1001DA78 != 3 || (result = (LPVOID)V6_HeapAlloc(dwBytes)) == nullptr )
    {
      if ( dwBytes == 0 )
        v3 = 1;
      return HeapAlloc(hHeap, 0, (v3 + 15) & 0xFFFFFFF0);
    }
  }
  return result;
}

// Address: 0x1000C096
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
      if ( dword_1001DA78 == 1 )
      {
        v2 = v1 != 0 ? v1 : 1;
        v3 = HeapAlloc(hHeap, 0, v2);
      }
      else if ( dword_1001DA78 != 3 || (v3 = (LPVOID)V6_HeapAlloc(v1)) == nullptr )
      {
        if ( v1 == 0 )
          v1 = 1;
        v3 = HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
      }
      v4 = v3;
      if ( v3 != nullptr )
        return v4;
      if ( dword_1001DA08 == 0 )
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

// Address: 0x1000C160
int _alloca_probe_16()
{
  return _alloca_probe();
}

// Address: 0x1000C176
int _alloca_probe_8()
{
  return _alloca_probe();
}

// Address: 0x1000C18C
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
    *(_DWORD *)CharType = (unsigned __int16)(Type & *((_WORD *)off_1001C924 + C));
  }
  return Type & CharType[0];
}

// Address: 0x1000C216
int __cdecl iswctype(wint_t C, wctype_t Type)
{
  int v2; // ecx
  int CharType; // [esp+0h] [ebp-4h] BYREF

  CharType = v2;
  if ( C == 0xFFFF )
    return 0;
  if ( C < 0x100u )
    return Type & *((_WORD *)off_1001C924 + C);
  if ( dword_1001CFF4 == 0 )
    __crtGetStringTypeW((struct localeinfo_struct *)&off_1001C618, 1u, &C, 1, (LPWORD)&CharType);
  return _iswctype_l(C, Type, nullptr);
}

// Address: 0x1000C28C
int __cdecl is_wctype(wint_t C, wctype_t Type)
{
  return iswctype(C, Type);
}

// Address: 0x1000C297
void sub_1000C297()
{
  dword_1001DA60 = 0;
}

// Address: 0x1000C29F
size_t __cdecl _get_sbh_threshold()
{
  if ( hHeap != nullptr )
    return dword_1001DA78 == 3 ? dword_1001DA50 : 0;
  else
    return 0;
}

// Address: 0x1000C2C0
errno_t __cdecl _set_amblksiz(size_t Value)
{
  if ( Value != 0 && hHeap != nullptr )
  {
    dword_1001C7E0 = Value;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x1000C30B
errno_t __cdecl _get_amblksiz(size_t *Value)
{
  if ( Value != nullptr && hHeap != nullptr )
  {
    *Value = dword_1001C7E0;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x1000C34C
int __cdecl __sbh_heap_init(int a1)
{
  int result; // eax

  result = (int)HeapAlloc(hHeap, 0, 0x140u);
  lpMem = (LPVOID)result;
  if ( result != 0 )
  {
    dword_1001D600 = nullptr;
    dword_1001DA48 = 0;
    dword_1001DA54 = result;
    dword_1001DA50 = a1;
    dword_1001DA58 = 16;
    return 1;
  }
  return result;
}

// Address: 0x1000C39A
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 20 * dword_1001DA48; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x1000C3CA
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
      if ( dword_1001D600 != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_1001D600 + 3) + (dword_1001DA5C << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_1001D600 + 2) |= 0x80000000 >> dword_1001DA5C;
        *(_DWORD *)(*((_DWORD *)dword_1001D600 + 4) + 4 * dword_1001DA5C + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_1001D600 + 4) + 67);
        v20 = (LPVOID *)dword_1001D600;
        if ( *(_BYTE *)(*((_DWORD *)dword_1001D600 + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_1001D600 + 1) &= ~1u;
          v20 = (LPVOID *)dword_1001D600;
        }
        if ( v20[2] == (LPVOID)-1 )
        {
          VirtualFree(v20[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_1001D600 + 4));
          memcpy_0(
            dword_1001D600,
            (char *)dword_1001D600 + 20,
            (size_t)lpMem + 20 * dword_1001DA48 - (_DWORD)dword_1001D600 - 20);
          --dword_1001DA48;
          if ( a1 > dword_1001D600 )
            a1 -= 5;
          dword_1001DA54 = (int)lpMem;
        }
      }
      dword_1001D600 = a1;
      dword_1001DA5C = v4;
      return a1;
    }
  }
  return result;
}

// Address: 0x1000C6E0
char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v0 = dword_1001DA48;
  if ( dword_1001DA48 == dword_1001DA58 )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_1001DA58 + 16));
    if ( v1 == nullptr )
      return nullptr;
    dword_1001DA58 += 16;
    v0 = dword_1001DA48;
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
  ++dword_1001DA48;
  **((_DWORD **)v3 + 4) = -1;
  return v3;
}

// Address: 0x1000C790
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

// Address: 0x1000C898
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

// Address: 0x1000CC46
int __sbh_heap_check()
{
  int v0; // ebx
  _DWORD *v2; // edx
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // edx
  int *v6; // esi
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  int *v11; // edi
  int v12; // esi
  int *v13; // ebx
  unsigned int v14; // eax
  _DWORD *v15; // ecx
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  _DWORD v20[64]; // [esp+4h] [ebp-138h] BYREF
  _DWORD *v21; // [esp+104h] [ebp-38h]
  _DWORD *v22; // [esp+108h] [ebp-34h]
  int *v23; // [esp+10Ch] [ebp-30h]
  unsigned int v24; // [esp+110h] [ebp-2Ch]
  int v25; // [esp+114h] [ebp-28h]
  int *v26; // [esp+118h] [ebp-24h]
  int v27; // [esp+11Ch] [ebp-20h]
  int v28; // [esp+120h] [ebp-1Ch]
  int v29; // [esp+124h] [ebp-18h]
  int v30; // [esp+128h] [ebp-14h]
  int v31; // [esp+12Ch] [ebp-10h]
  int v32; // [esp+130h] [ebp-Ch]
  unsigned int v33; // [esp+134h] [ebp-8h]
  int v34; // [esp+138h] [ebp-4h]

  v0 = 0;
  if ( lpMem == nullptr )
    return -1;
  v2 = lpMem;
  v22 = lpMem;
  v28 = 0;
  if ( dword_1001DA48 <= 0 )
    return 0;
  while ( 2 )
  {
    v3 = v2[4];
    if ( v3 != 0 )
    {
      v33 = v2[3];
      v26 = (int *)(v3 + 324);
      v4 = (_DWORD *)(v3 + 196);
      v27 = v2[2];
      v31 = 0;
      v30 = 0;
      v32 = 0;
      v21 = (_DWORD *)(v3 + 196);
      do
      {
        v25 = 0;
        v29 = 0;
        v34 = 0;
        memset(v20, 0, sizeof(v20));
        if ( v27 >= 0 )
        {
          if ( v33 == 0 )
            return -4;
          v5 = (_DWORD *)(v33 + 4092);
          while ( 2 )
          {
            v6 = v5 - 1020;
            if ( *(v5 - 1021) != -1 || *v5 != -1 )
              return -5;
            do
            {
              v7 = *v6;
              v8 = *v6;
              if ( (*v6 & 1) != 0 )
              {
                if ( --v7 > 1024 )
                  return -6;
                ++v34;
              }
              else
              {
                v9 = (v7 >> 4) - 1;
                if ( v9 > 63 )
                  v9 = 63;
                ++v20[v9];
              }
              if ( v7 < 16 || (v7 & 0xF) != 0 || v7 > 4080 )
                return -7;
              v10 = (int *)((char *)v6 + v7);
              if ( *(int *)((char *)v6 + v7 - 4) != v8 )
                return -8;
              v6 = (int *)((char *)v6 + v7);
            }
            while ( v10 < v5 );
            if ( v10 != v5 )
              return -8;
            v5 += 1024;
            if ( ++v0 < 8 )
              continue;
            break;
          }
          v11 = v26;
          if ( *v26 != v34 )
            return -9;
          v12 = 0;
          while ( 1 )
          {
            v34 = 0;
            v13 = v11 + 2;
            v14 = v11[1];
            v24 = (unsigned int)v11;
            v23 = v11 + 2;
            if ( (int *)v14 != v11 )
            {
              do
              {
                if ( v34 == v20[v12] )
                  break;
                if ( v14 < v33 || v14 >= v33 + 0x8000 )
                  return -10;
                v15 = (_DWORD *)((v14 & 0xFFFFF000) + 12);
                v16 = (v14 & 0xFFFFF000) + 4092;
                if ( v15 == (_DWORD *)v16 )
                  return -11;
                do
                {
                  if ( v15 == (_DWORD *)v14 )
                    break;
                  v15 = (_DWORD *)((char *)v15 + (*v15 & 0xFFFFFFFE));
                  v13 = v23;
                }
                while ( v15 != (_DWORD *)v16 );
                if ( v15 == (_DWORD *)v16 )
                  return -11;
                v17 = (*(int *)v14 >> 4) - 1;
                if ( v17 > 63 )
                  v17 = 63;
                if ( v17 != v12 )
                  return -12;
                if ( *(_DWORD *)(v14 + 8) != v24 )
                  return -13;
                ++v34;
                v24 = v14;
                v14 = *(_DWORD *)(v14 + 4);
              }
              while ( (int *)v14 != v11 );
              if ( v34 != 0 )
              {
                if ( v12 >= 32 )
                {
                  v18 = 0x80000000 >> (v12 - 32);
                  v29 |= v18;
                  v30 |= v18;
                }
                else
                {
                  v25 |= 0x80000000 >> v12;
                  v31 |= 0x80000000 >> v12;
                }
              }
            }
            if ( *(int **)(v24 + 4) != v11 || v34 != v20[v12] )
              return -14;
            if ( *v13 != v24 )
              return -15;
            ++v12;
            v11 = v13;
            if ( v12 >= 64 )
            {
              v4 = v21;
              v2 = v22;
              v0 = 0;
              break;
            }
          }
        }
        if ( v25 != *(v4 - 32) || v29 != *v4 )
          return -16;
        v33 += 0x8000;
        v26 += 129;
        v27 *= 2;
        ++v32;
        v21 = ++v4;
      }
      while ( v32 < 32 );
      if ( v31 != *v2 || v30 != v2[1] )
        return -17;
      v2 += 5;
      ++v28;
      v22 = v2;
      if ( v28 < dword_1001DA48 )
        continue;
      return 0;
    }
    break;
  }
  return -2;
}

// Address: 0x1000CF2A
int __cdecl _set_sbh_threshold(size_t NewValue)
{
  if ( hHeap == nullptr )
    return 0;
  if ( dword_1001DA78 != 3 )
  {
    if ( NewValue != 0 )
    {
      if ( dword_1001DA78 != 1 )
      {
        *_errno() = 22;
        return 0;
      }
      if ( NewValue > 0x3F8 || __sbh_heap_init(NewValue) == 0 )
      {
        *_errno() = 22;
        _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
        return 0;
      }
      dword_1001DA50 = NewValue;
      dword_1001DA78 = 3;
    }
    return 1;
  }
  if ( NewValue > 0x3F8 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
  dword_1001DA50 = NewValue;
  return 1;
}

// Address: 0x1000CFD9
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

  v1 = (char *)lpMem + 20 * dword_1001DA48;
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
  for ( i = (char *)dword_1001DA54; ; i += 20 )
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
      if ( (unsigned int)i >= dword_1001DA54 || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
        break;
    }
    if ( i == (char *)dword_1001DA54 )
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
          if ( (unsigned int)i >= dword_1001DA54 || *((_DWORD *)i + 2) != 0 )
            break;
        }
        if ( i == (char *)dword_1001DA54 )
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
  dword_1001DA54 = (int)i;
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
  if ( v24 == 0 && i == dword_1001D600 && v31 == dword_1001DA5C )
    dword_1001D600 = nullptr;
  *v6 = v31;
  return v23 + 1;
}

// Address: 0x1000D2BE
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
      if ( dword_1001DA08 == 0 )
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
    if ( dword_1001DA78 == 3 )
    {
      v4 = (v4 + 15) & 0xFFFFFFF0;
      if ( Sizea <= dword_1001DA50 )
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

// Address: 0x1000D3DC
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
    if ( dword_1001DA78 == 3 )
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
          if ( v3 <= dword_1001DA50 )
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
                memcpy(v15, Block, v5);
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
              memcpy(v15, Block, v6);
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
        if ( dword_1001DA08 == 0 )
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
        if ( dword_1001DA08 == 0 )
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

// Address: 0x1000D5F7
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

// Address: 0x1000D672
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
    if ( a1 == dword_1001CA30[2 * v1] )
      break;
    v8 = ++v1;
  }
  while ( v1 < 0x17 );
  if ( v1 < 0x17 )
  {
    if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001CFD4 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v4 = StdHandle;
      if ( StdHandle != nullptr && StdHandle != (HANDLE)-1 )
      {
        v5 = (const char **)&(&off_1001CA34)[2 * v1];
        v6 = strlen(*v5);
        WriteFile(v4, *v5, v6, &NumberOfBytesWritten, nullptr);
      }
    }
    else if ( a1 != 252 )
    {
      if ( strcpy_s(Destination, 0x314u, "Runtime Error!\n\nProgram: ") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      byte_1001D725 = 0;
      if ( GetModuleFileNameA(nullptr, byte_1001D621, 0x104u) == 0
        && strcpy_s(byte_1001D621, 0x2FBu, "<program name unknown>") != 0 )
      {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strlen(byte_1001D621) + 1 > 0x3C )
      {
        v2 = strlen(byte_1001D621);
        if ( strncpy_s(&byte_1001D621[v2 - 59], (char *)&dword_1001D91C - &byte_1001D621[v2 - 59], "...", 3u) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strcat_s(Destination, 0x314u, "\n\n") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcat_s(Destination, 0x314u, (&off_1001CA34)[2 * v8]) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      sub_1000FF48(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
}

// Address: 0x1000D81D
char *__cdecl _GET_RTERRMSG(int a1)
{
  int v1; // eax

  v1 = 0;
  while ( a1 != dword_1001CA30[2 * v1] )
  {
    if ( (unsigned int)++v1 >= 0x17 )
      return nullptr;
  }
  return (&off_1001CA34)[2 * v1];
}

// Address: 0x1000D843
void _FF_MSGBANNER()
{
  if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001CFD4 == 1 )
  {
    _NMSG_WRITE(252);
    _NMSG_WRITE(255);
  }
}

// Address: 0x1000D87C
int __cdecl _onexit_nolock(int a1)
{
  void *v1; // edi
  unsigned int v2; // eax
  char *v3; // esi
  int v4; // ebx
  size_t v5; // edi
  int v6; // eax
  size_t v7; // eax
  char *v8; // eax
  void *Block; // [esp+Ch] [ebp-4h]

  v1 = (void *)_decode_pointer(dword_1001DBF4);
  Block = v1;
  v2 = _decode_pointer(dword_1001DBF0);
  v3 = (char *)v2;
  if ( v2 >= (unsigned int)v1 )
  {
    v4 = v2 - (_DWORD)v1;
    if ( v2 - (unsigned int)v1 < 0xFFFFFFFC )
    {
      v5 = _msize(v1);
      if ( v5 >= v4 + 4 )
      {
LABEL_11:
        *(_DWORD *)v3 = _encode_pointer(a1);
        dword_1001DBF0 = _encode_pointer((int)(v3 + 4));
        return a1;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = (char *)_realloc_crt(Block, v7)) != nullptr
        || v5 + 16 >= v5 && (v8 = (char *)_realloc_crt(Block, v5 + 16)) != nullptr )
      {
        v3 = &v8[4 * (v4 >> 2)];
        dword_1001DBF4 = _encode_pointer((int)v8);
        goto LABEL_11;
      }
    }
  }
  return 0;
}

// Address: 0x1000D936
int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(0x20u, 4);
  dword_1001DBF4 = _encode_pointer((int)v0);
  dword_1001DBF0 = dword_1001DBF4;
  if ( v0 == nullptr )
    return 24;
  *v0 = 0;
  return 0;
}

// Address: 0x1000D967
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock((int)Func);
  _unlockexit();
  return v2;
}

// Address: 0x1000D9A3
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x1000D9BA
int _initp_misc_cfltcvt_tab()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int result; // eax

  for ( i = 0; i < 10; ++i )
  {
    v1 = &off_1001CAE8[i];
    result = _encode_pointer((int)off_1001CAE8[i]);
    *v1 = (int (*)())result;
  }
  return result;
}

// Address: 0x1000D9E0
BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  return *(_WORD *)a1 == 23117 && *(_DWORD *)(v2 = a1 + *(_DWORD *)(a1 + 60)) == 17744 && *(_WORD *)(v2 + 24) == 267;
}

// Address: 0x1000DA20
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

// Address: 0x1000DA70
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000)
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x1000DB2D
void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[30];
  if ( v0 != nullptr )
    v0();
  abort();
}

// Address: 0x1000DB66
void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[31];
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1000DB79
void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer(dword_1001D91C);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1000DBB1
int _initp_eh_hooks()
{
  int result; // eax

  result = _encode_pointer((int)terminate);
  dword_1001D91C = result;
  return result;
}

// Address: 0x1000DBC2
int __cdecl _initp_misc_winsig(int a1)
{
  dword_1001D920 = a1;
  dword_1001D924 = a1;
  dword_1001D928 = a1;
  dword_1001D92C = a1;
  return a1;
}

// Address: 0x1000DBE0
BOOL __stdcall ctrlevent_capture(DWORD CtrlType)
{
  int *v1; // esi
  unsigned int v2; // eax
  int v4; // [esp+10h] [ebp-20h]
  void (__cdecl *v5)(int); // [esp+14h] [ebp-1Ch]

  _lock(0);
  if ( CtrlType != 0 )
  {
    v1 = &dword_1001D924;
    v2 = _decode_pointer(dword_1001D924);
    v5 = (void (__cdecl *)(int))v2;
    v4 = 21;
  }
  else
  {
    v1 = &dword_1001D920;
    v2 = _decode_pointer(dword_1001D920);
    v5 = (void (__cdecl *)(int))v2;
    v4 = 2;
  }
  if ( v2 >= 2 )
    *v1 = _encoded_null();
  _unlock(0);
  if ( v5 == nullptr )
    return false;
  if ( v5 != (void (__cdecl *)(int))1 )
    v5(v4);
  return true;
}

// Address: 0x1000DC7B
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
  while ( result < a2 + 12 * dword_1001C7F0 );
  if ( result >= a2 + 12 * dword_1001C7F0 || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}

// Address: 0x1000DCB2
int sub_1000DCB2()
{
  return _decode_pointer(dword_1001D928);
}

// Address: 0x1000DCD1
_crt_signal_t __cdecl signal(int Signal, _crt_signal_t Function)
{
  _crt_signal_t v2; // esi
  DWORD *v3; // eax
  DWORD *v4; // esi
  void *v5; // eax
  unsigned int v6; // eax
  void (__cdecl *v7)(int); // edx
  unsigned int *v8; // esi
  int v10; // [esp+10h] [ebp-20h]
  void (__cdecl *v11)(int); // [esp+14h] [ebp-1Ch]

  v10 = 0;
  v2 = Function;
  if ( Function == (_crt_signal_t)4 || Function == (_crt_signal_t)3 )
    goto $sigreterror$24777;
  if ( Signal == 2 || Signal == 21 || Signal == 22 || Signal == 6 || Signal == 15 )
  {
    _lock(0);
    if ( (Signal == 2 || Signal == 21) && dword_1001D930 == 0 )
    {
      if ( SetConsoleCtrlHandler(ctrlevent_capture, true) )
      {
        dword_1001D930 = 1;
      }
      else
      {
        v8 = __doserrno();
        *v8 = GetLastError();
        v10 = 1;
        v2 = Function;
      }
    }
    switch ( Signal )
    {
      case 2:
        v11 = (void (__cdecl *)(int))_decode_pointer(dword_1001D920);
        if ( v2 != (_crt_signal_t)2 )
          dword_1001D920 = _encode_pointer((int)v2);
        break;
      case 6:
        goto LABEL_31;
      case 15:
        v11 = (void (__cdecl *)(int))_decode_pointer(dword_1001D92C);
        if ( v2 != (_crt_signal_t)2 )
          dword_1001D92C = _encode_pointer((int)v2);
        break;
      case 21:
        v11 = (void (__cdecl *)(int))_decode_pointer(dword_1001D924);
        if ( v2 != (_crt_signal_t)2 )
          dword_1001D924 = _encode_pointer((int)v2);
        break;
      default:
LABEL_31:
        v11 = (void (__cdecl *)(int))_decode_pointer(dword_1001D928);
        if ( v2 != (_crt_signal_t)2 )
          dword_1001D928 = _encode_pointer((int)v2);
        break;
    }
    _unlock(0);
    if ( v10 == 0 )
      return v11;
    goto $sigreterror$24777;
  }
  if ( Signal != 8 && Signal != 4 && Signal != 11 )
    goto $sigreterror$24777;
  v3 = _getptd_noexit();
  v4 = v3;
  if ( v3 == nullptr )
    goto $sigreterror$24777;
  if ( (_UNKNOWN *)v3[23] == &unk_10018B08 )
  {
    v5 = _malloc_crt(Size);
    v4[23] = (DWORD)v5;
    if ( v5 == nullptr )
      goto $sigreterror$24777;
    memcpy(v5, &unk_10018B08, Size);
  }
  v6 = siglookup(Signal, v4[23]);
  if ( v6 != 0 )
  {
    v7 = *(void (__cdecl **)(int))(v6 + 8);
    if ( Function != (_crt_signal_t)2 )
    {
      do
      {
        if ( *(_DWORD *)(v6 + 4) != Signal )
          break;
        *(_DWORD *)(v6 + 8) = Function;
        v6 += 12;
      }
      while ( v6 < v4[23] + 12 * dword_1001C7F0 );
    }
    return v7;
  }
$sigreterror$24777:
  if ( Signal != 1 && Signal != 3 && Signal != 13 && (Signal <= 15 || Signal > 17) )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  }
  return (_crt_signal_t)-1;
}

// Address: 0x1000DF0E
int __cdecl raise(int Signal)
{
  DWORD *v1; // edi
  DWORD *v2; // eax
  int result; // eax
  int *v4; // esi
  int v5; // eax
  int v6; // eax
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
      v4 = &dword_1001D92C;
      v5 = dword_1001D92C;
      goto LABEL_18;
    }
    if ( Signal == 21 )
    {
      v4 = &dword_1001D924;
      v5 = dword_1001D924;
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
      v4 = &dword_1001D920;
      v5 = dword_1001D920;
LABEL_18:
      v11 = 1;
      v6 = _decode_pointer(v5);
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
      v4 = &dword_1001D928;
      v5 = dword_1001D928;
      goto LABEL_18;
    }
  }
LABEL_7:
  v2 = _getptd_noexit();
  v1 = v2;
  if ( v2 == nullptr )
    return -1;
  v4 = (int *)(siglookup(Signal, v2[23]) + 8);
  v6 = *v4;
LABEL_19:
  v10 = (void (__cdecl *)(int, DWORD))v6;
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
    for ( i = dword_1001C7E4; i < dword_1001C7E4 + dword_1001C7E8; ++i )
      *(_DWORD *)(12 * i + v1[23] + 8) = 0;
    goto LABEL_37;
  }
LABEL_33:
  *v4 = _encoded_null();
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

// Address: 0x1000E0BE
LONG __cdecl sub_1000E0BE(LONG a1)
{
  Target = a1;
  return a1;
}

// Address: 0x1000E0CD
int __cdecl rand_s(_DWORD *a1)
{
  int (__stdcall *v1)(_DWORD, _DWORD); // edi
  HMODULE LibraryA; // eax
  FARPROC ProcAddress; // eax
  int *v5; // ebx
  DWORD LastError; // eax
  DWORD v7; // eax
  LONG v8; // esi
  int v9; // ebx
  HMODULE hLibModule; // [esp+8h] [ebp-4h]

  v1 = (int (__stdcall *)(_DWORD, _DWORD))_decode_pointer(Target);
  if ( a1 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  *a1 = 0;
  if ( v1 == nullptr )
  {
    LibraryA = LoadLibraryA("ADVAPI32.DLL");
    hLibModule = LibraryA;
    if ( LibraryA == nullptr )
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return 22;
    }
    ProcAddress = GetProcAddress(LibraryA, "SystemFunction036");
    v1 = (int (__stdcall *)(_DWORD, _DWORD))ProcAddress;
    if ( ProcAddress == nullptr )
    {
      v5 = _errno();
      LastError = GetLastError();
      *v5 = _get_errno_from_oserr(LastError);
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      v7 = GetLastError();
      return _get_errno_from_oserr(v7);
    }
    v8 = _encode_pointer((int)ProcAddress);
    v9 = _encoded_null();
    if ( InterlockedExchange(&Target, v8) != v9 )
      FreeLibrary(hLibModule);
  }
  if ( v1(a1, 4) != 0 )
    return 0;
  *_errno() = 12;
  return *_errno();
}

// Address: 0x1000E1D5
int __cdecl __getlocaleinfo(struct localeinfo_struct *a1, int a2, LCID Locale, LCTYPE LCType, char **a5)
{
  CHAR *v5; // edi
  size_t LocaleInfoA; // esi
  size_t v7; // eax
  CHAR *v8; // eax
  char *v9; // eax
  WCHAR *v11; // edi
  char v12; // bl
  int cbMultiByte; // [esp+10h] [ebp-90h]
  int v14; // [esp+18h] [ebp-88h]
  CHAR Block[128]; // [esp+1Ch] [ebp-84h] BYREF

  if ( a2 == 1 )
  {
    v5 = Block;
    v14 = 0;
    LocaleInfoA = __crtGetLocaleInfoA(a1, Locale, LCType, Block, 128, 0);
    if ( LocaleInfoA == 0 )
    {
      if ( GetLastError() != 122 )
        return -1;
      v7 = __crtGetLocaleInfoA(a1, Locale, LCType, nullptr, 0, 0);
      cbMultiByte = v7;
      if ( v7 == 0 )
        return -1;
      v8 = (CHAR *)_calloc_crt(v7, 1);
      v5 = v8;
      if ( v8 == nullptr )
        return -1;
      v14 = 1;
      LocaleInfoA = __crtGetLocaleInfoA(a1, Locale, LCType, v8, cbMultiByte, 0);
      if ( LocaleInfoA == 0 )
        goto LABEL_9;
    }
    v9 = (char *)_calloc_crt(LocaleInfoA, 1);
    *a5 = v9;
    if ( v9 == nullptr )
    {
      if ( v14 == 0 )
        return -1;
LABEL_9:
      free(v5);
      return -1;
    }
    if ( strncpy_s(v9, LocaleInfoA, v5, LocaleInfoA - 1) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( v14 != 0 )
      free(v5);
  }
  else
  {
    if ( a2 != 0 )
      return -1;
    v11 = &LCData;
    if ( __crtGetLocaleInfoW(a1, Locale, LCType, &LCData, 4) == 0 )
      return -1;
    *(_BYTE *)a5 = 0;
    do
    {
      v12 = *(_BYTE *)v11;
      if ( isdigit(*(unsigned __int8 *)v11) == 0 )
        break;
      ++v11;
      *(_BYTE *)a5 = v12 + 10 * *(_BYTE *)a5 - 48;
    }
    while ( (int)v11 < (int)&dword_1001D940 );
  }
  return 0;
}

// Address: 0x1000E354
int __cdecl sub_1000E354(int a1)
{
  dword_1001D940 = a1;
  return a1;
}

// Address: 0x1000E363
int __cdecl sub_1000E363(int a1)
{
  dword_1001D944 = a1;
  return a1;
}

// Address: 0x1000E372
BOOL __cdecl __crtInitCritSecAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x1000E3D2
int __cdecl sub_1000E3D2(int a1)
{
  dword_1001D948 = a1;
  return a1;
}

// Address: 0x1000E3E1
int (__cdecl *__cdecl _set_new_handler(int (__cdecl *a1)(unsigned int)))(unsigned int)
{
  int v1; // esi

  _lock(4);
  v1 = _decode_pointer(dword_1001D948);
  dword_1001D948 = _encode_pointer((int)a1);
  _unlock(4);
  return (int (__cdecl *)(unsigned int))v1;
}

// Address: 0x1000E42D
int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))_decode_pointer(dword_1001D948);
  return v1 != nullptr && v1(Size) != 0;
}

// Address: 0x1000E455
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

// Address: 0x1000E4A8
int __cdecl _ismbbkalnum_l(unsigned int C, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, C, 0, 1u);
}

// Address: 0x1000E4C1
int __cdecl _ismbbkalnum(unsigned int C)
{
  return x_ismbbtype_l(nullptr, C, 0, 1u);
}

// Address: 0x1000E4D9
int __cdecl _ismbbkprint_l(unsigned int C, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, C, 0, 3u);
}

// Address: 0x1000E4F2
int __cdecl _ismbbkprint(unsigned int C)
{
  return x_ismbbtype_l(nullptr, C, 0, 3u);
}

// Address: 0x1000E50A
int __cdecl _ismbbkpunct_l(unsigned int C, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, C, 0, 2u);
}

// Address: 0x1000E523
int __cdecl _ismbbkpunct(unsigned int C)
{
  return x_ismbbtype_l(nullptr, C, 0, 2u);
}

// Address: 0x1000E53B
int __cdecl _ismbbalnum_l(unsigned int C, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, C, 263, 1u);
}

// Address: 0x1000E557
int __cdecl _ismbbalnum(unsigned int C)
{
  return x_ismbbtype_l(nullptr, C, 263, 1u);
}

// Address: 0x1000E572
int __cdecl _ismbbalpha_l(unsigned int C, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, C, 259, 1u);
}

// Address: 0x1000E58E
int __cdecl _ismbbalpha(unsigned int C)
{
  return x_ismbbtype_l(nullptr, C, 259, 1u);
}

// Address: 0x1000E5A9
int __cdecl _ismbbgraph_l(unsigned int C, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, C, 279, 3u);
}

// Address: 0x1000E5C5
int __cdecl _ismbbgraph(unsigned int C)
{
  return x_ismbbtype_l(nullptr, C, 279, 3u);
}

// Address: 0x1000E5E0
int __cdecl _ismbbprint_l(unsigned int C, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, C, 343, 3u);
}

// Address: 0x1000E5FC
int __cdecl _ismbbprint(unsigned int C)
{
  return x_ismbbtype_l(nullptr, C, 343, 3u);
}

// Address: 0x1000E617
int __cdecl _ismbbpunct_l(unsigned int C, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, C, 16, 2u);
}

// Address: 0x1000E630
int __cdecl _ismbbpunct(unsigned int C)
{
  return x_ismbbtype_l(nullptr, C, 16, 2u);
}

// Address: 0x1000E648
int __cdecl _ismbblead_l(unsigned int Ch, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, Ch, 0, 4u);
}

// Address: 0x1000E661
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x1000E679
int __cdecl _ismbbtrail_l(unsigned int Ch, _locale_t Locale)
{
  return x_ismbbtype_l((struct localeinfo_struct *)Locale, Ch, 0, 8u);
}

// Address: 0x1000E692
int __cdecl _ismbbtrail(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 8u);
}

// Address: 0x1000E6AA
int __cdecl _ismbbkana_l(unsigned int C, _locale_t Locale)
{
  int result; // eax
  _BYTE v3[4]; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  char v6; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v3, (struct localeinfo_struct *)Locale);
  if ( v4 != 0 && *(_DWORD *)(v4 + 4) == 932 )
  {
    result = x_ismbbtype_l((struct localeinfo_struct *)Locale, C, 0, 3u);
    if ( v6 != 0 )
      *(_DWORD *)(v5 + 112) &= ~2u;
  }
  else
  {
    if ( v6 != 0 )
      *(_DWORD *)(v5 + 112) &= ~2u;
    return 0;
  }
  return result;
}

// Address: 0x1000E6FF
int __cdecl _ismbbkana(unsigned int C)
{
  return _ismbbkana_l(C, nullptr);
}

// Address: 0x1000E714
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

// Address: 0x1000E7A4
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

// Address: 0x1000E7EA
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x1000E806
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x1000E81D
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x1000E836
void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &ReturnPoint, nullptr, nullptr);
}

// Address: 0x1000E850
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x1000E867
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

// Address: 0x1000E8BE
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

// Address: 0x1000E94D
int has_osfxsr_set()
{
  return 1;
}

// Address: 0x1000E99D
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

// Address: 0x1000E9FF
int sub_1000E9FF()
{
  dword_1001DA28 = _get_sse2_info();
  return 0;
}

// Address: 0x1000EA0C
int __cdecl sub_1000EA0C(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_1001CB14;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x1000EA45
int __cdecl sub_1000EA45(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_1001CB18;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x1000EA7E
int __cdecl sub_1000EA7E(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_1001CB10;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x1000EAB7
errno_t __cdecl _get_tzname(size_t *ReturnValue, char *Buffer, size_t SizeInBytes, int Index)
{
  const char **v5; // esi
  size_t v6; // eax

  if ( Buffer == nullptr )
  {
    if ( SizeInBytes == 0 )
      goto LABEL_3;
LABEL_9:
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  if ( SizeInBytes == 0 )
    goto LABEL_9;
LABEL_3:
  if ( Buffer != nullptr )
    *Buffer = 0;
  if ( ReturnValue != nullptr && (unsigned int)Index < 2 )
  {
    v5 = (const char **)(&off_1001CBA0 + Index);
    v6 = strlen(*v5) + 1;
    *ReturnValue = v6;
    if ( Buffer != nullptr )
    {
      if ( v6 <= SizeInBytes )
        return strcpy_s(Buffer, SizeInBytes, *v5);
      else
        return 34;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x1000EB5B
int *sub_1000EB5B()
{
  return &dword_1001CB14;
}

// Address: 0x1000EB61
int *sub_1000EB61()
{
  return &dword_1001CB18;
}

// Address: 0x1000EB67
int *sub_1000EB67()
{
  return &dword_1001CB10;
}

// Address: 0x1000EB6D
_UNKNOWN **sub_1000EB6D()
{
  return &off_1001CBA0;
}

// Address: 0x1000EB73
// Microsoft VisualC 2-14/net runtime
int *__cdecl unknown_libname_1(int a1)
{
  int *result; // eax

  result = sub_1000EB5B();
  *result = a1;
  return result;
}

// Address: 0x1000EB84
// Microsoft VisualC 2-14/net runtime
int *__cdecl unknown_libname_2(int a1)
{
  int *result; // eax

  result = sub_1000EB61();
  *result = a1;
  return result;
}

// Address: 0x1000EB95
// Microsoft VisualC 2-14/net runtime
int *__cdecl unknown_libname_3(int a1)
{
  int *result; // eax

  result = sub_1000EB67();
  *result = a1;
  return result;
}

// Address: 0x1000EBA6
void _tzset_nolock()
{
  const char *v0; // eax
  const char *v1; // esi
  size_t v2; // eax
  size_t v3; // eax
  LPSTR *v4; // edi
  const char *v5; // esi
  char v6; // al
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // esi
  int v11; // [esp+14h] [ebp-38h]
  unsigned int CodePage; // [esp+18h] [ebp-34h]
  BOOL UsedDefaultChar; // [esp+1Ch] [ebp-30h] BYREF
  int v14; // [esp+20h] [ebp-2Ch]
  int v15; // [esp+24h] [ebp-28h] BYREF
  int v16; // [esp+28h] [ebp-24h] BYREF
  LPSTR *v17; // [esp+2Ch] [ebp-20h]
  int v18; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v11 = 0;
  v14 = 0;
  v18 = 0;
  v16 = 0;
  v15 = 0;
  _lock(7);
  ms_exc.registration.TryLevel = 0;
  v17 = (LPSTR *)sub_1000EB6D();
  if ( sub_1000EA7E(&v18) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( sub_1000EA0C(&v16) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( sub_1000EA45(&v15) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  CodePage = ___lc_codepage_func();
  dword_1001D9FC = 0;
  dword_1001CBB4 = -1;
  dword_1001CBA8 = -1;
  v0 = (const char *)_getenv_helper_nolock("TZ");
  v1 = v0;
  if ( v0 == nullptr || *v0 == 0 )
  {
    if ( dword_1001DA00 != nullptr )
    {
      free(dword_1001DA00);
      dword_1001DA00 = nullptr;
    }
    if ( GetTimeZoneInformation(&TimeZoneInformation) != -1 )
    {
      dword_1001D9FC = 1;
      v18 = 60 * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.StandardDate.wMonth != 0 )
        v18 = 60 * TimeZoneInformation.StandardBias + 60 * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.DaylightDate.wMonth != 0 && TimeZoneInformation.DaylightBias != 0 )
      {
        v16 = 1;
        v15 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
      }
      else
      {
        v16 = 0;
        v15 = 0;
      }
      if ( WideCharToMultiByte(CodePage, 0, TimeZoneInformation.StandardName, -1, *v17, 63, nullptr, &UsedDefaultChar) == 0
        || UsedDefaultChar )
      {
        **v17 = 0;
      }
      else
      {
        (*v17)[63] = 0;
      }
      if ( WideCharToMultiByte(CodePage, 0, TimeZoneInformation.DaylightName, -1, v17[1], 63, nullptr, &UsedDefaultChar) == 0
        || UsedDefaultChar )
      {
        *v17[1] = 0;
      }
      else
      {
        v17[1][63] = 0;
      }
    }
    goto LABEL_33;
  }
  if ( dword_1001DA00 != nullptr )
  {
    if ( strcmp(v0, dword_1001DA00) == 0 )
    {
LABEL_33:
      v14 = 1;
      goto LABEL_34;
    }
    if ( dword_1001DA00 != nullptr )
      free(dword_1001DA00);
  }
  v2 = strlen(v1);
  dword_1001DA00 = (char *)_malloc_crt(v2 + 1);
  if ( dword_1001DA00 == nullptr )
    goto LABEL_33;
  v3 = strlen(v1);
  if ( strcpy_s(dword_1001DA00, v3 + 1, v1) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
LABEL_34:
  unknown_libname_3(v18);
  unknown_libname_1(v16);
  unknown_libname_2(v15);
  ms_exc.registration.TryLevel = -2;
  _unlock(7);
  if ( v14 == 0 )
  {
    v4 = v17;
    if ( strncpy_s(*v17, 0x40u, v1, 3u) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v5 = v1 + 3;
    if ( *v5 == 45 )
    {
      v11 = 1;
      ++v5;
    }
    v18 = 3600 * atol(v5);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 != 43 && (v6 < 48 || v6 > 57) )
        break;
      ++v5;
    }
    if ( *v5 == 58 )
    {
      v7 = atol(++v5);
      v18 += 60 * v7;
      while ( *v5 >= 48 && *v5 <= 57 )
        ++v5;
      if ( *v5 == 58 )
      {
        v8 = atol(++v5);
        v18 += v8;
        while ( *v5 >= 48 && *v5 <= 57 )
          ++v5;
      }
    }
    if ( v11 != 0 )
      v18 = -v18;
    v16 = *v5;
    if ( v16 != 0 )
    {
      if ( strncpy_s(v4[1], 0x40u, v5, 3u) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
    else
    {
      *v4[1] = 0;
    }
    v9 = v18;
    *sub_1000EB67() = v9;
    v10 = v16;
    *sub_1000EB5B() = v10;
  }
}

// Address: 0x1000EEEC
int __usercall cvtdate@<eax>(
        int a1@<eax>,
        int a2@<ecx>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edi
  int v13; // eax
  int v14; // esi
  int v15; // esi
  int v16; // edx
  int result; // eax
  int v18; // esi
  int v19; // esi
  int v20; // ecx
  int v21; // [esp+14h] [ebp-4h] BYREF
  int v22; // [esp+24h] [ebp+Ch]

  v21 = 0;
  v11 = a5;
  if ( a4 == 1 )
  {
    if ( (a5 % 4 != 0 || a5 % 100 == 0) && (a5 + 1900) % 400 != 0 )
    {
      v13 = 4 * a1;
      v14 = dword_1001CC04[a1];
    }
    else
    {
      v13 = 4 * a1;
      v14 = dword_1001CBD0[a1];
    }
    v22 = v13;
    v15 = v14 + 1;
    v11 = a5;
    v16 = (365 * a5 + (a5 + 299) / 400 - (a5 - 1) / 100 + v15 + (a5 - 1) / 4 - 25563) % 7;
    result = a7 + 7 * a6 - v16;
    if ( v16 > a7 )
      v18 = result + v15;
    else
      v18 = v15 + result - 7;
    if ( a6 == 5 )
    {
      result = (a5 % 4 != 0 || a5 % 100 == 0) && (a5 + 1900) % 400 != 0
             ? *(int *)((char *)&dword_1001CC08 + v22)
             : *(int *)((char *)&dword_1001CBD4 + v22);
      if ( v18 > result )
        v18 -= 7;
    }
  }
  else
  {
    if ( (a5 % 4 != 0 || (result = a5 / 100, a5 % 100 == 0)) && (result = (a5 + 1900) / 400, (a5 + 1900) % 400 != 0) )
      v19 = dword_1001CC04[a1];
    else
      v19 = dword_1001CBD0[a1];
    v18 = a8 + v19;
  }
  v20 = a11 + 1000 * (a10 + 60 * (a9 + 60 * a2));
  if ( a3 == 1 )
  {
    dword_1001CBAC = v18;
    dword_1001CBB0 = v20;
    dword_1001CBA8 = v11;
  }
  else
  {
    dword_1001CBB8 = v18;
    dword_1001CBBC = v20;
    if ( sub_1000EA45(&v21) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    result = 1000 * v21;
    dword_1001CBBC += 1000 * v21;
    if ( dword_1001CBBC >= 0 )
    {
      result = 86400000;
      if ( dword_1001CBBC >= 86400000 )
      {
        dword_1001CBBC -= 86400000;
        ++dword_1001CBB8;
      }
    }
    else
    {
      dword_1001CBBC += 86400000;
      --dword_1001CBB8;
    }
    dword_1001CBB4 = v11;
  }
  return result;
}

// Address: 0x1000F0E3
BOOL __usercall _isindst_nolock@<eax>(_DWORD *a1@<edi>)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+8h] [ebp-8h]
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v10 = 0;
  if ( sub_1000EA0C(&v10) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( v10 == 0 )
    return false;
  v2 = a1[5];
  if ( v2 != dword_1001CBA8 || v2 != dword_1001CBB4 )
  {
    if ( dword_1001D9FC != 0 )
    {
      if ( TimeZoneInformation.DaylightDate.wYear != 0 )
        cvtdate(
          TimeZoneInformation.DaylightDate.wMonth,
          TimeZoneInformation.DaylightDate.wHour,
          1,
          0,
          v2,
          0,
          0,
          TimeZoneInformation.DaylightDate.wDay,
          TimeZoneInformation.DaylightDate.wMinute,
          TimeZoneInformation.DaylightDate.wSecond,
          TimeZoneInformation.DaylightDate.wMilliseconds);
      else
        cvtdate(
          TimeZoneInformation.DaylightDate.wMonth,
          TimeZoneInformation.DaylightDate.wHour,
          1,
          1,
          v2,
          TimeZoneInformation.DaylightDate.wDay,
          TimeZoneInformation.DaylightDate.wDayOfWeek,
          0,
          TimeZoneInformation.DaylightDate.wMinute,
          TimeZoneInformation.DaylightDate.wSecond,
          TimeZoneInformation.DaylightDate.wMilliseconds);
      if ( TimeZoneInformation.StandardDate.wYear != 0 )
        cvtdate(
          TimeZoneInformation.StandardDate.wMonth,
          TimeZoneInformation.StandardDate.wHour,
          0,
          0,
          a1[5],
          0,
          0,
          TimeZoneInformation.StandardDate.wDay,
          TimeZoneInformation.StandardDate.wMinute,
          TimeZoneInformation.StandardDate.wSecond,
          TimeZoneInformation.StandardDate.wMilliseconds);
      else
        cvtdate(
          TimeZoneInformation.StandardDate.wMonth,
          TimeZoneInformation.StandardDate.wHour,
          0,
          1,
          a1[5],
          TimeZoneInformation.StandardDate.wDay,
          TimeZoneInformation.StandardDate.wDayOfWeek,
          0,
          TimeZoneInformation.StandardDate.wMinute,
          TimeZoneInformation.StandardDate.wSecond,
          TimeZoneInformation.StandardDate.wMilliseconds);
    }
    else
    {
      v3 = 3;
      v4 = 2;
      v8 = 11;
      v9 = 1;
      if ( v2 < 107 )
      {
        v3 = 4;
        v4 = 1;
        v8 = 10;
        v9 = 5;
      }
      cvtdate(v3, 2, 1, 1, v2, v4, 0, 0, 0, 0, 0);
      cvtdate(v8, 2, 0, 1, a1[5], v9, 0, 0, 0, 0, 0);
    }
  }
  v5 = a1[7];
  if ( dword_1001CBAC < dword_1001CBB8 )
  {
    if ( v5 >= dword_1001CBAC && v5 <= dword_1001CBB8 )
    {
      if ( v5 > dword_1001CBAC && v5 < dword_1001CBB8 )
        return true;
      goto LABEL_30;
    }
    return false;
  }
  if ( v5 < dword_1001CBB8 || v5 > dword_1001CBAC )
    return true;
  if ( v5 > dword_1001CBB8 && v5 < dword_1001CBAC )
    return false;
LABEL_30:
  v6 = 1000 * (*a1 + 60 * (a1[1] + 60 * a1[2]));
  if ( v5 == dword_1001CBAC )
    return v6 >= dword_1001CBB0;
  else
    return v6 < dword_1001CBBC;
}

// Address: 0x1000F2BB
void __tzset()
{
  if ( dword_1001DA04 == 0 )
  {
    _lock(6);
    if ( dword_1001DA04 == 0 )
    {
      _tzset_nolock();
      ++dword_1001DA04;
    }
    _unlock(6);
  }
}

// Address: 0x1000F30A
void __cdecl _tzset()
{
  _lock(6);
  _tzset_nolock();
  _unlock(6);
}

// Address: 0x1000F342
BOOL __cdecl _isindst(_DWORD *a1)
{
  BOOL v2; // [esp+10h] [ebp-1Ch]

  _lock(6);
  v2 = _isindst_nolock(a1);
  _unlock(6);
  return v2;
}

// Address: 0x1000F383
int __cdecl __ascii_stricmp(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v4; // eax
  int v5; // ecx

  do
  {
    v4 = *a1++;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
    v5 = *a2++;
    if ( (unsigned int)(v5 - 65) <= 0x19 )
      v5 += 32;
  }
  while ( v4 != 0 && v4 == v5 );
  return v4 - v5;
}

// Address: 0x1000F3BC
int __cdecl _stricmp_l(const char *String1, const char *String2, _locale_t Locale)
{
  int result; // eax
  const char *v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  __crt_locale_pointers v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  char v10; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, (struct localeinfo_struct *)Locale);
  if ( String1 != nullptr )
  {
    v4 = String2;
    if ( String2 != nullptr )
    {
      if ( *((_DWORD *)v8.locinfo + 5) != 0 )
      {
        do
        {
          v5 = _tolower_l(*(unsigned __int8 *)String1++, &v8);
          v6 = v5;
          v7 = _tolower_l(*(unsigned __int8 *)v4++, &v8);
        }
        while ( v6 != 0 && v6 == v7 );
        result = v6 - v7;
      }
      else
      {
        result = __ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
      }
      if ( v10 != 0 )
        *(_DWORD *)(v9 + 112) &= ~2u;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      if ( v10 != 0 )
        *(_DWORD *)(v9 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v10 != 0 )
      *(_DWORD *)(v9 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}

// Address: 0x1000F491
int __cdecl _stricmp(const char *String1, const char *String2)
{
  if ( dword_1001CFF4 != 0 )
    return _stricmp_l(String1, String2, nullptr);
  if ( String1 != nullptr && String2 != nullptr )
    return __ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return 0x7FFFFFFF;
}

// Address: 0x1000F4E3
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

// Address: 0x1000F56A
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

// Address: 0x1000F64D
int __cdecl atol(const char *String)
{
  return strtol(String, nullptr, 10);
}

// Address: 0x1000F663
int __cdecl _atol_l(const char *String, _locale_t Locale)
{
  return _strtol_l(String, nullptr, 10, Locale);
}

// Address: 0x1000F67C
int __cdecl atoi(const char *String)
{
  return atol(String);
}

// Address: 0x1000F687
int __cdecl _atoi_l(const char *String, _locale_t Locale)
{
  return _atol_l(String, Locale);
}

// Address: 0x1000F692
__int64 __cdecl _atoi64(const char *String)
{
  return _strtoi64(String, nullptr, 10);
}

// Address: 0x1000F6A8
__int64 __cdecl _atoi64_l(const char *String, _locale_t Locale)
{
  return _strtoi64_l(String, nullptr, 10, Locale);
}

// Address: 0x1000F6C1
int __cdecl _strnicmp_l(const char *String1, const char *String2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  const char *v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  __crt_locale_pointers v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-8h]
  char v11; // [esp+18h] [ebp-4h]

  if ( MaxCount == 0 )
    return 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, (struct localeinfo_struct *)Locale);
  if ( String1 != nullptr && (v5 = String2, String2 != nullptr) )
  {
    if ( MaxCount <= 0x7FFFFFFF )
    {
      if ( *((_DWORD *)v9.locinfo + 5) != 0 )
      {
        do
        {
          v6 = _tolower_l(*(unsigned __int8 *)String1++, &v9);
          v7 = v6;
          v8 = _tolower_l(*(unsigned __int8 *)v5++, &v9);
          --MaxCount;
        }
        while ( MaxCount != 0 && v7 != 0 && v7 == v8 );
        result = v7 - v8;
      }
      else
      {
        result = __ascii_strnicmp(String1, String2, MaxCount);
      }
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

// Address: 0x1000F7B3
int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  if ( dword_1001CFF4 != 0 )
    return _strnicmp_l(String1, String2, MaxCount, nullptr);
  if ( String1 != nullptr && String2 != nullptr && MaxCount <= 0x7FFFFFFF )
    return __ascii_strnicmp(String1, String2, MaxCount);
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return 0x7FFFFFFF;
}

// Address: 0x1000F811
int __userpurge xtoa_s@<eax>(unsigned int a1@<eax>, _BYTE *a2@<ecx>, unsigned int a3, unsigned int a4, int a5)
{
  _BYTE *v5; // esi
  int *v7; // eax
  int v8; // esi
  char *v9; // edi
  char v10; // dl
  unsigned int v11; // et2
  char v12; // dl
  char *v13; // ecx
  char v14; // al
  int v15; // [esp-8h] [ebp-14h]
  unsigned int v16; // [esp+8h] [ebp-4h]

  v5 = a2;
  if ( a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  if ( a3 == 0 )
    goto LABEL_4;
  *a2 = 0;
  if ( a3 <= (unsigned int)(a5 != 0) + 1 )
  {
LABEL_7:
    v7 = _errno();
    v15 = 34;
    goto LABEL_5;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_4:
    v7 = _errno();
    v15 = 22;
LABEL_5:
    v8 = v15;
    *v7 = v15;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return v8;
  }
  v16 = 0;
  if ( a5 != 0 )
  {
    *a2++ = 45;
    v16 = 1;
    a1 = -a1;
  }
  v9 = a2;
  do
  {
    v11 = a1 % a4;
    a1 /= a4;
    v10 = v11;
    if ( v11 <= 9 )
      v12 = v10 + 48;
    else
      v12 = v10 + 87;
    *a2++ = v12;
    ++v16;
  }
  while ( a1 != 0 && v16 < a3 );
  if ( v16 >= a3 )
  {
    *v5 = 0;
    goto LABEL_7;
  }
  *a2 = 0;
  v13 = a2 - 1;
  do
  {
    v14 = *v13;
    *v13-- = *v9;
    *v9++ = v14;
  }
  while ( v9 < v13 );
  return 0;
}

// Address: 0x1000F8EE
errno_t __cdecl _itoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return xtoa_s(Value, Buffer, BufferCount, 0xAu, 1);
  else
    return xtoa_s(Value, Buffer, BufferCount, Radix, 0);
}

// Address: 0x1000F918
errno_t __cdecl _ltoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = false;
  if ( Radix == 10 )
    v4 = Value < 0;
  return xtoa_s(Value, Buffer, BufferCount, Radix, v4);
}

// Address: 0x1000F93F
errno_t __cdecl _ultoa_s(unsigned int Value, char *Buffer, size_t BufferCount, int Radix)
{
  return xtoa_s(Value, Buffer, BufferCount, Radix, 0);
}

// Address: 0x1000F959
int __userpurge x64toa_s@<eax>(char *a1@<edi>, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  int *v5; // eax
  int v6; // esi
  unsigned int v8; // eax
  int v9; // edx
  char *v10; // esi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // ecx
  char *v14; // esi
  char v15; // cl
  int v16; // [esp-4h] [ebp-18h]
  int v17; // [esp+10h] [ebp-4h]
  char *v18; // [esp+2Ch] [ebp+18h]

  if ( a1 != nullptr && a3 != 0 )
  {
    *a1 = 0;
    if ( a3 <= (unsigned int)(a5 != 0) + 1 )
    {
      v5 = _errno();
      v16 = 34;
      goto LABEL_3;
    }
    if ( a4 - 2 <= 0x22 )
    {
      v8 = HIDWORD(a2);
      v9 = a2;
      v17 = 0;
      v10 = a1;
      if ( a5 != 0 )
      {
        v9 = -(int)a2;
        *a1 = 45;
        v10 = a1 + 1;
        v17 = 1;
        v8 = (unsigned __int64)-a2 >> 32;
      }
      v18 = v10;
      while ( 1 )
      {
        v12 = __PAIR64__(v8, v9) % a4;
        v11 = __PAIR64__(v8, v9) / a4;
        HIDWORD(v12) = HIDWORD(v11);
        v9 = v11;
        v8 = HIDWORD(v12);
        LOBYTE(v12) = (unsigned int)v12 <= 9 ? v12 + 48 : (unsigned __int8)v12 + 87;
        *v10++ = v12;
        v13 = ++v17;
        if ( HIDWORD(v12) == 0 && v9 == 0 )
          break;
        if ( v13 >= a3 )
        {
          v13 = v17;
          break;
        }
      }
      if ( v13 >= a3 )
      {
        *a1 = 0;
        *_errno() = 34;
        v6 = 34;
        goto LABEL_4;
      }
      *v10 = 0;
      v14 = v10 - 1;
      do
      {
        v15 = *v14;
        *v14-- = *v18;
        *v18++ = v15;
      }
      while ( v18 < v14 );
      return 0;
    }
  }
  v5 = _errno();
  v16 = 22;
LABEL_3:
  v6 = v16;
  *v5 = v16;
LABEL_4:
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return v6;
}

// Address: 0x1000FA51
errno_t __cdecl _i64toa_s(__int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = false;
  if ( Radix == 10 && SHIDWORD(Value) <= 0 )
    v4 = Value < 0;
  return x64toa_s(Buffer, Value, BufferCount, Radix, v4);
}

// Address: 0x1000FA86
errno_t __cdecl _ui64toa_s(unsigned __int64 Value, char *Buffer, size_t BufferCount, int Radix)
{
  return x64toa_s(Buffer, Value, BufferCount, Radix, 0);
}

// Address: 0x1000FAB0
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

// Address: 0x1000FADB
BOOL __cdecl __crtGetStringTypeW_stat(DWORD dwInfoType, LPCWCH lpSrcStr, const wchar_t *cchSrc, LPWORD lpCharType)
{
  return (int)cchSrc >= -1 && GetStringTypeW(dwInfoType, lpSrcStr, (int)cchSrc, lpCharType);
}

// Address: 0x1000FAFE
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

// Address: 0x1000FB40
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
         && dword_1001DA28 != 0
         && (v3 = Src, v4 = a1, ((unsigned __int8)a1 & 0xF) == ((unsigned __int8)Src & 0xF)) )
  {
    return _VEC_memcpy((__m128i *)a1, (const __m128i *)Src, Size);
  }
  else
  {
    if ( ((unsigned __int8)v4 & 3) != 0 )
    {
      if ( Size >= 4 )
        __asm { jmp     dword ptr ds:(CopyUnwindUp_0+4)[eax*4] }
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 1000FB9C case 0 }
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

// Address: 0x1000FEA5
size_t __cdecl _msize(void *Block)
{
  size_t v2; // esi
  char *v3; // [esp+10h] [ebp-20h]
  int v4; // [esp+14h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_1001DA78 != 3 )
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

// Address: 0x1000FF48
int __cdecl sub_1000FF48(int a1, int a2, int a3)
{
  int v3; // ebx
  HMODULE LibraryA; // eax
  HMODULE v5; // edi
  FARPROC ProcAddress; // eax
  FARPROC v7; // eax
  FARPROC v8; // eax
  FARPROC v9; // eax
  FARPROC v10; // eax
  int (*v11)(void); // esi
  int v12; // eax
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
  if ( dword_1001DA0C == 0 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    ProcAddress = GetProcAddress(LibraryA, "MessageBoxA");
    if ( ProcAddress == nullptr )
      return 0;
    dword_1001DA0C = _encode_pointer((int)ProcAddress);
    v7 = GetProcAddress(v5, "GetActiveWindow");
    dword_1001DA10 = _encode_pointer((int)v7);
    v8 = GetProcAddress(v5, "GetLastActivePopup");
    dword_1001DA14 = _encode_pointer((int)v8);
    v9 = GetProcAddress(v5, "GetUserObjectInformationA");
    dword_1001DA1C = _encode_pointer((int)v9);
    if ( dword_1001DA1C != 0 )
    {
      v10 = GetProcAddress(v5, "GetProcessWindowStation");
      dword_1001DA18 = _encode_pointer((int)v10);
    }
  }
  if ( dword_1001DA18 == v3
    || dword_1001DA1C == v3
    || (v11 = (int (*)(void))_decode_pointer(dword_1001DA18),
        v12 = _decode_pointer(dword_1001DA1C),
        v13 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v12,
        v11 == nullptr)
    || v12 == 0
    || (v14 = v11()) != 0 && v13(v14, 1, v19, 12, v20) != 0 && (v19[8] & 1) != 0 )
  {
    if ( dword_1001DA10 != v3 )
    {
      v15 = (int (*)(void))_decode_pointer(dword_1001DA10);
      if ( v15 != nullptr )
      {
        v21 = v15();
        if ( v21 != 0 && dword_1001DA14 != v3 )
        {
          v16 = (int (__stdcall *)(int))_decode_pointer(dword_1001DA14);
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
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer(dword_1001DA0C);
  if ( v17 != nullptr )
    return v17(v21, a1, a2, a3);
  return 0;
}

// Address: 0x100100B1
int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_1001CFD0;
      dword_1001CFD0 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_1001CFD0;
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x100100FC
int __cdecl sub_100100FC(int a1)
{
  dword_1001CFD4 = a1;
  return a1;
}

// Address: 0x1001010B
int sub_1001010B()
{
  return dword_1001CFD4;
}

// Address: 0x10010111
int _fptrap()
{
  return _amsg_exit(2);
}

// Address: 0x1001011A
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

  if ( (dword_1001CBC0 & 1) != 0 )
    _NMSG_WRITE(10);
  v1 = sub_1000DCB2();
  if ( v1 != 0 )
  {
    v1 = raise(22);
    v3 = v5;
  }
  if ( (dword_1001CBC0 & 2) != 0 )
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

// Address: 0x10010231
unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_1001CBC0;
  dword_1001CBC0 = Mask & Flags | dword_1001CBC0 & ~Mask;
  return result;
}

// Address: 0x10010252
int __cdecl _isalpha_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 0x103;
  else
    result = _isctype_l(C, 259, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x100102A8
int __cdecl isalpha(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _isalpha_l(C, nullptr);
  else
    return off_1001C600[C] & 0x103;
}

// Address: 0x100102D8
int __cdecl _isupper_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 1;
  else
    result = _isctype_l(C, 1, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x10010329
int __cdecl isupper(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _isupper_l(C, nullptr);
  else
    return off_1001C600[C] & 1;
}

// Address: 0x10010357
int __cdecl _islower_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 2;
  else
    result = _isctype_l(C, 2, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x100103A8
int __cdecl islower(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _islower_l(C, nullptr);
  else
    return off_1001C600[C] & 2;
}

// Address: 0x100103D6
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

// Address: 0x10010427
int __cdecl isdigit(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_1001C600[C] & 4;
}

// Address: 0x10010455
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

// Address: 0x100104AB
int __cdecl isxdigit(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _isxdigit_l(C, nullptr);
  else
    return off_1001C600[C] & 0x80;
}

// Address: 0x100104DB
int __cdecl _isspace_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 8;
  else
    result = _isctype_l(C, 8, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x1001052C
int __cdecl isspace(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _isspace_l(C, nullptr);
  else
    return off_1001C600[C] & 8;
}

// Address: 0x1001055A
int __cdecl _ispunct_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 0x10;
  else
    result = _isctype_l(C, 16, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x100105AB
int __cdecl ispunct(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _ispunct_l(C, nullptr);
  else
    return off_1001C600[C] & 0x10;
}

// Address: 0x100105D9
int __cdecl _isalnum_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 0x107;
  else
    result = _isctype_l(C, 263, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x1001062F
int __cdecl isalnum(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _isalnum_l(C, nullptr);
  else
    return off_1001C600[C] & 0x107;
}

// Address: 0x1001065F
int __cdecl _isprint_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 0x157;
  else
    result = _isctype_l(C, 343, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x100106B5
int __cdecl isprint(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _isprint_l(C, nullptr);
  else
    return off_1001C600[C] & 0x157;
}

// Address: 0x100106E5
int __cdecl _isgraph_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 0x117;
  else
    result = _isctype_l(C, 279, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x1001073B
int __cdecl isgraph(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _isgraph_l(C, nullptr);
  else
    return off_1001C600[C] & 0x117;
}

// Address: 0x1001076B
int __cdecl _iscntrl_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers Localea; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((int *)Localea.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)Localea.locinfo + 50) + 2 * C) & 0x20;
  else
    result = _isctype_l(C, 32, &Localea);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x100107BC
int __cdecl iscntrl(int C)
{
  if ( dword_1001CFF4 != 0 )
    return _iscntrl_l(C, nullptr);
  else
    return off_1001C600[C] & 0x20;
}

// Address: 0x100107EA
int __cdecl __isascii(int C)
{
  return (unsigned int)C < 0x80;
}

// Address: 0x100107FC
int __cdecl __toascii(int C)
{
  return C & 0x7F;
}

// Address: 0x10010809
int __cdecl _iscsymf_l(int C, _locale_t Locale)
{
  int result; // eax

  result = _isalpha_l(C, Locale);
  if ( result != 0 || C == 95 )
    return 1;
  return result;
}

// Address: 0x1001082C
int __cdecl __iscsymf(int C)
{
  int result; // eax

  result = isalpha(C);
  if ( result != 0 || C == 95 )
    return 1;
  return result;
}

// Address: 0x1001084B
int __cdecl _iscsym_l(int C, _locale_t Locale)
{
  int result; // eax

  result = _isalnum_l(C, Locale);
  if ( result != 0 || C == 95 )
    return 1;
  return result;
}

// Address: 0x1001086E
int __cdecl __iscsym(int C)
{
  int result; // eax

  result = isalnum((unsigned __int8)C);
  if ( result != 0 || (_BYTE)C == 95 )
    return 1;
  return result;
}

// Address: 0x1001088F
int __cdecl __crtGetLocaleInfoW_stat(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, wchar_t *cchData)
{
  return GetLocaleInfoW(Locale, LCType, lpLCData, (int)cchData);
}

// Address: 0x100108A8
int __cdecl __crtGetLocaleInfoW(struct localeinfo_struct *a1, LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  int result; // eax
  _BYTE v6[8]; // [esp+0h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-8h]
  char v8; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v6, a1);
  result = GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
  if ( v8 != 0 )
    *(_DWORD *)(v7 + 112) &= ~2u;
  return result;
}

// Address: 0x100108DC
int __cdecl __crtGetLocaleInfoA_stat(
        struct localeinfo_struct *a1,
        LCID Locale,
        LCTYPE LCType,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        UINT CodePage)
{
  int v6; // eax
  int v7; // esi
  int LocaleInfoW; // eax
  int v9; // ecx
  unsigned int v11; // eax
  void *v12; // esp
  WCHAR *v13; // edi
  WCHAR *v14; // eax
  int v15; // eax
  int v16; // [esp+0h] [ebp-14h] BYREF
  int v17; // [esp+8h] [ebp-Ch] BYREF
  int cchData; // [esp+Ch] [ebp-8h]

  v6 = dword_1001DA20;
  v7 = 0;
  if ( dword_1001DA20 == 0 )
  {
    if ( GetLocaleInfoW(0, 1u, nullptr, 0) != 0 )
    {
      dword_1001DA20 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v6 = 2;
      dword_1001DA20 = 2;
    }
    else
    {
      v6 = dword_1001DA20;
    }
  }
  if ( v6 == 2 || v6 == 0 )
    return GetLocaleInfoA(Locale, LCType, lpMultiByteStr, cbMultiByte);
  if ( v6 != 1 )
    return 0;
LABEL_10:
  if ( CodePage == 0 )
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 4);
  LocaleInfoW = GetLocaleInfoW(Locale, LCType, nullptr, 0);
  v9 = LocaleInfoW;
  cchData = LocaleInfoW;
  if ( LocaleInfoW == 0 )
    return 0;
  if ( LocaleInfoW <= 0 || 0xFFFFFFE0 / LocaleInfoW < 2 )
  {
    v13 = nullptr;
  }
  else
  {
    v11 = 2 * LocaleInfoW + 8;
    if ( v11 <= 0x400 )
    {
      v12 = alloca(v11);
      if ( &v16 != nullptr )
      {
        v16 = 52428;
        v13 = (WCHAR *)&v17;
        goto LABEL_23;
      }
      return 0;
    }
    v14 = (WCHAR *)malloc(2 * v9 + 8);
    if ( v14 != nullptr )
    {
      *(_DWORD *)v14 = 56797;
      v14 += 4;
    }
    v13 = v14;
  }
LABEL_23:
  if ( v13 == nullptr )
    return 0;
  if ( GetLocaleInfoW(Locale, LCType, v13, cchData) != 0 )
  {
    if ( cbMultiByte != 0 )
      v15 = WideCharToMultiByte(CodePage, 0, v13, -1, lpMultiByteStr, cbMultiByte, nullptr, nullptr);
    else
      v15 = WideCharToMultiByte(CodePage, 0, v13, -1, nullptr, 0, nullptr, nullptr);
    v7 = v15;
  }
  _freea(v13);
  return v7;
}

// Address: 0x10010A1B
int __cdecl __crtGetLocaleInfoA(
        struct localeinfo_struct *a1,
        LCID Locale,
        LCTYPE LCType,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        UINT CodePage)
{
  int result; // eax
  _BYTE v7[8]; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-8h]
  char v9; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a1);
  result = __crtGetLocaleInfoA_stat(
             (struct localeinfo_struct *)v7,
             Locale,
             LCType,
             lpMultiByteStr,
             cbMultiByte,
             CodePage);
  if ( v9 != 0 )
    *(_DWORD *)(v8 + 112) &= ~2u;
  return result;
}

// Address: 0x10010A58
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x10010A78
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

// Address: 0x10010ABD
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

// Address: 0x10010B41
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

// Address: 0x10010B64
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x10010B78);
}

// Address: 0x10010B6D
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_1001CBCC = a3;
  unk_1001CBC8 = result;
  dword_1001CBD0[0] = a2;
  return result;
}

// Address: 0x10010B8C
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x10010B8F
const char *__cdecl _getenv_helper_nolock(char *Str)
{
  const char **v1; // esi
  size_t v3; // edi

  v1 = (const char **)dword_1001D368;
  if ( dword_1001DBE0 == 0 )
    return nullptr;
  if ( dword_1001D368 != nullptr
    || dword_1001D370 != 0 && __wtomb_environ() == 0 && (v1 = (const char **)dword_1001D368, dword_1001D368 != nullptr) )
  {
    if ( Str != nullptr )
    {
      v3 = strlen(Str);
      while ( *v1 != nullptr )
      {
        if ( strlen(*v1) > v3
          && (*v1)[v3] == 61
          && _mbsnbicoll((const unsigned __int8 *)*v1, (const unsigned __int8 *)Str, v3) == 0 )
        {
          return &(*v1)[v3 + 1];
        }
        ++v1;
      }
    }
  }
  return nullptr;
}

// Address: 0x10010C16
int __usercall _getenv_s_helper@<eax>(size_t *a1@<eax>, char *Destination, rsize_t SizeInBytes, char *Str)
{
  const char *v6; // eax
  const char *v7; // edi
  size_t v8; // eax

  if ( a1 == nullptr )
    goto LABEL_2;
  *a1 = 0;
  if ( Destination != nullptr )
  {
    if ( SizeInBytes == 0 )
      goto LABEL_2;
  }
  else if ( SizeInBytes != 0 )
  {
LABEL_2:
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  if ( Destination != nullptr )
    *Destination = 0;
  v6 = _getenv_helper_nolock(Str);
  v7 = v6;
  if ( v6 != nullptr )
  {
    v8 = strlen(v6) + 1;
    *a1 = v8;
    if ( SizeInBytes != 0 )
    {
      if ( v8 > SizeInBytes )
        return 34;
      if ( strcpy_s(Destination, SizeInBytes, v7) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
  }
  return 0;
}

// Address: 0x10010CAB
int __usercall _dupenv_s_helper@<eax>(char **a1@<ebx>, size_t *a2, char *Str)
{
  const char *v4; // eax
  size_t v5; // esi
  char *v6; // eax
  char *Source; // [esp+8h] [ebp-4h]

  if ( a1 != nullptr )
  {
    *a1 = nullptr;
    if ( a2 != nullptr )
      *a2 = 0;
    if ( Str != nullptr )
    {
      v4 = _getenv_helper_nolock(Str);
      Source = (char *)v4;
      if ( v4 != nullptr )
      {
        v5 = strlen(v4) + 1;
        v6 = (char *)calloc(v5, 1u);
        *a1 = v6;
        if ( v6 == nullptr )
        {
          *_errno() = 12;
          return *_errno();
        }
        if ( strcpy_s(v6, v5, Source) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        if ( a2 != nullptr )
          *a2 = v5;
      }
      return 0;
    }
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return 22;
}

// Address: 0x10010D4F
const char *__cdecl sub_10010D4F(char *String)
{
  const char *v2; // [esp+14h] [ebp-1Ch]

  if ( String != nullptr && strnlen(String, 0x7FFFu) < 0x7FFF )
  {
    _lock(7);
    v2 = _getenv_helper_nolock(String);
    _unlock(7);
    return v2;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return nullptr;
  }
}

// Address: 0x10010DD2
errno_t __cdecl getenv_s(size_t *RequiredCount, char *Buffer, rsize_t BufferCount, const char *VarName)
{
  const char *v5; // eax
  const char *v6; // esi
  rsize_t v7; // eax
  errno_t v9; // [esp+10h] [ebp-1Ch]

  _lock(7);
  if ( RequiredCount != nullptr )
  {
    *RequiredCount = 0;
    if ( Buffer != nullptr ? BufferCount != 0 : BufferCount == 0 )
    {
      if ( Buffer != nullptr )
        *Buffer = 0;
      v5 = _getenv_helper_nolock((char *)VarName);
      v6 = v5;
      if ( v5 != nullptr )
      {
        v7 = strlen(v5) + 1;
        *RequiredCount = v7;
        if ( BufferCount != 0 )
        {
          if ( v7 > BufferCount )
          {
            v9 = 34;
            goto LABEL_16;
          }
          if ( strcpy_s(Buffer, BufferCount, v6) != 0 )
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        }
      }
      v9 = 0;
      goto LABEL_16;
    }
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  v9 = 22;
LABEL_16:
  _unlock(7);
  return v9;
}

// Address: 0x10010EAA
errno_t __cdecl _dupenv_s(char **Buffer, size_t *BufferCount, const char *VarName)
{
  const char *v3; // eax
  size_t v4; // edi
  char *v5; // eax
  char *Source; // [esp+10h] [ebp-20h]
  errno_t v8; // [esp+14h] [ebp-1Ch]

  _lock(7);
  if ( Buffer != nullptr )
  {
    *Buffer = nullptr;
    if ( BufferCount != nullptr )
      *BufferCount = 0;
    if ( VarName != nullptr )
    {
      v3 = _getenv_helper_nolock((char *)VarName);
      Source = (char *)v3;
      if ( v3 != nullptr )
      {
        v4 = strlen(v3) + 1;
        v5 = (char *)calloc(v4, 1u);
        *Buffer = v5;
        if ( v5 == nullptr )
        {
          *_errno() = 12;
          v8 = *_errno();
          goto LABEL_14;
        }
        if ( strcpy_s(v5, v4, Source) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        if ( BufferCount != nullptr )
          *BufferCount = v4;
      }
      v8 = 0;
      goto LABEL_14;
    }
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  v8 = 22;
LABEL_14:
  _unlock(7);
  return v8;
}

// Address: 0x10010F90
int __cdecl _tolower(int C)
{
  return C + 32;
}

// Address: 0x10010F9D
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

// Address: 0x100110B2
int __cdecl tolower(int C)
{
  int result; // eax

  if ( dword_1001CFF4 != 0 )
    return _tolower_l(C, nullptr);
  result = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return result;
}

// Address: 0x100110DE
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

// Address: 0x1001130D
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_1001CFF4 != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_1001C618, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x10011338
int __cdecl _strtol_l(const char *String, char **EndPtr, int Radix, _locale_t Locale)
{
  return strtoxl((struct localeinfo_struct *)Locale, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x10011355
unsigned int __cdecl strtoul(const char *String, char **EndPtr, int Radix)
{
  if ( dword_1001CFF4 != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 1);
  else
    return strtoxl((struct localeinfo_struct *)&off_1001C618, String, (const char **)EndPtr, Radix, 1);
}

// Address: 0x10011381
unsigned int __cdecl _strtoul_l(const char *String, char **EndPtr, int Radix, _locale_t Locale)
{
  return strtoxl((struct localeinfo_struct *)Locale, String, (const char **)EndPtr, Radix, 1);
}

// Address: 0x1001139E
unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *a1, const char *a2, const char **a3, int a4, int a5)
{
  const char *v5; // edi
  struct __crt_locale_data *locinfo; // esi
  unsigned __int8 v8; // al
  bool v9; // cc
  int v10; // eax
  unsigned __int8 v11; // al
  _BYTE *v12; // edi
  int v13; // ebx
  unsigned int v14; // esi
  int v15; // eax
  unsigned __int8 v16; // al
  __crt_locale_pointers Locale; // [esp+8h] [ebp-38h] BYREF
  int v18; // [esp+10h] [ebp-30h]
  char v19; // [esp+14h] [ebp-2Ch]
  int v20; // [esp+1Ch] [ebp-24h]
  unsigned __int64 v21; // [esp+20h] [ebp-20h]
  unsigned __int64 v22; // [esp+28h] [ebp-18h]
  unsigned __int64 v23; // [esp+30h] [ebp-10h]
  const char *v24; // [esp+38h] [ebp-8h]
  unsigned __int8 v25; // [esp+3Fh] [ebp-1h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a1);
  v5 = a2;
  if ( a3 != nullptr )
    *a3 = a2;
  if ( a2 == nullptr || a4 != 0 && (a4 < 2 || a4 > 36) )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v19 != 0 )
      *(_DWORD *)(v18 + 112) &= ~2u;
    return 0;
  }
  locinfo = Locale.locinfo;
  v23 = 0;
  do
  {
    v8 = *v5++;
    v9 = *((_DWORD *)locinfo + 43) <= 1;
    v25 = v8;
    if ( v9 )
    {
      v10 = *(_WORD *)(*((_DWORD *)locinfo + 50) + 2 * v25) & 8;
    }
    else
    {
      v10 = _isctype_l(v25, 8, &Locale);
      locinfo = Locale.locinfo;
    }
  }
  while ( v10 != 0 );
  v24 = v5;
  if ( v25 == 45 )
  {
    a5 |= 2u;
  }
  else if ( v25 != 43 )
  {
    goto LABEL_19;
  }
  v11 = *v5++;
  v24 = v5;
  v25 = v11;
LABEL_19:
  if ( a4 == 0 )
  {
    if ( v25 != 48 )
    {
      a4 = 10;
      goto LABEL_31;
    }
    if ( *v5 != 120 && *v5 != 88 )
    {
      a4 = 8;
      goto LABEL_31;
    }
    a4 = 16;
  }
  if ( a4 == 16 && v25 == 48 && (*v5 == 120 || *v5 == 88) )
  {
    v12 = v5 + 1;
    v25 = *v12;
    v24 = v12 + 1;
  }
LABEL_31:
  v20 = a4 >> 31;
  v13 = *((_DWORD *)locinfo + 50);
  v21 = 0xFFFFFFFFFFFFFFFFuLL % a4;
  v22 = 0xFFFFFFFFFFFFFFFFuLL / a4;
  while ( 1 )
  {
    if ( (*(_WORD *)(v13 + 2 * v25) & 4) != 0 )
    {
      v14 = (char)v25 - 48;
    }
    else
    {
      if ( (*(_WORD *)(v13 + 2 * v25) & 0x103) == 0 )
        break;
      v15 = (char)v25;
      if ( (unsigned __int8)(v25 - 97) <= 0x19u )
        v15 = (char)v25 - 32;
      v14 = v15 - 55;
    }
    if ( v14 >= a4 )
      break;
    a5 |= 8u;
    if ( v23 < v22 || v23 == v22 && v14 <= v21 )
    {
      v23 = v14 + __PAIR64__(v20, a4) * v23;
    }
    else
    {
      a5 |= 4u;
      if ( a3 == nullptr )
        break;
    }
    v16 = *v24++;
    v25 = v16;
  }
  --v24;
  if ( (a5 & 8) != 0 )
  {
    if ( (a5 & 4) != 0
      || (a5 & 1) == 0
      && ((a5 & 2) != 0 && v23 > 0x8000000000000000uLL || (a5 & 2) == 0 && (v23 & 0x8000000000000000uLL) != 0LL) )
    {
      *_errno() = 34;
      if ( (a5 & 1) != 0 )
      {
        v23 = -1;
      }
      else if ( (a5 & 2) != 0 )
      {
        v23 = 0x8000000000000000uLL;
      }
      else
      {
        v23 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
  }
  else
  {
    if ( a3 != nullptr )
      v24 = a2;
    v23 = 0;
  }
  if ( a3 != nullptr )
    *a3 = v24;
  if ( (a5 & 2) != 0 )
    v23 = -(__int64)v23;
  if ( v19 != 0 )
    *(_DWORD *)(v18 + 112) &= ~2u;
  return v23;
}

// Address: 0x10011635
__int64 __cdecl _strtoi64(const char *String, char **EndPtr, int Radix)
{
  if ( dword_1001CFF4 != 0 )
    return strtoxq(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxq((struct localeinfo_struct *)&off_1001C618, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x10011660
__int64 __cdecl _strtoi64_l(const char *String, char **EndPtr, int Radix, _locale_t Locale)
{
  return strtoxq((struct localeinfo_struct *)Locale, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x1001167D
unsigned __int64 __cdecl _strtoui64(const char *String, char **EndPtr, int Radix)
{
  if ( dword_1001CFF4 != 0 )
    return strtoxq(nullptr, String, (const char **)EndPtr, Radix, 1);
  else
    return strtoxq((struct localeinfo_struct *)&off_1001C618, String, (const char **)EndPtr, Radix, 1);
}

// Address: 0x100116A9
unsigned __int64 __cdecl _strtoui64_l(const char *String, char **EndPtr, int Radix, _locale_t Locale)
{
  return strtoxq((struct localeinfo_struct *)Locale, String, (const char **)EndPtr, Radix, 1);
}

// Address: 0x100116D0
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

// Address: 0x10011740
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

// Address: 0x100117D5
int __cdecl _mbsnbicoll_l(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  int v5; // eax
  _BYTE v6[4]; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]
  char v9; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v6, (struct localeinfo_struct *)Locale);
  if ( MaxCount == 0 )
  {
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0;
  }
  if ( Str1 != nullptr && Str2 != nullptr )
  {
    if ( MaxCount > 0x7FFFFFFF )
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
LABEL_15:
      if ( v9 != 0 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
    if ( *(_DWORD *)(v7 + 8) != 0 )
    {
      v5 = __crtCompareStringA(
             (struct localeinfo_struct *)v6,
             *(struct localeinfo_struct **)(v7 + 12),
             0x1001u,
             (int)Str1,
             MaxCount,
             (char *)Str2,
             MaxCount,
             *(char **)(v7 + 4));
      if ( v5 == 0 )
        goto LABEL_15;
      result = v5 - 2;
    }
    else
    {
      result = _strnicoll_l((const char *)Str1, (const char *)Str2, MaxCount, Locale);
    }
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}

// Address: 0x100118C3
int __cdecl _mbsnbicoll(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount)
{
  return _mbsnbicoll_l(Str1, Str2, MaxCount, nullptr);
}

// Address: 0x100118DD
int __wtomb_environ()
{
  LPCWCH *v0; // edi
  const WCHAR *v1; // eax
  size_t v2; // eax
  void *v3; // eax
  int cbMultiByte; // [esp+Ch] [ebp-8h]
  void *Block; // [esp+10h] [ebp-4h] BYREF

  v0 = (LPCWCH *)dword_1001D370;
  Block = nullptr;
  v1 = *(const WCHAR **)dword_1001D370;
  if ( *(_DWORD *)dword_1001D370 == 0 )
    return 0;
  while ( 1 )
  {
    v2 = WideCharToMultiByte(0, 0, v1, -1, nullptr, 0, nullptr, nullptr);
    cbMultiByte = v2;
    if ( v2 == 0 )
      break;
    v3 = (void *)_calloc_crt(v2, 1);
    Block = v3;
    if ( v3 == nullptr )
      break;
    if ( WideCharToMultiByte(0, 0, *v0, -1, (LPSTR)v3, cbMultiByte, nullptr, nullptr) == 0 )
    {
      free(Block);
      return -1;
    }
    if ( (int)__crtsetenv(&Block, 0) < 0 && Block != nullptr )
    {
      free(Block);
      Block = nullptr;
    }
    v1 = *++v0;
    if ( *v0 == nullptr )
      return 0;
  }
  return -1;
}

// Address: 0x10011974
void *__cdecl calloc(size_t Count, size_t Size)
{
  void *v2; // esi
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v2 = _calloc_impl(Count, Size, &v4);
  if ( v2 == nullptr && v4 != 0 && _errno() != nullptr )
    *_errno() = v4;
  return v2;
}

// Address: 0x100119B4
size_t __cdecl strnlen(const char *String, size_t MaxCount)
{
  size_t result; // eax

  for ( result = 0; result < MaxCount; ++String )
  {
    if ( *String == 0 )
      break;
    ++result;
  }
  return result;
}

// Address: 0x100119E0
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x10011A14
const char *__usercall strncnt@<eax>(_BYTE *a1@<eax>, const char *a2)
{
  int v2; // ecx

  v2 = (int)a2;
  while ( v2 != 0 )
  {
    --v2;
    if ( *a1 == 0 )
      return &a2[-v2 - 1];
    ++a1;
  }
  v2 = -1;
  return &a2[-v2 - 1];
}

// Address: 0x10011A32
int __fastcall __crtCompareStringA_stat(
        int a1,
        CHAR *a2,
        struct localeinfo_struct *Locale,
        DWORD dwCmpFlags,
        int cbMultiByte,
        const char *a6,
        int cchCount2,
        const char *CodePage)
{
  int v10; // edx
  int result; // eax
  BYTE *LeadByte; // eax
  unsigned __int8 v13; // dl
  BYTE *i; // eax
  unsigned __int8 v15; // dl
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // eax
  void *v19; // esp
  WCHAR *v20; // eax
  int v21; // eax
  int v22; // ebx
  unsigned int v23; // eax
  void *v24; // esp
  WCHAR *v25; // edi
  WCHAR *v26; // eax
  CHAR *v27; // edi
  void *v28; // ebx
  const char *v29; // eax
  UINT v30; // esi
  const CHAR *v31; // eax
  int v32; // esi
  _DWORD v34[2]; // [esp+0h] [ebp-38h] BYREF
  int v35; // [esp+8h] [ebp-30h] BYREF
  int cchCount1; // [esp+Ch] [ebp-2Ch]
  int v37; // [esp+10h] [ebp-28h]
  LPCCH lpMultiByteStr; // [esp+14h] [ebp-24h]
  LPWSTR lpWideCharStr; // [esp+18h] [ebp-20h]
  LPCCH lpString2; // [esp+1Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+20h] [ebp-18h] BYREF

  lpMultiByteStr = a2;
  lpString2 = a6;
  if ( dword_1001DA24 == 0 )
  {
    if ( CompareStringW(0, 0, &String2, 1, &String2, 1) != 0 )
    {
      dword_1001DA24 = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_1001DA24 = 2;
    }
  }
  if ( cbMultiByte <= 0 )
  {
    if ( cbMultiByte < -1 )
      return 0;
  }
  else
  {
    cbMultiByte = (int)strncnt(a2, (const char *)cbMultiByte);
  }
  v10 = cchCount2;
  if ( cchCount2 <= 0 )
  {
    if ( cchCount2 < -1 )
      return 0;
  }
  else
  {
    v10 = (int)strncnt(lpString2, (const char *)cchCount2);
    cchCount2 = v10;
  }
  if ( dword_1001DA24 == 2 || dword_1001DA24 == 0 )
  {
    v27 = nullptr;
    v28 = nullptr;
    if ( Locale == nullptr )
      Locale = *(struct localeinfo_struct **)(*(_DWORD *)a1 + 20);
    if ( CodePage == nullptr )
      CodePage = *(const char **)(*(_DWORD *)a1 + 4);
    v29 = (const char *)__ansicp((LCID)Locale);
    v30 = (UINT)v29;
    if ( v29 == (const char *)-1 )
      return 0;
    if ( v29 != CodePage )
    {
      v28 = __convertcp((UINT)CodePage, (UINT)v29, lpMultiByteStr, &cbMultiByte, nullptr, 0);
      if ( v28 == nullptr )
        return 0;
      v31 = (const CHAR *)__convertcp((UINT)CodePage, v30, lpString2, &cchCount2, nullptr, 0);
      v27 = (CHAR *)v31;
      if ( v31 == nullptr )
      {
        free(v28);
        return 0;
      }
      lpMultiByteStr = (LPCCH)v28;
      lpString2 = v31;
    }
    v32 = CompareStringA((LCID)Locale, dwCmpFlags, lpMultiByteStr, cbMultiByte, lpString2, cchCount2);
    if ( v28 != nullptr )
    {
      free(v28);
      free(v27);
    }
    return v32;
  }
  result = 1;
  if ( dword_1001DA24 != 1 )
    return 0;
  v37 = 0;
  if ( CodePage == nullptr )
    CodePage = *(const char **)(*(_DWORD *)a1 + 4);
  if ( cbMultiByte != 0 && v10 != 0 )
  {
LABEL_44:
    v16 = MultiByteToWideChar((UINT)CodePage, 9u, a2, cbMultiByte, nullptr, 0);
    v17 = v16;
    cchCount1 = v16;
    if ( v16 == 0 )
      return 0;
    if ( v16 <= 0 || 0xFFFFFFE0 / v16 < 2 )
    {
      lpWideCharStr = nullptr;
LABEL_55:
      if ( lpWideCharStr != nullptr )
      {
        if ( MultiByteToWideChar((UINT)CodePage, 1u, lpMultiByteStr, cbMultiByte, lpWideCharStr, v17) != 0 )
        {
          v21 = MultiByteToWideChar((UINT)CodePage, 9u, lpString2, cchCount2, nullptr, 0);
          v22 = v21;
          if ( v21 != 0 )
          {
            if ( v21 <= 0 || 0xFFFFFFE0 / v21 < 2 )
            {
              v25 = nullptr;
LABEL_67:
              if ( v25 != nullptr )
              {
                if ( MultiByteToWideChar((UINT)CodePage, 1u, lpString2, cchCount2, v25, v22) != 0 )
                  v37 = CompareStringW((LCID)Locale, dwCmpFlags, lpWideCharStr, cchCount1, v25, v22);
                _freea(v25);
              }
              goto $error_cleanup$27659;
            }
            v23 = 2 * v21 + 8;
            if ( v23 > 0x400 )
            {
              v26 = (WCHAR *)malloc(2 * v22 + 8);
              if ( v26 != nullptr )
              {
                *(_DWORD *)v26 = 56797;
                v26 += 4;
              }
              v25 = v26;
              goto LABEL_67;
            }
            v24 = alloca(v23);
            if ( v34 != nullptr )
            {
              v34[0] = 52428;
              v25 = (WCHAR *)&v35;
              goto LABEL_67;
            }
          }
        }
$error_cleanup$27659:
        _freea(lpWideCharStr);
        return v37;
      }
      return 0;
    }
    v18 = 2 * v16 + 8;
    if ( v18 > 0x400 )
    {
      v20 = (WCHAR *)malloc(2 * v17 + 8);
      if ( v20 != nullptr )
      {
        *(_DWORD *)v20 = 56797;
        goto LABEL_52;
      }
    }
    else
    {
      v19 = alloca(v18);
      v20 = (WCHAR *)v34;
      if ( v34 != nullptr )
      {
        v34[0] = 52428;
LABEL_52:
        v20 += 4;
      }
    }
    lpWideCharStr = v20;
    goto LABEL_55;
  }
  if ( cbMultiByte == v10 )
    return 2;
  if ( v10 <= 1 )
  {
    if ( cbMultiByte > 1 )
      return 3;
    if ( !GetCPInfo((UINT)CodePage, &CPInfo) )
      return 0;
    if ( cbMultiByte > 0 )
    {
      if ( CPInfo.MaxCharSize >= 2 )
      {
        LeadByte = CPInfo.LeadByte;
        if ( CPInfo.LeadByte[0] != 0 )
        {
          while ( 1 )
          {
            v13 = LeadByte[1];
            if ( v13 == 0 )
              break;
            if ( (unsigned __int8)*a2 >= *LeadByte && (unsigned __int8)*a2 <= v13 )
              return 2;
            LeadByte += 2;
            if ( *LeadByte == 0 )
              return 3;
          }
        }
      }
      return 3;
    }
    if ( cchCount2 > 0 )
    {
      if ( CPInfo.MaxCharSize >= 2 )
      {
        for ( i = CPInfo.LeadByte; *i != 0; i += 2 )
        {
          v15 = i[1];
          if ( v15 == 0 )
            break;
          if ( (unsigned int)*lpString2 >= *i && (unsigned int)*lpString2 <= v15 )
            return 2;
        }
      }
      return 1;
    }
    goto LABEL_44;
  }
  return result;
}

// Address: 0x10011DA2
int __cdecl __crtCompareStringA(
        struct localeinfo_struct *a1,
        struct localeinfo_struct *a2,
        DWORD a3,
        CHAR *a4,
        unsigned int a5,
        char *a6,
        int a7,
        char *a8)
{
  int result; // eax
  _BYTE v9[8]; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a1);
  result = __crtCompareStringA_stat((int)v9, a4, a2, a3, a5, a6, a7, a8);
  if ( v11 != 0 )
    *(_DWORD *)(v10 + 112) &= ~2u;
  return result;
}

// Address: 0x10011DE4
int __cdecl _strnicoll_l(const char *String1, const char *String2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  struct localeinfo_struct *v5; // ecx
  int v6; // eax
  __crt_locale_pointers Localea; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  char v9; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( MaxCount == 0 )
  {
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0;
  }
  if ( String1 != nullptr && String2 != nullptr )
  {
    if ( MaxCount > 0x7FFFFFFF )
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
LABEL_16:
      if ( v9 != 0 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
    v5 = *((struct localeinfo_struct **)Localea.locinfo + 4);
    if ( v5 != nullptr )
    {
      v6 = __crtCompareStringA(
             (struct localeinfo_struct *)&Localea,
             v5,
             0x1001u,
             (CHAR *)String1,
             MaxCount,
             (char *)String2,
             MaxCount,
             *((char **)Localea.locinfo + 2));
      if ( v6 == 0 )
      {
        *_errno() = 22;
        goto LABEL_16;
      }
      result = v6 - 2;
    }
    else
    {
      result = _strnicmp_l(String1, String2, MaxCount, &Localea);
    }
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}

// Address: 0x10011EDE
int __cdecl _strnicoll(const char *String1, const char *String2, size_t MaxCount)
{
  if ( dword_1001CFF4 != 0 )
    return _strnicoll_l(String1, String2, MaxCount, nullptr);
  else
    return _strnicmp(String1, String2, MaxCount);
}

// Address: 0x10011F07
int __usercall findenv@<eax>(size_t a1@<edi>, unsigned __int8 *Str1)
{
  const unsigned __int8 **i; // esi
  unsigned __int8 v3; // al

  for ( i = (const unsigned __int8 **)dword_1001D368; ; ++i )
  {
    if ( *i == nullptr )
      return -(((char *)i - (_BYTE *)dword_1001D368) >> 2);
    if ( _mbsnbicoll(Str1, *i, a1) == 0 )
    {
      v3 = (*i)[a1];
      if ( v3 == 61 || v3 == 0 )
        break;
    }
  }
  return ((char *)i - (_BYTE *)dword_1001D368) >> 2;
}

// Address: 0x10011F59
char **__usercall copy_environ@<eax>(const char **a1@<eax>)
{
  char **result; // eax
  const char **v3; // ecx
  char **v4; // esi
  char **v5; // [esp+4h] [ebp-4h]

  result = nullptr;
  v3 = a1;
  if ( a1 != nullptr )
  {
    if ( *a1 != nullptr )
    {
      do
      {
        ++v3;
        result = (char **)((char *)result + 1);
      }
      while ( *v3 != nullptr );
    }
    v4 = (char **)_calloc_crt((size_t)result + 1, 4);
    v5 = v4;
    if ( v4 == nullptr )
      _amsg_exit(9);
    while ( *a1 != nullptr )
      *v4++ = _strdup(*a1++);
    *v4 = nullptr;
    return v5;
  }
  return result;
}

// Address: 0x10011FB3
int __cdecl __crtsetenv(const unsigned __int8 **a1, int a2)
{
  const unsigned __int8 *v3; // esi
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // edi
  char **v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  size_t v11; // edi
  char *v12; // esi
  char *v13; // eax
  unsigned __int8 **v14; // ecx
  size_t v15; // eax
  char *v16; // edi
  size_t v17; // eax
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // [esp+4h] [ebp-14h]
  char *v20; // [esp+8h] [ebp-10h]
  int v21; // [esp+Ch] [ebp-Ch]
  BOOL v22; // [esp+10h] [ebp-8h]
  unsigned __int8 *Block; // [esp+14h] [ebp-4h]

  v21 = 0;
  if ( a1 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  v3 = *a1;
  Block = (unsigned __int8 *)*a1;
  if ( *a1 == nullptr )
    goto LABEL_12;
  v4 = _mbschr(v3, 0x3Du);
  v5 = v4;
  v19 = v4;
  if ( v4 == nullptr || v3 == v4 )
    goto LABEL_12;
  v22 = v4[1] == 0;
  v6 = (char **)dword_1001D368;
  if ( dword_1001D368 == (void *)dword_1001D36C )
  {
    v6 = copy_environ((const char **)dword_1001D368);
    dword_1001D368 = v6;
  }
  if ( v6 == nullptr )
  {
    if ( a2 != 0 && dword_1001D370 != 0 )
    {
      if ( __wtomb_environ() != 0 )
      {
LABEL_12:
        *_errno() = 22;
        return -1;
      }
    }
    else
    {
      if ( v22 )
        return 0;
      v7 = _malloc_crt(4u);
      dword_1001D368 = v7;
      if ( v7 == nullptr )
        return -1;
      *v7 = 0;
      if ( dword_1001D370 == 0 )
      {
        v8 = _malloc_crt(4u);
        dword_1001D370 = (int)v8;
        if ( v8 == nullptr )
          return -1;
        *v8 = 0;
      }
    }
  }
  v9 = dword_1001D368;
  v20 = (char *)dword_1001D368;
  if ( dword_1001D368 == nullptr )
    return -1;
  v10 = findenv(v5 - Block, Block);
  v11 = v10;
  if ( v10 < 0 || *v9 == 0 )
  {
    if ( !v22 )
    {
      if ( v10 < 0 )
        v11 = -v10;
      if ( (int)(v11 + 2) <= (int)v11 )
        return -1;
      if ( v11 + 2 >= 0x3FFFFFFF )
        return -1;
      v13 = (char *)_recalloc_crt(dword_1001D368, 4u, v11 + 2);
      if ( v13 == nullptr )
        return -1;
      v14 = (unsigned __int8 **)&v13[4 * v11];
      *v14 = Block;
      v14[1] = nullptr;
      *a1 = nullptr;
      goto LABEL_37;
    }
    free(Block);
    *a1 = nullptr;
    return 0;
  }
  v12 = (char *)&v9[v10];
  free(*(void **)v12);
  if ( !v22 )
  {
    *(_DWORD *)v12 = Block;
    *a1 = nullptr;
    goto LABEL_38;
  }
  while ( *(_DWORD *)v12 != 0 )
  {
    *(_DWORD *)v12 = *((_DWORD *)v12 + 1);
    ++v11;
    v12 = &v20[4 * v11];
  }
  if ( v11 < 0x3FFFFFFF )
  {
    v13 = (char *)_recalloc_crt(dword_1001D368, v11, 4u);
    if ( v13 == nullptr )
      goto LABEL_38;
LABEL_37:
    dword_1001D368 = v13;
  }
LABEL_38:
  if ( a2 != 0 )
  {
    v15 = strlen((const char *)Block);
    v16 = (char *)_calloc_crt(v15 + 2, 1);
    if ( v16 != nullptr )
    {
      v17 = strlen((const char *)Block);
      if ( strcpy_s(v16, v17 + 2, (const char *)Block) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v18 = &v19[v16 - (char *)Block];
      *v18 = 0;
      if ( !SetEnvironmentVariableA(v16, !v22 ? (LPCSTR)v18 + 1 : nullptr) )
      {
        v21 = -1;
        *_errno() = 42;
      }
      free(v16);
    }
  }
  if ( v22 )
  {
    free(Block);
    *a1 = nullptr;
  }
  return v21;
}

// Address: 0x100121FE
char *__cdecl _strdup(const char *Source)
{
  size_t v2; // esi
  char *v3; // eax
  char *v4; // edi

  if ( Source == nullptr )
    return nullptr;
  v2 = strlen(Source) + 1;
  v3 = (char *)malloc(v2);
  v4 = v3;
  if ( v3 == nullptr )
    return nullptr;
  if ( strcpy_s(v3, v2, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return v4;
}

// Address: 0x10012253
unsigned __int8 *__cdecl _mbschr_l(const unsigned __int8 *Str, unsigned int C, _locale_t Locale)
{
  unsigned __int8 *result; // eax
  unsigned __int16 v4; // cx
  _BYTE v5[4]; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-8h]
  char v8; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v5, (struct localeinfo_struct *)Locale);
  result = (unsigned __int8 *)Str;
  if ( Str != nullptr )
  {
    if ( *(_DWORD *)(v6 + 8) != 0 )
    {
      while ( 1 )
      {
        v4 = *result;
        if ( *result == 0 )
          break;
        if ( (*(_BYTE *)((unsigned __int8)v4 + v6 + 29) & 4) != 0 )
        {
          if ( *++result == 0 )
            goto LABEL_17;
          if ( C == (*result | (v4 << 8)) )
          {
            --result;
            goto LABEL_15;
          }
        }
        else if ( C == *result )
        {
          break;
        }
        ++result;
      }
      if ( C == *result )
        goto LABEL_15;
LABEL_17:
      if ( v8 != 0 )
        *(_DWORD *)(v7 + 112) &= ~2u;
      return nullptr;
    }
    else
    {
      result = (unsigned __int8 *)strchr((const char *)Str, C);
LABEL_15:
      if ( v8 != 0 )
        *(_DWORD *)(v7 + 112) &= ~2u;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v8 != 0 )
      *(_DWORD *)(v7 + 112) &= ~2u;
    return nullptr;
  }
  return result;
}

// Address: 0x1001230F
unsigned __int8 *__cdecl _mbschr(const unsigned __int8 *Str, unsigned int C)
{
  return _mbschr_l(Str, C, nullptr);
}

// Address: 0x10012340
char *__cdecl strchr(const char *Str, int Val)
{
  const char *v2; // edx
  char v3; // cl
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax

  v2 = Str;
  if ( ((unsigned __int8)Str & 3) != 0 )
  {
    while ( 1 )
    {
      v3 = *v2++;
      if ( v3 == (_BYTE)Val )
        return (char *)(v2 - 1);
      if ( v3 == 0 )
        return nullptr;
      if ( ((unsigned __int8)v2 & 3) == 0 )
        goto main_loop_0;
    }
  }
  else
  {
    while ( 1 )
    {
main_loop_0:
      while ( 1 )
      {
        v4 = (((unsigned __int8)Val << 8)
            | (unsigned __int8)Val
            | ((((unsigned __int8)Val << 8) | (unsigned __int8)Val) << 16))
           ^ *(_DWORD *)v2;
        v5 = *(_DWORD *)v2 + 2130640639;
        v6 = v5 ^ ~*(_DWORD *)v2;
        v2 += 4;
        if ( (((v4 + 2130640639) ^ ~v4) & 0x81010100) != 0 )
          break;
        v7 = v6 & 0x81010100;
        if ( v7 != 0 && ((v7 & 0x1010100) != 0 || (v5 & 0x80000000) == 0) )
          return nullptr;
      }
      v9 = *((_DWORD *)v2 - 1);
      if ( (_BYTE)v9 == (_BYTE)Val )
        break;
      if ( (_BYTE)v9 == 0 )
        return nullptr;
      if ( BYTE1(v9) == (_BYTE)Val )
        return (char *)(v2 - 3);
      if ( BYTE1(v9) == 0 )
        return nullptr;
      v10 = HIWORD(v9);
      if ( (_BYTE)v10 == (_BYTE)Val )
        return (char *)(v2 - 2);
      if ( (_BYTE)v10 == 0 )
        return nullptr;
      if ( BYTE1(v10) == (_BYTE)Val )
        return (char *)(v2 - 1);
      if ( BYTE1(v10) == 0 )
        return nullptr;
    }
    return (char *)(v2 - 4);
  }
}

// Address: 0x100123FE
// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}

// Address: 0x10012404
// attributes: thunk
LPSTR __stdcall GetCommandLineA()
{
  return __imp_GetCommandLineA();
}

// Address: 0x1001240A
// attributes: thunk
BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo)
{
  return __imp_GetCPInfo(CodePage, lpCPInfo);
}

// Address: 0x10012410
// attributes: thunk
LONG __stdcall InterlockedIncrement(volatile LONG *lpAddend)
{
  return __imp_InterlockedIncrement(lpAddend);
}

// Address: 0x10012416
// attributes: thunk
LONG __stdcall InterlockedDecrement(volatile LONG *lpAddend)
{
  return __imp_InterlockedDecrement(lpAddend);
}

// Address: 0x1001241C
// attributes: thunk
UINT __stdcall GetACP()
{
  return __imp_GetACP();
}

// Address: 0x10012422
// attributes: thunk
UINT __stdcall GetOEMCP()
{
  return __imp_GetOEMCP();
}

// Address: 0x10012428
// attributes: thunk
BOOL __stdcall IsValidCodePage(UINT CodePage)
{
  return __imp_IsValidCodePage(CodePage);
}

// Address: 0x1001242E
// attributes: thunk
HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName)
{
  return __imp_GetModuleHandleW(lpModuleName);
}

// Address: 0x10012434
// attributes: thunk
FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
{
  return __imp_GetProcAddress(hModule, lpProcName);
}

// Address: 0x1001243A
// attributes: thunk
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
{
  return __imp_TlsGetValue(dwTlsIndex);
}

// Address: 0x10012440
// attributes: thunk
DWORD __stdcall TlsAlloc()
{
  return __imp_TlsAlloc();
}

// Address: 0x10012446
// attributes: thunk
BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  return __imp_TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x1001244C
// attributes: thunk
BOOL __stdcall TlsFree(DWORD dwTlsIndex)
{
  return __imp_TlsFree(dwTlsIndex);
}

// Address: 0x10012452
// attributes: thunk
void __stdcall SetLastError(DWORD dwErrCode)
{
  __imp_SetLastError(dwErrCode);
}

// Address: 0x10012458
// attributes: thunk
DWORD __stdcall GetLastError()
{
  return __imp_GetLastError();
}

// Address: 0x1001245E
// attributes: thunk
HANDLE __stdcall GetCurrentThread_0()
{
  return GetCurrentThread();
}

// Address: 0x10012464
// attributes: thunk
int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest)
{
  return __imp_LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}

// Address: 0x1001246A
// attributes: thunk
int __stdcall WideCharToMultiByte(
        UINT CodePage,
        DWORD dwFlags,
        LPCWCH lpWideCharStr,
        int cchWideChar,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        LPCCH lpDefaultChar,
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

// Address: 0x10012470
// attributes: thunk
int __stdcall MultiByteToWideChar(
        UINT CodePage,
        DWORD dwFlags,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpWideCharStr,
        int cchWideChar)
{
  return __imp_MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

// Address: 0x10012476
// attributes: thunk
int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
{
  return __imp_LCMapStringW(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}

// Address: 0x1001247C
// attributes: thunk
BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
{
  return __imp_TerminateProcess(hProcess, uExitCode);
}

// Address: 0x10012482
// attributes: thunk
HANDLE __stdcall GetCurrentProcess()
{
  return __imp_GetCurrentProcess();
}

// Address: 0x10012488
// attributes: thunk
LONG __stdcall UnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return __imp_UnhandledExceptionFilter(ExceptionInfo);
}

// Address: 0x1001248E
// attributes: thunk
LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
  return __imp_SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

// Address: 0x10012494
// attributes: thunk
BOOL __stdcall IsDebuggerPresent()
{
  return __imp_IsDebuggerPresent();
}

// Address: 0x1001249A
// attributes: thunk
BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
{
  return __imp_HeapFree(hHeap, dwFlags, lpMem);
}

// Address: 0x100124A0
// attributes: thunk
void __stdcall Sleep(DWORD dwMilliseconds)
{
  __imp_Sleep(dwMilliseconds);
}

// Address: 0x100124A6
// attributes: thunk
void __stdcall __noreturn ExitProcess(UINT uExitCode)
{
  __imp_ExitProcess(uExitCode);
}

// Address: 0x100124AC
// attributes: thunk
UINT __stdcall SetHandleCount(UINT uNumber)
{
  return __imp_SetHandleCount(uNumber);
}

// Address: 0x100124B2
// attributes: thunk
HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
{
  return __imp_GetStdHandle(nStdHandle);
}

// Address: 0x100124B8
// attributes: thunk
DWORD __stdcall GetFileType(HANDLE hFile)
{
  return __imp_GetFileType(hFile);
}

// Address: 0x100124BE
// attributes: thunk
void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)
{
  __imp_GetStartupInfoA(lpStartupInfo);
}

// Address: 0x100124C4
// attributes: thunk
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_DeleteCriticalSection(lpCriticalSection);
}

// Address: 0x100124CA
// attributes: thunk
DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
{
  return __imp_GetModuleFileNameA(hModule, lpFilename, nSize);
}

// Address: 0x100124D0
// attributes: thunk
BOOL __stdcall FreeEnvironmentStringsA(LPCH penv)
{
  return __imp_FreeEnvironmentStringsA(penv);
}

// Address: 0x100124D6
// attributes: thunk
LPCH __stdcall GetEnvironmentStrings()
{
  return __imp_GetEnvironmentStrings();
}

// Address: 0x100124DC
// attributes: thunk
BOOL __stdcall FreeEnvironmentStringsW(LPWCH penv)
{
  return __imp_FreeEnvironmentStringsW(penv);
}

// Address: 0x100124E2
// attributes: thunk
LPWCH __stdcall GetEnvironmentStringsW()
{
  return __imp_GetEnvironmentStringsW();
}

// Address: 0x100124E8
// attributes: thunk
HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize)
{
  return __imp_HeapCreate(flOptions, dwInitialSize, dwMaximumSize);
}

// Address: 0x100124EE
// attributes: thunk
BOOL __stdcall HeapDestroy(HANDLE hHeap)
{
  return __imp_HeapDestroy(hHeap);
}

// Address: 0x100124F4
// attributes: thunk
BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType)
{
  return __imp_VirtualFree(lpAddress, dwSize, dwFreeType);
}

// Address: 0x100124FA
// attributes: thunk
BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)
{
  return __imp_QueryPerformanceCounter(lpPerformanceCount);
}

// Address: 0x10012500
// attributes: thunk
DWORD __stdcall GetTickCount()
{
  return __imp_GetTickCount();
}

// Address: 0x10012506
// attributes: thunk
DWORD __stdcall GetCurrentProcessId()
{
  return __imp_GetCurrentProcessId();
}

// Address: 0x1001250C
// attributes: thunk
void __stdcall GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)
{
  __imp_GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
}

// Address: 0x10012512
// attributes: thunk
BOOL __stdcall GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
{
  return __imp_GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

// Address: 0x10012518
// attributes: thunk
BOOL __stdcall GetStringTypeW(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)
{
  return __imp_GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

// Address: 0x1001251E
// attributes: thunk
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_LeaveCriticalSection(lpCriticalSection);
}

// Address: 0x10012524
// attributes: thunk
void __stdcall __noreturn FatalAppExitA(UINT uAction, LPCSTR lpMessageText)
{
  __imp_FatalAppExitA(uAction, lpMessageText);
}

// Address: 0x1001252A
// attributes: thunk
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_EnterCriticalSection(lpCriticalSection);
}

// Address: 0x10012530
// attributes: thunk
int __stdcall GetTimeFormatA(
        LCID Locale,
        DWORD dwFlags,
        const SYSTEMTIME *lpTime,
        LPCSTR lpFormat,
        LPSTR lpTimeStr,
        int cchTime)
{
  return __imp_GetTimeFormatA(Locale, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
}

// Address: 0x10012536
// attributes: thunk
int __stdcall GetDateFormatA(
        LCID Locale,
        DWORD dwFlags,
        const SYSTEMTIME *lpDate,
        LPCSTR lpFormat,
        LPSTR lpDateStr,
        int cchDate)
{
  return __imp_GetDateFormatA(Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate);
}

// Address: 0x1001253C
// attributes: thunk
LCID __stdcall GetUserDefaultLCID()
{
  return __imp_GetUserDefaultLCID();
}

// Address: 0x10012542
// attributes: thunk
int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
  return __imp_GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
}

// Address: 0x10012548
// attributes: thunk
BOOL __stdcall EnumSystemLocalesA(LOCALE_ENUMPROCA lpLocaleEnumProc, DWORD dwFlags)
{
  return __imp_EnumSystemLocalesA(lpLocaleEnumProc, dwFlags);
}

// Address: 0x1001254E
// attributes: thunk
BOOL __stdcall IsValidLocale(LCID Locale, DWORD dwFlags)
{
  return __imp_IsValidLocale(Locale, dwFlags);
}

// Address: 0x10012554
// attributes: thunk
LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
{
  return __imp_HeapAlloc(hHeap, dwFlags, dwBytes);
}

// Address: 0x1001255A
// attributes: thunk
LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect)
{
  return __imp_VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
}

// Address: 0x10012560
// attributes: thunk
LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
{
  return __imp_HeapReAlloc(hHeap, dwFlags, lpMem, dwBytes);
}

// Address: 0x10012566
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

// Address: 0x1001256C
// attributes: thunk
BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)
{
  return __imp_SetConsoleCtrlHandler(HandlerRoutine, Add);
}

// Address: 0x10012572
// attributes: thunk
BOOL __stdcall FreeLibrary(HMODULE hLibModule)
{
  return __imp_FreeLibrary(hLibModule);
}

// Address: 0x10012578
// attributes: thunk
LONG __stdcall InterlockedExchange(volatile LONG *Target, LONG Value)
{
  return __imp_InterlockedExchange(Target, Value);
}

// Address: 0x1001257E
// attributes: thunk
HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
{
  return __imp_LoadLibraryA(lpLibFileName);
}

// Address: 0x10012584
// attributes: thunk
BOOL __stdcall InitializeCriticalSectionAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return __imp_InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x1001258A
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x10012590
// attributes: thunk
DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)
{
  return __imp_GetTimeZoneInformation(lpTimeZoneInformation);
}

// Address: 0x10012596
// attributes: thunk
SIZE_T __stdcall HeapSize(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem)
{
  return __imp_HeapSize(hHeap, dwFlags, lpMem);
}

// Address: 0x1001259C
// attributes: thunk
int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  return __imp_GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
}

// Address: 0x100125A2
// attributes: thunk
int __stdcall CompareStringA(
        LCID Locale,
        DWORD dwCmpFlags,
        PCNZCH lpString1,
        int cchCount1,
        PCNZCH lpString2,
        int cchCount2)
{
  return __imp_CompareStringA(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}

// Address: 0x100125A8
// attributes: thunk
int __stdcall CompareStringW(
        LCID Locale,
        DWORD dwCmpFlags,
        PCNZWCH lpString1,
        int cchCount1,
        PCNZWCH lpString2,
        int cchCount2)
{
  return __imp_CompareStringW(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}

// Address: 0x100125AE
// attributes: thunk
BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue)
{
  return __imp_SetEnvironmentVariableA(lpName, lpValue);
}

