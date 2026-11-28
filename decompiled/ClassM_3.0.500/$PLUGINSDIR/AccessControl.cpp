// Decompiled from AccessControl.dll (ClassM_3.0.500\ClassM_x64_unpacked\$PLUGINSDIR\AccessControl.dll)

// Address: 0x10001748
CHAR *__stdcall sub_10001748(LPCSTR a1, int a2)
{
  CHAR *result; // eax
  CHAR *v3; // esi

  result = (CHAR *)LocalAlloc(0x40u, uBytes);
  v3 = result;
  if ( result != nullptr )
  {
    wsprintfA(result, a1, a2);
    sub_10003283(v3);
    return (CHAR *)LocalFree(v3);
  }
  return result;
}

// Address: 0x10001780
FARPROC __stdcall sub_10001780(LPCSTR lpProcName)
{
  HMODULE LibraryA; // eax

  LibraryA = LoadLibraryA("ADVAPI32");
  return GetProcAddress(LibraryA, lpProcName);
}

// Address: 0x10001799
int __fastcall sub_10001799(int a1, int a2, int a3)
{
  int i; // eax
  char v4; // cl

  for ( i = 0; i < a3; ++i )
  {
    v4 = *(_BYTE *)(i + a2);
    if ( v4 == 0 )
      break;
    if ( v4 == 45 )
      return a2 + i;
  }
  return 0;
}

// Address: 0x100017BD
int __usercall sub_100017BD@<eax>(char *a1@<esi>)
{
  char v1; // cl
  int v2; // eax
  int v3; // edx
  char v4; // cl

  v1 = *a1;
  v2 = 0;
  v3 = 0;
  if ( *a1 < 48 || v1 > 57 )
  {
    if ( v1 < 65 || v1 > 70 )
    {
      if ( v1 >= 97 && v1 <= 102 )
        v2 = v1 - 87;
    }
    else
    {
      v2 = v1 - 55;
    }
  }
  else
  {
    v2 = v1 - 48;
  }
  v4 = a1[1];
  if ( v4 < 48 || v4 > 57 )
  {
    if ( v4 < 65 || v4 > 70 )
    {
      if ( v4 >= 97 && v4 <= 102 )
        v3 = v4 - 87;
    }
    else
    {
      v3 = v4 - 55;
    }
  }
  else
  {
    v3 = v4 - 48;
  }
  return v3 + 16 * v2;
}

// Address: 0x10001834
int __userpurge sub_10001834@<eax>(int a1@<eax>, _DWORD *a2)
{
  FARPROC v3; // eax
  unsigned int v4; // esi
  _BYTE *v6; // eax
  _BYTE *v7; // edi
  int v8; // ecx
  int (__stdcall *v9)(LPCSTR); // esi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  char *v17; // ebx
  int v18; // eax
  int v19; // ecx
  CHAR *v20; // eax
  int v21; // ecx
  char v22; // al
  unsigned __int8 v23; // cl
  int v24; // eax
  const CHAR *v25; // ebx
  int v26; // eax
  int v27; // ecx
  _BYTE *v28; // eax
  CHAR *v29; // [esp+Ch] [ebp-Ch]
  int i; // [esp+Ch] [ebp-Ch]
  int v31; // [esp+Ch] [ebp-Ch]
  const CHAR *lpString; // [esp+10h] [ebp-8h]
  LPCSTR lpStringa; // [esp+10h] [ebp-8h]
  unsigned __int8 v34; // [esp+17h] [ebp-1h]

  v3 = sub_10001780("ConvertStringSidToSidA");
  v4 = 0;
  if ( v3 != nullptr && ((int (__stdcall *)(int, _DWORD *))v3)(a1, a2) != 0 )
    return 1;
  *a2 = 0;
  v34 = 0;
  v6 = LocalAlloc(0x40u, 0x44u);
  v7 = v6;
  if ( v6 != nullptr )
  {
    *v6 = 1;
    v8 = 0;
    do
    {
      if ( (*(_BYTE *)a1 | 0x20) == byte_10001270[v4]
        && (*(_BYTE *)(a1 + 1) | 0x20) == byte_10001271[v4]
        && *(_BYTE *)(a1 + 2) == 0 )
      {
        v21 = 5 * v8;
        v22 = byte_10001272[v21];
        v7[6] = 0;
        v7[7] = v22;
        v7[5] = 0;
        v7[4] = 0;
        v7[2] = 0;
        v7[3] = 0;
        *((_DWORD *)v7 + 2) = (unsigned __int8)byte_10001273[v21];
        v23 = byte_10001274[v21];
        v34 = 1;
        if ( v23 != 0 )
        {
          *((_DWORD *)v7 + 3) = v23 + 500;
          v34 = 2;
        }
        goto LABEL_27;
      }
      v4 += 5;
      ++v8;
    }
    while ( v4 < 0x23 );
    v9 = lstrlenA;
    v10 = lstrlenA((LPCSTR)a1);
    v12 = sub_10001799(v11, a1, v10);
    if ( v12 != 0 )
    {
      v13 = v12 + 1;
      v14 = lstrlenA((LPCSTR)(v12 + 1));
      v16 = sub_10001799(v15, v13, v14);
      if ( v16 != 0 )
      {
        v17 = (char *)(v16 + 1);
        v18 = lstrlenA((LPCSTR)(v16 + 1));
        v20 = (CHAR *)sub_10001799(v19, (int)v17, v18);
        v29 = v20;
        if ( v20 != nullptr )
        {
          *v20 = 0;
          if ( *v17 == 48 && v17[1] == 120 )
          {
            v7[2] = sub_100017BD(v17);
            v7[3] = sub_100017BD(v17 + 2);
            v7[4] = sub_100017BD(v17 + 4);
            v7[5] = sub_100017BD(v17 + 8);
            v7[6] = sub_100017BD(v17 + 10);
            v9 = lstrlenA;
            v7[7] = sub_100017BD(v17 + 12);
          }
          else
          {
            v24 = sub_100032C8(v17);
            v7[6] = BYTE1(v24);
            v7[7] = v24;
            v7[5] = BYTE2(v24);
            v7[4] = HIBYTE(v24);
            v7[2] = 0;
            v7[3] = 0;
          }
          *v29 = 45;
          lpString = v29;
          v25 = v29 + 1;
          for ( i = 0; i < 8; ++i )
          {
            v26 = v9(lpString);
            v28 = (_BYTE *)sub_10001799(v27, (int)lpString, v26);
            if ( v28 == nullptr )
              break;
            *v28 = 0;
            ++v34;
            lpString = v28 + 1;
          }
          lpStringa = nullptr;
          if ( v34 != 0 )
          {
            while ( 1 )
            {
              *(_DWORD *)&v7[4 * (_DWORD)lpStringa++ + 8] = sub_100032C8(v25);
              v31 = (int)&v25[v9(v25) + 1];
              if ( (int)lpStringa >= v34 )
                break;
              v25 = (const CHAR *)v31;
            }
          }
          if ( v34 != 0 )
          {
LABEL_27:
            *a2 = v7;
            v7[1] = v34;
            return 1;
          }
          LocalFree(v7);
        }
      }
    }
  }
  return 0;
}

// Address: 0x10001A6B
BOOL __userpurge sub_10001A6B@<eax>(CHAR *a1@<ebx>, PSID pSid)
{
  BOOL result; // eax
  PSID_IDENTIFIER_AUTHORITY SidIdentifierAuthority; // esi
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // eax
  DWORD v8; // esi
  int i; // ebp
  PDWORD SidSubAuthority; // eax
  int v11; // [esp-20h] [ebp-28h]
  int v12; // [esp-1Ch] [ebp-24h]
  int v13; // [esp-18h] [ebp-20h]
  int v14; // [esp-14h] [ebp-1Ch]
  int v15; // [esp-10h] [ebp-18h]
  int v16; // [esp-Ch] [ebp-14h]
  int v17; // [esp-Ch] [ebp-14h]
  DWORD v18; // [esp+4h] [ebp-4h]

  result = IsValidSid(pSid);
  if ( result )
  {
    SidIdentifierAuthority = GetSidIdentifierAuthority(pSid);
    v18 = *GetSidSubAuthorityCount(pSid);
    v4 = wsprintfA(a1, "S-%lu-", 1);
    if ( SidIdentifierAuthority->Value[0] != 0 || SidIdentifierAuthority->Value[1] != 0 )
    {
      v17 = SidIdentifierAuthority->Value[5];
      v15 = SidIdentifierAuthority->Value[4];
      v14 = SidIdentifierAuthority->Value[3];
      v13 = SidIdentifierAuthority->Value[2];
      v12 = SidIdentifierAuthority->Value[1];
      v11 = SidIdentifierAuthority->Value[0];
      v7 = lstrlenA(a1);
      v6 = wsprintfA(&a1[v7], "0x%02hx%02hx%02hx%02hx%02hx%02hx", v11, v12, v13, v14, v15, v17);
    }
    else
    {
      v16 = SidIdentifierAuthority->Value[5]
          + ((SidIdentifierAuthority->Value[4]
            + ((SidIdentifierAuthority->Value[3] + (SidIdentifierAuthority->Value[2] << 8)) << 8)) << 8);
      v5 = lstrlenA(a1);
      v6 = wsprintfA(&a1[v5], "%lu", v16);
    }
    v8 = 0;
    for ( i = v6 + v4; v8 < v18; ++v8 )
    {
      SidSubAuthority = GetSidSubAuthority(pSid, v8);
      i += wsprintfA(&a1[i], "-%lu", *SidSubAuthority);
    }
    return true;
  }
  return result;
}

// Address: 0x10001B58
int __stdcall sub_10001B58(int a1, int a2, int a3)
{
  FARPROC v3; // eax

  v3 = sub_10001780("SetEntriesInAclA");
  if ( v3 != nullptr )
    return ((int (__stdcall *)(int, int, int, int))v3)(1, a1, a2, a3);
  else
    return 50;
}

// Address: 0x10001B7E
_DWORD *__userpurge sub_10001B7E@<eax>(_DWORD *result@<eax>, int a2, int a3, int a4)
{
  result[3] = 0;
  result[4] = 0;
  result[6] = 0;
  result[5] = 1;
  result[7] = &dword_100014A0;
  result[2] = a4;
  *result = a2;
  result[1] = a3;
  return result;
}

// Address: 0x10001BAE
int __userpurge sub_10001BAE@<eax>(LPCSTR *a1@<edi>, LPCSTR lpString1)
{
  LPCSTR *v2; // esi

  v2 = a1;
  if ( *a1 == nullptr )
    return -1;
  while ( lstrcmpiA(lpString1, *v2) != 0 )
  {
    if ( *++v2 == nullptr )
      return -1;
  }
  return v2 - a1;
}

// Address: 0x10001BDE
CHAR *__usercall sub_10001BDE@<eax>(_DWORD *a1@<eax>, const CHAR *a2@<esi>)
{
  const CHAR *v3; // eax
  CHAR *v5; // eax
  CHAR *v6; // edi
  SIZE_T v7; // [esp-4h] [ebp-Ch]
  int v8; // [esp+4h] [ebp-4h] BYREF

  v3 = &a2[lstrlenA(a2) - 1];
  if ( *a2 == 40 && *v3 == 41 )
  {
    v8 = 0;
    *v3 = 0;
    if ( sub_10001834((int)(a2 + 1), &v8) == 0 )
      v8 = 0;
    *a1 = 0;
    return (CHAR *)v8;
  }
  else
  {
    v7 = uBytes;
    *a1 = 1;
    v5 = (CHAR *)LocalAlloc(0x40u, v7);
    v6 = v5;
    if ( v5 != nullptr )
      lstrcpyA(v5, a2);
    return v6;
  }
}

// Address: 0x10001C43
HLOCAL __stdcall sub_10001C43(LPCSTR lpString)
{
  const CHAR *v1; // eax
  HLOCAL v2; // eax
  enum _SID_NAME_USE peUse; // [esp+8h] [ebp-14h] BYREF
  LPSTR ReferencedDomainName; // [esp+Ch] [ebp-10h]
  DWORD cbSid; // [esp+10h] [ebp-Ch] BYREF
  DWORD cchReferencedDomainName; // [esp+14h] [ebp-8h] BYREF
  HLOCAL hMem; // [esp+18h] [ebp-4h] BYREF

  hMem = nullptr;
  v1 = &lpString[lstrlenA(lpString) - 1];
  if ( *lpString == 40 && *v1 == 41 )
  {
    *v1 = 0;
    if ( sub_10001834((int)(lpString + 1), &hMem) == 0 )
      return nullptr;
  }
  else
  {
    cbSid = 0;
    cchReferencedDomainName = 0;
    ReferencedDomainName = nullptr;
    if ( LookupAccountNameA(nullptr, lpString, nullptr, &cbSid, nullptr, &cchReferencedDomainName, &peUse)
      || GetLastError() == 122 )
    {
      ReferencedDomainName = (LPSTR)LocalAlloc(0x40u, cchReferencedDomainName);
      if ( ReferencedDomainName != nullptr )
      {
        v2 = LocalAlloc(0x40u, cbSid);
        hMem = v2;
        if ( v2 != nullptr
          && !LookupAccountNameA(nullptr, lpString, v2, &cbSid, ReferencedDomainName, &cchReferencedDomainName, &peUse) )
        {
          LocalFree(hMem);
          hMem = nullptr;
        }
      }
    }
    LocalFree(ReferencedDomainName);
  }
  return hMem;
}

// Address: 0x10001D12
int __userpurge sub_10001D12@<eax>(const CHAR *a1@<eax>, int a2)
{
  char *i; // esi
  char v3; // cl
  int v4; // eax
  int v6; // [esp+4h] [ebp-4h]

  v6 = 0;
  if ( *a1 != 0 )
  {
    do
    {
      while ( *a1 != 0 && *a1 <= 32 )
        ++a1;
      for ( i = (char *)a1; *i != 0; ++i )
      {
        v3 = *i;
        if ( *i <= 32 )
          break;
        if ( v3 == 124 )
          break;
        if ( v3 == 43 )
          break;
      }
      if ( *i != 0 )
        *i++ = 0;
      v4 = sub_10001BAE(*(LPCSTR **)(a2 + 12), a1);
      if ( v4 >= 0 && v4 < *(_DWORD *)(a2 + 20) )
        v6 |= *(_DWORD *)(*(_DWORD *)(a2 + 16) + 4 * v4);
      a1 = i;
    }
    while ( *i != 0 );
  }
  return v6;
}

// Address: 0x10001D84
LSTATUS __userpurge sub_10001D84@<eax>(
        int a1@<eax>,
        LPCSTR lpSubKey,
        SECURITY_INFORMATION SecurityInformation,
        PSID pOwner,
        PSID pGroup,
        PACL pDacl,
        int a7)
{
  int v7; // esi
  int v8; // ecx
  LSTATUS v9; // esi
  FARPROC v10; // eax
  _BYTE pSecurityDescriptor[20]; // [esp+Ch] [ebp-1Ch] BYREF
  HKEY phkResult; // [esp+20h] [ebp-8h] BYREF
  SECURITY_INFORMATION v14; // [esp+24h] [ebp-4h]

  v7 = *(_DWORD *)(a1 + 4);
  if ( v7 == 4 && (*(_DWORD *)(*(_DWORD *)dword_1000414C + 48) & 0x100) != 0 )
  {
    v14 = SecurityInformation & 1;
    phkResult = nullptr;
    if ( (SecurityInformation & 1) != 0 || (SecurityInformation & 2) != 0 )
      v8 = 0x80000;
    else
      v8 = 0;
    v9 = RegOpenKeyExA(*(HKEY *)(a7 + 4), lpSubKey, 0, v8 | ((SecurityInformation & 4) << 16) | 0x100, &phkResult);
    if ( v9 == 0 )
    {
      InitializeSecurityDescriptor(pSecurityDescriptor, 1u);
      if ( v14 != 0 )
        SetSecurityDescriptorOwner(pSecurityDescriptor, pOwner, false);
      if ( (SecurityInformation & 2) != 0 )
        SetSecurityDescriptorGroup(pSecurityDescriptor, pGroup, false);
      if ( (SecurityInformation & 4) != 0 )
        SetSecurityDescriptorDacl(pSecurityDescriptor, true, pDacl, false);
      v9 = RegSetKeySecurity(phkResult, SecurityInformation, pSecurityDescriptor);
      RegCloseKey(phkResult);
    }
  }
  else
  {
    v10 = sub_10001780("SetNamedSecurityInfoA");
    if ( v10 != nullptr )
      return ((int (__stdcall *)(LPCSTR, int, SECURITY_INFORMATION, PSID, PSID, PACL, _DWORD))v10)(
               lpSubKey,
               v7,
               SecurityInformation,
               pOwner,
               pGroup,
               pDacl,
               0);
    else
      return 50;
  }
  return v9;
}

// Address: 0x10001E8F
LSTATUS __userpurge sub_10001E8F@<eax>(
        int a1@<eax>,
        LPCSTR lpSubKey,
        SECURITY_INFORMATION SecurityInformation,
        _DWORD *a4,
        int a5)
{
  int v5; // edi
  LSTATUS KeySecurity; // ebx
  HLOCAL v7; // eax
  FARPROC v8; // eax
  HKEY phkResult; // [esp+Ch] [ebp-4h] BYREF

  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 == 4 && (*(_WORD *)(*(_DWORD *)dword_1000414C + 48) & 0x100) != 0 )
  {
    phkResult = nullptr;
    KeySecurity = RegOpenKeyExA(*(HKEY *)(a5 + 4), lpSubKey, 0, 0x20100u, &phkResult);
    if ( KeySecurity == 0 )
    {
      lpSubKey = nullptr;
      KeySecurity = RegGetKeySecurity(phkResult, SecurityInformation, nullptr, (LPDWORD)&lpSubKey);
      if ( KeySecurity == 122 )
      {
        v7 = LocalAlloc(0x40u, (SIZE_T)lpSubKey);
        *a4 = v7;
        if ( v7 != nullptr )
          KeySecurity = RegGetKeySecurity(phkResult, SecurityInformation, v7, (LPDWORD)&lpSubKey);
      }
      RegCloseKey(phkResult);
    }
  }
  else
  {
    v8 = sub_10001780("GetNamedSecurityInfoA");
    if ( v8 != nullptr )
      return ((int (__stdcall *)(LPCSTR, int, SECURITY_INFORMATION, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD *))v8)(
               lpSubKey,
               v5,
               SecurityInformation,
               0,
               0,
               0,
               0,
               a4);
    else
      return 50;
  }
  return KeySecurity;
}

// Address: 0x10001F4C
int __stdcall sub_10001F4C(int a1, LPCSTR lpSubKey, int a3, _DWORD *a4, LPSTR lpString1)
{
  int v5; // ebx
  LSTATUS v7; // eax
  int v8; // eax
  LSTATUS v9; // eax
  BOOL v11[8]; // [esp+Ch] [ebp-3Ch] BYREF
  BOOL bDaclPresent; // [esp+2Ch] [ebp-1Ch] BYREF
  BOOL bDaclDefaulted; // [esp+30h] [ebp-18h] BYREF
  PACL pDacl; // [esp+34h] [ebp-14h] BYREF
  BOOL v15; // [esp+38h] [ebp-10h] BYREF
  HLOCAL v16; // [esp+3Ch] [ebp-Ch]
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [esp+40h] [ebp-8h] BYREF
  HLOCAL hMem; // [esp+44h] [ebp-4h] BYREF
  int v19; // [esp+50h] [ebp+8h]

  v16 = nullptr;
  pSecurityDescriptor = nullptr;
  v15 = true;
  pDacl = nullptr;
  hMem = nullptr;
  bDaclPresent = true;
  bDaclDefaulted = false;
  v5 = 1;
  if ( sub_10003243(lpString1) != 0 )
  {
    sub_10003283("Trustee is missing");
  }
  else
  {
    v16 = sub_10001BDE(&v15, lpString1);
    if ( v16 != nullptr )
    {
      if ( sub_10003243(lpString1) != 0 )
      {
        sub_10003283("Permission flags are missing");
      }
      else
      {
        v19 = sub_10001D12(lpString1, a1);
        if ( v19 != 0 )
        {
          v7 = sub_10001E8F(a1, lpSubKey, 4u, &pSecurityDescriptor, (int)a4);
          v5 = v7;
          if ( v7 != 0 )
          {
            sub_10001748("Cannot read access control list. Error code: %d", v7);
          }
          else
          {
            GetSecurityDescriptorDacl(pSecurityDescriptor, &bDaclPresent, &pDacl, &bDaclDefaulted);
            sub_10001B7E(v11, v19, a3, *(_DWORD *)(a1 + 8));
            v11[5] = v15;
            v11[7] = (BOOL)v16;
            if ( *a4 != 0 )
              v11[2] = false;
            v8 = sub_10001B58((int)v11, (int)pDacl, (int)&hMem);
            v5 = v8;
            if ( v8 != 0 )
            {
              sub_10001748("Cannot build new access control list. Error code: %d", v8);
            }
            else
            {
              v9 = sub_10001D84(a1, lpSubKey, 4u, nullptr, nullptr, (PACL)hMem, (int)a4);
              v5 = v9;
              if ( v9 != 0 )
                sub_10001748("Cannot apply new access control list. Error code: %d", v9);
            }
          }
        }
        else
        {
          sub_10001748("Bad permission flags (%s)", (int)lpString1);
        }
      }
    }
    else
    {
      sub_10001748("Bad trustee (%s)", (int)lpString1);
    }
  }
  LocalFree(hMem);
  LocalFree(pSecurityDescriptor);
  LocalFree(v16);
  return v5;
}

// Address: 0x10002097
LSTATUS __userpurge sub_10002097@<eax>(_DWORD *a1@<esi>, int a2, const CHAR *lpSubKey)
{
  LSTATUS v3; // eax
  LSTATUS v4; // ebx
  LSTATUS v5; // eax
  BOOL bDaclPresent; // [esp+8h] [ebp-10h] BYREF
  BOOL bDaclDefaulted; // [esp+Ch] [ebp-Ch] BYREF
  PACL pDacl; // [esp+10h] [ebp-8h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [esp+14h] [ebp-4h] BYREF

  pSecurityDescriptor = nullptr;
  pDacl = nullptr;
  bDaclPresent = true;
  bDaclDefaulted = false;
  v3 = sub_10001E8F(a2, lpSubKey, 4u, &pSecurityDescriptor, (int)a1);
  v4 = v3;
  if ( v3 != 0 )
  {
    sub_10001748("Cannot read access control list. Error code: %d", v3);
  }
  else
  {
    GetSecurityDescriptorDacl(pSecurityDescriptor, &bDaclPresent, &pDacl, &bDaclDefaulted);
    v5 = sub_10001D84(a2, lpSubKey, (*a1 != 0 ? 0x80000000 : 0x20000000) | 4, nullptr, nullptr, pDacl, (int)a1);
    v4 = v5;
    if ( v5 != 0 )
      sub_10001748("Cannot change access control list inheritance. Error code: %d", v5);
  }
  LocalFree(pSecurityDescriptor);
  return v4;
}

// Address: 0x1000212D
BOOL __userpurge sub_1000212D@<eax>(int a1@<eax>, DWORD *a2@<ecx>, HANDLE TokenHandle)
{
  DWORD v3; // edx
  LONG v4; // ecx
  BOOL result; // eax
  struct _TOKEN_PRIVILEGES NewState; // [esp+0h] [ebp-10h] BYREF

  v3 = *a2;
  v4 = a2[1];
  NewState.Privileges[0].Attributes = a1 != 0 ? 2 : 0;
  NewState.Privileges[0].Luid.HighPart = v4;
  NewState.PrivilegeCount = 1;
  NewState.Privileges[0].Luid.LowPart = v3;
  result = AdjustTokenPrivileges(TokenHandle, false, &NewState, 0x10u, nullptr, nullptr);
  if ( result )
    return GetLastError() != 1300;
  return result;
}

// Address: 0x1000217D
int __stdcall sub_1000217D(int a1, LPCSTR lpSubKey, int a3, int a4, CHAR *SecurityInformation)
{
  HLOCAL v5; // eax
  HANDLE CurrentProcess; // eax
  HANDLE v7; // edi
  HANDLE v8; // edi
  HANDLE v9; // edi
  HANDLE v10; // edi
  DWORD LastError; // [esp-4h] [ebp-2Ch]
  HLOCAL hMem; // [esp+8h] [ebp-20h]
  struct _LUID Luid; // [esp+Ch] [ebp-1Ch] BYREF
  struct _LUID v15; // [esp+14h] [ebp-14h] BYREF
  PSID pGroup; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  HANDLE TokenHandle; // [esp+24h] [ebp-4h] BYREF
  BOOL v19; // [esp+38h] [ebp+10h]
  SECURITY_INFORMATION SecurityInformationa; // [esp+40h] [ebp+18h]

  v17 = 1;
  hMem = nullptr;
  v15.HighPart = 0;
  pGroup = nullptr;
  if ( sub_10003243(SecurityInformation) != 0 )
  {
    sub_10003283("Trustee is missing");
  }
  else
  {
    v5 = sub_10001C43(SecurityInformation);
    hMem = v5;
    if ( v5 != nullptr )
    {
      if ( a3 != 0 )
      {
        if ( a3 != 1 )
        {
          sub_10001748("Bug: Unsupported change mode: %d", a3);
          goto LABEL_26;
        }
        SecurityInformationa = 2;
        pGroup = v5;
      }
      else
      {
        SecurityInformationa = 1;
        v15.HighPart = (LONG)v5;
      }
      CurrentProcess = GetCurrentProcess();
      if ( OpenProcessToken(CurrentProcess, 0x28u, &TokenHandle) )
      {
        v7 = TokenHandle;
        v19 = LookupPrivilegeValueA(nullptr, "SeRestorePrivilege", &Luid) && sub_1000212D(1, &Luid.LowPart, v7);
        v8 = TokenHandle;
        Luid.HighPart = LookupPrivilegeValueA(nullptr, "SeTakeOwnershipPrivilege", &Luid)
                     && sub_1000212D(1, &Luid.LowPart, v8);
        v17 = sub_10001D84(a1, lpSubKey, SecurityInformationa, (PSID)v15.HighPart, pGroup, nullptr, a4);
        if ( v19 )
        {
          v9 = TokenHandle;
          if ( LookupPrivilegeValueA(nullptr, "SeRestorePrivilege", &v15) )
            sub_1000212D(0, &v15.LowPart, v9);
        }
        if ( Luid.HighPart != 0 )
        {
          v10 = TokenHandle;
          if ( LookupPrivilegeValueA(nullptr, "SeTakeOwnershipPrivilege", &Luid) )
            sub_1000212D(0, &Luid.LowPart, v10);
        }
        if ( v17 != 0 )
          sub_10001748("Cannot apply new ownership. Error code: %d", v17);
      }
      else
      {
        LastError = GetLastError();
        sub_10001748("Cannot open process token. Error code: %d", LastError);
      }
    }
    else
    {
      sub_10001748("Bad trustee (%s)", (int)SecurityInformation);
    }
  }
LABEL_26:
  LocalFree(hMem);
  CloseHandle(TokenHandle);
  return v17;
}

// Address: 0x10002307
int __stdcall sub_10002307(int a1, LPCSTR lpSubKey, int a3, LPSTR Name, LPSTR ReferencedDomainName, int a6)
{
  int v6; // edi
  SECURITY_INFORMATION v7; // eax
  LSTATUS v8; // eax
  PSID v9; // eax
  DWORD LastError; // [esp-4h] [ebp-28h]
  DWORD cchName; // [esp+8h] [ebp-1Ch] BYREF
  DWORD cchReferencedDomainName; // [esp+Ch] [ebp-18h] BYREF
  enum _SID_NAME_USE peUse; // [esp+10h] [ebp-14h] BYREF
  PSID pGroup; // [esp+14h] [ebp-10h] BYREF
  PSID pOwner; // [esp+18h] [ebp-Ch] BYREF
  BOOL bOwnerDefaulted; // [esp+1Ch] [ebp-8h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [esp+20h] [ebp-4h] BYREF

  cchName = uBytes;
  cchReferencedDomainName = uBytes;
  v6 = 1;
  pSecurityDescriptor = nullptr;
  pGroup = nullptr;
  pOwner = nullptr;
  peUse = SidTypeUnknown;
  bOwnerDefaulted = false;
  if ( a3 != 0 )
  {
    if ( a3 != 1 )
    {
      sub_10001748("Bug: Unsupported change mode: %d", a3);
      goto LABEL_15;
    }
    v7 = 2;
  }
  else
  {
    v7 = 1;
  }
  v8 = sub_10001E8F(a1, lpSubKey, v7, &pSecurityDescriptor, a6);
  v6 = v8;
  if ( v8 != 0 )
  {
    sub_10001748("Cannot get current ownership. Error code: %d", v8);
  }
  else
  {
    if ( a3 == 1 )
      GetSecurityDescriptorOwner(pSecurityDescriptor, &pOwner, &bOwnerDefaulted);
    else
      GetSecurityDescriptorGroup(pSecurityDescriptor, &pGroup, &bOwnerDefaulted);
    v9 = pOwner;
    if ( pOwner == nullptr )
      v9 = pGroup;
    if ( !LookupAccountSidA(nullptr, v9, Name, &cchName, ReferencedDomainName, &cchReferencedDomainName, &peUse) )
    {
      LastError = GetLastError();
      sub_10001748("Cannot look up owner. Error code: %d", LastError);
    }
  }
LABEL_15:
  LocalFree(pSecurityDescriptor);
  return v6;
}

// Address: 0x100023E2
int __userpurge sub_100023E2@<eax>(CHAR *a1@<eax>, int a2, const CHAR *lpSubKey, _DWORD *a4)
{
  int v5; // ebx
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  LSTATUS v9; // eax
  _DWORD v11[8]; // [esp+Ch] [ebp-2Ch] BYREF
  int v12; // [esp+2Ch] [ebp-Ch] BYREF
  HLOCAL v13; // [esp+30h] [ebp-8h]
  HLOCAL hMem; // [esp+34h] [ebp-4h] BYREF

  v13 = nullptr;
  v12 = 1;
  hMem = nullptr;
  v5 = 1;
  if ( sub_10003243(a1) != 0 )
  {
    sub_10003283("Trustee is missing");
  }
  else
  {
    v13 = sub_10001BDE(&v12, a1);
    if ( v13 != nullptr )
    {
      if ( sub_10003243(a1) != 0 )
      {
        sub_10003283("Permission flags are missing");
      }
      else
      {
        v6 = sub_10001D12(a1, a2);
        if ( v6 != 0 )
        {
          sub_10001B7E(v11, v6, 2, *(_DWORD *)(a2 + 8));
          v7 = *a4 == 0;
          v11[5] = v12;
          v11[7] = v13;
          if ( !v7 )
            v11[2] = 0;
          v8 = sub_10001B58((int)v11, 0, (int)&hMem);
          v5 = v8;
          if ( v8 != 0 )
          {
            sub_10001748("Cannot build new access control list. Error code: %d", v8);
          }
          else
          {
            v9 = sub_10001D84(a2, lpSubKey, 4u, nullptr, nullptr, (PACL)hMem, (int)a4);
            v5 = v9;
            if ( v9 != 0 )
              sub_10001748("Cannot change access control list inheritance. Error code: %d", v9);
          }
        }
        else
        {
          sub_10001748("Bad permission flags (%s)", (int)a1);
        }
      }
    }
    else
    {
      sub_10001748("Bad trustee (%s)", (int)a1);
    }
  }
  LocalFree(hMem);
  LocalFree(v13);
  return v5;
}

// Address: 0x100024D8
char **__usercall sub_100024D8@<eax>(CHAR *a1@<edi>, _DWORD *a2@<esi>)
{
  DWORD FileAttributesA; // eax
  bool v3; // zf
  char **result; // eax

  if ( sub_10003243(a1) != 0 )
  {
    sub_10003283("Filesystem path missing");
    return nullptr;
  }
  *a2 = 0;
  if ( lstrcmpiA(a1, "/noinherit") == 0 )
  {
    *a2 = 1;
    sub_10003243(a1);
  }
  FileAttributesA = GetFileAttributesA(a1);
  if ( FileAttributesA == -1 )
  {
    sub_10003283("Invalid filesystem path missing");
    return nullptr;
  }
  v3 = (FileAttributesA & 0x10) == 0;
  result = &off_10004118;
  if ( v3 )
    return &off_10004100;
  return result;
}

// Address: 0x1000252F
HLOCAL __stdcall sub_1000252F(int a1)
{
  LSTATUS v1; // ebx
  CHAR *v2; // edi
  char **v3; // eax
  HLOCAL result; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = 1;
  v2 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v2 == nullptr )
    return (HLOCAL)sub_10003283("error");
  v3 = sub_100024D8(v2, v5);
  if ( v3 != nullptr )
  {
    v5[0] = a1 == 0;
    v1 = sub_10002097(v5, (int)v3, v2);
    if ( v1 == 0 )
      sub_10003283("ok");
  }
  result = LocalFree(v2);
  if ( v1 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x10002598
HLOCAL __stdcall sub_10002598(int a1)
{
  CHAR *v1; // edi
  CHAR *v2; // ebx
  char **v3; // eax
  HLOCAL result; // eax
  int v5[2]; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-4h]

  v6 = 1;
  v1 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v1 == nullptr )
    return (HLOCAL)sub_10003283("error");
  v2 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v2 != nullptr )
  {
    v3 = sub_100024D8(v1, v5);
    if ( v3 != nullptr )
    {
      v6 = sub_10001F4C((int)v3, v1, a1, v5, v2);
      if ( v6 == 0 )
        sub_10003283("ok");
    }
    LocalFree(v2);
  }
  result = LocalFree(v1);
  if ( v6 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x1000261E
HLOCAL __stdcall sub_1000261E(int a1)
{
  CHAR *v1; // edi
  CHAR *v2; // ebx
  char **v3; // eax
  HLOCAL result; // eax
  int v5[2]; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-4h]

  v6 = 1;
  v1 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v1 == nullptr )
    return (HLOCAL)sub_10003283("error");
  v2 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v2 != nullptr )
  {
    v3 = sub_100024D8(v1, v5);
    if ( v3 != nullptr )
    {
      v6 = sub_1000217D((int)v3, v1, a1, (int)v5, v2);
      if ( v6 == 0 )
        sub_10003283("ok");
    }
    LocalFree(v2);
  }
  result = LocalFree(v1);
  if ( v6 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x100026A4
HLOCAL __stdcall sub_100026A4(int a1)
{
  CHAR *v1; // edi
  char **v2; // eax
  HLOCAL result; // eax
  int v4[2]; // [esp+8h] [ebp-14h] BYREF
  int v5; // [esp+10h] [ebp-Ch]
  HLOCAL hMem; // [esp+14h] [ebp-8h]
  HLOCAL v7; // [esp+18h] [ebp-4h]

  v5 = 1;
  v1 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v1 == nullptr )
    return (HLOCAL)sub_10003283("error");
  v7 = LocalAlloc(0x40u, uBytes);
  if ( v7 != nullptr )
  {
    hMem = LocalAlloc(0x40u, uBytes);
    if ( hMem != nullptr )
    {
      v2 = sub_100024D8(v1, v4);
      if ( v2 != nullptr )
      {
        v5 = sub_10002307((int)v2, v1, a1, (LPSTR)v7, (LPSTR)hMem, (int)v4);
        if ( v5 == 0 )
          sub_10003283((LPCSTR)v7);
      }
      LocalFree(hMem);
    }
    LocalFree(v7);
  }
  result = LocalFree(v1);
  if ( v5 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x10002744
int __userpurge sub_10002744@<eax>(CHAR *a1@<ebx>, _DWORD *a2@<esi>, CHAR *lpString1)
{
  unsigned int v3; // edi
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  if ( sub_10003243(a1) != 0 )
  {
    sub_10003283("Root key name missing");
  }
  else
  {
    *a2 = 0;
    if ( lstrcmpiA(a1, "/noinherit") == 0 )
    {
      *a2 = 1;
      sub_10003243(a1);
    }
    v3 = sub_10001BAE((LPCSTR *)off_10004004, a1);
    if ( v3 >= 4 )
    {
      sub_10001748("Bad root key name (%s)", (int)a1);
    }
    else if ( sub_10003243(a1) != 0 )
    {
      sub_10003283("Registry key name missing");
    }
    else
    {
      if ( (*(_WORD *)(*(_DWORD *)dword_1000414C + 48) & 0x100) != 0 )
      {
        a2[1] = dword_100013D8[v3];
        lstrcpyA(lpString1, a1);
      }
      else
      {
        lstrcpyA(lpString1, (&lpString2)[v3]);
        lstrcatA(lpString1, a1);
      }
      return 1;
    }
  }
  return v5;
}

// Address: 0x10002807
HLOCAL __stdcall sub_10002807(int a1)
{
  CHAR *v1; // ebx
  HLOCAL result; // eax
  _DWORD v3[2]; // [esp+4h] [ebp-10h] BYREF
  LSTATUS v4; // [esp+Ch] [ebp-8h]
  HLOCAL hMem; // [esp+10h] [ebp-4h]

  v4 = 1;
  hMem = LocalAlloc(0x40u, uBytes);
  if ( hMem == nullptr )
    return (HLOCAL)sub_10003283("error");
  v1 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v1 != nullptr )
  {
    if ( sub_10002744(v1, v3, (CHAR *)hMem) != 0 )
    {
      v3[0] = a1 == 0;
      v4 = sub_10002097(v3, (int)&off_10004130, (const CHAR *)hMem);
      if ( v4 == 0 )
        sub_10003283("ok");
    }
    LocalFree(v1);
  }
  result = LocalFree(hMem);
  if ( v4 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x1000289B
HLOCAL __stdcall sub_1000289B(int a1)
{
  CHAR *v1; // ebx
  HLOCAL result; // eax
  int v3[2]; // [esp+4h] [ebp-10h] BYREF
  int v4; // [esp+Ch] [ebp-8h]
  HLOCAL hMem; // [esp+10h] [ebp-4h]

  v4 = 1;
  hMem = LocalAlloc(0x40u, uBytes);
  if ( hMem == nullptr )
    return (HLOCAL)sub_10003283("error");
  v1 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v1 != nullptr )
  {
    if ( sub_10002744(v1, v3, (CHAR *)hMem) != 0 )
    {
      v4 = sub_10001F4C((int)&off_10004130, (LPCSTR)hMem, a1, v3, v1);
      if ( v4 == 0 )
        sub_10003283("ok");
    }
    LocalFree(v1);
  }
  result = LocalFree(hMem);
  if ( v4 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x1000292B
HLOCAL __stdcall sub_1000292B(int a1)
{
  CHAR *v1; // ebx
  HLOCAL result; // eax
  int v3[2]; // [esp+4h] [ebp-10h] BYREF
  int v4; // [esp+Ch] [ebp-8h]
  HLOCAL hMem; // [esp+10h] [ebp-4h]

  v4 = 1;
  hMem = LocalAlloc(0x40u, uBytes);
  if ( hMem == nullptr )
    return (HLOCAL)sub_10003283("error");
  v1 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v1 != nullptr )
  {
    if ( sub_10002744(v1, v3, (CHAR *)hMem) != 0 )
    {
      v4 = sub_1000217D((int)&off_10004130, (LPCSTR)hMem, a1, (int)v3, v1);
      if ( v4 == 0 )
        sub_10003283("ok");
    }
    LocalFree(v1);
  }
  result = LocalFree(hMem);
  if ( v4 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x100029BB
HLOCAL __stdcall sub_100029BB(int a1)
{
  CHAR *v1; // ebx
  HLOCAL result; // eax
  int v3[2]; // [esp+4h] [ebp-14h] BYREF
  int v4; // [esp+Ch] [ebp-Ch]
  HLOCAL hMem; // [esp+10h] [ebp-8h]
  HLOCAL v6; // [esp+14h] [ebp-4h]

  v4 = 1;
  v6 = LocalAlloc(0x40u, uBytes);
  if ( v6 == nullptr )
    return (HLOCAL)sub_10003283("error");
  v1 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v1 != nullptr )
  {
    hMem = LocalAlloc(0x40u, uBytes);
    if ( hMem != nullptr )
    {
      if ( sub_10002744(v1, v3, (CHAR *)v6) != 0 )
      {
        v4 = sub_10002307((int)&off_10004130, (LPCSTR)v6, a1, v1, (LPSTR)hMem, (int)v3);
        if ( v4 == 0 )
          sub_10003283(v1);
      }
      LocalFree(hMem);
    }
    LocalFree(v1);
  }
  result = LocalFree(v6);
  if ( v4 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x10002A60
HLOCAL __cdecl EnableFileInheritance(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000252F(1);
}

// Address: 0x10002A93
HLOCAL __cdecl DisableFileInheritance(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000252F(0);
}

// Address: 0x10002AC6
HLOCAL __cdecl GrantOnFile(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_10002598(1);
}

// Address: 0x10002AF9
HLOCAL __cdecl SetOnFile(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_10002598(2);
}

// Address: 0x10002B2C
HLOCAL __cdecl DenyOnFile(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_10002598(3);
}

// Address: 0x10002B5F
HLOCAL __cdecl RevokeOnFile(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_10002598(4);
}

// Address: 0x10002B92
HLOCAL __cdecl SetFileOwner(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000261E(0);
}

// Address: 0x10002BC5
HLOCAL __cdecl SetFileGroup(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000261E(1);
}

// Address: 0x10002BF8
HLOCAL __cdecl GetFileOwner(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_100026A4(0);
}

// Address: 0x10002C2B
HLOCAL __cdecl GetFileGroup(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_100026A4(1);
}

// Address: 0x10002C5E
HLOCAL __cdecl ClearOnFile(int a1, int uBytes, int a3, int a4, int a5)
{
  CHAR *v6; // ebx
  char **v7; // eax
  HLOCAL result; // eax
  _DWORD v9[2]; // [esp+8h] [ebp-8h] BYREF
  CHAR *uBytesa; // [esp+1Ch] [ebp+Ch]
  int v11; // [esp+24h] [ebp+14h]

  dword_10004154 = a4;
  dword_10004158 = a3;
  iMaxLength = uBytes;
  ::uBytes = uBytes;
  dword_1000414C = a5;
  v11 = 1;
  uBytesa = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( uBytesa == nullptr )
    return (HLOCAL)sub_10003283("error");
  v6 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v6 != nullptr )
  {
    v7 = sub_100024D8(uBytesa, v9);
    if ( v7 != nullptr )
    {
      v11 = sub_100023E2(v6, (int)v7, uBytesa, v9);
      if ( v11 == 0 )
        sub_10003283("ok");
    }
    LocalFree(v6);
  }
  result = LocalFree(uBytesa);
  if ( v11 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x10002D02
HLOCAL __cdecl EnableRegKeyInheritance(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_10002807(1);
}

// Address: 0x10002D35
HLOCAL __cdecl DisableRegKeyInheritance(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_10002807(0);
}

// Address: 0x10002D68
HLOCAL __cdecl GrantOnRegKey(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000289B(1);
}

// Address: 0x10002D9B
HLOCAL __cdecl SetOnRegKey(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000289B(2);
}

// Address: 0x10002DCE
HLOCAL __cdecl DenyOnRegKey(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000289B(3);
}

// Address: 0x10002E01
HLOCAL __cdecl RevokeOnRegKey(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000289B(4);
}

// Address: 0x10002E34
HLOCAL __cdecl SetRegKeyOwner(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000292B(0);
}

// Address: 0x10002E67
HLOCAL __cdecl SetRegKeyGroup(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_1000292B(1);
}

// Address: 0x10002E9A
HLOCAL __cdecl GetRegKeyOwner(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_100029BB(0);
}

// Address: 0x10002ECD
HLOCAL __cdecl GetRegKeyGroup(int a1, int a2, int a3, int a4, int a5)
{
  iMaxLength = a2;
  dword_10004154 = a4;
  uBytes = a2;
  dword_10004158 = a3;
  dword_1000414C = a5;
  return sub_100029BB(1);
}

// Address: 0x10002F00
HLOCAL __cdecl ClearOnRegKey(int a1, int uBytes, int a3, int a4, int a5)
{
  CHAR *v6; // ebx
  HLOCAL result; // eax
  _DWORD v8[2]; // [esp+8h] [ebp-8h] BYREF
  CHAR *uBytesa; // [esp+1Ch] [ebp+Ch]
  int v10; // [esp+24h] [ebp+14h]

  dword_10004154 = a4;
  dword_10004158 = a3;
  iMaxLength = uBytes;
  ::uBytes = uBytes;
  dword_1000414C = a5;
  v10 = 1;
  uBytesa = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( uBytesa == nullptr )
    return (HLOCAL)sub_10003283("error");
  v6 = (CHAR *)LocalAlloc(0x40u, uBytes);
  if ( v6 != nullptr )
  {
    if ( sub_10002744(v6, v8, uBytesa) != 0 )
    {
      v10 = sub_100023E2(v6, (int)&off_10004130, uBytesa, v8);
      if ( v10 == 0 )
        sub_10003283("ok");
    }
    LocalFree(v6);
  }
  result = LocalFree(uBytesa);
  if ( v10 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x10002FA8
HLOCAL __cdecl NameToSid(int a1, int uBytes, PSID Sid, DWORD cchReferencedDomainName, CHAR *lpString2)
{
  CHAR *v5; // eax
  CHAR *v6; // edi
  CHAR *v7; // eax
  CHAR *v8; // esi
  DWORD LastError; // eax
  HLOCAL result; // eax
  enum _SID_NAME_USE peUse; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]

  dword_10004154 = cchReferencedDomainName;
  dword_10004158 = (int)Sid;
  iMaxLength = uBytes;
  ::uBytes = uBytes;
  dword_1000414C = (int)lpString2;
  v12 = 1;
  v5 = (CHAR *)LocalAlloc(0x40u, uBytes);
  v6 = v5;
  lpString2 = "OutOfMemory";
  if ( v5 != nullptr && sub_10003243(v5) == 0 )
  {
    uBytes = 0;
    cchReferencedDomainName = 0;
    LookupAccountNameA(nullptr, v6, nullptr, (LPDWORD)&uBytes, nullptr, &cchReferencedDomainName, &peUse);
    if ( uBytes != 0 )
    {
      Sid = LocalAlloc(0x40u, uBytes);
      if ( Sid != nullptr )
      {
        v7 = (CHAR *)LocalAlloc(0x40u, cchReferencedDomainName);
        v8 = v7;
        if ( v7 != nullptr )
        {
          lpString2 = v6;
          if ( LookupAccountNameA(nullptr, v6, Sid, (LPDWORD)&uBytes, v7, &cchReferencedDomainName, &peUse)
            && sub_10001A6B(v6, Sid) )
          {
            v12 = 0;
          }
          else
          {
            LastError = GetLastError();
            wsprintfA(v6, "Cannot look up name. Error code: %d", LastError);
          }
          LocalFree(v8);
        }
        LocalFree(Sid);
      }
    }
  }
  sub_10003283(lpString2);
  result = LocalFree(v6);
  if ( v12 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x100030C4
HLOCAL __cdecl SidToName(int a1, SIZE_T uBytes, LPSTR lpString1, LPSTR Name, int a5)
{
  DWORD v5; // esi
  CHAR *v6; // esi
  CHAR *v7; // edi
  DWORD LastError; // eax
  HLOCAL result; // eax
  enum _SID_NAME_USE peUse; // [esp+8h] [ebp-Ch] BYREF
  DWORD cchName; // [esp+Ch] [ebp-8h] BYREF
  DWORD cchReferencedDomainName; // [esp+10h] [ebp-4h] BYREF

  v5 = uBytes;
  dword_10004154 = (int)Name;
  dword_10004158 = (int)lpString1;
  iMaxLength = uBytes;
  ::uBytes = uBytes;
  dword_1000414C = a5;
  a5 = 1;
  lpString1 = (LPSTR)LocalAlloc(0x40u, uBytes);
  if ( lpString1 == nullptr )
    return (HLOCAL)sub_10003283("error");
  cchName = v5;
  Name = (LPSTR)LocalAlloc(0x40u, v5);
  if ( Name != nullptr )
  {
    cchReferencedDomainName = v5;
    v6 = (CHAR *)LocalAlloc(0x40u, v5);
    if ( v6 != nullptr )
    {
      v7 = lpString1;
      if ( sub_10003243(lpString1) == 0 )
      {
        uBytes = 0;
        if ( sub_10001834((int)v7, &uBytes) != 0
          && LookupAccountSidA(nullptr, (PSID)uBytes, Name, &cchName, v6, &cchReferencedDomainName, &peUse) )
        {
          sub_10003283(Name);
          sub_10003283(v6);
          a5 = 0;
        }
        else
        {
          LastError = GetLastError();
          wsprintfA(v7, "Cannot look up SID. Error code: %d", LastError);
          sub_10003283(v7);
        }
        LocalFree((HLOCAL)uBytes);
      }
      LocalFree(v6);
    }
    LocalFree(Name);
  }
  result = LocalFree(lpString1);
  if ( a5 != 0 )
    return (HLOCAL)sub_10003283("error");
  return result;
}

// Address: 0x100031CD
HLOCAL __cdecl GetCurrentUserName(int a1, int uBytes, int a3, int a4, int a5)
{
  int v5; // esi
  CHAR *v6; // edi
  const CHAR *v7; // ebx

  v5 = uBytes;
  dword_10004154 = a4;
  dword_10004158 = a3;
  iMaxLength = uBytes;
  ::uBytes = uBytes;
  dword_1000414C = a5;
  v6 = (CHAR *)LocalAlloc(0x40u, uBytes);
  v7 = "error";
  uBytes = v5;
  if ( v6 != nullptr && GetUserNameA(v6, (LPDWORD)&uBytes) )
    v7 = v6;
  sub_10003283(v7);
  return LocalFree(v6);
}

// Address: 0x10003234
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  dword_10004148 = (int)hinstDLL;
  return true;
}

// Address: 0x10003243
int __stdcall sub_10003243(LPSTR lpString1)
{
  _DWORD *v1; // eax
  CHAR *v2; // esi

  v1 = (_DWORD *)dword_10004154;
  if ( dword_10004154 == 0 )
    return 1;
  v2 = *(CHAR **)dword_10004154;
  if ( *(_DWORD *)dword_10004154 == 0 )
    return 1;
  if ( lpString1 != nullptr )
  {
    lstrcpyA(lpString1, v2 + 4);
    v1 = (_DWORD *)dword_10004154;
  }
  *v1 = *(_DWORD *)v2;
  GlobalFree(v2);
  return 0;
}

// Address: 0x10003283
void __stdcall sub_10003283(LPCSTR lpString2)
{
  CHAR *v1; // esi

  if ( dword_10004154 != 0 )
  {
    v1 = (CHAR *)GlobalAlloc(0x40u, iMaxLength + 8);
    lstrcpynA(v1 + 4, lpString2, iMaxLength);
    *(_DWORD *)v1 = *(_DWORD *)dword_10004154;
    *(_DWORD *)dword_10004154 = v1;
  }
}

// Address: 0x100032C8
int __stdcall sub_100032C8(char *a1)
{
  int result; // eax
  unsigned int v3; // ecx

  for ( result = 0; ; result = v3 + 10 * result - 48 )
  {
    v3 = *a1++;
    if ( v3 < 0x30 || v3 > 0x39 )
      break;
  }
  return result;
}

