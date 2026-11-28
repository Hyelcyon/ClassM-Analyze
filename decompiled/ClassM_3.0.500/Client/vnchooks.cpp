// Decompiled from vnchooks.dll (ClassM_3.0.500\ClassM_Client_unpacked\vnchooks.dll)

// Address: 0x10001020
LRESULT __stdcall fn(int code, WPARAM wParam, LPARAM lParam)
{
  if ( dword_1001384C != 0 && code == 0 && *(_DWORD *)lpBaseAddress != 0 )
    sub_10001490(*(_DWORD *)(lParam + 8), *(HWND *)(lParam + 12), *(_DWORD *)(lParam + 4), *(_DWORD *)lParam);
  return CallNextHookEx(hhk, code, wParam, lParam);
}

// Address: 0x10001070
LRESULT __stdcall sub_10001070(int code, WPARAM wParam, LPARAM lParam)
{
  if ( dword_1001384C != 0 && code >= 0 && *(_DWORD *)lpBaseAddress != 0 )
    sub_10001490(*(_DWORD *)(lParam + 4), *(HWND *)lParam, *(_DWORD *)(lParam + 8), *(_DWORD *)(lParam + 12));
  return CallNextHookEx(dword_1001383C, code, wParam, lParam);
}

// Address: 0x100010C0
int sub_100010C0()
{
  HMODULE ModuleHandleA; // eax
  CHAR Filename[260]; // [esp+0h] [ebp-108h] BYREF

  if ( word_10013828 != 0 )
  {
    GlobalDeleteAtom(word_10013828);
    word_10013828 = 0;
  }
  if ( Block != nullptr )
  {
    ModuleHandleA = GetModuleHandleA(nullptr);
    if ( GetModuleFileNameA(ModuleHandleA, Filename, 0x104u) == 0 )
      return 0;
    hKey = (HKEY)sub_100012E0(HKEY_CURRENT_USER, Filename, 1, 1);
    if ( hKey == nullptr )
      return 0;
    sub_10001F50("use_GetUpdateRect", Data);
    sub_10001F50("use_Timer", dword_10013800);
    sub_10001F50("use_KeyPress", dword_10013804);
    sub_10001F50("use_LButtonUp", dword_10013000);
    sub_10001F50("use_MButtonUp", dword_10013808);
    sub_10001F50("use_RButtonUp", dword_1001380C);
    sub_10001F50("use_Deferral", dword_10013810);
    j___free_base(Block);
    Block = nullptr;
  }
  if ( hKey != nullptr )
  {
    RegCloseKey(hKey);
    hKey = nullptr;
  }
  return 1;
}

// Address: 0x10001210
int __cdecl sub_10001210(HWND hWnd, LPRECT lpRect)
{
  LONG y; // eax
  LONG x; // ecx
  struct tagPOINT Point; // [esp+4h] [ebp-8h] BYREF

  Point.x = 0;
  Point.y = 0;
  if ( !GetClientRect(hWnd, lpRect) || !ClientToScreen(hWnd, &Point) )
    return 0;
  y = Point.y;
  x = Point.x;
  lpRect->top += Point.y;
  lpRect->left += x;
  lpRect->right += x;
  lpRect->bottom += y;
  return 1;
}

// Address: 0x10001270
LRESULT __stdcall sub_10001270(int code, WPARAM wParam, LPARAM lParam)
{
  int v4; // [esp-10h] [ebp-14h]

  if ( dword_1001384C != 0 && code == 0 && *(_DWORD *)lpBaseAddress != 0 && (wParam & 1) != 0 )
  {
    v4 = *(_DWORD *)(lParam + 4);
    if ( dword_10013824 != 0 )
      sub_100019D0(v4);
    else
      sub_10001490(v4, *(HWND *)lParam, *(_DWORD *)(lParam + 8), *(_DWORD *)(lParam + 12));
  }
  return CallNextHookEx(dword_1001383C, code, wParam, lParam);
}

// Address: 0x100012E0
void *__cdecl sub_100012E0(HKEY hKey, char *Source, char a3, char a4)
{
  void *result; // eax
  HKEY v5; // esi
  int v6; // edi
  const char *v7; // eax
  char *v8; // edi
  HKEY phkResult; // [esp+8h] [ebp-1Ch]
  DWORD dwDisposition; // [esp+10h] [ebp-14h] BYREF
  DWORD v11; // [esp+14h] [ebp-10h] BYREF
  const char *v12; // [esp+18h] [ebp-Ch]
  int v13; // [esp+1Ch] [ebp-8h]

  LOBYTE(phkResult) = a3;
  if ( Block == nullptr )
  {
    result = malloc(strlen(Source) + 1);
    Block = result;
    if ( result == nullptr )
      return result;
    strcpy((char *)result, Source);
  }
  dwDisposition = (DWORD)"Software";
  v11 = (DWORD)"ORL";
  v12 = "VNCHooks";
  v13 = 0;
  v5 = (HKEY)sub_10001C20(hKey, (DWORD)&dwDisposition, phkResult, a4);
  if ( v5 == nullptr )
    return nullptr;
  v12 = (const char *)Block;
  v11 = (DWORD)"Application_Prefs";
  v13 = 0;
  v6 = sub_10001C20(v5, (DWORD)&v11, phkResult, 0);
  if ( v6 == 0 )
  {
    v7 = (const char *)sub_10001BC0(Source);
    v8 = (char *)v7;
    if ( v7 == nullptr )
    {
      RegCloseKey(v5);
      return nullptr;
    }
    strcpy((char *)Block, v7);
    j___free_base(v8);
    v12 = (const char *)Block;
    v11 = (DWORD)"Application_Prefs";
    v13 = 0;
    v6 = sub_10001C20(v5, (DWORD)&v11, phkResult, a4);
  }
  RegCloseKey(v5);
  return (void *)v6;
}

// Address: 0x10001440
int __cdecl sub_10001440(LPCSTR lpValueName, int a2)
{
  int result; // eax
  DWORD Type; // [esp+0h] [ebp-Ch] BYREF
  BYTE Data[4]; // [esp+4h] [ebp-8h] BYREF
  DWORD cbData; // [esp+8h] [ebp-4h] BYREF

  cbData = 4;
  if ( RegQueryValueExA(hKey, lpValueName, nullptr, &Type, Data, &cbData) != 0 )
    return a2;
  result = *(_DWORD *)Data;
  if ( Type != 4 )
    return a2;
  return result;
}

// Address: 0x10001490
int __cdecl sub_10001490(unsigned int a1, HWND hWnd, WPARAM wParam, LPARAM lParam)
{
  int result; // eax
  HRGN RectRgn; // ebx
  DWORD RegionData; // eax
  DWORD v7; // esi
  struct _RGNDATA *v8; // eax
  struct _RGNDATA *v9; // edi
  DWORD *p_iType; // esi
  DWORD v11; // ebx
  bool v12; // zf
  HCURSOR Cursor; // eax
  int v14; // esi
  struct tagPOINT Point; // [esp+0h] [ebp-8h] BYREF
  int v16; // [esp+10h] [ebp+8h]

  if ( a1 == Msg )
  {
    PostThreadMessageA(*(_DWORD *)lpBaseAddress, *((_DWORD *)lpBaseAddress + 1), wParam, lParam);
    return 0;
  }
  if ( a1 > 0x102 )
  {
    if ( a1 <= 0x200 )
    {
      if ( a1 != 512 )
      {
        switch ( a1 )
        {
          case 0x113u:
            if ( *(_DWORD *)&dword_10013800 != 0 )
              goto LABEL_51;
            return 1;
          case 0x114u:
          case 0x115u:
            if ( (_WORD)wParam == 5 )
              goto LABEL_51;
            v12 = (_WORD)wParam == 8;
            goto LABEL_50;
          case 0x1E5u:
            if ( GetPropA(hWnd, (LPCSTR)(unsigned __int16)word_10013828) == (HANDLE)wParam )
              return 1;
            sub_10001E30(hWnd);
            SetPropA(hWnd, (LPCSTR)(unsigned __int16)word_10013828, (HANDLE)wParam);
            return 1;
          default:
            return 1;
        }
      }
LABEL_36:
      Cursor = GetCursor();
      v14 = (int)Cursor;
      if ( Cursor != (HCURSOR)dword_10013820 )
      {
        PostThreadMessageA(*(_DWORD *)lpBaseAddress, *((_DWORD *)lpBaseAddress + 3), (WPARAM)Cursor, 0);
        dword_10013820 = v14;
        return 1;
      }
      return 1;
    }
    if ( a1 > 0x208 )
    {
      if ( a1 != 522 )
      {
        v12 = a1 == 785;
LABEL_50:
        if ( !v12 )
          return 1;
      }
      goto LABEL_51;
    }
    if ( a1 == 520 )
    {
      if ( *(_DWORD *)&dword_10013808 != 0 )
        goto LABEL_51;
    }
    else
    {
      if ( a1 != 514 )
      {
        if ( a1 != 517 || *(_DWORD *)&dword_1001380C == 0 )
          return 1;
        goto LABEL_51;
      }
      if ( *(_DWORD *)&dword_10013000 != 0 )
LABEL_51:
        sub_10001E30(hWnd);
    }
    return 1;
  }
  if ( a1 >= 0x101 )
  {
    if ( *(_DWORD *)&dword_10013804 != 0 )
      goto LABEL_51;
    return 1;
  }
  switch ( a1 )
  {
    case 2u:
      RemovePropA(hWnd, (LPCSTR)(unsigned __int16)word_10013828);
      return 1;
    case 0xAu:
    case 0xCu:
    case 0x15u:
    case 0xB1u:
    case 0xF1u:
    case 0xF3u:
      goto LABEL_51;
    case 0xFu:
      if ( *(_DWORD *)&Data == 0 )
        goto LABEL_51;
      RectRgn = CreateRectRgn(0, 0, 0, 0);
      v16 = (int)RectRgn;
      if ( GetUpdateRgn(hWnd, RectRgn, false) == 0 )
        goto LABEL_18;
      Point.x = 0;
      Point.y = 0;
      if ( !ClientToScreen(hWnd, &Point) )
        return 1;
      RegionData = GetRegionData(RectRgn, 0, nullptr);
      v7 = RegionData;
      if ( RegionData == 0 )
        goto LABEL_18;
      v8 = (struct _RGNDATA *)sub_10002320(RegionData);
      v9 = v8;
      if ( v8 == nullptr )
        return 1;
      if ( GetRegionData(RectRgn, v7, v8) != 0 && v9->rdh.nCount != 0 )
      {
        p_iType = &v9[1].rdh.iType;
        v11 = 0;
        do
        {
          sub_10001DE0(
            hWnd,
            LOWORD(Point.x) + *((_WORD *)p_iType - 4),
            LOWORD(Point.y) + *((_WORD *)p_iType - 2),
            LOWORD(Point.x) + *(_WORD *)p_iType,
            LOWORD(Point.y) + *((_WORD *)p_iType + 2));
          Sleep(0);
          ++v11;
          p_iType += 4;
        }
        while ( v11 < v9->rdh.nCount );
        RectRgn = (HRGN)v16;
      }
      j_j_j___free_base(v9);
LABEL_18:
      if ( RectRgn == nullptr )
        return 1;
      DeleteObject(RectRgn);
      result = 1;
      break;
    case 0x46u:
      if ( !IsWindowVisible(hWnd) )
        return 1;
      sub_10001EF0(hWnd);
      return 1;
    case 0x47u:
      if ( !IsWindowVisible(hWnd) )
        return 1;
      sub_10001E30(hWnd);
      return 1;
    case 0x85u:
    case 0x86u:
      sub_10001D40(hWnd);
      dword_10013820 = 0;
      return 1;
    case 0xA0u:
      goto LABEL_36;
    default:
      return 1;
  }
  return result;
}

// Address: 0x100019D0
int __cdecl sub_100019D0(int a1)
{
  HCURSOR Cursor; // eax
  int v2; // esi

  if ( a1 == 160 || a1 == 512 )
  {
    Cursor = GetCursor();
    v2 = (int)Cursor;
    if ( Cursor != (HCURSOR)dword_10013820 )
    {
      PostThreadMessageA(*(_DWORD *)lpBaseAddress, *((_DWORD *)lpBaseAddress + 3), (WPARAM)Cursor, 0);
      dword_10013820 = v2;
    }
  }
  return 1;
}

// Address: 0x10001A20
int sub_10001A20()
{
  HMODULE ModuleHandleA; // eax
  CHAR Filename[260]; // [esp+0h] [ebp-108h] BYREF

  if ( word_10013828 == 0 )
  {
    word_10013828 = GlobalAddAtomA(lpString);
    if ( word_10013828 == 0 )
      return 0;
  }
  ModuleHandleA = GetModuleHandleA(nullptr);
  if ( GetModuleFileNameA(ModuleHandleA, Filename, 0x104u) == 0 )
    return 0;
  hKey = (HKEY)sub_100012E0(HKEY_LOCAL_MACHINE, Filename, 0, 0);
  if ( hKey != nullptr )
  {
    sub_10001CC0();
    RegCloseKey(hKey);
    hKey = nullptr;
  }
  hKey = (HKEY)sub_100012E0(HKEY_CURRENT_USER, Filename, 0, 0);
  if ( hKey != nullptr )
  {
    sub_10001CC0();
    RegCloseKey(hKey);
    hKey = nullptr;
  }
  return 1;
}

// Address: 0x10001B10
BOOL __stdcall EnumFunc(HWND hWnd, LPARAM a2)
{
  RemovePropA(hWnd, (LPCSTR)(unsigned __int16)word_10013828);
  return true;
}

// Address: 0x10001B30
LRESULT __stdcall sub_10001B30(int code, WPARAM wParam, LPARAM lParam)
{
  if ( dword_1001384C == 0 || code != 0 || (*(_BYTE *)(lParam + 8) & 0x10) != 0 )
    return CallNextHookEx(dword_10013844, code, wParam, lParam);
  else
    return 1;
}

// Address: 0x10001B70
LRESULT __stdcall sub_10001B70(int code, WPARAM wParam, LPARAM lParam)
{
  if ( dword_1001384C != 0
    && code == 0
    && ((*(_DWORD *)(lParam + 20) & 0xFF515700) == 0xFF515700 || (*(_BYTE *)(lParam + 12) & 1) == 0) )
  {
    return 1;
  }
  else
  {
    return CallNextHookEx(dword_10013848, code, wParam, lParam);
  }
}

// Address: 0x10001BC0
char *__cdecl sub_10001BC0(char *Source)
{
  signed int v1; // eax
  char *result; // eax

  v1 = strlen(Source) - 1;
  if ( v1 <= 0 )
    return _strdup(Source);
  while ( Source[v1] != 92 )
  {
    if ( --v1 <= 0 )
      return _strdup(Source);
  }
  result = _strdup(&Source[v1 + 1]);
  if ( result == nullptr )
    return _strdup(Source);
  return result;
}

// Address: 0x10001C20
HKEY __cdecl sub_10001C20(HKEY hKey, LPCSTR *dwDisposition, HKEY phkResult, char a4)
{
  char v4; // dl
  int v5; // eax
  HKEY v6; // esi
  REGSAM v7; // ecx
  LPCSTR *v8; // edi
  LSTATUS v9; // eax
  LSTATUS v10; // ebx
  REGSAM v12; // [esp+0h] [ebp-4h]

  v4 = a4;
  v5 = 131103;
  if ( (_BYTE)phkResult == 0 )
    v5 = 131097;
  v6 = hKey;
  v7 = v5 | 4;
  v8 = dwDisposition;
  if ( a4 == 0 )
    v7 = v5;
  v12 = v7;
  if ( *dwDisposition == nullptr )
    return v6;
  while ( 1 )
  {
    v9 = v4 != 0
       ? RegCreateKeyExA(v6, *v8, 0, nullptr, 0, v7, nullptr, &phkResult, (LPDWORD)&dwDisposition)
       : RegOpenKeyExA(v6, *v8, 0, v7, &phkResult);
    v10 = v9;
    if ( v6 != nullptr && v6 != hKey )
      RegCloseKey(v6);
    v6 = phkResult;
    if ( v10 != 0 )
      break;
    v7 = v12;
    ++v8;
    v4 = a4;
    if ( *v8 == nullptr )
      return v6;
  }
  return nullptr;
}

// Address: 0x10001CC0
int sub_10001CC0()
{
  int result; // eax

  *(_DWORD *)&Data = sub_10001440("use_GetUpdateRect", 1);
  *(_DWORD *)&dword_10013800 = sub_10001440("use_Timer", 0);
  *(_DWORD *)&dword_10013804 = sub_10001440("use_KeyPress", 1);
  *(_DWORD *)&dword_10013000 = sub_10001440("use_LButtonUp", 1);
  *(_DWORD *)&dword_10013808 = sub_10001440("use_MButtonUp", 1);
  *(_DWORD *)&dword_1001380C = sub_10001440("use_RButtonUp", 1);
  result = sub_10001440("use_Deferral", 1);
  *(_DWORD *)&dword_10013810 = result;
  return result;
}

// Address: 0x10001D40
int __cdecl sub_10001D40(HWND hWnd)
{
  int result; // eax
  struct tagRECT v2; // [esp+4h] [ebp-24h] BYREF
  struct tagRECT Rect; // [esp+14h] [ebp-14h] BYREF

  result = IsWindowVisible(hWnd);
  if ( result != 0 )
  {
    result = GetWindowRect(hWnd, &Rect);
    if ( result != 0 )
    {
      result = sub_10001210(hWnd, &v2);
      if ( result != 0 )
      {
        sub_10001DE0(hWnd, Rect.left, Rect.top, Rect.right, v2.top);
        sub_10001DE0(hWnd, Rect.left, Rect.top, v2.left, Rect.bottom);
        sub_10001DE0(hWnd, Rect.left, v2.bottom, Rect.right, Rect.bottom);
        return sub_10001DE0(hWnd, v2.right, Rect.top, Rect.right, Rect.bottom);
      }
    }
  }
  return result;
}

// Address: 0x10001DE0
BOOL __cdecl sub_10001DE0(
        HWND hWnd,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  WPARAM v6; // [esp-8h] [ebp-8h]
  LPARAM v7; // [esp-4h] [ebp-4h]

  v7 = a4 | (a5 << 16);
  v6 = a2 | (a3 << 16);
  if ( *(_DWORD *)&dword_10013810 != 0 )
    return PostMessageA(hWnd, Msg, v6, v7);
  else
    return PostThreadMessageA(*(_DWORD *)lpBaseAddress, *((_DWORD *)lpBaseAddress + 1), v6, v7);
}

// Address: 0x10001E30
BOOL __cdecl sub_10001E30(HWND hWnd)
{
  BOOL result; // eax
  struct tagRECT Rect; // [esp+4h] [ebp-14h] BYREF

  result = IsWindowVisible(hWnd);
  if ( result != 0 )
  {
    result = GetWindowRect(hWnd, &Rect);
    if ( result != 0 )
      return sub_10001DE0(hWnd, Rect.left, Rect.top, Rect.right, Rect.bottom);
  }
  return result;
}

// Address: 0x10001E90
HWND __cdecl sub_10001E90(unsigned __int16 a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  HWND result; // eax

  PostThreadMessageA(*(_DWORD *)lpBaseAddress, *((_DWORD *)lpBaseAddress + 1), a1 | (a2 << 16), a3 | (a4 << 16));
  result = FindWindowA("WinVNC desktop sink", "WinVNC");
  if ( result == nullptr )
    return (HWND)UnSetHooks(*(_DWORD *)lpBaseAddress);
  return result;
}

// Address: 0x10001EF0
HWND __cdecl sub_10001EF0(HWND hWnd)
{
  HWND result; // eax
  struct tagRECT Rect; // [esp+4h] [ebp-14h] BYREF

  result = (HWND)IsWindowVisible(hWnd);
  if ( result != nullptr )
  {
    result = (HWND)GetWindowRect(hWnd, &Rect);
    if ( result != nullptr )
      return sub_10001E90(Rect.left, Rect.top, Rect.right, Rect.bottom);
  }
  return result;
}

// Address: 0x10001F50
LSTATUS sub_10001F50(LPCSTR lpValueName, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, lpValueName);
  return RegSetValueExA(hKey, lpValueName, 0, 4u, (const BYTE *)va, 4u);
}

// Address: 0x10001F70
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  HANDLE FileMappingA; // eax
  void *v4; // esi

  if ( fdwReason == 0 )
  {
    if ( lpvReserved == nullptr )
    {
      sub_100010C0();
      if ( lpBaseAddress != nullptr )
        UnmapViewOfFile(lpBaseAddress);
    }
    dword_1001384C = 0;
  }
  else if ( fdwReason == 1 )
  {
    FileMappingA = CreateFileMappingA((HANDLE)0xFFFFFFFF, nullptr, 4u, 0, 0x10u, "Local\\SeamlessRDPData");
    v4 = FileMappingA;
    if ( FileMappingA != nullptr )
    {
      lpBaseAddress = MapViewOfFile(FileMappingA, 0xF001Fu, 0, 0, 0);
      if ( lpBaseAddress != nullptr )
      {
        hmod = hinstDLL;
        dword_1001381C = sub_10001A20();
        dword_1001384C = 1;
        return true;
      }
      else
      {
        CloseHandle(v4);
        return false;
      }
    }
    else
    {
      if ( lpBaseAddress != nullptr )
        UnmapViewOfFile(lpBaseAddress);
      return false;
    }
  }
  return true;
}

// Address: 0x10002040
int HooksType()
{
  return 0;
}

// Address: 0x10002050
int __cdecl SetHooks(int a1, int a2, int a3, int a4, int a5)
{
  HHOOK v6; // eax
  _DWORD *v7; // ecx

  if ( a1 == 0 )
    return 0;
  dword_10013824 = a5;
  if ( *(_DWORD *)lpBaseAddress != 0 )
    return 0;
  hhk = SetWindowsHookExA(4, fn, hmod, 0);
  dword_1001383C = SetWindowsHookExA(3, sub_10001270, hmod, 0);
  v6 = SetWindowsHookExA(6, sub_10001070, hmod, 0);
  dword_10013840 = v6;
  if ( hhk != nullptr && dword_1001383C != nullptr && v6 != nullptr )
  {
    v7 = lpBaseAddress;
    *((_DWORD *)lpBaseAddress + 1) = a2;
    v7[2] = a3;
    *v7 = a1;
    v7[3] = a4;
    dword_10013818 = 1;
    return 1;
  }
  else
  {
    SetKeyboardFilterHook(0);
    SetMouseFilterHook(0);
    if ( hhk != nullptr )
      UnhookWindowsHookEx(hhk);
    if ( dword_1001383C != nullptr )
      UnhookWindowsHookEx(dword_1001383C);
    if ( dword_10013840 != nullptr )
      UnhookWindowsHookEx(dword_10013840);
    hhk = nullptr;
    dword_1001383C = nullptr;
    dword_10013840 = nullptr;
    if ( a5 != 0 )
    {
      hhk = nullptr;
      dword_10013840 = nullptr;
    }
    return 0;
  }
}

// Address: 0x10002180
int __cdecl SetKeyboardFilterHook(int a1)
{
  if ( a1 != 0 )
  {
    if ( dword_10013844 == nullptr )
    {
      dword_10013844 = SetWindowsHookExA(13, sub_10001B30, hmod, 0);
      if ( dword_10013844 == nullptr )
        return 0;
    }
  }
  else if ( dword_10013844 != nullptr )
  {
    if ( !UnhookWindowsHookEx(dword_10013844) )
      return 0;
    dword_10013844 = nullptr;
  }
  return 1;
}

// Address: 0x100021E0
int __cdecl SetMouseFilterHook(int a1)
{
  if ( a1 != 0 )
  {
    if ( dword_10013848 == nullptr )
    {
      dword_10013848 = SetWindowsHookExA(14, sub_10001B70, hmod, 0);
      if ( dword_10013848 == nullptr )
        return 0;
    }
  }
  else if ( dword_10013848 != nullptr )
  {
    if ( !UnhookWindowsHookEx(dword_10013848) )
      return 0;
    dword_10013848 = nullptr;
  }
  return 1;
}

// Address: 0x10002240
BOOL __cdecl UnSetHooks(int a1)
{
  BOOL v1; // edx

  EnumWindows(EnumFunc, 0);
  v1 = SetKeyboardFilterHook(0) != 0 && SetMouseFilterHook(0) != 0;
  if ( a1 != *(_DWORD *)lpBaseAddress )
    return false;
  if ( hhk != nullptr )
  {
    v1 = v1 && UnhookWindowsHookEx(hhk);
    hhk = nullptr;
  }
  if ( dword_1001383C != nullptr )
  {
    v1 = v1 && UnhookWindowsHookEx(dword_1001383C);
    dword_1001383C = nullptr;
  }
  if ( dword_10013840 != nullptr )
  {
    v1 = v1 && UnhookWindowsHookEx(dword_10013840);
    dword_10013840 = nullptr;
  }
  if ( v1 )
  {
    *(_DWORD *)lpBaseAddress = 0;
    dword_10013818 = 0;
  }
  return v1;
}

// Address: 0x10002320
void *__cdecl sub_10002320(size_t a1)
{
  return operator new(a1);
}

// Address: 0x10002329
// attributes: thunk
void __cdecl j_j_j___free_base(void *Block)
{
  j_j___free_base(Block);
}

// Address: 0x1000232E
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x1000233F
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
      LOBYTE(result) = sub_10002896();
      break;
    default:
      return 1;
  }
  return (unsigned __int8)result;
}

// Address: 0x10002392
int __cdecl dllmain_crt_process_attach(HINSTANCE a1, void *const a2)
{
  char v3; // bl
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  char v6; // [esp+1Bh] [ebp-1Dh]

  if ( (unsigned __int8)__scrt_initialize_crt(0) == 0 )
    return 0;
  v6 = __scrt_acquire_startup_lock();
  v3 = 1;
  if ( dword_10013B74 != 0 )
    __scrt_fastfail(7);
  dword_10013B74 = 1;
  if ( (unsigned __int8)__scrt_dllmain_before_initialize_c() != 0 )
  {
    sub_10002CFB();
    atexit(sub_10002D26);
    sub_10002B91();
    atexit(sub_10002B9D);
    __scrt_initialize_default_local_stdio_options();
    if ( _initterm_e((_PIFV *)&dword_1000D1A0, (_PIFV *)&dword_1000D1B0) == 0
      && (unsigned __int8)__scrt_dllmain_after_initialize_c() != 0 )
    {
      _initterm((_PVFV *)&First, (_PVFV *)&Last);
      dword_10013B74 = 2;
      v3 = 0;
    }
  }
  __scrt_release_startup_lock(v6);
  if ( v3 != 0 )
    return 0;
  v4 = (_DWORD *)sub_10002BD2();
  v5 = v4;
  if ( *v4 != 0 && (unsigned __int8)__scrt_is_nonwritable_in_current_image(v4) != 0 )
    ((void (__thiscall *)(_DWORD, HINSTANCE, int, void *const))*v5)(*v5, a1, 2, a2);
  ++dword_10013850;
  return 1;
}

// Address: 0x100024A4
BOOL __cdecl dllmain_crt_process_detach(__vcrt_bool Terminating)
{
  char v2; // [esp+10h] [ebp-1Ch]

  if ( dword_10013850 <= 0 )
    return false;
  --dword_10013850;
  v2 = __scrt_acquire_startup_lock();
  if ( dword_10013B74 != 2 )
    __scrt_fastfail(7);
  __scrt_dllmain_uninitialize_c();
  dword_10013B74 = 0;
  sub_100028F9(268444919);
  __scrt_release_startup_lock(v2);
  return (unsigned __int8)__scrt_uninitialize_crt(Terminating, 0) != 0;
}

// Address: 0x10002521
int __cdecl dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, void *const lpvReserved)
{
  void *v4; // ebx
  int v5; // esi
  BOOL v6; // eax

  if ( fdwReason == 0 && dword_10013850 <= 0 )
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

// Address: 0x1000261D
int __stdcall dllmain_raw(HINSTANCE a1, unsigned int a2, void *const a3)
{
  return 1;
}

// Address: 0x10002647
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}

// Address: 0x1000266A
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
        sub_10002EA8();
      sub_10002E8B();
    }
  }
  return result;
}

// Address: 0x1000269D
// attributes: thunk
void __cdecl j_j___free_base(void *Block)
{
  j___free_base(Block);
}

// Address: 0x100026A2
BOOL __cdecl __raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // eax

  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x100026CA
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
  dword_10013958 = 0;
  dword_10013954 = v4;
  dword_10013950 = v3;
  dword_1001394C = v0;
  dword_10013948 = v2;
  dword_10013944 = v1;
  word_10013970 = __SS__;
  word_10013964 = __CS__;
  word_10013940 = __DS__;
  word_1001393C = __ES__;
  word_10013938 = __FS__;
  word_10013934 = __GS__;
  v5 = __readeflags();
  dword_10013968 = v5;
  dword_1001395C = vars0;
  dword_10013960 = retaddr;
  dword_1001396C = (int)&v8;
  dword_100138A8 = 65537;
  dword_10013864 = retaddr;
  dword_10013858 = -1073740791;
  dword_1001385C = 1;
  dword_10013868 = 1;
  dword_1001386C = 2;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}

// Address: 0x100027C5
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

// Address: 0x10002809
char __scrt_acquire_startup_lock()
{
  PVOID StackBase; // edx
  signed __int32 v2; // eax

  if ( __scrt_is_ucrt_dll_in_use() == 0 )
    return 0;
  StackBase = NtCurrentTeb()->NtTib.StackBase;
  do
  {
    v2 = _InterlockedCompareExchange(&dword_10013B78, (signed __int32)StackBase, 0);
    if ( v2 == 0 )
      return 0;
  }
  while ( StackBase != (PVOID)v2 );
  return 1;
}

// Address: 0x1000283E
char __scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode v0; // eax

  if ( __scrt_is_ucrt_dll_in_use() != 0 )
  {
    __isa_available_init();
  }
  else
  {
    v0 = sub_1000306C();
    if ( _configure_narrow_argv(v0) != 0 )
      return 0;
    common_initialize_environment_nolock<char>();
  }
  return 1;
}

// Address: 0x10002869
bool __scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)__scrt_initialize_onexit_tables(0) != 0;
}

// Address: 0x10002877
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

// Address: 0x10002896
char sub_10002896()
{
  __acrt_thread_detach();
  __vcrt_thread_detach();
  return 1;
}

// Address: 0x100028A3
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

// Address: 0x100028D6
void __scrt_dllmain_uninitialize_c()
{
  if ( __scrt_is_ucrt_dll_in_use() != 0 )
  {
    _execute_onexit_table(&Table);
  }
  else if ( sub_100041FA() == 0 )
  {
    _cexit();
  }
}

// Address: 0x100028F9
__vcrt_bool sub_100028F9()
{
  __acrt_uninitialize_critical(false);
  return __vcrt_uninitialize_critical();
}

// Address: 0x10002906
char __cdecl __scrt_initialize_crt(int a1)
{
  if ( a1 == 0 )
    byte_10013B94 = 1;
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

// Address: 0x1000293F
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
    return _initialize_onexit_table(&Table) == 0 && _initialize_onexit_table(&stru_10013B88) == 0;
  v2 = (_PVFV *)(__security_cookie ^ __ROR4__(-1, 32 - (__security_cookie & 0x1F)));
  Table._first = v2;
  Table._last = v2;
  Table._end = v2;
  v3._first = v2;
  v3._last = v2;
  v3._end = v2;
  stru_10013B88 = v3;
  return true;
}

// Address: 0x100029D6
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

// Address: 0x10002A60
__int32 __cdecl __scrt_release_startup_lock(char a1)
{
  __int32 result; // eax

  result = __scrt_is_ucrt_dll_in_use();
  if ( result != 0 && a1 == 0 )
    return _InterlockedExchange(&dword_10013B78, 0);
  return result;
}

// Address: 0x10002A7D
char __cdecl __scrt_uninitialize_crt(__vcrt_bool Terminating, char a2)
{
  if ( byte_10013B94 == 0 || a2 == 0 )
  {
    __acrt_uninitialize(Terminating);
    __vcrt_uninitialize(Terminating);
  }
  return 1;
}

// Address: 0x10002AA5
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int v1; // eax

  if ( __ROR4__((int)Table._first ^ __security_cookie, __security_cookie & 0x1F) == -1 )
    v1 = sub_10004A76(Func);
  else
    v1 = _register_onexit_function(&Table, Func);
  return v1 == 0 ? Func : nullptr;
}

// Address: 0x10002AE0
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x10002AF5
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
    dword_10013008 = ~v0;
  }
  else
  {
    dword_10013008 = ~__security_cookie;
  }
}

// Address: 0x10002B91
void sub_10002B91()
{
  InitializeSListHead(&ListHead);
}

// Address: 0x10002B9D
void __cdecl sub_10002B9D()
{
  __std_type_info_destroy_list(&ListHead);
}

// Address: 0x10002BA9
void *sub_10002BA9()
{
  return &unk_10013BA0;
}

// Address: 0x10002BAF
void *sub_10002BAF()
{
  return &unk_10013BA8;
}

// Address: 0x10002BB5
_DWORD *__scrt_initialize_default_local_stdio_options()
{
  _DWORD *v0; // eax
  int v1; // ecx
  _DWORD *result; // eax
  int v3; // ecx

  v0 = sub_10002BA9();
  v1 = v0[1];
  *v0 |= 4u;
  v0[1] = v1;
  result = sub_10002BAF();
  v3 = result[1];
  *result |= 2u;
  result[1] = v3;
  return result;
}

// Address: 0x10002BD2
void *sub_10002BD2()
{
  return &unk_1001425C;
}

// Address: 0x10002BD8
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
  dword_10013BB0 = 0;
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
    dword_10013BB0 &= result;
  }
  return result;
}

// Address: 0x10002CF3
void sub_10002CF3()
{
  dword_10013BB0 = 0;
}

// Address: 0x10002CFB
void sub_10002CFB()
{
  ;
}

// Address: 0x10002D26
void __cdecl sub_10002D26()
{
  ;
}

// Address: 0x10002D51
// attributes: thunk
void _guard_check_icall_nop()
{
  ;
}

// Address: 0x10002D60
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_1000B390;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x10002DA6
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { bnd retn }
}

// Address: 0x10002DBB
std::exception *__thiscall sub_10002DBB(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10002DD6
_DWORD *__thiscall sub_10002DD6(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad allocation";
  *this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10002DEE
std::exception *__thiscall sub_10002DEE(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}

// Address: 0x10002E09
_DWORD *__thiscall sub_10002E09(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad array new length";
  *this = &std::bad_array_new_length::`vftable';
  return this;
}

// Address: 0x10002E21
std::exception *__thiscall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  __std_exception_copy((char *)a2 + 4, (char *)this + 4);
  return this;
}

// Address: 0x10002E4D
// Microsoft VisualC 14/net runtime
int __thiscall unknown_libname_1(_DWORD *this)
{
  *this = &std::exception::`vftable';
  return __std_exception_destroy(this + 1);
}

// Address: 0x10002E5E
// Microsoft VisualC 14/net runtime
char *__thiscall unknown_libname_2(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_1000307C(Block);
  return Block;
}

// Address: 0x10002E8B
void __noreturn sub_10002E8B()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_10002DD6(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
}

// Address: 0x10002EA8
void __noreturn sub_10002EA8()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_10002E09(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVbad_array_new_length_std__);
}

// Address: 0x10002EC5
const char *__thiscall std::exception::what(std::exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x10002ED2
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

  dword_10013BB4 = 0;
  dword_10013020 |= 1u;
  if ( IsProcessorFeaturePresent(0xAu) )
  {
    v22 = 0;
    _EAX = 0;
    dword_10013020 |= 2u;
    dword_10013BB4 = 1;
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
      v12 = dword_10013BB8 | 1;
      dword_10013BB8 |= 1u;
    }
    else
    {
      v12 = dword_10013BB8;
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
        dword_10013BB8 = v12 | 2;
    }
    if ( (v13 & 0x100000) != 0 )
    {
      dword_10013020 |= 4u;
      dword_10013BB4 = 2;
      if ( (v13 & 0x8000000) != 0 && (v13 & 0x10000000) != 0 )
      {
        __asm { xgetbv }
        if ( (v13 & 6) == 6 )
        {
          v19 = dword_10013020 | 8;
          dword_10013BB4 = 3;
          dword_10013020 |= 8u;
          if ( (v22 & 0x20) != 0 )
          {
            dword_10013BB4 = 5;
            dword_10013020 = v19 | 0x20;
          }
        }
      }
    }
  }
  return 0;
}

// Address: 0x1000306C
int sub_1000306C()
{
  return 1;
}

// Address: 0x10003070
BOOL __scrt_is_ucrt_dll_in_use()
{
  return dword_10014258 != 0;
}

// Address: 0x1000307C
void __cdecl sub_1000307C(void *Block)
{
  j_j___free_base(Block);
}

// Address: 0x1000308A
_DWORD *__thiscall sub_1000308A(_DWORD *Block, char a2)
{
  *Block = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000307C(Block);
  return Block;
}

// Address: 0x100030B0
int __cdecl ValidateLocalCookies(int a1)
{
  return *(_DWORD *)(a1 + 8);
}

// Address: 0x100030F0
int __cdecl SEH_1000B390(PEXCEPTION_RECORD ExceptionRecord, _DWORD *TargetFrame, int a3)
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
            if ( ExceptionRecord->ExceptionCode == -529697949 && dword_10014260 != nullptr )
            {
              if ( _IsNonwritableInCurrentImage(&dword_10014260) != 0 )
              {
                dword_10014260(ExceptionRecord, 1);
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

// Address: 0x10003256
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

// Address: 0x1000327F
__vcrt_bool __cdecl __vcrt_thread_attach()
{
  return __vcrt_getptd_noexit() != 0;
}

// Address: 0x1000328A
__vcrt_bool __cdecl __vcrt_thread_detach()
{
  __vcrt_freeptd(nullptr);
  return true;
}

// Address: 0x10003295
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

// Address: 0x100032B4
__vcrt_bool __cdecl __vcrt_uninitialize_critical()
{
  __vcrt_uninitialize_ptd();
  return true;
}

// Address: 0x100032BC
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

// Address: 0x100032E0
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
    if ( _bittest(&dword_10013BB8, 1u) )
    {
      memset(a1, Val, Size);
      return a1;
    }
    if ( !_bittest(&dword_10013020, 1u) )
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
  if ( !_bittest(&dword_10013020, 1u) )
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

// Address: 0x1000343A
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

// Address: 0x1000349D
void __cdecl __std_exception_destroy(int a1)
{
  if ( *(_BYTE *)(a1 + 4) != 0 )
    j___free_base(*(void **)a1);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
}

// Address: 0x100034BC
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _ThrowInfo *v2; // edi
  int v3; // [esp-4h] [ebp-30h]
  DWORD dwExceptionCode[8]; // [esp+Ch] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_1000D354, sizeof(dwExceptionCode));
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

// Address: 0x10003530
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

// Address: 0x100035C0
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

// Address: 0x10003606
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x1000362E
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x10003645
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x1000365E
void __fastcall _EH4_GlobalUnwind2(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &ReturnPoint, ExceptionRecord, nullptr);
}

// Address: 0x10003677
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x1000368E
void _guard_check_icall_nop()
{
  ;
}

// Address: 0x1000368F
void __stdcall __vcrt_freefls(void *Block)
{
  if ( Block != nullptr && Block != &unk_10013BBC )
    _free_base(Block);
}

// Address: 0x100036AB
void __cdecl __vcrt_freeptd(void *Block)
{
  DWORD v1; // eax
  void *Value; // esi

  v1 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = Block;
    if ( Block == nullptr )
    {
      Value = (void *)__vcrt_FlsGetValue(dwTlsIndex);
      v1 = dwTlsIndex;
    }
    __vcrt_FlsSetValue(v1, nullptr);
    __vcrt_freefls(Value);
  }
}

// Address: 0x100036E1
int __vcrt_getptd_noexit()
{
  DWORD LastError; // edi
  int Value; // eax
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi

  if ( dwTlsIndex == -1 )
    return 0;
  LastError = GetLastError();
  Value = __vcrt_FlsGetValue(dwTlsIndex);
  v3 = Value;
  if ( Value == -1 )
  {
LABEL_6:
    v3 = 0;
    goto LABEL_12;
  }
  if ( Value == 0 )
  {
    if ( __vcrt_FlsSetValue(dwTlsIndex, (LPVOID)0xFFFFFFFF) != 0 )
    {
      v4 = _calloc_base(1u, 0x28u);
      v5 = v4;
      if ( v4 != nullptr && __vcrt_FlsSetValue(dwTlsIndex, v4) != 0 )
      {
        v3 = (int)v5;
        v5 = nullptr;
      }
      else
      {
        v3 = 0;
        __vcrt_FlsSetValue(dwTlsIndex, nullptr);
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

// Address: 0x10003773
char __vcrt_initialize_ptd()
{
  DWORD v0; // eax

  v0 = __vcrt_FlsAlloc(__vcrt_freefls);
  dwTlsIndex = v0;
  if ( v0 == -1 )
    return 0;
  if ( __vcrt_FlsSetValue(v0, &unk_10013BBC) == 0 )
  {
    __vcrt_uninitialize_ptd();
    return 0;
  }
  return 1;
}

// Address: 0x100037A6
char __vcrt_uninitialize_ptd()
{
  if ( dwTlsIndex != -1 )
  {
    __vcrt_FlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return 1;
}

// Address: 0x100037C1
char __vcrt_initialize_locks()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &CriticalSection;
  v1 = 0;
  while ( __vcrt_InitializeCriticalSectionEx(v0, 0xFA0u, 0) != 0 )
  {
    ++dword_10013BFC;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x18 )
      return 1;
  }
  __vcrt_uninitialize_locks();
  return 0;
}

// Address: 0x100037FD
char __vcrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_10013BFC;
  if ( dword_10013BFC != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_10013BCC + 24 * dword_10013BFC);
    do
    {
      DeleteCriticalSection(v1);
      --dword_10013BFC;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

// Address: 0x1000382C
// Microsoft VisualC 14/net runtime
uintptr_t __cdecl unknown_libname_3(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

// Address: 0x10003849
FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, _DWORD *a3, _DWORD *a4)
{
  volatile signed __int32 *v4; // ebx
  signed __int32 v5; // eax
  uintptr_t v6; // edx
  FARPROC v7; // esi
  _DWORD *v9; // esi
  HMODULE module; // eax
  FARPROC ProcAddress; // eax

  v4 = (volatile signed __int32 *)((char *)&dword_10013C10 + 4 * a1);
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
        _InterlockedExchange(v4, unknown_libname_3((int)ProcAddress));
        return v7;
      }
      v6 = __security_cookie;
    }
    _InterlockedExchange(v4, v6 ^ __ROR4__(-1, 32 - (v6 & 0x1F)));
  }
  return nullptr;
}

// Address: 0x100038E9
HMODULE __cdecl try_get_module(int a1)
{
  volatile signed __int32 *v1; // edi
  signed __int32 v2; // eax
  const WCHAR *v4; // ebx
  HMODULE Library; // esi

  v1 = (volatile signed __int32 *)((char *)&unk_10013C00 + 4 * a1);
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

// Address: 0x1000396A
DWORD __cdecl __vcrt_FlsAlloc(int a1)
{
  FARPROC function; // eax

  function = try_get_function(4, "FlsAlloc", dword_1000D424, "FlsAlloc");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int))function)(function, a1);
  else
    return TlsAlloc();
}

// Address: 0x100039A4
int __cdecl __vcrt_FlsFree(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(5, "FlsFree", dword_1000D438, "FlsFree");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}

// Address: 0x100039DE
LPVOID __cdecl __vcrt_FlsGetValue(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(6, "FlsGetValue", dword_1000D448, "FlsGetValue");
  if ( function != nullptr )
    return (LPVOID)((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}

// Address: 0x10003A18
int __cdecl __vcrt_FlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC function; // eax

  function = try_get_function(7, "FlsSetValue", dword_1000D45C, "FlsSetValue");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD, LPVOID))function)(function, dwTlsIndex, lpTlsValue);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x10003A55
int __cdecl __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC function; // eax

  function = try_get_function(8, "InitializeCriticalSectionEx", dword_1000D470, "InitializeCriticalSectionEx");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))function)(
             function,
             lpCriticalSection,
             dwSpinCount,
             a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x10003A9B
uintptr_t *__vcrt_initialize_winapi_thunks()
{
  uintptr_t *result; // eax
  int v1; // ecx
  uintptr_t v2; // esi

  result = (uintptr_t *)dword_10013C10;
  v1 = 0;
  v2 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  do
  {
    ++v1;
    *result++ = v2;
  }
  while ( v1 != (&dword_10013C34 < dword_10013C10 ? 0 : 9) );
  return result;
}

// Address: 0x10003AD5
BOOL __cdecl __vcrt_uninitialize_winapi_thunks(char a1)
{
  HMODULE *v1; // esi
  BOOL result; // eax

  if ( a1 == 0 )
  {
    v1 = (HMODULE *)&unk_10013C00;
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
    while ( v1 != (HMODULE *)dword_10013C10 );
  }
  return result;
}

// Address: 0x10003B07
uintptr_t __vcrt_initialize_pure_virtual_call_handler()
{
  uintptr_t result; // eax

  result = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  dword_10013C34 = result;
  return result;
}

// Address: 0x10003B30
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x10003B50
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

// Address: 0x10003B95
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

// Address: 0x10003C19
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

// Address: 0x10003C3C
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x10003C50);
}

// Address: 0x10003C45
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_10013048 = a3;
  unk_10013044 = result;
  unk_1001304C = a2;
  return result;
}

// Address: 0x10003C64
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x10003C67
char *__cdecl _strdup(const char *Source)
{
  char *result; // eax
  unsigned int v2; // kr00_4
  char *v3; // edi

  if ( Source == nullptr )
    return nullptr;
  v2 = strlen(Source);
  result = (char *)malloc(v2 + 1);
  v3 = result;
  if ( result != nullptr )
  {
    if ( strcpy_s(result, v2 + 1, Source) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    return v3;
  }
  return result;
}

// Address: 0x10003CBD
// attributes: thunk
void __cdecl j___free_base(void *Block)
{
  _free_base(Block);
}

// Address: 0x10003CC2
void *__cdecl malloc(size_t Size)
{
  return _malloc_base(Size);
}

// Address: 0x10003CCD
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

// Address: 0x10003D29
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

// Address: 0x10003D6E
int __cdecl sub_10003D6E(int a1)
{
  return unknown_libname_9(a1);
}

// Address: 0x10003D82
int __cdecl _callnewh(size_t Size)
{
  _PNH new_handler; // eax

  new_handler = _query_new_handler();
  return new_handler != nullptr && new_handler(Size) != 0;
}

// Address: 0x10003DC6
_PNH __cdecl _query_new_handler()
{
  int (__cdecl *v1)(size_t); // [esp+10h] [ebp-1Ch]

  __acrt_lock(0);
  v1 = (int (__cdecl *)(size_t))__ROR4__(dword_10013C74 ^ __security_cookie, __security_cookie & 0x1F);
  __acrt_unlock(0);
  return v1;
}

// Address: 0x10003E18
int __cdecl _seh_filter_dll(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  if ( ExceptionNum == -529697949 )
    return _seh_filter_exe(0xE06D7363, ExceptionPtr);
  else
    return 0;
}

// Address: 0x10003E38
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

// Address: 0x10003FAB
BOOL __cdecl atexit_exception_filter(unsigned int a1)
{
  return a1 == -529697949;
}

// Address: 0x10003FBE
void __cdecl common_exit(UINT uExitCode, enum _crt_exit_cleanup_mode a2, enum _crt_exit_return_mode a3)
{
  void (__thiscall *v3)(_DWORD, _DWORD, _DWORD, _DWORD); // ecx

  if ( a3 == _crt_exit_terminate_process && (unsigned __int8)__scrt_is_managed_app() != 0 )
    try_cor_exit_process(uExitCode);
  __acrt_lock(2);
  if ( byte_10013C80 == 0 )
  {
    _InterlockedExchange(&dword_10013C78, 1);
    if ( a2 != _crt_exit_full_cleanup )
    {
      if ( a2 == _crt_exit_quick_cleanup )
        _execute_onexit_table(&stru_10013DAC);
    }
    else
    {
      if ( dword_10013C7C != (__security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F))) )
      {
        v3 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))__ROR4__(
                                                                    dword_10013C7C ^ __security_cookie,
                                                                    __security_cookie & 0x1F);
        v3(v3, 0, 0, 0);
      }
      _execute_onexit_table(&stru_10013DA0);
    }
    if ( a2 == _crt_exit_full_cleanup )
      _initterm((_PVFV *)&dword_1000D1B4, (_PVFV *)&dword_1000D1C4);
    _initterm((_PVFV *)&dword_1000D1C8, (_PVFV *)&dword_1000D1CC);
    if ( a3 == _crt_exit_terminate_process )
      byte_10013C80 = 1;
  }
  __acrt_unlock(2);
  if ( a3 == _crt_exit_terminate_process )
    exit_or_terminate_process(uExitCode);
}

// Address: 0x100040D7
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

// Address: 0x10004118
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

// Address: 0x1000415C
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

// Address: 0x100041C6
int __cdecl sub_100041C6(int a1)
{
  dword_10013C7C = a1;
  return a1;
}

// Address: 0x100041D5
void __cdecl _cexit()
{
  common_exit(0, _crt_exit_full_cleanup, _crt_exit_return_to_caller);
}

// Address: 0x100041E4
void __cdecl __noreturn _exit(int Code)
{
  common_exit(Code, _crt_exit_no_cleanup, _crt_exit_terminate_process);
}

// Address: 0x100041FA
int sub_100041FA()
{
  return dword_10013C78;
}

// Address: 0x10004200
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
  v3 = (CHAR *)dword_10014000;
  dword_10014008 = (int)Filename;
  if ( dword_10014000 == 0 || *(_BYTE *)dword_10014000 == 0 )
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
        dword_10013FF4 = v9;
        Block = nullptr;
        v6 = 0;
        dword_10013FF8 = v8;
      }
      _free_base(v7);
      Block = nullptr;
      goto LABEL_18;
    }
    dword_10013FF4 = v13 - 1;
    v5 = buffer_for_argv;
    buffer_for_argv = nullptr;
    dword_10013FF8 = v5;
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

// Address: 0x10004324
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

// Address: 0x10004499
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

// Address: 0x100044EE
errno_t __cdecl _configure_narrow_argv(_crt_argv_mode mode)
{
  return common_configure_argv<char>(mode);
}

// Address: 0x100044F9
int common_initialize_environment_nolock<char>()
{
  char *narrow_environment_from_os; // eax
  char *v2; // esi
  int v3; // edi
  void *v4; // eax

  if ( dword_10013D90 != 0 )
    return 0;
  __acrt_initialize_multibyte();
  narrow_environment_from_os = (char *)__dcrt_get_narrow_environment_from_os();
  v2 = narrow_environment_from_os;
  if ( narrow_environment_from_os != nullptr )
  {
    v4 = (void *)create_environment<char>(narrow_environment_from_os);
    if ( v4 != nullptr )
    {
      dword_10013D9C = v4;
      unknown_libname_9(v4);
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

// Address: 0x10004552
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
          unknown_libname_6(v6);
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

// Address: 0x10004623
// Microsoft VisualC universal runtime
void __cdecl unknown_libname_6(void **Block)
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

// Address: 0x10004652
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_7(char *this, int (__cdecl *a2)(char *))
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

// Address: 0x10004692
void __cdecl sub_10004692(void ***a1)
{
  if ( *a1 != dword_10013D9C )
    unknown_libname_6(*a1);
}

// Address: 0x100046AD
void __cdecl sub_100046AD(void ***a1)
{
  if ( *a1 != dword_10013D98 )
    unknown_libname_6(*a1);
}

// Address: 0x100046C8
void __dcrt_uninitialize_environments_nolock()
{
  unknown_libname_7((char *)&dword_10013D90, (int (__cdecl *)(char *))sub_10004692);
  unknown_libname_7(byte_10013D94, (int (__cdecl *)(char *))sub_100046AD);
  unknown_libname_6((void **)dword_10013D9C);
  unknown_libname_6((void **)dword_10013D98);
}

// Address: 0x100046FF
// attributes: thunk
int common_initialize_environment_nolock<char>(void)
{
  return ??$common_initialize_environment_nolock@D@@YAHXZ();
}

// Address: 0x10004704
int __stdcall __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = _lambda_4e60a939b0d047cfe11ddc22648dfba9_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x10004755
int __stdcall __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = _lambda_275893d493268fdec8709772e3fcec0e_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x100047A6
int __cdecl sub_100047A6(int a1, int a2)
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

// Address: 0x100047CE
int __cdecl sub_100047CE(int a1, int a2)
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

// Address: 0x100047F6
// Microsoft VisualC universal runtime
uintptr_t __cdecl unknown_libname_8(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

// Address: 0x10004815
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

// Address: 0x10004935
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
    if ( v9 < v8 || (v15 = sub_10006978(v6, v9, 4), _free_base(nullptr), v10 = (char *)v15, v15 == 0) )
    {
      v9 = v8 + 4;
      v16 = sub_10006978(v6, v8 + 4, 4);
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
  *v4 = unknown_libname_8(**(this + 1));
  *(_DWORD *)**this = unknown_libname_3((int)v6);
  *(_DWORD *)(**this + 4) = unknown_libname_3((int)(v4 + 1));
  *(_DWORD *)(**this + 8) = unknown_libname_3(v5);
  return 0;
}

// Address: 0x10004A76
int __cdecl sub_10004A76(_onexit_t Function)
{
  return _register_onexit_function(&stru_10013DA0, Function);
}

// Address: 0x10004A8C
int __cdecl _execute_onexit_table(_onexit_table_t *Table)
{
  _onexit_table_t **p_Table; // [esp+0h] [ebp-4h] BYREF

  p_Table = &Table;
  return sub_100047A6(2, (int)&p_Table);
}

// Address: 0x10004AA9
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

// Address: 0x10004AE6
int __cdecl _register_onexit_function(_onexit_table_t *Table, _onexit_t Function)
{
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  v3[0] = &Table;
  v3[1] = &Function;
  return sub_100047CE(2, (int)v3);
}

// Address: 0x10004B0A
char sub_10004B0A()
{
  unknown_libname_9(&off_10013588);
  return 1;
}

// Address: 0x10004B1C
char initialize_c()
{
  _initialize_onexit_table(&stru_10013DA0);
  _initialize_onexit_table(&stru_10013DAC);
  return 1;
}

// Address: 0x10004B36
char sub_10004B36()
{
  __dcrt_uninitialize_environments_nolock();
  return 1;
}

// Address: 0x10004B3E
char initialize_pointers()
{
  uintptr_t v0; // esi

  v0 = __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F));
  sub_10004FF1(v0);
  sub_10003D6E(v0);
  __acrt_initialize_signal_handlers(v0);
  sub_10007031(v0);
  sub_100041C6(v0);
  return 1;
}

// Address: 0x10004B7B
__vcrt_bool sub_10004B7B()
{
  return __vcrt_uninitialize(false);
}

// Address: 0x10004B84
char uninitialize_allocated_memory()
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)off_10013580, 0xFFFFFFFF) == 0
    && off_10013580 != &unk_10013360 )
  {
    _free_base(off_10013580);
    off_10013580 = &unk_10013360;
  }
  _free_base(dword_1001422C);
  dword_1001422C = nullptr;
  _free_base(dword_10014230);
  dword_10014230 = nullptr;
  _free_base(dword_10013FF8);
  dword_10013FF8 = nullptr;
  _free_base(dword_10013FFC);
  dword_10013FFC = nullptr;
  return 1;
}

// Address: 0x10004BFB
// Microsoft VisualC universal runtime
int __fastcall unknown_libname_9(_DWORD *a1, int a2, int a3)
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

// Address: 0x10004C2C
__crt_bool __cdecl __acrt_initialize()
{
  return __acrt_execute_initializers(&off_1000DCC0, &off_1000DD38);
}

// Address: 0x10004C3E
__crt_bool __cdecl __acrt_thread_attach()
{
  return __acrt_getptd_noexit() != 0;
}

// Address: 0x10004C49
__crt_bool __cdecl __acrt_thread_detach()
{
  __acrt_freeptd();
  return true;
}

// Address: 0x10004C51
__crt_bool __cdecl __acrt_uninitialize(__crt_bool Terminating)
{
  return __acrt_execute_uninitializers(&off_1000DCC0, &off_1000DD38);
}

// Address: 0x10004C63
__crt_bool __cdecl __acrt_uninitialize_critical(__crt_bool Terminating)
{
  __acrt_uninitialize_ptd(Terminating);
  return true;
}

// Address: 0x10004C75
void __noreturn terminate()
{
  void (__thiscall *v0)(_DWORD); // esi

  v0 = *(void (__thiscall **)(_DWORD))(__acrt_getptd() + 12);
  if ( v0 != nullptr )
    v0(v0);
  abort();
}

// Address: 0x10004CB1
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

// Address: 0x10004CEB
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
      if ( sub_1000708E() == 0 || _callnewh(v1) == 0 )
        goto LABEL_8;
    }
  }
  return result;
}

// Address: 0x10004D39
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

// Address: 0x10004D93
void __cdecl __noreturn abort()
{
  if ( __acrt_get_sigabrt_handler() != 0 )
    raise(22);
  if ( (byte_10013050 & 2) != 0 )
  {
    if ( IsProcessorFeaturePresent(0x17u) )
      __fastfail(7u);
    __acrt_call_reportfault(3, 1073741845, 1);
  }
  _exit(3);
}

// Address: 0x10004DD6
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
      if ( sub_1000708E() == 0 || _callnewh(v2) == 0 )
        goto LABEL_9;
    }
  }
  return result;
}

// Address: 0x10004E33
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
  if ( dword_10014240 == 0 )
  {
    *((_DWORD *)this + 1) = off_10013640;
    mbcinfo = (struct __crt_multibyte_data *)off_10013644;
    goto LABEL_5;
  }
  v4 = __acrt_getptd();
  *(_DWORD *)this = v4;
  *((_DWORD *)this + 1) = *(_DWORD *)(v4 + 76);
  *((_DWORD *)this + 2) = *(_DWORD *)(v4 + 72);
  sub_100071A8(v4, (char *)this + 4);
  sub_100071D5(*(_DWORD *)this, (char *)this + 8);
  v5 = *(_DWORD *)(*(_DWORD *)this + 848);
  if ( (v5 & 2) == 0 )
  {
    *(_DWORD *)(*(_DWORD *)this + 848) = v5 | 2;
    *((_BYTE *)this + 12) = 1;
  }
  return this;
}

// Address: 0x10004EB6
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
    sub_10002CF3();
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
    sub_10002CF3();
}

// Address: 0x10004FF1
int __usercall sub_10004FF1@<eax>(int a1@<edx>, int a2)
{
  return unknown_libname_9(&dword_10013DB8, a1, a2);
}

// Address: 0x10005005
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
                                                                                      dword_10013DB8 ^ __security_cookie,
                                                                                      __security_cookie & 0x1F);
    v9 = FunctionName;
    v8 = Expression;
    if ( v6 == nullptr )
      _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v6(v8, v9, v10, v11, v12);
}

// Address: 0x10005080
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x10005090
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

// Address: 0x100050C3
char __acrt_initialize_locks()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_10013DC0;
  v1 = 0;
  while ( __acrt_InitializeCriticalSectionEx(v0, 0xFA0u, 0) != 0 )
  {
    ++dword_10013EF8;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x138 )
      return 1;
  }
  __acrt_uninitialize_locks(0);
  return 0;
}

// Address: 0x10005104
void __cdecl __acrt_lock(int a1)
{
  EnterCriticalSection(&stru_10013DC0 + a1);
}

// Address: 0x1000511B
char __acrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_10013EF8;
  if ( dword_10013EF8 != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)(&stru_10013DA0._end + 6 * dword_10013EF8);
    do
    {
      DeleteCriticalSection(v1);
      --dword_10013EF8;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

// Address: 0x1000514C
void __cdecl __acrt_unlock(int a1)
{
  LeaveCriticalSection(&stru_10013DC0 + a1);
}

// Address: 0x10005163
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

// Address: 0x100051B3
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_51b6e8b1eb166f2a3faf91f424b38130_,_lambda_6250bd4b2a391816dd638c3bf72b0bcb_ &,_lambda_0b5a4a3e68152e1d9b943535f5f47bed_>(
        int *a1,
        int a2,
        int *a3)
{
  void *v3; // ecx

  __acrt_lock(*a1);
  v3 = *(void **)(**(_DWORD **)a2 + 72);
  if ( v3 != nullptr && _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 0 && v3 != &unk_10013360 )
    _free_base(v3);
  __acrt_unlock(*a3);
}

// Address: 0x10005214
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_5b71d36f03204c0beab531769a5b5694_,_lambda_be2b3da3f62db62e9dad5dc70221a656_ &,_lambda_8f9ce462984622f9bf76b59e2aaaf805_>(
        int *a1,
        struct __acrt_ptd *const **a2,
        int *a3)
{
  __acrt_lock(*a1);
  replace_current_thread_locale_nolock(**a2, nullptr);
  __acrt_unlock(*a3);
}

// Address: 0x1000525F
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_9df27f884b057bc3edfc946cb5b7cf47_,_lambda_e69574bed617af4e071282c136b37893_ &,_lambda_cc0d902bcbbeb830f749456577db4721_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_DWORD **)a2 + 72));
  __acrt_unlock(*a3);
}

// Address: 0x100052A7
void __cdecl sub_100052A7(int a1, int a2)
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

// Address: 0x100052CF
void __cdecl sub_100052CF(int a1, int a2)
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

// Address: 0x100052F7
void __cdecl sub_100052F7(int a1, struct __acrt_ptd *const **a2)
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

// Address: 0x1000531F
void __cdecl sub_1000531F(int a1, int a2)
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

// Address: 0x10005347
void __cdecl construct_ptd(struct __acrt_ptd *const a1, struct __crt_locale_data **const a2)
{
  struct __acrt_ptd *const *v2; // [esp+0h] [ebp-8h] BYREF
  struct __crt_locale_data **const *v3; // [esp+4h] [ebp-4h] BYREF

  *((_DWORD *)a1 + 6) = 1;
  *(_DWORD *)a1 = &unk_1000DBF8;
  *((_DWORD *)a1 + 212) = 1;
  *((_DWORD *)a1 + 18) = &unk_10013360;
  *((_WORD *)a1 + 54) = 67;
  *((_WORD *)a1 + 185) = 67;
  *((_DWORD *)a1 + 211) = 0;
  v3 = (struct __crt_locale_data **const *)&a1;
  sub_1000531F(5, (int)&v3);
  v2 = &a1;
  v3 = &a2;
  sub_100052CF(4, (int)&v2);
}

// Address: 0x100053C0
void __stdcall destroy_fls(struct __acrt_ptd *Block)
{
  if ( Block != nullptr )
  {
    destroy_ptd(Block);
    _free_base(Block);
  }
}

// Address: 0x100053E1
void __cdecl destroy_ptd(void **a1)
{
  struct __acrt_ptd *const *v1; // ecx
  void **v2; // eax
  void ***v3; // [esp+0h] [ebp-4h] BYREF

  v3 = (void ***)v1;
  v2 = a1;
  if ( *a1 != &unk_1000DBF8 )
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
  sub_100052A7(5, (int)&v3);
  v3 = &a1;
  sub_100052F7(4, (struct __acrt_ptd *const **)&v3);
}

// Address: 0x1000548A
void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd *const a1, struct __crt_locale_data *const a2)
{
  int v2; // eax

  if ( *((_DWORD *)a1 + 19) != 0 )
  {
    __acrt_release_locale_ref(*((_DWORD *)a1 + 19));
    v2 = *((_DWORD *)a1 + 19);
    if ( (struct __crt_locale_data *)v2 != dword_10014228
      && (wchar_t **)v2 != &off_10013588
      && *(_DWORD *)(v2 + 12) == 0 )
    {
      __acrt_free_locale(*((void **)a1 + 19));
    }
  }
  *((_DWORD *)a1 + 19) = a2;
  if ( a2 != nullptr )
    __acrt_add_locale_ref(a2);
}

// Address: 0x100054D5
void __acrt_freeptd()
{
  struct __acrt_ptd *Value; // esi

  if ( dword_10013054 != -1 )
  {
    Value = (struct __acrt_ptd *)__acrt_FlsGetValue(dword_10013054);
    if ( Value != nullptr )
    {
      __acrt_FlsSetValue(dword_10013054, nullptr);
      destroy_fls(Value);
    }
  }
}

// Address: 0x10005501
void *__acrt_getptd()
{
  DWORD LastError; // esi
  void *Value; // edi
  void *v2; // eax

  LastError = GetLastError();
  if ( dword_10013054 == -1 || (Value = (void *)__acrt_FlsGetValue(dword_10013054)) == nullptr )
  {
    v2 = _calloc_base(1u, 0x364u);
    Value = v2;
    if ( v2 == nullptr )
    {
      _free_base(nullptr);
      goto LABEL_9;
    }
    if ( __acrt_FlsSetValue(dword_10013054, v2) == 0 )
    {
      _free_base(Value);
      goto LABEL_9;
    }
    construct_ptd((struct __acrt_ptd *const)Value, &dword_10014228);
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

// Address: 0x10005585
void *__acrt_getptd_noexit()
{
  DWORD LastError; // esi
  int v1; // ebx
  void *Value; // edi
  void *v3; // eax

  LastError = GetLastError();
  v1 = 0;
  if ( dword_10013054 != -1 )
  {
    Value = (void *)__acrt_FlsGetValue(dword_10013054);
    if ( Value != nullptr )
      goto LABEL_9;
  }
  v3 = _calloc_base(1u, 0x364u);
  Value = v3;
  if ( v3 != nullptr )
  {
    if ( __acrt_FlsSetValue(dword_10013054, v3) == 0 )
    {
      _free_base(Value);
      goto LABEL_8;
    }
    construct_ptd((struct __acrt_ptd *const)Value, &dword_10014228);
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

// Address: 0x1000560A
char __acrt_initialize_ptd()
{
  dword_10013054 = __acrt_FlsAlloc(destroy_fls);
  if ( dword_10013054 == -1 )
    return 0;
  if ( __acrt_getptd_noexit() == nullptr )
  {
    __acrt_uninitialize_ptd(0);
    return 0;
  }
  return 1;
}

// Address: 0x10005636
char __acrt_uninitialize_ptd()
{
  if ( dword_10013054 != -1 )
  {
    __acrt_FlsFree(dword_10013054);
    dword_10013054 = -1;
  }
  return 1;
}

// Address: 0x10005650
FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, _DWORD *a3, _DWORD *a4)
{
  volatile __int32 *v4; // ebx
  uintptr_t v5; // edx
  FARPROC v6; // esi
  _DWORD *v8; // esi
  HMODULE module; // eax
  FARPROC ProcAddress; // eax

  v4 = (volatile __int32 *)((char *)&unk_10013F50 + 4 * a1);
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
        _InterlockedExchange(v4, unknown_libname_3((int)ProcAddress));
        return v6;
      }
      v5 = __security_cookie;
    }
    _InterlockedExchange(v4, v5 ^ __ROR4__(-1, 32 - (v5 & 0x1F)));
  }
  return nullptr;
}

// Address: 0x100056EC
HMODULE __cdecl try_get_module(int a1)
{
  volatile __int32 *v1; // edi
  const WCHAR *v3; // ebx
  HMODULE Library; // esi

  v1 = (volatile __int32 *)((char *)&unk_10013F00 + 4 * a1);
  if ( *v1 != 0 )
    return *v1 != -1 ? (HMODULE)*v1 : nullptr;
  v3 = (&off_1000DD38)[a1];
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

// Address: 0x10005767
DWORD __stdcall __acrt_FlsAlloc(int a1)
{
  FARPROC function; // eax

  function = try_get_function(3, "FlsAlloc", dword_1000E1D8, dword_1000E1E0);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int))function)(function, a1);
  else
    return TlsAlloc();
}

// Address: 0x100057BD
int __stdcall __acrt_FlsFree(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(4, "FlsFree", dword_1000E1E0, dword_1000E1E8);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}

// Address: 0x10005813
LPVOID __stdcall __acrt_FlsGetValue(DWORD dwTlsIndex)
{
  FARPROC function; // eax

  function = try_get_function(5, "FlsGetValue", dword_1000E1E8, dword_1000E1F0);
  if ( function != nullptr )
    return (LPVOID)((int (__thiscall *)(FARPROC, DWORD))function)(function, dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}

// Address: 0x10005869
int __stdcall __acrt_FlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC function; // eax

  function = try_get_function(6, "FlsSetValue", dword_1000E1F0, dword_1000E1F8);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD, LPVOID))function)(function, dwTlsIndex, lpTlsValue);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}

// Address: 0x100058C2
int __stdcall __acrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC function; // eax

  function = try_get_function(20, "InitializeCriticalSectionEx", "\b", dword_1000E21C);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))function)(
             function,
             lpCriticalSection,
             dwSpinCount,
             a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x10005924
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

  function = try_get_function(22, "LCMapStringEx", dword_1000E21C, "LCMapStringEx");
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

// Address: 0x100059AC
int __stdcall __acrt_LocaleNameToLCID(wchar_t *a1, int a2)
{
  FARPROC function; // eax

  function = try_get_function(24, "LocaleNameToLCID", dword_1000E234, "LocaleNameToLCID");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, wchar_t *, int))function)(function, a1, a2);
  else
    return __acrt_DownlevelLocaleNameToLCID(a1);
}

// Address: 0x10005A08
char __acrt_initialize_winapi_thunks()
{
  memset32(&unk_10013F50, __security_cookie ^ __ROR4__(0, 32 - (__security_cookie & 0x1F)), 0x20u);
  return 1;
}

// Address: 0x10005A2E
bool __acrt_is_packaged_app()
{
  FARPROC function; // esi
  int v2; // [esp+0h] [ebp-8h] BYREF

  if ( dword_10013FD0 != 0 )
    return dword_10013FD0 == 1;
  function = try_get_function(8, "GetCurrentPackageId", dword_1000E1F8, "GetCurrentPackageId");
  if ( function != nullptr && (v2 = 0, ((int (__thiscall *)(FARPROC, int *, _DWORD))function)(function, &v2, 0) == 122) )
  {
    _InterlockedExchange(&dword_10013FD0, 1);
    return true;
  }
  else
  {
    _InterlockedExchange(&dword_10013FD0, 2);
    return false;
  }
}

// Address: 0x10005AB5
int __cdecl __acrt_uninitialize_winapi_thunks(char a1)
{
  return __vcrt_uninitialize_winapi_thunks_0(a1);
}

// Address: 0x10005AB7
char __cdecl __vcrt_uninitialize_winapi_thunks_0(char a1)
{
  HMODULE *v1; // esi

  if ( a1 == 0 )
  {
    v1 = (HMODULE *)&unk_10013F00;
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
    while ( v1 != (HMODULE *)&unk_10013F50 );
  }
  return 1;
}

// Address: 0x10005AEB
int __cdecl __acrt_errno_from_os_error(int a1)
{
  unsigned int i; // eax

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_1000E250[2 * i] )
      return dword_1000E254[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x10005B2E
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

// Address: 0x10005B51
unsigned int *__cdecl __doserrno()
{
  char *v0; // eax

  v0 = (char *)__acrt_getptd_noexit();
  if ( v0 != nullptr )
    return (unsigned int *)(v0 + 20);
  else
    return (unsigned int *)&unk_1001305C;
}

// Address: 0x10005B64
int *__cdecl _errno()
{
  char *v0; // eax

  v0 = (char *)__acrt_getptd_noexit();
  if ( v0 != nullptr )
    return (int *)(v0 + 16);
  else
    return (int *)&unk_10013058;
}

// Address: 0x10005B77
// Microsoft VisualC universal runtime
int __cdecl CompareFunction(const void *a1, const void *a2)
{
  if ( a2 <= a1 )
    return a2 < a1;
  else
    return -1;
}

// Address: 0x10005B8F
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
    unknown_libname_11(&v19);
    return v8;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

// Address: 0x10005D1F
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
  v8 = sub_10005F5E(v7);
  _free_base(nullptr);
  return v8;
}

// Address: 0x10005DB5
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

// Address: 0x10005F39
// Microsoft VisualC universal runtime
void __thiscall unknown_libname_11(void ***this)
{
  void **i; // esi

  for ( i = *this; i != *(this + 1); ++i )
    _free_base(*i);
  _free_base(*this);
}

// Address: 0x10005F5E
int __thiscall sub_10005F5E(_DWORD **this, void *Block)
{
  int v3; // edi

  v3 = unknown_libname_12();
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

// Address: 0x10005F93
// Microsoft VisualC universal runtime
int __thiscall unknown_libname_12(int *this)
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
  v6 = sub_10006978((void *)*this, 2 * v5, 4);
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

// Address: 0x1000601A
int __cdecl __acrt_expand_narrow_argv_wildcards(const char **a1, _DWORD *a2)
{
  return common_expand_argv_wildcards<char>(a1, a2);
}

// Address: 0x10006025
void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_c76fdea48760d5f9368b465f31df4405_,_lambda_e378711a6f6581bf7f0efd7cdf97f5d9_ &,_lambda_e927a58b2a85c081d733e8c6192ae2d2_>(
        int *a1,
        int a2,
        int *a3)
{
  __acrt_lock(*a1);
  _lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c_::operator()(a2);
  __acrt_unlock(*a3);
}

// Address: 0x10006068
void __cdecl sub_10006068(int a1, int a2)
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

// Address: 0x10006090
volatile signed __int32 *__thiscall _lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c_::operator()(void *this)
{
  volatile signed __int32 *result; // eax

  dword_10013FD8 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 4);
  dword_10013FDC = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 8);
  dword_10013FD4 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 72) + 540);
  memcpy_s(&unk_10013FE0, 0xCu, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 12), 0xCu);
  memcpy_s(&unk_10013158, 0x101u, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 24), 0x101u);
  memcpy_s(&unk_10013260, 0x100u, (const void *const)(*(_DWORD *)(**(_DWORD **)this + 72) + 281), 0x100u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)off_10013580, 0xFFFFFFFF) == 0
    && off_10013580 != &unk_10013360 )
  {
    _free_base(off_10013580);
  }
  off_10013580 = *(void **)(**(_DWORD **)this + 72);
  result = *(volatile signed __int32 **)(**(_DWORD **)this + 72);
  _InterlockedIncrement(result);
  return result;
}

// Address: 0x10006154
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

// Address: 0x10006192
UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax
  _DWORD v2[3]; // [esp+0h] [ebp-10h] BYREF
  char v3; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v2, nullptr);
  dword_10013FEC = 0;
  result = a1;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_10013FEC = 1;
      result = GetOEMCP();
      break;
    case 0xFFFFFFFD:
      dword_10013FEC = 1;
      result = GetACP();
      break;
    case 0xFFFFFFFC:
      dword_10013FEC = 1;
      result = *(_DWORD *)(v2[1] + 8);
      break;
    default:
      break;
  }
  if ( v3 != 0 )
    *(_DWORD *)(v2[0] + 848) &= ~2u;
  return result;
}

// Address: 0x10006205
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
  v3 = &unk_10013360 - (_UNKNOWN *)a1;
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

// Address: 0x1000626A
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

// Address: 0x100063FE
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
        sub_10007364();
      if ( _InterlockedDecrement(*((volatile signed __int32 **)v9 + 18)) == 0
        && *((_UNKNOWN **)v9 + 18) != &unk_10013360 )
      {
        _free_base(*((void **)v9 + 18));
      }
      *v4 = 1;
      v6 = v4;
      v4 = nullptr;
      *((_DWORD *)v9 + 18) = v6;
      if ( (*((_BYTE *)v9 + 848) & 2) == 0 && (dword_10013700 & 1) == 0 )
      {
        SystemCP = (int)&v9;
        sub_10006068(5, (int)&SystemCP);
        if ( a2 )
          off_10013644 = off_10013580;
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

// Address: 0x100064FF
char __acrt_initialize_multibyte()
{
  if ( byte_10013FF0 == 0 )
  {
    setmbcp_internal(0xFFFFFFFD, true);
    byte_10013FF0 = 1;
  }
  return 1;
}

// Address: 0x1000651D
void *__acrt_update_thread_multibyte_data()
{
  _DWORD *v0; // eax
  _DWORD *v1; // edi
  void *v2; // esi

  v0 = __acrt_getptd();
  v1 = v0;
  if ( (dword_10013700 & v0[212]) != 0 && v0[19] != 0 )
  {
    v2 = (void *)v0[18];
  }
  else
  {
    __acrt_lock(5);
    v2 = (void *)v1[18];
    if ( v2 != off_10013580 )
    {
      if ( v2 != nullptr
        && _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 0
        && v2 != &unk_10013360 )
      {
        _free_base(v2);
      }
      v1[18] = off_10013580;
      v2 = off_10013580;
      _InterlockedIncrement((volatile signed __int32 *)off_10013580);
    }
    __acrt_unlock(5);
  }
  if ( v2 == nullptr )
    abort();
  return v2;
}

// Address: 0x100065BF
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
      if ( dword_10013068[v6] == SystemCP )
      {
        memset((char *)a2 + 24, 0, 0x101u);
        v21 = 48 * v22;
        v13 = (char *)&unk_10013078 + 48 * v22;
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
                *((_BYTE *)a2 + v16++ + 25) |= byte_10013060[v4];
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
        v18 = (__int16 *)((char *)&unk_1001306C + v21);
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
    if ( dword_10013FEC == 0 )
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

// Address: 0x100067B0
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
    memmove(Destination, Source, SourceSize);
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

// Address: 0x10006831
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

// Address: 0x1000688A
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x100068A2
char __acrt_initialize_command_line()
{
  dword_10014000 = (int)GetCommandLineA();
  dword_10014004 = (int)GetCommandLineW();
  return 1;
}

// Address: 0x100068BB
char sub_100068BB()
{
  return 1;
}

// Address: 0x100068BE
const wchar_t *__cdecl find_end_of_double_null_terminated_sequence(const wchar_t *a1)
{
  const unsigned __int16 *i; // edx

  for ( i = a1; *i != 0; i += wcslen(i) + 1 )
    ;
  return i + 1;
}

// Address: 0x100068F5
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

// Address: 0x10006978
char *__cdecl sub_10006978(void *Block, unsigned int a2, unsigned int a3)
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

// Address: 0x100069F0
bool __acrt_initialize_heap()
{
  hHeap = GetProcessHeap();
  return hHeap != nullptr;
}

// Address: 0x10006A01
char sub_10006A01()
{
  hHeap = nullptr;
  return 1;
}

// Address: 0x10006A0B
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
    if ( v0 > dword_10014210 )
      v0 = dword_10014210;
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
            v4 = dword_10014010[v2 >> 6] + 48 * (v2 & 0x3F);
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

// Address: 0x10006AC1
void __cdecl initialize_stdio_handles_nolock()
{
  int i; // edi
  int v1; // esi
  HANDLE StdHandle; // eax
  HANDLE v3; // ebx
  DWORD FileType; // eax

  for ( i = 0; i != 3; ++i )
  {
    v1 = dword_10014010[i >> 6] + 48 * (i & 0x3F);
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
        if ( dword_1001423C != nullptr )
          *(_DWORD *)(*((_DWORD *)dword_1001423C + i) + 16) = -2;
      }
    }
    else
    {
      *(_BYTE *)(v1 + 40) |= 0x80u;
    }
  }
}

// Address: 0x10006B77
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

// Address: 0x10006BCD
char __acrt_uninitialize_lowio()
{
  unsigned int i; // esi

  for ( i = 0; i < 128; ++i )
  {
    if ( dword_10014010[i] != 0 )
    {
      __acrt_lowio_destroy_handle_array((LPCRITICAL_SECTION)dword_10014010[i]);
      dword_10014010[i] = 0;
    }
  }
  return 1;
}

// Address: 0x10006BF9
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

// Address: 0x10006C7C
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

// Address: 0x10006CC9
int __stdcall __crt_seh_guarded_call<void (__cdecl *)(int)>::operator()<_lambda_a048d3beccc847880fc8490e18b82769_,_lambda_ec61778202f4f5fc7e7711acc23c3bca_ &,_lambda_f7496a158712204296dd6628a163878e_>(
        int *a1,
        int a2,
        int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = __ROR4__(dword_1001421C ^ __security_cookie, __security_cookie & 0x1F);
  __acrt_unlock(*a3);
  return v4;
}

// Address: 0x10006D23
int __cdecl sub_10006D23(int a1, int a2)
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

// Address: 0x10006D4B
void (__cdecl **__cdecl get_global_action_nolock(int a1))(int)
{
  switch ( a1 )
  {
    case 2:
      return (void (__cdecl **)(int))&dword_10014214;
    case 6:
      return (void (__cdecl **)(int))&dword_1001421C;
    case 15:
      return (void (__cdecl **)(int))&dword_10014220;
    default:
      break;
  }
  if ( a1 != 21 )
  {
    if ( a1 != 22 )
      return nullptr;
    return (void (__cdecl **)(int))&dword_1001421C;
  }
  return (void (__cdecl **)(int))&dword_10014218;
}

// Address: 0x10006D8D
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

// Address: 0x10006DB5
int __fastcall __acrt_get_sigabrt_handler(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  return sub_10006D23(3, (int)&v2);
}

// Address: 0x10006DCC
int __usercall __acrt_initialize_signal_handlers@<eax>(int a1@<edx>, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  unknown_libname_9(&dword_10014214, a1, a2);
  unknown_libname_9(&dword_10014218, v2, a2);
  unknown_libname_9(&dword_1001421C, v3, a2);
  return unknown_libname_9(&dword_10014220, v4, a2);
}

// Address: 0x10006E07
int *__cdecl __fpecode()
{
  return (int *)((char *)__acrt_getptd() + 8);
}

// Address: 0x10006E10
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

// Address: 0x10007018
BOOL __acrt_has_user_matherr()
{
  return __ROR4__(dword_10014224 ^ __security_cookie, __security_cookie & 0x1F) != 0;
}

// Address: 0x10007031
int __usercall sub_10007031@<eax>(int a1@<edx>, int a2)
{
  return unknown_libname_9(&dword_10014224, a1, a2);
}

// Address: 0x10007045
int __cdecl __acrt_invoke_user_matherr(int a1)
{
  int (__cdecl *v1)(int); // esi

  v1 = (int (__cdecl *)(int))__ROR4__(dword_10014224 ^ __security_cookie, __security_cookie & 0x1F);
  if ( v1 != nullptr )
    return v1(a1);
  else
    return 0;
}

// Address: 0x1000708E
int sub_1000708E()
{
  return dword_10014234;
}

// Address: 0x10007094
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

// Address: 0x1000718E
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x100071A8
struct __crt_locale_data *__cdecl sub_100071A8(int a1, struct __crt_locale_data **a2)
{
  struct __crt_locale_data *result; // eax

  result = *a2;
  if ( *a2 != dword_10014228 )
  {
    result = (struct __crt_locale_data *)dword_10013700;
    if ( (dword_10013700 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_locale_data *)__acrt_update_thread_locale_data();
      *a2 = result;
    }
  }
  return result;
}

// Address: 0x100071D5
void *__cdecl sub_100071D5(int a1, void **a2)
{
  void *result; // eax

  result = *a2;
  if ( *a2 != off_10013580 )
  {
    result = (void *)dword_10013700;
    if ( (dword_10013700 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = __acrt_update_thread_multibyte_data();
      *a2 = result;
    }
  }
  return result;
}

// Address: 0x10007202
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

// Address: 0x10007228
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
  dword_1001423C = _calloc_base(v0, 4u);
  _free_base(nullptr);
  if ( dword_1001423C == nullptr )
  {
    Count = 3;
    dword_1001423C = _calloc_base(3u, 4u);
    _free_base(nullptr);
    if ( dword_1001423C == nullptr )
      return -1;
  }
  v2 = 0;
  v3 = (char *)&unk_10013650;
  do
  {
    __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 32), 0xFA0u, 0);
    *((_DWORD *)dword_1001423C + v2) = v3;
    v4 = *(_DWORD *)(dword_10014010[v2 >> 6] + 48 * (v2 & 0x3F) + 24);
    if ( v4 == -1 || v4 == -2 || v4 == 0 )
      *((_DWORD *)v3 + 4) = -2;
    v3 += 56;
    ++v2;
  }
  while ( v3 != (char *)&unk_100136F8 );
  return 0;
}

// Address: 0x100072F0
void __acrt_uninitialize_stdio()
{
  int i; // esi

  sub_1000865F();
  _fcloseall();
  for ( i = 0; i != 12; i += 4 )
  {
    __acrt_stdio_free_buffer_nolock(*(_DWORD *)((char *)dword_1001423C + i));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_1001423C + i) + 32));
  }
  _free_base(dword_1001423C);
  dword_1001423C = nullptr;
}

// Address: 0x1000733C
void __cdecl _lock_file(FILE *Stream)
{
  EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
}

// Address: 0x10007350
void __cdecl _unlock_file(FILE *Stream)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
}

// Address: 0x10007364
__int32 sub_10007364()
{
  return _InterlockedExchange(&dword_10014240, 1);
}

// Address: 0x1000736F
void __acrt_uninitialize_locale()
{
  if ( dword_10014228 != (struct __crt_locale_data *)&off_10013588 )
  {
    __acrt_lock(4);
    dword_10014228 = (struct __crt_locale_data *)_updatetlocinfoEx_nolock(&dword_10014228, &off_10013588);
    __acrt_unlock(4);
  }
}

// Address: 0x100073C1
const unsigned __int16 *__cdecl __pctype_func()
{
  struct __crt_locale_data *v0; // ecx
  void *v1; // eax
  const unsigned __int16 **v3; // [esp+0h] [ebp-4h] BYREF

  v3 = (const unsigned __int16 **)v0;
  v1 = __acrt_getptd();
  v3 = *((const unsigned __int16 ***)v1 + 19);
  sub_100071A8((int)v1, (struct __crt_locale_data **)&v3);
  return *v3;
}

// Address: 0x100073E7
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
    if ( *(v5 - 2) != (volatile signed __int32 *)&unk_10013648 && *v5 != nullptr )
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

// Address: 0x10007464
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
  if ( v1 != nullptr && v1 != &off_10013710 )
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
    if ( *(v8 - 2) != &unk_10013648 )
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

// Address: 0x100075AE
signed __int32 __cdecl __acrt_locale_add_lc_time_reference(int a1)
{
  if ( a1 == 0 || (char **)a1 == off_1000E758 )
    return 0x7FFFFFFF;
  else
    return _InterlockedIncrement((volatile signed __int32 *)(a1 + 176));
}

// Address: 0x100075D7
void __cdecl __acrt_locale_free_lc_time_if_unreferenced(void **Block)
{
  if ( Block != nullptr && Block != (void **)off_1000E758 && Block[44] == nullptr )
  {
    __acrt_locale_free_time(Block);
    _free_base(Block);
  }
}

// Address: 0x10007607
signed __int32 __cdecl __acrt_locale_release_lc_time_reference(int a1)
{
  if ( a1 == 0 || (char **)a1 == off_1000E758 )
    return 0x7FFFFFFF;
  else
    return _InterlockedDecrement((volatile signed __int32 *)(a1 + 176));
}

// Address: 0x10007630
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
      if ( *(v6 - 2) != (volatile signed __int32 *)&unk_10013648 && *v6 != nullptr )
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

// Address: 0x100076B1
int __acrt_update_thread_locale_data()
{
  _DWORD *v0; // eax
  _DWORD *v1; // edi
  int v2; // esi

  v0 = __acrt_getptd();
  v1 = v0;
  if ( (dword_10013700 & v0[212]) == 0 || (v2 = v0[19]) == 0 )
  {
    __acrt_lock(4);
    v2 = _updatetlocinfoEx_nolock(v1 + 19, dword_10014228);
    __acrt_unlock(4);
    if ( v2 == 0 )
      abort();
  }
  return v2;
}

// Address: 0x10007728
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
      if ( *(_DWORD *)(v2 + 12) == 0 && (wchar_t **)v2 != &off_10013588 )
        __acrt_free_locale((char *)v2);
    }
  }
  return a2;
}

// Address: 0x10007778
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
    v3 = (char *)*(&off_1000FFE8 + 2 * v10);
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
  return dword_1000FFEC[2 * v10];
}

// Address: 0x10007834
int __cdecl __acrt_DownlevelLocaleNameToLCID(wchar_t *a1)
{
  int TableIndexFromLocaleName; // eax

  if ( a1 != nullptr && (unsigned int)(TableIndexFromLocaleName = GetTableIndexFromLocaleName(a1)) < 0xE4 )
    return dword_1000EEC0[2 * TableIndexFromLocaleName];
  else
    return 0;
}

// Address: 0x10007860
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

// Address: 0x10007900
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

// Address: 0x10007940
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

// Address: 0x10007CDA
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

// Address: 0x10007D8B
errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  return common_tcsncpy_s<char>(Destination, SizeInBytes, (int)Source, MaxCount);
}

// Address: 0x10007DA0
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

// Address: 0x10007DE0
unsigned __int8 *__cdecl _mbsdec(const unsigned __int8 *Start, const unsigned __int8 *Pos)
{
  return _mbsdec_l(Start, Pos, nullptr);
}

// Address: 0x10007DF7
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

// Address: 0x10007E84
BOOL __cdecl initialize_multibyte()
{
  return __acrt_initialize_multibyte() == 0;
}

// Address: 0x10007E93
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
    _freea_crt(v13);
  }
  if ( v19 != 0 )
    *(_DWORD *)(v18[0] + 848) &= ~2u;
  return StringTypeW;
}

// Address: 0x10007FB0
void __cdecl _freea_crt(int a1)
{
  if ( a1 != 0 && *(_DWORD *)(a1 - 8) == 56797 )
    _free_base((void *)(a1 - 8));
}

// Address: 0x10007FD0
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

// Address: 0x100081ED
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

// Address: 0x10008238
size_t __cdecl _msize(void *Block)
{
  if ( Block != nullptr )
    return HeapSize(hHeap, 0, Block);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

// Address: 0x1000826B
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
    if ( sub_1000708E() == 0 || _callnewh(Size) == 0 )
      goto LABEL_6;
  }
}

// Address: 0x100082D4
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

// Address: 0x1000834E
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

// Address: 0x10008383
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
    v4 = dword_10014210;
    while ( (int)a1 >= v4 )
    {
      if ( dword_10014010[v3] == 0 )
      {
        handle_array = __acrt_lowio_create_handle_array();
        dword_10014010[v3] = (int)handle_array;
        if ( handle_array == nullptr )
        {
          v1 = 12;
          break;
        }
        v4 = dword_10014210 + 64;
        dword_10014210 += 64;
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

// Address: 0x1000841B
void __cdecl __acrt_lowio_lock_fh(int a1)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(dword_10014010[a1 >> 6] + 48 * (a1 & 0x3F)));
}

// Address: 0x1000843E
void __cdecl __acrt_lowio_unlock_fh(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_10014010[a1 >> 6] + 48 * (a1 & 0x3F)));
}

// Address: 0x10008461
int __cdecl _free_osfhnd(int a1)
{
  int v1; // ebx
  int v2; // eax

  if ( a1 < 0
    || a1 >= (unsigned int)dword_10014210
    || (v1 = 48 * (a1 & 0x3F), v2 = dword_10014010[a1 >> 6], (*(_BYTE *)(v1 + v2 + 40) & 1) == 0)
    || *(_DWORD *)(v1 + v2 + 24) == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( sub_10008AFA() == 1 )
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
    *(_DWORD *)(v1 + dword_10014010[a1 >> 6] + 24) = -1;
    return 0;
  }
}

// Address: 0x100084F2
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
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_10014210 )
    {
      v1 = 48 * (FileHandle & 0x3F);
      v2 = dword_10014010[FileHandle >> 6];
      if ( (*(_BYTE *)(v2 + v1 + 40) & 1) != 0 )
        return *(_DWORD *)(v2 + v1 + 24);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x1000855C
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
  }
  else
  {
    if ( FileHandle >= 0 && FileHandle < (unsigned int)dword_10014210 )
      return *(_BYTE *)(dword_10014010[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) & 0x40;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return 0;
}

// Address: 0x100085B2
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

// Address: 0x10008618
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

// Address: 0x1000865F
int sub_1000865F()
{
  return common_flush_all(1);
}

// Address: 0x10008668
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
  v1 = (FILE **)dword_1001423C;
  v2 = (FILE **)((char *)dword_1001423C + 4 * Count);
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

// Address: 0x10008740
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

// Address: 0x10008779
int __cdecl _fcloseall()
{
  int i; // esi
  int v1; // eax
  int v3; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  __acrt_lock(8);
  for ( i = 3; i != Count; ++i )
  {
    v1 = *((_DWORD *)dword_1001423C + i);
    if ( v1 != 0 )
    {
      if ( (*(_DWORD *)(v1 + 12) & 0x2000) != 0 && fclose(*((FILE **)dword_1001423C + i)) != -1 )
        ++v3;
      DeleteCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)dword_1001423C + i) + 32));
      _free_base(*((void **)dword_1001423C + i));
      *((_DWORD *)dword_1001423C + i) = 0;
    }
  }
  __acrt_unlock(8);
  return v3;
}

// Address: 0x10008819
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

// Address: 0x10008857
void __cdecl __acrt_locale_free_monetary(void **a1)
{
  if ( a1 != nullptr )
  {
    if ( a1[3] != off_1001371C )
      _free_base(a1[3]);
    if ( a1[4] != off_10013720 )
      _free_base(a1[4]);
    if ( a1[5] != off_10013724 )
      _free_base(a1[5]);
    if ( a1[6] != off_10013728 )
      _free_base(a1[6]);
    if ( a1[7] != off_1001372C )
      _free_base(a1[7]);
    if ( a1[8] != off_10013730 )
      _free_base(a1[8]);
    if ( a1[9] != off_10013734 )
      _free_base(a1[9]);
    if ( a1[14] != off_10013748 )
      _free_base(a1[14]);
    if ( a1[15] != off_1001374C )
      _free_base(a1[15]);
    if ( a1[16] != off_10013750 )
      _free_base(a1[16]);
    if ( a1[17] != off_10013754 )
      _free_base(a1[17]);
    if ( a1[18] != off_10013758 )
      _free_base(a1[18]);
    if ( a1[19] != off_1001375C )
      _free_base(a1[19]);
  }
}

// Address: 0x10008955
void __cdecl __acrt_locale_free_numeric(void **a1)
{
  if ( a1 != nullptr )
  {
    if ( *a1 != off_10013710 )
      _free_base(*a1);
    if ( a1[1] != off_10013714 )
      _free_base(a1[1]);
    if ( a1[2] != off_10013718 )
      _free_base(a1[2]);
    if ( a1[12] != off_10013740 )
      _free_base(a1[12]);
    if ( a1[13] != off_10013744 )
      _free_base(a1[13]);
  }
}

// Address: 0x100089BE
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

// Address: 0x100089FA
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

// Address: 0x10008ADE
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

// Address: 0x10008AFA
int sub_10008AFA()
{
  return dword_1001424C;
}

// Address: 0x10008B00
int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_61cee617f5178ae960314fd4d05640a0_,_lambda_6978c1fb23f02e42e1d9e99668cc68aa_ &,_lambda_9cd88cf8ad10232537feb2133f08c833_>(
        int *a1,
        int **a2,
        int *a3)
{
  int v3; // esi
  void *osfhandle; // eax
  unsigned int *v5; // esi

  v3 = 0;
  __acrt_lowio_lock_fh(*a1);
  if ( (*(_BYTE *)(dword_10014010[**a2 >> 6] + 48 * (**a2 & 0x3F) + 40) & 1) == 0 )
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

// Address: 0x10008B98
int __cdecl sub_10008B98(int a1, int **a2)
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

// Address: 0x10008BC0
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
      && FileHandle < (unsigned int)dword_10014210
      && (*(_BYTE *)(dword_10014010[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) & 1) != 0 )
    {
      p_FileHandle = &FileHandle;
      return sub_10008B98(FileHandle, &p_FileHandle);
    }
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x10008C2F
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
  hFile = *(HANDLE *)(dword_10014010[a2 >> 6] + v4 + 24);
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
      v7 = dword_10014010[v14];
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
        *(_BYTE *)(dword_10014010[v14] + v4 + 46) = *v5;
        *(_BYTE *)(dword_10014010[v14] + v4 + 45) |= 4u;
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

// Address: 0x10008DE2
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

// Address: 0x10008E4F
bool __cdecl write_requires_double_translation_nolock(int FileHandle)
{
  int v2; // edi
  int v3; // esi
  DWORD Mode; // [esp+4h] [ebp-4h] BYREF

  if ( _isatty(FileHandle) == 0 )
    return false;
  v2 = FileHandle >> 6;
  v3 = 48 * (FileHandle & 0x3F);
  return *(char *)(dword_10014010[FileHandle >> 6] + v3 + 40) < 0
      && (*(_DWORD *)(*((_DWORD *)__acrt_getptd() + 19) + 168) != 0 || *(_BYTE *)(dword_10014010[v2] + v3 + 41) != 0)
      && GetConsoleMode(*(HANDLE *)(dword_10014010[v2] + v3 + 24), &Mode);
}

// Address: 0x10008EC5
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
  v5 = *(void **)(dword_10014010[a2 >> 6] + 48 * (a2 & 0x3F) + 24);
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

// Address: 0x10008FA4
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
  v5 = *(void **)(dword_10014010[a2 >> 6] + 48 * (a2 & 0x3F) + 24);
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

// Address: 0x10009092
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
  hFile = *(HANDLE *)(dword_10014010[a2 >> 6] + 48 * (a2 & 0x3F) + 24);
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

// Address: 0x100091BF
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
    || FileHandle >= (unsigned int)dword_10014210
    || (v5 = 48 * (FileHandle & 0x3F), (*(_BYTE *)(dword_10014010[FileHandle >> 6] + v5 + 40) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  v3 = -1;
  if ( (*(_BYTE *)(dword_10014010[FileHandle >> 6] + v5 + 40) & 1) != 0 )
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

// Address: 0x100092AA
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
  v6 = dword_10014010[FileHandle >> 6];
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
  v10 = dword_10014010[v14];
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
    if ( (*(_BYTE *)(dword_10014010[v14] + v15 + 40) & 0x40) != 0 && *(_BYTE *)v3 == 26 )
      return 0;
    *_errno() = 28;
    *__doserrno() = 0;
    return -1;
  }
  return *v12 - v12[1];
}

// Address: 0x100094C0
double __cdecl log10(double X)
{
  int v1; // ecx
  __m128d v2; // xmm0
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  __int16 v6; // dx
  char v7; // fps
  double result; // st7
  int v9; // eax
  char v10; // [esp+4h] [ebp-8h]

  if ( dword_10014268 != 0 )
  {
    v3 = _mm_getcsr() & 0x7F80;
    v4 = v3 == 8064;
    if ( v3 == 8064 )
      v4 = (v10 & 0x7F) == 127;
    if ( v4 )
    {
      v2.m128d_f64[0] = X;
      return start_0(v2, X);
    }
  }
  result = _fload_withFB(v1, &X);
  if ( v4 )
  {
    if ( (v5 & 0xFFFFF) != 0 || LODWORD(X) != 0 )
    {
      result = _convertTOStoQNaN(v5, result);
      goto _ErrorHandling;
    }
    if ( (v5 & 0x80000000) == 0 )
      goto exit_0;
negative_x:
    result = -2.0;
    v9 = 1;
    goto _ErrorHandling;
  }
  if ( (HIDWORD(X) & 0x7FF00000) != 0 )
  {
    if ( X >= 0.0 )
    {
normal:
      result = __FYL2X__(result, 0.3010299956639811952);
exit_0:
      if ( dword_10014250 == 0 && v6 != 639 && (v6 & 0x20) != 0 && (v7 & 0x20) != 0 )
        return _startOneArgErrorHandling(8, 27, (int)"log10", result);
      return result;
    }
    goto negative_x;
  }
  if ( (HIDWORD(X) & 0xFFFFF) != 0 || LODWORD(X) != 0 )
  {
    if ( X >= 0.0 )
      goto normal;
    goto negative_x;
  }
  result = -0.0;
  v9 = 2;
_ErrorHandling:
  if ( dword_10014250 == 0 )
    return _startOneArgErrorHandling(v9, 27, (int)"log10", result);
  return result;
}

// Address: 0x10009610
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

  if ( dword_10014268 == 0 )
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
    v6 = _mm_sub_epi32((__m128i)xmmword_10010F60, (__m128i)_mm_and_pd(v4, (__m128d)xmmword_10010F80));
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
        *(_QWORD *)&X = *(_QWORD *)&_mm_cmpnle_pd(v11, (__m128d)xmmword_10010F70).m128d_f64[0] & 0x3FF0000000000000LL;
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

// Address: 0x1000972D
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
  *(_BYTE *)(dword_10014010[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) &= ~2u;
  return result;
}

// Address: 0x100097AB
DWORD __cdecl _lseeki64_nolock(int FileHandle, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod)
{
  return common_lseek_nolock<__int64>(FileHandle, liDistanceToMove, dwMoveMethod);
}

// Address: 0x100097C6
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
      __acrt_stdio_free_buffer_nolock((int)Stream);
      v3 = _fileno(Stream);
      if ( (int)sub_1000A56E(v3) >= 0 )
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

// Address: 0x1000983C
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

// Address: 0x100098C0
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

// Address: 0x10009921
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

// Address: 0x10009966
int sub_10009966()
{
  dword_10014268 = IsProcessorFeaturePresent(0xAu);
  return 0;
}

// Address: 0x10009980
void __usercall _CIlog10_pentium4(double a1@<st0>)
{
  start_0(a1);
}

// Address: 0x1000999E
double __usercall start_0@<st0>(__m128d a1@<xmm0>, double a2)
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
    v5 = _mm_or_pd(_mm_and_pd(_mm_unpacklo_pd(a1, a1), (__m128d)xmmword_10010FA0), (__m128d)xmmword_10011010);
    v6 = _mm_extract_epi16((__m128i)_mm_add_pd((__m128d)xmmword_10010FC0, v5), 0) & 0x7F0;
    v7 = *(__m128d *)((char *)&xmmword_100115F0 + v6);
    v11 = *(__m128d *)((char *)&xmmword_100111E0 + v6);
    v8 = _mm_and_pd((__m128d)xmmword_10010FD0, v5);
    v9 = _mm_sub_pd(v5, v8);
    v10 = _mm_sub_pd(_mm_mul_pd(v8, v7), (__m128d)xmmword_10010FB0);
    v11.m128d_f64[0] = v11.m128d_f64[0] + v10.m128d_f64[0];
    v12 = _mm_mul_pd(v9, v7);
    a1 = _mm_add_pd(v12, v10);
    v13 = (_mm_extract_epi16(_mm_srli_epi64(v3, 0x34u), 0) & 0xFFF) - 1;
    if ( v13 <= 0x7FD )
      break;
    v22.m128d_f64[0] = a2;
    v23 = (__m128i)_mm_cmpeq_sd((__m128d)xmmword_10011020, v22);
    if ( _mm_extract_epi16(v23, 0) != 0 )
    {
      *(double *)v23.m128i_i64 = -INFINITY;
      v24 = 8;
CALL_LIBM_ERROR:
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
                          (__m128d)xmmword_10011010,
                          _mm_or_pd(_mm_and_pd(a1, (__m128d)xmmword_10010FA0), (__m128d)xmmword_10011010)),
               0) != 0 )
          return INFINITY;
        v24 = 1001;
      }
      goto CALL_LIBM_ERROR;
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
          _mm_add_pd(v11, _mm_mul_pd(v15, (__m128d)xmmword_10010FE0)),
          _mm_and_pd(v12, (__m128d)xmmword_10010FF0[v16]));
  v17.m128d_f64[0] = v17.m128d_f64[0] * v17.m128d_f64[0] * a1.m128d_f64[0];
  v19 = 0.001616102407499711 * a1.m128d_f64[0];
  v20 = _mm_mul_pd(
          _mm_add_pd(
            _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_10011060, a1), (__m128d)xmmword_10011070), a1),
            (__m128d)xmmword_10011080),
          v17);
  return _mm_unpackhi_pd(v20, v20).m128d_f64[0]
       + v20.m128d_f64[0]
       + v19
       + _mm_unpackhi_pd(v18, v18).m128d_f64[0]
       + v18.m128d_f64[0];
}

// Address: 0x10009C04
void __usercall sub_10009C04(char a1@<ch>, int a2@<ebp>)
{
  *(_BYTE *)(a2 - 144) = -2;
  if ( a1 != 0 && isintTOS() == 0 )
    JUMPOUT(0x10009FC3);
  _ffexpm1();
  JUMPOUT(0x10009F08);
}

// Address: 0x10009CE7
void zerotoxdone()
{
  ;
}

// Address: 0x10009D32
void expbigret()
{
  ;
}

// Address: 0x10009D51
double __fastcall rtforexpinf(char a1)
{
  if ( a1 != 0 )
    JUMPOUT(0x10009F16);
  return -0.0;
}

// Address: 0x10009D5E
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
      JUMPOUT(0x10009F16);
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

// Address: 0x10009DA1
int __usercall isintTOS@<eax>(long double a1@<st0>)
{
  if ( rint(a1) != a1 )
    return notanint();
  if ( rint(a1 * 0.5) == a1 * 0.5 )
    return evenint();
  return isintTOSret();
}

// Address: 0x10009DC6
void isintTOSret()
{
  ;
}

// Address: 0x10009DC7
void notanint()
{
  isintTOSret();
}

// Address: 0x10009DCE
void evenint()
{
  isintTOSret();
}

// Address: 0x10009DD5
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

// Address: 0x1000A010
long double __usercall _twoToTOS@<st0>(long double a1@<st0>)
{
  long double v1; // rt0

  v1 = rint(a1);
  return __FSCALE__(__F2XM1__(-(v1 - a1)) + 1.0, v1);
}

// Address: 0x1000A03C
double __usercall _convertTOStoQNaN@<st0>(int a1@<eax>, double result@<st0>)
{
  if ( (a1 & 0x80000) == 0 )
    return result + 1.0;
  return result;
}

// Address: 0x1000A055
double __fastcall _fload_withFB(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 )
    return *(double *)a2;
  *(_QWORD *)&result = *(_QWORD *)a2 << 11;
  return result;
}

// Address: 0x1000A098
int __cdecl _checkTOS_withFB(int a1, int a2)
{
  int result; // eax

  result = a2 & 0x7FF00000;
  if ( (a2 & 0x7FF00000) == 0x7FF00000 )
    return a2;
  return result;
}

// Address: 0x1000A0E5
// positive sp value has been detected, the output may be wrong!
double __usercall _check_overflow_exit@<st0>(int a1@<edx>, int a2@<ecx>, double result@<st0>)
{
  char v3; // fps
  int v4; // eax
  double v5; // [esp-4h] [ebp-Ch]
  __int16 v6; // [esp+4h] [ebp-4h]

  v5 = result;
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

// Address: 0x1000A1A0
void _startTwoArgErrorHandling()
{
  JUMPOUT(0x1000A1C0);
}

// Address: 0x1000A1B7
double __usercall _startOneArgErrorHandling@<st0>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, double a4@<st0>)
{
  _DWORD v5[6]; // [esp+0h] [ebp-20h] BYREF
  double v6; // [esp+18h] [ebp-8h]
  int savedregs; // [esp+20h] [ebp+0h] BYREF
  unsigned __int16 v8[4]; // [esp+28h] [ebp+8h] BYREF
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

// Address: 0x1000A1F3
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

  if ( dword_10014254 != 0 )
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
          v9 = "exp";
          goto LABEL_42;
        }
        if ( a4 == 2 )
        {
          v8 = 2;
          v9 = (const char *)&unk_10011184;
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
        v9 = (const char *)&unk_10011184;
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
        v9 = "exp";
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
        v9 = "pow";
        goto LABEL_23;
      }
      v8 = 3;
LABEL_41:
      v9 = "pow";
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
      v9 = "pow";
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

// Address: 0x1000A40B
double __cdecl _ceil_default(double a1)
{
  double result; // st7
  int v2; // ebx

  result = a1;
  v2 = _ctrlfp(6975, 0xFFFF);
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    if ( (unsigned int)(_sptype(LODWORD(a1), HIDWORD(a1)) - 1) > 2 )
    {
      return _except1(
               8,
               12,
               LODWORD(a1),
               HIDWORD(a1),
               COERCE_UNSIGNED_INT64(a1 + 1.0),
               HIDWORD(COERCE_UNSIGNED_INT64(a1 + 1.0)),
               v2);
    }
    else
    {
      _ctrlfp(v2, 0xFFFF);
      return a1;
    }
  }
  else
  {
    _frnd(a1);
    _ctrlfp(v2, 0xFFFF);
  }
  return result;
}

// Address: 0x1000A4C4
int __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_123407a5e2ac06da108355a851863b7a_,_lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec_ &,_lambda_ae55bdf541ad94d75914d381c370e64d_>(
        int *a1,
        int **a2,
        int *a3)
{
  int v3; // esi

  __acrt_lowio_lock_fh(*a1);
  if ( (*(_BYTE *)(dword_10014010[**a2 >> 6] + 48 * (**a2 & 0x3F) + 40) & 1) != 0 )
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

// Address: 0x1000A546
int __cdecl sub_1000A546(int a1, int **a2)
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

// Address: 0x1000A56E
int __cdecl sub_1000A56E(int a1)
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
      && a1 < (unsigned int)dword_10014210
      && (*(_BYTE *)(dword_10014010[a1 >> 6] + 48 * (a1 & 0x3F) + 40) & 1) != 0 )
    {
      v2 = &a1;
      return sub_1000A546(a1, &v2);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}

// Address: 0x1000A5ED
int __cdecl _close_nolock(int FileHandle)
{
  DWORD LastError; // esi
  intptr_t osfhandle; // esi
  void *v3; // eax

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_10014010[0] + 136) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_10014010[0] + 88) & 1) != 0)
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
  *(_BYTE *)(dword_10014010[FileHandle >> 6] + 48 * (FileHandle & 0x3F) + 40) = 0;
  if ( LastError == 0 )
    return 0;
  __acrt_errno_map_os_error(LastError);
  return -1;
}

// Address: 0x1000A689
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

// Address: 0x1000A6C4
void __cdecl __dcrt_lowio_initialize_console_output()
{
  hObject = CreateFileW(L"CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
}

// Address: 0x1000A6E3
// Microsoft VisualC universal runtime
HANDLE unknown_libname_13()
{
  HANDLE result; // eax

  result = hObject;
  if ( hObject != (HANDLE)-1 && hObject != (HANDLE)-2 )
    return (HANDLE)CloseHandle(hObject);
  return result;
}

// Address: 0x1000A6FA
int __usercall _clrfp@<eax>(__int16 a1@<fpstat>)
{
  __asm { fnclex }
  return a1;
}

// Address: 0x1000A70D
int _ctrlfp()
{
  __int16 v1; // [esp+4h] [ebp-4h]

  return v1;
}

// Address: 0x1000A739
void _set_statfp()
{
  ;
}

// Address: 0x1000A794
int __usercall _statfp@<eax>(__int16 a1@<fpstat>)
{
  return a1;
}

// Address: 0x1000A7A6
int __cdecl _d_inttype(double X)
{
  if ( (_fpclass(X) & 0x90) != 0 )
    return 0;
  _frnd(X);
  _frnd(X * 0.5);
  return 2;
}

// Address: 0x1000A810
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

// Address: 0x1000A93B
int __usercall _87except@<eax>(int a1@<ebp>, int a2, int a3, unsigned __int16 *a4)
{
  int v4; // ecx
  int v5; // edi
  int result; // eax
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
  v8 = v4;
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
  if ( _handle_exc(v7, a3 + 24, v4) == 0 )
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
  result = __acrt_invoke_user_matherr(a3);
  if ( result == 0 )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  return result;
}

// Address: 0x1000AA46
long double __cdecl _frnd(long double a1)
{
  return rint(a1);
}

// Address: 0x1000AA5C
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

// Address: 0x1000AA90
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
  if ( __acrt_has_user_matherr() && v7 != 0 )
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
    _ctrlfp();
    return a5;
  }
  return result;
}

// Address: 0x1000AB5E
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
    _set_statfp();
    v3 = a1 & 0x17;
    goto LABEL_44;
  }
  if ( ((unsigned __int8)a3 & a1 & 4) != 0 )
  {
    _set_statfp();
    v3 = a1 & 0x1B;
    goto LABEL_44;
  }
  if ( (a1 & 1) != 0 && (a3 & 8) != 0 )
  {
    _set_statfp();
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
      _set_statfp();
    v3 = a1 & 0x1D;
  }
LABEL_44:
  if ( (a1 & 0x10) != 0 && (a3 & 0x20) != 0 )
  {
    _set_statfp();
    v3 &= ~0x10u;
  }
  return v3 == 0;
}

// Address: 0x1000AD3E
int __cdecl _raise_exc(ULONG_PTR Arguments, int a2, int a3, int a4, int a5, int a6)
{
  return _raise_exc_ex(Arguments, a2, a3, a4, a5, a6, 0);
}

// Address: 0x1000AD61
unsigned int __usercall _raise_exc_ex@<eax>(
        __int16 a1@<fpstat>,
        ULONG_PTR Arguments,
        unsigned int *a3,
        char a4,
        int a5,
        float *a6,
        float *a7,
        int a8)
{
  DWORD v8; // edi
  char v9; // cl
  unsigned int *v10; // esi
  char v11; // al
  int v12; // eax
  unsigned int *v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int *v16; // ecx
  unsigned int v17; // eax
  float *v18; // ebx
  __int16 v19; // fps
  ULONG_PTR v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int result; // eax

  *(_DWORD *)(Arguments + 4) = 0;
  v8 = -1073741811;
  *(_DWORD *)(Arguments + 8) = 0;
  *(_DWORD *)(Arguments + 12) = 0;
  v9 = a4;
  if ( (a4 & 0x10) != 0 )
  {
    v8 = -1073741681;
    *(_DWORD *)(Arguments + 4) |= 1u;
  }
  if ( (v9 & 2) != 0 )
  {
    v8 = -1073741677;
    *(_DWORD *)(Arguments + 4) |= 2u;
  }
  if ( (v9 & 1) != 0 )
  {
    v8 = -1073741679;
    *(_DWORD *)(Arguments + 4) |= 4u;
  }
  if ( (v9 & 4) != 0 )
  {
    v8 = -1073741682;
    *(_DWORD *)(Arguments + 4) |= 8u;
  }
  if ( (v9 & 8) != 0 )
  {
    v8 = -1073741680;
    *(_DWORD *)(Arguments + 4) |= 0x10u;
  }
  v10 = a3;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(16 * *a3)) & 0x10;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(2 * *v10)) & 8;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v10 >> 1)) & 4;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v10 >> 3)) & 2;
  *(_DWORD *)(Arguments + 8) ^= (*(_DWORD *)(Arguments + 8) ^ ~(*v10 >> 5)) & 1;
  v11 = _statfp(a1);
  if ( (v11 & 1) != 0 )
    *(_DWORD *)(Arguments + 12) |= 0x10u;
  if ( (v11 & 4) != 0 )
    *(_DWORD *)(Arguments + 12) |= 8u;
  if ( (v11 & 8) != 0 )
    *(_DWORD *)(Arguments + 12) |= 4u;
  if ( (v11 & 0x10) != 0 )
    *(_DWORD *)(Arguments + 12) |= 2u;
  if ( (v11 & 0x20) != 0 )
    *(_DWORD *)(Arguments + 12) |= 1u;
  v12 = *v10 & 0xC00;
  switch ( v12 )
  {
    case 0:
      *(_DWORD *)Arguments &= 0xFFFFFFFC;
      break;
    case 1024:
      v13 = (unsigned int *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFFC | 1;
      goto LABEL_27;
    case 2048:
      v13 = (unsigned int *)Arguments;
      v14 = *(_DWORD *)Arguments & 0xFFFFFFFC | 2;
LABEL_27:
      *v13 = v14;
      break;
    case 3072:
      *(_DWORD *)Arguments |= 3u;
      break;
    default:
      break;
  }
  v15 = *v10 & 0x300;
  switch ( v15 )
  {
    case 0:
      v16 = (unsigned int *)Arguments;
      v17 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 8;
      goto LABEL_36;
    case 512:
      v16 = (unsigned int *)Arguments;
      v17 = *(_DWORD *)Arguments & 0xFFFFFFE3 | 4;
LABEL_36:
      *v16 = v17;
      break;
    case 768:
      *(_DWORD *)Arguments &= 0xFFFFFFE3;
      break;
    default:
      break;
  }
  *(_DWORD *)Arguments ^= (*(_DWORD *)Arguments ^ (32 * a5)) & 0x1FFE0;
  *(_DWORD *)(Arguments + 32) |= 1u;
  if ( a8 != 0 )
  {
    *(_DWORD *)(Arguments + 32) &= 0xFFFFFFE1;
    *(float *)(Arguments + 16) = *a6;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v18 = a7;
    *(_DWORD *)(Arguments + 96) &= 0xFFFFFFE1;
    *(float *)(Arguments + 80) = *v18;
  }
  else
  {
    *(_DWORD *)(Arguments + 32) = *(_DWORD *)(Arguments + 32) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 16) = *(double *)a6;
    *(_DWORD *)(Arguments + 96) |= 1u;
    v18 = a7;
    *(_DWORD *)(Arguments + 96) = *(_DWORD *)(Arguments + 96) & 0xFFFFFFE1 | 2;
    *(double *)(Arguments + 80) = *(double *)v18;
  }
  _clrfp(v19);
  RaiseException(v8, 0, 1u, &Arguments);
  v20 = Arguments;
  if ( (*(_BYTE *)(Arguments + 8) & 0x10) != 0 )
    *v10 &= ~1u;
  if ( (*(_BYTE *)(v20 + 8) & 8) != 0 )
    *v10 &= ~4u;
  if ( (*(_BYTE *)(v20 + 8) & 4) != 0 )
    *v10 &= ~8u;
  if ( (*(_BYTE *)(v20 + 8) & 2) != 0 )
    *v10 &= ~0x10u;
  if ( (*(_BYTE *)(v20 + 8) & 1) != 0 )
    *v10 &= ~0x20u;
  v21 = *(_DWORD *)v20 & 3;
  if ( v21 == 0 )
  {
    *v10 &= 0xFFFFF3FF;
    goto LABEL_59;
  }
  v22 = v21 - 1;
  if ( v22 == 0 )
  {
    v24 = *v10 & 0xFFFFF3FF | 0x400;
    goto LABEL_56;
  }
  v23 = v22 - 1;
  if ( v23 == 0 )
  {
    v24 = *v10 & 0xFFFFF3FF | 0x800;
LABEL_56:
    *v10 = v24;
    goto LABEL_59;
  }
  if ( v23 == 1 )
    *v10 |= 0xC00u;
LABEL_59:
  v25 = (*(_DWORD *)v20 >> 2) & 7;
  if ( v25 == 0 )
  {
    result = *v10 & 0xFFFFF0FF | 0x300;
    goto LABEL_65;
  }
  v26 = v25 - 1;
  if ( v26 == 0 )
  {
    result = *v10 & 0xFFFFF1FF | 0x200;
LABEL_65:
    *v10 = result;
    goto LABEL_66;
  }
  result = v26 - 1;
  if ( result == 0 )
    *v10 &= 0xFFFFF3FF;
LABEL_66:
  if ( a8 != 0 )
    *v18 = *(float *)(v20 + 80);
  else
    *(double *)v18 = *(double *)(v20 + 80);
  return result;
}

// Address: 0x1000B052
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

// Address: 0x1000B081
double __cdecl _umatherr(int a1, int a2, int a3, int a4, int a5, int a6, double a7)
{
  char *v7; // ecx
  int v8; // eax
  _DWORD v10[6]; // [esp+0h] [ebp-20h] BYREF
  double v11; // [esp+18h] [ebp-8h]

  v7 = nullptr;
  v8 = 0;
  while ( dword_10011A98[2 * v8] != a2 )
  {
    if ( ++v8 >= 29 )
      goto LABEL_6;
  }
  v7 = (&off_10011A9C)[2 * v8];
LABEL_6:
  v10[1] = v7;
  if ( v7 != nullptr )
  {
    v10[2] = a3;
    v10[3] = a4;
    v10[4] = a5;
    v10[5] = a6;
    v11 = a7;
    v10[0] = a1;
    _ctrlfp();
    if ( __acrt_invoke_user_matherr((int)v10) == 0 )
      _set_errno_from_matherr(a1);
    return v11;
  }
  else
  {
    _ctrlfp();
    _set_errno_from_matherr(a1);
    return a7;
  }
}

// Address: 0x1000B123
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

// Address: 0x1000B1F7
double __cdecl _set_exp(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1;
  HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * (a2 + 1022));
  return v3;
}

// Address: 0x1000B226
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

// Address: 0x1000B284
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

// Address: 0x1000B328
// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)
{
  return __imp_IsProcessorFeaturePresent(ProcessorFeature);
}

// Address: 0x1000B32E
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x1000B340
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

// Address: 0x1000B390
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000) != 0
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x1000B450
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

// Address: 0x1000B490
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

// Address: 0x1000B530
_DWORD *__cdecl _SEH_prolog4_GS(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-14h] [ebp-14h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_1000B390;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1000B579
void _SEH_epilog4_GS()
{
  ;
}

// Address: 0x1000B590
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x1000B5D0
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

// Address: 0x1000B6C0
unsigned int __fastcall MORE32(char a1, unsigned int a2)
{
  return a2 >> (a1 & 0x1F);
}

// Address: 0x1000B6CA
__int64 RETZERO()
{
  return 0;
}

// Address: 0x1000B6D0
int _alloca_probe_16()
{
  return _alloca_probe();
}

// Address: 0x1000B6E6
int _alloca_probe_8()
{
  return _alloca_probe();
}

// Address: 0x1000B710
int MORE32_0()
{
  return 0;
}

// Address: 0x1000B71A
__int64 RETZERO_0()
{
  return 0;
}

// Address: 0x1000B729
int __usercall _ftol2_pentium4@<eax>(double a1@<st0>)
{
  return (int)a1;
}

// Address: 0x1000B760
unsigned int __usercall _ftol2@<eax>(double a1@<st0>)
{
  int v1; // edx
  unsigned int result; // eax
  float v3; // [esp+0h] [ebp-20h]
  int v4; // [esp+18h] [ebp-8h]

  *(float *)&v4 = a1;
  v1 = v4;
  result = (__int64)a1;
  if ( result != 0 || ((v1 = (unsigned __int64)(__int64)a1 >> 32) & 0x7FFFFFFF) != 0 )
  {
    if ( v1 >= 0 )
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

// Address: 0x1000B7E0
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

// Address: 0x1000B810
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
      if ( _bittest(&dword_10013020, 1u) )
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
      if ( !_bittest(&dword_10013020, 1u) )
        goto Dword_align;
      goto XmmCopySmallTest;
    }
    if ( _bittest(&dword_10013BB8, 1u) )
    {
      qmemcpy(a1, Src, Size);
      return a1;
    }
    if ( (((unsigned int)Src ^ (unsigned int)a1) & 0xF) == 0 && _bittest(&dword_10013020, 1u) )
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
    if ( !_bittest(&dword_10013BB8, 0) || ((unsigned __int8)a1 & 3) != 0 )
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

// Address: 0x1000BD90
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

  if ( dword_10013BB4 != 0 )
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
      goto main_loop;
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
main_loop:
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

// Address: 0x1000BEC0
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
      if ( _bittest(&dword_10013020, 1u) )
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
      if ( !_bittest(&dword_10013020, 1u) )
        goto Dword_align_0;
      goto XmmCopySmallTest_0;
    }
    if ( _bittest(&dword_10013BB8, 1u) )
    {
      qmemcpy(a1, Src, Size);
      return a1;
    }
    if ( (((unsigned int)Src ^ (unsigned int)a1) & 0xF) == 0 && _bittest(&dword_10013020, 1u) )
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
    if ( !_bittest(&dword_10013BB8, 0) || ((unsigned __int8)a1 & 3) != 0 )
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

// Address: 0x1000C440
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

  if ( dword_10013BB4 != 0 )
  {
    v2 = (char *)Str;
    if ( (unsigned int)dword_10013BB4 > 1 )
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

