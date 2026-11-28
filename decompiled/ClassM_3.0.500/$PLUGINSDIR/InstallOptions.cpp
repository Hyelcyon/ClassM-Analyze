// Decompiled from InstallOptions.dll (ClassM_3.0.500\ClassM_x64_unpacked\$PLUGINSDIR\InstallOptions.dll)

// Address: 0x10001000
HGLOBAL __stdcall sub_10001000(SIZE_T dwBytes)
{
  return GlobalAlloc(0x40u, dwBytes);
}

// Address: 0x1000100F
HGLOBAL __stdcall sub_1000100F(void *a1)
{
  HGLOBAL result; // eax

  if ( a1 != nullptr )
    return GlobalFree(a1);
  return result;
}

// Address: 0x1000101F
LPSTR __stdcall sub_1000101F(LPCSTR lpString)
{
  int v1; // eax
  CHAR *v2; // eax

  v1 = lstrlenA(lpString);
  v2 = (CHAR *)sub_10001000(v1 + 1);
  return lstrcpyA(v2, lpString);
}

// Address: 0x1000103E
int __stdcall sub_1000103E(int a1)
{
  int result; // eax
  _DWORD *i; // ecx

  result = 0;
  if ( dword_1000680C <= 0 )
    return -1;
  for ( i = (_DWORD *)(dword_10006804 + 60); a1 != *i; i += 21 )
  {
    if ( ++result >= dword_1000680C )
      return -1;
  }
  return result;
}

// Address: 0x1000106B
// attributes: thunk
LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_SendMessageA(hWnd, Msg, wParam, lParam);
}

// Address: 0x10001071
LRESULT __stdcall sub_10001071(WPARAM wParam)
{
  return SendMessageA(hWnd, 0x28u, wParam, 1);
}

// Address: 0x10001087
BOOL __stdcall sub_10001087(HWND a1, const CHAR *a2)
{
  BOOL result; // eax

  if ( a2 != nullptr )
    return SetWindowTextA(a1, a2);
  return result;
}

// Address: 0x10001097
int __stdcall sub_10001097(HWND hWnd, int a2, int a3, int a4)
{
  if ( a2 == 1 && GetWindowTextA(*(HWND *)(84 * a4 + dword_10006804 + 56), String, 260) > 0 )
    SendMessageA(hWnd, 0x466u, 1u, (LPARAM)String);
  return 0;
}

// Address: 0x100010DC
char sub_100010DC()
{
  signed int v0; // ebx
  CHAR *v1; // esi
  int v2; // edi
  int v3; // eax
  HWND v4; // ebp
  signed int v5; // edi
  signed int v6; // edi
  LRESULT v7; // ebp
  CHAR *v8; // eax
  CHAR *v9; // edi
  LPSTR i; // ebp
  LPSTR v11; // eax
  LRESULT v12; // eax
  int v14; // [esp+10h] [ebp-14h]
  CHAR *lParam; // [esp+14h] [ebp-10h]
  int v16; // [esp+18h] [ebp-Ch]
  int v17; // [esp+1Ch] [ebp-8h]
  HWND hWnd; // [esp+20h] [ebp-4h]
  HWND hWnda; // [esp+20h] [ebp-4h]
  HWND hWndb; // [esp+20h] [ebp-4h]

  v0 = 0x2000;
  v1 = (CHAR *)sub_10001000(0x2000u);
  if ( v1 == nullptr )
    return 0;
  v17 = 0;
  v14 = 1;
  if ( dword_1000680C > 0 )
  {
    v16 = 0;
    do
    {
      v2 = v16 + dword_10006804;
      v3 = *(_DWORD *)(v16 + dword_10006804 + 32);
      v4 = *(HWND *)(v16 + dword_10006804 + 56);
      hWnd = v4;
      if ( v3 == 6 )
      {
        if ( dword_100067BC > v14 )
          --dword_100067BC;
        --v14;
        goto LABEL_39;
      }
      if ( v3 > 9 )
      {
        if ( v3 <= 11 )
        {
          v12 = SendMessageA(v4, 0xF0u, 0, 0);
          wsprintfA(v1, "%d", v12 != 0);
LABEL_35:
          wsprintfA(AppName, "Field %d", v14);
          WritePrivateProfileStringA(AppName, KeyName, v1, lpFileName);
          goto LABEL_39;
        }
        if ( v3 <= 15 )
        {
          v7 = SendMessageA(v4, 0xEu, 0, 0);
          if ( v7 > v0 )
          {
            sub_1000100F(v1);
            v0 = v7 + 20;
            v1 = (CHAR *)sub_10001000(v7 + 20);
            if ( v1 == nullptr )
              return 0;
          }
          *v1 = 34;
          GetWindowTextA(hWnd, v1 + 1, v0 - 1);
          v8 = &v1[v7];
          v8[2] = 0;
          v8[1] = 34;
          if ( *(_DWORD *)(v2 + 32) == 12 && (*(_BYTE *)(v2 + 53) & 1) != 0 )
          {
            v0 *= 2;
            v9 = (CHAR *)sub_10001000(v0);
            hWndb = (HWND)v9;
            for ( i = v1; *i != 0; v9 = CharNextA(v9) )
            {
              if ( *i == 9 )
              {
                *v9++ = 92;
                *v9 = 116;
              }
              else if ( *i == 10 || *i == 13 )
              {
                *v9++ = 92;
                *v9 = 110;
              }
              else
              {
                if ( *i == 92 )
                  *v9 = 92;
                v11 = CharNextA(i);
                lstrcpynA(v9, i, (int)&v11[1 - (_DWORD)i]);
              }
              i = CharNextA(i);
            }
            *v9 = 0;
            sub_1000100F(v1);
            v1 = (CHAR *)hWndb;
          }
          goto LABEL_35;
        }
        if ( v3 == 16 )
        {
          v5 = lstrlenA(*(LPCSTR *)(v2 + 12)) + 10;
          if ( v5 > v0 )
          {
            sub_1000100F(v1);
            v0 = v5;
            v1 = (CHAR *)sub_10001000(v5);
            if ( v1 == nullptr )
              return 0;
          }
          v6 = 0;
          lParam = (CHAR *)sub_10001000(v0);
          if ( lParam == nullptr )
            return 0;
          *v1 = 0;
          hWnda = (HWND)SendMessageA(v4, 0x18Bu, 0, 0);
          if ( (int)hWnda > 0 )
          {
            do
            {
              if ( SendMessageA(v4, 0x187u, v6, 0) > 0 )
              {
                if ( *v1 != 0 )
                  lstrcatA(v1, String2);
                SendMessageA(v4, 0x189u, v6, (LPARAM)lParam);
                lstrcatA(v1, lParam);
              }
              ++v6;
            }
            while ( v6 < (int)hWnda );
          }
          sub_1000100F(lParam);
          goto LABEL_35;
        }
      }
LABEL_39:
      ++v17;
      v16 += 84;
      ++v14;
    }
    while ( v17 < dword_1000680C );
  }
  wsprintfA(v1, "%d", dword_100067BC);
  WritePrivateProfileStringA(aSettings, KeyName, v1, lpFileName);
  sub_1000100F(v1);
  return 1;
}

// Address: 0x100013A1
DWORD __stdcall sub_100013A1(LPCSTR lpKeyName)
{
  sz = 0;
  return GetPrivateProfileStringA(lpAppName, lpKeyName, Default, &sz, 0x2000u, lpFileName);
}

// Address: 0x100013D0
LPSTR __stdcall sub_100013D0(LPCSTR lpKeyName)
{
  if ( sub_100013A1(lpKeyName) != 0 )
    return sub_1000101F(&sz);
  else
    return nullptr;
}

// Address: 0x100013EE
UINT __stdcall sub_100013EE(LPCSTR lpKeyName, INT nDefault)
{
  return GetPrivateProfileIntA(lpAppName, lpKeyName, nDefault, lpFileName);
}

// Address: 0x1000140B
int sub_1000140B()
{
  int result; // eax
  int v1; // ebx
  const CHAR **v2; // esi
  int v3; // eax
  DWORD v4; // edi
  CHAR *v5; // eax
  const CHAR *v6; // eax
  const CHAR *v7; // ecx
  const CHAR *v8; // eax
  DWORD PrivateProfileStringA; // eax
  CHAR *v10; // eax
  const CHAR *v11; // eax
  INT v12; // eax
  const CHAR *v13; // eax
  LPSTR *v14; // edi
  CHAR *v15; // eax
  int v16; // [esp+4h] [ebp-Ch]
  int v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  lpAppName = aSettings;
  dword_100067E4 = (int)sub_100013D0(aTitle);
  dword_100067E8 = (int)sub_100013D0(aCancelbuttonte);
  dword_100067EC = (int)sub_100013D0(aNextbuttontext);
  dword_100067F0 = (int)sub_100013D0(aBackbuttontext);
  dword_1000680C = sub_100013EE(aNumfields, 0);
  nIDDlgItem = sub_100013EE(aRect, 1018);
  bEnable = sub_100013EE(aBackenabled, -1);
  dword_100067F8 = sub_100013EE(aCancelenabled, -1);
  dword_100067FC = sub_100013EE(aCancelshow, -1);
  dword_10006800 = sub_100013EE(aRtl, 0);
  if ( dword_1000680C > 0 )
    dword_10006804 = (int)sub_10001000(168 * dword_1000680C);
  result = dword_1000680C;
  if ( dword_1000680C > 0 )
  {
    v1 = 1;
    v18 = 1201;
    v17 = 1200;
    v16 = 0;
    do
    {
      v2 = (const CHAR **)(v16 + dword_10006804);
      v2[18] = (const CHAR *)v1;
      v2[19] = aHwnd;
      wsprintfA(byte_10006664, "Field %d", v1);
      lpAppName = byte_10006664;
      sub_100013A1(aType);
      v3 = sub_100029F1((int)&off_10004008, &sz);
      v2[8] = (const CHAR *)v3;
      if ( v3 != 0 )
      {
        v2[13] = (const CHAR *)sub_100029F1((int)&off_10004098, &sz);
        sub_100013A1(aFlags);
        v2[13] = (const CHAR *)(sub_10002A2B((int)&off_10004098, &sz) | (unsigned int)v2[13]);
        sub_100013A1(KeyName);
        v2[1] = sub_1000101F(&sz);
        v4 = sub_100013A1(aListitems);
        if ( v4 != 0 )
        {
          v5 = (CHAR *)sub_10001000(v4 + 2);
          v2[3] = v5;
          lstrcpyA(v5, &sz);
          v2[3][v4] = 124;
          v2[3][v4 + 1] = 0;
        }
        v6 = sub_100013D0(aText);
        v7 = v2[8];
        *v2 = v6;
        if ( v7 == (const CHAR *)3 || v7 == (const CHAR *)7 )
          sub_10002A6E(v6);
        v2[2] = sub_100013D0(aRoot);
        v8 = sub_100013D0(aValidatetext);
        v2[5] = v8;
        sub_10002A6E(v8);
        PrivateProfileStringA = GetPrivateProfileStringA(byte_10006664, aFilter, aAllFiles, &sz, 0x2000u, lpFileName);
        if ( PrivateProfileStringA != 0 )
        {
          v10 = (CHAR *)sub_10001000(PrivateProfileStringA + 2);
          v2[4] = v10;
          lstrcpyA(v10, &sz);
          v11 = v2[4];
          while ( *v11 != 0 )
          {
            if ( *v11 == 124 )
              *v11++ = 0;
            else
              v11 = CharNextA(v11);
          }
        }
        v2[9] = (const CHAR *)sub_100013EE(aLeft, 0);
        v2[10] = (const CHAR *)sub_100013EE(aTop, 0);
        v2[11] = (const CHAR *)sub_100013EE(aRight, 0);
        v2[12] = (const CHAR *)sub_100013EE(aBottom, 0);
        v2[6] = (const CHAR *)sub_100013EE(aMinlen, 0);
        v2[7] = (const CHAR *)sub_100013EE(aMaxlen, 0);
        v12 = sub_10001767();
        v2[17] = (const CHAR *)sub_100013EE(aTxtcolor, v12);
        v2[15] = (const CHAR *)v17;
        v13 = v2[8];
        if ( v13 == (const CHAR *)13 || v13 == (const CHAR *)14 )
        {
          v14 = (LPSTR *)(v16 + dword_10006804 + 84);
          v14[15] = (LPSTR)v18;
          v14[8] = (LPSTR)6;
          v14[13] = (LPSTR)((unsigned int)v2[13] & 0x8010000);
          *v14 = sub_1000101F(asc_10004000);
          v15 = (CHAR *)v2[11];
          v14[11] = v15;
          v14[9] = v15 - 15;
          v14[12] = (LPSTR)v2[12];
          v16 += 84;
          v14[10] = (LPSTR)v2[10];
          v2[11] = v14[9] - 3;
          v14[18] = (LPSTR)v1;
          v14[19] = aHwnd2;
          ++dword_1000680C;
          ++v17;
          ++v18;
        }
      }
      v16 += 84;
      result = dword_1000680C;
      ++v1;
      ++v17;
      ++v18;
    }
    while ( v1 - 1 < dword_1000680C );
  }
  return result;
}

// Address: 0x10001767
DWORD sub_10001767()
{
  DWORD result; // eax

  result = GetSysColor(26);
  if ( result == 0 )
    return 16711680;
  return result;
}

// Address: 0x10001779
int __stdcall sub_10001779(int a1, int a2, int a3, IShellFolder *ppshf)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // edi
  WCHAR *v12; // ebx
  ITEMIDLIST *v13; // edi
  int v15; // ecx
  const CHAR *v17; // eax
  HWND v18; // [esp-10h] [ebp-190h]
  CHAR pszPath[260]; // [esp+8h] [ebp-178h] BYREF
  struct tagOFNA v20; // [esp+10Ch] [ebp-74h] BYREF
  CHAR *v21; // [esp+164h] [ebp-1Ch]
  int v22; // [esp+168h] [ebp-18h]
  int v23; // [esp+16Ch] [ebp-14h]
  int (__stdcall *v24)(HWND, int, int, int); // [esp+170h] [ebp-10h]
  int v25; // [esp+174h] [ebp-Ch]
  int v26; // [esp+178h] [ebp-8h]
  DWORD v27; // [esp+17Ch] [ebp-4h] BYREF
  int v28; // [esp+18Ch] [ebp+Ch]

  v4 = sub_1000103E(a2);
  v5 = v4;
  v28 = v4;
  if ( dword_10006680 != 0 || v4 < 0 )
    return 0;
  v6 = *(_DWORD *)(84 * v4 + dword_10006804 + 32);
  if ( v6 == 6 )
  {
    v5 = v4 - 1;
    v28 = v4 - 1;
  }
  else
  {
    if ( v6 <= 6 )
      return 0;
    if ( v6 > 8 )
    {
      if ( v6 <= 9 )
        return 0;
      if ( v6 > 11 )
      {
        if ( v6 <= 14 || v6 > 16 || ppshf != (IShellFolder *)1 )
          return 0;
        goto LABEL_14;
      }
    }
  }
  if ( ppshf != nullptr )
    return 0;
LABEL_14:
  v7 = dword_10006804 + 84 * v5;
  v8 = *(_DWORD *)(v7 + 32);
  if ( v8 >= 7 )
  {
    if ( v8 <= 8 )
    {
      v17 = *(const CHAR **)(v7 + 4);
      if ( *v17 != 0 )
        ShellExecuteA(hWnd, nullptr, v17, nullptr, nullptr, 10);
    }
    else if ( v8 == 13 )
    {
      memset(&v20.hwndOwner, 0, 0x48u);
      v15 = *(_DWORD *)(v7 + 52);
      v20.hwndOwner = hDlg;
      v20.lpstrFilter = *(LPCSTR *)(v7 + 16);
      v20.lpstrFile = pszPath;
      v20.nMaxFile = 260;
      v20.lStructSize = 76;
      v18 = *(HWND *)(v7 + 56);
      v20.Flags = v15 & 0x83806;
      GetWindowTextA(v18, pszPath, 260);
      while ( 1 )
      {
        GetCurrentDirectoryA(0x2000u, &sz);
        if ( (*(_BYTE *)(v7 + 54) & 4) != 0 ? GetSaveFileNameA(&v20) : GetOpenFileNameA(&v20) )
          break;
        if ( pszPath[0] == 0 || CommDlgExtendedError() != 12290 )
          goto LABEL_24;
        pszPath[0] = 0;
      }
      sub_10001087(*(HWND *)(v7 + 56), pszPath);
      SetCurrentDirectoryA(&sz);
    }
    else if ( v8 == 14 )
    {
      v9 = *(_DWORD *)(v7 + 8) == 0;
      v20.dwReserved = (DWORD)hDlg;
      v21 = pszPath;
      v10 = *(_DWORD *)v7;
      v20.FlagsEx = 0;
      v22 = v10;
      v23 = 69;
      v24 = sub_10001097;
      v25 = v5;
      v26 = 0;
      if ( !v9 )
      {
        SHGetDesktopFolder(&ppshf);
        v11 = 2 * lstrlenA(*(LPCSTR *)(v7 + 8)) + 2;
        v12 = (WCHAR *)sub_10001000(v11);
        MultiByteToWideChar(0, 0, *(LPCCH *)(v7 + 8), -1, v12, v11);
        ppshf->lpVtbl->ParseDisplayName(
          ppshf,
          hDlg,
          nullptr,
          v12,
          (ULONG *)&v20.pvReserved,
          (LPITEMIDLIST *)&v27,
          nullptr);
        sub_1000100F(v12);
        v20.FlagsEx = v27;
        ppshf->lpVtbl->Release(ppshf);
        v5 = v28;
      }
      v13 = SHBrowseForFolderA((LPBROWSEINFOA)&v20.dwReserved);
      if ( v13 != nullptr )
      {
        if ( SHGetPathFromIDListA(v13, pszPath) )
          sub_10001087(*(HWND *)(v7 + 56), pszPath);
        CoTaskMemFree(v13);
      }
    }
  }
LABEL_24:
  if ( (*(_BYTE *)(v7 + 52) & 1) != 0 )
  {
    dword_100067BC = v5 + 1;
    SendMessageA(hWnd, 0x408u, 1u, 0);
  }
  return 0;
}

// Address: 0x10001A01
LRESULT __stdcall sub_10001A01(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  int v4; // ebx
  int v5; // esi
  LRESULT v6; // eax
  int v7; // ecx
  int v8; // ecx
  LRESULT v9; // eax
  LRESULT v10; // esi
  CHAR String[1024]; // [esp+Ch] [ebp-404h] BYREF
  int v13; // [esp+40Ch] [ebp-4h]

  if ( Msg != 1032 || wParam != 1 )
    goto LABEL_12;
  v4 = 0;
  if ( dword_100067BC != 0 || (v13 = 0, dword_1000680C <= 0) )
  {
LABEL_11:
    sub_100010DC();
    dword_100067BC = 0;
LABEL_12:
    v9 = CallWindowProcA(dwNewLong, hWnd, Msg, wParam, lParam);
    v10 = v9;
    if ( Msg == 1032 && v9 == 0 )
    {
      if ( wParam == -1 )
        ++dword_10006684;
      if ( wParam == 120 )
        ++dword_100067B8;
      ++dword_10006680;
      PostMessageA(hDlg, 0x10u, 0, 0);
    }
    return v10;
  }
  while ( 1 )
  {
    v5 = v4 + dword_10006804;
    if ( *(int *)(v4 + dword_10006804 + 32) >= 12 )
    {
      v6 = SendMessageA(*(HWND *)(v5 + 56), 0xEu, 0, 0);
      v7 = *(_DWORD *)(v5 + 28);
      if ( v7 > 0 && v6 > v7 )
        break;
      v8 = *(_DWORD *)(v5 + 24);
      if ( v8 > 0 && v6 < v8 )
        break;
    }
    ++v13;
    v4 += 84;
    if ( v13 >= dword_1000680C )
      goto LABEL_11;
  }
  if ( *(_DWORD *)(v5 + 20) != 0 )
  {
    GetWindowTextA(::hWnd, String, 1024);
    MessageBoxA(hDlg, *(LPCSTR *)(v5 + 20), String, 0x30u);
  }
  sub_10001071(*(_DWORD *)(v5 + 56));
  return 0;
}

// Address: 0x10001B23
INT_PTR __stdcall DialogFunc(HWND a1, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  int v5; // eax
  LONG v6; // eax
  int v7; // ecx
  UINT v8; // eax
  struct tagRECT rc; // [esp+4h] [ebp-10h] BYREF
  WPARAM wParama; // [esp+24h] [ebp+10h]

  if ( Msg == 43 )
  {
    v5 = sub_1000103E(*(_DWORD *)(lParam + 4));
    if ( v5 >= 0 )
    {
      rc = *(struct tagRECT *)(lParam + 28);
      wParama = dword_10006804 + 84 * v5;
      DrawTextA(*(HDC *)(lParam + 24), *(LPCSTR *)wParama, -1, &rc, 0x414u);
      v6 = *(_DWORD *)(lParam + 36);
      rc.right += 2;
      if ( rc.right >= v6 )
        rc.right = v6;
      if ( dword_10006800 != 0 )
      {
        v7 = v6 - rc.right;
        rc.right = v6;
        rc.left += v7;
      }
      if ( (*(_BYTE *)(lParam + 12) & 1) != 0 )
      {
        if ( GetWindowLongA(*(HWND *)(lParam + 20), -21) == 0 )
          SetTextColor(*(HDC *)(lParam + 24), *(_DWORD *)(wParama + 68));
        v8 = dword_10006800 != 0 ? 0x20000 : 0;
        LOBYTE(v8) = 21;
        DrawTextA(*(HDC *)(lParam + 24), *(LPCSTR *)wParama, -1, &rc, v8);
      }
      if ( (*(_BYTE *)(lParam + 16) & 0x10) != 0 && (*(_BYTE *)(lParam + 12) & 1) != 0
        || (*(_BYTE *)(lParam + 12) & 4) != 0 )
      {
        DrawFocusRect(*(HDC *)(lParam + 24), &rc);
      }
      *(struct tagRECT *)(wParama + 36) = rc;
    }
  }
  else if ( Msg == 273 )
  {
    sub_10001779((int)a1, (unsigned __int16)wParam, lParam, (IShellFolder *)HIWORD(wParam));
  }
  else if ( Msg > 0x132 && (Msg <= 0x136 || Msg == 312) )
  {
    return SendMessageA(hWnd, Msg, wParam, lParam);
  }
  return 0;
}

// Address: 0x10001C6D
__int16 __stdcall sub_10001C6D(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  int DlgCtrlID; // eax
  int v5; // eax
  __int16 result; // ax
  int v7; // esi
  WPARAM v8; // eax
  int v9; // eax
  HCURSOR CursorA; // eax
  struct tagPOINT Points; // [esp+8h] [ebp-8h] BYREF

  DlgCtrlID = GetDlgCtrlID(hWnd);
  v5 = sub_1000103E(DlgCtrlID);
  if ( v5 < 0 )
    return 0;
  v7 = dword_10006804 + 84 * v5;
  if ( Msg == 32 )
  {
    if ( (HWND)wParam != hWnd )
      return CallWindowProcA(*(WNDPROC *)(v7 + 64), hWnd, Msg, wParam, lParam);
    if ( (_WORD)lParam != 1 )
      return CallWindowProcA(*(WNDPROC *)(v7 + 64), hWnd, Msg, wParam, lParam);
    CursorA = LoadCursorA(nullptr, (LPCSTR)0x7F89);
    if ( CursorA == nullptr )
      return CallWindowProcA(*(WNDPROC *)(v7 + 64), hWnd, Msg, wParam, lParam);
    SetCursor(CursorA);
    return 1;
  }
  else if ( Msg == 132 )
  {
    Points.y = SHIWORD(lParam);
    Points.x = (__int16)lParam;
    MapWindowPoints(nullptr, hWnd, &Points, 1u);
    return PtInRect((const RECT *)(v7 + 36), Points);
  }
  else
  {
    if ( Msg != 135 )
    {
      if ( Msg == 244 )
      {
        v8 = wParam;
        if ( (wParam & 0xF) == 1 )
          *(_BYTE *)(v7 + 53) |= 4u;
        else
          *(_BYTE *)(v7 + 53) &= ~4u;
        LOBYTE(v8) = wParam & 0xF0 | 0xB;
        wParam = v8;
      }
      return CallWindowProcA(*(WNDPROC *)(v7 + 64), hWnd, Msg, wParam, lParam);
    }
    v9 = -((*(_DWORD *)(v7 + 52) & 0x400) != 0);
    LOBYTE(v9) = v9 & 0xF0;
    result = v9 + 32;
    HIBYTE(result) |= 0x20u;
  }
  return result;
}

// Address: 0x10001D68
LRESULT __stdcall sub_10001D68(HWND hWnd, HGLOBAL hMem, WPARAM wParam, LPARAM lParam)
{
  int DlgCtrlID; // eax
  int v5; // eax
  int v7; // esi
  HANDLE ClipboardData; // eax
  const CHAR *v9; // eax
  const CHAR *v10; // edi
  int v11; // esi
  HGLOBAL v12; // eax
  void *v13; // ebx
  int v14; // edx
  char *v15; // ecx
  char v16; // al
  HGLOBAL hMema; // [esp+10h] [ebp+Ch]

  DlgCtrlID = GetDlgCtrlID(hWnd);
  v5 = sub_1000103E(DlgCtrlID);
  if ( v5 < 0 )
    return 0;
  v7 = dword_10006804 + 84 * v5;
  if ( hMem != (HGLOBAL)770 || !OpenClipboard(hWnd) )
    return CallWindowProcA(*(WNDPROC *)(v7 + 80), hWnd, (UINT)hMem, wParam, lParam);
  ClipboardData = GetClipboardData(1u);
  hMema = ClipboardData;
  if ( ClipboardData != nullptr )
  {
    v9 = (const CHAR *)GlobalLock(ClipboardData);
    v10 = v9;
    if ( v9 != nullptr )
    {
      v11 = lstrlenA(v9);
      v12 = sub_10001000(v11 + 1);
      v13 = v12;
      if ( v12 != nullptr )
      {
        v14 = 0;
        if ( v11 > 0 )
        {
          v15 = (char *)v12;
          do
          {
            v16 = v10[v14];
            if ( v16 >= 48 && v16 <= 57 )
              *v15++ = v16;
            *v15 = 0;
            ++v14;
          }
          while ( v14 < v11 );
        }
        SendMessageA(hWnd, 0xC2u, 1u, (LPARAM)v13);
        sub_1000100F(v13);
      }
      GlobalUnlock(hMema);
    }
  }
  CloseClipboard();
  return 0;
}

// Address: 0x10001E49
int sub_10001E49()
{
  HWND v0; // ebx
  const CHAR *v1; // eax
  HMENU SystemMenu; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  char *v6; // ecx
  DWORD v7; // eax
  LONG right; // eax
  int v9; // eax
  const CHAR *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  HWND Window; // eax
  HWND v17; // edi
  int v18; // eax
  void *ImageA; // eax
  HMODULE ModuleHandleA; // eax
  bool v21; // zf
  int *v22; // edi
  HRGN RectRgn; // eax
  int v24; // esi
  int v25; // esi
  int j; // edi
  int v27; // ecx
  int k; // eax
  const CHAR *v29; // ecx
  LPSTR v30; // eax
  LPSTR v31; // esi
  _BYTE *v32; // eax
  LPSTR i; // esi
  CHAR v34; // al
  _BYTE *v35; // eax
  LRESULT v36; // eax
  WPARAM v37; // eax
  UINT v39; // [esp-4h] [ebp-138h]
  int v40; // [esp-4h] [ebp-138h]
  CHAR AppName[64]; // [esp+Ch] [ebp-128h] BYREF
  CHAR String[64]; // [esp+4Ch] [ebp-E8h] BYREF
  struct tagBITMAPINFO bmi; // [esp+8Ch] [ebp-A8h] BYREF
  struct tagRECT v44; // [esp+B8h] [ebp-7Ch] BYREF
  char pv[4]; // [esp+C8h] [ebp-6Ch] BYREF
  int x2; // [esp+CCh] [ebp-68h]
  UINT cLines; // [esp+D0h] [ebp-64h]
  HWND hDlg; // [esp+E0h] [ebp-54h]
  WPARAM wParam; // [esp+E4h] [ebp-50h]
  int v50; // [esp+E8h] [ebp-4Ch]
  HGDIOBJ ho; // [esp+ECh] [ebp-48h]
  BOOL v52; // [esp+F0h] [ebp-44h]
  int v53; // [esp+F4h] [ebp-40h]
  int v54; // [esp+F8h] [ebp-3Ch]
  HRGN hrgnDst; // [esp+FCh] [ebp-38h]
  int v56; // [esp+100h] [ebp-34h]
  HDC hdc; // [esp+104h] [ebp-30h]
  HANDLE h; // [esp+108h] [ebp-2Ch]
  CHAR v59; // [esp+10Fh] [ebp-25h]
  HWND hWnd; // [esp+110h] [ebp-24h]
  struct tagRECT Rect; // [esp+114h] [ebp-20h] BYREF
  int x1; // [esp+124h] [ebp-10h]
  DWORD dwExStyle; // [esp+128h] [ebp-Ch]
  LPVOID lpvBits; // [esp+12Ch] [ebp-8h]
  DWORD dwStyle; // [esp+130h] [ebp-4h]

  v0 = ::hWnd;
  hDlg = ::hWnd;
  dword_10006684 = 0;
  dword_100067B8 = 0;
  if ( ::hWnd == nullptr )
  {
    sub_10002AC6(nullptr);
    sub_10002B06(aErrorFindingMa);
    return 1;
  }
  if ( dword_10006818 == 0
    || *(_DWORD *)dword_10006818 == 0
    || (v1 = (const CHAR *)(*(_DWORD *)dword_10006818 + 4), lpFileName = v1, v1 == nullptr)
    || *v1 == 0
    || sub_1000140B() == 0 )
  {
    sub_10002AC6(nullptr);
    sub_10002B06(aErrorFindingCo);
    return 1;
  }
  hWnd = GetDlgItem(v0, nIDDlgItem);
  if ( hWnd == nullptr )
  {
    sub_10002AC6(nullptr);
    sub_10002B06(aErrorFindingCh);
    return 1;
  }
  dword_100067CC = GetDlgItem(v0, 2);
  ::wParam = (WPARAM)GetDlgItem(v0, 1);
  dword_100067D4 = GetDlgItem(v0, 3);
  sub_10001087(dword_100067CC, (const CHAR *)dword_100067E8);
  sub_10001087((HWND)::wParam, (const CHAR *)dword_100067EC);
  sub_10001087(dword_100067D4, (const CHAR *)dword_100067F0);
  if ( bEnable != -1 )
    EnableWindow(dword_100067D4, bEnable);
  if ( dword_100067F8 != -1 )
  {
    EnableWindow(dword_100067CC, dword_100067F8);
    v39 = !dword_100067F8;
    SystemMenu = GetSystemMenu(v0, false);
    EnableMenuItem(SystemMenu, 0xF060u, v39);
  }
  if ( dword_100067FC != -1 )
    dword_100066AC = ShowWindow(dword_100067CC, dword_100067FC != 0 ? 8 : 0);
  wParam = SendMessageA(v0, 0x31u, 0, 0);
  dword_10006680 = 1;
  ::hDlg = CreateDialogParamA(hInst, (LPCSTR)0x65, v0, DialogFunc, 0);
  if ( ::hDlg == nullptr )
  {
    sub_10002AC6(nullptr);
    sub_10002B06(aErrorCreatingD);
    return 1;
  }
  GetWindowRect(hWnd, &Rect);
  MapWindowPoints(nullptr, v0, (LPPOINT)&Rect, 2u);
  v54 = Rect.right - Rect.left;
  v50 = Rect.bottom - Rect.top;
  SetWindowPos(::hDlg, nullptr, Rect.left, Rect.top, Rect.right - Rect.left, Rect.bottom - Rect.top, 0x14u);
  SendMessageA(::hDlg, 0x30u, wParam, 1);
  v53 = 0;
  v52 = false;
  v56 = 0;
  if ( dword_1000680C <= 0 )
    goto LABEL_128;
  do
  {
    v3 = dword_10006804 + 84 * v56;
    v4 = *(_DWORD *)(v3 + 32);
    if ( v4 < 1 || v4 > 16 )
      goto LABEL_126;
    v5 = 5 * v4;
    if ( dword_10006800 != 0 )
    {
      v6 = (char *)dword_10004164[v5];
      v7 = dword_1000416C[v5];
    }
    else
    {
      v6 = (&off_10004160)[v5];
      v7 = dword_10004168[v5];
    }
    Rect.left = *(_DWORD *)(v3 + 36);
    Rect.top = *(_DWORD *)(v3 + 40);
    dwExStyle = v7;
    Rect.right = *(_DWORD *)(v3 + 44);
    dwStyle = (DWORD)v6;
    Rect.bottom = *(_DWORD *)(v3 + 48);
    MapDialogRect(hDlg, &Rect);
    if ( *(int *)(v3 + 36) < 0 )
      Rect.left += v54;
    if ( *(int *)(v3 + 44) < 0 )
      Rect.right += v54;
    if ( *(int *)(v3 + 40) < 0 )
      Rect.top += v50;
    if ( *(int *)(v3 + 48) < 0 )
      Rect.bottom += v50;
    if ( dword_10006800 != 0 )
    {
      right = Rect.right;
      Rect.right = v54 - Rect.left;
      Rect.left = v54 - right;
    }
    v9 = *(_DWORD *)(v3 + 32);
    v10 = *(const CHAR **)v3;
    if ( v9 > 14 )
    {
      v12 = v9 - 15;
      if ( v12 != 0 )
      {
        if ( v12 != 1 )
          goto LABEL_57;
        v13 = *(_DWORD *)(v3 + 52) & 0x809;
      }
      else
      {
        v10 = *(const CHAR **)(v3 + 4);
        v14 = *(_DWORD *)(v3 + 52) & 0x4000;
        BYTE1(v14) |= 0x80u;
        v13 = v14 >> 14;
      }
      dwStyle |= v13;
      goto LABEL_57;
    }
    if ( v9 >= 12 )
    {
      v11 = *(_DWORD *)(v3 + 52);
      if ( (v11 & 0x40) != 0 )
        dwStyle |= 0x20u;
      if ( (v11 & 0x80u) != 0 )
        BYTE1(dwStyle) |= 0x20u;
      if ( (v11 & 0x400) != 0 )
        BYTE1(dwStyle) |= 0x10u;
      if ( (v11 & 0x10) != 0 )
        BYTE1(dwStyle) |= 8u;
      v10 = *(const CHAR **)(v3 + 4);
      if ( (v11 & 0x100) == 0 )
        goto LABEL_57;
      dwStyle |= 0x44u;
      if ( (v11 & 0x100200) == 0 )
        LOBYTE(dwStyle) = dwStyle & 0x7F;
      sub_10002A6E(v10);
      if ( (*(_BYTE *)(v3 + 52) & 0x10) == 0 )
        goto LABEL_57;
LABEL_51:
      v10 = nullptr;
      goto LABEL_57;
    }
    if ( v9 >= 4 )
    {
      if ( v9 > 5 )
      {
        if ( v9 > 9 )
          dwStyle ^= *(_DWORD *)(v3 + 52) & 0x20;
        goto LABEL_57;
      }
      goto LABEL_51;
    }
LABEL_57:
    v15 = *(_DWORD *)(v3 + 52);
    dwStyle |= v15 & 0x8320000;
    if ( (v15 & 0x10000) != 0 )
      BYTE2(dwStyle) &= ~1u;
    Window = CreateWindowExA(
               dwExStyle,
               (&lpClassName)[5 * *(_DWORD *)(v3 + 32)],
               v10,
               dwStyle,
               Rect.left,
               Rect.top,
               Rect.right - Rect.left,
               Rect.bottom - Rect.top,
               ::hDlg,
               *(HMENU *)(v3 + 60),
               hInst,
               nullptr);
    v40 = *(_DWORD *)(v3 + 72);
    v17 = Window;
    hWnd = Window;
    *(_DWORD *)(v3 + 56) = Window;
    wsprintfA(AppName, "Field %d", v40);
    wsprintfA(String, "%d", v17);
    WritePrivateProfileStringA(AppName, *(LPCSTR *)(v3 + 76), String, lpFileName);
    if ( v17 != nullptr )
    {
      SendMessageA(v17, 0x30u, wParam, 1);
      v18 = *(_DWORD *)(v3 + 32);
      if ( v18 > 11 )
      {
        if ( v18 <= 14 )
        {
          SendMessageA(v17, 0xC5u, *(_DWORD *)(v3 + 28), 0);
          if ( (dwStyle & 0x2000) != 0 )
          {
            *(_DWORD *)(v3 + 80) = GetWindowLongA(v17, -4);
            SetWindowLongA(v17, -4, (LONG)sub_10001D68);
          }
        }
        else if ( v18 <= 16 )
        {
          v29 = *(const CHAR **)(v3 + 12);
          if ( v29 != nullptr )
          {
            if ( v18 == 15 )
            {
              hWnd = (HWND)323;
              dwExStyle = 344;
              hdc = (HDC)334;
            }
            else
            {
              hWnd = (HWND)384;
              dwExStyle = 418;
              hdc = (HDC)390;
            }
            v30 = sub_1000101F(v29);
            v21 = *v30 == 0;
            ho = v30;
            v31 = v30;
            lpvBits = v30;
            if ( !v21 )
            {
              do
              {
                if ( *v31 == 124 )
                {
                  v32 = lpvBits;
                  *v31 = 0;
                  if ( *v32 != 0 )
                    SendMessageA(v17, (UINT)hWnd, 0, (LPARAM)v32);
                  lpvBits = ++v31;
                }
                else
                {
                  v31 = CharNextA(v31);
                }
              }
              while ( *v31 != 0 );
            }
            sub_1000100F(ho);
            if ( *(_DWORD *)(v3 + 4) != 0 )
            {
              if ( (*(_WORD *)(v3 + 52) & 0x808) != 0 && dwExStyle == 418 )
              {
                SendMessageA(v17, 0x185u, 0, -1);
                for ( i = *(LPSTR *)(v3 + 4); ; ++i )
                {
                  lpvBits = i;
                  while ( 1 )
                  {
                    v34 = *i;
                    v59 = *i;
                    if ( v59 == 124 || v34 == 0 )
                      break;
                    i = CharNextA(i);
                  }
                  v35 = lpvBits;
                  *i = 0;
                  if ( *v35 != 0 )
                  {
                    v36 = SendMessageA(v17, 0x1A2u, 0xFFFFFFFF, (LPARAM)v35);
                    if ( v36 != -1 )
                      SendMessageA(v17, 0x185u, 1u, v36);
                  }
                  if ( v59 == 0 )
                    break;
                }
              }
              else
              {
                v37 = SendMessageA(v17, dwExStyle, 0xFFFFFFFF, *(_DWORD *)(v3 + 4));
                if ( v37 != -1 )
                  SendMessageA(v17, (UINT)hdc, v37, 0);
              }
            }
          }
        }
      }
      else if ( v18 >= 10 )
      {
        if ( **(_BYTE **)(v3 + 4) == 49 )
          SendMessageA(v17, 0xF1u, 1u, 0);
      }
      else if ( v18 >= 4 )
      {
        if ( v18 <= 5 )
        {
          dwExStyle = v18 != 5;
          if ( *(_DWORD *)v3 != 0 )
          {
            ImageA = LoadImageA(
                       hInst,
                       *(LPCSTR *)v3,
                       dwExStyle,
                       (*(_DWORD *)(v3 + 52) & 0x8000) != 0 ? Rect.right - Rect.left : 0,
                       (*(_DWORD *)(v3 + 52) & 0x8000) != 0 ? Rect.bottom - Rect.top : 0,
                       0x10u);
            *(_DWORD *)(v3 + 68) = ImageA;
          }
          else
          {
            ModuleHandleA = GetModuleHandleA(nullptr);
            ImageA = LoadIconA(ModuleHandleA, (LPCSTR)0x67);
          }
          v21 = (*(_BYTE *)(v3 + 52) & 0x20) == 0;
          h = ImageA;
          if ( !v21 && dwExStyle == 0 && GetObjectA(h, 24, pv) != 0 )
          {
            lpvBits = sub_10001000(4 * x2 * cLines);
            if ( lpvBits != nullptr )
            {
              bmi.bmiHeader.biHeight = cLines;
              bmi.bmiHeader.biBitCount = 32;
              bmi.bmiHeader.biCompression = 0;
              bmi.bmiHeader.biPlanes = 1;
              bmi.bmiHeader.biSize = 40;
              bmi.bmiHeader.biWidth = x2;
              bmi.bmiHeader.biClrUsed = 0;
              bmi.bmiHeader.biClrImportant = 0;
              hdc = CreateCompatibleDC(nullptr);
              SelectObject(hdc, h);
              v22 = (int *)lpvBits;
              GetDIBits(hdc, (HBITMAP)h, 0, cLines, lpvBits, &bmi, 0);
              RectRgn = CreateRectRgn(0, 0, x2, cLines);
              v24 = *v22;
              hrgnDst = RectRgn;
              v25 = v24 & 0xFFFFFF;
              for ( j = cLines - 1; j >= 0; --j )
              {
                v27 = x2;
                for ( x1 = 0; x1 < x2; v27 = x2 )
                {
                  if ( (*(_DWORD *)lpvBits & 0xFFFFFF) == v25 )
                  {
                    for ( k = x1; x1 < v27; ++x1 )
                    {
                      if ( (*(_DWORD *)lpvBits & 0xFFFFFF) != v25 )
                        break;
                      lpvBits = (char *)lpvBits + 4;
                    }
                    ho = CreateRectRgn(k, j, x1, j + 1);
                    CombineRgn(hrgnDst, hrgnDst, (HRGN)ho, 3);
                    DeleteObject(ho);
                  }
                  else
                  {
                    lpvBits = (char *)lpvBits + 4;
                    ++x1;
                  }
                }
              }
              SetWindowRgn(hWnd, hrgnDst, true);
              DeleteObject(hrgnDst);
              DeleteObject(hdc);
              sub_1000100F(lpvBits);
              v17 = hWnd;
            }
          }
          SendMessageA(v17, 0x172u, dwExStyle, (LPARAM)h);
          if ( *(_DWORD *)(v3 + 32) == 5 )
          {
            GetClientRect(v17, &v44);
            v44.left = (Rect.left + Rect.right - v44.right) / 2;
            v44.top = (Rect.top + Rect.bottom - v44.bottom) / 2;
            SetWindowPos(v17, nullptr, v44.left, v44.top, 0, 0, 0x15u);
          }
        }
        else if ( v18 == 7 )
        {
          *(_DWORD *)(v3 + 64) = SetWindowLongA(v17, -4, (LONG)sub_10001C6D);
        }
      }
      if ( !v52 && (dwStyle & 0x8010000) == 0x10000 && *(int *)(v3 + 32) >= 10 )
      {
        v52 = (*(_BYTE *)(v3 + 55) & 0x10) != 0;
        if ( v53 == 0 || v52 )
        {
          v53 = 1;
          sub_10001071((WPARAM)v17);
        }
      }
      if ( (*(_DWORD *)(v3 + 52) & 0x110) == 0x110 )
        sub_10001087(v17, *(const CHAR **)(v3 + 4));
    }
LABEL_126:
    ++v56;
  }
  while ( v56 < dword_1000680C );
  if ( v53 == 0 )
LABEL_128:
    sub_10001071(::wParam);
  sub_10001087(hDlg, (const CHAR *)dword_100067E4);
  dword_100067DC = *(_DWORD *)dword_10006818;
  *(_DWORD *)dword_10006818 = **(_DWORD **)dword_10006818;
  wsprintfA(byte_10006688, "%d", ::hDlg);
  sub_10002B06(byte_10006688);
  return 0;
}

// Address: 0x1000274C
int sub_1000274C()
{
  int v0; // edi
  int v1; // esi
  int i; // ebx
  const CHAR *v3; // eax
  int v5; // [esp+10h] [ebp-20h]
  struct tagMSG Msg; // [esp+14h] [ebp-1Ch] BYREF

  dwNewLong = (WNDPROC)SetWindowLongA(hWnd, 4, (LONG)sub_10001A01);
  SendMessageA(hWnd, 0x40Du, (WPARAM)hDlg, 0);
  ShowWindow(hDlg, 8);
  dword_100067BC = 0;
  dword_10006680 = 0;
  do
  {
    GetMessageA(&Msg, nullptr, 0, 0);
    if ( !IsDialogMessageA(hDlg, &Msg) && !IsDialogMessageA(hWnd, &Msg) )
    {
      TranslateMessage(&Msg);
      DispatchMessageA(&Msg);
    }
  }
  while ( dword_10006680 == 0 );
  if ( dword_100067B8 == 0 )
    sub_100010DC();
  SetWindowLongA(hWnd, 4, (LONG)dwNewLong);
  DestroyWindow(hDlg);
  if ( dword_100067FC != -1 )
    ShowWindow(dword_100067CC, dword_100066AC != 0 ? 8 : 0);
  sub_1000100F((void *)dword_100067DC);
  sub_1000100F((void *)dword_100067E4);
  sub_1000100F((void *)dword_100067E8);
  sub_1000100F((void *)dword_100067EC);
  sub_1000100F((void *)dword_100067F0);
  if ( dword_1000680C != 0 )
  {
    v5 = dword_1000680C;
    v0 = 84 * dword_1000680C;
    do
    {
      v0 -= 84;
      v1 = v0 + dword_10006804;
      for ( i = 6; i != 0; sub_1000100F(*(void **)(v1 + 4 * i)) )
        --i;
      if ( *(_DWORD *)(v1 + 32) == 5 )
        DeleteObject(*(HGDIOBJ *)(v1 + 68));
      if ( *(_DWORD *)(v1 + 32) == 4 )
        DestroyIcon(*(HICON *)(v1 + 68));
      --v5;
    }
    while ( v5 != 0 );
  }
  sub_1000100F((void *)dword_10006804);
  if ( dword_100067B8 != 0 )
  {
    v3 = aCancel;
  }
  else
  {
    v3 = aBack;
    if ( dword_10006684 == 0 )
      v3 = aSuccess;
  }
  return sub_10002B06(v3);
}

// Address: 0x100028FF
int __cdecl dialog(HWND a1, int a2, int a3, int a4)
{
  int result; // eax

  hWnd = a1;
  iMaxLength = a2;
  dword_10006818 = a4;
  dword_1000681C = a3;
  if ( dword_100066A8 != 0 )
    return sub_10002B06(aError);
  result = sub_10001E49();
  if ( result == 0 )
  {
    sub_10002AC6(nullptr);
    return sub_1000274C();
  }
  return result;
}

// Address: 0x1000294B
int __cdecl initDialog(HWND a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  hWnd = a1;
  iMaxLength = a2;
  dword_10006818 = a4;
  dword_1000681C = a3;
  (*(void (__stdcall **)(HINSTANCE, void *))(a5 + 12))(hInst, &loc_100029A5);
  if ( dword_100066A8 != 0 )
    return sub_10002B06(aError);
  result = sub_10001E49();
  if ( result == 0 )
    ++dword_100066A8;
  return result;
}

// Address: 0x100029A8
int __cdecl show(int a1, int a2, int a3, int a4)
{
  iMaxLength = a2;
  dword_10006818 = a4;
  dword_1000681C = a3;
  if ( dword_100066A8 == 0 )
    return sub_10002B06(aError);
  --dword_100066A8;
  return sub_1000274C();
}

// Address: 0x100029E2
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  hInst = hinstDLL;
  return true;
}

// Address: 0x100029F1
LPCSTR __stdcall sub_100029F1(LPCSTR *a1, LPCSTR lpString1)
{
  int v2; // ebx
  LPCSTR *v3; // eax
  LPCSTR *v4; // esi

  v2 = 0;
  if ( *a1 == nullptr )
    return nullptr;
  v3 = a1;
  v4 = a1;
  while ( lstrcmpiA(lpString1, *v3) != 0 )
  {
    v4 += 2;
    ++v2;
    v3 = v4;
    if ( *v4 == nullptr )
      return nullptr;
  }
  return a1[2 * v2 + 1];
}

// Address: 0x10002A2B
int __stdcall sub_10002A2B(LPCSTR *a1, CHAR *lpsz)
{
  int v3; // ebp
  const CHAR *v4; // edi
  CHAR v5; // bl

  v3 = 0;
  while ( 1 )
  {
    v4 = lpsz;
    while ( 1 )
    {
      v5 = *lpsz;
      if ( *lpsz == 124 || v5 == 0 )
        break;
      lpsz = CharNextA(lpsz);
    }
    *lpsz = 0;
    v3 |= (unsigned int)sub_100029F1(a1, v4);
    *lpsz = v5;
    if ( v5 == 0 )
      break;
    ++lpsz;
  }
  return v3;
}

// Address: 0x10002A6E
void __stdcall sub_10002A6E(CHAR *lpsz)
{
  LPCSTR v1; // esi
  CHAR *v2; // edi
  char v3; // al
  LPSTR v4; // eax

  v1 = lpsz;
  if ( lpsz != nullptr )
  {
    v2 = lpsz;
    while ( 1 )
    {
      if ( *v1 == 0 )
      {
        *v2 = 0;
        return;
      }
      if ( *v1 != 92 )
        goto LABEL_12;
      v3 = v1[1];
      switch ( v3 )
      {
        case 't':
          v3 = 9;
          goto LABEL_11;
        case 'n':
          v3 = 10;
          goto LABEL_11;
        case 'r':
          v3 = 13;
          goto LABEL_11;
        case '\\':
LABEL_11:
          *v2++ = v3;
          v1 += 2;
          break;
        default:
LABEL_12:
          v4 = CharNextA(v1);
          while ( v1 < v4 )
            *v2++ = *v1++;
          break;
      }
    }
  }
}

// Address: 0x10002AC6
int __stdcall sub_10002AC6(LPSTR lpString1)
{
  _DWORD *v1; // eax
  CHAR *v2; // esi

  v1 = (_DWORD *)dword_10006818;
  if ( dword_10006818 == 0 )
    return 1;
  v2 = *(CHAR **)dword_10006818;
  if ( *(_DWORD *)dword_10006818 == 0 )
    return 1;
  if ( lpString1 != nullptr )
  {
    lstrcpyA(lpString1, v2 + 4);
    v1 = (_DWORD *)dword_10006818;
  }
  *v1 = *(_DWORD *)v2;
  GlobalFree(v2);
  return 0;
}

// Address: 0x10002B06
void __stdcall sub_10002B06(LPCSTR lpString2)
{
  CHAR *v1; // esi

  if ( dword_10006818 != 0 )
  {
    v1 = (CHAR *)GlobalAlloc(0x40u, iMaxLength + 8);
    lstrcpynA(v1 + 4, lpString2, iMaxLength);
    *(_DWORD *)v1 = *(_DWORD *)dword_10006818;
    *(_DWORD *)dword_10006818 = v1;
  }
}

