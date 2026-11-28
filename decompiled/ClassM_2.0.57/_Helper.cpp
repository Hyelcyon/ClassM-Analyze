// Decompiled from _Helper.dll (ClassM_2.0.57\unpacked\_Helper.dll)

// Address: 0x10001000
int __thiscall sub_10001000(_DWORD *this)
{
  *this = &std::bad_alloc::`vftable';
  return sub_10009F04();
}

// Address: 0x10001010
_DWORD *__thiscall sub_10001010(_DWORD *this, char a2)
{
  *this = &std::bad_alloc::`vftable';
  sub_10009F04();
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
  sub_10009E26();
  *this = &std::logic_error::`vftable';
  *(this + 8) = 0;
  *(this + 9) = 15;
  *((_BYTE *)this + 16) = 0;
  sub_10001710(a2, 0, -1);
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
  sub_10009F04(this);
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
_DWORD *__thiscall sub_10001140(_DWORD *this, int a2)
{
  sub_10001050(this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x10001160
int __thiscall sub_10001160(void **this)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  return sub_10009F04(this);
}

// Address: 0x100011A0
_DWORD *__thiscall sub_100011A0(_DWORD *this, char a2)
{
  *this = &DDialogBox::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100011C0
void __thiscall sub_100011C0(_DWORD *this)
{
  *this = &DDialogBox::`vftable';
}

// Address: 0x100011D0
BOOL __thiscall sub_100011D0(_DWORD *dwInitParam, HINSTANCE hInstance, LPCWSTR lpTemplateName, HWND hWndParent)
{
  if ( *(dwInitParam + 3) != 0 )
    return false;
  *(dwInitParam + 1) = hInstance;
  *(dwInitParam + 2) = hWndParent;
  *(dwInitParam + 4) = 0;
  return CreateDialogParamW(hInstance, lpTemplateName, hWndParent, DialogFunc, (LPARAM)dwInitParam) != nullptr;
}

// Address: 0x10001210
BOOL __thiscall sub_10001210(HWND *this)
{
  return PostMessageW(*(this + 3), 0x10u, 0, 0);
}

// Address: 0x10001230
INT_PTR __thiscall sub_10001230(_DWORD *dwInitParam, HINSTANCE hInstance, LPCWSTR lpTemplateName, HWND hWndParent)
{
  if ( *(dwInitParam + 3) != 0 )
    return 0;
  *(dwInitParam + 1) = hInstance;
  *(dwInitParam + 4) = 1;
  return DialogBoxParamW(hInstance, lpTemplateName, hWndParent, DialogFunc, (LPARAM)dwInitParam);
}

// Address: 0x10001270
INT_PTR __stdcall DialogFunc(HWND hWnd, UINT a2, WPARAM a3, WPARAM wParam)
{
  void *v4; // edi
  LPARAM v5; // esi
  void **v6; // ebx
  UINT v7; // ebx
  WPARAM v8; // edi
  int v10; // edi
  void *v11; // [esp+14h] [ebp-Ch]
  _BYTE v12[8]; // [esp+18h] [ebp-8h] BYREF

  v4 = dword_1002724C;
  v5 = 0;
  v11 = dword_10027264;
  v6 = (void **)sub_10001670(v12);
  if ( *v6 == nullptr || *v6 != v4 )
    _invalid_parameter_noinfo();
  if ( v6[1] != v11 )
    v5 = *(_DWORD *)sub_10001570(&hWnd);
  v7 = a2;
  v8 = wParam;
  if ( a2 == 272 )
  {
    if ( wParam != 0 )
    {
      v5 = wParam;
      *(_DWORD *)(wParam + 12) = hWnd;
      *(_DWORD *)sub_10001570(&hWnd) = v8;
    }
    else
    {
      PostMessageW(hWnd, 0x10u, 0, 0);
    }
  }
  if ( v5 == 0 )
    return 0;
  v10 = (**(int (__thiscall ***)(LPARAM, UINT, WPARAM, WPARAM))v5)(v5, v7, a3, v8);
  if ( v7 == 2 )
  {
    sub_10001610();
    *(_DWORD *)(v5 + 12) = 0;
  }
  return v10;
}

// Address: 0x10001340
int __thiscall sub_10001340(HWND *this, int a2, int a3, int a4)
{
  if ( a2 == 16 )
  {
    if ( *(this + 4) != nullptr )
    {
      EndDialog(*(this + 3), 0);
      return 1;
    }
    DestroyWindow(*(this + 3));
  }
  else
  {
    if ( a2 != 272 )
      return 0;
    if ( *(this + 2) == nullptr )
    {
      (*((void (__thiscall **)(HWND *))*this + 4))(this);
      return 1;
    }
  }
  return 1;
}

// Address: 0x100013A0
int __thiscall sub_100013A0(_DWORD *this)
{
  return *(this + 3);
}

// Address: 0x100013B0
BOOL __thiscall sub_100013B0(HWND *this)
{
  int SystemMetrics; // ebx
  int v3; // edi
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  SystemMetrics = GetSystemMetrics(0);
  v3 = GetSystemMetrics(1);
  GetWindowRect(*(this + 3), &Rect);
  return SetWindowPos(
           *(this + 3),
           nullptr,
           (unsigned int)(SystemMetrics + Rect.left - Rect.right) >> 1,
           (unsigned int)(v3 + Rect.top - Rect.bottom) >> 1,
           0,
           0,
           5u);
}

// Address: 0x10001410
BOOL __thiscall sub_10001410(HWND *this, LONG a2, LONG a3)
{
  HWND v4; // edx
  LONG v5; // eax
  LONG WindowLongW; // [esp-4h] [ebp-1Ch]
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  v4 = *(this + 3);
  Rect.left = 0;
  Rect.top = 0;
  Rect.right = a2;
  Rect.bottom = a3;
  WindowLongW = GetWindowLongW(v4, -20);
  v5 = GetWindowLongW(*(this + 3), -16);
  AdjustWindowRectEx(&Rect, v5, false, WindowLongW);
  return SetWindowPos(
           *(this + 3),
           nullptr,
           Rect.right - Rect.left,
           Rect.bottom - Rect.top,
           Rect.right - Rect.left,
           Rect.bottom - Rect.top,
           6u);
}

// Address: 0x10001490
int __thiscall sub_10001490(HWND *this, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType)
{
  return MessageBoxW(*(this + 3), lpText, lpCaption, uType);
}

// Address: 0x100014B0
int __thiscall sub_100014B0(HINSTANCE *this, UINT uID, UINT a3, int a4)
{
  WCHAR v6[260]; // [esp+8h] [ebp-414h] BYREF
  WCHAR Buffer[260]; // [esp+210h] [ebp-20Ch] BYREF

  LoadStringW(*(this + 1), uID, Buffer, 260);
  LoadStringW(*(this + 1), a3, v6, 260);
  return (*((int (__thiscall **)(HINSTANCE *, WCHAR *, WCHAR *, int))*this + 7))(this, Buffer, v6, a4);
}

// Address: 0x10001570
char *__stdcall sub_10001570(_DWORD *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  _DWORD *v5; // eax
  _DWORD v7[2]; // [esp+10h] [ebp-10h] BYREF

  v1 = *((_DWORD **)dword_10027264 + 1);
  v2 = dword_10027264;
  while ( *((_BYTE *)v1 + 21) == 0 )
  {
    if ( v1[3] >= *a1 )
    {
      v2 = v1;
      v1 = (_DWORD *)*v1;
    }
    else
    {
      v1 = (_DWORD *)v1[2];
    }
  }
  v3 = dword_1002724C;
  v4 = dword_10027264;
  if ( dword_1002724C == nullptr )
    _invalid_parameter_noinfo();
  if ( v2 == v4 || *a1 < v2[3] )
  {
    v7[0] = *a1;
    v7[1] = 0;
    v5 = (_DWORD *)sub_10001880(v7, v3, v2);
    v3 = (_DWORD *)*v5;
    v2 = (_DWORD *)v5[1];
  }
  if ( v3 != nullptr )
    v3 = (_DWORD *)*v3;
  else
    _invalid_parameter_noinfo();
  if ( v2 == (_DWORD *)v3[6] )
    _invalid_parameter_noinfo();
  return (char *)(v2 + 4);
}

// Address: 0x10001610
int __usercall sub_10001610@<eax>(int a1@<eax>)
{
  int v2; // [esp+18h] [ebp-14h]
  void *v3; // [esp+1Ch] [ebp-10h]
  int v4; // [esp+20h] [ebp-Ch]
  int v5; // [esp+24h] [ebp-8h]

  sub_10002040(a1);
  sub_100029B0();
  sub_10001A20(v2, v3, v4, v5);
  return 0;
}

// Address: 0x10001670
_DWORD *__userpurge sub_10001670@<eax>(_DWORD *a1@<ebx>, _DWORD *a2)
{
  void *v2; // ecx
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  void *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // edx
  _DWORD v10[2]; // [esp+10h] [ebp-10h] BYREF
  _DWORD v11[2]; // [esp+18h] [ebp-8h] BYREF

  v2 = dword_10027264;
  v3 = *((_DWORD **)dword_10027264 + 1);
  v4 = dword_10027264;
  while ( *((_BYTE *)v3 + 21) == 0 )
  {
    if ( v3[3] >= *a1 )
    {
      v4 = v3;
      v3 = (_DWORD *)*v3;
    }
    else
    {
      v3 = (_DWORD *)v3[2];
    }
  }
  v5 = dword_1002724C;
  v10[1] = v4;
  v10[0] = dword_1002724C;
  v6 = dword_10027264;
  if ( dword_1002724C == nullptr )
  {
    _invalid_parameter_noinfo();
    v2 = dword_10027264;
    v5 = dword_1002724C;
  }
  if ( v4 == v6 || *a1 < v4[3] )
  {
    v11[0] = v5;
    v11[1] = v2;
    v7 = v11;
  }
  else
  {
    v7 = v10;
  }
  v8 = v7[1];
  *a2 = *v7;
  a2[1] = v8;
  return a2;
}

// Address: 0x10001710
int __thiscall sub_10001710(int this, _DWORD *a2, unsigned int a3, char *a4)
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
    sub_10009D82();
  v5 = (char *)(a2[5] - a3);
  if ( a4 < v5 )
    v5 = a4;
  if ( (_DWORD *)this == a2 )
  {
    sub_10001BD0(&v5[a3], -1);
    sub_10001BD0(0, a3);
    return this;
  }
  if ( v5 == (char *)-1 )
    sub_10009D4A();
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
    sub_10002470(v5, *(_DWORD *)(this + 20));
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

// Address: 0x100017F0
void **sub_100017F0()
{
  _DWORD *v0; // eax

  v0 = operator new(4u);
  if ( v0 != nullptr )
    *v0 = &dword_1002724C;
  else
    v0 = nullptr;
  dword_1002724C = v0;
  dword_10027264 = (void *)sub_100026E0();
  *((_BYTE *)dword_10027264 + 21) = 1;
  *((_DWORD *)dword_10027264 + 1) = dword_10027264;
  *(_DWORD *)dword_10027264 = dword_10027264;
  *((_DWORD *)dword_10027264 + 2) = dword_10027264;
  dword_10027268 = 0;
  return &dword_1002724C;
}

// Address: 0x10001880
_DWORD *__userpurge sub_10001880@<eax>(_DWORD *a1@<ebx>, _DWORD *a2, void *a3, _DWORD *a4)
{
  _DWORD *v5; // esi
  void *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // esi
  bool v9; // cf
  _DWORD *v10; // eax
  _DWORD *v11; // [esp-4h] [ebp-24h]
  _DWORD *v12; // [esp+10h] [ebp-10h]
  _DWORD *v13; // [esp+10h] [ebp-10h]

  if ( dword_10027268 == 0 )
  {
    sub_100020D0(a1, 1, a2);
    return a1;
  }
  v5 = *(_DWORD **)dword_10027264;
  v6 = a3;
  if ( a3 == nullptr || a3 != dword_1002724C )
  {
    _invalid_parameter_noinfo();
    v6 = a3;
  }
  v7 = a4;
  if ( a4 == v5 )
  {
    if ( *a2 < a4[3] )
    {
      v11 = a2;
      goto LABEL_20;
    }
    goto LABEL_27;
  }
  v8 = dword_10027264;
  if ( v6 == nullptr || v6 != dword_1002724C )
  {
    _invalid_parameter_noinfo();
    v7 = a4;
  }
  if ( v7 == v8 )
  {
    if ( *(_DWORD *)(*((_DWORD *)dword_10027264 + 2) + 12) < *a2 )
    {
      v11 = a2;
LABEL_26:
      sub_100020D0(a1, 0, v11);
      return a1;
    }
  }
  else
  {
    v9 = v7[3] < *a2;
    if ( v7[3] > *a2 )
    {
      v12 = v7;
      sub_10002760();
      if ( v12[3] < *a2 )
      {
        v11 = a2;
        if ( *(_BYTE *)(v12[2] + 21) == 0 )
        {
LABEL_20:
          sub_100020D0(a1, 1, v11);
          return a1;
        }
        goto LABEL_26;
      }
      v7 = a4;
      v9 = a4[3] < *a2;
    }
    if ( v9 )
    {
      v13 = v7;
      sub_100027E0();
      if ( (unsigned __int8)sub_100089F0() != 0 || *a2 < v13[3] )
      {
        v11 = a2;
        if ( *(_BYTE *)(a4[2] + 21) == 0 )
          goto LABEL_20;
        goto LABEL_26;
      }
    }
  }
LABEL_27:
  v10 = (_DWORD *)sub_10001C60(a2);
  *a1 = *v10;
  a1[1] = v10[1];
  return a1;
}

// Address: 0x10001A20
_DWORD *__userpurge sub_10001A20@<eax>(_DWORD *a1@<ebx>, void *a2, void *a3, void *a4, void *a5)
{
  void *v5; // esi
  void *v6; // eax
  void *v7; // ecx
  void *v8; // esi
  int v9; // ecx
  int v11; // esi
  void *v12; // edi
  int v13; // eax
  void *v14; // ecx
  _BYTE *j; // eax
  int i; // eax
  int v17[3]; // [esp+8h] [ebp-Ch] BYREF

  v5 = *(void **)dword_10027264;
  v6 = a2;
  if ( a2 == nullptr || a2 != dword_1002724C )
  {
    _invalid_parameter_noinfo();
    v6 = a2;
  }
  v7 = a3;
  if ( a3 != v5 )
    goto LABEL_13;
  v8 = dword_10027264;
  if ( a4 == nullptr || a4 != dword_1002724C )
  {
    _invalid_parameter_noinfo();
    v7 = a3;
    v6 = a2;
  }
  if ( a5 == v8 )
  {
    sub_100025E0(*((void **)dword_10027264 + 1));
    *((_DWORD *)dword_10027264 + 1) = dword_10027264;
    dword_10027268 = 0;
    *(_DWORD *)dword_10027264 = dword_10027264;
    *((_DWORD *)dword_10027264 + 2) = dword_10027264;
    v9 = *(_DWORD *)dword_10027264;
    *a1 = dword_1002724C;
    a1[1] = v9;
    return a1;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      if ( v6 == nullptr || v6 != a4 )
      {
        _invalid_parameter_noinfo();
        v7 = a3;
        v6 = a2;
      }
      if ( v7 == a5 )
        break;
      v11 = (int)v6;
      v12 = v7;
      if ( v6 == nullptr )
      {
        _invalid_parameter_noinfo();
        v7 = a3;
      }
      if ( *((_BYTE *)v7 + 21) != 0 )
      {
        _invalid_parameter_noinfo();
      }
      else
      {
        v13 = *((_DWORD *)v7 + 2);
        if ( *(_BYTE *)(v13 + 21) != 0 )
        {
          for ( i = *((_DWORD *)v7 + 1); *(_BYTE *)(i + 21) == 0; i = *(_DWORD *)(i + 4) )
          {
            if ( v7 != *(void **)(i + 8) )
              break;
            v7 = (void *)i;
          }
          a3 = (void *)i;
        }
        else
        {
          v14 = *((void **)v7 + 2);
          for ( j = *(_BYTE **)v13; j[21] == 0; j = *(_BYTE **)j )
            v14 = j;
          a3 = v14;
        }
      }
      sub_10001D50((int)v17, v11, v12);
      v7 = a3;
      v6 = a2;
    }
    *a1 = dword_1002724C;
    a1[1] = v7;
    return a1;
  }
}

// Address: 0x10001B80
int sub_10001B80()
{
  int v1; // [esp+8h] [ebp-8h] BYREF

  sub_10001A20(&v1, dword_1002724C, *(void **)dword_10027264, dword_1002724C, dword_10027264);
  operator delete(dword_10027264);
  dword_10027264 = nullptr;
  dword_10027268 = 0;
  return 0;
}

// Address: 0x10001BD0
_DWORD *__thiscall sub_10001BD0(_DWORD *this, unsigned int a2, unsigned int a3)
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
    sub_10009D82();
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

// Address: 0x10001C60
int __userpurge sub_10001C60@<eax>(int a1@<edi>, unsigned int *a2)
{
  _DWORD *v2; // eax
  bool v3; // cl
  _DWORD *v4; // ebp
  unsigned int v5; // edx
  void *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  int v10; // edx
  int *v12; // eax
  int v13; // edx
  char v14; // [esp+Ch] [ebp-Ch]
  void *v15; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v16; // [esp+14h] [ebp-4h]

  v2 = *((_DWORD **)dword_10027264 + 1);
  v3 = true;
  v4 = dword_10027264;
  v14 = 1;
  if ( *((_BYTE *)v2 + 21) == 0 )
  {
    v5 = *a2;
    do
    {
      v4 = v2;
      v3 = v5 < v2[3];
      v14 = v3;
      if ( v5 >= v2[3] )
        v2 = (_DWORD *)v2[2];
      else
        v2 = (_DWORD *)*v2;
    }
    while ( *((_BYTE *)v2 + 21) == 0 );
  }
  v6 = dword_1002724C;
  v7 = v4;
  v16 = v4;
  v15 = dword_1002724C;
  if ( v3 )
  {
    v8 = *(_DWORD **)dword_10027264;
    if ( dword_1002724C == nullptr )
      _invalid_parameter_noinfo();
    if ( v4 == v8 )
    {
      v9 = (_DWORD *)sub_100020D0(&v15, 1, a2);
      v10 = v9[1];
      *(_DWORD *)a1 = *v9;
      *(_BYTE *)(a1 + 8) = 1;
      *(_DWORD *)(a1 + 4) = v10;
      return a1;
    }
    sub_10002760();
    v7 = v16;
    v6 = v15;
  }
  if ( v7[3] >= *a2 )
  {
    *(_DWORD *)a1 = v6;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = v7;
  }
  else
  {
    v12 = (int *)sub_100020D0(&v15, v14, a2);
    v13 = *v12;
    *(_DWORD *)(a1 + 4) = v12[1];
    *(_DWORD *)a1 = v13;
    *(_BYTE *)(a1 + 8) = 1;
  }
  return a1;
}

// Address: 0x10001D50
_DWORD *__stdcall sub_10001D50(_DWORD *a1, int a2, _BYTE *a3)
{
  int **v3; // edi
  int *v4; // esi
  int *i; // ecx
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  void *v9; // ecx
  _BYTE v11[20]; // [esp+14h] [ebp-54h] BYREF
  int v12; // [esp+28h] [ebp-40h]
  int v13; // [esp+2Ch] [ebp-3Ch]
  _DWORD pExceptionObject[14]; // [esp+30h] [ebp-38h] BYREF

  if ( a3[21] != 0 )
  {
    v13 = 15;
    v12 = 0;
    v11[4] = 0;
    sub_100028B0("invalid map/set<T> iterator", 0x1Bu);
    pExceptionObject[13] = 0;
    sub_10001050(pExceptionObject, (int)v11);
    pExceptionObject[0] = &std::out_of_range::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  sub_100027E0();
  if ( *(_BYTE *)(*(_DWORD *)a3 + 21) != 0 )
  {
    v3 = *((int ***)a3 + 2);
  }
  else if ( *(_BYTE *)(*((_DWORD *)a3 + 2) + 21) != 0 )
  {
    v3 = *(int ***)a3;
  }
  else
  {
    v3 = *((int ***)a3 + 2);
  }
  v4 = *((int **)a3 + 1);
  if ( *((_BYTE *)v3 + 21) == 0 )
    v3[1] = v4;
  if ( *((_BYTE **)dword_10027264 + 1) == a3 )
  {
    *((_DWORD *)dword_10027264 + 1) = v3;
  }
  else if ( (_BYTE *)*v4 == a3 )
  {
    *v4 = (int)v3;
  }
  else
  {
    v4[2] = (int)v3;
  }
  if ( *(_BYTE **)dword_10027264 == a3 )
  {
    if ( *((_BYTE *)v3 + 21) != 0 )
    {
      i = v4;
    }
    else
    {
      v6 = *v3;
      for ( i = (int *)v3; *((_BYTE *)v6 + 21) == 0; v6 = (int *)*v6 )
        i = v6;
    }
    *(_DWORD *)dword_10027264 = i;
  }
  if ( *((_BYTE **)dword_10027264 + 2) == a3 )
  {
    if ( *((_BYTE *)v3 + 21) != 0 )
      *((_DWORD *)dword_10027264 + 2) = v4;
    else
      *((_DWORD *)dword_10027264 + 2) = sub_10002670();
  }
  if ( a3[20] == 1 )
  {
    for ( ; v3 != *((int ***)dword_10027264 + 1); v4 = (int *)v4[1] )
    {
      if ( *((_BYTE *)v3 + 20) != 1 )
        break;
      v7 = *v4;
      if ( v3 == (int **)*v4 )
      {
        v7 = v4[2];
        if ( *(_BYTE *)(v7 + 20) == 0 )
        {
          *(_BYTE *)(v7 + 20) = 1;
          *((_BYTE *)v4 + 20) = 0;
          sub_10002620(v4);
          v7 = v4[2];
        }
        if ( *(_BYTE *)(v7 + 21) != 0 )
          goto LABEL_43;
        if ( *(_BYTE *)(*(_DWORD *)v7 + 20) != 1 || *(_BYTE *)(*(_DWORD *)(v7 + 8) + 20) != 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)(v7 + 8) + 20) == 1 )
          {
            *(_BYTE *)(*(_DWORD *)v7 + 20) = 1;
            *(_BYTE *)(v7 + 20) = 0;
            sub_10002690(v7);
            v7 = v4[2];
          }
          *(_BYTE *)(v7 + 20) = *((_BYTE *)v4 + 20);
          *((_BYTE *)v4 + 20) = 1;
          *(_BYTE *)(*(_DWORD *)(v7 + 8) + 20) = 1;
          sub_10002620(v4);
          break;
        }
      }
      else
      {
        if ( *(_BYTE *)(v7 + 20) == 0 )
        {
          *(_BYTE *)(v7 + 20) = 1;
          *((_BYTE *)v4 + 20) = 0;
          sub_10002690(v4);
          v7 = *v4;
        }
        if ( *(_BYTE *)(v7 + 21) != 0 )
          goto LABEL_43;
        v8 = *(_DWORD *)(v7 + 8);
        if ( *(_BYTE *)(v8 + 20) != 1 || *(_BYTE *)(*(_DWORD *)v7 + 20) != 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)v7 + 20) == 1 )
          {
            *(_BYTE *)(v8 + 20) = 1;
            *(_BYTE *)(v7 + 20) = 0;
            ((void (*)(void))sub_10002620)();
            v7 = *v4;
          }
          *(_BYTE *)(v7 + 20) = *((_BYTE *)v4 + 20);
          *((_BYTE *)v4 + 20) = 1;
          *(_BYTE *)(*(_DWORD *)v7 + 20) = 1;
          sub_10002690(v4);
          break;
        }
      }
      *(_BYTE *)(v7 + 20) = 0;
LABEL_43:
      v3 = (int **)v4;
    }
    *((_BYTE *)v3 + 20) = 1;
  }
  operator delete(a3);
  if ( dword_10027268 != 0 )
    --dword_10027268;
  v9 = dword_1002724C;
  a1[1] = a3;
  *a1 = v9;
  return a1;
}

// Address: 0x10002040
_DWORD *__userpurge sub_10002040@<eax>(_DWORD *result@<eax>, unsigned int *a2)
{
  _BYTE *v2; // edx
  _DWORD *v3; // ecx
  void *v4; // ebp
  unsigned int v5; // edi
  unsigned int v6; // esi
  _DWORD *v7; // ecx
  void *v8; // ecx

  v2 = dword_10027264;
  v3 = *((_DWORD **)dword_10027264 + 1);
  v4 = dword_10027264;
  if ( *((_BYTE *)v3 + 21) == 0 )
  {
    v5 = *a2;
    do
    {
      v6 = v3[3];
      if ( v6 >= v5 )
      {
        if ( v2[21] != 0 && v5 < v6 )
          v2 = v3;
        v4 = v3;
        v3 = (_DWORD *)*v3;
      }
      else
      {
        v3 = (_DWORD *)v3[2];
      }
    }
    while ( *((_BYTE *)v3 + 21) == 0 );
  }
  v7 = *((_DWORD **)dword_10027264 + 1);
  if ( v2[21] == 0 )
    v7 = *(_DWORD **)v2;
  while ( *((_BYTE *)v7 + 21) == 0 )
  {
    if ( *a2 >= v7[3] )
    {
      v7 = (_DWORD *)v7[2];
    }
    else
    {
      v2 = v7;
      v7 = (_DWORD *)*v7;
    }
  }
  v8 = dword_1002724C;
  result[1] = v4;
  *result = v8;
  result[2] = v8;
  result[3] = v2;
  return result;
}

// Address: 0x100020D0
_DWORD *__thiscall sub_100020D0(_DWORD *this, _DWORD *a2, char a3, int a4)
{
  int *v5; // ebp
  _DWORD *v6; // ecx
  int **v7; // ecx
  int *i; // edx
  int **v9; // esi
  int *v10; // edi
  int v11; // edi
  int **v12; // esi
  int *v13; // edi
  _DWORD *v14; // ecx
  _DWORD *v15; // esi
  int v16; // edi
  _DWORD *v17; // edi
  int *v18; // esi
  int v19; // ecx
  _DWORD *v20; // edi
  _DWORD *v21; // edi
  void *v23; // edx
  _BYTE v24[20]; // [esp+14h] [ebp-54h] BYREF
  int v25; // [esp+28h] [ebp-40h]
  int v26; // [esp+2Ch] [ebp-3Ch]
  _DWORD pExceptionObject[14]; // [esp+30h] [ebp-38h] BYREF

  if ( (unsigned int)dword_10027268 >= 0x1FFFFFFE )
  {
    v26 = 15;
    v25 = 0;
    v24[4] = 0;
    sub_100028B0("map/set<T> too long", 0x13u);
    pExceptionObject[13] = 0;
    sub_10001050(pExceptionObject, (int)v24);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  v5 = (int *)sub_10002720(dword_10027264, this, dword_10027264);
  ++dword_10027268;
  if ( this == dword_10027264 )
  {
    *((_DWORD *)dword_10027264 + 1) = v5;
    *(_DWORD *)dword_10027264 = v5;
    v6 = dword_10027264;
LABEL_9:
    v6[2] = v5;
    goto LABEL_10;
  }
  if ( a3 == 0 )
  {
    *(this + 2) = v5;
    v6 = dword_10027264;
    if ( this != *((_DWORD **)dword_10027264 + 2) )
      goto LABEL_10;
    goto LABEL_9;
  }
  *this = v5;
  if ( this == *(_DWORD **)dword_10027264 )
    *(_DWORD *)dword_10027264 = v5;
LABEL_10:
  v7 = (int **)(v5 + 1);
  for ( i = v5; *(_BYTE *)(i[1] + 20) == 0; v7 = (int **)(i + 1) )
  {
    v9 = (int **)*v7;
    v10 = (int *)(*v7)[1];
    if ( *v7 == (int *)*v10 )
    {
      v11 = v10[2];
      if ( *(_BYTE *)(v11 + 20) != 0 )
      {
        if ( i == v9[2] )
        {
          i = *v7;
          v12 = (int **)v9[2];
          (*v7)[2] = (int)*v12;
          if ( *((_BYTE *)*v12 + 21) == 0 )
            (*v12)[1] = (int)i;
          v7 = (int **)(i + 1);
          v12[1] = (int *)i[1];
          if ( i == *((int **)dword_10027264 + 1) )
          {
            *((_DWORD *)dword_10027264 + 1) = v12;
          }
          else
          {
            v13 = *v7;
            if ( i == (int *)**v7 )
              *v13 = (int)v12;
            else
              v13[2] = (int)v12;
          }
          *v12 = i;
          *v7 = (int *)v12;
        }
        *((_BYTE *)*v7 + 20) = 1;
        *(_BYTE *)((*v7)[1] + 20) = 0;
        v14 = (_DWORD *)(*v7)[1];
        v15 = (_DWORD *)*v14;
        *v14 = *(_DWORD *)(*v14 + 8);
        v16 = v15[2];
        if ( *(_BYTE *)(v16 + 21) == 0 )
          *(_DWORD *)(v16 + 4) = v14;
        v15[1] = v14[1];
        if ( v14 == *((_DWORD **)dword_10027264 + 1) )
        {
          *((_DWORD *)dword_10027264 + 1) = v15;
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
LABEL_49:
        v14[1] = v15;
        continue;
      }
    }
    else
    {
      v11 = *v10;
      if ( *(_BYTE *)(v11 + 20) != 0 )
      {
        if ( i == *v9 )
        {
          i = *v7;
          v18 = *v9;
          **v7 = v18[2];
          v19 = v18[2];
          if ( *(_BYTE *)(v19 + 21) == 0 )
            *(_DWORD *)(v19 + 4) = i;
          v7 = (int **)(i + 1);
          v18[1] = i[1];
          if ( i == *((int **)dword_10027264 + 1) )
          {
            *((_DWORD *)dword_10027264 + 1) = v18;
          }
          else
          {
            v20 = *v7;
            if ( i == (int *)(*v7)[2] )
              v20[2] = v18;
            else
              *v20 = v18;
          }
          v18[2] = (int)i;
          *v7 = v18;
        }
        *((_BYTE *)*v7 + 20) = 1;
        *(_BYTE *)((*v7)[1] + 20) = 0;
        v14 = (_DWORD *)(*v7)[1];
        v15 = (_DWORD *)v14[2];
        v14[2] = *v15;
        if ( *(_BYTE *)(*v15 + 21) == 0 )
          *(_DWORD *)(*v15 + 4) = v14;
        v15[1] = v14[1];
        if ( v14 == *((_DWORD **)dword_10027264 + 1) )
        {
          *((_DWORD *)dword_10027264 + 1) = v15;
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
        goto LABEL_49;
      }
    }
    *((_BYTE *)v9 + 20) = 1;
    *(_BYTE *)(v11 + 20) = 1;
    *(_BYTE *)((*v7)[1] + 20) = 0;
    i = (int *)(*v7)[1];
  }
  *(_BYTE *)(*((_DWORD *)dword_10027264 + 1) + 20) = 1;
  v23 = dword_1002724C;
  a2[1] = v5;
  *a2 = v23;
  return a2;
}

// Address: 0x10002370
_DWORD *__thiscall sub_10002370(_DWORD *this, struct std::exception *a2)
{
  sub_10002390(a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x10002390
int __thiscall sub_10002390(int this, struct std::exception *a2)
{
  std::exception::exception((std::exception *)this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  *(_DWORD *)(this + 36) = 15;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 16) = 0;
  sub_10001710(this + 12, (_DWORD *)a2 + 3, 0, (char *)0xFFFFFFFF);
  return this;
}

// Address: 0x10002410
_DWORD *__thiscall sub_10002410(_DWORD *this, struct std::exception *a2)
{
  sub_10002390((int)this, a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x10002430
int __thiscall sub_10002430(int this, void *Source)
{
  *(_DWORD *)(this + 24) = 15;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 4) = 0;
  sub_100028B0(Source, strlen((const char *)Source));
  return this;
}

// Address: 0x10002470
_BYTE *__thiscall sub_10002470(int this, unsigned int Destination, rsize_t SourceSize)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  size_t v7; // ecx
  const void *v8; // eax
  _BYTE *result; // eax
  int v10; // [esp+0h] [ebp-38h] BYREF
  _DWORD pExceptionObject[3]; // [esp+10h] [ebp-28h] BYREF
  char *v12[6]; // [esp+20h] [ebp-18h] BYREF
  void *Destinationa; // [esp+40h] [ebp+8h]

  v12[2] = (char *)&v10;
  v12[1] = (char *)this;
  v4 = Destination | 0xF;
  if ( (Destination | 0xF) == 0xFFFFFFFF )
  {
    v4 = Destination;
  }
  else
  {
    v5 = *(_DWORD *)(this + 24);
    v6 = v5 >> 1;
    if ( v4 / 3 < v5 >> 1 && v5 <= -2 - v6 )
      v4 = v6 + v5;
  }
  v7 = v4 + 1;
  v12[5] = nullptr;
  if ( v4 == -1 )
  {
    v7 = 0;
  }
  else if ( 0xFFFFFFFF / v7 == 0 )
  {
    v12[0] = nullptr;
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)v12);
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  Destinationa = operator new(v7);
  if ( SourceSize != 0 )
  {
    if ( *(_DWORD *)(this + 24) < 0x10u )
      v8 = (const void *)(this + 4);
    else
      v8 = *(const void **)(this + 4);
    memcpy_s(Destinationa, v4 + 1, v8, SourceSize);
  }
  if ( *(_DWORD *)(this + 24) >= 0x10u )
    operator delete(*(void **)(this + 4));
  result = (_BYTE *)(this + 4);
  *(_BYTE *)(this + 4) = 0;
  *(_DWORD *)(this + 4) = Destinationa;
  *(_DWORD *)(this + 24) = v4;
  *(_DWORD *)(this + 20) = SourceSize;
  if ( v4 >= 0x10 )
    result = Destinationa;
  result[SourceSize] = 0;
  return result;
}

// Address: 0x100025E0
void __stdcall sub_100025E0(void **a1)
{
  void **v1; // edi
  void **i; // esi

  v1 = a1;
  for ( i = a1; *((_BYTE *)i + 21) == 0; v1 = i )
  {
    sub_100025E0(i[2]);
    i = (void **)*i;
    operator delete(v1);
  }
}

// Address: 0x10002620
_DWORD *__thiscall sub_10002620(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // edx

  result = (_DWORD *)*(this + 2);
  *(this + 2) = *result;
  if ( *(_BYTE *)(*result + 21) == 0 )
    *(_DWORD *)(*result + 4) = this;
  result[1] = *(this + 1);
  if ( this == *((_DWORD **)dword_10027264 + 1) )
  {
    *((_DWORD *)dword_10027264 + 1) = result;
    *result = this;
    *(this + 1) = result;
  }
  else
  {
    v2 = (_DWORD *)*(this + 1);
    if ( this == (_DWORD *)*v2 )
      *v2 = result;
    else
      v2[2] = result;
    *result = this;
    *(this + 1) = result;
  }
  return result;
}

// Address: 0x10002670
int __usercall sub_10002670@<eax>(int result@<eax>)
{
  int i; // ecx

  for ( i = *(_DWORD *)(result + 8); *(_BYTE *)(i + 21) == 0; i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}

// Address: 0x10002690
int __thiscall sub_10002690(_DWORD *this)
{
  int result; // eax
  int v2; // edx
  _DWORD *v3; // edx

  result = *this;
  *this = *(_DWORD *)(*this + 8);
  v2 = *(_DWORD *)(result + 8);
  if ( *(_BYTE *)(v2 + 21) == 0 )
    *(_DWORD *)(v2 + 4) = this;
  *(_DWORD *)(result + 4) = *(this + 1);
  if ( this == *((_DWORD **)dword_10027264 + 1) )
  {
    *((_DWORD *)dword_10027264 + 1) = result;
    *(_DWORD *)(result + 8) = this;
    *(this + 1) = result;
  }
  else
  {
    v3 = (_DWORD *)*(this + 1);
    if ( this == (_DWORD *)v3[2] )
      v3[2] = result;
    else
      *v3 = result;
    *(_DWORD *)(result + 8) = this;
    *(this + 1) = result;
  }
  return result;
}

// Address: 0x100026E0
_DWORD *sub_100026E0()
{
  _DWORD *result; // eax

  result = operator new(0x18u);
  if ( result != nullptr )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 20) = 1;
  *((_BYTE *)result + 21) = 0;
  return result;
}

// Address: 0x10002720
_DWORD *__userpurge sub_10002720@<eax>(_DWORD *a1@<esi>, int a2, int a3, int a4)
{
  _DWORD *result; // eax

  result = operator new(0x18u);
  if ( result != nullptr )
  {
    *result = a2;
    result[1] = a3;
    result[2] = a4;
    result[3] = *a1;
    result[4] = a1[1];
    *((_BYTE *)result + 20) = 0;
    *((_BYTE *)result + 21) = 0;
  }
  return result;
}

// Address: 0x10002760
void __usercall sub_10002760(_DWORD *a1@<esi>)
{
  int *v1; // eax
  int v2; // eax
  int v3; // ecx
  int j; // eax
  int i; // eax

  if ( *a1 == 0 )
    _invalid_parameter_noinfo();
  v1 = (int *)a1[1];
  if ( *((_BYTE *)v1 + 21) != 0 )
  {
    v2 = v1[2];
    a1[1] = v2;
    if ( *(_BYTE *)(v2 + 21) == 0 )
      return;
    goto LABEL_5;
  }
  v3 = *v1;
  if ( *(_BYTE *)(*v1 + 21) != 0 )
  {
    for ( i = v1[1]; *(_BYTE *)(i + 21) == 0; i = *(_DWORD *)(i + 4) )
    {
      if ( a1[1] != *(_DWORD *)i )
        break;
      a1[1] = i;
    }
    if ( *(_BYTE *)(a1[1] + 21) != 0 )
    {
LABEL_5:
      _invalid_parameter_noinfo();
      return;
    }
    a1[1] = i;
  }
  else
  {
    for ( j = *(_DWORD *)(v3 + 8); *(_BYTE *)(j + 21) == 0; j = *(_DWORD *)(j + 8) )
      v3 = j;
    a1[1] = v3;
  }
}

// Address: 0x100027E0
void __usercall sub_100027E0(_DWORD *a1@<esi>)
{
  int v1; // eax
  int **v2; // ecx
  int *j; // eax
  int i; // eax

  if ( *a1 == 0 )
    _invalid_parameter_noinfo();
  v1 = a1[1];
  if ( *(_BYTE *)(v1 + 21) != 0 )
  {
    _invalid_parameter_noinfo();
  }
  else
  {
    v2 = *(int ***)(v1 + 8);
    if ( *((_BYTE *)v2 + 21) != 0 )
    {
      for ( i = *(_DWORD *)(v1 + 4); *(_BYTE *)(i + 21) == 0; i = *(_DWORD *)(i + 4) )
      {
        if ( a1[1] != *(_DWORD *)(i + 8) )
          break;
        a1[1] = i;
      }
      a1[1] = i;
    }
    else
    {
      for ( j = *v2; *((_BYTE *)j + 21) == 0; j = (int *)*j )
        v2 = (int **)j;
      a1[1] = v2;
    }
  }
}

// Address: 0x10002850
void *__stdcall sub_10002850(char *a1)
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

// Address: 0x100028B0
int __fastcall sub_100028B0(int a1, int a2, _BYTE *Source, char *SourceSize)
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
        return sub_10001710(a1, (_DWORD *)a1, Source - (_BYTE *)v6, SourceSize);
      }
    }
  }
  if ( SourceSize == (char *)-1 )
    sub_10009D4A();
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
    sub_10002470(a1, (unsigned int)SourceSize, *(_DWORD *)(a1 + 20));
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

// Address: 0x10002990
std::exception *__thiscall sub_10002990(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x100029B0
void __usercall sub_100029B0(_DWORD *a1@<esi>, int a2, int *a3, int a4, int *a5)
{
  int *v5; // ecx
  int **v6; // eax
  int *j; // eax
  int *i; // eax

LABEL_1:
  v5 = a3;
  while ( 1 )
  {
    if ( a2 == 0 || a2 != a4 )
    {
      _invalid_parameter_noinfo();
      v5 = a3;
    }
    if ( v5 == a5 )
      break;
    ++*a1;
    if ( a2 == 0 )
    {
      _invalid_parameter_noinfo();
      v5 = a3;
    }
    if ( *((_BYTE *)v5 + 21) != 0 )
    {
      _invalid_parameter_noinfo();
      goto LABEL_1;
    }
    v6 = (int **)v5[2];
    if ( *((_BYTE *)v6 + 21) != 0 )
    {
      for ( i = (int *)v5[1]; *((_BYTE *)i + 21) == 0; i = (int *)i[1] )
      {
        if ( v5 != (int *)i[2] )
          break;
        v5 = i;
      }
      v5 = i;
      a3 = i;
    }
    else
    {
      v5 = (int *)v5[2];
      for ( j = *v6; *((_BYTE *)j + 21) == 0; j = (int *)*j )
        v5 = j;
      a3 = v5;
    }
  }
}

// Address: 0x10002A40
BOOL __usercall sub_10002A40@<eax>(const WCHAR *a1@<eax>)
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

// Address: 0x10002A80
HANDLE __cdecl sub_10002A80(wchar_t *Format, int ArgList)
{
  HANDLE result; // eax
  HANDLE v3; // esi
  LPCWSTR v4; // edi
  int v5; // eax
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-4h]

  if ( hObject == nullptr )
  {
    result = (HANDLE)(timeGetTime() - dword_1002713C);
    if ( (unsigned int)result < 0x3E8 )
      return result;
    dword_1002713C = timeGetTime();
    result = CreateFileW(L"\\\\.\\pipe\\SENUL_DEBUG_PIPE", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
    hObject = result;
    if ( result == (HANDLE)-1 )
      goto LABEL_10;
    sub_10002A40(L"Logging Start...");
  }
  if ( (dword_10027298 & 1) == 0 )
  {
    dword_10027298 |= 1u;
    v7 = 0;
    lpBuffer = (LPCWSTR)operator new(0x20000u);
    atexit(sub_1001B1C0);
  }
  _vswprintf_c_l((wchar_t *const)lpBuffer, 0x10000u, Format, nullptr, (va_list)&ArgList);
  v3 = hObject;
  v4 = lpBuffer;
  v5 = lstrlenW(lpBuffer);
  if ( WriteFile(v3, v4, 2 * v5 + 2, &NumberOfBytesWritten, nullptr) )
    return (HANDLE)FlushFileBuffers(v3);
  result = (HANDLE)CloseHandle(hObject);
LABEL_10:
  hObject = nullptr;
  return result;
}

// Address: 0x10002BD0
HANDLE sub_10002BD0()
{
  unsigned __int16 v0; // si
  int v1; // edi
  int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int i; // edi
  char v7; // al
  HANDLE result; // eax
  int v9; // [esp+0h] [ebp-140h]
  int v10; // [esp+0h] [ebp-140h]
  unsigned int v11; // [esp+10h] [ebp-130h]
  WCHAR String2[20]; // [esp+14h] [ebp-12Ch] BYREF
  WCHAR String1[128]; // [esp+3Ch] [ebp-104h] BYREF

  lstrcpyW(String1, L"Offset   ");
  v0 = 0;
  v1 = 55;
  do
  {
    v2 = v1 - 7;
    if ( v0 >= 0xAu )
      v2 = v1;
    wsprintfW(String2, L" %c ", v2);
    lstrcatW(String1, String2);
    ++v0;
    ++v1;
  }
  while ( v0 < 0x10u );
  sub_10002A80(String1, v9);
  v3 = 0;
  v11 = 0;
  do
  {
    String1[0] = 0;
    wsprintfW(String2, L"%08X ", &byte_100271E8[v3]);
    lstrcatW(String1, String2);
    v4 = 0;
    while ( v3 < 0x64 )
    {
      wsprintfW(String2, L"%02X ", (unsigned __int8)byte_100271E8[v3]);
      lstrcatW(String1, String2);
      ++v4;
      ++v3;
      if ( v4 >= 0x10 )
        goto LABEL_12;
    }
    v5 = 16 - v4;
    do
    {
      lstrcatW(String1, L"   ");
      --v5;
    }
    while ( v5 != 0 );
LABEL_12:
    v3 = v11;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( v3 >= 0x64 )
        break;
      v7 = byte_100271E8[v3];
      if ( v7 < 32 )
        v7 = 46;
      wsprintfW(String2, L"%c", (unsigned __int8)v7);
      lstrcatW(String1, String2);
      ++v3;
    }
    result = sub_10002A80(String1, v10);
    v11 = v3;
  }
  while ( v3 < 0x64 );
  return result;
}

// Address: 0x10002D50
int sub_10002D50()
{
  int v1; // [esp+10h] [ebp-Ch] BYREF
  LPVOID ppv; // [esp+14h] [ebp-8h] BYREF
  int v3; // [esp+18h] [ebp-4h] BYREF

  ppv = nullptr;
  v1 = 0;
  v3 = 0;
  if ( CoCreateInstance(&rclsid, nullptr, 1u, &riid, &ppv) >= 0
    && (*(int (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 28))(ppv, &v1) >= 0 )
  {
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v1 + 28))(v1, &v3);
  }
  if ( v1 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v1 + 8))(v1);
  if ( ppv != nullptr )
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv);
  return v3;
}

// Address: 0x10002DE0
bool __usercall sub_10002DE0@<al>(int a1@<eax>, OLECHAR *psz)
{
  int (__stdcall *v2)(int, int *); // eax
  bool v3; // bl
  OLECHAR *v4; // esi
  int v7; // [esp+1Ch] [ebp-Ch] BYREF
  int v8; // [esp+20h] [ebp-8h] BYREF
  int v9; // [esp+24h] [ebp-4h] BYREF

  v2 = *(int (__stdcall **)(int, int *))(*(_DWORD *)a1 + 80);
  v8 = 0;
  v9 = 0;
  v3 = false;
  if ( v2(a1, &v9) >= 0 )
  {
    v4 = SysAllocString(psz);
    if ( v4 != nullptr )
    {
      if ( (*(int (__stdcall **)(int, OLECHAR *, int *))(*(_DWORD *)v9 + 40))(v9, v4, &v8) >= 0
        && (*(int (__stdcall **)(int, int *))(*(_DWORD *)v8 + 68))(v8, &v7) >= 0 )
      {
        v3 = (_WORD)v7 != 0;
      }
      SysFreeString(v4);
    }
  }
  if ( v8 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8);
  if ( v9 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9);
  return v3;
}

// Address: 0x10002E80
bool __usercall sub_10002E80@<al>(OLECHAR *a1@<eax>, int a2@<ecx>)
{
  bool v4; // bl
  OLECHAR *v5; // edi
  OLECHAR *v6; // esi
  LPVOID ppv; // [esp+20h] [ebp-8h] BYREF
  int v9; // [esp+24h] [ebp-4h] BYREF

  ppv = nullptr;
  v9 = 0;
  v4 = false;
  if ( sub_10002DE0(a2, a1) )
  {
    v4 = true;
  }
  else if ( (*(int (__stdcall **)(int, int *))(*(_DWORD *)a2 + 80))(a2, &v9) >= 0
         && CoCreateInstance(&stru_1001DE10, nullptr, 1u, &stru_1001DE20, &ppv) >= 0 )
  {
    v5 = SysAllocString(a1);
    if ( v5 != nullptr )
    {
      if ( (*(int (__stdcall **)(LPVOID, OLECHAR *))(*(_DWORD *)ppv + 40))(ppv, v5) >= 0 )
      {
        v6 = SysAllocString(L"Mediaweb ClassM");
        if ( SysStringLen(v6) != 0 && (*(int (__stdcall **)(LPVOID, OLECHAR *))(*(_DWORD *)ppv + 32))(ppv, v6) >= 0 )
          v4 = (*(int (__stdcall **)(int, LPVOID))(*(_DWORD *)v9 + 32))(v9, ppv) >= 0;
        if ( v6 != nullptr )
          SysFreeString(v6);
      }
      SysFreeString(v5);
    }
  }
  if ( ppv != nullptr )
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv);
  if ( v9 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9);
  return v4;
}

// Address: 0x10002F80
bool __usercall sub_10002F80@<al>(int a1@<eax>, OLECHAR *psz)
{
  void (__stdcall *v2)(int, int *); // eax
  int v4; // edi
  BSTR v5; // eax
  int v6; // edi
  BSTR v7; // eax
  int v8; // edi
  BSTR v9; // eax
  int v10; // esi
  LPVOID ppv; // [esp+48h] [ebp-8h] BYREF
  int v13; // [esp+4Ch] [ebp-4h] BYREF

  v2 = *(void (__stdcall **)(int, int *))(*(_DWORD *)a1 + 72);
  v13 = 0;
  v2(a1, &v13);
  if ( v13 == 0 || CoCreateInstance(&stru_1001C2AC, nullptr, 1u, &stru_1001C28C, &ppv) < 0 )
    return false;
  v4 = *(_DWORD *)ppv;
  v5 = SysAllocString(L"Mediaweb ClassM");
  (*(void (__stdcall **)(LPVOID, BSTR))(v4 + 32))(ppv, v5);
  v6 = *(_DWORD *)ppv;
  v7 = SysAllocString(L"Mediaweb ClassM");
  (*(void (__stdcall **)(LPVOID, BSTR))(v6 + 40))(ppv, v7);
  v8 = *(_DWORD *)ppv;
  v9 = SysAllocString(psz);
  (*(void (__stdcall **)(LPVOID, BSTR))(v8 + 48))(ppv, v9);
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 64))(ppv, 256);
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 136))(ppv, -1);
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 152))(ppv, 0x7FFFFFFF);
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 168))(ppv, 1);
  v10 = (*(int (__stdcall **)(int, LPVOID))(*(_DWORD *)v13 + 32))(v13, ppv);
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv);
  return v10 >= 0;
}

// Address: 0x10003090
BOOL __cdecl FirewallAddApp(OLECHAR *psz)
{
  BOOL v1; // edi
  LPVOID v2; // esi
  int v3; // esi
  LPVOID ppv; // [esp+Ch] [ebp-4h] BYREF

  CoInitializeEx(nullptr, 0);
  v1 = false;
  if ( CoCreateInstance(&stru_1001C2BC, nullptr, 1u, &stru_1001C29C, &ppv) < 0
    || (v2 = ppv, ppv == nullptr)
    || (v1 = sub_10002F80((int)ppv, psz), (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v2 + 8))(v2), !v1) )
  {
    v3 = sub_10002D50();
    if ( v3 != 0 )
    {
      v1 = sub_10002E80(psz, v3);
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    }
  }
  return v1;
}

// Address: 0x10003110
BOOL __cdecl FirewallRemoveApp(OLECHAR *psz)
{
  BOOL v1; // esi
  LPVOID v2; // edi
  void (__stdcall *v3)(LPVOID, int **); // eax
  bool v4; // al
  int v5; // esi
  BSTR v6; // eax
  int v7; // eax
  int v8; // edi
  bool v9; // bl
  BSTR v10; // eax
  OLECHAR *v11; // esi
  int *v13; // [esp+24h] [ebp-8h] BYREF
  LPVOID ppv; // [esp+28h] [ebp-4h] BYREF

  CoInitializeEx(nullptr, 0);
  v1 = false;
  if ( CoCreateInstance(&stru_1001C2BC, nullptr, 1u, &stru_1001C29C, &ppv) < 0 )
    goto LABEL_19;
  v2 = ppv;
  if ( ppv == nullptr )
    goto LABEL_19;
  v3 = *(void (__stdcall **)(LPVOID, int **))(*(_DWORD *)ppv + 72);
  v13 = nullptr;
  v3(ppv, &v13);
  if ( v13 != nullptr )
  {
    v5 = *v13;
    v6 = SysAllocString(L"Mediaweb ClassM");
    v4 = (*(int (__stdcall **)(int *, BSTR))(v5 + 36))(v13, v6) >= 0;
  }
  else
  {
    v4 = false;
  }
  v1 = v4;
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v2 + 8))(v2);
  if ( !v1 )
  {
LABEL_19:
    v7 = sub_10002D50();
    v8 = v7;
    if ( v7 != 0 )
    {
      v13 = nullptr;
      v9 = false;
      if ( sub_10002DE0(v7, psz) )
      {
        if ( (*(int (__stdcall **)(int, int **))(*(_DWORD *)v8 + 80))(v8, &v13) >= 0 )
        {
          v10 = SysAllocString(psz);
          v11 = v10;
          if ( v10 != nullptr )
          {
            v9 = (*(int (__stdcall **)(int *, BSTR))(*v13 + 36))(v13, v10) >= 0;
            SysFreeString(v11);
          }
        }
      }
      else
      {
        v9 = true;
      }
      if ( v13 != nullptr )
        (*(void (__stdcall **)(int *))(*v13 + 8))(v13);
      v1 = v9;
      (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8);
    }
  }
  return v1;
}

// Address: 0x10003220
LRESULT __stdcall sub_10003220(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM a4)
{
  LPARAM lParam; // [esp+Ch] [ebp-88h] BYREF
  WCHAR v6[64]; // [esp+10h] [ebp-84h] BYREF

  if ( Msg == 273 && (_WORD)wParam == 1000 && HIWORD(wParam) == 768 )
  {
    lParam = 0;
    if ( SendMessageW(::hWnd, 0x466u, 0, (LPARAM)&lParam) == 4 )
    {
      sub_10003630(L"%d.%d.%d.%d", HIBYTE(lParam), BYTE2(lParam), BYTE1(lParam), (unsigned __int8)lParam);
      SetWindowTextW(dword_100271B8, v6);
    }
    else
    {
      SetWindowTextW(dword_100271B8, &String);
    }
  }
  return DefWindowProcW(hWnd, Msg, wParam, a4);
}

// Address: 0x10003320
BOOL __cdecl CreateIPAddrCtrl(HWND hWndParent, HWND hWnd)
{
  BOOL result; // eax
  HWND Window; // edi
  int v4; // [esp+8h] [ebp-A4h] BYREF
  int v5; // [esp+Ch] [ebp-A0h] BYREF
  int v6; // [esp+10h] [ebp-9Ch] BYREF
  int v7; // [esp+14h] [ebp-98h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-94h] BYREF
  WCHAR String[64]; // [esp+28h] [ebp-84h] BYREF

  result = GetWindowRect(hWnd, &Rect);
  if ( result )
  {
    ScreenToClient(hWndParent, (LPPOINT)&Rect);
    ScreenToClient(hWndParent, (LPPOINT)&Rect.right);
    dword_100271B8 = hWnd;
    Window = CreateWindowExW(
               0,
               L"_Helper_IPADDRESS",
               L"_Helper_IPADDRESS",
               0x50000000u,
               Rect.left,
               Rect.top,
               Rect.right - Rect.left,
               Rect.bottom - Rect.top,
               hWndParent,
               nullptr,
               nullptr,
               nullptr);
    ::hWnd = CreateWindowExW(
               0,
               L"SysIPAddress32",
               &::String,
               0x50000000u,
               0,
               0,
               Rect.right - Rect.left,
               Rect.bottom - Rect.top,
               Window,
               (HMENU)0x3E8,
               nullptr,
               nullptr);
    memset(String, 0, sizeof(String));
    if ( GetWindowTextW(dword_100271B8, String, 64) != 0 )
    {
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v4 = 0;
      swscanf_s(String, L"%u.%u.%u.%u", &v4, &v5, &v6, &v7);
      SendMessageW(::hWnd, 0x465u, 0, v7 + ((v6 + ((v5 + (v4 << 8)) << 8)) << 8));
    }
    SetFocus(::hWnd);
    return (BOOL)Window;
  }
  return result;
}

// Address: 0x100034C0
LRESULT QueryIPAddr()
{
  LRESULT result; // eax
  LPARAM lParam; // [esp+0h] [ebp-88h] BYREF
  WCHAR String[64]; // [esp+4h] [ebp-84h] BYREF

  lParam = 0;
  result = SendMessageW(hWnd, 0x466u, 0, (LPARAM)&lParam);
  if ( result != 0 )
  {
    sub_10003630(L"%d.%d.%d.%d", HIBYTE(lParam), BYTE2(lParam), BYTE1(lParam), (unsigned __int8)lParam);
    return SetWindowTextW(dword_100271B8, String);
  }
  return result;
}

// Address: 0x10003560
LSTATUS NoDrivesUpdate()
{
  BYTE Data[4]; // [esp+0h] [ebp-Ch] BYREF
  HKEY phkResult; // [esp+4h] [ebp-8h] BYREF
  DWORD cbData; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)Data = 0;
  cbData = 4;
  RegCreateKeyW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer", &phkResult);
  RegQueryValueExW(phkResult, L"NoDrives_old", nullptr, nullptr, Data, &cbData);
  return RegSetValueExW(phkResult, L"NoDrives", 0, 4u, Data, 4u);
}

// Address: 0x100035D0
ATOM sub_100035D0()
{
  WNDCLASSW WndClass; // [esp+4h] [ebp-28h] BYREF

  WndClass.hCursor = LoadCursorW(nullptr, (LPCWSTR)0x7F00);
  WndClass.hIcon = LoadIconW(nullptr, (LPCWSTR)0x7F00);
  WndClass.lpszMenuName = nullptr;
  WndClass.lpszClassName = L"_Helper_IPADDRESS";
  WndClass.hbrBackground = nullptr;
  WndClass.style = 0;
  WndClass.lpfnWndProc = sub_10003220;
  memset(&WndClass.cbClsExtra, 0, 12);
  return RegisterClassW(&WndClass);
}

// Address: 0x10003630
int __usercall sub_10003630@<eax>(wchar_t *a1@<edx>, wchar_t *Format, ...)
{
  va_list ArgList; // [esp+8h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(a1, 0x40u, Format, ArgList);
}

// Address: 0x10003650
void __cdecl InitCert(int a1)
{
  HMODULE LibraryW; // eax
  int v2; // ebp
  int v3; // edx
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // edx
  _DWORD *v7; // esi
  int v8; // esi
  _DWORD *v9; // ecx
  const char *v10; // eax
  int v11; // edx
  int v12; // edi
  const char *v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  char *v19; // edx
  int v20; // eax
  int i; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // ebp
  int v26; // edi
  char *v27; // esi
  char *v28; // ecx
  int j; // edx
  int v30; // ebx
  char *v31; // [esp+0h] [ebp-700h] BYREF
  int v32; // [esp+4h] [ebp-6FCh]
  char *v33; // [esp+8h] [ebp-6F8h]
  _BYTE pExceptionObject[12]; // [esp+Ch] [ebp-6F4h] BYREF
  void **v35; // [esp+18h] [ebp-6E8h]
  char v36; // [esp+1Ch] [ebp-6E4h]
  _DWORD v37[120]; // [esp+20h] [ebp-6E0h] BYREF
  _DWORD v38[8]; // [esp+200h] [ebp-500h] BYREF
  char v39; // [esp+220h] [ebp-4E0h] BYREF
  int v40; // [esp+3E0h] [ebp-320h]
  size_t Size; // [esp+3E4h] [ebp-31Ch]
  int v42; // [esp+3E8h] [ebp-318h]
  char v43[32]; // [esp+3ECh] [ebp-314h] BYREF
  _BYTE v44[32]; // [esp+40Ch] [ebp-2F4h] BYREF
  _DWORD v45[3]; // [esp+42Ch] [ebp-2D4h] BYREF
  unsigned __int8 v46; // [esp+438h] [ebp-2C8h]
  unsigned __int8 v47; // [esp+439h] [ebp-2C7h]
  unsigned __int8 v48; // [esp+43Ah] [ebp-2C6h]
  unsigned __int8 v49; // [esp+43Bh] [ebp-2C5h]
  int v50; // [esp+43Ch] [ebp-2C4h]
  _BYTE v51[52]; // [esp+48Ch] [ebp-274h] BYREF
  _BYTE v52[52]; // [esp+4C0h] [ebp-240h] BYREF
  WCHAR Filename[260]; // [esp+4F4h] [ebp-20Ch] BYREF

  if ( hLibModule == nullptr )
  {
    GetModuleFileNameW(hInstance, Filename, 0x104u);
    wcsrchr(Filename, 0x5Cu)[1] = 0;
    wcscat_s(Filename, 0x104u, L"IntegCert.dll");
    LibraryW = LoadLibraryW(Filename);
    hLibModule = LibraryW;
    if ( LibraryW != nullptr )
    {
      dword_100271C4 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(LibraryW, (LPCSTR)1);
      dword_100271C8 = (int)GetProcAddress(hLibModule, (LPCSTR)2);
      dword_100271CC = (int)GetProcAddress(hLibModule, (LPCSTR)0xE);
      dword_100271D0 = (int)GetProcAddress(hLibModule, (LPCSTR)3);
      dword_100271D4 = (int)GetProcAddress(hLibModule, (LPCSTR)7);
      dword_100271D8 = (int)GetProcAddress(hLibModule, (LPCSTR)4);
      dword_100271DC = (int)GetProcAddress(hLibModule, (LPCSTR)6);
      v35 = &CRijndael::`vftable';
      v36 = 0;
      memset(v51, 0, 0x32u);
      memset(v52, 0, 0x32u);
      sub_10004F60(16, "OGEFBHKANFCJPPHA");
      sub_100057C0(v51);
      if ( "KBFJFIOLMNHALLGNDADJGIDBHIBLGPME" == nullptr )
      {
        v31 = "Empty key";
        std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&v31);
        _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
      }
      v40 = 32;
      Size = 32;
      memcpy_0(v43, &unk_1001E1B0, sizeof(v43));
      memcpy_0(v44, &unk_1001E1B0, sizeof(v44));
      v2 = 8;
      v3 = 0;
      v42 = 14;
      v31 = (char *)8;
      v4 = v37;
      do
      {
        memset(v4, 0, 0x20u);
        v5 = v42;
        ++v3;
        v4 += 8;
      }
      while ( v3 <= v42 );
      v6 = 0;
      if ( v42 >= 0 )
      {
        v7 = v38;
        do
        {
          memset(v7, 0, 0x20u);
          v5 = v42;
          ++v6;
          v7 += 8;
        }
        while ( v6 <= v42 );
      }
      v32 = 8 * (v5 + 1);
      v8 = v40 / 4;
      v9 = v45;
      v10 = "KBFJFIOLMNHALLGNDADJGIDBHIBLGPME";
      if ( v40 / 4 > 0 )
      {
        v11 = v40 / 4;
        do
        {
          *v9 = *(unsigned __int8 *)v10 << 24;
          v12 = *((unsigned __int8 *)v10 + 1);
          v13 = v10 + 1;
          *v9 |= v12 << 16;
          v14 = *(unsigned __int8 *)++v13;
          *v9 |= v14 << 8;
          *v9 |= *((unsigned __int8 *)v13 + 1);
          v10 = v13 + 2;
          ++v9;
          --v11;
        }
        while ( v11 != 0 );
        v5 = v42;
      }
      v15 = 0;
      if ( v8 > 0 )
      {
        do
        {
          if ( v15 >= v32 )
            break;
          v16 = v15 / 8;
          v17 = v15 % 8;
          v18 = v45[v15++];
          v37[8 * v16 + v17] = v18;
          v38[8 * (v42 - v16) + v17] = *(_DWORD *)&v44[4 * v15 + 28];
        }
        while ( v15 < v8 );
        v5 = v42;
      }
      if ( v15 < v32 )
      {
        v19 = (char *)&unk_10021C10;
        while ( 1 )
        {
          v45[0] ^= (unsigned __int8)byte_1001EA10[HIBYTE(*(_DWORD *)&v44[4 * v8 + 28])]
                  ^ (((unsigned __int8)byte_1001EA10[(unsigned __int8)*(_DWORD *)&v44[4 * v8 + 28]]
                    ^ (((unsigned __int8)byte_1001EA10[BYTE1(*(_DWORD *)&v44[4 * v8 + 28])]
                      ^ ((*v19++ ^ byte_1001EA10[(unsigned __int8)BYTE2(*(_DWORD *)&v44[4 * v8 + 28])]) << 8)) << 8)) << 8);
          v33 = v19;
          v20 = 1;
          if ( v8 == 8 )
          {
            do
            {
              v45[v20] ^= *(_DWORD *)&v44[4 * v20 + 28];
              ++v20;
            }
            while ( v20 < 4 );
            v50 ^= (unsigned __int8)byte_1001EA10[v46]
                 ^ (((unsigned __int8)byte_1001EA10[v47]
                   ^ (((unsigned __int8)byte_1001EA10[v48] ^ (byte_1001EA10[v49] << 8)) << 8)) << 8);
            for ( i = 5; i < 8; ++i )
              v45[i] ^= *(_DWORD *)&v44[4 * i + 28];
          }
          else if ( v8 > 1 )
          {
            do
            {
              v45[v20] ^= *(_DWORD *)&v44[4 * v20 + 28];
              ++v20;
            }
            while ( v20 < v8 );
          }
          v22 = 0;
          if ( v8 > 0 )
            break;
LABEL_31:
          if ( v15 >= v32 )
            goto LABEL_32;
        }
        while ( v15 < v32 )
        {
          v23 = v15 / v2;
          v24 = v15 % v2;
          v25 = v45[v22++];
          ++v15;
          v37[8 * v23 + v24] = v25;
          v2 = (int)v31;
          v38[8 * (v42 - v23) + v24] = *(_DWORD *)&v44[4 * v22 + 28];
          if ( v22 >= v8 )
          {
            v19 = v33;
            goto LABEL_31;
          }
        }
LABEL_32:
        v5 = v42;
      }
      v26 = 1;
      if ( v5 > 1 )
      {
        v27 = &v39;
        do
        {
          if ( v2 > 0 )
          {
            v28 = v27;
            for ( j = v2; j != 0; --j )
            {
              v30 = dword_10021810[(unsigned __int8)*(_DWORD *)v28]
                  ^ dword_10020C10[(unsigned __int8)HIBYTE(*(_DWORD *)v28)]
                  ^ dword_10021410[(unsigned __int8)BYTE1(*(_DWORD *)v28)]
                  ^ dword_10021010[(unsigned __int8)BYTE2(*(_DWORD *)v28)];
              v28 += 4;
              *((_DWORD *)v28 - 1) = v30;
            }
            v5 = v42;
            v2 = (int)v31;
          }
          ++v26;
          v27 += 32;
        }
        while ( v26 < v5 );
      }
      v36 = 1;
      sub_100057C0(v52);
      if ( a1 == 3 )
        dword_100271C4(v51, v52, 3, byte_100271E8);
      else
        dword_100271C4(v51, v52, a1, 0);
      sub_10002BD0();
    }
  }
}

// Address: 0x10003C00
int (*CheckSerialNumber())(void)
{
  int (*result)(void); // eax

  result = dword_100271CC;
  if ( dword_100271CC != nullptr )
    return (int (*)(void))dword_100271CC();
  return result;
}

// Address: 0x10003C10
int __usercall sub_10003C10@<eax>(unsigned int a1@<edi>)
{
  int v1; // esi
  int result; // eax
  int v3; // [esp+0h] [ebp-8h]

  v1 = 0;
  sub_10002A80((wchar_t *)L"GetErrorString dwResult - %d", v3);
  if ( a1 > 0x3E7 )
  {
    return 123;
  }
  else if ( a1 == 999 )
  {
    return 122;
  }
  else
  {
    switch ( a1 )
    {
      case 0u:
        return v1;
      case 1u:
        result = 112;
        break;
      case 2u:
        result = 113;
        break;
      case 3u:
        result = 114;
        break;
      case 4u:
        result = 115;
        break;
      case 5u:
        result = 116;
        break;
      case 0x32u:
        result = 118;
        break;
      case 0x33u:
        result = 119;
        break;
      case 0x65u:
        result = 120;
        break;
      case 0x66u:
        result = 117;
        break;
      case 0xDDu:
        result = 121;
        break;
      default:
        return 123;
    }
  }
  return result;
}

// Address: 0x10003DC0
int __cdecl Register(int a1, int a2, LPWSTR lpBuffer, int cchBufferMax)
{
  int v4; // ebx
  unsigned int v6; // eax
  UINT v7; // esi

  v4 = 0;
  if ( a1 == 0 )
  {
    if ( dword_100271D4 == nullptr )
      return v4;
    dword_100271D4(0);
    return 1;
  }
  if ( dword_100271D0 == nullptr || dword_100271CC == nullptr )
  {
    LoadStringW(hInstance, 0x7Cu, lpBuffer, cchBufferMax);
    return 0;
  }
  if ( (unsigned __int16)dword_100271CC(a2, 1) != 266 )
  {
    if ( dword_100271D4 != nullptr )
      dword_100271D4(0);
    LoadStringW(hInstance, 0x7Du, lpBuffer, cchBufferMax);
    return 0;
  }
  v6 = dword_100271D0();
  v7 = sub_10003C10(v6);
  if ( v7 == 0 )
    return 1;
  if ( dword_100271D4 != nullptr )
    dword_100271D4(0);
  LoadStringW(hInstance, v7, lpBuffer, cchBufferMax);
  return 0;
}

// Address: 0x10003EE0
BOOL __cdecl RegisterClient(int a1, LPWSTR lpBuffer, int cchBufferMax)
{
  BOOL result; // eax
  unsigned int v4; // eax
  UINT v5; // eax
  BOOL v6; // esi

  result = dword_100271D8 != nullptr;
  if ( dword_100271D8 != nullptr )
  {
    v4 = dword_100271D8(byte_100271E8, a1);
    v5 = sub_10003C10(v4);
    v6 = v5 == 0;
    if ( v5 != 0 )
      LoadStringW(hInstance, v5, lpBuffer, cchBufferMax);
    return v6;
  }
  return result;
}

// Address: 0x10003F40
BOOL __cdecl UnregisterSerialNumber(WCHAR *lpBuffer, int cchBufferMax)
{
  BOOL v2; // esi
  unsigned int v3; // eax
  UINT v4; // eax
  int v6; // [esp+0h] [ebp-4h]
  int v7; // [esp+0h] [ebp-4h]

  sub_10002A80((wchar_t *)L"UnregisterSerialNumber enter", v6);
  v2 = dword_100271DC != nullptr;
  if ( dword_100271DC != nullptr )
  {
    v3 = dword_100271DC(0, 0);
    v4 = sub_10003C10(v3);
    if ( v4 != 0 )
    {
      LoadStringW(hInstance, v4, lpBuffer, cchBufferMax);
      v2 = false;
    }
  }
  sub_10002A80((wchar_t *)L"UnregisterSerialNumber leave", v7);
  return v2;
}

// Address: 0x10003FB0
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  INITCOMMONCONTROLSEX picce; // [esp+0h] [ebp-8h] BYREF

  if ( fdwReason != 0 )
  {
    if ( fdwReason == 1 )
    {
      hInstance = hinstDLL;
      picce.dwSize = 8;
      picce.dwICC = 2049;
      InitCommonControlsEx(&picce);
      sub_100035D0();
      return true;
    }
  }
  else
  {
    if ( dword_100271C8 != nullptr )
      dword_100271C8();
    if ( hLibModule != nullptr )
      FreeLibrary(hLibModule);
  }
  return true;
}

// Address: 0x10004020
bool __cdecl sub_10004020(char a1)
{
  const unsigned __int16 *v1; // ecx
  const unsigned __int16 *v2; // edi
  const unsigned __int16 *v3; // eax
  const unsigned __int16 *v4; // edx
  __int16 v5; // cx
  int v6; // eax
  wchar_t *v7; // ecx
  WCHAR *v8; // edi
  const wchar_t *v9; // ebx
  void *v10; // esi
  void *v11; // edx
  bool v13; // [esp+17h] [ebp-FDh]
  DWORD ExitCode; // [esp+18h] [ebp-FCh] BYREF
  void *v15; // [esp+1Ch] [ebp-F8h] BYREF
  LPWSTR lpCommandLine; // [esp+28h] [ebp-ECh]
  int v17; // [esp+2Ch] [ebp-E8h]
  int v18; // [esp+30h] [ebp-E4h]
  char v19[4]; // [esp+34h] [ebp-E0h] BYREF
  void *v20; // [esp+38h] [ebp-DCh]
  int v21; // [esp+48h] [ebp-CCh]
  unsigned int v22; // [esp+4Ch] [ebp-C8h]
  char v23[4]; // [esp+50h] [ebp-C4h] BYREF
  void *v24; // [esp+54h] [ebp-C0h]
  int v25; // [esp+64h] [ebp-B0h]
  unsigned int v26; // [esp+68h] [ebp-ACh]
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+6Ch] [ebp-A8h] BYREF
  struct _STARTUPINFOW StartupInfo; // [esp+7Ch] [ebp-98h] BYREF
  void *v29; // [esp+CCh] [ebp-48h] BYREF
  int v30; // [esp+DCh] [ebp-38h]
  unsigned int v31; // [esp+E0h] [ebp-34h]
  void *v32; // [esp+E8h] [ebp-2Ch] BYREF
  unsigned int v33; // [esp+FCh] [ebp-18h]
  int v34; // [esp+110h] [ebp-4h]

  v2 = v1;
  LOWORD(v24) = 0;
  v3 = v1;
  v26 = 7;
  v25 = 0;
  v4 = v1 + 1;
  do
    v5 = *v3++;
  while ( v5 != 0 );
  sub_100045A0(v3 - v4);
  v34 = 0;
  sub_10004A50(v23);
  LOBYTE(v34) = 2;
  if ( v26 >= 8 )
    operator delete(v24);
  v26 = 7;
  v22 = 7;
  LOWORD(v20) = 0;
  v25 = 0;
  LOWORD(v24) = 0;
  v21 = 0;
  sub_100045A0(wcslen(v2));
  LOBYTE(v34) = 3;
  sub_10004A50(v19);
  LOBYTE(v34) = 5;
  if ( v22 >= 8 )
    operator delete(v20);
  LOWORD(v20) = 0;
  v22 = 7;
  v21 = 0;
  sub_100044E0(&v15);
  v6 = v17;
  v7 = lpCommandLine;
  if ( (v17 - (int)lpCommandLine) >> 1 == 0 )
  {
    _invalid_parameter_noinfo();
    v6 = v17;
    v7 = lpCommandLine;
  }
  v8 = v7;
  v9 = L"install";
  if ( a1 == 0 )
    v9 = L"uninstall";
  v10 = v29;
  if ( v31 < 8 )
    v10 = &v29;
  v11 = v32;
  if ( v33 < 8 )
    v11 = &v32;
  swprintf_s(v7, (v6 - (int)v7) >> 1, L"%s %s \"%s\"", v11, v9, v10);
  StartupInfo.cb = 68;
  memset(&StartupInfo.lpReserved, 0, 0x40u);
  if ( CreateProcessW(nullptr, v8, nullptr, nullptr, false, 0, nullptr, nullptr, &StartupInfo, &ProcessInformation) )
  {
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
    v13 = ExitCode != 0;
    if ( lpCommandLine != nullptr )
      operator delete(lpCommandLine);
    lpCommandLine = nullptr;
    v17 = 0;
    v18 = 0;
    operator delete(v15);
    if ( v31 >= 8 )
      operator delete(v29);
    v31 = 7;
    v30 = 0;
    LOWORD(v29) = 0;
    if ( v33 >= 8 )
      operator delete(v32);
    return v13;
  }
  else
  {
    if ( lpCommandLine != nullptr )
      operator delete(lpCommandLine);
    lpCommandLine = nullptr;
    v17 = 0;
    v18 = 0;
    operator delete(v15);
    if ( v31 >= 8 )
      operator delete(v29);
    v31 = 7;
    v30 = 0;
    LOWORD(v29) = 0;
    if ( v33 >= 8 )
      operator delete(v32);
    return false;
  }
}

// Address: 0x100043E0
BOOL __cdecl InstallPcsseye(int a1)
{
  HMODULE ModuleHandleW; // eax
  wchar_t *v3; // eax
  int Filename[130]; // [esp+0h] [ebp-20Ch] BYREF

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( GetProcAddress(ModuleHandleW, "GetProductInfo") != nullptr )
    return true;
  sub_10002A80((wchar_t *)L"InstallPcsseye enter", Filename[0]);
  if ( GetModuleFileNameW(hInstance, (LPWSTR)Filename, 0x104u) == 0 )
    LOWORD(Filename[0]) = 0;
  v3 = wcsrchr((const wchar_t *)Filename, 0x5Cu);
  if ( v3 != nullptr )
    v3[1] = 0;
  return sub_10004020(a1 != 0);
}

// Address: 0x100044E0
_DWORD *__stdcall sub_100044E0(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  sub_10004550();
  return a1;
}

// Address: 0x100045A0
int __userpurge sub_100045A0@<eax>(_BYTE *a1@<eax>, int a2@<esi>, int a3)
{
  unsigned int v4; // edx
  _DWORD *v5; // eax
  unsigned int v6; // ecx
  int v7; // ecx
  unsigned int v9; // ecx
  void **v10; // edi
  void *v11; // eax
  bool v12; // cf

  if ( a1 != nullptr
    && ((v4 = *(_DWORD *)(a2 + 24), v5 = (_DWORD *)(a2 + 4), v4 < 8) ? (v6 = a2 + 4) : (v6 = *v5),
        (unsigned int)a1 >= v6
     && (v4 < 8 ? (v7 = a2 + 4) : (v7 = *v5), v7 + 2 * *(_DWORD *)(a2 + 20) > (unsigned int)a1)) )
  {
    if ( v4 >= 8 )
      v5 = (_DWORD *)*v5;
    return sub_10004650((a1 - (_BYTE *)v5) >> 1, a3);
  }
  else
  {
    if ( (unsigned __int8)sub_10004700() != 0 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = (void **)(a2 + 4);
      if ( v9 < 8 )
        v11 = (void *)(a2 + 4);
      else
        v11 = *v10;
      memcpy_s(v11, 2 * v9, a1, 2 * a3);
      v12 = *(_DWORD *)(a2 + 24) < 8u;
      *(_DWORD *)(a2 + 20) = a3;
      if ( !v12 )
        v10 = (void **)*v10;
      *((_WORD *)v10 + a3) = 0;
    }
    return a2;
  }
}

// Address: 0x10004650
int __userpurge sub_10004650@<eax>(_DWORD *a1@<eax>, int a2@<ecx>, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  _DWORD *v8; // ecx
  void **v9; // ebp
  void *v10; // eax
  bool v11; // cf

  if ( a1[5] < a3 )
    sub_10009D82();
  v6 = a1[5] - a3;
  if ( a4 < v6 )
    v6 = a4;
  if ( (_DWORD *)a2 == a1 )
  {
    sub_10004840();
    sub_10004840();
    return a2;
  }
  else
  {
    if ( (unsigned __int8)sub_10004700() != 0 )
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

// Address: 0x10004700
BOOL __usercall sub_10004700@<eax>(int a1@<eax>, unsigned int a2@<edi>)
{
  unsigned int v3; // eax

  if ( a2 > 0x7FFFFFFE )
    sub_10009D4A();
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 < a2 )
  {
    sub_100048D0(a1, a2, *(_DWORD *)(a1 + 20));
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

// Address: 0x10004760
void *__fastcall sub_10004760(unsigned int a1)
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

// Address: 0x100047C0
void __fastcall __noreturn sub_100047C0(int a1, int a2, int a3, int a4)
{
  _BYTE v4[20]; // [esp+4h] [ebp-50h] BYREF
  int v5; // [esp+18h] [ebp-3Ch]
  int v6; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v6 = 15;
  v5 = 0;
  v4[4] = 0;
  sub_100028B0((int)v4, a2, "vector<T> too long", (char *)0x12);
  pExceptionObject[12] = 0;
  sub_10001050(pExceptionObject, (int)v4);
  pExceptionObject[0] = &std::length_error::`vftable';
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x10004840
_DWORD *__usercall sub_10004840@<eax>(unsigned int a1@<eax>, unsigned int a2@<ebx>, _DWORD *a3@<esi>)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // ebp
  unsigned int v7; // eax
  bool v8; // cf
  _DWORD *v10; // [esp+4h] [ebp-8h]
  _DWORD *v11; // [esp+8h] [ebp-4h]

  if ( a3[5] < a2 )
    sub_10009D82();
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

// Address: 0x100048D0
_WORD *__stdcall sub_100048D0(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  void *v7; // ebx
  int v8; // ecx
  const void *v9; // eax
  _WORD *result; // eax
  int v11; // [esp+0h] [ebp-34h] BYREF
  _DWORD pExceptionObject[3]; // [esp+10h] [ebp-24h] BYREF
  char *v13[5]; // [esp+20h] [ebp-14h] BYREF

  v13[1] = (char *)&v11;
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
  v6 = v3 + 1;
  v13[4] = nullptr;
  if ( v3 == -1 )
  {
    v6 = 0;
  }
  else if ( 0xFFFFFFFF / v6 < 2 )
  {
    v13[0] = nullptr;
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)v13);
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  v7 = operator new(2 * v6);
  v8 = a3;
  if ( a3 != 0 )
  {
    if ( a1[6] < 8u )
      v9 = a1 + 1;
    else
      v9 = (const void *)a1[1];
    memcpy_s(v7, 2 * v3 + 2, v9, 2 * a3);
    v8 = a3;
  }
  if ( a1[6] >= 8u )
  {
    operator delete((void *)a1[1]);
    v8 = a3;
  }
  result = a1 + 1;
  a1[1] = v7;
  a1[6] = v3;
  a1[5] = v8;
  if ( v3 >= 8 )
    result = v7;
  result[v8] = 0;
  return result;
}

// Address: 0x10004A50
int __usercall sub_10004A50@<eax>(const unsigned __int16 *a1@<ebx>, int a2@<esi>, _DWORD *a3)
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
  sub_10004650(a3, (int)v5, 0, 0xFFFFFFFF);
  v9 = 0;
  v3 = (_DWORD *)sub_10004B10(v5, wcslen(a1));
  *(_DWORD *)(a2 + 24) = 7;
  *(_DWORD *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 4) = 0;
  sub_10004650(v3, a2, 0, 0xFFFFFFFF);
  if ( v8 >= 8 )
    operator delete(v6);
  return a2;
}

// Address: 0x10004B10
_DWORD *__userpurge sub_10004B10@<eax>(_BYTE *a1@<eax>, _DWORD *a2@<ecx>, unsigned int a3)
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
    return (_DWORD *)sub_10004BF0(a2, (a1 - (_BYTE *)v6) >> 1);
  }
  else
  {
    v10 = a2[5];
    if ( -1 - v10 <= a3 || v10 + a3 < v10 )
      sub_10009D4A();
    if ( a3 != 0 )
    {
      v11 = a3 + a2[5];
      if ( sub_10004700((int)a2, v11) )
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

// Address: 0x10004BF0
_DWORD *__userpurge sub_10004BF0@<eax>(unsigned int a1@<eax>, _DWORD *a2@<esi>, _DWORD *a3, unsigned int a4)
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
    sub_10009D82();
  if ( a3[5] - a4 < a1 )
    v4 = a3[5] - a4;
  v5 = a2[5];
  if ( -1 - v5 <= v4 || v5 + v4 < v5 )
    sub_10009D4A();
  result = a2;
  if ( v4 != 0 )
  {
    v7 = v4 + a2[5];
    if ( sub_10004700((int)a2, v7) )
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

// Address: 0x10004CB0
int __cdecl IsRunning(LPCWSTR lpFileName)
{
  int v1; // esi
  unsigned int v2; // edi
  HANDLE v3; // eax
  void *v4; // esi
  bool v5; // bl
  void *v7; // [esp-4h] [ebp-444h]
  void *v8; // [esp+Ch] [ebp-434h] BYREF
  void *v9; // [esp+18h] [ebp-428h]
  int v10; // [esp+1Ch] [ebp-424h]
  int v11; // [esp+20h] [ebp-420h]
  unsigned int v12; // [esp+24h] [ebp-41Ch] BYREF
  wchar_t String2[260]; // [esp+28h] [ebp-418h] BYREF
  WCHAR Buffer[262]; // [esp+230h] [ebp-210h] BYREF

  sub_10004E60(&v8);
  v1 = (v10 - (int)v9) >> 2;
  if ( v1 == 0 )
    _invalid_parameter_noinfo();
  if ( EnumProcesses(v9, 4 * v1, &v12) == 0 )
    goto LABEL_14;
  if ( GetFullPathNameW(lpFileName, 0x104u, Buffer, nullptr) == 0 )
  {
    if ( v9 != nullptr )
      operator delete(v9);
    v7 = v8;
LABEL_17:
    v9 = nullptr;
    v10 = 0;
    v11 = 0;
    operator delete(v7);
    return 0;
  }
  v2 = 0;
  if ( (v12 & 0xFFFFFFFC) == 0 )
  {
LABEL_14:
    if ( v9 != nullptr )
      operator delete(v9);
    v7 = v8;
    goto LABEL_17;
  }
  while ( 1 )
  {
    if ( v2 >= (v10 - (int)v9) >> 2 )
      _invalid_parameter_noinfo();
    v3 = OpenProcess(0x410u, false, *((_DWORD *)v9 + v2));
    v4 = v3;
    if ( v3 != nullptr )
    {
      String2[0] = 0;
      GetModuleFileNameExW(v3, 0, String2, 260);
      v5 = _wcsicmp(Buffer, String2) == 0;
      CloseHandle(v4);
      if ( v5 )
        break;
    }
    if ( ++v2 >= v12 >> 2 )
      goto LABEL_14;
  }
  if ( v9 != nullptr )
    operator delete(v9);
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  operator delete(v8);
  return 1;
}

// Address: 0x10004E60
_DWORD *__stdcall sub_10004E60(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  sub_10004EE0();
  return a1;
}

// Address: 0x10004EE0
char *__usercall sub_10004EE0@<eax>(_DWORD *a1@<edi>, _DWORD *a2@<esi>)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // edx
  char *result; // eax

  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  v2 = operator new(0x1000u);
  a2[5] = v2 + 1024;
  a2[3] = v2;
  a2[4] = v2;
  v3 = 1024;
  v4 = v2;
  do
  {
    *v4 = *a1;
    --v3;
    ++v4;
  }
  while ( v3 != 0 );
  result = (char *)(v2 + 1024);
  a2[4] = result;
  return result;
}

// Address: 0x10004F40
_DWORD *__thiscall sub_10004F40(_DWORD *this, char a2)
{
  *this = &CRijndael::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10004F60
int __userpurge sub_10004F60@<eax>(size_t a1@<eax>, int a2@<ecx>, int a3@<esi>, char *a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebp
  int v8; // edx
  char *v9; // ebx
  int v10; // edx
  char *v11; // ebx
  char *v12; // eax
  int v13; // edi
  _DWORD *v14; // ecx
  int v15; // edx
  int v16; // ebx
  char *v17; // eax
  int v18; // ebx
  int v19; // ebx
  char *v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // edx
  _DWORD *v24; // eax
  int v25; // ecx
  _DWORD *v26; // eax
  int i; // ecx
  _DWORD *v28; // eax
  int j; // ecx
  int *v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // ebp
  char *v34; // ebx
  bool v35; // cc
  int result; // eax
  _DWORD *v37; // ecx
  int k; // edx
  int v39; // edi
  int v40; // [esp+0h] [ebp-1Ch]
  int v41; // [esp+4h] [ebp-18h]
  char *v42; // [esp+8h] [ebp-14h]
  int v43; // [esp+Ch] [ebp-10h]
  int v44; // [esp+Ch] [ebp-10h]
  _BYTE pExceptionObject[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( a4 == nullptr )
  {
    a4 = "Empty key";
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&a4);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  if ( a2 != 16 && a2 != 32 )
  {
    a4 = "Incorrect key length";
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&a4);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  if ( a1 != 16 && a1 != 32 )
  {
    a4 = "Incorrect block length";
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&a4);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  *(_DWORD *)(a3 + 972) = a1;
  *(_DWORD *)(a3 + 968) = a2;
  memcpy_0((void *)(a3 + 980), &unk_1001E1B0, a1);
  memcpy_0((void *)(a3 + 1012), &unk_1001E1B0, *(_DWORD *)(a3 + 972));
  v4 = *(_DWORD *)(a3 + 968);
  if ( v4 == 16 )
  {
    v6 = *(_DWORD *)(a3 + 972);
    if ( v6 == 16 )
      v5 = 10;
    else
      v5 = 2 * (v6 != 24) + 12;
  }
  else
  {
    if ( v4 != 24 )
    {
      *(_DWORD *)(a3 + 976) = 14;
      goto LABEL_17;
    }
    v5 = 2 * (*(_DWORD *)(a3 + 972) == 32) + 12;
  }
  *(_DWORD *)(a3 + 976) = v5;
LABEL_17:
  v7 = *(_DWORD *)(a3 + 972) / 4;
  v8 = 0;
  v40 = v7;
  if ( *(int *)(a3 + 976) >= 0 )
  {
    v9 = (char *)(a3 + 8);
    do
    {
      if ( v7 > 0 )
        memset(v9, 0, 4 * v7);
      ++v8;
      v9 += 32;
    }
    while ( v8 <= *(_DWORD *)(a3 + 976) );
  }
  v10 = 0;
  if ( *(int *)(a3 + 976) >= 0 )
  {
    v11 = (char *)(a3 + 488);
    do
    {
      if ( v7 > 0 )
        memset(v11, 0, 4 * v7);
      ++v10;
      v11 += 32;
    }
    while ( v10 <= *(_DWORD *)(a3 + 976) );
  }
  v41 = v7 * (*(_DWORD *)(a3 + 976) + 1);
  v12 = a4;
  v13 = *(_DWORD *)(a3 + 968) / 4;
  v14 = (_DWORD *)(a3 + 1044);
  if ( v13 > 0 )
  {
    v15 = *(_DWORD *)(a3 + 968) / 4;
    do
    {
      *v14 = (unsigned __int8)*v12 << 24;
      v16 = (unsigned __int8)v12[1];
      v17 = v12 + 1;
      *v14 |= v16 << 16;
      v18 = (unsigned __int8)*++v17;
      *v14 |= v18 << 8;
      *v14 |= (unsigned __int8)v17[1];
      v12 = v17 + 2;
      ++v14;
      --v15;
    }
    while ( v15 != 0 );
  }
  v19 = 0;
  a4 = nullptr;
  if ( v13 > 0 )
  {
    v20 = (char *)(a3 + 1044);
    a4 = (char *)(a3 + 1044);
    do
    {
      if ( v19 >= v41 )
        break;
      v21 = v19 / v7;
      v22 = v19 % v7;
      ++v19;
      *(_DWORD *)(a3 + 4 * (v22 + 8 * v21) + 8) = *(_DWORD *)v20;
      v7 = v40;
      v20 = a4 + 4;
      *(_DWORD *)(a3 + 4 * (v22 + 8 * (*(_DWORD *)(a3 + 976) - v21)) + 488) = *(_DWORD *)a4;
      a4 = v20;
    }
    while ( v19 < v13 );
    a4 = (char *)v19;
  }
  if ( v19 < v41 )
  {
    v42 = (char *)&unk_10021C10;
    while ( 1 )
    {
      v23 = *v42++ ^ byte_1001EA10[(unsigned __int8)BYTE2(*(_DWORD *)(a3 + 4 * v13 + 1040))];
      *(_DWORD *)(a3 + 1044) ^= (unsigned __int8)byte_1001EA10[HIBYTE(*(_DWORD *)(a3 + 4 * v13 + 1040))]
                              ^ (((unsigned __int8)byte_1001EA10[(unsigned __int8)*(_DWORD *)(a3 + 4 * v13 + 1040)]
                                ^ (((unsigned __int8)byte_1001EA10[BYTE1(*(_DWORD *)(a3 + 4 * v13 + 1040))] ^ (v23 << 8)) << 8)) << 8);
      if ( v13 == 8 )
      {
        v26 = (_DWORD *)(a3 + 1048);
        for ( i = 3; i != 0; --i )
        {
          *v26 ^= *(v26 - 1);
          ++v26;
        }
        *(_DWORD *)(a3 + 1060) ^= (unsigned __int8)byte_1001EA10[(unsigned __int8)*(_DWORD *)(a3 + 1056)]
                                ^ (((unsigned __int8)byte_1001EA10[BYTE1(*(_DWORD *)(a3 + 1056))]
                                  ^ (((unsigned __int8)byte_1001EA10[(unsigned __int8)BYTE2(*(_DWORD *)(a3 + 1056))]
                                    ^ (byte_1001EA10[HIBYTE(*(_DWORD *)(a3 + 1056))] << 8)) << 8)) << 8);
        v28 = (_DWORD *)(a3 + 1064);
        for ( j = 3; j != 0; --j )
        {
          *v28 ^= *(v28 - 1);
          ++v28;
        }
      }
      else if ( v13 > 1 )
      {
        v24 = (_DWORD *)(a3 + 1048);
        v25 = v13 - 1;
        do
        {
          *v24 ^= *(v24 - 1);
          ++v24;
          --v25;
        }
        while ( v25 != 0 );
      }
      v43 = 0;
      if ( v13 > 0 )
        break;
LABEL_50:
      if ( v19 >= v41 )
        goto LABEL_51;
    }
    v30 = (int *)(a3 + 1044);
    while ( v19 < v41 )
    {
      v31 = v19 / v7;
      v32 = v19 % v7;
      v33 = *v30++;
      *(_DWORD *)(a3 + 4 * (v32 + 8 * v31) + 8) = v33;
      v7 = v40;
      v34 = a4;
      *(_DWORD *)(a3 + 4 * (v32 + 8 * (*(_DWORD *)(a3 + 976) - v31)) + 488) = *(v30 - 1);
      v19 = (int)(v34 + 1);
      v35 = ++v43 < v13;
      a4 = (char *)v19;
      if ( !v35 )
        goto LABEL_50;
    }
  }
LABEL_51:
  result = 1;
  v35 = *(_DWORD *)(a3 + 976) <= 1;
  a4 = (char *)1;
  if ( !v35 )
  {
    v37 = (_DWORD *)(a3 + 520);
    v44 = a3 + 520;
    do
    {
      if ( v7 > 0 )
      {
        for ( k = v7; k != 0; --k )
        {
          v39 = dword_10021810[(unsigned __int8)*v37]
              ^ dword_10021410[(unsigned __int8)BYTE1(*v37)]
              ^ dword_10021010[(unsigned __int8)BYTE2(*v37)]
              ^ dword_10020C10[(unsigned __int8)HIBYTE(*v37)];
          *v37++ = v39;
        }
      }
      result = (int)(a4 + 1);
      v37 = (_DWORD *)(v44 + 32);
      v35 = (int)++a4 < *(_DWORD *)(a3 + 976);
      v44 += 32;
    }
    while ( v35 );
  }
  *(_BYTE *)(a3 + 4) = 1;
  return result;
}

// Address: 0x100053D0
int __userpurge sub_100053D0@<eax>(unsigned __int8 *a1@<eax>, int a2, _BYTE *a3)
{
  _BYTE *v3; // edx
  int v4; // ecx
  unsigned __int8 *v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // edi
  int v12; // esi
  int v13; // edi
  int v14; // esi
  int v15; // edi
  int v16; // ecx
  int v17; // ebp
  int v18; // esi
  int v19; // edi
  int v20; // esi
  int v21; // edi
  unsigned int v22; // ebp
  int v23; // ebx
  int v24; // eax
  int v25; // ebp
  _DWORD *v26; // ebx
  int v27; // eax
  int v28; // edx
  bool v29; // zf
  char v30; // ebx^2
  int result; // eax
  _DWORD *v32; // [esp+4h] [ebp-1Ch]
  int v33; // [esp+8h] [ebp-18h]
  int v34; // [esp+Ch] [ebp-14h]
  _BYTE pExceptionObject[12]; // [esp+14h] [ebp-Ch] BYREF
  int v36; // [esp+24h] [ebp+4h]
  int v37; // [esp+24h] [ebp+4h]
  int v38; // [esp+24h] [ebp+4h]
  int *v39; // [esp+28h] [ebp+8h]

  v3 = a3;
  if ( *(_BYTE *)(a2 + 4) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&off_10026078);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  v4 = *a1;
  v5 = a1 + 1;
  v6 = *v5;
  v5 += 2;
  v7 = (*(v5 - 1) << 8) | (v6 << 16) | (v4 << 24);
  v8 = *v5;
  v5 += 2;
  v9 = v8 | v7;
  v10 = *(v5 - 1);
  v11 = *v5++ << 16;
  v12 = v11 | (v10 << 24);
  v13 = *v5++;
  v14 = (v13 << 8) | v12;
  v15 = *v5;
  v16 = *(_DWORD *)(a2 + 8) ^ v9;
  v17 = (++v5)[1];
  v18 = v15 | v14;
  v19 = *v5;
  v20 = *(_DWORD *)(a2 + 12) ^ v18;
  v5 += 2;
  v21 = *(_DWORD *)(a2 + 16) ^ (v5[1] | (*v5 << 8) | (v17 << 16) | (v19 << 24));
  v22 = _byteswap_ulong(*(_DWORD *)(v5 + 2));
  v23 = a2;
  v24 = *(_DWORD *)(a2 + 976);
  v25 = *(_DWORD *)(a2 + 20) ^ v22;
  if ( v24 > 1 )
  {
    v26 = (_DWORD *)(a2 + 48);
    v32 = (_DWORD *)(a2 + 48);
    v33 = v24 - 1;
    do
    {
      v27 = *(v26 - 1)
          ^ dword_1001F810[(unsigned __int8)v16]
          ^ dword_1001EC10[HIBYTE(v20)]
          ^ dword_1001F010[BYTE2(v21)]
          ^ dword_1001F410[BYTE1(v25)];
      v34 = *v32
          ^ dword_1001F810[(unsigned __int8)v20]
          ^ dword_1001F410[BYTE1(v16)]
          ^ dword_1001EC10[HIBYTE(v21)]
          ^ dword_1001F010[BYTE2(v25)];
      v28 = v32[1]
          ^ dword_1001F810[(unsigned __int8)v21]
          ^ dword_1001F010[BYTE2(v16)]
          ^ dword_1001F410[BYTE1(v20)]
          ^ dword_1001EC10[HIBYTE(v25)];
      v26 = v32 + 8;
      v29 = v33-- == 1;
      v16 = *(v32 - 2)
          ^ dword_1001F810[(unsigned __int8)v25]
          ^ dword_1001EC10[HIBYTE(v16)]
          ^ dword_1001F010[BYTE2(v20)]
          ^ dword_1001F410[BYTE1(v21)];
      v21 = v34;
      v20 = v27;
      v25 = v28;
      v32 += 8;
    }
    while ( !v29 );
    v3 = a3;
    v23 = a2;
    v24 = *(_DWORD *)(a2 + 976);
  }
  v39 = (int *)(32 * v24 + v23 + 8);
  v36 = *v39;
  v30 = BYTE2(*v39);
  *v3 = byte_1001EA10[HIBYTE(v16)] ^ HIBYTE(*v39);
  v3[1] = byte_1001EA10[BYTE2(v20)] ^ v30;
  v3[2] = byte_1001EA10[BYTE1(v21)] ^ BYTE1(v36);
  v3[3] = v36 ^ byte_1001EA10[(unsigned __int8)v25];
  v37 = v39[1];
  v3[4] = byte_1001EA10[HIBYTE(v20)] ^ HIBYTE(v37);
  v3[5] = byte_1001EA10[BYTE2(v21)] ^ BYTE2(v37);
  v3[6] = byte_1001EA10[BYTE1(v25)] ^ BYTE1(v37);
  v3[7] = v37 ^ byte_1001EA10[(unsigned __int8)v16];
  v38 = v39[2];
  v3[8] = byte_1001EA10[HIBYTE(v21)] ^ HIBYTE(v38);
  v3[9] = byte_1001EA10[BYTE2(v25)] ^ BYTE2(v38);
  v3[10] = byte_1001EA10[BYTE1(v16)] ^ BYTE1(v38);
  v3[11] = v38 ^ byte_1001EA10[(unsigned __int8)v20];
  result = v39[3];
  v3[12] = byte_1001EA10[HIBYTE(v25)] ^ HIBYTE(result);
  v3[13] = byte_1001EA10[BYTE2(v16)] ^ BYTE2(result);
  v3[14] = byte_1001EA10[BYTE1(v20)] ^ BYTE1(result);
  v3[15] = result ^ byte_1001EA10[(unsigned __int8)v21];
  return result;
}

// Address: 0x100057C0
int __userpurge sub_100057C0@<eax>(unsigned __int8 *a1@<ecx>, int a2@<esi>, _BYTE *a3)
{
  int v3; // eax
  int result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // ebp
  _DWORD *v10; // eax
  int v11; // ebx
  unsigned __int8 *v12; // ecx
  int v13; // ebx
  int v14; // ebp
  int v15; // ebx
  int v16; // eax
  int v17; // ebp
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // zf
  _BYTE *v22; // ecx
  int v23; // ebx
  int v24; // edx
  bool v25; // cc
  int *v26; // [esp+0h] [ebp-34h]
  _DWORD *v27; // [esp+0h] [ebp-34h]
  int v28; // [esp+0h] [ebp-34h]
  int i; // [esp+4h] [ebp-30h]
  _DWORD *v30; // [esp+4h] [ebp-30h]
  int v31; // [esp+8h] [ebp-2Ch]
  int v32; // [esp+Ch] [ebp-28h]
  int v33; // [esp+10h] [ebp-24h]
  int v34; // [esp+14h] [ebp-20h]
  int v35; // [esp+18h] [ebp-1Ch]
  int v36; // [esp+1Ch] [ebp-18h]
  int v37; // [esp+20h] [ebp-14h]
  int v38; // [esp+20h] [ebp-14h]
  int v39; // [esp+24h] [ebp-10h]
  int v40; // [esp+24h] [ebp-10h]
  _BYTE pExceptionObject[12]; // [esp+28h] [ebp-Ch] BYREF
  int v42; // [esp+38h] [ebp+4h]

  if ( *(_BYTE *)(a2 + 4) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&off_10026078);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  v3 = *(_DWORD *)(a2 + 972);
  if ( v3 == 16 )
    return sub_100053D0(a1, a2, a3);
  v5 = v3 / 4;
  v6 = 0;
  if ( v5 != 4 )
  {
    LOBYTE(v6) = v5 != 6;
    ++v6;
  }
  v7 = 8 * v6;
  v8 = dword_10021C38[v7];
  v9 = dword_10021C40[v7];
  v35 = dword_10021C48[v7];
  v34 = v8;
  v32 = v9;
  v10 = (_DWORD *)(a2 + 1108);
  if ( v5 > 0 )
  {
    v26 = (int *)(a2 + 8);
    for ( i = v5; i != 0; --i )
    {
      *v10 = *a1 << 24;
      v11 = a1[1];
      v12 = a1 + 1;
      *v10 |= v11 << 16;
      v13 = *++v12;
      *v10 |= v13 << 8;
      *v10 |= v12[1];
      v14 = *v26++;
      *v10 ^= v14;
      a1 = v12 + 2;
      ++v10;
    }
    v9 = v32;
  }
  result = 1;
  v33 = 1;
  if ( *(int *)(a2 + 976) > 1 )
  {
    v15 = a2 + 1076;
    v27 = (_DWORD *)(a2 + 40);
    do
    {
      if ( v5 > 0 )
      {
        v30 = v27;
        v16 = v9 - v8;
        v17 = v35 - v8;
        v18 = v8;
        v36 = v16;
        v37 = v35 - v8;
        v31 = v5;
        while ( 1 )
        {
          v15 += 4;
          v39 = (unsigned __int8)BYTE1(*(_DWORD *)(a2 + 4 * ((v18 + v16) % v5) + 1108));
          v19 = (v18 + v17) % v5;
          v20 = v18++;
          v21 = v31-- == 1;
          *(_DWORD *)(v15 - 4) = *v30++
                               ^ dword_1001EC10[*(unsigned __int8 *)(v15 + 31)]
                               ^ dword_1001F010[(unsigned __int8)*(_WORD *)(a2 + 4 * (v20 % v5) + 1110)]
                               ^ dword_1001F810[(unsigned __int8)*(_DWORD *)(a2 + 4 * v19 + 1108)]
                               ^ dword_1001F410[v39];
          if ( v21 )
            break;
          v16 = v36;
          v17 = v37;
        }
        v9 = v32;
      }
      v15 = a2 + 1076;
      memcpy_0((void *)(a2 + 1108), (const void *)(a2 + 1076), 4 * v5);
      v27 += 8;
      v8 = v34;
      result = ++v33;
    }
    while ( v33 < *(_DWORD *)(a2 + 976) );
  }
  v28 = 0;
  if ( v5 > 0 )
  {
    v22 = a3;
    v42 = a2 + 1108;
    v40 = v8 - v9;
    v38 = v35 - v9;
    do
    {
      v23 = *(_DWORD *)(a2 + 4 * (v28 + 8 * *(_DWORD *)(a2 + 976)) + 8);
      *v22 = byte_1001EA10[*(unsigned __int8 *)(v42 + 3)] ^ HIBYTE(v23);
      v42 += 4;
      v22 += 4;
      *(v22 - 3) = byte_1001EA10[(unsigned __int8)*(_WORD *)(a2 + 4 * ((v9 + v40) % v5) + 1110)] ^ BYTE2(v23);
      *(v22 - 2) = byte_1001EA10[BYTE1(*(_DWORD *)(a2 + 4 * (v9 % v5) + 1108))] ^ BYTE1(v23);
      v24 = (v38 + v9++) % v5;
      result = v28 + 1;
      v25 = v28 + 1 < v5;
      *(v22 - 1) = v23 ^ byte_1001EA10[(unsigned __int8)*(_DWORD *)(a2 + 4 * v24 + 1108)];
      ++v28;
    }
    while ( v25 );
  }
  return result;
}

// Address: 0x10005AB0
int __stdcall sub_10005AB0(int a1)
{
  return 0;
}

// Address: 0x10005AC0
int __cdecl SheriffDefaultCfg(int a1, int a2, int a3)
{
  _DWORD *v3; // edi
  char *v4; // ecx
  char *v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v8; // edi
  bool v9; // cf
  int v10; // ebx
  char *v11; // ecx
  char *v12; // eax
  int v13; // ebx
  char *v14; // ecx
  char *v15; // eax
  unsigned int v16; // eax
  int v17; // ebx
  char *v18; // ecx
  char *v19; // eax
  unsigned __int8 v20; // al
  int v21; // ebx
  char *v22; // edi
  unsigned int v24; // [esp+10h] [ebp-1F8h]
  void *v25; // [esp+14h] [ebp-1F4h] BYREF
  void *v26; // [esp+20h] [ebp-1E8h]
  char *v27; // [esp+24h] [ebp-1E4h]
  int v28; // [esp+28h] [ebp-1E0h]
  _DWORD *v29; // [esp+2Ch] [ebp-1DCh]
  void **v30; // [esp+30h] [ebp-1D8h] BYREF
  _BYTE v31[464]; // [esp+38h] [ebp-1D0h] BYREF

  v3 = (_DWORD *)sub_100080F0();
  v29 = v3;
  v30 = &SheriffCtrl::Config::`vftable';
  memset(v31, 0, sizeof(v31));
  if ( *v3 != 0 )
    (*(void (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*v3 + 16))(*v3, v31);
  sub_100074D0(&v25);
  sub_100082B0(&v30);
  v4 = v27;
  v5 = (char *)v26;
  v6 = 0;
  v7 = (v27 - (_BYTE *)v26) / 12;
  v24 = 0;
  if ( v7 != 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( a2 != 0 )
      {
        if ( v6 >= v7 )
        {
          _invalid_parameter_noinfo();
          v5 = (char *)v26;
          v4 = v27;
        }
        if ( *(_BYTE *)(16 * *(_DWORD *)&v5[v8 + 8] + *(_DWORD *)&v5[v8 + 4] + 52) == 67 || a1 != 0 )
          goto LABEL_15;
        v9 = v6 < (v4 - v5) / 12;
      }
      else
      {
        if ( v6 >= v7 )
        {
          _invalid_parameter_noinfo();
          v5 = (char *)v26;
          v4 = v27;
        }
        if ( *(_BYTE *)(16 * *(_DWORD *)&v5[v8 + 8] + *(_DWORD *)&v5[v8 + 4] + 52) != 67 || a1 != 0 )
        {
LABEL_15:
          if ( v6 >= (v4 - v5) / 12 )
          {
            _invalid_parameter_noinfo();
            v5 = (char *)v26;
          }
          v13 = *(_DWORD *)&v5[v8 + 4];
          v14 = &v5[v8 + 8];
          v15 = &v5[v8 + 4];
          if ( (*(_BYTE *)(16 * *(_DWORD *)v14 + v13 + 60) & 1) == 0 )
          {
            *(_DWORD *)(v13 + 8) |= 4u;
            *(_DWORD *)(16 * *(_DWORD *)v14 + *(_DWORD *)v15 + 56) |= 1u;
            *(_DWORD *)(16 * *(_DWORD *)v14 + *(_DWORD *)v15 + 60) ^= 1u;
            v5 = (char *)v26;
          }
          v16 = (v27 - v5) / 12;
          if ( a3 != 0 )
          {
            if ( v24 >= v16 )
            {
              _invalid_parameter_noinfo();
              v5 = (char *)v26;
            }
            v17 = *(_DWORD *)&v5[v8 + 4];
            v18 = &v5[v8 + 8];
            v19 = &v5[v8 + 4];
            if ( (*(_DWORD *)(16 * *(_DWORD *)v18 + v17 + 60) & 2) != 0 )
              goto LABEL_34;
          }
          else
          {
            if ( v24 >= v16 )
            {
              _invalid_parameter_noinfo();
              v5 = (char *)v26;
            }
            v17 = *(_DWORD *)&v5[v8 + 4];
            v18 = &v5[v8 + 8];
            v19 = &v5[v8 + 4];
            if ( (*(_DWORD *)(16 * *(_DWORD *)v18 + v17 + 60) & 2) == 0 )
              goto LABEL_34;
          }
          *(_DWORD *)(v17 + 8) |= 4u;
          *(_DWORD *)(16 * *(_DWORD *)v18 + *(_DWORD *)v19 + 56) |= 2u;
          *(_DWORD *)(16 * *(_DWORD *)v18 + *(_DWORD *)v19 + 60) ^= 2u;
          goto LABEL_33;
        }
        v9 = v6 < (v4 - v5) / 12;
      }
      if ( !v9 )
      {
        _invalid_parameter_noinfo();
        v5 = (char *)v26;
      }
      v10 = *(_DWORD *)&v5[v8 + 4];
      v11 = &v5[v8 + 8];
      v12 = &v5[v8 + 4];
      if ( (*(_BYTE *)(16 * *(_DWORD *)v11 + v10 + 60) & 1) != 0 )
      {
        *(_DWORD *)(v10 + 8) |= 4u;
        *(_DWORD *)(16 * *(_DWORD *)v11 + *(_DWORD *)v12 + 56) |= 1u;
        *(_DWORD *)(16 * *(_DWORD *)v11 + *(_DWORD *)v12 + 60) ^= 1u;
LABEL_33:
        v5 = (char *)v26;
      }
LABEL_34:
      v4 = v27;
      v6 = v24 + 1;
      v7 = (v27 - v5) / 12;
      v8 += 12;
      v24 = v6;
      if ( v6 >= v7 )
      {
        v3 = v29;
        break;
      }
    }
  }
  if ( *v3 != 0 )
  {
    v20 = (*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*v3 + 20))(*v3, v31);
    v5 = (char *)v26;
    v4 = v27;
  }
  else
  {
    v20 = 0;
  }
  v21 = v20;
  if ( v5 != nullptr )
  {
    v22 = v4;
    if ( v5 != v4 )
    {
      do
      {
        (**(void (__thiscall ***)(void *, _DWORD))v5)(v5, 0);
        v5 += 12;
      }
      while ( v5 != v22 );
      v5 = (char *)v26;
    }
    operator delete(v5);
  }
  v26 = nullptr;
  v27 = nullptr;
  v28 = 0;
  operator delete(v25);
  return v21;
}

// Address: 0x10005DF0
int __cdecl InitSheriff(int a1, int a2, int a3, int a4)
{
  _DWORD v5[118]; // [esp+8h] [ebp-A10h] BYREF
  _BYTE v6[2104]; // [esp+1E0h] [ebp-838h] BYREF

  memset(v5, 0, 0x1D0u);
  v5[116] = &SheriffCtrl::Status::`vftable';
  memset(v6, 0, sizeof(v6));
  if ( (unsigned __int8)sub_10007F00(&SheriffCtrl::Config::`vftable') != 0
    && dword_10026098 != 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(dword_10026098 + 8) + 8))(
         *(_DWORD *)(dword_10026098 + 8),
         v5) != 0
    && dword_10026098 != 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(dword_10026098 + 8) + 4))(
         *(_DWORD *)(dword_10026098 + 8),
         v6) != 0 )
  {
    return SheriffDefaultCfg(a2, a3, a4);
  }
  else
  {
    return 0;
  }
}

// Address: 0x10005EA0
BOOL IsSheriffInstalled()
{
  _DWORD v1[526]; // [esp+8h] [ebp-838h] BYREF

  memset(v1, 0, sizeof(v1));
  return dword_10026098 != 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(dword_10026098 + 8) + 4))(
           *(_DWORD *)(dword_10026098 + 8),
           v1) != 0
      && ((v1[0] & 0x8000000) != 0 || (v1[0] & 4) != 0 || (v1[0] & 0x4000000) != 0 || (v1[0] & 0x2000000) != 0);
}

// Address: 0x10005F20
BOOL IsSheriffProtect()
{
  _BYTE v1[2104]; // [esp+8h] [ebp-838h] BYREF

  memset(v1, 0, sizeof(v1));
  return dword_10026098 != 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(dword_10026098 + 8) + 4))(
           *(_DWORD *)(dword_10026098 + 8),
           v1) != 0
      && (v1[0] & 4) != 0
      && (v1[0] & 0x30) == 0;
}

// Address: 0x10005F90
int __cdecl ChangeSupervisor(int a1, wchar_t *Destination, rsize_t SizeInWords, int a4)
{
  unsigned int v4; // esi
  int *v5; // edi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const wchar_t *v14; // eax
  void *v16; // [esp+10h] [ebp-A30h] BYREF
  unsigned int v17; // [esp+1Ch] [ebp-A24h]
  unsigned int v18; // [esp+20h] [ebp-A20h]
  void **v19; // [esp+28h] [ebp-A18h] BYREF
  _DWORD v20[118]; // [esp+30h] [ebp-A10h] BYREF
  _DWORD v21[526]; // [esp+208h] [ebp-838h] BYREF

  if ( a4 != 0 )
  {
    v19 = &SheriffCtrl::Config::`vftable';
    memset(v20, 0, 0x1D0u);
    v20[116] = &SheriffCtrl::Status::`vftable';
    memset(v21, 0, sizeof(v21));
    if ( dword_10026098 == 0 )
      goto LABEL_43;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(dword_10026098 + 8) + 8))(
           *(_DWORD *)(dword_10026098 + 8),
           v20) != 0 )
    {
      if ( dword_10026098 == 0 )
        goto LABEL_43;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(dword_10026098 + 8) + 4))(
             *(_DWORD *)(dword_10026098 + 8),
             v21) != 0 )
      {
        sub_100074D0(&v16);
        sub_100082B0(&v19);
        v4 = v17;
        if ( v17 > v18 )
          _invalid_parameter_noinfo();
        v5 = (int *)v16;
        while ( 1 )
        {
          v6 = v18;
          if ( v17 > v18 )
            _invalid_parameter_noinfo();
          if ( v5 == nullptr || v5 != v16 )
            _invalid_parameter_noinfo();
          if ( v4 == v6 )
            break;
          if ( v5 != nullptr )
          {
            v7 = *v5;
          }
          else
          {
            _invalid_parameter_noinfo();
            v7 = 0;
          }
          if ( v4 >= *(_DWORD *)(v7 + 16) )
            _invalid_parameter_noinfo();
          if ( (*(_BYTE *)(16 * *(_DWORD *)(v4 + 8) + *(_DWORD *)(v4 + 4) + 60) & 1) != 0 )
          {
            if ( v5 != nullptr )
            {
              v8 = *v5;
            }
            else
            {
              _invalid_parameter_noinfo();
              v8 = 0;
            }
            if ( v4 >= *(_DWORD *)(v8 + 16) )
              _invalid_parameter_noinfo();
            *(_DWORD *)(*(_DWORD *)(v4 + 4) + 8) |= 4u;
            *(_DWORD *)(16 * *(_DWORD *)(v4 + 8) + *(_DWORD *)(v4 + 4) + 56) |= 0x200u;
            *(_DWORD *)(16 * *(_DWORD *)(v4 + 8) + *(_DWORD *)(v4 + 4) + 60) |= 0x200u;
          }
          if ( v5 != nullptr )
          {
            v9 = *v5;
          }
          else
          {
            _invalid_parameter_noinfo();
            v9 = 0;
          }
          if ( v4 >= *(_DWORD *)(v9 + 16) )
            _invalid_parameter_noinfo();
          v4 += 12;
        }
        v10 = dword_10026098;
        if ( dword_10026098 != 0 )
        {
          v11 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_10026098 + 12) + 12))(
                  *(_DWORD *)(dword_10026098 + 12),
                  a1);
          v10 = dword_10026098;
        }
        else
        {
          v11 = 0;
        }
        v20[0] = v11;
        v20[1] = v21[4];
        if ( v10 != 0 )
          (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v10 + 8) + 12))(*(_DWORD *)(v10 + 8), v20);
        sub_100076C0();
        operator delete(v16);
      }
    }
  }
  if ( dword_10026098 == 0 )
    goto LABEL_43;
  v12 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_10026098 + 12) + 12))(
          *(_DWORD *)(dword_10026098 + 12),
          a1);
  if ( dword_10026098 == 0 )
    goto LABEL_43;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_10026098 + 8) + 28))(
         *(_DWORD *)(dword_10026098 + 8),
         v12,
         1) == 0 )
  {
    if ( dword_10026098 != 0 )
    {
      v13 = (***(int (__thiscall ****)(_DWORD))(dword_10026098 + 8))(*(_DWORD *)(dword_10026098 + 8));
      goto LABEL_45;
    }
LABEL_43:
    v13 = 0x40000000;
LABEL_45:
    v14 = (const wchar_t *)sub_10008050(v13);
    wcscpy_s(Destination, SizeInWords, v14);
    return 0;
  }
  return 1;
}

// Address: 0x10006200
int __cdecl InstallSheriff(
        wchar_t *Destination,
        rsize_t SizeInWords,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int ArgList)
{
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const wchar_t *v14; // eax
  _DWORD v16[116]; // [esp+18h] [ebp-1D0h] BYREF

  v10 = (_DWORD *)sub_100080F0();
  memset(v16, 0, sizeof(v16));
  if ( *v10 != 0 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*v10 + 16))(*v10, v16);
  v11 = v16[4];
  if ( a3 != 0 )
  {
    if ( (v16[4] & 0x4000) != 0 )
      goto LABEL_8;
  }
  else if ( (v16[4] & 0x4000) == 0 )
  {
    goto LABEL_8;
  }
  v16[2] |= 1u;
  v16[3] |= 0x4000u;
  v11 = v16[4] ^ 0x4000;
  v16[4] ^= 0x4000u;
LABEL_8:
  if ( a4 != 0 )
  {
    if ( (v11 & 0x8000) != 0 )
      goto LABEL_13;
  }
  else if ( (v11 & 0x8000) == 0 )
  {
    goto LABEL_13;
  }
  v16[2] |= 1u;
  v16[3] |= 0x8000u;
  v11 ^= 0x8000u;
  v16[4] = v11;
LABEL_13:
  if ( a5 != 0 )
  {
    if ( (v11 & 0x10000) != 0 )
      goto LABEL_18;
  }
  else if ( (v11 & 0x10000) == 0 )
  {
    goto LABEL_18;
  }
  v16[2] |= 1u;
  v16[3] |= 0x10000u;
  v11 ^= 0x10000u;
  v16[4] = v11;
LABEL_18:
  if ( a6 != 0 )
  {
    if ( (v11 & 0x20000) != 0 )
      goto LABEL_23;
  }
  else if ( (v11 & 0x20000) == 0 )
  {
    goto LABEL_23;
  }
  v16[2] |= 1u;
  v16[3] |= 0x20000u;
  v16[4] = v11 ^ 0x20000;
LABEL_23:
  if ( a9 != 0 )
  {
    v12 = dword_10026098;
    if ( dword_10026098 != 0 )
      v12 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_10026098 + 12) + 8))(
              *(_DWORD *)(dword_10026098 + 12),
              a9);
    v16[0] = v12;
  }
  if ( *v10 != 0 )
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*v10 + 20))(*v10, v16);
  sub_10002A80((wchar_t *)L"Trial expire day : %d", ArgList);
  if ( *v10 == 0 )
    goto LABEL_32;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, int, char *, int))(*(_DWORD *)*v10 + 8))(
         *v10,
         a7,
         a8,
         byte_100271E8,
         ArgList) == 0 )
  {
    if ( *v10 != 0 )
    {
      v13 = (**(int (__thiscall ***)(_DWORD))*v10)(*v10);
      goto LABEL_34;
    }
LABEL_32:
    v13 = 0x80000000;
LABEL_34:
    v14 = (const wchar_t *)sub_10008050(v13);
    wcscpy_s(Destination, SizeInWords, v14);
    return 0;
  }
  return 1;
}

// Address: 0x100063B0
int __cdecl UninstallSheriff(int a1, wchar_t *Destination, rsize_t SizeInWords)
{
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  const wchar_t *v8; // eax
  int v10; // [esp+0h] [ebp-4h]
  int v11; // [esp+0h] [ebp-4h]

  sub_10002A80((wchar_t *)L"UninstallSheriff enter", v10);
  v3 = (_DWORD *)sub_100080F0();
  v4 = dword_10026098;
  if ( dword_10026098 != 0 )
    v4 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_10026098 + 12) + 12))(
           *(_DWORD *)(dword_10026098 + 12),
           a1);
  if ( *v3 == 0 )
    goto LABEL_6;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v3 + 12))(*v3, v4) != 0 )
  {
    sub_10002A80((wchar_t *)L"UninstallSheriff leave", v11);
    return 1;
  }
  if ( *v3 != 0 )
    v5 = (**(int (__thiscall ***)(_DWORD))*v3)(*v3);
  else
LABEL_6:
    v5 = 0x80000000;
  v6 = sub_10008050(v5);
  sub_10002A80((wchar_t *)L"UninstallSheriff err: %s", v6);
  if ( *v3 != 0 )
    v7 = (**(int (__thiscall ***)(_DWORD))*v3)(*v3);
  else
    v7 = 0x80000000;
  v8 = (const wchar_t *)sub_10008050(v7);
  wcscpy_s(Destination, SizeInWords, v8);
  return 0;
}

// Address: 0x10006460
int __cdecl CheckPassword(int a1)
{
  int v1; // eax
  HANDLE FileW; // esi
  unsigned int i; // eax
  int v5; // eax
  int v6; // esi
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-85Ch] BYREF
  void **v8; // [esp+10h] [ebp-858h]
  _BYTE v9[2108]; // [esp+18h] [ebp-850h] BYREF
  char Buffer; // [esp+854h] [ebp-14h] BYREF
  __int64 v11; // [esp+855h] [ebp-13h]
  int v12; // [esp+85Dh] [ebp-Bh]

  v8 = &SheriffCtrl::Status::`vftable';
  memset(v9, 0, 0x838u);
  if ( dword_10026098 != 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(dword_10026098 + 8) + 4))(
         *(_DWORD *)(dword_10026098 + 8),
         v9) != 0
    && (v9[0] & 4) != 0 )
  {
    if ( dword_10026098 == 0 )
      return 0;
    v1 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_10026098 + 12) + 12))(
           *(_DWORD *)(dword_10026098 + 12),
           a1);
    if ( dword_10026098 == 0 )
      return 0;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_10026098 + 8) + 16))(
           *(_DWORD *)(dword_10026098 + 8),
           v1) != 0 )
      return 1;
    if ( dword_10026098 != 0
      && (***(int (__thiscall ****)(_DWORD))(dword_10026098 + 8))(*(_DWORD *)(dword_10026098 + 8)) == -2147483641 )
    {
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    FileW = CreateFileW(L"\\\\.\\SheriffVDisk0\\partition0\\Info\\pw.dat", 0x80000000, 3u, nullptr, 3u, 0, nullptr);
    if ( FileW == (HANDLE)-1 )
      return 1;
    Buffer = 0;
    v11 = 0;
    v12 = 0;
    ReadFile(FileW, &Buffer, 0xCu, &NumberOfBytesRead, nullptr);
    CloseHandle(FileW);
    for ( i = 0; i < 0xC; ++i )
      *(&Buffer + i) ^= 0x7Fu;
    v5 = dword_10026098;
    if ( dword_10026098 != 0 )
    {
      v6 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_10026098 + 12) + 12))(
             *(_DWORD *)(dword_10026098 + 12),
             a1);
      v5 = dword_10026098;
      if ( dword_10026098 != 0 )
        v5 = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(dword_10026098 + 12) + 12))(
               *(_DWORD *)(dword_10026098 + 12),
               &Buffer);
    }
    else
    {
      v6 = 0;
    }
    return v6 == v5;
  }
}

// Address: 0x10006620
int __thiscall sub_10006620(int this, unsigned int a2, int hDC, LPARAM lParam)
{
  int v5; // eax
  int v6; // edx
  HBRUSH StockObject; // eax
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  if ( a2 > 0x111 )
  {
    if ( a2 == 312 )
      return (int)GetStockObject(0);
    if ( a2 != 522 )
      return sub_10001340((HWND *)this, a2, hDC, lParam);
    PostMessageW(*(HWND *)(this + 8), 0x20Au, hDC, lParam);
    return 1;
  }
  if ( a2 == 273 )
  {
    if ( HIWORD(hDC) == 0 )
    {
      if ( IsDlgButtonChecked(*(HWND *)(this + 12), 1004) != 0 )
      {
        sub_100081E0(0);
        return 1;
      }
      sub_100081E0(1);
      if ( IsDlgButtonChecked(*(HWND *)(this + 12), 1002) != 0 )
        sub_10008230(1);
      if ( IsDlgButtonChecked(*(HWND *)(this + 12), 1003) != 0 )
      {
        sub_10008230(0);
        return 1;
      }
    }
    return 1;
  }
  if ( a2 == 20 )
  {
    GetClientRect(*(HWND *)(this + 12), &Rect);
    StockObject = (HBRUSH)GetStockObject(0);
    FillRect((HDC)hDC, &Rect, StockObject);
    SetWindowLongW(*(HWND *)(this + 12), 0, 1);
    return 1;
  }
  if ( a2 != 272 )
    return sub_10001340((HWND *)this, a2, hDC, lParam);
  v5 = *(_DWORD *)(this + 20);
  v6 = *(_DWORD *)(v5 + 4);
  if ( (*(_BYTE *)(16 * *(_DWORD *)(v5 + 8) + v6 + 60) & 1) != 0 )
  {
    if ( (*(_DWORD *)(16 * *(_DWORD *)(v5 + 8) + v6 + 60) & 2) != 0 )
      CheckDlgButton(*(HWND *)(this + 12), 1002, 1u);
    else
      CheckDlgButton(*(HWND *)(this + 12), 1003, 1u);
    return 1;
  }
  else
  {
    CheckDlgButton(*(HWND *)(this + 12), 1004, 1u);
    return 1;
  }
}

// Address: 0x100067F0
int __stdcall sub_100067F0(int a1)
{
  int v1; // ebx
  int *v2; // eax
  int v3; // eax

  v1 = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = &ProtectDriveCtrl::`vftable';
  sub_10007580(a1 + 44);
  *(_DWORD *)(a1 + 80) = &SheriffCtrl::Config::`vftable';
  memset((void *)(a1 + 88), 0, 0x1D0u);
  sub_100074D0(a1 + 552);
  *(_DWORD *)(a1 + 576) = -1;
  *(_DWORD *)(a1 + 580) = 0;
  *(_WORD *)(a1 + 584) = 0;
  *(_DWORD *)(a1 + 588) = 0;
  v2 = (int *)sub_100080F0();
  *(_DWORD *)(a1 + 72) = v2;
  v3 = *v2;
  if ( v3 != 0 )
  {
    if ( a1 != -80 )
      v1 = a1 + 88;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 16))(v3, v1);
  }
  sub_100082B0(a1 + 80);
  return a1;
}

// Address: 0x100068D0
void *__thiscall sub_100068D0(void *this, char a2)
{
  sub_100068F0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100068F0
int __stdcall sub_100068F0(int a1)
{
  int result; // eax

  sub_100076C0();
  operator delete(*(void **)(a1 + 552));
  *(_DWORD *)(a1 + 80) = &SheriffCtrl::Config::`vftable';
  result = sub_100075F0(a1 + 44);
  *(_DWORD *)a1 = &DDialogBox::`vftable';
  return result;
}

// Address: 0x10006970
int __usercall sub_10006970@<eax>(const WCHAR *a1@<eax>)
{
  int v1; // edi
  HANDLE FileW; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  size_t v5; // edi
  DWORD BytesReturned; // [esp+8h] [ebp-4h] BYREF

  v1 = -1;
  FileW = CreateFileW(a1, 0x80000000, 3u, nullptr, 3u, 0, nullptr);
  if ( FileW != (HANDLE)-1 )
  {
    v3 = malloc(0x110u);
    v4 = v3;
    if ( v3 != nullptr )
    {
      if ( !DeviceIoControl(FileW, 0x560000u, nullptr, 0, v3, 0x110u, &BytesReturned, nullptr) )
      {
        v5 = 272;
        do
        {
          if ( GetLastError() != 234 )
            break;
          free(v4);
          v5 += 120;
          v4 = malloc(v5);
        }
        while ( !DeviceIoControl(FileW, 0x560000u, nullptr, 0, v4, v5, &BytesReturned, nullptr) );
      }
      v1 = v4[2];
      free(v4);
    }
    CloseHandle(FileW);
  }
  return v1;
}

// Address: 0x10006A30
int __thiscall sub_10006A30(char *this, unsigned int a2, int a3, int a4)
{
  WPARAM v5; // ecx
  HWND v6; // edx
  int v8; // ecx
  HWND Window; // eax
  LRESULT v10; // eax
  HWND v11; // edx
  unsigned int v12; // edi
  int v13; // ebx
  _DWORD *v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // edi
  LRESULT v18; // edi
  volatile signed __int32 *top; // edi
  int v20; // eax
  int v21; // edi
  LRESULT (__stdcall *v22)(HWND, UINT, WPARAM, LPARAM); // edi
  signed int v23; // ebx
  HWND v24; // edi
  BOOL v25; // eax
  HWND v26; // [esp-10h] [ebp-1DCh]
  HWND v27; // [esp-10h] [ebp-1DCh]
  HWND v28; // [esp-10h] [ebp-1DCh]
  HWND v29; // [esp-10h] [ebp-1DCh]
  HWND v30; // [esp-10h] [ebp-1DCh]
  HWND v31; // [esp-10h] [ebp-1DCh]
  HWND v32; // [esp-10h] [ebp-1DCh]
  WPARAM v33; // [esp-8h] [ebp-1D4h]
  unsigned int v34; // [esp+14h] [ebp-1B8h]
  bool v35; // [esp+14h] [ebp-1B8h]
  int v36; // [esp+18h] [ebp-1B4h]
  LRESULT v37; // [esp+18h] [ebp-1B4h]
  struct tagRECT lParam; // [esp+1Ch] [ebp-1B0h] BYREF
  LPARAM v39[5]; // [esp+2Ch] [ebp-1A0h] BYREF
  LPARAM v40; // [esp+40h] [ebp-18Ch] BYREF
  int v41; // [esp+44h] [ebp-188h]
  int v42; // [esp+4Ch] [ebp-180h]
  LPARAM v43; // [esp+50h] [ebp-17Ch] BYREF
  int v44; // [esp+54h] [ebp-178h]
  LONG left; // [esp+58h] [ebp-174h]
  WCHAR *v46; // [esp+5Ch] [ebp-170h]
  int v47; // [esp+60h] [ebp-16Ch]
  LPARAM v48; // [esp+7Ch] [ebp-150h] BYREF
  unsigned int v49; // [esp+80h] [ebp-14Ch]
  int v50; // [esp+84h] [ebp-148h]
  WCHAR *v51; // [esp+90h] [ebp-13Ch]
  unsigned int v52; // [esp+94h] [ebp-138h]
  LONG v53; // [esp+9Ch] [ebp-130h]
  struct tagRECT Rect; // [esp+B8h] [ebp-114h] BYREF
  struct tagRECT v55; // [esp+C8h] [ebp-104h] BYREF
  LPARAM v56[2]; // [esp+D8h] [ebp-F4h] BYREF
  int v57; // [esp+E0h] [ebp-ECh]
  WCHAR *v58; // [esp+ECh] [ebp-E0h]
  int v59; // [esp+F0h] [ebp-DCh]
  int v60; // [esp+F8h] [ebp-D4h]
  WCHAR Buffer[16]; // [esp+114h] [ebp-B8h] BYREF
  WCHAR chText[66]; // [esp+134h] [ebp-98h] BYREF
  int v63; // [esp+1C8h] [ebp-4h]

  if ( a2 <= 0x2C )
  {
    if ( a2 == 44 )
    {
      if ( a4 != 0 )
      {
        *(_DWORD *)(a4 + 16) = 19;
        SetWindowLongW(*((HWND *)this + 3), 0, 1);
        return 0;
      }
      return 0;
    }
    if ( a2 != 2 )
    {
      if ( a2 == 43 )
      {
        if ( a4 != 0 )
        {
          v5 = *(_DWORD *)(a4 + 8);
          v6 = *((HWND *)this + 9);
          lParam.top = 0;
          lParam.left = 0;
          SendMessageW(v6, 0x1038u, v5, (LPARAM)&lParam);
          lParam.right = lParam.left + *((_DWORD *)this + 10);
          v33 = *(_DWORD *)(a4 + 8);
          v58 = chText;
          v26 = *((HWND *)this + 9);
          v57 = 0;
          v59 = 64;
          SendMessageW(v26, 0x1073u, v33, (LPARAM)v56);
          DrawTextW(*(HDC *)(a4 + 24), chText, wcslen(chText), &lParam, 0x25u);
LABEL_7:
          SetWindowLongW(*((HWND *)this + 3), 0, 1);
          return 1;
        }
        return 0;
      }
      goto LABEL_69;
    }
    v8 = **((_DWORD **)this + 18);
    if ( v8 != 0 )
    {
      if ( this == (char *)-80 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 20))(v8, 0);
      else
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 20))(v8, this + 88);
      return 0;
    }
    return 0;
  }
  if ( a2 != 78 )
  {
    if ( a2 == 272 )
    {
      MoveWindow(
        *((HWND *)this + 3),
        *((_DWORD *)this + 5),
        *((_DWORD *)this + 6),
        *((_DWORD *)this + 7) - *((_DWORD *)this + 5),
        *((_DWORD *)this + 8) - *((_DWORD *)this + 6),
        false);
      Window = CreateWindowExW(
                 0,
                 L"SysListView32",
                 &String,
                 0x50008405u,
                 0,
                 0,
                 *((_DWORD *)this + 7) - *((_DWORD *)this + 5),
                 *((_DWORD *)this + 8) - *((_DWORD *)this + 6),
                 *((HWND *)this + 3),
                 nullptr,
                 nullptr,
                 nullptr);
      *((_DWORD *)this + 9) = Window;
      v10 = SendMessageW(Window, 0x1037u, 0, 0);
      SendMessageW(*((HWND *)this + 9), 0x1036u, 0, v10 | 0x21);
      GetClientRect(*((HWND *)this + 9), &Rect);
      *(double *)&lParam.left = (double)(Rect.right - Rect.left - 16);
      LoadStringW(hInstance, 0x7Eu, &::Buffer, 20);
      LoadStringW(hInstance, 0x7Fu, &word_10027168, 40);
      v43 = 7;
      v44 = 2;
      v46 = &::Buffer;
      v47 = 4;
      v11 = *((HWND *)this + 9);
      *(_QWORD *)v39 = (__int64)(*(double *)&lParam.left * 0.25);
      left = v39[0];
      *((_DWORD *)this + 10) = v39[0];
      SendMessageW(v11, 0x1061u, 1u, (LPARAM)&v43);
      v27 = *((HWND *)this + 9);
      v43 = 7;
      v44 = 2;
      v46 = &word_10027168;
      v47 = 8;
      *(_QWORD *)&lParam.left = (__int64)(*(double *)&lParam.left * 0.75);
      left = lParam.left;
      SendMessageW(v27, 0x1061u, 2u, (LPARAM)&v43);
      sub_10007650();
      v12 = 0;
      v34 = 0;
      if ( (*((_DWORD *)this + 142) - *((_DWORD *)this + 141)) / 12 != 0 )
      {
        v13 = 0;
        v36 = 0;
        do
        {
          if ( *((_DWORD *)this + 145) == 0 || *((_DWORD *)this + 144) == -1 )
            goto LABEL_29;
          if ( v12 >= (*((_DWORD *)this + 142) - *((_DWORD *)this + 141)) / 12 )
            _invalid_parameter_noinfo();
          wsprintfW(
            Buffer,
            L"\\\\.\\%C:",
            *(char *)(16 * *(_DWORD *)(*((_DWORD *)this + 141) + v13 + 8)
                    + *(_DWORD *)(v13 + *((_DWORD *)this + 141) + 4)
                    + 52));
          if ( *((_DWORD *)this + 144) == sub_10006970(Buffer) )
          {
LABEL_29:
            if ( *((_DWORD *)this + 147) == 0 || *((_WORD *)this + 292) == 0 )
              goto LABEL_30;
            if ( v12 >= (*((_DWORD *)this + 142) - *((_DWORD *)this + 141)) / 12 )
              _invalid_parameter_noinfo();
            if ( *((_WORD *)this + 292) == *(char *)(16 * *(_DWORD *)(*((_DWORD *)this + 141) + v13 + 8)
                                                   + *(_DWORD *)(*((_DWORD *)this + 141) + v13 + 4)
                                                   + 52) )
            {
LABEL_30:
              if ( v12 >= (*((_DWORD *)this + 142) - *((_DWORD *)this + 141)) / 12 )
                _invalid_parameter_noinfo();
              swprintf_s(
                Buffer,
                0x10u,
                L"%c:",
                *(char *)(16 * *(_DWORD *)(*((_DWORD *)this + 141) + v13 + 8)
                        + *(_DWORD *)(v13 + *((_DWORD *)this + 141) + 4)
                        + 52));
              v14 = operator new(0x18u);
              if ( v14 != nullptr )
              {
                if ( v12 >= (*((_DWORD *)this + 142) - *((_DWORD *)this + 141)) / 12 )
                  _invalid_parameter_noinfo();
                v15 = v36 + *((_DWORD *)this + 141);
                v14[3] = 0;
                v14[1] = 0;
                v14[2] = 0;
                v14[4] = 0;
                *v14 = &ProtectDriveCtrl::ProtMode::`vftable';
                v14[5] = v15;
              }
              else
              {
                v14 = nullptr;
              }
              lParam.left = 0;
              lParam.top = 0;
              sub_10007950(&lParam, v14);
              v63 = 0;
              (*(void (__thiscall **)(LONG, HMODULE, int, _DWORD))(*(_DWORD *)lParam.left + 4))(
                lParam.left,
                hInstance,
                102,
                *((_DWORD *)this + 9));
              v16 = *((_DWORD *)this + 16);
              v17 = sub_100077B0(v16, *(_DWORD *)(v16 + 4), &lParam);
              sub_10007850(this + 44);
              *(_DWORD *)(v16 + 4) = v17;
              **(_DWORD **)(v17 + 4) = v17;
              v48 = 5;
              v49 = v34;
              v50 = 0;
              v51 = Buffer;
              v52 = wcslen(Buffer);
              v28 = *((HWND *)this + 9);
              v53 = lParam.left;
              v18 = SendMessageW(v28, 0x104Du, 0, (LPARAM)&v48);
              if ( v18 == -1 )
              {
                v63 = -1;
                top = (volatile signed __int32 *)lParam.top;
                if ( lParam.top != 0
                  && _InterlockedExchangeAdd((volatile signed __int32 *)(lParam.top + 8), 0xFFFFFFFF) == 0 )
                {
                  (**(void (__thiscall ***)(volatile signed __int32 *))top)(top);
                  if ( _InterlockedExchangeAdd(top + 3, 0xFFFFFFFF) == 0 )
                    (*(void (__thiscall **)(volatile signed __int32 *))(*top + 4))(top);
                }
              }
              else
              {
                v49 = v34;
                v29 = *((HWND *)this + 9);
                v48 = 4;
                v50 = 1;
                v53 = lParam.left;
                SendMessageW(v29, 0x104Du, 0, (LPARAM)&v48);
                v30 = *((HWND *)this + 9);
                v39[1] = 1;
                v39[0] = 0;
                SendMessageW(v30, 0x1038u, v18, (LPARAM)v39);
                v63 = -1;
                sub_100084E0();
              }
              v12 = v34;
            }
          }
          ++v12;
          v13 = v36 + 12;
          v34 = v12;
          v36 += 12;
        }
        while ( v12 < (*((_DWORD *)this + 142) - *((_DWORD *)this + 141)) / 12 );
      }
      ShowWindow(*((HWND *)this + 3), 5);
      if ( *((_DWORD *)this + 2) == 0 )
        (*(void (__thiscall **)(char *))(*(_DWORD *)this + 16))(this);
      return 1;
    }
LABEL_69:
    if ( a2 == 16 )
    {
      if ( *((_DWORD *)this + 4) != 0 )
        EndDialog(*((HWND *)this + 3), 0);
      else
        DestroyWindow(*((HWND *)this + 3));
      return 1;
    }
    return 0;
  }
  v20 = *(_DWORD *)(a4 + 8);
  if ( v20 == -320 )
    goto LABEL_7;
  if ( v20 == -100 )
  {
    if ( (*(_BYTE *)(a4 + 28) & 8) != 0 )
      goto LABEL_7;
    return 0;
  }
  if ( v20 != -12 )
    return 0;
  v21 = *(_DWORD *)(a4 + 12);
  if ( v21 != 2 )
  {
    if ( v21 == 1 )
    {
      SetWindowLongW(*((HWND *)this + 3), 0, 16);
      return 1;
    }
    return 0;
  }
  v22 = SendMessageW;
  v37 = SendMessageW(*((HWND *)this + 9), 0x1027u, 0, 0);
  if ( v37 == -1 )
    return 0;
  v39[0] = SendMessageW(*((HWND *)this + 9), 0x1028u, 0, 0);
  v23 = 0;
  lParam.left = SendMessageW(*((HWND *)this + 9), 0x1004u, 0, 0);
  if ( lParam.left <= 0 )
    return 0;
  while ( 1 )
  {
    v31 = *((HWND *)this + 9);
    v56[0] = 4;
    v56[1] = v23;
    v57 = 1;
    if ( v22(v31, 0x104Bu, 0, (LPARAM)v56) != 0 && v60 != 0 )
    {
      v24 = *(HWND *)(v60 + 12);
      v25 = IsWindowVisible(v24);
      v32 = *((HWND *)this + 9);
      v35 = v25;
      v41 = 1;
      v40 = 0;
      if ( SendMessageW(v32, 0x1038u, v23, (LPARAM)&v40) != 0 )
      {
        if ( v23 < v37 || v23 >= v37 + v39[0] )
        {
          if ( v35 )
            ShowWindow(v24, 0);
        }
        else
        {
          GetWindowRect(v24, &v55);
          SetWindowPos(v24, nullptr, v40 + 3, (v41 + v42) / 2 - (v55.bottom - v55.top) / 2, 0, 0, 0x45u);
        }
      }
    }
    if ( ++v23 >= lParam.left )
      break;
    v22 = SendMessageW;
  }
  return 0;
}

// Address: 0x10007310
int __cdecl CreateProtectDriveCtrl(HWND a1, HWND hWnd, int a3, int a4)
{
  void *v5; // eax
  int v6; // eax
  int v7; // ebx
  struct tagRECT Rect; // [esp+Ch] [ebp-234h] BYREF
  WCHAR v9[10]; // [esp+1Ch] [ebp-224h] BYREF
  WCHAR Buffer[262]; // [esp+30h] [ebp-210h] BYREF

  if ( dword_1002726C != 0 )
    return 0;
  v5 = operator new(0x250u);
  if ( v5 != nullptr )
    v6 = sub_100067F0((int)v5);
  else
    v6 = 0;
  sub_10007A20(v6);
  GetSystemDirectoryW(Buffer, 0x104u);
  *(_DWORD *)(dword_1002726C + 580) = a3;
  if ( a3 != 0 )
  {
    wsprintfW(v9, L"\\\\.\\%C:", Buffer[0]);
    v7 = dword_1002726C;
    *(_DWORD *)(v7 + 576) = sub_10006970(v9);
  }
  *(_DWORD *)(dword_1002726C + 588) = a4;
  if ( a4 != 0 )
    *(_WORD *)(dword_1002726C + 584) = Buffer[0];
  GetWindowRect(hWnd, &Rect);
  ScreenToClient(a1, (LPPOINT)&Rect);
  ScreenToClient(a1, (LPPOINT)&Rect.right);
  *(struct tagRECT *)(dword_1002726C + 20) = Rect;
  (*(void (__thiscall **)(int, HMODULE, int, HWND))(*(_DWORD *)dword_1002726C + 4))(dword_1002726C, hInstance, 101, a1);
  if ( dword_1002726C == 0 )
    return 0;
  else
    return *(_DWORD *)(dword_1002726C + 12);
}

// Address: 0x10007470
int ReleaseProtectDriveCtrl()
{
  int result; // eax
  volatile signed __int32 *v1; // esi

  result = dword_1002726C;
  if ( dword_1002726C != 0 )
  {
    result = DestroyWindow(*(HWND *)(dword_1002726C + 12));
    v1 = (volatile signed __int32 *)dword_10027270;
    if ( dword_10027270 != 0 )
    {
      result = dword_10027270 + 8;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(dword_10027270 + 8), 0xFFFFFFFF) == 0 )
      {
        result = (**(int (__thiscall ***)(volatile signed __int32 *))v1)(v1);
        if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
          result = (*(int (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
      }
    }
    dword_10027270 = 0;
    dword_1002726C = 0;
  }
  return result;
}

// Address: 0x100074D0
_DWORD *__stdcall sub_100074D0(_DWORD *a1)
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

// Address: 0x10007530
void __stdcall sub_10007530(void **a1)
{
  sub_100076C0();
  operator delete(*a1);
}

// Address: 0x10007580
_DWORD *__stdcall sub_10007580(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  a1[5] = sub_10007710();
  a1[6] = 0;
  return a1;
}

// Address: 0x100075F0
void __stdcall sub_100075F0(void **a1)
{
  void *v1; // [esp-8h] [ebp-1Ch]

  sub_10007650();
  operator delete(a1[5]);
  v1 = *a1;
  a1[5] = nullptr;
  operator delete(v1);
}

// Address: 0x10007650
void __usercall sub_10007650(int a1@<ebx>)
{
  _DWORD **v1; // eax
  _DWORD *v2; // edi
  volatile signed __int32 *v3; // esi
  _DWORD *v4; // ebp

  v1 = *(_DWORD ***)(a1 + 20);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 24) = 0;
  if ( v2 != *(_DWORD **)(a1 + 20) )
  {
    do
    {
      v3 = (volatile signed __int32 *)v2[3];
      v4 = (_DWORD *)*v2;
      if ( v3 != nullptr && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
      }
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 20) );
  }
}

// Address: 0x100076C0
void __usercall sub_100076C0(int a1@<ebx>)
{
  void (__thiscall ***v1)(_DWORD, _DWORD); // esi
  void (__thiscall ***i)(_DWORD, _DWORD); // edi

  v1 = *(void (__thiscall ****)(_DWORD, _DWORD))(a1 + 12);
  if ( v1 != nullptr )
  {
    for ( i = *(void (__thiscall ****)(_DWORD, _DWORD))(a1 + 16); v1 != i; v1 += 3 )
      (**v1)(v1, 0);
    operator delete(*(void **)(a1 + 12));
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
}

// Address: 0x10007710
_DWORD *sub_10007710()
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result != nullptr )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}

// Address: 0x10007730
int __usercall sub_10007730@<eax>(int result@<eax>, int (__thiscall ***a2)(_DWORD, _DWORD)@<edi>)
{
  int (__thiscall ***i)(_DWORD, _DWORD); // esi

  for ( i = (int (__thiscall ***)(_DWORD, _DWORD))result; i != a2; i += 3 )
    result = (**i)(i, 0);
  return result;
}

// Address: 0x10007750
void *__fastcall sub_10007750(unsigned int a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 != 0 )
  {
    if ( 0xFFFFFFFF / a1 < 0xC )
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
  return operator new(12 * a1);
}

// Address: 0x100077B0
_DWORD *__stdcall sub_100077B0(int a1, int a2, int a3)
{
  _DWORD *v3; // edi
  int v5; // [esp+0h] [ebp-24h] BYREF
  void *v6; // [esp+10h] [ebp-14h]
  int *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v7 = &v5;
  v3 = operator new(0x10u);
  v6 = v3;
  v8 = 0;
  if ( v3 != nullptr )
    *v3 = a1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  LOBYTE(v8) = 1;
  if ( v3 != (_DWORD *)-8 )
    sub_100078F0();
  return v3;
}

// Address: 0x10007850
int __thiscall sub_10007850(_DWORD *this)
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
    sub_100028B0((int)v3, 0, "list<T> too long", (char *)0x10);
    pExceptionObject[12] = 0;
    sub_10001050(pExceptionObject, (int)v3);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = v1 + 1;
  *(this + 6) = result;
  return result;
}

// Address: 0x100078F0
_DWORD *__usercall sub_100078F0@<eax>(int *a1@<eax>, _DWORD *a2@<esi>)
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

// Address: 0x10007950
_DWORD *__stdcall sub_10007950(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<ProtectDriveCtrl::ProtMode>::`vftable';
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

// Address: 0x10007A20
void *__stdcall sub_10007A20(int a1)
{
  int v1; // edi
  void *result; // eax
  volatile signed __int32 *v3; // esi
  _DWORD _0[9]; // [esp+0h] [ebp-20h] BYREF

  _0[4] = _0;
  v1 = 0;
  _0[7] = 0;
  result = operator new(0x10u);
  if ( result != nullptr )
  {
    *((_DWORD *)result + 2) = 0;
    *((_DWORD *)result + 1) = a1;
    *((_DWORD *)result + 3) = 1;
    *(_DWORD *)result = &std::tr1::_Ref_count<ProtectDriveCtrl>::`vftable';
    v1 = (int)result;
    result = (void *)_InterlockedExchangeAdd((volatile signed __int32 *)result + 2, 1u);
  }
  v3 = (volatile signed __int32 *)dword_10027270;
  if ( dword_10027270 != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(dword_10027270 + 8), 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    result = (void *)(v3 + 3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      result = (void *)(*(int (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  dword_10027270 = v1;
  dword_1002726C = a1;
  return result;
}

// Address: 0x10007AF0
int __thiscall sub_10007AF0(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(this + 1);
  if ( v1 != 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 36))(v1, 1);
  return result;
}

// Address: 0x10007B10
int __thiscall sub_10007B10(void *this)
{
  int result; // eax

  if ( this != nullptr )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, 1);
  return result;
}

// Address: 0x10007B20
int __stdcall sub_10007B20(int a1, int a2)
{
  int v2; // esi
  wchar_t Buffer[1026]; // [esp+8h] [ebp-80Ch] BYREF

  swprintf_s(Buffer, 0x400u, &word_10021EC8, a1, a2);
  v2 = sub_10008380(&a1);
  return sub_100045A0(Buffer, v2, wcslen(Buffer));
}

// Address: 0x10007BB0
void **sub_10007BB0()
{
  sub_10008600();
  sub_10007B20(0, (int)&unk_10021EE8);
  sub_10007B20(0x80000000, (int)&unk_10021EFC);
  sub_10007B20(0x40000000, (int)&unk_10021F24);
  sub_10007B20(-2147483647, (int)&unk_10021F4C);
  sub_10007B20(-2147483646, (int)&unk_10021F6C);
  sub_10007B20(-2147483645, (int)&unk_10021F90);
  sub_10007B20(-2147483644, (int)&unk_10021FB0);
  sub_10007B20(-2147483643, (int)&unk_10021FCC);
  sub_10007B20(-2147483642, (int)&unk_10021FF0);
  sub_10007B20(-2147483641, (int)&unk_10022018);
  sub_10007B20(-2147483640, (int)&unk_10021FCC);
  sub_10007B20(-2147483639, (int)&unk_10022070);
  sub_10007B20(-2147483638, (int)&unk_1002208C);
  sub_10007B20(-2147483637, (int)&unk_100220AC);
  sub_10007B20(-2147483636, (int)&unk_100220C8);
  sub_10007B20(-2147483635, (int)&unk_100220E8);
  sub_10007B20(-2147483634, (int)&unk_1002210C);
  sub_10007B20(-2147483633, (int)&unk_1002213C);
  sub_10007B20(-2147483632, (int)&unk_10022178);
  sub_10007B20(-2147483631, (int)&unk_10021FCC);
  sub_10007B20(-2147483630, (int)&unk_100221A8);
  sub_10007B20(-2147483629, (int)&unk_100221D0);
  sub_10007B20(268435457, (int)&unk_100221FC);
  sub_10007B20(268435458, (int)&unk_10022228);
  sub_10007B20(268435459, (int)&unk_10022258);
  sub_10007B20(268435460, (int)&unk_10022274);
  sub_10007B20(268435461, (int)&unk_10022274);
  sub_10007B20(268435462, (int)aMbrMasterBootR);
  sub_10007B20(268435463, (int)aMbrMasterBootR_0);
  sub_10007B20(268435464, (int)&unk_10022334);
  sub_10007B20(268435465, (int)&unk_10022358);
  sub_10007B20(268435466, (int)&unk_10022384);
  sub_10007B20(268435467, (int)&unk_100223A4);
  return &dword_10027274;
}

// Address: 0x10007DE0
void sub_10007DE0()
{
  sub_10008830();
  operator delete(dword_10027274);
}

// Address: 0x10007E50
void __thiscall sub_10007E50(_DWORD *this)
{
  HMODULE v2; // eax
  FARPROC SheriffDelete; // eax
  volatile signed __int32 *v4; // esi

  *this = &SheriffCtrl::`vftable';
  if ( *(this + 1) != 0 )
  {
    v2 = (HMODULE)*(this + 5);
    if ( v2 != nullptr )
    {
      SheriffDelete = GetProcAddress(v2, "SheriffDelete");
      if ( SheriffDelete != nullptr )
      {
        ((void (__stdcall *)(_DWORD))SheriffDelete)(*(this + 1));
        *(this + 1) = 0;
      }
    }
  }
  v4 = (volatile signed __int32 *)*(this + 3);
  if ( v4 != nullptr && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
  }
}

// Address: 0x10007F00
bool __usercall sub_10007F00@<al>(const WCHAR *a1@<eax>)
{
  HMODULE v1; // ebp
  HMODULE LibraryW; // eax
  int v5; // eax
  WCHAR *v6; // ecx
  wchar_t *v7; // esi
  wchar_t *v8; // eax
  int (*SheriffCreate)(void); // eax
  void *v10; // [esp+10h] [ebp-1Ch] BYREF
  LPWSTR lpFilename; // [esp+1Ch] [ebp-10h]
  int v12; // [esp+20h] [ebp-Ch]
  int v13; // [esp+24h] [ebp-8h]

  v1 = hInstance;
  if ( dword_10026098 != 0 )
    return false;
  LibraryW = dword_100260A8;
  if ( dword_100260A8 != nullptr )
  {
    FreeLibrary(dword_100260A8);
    LibraryW = nullptr;
    dword_100260A8 = nullptr;
  }
  if ( a1 != nullptr )
  {
    LibraryW = LoadLibraryW(a1);
    dword_100260A8 = LibraryW;
  }
  if ( LibraryW != nullptr )
    goto LABEL_17;
  sub_100044E0(&v10);
  v5 = v12;
  v6 = lpFilename;
  if ( (v12 - (int)lpFilename) >> 1 == 0 )
  {
    _invalid_parameter_noinfo();
    v5 = v12;
    v6 = lpFilename;
  }
  v7 = v6;
  if ( GetModuleFileNameW(v1, v6, (v5 - (int)v6) >> 1) == 0 )
    *v7 = 0;
  v8 = wcsrchr(v7, 0x5Cu);
  if ( v8 != nullptr )
    v8[1] = 0;
  wcscat_s(v7, (v12 - (int)lpFilename) >> 1, L"sheriff.dll");
  dword_100260A8 = LoadLibraryW(v7);
  if ( lpFilename != nullptr )
    operator delete(lpFilename);
  lpFilename = nullptr;
  v12 = 0;
  v13 = 0;
  operator delete(v10);
  LibraryW = dword_100260A8;
  if ( dword_100260A8 != nullptr )
  {
LABEL_17:
    SheriffCreate = GetProcAddress(LibraryW, "SheriffCreate");
    if ( SheriffCreate != nullptr )
      dword_10026098 = SheriffCreate();
    if ( dword_10026098 == 0 )
    {
      FreeLibrary(dword_100260A8);
      dword_100260A8 = nullptr;
    }
  }
  return dword_10026098 != 0;
}

// Address: 0x10008050
int __stdcall sub_10008050(int a1)
{
  int v1; // eax

  if ( (dword_1002729C & 1) == 0 )
  {
    dword_1002729C |= 1u;
    sub_10007BB0();
    atexit(sub_1001B220);
  }
  v1 = sub_10008380(&a1);
  if ( *(_DWORD *)(v1 + 24) < 8u )
    return v1 + 4;
  else
    return *(_DWORD *)(v1 + 4);
}

// Address: 0x100080F0
int __cdecl sub_100080F0()
{
  int result; // eax
  _DWORD *v1; // esi
  int v2; // ecx

  result = dword_1002609C;
  if ( dword_1002609C == 0 )
  {
    v1 = operator new(4u);
    if ( v1 != nullptr )
    {
      if ( dword_10026098 != 0 )
        v2 = *(_DWORD *)(dword_10026098 + 4);
      else
        v2 = 0;
      *v1 = v2;
      if ( v2 != 0 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
    }
    else
    {
      v1 = nullptr;
    }
    sub_100098E0((int)&dword_1002609C, v1);
    return dword_1002609C;
  }
  return result;
}

// Address: 0x10008190
_DWORD *__thiscall sub_10008190(_DWORD *this, char a2)
{
  *this = &SheriffCtrl::Status::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100081B0
_DWORD *__thiscall sub_100081B0(_DWORD *this, char a2)
{
  *this = &SheriffCtrl::DriveConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100081D0
void __thiscall sub_100081D0(_DWORD *this)
{
  *this = &SheriffCtrl::DriveConfig::`vftable';
}

// Address: 0x100081E0
int __userpurge sub_100081E0@<eax>(int result@<eax>, char a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // eax

  v2 = *(_DWORD *)(result + 4);
  if ( (*(_BYTE *)(16 * *(_DWORD *)(result + 8) + v2 + 60) & 1) != a2 )
  {
    *(_DWORD *)(v2 + 8) |= 4u;
    *(_DWORD *)(16 * *(_DWORD *)(result + 8) + *(_DWORD *)(result + 4) + 56) |= 1u;
    v3 = *(_DWORD *)(result + 8);
    v4 = *(_DWORD *)(result + 4);
    v3 *= 16;
    *(_DWORD *)(v3 + v4 + 60) ^= 1u;
    return v3 + v4 + 60;
  }
  return result;
}

// Address: 0x10008230
int __userpurge sub_10008230@<eax>(int result@<eax>, char a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // eax

  v2 = *(_DWORD *)(result + 4);
  if ( ((*(_DWORD *)(16 * *(_DWORD *)(result + 8) + v2 + 60) & 2) != 0) != a2 )
  {
    *(_DWORD *)(v2 + 8) |= 4u;
    *(_DWORD *)(16 * *(_DWORD *)(result + 8) + *(_DWORD *)(result + 4) + 56) |= 2u;
    v3 = *(_DWORD *)(result + 8);
    v4 = *(_DWORD *)(result + 4);
    v3 *= 16;
    *(_DWORD *)(v3 + v4 + 60) ^= 2u;
    return v3 + v4 + 60;
  }
  return result;
}

// Address: 0x10008280
_DWORD *__thiscall sub_10008280(_DWORD *this, char a2)
{
  *this = &SheriffCtrl::Config::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100082B0
int __thiscall sub_100082B0(_DWORD *this, int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // ebp
  int result; // eax
  unsigned int v7; // esi
  char *v8; // ebx
  int v9; // eax
  _DWORD v10[4]; // [esp+14h] [ebp-1Ch] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  v3 = *(this + 4);
  if ( *(this + 3) > v3 )
    _invalid_parameter_noinfo();
  v4 = *(this + 3);
  v5 = *this;
  if ( v4 > *(this + 4) )
    _invalid_parameter_noinfo();
  result = sub_10008950(v10, *this, v4, v5, v3);
  v7 = 0;
  v8 = (char *)(a2 + 68);
  do
  {
    if ( *v8 < 0 )
    {
      if ( a2 != 0 )
        v9 = a2 + 8;
      else
        v9 = 0;
      v10[0] = &SheriffCtrl::DriveConfig::`vftable';
      v10[1] = v9;
      v10[2] = v7;
      v11 = 0;
      result = sub_10008520(v10);
      v11 = -1;
      v10[0] = &SheriffCtrl::DriveConfig::`vftable';
    }
    ++v7;
    v8 += 16;
  }
  while ( v7 < 0x1A );
  return result;
}

// Address: 0x10008380
char *__stdcall sub_10008380(int *a1)
{
  int *v1; // edx
  _DWORD *v2; // eax
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  int v5; // edx
  _DWORD *v6; // eax
  _DWORD *v8; // [esp+14h] [ebp-50h]
  int v9; // [esp+18h] [ebp-4Ch] BYREF
  void *v10; // [esp+1Ch] [ebp-48h]
  int v11; // [esp+2Ch] [ebp-38h]
  unsigned int v12; // [esp+30h] [ebp-34h]
  int v13; // [esp+34h] [ebp-30h] BYREF
  _BYTE v14[4]; // [esp+38h] [ebp-2Ch] BYREF
  void *v15; // [esp+3Ch] [ebp-28h]
  int v16; // [esp+4Ch] [ebp-18h]
  unsigned int v17; // [esp+50h] [ebp-14h]
  int v18; // [esp+60h] [ebp-4h]

  v1 = a1;
  v2 = *((_DWORD **)dword_1002728C + 1);
  v3 = dword_1002728C;
  while ( *((_BYTE *)v2 + 45) == 0 )
  {
    if ( v2[3] >= (unsigned int)*a1 )
    {
      v3 = v2;
      v2 = (_DWORD *)*v2;
    }
    else
    {
      v2 = (_DWORD *)v2[2];
    }
  }
  v4 = dword_10027274;
  v8 = dword_1002728C;
  if ( dword_10027274 == nullptr )
  {
    _invalid_parameter_noinfo();
    v1 = a1;
  }
  if ( v3 == v8 || (unsigned int)*v1 < v3[3] )
  {
    v12 = 7;
    v11 = 0;
    LOWORD(v10) = 0;
    v18 = 0;
    v5 = *v1;
    v16 = 0;
    LOWORD(v15) = 0;
    v13 = v5;
    v17 = 7;
    sub_10004650(&v9, (int)v14, 0, 0xFFFFFFFF);
    LOBYTE(v18) = 1;
    v6 = (_DWORD *)sub_10008690(&v13, v4, v3);
    v4 = (_DWORD *)*v6;
    v3 = (_DWORD *)v6[1];
    if ( v17 >= 8 )
      operator delete(v15);
    v17 = 7;
    v16 = 0;
    LOWORD(v15) = 0;
    if ( v12 >= 8 )
      operator delete(v10);
    v12 = 7;
    v11 = 0;
    LOWORD(v10) = 0;
  }
  if ( v4 != nullptr )
    v4 = (_DWORD *)*v4;
  else
    _invalid_parameter_noinfo();
  if ( v3 == (_DWORD *)v4[6] )
    _invalid_parameter_noinfo();
  return (char *)(v3 + 4);
}

// Address: 0x100084E0
int __usercall sub_100084E0@<eax>(int result@<eax>)
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

// Address: 0x10008520
int __userpurge sub_10008520@<eax>(_DWORD *a1@<edi>, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  int result; // eax
  _BYTE v6[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = a1[3];
  if ( v2 != 0 )
    v3 = (int)(a1[5] - v2) / 12;
  else
    v3 = 0;
  v4 = a1[4];
  if ( (int)(v4 - v2) / 12 >= v3 )
  {
    if ( v2 > v4 )
      _invalid_parameter_noinfo();
    return sub_10008880(v6, a2, *a1, v4);
  }
  else
  {
    LOBYTE(a2) = 0;
    result = sub_100099B0(a2, a2);
    a1[4] = v4 + 12;
  }
  return result;
}

// Address: 0x100085F0
void sub_100085F0()
{
  operator delete(dword_10027274);
}

// Address: 0x10008600
void **__cdecl sub_10008600()
{
  _DWORD *v0; // eax

  v0 = operator new(4u);
  if ( v0 != nullptr )
    *v0 = &dword_10027274;
  else
    v0 = nullptr;
  dword_10027274 = v0;
  dword_1002728C = (void *)sub_100095B0();
  *((_BYTE *)dword_1002728C + 45) = 1;
  *((_DWORD *)dword_1002728C + 1) = dword_1002728C;
  *(_DWORD *)dword_1002728C = dword_1002728C;
  *((_DWORD *)dword_1002728C + 2) = dword_1002728C;
  dword_10027290 = 0;
  return &dword_10027274;
}

// Address: 0x10008690
_DWORD *__userpurge sub_10008690@<eax>(_DWORD *a1@<ebx>, _DWORD *a2, void *a3, _DWORD *a4)
{
  _DWORD *v5; // esi
  void *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // esi
  bool v9; // cf
  _DWORD *v10; // eax
  _DWORD *v11; // [esp-4h] [ebp-24h]
  _DWORD *v12; // [esp+10h] [ebp-10h]
  _DWORD *v13; // [esp+10h] [ebp-10h]

  if ( dword_10027290 == 0 )
  {
    sub_10008C60(a1, 1, a2);
    return a1;
  }
  v5 = *(_DWORD **)dword_1002728C;
  v6 = a3;
  if ( a3 == nullptr || a3 != dword_10027274 )
  {
    _invalid_parameter_noinfo();
    v6 = a3;
  }
  v7 = a4;
  if ( a4 == v5 )
  {
    if ( *a2 < a4[3] )
    {
      v11 = a2;
      goto LABEL_20;
    }
    goto LABEL_27;
  }
  v8 = dword_1002728C;
  if ( v6 == nullptr || v6 != dword_10027274 )
  {
    _invalid_parameter_noinfo();
    v7 = a4;
  }
  if ( v7 == v8 )
  {
    if ( *(_DWORD *)(*((_DWORD *)dword_1002728C + 2) + 12) < *a2 )
    {
      v11 = a2;
LABEL_26:
      sub_10008C60(a1, 0, v11);
      return a1;
    }
  }
  else
  {
    v9 = v7[3] < *a2;
    if ( v7[3] > *a2 )
    {
      v12 = v7;
      sub_100096A0();
      if ( v12[3] < *a2 )
      {
        v11 = a2;
        if ( *(_BYTE *)(v12[2] + 45) == 0 )
        {
LABEL_20:
          sub_10008C60(a1, 1, v11);
          return a1;
        }
        goto LABEL_26;
      }
      v7 = a4;
      v9 = a4[3] < *a2;
    }
    if ( v9 )
    {
      v13 = v7;
      sub_10009720();
      if ( (unsigned __int8)sub_100089F0() != 0 || *a2 < v13[3] )
      {
        v11 = a2;
        if ( *(_BYTE *)(a4[2] + 45) == 0 )
          goto LABEL_20;
        goto LABEL_26;
      }
    }
  }
LABEL_27:
  v10 = (_DWORD *)sub_10008A10(a2);
  *a1 = *v10;
  a1[1] = v10[1];
  return a1;
}

// Address: 0x10008830
int sub_10008830()
{
  sub_10008B00((char)dword_10027274, *(void **)dword_1002728C, dword_10027274, dword_1002728C);
  operator delete(dword_1002728C);
  dword_1002728C = nullptr;
  dword_10027290 = 0;
  return 0;
}

// Address: 0x10008880
_DWORD *__userpurge sub_10008880@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3, int a4, int a5)
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
  if ( (int)(a1[4] - v6) / 12 != 0 )
  {
    if ( v6 > a1[4] )
      _invalid_parameter_noinfo();
    if ( a4 == 0 || a4 != *a1 )
      _invalid_parameter_noinfo();
    v7 = (int)(a5 - v6) / 12;
  }
  else
  {
    v7 = 0;
  }
  sub_10008F00(a1, a3, a4, a5);
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
  v12 = v8 + 12 * v7;
  if ( v12 > *(_DWORD *)(v11 + 16) || (v9 == nullptr ? (v13 = 0) : (v13 = *v9), v12 < *(_DWORD *)(v13 + 12)) )
    _invalid_parameter_noinfo();
  a2[1] = v12;
  *a2 = v10;
  return a2;
}

// Address: 0x10008950
_DWORD *__userpurge sub_10008950@<eax>(_DWORD *a1@<ebx>, _DWORD *a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  int v8; // eax
  void (__thiscall ***v9)(_DWORD, _DWORD); // edi
  int v10; // ebp
  void (__thiscall ***i)(_DWORD, _DWORD); // esi

  *a2 = 0;
  if ( a1 == nullptr || (v6 = a4, a1[3] > a4) || a4 > a1[4] )
  {
    _invalid_parameter_noinfo();
    v6 = a4;
  }
  v7 = a6;
  *a2 = *a1;
  a2[1] = v6;
  if ( a1[3] > a6 || a6 > a1[4] )
  {
    _invalid_parameter_noinfo();
    v7 = a6;
  }
  if ( *a2 == 0 || *a2 != *a1 )
    _invalid_parameter_noinfo();
  if ( a2[1] == v7 )
    return a2;
  v8 = sub_10009810(v7);
  v9 = (void (__thiscall ***)(_DWORD, _DWORD))a1[4];
  v10 = v8;
  for ( i = (void (__thiscall ***)(_DWORD, _DWORD))v8; i != v9; i += 3 )
    (**i)(i, 0);
  a1[4] = v10;
  return a2;
}

// Address: 0x100089F0
bool __usercall sub_100089F0@<al>(_DWORD *a1@<edi>, _DWORD *a2@<esi>)
{
  if ( *a1 == 0 || *a1 != *a2 )
    _invalid_parameter_noinfo();
  return a1[1] == a2[1];
}

// Address: 0x10008A10
int __userpurge sub_10008A10@<eax>(int a1@<edi>, unsigned int *a2)
{
  _DWORD *v2; // eax
  bool v3; // cl
  _DWORD *v4; // ebp
  unsigned int v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int *v8; // eax
  int v9; // ecx
  int *v11; // eax
  int v12; // edx
  void *v13; // ecx
  char v14; // [esp+Ch] [ebp-Ch]
  void *v15; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v16; // [esp+14h] [ebp-4h]

  v2 = *((_DWORD **)dword_1002728C + 1);
  v3 = true;
  v4 = dword_1002728C;
  v14 = 1;
  if ( *((_BYTE *)v2 + 45) == 0 )
  {
    v5 = *a2;
    do
    {
      v4 = v2;
      v3 = v5 < v2[3];
      v14 = v3;
      if ( v5 >= v2[3] )
        v2 = (_DWORD *)v2[2];
      else
        v2 = (_DWORD *)*v2;
    }
    while ( *((_BYTE *)v2 + 45) == 0 );
  }
  v6 = v4;
  v16 = v4;
  v15 = dword_10027274;
  if ( v3 )
  {
    v7 = *(_DWORD **)dword_1002728C;
    if ( dword_10027274 == nullptr )
      _invalid_parameter_noinfo();
    if ( v4 == v7 )
    {
      v8 = (int *)sub_10008C60(&v15, 1, a2);
      v9 = *v8;
      *(_DWORD *)(a1 + 4) = v8[1];
      *(_BYTE *)(a1 + 8) = 1;
      *(_DWORD *)a1 = v9;
      return a1;
    }
    sub_100096A0();
    v6 = v16;
  }
  if ( v6[3] >= *a2 )
  {
    v13 = v15;
    *(_DWORD *)(a1 + 4) = v6;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)a1 = v13;
  }
  else
  {
    v11 = (int *)sub_10008C60(&v15, v14, a2);
    v12 = *v11;
    *(_DWORD *)(a1 + 4) = v11[1];
    *(_DWORD *)a1 = v12;
    *(_BYTE *)(a1 + 8) = 1;
  }
  return a1;
}

// Address: 0x10008B00
_DWORD *__userpurge sub_10008B00@<eax>(_DWORD *a1@<ebx>, void *a2, void *a3, void *a4, void *a5)
{
  void *v5; // esi
  void *v6; // eax
  void *v7; // ecx
  void *v8; // esi
  int v9; // ecx
  char v11; // si
  void *v12; // edi
  int v13; // eax
  void *v14; // ecx
  _BYTE *j; // eax
  int i; // eax
  int v17[3]; // [esp+8h] [ebp-Ch] BYREF

  v5 = *(void **)dword_1002728C;
  v6 = a2;
  if ( a2 == nullptr || a2 != dword_10027274 )
  {
    _invalid_parameter_noinfo();
    v6 = a2;
  }
  v7 = a3;
  if ( a3 != v5 )
    goto LABEL_13;
  v8 = dword_1002728C;
  if ( a4 == nullptr || a4 != dword_10027274 )
  {
    _invalid_parameter_noinfo();
    v7 = a3;
    v6 = a2;
  }
  if ( a5 == v8 )
  {
    sub_10009790(*((void **)dword_1002728C + 1));
    *((_DWORD *)dword_1002728C + 1) = dword_1002728C;
    dword_10027290 = 0;
    *(_DWORD *)dword_1002728C = dword_1002728C;
    *((_DWORD *)dword_1002728C + 2) = dword_1002728C;
    v9 = *(_DWORD *)dword_1002728C;
    *a1 = dword_10027274;
    a1[1] = v9;
    return a1;
  }
  else
  {
LABEL_13:
    while ( 1 )
    {
      if ( v6 == nullptr || v6 != a4 )
      {
        _invalid_parameter_noinfo();
        v7 = a3;
        v6 = a2;
      }
      if ( v7 == a5 )
        break;
      v11 = (char)v6;
      v12 = v7;
      if ( v6 == nullptr )
      {
        _invalid_parameter_noinfo();
        v7 = a3;
      }
      if ( *((_BYTE *)v7 + 45) != 0 )
      {
        _invalid_parameter_noinfo();
      }
      else
      {
        v13 = *((_DWORD *)v7 + 2);
        if ( *(_BYTE *)(v13 + 45) != 0 )
        {
          for ( i = *((_DWORD *)v7 + 1); *(_BYTE *)(i + 45) == 0; i = *(_DWORD *)(i + 4) )
          {
            if ( v7 != *(void **)(i + 8) )
              break;
            v7 = (void *)i;
          }
          a3 = (void *)i;
        }
        else
        {
          v14 = *((void **)v7 + 2);
          for ( j = *(_BYTE **)v13; j[45] == 0; j = *(_BYTE **)j )
            v14 = j;
          a3 = v14;
        }
      }
      sub_10009200((int)v17, v11, v12);
      v7 = a3;
      v6 = a2;
    }
    *a1 = dword_10027274;
    a1[1] = v7;
    return a1;
  }
}

// Address: 0x10008C60
_DWORD *__fastcall sub_10008C60(_DWORD *a1, int a2, _DWORD *a3, char a4, int a5)
{
  int *v6; // ebp
  _DWORD *v7; // ecx
  int **v8; // ecx
  int *i; // edx
  int **v10; // esi
  int *v11; // edi
  int v12; // edi
  int **v13; // esi
  int *v14; // edi
  _DWORD *v15; // ecx
  _DWORD *v16; // esi
  int v17; // edi
  _DWORD *v18; // edi
  int *v19; // esi
  int v20; // ecx
  _DWORD *v21; // edi
  _DWORD *v22; // edi
  void *v24; // edx
  _BYTE v25[20]; // [esp+14h] [ebp-54h] BYREF
  int v26; // [esp+28h] [ebp-40h]
  int v27; // [esp+2Ch] [ebp-3Ch]
  _DWORD pExceptionObject[14]; // [esp+30h] [ebp-38h] BYREF

  if ( (unsigned int)dword_10027290 >= 0x7FFFFFE )
  {
    v27 = 15;
    v26 = 0;
    v25[4] = 0;
    sub_100028B0((int)v25, a2, "map/set<T> too long", (char *)0x13);
    pExceptionObject[13] = 0;
    sub_10001050(pExceptionObject, (int)v25);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  v6 = (int *)sub_100095F0(dword_1002728C, a1, dword_1002728C);
  ++dword_10027290;
  if ( a1 == dword_1002728C )
  {
    *((_DWORD *)dword_1002728C + 1) = v6;
    *(_DWORD *)dword_1002728C = v6;
    v7 = dword_1002728C;
LABEL_9:
    v7[2] = v6;
    goto LABEL_10;
  }
  if ( a4 == 0 )
  {
    a1[2] = v6;
    v7 = dword_1002728C;
    if ( a1 != *((_DWORD **)dword_1002728C + 2) )
      goto LABEL_10;
    goto LABEL_9;
  }
  *a1 = v6;
  if ( a1 == *(_DWORD **)dword_1002728C )
    *(_DWORD *)dword_1002728C = v6;
LABEL_10:
  v8 = (int **)(v6 + 1);
  for ( i = v6; *(_BYTE *)(i[1] + 44) == 0; v8 = (int **)(i + 1) )
  {
    v10 = (int **)*v8;
    v11 = (int *)(*v8)[1];
    if ( *v8 == (int *)*v11 )
    {
      v12 = v11[2];
      if ( *(_BYTE *)(v12 + 44) != 0 )
      {
        if ( i == v10[2] )
        {
          i = *v8;
          v13 = (int **)v10[2];
          (*v8)[2] = (int)*v13;
          if ( *((_BYTE *)*v13 + 45) == 0 )
            (*v13)[1] = (int)i;
          v8 = (int **)(i + 1);
          v13[1] = (int *)i[1];
          if ( i == *((int **)dword_1002728C + 1) )
          {
            *((_DWORD *)dword_1002728C + 1) = v13;
          }
          else
          {
            v14 = *v8;
            if ( i == (int *)**v8 )
              *v14 = (int)v13;
            else
              v14[2] = (int)v13;
          }
          *v13 = i;
          *v8 = (int *)v13;
        }
        *((_BYTE *)*v8 + 44) = 1;
        *(_BYTE *)((*v8)[1] + 44) = 0;
        v15 = (_DWORD *)(*v8)[1];
        v16 = (_DWORD *)*v15;
        *v15 = *(_DWORD *)(*v15 + 8);
        v17 = v16[2];
        if ( *(_BYTE *)(v17 + 45) == 0 )
          *(_DWORD *)(v17 + 4) = v15;
        v16[1] = v15[1];
        if ( v15 == *((_DWORD **)dword_1002728C + 1) )
        {
          *((_DWORD *)dword_1002728C + 1) = v16;
          v16[2] = v15;
        }
        else
        {
          v18 = (_DWORD *)v15[1];
          if ( v15 == (_DWORD *)v18[2] )
            v18[2] = v16;
          else
            *v18 = v16;
          v16[2] = v15;
        }
LABEL_49:
        v15[1] = v16;
        continue;
      }
    }
    else
    {
      v12 = *v11;
      if ( *(_BYTE *)(v12 + 44) != 0 )
      {
        if ( i == *v10 )
        {
          i = *v8;
          v19 = *v10;
          **v8 = v19[2];
          v20 = v19[2];
          if ( *(_BYTE *)(v20 + 45) == 0 )
            *(_DWORD *)(v20 + 4) = i;
          v8 = (int **)(i + 1);
          v19[1] = i[1];
          if ( i == *((int **)dword_1002728C + 1) )
          {
            *((_DWORD *)dword_1002728C + 1) = v19;
          }
          else
          {
            v21 = *v8;
            if ( i == (int *)(*v8)[2] )
              v21[2] = v19;
            else
              *v21 = v19;
          }
          v19[2] = (int)i;
          *v8 = v19;
        }
        *((_BYTE *)*v8 + 44) = 1;
        *(_BYTE *)((*v8)[1] + 44) = 0;
        v15 = (_DWORD *)(*v8)[1];
        v16 = (_DWORD *)v15[2];
        v15[2] = *v16;
        if ( *(_BYTE *)(*v16 + 45) == 0 )
          *(_DWORD *)(*v16 + 4) = v15;
        v16[1] = v15[1];
        if ( v15 == *((_DWORD **)dword_1002728C + 1) )
        {
          *((_DWORD *)dword_1002728C + 1) = v16;
        }
        else
        {
          v22 = (_DWORD *)v15[1];
          if ( v15 == (_DWORD *)*v22 )
            *v22 = v16;
          else
            v22[2] = v16;
        }
        *v16 = v15;
        goto LABEL_49;
      }
    }
    *((_BYTE *)v10 + 44) = 1;
    *(_BYTE *)(v12 + 44) = 1;
    *(_BYTE *)((*v8)[1] + 44) = 0;
    i = (int *)(*v8)[1];
  }
  *(_BYTE *)(*((_DWORD *)dword_1002728C + 1) + 44) = 1;
  v24 = dword_10027274;
  a3[1] = v6;
  *a3 = v24;
  return a3;
}

// Address: 0x10008F00
int __stdcall sub_10008F00(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  char *v11; // ecx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  int result; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19[4]; // [esp+0h] [ebp-38h] BYREF
  _DWORD v20[3]; // [esp+10h] [ebp-28h] BYREF
  int v21; // [esp+1Ch] [ebp-1Ch]
  unsigned int v22; // [esp+20h] [ebp-18h]
  int v23; // [esp+24h] [ebp-14h]
  int *v24; // [esp+28h] [ebp-10h]
  int v25; // [esp+34h] [ebp-4h]
  char *v26; // [esp+40h] [ebp+8h]
  int v27; // [esp+44h] [ebp+Ch]

  v24 = v19;
  v5 = a1[3];
  if ( v5 != 0 )
    v6 = (a1[5] - v5) / 12;
  else
    v6 = 0;
  v7 = a1[4];
  v8 = (v7 - v5) / 12;
  if ( v8 == 357913941 )
    sub_100047C0(0, (int)((unsigned __int64)(715827883LL * (a1[4] - v5)) >> 32) >> 1, v19[0], v19[1]);
  v9 = v8 + 1;
  if ( v6 >= v9 )
  {
    v16 = *(_DWORD *)(a2 + 4);
    v17 = *(_DWORD *)(a2 + 8);
    v20[0] = &SheriffCtrl::DriveConfig::`vftable';
    v20[1] = v16;
    v20[2] = v17;
    if ( (v7 - a4) / 12 != 0 )
    {
      v25 = 5;
      LOBYTE(a2) = 0;
      a1[4] = sub_10009A10(a2, a2);
      sub_10009890(v7 - 12);
      v18 = a4 + 12;
    }
    else
    {
      v25 = 2;
      LOBYTE(a2) = 0;
      sub_10009A10(a2, a2);
      LOBYTE(v25) = 3;
      LOBYTE(a2) = 0;
      sub_100099B0(a2, a2);
      a1[4] += 12;
      v18 = a1[4] - 12;
    }
    return sub_10009860(v20, v18);
  }
  else
  {
    if ( 357913941 - (v6 >> 1) >= v6 )
      v10 = (v6 >> 1) + v6;
    else
      v10 = 0;
    if ( v10 < v9 )
      v10 = v9;
    v11 = (char *)sub_10007750(v10);
    v12 = (int)((unsigned __int64)(715827883LL * (a4 - a1[3])) >> 32) >> 1;
    v25 = 0;
    v23 = 0;
    v26 = v11;
    LOBYTE(v21) = 0;
    v22 = v12 + (v12 >> 31);
    sub_100099B0(a2, v21);
    LOBYTE(a2) = 0;
    v23 = 1;
    sub_10009A10(a2, a2);
    LOBYTE(a2) = 0;
    v23 = 2;
    sub_10009A10(a2, a2);
    v25 = -1;
    v13 = a1[3];
    v14 = (a1[4] - v13) / 12 + 1;
    v27 = v14;
    if ( v13 != 0 )
    {
      sub_10007730(v13, (int (__thiscall ***)(_DWORD, _DWORD))a1[4]);
      operator delete((void *)a1[3]);
      v14 = v27;
    }
    result = 3 * v14;
    a1[5] = &v26[12 * v10];
    a1[4] = &v26[4 * result];
    a1[3] = v26;
  }
  return result;
}

// Address: 0x10009200
_DWORD *__fastcall sub_10009200(int a1, int a2, _DWORD *a3, char a4, int *a5)
{
  int **v5; // edi
  int *v6; // esi
  int *i; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  void *v11; // ecx
  _BYTE v13[20]; // [esp+14h] [ebp-54h] BYREF
  int v14; // [esp+28h] [ebp-40h]
  int v15; // [esp+2Ch] [ebp-3Ch]
  _DWORD pExceptionObject[14]; // [esp+30h] [ebp-38h] BYREF

  if ( *((_BYTE *)a5 + 45) != 0 )
  {
    v15 = 15;
    v14 = 0;
    v13[4] = 0;
    sub_100028B0((int)v13, a2, "invalid map/set<T> iterator", (char *)0x1B);
    pExceptionObject[13] = 0;
    sub_10001050(pExceptionObject, (int)v13);
    pExceptionObject[0] = &std::out_of_range::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  sub_10009720();
  if ( *(_BYTE *)(*a5 + 45) != 0 )
  {
    v5 = (int **)a5[2];
  }
  else if ( *(_BYTE *)(a5[2] + 45) != 0 )
  {
    v5 = (int **)*a5;
  }
  else
  {
    v5 = (int **)a5[2];
  }
  v6 = (int *)a5[1];
  if ( *((_BYTE *)v5 + 45) == 0 )
    v5[1] = v6;
  if ( *((int **)dword_1002728C + 1) == a5 )
  {
    *((_DWORD *)dword_1002728C + 1) = v5;
  }
  else if ( (int *)*v6 == a5 )
  {
    *v6 = (int)v5;
  }
  else
  {
    v6[2] = (int)v5;
  }
  if ( *(int **)dword_1002728C == a5 )
  {
    if ( *((_BYTE *)v5 + 45) != 0 )
    {
      i = v6;
    }
    else
    {
      v8 = *v5;
      for ( i = (int *)v5; *((_BYTE *)v8 + 45) == 0; v8 = (int *)*v8 )
        i = v8;
    }
    *(_DWORD *)dword_1002728C = i;
  }
  if ( *((int **)dword_1002728C + 2) == a5 )
  {
    if ( *((_BYTE *)v5 + 45) != 0 )
      *((_DWORD *)dword_1002728C + 2) = v6;
    else
      *((_DWORD *)dword_1002728C + 2) = sub_100097F0();
  }
  if ( *((_BYTE *)a5 + 44) == 1 )
  {
    for ( ; v5 != *((int ***)dword_1002728C + 1); v6 = (int *)v6[1] )
    {
      if ( *((_BYTE *)v5 + 44) != 1 )
        break;
      v9 = *v6;
      if ( v5 == (int **)*v6 )
      {
        v9 = v6[2];
        if ( *(_BYTE *)(v9 + 44) == 0 )
        {
          *(_BYTE *)(v9 + 44) = 1;
          *((_BYTE *)v6 + 44) = 0;
          sub_10009510(v6);
          v9 = v6[2];
        }
        if ( *(_BYTE *)(v9 + 45) != 0 )
          goto LABEL_43;
        if ( *(_BYTE *)(*(_DWORD *)v9 + 44) != 1 || *(_BYTE *)(*(_DWORD *)(v9 + 8) + 44) != 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)(v9 + 8) + 44) == 1 )
          {
            *(_BYTE *)(*(_DWORD *)v9 + 44) = 1;
            *(_BYTE *)(v9 + 44) = 0;
            sub_10009560(v9);
            v9 = v6[2];
          }
          *(_BYTE *)(v9 + 44) = *((_BYTE *)v6 + 44);
          *((_BYTE *)v6 + 44) = 1;
          *(_BYTE *)(*(_DWORD *)(v9 + 8) + 44) = 1;
          sub_10009510(v6);
          break;
        }
      }
      else
      {
        if ( *(_BYTE *)(v9 + 44) == 0 )
        {
          *(_BYTE *)(v9 + 44) = 1;
          *((_BYTE *)v6 + 44) = 0;
          sub_10009560(v6);
          v9 = *v6;
        }
        if ( *(_BYTE *)(v9 + 45) != 0 )
          goto LABEL_43;
        v10 = *(_DWORD *)(v9 + 8);
        if ( *(_BYTE *)(v10 + 44) != 1 || *(_BYTE *)(*(_DWORD *)v9 + 44) != 1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)v9 + 44) == 1 )
          {
            *(_BYTE *)(v10 + 44) = 1;
            *(_BYTE *)(v9 + 44) = 0;
            ((void (*)(void))sub_10009510)();
            v9 = *v6;
          }
          *(_BYTE *)(v9 + 44) = *((_BYTE *)v6 + 44);
          *((_BYTE *)v6 + 44) = 1;
          *(_BYTE *)(*(_DWORD *)v9 + 44) = 1;
          sub_10009560(v6);
          break;
        }
      }
      *(_BYTE *)(v9 + 44) = 0;
LABEL_43:
      v5 = (int **)v6;
    }
    *((_BYTE *)v5 + 44) = 1;
  }
  if ( (unsigned int)a5[10] >= 8 )
    operator delete((void *)a5[5]);
  a5[10] = 7;
  a5[9] = 0;
  *((_WORD *)a5 + 10) = 0;
  operator delete(a5);
  if ( dword_10027290 != 0 )
    --dword_10027290;
  v11 = dword_10027274;
  a3[1] = a5;
  *a3 = v11;
  return a3;
}

// Address: 0x10009510
_DWORD *__thiscall sub_10009510(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // edx

  result = (_DWORD *)*(this + 2);
  *(this + 2) = *result;
  if ( *(_BYTE *)(*result + 45) == 0 )
    *(_DWORD *)(*result + 4) = this;
  result[1] = *(this + 1);
  if ( this == *((_DWORD **)dword_1002728C + 1) )
  {
    *((_DWORD *)dword_1002728C + 1) = result;
    *result = this;
    *(this + 1) = result;
  }
  else
  {
    v2 = (_DWORD *)*(this + 1);
    if ( this == (_DWORD *)*v2 )
      *v2 = result;
    else
      v2[2] = result;
    *result = this;
    *(this + 1) = result;
  }
  return result;
}

// Address: 0x10009560
int __thiscall sub_10009560(_DWORD *this)
{
  int result; // eax
  int v2; // edx
  _DWORD *v3; // edx

  result = *this;
  *this = *(_DWORD *)(*this + 8);
  v2 = *(_DWORD *)(result + 8);
  if ( *(_BYTE *)(v2 + 45) == 0 )
    *(_DWORD *)(v2 + 4) = this;
  *(_DWORD *)(result + 4) = *(this + 1);
  if ( this == *((_DWORD **)dword_1002728C + 1) )
  {
    *((_DWORD *)dword_1002728C + 1) = result;
    *(_DWORD *)(result + 8) = this;
    *(this + 1) = result;
  }
  else
  {
    v3 = (_DWORD *)*(this + 1);
    if ( this == (_DWORD *)v3[2] )
      v3[2] = result;
    else
      *v3 = result;
    *(_DWORD *)(result + 8) = this;
    *(this + 1) = result;
  }
  return result;
}

// Address: 0x100095B0
_DWORD *sub_100095B0()
{
  _DWORD *result; // eax

  result = operator new(0x30u);
  if ( result != nullptr )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 44) = 1;
  *((_BYTE *)result + 45) = 0;
  return result;
}

// Address: 0x100095F0
_DWORD *__thiscall sub_100095F0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v8; // [esp+0h] [ebp-24h] BYREF
  void *v9; // [esp+10h] [ebp-14h]
  int *v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v10 = &v8;
  v5 = operator new(0x30u);
  v6 = v5;
  v9 = v5;
  v11 = 1;
  if ( v5 != nullptr )
  {
    *v5 = a2;
    v5[1] = a3;
    v5[2] = a4;
    v5[3] = *this;
    v5[10] = 7;
    v5[9] = 0;
    *((_WORD *)v5 + 10) = 0;
    sub_10004650(this + 1, (int)(v5 + 4), 0, 0xFFFFFFFF);
    *((_BYTE *)v6 + 44) = 0;
    *((_BYTE *)v6 + 45) = 0;
  }
  return v6;
}

// Address: 0x100096A0
void __usercall sub_100096A0(_DWORD *a1@<esi>)
{
  int *v1; // eax
  int v2; // eax
  int v3; // ecx
  int j; // eax
  int i; // eax

  if ( *a1 == 0 )
    _invalid_parameter_noinfo();
  v1 = (int *)a1[1];
  if ( *((_BYTE *)v1 + 45) != 0 )
  {
    v2 = v1[2];
    a1[1] = v2;
    if ( *(_BYTE *)(v2 + 45) == 0 )
      return;
    goto LABEL_5;
  }
  v3 = *v1;
  if ( *(_BYTE *)(*v1 + 45) != 0 )
  {
    for ( i = v1[1]; *(_BYTE *)(i + 45) == 0; i = *(_DWORD *)(i + 4) )
    {
      if ( a1[1] != *(_DWORD *)i )
        break;
      a1[1] = i;
    }
    if ( *(_BYTE *)(a1[1] + 45) != 0 )
    {
LABEL_5:
      _invalid_parameter_noinfo();
      return;
    }
    a1[1] = i;
  }
  else
  {
    for ( j = *(_DWORD *)(v3 + 8); *(_BYTE *)(j + 45) == 0; j = *(_DWORD *)(j + 8) )
      v3 = j;
    a1[1] = v3;
  }
}

// Address: 0x10009720
void __usercall sub_10009720(_DWORD *a1@<esi>)
{
  int v1; // eax
  int **v2; // ecx
  int *j; // eax
  int i; // eax

  if ( *a1 == 0 )
    _invalid_parameter_noinfo();
  v1 = a1[1];
  if ( *(_BYTE *)(v1 + 45) != 0 )
  {
    _invalid_parameter_noinfo();
  }
  else
  {
    v2 = *(int ***)(v1 + 8);
    if ( *((_BYTE *)v2 + 45) != 0 )
    {
      for ( i = *(_DWORD *)(v1 + 4); *(_BYTE *)(i + 45) == 0; i = *(_DWORD *)(i + 4) )
      {
        if ( a1[1] != *(_DWORD *)(i + 8) )
          break;
        a1[1] = i;
      }
      a1[1] = i;
    }
    else
    {
      for ( j = *v2; *((_BYTE *)j + 45) == 0; j = (int *)*j )
        v2 = (int **)j;
      a1[1] = v2;
    }
  }
}

// Address: 0x10009790
void __stdcall sub_10009790(void **a1)
{
  void **v1; // esi
  void **i; // edi

  v1 = a1;
  for ( i = a1; *((_BYTE *)i + 45) == 0; v1 = i )
  {
    sub_10009790(i[2]);
    i = (void **)*i;
    if ( (unsigned int)v1[10] >= 8 )
      operator delete(v1[5]);
    v1[10] = (void *)7;
    v1[9] = nullptr;
    *((_WORD *)v1 + 10) = 0;
    operator delete(v1);
  }
}

// Address: 0x100097F0
int __usercall sub_100097F0@<eax>(int result@<eax>)
{
  int i; // ecx

  for ( i = *(_DWORD *)(result + 8); *(_BYTE *)(i + 45) == 0; i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}

// Address: 0x10009810
int __usercall sub_10009810@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<edi>)
{
  int result; // eax
  int v6; // edx
  _DWORD *v7; // ecx
  int v8; // esi

  result = a1 + 12 * ((a3 - a2) / 12);
  v6 = a2;
  if ( a2 != a3 )
  {
    v7 = (_DWORD *)(a1 + 8);
    v8 = a2 - a1;
    do
    {
      *(v7 - 1) = *(_DWORD *)(v6 + 4);
      *v7 = *(_DWORD *)((char *)v7 + v8);
      v6 += 12;
      v7 += 3;
    }
    while ( v6 != a3 );
  }
  return result;
}

// Address: 0x10009860
_DWORD *__usercall sub_10009860@<eax>(_DWORD *result@<eax>, _DWORD *a2@<edx>, int a3@<ecx>)
{
  if ( result != a2 )
  {
    result += 2;
    do
    {
      *(result - 1) = *(_DWORD *)(a3 + 4);
      *result = *(_DWORD *)(a3 + 8);
      result += 3;
    }
    while ( result - 2 != a2 );
  }
  return result;
}

// Address: 0x10009890
int __usercall sub_10009890@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<edi>)
{
  int result; // eax
  int v6; // edx
  _DWORD *v7; // ecx
  int v8; // esi
  int v9; // ebx

  result = a1 - 12 * ((a2 - a3) / 12);
  v6 = a2;
  if ( a3 != a2 )
  {
    v7 = (_DWORD *)(a1 + 8);
    v8 = a2 - a1;
    do
    {
      v9 = *(_DWORD *)(v6 - 8);
      v6 -= 12;
      v7 -= 3;
      *(v7 - 1) = v9;
      *v7 = *(_DWORD *)((char *)v7 + v8);
    }
    while ( v6 != a3 );
  }
  return result;
}

// Address: 0x100098E0
_DWORD *__stdcall sub_100098E0(_DWORD *a1, void *a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<SheriffCtrl::Installer>::`vftable';
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

// Address: 0x100099B0
_DWORD *__usercall sub_100099B0@<eax>(_DWORD *result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  for ( ; a3 != 0; result += 3 )
  {
    if ( result != nullptr )
    {
      *result = &SheriffCtrl::DriveConfig::`vftable';
      result[1] = *(_DWORD *)(a2 + 4);
      result[2] = *(_DWORD *)(a2 + 8);
    }
    --a3;
  }
  return result;
}

// Address: 0x100099E0
void __thiscall sub_100099E0(void **this)
{
  if ( *(this + 1) != nullptr )
    operator delete(*(this + 1));
}

// Address: 0x100099F0
_DWORD *__thiscall sub_100099F0(_DWORD *this, char a2)
{
  *this = &std::tr1::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10009A10
_DWORD *__usercall sub_10009A10@<eax>(_DWORD *result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  for ( ; a3 != a2; result += 3 )
  {
    if ( result != nullptr )
    {
      *result = &SheriffCtrl::DriveConfig::`vftable';
      result[1] = *(_DWORD *)(a3 + 4);
      result[2] = *(_DWORD *)(a3 + 8);
    }
    a3 += 12;
  }
  return result;
}

// Address: 0x10009A40
HMODULE sub_10009A40()
{
  WCHAR Filename[260]; // [esp+0h] [ebp-20Ch] BYREF

  GetModuleFileNameW(hInstance, Filename, 0x104u);
  wcsrchr(Filename, 0x5Cu)[1] = 0;
  wcscat_s(Filename, 0x104u, L"SheriffVDisk.dll");
  return LoadLibraryW(Filename);
}

// Address: 0x10009AC0
int __thiscall sub_10009AC0(void *this)
{
  int result; // eax

  result = 101;
  switch ( (unsigned int)this )
  {
    case 0u:
      result = 0;
      break;
    case 1u:
      result = 102;
      break;
    case 2u:
    case 3u:
    case 4u:
    case 7u:
      result = 103;
      break;
    case 5u:
      result = 104;
      break;
    case 6u:
      result = 105;
      break;
    case 8u:
      result = 106;
      break;
    case 9u:
      result = 107;
      break;
    case 0xAu:
      result = 108;
      break;
    case 0xBu:
      result = 109;
      break;
    case 0xCu:
      result = 110;
      break;
    default:
      return result;
  }
  return result;
}

// Address: 0x10009B40
BOOL __cdecl VdiskInstall(int a1, int a2, LPWSTR lpBuffer, int cchBufferMax)
{
  HMODULE v4; // esi
  FARPROC _InstallSheriffVDisk; // eax
  void *v7; // edi
  UINT v8; // esi
  _DWORD v9[2]; // [esp+4h] [ebp-8h] BYREF

  v4 = sub_10009A40();
  _InstallSheriffVDisk = GetProcAddress(v4, "_InstallSheriffVDisk");
  if ( _InstallSheriffVDisk != nullptr )
  {
    v9[0] = a1;
    v9[1] = a2;
    v7 = (void *)((int (__cdecl *)(_DWORD *))_InstallSheriffVDisk)(v9);
    FreeLibrary(v4);
    v8 = sub_10009AC0(v7);
    if ( v8 != 0 )
      LoadStringW(hInstance, v8, lpBuffer, cchBufferMax);
    return v8 == 0;
  }
  else
  {
    LoadStringW(hInstance, 0x6Fu, lpBuffer, cchBufferMax);
    return false;
  }
}

// Address: 0x10009BE0
BOOL __cdecl VdiskUninstall(WCHAR *lpBuffer, int cchBufferMax)
{
  HMODULE v2; // edi
  int (*_UninstallSheriffVDisk)(void); // esi
  void *v5; // esi
  UINT v6; // esi
  int v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+0h] [ebp-8h]
  int v9; // [esp+0h] [ebp-8h]

  sub_10002A80((wchar_t *)L"VdiskUninstall", v7);
  v2 = sub_10009A40();
  _UninstallSheriffVDisk = GetProcAddress(v2, "_UninstallSheriffVDisk");
  if ( _UninstallSheriffVDisk != nullptr )
  {
    sub_10002A80((wchar_t *)L"_UninstallSheriffVDisk pre", v8);
    v5 = (void *)_UninstallSheriffVDisk();
    sub_10002A80((wchar_t *)L"_UninstallSheriffVDisk %u", (int)v5);
    FreeLibrary(v2);
    v6 = sub_10009AC0(v5);
    if ( v6 != 0 )
      LoadStringW(hInstance, v6, lpBuffer, cchBufferMax);
    sub_10002A80((wchar_t *)L"VdiskUninstall leave", v9);
    return v6 == 0;
  }
  else
  {
    LoadStringW(hInstance, 0x6Fu, lpBuffer, cchBufferMax);
    return false;
  }
}

// Address: 0x10009C90
int (*VdiskDataExists())(void)
{
  HMODULE v0; // esi
  int (*result)(void); // eax
  int v2; // edi

  v0 = sub_10009A40();
  result = GetProcAddress(v0, "_CheckUnProtData");
  if ( result != nullptr )
  {
    v2 = result();
    FreeLibrary(v0);
    return (int (*)(void))v2;
  }
  return result;
}

// Address: 0x10009CC0
int (*VdiskRecvUnprotData())(void)
{
  HMODULE v0; // esi
  int (*result)(void); // eax
  int v2; // edi

  v0 = sub_10009A40();
  result = GetProcAddress(v0, "_RecoveryUnProtData");
  if ( result != nullptr )
  {
    v2 = result();
    FreeLibrary(v0);
    return (int (*)(void))v2;
  }
  return result;
}

// Address: 0x10009CF0
int (*IsExistVDiskService())(void)
{
  HMODULE v0; // esi
  int (*result)(void); // eax
  int v2; // edi

  v0 = sub_10009A40();
  result = GetProcAddress(v0, "_IsExistVDiskService");
  if ( result != nullptr )
  {
    v2 = result();
    FreeLibrary(v0);
    return (int (*)(void))v2;
  }
  return result;
}

// Address: 0x10009D20
FARPROC DeleteVDiskServiceInfo()
{
  HMODULE v0; // esi
  FARPROC result; // eax

  v0 = sub_10009A40();
  result = GetProcAddress(v0, "_DeleteVDiskServiceInfo");
  if ( result != nullptr )
  {
    result();
    FreeLibrary(v0);
    return (FARPROC)1;
  }
  return result;
}

// Address: 0x10009D4A
void __cdecl __noreturn sub_10009D4A()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10002430((int)v1, "string too long");
  v2 = 0;
  sub_10001120(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x10009D82
void __noreturn sub_10009D82()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10002430((int)v1, "invalid string position");
  v2 = 0;
  sub_10001140(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// Address: 0x10009DBA
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x10009DC9
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

// Address: 0x10009E26
_DWORD *__thiscall sub_10009E26(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = &std::exception::`vftable';
  return this;
}

// Address: 0x10009E37
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

// Address: 0x10009E8A
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

// Address: 0x10009EA7
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

// Address: 0x10009F04
void __thiscall sub_10009F04(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}

// Address: 0x10009F1A
const char *__thiscall exception::what(exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x10009F27
void *__thiscall sub_10009F27(void *this, char a2)
{
  sub_10009F04(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10009F48
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

  v1 = (_DWORD *)_decode_pointer(dword_10028408);
  Block = v1;
  v2 = (_DWORD *)_decode_pointer(dword_10028404);
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
        dword_10028404 = _encode_pointer(v3 + 1);
        return a1;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = _realloc_crt(Block, v7)) != 0 || v5 + 16 >= v5 && (v8 = _realloc_crt(Block, v5 + 16)) != 0 )
      {
        v3 = (_DWORD *)(v8 + 4 * (v4 >> 2));
        dword_10028408 = _encode_pointer(v8);
        goto LABEL_11;
      }
    }
  }
  return 0;
}

// Address: 0x1000A002
int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(0x20u, 4);
  dword_10028408 = _encode_pointer(v0);
  dword_10028404 = dword_10028408;
  if ( v0 == nullptr )
    return 24;
  *v0 = 0;
  return 0;
}

// Address: 0x1000A033
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock((int)Func);
  _unlockexit(268476512);
  return v2;
}

// Address: 0x1000A06F
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x1000A086
int __cdecl sub_1000A086(int a1)
{
  dword_10026680 = a1;
  return a1;
}

// Address: 0x1000A095
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
    sub_1000C49C(2);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x1000A1BD
int __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))_decode_pointer(dword_10026680);
  if ( v5 == nullptr )
  {
    sub_1000C49C(2);
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v5();
}

// Address: 0x1000A1E3
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x1000A1F3
void __cdecl operator delete(void *Block)
{
  free(Block);
}

// Address: 0x1000A1FE
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

// Address: 0x1000A27B
void __thiscall sub_1000A27B(struct type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable';
  type_info::_Type_info_dtor(this);
}

// Address: 0x1000A28B
struct type_info *__thiscall sub_1000A28B(struct type_info *this, char a2)
{
  sub_1000A27B(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000A2AC
BOOL __thiscall type_info::operator==(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0;
}

// Address: 0x1000A2CC
std::bad_alloc *__thiscall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  std::exception::exception(this, (const char *const *)&off_10025024, 1);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x1000A2E7
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
      if ( (dword_10026690 & 1) == 0 )
      {
        dword_10026690 |= 1u;
        std::bad_alloc::bad_alloc((std::bad_alloc *)&dword_10026684);
        atexit(sub_1001B26C);
      }
      sub_10002990((std::exception *)pExceptionObject, (struct std::exception *)&dword_10026684);
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  return result;
}

// Address: 0x1000A34C
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

// Address: 0x1000A444
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

// Address: 0x1000A46E
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

// Address: 0x1000A4F9
int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  return _vswprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x1000A516
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

// Address: 0x1000A586
int swscanf_s(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  return vscan_fn((int)Buffer, (int (__cdecl *)(int *, int, int, int))_winput_s_l, (int)Format, 0, (int)va);
}

// Address: 0x1000A5A8
wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *result; // eax
  __int16 v3; // cx

  result = (wchar_t *)Str;
  do
    v3 = *result++;
  while ( v3 != 0 );
  do
    --result;
  while ( result != Str && *result != Ch );
  if ( *result != Ch )
    return nullptr;
  return result;
}

// Address: 0x1000A5D4
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

// Address: 0x1000A651
int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [esp+14h] [ebp+14h] BYREF

  va_start(ArgList, Format);
  return _vswprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x1000A66F
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
    if ( *(_UNKNOWN **)this != off_100257D8 && (dword_100256F4 & v3[28]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_100256F4 & *(_DWORD *)(*((_DWORD *)this + 2) + 112)) == 0 )
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

// Address: 0x1000A6F6
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

// Address: 0x1000A807
int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // edi
  const wchar_t *v4; // edx
  wchar_t v5; // ax
  wchar_t v6; // cx
  wchar_t v7; // ax

  if ( dword_10026A3C != 0 )
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

// Address: 0x1000A89A
void __cdecl free(void *Block)
{
  int v1; // eax
  int *v2; // esi
  DWORD LastError; // eax
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_100283F8 != 3 )
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

// Address: 0x1000A928
int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = 0;
  if ( a1 <= dword_100283E8 )
  {
    _lock(4);
    v2 = __sbh_alloc_block(a1);
    _unlock(4);
  }
  return v2;
}

// Address: 0x1000A977
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
      if ( dword_100283F8 == 1 )
      {
        v2 = v1 != 0 ? v1 : 1;
        v3 = HeapAlloc(hHeap, 0, v2);
      }
      else if ( dword_100283F8 != 3 || (v3 = (LPVOID)V6_HeapAlloc(v1)) == nullptr )
      {
        if ( v1 == 0 )
          v1 = 1;
        v3 = HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
      }
      v4 = v3;
      if ( v3 != nullptr )
        return v4;
      if ( dword_10026ED4 == 0 )
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

// Address: 0x1000AA41
void __noreturn _purecall()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer(dword_10026EE0);
  if ( v0 != nullptr )
    v0();
  _NMSG_WRITE(25);
  _set_abort_behavior(0, 1u);
  abort();
}

// Address: 0x1000AA6B
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

// Address: 0x1000AADA
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
    sub_10011833();
    dword_10028414 = (int)GetCommandLineA();
    dword_10026698 = (char *)__crtGetEnvironmentStringsA();
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
    ++dword_10026694;
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
      v8 = dword_100251B0;
      v6 = (int (__stdcall *)(int, DWORD *))_decode_pointer(dword_100269D4);
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
    if ( dword_10026694 <= 0 )
      return 0;
    --dword_10026694;
    if ( dword_10026A0C == 0 )
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

// Address: 0x1000AC0F
BOOL __fastcall __DllMainCRTStartup(void *a1, DWORD a2, HINSTANCE hinstDLL)
{
  BOOL v5; // eax
  BOOL v7; // [esp+10h] [ebp-1Ch]

  if ( a2 == 0 && dword_10026694 == 0 || (a2 == 1 || a2 == 2) && _CRT_INIT((int)hinstDLL, a2, (int)a1) == 0 )
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

// Address: 0x1000AD05
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return __DllMainCRTStartup(lpReserved, fdwReason, hinstDLL);
}

// Address: 0x1000AD30
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

// Address: 0x1000ADBB
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_1001C350, sizeof(dwExceptionCode));
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)pThrowInfo;
  if ( pThrowInfo != nullptr && (pThrowInfo->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}

// Address: 0x1000AE07
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x1000AE39
// ?_CallMemberFunction0@@YGXPAX0@Z
// doubtful name
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_1000AE39(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x1000AE40
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_27112, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x1000AE94
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *a2,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(a2, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x1000AECA
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

// Address: 0x1000AEFD
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

// Address: 0x1000AFD4
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

// Address: 0x1000B073
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

// Address: 0x1000B0E8
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 152);
  *(_DWORD *)(_getptd() + 152) = a1;
  return a1;
}

// Address: 0x1000B114
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

// Address: 0x1000B13B
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

// Address: 0x1000B18D
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x1000B1ED
_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1000B220
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1000B256
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

  dword_100267B0 = v0;
  dword_100267AC = v2;
  dword_100267A8 = v1;
  dword_100267A4 = v3;
  dword_100267A0 = v5;
  dword_1002679C = v4;
  word_100267C8 = __SS__;
  word_100267BC = __CS__;
  word_10026798 = __DS__;
  word_10026794 = __ES__;
  word_10026790 = __FS__;
  word_1002678C = __GS__;
  v6 = __readeflags();
  dword_100267C0 = v6;
  dword_100267B4 = vars0;
  dword_100267B8 = retaddr;
  dword_100267C4 = (int)&v10;
  dword_10026700 = 65537;
  dword_100266B4 = retaddr;
  dword_100266A8 = -1073740791;
  dword_100266AC = 1;
  dword_100266F8 = IsDebuggerPresent();
  sub_1000C49C(1);
  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( dword_100266F8 == 0 )
    sub_1000C49C(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x1000B360
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
         && dword_100282C4 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 1000B3BC case 0 }
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

// Address: 0x1000B6C5
int __cdecl _get_errno_from_oserr(int a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_10025040[2 * i] )
      return dword_10025044[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x1000B707
int *__cdecl _errno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 8);
  else
    return (int *)&unk_100251A8;
}

// Address: 0x1000B71A
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 12);
  else
    return (unsigned int *)&unk_100251AC;
}

// Address: 0x1000B72D
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

// Address: 0x1000B750
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

// Address: 0x1000B7B8
PVOID __cdecl _encode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_100251B0 != -1
    && (v6 = dword_100251B0, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x1000B82A
PVOID _encoded_null()
{
  return _encode_pointer(nullptr);
}

// Address: 0x1000B833
PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_100251B0 != -1
    && (v6 = dword_100251B0, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x1000B8A5
// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}

// Address: 0x1000B8AE
void *__set_flsgetvalue()
{
  void *Value; // esi

  Value = TlsGetValue(dwTlsIndex);
  if ( Value == nullptr )
  {
    Value = _decode_pointer(lpTlsValue);
    TlsSetValue(dwTlsIndex, Value);
  }
  return Value;
}

// Address: 0x1000B8E2
int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_100251B0 != -1 )
  {
    v2 = dword_100251B0;
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_100269D8);
    v0(v2);
    dword_100251B0 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}

// Address: 0x1000B91F
int __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleW; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]
  int savedregs; // [esp+2Ch] [ebp+0h]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
  hModule = ModuleHandleW;
  *(_DWORD *)(a1 + 92) = &unk_1001CA50;
  *(_DWORD *)(a1 + 20) = 1;
  if ( ModuleHandleW != nullptr )
  {
    *(_DWORD *)(a1 + 504) = GetProcAddress(ModuleHandleW, "EncodePointer");
    *(_DWORD *)(a1 + 508) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 200) = 67;
  *(_BYTE *)(a1 + 331) = 67;
  *(_DWORD *)(a1 + 104) = &unk_100251D0;
  _lock(13);
  InterlockedIncrement(*(volatile LONG **)(a1 + 104));
  _unlock(13);
  _lock(12);
  *(_DWORD *)(a1 + 108) = a2;
  if ( a2 == 0 )
    *(_DWORD *)(a1 + 108) = off_100257D8;
  __addlocaleref(*(volatile LONG **)(a1 + 108));
  savedregs = 268483048;
  return _unlock(12);
}

// Address: 0x1000BA06
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
  v9 = dword_100251B0;
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
      v8 = dword_100251B0;
      v5 = (int (__stdcall *)(int, DWORD *))_decode_pointer((void *)dword_100269D4);
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

// Address: 0x1000BA7F
DWORD *_getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( v0 == nullptr )
    _amsg_exit(16);
  return v0;
}

// Address: 0x1000BA99
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
    if ( *((_UNKNOWN **)Block + 23) != &unk_1001CA50 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = *((void **)Block + 26);
    if ( v1 != nullptr && InterlockedDecrement(*((volatile LONG **)Block + 26)) == 0 && v1 != &unk_100251D0 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = *((_DWORD **)Block + 27);
    if ( v2 != nullptr )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != (_DWORD *)off_100257D8 && v2 != (_DWORD *)&unk_10025700 && *v2 == 0 )
        __freetlocinfo(v2);
    }
    savedregs = 268483489;
    _unlock(12);
    free(Block);
  }
}

// Address: 0x1000BBC8
DWORD __cdecl _freeptd(void *Block)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_100251B0 != -1 )
  {
    if ( Block == nullptr && TlsGetValue(dwTlsIndex) != nullptr )
    {
      v4 = dword_100251B0;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      Block = (void *)Value(v4);
    }
    v5 = dword_100251B0;
    v2 = (void (__stdcall *)(int, _DWORD))_decode_pointer((void *)dword_100269D4);
    v2(v5, 0);
    _freefls(Block);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, nullptr);
  return result;
}

// Address: 0x1000BC36
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
    dword_100269D8 = (int)FlsFree;
    if ( FlsAlloc == nullptr || FlsGetValue == nullptr || FlsSetValue == nullptr || FlsFree == nullptr )
    {
      FlsGetValue = TlsGetValue;
      FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))__crtTlsAlloc;
      FlsSetValue = TlsSetValue;
      dword_100269D8 = (int)TlsFree;
    }
    v3 = TlsAlloc();
    dwTlsIndex = v3;
    if ( v3 == -1 || !TlsSetValue(v3, FlsGetValue) )
      return 0;
    _init_pointers();
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))_encode_pointer(FlsAlloc);
    FlsGetValue = (PVOID (__stdcall *)(DWORD))_encode_pointer(FlsGetValue);
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))_encode_pointer(FlsSetValue);
    dword_100269D8 = (int)_encode_pointer((void *)dword_100269D8);
    if ( _mtinitlocks() != 0 )
    {
      v4 = (int (__stdcall *)(_DWORD))_decode_pointer(FlsAlloc);
      dword_100251B0 = v4(_freefls);
      if ( dword_100251B0 != -1 )
      {
        v5 = (DWORD *)_calloc_crt(1u, 532);
        v6 = v5;
        if ( v5 != nullptr )
        {
          v11 = v5;
          v10 = dword_100251B0;
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

// Address: 0x1000BDC3
void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr || dword_100269DC == 0 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_100269DC )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}

// Address: 0x1000BE08
int __cdecl _calloc_crt(size_t Size, int a2)
{
  DWORD v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = _calloc_impl(Size, a2, 0);
    if ( v3 != 0 || dword_100269DC == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_100269DC )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1000BE54
void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 != nullptr || Size == 0 || dword_100269DC == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_100269DC )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1000BEA2
void *__cdecl _recalloc_crt(void *Block, size_t Count, size_t Size)
{
  DWORD v3; // esi
  void *v4; // edi
  int v5; // eax

  v3 = 0;
  do
  {
    v4 = _recalloc(Block, Count, Size);
    if ( v4 != nullptr || Size == 0 || dword_100269DC == 0 )
      break;
    Sleep(v3);
    v5 = v3 + 1000;
    if ( v3 + 1000 > dword_100269DC )
      v5 = -1;
    v3 = v5;
  }
  while ( v5 != -1 );
  return v4;
}

// Address: 0x1000BEF4
size_t __cdecl _msize(void *Block)
{
  size_t v2; // esi
  int v3; // [esp+10h] [ebp-20h]
  int v4; // [esp+14h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_100283F8 != 3 )
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

// Address: 0x1000BF97
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

// Address: 0x1000BFC7
int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer(off_100251B8);
  return v1(255);
}

// Address: 0x1000BFF0
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

// Address: 0x1000C01B
void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x1000C033
int _lockexit()
{
  return _lock(8);
}

// Address: 0x1000C03C
int _unlockexit()
{
  return _unlock(8);
}

// Address: 0x1000C045
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

// Address: 0x1000C062
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

// Address: 0x1000C086
int __cdecl _cinit(int a1)
{
  int result; // eax
  _PVFV *savedregs; // [esp+4h] [ebp+0h]

  if ( _fpmath != nullptr && _IsNonwritableInCurrentImage(&off_100225B8) != 0 )
    _fpmath(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&dword_1001C23C, (_PIFV *)&Last);
  if ( result == 0 )
  {
    atexit(sub_10011859);
    _initterm((_PVFV *)&First, savedregs);
    if ( dword_10028410 != nullptr && _IsNonwritableInCurrentImage(&dword_10028410) != 0 )
      dword_10028410(0, 2, 0);
    return 0;
  }
  return result;
}

// Address: 0x1000C10B
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
  if ( dword_10026A10 != 1 )
  {
    dword_10026A0C = 1;
    byte_10026A08 = a3;
    if ( a2 == 0 )
    {
      v3 = (void **)_decode_pointer((void *)dword_10028408);
      v9 = v3;
      if ( v3 != nullptr )
      {
        v4 = (void **)_decode_pointer((void *)dword_10028404);
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
            v6 = (void **)_decode_pointer((void *)dword_10028408);
            v7 = (void **)_decode_pointer((void *)dword_10028404);
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
      _initterm((_PVFV *)&dword_1001C260, v8);
    }
    _initterm((_PVFV *)&dword_1001C268, v8);
  }
  if ( a3 != 0 )
    _unlock(8);
  if ( a3 == 0 )
  {
    dword_10026A10 = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
}

// Address: 0x1000C237
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x1000C24D
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x1000C25C
void (__cdecl __noreturn *_init_pointers())(int Code)
{
  PVOID v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null();
  sub_1000C998(v0);
  sub_100131AE(v0);
  sub_1000A086((int)v0);
  sub_10011118(v0);
  sub_1001319F(v0);
  _initp_misc_winsig(v0);
  nullsub_1(v0);
  _initp_eh_hooks(v0);
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit);
  off_100251B8 = result;
  return result;
}

// Address: 0x1000C2AC
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_10012ED0;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1000C2F1
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { retn }
}

// Address: 0x1000C310
int __cdecl SEH_10012ED0(int a1, _DWORD *TargetFrame, int a3)
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
            && _IsNonwritableInCurrentImage(&off_1001CAC8) != 0 )
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

// Address: 0x1000C49C
void sub_1000C49C()
{
  dword_100283FC = 0;
}

// Address: 0x1000C4B0
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
  if ( (_BYTE)Val == 0 && Size >= 0x100 && dword_100282C4 != 0 )
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

// Address: 0x1000C530
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
         && dword_100282C4 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 1000C58C case 0 }
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

// Address: 0x1000C895
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
    v3 = &unk_10026A14;
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

// Address: 0x1000C910
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

// Address: 0x1000C998
int __cdecl sub_1000C998(int a1)
{
  dword_10026A1C = a1;
  return a1;
}

// Address: 0x1000C9A7
int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))_decode_pointer((void *)dword_10026A1C);
  return v1 != nullptr && v1(Size) != 0;
}

// Address: 0x1000C9CF
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
    && (v2 != (FILE *)(sub_10013EB3() + 32) && v2 != (FILE *)(sub_10013EB3() + 64) || _isatty((int)File) == 0) )
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
        v9 = &unk_100259D0;
      else
        v9 = (_BYTE *)(dword_100282E0[(int)File >> 5] + (((unsigned __int8)File & 0x1F) << 6));
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

// Address: 0x1000CB33
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
  __int16 v50; // [esp-4h] [ebp-484h]
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
  __int16 v63; // [esp+48h] [ebp-438h]
  __int16 v64; // [esp+4Ah] [ebp-436h]
  char SrcCh[4]; // [esp+4Ch] [ebp-434h] BYREF
  int v66; // [esp+50h] [ebp-430h]
  int v67; // [esp+54h] [ebp-42Ch]
  int v68; // [esp+58h] [ebp-428h]
  int v69; // [esp+5Ch] [ebp-424h]
  int v70; // [esp+60h] [ebp-420h]
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
  v66 = a1;
  v71 = (int)a4;
  v59 = 0;
  v76 = 0;
  v67 = 0;
  v75 = 0;
  v69 = 0;
  v62 = 0;
  v68 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  if ( v66 == 0 || a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    goto LABEL_3;
  }
  v7 = *a2;
  v8 = 0;
  v70 = 0;
  v73 = 0;
  Block = nullptr;
  v72 = v7;
  if ( (_WORD)v7 == 0 )
  {
LABEL_210:
    if ( v58 != 0 )
      *(_DWORD *)(v57 + 112) &= ~2u;
    return v70;
  }
  while ( 2 )
  {
    v9 = v5 + 1;
    v61 = v9;
    if ( v70 < 0 )
      goto LABEL_210;
    if ( (unsigned __int16)(v7 - 32) > 0x58u )
      v10 = 0;
    else
      v10 = *((_BYTE *)&off_1001D1F8 + (unsigned __int16)v7) & 0xF;
    v55 = byte_1001D218[8 * v10 + v8] >> 4;
    switch ( v55 )
    {
      case 0:
        goto $NORMAL_STATE$29479;
      case 1:
        v75 = -1;
        v54 = 0;
        v62 = 0;
        v67 = 0;
        v69 = 0;
        v76 = 0;
        v68 = 0;
        goto LABEL_207;
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
            break;
        }
        goto LABEL_207;
      case 3:
        if ( (_WORD)v7 == 42 )
        {
          v71 = (int)(v4 + 2);
          v67 = *(_DWORD *)v4;
          if ( v67 < 0 )
          {
            v76 |= 4u;
            v67 = -v67;
          }
        }
        else
        {
          v67 = 10 * v67 + (unsigned __int16)v7 - 48;
        }
        goto LABEL_207;
      case 4:
        v75 = 0;
        goto LABEL_207;
      case 5:
        if ( (_WORD)v7 == 42 )
        {
          v71 = (int)(v4 + 2);
          v75 = *(_DWORD *)v4;
          if ( v75 < 0 )
            v75 = -1;
        }
        else
        {
          v75 = 10 * v75 + (unsigned __int16)v7 - 48;
        }
        goto LABEL_207;
      case 6:
        switch ( (unsigned __int16)v7 )
        {
          case 'I':
            v11 = *v9;
            if ( *v9 == 54 && v9[1] == 52 )
            {
              v76 |= 0x8000u;
              v61 = v9 + 2;
            }
            else if ( v11 == 51 && v9[1] == 50 )
            {
              v76 &= ~0x8000u;
              v61 = v9 + 2;
            }
            else if ( v11 != 100 && v11 != 105 && v11 != 111 && v11 != 117 && v11 != 120 && v11 != 88 )
            {
              v55 = 0;
$NORMAL_STATE$29479:
              v68 = 1;
              write_char(v7);
            }
            break;
          case 'h':
            v76 |= 0x20u;
            break;
          case 'l':
            if ( *v9 == 108 )
            {
              v76 |= 0x1000u;
              v61 = v9 + 1;
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
                v71 = (int)(v4 + 2);
                if ( v17 != nullptr && (v18 = *((char **)v17 + 1)) != nullptr )
                {
                  v19 = *v17;
                  v74 = v18;
                  if ( (v76 & 0x800) != 0 )
                  {
                    v20 = v19 - (v19 >> 31);
                    v68 = 1;
LABEL_178:
                    v19 = v20 >> 1;
                    goto LABEL_179;
                  }
                  v68 = 0;
                }
                else
                {
                  v74 = Str;
                  v19 = strlen(Str);
                }
LABEL_179:
                v73 = v19;
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
            v72 = 16;
            if ( (v76 & 0x80u) != 0 )
            {
              v63 = 48;
              v64 = v59 + 81;
              v69 = 2;
            }
$COMMON_INT$29621:
            if ( (v76 & 0x8000) != 0 || (v76 & 0x1000) != 0 )
            {
              v22 = *(_QWORD *)v4;
              v23 = v4 + 4;
            }
            else
            {
              v23 = v4 + 2;
              if ( (v76 & 0x20) != 0 )
              {
                v71 = (int)v23;
                if ( (v76 & 0x40) != 0 )
                  LODWORD(v22) = (__int16)*(v23 - 2);
                else
                  LODWORD(v22) = *(v23 - 2);
                v22 = (int)v22;
LABEL_150:
                if ( (v76 & 0x40) != 0 && v22 < 0 )
                {
                  v22 = -v22;
                  v76 |= 0x100u;
                }
                v32 = HIDWORD(v22);
                v33 = v22;
                if ( (v76 & 0x9000) == 0 )
                  v32 = 0;
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
                if ( (v32 | (unsigned int)v22) == 0 )
                  v69 = 0;
                for ( i = v78; ; --i )
                {
                  v35 = v75--;
                  if ( v35 <= 0 && (v32 | v33) == 0 )
                    break;
                  v36 = __PAIR64__(v32, v33) % v72 + 48;
                  v37 = __PAIR64__(v32, v33) / v72;
                  v32 = HIDWORD(v37);
                  v33 = v37;
                  if ( v36 > 57 )
                    LOBYTE(v36) = v59 + v36;
                  *i = v36;
                }
                v38 = (_BYTE *)(v78 - i);
                v39 = i + 1;
                v73 = (int)v38;
                v74 = v39;
                if ( (v76 & 0x200) != 0 && (v38 == nullptr || *v39 != 48) )
                {
                  *--v74 = 48;
                  v19 = (signed int)(v38 + 1);
                  goto LABEL_179;
                }
                goto LABEL_180;
              }
              LODWORD(v22) = *((_DWORD *)v23 - 1);
              if ( (v76 & 0x40) != 0 )
                v22 = (int)v22;
              else
                HIDWORD(v22) = 0;
            }
            v71 = (int)v23;
            goto LABEL_150;
          }
          switch ( (unsigned __int16)v7 )
          {
            case 'S':
              if ( (v76 & 0x830) == 0 )
                v76 |= 0x20u;
LABEL_71:
              v13 = v75;
              if ( v75 == -1 )
                v13 = 0x7FFFFFFF;
              v71 = (int)(v4 + 2);
              v14 = *(char **)v4;
              v74 = v14;
              if ( (v76 & 0x20) == 0 )
              {
                if ( v14 == nullptr )
                  v74 = (char *)off_10025CFC[0];
                v40 = v74;
                v68 = 1;
                while ( v13 != 0 )
                {
                  --v13;
                  if ( *(_WORD *)v40 == 0 )
                    break;
                  v40 += 2;
                }
                v20 = v40 - v74;
                goto LABEL_178;
              }
              if ( v14 == nullptr )
                v74 = Str;
              v73 = 0;
              for ( j = v74; v73 < v13; ++v73 )
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
              if ( (v76 & 0x830) == 0 )
                v76 |= 0x20u;
LABEL_86:
              v16 = *v4;
              v68 = 1;
              v71 = (int)(v4 + 2);
              *(_DWORD *)v53 = v16;
              if ( (v76 & 0x20) != 0 )
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
              v74 = (char *)DstCh;
              v73 = 1;
              break;
            case 'E':
            case 'G':
LABEL_64:
              v7 += 32;
              v54 = 1;
              v72 = v7;
LABEL_65:
              v76 |= 0x40u;
              v12 = (const char *)DstCh;
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
                    v24 = v75 + 349;
                    v25 = _malloc_crt(v75 + 349);
                    LOBYTE(v7) = v72;
                    Block = v25;
                    if ( v25 != nullptr )
                    {
                      v74 = (char *)v25;
                      v73 = v24;
                      v12 = (const char *)v25;
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
              v26 = *(_DWORD *)v4;
              v27 = v4 + 4;
              v52[0] = v26;
              v52[1] = *((_DWORD *)v27 - 1);
              v49 = v54;
              v48 = v75;
              v71 = (int)v27;
              v47 = (char)v7;
              v46 = v73;
              v28 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_10025A68[0]);
              v28(v52, v12, v46, v47, v48, v49, &Locale);
              v29 = v76 & 0x80;
              if ( (v76 & 0x80) != 0 && v75 == 0 )
              {
                v30 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_10025A74);
                v30(v12, &Locale);
              }
              if ( (_WORD)v72 == 103 && v29 == 0 )
              {
                v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_10025A70[0]);
                v31(v12, &Locale);
              }
              if ( *v12 == 45 )
              {
                v76 |= 0x100u;
                v74 = (char *)++v12;
              }
              v19 = strlen(v12);
              goto LABEL_179;
            default:
              break;
          }
LABEL_180:
          if ( v62 != 0 )
            goto LABEL_205;
          if ( (v76 & 0x40) != 0 )
          {
            if ( (v76 & 0x100) != 0 )
            {
              v50 = 45;
LABEL_188:
              v63 = v50;
              v69 = 1;
              goto LABEL_189;
            }
            if ( (v76 & 1) != 0 )
            {
              v50 = 43;
              goto LABEL_188;
            }
            if ( (v76 & 2) != 0 )
            {
              v50 = 32;
              goto LABEL_188;
            }
          }
LABEL_189:
          v41 = v73;
          v42 = v67 - v73 - v69;
          if ( (v76 & 0xC) == 0 )
            write_multi_char(32, v67 - v73 - v69, v66);
          v43 = v66;
          write_string(v69);
          if ( (v76 & 8) != 0 && (v76 & 4) == 0 )
            write_multi_char(48, v42, v43);
          if ( v68 != 0 || v41 <= 0 )
          {
            write_string(v41);
          }
          else
          {
            v44 = v74;
            v72 = v41;
            while ( 1 )
            {
              --v72;
              v51 = _mbtowc_l(v53, v44, *((_DWORD *)Locale.locinfo + 43), &Locale);
              if ( v51 <= 0 )
                break;
              write_char(*(_DWORD *)v53);
              v44 += v51;
              if ( v72 <= 0 )
                goto LABEL_202;
            }
            v70 = -1;
          }
LABEL_202:
          if ( v70 >= 0 && (v76 & 4) != 0 )
            write_multi_char(32, v42, v66);
LABEL_205:
          if ( Block != nullptr )
          {
            free(Block);
            Block = nullptr;
          }
LABEL_207:
          v5 = v61;
          v45 = *v61;
          v72 = v45;
          if ( (_WORD)v45 == 0 )
            goto LABEL_210;
          v8 = v55;
          v4 = (unsigned __int16 *)v71;
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
          v75 = 8;
          goto LABEL_133;
        }
        if ( (unsigned __int16)v7 < 0x65u )
          goto LABEL_180;
        if ( (unsigned __int16)v7 <= 0x67u )
          goto LABEL_65;
        if ( (unsigned __int16)v7 == 105 )
        {
LABEL_111:
          v76 |= 0x40u;
LABEL_112:
          v72 = 10;
          goto $COMMON_INT$29621;
        }
        if ( (unsigned __int16)v7 != 110 )
        {
          if ( (unsigned __int16)v7 != 111 )
            goto LABEL_180;
          v72 = 8;
          if ( (v76 & 0x80u) != 0 )
            v76 |= 0x200u;
          goto $COMMON_INT$29621;
        }
        v21 = *(_WORD **)v4;
        v71 = (int)(v4 + 2);
        if ( _get_printf_count_output() != 0 )
        {
          if ( (v76 & 0x20) != 0 )
            *v21 = v70;
          else
            *(_DWORD *)v21 = v70;
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

// Address: 0x1000D6CB
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

// Address: 0x1000D6FA
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

// Address: 0x1000D721
__int16 __usercall write_string@<ax>(int *a1@<eax>, wchar_t *a2@<ecx>, int a3@<edi>, int a4)
{
  int *v4; // esi

  v4 = a1;
  if ( (*(_BYTE *)(a3 + 12) & 0x40) == 0 || *(_DWORD *)(a3 + 8) != 0 )
  {
    while ( a4 > 0 )
    {
      --a4;
      LOWORD(a1) = write_char(a3, v4, *a2++);
      if ( *v4 == -1 )
      {
        a1 = _errno();
        if ( *a1 != 42 )
          return (__int16)a1;
        LOWORD(a1) = write_char(a3, v4, 0x3Fu);
      }
    }
  }
  else
  {
    *a1 += a4;
    LOWORD(a1) = a4;
  }
  return (__int16)a1;
}

// Address: 0x1000D773
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
  wchar_t v51; // [esp-4h] [ebp-484h]
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
  wchar_t v66[2]; // [esp+50h] [ebp-430h] BYREF
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
      v8 = byte_1001D258[(unsigned __int16)v7] & 0xF;
    v9 = (unsigned __int8)byte_1001D278[9 * v8 + v65] >> 4;
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
          v29 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_10025A68[0]);
          v29(v53, v13, v47, v48, v49, v50, &Locale);
          v30 = v76 & 0x80;
          if ( (v76 & 0x80) != 0 && v75 == 0 )
          {
            v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_10025A74);
            v31(v13, &Locale);
          }
          if ( (_WORD)v71 == 103 && v30 == 0 )
          {
            v32 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_10025A70[0]);
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
            v74 = (char *)off_10025CFC[0];
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
                write_string(&v70, (wchar_t *)v74, v44, v42);
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

// Address: 0x1000E313
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

// Address: 0x1000E32D
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

// Address: 0x1000E387
int __cdecl _hextodec(unsigned __int16 a1)
{
  if ( (a1 & 0xFF00) != 0 || isdigit((unsigned __int8)a1) == 0 )
    return (a1 & 0xFFDF) - 7;
  else
    return a1;
}

// Address: 0x1000E3BD
wint_t __cdecl _un_inc(wint_t Character, FILE *Stream)
{
  wint_t result; // ax

  result = -1;
  if ( Character != 0xFFFF )
    return _ungetwc_nolock(Character, Stream);
  return result;
}

// Address: 0x1000E3D5
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

// Address: 0x1000E407
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
              v30 = (void (__cdecl *)(int, char *, char *, __crt_locale_pointers *))_decode_pointer(off_10025A6C[0]);
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

// Address: 0x1000F628
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

// Address: 0x1000F657
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
  v3 = &unk_100251D0 - (_UNKNOWN *)a1;
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

// Address: 0x1000F6BB
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

// Address: 0x1000F84E
volatile LONG *__updatetmbcinfo()
{
  DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = _getptd();
  if ( (dword_100256F4 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != lpAddend )
    {
      if ( v1 != nullptr && InterlockedDecrement(v1) == 0 && v1 != (volatile LONG *)&unk_100251D0 )
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

// Address: 0x1000F8F2
UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, nullptr);
  dword_10026A20 = 0;
  switch ( a1 )
  {
    case -2:
      dword_10026A20 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_10026A20 = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_10026A20 = 1;
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

// Address: 0x1000F96E
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
      if ( dword_10025600[i] == SystemCP )
      {
        memset(a2 + 7, 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_10025610 + 48 * v19;
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
              *((_BYTE *)a2 + v10 + 29) |= byte_100255FC[v18];
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
        v13 = (_WORD *)((char *)&unk_10025604 + v12);
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
    if ( dword_10026A20 == 0 )
      return -1;
  }
  setSBCS(a2);
  return 0;
}

// Address: 0x1000FB53
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
        if ( v4 != (_DWORD *)&unk_100251D0 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( InterlockedDecrement((volatile LONG *)v1[26]) == 0 && (_UNKNOWN *)v1[26] != &unk_100251D0 )
        free((void *)v1[26]);
      v1[26] = (DWORD)v4;
      InterlockedIncrement(v4);
      if ( (v1[28] & 2) == 0 && (dword_100256F4 & 1) == 0 )
      {
        _lock(13);
        dword_10026A30 = v4[1];
        dword_10026A34 = v4[2];
        dword_10026A38 = v4[3];
        for ( i = 0; i < 5; ++i )
          word_10026A24[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_100253F0[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_100254F8[k] = *((_BYTE *)v4 + k + 285);
        if ( InterlockedDecrement(lpAddend) == 0 && lpAddend != (volatile LONG *)&unk_100251D0 )
          free((void *)lpAddend);
        lpAddend = v4;
        InterlockedIncrement(v4);
        _unlock(13);
      }
    }
  }
  return v10;
}

// Address: 0x1000FCED
int __initmbctable()
{
  if ( dword_1002840C == 0 )
  {
    _setmbcp(-3);
    dword_1002840C = 1;
  }
  return 0;
}

// Address: 0x1000FD0B
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
  if ( v2 != nullptr && v2 != &off_10025DC8 )
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
  if ( (_UNKNOWN **)v7 != &off_10025D08 && *(_DWORD *)(v7 + 180) == 0 )
  {
    __free_lc_time(*((_DWORD *)Block + 53));
    free(*((void **)Block + 53));
  }
  v8 = (void **)(Block + 80);
  for ( Blocka = 6; Blocka != 0; --Blocka )
  {
    if ( *(v8 - 2) != &unk_100256F8 && *v8 != nullptr && *(_DWORD *)*v8 == 0 )
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

// Address: 0x1000FE54
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
    if ( *(v2 - 2) != (volatile LONG *)&unk_100256F8 && *v2 != nullptr )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
      InterlockedIncrement(v2[1]);
    v2 += 4;
  }
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}

// Address: 0x1000FEE3
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
      if ( *(v2 - 2) != (volatile LONG *)&unk_100256F8 && *v2 != nullptr )
        InterlockedDecrement(*v2);
      if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
        InterlockedDecrement(v2[1]);
      v2 += 4;
    }
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
  }
  return lpAddend;
}

// Address: 0x1000FF7C
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
      if ( *v2 == 0 && v2 != (volatile LONG *)&unk_10025700 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}

// Address: 0x1000FFBA
DWORD __updatetlocinfo()
{
  DWORD *v0; // esi
  DWORD v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_100256F4 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = _getptd()[27];
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)v0 + 27, (volatile LONG *)off_100257D8);
    _unlock(12);
    v1 = (DWORD)v3;
  }
  if ( v1 == 0 )
    _amsg_exit(32);
  return v1;
}

// Address: 0x10010030
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

// Address: 0x100100E5
int __cdecl _heap_init(int a1)
{
  int result; // eax

  result = (int)HeapCreate(a1 == 0, 0x1000u, 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    dword_100283F8 = 1;
    return 1;
  }
  return result;
}

// Address: 0x10010115
BOOL _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi
  BOOL result; // eax

  if ( dword_100283F8 == 3 )
  {
    v0 = 0;
    if ( dword_100283E0 > 0 )
    {
      v1 = (LPVOID *)((char *)lpMem + 16);
      do
      {
        VirtualFree(*(v1 - 1), 0, 0x8000u);
        HeapFree(hHeap, 0, *v1);
        v1 += 5;
        ++v0;
      }
      while ( v0 < dword_100283E0 );
    }
    HeapFree(hHeap, 0, lpMem);
  }
  result = HeapDestroy(hHeap);
  hHeap = nullptr;
  return result;
}

// Address: 0x10010189
int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_10026A68;
  while ( 1 )
  {
    if ( dword_100257F4[2 * v0] == 1 )
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

// Address: 0x100101D4
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
  while ( (int)v0 < (int)&dword_10025910 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 != nullptr && v2[1] == (LPCRITICAL_SECTION)1 )
      DeleteCriticalSection(*v2);
    v2 += 2;
  }
  while ( (int)v2 < (int)&dword_10025910 );
}

// Address: 0x1001022B
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}

// Address: 0x10010242
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

// Address: 0x10010305
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 == nullptr && _mtinitlocknum(a1) == 0 )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}

// Address: 0x10010338
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 20 * dword_100283E0; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x10010368
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
      if ( dword_10026BB8 != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_10026BB8 + 3) + (dword_100283F4 << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_10026BB8 + 2) |= 0x80000000 >> dword_100283F4;
        *(_DWORD *)(*((_DWORD *)dword_10026BB8 + 4) + 4 * dword_100283F4 + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_10026BB8 + 4) + 67);
        v20 = (LPVOID *)dword_10026BB8;
        if ( *(_BYTE *)(*((_DWORD *)dword_10026BB8 + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_10026BB8 + 1) &= ~1u;
          v20 = (LPVOID *)dword_10026BB8;
        }
        if ( v20[2] == (LPVOID)-1 )
        {
          VirtualFree(v20[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_10026BB8 + 4));
          memcpy(
            dword_10026BB8,
            (char *)dword_10026BB8 + 20,
            (size_t)lpMem + 20 * dword_100283E0 - (_DWORD)dword_10026BB8 - 20);
          --dword_100283E0;
          if ( a1 > dword_10026BB8 )
            a1 -= 5;
          dword_100283EC = (int)lpMem;
        }
      }
      dword_10026BB8 = a1;
      dword_100283F4 = v4;
      return a1;
    }
  }
  return result;
}

// Address: 0x1001067E
char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v0 = dword_100283E0;
  if ( dword_100283E0 == dword_100283F0 )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_100283F0 + 16));
    if ( v1 == nullptr )
      return nullptr;
    dword_100283F0 += 16;
    v0 = dword_100283E0;
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
  ++dword_100283E0;
  **((_DWORD **)v3 + 4) = -1;
  return v3;
}

// Address: 0x1001072E
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

// Address: 0x10010836
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

// Address: 0x10010B17
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

  v1 = (char *)lpMem + 20 * dword_100283E0;
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
  for ( i = (char *)dword_100283EC; ; i += 20 )
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
      if ( (unsigned int)i >= dword_100283EC || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
        break;
    }
    if ( i == (char *)dword_100283EC )
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
          if ( (unsigned int)i >= dword_100283EC || *((_DWORD *)i + 2) != 0 )
            break;
        }
        if ( i == (char *)dword_100283EC )
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
  dword_100283EC = (int)i;
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
  if ( v24 == 0 && i == dword_10026BB8 && v31 == dword_100283F4 )
    dword_10026BB8 = nullptr;
  *v6 = v31;
  return v23 + 1;
}

// Address: 0x10010DFC
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
    if ( a1 == dword_10025910[2 * v1] )
      break;
    v8 = ++v1;
  }
  while ( v1 < 0x17 );
  if ( v1 < 0x17 )
  {
    if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_100266A4 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v4 = StdHandle;
      if ( StdHandle != nullptr && StdHandle != (HANDLE)-1 )
      {
        v5 = (const char **)&(&off_10025914)[2 * v1];
        v6 = strlen(*v5);
        WriteFile(v4, *v5, v6, &NumberOfBytesWritten, nullptr);
      }
    }
    else if ( a1 != 252 )
    {
      if ( strcpy_s(Destination, 0x314u, "Runtime Error!\n\nProgram: ") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      byte_10026CDD = 0;
      if ( GetModuleFileNameA(nullptr, Filename, 0x104u) == 0
        && strcpy_s(Filename, 0x2FBu, "<program name unknown>") != 0 )
      {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strlen(Filename) + 1 > 0x3C )
      {
        v2 = strlen(Filename);
        if ( strncpy_s(&Filename[v2 - 59], (char *)&dword_10026ED4 - &Filename[v2 - 59], "...", 3u) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strcat_s(Destination, 0x314u, "\n\n") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcat_s(Destination, 0x314u, (&off_10025914)[2 * v8]) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      sub_10015927(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
}

// Address: 0x10010FA7
void _FF_MSGBANNER()
{
  if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_100266A4 == 1 )
  {
    _NMSG_WRITE(252);
    _NMSG_WRITE(255);
  }
}

// Address: 0x10010FE0
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

  if ( (dword_100259C8 & 1) != 0 )
    _NMSG_WRITE(10);
  v1 = sub_10012FE2();
  if ( v1 != 0 )
  {
    v1 = raise(22);
    v3 = v5;
  }
  if ( (dword_100259C8 & 2) != 0 )
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

// Address: 0x100110F7
unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_100259C8;
  dword_100259C8 = Mask & Flags | dword_100259C8 & ~Mask;
  return result;
}

// Address: 0x10011118
int __cdecl sub_10011118(int a1)
{
  dword_10026EE0 = a1;
  return a1;
}

// Address: 0x10011127
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
  dword_100282E0[0] = v0;
  uNumber = 32;
  for ( i = v0 + 2048; v0 < i; i = dword_100282E0[0] + 2048 )
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
      v5 = &dword_100282E0[k];
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
        v7 = dword_100282E0[k >> 5] + ((k & 0x1F) << 6);
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
    v9 = dword_100282E0[0] + (m << 6);
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

// Address: 0x1001137B
void _ioterm()
{
  void **v0; // esi
  char *v1; // edi
  unsigned int i; // eax

  v0 = (void **)dword_100282E0;
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
  while ( (int)v0 < (int)&dword_100283E0 );
}

// Address: 0x100113C9
int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( dword_1002840C == 0 )
    __initmbctable();
  v0 = dword_10026698;
  v1 = 0;
  if ( dword_10026698 != nullptr )
  {
    while ( *v0 != 0 )
    {
      if ( *v0 != 61 )
        ++v1;
      v0 += strlen(v0) + 1;
    }
    v3 = (char **)_calloc_crt(v1 + 1, 4);
    dword_100269F0 = v3;
    if ( v3 != nullptr )
    {
      for ( i = dword_10026698; ; i += v6 )
      {
        if ( *i == 0 )
        {
          free(dword_10026698);
          dword_10026698 = nullptr;
          *v3 = nullptr;
          dword_10028400 = 1;
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
      free(dword_100269F0);
      dword_100269F0 = nullptr;
      return -1;
    }
  }
  return -1;
}

// Address: 0x100114A7
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

// Address: 0x10011641
int _setargv()
{
  int v0; // edi
  size_t v1; // eax
  char **v2; // esi
  size_t v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( dword_1002840C == 0 )
    __initmbctable();
  byte_10026FEC = 0;
  GetModuleFileNameA(nullptr, byte_10026EE8, 0x104u);
  dword_10026A00 = (int)byte_10026EE8;
  if ( dword_10028414 == 0 || (v6 = (char *)dword_10028414, *(_BYTE *)dword_10028414 == 0) )
    v6 = byte_10026EE8;
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
  dword_100269E4 = v5 - 1;
  dword_100269E8 = (int)v2;
  return 0;
}

// Address: 0x100116FC
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

  v0 = dword_10026FF0;
  v1 = nullptr;
  EnvironmentStringsW = nullptr;
  if ( dword_10026FF0 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      dword_10026FF0 = 1;
      goto LABEL_8;
    }
    if ( GetLastError() == 120 )
    {
      v0 = 2;
      dword_10026FF0 = 2;
    }
    else
    {
      v0 = dword_10026FF0;
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

// Address: 0x10011833
void *sub_10011833()
{
  return &unk_10022D88;
}

// Address: 0x10011859
void __cdecl sub_10011859()
{
  ;
}

// Address: 0x1001187F
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
    while ( v5 < &v4[3 * dword_10025A1C] );
    if ( v5 < &v4[3 * dword_10025A1C] && *v5 == a1 )
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
            v9 = dword_10025A10;
            if ( dword_10025A10 < dword_10025A10 + dword_10025A14 )
            {
              v10 = 12 * dword_10025A10;
              do
              {
                *(_DWORD *)(v10 + v3[23] + 8) = 0;
                ++v9;
                v10 += 12;
              }
              while ( v9 < dword_10025A10 + dword_10025A14 );
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

// Address: 0x100119DF
int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}

// Address: 0x100119FF
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
    dword_10025034 = ~v4;
  }
  else
  {
    dword_10025034 = ~__security_cookie;
  }
}

// Address: 0x10011A95
std::exception *__thiscall sub_10011A95(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x10011AB3
void __thiscall sub_10011AB3(void *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_10009F04(this);
}

// Address: 0x10011ABE
_DWORD *__thiscall sub_10011ABE(_DWORD *this, char a2)
{
  *this = &std::bad_exception::`vftable';
  sub_10009F04(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10011AE5
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

// Address: 0x10011B44
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

// Address: 0x10011B8D
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

// Address: 0x10011C6E
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

// Address: 0x10011CB3
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
        sub_1000AE39(a1[6], v2);
    }
  }
}

// Address: 0x10011D08
int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2;
  if ( (int)a2[1] >= 0 )
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]);
  return result;
}

// Address: 0x10011D31
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

// Address: 0x10011DAC
void __cdecl __noreturn CallUnexpected()
{
  if ( _getptd()[37] != 0 )
    _inconsistency();
  unexpected();
}

// Address: 0x10011DF5
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

// Address: 0x10011F91
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

// Address: 0x10012110
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
      return sub_1000AE39((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_1000AE39((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x100121A2
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

// Address: 0x10012210
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

// Address: 0x10012304
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
                sub_10011A95((std::exception *)pExceptionObject, "bad exception");
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

// Address: 0x1001264B
std::exception *__thiscall sub_1001264B(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x10012668
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

// Address: 0x1001274E
void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[30];
  if ( v0 != nullptr )
    v0();
  abort();
}

// Address: 0x10012787
void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[31];
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1001279A
void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer((void *)dword_10026FF4);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x100127D2
PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = _encode_pointer(terminate);
  dword_10026FF4 = (int)result;
  return result;
}

// Address: 0x100127F0
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

// Address: 0x1001283C
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

// Address: 0x100128C3
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

// Address: 0x100129A6
int has_osfxsr_set()
{
  return 1;
}

// Address: 0x100129F6
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

// Address: 0x10012A58
int sub_10012A58()
{
  dword_100282C4 = _get_sse2_info();
  return 0;
}

// Address: 0x10012A65
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
      if ( dword_10026ED4 == 0 )
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
    if ( dword_100283F8 == 3 )
    {
      v4 = (v4 + 15) & 0xFFFFFFF0;
      if ( Sizea <= dword_100283E8 )
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

// Address: 0x10012B83
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
    if ( dword_100283F8 == 3 )
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
          if ( v3 <= dword_100283E8 )
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
        if ( dword_10026ED4 == 0 )
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
        if ( dword_10026ED4 == 0 )
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

// Address: 0x10012D9E
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

// Address: 0x10012E19
int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    v1 = &off_10025A50[i];
    result = (int (*)())_encode_pointer(off_10025A50[i]);
    *v1 = result;
  }
  return result;
}

// Address: 0x10012E40
BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  return *(_WORD *)a1 == 23117 && *(_DWORD *)(v2 = a1 + *(_DWORD *)(a1 + 60)) == 17744 && *(_WORD *)(v2 + 24) == 267;
}

// Address: 0x10012E80
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

// Address: 0x10012ED0
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000)
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x10012F8D
int __cdecl _initp_misc_winsig(int a1)
{
  dword_10026FF8 = a1;
  dword_10026FFC = a1;
  dword_10027000 = a1;
  dword_10027004 = a1;
  return a1;
}

// Address: 0x10012FAB
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
  while ( result < a2 + 12 * dword_10025A1C );
  if ( result >= a2 + 12 * dword_10025A1C || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}

// Address: 0x10012FE2
PVOID sub_10012FE2()
{
  return _decode_pointer((void *)dword_10027000);
}

// Address: 0x10012FEF
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
      v4 = &dword_10027004;
      v5 = (void *)dword_10027004;
      goto LABEL_18;
    }
    if ( Signal == 21 )
    {
      v4 = &dword_10026FFC;
      v5 = (void *)dword_10026FFC;
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
      v4 = &dword_10026FF8;
      v5 = (void *)dword_10026FF8;
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
      v4 = &dword_10027000;
      v5 = (void *)dword_10027000;
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
    for ( i = dword_10025A10; i < dword_10025A10 + dword_10025A14; ++i )
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

// Address: 0x1001319F
int __cdecl sub_1001319F(int a1)
{
  dword_1002700C = a1;
  return a1;
}

// Address: 0x100131AE
int __cdecl sub_100131AE(int a1)
{
  dword_10027010 = a1;
  return a1;
}

// Address: 0x100131BD
BOOL __cdecl __crtInitCritSecAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x10013220
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

// Address: 0x100132B0
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

// Address: 0x100132F6
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x10013312
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x10013329
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x10013342
void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &ReturnPoint, nullptr, nullptr);
}

// Address: 0x1001335C
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x10013373
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

// Address: 0x100133CA
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

// Address: 0x10013459
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
  v7 = (_BYTE *)(dword_100282E0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
  *v7 &= ~2u;
  return lDistanceToMove;
}

// Address: 0x100134DE
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
  v4 = &dword_100282E0[FileHandle >> 5];
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

// Address: 0x100135F7
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
  v4 = &dword_100282E0[FileHandle >> 5];
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

// Address: 0x10013D2A
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
    || (v4 = &dword_100282E0[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x10013E06
int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_10027050;
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

// Address: 0x10013E4F
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return 0;
  }
  else if ( FileHandle >= 0 && FileHandle < uNumber )
  {
    return *(_BYTE *)(dword_100282E0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) & 0x40;
  }
  else
  {
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
}

// Address: 0x10013EB3
_UNKNOWN **sub_10013EB3()
{
  return &off_10025A78;
}

// Address: 0x10013EB9
int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_100282C0;
  if ( dword_100282C0 == 0 )
  {
    v0 = 512;
LABEL_5:
    dword_100282C0 = v0;
    goto LABEL_6;
  }
  if ( dword_100282C0 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)_calloc_crt(v0, 4);
  dword_100272AC = v1;
  if ( v1 == nullptr )
  {
    dword_100282C0 = 20;
    v1 = (char *)_calloc_crt(0x14u, 4);
    dword_100272AC = v1;
    if ( v1 == nullptr )
      return 26;
  }
  v3 = 0;
  v4 = &off_10025A78;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&Str )
      break;
    v1 = (char *)dword_100272AC;
  }
  v5 = 0;
  v6 = &unk_10025A88;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_100282E0[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || v7 == 0 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_10025AE8 );
  return 0;
}

// Address: 0x10013F6A
void __endstdio()
{
  sub_10016194();
  if ( byte_10026A08 != 0 )
    _fcloseall();
  free(dword_100272AC);
}

// Address: 0x10013F8A
void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_10025A78 || Stream > &stru_10025CD8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_10025A78) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}

// Address: 0x10013FCB
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

// Address: 0x10013FFD
void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_10025A78 || Stream > &stru_10025CD8 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_10025A78) >> 5) + 16);
  }
}

// Address: 0x10014039
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

// Address: 0x10014068
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x1001409A
wint_t __cdecl _fputwc_nolock(wchar_t Character, FILE *Stream)
{
  int *v2; // edi
  _BYTE *v3; // eax
  int *v4; // edi
  _BYTE *v5; // eax
  int *v6; // edi
  char *v7; // eax
  int v9; // edi
  bool v10; // sf
  int v11; // eax
  int SizeConverted; // [esp+Ch] [ebp-10h] BYREF
  char MbCh[8]; // [esp+10h] [ebp-Ch] BYREF

  if ( (Stream->_flag & 0x40) != 0
    || (_fileno(Stream) == -1 || _fileno(Stream) == -2
      ? (v3 = &unk_100259D0)
      : (v2 = &dword_100282E0[_fileno(Stream) >> 5], v3 = (_BYTE *)(*v2 + ((_fileno(Stream) & 0x1F) << 6))),
        (v3[36] & 0x7F) == 2
     || (_fileno(Stream) == -1 || _fileno(Stream) == -2
       ? (v5 = &unk_100259D0)
       : (v4 = &dword_100282E0[_fileno(Stream) >> 5], v5 = (_BYTE *)(*v4 + ((_fileno(Stream) & 0x1F) << 6))),
         (v5[36] & 0x7F) == 1
      || (_fileno(Stream) == -1 || _fileno(Stream) == -2
        ? (v7 = (char *)&unk_100259D0)
        : (v6 = &dword_100282E0[_fileno(Stream) >> 5], v7 = (char *)(*v6 + ((_fileno(Stream) & 0x1F) << 6))),
          v7[4] >= 0))) )
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

// Address: 0x10014221
int __cdecl _get_printf_count_output()
{
  return dword_10027054 == (__security_cookie | 1);
}

// Address: 0x10014237
int __cdecl _mbtowc_l(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes, _locale_t Locale)
{
  int result; // eax
  struct __crt_locale_data *locinfo; // eax
  int v6; // ecx
  bool v7; // zf
  __crt_locale_pointers v8; // [esp+8h] [ebp-10h] BYREF
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
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, (struct localeinfo_struct *)Locale);
  if ( *((_DWORD *)v8.locinfo + 5) == 0 )
  {
    if ( DstCh != nullptr )
      *DstCh = *(unsigned __int8 *)SrcCh;
    goto LABEL_11;
  }
  if ( _isleadbyte_l(*(unsigned __int8 *)SrcCh, &v8) != 0 )
  {
    locinfo = v8.locinfo;
    v6 = *((_DWORD *)v8.locinfo + 43);
    if ( v6 > 1
      && (int)SrcSizeInBytes >= v6
      && (v7 = MultiByteToWideChar(*((_DWORD *)v8.locinfo + 1), 9u, SrcCh, v6, DstCh, DstCh != nullptr) == 0,
          locinfo = v8.locinfo,
          !v7)
      || SrcSizeInBytes >= *((_DWORD *)locinfo + 43) && SrcCh[1] != 0 )
    {
      result = *((_DWORD *)locinfo + 43);
      if ( v10 != 0 )
        *(_DWORD *)(v9 + 112) &= ~2u;
      return result;
    }
  }
  else if ( MultiByteToWideChar(*((_DWORD *)v8.locinfo + 1), 9u, SrcCh, 1, DstCh, DstCh != nullptr) != 0 )
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

// Address: 0x1001434E
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x10014368
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

// Address: 0x100143A0
int __cdecl isleadbyte(int C)
{
  return _isleadbyte_l(C, nullptr);
}

// Address: 0x100143C0
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

// Address: 0x10014455
int __cdecl _isdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale);
  if ( *((int *)v3.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)v3.locinfo + 50) + 2 * C) & 4;
  else
    result = _isctype_l(C, 4, &v3);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x100144A6
int __cdecl isdigit(int C)
{
  if ( dword_10026A3C != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_100257C8[C] & 4;
}

// Address: 0x100144D4
int __cdecl _isxdigit_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale);
  if ( *((int *)v3.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)v3.locinfo + 50) + 2 * C) & 0x80;
  else
    result = _isctype_l(C, 128, &v3);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x1001452A
int __cdecl isxdigit(int C)
{
  if ( dword_10026A3C != 0 )
    return _isxdigit_l(C, nullptr);
  else
    return off_100257C8[C] & 0x80;
}

// Address: 0x1001455A
wint_t __cdecl _fgetwc_nolock(FILE *Stream)
{
  FILE *v1; // esi
  int *v2; // edi
  _BYTE *v3; // eax
  bool v4; // sf
  int v5; // eax
  wint_t result; // ax
  int v7; // eax
  int *v8; // edi
  char *v9; // eax
  size_t v10; // edi
  int v11; // eax
  int v12; // eax
  char SrcCh[4]; // [esp+Ch] [ebp-4h] BYREF

  v1 = Stream;
  if ( (Stream->_flag & 0x40) == 0 )
  {
    if ( _fileno(Stream) == -1 || _fileno(v1) == -2 )
    {
      v3 = &unk_100259D0;
    }
    else
    {
      v2 = &dword_100282E0[_fileno(v1) >> 5];
      v3 = (_BYTE *)(*v2 + ((_fileno(v1) & 0x1F) << 6));
    }
    if ( (v3[36] & 0x7F) != 0 )
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
        v9 = (char *)&unk_100259D0;
      }
      else
      {
        v8 = &dword_100282E0[_fileno(v1) >> 5];
        v9 = (char *)(*v8 + ((_fileno(v1) & 0x1F) << 6));
      }
      if ( v9[4] < 0 )
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

// Address: 0x10014705
wint_t __cdecl _ungetwc_nolock(wint_t Character, FILE *Stream)
{
  wint_t v2; // bx
  int flag; // eax
  int *v4; // edi
  char *v5; // eax
  int *v6; // edi
  _BYTE *v7; // eax
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
    v5 = (char *)&unk_100259D0;
  }
  else
  {
    v4 = &dword_100282E0[_fileno(Stream) >> 5];
    v5 = (char *)(*v4 + ((_fileno(Stream) & 0x1F) << 6));
  }
  if ( v5[4] >= 0 )
  {
    v2 = Character;
    goto LABEL_30;
  }
  if ( _fileno(Stream) == -1 || _fileno(Stream) == -2 )
  {
    v7 = &unk_100259D0;
  }
  else
  {
    v6 = &dword_100282E0[_fileno(Stream) >> 5];
    v7 = (_BYTE *)(*v6 + ((_fileno(Stream) & 0x1F) << 6));
  }
  if ( (v7[36] & 0x7F) != 0 )
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

// Address: 0x100148BF
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
    *(_DWORD *)CharType = (unsigned __int16)(Type & *((_WORD *)off_10025D04 + C));
  }
  return Type & CharType[0];
}

// Address: 0x10014949
int __cdecl iswctype(wint_t C, wctype_t Type)
{
  int v2; // ecx
  int CharType; // [esp+0h] [ebp-4h] BYREF

  CharType = v2;
  if ( C == 0xFFFF )
    return 0;
  if ( C < 0x100u )
    return Type & *((_WORD *)off_10025D04 + C);
  if ( dword_10026A3C == 0 )
    __crtGetStringTypeW((struct localeinfo_struct *)&off_100257E0, 1u, &C, 1, (LPWORD)&CharType);
  return _iswctype_l(C, Type, nullptr);
}

// Address: 0x100149BF
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

// Address: 0x10014B2B
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x10014B48
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

// Address: 0x10014D8A
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

// Address: 0x10014E44
errno_t __cdecl wcstombs_s(
        size_t *PtNumOfCharConverted,
        char *Dst,
        size_t DstSizeInBytes,
        const wchar_t *Src,
        size_t MaxCountInBytes)
{
  return _wcstombs_s_l(PtNumOfCharConverted, Dst, DstSizeInBytes, Src, MaxCountInBytes, nullptr);
}

// Address: 0x10014E70
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x10014EA4
void __cdecl _freea(void *Memory)
{
  if ( Memory != nullptr && *((_DWORD *)Memory - 2) == 56797 )
    free((char *)Memory - 8);
}

// Address: 0x10014EC4
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
  if ( dword_10027058 == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, nullptr, 0) != 0 )
    {
      dword_10027058 = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_10027058 = 2;
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
  if ( dword_10027058 != 2 && dword_10027058 != 0 )
  {
    if ( dword_10027058 == 1 )
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

// Address: 0x10015269
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

// Address: 0x100152AE
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

  v8 = dword_1002705C;
  v9 = nullptr;
  v10 = v7;
  if ( dword_1002705C == 0 )
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, CharType) )
    {
      dword_1002705C = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v8 = 2;
      dword_1002705C = 2;
    }
    else
    {
      v8 = dword_1002705C;
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

// Address: 0x10015468
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

// Address: 0x100154AA
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

// Address: 0x1001563F
void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)a1 != off_10025DC8 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_10025DCC )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_10025DD0 )
      free(v1);
  }
}

// Address: 0x10015684
void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_10025DD4 )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_10025DD8 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_10025DDC )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_10025DE0 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_10025DE4 )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_10025DE8 )
      free(*(void **)(a1 + 32));
    v1 = *(void **)(a1 + 36);
    if ( v1 != off_10025DEC )
      free(v1);
  }
}

// Address: 0x10015712
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

// Address: 0x10015790
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

// Address: 0x100157D6
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

// Address: 0x10015890
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

// Address: 0x100158D0
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

// Address: 0x10015927
int __cdecl sub_10015927(int a1, int a2, int a3)
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
  if ( dword_10027064 == 0 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( MessageBoxA == nullptr )
      return 0;
    dword_10027064 = (int)_encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v5, "GetActiveWindow");
    dword_10027068 = (int)_encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v5, "GetLastActivePopup");
    dword_1002706C = (int)_encode_pointer(GetLastActivePopup);
    GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                          v5,
                                                                                          "GetUserObjectInformationA");
    dword_10027074 = (int)_encode_pointer(GetUserObjectInformationA);
    if ( dword_10027074 != 0 )
    {
      GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v5, "GetProcessWindowStation");
      dword_10027070 = (int)_encode_pointer(GetProcessWindowStation);
    }
  }
  if ( (PVOID)dword_10027070 == v3
    || (PVOID)dword_10027074 == v3
    || (v11 = (int (*)(void))_decode_pointer((void *)dword_10027070),
        v12 = _decode_pointer((void *)dword_10027074),
        v13 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v12,
        v11 == nullptr)
    || v12 == nullptr
    || (v14 = v11()) != 0 && v13(v14, 1, v19, 12, v20) != 0 && (v19[8] & 1) != 0 )
  {
    if ( (PVOID)dword_10027068 != v3 )
    {
      v15 = (int (*)(void))_decode_pointer((void *)dword_10027068);
      if ( v15 != nullptr )
      {
        v21 = v15();
        if ( v21 != 0 && (PVOID)dword_1002706C != v3 )
        {
          v16 = (int (__stdcall *)(int))_decode_pointer((void *)dword_1002706C);
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
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_10027064);
  if ( v17 != nullptr )
    return v17(v21, a1, a2, a3);
  return 0;
}

// Address: 0x10015A90
int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_100266A0;
      dword_100266A0 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_100266A0;
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x10015ADB
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

// Address: 0x10015B2E
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x10015B46
// Microsoft VisualC 2-14/net runtime
BOOL __cdecl unknown_libname_2(int a1)
{
  return a1 != 0;
}

// Address: 0x10015B58
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x10015B78
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

// Address: 0x10015BBD
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

// Address: 0x10015C41
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

// Address: 0x10015C64
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x10015C78);
}

// Address: 0x10015C6D
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_10025E18 = a3;
  unk_10025E14 = result;
  unk_10025E1C = a2;
  return result;
}

// Address: 0x10015C8C
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x10015C8F
int _fptrap()
{
  return _amsg_exit(2);
}

// Address: 0x10015C98
int __cdecl atol(const char *String)
{
  return strtol(String, nullptr, 10);
}

// Address: 0x10015CAE
int __cdecl _free_osfhnd(int a1)
{
  int *v1; // edi
  int v2; // esi
  _DWORD *v3; // eax

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = &dword_100282E0[a1 >> 5], v2 = (a1 & 0x1F) << 6, ((v3 = (_DWORD *)(v2 + *v1))[1] & 1) == 0)
    || *v3 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_100266A4 == 1 )
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

// Address: 0x10015D34
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
         && ((v2 = (intptr_t *)(dword_100282E0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6)))[1] & 1) != 0 )
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

// Address: 0x10015DAB
BOOL __cdecl __lock_fhandle(int a1)
{
  int v1; // esi
  BOOL inited; // [esp+10h] [ebp-1Ch]

  v1 = dword_100282E0[a1 >> 5] + ((a1 & 0x1F) << 6);
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
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_100282E0[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
  return inited;
}

// Address: 0x10015E4B
void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_100282E0[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}

// Address: 0x10015E72
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( dword_10025E20 == 0 )
    goto LABEL_10;
  if ( hConsoleOutput == (HANDLE)-2 )
    __initconout();
  if ( hConsoleOutput == (HANDLE)-1 )
    return -1;
  if ( !WriteConsoleW(hConsoleOutput, &Character, 1u, &NumberOfCharsWritten, nullptr) )
  {
    if ( dword_10025E20 != 2 || GetLastError() != 120 )
      return -1;
    dword_10025E20 = 0;
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP();
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, &Character, 1, MultiByteStr, 5, nullptr, nullptr);
    if ( hConsoleOutput != (HANDLE)-1 && WriteConsoleA(hConsoleOutput, MultiByteStr, v3, &NumberOfCharsWritten, nullptr) )
      return Character;
    return -1;
  }
  dword_10025E20 = 1;
  return Character;
}

// Address: 0x10015F40
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

// Address: 0x10015F6B
int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // esi
  int *v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  _lock(1);
  for ( i = 3; i < dword_100282C0; ++i )
  {
    v1 = 4 * i;
    v2 = (int *)((char *)dword_100272AC + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 && fclose((FILE *)v3) != -1 )
        ++v5;
      if ( i >= 20 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_100272AC + v1) + 32));
        free(*(void **)((char *)dword_100272AC + v1));
        *(_DWORD *)((char *)dword_100272AC + v1) = 0;
      }
    }
  }
  _unlock(1);
  return v5;
}

// Address: 0x1001600A
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

// Address: 0x10016072
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

// Address: 0x100160BA
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
  for ( i = 0; i < dword_100282C0; ++i )
  {
    v2 = (int *)((char *)dword_100272AC + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 )
      {
        _lock_file2(i, v3);
        v4 = *(_DWORD *)(*((_DWORD *)dword_100272AC + i) + 12);
        if ( (v4 & 0x83) != 0 )
        {
          if ( a1 == 1 )
          {
            if ( _fflush_nolock(*((FILE **)dword_100272AC + i)) != -1 )
              ++v7;
          }
          else if ( a1 == 0 && (v4 & 2) != 0 && _fflush_nolock(*((FILE **)dword_100272AC + i)) == -1 )
          {
            v6 = -1;
          }
        }
        _unlock_file2(i, *((_DWORD *)dword_100272AC + i));
      }
    }
  }
  _unlock(1);
  result = v7;
  if ( a1 != 1 )
    return v6;
  return result;
}

// Address: 0x10016194
int sub_10016194()
{
  return flsall(1);
}

// Address: 0x1001619D
int __cdecl _flswbuf(unsigned __int16 a1, FILE *FileHandle)
{
  int flag; // eax
  int v5; // eax
  unsigned int v6; // eax
  char *base; // eax
  char *ptr; // edi
  signed int v9; // edi
  _BYTE *v10; // eax
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
    && (FileHandle != (FILE *)(sub_10013EB3() + 8) && FileHandle != (FILE *)(sub_10013EB3() + 16)
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
        v10 = &unk_100259D0;
      else
        v10 = (_BYTE *)(dword_100282E0[FileHandlea >> 5] + ((FileHandlea & 0x1F) << 6));
      if ( (v10[4] & 0x20) != 0 )
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

// Address: 0x10016311
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

// Address: 0x10016540
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_10026A3C != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_100257E0, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x1001656B
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

// Address: 0x10016623
int __cdecl _filwbuf(FILE *Stream)
{
  int flag; // eax
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  int *v5; // edi
  _BYTE *v6; // eax
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
      v6 = &unk_100259D0;
    }
    else
    {
      v5 = &dword_100282E0[_fileno(Stream) >> 5];
      v6 = (_BYTE *)(*v5 + ((_fileno(Stream) & 0x1F) << 6));
    }
    if ( (v6[4] & 0x82) == 0x82 )
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

// Address: 0x1001675C
int __cdecl _ungetc_nolock(int Character, FILE *Stream)
{
  int v2; // eax
  _BYTE *v3; // ecx
  char *v4; // eax
  int flag; // eax
  char *v7; // eax
  int v8; // eax

  if ( (Stream->_flag & 0x40) == 0 )
  {
    v2 = _fileno(Stream);
    if ( v2 == -1 || v2 == -2 )
      v3 = &unk_100259D0;
    else
      v3 = (_BYTE *)(dword_100282E0[v2 >> 5] + ((v2 & 0x1F) << 6));
    if ( (v3[36] & 0x7F) != 0
      || (v2 == -1 || v2 == -2
        ? (v4 = (char *)&unk_100259D0)
        : (v4 = (char *)(dword_100282E0[v2 >> 5] + ((v2 & 0x1F) << 6))),
          v4[36] < 0) )
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

// Address: 0x1001684D
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

// Address: 0x100168BF
int __cdecl _filbuf(FILE *File)
{
  int flag; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int *v5; // edi
  _BYTE *v6; // eax
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
      v6 = &unk_100259D0;
    }
    else
    {
      v5 = &dword_100282E0[_fileno(File) >> 5];
      v6 = (_BYTE *)(*v5 + ((_fileno(File) & 0x1F) << 6));
    }
    if ( (v6[4] & 0x82) == 0x82 )
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

// Address: 0x100169EA
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

// Address: 0x10016A28
int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0;
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) != 0 )
    return atol(LCData);
  else
    return -1;
}

// Address: 0x10016A71
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

// Address: 0x10016C30
void *__usercall _alloca_probe_16@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 0xF;
  return _alloca_probe(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}

// Address: 0x10016C46
void *__usercall _alloca_probe_8@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 7;
  return _alloca_probe(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}

// Address: 0x10016C5C
HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  hConsoleOutput = result;
  return result;
}

// Address: 0x10016C7B
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 )
    CloseHandle(hConsoleOutput);
  result = dword_10025EE0;
  if ( dword_10025EE0 != (HANDLE)-1 && dword_10025EE0 != (HANDLE)-2 )
    return (HANDLE)CloseHandle(dword_10025EE0);
  return result;
}

// Address: 0x10016CA8
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

// Address: 0x10016D1F
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

// Address: 0x10016D9B
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
    || (v2 = &dword_100282E0[FileHandle >> 5], (*(_BYTE *)((v3 = (FileHandle & 0x1F) << 6) + *v2 + 4) & 1) == 0) )
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

// Address: 0x10016E7C
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
  v5 = &dword_100282E0[FileHandle >> 5];
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
        while ( byte_10025EE8[v26] == 0 && v27 <= 4 && v25 >= lpMultiByteStr )
        {
          v26 = (unsigned __int8)*--v25;
          ++v27;
        }
        v28 = *v25;
        if ( byte_10025EE8[(unsigned __int8)*v25] == 0 )
        {
          *_errno() = 42;
LABEL_93:
          v41 = -1;
          goto $error_return$28993;
        }
        if ( byte_10025EE8[(unsigned __int8)*v25] + 1 == v27 )
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

// Address: 0x1001743E
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
    || (v4 = &dword_100282E0[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x1001753B
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

// Address: 0x10017650
int __cdecl tolower(int C)
{
  int result; // eax

  if ( dword_10026A3C != 0 )
    return _tolower_l(C, nullptr);
  result = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return result;
}

// Address: 0x10017680
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

// Address: 0x100176E1
int __cdecl _close_nolock(int FileHandle)
{
  intptr_t osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_100282E0[0] + 132) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_100282E0[0] + 68) & 1) != 0)
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
  *(_BYTE *)(dword_100282E0[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) = 0;
  if ( LastError == 0 )
    return 0;
  _dosmaperr(LastError);
  return -1;
}

// Address: 0x1001777D
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
    || (v2 = &dword_100282E0[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v2 + v3 + 4) & 1) == 0) )
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

// Address: 0x1001784A
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

// Address: 0x10017880
// positive sp value has been detected, the output may be wrong!
int __fastcall found_bx(int a1, int a2)
{
  return a2 - 1;
}

// Address: 0x10017896
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

// Address: 0x1001794E
// attributes: thunk
int __stdcall EnumProcesses(int a1, int a2, int a3)
{
  return __imp_EnumProcesses(a1, a2, a3);
}

// Address: 0x10017954
// attributes: thunk
int __stdcall GetModuleFileNameExW(int a1, int a2, int a3, int a4)
{
  return __imp_GetModuleFileNameExW(a1, a2, a3, a4);
}

// Address: 0x1001795A
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x10017960
void nullsub_1()
{
  ;
}

// Address: 0x10017961
int (__cdecl *_cfltcvt_init())(int, int, int, int, size_t Size, int)
{
  off_10025A50[0] = (int (*)())_cfltcvt;
  off_10025A54[0] = (int (*)())_cropzeros;
  off_10025A58[0] = (int (*)())_fassign;
  off_10025A5C[0] = (int (*)())_forcdecpt;
  off_10025A60[0] = (int (*)())_positive;
  off_10025A64[0] = (int (*)())_cfltcvt;
  off_10025A68[0] = (int (*)())_cfltcvt_l;
  off_10025A6C[0] = (int (*)())_fassign_l;
  off_10025A70[0] = (int (*)())_cropzeros_l;
  off_10025A74 = (int (*)())_forcdecpt_l;
  return _cfltcvt;
}

// Address: 0x100179C1
int __cdecl _fpmath(int a1)
{
  int result; // eax

  _cfltcvt_init();
  result = _ms_p5_mp_test_fdiv();
  dword_100272A4 = result;
  if ( a1 != 0 )
    result = _setdefaultprecision();
  __asm { fnclex }
  return result;
}

// Address: 0x100179E4
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

// Address: 0x10017A57
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

// Address: 0x10017AD9
BOOL __cdecl _positive(double *a1)
{
  return *a1 >= 0.0;
}

// Address: 0x10017AF5
_QWORD *__cdecl _fassign_l(int a1, _QWORD *a2, int a3, struct localeinfo_struct *a4)
{
  _QWORD *result; // eax
  __int64 v5; // [esp+0h] [ebp-8h] BYREF

  if ( a1 != 0 )
  {
    sub_1001858D((int)&v5, a3, a4);
    result = a2;
    *a2 = v5;
  }
  else
  {
    sub_10018635((int)&a1, a3, a4);
    result = a2;
    *(_DWORD *)a2 = a1;
  }
  return result;
}

// Address: 0x10017B37
_QWORD *__cdecl _fassign(int a1, _QWORD *a2, int a3)
{
  return _fassign_l(a1, a2, a3, nullptr);
}

// Address: 0x10017B51
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

// Address: 0x10017B70
char __cdecl _forcdecpt(char *a1)
{
  return _forcdecpt_l(a1, nullptr);
}

// Address: 0x10017B83
char *__cdecl _cropzeros(char *a1)
{
  return _cropzeros_l(a1, nullptr);
}

// Address: 0x10017B96
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
  if ( (byte_100272A8 & 1) != 0 && *v15 == 48 )
    memcpy(v15, v15 + 1, 3u);
  if ( v23 != 0 )
    *(_DWORD *)(v22 + 112) &= ~2u;
  return 0;
}

// Address: 0x10017D05
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

// Address: 0x10017DD5
int __cdecl _cftoe(_DWORD *a1, _BYTE *a2, unsigned int a3, int a4, int a5)
{
  return _cftoe_l(a1, a2, a3, a4, a5, nullptr);
}

// Address: 0x10017DF5
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

// Address: 0x10018168
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

// Address: 0x1001825F
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

// Address: 0x1001831A
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

// Address: 0x10018414
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

// Address: 0x1001849C
int __cdecl _cfltcvt(_DWORD *a1, char *a2, int a3, int a4, size_t Size, int a6)
{
  return _cfltcvt_l(a1, a2, a3, a4, Size, a6, nullptr);
}

// Address: 0x100184BF
errno_t _setdefaultprecision()
{
  errno_t result; // eax

  result = _controlfp_s(nullptr, 0x10000u, 0x30000u);
  if ( result != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return result;
}

// Address: 0x100184EA
BOOL _ms_p5_test_fdiv()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0;
}

// Address: 0x10018528
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

// Address: 0x10018560
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

// Address: 0x1001858D
int __cdecl sub_1001858D(int a1, int a2, struct localeinfo_struct *a3)
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
  v3 = sub_10018A5B(v11, a1);
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

// Address: 0x10018635
int __cdecl sub_10018635(int a1, int a2, struct localeinfo_struct *a3)
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
  v3 = sub_10018F9F(v11, a1);
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

// Address: 0x100186DD
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

// Address: 0x1001879C
int *__cdecl sub_1001879C(int *a1, int *a2)
{
  int v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  __int16 v7; // bx
  __int16 v8; // di
  int *result; // eax
  __int16 v10; // cx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // [esp+Ch] [ebp-4h]
  __int16 v14; // [esp+1Ch] [ebp+Ch]

  v3 = (*((unsigned __int16 *)a2 + 3) >> 4) & 0x7FF;
  v14 = *((_WORD *)a2 + 3) & 0x8000;
  v4 = a2[1];
  v5 = *a2;
  v6 = v4 & 0xFFFFF;
  v13 = 0x80000000;
  if ( (_WORD)v3 != 0 )
  {
    if ( (unsigned __int16)v3 == 2047 )
    {
      v8 = 0x7FFF;
      goto LABEL_10;
    }
    v7 = v3 + 15360;
  }
  else
  {
    if ( v6 == 0 && v5 == 0 )
    {
      result = a1;
      v10 = v14;
      a1[1] = 0;
      *a1 = 0;
      goto LABEL_14;
    }
    v7 = 15361;
    v13 = 0;
  }
  v8 = v7;
LABEL_10:
  v11 = v13 | (v6 << 11) | (v5 >> 21);
  result = a1;
  v12 = v5 << 11;
  while ( 1 )
  {
    *a1 = v12;
    a1[1] = v11;
    if ( v11 < 0 )
      break;
    v11 = *(__int64 *)a1 >> 31;
    v12 = 2 * *a1;
    --v8;
  }
  v10 = v8 | v14;
LABEL_14:
  *((_WORD *)result + 4) = v10;
  return result;
}

// Address: 0x10018854
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
  sub_1001879C(v12, &a1);
  v7 = v12[2];
  v5[2] = sub_10019BDB(v12[0], v12[1], v7, 17, 0, &v9);
  *v5 = v10;
  v5[1] = v9;
  if ( strcpy_s(Destination, SizeInBytes, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v5[3] = Destination;
  return v5;
}

// Address: 0x100188F0
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

// Address: 0x100189D0
unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}

// Address: 0x100189EF
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

// Address: 0x10018A5B
int __cdecl sub_10018A5B(unsigned __int16 *a1, unsigned int *a2)
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
    v8 = dword_10026378 - 1;
    v64 = v3;
    v65 = dword_10026378 / 32;
    v9 = &v60 + dword_10026378 / 32;
    v66 = 31 - dword_10026378 % 32;
    if ( ((1 << (31 - dword_10026378 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_10026378 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
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
    if ( v3 >= dword_10026374 - dword_10026378 )
    {
      if ( v3 > dword_10026374 )
      {
        if ( v3 < dword_10026370 )
        {
          v60 &= ~0x80000000;
          v5 = dword_10026384 + v3;
          v50 = dword_1002637C / 32;
          v51 = dword_1002637C % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_1002637C % 32;
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
          v43 = dword_1002637C / 32;
          v44 = dword_1002637C % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_1002637C % 32;
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
          v5 = dword_10026384 + dword_10026370;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_10026374 - v64) / 32;
      v62 = v59;
      v18 = (dword_10026374 - v64) % 32;
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
      v24 = dword_10026378 - 1;
      v25 = dword_10026378 / 32;
      v65 = dword_10026378 / 32;
      v26 = &v60 + dword_10026378 / 32;
      v64 = 31 - dword_10026378 % 32;
      if ( ((1 << (31 - dword_10026378 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_10026378 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
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
      v36 = (dword_1002637C + 1) / 32;
      v37 = (dword_1002637C + 1) % 32;
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
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_1002637C));
  if ( dword_10026380 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_10026380 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x10018F9F
int __cdecl sub_10018F9F(unsigned __int16 *a1, unsigned int *a2)
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
    v8 = dword_10026390 - 1;
    v64 = v3;
    v65 = dword_10026390 / 32;
    v9 = &v60 + dword_10026390 / 32;
    v66 = 31 - dword_10026390 % 32;
    if ( ((1 << (31 - dword_10026390 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_10026390 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
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
    if ( v3 >= dword_1002638C - dword_10026390 )
    {
      if ( v3 > dword_1002638C )
      {
        if ( v3 < dword_10026388 )
        {
          v60 &= ~0x80000000;
          v5 = dword_1002639C + v3;
          v50 = dword_10026394 / 32;
          v51 = dword_10026394 % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_10026394 % 32;
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
          v43 = dword_10026394 / 32;
          v44 = dword_10026394 % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_10026394 % 32;
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
          v5 = dword_1002639C + dword_10026388;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_1002638C - v64) / 32;
      v62 = v59;
      v18 = (dword_1002638C - v64) % 32;
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
      v24 = dword_10026390 - 1;
      v25 = dword_10026390 / 32;
      v65 = dword_10026390 / 32;
      v26 = &v60 + dword_10026390 / 32;
      v64 = 31 - dword_10026390 % 32;
      if ( ((1 << (31 - dword_10026390 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_10026390 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
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
      v36 = (dword_10026394 + 1) / 32;
      v37 = (dword_10026394 + 1) % 32;
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
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_10026394));
  if ( dword_10026398 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_10026398 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x100194E3
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
  __int16 v29; // ax
  __int16 v30; // si
  unsigned __int16 v31; // cx
  int v32; // eax
  _WORD *v33; // edi
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // esi
  __int16 v37; // cx
  unsigned int v38; // eax
  int v39; // esi
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // edi
  int v44; // eax
  __int16 v45; // cx
  int v46; // esi
  unsigned int v47; // edx
  __int16 v48; // ax
  int v49; // [esp-4h] [ebp-8Ch]
  int v50; // [esp-4h] [ebp-8Ch]
  char *v51; // [esp+Ch] [ebp-7Ch]
  __int16 v52; // [esp+14h] [ebp-74h]
  __int16 v53; // [esp+18h] [ebp-70h]
  int v54; // [esp+1Ch] [ebp-6Ch]
  int v55; // [esp+20h] [ebp-68h]
  int v56; // [esp+20h] [ebp-68h]
  int v57; // [esp+24h] [ebp-64h]
  int v58; // [esp+24h] [ebp-64h]
  int v59; // [esp+28h] [ebp-60h]
  unsigned __int16 *v60; // [esp+28h] [ebp-60h]
  int v61; // [esp+2Ch] [ebp-5Ch]
  unsigned __int16 *v62; // [esp+2Ch] [ebp-5Ch]
  int v63; // [esp+30h] [ebp-58h]
  int i; // [esp+30h] [ebp-58h]
  char *v65; // [esp+34h] [ebp-54h]
  int v66; // [esp+34h] [ebp-54h]
  int v67; // [esp+38h] [ebp-50h]
  int v68; // [esp+38h] [ebp-50h]
  unsigned int v69; // [esp+3Ch] [ebp-4Ch]
  int v70; // [esp+3Ch] [ebp-4Ch]
  __int64 v71; // [esp+40h] [ebp-48h] BYREF
  int v72; // [esp+48h] [ebp-40h]
  _DWORD v73[7]; // [esp+4Ch] [ebp-3Ch] BYREF
  _BYTE v74[23]; // [esp+68h] [ebp-20h] BYREF
  char v75; // [esp+7Fh] [ebp-9h]

  v8 = 0;
  v9 = v74;
  v52 = 0;
  v55 = 1;
  v69 = 0;
  v63 = 0;
  v61 = 0;
  v59 = 0;
  v57 = 0;
  v67 = 0;
  v54 = 0;
  if ( a8 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
  v11 = a3;
  v65 = a3;
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
          v52 = 0;
          v8 = 2;
          continue;
        }
        v15 = v14 - 2;
        if ( v15 == 0 )
        {
          v8 = 2;
          v52 = 0x8000;
          continue;
        }
        if ( v15 != 3 )
          goto LABEL_75;
        goto LABEL_19;
      case 1:
        v63 = 1;
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
        v50 = 6;
        goto LABEL_15;
      case 2:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
        {
LABEL_11:
          v49 = 3;
LABEL_12:
          v8 = v49;
          --v11;
        }
        else
        {
          if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          {
LABEL_14:
            v50 = 5;
            goto LABEL_15;
          }
          if ( v13 != 48 )
          {
LABEL_37:
            v16 = v65;
            goto LABEL_82;
          }
LABEL_19:
          v8 = 1;
        }
        continue;
      case 3:
        v63 = 1;
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v69 >= 0x19 )
          {
            ++v67;
          }
          else
          {
            ++v69;
            *v9++ = v13 - 48;
          }
          v13 = *v11++;
        }
        if ( v13 != ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_46;
LABEL_24:
        v50 = 4;
        goto LABEL_15;
      case 4:
        v63 = 1;
        v61 = 1;
        if ( v69 == 0 )
        {
          while ( v13 == 48 )
          {
            --v67;
            v13 = *v11++;
          }
        }
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v69 < 0x19 )
          {
            ++v69;
            *v9++ = v13 - 48;
            --v67;
          }
          v13 = *v11++;
        }
LABEL_46:
        if ( v13 != 43 && v13 != 45 )
          goto LABEL_28;
LABEL_33:
        --v11;
        v50 = 11;
        goto LABEL_15;
      case 5:
        v61 = 1;
        if ( (unsigned __int8)(v13 - 48) > 9u )
          goto LABEL_37;
        v49 = 4;
        goto LABEL_12;
      case 6:
        v65 = v11 - 2;
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
        v50 = 8;
        goto LABEL_15;
      case 7:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_63;
        v19 = v13 == 48;
        goto LABEL_67;
      case 8:
        v59 = 1;
        while ( v13 == 48 )
          v13 = *v11++;
        if ( (unsigned __int8)(v13 - 49) > 8u )
          goto LABEL_75;
LABEL_63:
        v49 = 9;
        goto LABEL_12;
      case 9:
        v59 = 1;
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
        v57 = v21;
        while ( v13 >= 48 && v13 <= 57 )
          v13 = *v11++;
LABEL_75:
        v16 = v11 - 1;
        goto LABEL_82;
      case 11:
        if ( a7 != 0 )
        {
          v20 = v13 - 43;
          v65 = v11 - 1;
          if ( v20 != 0 )
          {
            if ( v20 != 2 )
            {
              v16 = v11 - 1;
              goto LABEL_82;
            }
LABEL_69:
            v55 = -1;
            v8 = 7;
          }
          else
          {
LABEL_70:
            v50 = 7;
LABEL_15:
            v8 = v50;
          }
          continue;
        }
        v16 = v11 - 1;
LABEL_82:
        *a2 = v16;
        if ( v63 == 0 )
        {
          v54 = 4;
LABEL_177:
          v45 = 0;
          v48 = 0;
          v47 = 0;
          v46 = 0;
          goto LABEL_178;
        }
        if ( v69 > 0x18 )
        {
          if ( v75 >= 5 )
            ++v75;
          --v9;
          ++v67;
          v69 = 24;
        }
        if ( v69 == 0 )
          goto LABEL_177;
        while ( *--v9 == 0 )
        {
          --v69;
          ++v67;
        }
        __mtold12(v74, v69, v73);
        v22 = v57;
        if ( v55 < 0 )
          v22 = -v57;
        v23 = v67 + v22;
        if ( v59 == 0 )
          v23 += a5;
        if ( v61 == 0 )
          v23 -= a6;
        if ( v23 > 5200 )
        {
          v46 = 0;
          v48 = 0x7FFF;
          v47 = 0x80000000;
          v45 = 0;
          v54 = 2;
          goto LABEL_178;
        }
        if ( v23 < -5200 )
        {
          v54 = 1;
          goto LABEL_177;
        }
        v24 = (char *)&unk_100263A0 - 96;
        v66 = v23;
        if ( v23 != 0 )
        {
          if ( v23 < 0 )
          {
            v66 = -v23;
            v24 = (char *)&unk_10026500 - 96;
          }
          if ( a4 == 0 )
            LOWORD(v73[0]) = 0;
          if ( v66 != 0 )
          {
            while ( 1 )
            {
              v25 = v66;
              v66 >>= 3;
              v26 = v24 + 84;
              v27 = v25 & 7;
              v51 = v26;
              if ( v27 == 0 )
                goto LABEL_172;
              v28 = &v26[12 * v27];
              if ( *(_WORD *)v28 >= 0x8000u )
              {
                v71 = *(_QWORD *)v28;
                v72 = *((_DWORD *)v28 + 2);
                --*(_DWORD *)((char *)&v71 + 2);
                v28 = (char *)&v71;
              }
              v68 = 0;
              memset(&v73[4], 0, 12);
              v29 = *((_WORD *)v28 + 5) & 0x7FFF;
              v30 = (HIWORD(v73[2]) ^ *((_WORD *)v28 + 5)) & 0x8000;
              v53 = v30;
              v31 = v29 + (HIWORD(v73[2]) & 0x7FFF);
              if ( (HIWORD(v73[2]) & 0x7FFF) == 0x7FFF || (*((_WORD *)v28 + 5) & 0x7FFF) == 0x7FFF || v31 > 0xBFFDu )
                break;
              if ( v31 <= 0x3FBFu )
              {
                v32 = 0;
                v73[1] = 0;
                v73[0] = 0;
LABEL_171:
                v73[2] = v32;
                goto LABEL_172;
              }
              if ( (v73[2] & 0x7FFF0000) != 0 || (++v31, (v73[2] & 0x7FFFFFFF) != 0) || v73[1] != 0 || v73[0] != 0 )
              {
                if ( v29 != 0
                  || (++v31, (*((_DWORD *)v28 + 2) & 0x7FFFFFFF) != 0)
                  || *((_DWORD *)v28 + 1) != 0
                  || *(_DWORD *)v28 != 0 )
                {
                  v56 = 0;
                  v33 = &v73[5];
                  for ( i = 5; i > 0; --i )
                  {
                    v58 = i;
                    v62 = (unsigned __int16 *)v73 + v56;
                    v60 = (unsigned __int16 *)(v28 + 8);
                    do
                    {
                      v70 = 0;
                      v34 = *v62 * *v60;
                      v35 = *((_DWORD *)v33 - 1);
                      v36 = v35 + v34;
                      if ( v35 + v34 < v35 || v36 < v34 )
                        v70 = 1;
                      *((_DWORD *)v33 - 1) = v36;
                      if ( v70 != 0 )
                        ++*v33;
                      ++v62;
                      --v60;
                      --v58;
                    }
                    while ( v58 > 0 );
                    ++v33;
                    ++v56;
                  }
                  v37 = v31 - 16382;
                  if ( v37 <= 0 )
                    goto LABEL_181;
                  do
                  {
                    if ( v73[6] < 0 )
                      break;
                    v38 = v73[4];
                    v73[4] *= 2;
                    v39 = (v38 >> 31) | (2 * v73[5]);
                    v40 = *(__int64 *)&v73[5] >> 31;
                    --v37;
                    v73[5] = v39;
                    v73[6] = v40;
                  }
                  while ( v37 > 0 );
                  if ( v37 <= 0 )
                  {
LABEL_181:
                    if ( --v37 < 0 )
                    {
                      v41 = (unsigned __int16)-v37;
                      v37 = 0;
                      do
                      {
                        if ( (v73[4] & 1) != 0 )
                          ++v68;
                        v42 = v73[6];
                        v73[6] >>= 1;
                        v43 = (v42 << 31) | (v73[5] >> 1);
                        v44 = *(__int64 *)&v73[4] >> 1;
                        --v41;
                        v73[5] = v43;
                        v73[4] = v44;
                      }
                      while ( v41 != 0 );
                      if ( v68 != 0 )
                        LOWORD(v73[4]) |= 1u;
                    }
                  }
                  if ( LOWORD(v73[4]) > 0x8000u || (v73[4] & 0x1FFFF) == 0x18000 )
                  {
                    if ( *(_DWORD *)((char *)&v73[4] + 2) == -1 )
                    {
                      *(_DWORD *)((char *)&v73[4] + 2) = 0;
                      if ( *(_DWORD *)((char *)&v73[5] + 2) == -1 )
                      {
                        *(_DWORD *)((char *)&v73[5] + 2) = 0;
                        if ( HIWORD(v73[6]) == 0xFFFF )
                        {
                          HIWORD(v73[6]) = 0x8000;
                          ++v37;
                        }
                        else
                        {
                          ++HIWORD(v73[6]);
                        }
                      }
                      else
                      {
                        ++*(_DWORD *)((char *)&v73[5] + 2);
                      }
                    }
                    else
                    {
                      ++*(_DWORD *)((char *)&v73[4] + 2);
                    }
                  }
                  if ( (unsigned __int16)v37 < 0x7FFFu )
                  {
                    LOWORD(v73[0]) = HIWORD(v73[4]);
                    *(_QWORD *)((char *)v73 + 2) = *(_QWORD *)&v73[5];
                    HIWORD(v73[2]) = v53 | v37;
                  }
                  else
                  {
                    v73[1] = 0;
                    v73[0] = 0;
                    v73[2] = v53 == 0 ? 2147450880 : -32768;
                  }
                }
                else
                {
                  memset(v73, 0, 12);
                }
              }
              else
              {
                HIWORD(v73[2]) = 0;
              }
LABEL_172:
              if ( v66 == 0 )
                goto LABEL_173;
              v24 = v51;
            }
            v73[1] = 0;
            v32 = v30 == 0 ? 2147450880 : -32768;
            v73[0] = 0;
            goto LABEL_171;
          }
        }
LABEL_173:
        v45 = v73[0];
        v46 = *(_DWORD *)((char *)v73 + 2);
        v47 = *(_DWORD *)((char *)&v73[1] + 2);
        v48 = HIWORD(v73[2]);
LABEL_178:
        *(_WORD *)a1 = v45;
        *(_WORD *)(a1 + 10) = v52 | v48;
        *(_DWORD *)(a1 + 2) = v46;
        *(_DWORD *)(a1 + 6) = v47;
        return v54;
    }
  }
}

// Address: 0x10019BDB
int __cdecl sub_10019BDB(__int64 a1, __int16 a2, int a3, char a4, int a5)
{
  unsigned __int16 v5; // dx
  __int64 v6; // rdi
  errno_t v8; // eax
  errno_t v9; // eax
  __int16 v10; // ax
  int v11; // ebx
  int v12; // ecx
  char *v13; // eax
  _DWORD *v14; // esi
  __int16 v15; // cx
  unsigned __int16 v16; // di
  _WORD *v17; // esi
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int16 v21; // di
  unsigned int v22; // ecx
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // esi
  int v27; // ecx
  unsigned __int16 v28; // si
  int v29; // eax
  _WORD *v30; // edi
  unsigned __int16 *v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // ebx
  __int16 v35; // si
  unsigned int v36; // ecx
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // edi
  int v43; // esi
  unsigned int v44; // eax
  int v45; // ebx
  int v46; // eax
  bool v47; // zf
  int v48; // esi
  int v49; // eax
  int v50; // ebx
  int v51; // eax
  _BYTE *v52; // ebx
  unsigned int v53; // edx
  unsigned int v54; // edi
  unsigned int v55; // ecx
  int v56; // esi
  int v57; // ecx
  unsigned int v58; // esi
  unsigned int v59; // edi
  int v60; // edx
  unsigned int v61; // edx
  char *v62; // ebx
  char v63; // al
  char *v64; // ebx
  int v65; // eax
  char v66; // bl
  unsigned __int16 *v67; // [esp+10h] [ebp-70h]
  unsigned __int16 *v68; // [esp+14h] [ebp-6Ch]
  char *v69; // [esp+18h] [ebp-68h]
  __int16 v70; // [esp+20h] [ebp-60h]
  int v71; // [esp+24h] [ebp-5Ch]
  __int16 v72; // [esp+24h] [ebp-5Ch]
  __int16 v73; // [esp+28h] [ebp-58h]
  int *v74; // [esp+28h] [ebp-58h]
  int v75; // [esp+2Ch] [ebp-54h]
  int v76; // [esp+2Ch] [ebp-54h]
  int v77; // [esp+30h] [ebp-50h]
  int v78; // [esp+30h] [ebp-50h]
  __int16 v79; // [esp+34h] [ebp-4Ch]
  int k; // [esp+34h] [ebp-4Ch]
  int v81; // [esp+38h] [ebp-48h]
  int v82; // [esp+38h] [ebp-48h]
  char *v83; // [esp+3Ch] [ebp-44h]
  int v84; // [esp+3Ch] [ebp-44h]
  int v85; // [esp+3Ch] [ebp-44h]
  unsigned int v86; // [esp+3Ch] [ebp-44h]
  int i; // [esp+40h] [ebp-40h]
  int j; // [esp+40h] [ebp-40h]
  char *v89; // [esp+40h] [ebp-40h]
  _BYTE v90[12]; // [esp+44h] [ebp-3Ch] BYREF
  int v91; // [esp+50h] [ebp-30h]
  int v92; // [esp+54h] [ebp-2Ch]
  int v93; // [esp+58h] [ebp-28h] BYREF
  _BYTE v94[12]; // [esp+60h] [ebp-20h] BYREF
  _BYTE v95[12]; // [esp+70h] [ebp-10h] BYREF

  *(_QWORD *)v95 = a1;
  *(_WORD *)&v95[8] = a2;
  v70 = a2 & 0x8000;
  v5 = a2 & 0x7FFF;
  v91 = -858993460;
  v92 = -858993460;
  v93 = 1073466572;
  if ( a2 >= 0 )
    *(_BYTE *)(a5 + 2) = 32;
  else
    *(_BYTE *)(a5 + 2) = 45;
  v6 = *(_QWORD *)v95;
  if ( v5 == 0 && *(_QWORD *)v95 == 0 )
  {
    *(_WORD *)a5 = 0;
    *(_BYTE *)(a5 + 2) = v70 != -32768 ? 32 : 45;
    *(_BYTE *)(a5 + 3) = 1;
    *(_BYTE *)(a5 + 4) = 48;
    *(_BYTE *)(a5 + 5) = 0;
    return 1;
  }
  if ( v5 == 0x7FFF )
  {
    *(_WORD *)a5 = 1;
    if ( v6 != 0x8000000000000000uLL && (v6 & 0x4000000000000000LL) == 0 )
    {
      v8 = strcpy_s((char *)(a5 + 4), 0x16u, "1#SNAN");
LABEL_22:
      if ( v8 != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      *(_BYTE *)(a5 + 3) = 6;
      return 0;
    }
    if ( v70 != 0 && HIDWORD(v6) == -1073741824 )
    {
      if ( (_DWORD)v6 == 0 )
      {
        v9 = strcpy_s((char *)(a5 + 4), 0x16u, "1#IND");
LABEL_18:
        if ( v9 != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        *(_BYTE *)(a5 + 3) = 5;
        return 0;
      }
    }
    else if ( v6 == 0x8000000000000000uLL )
    {
      v9 = strcpy_s((char *)(a5 + 4), 0x16u, "1#INF");
      goto LABEL_18;
    }
    v8 = strcpy_s((char *)(a5 + 4), 0x16u, "1#QNAN");
    goto LABEL_22;
  }
  v10 = (77 * (HIBYTE(v5) + 2 * HIBYTE(*(_DWORD *)&v95[4])) + 19728 * (unsigned int)v5 - 323162868) >> 16;
  *(_WORD *)v94 = 0;
  v11 = -v10;
  v79 = v10;
  *(_WORD *)&v94[10] = a2 & 0x7FFF;
  *(_QWORD *)&v94[2] = *(_QWORD *)v95;
  v69 = (char *)&unk_100263A0 - 96;
  if ( v10 != 0 )
  {
    if ( v10 > 0 )
    {
      v11 = v10;
      v69 = (char *)&unk_10026500 - 96;
    }
    while ( v11 != 0 )
    {
      v69 += 84;
      v12 = v11 & 7;
      v11 >>= 3;
      if ( v12 != 0 )
      {
        v13 = &v69[12 * v12];
        v83 = v13;
        if ( *(_WORD *)v13 >= 0x8000u )
        {
          *(_DWORD *)v90 = *(_DWORD *)v13;
          *(_DWORD *)&v90[4] = *((_DWORD *)v13 + 1);
          v14 = v13 + 8;
          v13 = v90;
          *(_DWORD *)&v90[8] = *v14;
          --*(_DWORD *)&v90[2];
          v83 = v90;
        }
        v81 = 0;
        memset(v95, 0, sizeof(v95));
        v73 = (*(_WORD *)&v94[10] ^ *((_WORD *)v13 + 5)) & 0x8000;
        v15 = *((_WORD *)v13 + 5) & 0x7FFF;
        v16 = v15 + (*(_WORD *)&v94[10] & 0x7FFF);
        if ( (*(_WORD *)&v94[10] & 0x7FFF) == 0x7FFF || (*((_WORD *)v13 + 5) & 0x7FFF) == 0x7FFF || v16 > 0xBFFDu )
        {
          *(_DWORD *)&v94[8] = ((*(_WORD *)&v94[10] ^ *((_WORD *)v13 + 5)) & 0x8000u) == 0 ? 2147450880 : -32768;
        }
        else
        {
          if ( v16 > 0x3FBFu )
          {
            if ( (*(_WORD *)&v94[10] & 0x7FFF) == 0 )
            {
              ++v16;
              if ( (*(_DWORD *)&v94[8] & 0x7FFFFFFF) == 0 && *(_DWORD *)&v94[4] == 0 && *(_DWORD *)v94 == 0 )
              {
                *(_WORD *)&v94[10] = 0;
                continue;
              }
            }
            if ( v15 != 0
              || (++v16, (*((_DWORD *)v13 + 2) & 0x7FFFFFFF) != 0)
              || *((_DWORD *)v13 + 1) != 0
              || *(_DWORD *)v13 != 0 )
            {
              v75 = 0;
              v17 = &v95[4];
              for ( i = 5; i > 0; --i )
              {
                v77 = i;
                v67 = (unsigned __int16 *)&v94[2 * v75];
                v68 = (unsigned __int16 *)(v13 + 8);
                do
                {
                  v18 = *((_DWORD *)v17 - 1);
                  v19 = *v68 * *v67;
                  v71 = 0;
                  v20 = v18 + v19;
                  if ( v18 + v19 < v18 || v20 < v19 )
                    v71 = 1;
                  *((_DWORD *)v17 - 1) = v20;
                  if ( v71 != 0 )
                    ++*v17;
                  ++v67;
                  --v68;
                  --v77;
                }
                while ( v77 > 0 );
                v13 = v83;
                ++v17;
                ++v75;
              }
              v21 = v16 - 16382;
              if ( v21 <= 0 )
                goto LABEL_170;
              do
              {
                if ( *(int *)&v95[8] < 0 )
                  break;
                v22 = *(_DWORD *)v95;
                *(_DWORD *)v95 *= 2;
                v23 = *(_DWORD *)&v95[4];
                *(_DWORD *)&v95[4] = (v22 >> 31) | (2 * *(_DWORD *)&v95[4]);
                --v21;
                *(_DWORD *)&v95[8] = (v23 >> 31) | (2 * *(_DWORD *)&v95[8]);
              }
              while ( v21 > 0 );
              if ( v21 <= 0 )
              {
LABEL_170:
                if ( --v21 < 0 )
                {
                  v24 = (unsigned __int16)-v21;
                  v21 = 0;
                  do
                  {
                    if ( (v95[0] & 1) != 0 )
                      ++v81;
                    v25 = *(_DWORD *)&v95[8];
                    *(_DWORD *)&v95[8] >>= 1;
                    v26 = __SPAIR64__(v25, *(unsigned int *)&v95[4]) >> 1;
                    v27 = *(__int64 *)v95 >> 1;
                    --v24;
                    *(_DWORD *)&v95[4] = v26;
                    *(_DWORD *)v95 = v27;
                  }
                  while ( v24 != 0 );
                  if ( v81 != 0 )
                    *(_WORD *)v95 |= 1u;
                }
              }
              if ( *(_WORD *)v95 > 0x8000u || (*(_DWORD *)v95 & 0x1FFFF) == 0x18000 )
              {
                if ( *(_DWORD *)&v95[2] == -1 )
                {
                  *(_DWORD *)&v95[2] = 0;
                  if ( *(_DWORD *)&v95[6] == -1 )
                  {
                    *(_DWORD *)&v95[6] = 0;
                    if ( *(_WORD *)&v95[10] == 0xFFFF )
                    {
                      *(_WORD *)&v95[10] = 0x8000;
                      ++v21;
                    }
                    else
                    {
                      ++*(_WORD *)&v95[10];
                    }
                  }
                  else
                  {
                    ++*(_DWORD *)&v95[6];
                  }
                }
                else
                {
                  ++*(_DWORD *)&v95[2];
                }
              }
              if ( (unsigned __int16)v21 < 0x7FFFu )
              {
                *(_WORD *)v94 = *(_WORD *)&v95[2];
                *(_DWORD *)&v94[2] = *(_DWORD *)&v95[4];
                *(_DWORD *)&v94[6] = *(_DWORD *)&v95[8];
                *(_WORD *)&v94[10] = v73 | v21;
              }
              else
              {
                *(_DWORD *)&v94[4] = 0;
                *(_DWORD *)v94 = 0;
                *(_DWORD *)&v94[8] = v73 == 0 ? 2147450880 : -32768;
              }
              continue;
            }
          }
          *(_DWORD *)&v94[8] = 0;
        }
        *(_DWORD *)&v94[4] = 0;
        *(_DWORD *)v94 = 0;
      }
    }
  }
  if ( *(_WORD *)&v94[10] >= 0x3FFFu )
  {
    ++v79;
    v78 = 0;
    memset(v95, 0, sizeof(v95));
    v72 = (*(_WORD *)&v94[10] ^ HIWORD(v93)) & 0x8000;
    v28 = (HIWORD(v93) & 0x7FFF) + (*(_WORD *)&v94[10] & 0x7FFF);
    if ( (*(_WORD *)&v94[10] & 0x7FFF) == 0x7FFF || (HIWORD(v93) & 0x7FFF) == 0x7FFF || v28 > 0xBFFDu )
    {
      *(_DWORD *)&v94[4] = 0;
      v29 = ((*(_WORD *)&v94[10] ^ HIWORD(v93)) & 0x8000u) == 0 ? 2147450880 : -32768;
      *(_DWORD *)v94 = 0;
    }
    else
    {
      if ( v28 > 0x3FBFu )
      {
        v29 = 0;
        if ( (*(_WORD *)&v94[10] & 0x7FFF) == 0 )
        {
          ++v28;
          if ( (*(_DWORD *)&v94[8] & 0x7FFFFFFF) == 0 && *(_DWORD *)&v94[4] == 0 && *(_DWORD *)v94 == 0 )
          {
            *(_WORD *)&v94[10] = 0;
            goto LABEL_132;
          }
        }
        if ( (v93 & 0x7FFF0000) != 0 || (++v28, (v93 & 0x7FFFFFFF) != 0) || v92 != 0 || v91 != 0 )
        {
          v76 = 0;
          v30 = &v95[4];
          for ( j = 5; j > 0; --j )
          {
            v82 = j;
            v74 = &v93;
            v31 = (unsigned __int16 *)&v94[2 * v76];
            do
            {
              v84 = 0;
              v32 = *v31 * *(unsigned __int16 *)v74;
              v33 = *((_DWORD *)v30 - 1);
              v34 = v33 + v32;
              if ( v33 + v32 < v33 || v34 < v32 )
                v84 = 1;
              *((_DWORD *)v30 - 1) = v34;
              if ( v84 != 0 )
                ++*v30;
              v74 = (int *)((char *)v74 - 2);
              ++v31;
              --v82;
            }
            while ( v82 > 0 );
            ++v30;
            ++v76;
          }
          v35 = v28 - 16382;
          if ( v35 <= 0 )
            goto LABEL_171;
          do
          {
            if ( *(int *)&v95[8] < 0 )
              break;
            v36 = *(_DWORD *)v95;
            *(_DWORD *)v95 *= 2;
            v37 = *(_DWORD *)&v95[4];
            *(_DWORD *)&v95[4] = (v36 >> 31) | (2 * *(_DWORD *)&v95[4]);
            --v35;
            *(_DWORD *)&v95[8] = (v37 >> 31) | (2 * *(_DWORD *)&v95[8]);
          }
          while ( v35 > 0 );
          if ( v35 <= 0 )
          {
LABEL_171:
            if ( --v35 < 0 )
            {
              v38 = (unsigned __int16)-v35;
              v35 = 0;
              do
              {
                if ( (v95[0] & 1) != 0 )
                  ++v78;
                v39 = *(_DWORD *)&v95[8];
                *(_DWORD *)&v95[8] >>= 1;
                v40 = __SPAIR64__(v39, *(unsigned int *)&v95[4]) >> 1;
                v41 = *(__int64 *)v95 >> 1;
                --v38;
                *(_DWORD *)&v95[4] = v40;
                *(_DWORD *)v95 = v41;
              }
              while ( v38 != 0 );
              if ( v78 != 0 )
                *(_WORD *)v95 |= 1u;
            }
          }
          if ( *(_WORD *)v95 > 0x8000u || (*(_DWORD *)v95 & 0x1FFFF) == 0x18000 )
          {
            if ( *(_DWORD *)&v95[2] == -1 )
            {
              *(_DWORD *)&v95[2] = 0;
              if ( *(_DWORD *)&v95[6] == -1 )
              {
                *(_DWORD *)&v95[6] = 0;
                if ( *(_WORD *)&v95[10] == 0xFFFF )
                {
                  *(_WORD *)&v95[10] = 0x8000;
                  ++v35;
                }
                else
                {
                  ++*(_WORD *)&v95[10];
                }
              }
              else
              {
                ++*(_DWORD *)&v95[6];
              }
            }
            else
            {
              ++*(_DWORD *)&v95[2];
            }
          }
          if ( (unsigned __int16)v35 < 0x7FFFu )
          {
            *(_WORD *)v94 = *(_WORD *)&v95[2];
            *(_DWORD *)&v94[2] = *(_DWORD *)&v95[4];
            *(_DWORD *)&v94[6] = *(_DWORD *)&v95[8];
            *(_WORD *)&v94[10] = v72 | v35;
          }
          else
          {
            *(_DWORD *)&v94[4] = 0;
            *(_DWORD *)v94 = 0;
            *(_DWORD *)&v94[8] = v72 == 0 ? 2147450880 : -32768;
          }
          goto LABEL_132;
        }
      }
      else
      {
        v29 = 0;
      }
      *(_DWORD *)&v94[4] = 0;
      *(_DWORD *)v94 = 0;
    }
    *(_DWORD *)&v94[8] = v29;
  }
LABEL_132:
  v42 = a3;
  *(_WORD *)a5 = v79;
  if ( (a4 & 1) != 0 )
  {
    v42 = v79 + a3;
    if ( v42 <= 0 )
    {
      *(_WORD *)a5 = 0;
      *(_BYTE *)(a5 + 3) = 1;
      *(_BYTE *)(a5 + 2) = v70 != -32768 ? 32 : 45;
      *(_BYTE *)(a5 + 4) = 48;
      *(_BYTE *)(a5 + 5) = 0;
      return 1;
    }
  }
  if ( v42 > 21 )
    v42 = 21;
  v43 = *(unsigned __int16 *)&v94[10] - 16382;
  *(_WORD *)&v94[10] = 0;
  v85 = 8;
  do
  {
    v44 = *(_DWORD *)v94;
    *(_DWORD *)v94 *= 2;
    v45 = (v44 >> 31) | (2 * *(_DWORD *)&v94[4]);
    v46 = *(__int64 *)&v94[4] >> 31;
    v47 = v85-- == 1;
    *(_DWORD *)&v94[4] = v45;
    *(_DWORD *)&v94[8] = v46;
  }
  while ( !v47 );
  if ( v43 < 0 )
  {
    v48 = (unsigned __int8)-(char)v43;
    if ( v48 != 0 )
    {
      do
      {
        v49 = *(_DWORD *)&v94[8];
        *(_DWORD *)&v94[8] >>= 1;
        v50 = (v49 << 31) | (*(_DWORD *)&v94[4] >> 1);
        v51 = *(__int64 *)v94 >> 1;
        --v48;
        *(_DWORD *)&v94[4] = v50;
        *(_DWORD *)v94 = v51;
      }
      while ( v48 > 0 );
    }
  }
  v52 = (_BYTE *)(a5 + 4);
  v89 = (char *)(a5 + 4);
  for ( k = v42 + 1; k > 0; v94[11] = 0 )
  {
    v53 = *(_DWORD *)v94;
    *(_DWORD *)v90 = *(_DWORD *)v94;
    *(_QWORD *)&v90[4] = *(_QWORD *)&v94[4];
    *(_DWORD *)v94 *= 2;
    v54 = *(_DWORD *)v94;
    *(_DWORD *)v94 *= 2;
    v55 = (v53 >> 31) | (2 * *(_DWORD *)&v94[4]);
    v56 = 2 * v55;
    v57 = (v55 >> 31) | (2 * (*(__int64 *)&v94[4] >> 31));
    v58 = (v54 >> 31) | v56;
    v59 = *(_DWORD *)v90 + *(_DWORD *)v94;
    if ( (unsigned int)(*(_DWORD *)v90 + *(_DWORD *)v94) < *(_DWORD *)v94 || v59 < *(_DWORD *)v90 )
    {
      v60 = 0;
      if ( v58 + 1 < v58 || v58 == -1 )
        v60 = 1;
      ++v58;
      if ( v60 != 0 )
        ++v57;
    }
    v61 = *(_DWORD *)&v90[4] + v58;
    v86 = *(_DWORD *)&v90[4] + v58;
    if ( *(_DWORD *)&v90[4] + v58 < v58 || v61 < *(_DWORD *)&v90[4] )
      ++v57;
    *(_DWORD *)v94 = 2 * v59;
    *(_DWORD *)&v94[8] = (v61 >> 31) | (2 * (*(_DWORD *)&v90[8] + v57));
    *v52++ = v94[11] + 48;
    --k;
    *(_DWORD *)&v94[4] = (v59 >> 31) | (2 * v86);
  }
  v62 = v52 - 1;
  v63 = *v62;
  v64 = v62 - 1;
  if ( v63 >= 53 )
  {
    while ( v64 >= v89 && *v64 == 57 )
      *v64-- = 48;
    v65 = a5;
    if ( v64 < v89 )
    {
      ++v64;
      ++*(_WORD *)a5;
    }
    ++*v64;
  }
  else
  {
    while ( v64 >= v89 && *v64 == 48 )
      --v64;
    v65 = a5;
    if ( v64 < v89 )
    {
      *(_WORD *)a5 = 0;
      *(_BYTE *)(a5 + 3) = 1;
      *(_BYTE *)(a5 + 2) = v70 != -32768 ? 32 : 45;
      *v89 = 48;
      *(_BYTE *)(a5 + 5) = 0;
      return 1;
    }
  }
  v66 = (_BYTE)v64 - v65 - 3;
  *(_BYTE *)(v65 + 3) = v66;
  *(_BYTE *)(v66 + v65 + 4) = 0;
  return 1;
}

// Address: 0x1001A502
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

// Address: 0x1001A590
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

// Address: 0x1001A630
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
  if ( dword_100282C4 != 0 )
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

// Address: 0x1001A93F
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

// Address: 0x1001AB0D
int __cdecl __set_fpsr_sse2(unsigned int a1)
{
  int result; // eax

  result = 0;
  if ( dword_100282C4 != 0 )
  {
    if ( (a1 & 0x40) != 0 && dword_10026674 != 0 )
      _mm_setcsr(a1);
    else
      _mm_setcsr(a1 & 0xFFFFFFBF);
  }
  return result;
}

// Address: 0x1001B130
int sub_1001B130()
{
  sub_100017F0();
  return atexit(sub_1001B170);
}

// Address: 0x1001B150
int sub_1001B150()
{
  return atexit(sub_1001B1D0);
}

// Address: 0x1001B160
int sub_1001B160()
{
  return atexit(sub_1001B1E0);
}

// Address: 0x1001B170
void __cdecl sub_1001B170()
{
  sub_10001B80();
  operator delete(dword_1002724C);
}

// Address: 0x1001B1C0
void __cdecl sub_1001B1C0()
{
  operator delete((void *)lpBuffer);
}

// Address: 0x1001B1D0
void __cdecl sub_1001B1D0()
{
  sub_10007E50(&off_10026094);
}

// Address: 0x1001B1E0
void __cdecl sub_1001B1E0()
{
  volatile signed __int32 *v0; // esi

  v0 = (volatile signed __int32 *)dword_10027270;
  if ( dword_10027270 != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(dword_10027270 + 8), 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v0)(v0);
    if ( _InterlockedExchangeAdd(v0 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v0 + 4))(v0);
  }
}

// Address: 0x1001B220
void __cdecl sub_1001B220()
{
  sub_10008830();
  operator delete(dword_10027274);
}

// Address: 0x1001B26C
void __cdecl sub_1001B26C()
{
  dword_10026684 = (int)&std::bad_alloc::`vftable';
  sub_10009F04(&dword_10026684);
}

