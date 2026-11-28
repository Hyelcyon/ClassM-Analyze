// Decompiled from nsDialogs.dll (ClassM_3.0.500\ClassM_x64_unpacked\$PLUGINSDIR\nsDialogs.dll)

// Address: 0x10001021
void __cdecl SelectFolderDialog(HWND a1, int a2, int a3, int a4)
{
  ITEMIDLIST *v4; // esi
  CHAR String1[1024]; // [esp+4h] [ebp-628h] BYREF
  CHAR v6[260]; // [esp+404h] [ebp-228h] BYREF
  CHAR pszPath[260]; // [esp+508h] [ebp-124h] BYREF
  struct _browseinfoA bi; // [esp+60Ch] [ebp-20h] BYREF

  iMaxLength = a2;
  dword_100050E0 = a4;
  dword_100050E4 = a3;
  if ( sub_10001E40(String1, 260) != 0 )
    goto LABEL_4;
  if ( sub_10001E40(v6, 1024) != 0 )
    goto LABEL_4;
  bi.pidlRoot = nullptr;
  bi.hwndOwner = a1;
  bi.pszDisplayName = pszPath;
  bi.iImage = 0;
  bi.lpszTitle = String1;
  bi.ulFlags = 69;
  bi.lParam = (LPARAM)v6;
  bi.lpfn = (BFFCALLBACK)sub_10001000;
  v4 = SHBrowseForFolderA(&bi);
  if ( v4 == nullptr )
  {
LABEL_4:
    sub_10001E8E(aError);
  }
  else
  {
    if ( SHGetPathFromIDListA(v4, pszPath) )
      sub_10001E8E(pszPath);
    else
      sub_10001E8E(aError);
    CoTaskMemFree(v4);
  }
}

// Address: 0x100010EF
BOOL __cdecl SelectFileDialog(HWND a1, int a2, int a3, int a4)
{
  BOOL v4; // edi
  DWORD FileAttributesA; // eax
  LPSTR v6; // eax
  BOOL SaveFileNameA; // eax
  BOOL OpenFileNameA; // eax
  struct tagOFNA var54; // [esp+Ch] [ebp-54h] BYREF

  memset(&var54.hwndOwner, 0, 0x48u);
  iMaxLength = a2;
  dword_100050E0 = a4;
  dword_100050E4 = a3;
  var54.hwndOwner = a1;
  var54.lStructSize = 76;
  var54.lpstrFilter = &sz;
  var54.lpstrFile = &FileName;
  var54.nMaxFile = 1024;
  var54.Flags = 532480;
  sub_10001E40((LPSTR)&var54.pvReserved, 5);
  sub_10001E40(&FileName, 1024);
  sub_10001E40(&sz, 1024);
  v4 = lstrcmpiA((LPCSTR)&var54.pvReserved, String2) == 0;
  FileAttributesA = GetFileAttributesA(&FileName);
  if ( FileAttributesA != -1 && (FileAttributesA & 0x10) != 0 )
  {
    lstrcpyA(String1, &FileName);
    FileName = 0;
    var54.lpstrInitialDir = String1;
  }
  if ( sz == 0 )
    lstrcpyA(&sz, aAllFiles);
  v6 = &sz;
  if ( sz != 0 )
  {
    do
    {
      if ( *v6 == 124 )
        *v6++ = 0;
      else
        v6 = CharNextA(v6);
    }
    while ( *v6 != 0 );
  }
  v6[1] = 0;
  GetCurrentDirectoryA(0x400u, PathName);
  if ( v4 )
    SaveFileNameA = GetSaveFileNameA(&var54);
  else
    SaveFileNameA = GetOpenFileNameA(&var54);
  if ( SaveFileNameA
    || CommDlgExtendedError() == 12290
    && ((FileName = 0, !v4) ? (OpenFileNameA = GetOpenFileNameA(&var54)) : (OpenFileNameA = GetSaveFileNameA(&var54)),
        OpenFileNameA) )
  {
    sub_10001E8E(&FileName);
  }
  else
  {
    sub_10001E8E(byte_10004098);
  }
  return SetCurrentDirectoryA(PathName);
}

// Address: 0x10001252
int __stdcall sub_10001252(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  LONG bottom; // edi
  LONG right; // ebx
  CHAR String1[1024]; // [esp+Ch] [ebp-414h] BYREF
  struct tagRECT Rect; // [esp+40Ch] [ebp-14h] BYREF
  int nNumber; // [esp+41Ch] [ebp-4h]

  GetClientRect(hDlg, &Rect);
  bottom = Rect.bottom;
  right = Rect.right;
  nNumber = Rect.bottom;
  if ( sub_10001E40(String1, 1024) != 0 )
    return 1;
  *a1 = sub_10001329(String1, right, 0);
  if ( sub_10001E40(String1, 1024) != 0 )
    return 1;
  *a2 = sub_10001329(String1, bottom, 1);
  if ( sub_10001E40(String1, 1024) != 0 )
    return 1;
  *a3 = sub_10001329(String1, right, 0);
  if ( sub_10001E40(String1, 1024) != 0 )
    return 1;
  *a4 = sub_10001329(String1, nNumber, 1);
  sub_10001E24(a1, *a3, right);
  return 0;
}

// Address: 0x10001329
int __stdcall sub_10001329(LPCSTR lpString, int nNumber, int a3)
{
  int v3; // eax
  CHAR v4; // bl
  int result; // eax
  int v6; // esi
  LONG top; // ecx
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  v3 = lstrlenA(lpString);
  v4 = *CharPrevA(lpString, &lpString[v3]);
  result = sub_10001ED3(lpString);
  v6 = result;
  if ( v4 == 37 )
  {
    if ( result < 0 )
      v6 = result + 100;
    return MulDiv(nNumber, v6, 100);
  }
  else if ( v4 == 117 )
  {
    Rect.bottom = 0;
    Rect.right = 0;
    Rect.top = result;
    Rect.left = result;
    MapDialogRect(hWnd, &Rect);
    if ( a3 != 0 )
    {
      if ( v6 >= 0 )
        return Rect.top;
      top = Rect.top;
    }
    else
    {
      if ( v6 >= 0 )
        return Rect.left;
      top = Rect.left;
    }
    return top + nNumber;
  }
  else if ( result < 0 )
  {
    result += nNumber;
  }
  return result;
}

// Address: 0x100013C6
int __stdcall sub_100013C6(HWND hWnd)
{
  unsigned int PropA; // eax

  PropA = (unsigned int)GetPropA(hWnd, String);
  if ( PropA != 0 && PropA <= dword_100050D4 )
    return (int)lpMem + 1048 * PropA - 1048;
  else
    return 0;
}

// Address: 0x100013FB
LRESULT __stdcall sub_100013FB(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT v5; // eax
  LRESULT v6; // edi
  HANDLE ProcessHeap; // eax
  void *v8; // [esp-8h] [ebp-Ch]

  if ( Msg == 1032
    && wParam == -1
    && (*(int (__stdcall **)(int, _DWORD))(dword_100050A0 + 4))(dword_100050D0 - 1, 0) != 0 )
  {
    return 0;
  }
  v5 = CallWindowProcA(dwNewLong, hWnd, Msg, wParam, lParam);
  v6 = v5;
  if ( Msg == 1032 && v5 == 0 )
  {
    DestroyWindow(hDlg);
    v8 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
    hDlg = nullptr;
    lpMem = nullptr;
  }
  return v6;
}

// Address: 0x10001480
LRESULT __stdcall sub_10001480(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT result; // eax
  HCURSOR CursorA; // eax

  result = sub_100013C6(hWnd);
  if ( result != 0 )
  {
    if ( Msg == 32 )
    {
      CursorA = LoadCursorA(nullptr, (LPCSTR)0x7F89);
      SetCursor(CursorA);
      return 1;
    }
    else
    {
      return CallWindowProcA(*(WNDPROC *)(result + 1044), hWnd, Msg, wParam, lParam);
    }
  }
  return result;
}

// Address: 0x100014CA
char __stdcall DialogFunc(HWND hDlg, UINT Msg, WPARAM wParam, _DWORD *lParam)
{
  HWND DlgItem; // ebx
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // esi
  int v9; // eax
  int *v10; // esi
  int v11; // ebx
  int v12; // eax
  LONG v13; // eax
  LONG v15; // ecx
  int v16; // edx
  int v17; // esi
  COLORREF v18; // eax
  unsigned int v19; // edi
  int v20; // esi
  HWND v21; // [esp-Ch] [ebp-428h]
  HWND v22; // [esp-4h] [ebp-420h]
  CHAR String[1024]; // [esp+Ch] [ebp-410h] BYREF
  struct tagRECT rc; // [esp+40Ch] [ebp-10h] BYREF
  WPARAM wParama; // [esp+42Ch] [ebp+10h]
  WPARAM wParamb; // [esp+42Ch] [ebp+10h]
  LPARAM lParama; // [esp+430h] [ebp+14h]

  if ( Msg == 2 )
  {
    v19 = 0;
    if ( dword_100050D4 != 0 )
    {
      v20 = 0;
      do
      {
        RemovePropA(*(HWND *)((char *)lpMem + v20), ::String);
        ++v19;
        v20 += 1048;
      }
      while ( v19 < dword_100050D4 );
    }
    return 0;
  }
  if ( Msg != 43 )
  {
    if ( Msg == 78 )
    {
      v9 = sub_100013C6((HWND)*lParam);
      wParama = v9;
      v10 = (int *)(*(_DWORD *)dword_100050A0 + 32);
      if ( v9 != 0 && *(_DWORD *)(v9 + 1040) != 0 )
      {
        v11 = *v10;
        *v10 = 0;
        sub_1000207D(lParam);
        sub_1000207D(lParam[2]);
        sub_1000207D(*lParam);
        (*(void (__stdcall **)(int, _DWORD))(dword_100050A0 + 4))(*(_DWORD *)(wParama + 1040) - 1, 0);
        v12 = *v10;
        *v10 = v11;
        if ( v12 != 0 )
        {
          v13 = sub_10001ED3(dword_100050A8);
          return SetWindowLongA(hDlg, 0, v13) | 1;
        }
      }
      return 0;
    }
    if ( Msg != 273 )
    {
      if ( Msg > 0x132 && (Msg <= 0x136 || Msg == 312) )
        return SendMessageA(hWnd, Msg, wParam, (LPARAM)lParam);
      return 0;
    }
    DlgItem = GetDlgItem(hDlg, (unsigned __int16)wParam);
    v6 = sub_100013C6(DlgItem);
    if ( v6 != 0 )
    {
      if ( HIWORD(wParam) == 0 )
      {
        v7 = *(_DWORD *)(v6 + 4);
        if ( v7 == 1 || v7 == 8 )
          goto LABEL_25;
      }
      if ( HIWORD(wParam) == 768 && *(_DWORD *)(v6 + 4) == 2
        || HIWORD(wParam) == 1 && *(_DWORD *)(v6 + 4) == 4
        || (HIWORD(wParam) == 6 || HIWORD(wParam) == 1) && *(_DWORD *)(v6 + 4) == 3 )
      {
        v8 = (_DWORD *)(v6 + 1036);
        goto LABEL_21;
      }
      if ( HIWORD(wParam) == 0 && *(_DWORD *)(v6 + 4) == 7 )
      {
LABEL_25:
        v8 = (_DWORD *)(v6 + 1032);
LABEL_21:
        if ( *v8 != 0 )
        {
          sub_1000207D(DlgItem);
          (*(void (__stdcall **)(int, _DWORD))(dword_100050A0 + 4))(*v8 - 1, 0);
        }
      }
    }
    return 0;
  }
  v22 = (HWND)lParam[5];
  wParamb = lParam[4] & 0x100;
  lParama = lParam[4] & 0x200;
  if ( sub_100013C6(v22) == 0 )
    return 0;
  rc.left = lParam[7];
  rc.top = lParam[8];
  String[0] = 0;
  rc.right = lParam[9];
  v21 = (HWND)lParam[5];
  rc.bottom = lParam[10];
  GetWindowTextA(v21, String, 1024);
  DrawTextA((HDC)lParam[6], String, -1, &rc, 0x414u);
  v15 = lParam[9];
  rc.right += 2;
  if ( rc.right >= v15 )
    rc.right = v15;
  if ( dword_100050CC != 0 )
  {
    v16 = v15 - rc.right;
    rc.right = v15;
    rc.left += v16;
  }
  if ( (lParam[3] & 1) != 0 )
  {
    v17 = dword_100050CC != 0 ? 0x20000 : 0;
    if ( wParamb != 0 )
      v17 = (dword_100050CC != 0 ? 0x20000 : 0) | 0x100000;
    if ( GetWindowLongA((HWND)lParam[5], -21) == 0 )
    {
      v18 = sub_1000179F();
      SetTextColor((HDC)lParam[6], v18);
    }
    DrawTextA((HDC)lParam[6], String, -1, &rc, v17 | 0x15);
  }
  if ( ((lParam[4] & 0x10) != 0 && (lParam[3] & 1) != 0 || (lParam[3] & 4) != 0) && lParama == 0 )
    DrawFocusRect((HDC)lParam[6], &rc);
  return 1;
}

// Address: 0x1000179F
DWORD sub_1000179F()
{
  DWORD result; // eax

  result = GetSysColor(26);
  if ( result == 0 )
    return 16711680;
  return result;
}

// Address: 0x100017B1
int __cdecl Create(HWND hDlg, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  HWND DlgItem; // eax
  HWND DialogParamA; // eax
  HANDLE ProcessHeap; // eax
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  dword_100050E0 = a4;
  iMaxLength = a2;
  dword_100050E4 = a3;
  (*(void (__stdcall **)(HINSTANCE, void *))(a5 + 12))(hInstance, &loc_100018B9);
  hWnd = hDlg;
  dword_100050A0 = a5;
  dword_100050A8 = a3 + 31 * a2;
  v5 = sub_10002029();
  DlgItem = GetDlgItem(hDlg, v5);
  GetWindowRect(DlgItem, &Rect);
  MapWindowPoints(nullptr, hDlg, (LPPOINT)&Rect, 2u);
  DialogParamA = CreateDialogParamA(hInstance, (LPCSTR)1, hDlg, (DLGPROC)DialogFunc, 0);
  ::hDlg = DialogParamA;
  if ( DialogParamA == nullptr )
    return sub_10001E8E(aError);
  SetWindowPos(DialogParamA, nullptr, Rect.left, Rect.top, Rect.right - Rect.left, Rect.bottom - Rect.top, 0x14u);
  dwNewLong = (WNDPROC)SetWindowLongA(hDlg, 4, (LONG)sub_100013FB);
  dword_100050CC = 0;
  dword_100050D4 = 0;
  ProcessHeap = GetProcessHeap();
  lpMem = HeapAlloc(ProcessHeap, 8u, 0);
  dword_100050D0 = 0;
  return sub_1000207D(::hDlg);
}

// Address: 0x100018BC
int CreateControl()
{
  HANDLE ProcessHeap; // eax
  CHAR *v1; // ebx
  CHAR *v2; // edi
  HANDLE v4; // eax
  HANDLE v5; // eax
  int v6; // esi
  int v7; // eax
  HWND Window; // ebx
  WPARAM v9; // eax
  HANDLE v10; // eax
  void *v11; // [esp-8h] [ebp-3Ch]
  SIZE_T v12; // [esp-4h] [ebp-38h]
  SIZE_T v13; // [esp-4h] [ebp-38h]
  CHAR *lpMem; // [esp+Ch] [ebp-28h]
  HANDLE hData; // [esp+10h] [ebp-24h]
  const CHAR *lpWindowName; // [esp+14h] [ebp-20h]
  int X; // [esp+18h] [ebp-1Ch] BYREF
  int Y; // [esp+1Ch] [ebp-18h] BYREF
  int nWidth; // [esp+20h] [ebp-14h] BYREF
  int nHeight; // [esp+24h] [ebp-10h] BYREF
  DWORD dwExStyle; // [esp+28h] [ebp-Ch] BYREF
  DWORD dwStyle; // [esp+2Ch] [ebp-8h] BYREF
  int v23; // [esp+30h] [ebp-4h]

  v12 = 2 * iMaxLength;
  ProcessHeap = GetProcessHeap();
  v1 = (CHAR *)HeapAlloc(ProcessHeap, 8u, v12);
  v2 = &v1[iMaxLength];
  lpMem = v1;
  lpWindowName = &v1[iMaxLength];
  if ( v1 == nullptr )
    return sub_10001E8E(aError);
  if ( sub_10001E40(v1, 0) != 0
    || (dwStyle = sub_10002053(),
        dwExStyle = sub_10002053(),
        sub_10001252(&X, &Y, &nWidth, &nHeight),
        sub_10001E40(v2, 0) != 0) )
  {
    sub_10001E8E(aError);
    v4 = GetProcessHeap();
    return HeapFree(v4, 0, v1);
  }
  else
  {
    v23 = dword_100050D4++;
    hData = (HANDLE)dword_100050D4;
    v13 = 1048 * dword_100050D4;
    v11 = ::lpMem;
    v5 = GetProcessHeap();
    ::lpMem = HeapReAlloc(v5, 8u, v11, v13);
    if ( lstrcmpiA(v1, aButton) != 0 )
    {
      if ( lstrcmpiA(v1, aEdit) != 0 )
      {
        if ( lstrcmpiA(v1, aCombobox) != 0 )
        {
          if ( lstrcmpiA(v1, aListbox) != 0 )
          {
            if ( lstrcmpiA(v1, aRichedit) != 0 )
            {
              if ( lstrcmpiA(v1, aRicheditClass) != 0 )
              {
                if ( lstrcmpiA(v1, aStatic) != 0 )
                {
                  v7 = lstrcmpiA(v1, aLink);
                  v6 = 1048 * v23;
                  if ( v7 != 0 )
                    *(_DWORD *)((char *)::lpMem + v6 + 4) = 0;
                  else
                    *(_DWORD *)((char *)::lpMem + v6 + 4) = 8;
                }
                else
                {
                  v6 = 1048 * v23;
                  *((_DWORD *)::lpMem + 262 * v23 + 1) = 7;
                }
              }
              else
              {
                v6 = 1048 * v23;
                *((_DWORD *)::lpMem + 262 * v23 + 1) = 6;
              }
            }
            else
            {
              v6 = 1048 * v23;
              *((_DWORD *)::lpMem + 262 * v23 + 1) = 5;
            }
          }
          else
          {
            v6 = 1048 * v23;
            *((_DWORD *)::lpMem + 262 * v23 + 1) = 4;
          }
        }
        else
        {
          v6 = 1048 * v23;
          *((_DWORD *)::lpMem + 262 * v23 + 1) = 3;
        }
      }
      else
      {
        v6 = 1048 * v23;
        *((_DWORD *)::lpMem + 262 * v23 + 1) = 2;
      }
    }
    else
    {
      v6 = 1048 * v23;
      *((_DWORD *)::lpMem + 262 * v23 + 1) = 1;
    }
    sub_10001D73(*(_DWORD *)((char *)::lpMem + v6 + 4), &dwStyle, &dwExStyle);
    if ( lstrcmpiA(v1, aLink) == 0 )
      v1 = aButton;
    Window = CreateWindowExA(
               dwExStyle,
               v1,
               lpWindowName,
               dwStyle,
               X,
               Y,
               nWidth,
               nHeight,
               hDlg,
               (HMENU)(v23 + 1200),
               hInstance,
               nullptr);
    *(_DWORD *)((char *)::lpMem + v6) = Window;
    SetPropA(Window, String, hData);
    v9 = SendMessageA(hWnd, 0x31u, 0, 0);
    SendMessageA(Window, 0x30u, v9, 1);
    if ( *(_DWORD *)((char *)::lpMem + v6 + 4) == 8 )
      *(_DWORD *)((char *)::lpMem + v6 + 1044) = SetWindowLongA(Window, -4, (LONG)sub_10001480);
    sub_1000207D(Window);
    v10 = GetProcessHeap();
    return HeapFree(v10, 0, lpMem);
  }
}

// Address: 0x10001B8A
int CreateItem()
{
  return CreateControl();
}

// Address: 0x10001BA6
int SetUserData()
{
  HWND v0; // esi
  int result; // eax

  v0 = (HWND)sub_10002029();
  if ( !IsWindow(v0) )
    return sub_10002029();
  result = sub_100013C6(v0);
  if ( result != 0 )
    return sub_10001E40((LPSTR)(result + 8), 1024);
  return result;
}

// Address: 0x10001BD9
int GetUserData()
{
  HWND v0; // esi
  int v1; // eax

  v0 = (HWND)sub_10002029();
  if ( IsWindow(v0) && (v1 = sub_100013C6(v0)) != 0 )
    return sub_10001E8E((LPCSTR)(v1 + 8));
  else
    return sub_10001E8E(byte_10004098);
}

// Address: 0x10001C08
void __stdcall TimerFunc(HWND a1, UINT a2, UINT_PTR a3, DWORD a4)
{
  (*(void (__stdcall **)(UINT_PTR, _DWORD))(dword_100050A0 + 4))(a3 - 1, 0);
}

// Address: 0x10001C1B
UINT_PTR CreateTimer()
{
  UINT_PTR v0; // esi
  UINT_PTR result; // eax

  v0 = sub_10002029();
  result = sub_10002029();
  if ( v0 != 0 && result != 0 )
    return SetTimer(hDlg, v0, result, TimerFunc);
  return result;
}

// Address: 0x10001C45
BOOL __stdcall KillTimer(HWND hWnd, UINT_PTR uIDEvent)
{
  UINT_PTR v2; // eax

  v2 = sub_10002029();
  return KillTimer_0(hDlg, v2);
}

// Address: 0x10001C58
int __stdcall sub_10001C58(int a1)
{
  HWND v1; // esi
  int v2; // edi
  int result; // eax

  v1 = (HWND)sub_10002029();
  v2 = sub_10002029();
  result = IsWindow(v1);
  if ( result != 0 )
  {
    result = sub_100013C6(v1);
    if ( result != 0 )
      *(_DWORD *)(result + 4 * a1 + 1032) = v2;
  }
  return result;
}

// Address: 0x10001C8D
int __stdcall sub_10001C8D(int a1)
{
  int result; // eax

  result = sub_10002029();
  dword_100050D0[a1] = result;
  return result;
}

// Address: 0x10001CA0
int OnClick()
{
  return sub_10001C58(0);
}

// Address: 0x10001CA8
int OnChange()
{
  return sub_10001C58(1);
}

// Address: 0x10001CB0
int OnNotify()
{
  return sub_10001C58(2);
}

// Address: 0x10001CB8
int OnBack()
{
  return sub_10001C8D(0);
}

// Address: 0x10001CC0
LONG __cdecl Show(HWND hWnd)
{
  struct tagMSG Msg; // [esp+4h] [ebp-1Ch] BYREF

  SendMessageA(hWnd, 0x40Du, (WPARAM)hDlg, 0);
  ShowWindow(hDlg, 8);
  while ( hDlg != nullptr )
  {
    GetMessageA(&Msg, nullptr, 0, 0);
    if ( !IsDialogMessageA(hDlg, &Msg) && !IsDialogMessageA(::hWnd, &Msg) )
    {
      TranslateMessage(&Msg);
      DispatchMessageA(&Msg);
    }
  }
  return SetWindowLongA(hWnd, 4, (LONG)dwNewLong);
}

// Address: 0x10001D59
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  hInstance = hinstDLL;
  return true;
}

// Address: 0x10001D68
int SetRTL()
{
  int result; // eax

  result = sub_10002029();
  dword_100050CC = result;
  return result;
}

// Address: 0x10001D73
void __stdcall sub_10001D73(int a1, int *a2, int a3)
{
  int *v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // ecx

  if ( dword_100050CC != 0 )
  {
    if ( a1 == 1 )
      goto LABEL_19;
    if ( a1 == 2 )
      goto LABEL_17;
    if ( a1 <= 4 )
      goto LABEL_16;
    if ( a1 <= 6 )
    {
LABEL_17:
      v3 = a2;
      if ( (*a2 & 1) != 0 )
        goto LABEL_22;
      v4 = *a2 ^ 2;
    }
    else
    {
      if ( a1 != 7 )
      {
        if ( a1 != 8 )
        {
          if ( a1 == 9 )
          {
            *a2 |= 0x40u;
            *(_DWORD *)a3 |= 0x401000u;
LABEL_22:
            *(_BYTE *)(a3 + 1) |= 0x60u;
            return;
          }
LABEL_16:
          *(_BYTE *)(a3 + 1) |= 0x10u;
          goto LABEL_22;
        }
LABEL_19:
        *a2 ^= 0x320u;
        if ( (*a2 & 0x300) == 0x300 )
        {
          v6 = *a2 ^ 0x300;
          *a2 = v6;
          if ( (v6 & 0xE) != 0 )
          {
            BYTE1(v6) |= 2u;
            *a2 = v6;
          }
        }
        goto LABEL_22;
      }
      v3 = a2;
      v4 = *a2;
      v5 = *a2 & 0x1F;
      if ( v5 == 0 || v5 == 12 )
      {
        LOBYTE(v4) = v4 & 0xE2;
        v4 |= 2u;
      }
      else
      {
        if ( v5 != 3 )
          goto LABEL_22;
        BYTE1(v4) |= 2u;
      }
    }
    *v3 = v4;
    goto LABEL_22;
  }
}

// Address: 0x10001E24
_DWORD *__stdcall sub_10001E24(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // eax

  if ( dword_100050CC != 0 )
  {
    *a1 = a3 - *a1 - a2;
    return a1;
  }
  return result;
}

// Address: 0x10001E40
int __stdcall sub_10001E40(LPSTR lpString1, int iMaxLength)
{
  _DWORD *v2; // eax
  CHAR *v3; // esi
  int v4; // eax

  v2 = (_DWORD *)dword_100050E0;
  if ( dword_100050E0 == 0 )
    return 1;
  v3 = *(CHAR **)dword_100050E0;
  if ( *(_DWORD *)dword_100050E0 == 0 )
    return 1;
  if ( lpString1 != nullptr )
  {
    v4 = iMaxLength;
    if ( iMaxLength == 0 )
      v4 = ::iMaxLength;
    lstrcpynA(lpString1, v3 + 4, v4);
    v2 = (_DWORD *)dword_100050E0;
  }
  *v2 = *(_DWORD *)v3;
  GlobalFree(v3);
  return 0;
}

// Address: 0x10001E8E
void __stdcall sub_10001E8E(LPCSTR lpString2)
{
  CHAR *v1; // esi

  if ( dword_100050E0 != 0 )
  {
    v1 = (CHAR *)GlobalAlloc(0x40u, iMaxLength + 8);
    lstrcpynA(v1 + 4, lpString2, iMaxLength);
    *(_DWORD *)v1 = *(_DWORD *)dword_100050E0;
    *(_DWORD *)dword_100050E0 = v1;
  }
}

// Address: 0x10001ED3
int __stdcall sub_10001ED3(_BYTE *a1)
{
  _BYTE *v1; // ecx
  int result; // eax
  _BYTE *v3; // esi
  char v4; // dl
  int v5; // ecx
  int v6; // ecx
  char *i; // edx
  int v8; // ecx
  int v9; // esi
  unsigned int v10; // edx

  v1 = a1;
  result = 0;
  if ( *a1 != 48 )
    goto LABEL_21;
  v3 = a1 + 1;
  v4 = a1[1];
  if ( v4 == 120 || v4 == 88 )
  {
    while ( 1 )
    {
      v5 = (char)*++v3;
      if ( v5 < 48 || v5 > 57 )
      {
        if ( v5 < 97 || v5 > 102 )
        {
          if ( v5 < 65 || v5 > 70 )
            return result;
          v6 = v5 - 55;
        }
        else
        {
          v6 = v5 - 87;
        }
      }
      else
      {
        v6 = v5 - 48;
      }
      result = v6 + 16 * result;
    }
  }
  if ( v4 <= 55 && v4 >= 48 )
  {
    for ( i = a1 + 1; ; ++i )
    {
      v8 = *i;
      if ( v8 < 48 || v8 > 55 )
        break;
      result = v8 + 8 * result - 48;
    }
  }
  else
  {
LABEL_21:
    v9 = 0;
    if ( *a1 == 45 )
      v9 = 1;
    else
      v1 = a1 - 1;
    while ( 1 )
    {
      v10 = (char)*++v1 - 48;
      if ( v10 >= 0xA )
        break;
      result = v10 + 10 * result;
    }
    if ( v9 != 0 )
      return -result;
  }
  return result;
}

// Address: 0x10001F75
int __stdcall sub_10001F75(_BYTE *a1)
{
  _BYTE *i; // eax
  int v2; // esi
  char v3; // dl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // ecx

  i = a1;
  v2 = 0;
  if ( *a1 != 48 )
    goto LABEL_22;
  v3 = a1[1];
  if ( v3 == 120 || v3 == 88 )
  {
    i = a1 + 1;
    while ( 1 )
    {
      v4 = (char)*++i;
      if ( v4 < 48 || v4 > 57 )
      {
        if ( v4 < 97 || v4 > 102 )
        {
          if ( v4 < 65 || v4 > 70 )
            goto LABEL_29;
          v5 = v4 - 55;
        }
        else
        {
          v5 = v4 - 87;
        }
      }
      else
      {
        v5 = v4 - 48;
      }
      v2 = v5 + 16 * v2;
    }
  }
  if ( v3 <= 55 && v3 >= 48 )
  {
    for ( i = a1 + 1; ; ++i )
    {
      v6 = (char)*i;
      if ( v6 < 48 || v6 > 55 )
        break;
      v2 = v6 + 8 * v2 - 48;
    }
  }
  else
  {
LABEL_22:
    v7 = 0;
    if ( *a1 == 45 )
      v7 = 1;
    else
      i = a1 - 1;
    while ( 1 )
    {
      v8 = (char)*++i - 48;
      if ( v8 >= 0xA )
        break;
      v2 = v8 + 10 * v2;
    }
    if ( v7 != 0 )
      v2 = -v2;
  }
LABEL_29:
  if ( *i == 124 )
    return sub_10001F75(i + 1) | v2;
  return v2;
}

// Address: 0x10002029
int sub_10002029()
{
  CHAR String1[128]; // [esp+0h] [ebp-80h] BYREF

  if ( sub_10001E40(String1, 128) != 0 )
    return 0;
  else
    return sub_10001ED3(String1);
}

// Address: 0x10002053
int sub_10002053()
{
  CHAR String1[128]; // [esp+0h] [ebp-80h] BYREF

  if ( sub_10001E40(String1, 128) != 0 )
    return 0;
  else
    return sub_10001F75(String1);
}

// Address: 0x1000207D
void __stdcall sub_1000207D(int a1)
{
  CHAR String2[32]; // [esp+0h] [ebp-20h] BYREF

  wsprintfA(String2, "%d", a1);
  sub_10001E8E(String2);
}

