// Decompiled from System.dll (ClassM_3.0.500\ClassM_x64_unpacked\$PLUGINSDIR\System.dll)

// Address: 0x10001000
int __cdecl Alloc(int a1, SIZE_T a2, int a3, int a4)
{
  cchWideChar = a2;
  dword_10004060 = a4;
  return sub_1000101B(1);
}

// Address: 0x1000101B
int __cdecl sub_1000101B(int a1)
{
  int v1; // eax
  HGLOBAL v3; // [esp-4h] [ebp-4h]

  v1 = sub_100014BB();
  if ( v1 == 0 )
    return sub_100014E2(0);
  v3 = GlobalAlloc(0x40u, a1 * v1);
  return sub_100014E2(v3);
}

// Address: 0x1000103D
int __cdecl StrAlloc(int a1, SIZE_T a2, int a3, int a4)
{
  cchWideChar = a2;
  dword_10004060 = a4;
  return sub_1000101B(1);
}

// Address: 0x10001058
_BYTE *__cdecl Copy(int a1, SIZE_T a2, int a3, int a4)
{
  SIZE_T v4; // edi
  _BYTE *result; // eax
  void *v6; // esi
  int v7; // eax
  HGLOBAL v8; // ebx
  void *v9; // eax
  void *v10; // [esp+14h] [ebp+Ch]

  cchWideChar = a2;
  dword_10004060 = a4;
  v4 = 0;
  result = (_BYTE *)sub_1000123B();
  v6 = result;
  if ( result != nullptr )
  {
    if ( *result == 47 )
    {
      v4 = sub_100012FE(result + 1);
      v7 = sub_100014BB();
    }
    else
    {
      v7 = sub_100012FE(result);
    }
    v8 = (HGLOBAL)v7;
    v9 = (void *)sub_100014BB();
    v10 = v9;
    if ( v4 == 0 )
      v4 = GlobalSize(v9);
    if ( v8 == nullptr )
    {
      v8 = GlobalAlloc(0x40u, v4);
      sub_100014E2(v8);
    }
    sub_10001508(v8, v10, v4);
    return GlobalFree(v6);
  }
  return result;
}

// Address: 0x100010E0
HGLOBAL __cdecl Store(int a1, HGLOBAL hMem, int a3, int a4, int a5)
{
  SIZE_T v5; // ebx
  _BYTE *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // edi
  const CHAR *v13; // eax
  void *v14; // eax
  int v15; // eax
  const CHAR *v16; // eax
  void *v18; // edi
  int v19; // eax
  _BYTE *hMema; // [esp+14h] [ebp+Ch]

  cchWideChar = (SIZE_T)hMem;
  dword_10004060 = a4;
  dword_10004064 = a3;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_10004038, sub_10001556);
  v5 = 20 * cchWideChar;
  hMema = (_BYTE *)sub_1000123B();
  v6 = hMema;
  while ( *v6 != 0 )
  {
    v7 = (char)*v6++;
    if ( v7 > 108 )
    {
      v19 = v7 - 112;
      if ( v19 == 0 )
        goto LABEL_12;
      v10 = v19 - 2;
      if ( v10 != 0 )
      {
LABEL_7:
        if ( v10 == 1 )
        {
          v11 = GlobalAlloc(0x40u, v5 + 4);
          *v11 = ::hMem;
          ::hMem = v11;
          sub_10001508(v11 + 1, dword_10004064, v5);
        }
        continue;
      }
    }
    else
    {
      if ( v7 == 108 || (v8 = v7 - 76) == 0 )
      {
        if ( ::hMem != nullptr )
        {
          sub_10001508(dword_10004064, (char *)::hMem + 4, v5);
          v18 = *(void **)::hMem;
          GlobalFree(::hMem);
          ::hMem = v18;
        }
        continue;
      }
      v9 = v8 - 4;
      if ( v9 == 0 )
      {
        *v6 += 10;
LABEL_12:
        v15 = (char)*v6++ - 48;
        v16 = (const CHAR *)sub_100012AD(v15);
        v14 = (void *)sub_10001266(v16);
        goto LABEL_13;
      }
      v10 = v9 - 2;
      if ( v10 != 0 )
        goto LABEL_7;
      *v6 += 10;
    }
    v12 = (char)*v6++ - 48;
    v13 = (const CHAR *)sub_1000123B();
    v14 = (void *)sub_100012D1(v12, v13);
LABEL_13:
    GlobalFree(v14);
  }
  return GlobalFree(hMema);
}

// Address: 0x10001215
HGLOBAL sub_10001215()
{
  return GlobalAlloc(0x40u, cchWideChar);
}

// Address: 0x10001224
LPSTR __cdecl sub_10001224(LPCSTR lpString2)
{
  CHAR *v1; // eax
  int v3; // [esp-4h] [ebp-4h]

  v3 = cchWideChar;
  v1 = (CHAR *)sub_10001215();
  return lstrcpynA(v1, lpString2, v3);
}

// Address: 0x1000123B
_DWORD *sub_1000123B()
{
  _DWORD *result; // eax
  char *v1; // ecx
  char v2; // dl

  if ( dword_10004060 == 0 )
    return nullptr;
  result = *(_DWORD **)dword_10004060;
  if ( *(_DWORD *)dword_10004060 == 0 )
    return nullptr;
  *(_DWORD *)dword_10004060 = *result;
  v1 = (char *)(result + 1);
  do
  {
    v2 = *v1;
    *(v1 - 4) = *v1;
    ++v1;
  }
  while ( v2 != 0 );
  return result;
}

// Address: 0x10001266
LPCSTR __cdecl sub_10001266(LPCSTR lpString2)
{
  CHAR *v1; // esi

  if ( dword_10004060 != 0 )
  {
    v1 = (CHAR *)GlobalAlloc(0x40u, cchWideChar + 8);
    lstrcpynA(v1 + 4, lpString2, cchWideChar);
    *(_DWORD *)v1 = *(_DWORD *)dword_10004060;
    *(_DWORD *)dword_10004060 = v1;
  }
  return lpString2;
}

// Address: 0x100012AD
LPSTR __cdecl sub_100012AD(unsigned int a1)
{
  if ( a1 < 0x19 )
    return sub_10001224((LPCSTR)(dword_10004064 + a1 * cchWideChar));
  else
    return (LPSTR)sub_10001215();
}

// Address: 0x100012D1
LPCSTR __cdecl sub_100012D1(unsigned int a1, LPCSTR lpString2)
{
  if ( lpString2 != nullptr && a1 < 0x19 )
    lstrcpyA((LPSTR)(dword_10004064 + a1 * cchWideChar), lpString2);
  return lpString2;
}

// Address: 0x100012FE
int __cdecl sub_100012FE(_BYTE *a1)
{
  _BYTE *i; // esi
  __int64 v2; // rcx
  int v3; // ebp
  char v5; // dl
  char v6; // cl
  int v7; // edi
  int v8; // edi
  __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  int v11; // eax
  __int64 v12; // rax
  int v13; // edi
  int v14; // [esp+10h] [ebp+4h]

  i = a1;
  HIDWORD(v2) = 0;
  v3 = 0;
  if ( a1 == nullptr )
    return 0;
  v5 = *a1;
  if ( *a1 != 48 )
    goto LABEL_24;
  v6 = a1[1];
  if ( v6 == 120 || v6 == 88 )
  {
    i = a1 + 1;
    while ( 1 )
    {
      v7 = (char)*++i;
      if ( v7 < 48 || v7 > 57 )
      {
        if ( v7 < 97 || v7 > 102 )
        {
          if ( v7 < 65 || v7 > 70 )
            goto LABEL_31;
          v8 = v7 - 55;
        }
        else
        {
          v8 = v7 - 87;
        }
      }
      else
      {
        v8 = v7 - 48;
      }
      v9 = sub_10002D00(v3, HIDWORD(v2), 16, 0);
      v2 = v8 + v9;
      v3 = v8 + v9;
    }
  }
  if ( v6 <= 55 && v6 >= 48 )
  {
    for ( i = a1 + 1; ; ++i )
    {
      v11 = (char)*i;
      if ( v11 < 48 || v11 > 55 )
        break;
      v10 = sub_10002D00(v3, HIDWORD(v2), 8, 0) + v11 - 48;
      HIDWORD(v2) = HIDWORD(v10);
      v3 = v10;
    }
  }
  else
  {
LABEL_24:
    v14 = 0;
    if ( v5 == 45 )
      v14 = 1;
    else
      --i;
    while ( 1 )
    {
      v13 = (char)*++i - 48;
      if ( (unsigned int)v13 >= 0xA )
        break;
      v12 = sub_10002D00(v3, HIDWORD(v2), 10, 0);
      v2 = v13 + v12;
      v3 = v13 + v12;
    }
    if ( v14 != 0 )
      v3 = -v3;
  }
LABEL_31:
  if ( *i == 124 )
    return sub_100012FE(i + 1) | v3;
  return v3;
}

// Address: 0x10001429
_BYTE *__cdecl sub_10001429(__int64 a1, _BYTE *a2)
{
  unsigned __int64 v2; // rdi
  _BYTE *v3; // ebx
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  __int64 v6; // rax
  _BYTE *v7; // ecx
  _BYTE v9[128]; // [esp+Ch] [ebp-80h] BYREF

  v2 = __PAIR64__(a1, HIDWORD(a1));
  v3 = v9;
  if ( a1 < 0 )
  {
    v4 = a2++;
    HIDWORD(v2) = -(int)a1;
    *v4 = 45;
    LODWORD(v2) = (unsigned __int64)-a1 >> 32;
  }
  if ( v2 != 0 )
  {
    if ( (v2 & 0x80000000) == 0LL && ((int)v2 > 0 || HIDWORD(v2) != 0) )
    {
      do
      {
        *v3++ = sub_10002DF0(HIDWORD(v2), v2, 10, 0) + 48;
        v6 = sub_10002D40(HIDWORD(v2), v2, 10, 0);
        v2 = __PAIR64__(v6, HIDWORD(v6));
      }
      while ( v6 > 0 );
      while ( v3 > v9 )
      {
        v7 = a2;
        --v3;
        ++a2;
        *v7 = *v3;
      }
    }
  }
  else
  {
    v5 = a2++;
    *v5 = 48;
  }
  *a2 = 0;
  return a2;
}

// Address: 0x100014BB
int sub_100014BB()
{
  _BYTE *v0; // eax
  void *v1; // esi
  int v3; // edi

  v0 = sub_1000123B();
  v1 = v0;
  if ( v0 == nullptr )
    return -1;
  v3 = sub_100012FE(v0);
  GlobalFree(v1);
  return v3;
}

// Address: 0x100014E2
LPCSTR __cdecl sub_100014E2(int a1)
{
  CHAR String2[52]; // [esp+0h] [ebp-34h] BYREF

  wsprintfA(String2, "%d", a1);
  return sub_10001266(String2);
}

// Address: 0x10001508
_BYTE *__cdecl sub_10001508(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // edx
  int i; // esi

  v3 = a1;
  if ( a2 != 0 && a1 != nullptr )
  {
    for ( i = a3; i != 0; --i )
    {
      *v3 = v3[a2 - (_DWORD)a1];
      ++v3;
    }
  }
  return a1;
}

// Address: 0x10001534
_BYTE *__cdecl sub_10001534(HGLOBAL hMem)
{
  _BYTE *v1; // eax
  SIZE_T v3; // [esp-4h] [ebp-4h]

  v3 = GlobalSize(hMem);
  v1 = GlobalAlloc(0x40u, v3);
  return sub_10001508(v1, (int)hMem, v3);
}

// Address: 0x10001556
int sub_10001556()
{
  return 0;
}

// Address: 0x10001559
int __cdecl sub_10001559(int a1)
{
  CHAR *v1; // eax

  v1 = (CHAR *)sub_10001215();
  return sub_1000156B(a1, v1);
}

// Address: 0x1000156B
LPSTR __cdecl sub_1000156B(int a1, LPSTR lpString1)
{
  int v2; // ecx
  int v3; // ecx
  const CHAR *v4; // eax

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == 1 )
  {
    v3 = *(_DWORD *)(a1 + 5272);
    if ( (*(_BYTE *)(a1 + 2065) & 1) != 0 )
      v3 = *(_DWORD *)(*(_DWORD *)(a1 + 2060) + 1);
    wsprintfA(lpString1, "callback%d", v3);
  }
  else
  {
    v4 = String2;
    if ( v2 == 0 )
      v4 = aOk;
    lstrcpyA(lpString1, v4);
  }
  return lpString1;
}

// Address: 0x100015C2
FARPROC __cdecl sub_100015C2(HMODULE hModule, LPCSTR lpProcName)
{
  return GetProcAddress(hModule, lpProcName);
}

// Address: 0x100015D1
HGLOBAL __cdecl Free(int a1, SIZE_T a2, int a3, int a4)
{
  void *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx

  cchWideChar = a2;
  dword_10004060 = a4;
  v4 = (void *)sub_100014BB();
  v5 = lpAddress;
  if ( lpAddress != nullptr )
  {
    v6 = nullptr;
    while ( *(void **)((char *)v5 + 1) != v4 )
    {
      v6 = v5;
      v5 = (_DWORD *)v5[3];
      if ( v5 == nullptr )
        return GlobalFree(v4);
    }
    if ( v6 != nullptr )
      v6[3] = v5[3];
    else
      lpAddress = (LPVOID)v5[3];
    --dword_10004040;
    VirtualFree(v5, 0, 0x8000u);
  }
  return GlobalFree(v4);
}

// Address: 0x10001638
LPCSTR __cdecl Get(int a1, SIZE_T a2, int a3, int a4, int a5)
{
  int v5; // eax
  _BYTE *v6; // esi
  LPCSTR result; // eax
  const CHAR *v8; // eax
  CHAR *v9; // eax
  const CHAR *v10; // eax
  CHAR *v11; // eax

  cchWideChar = a2;
  dword_10004060 = a4;
  dword_10004064 = a3;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_10004038, sub_10001556);
  v5 = sub_10001A98(0);
  v6 = (_BYTE *)v5;
  if ( v5 == 0 )
    return sub_10001266(String2);
  if ( (*(_BYTE *)(v5 + 2064) & 4) != 0 )
  {
    sub_100014E2(v5);
    v8 = (const CHAR *)sub_10001559((int)v6);
    v9 = (CHAR *)sub_10001266(v8);
    return (LPCSTR)GlobalFree(v9);
  }
  else if ( *(_DWORD *)(v5 + 4) != 0 )
  {
    v10 = (const CHAR *)sub_10001559(v5);
    v11 = (CHAR *)sub_10001266(v10);
    result = (LPCSTR)GlobalFree(v11);
    if ( (v6[2064] & 2) == 0 )
      return (LPCSTR)GlobalFree(v6);
  }
  else
  {
    return sub_100014E2(v5);
  }
  return result;
}

// Address: 0x100016DB
_DWORD *__cdecl Call(int a1, SIZE_T a2, int a3, int a4, int a5)
{
  _DWORD *result; // eax
  _DWORD *v6; // ebx
  int v7; // ecx
  int v8; // eax
  const CHAR *v9; // eax
  CHAR *v10; // eax
  LPSTR v11; // eax
  _DWORD String1[21]; // [esp+4h] [ebp-54h] BYREF

  cchWideChar = a2;
  dword_10004060 = a4;
  dword_10004064 = a3;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_10004038, sub_10001556);
  result = (_DWORD *)sub_10001A98(1);
  v6 = result;
  if ( result == nullptr )
    return result;
  if ( result[1] != 1 )
    sub_1000226F(result);
  sub_100022B1(v6);
  v7 = v6[1];
  if ( v7 != -1 )
  {
    if ( *v6 != 0 )
    {
      switch ( *v6 )
      {
        case 1:
LABEL_9:
          v8 = sub_100029F8(v6);
LABEL_13:
          v6 = (_DWORD *)v8;
          break;
        case 2:
          sub_10002672(v6);
          break;
        case 3:
          goto LABEL_9;
        default:
          break;
      }
    }
    else if ( v7 == 1 )
    {
      v8 = sub_10002C83(v6);
      goto LABEL_13;
    }
  }
  if ( (v6[516] & 4) != 0 )
  {
    sub_10002498(v6);
    v9 = (const CHAR *)sub_10001559((int)v6);
    v10 = (CHAR *)sub_10001266(v9);
    result = GlobalFree(v10);
  }
  else if ( v6[1] != 0 )
  {
    qmemcpy(&String1[13], v6 + 518, 0x20u);
    v11 = sub_1000156B((int)v6, (LPSTR)String1);
    v6[525] = 0;
    v6[520] = v11;
    v6[518] = 3;
    result = (_DWORD *)sub_10002498(v6);
    qmemcpy(v6 + 518, &String1[13], 32);
  }
  else
  {
    result = (_DWORD *)sub_10002498(v6);
  }
  if ( v6[1] != 1 )
  {
    result = (_DWORD *)sub_1000245E(v6);
    if ( (v6[516] & 0x40) != 0 && *v6 == 1 )
    {
      result = (_DWORD *)v6[514];
      if ( result != nullptr )
        result = (_DWORD *)FreeLibrary((HMODULE)v6[514]);
    }
    if ( (v6[516] & 0x20) != 0 )
      result = sub_100014E2(dword_10004058);
  }
  if ( (v6[516] & 2) == 0 )
    return GlobalFree(v6);
  return result;
}

// Address: 0x10001837
HGLOBAL __cdecl Int64Op(int a1, HGLOBAL a2, int a3, HGLOBAL hMem)
{
  unsigned int v4; // ebx
  int v5; // edx
  unsigned __int64 v6; // rdi
  char *v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  CHAR String2[28]; // [esp+Ch] [ebp-30h] BYREF
  __int64 v23; // [esp+28h] [ebp-14h]
  int v24; // [esp+34h] [ebp-8h]
  HGLOBAL v25; // [esp+38h] [ebp-4h]
  char *v26; // [esp+48h] [ebp+Ch]
  _BYTE *hMema; // [esp+50h] [ebp+14h]

  cchWideChar = (SIZE_T)a2;
  v4 = 0;
  dword_10004060 = (int)hMem;
  v24 = 0;
  v25 = sub_1000123B();
  HIDWORD(v6) = sub_100012FE(v25);
  LODWORD(v6) = v5;
  v7 = (char *)sub_1000123B();
  v26 = v7;
  if ( *v7 != 126 && *v7 != 33 )
  {
    hMema = sub_1000123B();
    v4 = sub_100012FE(hMema);
    v24 = v8;
    GlobalFree(hMema);
    v7 = v26;
  }
  v9 = *v7;
  if ( v9 <= 47 )
  {
    if ( v9 == 47 )
      goto LABEL_22;
    v10 = v9 - 33;
    if ( v10 != 0 )
    {
      v11 = v10 - 4;
      if ( v11 != 0 )
      {
        v12 = v11 - 1;
        if ( v12 != 0 )
        {
          v13 = v12 - 4;
          if ( v13 != 0 )
          {
            v14 = v13 - 1;
            if ( v14 != 0 )
            {
              if ( v14 == 2 )
              {
                LODWORD(v6) = (__PAIR64__(v6, HIDWORD(v6)) - __PAIR64__(v24, v4)) >> 32;
                HIDWORD(v6) -= v4;
              }
            }
            else
            {
              LODWORD(v6) = (__PAIR64__(v24, v4) + __PAIR64__(v6, HIDWORD(v6))) >> 32;
              HIDWORD(v6) += v4;
            }
            goto LABEL_58;
          }
          v15 = sub_10002D00(HIDWORD(v6), v6, v4, v24);
LABEL_57:
          v6 = __PAIR64__(v15, HIDWORD(v15));
          goto LABEL_58;
        }
        if ( v7[1] != 38 )
        {
          HIDWORD(v6) &= v4;
          LODWORD(v6) = v24 & v6;
          goto LABEL_58;
        }
        if ( v6 != 0 && (v24 | v4) != 0 )
          goto LABEL_49;
LABEL_55:
        LODWORD(v15) = 0;
        goto LABEL_56;
      }
LABEL_22:
      if ( (v24 | v4) != 0 )
      {
        v23 = sub_10002D40(HIDWORD(v6), v6, v4, v24);
        LODWORD(v15) = sub_10002DF0(HIDWORD(v6), v6, v4, v24);
        v7 = v26;
      }
      else
      {
        v23 = 0;
        v15 = __PAIR64__(v6, HIDWORD(v6));
      }
      if ( *v7 == 47 )
      {
        v6 = __PAIR64__(v23, HIDWORD(v23));
        goto LABEL_58;
      }
      goto LABEL_57;
    }
    LODWORD(v15) = 0;
    if ( v6 != 0 )
    {
LABEL_56:
      v15 = (int)v15;
      goto LABEL_57;
    }
LABEL_49:
    LODWORD(v15) = 1;
    goto LABEL_56;
  }
  v16 = v9 - 60;
  if ( v16 == 0 )
  {
    if ( v7[1] == 60 )
    {
      LODWORD(v15) = sub_10002EB0(v4, v6);
      goto LABEL_57;
    }
    if ( (int)v6 > v24 || (int)v6 >= v24 && HIDWORD(v6) >= v4 )
      goto LABEL_55;
    goto LABEL_49;
  }
  v17 = v16 - 1;
  if ( v17 == 0 )
  {
    if ( v6 != __PAIR64__(v4, v24) )
      goto LABEL_55;
    goto LABEL_49;
  }
  v18 = v17 - 1;
  if ( v18 == 0 )
  {
    if ( v7[1] == 62 )
    {
      if ( v7[2] == 62 )
        LODWORD(v15) = sub_10002F00(v4, v6);
      else
        LODWORD(v15) = sub_10002ED0(v4, v6);
      goto LABEL_57;
    }
    if ( (int)v6 < v24 || (int)v6 <= v24 && HIDWORD(v6) <= v4 )
      goto LABEL_55;
    goto LABEL_49;
  }
  v19 = v18 - 32;
  if ( v19 == 0 )
  {
    HIDWORD(v6) ^= v4;
    LODWORD(v6) = v24 ^ v6;
    goto LABEL_58;
  }
  v20 = v19 - 30;
  if ( v20 == 0 )
  {
    if ( v7[1] != 124 )
    {
      HIDWORD(v6) |= v4;
      LODWORD(v6) = v24 | v6;
      goto LABEL_58;
    }
    if ( v6 == 0 && (v24 | v4) == 0 )
      goto LABEL_55;
    goto LABEL_49;
  }
  if ( v20 == 2 )
    v6 = ~v6;
LABEL_58:
  sub_10001429(__SPAIR64__(v6, HIDWORD(v6)), String2);
  sub_10001266(String2);
  GlobalFree(v25);
  return GlobalFree(v26);
}

// Address: 0x10001A36
int __cdecl sub_10001A36(char **a1)
{
  char *v1; // esi
  char *i; // edx
  char v3; // cl
  _BYTE v5[128]; // [esp+4h] [ebp-80h] BYREF

  v1 = v5;
  for ( i = ++*a1; ; *a1 = i )
  {
    v3 = *i;
    if ( (*i < 97 || v3 > 102)
      && (v3 < 65 || v3 > 70)
      && (v3 < 48 || v3 > 57)
      && v3 != 88
      && v3 != 45
      && v3 != 120
      && v3 != 124 )
    {
      break;
    }
    *v1++ = v3;
    ++i;
  }
  *v1 = 0;
  --*a1;
  return sub_100012FE(v5);
}

// Address: 0x10001A98
char *sub_10001A98()
{
  char *v0; // esi
  char *v1; // edi
  char v2; // dl
  int v3; // ecx
  int v4; // eax
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int *v11; // edi
  int v12; // edi
  FARPROC v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  char *v21; // edi
  bool v22; // sf
  HGLOBAL *v23; // edi
  int v24; // eax
  __int64 v25; // rax
  CHAR *v26; // eax
  char *j; // edi
  char v28; // cl
  char *v29; // eax
  char *v30; // eax
  int v31; // eax
  bool v32; // zf
  HMODULE ModuleHandleA; // eax
  HMODULE LibraryA; // eax
  _BYTE *v35; // edi
  FARPROC v36; // eax
  int v37; // eax
  int v39; // [esp-4h] [ebp-44h]
  int v40; // [esp-4h] [ebp-44h]
  int v41; // [esp-4h] [ebp-44h]
  int v42; // [esp+Ch] [ebp-34h]
  char *hMem; // [esp+10h] [ebp-30h]
  int v44; // [esp+14h] [ebp-2Ch]
  CHAR *lpString2; // [esp+18h] [ebp-28h]
  int v46; // [esp+1Ch] [ebp-24h]
  int v47; // [esp+20h] [ebp-20h]
  int v48; // [esp+24h] [ebp-1Ch]
  CHAR *v49; // [esp+28h] [ebp-18h]
  CHAR *v50; // [esp+2Ch] [ebp-14h]
  int v51; // [esp+30h] [ebp-10h]
  int v52; // [esp+34h] [ebp-Ch]
  char *i; // [esp+38h] [ebp-8h] BYREF
  int v54; // [esp+3Ch] [ebp-4h]

  v48 = 0;
  v47 = 0;
  v52 = 0;
  v54 = 0;
  v46 = 0;
  v0 = nullptr;
  v44 = 0;
  v50 = (CHAR *)sub_10001215();
  v49 = v50;
  lpString2 = (CHAR *)sub_10001215();
  v1 = (char *)sub_1000123B();
  hMem = v1;
  for ( i = v1; ; v1 = i )
  {
    v42 = v48;
    if ( v48 != 0 && v0 == nullptr )
      break;
    v2 = *v1;
    v3 = *v1;
    if ( *v1 != 0 )
    {
      switch ( *v1 )
      {
        case '#':
          if ( v1 > hMem && *(v1 - 1) == 58 && v48 == 0 )
          {
LABEL_39:
            if ( v48 != 0 )
            {
              if ( v48 != 1 )
              {
                if ( v48 != 2 )
                {
                  if ( v3 > 110 )
                  {
                    v14 = v3 - 114;
                    if ( v14 != 0 )
                    {
                      v15 = v14 - 1;
                      if ( v15 != 0 )
                      {
                        if ( v15 != 2 )
                          goto LABEL_52;
                        v39 = 64;
                      }
                      else
                      {
                        v39 = 16;
                      }
                    }
                    else
                    {
                      v39 = 4;
                    }
                  }
                  else
                  {
                    if ( v3 != 110 )
                    {
                      v7 = v3 - 33;
                      if ( v7 == 0 )
                      {
                        v54 = -v54;
                        goto LABEL_52;
                      }
                      v8 = v7 - 17;
                      if ( v8 != 0 )
                      {
                        v9 = v8 - 49;
                        if ( v9 != 0 )
                        {
                          if ( v9 == 2 )
                          {
                            v39 = 32;
                            goto LABEL_69;
                          }
LABEL_52:
                          v1 = i;
                          v49 = v50;
LABEL_53:
                          i = v1 + 1;
                          goto LABEL_54;
                        }
                        v10 = 1;
                      }
                      else
                      {
                        v10 = 256;
                      }
LABEL_70:
                      if ( v54 == 1 )
                        *((_DWORD *)v0 + 516) |= v10;
                      else
                        *((_DWORD *)v0 + 516) &= ~v10;
                      v54 = 1;
                      goto LABEL_52;
                    }
                    v39 = 8;
                  }
LABEL_69:
                  v10 = v39;
                  goto LABEL_70;
                }
                v52 = 0;
              }
              v16 = 0;
              v17 = 0;
              switch ( *v1 )
              {
                case '"':
                case '\'':
                case '`':
                  v26 = v50;
                  for ( j = i; ; *v26++ = *j )
                  {
                    i = ++j;
                    v28 = *j;
                    if ( *j == v2 && j[1] != v2 )
                      break;
                    if ( v28 == 0 )
                      break;
                    if ( v28 == v2 )
                      ++j;
                  }
                  *v26 = 0;
                  v16 = (int)sub_10001224(v50);
                  goto LABEL_91;
                case '&':
                  v54 = 1;
                  goto LABEL_52;
                case '*':
                  v54 = -1;
                  goto LABEL_52;
                case ',':
                  v54 = 0;
                  v51 = 0;
                  ++v52;
                  goto LABEL_79;
                case '-':
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                  if ( v51 != 0 )
                    goto LABEL_52;
                  --i;
                  v16 = (int)sub_10001215();
                  LODWORD(v25) = sub_10001A36(&i);
                  sub_10001429(v25, (_BYTE *)v16);
                  goto LABEL_91;
                case '.':
                  goto LABEL_98;
                case '@':
                  v40 = 7;
                  goto LABEL_116;
                case 'A':
                case 'a':
                  v41 = 25;
                  goto LABEL_136;
                case 'B':
                  v17 = 1;
                  goto LABEL_100;
                case 'C':
                case 'c':
                  v41 = 21;
                  goto LABEL_136;
                case 'D':
                case 'd':
                  v41 = 22;
                  goto LABEL_136;
                case 'E':
                case 'e':
                  v41 = 24;
                  goto LABEL_136;
                case 'G':
                  v17 = 1;
                  goto LABEL_111;
                case 'H':
                  v17 = 1;
                  goto LABEL_102;
                case 'I':
                case 'P':
                  v17 = 1;
                  goto LABEL_104;
                case 'K':
                  v17 = 1;
                  goto LABEL_115;
                case 'L':
                  v17 = 1;
                  goto LABEL_106;
                case 'M':
                case 'm':
                  v40 = 3;
                  goto LABEL_116;
                case 'O':
                case 'o':
                  v41 = 23;
LABEL_136:
                  v16 = v41;
                  goto LABEL_92;
                case 'R':
                  v24 = sub_10001A36(&i);
                  v16 = v24 + 1;
                  if ( v24 + 1 < 11 )
                    v16 = v24 + 11;
                  goto LABEL_91;
                case 'S':
                case 's':
                  v16 = -1;
                  goto LABEL_92;
                case 'T':
                  v17 = 0;
                  goto LABEL_109;
                case 'V':
                case 'v':
                  v19 = 0;
                  goto LABEL_85;
                case 'W':
                  v17 = 1;
                  goto LABEL_113;
                case '_':
                  v18 = *((_DWORD *)v0 + 517);
                  if ( v18 > v52 )
                    v52 = *((_DWORD *)v0 + 517);
                  v54 = 0;
                  v51 = 0;
                  if ( v18 != (v47 == 3) )
LABEL_79:
                    v46 = 1;
                  goto LABEL_52;
                case 'b':
LABEL_100:
                  v54 = 2;
                  v19 = 1;
                  goto LABEL_85;
                case 'g':
LABEL_111:
                  v40 = 5;
                  goto LABEL_116;
                case 'h':
LABEL_102:
                  v54 = 3;
                  v19 = 1;
                  goto LABEL_85;
                case 'i':
                case 'p':
LABEL_104:
                  v19 = 1;
                  goto LABEL_85;
                case 'k':
LABEL_115:
                  v40 = 6;
                  goto LABEL_116;
                case 'l':
LABEL_106:
                  v40 = 2;
                  goto LABEL_116;
                case 'r':
                  v16 = sub_10001A36(&i) + 1;
                  goto LABEL_91;
                case 't':
LABEL_109:
                  ++v44;
                  v19 = 3;
                  goto LABEL_85;
                case 'w':
LABEL_113:
                  v40 = 4;
LABEL_116:
                  v19 = v40;
LABEL_85:
                  v20 = dword_1000305C[v19];
                  v46 = 1;
                  v21 = &v0[32 * v52];
                  v22 = v54 < 0;
                  *((_DWORD *)v21 + 518) = v19 | (v17 != 0 ? 0x8000 : 0);
                  if ( v22 || v20 <= 0 )
                    v20 = 1;
                  v32 = v54 == 1;
                  *((_DWORD *)v21 + 522) = v20;
                  if ( v32 )
                    v54 = sub_10001A36(&i) + 1;
                  *((_DWORD *)v21 + 519) = v54;
                  *(_DWORD *)&v0[32 * v52 + 2080] = 0;
                  *((_DWORD *)v21 + 524) = 0;
                  *((_DWORD *)v21 + 523) = 0;
LABEL_91:
                  if ( v16 != 0 )
                  {
LABEL_92:
                    v46 = 1;
                    if ( v51 == 0 )
                    {
                      v23 = (HGLOBAL *)&v0[32 * v52 + 2096];
                      if ( (unsigned int)*v23 >= 0x1A )
                        GlobalFree(*v23);
                      *v23 = (HGLOBAL)v16;
                    }
                    if ( v51 == 1 )
                      *(_DWORD *)&v0[32 * v52 + 2092] = v16;
LABEL_98:
                    ++v51;
                  }
                  break;
                default:
                  goto LABEL_52;
              }
              goto LABEL_52;
            }
            if ( v2 == 42 )
            {
              v47 = 2;
              goto LABEL_52;
            }
            if ( v2 != 45 )
            {
              if ( v2 == 58 )
                goto LABEL_143;
LABEL_150:
              v30 = v49++;
              *v30 = v2;
              goto LABEL_53;
            }
            v29 = v1 + 1;
            if ( v1[1] == 62 )
            {
              v47 = 3;
            }
            else
            {
LABEL_143:
              v29 = v1 + 1;
              if ( v1[1] != 58 || v2 == 45 )
                goto LABEL_150;
              v47 = 1;
            }
            i = v29;
            if ( v49 <= v50 )
            {
              *lpString2 = 0;
            }
            else
            {
              *v49 = 0;
              lstrcpyA(lpString2, v50);
            }
            goto LABEL_52;
          }
          v48 = 0;
          v47 = 0;
          break;
        case '(':
          v48 = 1;
          v54 = 0;
          v51 = 0;
          v52 = (v47 == 3) + 1;
          v46 = 0;
          break;
        case ')':
          v48 = 2;
          v54 = 0;
          v51 = 0;
          break;
        case '?':
          v48 = 3;
          v54 = 1;
          break;
        default:
          goto LABEL_39;
      }
    }
    else
    {
      v48 = -1;
    }
    if ( v42 != 0 )
    {
      if ( v42 == 1 )
      {
        v4 = v52;
        if ( v46 == 0 )
          v4 = v52 - 1;
        *((_DWORD *)v0 + 517) = v4;
      }
    }
    else
    {
      *v49 = 0;
      if ( v0 == nullptr )
      {
        v0 = (char *)GlobalAlloc(0x40u, 0x14A4u);
        *((_DWORD *)v0 + 516) = 0;
        *((_DWORD *)v0 + 517) = 0;
      }
      *(_DWORD *)v0 = v47;
      v0[8] = 0;
      *((_DWORD *)v0 + 514) = 0;
      v0[1032] = 0;
      *((_DWORD *)v0 + 515) = 0;
      *((_DWORD *)v0 + 1) = 0;
      if ( v47 != 0 )
      {
        if ( v47 != 2 )
          lstrcpyA(v0 + 8, lpString2);
        lstrcpyA(v0 + 1032, v50);
      }
      else if ( v49 != v50 )
      {
        v5 = nullptr;
        GlobalFree(v0);
        v0 = (char *)sub_100012FE(v50);
        if ( v0 != nullptr )
        {
          while ( *((_DWORD *)v0 + 1320) != 0 )
          {
            v5 = v0;
            v0 = *((char **)v0 + 1320);
          }
          if ( v5 != nullptr )
            *((_DWORD *)v5 + 1320) = 0;
          v6 = *((_DWORD *)v0 + 516);
          if ( (v6 & 8) != 0 )
          {
            v0 = sub_10001534(v0);
            *((_DWORD *)v0 + 516) &= 0xFFFFFFF5;
          }
          else
          {
            LOBYTE(v6) = v6 | 2;
            *((_DWORD *)v0 + 516) = v6;
          }
        }
      }
    }
    ++i;
    v49 = v50;
LABEL_54:
    if ( v48 == -1 )
      break;
  }
  GlobalFree(hMem);
  GlobalFree(v50);
  GlobalFree(lpString2);
  if ( v0 == nullptr || *((_DWORD *)v0 + 515) != 0 )
    return v0;
  switch ( *(_DWORD *)v0 )
  {
    case 1:
      if ( v0[8] != 0 )
      {
        ModuleHandleA = GetModuleHandleA(v0 + 8);
        *((_DWORD *)v0 + 514) = ModuleHandleA;
        if ( ModuleHandleA == nullptr )
        {
          LibraryA = LoadLibraryA(v0 + 8);
          *((_DWORD *)v0 + 514) = LibraryA;
          if ( LibraryA == nullptr )
            goto LABEL_168;
        }
        v35 = v0 + 1032;
        v36 = sub_100015C2(*((HMODULE *)v0 + 514), v0 + 1032);
        *((_DWORD *)v0 + 515) = v36;
        if ( v36 == nullptr && *v35 == 35 )
        {
          v37 = sub_100012FE(v0 + 1033);
          if ( v37 != 0 && (v37 & 0xFFFF0000) == 0 )
            *((_DWORD *)v0 + 515) = GetProcAddress(*((HMODULE *)v0 + 514), (LPCSTR)(unsigned __int16)v37);
        }
        if ( v44 == 0 && *((_DWORD *)v0 + 515) != 0 )
          return v0;
        *(_WORD *)&v35[lstrlenA(v0 + 1032)] = 65;
        v13 = sub_100015C2(*((HMODULE *)v0 + 514), v0 + 1032);
        if ( v13 != nullptr )
        {
LABEL_153:
          *((_DWORD *)v0 + 515) = v13;
          return v0;
        }
        v32 = *((_DWORD *)v0 + 515) == 0;
      }
      else
      {
        v31 = sub_100012FE(v0 + 1032);
        *((_DWORD *)v0 + 515) = v31;
        v32 = v31 == 0;
      }
      if ( v32 )
        goto LABEL_168;
      return v0;
    case 2:
      if ( v0[1032] == 0 )
        return v0;
      v13 = (FARPROC)sub_100012FE(v0 + 1032);
      goto LABEL_153;
    case 3:
      v11 = (int *)sub_100012FE(v0 + 8);
      *((_DWORD *)v0 + 514) = v11;
      if ( v11 != nullptr )
      {
        *((_DWORD *)v0 + 531) = 0;
        *((_DWORD *)v0 + 532) = sub_10001224(v0 + 8);
        *((_DWORD *)v0 + 527) = 0;
        *((_DWORD *)v0 + 530) = 1;
        *((_DWORD *)v0 + 526) = 1;
        v12 = *v11;
        v13 = *(FARPROC *)(v12 + 4 * sub_100012FE(v0 + 1032));
        goto LABEL_153;
      }
LABEL_168:
      *((_DWORD *)v0 + 1) = -1;
      break;
    default:
      break;
  }
  return v0;
}

// Address: 0x1000226F
HGLOBAL __cdecl sub_1000226F(_DWORD *a1)
{
  HGLOBAL result; // eax
  _DWORD *v2; // esi
  int v3; // edi

  result = a1;
  v2 = a1 + 520;
  v3 = a1[517] + 1;
  do
  {
    if ( *v2 == 0 && (int)*(v2 - 1) < 0 )
    {
      result = GlobalAlloc(0x40u, 4 * dword_1000305C[*((unsigned __int8 *)v2 - 8)]);
      *v2 = result;
    }
    v2 += 8;
    --v3;
  }
  while ( v3 != 0 );
  return result;
}

// Address: 0x100022B1
HGLOBAL __cdecl sub_100022B1(int a1)
{
  int v1; // eax
  CHAR *v2; // ebx
  _DWORD *v3; // edi
  _DWORD *v4; // ebp
  int v5; // eax
  LPSTR v6; // eax
  int v7; // edx
  WCHAR *v8; // edi
  CLSID *v9; // eax
  int v10; // eax
  HGLOBAL result; // eax
  _BYTE *v12; // [esp-4h] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  v13 = *(_DWORD *)(a1 + 2068) > 0;
  while ( 1 )
  {
    v1 = *(_DWORD *)(32 * v13 + a1 + 2096);
    if ( v1 == 0 || v1 == 26 )
    {
      v1 = (int)sub_10001224(byte_10004034);
    }
    else if ( v1 == -1 )
    {
      v1 = (int)sub_1000123B();
    }
    else if ( v1 <= 0 || v1 > 25 )
    {
      *(_DWORD *)(32 * v13 + a1 + 2096) = 26;
    }
    else
    {
      v1 = (int)sub_100012AD(v1 - 1);
    }
    v2 = (CHAR *)v1;
    v3 = (_DWORD *)(32 * v13 + a1 + 2080);
    v4 = (_DWORD *)(*(int *)(32 * v13 + a1 + 2076) >= 0 ? 32 * v13 + a1 + 2080 : *v3);
    v5 = *(unsigned __int8 *)(32 * v13 + a1 + 2072);
    *(_DWORD *)(32 * v13 + a1 + 2100) = 0;
    v14 = v5;
    switch ( v5 )
    {
      case 0:
        *v3 = 0;
        break;
      case 1:
        v6 = (LPSTR)sub_100012FE(v2);
        goto LABEL_19;
      case 2:
        *v4 = sub_100012FE(v2);
        v4[1] = v7;
        break;
      case 3:
        v6 = sub_10001224(v2);
        *(_DWORD *)(32 * v13 + a1 + 2100) = v6;
LABEL_19:
        *v4 = v6;
        break;
      case 4:
      case 5:
        v8 = (WCHAR *)GlobalAlloc(0x40u, 2 * cchWideChar);
        MultiByteToWideChar(0, 0, v2, cchWideChar, v8, cchWideChar);
        if ( v14 == 5 )
        {
          v9 = (CLSID *)GlobalAlloc(0x40u, 0x10u);
          *(_DWORD *)(32 * v13 + a1 + 2100) = v9;
          *v4 = v9;
          CLSIDFromString(v8, v9);
          GlobalFree(v8);
        }
        else
        {
          *(_DWORD *)(32 * v13 + a1 + 2100) = v8;
          *v4 = v8;
        }
        break;
      case 6:
        if ( *v2 != 0 )
        {
          v10 = sub_100012FE(v2);
          *v3 = sub_10002606(v10);
        }
        break;
      case 7:
        v12 = (_BYTE *)(dword_10004064 + cchWideChar * (*(_DWORD *)(32 * v13 + a1 + 2096) - 1));
        *v3 = v12 + 12;
        sub_10001429((int)(v12 + 12), v12);
        break;
      default:
        break;
    }
    result = GlobalFree(v2);
    if ( v13 == 0 )
      return result;
    if ( v13 == *(_DWORD *)(a1 + 2068) )
      v13 = 0;
    else
      ++v13;
  }
}

// Address: 0x1000245E
char *__cdecl sub_1000245E(int a1)
{
  char *result; // eax
  HGLOBAL *v2; // esi
  char *v3; // edi

  result = *(char **)(a1 + 2068);
  if ( (int)result >= 0 )
  {
    v2 = (HGLOBAL *)(a1 + 32 * (_DWORD)(result + 65));
    v3 = result + 1;
    do
    {
      result = (char *)*v2;
      if ( *v2 != nullptr && (int)*(v2 - 1) < 0 )
      {
        result = (char *)GlobalFree(*v2);
        *v2 = nullptr;
      }
      v2 -= 8;
      --v3;
    }
    while ( v3 != nullptr );
  }
  return result;
}

// Address: 0x10002498
HGLOBAL __cdecl sub_10002498(_DWORD *a1)
{
  CHAR *v1; // edi
  __int64 *v2; // esi
  int v3; // ecx
  __int64 *v4; // eax
  LPCSTR v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v10; // [esp+10h] [ebp-58h]
  OLECHAR sz[40]; // [esp+18h] [ebp-50h] BYREF

  v1 = (CHAR *)sub_10001215();
  v10 = a1[517];
  v2 = (__int64 *)&a1[8 * v10 + 520];
  do
  {
    v3 = *((_DWORD *)v2 - 1);
    if ( v3 >= 0 )
      v4 = v2;
    else
      v4 = *(__int64 **)v2;
    switch ( *((_BYTE *)v2 - 8) )
    {
      case 0:
        *v1 = 0;
        break;
      case 1:
      case 7:
        v5 = *(LPCSTR *)v4;
        if ( v3 > 0 )
        {
          v6 = (v3 - 1) * dword_1000307C[*((unsigned __int8 *)v2 - 8)];
          v5 = (LPCSTR)(dword_1000309C[v6 < 4 ? v6 : 0] & (unsigned int)v5);
        }
        wsprintfA(v1, "%d", v5);
        break;
      case 2:
        sub_10001429(*v4, v1);
        break;
      case 3:
        lstrcpynA(v1, *(LPCSTR *)v4, cchWideChar);
        break;
      case 4:
        WideCharToMultiByte(0, 0, *(LPCWCH *)v4, cchWideChar, v1, cchWideChar - 1, nullptr, nullptr);
        v1[cchWideChar - 1] = 0;
        break;
      case 5:
        v7 = StringFromGUID2(*(const GUID *const *)v4, sz, 39);
        WideCharToMultiByte(0, 0, sz, v7, v1, cchWideChar, nullptr, nullptr);
        break;
      case 6:
        wsprintfA(v1, "%d", *(_DWORD *)v2);
        break;
      default:
        break;
    }
    if ( *((_DWORD *)v2 + 5) != 0 && (*a1 != 2 || *((int *)v2 - 1) > 0) )
      GlobalFree(*((HGLOBAL *)v2 + 5));
    v8 = *((_DWORD *)v2 + 3);
    if ( v8 != 0 )
    {
      if ( v8 == -1 )
      {
        sub_10001266(v1);
      }
      else if ( v8 > 0 )
      {
        sub_100012D1(v8 - 1, v1);
      }
    }
    --v10;
    v2 -= 4;
  }
  while ( v10 >= 0 );
  return GlobalFree(v1);
}

// Address: 0x10002606
int __cdecl sub_10002606(_DWORD *a1)
{
  int v1; // eax
  _DWORD *v2; // eax

  if ( a1[515] == 0 )
  {
    v1 = ++dword_10004040;
    a1[516] |= 2u;
    a1[1318] = v1;
    v2 = VirtualAlloc(nullptr, 0x10u, 0x1000u, 0x40u);
    a1[515] = v2;
    v2[3] = lpAddress;
    lpAddress = v2;
    *(_BYTE *)v2 = -72;
    v2 = (_DWORD *)((char *)v2 + 1);
    *v2++ = a1;
    *(_BYTE *)v2 = -23;
    *(_DWORD *)((char *)v2 + 1) = (char *)sub_10002BA3 - (char *)((char *)v2 + 1) - 4;
  }
  return a1[515];
}

// Address: 0x10002672
int __cdecl sub_10002672(int a1)
{
  int v1; // ebx
  int v2; // edi
  char *v3; // esi
  unsigned __int8 v4; // cl
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  void *v8; // eax
  int v9; // esi
  int v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // eax
  int result; // eax
  int v14; // [esp+Ch] [ebp-18h]
  int v15; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  int v17; // [esp+14h] [ebp-10h]
  int v18; // [esp+18h] [ebp-Ch]
  _BYTE *v19; // [esp+18h] [ebp-Ch]
  unsigned int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-8h]
  SIZE_T dwBytes; // [esp+20h] [ebp-4h]

  dwBytes = 0;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 2068);
  v14 = v2;
  v17 = *(_DWORD *)(a1 + 2064) & 0x100;
  if ( v2 != 0 )
  {
    v3 = (char *)(a1 + 2104);
    v18 = *(_DWORD *)(a1 + 2068);
    do
    {
      v4 = *v3;
      if ( *v3 == 5 && *((_DWORD *)v3 + 1) == 0 )
        *((_DWORD *)v3 + 1) = 17;
      v5 = *((_DWORD *)v3 + 1);
      if ( v5 > 0 )
        v6 = (v5 - 1) * dword_1000307C[v4];
      else
        v6 = 4 * *((_DWORD *)v3 + 4);
      if ( v17 != 0 && sub_1000288C(v3) != 0 && dwBytes % sub_1000288C(v3) != 0 )
      {
        v7 = sub_1000288C(v3) + dwBytes - 1;
        dwBytes = ~(sub_1000288C(v3) - 1) & v7;
        v1 = a1;
      }
      dwBytes += v6;
      v3 += 32;
      --v18;
    }
    while ( v18 != 0 );
    v2 = v14;
  }
  v8 = *(void **)(v1 + 2060);
  if ( v8 != nullptr )
  {
    if ( dwBytes == 0 )
      dwBytes = GlobalSize(v8);
  }
  else
  {
    *(_DWORD *)(v1 + 2060) = GlobalAlloc(0x40u, dwBytes);
  }
  v20 = *(_DWORD *)(v1 + 2060);
  if ( v2 != 0 )
  {
    v9 = v1 + 2112;
    v15 = v2;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 - 4);
      v16 = 0;
      if ( v10 <= 0 )
      {
        v11 = 4 * *(_DWORD *)(v9 + 8);
        goto LABEL_30;
      }
      v12 = *(unsigned __int8 *)(v9 - 8);
      v11 = (v10 - 1) * dword_1000307C[v12];
      if ( v12 == 1 )
        goto LABEL_29;
      if ( v12 == 2 )
        break;
      if ( v12 > 2 && v12 <= 5 )
      {
        v19 = *(_BYTE **)v9;
        goto LABEL_31;
      }
LABEL_41:
      v20 += v11;
      v9 += 32;
      if ( --v15 == 0 )
        goto LABEL_42;
    }
    *(_DWORD *)(v9 + 4) = 0;
    *(_DWORD *)v9 = dwBytes;
    v16 = 1;
LABEL_29:
    *(_DWORD *)v9 &= dword_1000309C[v11 < 4 ? v11 : 0];
LABEL_30:
    v19 = (_BYTE *)v9;
LABEL_31:
    if ( v19 != nullptr )
    {
      if ( v17 != 0 && sub_1000288C(v9 - 8) != 0 && v20 % sub_1000288C(v9 - 8) != 0 )
      {
        v21 = sub_1000288C(v9 - 8) + v20 - 1;
        v1 = a1;
        v20 = ~(sub_1000288C(v9 - 8) - 1) & v21;
      }
      if ( *(_DWORD *)(v9 + 16) != 0 || v16 != 0 )
        sub_10001508((_BYTE *)v20, (int)v19, v11);
      if ( *(_DWORD *)(v9 + 12) != 0 )
        sub_10001508(v19, v20, v11);
    }
    goto LABEL_41;
  }
LABEL_42:
  result = *(_DWORD *)(v1 + 2060);
  *(_DWORD *)(v1 + 2080) = result;
  return result;
}

// Address: 0x1000288C
int __cdecl sub_1000288C(unsigned __int8 *a1)
{
  int v1; // esi
  int v3; // ecx

  v1 = *a1;
  if ( (a1[1] & 0x80u) == 0 )
    return 0;
  if ( v1 == 3 || v1 == 4 )
    return dword_1000307C[v1];
  if ( v1 == 5 )
    return 16;
  v3 = *((_DWORD *)a1 + 1);
  if ( v3 > 0 )
    return (v3 - 1) * dword_1000307C[v1];
  else
    return 4 * *((_DWORD *)a1 + 4);
}

// Address: 0x100028E1
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  dword_10004038 = (int)hinstDLL;
  if ( fdwReason == 1 )
  {
    VirtualProtect(&byte_1000404C, 4u, 0x40u, &flOldProtect);
    byte_1000404C = -62;
    flOldProtect = 0;
    dword_10004044 = 0;
    dword_10004058 = 0;
    dword_10004048 = 0;
    dword_10004040 = 0;
    lpAddress = nullptr;
    byte_1000404E = 0;
  }
  return true;
}

// Address: 0x10002937
int sub_10002937()
{
  return 0x10000;
}

// Address: 0x1000293D
int __cdecl sub_1000293D(int a1)
{
  return *(_DWORD *)(a1 + 2064) & 0x10;
}

// Address: 0x1000294B
int __cdecl sub_1000294B(int a1)
{
  return *(_DWORD *)(a1 + 2064) & 1;
}

// Address: 0x10002959
int sub_10002959()
{
  return 2060;
}

// Address: 0x1000295F
int sub_1000295F()
{
  return 5280;
}

// Address: 0x10002965
int sub_10002965()
{
  return 5276;
}

// Address: 0x1000296B
int __cdecl sub_1000296B(int a1)
{
  return *(_DWORD *)(a1 + 2068);
}

// Address: 0x10002976
int sub_10002976()
{
  return 2072;
}

// Address: 0x1000297C
int sub_1000297C()
{
  return 32;
}

// Address: 0x10002980
int sub_10002980()
{
  return 16;
}

// Address: 0x10002984
int sub_10002984()
{
  return 8;
}

// Address: 0x10002988
int sub_10002988()
{
  return 12;
}

// Address: 0x1000298C
int __cdecl sub_1000298C(int a1)
{
  *(_BYTE *)(a1 + 2064) |= 0x80u;
  return a1;
}

// Address: 0x10002998
int __cdecl sub_10002998(int a1)
{
  *(_DWORD *)(a1 + 4) = 1;
  return a1;
}

// Address: 0x100029A4
int __stdcall sub_100029A4(int a1, int a2, int a3)
{
  if ( sub_100029E0(a1) != 0 )
    dword_10004058 = GetLastError();
  *(_DWORD *)(a1 + 2080) = a2;
  *(_DWORD *)(a1 + 2084) = a3;
  sub_100029EE(a1);
  return a1;
}

// Address: 0x100029E0
int __cdecl sub_100029E0(int a1)
{
  return *(_DWORD *)(a1 + 2064) & 0x20;
}

// Address: 0x100029EE
int __cdecl sub_100029EE(int a1)
{
  *(_DWORD *)(a1 + 4) = 0;
  return a1;
}

// Address: 0x100029F8
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_100029F8(int a1)
{
  void *v1; // esp
  int v2; // eax
  int v3; // ecx
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v16; // [esp-20h] [ebp-30h]
  int v17; // [esp-1Ch] [ebp-2Ch]
  int v18; // [esp-18h] [ebp-28h] BYREF
  int v19; // [esp-14h] [ebp-24h]
  _DWORD v20[3]; // [esp-10h] [ebp-20h] BYREF
  int v21; // [esp-4h] [ebp-14h]
  int v22; // [esp+0h] [ebp-10h]
  int v23; // [esp+4h] [ebp-Ch]
  int v24; // [esp+Ch] [ebp-4h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF
  int v26; // [esp+18h] [ebp+8h]

  if ( dword_10004040 != 0 && sub_1000293D(a1) == 0 )
  {
    v20[0] = &savedregs;
    dword_10004044 = (int)v20;
    if ( flOldProtect == 0 )
    {
      v1 = alloca(sub_10002937());
      flOldProtect = (DWORD)v20;
    }
  }
  v2 = sub_1000296B(a1);
  if ( v2 > 0 )
  {
    v19 = v2;
    v18 = a1 + sub_10002976();
    v24 = sub_1000297C();
    v3 = v19;
    v19 = v19 * v24 + v18;
    v18 = v3;
    v17 = sub_10002980();
    v16 = sub_10002984();
    v4 = sub_10002988();
    v5 = v18;
    v6 = v19;
    do
    {
      if ( *(_DWORD *)(v17 + v6) == 2 )
        v19 = *(_DWORD *)(v4 + v6);
      v18 = *(_DWORD *)(v16 + v6);
      v6 -= v24;
      --v5;
    }
    while ( v5 != 0 );
  }
  *(_DWORD *)(a1 + sub_1000295F()) = dword_10004048;
  dword_10004048 = a1;
  v7 = sub_10002959();
  qword_1000401C = ((__int64 (__cdecl *)(int, int, _DWORD))*(_DWORD *)(a1 + v7))(v18, v19, v20[0]);
  if ( dword_10004040 != 0 && sub_1000293D(dword_10004048) == 0 )
    flOldProtect = (DWORD)&v18;
  v26 = dword_10004048;
  v8 = sub_1000295F();
  dword_10004048 = *(_DWORD *)(v9 + v8);
  if ( sub_1000294B(v9) != 0 )
  {
    v10 = sub_1000296B(v23);
    if ( v10 > 0 )
    {
      v23 = v10;
      v22 = v24 + v26 + sub_10002976();
      v21 = sub_10002980();
      if ( dword_10004040 <= 0 || sub_1000293D(v26) != 0 )
      {
        v13 = v22;
        v14 = v23;
        do
        {
          v13 += v24;
          --v14;
        }
        while ( v14 != 0 );
      }
      else
      {
        v11 = v22;
        v12 = v23;
        do
        {
          flOldProtect += 4 * *(_DWORD *)(v21 + v11);
          v11 += v24;
          --v12;
        }
        while ( v12 != 0 );
      }
    }
  }
  if ( dword_10004048 == 0 )
    flOldProtect = 0;
  sub_100029A4(v26, qword_1000401C, SHIDWORD(qword_1000401C));
  return v26;
}

// Address: 0x10002BA3
int __usercall sub_10002BA3@<eax>(void *a1@<eax>, int a2)
{
  int v2; // edx
  char *v3; // ecx
  HGLOBAL *v4; // eax
  _BYTE *v5; // eax
  int v6; // eax
  int v7; // ebx
  char *v8; // eax
  int v9; // ecx
  int v11; // [esp-10h] [ebp-2Ch]
  int v12; // [esp-Ch] [ebp-28h]
  char *v13; // [esp-8h] [ebp-24h]
  int v14; // [esp-4h] [ebp-20h] BYREF
  int v15; // [esp+Ch] [ebp-10h]
  int v16; // [esp+10h] [ebp-Ch]
  int *v17; // [esp+14h] [ebp-8h]
  HGLOBAL hMem; // [esp+18h] [ebp-4h]

  v17 = &a2;
  hMem = a1;
  v2 = sub_1000295F();
  v3 = (char *)hMem;
  while ( 1 )
  {
    v4 = (HGLOBAL *)&v3[v2];
    if ( *(_DWORD *)&v3[v2] == 0 )
      break;
    v3 = (char *)*v4;
    hMem = *v4;
  }
  v14 = v2;
  v5 = sub_10001534(v3);
  *(_DWORD *)((char *)hMem + v14) = v5;
  hMem = v5;
  sub_1000298C((int)v5);
  v16 = 0;
  v6 = sub_1000296B((int)hMem);
  if ( v6 > 0 )
  {
    v14 = v6;
    v15 = sub_1000297C();
    v13 = (char *)hMem + sub_10002976() + v15;
    v12 = sub_10002980();
    v11 = sub_10002984();
    v7 = sub_10002988();
    v8 = v13;
    v9 = v14;
    do
    {
      v14 = v9;
      *(_DWORD *)&v8[v11] = *v17++;
      v16 += 4;
      if ( *(_DWORD *)&v8[v12] == 2 )
      {
        *(_DWORD *)&v8[v7] = *v17++;
        v16 += 4;
      }
      v8 += v15;
      v9 = v14 - 1;
    }
    while ( v14 != 1 );
  }
  *(_DWORD *)((char *)hMem + sub_10002965()) = v16;
  sub_10002998((int)hMem);
  flOldProtect = (DWORD)&v14;
  return v14;
}

// Address: 0x10002C83
int __cdecl sub_10002C83(_BYTE *hMem)
{
  int v2; // [esp-8h] [ebp-14h]
  char *v3; // [esp-4h] [ebp-10h] BYREF

  v3 = &hMem[sub_10002976()];
  v2 = sub_10002984();
  sub_10002988();
  v3 = *(char **)&v3[v2];
  if ( sub_1000294B((int)hMem) != 0 )
    byte_1000404D = 0;
  else
    byte_1000404D = hMem[sub_10002965()];
  dword_10004054 = (int (*)(void))&byte_1000404C;
  GlobalFree(hMem);
  dword_10004044 = (int)&v3;
  return dword_10004054();
}

// Address: 0x10002D00
unsigned __int64 __stdcall sub_10002D00(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x10002D40
int __stdcall sub_10002D40(unsigned __int64 a1, __int64 a2)
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

// Address: 0x10002DF0
unsigned __int64 __stdcall sub_10002DF0(unsigned __int64 a1, __int64 a2)
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

// Address: 0x10002EB0
int __usercall sub_10002EB0@<eax>(__int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
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

// Address: 0x10002ED0
int __usercall sub_10002ED0@<eax>(__int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
  {
    LODWORD(a1) = SHIDWORD(a1) >> 31;
  }
  else if ( a2 >= 0x20u )
  {
    LODWORD(a1) = SHIDWORD(a1) >> (a2 & 0x1F);
  }
  else
  {
    a1 >>= a2 & 0x1F;
  }
  return a1;
}

// Address: 0x10002F00
unsigned __int64 __usercall sub_10002F00@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}

// Address: 0x10002F20
void __usercall _alloca_probe(unsigned int a1@<eax>, char a2)
{
  char *i; // ecx

  for ( i = &a2; a1 >= 0x1000; a1 -= 4096 )
    i -= 4096;
  __asm { retn }
}

