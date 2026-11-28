// Decompiled from IpConfig.dll (ClassM_3.0.500\ClassM_x64_unpacked\$PLUGINSDIR\IpConfig.dll)

// Address: 0x10001000
int __cdecl sub_10001000(unsigned __int8 *Str1, unsigned __int8 *Str2)
{
  return _mbscmp(Str1, Str2);
}

// Address: 0x10001020
void __cdecl sub_10001020(void *Block)
{
  free(Block);
}

// Address: 0x10001040
// ?_Getcat@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SAIXZ
// doubtful name
int sub_10001040()
{
  return 3;
}

// Address: 0x10001050
OLECHAR *__cdecl sub_10001050(LPCCH lpMultiByteStr, int cbMultiByte)
{
  OLECHAR *lpWideCharStr; // [esp+Ch] [ebp-20h]
  UINT cchWideChar; // [esp+10h] [ebp-1Ch]
  _BYTE v5[8]; // [esp+14h] [ebp-18h] BYREF
  UINT CodePage; // [esp+1Ch] [ebp-10h]
  UINT ui; // [esp+20h] [ebp-Ch]

  if ( lpMultiByteStr == nullptr || cbMultiByte == 0 )
    return nullptr;
  CodePage = sub_10001040();
  unknown_libname_5(v5);
  cchWideChar = MultiByteToWideChar(CodePage, 0, lpMultiByteStr, cbMultiByte, nullptr, 0);
  ui = cchWideChar;
  if ( cbMultiByte == -1 )
    --ui;
  lpWideCharStr = SysAllocStringLen(nullptr, ui);
  if ( lpWideCharStr == nullptr
    || MultiByteToWideChar(CodePage, 0, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar) == cchWideChar )
  {
    sub_10001D30(v5);
    return lpWideCharStr;
  }
  else
  {
    SysFreeString(lpWideCharStr);
    sub_10001D30(v5);
    return nullptr;
  }
}

// Address: 0x10001120
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_1(_DWORD *this, int a2)
{
  *this = a2;
  return this;
}

// Address: 0x10001140
void __stdcall __noreturn sub_10001140(int a1)
{
  int v1; // [esp+0h] [ebp-8h] BYREF
  int pExceptionObject; // [esp+4h] [ebp-4h] BYREF

  pExceptionObject = *unknown_libname_1(&v1, a1);
  _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1_AVCAtlException_ATL__);
}

// Address: 0x10001170
int __stdcall sub_10001170(_DWORD *a1, int a2)
{
  if ( a1 == nullptr )
    return 0;
  if ( a2 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( *a1 != 0 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*a1 + 8))(*a1);
  *a1 = a2;
  return a2;
}

// Address: 0x100011C0
bool __thiscall sub_100011C0(_DWORD *this)
{
  return *this == 0;
}

// Address: 0x100011E0
OLECHAR **__thiscall sub_100011E0(OLECHAR **this, LPCCH lpMultiByteStr)
{
  if ( lpMultiByteStr != nullptr )
  {
    *this = sub_10001050(lpMultiByteStr, -1);
    if ( sub_100011C0(this) )
      sub_10001140(-2147024882);
  }
  else
  {
    *this = nullptr;
  }
  return this;
}

// Address: 0x10001230
void __thiscall Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(BSTR *this)
{
  SysFreeString(*this);
}

// Address: 0x10001250
void __cdecl sub_10001250(int a1)
{
  if ( a1 < 0 )
    sub_10002200(a1);
}

// Address: 0x10001270
Concurrency::cancellation_token_source *__thiscall sub_10001270(
        Concurrency::cancellation_token_source *this,
        _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  Concurrency::cancellation_token_source::~cancellation_token_source(this);
  return this;
}

// Address: 0x100012A0
int *__thiscall sub_100012A0(int *this, LPCSTR lpString)
{
  int v3; // [esp+4h] [ebp-1Ch]

  if ( sub_10001BA0(0xCu) != 0 )
    v3 = sub_10001830(lpString);
  else
    v3 = 0;
  *this = v3;
  if ( *this == 0 )
    sub_10002200(-2147024882);
  return this;
}

// Address: 0x10001340
int *__thiscall sub_10001340(int *this, OLECHAR *psz)
{
  int v3; // [esp+4h] [ebp-1Ch]

  if ( sub_10001BA0(0xCu) != 0 )
    v3 = sub_10001870(psz);
  else
    v3 = 0;
  *this = v3;
  if ( *this == 0 )
    sub_10002200(-2147024882);
  return this;
}

// Address: 0x100013E0
int __thiscall sub_100013E0(void *this)
{
  return sub_10001790(this, this);
}

// Address: 0x10001400
Concurrency::cancellation_token_source *__thiscall sub_10001400(
        Concurrency::cancellation_token_source *this,
        Concurrency::cancellation_token_source *a2)
{
  Concurrency::cancellation_token_source *v3; // [esp+0h] [ebp-4h]

  v3 = this;
  if ( this != a2 )
  {
    sub_10001790(this, this);
    *(_DWORD *)v3 = *(_DWORD *)a2;
    Concurrency::cancellation_token_source::~cancellation_token_source(v3);
  }
  return v3;
}

// Address: 0x10001440
int *__thiscall sub_10001440(int *this, OLECHAR *psz)
{
  int v3; // [esp+4h] [ebp-1Ch]

  if ( psz == nullptr || (OLECHAR *)sub_100016C0(this) != psz )
  {
    sub_10001790(this);
    if ( sub_10001BA0(0xCu) != 0 )
      v3 = sub_10001870(psz);
    else
      v3 = 0;
    *this = v3;
    if ( *this == 0 )
      sub_10002200(-2147024882);
  }
  return this;
}

// Address: 0x100014F0
_DWORD *__thiscall sub_100014F0(_DWORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-20h]

  if ( sub_10001BA0(0xCu) != 0 )
    v3 = sub_100018C0(this, a2);
  else
    v3 = 0;
  if ( v3 == 0 )
    sub_10002200(-2147024882);
  sub_10001790(this);
  *this = v3;
  return this;
}

// Address: 0x100015A0
Concurrency::cancellation_token_source *__thiscall sub_100015A0(
        _DWORD *this,
        Concurrency::cancellation_token_source *a2,
        int a3)
{
  int v4; // [esp+Ch] [ebp-10h] BYREF
  int v5; // [esp+18h] [ebp-4h]

  sub_10001270((Concurrency::cancellation_token_source *)&v4, this);
  v5 = 0;
  sub_100014F0(&v4, a3);
  sub_10001270(a2, &v4);
  v5 = -1;
  sub_100013E0(&v4);
  return a2;
}

// Address: 0x10001630
Concurrency::cancellation_token_source *__cdecl sub_10001630(
        Concurrency::cancellation_token_source *a1,
        LPCSTR lpString,
        int a3)
{
  int v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-4h]

  sub_100012A0(&v4, lpString);
  v5 = 0;
  sub_100014F0(&v4, a3);
  sub_10001270(a1, &v4);
  v5 = -1;
  sub_100013E0(&v4);
  return a1;
}

// Address: 0x100016C0
int __thiscall sub_100016C0(_DWORD *this)
{
  if ( *this != 0 )
    return *(_DWORD *)unknown_libname_3(*this);
  else
    return 0;
}

// Address: 0x100016F0
int __thiscall sub_100016F0(_DWORD *this)
{
  if ( *this != 0 )
    return sub_10001A80(*this);
  else
    return 0;
}

// Address: 0x10001720
BOOL __stdcall sub_10001720(int a1)
{
  return sub_100017C0(a1) != 0;
}

// Address: 0x10001740
int __thiscall sub_10001740(_DWORD *this)
{
  if ( *this != 0 )
    return sub_10001AB0(*this);
  else
    return 0;
}

// Address: 0x10001770
void __thiscall Concurrency::cancellation_token_source::~cancellation_token_source(
        Concurrency::cancellation_token_source *this)
{
  if ( *(_DWORD *)this != 0 )
    sub_100019E0(*(_DWORD *)this);
}

// Address: 0x10001790
_DWORD *__thiscall sub_10001790(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  if ( *this != 0 )
  {
    result = (_DWORD *)sub_10001A00(*this);
    *this = 0;
  }
  return result;
}

// Address: 0x100017C0
int __thiscall sub_100017C0(_DWORD *this, _DWORD *a2)
{
  if ( *this == *a2 )
    return 0;
  if ( *this != 0 )
  {
    if ( *a2 != 0 )
      return sub_10001AE0(*a2);
    else
      return sub_10001740(this) != 0;
  }
  else if ( sub_10001740(a2) != 0 )
  {
    return -1;
  }
  else
  {
    return 0;
  }
}

// Address: 0x10001830
_DWORD *__thiscall sub_10001830(_DWORD *this, LPCSTR lpString)
{
  *(this + 1) = 0;
  *(this + 2) = 1;
  *this = sub_10001F60(lpString);
  return this;
}

// Address: 0x10001870
BSTR *__thiscall sub_10001870(BSTR *this, OLECHAR *psz)
{
  *(this + 1) = nullptr;
  *(this + 2) = (BSTR)1;
  *this = SysAllocString(psz);
  if ( *this == nullptr && psz != nullptr )
    sub_10002200(-2147024882);
  return this;
}

// Address: 0x100018C0
int __thiscall sub_100018C0(int this, _DWORD *a2, _DWORD *a3)
{
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+8h] [ebp-10h] BYREF
  void *Source; // [esp+Ch] [ebp-Ch]
  void *v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 1;
  v9 = sub_10001740(a2);
  v5 = sub_10001740(a3);
  if ( (int)sub_1000FAE0(v9, v5, &v6) < 0 || (int)sub_1000FAA0(v6, 2, &v6) < 0 )
    sub_10002200(-2147024882);
  *(_DWORD *)this = SysAllocStringByteLen(nullptr, 2 * (v5 + v9));
  if ( *(_DWORD *)this != 0 )
  {
    Source = (void *)sub_100016C0(a2);
    if ( Source != nullptr )
      memcpy_s(*(void *const *)this, 2 * (v5 + v9) + 2, Source, 2 * v9 + 2);
    v8 = (void *)sub_100016C0(a3);
    if ( v8 != nullptr )
      memcpy_s((void *const)(*(_DWORD *)this + 2 * v9), 2 * v5 + 2, v8, 2 * v5 + 2);
  }
  else if ( v5 + v9 != 0 )
  {
    sub_10002200(-2147024882);
  }
  return this;
}

// Address: 0x100019E0
int __thiscall sub_100019E0(volatile LONG *this)
{
  InterlockedIncrement(this + 2);
  return *((_DWORD *)this + 2);
}

// Address: 0x10001A00
LONG __thiscall sub_10001A00(volatile LONG *this)
{
  LONG v3; // [esp+10h] [ebp-4h]

  v3 = InterlockedDecrement(this + 2);
  if ( v3 == 0 && this != nullptr )
    sub_10001A50(1);
  return v3;
}

// Address: 0x10001A50
void *__thiscall sub_10001A50(void *this, char a2)
{
  sub_10001BC0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001A80
int __thiscall sub_10001A80(int this)
{
  if ( *(_DWORD *)(this + 4) == 0 )
    *(_DWORD *)(this + 4) = sub_100020E0(*(LPCWCH *)this);
  return *(_DWORD *)(this + 4);
}

// Address: 0x10001AB0
UINT __thiscall sub_10001AB0(BSTR *this)
{
  if ( *this != nullptr )
    return SysStringLen(*this);
  else
    return 0;
}

// Address: 0x10001AE0
int __thiscall sub_10001AE0(BSTR *this, BSTR *a2)
{
  UINT v2; // edx
  int v3; // edx
  int v4; // ecx
  UINT v8; // [esp+8h] [ebp-14h]
  BSTR v9; // [esp+Ch] [ebp-10h]
  BSTR v10; // [esp+10h] [ebp-Ch]
  UINT v11; // [esp+14h] [ebp-8h]
  UINT v12; // [esp+18h] [ebp-4h]

  v12 = SysStringLen(*this);
  v8 = SysStringLen(*a2);
  v11 = v12;
  if ( v12 > v8 )
    v11 = v8;
  v9 = *this;
  v10 = *a2;
  while ( 1 )
  {
    v2 = v11--;
    if ( v2 == 0 )
      break;
    v3 = *v10;
    v4 = *v9;
    ++v10;
    ++v9;
    if ( v4 != v3 )
      return *(v9 - 1) - *(v10 - 1);
  }
  if ( v12 >= v8 )
    return v12 != v8;
  else
    return -1;
}

// Address: 0x10001BA0
void *__cdecl sub_10001BA0(size_t Size)
{
  return operator new(Size);
}

// Address: 0x10001BC0
int __thiscall sub_10001BC0(void *this)
{
  return sub_10001BE0(this, this);
}

// Address: 0x10001BE0
void __thiscall sub_10001BE0(int this)
{
  if ( *(_DWORD *)this != 0 )
    SysFreeString(*(BSTR *)this);
  if ( *(_DWORD *)(this + 4) != 0 )
    operator delete[](*(void **)(this + 4));
}

// Address: 0x10001C20
// Microsoft VisualC 2-14/net runtime
void __thiscall unknown_libname_2(VARIANTARG *this)
{
  VariantInit(this);
}

// Address: 0x10001C40
VARIANTARG *__thiscall sub_10001C40(VARIANTARG *this, VARIANTARG *pvargSrc)
{
  HRESULT v2; // eax

  if ( pvargSrc == nullptr )
    sub_10002200(-2147467261);
  VariantInit(this);
  v2 = VariantCopy(this, pvargSrc);
  sub_10001250(v2);
  return this;
}

// Address: 0x10001C90
_DWORD *__thiscall sub_10001C90(_DWORD *this, int a2)
{
  *(_WORD *)this = 22;
  *(this + 2) = a2;
  return this;
}

// Address: 0x10001CC0
VARIANTARG *__thiscall sub_10001CC0(VARIANTARG *this, VARIANTARG *pvargSrc)
{
  HRESULT v2; // eax

  v2 = VariantCopy(this, pvargSrc);
  sub_10001250(v2);
  return this;
}

// Address: 0x10001CF0
void __thiscall sub_10001CF0(VARIANTARG *this)
{
  VariantClear(this);
}

// Address: 0x10001D10
int __thiscall sub_10001D10(void *this)
{
  return sub_10001E10(this, this);
}

// Address: 0x10001D30
_DWORD **__thiscall sub_10001D30(_DWORD **this)
{
  _DWORD **result; // eax
  _DWORD **Block; // [esp+4h] [ebp-4h]

  while ( 1 )
  {
    result = this;
    if ( *this == nullptr )
      break;
    Block = (_DWORD **)*this;
    *this = (_DWORD *)**this;
    sub_10001020(Block);
  }
  return result;
}

// Address: 0x10001D70
void *__thiscall sub_10001D70(void *this)
{
  unknown_libname_5(this);
  return this;
}

// Address: 0x10001D90
// Microsoft VisualC 2-14/net runtime
void *__thiscall unknown_libname_3(void *this)
{
  return this;
}

// Address: 0x10001DA0
// Microsoft VisualC 2-14/net runtime
int __thiscall unknown_libname_4(void *this)
{
  return *(_DWORD *)this;
}

// Address: 0x10001DB0
type_info *__thiscall sub_10001DB0(type_info *this, struct type_info *a2)
{
  type_info::type_info(this, a2);
  return this;
}

// Address: 0x10001DD0
int __thiscall sub_10001DD0(_DWORD *this, int a2)
{
  if ( (unsigned __int8)sub_10001EA0(a2) != 0 )
    return sub_10001170(this, a2);
  else
    return unknown_libname_4(this);
}

// Address: 0x10001E10
int __thiscall sub_10001E10(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *this != 0 )
    return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this);
  return result;
}

// Address: 0x10001E40
BOOL __thiscall sub_10001E40(_DWORD *this, int a2)
{
  return *this == a2;
}

// Address: 0x10001E60
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_5(_DWORD *this)
{
  *this = 0;
  return this;
}

// Address: 0x10001E80
type_info *__thiscall type_info::type_info(type_info *this, const struct type_info *a2)
{
  *(_DWORD *)this = 0;
  return this;
}

// Address: 0x10001EA0
BOOL __thiscall sub_10001EA0(_DWORD *this, int a2)
{
  return !sub_10001E40(this, a2);
}

// Address: 0x10001ED0
errno_t __cdecl sub_10001ED0(char *Destination, char *Source)
{
  return strcpy_s(Destination, 0x400u, Source);
}

// Address: 0x10001EF0
errno_t __cdecl sub_10001EF0(char *Destination, char *Source)
{
  return strcat_s(Destination, 0x400u, Source);
}

// Address: 0x10001F10
int sub_10001F10(char *Buffer, char *Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  return vsprintf_s(Buffer, 0x400u, Format, va);
}

// Address: 0x10001F40
errno_t __cdecl sub_10001F40(int Value, char *Buffer, int Radix)
{
  return _ltoa_s(Value, Buffer, 0x400u, Radix);
}

// Address: 0x10001F60
BSTR __stdcall sub_10001F60(LPCSTR lpString)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  signed int LastError; // eax
  int v6; // eax
  void *v7; // esp
  _DWORD *v8; // ebx
  signed int v9; // eax
  BSTR v10; // edi
  _DWORD v11[5]; // [esp+0h] [ebp-38h] BYREF
  _DWORD *v12; // [esp+14h] [ebp-24h]
  int v13; // [esp+18h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  if ( lpString == nullptr )
    return nullptr;
  v2 = lstrlenA(lpString) + 1;
  v13 = v2;
  v3 = MultiByteToWideChar(0, 0, lpString, v2, nullptr, 0);
  v4 = v3;
  v11[4] = v3;
  if ( v3 == 0 )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    sub_10002200(LastError);
  }
  ms_exc.registration.TryLevel = 0;
  v6 = 2 * v3;
  if ( v4 >= 4096 )
  {
    v8 = malloc(2 * v4);
    v12 = v8;
  }
  else
  {
    v7 = alloca(v6);
    ms_exc.old_esp = (DWORD)v11;
    v8 = v11;
    v12 = v11;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v8 == nullptr )
    sub_10002200(-2147024882);
  if ( MultiByteToWideChar(0, 0, lpString, v2, (LPWSTR)v8, v4) == 0 )
  {
    if ( v4 >= 4096 )
      free(v8);
    v9 = GetLastError();
    if ( v9 > 0 )
      v9 = (unsigned __int16)v9 | 0x80070000;
    sub_10002200(v9);
  }
  v10 = SysAllocString((const OLECHAR *)v8);
  if ( v4 >= 4096 )
    free(v8);
  if ( v10 == nullptr )
    sub_10002200(-2147024882);
  return v10;
}

// Address: 0x100020E0
void *__stdcall sub_100020E0(LPCWCH lpWideCharStr)
{
  int v2; // edi
  size_t v3; // eax
  int v4; // esi
  signed int LastError; // eax
  void *v6; // ebx
  signed int v7; // eax
  _DWORD v8[5]; // [esp+0h] [ebp-20h] BYREF
  int v9; // [esp+1Ch] [ebp-4h]

  v8[4] = v8;
  if ( lpWideCharStr == nullptr )
    return nullptr;
  v2 = wcslen(lpWideCharStr) + 1;
  v3 = WideCharToMultiByte(0, 0, lpWideCharStr, v2, nullptr, 0, nullptr, nullptr);
  v4 = v3;
  if ( v3 == 0 )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    sub_10002200(LastError);
  }
  v9 = 0;
  v6 = operator new(v3);
  v9 = -1;
  if ( v6 == nullptr )
    sub_10002200(-2147024882);
  if ( WideCharToMultiByte(0, 0, lpWideCharStr, v2, (LPSTR)v6, v4, nullptr, nullptr) == 0 )
  {
    operator delete(v6);
    v7 = GetLastError();
    if ( v7 > 0 )
      v7 = (unsigned __int16)v7 | 0x80070000;
    sub_10002200(v7);
  }
  return v6;
}

// Address: 0x10002200
void __stdcall __noreturn sub_10002200(int a1)
{
  off_1001B010(a1, 0);
}

// Address: 0x10002220
HANDLE __thiscall sub_10002220(void *this)
{
  HANDLE result; // eax

  result = *((HANDLE *)this + 2);
  *(_DWORD *)this = &off_100161DC;
  if ( result != nullptr )
    result = (HANDLE)(*(int (__stdcall **)(HANDLE))(*(_DWORD *)result + 8))(result);
  if ( *((_DWORD *)this + 3) != 0 )
  {
    result = GetProcessHeap();
    if ( result != nullptr )
      return (HANDLE)HeapFree(result, 0, *((LPVOID *)this + 3));
  }
  return result;
}

// Address: 0x10002260
void __cdecl __noreturn sub_10002260(int a1, int a2)
{
  _DWORD pExceptionObject[4]; // [esp+0h] [ebp-10h] BYREF

  pExceptionObject[0] = &off_100161DC;
  pExceptionObject[1] = a1;
  pExceptionObject[2] = a2;
  pExceptionObject[3] = 0;
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AV_com_error__);
}

// Address: 0x100022A0
_DWORD *__thiscall sub_100022A0(_DWORD *this, int a2)
{
  int v3; // edx

  *this = &off_100161DC;
  *(this + 1) = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  *(this + 2) = v3;
  *(this + 3) = 0;
  if ( v3 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  return this;
}

// Address: 0x100022E0
void *__thiscall sub_100022E0(void *this, char a2)
{
  int v3; // eax
  HANDLE ProcessHeap; // eax

  v3 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_100161DC;
  if ( v3 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  if ( *((_DWORD *)this + 3) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    if ( ProcessHeap != nullptr )
      HeapFree(ProcessHeap, 0, *((LPVOID *)this + 3));
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10002330
void __cdecl operator delete(void *Block)
{
  free(Block);
}

// Address: 0x1000233B
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x1000234A
void __cdecl free(void *Block)
{
  int v1; // eax
  int *v2; // esi
  DWORD LastError; // eax
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_1002276C != 3 )
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

// Address: 0x100023D8
int __cdecl atol(const char *String)
{
  return strtol(String, nullptr, 10);
}

// Address: 0x100023EE
int __cdecl atoi(const char *String)
{
  return atol(String);
}

// Address: 0x100023F9
void __stdcall __ArrayUnwind(char *a1, unsigned int a2, int a3, void (*a4)(void))
{
  while ( --a3 >= 0 )
  {
    a1 -= a2;
    a4();
  }
}

// Address: 0x10002457
void __stdcall `eh vector destructor iterator'(char *a1, unsigned int a2, int a3, void (__thiscall *a4)(void *))
{
  char *i; // [esp+34h] [ebp+8h]

  for ( i = &a1[a3 * a2]; --a3 >= 0; a4(i) )
    i -= a2;
}

// Address: 0x100024BA
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
    _invalid_parameter(0, 0, 0, 0, 0);
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
    _invalid_parameter(0, 0, 0, 0, 0);
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

// Address: 0x10002597
errno_t __cdecl _ltoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = false;
  if ( Radix == 10 )
    v4 = Value < 0;
  return xtoa_s(Value, Buffer, BufferCount, Radix, v4);
}

// Address: 0x100025BE
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

  v1 = (_DWORD *)_decode_pointer(dword_10022748);
  Block = v1;
  v2 = (_DWORD *)_decode_pointer(dword_10022744);
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
        dword_10022744 = _encode_pointer(v3 + 1);
        return a1;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = _realloc_crt(Block, v7)) != 0 || v5 + 16 >= v5 && (v8 = _realloc_crt(Block, v5 + 16)) != 0 )
      {
        v3 = (_DWORD *)(v8 + 4 * (v4 >> 2));
        dword_10022748 = _encode_pointer(v8);
        goto LABEL_11;
      }
    }
  }
  return 0;
}

// Address: 0x10002678
int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(0x20u, 4);
  dword_10022748 = _encode_pointer(v0);
  dword_10022744 = dword_10022748;
  if ( v0 == nullptr )
    return 24;
  *v0 = 0;
  return 0;
}

// Address: 0x100026A9
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock((int)Func);
  _unlockexit(268445398);
  return v2;
}

// Address: 0x100026E5
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x100026FC
int __cdecl _vsnprintf_helper(
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
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  if ( a3 != 0 && a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  File._cnt = 0x7FFFFFFF;
  if ( a3 <= 0x7FFFFFFF )
    File._cnt = a3;
  File._flag = 66;
  File._base = a2;
  File._ptr = a2;
  result = a1(&File, a4, a5, a6);
  v9 = result;
  if ( a2 != nullptr )
  {
    if ( result >= 0 )
    {
      if ( --File._cnt >= 0 )
      {
        *File._ptr = 0;
        return v9;
      }
      if ( _flsbuf(0, &File) != -1 )
        return v9;
    }
    v7 = File._cnt < 0;
    a2[a3 - 1] = 0;
    return !v7 - 2;
  }
  return result;
}

// Address: 0x100027C8
int __cdecl _vsprintf_s_l(
        char *const Buffer,
        const size_t BufferCount,
        const char *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax

  if ( Format == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  if ( Buffer == nullptr || BufferCount == 0 )
  {
    *_errno() = 22;
LABEL_10:
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  result = _vsnprintf_helper(
             (int (__cdecl *)(FILE *, int, int, int))_output_s_l,
             Buffer,
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

// Address: 0x10002850
int __cdecl vsprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return _vsprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x1000286D
void __stdcall `eh vector constructor iterator'(
        char *a1,
        unsigned int a2,
        int a3,
        void (__thiscall *a4)(void *),
        void (__thiscall *a5)(void *))
{
  int i; // [esp+14h] [ebp-1Ch]

  for ( i = 0; i < a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}

// Address: 0x100028D2
void __cdecl operator delete[](void *a1)
{
  operator delete(a1);
}

// Address: 0x100028DD
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
    _invalid_parameter(0, 0, 0, 0, 0);
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

// Address: 0x10002945
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
      memcpy(Destination, Source, SourceSize);
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
  _invalid_parameter(0, 0, 0, 0, 0);
  return v5;
}

// Address: 0x100029C2
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
  _invalid_parameter(0, 0, 0, 0, 0);
  return v4;
}

// Address: 0x10002A36
void __thiscall sub_10002A36(struct type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable';
  type_info::_Type_info_dtor(this);
}

// Address: 0x10002A46
struct type_info *__thiscall sub_10002A46(struct type_info *this, char a2)
{
  sub_10002A36(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10002A67
BOOL __thiscall type_info::operator==(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0;
}

// Address: 0x10002A87
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
    if ( *(_UNKNOWN **)this != off_1001B978 && (dword_1001B894 & v3[28]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_1001B894 & *(_DWORD *)(*((_DWORD *)this + 2) + 112)) == 0 )
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

// Address: 0x10002B0E
int __cdecl _mbscmp_l(const unsigned __int8 *Str1, const unsigned __int8 *Str2, _locale_t Locale)
{
  int result; // eax
  const unsigned __int8 *v4; // esi
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx
  unsigned __int8 v7; // al
  unsigned __int16 v8; // ax
  _BYTE v9[4]; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  char v12; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, (struct localeinfo_struct *)Locale);
  if ( Str1 != nullptr )
  {
    v4 = Str2;
    if ( Str2 != nullptr )
    {
      if ( *(_DWORD *)(v10 + 8) != 0 )
      {
        do
        {
          v5 = *Str1++;
          v6 = v5;
          if ( (*(_BYTE *)((unsigned __int8)v5 + v10 + 29) & 4) != 0 )
          {
            if ( *Str1 != 0 )
            {
              v7 = *Str1++;
              v6 = v7 | (unsigned __int16)(v6 << 8);
            }
            else
            {
              v6 = 0;
            }
          }
          v8 = *v4++;
          if ( (*(_BYTE *)((unsigned __int8)v8 + v10 + 29) & 4) != 0 )
          {
            if ( *v4 != 0 )
              v8 = *v4++ | (unsigned __int16)(v8 << 8);
            else
              v8 = 0;
          }
          if ( v8 != v6 )
          {
            result = v8 < v6 ? 1 : -1;
            goto LABEL_26;
          }
        }
        while ( v6 != 0 );
        if ( v12 != 0 )
          *(_DWORD *)(v11 + 112) &= ~2u;
        return 0;
      }
      else
      {
        result = strcmp((const char *)Str1, (const char *)Str2);
LABEL_26:
        if ( v12 != 0 )
          *(_DWORD *)(v11 + 112) &= ~2u;
      }
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter(0, 0, 0, 0, 0);
      if ( v12 != 0 )
        *(_DWORD *)(v11 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    if ( v12 != 0 )
      *(_DWORD *)(v11 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}

// Address: 0x10002C35
int __cdecl _mbscmp(const unsigned __int8 *Str1, const unsigned __int8 *Str2)
{
  return _mbscmp_l(Str1, Str2, nullptr);
}

// Address: 0x10002C4C
std::bad_alloc *__thiscall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  std::exception::exception(this, (const char *const *)&off_1001B04C, 1);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10002C67
int __thiscall sub_10002C67(_DWORD *this)
{
  *this = &std::bad_alloc::`vftable';
  return sub_1000732D();
}

// Address: 0x10002C72
_DWORD *__thiscall sub_10002C72(_DWORD *this, char a2)
{
  *this = &std::bad_alloc::`vftable';
  sub_1000732D();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10002C99
std::exception *__thiscall sub_10002C99(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10002CB6
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
      if ( (dword_1001C32C & 1) == 0 )
      {
        dword_1001C32C |= 1u;
        std::bad_alloc::bad_alloc((std::bad_alloc *)dword_1001C320);
        atexit(sub_100159AC);
      }
      sub_10002C99((std::exception *)pExceptionObject, (struct std::exception *)dword_1001C320);
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  return result;
}

// Address: 0x10002D1B
int __stdcall _CRT_INIT(int a1, int a2, int a3)
{
  int v4; // eax
  DWORD *v5; // esi
  int (__stdcall *v6)(int, int); // eax
  DWORD CurrentThreadId; // eax
  int v8; // [esp-8h] [ebp-10h]
  int v9; // [esp-4h] [ebp-Ch]

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
    sub_10007AB4();
    dword_10022770 = (int)GetCommandLineA();
    Source = __crtGetEnvironmentStringsA();
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
    ++dword_1001C330;
  }
  else if ( a2 != 0 )
  {
    if ( a2 == 2 )
    {
      __set_flsgetvalue();
      v4 = _calloc_crt(1u, 532);
      v5 = (DWORD *)v4;
      if ( v4 == 0 )
        return 0;
      v9 = v4;
      v8 = dword_1001B340;
      v6 = (int (__stdcall *)(int, int))_decode_pointer(FlsSetValue);
      if ( v6(v8, v9) == 0 )
      {
        free(v5);
        return 0;
      }
      _initptd((int)v5, 0);
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
    if ( dword_1001C330 <= 0 )
      return 0;
    --dword_1001C330;
    if ( dword_1001C814 == 0 )
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

// Address: 0x10002E50
BOOL __fastcall __DllMainCRTStartup(void *a1, DWORD a2, HINSTANCE hinstDLL)
{
  BOOL v5; // eax
  BOOL v7; // [esp+10h] [ebp-1Ch]

  if ( a2 == 0 && dword_1001C330 == 0 || (a2 == 1 || a2 == 2) && _CRT_INIT((int)hinstDLL, a2, (int)a1) == 0 )
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

// Address: 0x10002F46
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return __DllMainCRTStartup(lpReserved, fdwReason, hinstDLL);
}

// Address: 0x10002F69
int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = 0;
  if ( a1 <= dword_1002275C )
  {
    _lock(4);
    v2 = __sbh_alloc_block(a1);
    _unlock(4);
  }
  return v2;
}

// Address: 0x10002FB8
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
      if ( dword_1002276C == 1 )
      {
        v2 = v1 != 0 ? v1 : 1;
        v3 = HeapAlloc(hHeap, 0, v2);
      }
      else if ( dword_1002276C != 3 || (v3 = (LPVOID)V6_HeapAlloc(v1)) == nullptr )
      {
        if ( v1 == 0 )
          v1 = 1;
        v3 = HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
      }
      v4 = v3;
      if ( v3 != nullptr )
        return v4;
      if ( dword_1001CC8C == 0 )
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

// Address: 0x10003090
int __cdecl _except_handler4(int a1, _DWORD *TargetFrame, int a3)
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
            && _IsNonwritableInCurrentImage(&off_10016C6C) != 0 )
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

// Address: 0x10003220
int _alloca_probe_16()
{
  return _alloca_probe();
}

// Address: 0x10003236
int _alloca_probe_8()
{
  return _alloca_probe();
}

// Address: 0x1000324C
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x1000327E
// ?_CallMemberFunction0@@YGXPAX0@Z
// doubtful name
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_1000327E(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x10003285
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_27112, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x100032D9
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *a2,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(a2, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x1000330F
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

// Address: 0x10003342
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

// Address: 0x10003419
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

// Address: 0x100034B8
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

// Address: 0x1000352D
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 152);
  *(_DWORD *)(_getptd() + 152) = a1;
  return a1;
}

// Address: 0x10003559
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

// Address: 0x10003580
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

// Address: 0x100035D2
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x10003632
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_100163E8, sizeof(dwExceptionCode));
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)pThrowInfo;
  if ( pThrowInfo != nullptr && (pThrowInfo->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}

// Address: 0x1000367E
void nullsub_1()
{
  ;
}

// Address: 0x1000367F
int (__cdecl *_cfltcvt_init())(int, int, int, int, size_t Size, int)
{
  off_1001BAD0[0] = (int (*)())_cfltcvt;
  off_1001BAD4[0] = (int (*)())_cropzeros;
  off_1001BAD8[0] = (int (*)())_fassign;
  off_1001BADC[0] = (int (*)())_forcdecpt;
  off_1001BAE0[0] = (int (*)())_positive;
  off_1001BAE4[0] = (int (*)())_cfltcvt;
  off_1001BAE8[0] = (int (*)())_cfltcvt_l;
  off_1001BAEC[0] = (int (*)())_fassign_l;
  off_1001BAF0[0] = (int (*)())_cropzeros_l;
  off_1001BAF4 = (int (*)())_forcdecpt_l;
  return _cfltcvt;
}

// Address: 0x100036DF
int __cdecl _fpmath(int a1)
{
  int result; // eax

  _cfltcvt_init();
  result = _ms_p5_mp_test_fdiv();
  dword_1001C348 = result;
  if ( a1 != 0 )
    result = _setdefaultprecision();
  __asm { fnclex }
  return result;
}

// Address: 0x10003710
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
  if ( (_BYTE)Val == 0 && Size >= 0x100 && dword_10022628 != 0 )
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

// Address: 0x1000378A
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

  dword_1001C458 = v0;
  dword_1001C454 = v2;
  dword_1001C450 = v1;
  dword_1001C44C = v3;
  dword_1001C448 = v5;
  dword_1001C444 = v4;
  word_1001C470 = __SS__;
  word_1001C464 = __CS__;
  word_1001C440 = __DS__;
  word_1001C43C = __ES__;
  word_1001C438 = __FS__;
  word_1001C434 = __GS__;
  v6 = __readeflags();
  dword_1001C468 = v6;
  dword_1001C45C = vars0;
  dword_1001C460 = retaddr;
  dword_1001C46C = (int)&v10;
  dword_1001C3A8 = 65537;
  dword_1001C35C = retaddr;
  dword_1001C350 = -1073740791;
  dword_1001C354 = 1;
  dword_1001C3A0 = IsDebuggerPresent();
  sub_10009C0F(1);
  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( dword_1001C3A0 == 0 )
    sub_10009C0F(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x10003890
int __cdecl _get_errno_from_oserr(int a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_1001B0A0[2 * i] )
      return dword_1001B0A4[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x100038D2
int *__cdecl _errno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 8);
  else
    return (int *)&unk_1001B208;
}

// Address: 0x100038E5
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 12);
  else
    return (unsigned int *)&unk_1001B20C;
}

// Address: 0x100038F8
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

// Address: 0x1000391B
int __cdecl _heap_init(int a1)
{
  int result; // eax

  result = (int)HeapCreate(a1 == 0, 0x1000u, 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    dword_1002276C = 1;
    return 1;
  }
  return result;
}

// Address: 0x1000394B
BOOL _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi
  BOOL result; // eax

  if ( dword_1002276C == 3 )
  {
    v0 = 0;
    if ( dword_10022754 > 0 )
    {
      v1 = (LPVOID *)((char *)lpMem + 16);
      do
      {
        VirtualFree(*(v1 - 1), 0, 0x8000u);
        HeapFree(hHeap, 0, *v1);
        v1 += 5;
        ++v0;
      }
      while ( v0 < dword_10022754 );
    }
    HeapFree(hHeap, 0, lpMem);
  }
  result = HeapDestroy(hHeap);
  hHeap = nullptr;
  return result;
}

// Address: 0x100039BF
int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_1001C678;
  while ( 1 )
  {
    if ( dword_1001B21C[2 * v0] == 1 )
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

// Address: 0x10003A0A
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
  while ( (int)v0 < (int)dword_1001B338 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 != nullptr && v2[1] == (LPCRITICAL_SECTION)1 )
      DeleteCriticalSection(*v2);
    v2 += 2;
  }
  while ( (int)v2 < (int)dword_1001B338 );
}

// Address: 0x10003A61
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}

// Address: 0x10003A78
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

// Address: 0x10003B3B
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 == nullptr && _mtinitlocknum(a1) == 0 )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}

// Address: 0x10003B6E
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 20 * dword_10022754; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x10003B9E
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
      if ( dword_1001C7C8 != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_1001C7C8 + 3) + (dword_10022768 << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_1001C7C8 + 2) |= 0x80000000 >> dword_10022768;
        *(_DWORD *)(*((_DWORD *)dword_1001C7C8 + 4) + 4 * dword_10022768 + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_1001C7C8 + 4) + 67);
        v20 = (LPVOID *)dword_1001C7C8;
        if ( *(_BYTE *)(*((_DWORD *)dword_1001C7C8 + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_1001C7C8 + 1) &= ~1u;
          v20 = (LPVOID *)dword_1001C7C8;
        }
        if ( v20[2] == (LPVOID)-1 )
        {
          VirtualFree(v20[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_1001C7C8 + 4));
          memcpy_0(
            dword_1001C7C8,
            (char *)dword_1001C7C8 + 20,
            (size_t)lpMem + 20 * dword_10022754 - (_DWORD)dword_1001C7C8 - 20);
          --dword_10022754;
          if ( a1 > dword_1001C7C8 )
            a1 -= 5;
          dword_10022760 = (int)lpMem;
        }
      }
      dword_1001C7C8 = a1;
      dword_10022768 = v4;
      return a1;
    }
  }
  return result;
}

// Address: 0x10003EB4
char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v0 = dword_10022754;
  if ( dword_10022754 == dword_10022764 )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_10022764 + 16));
    if ( v1 == nullptr )
      return nullptr;
    dword_10022764 += 16;
    v0 = dword_10022754;
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
  ++dword_10022754;
  **((_DWORD **)v3 + 4) = -1;
  return v3;
}

// Address: 0x10003F64
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

// Address: 0x1000406C
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

// Address: 0x1000434D
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

  v1 = (char *)lpMem + 20 * dword_10022754;
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
  for ( i = (char *)dword_10022760; ; i += 20 )
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
      if ( (unsigned int)i >= dword_10022760 || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
        break;
    }
    if ( i == (char *)dword_10022760 )
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
          if ( (unsigned int)i >= dword_10022760 || *((_DWORD *)i + 2) != 0 )
            break;
        }
        if ( i == (char *)dword_10022760 )
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
  dword_10022760 = (int)i;
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
  if ( v24 == 0 && i == dword_1001C7C8 && v31 == dword_10022768 )
    dword_1001C7C8 = nullptr;
  *v6 = v31;
  return v23 + 1;
}

// Address: 0x10004634
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

// Address: 0x10004679
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { retn }
}

// Address: 0x1000468D
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
    _invalid_parameter(0, 0, 0, 0, 0);
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

// Address: 0x100048BC
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_1001C840 != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_1001B980, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x100048E7
void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = *(void (**)(void))(_getptd() + 120);
  if ( v0 != nullptr )
    v0();
  abort();
}

// Address: 0x10004920
void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = *(void (**)(void))(_getptd() + 124);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x10004933
void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer(dword_1001C7CC);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1000496B
int _initp_eh_hooks()
{
  int result; // eax

  result = _encode_pointer(terminate);
  dword_1001C7CC = result;
  return result;
}

// Address: 0x1000497C
int __cdecl sub_1000497C(int a1)
{
  dword_1001C7D0 = a1;
  return a1;
}

// Address: 0x1000498B
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
    sub_10009C0F(2);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x10004AB3
int __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))_decode_pointer(dword_1001C7D0);
  if ( v5 == nullptr )
  {
    sub_10009C0F(2);
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v5();
}

// Address: 0x10004AE0
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

// Address: 0x10004B75
PVOID __cdecl _encode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001B340 != -1
    && (v6 = dword_1001B340, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x10004BE7
PVOID _encoded_null()
{
  return _encode_pointer(nullptr);
}

// Address: 0x10004BF0
PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001B340 != -1
    && (v6 = dword_1001B340, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x10004C62
// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}

// Address: 0x10004C6B
void *__set_flsgetvalue()
{
  void *Value; // esi

  Value = TlsGetValue(dwTlsIndex);
  if ( Value == nullptr )
  {
    Value = _decode_pointer(FlsGetValue);
    TlsSetValue(dwTlsIndex, Value);
  }
  return Value;
}

// Address: 0x10004C9F
void _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v1; // [esp-4h] [ebp-4h]

  if ( dword_1001B340 != -1 )
  {
    v1 = dword_1001B340;
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_1001C7E0);
    v0(v1);
    dword_1001B340 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  _mtdeletelocks();
}

// Address: 0x10004CDC
void __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleW; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]
  int savedregs; // [esp+2Ch] [ebp+0h]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
  hModule = ModuleHandleW;
  *(_DWORD *)(a1 + 92) = &unk_10016630;
  *(_DWORD *)(a1 + 20) = 1;
  if ( ModuleHandleW != nullptr )
  {
    *(_DWORD *)(a1 + 504) = GetProcAddress(ModuleHandleW, "EncodePointer");
    *(_DWORD *)(a1 + 508) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 200) = 67;
  *(_BYTE *)(a1 + 331) = 67;
  *(_DWORD *)(a1 + 104) = &unk_1001B370;
  _lock(13);
  InterlockedIncrement(*(volatile LONG **)(a1 + 104));
  _unlock(13);
  _lock(12);
  *(_DWORD *)(a1 + 108) = a2;
  if ( a2 == 0 )
    *(_DWORD *)(a1 + 108) = off_1001B978;
  __addlocaleref(*(volatile LONG **)(a1 + 108));
  savedregs = 268455333;
  _unlock(12);
}

// Address: 0x10004DC3
DWORD *_getptd_noexit()
{
  DWORD LastError; // eax
  DWORD v1; // edi
  int (__stdcall *v2)(int); // eax
  DWORD *v3; // esi
  int v4; // eax
  int (__stdcall *v5)(int, int); // eax
  DWORD CurrentThreadId; // eax
  int v8; // [esp-8h] [ebp-10h]
  int v9; // [esp-4h] [ebp-Ch]
  int v10; // [esp-4h] [ebp-Ch]

  LastError = GetLastError();
  v9 = dword_1001B340;
  v1 = LastError;
  v2 = (int (__stdcall *)(int))__set_flsgetvalue();
  v3 = (DWORD *)v2(v9);
  if ( v3 == nullptr )
  {
    v4 = _calloc_crt(1u, 532);
    v3 = (DWORD *)v4;
    if ( v4 != 0 )
    {
      v10 = v4;
      v8 = dword_1001B340;
      v5 = (int (__stdcall *)(int, int))_decode_pointer(FlsSetValue);
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

// Address: 0x10004E3C
DWORD *_getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( v0 == nullptr )
    _amsg_exit(16);
  return v0;
}

// Address: 0x10004E56
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
    if ( *((_UNKNOWN **)Block + 23) != &unk_10016630 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = *((void **)Block + 26);
    if ( v1 != nullptr && InterlockedDecrement(*((volatile LONG **)Block + 26)) == 0 && v1 != &unk_1001B370 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = *((_DWORD **)Block + 27);
    if ( v2 != nullptr )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != (_DWORD *)off_1001B978 && v2 != (_DWORD *)&unk_1001B8A0 && *v2 == 0 )
        __freetlocinfo(v2);
    }
    savedregs = 268455774;
    _unlock(12);
    free(Block);
  }
}

// Address: 0x10004F85
DWORD __cdecl _freeptd(void *Block)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_1001B340 != -1 )
  {
    if ( Block == nullptr && TlsGetValue(dwTlsIndex) != nullptr )
    {
      v4 = dword_1001B340;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      Block = (void *)Value(v4);
    }
    v5 = dword_1001B340;
    v2 = (void (__stdcall *)(int, _DWORD))_decode_pointer(FlsSetValue);
    v2(v5, 0);
    _freefls(Block);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, nullptr);
  return result;
}

// Address: 0x10004FF3
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
    dword_1001C7E0 = (int)FlsFree;
    if ( FlsAlloc == nullptr || FlsGetValue == nullptr || FlsSetValue == nullptr || FlsFree == nullptr )
    {
      FlsGetValue = TlsGetValue;
      FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))__crtTlsAlloc;
      FlsSetValue = TlsSetValue;
      dword_1001C7E0 = (int)TlsFree;
    }
    v3 = TlsAlloc();
    dwTlsIndex = v3;
    if ( v3 == -1 || !TlsSetValue(v3, FlsGetValue) )
      return 0;
    _init_pointers();
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))_encode_pointer(FlsAlloc);
    FlsGetValue = (PVOID (__stdcall *)(DWORD))_encode_pointer(FlsGetValue);
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))_encode_pointer(FlsSetValue);
    dword_1001C7E0 = (int)_encode_pointer((void *)dword_1001C7E0);
    if ( _mtinitlocks() != 0 )
    {
      v4 = (int (__stdcall *)(_DWORD))_decode_pointer(FlsAlloc);
      dword_1001B340 = v4(_freefls);
      if ( dword_1001B340 != -1 )
      {
        v5 = (DWORD *)_calloc_crt(1u, 532);
        v6 = v5;
        if ( v5 != nullptr )
        {
          v11 = v5;
          v10 = dword_1001B340;
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

// Address: 0x10005180
void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr || dword_1001C7E4 == 0 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_1001C7E4 )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}

// Address: 0x100051C5
int __cdecl _calloc_crt(size_t Size, int a2)
{
  DWORD v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = _calloc_impl(Size, a2, 0);
    if ( v3 != 0 || dword_1001C7E4 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001C7E4 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x10005211
void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 != nullptr || Size == 0 || dword_1001C7E4 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001C7E4 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1000525F
size_t __cdecl _msize(void *Block)
{
  size_t v2; // esi
  char *v3; // [esp+10h] [ebp-20h]
  int v4; // [esp+14h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_1002276C != 3 )
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

// Address: 0x10005302
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

// Address: 0x10005332
int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer(off_1001B348);
  return v1(255);
}

// Address: 0x1000535B
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

// Address: 0x10005386
void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x1000539E
void _lockexit()
{
  _lock(8);
}

// Address: 0x100053A7
void _unlockexit()
{
  _unlock(8);
}

// Address: 0x100053B0
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

// Address: 0x100053CD
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

// Address: 0x100053F1
int __cdecl _cinit(int a1)
{
  int result; // eax
  _PVFV *savedregs; // [esp+4h] [ebp+0h]

  if ( _fpmath != nullptr && _IsNonwritableInCurrentImage(&off_10016408) != 0 )
    _fpmath(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&dword_1001618C, (_PIFV *)&Last);
  if ( result == 0 )
  {
    atexit(sub_10007ADA);
    _initterm((_PVFV *)&First, savedregs);
    if ( dword_10022750 != nullptr && _IsNonwritableInCurrentImage(&dword_10022750) != 0 )
      dword_10022750(0, 2, 0);
    return 0;
  }
  return result;
}

// Address: 0x10005476
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
  if ( dword_1001C818 != 1 )
  {
    dword_1001C814 = 1;
    byte_1001C810 = a3;
    if ( a2 == 0 )
    {
      v3 = (void **)_decode_pointer((void *)dword_10022748);
      v9 = v3;
      if ( v3 != nullptr )
      {
        v4 = (void **)_decode_pointer((void *)dword_10022744);
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
            v6 = (void **)_decode_pointer((void *)dword_10022748);
            v7 = (void **)_decode_pointer((void *)dword_10022744);
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
      _initterm((_PVFV *)&dword_100161B0, v8);
    }
    _initterm((_PVFV *)&dword_100161B8, v8);
  }
  if ( a3 != 0 )
    _unlock(8);
  if ( a3 == 0 )
  {
    dword_1001C818 = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
}

// Address: 0x100055A2
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x100055B8
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x100055C7
void (__cdecl __noreturn *_init_pointers())(int Code)
{
  PVOID v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null();
  sub_10007371(v0);
  sub_10009C17(v0);
  sub_1000497C((int)v0);
  sub_1000A755(v0);
  sub_1000A746(v0);
  _initp_misc_winsig(v0);
  nullsub_1();
  _initp_eh_hooks();
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit);
  off_1001B348 = result;
  return result;
}

// Address: 0x10005615
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
    && (v2 != (FILE *)(sub_1000B1BE() + 32) && v2 != (FILE *)(sub_1000B1BE() + 64) || _isatty((int)File) == 0) )
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
        v9 = &unk_1001B990;
      else
        v9 = (_BYTE *)(dword_10022640[(int)File >> 5] + (((unsigned __int8)File & 0x1F) << 6));
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

// Address: 0x10005779
int __usercall write_char@<eax>(FILE *File@<ecx>, int result@<eax>, _DWORD *a3@<esi>)
{
  bool v3; // sf

  if ( ((File->_flag & 0x40) == 0 || File->_base != nullptr)
    && ((v3 = File->_cnt - 1 < 0, --File->_cnt, v3)
      ? (result = _flsbuf((char)result, File))
      : (*File->_ptr = result, ++File->_ptr, result = (unsigned __int8)result),
        result == -1) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}

// Address: 0x100057AC
_DWORD *__usercall write_multi_char@<eax>(_DWORD *result@<eax>, char a2, int a3, FILE *File)
{
  _DWORD *v4; // esi

  v4 = result;
  do
  {
    if ( a3 <= 0 )
      break;
    LOBYTE(result) = a2;
    --a3;
    result = (_DWORD *)write_char(File, (int)result, v4);
  }
  while ( *v4 != -1 );
  return result;
}

// Address: 0x100057D2
int *__usercall write_string@<eax>(int *result@<eax>, _BYTE *a2@<ecx>, int a3@<edi>, int a4)
{
  int *v4; // esi

  v4 = result;
  if ( (*(_BYTE *)(a3 + 12) & 0x40) == 0 || *(_DWORD *)(a3 + 8) != 0 )
  {
    while ( a4 > 0 )
    {
      LOBYTE(result) = *a2;
      --a4;
      result = (int *)write_char((FILE *)a3, (int)result, v4);
      ++a2;
      if ( *v4 == -1 )
      {
        result = _errno();
        if ( *result != 42 )
          return result;
        LOBYTE(result) = 63;
        result = (int *)write_char((FILE *)a3, (int)result, v4);
      }
    }
  }
  else
  {
    *result += a4;
    return (int *)a4;
  }
  return result;
}

// Address: 0x1000581F
int __cdecl _output_s_l(FILE *Stream, _BYTE *a2, struct localeinfo_struct *a3, int *a4)
{
  _BYTE *v4; // ebx
  int *v5; // edi
  int v7; // eax
  _BYTE *v8; // ecx
  char *v9; // eax
  unsigned __int8 v10; // dl
  _BYTE *v11; // ebx
  int v12; // eax
  int v13; // eax
  char v14; // al
  bool v15; // zf
  int v16; // eax
  char *v17; // ebx
  int v18; // ecx
  char *v19; // edi
  char *v20; // eax
  _DWORD *v21; // edi
  __int16 *v22; // eax
  char *v23; // ecx
  int v24; // eax
  _WORD *v25; // esi
  _DWORD *v26; // edi
  __int64 v27; // rax
  int v28; // esi
  void *v29; // eax
  _DWORD *v30; // edi
  void (__cdecl *v31)(__int64 *, char *, int, int, int, int, __crt_locale_pointers *); // eax
  int v32; // edi
  void (__cdecl *v33)(char *, __crt_locale_pointers *); // eax
  void (__cdecl *v34)(char *, __crt_locale_pointers *); // eax
  unsigned int v35; // ebx
  unsigned int v36; // edi
  char *j; // esi
  int v38; // eax
  unsigned __int64 v39; // rcx
  int v40; // ecx
  char *v41; // eax
  char *v42; // esi
  char *i; // eax
  int v44; // ebx
  FILE *v45; // edi
  wchar_t *v46; // esi
  wchar_t v47; // ax
  unsigned __int8 v48; // al
  int v49; // [esp-14h] [ebp-298h]
  int v50; // [esp-10h] [ebp-294h]
  unsigned __int64 v51; // [esp-10h] [ebp-294h]
  int v52; // [esp-Ch] [ebp-290h]
  int v53; // [esp-8h] [ebp-28Ch]
  __int64 v54; // [esp+Ch] [ebp-278h] BYREF
  int v55; // [esp+14h] [ebp-270h] BYREF
  int v56; // [esp+18h] [ebp-26Ch]
  int v57; // [esp+20h] [ebp-264h]
  FILE *File; // [esp+24h] [ebp-260h]
  int v59; // [esp+28h] [ebp-25Ch]
  int v60; // [esp+2Ch] [ebp-258h]
  void *Block; // [esp+30h] [ebp-254h]
  __crt_locale_pointers Locale; // [esp+34h] [ebp-250h] BYREF
  int v63; // [esp+3Ch] [ebp-248h]
  char v64; // [esp+40h] [ebp-244h]
  int v65; // [esp+44h] [ebp-240h]
  _BYTE *v66; // [esp+48h] [ebp-23Ch]
  int v67; // [esp+4Ch] [ebp-238h]
  int v68; // [esp+50h] [ebp-234h]
  int v69; // [esp+54h] [ebp-230h]
  _BYTE v70[4]; // [esp+58h] [ebp-22Ch] BYREF
  int v71; // [esp+5Ch] [ebp-228h] BYREF
  int v72; // [esp+60h] [ebp-224h]
  int SizeConverted; // [esp+64h] [ebp-220h] BYREF
  char *v74; // [esp+68h] [ebp-21Ch]
  int v75; // [esp+6Ch] [ebp-218h]
  unsigned __int8 v76; // [esp+73h] [ebp-211h]
  int v77; // [esp+74h] [ebp-210h]
  char MbCh[511]; // [esp+78h] [ebp-20Ch] BYREF
  char v79; // [esp+277h] [ebp-Dh] BYREF
  char v80[8]; // [esp+278h] [ebp-Ch] BYREF

  v4 = a2;
  v5 = a4;
  File = Stream;
  v72 = (int)a4;
  v59 = 0;
  v77 = 0;
  v68 = 0;
  v75 = 0;
  v69 = 0;
  v60 = 0;
  v67 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  if ( Stream == nullptr )
    goto LABEL_2;
  if ( (Stream->_flag & 0x40) == 0 )
  {
    v7 = _fileno(Stream);
    if ( v7 == -1 || v7 == -2 )
      v8 = &unk_1001B990;
    else
      v8 = (_BYTE *)(dword_10022640[v7 >> 5] + ((v7 & 0x1F) << 6));
    if ( (v8[36] & 0x7F) != 0 )
      goto LABEL_2;
    v9 = v7 == -1 || v7 == -2 ? (char *)&unk_1001B990 : (char *)(dword_10022640[v7 >> 5] + ((v7 & 0x1F) << 6));
    if ( v9[36] < 0 )
      goto LABEL_2;
  }
  if ( a2 == nullptr )
    goto LABEL_2;
  v10 = *a2;
  v71 = 0;
  SizeConverted = 0;
  v65 = 0;
  Block = nullptr;
  v76 = v10;
  if ( v10 == 0 )
    goto LABEL_222;
  while ( 1 )
  {
    v11 = v4 + 1;
    v12 = 0;
    v66 = v11;
    if ( v71 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) <= 0x58u )
      v12 = byte_10016508[(char)v10] & 0xF;
    v13 = (unsigned __int8)byte_10016528[9 * v12 + v65] >> 4;
    v65 = v13;
    if ( v13 == 8 )
      goto LABEL_2;
    switch ( v13 )
    {
      case 0:
        goto $NORMAL_STATE$28987;
      case 1:
        v75 = -1;
        v56 = 0;
        v60 = 0;
        v68 = 0;
        v69 = 0;
        v77 = 0;
        v67 = 0;
        goto LABEL_218;
      case 2:
        switch ( v10 )
        {
          case ' ':
            v77 |= 2u;
            break;
          case '#':
            v77 |= 0x80u;
            break;
          case '+':
            v77 |= 1u;
            break;
          case '-':
            v77 |= 4u;
            break;
          case '0':
            v77 |= 8u;
            break;
          default:
            break;
        }
        goto LABEL_218;
      case 3:
        if ( v10 == 42 )
        {
          v72 = (int)(v5 + 1);
          v68 = *v5;
          if ( v68 < 0 )
          {
            v77 |= 4u;
            v68 = -v68;
          }
        }
        else
        {
          v68 = 10 * v68 + (char)v10 - 48;
        }
        goto LABEL_218;
      case 4:
        v75 = 0;
        goto LABEL_218;
      case 5:
        if ( v10 == 42 )
        {
          v72 = (int)(v5 + 1);
          v75 = *v5;
          if ( v75 < 0 )
            v75 = -1;
        }
        else
        {
          v75 = 10 * v75 + (char)v10 - 48;
        }
        goto LABEL_218;
      case 6:
        switch ( v10 )
        {
          case 'I':
            v14 = *v11;
            if ( *v11 == 54 && v11[1] == 52 )
            {
              v77 |= 0x8000u;
              v66 = v11 + 2;
            }
            else if ( v14 == 51 && v11[1] == 50 )
            {
              v77 &= ~0x8000u;
              v66 = v11 + 2;
            }
            else if ( v14 != 100 && v14 != 105 && v14 != 111 && v14 != 117 && v14 != 120 && v14 != 88 )
            {
              v65 = 0;
$NORMAL_STATE$28987:
              v67 = 0;
              v16 = _isleadbyte_l(v10, &Locale);
              v15 = v16 == 0;
              LOBYTE(v16) = v76;
              if ( !v15 )
              {
                v16 = write_char(File, v16, &v71);
                LOBYTE(v16) = *v11;
                v66 = v11 + 1;
                if ( (_BYTE)v16 == 0 )
                  goto LABEL_2;
              }
              write_char(File, v16, &v71);
            }
            break;
          case 'h':
            v77 |= 0x20u;
            break;
          case 'l':
            if ( *v11 == 108 )
            {
              v77 |= 0x1000u;
              v66 = v11 + 1;
            }
            else
            {
              v77 |= 0x10u;
            }
            break;
          case 'w':
            v77 |= 0x800u;
            break;
          default:
            break;
        }
        goto LABEL_218;
      case 7:
        if ( (char)v10 <= 100 )
        {
          if ( v10 == 100 )
          {
LABEL_118:
            v77 |= 0x40u;
            goto LABEL_119;
          }
          if ( (char)v10 > 83 )
          {
            if ( v10 == 88 )
              goto LABEL_140;
            if ( v10 == 90 )
            {
              v22 = (__int16 *)*v5;
              v72 = (int)(v5 + 1);
              if ( v22 != nullptr && (v23 = *((char **)v22 + 1)) != nullptr )
              {
                v24 = *v22;
                v74 = v23;
                if ( (v77 & 0x800) != 0 )
                {
                  v24 /= 2;
                  v67 = 1;
                }
                else
                {
                  v67 = 0;
                }
              }
              else
              {
                v74 = Str;
                v24 = strlen(Str);
              }
              goto LABEL_189;
            }
            if ( v10 != 97 )
            {
              if ( v10 != 99 )
                goto LABEL_190;
              goto LABEL_93;
            }
          }
          else
          {
            if ( v10 == 83 )
            {
              if ( (v77 & 0x830) == 0 )
                v77 |= 0x800u;
              goto LABEL_83;
            }
            if ( v10 != 65 )
            {
              if ( v10 != 67 )
              {
                if ( v10 != 69 && v10 != 71 )
                  goto LABEL_190;
                goto LABEL_76;
              }
              if ( (v77 & 0x830) == 0 )
                v77 |= 0x800u;
LABEL_93:
              v21 = v5 + 1;
              v72 = (int)v21;
              if ( (v77 & 0x810) != 0 )
              {
                if ( wctomb_s(&SizeConverted, MbCh, 0x200u, *((_WORD *)v21 - 2)) != 0 )
                  v60 = 1;
              }
              else
              {
                MbCh[0] = *((_BYTE *)v21 - 4);
                SizeConverted = 1;
              }
              v74 = MbCh;
              goto LABEL_190;
            }
LABEL_76:
            v10 += 32;
            v56 = 1;
            v76 = v10;
          }
LABEL_77:
          v77 |= 0x40u;
          v17 = MbCh;
          v74 = MbCh;
          v57 = 512;
          if ( v75 >= 0 )
          {
            if ( v75 != 0 )
            {
              if ( v75 > 512 )
                v75 = 512;
              if ( v75 > 163 )
              {
                v28 = v75 + 349;
                v29 = _malloc_crt(v75 + 349);
                v10 = v76;
                Block = v29;
                if ( v29 != nullptr )
                {
                  v74 = (char *)v29;
                  v57 = v28;
                  v17 = (char *)v29;
                }
                else
                {
                  v75 = 163;
                }
              }
            }
            else
            {
              v75 = v10 == 103;
            }
          }
          else
          {
            v75 = 6;
          }
          v30 = v5 + 2;
          v54 = *((_QWORD *)v30 - 1);
          v53 = v56;
          v52 = v75;
          v72 = (int)v30;
          v50 = (char)v10;
          v49 = v57;
          v31 = (void (__cdecl *)(__int64 *, char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_1001BAE8[0]);
          v31(&v54, v17, v49, v50, v52, v53, &Locale);
          v32 = v77 & 0x80;
          if ( (v77 & 0x80) != 0 && v75 == 0 )
          {
            v33 = (void (__cdecl *)(char *, __crt_locale_pointers *))_decode_pointer(off_1001BAF4);
            v33(v17, &Locale);
          }
          if ( v76 == 103 && v32 == 0 )
          {
            v34 = (void (__cdecl *)(char *, __crt_locale_pointers *))_decode_pointer(off_1001BAF0[0]);
            v34(v17, &Locale);
          }
          if ( *v17 == 45 )
          {
            v77 |= 0x100u;
            v74 = ++v17;
          }
          v24 = strlen(v17);
          goto LABEL_189;
        }
        if ( (char)v10 > 112 )
        {
          if ( v10 != 115 )
          {
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_190;
              v59 = 39;
              goto $COMMON_HEX$29148;
            }
LABEL_119:
            SizeConverted = 10;
            goto $COMMON_INT$29141;
          }
LABEL_83:
          v18 = v75;
          if ( v75 == -1 )
            v18 = 0x7FFFFFFF;
          v72 = (int)(v5 + 1);
          v19 = (char *)*v5;
          v74 = v19;
          if ( (v77 & 0x810) != 0 )
          {
            if ( v19 == nullptr )
              v74 = (char *)off_1001B350;
            v20 = v74;
            v67 = 1;
            while ( v18 != 0 )
            {
              --v18;
              if ( *(_WORD *)v20 == 0 )
                break;
              v20 += 2;
            }
            v24 = (v20 - v74) >> 1;
          }
          else
          {
            if ( v19 == nullptr )
              v74 = Str;
            for ( i = v74; v18 != 0; ++i )
            {
              --v18;
              if ( *i == 0 )
                break;
            }
            v24 = i - v74;
          }
LABEL_189:
          SizeConverted = v24;
          goto LABEL_190;
        }
        if ( v10 == 112 )
        {
          v75 = 8;
LABEL_140:
          v59 = 7;
$COMMON_HEX$29148:
          SizeConverted = 16;
          if ( (v77 & 0x80u) != 0 )
          {
            v70[0] = 48;
            v70[1] = v59 + 81;
            v69 = 2;
          }
          goto $COMMON_INT$29141;
        }
        if ( (char)v10 < 101 )
          goto LABEL_190;
        if ( (char)v10 <= 103 )
          goto LABEL_77;
        if ( v10 == 105 )
          goto LABEL_118;
        if ( v10 != 110 )
        {
          if ( v10 != 111 )
            goto LABEL_190;
          SizeConverted = 8;
          if ( (v77 & 0x80u) != 0 )
            v77 |= 0x200u;
$COMMON_INT$29141:
          if ( (v77 & 0x8000) != 0 || (v77 & 0x1000) != 0 )
          {
            v26 = v5 + 2;
            v27 = *((_QWORD *)v26 - 1);
          }
          else
          {
            v26 = v5 + 1;
            if ( (v77 & 0x20) != 0 )
            {
              v72 = (int)v26;
              if ( (v77 & 0x40) != 0 )
                LODWORD(v27) = *((__int16 *)v26 - 2);
              else
                LODWORD(v27) = *((unsigned __int16 *)v26 - 2);
              v27 = (int)v27;
LABEL_157:
              if ( (v77 & 0x40) != 0 && v27 < 0 )
              {
                v27 = -v27;
                v77 |= 0x100u;
              }
              v35 = HIDWORD(v27);
              v36 = v27;
              if ( (v77 & 0x9000) == 0 )
                v35 = 0;
              if ( v75 >= 0 )
              {
                v77 &= ~8u;
                if ( v75 > 512 )
                  v75 = 512;
              }
              else
              {
                v75 = 1;
              }
              if ( (v35 | (unsigned int)v27) == 0 )
                v69 = 0;
              for ( j = &v79; ; --j )
              {
                v38 = v75--;
                if ( v38 <= 0 && (v35 | v36) == 0 )
                  break;
                v51 = __PAIR64__(v35, v36);
                v39 = __PAIR64__(v35, v36) % SizeConverted;
                v40 = v39 + 48;
                v57 = HIDWORD(v39);
                v35 = (v51 / SizeConverted) >> 32;
                v36 = v51 / SizeConverted;
                if ( v40 > 57 )
                  LOBYTE(v40) = v59 + v40;
                *j = v40;
              }
              v41 = (char *)(&v79 - j);
              v42 = j + 1;
              SizeConverted = (int)v41;
              v74 = v42;
              if ( (v77 & 0x200) != 0 && (v41 == nullptr || *v42 != 48) )
              {
                *--v74 = 48;
                v24 = (int)(v41 + 1);
                goto LABEL_189;
              }
LABEL_190:
              if ( v60 != 0 )
                goto LABEL_216;
              if ( (v77 & 0x40) != 0 )
              {
                if ( (v77 & 0x100) != 0 )
                {
                  v70[0] = 45;
                  goto LABEL_198;
                }
                if ( (v77 & 1) != 0 )
                {
                  v70[0] = 43;
                  goto LABEL_198;
                }
                if ( (v77 & 2) != 0 )
                {
                  v70[0] = 32;
LABEL_198:
                  v69 = 1;
                }
              }
              v44 = v68 - SizeConverted - v69;
              if ( (v77 & 0xC) == 0 )
                write_multi_char(&v71, 32, v68 - SizeConverted - v69, File);
              v45 = File;
              write_string(&v71, v70, (int)File, v69);
              if ( (v77 & 8) != 0 && (v77 & 4) == 0 )
                write_multi_char(&v71, 48, v44, v45);
              if ( v67 != 0 && SizeConverted > 0 )
              {
                v46 = (wchar_t *)v74;
                v57 = SizeConverted;
                while ( 1 )
                {
                  v47 = *v46;
                  --v57;
                  ++v46;
                  if ( wctomb_s(&v55, v80, 6u, v47) != 0 || v55 == 0 )
                    break;
                  write_string(&v71, v80, (int)v45, v55);
                  if ( v57 == 0 )
                    goto LABEL_213;
                }
                v71 = -1;
              }
              else
              {
                write_string(&v71, v74, (int)v45, SizeConverted);
              }
LABEL_213:
              if ( v71 >= 0 && (v77 & 4) != 0 )
                write_multi_char(&v71, 32, v44, v45);
              goto LABEL_216;
            }
            LODWORD(v27) = *(v26 - 1);
            if ( (v77 & 0x40) != 0 )
              v27 = (int)v27;
            else
              HIDWORD(v27) = 0;
          }
          v72 = (int)v26;
          goto LABEL_157;
        }
        v25 = (_WORD *)*v5;
        v72 = (int)(v5 + 1);
        if ( _get_printf_count_output() == 0 )
          goto LABEL_2;
        if ( (v77 & 0x20) != 0 )
          *v25 = v71;
        else
          *(_DWORD *)v25 = v71;
        v60 = 1;
LABEL_216:
        if ( Block != nullptr )
        {
          free(Block);
          Block = nullptr;
        }
LABEL_218:
        v4 = v66;
        v48 = *v66;
        v76 = v48;
        if ( v48 == 0 )
          goto LABEL_220;
        v5 = (int *)v72;
        v10 = v48;
        break;
      default:
        goto LABEL_218;
    }
  }
LABEL_220:
  if ( v65 == 0 || v65 == 7 )
  {
LABEL_222:
    if ( v64 != 0 )
      *(_DWORD *)(v63 + 112) &= ~2u;
    return v71;
  }
  else
  {
LABEL_2:
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v64 != 0 )
      *(_DWORD *)(v63 + 112) &= ~2u;
    return -1;
  }
}

// Address: 0x100063F0
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
         && dword_10022628 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 1000644C case 0 }
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

// Address: 0x10006755
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
    v3 = &unk_1001C81C;
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

// Address: 0x100067D0
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

// Address: 0x10006858
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

// Address: 0x10006887
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
  v3 = &unk_1001B370 - (_UNKNOWN *)a1;
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

// Address: 0x100068EB
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

// Address: 0x10006A7E
volatile LONG *__updatetmbcinfo()
{
  DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = _getptd();
  if ( (dword_1001B894 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != lpAddend )
    {
      if ( v1 != nullptr && InterlockedDecrement(v1) == 0 && v1 != (volatile LONG *)&unk_1001B370 )
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

// Address: 0x10006B22
UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, nullptr);
  dword_1001C824 = 0;
  switch ( a1 )
  {
    case -2:
      dword_1001C824 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_1001C824 = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_1001C824 = 1;
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

// Address: 0x10006B9E
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
      if ( dword_1001B7A0[i] == SystemCP )
      {
        memset(a2 + 7, 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_1001B7B0 + 48 * v19;
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
              *((_BYTE *)a2 + v10 + 29) |= byte_1001B79C[v18];
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
        v13 = (_WORD *)((char *)&unk_1001B7A4 + v12);
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
    if ( dword_1001C824 == 0 )
      return -1;
  }
  setSBCS(a2);
  return 0;
}

// Address: 0x10006D83
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
        if ( v4 != (_DWORD *)&unk_1001B370 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( InterlockedDecrement((volatile LONG *)v1[26]) == 0 && (_UNKNOWN *)v1[26] != &unk_1001B370 )
        free((void *)v1[26]);
      v1[26] = (DWORD)v4;
      InterlockedIncrement(v4);
      if ( (v1[28] & 2) == 0 && (dword_1001B894 & 1) == 0 )
      {
        _lock(13);
        dword_1001C834 = v4[1];
        dword_1001C838 = v4[2];
        dword_1001C83C = v4[3];
        for ( i = 0; i < 5; ++i )
          word_1001C828[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_1001B590[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_1001B698[k] = *((_BYTE *)v4 + k + 285);
        if ( InterlockedDecrement(lpAddend) == 0 && lpAddend != (volatile LONG *)&unk_1001B370 )
          free((void *)lpAddend);
        lpAddend = v4;
        InterlockedIncrement(v4);
        _unlock(13);
      }
    }
  }
  return v10;
}

// Address: 0x10006F1D
int __initmbctable()
{
  if ( dword_1002274C == 0 )
  {
    _setmbcp(-3);
    dword_1002274C = 1;
  }
  return 0;
}

// Address: 0x10006F3B
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
  if ( v2 != nullptr && v2 != &off_1001BE58 )
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
  if ( (_UNKNOWN **)v7 != &off_1001BD98 && *(_DWORD *)(v7 + 180) == 0 )
  {
    __free_lc_time(*((_DWORD *)Block + 53));
    free(*((void **)Block + 53));
  }
  v8 = (void **)(Block + 80);
  for ( Blocka = 6; Blocka != 0; --Blocka )
  {
    if ( *(v8 - 2) != &unk_1001B898 && *v8 != nullptr && *(_DWORD *)*v8 == 0 )
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

// Address: 0x10007084
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
    if ( *(v2 - 2) != (volatile LONG *)&unk_1001B898 && *v2 != nullptr )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
      InterlockedIncrement(v2[1]);
    v2 += 4;
  }
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}

// Address: 0x10007113
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
      if ( *(v2 - 2) != (volatile LONG *)&unk_1001B898 && *v2 != nullptr )
        InterlockedDecrement(*v2);
      if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
        InterlockedDecrement(v2[1]);
      v2 += 4;
    }
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
  }
  return lpAddend;
}

// Address: 0x100071AC
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
      if ( *v2 == 0 && v2 != (volatile LONG *)&unk_1001B8A0 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}

// Address: 0x100071EA
DWORD __updatetlocinfo()
{
  DWORD *v0; // esi
  DWORD v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_1001B894 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = _getptd()[27];
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)v0 + 27, (volatile LONG *)off_1001B978);
    _unlock(12);
    v1 = (DWORD)v3;
  }
  if ( v1 == 0 )
    _amsg_exit(32);
  return v1;
}

// Address: 0x10007260
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

// Address: 0x100072B3
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

// Address: 0x100072D0
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

// Address: 0x1000732D
void __thiscall sub_1000732D(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}

// Address: 0x10007343
const char *__thiscall exception::what(exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x10007350
void *__thiscall sub_10007350(void *this, char a2)
{
  sub_1000732D(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10007371
int __cdecl sub_10007371(int a1)
{
  dword_1001C864 = a1;
  return a1;
}

// Address: 0x10007380
int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))_decode_pointer((void *)dword_1001C864);
  return v1 != nullptr && v1(Size) != 0;
}

// Address: 0x100073A8
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
  dword_10022640[0] = v0;
  uNumber = 32;
  for ( i = v0 + 2048; v0 < i; i = dword_10022640[0] + 2048 )
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
      v5 = &dword_10022640[k];
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
        v7 = dword_10022640[k >> 5] + ((k & 0x1F) << 6);
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
    v9 = dword_10022640[0] + (m << 6);
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

// Address: 0x100075FC
void _ioterm()
{
  void **v0; // esi
  char *v1; // edi
  unsigned int i; // eax

  v0 = (void **)dword_10022640;
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
  while ( (int)v0 < (int)&dword_10022740 );
}

// Address: 0x1000764A
int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( dword_1002274C == 0 )
    __initmbctable();
  v0 = Source;
  v1 = 0;
  if ( Source != nullptr )
  {
    while ( *v0 != 0 )
    {
      if ( *v0 != 61 )
        ++v1;
      v0 += strlen(v0) + 1;
    }
    v3 = (char **)_calloc_crt(v1 + 1, 4);
    dword_1001C7F8 = v3;
    if ( v3 != nullptr )
    {
      for ( i = Source; ; i += v6 )
      {
        if ( *i == 0 )
        {
          free(Source);
          Source = nullptr;
          *v3 = nullptr;
          dword_10022740 = 1;
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
      free(dword_1001C7F8);
      dword_1001C7F8 = nullptr;
      return -1;
    }
  }
  return -1;
}

// Address: 0x10007728
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

// Address: 0x100078C2
int _setargv()
{
  int v0; // edi
  size_t v1; // eax
  char **v2; // esi
  size_t v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( dword_1002274C == 0 )
    __initmbctable();
  byte_1001C96C = 0;
  GetModuleFileNameA(nullptr, Filename, 0x104u);
  dword_1001C808 = (int)Filename;
  if ( dword_10022770 == 0 || (v6 = (char *)dword_10022770, *(_BYTE *)dword_10022770 == 0) )
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
  dword_1001C7EC = v5 - 1;
  dword_1001C7F0 = (int)v2;
  return 0;
}

// Address: 0x1000797D
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

  v0 = dword_1001C970;
  v1 = nullptr;
  EnvironmentStringsW = nullptr;
  if ( dword_1001C970 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      dword_1001C970 = 1;
      goto LABEL_8;
    }
    if ( GetLastError() == 120 )
    {
      v0 = 2;
      dword_1001C970 = 2;
    }
    else
    {
      v0 = dword_1001C970;
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

// Address: 0x10007AB4
void *sub_10007AB4()
{
  return &unk_1001906C;
}

// Address: 0x10007ADA
void __cdecl sub_10007ADA()
{
  ;
}

// Address: 0x10007B00
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
    while ( v5 < &v4[3 * dword_1001B9DC] );
    if ( v5 < &v4[3 * dword_1001B9DC] && *v5 == a1 )
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
            v9 = dword_1001B9D0;
            if ( dword_1001B9D0 < dword_1001B9D0 + dword_1001B9D4 )
            {
              v10 = 12 * dword_1001B9D0;
              do
              {
                *(_DWORD *)(v10 + v3[23] + 8) = 0;
                ++v9;
                v10 += 12;
              }
              while ( v9 < dword_1001B9D0 + dword_1001B9D4 );
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

// Address: 0x10007C60
int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}

// Address: 0x10007C80
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
    dword_1001B08C = ~v4;
  }
  else
  {
    dword_1001B08C = ~__security_cookie;
  }
}

// Address: 0x10007D16
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
    if ( a1 == dword_1001B9E0[2 * v1] )
      break;
    v8 = ++v1;
  }
  while ( v1 < 0x17 );
  if ( v1 < 0x17 )
  {
    if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001C340 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v4 = StdHandle;
      if ( StdHandle != nullptr && StdHandle != (HANDLE)-1 )
      {
        v5 = (const char **)&(&off_1001B9E4)[2 * v1];
        v6 = strlen(*v5);
        WriteFile(v4, *v5, v6, &NumberOfBytesWritten, nullptr);
      }
    }
    else if ( a1 != 252 )
    {
      if ( strcpy_s(Destination, 0x314u, "Runtime Error!\n\nProgram: ") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      byte_1001CA95 = 0;
      if ( GetModuleFileNameA(nullptr, byte_1001C991, 0x104u) == 0
        && strcpy_s(byte_1001C991, 0x2FBu, "<program name unknown>") != 0 )
      {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strlen(byte_1001C991) + 1 > 0x3C )
      {
        v2 = strlen(byte_1001C991);
        if ( strncpy_s(&byte_1001C991[v2 - 59], (char *)&dword_1001CC8C - &byte_1001C991[v2 - 59], "...", 3u) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strcat_s(Destination, 0x314u, "\n\n") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcat_s(Destination, 0x314u, (&off_1001B9E4)[2 * v8]) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      sub_1000C1AB(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
}

// Address: 0x10007EC1
void _FF_MSGBANNER()
{
  if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001C340 == 1 )
  {
    _NMSG_WRITE(252);
    _NMSG_WRITE(255);
  }
}

// Address: 0x10007EFC
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

// Address: 0x10007F8C
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

// Address: 0x10007FD2
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x10007FEE
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x10008005
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x1000801E
void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &ReturnPoint, nullptr, nullptr);
}

// Address: 0x10008038
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x10008050
BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  return *(_WORD *)a1 == 23117 && *(_DWORD *)(v2 = a1 + *(_DWORD *)(a1 + 60)) == 17744 && *(_WORD *)(v2 + 24) == 267;
}

// Address: 0x10008090
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

// Address: 0x100080E0
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000)
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x100081A0
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

// Address: 0x100081CB
std::exception *__thiscall sub_100081CB(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x100081E9
void __thiscall sub_100081E9(void *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_1000732D(this);
}

// Address: 0x100081F4
_DWORD *__thiscall sub_100081F4(_DWORD *this, char a2)
{
  *this = &std::bad_exception::`vftable';
  sub_1000732D(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000821B
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

// Address: 0x1000827A
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

// Address: 0x100082C3
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

// Address: 0x100083A4
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

// Address: 0x100083E9
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
        sub_1000327E(a1[6], v2);
    }
  }
}

// Address: 0x1000843E
int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2;
  if ( (int)a2[1] >= 0 )
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]);
  return result;
}

// Address: 0x10008467
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

// Address: 0x100084E2
void __cdecl __noreturn CallUnexpected()
{
  if ( _getptd()[37] != 0 )
    _inconsistency();
  unexpected();
}

// Address: 0x1000852B
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

// Address: 0x100086C7
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
        if ( unknown_libname_6(*(_DWORD *)(a1 + 24)) != 0 && unknown_libname_6(v6) != 0 )
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
          if ( unknown_libname_6(v11) != 0 && unknown_libname_6(v6) != 0 )
          {
            memcpy_0(v6, *(const void **)(a1 + 24), *(_DWORD *)(a4 + 20));
            if ( *(_DWORD *)(a4 + 20) != 4 || *v6 == 0 )
              return v13;
            v8 = __AdjustPointer(*v6, (_DWORD *)(a4 + 8));
            goto LABEL_11;
          }
        }
        else if ( *(_DWORD *)(a4 + 24) != 0 )
        {
          if ( unknown_libname_6(v11) != 0 && unknown_libname_6(v6) != 0 && unknown_libname_6(*(_DWORD *)(a4 + 24)) != 0 )
            return ((*(_BYTE *)a4 & 4) != 0) + 1;
        }
        else if ( unknown_libname_6(v11) != 0 && unknown_libname_6(v6) != 0 )
        {
          v12 = *(_DWORD *)(a4 + 20);
          v9 = (const void *)__AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
          memcpy_0(v6, v9, v12);
          return v13;
        }
      }
      _inconsistency();
    }
  }
  return 0;
}

// Address: 0x10008846
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
      return sub_1000327E((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_1000327E((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x100088D8
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

// Address: 0x10008946
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

// Address: 0x10008A3A
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
      if ( unknown_libname_6(v11) == 0 )
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
                sub_100081CB((std::exception *)pExceptionObject, "bad exception");
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

// Address: 0x10008D81
std::exception *__thiscall sub_10008D81(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x10008D9E
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

// Address: 0x10008E90
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

// Address: 0x10008EDC
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

// Address: 0x10008F4F
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

// Address: 0x10008FD1
BOOL __cdecl _positive(double *a1)
{
  return *a1 >= 0.0;
}

// Address: 0x10008FED
_QWORD *__cdecl _fassign_l(int a1, _QWORD *a2, int a3, struct localeinfo_struct *a4)
{
  _QWORD *result; // eax
  __int64 v5; // [esp+0h] [ebp-8h] BYREF

  if ( a1 != 0 )
  {
    sub_1000C6CD((int)&v5, a3, a4);
    result = a2;
    *a2 = v5;
  }
  else
  {
    sub_1000C775((int)&a1, a3, a4);
    result = a2;
    *(_DWORD *)a2 = a1;
  }
  return result;
}

// Address: 0x1000902F
_QWORD *__cdecl _fassign(int a1, _QWORD *a2, int a3)
{
  return _fassign_l(a1, a2, a3, nullptr);
}

// Address: 0x10009049
const char *__usercall _shift@<eax>(const char *result@<eax>, int a2@<edi>)
{
  const char *v2; // esi
  size_t v3; // eax

  v2 = result;
  if ( a2 != 0 )
  {
    v3 = strlen(result);
    return (const char *)memcpy_0((void *)&v2[a2], v2, v3 + 1);
  }
  return result;
}

// Address: 0x10009068
char __cdecl _forcdecpt(char *a1)
{
  return _forcdecpt_l(a1, nullptr);
}

// Address: 0x1000907B
char *__cdecl _cropzeros(char *a1)
{
  return _cropzeros_l(a1, nullptr);
}

// Address: 0x1000908E
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
  if ( (byte_1001CD1C & 1) != 0 && *v15 == 48 )
    memcpy_0(v15, v15 + 1, 3u);
  if ( v23 != 0 )
    *(_DWORD *)(v22 + 112) &= ~2u;
  return 0;
}

// Address: 0x100091FD
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

// Address: 0x100092CD
int __cdecl _cftoe(_DWORD *a1, _BYTE *a2, unsigned int a3, int a4, int a5)
{
  return _cftoe_l(a1, a2, a3, a4, a5, nullptr);
}

// Address: 0x100092ED
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

// Address: 0x10009660
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

// Address: 0x10009757
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

// Address: 0x10009812
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

// Address: 0x1000990C
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

// Address: 0x10009994
int __cdecl _cfltcvt(_DWORD *a1, char *a2, int a3, int a4, size_t Size, int a6)
{
  return _cfltcvt_l(a1, a2, a3, a4, Size, a6, nullptr);
}

// Address: 0x100099B7
int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    v1 = &off_1001BAD0[i];
    result = (int (*)())_encode_pointer(off_1001BAD0[i]);
    *v1 = result;
  }
  return result;
}

// Address: 0x100099D8
errno_t _setdefaultprecision()
{
  errno_t result; // eax

  result = _controlfp_s(nullptr, 0x10000u, 0x30000u);
  if ( result != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return result;
}

// Address: 0x10009A03
BOOL _ms_p5_test_fdiv()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0;
}

// Address: 0x10009A41
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

// Address: 0x10009A6A
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

// Address: 0x10009AC1
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

// Address: 0x10009B50
int has_osfxsr_set()
{
  return 1;
}

// Address: 0x10009BA0
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

// Address: 0x10009C02
int sub_10009C02()
{
  dword_10022628 = _get_sse2_info();
  return 0;
}

// Address: 0x10009C0F
void sub_10009C0F()
{
  dword_10022624 = 0;
}

// Address: 0x10009C17
int __cdecl sub_10009C17(int a1)
{
  dword_1001CC90 = a1;
  return a1;
}

// Address: 0x10009C26
BOOL __cdecl __crtInitCritSecAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x10009C90
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
         && dword_10022628 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 10009CEC case 0 }
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

// Address: 0x10009FF5
int __cdecl _isctype_l(int C, int Type, _locale_t Locale)
{
  __int16 v3; // bx
  int v4; // eax
  int v5; // ecx
  int result; // eax
  __crt_locale_pointers v7; // [esp+4h] [ebp-18h] BYREF
  int v8; // [esp+Ch] [ebp-10h]
  char v9; // [esp+10h] [ebp-Ch]
  CHAR MultiByteStr; // [esp+14h] [ebp-8h] BYREF
  char v11; // [esp+15h] [ebp-7h]
  char v12; // [esp+16h] [ebp-6h]
  WORD CharType; // [esp+18h] [ebp-4h] BYREF
  int Ca; // [esp+24h] [ebp+8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v7, (struct localeinfo_struct *)Locale);
  v3 = C;
  if ( (unsigned int)(C + 1) <= 0x100 )
  {
    v4 = *(unsigned __int16 *)(*((_DWORD *)v7.locinfo + 50) + 2 * C);
    goto LABEL_11;
  }
  Ca = C >> 8;
  if ( _isleadbyte_l(HIBYTE(v3), &v7) != 0 )
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
         (struct localeinfo_struct *)&v7,
         1u,
         &MultiByteStr,
         (char *)v5,
         &CharType,
         *((_DWORD *)v7.locinfo + 1),
         *((_DWORD *)v7.locinfo + 5),
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

// Address: 0x1000A0C9
int __fastcall hard(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return a1 * a3;
}

// Address: 0x1000A0E4
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

  if ( (byte_1001BB00 & 1) != 0 )
    _NMSG_WRITE(10);
  v1 = sub_1000A589();
  if ( v1 != 0 )
  {
    v1 = raise(22);
    v3 = v5;
  }
  if ( (byte_1001BB00 & 2) != 0 )
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

// Address: 0x1000A1FB
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
      if ( dword_1001CC8C == 0 )
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
    if ( dword_1002276C == 3 )
    {
      v4 = (v4 + 15) & 0xFFFFFFF0;
      if ( Sizea <= dword_1002275C )
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

// Address: 0x1000A319
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
    if ( dword_1002276C == 3 )
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
          if ( v3 <= dword_1002275C )
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
        if ( dword_1001CC8C == 0 )
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
        if ( dword_1001CC8C == 0 )
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

// Address: 0x1000A534
int __cdecl _initp_misc_winsig(int a1)
{
  dword_1001CC94 = a1;
  dword_1001CC98 = a1;
  dword_1001CC9C = a1;
  dword_1001CCA0 = a1;
  return a1;
}

// Address: 0x1000A552
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
  while ( result < a2 + 12 * dword_1001B9DC );
  if ( result >= a2 + 12 * dword_1001B9DC || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}

// Address: 0x1000A589
PVOID sub_1000A589()
{
  return _decode_pointer((void *)dword_1001CC9C);
}

// Address: 0x1000A596
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
      v4 = &dword_1001CCA0;
      v5 = (void *)dword_1001CCA0;
      goto LABEL_18;
    }
    if ( Signal == 21 )
    {
      v4 = &dword_1001CC98;
      v5 = (void *)dword_1001CC98;
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
      v4 = &dword_1001CC94;
      v5 = (void *)dword_1001CC94;
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
      v4 = &dword_1001CC9C;
      v5 = (void *)dword_1001CC9C;
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
    for ( i = dword_1001B9D0; i < dword_1001B9D0 + dword_1001B9D4; ++i )
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

// Address: 0x1000A746
int __cdecl sub_1000A746(int a1)
{
  dword_1001CCA8 = a1;
  return a1;
}

// Address: 0x1000A755
int __cdecl sub_1000A755(int a1)
{
  dword_1001CCB4 = a1;
  return a1;
}

// Address: 0x1000A764
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
  v7 = (_BYTE *)(dword_10022640[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
  *v7 &= ~2u;
  return lDistanceToMove;
}

// Address: 0x1000A7E9
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
  v4 = &dword_10022640[FileHandle >> 5];
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

// Address: 0x1000A902
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
  v4 = &dword_10022640[FileHandle >> 5];
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

// Address: 0x1000B035
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
    || (v4 = &dword_10022640[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x1000B111
int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_1001CCB8;
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

// Address: 0x1000B15A
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return 0;
  }
  else if ( FileHandle >= 0 && FileHandle < uNumber )
  {
    return *(_BYTE *)(dword_10022640[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) & 0x40;
  }
  else
  {
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
}

// Address: 0x1000B1BE
_UNKNOWN **sub_1000B1BE()
{
  return &off_1001BB08;
}

// Address: 0x1000B1C4
int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_10022620;
  if ( dword_10022620 == 0 )
  {
    v0 = 512;
LABEL_5:
    dword_10022620 = v0;
    goto LABEL_6;
  }
  if ( dword_10022620 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)_calloc_crt(v0, 4);
  dword_10021608 = v1;
  if ( v1 == nullptr )
  {
    dword_10022620 = 20;
    v1 = (char *)_calloc_crt(0x14u, 4);
    dword_10021608 = v1;
    if ( v1 == nullptr )
      return 26;
  }
  v3 = 0;
  v4 = &off_1001BB08;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&unk_1001BD88 )
      break;
    v1 = (char *)dword_10021608;
  }
  v5 = 0;
  v6 = &unk_1001BB18;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_10022640[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || v7 == 0 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_1001BB78 );
  return 0;
}

// Address: 0x1000B275
void __endstdio()
{
  sub_1000D187();
  if ( byte_1001C810 != 0 )
    _fcloseall();
  free(dword_10021608);
}

// Address: 0x1000B295
void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1001BB08 || Stream > &stru_1001BD68 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_1001BB08) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}

// Address: 0x1000B2D6
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

// Address: 0x1000B308
void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1001BB08 || Stream > &stru_1001BD68 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_1001BB08) >> 5) + 16);
  }
}

// Address: 0x1000B344
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

// Address: 0x1000B373
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x1000B3A5
int __cdecl _get_printf_count_output()
{
  return dword_1001CCBC == (__security_cookie | 1);
}

// Address: 0x1000B3C0
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

// Address: 0x1000B44B
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

// Address: 0x1000B5B7
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x1000B5D4
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

// Address: 0x1000B60C
int __cdecl isleadbyte(int C)
{
  return _isleadbyte_l(C, nullptr);
}

// Address: 0x1000B61F
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

// Address: 0x1000B6A6
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

// Address: 0x1000B789
void __cdecl _freea(void *Memory)
{
  if ( Memory != nullptr && *((_DWORD *)Memory - 2) == 56797 )
    free((char *)Memory - 8);
}

// Address: 0x1000B7A9
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
  if ( dword_1001CCFC == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, nullptr, 0) != 0 )
    {
      dword_1001CCFC = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_1001CCFC = 2;
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
  if ( dword_1001CCFC != 2 && dword_1001CCFC != 0 )
  {
    if ( dword_1001CCFC == 1 )
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

// Address: 0x1000BB4E
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

// Address: 0x1000BB93
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

  v8 = dword_1001CD00;
  v9 = nullptr;
  v10 = v7;
  if ( dword_1001CD00 == 0 )
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, CharType) )
    {
      dword_1001CD00 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v8 = 2;
      dword_1001CD00 = 2;
    }
    else
    {
      v8 = dword_1001CD00;
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

// Address: 0x1000BD4D
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

// Address: 0x1000BD8F
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

// Address: 0x1000BF24
void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)a1 != off_1001BE58 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_1001BE5C )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_1001BE60 )
      free(v1);
  }
}

// Address: 0x1000BF69
void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_1001BE64 )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_1001BE68 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_1001BE6C )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_1001BE70 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_1001BE74 )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_1001BE78 )
      free(*(void **)(a1 + 32));
    v1 = *(void **)(a1 + 36);
    if ( v1 != off_1001BE7C )
      free(v1);
  }
}

// Address: 0x1000C000
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

// Address: 0x1000C046
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

// Address: 0x1000C100
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

// Address: 0x1000C140
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

// Address: 0x1000C193
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x1000C1AB
int __cdecl sub_1000C1AB(int a1, int a2, int a3)
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
  if ( dword_1001CD08 == 0 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( MessageBoxA == nullptr )
      return 0;
    dword_1001CD08 = (int)_encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v5, "GetActiveWindow");
    dword_1001CD0C = (int)_encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v5, "GetLastActivePopup");
    dword_1001CD10 = (int)_encode_pointer(GetLastActivePopup);
    GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                          v5,
                                                                                          "GetUserObjectInformationA");
    dword_1001CD18 = (int)_encode_pointer(GetUserObjectInformationA);
    if ( dword_1001CD18 != 0 )
    {
      GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v5, "GetProcessWindowStation");
      dword_1001CD14 = (int)_encode_pointer(GetProcessWindowStation);
    }
  }
  if ( (PVOID)dword_1001CD14 == v3
    || (PVOID)dword_1001CD18 == v3
    || (v11 = (int (*)(void))_decode_pointer((void *)dword_1001CD14),
        v12 = _decode_pointer((void *)dword_1001CD18),
        v13 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v12,
        v11 == nullptr)
    || v12 == nullptr
    || (v14 = v11()) != 0 && v13(v14, 1, v19, 12, v20) != 0 && (v19[8] & 1) != 0 )
  {
    if ( (PVOID)dword_1001CD0C != v3 )
    {
      v15 = (int (*)(void))_decode_pointer((void *)dword_1001CD0C);
      if ( v15 != nullptr )
      {
        v21 = v15();
        if ( v21 != 0 && (PVOID)dword_1001CD10 != v3 )
        {
          v16 = (int (__stdcall *)(int))_decode_pointer((void *)dword_1001CD10);
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
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_1001CD08);
  if ( v17 != nullptr )
    return v17(v21, a1, a2, a3);
  return 0;
}

// Address: 0x1000C314
int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_1001C33C;
      dword_1001C33C = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_1001C33C;
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x1000C360
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x1000C380
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

// Address: 0x1000C3C5
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

// Address: 0x1000C449
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

// Address: 0x1000C46C
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x1000C480);
}

// Address: 0x1000C475
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_1001BEA8 = a3;
  unk_1001BEA4 = result;
  unk_1001BEAC = a2;
  return result;
}

// Address: 0x1000C494
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x1000C497
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1000C4CD
// Microsoft VisualC 2-14/net runtime
BOOL __cdecl unknown_libname_6(int a1)
{
  return a1 != 0;
}

// Address: 0x1000C4E0
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

// Address: 0x1000C50D
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

// Address: 0x1000C55E
int __cdecl isdigit(int C)
{
  if ( dword_1001C840 != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_1001B968[C] & 4;
}

// Address: 0x1000C58C
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

// Address: 0x1000C6A1
int __cdecl tolower(int C)
{
  int result; // eax

  if ( dword_1001C840 != 0 )
    return _tolower_l(C, nullptr);
  result = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return result;
}

// Address: 0x1000C6CD
int __cdecl sub_1000C6CD(int a1, int a2, struct localeinfo_struct *a3)
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
  v3 = sub_1000D38D(v11, a1);
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

// Address: 0x1000C775
int __cdecl sub_1000C775(int a1, int a2, struct localeinfo_struct *a3)
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
  v3 = sub_1000D8D1(v11, a1);
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

// Address: 0x1000C81D
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
    memcpy_0(a1, a1 + 1, v12 + 1);
  }
  return 0;
}

// Address: 0x1000C8DC
int *__cdecl __dtold(int *a1, int *a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  __int16 v7; // cx
  __int16 v8; // di
  int *result; // eax
  __int16 v10; // cx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // [esp+Ch] [ebp-4h]
  __int16 v15; // [esp+1Ch] [ebp+Ch]

  v3 = (*((unsigned __int16 *)a2 + 3) >> 4) & 0x7FF;
  v15 = *((_WORD *)a2 + 3) & 0x8000;
  v4 = a2[1];
  v5 = *a2;
  v6 = v4 & 0xFFFFF;
  v14 = 0x80000000;
  if ( (_WORD)v3 == 0 )
  {
    if ( v6 == 0 && v5 == 0 )
    {
      result = a1;
      v10 = v15;
      a1[1] = 0;
      *a1 = 0;
      goto LABEL_13;
    }
    v7 = 15361;
    v14 = 0;
    goto LABEL_9;
  }
  if ( (unsigned __int16)v3 != 2047 )
  {
    v7 = v3 + 15360;
LABEL_9:
    v8 = v7;
    goto LABEL_10;
  }
  v8 = 0x7FFF;
LABEL_10:
  v11 = v14 | (v6 << 11) | (v5 >> 21);
  result = a1;
  a1[1] = v11;
  *a1 = v5 << 11;
  if ( (v11 & 0x80000000) == 0 )
  {
    do
    {
      v12 = *(__int64 *)a1 >> 31;
      v13 = 2 * *a1;
      --v8;
      a1[1] = v12;
      *a1 = v13;
    }
    while ( (v12 & 0x80000000) == 0 );
  }
  v10 = v8 | v15;
LABEL_13:
  *((_WORD *)result + 4) = v10;
  return result;
}

// Address: 0x1000C999
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
  __dtold(v12, &a1);
  v7 = v12[2];
  v5[2] = _I10_OUTPUT(v12[0], v12[1], v7, 17, 0, &v9);
  *v5 = v10;
  v5[1] = v9;
  if ( strcpy_s(Destination, SizeInBytes, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v5[3] = Destination;
  return v5;
}

// Address: 0x1000CA30
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

// Address: 0x1000CB10
unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}

// Address: 0x1000CB2F
int _fptrap()
{
  return _amsg_exit(2);
}

// Address: 0x1000CB38
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

// Address: 0x1000CBA4
int __cdecl _free_osfhnd(int a1)
{
  int *v1; // edi
  int v2; // esi
  _DWORD *v3; // eax

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = &dword_10022640[a1 >> 5], v2 = (a1 & 0x1F) << 6, ((v3 = (_DWORD *)(v2 + *v1))[1] & 1) == 0)
    || *v3 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_1001C340 == 1 )
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

// Address: 0x1000CC2A
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
         && ((v2 = (intptr_t *)(dword_10022640[FileHandle >> 5] + ((FileHandle & 0x1F) << 6)))[1] & 1) != 0 )
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

// Address: 0x1000CCA1
BOOL __cdecl __lock_fhandle(int a1)
{
  int v1; // esi
  BOOL inited; // [esp+10h] [ebp-1Ch]

  v1 = dword_10022640[a1 >> 5] + ((a1 & 0x1F) << 6);
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
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_10022640[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
  return inited;
}

// Address: 0x1000CD41
void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_10022640[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}

// Address: 0x1000CD68
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( dword_1001BEB0 == 0 )
    goto LABEL_10;
  if ( hObject == (HANDLE)-2 )
    __initconout();
  if ( hObject == (HANDLE)-1 )
    return -1;
  if ( !WriteConsoleW(hObject, &Character, 1u, &NumberOfCharsWritten, nullptr) )
  {
    if ( dword_1001BEB0 != 2 || GetLastError() != 120 )
      return -1;
    dword_1001BEB0 = 0;
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP();
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, &Character, 1, MultiByteStr, 5, nullptr, nullptr);
    if ( hObject != (HANDLE)-1 && WriteConsoleA(hObject, MultiByteStr, v3, &NumberOfCharsWritten, nullptr) )
      return Character;
    return -1;
  }
  dword_1001BEB0 = 1;
  return Character;
}

// Address: 0x1000CE2D
int __cdecl _mbtowc_l(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes, _locale_t Locale)
{
  int result; // eax
  struct __crt_locale_data *locinfo; // eax
  int v6; // ecx
  bool v7; // zf
  __crt_locale_pointers Localea; // [esp+8h] [ebp-10h] BYREF
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
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( *((_DWORD *)Localea.locinfo + 5) == 0 )
  {
    if ( DstCh != nullptr )
      *DstCh = *(unsigned __int8 *)SrcCh;
    goto LABEL_11;
  }
  if ( _isleadbyte_l(*(unsigned __int8 *)SrcCh, &Localea) != 0 )
  {
    locinfo = Localea.locinfo;
    v6 = *((_DWORD *)Localea.locinfo + 43);
    if ( v6 > 1
      && (int)SrcSizeInBytes >= v6
      && (v7 = MultiByteToWideChar(*((_DWORD *)Localea.locinfo + 1), 9u, SrcCh, v6, DstCh, DstCh != nullptr) == 0,
          locinfo = Localea.locinfo,
          !v7)
      || SrcSizeInBytes >= *((_DWORD *)locinfo + 43) && SrcCh[1] != 0 )
    {
      result = *((_DWORD *)locinfo + 43);
      if ( v10 != 0 )
        *(_DWORD *)(v9 + 112) &= ~2u;
      return result;
    }
  }
  else if ( MultiByteToWideChar(*((_DWORD *)Localea.locinfo + 1), 9u, SrcCh, 1, DstCh, DstCh != nullptr) != 0 )
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

// Address: 0x1000CF44
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x1000CF5E
int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // esi
  int *v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  _lock(1);
  for ( i = 3; i < dword_10022620; ++i )
  {
    v1 = 4 * i;
    v2 = (int *)((char *)dword_10021608 + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 && fclose((FILE *)v3) != -1 )
        ++v5;
      if ( i >= 20 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_10021608 + v1) + 32));
        free(*(void **)((char *)dword_10021608 + v1));
        *(_DWORD *)((char *)dword_10021608 + v1) = 0;
      }
    }
  }
  _unlock(1);
  return v5;
}

// Address: 0x1000CFFD
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

// Address: 0x1000D065
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

// Address: 0x1000D0AD
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
  for ( i = 0; i < dword_10022620; ++i )
  {
    v2 = (int *)((char *)dword_10021608 + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 )
      {
        _lock_file2(i, v3);
        v4 = *(_DWORD *)(*((_DWORD *)dword_10021608 + i) + 12);
        if ( (v4 & 0x83) != 0 )
        {
          if ( a1 == 1 )
          {
            if ( _fflush_nolock(*((FILE **)dword_10021608 + i)) != -1 )
              ++v7;
          }
          else if ( a1 == 0 && (v4 & 2) != 0 && _fflush_nolock(*((FILE **)dword_10021608 + i)) == -1 )
          {
            v6 = -1;
          }
        }
        _unlock_file2(i, *((_DWORD *)dword_10021608 + i));
      }
    }
  }
  _unlock(1);
  result = v7;
  if ( a1 != 1 )
    return v6;
  return result;
}

// Address: 0x1000D187
int sub_1000D187()
{
  return flsall(1);
}

// Address: 0x1000D190
int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0;
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) != 0 )
    return atol(LCData);
  else
    return -1;
}

// Address: 0x1000D1D9
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

// Address: 0x1000D38D
int __cdecl sub_1000D38D(unsigned __int16 *a1, unsigned int *a2)
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
    v8 = dword_1001BF70 - 1;
    v64 = v3;
    v65 = dword_1001BF70 / 32;
    v9 = &v60 + dword_1001BF70 / 32;
    v66 = 31 - dword_1001BF70 % 32;
    if ( ((1 << (31 - dword_1001BF70 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_1001BF70 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
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
    if ( v3 >= dword_1001BF6C - dword_1001BF70 )
    {
      if ( v3 > dword_1001BF6C )
      {
        if ( v3 < dword_1001BF68 )
        {
          v60 &= ~0x80000000;
          v5 = dword_1001BF7C + v3;
          v50 = dword_1001BF74 / 32;
          v51 = dword_1001BF74 % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_1001BF74 % 32;
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
          v43 = dword_1001BF74 / 32;
          v44 = dword_1001BF74 % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_1001BF74 % 32;
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
          v5 = dword_1001BF7C + dword_1001BF68;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_1001BF6C - v64) / 32;
      v62 = v59;
      v18 = (dword_1001BF6C - v64) % 32;
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
      v24 = dword_1001BF70 - 1;
      v25 = dword_1001BF70 / 32;
      v65 = dword_1001BF70 / 32;
      v26 = &v60 + dword_1001BF70 / 32;
      v64 = 31 - dword_1001BF70 % 32;
      if ( ((1 << (31 - dword_1001BF70 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_1001BF70 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
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
      v36 = (dword_1001BF74 + 1) / 32;
      v37 = (dword_1001BF74 + 1) % 32;
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
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_1001BF74));
  if ( dword_1001BF78 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_1001BF78 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x1000D8D1
int __cdecl sub_1000D8D1(unsigned __int16 *a1, unsigned int *a2)
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
    v8 = dword_1001BF88 - 1;
    v64 = v3;
    v65 = dword_1001BF88 / 32;
    v9 = &v60 + dword_1001BF88 / 32;
    v66 = 31 - dword_1001BF88 % 32;
    if ( ((1 << (31 - dword_1001BF88 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_1001BF88 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
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
    if ( v3 >= dword_1001BF84 - dword_1001BF88 )
    {
      if ( v3 > dword_1001BF84 )
      {
        if ( v3 < dword_1001BF80 )
        {
          v60 &= ~0x80000000;
          v5 = dword_1001BF94 + v3;
          v50 = dword_1001BF8C / 32;
          v51 = dword_1001BF8C % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_1001BF8C % 32;
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
          v43 = dword_1001BF8C / 32;
          v44 = dword_1001BF8C % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_1001BF8C % 32;
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
          v5 = dword_1001BF94 + dword_1001BF80;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_1001BF84 - v64) / 32;
      v62 = v59;
      v18 = (dword_1001BF84 - v64) % 32;
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
      v24 = dword_1001BF88 - 1;
      v25 = dword_1001BF88 / 32;
      v65 = dword_1001BF88 / 32;
      v26 = &v60 + dword_1001BF88 / 32;
      v64 = 31 - dword_1001BF88 % 32;
      if ( ((1 << (31 - dword_1001BF88 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_1001BF88 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
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
      v36 = (dword_1001BF8C + 1) / 32;
      v37 = (dword_1001BF8C + 1) % 32;
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
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_1001BF8C));
  if ( dword_1001BF90 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_1001BF90 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x1000DE15
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
  __int16 v29; // cx
  __int16 v30; // si
  unsigned __int16 v31; // cx
  __int16 v32; // si
  unsigned __int16 v33; // dx
  int v34; // eax
  _WORD *v35; // edi
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // esi
  __int16 v39; // dx
  unsigned int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // esi
  int v44; // eax
  int v45; // edi
  int v46; // eax
  __int16 v47; // cx
  int v48; // esi
  unsigned int v49; // edx
  __int16 v50; // ax
  int v51; // [esp-4h] [ebp-8Ch]
  int v52; // [esp-4h] [ebp-8Ch]
  char *v53; // [esp+Ch] [ebp-7Ch]
  __int16 v54; // [esp+14h] [ebp-74h]
  __int16 v55; // [esp+18h] [ebp-70h]
  int v56; // [esp+1Ch] [ebp-6Ch]
  int v57; // [esp+20h] [ebp-68h]
  int v58; // [esp+20h] [ebp-68h]
  int v59; // [esp+24h] [ebp-64h]
  int v60; // [esp+24h] [ebp-64h]
  int v61; // [esp+28h] [ebp-60h]
  unsigned __int16 *v62; // [esp+28h] [ebp-60h]
  int v63; // [esp+2Ch] [ebp-5Ch]
  unsigned __int16 *v64; // [esp+2Ch] [ebp-5Ch]
  int v65; // [esp+30h] [ebp-58h]
  int i; // [esp+30h] [ebp-58h]
  char *v67; // [esp+34h] [ebp-54h]
  int v68; // [esp+34h] [ebp-54h]
  int v69; // [esp+38h] [ebp-50h]
  int v70; // [esp+38h] [ebp-50h]
  unsigned int v71; // [esp+3Ch] [ebp-4Ch]
  int v72; // [esp+3Ch] [ebp-4Ch]
  __int64 v73; // [esp+40h] [ebp-48h] BYREF
  int v74; // [esp+48h] [ebp-40h]
  _DWORD v75[7]; // [esp+4Ch] [ebp-3Ch] BYREF
  _BYTE v76[23]; // [esp+68h] [ebp-20h] BYREF
  char v77; // [esp+7Fh] [ebp-9h]

  v8 = 0;
  v9 = v76;
  v54 = 0;
  v57 = 1;
  v71 = 0;
  v65 = 0;
  v63 = 0;
  v61 = 0;
  v59 = 0;
  v69 = 0;
  v56 = 0;
  if ( a8 == 0 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
  v11 = a3;
  v67 = a3;
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
          v54 = 0;
          v8 = 2;
          continue;
        }
        v15 = v14 - 2;
        if ( v15 == 0 )
        {
          v8 = 2;
          v54 = 0x8000;
          continue;
        }
        if ( v15 != 3 )
          goto LABEL_75;
        goto LABEL_19;
      case 1:
        v65 = 1;
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
        v52 = 6;
        goto LABEL_15;
      case 2:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
        {
LABEL_11:
          v51 = 3;
LABEL_12:
          v8 = v51;
          --v11;
        }
        else
        {
          if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          {
LABEL_14:
            v52 = 5;
            goto LABEL_15;
          }
          if ( v13 != 48 )
          {
LABEL_37:
            v16 = v67;
            goto LABEL_82;
          }
LABEL_19:
          v8 = 1;
        }
        continue;
      case 3:
        v65 = 1;
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v71 >= 0x19 )
          {
            ++v69;
          }
          else
          {
            ++v71;
            *v9++ = v13 - 48;
          }
          v13 = *v11++;
        }
        if ( v13 != ***(_BYTE ***)(*(_DWORD *)a8 + 188) )
          goto LABEL_46;
LABEL_24:
        v52 = 4;
        goto LABEL_15;
      case 4:
        v65 = 1;
        v63 = 1;
        if ( v71 == 0 )
        {
          while ( v13 == 48 )
          {
            --v69;
            v13 = *v11++;
          }
        }
        while ( v13 >= 48 && v13 <= 57 )
        {
          if ( v71 < 0x19 )
          {
            ++v71;
            *v9++ = v13 - 48;
            --v69;
          }
          v13 = *v11++;
        }
LABEL_46:
        if ( v13 != 43 && v13 != 45 )
          goto LABEL_28;
LABEL_33:
        --v11;
        v52 = 11;
        goto LABEL_15;
      case 5:
        v63 = 1;
        if ( (unsigned __int8)(v13 - 48) > 9u )
          goto LABEL_37;
        v51 = 4;
        goto LABEL_12;
      case 6:
        v67 = v11 - 2;
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
        v52 = 8;
        goto LABEL_15;
      case 7:
        if ( (unsigned __int8)(v13 - 49) <= 8u )
          goto LABEL_63;
        v19 = v13 == 48;
        goto LABEL_67;
      case 8:
        v61 = 1;
        while ( v13 == 48 )
          v13 = *v11++;
        if ( (unsigned __int8)(v13 - 49) > 8u )
          goto LABEL_75;
LABEL_63:
        v51 = 9;
        goto LABEL_12;
      case 9:
        v61 = 1;
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
        v59 = v21;
        while ( v13 >= 48 && v13 <= 57 )
          v13 = *v11++;
LABEL_75:
        v16 = v11 - 1;
        goto LABEL_82;
      case 11:
        if ( a7 != 0 )
        {
          v20 = v13 - 43;
          v67 = v11 - 1;
          if ( v20 != 0 )
          {
            if ( v20 != 2 )
            {
              v16 = v11 - 1;
              goto LABEL_82;
            }
LABEL_69:
            v57 = -1;
            v8 = 7;
          }
          else
          {
LABEL_70:
            v52 = 7;
LABEL_15:
            v8 = v52;
          }
          continue;
        }
        v16 = v11 - 1;
LABEL_82:
        *a2 = v16;
        if ( v65 == 0 )
        {
          v56 = 4;
LABEL_177:
          v47 = 0;
          v50 = 0;
          v49 = 0;
          v48 = 0;
          goto LABEL_178;
        }
        if ( v71 > 0x18 )
        {
          if ( v77 >= 5 )
            ++v77;
          --v9;
          ++v69;
          v71 = 24;
        }
        if ( v71 == 0 )
          goto LABEL_177;
        while ( *--v9 == 0 )
        {
          --v71;
          ++v69;
        }
        __mtold12(v76, v71, v75);
        v22 = v59;
        if ( v57 < 0 )
          v22 = -v59;
        v23 = v69 + v22;
        if ( v61 == 0 )
          v23 += a5;
        if ( v63 == 0 )
          v23 -= a6;
        if ( v23 > 5200 )
        {
          v48 = 0;
          v50 = 0x7FFF;
          v49 = 0x80000000;
          v47 = 0;
          v56 = 2;
          goto LABEL_178;
        }
        if ( v23 < -5200 )
        {
          v56 = 1;
          goto LABEL_177;
        }
        v24 = (char *)&unk_1001C010 - 96;
        v68 = v23;
        if ( v23 != 0 )
        {
          if ( v23 < 0 )
          {
            v68 = -v23;
            v24 = (char *)&unk_1001C170 - 96;
          }
          if ( a4 == 0 )
            LOWORD(v75[0]) = 0;
          if ( v68 != 0 )
          {
            while ( 1 )
            {
              v25 = v68;
              v68 >>= 3;
              v26 = v24 + 84;
              v27 = v25 & 7;
              v53 = v26;
              if ( v27 == 0 )
                goto LABEL_172;
              v28 = &v26[12 * v27];
              if ( *(_WORD *)v28 >= 0x8000u )
              {
                v73 = *(_QWORD *)v28;
                v74 = *((_DWORD *)v28 + 2);
                --*(_DWORD *)((char *)&v73 + 2);
                v28 = (char *)&v73;
              }
              v29 = *((_WORD *)v28 + 5);
              v70 = 0;
              memset(&v75[4], 0, 12);
              v30 = HIWORD(v75[2]) ^ v29;
              v31 = v29 & 0x7FFF;
              v32 = v30 & 0x8000;
              v55 = v32;
              v33 = v31 + (HIWORD(v75[2]) & 0x7FFF);
              if ( (HIWORD(v75[2]) & 0x7FFF) == 0x7FFF || v31 >= 0x7FFFu || v33 > 0xBFFDu )
                break;
              if ( v33 <= 0x3FBFu )
              {
                v34 = 0;
                v75[1] = 0;
                v75[0] = 0;
LABEL_171:
                v75[2] = v34;
                goto LABEL_172;
              }
              if ( (v75[2] & 0x7FFF0000) != 0 || (++v33, (v75[2] & 0x7FFFFFFF) != 0) || v75[1] != 0 || v75[0] != 0 )
              {
                if ( v31 != 0
                  || (++v33, (*((_DWORD *)v28 + 2) & 0x7FFFFFFF) != 0)
                  || *((_DWORD *)v28 + 1) != 0
                  || *(_DWORD *)v28 != 0 )
                {
                  v58 = 0;
                  v35 = &v75[5];
                  for ( i = 5; i > 0; --i )
                  {
                    v60 = i;
                    v64 = (unsigned __int16 *)v75 + v58;
                    v62 = (unsigned __int16 *)(v28 + 8);
                    do
                    {
                      v72 = 0;
                      v36 = *v64 * *v62;
                      v37 = *((_DWORD *)v35 - 1);
                      v38 = v37 + v36;
                      if ( v37 + v36 < v37 || v38 < v36 )
                        v72 = 1;
                      *((_DWORD *)v35 - 1) = v38;
                      if ( v72 != 0 )
                        ++*v35;
                      ++v64;
                      --v62;
                      --v60;
                    }
                    while ( v60 > 0 );
                    ++v35;
                    ++v58;
                  }
                  v39 = v33 - 16382;
                  if ( v39 <= 0 )
                    goto LABEL_181;
                  do
                  {
                    if ( v75[6] < 0 )
                      break;
                    v40 = v75[4];
                    v75[4] *= 2;
                    v41 = (v40 >> 31) | (2 * v75[5]);
                    v42 = *(__int64 *)&v75[5] >> 31;
                    --v39;
                    v75[5] = v41;
                    v75[6] = v42;
                  }
                  while ( v39 > 0 );
                  if ( v39 <= 0 )
                  {
LABEL_181:
                    if ( --v39 < 0 )
                    {
                      v43 = (unsigned __int16)-v39;
                      v39 = 0;
                      do
                      {
                        if ( (v75[4] & 1) != 0 )
                          ++v70;
                        v44 = v75[6];
                        v75[6] >>= 1;
                        v45 = (v44 << 31) | (v75[5] >> 1);
                        v46 = *(__int64 *)&v75[4] >> 1;
                        --v43;
                        v75[5] = v45;
                        v75[4] = v46;
                      }
                      while ( v43 != 0 );
                      if ( v70 != 0 )
                        LOWORD(v75[4]) |= 1u;
                    }
                  }
                  if ( LOWORD(v75[4]) > 0x8000u || (v75[4] & 0x1FFFF) == 0x18000 )
                  {
                    if ( *(_DWORD *)((char *)&v75[4] + 2) == -1 )
                    {
                      *(_DWORD *)((char *)&v75[4] + 2) = 0;
                      if ( *(_DWORD *)((char *)&v75[5] + 2) == -1 )
                      {
                        *(_DWORD *)((char *)&v75[5] + 2) = 0;
                        if ( HIWORD(v75[6]) == 0xFFFF )
                        {
                          HIWORD(v75[6]) = 0x8000;
                          ++v39;
                        }
                        else
                        {
                          ++HIWORD(v75[6]);
                        }
                      }
                      else
                      {
                        ++*(_DWORD *)((char *)&v75[5] + 2);
                      }
                    }
                    else
                    {
                      ++*(_DWORD *)((char *)&v75[4] + 2);
                    }
                  }
                  if ( (unsigned __int16)v39 < 0x7FFFu )
                  {
                    LOWORD(v75[0]) = HIWORD(v75[4]);
                    *(_QWORD *)((char *)v75 + 2) = *(_QWORD *)&v75[5];
                    HIWORD(v75[2]) = v55 | v39;
                  }
                  else
                  {
                    v75[1] = 0;
                    v75[0] = 0;
                    v75[2] = v55 == 0 ? 2147450880 : -32768;
                  }
                }
                else
                {
                  memset(v75, 0, 12);
                }
              }
              else
              {
                HIWORD(v75[2]) = 0;
              }
LABEL_172:
              if ( v68 == 0 )
                goto LABEL_173;
              v24 = v53;
            }
            v75[1] = 0;
            v34 = v32 == 0 ? 2147450880 : -32768;
            v75[0] = 0;
            goto LABEL_171;
          }
        }
LABEL_173:
        v47 = v75[0];
        v48 = *(_DWORD *)((char *)v75 + 2);
        v49 = *(_DWORD *)((char *)&v75[1] + 2);
        v50 = HIWORD(v75[2]);
LABEL_178:
        *(_WORD *)a1 = v47;
        *(_WORD *)(a1 + 10) = v54 | v50;
        *(_DWORD *)(a1 + 2) = v48;
        *(_DWORD *)(a1 + 6) = v49;
        return v56;
    }
  }
}

// Address: 0x1000E50D
int __cdecl _I10_OUTPUT(__int64 a1, __int16 a2, int a3, char a4, int a5)
{
  __int16 v5; // cx
  unsigned __int16 v6; // dx
  __int64 v7; // rdi
  errno_t v9; // eax
  errno_t v10; // eax
  __int16 v11; // ax
  int v12; // ebx
  int v13; // ecx
  char *v14; // eax
  _DWORD *v15; // esi
  __int16 v16; // dx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // di
  _WORD *v19; // esi
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int16 v23; // di
  unsigned int v24; // ecx
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // esi
  int v29; // ecx
  unsigned __int16 v30; // si
  int v31; // eax
  _WORD *v32; // edi
  unsigned __int16 *v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // ebx
  __int16 v37; // si
  unsigned int v38; // ecx
  unsigned int v39; // edx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // edi
  int v43; // ecx
  int v44; // edi
  int v45; // esi
  unsigned int v46; // eax
  int v47; // ebx
  int v48; // eax
  bool v49; // zf
  int v50; // esi
  int v51; // eax
  int v52; // ebx
  int v53; // eax
  _BYTE *v54; // ebx
  unsigned int v55; // edx
  unsigned int v56; // edi
  unsigned int v57; // ecx
  int v58; // esi
  int v59; // ecx
  unsigned int v60; // esi
  unsigned int v61; // edi
  int v62; // edx
  unsigned int v63; // edx
  char *v64; // ebx
  char v65; // al
  char *v66; // ebx
  int v67; // eax
  char v68; // bl
  __int16 v69; // [esp+10h] [ebp-70h]
  unsigned __int16 *v70; // [esp+14h] [ebp-6Ch]
  unsigned __int16 *v71; // [esp+18h] [ebp-68h]
  char *v72; // [esp+1Ch] [ebp-64h]
  int v73; // [esp+24h] [ebp-5Ch]
  __int16 v74; // [esp+24h] [ebp-5Ch]
  int v75; // [esp+28h] [ebp-58h]
  int v76; // [esp+28h] [ebp-58h]
  int v77; // [esp+2Ch] [ebp-54h]
  int v78; // [esp+2Ch] [ebp-54h]
  int v79; // [esp+30h] [ebp-50h]
  int v80; // [esp+30h] [ebp-50h]
  __int16 v81; // [esp+34h] [ebp-4Ch]
  int k; // [esp+34h] [ebp-4Ch]
  __int16 v83; // [esp+38h] [ebp-48h]
  int *v84; // [esp+38h] [ebp-48h]
  char *v85; // [esp+3Ch] [ebp-44h]
  int v86; // [esp+3Ch] [ebp-44h]
  int v87; // [esp+3Ch] [ebp-44h]
  unsigned int v88; // [esp+3Ch] [ebp-44h]
  int i; // [esp+40h] [ebp-40h]
  int j; // [esp+40h] [ebp-40h]
  char *v91; // [esp+40h] [ebp-40h]
  _BYTE v92[12]; // [esp+44h] [ebp-3Ch] BYREF
  int v93; // [esp+50h] [ebp-30h]
  int v94; // [esp+54h] [ebp-2Ch]
  int v95; // [esp+58h] [ebp-28h] BYREF
  _BYTE v96[12]; // [esp+60h] [ebp-20h] BYREF
  _BYTE v97[12]; // [esp+70h] [ebp-10h] BYREF

  *(_QWORD *)v97 = a1;
  *(_WORD *)&v97[8] = a2;
  v5 = a2 & 0x8000;
  v6 = a2 & 0x7FFF;
  v93 = -858993460;
  v94 = -858993460;
  v95 = 1073466572;
  v69 = a2 & 0x8000;
  if ( a2 >= 0 )
    *(_BYTE *)(a5 + 2) = 32;
  else
    *(_BYTE *)(a5 + 2) = 45;
  v7 = *(_QWORD *)v97;
  if ( v6 == 0 && *(_QWORD *)v97 == 0 )
  {
    *(_WORD *)a5 = 0;
    *(_BYTE *)(a5 + 2) = v5 != -32768 ? 32 : 45;
    *(_BYTE *)(a5 + 3) = 1;
    *(_BYTE *)(a5 + 4) = 48;
    *(_BYTE *)(a5 + 5) = 0;
    return 1;
  }
  if ( v6 == 0x7FFF )
  {
    *(_WORD *)a5 = 1;
    if ( v7 != 0x8000000000000000uLL && (v7 & 0x4000000000000000LL) == 0 )
    {
      v9 = strcpy_s((char *)(a5 + 4), 0x16u, "1#SNAN");
LABEL_22:
      if ( v9 != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      *(_BYTE *)(a5 + 3) = 6;
      return 0;
    }
    if ( v5 != 0 && HIDWORD(v7) == -1073741824 )
    {
      if ( (_DWORD)v7 == 0 )
      {
        v10 = strcpy_s((char *)(a5 + 4), 0x16u, "1#IND");
LABEL_18:
        if ( v10 != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        *(_BYTE *)(a5 + 3) = 5;
        return 0;
      }
    }
    else if ( v7 == 0x8000000000000000uLL )
    {
      v10 = strcpy_s((char *)(a5 + 4), 0x16u, "1#INF");
      goto LABEL_18;
    }
    v9 = strcpy_s((char *)(a5 + 4), 0x16u, "1#QNAN");
    goto LABEL_22;
  }
  v11 = (77 * (HIBYTE(v6) + 2 * HIBYTE(*(_DWORD *)&v97[4])) + 19728 * (unsigned int)v6 - 323162868) >> 16;
  *(_WORD *)v96 = 0;
  v12 = -v11;
  v81 = v11;
  *(_WORD *)&v96[10] = a2 & 0x7FFF;
  *(_QWORD *)&v96[2] = *(_QWORD *)v97;
  v72 = (char *)&unk_1001C010 - 96;
  if ( v11 != 0 )
  {
    if ( v11 > 0 )
    {
      v12 = v11;
      v72 = (char *)&unk_1001C170 - 96;
    }
    while ( v12 != 0 )
    {
      v72 += 84;
      v13 = v12 & 7;
      v12 >>= 3;
      if ( v13 != 0 )
      {
        v14 = &v72[12 * v13];
        v85 = v14;
        if ( *(_WORD *)v14 >= 0x8000u )
        {
          *(_DWORD *)v92 = *(_DWORD *)v14;
          *(_DWORD *)&v92[4] = *((_DWORD *)v14 + 1);
          v15 = v14 + 8;
          v14 = v92;
          *(_DWORD *)&v92[8] = *v15;
          --*(_DWORD *)&v92[2];
          v85 = v92;
        }
        v16 = *((_WORD *)v14 + 5);
        v77 = 0;
        memset(v97, 0, sizeof(v97));
        v83 = (*(_WORD *)&v96[10] ^ v16) & 0x8000;
        v17 = v16 & 0x7FFF;
        v18 = v17 + (*(_WORD *)&v96[10] & 0x7FFF);
        if ( (*(_WORD *)&v96[10] & 0x7FFF) == 0x7FFF || v17 >= 0x7FFFu || v18 > 0xBFFDu )
        {
          *(_DWORD *)&v96[8] = v83 == 0 ? 2147450880 : -32768;
        }
        else
        {
          if ( v18 > 0x3FBFu )
          {
            if ( (*(_WORD *)&v96[10] & 0x7FFF) == 0 )
            {
              ++v18;
              if ( (*(_DWORD *)&v96[8] & 0x7FFFFFFF) == 0 && *(_DWORD *)&v96[4] == 0 && *(_DWORD *)v96 == 0 )
              {
                *(_WORD *)&v96[10] = 0;
                continue;
              }
            }
            if ( v17 != 0
              || (++v18, (*((_DWORD *)v14 + 2) & 0x7FFFFFFF) != 0)
              || *((_DWORD *)v14 + 1) != 0
              || *(_DWORD *)v14 != 0 )
            {
              v75 = 0;
              v19 = &v97[4];
              for ( i = 5; i > 0; --i )
              {
                v79 = i;
                v70 = (unsigned __int16 *)&v96[2 * v75];
                v71 = (unsigned __int16 *)(v14 + 8);
                do
                {
                  v20 = *((_DWORD *)v19 - 1);
                  v21 = *v71 * *v70;
                  v73 = 0;
                  v22 = v20 + v21;
                  if ( v20 + v21 < v20 || v22 < v21 )
                    v73 = 1;
                  *((_DWORD *)v19 - 1) = v22;
                  if ( v73 != 0 )
                    ++*v19;
                  ++v70;
                  --v71;
                  --v79;
                }
                while ( v79 > 0 );
                v14 = v85;
                ++v19;
                ++v75;
              }
              v23 = v18 - 16382;
              if ( v23 <= 0 )
                goto LABEL_170;
              do
              {
                if ( *(int *)&v97[8] < 0 )
                  break;
                v24 = *(_DWORD *)v97;
                *(_DWORD *)v97 *= 2;
                v25 = *(_DWORD *)&v97[4];
                *(_DWORD *)&v97[4] = (v24 >> 31) | (2 * *(_DWORD *)&v97[4]);
                --v23;
                *(_DWORD *)&v97[8] = (v25 >> 31) | (2 * *(_DWORD *)&v97[8]);
              }
              while ( v23 > 0 );
              if ( v23 <= 0 )
              {
LABEL_170:
                if ( --v23 < 0 )
                {
                  v26 = (unsigned __int16)-v23;
                  v23 = 0;
                  do
                  {
                    if ( (v97[0] & 1) != 0 )
                      ++v77;
                    v27 = *(_DWORD *)&v97[8];
                    *(_DWORD *)&v97[8] >>= 1;
                    v28 = __SPAIR64__(v27, *(unsigned int *)&v97[4]) >> 1;
                    v29 = *(__int64 *)v97 >> 1;
                    --v26;
                    *(_DWORD *)&v97[4] = v28;
                    *(_DWORD *)v97 = v29;
                  }
                  while ( v26 != 0 );
                  if ( v77 != 0 )
                    *(_WORD *)v97 |= 1u;
                }
              }
              if ( *(_WORD *)v97 > 0x8000u || (*(_DWORD *)v97 & 0x1FFFF) == 0x18000 )
              {
                if ( *(_DWORD *)&v97[2] == -1 )
                {
                  *(_DWORD *)&v97[2] = 0;
                  if ( *(_DWORD *)&v97[6] == -1 )
                  {
                    *(_DWORD *)&v97[6] = 0;
                    if ( *(_WORD *)&v97[10] == 0xFFFF )
                    {
                      *(_WORD *)&v97[10] = 0x8000;
                      ++v23;
                    }
                    else
                    {
                      ++*(_WORD *)&v97[10];
                    }
                  }
                  else
                  {
                    ++*(_DWORD *)&v97[6];
                  }
                }
                else
                {
                  ++*(_DWORD *)&v97[2];
                }
              }
              if ( (unsigned __int16)v23 < 0x7FFFu )
              {
                *(_WORD *)v96 = *(_WORD *)&v97[2];
                *(_DWORD *)&v96[2] = *(_DWORD *)&v97[4];
                *(_DWORD *)&v96[6] = *(_DWORD *)&v97[8];
                *(_WORD *)&v96[10] = v83 | v23;
              }
              else
              {
                *(_DWORD *)&v96[4] = 0;
                *(_DWORD *)v96 = 0;
                *(_DWORD *)&v96[8] = v83 == 0 ? 2147450880 : -32768;
              }
              continue;
            }
          }
          *(_DWORD *)&v96[8] = 0;
        }
        *(_DWORD *)&v96[4] = 0;
        *(_DWORD *)v96 = 0;
      }
    }
  }
  if ( *(_WORD *)&v96[10] >= 0x3FFFu )
  {
    ++v81;
    v80 = 0;
    memset(v97, 0, sizeof(v97));
    v74 = (*(_WORD *)&v96[10] ^ HIWORD(v95)) & 0x8000;
    v30 = (HIWORD(v95) & 0x7FFF) + (*(_WORD *)&v96[10] & 0x7FFF);
    if ( (*(_WORD *)&v96[10] & 0x7FFF) == 0x7FFF || (HIWORD(v95) & 0x7FFF) == 0x7FFF || v30 > 0xBFFDu )
    {
      *(_DWORD *)&v96[4] = 0;
      v31 = ((*(_WORD *)&v96[10] ^ HIWORD(v95)) & 0x8000u) == 0 ? 2147450880 : -32768;
      *(_DWORD *)v96 = 0;
    }
    else
    {
      if ( v30 > 0x3FBFu )
      {
        v31 = 0;
        if ( (*(_WORD *)&v96[10] & 0x7FFF) == 0 )
        {
          ++v30;
          if ( (*(_DWORD *)&v96[8] & 0x7FFFFFFF) == 0 && *(_DWORD *)&v96[4] == 0 && *(_DWORD *)v96 == 0 )
          {
            *(_WORD *)&v96[10] = 0;
            goto LABEL_132;
          }
        }
        if ( (v95 & 0x7FFF0000) != 0 || (++v30, (v95 & 0x7FFFFFFF) != 0) || v94 != 0 || v93 != 0 )
        {
          v76 = 0;
          v32 = &v97[4];
          for ( j = 5; j > 0; --j )
          {
            v78 = j;
            v84 = &v95;
            v33 = (unsigned __int16 *)&v96[2 * v76];
            do
            {
              v86 = 0;
              v34 = *v33 * *(unsigned __int16 *)v84;
              v35 = *((_DWORD *)v32 - 1);
              v36 = v35 + v34;
              if ( v35 + v34 < v35 || v36 < v34 )
                v86 = 1;
              *((_DWORD *)v32 - 1) = v36;
              if ( v86 != 0 )
                ++*v32;
              v84 = (int *)((char *)v84 - 2);
              ++v33;
              --v78;
            }
            while ( v78 > 0 );
            ++v32;
            ++v76;
          }
          v37 = v30 - 16382;
          if ( v37 <= 0 )
            goto LABEL_171;
          do
          {
            if ( *(int *)&v97[8] < 0 )
              break;
            v38 = *(_DWORD *)v97;
            *(_DWORD *)v97 *= 2;
            v39 = *(_DWORD *)&v97[4];
            *(_DWORD *)&v97[4] = (v38 >> 31) | (2 * *(_DWORD *)&v97[4]);
            --v37;
            *(_DWORD *)&v97[8] = (v39 >> 31) | (2 * *(_DWORD *)&v97[8]);
          }
          while ( v37 > 0 );
          if ( v37 <= 0 )
          {
LABEL_171:
            if ( --v37 < 0 )
            {
              v40 = (unsigned __int16)-v37;
              v37 = 0;
              do
              {
                if ( (v97[0] & 1) != 0 )
                  ++v80;
                v41 = *(_DWORD *)&v97[8];
                *(_DWORD *)&v97[8] >>= 1;
                v42 = __SPAIR64__(v41, *(unsigned int *)&v97[4]) >> 1;
                v43 = *(__int64 *)v97 >> 1;
                --v40;
                *(_DWORD *)&v97[4] = v42;
                *(_DWORD *)v97 = v43;
              }
              while ( v40 != 0 );
              if ( v80 != 0 )
                *(_WORD *)v97 |= 1u;
            }
          }
          if ( *(_WORD *)v97 > 0x8000u || (*(_DWORD *)v97 & 0x1FFFF) == 0x18000 )
          {
            if ( *(_DWORD *)&v97[2] == -1 )
            {
              *(_DWORD *)&v97[2] = 0;
              if ( *(_DWORD *)&v97[6] == -1 )
              {
                *(_DWORD *)&v97[6] = 0;
                if ( *(_WORD *)&v97[10] == 0xFFFF )
                {
                  *(_WORD *)&v97[10] = 0x8000;
                  ++v37;
                }
                else
                {
                  ++*(_WORD *)&v97[10];
                }
              }
              else
              {
                ++*(_DWORD *)&v97[6];
              }
            }
            else
            {
              ++*(_DWORD *)&v97[2];
            }
          }
          if ( (unsigned __int16)v37 < 0x7FFFu )
          {
            *(_WORD *)v96 = *(_WORD *)&v97[2];
            *(_DWORD *)&v96[2] = *(_DWORD *)&v97[4];
            *(_DWORD *)&v96[6] = *(_DWORD *)&v97[8];
            *(_WORD *)&v96[10] = v74 | v37;
          }
          else
          {
            *(_DWORD *)&v96[4] = 0;
            *(_DWORD *)v96 = 0;
            *(_DWORD *)&v96[8] = v74 == 0 ? 2147450880 : -32768;
          }
          goto LABEL_132;
        }
      }
      else
      {
        v31 = 0;
      }
      *(_DWORD *)&v96[4] = 0;
      *(_DWORD *)v96 = 0;
    }
    *(_DWORD *)&v96[8] = v31;
  }
LABEL_132:
  v44 = a3;
  *(_WORD *)a5 = v81;
  if ( (a4 & 1) != 0 )
  {
    v44 = v81 + a3;
    if ( v44 <= 0 )
    {
      *(_WORD *)a5 = 0;
      *(_BYTE *)(a5 + 3) = 1;
      *(_BYTE *)(a5 + 2) = v69 != -32768 ? 32 : 45;
      *(_BYTE *)(a5 + 4) = 48;
      *(_BYTE *)(a5 + 5) = 0;
      return 1;
    }
  }
  if ( v44 > 21 )
    v44 = 21;
  v45 = *(unsigned __int16 *)&v96[10] - 16382;
  *(_WORD *)&v96[10] = 0;
  v87 = 8;
  do
  {
    v46 = *(_DWORD *)v96;
    *(_DWORD *)v96 *= 2;
    v47 = (v46 >> 31) | (2 * *(_DWORD *)&v96[4]);
    v48 = *(__int64 *)&v96[4] >> 31;
    v49 = v87-- == 1;
    *(_DWORD *)&v96[4] = v47;
    *(_DWORD *)&v96[8] = v48;
  }
  while ( !v49 );
  if ( v45 < 0 )
  {
    v50 = (unsigned __int8)-(char)v45;
    if ( v50 != 0 )
    {
      do
      {
        v51 = *(_DWORD *)&v96[8];
        *(_DWORD *)&v96[8] >>= 1;
        v52 = (v51 << 31) | (*(_DWORD *)&v96[4] >> 1);
        v53 = *(__int64 *)v96 >> 1;
        --v50;
        *(_DWORD *)&v96[4] = v52;
        *(_DWORD *)v96 = v53;
      }
      while ( v50 > 0 );
    }
  }
  v54 = (_BYTE *)(a5 + 4);
  v91 = (char *)(a5 + 4);
  for ( k = v44 + 1; k > 0; v96[11] = 0 )
  {
    v55 = *(_DWORD *)v96;
    *(_DWORD *)v92 = *(_DWORD *)v96;
    *(_QWORD *)&v92[4] = *(_QWORD *)&v96[4];
    *(_DWORD *)v96 *= 2;
    v56 = *(_DWORD *)v96;
    *(_DWORD *)v96 *= 2;
    v57 = (v55 >> 31) | (2 * *(_DWORD *)&v96[4]);
    v58 = 2 * v57;
    v59 = (v57 >> 31) | (2 * (*(__int64 *)&v96[4] >> 31));
    v60 = (v56 >> 31) | v58;
    v61 = *(_DWORD *)v92 + *(_DWORD *)v96;
    if ( (unsigned int)(*(_DWORD *)v92 + *(_DWORD *)v96) < *(_DWORD *)v96 || v61 < *(_DWORD *)v92 )
    {
      v62 = 0;
      if ( v60 + 1 < v60 || v60 == -1 )
        v62 = 1;
      ++v60;
      if ( v62 != 0 )
        ++v59;
    }
    v63 = *(_DWORD *)&v92[4] + v60;
    v88 = *(_DWORD *)&v92[4] + v60;
    if ( *(_DWORD *)&v92[4] + v60 < v60 || v63 < *(_DWORD *)&v92[4] )
      ++v59;
    *(_DWORD *)v96 = 2 * v61;
    *(_DWORD *)&v96[8] = (v63 >> 31) | (2 * (*(_DWORD *)&v92[8] + v59));
    *v54++ = v96[11] + 48;
    --k;
    *(_DWORD *)&v96[4] = (v61 >> 31) | (2 * v88);
  }
  v64 = v54 - 1;
  v65 = *v64;
  v66 = v64 - 1;
  if ( v65 >= 53 )
  {
    while ( v66 >= v91 && *v66 == 57 )
      *v66-- = 48;
    v67 = a5;
    if ( v66 < v91 )
    {
      ++v66;
      ++*(_WORD *)a5;
    }
    ++*v66;
  }
  else
  {
    while ( v66 >= v91 && *v66 == 48 )
      --v66;
    v67 = a5;
    if ( v66 < v91 )
    {
      *(_WORD *)a5 = 0;
      *(_BYTE *)(a5 + 3) = 1;
      *(_BYTE *)(a5 + 2) = v69 != -32768 ? 32 : 45;
      *v91 = 48;
      *(_BYTE *)(a5 + 5) = 0;
      return 1;
    }
  }
  v68 = (_BYTE)v66 - v67 - 3;
  *(_BYTE *)(v67 + 3) = v68;
  *(_BYTE *)(v68 + v67 + 4) = 0;
  return 1;
}

// Address: 0x1000EE31
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

// Address: 0x1000EEBF
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

// Address: 0x1000EF5F
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
  if ( dword_10022628 != 0 )
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

// Address: 0x1000F26E
HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  hObject = result;
  return result;
}

// Address: 0x1000F28D
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hObject != (HANDLE)-1 && hObject != (HANDLE)-2 )
    CloseHandle(hObject);
  result = dword_1001BF98;
  if ( dword_1001BF98 != (HANDLE)-1 && dword_1001BF98 != (HANDLE)-2 )
    return (HANDLE)CloseHandle(dword_1001BF98);
  return result;
}

// Address: 0x1000F2BA
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

// Address: 0x1000F331
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

// Address: 0x1000F3AD
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
    || (v2 = &dword_10022640[FileHandle >> 5], (*(_BYTE *)((v3 = (FileHandle & 0x1F) << 6) + *v2 + 4) & 1) == 0) )
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

// Address: 0x1000F490
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

// Address: 0x1000F4F1
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

// Address: 0x1000F6BF
int __cdecl __set_fpsr_sse2(unsigned int a1)
{
  int result; // eax

  result = 0;
  if ( dword_10022628 != 0 )
  {
    if ( (a1 & 0x40) != 0 && dword_1001C2E4 != 0 )
      _mm_setcsr(a1);
    else
      _mm_setcsr(a1 & 0xFFFFFFBF);
  }
  return result;
}

// Address: 0x1000F731
int __cdecl _close_nolock(int FileHandle)
{
  intptr_t osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_10022640[0] + 132) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_10022640[0] + 68) & 1) != 0)
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
  *(_BYTE *)(dword_10022640[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) = 0;
  if ( LastError == 0 )
    return 0;
  _dosmaperr(LastError);
  return -1;
}

// Address: 0x1000F7CD
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
    || (v2 = &dword_10022640[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v2 + v3 + 4) & 1) == 0) )
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

// Address: 0x1000F89A
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

// Address: 0x1000F8D0
// positive sp value has been detected, the output may be wrong!
int __fastcall found_bx(int a1, int a2)
{
  return a2 - 1;
}

// Address: 0x1000F8E0
char *__cdecl strchr(const char *Str, int Val)
{
  return __from_strstr_to_strchr((unsigned __int8)Val, Str);
}

// Address: 0x1000F8E6
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

// Address: 0x1000F99E
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x1000F9B0
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  dword_1001CDEC = (int)hinstDLL;
  return true;
}

// Address: 0x1000F9D0
int sub_1000F9D0()
{
  return 0;
}

// Address: 0x1000F9E0
void __cdecl sub_1000F9E0(LPCSTR lpString2)
{
  CHAR *v1; // [esp+0h] [ebp-4h]

  if ( dword_1001CDE0 != 0 )
  {
    v1 = (CHAR *)GlobalAlloc(0x40u, iMaxLength + 1028);
    lstrcpynA(v1 + 4, lpString2, iMaxLength);
    *(_DWORD *)v1 = *(_DWORD *)dword_1001CDE0;
    *(_DWORD *)dword_1001CDE0 = v1;
  }
}

// Address: 0x1000FA40
int __cdecl sub_1000FA40(LPSTR lpString1)
{
  _DWORD *hMem; // [esp+0h] [ebp-4h]

  if ( dword_1001CDE0 == 0 || *(_DWORD *)dword_1001CDE0 == 0 )
    return 1;
  hMem = *(_DWORD **)dword_1001CDE0;
  lstrcpyA(lpString1, (LPCSTR)(*(_DWORD *)dword_1001CDE0 + 4));
  *(_DWORD *)dword_1001CDE0 = *hMem;
  GlobalFree(hMem);
  return 0;
}

// Address: 0x1000FAA0
int __cdecl sub_1000FAA0(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  if ( !is_mul_ok(a2, a1) )
    return -1;
  *a3 = a2 * a1;
  return 0;
}

// Address: 0x1000FAE0
int __cdecl sub_1000FAE0(int a1, unsigned int a2, _DWORD *a3)
{
  if ( a2 + a1 < a2 )
    return -1;
  *a3 = a2 + a1;
  return 0;
}

// Address: 0x1000FB10
void __cdecl sub_1000FB10(char a1)
{
  if ( a1 != 0 )
  {
    if ( a1 == 1 )
    {
      sub_1000F9E0(&Buffer);
      sub_1000F9E0("ok");
    }
  }
  else
  {
    sub_1000F9E0(byte_1001CDF0);
    sub_1000F9E0("error");
  }
}

// Address: 0x1000FB70
int __cdecl sub_1000FB70(int a1, int a2)
{
  char *v2; // eax
  CHAR Source[1028]; // [esp+4h] [ebp-414h] BYREF
  int v5; // [esp+414h] [ebp-4h]

  v5 = 0;
  memset(Source, 0, 1024);
  v2 = (char *)sub_100016F0(&a1);
  sub_10001ED0(byte_1001CDF0, v2);
  if ( a2 != 0 )
  {
    wsprintfA(Source, " Error code = 0x%lX", a2);
    sub_10001EF0(byte_1001CDF0, Source);
  }
  v5 = -1;
  return sub_100013E0(&a1);
}

// Address: 0x1000FC40
int __cdecl sub_1000FC40(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v11; // [esp-8h] [ebp-B0h] BYREF
  LONG v12; // [esp-4h] [ebp-ACh]
  int *v13; // [esp+4h] [ebp-A4h]
  int *v14; // [esp+8h] [ebp-A0h]
  int *v15; // [esp+Ch] [ebp-9Ch]
  int *v16; // [esp+10h] [ebp-98h]
  int *v17; // [esp+14h] [ebp-94h]
  int *v18; // [esp+18h] [ebp-90h]
  int *v19; // [esp+1Ch] [ebp-8Ch]
  int v20; // [esp+20h] [ebp-88h]
  int *v21; // [esp+24h] [ebp-84h]
  int *v22; // [esp+28h] [ebp-80h]
  int *v23; // [esp+2Ch] [ebp-7Ch]
  int *v24; // [esp+30h] [ebp-78h]
  int *v25; // [esp+34h] [ebp-74h]
  int *v26; // [esp+38h] [ebp-70h]
  LONG lVal; // [esp+40h] [ebp-68h]
  int *v28; // [esp+44h] [ebp-64h]
  OLECHAR *v29; // [esp+48h] [ebp-60h] BYREF
  VARIANTARG v30; // [esp+4Ch] [ebp-5Ch] BYREF
  OLECHAR *v31; // [esp+5Ch] [ebp-4Ch] BYREF
  int v32; // [esp+60h] [ebp-48h] BYREF
  _WORD v33[4]; // [esp+64h] [ebp-44h] BYREF
  int v34; // [esp+6Ch] [ebp-3Ch]
  int v35; // [esp+78h] [ebp-30h] BYREF
  int v36; // [esp+7Ch] [ebp-2Ch] BYREF
  int v37; // [esp+80h] [ebp-28h] BYREF
  BSTR v38; // [esp+84h] [ebp-24h]
  BSTR v39; // [esp+88h] [ebp-20h]
  IUnknown *pProxy; // [esp+8Ch] [ebp-1Ch] BYREF
  LPVOID ppv; // [esp+90h] [ebp-18h] BYREF
  HRESULT v42; // [esp+94h] [ebp-14h]
  OLECHAR *v43; // [esp+98h] [ebp-10h] BYREF
  int v44; // [esp+A4h] [ebp-4h]

  v44 = 1;
  ppv = nullptr;
  v42 = CoCreateInstance(&rclsid, nullptr, 1u, &riid, &ppv);
  pProxy = nullptr;
  sub_100011E0(&v43, "\\\\.\\root\\default");
  LOBYTE(v44) = 2;
  v2 = unknown_libname_4(&v43);
  v42 = (*(int (__thiscall **)(LPVOID, LPVOID, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, IUnknown **))(*(_DWORD *)ppv + 12))(
          ppv,
          ppv,
          v2,
          0,
          0,
          0,
          0,
          0,
          0,
          &pProxy);
  if ( v42 < 0 )
  {
    v12 = v42;
    v11 = v3;
    v21 = &v11;
    v13 = sub_100012A0(&v11, "ConnectServer failed.");
    sub_1000FB70(v11, v12);
  }
  else
  {
    v42 = CoSetProxyBlanket(pProxy, 0xAu, 0, nullptr, 3u, 3u, nullptr, 0);
    if ( v42 < 0 )
    {
      v12 = v42;
      v11 = v42;
      v22 = &v11;
      v14 = sub_100012A0(&v11, "CoSetProxyBlanket failed.");
      sub_1000FB70(v11, v12);
    }
    else
    {
      v38 = SysAllocString(L"GetDWORDValue");
      v39 = SysAllocString(L"StdRegProv");
      v37 = 0;
      v42 = ((int (__stdcall *)(IUnknown *, BSTR, _DWORD, _DWORD, int *, _DWORD))pProxy->lpVtbl[2].QueryInterface)(
              pProxy,
              v39,
              0,
              0,
              &v37,
              0);
      if ( v42 < 0 )
      {
        v12 = v42;
        v11 = v4;
        v23 = &v11;
        v15 = sub_100012A0(&v11, "GetObject failed.");
        sub_1000FB70(v11, v12);
      }
      else
      {
        v36 = 0;
        v42 = (*(int (__stdcall **)(int, BSTR, _DWORD, int *, _DWORD))(*(_DWORD *)v37 + 76))(v37, v38, 0, &v36, 0);
        if ( v42 < 0 )
        {
          v12 = v42;
          v11 = v42;
          v24 = &v11;
          v16 = sub_100012A0(&v11, "GetMethod failed.");
          sub_1000FB70(v11, v12);
        }
        else
        {
          v35 = 0;
          v42 = (*(int (__thiscall **)(int, int, _DWORD, int *))(*(_DWORD *)v36 + 60))(v36, v36, 0, &v35);
          if ( v42 < 0 )
          {
            v12 = v42;
            v11 = v5;
            v25 = &v11;
            v17 = sub_100012A0(&v11, "SpawnInstance failed.");
            sub_1000FB70(v11, v12);
          }
          else
          {
            v33[0] = 23;
            v34 = -2147483646;
            v42 = (*(int (__thiscall **)(int, int, const wchar_t *, _DWORD, _WORD *, _DWORD))(*(_DWORD *)v35 + 20))(
                    v35,
                    v35,
                    L"hDefKey",
                    0,
                    v33,
                    0);
            v33[0] = 8;
            v34 = sub_100016C0(&a1);
            v42 = (*(int (__thiscall **)(int, int, const wchar_t *, _DWORD, _WORD *, _DWORD))(*(_DWORD *)v35 + 20))(
                    v35,
                    v35,
                    L"sSubKeyName",
                    0,
                    v33,
                    0);
            v33[0] = 8;
            v34 = sub_100016C0(&a2);
            v42 = (*(int (__thiscall **)(int, int, const wchar_t *, _DWORD, _WORD *, _DWORD))(*(_DWORD *)v35 + 20))(
                    v35,
                    v35,
                    L"sValueName",
                    0,
                    v33,
                    0);
            v32 = 0;
            v42 = ((int (__stdcall *)(IUnknown *, BSTR, BSTR, _DWORD, _DWORD, int, int *, _DWORD))pProxy->lpVtbl[8].QueryInterface)(
                    pProxy,
                    v39,
                    v38,
                    0,
                    0,
                    v35,
                    &v32,
                    0);
            if ( v42 >= 0 )
            {
              unknown_libname_2(&v30);
              LOBYTE(v44) = 3;
              sub_100011E0(&v31, "ReturnValue");
              LOBYTE(v44) = 4;
              v7 = unknown_libname_4(&v31);
              v42 = (*(int (__stdcall **)(int, int, _DWORD, VARIANTARG *, _DWORD, _DWORD))(*(_DWORD *)v32 + 16))(
                      v32,
                      v7,
                      0,
                      &v30,
                      0,
                      0);
              if ( v30.lVal == 0 )
              {
                sub_100011E0(&v29, "sValue");
                LOBYTE(v44) = 5;
                v9 = unknown_libname_4(&v29);
                v42 = (*(int (__stdcall **)(int, int, _DWORD, VARIANTARG *, _DWORD, _DWORD))(*(_DWORD *)v32 + 16))(
                        v32,
                        v9,
                        0,
                        &v30,
                        0,
                        0);
                lVal = v30.lVal;
                LOBYTE(v44) = 4;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v29);
                LOBYTE(v44) = 3;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v31);
                LOBYTE(v44) = 2;
                sub_10001CF0(&v30);
                LOBYTE(v44) = 1;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v43);
                LOBYTE(v44) = 0;
                sub_100013E0(&a1);
                v44 = -1;
                sub_100013E0(&a2);
                return lVal;
              }
              if ( v30.lVal == 1 )
              {
                LOBYTE(v44) = 3;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v31);
                LOBYTE(v44) = 2;
                sub_10001CF0(&v30);
                LOBYTE(v44) = 1;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v43);
                LOBYTE(v44) = 0;
                sub_100013E0(&a1);
                v44 = -1;
                sub_100013E0(&a2);
                return -2;
              }
              v12 = v30.lVal;
              v11 = v8;
              v26 = &v11;
              v18 = sub_100012A0(&v11, "GetStringValue failed.");
              sub_1000FB70(v11, v12);
              (*(void (__stdcall **)(int))(*(_DWORD *)v32 + 8))(v32);
              LOBYTE(v44) = 3;
              Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v31);
              LOBYTE(v44) = 2;
              sub_10001CF0(&v30);
            }
            else
            {
              v12 = v42;
              v11 = v6;
              v28 = &v11;
              v19 = sub_100012A0(&v11, "ExecMethod failed.");
              sub_1000FB70(v11, v12);
            }
            (*(void (__stdcall **)(int))(*(_DWORD *)v35 + 8))(v35);
          }
          (*(void (__stdcall **)(int))(*(_DWORD *)v36 + 8))(v36);
        }
        (*(void (__stdcall **)(int))(*(_DWORD *)v37 + 8))(v37);
      }
    }
    pProxy->lpVtbl->Release(pProxy);
  }
  v20 = -1;
  LOBYTE(v44) = 1;
  Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v43);
  LOBYTE(v44) = 0;
  sub_100013E0(&a1);
  v44 = -1;
  sub_100013E0(&a2);
  return v20;
}

// Address: 0x10010140
char __cdecl sub_10010140(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  HRESULT v11; // [esp-8h] [ebp-B4h] BYREF
  LONG lVal; // [esp-4h] [ebp-B0h]
  int *v13; // [esp+4h] [ebp-A8h]
  int *v14; // [esp+8h] [ebp-A4h]
  int *v15; // [esp+Ch] [ebp-A0h]
  int *v16; // [esp+10h] [ebp-9Ch]
  int *v17; // [esp+14h] [ebp-98h]
  int *v18; // [esp+18h] [ebp-94h]
  int *v19; // [esp+1Ch] [ebp-90h]
  char v20; // [esp+23h] [ebp-89h]
  int *v21; // [esp+24h] [ebp-88h]
  int *v22; // [esp+28h] [ebp-84h]
  int *v23; // [esp+2Ch] [ebp-80h]
  int *v24; // [esp+30h] [ebp-7Ch]
  int *v25; // [esp+34h] [ebp-78h]
  int *v26; // [esp+38h] [ebp-74h]
  int *v27; // [esp+40h] [ebp-6Ch]
  int v28; // [esp+44h] [ebp-68h] BYREF
  OLECHAR *v29; // [esp+48h] [ebp-64h] BYREF
  char *Source; // [esp+4Ch] [ebp-60h]
  VARIANTARG v31; // [esp+50h] [ebp-5Ch] BYREF
  OLECHAR *v32; // [esp+60h] [ebp-4Ch] BYREF
  int v33; // [esp+64h] [ebp-48h] BYREF
  _WORD v34[4]; // [esp+68h] [ebp-44h] BYREF
  int v35; // [esp+70h] [ebp-3Ch]
  int v36; // [esp+7Ch] [ebp-30h] BYREF
  int v37; // [esp+80h] [ebp-2Ch] BYREF
  int v38; // [esp+84h] [ebp-28h] BYREF
  BSTR v39; // [esp+88h] [ebp-24h]
  BSTR v40; // [esp+8Ch] [ebp-20h]
  IUnknown *pProxy; // [esp+90h] [ebp-1Ch] BYREF
  LPVOID ppv; // [esp+94h] [ebp-18h] BYREF
  HRESULT v43; // [esp+98h] [ebp-14h]
  OLECHAR *v44; // [esp+9Ch] [ebp-10h] BYREF
  int v45; // [esp+A8h] [ebp-4h]

  v45 = 1;
  ppv = nullptr;
  v43 = CoCreateInstance(&rclsid, nullptr, 1u, &riid, &ppv);
  pProxy = nullptr;
  sub_100011E0(&v44, "\\\\.\\root\\default");
  LOBYTE(v45) = 2;
  v2 = unknown_libname_4(&v44);
  v43 = (*(int (__thiscall **)(LPVOID, LPVOID, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, IUnknown **))(*(_DWORD *)ppv + 12))(
          ppv,
          ppv,
          v2,
          0,
          0,
          0,
          0,
          0,
          0,
          &pProxy);
  if ( v43 < 0 )
  {
    lVal = v43;
    v11 = v43;
    v21 = &v11;
    v13 = sub_100012A0(&v11, "ConnectServer failed.");
    sub_1000FB70(v11, lVal);
  }
  else
  {
    v43 = CoSetProxyBlanket(pProxy, 0xAu, 0, nullptr, 3u, 3u, nullptr, 0);
    if ( v43 < 0 )
    {
      lVal = v43;
      v11 = v3;
      v22 = &v11;
      v14 = sub_100012A0(&v11, "CoSetProxyBlanket failed.");
      sub_1000FB70(v11, lVal);
    }
    else
    {
      v39 = SysAllocString(L"GetStringValue");
      v40 = SysAllocString(L"StdRegProv");
      v38 = 0;
      v43 = ((int (__stdcall *)(IUnknown *, BSTR, _DWORD, _DWORD, int *, _DWORD))pProxy->lpVtbl[2].QueryInterface)(
              pProxy,
              v40,
              0,
              0,
              &v38,
              0);
      if ( v43 < 0 )
      {
        lVal = v43;
        v11 = v43;
        v23 = &v11;
        v15 = sub_100012A0(&v11, "GetObject failed.");
        sub_1000FB70(v11, lVal);
      }
      else
      {
        v37 = 0;
        v43 = (*(int (__stdcall **)(int, BSTR, _DWORD, int *, _DWORD))(*(_DWORD *)v38 + 76))(v38, v39, 0, &v37, 0);
        if ( v43 < 0 )
        {
          lVal = v43;
          v11 = v4;
          v24 = &v11;
          v16 = sub_100012A0(&v11, "GetMethod failed.");
          sub_1000FB70(v11, lVal);
        }
        else
        {
          v36 = 0;
          v43 = (*(int (__thiscall **)(int, int, _DWORD, int *))(*(_DWORD *)v37 + 60))(v37, v37, 0, &v36);
          if ( v43 < 0 )
          {
            lVal = v43;
            v11 = v5;
            v25 = &v11;
            v17 = sub_100012A0(&v11, "SpawnInstance failed.");
            sub_1000FB70(v11, lVal);
          }
          else
          {
            v34[0] = 23;
            v35 = -2147483646;
            v43 = (*(int (__thiscall **)(int, int, const wchar_t *, _DWORD, _WORD *, _DWORD))(*(_DWORD *)v36 + 20))(
                    v36,
                    v36,
                    L"hDefKey",
                    0,
                    v34,
                    0);
            v34[0] = 8;
            v35 = sub_100016C0(&a1);
            v43 = (*(int (__thiscall **)(int, int, const wchar_t *, _DWORD, _WORD *, _DWORD))(*(_DWORD *)v36 + 20))(
                    v36,
                    v36,
                    L"sSubKeyName",
                    0,
                    v34,
                    0);
            v34[0] = 8;
            v35 = sub_100016C0(&a2);
            v43 = (*(int (__thiscall **)(int, int, const wchar_t *, _DWORD, _WORD *, _DWORD))(*(_DWORD *)v36 + 20))(
                    v36,
                    v36,
                    L"sValueName",
                    0,
                    v34,
                    0);
            v33 = 0;
            v43 = ((int (__stdcall *)(IUnknown *, BSTR, BSTR, _DWORD, _DWORD, int, int *, _DWORD))pProxy->lpVtbl[8].QueryInterface)(
                    pProxy,
                    v40,
                    v39,
                    0,
                    0,
                    v36,
                    &v33,
                    0);
            if ( v43 >= 0 )
            {
              unknown_libname_2(&v31);
              LOBYTE(v45) = 3;
              sub_100011E0(&v32, "ReturnValue");
              LOBYTE(v45) = 4;
              v7 = unknown_libname_4(&v32);
              v43 = (*(int (__stdcall **)(int, int, _DWORD, VARIANTARG *, _DWORD, _DWORD))(*(_DWORD *)v33 + 16))(
                      v33,
                      v7,
                      0,
                      &v31,
                      0,
                      0);
              if ( v31.lVal == 0 )
              {
                sub_100011E0(&v29, "sValue");
                LOBYTE(v45) = 5;
                v9 = unknown_libname_4(&v29);
                v43 = (*(int (__stdcall **)(int, int, _DWORD, VARIANTARG *, _DWORD, _DWORD))(*(_DWORD *)v33 + 16))(
                        v33,
                        v9,
                        0,
                        &v31,
                        0,
                        0);
                unknown_libname_5(&v28);
                LOBYTE(v45) = 6;
                sub_10001440(&v28, v31.bstrVal);
                Source = (char *)sub_100016F0(&v28);
                sub_10001ED0(&Buffer, Source);
                LOBYTE(v45) = 5;
                sub_100013E0(&v28);
                LOBYTE(v45) = 4;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v29);
                LOBYTE(v45) = 3;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v32);
                LOBYTE(v45) = 2;
                sub_10001CF0(&v31);
                LOBYTE(v45) = 1;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v44);
                LOBYTE(v45) = 0;
                sub_100013E0(&a1);
                v45 = -1;
                sub_100013E0(&a2);
                return 1;
              }
              if ( v31.lVal == 1 )
              {
                sub_10001ED0(&Buffer, (char *)&byte_10017E0A);
                LOBYTE(v45) = 3;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v32);
                LOBYTE(v45) = 2;
                sub_10001CF0(&v31);
                LOBYTE(v45) = 1;
                Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v44);
                LOBYTE(v45) = 0;
                sub_100013E0(&a1);
                v45 = -1;
                sub_100013E0(&a2);
                return 1;
              }
              lVal = v31.lVal;
              v11 = v8;
              v26 = &v11;
              v18 = sub_100012A0(&v11, "GetStringValue failed.");
              sub_1000FB70(v11, lVal);
              (*(void (__stdcall **)(int))(*(_DWORD *)v33 + 8))(v33);
              LOBYTE(v45) = 3;
              Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v32);
              LOBYTE(v45) = 2;
              sub_10001CF0(&v31);
            }
            else
            {
              lVal = v43;
              v11 = v6;
              v27 = &v11;
              v19 = sub_100012A0(&v11, "ExecMethod failed.");
              sub_1000FB70(v11, lVal);
            }
            (*(void (__stdcall **)(int))(*(_DWORD *)v36 + 8))(v36);
          }
          (*(void (__stdcall **)(int))(*(_DWORD *)v37 + 8))(v37);
        }
        (*(void (__stdcall **)(int))(*(_DWORD *)v38 + 8))(v38);
      }
    }
    pProxy->lpVtbl->Release(pProxy);
  }
  v20 = 0;
  LOBYTE(v45) = 1;
  Concurrency::details::UMSBackgroundPoller::~UMSBackgroundPoller(&v44);
  LOBYTE(v45) = 0;
  sub_100013E0(&a1);
  v45 = -1;
  sub_100013E0(&a2);
  return v20;
}

// Address: 0x10010690
char __cdecl sub_10010690(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  LPVOID *v5; // eax
  int v6; // ecx
  int v8; // eax
  IUnknown *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  void *v14; // eax
  VARIANTARG *v15; // eax
  int v16; // eax
  int v17; // ecx
  unsigned __int8 *v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // [esp-10h] [ebp-114h]
  unsigned __int8 *v22; // [esp-8h] [ebp-10Ch] BYREF
  unsigned __int8 *v23; // [esp-4h] [ebp-108h]
  int *v24; // [esp+4h] [ebp-100h]
  int *v25; // [esp+8h] [ebp-FCh]
  char v26[4]; // [esp+Ch] [ebp-F8h]
  int vt; // [esp+10h] [ebp-F4h]
  int *v28; // [esp+14h] [ebp-F0h]
  int v29; // [esp+18h] [ebp-ECh]
  int *v30; // [esp+1Ch] [ebp-E8h]
  int *v31; // [esp+20h] [ebp-E4h]
  int *v32; // [esp+24h] [ebp-E0h]
  int v33; // [esp+28h] [ebp-DCh]
  VARIANTARG *pvargSrc; // [esp+2Ch] [ebp-D8h]
  int v35; // [esp+30h] [ebp-D4h]
  int *v36; // [esp+34h] [ebp-D0h]
  int *v37; // [esp+38h] [ebp-CCh]
  int *v38; // [esp+3Ch] [ebp-C8h]
  int v39; // [esp+40h] [ebp-C4h]
  Concurrency::cancellation_token_source *v40; // [esp+44h] [ebp-C0h]
  int *v41; // [esp+48h] [ebp-BCh]
  int *v42; // [esp+4Ch] [ebp-B8h]
  int v43; // [esp+50h] [ebp-B4h]
  int *v44; // [esp+54h] [ebp-B0h]
  char v45; // [esp+5Bh] [ebp-A9h]
  int *v46; // [esp+5Ch] [ebp-A8h]
  char v47; // [esp+63h] [ebp-A1h]
  int *v48; // [esp+64h] [ebp-A0h]
  char v49; // [esp+6Bh] [ebp-99h]
  int *v50; // [esp+6Ch] [ebp-98h]
  int v51; // [esp+70h] [ebp-94h] BYREF
  bool v52; // [esp+76h] [ebp-8Eh]
  char v53; // [esp+77h] [ebp-8Dh]
  int *v54; // [esp+78h] [ebp-8Ch]
  void *v55; // [esp+7Ch] [ebp-88h]
  char v56; // [esp+83h] [ebp-81h]
  int *v57; // [esp+84h] [ebp-80h]
  int v58; // [esp+88h] [ebp-7Ch] BYREF
  int v59; // [esp+8Ch] [ebp-78h] BYREF
  char v60; // [esp+93h] [ebp-71h]
  int *v61; // [esp+94h] [ebp-70h]
  char v62; // [esp+9Bh] [ebp-69h]
  int *v63; // [esp+9Ch] [ebp-68h]
  char v64; // [esp+A3h] [ebp-61h]
  int *v65; // [esp+A4h] [ebp-60h]
  int v66; // [esp+A8h] [ebp-5Ch] BYREF
  char *Source; // [esp+ACh] [ebp-58h]
  OLECHAR *pv; // [esp+B0h] [ebp-54h] BYREF
  LONG rgIndices; // [esp+B4h] [ebp-50h] BYREF
  LONG plUbound; // [esp+B8h] [ebp-4Ch] BYREF
  LONG plLbound; // [esp+BCh] [ebp-48h] BYREF
  VARIANTARG v72; // [esp+C0h] [ebp-44h] BYREF
  _BYTE v73[4]; // [esp+D4h] [ebp-30h] BYREF
  _BYTE v74[4]; // [esp+D8h] [ebp-2Ch] BYREF
  unsigned __int8 *Instance; // [esp+DCh] [ebp-28h]
  int v76; // [esp+E0h] [ebp-24h] BYREF
  _BYTE v77[4]; // [esp+E4h] [ebp-20h] BYREF
  int v78; // [esp+E8h] [ebp-1Ch] BYREF
  int v79; // [esp+ECh] [ebp-18h] BYREF
  int v80; // [esp+F0h] [ebp-14h] BYREF
  int v81; // [esp+F4h] [ebp-10h]
  int v82; // [esp+100h] [ebp-4h]

  sub_10001D70(v73);
  v82 = 0;
  v5 = (LPVOID *)unknown_libname_3(v73);
  Instance = (unsigned __int8 *)CoCreateInstance(&rclsid, nullptr, 1u, &riid, v5);
  if ( (int)Instance >= 0 )
  {
    sub_10001D70(v77);
    LOBYTE(v82) = 1;
    sub_10001630((Concurrency::cancellation_token_source *)&v76, "ROOT\\", a1);
    LOBYTE(v82) = 2;
    v43 = unknown_libname_4(v73);
    v23 = (unsigned __int8 *)unknown_libname_3(v77);
    v8 = sub_100016C0(&v76);
    Instance = (unsigned __int8 *)(*(int (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, unsigned __int8 *))(*(_DWORD *)v43 + 12))(
                                    v43,
                                    v43,
                                    v8,
                                    0,
                                    0,
                                    0,
                                    128,
                                    0,
                                    0,
                                    v23);
    if ( (int)Instance >= 0 )
    {
      v9 = (IUnknown *)unknown_libname_4(v77);
      Instance = (unsigned __int8 *)CoSetProxyBlanket(v9, 0xAu, 0, nullptr, 3u, 3u, nullptr, 0);
      if ( (int)Instance >= 0 )
      {
        sub_10001D70(v74);
        LOBYTE(v82) = 3;
        unknown_libname_5(&v78);
        LOBYTE(v82) = 4;
        v40 = sub_10001630((Concurrency::cancellation_token_source *)&v59, "SELECT * FROM ", a2);
        sub_10001400((Concurrency::cancellation_token_source *)&v78, v40);
        sub_100013E0(&v59);
        v39 = unknown_libname_4(v77);
        v38 = sub_100012A0(&v58, "WQL");
        v37 = v38;
        LOBYTE(v82) = 5;
        v23 = (unsigned __int8 *)unknown_libname_3(v74);
        v21 = sub_100016C0(&v78);
        v11 = sub_100016C0(v38);
        Instance = (unsigned __int8 *)(*(int (__stdcall **)(int, int, int, int, _DWORD, unsigned __int8 *))(*(_DWORD *)v39 + 80))(
                                        v39,
                                        v11,
                                        v21,
                                        48,
                                        0,
                                        v23);
        LOBYTE(v82) = 4;
        sub_100013E0(&v58);
        if ( (int)Instance >= 0 )
        {
          sub_10001DB0((type_info *)&v80, nullptr);
          LOBYTE(v82) = 6;
          v79 = 0;
          v81 = 0;
          dword_1001D5F0 = 0;
          while ( v81 == 0 )
          {
            v79 = 0;
            sub_10001DD0(&v80, 0);
            v35 = unknown_libname_4(v74);
            v14 = unknown_libname_3(&v80);
            v81 = (*(int (__stdcall **)(int, int, int, void *, int *))(*(_DWORD *)v35 + 16))(v35, -1, 1, v14, &v79);
            if ( v81 < 0 || sub_10001E40(&v80, 0) )
              break;
            v55 = operator new(0x10u);
            if ( v55 != nullptr )
            {
              unknown_libname_2((VARIANTARG *)v55);
              pvargSrc = v15;
            }
            else
            {
              pvargSrc = nullptr;
            }
            sub_10001C40(&v72, pvargSrc);
            LOBYTE(v82) = 7;
            v33 = unknown_libname_4(&v80);
            v16 = sub_100016C0(a4);
            Instance = (unsigned __int8 *)(*(int (__stdcall **)(int, int, _DWORD, VARIANTARG *, _DWORD, _DWORD))(*(_DWORD *)v33 + 16))(
                                            v33,
                                            v16,
                                            0,
                                            &v72,
                                            0,
                                            0);
            if ( (int)Instance < 0 )
            {
              v23 = Instance;
              v22 = (unsigned __int8 *)v17;
              v54 = (int *)&v22;
              v32 = sub_100012A0((int *)&v22, "Unable to find requested value.");
              sub_1000FB70((int)v22, (int)v23);
              v53 = 0;
              LOBYTE(v82) = 6;
              sub_10001CF0(&v72);
              LOBYTE(v82) = 4;
              sub_10001D10(&v80);
              LOBYTE(v82) = 3;
              sub_100013E0(&v78);
              LOBYTE(v82) = 2;
              sub_10001D10(v74);
              LOBYTE(v82) = 1;
              sub_100013E0(&v76);
              LOBYTE(v82) = 0;
              sub_10001D10(v77);
              v82 = -1;
              sub_10001D10(v73);
              return v53;
            }
            if ( v72.vt == 8200 )
            {
              plLbound = 0;
              plUbound = 0;
              SafeArrayGetLBound(v72.parray, 1u, &plLbound);
              SafeArrayGetUBound(v72.parray, 1u, &plUbound);
              for ( rgIndices = plLbound; rgIndices <= plUbound; ++rgIndices )
              {
                SafeArrayGetElement(v72.parray, &rgIndices, &pv);
                v31 = sub_10001340(&v51, pv);
                v30 = v31;
                LOBYTE(v82) = 8;
                v23 = (unsigned __int8 *)sub_100016F0(a5);
                v18 = (unsigned __int8 *)sub_100016F0(v31);
                v52 = sub_10001000(v18, v23) == 0;
                LOBYTE(v82) = 7;
                sub_100013E0(&v51);
                if ( v52 )
                {
                  v29 = unknown_libname_4(&v80);
                  v19 = sub_100016C0(a3);
                  Instance = (unsigned __int8 *)(*(int (__stdcall **)(int, int, _DWORD, VARIANTARG *, _DWORD, _DWORD))(*(_DWORD *)v29 + 16))(
                                                  v29,
                                                  v19,
                                                  0,
                                                  &v72,
                                                  0,
                                                  0);
                  if ( (int)Instance >= 0 )
                  {
                    unknown_libname_5(&v66);
                    LOBYTE(v82) = 9;
                    vt = v72.vt;
                    if ( v72.vt > 0x11u )
                    {
                      switch ( vt )
                      {
                        case 18:
                          sub_10001F10(&Buffer, "%u", v72.iVal);
                          break;
                        case 19:
                          sub_10001F10(&Buffer, "%u", v72.lVal);
                          break;
                        case 8200:
                          sub_10001CC0((VARIANTARG *)&word_1001D5F8, &v72);
                          break;
                        default:
LABEL_43:
                          sub_10001F10(&Buffer, "UNHANDLED VARIANT TYPE (%i)", v72.vt);
                          break;
                      }
                    }
                    else if ( vt == 17 )
                    {
                      sub_10001F10(&Buffer, "%u", v72.cVal);
                    }
                    else
                    {
                      switch ( vt )
                      {
                        case 0:
                        case 1:
                          sub_10001F10(&Buffer, (char *)&Format);
                          break;
                        case 2:
                        case 3:
                          sub_10001F10(&Buffer, "%i", v72.lVal);
                          break;
                        case 8:
                          sub_10001440(&v66, v72.bstrVal);
                          Source = (char *)sub_100016F0(&v66);
                          sub_10001ED0(&Buffer, Source);
                          break;
                        case 11:
                          if ( v72.iVal != 0 )
                            *(_DWORD *)v26 = "Yes";
                          else
                            *(_DWORD *)v26 = "No";
                          sub_10001F10(&Buffer, "%s", *(const char **)v26);
                          break;
                        default:
                          goto LABEL_43;
                      }
                    }
                    LOBYTE(v82) = 7;
                    sub_100013E0(&v66);
                    LOBYTE(v82) = 6;
                    sub_10001CF0(&v72);
                    LOBYTE(v82) = 4;
                    sub_10001D10(&v80);
                    LOBYTE(v82) = 3;
                    sub_100013E0(&v78);
                    LOBYTE(v82) = 2;
                    sub_10001D10(v74);
                    LOBYTE(v82) = 1;
                    sub_100013E0(&v76);
                    LOBYTE(v82) = 0;
                    sub_10001D10(v77);
                    v82 = -1;
                    sub_10001D10(v73);
                    return 1;
                  }
                  else
                  {
                    v23 = Instance;
                    v22 = (unsigned __int8 *)v20;
                    v50 = (int *)&v22;
                    v28 = sub_100012A0((int *)&v22, "Unable to find requested value.");
                    sub_1000FB70((int)v22, (int)v23);
                    v49 = 0;
                    LOBYTE(v82) = 6;
                    sub_10001CF0(&v72);
                    LOBYTE(v82) = 4;
                    sub_10001D10(&v80);
                    LOBYTE(v82) = 3;
                    sub_100013E0(&v78);
                    LOBYTE(v82) = 2;
                    sub_10001D10(v74);
                    LOBYTE(v82) = 1;
                    sub_100013E0(&v76);
                    LOBYTE(v82) = 0;
                    sub_10001D10(v77);
                    v82 = -1;
                    sub_10001D10(v73);
                    return v49;
                  }
                }
              }
            }
            else if ( v72.vt != 1 )
            {
              v23 = nullptr;
              v22 = (unsigned __int8 *)v72.vt;
              v48 = (int *)&v22;
              v25 = sub_100012A0((int *)&v22, "The requested value is not a string array.");
              sub_1000FB70((int)v22, (int)v23);
              v47 = 0;
              LOBYTE(v82) = 6;
              sub_10001CF0(&v72);
              LOBYTE(v82) = 4;
              sub_10001D10(&v80);
              LOBYTE(v82) = 3;
              sub_100013E0(&v78);
              LOBYTE(v82) = 2;
              sub_10001D10(v74);
              LOBYTE(v82) = 1;
              sub_100013E0(&v76);
              LOBYTE(v82) = 0;
              sub_10001D10(v77);
              v82 = -1;
              sub_10001D10(v73);
              return v47;
            }
            LOBYTE(v82) = 6;
            sub_10001CF0(&v72);
          }
          v23 = nullptr;
          v22 = (unsigned __int8 *)v13;
          v46 = (int *)&v22;
          v24 = sub_100012A0((int *)&v22, "Requested value not found.");
          sub_1000FB70((int)v22, (int)v23);
          v45 = 0;
          LOBYTE(v82) = 4;
          sub_10001D10(&v80);
          LOBYTE(v82) = 3;
          sub_100013E0(&v78);
          LOBYTE(v82) = 2;
          sub_10001D10(v74);
          LOBYTE(v82) = 1;
          sub_100013E0(&v76);
          LOBYTE(v82) = 0;
          sub_10001D10(v77);
          v82 = -1;
          sub_10001D10(v73);
          return v45;
        }
        else
        {
          v23 = Instance;
          v22 = (unsigned __int8 *)v12;
          v57 = (int *)&v22;
          v36 = sub_100012A0((int *)&v22, "Query failed.");
          sub_1000FB70((int)v22, (int)v23);
          v56 = 0;
          LOBYTE(v82) = 3;
          sub_100013E0(&v78);
          LOBYTE(v82) = 2;
          sub_10001D10(v74);
          LOBYTE(v82) = 1;
          sub_100013E0(&v76);
          LOBYTE(v82) = 0;
          sub_10001D10(v77);
          v82 = -1;
          sub_10001D10(v73);
          return v56;
        }
      }
      else
      {
        v23 = Instance;
        v22 = (unsigned __int8 *)v10;
        v61 = (int *)&v22;
        v41 = sub_100012A0((int *)&v22, "Could not set proxy blanket.");
        sub_1000FB70((int)v22, (int)v23);
        v60 = 0;
        LOBYTE(v82) = 1;
        sub_100013E0(&v76);
        LOBYTE(v82) = 0;
        sub_10001D10(v77);
        v82 = -1;
        sub_10001D10(v73);
        return v60;
      }
    }
    else
    {
      v23 = Instance;
      v22 = Instance;
      v63 = (int *)&v22;
      v42 = sub_100012A0((int *)&v22, "Could not connect.");
      sub_1000FB70((int)v22, (int)v23);
      v62 = 0;
      LOBYTE(v82) = 1;
      sub_100013E0(&v76);
      LOBYTE(v82) = 0;
      sub_10001D10(v77);
      v82 = -1;
      sub_10001D10(v73);
      return v62;
    }
  }
  else
  {
    v23 = Instance;
    v22 = (unsigned __int8 *)v6;
    v65 = (int *)&v22;
    v44 = sub_100012A0((int *)&v22, "Failed to create IWbemLocator object.");
    sub_1000FB70((int)v22, (int)v23);
    v64 = 0;
    v82 = -1;
    sub_10001D10(v73);
    return v64;
  }
}

// Address: 0x10011050
char __cdecl sub_10011050(int a1, int a2, _DWORD *a3, int a4)
{
  LPVOID *v4; // eax
  int v5; // ecx
  int v7; // eax
  IUnknown *v8; // eax
  int v9; // ecx
  int v10; // eax
  void *v11; // eax
  VARIANTARG *v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // [esp-10h] [ebp-ECh]
  int v16; // [esp-8h] [ebp-E4h] BYREF
  void *v17; // [esp-4h] [ebp-E0h]
  int *v18; // [esp+4h] [ebp-D8h]
  int v19; // [esp+8h] [ebp-D4h]
  VARIANTARG *pvargSrc; // [esp+Ch] [ebp-D0h]
  int v21; // [esp+10h] [ebp-CCh]
  int *v22; // [esp+14h] [ebp-C8h]
  int *v23; // [esp+18h] [ebp-C4h]
  int *v24; // [esp+1Ch] [ebp-C0h]
  int v25; // [esp+20h] [ebp-BCh]
  Concurrency::cancellation_token_source *v26; // [esp+24h] [ebp-B8h]
  Concurrency::cancellation_token_source *v27; // [esp+28h] [ebp-B4h]
  Concurrency::cancellation_token_source *v28; // [esp+2Ch] [ebp-B0h]
  Concurrency::cancellation_token_source *v29; // [esp+30h] [ebp-ACh]
  Concurrency::cancellation_token_source *v30; // [esp+34h] [ebp-A8h]
  Concurrency::cancellation_token_source *v31; // [esp+38h] [ebp-A4h]
  int *v32; // [esp+3Ch] [ebp-A0h]
  int *v33; // [esp+40h] [ebp-9Ch]
  int *v34; // [esp+44h] [ebp-98h]
  int v35; // [esp+48h] [ebp-94h]
  int *v36; // [esp+4Ch] [ebp-90h]
  char v37; // [esp+53h] [ebp-89h]
  int *v38; // [esp+54h] [ebp-88h]
  void *v39; // [esp+58h] [ebp-84h]
  char v40; // [esp+5Fh] [ebp-7Dh]
  int *v41; // [esp+60h] [ebp-7Ch]
  int v42; // [esp+64h] [ebp-78h] BYREF
  int v43; // [esp+68h] [ebp-74h] BYREF
  char v44[4]; // [esp+6Ch] [ebp-70h] BYREF
  char v45[4]; // [esp+70h] [ebp-6Ch] BYREF
  int v46; // [esp+74h] [ebp-68h] BYREF
  int v47; // [esp+78h] [ebp-64h] BYREF
  int v48; // [esp+7Ch] [ebp-60h] BYREF
  bool v49; // [esp+82h] [ebp-5Ah]
  char v50; // [esp+83h] [ebp-59h]
  int *v51; // [esp+84h] [ebp-58h]
  char v52; // [esp+8Bh] [ebp-51h]
  int *v53; // [esp+8Ch] [ebp-50h]
  char v54; // [esp+93h] [ebp-49h]
  int *v55; // [esp+94h] [ebp-48h]
  VARIANTARG v56; // [esp+98h] [ebp-44h] BYREF
  char v57[4]; // [esp+ACh] [ebp-30h] BYREF
  char v58[4]; // [esp+B0h] [ebp-2Ch] BYREF
  void *Instance; // [esp+B4h] [ebp-28h]
  int v60; // [esp+B8h] [ebp-24h] BYREF
  char v61[4]; // [esp+BCh] [ebp-20h] BYREF
  int v62; // [esp+C0h] [ebp-1Ch] BYREF
  int v63; // [esp+C4h] [ebp-18h] BYREF
  int v64; // [esp+C8h] [ebp-14h] BYREF
  int v65; // [esp+CCh] [ebp-10h]
  int v66; // [esp+D8h] [ebp-4h]

  sub_10001D70(v57);
  v66 = 0;
  v4 = (LPVOID *)unknown_libname_3(v57);
  Instance = (void *)CoCreateInstance(&rclsid, nullptr, 1u, &riid, v4);
  if ( (int)Instance >= 0 )
  {
    sub_10001D70(v61);
    LOBYTE(v66) = 1;
    sub_10001630((Concurrency::cancellation_token_source *)&v60, "ROOT\\", a1);
    LOBYTE(v66) = 2;
    v35 = unknown_libname_4(v57);
    v17 = unknown_libname_3(v61);
    v7 = sub_100016C0(&v60);
    Instance = (void *)(*(int (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v35 + 12))(
                         v35,
                         v35,
                         v7,
                         0,
                         0,
                         0,
                         128,
                         0,
                         0,
                         v17);
    if ( (int)Instance >= 0 )
    {
      v8 = (IUnknown *)unknown_libname_4(v61);
      Instance = (void *)CoSetProxyBlanket(v8, 0xAu, 0, nullptr, 3u, 3u, nullptr, 0);
      if ( (int)Instance >= 0 )
      {
        sub_10001D70(v58);
        LOBYTE(v66) = 3;
        unknown_libname_5(&v62);
        LOBYTE(v66) = 4;
        v32 = sub_100012A0(&v48, &byte_10017E06);
        v49 = sub_10001720((int)v32);
        sub_100013E0(&v48);
        if ( v49 )
        {
          sub_100012A0(&v46, " WHERE ");
          LOBYTE(v66) = 5;
          v31 = sub_10001630((Concurrency::cancellation_token_source *)&v47, "SELECT * FROM ", a2);
          v30 = v31;
          LOBYTE(v66) = 6;
          v29 = sub_100015A0(v31, (Concurrency::cancellation_token_source *)v45, (int)&v46);
          v28 = v29;
          LOBYTE(v66) = 7;
          v27 = sub_100015A0(v29, (Concurrency::cancellation_token_source *)v44, a4);
          sub_10001400((Concurrency::cancellation_token_source *)&v62, v27);
          sub_100013E0(v44);
          LOBYTE(v66) = 6;
          sub_100013E0(v45);
          LOBYTE(v66) = 5;
          sub_100013E0(&v47);
          LOBYTE(v66) = 4;
          sub_100013E0(&v46);
        }
        else
        {
          v26 = sub_10001630((Concurrency::cancellation_token_source *)&v43, "SELECT * FROM ", a2);
          sub_10001400((Concurrency::cancellation_token_source *)&v62, v26);
          sub_100013E0(&v43);
        }
        v25 = unknown_libname_4(v61);
        v24 = sub_100012A0(&v42, "WQL");
        v23 = v24;
        LOBYTE(v66) = 8;
        v17 = unknown_libname_3(v58);
        v15 = sub_100016C0(&v62);
        v10 = sub_100016C0(v24);
        Instance = (void *)(*(int (__thiscall **)(int, int, int, int, int, _DWORD, void *))(*(_DWORD *)v25 + 80))(
                             v25,
                             v25,
                             v10,
                             v15,
                             48,
                             0,
                             v17);
        LOBYTE(v66) = 4;
        sub_100013E0(&v42);
        if ( (int)Instance >= 0 )
        {
          sub_10001DB0((type_info *)&v64, nullptr);
          LOBYTE(v66) = 9;
          v63 = 0;
          v65 = 0;
          dword_1001D5F0 = 0;
          while ( v65 == 0 )
          {
            v63 = 0;
            sub_10001DD0(&v64, 0);
            v21 = unknown_libname_4(v58);
            v11 = unknown_libname_3(&v64);
            v65 = (*(int (__thiscall **)(int, int, int, int, void *, int *))(*(_DWORD *)v21 + 16))(
                    v21,
                    v21,
                    -1,
                    1,
                    v11,
                    &v63);
            if ( v65 < 0 || sub_10001E40(&v64, 0) )
              break;
            v39 = operator new(0x10u);
            if ( v39 != nullptr )
            {
              unknown_libname_2((VARIANTARG *)v39);
              pvargSrc = v12;
            }
            else
            {
              pvargSrc = nullptr;
            }
            sub_10001C40(&v56, pvargSrc);
            LOBYTE(v66) = 10;
            v19 = unknown_libname_4(&v64);
            v13 = sub_100016C0(a3);
            Instance = (void *)(*(int (__stdcall **)(int, int, _DWORD, VARIANTARG *, _DWORD, _DWORD))(*(_DWORD *)v19 + 16))(
                                 v19,
                                 v13,
                                 0,
                                 &v56,
                                 0,
                                 0);
            if ( (int)Instance < 0 )
            {
              v17 = Instance;
              v16 = v14;
              v38 = &v16;
              v18 = sub_100012A0(&v16, "Unable to find requested value.");
              sub_1000FB70(v16, (int)v17);
              v37 = 0;
              LOBYTE(v66) = 9;
              sub_10001CF0(&v56);
              LOBYTE(v66) = 4;
              sub_10001D10(&v64);
              LOBYTE(v66) = 3;
              sub_100013E0(&v62);
              LOBYTE(v66) = 2;
              sub_10001D10(v58);
              LOBYTE(v66) = 1;
              sub_100013E0(&v60);
              LOBYTE(v66) = 0;
              sub_10001D10(v61);
              v66 = -1;
              sub_10001D10(v57);
              return v37;
            }
            sub_10001CC0((VARIANTARG *)&word_1001D608[8 * dword_1001D5F0], &v56);
            ++dword_1001D5F0;
            LOBYTE(v66) = 9;
            sub_10001CF0(&v56);
          }
          LOBYTE(v66) = 4;
          sub_10001D10(&v64);
          LOBYTE(v66) = 3;
          sub_100013E0(&v62);
          LOBYTE(v66) = 2;
          sub_10001D10(v58);
          LOBYTE(v66) = 1;
          sub_100013E0(&v60);
          LOBYTE(v66) = 0;
          sub_10001D10(v61);
          v66 = -1;
          sub_10001D10(v57);
          return 1;
        }
        else
        {
          v17 = Instance;
          v16 = (int)Instance;
          v41 = &v16;
          v22 = sub_100012A0(&v16, "Query failed.");
          sub_1000FB70(v16, (int)v17);
          v40 = 0;
          LOBYTE(v66) = 3;
          sub_100013E0(&v62);
          LOBYTE(v66) = 2;
          sub_10001D10(v58);
          LOBYTE(v66) = 1;
          sub_100013E0(&v60);
          LOBYTE(v66) = 0;
          sub_10001D10(v61);
          v66 = -1;
          sub_10001D10(v57);
          return v40;
        }
      }
      else
      {
        v17 = Instance;
        v16 = v9;
        v51 = &v16;
        v33 = sub_100012A0(&v16, "Could not set proxy blanket.");
        sub_1000FB70(v16, (int)v17);
        v50 = 0;
        LOBYTE(v66) = 1;
        sub_100013E0(&v60);
        LOBYTE(v66) = 0;
        sub_10001D10(v61);
        v66 = -1;
        sub_10001D10(v57);
        return v50;
      }
    }
    else
    {
      v17 = Instance;
      v16 = (int)Instance;
      v53 = &v16;
      v34 = sub_100012A0(&v16, "Could not connect.");
      sub_1000FB70(v16, (int)v17);
      v52 = 0;
      LOBYTE(v66) = 1;
      sub_100013E0(&v60);
      LOBYTE(v66) = 0;
      sub_10001D10(v61);
      v66 = -1;
      sub_10001D10(v57);
      return v52;
    }
  }
  else
  {
    v17 = Instance;
    v16 = v5;
    v55 = &v16;
    v36 = sub_100012A0(&v16, "Failed to create IWbemLocator object.");
    sub_1000FB70(v16, (int)v17);
    v54 = 0;
    v66 = -1;
    sub_10001D10(v57);
    return v54;
  }
}

// Address: 0x100116A0
char __cdecl sub_100116A0(int a1, int a2, _DWORD *a3, int a4)
{
  LPVOID *v4; // eax
  int v5; // ecx
  int v7; // eax
  IUnknown *v8; // eax
  int v9; // ecx
  int v10; // eax
  void *v11; // eax
  VARIANTARG *v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // [esp-10h] [ebp-F8h]
  int v16; // [esp-8h] [ebp-F0h] BYREF
  void *v17; // [esp-4h] [ebp-ECh]
  char v18[4]; // [esp+4h] [ebp-E4h]
  int vt; // [esp+8h] [ebp-E0h]
  int *v20; // [esp+Ch] [ebp-DCh]
  int v21; // [esp+10h] [ebp-D8h]
  VARIANTARG *pvargSrc; // [esp+14h] [ebp-D4h]
  int v23; // [esp+18h] [ebp-D0h]
  int *v24; // [esp+1Ch] [ebp-CCh]
  int *v25; // [esp+20h] [ebp-C8h]
  int *v26; // [esp+24h] [ebp-C4h]
  int v27; // [esp+28h] [ebp-C0h]
  Concurrency::cancellation_token_source *v28; // [esp+2Ch] [ebp-BCh]
  Concurrency::cancellation_token_source *v29; // [esp+30h] [ebp-B8h]
  Concurrency::cancellation_token_source *v30; // [esp+34h] [ebp-B4h]
  Concurrency::cancellation_token_source *v31; // [esp+38h] [ebp-B0h]
  Concurrency::cancellation_token_source *v32; // [esp+3Ch] [ebp-ACh]
  Concurrency::cancellation_token_source *v33; // [esp+40h] [ebp-A8h]
  int *v34; // [esp+44h] [ebp-A4h]
  int *v35; // [esp+48h] [ebp-A0h]
  int *v36; // [esp+4Ch] [ebp-9Ch]
  int v37; // [esp+50h] [ebp-98h]
  int *v38; // [esp+54h] [ebp-94h]
  char v39; // [esp+5Bh] [ebp-8Dh]
  int *v40; // [esp+5Ch] [ebp-8Ch]
  void *v41; // [esp+60h] [ebp-88h]
  char v42; // [esp+67h] [ebp-81h]
  int *v43; // [esp+68h] [ebp-80h]
  int v44; // [esp+6Ch] [ebp-7Ch] BYREF
  int v45; // [esp+70h] [ebp-78h] BYREF
  char v46[4]; // [esp+74h] [ebp-74h] BYREF
  char v47[4]; // [esp+78h] [ebp-70h] BYREF
  int v48; // [esp+7Ch] [ebp-6Ch] BYREF
  int v49; // [esp+80h] [ebp-68h] BYREF
  int v50; // [esp+84h] [ebp-64h] BYREF
  bool v51; // [esp+8Ah] [ebp-5Eh]
  char v52; // [esp+8Bh] [ebp-5Dh]
  int *v53; // [esp+8Ch] [ebp-5Ch]
  char v54; // [esp+93h] [ebp-55h]
  int *v55; // [esp+94h] [ebp-54h]
  char v56; // [esp+9Bh] [ebp-4Dh]
  int *v57; // [esp+9Ch] [ebp-4Ch]
  int v58; // [esp+A0h] [ebp-48h] BYREF
  VARIANTARG v59; // [esp+A4h] [ebp-44h] BYREF
  char *Source; // [esp+B4h] [ebp-34h]
  char v61[4]; // [esp+B8h] [ebp-30h] BYREF
  char v62[4]; // [esp+BCh] [ebp-2Ch] BYREF
  void *Instance; // [esp+C0h] [ebp-28h]
  int v64; // [esp+C4h] [ebp-24h] BYREF
  char v65[4]; // [esp+C8h] [ebp-20h] BYREF
  int v66; // [esp+CCh] [ebp-1Ch] BYREF
  int v67; // [esp+D0h] [ebp-18h] BYREF
  int v68; // [esp+D4h] [ebp-14h] BYREF
  int v69; // [esp+D8h] [ebp-10h]
  int v70; // [esp+E4h] [ebp-4h]

  sub_10001D70(v61);
  v70 = 0;
  v4 = (LPVOID *)unknown_libname_3(v61);
  Instance = (void *)CoCreateInstance(&rclsid, nullptr, 1u, &riid, v4);
  if ( (int)Instance >= 0 )
  {
    sub_10001D70(v65);
    LOBYTE(v70) = 1;
    sub_10001630((Concurrency::cancellation_token_source *)&v64, "ROOT\\", a1);
    LOBYTE(v70) = 2;
    v37 = unknown_libname_4(v61);
    v17 = unknown_libname_3(v65);
    v7 = sub_100016C0(&v64);
    Instance = (void *)(*(int (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, void *))(*(_DWORD *)v37 + 12))(
                         v37,
                         v37,
                         v7,
                         0,
                         0,
                         0,
                         128,
                         0,
                         0,
                         v17);
    if ( (int)Instance >= 0 )
    {
      v8 = (IUnknown *)unknown_libname_4(v65);
      Instance = (void *)CoSetProxyBlanket(v8, 0xAu, 0, nullptr, 3u, 3u, nullptr, 0);
      if ( (int)Instance >= 0 )
      {
        sub_10001D70(v62);
        LOBYTE(v70) = 3;
        unknown_libname_5(&v66);
        LOBYTE(v70) = 4;
        v34 = sub_100012A0(&v50, &byte_10017DFF);
        v51 = sub_10001720((int)v34);
        sub_100013E0(&v50);
        if ( v51 )
        {
          sub_100012A0(&v48, " WHERE ");
          LOBYTE(v70) = 5;
          v33 = sub_10001630((Concurrency::cancellation_token_source *)&v49, "SELECT * FROM ", a2);
          v32 = v33;
          LOBYTE(v70) = 6;
          v31 = sub_100015A0(v33, (Concurrency::cancellation_token_source *)v47, (int)&v48);
          v30 = v31;
          LOBYTE(v70) = 7;
          v29 = sub_100015A0(v31, (Concurrency::cancellation_token_source *)v46, a4);
          sub_10001400((Concurrency::cancellation_token_source *)&v66, v29);
          sub_100013E0(v46);
          LOBYTE(v70) = 6;
          sub_100013E0(v47);
          LOBYTE(v70) = 5;
          sub_100013E0(&v49);
          LOBYTE(v70) = 4;
          sub_100013E0(&v48);
        }
        else
        {
          v28 = sub_10001630((Concurrency::cancellation_token_source *)&v45, "SELECT * FROM ", a2);
          sub_10001400((Concurrency::cancellation_token_source *)&v66, v28);
          sub_100013E0(&v45);
        }
        v27 = unknown_libname_4(v65);
        v26 = sub_100012A0(&v44, "WQL");
        v25 = v26;
        LOBYTE(v70) = 8;
        v17 = unknown_libname_3(v62);
        v15 = sub_100016C0(&v66);
        v10 = sub_100016C0(v26);
        Instance = (void *)(*(int (__thiscall **)(int, int, int, int, int, _DWORD, void *))(*(_DWORD *)v27 + 80))(
                             v27,
                             v27,
                             v10,
                             v15,
                             48,
                             0,
                             v17);
        LOBYTE(v70) = 4;
        sub_100013E0(&v44);
        if ( (int)Instance >= 0 )
        {
          sub_10001DB0((type_info *)&v68, nullptr);
          LOBYTE(v70) = 9;
          v67 = 0;
          v69 = 0;
          sub_10001F10(&Buffer, (char *)&byte_10017E02);
          while ( v69 == 0 )
          {
            v67 = 0;
            sub_10001DD0(&v68, 0);
            v23 = unknown_libname_4(v62);
            v11 = unknown_libname_3(&v68);
            v69 = (*(int (__thiscall **)(int, int, int, int, void *, int *))(*(_DWORD *)v23 + 16))(
                    v23,
                    v23,
                    -1,
                    1,
                    v11,
                    &v67);
            if ( v69 < 0 || sub_10001E40(&v68, 0) )
              break;
            v41 = operator new(0x10u);
            if ( v41 != nullptr )
            {
              unknown_libname_2((VARIANTARG *)v41);
              pvargSrc = v12;
            }
            else
            {
              pvargSrc = nullptr;
            }
            sub_10001C40(&v59, pvargSrc);
            LOBYTE(v70) = 10;
            v21 = unknown_libname_4(&v68);
            v13 = sub_100016C0(a3);
            Instance = (void *)(*(int (__stdcall **)(int, int, _DWORD, VARIANTARG *, _DWORD, _DWORD))(*(_DWORD *)v21 + 16))(
                                 v21,
                                 v13,
                                 0,
                                 &v59,
                                 0,
                                 0);
            if ( (int)Instance < 0 )
            {
              v17 = Instance;
              v16 = v14;
              v40 = &v16;
              v20 = sub_100012A0(&v16, "Unable to find requested value.");
              sub_1000FB70(v16, (int)v17);
              v39 = 0;
              LOBYTE(v70) = 9;
              sub_10001CF0(&v59);
              LOBYTE(v70) = 4;
              sub_10001D10(&v68);
              LOBYTE(v70) = 3;
              sub_100013E0(&v66);
              LOBYTE(v70) = 2;
              sub_10001D10(v62);
              LOBYTE(v70) = 1;
              sub_100013E0(&v64);
              LOBYTE(v70) = 0;
              sub_10001D10(v65);
              v70 = -1;
              sub_10001D10(v61);
              return v39;
            }
            unknown_libname_5(&v58);
            LOBYTE(v70) = 11;
            vt = v59.vt;
            if ( v59.vt > 0x11u )
            {
              switch ( vt )
              {
                case 18:
                  sub_10001F10(&Buffer, "%u", v59.iVal);
                  break;
                case 19:
                  sub_10001F10(&Buffer, "%u", v59.lVal);
                  break;
                case 8200:
                  sub_10001CC0((VARIANTARG *)&word_1001D5F8, &v59);
                  break;
                default:
LABEL_40:
                  sub_10001F10(&Buffer, "UNHANDLED VARIANT TYPE (%i)", v59.vt);
                  break;
              }
            }
            else if ( vt == 17 )
            {
              sub_10001F10(&Buffer, "%u", v59.cVal);
            }
            else
            {
              switch ( vt )
              {
                case 0:
                case 1:
                  sub_10001F10(&Buffer, (char *)&byte_10017E03);
                  break;
                case 2:
                case 3:
                  sub_10001F10(&Buffer, "%i", v59.lVal);
                  break;
                case 8:
                  sub_10001440(&v58, v59.bstrVal);
                  Source = (char *)sub_100016F0(&v58);
                  sub_10001ED0(&Buffer, Source);
                  break;
                case 11:
                  if ( v59.iVal != 0 )
                    *(_DWORD *)v18 = "Yes";
                  else
                    *(_DWORD *)v18 = "No";
                  sub_10001F10(&Buffer, "%s", *(const char **)v18);
                  break;
                default:
                  goto LABEL_40;
              }
            }
            LOBYTE(v70) = 10;
            sub_100013E0(&v58);
            LOBYTE(v70) = 9;
            sub_10001CF0(&v59);
          }
          LOBYTE(v70) = 4;
          sub_10001D10(&v68);
          LOBYTE(v70) = 3;
          sub_100013E0(&v66);
          LOBYTE(v70) = 2;
          sub_10001D10(v62);
          LOBYTE(v70) = 1;
          sub_100013E0(&v64);
          LOBYTE(v70) = 0;
          sub_10001D10(v65);
          v70 = -1;
          sub_10001D10(v61);
          return 1;
        }
        else
        {
          v17 = Instance;
          v16 = (int)Instance;
          v43 = &v16;
          v24 = sub_100012A0(&v16, "Query failed.");
          sub_1000FB70(v16, (int)v17);
          v42 = 0;
          LOBYTE(v70) = 3;
          sub_100013E0(&v66);
          LOBYTE(v70) = 2;
          sub_10001D10(v62);
          LOBYTE(v70) = 1;
          sub_100013E0(&v64);
          LOBYTE(v70) = 0;
          sub_10001D10(v65);
          v70 = -1;
          sub_10001D10(v61);
          return v42;
        }
      }
      else
      {
        v17 = Instance;
        v16 = v9;
        v53 = &v16;
        v35 = sub_100012A0(&v16, "Could not set proxy blanket.");
        sub_1000FB70(v16, (int)v17);
        v52 = 0;
        LOBYTE(v70) = 1;
        sub_100013E0(&v64);
        LOBYTE(v70) = 0;
        sub_10001D10(v65);
        v70 = -1;
        sub_10001D10(v61);
        return v52;
      }
    }
    else
    {
      v17 = Instance;
      v16 = (int)Instance;
      v55 = &v16;
      v36 = sub_100012A0(&v16, "Could not connect.");
      sub_1000FB70(v16, (int)v17);
      v54 = 0;
      LOBYTE(v70) = 1;
      sub_100013E0(&v64);
      LOBYTE(v70) = 0;
      sub_10001D10(v65);
      v70 = -1;
      sub_10001D10(v61);
      return v54;
    }
  }
  else
  {
    v17 = Instance;
    v16 = v5;
    v57 = &v16;
    v38 = sub_100012A0(&v16, "Failed to create IWbemLocator object.");
    sub_1000FB70(v16, (int)v17);
    v56 = 0;
    v70 = -1;
    sub_10001D10(v61);
    return v56;
  }
}

// Address: 0x10011E80
int __cdecl GetNetworkAdapterDHCPLeaseExpires(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  int v7; // [esp+0h] [ebp-420h] BYREF
  int v8; // [esp+4h] [ebp-41Ch] BYREF
  int v9; // [esp+8h] [ebp-418h] BYREF
  bool v10; // [esp+Fh] [ebp-411h]
  int v11; // [esp+10h] [ebp-410h] BYREF
  int v12; // [esp+14h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+18h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "Index = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v9, "DHCPLeaseExpires");
  sub_100012A0(&v8, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v7, "CIMV2");
  v10 = sub_100116A0((int)&v7, (int)&v8, &v9, (int)&v12) == 1;
  sub_100013E0(&v7);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  if ( v10 )
  {
    sub_10001F10(
      &Buffer,
      "%c%c.%c%c.%c%c%c%c %c%c:%c%c:%c%c",
      byte_1001D1F6,
      byte_1001D1F7,
      byte_1001D1F4,
      byte_1001D1F5,
      Buffer,
      byte_1001D1F1,
      byte_1001D1F2,
      byte_1001D1F3,
      byte_1001D1F8,
      byte_1001D1F9,
      byte_1001D1FA,
      byte_1001D1FB,
      byte_1001D1FC,
      byte_1001D1FD);
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v12);
}

// Address: 0x10012070
int __cdecl GetNetworkAdapterDHCPLeaseObtained(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  int v7; // [esp+0h] [ebp-420h] BYREF
  int v8; // [esp+4h] [ebp-41Ch] BYREF
  int v9; // [esp+8h] [ebp-418h] BYREF
  bool v10; // [esp+Fh] [ebp-411h]
  int v11; // [esp+10h] [ebp-410h] BYREF
  int v12; // [esp+14h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+18h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "Index = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v9, "DHCPLeaseObtained");
  sub_100012A0(&v8, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v7, "CIMV2");
  v10 = sub_100116A0((int)&v7, (int)&v8, &v9, (int)&v12) == 1;
  sub_100013E0(&v7);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  if ( v10 )
  {
    sub_10001F10(
      &Buffer,
      "%c%c.%c%c.%c%c%c%c %c%c:%c%c:%c%c",
      byte_1001D1F6,
      byte_1001D1F7,
      byte_1001D1F4,
      byte_1001D1F5,
      Buffer,
      byte_1001D1F1,
      byte_1001D1F2,
      byte_1001D1F3,
      byte_1001D1F8,
      byte_1001D1F9,
      byte_1001D1FA,
      byte_1001D1FB,
      byte_1001D1FC,
      byte_1001D1FD);
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v12);
}

// Address: 0x10012260
int __cdecl GetNetworkAdapterSecondaryWINSServer(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "Index = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "WINSSecondaryServer");
  sub_100012A0(&v9, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x100123A0
int __cdecl GetNetworkAdapterPrimaryWINSServer(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "Index = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "WINSPrimaryServer");
  sub_100012A0(&v9, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x100124E0
int __cdecl GetNetworkAdapterDNSServers(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char *v6; // eax
  const char *v7; // eax
  int v9; // [esp+0h] [ebp-838h] BYREF
  int v10; // [esp+4h] [ebp-834h] BYREF
  int v11; // [esp+8h] [ebp-830h] BYREF
  bool v12; // [esp+Fh] [ebp-829h]
  int v13; // [esp+10h] [ebp-828h] BYREF
  OLECHAR *pv; // [esp+14h] [ebp-824h] BYREF
  int v15[2]; // [esp+18h] [ebp-820h] BYREF
  LONG rgIndices; // [esp+20h] [ebp-818h] BYREF
  LONG plUbound; // [esp+24h] [ebp-814h] BYREF
  LONG plLbound; // [esp+28h] [ebp-810h] BYREF
  int v19; // [esp+2Ch] [ebp-80Ch] BYREF
  CHAR String1[2052]; // [esp+30h] [ebp-808h] BYREF

  memset(String1, 0, 2048);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v13, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v19, "Index = ", (int)v5);
  sub_100013E0(&v13);
  sub_100012A0(&v11, "DNSServerSearchOrder");
  sub_100012A0(&v10, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v9, "CIMV2");
  v12 = sub_100116A0((int)&v9, (int)&v10, &v11, (int)&v19) == 1;
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  if ( v12 )
  {
    if ( word_1001D5F8 == 8200 )
    {
      plLbound = 0;
      plUbound = 0;
      SafeArrayGetLBound(psa, 1u, &plLbound);
      SafeArrayGetUBound(psa, 1u, &plUbound);
      for ( rgIndices = plLbound; rgIndices <= plUbound; ++rgIndices )
      {
        SafeArrayGetElement(psa, &rgIndices, &pv);
        sub_10001340(v15, pv);
        if ( rgIndices == plLbound )
        {
          v6 = (char *)sub_100016F0(v15);
          sub_10001ED0(&Buffer, v6);
        }
        else
        {
          v7 = (const char *)sub_100016F0(v15);
          sub_10001F10(&Buffer, "%s %s", &Buffer, v7);
        }
        v15[1] = 0;
        sub_100013E0(v15);
      }
    }
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v19);
}

// Address: 0x10012780
int __cdecl GetNetworkAdapterDNSServersCB(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  int *v6; // eax
  const CHAR *v7; // eax
  int v9; // [esp+0h] [ebp-C38h] BYREF
  int v10; // [esp+4h] [ebp-C34h] BYREF
  int v11; // [esp+8h] [ebp-C30h] BYREF
  int v12; // [esp+Ch] [ebp-C2Ch] BYREF
  bool v13; // [esp+13h] [ebp-C25h]
  int v14; // [esp+14h] [ebp-C24h] BYREF
  OLECHAR *pv; // [esp+18h] [ebp-C20h] BYREF
  LONG rgIndices; // [esp+1Ch] [ebp-C1Ch] BYREF
  LONG plUbound; // [esp+20h] [ebp-C18h] BYREF
  LONG plLbound; // [esp+24h] [ebp-C14h] BYREF
  char v19[4]; // [esp+28h] [ebp-C10h]
  int v20; // [esp+2Ch] [ebp-C0Ch] BYREF
  char String[1024]; // [esp+30h] [ebp-C08h] BYREF
  CHAR String1[2048]; // [esp+430h] [ebp-808h] BYREF
  int v23; // [esp+C34h] [ebp-4h]

  memset(String, 0, sizeof(String));
  memset(String1, 0, sizeof(String1));
  v23 = 0;
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v14, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v20, "Index = ", (int)v5);
  sub_100013E0(&v14);
  sub_1000FA40(String);
  v23 = atoi(String);
  sub_100012A0(&v12, "DNSServerSearchOrder");
  sub_100012A0(&v11, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v10, "CIMV2");
  v13 = sub_100116A0((int)&v10, (int)&v11, &v12, (int)&v20) == 1;
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  sub_100013E0(&v12);
  if ( v13 )
  {
    *(_DWORD *)v19 = 0;
    if ( word_1001D5F8 == 8200 )
    {
      plLbound = 0;
      plUbound = 0;
      SafeArrayGetLBound(psa, 1u, &plLbound);
      SafeArrayGetUBound(psa, 1u, &plUbound);
      for ( rgIndices = plLbound; rgIndices <= plUbound; ++rgIndices )
      {
        ++*(_DWORD *)v19;
        SafeArrayGetElement(psa, &rgIndices, &pv);
        v6 = sub_10001340(&v9, pv);
        v7 = (const CHAR *)sub_100016F0(v6);
        sub_1000F9E0(v7);
        sub_100013E0(&v9);
        (*(void (__stdcall **)(int, _DWORD))(a5 + 4))(v23 - 1, 0);
      }
    }
    sub_10001F10(&Buffer, "Number of results: %i", *(_DWORD *)v19);
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v20);
}

// Address: 0x10012A60
int __cdecl GetNetworkAdapterDHCPServer(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "Index = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "DHCPServer");
  sub_100012A0(&v9, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x10012BA0
int __cdecl GetNetworkAdapterDefaultIPGateways(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char *v6; // eax
  const char *v7; // eax
  int v9; // [esp+0h] [ebp-838h] BYREF
  int v10; // [esp+4h] [ebp-834h] BYREF
  int v11; // [esp+8h] [ebp-830h] BYREF
  bool v12; // [esp+Fh] [ebp-829h]
  int v13; // [esp+10h] [ebp-828h] BYREF
  OLECHAR *pv; // [esp+14h] [ebp-824h] BYREF
  int v15[2]; // [esp+18h] [ebp-820h] BYREF
  LONG rgIndices; // [esp+20h] [ebp-818h] BYREF
  LONG plUbound; // [esp+24h] [ebp-814h] BYREF
  LONG plLbound; // [esp+28h] [ebp-810h] BYREF
  int v19; // [esp+2Ch] [ebp-80Ch] BYREF
  CHAR String1[2052]; // [esp+30h] [ebp-808h] BYREF

  memset(String1, 0, 2048);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v13, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v19, "Index = ", (int)v5);
  sub_100013E0(&v13);
  sub_100012A0(&v11, "DefaultIPGateway");
  sub_100012A0(&v10, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v9, "CIMV2");
  v12 = sub_100116A0((int)&v9, (int)&v10, &v11, (int)&v19) == 1;
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  if ( v12 )
  {
    if ( word_1001D5F8 == 8200 )
    {
      plLbound = 0;
      plUbound = 0;
      SafeArrayGetLBound(psa, 1u, &plLbound);
      SafeArrayGetUBound(psa, 1u, &plUbound);
      for ( rgIndices = plLbound; rgIndices <= plUbound; ++rgIndices )
      {
        SafeArrayGetElement(psa, &rgIndices, &pv);
        sub_10001340(v15, pv);
        if ( rgIndices == plLbound )
        {
          v6 = (char *)sub_100016F0(v15);
          sub_10001ED0(&Buffer, v6);
        }
        else
        {
          v7 = (const char *)sub_100016F0(v15);
          sub_10001F10(&Buffer, "%s %s", &Buffer, v7);
        }
        v15[1] = 0;
        sub_100013E0(v15);
      }
    }
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v19);
}

// Address: 0x10012E40
int __cdecl GetNetworkAdapterDefaultIPGatewaysCB(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  int *v6; // eax
  const CHAR *v7; // eax
  int v9; // [esp+0h] [ebp-C38h] BYREF
  int v10; // [esp+4h] [ebp-C34h] BYREF
  int v11; // [esp+8h] [ebp-C30h] BYREF
  int v12; // [esp+Ch] [ebp-C2Ch] BYREF
  bool v13; // [esp+13h] [ebp-C25h]
  int v14; // [esp+14h] [ebp-C24h] BYREF
  OLECHAR *pv; // [esp+18h] [ebp-C20h] BYREF
  LONG rgIndices; // [esp+1Ch] [ebp-C1Ch] BYREF
  LONG plUbound; // [esp+20h] [ebp-C18h] BYREF
  LONG plLbound; // [esp+24h] [ebp-C14h] BYREF
  char v19[4]; // [esp+28h] [ebp-C10h]
  int v20; // [esp+2Ch] [ebp-C0Ch] BYREF
  char String[1024]; // [esp+30h] [ebp-C08h] BYREF
  CHAR String1[2048]; // [esp+430h] [ebp-808h] BYREF
  int v23; // [esp+C34h] [ebp-4h]

  memset(String, 0, sizeof(String));
  memset(String1, 0, sizeof(String1));
  v23 = 0;
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v14, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v20, "Index = ", (int)v5);
  sub_100013E0(&v14);
  sub_1000FA40(String);
  v23 = atoi(String);
  sub_100012A0(&v12, "DefaultIPGateway");
  sub_100012A0(&v11, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v10, "CIMV2");
  v13 = sub_100116A0((int)&v10, (int)&v11, &v12, (int)&v20) == 1;
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  sub_100013E0(&v12);
  if ( v13 )
  {
    *(_DWORD *)v19 = 0;
    if ( word_1001D5F8 == 8200 )
    {
      plLbound = 0;
      plUbound = 0;
      SafeArrayGetLBound(psa, 1u, &plLbound);
      SafeArrayGetUBound(psa, 1u, &plUbound);
      for ( rgIndices = plLbound; rgIndices <= plUbound; ++rgIndices )
      {
        ++*(_DWORD *)v19;
        SafeArrayGetElement(psa, &rgIndices, &pv);
        v6 = sub_10001340(&v9, pv);
        v7 = (const CHAR *)sub_100016F0(v6);
        sub_1000F9E0(v7);
        sub_100013E0(&v9);
        (*(void (__stdcall **)(int, _DWORD))(a5 + 4))(v23 - 1, 0);
      }
    }
    sub_10001F10(&Buffer, "Number of results: %i", *(_DWORD *)v19);
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v20);
}

// Address: 0x10013120
int __cdecl GetNetworkAdapterIPSubNets(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char *v6; // eax
  const char *v7; // eax
  int v9; // [esp+0h] [ebp-838h] BYREF
  int v10; // [esp+4h] [ebp-834h] BYREF
  int v11; // [esp+8h] [ebp-830h] BYREF
  bool v12; // [esp+Fh] [ebp-829h]
  int v13; // [esp+10h] [ebp-828h] BYREF
  OLECHAR *pv; // [esp+14h] [ebp-824h] BYREF
  int v15[2]; // [esp+18h] [ebp-820h] BYREF
  LONG rgIndices; // [esp+20h] [ebp-818h] BYREF
  LONG plUbound; // [esp+24h] [ebp-814h] BYREF
  LONG plLbound; // [esp+28h] [ebp-810h] BYREF
  int v19; // [esp+2Ch] [ebp-80Ch] BYREF
  CHAR String1[2052]; // [esp+30h] [ebp-808h] BYREF

  memset(String1, 0, 2048);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v13, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v19, "Index = ", (int)v5);
  sub_100013E0(&v13);
  sub_100012A0(&v11, "IPSubnet");
  sub_100012A0(&v10, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v9, "CIMV2");
  v12 = sub_100116A0((int)&v9, (int)&v10, &v11, (int)&v19) == 1;
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  if ( v12 )
  {
    if ( word_1001D5F8 == 8200 )
    {
      plLbound = 0;
      plUbound = 0;
      SafeArrayGetLBound(psa, 1u, &plLbound);
      SafeArrayGetUBound(psa, 1u, &plUbound);
      for ( rgIndices = plLbound; rgIndices <= plUbound; ++rgIndices )
      {
        SafeArrayGetElement(psa, &rgIndices, &pv);
        sub_10001340(v15, pv);
        if ( rgIndices == plLbound )
        {
          v6 = (char *)sub_100016F0(v15);
          sub_10001ED0(&Buffer, v6);
        }
        else
        {
          v7 = (const char *)sub_100016F0(v15);
          sub_10001F10(&Buffer, "%s %s", &Buffer, v7);
        }
        v15[1] = 0;
        sub_100013E0(v15);
      }
    }
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v19);
}

// Address: 0x100133C0
int __cdecl GetNetworkAdapterIPSubNetsCB(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  int *v6; // eax
  const CHAR *v7; // eax
  int v9; // [esp+0h] [ebp-C38h] BYREF
  int v10; // [esp+4h] [ebp-C34h] BYREF
  int v11; // [esp+8h] [ebp-C30h] BYREF
  int v12; // [esp+Ch] [ebp-C2Ch] BYREF
  bool v13; // [esp+13h] [ebp-C25h]
  int v14; // [esp+14h] [ebp-C24h] BYREF
  OLECHAR *pv; // [esp+18h] [ebp-C20h] BYREF
  LONG rgIndices; // [esp+1Ch] [ebp-C1Ch] BYREF
  LONG plUbound; // [esp+20h] [ebp-C18h] BYREF
  LONG plLbound; // [esp+24h] [ebp-C14h] BYREF
  char v19[4]; // [esp+28h] [ebp-C10h]
  int v20; // [esp+2Ch] [ebp-C0Ch] BYREF
  char String[1024]; // [esp+30h] [ebp-C08h] BYREF
  CHAR String1[2048]; // [esp+430h] [ebp-808h] BYREF
  int v23; // [esp+C34h] [ebp-4h]

  memset(String, 0, sizeof(String));
  memset(String1, 0, sizeof(String1));
  v23 = 0;
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v14, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v20, "Index = ", (int)v5);
  sub_100013E0(&v14);
  sub_1000FA40(String);
  v23 = atoi(String);
  sub_100012A0(&v12, "IPSubnet");
  sub_100012A0(&v11, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v10, "CIMV2");
  v13 = sub_100116A0((int)&v10, (int)&v11, &v12, (int)&v20) == 1;
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  sub_100013E0(&v12);
  if ( v13 )
  {
    *(_DWORD *)v19 = 0;
    if ( word_1001D5F8 == 8200 )
    {
      plLbound = 0;
      plUbound = 0;
      SafeArrayGetLBound(psa, 1u, &plLbound);
      SafeArrayGetUBound(psa, 1u, &plUbound);
      for ( rgIndices = plLbound; rgIndices <= plUbound; ++rgIndices )
      {
        ++*(_DWORD *)v19;
        SafeArrayGetElement(psa, &rgIndices, &pv);
        v6 = sub_10001340(&v9, pv);
        v7 = (const CHAR *)sub_100016F0(v6);
        sub_1000F9E0(v7);
        sub_100013E0(&v9);
        (*(void (__stdcall **)(int, _DWORD))(a5 + 4))(v23 - 1, 0);
      }
    }
    sub_10001F10(&Buffer, "Number of results: %i", *(_DWORD *)v19);
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v20);
}

// Address: 0x100136A0
int __cdecl GetNetworkAdapterIPAddresses(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char *v6; // eax
  const char *v7; // eax
  int v9; // [esp+0h] [ebp-838h] BYREF
  int v10; // [esp+4h] [ebp-834h] BYREF
  int v11; // [esp+8h] [ebp-830h] BYREF
  bool v12; // [esp+Fh] [ebp-829h]
  int v13; // [esp+10h] [ebp-828h] BYREF
  OLECHAR *pv; // [esp+14h] [ebp-824h] BYREF
  int v15[2]; // [esp+18h] [ebp-820h] BYREF
  LONG rgIndices; // [esp+20h] [ebp-818h] BYREF
  LONG plUbound; // [esp+24h] [ebp-814h] BYREF
  LONG plLbound; // [esp+28h] [ebp-810h] BYREF
  int v19; // [esp+2Ch] [ebp-80Ch] BYREF
  CHAR String1[2052]; // [esp+30h] [ebp-808h] BYREF

  memset(String1, 0, 2048);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v13, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v19, "Index = ", (int)v5);
  sub_100013E0(&v13);
  sub_100012A0(&v11, "IPAddress");
  sub_100012A0(&v10, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v9, "CIMV2");
  v12 = sub_100116A0((int)&v9, (int)&v10, &v11, (int)&v19) == 1;
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  if ( v12 )
  {
    if ( word_1001D5F8 == 8200 )
    {
      plLbound = 0;
      plUbound = 0;
      SafeArrayGetLBound(psa, 1u, &plLbound);
      SafeArrayGetUBound(psa, 1u, &plUbound);
      for ( rgIndices = plLbound; rgIndices <= plUbound; ++rgIndices )
      {
        SafeArrayGetElement(psa, &rgIndices, &pv);
        sub_10001340(v15, pv);
        if ( rgIndices == plLbound )
        {
          v6 = (char *)sub_100016F0(v15);
          sub_10001ED0(&Buffer, v6);
        }
        else
        {
          v7 = (const char *)sub_100016F0(v15);
          sub_10001F10(&Buffer, "%s %s", &Buffer, v7);
        }
        v15[1] = 0;
        sub_100013E0(v15);
      }
    }
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v19);
}

// Address: 0x10013940
int __cdecl GetNetworkAdapterIPAddressesCB(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  int *v6; // eax
  const CHAR *v7; // eax
  int v9; // [esp+0h] [ebp-C38h] BYREF
  int v10; // [esp+4h] [ebp-C34h] BYREF
  int v11; // [esp+8h] [ebp-C30h] BYREF
  int v12; // [esp+Ch] [ebp-C2Ch] BYREF
  bool v13; // [esp+13h] [ebp-C25h]
  int v14; // [esp+14h] [ebp-C24h] BYREF
  OLECHAR *pv; // [esp+18h] [ebp-C20h] BYREF
  LONG rgIndices; // [esp+1Ch] [ebp-C1Ch] BYREF
  LONG plUbound; // [esp+20h] [ebp-C18h] BYREF
  LONG plLbound; // [esp+24h] [ebp-C14h] BYREF
  int v19; // [esp+28h] [ebp-C10h]
  int v20; // [esp+2Ch] [ebp-C0Ch] BYREF
  char String[1024]; // [esp+30h] [ebp-C08h] BYREF
  CHAR String1[2048]; // [esp+430h] [ebp-808h] BYREF
  int v23; // [esp+C34h] [ebp-4h]

  memset(String, 0, sizeof(String));
  memset(String1, 0, sizeof(String1));
  v23 = 0;
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v14, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v20, "Index = ", (int)v5);
  sub_100013E0(&v14);
  sub_1000FA40(String);
  v23 = atoi(String);
  sub_100012A0(&v12, "IPAddress");
  sub_100012A0(&v11, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v10, "CIMV2");
  v13 = sub_100116A0((int)&v10, (int)&v11, &v12, (int)&v20) == 1;
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  sub_100013E0(&v12);
  if ( v13 )
  {
    v19 = 0;
    if ( word_1001D5F8 == 8200 )
    {
      plLbound = 0;
      plUbound = 0;
      SafeArrayGetLBound(psa, 1u, &plLbound);
      SafeArrayGetUBound(psa, 1u, &plUbound);
      for ( rgIndices = plLbound; rgIndices <= plUbound; ++rgIndices )
      {
        ++v19;
        SafeArrayGetElement(psa, &rgIndices, &pv);
        v6 = sub_10001340(&v9, pv);
        v7 = (const CHAR *)sub_100016F0(v6);
        sub_1000F9E0(v7);
        sub_100013E0(&v9);
        (*(void (__stdcall **)(int, _DWORD))(a5 + 4))(v23 - 1, 0);
      }
    }
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
  return sub_100013E0(&v20);
}

// Address: 0x10013C00
int __cdecl IsNetworkAdapterAutoSense(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "DeviceID = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "AutoSense");
  sub_100012A0(&v9, "Win32_NetworkAdapter");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x10013D40
int __cdecl IsNetworkAdapterDHCPEnabled(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "Index = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "DHCPEnabled");
  sub_100012A0(&v9, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x10013E80
int __cdecl GetNetworkAdapterMACAddress(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "Index = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "MACAddress");
  sub_100012A0(&v9, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x10013FC0
int __cdecl GetNetworkAdapterDescription(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "DeviceID = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "Description");
  sub_100012A0(&v9, "Win32_NetworkAdapter");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x10014100
int __cdecl GetNetworkAdapterConnectionSpecificDNSSuffix(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "Index = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "DNSDomain");
  sub_100012A0(&v9, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x10014240
int __cdecl GetNetworkAdapterConnectionID(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "DeviceID = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "NetConnectionID");
  sub_100012A0(&v9, "Win32_NetworkAdapter");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x10014380
int __cdecl GetNetworkAdapterType(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  char v6; // al
  int v8; // [esp+0h] [ebp-41Ch] BYREF
  int v9; // [esp+4h] [ebp-418h] BYREF
  int v10; // [esp+8h] [ebp-414h] BYREF
  int v11; // [esp+Ch] [ebp-410h] BYREF
  int v12; // [esp+10h] [ebp-40Ch] BYREF
  CHAR String1[1028]; // [esp+14h] [ebp-408h] BYREF

  memset(String1, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  v5 = sub_100012A0(&v11, String1);
  sub_10001630((Concurrency::cancellation_token_source *)&v12, "DeviceID = ", (int)v5);
  sub_100013E0(&v11);
  sub_100012A0(&v10, "AdapterType");
  sub_100012A0(&v9, "Win32_NetworkAdapter");
  sub_100012A0(&v8, "CIMV2");
  v6 = sub_100116A0((int)&v8, (int)&v9, &v10, (int)&v12);
  sub_1000FB10(v6);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v12);
}

// Address: 0x100144C0
int __cdecl GetNetworkAdapterIDFromIPAddress(int a1, int a2, int a3, int a4, int a5)
{
  char v5; // al
  int v7; // [esp+0h] [ebp-81Ch] BYREF
  int v8; // [esp+4h] [ebp-818h] BYREF
  int v9; // [esp+8h] [ebp-814h] BYREF
  int v10; // [esp+Ch] [ebp-810h] BYREF
  int v11; // [esp+10h] [ebp-80Ch] BYREF
  CHAR String1[2052]; // [esp+14h] [ebp-808h] BYREF

  memset(String1, 0, 2048);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  sub_100012A0(&v11, String1);
  sub_100012A0(&v10, "IPAddress");
  sub_100012A0(&v9, "Index");
  sub_100012A0(&v8, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v7, "CIMV2");
  v5 = sub_10010690((int)&v7, (int)&v8, &v9, &v10, &v11);
  sub_1000FB10(v5);
  sub_100013E0(&v7);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  return sub_100013E0(&v11);
}

// Address: 0x10014620
int __cdecl GetNetworkAdapterIDFromMACAddress(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  Concurrency::cancellation_token_source *v6; // eax
  char v7; // al
  int v9; // [esp+0h] [ebp-824h] BYREF
  int v10; // [esp+4h] [ebp-820h] BYREF
  int v11; // [esp+8h] [ebp-81Ch] BYREF
  int v12; // [esp+Ch] [ebp-818h] BYREF
  int v13; // [esp+10h] [ebp-814h] BYREF
  int v14; // [esp+14h] [ebp-810h] BYREF
  int v15; // [esp+18h] [ebp-80Ch] BYREF
  CHAR String1[2052]; // [esp+1Ch] [ebp-808h] BYREF

  memset(String1, 0, 2048);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  sub_100012A0(&v12, "'");
  v5 = sub_100012A0(&v14, String1);
  v6 = sub_10001630((Concurrency::cancellation_token_source *)&v13, "MACAddress = '", (int)v5);
  sub_100015A0(v6, (Concurrency::cancellation_token_source *)&v15, (int)&v12);
  sub_100013E0(&v13);
  sub_100013E0(&v14);
  sub_100013E0(&v12);
  sub_100012A0(&v11, "Index");
  sub_100012A0(&v10, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v9, "CIMV2");
  v7 = sub_100116A0((int)&v9, (int)&v10, &v11, (int)&v15);
  sub_1000FB10(v7);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  return sub_100013E0(&v15);
}

// Address: 0x100147C0
int __cdecl GetNetworkAdapterIDFromDescription(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  Concurrency::cancellation_token_source *v6; // eax
  char v7; // al
  int v9; // [esp+0h] [ebp-824h] BYREF
  int v10; // [esp+4h] [ebp-820h] BYREF
  int v11; // [esp+8h] [ebp-81Ch] BYREF
  int v12; // [esp+Ch] [ebp-818h] BYREF
  int v13; // [esp+10h] [ebp-814h] BYREF
  int v14; // [esp+14h] [ebp-810h] BYREF
  int v15; // [esp+18h] [ebp-80Ch] BYREF
  CHAR String1[2052]; // [esp+1Ch] [ebp-808h] BYREF

  memset(String1, 0, 2048);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String1);
  sub_100012A0(&v12, "'");
  v5 = sub_100012A0(&v14, String1);
  v6 = sub_10001630((Concurrency::cancellation_token_source *)&v13, "Description = '", (int)v5);
  sub_100015A0(v6, (Concurrency::cancellation_token_source *)&v15, (int)&v12);
  sub_100013E0(&v13);
  sub_100013E0(&v14);
  sub_100013E0(&v12);
  sub_100012A0(&v11, "DeviceID");
  sub_100012A0(&v10, "Win32_NetworkAdapter");
  sub_100012A0(&v9, "CIMV2");
  v7 = sub_100116A0((int)&v9, (int)&v10, &v11, (int)&v15);
  sub_1000FB10(v7);
  sub_100013E0(&v9);
  sub_100013E0(&v10);
  sub_100013E0(&v11);
  return sub_100013E0(&v15);
}

// Address: 0x10014960
void __cdecl GetEnabledNetworkAdaptersIDs(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // [esp+0h] [ebp-420h] BYREF
  int v6; // [esp+4h] [ebp-41Ch] BYREF
  int v7; // [esp+8h] [ebp-418h] BYREF
  int v8; // [esp+Ch] [ebp-414h] BYREF
  bool v9; // [esp+13h] [ebp-40Dh]
  int i; // [esp+14h] [ebp-40Ch]
  char Buffer[1028]; // [esp+18h] [ebp-408h] BYREF

  memset(Buffer, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_100012A0(&v8, "IPEnabled = True");
  sub_100012A0(&v7, "Index");
  sub_100012A0(&v6, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v5, "CIMV2");
  v9 = sub_10011050((int)&v5, (int)&v6, &v7, (int)&v8) == 1;
  sub_100013E0(&v5);
  sub_100013E0(&v6);
  sub_100013E0(&v7);
  sub_100013E0(&v8);
  if ( v9 )
  {
    for ( i = 0; i < dword_1001D5F0; ++i )
    {
      if ( word_1001D608[8 * i] == 3 )
      {
        sub_10001F40(dword_1001D610[4 * i], Buffer, 10);
        if ( i != 0 )
          sub_10001F10(&::Buffer, "%s %s", &::Buffer, Buffer);
        else
          sub_10001F10(&::Buffer, "%s", Buffer);
      }
    }
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
}

// Address: 0x10014B40
void __cdecl GetEnabledNetworkAdaptersIDsCB(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // [esp+0h] [ebp-824h] BYREF
  int v6; // [esp+4h] [ebp-820h] BYREF
  int v7; // [esp+8h] [ebp-81Ch] BYREF
  int v8; // [esp+Ch] [ebp-818h] BYREF
  bool v9; // [esp+13h] [ebp-811h]
  int i; // [esp+14h] [ebp-810h]
  char v11[4]; // [esp+18h] [ebp-80Ch]
  char String[1024]; // [esp+1Ch] [ebp-808h] BYREF
  char Buffer[1024]; // [esp+41Ch] [ebp-408h] BYREF
  int v14; // [esp+820h] [ebp-4h]

  memset(String, 0, sizeof(String));
  memset(Buffer, 0, sizeof(Buffer));
  v14 = 0;
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String);
  v14 = atoi(String);
  sub_100012A0(&v8, "IPEnabled = True");
  sub_100012A0(&v7, "Index");
  sub_100012A0(&v6, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v5, "CIMV2");
  v9 = sub_10011050((int)&v5, (int)&v6, &v7, (int)&v8) == 1;
  sub_100013E0(&v5);
  sub_100013E0(&v6);
  sub_100013E0(&v7);
  sub_100013E0(&v8);
  if ( v9 )
  {
    *(_DWORD *)v11 = 0;
    for ( i = 0; i < dword_1001D5F0; ++i )
    {
      if ( word_1001D608[8 * i] == 3 )
      {
        ++*(_DWORD *)v11;
        sub_10001F40(dword_1001D610[4 * i], Buffer, 10);
        sub_1000F9E0(Buffer);
        (*(void (__stdcall **)(int, _DWORD))(a5 + 4))(v14 - 1, 0);
      }
    }
    sub_10001F10(&::Buffer, "Number of results: %i", *(_DWORD *)v11);
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
}

// Address: 0x10014D70
void __cdecl GetAllNetworkAdaptersIDs(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // [esp+0h] [ebp-420h] BYREF
  int v6; // [esp+4h] [ebp-41Ch] BYREF
  int v7; // [esp+8h] [ebp-418h] BYREF
  int v8; // [esp+Ch] [ebp-414h] BYREF
  bool v9; // [esp+13h] [ebp-40Dh]
  int i; // [esp+14h] [ebp-40Ch]
  char Buffer[1028]; // [esp+18h] [ebp-408h] BYREF

  memset(Buffer, 0, 1024);
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_100012A0(&v8, byte_10017E25);
  sub_100012A0(&v7, "Index");
  sub_100012A0(&v6, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v5, "CIMV2");
  v9 = sub_10011050((int)&v5, (int)&v6, &v7, (int)&v8) == 1;
  sub_100013E0(&v5);
  sub_100013E0(&v6);
  sub_100013E0(&v7);
  sub_100013E0(&v8);
  if ( v9 )
  {
    for ( i = 0; i < dword_1001D5F0; ++i )
    {
      if ( word_1001D608[8 * i] == 3 )
      {
        sub_10001F40(dword_1001D610[4 * i], Buffer, 10);
        if ( i != 0 )
          sub_10001F10(&::Buffer, "%s %s", &::Buffer, Buffer);
        else
          sub_10001F10(&::Buffer, "%s", Buffer);
      }
    }
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
}

// Address: 0x10014F50
void __cdecl GetAllNetworkAdaptersIDsCB(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // [esp+0h] [ebp-824h] BYREF
  int v6; // [esp+4h] [ebp-820h] BYREF
  int v7; // [esp+8h] [ebp-81Ch] BYREF
  int v8; // [esp+Ch] [ebp-818h] BYREF
  bool v9; // [esp+13h] [ebp-811h]
  int i; // [esp+14h] [ebp-810h]
  char v11[4]; // [esp+18h] [ebp-80Ch]
  char String[1024]; // [esp+1Ch] [ebp-808h] BYREF
  char Buffer[1024]; // [esp+41Ch] [ebp-408h] BYREF
  int v14; // [esp+820h] [ebp-4h]

  memset(String, 0, sizeof(String));
  memset(Buffer, 0, sizeof(Buffer));
  v14 = 0;
  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_1000FA40(String);
  v14 = atoi(String);
  sub_100012A0(&v8, &byte_10017E0B);
  sub_100012A0(&v7, "Index");
  sub_100012A0(&v6, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v5, "CIMV2");
  v9 = sub_10011050((int)&v5, (int)&v6, &v7, (int)&v8) == 1;
  sub_100013E0(&v5);
  sub_100013E0(&v6);
  sub_100013E0(&v7);
  sub_100013E0(&v8);
  if ( v9 )
  {
    *(_DWORD *)v11 = 0;
    for ( i = 0; i < dword_1001D5F0; ++i )
    {
      if ( word_1001D608[8 * i] == 3 )
      {
        ++*(_DWORD *)v11;
        sub_10001F40(dword_1001D610[4 * i], Buffer, 10);
        sub_1000F9E0(Buffer);
        (*(void (__stdcall **)(int, _DWORD))(a5 + 4))(v14 - 1, 0);
      }
    }
    sub_10001F10(&::Buffer, "%i", *(_DWORD *)v11);
    sub_1000FB10(1);
  }
  else
  {
    sub_1000FB10(0);
  }
}

// Address: 0x10015180
void __cdecl GetDNSSuffixSearchList(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ecx
  char v7; // al
  int v8; // [esp-8h] [ebp-10h] BYREF
  int v9[3]; // [esp-4h] [ebp-Ch] BYREF

  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  v9[0] = v5;
  v9[2] = (int)v9;
  sub_100012A0(v9, "SearchList");
  v8 = v6;
  v9[1] = (int)&v8;
  sub_100012A0(&v8, "SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters");
  v7 = sub_10010140(v8, v9[0]);
  sub_1000FB10(v7);
}

// Address: 0x100151F0
int __cdecl IsWINSProxyEnabled(int a1, int a2, int a3, int a4, int a5)
{
  char v5; // al
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h] BYREF
  int v10; // [esp+Ch] [ebp-4h] BYREF

  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  sub_100012A0(&v10, "IPEnabled = True");
  sub_100012A0(&v9, "DNSEnabledForWINSResolution");
  sub_100012A0(&v8, "Win32_NetworkAdapterConfiguration");
  sub_100012A0(&v7, "CIMV2");
  v5 = sub_100116A0((int)&v7, (int)&v8, &v9, (int)&v10);
  sub_1000FB10(v5);
  sub_100013E0(&v7);
  sub_100013E0(&v8);
  sub_100013E0(&v9);
  return sub_100013E0(&v10);
}

// Address: 0x100152A0
void __cdecl IsIPRoutingEnabled(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // [esp-8h] [ebp-14h] BYREF
  int v8[3]; // [esp-4h] [ebp-10h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  v8[0] = v5;
  v8[2] = (int)v8;
  sub_100012A0(v8, "IPEnableRouter");
  v7 = v6;
  v8[1] = (int)&v7;
  sub_100012A0(&v7, "SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters");
  v9 = sub_1000FC40(v7, v8[0]);
  if ( v9 == -1 )
  {
    sub_1000FB10(0);
  }
  else
  {
    if ( v9 != 0 )
    {
      if ( v9 == 1 )
        sub_10001F10(&Buffer, "Yes");
      else
        sub_10001F10(&Buffer, "?");
    }
    else
    {
      sub_10001F10(&Buffer, "No");
    }
    sub_1000FB10(1);
  }
}

// Address: 0x10015370
void __cdecl GetNodeType(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // [esp-8h] [ebp-14h] BYREF
  int v8[3]; // [esp-4h] [ebp-10h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  v8[0] = v5;
  v8[2] = (int)v8;
  sub_100012A0(v8, "DhcpNodeType");
  v7 = v6;
  v8[1] = (int)&v7;
  sub_100012A0(&v7, "SYSTEM\\CurrentControlSet\\Services\\NetBT\\Parameters");
  v9 = sub_1000FC40(v7, v8[0]);
  if ( v9 == -1 )
  {
    sub_1000FB10(0);
  }
  else
  {
    switch ( v9 )
    {
      case 1:
        sub_10001F10(&Buffer, "Broadcast");
        break;
      case 2:
        sub_10001F10(&Buffer, "Peer-Peer");
        break;
      case 4:
        sub_10001F10(&Buffer, "Mixed");
        break;
      case 8:
        sub_10001F10(&Buffer, "Hybrid");
        break;
      default:
        sub_10001F10(&Buffer, "Unknown");
        break;
    }
    sub_1000FB10(1);
  }
}

// Address: 0x10015470
void __cdecl GetPrimaryDNSSuffix(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ecx
  char v7; // al
  int v8; // [esp-8h] [ebp-10h] BYREF
  int v9[3]; // [esp-4h] [ebp-Ch] BYREF

  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  v9[0] = v5;
  v9[2] = (int)v9;
  sub_100012A0(v9, "Domain");
  v8 = v6;
  v9[1] = (int)&v8;
  sub_100012A0(&v8, "SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters");
  v7 = sub_10010140(v8, v9[0]);
  sub_1000FB10(v7);
}

// Address: 0x100154E0
void __cdecl GetHostName(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ecx
  char v7; // al
  int v8; // [esp-8h] [ebp-10h] BYREF
  int v9[3]; // [esp-4h] [ebp-Ch] BYREF

  dword_1001CDE0 = a4;
  dword_1001CDE8 = a3;
  iMaxLength = a2;
  (*(void (__stdcall **)(int, int (*)()))(a5 + 12))(dword_1001CDEC, sub_1000F9D0);
  v9[0] = v5;
  v9[2] = (int)v9;
  sub_100012A0(v9, "Hostname");
  v8 = v6;
  v9[1] = (int)&v8;
  sub_100012A0(&v8, "SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters");
  v7 = sub_10010140(v8, v9[0]);
  sub_1000FB10(v7);
}

// Address: 0x100158C0
int std::`dynamic initializer for 'classic_locale''()
{
  sub_10001C90(&word_1001D5F8, 0);
  return atexit(sub_10015970);
}

// Address: 0x100158E0
int sub_100158E0()
{
  sub_10001C90(word_1001D608, 0);
  `eh vector constructor iterator'(
    byte_1001D618,
    0x10u,
    1023,
    (void (__thiscall *)(void *))unknown_libname_2,
    (void (__thiscall *)(void *))sub_10001CF0);
  return atexit(sub_10015980);
}

// Address: 0x10015960
int sub_10015960()
{
  return atexit(sub_100159A0);
}

// Address: 0x10015970
void __cdecl sub_10015970()
{
  sub_10001CF0((VARIANTARG *)&word_1001D5F8);
}

// Address: 0x10015980
void __cdecl sub_10015980()
{
  `eh vector destructor iterator'((char *)word_1001D608, 0x10u, 1024, (void (__thiscall *)(void *))sub_10001CF0);
}

// Address: 0x100159A0
void __cdecl sub_100159A0()
{
  VariantClear(&pvarg);
}

// Address: 0x100159AC
void __cdecl sub_100159AC()
{
  dword_1001C320[0] = (int)&std::bad_alloc::`vftable';
  sub_1000732D(dword_1001C320);
}

