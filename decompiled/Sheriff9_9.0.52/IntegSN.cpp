// Decompiled from IntegSN.dll (Sheriff9_9.0.52\unpacked\IntegSN.dll)

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
    dword_100145E0 = (int)hinstDLL;
  return true;
}

// Address: 0x10001050
int __cdecl CheckSerialNumber_0(int a1)
{
  int v1; // eax
  CHAR *v2; // edx
  CHAR v3; // cl
  int v5; // edi
  int *v6; // esi
  char v7; // al
  int v8; // eax
  int i; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // kr00_4
  int v13; // eax
  int v14; // ebx
  int v15; // ecx
  int v16; // edx
  int v17; // edi
  int j; // eax
  int v19; // esi
  CHAR *v20; // eax
  int k; // esi
  bool v22; // zf
  int v23; // esi
  char v24; // al
  int v25; // [esp+4h] [ebp-CCh]
  int v26; // [esp+8h] [ebp-C8h]
  int v27; // [esp+Ch] [ebp-C4h]
  int v28; // [esp+10h] [ebp-C0h]
  int v29; // [esp+14h] [ebp-BCh]
  int v30; // [esp+18h] [ebp-B8h]
  int v31; // [esp+1Ch] [ebp-B4h]
  int v32; // [esp+20h] [ebp-B0h]
  int v33; // [esp+24h] [ebp-ACh]
  int v34; // [esp+28h] [ebp-A8h]
  int v35; // [esp+2Ch] [ebp-A4h]
  int v36; // [esp+30h] [ebp-A0h]
  int v37; // [esp+34h] [ebp-9Ch]
  int v38; // [esp+38h] [ebp-98h]
  int v39; // [esp+3Ch] [ebp-94h]
  int v40; // [esp+40h] [ebp-90h]
  int v41; // [esp+44h] [ebp-8Ch]
  int v42; // [esp+48h] [ebp-88h]
  int v43; // [esp+4Ch] [ebp-84h]
  _DWORD v44[2]; // [esp+50h] [ebp-80h]
  _DWORD v45[2]; // [esp+58h] [ebp-78h]
  CHAR String1[4]; // [esp+60h] [ebp-70h] BYREF
  int v47; // [esp+64h] [ebp-6Ch]
  int v48; // [esp+68h] [ebp-68h]
  int v49; // [esp+6Ch] [ebp-64h]
  int v50; // [esp+70h] [ebp-60h]
  int v51; // [esp+74h] [ebp-5Ch]
  int v52; // [esp+78h] [ebp-58h]
  CHAR String[20]; // [esp+7Ch] [ebp-54h] BYREF
  _DWORD v54[16]; // [esp+90h] [ebp-40h] BYREF

  v52 = 0;
  lstrcpyA(String1, (LPCSTR)(a1 + 4));
  v1 = 0;
  v2 = String;
  do
  {
    v3 = String1[v1];
    if ( v3 != 45 )
      *v2++ = v3;
    ++v1;
  }
  while ( v1 < 20 );
  if ( lstrlenA(String) != 16 )
  {
    *(_DWORD *)a1 = 0;
    return 1;
  }
  v5 = 0;
  v6 = v54;
  do
  {
    v7 = String[v5];
    if ( v7 < 48 || v7 > 57 )
      v8 = toupper(v7) - 55;
    else
      v8 = v7 - 48;
    *v6 = v8;
    ++v5;
    ++v6;
  }
  while ( v5 < 16 );
  for ( i = 0; i < 16; ++i )
  {
    switch ( i )
    {
      case 0:
      case 3:
      case 5:
      case 6:
        v11 = v54[i];
        switch ( v11 )
        {
          case 1:
            *(&v28 + i) = 0;
            continue;
          case 3:
            *(&v28 + i) = 1;
            continue;
          case 9:
            *(&v28 + i) = 2;
            continue;
          case 27:
            *(&v28 + i) = 3;
            continue;
          case 19:
            *(&v28 + i) = 4;
            continue;
          case 26:
            *(&v28 + i) = 5;
            continue;
          case 16:
            *(&v28 + i) = 6;
            continue;
          case 17:
            *(&v28 + i) = 7;
            continue;
          case 20:
            *(&v28 + i) = 8;
            continue;
          case 29:
            *(&v28 + i) = 9;
            continue;
          case 25:
            *(&v28 + i) = 10;
            continue;
          case 13:
            *(&v28 + i) = 11;
            continue;
          case 8:
            *(&v28 + i) = 12;
            continue;
          case 24:
            *(&v28 + i) = 13;
            continue;
          case 10:
            *(&v28 + i) = 14;
            continue;
          case 30:
            goto LABEL_153;
          default:
            break;
        }
        break;
      case 1:
      case 11:
      case 13:
      case 14:
        v10 = v54[i];
        switch ( v10 )
        {
          case 1:
            *(&v28 + i) = 0;
            continue;
          case 11:
            *(&v28 + i) = 1;
            continue;
          case 28:
            *(&v28 + i) = 2;
            continue;
          case 29:
            *(&v28 + i) = 3;
            continue;
          case 9:
            *(&v28 + i) = 4;
            continue;
          case 6:
            *(&v28 + i) = 5;
            continue;
          case 4:
            *(&v28 + i) = 6;
            continue;
          case 13:
            *(&v28 + i) = 7;
            continue;
          case 19:
            *(&v28 + i) = 8;
            continue;
          case 23:
            *(&v28 + i) = 9;
            continue;
          case 5:
            *(&v28 + i) = 10;
            continue;
          case 24:
            *(&v28 + i) = 11;
            continue;
          case 16:
            *(&v28 + i) = 12;
            continue;
          case 21:
            *(&v28 + i) = 13;
            continue;
          case 14:
            *(&v28 + i) = 14;
            continue;
          default:
            break;
        }
LABEL_120:
        if ( v10 != 30 )
          continue;
LABEL_153:
        *(&v28 + i) = 15;
        continue;
      case 2:
      case 4:
      case 8:
      case 7:
        v10 = v54[i];
        switch ( v10 )
        {
          case 1:
            *(&v28 + i) = 0;
            continue;
          case 13:
            *(&v28 + i) = 1;
            continue;
          case 14:
            *(&v28 + i) = 2;
            continue;
          case 27:
            *(&v28 + i) = 3;
            continue;
          case 10:
            *(&v28 + i) = 4;
            continue;
          case 6:
            *(&v28 + i) = 5;
            continue;
          case 16:
            *(&v28 + i) = 6;
            continue;
          case 22:
            *(&v28 + i) = 7;
            continue;
          case 7:
            *(&v28 + i) = 8;
            continue;
          case 29:
            *(&v28 + i) = 9;
            continue;
          case 5:
            *(&v28 + i) = 10;
            continue;
          case 3:
            *(&v28 + i) = 11;
            continue;
          case 8:
            *(&v28 + i) = 12;
            continue;
          case 11:
            *(&v28 + i) = 13;
            continue;
          case 19:
            *(&v28 + i) = 14;
            continue;
          default:
            break;
        }
        goto LABEL_120;
      case 10:
      case 12:
      case 9:
      case 15:
        v10 = v54[i];
        switch ( v10 )
        {
          case 1:
            *(&v28 + i) = 0;
            continue;
          case 17:
            *(&v28 + i) = 1;
            continue;
          case 10:
            *(&v28 + i) = 2;
            continue;
          case 15:
            *(&v28 + i) = 3;
            continue;
          case 7:
            *(&v28 + i) = 4;
            continue;
          case 26:
            *(&v28 + i) = 5;
            continue;
          case 8:
            *(&v28 + i) = 6;
            continue;
          case 12:
            *(&v28 + i) = 7;
            continue;
          case 18:
            *(&v28 + i) = 8;
            continue;
          case 27:
            *(&v28 + i) = 9;
            continue;
          case 25:
            *(&v28 + i) = 10;
            continue;
          case 22:
            *(&v28 + i) = 11;
            continue;
          case 2:
            *(&v28 + i) = 12;
            continue;
          case 3:
            *(&v28 + i) = 13;
            continue;
          case 20:
            *(&v28 + i) = 14;
            continue;
          default:
            break;
        }
        goto LABEL_120;
      default:
        break;
    }
  }
  v12 = v42 + 16 * v34;
  v13 = v12 / 2;
  v26 = v28 - v12 / 2 + 16;
  if ( v26 >= 16 )
    v26 = v28 - v12 / 2;
  v14 = v29 - v13 + 16;
  if ( v14 >= 16 )
    v14 = v29 - v13;
  v27 = v14;
  v44[0] = v36 - v13 + 16;
  if ( v44[0] >= 16 )
    v44[0] = v36 - v13;
  v15 = v37 - v13 + 16;
  if ( v15 >= 16 )
    v15 = v37 - v13;
  v44[1] = v15;
  v45[0] = v33 - v13 + 16;
  if ( v45[0] >= 16 )
    v45[0] = v33 - v13;
  v16 = v41 - v13;
  if ( v41 - v13 + 16 < 16 )
    v16 = v41 - v13 + 16;
  v45[1] = v16;
  *(_DWORD *)String1 = v30 - v13 + 16;
  if ( *(int *)String1 >= 16 )
    *(_DWORD *)String1 = v30 - v13;
  v47 = v38 - v13 + 16;
  if ( v47 >= 16 )
    v47 = v38 - v13;
  v48 = v31 - v13 + 16;
  if ( v48 >= 16 )
    v48 = v31 - v13;
  v49 = v39 - v13 + 16;
  if ( v49 >= 16 )
    v49 = v39 - v13;
  v50 = v32 - v13 + 16;
  if ( v50 >= 16 )
    v50 = v32 - v13;
  v51 = v40 - v13 + 16;
  if ( v51 >= 16 )
    v51 = v40 - v13;
  v17 = v52;
  for ( j = 0; j < 2; v17 += *(int *)((char *)&v25 + j * 4) + v19 )
  {
    v19 = v44[j] + v45[j];
    ++j;
  }
  v20 = String1;
  for ( k = 6; k != 0; --k )
  {
    v17 += *(_DWORD *)v20;
    v20 += 4;
  }
  if ( v17 != v43 + 16 * v35 )
    return 0;
  *(_DWORD *)a1 = 1;
  if ( v26 != 5 )
  {
    if ( v26 == 4 )
    {
      if ( v14 == 4 )
        goto LABEL_197;
    }
    else if ( v26 == 8 )
    {
      if ( v14 == 8 )
        goto LABEL_197;
    }
    else if ( v26 == 6 && v14 == 6 )
    {
      goto LABEL_197;
    }
LABEL_196:
    *(_DWORD *)a1 = 0;
    goto LABEL_197;
  }
  if ( v14 != 5 )
    goto LABEL_196;
LABEL_197:
  switch ( v44[0] )
  {
    case 1:
    case 7:
      v22 = v15 == 10;
      break;
    case 2:
      if ( v15 != 12 && v15 != 11 && v15 != 10 )
        goto LABEL_205;
      goto LABEL_219;
    case 3:
      if ( v15 != 11 && v15 != 14 )
        goto LABEL_201;
      goto LABEL_219;
    case 4:
LABEL_205:
      v22 = v15 == 13;
      break;
    case 5:
      v22 = v15 == 14;
      break;
    case 6:
LABEL_201:
      v22 = v15 == 15;
      break;
    case 8:
      if ( v15 == 10 || v15 == 11 || v15 == 12 )
        goto LABEL_219;
      v22 = v15 == 13;
      break;
    case 9:
      if ( v15 == 10 )
        goto LABEL_219;
      v22 = v15 == 11;
      break;
    case 0xA:
      if ( v15 == 1 || v15 == 2 || v15 == 3 )
        goto LABEL_219;
      v22 = v15 == 4;
      break;
    default:
      goto LABEL_218;
  }
  if ( v22 )
  {
LABEL_219:
    v23 = a1;
  }
  else
  {
LABEL_218:
    v23 = a1;
    *(_DWORD *)a1 = 0;
  }
  if ( v45[0] != 0 || v16 != 1 )
    *(_DWORD *)v23 = 0;
  v24 = v44[0];
  *(_BYTE *)(v23 + 24) = v26;
  *(_BYTE *)(v23 + 25) = v14;
  *(_BYTE *)(v23 + 26) = v24;
  *(_BYTE *)(v23 + 27) = v15;
  *(_BYTE *)(v23 + 28) = 0;
  *(_BYTE *)(v23 + 29) = 1;
  return 1;
}

// Address: 0x10001A28
// attributes: thunk
int __stdcall lstrlenA(LPCSTR lpString)
{
  return __imp_lstrlenA(lpString);
}

// Address: 0x10001A2E
// attributes: thunk
LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2)
{
  return __imp_lstrcpyA(lpString1, lpString2);
}

// Address: 0x10001A34
int __cdecl _toupper(int C)
{
  return C - 32;
}

// Address: 0x10001A3C
int __cdecl toupper(int C)
{
  int v1; // ebx
  int result; // eax
  int Ca; // [esp+8h] [ebp+4h]

  v1 = 0;
  if ( dword_1001466C != 0 )
  {
    InterlockedIncrement(&Addend);
    if ( dword_10014DA0 != 0 )
    {
      InterlockedDecrement(&Addend);
      _lock(19);
      v1 = 1;
    }
    Ca = toupper_0(C);
    if ( v1 != 0 )
      _unlock(19);
    else
      InterlockedDecrement(&Addend);
    return Ca;
  }
  else
  {
    result = C;
    if ( C >= 97 && C <= 122 )
      return C - 32;
  }
  return result;
}

// Address: 0x10001AAB
int __cdecl toupper_0(int C)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  CHAR DestStr[4]; // [esp+4h] [ebp-4h] BYREF

  if ( dword_1001466C != 0 )
  {
    v2 = C;
    if ( (C >= 256
       || (dword_10010D54 <= 1 ? (v3 = *((_BYTE *)off_10010B48 + 2 * C) & 2) : (v3 = _isctype(C, 2)), v3 != 0))
      && (*((char *)off_10010B48 + 2 * BYTE1(v2) + 1) >= 0
        ? (LOWORD(C) = (unsigned __int8)v2,
           v4 = __crtLCMapStringA(dword_1001466C, 0x200u, (LPCSTR)&C, 1, DestStr, 3, 0, 1))
        : (LOBYTE(C) = BYTE1(v2),
           *(_WORD *)((char *)&C + 1) = (unsigned __int8)v2,
           v4 = __crtLCMapStringA(dword_1001466C, 0x200u, (LPCSTR)&C, 2, DestStr, 3, 0, 1)),
          v4 != 0) )
    {
      if ( v4 == 1 )
        return (unsigned __int8)DestStr[0];
      else
        return *(unsigned __int16 *)DestStr;
    }
    else
    {
      return v2;
    }
  }
  else
  {
    result = C;
    if ( C >= 97 && C <= 122 )
      return C - 32;
  }
  return result;
}

// Address: 0x10001B77
int __stdcall _CRT_INIT(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // eax

  if ( a2 == 1 )
  {
    dword_1001468C = GetVersion();
    if ( sub_10003213(1) == 0 )
      return 0;
    v3 = BYTE1(dword_1001468C);
    v4 = (unsigned __int8)dword_1001468C;
    dword_1001468C = HIWORD(dword_1001468C);
    dword_10014694 = v4;
    dword_10014698 = v3;
    dword_10014690 = v3 + (v4 << 8);
    if ( _mtinit() == 0 )
    {
      sub_10003270();
      return 0;
    }
    dword_10014DB4 = (int)GetCommandLineA();
    Str = (char *)__crtGetEnvironmentStringsA();
    _ioinit();
    _setargv();
    _setenvp();
    _cinit();
    ++dword_100145E4;
  }
  else if ( a2 != 0 )
  {
    if ( a2 == 3 )
      _freeptd(nullptr);
  }
  else
  {
    if ( dword_100145E4 <= 0 )
      return 0;
    --dword_100145E4;
    if ( dword_100146C4 == 0 )
      _cexit();
    _ioterm();
    _mtterm();
    sub_10003270();
  }
  return 1;
}

// Address: 0x10001C50
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  bool v4; // zf
  BOOL v6; // eax
  BOOL fdwReasona; // [esp+18h] [ebp+Ch]

  if ( fdwReason != 0 )
  {
    if ( fdwReason != 1 && fdwReason != 2 )
      goto LABEL_10;
    if ( dword_10014DC4 != nullptr && dword_10014DC4(hinstDLL, fdwReason, lpReserved) == 0 )
      return false;
    v4 = _CRT_INIT((int)hinstDLL, fdwReason, (int)lpReserved) == 0;
  }
  else
  {
    v4 = dword_100145E4 == 0;
  }
  if ( v4 )
    return false;
LABEL_10:
  v6 = DllMain(hinstDLL, fdwReason, lpReserved);
  fdwReasona = v6;
  if ( fdwReason != 1 )
  {
LABEL_13:
    if ( fdwReason == 0 || fdwReason == 3 )
    {
      if ( _CRT_INIT((int)hinstDLL, fdwReason, (int)lpReserved) == 0 )
        fdwReasona = false;
      if ( fdwReasona && dword_10014DC4 != nullptr )
        return dword_10014DC4(hinstDLL, fdwReason, lpReserved);
    }
    return fdwReasona;
  }
  if ( !v6 )
  {
    _CRT_INIT((int)hinstDLL, 0, (int)lpReserved);
    goto LABEL_13;
  }
  return fdwReasona;
}

// Address: 0x10001CED
void __cdecl __noreturn _amsg_exit(DWORD NumberOfBytesWritten)
{
  if ( dword_100145F0 == 1 || dword_100145F0 == 0 && dword_100145F4 == 1 )
    _FF_MSGBANNER();
  sub_10003351(NumberOfBytesWritten);
  off_10010930(255);
}

// Address: 0x10001D20
void _mtinitlocks()
{
  InitializeCriticalSection(lpCriticalSection);
  InitializeCriticalSection(off_10010968);
  InitializeCriticalSection(off_10010958);
  InitializeCriticalSection(off_10010938);
}

// Address: 0x10001D49
void _mtdeletelocks()
{
  LPCRITICAL_SECTION *v0; // esi

  v0 = &dword_10010934;
  do
  {
    if ( *v0 != nullptr && v0 != &lpCriticalSection && v0 != &off_10010968 && v0 != &off_10010958 && v0 != &off_10010938 )
    {
      DeleteCriticalSection(*v0);
      sub_100034D5(*v0);
    }
    ++v0;
  }
  while ( (int)v0 < (int)&dword_100109F4 );
  DeleteCriticalSection(off_10010958);
  DeleteCriticalSection(off_10010968);
  DeleteCriticalSection(lpCriticalSection);
  DeleteCriticalSection(off_10010938);
}

// Address: 0x10001DB5
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi
  struct _RTL_CRITICAL_SECTION *v2; // edi

  v1 = &dword_10010934 + a1;
  if ( *v1 == nullptr )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)malloc(0x18u);
    if ( v2 == nullptr )
      _amsg_exit(0x11u);
    _lock(17);
    if ( *v1 != nullptr )
    {
      sub_100034D5(v2);
    }
    else
    {
      InitializeCriticalSection(v2);
      *v1 = v2;
    }
    _unlock(17);
  }
  EnterCriticalSection(*v1);
}

// Address: 0x10001E16
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&dword_10010934 + a1));
}

// Address: 0x10001E42
void nullsub_1()
{
  ;
}

// Address: 0x10001E43
char *__cdecl setlocale(int Category, const char *Locale)
{
  int v2; // ebx
  int v3; // eax
  char *all; // esi
  const char *v5; // edi
  char *i; // esi
  size_t v7; // eax
  const char **v8; // ebx
  const char *v9; // esi
  size_t v10; // eax
  size_t v11; // edi
  const char *v12; // edi
  bool v13; // zf
  const char **v14; // edi
  char Str1[132]; // [esp+8h] [ebp-88h] BYREF
  int v17; // [esp+8Ch] [ebp-4h]
  int Categorya; // [esp+98h] [ebp+8h]
  int Localea; // [esp+9Ch] [ebp+Ch]

  v2 = 0;
  if ( (unsigned int)Category <= 5 )
  {
    _lock(19);
    ++dword_10014DA0;
    while ( Addend != 0 )
      Sleep(1u);
    if ( Category != 0 )
    {
      if ( Locale != nullptr )
      {
        v3 = _setlocale_set_cat(Category, (char *)Locale);
LABEL_45:
        all = (char *)v3;
        goto LABEL_46;
      }
      all = (&dword_10010B04)[3 * Category];
LABEL_46:
      _unlock(19);
LABEL_47:
      --dword_10014DA0;
      return all;
    }
    v5 = Locale;
    v17 = 1;
    Categorya = 0;
    if ( Locale != nullptr )
    {
      if ( *Locale == 76 && Locale[1] == 67 && Locale[2] == 95 )
      {
        for ( i = strpbrk(Locale, "=;"); i != nullptr; i = strpbrk(v5, "=;") )
        {
          v7 = i - v5;
          v17 = i - v5;
          if ( i == v5 || *i == 59 )
            break;
          Localea = 1;
          v8 = (const char **)&off_10010B0C;
          while ( strncmp(*v8, v5, v7) != 0 || v17 != strlen(*v8) )
          {
            ++Localea;
            v8 += 3;
            if ( (int)v8 > (int)&off_10010B3C )
              break;
            v7 = v17;
          }
          v9 = i + 1;
          v10 = strcspn(v9, ";");
          v11 = v10;
          if ( v10 == 0 && *v9 != 59 )
            break;
          if ( Localea <= 5 )
          {
            strncpy(Str1, v9, v10);
            Str1[v11] = 0;
            if ( _setlocale_set_cat(Localea, Str1) != 0 )
              ++Categorya;
          }
          v12 = &v9[v11];
          if ( *v12 != 0 )
          {
            v5 = v12 + 1;
            if ( *v5 != 0 )
              continue;
          }
          v13 = Categorya == 0;
          goto LABEL_31;
        }
        _unlock(19);
        all = nullptr;
        goto LABEL_47;
      }
      all = (char *)_expandlocale((char *)Locale, Str1, nullptr, nullptr);
      if ( all == nullptr )
        goto LABEL_46;
      v14 = (const char **)&dword_10010B04;
      do
      {
        if ( v14 != (const char **)&dword_10010B04 )
        {
          if ( strcmp(Str1, *v14) == 0 || _setlocale_set_cat(v2, Str1) != 0 )
            ++Categorya;
          else
            v17 = 0;
        }
        v14 += 3;
        ++v2;
      }
      while ( (int)v14 <= (int)&off_10010B40 );
      if ( v17 != 0 )
      {
        all = (char *)_setlocale_get_all();
        sub_100034D5(dword_10010B04);
        dword_10010B04 = nullptr;
        goto LABEL_46;
      }
      v13 = Categorya == 0;
LABEL_31:
      if ( v13 )
      {
        all = nullptr;
        goto LABEL_46;
      }
    }
    v3 = _setlocale_get_all();
    goto LABEL_45;
  }
  return nullptr;
}

// Address: 0x10002089
char *__cdecl _setlocale_set_cat(LPVOID lpMem, char *Destination)
{
  size_t v3; // eax
  int *v4; // ebx
  char Str[140]; // [esp+Ch] [ebp-A4h] BYREF
  int v7; // [esp+98h] [ebp-18h] BYREF
  int v8; // [esp+9Ch] [ebp-14h]
  _WORD Src[4]; // [esp+A0h] [ebp-10h] BYREF
  void *v10; // [esp+A8h] [ebp-8h]
  UINT v11; // [esp+ACh] [ebp-4h]
  char *lpMema; // [esp+B8h] [ebp+8h]
  char *Destinationa; // [esp+BCh] [ebp+Ch]

  if ( _expandlocale(Destination, Str, Src, &v7) == 0 )
    return nullptr;
  v3 = strlen(Str);
  Destinationa = (char *)malloc(v3 + 1);
  if ( Destinationa == nullptr )
    return nullptr;
  v4 = (int *)((char *)&unk_10014664 + 4 * (_DWORD)lpMem);
  lpMema = (&dword_10010B04)[3 * (_DWORD)lpMem];
  v8 = *v4;
  v10 = (char *)&unk_100147F4 + 6 * (_DWORD)lpMem;
  memcpy(&Str[132], v10, 6u);
  v11 = dword_1001467C;
  (&dword_10010B04)[3 * (_DWORD)lpMem] = strcpy(Destinationa, Str);
  *v4 = Src[0];
  memcpy(v10, Src, 6u);
  if ( lpMem == (LPVOID)2 )
    dword_1001467C = v7;
  if ( lpMem == (LPVOID)1 )
    dword_10014680 = v7;
  if ( (*(&funcs_1000215A + 3 * (_DWORD)lpMem))() != 0 )
  {
    (&dword_10010B04)[3 * (_DWORD)lpMem] = lpMema;
    sub_100034D5(Destinationa);
    *v4 = v8;
    dword_1001467C = v11;
    return nullptr;
  }
  if ( lpMema != (char *)&dword_100109F4 )
    sub_100034D5(lpMema);
  return (&dword_10010B04)[3 * (_DWORD)lpMem];
}

// Address: 0x100021A4
char *_setlocale_get_all()
{
  char *v0; // eax
  int v1; // ebp
  int *v2; // esi
  const char **v3; // ebx
  const char *v5; // [esp-Ch] [ebp-1Ch]

  v0 = dword_10010B04;
  v1 = 1;
  if ( dword_10010B04 == nullptr )
  {
    v0 = (char *)malloc(0x351u);
    dword_10010B04 = v0;
  }
  *v0 = 0;
  _strcats(dword_10010B04, 3);
  v2 = &off_10010B10;
  v3 = (const char **)&off_10010B10;
  do
  {
    strcat(dword_10010B04, ";");
    v5 = (const char *)v2[3];
    v2 += 3;
    if ( strcmp(*v3, v5) != 0 )
      v1 = 0;
    v3 = (const char **)v2;
    _strcats(dword_10010B04, 3);
  }
  while ( (int)v2 < (int)&off_10010B40 );
  if ( v1 == 0 )
    return dword_10010B04;
  sub_100034D5(dword_10010B04);
  dword_10010B04 = nullptr;
  return (char *)off_10010B1C;
}

// Address: 0x1000225D
char *__cdecl _expandlocale(char *Str2, char *Destination, _WORD *a3, _DWORD *a4)
{
  char *result; // eax
  char Source[136]; // [esp+Ch] [ebp-88h] BYREF

  if ( Str2 == nullptr )
    return nullptr;
  if ( *Str2 == 67 && Str2[1] == 0 )
  {
    result = Destination;
    Destination[1] = 0;
    *Destination = 67;
    if ( a3 != nullptr )
    {
      *a3 = 0;
      a3[1] = 0;
      a3[2] = 0;
    }
    if ( a4 != nullptr )
      *a4 = 0;
    return result;
  }
  if ( strcmp(Str1, Str2) != 0 && strcmp(aC, Str2) != 0 )
  {
    if ( __lc_strtolc(Source, Str2) != 0 || __get_qualified_locale(Source, &unk_10014658, Source) == 0 )
      return nullptr;
    dword_10014660 = (unsigned __int16)word_1001465C;
    __lc_lctostr(Str1, Source);
    if ( *Str2 != 0 )
      strcpy(aC, Str2);
    else
      strcpy(aC, Str1);
  }
  if ( a3 != nullptr )
    memcpy(a3, &unk_10014658, 6u);
  if ( a4 != nullptr )
    *a4 = dword_10014660;
  strcpy(Destination, Str1);
  return Str1;
}

// Address: 0x10002375
int sub_10002375()
{
  return 0;
}

// Address: 0x10002378
char *__cdecl _strcats(char *Destination, int a2)
{
  int v2; // edi
  int *v3; // esi
  char *result; // eax
  const char *v5; // [esp-8h] [ebp-Ch]

  v2 = a2;
  if ( a2 > 0 )
  {
    v3 = &a2;
    do
    {
      v5 = (const char *)v3[1];
      ++v3;
      result = strcat(Destination, v5);
      --v2;
    }
    while ( v2 != 0 );
  }
  return result;
}

// Address: 0x1000239D
int __cdecl __lc_strtolc(char *a1, char *Source)
{
  const char *v2; // esi
  int v4; // eax
  char v5; // bl
  const char *v6; // edi
  char *v7; // eax
  const char *v8; // [esp-8h] [ebp-14h]
  size_t v9; // [esp-4h] [ebp-10h]
  char *Sourcea; // [esp+18h] [ebp+Ch]

  memset(a1, 0, 0x88u);
  v2 = Source;
  if ( *Source == 0 )
    return 0;
  if ( *Source == 46 && Source[1] != 0 )
  {
    strcpy(a1 + 128, Source + 1);
    return 0;
  }
  for ( Sourcea = nullptr; ; ++Sourcea )
  {
    v4 = strcspn(v2, "_.,");
    if ( v4 == 0 )
      break;
    v5 = v2[v4];
    v6 = &v2[v4];
    if ( Sourcea != nullptr )
    {
      if ( Sourcea == (char *)1 )
      {
        if ( v4 >= 64 || v5 == 95 )
          return -1;
        v9 = v4;
        v8 = v2;
        v7 = a1 + 64;
      }
      else
      {
        if ( Sourcea != (char *)2 || v5 != 0 && v5 != 44 )
          return -1;
        v9 = v4;
        v8 = v2;
        v7 = a1 + 128;
      }
      strncpy(v7, v8, v9);
    }
    else
    {
      if ( v4 >= 64 || v5 == 46 )
        return -1;
      strncpy(a1, v2, v4);
    }
    if ( v5 == 44 || v5 == 0 )
      return 0;
    v2 = v6 + 1;
  }
  return -1;
}

// Address: 0x10002469
char *__cdecl __lc_lctostr(char *Destination, char *Source)
{
  char *result; // eax

  strcpy(Destination, Source);
  if ( Source[64] != 0 )
    _strcats(Destination, 2);
  result = Source + 128;
  if ( Source[128] != 0 )
    return _strcats(Destination, 2);
  return result;
}

// Address: 0x100024BC
int __cdecl __crtLCMapStringA(
        LCID Locale,
        DWORD dwMapFlags,
        LPCSTR lpSrcStr,
        int cchSrc,
        LPSTR lpDestStr,
        int cchDest,
        UINT CodePage,
        int a8)
{
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  void *v12; // esp
  int v13; // eax
  int v14; // esi
  int v15; // eax
  void *v16; // esp
  int v17; // eax
  WCHAR v18[8]; // [esp+0h] [ebp-38h] BYREF
  int v19; // [esp+10h] [ebp-28h]
  LPWSTR lpWideCharStr; // [esp+14h] [ebp-24h]
  WCHAR *v21; // [esp+18h] [ebp-20h]
  int v22; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  if ( dword_10014684 == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &String2, 1, nullptr, 0) != 0 )
    {
      dword_10014684 = 1;
    }
    else
    {
      if ( LCMapStringA(0, 0x100u, String1, 1, nullptr, 0) == 0 )
        return 0;
      dword_10014684 = 2;
    }
  }
  if ( cchSrc > 0 )
    cchSrc = strncnt(lpSrcStr, cchSrc);
  if ( dword_10014684 == 2 )
    return LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
  if ( dword_10014684 != 1 )
    return 0;
  if ( CodePage == 0 )
    CodePage = dword_1001467C;
  v9 = MultiByteToWideChar(CodePage, a8 != 0 ? 9 : 1, lpSrcStr, cchSrc, nullptr, 0);
  v10 = v9;
  v22 = v9;
  if ( v9 == 0 )
    return 0;
  v11 = 2 * v9 + 3;
  LOBYTE(v11) = v11 & 0xFC;
  v12 = alloca(v11);
  ms_exc.old_esp = (DWORD)v18;
  lpWideCharStr = v18;
  ms_exc.registration.TryLevel = -1;
  if ( v18 == nullptr )
    return 0;
  if ( MultiByteToWideChar(CodePage, 1u, lpSrcStr, cchSrc, lpWideCharStr, v10) == 0 )
    return 0;
  v13 = LCMapStringW(Locale, dwMapFlags, lpWideCharStr, v10, nullptr, 0);
  v14 = v13;
  v19 = v13;
  if ( v13 == 0 )
    return 0;
  if ( (dwMapFlags & 0x400) != 0 )
  {
    if ( cchDest != 0
      && (v13 > cchDest || LCMapStringW(Locale, dwMapFlags, lpWideCharStr, v10, (LPWSTR)lpDestStr, cchDest) == 0) )
    {
      return 0;
    }
  }
  else
  {
    v15 = 2 * v13 + 3;
    LOBYTE(v15) = v15 & 0xFC;
    v16 = alloca(v15);
    ms_exc.old_esp = (DWORD)v18;
    v21 = v18;
    ms_exc.registration.TryLevel = -1;
    if ( v18 == nullptr || LCMapStringW(Locale, dwMapFlags, lpWideCharStr, v22, v18, v14) == 0 )
      return 0;
    v17 = cchDest != 0
        ? WideCharToMultiByte(CodePage, 0x220u, v18, v14, lpDestStr, cchDest, nullptr, nullptr)
        : WideCharToMultiByte(CodePage, 0x220u, v18, v14, nullptr, 0, nullptr, nullptr);
    v14 = v17;
    if ( v17 == 0 )
      return 0;
  }
  return v14;
}

// Address: 0x100026E0
_BYTE *__cdecl strncnt(_BYTE *a1, int a2)
{
  _BYTE *v2; // eax
  int v3; // ecx
  int v4; // esi

  v2 = a1;
  v3 = a2 - 1;
  if ( a2 != 0 )
  {
    do
    {
      if ( *v2 == 0 )
        break;
      ++v2;
      v4 = v3--;
    }
    while ( v4 != 0 );
  }
  if ( *v2 != 0 )
    return (_BYTE *)a2;
  else
    return (_BYTE *)(v2 - a1);
}

// Address: 0x1000270B
int __cdecl _isctype(int C, int Type)
{
  int v2; // ecx
  int v3; // eax
  int result; // eax
  int SrcStr; // [esp+0h] [ebp-4h] BYREF

  SrcStr = v2;
  if ( (unsigned int)(C + 1) <= 0x100 )
  {
    v3 = *((unsigned __int16 *)off_10010B48 + C);
    return Type & v3;
  }
  if ( *((char *)off_10010B48 + 2 * BYTE1(C) + 1) >= 0 )
  {
    LOWORD(SrcStr) = (unsigned __int8)C;
    result = __crtGetStringTypeA(1u, (LPCSTR)&SrcStr, 1, (LPWORD)&C + 1, 0, 0, 1);
  }
  else
  {
    LOBYTE(SrcStr) = BYTE1(C);
    *(_WORD *)((char *)&SrcStr + 1) = (unsigned __int8)C;
    result = __crtGetStringTypeA(1u, (LPCSTR)&SrcStr, 2, (LPWORD)&C + 1, 0, 0, 1);
  }
  if ( result != 0 )
  {
    v3 = HIWORD(C);
    return Type & v3;
  }
  return result;
}

// Address: 0x10002780
void _cinit()
{
  if ( dword_10014D9C != nullptr )
    dword_10014D9C();
  _initterm(&First, &Last);
  _initterm(&dword_10010000, &dword_10010104);
}

// Address: 0x100027AD
void __cdecl __noreturn exit(int Code)
{
  doexit(Code, 0, 0);
}

// Address: 0x100027BE
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x100027CF
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x100027DE
void __cdecl _c_exit()
{
  doexit(0, 1, 1);
}

// Address: 0x100027ED
int __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  HANDLE CurrentProcess; // eax
  void (**v4)(void); // esi

  _lockexit();
  if ( dword_100146C8 == 1 )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, uExitCode);
  }
  dword_100146C4 = 1;
  byte_100146C0 = a3;
  if ( a2 == 0 )
  {
    if ( dword_10014D98 != 0 )
    {
      v4 = (void (**)(void))(dword_10014D94 - 4);
      if ( dword_10014D94 - 4 >= (unsigned int)dword_10014D98 )
      {
        do
        {
          if ( *v4 != nullptr )
            (*v4)();
          --v4;
        }
        while ( (unsigned int)v4 >= dword_10014D98 );
      }
    }
    _initterm(&dword_10010514, &dword_10010618);
  }
  _initterm(&dword_1001071C, &dword_10010820);
  if ( a3 == 0 )
  {
    dword_100146C8 = 1;
    ExitProcess(uExitCode);
  }
  return _unlockexit();
}

// Address: 0x10002892
void _lockexit()
{
  _lock(13);
}

// Address: 0x1000289B
void _unlockexit()
{
  _unlock(13);
}

// Address: 0x100028A4
void __cdecl _initterm(_PVFV *First, _PVFV *Last)
{
  while ( First < Last )
  {
    if ( *First != nullptr )
      (*First)();
    ++First;
  }
}

// Address: 0x100028BE
int _mtinit()
{
  DWORD *v0; // eax
  DWORD *v1; // esi
  DWORD CurrentThreadId; // eax

  _mtinitlocks();
  dwTlsIndex = TlsAlloc();
  if ( dwTlsIndex == -1 )
    return 0;
  v0 = (DWORD *)sub_10005678(1, 116);
  v1 = v0;
  if ( v0 == nullptr || !TlsSetValue(dwTlsIndex, v0) )
    return 0;
  _initptd(v1);
  CurrentThreadId = GetCurrentThreadId();
  v1[1] = -1;
  *v1 = CurrentThreadId;
  return 1;
}

// Address: 0x10002912
DWORD _mtterm()
{
  DWORD result; // eax

  _mtdeletelocks();
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    result = TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return result;
}

// Address: 0x10002930
int __cdecl _initptd(int a1)
{
  *(_DWORD *)(a1 + 80) = &unk_100115B0;
  *(_DWORD *)(a1 + 20) = 1;
  return a1;
}

// Address: 0x10002943
_DWORD *_getptd()
{
  DWORD LastError; // edi
  _DWORD *Value; // esi
  _DWORD *v2; // eax
  DWORD CurrentThreadId; // eax

  LastError = GetLastError();
  Value = TlsGetValue(dwTlsIndex);
  if ( Value == nullptr )
  {
    v2 = (_DWORD *)sub_10005678(1, 116);
    Value = v2;
    if ( v2 == nullptr || !TlsSetValue(dwTlsIndex, v2) )
      _amsg_exit(0x10u);
    _initptd((int)Value);
    CurrentThreadId = GetCurrentThreadId();
    Value[1] = -1;
    *Value = CurrentThreadId;
  }
  SetLastError(LastError);
  return Value;
}

// Address: 0x100029AA
DWORD __cdecl _freeptd(LPVOID *lpMem)
{
  DWORD result; // eax
  LPVOID *Value; // esi

  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = lpMem;
    if ( lpMem != nullptr || (Value = (LPVOID *)TlsGetValue(dwTlsIndex)) != nullptr )
    {
      if ( Value[9] != nullptr )
        sub_100034D5(Value[9]);
      if ( Value[10] != nullptr )
        sub_100034D5(Value[10]);
      if ( Value[12] != nullptr )
        sub_100034D5(Value[12]);
      if ( Value[14] != nullptr )
        sub_100034D5(Value[14]);
      if ( Value[16] != nullptr )
        sub_100034D5(Value[16]);
      if ( Value[17] != nullptr )
        sub_100034D5(Value[17]);
      if ( Value[20] != &unk_100115B0 )
        sub_100034D5(Value[20]);
      sub_100034D5(Value);
    }
    return TlsSetValue(dwTlsIndex, nullptr);
  }
  return result;
}

// Address: 0x10002A4A
// attributes: thunk
DWORD __stdcall GetCurrentThreadId()
{
  return __imp_GetCurrentThreadId();
}

// Address: 0x10002A50
// attributes: thunk
HANDLE __stdcall GetCurrentThread()
{
  return __imp_GetCurrentThread();
}

// Address: 0x10002A56
UINT _ioinit()
{
  char *v0; // eax
  char *v1; // esi
  unsigned int i; // eax
  int v3; // edi
  LPBYTE v4; // ebx
  _DWORD *v5; // esi
  char *v6; // eax
  unsigned int j; // ecx
  int k; // esi
  int v9; // eax
  int m; // ebx
  int v11; // esi
  DWORD v12; // eax
  HANDLE StdHandle; // eax
  HANDLE v14; // edi
  DWORD FileType; // eax
  struct _STARTUPINFOA StartupInfo; // [esp+Ch] [ebp-48h] BYREF
  HANDLE *v18; // [esp+50h] [ebp-4h]

  v0 = (char *)malloc(0x480u);
  v1 = v0;
  if ( v0 == nullptr )
    _amsg_exit(0x1Bu);
  dword_10014C40[0] = (int)v0;
  uNumber = 32;
  for ( i = (unsigned int)(v0 + 1152); (unsigned int)v1 < i; i = dword_10014C40[0] + 1152 )
  {
    v1[4] = 0;
    *(_DWORD *)v1 = -1;
    *((_DWORD *)v1 + 2) = 0;
    v1[5] = 10;
    v1 += 36;
  }
  GetStartupInfoA(&StartupInfo);
  if ( StartupInfo.cbReserved2 != 0 && StartupInfo.lpReserved2 != nullptr )
  {
    v3 = *(_DWORD *)StartupInfo.lpReserved2;
    v4 = StartupInfo.lpReserved2 + 4;
    v18 = (HANDLE *)&StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4];
    if ( v3 >= 2048 )
      v3 = 2048;
    if ( (int)uNumber < v3 )
    {
      v5 = &unk_10014C44;
      while ( 1 )
      {
        v6 = (char *)malloc(0x480u);
        if ( v6 == nullptr )
          break;
        uNumber += 32;
        *v5 = v6;
        for ( j = (unsigned int)(v6 + 1152); (unsigned int)v6 < j; j = *v5 + 1152 )
        {
          v6[4] = 0;
          *(_DWORD *)v6 = -1;
          *((_DWORD *)v6 + 2) = 0;
          v6[5] = 10;
          v6 += 36;
        }
        ++v5;
        if ( (int)uNumber >= v3 )
          goto LABEL_19;
      }
      v3 = uNumber;
    }
LABEL_19:
    for ( k = 0; k < v3; ++v4 )
    {
      if ( *v18 != (HANDLE)-1 && (*v4 & 1) != 0 && ((*v4 & 8) != 0 || GetFileType(*v18) != 0) )
      {
        v9 = dword_10014C40[k >> 5] + 36 * (k & 0x1F);
        *(_DWORD *)v9 = *v18;
        *(_BYTE *)(v9 + 4) = *v4;
      }
      ++v18;
      ++k;
    }
  }
  for ( m = 0; m < 3; ++m )
  {
    v11 = dword_10014C40[0] + 36 * m;
    if ( *(_DWORD *)v11 == -1 )
    {
      *(_BYTE *)(v11 + 4) = -127;
      if ( m != 0 )
        v12 = -(m != 1) - 11;
      else
        v12 = -10;
      StdHandle = GetStdHandle(v12);
      v14 = StdHandle;
      if ( StdHandle == (HANDLE)-1
        || (FileType = GetFileType(StdHandle)) == 0
        || (*(_DWORD *)v11 = v14, (unsigned __int8)FileType == 2) )
      {
        *(_BYTE *)(v11 + 4) |= 0x40u;
      }
      else if ( (unsigned __int8)FileType == 3 )
      {
        *(_BYTE *)(v11 + 4) |= 8u;
      }
    }
    else
    {
      *(_BYTE *)(v11 + 4) |= 0x80u;
    }
  }
  return SetHandleCount(uNumber);
}

// Address: 0x10002C12
char *_ioterm()
{
  LPVOID *v0; // esi
  char *result; // eax
  unsigned int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // ebx

  v0 = (LPVOID *)dword_10014C40;
  do
  {
    result = (char *)*v0;
    if ( *v0 != nullptr )
    {
      v2 = (unsigned int)*v0;
      if ( *v0 < result + 1152 )
      {
        v3 = (struct _RTL_CRITICAL_SECTION *)(v2 + 12);
        do
        {
          if ( v3[-1].SpinCount != 0 )
            DeleteCriticalSection(v3);
          v2 += 36;
          v3 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 36);
        }
        while ( v2 < (unsigned int)*v0 + 1152 );
      }
      result = (char *)sub_100034D5(*v0);
      *v0 = nullptr;
    }
    ++v0;
  }
  while ( (int)v0 < (int)dword_10014D40 );
  return result;
}

// Address: 0x10002C66
int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v2; // esi
  const char *i; // edi
  size_t v4; // eax
  size_t v5; // ebp
  char *v6; // eax
  int result; // eax

  if ( dword_10014D90 == 0 )
    __initmbctable();
  v0 = Str;
  v1 = 0;
  while ( *v0 != 0 )
  {
    if ( *v0 != 61 )
      ++v1;
    v0 += strlen(v0) + 1;
  }
  v2 = (char **)malloc(4 * v1 + 4);
  dword_100146A8 = v2;
  if ( v2 == nullptr )
    _amsg_exit(9u);
  for ( i = Str; *i != 0; i += v5 )
  {
    v4 = strlen(i);
    v5 = v4 + 1;
    if ( *i != 61 )
    {
      v6 = (char *)malloc(v4 + 1);
      *v2 = v6;
      if ( v6 == nullptr )
        _amsg_exit(9u);
      strcpy(*v2++, i);
    }
  }
  result = sub_100034D5(Str);
  Str = nullptr;
  *v2 = nullptr;
  dword_10014D80 = 1;
  return result;
}

// Address: 0x10002D1F
int _setargv()
{
  CHAR *v0; // edi
  char *v1; // esi
  int v3; // [esp+Ch] [ebp-8h] BYREF
  int v4; // [esp+10h] [ebp-4h] BYREF

  if ( dword_10014D90 == 0 )
    __initmbctable();
  GetModuleFileNameA(nullptr, Filename, 0x104u);
  dword_100146B8 = (int)Filename;
  v0 = Filename;
  if ( *(_BYTE *)dword_10014DB4 != 0 )
    v0 = (CHAR *)dword_10014DB4;
  parse_cmdline(v0, 0, 0, &v4, &v3);
  v1 = (char *)malloc(v3 + 4 * v4);
  if ( v1 == nullptr )
    _amsg_exit(8u);
  parse_cmdline(v0, v1, &v1[4 * v4], &v4, &v3);
  dword_100146A0 = (int)v1;
  dword_1001469C = v4 - 1;
  return v4 - 1;
}

// Address: 0x10002DB8
_DWORD *__cdecl parse_cmdline(unsigned __int8 *a1, unsigned __int8 **a2, unsigned __int8 *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int8 *v6; // esi
  unsigned __int8 **v7; // edi
  unsigned __int8 *v8; // eax
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // dl
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned __int8 v15; // dl
  int v17; // [esp+14h] [ebp+8h]
  BOOL v18; // [esp+24h] [ebp+18h]

  *a5 = 0;
  v6 = a3;
  v7 = a2;
  *a4 = 1;
  v8 = a1;
  if ( a2 != nullptr )
  {
    *a2 = a3;
    v7 = ++a2;
  }
  if ( *a1 == 34 )
  {
    while ( 1 )
    {
      v9 = *++v8;
      if ( v9 == 34 || v9 == 0 )
        break;
      if ( (byte_10014B21[v9] & 4) != 0 )
      {
        ++*a5;
        if ( v6 != nullptr )
          *v6++ = *v8++;
      }
      ++*a5;
      if ( v6 != nullptr )
        *v6++ = *v8;
    }
    ++*a5;
    if ( v6 != nullptr )
      *v6++ = 0;
    if ( *v8 == 34 )
      ++v8;
  }
  else
  {
    do
    {
      ++*a5;
      if ( v6 != nullptr )
        *v6++ = *v8;
      v10 = *v8++;
      if ( (byte_10014B21[v10] & 4) != 0 )
      {
        ++*a5;
        if ( v6 != nullptr )
          *v6++ = *v8;
        ++v8;
      }
      if ( v10 == 32 )
        break;
      if ( v10 == 0 )
      {
        --v8;
        goto LABEL_28;
      }
    }
    while ( v10 != 9 );
    if ( v6 != nullptr )
      *(v6 - 1) = 0;
  }
LABEL_28:
  v18 = false;
  while ( *v8 != 0 )
  {
    while ( *v8 == 32 || *v8 == 9 )
      ++v8;
    if ( *v8 == 0 )
      break;
    if ( v7 != nullptr )
    {
      *v7++ = v6;
      a2 = v7;
    }
    ++*a4;
    while ( 1 )
    {
      v17 = 1;
      v11 = 0;
      while ( *v8 == 92 )
      {
        ++v8;
        ++v11;
      }
      if ( *v8 == 34 )
      {
        if ( (v11 & 1) == 0 )
        {
          if ( v18 && v8[1] == 34 )
            ++v8;
          else
            v17 = 0;
          v7 = a2;
          v18 = !v18;
        }
        v11 >>= 1;
      }
      v12 = v11;
      v13 = v11 - 1;
      if ( v12 != 0 )
      {
        v14 = v13 + 1;
        do
        {
          if ( v6 != nullptr )
            *v6++ = 92;
          ++*a5;
          --v14;
        }
        while ( v14 != 0 );
      }
      v15 = *v8;
      if ( *v8 == 0 || !v18 && (v15 == 32 || v15 == 9) )
        break;
      if ( v17 != 0 )
      {
        if ( v6 != nullptr )
        {
          if ( (byte_10014B21[v15] & 4) != 0 )
          {
            *v6++ = v15;
            ++v8;
            ++*a5;
          }
          *v6++ = *v8;
        }
        else if ( (byte_10014B21[v15] & 4) != 0 )
        {
          ++v8;
          ++*a5;
        }
        ++*a5;
      }
      ++v8;
    }
    if ( v6 != nullptr )
      *v6++ = 0;
    ++*a5;
  }
  if ( v7 != nullptr )
    *v7 = nullptr;
  ++*a4;
  return a4;
}

// Address: 0x10002F6C
CHAR *__crtGetEnvironmentStringsA()
{
  CHAR *v0; // ebx
  WCHAR *EnvironmentStringsW; // esi
  LPCH EnvironmentStrings; // edi
  WCHAR *i; // eax
  size_t v4; // eax
  int v5; // ebp
  CHAR *v6; // eax
  LPCH j; // eax
  size_t v9; // ebp
  void *v10; // eax
  void *v11; // esi
  CHAR *lpMem; // [esp+10h] [ebp-8h]
  int cchWideChar; // [esp+14h] [ebp-4h]

  v0 = nullptr;
  EnvironmentStringsW = nullptr;
  EnvironmentStrings = nullptr;
  if ( dword_100147D0 != 0 )
  {
    if ( dword_100147D0 == 1 )
      goto LABEL_7;
    if ( dword_100147D0 != 2 )
      return nullptr;
  }
  else
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      dword_100147D0 = 1;
LABEL_7:
      if ( EnvironmentStringsW != nullptr || (EnvironmentStringsW = GetEnvironmentStringsW()) != nullptr )
      {
        for ( i = EnvironmentStringsW; *i != 0; ++i )
        {
          do
            ++i;
          while ( *i != 0 );
        }
        cchWideChar = i - EnvironmentStringsW + 1;
        v4 = WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, nullptr, 0, nullptr, nullptr);
        v5 = v4;
        if ( v4 != 0 )
        {
          v6 = (CHAR *)malloc(v4);
          lpMem = v6;
          if ( v6 != nullptr )
          {
            if ( WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, v6, v5, nullptr, nullptr) == 0 )
            {
              sub_100034D5(lpMem);
              lpMem = nullptr;
            }
            v0 = lpMem;
          }
        }
        FreeEnvironmentStringsW(EnvironmentStringsW);
        return v0;
      }
      return nullptr;
    }
    EnvironmentStrings = GetEnvironmentStrings();
    if ( EnvironmentStrings == nullptr )
      return nullptr;
    dword_100147D0 = 2;
  }
  if ( EnvironmentStrings == nullptr )
  {
    EnvironmentStrings = GetEnvironmentStrings();
    if ( EnvironmentStrings == nullptr )
      return nullptr;
  }
  for ( j = EnvironmentStrings; *j != 0; ++j )
  {
    do
      ++j;
    while ( *j != 0 );
  }
  v9 = j - EnvironmentStrings + 1;
  v10 = malloc(v9);
  v11 = v10;
  if ( v10 != nullptr )
    memcpy(v10, EnvironmentStrings, v9);
  else
    v11 = nullptr;
  FreeEnvironmentStringsA(EnvironmentStrings);
  return (CHAR *)v11;
}

// Address: 0x1000309E
char __cdecl sub_1000309E(int a1)
{
  HMODULE ModuleHandleA; // eax
  int v2; // ecx

  *(_DWORD *)a1 = 0;
  ModuleHandleA = GetModuleHandleA(nullptr);
  if ( *(_WORD *)ModuleHandleA == 23117 )
  {
    v2 = *((_DWORD *)ModuleHandleA + 15);
    if ( v2 != 0 )
    {
      ModuleHandleA = (HMODULE)((char *)ModuleHandleA + v2);
      *(_BYTE *)a1 = *((_BYTE *)ModuleHandleA + 26);
      LOBYTE(ModuleHandleA) = *((_BYTE *)ModuleHandleA + 27);
      *(_BYTE *)(a1 + 1) = (_BYTE)ModuleHandleA;
    }
  }
  return (char)ModuleHandleA;
}

// Address: 0x100030CB
int sub_100030CB()
{
  int result; // eax
  CHAR *i; // ecx
  char v2; // al
  CHAR *v3; // eax
  CHAR *j; // ecx
  char v5; // al
  char *v6; // eax
  const char *v7; // eax
  const char *v8; // ecx
  CHAR Buffer[4240]; // [esp+4h] [ebp-122Ch] BYREF
  CHAR Filename[260]; // [esp+1094h] [ebp-19Ch] BYREF
  struct _OSVERSIONINFOA VersionInformation; // [esp+1198h] [ebp-98h] BYREF
  _BYTE v12[4]; // [esp+122Ch] [ebp-4h] BYREF

  VersionInformation.dwOSVersionInfoSize = 148;
  if ( GetVersionExA(&VersionInformation)
    && VersionInformation.dwPlatformId == 2
    && VersionInformation.dwMajorVersion >= 5 )
  {
    return 1;
  }
  if ( GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT", Buffer, 0x1090u) == 0 )
    goto LABEL_29;
  for ( i = Buffer; *i != 0; ++i )
  {
    v2 = *i;
    if ( *i >= 97 && v2 <= 122 )
      *i = v2 - 32;
  }
  if ( strncmp("__GLOBAL_HEAP_SELECTED", Buffer, 0x16u) == 0 )
  {
    v3 = Buffer;
  }
  else
  {
    GetModuleFileNameA(nullptr, Filename, 0x104u);
    for ( j = Filename; *j != 0; ++j )
    {
      v5 = *j;
      if ( *j >= 97 && v5 <= 122 )
        *j = v5 - 32;
    }
    v3 = strstr(Buffer, Filename);
  }
  if ( v3 == nullptr )
    goto LABEL_29;
  v6 = strchr(v3, 44);
  if ( v6 == nullptr )
    goto LABEL_29;
  v7 = v6 + 1;
  v8 = v7;
  while ( *v8 != 0 )
  {
    if ( *v8 == 59 )
      *v8 = 0;
    else
      ++v8;
  }
  result = strtol(v7, nullptr, 10);
  if ( result != 2 && result != 3 && result != 1 )
  {
LABEL_29:
    sub_1000309E((int)v12);
    return 3 - (v12[0] < 6u);
  }
  return result;
}

// Address: 0x10003213
int __cdecl sub_10003213(int a1)
{
  int v1; // eax
  int v2; // eax

  hHeap = HeapCreate(a1 == 0, 0x1000u, 0);
  if ( hHeap == nullptr )
    return 0;
  v1 = sub_100030CB();
  dword_10014C38 = v1;
  if ( v1 == 3 )
  {
    v2 = __sbh_heap_init(1016);
  }
  else
  {
    if ( v1 != 2 )
      return 1;
    v2 = sub_100070FB();
  }
  if ( v2 == 0 )
  {
    HeapDestroy(hHeap);
    return 0;
  }
  return 1;
}

// Address: 0x10003270
BOOL sub_10003270()
{
  int v0; // ebx
  LPVOID *v1; // esi
  _UNKNOWN **v2; // esi
  void *v3; // eax

  if ( dword_10014C38 == 3 )
  {
    v0 = 0;
    if ( dword_10014970 > 0 )
    {
      v1 = (LPVOID *)((char *)lp + 12);
      do
      {
        VirtualFree(*v1, 0x100000u, 0x4000u);
        VirtualFree(*v1, 0, 0x8000u);
        HeapFree(hHeap, 0, v1[1]);
        v1 += 5;
        ++v0;
      }
      while ( v0 < dword_10014970 );
    }
    HeapFree(hHeap, 0, lp);
  }
  else if ( dword_10014C38 == 2 )
  {
    v2 = &off_10011730;
    do
    {
      v3 = v2[4];
      if ( v3 != nullptr )
        VirtualFree(v3, 0, 0x8000u);
      v2 = (_UNKNOWN **)*v2;
    }
    while ( v2 != &off_10011730 );
  }
  return HeapDestroy(hHeap);
}

// Address: 0x10003318
int _FF_MSGBANNER()
{
  int result; // eax

  result = dword_100145F0;
  if ( dword_100145F0 == 1 || dword_100145F0 == 0 && dword_100145F4 == 1 )
  {
    sub_10003351(0xFCu);
    if ( dword_100147D4 != nullptr )
      dword_100147D4();
    return sub_10003351(0xFFu);
  }
  return result;
}

// Address: 0x10003351
int *__cdecl sub_10003351(DWORD NumberOfBytesWritten)
{
  int v1; // ecx
  int *result; // eax
  int v3; // esi
  char *v4; // edi
  const char **v5; // esi
  HANDLE StdHandle; // eax
  const char *v7; // [esp-14h] [ebp-1B8h]
  DWORD v8; // [esp-10h] [ebp-1B4h]
  DWORD *p_NumberOfBytesWritten; // [esp-Ch] [ebp-1B0h]
  int v10; // [esp-8h] [ebp-1ACh]
  CHAR Filename[260]; // [esp+0h] [ebp-1A4h] BYREF
  char Destination[160]; // [esp+104h] [ebp-A0h] BYREF
  int savedregs; // [esp+1A4h] [ebp+0h] BYREF

  v1 = 0;
  result = dword_10010D90;
  do
  {
    if ( NumberOfBytesWritten == *result )
      break;
    result += 2;
    ++v1;
  }
  while ( result < &dword_10010E20 );
  v3 = 2 * v1;
  if ( NumberOfBytesWritten == dword_10010D90[2 * v1] )
  {
    result = (int *)dword_100145F0;
    if ( dword_100145F0 == 1 || dword_100145F0 == 0 && dword_100145F4 == 1 )
    {
      v5 = (const char **)&(&off_10010D94)[v3];
      v10 = 0;
      p_NumberOfBytesWritten = &NumberOfBytesWritten;
      v8 = strlen(*v5);
      v7 = *v5;
      StdHandle = GetStdHandle(0xFFFFFFF4);
      return (int *)WriteFile(StdHandle, v7, v8, &NumberOfBytesWritten, nullptr);
    }
    else if ( NumberOfBytesWritten != 252 )
    {
      if ( GetModuleFileNameA(nullptr, Filename, 0x104u) == 0 )
        strcpy(Filename, "<program name unknown>");
      v4 = Filename;
      if ( strlen(Filename) + 1 > 0x3C )
      {
        v4 = (char *)&savedregs + strlen(Filename) - 479;
        strncpy(v4, "...", 3u);
      }
      strcpy(Destination, "Runtime Error!\n\nProgram: ");
      strcat(Destination, v4);
      strcat(Destination, "\n\n");
      strcat(Destination, (&off_10010D94)[v3]);
      return (int *)__crtMessageBoxA(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
  return result;
}

// Address: 0x100034D5
void __cdecl sub_100034D5(LPVOID lpMem)
{
  int block; // eax
  bool v2; // zf
  int v3; // eax
  int v4; // [esp+Ch] [ebp-28h] BYREF
  int v5; // [esp+10h] [ebp-24h]
  int v6; // [esp+14h] [ebp-20h] BYREF
  int v7; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  if ( lpMem != nullptr )
  {
    if ( dword_10014C38 == 3 )
    {
      _lock(9);
      ms_exc.registration.TryLevel = 0;
      block = __sbh_find_block(lpMem);
      v7 = block;
      if ( block != 0 )
        sub_10006205(block, lpMem);
      ms_exc.registration.TryLevel = -1;
      _unlock(9);
      v2 = v7 == 0;
    }
    else
    {
      if ( dword_10014C38 != 2 )
      {
LABEL_11:
        HeapFree(hHeap, 0, lpMem);
        return;
      }
      _lock(9);
      ms_exc.registration.TryLevel = 1;
      v3 = sub_10007357(lpMem, &v4, &v6);
      v5 = v3;
      if ( v3 != 0 )
        sub_100073AE(v4, v6, v3);
      ms_exc.registration.TryLevel = -1;
      _unlock(9);
      v2 = v5 == 0;
    }
    if ( !v2 )
      return;
    goto LABEL_11;
  }
}

// Address: 0x100035BE
void *__cdecl malloc(size_t Size)
{
  return (void *)_nh_malloc(Size, dword_10014854);
}

// Address: 0x100035D0
int __cdecl _nh_malloc(size_t Size, int a2)
{
  int result; // eax

  if ( Size > 0xFFFFFFE0 )
    return 0;
  while ( 1 )
  {
    result = sub_100035FC(Size);
    if ( result != 0 || a2 == 0 )
      break;
    if ( _callnewh(Size) == 0 )
      return 0;
  }
  return result;
}

// Address: 0x100035FC
LPVOID __cdecl sub_100035FC(unsigned int a1)
{
  LPVOID result; // eax
  SIZE_T v2; // esi
  int v3; // eax
  SIZE_T v4; // eax
  void *v5; // [esp+Ch] [ebp-1Ch]
  void *v6; // [esp+Ch] [ebp-1Ch]

  if ( dword_10014C38 == 3 )
  {
    if ( a1 <= dword_10014978 )
    {
      _lock(9);
      v5 = (void *)__sbh_alloc_block(a1);
      _unlock(9);
      result = v5;
      if ( v5 != nullptr )
        return result;
    }
  }
  else if ( dword_10014C38 == 2 )
  {
    if ( a1 != 0 )
      v2 = (a1 + 15) & 0xFFFFFFF0;
    else
      v2 = 16;
    if ( v2 > dword_10013754 )
      return HeapAlloc(hHeap, 0, v2);
    _lock(9);
    v6 = (void *)sub_100073F3(v2 >> 4);
    _unlock(9);
    result = v6;
    if ( v6 == nullptr )
      return HeapAlloc(hHeap, 0, v2);
    return result;
  }
  v3 = a1;
  if ( a1 == 0 )
    v3 = 1;
  v4 = v3 + 15;
  LOBYTE(v4) = v4 & 0xF0;
  return HeapAlloc(hHeap, 0, v4);
}

// Address: 0x100036F8
int __init_time()
{
  void *v0; // eax
  void *v1; // esi

  if ( dword_10014678 != 0 )
  {
    v0 = (void *)sub_10005678(1, 172);
    v1 = v0;
    if ( v0 == nullptr )
      return 1;
    if ( _get_lc_time(v0) != 0 )
    {
      _free_lc_time(v1);
      sub_100034D5(v1);
      return 1;
    }
    Src = v1;
    _free_lc_time(dword_100147D8);
    sub_100034D5(dword_100147D8);
    dword_100147D8 = v1;
  }
  else
  {
    Src = off_10013760;
    _free_lc_time(dword_100147D8);
    sub_100034D5(dword_100147D8);
    dword_100147D8 = nullptr;
  }
  return 0;
}

// Address: 0x10003789
int __cdecl _get_lc_time(int a1)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
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
  LCID v44; // [esp+4h] [ebp-8h]
  LCID Locale; // [esp+8h] [ebp-4h]

  Locale = (unsigned __int16)word_10014812;
  v44 = (unsigned __int16)word_10014814;
  if ( a1 == 0 )
    return -1;
  v2 = __getlocaleinfo(1, (unsigned __int16)word_10014812, 0x31u, a1 + 4);
  v3 = __getlocaleinfo(1, Locale, 0x32u, a1 + 8) | v2;
  v4 = __getlocaleinfo(1, Locale, 0x33u, a1 + 12) | v3;
  v5 = __getlocaleinfo(1, Locale, 0x34u, a1 + 16) | v4;
  v6 = __getlocaleinfo(1, Locale, 0x35u, a1 + 20) | v5;
  v7 = __getlocaleinfo(1, Locale, 0x36u, a1 + 24) | v6;
  v8 = __getlocaleinfo(1, Locale, 0x37u, a1) | v7;
  v9 = __getlocaleinfo(1, Locale, 0x2Au, a1 + 32) | v8;
  v10 = __getlocaleinfo(1, Locale, 0x2Bu, a1 + 36) | v9;
  v11 = __getlocaleinfo(1, Locale, 0x2Cu, a1 + 40) | v10;
  v12 = __getlocaleinfo(1, Locale, 0x2Du, a1 + 44) | v11;
  v13 = __getlocaleinfo(1, Locale, 0x2Eu, a1 + 48) | v12;
  v14 = __getlocaleinfo(1, Locale, 0x2Fu, a1 + 52) | v13;
  v15 = __getlocaleinfo(1, Locale, 0x30u, a1 + 28) | v14;
  v16 = __getlocaleinfo(1, Locale, 0x44u, a1 + 56) | v15;
  v17 = __getlocaleinfo(1, Locale, 0x45u, a1 + 60) | v16;
  v18 = __getlocaleinfo(1, Locale, 0x46u, a1 + 64) | v17;
  v19 = __getlocaleinfo(1, Locale, 0x47u, a1 + 68) | v18;
  v20 = __getlocaleinfo(1, Locale, 0x48u, a1 + 72) | v19;
  v21 = __getlocaleinfo(1, Locale, 0x49u, a1 + 76) | v20;
  v22 = __getlocaleinfo(1, Locale, 0x4Au, a1 + 80) | v21;
  v23 = __getlocaleinfo(1, Locale, 0x4Bu, a1 + 84) | v22;
  v24 = __getlocaleinfo(1, Locale, 0x4Cu, a1 + 88) | v23;
  v25 = __getlocaleinfo(1, Locale, 0x4Du, a1 + 92) | v24;
  v26 = __getlocaleinfo(1, Locale, 0x4Eu, a1 + 96) | v25;
  v27 = __getlocaleinfo(1, Locale, 0x4Fu, a1 + 100) | v26;
  v28 = __getlocaleinfo(1, Locale, 0x38u, a1 + 104) | v27;
  v29 = __getlocaleinfo(1, Locale, 0x39u, a1 + 108) | v28;
  v30 = __getlocaleinfo(1, Locale, 0x3Au, a1 + 112) | v29;
  v31 = __getlocaleinfo(1, Locale, 0x3Bu, a1 + 116) | v30;
  v32 = __getlocaleinfo(1, Locale, 0x3Cu, a1 + 120) | v31;
  v33 = __getlocaleinfo(1, Locale, 0x3Du, a1 + 124) | v32;
  v34 = __getlocaleinfo(1, Locale, 0x3Eu, a1 + 128) | v33;
  v35 = __getlocaleinfo(1, Locale, 0x3Fu, a1 + 132) | v34;
  v36 = __getlocaleinfo(1, Locale, 0x40u, a1 + 136) | v35;
  v37 = __getlocaleinfo(1, Locale, 0x41u, a1 + 140) | v36;
  v38 = __getlocaleinfo(1, Locale, 0x42u, a1 + 144) | v37;
  v39 = __getlocaleinfo(1, Locale, 0x43u, a1 + 148) | v38;
  v40 = __getlocaleinfo(1, Locale, 0x28u, a1 + 152) | v39;
  v41 = __getlocaleinfo(1, Locale, 0x29u, a1 + 156) | v40;
  v42 = __getlocaleinfo(1, v44, 0x1Fu, a1 + 160) | v41;
  v43 = __getlocaleinfo(1, v44, 0x20u, a1 + 164) | v42;
  return v43 | __getlocaleinfo(1, v44, 0x1003u, a1 + 168);
}

// Address: 0x10003AD7
void __cdecl _free_lc_time(LPVOID *a1)
{
  if ( a1 != nullptr )
  {
    sub_100034D5(a1[1]);
    sub_100034D5(a1[2]);
    sub_100034D5(a1[3]);
    sub_100034D5(a1[4]);
    sub_100034D5(a1[5]);
    sub_100034D5(a1[6]);
    sub_100034D5(*a1);
    sub_100034D5(a1[8]);
    sub_100034D5(a1[9]);
    sub_100034D5(a1[10]);
    sub_100034D5(a1[11]);
    sub_100034D5(a1[12]);
    sub_100034D5(a1[13]);
    sub_100034D5(a1[7]);
    sub_100034D5(a1[14]);
    sub_100034D5(a1[15]);
    sub_100034D5(a1[16]);
    sub_100034D5(a1[17]);
    sub_100034D5(a1[18]);
    sub_100034D5(a1[19]);
    sub_100034D5(a1[20]);
    sub_100034D5(a1[21]);
    sub_100034D5(a1[22]);
    sub_100034D5(a1[23]);
    sub_100034D5(a1[24]);
    sub_100034D5(a1[25]);
    sub_100034D5(a1[26]);
    sub_100034D5(a1[27]);
    sub_100034D5(a1[28]);
    sub_100034D5(a1[29]);
    sub_100034D5(a1[30]);
    sub_100034D5(a1[31]);
    sub_100034D5(a1[32]);
    sub_100034D5(a1[33]);
    sub_100034D5(a1[34]);
    sub_100034D5(a1[35]);
    sub_100034D5(a1[36]);
    sub_100034D5(a1[37]);
    sub_100034D5(a1[38]);
    sub_100034D5(a1[39]);
    sub_100034D5(a1[40]);
    sub_100034D5(a1[41]);
    sub_100034D5(a1[42]);
  }
}

// Address: 0x10003C67
int __init_numeric()
{
  LCID v0; // edi
  int v1; // esi
  int v2; // esi
  int v3; // esi
  char v5; // al
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  char v8; // al

  v0 = (unsigned __int16)word_1001480E;
  if ( dword_10014674 != 0 )
  {
    v1 = __getlocaleinfo(1, (unsigned __int16)word_1001480E, 0xEu, (int)&dword_100147DC);
    v2 = __getlocaleinfo(1, v0, 0xFu, (int)&dword_100147E0) | v1;
    v3 = __getlocaleinfo(1, v0, 0x10u, (int)&dword_100147E4) | v2;
    fix_grouping(dword_100147E4);
    if ( v3 != 0 )
    {
      sub_100034D5(dword_100147DC);
      sub_100034D5(dword_100147E0);
      sub_100034D5(dword_100147E4);
      dword_100147DC = nullptr;
      dword_100147E0 = nullptr;
      dword_100147E4 = nullptr;
      return -1;
    }
    if ( *off_10013848 != &unk_10013810 )
    {
      sub_100034D5(*off_10013848);
      sub_100034D5(off_10013848[1]);
      sub_100034D5(off_10013848[2]);
    }
    *off_10013848 = dword_100147DC;
    off_10013848[1] = dword_100147E0;
    off_10013848[2] = dword_100147E4;
    v5 = *(_BYTE *)*off_10013848;
    dword_10010D5C = 1;
    byte_10010D58 = v5;
  }
  else
  {
    sub_100034D5(dword_100147DC);
    sub_100034D5(dword_100147E0);
    sub_100034D5(dword_100147E4);
    dword_100147DC = nullptr;
    dword_100147E0 = nullptr;
    dword_100147E4 = nullptr;
    *off_10013848 = malloc(2u);
    if ( *off_10013848 == nullptr )
      return -1;
    strcpy((char *)*off_10013848, ".");
    off_10013848[1] = malloc(2u);
    v6 = off_10013848[1];
    if ( v6 == nullptr )
      return -1;
    *v6 = 0;
    off_10013848[2] = malloc(2u);
    v7 = off_10013848[2];
    if ( v7 == nullptr )
      return -1;
    *v7 = 0;
    v8 = *(_BYTE *)*off_10013848;
    dword_10010D5C = 1;
    byte_10010D58 = v8;
  }
  return 0;
}

// Address: 0x10003E3C
char __cdecl fix_grouping(char *a1)
{
  char *v1; // ecx
  char result; // al
  char *v3; // eax

  v1 = a1;
  for ( result = *a1; *v1 != 0; result = *v1 )
  {
    if ( result < 48 || result > 57 )
    {
      if ( result == 59 )
      {
        v3 = v1;
        do
        {
          *v3 = v3[1];
          ++v3;
        }
        while ( *v3 != 0 );
        continue;
      }
    }
    else
    {
      *v1 = result - 48;
    }
    ++v1;
  }
  return result;
}

// Address: 0x10003E73
int __init_monetary()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  if ( dword_10014670 != 0 )
  {
    v0 = (_DWORD *)sub_10005678(1, 48);
    v1 = v0;
    if ( v0 == nullptr )
      return 1;
    if ( _get_lc_lconv(v0) != 0 )
    {
      _free_lc_lconv(v1);
      sub_100034D5(v1);
      return 1;
    }
    *v1 = *off_10013848;
    v1[1] = off_10013848[1];
    v1[2] = off_10013848[2];
    off_10013848 = (_UNKNOWN **)v1;
    _free_lc_lconv(dword_100147E8);
    sub_100034D5(dword_100147E8);
    dword_100147E8 = v1;
  }
  else
  {
    off_10013818 = *off_10013848;
    off_1001381C = off_10013848[1];
    off_10013820 = off_10013848[2];
    off_10013848 = &off_10013818;
    _free_lc_lconv(dword_100147E8);
    sub_100034D5(dword_100147E8);
    dword_100147E8 = nullptr;
  }
  return 0;
}

// Address: 0x10003F3E
int __cdecl _get_lc_lconv(int a1)
{
  LCID v1; // edi
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx

  v1 = (unsigned __int16)word_10014808;
  if ( a1 == 0 )
    return -1;
  v3 = __getlocaleinfo(1, (unsigned __int16)word_10014808, 0x15u, a1 + 12);
  v4 = __getlocaleinfo(1, v1, 0x14u, a1 + 16) | v3;
  v5 = __getlocaleinfo(1, v1, 0x16u, a1 + 20) | v4;
  v6 = __getlocaleinfo(1, v1, 0x17u, a1 + 24) | v5;
  v7 = __getlocaleinfo(1, v1, 0x18u, a1 + 28) | v6;
  fix_grouping_0(*(_DWORD *)(a1 + 28));
  v8 = __getlocaleinfo(1, v1, 0x50u, a1 + 32) | v7;
  v9 = __getlocaleinfo(1, v1, 0x51u, a1 + 36) | v8;
  v10 = __getlocaleinfo(0, v1, 0x1Au, a1 + 40) | v9;
  v11 = __getlocaleinfo(0, v1, 0x19u, a1 + 41) | v10;
  v12 = __getlocaleinfo(0, v1, 0x54u, a1 + 42) | v11;
  v13 = __getlocaleinfo(0, v1, 0x55u, a1 + 43) | v12;
  v14 = __getlocaleinfo(0, v1, 0x56u, a1 + 44) | v13;
  v15 = __getlocaleinfo(0, v1, 0x57u, a1 + 45) | v14;
  v16 = __getlocaleinfo(0, v1, 0x52u, a1 + 46) | v15;
  return v16 | __getlocaleinfo(0, v1, 0x53u, a1 + 47);
}

// Address: 0x10004060
char __cdecl fix_grouping_0(char *a1)
{
  char *v1; // ecx
  char result; // al
  char *v3; // eax

  v1 = a1;
  for ( result = *a1; *v1 != 0; result = *v1 )
  {
    if ( result < 48 || result > 57 )
    {
      if ( result == 59 )
      {
        v3 = v1;
        do
        {
          *v3 = v3[1];
          ++v3;
        }
        while ( *v3 != 0 );
        continue;
      }
    }
    else
    {
      *v1 = result - 48;
    }
    ++v1;
  }
  return result;
}

// Address: 0x10004097
void __cdecl _free_lc_lconv(LPVOID *a1)
{
  if ( a1 != nullptr && a1[3] != &unk_10014864 )
  {
    sub_100034D5(a1[3]);
    sub_100034D5(a1[4]);
    sub_100034D5(a1[5]);
    sub_100034D5(a1[6]);
    sub_100034D5(a1[7]);
    sub_100034D5(a1[8]);
    sub_100034D5(a1[9]);
  }
}

// Address: 0x100040E5
int __init_ctype()
{
  int v0; // ebx
  WORD *v1; // edi
  const WCHAR *v2; // eax
  int i; // eax
  BYTE *v4; // eax
  int j; // edx
  int v6; // ecx
  WCHAR *v7; // ecx
  int k; // eax
  char *v9; // edi
  BYTE *v10; // eax
  int v11; // esi
  _WORD *v12; // ecx
  struct _cpinfo CPInfo; // [esp+4h] [ebp-24h] BYREF
  LPVOID lpMem; // [esp+18h] [ebp-10h]
  LPVOID v16; // [esp+1Ch] [ebp-Ch]
  LPCWCH v17; // [esp+20h] [ebp-8h]
  LPCSTR lpSrcStr; // [esp+24h] [ebp-4h]

  v0 = 0;
  lpSrcStr = nullptr;
  v17 = nullptr;
  if ( dword_1001466C != 0 )
  {
    if ( dword_1001467C == 0 && __getlocaleinfo(0, (unsigned __int16)word_10014800, 0x1004u, (int)&dword_1001467C) != 0 )
      goto LABEL_38;
    v1 = (WORD *)malloc(0x202u);
    lpMem = v1;
    v16 = malloc(0x202u);
    lpSrcStr = (LPCSTR)malloc(0x101u);
    v2 = (const WCHAR *)malloc(0x202u);
    v17 = v2;
    if ( v1 == nullptr )
      goto LABEL_38;
    if ( v16 == nullptr )
      goto LABEL_38;
    if ( lpSrcStr == nullptr )
      goto LABEL_38;
    if ( v2 == nullptr )
      goto LABEL_38;
    for ( i = 0; i < 256; ++i )
      lpSrcStr[i] = i;
    if ( !GetCPInfo(dword_1001467C, &CPInfo) || CPInfo.MaxCharSize > 2 )
      goto LABEL_38;
    dword_10010D54 = LOWORD(CPInfo.MaxCharSize);
    if ( LOWORD(CPInfo.MaxCharSize) > 1u && CPInfo.LeadByte[0] != 0 )
    {
      v4 = &CPInfo.LeadByte[1];
      do
      {
        LOBYTE(j) = *v4;
        if ( *v4 == 0 )
          break;
        v6 = *(v4 - 1);
        for ( j = (unsigned __int8)j; v6 <= j; j = *v4 )
          lpSrcStr[v6++] = 0;
        v4 += 2;
      }
      while ( *(v4 - 1) != 0 );
    }
    if ( __crtGetStringTypeA(1u, lpSrcStr, 256, v1 + 1, 0, 0, 0) == 0 )
      goto LABEL_38;
    v7 = (WCHAR *)v17;
    *v1 = 0;
    for ( k = 0; k < 256; ++k )
      *v7++ = k;
    v9 = (char *)v16 + 2;
    if ( __crtGetStringTypeW(1u, v17, 256, (LPWORD)v16 + 1, 0, 0) != 0 )
    {
      *(_WORD *)v16 = 0;
      if ( dword_10010D54 > 1 && CPInfo.LeadByte[0] != 0 )
      {
        v10 = &CPInfo.LeadByte[1];
        do
        {
          if ( *v10 == 0 )
            break;
          v11 = *(v10 - 1);
          if ( v11 <= (unsigned int)*v10 )
          {
            v12 = (char *)lpMem + 2 * v11 + 2;
            do
            {
              *v12 = 0x8000;
              ++v11;
              ++v12;
            }
            while ( v11 <= *v10 );
          }
          v10 += 2;
        }
        while ( *(v10 - 1) != 0 );
      }
      off_10010B4C = v9;
      off_10010B48 = (char *)lpMem + 2;
      if ( dword_100147EC != nullptr )
        sub_100034D5(dword_100147EC);
      dword_100147EC = lpMem;
      if ( dword_100147F0 != nullptr )
        sub_100034D5(dword_100147F0);
      dword_100147F0 = v16;
    }
    else
    {
LABEL_38:
      sub_100034D5(lpMem);
      sub_100034D5(v16);
      v0 = 1;
    }
    sub_100034D5((LPVOID)lpSrcStr);
    sub_100034D5((LPVOID)v17);
    return v0;
  }
  else
  {
    off_10010B48 = &_ctype[1];
    off_10010B4C = &_ctype[1];
    sub_100034D5(dword_100147EC);
    sub_100034D5(dword_100147F0);
    dword_100147EC = nullptr;
    dword_100147F0 = nullptr;
    return 0;
  }
}

// Address: 0x1000432A
int sub_1000432A()
{
  return 0;
}

// Address: 0x10004330
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

// Address: 0x100043C0
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

// Address: 0x100044C0
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

// Address: 0x10004500
size_t __cdecl strlen(const char *Str)
{
  const char *v1; // ecx
  char v2; // al
  int v3; // eax
  int v4; // eax

  v1 = Str;
  if ( ((unsigned __int8)Str & 3) == 0 )
    goto main_loop_0;
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
main_loop_0:
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

// Address: 0x10004580
int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  size_t v3; // ecx
  const char *v4; // edi
  bool v5; // zf
  size_t v6; // ecx
  const char *v7; // edi
  unsigned __int8 v9; // al

  v3 = MaxCount;
  if ( MaxCount != 0 )
  {
    v4 = Str1;
    do
    {
      if ( v3 == 0 )
        break;
      v5 = *v4++ == 0;
      --v3;
    }
    while ( !v5 );
    v6 = MaxCount - v3;
    v7 = Str1;
    do
    {
      if ( v6 == 0 )
        break;
      v5 = *Str2++ == *v7++;
      --v6;
    }
    while ( v5 );
    v9 = *(Str2 - 1);
    v3 = 0;
    if ( v9 > (unsigned int)*(v7 - 1) )
      return ~v3;
    if ( v9 != *(v7 - 1) )
    {
      v3 = -2;
      return ~v3;
    }
  }
  return v3;
}

// Address: 0x100045C0
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

// Address: 0x10004600
char *__cdecl strcpy(char *Destination, const char *Source)
{
  JUMPOUT(0x10004671);
}

// Address: 0x10004610
char *__cdecl strcat(char *Destination, const char *Source)
{
  char *v2; // ecx
  char v3; // al
  int v4; // eax
  int v5; // eax
  char *v6; // edi
  const char *v7; // ecx
  int v8; // edx
  int v9; // eax

  v2 = Destination;
  if ( ((unsigned __int8)Destination & 3) == 0 )
    goto find_end_of_dest_string_loop;
  do
  {
    v3 = *v2++;
    if ( v3 == 0 )
    {
start_byte_3:
      v6 = v2 - 1;
      goto copy_start;
    }
  }
  while ( ((unsigned __int8)v2 & 3) != 0 );
  while ( 1 )
  {
    do
    {
find_end_of_dest_string_loop:
      v4 = (*(_DWORD *)v2 + 2130640639) ^ ~*(_DWORD *)v2;
      v2 += 4;
    }
    while ( (v4 & 0x81010100) == 0 );
    v5 = *((_DWORD *)v2 - 1);
    if ( (_BYTE)v5 == 0 )
      break;
    if ( BYTE1(v5) == 0 )
    {
      v6 = v2 - 3;
      goto copy_start;
    }
    if ( (v5 & 0xFF0000) == 0 )
    {
      v6 = v2 - 2;
      goto copy_start;
    }
    if ( (v5 & 0xFF000000) == 0 )
      goto start_byte_3;
  }
  v6 = v2 - 4;
copy_start:
  v7 = Source;
  if ( ((unsigned __int8)Source & 3) == 0 )
    goto main_loop_entrance_0;
  while ( 1 )
  {
    LOBYTE(v8) = *v7++;
    if ( (_BYTE)v8 == 0 )
      break;
    *v6++ = v8;
    if ( ((unsigned __int8)v7 & 3) == 0 )
    {
      while ( 1 )
      {
main_loop_entrance_0:
        v9 = (*(_DWORD *)v7 + 2130640639) ^ ~*(_DWORD *)v7;
        v8 = *(_DWORD *)v7;
        v7 += 4;
        if ( (v9 & 0x81010100) != 0 )
        {
          if ( (_BYTE)v8 == 0 )
            goto LABEL_26;
          if ( BYTE1(v8) == 0 )
          {
            *(_WORD *)v6 = (unsigned __int8)v8;
            return Destination;
          }
          if ( (v8 & 0xFF0000) == 0 )
          {
            *(_WORD *)v6 = v8;
            v6[2] = 0;
            return Destination;
          }
          if ( (v8 & 0xFF000000) == 0 )
          {
            *(_DWORD *)v6 = v8;
            return Destination;
          }
        }
        *(_DWORD *)v6 = v8;
        v6 += 4;
      }
    }
  }
LABEL_26:
  *v6 = v8;
  return Destination;
}

// Address: 0x100046F0
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  char *v3; // esi
  char *v4; // edi
  size_t v5; // ecx
  void *result; // eax
  char *v7; // esi
  char *v8; // edi
  size_t v9; // ecx

  v3 = (char *)Src;
  v4 = (char *)a1;
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
        __asm { jmp     dword ptr ds:(loc_100048D4+4)[eax*4] }
        return result;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
    {
      if ( Size >= 4 )
        __asm { jmp     dword ptr ds:(loc_1000474C+4)[eax*4] }
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 10004725 case 0 }
    }
    v5 = Size >> 2;
    switch ( v5 )
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
        *((_DWORD *)a1 + v5 - 7) = *((_DWORD *)Src + v5 - 7);
UnwindUp6:
        *((_DWORD *)a1 + v5 - 6) = *((_DWORD *)Src + v5 - 6);
UnwindUp5:
        *((_DWORD *)a1 + v5 - 5) = *((_DWORD *)Src + v5 - 5);
UnwindUp4:
        *((_DWORD *)a1 + v5 - 4) = *((_DWORD *)Src + v5 - 4);
UnwindUp3:
        *((_DWORD *)a1 + v5 - 3) = *((_DWORD *)Src + v5 - 3);
UnwindUp2:
        *((_DWORD *)a1 + v5 - 2) = *((_DWORD *)Src + v5 - 2);
UnwindUp1:
        *((_DWORD *)a1 + v5 - 1) = *((_DWORD *)Src + v5 - 1);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
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
        qmemcpy(a1, Src, 4 * v5);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
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

// Address: 0x10004A25
int __cdecl __get_qualified_locale(char *a1, _WORD *a2, int a3)
{
  char *v3; // eax
  int v4; // edi

  if ( dword_10014838 == nullptr )
  {
    if ( IsThisWindowsNT() != 0 )
      dword_10014838 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetLocaleInfoA;
    else
      dword_10014838 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))crtGetLocaleInfoA;
  }
  if ( a1 == nullptr )
    goto LABEL_20;
  dword_10014828 = a1;
  if ( *a1 != 0 )
    TranslateName(&off_10011390, 64, &dword_10014828);
  v3 = a1 + 64;
  dword_1001482C = a1 + 64;
  if ( a1 != (char *)-64 && *v3 != 0 )
  {
    TranslateName(&off_100112D8, 22, &dword_1001482C);
    v3 = dword_1001482C;
  }
  dword_10014830 = 0;
  if ( dword_10014828 == nullptr || *dword_10014828 == 0 )
  {
    if ( v3 != nullptr && *v3 != 0 )
    {
      GetLcidFromCountry();
      goto LABEL_21;
    }
LABEL_20:
    GetLcidFromDefault();
    goto LABEL_21;
  }
  if ( v3 != nullptr && *v3 != 0 )
    GetLcidFromLangCountry();
  else
    GetLcidFromLanguage();
LABEL_21:
  if ( dword_10014830 != 0 )
  {
    v4 = ProcessCodePage(a1 + 128);
    if ( v4 != 0 && IsValidCodePage((unsigned __int16)v4) && IsValidLocale(Locale, 1u) )
    {
      if ( a2 != nullptr )
      {
        *a2 = Locale;
        a2[1] = dword_10014834;
        a2[2] = v4;
      }
      if ( a3 == 0 )
        return 1;
      if ( dword_10014838(Locale, 4097, a3, 64) != 0 && dword_10014838(dword_10014834, 4098, a3 + 64, 64) != 0 )
      {
        _itoa(v4, (char *)(a3 + 128), 10);
        return 1;
      }
    }
  }
  return 0;
}

// Address: 0x10004BA2
int __cdecl TranslateName(int a1, int a2, const char **a3)
{
  int v3; // ebx
  int result; // eax
  int v5; // esi

  v3 = 0;
  result = 1;
  while ( v3 <= a2 )
  {
    if ( result == 0 )
      break;
    v5 = (v3 + a2) / 2;
    result = _strcmpi(*a3, *(const char **)(a1 + 8 * v5));
    if ( result != 0 )
    {
      if ( result >= 0 )
        v3 = v5 + 1;
      else
        a2 = v5 - 1;
    }
    else
    {
      *a3 = (const char *)(a1 + 8 * v5 + 4);
    }
  }
  return result;
}

// Address: 0x10004BFA
int GetLcidFromLangCountry()
{
  size_t v0; // eax
  int result; // eax

  dword_10014824 = strlen(dword_10014828) == 3;
  v0 = strlen(dword_1001482C);
  Locale = 0;
  dword_1001481C = v0 == 3;
  if ( dword_10014824 != 0 )
    MaxCount = 2;
  else
    MaxCount = GetPrimaryLen(dword_10014828);
  EnumSystemLocalesA(LangCountryEnumProc, 1u);
  result = dword_10014830;
  if ( (dword_10014830 & 0x100) == 0 || (dword_10014830 & 0x200) == 0 || (dword_10014830 & 7) == 0 )
    dword_10014830 = 0;
  return result;
}

// Address: 0x10004C81
BOOL __stdcall LangCountryEnumProc(LPSTR a1)
{
  int v1; // esi
  int v2; // eax
  int v4; // eax
  char String2[120]; // [esp+Ch] [ebp-78h] BYREF

  v1 = LcidFromHexString(a1);
  v2 = -(dword_1001481C != 0);
  LOWORD(v2) = v2 & 0xF005;
  if ( dword_10014838(v1, v2 + 4098, String2, 120) == 0 )
    goto LABEL_17;
  if ( _strcmpi(dword_1001482C, String2) == 0 )
  {
    if ( dword_10014838(v1, dword_10014824 != 0 ? 3 : 4097, String2, 120) == 0 )
    {
LABEL_17:
      dword_10014830 = 0;
      return true;
    }
    if ( _strcmpi(dword_10014828, String2) == 0 )
    {
      LOWORD(dword_10014830) = dword_10014830 | 0x304;
      dword_10014834 = v1;
LABEL_6:
      Locale = v1;
      goto LABEL_15;
    }
    if ( (dword_10014830 & 2) == 0 )
    {
      if ( MaxCount != 0 && _strnicmp(dword_10014828, String2, MaxCount) == 0 )
      {
        dword_10014830 |= 2u;
        dword_10014834 = v1;
        if ( strlen(dword_10014828) == MaxCount )
          goto LABEL_6;
      }
      else if ( (dword_10014830 & 1) == 0 && sub_100050D5(v1) != 0 )
      {
        dword_10014830 |= 1u;
        dword_10014834 = v1;
      }
    }
  }
LABEL_15:
  if ( (dword_10014830 & 0x300) != 0x300 )
  {
    if ( dword_10014838(v1, dword_10014824 != 0 ? 3 : 4097, String2, 120) == 0 )
      goto LABEL_17;
    if ( _strcmpi(dword_10014828, String2) != 0 )
    {
      if ( dword_10014824 != 0 || MaxCount == 0 || _strnicmp(dword_10014828, String2, MaxCount) != 0 )
        return (~dword_10014830 & 4) != 0;
      v4 = TestDefaultLanguage(v1, 0);
    }
    else
    {
      BYTE1(dword_10014830) |= 2u;
      if ( dword_10014824 != 0 || MaxCount == 0 || strlen(dword_10014828) != MaxCount )
        goto LABEL_28;
      v4 = TestDefaultLanguage(v1, 1);
    }
    if ( v4 != 0 )
    {
LABEL_28:
      BYTE1(dword_10014830) |= 1u;
      if ( Locale == 0 )
        Locale = v1;
    }
  }
  return (~dword_10014830 & 4) != 0;
}

// Address: 0x10004E85
BOOL GetLcidFromLanguage()
{
  size_t v0; // eax
  BOOL result; // eax

  v0 = strlen(dword_10014828);
  dword_10014824 = v0 == 3;
  if ( v0 == 3 )
    MaxCount = 2;
  else
    MaxCount = GetPrimaryLen(dword_10014828);
  result = EnumSystemLocalesA(LanguageEnumProc, 1u);
  if ( (dword_10014830 & 4) == 0 )
    dword_10014830 = 0;
  return result;
}

// Address: 0x10004EDB
BOOL __stdcall LanguageEnumProc(LPSTR a1)
{
  int v1; // esi
  int v2; // eax
  int v4; // eax
  char String2[120]; // [esp+4h] [ebp-78h] BYREF

  v1 = LcidFromHexString(a1);
  v2 = -(dword_10014824 != 0);
  LOWORD(v2) = v2 & 0xF002;
  if ( dword_10014838(v1, v2 + 4097, String2, 120) == 0 )
  {
    dword_10014830 = 0;
    return true;
  }
  if ( _strcmpi(dword_10014828, String2) != 0 )
  {
    if ( dword_10014824 != 0 || MaxCount == 0 || _strnicmp(dword_10014828, String2, MaxCount) != 0 )
      return (~dword_10014830 & 4) != 0;
    v4 = TestDefaultLanguage(v1, 0);
  }
  else
  {
    if ( dword_10014824 != 0 )
    {
LABEL_11:
      dword_10014830 |= 4u;
      dword_10014834 = v1;
      Locale = v1;
      return (~dword_10014830 & 4) != 0;
    }
    v4 = TestDefaultLanguage(v1, 1);
  }
  if ( v4 != 0 )
    goto LABEL_11;
  return (~dword_10014830 & 4) != 0;
}

// Address: 0x10004F98
BOOL GetLcidFromCountry()
{
  BOOL result; // eax

  dword_1001481C = strlen(dword_1001482C) == 3;
  result = EnumSystemLocalesA(CountryEnumProc, 1u);
  if ( (dword_10014830 & 4) == 0 )
    dword_10014830 = 0;
  return result;
}

// Address: 0x10004FCF
BOOL __stdcall CountryEnumProc(LPSTR a1)
{
  int v1; // esi
  int v2; // eax
  char String2[120]; // [esp+4h] [ebp-78h] BYREF

  v1 = LcidFromHexString(a1);
  v2 = -(dword_1001481C != 0);
  LOWORD(v2) = v2 & 0xF005;
  if ( dword_10014838(v1, v2 + 4098, String2, 120) != 0 )
  {
    if ( _strcmpi(dword_1001482C, String2) == 0 && sub_100050D5(v1) != 0 )
    {
      dword_10014830 |= 4u;
      dword_10014834 = v1;
      Locale = v1;
    }
    return (~dword_10014830 & 4) != 0;
  }
  else
  {
    dword_10014830 = 0;
    return true;
  }
}

// Address: 0x10005055
LCID GetLcidFromDefault()
{
  LCID result; // eax

  LOWORD(dword_10014830) = dword_10014830 | 0x104;
  result = GetUserDefaultLCID();
  dword_10014834 = result;
  Locale = result;
  return result;
}

// Address: 0x1000506F
int __cdecl ProcessCodePage(char *Str1)
{
  const char *v1; // esi
  int result; // eax
  _BYTE v3[8]; // [esp+4h] [ebp-8h] BYREF

  v1 = Str1;
  if ( Str1 != nullptr && *Str1 != 0 && strcmp(Str1, "ACP") != 0 )
  {
    if ( strcmp(Str1, "OCP") != 0 )
      return atol(v1);
    result = dword_10014838(dword_10014834, 11, v3, 8);
  }
  else
  {
    result = dword_10014838(dword_10014834, 4100, v3, 8);
  }
  if ( result == 0 )
    return result;
  v1 = v3;
  return atol(v1);
}

// Address: 0x100050D5
int __cdecl sub_100050D5(__int16 a1)
{
  _WORD *v1; // eax

  v1 = &unk_100112C4;
  while ( a1 != *v1 )
  {
    if ( ++v1 >= (_WORD *)&off_100112D8 )
      return 1;
  }
  return 0;
}

// Address: 0x100050F4
BOOL __cdecl TestDefaultLanguage(int a1, int a2)
{
  int v2; // eax
  int PrimaryLen; // esi
  BOOL result; // eax
  _BYTE v5[120]; // [esp+0h] [ebp-78h] BYREF

  v2 = a1 & 0x3FF;
  BYTE1(v2) |= 4u;
  result = false;
  if ( dword_10014838(v2, 1, v5, 120) != 0 )
  {
    if ( a1 == LcidFromHexString(v5) )
      return true;
    if ( a2 == 0 )
      return true;
    PrimaryLen = GetPrimaryLen(dword_10014828);
    if ( PrimaryLen != strlen(dword_10014828) )
      return true;
  }
  return result;
}

// Address: 0x10005156
BOOL IsThisWindowsNT()
{
  struct _OSVERSIONINFOA VersionInformation; // [esp+0h] [ebp-94h] BYREF

  VersionInformation.dwOSVersionInfoSize = 148;
  return GetVersionExA(&VersionInformation) && VersionInformation.dwPlatformId == 2;
}

// Address: 0x1000518C
int __stdcall crtGetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  unsigned int v7; // ecx
  const char *v9; // eax

  v4 = 0;
  v5 = 26;
  while ( 1 )
  {
    v6 = (v5 + v4) / 2;
    v7 = dword_10010E20[11 * v6];
    if ( Locale == v7 )
      break;
    if ( Locale >= v7 )
      v4 = v6 + 1;
    else
      v5 = v6 - 1;
    if ( v4 > v5 )
      return GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
  }
  switch ( LCType )
  {
    case 1u:
      v9 = &a040a[44 * v6];
      break;
    case 3u:
      v9 = (char *)&unk_10010E30 + 44 * v6;
      break;
    case 7u:
      v9 = (char *)&unk_10010E38 + 44 * v6;
      break;
    case 0xBu:
      v9 = (char *)&unk_10010E3C + 44 * v6;
      break;
    case 0x1001u:
      v9 = (&off_10010E2C)[11 * v6];
      break;
    case 0x1002u:
      v9 = (&off_10010E34)[11 * v6];
      break;
    case 0x1004u:
      v9 = &a1252[44 * v6];
      break;
    default:
      return GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
  }
  if ( v9 == nullptr || cchData < 1 )
    return GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
  strncpy(lpLCData, v9, cchData - 1);
  lpLCData[cchData - 1] = 0;
  return 1;
}

// Address: 0x10005272
int __cdecl LcidFromHexString(char *a1)
{
  int result; // eax
  char v3; // cl

  for ( result = 0; ; result = v3 + 16 * (result + 268435453) )
  {
    v3 = *a1++;
    if ( v3 == 0 )
      break;
    if ( v3 < 97 || v3 > 102 )
    {
      if ( v3 >= 65 && v3 <= 70 )
        v3 -= 7;
    }
    else
    {
      v3 -= 39;
    }
  }
  return result;
}

// Address: 0x100052AB
int __cdecl GetPrimaryLen(char *a1)
{
  int result; // eax
  char v3; // cl

  for ( result = 0; ; ++result )
  {
    v3 = *a1++;
    if ( (v3 < 65 || v3 > 90) && (v3 < 97 || v3 > 122) )
      break;
  }
  return result;
}

// Address: 0x100052D0
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  size_t v3; // edx
  int v4; // eax
  _BYTE *v5; // edi
  int v6; // ecx
  size_t v7; // ecx
  unsigned int v8; // ecx

  v3 = Size;
  if ( Size == 0 )
    return a1;
  LOBYTE(v4) = Val;
  v5 = a1;
  if ( Size < 4 )
    goto LABEL_13;
  v6 = -(int)a1 & 3;
  if ( v6 != 0 )
  {
    v3 = Size - v6;
    do
    {
      *v5++ = Val;
      --v6;
    }
    while ( v6 != 0 );
  }
  v4 = 16843009 * (unsigned __int8)Val;
  v7 = v3;
  v3 &= 3u;
  v8 = v7 >> 2;
  if ( v8 == 0 || (memset32(v5, v4, v8), v5 += 4 * v8, v3 != 0) )
  {
LABEL_13:
    do
    {
      *v5++ = v4;
      --v3;
    }
    while ( v3 != 0 );
  }
  return a1;
}

// Address: 0x10005328
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x10005348
int __cdecl _unwind_handler(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // eax

  result = 1;
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    *a4 = a2;
    return 3;
  }
  return result;
}

// Address: 0x1000536A
int __cdecl _local_unwind2(int a1, int a2)
{
  int result; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // esi
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-8h] [ebp-1Ch]
  int (__cdecl *v7)(int, int, int, _DWORD *); // [esp-4h] [ebp-18h]

  v7 = _unwind_handler;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  while ( 1 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 8);
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 == -1 || v4 == a2 )
      break;
    v5 = 3 * v4;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(v3 + 4 * v5);
    if ( *(_DWORD *)(v3 + 4 * v5 + 4) == 0 )
    {
      _NLG_Notify(257);
      (*(void (__cdecl **)(struct _EXCEPTION_REGISTRATION_RECORD *, int (__cdecl *)(int, int, int, _DWORD *)))(v3 + 4 * v5 + 8))(
        ExceptionList,
        v7);
    }
  }
  return result;
}

// Address: 0x100053D2
int __cdecl _abnormal_termination()
{
  int result; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ecx

  result = 0;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  if ( (int (__cdecl *)(int, int, int, _DWORD *))ExceptionList->Handler == _unwind_handler )
    return ExceptionList[1].Next == *((struct _EXCEPTION_REGISTRATION_RECORD **)ExceptionList[1].Handler + 3);
  return result;
}

// Address: 0x100053F5
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x10005408);
}

// Address: 0x100053FE
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_100115A8 = *(_DWORD *)(a2 + 8);
  unk_100115A4 = result;
  unk_100115AC = a2;
  return result;
}

// Address: 0x10005420
int __cdecl _except_handler3(int a1, _DWORD *TargetFrame, int a3)
{
  int *v3; // ebp
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  _DWORD v11[2]; // [esp+10h] [ebp-8h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v3 = &savedregs;
  v4 = TargetFrame;
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    _local_unwind2((int)TargetFrame, -1);
    return 1;
  }
  else
  {
    v11[0] = a1;
    v11[1] = a3;
    *(TargetFrame - 1) = v11;
    v5 = TargetFrame[3];
    v6 = TargetFrame[2];
    while ( v5 != -1 )
    {
      if ( *(_DWORD *)(v6 + 12 * v5 + 4) != 0 )
      {
        v7 = (*(int (**)(void))(v6 + 12 * v5 + 4))();
        v4 = (_DWORD *)v3[3];
        if ( v7 != 0 )
        {
          if ( v7 < 0 )
            return 0;
          v8 = v4[2];
          _global_unwind2((PVOID)v3[3]);
          v3 = v4 + 4;
          _local_unwind2((int)v4, v5);
          _NLG_Notify(*(_DWORD *)(v8 + 12 * v5 + 8), (int)(v4 + 4), 1);
          v4[3] = *(_DWORD *)(v8 + 4 * v9);
          (*(void (**)(void))(v8 + 4 * v9 + 8))();
        }
      }
      v6 = v4[2];
      v5 = *(_DWORD *)(v6 + 12 * v5);
    }
    return 1;
  }
}

// Address: 0x100054DD
int __stdcall _seh_longjmp_unwind(int a1)
{
  return _local_unwind2(*(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x10005500
void __usercall _alloca_probe(unsigned int a1@<eax>, char a2)
{
  char *i; // ecx

  for ( i = &a2; a1 >= 0x1000; a1 -= 4096 )
    i -= 4096;
  __asm { retn }
}

// Address: 0x1000552F
BOOL __cdecl __crtGetStringTypeA(
        DWORD dwInfoType,
        LPCSTR lpSrcStr,
        int cchSrc,
        LPWORD lpCharType,
        UINT CodePage,
        LCID Locale,
        int a7)
{
  int v7; // eax
  LCID v8; // eax
  int v10; // eax
  size_t v11; // edi
  int v12; // eax
  void *v13; // esp
  int v14; // eax
  WCHAR v15[8]; // [esp+0h] [ebp-34h] BYREF
  WCHAR *v16; // [esp+10h] [ebp-24h]
  int cchWideChar; // [esp+14h] [ebp-20h]
  WORD CharType; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v7 = dword_1001483C;
  if ( dword_1001483C == 0 )
  {
    if ( GetStringTypeW(1u, &String2, 1, &CharType) )
    {
      v7 = 1;
    }
    else
    {
      if ( !GetStringTypeA(0, 1u, String1, 1, &CharType) )
        return false;
      v7 = 2;
    }
    dword_1001483C = v7;
  }
  if ( v7 != 2 )
  {
    if ( v7 == 1 )
    {
      if ( CodePage == 0 )
        CodePage = dword_1001467C;
      v10 = MultiByteToWideChar(CodePage, a7 != 0 ? 9 : 1, lpSrcStr, cchSrc, nullptr, 0);
      cchWideChar = v10;
      if ( v10 != 0 )
      {
        v11 = 2 * v10;
        v12 = 2 * v10 + 3;
        LOBYTE(v12) = v12 & 0xFC;
        v13 = alloca(v12);
        ms_exc.old_esp = (DWORD)v15;
        v16 = v15;
        memset(v15, 0, v11);
        ms_exc.registration.TryLevel = -1;
        if ( v15 != nullptr )
        {
          v14 = MultiByteToWideChar(CodePage, 1u, lpSrcStr, cchSrc, v15, cchWideChar);
          if ( v14 != 0 )
            return GetStringTypeW(dwInfoType, v15, v14, lpCharType);
        }
      }
    }
    return false;
  }
  v8 = Locale;
  if ( Locale == 0 )
    v8 = dword_1001466C;
  return GetStringTypeA(v8, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

// Address: 0x10005678
int __cdecl sub_10005678(int a1, int a2)
{
  SIZE_T v2; // esi
  int result; // eax
  LPVOID v4; // [esp+14h] [ebp-20h]
  size_t v5; // [esp+18h] [ebp-1Ch]

  v2 = a2 * a1;
  v5 = a2 * a1;
  if ( (unsigned int)(a2 * a1) <= 0xFFFFFFE0 )
  {
    if ( v2 == 0 )
      v2 = 1;
    v2 = (v2 + 15) & 0xFFFFFFF0;
  }
  while ( 1 )
  {
    v4 = nullptr;
    if ( v2 <= 0xFFFFFFE0 )
    {
      if ( dword_10014C38 == 3 )
      {
        if ( v5 > dword_10014978 )
          goto LABEL_14;
        _lock(9);
        v4 = (LPVOID)__sbh_alloc_block(v5);
        _unlock(9);
        if ( v4 != nullptr )
        {
          memset(v4, 0, v5);
          goto LABEL_14;
        }
LABEL_15:
        v4 = HeapAlloc(hHeap, 8u, v2);
        goto LABEL_16;
      }
      if ( dword_10014C38 == 2 && v2 <= dword_10013754 )
      {
        _lock(9);
        v4 = (LPVOID)sub_100073F3(v2 >> 4);
        _unlock(9);
        if ( v4 == nullptr )
          goto LABEL_15;
        memset(v4, 0, v2);
      }
LABEL_14:
      if ( v4 != nullptr )
        return (int)v4;
      goto LABEL_15;
    }
LABEL_16:
    if ( v4 != nullptr || dword_10014854 == 0 )
      return (int)v4;
    result = _callnewh(v2);
    if ( result == 0 )
      return result;
  }
}

// Address: 0x100057B5
LONG __cdecl _XcptFilter(int a1, struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  _DWORD *v2; // esi
  int *v3; // eax
  void (__cdecl *v4)(int); // ebx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // [esp+8h] [ebp-4h]

  v2 = _getptd();
  v3 = (int *)xcptlookup(a1, v2[20]);
  if ( v3 == nullptr )
    return UnhandledExceptionFilter(ExceptionInfo);
  v4 = (void (__cdecl *)(int))v3[2];
  if ( v4 == nullptr )
    return UnhandledExceptionFilter(ExceptionInfo);
  if ( v4 == (void (__cdecl *)(int))5 )
  {
    v3[2] = 0;
    return 1;
  }
  else
  {
    if ( v4 != (void (__cdecl *)(int))1 )
    {
      v11 = v2[21];
      v2[21] = ExceptionInfo;
      v6 = v3[1];
      if ( v6 == 8 )
      {
        v7 = dword_10011628;
        if ( dword_10011628 < dword_10011628 + dword_1001162C )
        {
          v8 = 12 * dword_10011628;
          do
          {
            v8 += 12;
            *(_DWORD *)(v8 + v2[20] - 4) = 0;
            ++v7;
          }
          while ( v7 < dword_10011628 + dword_1001162C );
        }
        v9 = *v3;
        v10 = v2[22];
        switch ( v9 )
        {
          case -1073741682:
            v2[22] = 131;
            break;
          case -1073741680:
            v2[22] = 129;
            break;
          case -1073741679:
            v2[22] = 132;
            break;
          case -1073741677:
            v2[22] = 133;
            break;
          case -1073741683:
            v2[22] = 130;
            break;
          case -1073741681:
            v2[22] = 134;
            break;
          case -1073741678:
            v2[22] = 138;
            break;
          default:
            break;
        }
        v4(8);
        v2[22] = v10;
      }
      else
      {
        v3[2] = 0;
        v4(v6);
      }
      v2[21] = v11;
    }
    return -1;
  }
}

// Address: 0x100058F3
_DWORD *__cdecl xcptlookup(int a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  if ( *a2 != a1 )
  {
    do
      result += 3;
    while ( result < &a2[3 * dword_10011634] && *result != a1 );
  }
  if ( result >= &a2[3 * dword_10011634] || *result != a1 )
    return nullptr;
  return result;
}

// Address: 0x1000592D
int __cdecl _setmbcp(int CodePage)
{
  UINT SystemCP; // eax
  UINT v2; // ebx
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  BYTE *v6; // ecx
  BYTE v7; // dl
  unsigned int i; // eax
  int v9; // esi
  char *v10; // ebx
  unsigned __int8 *v11; // ecx
  unsigned __int8 v12; // dl
  unsigned int v13; // eax
  unsigned int v14; // edi
  char v15; // dl
  LCID v16; // eax
  _DWORD *v17; // esi
  unsigned int j; // eax
  struct _cpinfo CPInfo; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v21; // [esp+20h] [ebp-4h]
  int CodePagea; // [esp+2Ch] [ebp+8h]

  _lock(25);
  SystemCP = getSystemCP(CodePage);
  v2 = SystemCP;
  CodePagea = SystemCP;
  if ( SystemCP == ::CodePage )
  {
LABEL_2:
    v3 = 0;
    goto LABEL_34;
  }
  if ( SystemCP == 0 )
  {
LABEL_31:
    setSBCS();
LABEL_32:
    setSBUpLow();
    goto LABEL_2;
  }
  v4 = 0;
  v5 = &unk_10011640;
  do
  {
    if ( *v5 == v2 )
    {
      v21 = 0;
      memset(&unk_10014B20, 0, 0x100u);
      v9 = 48 * v4;
      unk_10014C20 = 0;
      v10 = (char *)&unk_10011650 + 48 * v4;
      do
      {
        v11 = (unsigned __int8 *)v10;
        if ( *v10 != 0 )
        {
          do
          {
            v12 = v11[1];
            if ( v12 == 0 )
              break;
            v13 = *v11;
            v14 = v12;
            if ( v13 <= v12 )
            {
              v15 = byte_10011638[v21];
              do
                byte_10014B21[v13++] |= v15;
              while ( v13 <= v14 );
            }
            v11 += 2;
          }
          while ( *v11 != 0 );
        }
        ++v21;
        v10 += 8;
      }
      while ( v21 < 4 );
      dword_10014A0C = 1;
      ::CodePage = CodePagea;
      v16 = CPtoLCID(CodePagea);
      v17 = (_DWORD *)((char *)&unk_10011644 + v9);
      unk_10014A00 = *v17++;
      unk_10014A04 = *v17;
      dword_10014C24 = v16;
      unk_10014A08 = v17[1];
      goto LABEL_32;
    }
    v5 += 12;
    ++v4;
  }
  while ( v5 < &off_10011730 );
  if ( GetCPInfo(v2, &CPInfo) )
  {
    dword_10014C24 = 0;
    memset(&unk_10014B20, 0, 0x100u);
    unk_10014C20 = 0;
    ::CodePage = v2;
    if ( CPInfo.MaxCharSize <= 1 )
    {
      dword_10014A0C = 0;
    }
    else
    {
      if ( CPInfo.LeadByte[0] != 0 )
      {
        v6 = &CPInfo.LeadByte[1];
        do
        {
          v7 = *v6;
          if ( *v6 == 0 )
            break;
          for ( i = *(v6 - 1); i <= v7; ++i )
            byte_10014B21[i] |= 4u;
          v6 += 2;
        }
        while ( *(v6 - 1) != 0 );
      }
      for ( j = 1; j < 0xFF; ++j )
        byte_10014B21[j] |= 8u;
      dword_10014C24 = CPtoLCID(v2);
      dword_10014A0C = 1;
    }
    unk_10014A00 = 0;
    unk_10014A04 = 0;
    unk_10014A08 = 0;
    goto LABEL_32;
  }
  if ( dword_10014840 != 0 )
    goto LABEL_31;
  v3 = -1;
LABEL_34:
  _unlock(25);
  return v3;
}

// Address: 0x10005ADA
UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax

  result = a1;
  dword_10014840 = 0;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_10014840 = 1;
      return GetOEMCP();
    case 0xFFFFFFFD:
      dword_10014840 = 1;
      return GetACP();
    case 0xFFFFFFFC:
      dword_10014840 = 1;
      return dword_1001467C;
    default:
      break;
  }
  return result;
}

// Address: 0x10005B24
int __cdecl CPtoLCID(int a1)
{
  switch ( a1 )
  {
    case 932:
      return 1041;
    case 936:
      return 2052;
    case 949:
      return 1042;
    case 950:
      return 1028;
    default:
      break;
  }
  return 0;
}

// Address: 0x10005B57
int setSBCS()
{
  memset(&unk_10014B20, 0, 0x100u);
  unk_10014C20 = 0;
  CodePage = 0;
  dword_10014A0C = 0;
  dword_10014C24 = 0;
  unk_10014A00 = 0;
  unk_10014A04 = 0;
  unk_10014A08 = 0;
  return 0;
}

// Address: 0x10005B80
unsigned int setSBUpLow()
{
  unsigned int i; // eax
  BYTE v1; // al
  BYTE *v2; // edx
  unsigned int v3; // ecx
  unsigned int result; // eax
  WORD *j; // ecx
  char v6; // dl
  char v7; // cl
  WORD CharType[256]; // [esp+4h] [ebp-514h] BYREF
  CHAR v9[256]; // [esp+204h] [ebp-314h] BYREF
  CHAR DestStr[256]; // [esp+304h] [ebp-214h] BYREF
  CHAR SrcStr[256]; // [esp+404h] [ebp-114h] BYREF
  struct _cpinfo CPInfo; // [esp+504h] [ebp-14h] BYREF

  if ( GetCPInfo(CodePage, &CPInfo) )
  {
    for ( i = 0; i < 0x100; ++i )
      SrcStr[i] = i;
    v1 = CPInfo.LeadByte[0];
    SrcStr[0] = 32;
    if ( CPInfo.LeadByte[0] != 0 )
    {
      v2 = &CPInfo.LeadByte[1];
      do
      {
        v3 = *v2;
        if ( v1 <= v3 )
          memset(&SrcStr[v1], 0x20u, v3 - v1 + 1);
        v2 += 2;
        v1 = *(v2 - 1);
      }
      while ( v1 != 0 );
    }
    __crtGetStringTypeA(1u, SrcStr, 256, CharType, CodePage, dword_10014C24, 0);
    __crtLCMapStringA(dword_10014C24, 0x100u, SrcStr, 256, DestStr, 256, CodePage, 0);
    __crtLCMapStringA(dword_10014C24, 0x200u, SrcStr, 256, v9, 256, CodePage, 0);
    result = 0;
    for ( j = CharType; ; ++j )
    {
      if ( (*j & 1) != 0 )
      {
        byte_10014B21[result] |= 0x10u;
        v6 = DestStr[result];
      }
      else
      {
        if ( (*j & 2) == 0 )
        {
          byte_10014A20[result] = 0;
          goto LABEL_16;
        }
        byte_10014B21[result] |= 0x20u;
        v6 = v9[result];
      }
      byte_10014A20[result] = v6;
LABEL_16:
      if ( ++result >= 0x100 )
        return result;
    }
  }
  for ( result = 0; result < 0x100; ++result )
  {
    if ( result >= 0x41 && result <= 0x5A )
    {
      byte_10014B21[result] |= 0x10u;
      v7 = result + 32;
LABEL_22:
      byte_10014A20[result] = v7;
      continue;
    }
    if ( result >= 0x61 && result <= 0x7A )
    {
      byte_10014B21[result] |= 0x20u;
      v7 = result - 32;
      goto LABEL_22;
    }
    byte_10014A20[result] = 0;
  }
  return result;
}

// Address: 0x10005D05
int __cdecl _getmbcp()
{
  return dword_10014A0C != 0 ? CodePage : 0;
}

// Address: 0x10005D15
int __initmbctable()
{
  int result; // eax

  if ( dword_10014D90 == 0 )
  {
    result = _setmbcp(-3);
    dword_10014D90 = 1;
  }
  return result;
}

// Address: 0x10005D31
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return strtoxl(String, EndPtr, Radix, 0);
}

// Address: 0x10005D48
int __cdecl strtoxl(unsigned __int8 *a1, unsigned __int8 **a2, int a3, int a4)
{
  unsigned __int8 v4; // bl
  unsigned __int8 *i; // esi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned __int8 *v10; // eax
  unsigned int v12; // [esp+Ch] [ebp-Ch]
  unsigned int v13; // [esp+10h] [ebp-8h]
  unsigned __int8 *v14; // [esp+14h] [ebp-4h]
  unsigned __int8 *v15; // [esp+14h] [ebp-4h]

  v13 = 0;
  v4 = *a1;
  for ( i = a1 + 1; ; ++i )
  {
    v6 = dword_10010D54 <= 1 ? *((_BYTE *)off_10010B48 + 2 * v4) & 8 : _isctype(v4, 8);
    if ( v6 == 0 )
      break;
    v4 = *i;
  }
  v14 = i;
  if ( v4 == 45 )
  {
    a4 |= 2u;
LABEL_10:
    v4 = *i++;
    v14 = i;
    goto LABEL_11;
  }
  if ( v4 == 43 )
    goto LABEL_10;
LABEL_11:
  if ( a3 >= 0 && a3 != 1 && a3 <= 36 )
  {
    if ( a3 == 0 )
    {
      if ( v4 != 48 )
      {
        a3 = 10;
LABEL_26:
        v12 = 0xFFFFFFFF / a3;
        while ( 1 )
        {
          if ( dword_10010D54 <= 1 )
            v7 = *((_BYTE *)off_10010B48 + 2 * v4) & 4;
          else
            v7 = _isctype(v4, 4);
          if ( v7 != 0 )
          {
            v8 = (char)v4 - 48;
          }
          else
          {
            if ( dword_10010D54 <= 1 )
              v9 = *((_WORD *)off_10010B48 + v4) & 0x103;
            else
              v9 = _isctype(v4, 259);
            if ( v9 == 0 )
            {
LABEL_44:
              v15 = v14 - 1;
              if ( (a4 & 8) != 0 )
              {
                if ( (a4 & 4) != 0
                  || (a4 & 1) == 0 && ((a4 & 2) != 0 && v13 > 0x80000000 || (a4 & 2) == 0 && v13 > 0x7FFFFFFF) )
                {
                  *_errno() = 34;
                  if ( (a4 & 1) != 0 )
                    v13 = -1;
                  else
                    v13 = ((a4 & 2) != 0) + 0x7FFFFFFF;
                }
              }
              else
              {
                if ( a2 != nullptr )
                  v15 = a1;
                v13 = 0;
              }
              if ( a2 != nullptr )
                *a2 = v15;
              if ( (a4 & 2) != 0 )
                return -v13;
              return v13;
            }
            v8 = toupper((char)v4) - 55;
          }
          if ( v8 >= a3 )
            goto LABEL_44;
          a4 |= 8u;
          if ( v13 < v12 || v13 == v12 && v8 <= 0xFFFFFFFF % a3 )
            v13 = v8 + a3 * v13;
          else
            a4 |= 4u;
          v10 = v14++;
          v4 = *v10;
        }
      }
      if ( *i != 120 && *i != 88 )
      {
        a3 = 8;
        goto LABEL_26;
      }
      a3 = 16;
    }
    if ( a3 == 16 && v4 == 48 && (*i == 120 || *i == 88) )
    {
      v4 = i[1];
      v14 = i + 2;
    }
    goto LABEL_26;
  }
  if ( a2 != nullptr )
    *a2 = a1;
  return 0;
}

// Address: 0x10005F80
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
        goto main_loop_2;
    }
  }
  else
  {
    while ( 1 )
    {
main_loop_2:
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

// Address: 0x10006040
char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char v2; // dl
  const char *v3; // edi
  char v4; // dh
  const char *v5; // ecx
  char *v6; // esi
  char v7; // al
  char v9; // ah
  char v10; // al
  char v11; // al

  v2 = *SubStr;
  v3 = Str;
  if ( *SubStr == 0 )
    return (char *)Str;
  v4 = SubStr[1];
  if ( v4 == 0 )
    JUMPOUT(0x10005F86);
findnext:
  v5 = SubStr;
  v6 = (char *)(v3 + 1);
  if ( *v3 == v2 )
    goto first_char_found;
  if ( *v3 != 0 )
  {
    while ( 2 )
    {
      v7 = *v6++;
      while ( v7 == v2 )
      {
first_char_found:
        v7 = *v6++;
        if ( v7 == v4 )
        {
          v3 = v6 - 1;
          while ( 1 )
          {
            v9 = v5[2];
            if ( v9 == 0 )
              break;
            v10 = *v6;
            v6 += 2;
            if ( v10 != v9 )
              goto findnext;
            v11 = v5[3];
            if ( v11 == 0 )
              break;
            v5 += 2;
            if ( v11 != *(v6 - 1) )
              goto findnext;
          }
          return (char *)(v3 - 1);
        }
      }
      if ( v7 != 0 )
        continue;
      break;
    }
  }
  return nullptr;
}

// Address: 0x10006192
int __cdecl __sbh_heap_init(int a1)
{
  int result; // eax

  result = (int)HeapAlloc(hHeap, 0, 0x140u);
  lp = (LPVOID)result;
  if ( result != 0 )
  {
    dword_1001496C = nullptr;
    dword_10014970 = 0;
    dword_10014964 = result;
    dword_10014978 = a1;
    dword_1001494C = 16;
    return 1;
  }
  return result;
}

// Address: 0x100061DA
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lp; result < (char *)lp + 20 * dword_10014970; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x10006205
_DWORD *__cdecl sub_10006205(_DWORD *a1, int a2)
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
  unsigned int v15; // esi
  unsigned int v16; // esi
  _DWORD *v17; // ecx
  LPVOID *v18; // eax
  _DWORD *v19; // [esp+Ch] [ebp-10h]
  int v20; // [esp+10h] [ebp-Ch]
  int v21; // [esp+14h] [ebp-8h]
  int v22; // [esp+18h] [ebp-4h]
  char *v23; // [esp+28h] [ebp+Ch]
  int *v24; // [esp+28h] [ebp+Ch]
  char v25; // [esp+2Bh] [ebp+Fh]

  result = (_DWORD *)a1[4];
  v3 = (int *)(a2 - 4);
  v4 = (unsigned int)(a2 - a1[3]) >> 15;
  v19 = &result[129 * v4 + 81];
  v5 = *(_DWORD *)(a2 - 4) - 1;
  v22 = v5;
  if ( (v5 & 1) == 0 )
  {
    v6 = (char *)v3 + v5;
    v20 = *(int *)((char *)v3 + v5);
    v21 = *(_DWORD *)(a2 - 8);
    v23 = (char *)v3 + v5;
    if ( (v20 & 1) == 0 )
    {
      v7 = (v20 >> 4) - 1;
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
        v5 = v22;
        v6 = v23;
      }
      v5 += v20;
      *(_DWORD *)(*((_DWORD *)v6 + 2) + 4) = *((_DWORD *)v6 + 1);
      v22 = v5;
      *(_DWORD *)(*((_DWORD *)v23 + 1) + 8) = *((_DWORD *)v23 + 2);
    }
    v13 = (v5 >> 4) - 1;
    if ( v13 > 0x3F )
      v13 = 63;
    if ( (v21 & 1) != 0 )
    {
      v14 = (unsigned int)a1;
    }
    else
    {
      v24 = (int *)((char *)v3 - v21);
      v14 = (v21 >> 4) - 1;
      if ( v14 > 0x3F )
        v14 = 63;
      v22 = v21 + v5;
      v13 = ((v21 + v5) >> 4) - 1;
      if ( v13 > 0x3F )
        v13 = 63;
      if ( v14 != v13 )
      {
        if ( v24[1] == v24[2] )
        {
          if ( v14 >= 0x20 )
          {
            v16 = ~(0x80000000 >> (v14 - 32));
            result[v4 + 49] &= v16;
            v10 = (*((_BYTE *)result + v14 + 4))-- == 1;
            if ( v10 )
              a1[1] &= v16;
          }
          else
          {
            v15 = ~(0x80000000 >> v14);
            result[v4 + 17] &= v15;
            v10 = (*((_BYTE *)result + v14 + 4))-- == 1;
            if ( v10 )
              *a1 &= v15;
          }
        }
        *(_DWORD *)(v24[2] + 4) = v24[1];
        *(_DWORD *)(v24[1] + 8) = v24[2];
      }
      v3 = v24;
    }
    if ( (v21 & 1) != 0 || v14 != v13 )
    {
      v17 = &v19[2 * v13];
      v3[1] = v17[1];
      v3[2] = (int)v17;
      v17[1] = v3;
      *(_DWORD *)(v3[1] + 8) = v3;
      if ( v3[1] == v3[2] )
      {
        v25 = *((_BYTE *)result + v13 + 4);
        *((_BYTE *)result + v13 + 4) = v25 + 1;
        if ( v13 >= 0x20 )
        {
          if ( v25 == 0 )
            a1[1] |= 0x80000000 >> (v13 - 32);
          result[v4 + 49] |= 0x80000000 >> (v13 - 32);
        }
        else
        {
          if ( v25 == 0 )
            *a1 |= 0x80000000 >> v13;
          result[v4 + 17] |= 0x80000000 >> v13;
        }
      }
    }
    *v3 = v22;
    *(int *)((char *)v3 + v22 - 4) = v22;
    result += 129 * v4 + 81;
    v10 = (*v19)-- == 1;
    if ( v10 )
    {
      if ( dword_1001496C != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_1001496C + 3) + (dword_10014960 << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_1001496C + 2) |= 0x80000000 >> dword_10014960;
        *(_DWORD *)(*((_DWORD *)dword_1001496C + 4) + 4 * dword_10014960 + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_1001496C + 4) + 67);
        v18 = (LPVOID *)dword_1001496C;
        if ( *(_BYTE *)(*((_DWORD *)dword_1001496C + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_1001496C + 1) &= ~1u;
          v18 = (LPVOID *)dword_1001496C;
        }
        if ( v18[2] == (LPVOID)-1 )
        {
          VirtualFree(v18[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_1001496C + 4));
          memcpy_0(
            dword_1001496C,
            (char *)dword_1001496C + 20,
            (size_t)lp + 20 * dword_10014970 - (_DWORD)dword_1001496C - 20);
          --dword_10014970;
          if ( a1 > dword_1001496C )
            a1 -= 5;
          dword_10014964 = (int)lp;
        }
      }
      dword_10014960 = v4;
      dword_1001496C = a1;
      return a1;
    }
  }
  return result;
}

// Address: 0x1000652E
_DWORD *__cdecl __sbh_alloc_block(int a1)
{
  int v1; // ecx
  unsigned int v2; // esi
  char *i; // ebx
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  _DWORD *v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int *v14; // edx
  int v15; // ecx
  int v16; // esi
  unsigned int v17; // ebx
  _BYTE *v18; // edi
  unsigned int v19; // ebx
  _BYTE *v20; // edi
  int v21; // ebx
  _DWORD *v22; // ecx
  char v23; // cl
  _DWORD *v24; // edx
  int v25; // [esp+Ch] [ebp-14h]
  int v26; // [esp+Ch] [ebp-14h]
  signed int v27; // [esp+10h] [ebp-10h]
  unsigned int v28; // [esp+14h] [ebp-Ch]
  _DWORD *v29; // [esp+14h] [ebp-Ch]
  unsigned int v30; // [esp+18h] [ebp-8h]
  int v31; // [esp+18h] [ebp-8h]
  char *v32; // [esp+1Ch] [ebp-4h]
  int v33; // [esp+1Ch] [ebp-4h]
  char *v34; // [esp+28h] [ebp+8h]

  v32 = (char *)lp + 20 * dword_10014970;
  v27 = (a1 + 23) & 0xFFFFFFF0;
  v1 = (v27 >> 4) - 1;
  if ( v1 >= 32 )
  {
    v2 = 0;
    v28 = 0;
    v30 = 0xFFFFFFFF >> ((v27 >> 4) - 33);
  }
  else
  {
    v2 = 0xFFFFFFFF >> v1;
    v30 = -1;
    v28 = 0xFFFFFFFF >> v1;
  }
  i = (char *)dword_10014964;
  v34 = (char *)dword_10014964;
  if ( dword_10014964 < (unsigned int)lp + 20 * dword_10014970 )
  {
    do
    {
      if ( (v2 & *(_DWORD *)i | v30 & *((_DWORD *)i + 1)) != 0 )
        break;
      i += 20;
      v34 = i;
    }
    while ( i < v32 );
  }
  if ( i == v32 )
  {
    for ( i = (char *)lp; ; i += 20 )
    {
      v4 = i == (char *)dword_10014964;
      v34 = i;
      if ( (unsigned int)i >= dword_10014964 )
        break;
      if ( (v2 & *(_DWORD *)i | v30 & *((_DWORD *)i + 1)) != 0 )
      {
        v4 = i == (char *)dword_10014964;
        break;
      }
    }
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = i == v32;
        if ( i >= v32 )
          break;
        if ( *((_DWORD *)i + 2) != 0 )
        {
          v5 = i == v32;
          break;
        }
        i += 20;
        v34 = i;
      }
      if ( v5 )
      {
        for ( i = (char *)lp; ; i += 20 )
        {
          v6 = i == (char *)dword_10014964;
          v34 = i;
          if ( (unsigned int)i >= dword_10014964 )
            break;
          if ( *((_DWORD *)i + 2) != 0 )
          {
            v6 = i == (char *)dword_10014964;
            break;
          }
        }
        if ( v6 )
        {
          i = (char *)__sbh_alloc_new_region();
          v34 = i;
          if ( i == nullptr )
            return nullptr;
        }
      }
      **((_DWORD **)i + 4) = __sbh_alloc_new_group(i);
      if ( **((_DWORD **)i + 4) == -1 )
        return nullptr;
    }
  }
  dword_10014964 = (int)i;
  v8 = *((_DWORD **)i + 4);
  v9 = *v8;
  v33 = *v8;
  if ( *v8 == -1 || (v2 & v8[v9 + 17] | v30 & v8[v9 + 49]) == 0 )
  {
    v33 = 0;
    v10 = v8 + 17;
    v2 = v28;
    if ( (v28 & v8[17] | v30 & v8[49]) == 0 )
    {
      do
      {
        v11 = v10[33];
        ++v33;
        ++v10;
      }
      while ( (*v10 & v28 | v30 & v11) == 0 );
    }
    v9 = v33;
  }
  v12 = 0;
  v29 = &v8[129 * v9 + 81];
  v13 = v2 & v8[v9 + 17];
  if ( v13 == 0 )
  {
    v13 = v30 & v8[v9 + 49];
    v12 = 32;
  }
  while ( v13 >= 0 )
  {
    v13 *= 2;
    ++v12;
  }
  v14 = (int *)v29[2 * v12 + 1];
  v31 = *v14 - v27;
  v15 = v31;
  v16 = (v31 >> 4) - 1;
  if ( v16 > 63 )
    v16 = 63;
  if ( v16 == v12 )
    goto LABEL_57;
  if ( v14[1] != v14[2] )
    goto LABEL_47;
  if ( v12 >= 32 )
  {
    v19 = 0x80000000 >> (v12 - 32);
    v20 = (char *)v8 + v12 + 4;
    v21 = ~v19;
    v8[v33 + 49] &= v21;
    v4 = (*v20)-- == 1;
    v26 = v21;
    if ( v4 )
    {
      i = v34;
      *((_DWORD *)v34 + 1) &= v26;
      goto LABEL_47;
    }
  }
  else
  {
    v17 = 0x80000000 >> v12;
    v18 = (char *)v8 + v12 + 4;
    v25 = ~v17;
    v8[v33 + 17] &= ~v17;
    v4 = (*v18)-- == 1;
    if ( v4 )
    {
      i = v34;
      *(_DWORD *)v34 &= v25;
      goto LABEL_47;
    }
  }
  i = v34;
LABEL_47:
  *(_DWORD *)(v14[2] + 4) = v14[1];
  *(_DWORD *)(v14[1] + 8) = v14[2];
  if ( v31 != 0 )
  {
    v22 = &v29[2 * v16];
    v14[1] = v22[1];
    v14[2] = (int)v22;
    v22[1] = v14;
    *(_DWORD *)(v14[1] + 8) = v14;
    if ( v14[1] == v14[2] )
    {
      v23 = *((_BYTE *)v8 + v16 + 4);
      if ( v16 >= 32 )
      {
        *((_BYTE *)v8 + v16 + 4) = v23 + 1;
        if ( v23 == 0 )
          *((_DWORD *)i + 1) |= 0x80000000 >> (v16 - 32);
        v8[v33 + 49] |= 0x80000000 >> (v16 - 32);
      }
      else
      {
        *((_BYTE *)v8 + v16 + 4) = v23 + 1;
        if ( v23 == 0 )
          *(_DWORD *)i |= 0x80000000 >> v16;
        v8[v33 + 17] |= 0x80000000 >> v16;
      }
    }
    v15 = v31;
LABEL_57:
    if ( v15 != 0 )
    {
      *v14 = v15;
      *(int *)((char *)v14 + v15 - 4) = v15;
    }
    goto LABEL_60;
  }
  v15 = 0;
LABEL_60:
  v24 = (int *)((char *)v14 + v15);
  *v24 = v27 + 1;
  *(_DWORD *)((char *)v24 + v27 - 4) = v27 + 1;
  v4 = (*v29)++ == 0;
  if ( v4 && i == dword_1001496C && v33 == dword_10014960 )
    dword_1001496C = nullptr;
  *v8 = v33;
  return v24 + 1;
}

// Address: 0x10006837
char *__sbh_alloc_new_region()
{
  int v0; // eax
  void *v1; // eax
  char *v2; // esi
  LPVOID v3; // eax
  LPVOID v4; // eax

  v0 = dword_10014970;
  if ( dword_10014970 == dword_1001494C )
  {
    v1 = HeapReAlloc(hHeap, 0, lp, 4 * (5 * dword_1001494C + 80));
    if ( v1 == nullptr )
      return nullptr;
    dword_1001494C += 16;
    lp = v1;
    v0 = dword_10014970;
  }
  v2 = (char *)lp + 20 * v0;
  v3 = HeapAlloc(hHeap, 8u, 0x41C4u);
  *((_DWORD *)v2 + 4) = v3;
  if ( v3 == nullptr )
    return nullptr;
  v4 = VirtualAlloc(nullptr, 0x100000u, 0x2000u, 4u);
  *((_DWORD *)v2 + 3) = v4;
  if ( v4 == nullptr )
  {
    HeapFree(hHeap, 0, *((LPVOID *)v2 + 4));
    return nullptr;
  }
  *((_DWORD *)v2 + 2) = -1;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  ++dword_10014970;
  **((_DWORD **)v2 + 4) = -1;
  return v2;
}

// Address: 0x100068E8
int __cdecl __sbh_alloc_new_group(_DWORD *a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // edi
  _DWORD *v8; // eax

  v1 = a1[4];
  v2 = a1[2];
  v3 = 0;
  while ( v2 >= 0 )
  {
    v2 *= 2;
    ++v3;
  }
  v4 = 63;
  v5 = 516 * v3 + v1 + 324;
  do
  {
    *(_DWORD *)(v5 + 8) = v5;
    *(_DWORD *)(v5 + 4) = v5;
    v5 += 8;
    --v4;
  }
  while ( v4 != 0 );
  v6 = (_DWORD *)(a1[3] + (v3 << 15));
  if ( VirtualAlloc(v6, 0x8000u, 0x1000u, 4u) == nullptr )
    return -1;
  if ( v6 < v6 + 7168 )
  {
    v8 = v6 + 4;
    do
    {
      *(v8 - 2) = -1;
      v8[1019] = -1;
      *(v8 - 1) = 4080;
      *v8 = v8 + 1023;
      v8[1] = v8 - 1025;
      v8[1018] = 4080;
      v8 += 1024;
    }
    while ( v8 - 4 <= v6 + 7168 );
  }
  *(_DWORD *)(516 * v3 + v1 + 832) = v6 + 3;
  v6[5] = 516 * v3 + v1 + 828;
  *(_DWORD *)(516 * v3 + v1 + 836) = v6 + 7171;
  v6[7172] = 516 * v3 + v1 + 828;
  *(_DWORD *)(v1 + 4 * v3 + 68) = 0;
  *(_DWORD *)(v1 + 4 * v3 + 196) = 1;
  if ( (*(_BYTE *)(v1 + 67))++ == 0 )
    a1[1] |= 1u;
  a1[2] &= ~(0x80000000 >> v3);
  return v3;
}

// Address: 0x100069E3
int __cdecl __sbh_resize_block(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  signed int v4; // esi
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // ebx
  int v8; // edi
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
  _DWORD *v34; // eax
  char v35; // cl
  int v36; // [esp+Ch] [ebp-Ch]
  int v37; // [esp+10h] [ebp-8h]
  int v38; // [esp+14h] [ebp-4h]
  int v39; // [esp+14h] [ebp-4h]
  int *v40; // [esp+24h] [ebp+Ch]
  char v41; // [esp+27h] [ebp+Fh]
  int v42; // [esp+28h] [ebp+10h]
  unsigned int v43; // [esp+28h] [ebp+10h]
  int v44; // [esp+28h] [ebp+10h]
  char v45; // [esp+2Bh] [ebp+13h]

  v3 = a1[4];
  v4 = (a3 + 23) & 0xFFFFFFF0;
  v5 = (unsigned int)(a2 - a1[3]) >> 15;
  v36 = 516 * v5 + v3 + 324;
  v6 = *(_DWORD *)(a2 - 4) - 1;
  v42 = v6;
  v7 = *(_DWORD *)(v6 + a2 - 4);
  v8 = v6 + a2 - 4;
  v38 = v7;
  if ( v4 <= v6 )
  {
    if ( v4 < v6 )
    {
      v44 = v6 - v4;
      v24 = v4 + 1;
      *(_DWORD *)(a2 - 4) = v4 + 1;
      v25 = (int *)(a2 + v4 - 4);
      v40 = v25;
      v26 = (v44 >> 4) - 1;
      *(v25 - 1) = v24;
      if ( v26 > 0x3F )
        v26 = 63;
      if ( (v38 & 1) == 0 )
      {
        v27 = (v38 >> 4) - 1;
        if ( v27 > 0x3F )
          v27 = 63;
        if ( *(_DWORD *)(v8 + 4) == *(_DWORD *)(v8 + 8) )
        {
          if ( v27 >= 0x20 )
          {
            v31 = (_BYTE *)(v27 + v3 + 4);
            v32 = ~(0x80000000 >> (v27 - 32));
            *(_DWORD *)(v3 + 4 * v5 + 196) &= v32;
            v13 = (*v31)-- == 1;
            if ( v13 )
              a1[1] &= v32;
          }
          else
          {
            v28 = 0x80000000 >> v27;
            v29 = (_BYTE *)(v27 + v3 + 4);
            v30 = ~v28;
            *(_DWORD *)(v3 + 4 * v5 + 68) &= v30;
            v13 = (*v29)-- == 1;
            if ( v13 )
              *a1 &= v30;
          }
          v25 = v40;
        }
        *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4) = *(_DWORD *)(v8 + 4);
        *(_DWORD *)(*(_DWORD *)(v8 + 4) + 8) = *(_DWORD *)(v8 + 8);
        v44 += v38;
        v26 = (v44 >> 4) - 1;
        if ( v26 > 0x3F )
          v26 = 63;
      }
      v33 = v36 + 8 * v26;
      v25[1] = *(_DWORD *)(v33 + 4);
      v25[2] = v33;
      *(_DWORD *)(v33 + 4) = v25;
      *(_DWORD *)(v25[1] + 8) = v25;
      if ( v25[1] == v25[2] )
      {
        v41 = *(_BYTE *)(v26 + v3 + 4);
        *(_BYTE *)(v26 + v3 + 4) = v41 + 1;
        if ( v26 >= 0x20 )
        {
          if ( v41 == 0 )
            a1[1] |= 0x80000000 >> (v26 - 32);
          v34 = (_DWORD *)(v3 + 4 * v5 + 196);
          v35 = v26 - 32;
        }
        else
        {
          if ( v41 == 0 )
            *a1 |= 0x80000000 >> v26;
          v34 = (_DWORD *)(v3 + 4 * v5 + 68);
          v35 = v26;
        }
        *v34 |= 0x80000000 >> v35;
      }
      *v25 = v44;
      *(int *)((char *)v25 + v44 - 4) = v44;
    }
  }
  else
  {
    if ( (v7 & 1) != 0 || v4 > v6 + v7 )
      return 0;
    v9 = (v7 >> 4) - 1;
    v37 = v9;
    if ( v9 > 0x3F )
    {
      v9 = 63;
      v37 = 63;
    }
    if ( *(_DWORD *)(v8 + 4) == *(_DWORD *)(v8 + 8) )
    {
      if ( v9 >= 0x20 )
      {
        v14 = 0x80000000 >> (v9 - 32);
        v15 = (_BYTE *)(v37 + v3 + 4);
        v16 = ~v14;
        *(_DWORD *)(v3 + 4 * v5 + 196) &= v16;
        v13 = (*v15)-- == 1;
        if ( v13 )
          a1[1] &= v16;
      }
      else
      {
        v10 = 0x80000000 >> v9;
        v11 = (_BYTE *)(v37 + v3 + 4);
        v12 = ~v10;
        *(_DWORD *)(v3 + 4 * v5 + 68) &= v12;
        v13 = (*v11)-- == 1;
        if ( v13 )
          *a1 &= v12;
      }
    }
    *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4) = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(*(_DWORD *)(v8 + 4) + 8) = *(_DWORD *)(v8 + 8);
    v39 = v42 - v4 + v38;
    if ( v39 <= 0 )
    {
      v21 = a2;
    }
    else
    {
      v17 = (v39 >> 4) - 1;
      v18 = a2 + v4 - 4;
      if ( v17 > 0x3F )
        v17 = 63;
      v43 = v36 + 8 * v17;
      *(_DWORD *)(a2 + v4) = *(_DWORD *)(v43 + 4);
      *(_DWORD *)(v18 + 8) = v43;
      *(_DWORD *)(v43 + 4) = v18;
      *(_DWORD *)(*(_DWORD *)(a2 + v4) + 8) = a2 + v4 - 4;
      if ( *(_DWORD *)(a2 + v4) == *(_DWORD *)(a2 + v4 - 4 + 8) )
      {
        v45 = *(_BYTE *)(v17 + v3 + 4);
        *(_BYTE *)(v17 + v3 + 4) = v45 + 1;
        if ( v17 >= 0x20 )
        {
          if ( v45 == 0 )
            a1[1] |= 0x80000000 >> (v17 - 32);
          v19 = (_DWORD *)(v3 + 4 * v5 + 196);
          v20 = v17 - 32;
        }
        else
        {
          if ( v45 == 0 )
            *a1 |= 0x80000000 >> v17;
          v19 = (_DWORD *)(v3 + 4 * v5 + 68);
          v20 = v17;
        }
        *v19 |= 0x80000000 >> v20;
      }
      v21 = a2;
      v22 = (int *)(a2 + v4 - 4);
      *v22 = v39;
      *(int *)((char *)v22 + v39 - 4) = v39;
    }
    *(_DWORD *)(v21 - 4) = v4 + 1;
    *(_DWORD *)(v21 + v4 - 8) = v4 + 1;
  }
  return 1;
}

// Address: 0x10006DAA
int __sbh_heap_check()
{
  _DWORD *v1; // ebx
  _DWORD *v2; // esi
  void *v3; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  _DWORD *v6; // edx
  int *v7; // esi
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // eax
  int *v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // edx
  _DWORD *v15; // ecx
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  _DWORD v20[64]; // [esp+Ch] [ebp-13Ch] BYREF
  _DWORD *v21; // [esp+10Ch] [ebp-3Ch]
  _DWORD *v22; // [esp+110h] [ebp-38h]
  int *v23; // [esp+114h] [ebp-34h]
  int v24; // [esp+118h] [ebp-30h]
  int v25; // [esp+11Ch] [ebp-2Ch]
  int *v26; // [esp+120h] [ebp-28h]
  int v27; // [esp+124h] [ebp-24h]
  int v28; // [esp+128h] [ebp-20h]
  int v29; // [esp+12Ch] [ebp-1Ch]
  int v30; // [esp+130h] [ebp-18h]
  int v31; // [esp+134h] [ebp-14h]
  int v32; // [esp+138h] [ebp-10h]
  LPVOID lp; // [esp+13Ch] [ebp-Ch]
  int v34; // [esp+140h] [ebp-8h]
  _DWORD *v35; // [esp+144h] [ebp-4h]

  if ( IsBadWritePtr(::lp, 20 * dword_10014970) )
    return -1;
  v1 = ::lp;
  v22 = ::lp;
  v28 = 0;
  if ( dword_10014970 <= 0 )
    return 0;
  while ( 2 )
  {
    v2 = (_DWORD *)v1[4];
    if ( !IsBadWritePtr(v2, 0x41C4u) )
    {
      v3 = (void *)v1[3];
      v25 = 0;
      lp = v3;
      v26 = v2 + 81;
      v4 = v2 + 49;
      v31 = v1[2];
      v30 = 0;
      v24 = 0;
      v21 = v4;
      do
      {
        v27 = 0;
        v29 = 0;
        v35 = nullptr;
        memset(v20, 0, sizeof(v20));
        if ( v31 >= 0 )
        {
          if ( IsBadWritePtr(lp, 0x8000u) )
            return -4;
          v5 = 0;
          v6 = (char *)lp + 4092;
          while ( 2 )
          {
            v7 = v6 - 1020;
            if ( *(v6 - 1021) != -1 || *v6 != -1 )
              return -5;
            do
            {
              v8 = *v7;
              v9 = *v7;
              if ( (*v7 & 1) != 0 )
              {
                if ( --v8 > 1024 )
                  return -6;
                v35 = (_DWORD *)((char *)v35 + 1);
              }
              else
              {
                v10 = (v8 >> 4) - 1;
                if ( v10 > 63 )
                  v10 = 63;
                ++v20[v10];
              }
              if ( v8 < 16 || (v8 & 0xF) != 0 || v8 > 4080 )
                return -7;
              v11 = (int *)((char *)v7 + v8);
              if ( *(int *)((char *)v7 + v8 - 4) != v9 )
                return -8;
              v7 = (int *)((char *)v7 + v8);
            }
            while ( v11 < v6 );
            if ( v11 != v6 )
              return -8;
            v6 += 1024;
            if ( ++v5 < 8 )
              continue;
            break;
          }
          v12 = v26;
          if ( (_DWORD *)*v26 != v35 )
            return -9;
          v34 = 0;
          v35 = v20;
          while ( 1 )
          {
            v13 = v12[1];
            v32 = 0;
            v14 = (unsigned int)v12;
            v23 = v12;
            if ( (int *)v13 != v12 )
            {
              do
              {
                if ( v32 == *v35 )
                  break;
                if ( v13 < (unsigned int)lp || v13 >= (unsigned int)lp + 0x8000 )
                  return -10;
                v15 = (_DWORD *)((v13 & 0xFFFFF000) + 12);
                v16 = (v13 & 0xFFFFF000) + 4092;
                do
                {
                  if ( v15 == (_DWORD *)v13 )
                    break;
                  v15 = (_DWORD *)((char *)v15 + (*v15 & 0xFFFFFFFE));
                }
                while ( v15 != (_DWORD *)v16 );
                if ( v15 == (_DWORD *)v16 )
                  return -11;
                v17 = (*(int *)v13 >> 4) - 1;
                if ( v17 > 63 )
                  v17 = 63;
                if ( v17 != v34 )
                  return -12;
                if ( *(int **)(v13 + 8) != v23 )
                  return -13;
                ++v32;
                v14 = v13;
                v13 = *(_DWORD *)(v13 + 4);
                v23 = (int *)v14;
              }
              while ( (int *)v13 != v12 );
              if ( v32 != 0 )
              {
                if ( v34 >= 32 )
                {
                  v18 = 0x80000000 >> (v34 - 32);
                  v29 |= v18;
                  v30 |= v18;
                }
                else
                {
                  v27 |= 0x80000000 >> v34;
                  v25 |= 0x80000000 >> v34;
                }
              }
            }
            if ( *(int **)(v14 + 4) != v12 || v32 != *v35 )
              return -14;
            if ( v12[2] != v14 )
              return -15;
            ++v34;
            ++v35;
            v12 += 2;
            if ( v34 >= 64 )
            {
              v4 = v21;
              v1 = v22;
              break;
            }
          }
        }
        if ( v27 != *(v4 - 32) || v29 != *v4 )
          return -16;
        lp = (char *)lp + 0x8000;
        v26 += 129;
        v31 *= 2;
        ++v24;
        v21 = ++v4;
      }
      while ( v24 < 32 );
      if ( v25 != *v1 || v30 != v1[1] )
        return -17;
      v1 += 5;
      ++v28;
      v22 = v1;
      if ( v28 < dword_10014970 )
        continue;
      return 0;
    }
    break;
  }
  return -2;
}

// Address: 0x100070D9
int sub_100070D9()
{
  return dword_10013754;
}

// Address: 0x100070FB
int *sub_100070FB()
{
  int *v0; // esi
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  int *v3; // eax
  int v4; // ebp
  int v5; // edx

  if ( dword_10011740 == -1 )
  {
    v0 = (int *)&off_10011730;
  }
  else
  {
    v0 = (int *)HeapAlloc(hHeap, 0, 0x2020u);
    if ( v0 == nullptr )
      return nullptr;
  }
  v1 = VirtualAlloc(nullptr, 0x400000u, 0x2000u, 4u);
  v2 = v1;
  if ( v1 == nullptr )
  {
LABEL_19:
    if ( v0 != (int *)&off_10011730 )
      HeapFree(hHeap, 0, v0);
    return nullptr;
  }
  if ( VirtualAlloc(v1, 0x10000u, 0x1000u, 4u) == nullptr )
  {
    VirtualFree(v2, 0, 0x8000u);
    goto LABEL_19;
  }
  if ( v0 == (int *)&off_10011730 )
  {
    if ( off_10011730 == nullptr )
      off_10011730 = &off_10011730;
    if ( lpMem == nullptr )
      lpMem = &off_10011730;
  }
  else
  {
    *v0 = (int)&off_10011730;
    v0[1] = (int)lpMem;
    lpMem = v0;
    *(_DWORD *)v0[1] = v0;
  }
  v0[5] = (int)(v2 + 0x100000);
  v3 = v0 + 6;
  v0[3] = (int)(v0 + 38);
  v0[4] = (int)v2;
  v0[2] = (int)(v0 + 6);
  v4 = 0;
  do
  {
    v5 = v4++ >= 16 ? -1 : 240;
    *v3 = v5;
    v3[1] = 241;
    v3 += 2;
  }
  while ( v4 < 1024 );
  memset(v2, 0, 0x10000u);
  while ( (unsigned int)v2 < v0[4] + 0x10000 )
  {
    *((_BYTE *)v2 + 248) = -1;
    *v2 = v2 + 2;
    v2[1] = 240;
    v2 += 1024;
  }
  return v0;
}

// Address: 0x1000723F
_UNKNOWN **__cdecl sub_1000723F(LPVOID *lpMem)
{
  _UNKNOWN **result; // eax

  result = (_UNKNOWN **)VirtualFree(lpMem[4], 0, 0x8000u);
  if ( off_10013750 == (_UNKNOWN **)lpMem )
  {
    result = (_UNKNOWN **)lpMem[1];
    off_10013750 = result;
  }
  if ( lpMem == (LPVOID *)&off_10011730 )
  {
    dword_10011740 = -1;
  }
  else
  {
    *(_DWORD *)lpMem[1] = *lpMem;
    *((_DWORD *)*lpMem + 1) = lpMem[1];
    return (_UNKNOWN **)HeapFree(hHeap, 0, lpMem);
  }
  return result;
}

// Address: 0x10007295
void __cdecl sub_10007295(int a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // edi
  int i; // ebx
  unsigned int v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  int j; // edx
  int v8; // [esp+Ch] [ebp-4h]

  v1 = lpMem;
  do
  {
    if ( v1[4] != -1 )
    {
      v8 = 0;
      v2 = v1 + 2052;
      for ( i = 4190208; i >= 0; i -= 4096 )
      {
        if ( *v2 == 240 && VirtualFree((LPVOID)(v1[4] + i), 0x1000u, 0x4000u) )
        {
          *v2 = -1;
          --dword_10014844;
          v4 = v1[3];
          if ( v4 == 0 || v4 > (unsigned int)v2 )
            v1[3] = v2;
          ++v8;
          if ( --a1 == 0 )
            break;
        }
        v2 -= 2;
      }
      v5 = v1;
      v1 = (_DWORD *)v1[1];
      if ( v8 != 0 && v5[6] == -1 )
      {
        v6 = v5 + 8;
        for ( j = 1; j < 1024; ++j )
        {
          if ( *v6 != -1 )
            break;
          v6 += 2;
        }
        if ( j == 1024 )
          sub_1000723F((LPVOID *)v5);
      }
    }
  }
  while ( v1 != lpMem && a1 > 0 );
}

// Address: 0x10007357
unsigned int __cdecl sub_10007357(unsigned int a1, _DWORD *a2, unsigned int *a3)
{
  _UNKNOWN **v3; // ecx

  v3 = &off_10011730;
  while ( a1 <= (unsigned int)v3[4] || a1 >= (unsigned int)v3[5] )
  {
    v3 = (_UNKNOWN **)*v3;
    if ( v3 == &off_10011730 )
      return 0;
  }
  if ( (a1 & 0xF) == 0 && (a1 & 0xFFF) >= 0x100 )
  {
    *a2 = v3;
    *a3 = a1 & 0xFFFFF000;
    return ((int)(a1 - (a1 & 0xFFFFF000) - 256) >> 4) + (a1 & 0xFFFFF000) + 8;
  }
  return 0;
}

// Address: 0x100073AE
void __cdecl sub_100073AE(int a1, int a2, _BYTE *a3)
{
  _DWORD *v3; // eax
  bool v4; // zf

  v3 = (_DWORD *)(a1 + 8 * ((a2 - *(_DWORD *)(a1 + 16)) >> 12) + 24);
  *v3 += (unsigned __int8)*a3;
  *a3 = 0;
  v4 = *v3 == 240;
  v3[1] = 241;
  if ( v4 && ++dword_10014844 == 32 )
    sub_10007295(16);
}

// Address: 0x100073F3
_DWORD *__cdecl sub_100073F3(unsigned int a1)
{
  char *v1; // esi
  char *v2; // edx
  char *v3; // edi
  char *v4; // eax
  unsigned int v5; // ebx
  _DWORD *result; // eax
  char *v7; // edi
  _DWORD *v8; // ebx
  _DWORD *v9; // eax
  _DWORD *i; // esi
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  _UNKNOWN **v13; // eax
  bool v14; // cf
  int *v15; // eax
  int v16; // ecx
  unsigned int Val; // [esp+Ch] [ebp-8h]
  char *v18; // [esp+10h] [ebp-4h]
  char *v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+10h] [ebp-4h]

  v1 = (char *)off_10013750;
  do
  {
    v2 = *((char **)v1 + 4);
    if ( v2 == (char *)-1 )
    {
      v5 = a1;
    }
    else
    {
      v3 = *((char **)v1 + 2);
      v4 = &v2[4096 * ((v3 - v1 - 24) >> 3)];
      v18 = v4;
      if ( v3 < v1 + 8216 )
      {
        while ( 1 )
        {
          v5 = a1;
          if ( *(_DWORD *)v3 >= (signed int)a1 && *((_DWORD *)v3 + 1) > a1 )
          {
            result = (_DWORD *)sub_100075FB(v4, *(_DWORD *)v3, a1);
            if ( result != nullptr )
            {
LABEL_21:
              off_10013750 = (_UNKNOWN **)v1;
              *(_DWORD *)v3 -= v5;
              *((_DWORD *)v1 + 2) = v3;
              return result;
            }
            v4 = v18;
            *((_DWORD *)v3 + 1) = a1;
          }
          v3 += 8;
          v4 += 4096;
          v18 = v4;
          if ( v3 >= v1 + 8216 )
            goto LABEL_11;
        }
      }
      v5 = a1;
LABEL_11:
      v3 = v1 + 24;
      Val = *((_DWORD *)v1 + 2);
      v19 = *((char **)v1 + 4);
      if ( (unsigned int)(v1 + 24) < Val )
      {
        do
        {
          if ( *(_DWORD *)v3 >= (signed int)v5 && *((_DWORD *)v3 + 1) > v5 )
          {
            result = (_DWORD *)sub_100075FB(v19, *(_DWORD *)v3, v5);
            if ( result != nullptr )
              goto LABEL_21;
            *((_DWORD *)v3 + 1) = v5;
          }
          v19 += 4096;
          v3 += 8;
        }
        while ( (unsigned int)v3 < Val );
      }
    }
    v1 = *(char **)v1;
  }
  while ( v1 != (char *)off_10013750 );
  v7 = (char *)&off_10011730;
  while ( *((_DWORD *)v7 + 4) == -1 || *((_DWORD *)v7 + 3) == 0 )
  {
    v7 = *(char **)v7;
    if ( v7 == (char *)&off_10011730 )
    {
      v15 = sub_100070FB();
      if ( v15 != nullptr )
      {
        v16 = v15[4];
        *(_BYTE *)(v16 + 8) = v5;
        off_10013750 = (_UNKNOWN **)v15;
        *(_DWORD *)v16 = v16 + v5 + 8;
        *(_DWORD *)(v16 + 4) = 240 - v5;
        v15[6] -= (unsigned __int8)v5;
        return (_DWORD *)(v16 + 256);
      }
      return nullptr;
    }
  }
  v8 = *((_DWORD **)v7 + 3);
  v20 = 0;
  v9 = v8;
  for ( i = (_DWORD *)(*((_DWORD *)v7 + 4) + (((char *)v8 - v7 - 24) >> 3 << 12)); *v9 == -1; ++v20 )
  {
    if ( v20 >= 16 )
      break;
    v9 += 2;
  }
  if ( VirtualAlloc(i, v20 << 12, 0x1000u, 4u) != i )
    return nullptr;
  v11 = v8;
  if ( v20 > 0 )
  {
    v12 = i + 1;
    do
    {
      *((_BYTE *)v12 + 244) = -1;
      *(v12 - 1) = v12 + 1;
      *v12 = 240;
      *v11 = 240;
      v11[1] = 241;
      v12 += 1024;
      v11 += 2;
      --v20;
    }
    while ( v20 != 0 );
  }
  off_10013750 = (_UNKNOWN **)v7;
  v13 = (_UNKNOWN **)(v7 + 8216);
  while ( 1 )
  {
    v14 = v11 < v13;
    if ( v11 >= v13 )
      break;
    if ( *v11 == -1 )
    {
      v14 = v11 < v13;
      break;
    }
    v11 += 2;
  }
  *((_DWORD *)v7 + 3) = v14 ? v11 : nullptr;
  *((_BYTE *)i + 8) = a1;
  *((_DWORD *)v7 + 2) = v8;
  *v8 -= a1;
  i[1] -= a1;
  *i = (char *)i + a1 + 8;
  return i + 64;
}

// Address: 0x100075FB
int __cdecl sub_100075FB(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // esi
  _BYTE *v5; // edi
  unsigned int v6; // ebx
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // esi
  _BYTE *v10; // ebx
  unsigned int v11; // esi
  _BYTE *v12; // esi
  _BYTE *v13; // ebx
  unsigned int v14; // eax
  _BYTE *v16; // [esp+Ch] [ebp-4h]
  unsigned int v17; // [esp+18h] [ebp+8h]

  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_BYTE **)a1;
  v6 = a1 + 248;
  v16 = *(_BYTE **)a1;
  v7 = *(_BYTE **)a1;
  v17 = a1 + 248;
  if ( v4 >= a3 )
  {
    *v5 = a3;
    if ( (unsigned int)&v5[a3] >= v6 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = a1 + 8;
    }
    else
    {
      *(_DWORD *)a1 += a3;
      *(_DWORD *)(a1 + 4) -= a3;
    }
    v8 = v5 + 8;
    return 16 * (_DWORD)v8 - 15 * a1;
  }
  v9 = &v5[v4];
  if ( *v9 != 0 )
    v7 = v9;
  if ( (unsigned int)&v7[a3] >= v6 )
  {
LABEL_20:
    v12 = (_BYTE *)(a1 + 8);
    while ( v12 < v5 && (unsigned int)&v12[a3] < v17 )
    {
      if ( *v12 != 0 )
      {
        v12 += (unsigned __int8)*v12;
      }
      else
      {
        v13 = v12 + 1;
        v14 = 1;
        while ( *v13 == 0 )
        {
          ++v13;
          ++v14;
        }
        if ( v14 >= a3 )
        {
          if ( (unsigned int)&v12[a3] >= v17 )
          {
            *(_DWORD *)(a1 + 4) = 0;
            *(_DWORD *)a1 = a1 + 8;
          }
          else
          {
            *(_DWORD *)a1 = &v12[a3];
            *(_DWORD *)(a1 + 4) = v14 - a3;
          }
          *v12 = a3;
          v8 = v12 + 8;
          return 16 * (_DWORD)v8 - 15 * a1;
        }
        a2 -= v14;
        if ( a2 < a3 )
          return 0;
        v12 = v13;
      }
    }
    return 0;
  }
  while ( *v7 != 0 )
  {
    v7 += (unsigned __int8)*v7;
LABEL_19:
    if ( (unsigned int)&v7[a3] >= v17 )
      goto LABEL_20;
  }
  v10 = v7 + 1;
  v11 = 1;
  while ( *v10 == 0 )
  {
    ++v10;
    ++v11;
  }
  if ( v11 < a3 )
  {
    if ( v7 == v16 )
    {
      *(_DWORD *)(a1 + 4) = v11;
    }
    else
    {
      a2 -= v11;
      if ( a2 < a3 )
        return 0;
    }
    v5 = v16;
    v7 = v10;
    goto LABEL_19;
  }
  if ( (unsigned int)&v7[a3] >= v17 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = a1 + 8;
  }
  else
  {
    *(_DWORD *)a1 = &v7[a3];
    *(_DWORD *)(a1 + 4) = v11 - a3;
  }
  *v7 = a3;
  v8 = v7 + 8;
  return 16 * (_DWORD)v8 - 15 * a1;
}

// Address: 0x1000771F
int __cdecl sub_1000771F(int a1, _DWORD *a2, _BYTE *a3, unsigned int a4)
{
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  _BYTE *v6; // esi
  _BYTE *i; // eax
  bool v8; // zf
  int v9; // eax
  int v11; // [esp+Ch] [ebp-4h]

  v4 = (unsigned __int8)*a3;
  v11 = 0;
  v5 = (_DWORD *)(a1 + 8 * (((int)a2 - *(_DWORD *)(a1 + 16)) >> 12) + 24);
  if ( v4 > a4 )
  {
    *a3 = a4;
    *v5 += v4 - a4;
    v5[1] = 241;
    return 1;
  }
  if ( v4 < a4 )
  {
    v6 = &a3[a4];
    if ( &a3[a4] <= (_BYTE *)a2 + 248 )
    {
      for ( i = &a3[v4]; ; ++i )
      {
        v8 = i == v6;
        if ( i >= v6 )
          break;
        if ( *i != 0 )
        {
          v8 = i == v6;
          break;
        }
      }
      if ( v8 )
      {
        *a3 = a4;
        if ( (unsigned int)a3 <= *a2 && (unsigned int)v6 > *a2 )
        {
          if ( v6 >= (_BYTE *)a2 + 248 )
          {
            a2[1] = 0;
            *a2 = a2 + 2;
          }
          else
          {
            v9 = 0;
            *a2 = v6;
            if ( *v6 == 0 )
            {
              do
                ++v9;
              while ( v6[v9] == 0 );
            }
            a2[1] = v9;
          }
        }
        *v5 += v4 - a4;
        return 1;
      }
    }
  }
  return v11;
}

// Address: 0x10007926
int __cdecl __crtMessageBoxA(int a1, int a2, int a3)
{
  int v3; // ebx
  HMODULE LibraryA; // eax
  HMODULE v5; // edi

  v3 = 0;
  if ( dword_10014848 == nullptr )
  {
    LibraryA = LoadLibraryA("user32.dll");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    dword_10014848 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(LibraryA, "MessageBoxA");
    if ( dword_10014848 == nullptr )
      return 0;
    dword_1001484C = GetProcAddress(v5, "GetActiveWindow");
    dword_10014850 = (int (__stdcall *)(_DWORD))GetProcAddress(v5, "GetLastActivePopup");
  }
  if ( dword_1001484C != nullptr )
  {
    v3 = dword_1001484C();
    if ( v3 != 0 && dword_10014850 != nullptr )
      v3 = dword_10014850(v3);
  }
  return dword_10014848(v3, a1, a2, a3);
}

// Address: 0x100079AF
int (__cdecl *__cdecl _set_new_handler(int (__cdecl *a1)(unsigned int)))(unsigned int)
{
  int v1; // esi

  _lock(9);
  v1 = dword_10014858;
  dword_10014858 = (int)a1;
  _unlock(9);
  return (int (__cdecl *)(unsigned int))v1;
}

// Address: 0x100079D3
int sub_100079D3()
{
  return dword_10014858;
}

// Address: 0x100079D9
int __cdecl _callnewh(size_t Size)
{
  return dword_10014858 != nullptr && dword_10014858(Size) != 0;
}

// Address: 0x100079F4
char *__cdecl _Getdays()
{
  const char **v0; // esi
  int v1; // ebx
  size_t v2; // edi
  size_t v3; // eax
  bool v4; // zf
  char *v5; // esi
  const char **v6; // edi
  int i; // ebx
  char *v8; // esi
  char *v9; // eax
  char *v10; // esi
  char *v11; // eax
  const char **v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]
  char *v15; // [esp+10h] [ebp-4h]

  v0 = (const char **)Src;
  v13 = (const char **)Src;
  v1 = 0;
  v14 = 7;
  do
  {
    v2 = strlen(v0[7]);
    v3 = v1 + strlen(*v0++);
    v4 = v14-- == 1;
    v1 = v3 + v2 + 2;
  }
  while ( !v4 );
  v5 = (char *)malloc(v3 + v2 + 3);
  v15 = v5;
  if ( v5 != nullptr )
  {
    v6 = v13;
    for ( i = 7; i != 0; --i )
    {
      *v5 = 58;
      v8 = v5 + 1;
      v9 = strcpy(v8, *v6);
      v10 = &v8[strlen(v9)];
      *v10++ = 58;
      v11 = strcpy(v10, v6[7]);
      v5 = &v10[strlen(v11)];
      ++v6;
    }
    *v5 = 0;
  }
  return v15;
}

// Address: 0x10007A83
char *__cdecl _Getmonths()
{
  char *v0; // edi
  const char **v1; // esi
  size_t v2; // ebx
  size_t v3; // eax
  bool v4; // zf
  int v5; // eax
  char *v6; // esi
  const char **v7; // edi
  int i; // ebx
  char *v9; // esi
  char *v10; // eax
  char *v11; // esi
  char *v12; // eax
  int v14; // [esp+Ch] [ebp-8h]
  char *v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h]

  v16 = 0;
  v0 = (char *)Src;
  v14 = 12;
  v1 = (const char **)((char *)Src + 56);
  do
  {
    v2 = strlen(v1[12]);
    v3 = strlen(*v1++);
    v4 = v14-- == 1;
    v5 = v16 + v3 + v2 + 2;
    v16 = v5;
  }
  while ( !v4 );
  v6 = (char *)malloc(v5 + 1);
  v15 = v6;
  if ( v6 != nullptr )
  {
    v7 = (const char **)(v0 + 104);
    for ( i = 12; i != 0; --i )
    {
      *v6 = 58;
      v9 = v6 + 1;
      v10 = strcpy(v9, *(v7 - 12));
      v11 = &v9[strlen(v10)];
      *v11++ = 58;
      v12 = strcpy(v11, *v7);
      v6 = &v11[strlen(v12)];
      ++v7;
    }
    *v6 = 0;
  }
  return v15;
}

// Address: 0x10007B18
void *__cdecl _Gettnames()
{
  const char **v0; // esi
  int v1; // edi
  size_t v2; // eax
  bool v3; // zf
  size_t v4; // eax
  size_t v5; // ebx
  size_t v6; // edi
  size_t v7; // edi
  size_t v8; // edi
  size_t v9; // eax
  char *v10; // eax
  _DWORD *v11; // ebx
  char *v12; // edi
  char *v13; // eax
  char *v14; // edi
  char *v15; // eax
  size_t v16; // eax
  const char **v17; // eax
  char *v18; // eax
  char *v19; // edi
  char *v20; // eax
  size_t v21; // eax
  char *v22; // eax
  char *v23; // edi
  char *v24; // eax
  char *v25; // edi
  char *v26; // eax
  char *v27; // edi
  char *v28; // eax
  size_t v30; // [esp+Ch] [ebp-10h]
  size_t v31; // [esp+Ch] [ebp-10h]
  int v32; // [esp+Ch] [ebp-10h]
  int v33; // [esp+Ch] [ebp-10h]
  int v34; // [esp+10h] [ebp-Ch]
  int v35; // [esp+10h] [ebp-Ch]
  char **v36; // [esp+10h] [ebp-Ch]
  char **v37; // [esp+10h] [ebp-Ch]
  const char **v38; // [esp+14h] [ebp-8h]
  const char **v39; // [esp+14h] [ebp-8h]
  int v40; // [esp+14h] [ebp-8h]
  const char **v41; // [esp+18h] [ebp-4h]
  const char **i; // [esp+18h] [ebp-4h]

  v0 = (const char **)Src;
  v1 = 0;
  v38 = (const char **)Src;
  v34 = 7;
  do
  {
    v30 = strlen(v38[7]);
    v2 = strlen(*v38++);
    v3 = v34-- == 1;
    v1 += v2 + v30 + 2;
  }
  while ( !v3 );
  v35 = 12;
  v39 = (const char **)((char *)Src + 56);
  do
  {
    v31 = strlen(v39[12]);
    v4 = strlen(*v39++);
    v3 = v35-- == 1;
    v1 += v4 + v31 + 2;
  }
  while ( !v3 );
  v5 = strlen(*((const char **)Src + 38));
  v6 = v1 + strlen(*((const char **)Src + 39)) + v5 + 2;
  v7 = v6 + strlen(*((const char **)Src + 40)) + 1;
  v8 = v7 + strlen(*((const char **)Src + 41)) + 1;
  v9 = strlen(*((const char **)Src + 42));
  v10 = (char *)malloc(v8 + v9 + 173);
  v11 = v10;
  if ( v10 != nullptr )
  {
    v12 = v10 + 172;
    memcpy(v10, Src, 0xACu);
    v40 = (char *)v11 - (char *)v0;
    v36 = (char **)v11;
    v41 = v0 + 7;
    v32 = 7;
    do
    {
      *v36 = v12;
      v13 = strcpy(v12, *(v41 - 7));
      v14 = &v12[strlen(v13) + 1];
      *(const char **)((char *)v41 + v40) = v14;
      v15 = strcpy(v14, *v41);
      v16 = strlen(v15);
      ++v36;
      ++v41;
      v3 = v32-- == 1;
      v12 = &v14[v16 + 1];
    }
    while ( !v3 );
    v33 = 12;
    v37 = (char **)(v11 + 26);
    v17 = v0 + 14;
    for ( i = v0 + 14; ; v17 = i )
    {
      *(const char **)((char *)v17 + v40) = v12;
      v18 = strcpy(v12, *v17);
      v19 = &v12[strlen(v18) + 1];
      *v37 = v19;
      v20 = strcpy(v19, i[12]);
      v21 = strlen(v20);
      ++i;
      ++v37;
      v3 = v33-- == 1;
      v12 = &v19[v21 + 1];
      if ( v3 )
        break;
    }
    v11[38] = v12;
    v22 = strcpy(v12, v0[38]);
    v23 = &v12[strlen(v22) + 1];
    v11[39] = v23;
    v24 = strcpy(v23, v0[39]);
    v25 = &v23[strlen(v24) + 1];
    v11[40] = v25;
    v26 = strcpy(v25, v0[40]);
    v27 = &v25[strlen(v26) + 1];
    v11[41] = v27;
    v28 = strcpy(v27, v0[41]);
    v11[42] = &v27[strlen(v28) + 1];
  }
  return v11;
}

// Address: 0x10007D65
unsigned int __cdecl sub_10007D65(unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3, int a4, void *a5)
{
  void *v5; // eax
  unsigned __int8 *v6; // esi
  unsigned __int8 v7; // al
  char *v8; // esi
  int v10; // [esp+Ch] [ebp-8h]
  unsigned int v11; // [esp+10h] [ebp-4h] BYREF

  v11 = a2;
  InterlockedIncrement(&Addend);
  if ( dword_10014DA0 != 0 )
  {
    InterlockedDecrement(&Addend);
    _lock(19);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  v5 = a5;
  if ( a5 == nullptr )
    v5 = Src;
  a5 = v5;
  if ( v11 != 0 )
  {
    v6 = a3;
    do
    {
      v7 = *v6;
      if ( *v6 == 0 )
        break;
      if ( v7 == 37 )
      {
        dword_10014938 = 0;
        v8 = (char *)(v6 + 1);
        if ( *v8 == 35 )
        {
          dword_10014938 = 1;
          ++v8;
        }
        _expandtime(*v8, a4, &a1, &v11, a5);
        v6 = (unsigned __int8 *)(v8 + 1);
      }
      else
      {
        if ( *((char *)off_10010B48 + 2 * v7 + 1) < 0 && v11 > 1 )
        {
          *a1++ = v7;
          ++v6;
          --v11;
        }
        *a1++ = *v6++;
        --v11;
      }
    }
    while ( v11 != 0 );
  }
  if ( v10 != 0 )
    _unlock(19);
  else
    InterlockedDecrement(&Addend);
  if ( v11 == 0 )
    return 0;
  *a1 = 0;
  return a2 - v11;
}

// Address: 0x10007E5F
int __cdecl _expandtime(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int result; // eax
  int v6; // edx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // [esp-Ch] [ebp-18h]
  _DWORD *v14; // [esp-8h] [ebp-14h]
  _DWORD *v15; // [esp-8h] [ebp-14h]
  _DWORD *v16; // [esp-4h] [ebp-10h]
  _DWORD *v17; // [esp-4h] [ebp-10h]

  if ( a1 <= 90 )
  {
    if ( a1 != 90 )
    {
      if ( a1 > 77 )
      {
        if ( a1 == 83 )
        {
          dword_10014948 = dword_10014938;
          return _store_num(*a2, 2, a3, a4);
        }
        if ( a1 == 85 )
        {
          dword_10014948 = dword_10014938;
          v7 = a2;
          v9 = a2[6];
        }
        else
        {
          if ( a1 != 87 )
          {
            if ( a1 == 88 )
            {
              dword_10014938 = 0;
              return sub_1000832D(*(char **)(a5 + 168), (int)a2, (int)a3, (int)a4, a5);
            }
            else
            {
              result = a1 - 89;
              if ( a1 == 89 )
              {
                dword_10014948 = dword_10014938;
                return _store_num(a2[5] % 100 + 100 * (a2[5] / 100 + 19), 4, a3, a4);
              }
            }
            return result;
          }
          dword_10014948 = dword_10014938;
          v7 = a2;
          v8 = a2[6];
          if ( v8 != 0 )
            v9 = v8 - 1;
          else
            v9 = 6;
        }
        v10 = v7[7];
        if ( v10 >= v9 )
        {
          v11 = v10 / 7;
          if ( v10 % 7 >= v9 )
            ++v11;
        }
        else
        {
          v11 = 0;
        }
        return _store_num(v11, 2, a3, a4);
      }
      else
      {
        switch ( a1 )
        {
          case 'M':
            dword_10014948 = dword_10014938;
            return _store_num(a2[1], 2, a3, a4);
          case '%':
            *(_BYTE *)(*a3)++ = 37;
            --*a4;
            return (int)a4;
          case 'A':
            return _store_str(*(_DWORD *)(a5 + 4 * a2[6] + 28), a3, a4);
          case 'B':
            return _store_str(*(_DWORD *)(a5 + 4 * a2[4] + 104), a3, a4);
          case 'H':
            dword_10014948 = dword_10014938;
            return _store_num(a2[2], 2, a3, a4);
          default:
            result = a1 - 73;
            if ( a1 != 73 )
              return result;
            dword_10014948 = dword_10014938;
            v6 = a2[2] % 12;
            if ( v6 == 0 )
              v6 = 12;
            v16 = a4;
            v14 = a3;
            return _store_num(v6, 2, v14, v16);
        }
      }
    }
LABEL_59:
    __tzset();
    return _store_str((&Destination)[a2[8] != 0], a3, a4);
  }
  if ( a1 <= 109 )
  {
    switch ( a1 )
    {
      case 'm':
        v17 = a4;
        dword_10014948 = dword_10014938;
        v15 = a3;
        v12 = a2[4];
        v13 = 2;
        break;
      case 'a':
        return _store_str(*(_DWORD *)(a5 + 4 * a2[6]), a3, a4);
      case 'b':
        return _store_str(*(_DWORD *)(a5 + 4 * a2[4] + 56), a3, a4);
      case 'c':
        if ( dword_10014938 != 0 )
        {
          dword_10014938 = 0;
          result = sub_1000832D(*(char **)(a5 + 164), (int)a2, (int)a3, (int)a4, a5);
        }
        else
        {
          result = sub_1000832D(*(char **)(a5 + 160), (int)a2, (int)a3, (int)a4, a5);
        }
        if ( *a4 != 0 )
        {
          *(_BYTE *)(*a3)++ = 32;
          --*a4;
          return sub_1000832D(*(char **)(a5 + 168), (int)a2, (int)a3, (int)a4, a5);
        }
        return result;
      case 'd':
        dword_10014948 = dword_10014938;
        return _store_num(a2[3], 2, a3, a4);
      default:
        result = a1 - 106;
        if ( a1 != 106 )
          return result;
        v17 = a4;
        dword_10014948 = dword_10014938;
        v15 = a3;
        v12 = a2[7];
        v13 = 3;
        break;
    }
    return _store_num(v12 + 1, v13, v15, v17);
  }
  switch ( a1 )
  {
    case 'p':
      if ( (int)a2[2] > 11 )
        return _store_str(*(_DWORD *)(a5 + 156), a3, a4);
      else
        return _store_str(*(_DWORD *)(a5 + 152), a3, a4);
    case 'w':
      dword_10014948 = dword_10014938;
      return _store_num(a2[6], 1, a3, a4);
    case 'x':
      if ( dword_10014938 == 0 )
        return sub_1000832D(*(char **)(a5 + 160), (int)a2, (int)a3, (int)a4, a5);
      dword_10014938 = 0;
      return sub_1000832D(*(char **)(a5 + 164), (int)a2, (int)a3, (int)a4, a5);
    case 'y':
      v16 = a4;
      dword_10014948 = dword_10014938;
      v14 = a3;
      v6 = a2[5] % 100;
      return _store_num(v6, 2, v14, v16);
    default:
      break;
  }
  result = a1 - 122;
  if ( a1 == 122 )
    goto LABEL_59;
  return result;
}

// Address: 0x1000824E
void __cdecl _store_str(_BYTE *a1, _DWORD *a2, _DWORD *a3)
{
  if ( *a3 != 0 )
  {
    do
    {
      if ( *a1 == 0 )
        break;
      *(_BYTE *)(*a2)++ = *a1++;
    }
    while ( (*a3)-- != 1 );
  }
}

// Address: 0x10008275
int __cdecl _store_num(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  int result; // eax
  unsigned int v5; // ecx
  int v6; // [esp+4h] [ebp-4h]

  result = 0;
  v6 = 0;
  if ( dword_10014948 != 0 )
    return _store_number(a1, a3, a4);
  if ( a2 >= *a4 )
  {
    *a4 = 0;
  }
  else
  {
    v5 = a2 - 1;
    if ( a2 != 0 )
    {
      do
      {
        *(_BYTE *)(*a3 + v5) = a1 % 10 + 48;
        ++v6;
        --v5;
        a1 /= 10;
      }
      while ( v5 != -1 );
    }
    *a3 += v6;
    *a4 -= v6;
    return v6;
  }
  return result;
}

// Address: 0x100082E4
char *__cdecl _store_number(int a1, char **a2, _DWORD *a3)
{
  char *v3; // ecx
  char *result; // eax
  char *v5; // ecx
  char v6; // dl

  v3 = *a2;
  do
  {
    if ( *a3 <= 1u )
      break;
    *v3++ = a1 % 10 + 48;
    --*a3;
    a1 /= 10;
  }
  while ( a1 > 0 );
  result = *a2;
  *a2 = v3;
  v5 = v3 - 1;
  do
  {
    v6 = *v5;
    *v5-- = *result;
    *result++ = v6;
  }
  while ( result < v5 );
  return result;
}

// Address: 0x1000832D
void __cdecl sub_1000832D(char *String1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  char *v5; // ebx
  int v8; // ecx
  _BYTE *v9; // eax
  char *v10; // ebx
  unsigned __int8 v11; // al
  unsigned __int8 *v12; // eax
  unsigned __int8 v13; // cl
  char String1_3; // [esp+1Bh] [ebp+Bh]
  int v15; // [esp+20h] [ebp+10h]
  int v16; // [esp+20h] [ebp+10h]
  char v17; // [esp+24h] [ebp+14h]

  v5 = String1;
  while ( *v5 != 0 )
  {
    v8 = 0;
    if ( *a4 == 0 )
      return;
    dword_10014948 = 0;
    String1_3 = *v5;
    v15 = (int)(v5 + 1);
    do
    {
      v9 = (_BYTE *)v15;
      ++v8;
      ++v15;
    }
    while ( *v9 == String1_3 );
    v16 = v15 - 1;
    if ( String1_3 > 100 )
    {
      switch ( String1_3 )
      {
        case 'h':
          if ( v8 == 1 )
          {
            dword_10014948 = 1;
          }
          else if ( v8 != 2 )
          {
LABEL_12:
            if ( *((char *)off_10010B48 + 2 * (unsigned __int8)String1_3 + 1) < 0 )
            {
              ++v5;
              *(_BYTE *)(*a3)++ = String1_3;
              --*a4;
            }
            *(_BYTE *)(*a3)++ = *v5++;
            --*a4;
            continue;
          }
          v17 = 73;
          break;
        case 'm':
          if ( v8 == 1 )
          {
            dword_10014948 = 1;
          }
          else if ( v8 != 2 )
          {
            goto LABEL_12;
          }
          v17 = 77;
          break;
        case 's':
          if ( v8 == 1 )
          {
            dword_10014948 = 1;
          }
          else if ( v8 != 2 )
          {
            goto LABEL_12;
          }
          v17 = 83;
          break;
        case 't':
          if ( (int)a2[2] > 11 )
            v12 = *(unsigned __int8 **)(a5 + 156);
          else
            v12 = *(unsigned __int8 **)(a5 + 152);
          if ( v8 == 1 && *a4 != 0 )
          {
            if ( *((char *)off_10010B48 + 2 * *v12 + 1) < 0 && *a4 > 1u )
            {
              *(_BYTE *)(*a3)++ = *v12++;
              --*a4;
            }
            *(_BYTE *)(*a3)++ = *v12;
            --*a4;
          }
          else
          {
            while ( 1 )
            {
              v13 = *v12;
              if ( *v12 == 0 || *a4 == 0 )
                break;
              if ( *((char *)off_10010B48 + 2 * v13 + 1) < 0 && *a4 > 1u )
              {
                *(_BYTE *)(*a3)++ = v13;
                ++v12;
                --*a4;
              }
              *(_BYTE *)(*a3)++ = *v12++;
              --*a4;
            }
          }
          goto LABEL_73;
        case 'y':
          if ( v8 == 2 )
          {
            v17 = 121;
          }
          else
          {
            if ( v8 != 4 )
              goto LABEL_12;
            v17 = 89;
          }
          break;
        default:
          goto LABEL_12;
      }
    }
    else
    {
      switch ( String1_3 )
      {
        case 'd':
          if ( v8 == 1 )
          {
            dword_10014948 = 1;
          }
          else if ( v8 != 2 )
          {
            if ( v8 == 3 )
            {
              v17 = 97;
            }
            else
            {
              if ( v8 != 4 )
                goto LABEL_12;
              v17 = 65;
            }
            break;
          }
          v17 = 100;
          break;
        case '\'':
          if ( (v8 & 1) != 0 )
          {
            for ( v5 += v8; ; ++v5 )
            {
              v11 = *v5;
              if ( *v5 == 0 || *a4 == 0 )
                break;
              if ( v11 == 39 )
              {
                ++v5;
                goto LABEL_15;
              }
              if ( *((char *)off_10010B48 + 2 * v11 + 1) < 0 && *a4 > 1u )
              {
                *(_BYTE *)(*a3)++ = v11;
                ++v5;
                --*a4;
              }
              *(_BYTE *)(*a3)++ = *v5;
              --*a4;
            }
          }
          else
          {
            v5 += v8;
          }
          continue;
        case 'A':
          goto LABEL_30;
        case 'H':
          if ( v8 == 1 )
          {
            dword_10014948 = 1;
          }
          else if ( v8 != 2 )
          {
            goto LABEL_12;
          }
          v17 = 72;
          break;
        case 'M':
          if ( v8 == 1 )
          {
            dword_10014948 = 1;
          }
          else if ( v8 != 2 )
          {
            if ( v8 == 3 )
            {
              v17 = 98;
            }
            else
            {
              if ( v8 != 4 )
                goto LABEL_12;
              v17 = 66;
            }
            break;
          }
          v17 = 109;
          break;
        case 'a':
LABEL_30:
          if ( _strcmpi(v5, "am/pm") == 0 )
          {
            v10 = v5 + 5;
            goto LABEL_34;
          }
          if ( _strcmpi(v5, "a/p") == 0 )
          {
            v10 = v5 + 3;
LABEL_34:
            v16 = (int)v10;
          }
          v17 = 112;
          break;
        default:
          goto LABEL_12;
      }
    }
    _expandtime(v17, a2, a3, a4, a5);
LABEL_73:
    v5 = (char *)v16;
LABEL_15:
    ;
  }
}

// Address: 0x1000863B
int __cdecl __getlocaleinfo(int a1, LCID Locale, LCTYPE LCType, char **a4)
{
  char *v4; // edi
  size_t LocaleInfoA; // esi
  size_t v6; // eax
  int v7; // esi
  CHAR *v8; // eax
  char *v9; // eax
  WCHAR *v11; // esi
  unsigned __int8 v12; // bl
  int v13; // eax
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF
  int v15; // [esp+94h] [ebp+8h]

  if ( a1 == 1 )
  {
    v4 = Source;
    v15 = 0;
    LocaleInfoA = __crtGetLocaleInfoA(Locale, LCType, Source, 128, 0);
    if ( LocaleInfoA == 0 )
    {
      if ( GetLastError() != 122 )
        return -1;
      v6 = __crtGetLocaleInfoA(Locale, LCType, nullptr, 0, 0);
      v7 = v6;
      if ( v6 == 0 )
        return -1;
      v8 = (CHAR *)malloc(v6);
      v4 = v8;
      if ( v8 == nullptr )
        return -1;
      v15 = 1;
      LocaleInfoA = __crtGetLocaleInfoA(Locale, LCType, v8, v7, 0);
      if ( LocaleInfoA == 0 )
        goto LABEL_9;
    }
    v9 = (char *)malloc(LocaleInfoA);
    *a4 = v9;
    if ( v9 == nullptr )
    {
      if ( v15 == 0 )
        return -1;
LABEL_9:
      sub_100034D5(v4);
      return -1;
    }
    strncpy(v9, v4, LocaleInfoA);
    if ( v15 != 0 )
      sub_100034D5(v4);
  }
  else
  {
    if ( a1 != 0 )
      return -1;
    v11 = &LCData;
    if ( __crtGetLocaleInfoW(Locale, LCType, &LCData, 4, 0) == 0 )
      return -1;
    *(_BYTE *)a4 = 0;
    do
    {
      v12 = *(_BYTE *)v11;
      if ( dword_10010D54 <= 1 )
        v13 = *((_BYTE *)off_10010B48 + 2 * v12) & 4;
      else
        v13 = _isctype(v12, 4);
      if ( v13 == 0 )
        break;
      ++v11;
      *(_BYTE *)a4 = v12 + 10 * *(_BYTE *)a4 - 48;
    }
    while ( (int)v11 < (int)word_10014864 );
  }
  return 0;
}

// Address: 0x10008773
_UNKNOWN **sub_10008773()
{
  return off_10013848;
}

// Address: 0x10008779
BOOL __cdecl __crtGetStringTypeW(
        DWORD dwInfoType,
        LPCWCH lpSrcStr,
        int cchSrc,
        LPWORD lpCharType,
        UINT CodePage,
        LCID Locale)
{
  int v6; // eax
  int v8; // eax
  size_t v9; // esi
  int v10; // eax
  void *v11; // esp
  int v12; // eax
  void *v13; // esp
  LCID v14; // eax
  WORD *v15; // esi
  WORD v16[6]; // [esp+0h] [ebp-38h] BYREF
  LPSTR lpMultiByteStr; // [esp+Ch] [ebp-2Ch]
  int v18; // [esp+10h] [ebp-28h]
  WORD *v19; // [esp+14h] [ebp-24h]
  BOOL StringTypeA; // [esp+18h] [ebp-20h]
  WORD CharType; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v6 = dword_10014868;
  if ( dword_10014868 == 0 )
  {
    if ( GetStringTypeW(1u, &String2, 1, &CharType) )
    {
      v6 = 1;
    }
    else
    {
      if ( !GetStringTypeA(0, 1u, String1, 1, &CharType) )
        return false;
      v6 = 2;
    }
    dword_10014868 = v6;
  }
  if ( v6 == 1 )
    return GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
  if ( v6 == 2 )
  {
    if ( CodePage == 0 )
      CodePage = dword_1001467C;
    v8 = WideCharToMultiByte(CodePage, 0x220u, lpSrcStr, cchSrc, nullptr, 0, nullptr, nullptr);
    v9 = v8;
    v18 = v8;
    if ( v8 != 0 )
    {
      v10 = v8 + 3;
      LOBYTE(v10) = v10 & 0xFC;
      v11 = alloca(v10);
      ms_exc.old_esp = (DWORD)v16;
      lpMultiByteStr = (LPSTR)v16;
      memset(v16, 0, v9);
      ms_exc.registration.TryLevel = -1;
      if ( lpMultiByteStr != nullptr
        && WideCharToMultiByte(CodePage, 0x220u, lpSrcStr, cchSrc, lpMultiByteStr, v9, nullptr, nullptr) != 0 )
      {
        v12 = 2 * v9 + 5;
        LOBYTE(v12) = v12 & 0xFC;
        v13 = alloca(v12);
        ms_exc.old_esp = (DWORD)v16;
        v19 = v16;
        ms_exc.registration.TryLevel = -1;
        if ( v16 != nullptr )
        {
          v14 = Locale;
          if ( Locale == 0 )
            v14 = dword_1001466C;
          v15 = &v16[cchSrc];
          *v15 = -1;
          *(v15 - 1) = -1;
          StringTypeA = GetStringTypeA(v14, dwInfoType, lpMultiByteStr, v18, v16);
          if ( *(v15 - 1) != 0xFFFF && *v15 == 0xFFFF )
          {
            memcpy_0(lpCharType, v16, 2 * cchSrc);
            return StringTypeA;
          }
        }
      }
    }
  }
  return false;
}

// Address: 0x1000893E
char *__cdecl _itoa(int Value, char *Buffer, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    xtoa(Value, Buffer, 10, 1);
  else
    xtoa(Value, Buffer, Radix, 0);
  return Buffer;
}

// Address: 0x1000896B
char __cdecl xtoa(unsigned int a1, char *a2, unsigned int a3, int a4)
{
  char *v4; // ecx
  unsigned int v5; // esi
  char *v6; // edi
  int v7; // ebx
  bool v8; // cc
  char v9; // bl
  char *v10; // ecx
  char result; // al

  v4 = a2;
  if ( a4 != 0 )
  {
    *a2 = 45;
    v4 = a2 + 1;
    v5 = -a1;
  }
  else
  {
    v5 = a1;
  }
  v6 = v4;
  do
  {
    v7 = v5 % a3;
    v8 = v5 % a3 <= 9;
    v5 /= a3;
    if ( v8 )
      v9 = v7 + 48;
    else
      v9 = v7 + 87;
    *v4++ = v9;
  }
  while ( v5 != 0 );
  *v4 = 0;
  v10 = v4 - 1;
  do
  {
    result = *v10;
    *v10 = *v6;
    *v6 = result;
    --v10;
    ++v6;
  }
  while ( v6 < v10 );
  return result;
}

// Address: 0x100089C7
char *__cdecl _ltoa(int Value, char *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = false;
  if ( Radix == 10 )
    v3 = Value < 0;
  xtoa(Value, Buffer, Radix, v3);
  return Buffer;
}

// Address: 0x100089F1
char *__cdecl _ultoa(unsigned int Value, char *Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0);
  return Buffer;
}

// Address: 0x10008A0C
char *__cdecl _i64toa(__int64 Value, char *Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = false;
  if ( Radix == 10 && SHIDWORD(Value) <= 0 )
    v3 = Value < 0;
  x64toa(Value, HIDWORD(Value), Buffer, Radix, v3);
  return Buffer;
}

// Address: 0x10008A3D
char *__stdcall x64toa(unsigned __int64 a1, char *a2, unsigned int a3, int a4)
{
  char *v4; // esi
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // rax
  char *v7; // esi
  char v8; // cl
  char *result; // eax
  char *v10; // [esp+1Ch] [ebp+10h]
  unsigned int v11; // [esp+24h] [ebp+18h]

  v4 = a2;
  if ( a4 != 0 )
  {
    *a2 = 45;
    v4 = a2 + 1;
    v5 = -(__int64)a1;
  }
  else
  {
    v5 = a1;
  }
  v10 = v4;
  do
  {
    v11 = v5 % a3;
    v6 = v5 / a3;
    v5 = v6;
    if ( v11 <= 9 )
      LOBYTE(v6) = v11 + 48;
    else
      LOBYTE(v6) = v11 + 87;
    *v4++ = v6;
  }
  while ( HIDWORD(v6) != 0 || (_DWORD)v5 != 0 );
  *v4 = 0;
  v7 = v4 - 1;
  do
  {
    v8 = *v7;
    *v7 = *v10;
    *v10 = v8;
    --v7;
    result = v10 + 1;
    v10 = result;
  }
  while ( result < v7 );
  return result;
}

// Address: 0x10008AC3
char *__cdecl _ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  x64toa(Value, Buffer, Radix, 0);
  return Buffer;
}

// Address: 0x10008AE0
int __cdecl _strcmpi(const char *String1, const char *String2)
{
  int result; // eax
  char v5; // t0
  int v6; // eax
  int v7; // ebx
  int v8; // ebx
  int v9; // [esp-4h] [ebp-14h]
  int v10; // [esp+0h] [ebp-10h]

  if ( dword_1001466C != 0 )
  {
    _InterlockedIncrement(&Addend);
    if ( dword_10014DA0 > 0 )
    {
      _InterlockedDecrement(&Addend);
      _lock(19);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    v6 = 255;
    v7 = 0;
    while ( (_BYTE)v6 != 0 )
    {
      LOBYTE(v6) = *String2++;
      LOBYTE(v7) = *String1++;
      if ( (_BYTE)v6 != (_BYTE)v7 )
      {
        v9 = v6;
        v7 = tolower_0(v7);
        v6 = tolower_0(v9);
        if ( (_BYTE)v7 != (_BYTE)v6 )
        {
          v6 = -((unsigned __int8)v7 < (unsigned __int8)v6) - (((unsigned __int8)v7 < (unsigned __int8)v6) - 1);
          break;
        }
      }
    }
    v8 = v6;
    if ( v10 != 0 )
      _unlock(19);
    else
      _InterlockedDecrement(&Addend);
    return v8;
  }
  else
  {
    LOBYTE(result) = -1;
    while ( (_BYTE)result != 0 )
    {
      LOBYTE(result) = *String2++;
      BYTE1(result) = *String1++;
      if ( BYTE1(result) != (_BYTE)result )
      {
        v5 = BYTE1(result);
        BYTE1(result) = ((unsigned __int8)(result - 65) < 0x1Au ? 0x20 : 0) + result;
        LOBYTE(result) = ((unsigned __int8)(v5 - 65) < 0x1Au ? 0x20 : 0) + v5;
        if ( (_BYTE)result != BYTE1(result) )
        {
          LOBYTE(result) = -((unsigned __int8)result < BYTE1(result)) - (((unsigned __int8)result < BYTE1(result)) - 1);
          return (char)result;
        }
      }
    }
    return (char)result;
  }
}

// Address: 0x10008BB0
int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  size_t v3; // ecx
  unsigned __int8 v6; // ah
  unsigned __int8 v7; // al
  bool v8; // cf
  unsigned int v9; // eax
  unsigned int v10; // ebx
  bool v11; // cf
  int v12; // ebx
  int v14; // [esp-8h] [ebp-18h]
  size_t v15; // [esp-4h] [ebp-14h]
  int v16; // [esp+0h] [ebp-10h]

  v3 = MaxCount;
  if ( MaxCount != 0 )
  {
    if ( dword_1001466C != 0 )
    {
      _InterlockedIncrement(&Addend);
      if ( dword_10014DA0 > 0 )
      {
        _InterlockedDecrement(&Addend);
        _lock(19);
        v16 = 1;
        v3 = MaxCount;
      }
      else
      {
        v16 = 0;
      }
      v9 = 0;
      v10 = 0;
      do
      {
        LOBYTE(v9) = *String1;
        LOBYTE(v10) = *String2;
        if ( v9 == 0 || v10 == 0 )
          break;
        ++String1;
        ++String2;
        v15 = v3;
        v14 = v9;
        v10 = tolower_0(v10);
        v9 = tolower_0(v14);
        v11 = v9 < v10;
        if ( v9 != v10 )
          goto differ2;
        v3 = v15 - 1;
      }
      while ( v15 != 1 );
      v3 = 0;
      v11 = v9 < v10;
      if ( v9 != v10 )
      {
differ2:
        v3 = -1;
        if ( !v11 )
          v3 = 1;
      }
      if ( v16 != 0 )
      {
        v12 = v3;
        _unlock(19);
        return v12;
      }
      else
      {
        _InterlockedDecrement(&Addend);
      }
    }
    else
    {
      do
      {
        v6 = *String1;
        v7 = *String2;
        if ( *String1 == 0 || v7 == 0 )
          break;
        ++String1;
        ++String2;
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
  }
  return v3;
}

// Address: 0x10008CB1
int __cdecl atol(const char *String)
{
  int v2; // eax
  int v3; // esi
  const char *v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  int result; // eax

  while ( 1 )
  {
    v2 = dword_10010D54 <= 1
       ? *((_BYTE *)off_10010B48 + 2 * *(unsigned __int8 *)String) & 8
       : _isctype(*(unsigned __int8 *)String, 8);
    if ( v2 == 0 )
      break;
    ++String;
  }
  v3 = *(unsigned __int8 *)String;
  v4 = String + 1;
  v5 = v3;
  if ( v3 == 45 || v3 == 43 )
    v3 = *(unsigned __int8 *)v4++;
  v6 = 0;
  while ( 1 )
  {
    v7 = dword_10010D54 <= 1 ? *((_BYTE *)off_10010B48 + 2 * v3) & 4 : _isctype(v3, 4);
    if ( v7 == 0 )
      break;
    v6 = v3 + 10 * v6 - 48;
    v3 = *(unsigned __int8 *)v4++;
  }
  result = v6;
  if ( v5 == 45 )
    return -v6;
  return result;
}

// Address: 0x10008D47
__int64 __cdecl _atoi64(const char *String)
{
  int v2; // eax
  int v3; // esi
  const char *v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  int v7; // eax
  unsigned __int64 v8; // kr08_8
  __int64 result; // rax
  int v10; // [esp+10h] [ebp-4h]

  while ( 1 )
  {
    v2 = dword_10010D54 <= 1
       ? *((_BYTE *)off_10010B48 + 2 * *(unsigned __int8 *)String) & 8
       : _isctype(*(unsigned __int8 *)String, 8);
    if ( v2 == 0 )
      break;
    ++String;
  }
  v3 = *(unsigned __int8 *)String;
  v4 = String + 1;
  v10 = v3;
  if ( v3 == 45 || v3 == 43 )
    v3 = *(unsigned __int8 *)v4++;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = dword_10010D54 <= 1 ? *((_BYTE *)off_10010B48 + 2 * v3) & 4 : _isctype(v3, 4);
    if ( v7 == 0 )
      break;
    v8 = 10 * __PAIR64__(v6, v5) + v3 - 48;
    v6 = HIDWORD(v8);
    v5 = v8;
    v3 = *(unsigned __int8 *)v4++;
  }
  LODWORD(result) = v5;
  if ( v10 == 45 )
    return -__SPAIR64__(v6, v5);
  HIDWORD(result) = v6;
  return result;
}

// Address: 0x10008E74
int *__cdecl _errno()
{
  return _getptd() + 2;
}

// Address: 0x10008E7D
_DWORD *sub_10008E7D()
{
  return _getptd() + 3;
}

// Address: 0x10008E90
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  char *v3; // esi
  char *v4; // edi
  size_t v5; // ecx
  void *result; // eax
  char *v7; // esi
  char *v8; // edi
  size_t v9; // ecx

  v3 = (char *)Src;
  v4 = (char *)a1;
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
        __asm { jmp     dword ptr ds:(loc_10009074+4)[eax*4] }
        return result;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
    {
      if ( Size >= 4 )
        __asm { jmp     dword ptr ds:(loc_10008EEC+4)[eax*4] }
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 10008EC5 case 0 }
    }
    v5 = Size >> 2;
    switch ( v5 )
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
        *((_DWORD *)a1 + v5 - 7) = *((_DWORD *)Src + v5 - 7);
UnwindUp6_0:
        *((_DWORD *)a1 + v5 - 6) = *((_DWORD *)Src + v5 - 6);
UnwindUp5_0:
        *((_DWORD *)a1 + v5 - 5) = *((_DWORD *)Src + v5 - 5);
UnwindUp4_0:
        *((_DWORD *)a1 + v5 - 4) = *((_DWORD *)Src + v5 - 4);
UnwindUp3_0:
        *((_DWORD *)a1 + v5 - 3) = *((_DWORD *)Src + v5 - 3);
UnwindUp2_0:
        *((_DWORD *)a1 + v5 - 2) = *((_DWORD *)Src + v5 - 2);
UnwindUp1_0:
        *((_DWORD *)a1 + v5 - 1) = *((_DWORD *)Src + v5 - 1);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
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
        qmemcpy(a1, Src, 4 * v5);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
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

// Address: 0x100091C5
void __tzset()
{
  if ( dword_10014928 == 0 )
  {
    _lock(11);
    if ( dword_10014928 == 0 )
    {
      _tzset_lk();
      ++dword_10014928;
    }
    _unlock(11);
  }
}

// Address: 0x100091F3
void __cdecl _tzset()
{
  _lock(11);
  _tzset_lk();
  _unlock(11);
}

// Address: 0x10009209
void _tzset_lk()
{
  char *v0; // eax
  const char *v1; // esi
  size_t v2; // eax
  char *v3; // eax
  const char *v4; // esi
  int v5; // ecx
  char v6; // al
  int v7; // eax
  int v8; // [esp+10h] [ebp-8h]
  BOOL UsedDefaultChar; // [esp+14h] [ebp-4h] BYREF

  v8 = 0;
  _lock(12);
  dword_10013A68 = -1;
  dword_10013A58 = -1;
  dword_10014870 = 0;
  v0 = getenv("TZ");
  v1 = v0;
  if ( v0 == nullptr )
  {
    _unlock(12);
    if ( GetTimeZoneInformation(&TimeZoneInformation) == -1 )
      return;
    dword_100139C0 = 60 * TimeZoneInformation.Bias;
    dword_10014870 = 1;
    if ( TimeZoneInformation.StandardDate.wMonth != 0 )
      dword_100139C0 = 60 * TimeZoneInformation.StandardBias + 60 * TimeZoneInformation.Bias;
    if ( TimeZoneInformation.DaylightDate.wMonth != 0 && TimeZoneInformation.DaylightBias != 0 )
    {
      dword_100139C4 = 1;
      dword_100139C8 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
    }
    else
    {
      dword_100139C4 = 0;
      dword_100139C8 = 0;
    }
    if ( WideCharToMultiByte(
           dword_1001467C,
           0x220u,
           TimeZoneInformation.StandardName,
           -1,
           Destination,
           63,
           nullptr,
           &UsedDefaultChar) == 0
      || UsedDefaultChar )
    {
      *Destination = 0;
    }
    else
    {
      Destination[63] = 0;
    }
    if ( WideCharToMultiByte(
           dword_1001467C,
           0x220u,
           TimeZoneInformation.DaylightName,
           -1,
           off_10013A50,
           63,
           nullptr,
           &UsedDefaultChar) != 0
      && !UsedDefaultChar )
    {
      off_10013A50[63] = 0;
      return;
    }
LABEL_41:
    *off_10013A50 = 0;
    return;
  }
  if ( *v0 != 0 && (dword_10014924 == nullptr || strcmp(v0, dword_10014924) != 0) )
  {
    sub_100034D5(dword_10014924);
    v2 = strlen(v1);
    v3 = (char *)malloc(v2 + 1);
    dword_10014924 = v3;
    if ( v3 != nullptr )
    {
      strcpy(v3, v1);
      _unlock(12);
      strncpy(Destination, v1, 3u);
      v4 = v1 + 3;
      Destination[3] = 0;
      if ( *v4 == 45 )
      {
        v8 = 1;
        ++v4;
      }
      v5 = 3600 * atol(v4);
      dword_100139C0 = v5;
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 != 43 && (v6 < 48 || v6 > 57) )
          break;
        ++v4;
      }
      if ( *v4 == 58 )
      {
        v5 = 60 * atol(++v4) + dword_100139C0;
        dword_100139C0 = v5;
        while ( *v4 >= 48 && *v4 <= 57 )
          ++v4;
        if ( *v4 == 58 )
        {
          v5 = atol(++v4) + dword_100139C0;
          dword_100139C0 = v5;
          while ( *v4 >= 48 && *v4 <= 57 )
            ++v4;
        }
      }
      if ( v8 != 0 )
        dword_100139C0 = -v5;
      v7 = *v4;
      dword_100139C4 = v7;
      if ( v7 != 0 )
      {
        strncpy(off_10013A50, v4, 3u);
        off_10013A50[3] = 0;
        return;
      }
      goto LABEL_41;
    }
  }
  _unlock(12);
}

// Address: 0x100094B1
BOOL __cdecl _isindst_0(_DWORD *a1)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  if ( dword_100139C4 == 0 )
    return false;
  v2 = a1[5];
  if ( v2 != dword_10013A58 || v2 != dword_10013A68 )
  {
    if ( dword_10014870 != 0 )
    {
      if ( TimeZoneInformation.DaylightDate.wYear != 0 )
        cvtdate(
          1,
          0,
          v2,
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
          1,
          1,
          v2,
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
          0,
          0,
          a1[5],
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
          0,
          1,
          a1[5],
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
      cvtdate(1, 1, v2, 4, 1, 0, 0, 2, 0, 0, 0);
      cvtdate(0, 1, a1[5], 10, 5, 0, 0, 2, 0, 0, 0);
    }
  }
  v3 = a1[7];
  if ( dword_10013A5C < dword_10013A6C )
  {
    if ( v3 >= dword_10013A5C && v3 <= dword_10013A6C )
    {
      if ( v3 > dword_10013A5C && v3 < dword_10013A6C )
        return true;
      goto LABEL_24;
    }
    return false;
  }
  if ( v3 < dword_10013A6C || v3 > dword_10013A5C )
    return true;
  if ( v3 > dword_10013A6C && v3 < dword_10013A5C )
    return false;
LABEL_24:
  v4 = 1000 * (*a1 + 60 * (a1[1] + 60 * a1[2]));
  if ( v3 == dword_10013A5C )
    return v4 >= dword_10013A60;
  else
    return v4 < dword_10013A70;
}

// Address: 0x1000965D
int __cdecl cvtdate(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // esi
  int v17; // ecx
  int result; // eax
  int v19; // eax
  bool v20; // sf
  int v21; // ecx
  int v22; // [esp+18h] [ebp+10h]

  if ( a2 == 1 )
  {
    v22 = a3 & 3;
    if ( (a3 & 3) != 0 )
      v12 = dword_10013AB0[a4];
    else
      v12 = dword_10013A7C[a4];
    v13 = v12 + 1;
    v14 = (365 * a3 + ((a3 - 1) >> 2) + v12 + 1 - 25563) % 7;
    if ( v14 > a6 )
      v15 = a6 + 7 * a5 - v14 + v13;
    else
      v15 = v13 + a6 + 7 * a5 - v14 - 7;
    if ( a5 == 5 )
    {
      if ( v22 != 0 )
        v16 = dword_10013AB4[a4];
      else
        v16 = dword_10013A80[a4];
      if ( v15 > v16 )
        v15 -= 7;
    }
  }
  else
  {
    if ( (a3 & 3) != 0 )
      v17 = dword_10013AB0[a4];
    else
      v17 = dword_10013A7C[a4];
    v15 = a7 + v17;
  }
  if ( a1 == 1 )
  {
    dword_10013A5C = v15;
    dword_10013A58 = a3;
    result = a11 + 1000 * (a10 + 60 * (a9 + 60 * a8));
    dword_10013A60 = result;
    return result;
  }
  dword_10013A6C = v15;
  v19 = 1000 * (a10 + dword_100139C8 + 60 * (a9 + 60 * a8));
  v20 = a11 + v19 < 0;
  result = a11 + v19;
  dword_10013A70 = result;
  if ( v20 )
  {
    result += 86400000;
    v21 = v15 - 1;
    dword_10013A70 = result;
LABEL_24:
    dword_10013A6C = v21;
    goto LABEL_25;
  }
  if ( result >= 86400000 )
  {
    result -= 86400000;
    v21 = v15 + 1;
    dword_10013A70 = result;
    goto LABEL_24;
  }
LABEL_25:
  dword_10013A68 = a3;
  return result;
}

// Address: 0x1000979D
int __cdecl __crtGetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData, UINT CodePage)
{
  int v5; // eax
  int LocaleInfoA; // eax
  int v8; // eax
  void *v9; // esp
  int v10; // [esp-4h] [ebp-34h]
  CHAR v11[16]; // [esp+0h] [ebp-30h] BYREF
  CHAR *v12; // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v5 = dword_1001492C;
  if ( dword_1001492C == 0 )
  {
    if ( GetLocaleInfoW(0, 1u, nullptr, 0) != 0 )
    {
      v10 = 1;
    }
    else
    {
      if ( GetLocaleInfoA(0, 1u, nullptr, 0) == 0 )
        return 0;
      v10 = 2;
    }
    v5 = v10;
    dword_1001492C = v10;
  }
  if ( v5 == 1 )
    return GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
  if ( v5 != 2 )
    return 0;
  if ( CodePage == 0 )
    CodePage = dword_1001467C;
  LocaleInfoA = GetLocaleInfoA(Locale, LCType, nullptr, 0);
  v13 = LocaleInfoA;
  if ( LocaleInfoA == 0 )
    return 0;
  v8 = LocaleInfoA + 3;
  LOBYTE(v8) = v8 & 0xFC;
  v9 = alloca(v8);
  ms_exc.old_esp = (DWORD)v11;
  v12 = v11;
  ms_exc.registration.TryLevel = -1;
  if ( v11 == nullptr || GetLocaleInfoA(Locale, LCType, v11, v13) == 0 )
    return 0;
  if ( cchData != 0 )
    return MultiByteToWideChar(CodePage, 1u, v11, -1, lpLCData, cchData);
  else
    return MultiByteToWideChar(CodePage, 1u, v11, -1, nullptr, 0);
}

// Address: 0x100098B0
int __cdecl __crtGetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData, UINT CodePage)
{
  int v5; // eax
  int LocaleInfoW; // eax
  int v8; // eax
  void *v9; // esp
  int v10; // [esp-4h] [ebp-34h]
  WCHAR v11[8]; // [esp+0h] [ebp-30h] BYREF
  WCHAR *v12; // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v5 = dword_10014930;
  if ( dword_10014930 == 0 )
  {
    if ( GetLocaleInfoW(0, 1u, nullptr, 0) != 0 )
    {
      v10 = 1;
    }
    else
    {
      if ( GetLocaleInfoA(0, 1u, nullptr, 0) == 0 )
        return 0;
      v10 = 2;
    }
    v5 = v10;
    dword_10014930 = v10;
  }
  if ( v5 == 2 )
    return GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
  if ( v5 != 1 )
    return 0;
  if ( CodePage == 0 )
    CodePage = dword_1001467C;
  LocaleInfoW = GetLocaleInfoW(Locale, LCType, nullptr, 0);
  v13 = LocaleInfoW;
  if ( LocaleInfoW == 0 )
    return 0;
  v8 = 2 * LocaleInfoW + 3;
  LOBYTE(v8) = v8 & 0xFC;
  v9 = alloca(v8);
  ms_exc.old_esp = (DWORD)v11;
  v12 = v11;
  ms_exc.registration.TryLevel = -1;
  if ( v11 == nullptr || GetLocaleInfoW(Locale, LCType, v11, v13) == 0 )
    return 0;
  if ( cchData != 0 )
    return WideCharToMultiByte(CodePage, 0x220u, v11, -1, lpLCData, cchData, nullptr, nullptr);
  else
    return WideCharToMultiByte(CodePage, 0x220u, v11, -1, nullptr, 0, nullptr, nullptr);
}

// Address: 0x100099D0
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

// Address: 0x10009A40
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

// Address: 0x10009AB5
int __cdecl _tolower(int C)
{
  return C + 32;
}

// Address: 0x10009ABD
int __cdecl tolower(int C)
{
  int v1; // ebx
  int result; // eax
  int Ca; // [esp+8h] [ebp+4h]

  v1 = 0;
  if ( dword_1001466C != 0 )
  {
    InterlockedIncrement(&Addend);
    if ( dword_10014DA0 != 0 )
    {
      InterlockedDecrement(&Addend);
      _lock(19);
      v1 = 1;
    }
    Ca = tolower_0(C);
    if ( v1 != 0 )
      _unlock(19);
    else
      InterlockedDecrement(&Addend);
    return Ca;
  }
  else
  {
    result = C;
    if ( C >= 65 && C <= 90 )
      return C + 32;
  }
  return result;
}

// Address: 0x10009B2C
int __cdecl tolower_0(int C)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  CHAR DestStr[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( dword_1001466C != 0 )
  {
    v2 = C;
    if ( (C >= 256
       || (dword_10010D54 <= 1 ? (v3 = *((_BYTE *)off_10010B48 + 2 * C) & 1) : (v3 = _isctype(C, 1)), v3 != 0))
      && (*((char *)off_10010B48 + 2 * BYTE1(v2) + 1) >= 0
        ? (LOWORD(C) = (unsigned __int8)v2, v4 = 1)
        : (LOBYTE(C) = BYTE1(v2), *(_WORD *)((char *)&C + 1) = (unsigned __int8)v2, v4 = 2),
          (v5 = __crtLCMapStringA(dword_1001466C, 0x100u, (LPCSTR)&C, v4, DestStr, 3, 0, 1)) != 0) )
    {
      if ( v5 == 1 )
        return (unsigned __int8)DestStr[0];
      else
        return *(unsigned __int16 *)DestStr;
    }
    else
    {
      return v2;
    }
  }
  else
  {
    result = C;
    if ( C >= 65 && C <= 90 )
      return C + 32;
  }
  return result;
}

// Address: 0x10009C00
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x10009C55
char *__cdecl getenv(const char *VarName)
{
  const char **v1; // esi
  size_t v2; // edi

  v1 = (const char **)dword_100146A8;
  if ( dword_10014D80 != 0 )
  {
    if ( dword_100146A8 != nullptr
      || dword_100146B0 != 0
      && __wtomb_environ() == 0
      && (v1 = (const char **)dword_100146A8, dword_100146A8 != nullptr) )
    {
      if ( VarName != nullptr )
      {
        v2 = strlen(VarName);
        while ( *v1 != nullptr )
        {
          if ( strlen(*v1) > v2
            && (*v1)[v2] == 61
            && _mbsnbicoll((const unsigned __int8 *)*v1, (const unsigned __int8 *)VarName, v2) == 0 )
          {
            return (char *)&(*v1)[v2 + 1];
          }
          ++v1;
        }
      }
    }
  }
  return nullptr;
}

// Address: 0x10009CD2
int __cdecl _mbsnbicoll(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount)
{
  int v4; // eax

  if ( MaxCount == 0 )
    return 0;
  v4 = __crtCompareStringA(dword_10014C24, 1u, (PCNZCH)Str1, MaxCount, (PCNZCH)Str2, MaxCount, CodePage);
  if ( v4 != 0 )
    return v4 - 2;
  else
    return 0x7FFFFFFF;
}

// Address: 0x10009D11
int __wtomb_environ()
{
  int v0; // esi
  const WCHAR *v1; // eax
  size_t v2; // eax
  int v3; // ebp
  CHAR *v4; // eax
  char *Str; // [esp+10h] [ebp-4h]

  v0 = dword_100146B0;
  v1 = *(const WCHAR **)dword_100146B0;
  if ( *(_DWORD *)dword_100146B0 == 0 )
    return 0;
  while ( 1 )
  {
    v2 = WideCharToMultiByte(1u, 0, v1, -1, nullptr, 0, nullptr, nullptr);
    v3 = v2;
    if ( v2 == 0 )
      break;
    v4 = (CHAR *)malloc(v2);
    Str = v4;
    if ( v4 == nullptr || WideCharToMultiByte(1u, 0, *(LPCWCH *)v0, -1, v4, v3, nullptr, nullptr) == 0 )
      break;
    __crtsetenv(Str, 0);
    v1 = *(const WCHAR **)(v0 + 4);
    v0 += 4;
    if ( v1 == nullptr )
      return 0;
  }
  return -1;
}

// Address: 0x10009D7F
int __cdecl __crtCompareStringA(
        LCID Locale,
        DWORD dwCmpFlags,
        PCNZCH lpString1,
        int cchCount1,
        PCNZCH lpString2,
        int cchCount2,
        UINT CodePage)
{
  int v7; // esi
  BYTE *LeadByte; // eax
  unsigned __int8 v10; // dl
  BYTE *i; // eax
  unsigned __int8 v12; // dl
  int v13; // eax
  int v14; // eax
  void *v15; // esp
  int v16; // eax
  int v17; // esi
  int v18; // eax
  void *v19; // esp
  WCHAR v21[8]; // [esp+0h] [ebp-4Ch] BYREF
  struct _cpinfo CPInfo; // [esp+10h] [ebp-3Ch] BYREF
  WCHAR *v23; // [esp+24h] [ebp-28h]
  LPWSTR lpWideCharStr; // [esp+28h] [ebp-24h]
  int v25; // [esp+2Ch] [ebp-20h]
  int cchWideChar; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  if ( dword_10014934 == 0 )
  {
    if ( CompareStringW(0, 0, &String2, 1, &String2, 1) != 0 )
    {
      dword_10014934 = 1;
    }
    else
    {
      if ( CompareStringA(0, 0, String1, 1, String1, 1) == 0 )
        return 0;
      dword_10014934 = 2;
    }
  }
  v7 = cchCount1;
  if ( cchCount1 > 0 )
    v7 = strncnt_0(lpString1, cchCount1);
  if ( cchCount2 > 0 )
    cchCount2 = strncnt_0(lpString2, cchCount2);
  if ( dword_10014934 == 2 )
    return CompareStringA(Locale, dwCmpFlags, lpString1, v7, lpString2, cchCount2);
  if ( dword_10014934 == 1 )
  {
    if ( CodePage == 0 )
      CodePage = dword_1001467C;
    if ( v7 == 0 || cchCount2 == 0 )
    {
      if ( v7 == cchCount2 )
        return 2;
      if ( cchCount2 > 1 )
        return 1;
      if ( v7 > 1 )
        return 3;
      if ( !GetCPInfo(CodePage, &CPInfo) )
        return 0;
      if ( v7 > 0 )
      {
        if ( CPInfo.MaxCharSize >= 2 )
        {
          LeadByte = CPInfo.LeadByte;
          if ( CPInfo.LeadByte[0] != 0 )
          {
            while ( 1 )
            {
              v10 = LeadByte[1];
              if ( v10 == 0 )
                break;
              if ( (unsigned int)*lpString1 >= *LeadByte && (unsigned int)*lpString1 <= v10 )
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
            v12 = i[1];
            if ( v12 == 0 )
              break;
            if ( (unsigned int)*lpString2 >= *i && (unsigned int)*lpString2 <= v12 )
              return 2;
          }
        }
        return 1;
      }
    }
    v13 = MultiByteToWideChar(CodePage, 9u, lpString1, v7, nullptr, 0);
    cchWideChar = v13;
    if ( v13 != 0 )
    {
      v14 = 2 * v13 + 3;
      LOBYTE(v14) = v14 & 0xFC;
      v15 = alloca(v14);
      ms_exc.old_esp = (DWORD)v21;
      lpWideCharStr = v21;
      ms_exc.registration.TryLevel = -1;
      if ( v21 != nullptr && MultiByteToWideChar(CodePage, 1u, lpString1, v7, lpWideCharStr, cchWideChar) != 0 )
      {
        v16 = MultiByteToWideChar(CodePage, 9u, lpString2, cchCount2, nullptr, 0);
        v17 = v16;
        v25 = v16;
        if ( v16 != 0 )
        {
          v18 = 2 * v16 + 3;
          LOBYTE(v18) = v18 & 0xFC;
          v19 = alloca(v18);
          ms_exc.old_esp = (DWORD)v21;
          v23 = v21;
          ms_exc.registration.TryLevel = -1;
          if ( v21 != nullptr && MultiByteToWideChar(CodePage, 1u, lpString2, cchCount2, v21, v17) != 0 )
            return CompareStringW(Locale, dwCmpFlags, lpWideCharStr, cchWideChar, v21, v17);
        }
      }
    }
  }
  return 0;
}

// Address: 0x10009FFC
_BYTE *__cdecl strncnt_0(_BYTE *a1, int a2)
{
  _BYTE *v2; // eax
  int v3; // ecx
  int v4; // esi

  v2 = a1;
  v3 = a2 - 1;
  if ( a2 != 0 )
  {
    do
    {
      if ( *v2 == 0 )
        break;
      ++v2;
      v4 = v3--;
    }
    while ( v4 != 0 );
  }
  if ( *v2 != 0 )
    return (_BYTE *)a2;
  else
    return (_BYTE *)(v2 - a1);
}

// Address: 0x1000A027
int __cdecl __crtsetenv(char *Str, int a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // esi
  void *v4; // eax
  BOOL v5; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // edi
  void *v13; // eax
  size_t v14; // eax
  char *v15; // eax
  CHAR *v16; // esi
  unsigned __int8 *v17; // eax
  void *v18; // [esp-4h] [ebp-18h]
  unsigned __int8 *v19; // [esp+Ch] [ebp-8h]
  void *lpMem; // [esp+10h] [ebp-4h]

  if ( Str == nullptr )
    return -1;
  v2 = _mbschr((const unsigned __int8 *)Str, 0x3Du);
  v3 = v2;
  v19 = v2;
  if ( v2 == nullptr || Str == (char *)v2 )
    return -1;
  v4 = dword_100146A8;
  v5 = v3[1] == 0;
  if ( dword_100146A8 == (LPVOID)dword_100146AC )
  {
    v4 = (void *)copy_environ(dword_100146A8);
    dword_100146A8 = v4;
  }
  if ( v4 == nullptr )
  {
    if ( a2 != 0 && dword_100146B0 != 0 )
    {
      if ( __wtomb_environ() != 0 )
        return -1;
    }
    else
    {
      if ( v5 )
        return 0;
      v7 = malloc(4u);
      dword_100146A8 = v7;
      if ( v7 == nullptr )
        return -1;
      *v7 = 0;
      if ( dword_100146B0 == 0 )
      {
        v8 = malloc(4u);
        dword_100146B0 = (int)v8;
        if ( v8 == nullptr )
          return -1;
        *v8 = 0;
      }
    }
  }
  v9 = dword_100146A8;
  lpMem = dword_100146A8;
  v10 = findenv((unsigned __int8 *)Str, v3 - (unsigned __int8 *)Str);
  v11 = v10;
  if ( v10 >= 0 && *v9 != 0 )
  {
    if ( !v5 )
    {
      v9[v10] = Str;
      goto LABEL_31;
    }
    v18 = (void *)v9[v10];
    v12 = &v9[v10];
    sub_100034D5(v18);
    while ( *v12 != 0 )
    {
      ++v11;
      *v12 = v12[1];
      ++v12;
    }
    v13 = (void *)sub_1000A26D(lpMem, 4 * v11);
    if ( v13 == nullptr )
    {
LABEL_31:
      if ( a2 != 0 )
      {
        v14 = strlen(Str);
        v15 = (char *)malloc(v14 + 2);
        v16 = v15;
        if ( v15 != nullptr )
        {
          strcpy(v15, Str);
          v17 = &v19[v16 - Str];
          *v17 = 0;
          SetEnvironmentVariableA(v16, !v5 ? (LPCSTR)v17 + 1 : nullptr);
          sub_100034D5(v16);
        }
      }
      return 0;
    }
LABEL_30:
    dword_100146A8 = v13;
    goto LABEL_31;
  }
  if ( !v5 )
  {
    if ( v10 < 0 )
      v11 = -v10;
    v13 = (void *)sub_1000A26D(v9, 4 * v11 + 8);
    if ( v13 == nullptr )
      return -1;
    *((_DWORD *)v13 + v11) = Str;
    *((_DWORD *)v13 + v11 + 1) = 0;
    goto LABEL_30;
  }
  return 0;
}

// Address: 0x1000A1AE
int __cdecl findenv(unsigned __int8 *Str1, size_t MaxCount)
{
  char *v2; // esi
  const unsigned __int8 *v3; // eax
  char v4; // al

  v2 = (char *)dword_100146A8;
  v3 = *(const unsigned __int8 **)dword_100146A8;
  if ( *(_DWORD *)dword_100146A8 == 0 )
    return -((v2 - (_BYTE *)dword_100146A8) >> 2);
  while ( 1 )
  {
    if ( _mbsnbicoll(Str1, v3, MaxCount) == 0 )
    {
      v4 = *(_BYTE *)(*(_DWORD *)v2 + MaxCount);
      if ( v4 == 61 || v4 == 0 )
        break;
    }
    v3 = *((const unsigned __int8 **)v2 + 1);
    v2 += 4;
    if ( v3 == nullptr )
      return -((v2 - (_BYTE *)dword_100146A8) >> 2);
  }
  return (v2 - (_BYTE *)dword_100146A8) >> 2;
}

// Address: 0x1000A206
_DWORD *__cdecl copy_environ(_DWORD *a1)
{
  int v1; // ecx
  int *v3; // eax
  int v4; // edx
  _DWORD *v5; // esi
  _DWORD *v6; // ebp
  const char *v7; // eax
  const char **v8; // ebx

  v1 = 0;
  if ( a1 == nullptr )
    return nullptr;
  v3 = a1 + 1;
  if ( *a1 != 0 )
  {
    do
    {
      v4 = *v3;
      ++v1;
      ++v3;
    }
    while ( v4 != 0 );
  }
  v5 = malloc(4 * v1 + 4);
  v6 = v5;
  if ( v5 == nullptr )
    _amsg_exit(9u);
  v7 = (const char *)*a1;
  v8 = (const char **)a1;
  while ( v7 != nullptr )
  {
    ++v8;
    *v5 = _strdup(v7);
    v7 = *v8;
    ++v5;
  }
  *v5 = 0;
  return v6;
}

// Address: 0x1000A26D
void *__cdecl sub_1000A26D(LPVOID lpMem, SIZE_T dwBytes)
{
  void *v2; // ebx
  void *result; // eax
  unsigned int v4; // esi
  char *block; // eax
  size_t v6; // eax
  size_t v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // edi
  size_t v10; // eax
  size_t v11; // eax
  int v12; // [esp+Ch] [ebp-38h] BYREF
  size_t v13; // [esp+10h] [ebp-34h]
  _BYTE *v14; // [esp+14h] [ebp-30h]
  _DWORD *v15; // [esp+18h] [ebp-2Ch] BYREF
  char *v16; // [esp+1Ch] [ebp-28h]
  void *v17; // [esp+20h] [ebp-24h]
  size_t v18; // [esp+24h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v2 = lpMem;
  if ( lpMem == nullptr )
    return malloc(dwBytes);
  v4 = dwBytes;
  if ( dwBytes != 0 )
  {
    if ( dword_10014C38 == 3 )
    {
      while ( 1 )
      {
        v17 = nullptr;
        if ( v4 <= 0xFFFFFFE0 )
        {
          _lock(9);
          ms_exc.registration.TryLevel = 0;
          block = __sbh_find_block((int)lpMem);
          v16 = block;
          if ( block != nullptr )
          {
            if ( v4 <= dword_10014978 )
            {
              if ( __sbh_resize_block(block, (int)lpMem, v4) != 0 )
              {
                v17 = lpMem;
              }
              else
              {
                v17 = __sbh_alloc_block(v4);
                if ( v17 != nullptr )
                {
                  v6 = *((_DWORD *)lpMem - 1) - 1;
                  v18 = v6;
                  if ( v6 >= v4 )
                    v6 = v4;
                  memcpy(v17, lpMem, v6);
                  v16 = __sbh_find_block((int)lpMem);
                  sub_10006205(v16, (int)lpMem);
                }
              }
            }
            if ( v17 == nullptr )
            {
              if ( v4 == 0 )
                v4 = 1;
              v4 = (v4 + 15) & 0xFFFFFFF0;
              v17 = HeapAlloc(hHeap, 0, v4);
              if ( v17 != nullptr )
              {
                v7 = *((_DWORD *)lpMem - 1) - 1;
                v18 = v7;
                if ( v7 >= v4 )
                  v7 = v4;
                memcpy(v17, lpMem, v7);
                sub_10006205(v16, (int)lpMem);
              }
            }
          }
          ms_exc.registration.TryLevel = -1;
          _unlock(9);
          if ( v16 == nullptr )
          {
            if ( v4 == 0 )
              v4 = 1;
            v4 = (v4 + 15) & 0xFFFFFFF0;
            v17 = HeapReAlloc(hHeap, 0, lpMem, v4);
          }
        }
        result = v17;
        if ( v17 != nullptr || dword_10014854 == 0 )
          break;
        if ( _callnewh(v4) == 0 )
          return nullptr;
      }
    }
    else if ( dword_10014C38 == 2 )
    {
      if ( dwBytes <= 0xFFFFFFE0 )
        v4 = (dwBytes + 15) & 0xFFFFFFF0;
      while ( 1 )
      {
        v17 = nullptr;
        if ( v4 <= 0xFFFFFFE0 )
        {
          _lock(9);
          ms_exc.registration.TryLevel = 1;
          v8 = (_BYTE *)sub_10007357((unsigned int)v2, &v12, (unsigned int *)&v15);
          v9 = v8;
          v14 = v8;
          if ( v8 != nullptr )
          {
            if ( v4 < dword_10013754 )
            {
              if ( sub_1000771F(v12, v15, v8, v4 >> 4) != 0 )
              {
                v17 = lpMem;
              }
              else
              {
                v17 = sub_100073F3(v4 >> 4);
                if ( v17 != nullptr )
                {
                  v10 = 16 * (unsigned __int8)*v9;
                  v13 = v10;
                  if ( v10 >= v4 )
                    v10 = v4;
                  memcpy(v17, lpMem, v10);
                  sub_100073AE(v12, (int)v15, v9);
                }
              }
              v2 = lpMem;
            }
            if ( v17 == nullptr )
            {
              v17 = HeapAlloc(hHeap, 0, v4);
              if ( v17 != nullptr )
              {
                v11 = 16 * (unsigned __int8)*v9;
                v13 = v11;
                if ( v11 >= v4 )
                  v11 = v4;
                memcpy(v17, v2, v11);
                sub_100073AE(v12, (int)v15, v9);
              }
            }
          }
          else
          {
            v17 = HeapReAlloc(hHeap, 0, v2, v4);
          }
          ms_exc.registration.TryLevel = -1;
          _unlock(9);
        }
        result = v17;
        if ( v17 != nullptr || dword_10014854 == 0 )
          break;
        if ( _callnewh(v4) == 0 )
          return nullptr;
      }
    }
    else
    {
      while ( 1 )
      {
        result = nullptr;
        if ( v4 <= 0xFFFFFFE0 )
        {
          if ( v4 == 0 )
            v4 = 1;
          v4 = (v4 + 15) & 0xFFFFFFF0;
          result = HeapReAlloc(hHeap, 0, lpMem, v4);
        }
        if ( result != nullptr || dword_10014854 == 0 )
          break;
        if ( _callnewh(v4) == 0 )
          return nullptr;
      }
    }
  }
  else
  {
    sub_100034D5(lpMem);
    return nullptr;
  }
  return result;
}

// Address: 0x1000A59C
unsigned __int8 *__cdecl _mbschr(const unsigned __int8 *Str, unsigned int C)
{
  const unsigned __int8 *i; // esi
  unsigned __int16 v4; // bx
  unsigned __int8 v5; // al

  if ( dword_10014A0C == 0 )
    return (unsigned __int8 *)strchr((const char *)Str, C);
  _lock(25);
  for ( i = Str; ; ++i )
  {
    v4 = *i;
    if ( *i == 0 )
      break;
    if ( (byte_10014B21[(unsigned __int8)v4] & 4) != 0 )
    {
      v5 = *++i;
      if ( v5 == 0 )
      {
        _unlock(25);
        return nullptr;
      }
      if ( C == (v5 | (v4 << 8)) )
      {
        _unlock(25);
        return (unsigned __int8 *)(i - 1);
      }
    }
    else if ( C == *i )
    {
      break;
    }
  }
  _unlock(25);
  return v4 == C ? (unsigned __int8 *)i : nullptr;
}

// Address: 0x1000A633
char *__cdecl _strdup(const char *Source)
{
  size_t v1; // eax
  char *v2; // eax

  if ( Source != nullptr && (v1 = strlen(Source), (v2 = (char *)malloc(v1 + 1)) != nullptr) )
    return strcpy(v2, Source);
  else
    return nullptr;
}

// Address: 0x1000A65E
// attributes: thunk
LONG __stdcall InterlockedDecrement(volatile LONG *lpAddend)
{
  return __imp_InterlockedDecrement(lpAddend);
}

// Address: 0x1000A664
// attributes: thunk
LONG __stdcall InterlockedIncrement(volatile LONG *lpAddend)
{
  return __imp_InterlockedIncrement(lpAddend);
}

// Address: 0x1000A66A
// attributes: thunk
LPSTR __stdcall GetCommandLineA()
{
  return __imp_GetCommandLineA();
}

// Address: 0x1000A670
// attributes: thunk
DWORD __stdcall GetVersion()
{
  return __imp_GetVersion();
}

// Address: 0x1000A676
// attributes: thunk
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_InitializeCriticalSection(lpCriticalSection);
}

// Address: 0x1000A67C
// attributes: thunk
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_DeleteCriticalSection(lpCriticalSection);
}

// Address: 0x1000A682
// attributes: thunk
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_EnterCriticalSection(lpCriticalSection);
}

// Address: 0x1000A688
// attributes: thunk
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_LeaveCriticalSection(lpCriticalSection);
}

// Address: 0x1000A68E
// attributes: thunk
void __stdcall __noreturn ExitProcess(UINT uExitCode)
{
  __imp_ExitProcess(uExitCode);
}

// Address: 0x1000A694
// attributes: thunk
void __stdcall __noreturn FatalAppExitA(UINT uAction, LPCSTR lpMessageText)
{
  __imp_FatalAppExitA(uAction, lpMessageText);
}

// Address: 0x1000A69A
// attributes: thunk
void __stdcall Sleep(DWORD dwMilliseconds)
{
  __imp_Sleep(dwMilliseconds);
}

// Address: 0x1000A6A0
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

// Address: 0x1000A6A6
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

// Address: 0x1000A6AC
// attributes: thunk
int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest)
{
  return __imp_LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}

// Address: 0x1000A6B2
// attributes: thunk
int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
{
  return __imp_LCMapStringW(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}

// Address: 0x1000A6B8
// attributes: thunk
BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
{
  return __imp_TerminateProcess(hProcess, uExitCode);
}

// Address: 0x1000A6BE
// attributes: thunk
HANDLE __stdcall GetCurrentProcess()
{
  return __imp_GetCurrentProcess();
}

// Address: 0x1000A6C4
// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}

// Address: 0x1000A6CA
// attributes: thunk
BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  return __imp_TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x1000A6D0
// attributes: thunk
DWORD __stdcall TlsAlloc()
{
  return __imp_TlsAlloc();
}

// Address: 0x1000A6D6
// attributes: thunk
BOOL __stdcall TlsFree(DWORD dwTlsIndex)
{
  return __imp_TlsFree(dwTlsIndex);
}

// Address: 0x1000A6DC
// attributes: thunk
void __stdcall SetLastError(DWORD dwErrCode)
{
  __imp_SetLastError(dwErrCode);
}

// Address: 0x1000A6E2
// attributes: thunk
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
{
  return __imp_TlsGetValue(dwTlsIndex);
}

// Address: 0x1000A6E8
// attributes: thunk
DWORD __stdcall GetLastError()
{
  return __imp_GetLastError();
}

// Address: 0x1000A6EE
// attributes: thunk
HANDLE __stdcall GetCurrentThread_0()
{
  return GetCurrentThread();
}

// Address: 0x1000A6F4
// attributes: thunk
UINT __stdcall SetHandleCount(UINT uNumber)
{
  return __imp_SetHandleCount(uNumber);
}

// Address: 0x1000A6FA
// attributes: thunk
HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
{
  return __imp_GetStdHandle(nStdHandle);
}

// Address: 0x1000A700
// attributes: thunk
DWORD __stdcall GetFileType(HANDLE hFile)
{
  return __imp_GetFileType(hFile);
}

// Address: 0x1000A706
// attributes: thunk
void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)
{
  __imp_GetStartupInfoA(lpStartupInfo);
}

// Address: 0x1000A70C
// attributes: thunk
DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
{
  return __imp_GetModuleFileNameA(hModule, lpFilename, nSize);
}

// Address: 0x1000A712
// attributes: thunk
BOOL __stdcall FreeEnvironmentStringsA(LPCH penv)
{
  return __imp_FreeEnvironmentStringsA(penv);
}

// Address: 0x1000A718
// attributes: thunk
BOOL __stdcall FreeEnvironmentStringsW(LPWCH penv)
{
  return __imp_FreeEnvironmentStringsW(penv);
}

// Address: 0x1000A71E
// attributes: thunk
LPCH __stdcall GetEnvironmentStrings()
{
  return __imp_GetEnvironmentStrings();
}

// Address: 0x1000A724
// attributes: thunk
LPWCH __stdcall GetEnvironmentStringsW()
{
  return __imp_GetEnvironmentStringsW();
}

// Address: 0x1000A72A
// attributes: thunk
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
{
  return __imp_GetModuleHandleA(lpModuleName);
}

// Address: 0x1000A730
// attributes: thunk
DWORD __stdcall GetEnvironmentVariableA(LPCSTR lpName, LPSTR lpBuffer, DWORD nSize)
{
  return __imp_GetEnvironmentVariableA(lpName, lpBuffer, nSize);
}

// Address: 0x1000A736
// attributes: thunk
BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)
{
  return __imp_GetVersionExA(lpVersionInformation);
}

// Address: 0x1000A73C
// attributes: thunk
BOOL __stdcall HeapDestroy(HANDLE hHeap)
{
  return __imp_HeapDestroy(hHeap);
}

// Address: 0x1000A742
// attributes: thunk
HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize)
{
  return __imp_HeapCreate(flOptions, dwInitialSize, dwMaximumSize);
}

// Address: 0x1000A748
// attributes: thunk
BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType)
{
  return __imp_VirtualFree(lpAddress, dwSize, dwFreeType);
}

// Address: 0x1000A74E
// attributes: thunk
BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
{
  return __imp_HeapFree(hHeap, dwFlags, lpMem);
}

// Address: 0x1000A754
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

// Address: 0x1000A75A
// attributes: thunk
LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
{
  return __imp_HeapAlloc(hHeap, dwFlags, dwBytes);
}

// Address: 0x1000A760
// attributes: thunk
BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo)
{
  return __imp_GetCPInfo(CodePage, lpCPInfo);
}

// Address: 0x1000A766
// attributes: thunk
BOOL __stdcall IsValidLocale(LCID Locale, DWORD dwFlags)
{
  return __imp_IsValidLocale(Locale, dwFlags);
}

// Address: 0x1000A76C
// attributes: thunk
BOOL __stdcall IsValidCodePage(UINT CodePage)
{
  return __imp_IsValidCodePage(CodePage);
}

// Address: 0x1000A772
// attributes: thunk
int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
  return __imp_GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
}

// Address: 0x1000A778
// attributes: thunk
BOOL __stdcall EnumSystemLocalesA(LOCALE_ENUMPROCA lpLocaleEnumProc, DWORD dwFlags)
{
  return __imp_EnumSystemLocalesA(lpLocaleEnumProc, dwFlags);
}

// Address: 0x1000A77E
// attributes: thunk
LCID __stdcall GetUserDefaultLCID()
{
  return __imp_GetUserDefaultLCID();
}

// Address: 0x1000A784
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x1000A78A
// attributes: thunk
BOOL __stdcall GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
{
  return __imp_GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

// Address: 0x1000A790
// attributes: thunk
BOOL __stdcall GetStringTypeW(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)
{
  return __imp_GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

// Address: 0x1000A796
// attributes: thunk
LONG __stdcall UnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return __imp_UnhandledExceptionFilter(ExceptionInfo);
}

// Address: 0x1000A79C
// attributes: thunk
UINT __stdcall GetACP()
{
  return __imp_GetACP();
}

// Address: 0x1000A7A2
// attributes: thunk
UINT __stdcall GetOEMCP()
{
  return __imp_GetOEMCP();
}

// Address: 0x1000A7A8
// attributes: thunk
LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect)
{
  return __imp_VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
}

// Address: 0x1000A7AE
// attributes: thunk
LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
{
  return __imp_HeapReAlloc(hHeap, dwFlags, lpMem, dwBytes);
}

// Address: 0x1000A7B4
// attributes: thunk
BOOL __stdcall IsBadWritePtr(LPVOID lp, UINT_PTR ucb)
{
  return __imp_IsBadWritePtr(lp, ucb);
}

// Address: 0x1000A7BA
// attributes: thunk
FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
{
  return __imp_GetProcAddress(hModule, lpProcName);
}

// Address: 0x1000A7C0
// attributes: thunk
HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
{
  return __imp_LoadLibraryA(lpLibFileName);
}

// Address: 0x1000A7C6
// attributes: thunk
DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)
{
  return __imp_GetTimeZoneInformation(lpTimeZoneInformation);
}

// Address: 0x1000A7CC
// attributes: thunk
int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  return __imp_GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
}

// Address: 0x1000A7D2
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

// Address: 0x1000A7D8
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

// Address: 0x1000A7DE
// attributes: thunk
BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue)
{
  return __imp_SetEnvironmentVariableA(lpName, lpValue);
}

