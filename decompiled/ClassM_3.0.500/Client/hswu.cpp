// Decompiled from hswu.dll (ClassM_3.0.500\ClassM_Client_unpacked\hswu.dll)

// Address: 0x10001000
BOOL __usercall sub_10001000@<eax>(const WCHAR *a1@<eax>)
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

// Address: 0x10001040
HANDLE __cdecl sub_10001040(wchar_t *Format, int ArgList)
{
  HANDLE result; // eax
  HANDLE v3; // esi
  LPCWSTR v4; // edi
  int v5; // eax
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-4h]

  if ( hObject == nullptr )
  {
    result = (HANDLE)(timeGetTime() - dword_10041634);
    if ( (unsigned int)result < 0x3E8 )
      return result;
    dword_10041634 = timeGetTime();
    result = CreateFileW(L"\\\\.\\pipe\\SENUL_DEBUG_PIPE", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
    hObject = result;
    if ( result == (HANDLE)-1 )
      goto LABEL_10;
    sub_10001000(L"Logging Start...");
  }
  if ( (dword_10041724 & 1) == 0 )
  {
    dword_10041724 |= 1u;
    v7 = 0;
    lpBuffer = (LPCWSTR)operator new[](0x20000u);
    atexit(sub_1002A290);
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

// Address: 0x10001190
void __userpurge sub_10001190(_DWORD *a1@<eax>, OLECHAR *a2@<ecx>, int pExceptionObject)
{
  int v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  BSTR bstrString; // [esp+8h] [ebp-4h] BYREF

  bstrString = a2;
  v3 = (*(int (__stdcall **)(_DWORD, BSTR *))(*(_DWORD *)*a1 + 32))(*a1, &bstrString);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_CategoryID in TCategory::GetCategoryID( ... )", v5);
    pExceptionObject = v3;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  if ( bstrString != nullptr )
    v4 = wcslen(bstrString);
  else
    v4 = 0;
  sub_10007E70(bstrString, v4);
  SysFreeString(bstrString);
}

// Address: 0x10001210
void __userpurge sub_10001210(_DWORD *a1@<eax>, OLECHAR *a2@<ecx>, int pExceptionObject)
{
  int v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  BSTR bstrString; // [esp+8h] [ebp-4h] BYREF

  bstrString = a2;
  v3 = (*(int (__stdcall **)(_DWORD, BSTR *))(*(_DWORD *)*a1 + 40))(*a1, &bstrString);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Description in TCategory::GetDescription( ... )", v5);
    pExceptionObject = v3;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  if ( bstrString != nullptr )
    v4 = wcslen(bstrString);
  else
    v4 = 0;
  sub_10007E70(bstrString, v4);
  SysFreeString(bstrString);
}

// Address: 0x10001290
void __userpurge sub_10001290(_DWORD *a1@<eax>, OLECHAR *a2@<ecx>, int pExceptionObject)
{
  int v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  BSTR bstrString; // [esp+8h] [ebp-4h] BYREF

  bstrString = a2;
  v3 = (*(int (__stdcall **)(_DWORD, BSTR *))(*(_DWORD *)*a1 + 28))(*a1, &bstrString);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Name in TCategory::GetName( ... )", v5);
    pExceptionObject = v3;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  if ( bstrString != nullptr )
    v4 = wcslen(bstrString);
  else
    v4 = 0;
  sub_10007E70(bstrString, v4);
  SysFreeString(bstrString);
}

// Address: 0x10001310
void __userpurge sub_10001310(_DWORD *a1@<eax>, OLECHAR *a2@<ecx>, int pExceptionObject)
{
  int v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  BSTR bstrString; // [esp+8h] [ebp-4h] BYREF

  bstrString = a2;
  v3 = (*(int (__stdcall **)(_DWORD, BSTR *))(*(_DWORD *)*a1 + 56))(*a1, &bstrString);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Type in TCategory::GetType( ... )", v5);
    pExceptionObject = v3;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  if ( bstrString != nullptr )
    v4 = wcslen(bstrString);
  else
    v4 = 0;
  sub_10007E70(bstrString, v4);
  SysFreeString(bstrString);
}

// Address: 0x10001390
int __usercall sub_10001390@<eax>(int result@<eax>)
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

// Address: 0x100013D0
_DWORD *__stdcall sub_100013D0(_DWORD *pExceptionObject, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v6; // [esp+0h] [ebp-20h]

  v2 = a2;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *v2 = 0;
  v2[1] = 0;
  sub_10006910(v2, v3);
  v4 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*pExceptionObject + 84))(*pExceptionObject, *v2);
  if ( (int)v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_InstallationBehavior in TUpdate::GetInstallationBehavior() const", v6);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v2;
}

// Address: 0x10001480
void __userpurge sub_10001480(_DWORD *a1@<eax>, OLECHAR *a2@<ecx>, int pExceptionObject)
{
  int v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  BSTR bstrString; // [esp+8h] [ebp-4h] BYREF

  bstrString = a2;
  v3 = (*(int (__stdcall **)(_DWORD, BSTR *))(*(_DWORD *)*a1 + 28))(*a1, &bstrString);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Title in TUpdate::GetTitle( ... ) const", v5);
    pExceptionObject = v3;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  if ( bstrString != nullptr )
    v4 = wcslen(bstrString);
  else
    v4 = 0;
  sub_10007E70(bstrString, v4);
  SysFreeString(bstrString);
}

// Address: 0x10001530
int __usercall sub_10001530@<eax>(_DWORD *a1@<eax>)
{
  int v1; // esi
  int v2; // esi
  int v4; // [esp+10h] [ebp-10h]
  __int16 v5; // [esp+14h] [ebp-Ch] BYREF
  int pExceptionObject; // [esp+18h] [ebp-8h] BYREF
  int v7; // [esp+1Ch] [ebp-4h] BYREF

  v1 = (**(int (__stdcall ***)(_DWORD, void *, int *))*a1)(*a1, &unk_100323E8, &v7);
  if ( v1 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to QueryInterface in in TUpdate::GetBrowseOnly() const", v4);
    pExceptionObject = v1;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v2 = (*(int (__stdcall **)(int, __int16 *))(*(_DWORD *)v7 + 224))(v7, &v5);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_BrowseOnly in in TUpdate::GetBrowseOnly() const", v4);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v5;
}

// Address: 0x100015C0
_DWORD *__stdcall sub_100015C0(_DWORD *pExceptionObject, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v6; // [esp+0h] [ebp-20h]

  v2 = a2;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *v2 = 0;
  v2[1] = 0;
  sub_100069E0(v2, v3);
  v4 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*pExceptionObject + 76))(*pExceptionObject, *v2);
  if ( (int)v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Identity in in TUpdate::GetIdentity() const", v6);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v2;
}

// Address: 0x10001670
void __userpurge sub_10001670(_DWORD *a1@<eax>, OLECHAR *a2@<ecx>, int pExceptionObject)
{
  int v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  BSTR bstrString; // [esp+8h] [ebp-4h] BYREF

  bstrString = a2;
  v3 = (*(int (__stdcall **)(_DWORD, BSTR *))(*(_DWORD *)*a1 + 28))(*a1, &bstrString);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_HResult in TUpdateException::GetMessage( ... )", v5);
    pExceptionObject = v3;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  if ( bstrString != nullptr )
    v4 = wcslen(bstrString);
  else
    v4 = 0;
  sub_10007E70(bstrString, v4);
  SysFreeString(bstrString);
}

// Address: 0x100016F0
void __userpurge sub_100016F0(_DWORD *a1@<eax>, OLECHAR *a2@<ecx>, int pExceptionObject)
{
  int v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  BSTR bstrString; // [esp+8h] [ebp-4h] BYREF

  bstrString = a2;
  v3 = (*(int (__stdcall **)(_DWORD, BSTR *))(*(_DWORD *)*a1 + 32))(*a1, &bstrString);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_UpdateID in TUpdateIdentity::GetUpdateID( ... )", v5);
    pExceptionObject = v3;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  if ( bstrString != nullptr )
    v4 = wcslen(bstrString);
  else
    v4 = 0;
  sub_10007E70(bstrString, v4);
  SysFreeString(bstrString);
}

// Address: 0x10001770
unsigned __int16 *__stdcall sub_10001770(_DWORD *pExceptionObject, UUID *Uuid)
{
  int v2; // eax
  unsigned __int16 *v3; // edi
  RPC_STATUS v4; // eax
  _DWORD *v5; // esi
  unsigned __int16 *result; // eax
  RPC_WSTR StringUuid; // [esp+Ch] [ebp-10h] BYREF
  int v8; // [esp+18h] [ebp-4h]

  v2 = sub_1000CCFE();
  if ( v2 == 0 )
    sub_10007E20(-2147467259);
  StringUuid = (RPC_WSTR)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2) + 16);
  v8 = 0;
  sub_100016F0(pExceptionObject, (OLECHAR *)&StringUuid, (int)&StringUuid);
  v3 = StringUuid;
  if ( *((int *)StringUuid - 1) > 1 )
  {
    sub_10007CB0(*((_DWORD *)StringUuid - 3));
    v3 = StringUuid;
  }
  v4 = UuidFromStringW(v3, Uuid);
  v5 = (_DWORD *)v4;
  if ( v4 != 0 )
  {
    sub_10001040((wchar_t *)L"Failed to convert to GUID in TUpdateIdentity::GetUpdateID( ... ) : %d", v4);
    if ( (int)v5 > 0 )
      v5 = (_DWORD *)((unsigned __int16)v5 | 0x80070000);
    pExceptionObject = v5;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  result = v3 - 8;
  v8 = -1;
  if ( _InterlockedDecrement((volatile signed __int32 *)v3 - 1) <= 0 )
    return (unsigned __int16 *)(*(int (__thiscall **)(_DWORD, unsigned __int16 *))(**(_DWORD **)result + 4))(
                                 *(_DWORD *)result,
                                 v3 - 8);
  return result;
}

// Address: 0x10001870
BOOL __thiscall sub_10001870(int this)
{
  return **(_DWORD **)(this + 12) != 0 || *(_DWORD *)(this + 28) != 0;
}

// Address: 0x100018C0
_DWORD *__stdcall sub_100018C0(_DWORD *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  *a1 = &IUpdateOperator<IUpdateSearcher,ISearchJob,ISearchResult>::`vftable';
  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = 0;
  else
    v1 = nullptr;
  a1[1] = 0;
  a1[2] = 0;
  sub_10006B80(a1 + 1, v1);
  v2 = operator new(4u);
  if ( v2 != nullptr )
    *v2 = 0;
  else
    v2 = nullptr;
  a1[3] = 0;
  a1[4] = 0;
  sub_10006C50(a1 + 3, v2);
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  a1[5] = 0;
  a1[6] = 0;
  sub_10006D20(a1 + 5, v3);
  return a1;
}

// Address: 0x100019C0
_DWORD *__stdcall sub_100019C0(_DWORD *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  *a1 = &IUpdateOperator<IUpdateDownloader,IDownloadJob,IDownloadResult>::`vftable';
  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = 0;
  else
    v1 = nullptr;
  a1[1] = 0;
  a1[2] = 0;
  sub_10006DF0(a1 + 1, v1);
  v2 = operator new(4u);
  if ( v2 != nullptr )
    *v2 = 0;
  else
    v2 = nullptr;
  a1[3] = 0;
  a1[4] = 0;
  sub_10006EC0(a1 + 3, v2);
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  a1[5] = 0;
  a1[6] = 0;
  sub_10006F90(a1 + 5, v3);
  return a1;
}

// Address: 0x10001A80
void *__thiscall sub_10001A80(void *this, char a2)
{
  sub_10005AE0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001AC0
_DWORD *__stdcall sub_10001AC0(_DWORD *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  *a1 = &IUpdateOperator<IUpdateInstaller,IInstallationJob,IInstallationResult>::`vftable';
  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = 0;
  else
    v1 = nullptr;
  a1[1] = 0;
  a1[2] = 0;
  sub_10007060(a1 + 1, v1);
  v2 = operator new(4u);
  if ( v2 != nullptr )
    *v2 = 0;
  else
    v2 = nullptr;
  a1[3] = 0;
  a1[4] = 0;
  sub_10007130(a1 + 3, v2);
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  a1[5] = 0;
  a1[6] = 0;
  sub_10007200(a1 + 5, v3);
  return a1;
}

// Address: 0x10001B80
void *__thiscall sub_10001B80(void *this, char a2)
{
  sub_10005DE0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001BA0
_DWORD *__thiscall sub_10001BA0(_DWORD *this, char a2)
{
  *this = &CUpdateDownloadAndInstallation::`vftable';
  sub_10005DE0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001BD0
int (**sub_10001BD0())()
{
  return &off_1002FD30;
}

// Address: 0x10001BE0
int *sub_10001BE0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // eax

  unknown_libname_18(nullptr);
  dword_10041648 = (int)&ChswuApp::`vftable';
  dword_100416EC = 1;
  ArgList = 126993;
  v0 = operator new(4u);
  if ( v0 != nullptr )
    *v0 = 0;
  else
    v0 = nullptr;
  ppv = nullptr;
  dword_100416F8 = 0;
  sub_10006AB0(&ppv, v0);
  dword_100416FC = 0;
  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = 0;
  else
    v1 = nullptr;
  dword_10041700 = 0;
  dword_10041704 = 0;
  sub_10006840(&dword_10041700, v1);
  v2 = operator new(4u);
  if ( v2 != nullptr )
    *v2 = 0;
  else
    v2 = nullptr;
  dword_10041708 = nullptr;
  dword_1004170C = 0;
  sub_10006840(&dword_10041708, v2);
  dword_10041710 = 0;
  dword_10041714 = 0;
  dword_10041718 = 0;
  return &dword_10041648;
}

// Address: 0x10001D00
CWinApp *__thiscall sub_10001D00(CWinApp *this, char a2)
{
  sub_10001D20(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001D20
void __stdcall sub_10001D20(CWinApp *a1)
{
  volatile signed __int32 *v1; // esi
  volatile signed __int32 *v2; // esi
  volatile signed __int32 *v3; // esi

  v1 = *((volatile signed __int32 **)a1 + 49);
  if ( v1 != nullptr && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  v2 = *((volatile signed __int32 **)a1 + 47);
  if ( v2 != nullptr && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
  }
  v3 = *((volatile signed __int32 **)a1 + 44);
  if ( v3 != nullptr && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  CWinApp::~CWinApp(a1);
}

// Address: 0x10001E20
int __thiscall sub_10001E20(CWinApp *this)
{
  CWinApp::InitInstance(this);
  return 1;
}

// Address: 0x10001E30
int __thiscall sub_10001E30(CWinApp *this)
{
  sub_10001F30();
  return CWinApp::ExitInstance(this);
}

// Address: 0x10001E40
int __usercall sub_10001E40@<eax>(int a1@<esi>)
{
  sub_10007A50();
  sub_10001040((wchar_t *)L"%08X - %s", a1);
  return 0;
}

// Address: 0x10001EE0
HANDLE __usercall sub_10001EE0@<eax>(int *a1@<eax>)
{
  return sub_10001040((wchar_t *)L"%08X-%04X-%04X-%02X%02X%02X%02X%02X%02X%02X%02X", *a1);
}

// Address: 0x10001F30
int __usercall sub_10001F30@<eax>(_DWORD *a1@<esi>)
{
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax
  int (__thiscall ***v3)(_DWORD, int); // ecx
  int (__thiscall ***v4)(_DWORD, int); // ecx
  int (__thiscall ***v5)(_DWORD, int); // ecx

  v1 = (int (__thiscall ***)(_DWORD, int))a1[50];
  if ( v1 != nullptr )
  {
    result = (**v1)(v1, 1);
    a1[50] = 0;
  }
  v3 = (int (__thiscall ***)(_DWORD, int))a1[52];
  if ( v3 != nullptr )
  {
    result = (**v3)(v3, 1);
    a1[52] = 0;
  }
  v4 = (int (__thiscall ***)(_DWORD, int))a1[51];
  if ( v4 != nullptr )
  {
    result = (**v4)(v4, 1);
    a1[51] = 0;
  }
  v5 = (int (__thiscall ***)(_DWORD, int))a1[45];
  if ( v5 != nullptr )
  {
    result = (**v5)(v5, 1);
    a1[45] = 0;
  }
  return result;
}

// Address: 0x10001FA0
BOOL __usercall sub_10001FA0@<eax>(int ArgList@<ecx>, int a2@<esi>)
{
  int v2; // eax
  int v3; // eax
  BOOL result; // eax
  int pExceptionObject; // [esp+0h] [ebp-4h] BYREF

  pExceptionObject = ArgList;
  v2 = sub_100042C0();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2) != 0
    || (v3 = sub_100040A0(), (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3) != 0) )
  {
    sub_10001040((wchar_t *)L"Update is begun.", pExceptionObject);
    pExceptionObject = -2147467259;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  result = ::ArgList != a2;
  dword_100416EC = result;
  if ( ::ArgList != a2 )
    ::ArgList = a2;
  return result;
}

// Address: 0x10002010
int sub_10002010()
{
  LPVOID *v0; // eax
  HRESULT Instance; // esi
  int v2; // esi
  int v4; // [esp+4h] [ebp-Ch]
  HRESULT pExceptionObject; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v0 = ppv;
  if ( *ppv == nullptr )
  {
    Instance = CoCreateInstance(&rclsid, nullptr, 1u, &riid, ppv);
    if ( Instance < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to CoCreateInstance in ChswuApp::GetUpdateSession()", v4);
      pExceptionObject = Instance;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    v0 = ppv;
  }
  v2 = (*(int (__stdcall **)(LPVOID, int *))(*(_DWORD *)*v0 + 48))(*v0, &v6);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to CreateUpdateSearcher", v4);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v6;
}

// Address: 0x100020A0
int sub_100020A0()
{
  int result; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // [esp-8h] [ebp-2Ch] BYREF
  int v6; // [esp-4h] [ebp-28h]
  void *v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+20h] [ebp-4h]

  result = dword_100416FC;
  if ( dword_100416FC == 0 )
  {
    v1 = operator new(0x20u);
    v2 = v1;
    v7 = v1;
    v8 = 0;
    if ( v1 != nullptr )
    {
      sub_100018C0(v1);
      *v2 = &CUpdateSearcher::`vftable';
      v2[7] = 0;
    }
    else
    {
      v2 = nullptr;
    }
    v8 = -1;
    dword_100416FC = (int)v2;
    v7 = &v5;
    v3 = sub_10002010();
    v4 = (int *)operator new(4u);
    if ( v4 != nullptr )
      *v4 = v3;
    else
      v4 = nullptr;
    v5 = 0;
    v6 = 0;
    sub_10006B80(&v5, v4);
    sub_10005C60(v5, v6);
    return dword_100416FC;
  }
  return result;
}

// Address: 0x10002180
int __usercall sub_10002180@<eax>(int a1@<esi>)
{
  sub_100020A0();
  sub_10005D50(0);
  return a1;
}

// Address: 0x100021A0
int __usercall sub_100021A0@<eax>(const wchar_t *a1@<esi>)
{
  int v1; // eax
  int result; // eax
  int v3; // ecx
  int (__thiscall *v4)(int, const wchar_t *); // eax

  v1 = sub_100020A0();
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 16))(v1);
  if ( result == 0 )
  {
    v3 = sub_100020A0();
    v4 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v3 + 12);
    if ( a1 != nullptr )
      return v4(v3, a1);
    else
      return v4(
               v3,
               L"IsInstalled=0 and DeploymentAction='Installation' or IsPresent=1 and DeploymentAction='Uninstallation' or"
                " IsInstalled=1 and DeploymentAction='Installation' and RebootRequired=1 or IsInstalled=0 and DeploymentA"
                "ction='Uninstallation' and RebootRequired=1");
  }
  return result;
}

// Address: 0x100021E0
int *__stdcall sub_100021E0(int *a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  int (__stdcall *v3)(int, int); // eax
  int v4; // esi
  volatile signed __int32 *v5; // esi
  int v7; // [esp-8h] [ebp-38h]
  int v8; // [esp-4h] [ebp-34h]
  int v9; // [esp+0h] [ebp-30h]
  int pExceptionObject; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+14h] [ebp-1Ch]
  _DWORD *v12; // [esp+18h] [ebp-18h] BYREF
  volatile signed __int32 *v13; // [esp+1Ch] [ebp-14h]
  int v14; // [esp+2Ch] [ebp-4h]

  v14 = 0;
  v11 = 0;
  sub_10002180((int)&v12);
  v14 = 1;
  v1 = v12;
  if ( *v12 == 0 )
  {
    sub_10001040((wchar_t *)L"ISearchResult is NULL - ChswuApp::GetWarnings()", v9);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v2 = operator new(4u);
  if ( v2 != nullptr )
    *v2 = 0;
  else
    v2 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  sub_100072D0(a1, v2);
  v8 = *a1;
  v7 = *v1;
  v3 = *(int (__stdcall **)(int, int))(*(_DWORD *)*v1 + 40);
  v11 = 1;
  v4 = v3(v7, v8);
  if ( v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Warnings in ChswuApp::GetWarnings()", v9);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  LOBYTE(v14) = 0;
  v5 = v13;
  if ( v13 != nullptr && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
  }
  return a1;
}

// Address: 0x10002300
int __stdcall sub_10002300(int a1, int pExceptionObject)
{
  volatile signed __int32 *v2; // esi
  int v4; // [esp+0h] [ebp-2Ch]
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  int v6; // [esp+14h] [ebp-18h]
  int *v7; // [esp+18h] [ebp-14h] BYREF
  volatile signed __int32 *v8; // [esp+1Ch] [ebp-10h]
  int v9; // [esp+28h] [ebp-4h]

  v6 = 0;
  sub_100021E0((int *)&v7);
  v9 = 1;
  if ( *v7 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateExceptionCollection is NULL - ChswuApp::GetWarning( ... )", v4);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v5 = *v7;
  sub_10005FA0((int)&v5, a1, pExceptionObject);
  LOBYTE(v9) = 0;
  v6 = 1;
  if ( v8 != nullptr )
  {
    v2 = v8;
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
  }
  return a1;
}

// Address: 0x100023E0
int sub_100023E0()
{
  int v0; // esi
  volatile signed __int32 *v1; // esi
  int v3; // [esp+0h] [ebp-24h]
  int pExceptionObject; // [esp+8h] [ebp-1Ch] BYREF
  int v5; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v6; // [esp+10h] [ebp-14h] BYREF
  volatile signed __int32 *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  sub_100021E0((int *)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateExceptionCollection is NULL - ChswuApp::GetWarningCount()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v0 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 36))(*v6, &v5);
  if ( v0 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Count in TCollection::GetCount() const", v3);
    pExceptionObject = v0;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v1 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return v5;
}

// Address: 0x100024D0
int __thiscall sub_100024D0(void *pExceptionObject)
{
  int v2; // esi
  volatile signed __int32 *v3; // esi
  int v5; // [esp+0h] [ebp-24h]
  int pExceptionObjecta; // [esp+8h] [ebp-1Ch] BYREF
  int v7; // [esp+Ch] [ebp-18h] BYREF
  int v8; // [esp+10h] [ebp-14h] BYREF
  volatile signed __int32 *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  sub_10002300((int)&v8, (int)pExceptionObject);
  v10 = 0;
  if ( *(_DWORD *)v8 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateException is NULL - ChswuApp::GetWarningContext( %d )", (int)pExceptionObject);
    pExceptionObjecta = -2147467261;
    _CxxThrowException(&pExceptionObjecta, (_ThrowInfo *)&_TI1J);
  }
  v2 = (*(int (__stdcall **)(_DWORD, int *))(**(_DWORD **)v8 + 36))(*(_DWORD *)v8, &v7);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_HResult in TUpdateException::GetContext()", v5);
    pExceptionObjecta = v2;
    _CxxThrowException(&pExceptionObjecta, (_ThrowInfo *)&_TI1J);
  }
  v10 = -1;
  v3 = v9;
  if ( v9 != nullptr && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  return v7;
}

// Address: 0x100025C0
int __thiscall sub_100025C0(void *pExceptionObject)
{
  int v2; // esi
  volatile signed __int32 *v3; // esi
  int v5; // [esp+0h] [ebp-24h]
  int pExceptionObjecta; // [esp+8h] [ebp-1Ch] BYREF
  int v7; // [esp+Ch] [ebp-18h] BYREF
  int v8; // [esp+10h] [ebp-14h] BYREF
  volatile signed __int32 *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  sub_10002300((int)&v8, (int)pExceptionObject);
  v10 = 0;
  if ( *(_DWORD *)v8 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateException is NULL - ChswuApp::GetWarningContext( %d )", (int)pExceptionObject);
    pExceptionObjecta = -2147467261;
    _CxxThrowException(&pExceptionObjecta, (_ThrowInfo *)&_TI1J);
  }
  v2 = (*(int (__stdcall **)(_DWORD, int *))(**(_DWORD **)v8 + 32))(*(_DWORD *)v8, &v7);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_HResult in TUpdateException::GetHResult()", v5);
    pExceptionObjecta = v2;
    _CxxThrowException(&pExceptionObjecta, (_ThrowInfo *)&_TI1J);
  }
  v10 = -1;
  v3 = v9;
  if ( v9 != nullptr && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  return v7;
}

// Address: 0x100026B0
void __thiscall sub_100026B0(void *pExceptionObject, int pExceptionObjecta)
{
  volatile signed __int32 *v3; // esi
  int v4; // [esp+Ch] [ebp-1Ch] BYREF
  int v5; // [esp+10h] [ebp-18h] BYREF
  volatile signed __int32 *v6; // [esp+14h] [ebp-14h]
  int v7; // [esp+24h] [ebp-4h]

  sub_10002300((int)&v5, (int)pExceptionObject);
  v7 = 0;
  if ( *(_DWORD *)v5 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateException is NULL - ChswuApp::GetWarningMessage( %d, ... )", (int)pExceptionObject);
    pExceptionObjecta = -2147467261;
    _CxxThrowException(&pExceptionObjecta, (_ThrowInfo *)&_TI1J);
  }
  v4 = *(_DWORD *)v5;
  sub_10001670(&v4, (OLECHAR *)v5, pExceptionObjecta);
  v7 = -1;
  v3 = v6;
  if ( v6 != nullptr && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
}

// Address: 0x10002780
int *__stdcall sub_10002780(int *a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  int (__stdcall *v3)(int, int); // eax
  int v4; // esi
  volatile signed __int32 *v5; // esi
  int v7; // [esp-8h] [ebp-34h]
  int v8; // [esp-4h] [ebp-30h]
  int v9; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+10h] [ebp-1Ch] BYREF
  int v11; // [esp+14h] [ebp-18h]
  _DWORD *v12; // [esp+18h] [ebp-14h] BYREF
  volatile signed __int32 *v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+28h] [ebp-4h]

  v14 = 0;
  v11 = 0;
  sub_10002180((int)&v12);
  v14 = 1;
  v1 = v12;
  if ( *v12 == 0 )
  {
    sub_10001040((wchar_t *)L"ISearchResult is NULL - ChswuApp::GetRootCategories()", v9);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v2 = operator new(4u);
  if ( v2 != nullptr )
    *v2 = 0;
  else
    v2 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  sub_100066A0(a1, v2);
  v8 = *a1;
  v7 = *v1;
  v3 = *(int (__stdcall **)(int, int))(*(_DWORD *)*v1 + 32);
  v11 = 1;
  v4 = v3(v7, v8);
  if ( v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_RootCategories in ChswuApp::GetRootCategories()", v9);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  LOBYTE(v14) = 0;
  v5 = v13;
  if ( v13 != nullptr && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
  }
  return a1;
}

// Address: 0x100028A0
int __usercall sub_100028A0@<eax>(int a1@<ebx>)
{
  int v1; // eax
  int v2; // esi
  int v4; // [esp+0h] [ebp-24h]
  int pExceptionObject; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v6[3]; // [esp+Ch] [ebp-18h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  v6[0] = 0;
  v1 = sub_100020A0();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 20))(v1) == 0 )
  {
    sub_10001040((wchar_t *)L"Search was not ended. - ChswuApp::GetUpdateCollectionFromSearch()", v4);
    pExceptionObject = -2147467259;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  if ( *(_DWORD *)dword_10041700 == 0 )
  {
    sub_10002180((int)v6);
    v7 = 0;
    if ( *(_DWORD *)v6[0] == 0 )
    {
      sub_10001040((wchar_t *)L"ISearchResult is NULL - ChswuApp::GetUpdateCollectionFromSearch()", v4);
      pExceptionObject = -2147467261;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    v2 = (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)v6[0] + 36))(*(_DWORD *)v6[0], dword_10041700);
    if ( v2 < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to get_Updates in ChswuApp::GetUpdateCollection()", v4);
      pExceptionObject = v2;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    v7 = -1;
    sub_10001390((int)v6);
  }
  sub_10006640();
  return a1;
}

// Address: 0x100029C0
int __stdcall sub_100029C0(int a1, int pExceptionObject)
{
  volatile signed __int32 *v2; // esi
  int v4; // [esp+0h] [ebp-2Ch]
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  int v6; // [esp+14h] [ebp-18h]
  int *v7; // [esp+18h] [ebp-14h] BYREF
  volatile signed __int32 *v8; // [esp+1Ch] [ebp-10h]
  int v9; // [esp+28h] [ebp-4h]

  v6 = 0;
  sub_100028A0((int)&v7);
  v9 = 1;
  if ( *v7 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ChswuApp::GetUpdateItemFromSearch( ... )", v4);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v5 = *v7;
  sub_10006120((int)&v5, a1, pExceptionObject);
  v6 = 1;
  LOBYTE(v9) = 0;
  v2 = v8;
  if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
  }
  return a1;
}

// Address: 0x10002AA0
int *__userpurge sub_10002AA0@<eax>(int *a1@<edi>, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // esi
  volatile signed __int32 *v8; // ebp
  int v9; // ebx
  volatile signed __int32 *v10; // esi
  volatile signed __int32 *v11; // esi
  volatile signed __int32 *v12; // esi
  _DWORD *v13; // eax
  int v15; // [esp+0h] [ebp-5Ch]
  int pExceptionObject; // [esp+10h] [ebp-4Ch] BYREF
  int v17; // [esp+14h] [ebp-48h] BYREF
  int v18; // [esp+18h] [ebp-44h]
  int v19; // [esp+1Ch] [ebp-40h] BYREF
  volatile signed __int32 *v20; // [esp+20h] [ebp-3Ch]
  int v21; // [esp+24h] [ebp-38h] BYREF
  int v22; // [esp+28h] [ebp-34h]
  int v23; // [esp+2Ch] [ebp-30h]
  int v24; // [esp+30h] [ebp-2Ch] BYREF
  volatile signed __int32 *v25; // [esp+34h] [ebp-28h]
  int *v26; // [esp+38h] [ebp-24h]
  UUID Uuid; // [esp+3Ch] [ebp-20h] BYREF
  int v28; // [esp+58h] [ebp-4h]

  v28 = 0;
  v26 = a1;
  pExceptionObject = a2;
  v23 = 0;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  sub_100073A0(a1, v3);
  v28 = 0;
  v23 = 1;
  v22 = sub_10002CD0();
  v4 = (_DWORD *)*a1;
  v5 = 0;
  v18 = 0;
  if ( *v4 == 0 )
  {
    do
    {
      if ( v5 >= v22 )
        break;
      sub_100029C0((int)&v19, v5);
      v28 = 1;
      v17 = *(_DWORD *)v19;
      sub_100015C0(&v17, &v24);
      LOBYTE(v28) = 2;
      v6 = *(_DWORD *)v24;
      v17 = *(_DWORD *)v24;
      sub_10001770(&v17, &Uuid);
      if ( sub_100079E0(pExceptionObject, &Uuid) != 0 )
      {
        v7 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v6 + 28))(v6, &v21);
        if ( v7 < 0 )
        {
          sub_10001040((wchar_t *)L"Failed to get_RevisionNumber in TUpdateIdentity::GetUpdateID()", v15);
          pExceptionObject = v7;
          _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
        }
        if ( a3 == v21 )
        {
          v8 = v20;
          v9 = v19;
          if ( v20 != nullptr )
            _InterlockedExchangeAdd(v20 + 2, 1u);
          v10 = (volatile signed __int32 *)a1[1];
          if ( v10 != nullptr && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 0 )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v10)(v10);
            if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 0 )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v10 + 4))(v10);
          }
          a1[1] = (int)v8;
          *a1 = v9;
          v5 = v18;
        }
      }
      LOBYTE(v28) = 1;
      v11 = v25;
      if ( v25 != nullptr && _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v11 + 4))(v11);
      }
      LOBYTE(v28) = 0;
      v12 = v20;
      if ( v20 != nullptr && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v12 + 4))(v12);
      }
      v13 = (_DWORD *)*a1;
      v18 = ++v5;
    }
    while ( *v13 == 0 );
  }
  return a1;
}

// Address: 0x10002CD0
int __cdecl sub_10002CD0()
{
  int v0; // esi
  volatile signed __int32 *v1; // esi
  int v3; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  sub_100028A0((int)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ChswuApp::GetUpdateCountFromSearch()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v0 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 40))(*v6, &v5);
  if ( v0 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Count in TCollection::GetCount() const", v3);
    pExceptionObject = v0;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v1 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return v5;
}

// Address: 0x10002DC0
int __thiscall sub_10002DC0(void *pExceptionObject, int a2)
{
  volatile signed __int32 *v3; // esi
  int pExceptionObjecta; // [esp+8h] [ebp-1Ch] BYREF
  int v6; // [esp+Ch] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+20h] [ebp-4h]

  sub_100029C0((int)&v6, (int)pExceptionObject);
  v8 = 0;
  if ( *(_DWORD *)v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdate is NULL - ChswuApp::GetItemName( %d, ... )", (int)pExceptionObject);
    pExceptionObjecta = -2147467261;
    _CxxThrowException(&pExceptionObjecta, (_ThrowInfo *)&_TI1J);
  }
  pExceptionObjecta = *(_DWORD *)v6;
  sub_10001480(&pExceptionObjecta, (OLECHAR *)v6, a2);
  v8 = -1;
  v3 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  return 1;
}

// Address: 0x10002EA0
BOOL __userpurge sub_10002EA0@<eax>(__int16 a1@<bx>, int *a2, volatile signed __int32 *a3)
{
  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // edi
  int v7; // eax
  BOOL v8; // edi
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  volatile signed __int32 *v14; // esi
  int v16; // [esp+10h] [ebp-2Ch]
  int v17; // [esp+20h] [ebp-1Ch] BYREF
  int pExceptionObject; // [esp+24h] [ebp-18h] BYREF
  int v19; // [esp+28h] [ebp-14h] BYREF
  volatile signed __int32 *v20; // [esp+2Ch] [ebp-10h]
  int v21; // [esp+38h] [ebp-4h]

  v21 = 0;
  v3 = *a2;
  pExceptionObject = *a2;
  sub_100013D0(&pExceptionObject, &v19);
  LOBYTE(v21) = 1;
  v4 = *(_DWORD *)v19;
  if ( (a1 & 1) != 0 )
  {
    v5 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v3 + 32))(v3, &v17);
    if ( v5 < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to get_AutoSelectOnWebSites in TUpdate::IsAutoSelected() const", v16);
      pExceptionObject = v5;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    if ( (_WORD)v17 != 0 )
      goto LABEL_22;
  }
  if ( (a1 & 2) != 0 )
  {
    v6 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v3 + 32))(v3, &v17);
    if ( v6 < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to get_AutoSelectOnWebSites in TUpdate::IsAutoSelected() const", v16);
      pExceptionObject = v6;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    if ( (_WORD)v17 == 0 )
      goto LABEL_22;
  }
  if ( (a1 & 4) == 0 )
    goto LABEL_14;
  v7 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v3 + 32))(v3, &v17);
  if ( v7 < 0 )
    sub_10001500(v7);
  if ( (_WORD)v17 == 0 && sub_10001530(&pExceptionObject) == 0 )
  {
LABEL_22:
    if ( (a1 & 0x1000) != 0 )
    {
      v9 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v3 + 64))(v3, &v17);
      if ( v9 < 0 )
      {
        sub_10001040((wchar_t *)L"Failed to get_EulaAccepted in TUpdate::EualAccepted() const", v16);
        pExceptionObject = v9;
        _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
      }
      if ( (_WORD)v17 != 0 )
        goto LABEL_31;
    }
    if ( (a1 & 0x2000) == 0 )
      goto LABEL_23;
    v10 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v3 + 64))(v3, &v17);
    if ( v10 < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to get_EulaAccepted in TUpdate::EualAccepted() const", v16);
      pExceptionObject = v10;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    if ( (_WORD)v17 == 0 )
    {
LABEL_31:
      if ( (a1 & 0x4000) != 0 )
      {
        v11 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v4 + 28))(v4, &v17);
        if ( v11 < 0 )
        {
          sub_10001040(
            (wchar_t *)L"Failed to get_CanRequestUserInput in TInstallationBehavior::CanRequestUserInput() const",
            v16);
          pExceptionObject = v11;
          _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
        }
        if ( (_WORD)v17 != 0 )
          goto LABEL_33;
      }
      if ( (a1 & 0x8000) == 0 )
        goto LABEL_32;
      v12 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v4 + 28))(v4, &v17);
      if ( v12 < 0 )
      {
        sub_10001040(
          (wchar_t *)L"Failed to get_CanRequestUserInput in TInstallationBehavior::CanRequestUserInput() const",
          v16);
        pExceptionObject = v12;
        _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
      }
      if ( (_WORD)v17 == 0 )
      {
LABEL_33:
        v13 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v4 + 32))(v4, &v17);
        if ( v13 < 0 )
        {
          sub_10001040((wchar_t *)L"Failed to get_Impact in TInstallationBehavior::GetInstallationImpact() const", v16);
          pExceptionObject = v13;
          _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
        }
        v8 = v17 == 0 || (a1 & 0x10) != 0 && v17 == 1 || (a1 & 0x20) != 0 && v17 == 2;
      }
      else
      {
LABEL_32:
        v8 = false;
      }
    }
    else
    {
LABEL_23:
      v8 = false;
    }
  }
  else
  {
LABEL_14:
    v8 = false;
  }
  LOBYTE(v21) = 0;
  v14 = v20;
  if ( v20 != nullptr && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v14)(v14);
    if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v14 + 4))(v14);
  }
  v21 = -1;
  if ( a3 != nullptr && _InterlockedExchangeAdd(a3 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))a3)(a3);
    if ( _InterlockedExchangeAdd(a3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*a3 + 4))(a3);
  }
  return v8;
}

// Address: 0x100031B0
int __stdcall sub_100031B0(_DWORD **a1)
{
  int v1; // esi
  int *v2; // eax
  int v3; // ecx
  int result; // eax
  int v5; // esi
  volatile signed __int32 *v6; // edi
  int v7; // esi
  volatile signed __int32 *v8; // esi
  volatile signed __int32 *v9; // esi
  int v10; // [esp+4h] [ebp-4Ch]
  int ArgList; // [esp+18h] [ebp-38h] BYREF
  int pExceptionObject; // [esp+1Ch] [ebp-34h] BYREF
  int v13; // [esp+20h] [ebp-30h] BYREF
  int *v14; // [esp+24h] [ebp-2Ch]
  int v15; // [esp+28h] [ebp-28h] BYREF
  int v16; // [esp+2Ch] [ebp-24h] BYREF
  int v17; // [esp+30h] [ebp-20h] BYREF
  volatile signed __int32 *v18; // [esp+34h] [ebp-1Ch]
  int *v19; // [esp+38h] [ebp-18h] BYREF
  volatile signed __int32 *v20; // [esp+3Ch] [ebp-14h]
  int v21; // [esp+4Ch] [ebp-4h]

  v1 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)**a1 + 52))(**a1);
  if ( v1 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to Clear in ChswuApp::GenerateUpdateCollection( ... )", v10);
    pExceptionObject = v1;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  sub_100028A0((int)&v19);
  v21 = 0;
  v2 = (int *)*v19;
  if ( *v19 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ChswuApp::GenerateUpdateCollection( ... )", v10);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v3 = *v2;
  v13 = *v19;
  result = (*(int (__stdcall **)(int *, int *))(v3 + 40))(v2, &pExceptionObject);
  v5 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Count in TCollection::GetCount() const", v10);
    ArgList = v5;
    _CxxThrowException(&ArgList, (_ThrowInfo *)&_TI1J);
  }
  v15 = ::ArgList;
  for ( ArgList = 0; ArgList < pExceptionObject; ++ArgList )
  {
    sub_10006120((int)&v13, (int)&v17, ArgList);
    LOBYTE(v21) = 1;
    v6 = v18;
    v14 = (int *)v17;
    if ( v18 != nullptr )
      _InterlockedExchangeAdd(v18 + 2, 1u);
    if ( sub_10002EA0(v15, v14, v6) )
    {
      v7 = (*(int (__stdcall **)(_DWORD, _DWORD, int *))(*(_DWORD *)**a1 + 48))(**a1, *(_DWORD *)v17, &v16);
      if ( v7 < 0 )
      {
        sub_10001040((wchar_t *)L"Failed to Add in ChswuApp::GenerateUpdateCollection( ... )", v10);
        v15 = v7;
        _CxxThrowException(&v15, (_ThrowInfo *)&_TI1J);
      }
    }
    LOBYTE(v21) = 0;
    v8 = v18;
    if ( v18 != nullptr && _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v8 + 4))(v8);
    }
    result = ArgList + 1;
  }
  v21 = -1;
  v9 = v20;
  if ( v20 != nullptr && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v9)(v9);
    result = (int)(v9 + 3);
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 0 )
      return (*(int (__thiscall **)(volatile signed __int32 *))(*v9 + 4))(v9);
  }
  return result;
}

// Address: 0x10003410
int __usercall sub_10003410@<eax>(int a1@<eax>)
{
  int v2; // eax
  LPVOID *v3; // eax
  HRESULT Instance; // edi
  int v6; // [esp+0h] [ebp-Ch]
  int pExceptionObject; // [esp+8h] [ebp-4h] BYREF

  pExceptionObject = 0;
  v2 = sub_100020A0();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2) == 0 )
  {
    sub_10001040((wchar_t *)L"Search was not ended. - ChswuApp::GetUpdateCollection()", v6);
    pExceptionObject = -2147467259;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v3 = dword_10041708;
  if ( *dword_10041708 != nullptr )
  {
    if ( dword_100416EC == 0 )
      goto LABEL_11;
  }
  else
  {
    Instance = CoCreateInstance(&stru_1002B90C, nullptr, 1u, &stru_1002B64C, dword_10041708);
    if ( Instance < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to CoCreateInstance in ChswuApp::GetUpdateCollection()", v6);
      pExceptionObject = Instance;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    v3 = dword_10041708;
    dword_100416EC = 1;
  }
  if ( (ArgList & 8) != 0 )
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)*v3 + 52))(*v3);
  else
    sub_100031B0(&dword_10041708);
  dword_100416EC = 0;
LABEL_11:
  sub_10006640();
  return a1;
}

// Address: 0x100034F0
int __stdcall sub_100034F0(int a1, int pExceptionObject)
{
  volatile signed __int32 *v2; // esi
  int v4; // [esp+0h] [ebp-2Ch]
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  int v6; // [esp+14h] [ebp-18h]
  int *v7; // [esp+18h] [ebp-14h] BYREF
  volatile signed __int32 *v8; // [esp+1Ch] [ebp-10h]
  int v9; // [esp+28h] [ebp-4h]

  v6 = 0;
  sub_10003410((int)&v7);
  v9 = 1;
  if ( *v7 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ChswuApp::GetUpdateItem( ... )", v4);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v5 = *v7;
  sub_10006120((int)&v5, a1, pExceptionObject);
  v6 = 1;
  LOBYTE(v9) = 0;
  v2 = v8;
  if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
  }
  return a1;
}

// Address: 0x100035D0
int *__userpurge sub_100035D0@<eax>(int *a1@<edi>, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // esi
  volatile signed __int32 *v8; // ebp
  int v9; // ebx
  volatile signed __int32 *v10; // esi
  volatile signed __int32 *v11; // esi
  volatile signed __int32 *v12; // esi
  _DWORD *v13; // eax
  int v15; // [esp+0h] [ebp-5Ch]
  int pExceptionObject; // [esp+10h] [ebp-4Ch] BYREF
  int v17; // [esp+14h] [ebp-48h] BYREF
  int v18; // [esp+18h] [ebp-44h]
  int v19; // [esp+1Ch] [ebp-40h] BYREF
  volatile signed __int32 *v20; // [esp+20h] [ebp-3Ch]
  int v21; // [esp+24h] [ebp-38h] BYREF
  int v22; // [esp+28h] [ebp-34h]
  int v23; // [esp+2Ch] [ebp-30h]
  int v24; // [esp+30h] [ebp-2Ch] BYREF
  volatile signed __int32 *v25; // [esp+34h] [ebp-28h]
  int *v26; // [esp+38h] [ebp-24h]
  UUID Uuid; // [esp+3Ch] [ebp-20h] BYREF
  int v28; // [esp+58h] [ebp-4h]

  v28 = 0;
  v26 = a1;
  pExceptionObject = a2;
  v23 = 0;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  sub_100073A0(a1, v3);
  v28 = 0;
  v23 = 1;
  v22 = sub_10003A00();
  v4 = (_DWORD *)*a1;
  v5 = 0;
  v18 = 0;
  if ( *v4 == 0 )
  {
    do
    {
      if ( v5 >= v22 )
        break;
      sub_100034F0((int)&v19, v5);
      v28 = 1;
      v17 = *(_DWORD *)v19;
      sub_100015C0(&v17, &v24);
      LOBYTE(v28) = 2;
      v6 = *(_DWORD *)v24;
      v17 = *(_DWORD *)v24;
      sub_10001770(&v17, &Uuid);
      if ( sub_100079E0(pExceptionObject, &Uuid) != 0 )
      {
        v7 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v6 + 28))(v6, &v21);
        if ( v7 < 0 )
        {
          sub_10001040((wchar_t *)L"Failed to get_RevisionNumber in TUpdateIdentity::GetUpdateID()", v15);
          pExceptionObject = v7;
          _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
        }
        if ( a3 == v21 )
        {
          v8 = v20;
          v9 = v19;
          if ( v20 != nullptr )
            _InterlockedExchangeAdd(v20 + 2, 1u);
          v10 = (volatile signed __int32 *)a1[1];
          if ( v10 != nullptr && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 0 )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v10)(v10);
            if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 0 )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v10 + 4))(v10);
          }
          a1[1] = (int)v8;
          *a1 = v9;
          v5 = v18;
        }
      }
      LOBYTE(v28) = 1;
      v11 = v25;
      if ( v25 != nullptr && _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v11 + 4))(v11);
      }
      LOBYTE(v28) = 0;
      v12 = v20;
      if ( v20 != nullptr && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v12 + 4))(v12);
      }
      v13 = (_DWORD *)*a1;
      v18 = ++v5;
    }
    while ( *v13 == 0 );
  }
  return a1;
}

// Address: 0x10003800
int __userpurge sub_10003800@<eax>(int a1@<ebx>, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // esi
  volatile signed __int32 *v5; // esi
  volatile signed __int32 *v6; // esi
  volatile signed __int32 *v7; // esi
  volatile signed __int32 *v8; // esi
  int v10; // [esp+0h] [ebp-4Ch]
  int pExceptionObject; // [esp+Ch] [ebp-40h] BYREF
  int v12; // [esp+10h] [ebp-3Ch] BYREF
  int v13; // [esp+14h] [ebp-38h] BYREF
  volatile signed __int32 *v14; // [esp+18h] [ebp-34h]
  int v15; // [esp+1Ch] [ebp-30h] BYREF
  volatile signed __int32 *v16; // [esp+20h] [ebp-2Ch]
  int v17; // [esp+24h] [ebp-28h] BYREF
  UUID Uuid; // [esp+28h] [ebp-24h] BYREF
  int v19; // [esp+48h] [ebp-4h]

  v2 = 0;
  pExceptionObject = sub_10003A00();
  if ( pExceptionObject > 0 )
  {
    while ( 1 )
    {
      sub_100034F0((int)&v15, v2);
      v19 = 0;
      v12 = *(_DWORD *)v15;
      sub_100015C0(&v12, &v13);
      LOBYTE(v19) = 1;
      v3 = *(_DWORD *)v13;
      v12 = *(_DWORD *)v13;
      sub_10001770(&v12, &Uuid);
      if ( sub_100079E0(a1, &Uuid) != 0 )
      {
        v4 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v3 + 28))(v3, &v17);
        if ( v4 < 0 )
        {
          sub_10001040((wchar_t *)L"Failed to get_RevisionNumber in TUpdateIdentity::GetUpdateID()", v10);
          pExceptionObject = v4;
          _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
        }
        if ( a2 == v17 )
          break;
      }
      LOBYTE(v19) = 0;
      v5 = v14;
      if ( v14 != nullptr && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
      }
      v19 = -1;
      v6 = v16;
      if ( v16 != nullptr && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
      }
      if ( ++v2 >= pExceptionObject )
        return v2;
    }
    LOBYTE(v19) = 0;
    v7 = v14;
    if ( v14 != nullptr && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v7 + 4))(v7);
    }
    v19 = -1;
    v8 = v16;
    if ( v16 != nullptr && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v8 + 4))(v8);
    }
  }
  return v2;
}

// Address: 0x10003A00
int sub_10003A00()
{
  int v0; // esi
  volatile signed __int32 *v1; // esi
  int v3; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  sub_10003410((int)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ChswuApp::GetUpdateCount()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v0 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 40))(*v6, &v5);
  if ( v0 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Count in TCollection::GetCount() const", v3);
    pExceptionObject = v0;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v1 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return v5;
}

// Address: 0x10003AF0
int __thiscall sub_10003AF0(void *pExceptionObject, int a2)
{
  volatile signed __int32 *v3; // esi
  int pExceptionObjecta; // [esp+8h] [ebp-1Ch] BYREF
  int v6; // [esp+Ch] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+20h] [ebp-4h]

  sub_100034F0((int)&v6, (int)pExceptionObject);
  v8 = 0;
  if ( *(_DWORD *)v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdate is NULL - ChswuApp::GetItemName( %d, ... )", (int)pExceptionObject);
    pExceptionObjecta = -2147467261;
    _CxxThrowException(&pExceptionObjecta, (_ThrowInfo *)&_TI1J);
  }
  pExceptionObjecta = *(_DWORD *)v6;
  sub_10001480(&pExceptionObjecta, (OLECHAR *)v6, a2);
  v8 = -1;
  v3 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  return 1;
}

// Address: 0x10003BC0
int __stdcall sub_10003BC0(_DWORD **a1)
{
  int v1; // esi
  int v2; // edi
  volatile signed __int32 *v3; // esi
  int v5; // [esp+0h] [ebp-34h]
  int v6; // [esp+14h] [ebp-20h] BYREF
  int pExceptionObject; // [esp+18h] [ebp-1Ch] BYREF
  _DWORD *v8; // [esp+1Ch] [ebp-18h] BYREF
  volatile signed __int32 *v9; // [esp+20h] [ebp-14h]
  int v10; // [esp+30h] [ebp-4h]

  v6 = -1;
  sub_10003410((int)&v8);
  v10 = 0;
  if ( *v8 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ChswuApp::AddUpdateItem( ... )", v5);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v1 = (*(int (__stdcall **)(_DWORD, _DWORD, int *))(*(_DWORD *)*v8 + 48))(*v8, **a1, &v6);
  if ( v1 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to Add in ChswuApp::AddUpdateItem( ... )", v5);
    pExceptionObject = v1;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v2 = v6;
  v10 = -1;
  v3 = v9;
  if ( v9 != nullptr && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  return v2;
}

// Address: 0x10003CC0
int __usercall sub_10003CC0@<eax>(int a1@<edi>)
{
  int result; // eax
  int v2; // esi
  volatile signed __int32 *v3; // esi
  int v4; // [esp+0h] [ebp-24h]
  int pExceptionObject; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD *v6; // [esp+Ch] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+20h] [ebp-4h]

  sub_10003410((int)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ChswuApp::RemoveUpdateItem( ... )", v4);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  result = (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)*v6 + 64))(*v6, a1);
  v2 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to RemoveAt in ChswuApp::RemoveUpdateItem( %d )", a1);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v3 = v7;
  if ( v7 != nullptr )
  {
    result = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    if ( result == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
    }
  }
  return result;
}

// Address: 0x10003DB0
int sub_10003DB0()
{
  int result; // eax
  int v1; // esi
  volatile signed __int32 *v2; // esi
  int v3; // [esp+0h] [ebp-24h]
  int pExceptionObject; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD *v5; // [esp+Ch] [ebp-18h] BYREF
  volatile signed __int32 *v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+20h] [ebp-4h]

  sub_10003410((int)&v5);
  v7 = 0;
  if ( *v5 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ChswuApp::ClearUpdateItem()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 52))(*v5);
  v1 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to Clear in ChswuApp::ClearUpdateItem()", v3);
    pExceptionObject = v1;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v7 = -1;
  v2 = v6;
  if ( v6 != nullptr )
  {
    result = _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    if ( result == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
  }
  return result;
}

// Address: 0x10003EA0
int sub_10003EA0()
{
  int v0; // eax
  int (__stdcall *v1)(int, int *); // edx
  int result; // eax
  int v3; // esi
  int i; // ebp
  int v5; // esi
  int v6; // edi
  int v7; // esi
  volatile signed __int32 *v8; // esi
  volatile signed __int32 *v9; // esi
  int v10; // [esp+0h] [ebp-3Ch]
  int v11; // [esp+14h] [ebp-28h] BYREF
  int pExceptionObject; // [esp+18h] [ebp-24h] BYREF
  int v13; // [esp+1Ch] [ebp-20h] BYREF
  int v14; // [esp+20h] [ebp-1Ch] BYREF
  volatile signed __int32 *v15; // [esp+24h] [ebp-18h]
  int *v16; // [esp+28h] [ebp-14h] BYREF
  volatile signed __int32 *v17; // [esp+2Ch] [ebp-10h]
  int v18; // [esp+38h] [ebp-4h]

  sub_10003410((int)&v16);
  v18 = 0;
  v0 = *v16;
  if ( *v16 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ChswuApp::PreUpdate()", v10);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v1 = *(int (__stdcall **)(int, int *))(*(_DWORD *)v0 + 40);
  v13 = *v16;
  result = v1(v0, &pExceptionObject);
  v3 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Count in TCollection::GetCount() const", v10);
    v11 = v3;
    _CxxThrowException(&v11, (_ThrowInfo *)&_TI1J);
  }
  for ( i = 0; i < pExceptionObject; ++i )
  {
    sub_10006120((int)&v13, (int)&v14, i);
    LOBYTE(v18) = 1;
    result = v14;
    v5 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 == 0 )
    {
      sub_10001040((wchar_t *)L"IUpdate( %d ) is NULL - ChswuApp::PreUpdate()", i);
      v13 = -2147467261;
      _CxxThrowException(&v13, (_ThrowInfo *)&_TI1J);
    }
    if ( (ArgList & 0x10000) != 0 )
    {
      v6 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v5 + 64))(v5, &v11);
      if ( v6 < 0 )
      {
        sub_10001040((wchar_t *)L"Failed to get_EulaAccepted in TUpdate::EualAccepted() const", v10);
        v13 = v6;
        _CxxThrowException(&v13, (_ThrowInfo *)&_TI1J);
      }
      result = (__int16)v11;
      if ( (_WORD)v11 == 0 )
      {
        result = (*(int (__stdcall **)(int))(*(_DWORD *)v5 + 188))(v5);
        v7 = result;
        if ( result < 0 )
        {
          sub_10001040((wchar_t *)L"Failed to AcceptEula in TUpdate::AcceptEula()", v10);
          v13 = v7;
          _CxxThrowException(&v13, (_ThrowInfo *)&_TI1J);
        }
      }
    }
    LOBYTE(v18) = 0;
    v8 = v15;
    if ( v15 != nullptr )
    {
      result = (int)(v15 + 2);
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 0 )
      {
        result = (**(int (__thiscall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 0 )
          result = (*(int (__thiscall **)(volatile signed __int32 *))(*v8 + 4))(v8);
      }
    }
  }
  v18 = -1;
  v9 = v17;
  if ( v17 != nullptr )
  {
    result = (int)(v17 + 2);
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v9 + 4))(v9);
    }
  }
  return result;
}

// Address: 0x100040A0
int sub_100040A0()
{
  int result; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // [esp-8h] [ebp-2Ch] BYREF
  int v6; // [esp-4h] [ebp-28h]
  int *v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+20h] [ebp-4h]

  result = dword_10041710;
  if ( dword_10041710 == 0 )
  {
    v1 = operator new(0x24u);
    v2 = v1;
    v7 = v1;
    v8 = 0;
    if ( v1 != nullptr )
    {
      sub_10001AC0(v1);
      *v2 = &CUpdateDownloadAndInstallation::`vftable';
      v2[7] = 0;
      v2[8] = 0;
    }
    else
    {
      v2 = nullptr;
    }
    v8 = -1;
    dword_10041710 = (int)v2;
    v7 = &v5;
    v3 = sub_10004C90();
    v4 = (int *)operator new(4u);
    if ( v4 != nullptr )
      *v4 = v3;
    else
      v4 = nullptr;
    v5 = 0;
    v6 = 0;
    sub_10007060(&v5, v4);
    sub_10005C60(v5, v6);
    return dword_10041710;
  }
  return result;
}

// Address: 0x10004170
int sub_10004170()
{
  int v0; // eax
  int result; // eax
  int v2; // esi
  _DWORD **v3; // eax
  volatile signed __int32 *v4; // esi
  int v5; // [esp+Ch] [ebp-18h] BYREF
  volatile signed __int32 *v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+20h] [ebp-4h]

  v0 = sub_100040A0();
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 16))(v0);
  if ( result == 0 )
  {
    sub_10003EA0();
    v2 = sub_100040A0();
    v3 = (_DWORD **)sub_10003410((int)&v5);
    v7 = 0;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 4))(v2, **v3);
    v7 = -1;
    result = (int)v6;
    if ( v6 != nullptr )
    {
      v4 = v6;
      result = (int)(v6 + 2);
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 0 )
      {
        result = (**(int (__thiscall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
          return (*(int (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
      }
    }
  }
  return result;
}

// Address: 0x10004230
int sub_10004230()
{
  LPVOID *v0; // eax
  HRESULT Instance; // esi
  int v2; // esi
  int v4; // [esp+4h] [ebp-Ch]
  HRESULT pExceptionObject; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v0 = ppv;
  if ( *ppv == nullptr )
  {
    Instance = CoCreateInstance(&rclsid, nullptr, 1u, &riid, ppv);
    if ( Instance < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to CoCreateInstance in ChswuApp::GetUpdateSession()", v4);
      pExceptionObject = Instance;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    v0 = ppv;
  }
  v2 = (*(int (__stdcall **)(LPVOID, int *))(*(_DWORD *)*v0 + 52))(*v0, &v6);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to CreateUpdateDownloader", v4);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v6;
}

// Address: 0x100042C0
int sub_100042C0()
{
  int result; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // [esp-8h] [ebp-2Ch] BYREF
  int v6; // [esp-4h] [ebp-28h]
  int *v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+20h] [ebp-4h]

  result = dword_10041714;
  if ( dword_10041714 == 0 )
  {
    v1 = operator new(0x24u);
    v2 = v1;
    v7 = v1;
    v8 = 0;
    if ( v1 != nullptr )
    {
      sub_100019C0(v1);
      *v2 = &CUpdateDownloader::`vftable';
      v2[7] = 0;
      v2[8] = 0;
    }
    else
    {
      v2 = nullptr;
    }
    v8 = -1;
    dword_10041714 = (int)v2;
    v7 = &v5;
    v3 = sub_10004230();
    v4 = (int *)operator new(4u);
    if ( v4 != nullptr )
      *v4 = v3;
    else
      v4 = nullptr;
    v5 = 0;
    v6 = 0;
    sub_10006DF0(&v5, v4);
    sub_10005C60(v5, v6);
    return dword_10041714;
  }
  return result;
}

// Address: 0x10004390
int __usercall sub_10004390@<eax>(int a1@<esi>)
{
  sub_100042C0();
  sub_10005D30(0);
  return a1;
}

// Address: 0x100043B0
int __usercall sub_100043B0@<eax>(int a1@<esi>)
{
  sub_100042C0();
  sub_10005D50(0);
  return a1;
}

// Address: 0x100043D0
int __stdcall sub_100043D0(int a1)
{
  int v1; // eax
  volatile signed __int32 *v2; // esi
  int v4; // [esp+0h] [ebp-30h]
  int pExceptionObject; // [esp+10h] [ebp-20h] BYREF
  int v6; // [esp+14h] [ebp-1Ch]
  int *v7; // [esp+18h] [ebp-18h] BYREF
  volatile signed __int32 *v8; // [esp+1Ch] [ebp-14h]
  int v9; // [esp+2Ch] [ebp-4h]

  v6 = 0;
  v1 = sub_100042C0();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 16))(v1) == 0 )
  {
    sub_10001040((wchar_t *)L"Download was not begun. - ChswuApp::GetDownloadProgress()", v4);
    pExceptionObject = -2147467259;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  sub_10004390((int)&v7);
  v9 = 1;
  if ( *v7 == 0 )
  {
    sub_10001040((wchar_t *)L"IDownloadJob is NULL - ChswuApp::GetDownloadProgress()", v4);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  pExceptionObject = *v7;
  sub_100061E0((int)&pExceptionObject, a1);
  v6 = 1;
  LOBYTE(v9) = 0;
  v2 = v8;
  if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
  }
  return a1;
}

// Address: 0x100044E0
_DWORD *__stdcall sub_100044E0(_DWORD *a1, int ArgList)
{
  _DWORD *v2; // eax
  int v3; // eax
  volatile signed __int32 *v4; // esi
  volatile signed __int32 *v5; // esi
  volatile signed __int32 *v6; // esi
  int v8; // [esp+0h] [ebp-34h]
  int pExceptionObject; // [esp+14h] [ebp-20h] BYREF
  int *v10; // [esp+18h] [ebp-1Ch] BYREF
  volatile signed __int32 *v11; // [esp+1Ch] [ebp-18h]
  int v12; // [esp+20h] [ebp-14h] BYREF
  volatile signed __int32 *v13; // [esp+24h] [ebp-10h]
  int v14; // [esp+30h] [ebp-4h]

  v14 = 0;
  v2 = operator new(4u);
  if ( v2 != nullptr )
    *v2 = 0;
  else
    v2 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  sub_10007470(a1, v2);
  v14 = 0;
  v3 = sub_100042C0();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3) != 0 )
  {
    sub_100043B0((int)&v10);
    v14 = 1;
    if ( *v10 == 0 )
    {
      sub_10001040((wchar_t *)L"IDownloadResult is NULL - ChswuApp::GetUpdateDownloadResult( ... )", v8);
      pExceptionObject = -2147467261;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    pExceptionObject = *v10;
    sub_10006290((int)&pExceptionObject, (int)&v12, ArgList);
    LOBYTE(v14) = 2;
    sub_10005180();
    LOBYTE(v14) = 1;
    if ( v13 != nullptr )
    {
      v4 = v13;
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
      }
    }
    LOBYTE(v14) = 0;
    v5 = v11;
    if ( v11 != nullptr && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
LABEL_24:
        (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  else
  {
    sub_100043D0((int)&v10);
    v14 = 3;
    if ( *v10 == 0 )
    {
      sub_10001040((wchar_t *)L"IDownloadProgress is NULL - ChswuApp::GetUpdateDownloadResult( ... )", v8);
      pExceptionObject = -2147467261;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    pExceptionObject = *v10;
    sub_10006350((int)&pExceptionObject, (int)&v12, ArgList);
    LOBYTE(v14) = 4;
    sub_10005180();
    LOBYTE(v14) = 3;
    if ( v13 != nullptr )
    {
      v6 = v13;
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
      }
    }
    LOBYTE(v14) = 0;
    v5 = v11;
    if ( v11 != nullptr && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
        goto LABEL_24;
    }
  }
  return a1;
}

// Address: 0x10004720
int sub_10004720()
{
  int v0; // eax
  int result; // eax
  int v2; // esi
  _DWORD **v3; // eax
  volatile signed __int32 *v4; // esi
  int v5; // [esp+Ch] [ebp-18h] BYREF
  volatile signed __int32 *v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+20h] [ebp-4h]

  v0 = sub_100042C0();
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 16))(v0);
  if ( result == 0 )
  {
    sub_10003EA0();
    v2 = sub_100042C0();
    v3 = (_DWORD **)sub_10003410((int)&v5);
    v7 = 0;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 4))(v2, **v3);
    v7 = -1;
    result = (int)v6;
    if ( v6 != nullptr )
    {
      v4 = v6;
      result = (int)(v6 + 2);
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 0 )
      {
        result = (**(int (__thiscall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
          return (*(int (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
      }
    }
  }
  return result;
}

// Address: 0x100047E0
int sub_100047E0()
{
  int v0; // esi
  volatile signed __int32 *v1; // esi
  int v3; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  sub_100043D0((int)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IDownloadProgress is NULL - ChswuApp::GetDownloadPercent()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v0 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 40))(*v6, &v5);
  if ( v0 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_PercentComplete in TProgress::GetPercentComplete()", v3);
    pExceptionObject = v0;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v1 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return v5;
}

// Address: 0x100048D0
int sub_100048D0()
{
  int v0; // esi
  volatile signed __int32 *v1; // esi
  int v3; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  sub_100043D0((int)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IDownloadProgress is NULL - ChswuApp::GetDownloadCurrentIndex()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v0 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 36))(*v6, &v5);
  if ( v0 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_CurrentUpdateIndex in TProgress::GetCurrentUpdateIndex()", v3);
    pExceptionObject = v0;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v1 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return v5;
}

// Address: 0x100049C0
int sub_100049C0()
{
  int v0; // esi
  volatile signed __int32 *v1; // esi
  int v3; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  sub_100043D0((int)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IDownloadProgress is NULL - ChswuApp::GetDownloadCurrentPercent()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v0 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 60))(*v6, &v5);
  if ( v0 < 0 )
  {
    sub_10001040(
      (wchar_t *)L"Failed to get_CurrentUpdatePercentComplete in TProgress::GetCurrentUpdatePercentComplete()",
      v3);
    pExceptionObject = v0;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v1 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return v5;
}

// Address: 0x10004AB0
int __thiscall sub_10004AB0(void *ArgList)
{
  int v2; // esi
  volatile signed __int32 *v3; // esi
  int v5; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v7; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+28h] [ebp-4h]

  sub_100044E0(&v8, (int)ArgList);
  v10 = 0;
  if ( *v8 == 0 )
  {
    sub_10001040(
      (wchar_t *)L"IUpdateDownloadResult is NULL - ChswuApp::GetUpdateDownloadResultCode( %d )",
      (int)ArgList);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v2 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v8 + 32))(*v8, &v7);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_ResultCode in TResult::GetResultCode() const", v5);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v10 = -1;
  v3 = v9;
  if ( v9 != nullptr && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  return v7;
}

// Address: 0x10004BA0
int __thiscall sub_10004BA0(void *ArgList)
{
  int v2; // esi
  volatile signed __int32 *v3; // esi
  int v5; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v7; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+28h] [ebp-4h]

  sub_100044E0(&v8, (int)ArgList);
  v10 = 0;
  if ( *v8 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateDownloadResult is NULL - ChswuApp::GetUpdateDownloadHResult( %d )", (int)ArgList);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v2 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v8 + 28))(*v8, &v7);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_HResult in TUpdateResult::GetHResult() const", v5);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v10 = -1;
  v3 = v9;
  if ( v9 != nullptr && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  return v7;
}

// Address: 0x10004C90
int sub_10004C90()
{
  LPVOID *v0; // eax
  HRESULT Instance; // esi
  int v2; // esi
  int v4; // [esp+4h] [ebp-Ch]
  HRESULT pExceptionObject; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v0 = ppv;
  if ( *ppv == nullptr )
  {
    Instance = CoCreateInstance(&rclsid, nullptr, 1u, &riid, ppv);
    if ( Instance < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to CoCreateInstance in ChswuApp::GetUpdateSession()", v4);
      pExceptionObject = Instance;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    v0 = ppv;
  }
  v2 = (*(int (__stdcall **)(LPVOID, int *))(*(_DWORD *)*v0 + 56))(*v0, &v6);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to CreateUpdateInstaller", v4);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v6;
}

// Address: 0x10004D20
int sub_10004D20()
{
  int result; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // [esp-8h] [ebp-2Ch] BYREF
  int v6; // [esp-4h] [ebp-28h]
  int *v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+20h] [ebp-4h]

  result = dword_10041718;
  if ( dword_10041718 == 0 )
  {
    v1 = operator new(0x24u);
    v2 = v1;
    v7 = v1;
    v8 = 0;
    if ( v1 != nullptr )
    {
      sub_10001AC0(v1);
      *v2 = &CUpdateInstaller::`vftable';
      v2[7] = 0;
      v2[8] = 0;
    }
    else
    {
      v2 = nullptr;
    }
    v8 = -1;
    dword_10041718 = (int)v2;
    v7 = &v5;
    v3 = sub_10004C90();
    v4 = (int *)operator new(4u);
    if ( v4 != nullptr )
      *v4 = v3;
    else
      v4 = nullptr;
    v5 = 0;
    v6 = 0;
    sub_10007060(&v5, v4);
    sub_10005C60(v5, v6);
    return dword_10041718;
  }
  return result;
}

// Address: 0x10004DF0
int __usercall sub_10004DF0@<eax>(int a1@<esi>)
{
  sub_10004D20();
  sub_10005D30(0);
  return a1;
}

// Address: 0x10004E10
int __usercall sub_10004E10@<eax>(int a1@<esi>)
{
  sub_10004D20();
  sub_10005D50(0);
  return a1;
}

// Address: 0x10004E30
int __stdcall sub_10004E30(int a1)
{
  int v1; // eax
  volatile signed __int32 *v2; // esi
  int v4; // [esp+0h] [ebp-30h]
  int pExceptionObject; // [esp+10h] [ebp-20h] BYREF
  int v6; // [esp+14h] [ebp-1Ch]
  int *v7; // [esp+18h] [ebp-18h] BYREF
  volatile signed __int32 *v8; // [esp+1Ch] [ebp-14h]
  int v9; // [esp+2Ch] [ebp-4h]

  v6 = 0;
  v1 = sub_10004D20();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 16))(v1) == 0 )
  {
    sub_10001040((wchar_t *)L"Installation was not begun. - ChswuApp::GetInstallationProgress()", v4);
    pExceptionObject = -2147467259;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  sub_10004DF0((int)&v7);
  v9 = 1;
  if ( *v7 == 0 )
  {
    sub_10001040((wchar_t *)L"IInstallationJob is NULL - ChswuApp::GetInstallationProgress()", v4);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  pExceptionObject = *v7;
  sub_10006410((int)&pExceptionObject, a1);
  v6 = 1;
  LOBYTE(v9) = 0;
  v2 = v8;
  if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
  }
  return a1;
}

// Address: 0x10004F40
_DWORD *__stdcall sub_10004F40(_DWORD *a1, int ArgList)
{
  _DWORD *v2; // eax
  int v3; // eax
  volatile signed __int32 *v4; // esi
  volatile signed __int32 *v5; // esi
  volatile signed __int32 *v6; // esi
  int v8; // [esp+0h] [ebp-34h]
  int pExceptionObject; // [esp+14h] [ebp-20h] BYREF
  int *v10; // [esp+18h] [ebp-1Ch] BYREF
  volatile signed __int32 *v11; // [esp+1Ch] [ebp-18h]
  int v12; // [esp+20h] [ebp-14h] BYREF
  volatile signed __int32 *v13; // [esp+24h] [ebp-10h]
  int v14; // [esp+30h] [ebp-4h]

  v14 = 0;
  v2 = operator new(4u);
  if ( v2 != nullptr )
    *v2 = 0;
  else
    v2 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  sub_10007540(a1, v2);
  v14 = 0;
  v3 = sub_10004D20();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3) != 0 )
  {
    sub_10004E10((int)&v10);
    v14 = 1;
    if ( *v10 == 0 )
    {
      sub_10001040((wchar_t *)L"IInstallationResult is NULL - ChswuApp::GetUpdateInstallationResult( ... )", v8);
      pExceptionObject = -2147467261;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    pExceptionObject = *v10;
    sub_100064C0((int)&pExceptionObject, (int)&v12, ArgList);
    LOBYTE(v14) = 2;
    sub_10005180();
    LOBYTE(v14) = 1;
    if ( v13 != nullptr )
    {
      v4 = v13;
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
      }
    }
    LOBYTE(v14) = 0;
    v5 = v11;
    if ( v11 != nullptr && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
LABEL_24:
        (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  else
  {
    sub_10004E30((int)&v10);
    v14 = 3;
    if ( *v10 == 0 )
    {
      sub_10001040((wchar_t *)L"IInstallationProgress is NULL - ChswuApp::GetUpdateInstallationResult( ... )", v8);
      pExceptionObject = -2147467261;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
    pExceptionObject = *v10;
    sub_10006580((int)&pExceptionObject, (int)&v12, ArgList);
    LOBYTE(v14) = 4;
    sub_10005180();
    LOBYTE(v14) = 3;
    if ( v13 != nullptr )
    {
      v6 = v13;
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v6 + 4))(v6);
      }
    }
    LOBYTE(v14) = 0;
    v5 = v11;
    if ( v11 != nullptr && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
        goto LABEL_24;
    }
  }
  return a1;
}

// Address: 0x10005180
_DWORD *__usercall sub_10005180@<eax>(int *a1@<eax>, _DWORD *a2@<ebx>)
{
  int v2; // ebp
  int v3; // edi
  volatile signed __int32 *v4; // esi

  v2 = *a1;
  v3 = a1[1];
  if ( v3 != 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 1u);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 != nullptr && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
  }
  a2[1] = v3;
  *a2 = v2;
  return a2;
}

// Address: 0x100051E0
int sub_100051E0()
{
  int v0; // eax
  int result; // eax
  int v2; // esi
  _DWORD **v3; // eax
  volatile signed __int32 *v4; // esi
  int v5; // [esp+Ch] [ebp-18h] BYREF
  volatile signed __int32 *v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+20h] [ebp-4h]

  v0 = sub_10004D20();
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 16))(v0);
  if ( result == 0 )
  {
    v2 = sub_10004D20();
    v3 = (_DWORD **)sub_10003410((int)&v5);
    v7 = 0;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 4))(v2, **v3);
    v7 = -1;
    result = (int)v6;
    if ( v6 != nullptr )
    {
      v4 = v6;
      result = (int)(v6 + 2);
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 0 )
      {
        result = (**(int (__thiscall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
          return (*(int (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
      }
    }
  }
  return result;
}

// Address: 0x10005290
int sub_10005290()
{
  int v0; // esi
  volatile signed __int32 *v1; // esi
  int v3; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  sub_10004E30((int)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IInstallationProgress is NULL - ChswuApp::GetInstallationPercent()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v0 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 36))(*v6, &v5);
  if ( v0 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_PercentComplete in TProgress::GetPercentComplete()", v3);
    pExceptionObject = v0;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v1 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return v5;
}

// Address: 0x10005380
int sub_10005380()
{
  int v0; // esi
  volatile signed __int32 *v1; // esi
  int v3; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  sub_10004E30((int)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IInstallationProgress is NULL - ChswuApp::GetInstallationCurrentIndex()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v0 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 28))(*v6, &v5);
  if ( v0 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_CurrentUpdateIndex in TProgress::GetCurrentUpdateIndex()", v3);
    pExceptionObject = v0;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v1 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return v5;
}

// Address: 0x10005470
int sub_10005470()
{
  int v0; // esi
  volatile signed __int32 *v1; // esi
  int v3; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  sub_10004E30((int)&v6);
  v8 = 0;
  if ( *v6 == 0 )
  {
    sub_10001040((wchar_t *)L"IInstallationProgress is NULL - ChswuApp::GetInstallationCurrentPercent()", v3);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v0 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v6 + 32))(*v6, &v5);
  if ( v0 < 0 )
  {
    sub_10001040(
      (wchar_t *)L"Failed to get_CurrentUpdatePercentComplete in TProgress::GetCurrentUpdatePercentComplete()",
      v3);
    pExceptionObject = v0;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = -1;
  v1 = v7;
  if ( v7 != nullptr && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v1 + 4))(v1);
  }
  return v5;
}

// Address: 0x10005560
int __thiscall sub_10005560(void *ArgList)
{
  int v2; // esi
  volatile signed __int32 *v3; // esi
  int v5; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v7; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+28h] [ebp-4h]

  sub_10004F40(&v8, (int)ArgList);
  v10 = 0;
  if ( *v8 == 0 )
  {
    sub_10001040(
      (wchar_t *)L"IUpdateInstallationResult is NULL - ChswuApp::GetUpdateInstallationResultCode( %d )",
      (int)ArgList);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v2 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v8 + 36))(*v8, &v7);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_ResultCode in TResult::GetResultCode() const", v5);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v10 = -1;
  v3 = v9;
  if ( v9 != nullptr && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  return v7;
}

// Address: 0x10005650
int __thiscall sub_10005650(void *ArgList)
{
  int v2; // esi
  volatile signed __int32 *v3; // esi
  int v5; // [esp+0h] [ebp-2Ch]
  int pExceptionObject; // [esp+Ch] [ebp-20h] BYREF
  int v7; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-18h] BYREF
  volatile signed __int32 *v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+28h] [ebp-4h]

  sub_10004F40(&v8, (int)ArgList);
  v10 = 0;
  if ( *v8 == 0 )
  {
    sub_10001040(
      (wchar_t *)L"IUpdateInstallationResult is NULL - ChswuApp::GetUpdateInstallationHResult( %d )",
      (int)ArgList);
    pExceptionObject = -2147467261;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v2 = (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v8 + 28))(*v8, &v7);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_HResult in TUpdateResult::GetHResult() const", v5);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v10 = -1;
  v3 = v9;
  if ( v9 != nullptr && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v3)(v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3);
  }
  return v7;
}

// Address: 0x10005740
int sub_10005740()
{
  _DWORD *v0; // eax
  LPVOID *v1; // edi
  HRESULT Instance; // esi
  int v3; // esi
  int v4; // edi
  volatile signed __int32 *v5; // esi
  int v7; // [esp+0h] [ebp-28h]
  __int16 v8; // [esp+Ch] [ebp-1Ch] BYREF
  HRESULT pExceptionObject; // [esp+10h] [ebp-18h] BYREF
  LPVOID *ppv; // [esp+14h] [ebp-14h] BYREF
  volatile signed __int32 *v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+24h] [ebp-4h]

  v0 = operator new(4u);
  if ( v0 != nullptr )
    *v0 = 0;
  else
    v0 = nullptr;
  ppv = nullptr;
  v11 = nullptr;
  sub_10007610(&ppv, v0);
  v12 = 0;
  v1 = ppv;
  Instance = CoCreateInstance(&stru_1002B8DC, nullptr, 1u, &stru_1002B4FC, ppv);
  if ( Instance < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to CoCreateInstance in ChswuApp::GetRebootRequired()", v7);
    pExceptionObject = Instance;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v3 = (*(int (__stdcall **)(LPVOID, __int16 *))(*(_DWORD *)*v1 + 32))(*v1, &v8);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_RebootRequired in ChswuApp::GetRebootRequired()", v7);
    pExceptionObject = v3;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v4 = v8;
  v12 = -1;
  v5 = v11;
  if ( v11 != nullptr && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
  }
  return v4;
}

// Address: 0x10005870
BOOL sub_10005870()
{
  SC_HANDLE v0; // esi
  SC_HANDLE v1; // eax
  SC_HANDLE v2; // edi
  BOOL v3; // ebp
  DWORD LastError; // eax
  struct _SERVICE_STATUS ServiceStatus; // [esp+10h] [ebp-1Ch] BYREF

  v0 = nullptr;
  v1 = OpenSCManagerW(nullptr, nullptr, 0xF003Fu);
  v2 = v1;
  if ( v1 != nullptr
    && (v0 = OpenServiceW(v1, L"wuauserv", 0xF01FFu)) != nullptr
    && QueryServiceStatus(v0, &ServiceStatus) )
  {
    v3 = ServiceStatus.dwCurrentState == 4;
  }
  else
  {
    v3 = false;
    LastError = GetLastError();
    sub_10001040((wchar_t *)L"Failed to ChswuApp::IsUpdateServiceRunning() : %d", LastError);
  }
  if ( v0 != nullptr )
    CloseServiceHandle(v0);
  if ( v2 != nullptr )
    CloseServiceHandle(v2);
  return v3;
}

// Address: 0x10005900
int __thiscall sub_10005900(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // esi
  int result; // eax
  volatile signed __int32 *v4; // esi
  volatile signed __int32 *v5; // esi

  *this = (volatile signed __int32 *)&IUpdateOperator<IUpdateSearcher,ISearchJob,ISearchResult>::`vftable';
  v2 = *(this + 6);
  if ( v2 != nullptr )
  {
    result = (int)(v2 + 2);
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
  }
  v4 = *(this + 4);
  if ( v4 != nullptr )
  {
    result = (int)(v4 + 2);
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
    }
  }
  v5 = *(this + 2);
  if ( v5 != nullptr )
  {
    result = (int)(v5 + 2);
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  return result;
}

// Address: 0x100059F0
int __thiscall sub_100059F0(int **this)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+0h] [ebp-8h]
  int **pExceptionObject; // [esp+4h] [ebp-4h] BYREF

  pExceptionObject = this;
  result = **(this + 3);
  if ( result != 0 )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 40))(result);
    v2 = result;
    if ( result < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to RequestAbort in TJob::Abort()", v3);
      pExceptionObject = (int **)v2;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
  }
  return result;
}

// Address: 0x10005A30
int __thiscall sub_10005A30(int **this)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+0h] [ebp-8h]
  int **pExceptionObject; // [esp+4h] [ebp-4h] BYREF

  pExceptionObject = this;
  result = **(this + 3);
  if ( result != 0 )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 36))(result);
    v2 = result;
    if ( result < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to CleanUp in TJob::CleanUp()", v3);
      pExceptionObject = (int **)v2;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
  }
  return result;
}

// Address: 0x10005A70
int __usercall sub_10005A70@<eax>(_DWORD ***a1@<eax>)
{
  int result; // eax
  int v3; // esi
  int v4; // [esp+4h] [ebp-Ch]
  int pExceptionObject; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  result = ((int (__thiscall *)(_DWORD ***))(*a1)[4])(a1);
  if ( result != 0 )
  {
    if ( ((int (__thiscall *)(_DWORD ***))(*a1)[5])(a1) != 0 )
    {
      v3 = (*(int (__stdcall **)(_DWORD, int *))(**a1[5] + 28))(*a1[5], &v6);
      if ( v3 < 0 )
      {
        sub_10001040((wchar_t *)L"Failed to get_ResultCode in TResult::GetResultCode() const", v4);
        pExceptionObject = v3;
        _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
      }
      return v6;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// Address: 0x10005AE0
int __thiscall sub_10005AE0(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // esi
  int result; // eax
  volatile signed __int32 *v4; // esi
  volatile signed __int32 *v5; // esi

  *this = (volatile signed __int32 *)&IUpdateOperator<IUpdateDownloader,IDownloadJob,IDownloadResult>::`vftable';
  v2 = *(this + 6);
  if ( v2 != nullptr )
  {
    result = (int)(v2 + 2);
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
  }
  v4 = *(this + 4);
  if ( v4 != nullptr )
  {
    result = (int)(v4 + 2);
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
    }
  }
  v5 = *(this + 2);
  if ( v5 != nullptr )
  {
    result = (int)(v5 + 2);
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  return result;
}

// Address: 0x10005BD0
BOOL __thiscall sub_10005BD0(_DWORD **this)
{
  return **(this + 3) != 0;
}

// Address: 0x10005BE0
int __thiscall sub_10005BE0(int **this)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+0h] [ebp-8h]
  int **pExceptionObject; // [esp+4h] [ebp-4h] BYREF

  pExceptionObject = this;
  result = **(this + 3);
  if ( result != 0 )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 48))(result);
    v2 = result;
    if ( result < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to RequestAbort in TJob::Abort()", v3);
      pExceptionObject = (int **)v2;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
  }
  return result;
}

// Address: 0x10005C20
int __thiscall sub_10005C20(int **this)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+0h] [ebp-8h]
  int **pExceptionObject; // [esp+4h] [ebp-4h] BYREF

  pExceptionObject = this;
  result = **(this + 3);
  if ( result != 0 )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 40))(result);
    v2 = result;
    if ( result < 0 )
    {
      sub_10001040((wchar_t *)L"Failed to CleanUp in TJob::CleanUp()", v3);
      pExceptionObject = (int **)v2;
      _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
    }
  }
  return result;
}

// Address: 0x10005C60
volatile signed __int32 *__userpurge sub_10005C60@<eax>(int a1@<edi>, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *result; // eax
  volatile signed __int32 *v4; // esi
  volatile signed __int32 *v5; // esi

  result = a3;
  if ( a3 != nullptr )
  {
    _InterlockedExchangeAdd(a3 + 2, 1u);
    result = a3;
  }
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 != nullptr )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
    }
    result = a3;
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = a2;
  if ( result != nullptr )
  {
    v5 = result;
    result += 2;
    if ( _InterlockedExchangeAdd(result, 0xFFFFFFFF) == 0 )
    {
      result = (volatile signed __int32 *)(**(int (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
        return (volatile signed __int32 *)(*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  return result;
}

// Address: 0x10005D30
void *__thiscall sub_10005D30(void *this)
{
  sub_10006640();
  return this;
}

// Address: 0x10005D50
void *__thiscall sub_10005D50(void *this)
{
  sub_10006640();
  return this;
}

// Address: 0x10005D70
int __usercall sub_10005D70@<eax>(_DWORD ***a1@<eax>)
{
  int result; // eax
  int v3; // esi
  int v4; // [esp+4h] [ebp-Ch]
  int pExceptionObject; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  result = ((int (__thiscall *)(_DWORD ***))(*a1)[4])(a1);
  if ( result != 0 )
  {
    if ( ((int (__thiscall *)(_DWORD ***))(*a1)[5])(a1) != 0 )
    {
      v3 = (*(int (__stdcall **)(_DWORD, int *))(**a1[5] + 32))(*a1[5], &v6);
      if ( v3 < 0 )
      {
        sub_10001040((wchar_t *)L"Failed to get_ResultCode in TResult::GetResultCode() const", v4);
        pExceptionObject = v3;
        _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
      }
      return v6;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// Address: 0x10005DE0
int __thiscall sub_10005DE0(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // esi
  int result; // eax
  volatile signed __int32 *v4; // esi
  volatile signed __int32 *v5; // esi

  *this = (volatile signed __int32 *)&IUpdateOperator<IUpdateInstaller,IInstallationJob,IInstallationResult>::`vftable';
  v2 = *(this + 6);
  if ( v2 != nullptr )
  {
    result = (int)(v2 + 2);
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
  }
  v4 = *(this + 4);
  if ( v4 != nullptr )
  {
    result = (int)(v4 + 2);
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
        result = (*(int (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
    }
  }
  v5 = *(this + 2);
  if ( v5 != nullptr )
  {
    result = (int)(v5 + 2);
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 0 )
    {
      result = (**(int (__thiscall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
        return (*(int (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
    }
  }
  return result;
}

// Address: 0x10005ED0
BOOL __thiscall sub_10005ED0(_DWORD **this)
{
  return **(this + 5) != 0;
}

// Address: 0x10005EE0
int __thiscall sub_10005EE0(_DWORD **this)
{
  int v1; // eax
  int v2; // esi
  int v4; // [esp+4h] [ebp-Ch]
  __int16 v5; // [esp+8h] [ebp-8h] BYREF
  int pExceptionObject; // [esp+Ch] [ebp-4h] BYREF

  v1 = **(this + 3);
  if ( v1 == 0 )
    return 0;
  v2 = (*(int (__stdcall **)(int, __int16 *))(*(_DWORD *)v1 + 32))(v1, &v5);
  if ( v2 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_IsCompleted in TJob::IsCompleted() const", v4);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v5;
}

// Address: 0x10005F30
int __usercall sub_10005F30@<eax>(_DWORD ***a1@<eax>)
{
  int result; // eax
  int v3; // esi
  int v4; // [esp+4h] [ebp-Ch]
  int pExceptionObject; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  result = ((int (__thiscall *)(_DWORD ***))(*a1)[4])(a1);
  if ( result != 0 )
  {
    if ( ((int (__thiscall *)(_DWORD ***))(*a1)[5])(a1) != 0 )
    {
      v3 = (*(int (__stdcall **)(_DWORD, int *))(**a1[5] + 36))(*a1[5], &v6);
      if ( v3 < 0 )
      {
        sub_10001040((wchar_t *)L"Failed to get_ResultCode in TResult::GetResultCode() const", v4);
        pExceptionObject = v3;
        _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
      }
      return v6;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

// Address: 0x10005FA0
int *__stdcall sub_10005FA0(int *pExceptionObject, int *a2, int ArgList)
{
  int v3; // ebp
  int *v4; // esi
  _DWORD *v5; // eax
  int (__stdcall *v6)(int, int, int); // eax
  int v7; // edi
  int v9; // [esp-Ch] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-24h]

  v3 = ArgList;
  v4 = a2;
  ArgList = 0;
  v5 = operator new(4u);
  if ( v5 != nullptr )
    *v5 = 0;
  else
    v5 = nullptr;
  *v4 = 0;
  v4[1] = 0;
  sub_100076E0(v4, v5);
  v10 = *v4;
  v9 = *pExceptionObject;
  v6 = *(int (__stdcall **)(int, int, int))(*(_DWORD *)*pExceptionObject + 28);
  ArgList = 1;
  v7 = v6(v9, v3, v10);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Item in TCollection::GetItem( %d ) const", v3);
    pExceptionObject = (int *)v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v4;
}

// Address: 0x10006060
int *__stdcall sub_10006060(int *pExceptionObject, int *a2, int ArgList)
{
  int v3; // ebp
  int *v4; // esi
  _DWORD *v5; // eax
  int (__stdcall *v6)(int, int, int); // eax
  int v7; // edi
  int v9; // [esp-Ch] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-24h]

  v3 = ArgList;
  v4 = a2;
  ArgList = 0;
  v5 = operator new(4u);
  if ( v5 != nullptr )
    *v5 = 0;
  else
    v5 = nullptr;
  *v4 = 0;
  v4[1] = 0;
  sub_10006770(v4, v5);
  v10 = *v4;
  v9 = *pExceptionObject;
  v6 = *(int (__stdcall **)(int, int, int))(*(_DWORD *)*pExceptionObject + 28);
  ArgList = 1;
  v7 = v6(v9, v3, v10);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Item in TCollection::GetItem( %d ) const", v3);
    pExceptionObject = (int *)v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v4;
}

// Address: 0x10006120
int *__stdcall sub_10006120(int *pExceptionObject, int *a2, int ArgList)
{
  int v3; // ebp
  int *v4; // esi
  _DWORD *v5; // eax
  int (__stdcall *v6)(int, int, int); // eax
  int v7; // edi
  int v9; // [esp-Ch] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-24h]

  v3 = ArgList;
  v4 = a2;
  ArgList = 0;
  v5 = operator new(4u);
  if ( v5 != nullptr )
    *v5 = 0;
  else
    v5 = nullptr;
  *v4 = 0;
  v4[1] = 0;
  sub_100073A0(v4, v5);
  v10 = *v4;
  v9 = *pExceptionObject;
  v6 = *(int (__stdcall **)(int, int, int))(*(_DWORD *)*pExceptionObject + 28);
  ArgList = 1;
  v7 = v6(v9, v3, v10);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Item in TCollection::GetItem( %d ) const", v3);
    pExceptionObject = (int *)v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v4;
}

// Address: 0x100061E0
_DWORD *__stdcall sub_100061E0(_DWORD *pExceptionObject, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v6; // [esp+0h] [ebp-20h]

  v2 = a2;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *v2 = 0;
  v2[1] = 0;
  sub_100077B0(v2, v3);
  v4 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*pExceptionObject + 44))(*pExceptionObject, *v2);
  if ( (int)v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to GetProgress in TDownloadJob::GetProgress()", v6);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v2;
}

// Address: 0x10006290
int *__stdcall sub_10006290(int *pExceptionObject, int *a2, int ArgList)
{
  int v3; // ebp
  int *v4; // esi
  _DWORD *v5; // eax
  int (__stdcall *v6)(int, int, int); // eax
  int v7; // edi
  int v9; // [esp-Ch] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-24h]

  v3 = ArgList;
  v4 = a2;
  ArgList = 0;
  v5 = operator new(4u);
  if ( v5 != nullptr )
    *v5 = 0;
  else
    v5 = nullptr;
  *v4 = 0;
  v4[1] = 0;
  sub_10007470(v4, v5);
  v10 = *v4;
  v9 = *pExceptionObject;
  v6 = *(int (__stdcall **)(int, int, int))(*(_DWORD *)*pExceptionObject + 36);
  ArgList = 1;
  v7 = v6(v9, v3, v10);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to GetUpdateResult in TResultWithUpdateResult::GetUpdateResult( %d )", v3);
    pExceptionObject = (int *)v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v4;
}

// Address: 0x10006350
int *__stdcall sub_10006350(int *pExceptionObject, int *a2, int ArgList)
{
  int v3; // ebp
  int *v4; // esi
  _DWORD *v5; // eax
  int (__stdcall *v6)(int, int, int); // eax
  int v7; // edi
  int v9; // [esp-Ch] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-24h]

  v3 = ArgList;
  v4 = a2;
  ArgList = 0;
  v5 = operator new(4u);
  if ( v5 != nullptr )
    *v5 = 0;
  else
    v5 = nullptr;
  *v4 = 0;
  v4[1] = 0;
  sub_10007470(v4, v5);
  v10 = *v4;
  v9 = *pExceptionObject;
  v6 = *(int (__stdcall **)(int, int, int))(*(_DWORD *)*pExceptionObject + 52);
  ArgList = 1;
  v7 = v6(v9, v3, v10);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to GetUpdateResult in TProgress::GetUpdateResult( %d )", v3);
    pExceptionObject = (int *)v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v4;
}

// Address: 0x10006410
_DWORD *__stdcall sub_10006410(_DWORD *pExceptionObject, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v6; // [esp+0h] [ebp-20h]

  v2 = a2;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *v2 = 0;
  v2[1] = 0;
  sub_10007880(v2, v3);
  v4 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*pExceptionObject + 44))(*pExceptionObject, *v2);
  if ( (int)v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to GetProgress in TDownloadJob::GetProgress()", v6);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v2;
}

// Address: 0x100064C0
int *__stdcall sub_100064C0(int *pExceptionObject, int *a2, int ArgList)
{
  int v3; // ebp
  int *v4; // esi
  _DWORD *v5; // eax
  int (__stdcall *v6)(int, int, int); // eax
  int v7; // edi
  int v9; // [esp-Ch] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-24h]

  v3 = ArgList;
  v4 = a2;
  ArgList = 0;
  v5 = operator new(4u);
  if ( v5 != nullptr )
    *v5 = 0;
  else
    v5 = nullptr;
  *v4 = 0;
  v4[1] = 0;
  sub_10007540(v4, v5);
  v10 = *v4;
  v9 = *pExceptionObject;
  v6 = *(int (__stdcall **)(int, int, int))(*(_DWORD *)*pExceptionObject + 40);
  ArgList = 1;
  v7 = v6(v9, v3, v10);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to GetUpdateResult in TResultWithUpdateResult::GetUpdateResult( %d )", v3);
    pExceptionObject = (int *)v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v4;
}

// Address: 0x10006580
int *__stdcall sub_10006580(int *pExceptionObject, int *a2, int ArgList)
{
  int v3; // ebp
  int *v4; // esi
  _DWORD *v5; // eax
  int (__stdcall *v6)(int, int, int); // eax
  int v7; // edi
  int v9; // [esp-Ch] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-24h]

  v3 = ArgList;
  v4 = a2;
  ArgList = 0;
  v5 = operator new(4u);
  if ( v5 != nullptr )
    *v5 = 0;
  else
    v5 = nullptr;
  *v4 = 0;
  v4[1] = 0;
  sub_10007540(v4, v5);
  v10 = *v4;
  v9 = *pExceptionObject;
  v6 = *(int (__stdcall **)(int, int, int))(*(_DWORD *)*pExceptionObject + 40);
  ArgList = 1;
  v7 = v6(v9, v3, v10);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to GetUpdateResult in TProgress::GetUpdateResult( %d )", v3);
    pExceptionObject = (int *)v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v4;
}

// Address: 0x10006640
_DWORD *__usercall sub_10006640@<eax>(int *a1@<eax>, _DWORD *a2@<esi>)
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

// Address: 0x100066A0
_DWORD *__stdcall sub_100066A0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<ICategoryCollection>>::`vftable';
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

// Address: 0x10006770
_DWORD *__stdcall sub_10006770(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<ICategory>>::`vftable';
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

// Address: 0x10006840
_DWORD *__stdcall sub_10006840(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateCollection>>::`vftable';
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

// Address: 0x10006910
_DWORD *__stdcall sub_10006910(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IInstallationBehavior>>::`vftable';
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

// Address: 0x100069E0
_DWORD *__stdcall sub_100069E0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateIdentity>>::`vftable';
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

// Address: 0x10006AB0
_DWORD *__stdcall sub_10006AB0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateSession>>::`vftable';
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

// Address: 0x10006B80
_DWORD *__stdcall sub_10006B80(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateSearcher>>::`vftable';
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

// Address: 0x10006C50
_DWORD *__stdcall sub_10006C50(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<ISearchJob>>::`vftable';
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

// Address: 0x10006D20
_DWORD *__stdcall sub_10006D20(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<ISearchResult>>::`vftable';
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

// Address: 0x10006DF0
_DWORD *__stdcall sub_10006DF0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateDownloader>>::`vftable';
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

// Address: 0x10006EC0
_DWORD *__stdcall sub_10006EC0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IDownloadJob>>::`vftable';
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

// Address: 0x10006F90
_DWORD *__stdcall sub_10006F90(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IDownloadResult>>::`vftable';
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

// Address: 0x10007060
_DWORD *__stdcall sub_10007060(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateInstaller>>::`vftable';
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

// Address: 0x10007130
_DWORD *__stdcall sub_10007130(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IInstallationJob>>::`vftable';
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

// Address: 0x10007200
_DWORD *__stdcall sub_10007200(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IInstallationResult>>::`vftable';
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

// Address: 0x100072D0
_DWORD *__stdcall sub_100072D0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateExceptionCollection>>::`vftable';
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

// Address: 0x100073A0
_DWORD *__stdcall sub_100073A0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdate>>::`vftable';
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

// Address: 0x10007470
_DWORD *__stdcall sub_10007470(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateDownloadResult>>::`vftable';
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

// Address: 0x10007540
_DWORD *__stdcall sub_10007540(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateInstallationResult>>::`vftable';
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

// Address: 0x10007610
_DWORD *__stdcall sub_10007610(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<ISystemInformation>>::`vftable';
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

// Address: 0x100076E0
_DWORD *__stdcall sub_100076E0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IUpdateException>>::`vftable';
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

// Address: 0x100077B0
_DWORD *__stdcall sub_100077B0(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IDownloadProgress>>::`vftable';
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

// Address: 0x10007880
_DWORD *__stdcall sub_10007880(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IInstallationProgress>>::`vftable';
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

// Address: 0x10007950
_DWORD *__usercall sub_10007950@<eax>(_DWORD *a1@<esi>)
{
  if ( *a1 != 0 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*a1 + 8))(*a1);
    *a1 = 0;
  }
  operator delete(a1);
  return a1;
}

// Address: 0x10007970
int __thiscall sub_10007970(void *this)
{
  int result; // eax

  if ( this != nullptr )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, 1);
  return result;
}

// Address: 0x10007980
void __thiscall sub_10007980(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)*(this + 1);
  if ( v1 != nullptr )
  {
    if ( *v1 != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v1 + 8))(*v1);
      *v1 = 0;
    }
    operator delete(v1);
  }
}

// Address: 0x100079B0
_DWORD *__thiscall sub_100079B0(_DWORD *this, char a2)
{
  *this = &std::tr1::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100079D0
int __stdcall sub_100079D0(int a1)
{
  return 0;
}

// Address: 0x100079E0
int __cdecl sub_100079E0(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // eax

  v4 = 16;
  while ( *a1 == *a2 )
  {
    v4 -= 4;
    ++a2;
    ++a1;
    if ( v4 < 4 )
      return 1;
  }
  return 0;
}

// Address: 0x10007A50
wchar_t *__usercall sub_10007A50@<eax>(int a1@<edi>)
{
  LPCWSTR *v1; // esi
  int v2; // eax
  bool v3; // zf
  const WCHAR *v4; // eax
  wchar_t *result; // eax
  int v6; // ecx

  v1 = (LPCWSTR *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 12) != 0 )
    return (wchar_t *)*v1;
  FormatMessageW(0x1300u, nullptr, *(_DWORD *)(a1 + 4), 0x400u, (LPWSTR)(a1 + 12), 0, nullptr);
  if ( *v1 == nullptr )
  {
    result = (wchar_t *)LocalAlloc(0, 0x40u);
    *v1 = result;
    if ( result == nullptr )
      return result;
    v6 = *(_DWORD *)(a1 + 4);
    if ( (unsigned int)(v6 + 2147220992) > 0xFDFF || (_WORD)v6 == 512 )
    {
      swprintf_s(result, 0x20u, L"Unknown error 0x%0lX", *(_DWORD *)(a1 + 4));
      return (wchar_t *)*v1;
    }
    swprintf_s(result, 0x20u, L"IDispatch error #%d", (unsigned __int16)(v6 - 512));
    return (wchar_t *)*v1;
  }
  v2 = lstrlenW(*v1);
  if ( v2 <= 1 || (*v1)[v2 - 1] != 10 )
    return (wchar_t *)*v1;
  (*v1)[v2 - 1] = 0;
  v3 = (*v1)[v2 - 2] == 13;
  v4 = &(*v1)[v2 - 2];
  if ( v3 )
    *v4 = 0;
  return (wchar_t *)*v1;
}

// Address: 0x10007B20
HLOCAL __thiscall sub_10007B20(_DWORD *this)
{
  HLOCAL result; // eax
  void *v3; // esi

  result = (HLOCAL)*(this + 2);
  *this = &_com_error::`vftable';
  if ( result != nullptr )
    result = (HLOCAL)(*(int (__stdcall **)(HLOCAL))(*(_DWORD *)result + 8))(result);
  v3 = (void *)*(this + 3);
  if ( v3 != nullptr )
    return LocalFree(v3);
  return result;
}

// Address: 0x10007B50
void *__thiscall sub_10007B50(void *this, char a2)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &_com_error::`vftable';
  if ( v3 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  if ( *((_DWORD *)this + 3) != 0 )
    LocalFree(*((HLOCAL *)this + 3));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10007B90
void __stdcall sub_10007B90(void *a1)
{
  operator delete(a1);
}

// Address: 0x10007BA0
_DWORD *__thiscall sub_10007BA0(_DWORD *this, int a2)
{
  if ( a2 == 0 )
    sub_10007E20(-2147467259);
  *this = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) + 16;
  return this;
}

// Address: 0x10007BF0
_DWORD *__thiscall sub_10007BF0(_DWORD *this)
{
  int v2; // eax

  v2 = sub_1000CCFE();
  if ( v2 == 0 )
    sub_10007E20(-2147467259);
  *this = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2) + 16;
  return this;
}

// Address: 0x10007C20
volatile signed __int32 *__thiscall sub_10007C20(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // ecx
  volatile signed __int32 *result; // eax
  int v4; // edi

  v2 = *this;
  result = v2 - 4;
  v4 = *((_DWORD *)v2 - 4);
  if ( *((_DWORD *)v2 - 3) != 0 )
  {
    if ( *((int *)result + 3) >= 0 )
    {
      if ( _InterlockedDecrement(result + 3) <= 0 )
        (*(void (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)result + 4))(result);
      result = (volatile signed __int32 *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4) + 16);
      *this = result;
    }
    else
    {
      if ( *((int *)v2 - 2) < 0 )
        sub_10007E20(-2147024809);
      *((_DWORD *)v2 - 3) = 0;
      result = *this;
      *(_WORD *)*this = 0;
    }
  }
  return result;
}

// Address: 0x10007C90
int __thiscall sub_10007C90(volatile signed __int32 *this)
{
  int result; // eax

  result = (int)(this + 3);
  if ( _InterlockedDecrement(this + 3) <= 0 )
    return (*(int (__thiscall **)(volatile signed __int32, volatile signed __int32 *))(**(_DWORD **)this + 4))(
             *this,
             this);
  return result;
}

// Address: 0x10007CB0
int __thiscall sub_10007CB0(_DWORD *this, int a2)
{
  int v2; // ebx
  volatile signed __int32 *v3; // esi
  int (__thiscall ***v4)(_DWORD, int, int); // eax
  int v5; // ebp
  int v6; // edi
  int result; // eax

  v2 = *(_DWORD *)(*this - 12);
  v3 = (volatile signed __int32 *)(*this - 16);
  v4 = (int (__thiscall ***)(_DWORD, int, int))(*(int (__thiscall **)(volatile signed __int32))(**(_DWORD **)v3 + 16))(*v3);
  v5 = a2;
  v6 = (**v4)(v4, a2, 2);
  if ( v6 == 0 )
    sub_10007D30();
  if ( v2 < a2 )
    v5 = v2;
  memcpy_s((void *const)(v6 + 16), 2 * v5 + 2, (const void *const)(v3 + 4), 2 * v5 + 2);
  *(_DWORD *)(v6 + 4) = v2;
  result = _InterlockedDecrement(v3 + 3);
  if ( result <= 0 )
    result = (*(int (__stdcall **)(volatile signed __int32 *))(**(_DWORD **)v3 + 4))(v3);
  *this = v6 + 16;
  return result;
}

// Address: 0x10007D30
void __noreturn sub_10007D30()
{
  sub_10007E20(-2147024882);
}

// Address: 0x10007D80
int __thiscall sub_10007D80(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  int result; // eax
  int v10; // eax
  int v11; // [esp+8h] [ebp+4h]

  v7 = a2;
  v8 = (_DWORD *)(*this - 16);
  if ( v8[1] > a2 )
    v7 = v8[1];
  if ( (int)v8[3] > 1 )
    return sub_10007CB0(this, v7);
  result = v8[2];
  if ( result < v7 )
  {
    if ( result <= 1024 )
      v10 = 2 * result;
    else
      v10 = result + 1024;
    if ( v10 < v7 )
      v10 = v7;
    v11 = v10;
    v3 = *this;
    v4 = *(_DWORD *)(*this - 16);
    v5 = v3 - 16;
    if ( *(_DWORD *)(v5 + 8) >= v11
      || v11 <= 0
      || (v6 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v4 + 8))(v4, v5, v11, 2)) == 0 )
    {
      sub_10007D30();
    }
    result = v6 + 16;
    *this = result;
  }
  return result;
}

// Address: 0x10007DD0
int __thiscall sub_10007DD0(int *this, int a2)
{
  if ( ((*(_DWORD *)(*this - 8) - a2) | (1 - *(_DWORD *)(*this - 16 + 12))) < 0 )
    sub_10007D80(this, a2);
  return *this;
}

// Address: 0x10007E00
errno_t __cdecl sub_10007E00(void *a1, rsize_t DestinationSize, const void *a3, rsize_t SourceSize)
{
  return memcpy_s(a1, 2 * DestinationSize, a3, 2 * SourceSize);
}

// Address: 0x10007E20
void __cdecl __noreturn sub_10007E20(int pExceptionObject)
{
  if ( pExceptionObject == -2147024882 )
    AfxThrowMemoryException();
  AfxThrowOleException(pExceptionObject);
}

// Address: 0x10007E40
int __thiscall sub_10007E40(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 < 0 || a2 > *(_DWORD *)(*this - 8) )
    sub_10007E20(-2147024809);
  *(_DWORD *)(*this - 12) = a2;
  *(_WORD *)(*this + 2 * a2) = 0;
  return result;
}

// Address: 0x10007E70
volatile signed __int32 *__thiscall sub_10007E70(volatile signed __int32 **this, _BYTE *Source, int a3)
{
  volatile signed __int32 *result; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  volatile signed __int32 *v7; // eax
  rsize_t v8; // edx
  rsize_t v9; // [esp-Ch] [ebp-14h]

  if ( a3 == 0 )
    return sub_10007C20(this);
  if ( Source == nullptr )
    sub_10007E20(-2147024809);
  v5 = (Source - (_BYTE *)*this) >> 1;
  v6 = *((_DWORD *)*this - 3);
  if ( ((*((_DWORD *)*this - 2) - a3) | (1 - *((_DWORD *)*this - 1))) < 0 )
    sub_10007D80((int *)this, a3);
  v7 = *this;
  v8 = 2 * *((_DWORD *)*this - 2);
  v9 = 2 * a3;
  if ( v5 > v6 )
    memcpy_s((void *const)v7, v8, Source, v9);
  else
    memmove_s((void *const)v7, v8, (char *)v7 + 2 * v5, v9);
  if ( a3 < 0 || a3 > *((_DWORD *)*this - 2) )
    sub_10007E20(-2147024809);
  *((_DWORD *)*this - 3) = a3;
  result = *this;
  *((_WORD *)*this + a3) = 0;
  return result;
}

// Address: 0x10007F20
__int16 *__cdecl sub_10007F20(__int16 *a1)
{
  __int16 *result; // eax
  __int16 v2; // cx

  result = a1;
  if ( a1 != nullptr )
  {
    do
      v2 = *result++;
    while ( v2 != 0 );
    return (__int16 *)(result - (a1 + 1));
  }
  return result;
}

// Address: 0x10007F40
volatile signed __int32 **__thiscall sub_10007F40(volatile signed __int32 **this, unsigned __int16 *Source)
{
  if ( Source != nullptr )
    sub_10007E70(this, Source, wcslen(Source));
  else
    sub_10007E70(this, nullptr, 0);
  return this;
}

// Address: 0x10007F80
int __cdecl AddUpdateItem(int a1)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v3; // [esp+0h] [ebp-54h] BYREF
  _DWORD v4[2]; // [esp+10h] [ebp-44h] BYREF
  int v5[2]; // [esp+18h] [ebp-3Ch] BYREF
  _DWORD *v6[2]; // [esp+20h] [ebp-34h] BYREF
  int v7; // [esp+34h] [ebp-20h] BYREF
  int v8; // [esp+38h] [ebp-1Ch] BYREF
  int pExceptionObject; // [esp+3Ch] [ebp-18h] BYREF
  int v10; // [esp+40h] [ebp-14h]
  int *v11; // [esp+44h] [ebp-10h]
  int v12; // [esp+50h] [ebp-4h]

  v11 = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v12 = 1;
  v10 = -1;
  if ( (ArgList & 8) == 0 )
  {
    pExceptionObject = -2147024895;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  LOBYTE(v12) = 2;
  sub_100035D0(v5, a1, *(_DWORD *)(a1 + 16));
  LOBYTE(v12) = 3;
  if ( *(_DWORD *)v5[0] != 0 )
  {
    v8 = -2147024713;
    _CxxThrowException(&v8, (_ThrowInfo *)&_TI1J);
  }
  sub_10002AA0((int *)v6, a1, *(_DWORD *)(a1 + 16));
  LOBYTE(v12) = 4;
  if ( *v6[0] == 0 )
  {
    v7 = -2147024894;
    _CxxThrowException(&v7, (_ThrowInfo *)&_TI1J);
  }
  v10 = sub_10003BC0(v6);
  LOBYTE(v12) = 3;
  sub_10001390((int)v6);
  LOBYTE(v12) = 2;
  sub_10001390((int)v5);
  v12 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v10;
}

// Address: 0x100080F0
int __cdecl RemoveUpdateItem(int a1)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v2; // edi
  int v4; // [esp+0h] [ebp-40h] BYREF
  _DWORD v5[5]; // [esp+10h] [ebp-30h] BYREF
  int v6; // [esp+28h] [ebp-18h] BYREF
  _DWORD pExceptionObject[2]; // [esp+2Ch] [ebp-14h] BYREF
  int v8; // [esp+3Ch] [ebp-4h]

  pExceptionObject[1] = &v4;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v5, ModuleState);
  v8 = 1;
  v5[4] = 0;
  if ( (ArgList & 8) == 0 )
  {
    pExceptionObject[0] = -2147024895;
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  LOBYTE(v8) = 2;
  v2 = sub_10003800(a1, *(_DWORD *)(a1 + 16));
  if ( v2 == sub_10003A00() )
  {
    v6 = -2147024894;
    _CxxThrowException(&v6, (_ThrowInfo *)&_TI1J);
  }
  sub_10003CC0(v2);
  v8 = -1;
  if ( v5[1] != 0 )
    sub_1000F87C(0, v5[0]);
  return 1;
}

// Address: 0x10008210
int ClearUpdateItem()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v2; // [esp+0h] [ebp-34h] BYREF
  _DWORD v3[4]; // [esp+10h] [ebp-24h] BYREF
  _DWORD pExceptionObject[2]; // [esp+20h] [ebp-14h] BYREF
  int v5; // [esp+30h] [ebp-4h]

  pExceptionObject[1] = &v2;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  v5 = 1;
  v3[3] = 0;
  if ( (ArgList & 8) == 0 )
  {
    pExceptionObject[0] = -2147024895;
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  sub_10003DB0();
  v5 = -1;
  if ( v3[1] != 0 )
    sub_1000F87C(0, v3[0]);
  return 1;
}

// Address: 0x100082F0
int DownloadAndInstall()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v2; // [esp+0h] [ebp-30h] BYREF
  _DWORD v3[5]; // [esp+10h] [ebp-20h] BYREF
  int v4; // [esp+2Ch] [ebp-4h]

  v3[4] = &v2;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  v4 = 1;
  v3[3] = 0;
  sub_10001040((wchar_t *)L"BeginDownloadAndInstallation<<", v2);
  sub_10004170();
  sub_10001040((wchar_t *)L"BeginDownloadAndInstallation>>", v2);
  v4 = -1;
  if ( v3[1] != 0 )
    sub_1000F87C(0, v3[0]);
  return 1;
}

// Address: 0x100083B0
int GetResultCode()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD ***v6; // eax
  int v7; // esi
  int v9; // [esp+0h] [ebp-30h] BYREF
  _DWORD v10[5]; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  v10[4] = &v9;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, ModuleState);
  v11 = 1;
  v10[3] = 6;
  v1 = sub_100040A0();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 20))(v1) == 0 )
  {
    v2 = sub_100040A0();
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2) != 0 )
    {
      v3 = sub_100040A0();
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3) != 0 )
      {
        sub_10001040((wchar_t *)L"EndDownloadAndInstallation<<", v9);
        v4 = sub_100040A0();
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4) == 0 )
        {
          v5 = sub_100040A0();
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
        }
        sub_10001040((wchar_t *)L"EndDownloadAndInstallation>>", v9);
      }
    }
  }
  v6 = (_DWORD ***)sub_100040A0();
  v7 = sub_10005F30(v6);
  v11 = -1;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v7;
}

// Address: 0x100084D0
int Download()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v2; // [esp+0h] [ebp-30h] BYREF
  _DWORD v3[5]; // [esp+10h] [ebp-20h] BYREF
  int v4; // [esp+2Ch] [ebp-4h]

  v3[4] = &v2;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  v4 = 1;
  dword_1004163C = 0;
  sub_10001040((wchar_t *)L"BeginDownload()<<", v2);
  sub_10004720();
  sub_10001040((wchar_t *)L"BeginDownload()>>", v2);
  v4 = -1;
  if ( v3[1] != 0 )
    sub_1000F87C(0, v3[0]);
  return 1;
}

// Address: 0x10008590
int AbortDownload()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // eax
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_1004163C = 0;
  sub_10001040((wchar_t *)L"AbortDownload<<", v3);
  v1 = sub_100042C0();
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 24))(v1);
  sub_10001040((wchar_t *)L"AbortDownload>>", v3);
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return 1;
}

// Address: 0x10008660
int GetDownloadResultCode()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD ***v6; // eax
  int v7; // esi
  int v9; // [esp+0h] [ebp-30h] BYREF
  _DWORD v10[5]; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  v10[4] = &v9;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, ModuleState);
  v11 = 1;
  dword_1004163C = 0;
  v10[3] = 6;
  v1 = sub_100042C0();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 20))(v1) == 0 )
  {
    v2 = sub_100042C0();
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2) != 0 )
    {
      v3 = sub_100042C0();
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3) != 0 )
      {
        sub_10001040((wchar_t *)L"EndDownload<<", v9);
        v4 = sub_100042C0();
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4) == 0 )
        {
          v5 = sub_100042C0();
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
        }
        sub_10001040((wchar_t *)L"EndDownload>>", v9);
      }
    }
  }
  v6 = (_DWORD ***)sub_100042C0();
  v7 = sub_10005D70(v6);
  v11 = -1;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v7;
}

// Address: 0x10008780
int GetDownloadPercent()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_1004163C = 0;
  v4[3] = -1;
  v1 = sub_100047E0();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x10008830
int GetDownloadCurrentIndex()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_1004163C = 0;
  v4[3] = -1;
  v1 = sub_100048D0();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x100088E0
int GetDownloadCurrentPercent()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_1004163C = 0;
  v4[3] = -1;
  v1 = sub_100049C0();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x10008990
int __cdecl GetDownloadStatus(void *ArgList, wchar_t *Destination)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v3; // eax
  wchar_t *v4; // esi
  int v5; // ebx
  signed int v6; // eax
  int v8; // [esp+0h] [ebp-38h] BYREF
  _DWORD v9[2]; // [esp+10h] [ebp-28h] BYREF
  int v10; // [esp+1Ch] [ebp-1Ch]
  int v11; // [esp+20h] [ebp-18h]
  wchar_t *Source[2]; // [esp+24h] [ebp-14h] BYREF
  int v13; // [esp+34h] [ebp-4h]

  Source[1] = (wchar_t *)&v8;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v9, ModuleState);
  v13 = 1;
  dword_1004163C = 0;
  v11 = 0;
  v3 = sub_1000CCFE();
  if ( v3 == 0 )
    sub_10007E20(-2147467259);
  v4 = (wchar_t *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3) + 16);
  Source[0] = v4;
  LOBYTE(v13) = 2;
  if ( ArgList == (void *)-1 || Destination == nullptr )
    goto LABEL_17;
  if ( sub_10003AF0(ArgList, (int)Source) == 0
    || (v10 = sub_10004AB0(ArgList)) == 6
    || (v5 = sub_10004BA0(ArgList)) == -1 )
  {
    v4 = Source[0];
LABEL_17:
    v11 = 0;
    goto LABEL_11;
  }
  v11 = 1;
  memset(Destination, 0, 0x230u);
  v4 = Source[0];
  v6 = *((_DWORD *)Source[0] - 3);
  if ( v6 > 260 )
    v6 = 260;
  wcsncpy(Destination, Source[0], v6);
  *((_BYTE *)Destination + 520) = v10;
  *((_DWORD *)Destination + 131) = v5;
LABEL_11:
  LOBYTE(v13) = 1;
  if ( _InterlockedDecrement((volatile signed __int32 *)v4 - 1) <= 0 )
    (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)v4 - 4) + 4))(*((_DWORD *)v4 - 4), v4 - 8);
  v13 = -1;
  if ( v9[1] != 0 )
    sub_1000F87C(0, v9[0]);
  return v11;
}

// Address: 0x10008B30
int GetDownloadResult()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  _DWORD v3[2]; // [esp+4h] [ebp-8h] BYREF

  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  v1 = dword_1004163C;
  if ( v3[1] != 0 )
    sub_1000F87C(0, v3[0]);
  return v1;
}

// Address: 0x10008B70
int IsRebootRequired()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  v4[3] = 0;
  v1 = sub_10005740();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x10008C10
BOOL IsUpdateServiceRunning()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  BOOL v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  v4[3] = 0;
  v1 = sub_10005870();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x10008CB0
int GetUpdateFlag()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  _DWORD v3[2]; // [esp+4h] [ebp-8h] BYREF

  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  v1 = ArgList;
  if ( v3[1] != 0 )
    sub_1000F87C(0, v3[0]);
  return v1;
}

// Address: 0x10008CF0
int __cdecl SetUpdateFlag(int ArgList)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v2; // ecx
  int v4; // [esp+0h] [ebp-30h] BYREF
  _DWORD v5[5]; // [esp+10h] [ebp-20h] BYREF
  int v6; // [esp+2Ch] [ebp-4h]

  v5[4] = &v4;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v5, ModuleState);
  v6 = 1;
  v5[3] = 0;
  if ( (ArgList & 8) != 0 )
    sub_10001FA0(v2, ArgList & 0x10008);
  else
    sub_10001FA0(v2, ArgList & 0xFFFFFFCF | 0x10);
  v6 = -1;
  if ( v5[1] != 0 )
    sub_1000F87C(0, v5[0]);
  return 1;
}

// Address: 0x10008DC0
int Install()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v2; // [esp+0h] [ebp-30h] BYREF
  _DWORD v3[5]; // [esp+10h] [ebp-20h] BYREF
  int v4; // [esp+2Ch] [ebp-4h]

  v3[4] = &v2;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  v4 = 1;
  dword_10041640 = 0;
  sub_10001040((wchar_t *)L"BeginInstallation<<", v2);
  sub_100051E0();
  sub_10001040((wchar_t *)L"BeginInstallation>>", v2);
  v4 = -1;
  if ( v3[1] != 0 )
    sub_1000F87C(0, v3[0]);
  return 1;
}

// Address: 0x10008E80
int AbortInstall()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // eax
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_10041640 = 0;
  sub_10001040((wchar_t *)L"AbortInstallation<<", v3);
  v1 = sub_10004D20();
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 24))(v1);
  sub_10001040((wchar_t *)L"AbortInstallation>>", v3);
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return 1;
}

// Address: 0x10008F50
int GetInstallResultCode()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD ***v6; // eax
  int v7; // esi
  int v9; // [esp+0h] [ebp-30h] BYREF
  _DWORD v10[5]; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  v10[4] = &v9;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, ModuleState);
  v11 = 1;
  dword_10041640 = 0;
  v10[3] = 6;
  v1 = sub_10004D20();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 20))(v1) == 0 )
  {
    v2 = sub_10004D20();
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2) != 0 )
    {
      v3 = sub_10004D20();
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3) != 0 )
      {
        sub_10001040((wchar_t *)L"EndInstallation<<", v9);
        v4 = sub_10004D20();
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4) == 0 )
        {
          v5 = sub_10004D20();
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
        }
        sub_10001040((wchar_t *)L"EndInstallation>>", v9);
      }
    }
  }
  v6 = (_DWORD ***)sub_10004D20();
  v7 = sub_10005F30(v6);
  v11 = -1;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v7;
}

// Address: 0x10009070
int GetInstallationPercent()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_10041640 = 0;
  v4[3] = -1;
  v1 = sub_10005290();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x10009120
int GetInstallationCurrentIndex()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_10041640 = 0;
  v4[3] = -1;
  v1 = sub_10005380();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x100091D0
int GetInstallationCurrentPercent()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_10041640 = 0;
  v4[3] = -1;
  v1 = sub_10005470();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x10009280
int __cdecl GetInstallationStatus(void *ArgList, wchar_t *Destination)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v3; // eax
  wchar_t *v4; // esi
  int v5; // ebx
  signed int v6; // eax
  int v8; // [esp+0h] [ebp-38h] BYREF
  _DWORD v9[2]; // [esp+10h] [ebp-28h] BYREF
  int v10; // [esp+1Ch] [ebp-1Ch]
  int v11; // [esp+20h] [ebp-18h]
  wchar_t *Source[2]; // [esp+24h] [ebp-14h] BYREF
  int v13; // [esp+34h] [ebp-4h]

  Source[1] = (wchar_t *)&v8;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v9, ModuleState);
  v13 = 1;
  dword_10041640 = 0;
  v11 = 0;
  v3 = sub_1000CCFE();
  if ( v3 == 0 )
    sub_10007E20(-2147467259);
  v4 = (wchar_t *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3) + 16);
  Source[0] = v4;
  LOBYTE(v13) = 2;
  if ( ArgList == (void *)-1 || Destination == nullptr )
    goto LABEL_17;
  if ( sub_10003AF0(ArgList, (int)Source) == 0
    || (v10 = sub_10005560(ArgList)) == 6
    || (v5 = sub_10005650(ArgList)) == -1 )
  {
    v4 = Source[0];
LABEL_17:
    v11 = 0;
    goto LABEL_11;
  }
  v11 = 1;
  memset(Destination, 0, 0x230u);
  v4 = Source[0];
  v6 = *((_DWORD *)Source[0] - 3);
  if ( v6 > 260 )
    v6 = 260;
  wcsncpy(Destination, Source[0], v6);
  *((_BYTE *)Destination + 520) = v10;
  *((_DWORD *)Destination + 131) = v5;
LABEL_11:
  LOBYTE(v13) = 1;
  if ( _InterlockedDecrement((volatile signed __int32 *)v4 - 1) <= 0 )
    (*(void (__thiscall **)(_DWORD, wchar_t *))(**((_DWORD **)v4 - 4) + 4))(*((_DWORD *)v4 - 4), v4 - 8);
  v13 = -1;
  if ( v9[1] != 0 )
    sub_1000F87C(0, v9[0]);
  return v11;
}

// Address: 0x10009420
int GetInstallationResult()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  _DWORD v3[2]; // [esp+4h] [ebp-8h] BYREF

  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  v1 = dword_10041640;
  if ( v3[1] != 0 )
    sub_1000F87C(0, v3[0]);
  return v1;
}

// Address: 0x10009460
char __cdecl sub_10009460(int **a1)
{
  UUID *Uuid; // ecx
  UUID *v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // ecx
  int v13; // edi
  char result; // al
  volatile signed __int32 *v15; // esi
  volatile signed __int32 *v16; // esi
  int v17; // [esp+28h] [ebp-5Ch]
  int v18; // [esp+38h] [ebp-4Ch] BYREF
  int pExceptionObject; // [esp+3Ch] [ebp-48h] BYREF
  int v20; // [esp+40h] [ebp-44h] BYREF
  int v21; // [esp+44h] [ebp-40h] BYREF
  volatile signed __int32 *v22; // [esp+48h] [ebp-3Ch]
  int v23; // [esp+4Ch] [ebp-38h] BYREF
  volatile signed __int32 *v24; // [esp+50h] [ebp-34h]
  char v25[8]; // [esp+54h] [ebp-30h] BYREF
  int v26; // [esp+5Ch] [ebp-28h]
  int v27; // [esp+60h] [ebp-24h]
  char v28[8]; // [esp+64h] [ebp-20h] BYREF
  unsigned int v29; // [esp+6Ch] [ebp-18h]
  int v30; // [esp+70h] [ebp-14h]
  int v31; // [esp+80h] [ebp-4h]

  v2 = Uuid;
  v3 = **a1;
  pExceptionObject = v3;
  sub_100013D0(&pExceptionObject, &v23);
  v31 = 0;
  v20 = *(_DWORD *)v23;
  sub_100015C0(&pExceptionObject, &v21);
  LOBYTE(v31) = 1;
  v18 = *(_DWORD *)v21;
  v4 = v18;
  memset(v2, 0, 0x48u);
  sub_10001770(&v18, v2);
  v5 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v4 + 28))(v4, &v18);
  if ( v5 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_RevisionNumber in TUpdateIdentity::GetUpdateID()", v17);
    pExceptionObject = v5;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v2[1].Data1 = v18;
  v6 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v3 + 64))(v3, &v18);
  if ( v6 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_EulaAccepted in TUpdate::EualAccepted() const", v17);
    pExceptionObject = v6;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  LOBYTE(v2[1].Data2) = (__int16)v18 != 0;
  v7 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v3 + 32))(v3, &v18);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_AutoSelectOnWebSites in TUpdate::IsAutoSelected() const", v17);
    pExceptionObject = v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  HIBYTE(v2[1].Data2) = (__int16)v18 == 0;
  v8 = sub_10001530(&pExceptionObject);
  v9 = v20;
  v2[2].Data4[1] = v8 == 0;
  v20 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v9 + 28))(v9, &v18);
  if ( v20 < 0 )
  {
    sub_10001040(
      (wchar_t *)L"Failed to get_CanRequestUserInput in TInstallationBehavior::CanRequestUserInput() const",
      v17);
    _CxxThrowException(&v20, (_ThrowInfo *)&_TI1J);
  }
  LOBYTE(v2[1].Data3) = (__int16)v18 != 0;
  v20 = (*(int (__stdcall **)(int, char *))(*(_DWORD *)v3 + 124))(v3, v25);
  if ( v20 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_MaxDownloadSize in in TUpdate::GetMaxDownloadSize( ... )", v17);
    _CxxThrowException(&v20, (_ThrowInfo *)&_TI1J);
  }
  v10 = v26;
  *(_DWORD *)&v2[1].Data4[4] = v27;
  *(_DWORD *)v2[1].Data4 = v10;
  v11 = (*(int (__stdcall **)(int, char *))(*(_DWORD *)v3 + 128))(v3, v28);
  if ( v11 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_MinDownloadSize in in TUpdate::GetMinDownloadSize( ... )", v17);
    v20 = v11;
    _CxxThrowException(&v20, (_ThrowInfo *)&_TI1J);
  }
  v12 = v29;
  *(_DWORD *)&v2[2].Data2 = v30;
  v2[2].Data1 = v12;
  v13 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v9 + 32))(v9, &v18);
  if ( v13 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Impact in TInstallationBehavior::GetInstallationImpact() const", v17);
    v20 = v13;
    _CxxThrowException(&v20, (_ThrowInfo *)&_TI1J);
  }
  result = v18;
  v2[2].Data4[0] = v18;
  LOBYTE(v31) = 0;
  v15 = v22;
  if ( v22 != nullptr && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v15)(v15);
    result = (_BYTE)v15 + 12;
    if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 0 )
      result = (*(int (__thiscall **)(volatile signed __int32 *))(*v15 + 4))(v15);
  }
  v31 = -1;
  v16 = v24;
  if ( v24 != nullptr && _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v16)(v16);
    result = (_BYTE)v16 + 12;
    if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 0 )
      return (*(int (__thiscall **)(volatile signed __int32 *))(*v16 + 4))(v16);
  }
  return result;
}

// Address: 0x10009750
int __cdecl Search(const wchar_t *a1)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_10041644 = 0;
  sub_10001040((wchar_t *)L"Search<<", v3);
  sub_100021A0(a1);
  sub_10001040((wchar_t *)L"Search>>", v3);
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return 1;
}

// Address: 0x10009810
int GetSearchResultCode()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  _DWORD ***v1; // eax
  int v2; // esi
  int v4; // [esp+0h] [ebp-30h] BYREF
  _DWORD v5[5]; // [esp+10h] [ebp-20h] BYREF
  int v6; // [esp+2Ch] [ebp-4h]

  v5[4] = &v4;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v5, ModuleState);
  v6 = 1;
  dword_10041644 = 0;
  v5[3] = 6;
  v1 = (_DWORD ***)sub_100020A0();
  v2 = sub_10005A70(v1);
  v6 = -1;
  if ( v5[1] != 0 )
    sub_1000F87C(0, v5[0]);
  return v2;
}

// Address: 0x100098C0
int GetUpdateCountFromSearch()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_10041644 = 0;
  v4[3] = -1;
  v1 = sub_10002CD0();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x10009970
int __cdecl GetItemTitleFromSearch(void *ArgList, _WORD *a2)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  _WORD *v7; // edx
  __int16 *v8; // ecx
  __int16 v9; // ax
  int v11; // [esp+0h] [ebp-34h] BYREF
  int v12[4]; // [esp+10h] [ebp-24h] BYREF
  int v13[2]; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+30h] [ebp-4h]

  v13[1] = (int)&v11;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v12, ModuleState);
  v14 = 1;
  v3 = -1;
  dword_10041644 = 0;
  v12[3] = -1;
  v4 = sub_1000CCFE();
  if ( v4 == 0 )
    sub_10007E20(-2147467259);
  v13[0] = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4) + 16;
  LOBYTE(v14) = 2;
  v5 = sub_10002DC0(ArgList, (int)v13);
  v6 = v13[0];
  if ( v5 != 0 )
  {
    v7 = a2;
    v3 = *(_DWORD *)(v13[0] - 12);
    if ( a2 != nullptr )
    {
      v8 = (__int16 *)v13[0];
      do
      {
        v9 = *v8;
        *v7++ = *v8++;
      }
      while ( v9 != 0 );
    }
  }
  LOBYTE(v14) = 1;
  if ( _InterlockedDecrement((volatile signed __int32 *)(v6 - 16 + 12)) <= 0 )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v6 - 16) + 4))(*(_DWORD *)(v6 - 16), v6 - 16);
  v14 = -1;
  if ( v12[1] != 0 )
    sub_1000F87C(0, v12[0]);
  return v3;
}

// Address: 0x10009AA0
int __cdecl GetUpdateStructFromSearch(int ArgList)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  volatile signed __int32 *v2; // esi
  int v4; // [esp+0h] [ebp-38h] BYREF
  int v5[2]; // [esp+10h] [ebp-28h] BYREF
  int v6; // [esp+18h] [ebp-20h] BYREF
  volatile signed __int32 *v7; // [esp+1Ch] [ebp-1Ch]
  int v8; // [esp+24h] [ebp-14h]
  int *v9; // [esp+28h] [ebp-10h]
  int v10; // [esp+34h] [ebp-4h]

  v9 = &v4;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v5, ModuleState);
  v10 = 1;
  dword_10041644 = 0;
  v8 = 0;
  sub_100029C0((int)&v6, ArgList);
  LOBYTE(v10) = 2;
  sub_10009460((int **)&v6);
  LOBYTE(v10) = 1;
  v8 = 1;
  if ( v7 != nullptr )
  {
    v2 = v7;
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
  }
  v10 = -1;
  if ( v5[1] != 0 )
    sub_1000F87C(0, v5[0]);
  return 1;
}

// Address: 0x10009BB0
int GetUpdateCount()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  int v3; // [esp+0h] [ebp-30h] BYREF
  _DWORD v4[5]; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  v4[4] = &v3;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, ModuleState);
  v5 = 1;
  dword_10041644 = 0;
  v4[3] = -1;
  v1 = sub_10003A00();
  v5 = -1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v1;
}

// Address: 0x10009C60
int __cdecl GetItemTitle(void *ArgList, _WORD *a2)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  _WORD *v7; // edx
  __int16 *v8; // ecx
  __int16 v9; // ax
  int v11; // [esp+0h] [ebp-34h] BYREF
  int v12[4]; // [esp+10h] [ebp-24h] BYREF
  int v13[2]; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+30h] [ebp-4h]

  v13[1] = (int)&v11;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v12, ModuleState);
  v14 = 1;
  v3 = -1;
  dword_10041644 = 0;
  v12[3] = -1;
  v4 = sub_1000CCFE();
  if ( v4 == 0 )
    sub_10007E20(-2147467259);
  v13[0] = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4) + 16;
  LOBYTE(v14) = 2;
  v5 = sub_10003AF0(ArgList, (int)v13);
  v6 = v13[0];
  if ( v5 != 0 )
  {
    v7 = a2;
    v3 = *(_DWORD *)(v13[0] - 12);
    if ( a2 != nullptr )
    {
      v8 = (__int16 *)v13[0];
      do
      {
        v9 = *v8;
        *v7++ = *v8++;
      }
      while ( v9 != 0 );
    }
  }
  LOBYTE(v14) = 1;
  if ( _InterlockedDecrement((volatile signed __int32 *)(v6 - 16 + 12)) <= 0 )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v6 - 16) + 4))(*(_DWORD *)(v6 - 16), v6 - 16);
  v14 = -1;
  if ( v12[1] != 0 )
    sub_1000F87C(0, v12[0]);
  return v3;
}

// Address: 0x10009D90
int __cdecl GetUpdateStruct(int ArgList)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  volatile signed __int32 *v2; // esi
  int v4; // [esp+0h] [ebp-38h] BYREF
  int v5[2]; // [esp+10h] [ebp-28h] BYREF
  int v6; // [esp+18h] [ebp-20h] BYREF
  volatile signed __int32 *v7; // [esp+1Ch] [ebp-1Ch]
  int v8; // [esp+24h] [ebp-14h]
  int *v9; // [esp+28h] [ebp-10h]
  int v10; // [esp+34h] [ebp-4h]

  v9 = &v4;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v5, ModuleState);
  v10 = 1;
  dword_10041644 = 0;
  v8 = 0;
  sub_100034F0((int)&v6, ArgList);
  LOBYTE(v10) = 2;
  sub_10009460((int **)&v6);
  LOBYTE(v10) = 1;
  v8 = 1;
  if ( v7 != nullptr )
  {
    v2 = v7;
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 0 )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 0 )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v2 + 4))(v2);
    }
  }
  v10 = -1;
  if ( v5[1] != 0 )
    sub_1000F87C(0, v5[0]);
  return 1;
}

// Address: 0x10009EA0
int GetSearchResult()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  _DWORD v3[2]; // [esp+4h] [ebp-8h] BYREF

  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  v1 = dword_10041644;
  if ( v3[1] != 0 )
    sub_1000F87C(0, v3[0]);
  return v1;
}

// Address: 0x10009EE0
int GetTestFlag()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v1; // esi
  _DWORD v3[2]; // [esp+4h] [ebp-8h] BYREF

  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  v1 = dword_1003E91C;
  if ( v3[1] != 0 )
    sub_1000F87C(0, v3[0]);
  return v1;
}

// Address: 0x10009F20
unsigned int __cdecl SetTestFlag(unsigned int a1)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  unsigned int result; // eax
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v3, ModuleState);
  result = a1;
  if ( (a1 & 0x60) == 0x60 )
    result = a1 & 0xFFFEFEFF;
  dword_1003E91C = result;
  if ( v3[1] != 0 )
    return sub_1000F87C(0, v3[0]);
  return result;
}

// Address: 0x10009F70
HANDLE Test()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  HANDLE result; // eax
  int v2[2]; // [esp-10h] [ebp-40h] BYREF
  int v3; // [esp-8h] [ebp-38h]
  int v4; // [esp-4h] [ebp-34h]
  int v5[4]; // [esp+0h] [ebp-30h] BYREF
  _DWORD v6[2]; // [esp+10h] [ebp-20h] BYREF
  int *v7; // [esp+1Ch] [ebp-14h]
  int *v8; // [esp+20h] [ebp-10h]
  int v9; // [esp+2Ch] [ebp-4h]

  v8 = v5;
  ModuleState = AfxGetModuleState();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v6, ModuleState);
  v9 = 1;
  result = sub_10001040((wchar_t *)L"Internal test start\r\n", v5[0]);
  if ( (dword_1003E91C & 1) != 0 )
    result = sub_10001040((wchar_t *)L"==== Update Flag : %08X ====\r\n", ArgList);
  if ( (dword_1003E91C & 2) != 0 )
  {
    sub_10001040((wchar_t *)L"======== Dump Windows Update Agent Information Start ========", v5[0]);
    sub_1000B280(v5[0], v5[1]);
    result = sub_10001040((wchar_t *)L"======== Dump Windows Update Agent Information End ========\r\n", v5[0]);
  }
  if ( (dword_1003E91C & 4) != 0 )
  {
    sub_10001040((wchar_t *)L"======== Dump Warning Start ========", v5[0]);
    sub_1000B4A0(v5[0], v5[1]);
    result = sub_10001040((wchar_t *)L"======== Dump Warning End   ========\r\n", v5[0]);
  }
  if ( (dword_1003E91C & 0x10) != 0 )
  {
    sub_10001040((wchar_t *)L"======== Dump Root Category Start ========", v5[0]);
    v4 = (dword_1003E91C & 0x60) == 96;
    v3 = dword_1003E91C & 0x20;
    v7 = v2;
    sub_10002780(v2);
    sub_1000B850(v2[0], v2[1], v3, v4);
    result = sub_10001040((wchar_t *)L"======== Dump Root Category End   ========\r\n", v5[0]);
  }
  if ( (dword_1003E91C & 0x100) != 0 )
  {
    sub_10001040((wchar_t *)L"======== Dump All Updates Start ========", v5[0]);
    v4 = dword_1003E91C & 0x400;
    v3 = dword_1003E91C & 0x200;
    v7 = v2;
    sub_100028A0((int)v2);
    sub_1000C000(v2[0], v2[1], v3, v4);
    result = sub_10001040((wchar_t *)L"======== Dump All Updates End   ========\r\n", v5[0]);
  }
  if ( (dword_1003E91C & 0x10000) != 0 )
  {
    sub_10001040((wchar_t *)L"======== Dump Current Updates Start ========", v5[0]);
    v4 = dword_1003E91C & 0x40000;
    v3 = dword_1003E91C & 0x20000;
    v7 = v2;
    sub_10003410((int)v2);
    sub_1000C000(v2[0], v2[1], v3, v4);
    result = sub_10001040((wchar_t *)L"======== Dump Current Updates End   ========\r\n", v5[0]);
  }
  v9 = -1;
  if ( v6[1] != 0 )
    return (HANDLE)sub_1000F87C(0, v6[0]);
  return result;
}

// Address: 0x1000A160
int __stdcall sub_1000A160(int a1, int ArgList, int a3)
{
  int v3; // esi
  volatile signed __int32 *v4; // esi
  int v6; // [esp+0h] [ebp-40h] BYREF
  int v7; // [esp+20h] [ebp-20h] BYREF
  volatile signed __int32 *v8; // [esp+24h] [ebp-1Ch]
  _DWORD pExceptionObject[2]; // [esp+2Ch] [ebp-14h] BYREF
  int v10; // [esp+3Ch] [ebp-4h]

  pExceptionObject[1] = &v6;
  v10 = 0;
  sub_100061E0(&ArgList, &v7);
  LOBYTE(v10) = 1;
  v3 = (*(int (__stdcall **)(_DWORD, int *))(**(_DWORD **)v7 + 40))(*(_DWORD *)v7, &ArgList);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_PercentComplete in TProgress::GetPercentComplete()", v6);
    pExceptionObject[0] = v3;
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"download : %d%% completed", ArgList);
  LOBYTE(v10) = 0;
  v4 = v8;
  if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
  }
  return 0;
}

// Address: 0x1000A2A0
int __thiscall sub_1000A2A0(int this)
{
  int v2; // eax
  int v3; // eax

  *(_DWORD *)this = &CUpdateDownloader::`vftable';
  v2 = *(_DWORD *)(this + 32);
  if ( v2 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v3 = *(_DWORD *)(this + 28);
  if ( v3 != 0 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(this + 28));
  return sub_10005AE0((volatile signed __int32 **)this);
}

// Address: 0x1000A320
int __thiscall sub_1000A320(int this, int pExceptionObject)
{
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  int v9; // ebp
  int result; // eax
  int v11; // esi
  VARIANTARG pvarg; // [esp+14h] [ebp-10h] BYREF

  VariantInit(&pvarg);
  v3 = pExceptionObject;
  v4 = (*(int (__stdcall **)(_DWORD, int))(***(_DWORD ***)(this + 4) + 56))(**(_DWORD **)(this + 4), pExceptionObject);
  if ( v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to put_Updates in CUpdateDownloader::Begin( %08X )", v3);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v5 = operator new(8u);
  if ( v5 != nullptr )
  {
    v5[1] = 1;
    *v5 = &CDownloadProgressChangedCallback::`vftable';
  }
  else
  {
    v5 = nullptr;
  }
  *(_DWORD *)(this + 28) = v5;
  v6 = operator new(8u);
  if ( v6 != nullptr )
  {
    v6[1] = 1;
    *v6 = &CDownloadCompletedCallback::`vftable';
    v7 = v6;
  }
  else
  {
    v7 = nullptr;
  }
  v8 = *(_DWORD **)(this + 4);
  v9 = *(_DWORD *)&pvarg.vt;
  *(_DWORD *)(this + 32) = v7;
  result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD *, int, ULONG, LONG, LONG, _DWORD))(*(_DWORD *)*v8 + 60))(
             *v8,
             *(_DWORD *)(this + 28),
             v7,
             v9,
             pvarg.decVal.Hi32,
             pvarg.lVal,
             pvarg.cyVal.Hi,
             *(_DWORD *)(this + 12));
  v11 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to BeginDownload in CUpdateDownloader::Begin( %08X )", v3);
    pExceptionObject = v11;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return result;
}

// Address: 0x1000A420
int __thiscall sub_1000A420(int this)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+8h] [ebp-8h]
  int pExceptionObject; // [esp+Ch] [ebp-4h] BYREF

  pExceptionObject = this;
  result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))(***(_DWORD ***)(this + 4) + 68))(
             **(_DWORD **)(this + 4),
             **(_DWORD **)(this + 12),
             *(_DWORD *)(this + 20));
  v2 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to EndDownload in CUpdateDownloader::End()", v3);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return result;
}

// Address: 0x1000A470
int __thiscall sub_1000A470(int this, int pExceptionObject)
{
  int v2; // ebx
  int v4; // edi
  int result; // eax
  int v6; // esi

  v2 = pExceptionObject;
  v4 = (*(int (__stdcall **)(_DWORD, int))(***(_DWORD ***)(this + 4) + 56))(**(_DWORD **)(this + 4), pExceptionObject);
  if ( v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to put_Updates in CUpdateDownloader::DoOperating( %08X)", v2);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  result = (*(int (__stdcall **)(_DWORD, _DWORD))(***(_DWORD ***)(this + 4) + 64))(
             **(_DWORD **)(this + 4),
             *(_DWORD *)(this + 20));
  v6 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to Download in CUpdateDownloader::DoOperating( %08X)", v2);
    pExceptionObject = v6;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return result;
}

// Address: 0x1000A4F0
int __stdcall sub_1000A4F0(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  result = -2147467261;
  if ( a3 != nullptr )
  {
    *a3 = 0;
    if ( sub_100079E0(&dword_1002F23C, a2) != 0 || sub_100079E0(dword_10033580, a2) != 0 )
    {
      *a3 = a1;
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1);
      return 0;
    }
    else
    {
      return -2147467262;
    }
  }
  return result;
}

// Address: 0x1000A550
int __stdcall sub_1000A550(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  result = -2147467261;
  if ( a3 != nullptr )
  {
    *a3 = 0;
    if ( sub_100079E0(&dword_1002F23C, a2) != 0 || sub_100079E0(dword_10033590, a2) != 0 )
    {
      *a3 = a1;
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1);
      return 0;
    }
    else
    {
      return -2147467262;
    }
  }
  return result;
}

// Address: 0x1000A5B0
int __stdcall sub_1000A5B0(int a1, int ArgList, int a3)
{
  int v3; // esi
  volatile signed __int32 *v4; // esi
  int v6; // [esp+0h] [ebp-40h] BYREF
  int v7; // [esp+20h] [ebp-20h] BYREF
  volatile signed __int32 *v8; // [esp+24h] [ebp-1Ch]
  _DWORD pExceptionObject[2]; // [esp+2Ch] [ebp-14h] BYREF
  int v10; // [esp+3Ch] [ebp-4h]

  pExceptionObject[1] = &v6;
  v10 = 0;
  sub_10006410(&ArgList, &v7);
  LOBYTE(v10) = 1;
  v3 = (*(int (__stdcall **)(_DWORD, int *))(**(_DWORD **)v7 + 36))(*(_DWORD *)v7, &ArgList);
  if ( v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_PercentComplete in TProgress::GetPercentComplete()", v6);
    pExceptionObject[0] = v3;
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"installation : %d%% completed", ArgList);
  LOBYTE(v10) = 0;
  v4 = v8;
  if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v4)(v4);
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4);
  }
  return 0;
}

// Address: 0x1000A6F0
int __thiscall sub_1000A6F0(int this)
{
  int v2; // eax
  int v3; // eax

  *(_DWORD *)this = &CUpdateInstaller::`vftable';
  v2 = *(_DWORD *)(this + 32);
  if ( v2 != 0 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v3 = *(_DWORD *)(this + 28);
  if ( v3 != 0 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(this + 28));
  return sub_10005DE0((volatile signed __int32 **)this);
}

// Address: 0x1000A770
int __thiscall sub_1000A770(int this, int pExceptionObject)
{
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  int v9; // ebp
  int result; // eax
  int v11; // esi
  VARIANTARG pvarg; // [esp+14h] [ebp-10h] BYREF

  VariantInit(&pvarg);
  v3 = pExceptionObject;
  v4 = (*(int (__stdcall **)(_DWORD, int))(***(_DWORD ***)(this + 4) + 64))(**(_DWORD **)(this + 4), pExceptionObject);
  if ( v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to put_Updates in CUpdateInstaller::Begin( %08X )", v3);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v5 = operator new(8u);
  if ( v5 != nullptr )
  {
    v5[1] = 1;
    *v5 = &CInstallationProgressChangedCallback::`vftable';
  }
  else
  {
    v5 = nullptr;
  }
  *(_DWORD *)(this + 28) = v5;
  v6 = operator new(8u);
  if ( v6 != nullptr )
  {
    v6[1] = 1;
    *v6 = &CInstallationCompletedCallback::`vftable';
    v7 = v6;
  }
  else
  {
    v7 = nullptr;
  }
  v8 = *(_DWORD **)(this + 4);
  v9 = *(_DWORD *)&pvarg.vt;
  *(_DWORD *)(this + 32) = v7;
  result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD *, int, ULONG, LONG, LONG, _DWORD))(*(_DWORD *)*v8 + 68))(
             *v8,
             *(_DWORD *)(this + 28),
             v7,
             v9,
             pvarg.decVal.Hi32,
             pvarg.lVal,
             pvarg.cyVal.Hi,
             *(_DWORD *)(this + 12));
  v11 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to BeginInstall in CUpdateInstaller::Begin( %08X )", v3);
    pExceptionObject = v11;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return result;
}

// Address: 0x1000A870
int __thiscall sub_1000A870(int this)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+8h] [ebp-8h]
  int pExceptionObject; // [esp+Ch] [ebp-4h] BYREF

  pExceptionObject = this;
  result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))(***(_DWORD ***)(this + 4) + 76))(
             **(_DWORD **)(this + 4),
             **(_DWORD **)(this + 12),
             *(_DWORD *)(this + 20));
  v2 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to EndInstall in CUpdateInstaller::End()", v3);
    pExceptionObject = v2;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return result;
}

// Address: 0x1000A8C0
int __thiscall sub_1000A8C0(int this, int pExceptionObject)
{
  int v2; // ebx
  int v4; // edi
  int result; // eax
  int v6; // esi

  v2 = pExceptionObject;
  v4 = (*(int (__stdcall **)(_DWORD, int))(***(_DWORD ***)(this + 4) + 64))(**(_DWORD **)(this + 4), pExceptionObject);
  if ( v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to put_Updates in CUpdateInstaller::DoOperating( %08X )", v2);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  result = (*(int (__stdcall **)(_DWORD, _DWORD))(***(_DWORD ***)(this + 4) + 84))(
             **(_DWORD **)(this + 4),
             *(_DWORD *)(this + 20));
  v6 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to Install in CUpdateInstaller::DoOperating( %08X )", v2);
    pExceptionObject = v6;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return result;
}

// Address: 0x1000A940
BOOL __stdcall sub_1000A940(HWND hWnd, wchar_t *String2)
{
  BOOL v2; // edi
  HWND Window; // esi
  LONG WindowLongW; // eax
  WCHAR ClassName[260]; // [esp+14h] [ebp-20Ch] BYREF

  v2 = false;
  Window = GetWindow(hWnd, 5u);
  do
  {
    if ( Window == nullptr )
      break;
    WindowLongW = GetWindowLongW(Window, -16);
    v2 = ((unsigned int)&_ImageBase & WindowLongW) != 0
      && (WindowLongW & 0x8000000) == 0
      && (GetClassNameW(Window, ClassName, 260) != 0 && _wcsicmp(ClassName, String2) == 0
       || sub_1000A940(Window, String2) != 0);
    Window = GetWindow(Window, 2u);
  }
  while ( !v2 );
  return v2;
}

// Address: 0x1000AA10
int __cdecl sub_1000AA10(_DWORD *a1)
{
  _DWORD v2[10]; // [esp+0h] [ebp-28h] BYREF

  v2[6] = v2;
  CoInitialize(nullptr);
  v2[9] = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*a1 + 12))(*a1, a1[1]);
  operator delete(a1);
  CoUninitialize();
  return 0;
}

// Address: 0x1000AAA0
HANDLE __thiscall sub_1000AAA0(void *this, CWinThread *ExitCode)
{
  _DWORD *v3; // edi
  DWORD v4; // eax
  CWinThread *v5; // eax
  CWinThread *v6; // esi
  HANDLE result; // eax
  DWORD LastError; // eax
  void *pExceptionObject; // [esp+10h] [ebp-14h] BYREF
  int v10; // [esp+20h] [ebp-4h]
  void *retaddr; // [esp+24h] [ebp+0h]

  v3 = operator new(8u);
  v4 = (DWORD)ExitCode;
  *v3 = this;
  v3[1] = v4;
  v5 = (CWinThread *)operator new(0x44u);
  ExitCode = v5;
  v10 = 0;
  if ( v5 != nullptr )
    v6 = CWinThread::CWinThread(v5, (unsigned int (__cdecl *)(void *))sub_1000AA10, v3);
  else
    v6 = nullptr;
  v10 = -1;
  if ( CWinThread::CreateThread(v6, 0, 0, nullptr) != 0 )
  {
    do
    {
      if ( !GetExitCodeThread(*((HANDLE *)v6 + 11), (LPDWORD)&ExitCode) || ExitCode != (CWinThread *)259 )
      {
        operator delete(v3);
        (*(void (__thiscall **)(CWinThread *, int))(*(_DWORD *)v6 + 4))(v6, 1);
        pExceptionObject = retaddr;
        _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
      }
      result = (HANDLE)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
    }
    while ( result == nullptr );
    *((_DWORD *)v6 + 10) = 1;
  }
  else
  {
    operator delete(v3);
    if ( v6 != nullptr )
      (*(void (__thiscall **)(CWinThread *, int))(*(_DWORD *)v6 + 4))(v6, 1);
    LastError = GetLastError();
    return sub_10001040(
             (wchar_t *)L"Failed to CreateThread in CUpdateDownloadAndInstallation::Begin with %d",
             LastError);
  }
  return result;
}

// Address: 0x1000ABD0
LRESULT __thiscall sub_1000ABD0(HWND *this)
{
  if ( *(this + 7) == nullptr )
    *(this + 7) = FindWindowW(nullptr, L"Windows Update Installer");
  return SendMessageW(*(this + 7), 0x111u, 1u, 0);
}

// Address: 0x1000AC00
int __thiscall sub_1000AC00(int this, int pExceptionObject)
{
  int v2; // ebx
  int v4; // edi
  int result; // eax
  int v6; // esi

  v2 = pExceptionObject;
  v4 = (*(int (__stdcall **)(_DWORD, int))(***(_DWORD ***)(this + 4) + 64))(**(_DWORD **)(this + 4), pExceptionObject);
  if ( v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to put_Updates in CUpdateInstaller::DoOperating( %08X )", v2);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  result = (*(int (__stdcall **)(_DWORD, const WCHAR *, _DWORD))(***(_DWORD ***)(this + 4) + 88))(
             **(_DWORD **)(this + 4),
             L"Windows Update Installer",
             *(_DWORD *)(this + 20));
  v6 = result;
  if ( result < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to RunWizard in CUpdateInstaller::DoOperating( %08X )", v2);
    pExceptionObject = v6;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return result;
}

// Address: 0x1000AC90
int __thiscall sub_1000AC90(HWND *this)
{
  HWND v2; // eax

  if ( *(this + 8) == nullptr )
  {
    if ( *(this + 7) == nullptr )
      *(this + 7) = FindWindowW(nullptr, L"Windows Update Installer");
    v2 = *(this + 7);
    if ( v2 != nullptr && sub_1000A940(v2, (wchar_t *)L"msctls_progress32") )
    {
      *(this + 8) = (HWND)1;
      return 1;
    }
    *(this + 8) = nullptr;
  }
  return (int)*(this + 8);
}

// Address: 0x1000ACE0
LRESULT __thiscall sub_1000ACE0(HWND *this)
{
  if ( *(this + 7) == nullptr )
    *(this + 7) = FindWindowW(nullptr, L"Windows Update Installer");
  return SendMessageW(*(this + 7), 0x111u, 2u, 0);
}

// Address: 0x1000AD10
BOOL __thiscall sub_1000AD10(HWND *this)
{
  if ( *(this + 7) == nullptr )
    *(this + 7) = FindWindowW(nullptr, L"Windows Update Installer");
  return !sub_1000A940(*(this + 7), (wchar_t *)L"msctls_progress32");
}

// Address: 0x1000AD40
LONG __stdcall sub_1000AD40(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4));
}

// Address: 0x1000AD60
LONG __stdcall sub_1000AD60(volatile LONG *a1)
{
  LONG result; // eax

  result = InterlockedDecrement(a1 + 1);
  if ( result == 0 )
  {
    operator delete((void *)a1);
    return 0;
  }
  return result;
}

// Address: 0x1000AD90
int __stdcall sub_1000AD90(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  result = -2147467261;
  if ( a3 != nullptr )
  {
    *a3 = 0;
    if ( sub_100079E0(&dword_1002F23C, a2) != 0 || sub_100079E0(dword_10033A18, a2) != 0 )
    {
      *a3 = a1;
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1);
      return 0;
    }
    else
    {
      return -2147467262;
    }
  }
  return result;
}

// Address: 0x1000ADF0
int __stdcall sub_1000ADF0(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  result = -2147467261;
  if ( a3 != nullptr )
  {
    *a3 = 0;
    if ( sub_100079E0(&dword_1002F23C, a2) != 0 || sub_100079E0(dword_10033A28, a2) != 0 )
    {
      *a3 = a1;
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1);
      return 0;
    }
    else
    {
      return -2147467262;
    }
  }
  return result;
}

// Address: 0x1000AE50
void __stdcall nullsub_2(int a1)
{
  ;
}

// Address: 0x1000AE60
void nullsub_3()
{
  ;
}

// Address: 0x1000AE70
void __thiscall sub_1000AE70(int this, OLECHAR *psz)
{
  OLECHAR *v3; // ebx
  int v4; // esi
  _DWORD pExceptionObject[4]; // [esp+14h] [ebp-10h] BYREF

  if ( psz != nullptr )
  {
    v3 = SysAllocString(psz);
    if ( v3 == nullptr )
      sub_10007E20(-2147024882);
  }
  else
  {
    v3 = nullptr;
  }
  pExceptionObject[3] = 0;
  v4 = (*(int (__stdcall **)(_DWORD, OLECHAR *, _DWORD))(***(_DWORD ***)(this + 4) + 76))(
         **(_DWORD **)(this + 4),
         v3,
         *(_DWORD *)(this + 20));
  *(_DWORD *)(this + 28) = v4 >= 0;
  if ( v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to Search in CUpdateSearcher::DoOperating( %s )", (int)psz);
    pExceptionObject[0] = v4;
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  SysFreeString(v3);
}

// Address: 0x1000AF40
_DWORD *__stdcall sub_1000AF40(_DWORD *pExceptionObject, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v6; // [esp+0h] [ebp-20h]

  v2 = a2;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *v2 = 0;
  v2[1] = 0;
  sub_100066A0((int)v2, (int)v3);
  v4 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*pExceptionObject + 36))(*pExceptionObject, *v2);
  if ( (int)v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Children in TCategory::GetChildren()", v6);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v2;
}

// Address: 0x1000AFF0
_DWORD *__stdcall sub_1000AFF0(_DWORD *pExceptionObject, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v6; // [esp+0h] [ebp-20h]

  v2 = a2;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *v2 = 0;
  v2[1] = 0;
  sub_10006840((int)v2, (int)v3);
  v4 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*pExceptionObject + 60))(*pExceptionObject, *v2);
  if ( (int)v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Updates in TCategory::GetUpdates()", v6);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v2;
}

// Address: 0x1000B0A0
void __userpurge sub_1000B0A0(_DWORD *a1@<eax>, OLECHAR *a2@<ecx>, volatile signed __int32 **pExceptionObject)
{
  volatile signed __int32 **v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  BSTR bstrString; // [esp+8h] [ebp-4h] BYREF

  bstrString = a2;
  v3 = (volatile signed __int32 **)(*(int (__stdcall **)(_DWORD, BSTR *))(*(_DWORD *)*a1 + 136))(*a1, &bstrString);
  if ( (int)v3 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_MsrcSeverity in TUpdate::GetSeverity( ... ) const", v5);
    pExceptionObject = v3;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  if ( bstrString != nullptr )
    v4 = wcslen(bstrString);
  else
    v4 = 0;
  sub_10007E70(pExceptionObject, bstrString, v4);
  SysFreeString(bstrString);
}

// Address: 0x1000B120
_DWORD *__stdcall sub_1000B120(_DWORD *pExceptionObject, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v6; // [esp+0h] [ebp-20h]

  v2 = a2;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *v2 = 0;
  v2[1] = 0;
  sub_10006840((int)v2, (int)v3);
  v4 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*pExceptionObject + 36))(*pExceptionObject, *v2);
  if ( (int)v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_BundledUpdates in in TUpdate::GetBundledUpdates() const", v6);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v2;
}

// Address: 0x1000B1D0
_DWORD *__stdcall sub_1000B1D0(_DWORD *pExceptionObject, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v6; // [esp+0h] [ebp-20h]

  v2 = a2;
  v3 = operator new(4u);
  if ( v3 != nullptr )
    *v3 = 0;
  else
    v3 = nullptr;
  *v2 = 0;
  v2[1] = 0;
  sub_100066A0((int)v2, (int)v3);
  v4 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*pExceptionObject + 44))(*pExceptionObject, *v2);
  if ( (int)v4 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Categories in in TUpdate::GetCategories()", v6);
    pExceptionObject = v4;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  return v2;
}

// Address: 0x1000B280
int sub_1000B280()
{
  _DWORD *v0; // eax
  LPVOID *v1; // esi
  HRESULT Instance; // edi
  int v3; // ebx
  int v4; // ebp
  LPVOID v5; // ecx
  int v6; // edi
  int v7; // esi
  _WORD *v9; // [esp+2Ch] [ebp-58h]
  int v10; // [esp+30h] [ebp-54h]
  int pExceptionObject; // [esp+48h] [ebp-3Ch] BYREF
  LPVOID *ppv[2]; // [esp+4Ch] [ebp-38h] BYREF
  _WORD v13[4]; // [esp+54h] [ebp-30h] BYREF
  BSTR bstrString; // [esp+5Ch] [ebp-28h]
  int v15; // [esp+64h] [ebp-20h]
  int v16; // [esp+68h] [ebp-1Ch]
  int v17; // [esp+70h] [ebp-14h]
  int v18; // [esp+80h] [ebp-4h]

  v0 = operator new(4u);
  if ( v0 != nullptr )
    *v0 = 0;
  else
    v0 = nullptr;
  ppv[0] = nullptr;
  ppv[1] = nullptr;
  sub_1000C430(ppv, v0);
  v18 = 0;
  v1 = ppv[0];
  Instance = CoCreateInstance(&stru_1002B8EC, nullptr, 1u, &stru_1002B50C, ppv[0]);
  if ( Instance < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to CoCreateInstance in ::DumpUpdateAgentInfo()", v10);
    pExceptionObject = Instance;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v3 = v16;
  v4 = v17;
  v9 = v13;
  v13[0] = 22;
  v5 = *v1;
  LOWORD(v15) = 8;
  v6 = v15;
  pExceptionObject = (*(int (__stdcall **)(LPVOID, int, int, const wchar_t *, int, _WORD *))(*(_DWORD *)v5 + 28))(
                       v5,
                       v15,
                       v16,
                       L"ApiMajorVersion",
                       v17,
                       v13);
  if ( pExceptionObject < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to GetInfo( \"ApiMajorVersion\", ... ) in ::DumpUpdateAgentInfo()", v10);
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Major : %d", (int)bstrString);
  pExceptionObject = (*(int (__stdcall **)(LPVOID, int, int, const wchar_t *, int, _WORD *))(*(_DWORD *)*v1 + 28))(
                       *v1,
                       v6,
                       v3,
                       L"ApiMinorVersion",
                       v4,
                       v13);
  if ( pExceptionObject < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to GetInfo( \"ApiMinorVersion\", ... ) in ::DumpUpdateAgentInfo()", v10);
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Minor : %d", (int)bstrString);
  v13[0] = 8;
  v7 = (*(int (__stdcall **)(LPVOID, int, int, const wchar_t *, int, _WORD *))(*(_DWORD *)*v1 + 28))(
         *v1,
         v6,
         v3,
         L"ProductVersionString",
         v4,
         v13);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to GetInfo( \"ProductVersionString\", ... ) in ::DumpUpdateAgentInfo()", v10);
    pExceptionObject = v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Version : %s", (int)bstrString);
  SysFreeString(bstrString);
  v18 = -1;
  return sub_10001390((int)ppv);
}

// Address: 0x1000B4A0
_DWORD *sub_1000B4A0()
{
  int v0; // ebx
  int v1; // eax
  char *v2; // esi
  int v3; // edi
  _DWORD *result; // eax
  int v5; // [esp+0h] [ebp-24h]
  int ArgList; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  v0 = sub_100023E0();
  sub_10001040((wchar_t *)L"==== Warnings : %d ====", v0);
  v1 = sub_1000CCFE();
  v2 = nullptr;
  if ( v1 == 0 )
    sub_10007E20(-2147467259);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 12))(v1) + 16;
  ArgList = v3;
  v7 = 0;
  if ( v0 > 0 )
  {
    do
    {
      sub_100025C0(v2);
      sub_100026B0(v2, (int)&ArgList);
      sub_100024D0(v2);
      sub_10001040((wchar_t *)L"%d : %08X, %d", (int)v2);
      v3 = ArgList;
      sub_10001040((wchar_t *)L"%s", ArgList);
      ++v2;
    }
    while ( (int)v2 < v0 );
  }
  sub_10001040((wchar_t *)L"==== Dump Warning End ====\r\n", v5);
  result = (_DWORD *)(v3 - 16);
  v7 = -1;
  if ( _InterlockedDecrement((volatile signed __int32 *)(v3 - 16 + 12)) <= 0 )
    return (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*result + 4))(*result, v3 - 16);
  return result;
}

// Address: 0x1000B5A0
_DWORD *__cdecl sub_1000B5A0(int *a1, volatile signed __int32 *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  OLECHAR *v8; // ecx
  OLECHAR *v9; // ecx
  int v10; // ebp
  int v11; // edi
  int v12; // esi
  int v13; // esi
  _DWORD *result; // eax
  int v15[2]; // [esp-10h] [ebp-48h] BYREF
  int v16; // [esp-8h] [ebp-40h]
  int v17; // [esp-4h] [ebp-3Ch]
  int v18; // [esp+0h] [ebp-38h]
  int v19; // [esp+10h] [ebp-28h] BYREF
  int ArgList; // [esp+14h] [ebp-24h] BYREF
  int v21; // [esp+18h] [ebp-20h] BYREF
  int pExceptionObject; // [esp+1Ch] [ebp-1Ch] BYREF
  int v23; // [esp+20h] [ebp-18h] BYREF
  int v24; // [esp+24h] [ebp-14h] BYREF
  int *v25; // [esp+28h] [ebp-10h]
  int v26; // [esp+34h] [ebp-4h]

  v26 = 0;
  v4 = *a1;
  if ( *a1 == 0 )
  {
    sub_10001040((wchar_t *)L"ICategory is NULL - ::DumpCategory( ... )", v18);
    pExceptionObject = -2147024809;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v19 = *a1;
  v5 = sub_1000CCFE();
  if ( v5 == 0 )
    sub_10007E20(-2147467259);
  ArgList = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5) + 16;
  LOBYTE(v26) = 1;
  v6 = sub_1000CCFE();
  if ( v6 == 0 )
    sub_10007E20(-2147467259);
  v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6) + 16;
  LOBYTE(v26) = 2;
  v7 = sub_1000CCFE();
  if ( v7 == 0 )
    sub_10007E20(-2147467259);
  pExceptionObject = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7) + 16;
  LOBYTE(v26) = 3;
  sub_10001190(&v19, (OLECHAR *)&ArgList, (int)&ArgList);
  sub_10001210(&v19, v8, (int)&v21);
  sub_10001310(&v19, v9, (int)&pExceptionObject);
  v10 = ArgList;
  sub_10001040((wchar_t *)L"Category ID : %s", ArgList);
  v11 = v21;
  sub_10001040((wchar_t *)L"Description : %s", v21);
  v12 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v4 + 48))(v4, &v24);
  if ( v12 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Order in TCategory::GetOrder()", v18);
    v23 = v12;
    _CxxThrowException(&v23, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Order : %d", v24);
  v13 = pExceptionObject;
  sub_10001040((wchar_t *)L"Type : %s", pExceptionObject);
  if ( a4 != 0 )
  {
    v17 = 0;
    v16 = 0;
    v25 = v15;
    sub_1000AFF0(&v19, v15);
    sub_1000C000(v15[0], v15[1], v16, v17);
  }
  if ( a3 != 0 )
  {
    sub_10001040((wchar_t *)L"==== Dump Children Categories Start ====", v18);
    v17 = a4;
    v16 = a3;
    v25 = v15;
    sub_1000AF40(&v19, v15);
    sub_1000B850(v15[0], v15[1], v16, v17);
    sub_10001040((wchar_t *)L"==== Dump Children Categories End ====\r\n", v15[0]);
  }
  LOBYTE(v26) = 2;
  if ( _InterlockedDecrement((volatile signed __int32 *)(v13 - 16 + 12)) <= 0 )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v13 - 16) + 4))(*(_DWORD *)(v13 - 16), v13 - 16);
  LOBYTE(v26) = 1;
  if ( _InterlockedDecrement((volatile signed __int32 *)(v11 - 16 + 12)) <= 0 )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v11 - 16) + 4))(*(_DWORD *)(v11 - 16), v11 - 16);
  result = (_DWORD *)(v10 - 16);
  LOBYTE(v26) = 0;
  if ( _InterlockedDecrement((volatile signed __int32 *)(v10 - 16 + 12)) <= 0 )
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*result + 4))(*result, v10 - 16);
  v26 = -1;
  if ( a2 != nullptr && _InterlockedExchangeAdd(a2 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))a2)(a2);
    result = a2 + 3;
    if ( _InterlockedExchangeAdd(a2 + 3, 0xFFFFFFFF) == 0 )
      return (_DWORD *)(*(int (__thiscall **)(volatile signed __int32 *))(*a2 + 4))(a2);
  }
  return result;
}

// Address: 0x1000B850
int __cdecl sub_1000B850(int *a1, volatile signed __int32 *a2, int a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int (__stdcall *v6)(int, int *); // edx
  int v7; // esi
  int v8; // esi
  int v9; // eax
  volatile signed __int32 *v10; // ebx
  volatile signed __int32 *v11; // esi
  int result; // eax
  int v13; // [esp+0h] [ebp-38h]
  int pExceptionObject; // [esp+14h] [ebp-24h] BYREF
  int ArgList; // [esp+18h] [ebp-20h] BYREF
  int v16; // [esp+1Ch] [ebp-1Ch] BYREF
  int v17; // [esp+20h] [ebp-18h]
  int v18; // [esp+24h] [ebp-14h] BYREF
  volatile signed __int32 *v19; // [esp+28h] [ebp-10h]
  int v20; // [esp+34h] [ebp-4h]

  v4 = 0;
  v20 = 0;
  v5 = *a1;
  if ( *a1 == 0 )
  {
    sub_10001040((wchar_t *)L"ICategoryCollection is NULL - ::DumpCategories( ... )", v13);
    pExceptionObject = -2147024809;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v6 = *(int (__stdcall **)(int, int *))(*(_DWORD *)v5 + 36);
  v16 = *a1;
  v7 = v6(v5, &ArgList);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Count in TCollection::GetCount() const", v13);
    pExceptionObject = v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = ArgList;
  v17 = ArgList;
  sub_10001040((wchar_t *)L"==== Category Count : %d ====", ArgList);
  v9 = sub_1000CCFE();
  if ( v9 == 0 )
    sub_10007E20(-2147467259);
  pExceptionObject = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9) + 16;
  LOBYTE(v20) = 1;
  if ( v8 > 0 )
  {
    do
    {
      sub_10006060(&v16, &v18, v4);
      LOBYTE(v20) = 2;
      ArgList = *(_DWORD *)v18;
      sub_10001290(&ArgList, (OLECHAR *)ArgList, (int)&pExceptionObject);
      sub_10001040((wchar_t *)L"== %d. %s ==", v4);
      v10 = v19;
      ArgList = v18;
      if ( v19 != nullptr )
        _InterlockedExchangeAdd(v19 + 2, 1u);
      sub_1000B5A0((int *)ArgList, v10, a3, a4);
      sub_10001040((wchar_t *)L"== Category %d End ==\r\n", v4);
      LOBYTE(v20) = 1;
      if ( v19 != nullptr )
      {
        v11 = v19;
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 0 )
        {
          (**(void (__thiscall ***)(volatile signed __int32 *))v11)(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 0 )
            (*(void (__thiscall **)(volatile signed __int32 *))(*v11 + 4))(v11);
        }
      }
      ++v4;
    }
    while ( v4 < v17 );
  }
  sub_10001040((wchar_t *)L"==== Dump Categories End ====", v13);
  LOBYTE(v20) = 0;
  result = pExceptionObject - 16;
  if ( _InterlockedDecrement((volatile signed __int32 *)(pExceptionObject - 16 + 12)) <= 0 )
    result = (*(int (__stdcall **)(int))(**(_DWORD **)result + 4))(result);
  v20 = -1;
  if ( a2 != nullptr && _InterlockedExchangeAdd(a2 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))a2)(a2);
    result = (int)(a2 + 3);
    if ( _InterlockedExchangeAdd(a2 + 3, 0xFFFFFFFF) == 0 )
      return (*(int (__thiscall **)(volatile signed __int32 *))(*a2 + 4))(a2);
  }
  return result;
}

// Address: 0x1000BAC0
_DWORD *__cdecl sub_1000BAC0(int *a1, volatile signed __int32 *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  OLECHAR *v9; // ecx
  int v10; // ebp
  int v11; // ebp
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebp
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // eax
  _DWORD *result; // eax
  volatile signed __int32 *v24; // esi
  volatile signed __int32 *v25; // esi
  volatile signed __int32 *v26; // esi
  int *v27; // [esp+24h] [ebp-78h] BYREF
  volatile signed __int32 *v28; // [esp+28h] [ebp-74h] BYREF
  int v29; // [esp+2Ch] [ebp-70h]
  int v30; // [esp+30h] [ebp-6Ch]
  int v31; // [esp+34h] [ebp-68h]
  int v32; // [esp+48h] [ebp-54h] BYREF
  int v33; // [esp+4Ch] [ebp-50h] BYREF
  int ArgList; // [esp+50h] [ebp-4Ch] BYREF
  int pExceptionObject; // [esp+54h] [ebp-48h] BYREF
  int v36; // [esp+58h] [ebp-44h] BYREF
  int **v37; // [esp+5Ch] [ebp-40h]
  int v38; // [esp+60h] [ebp-3Ch] BYREF
  volatile signed __int32 *v39; // [esp+64h] [ebp-38h]
  int v40; // [esp+68h] [ebp-34h] BYREF
  volatile signed __int32 *v41; // [esp+6Ch] [ebp-30h]
  _DWORD v42[4]; // [esp+70h] [ebp-2Ch] BYREF
  unsigned __int16 v43; // [esp+80h] [ebp-1Ch] BYREF
  int v44; // [esp+98h] [ebp-4h]

  v44 = 0;
  v4 = *a1;
  if ( *a1 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdate is NULL - ::DumpUpdate( ... )", v31);
    pExceptionObject = -2147024809;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v33 = *a1;
  sub_100013D0(&v33, &v40);
  LOBYTE(v44) = 1;
  v5 = *(_DWORD *)v40;
  sub_100015C0(&v33, &v38);
  LOBYTE(v44) = 2;
  v6 = *(_DWORD *)v38;
  v32 = *(_DWORD *)v38;
  v7 = sub_1000CCFE();
  if ( v7 == 0 )
    sub_10007E20(-2147467259);
  pExceptionObject = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7) + 16;
  LOBYTE(v44) = 3;
  v8 = sub_1000CCFE();
  if ( v8 == 0 )
    sub_10007E20(-2147467259);
  ArgList = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8) + 16;
  LOBYTE(v44) = 4;
  sub_1000B0A0(&v33, (OLECHAR *)&pExceptionObject, (volatile signed __int32 **)&pExceptionObject);
  sub_100016F0(&v32, v9, (int)&ArgList);
  v10 = (*(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)v4 + 124))(v4, v42);
  if ( v10 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_MaxDownloadSize in in TUpdate::GetMaxDownloadSize( ... )", v31);
    v33 = v10;
    _CxxThrowException(&v33, (_ThrowInfo *)&_TI1J);
  }
  v11 = (*(int (__stdcall **)(int, unsigned __int16 *))(*(_DWORD *)v4 + 128))(v4, &v43);
  if ( v11 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_MinDownloadSize in in TUpdate::GetMinDownloadSize( ... )", v31);
    v33 = v11;
    _CxxThrowException(&v33, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Update ID : %s", ArgList);
  v12 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v6 + 28))(v6, &v36);
  if ( v12 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_RevisionNumber in TUpdateIdentity::GetUpdateID()", v31);
    v32 = v12;
    _CxxThrowException(&v32, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Revision : %d", v36);
  v28 = (volatile signed __int32 *)v42[2];
  v27 = (int *)v42[3];
  sub_10001040((wchar_t *)L"MaxDownloadSize : %04X%04X %08X %08X %08X", LOWORD(v42[0]));
  sub_10001040((wchar_t *)L"MinDownloadSize : %04X%04X %08X %08X %08X", v43);
  v13 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v4 + 64))(v4, &v32);
  if ( v13 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_EulaAccepted in TUpdate::EualAccepted() const", v31);
    v36 = v13;
    _CxxThrowException(&v36, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"EULA Accepted : %d", (__int16)v32);
  v14 = pExceptionObject;
  sub_10001040((wchar_t *)L"Severity : %s", pExceptionObject);
  v15 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v4 + 32))(v4, &v32);
  if ( v15 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_AutoSelectOnWebSites in TUpdate::IsAutoSelected() const", v31);
    v36 = v15;
    _CxxThrowException(&v36, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Auto Selected : %d", (__int16)v32);
  v16 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v4 + 200))(v4, &v32);
  if ( v16 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_DownloadPriority in in TUpdate::GetDownloadPriority() const", v31);
    v36 = v16;
    _CxxThrowException(&v36, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Download Priority : %d", v32);
  v17 = sub_10001530(&v33);
  sub_10001040((wchar_t *)L"Browse Only : %d", v17);
  v18 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v5 + 28))(v5, &v32);
  if ( v18 < 0 )
  {
    sub_10001040(
      (wchar_t *)L"Failed to get_CanRequestUserInput in TInstallationBehavior::CanRequestUserInput() const",
      v31);
    v36 = v18;
    _CxxThrowException(&v36, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Can User Input : %d", (__int16)v32);
  v19 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v5 + 32))(v5, &v32);
  if ( v19 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Impact in TInstallationBehavior::GetInstallationImpact() const", v31);
    v36 = v19;
    _CxxThrowException(&v36, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Installation Impact : %d", v32);
  v20 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v5 + 36))(v5, &v32);
  if ( v20 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_RebootBehavior in TInstallationBehavior::CanRebootRequire() const", v31);
    v36 = v20;
    _CxxThrowException(&v36, (_ThrowInfo *)&_TI1J);
  }
  sub_10001040((wchar_t *)L"Reboot Required : %d", v32 != 0);
  v21 = a4;
  if ( a4 != 0 )
  {
    v30 = 0;
    v29 = 0;
    v37 = &v27;
    sub_1000B1D0(&v33, &v27);
    sub_1000B850(v27, v28, v29, v30);
  }
  if ( a3 != 0 )
  {
    v30 = v21;
    v37 = (int **)&v28;
    sub_10006640((int *)&a1, &v28);
    sub_1000C270(v28, v29, v30);
  }
  LOBYTE(v44) = 3;
  v22 = ArgList - 16;
  if ( _InterlockedDecrement((volatile signed __int32 *)(ArgList - 16 + 12)) <= 0 )
    (*(void (__stdcall **)(int))(**(_DWORD **)v22 + 4))(v22);
  result = (_DWORD *)(v14 - 16);
  LOBYTE(v44) = 2;
  if ( _InterlockedDecrement((volatile signed __int32 *)(v14 - 16 + 12)) <= 0 )
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*result + 4))(*result, v14 - 16);
  LOBYTE(v44) = 1;
  v24 = v39;
  if ( v39 != nullptr && _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v24)(v24);
    result = v24 + 3;
    if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 0 )
      result = (_DWORD *)(*(int (__thiscall **)(volatile signed __int32 *))(*v24 + 4))(v24);
  }
  LOBYTE(v44) = 0;
  v25 = v41;
  if ( v41 != nullptr && _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v25)(v25);
    result = v25 + 3;
    if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 0 )
      result = (_DWORD *)(*(int (__thiscall **)(volatile signed __int32 *))(*v25 + 4))(v25);
  }
  v44 = -1;
  v26 = a2;
  if ( a2 != nullptr && _InterlockedExchangeAdd(a2 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v26)(v26);
    result = v26 + 3;
    if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 0 )
      return (_DWORD *)(*(int (__thiscall **)(volatile signed __int32 *))(*v26 + 4))(v26);
  }
  return result;
}

// Address: 0x1000C000
int __cdecl sub_1000C000(int *a1, volatile signed __int32 *a2, int a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int (__stdcall *v6)(int, int *); // edx
  int v7; // esi
  int v8; // esi
  int v9; // eax
  volatile signed __int32 *v10; // ebx
  volatile signed __int32 *v11; // esi
  int result; // eax
  int v13; // [esp+0h] [ebp-38h]
  int pExceptionObject; // [esp+14h] [ebp-24h] BYREF
  int ArgList; // [esp+18h] [ebp-20h] BYREF
  int v16; // [esp+1Ch] [ebp-1Ch] BYREF
  int v17; // [esp+20h] [ebp-18h]
  int v18; // [esp+24h] [ebp-14h] BYREF
  volatile signed __int32 *v19; // [esp+28h] [ebp-10h]
  int v20; // [esp+34h] [ebp-4h]

  v4 = 0;
  v20 = 0;
  v5 = *a1;
  if ( *a1 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdateCollection is NULL - ::DumpUpdates( ... )", v13);
    pExceptionObject = -2147024809;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v6 = *(int (__stdcall **)(int, int *))(*(_DWORD *)v5 + 40);
  v16 = *a1;
  v7 = v6(v5, &ArgList);
  if ( v7 < 0 )
  {
    sub_10001040((wchar_t *)L"Failed to get_Count in TCollection::GetCount() const", v13);
    pExceptionObject = v7;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  v8 = ArgList;
  v17 = ArgList;
  sub_10001040((wchar_t *)L"==== Update Count : %d ====", ArgList);
  v9 = sub_1000CCFE();
  if ( v9 == 0 )
    sub_10007E20(-2147467259);
  pExceptionObject = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9) + 16;
  LOBYTE(v20) = 1;
  if ( v8 > 0 )
  {
    do
    {
      sub_10006120(&v16, &v18, v4);
      LOBYTE(v20) = 2;
      ArgList = *(_DWORD *)v18;
      sub_10001480(&ArgList, (OLECHAR *)ArgList, (int)&pExceptionObject);
      sub_10001040((wchar_t *)L"== %d. %s ==", v4);
      v10 = v19;
      ArgList = v18;
      if ( v19 != nullptr )
        _InterlockedExchangeAdd(v19 + 2, 1u);
      sub_1000BAC0((int *)ArgList, v10, a3, a4);
      sub_10001040((wchar_t *)L"== Update %d End ==\r\n", v4);
      LOBYTE(v20) = 1;
      if ( v19 != nullptr )
      {
        v11 = v19;
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 0 )
        {
          (**(void (__thiscall ***)(volatile signed __int32 *))v11)(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 0 )
            (*(void (__thiscall **)(volatile signed __int32 *))(*v11 + 4))(v11);
        }
      }
      ++v4;
    }
    while ( v4 < v17 );
  }
  sub_10001040((wchar_t *)L"==== Dump Updates End ====", v13);
  LOBYTE(v20) = 0;
  result = pExceptionObject - 16;
  if ( _InterlockedDecrement((volatile signed __int32 *)(pExceptionObject - 16 + 12)) <= 0 )
    result = (*(int (__stdcall **)(int))(**(_DWORD **)result + 4))(result);
  v20 = -1;
  if ( a2 != nullptr && _InterlockedExchangeAdd(a2 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))a2)(a2);
    result = (int)(a2 + 3);
    if ( _InterlockedExchangeAdd(a2 + 3, 0xFFFFFFFF) == 0 )
      return (*(int (__thiscall **)(volatile signed __int32 *))(*a2 + 4))(a2);
  }
  return result;
}

// Address: 0x1000C270
_DWORD *__cdecl sub_1000C270(int *a1, volatile signed __int32 *a2, int a3)
{
  int v3; // eax
  int v4; // edi
  volatile signed __int32 *v5; // esi
  _DWORD *result; // eax
  volatile signed __int32 *v7[2]; // [esp-10h] [ebp-38h] BYREF
  int v8; // [esp-8h] [ebp-30h]
  int v9; // [esp-4h] [ebp-2Ch]
  int v10; // [esp+0h] [ebp-28h]
  int ArgList; // [esp+Ch] [ebp-1Ch] BYREF
  int pExceptionObject; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h] BYREF
  volatile signed __int32 *v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v15 = 0;
  if ( *a1 == 0 )
  {
    sub_10001040((wchar_t *)L"IUpdate is NULL - ::DumpBundledUpdates( ... )", v10);
    pExceptionObject = -2147024809;
    _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI1J);
  }
  pExceptionObject = *a1;
  v3 = sub_1000CCFE();
  if ( v3 == 0 )
    sub_10007E20(-2147467259);
  ArgList = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3) + 16;
  LOBYTE(v15) = 1;
  sub_10001480(&pExceptionObject, (OLECHAR *)&ArgList, (int)&ArgList);
  v4 = ArgList;
  sub_10001040((wchar_t *)L"==== %s ====", ArgList);
  sub_10001040((wchar_t *)L"==== Dump Bundled Updates Start ====", v8);
  sub_1000B120(&pExceptionObject, &v13);
  LOBYTE(v15) = 2;
  if ( *(_DWORD *)v13 != 0 )
  {
    v9 = a3;
    v8 = 1;
    pExceptionObject = (int)v7;
    sub_10006640(&v13, v7);
    sub_1000C000((int *)v7[0], v7[1], v8, v9);
  }
  else
  {
    sub_10001040((wchar_t *)L"No Bundled Updates.", v10);
  }
  sub_10001040((wchar_t *)L"==== Dump Bundled Updates End ====\r\n", v10);
  LOBYTE(v15) = 1;
  v5 = v14;
  if ( v14 != nullptr && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))v5)(v5);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 0 )
      (*(void (__thiscall **)(volatile signed __int32 *))(*v5 + 4))(v5);
  }
  result = (_DWORD *)(v4 - 16);
  LOBYTE(v15) = 0;
  if ( _InterlockedDecrement((volatile signed __int32 *)(v4 - 16 + 12)) <= 0 )
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*result + 4))(*result, v4 - 16);
  v15 = -1;
  if ( a2 != nullptr && _InterlockedExchangeAdd(a2 + 2, 0xFFFFFFFF) == 0 )
  {
    (**(void (__thiscall ***)(volatile signed __int32 *))a2)(a2);
    result = a2 + 3;
    if ( _InterlockedExchangeAdd(a2 + 3, 0xFFFFFFFF) == 0 )
      return (_DWORD *)(*(int (__thiscall **)(volatile signed __int32 *))(*a2 + 4))(a2);
  }
  return result;
}

// Address: 0x1000C430
_DWORD *__stdcall sub_1000C430(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<COM_STRUCT<IWindowsUpdateAgentInfo>>::`vftable';
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

// Address: 0x1000C4F4
// attributes: thunk
struct AFX_MODULE_STATE *__stdcall AfxGetModuleState()
{
  return ?AfxGetModuleState@@YGPAVAFX_MODULE_STATE@@XZ();
}

// Address: 0x1000C4F9
int __stdcall sub_1000C4F9(int a1, int a2, int a3)
{
  return 1;
}

// Address: 0x1000C4FF
void __cdecl sub_1000C4FF()
{
  AfxTermLocalData(nullptr, 1);
  AfxCriticalTerm();
  AfxTlsRelease();
}

// Address: 0x1000C512
int __stdcall InternalDllMain(HINSTANCE a1, int a2, int a3)
{
  struct _AFX_THREAD_STATE *ThreadState; // esi
  int v4; // edi
  int v5; // ebx
  int v7; // eax
  int v8; // [esp+Ch] [ebp+Ch]

  if ( a2 == 1 )
  {
    v8 = 0;
    ThreadState = AfxGetThreadState();
    v4 = *((_DWORD *)ThreadState + 2);
    if ( AfxWinInit(a1, nullptr, (wchar_t *)&word_1002B960, 0) != 0 )
    {
      v5 = *((_DWORD *)AfxGetModuleState() + 1);
      if ( v5 == 0 || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 80))(v5) != 0 )
      {
        *((_DWORD *)ThreadState + 2) = v4;
        AfxInitLocalData(a1);
        v8 = 1;
        goto $Cleanup$222471;
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
    }
    AfxWinTerm();
$Cleanup$222471:
    *((_DWORD *)ThreadState + 2) = v4;
    return v8;
  }
  if ( a2 != 0 )
  {
    if ( a2 == 3 )
    {
      AfxLockTempMaps();
      AfxUnlockTempMaps(0xFFFFFFFF);
      AfxTermThread(a1);
    }
  }
  else
  {
    v7 = *((_DWORD *)AfxGetModuleState() + 1);
    if ( v7 != 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
    AfxLockTempMaps();
    AfxUnlockTempMaps(0xFFFFFFFF);
    AfxWinTerm();
    AfxTermLocalData(a1, 1);
  }
  return 1;
}

// Address: 0x1000C5DB
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( dword_1003EC44 != 0 )
  {
    if ( fdwReason == 1 )
    {
      *((_DWORD *)AfxGetModuleState() + 2) = hinstDLL;
      return true;
    }
    if ( fdwReason == 0 )
      return true;
  }
  return InternalDllMain(hinstDLL, fdwReason, (int)lpvReserved);
}

// Address: 0x1000C60D
// attributes: thunk
void __stdcall __noreturn AfxThrowMemoryException()
{
  ?AfxThrowMemoryException@@YGXXZ();
}

// Address: 0x1000C612
void (__stdcall __noreturn *__stdcall AfxSetNewHandler(void (__stdcall __noreturn *a1)()))()
{
  void (__stdcall __noreturn *result)(); // eax

  result = off_1003C000[0];
  off_1003C000[0] = a1;
  return result;
}

// Address: 0x1000C629
void *__cdecl operator new(size_t Size)
{
  void *result; // eax

  result = malloc(Size);
  if ( result == nullptr && off_1003C000[0] != nullptr )
    off_1003C000[0]();
  return result;
}

// Address: 0x1000C658
void __cdecl operator delete(void *Block)
{
  free(Block);
}

// Address: 0x1000C663
void *__cdecl operator new[](size_t a1)
{
  return operator new(a1);
}

// Address: 0x1000C66E
errno_t __cdecl wmemcpy_s(wchar_t *S1, rsize_t N1, const wchar_t *S2, rsize_t N)
{
  return memcpy_s(S1, 2 * N1, S2, 2 * N);
}

// Address: 0x1000C68F
int __cdecl AfxCrtErrorCheck(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 != 0 )
  {
    if ( a1 == 12 )
      AfxThrowMemoryException();
    if ( a1 != 80 )
      AfxThrowInvalidArgException();
  }
  return result;
}

// Address: 0x1000C6BB
// MFC 3.1-14.0 32bit
int __cdecl unknown_libname_9(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  if ( !is_mul_ok(a3, a2) )
    return -2147024809;
  *a1 = a3 * a2;
  return 0;
}

// Address: 0x1000C6DF
char **sub_1000C6DF()
{
  return &off_1002B974;
}

// Address: 0x1000C6E5
void __cdecl ATL::Checked::memcpy_s(ATL::Checked *this, rsize_t DestinationSize, void *Source, rsize_t SourceSize)
{
  errno_t v4; // eax

  v4 = memcpy_s(this, DestinationSize, Source, SourceSize);
  AfxCrtErrorCheck(v4);
}

// Address: 0x1000C706
void __cdecl ATL::Checked::wmemcpy_s(wchar_t *S1, rsize_t N1, wchar_t *S2, rsize_t N)
{
  errno_t v4; // eax

  v4 = wmemcpy_s(S1, N1, S2, N);
  AfxCrtErrorCheck(v4);
}

// Address: 0x1000C727
// MFC 3.1-14.0 32bit
int __cdecl unknown_libname_10(wchar_t *Destination, rsize_t SizeInWords, wchar_t *Source, rsize_t MaxCount)
{
  errno_t v4; // eax

  v4 = wcsncpy_s(Destination, SizeInWords, Source, MaxCount);
  return AfxCrtErrorCheck(v4);
}

// Address: 0x1000C748
const struct ATL::ATLSTRINGRESOURCEIMAGE *__cdecl ATL::_AtlGetStringResourceImage(
        HINSTANCE hModule,
        HRSRC hResInfo,
        char a3)
{
  const struct ATL::ATLSTRINGRESOURCEIMAGE *result; // eax
  _WORD *v4; // esi
  unsigned int v5; // eax
  int v6; // ecx

  result = (const struct ATL::ATLSTRINGRESOURCEIMAGE *)LoadResource(hModule, hResInfo);
  if ( result != nullptr )
  {
    v4 = LockResource(result);
    if ( v4 == nullptr )
      return nullptr;
    v5 = (unsigned int)v4 + SizeofResource(hModule, hResInfo);
    v6 = a3 & 0xF;
    if ( (a3 & 0xF) != 0 )
    {
      while ( (unsigned int)v4 < v5 )
      {
        --v6;
        v4 += (unsigned __int16)*v4 + 1;
        if ( v6 == 0 )
          goto LABEL_6;
      }
      return nullptr;
    }
LABEL_6:
    if ( (unsigned int)v4 >= v5 )
      return nullptr;
    return *v4 != 0 ? (const struct ATL::ATLSTRINGRESOURCEIMAGE *)v4 : nullptr;
  }
  return result;
}

// Address: 0x1000C7A5
const struct ATL::ATLSTRINGRESOURCEIMAGE *__cdecl ATL::AtlGetStringResourceImage(HINSTANCE hModule, unsigned int a2)
{
  const struct ATL::ATLSTRINGRESOURCEIMAGE *result; // eax

  result = (const struct ATL::ATLSTRINGRESOURCEIMAGE *)FindResourceW(
                                                         hModule,
                                                         (LPCWSTR)(unsigned __int16)((a2 >> 4) + 1),
                                                         (LPCWSTR)6);
  if ( result != nullptr )
    return ATL::_AtlGetStringResourceImage(hModule, (HRSRC)result, a2);
  return result;
}

// Address: 0x1000C7D7
void __cdecl ATL::ChTraitsCRT<wchar_t>::ConvertToBaseType(wchar_t *S1, rsize_t N1, wchar_t *String, rsize_t N)
{
  rsize_t v4; // eax

  v4 = N;
  if ( N == -1 )
    v4 = wcslen(String) + 1;
  ATL::Checked::wmemcpy_s(S1, N1, String, v4);
}

// Address: 0x1000C802
COleException *__thiscall COleException::COleException(COleException *this)
{
  CException::CException(this);
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &COleException::`vftable';
  return this;
}

// Address: 0x1000C81A
size_t __cdecl ATL::CSimpleStringT<wchar_t,0>::StringLengthN(const wchar_t *Source, size_t MaxCount)
{
  if ( Source != nullptr )
    return wcsnlen(Source, MaxCount);
  else
    return 0;
}

// Address: 0x1000C82F
void __stdcall __noreturn AfxThrowOleException(COleException *pExceptionObject)
{
  COleException *v1; // ecx
  COleException *v2; // eax

  v1 = (COleException *)operator new(0xCu);
  v2 = nullptr;
  if ( v1 != nullptr )
    v2 = COleException::COleException(v1);
  *((_DWORD *)v2 + 2) = pExceptionObject;
  pExceptionObject = v2;
  _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI4PAVCOleException__);
}

// Address: 0x1000C872
DWORD __thiscall COleException::GetErrorMessage(
        COleException *this,
        wchar_t *Destination,
        rsize_t SizeInWords,
        wchar_t *Buffer)
{
  DWORD result; // eax

  if ( Buffer != nullptr )
    *(_DWORD *)Buffer = 0;
  result = FormatMessageW(0x1100u, nullptr, *((_DWORD *)this + 2), 0x800u, (LPWSTR)&Buffer, 0, nullptr);
  if ( result != 0 )
  {
    unknown_libname_10(Destination, SizeInWords, Buffer, 0xFFFFFFFF);
    LocalFree(Buffer);
    return 1;
  }
  else
  {
    *Destination = 0;
  }
  return result;
}

// Address: 0x1000C8CB
int __cdecl ATL::AtlCrtErrorCheck(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 != 0 )
  {
    if ( a1 == 12 )
      sub_10007E20(-2147024882);
    if ( a1 == 22 || a1 == 34 )
      sub_10007E20(-2147024809);
    if ( a1 != 80 )
      sub_10007E20(-2147467259);
  }
  return result;
}

// Address: 0x1000C905
int __thiscall sub_1000C905(void *this, char a2)
{
  return unknown_libname_11(this, a2);
}

// Address: 0x1000C907
// MFC 3.1-14.0 32bit
_DWORD *__thiscall unknown_libname_11(_DWORD *this, char a2)
{
  *this = &COleException::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000C927
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_12(int *this, HINSTANCE hModule, unsigned int a3)
{
  int result; // eax
  unsigned __int16 *v5; // esi
  rsize_t v6; // edi
  wchar_t *v7; // eax

  result = (int)ATL::AtlGetStringResourceImage(hModule, a3);
  v5 = (unsigned __int16 *)result;
  if ( result != 0 )
  {
    v6 = *(unsigned __int16 *)result;
    v7 = (wchar_t *)sub_10007DD0(this, v6);
    ATL::ChTraitsCRT<wchar_t>::ConvertToBaseType(v7, v6, v5 + 1, *v5);
    sub_10007E40(this, v6);
    return 1;
  }
  return result;
}

// Address: 0x1000C973
int __thiscall ATL::CSimpleStringT<wchar_t,0>::AppendChar(int *this, __int16 a2)
{
  int v3; // esi

  v3 = *(_DWORD *)(*this - 12);
  *(_WORD *)(sub_10007DD0(this, v3 + 1) + 2 * v3) = a2;
  return sub_10007E40(this, v3 + 1);
}

// Address: 0x1000C9A2
// MFC 3.1-14.0 32bit
int *__thiscall unknown_libname_13(int *this, char a2)
{
  ATL::CSimpleStringT<wchar_t,0>::AppendChar(this, a2);
  return this;
}

// Address: 0x1000C9BF
HINSTANCE __thiscall sub_1000C9BF(int *this, unsigned int a2)
{
  HINSTANCE result; // eax

  result = AfxFindStringResourceHandle(a2);
  if ( result != nullptr )
    return (HINSTANCE)unknown_libname_12(this, result, a2);
  return result;
}

// Address: 0x1000C9E3
int __thiscall sub_1000C9E3(int *this, const wchar_t *a2, signed int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  rsize_t v5; // ebx
  int v6; // eax
  bool v7; // cc
  const wchar_t *v8; // edi

  v3 = *(_DWORD *)(*this - 12);
  v4 = ((int)a2 - *this) >> 1;
  if ( a3 < 0 || (v5 = ATL::CSimpleStringT<wchar_t,0>::StringLengthN(a2, a3), (int)(0x7FFFFFFF - v5) < (int)v3) )
    sub_10007E20(-2147024809);
  v6 = sub_10007DD0(this, v3 + v5);
  v7 = v4 <= v3;
  v8 = (const wchar_t *)(v6 + 2 * v4);
  if ( !v7 )
    v8 = a2;
  sub_10007E00((void *)(v6 + 2 * v3), v5, v8, v5);
  return sub_10007E40(this, v3 + v5);
}

// Address: 0x1000CA5F
char __thiscall sub_1000CA5F(int *this, int a2)
{
  char result; // al

  result = 0;
  if ( a2 != 0 && (a2 & 0xFFFF0000) == 0 )
  {
    sub_1000C9BF(this, (unsigned __int16)a2);
    return 1;
  }
  return result;
}

// Address: 0x1000CA84
int __thiscall sub_1000CA84(int *this, __int16 *a2)
{
  __int16 *v3; // eax

  v3 = sub_10007F20(a2);
  return sub_1000C9E3(this, (const wchar_t *)a2, (signed int)v3);
}

// Address: 0x1000CAA5
int *__thiscall sub_1000CAA5(int *this, __int16 *a2)
{
  sub_1000CA84(this, a2);
  return this;
}

// Address: 0x1000CABC
int *__thiscall sub_1000CABC(int *this, __int16 *a2)
{
  sub_1000CAA5(this, a2);
  return this;
}

// Address: 0x1000CAD3
volatile signed __int32 **__thiscall sub_1000CAD3(volatile signed __int32 **this, unsigned __int16 *Source)
{
  int v3; // eax

  v3 = sub_1000CCFE();
  sub_10007BA0(this, v3);
  if ( sub_1000CA5F((int *)this, (int)Source) == 0 )
    sub_10007F40(this, Source);
  return this;
}

// Address: 0x1000CB17
void __thiscall CException::Delete(CException *this)
{
  if ( *((int *)this + 1) > 0 )
    (*(void (__thiscall **)(CException *, int))(*(_DWORD *)this + 4))(this, 1);
}

// Address: 0x1000CB25
// Microsoft VisualC 2-14/net runtime
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_14(void *this)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
}

// Address: 0x1000CB30
int __thiscall CException::ReportError(CException *this, UINT uType, unsigned int a3)
{
  unsigned int v4; // [esp+0h] [ebp-408h] BYREF
  wchar_t v5[512]; // [esp+4h] [ebp-404h] BYREF

  if ( (*(int (__thiscall **)(CException *, wchar_t *, int, unsigned int *))(*(_DWORD *)this + 12))(this, v5, 512, &v4) != 0 )
    return AfxMessageBox(v5, uType, v4);
  if ( a3 == 0 )
    a3 = 61472;
  return AfxMessageBox(a3, uType, v4);
}

// Address: 0x1000CBA4
char **sub_1000CBA4()
{
  return &off_1002BA2C;
}

// Address: 0x1000CBAA
char **sub_1000CBAA()
{
  return &off_1002BA48;
}

// Address: 0x1000CBB0
char **sub_1000CBB0()
{
  return &off_1002BA64;
}

// Address: 0x1000CBB6
char **sub_1000CBB6()
{
  return &off_1002BA80;
}

// Address: 0x1000CBBC
void __thiscall CSimpleException::InitString(CSimpleException *this)
{
  unsigned int v1; // [esp-Ch] [ebp-10h]

  v1 = *((_DWORD *)this + 69);
  *((_DWORD *)this + 3) = 1;
  *((_DWORD *)this + 4) = AfxLoadString(v1, (wchar_t *)this + 10, 0x80u) != 0;
}

// Address: 0x1000CBE7
void __stdcall __noreturn AfxThrowMemoryException()
{
  int (***pExceptionObject)(); // [esp+0h] [ebp-4h] BYREF

  pExceptionObject = &off_1003C1B8;
  _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI5PAVCMemoryException__);
}

// Address: 0x1000CC03
void __stdcall __noreturn AfxThrowNotSupportedException()
{
  int (***pExceptionObject)(); // [esp+0h] [ebp-4h] BYREF

  pExceptionObject = &off_1003C2D0;
  _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI5PAVCNotSupportedException__);
}

// Address: 0x1000CC1F
void __stdcall __noreturn AfxThrowInvalidArgException()
{
  int (***pExceptionObject)(); // [esp+0h] [ebp-4h] BYREF

  pExceptionObject = &off_1003C3E8;
  _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI5PAVCInvalidArgException__);
}

// Address: 0x1000CC3B
struct CNoTrackObject *__stdcall CThreadLocal<_AFX_THREAD_STATE>::CreateObject()
{
  _AFX_THREAD_STATE *v0; // ecx
  struct CNoTrackObject *result; // eax

  v0 = (_AFX_THREAD_STATE *)CNoTrackObject::operator new(0x164u);
  result = nullptr;
  if ( v0 != nullptr )
    return _AFX_THREAD_STATE::_AFX_THREAD_STATE(v0);
  return result;
}

// Address: 0x1000CC6A
CException *__thiscall CException::CException(CException *this)
{
  *((_DWORD *)this + 1) = 1;
  return this;
}

// Address: 0x1000CC74
// Microsoft VisualC 2-14/net runtime
CException *__thiscall CException::CException(CException *this, int a2)
{
  *((_DWORD *)this + 1) = a2;
  return this;
}

// Address: 0x1000CC85
int __thiscall CSimpleException::GetErrorMessage(
        wchar_t *this,
        wchar_t *Destination,
        rsize_t SizeInWords,
        unsigned int *a4)
{
  if ( Destination == nullptr || SizeInWords == 0 )
    return 0;
  if ( a4 != nullptr )
    *a4 = 0;
  if ( *((_DWORD *)this + 3) == 0 )
    CSimpleException::InitString((CSimpleException *)this);
  if ( *((_DWORD *)this + 4) != 0 )
    unknown_libname_10(Destination, SizeInWords, this + 10, 0xFFFFFFFF);
  else
    *Destination = 0;
  return *((_DWORD *)this + 4);
}

// Address: 0x1000CCDC
int __thiscall sub_1000CCDC(void *this, char a2)
{
  return unknown_libname_15(this, a2);
}

// Address: 0x1000CCDE
// MFC 3.1-14.0 32bit
_DWORD *__thiscall unknown_libname_15(_DWORD *this, char a2)
{
  *this = &CSimpleException::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000CCFE
void *sub_1000CCFE()
{
  return &unk_1003EC50;
}

// Address: 0x1000CD04
struct ATL::CStringData *__thiscall CAfxStringMgr::Allocate(CAfxStringMgr *this, int a2, int a3)
{
  struct ATL::CStringData *result; // eax

  if ( a2 < 0 )
    return nullptr;
  result = (struct ATL::CStringData *)malloc(a3 * (a2 + 1) + 16);
  if ( result == nullptr )
    return nullptr;
  *((_DWORD *)result + 1) = 0;
  *(_DWORD *)result = this;
  *((_DWORD *)result + 3) = 1;
  *((_DWORD *)result + 2) = a2;
  return result;
}

// Address: 0x1000CD43
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_16(void *a1)
{
  return unknown_libname_3(a1);
}

// Address: 0x1000CD45
// Microsoft VisualC 2-14/net runtime
void __stdcall unknown_libname_3(void *Block)
{
  free(Block);
}

// Address: 0x1000CD55
struct ATL::CStringData *__thiscall CAfxStringMgr::Reallocate(
        CAfxStringMgr *this,
        struct ATL::CStringData *Block,
        int a3,
        int a4)
{
  struct ATL::CStringData *result; // eax

  if ( a3 < 0 )
    return nullptr;
  result = (struct ATL::CStringData *)realloc(Block, a4 * (a3 + 1) + 16);
  if ( result == nullptr )
    return nullptr;
  *((_DWORD *)result + 2) = a3;
  return result;
}

// Address: 0x1000CD87
void *__thiscall sub_1000CD87(void *this)
{
  return this;
}

// Address: 0x1000CD8A
volatile signed __int32 *__cdecl ATL::CSimpleStringT<wchar_t,0>::CloneData(volatile signed __int32 *a1)
{
  int (__thiscall ***v1)(_DWORD, _DWORD, int); // eax
  volatile signed __int32 *v2; // edi
  int v3; // eax

  v1 = (int (__thiscall ***)(_DWORD, _DWORD, int))(*(int (__thiscall **)(volatile signed __int32))(**(_DWORD **)a1 + 16))(*a1);
  if ( *((int *)a1 + 3) >= 0 && v1 == *(int (__thiscall ****)(_DWORD, _DWORD, int))a1 )
  {
    v2 = a1;
    _InterlockedExchangeAdd(a1 + 3, 1u);
  }
  else
  {
    v3 = (**v1)(v1, *((_DWORD *)a1 + 1), 2);
    v2 = (volatile signed __int32 *)v3;
    if ( v3 == 0 )
      sub_10007D30();
    *(_DWORD *)(v3 + 4) = *((_DWORD *)a1 + 1);
    sub_10007E00((void *)(v3 + 16), *((_DWORD *)a1 + 1) + 1, (const void *)(a1 + 4), *((_DWORD *)a1 + 1) + 1);
  }
  return v2;
}

// Address: 0x1000CDEA
int __cdecl sub_1000CDEA(unsigned int a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // eax
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = v2;
  v3 = unknown_libname_9(&v5, a1, a2);
  if ( v3 < 0 )
    sub_10007E20(v3);
  return v5;
}

// Address: 0x1000CE11
CAfxStringMgr *__thiscall CAfxStringMgr::CAfxStringMgr(CAfxStringMgr *this)
{
  *(_DWORD *)this = &CAfxStringMgr::`vftable';
  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_WORD *)this + 10) = 0;
  *((_WORD *)this + 11) = 0;
  *((_DWORD *)this + 1) = this;
  return this;
}

// Address: 0x1000CE34
struct ATL::CStringData *__thiscall CAfxStringMgr::GetNilString(CAfxStringMgr *this)
{
  _InterlockedExchangeAdd((volatile signed __int32 *)this + 4, 1u);
  return (CAfxStringMgr *)((char *)this + 4);
}

// Address: 0x1000CE42
void **__thiscall ATL::CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>(
        void **this,
        const void *a2,
        rsize_t DestinationSize,
        int (__stdcall ***a4)(rsize_t, int))
{
  int v5; // eax

  if ( a4 == nullptr )
    sub_10007E20(-2147467259);
  if ( a2 == nullptr && DestinationSize != 0 )
    sub_10007E20(-2147024809);
  v5 = (**a4)(DestinationSize, 2);
  if ( v5 == 0 )
    sub_10007D30();
  *this = (void *)(v5 + 16);
  sub_10007E40(this, DestinationSize);
  sub_10007E00(*this, DestinationSize, a2, DestinationSize);
  return this;
}

// Address: 0x1000CEA4
volatile signed __int32 **__thiscall ATL::CSimpleStringT<wchar_t,0>::operator=(
        volatile signed __int32 **this,
        _BYTE **a2)
{
  volatile signed __int32 *v3; // esi
  volatile signed __int32 *v4; // ecx
  volatile signed __int32 *v5; // esi
  volatile signed __int32 *v6; // ebx

  v3 = *this;
  v4 = (volatile signed __int32 *)(*a2 - 16);
  v5 = v3 - 4;
  if ( v4 != v5 )
  {
    if ( *((int *)v5 + 3) >= 0 && *v4 == *v5 )
    {
      v6 = ATL::CSimpleStringT<wchar_t,0>::CloneData(v4);
      sub_10007C90(v5);
      *this = v6 + 4;
    }
    else
    {
      sub_10007E70(this, *a2, *((_DWORD *)*a2 - 3));
    }
  }
  return this;
}

// Address: 0x1000CEF6
int (**sub_1000CEF6())()
{
  return &off_1002BB78;
}

// Address: 0x1000CEFC
// MFC 3.1-14.0 32bit
BOOL __stdcall EnumFunc(HMODULE hModule, LPCWSTR lpType, LPCWSTR lpName, WORD wLanguage, _WORD *lParam)
{
  BOOL result; // eax

  result = (BOOL)lParam;
  if ( lParam != nullptr )
  {
    *lParam = wLanguage;
    return true;
  }
  return result;
}

// Address: 0x1000CF16
CActivationContext *__thiscall CActivationContext::CActivationContext(CActivationContext *this, void *a2)
{
  CActivationContext *result; // eax
  HMODULE ModuleHandleW; // eax
  HMODULE v4; // edi
  BOOL (__stdcall *DeactivateActCtx)(DWORD, ULONG_PTR); // eax

  result = this;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  if ( byte_1003EC80 == 0 )
  {
    ModuleHandleW = GetModuleHandleW(L"KERNEL32");
    v4 = ModuleHandleW;
    if ( ModuleHandleW == nullptr )
      goto LABEL_3;
    CreateActCtxW = (HANDLE (__stdcall *)(PCACTCTXW))GetProcAddress(ModuleHandleW, "CreateActCtxW");
    ReleaseActCtx = (void (__stdcall *)(HANDLE))GetProcAddress(v4, "ReleaseActCtx");
    ActivateActCtx = (BOOL (__stdcall *)(HANDLE, ULONG_PTR *))GetProcAddress(v4, "ActivateActCtx");
    DeactivateActCtx = (BOOL (__stdcall *)(DWORD, ULONG_PTR))GetProcAddress(v4, "DeactivateActCtx");
    dword_1003EC7C = (int)DeactivateActCtx;
    if ( CreateActCtxW != nullptr )
    {
      if ( ReleaseActCtx == nullptr || ActivateActCtx == nullptr || DeactivateActCtx == nullptr )
        goto LABEL_3;
    }
    else if ( ReleaseActCtx != nullptr || ActivateActCtx != nullptr || DeactivateActCtx != nullptr )
    {
LABEL_3:
      AfxThrowInvalidArgException();
    }
    byte_1003EC80 = 1;
    return this;
  }
  return result;
}

// Address: 0x1000CFCD
bool __thiscall sub_1000CFCD(_DWORD *this, const ACTCTXW *a2)
{
  char *ActCtxW; // eax

  if ( CreateActCtxW == nullptr )
    return true;
  if ( a2 == nullptr || *this != -1 )
    return false;
  ActCtxW = (char *)CreateActCtxW(a2);
  *this = ActCtxW;
  return ActCtxW + 1 != nullptr;
}

// Address: 0x1000D007
bool __thiscall CActivationContext::Activate(CActivationContext *this)
{
  if ( ActivateActCtx == nullptr )
    return true;
  if ( *(_DWORD *)this == -1 || *((_DWORD *)this + 1) != 0 )
    return false;
  return ActivateActCtx(*(HANDLE *)this, (ULONG_PTR *)this + 1);
}

// Address: 0x1000D034
bool __thiscall CActivationContext::Deactivate(CActivationContext *this)
{
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_1003EC7C == nullptr || *((_DWORD *)this + 1) == 0 )
    return true;
  v2 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 1) = 0;
  return dword_1003EC7C(0, v2) == 1;
}

// Address: 0x1000D05A
int __thiscall CWinApp::_LoadSysPolicies(CWinApp *this)
{
  wchar_t **i; // ebx
  wchar_t *j; // esi
  int v3; // ecx
  DWORD cbData; // [esp+8h] [ebp-14h] BYREF
  CWinApp *v6; // [esp+Ch] [ebp-10h]
  DWORD Type; // [esp+10h] [ebp-Ch] BYREF
  BYTE Data[4]; // [esp+14h] [ebp-8h] BYREF
  HKEY phkResult; // [esp+18h] [ebp-4h] BYREF

  *((_DWORD *)this + 40) = 0;
  v6 = this;
  phkResult = nullptr;
  *(_DWORD *)Data = 0;
  cbData = 4;
  Type = 0;
  for ( i = off_1003C540; *i != nullptr; i += 2 )
  {
    if ( RegOpenKeyExW(HKEY_CURRENT_USER, *i, 0, 1u, &phkResult) == 0 )
    {
      for ( j = i[1]; *(_DWORD *)j != 0; j += 4 )
      {
        if ( RegQueryValueExW(phkResult, *(LPCWSTR *)j, nullptr, &Type, Data, &cbData) == 0 && Type == 4 )
        {
          v3 = *((_DWORD *)j + 1);
          if ( *(_DWORD *)Data != 0 )
            *((_DWORD *)v6 + 40) |= v3;
          else
            *((_DWORD *)v6 + 40) &= ~v3;
        }
        *(_DWORD *)Data = 0;
        cbData = 4;
        Type = 0;
      }
      RegCloseKey(phkResult);
      phkResult = nullptr;
    }
  }
  return 1;
}

// Address: 0x1000D11F
int __thiscall CWinApp::InitApplication(CWinApp *this)
{
  int v2; // ecx

  if ( dword_1003EC68 != 0 )
  {
    if ( *((_DWORD *)this + 22) == 0 )
      *((_DWORD *)this + 22) = dword_1003EC68;
    dword_1003EC68 = 0;
  }
  v2 = *((_DWORD *)this + 22);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 12))(v2, 0);
  else
    dword_1003C53C = 0;
  (*(void (__thiscall **)(CWinApp *))(*(_DWORD *)this + 180))(this);
  return 1;
}

// Address: 0x1000D15F
void __thiscall CWinApp::SaveStdProfileSettings(CWinApp *this)
{
  if ( *((_DWORD *)this + 34) != 0 )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 34) + 20))(*((_DWORD *)this + 34));
  if ( *((_DWORD *)this + 37) != 0 )
    CWinApp::WriteProfileInt(this, L"Settings", L"PreviewPages", *((_DWORD *)this + 37));
}

// Address: 0x1000D196
WPARAM __thiscall CWinApp::ExitInstance(CWinApp *this)
{
  int v2; // eax
  int v3; // eax
  void (*v4)(void); // eax
  int v5; // esi

  v2 = *((_DWORD *)this + 35);
  if ( (v2 == 0 || (v3 = *(_DWORD *)(v2 + 20)) != 6 && v3 != 5) && *((_BYTE *)AfxGetModuleState() + 20) == 0 )
    CWinApp::SaveStdProfileSettings(this);
  v4 = *((void (**)(void))this + 39);
  if ( v4 != nullptr )
    v4();
  if ( *((_DWORD *)this + 31) != 0 )
  {
    FreeLibrary(*((HMODULE *)this + 31));
    *((_DWORD *)this + 31) = 0;
  }
  v5 = 0;
  if ( AfxGetCurrentMessage() != nullptr )
    return AfxGetCurrentMessage()->wParam;
  return v5;
}

// Address: 0x1000D1F9
void __stdcall AfxPostQuitMessage(int a1)
{
  struct CWinThread *Thread; // eax
  void (__stdcall *v2)(int, int); // eax

  Thread = AfxGetThread();
  if ( Thread != nullptr )
  {
    v2 = *((void (__stdcall **)(int, int))Thread + 15);
    if ( v2 != nullptr )
      v2(1, 1);
  }
  PostQuitMessage(a1);
}

// Address: 0x1000D21B
int __thiscall CWinApp::ProcessWndProcException(CWinApp *this, struct CException *a2, const struct tagMSG *a3)
{
  int v3; // ebx
  int v4; // esi

  v3 = 0;
  if ( a2 == nullptr || a3 == nullptr )
    AfxThrowInvalidArgException();
  if ( a3->message == 1 || a3->message == 15 )
    return CWinThread::ProcessWndProcException(this, a2, a3);
  v4 = 61704;
  if ( a3->message == 273 )
  {
    if ( a3->lParam == 0 )
      v4 = 61705;
    v3 = 1;
  }
  if ( CObject::IsKindOf(a2, (const struct CRuntimeClass *)&off_1002BA48) != 0 )
  {
    (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 20))(4144, v4);
  }
  else if ( CObject::IsKindOf(a2, (const struct CRuntimeClass *)&off_1002C57C) == 0 )
  {
    (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 20))(16, v4);
  }
  return v3;
}

// Address: 0x1000D29E
BOOL __thiscall CWinApp::OnIdle(CWinApp *this, int a2)
{
  int v2; // ebx
  int v4; // eax

  v2 = a2;
  if ( a2 > 0 )
  {
    if ( a2 == 1 )
      CWinThread::OnIdle(this, 1);
  }
  else
  {
    CWinThread::OnIdle(this, a2);
    a2 = 0;
    if ( *((_DWORD *)this + 22) != 0 )
    {
      a2 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 16))(*((_DWORD *)this + 22));
      while ( a2 != 0 )
      {
        v4 = (*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 22) + 20))(*((_DWORD *)this + 22), &a2);
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 136))(v4);
      }
    }
  }
  return v2 < 1;
}

// Address: 0x1000D304
void __thiscall CWinApp::DevModeChange(CWinApp *this, wchar_t *lpString2)
{
  void *v3; // eax
  const WCHAR *v4; // eax
  LONG v5; // eax
  HGLOBAL v6; // eax
  struct _devicemodeW *v7; // eax
  HANDLE phPrinter; // [esp+8h] [ebp-4h] BYREF

  v3 = *((void **)this + 29);
  if ( v3 != nullptr )
  {
    v4 = (const WCHAR *)GlobalLock(v3);
    if ( lstrcmpW(&v4[v4[1]], lpString2) == 0 && OpenPrinterW(lpString2, &phPrinter, nullptr) )
    {
      if ( *((_DWORD *)this + 28) != 0 )
        AfxGlobalFree(*((HGLOBAL *)this + 28));
      v5 = DocumentPropertiesW(nullptr, phPrinter, lpString2, nullptr, nullptr, 0);
      v6 = GlobalAlloc(0x42u, v5);
      *((_DWORD *)this + 28) = v6;
      v7 = (struct _devicemodeW *)GlobalLock(v6);
      if ( DocumentPropertiesW(nullptr, phPrinter, lpString2, v7, nullptr, 2u) != 1 )
      {
        AfxGlobalFree(*((HGLOBAL *)this + 28));
        *((_DWORD *)this + 28) = 0;
      }
      ClosePrinter(phPrinter);
    }
  }
}

// Address: 0x1000D3A5
char **sub_1000D3A5()
{
  return &off_1002BB5C;
}

// Address: 0x1000D3AB
struct CNoTrackObject *__stdcall CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject()
{
  AFX_MODULE_THREAD_STATE *v0; // ecx
  struct CNoTrackObject *result; // eax

  v0 = (AFX_MODULE_THREAD_STATE *)CNoTrackObject::operator new(0x54u);
  result = nullptr;
  if ( v0 != nullptr )
    return AFX_MODULE_THREAD_STATE::AFX_MODULE_THREAD_STATE(v0);
  return result;
}

// Address: 0x1000D3D7
int __cdecl sub_1000D3D7(wchar_t *Destination, rsize_t SizeInWords, wchar_t *Source)
{
  errno_t v3; // eax

  v3 = wcscpy_s(Destination, SizeInWords, Source);
  return AfxCrtErrorCheck(v3);
}

// Address: 0x1000D3F5
void __stdcall AfxSetResourceHandle(HINSTANCE a1)
{
  *((_DWORD *)AfxGetModuleState() + 3) = a1;
}

// Address: 0x1000D409
struct CWnd *__stdcall AfxGetMainWnd()
{
  struct CWinThread *Thread; // eax

  Thread = AfxGetThread();
  if ( Thread != nullptr )
    return (*(struct CWnd *(__thiscall **)(struct CWinThread *))(*(_DWORD *)Thread + 116))(Thread);
  else
    return nullptr;
}

// Address: 0x1000D41C
HMODULE __cdecl sub_1000D41C(unsigned int a1, LCID Locale)
{
  wchar_t *Format; // ecx
  const wchar_t *v3; // esi
  errno_t v4; // eax
  int v5; // edi
  int *v6; // eax
  HMODULE result; // eax
  const WCHAR *FileNameW; // esi
  HMODULE ModuleHandleW; // eax
  BOOL (__stdcall *FindActCtxSectionStringW)(DWORD, const GUID *, ULONG, LPCWSTR, PACTCTX_SECTION_KEYED_DATA); // eax
  _DWORD v11[16]; // [esp+4h] [ebp-274h] BYREF
  unsigned int v12; // [esp+44h] [ebp-234h]
  WCHAR pszPath[274]; // [esp+48h] [ebp-230h] BYREF
  WCHAR LCData[4]; // [esp+26Ch] [ebp-Ch] BYREF

  v12 = a1;
  v3 = Format;
  if ( Locale == 2048 )
  {
    v4 = wcscpy_s(LCData, 4u, L"LOC");
    AfxCrtErrorCheck(v4);
  }
  else
  {
    result = (HMODULE)GetLocaleInfoW(Locale, 3u, LCData, 4);
    if ( result == nullptr )
      return result;
  }
  v5 = *_errno();
  *_errno() = 0;
  v12 = _snwprintf_s(pszPath, 0x112u, 0x111u, v3, v12, LCData);
  if ( *_errno() != 0 )
  {
    v6 = _errno();
    ATL::AtlCrtErrorCheck(*v6);
  }
  else
  {
    *_errno() = v5;
  }
  if ( v12 > 0x111 )
    return nullptr;
  FileNameW = PathFindFileNameW(pszPath);
  v11[0] = 64;
  memset(&v11[1], 0, 0x3Cu);
  ModuleHandleW = GetModuleHandleW(L"KERNEL32");
  if ( ModuleHandleW != nullptr
    && (FindActCtxSectionStringW = (BOOL (__stdcall *)(DWORD, const GUID *, ULONG, LPCWSTR, PACTCTX_SECTION_KEYED_DATA))GetProcAddress(ModuleHandleW, "FindActCtxSectionStringW")) != nullptr
    && FindActCtxSectionStringW(0, nullptr, 2, FileNameW, (PACTCTX_SECTION_KEYED_DATA)v11) )
  {
    return LoadLibraryExW(FileNameW, nullptr, 0);
  }
  else
  {
    return LoadLibraryExW(pszPath, nullptr, 0);
  }
}

// Address: 0x1000D566
void __thiscall CActivationContext::Release(CActivationContext *this)
{
  if ( ReleaseActCtx != nullptr && *(_DWORD *)this != -1 )
  {
    CActivationContext::Deactivate(this);
    ReleaseActCtx(*(HANDLE *)this);
  }
}

// Address: 0x1000D586
// attributes: thunk
int __thiscall CWinApp::_LoadSysPolicies(CWinApp *this)
{
  return ?_LoadSysPolicies@CWinApp@@IAEHXZ(this);
}

// Address: 0x1000D58B
int __thiscall CWinApp::InitInstance(CWinApp *this)
{
  HINSTANCE v2; // eax

  (*(void (__thiscall **)(CWinApp *))(*(_DWORD *)this + 124))(this);
  v2 = (HINSTANCE)(*(int (__thiscall **)(CWinApp *))(*(_DWORD *)this + 176))(this);
  *((_DWORD *)this + 31) = v2;
  if ( v2 != nullptr )
  {
    AfxSetResourceHandle(v2);
    InterlockedExchange(&Target, *((_DWORD *)this + 31));
  }
  return 1;
}

// Address: 0x1000D5BF
int __thiscall CWinApp::Run(CWinApp *this)
{
  if ( *((_DWORD *)this + 8) == 0 && AfxOleGetUserCtrl() != 0 )
    AfxPostQuitMessage(0);
  return CWinThread::Run(this);
}

// Address: 0x1000D5E2
void __thiscall CWinApp::WinHelpW(CWinApp *this, unsigned int a2, unsigned int a3)
{
  HWND *MainWnd; // esi

  MainWnd = (HWND *)AfxGetMainWnd();
  if ( MainWnd == nullptr )
    AfxThrowInvalidArgException();
  *((_DWORD *)this + 23) = 0;
  PostMessageW(MainWnd[8], 0x36Au, 0, 0);
  (*((void (__thiscall **)(HWND *, unsigned int, unsigned int))*MainWnd + 31))(MainWnd, a2, a3);
}

// Address: 0x1000D623
void __thiscall CWinApp::HtmlHelpW(CWinApp *this, unsigned int a2, unsigned int a3)
{
  HWND *MainWnd; // esi

  MainWnd = (HWND *)AfxGetMainWnd();
  if ( MainWnd == nullptr )
    AfxThrowInvalidArgException();
  *((_DWORD *)this + 23) = 0;
  PostMessageW(MainWnd[8], 0x36Au, 0, 0);
  (*((void (__thiscall **)(HWND *, unsigned int, unsigned int))*MainWnd + 32))(MainWnd, a2, a3);
}

// Address: 0x1000D667
void __thiscall CWinApp::WinHelpInternal(CWinApp *this, unsigned int a2, unsigned int a3)
{
  HWND *MainWnd; // esi

  MainWnd = (HWND *)AfxGetMainWnd();
  if ( MainWnd == nullptr )
    AfxThrowInvalidArgException();
  *((_DWORD *)this + 23) = 0;
  PostMessageW(MainWnd[8], 0x36Au, 0, 0);
  (*((void (__thiscall **)(HWND *, unsigned int, unsigned int))*MainWnd + 33))(MainWnd, a2, a3);
}

// Address: 0x1000D6AB
struct CNoTrackObject *__thiscall CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData(CThreadLocalObject *this)
{
  struct CNoTrackObject *result; // eax

  result = CThreadLocalObject::GetData(this, CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject);
  if ( result == nullptr )
    AfxThrowInvalidArgException();
  return result;
}

// Address: 0x1000D6BF
// attributes: thunk
void __thiscall CActivationContext::Release(CActivationContext *this)
{
  ?Release@CActivationContext@@QAEXXZ(this);
}

// Address: 0x1000D6C4
HINSTANCE __stdcall AfxLoadLangResourceDLL(wchar_t *a1, const wchar_t *a2)
{
  LANGID (__stdcall *GetUserDefaultUILanguage)(); // eax
  LANGID v3; // ax
  LANGID (__stdcall *GetSystemDefaultUILanguage)(); // eax
  LANGID v5; // ax
  LCID v6; // edi
  HMODULE ModuleHandleW; // eax
  LCID v8; // edi
  LCID v9; // eax
  HINSTANCE result; // eax
  int v11; // esi
  HMODULE v12; // eax
  HMODULE v13; // esi
  ACTCTXW v14; // [esp+10h] [ebp-26Ch] BYREF
  LCID v15; // [esp+30h] [ebp-24Ch]
  LCID v16; // [esp+34h] [ebp-248h]
  LCID v17; // [esp+38h] [ebp-244h]
  LCID v18; // [esp+3Ch] [ebp-240h]
  HMODULE hModule; // [esp+44h] [ebp-238h]
  int v20; // [esp+48h] [ebp-234h]
  wchar_t *v21[3]; // [esp+4Ch] [ebp-230h] BYREF
  LONG_PTR lParam; // [esp+58h] [ebp-224h] BYREF
  LCID Locale; // [esp+5Ch] [ebp-220h]
  WCHAR Filename[268]; // [esp+60h] [ebp-21Ch] BYREF
  int v25; // [esp+278h] [ebp-4h]

  v21[2] = a1;
  v20 = (int)a2;
  lParam = 0;
  Locale = 0;
  hModule = GetModuleHandleW(L"kernel32.dll");
  GetUserDefaultUILanguage = (LANGID (__stdcall *)())GetProcAddress(hModule, "GetUserDefaultUILanguage");
  if ( GetUserDefaultUILanguage != nullptr )
  {
    v3 = GetUserDefaultUILanguage();
    lParam = v3;
    Locale = v3 & 0x3FF;
    v15 = ConvertDefaultLocale(Locale | (unsigned __int16)(v3 >> 10 << 10));
    v16 = ConvertDefaultLocale(Locale);
    Locale = 2;
    GetSystemDefaultUILanguage = (LANGID (__stdcall *)())GetProcAddress(hModule, "GetSystemDefaultUILanguage");
    if ( GetSystemDefaultUILanguage != nullptr )
    {
      v5 = GetSystemDefaultUILanguage();
      lParam = v5;
      v6 = v5 & 0x3FF;
      v17 = ConvertDefaultLocale(v6 | (unsigned __int16)(v5 >> 10 << 10));
      v18 = ConvertDefaultLocale(v6);
      Locale = 4;
    }
  }
  else
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    if ( ModuleHandleW != nullptr )
    {
      lParam = 0;
      EnumResourceLanguagesW(ModuleHandleW, (LPCWSTR)0x10, (LPCWSTR)1, (ENUMRESLANGPROCW)EnumFunc, (LONG_PTR)&lParam);
      if ( (_WORD)lParam != 0 )
      {
        v8 = lParam & 0x3FF;
        v15 = ConvertDefaultLocale(v8 | (unsigned __int16)((unsigned __int16)lParam >> 10 << 10));
        v16 = ConvertDefaultLocale(v8);
        Locale = 2;
      }
    }
  }
  if ( dword_1003EC84 == 0 )
  {
    v9 = Locale++;
    *(&v15 + v9) = 2048;
  }
  Filename[261] = 0;
  Filename[260] = 0;
  result = (HINSTANCE)GetModuleFileNameW(&_ImageBase, Filename, 0x105u);
  if ( result != nullptr )
  {
    memset(&v14, 0, sizeof(v14));
    v14.cbSize = 32;
    v14.lpSource = Filename;
    v14.lpResourceName = (LPCWSTR)1000;
    v14.hModule = &_ImageBase;
    v14.dwFlags = 136;
    CActivationContext::CActivationContext((CActivationContext *)v21, (void *)0xFFFFFFFF);
    v25 = 0;
    if ( sub_1000CFCD(v21, &v14) )
      CActivationContext::Activate((CActivationContext *)v21);
    v11 = 0;
    if ( (int)Locale <= 0 )
    {
LABEL_15:
      v13 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        v12 = sub_1000D41C(v20, *(&v15 + v11));
        if ( v12 != nullptr )
          break;
        if ( ++v11 >= (int)Locale )
          goto LABEL_15;
      }
      v13 = v12;
    }
    v25 = -1;
    CActivationContext::Release((CActivationContext *)v21);
    return v13;
  }
  return result;
}

// Address: 0x1000D93F
HINSTANCE __thiscall CWinApp::LoadAppLangResourceDLL(HMODULE *this)
{
  DWORD ModuleFileNameW; // eax
  WCHAR Filename[260]; // [esp+4h] [ebp-220h] BYREF
  wchar_t v4[10]; // [esp+20Ch] [ebp-18h] BYREF

  ModuleFileNameW = GetModuleFileNameW(*(this + 17), Filename, 0x104u);
  if ( ModuleFileNameW == 0 || ModuleFileNameW == 260 )
    return nullptr;
  *PathFindExtensionW(Filename) = 0;
  wcscpy(v4, L"%s%s.dll");
  return AfxLoadLangResourceDLL(v4, Filename);
}

// Address: 0x1000D9B8
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_18(int this, wchar_t *String)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  struct AFX_MODULE_STATE *v4; // ebx
  struct CNoTrackObject *Data; // eax

  CWinThread::CWinThread((CWinThread *)this);
  *(_DWORD *)this = &CWinApp::`vftable';
  if ( String != nullptr )
    *(_DWORD *)(this + 80) = _wcsdup(String);
  else
    *(_DWORD *)(this + 80) = 0;
  ModuleState = AfxGetModuleState();
  v4 = ModuleState;
  if ( ModuleState == nullptr
    || (Data = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData((struct AFX_MODULE_STATE *)((char *)ModuleState + 116))) == nullptr )
  {
    AfxThrowInvalidArgException();
  }
  *((_DWORD *)Data + 1) = this;
  *(_DWORD *)(this + 44) = GetCurrentThread();
  *(_DWORD *)(this + 48) = GetCurrentThreadId();
  *((_DWORD *)v4 + 1) = this;
  *(_WORD *)(this + 146) = 0;
  *(_WORD *)(this + 144) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 124) = 0;
  *(_DWORD *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = 0;
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 136) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 72) = 0;
  *(_DWORD *)(this + 140) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(_DWORD *)(this + 132) = 0;
  *(_DWORD *)(this + 112) = 0;
  *(_DWORD *)(this + 116) = 0;
  *(_DWORD *)(this + 148) = 0;
  *(_DWORD *)(this + 156) = 0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 152) = 512;
  return this;
}

// Address: 0x1000DA8F
int __thiscall sub_1000DA8F(int *this, wchar_t *Format, va_list ArgList)
{
  int v4; // esi
  wchar_t *v5; // eax

  if ( Format == nullptr )
    sub_10007E20(-2147024809);
  v4 = _vscwprintf(Format, ArgList);
  v5 = (wchar_t *)sub_10007DD0(this, v4);
  vswprintf_s(v5, v4 + 1, Format, ArgList);
  return sub_10007E40(this, v4);
}

// Address: 0x1000DAE0
int sub_1000DAE0(int *a1, wchar_t *Format, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, Format);
  return sub_1000DA8F(a1, Format, va);
}

// Address: 0x1000DAF6
// bad sp value at call has been detected, the output may be wrong!
void __thiscall CWinApp::~CWinApp(CWinApp *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  struct AFX_MODULE_STATE *ModuleState; // eax

  *(_DWORD *)this = &CWinApp::`vftable';
  v2 = *((_DWORD *)this + 22);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, 1);
  v3 = *((_DWORD *)this + 34);
  if ( v3 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 24))(v3, 1);
  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
  {
    if ( dword_1003EC6C != 0 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1003EC6C + 4))(dword_1003EC6C, 1);
      dword_1003EC6C = 0;
    }
    if ( dword_1003EC68 != 0 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1003EC68 + 4))(dword_1003EC68, 1);
      dword_1003EC68 = 0;
    }
  }
  if ( *((_DWORD *)this + 28) != 0 )
    AfxGlobalFree(*((HGLOBAL *)this + 28));
  if ( *((_DWORD *)this + 29) != 0 )
    AfxGlobalFree(*((HGLOBAL *)this + 29));
  if ( *((_WORD *)this + 72) != 0 )
    GlobalDeleteAtom(*((_WORD *)this + 72));
  if ( *((_WORD *)this + 73) != 0 )
    GlobalDeleteAtom(*((_WORD *)this + 73));
  v4 = *((_DWORD *)this + 35);
  if ( v4 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, 1);
  ModuleState = AfxGetModuleState();
  if ( *((_DWORD *)ModuleState + 4) == *((_DWORD *)this + 20) )
    *((_DWORD *)ModuleState + 4) = 0;
  if ( *((CWinApp **)ModuleState + 1) == this )
    *((_DWORD *)ModuleState + 1) = 0;
  free(*((void **)this + 20));
  free(*((void **)this + 21));
  free(*((void **)this + 24));
  free(*((void **)this + 25));
  free(*((void **)this + 26));
  *((_DWORD *)this + 11) = 0;
  CWinThread::~CWinThread(this);
}

// Address: 0x1000DCCD
CWinApp *__thiscall CWinApp::`scalar deleting destructor'(CWinApp *this, char a2)
{
  CWinApp::~CWinApp(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000DCEE
int __stdcall _AfxDispatchCmdMsg(int a1, int a2, int a3, void (*a4)(void), _DWORD *a5, int a6, _DWORD *a7)
{
  BOOL v7; // ebx
  int result; // eax
  int v9; // eax
  _DWORD *v10; // esi

  if ( a1 == 0 )
LABEL_2:
    AfxThrowInvalidArgException();
  v7 = true;
  if ( a7 != nullptr )
  {
    *a7 = a1;
    a7[1] = a4;
    return 1;
  }
  else
  {
    switch ( a6 )
    {
      case '9':
        a4();
        goto LABEL_27;
      case ':':
        v9 = ((int (*)(void))a4)();
        goto LABEL_26;
      case ';':
        ((void (__cdecl *)(int))a4)(a2);
        goto LABEL_27;
      case '<':
        v9 = ((int (__stdcall *)(int))a4)(a2);
        goto LABEL_26;
      case '=':
        if ( a5 == nullptr )
          goto LABEL_2;
        ((void (__cdecl *)(_DWORD, _DWORD))a4)(a5[1], *a5);
        goto LABEL_27;
      case '>':
        if ( a5 == nullptr )
          goto LABEL_2;
        v9 = ((int (__cdecl *)(_DWORD, _DWORD))a4)(a5[1], *a5);
        goto LABEL_26;
      case '?':
        if ( a5 == nullptr )
          goto LABEL_2;
        ((void (__cdecl *)(int, _DWORD, _DWORD))a4)(a2, a5[1], *a5);
        goto LABEL_27;
      case '@':
        if ( a5 == nullptr )
          goto LABEL_2;
        v9 = ((int (__cdecl *)(int, _DWORD, _DWORD))a4)(a2, a5[1], *a5);
LABEL_26:
        v7 = v9;
        goto LABEL_27;
      case 'A':
        v10 = a5;
        if ( a5 == nullptr )
          goto LABEL_2;
        ((void (__cdecl *)(_DWORD *))a4)(a5);
        goto LABEL_21;
      case 'B':
        v10 = a5;
        if ( a5 == nullptr )
          goto LABEL_2;
        ((void (__cdecl *)(_DWORD *, int))a4)(a5, a2);
LABEL_21:
        v7 = v10[7] == 0;
        v10[7] = 0;
LABEL_27:
        result = v7;
        break;
      case 'C':
        ((void (__cdecl *)(_DWORD *))a4)(a5);
        goto LABEL_27;
      case 'D':
        v9 = ((int (__stdcall *)(_DWORD *))a4)(a5);
        goto LABEL_26;
      default:
        return 0;
    }
  }
  return result;
}

// Address: 0x1000DE26
int __thiscall CCmdTarget::OnCmdMsg(
        CCmdTarget *this,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        struct AFX_CMDHANDLERINFO *a5)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  _DWORD *v9; // ebx
  int j; // esi
  int v11; // eax
  unsigned int v12; // edi
  int (**i)(void); // eax
  int v14; // eax
  int (**v15)(void); // esi
  int v16; // [esp+10h] [ebp+Ch]
  _DWORD *v17; // [esp+14h] [ebp+10h]

  if ( a3 != -2 )
  {
    if ( a3 != -3 )
    {
      if ( a3 == -1 || (v12 = HIWORD(a3), a3 = (unsigned __int16)a3, v12 == 0) )
        v12 = 273;
      for ( i = (int (**)(void))(*(int (__thiscall **)(CCmdTarget *))(*(_DWORD *)this + 40))(this);
            ;
            i = (int (**)(void))(*v15)() )
      {
        v15 = i;
        if ( *i == nullptr )
          return 0;
        v14 = unknown_libname_40(i[1], v12, a3, a2);
        if ( v14 != 0 )
          break;
      }
      return _AfxDispatchCmdMsg((int)this, a2, a3, *(void (**)(void))(v14 + 20), a4, *(_DWORD *)(v14 + 16), a5);
    }
    v16 = 0;
    if ( a4 == nullptr )
LABEL_3:
      AfxThrowInvalidArgException();
    v17 = (_DWORD *)a4[12];
    v9 = (_DWORD *)(*(int (__thiscall **)(CCmdTarget *))(*(_DWORD *)this + 44))(this);
LABEL_22:
    if ( v9 == nullptr || v16 != 0 )
      return v16;
    for ( j = v9[1]; ; j += 12 )
    {
      v11 = *(_DWORD *)(j + 4);
      if ( v11 == 0 || *(_DWORD *)(j + 8) == 0 || v16 != 0 )
      {
        v9 = (_DWORD *)*v9;
        goto LABEL_22;
      }
      if ( a2 == v11 )
      {
        if ( v17 != nullptr )
        {
          if ( *(_DWORD *)j != 0 && sub_100079E0(v17, *(_DWORD **)j) != 0 )
          {
LABEL_18:
            a4[1] = *(_DWORD *)(j + 8);
            v16 = 1;
            continue;
          }
        }
        else if ( *(_DWORD *)j == 0 )
        {
          goto LABEL_18;
        }
      }
    }
  }
  if ( *((_DWORD *)AfxGetModuleState() + 15) == 0 )
    goto LABEL_3;
  ModuleState = AfxGetModuleState();
  return (*(int (__thiscall **)(_DWORD, CCmdTarget *, unsigned int, _DWORD *, struct AFX_CMDHANDLERINFO *))(**((_DWORD **)ModuleState + 15) + 4))(
           *((_DWORD *)ModuleState + 15),
           this,
           a2,
           a4,
           a5);
}

// Address: 0x1000DF44
int __stdcall sub_1000DF44(int a1)
{
  return 1;
}

// Address: 0x1000DF4A
int __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this, unsigned int a2, struct ITypeLib **a3)
{
  return -2147312566;
}

// Address: 0x1000DF52
void *sub_1000DF52()
{
  return &unk_1002C110;
}

// Address: 0x1000DF58
void *sub_1000DF58()
{
  return &unk_1002C148;
}

// Address: 0x1000DF5E
void *sub_1000DF5E()
{
  return &unk_1002C164;
}

// Address: 0x1000DF64
void __thiscall CCmdTarget::OnFinalRelease(CCmdTarget *this)
{
  CTypeLibCache *v2; // eax

  AfxLockGlobals(13);
  v2 = (CTypeLibCache *)(*(int (__thiscall **)(CCmdTarget *))(*(_DWORD *)this + 32))(this);
  if ( v2 != nullptr )
    CTypeLibCache::Unlock(v2);
  AfxUnlockGlobals(13);
  (*(void (__thiscall **)(CCmdTarget *, int))(*(_DWORD *)this + 4))(this, 1);
}

// Address: 0x1000DF94
int sub_1000DF94()
{
  return 1;
}

// Address: 0x1000DF98
void *sub_1000DF98()
{
  return &unk_1002C174;
}

// Address: 0x1000DF9E
void *sub_1000DF9E()
{
  return &unk_1002C188;
}

// Address: 0x1000DFA4
CCmdUI *__thiscall CCmdUI::CCmdUI(CCmdUI *this)
{
  *(_DWORD *)this = &CCmdUI::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  return this;
}

// Address: 0x1000DFCA
DWORD __thiscall CMenu::CheckMenuItem(HMENU *this, UINT uIDCheckItem, UINT uCheck)
{
  return CheckMenuItem(*(this + 1), uIDCheckItem, uCheck);
}

// Address: 0x1000DFE2
BOOL __thiscall CMenu::EnableMenuItem(HMENU *this, UINT uIDEnableItem, UINT uEnable)
{
  return EnableMenuItem(*(this + 1), uIDEnableItem, uEnable);
}

// Address: 0x1000DFFA
BOOL __thiscall CMenu::ModifyMenuW(
        HMENU *this,
        UINT uPosition,
        UINT uFlags,
        UINT_PTR uIDNewItem,
        const wchar_t *lpNewItem)
{
  return ModifyMenuW(*(this + 1), uPosition, uFlags, uIDNewItem, lpNewItem);
}

// Address: 0x1000E018
LRESULT __thiscall CWnd::SendMessageW(HWND *this, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return SendMessageW(*(this + 8), Msg, wParam, lParam);
}

// Address: 0x1000E033
CCmdTarget *__thiscall CCmdTarget::CCmdTarget(CCmdTarget *this)
{
  *((_DWORD *)this + 7) = AfxGetModuleState();
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 5) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  return this;
}

// Address: 0x1000E05B
void __thiscall CCmdTarget::~CCmdTarget(CCmdTarget *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 4);
  if ( v2 != 0 )
    (*(void (**)(void))(v2 + 28))();
  *((_DWORD *)this + 7) = 0;
}

// Address: 0x1000E072
void __thiscall CCmdTarget::BeginWaitCursor(CCmdTarget *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  ModuleState = AfxGetModuleState();
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)ModuleState + 1) + 156))(*((_DWORD *)ModuleState + 1), 1);
}

// Address: 0x1000E087
void __thiscall CCmdTarget::EndWaitCursor(CCmdTarget *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  ModuleState = AfxGetModuleState();
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)ModuleState + 1) + 156))(*((_DWORD *)ModuleState + 1), -1);
}

// Address: 0x1000E09C
void *sub_1000E09C()
{
  return &unk_1002C1B4;
}

// Address: 0x1000E0A2
void __thiscall CCmdUI::Enable(CCmdUI *this, int a2)
{
  HMENU *v3; // ecx
  UINT v4; // eax
  int v5; // edi
  HWND Parent; // eax
  struct CWnd *v7; // eax

  v3 = *((HMENU **)this + 3);
  if ( v3 != nullptr )
  {
    if ( *((_DWORD *)this + 4) != 0 )
      return;
    v4 = *((_DWORD *)this + 2);
    if ( v4 >= *((_DWORD *)this + 8) )
      goto LABEL_4;
    CMenu::EnableMenuItem(v3, v4, (a2 != 0 ? 0 : 3) | 0x400);
  }
  else
  {
    if ( *((_DWORD *)this + 5) == 0 )
LABEL_4:
      AfxThrowInvalidArgException();
    if ( a2 == 0 )
    {
      v5 = *((_DWORD *)this + 5);
      if ( GetFocus() == *(HWND *)(v5 + 32) )
      {
        Parent = GetParent(*(HWND *)(v5 + 32));
        v7 = CWnd::FromHandle(Parent);
        SendMessageW(*((HWND *)v7 + 8), 0x28u, 0, 0);
      }
    }
    CWnd::EnableWindow(*((CWnd **)this + 5), a2);
  }
  *((_DWORD *)this + 6) = 1;
}

// Address: 0x1000E130
void __thiscall CCmdUI::SetCheck(CCmdUI *this, WPARAM wParam)
{
  HMENU *v3; // ecx
  UINT v4; // eax
  int v5; // eax

  v3 = *((HMENU **)this + 3);
  if ( v3 != nullptr )
  {
    if ( *((_DWORD *)this + 4) == 0 )
    {
      v4 = *((_DWORD *)this + 2);
      if ( v4 >= *((_DWORD *)this + 8) )
        goto LABEL_4;
      CMenu::CheckMenuItem(v3, v4, (wParam != 0 ? 8 : 0) | 0x400);
    }
  }
  else
  {
    v5 = *((_DWORD *)this + 5);
    if ( v5 == 0 )
LABEL_4:
      AfxThrowInvalidArgException();
    if ( (SendMessageW(*(HWND *)(v5 + 32), 0x87u, 0, 0) & 0x2000) != 0 )
      SendMessageW(*(HWND *)(*((_DWORD *)this + 5) + 32), 0xF1u, wParam, 0);
  }
}

// Address: 0x1000E1A6
void __thiscall CCmdUI::SetText(CCmdUI *this, const wchar_t *lpString)
{
  int v3; // eax
  UINT MenuState; // eax
  UINT v5; // ecx
  unsigned int v6; // eax
  int v7; // esi

  if ( lpString == nullptr )
LABEL_2:
    AfxThrowInvalidArgException();
  v3 = *((_DWORD *)this + 3);
  if ( v3 != 0 )
  {
    if ( *((_DWORD *)this + 4) == 0 )
    {
      MenuState = GetMenuState(*(HMENU *)(v3 + 4), *((_DWORD *)this + 2), 0x400u);
      v5 = *((_DWORD *)this + 2);
      v6 = MenuState & 0xFFFFF6FB;
      if ( v5 >= *((_DWORD *)this + 8) )
        goto LABEL_2;
      CMenu::ModifyMenuW(*((HMENU **)this + 3), v5, v6 | 0x400, *((_DWORD *)this + 1), lpString);
    }
  }
  else
  {
    v7 = *((_DWORD *)this + 5);
    if ( v7 == 0 )
      goto LABEL_2;
    AfxSetWindowText(*(HWND *)(v7 + 32), lpString);
  }
}

// Address: 0x1000E213
void __stdcall _AfxLoadDotBitmap()
{
  unsigned int v0; // eax
  int v1; // ecx
  unsigned int v2; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  _BYTE *v6; // eax
  unsigned __int8 *v7; // edx
  int v8; // esi
  __int16 v9; // bx
  int i; // [esp+Ch] [ebp-90h]
  int nWidth; // [esp+10h] [ebp-8Ch]
  int nHeight; // [esp+14h] [ebp-88h]
  _WORD Bits[64]; // [esp+18h] [ebp-84h] BYREF

  v0 = GetMenuCheckMarkDimensions();
  v1 = (__int16)v0;
  v2 = HIWORD(v0);
  v3 = (__int16)v2;
  nWidth = v1;
  nHeight = (__int16)v2;
  if ( v1 <= 4 || (__int16)v2 <= 5 )
    AfxThrowInvalidArgException();
  if ( v1 > 32 )
  {
    v1 = 32;
    nWidth = 32;
  }
  v4 = (v1 + 15) >> 4;
  v5 = 16 * v4 + (v1 - 4) / 2 - v1;
  if ( v5 > 12 )
    LOBYTE(v5) = 12;
  if ( (__int16)v2 > 32 )
  {
    v3 = 32;
    nHeight = 32;
  }
  memset(Bits, 255, sizeof(Bits));
  v6 = &Bits[v4 * ((v3 - 6) >> 1)];
  v7 = (unsigned __int8 *)&unk_1002C190;
  v8 = 2 * v4;
  for ( i = 5; i != 0; --i )
  {
    v9 = *v7++ << v5;
    *v6 = (unsigned __int16)~v9 >> 8;
    v6[1] = ~(_BYTE)v9;
    v6 += v8;
  }
  hBitmapChecked = CreateBitmap(nWidth, nHeight, 1u, 1u, Bits);
  if ( hBitmapChecked == nullptr )
    hBitmapChecked = LoadBitmapW(nullptr, (LPCWSTR)0x7FE3);
}

// Address: 0x1000E335
void __thiscall CCmdUI::SetRadio(CCmdUI *this, int a2)
{
  (*(void (__thiscall **)(CCmdUI *, bool))(*(_DWORD *)this + 4))(this, a2 != 0);
  if ( *((_DWORD *)this + 3) != 0 && *((_DWORD *)this + 4) == 0 )
  {
    if ( *((_DWORD *)this + 2) >= *((_DWORD *)this + 8) )
      AfxThrowInvalidArgException();
    if ( hBitmapChecked != nullptr || (_AfxLoadDotBitmap(), hBitmapChecked != nullptr) )
      SetMenuItemBitmaps(*(HMENU *)(*((_DWORD *)this + 3) + 4), *((_DWORD *)this + 2), 0x400u, nullptr, hBitmapChecked);
  }
}

// Address: 0x1000E39D
struct CWinThread *__stdcall AfxGetThread()
{
  return *((struct CWinThread **)AfxGetModuleThreadState() + 1);
}

// Address: 0x1000E3A6
struct tagMSG *__stdcall AfxGetCurrentMessage()
{
  return (struct tagMSG *)((char *)AfxGetThreadState() + 48);
}

// Address: 0x1000E3AF
int __stdcall AfxInternalProcessWndProcException(struct CException *a1, const struct tagMSG *a2)
{
  UINT message; // eax

  message = a2->message;
  if ( message == 1 )
    return -1;
  if ( message == 15 )
    ValidateRect(a2->hwnd, nullptr);
  return 0;
}

// Address: 0x1000E3D9
int __stdcall AfxProcessWndProcException(struct CException *a1, const struct tagMSG *a2)
{
  int v2; // ecx

  v2 = *((_DWORD *)AfxGetModuleThreadState() + 1);
  if ( v2 != 0 )
    return (*(int (__thiscall **)(int, struct CException *, const struct tagMSG *))(*(_DWORD *)v2 + 108))(v2, a1, a2);
  else
    return AfxInternalProcessWndProcException(a1, a2);
}

// Address: 0x1000E3F6
void __stdcall AfxTermThread(HINSTANCE a1)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // eax
  struct AFX_MODULE_THREAD_STATE *v2; // esi
  int v3; // ecx
  int v4; // ecx

  AfxLockTempMaps();
  AfxUnlockTempMaps(0xFFFFFFFF);
  if ( a1 == nullptr )
  {
    ModuleThreadState = AfxGetModuleThreadState();
    v2 = ModuleThreadState;
    if ( ModuleThreadState != nullptr )
    {
      v3 = *((_DWORD *)ModuleThreadState + 15);
      if ( v3 != 0 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 96))(v3);
        v4 = *((_DWORD *)v2 + 15);
        if ( v4 != 0 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, 1);
        *((_DWORD *)v2 + 15) = 0;
      }
    }
  }
  if ( dword_1003ECAC != nullptr )
    CThreadSlotData::DeleteValues(dword_1003ECAC, a1, 0);
}

// Address: 0x1000E495
void __thiscall CWinThread::CommonConstruct(CWinThread *this)
{
  struct _AFX_THREAD_STATE *ThreadState; // eax

  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  ThreadState = AfxGetThreadState();
  *((_DWORD *)ThreadState + 13) = 0;
  *((_DWORD *)ThreadState + 21) = 0;
  GetCursorPos((LPPOINT)((char *)ThreadState + 76));
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 10) = 1;
}

// Address: 0x1000E4CE
void __thiscall CWinThread::~CWinThread(CWinThread *this)
{
  void *v2; // eax
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // eax

  *(_DWORD *)this = &CWinThread::`vftable';
  v2 = *((void **)this + 11);
  if ( v2 != nullptr )
    CloseHandle(v2);
  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((CWinThread **)ModuleThreadState + 1) == this )
    *((_DWORD *)ModuleThreadState + 1) = 0;
  CCmdTarget::~CCmdTarget(this);
}

// Address: 0x1000E516
void __thiscall CWinThread::Delete(CWinThread *this)
{
  if ( *((_DWORD *)this + 10) != 0 )
    (*(void (__thiscall **)(CWinThread *, int))(*(_DWORD *)this + 4))(this, 1);
}

// Address: 0x1000E524
int sub_1000E524()
{
  return 0;
}

// Address: 0x1000E527
int __thiscall CWinThread::Run(CWinThread *this)
{
  int v2; // eax
  bool v3; // zf
  int v4; // eax
  struct _AFX_THREAD_STATE *ThreadState; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  ThreadState = AfxGetThreadState();
  v8 = 1;
  v7 = 0;
LABEL_2:
  while ( v8 != 0 )
  {
    if ( PeekMessageW((LPMSG)((char *)ThreadState + 48), nullptr, 0, 0, 0) )
      break;
    v2 = (*(int (__thiscall **)(CWinThread *, int))(*(_DWORD *)this + 96))(this, v7++);
    if ( v2 == 0 )
      v8 = 0;
  }
  while ( 1 )
  {
    v3 = (*(int (__thiscall **)(CWinThread *))(*(_DWORD *)this + 92))(this) == 0;
    v4 = *(_DWORD *)this;
    if ( v3 )
      return (*(int (__thiscall **)(CWinThread *))(v4 + 104))(this);
    if ( (*(int (__thiscall **)(CWinThread *, int))(v4 + 100))(this, (int)ThreadState + 48) != 0 )
    {
      v8 = 1;
      v7 = 0;
    }
    if ( !PeekMessageW((LPMSG)((char *)ThreadState + 48), nullptr, 0, 0, 0) )
      goto LABEL_2;
  }
}

// Address: 0x1000E5BB
int sub_1000E5BB()
{
  return *((_DWORD *)AfxGetThreadState() + 14);
}

// Address: 0x1000E5C4
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_19(void *this, int a2)
{
  int (**v2)(void); // esi
  unsigned int v3; // eax
  int v4; // eax
  int v5; // ecx
  int (*i)(void); // eax

  v2 = (int (**)(void))(*(int (__fastcall **)(void *))(*(_DWORD *)this + 40))(this);
  if ( *v2 == nullptr )
    return 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(a2 + 4);
    if ( v3 >= 0xC000 )
    {
      for ( i = v2[1]; ; i = (int (*)(void))(v4 + 24) )
      {
        v4 = unknown_libname_40(i, 49152, 0, 0);
        if ( v4 == 0 )
          break;
        v5 = a2;
        if ( **(_DWORD **)(v4 + 16) == *(_DWORD *)(a2 + 4) )
          goto LABEL_5;
      }
      goto LABEL_10;
    }
    v4 = unknown_libname_40(v2[1], v3, 0, 0);
    if ( v4 != 0 )
      break;
LABEL_10:
    v2 = (int (**)(void))(*v2)();
    if ( *v2 == nullptr )
      return 0;
  }
  v5 = a2;
LABEL_5:
  (*(void (__thiscall **)(void *, _DWORD, _DWORD))(v4 + 20))(this, *(_DWORD *)(v5 + 8), *(_DWORD *)(v5 + 12));
  return 1;
}

// Address: 0x1000E642
int __thiscall CWinThread::ProcessWndProcException(CWinThread *this, struct CException *a2, const struct tagMSG *a3)
{
  return AfxInternalProcessWndProcException(a2, a3);
}

// Address: 0x1000E64D
BOOL __cdecl IsEnterKey(struct tagMSG *a1)
{
  return a1->message == 256 && a1->wParam == 13;
}

// Address: 0x1000E66D
char **sub_1000E66D()
{
  return &off_1002C1F4;
}

// Address: 0x1000E673
// MFC 3.1-14.0 32bit
BOOL __thiscall unknown_libname_21(_DWORD *this, int a2, int a3)
{
  return *this == a2 && *(this + 1) == a3;
}

// Address: 0x1000E692
int __cdecl AfxInternalPreTranslateMessage(struct tagMSG *a1)
{
  void *v1; // eax
  HWND MainWnd; // eax
  struct CWnd *v4; // esi
  CWnd *v5; // eax

  v1 = *((void **)AfxGetModuleThreadState() + 1);
  if ( v1 != nullptr && a1->hwnd == nullptr && unknown_libname_19(v1, (int)a1) != 0 )
    return 1;
  MainWnd = (HWND)AfxGetMainWnd();
  v4 = (struct CWnd *)MainWnd;
  if ( MainWnd != nullptr )
    MainWnd = *((HWND *)MainWnd + 8);
  if ( CWnd::WalkPreTranslateTree(MainWnd, a1) != 0 )
    return 1;
  if ( v4 == nullptr )
    return 0;
  v5 = CWnd::FromHandle(a1->hwnd);
  if ( CWnd::GetTopLevelParent(v5) == v4 )
    return 0;
  return (*(int (__thiscall **)(struct CWnd *, struct tagMSG *))(*(_DWORD *)v4 + 264))(v4, a1);
}

// Address: 0x1000E705
int __cdecl AfxPreTranslateMessage(struct tagMSG *a1)
{
  int v1; // ecx

  v1 = *((_DWORD *)AfxGetModuleThreadState() + 1);
  if ( v1 != 0 )
    return (*(int (__thiscall **)(int, struct tagMSG *))(*(_DWORD *)v1 + 88))(v1, a1);
  else
    return AfxInternalPreTranslateMessage(a1);
}

// Address: 0x1000E726
BOOL __cdecl AfxInternalIsIdleMessage(struct tagMSG *a1)
{
  UINT message; // eax
  struct _AFX_THREAD_STATE *ThreadState; // ebx

  message = a1->message;
  if ( message != 512 && message != 160 )
    return message != 15 && message != 280;
  ThreadState = AfxGetThreadState();
  if ( unknown_libname_21((_DWORD *)ThreadState + 19, a1->pt.x, a1->pt.y)
    && a1->message == *((_DWORD *)ThreadState + 21) )
  {
    return false;
  }
  else
  {
    *(POINT *)((char *)ThreadState + 76) = a1->pt;
    *((_DWORD *)ThreadState + 21) = a1->message;
    return true;
  }
}

// Address: 0x1000E797
void __stdcall __noreturn AfxEndThread(unsigned int ReturnCode, int a2)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // edi
  _DWORD *v3; // esi
  void (__stdcall *v4)(int, _DWORD); // eax

  ModuleThreadState = AfxGetModuleThreadState();
  v3 = *((_DWORD **)ModuleThreadState + 1);
  if ( v3 != nullptr )
  {
    v4 = (void (__stdcall *)(int, _DWORD))v3[15];
    if ( v4 != nullptr )
      v4(1, 0);
    if ( a2 != 0 )
      (*(void (__thiscall **)(_DWORD *))(*v3 + 120))(v3);
    *((_DWORD *)ModuleThreadState + 1) = 0;
  }
  AfxTermThread(nullptr);
  _endthreadex(ReturnCode);
}

// Address: 0x1000E7E0
CWinThread *__thiscall CWinThread::CWinThread(CWinThread *this, unsigned int (__cdecl *a2)(void *), void *a3)
{
  CCmdTarget::CCmdTarget(this);
  *((_DWORD *)this + 14) = a2;
  *(_DWORD *)this = &CWinThread::`vftable';
  *((_DWORD *)this + 13) = a3;
  CWinThread::CommonConstruct(this);
  return this;
}

// Address: 0x1000E81D
CWinThread *__thiscall CWinThread::`scalar deleting destructor'(CWinThread *this, char a2)
{
  CWinThread::~CWinThread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000E83E
CWinThread *__thiscall CWinThread::CWinThread(CWinThread *this)
{
  CCmdTarget::CCmdTarget(this);
  *(_DWORD *)this = &CWinThread::`vftable';
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  CWinThread::CommonConstruct(this);
  return this;
}

// Address: 0x1000E874
int __thiscall CWinThread::IsIdleMessage(CWinThread *this, struct tagMSG *a2)
{
  return unknown_libname_4(a2);
}

// Address: 0x1000E876
// Microsoft VisualC 2-14/net runtime
BOOL __stdcall unknown_libname_4(struct tagMSG *a1)
{
  return AfxInternalIsIdleMessage(a1);
}

// Address: 0x1000E886
int __thiscall CWinThread::PreTranslateMessage(CWinThread *this, struct tagMSG *a2)
{
  return unknown_libname_5(a2);
}

// Address: 0x1000E888
// Microsoft VisualC 2-14/net runtime
int __stdcall unknown_libname_5(struct tagMSG *a1)
{
  return AfxInternalPreTranslateMessage(a1);
}

// Address: 0x1000E898
struct CWnd *__thiscall CWinThread::GetMainWnd(CWinThread *this)
{
  struct CWnd *result; // eax
  HWND ActiveWindow; // eax

  result = *((struct CWnd **)this + 9);
  if ( result == nullptr )
  {
    result = *((struct CWnd **)this + 8);
    if ( result == nullptr )
    {
      ActiveWindow = GetActiveWindow();
      return CWnd::FromHandle(ActiveWindow);
    }
  }
  return result;
}

// Address: 0x1000E8B3
BOOL __stdcall AfxInternalPumpMessage()
{
  struct _AFX_THREAD_STATE *ThreadState; // esi
  BOOL result; // eax

  ThreadState = AfxGetThreadState();
  result = GetMessageW((LPMSG)((char *)ThreadState + 48), nullptr, 0, 0);
  if ( result )
  {
    if ( *((_DWORD *)ThreadState + 13) != 874
      && AfxPreTranslateMessage((struct tagMSG *)((char *)ThreadState + 48)) == 0 )
    {
      TranslateMessage((const MSG *)((char *)ThreadState + 48));
      DispatchMessageW((const MSG *)((char *)ThreadState + 48));
    }
    return true;
  }
  return result;
}

// Address: 0x1000E8F9
LRESULT __stdcall _AfxMsgFilterHook(int code, WPARAM wParam, LPARAM lParam)
{
  int v3; // ecx
  struct CNoTrackObject *Data; // eax

  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 && code >= 0 )
  {
    v3 = *((_DWORD *)AfxGetModuleThreadState() + 1);
    if ( v3 != 0 )
      return (*(LRESULT (__thiscall **)(int, int, LPARAM))(*(_DWORD *)v3 + 112))(v3, code, lParam);
  }
  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  return CallNextHookEx(*((HHOOK *)Data + 11), code, wParam, lParam);
}

// Address: 0x1000E95D
int __thiscall CWinThread::ProcessMessageFilter(CWinThread *this, int a2, struct tagMSG *a3)
{
  CWnd *v4; // eax
  CFrameWnd *TopLevelFrame; // eax
  CFrameWnd *v6; // edi
  struct CWnd *MainWnd; // edi
  UINT message; // eax
  struct CNoTrackObject *Data; // eax
  struct CNoTrackObject *v10; // ebx
  struct tagMSG v11; // [esp+8h] [ebp-20h] BYREF
  CWinThread *v12; // [esp+24h] [ebp-4h]

  v12 = this;
  if ( a3 == nullptr )
    return 0;
  if ( a2 != 0 )
  {
    if ( a2 != 2 )
      return 0;
    v4 = CWnd::FromHandle(a3->hwnd);
    if ( v4 != nullptr )
    {
      TopLevelFrame = CWnd::GetTopLevelFrame(v4);
      v6 = TopLevelFrame;
      if ( TopLevelFrame != nullptr && CFrameWnd::IsTracking(TopLevelFrame) != 0 && *((_DWORD *)v6 + 26) != 0 )
      {
        MainWnd = AfxGetMainWnd();
        if ( *((_DWORD *)v12 + 8) != 0 && (IsEnterKey(a3) || a3->message == 514) )
        {
          SendMessageW(*((HWND *)MainWnd + 8), 0x111u, 0xE146u, 0);
          return 1;
        }
      }
    }
  }
  AfxGetMainWnd();
  if ( a2 == 0 && *((_DWORD *)v12 + 9) != 0 )
  {
    message = a3->message;
    if ( message >= 0x100 && message <= 0x109 )
    {
      Data = CThreadLocalObject::GetData(
               (CThreadLocalObject *)&unk_1003ECA4,
               CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
      v10 = Data;
      if ( Data == nullptr )
        AfxThrowInvalidArgException();
      if ( *((_DWORD *)Data + 80) == 0 )
      {
        *((_DWORD *)Data + 80) = 1;
        v11 = *a3;
        if ( CWnd::IsWindowEnabled(*((CWnd **)v12 + 9)) != 0
          && (*(int (__thiscall **)(CWinThread *, struct tagMSG *))(*(_DWORD *)v12 + 88))(v12, &v11) != 0 )
        {
          *((_DWORD *)v10 + 80) = 0;
          return 1;
        }
        *((_DWORD *)v10 + 80) = 0;
      }
    }
  }
  return 0;
}

// Address: 0x1000EA8C
// attributes: thunk
BOOL __stdcall AfxInternalPumpMessage()
{
  return ?AfxInternalPumpMessage@@YGHXZ();
}

// Address: 0x1000EA91
void __stdcall AfxInitThread()
{
  struct _AFX_THREAD_STATE *ThreadState; // esi
  DWORD CurrentThreadId; // eax

  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
  {
    ThreadState = AfxGetThreadState();
    CurrentThreadId = GetCurrentThreadId();
    *((_DWORD *)ThreadState + 11) = SetWindowsHookExW(-1, _AfxMsgFilterHook, nullptr, CurrentThreadId);
  }
}

// Address: 0x1000EABF
BOOL __thiscall CWinThread::OnIdle(CWinThread *this, int a2)
{
  HWND *v2; // ebx
  struct AFX_MODULE_STATE *v3; // eax
  int i; // esi
  struct AFX_MODULE_STATE *ModuleState; // eax

  if ( a2 > 0 )
  {
    ModuleState = AfxGetModuleState();
    if ( *((_DWORD *)CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData((struct AFX_MODULE_STATE *)((char *)ModuleState + 116))
         + 4) == 0 )
    {
      AfxLockTempMaps();
      AfxUnlockTempMaps(1u);
    }
  }
  else
  {
    v2 = *((HWND **)this + 8);
    if ( v2 != nullptr && v2[8] != nullptr && IsWindowVisible(v2[8]) )
    {
      AfxCallWndProc((struct CWnd *)v2, v2[8], 0x363u, 1u, 0);
      CWnd::SendMessageToDescendants(v2[8], 0x363u, 1u, 0, 1, 1);
    }
    v3 = AfxGetModuleState();
    for ( i = *((_DWORD *)CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData((struct AFX_MODULE_STATE *)((char *)v3 + 116))
              + 2); i != 0; i = *(_DWORD *)(i + 108) )
    {
      if ( *(_DWORD *)(i + 32) != 0 && (HWND *)i != v2 )
      {
        if ( *(_DWORD *)(i + 160) == 0 )
          CWnd::ShowWindow((CWnd *)i, 0);
        if ( IsWindowVisible(*(HWND *)(i + 32)) || *(int *)(i + 160) >= 0 )
        {
          AfxCallWndProc((struct CWnd *)i, *(HWND *)(i + 32), 0x363u, 1u, 0);
          CWnd::SendMessageToDescendants(*(HWND *)(i + 32), 0x363u, 1u, 0, 1, 1);
        }
        if ( *(int *)(i + 160) > 0 )
          CWnd::ShowWindow((CWnd *)i, *(_DWORD *)(i + 160));
        *(_DWORD *)(i + 160) = -1;
      }
    }
  }
  return a2 < 1;
}

// Address: 0x1000EBC1
void __stdcall __noreturn _AfxThreadEntry(void *a1)
{
  _DWORD *v1; // esi
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v3; // eax
  int v4; // eax
  void *v5; // ebx
  int (__cdecl *v6)(_DWORD); // eax
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // esi
  _BYTE v11[84]; // [esp+14h] [ebp-68h] BYREF
  _DWORD *v12; // [esp+68h] [ebp-14h]
  int v13; // [esp+78h] [ebp-4h]

  v12 = *((_DWORD **)a1 + 1);
  v1 = v12;
  CWnd::CWnd((CWnd *)v11);
  v13 = 1;
  *((_DWORD *)AfxGetThreadState() + 1) = *(_DWORD *)(*(_DWORD *)a1 + 4);
  ModuleState = AfxGetModuleState();
  v1[7] = ModuleState;
  *((_DWORD *)CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData((struct AFX_MODULE_STATE *)((char *)ModuleState + 116)) + 1) = v1;
  AfxInitThread();
  v3 = *((_DWORD *)AfxGetModuleState() + 1);
  if ( v3 != 0 && v1[8] == 0 )
  {
    v4 = *(_DWORD *)(v3 + 32);
    if ( v4 != 0 && *(_DWORD *)(v4 + 32) != 0 )
    {
      CWnd::Attach((CWnd *)v11, *(HWND *)(v4 + 32));
      v1[8] = v11;
    }
  }
  v13 = 0;
  v5 = *((void **)a1 + 5);
  SetEvent(*((HANDLE *)a1 + 4));
  WaitForSingleObject(v5, 0xFFFFFFFF);
  CloseHandle(v5);
  v6 = (int (__cdecl *)(_DWORD))v1[14];
  if ( v6 != nullptr )
  {
    v7 = v6(v1[13]);
  }
  else
  {
    v8 = (*(int (__thiscall **)(_DWORD *))(*v1 + 80))(v1) == 0;
    v9 = *v1;
    if ( v8 )
      v7 = (*(int (__thiscall **)(_DWORD *))(v9 + 104))(v1);
    else
      v7 = (*(int (__thiscall **)(_DWORD *))(v9 + 84))(v1);
  }
  v10 = v7;
  CWnd::Detach((CWnd *)v11);
  AfxEndThread(v10, 1);
}

// Address: 0x1000ECDD
int __thiscall CWinThread::CreateThread(
        CWinThread *this,
        unsigned int a2,
        unsigned int StackSize,
        struct _SECURITY_ATTRIBUTES *Security)
{
  void (__stdcall *v5)(HANDLE); // edi
  void *v6; // eax
  HANDLE ArgList[7]; // [esp+Ch] [ebp-1Ch] BYREF

  if ( *((_DWORD *)this + 11) != 0 )
    AfxThrowInvalidArgException();
  memset(ArgList, 0, sizeof(ArgList));
  ArgList[0] = AfxGetThreadState();
  ArgList[1] = this;
  ArgList[4] = CreateEventW(nullptr, true, false, nullptr);
  v5 = (void (__stdcall *)(HANDLE))CloseHandle;
  ArgList[5] = CreateEventW(nullptr, true, false, nullptr);
  ArgList[2] = (HANDLE)a2;
  if ( ArgList[4] == nullptr )
  {
LABEL_13:
    if ( ArgList[5] == nullptr )
      return 0;
LABEL_14:
    v5(ArgList[5]);
    return 0;
  }
  if ( ArgList[5] == nullptr )
  {
    CloseHandle(ArgList[4]);
    goto LABEL_13;
  }
  v6 = (void *)_beginthreadex(
                 Security,
                 StackSize,
                 (_beginthreadex_proc_type)_AfxThreadEntry,
                 ArgList,
                 a2 | 4,
                 (unsigned int *)this + 12);
  *((_DWORD *)this + 11) = v6;
  if ( v6 != nullptr )
  {
    ResumeThread(v6);
    WaitForSingleObject(ArgList[4], 0xFFFFFFFF);
    v5 = (void (__stdcall *)(HANDLE))CloseHandle;
    CloseHandle(ArgList[4]);
    if ( (a2 & 4) != 0 )
      SuspendThread(*((HANDLE *)this + 11));
    if ( ArgList[6] == nullptr )
    {
      SetEvent(ArgList[5]);
      return 1;
    }
    WaitForSingleObject(*((HANDLE *)this + 11), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 11));
    *((_DWORD *)this + 11) = 0;
    goto LABEL_14;
  }
  CloseHandle(ArgList[4]);
  CloseHandle(ArgList[5]);
  return 0;
}

// Address: 0x1000EDE8
void nullsub_1()
{
  ;
}

// Address: 0x1000EDE9
struct __POSITION *__thiscall CWinApp::GetFirstDocTemplatePosition(CWinApp *this)
{
  if ( *((_DWORD *)this + 22) != 0 )
    return (*(struct __POSITION *(__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 16))(*((_DWORD *)this + 22));
  else
    return nullptr;
}

// Address: 0x1000EDFA
struct CDocTemplate *__thiscall CWinApp::GetNextDocTemplate(CWinApp *this, struct __POSITION **a2)
{
  if ( *((_DWORD *)this + 22) == 0 )
    AfxThrowInvalidArgException();
  return (*(struct CDocTemplate *(__thiscall **)(_DWORD, struct __POSITION **))(**((_DWORD **)this + 22) + 20))(
           *((_DWORD *)this + 22),
           a2);
}

// Address: 0x1000EE13
int __thiscall ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(const wchar_t **this, size_t a2)
{
  size_t v2; // eax

  v2 = a2;
  if ( a2 == -1 )
    v2 = ATL::CSimpleStringT<wchar_t,0>::StringLengthN(*this, *((_DWORD *)*this - 2));
  return sub_10007E40(this, v2);
}

// Address: 0x1000EE3D
// MFC 3.1-14.0 32bit
_DWORD *__thiscall unknown_libname_22(_DWORD *this, _DWORD *a2)
{
  *this = ATL::CSimpleStringT<wchar_t,0>::CloneData((volatile signed __int32 *)(*a2 - 16)) + 4;
  return this;
}

// Address: 0x1000EE60
_DWORD *__thiscall sub_1000EE60(_DWORD *this, int a2)
{
  sub_10007BA0(this, a2);
  return this;
}

// Address: 0x1000EE77
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_23(_DWORD *this)
{
  int v1; // ecx
  int result; // eax
  void *v3; // eax

  v1 = *(_DWORD *)(*this - 16);
  if ( v1 != 0 )
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 16))(v1);
  else
    result = 0;
  if ( result == 0 )
  {
    v3 = sub_1000CCFE();
    return (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 16))(v3);
  }
  return result;
}

// Address: 0x1000EE9A
_DWORD *__thiscall sub_1000EE9A(_DWORD *this, _DWORD *a2)
{
  unknown_libname_22(this, a2);
  return this;
}

// Address: 0x1000EEB1
int __cdecl ATL::CSimpleStringT<wchar_t,0>::Concatenate(
        int *a1,
        const void *a2,
        rsize_t DestinationSize,
        const void *a4,
        rsize_t SourceSize)
{
  int v6; // ebx
  char *DestinationSizea; // [esp+1Ch] [ebp+10h]

  v6 = DestinationSize + SourceSize;
  DestinationSizea = (char *)sub_10007DD0(a1, DestinationSize + SourceSize);
  sub_10007E00(DestinationSizea, DestinationSize, a2, DestinationSize);
  sub_10007E00(&DestinationSizea[2 * DestinationSize], SourceSize, a4, SourceSize);
  return sub_10007E40(a1, v6);
}

// Address: 0x1000EEFB
int *__cdecl sub_1000EEFB(int *a1, const void **a2, __int16 *a3)
{
  int v3; // eax
  const void *v4; // esi
  rsize_t v5; // edi
  __int16 *v6; // eax

  v3 = unknown_libname_23(a2);
  sub_1000EE60(a1, v3);
  v4 = *a2;
  v5 = *((_DWORD *)*a2 - 3);
  v6 = sub_10007F20(a3);
  ATL::CSimpleStringT<wchar_t,0>::Concatenate(a1, v4, v5, a3, (rsize_t)v6);
  return a1;
}

// Address: 0x1000EF50
int *__cdecl sub_1000EF50(int *a1, __int16 *a2, const void **a3)
{
  int v3; // eax
  __int16 *v4; // eax
  const void *v6; // [esp-8h] [ebp-28h]
  rsize_t v7; // [esp-4h] [ebp-24h]

  v3 = unknown_libname_23(a3);
  sub_1000EE60(a1, v3);
  v7 = *((_DWORD *)*a3 - 3);
  v6 = *a3;
  v4 = sub_10007F20(a2);
  ATL::CSimpleStringT<wchar_t,0>::Concatenate(a1, a2, (rsize_t)v4, v6, v7);
  return a1;
}

// Address: 0x1000EFA5
LSTATUS __stdcall AfxDelRegTreeHelper(HKEY a1, _DWORD *a2)
{
  int *v2; // eax
  LSTATUS v3; // esi
  HKEY hKey; // [esp+14h] [ebp-230h]
  HKEY phkResult; // [esp+18h] [ebp-22Ch] BYREF
  LPCWSTR lpSubKey; // [esp+1Ch] [ebp-228h] BYREF
  volatile signed __int32 *v8; // [esp+20h] [ebp-224h] BYREF
  WCHAR Name[270]; // [esp+24h] [ebp-220h] BYREF
  int v10; // [esp+240h] [ebp-4h]

  hKey = a1;
  unknown_libname_22(&lpSubKey, a2);
  v10 = 0;
  if ( a1 == HKEY_CLASSES_ROOT && sub_1000F9F9() == 1 )
  {
    v2 = sub_1000EF50((int *)&v8, L"Software\\Classes\\", (const void **)&lpSubKey);
    LOBYTE(v10) = 1;
    ATL::CSimpleStringT<wchar_t,0>::operator=((volatile signed __int32 **)&lpSubKey, (_BYTE **)v2);
    LOBYTE(v10) = 0;
    sub_10007C90(v8 - 4);
    hKey = HKEY_CURRENT_USER;
  }
  v3 = RegOpenKeyW(hKey, lpSubKey, &phkResult);
  if ( v3 == 0 )
  {
    while ( 1 )
    {
      v3 = RegEnumKeyW(phkResult, 0, Name, 0x104u);
      if ( v3 != 0 )
        break;
      LOBYTE(v10) = 2;
      sub_1000CAD3(&v8, Name);
      LOBYTE(v10) = 3;
      v3 = AfxDelRegTreeHelper(phkResult, &v8);
      LOBYTE(v10) = 2;
      sub_10007C90(v8 - 4);
      if ( v3 != 0 )
        break;
      v10 = 0;
    }
    if ( v3 == 259 || v3 == 1010 )
      v3 = RegDeleteKeyW(hKey, lpSubKey);
    RegCloseKey(phkResult);
  }
  sub_10007C90((volatile signed __int32 *)lpSubKey - 4);
  return v3;
}

// Address: 0x1000F123
int __thiscall CWinApp::Unregister(__int16 **this)
{
  struct CDocTemplate *NextDocTemplate; // eax
  int *v3; // eax
  __int16 *v5; // [esp-10h] [ebp-254h]
  __int16 *v6; // [esp-4h] [ebp-248h]
  int v7; // [esp+10h] [ebp-234h] BYREF
  LONG cbData; // [esp+14h] [ebp-230h] BYREF
  struct __POSITION *FirstDocTemplatePosition; // [esp+18h] [ebp-22Ch] BYREF
  LPCWSTR v10; // [esp+1Ch] [ebp-228h] BYREF
  HKEY phkResult; // [esp+20h] [ebp-224h] BYREF
  LPCWSTR lpSubKey; // [esp+24h] [ebp-220h] BYREF
  WCHAR Name[268]; // [esp+28h] [ebp-21Ch] BYREF
  int v14; // [esp+240h] [ebp-4h]

  phkResult = nullptr;
  cbData = 0;
  FirstDocTemplatePosition = CWinApp::GetFirstDocTemplatePosition((CWinApp *)this);
  while ( FirstDocTemplatePosition != nullptr )
  {
    NextDocTemplate = CWinApp::GetNextDocTemplate((CWinApp *)this, &FirstDocTemplatePosition);
    if ( NextDocTemplate != nullptr )
      (*(void (__thiscall **)(struct CDocTemplate *, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)NextDocTemplate + 12))(
        NextDocTemplate,
        0,
        -4,
        0,
        0);
  }
  if ( *(this + 21) != nullptr )
  {
    if ( *(this + 26) == nullptr )
      AfxThrowInvalidArgException();
    sub_1000CAD3((volatile signed __int32 **)&lpSubKey, L"Software\\");
    v6 = *(this + 21);
    v14 = 0;
    sub_1000CA84((int *)&lpSubKey, v6);
    v3 = sub_1000EEFB(&v7, (const void **)&lpSubKey, L"\\");
    v5 = *(this + 26);
    LOBYTE(v14) = 1;
    sub_1000EEFB((int *)&v10, (const void **)v3, v5);
    LOBYTE(v14) = 3;
    sub_10007C90((volatile signed __int32 *)(v7 - 16));
    AfxDelRegTreeHelper(HKEY_CURRENT_USER, &v10);
    if ( RegOpenKeyW(HKEY_CURRENT_USER, lpSubKey, &phkResult) == 0 )
    {
      if ( RegEnumKeyW(phkResult, 0, Name, 0x104u) == 259 )
        AfxDelRegTreeHelper(HKEY_CURRENT_USER, &lpSubKey);
      RegCloseKey(phkResult);
    }
    RegQueryValueW(HKEY_CURRENT_USER, v10, Name, &cbData);
    sub_10007C90((volatile signed __int32 *)v10 - 4);
    sub_10007C90((volatile signed __int32 *)lpSubKey - 4);
  }
  return 1;
}

// Address: 0x1000F296
void __thiscall CWinApp::DoWaitCursor(CWinApp *this, int a2)
{
  HCURSOR v3; // eax
  HCURSOR v4; // [esp-4h] [ebp-Ch]

  if ( (unsigned int)a2 >= 2 && a2 != -1 || hCursor == nullptr )
    AfxThrowInvalidArgException();
  AfxLockGlobals(2);
  *((_DWORD *)this + 32) += a2;
  if ( *((int *)this + 32) <= 0 )
  {
    v4 = *((HCURSOR *)this + 33);
    *((_DWORD *)this + 32) = 0;
    SetCursor(v4);
  }
  else
  {
    v3 = SetCursor(hCursor);
    if ( a2 > 0 && *((_DWORD *)this + 32) == 1 )
      *((_DWORD *)this + 33) = v3;
  }
  AfxUnlockGlobals(2);
}

// Address: 0x1000F315
int __thiscall CWinApp::SaveAllModified(CWinApp *this)
{
  if ( *((_DWORD *)this + 22) != 0 )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 32))(*((_DWORD *)this + 22));
  else
    return 1;
}

// Address: 0x1000F327
// MFC 3.1-14.0 32bit
_DWORD *__thiscall unknown_libname_24(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  if ( a2 == 0 )
    AfxThrowInvalidArgException();
  result = this + 34;
  if ( *(this + 34) != 0 )
    return (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*result + 4))(*result, a2);
  return result;
}

// Address: 0x1000F350
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_25(_DWORD *this)
{
  if ( *(this + 22) == 0 )
    AfxThrowInvalidArgException();
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 22) + 28))(*(this + 22));
}

// Address: 0x1000F369
void __thiscall CWinApp::OnUpdateRecentFileMenu(CWinApp *this, struct CCmdUI *a2)
{
  if ( a2 == nullptr )
    AfxThrowInvalidArgException();
  if ( *((_DWORD *)this + 34) != 0 )
    (*(void (__thiscall **)(_DWORD, struct CCmdUI *))(**((_DWORD **)this + 34) + 12))(*((_DWORD *)this + 34), a2);
  else
    (**(void (__stdcall ***)(_DWORD))a2)(0);
}

// Address: 0x1000F39C
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_26(_DWORD **this, int a2)
{
  if ( *(this + 22) != nullptr )
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 22) + 48))(*(this + 22), a2);
  else
    return 0;
}

// Address: 0x1000F3B6
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_27(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= *(this + 1) )
    AfxThrowInvalidArgException();
  return *(this + 2) + 4 * a2;
}

// Address: 0x1000F3D6
void __thiscall CWinApp::OnAppExit(CWinApp *this)
{
  SendMessageW(*(HWND *)(*((_DWORD *)this + 8) + 32), 0x10u, 0, 0);
}

// Address: 0x1000F3E9
int __thiscall CWinApp::OnOpenRecentFile(CWinApp *this, unsigned int a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  v3 = *((_DWORD **)this + 34);
  if ( v3 == nullptr || a2 < 0xE110 || a2 >= v3[1] + 57616 )
    AfxThrowInvalidArgException();
  v4 = (_DWORD *)unknown_libname_27(v3, a2 - 57616);
  if ( (*(int (__thiscall **)(CWinApp *, _DWORD))(*(_DWORD *)this + 136))(this, *v4) == 0 )
    (***((void (__thiscall ****)(_DWORD, unsigned int))this + 34))(*((_DWORD *)this + 34), a2 - 57616);
  return 1;
}

// Address: 0x1000F447
static struct CFrameWnd *__stdcall CCmdTarget::GetRoutingFrame_()
{
  return *((struct CFrameWnd **)AfxGetThreadState() + 83);
}

// Address: 0x1000F453
int __cdecl AfxCtxMessageBoxW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  BOOL v6; // esi
  DWORD LastError; // edi
  int v8; // [esp+10h] [ebp-24h]
  int v9; // [esp+14h] [ebp-20h] BYREF
  int v10; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v9 = 0;
  ModuleState = AfxGetModuleState();
  v8 = AfxActivateActCtxWrapper(*((_DWORD *)ModuleState + 32), &v9);
  v10 = 0;
  if ( v8 == 0 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v10 = MessageBoxW(hWnd, lpText, lpCaption, uType);
  ms_exc.registration.TryLevel = -2;
  if ( v8 != 2 )
  {
    v6 = v10 == 0;
    if ( v10 != 0 )
      LastError = 0;
    else
      LastError = GetLastError();
    sub_1000F87C(0, v9);
    if ( v6 )
      SetLastError(LastError);
  }
  return v10;
}

// Address: 0x1000F4EA
static void __cdecl CWinApp::DoEnableModeless(int a1)
{
  struct CWnd *MainWnd; // esi

  MainWnd = AfxGetMainWnd();
  if ( MainWnd != nullptr
    && (*(int (__thiscall **)(struct CWnd *))(*(_DWORD *)MainWnd + 296))(MainWnd) != 0
    && *((_DWORD *)MainWnd + 32) != 0 )
  {
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)MainWnd + 32) + 100))(*((_DWORD *)MainWnd + 32), a1);
  }
}

// Address: 0x1000F523
static HWND __stdcall CWnd::GetSafeOwner_(HWND hWnd, HWND *a2)
{
  HWND i; // esi
  struct CWnd *RoutingFrame; // eax
  HWND v4; // edi
  HWND j; // eax

  i = hWnd;
  if ( hWnd != nullptr )
    goto LABEL_6;
  RoutingFrame = CCmdTarget::GetRoutingFrame_();
  if ( RoutingFrame != nullptr || (RoutingFrame = AfxGetMainWnd()) != nullptr )
  {
    for ( i = *((HWND *)RoutingFrame + 8); i != nullptr; i = GetParent(i) )
    {
LABEL_6:
      if ( (GetWindowLongW(i, -16) & 0x40000000) == 0 )
        break;
    }
  }
  else
  {
    i = nullptr;
  }
  v4 = i;
  for ( j = i; j != nullptr; j = GetParent(j) )
    v4 = j;
  if ( hWnd == nullptr && i != nullptr )
    i = GetLastActivePopup(i);
  if ( a2 != nullptr )
  {
    if ( v4 != nullptr && IsWindowEnabled(v4) && v4 != i )
    {
      *a2 = v4;
      EnableWindow(v4, false);
    }
    else
    {
      *a2 = nullptr;
    }
  }
  return i;
}

// Address: 0x1000F5C3
static int __cdecl CWinApp::ShowAppMessageBox(struct CWinApp *a1, const wchar_t *a2, UINT uType, unsigned int a4)
{
  int *v4; // esi
  HWND SafeOwner; // eax
  HWND v6; // ebx
  LRESULT v7; // eax
  UINT v8; // eax
  WCHAR *v9; // ebx
  int v10; // edi
  HWND v12; // [esp+10h] [ebp-21Ch]
  DWORD dwProcessId; // [esp+14h] [ebp-218h] BYREF
  int v14; // [esp+18h] [ebp-214h]
  HWND hWnd; // [esp+1Ch] [ebp-210h] BYREF
  WCHAR Filename[260]; // [esp+20h] [ebp-20Ch] BYREF

  v4 = nullptr;
  CWinApp::DoEnableModeless(0);
  SafeOwner = CWnd::GetSafeOwner_(nullptr, &hWnd);
  v6 = SafeOwner;
  v12 = SafeOwner;
  if ( SafeOwner != hWnd )
    EnableWindow(SafeOwner, true);
  dwProcessId = 0;
  GetWindowThreadProcessId(v6, &dwProcessId);
  if ( v6 != nullptr && dwProcessId == GetCurrentProcessId() && (v7 = SendMessageW(v6, 0x376u, 0, 0)) != 0 )
  {
    v4 = (int *)v7;
  }
  else if ( a1 != nullptr )
  {
    v4 = (int *)((char *)a1 + 120);
  }
  v14 = 0;
  if ( v4 != nullptr )
  {
    v14 = *v4;
    if ( a4 != 0 )
      *v4 = a4 + 196608;
  }
  if ( (uType & 0xF0) == 0 )
  {
    v8 = uType & 0xF;
    if ( v8 <= 1 )
    {
      uType |= 0x30u;
    }
    else if ( v8 - 3 <= 1 )
    {
      uType |= 0x20u;
    }
  }
  Filename[0] = 0;
  if ( a1 != nullptr )
  {
    v9 = *((WCHAR **)a1 + 20);
  }
  else
  {
    v9 = Filename;
    if ( GetModuleFileNameW(nullptr, Filename, 0x104u) == 260 )
      Filename[259] = 0;
  }
  v10 = AfxCtxMessageBoxW(v12, a2, v9, uType);
  if ( v4 != nullptr )
    *v4 = v14;
  if ( hWnd != nullptr )
    EnableWindow(hWnd, true);
  CWinApp::DoEnableModeless(1);
  return v10;
}

// Address: 0x1000F728
int __stdcall AfxMessageBox(wchar_t *a1, UINT uType, unsigned int a3)
{
  int v3; // eax

  v3 = *((_DWORD *)AfxGetModuleState() + 1);
  if ( v3 != 0 )
    return (*(int (__thiscall **)(int, wchar_t *, UINT, unsigned int))(*(_DWORD *)v3 + 152))(v3, a1, uType, a3);
  else
    return CWinApp::ShowAppMessageBox(nullptr, a1, uType, a3);
}

// Address: 0x1000F75B
int __thiscall CWinApp::DoMessageBox(CWinApp *this, wchar_t *a2, UINT uType, unsigned int a4)
{
  return CWinApp::ShowAppMessageBox(this, a2, uType, a4);
}

// Address: 0x1000F776
int __stdcall AfxMessageBox(unsigned int a1, UINT uType, unsigned int a3)
{
  unsigned int v3; // eax
  wchar_t *v4; // esi
  int v5; // edi
  wchar_t *v7[4]; // [esp+10h] [ebp-10h] BYREF

  sub_10007BF0(v7);
  v7[3] = nullptr;
  sub_1000C9BF((int *)v7, a1);
  v3 = a3;
  if ( a3 == -1 )
    v3 = a1;
  v4 = v7[0];
  v5 = AfxMessageBox(v7[0], uType, v3);
  sub_10007C90((volatile signed __int32 *)v4 - 4);
  return v5;
}

// Address: 0x1000F7C5
// attributes: thunk
void __thiscall CThreadLocalObject::~CThreadLocalObject(CThreadLocalObject *this)
{
  ??1CThreadLocalObject@@QAE@XZ(this);
}

// Address: 0x1000F7CA
void __stdcall _AfxInitContextAPI()
{
  HMODULE ModuleHandleW; // eax

  if ( hModule == nullptr )
  {
    ModuleHandleW = GetModuleHandleW(L"KERNEL32");
    hModule = ModuleHandleW;
    if ( ModuleHandleW == nullptr )
      AfxThrowInvalidArgException();
    CreateActCtxW_0 = (HANDLE (__stdcall *)(PCACTCTXW))GetProcAddress(ModuleHandleW, "CreateActCtxW");
    ReleaseActCtx_0 = (void (__stdcall *)(HANDLE))GetProcAddress(hModule, "ReleaseActCtx");
    ActivateActCtx_0 = (BOOL (__stdcall *)(HANDLE, ULONG_PTR *))GetProcAddress(hModule, "ActivateActCtx");
    DeactivateActCtx = (BOOL (__stdcall *)(DWORD, ULONG_PTR))GetProcAddress(hModule, "DeactivateActCtx");
  }
}

// Address: 0x1000F838
int __stdcall AfxCreateActCtxW(const struct tagACTCTXW *a1)
{
  if ( CreateActCtxW_0 != nullptr )
    return (int)CreateActCtxW_0(a1);
  else
    return -1;
}

// Address: 0x1000F850
void __stdcall AfxReleaseActCtx(void *a1)
{
  if ( ReleaseActCtx_0 != nullptr )
    ReleaseActCtx_0(a1);
}

// Address: 0x1000F865
BOOL __stdcall sub_1000F865(void *a1, ULONG_PTR *a2)
{
  return ActivateActCtx_0 != nullptr && ActivateActCtx_0(a1, a2);
}

// Address: 0x1000F87C
BOOL __stdcall sub_1000F87C(DWORD a1, ULONG_PTR a2)
{
  return DeactivateActCtx != nullptr && DeactivateActCtx(a1, a2);
}

// Address: 0x1000F893
int __stdcall AfxActivateActCtxWrapper(void *a1, ULONG_PTR *a2)
{
  if ( a2 == nullptr )
    AfxThrowInvalidArgException();
  if ( ActivateActCtx_0 != nullptr )
    return sub_1000F865(a1, a2);
  else
    return 2;
}

// Address: 0x1000F8C6
void __thiscall AFX_MODULE_STATE::CreateActivationContext(AFX_MODULE_STATE *this)
{
  HMODULE v2; // edi
  int v3; // eax
  int v4; // eax
  struct tagACTCTXW v5; // [esp+8h] [ebp-230h] BYREF
  WCHAR Filename[260]; // [esp+28h] [ebp-210h] BYREF
  __int16 v7; // [esp+230h] [ebp-8h]
  __int16 v8; // [esp+232h] [ebp-6h]

  _AfxInitContextAPI();
  v2 = *((HMODULE *)this + 2);
  v8 = 0;
  v7 = 0;
  if ( GetModuleFileNameW(v2, Filename, 0x105u) != 0 )
  {
    if ( v7 != 0 )
    {
      SetLastError(0x6Fu);
    }
    else
    {
      v5.lpSource = Filename;
      v5.cbSize = 32;
      v5.dwFlags = 136;
      v5.lpResourceName = (LPCWSTR)2;
      v5.hModule = v2;
      v3 = AfxCreateActCtxW(&v5);
      *((_DWORD *)this + 32) = v3;
      if ( v3 == -1 )
      {
        v5.lpResourceName = (LPCWSTR)3;
        *((_DWORD *)this + 32) = AfxCreateActCtxW(&v5);
      }
      if ( *((_DWORD *)this + 32) == -1 )
      {
        v5.lpResourceName = (LPCWSTR)1;
        v4 = AfxCreateActCtxW(&v5);
        *((_DWORD *)this + 32) = v4;
        if ( v4 == -1 )
          *((_DWORD *)this + 32) = 0;
      }
    }
  }
}

// Address: 0x1000F9C2
void __thiscall CTypeLibCache::Unlock(CTypeLibCache *this)
{
  int v2; // eax
  int v3; // eax

  if ( InterlockedDecrement((volatile LONG *)this + 8) == 0 )
  {
    v2 = *((_DWORD *)this + 7);
    if ( v2 != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(*((_DWORD *)this + 7));
      *((_DWORD *)this + 7) = 0;
    }
    v3 = *((_DWORD *)this + 2);
    if ( v3 != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)this + 2));
      *((_DWORD *)this + 2) = 0;
    }
  }
}

// Address: 0x1000F9F9
int sub_1000F9F9()
{
  return dword_1003EC98;
}

// Address: 0x1000F9FF
_AFX_THREAD_STATE *__thiscall _AFX_THREAD_STATE::_AFX_THREAD_STATE(_AFX_THREAD_STATE *this)
{
  *(_DWORD *)this = &_AFX_THREAD_STATE::`vftable';
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  return this;
}

// Address: 0x1000FA18
void __thiscall _AFX_THREAD_STATE::~_AFX_THREAD_STATE(_AFX_THREAD_STATE *this)
{
  HHOOK v2; // eax
  void *v3; // esi

  v2 = *((HHOOK *)this + 11);
  *(_DWORD *)this = &_AFX_THREAD_STATE::`vftable';
  if ( v2 != nullptr )
    UnhookWindowsHookEx(v2);
  if ( *((_DWORD *)this + 10) != 0 )
    UnhookWindowsHookEx(*((HHOOK *)this + 10));
  v3 = *((void **)this + 3);
  if ( v3 != nullptr )
    free(v3);
}

// Address: 0x1000FA4F
void __thiscall AFX_MODULE_THREAD_STATE::~AFX_MODULE_THREAD_STATE(AFX_MODULE_THREAD_STATE *this)
{
  int v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int v8; // eax
  struct CObject *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  v2 = *((_DWORD *)this + 15);
  *(_DWORD *)this = &AFX_MODULE_THREAD_STATE::`vftable';
  if ( v2 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 324))(v2);
  operator delete(*((void **)this + 18));
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 5);
  if ( v3 != nullptr )
    (**v3)(v3, 1);
  v4 = *((void (__thiscall ****)(_DWORD, int))this + 6);
  if ( v4 != nullptr )
    (**v4)(v4, 1);
  v5 = *((void (__thiscall ****)(_DWORD, int))this + 7);
  if ( v5 != nullptr )
    (**v5)(v5, 1);
  v6 = *((void (__thiscall ****)(_DWORD, int))this + 8);
  if ( v6 != nullptr )
    (**v6)(v6, 1);
  v7 = *((void (__thiscall ****)(_DWORD, int))this + 9);
  if ( v7 != nullptr )
    (**v7)(v7, 1);
  v8 = *((_DWORD *)this + 14);
  if ( v8 != 0 )
  {
    while ( *(_DWORD *)(v8 + 12) != 0 )
    {
      v9 = CObList::RemoveHead(*((CObList **)this + 14));
      operator delete(v9);
      v8 = *((_DWORD *)this + 14);
    }
  }
  v10 = *((_DWORD *)this + 12);
  if ( v10 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 4))(v10, 1);
  v11 = *((_DWORD *)this + 13);
  if ( v11 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 4))(v11, 1);
  v12 = *((_DWORD *)this + 14);
  if ( v12 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 4))(v12, 1);
}

// Address: 0x1000FAFD
_AFX_THREAD_STATE *__thiscall _AFX_THREAD_STATE::`scalar deleting destructor'(_AFX_THREAD_STATE *this, char a2)
{
  _AFX_THREAD_STATE::~_AFX_THREAD_STATE(this);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(this);
  return this;
}

// Address: 0x1000FB1D
AFX_MODULE_THREAD_STATE *__thiscall AFX_MODULE_THREAD_STATE::AFX_MODULE_THREAD_STATE(AFX_MODULE_THREAD_STATE *this)
{
  *(_DWORD *)this = &AFX_MODULE_THREAD_STATE::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 17) = -1;
  *((_DWORD *)this + 19) = -1;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 3) = 108;
  *((_DWORD *)this + 10) = AfxThrowMemoryException;
  return this;
}

// Address: 0x1000FB47
AFX_MODULE_THREAD_STATE *__thiscall AFX_MODULE_THREAD_STATE::`scalar deleting destructor'(
        AFX_MODULE_THREAD_STATE *this,
        char a2)
{
  AFX_MODULE_THREAD_STATE::~AFX_MODULE_THREAD_STATE(this);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(this);
  return this;
}

// Address: 0x1000FB67
struct _AFX_THREAD_STATE *__stdcall AfxGetThreadState()
{
  struct _AFX_THREAD_STATE *result; // eax

  result = CThreadLocalObject::GetData(
             (CThreadLocalObject *)&unk_1003ECA4,
             CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( result == nullptr )
    AfxThrowInvalidArgException();
  return result;
}

// Address: 0x1000FB80
void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // ecx
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int v7; // eax

  *(_DWORD *)this = &AFX_MODULE_STATE::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 18);
  if ( v2 != nullptr )
    (**v2)(v2, 1);
  v3 = *((_DWORD *)this + 28);
  if ( v3 != 0 )
  {
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v3 + 12))(v3, (char *)this + 76);
    v4 = *((_DWORD *)this + 28);
    if ( v4 != 0 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, 1);
  }
  v5 = **((void (__thiscall *****)(_DWORD, int))this + 30);
  if ( v5 != nullptr )
    (**v5)(v5, 1);
  v6 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 30) + 4);
  if ( v6 != nullptr )
    (**v6)(v6, 1);
  operator delete(*((void **)this + 30));
  v7 = *((_DWORD *)this + 32);
  if ( v7 != 0 && v7 != -1 )
  {
    AfxReleaseActCtx(*((void **)this + 32));
    *((_DWORD *)this + 32) = -1;
  }
  CThreadLocalObject::~CThreadLocalObject((AFX_MODULE_STATE *)((char *)this + 116));
  sub_10007C90((volatile signed __int32 *)(*((_DWORD *)this + 13) - 16));
}

// Address: 0x1000FC23
_DWORD *__thiscall sub_1000FC23(_DWORD *this, _DWORD *a2)
{
  *this = &CDllIsolationWrapperBase::`vftable';
  sub_1000EE9A(this + 3, a2);
  *(this + 1) = 0;
  *((_BYTE *)this + 8) = 0;
  return this;
}

// Address: 0x1000FC4B
void __thiscall CDllIsolationWrapperBase::~CDllIsolationWrapperBase(CDllIsolationWrapperBase *this)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 8) == 0;
  *(_DWORD *)this = &CDllIsolationWrapperBase::`vftable';
  if ( !v2 )
    FreeLibrary(*((HMODULE *)this + 1));
  sub_10007C90((volatile signed __int32 *)(*((_DWORD *)this + 3) - 16));
}

// Address: 0x1000FC71
// MFC 3.1-14.0 32bit
AFX_MODULE_STATE *__thiscall unknown_libname_28(AFX_MODULE_STATE *this, char a2)
{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(this);
  return this;
}

// Address: 0x1000FC91
CComCtlWrapper *__thiscall CComCtlWrapper::CComCtlWrapper(CComCtlWrapper *this)
{
  volatile signed __int32 *v3[4]; // [esp+10h] [ebp-10h] BYREF

  sub_1000CAD3(v3, L"comctl32.dll");
  v3[3] = nullptr;
  sub_1000FC23(this, v3);
  sub_10007C90(v3[0] - 4);
  *(_DWORD *)this = &CComCtlWrapper::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 97) = 0;
  return this;
}

// Address: 0x1000FEB5
CCommDlgWrapper *__thiscall CCommDlgWrapper::CCommDlgWrapper(CCommDlgWrapper *this)
{
  volatile signed __int32 *v3[4]; // [esp+10h] [ebp-10h] BYREF

  sub_1000CAD3(v3, L"comdlg32.dll");
  v3[3] = nullptr;
  sub_1000FC23(this, v3);
  sub_10007C90(v3[0] - 4);
  *(_DWORD *)this = &CCommDlgWrapper::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  return this;
}

// Address: 0x1000FF38
CDllIsolationWrapperBase *__thiscall sub_1000FF38(CDllIsolationWrapperBase *this, char a2)
{
  CDllIsolationWrapperBase::~CDllIsolationWrapperBase(this);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(this);
  return this;
}

// Address: 0x1000FF58
CShellWrapper *__thiscall CShellWrapper::CShellWrapper(CShellWrapper *this)
{
  volatile signed __int32 *v3[4]; // [esp+10h] [ebp-10h] BYREF

  sub_1000CAD3(v3, L"shell32.dll");
  v3[3] = nullptr;
  sub_1000FC23(this, v3);
  sub_10007C90(v3[0] - 4);
  *(_DWORD *)this = &CShellWrapper::`vftable';
  *((_DWORD *)this + 4) = 0;
  return this;
}

// Address: 0x1000FF9F
AFX_MODULE_STATE *__thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(AFX_MODULE_STATE *this, char a2)
{
  int *v3; // ebx
  CComCtlWrapper *v4; // ecx
  CComCtlWrapper *v5; // eax
  CCommDlgWrapper *v6; // ecx
  CCommDlgWrapper *v7; // eax
  CShellWrapper *v8; // ecx
  CShellWrapper *v9; // eax

  *(_DWORD *)this = &AFX_MODULE_STATE::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  v3 = (int *)((char *)this + 52);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  sub_10007BF0((_DWORD *)this + 13);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 20) = -1;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 10) = 32;
  *((_DWORD *)this + 8) = 20;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 20) = a2;
  sub_10007DD0(v3, 4096);
  *((_DWORD *)this + 12) = 1;
  *((_DWORD *)this + 17) = 24;
  *((_DWORD *)this + 30) = operator new(0xCu);
  v4 = (CComCtlWrapper *)CNoTrackObject::operator new(0x188u);
  if ( v4 != nullptr )
    v5 = CComCtlWrapper::CComCtlWrapper(v4);
  else
    v5 = nullptr;
  **((_DWORD **)this + 30) = v5;
  v6 = (CCommDlgWrapper *)CNoTrackObject::operator new(0x64u);
  if ( v6 != nullptr )
    v7 = CCommDlgWrapper::CCommDlgWrapper(v6);
  else
    v7 = nullptr;
  *(_DWORD *)(*((_DWORD *)this + 30) + 4) = v7;
  v8 = (CShellWrapper *)CNoTrackObject::operator new(0x14u);
  if ( v8 != nullptr )
    v9 = CShellWrapper::CShellWrapper(v8);
  else
    v9 = nullptr;
  *(_DWORD *)(*((_DWORD *)this + 30) + 8) = v9;
  *((_DWORD *)this + 31) = 1;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  return this;
}

// Address: 0x100100DA
_AFX_BASE_MODULE_STATE *__thiscall _AFX_BASE_MODULE_STATE::_AFX_BASE_MODULE_STATE(_AFX_BASE_MODULE_STATE *this)
{
  AFX_MODULE_STATE::AFX_MODULE_STATE(this, 1);
  *(_DWORD *)this = &_AFX_BASE_MODULE_STATE::`vftable';
  return this;
}

// Address: 0x100100F0
_AFX_BASE_MODULE_STATE *CProcessLocal<_AFX_BASE_MODULE_STATE>::CreateObject()
{
  _AFX_BASE_MODULE_STATE *v0; // ecx
  _AFX_BASE_MODULE_STATE *result; // eax

  v0 = (_AFX_BASE_MODULE_STATE *)CNoTrackObject::operator new(0x8Cu);
  result = nullptr;
  if ( v0 != nullptr )
    return _AFX_BASE_MODULE_STATE::_AFX_BASE_MODULE_STATE(v0);
  return result;
}

// Address: 0x1001011F
struct AFX_MODULE_STATE *__stdcall AfxGetModuleState()
{
  struct CNoTrackObject *Data; // eax
  struct AFX_MODULE_STATE *result; // eax

  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( Data == nullptr
    || (result = *((struct AFX_MODULE_STATE **)Data + 1)) == nullptr
    && (result = (struct AFX_MODULE_STATE *)unknown_libname_29(CProcessLocal<_AFX_BASE_MODULE_STATE>::CreateObject)) == nullptr )
  {
    AfxThrowInvalidArgException();
  }
  return result;
}

// Address: 0x10010152
struct AFX_MODULE_THREAD_STATE *__stdcall AfxGetModuleThreadState()
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  struct AFX_MODULE_THREAD_STATE *result; // eax

  ModuleState = AfxGetModuleState();
  result = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData((struct AFX_MODULE_STATE *)((char *)ModuleState + 116));
  if ( result == nullptr )
    AfxThrowInvalidArgException();
  return result;
}

// Address: 0x1001016B
AFX_MAINTAIN_STATE2 *__thiscall AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(
        AFX_MAINTAIN_STATE2 *this,
        struct AFX_MODULE_STATE *a2)
{
  void *v3; // eax

  *((_DWORD *)this + 1) = *((_DWORD *)AfxGetModuleState() + 31) != 0
                       && (v3 = *((void **)a2 + 32)) != (void *)-1
                       && sub_1000F865(v3, (ULONG_PTR *)this);
  return this;
}

// Address: 0x100101A3
char **sub_100101A3()
{
  return &off_1002C3D8;
}

// Address: 0x100101A9
struct CObject *__thiscall CRuntimeClass::CreateObject(int (**this)(void))
{
  if ( this == nullptr )
    AfxThrowInvalidArgException();
  if ( *(this + 3) != nullptr )
    return (struct CObject *)(*(this + 3))();
  else
    return nullptr;
}

// Address: 0x100101F3
int __thiscall CRuntimeClass::IsDerivedFrom(CRuntimeClass *this, const struct CRuntimeClass *a2)
{
  int result; // eax

  result = (int)this;
  if ( this == nullptr || a2 == nullptr )
    AfxThrowInvalidArgException();
  while ( (const struct CRuntimeClass *)result != a2 )
  {
    result = *(_DWORD *)(result + 16);
    if ( result == 0 )
      return result;
  }
  return 1;
}

// Address: 0x1001021E
int __thiscall CObject::IsKindOf(CObject *this, const struct CRuntimeClass *a2)
{
  CRuntimeClass *v2; // eax

  if ( this == nullptr || (v2 = (CRuntimeClass *)(**(int (__thiscall ***)(CObject *))this)(this)) == nullptr )
    AfxThrowInvalidArgException();
  return CRuntimeClass::IsDerivedFrom(v2, a2);
}

// Address: 0x1001023C
void __stdcall AfxClassInit(struct CRuntimeClass *a1)
{
  struct AFX_MODULE_STATE *ModuleState; // esi

  ModuleState = AfxGetModuleState();
  AfxLockGlobals(0);
  CSimpleList::AddHead((struct AFX_MODULE_STATE *)((char *)ModuleState + 28), a1);
  AfxUnlockGlobals(0);
}

// Address: 0x10010267
static HLOCAL __stdcall CNoTrackObject::operator new(SIZE_T uBytes)
{
  HLOCAL result; // eax

  result = LocalAlloc(0x40u, uBytes);
  if ( result == nullptr )
    AfxThrowMemoryException();
  return result;
}

// Address: 0x10010284
static void __stdcall CNoTrackObject::operator delete(void *a1)
{
  if ( a1 != nullptr )
    LocalFree(a1);
}

// Address: 0x1001029A
int __thiscall CThreadSlotData::GetThreadValue(CThreadSlotData *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // ebx
  _DWORD *Value; // eax
  int v5; // edi

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 28);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
  if ( a2 > 0 && a2 < *((_DWORD *)this + 3) && (Value = TlsGetValue(*(_DWORD *)this)) != nullptr && a2 < Value[2] )
  {
    v5 = *(_DWORD *)(Value[3] + 4 * a2);
    LeaveCriticalSection(v3);
    return v5;
  }
  else
  {
    LeaveCriticalSection(v3);
    return 0;
  }
}

// Address: 0x100102EC
void __thiscall CThreadSlotData::AssignInstance(CThreadSlotData *this, HINSTANCE a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // edi
  int i; // ecx
  int v5; // eax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 28);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
  for ( i = 1; i < *((_DWORD *)this + 3); ++i )
  {
    v5 = *((_DWORD *)this + 4) + 8 * i;
    if ( *(_DWORD *)(v5 + 4) == 0 && (*(_BYTE *)v5 & 1) != 0 )
      *(_DWORD *)(v5 + 4) = a2;
  }
  LeaveCriticalSection(v3);
}

// Address: 0x10010331
struct CNoTrackObject *__thiscall CThreadLocalObject::GetDataNA(CThreadLocalObject *this)
{
  if ( *(_DWORD *)this != 0 && dword_1003ECAC != nullptr )
    return (struct CNoTrackObject *)CThreadSlotData::GetThreadValue(dword_1003ECAC, *(_DWORD *)this);
  else
    return nullptr;
}

// Address: 0x1001034B
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_29(void *this, int (*a2)(void))
{
  if ( *(_DWORD *)this == 0 )
  {
    AfxLockGlobals(16);
    if ( *(_DWORD *)this == 0 )
      *(_DWORD *)this = a2();
    AfxUnlockGlobals(16);
  }
  return *(_DWORD *)this;
}

// Address: 0x1001039B
void __thiscall CProcessLocalObject::~CProcessLocalObject(CProcessLocalObject *this)
{
  if ( *(_DWORD *)this != 0 )
    (***(void (__thiscall ****)(_DWORD, int))this)(*(_DWORD *)this, 1);
}

// Address: 0x100103C4
void __stdcall AfxInitLocalData(HINSTANCE a1)
{
  if ( dword_1003ECAC != nullptr )
    CThreadSlotData::AssignInstance(dword_1003ECAC, a1);
}

// Address: 0x100103DD
void sub_100103DD()
{
  ++dword_1003ECE4;
}

// Address: 0x100103E4
void **__thiscall CSimpleList::GetNextPtr(CSimpleList *this, char *a2)
{
  if ( a2 == nullptr )
    AfxThrowInvalidArgException();
  return (void **)&a2[*((_DWORD *)this + 1)];
}

// Address: 0x100103FE
void __thiscall CSimpleList::AddHead(void **this, char *a2)
{
  *CSimpleList::GetNextPtr((CSimpleList *)this, a2) = *this;
  *this = a2;
}

// Address: 0x1001041C
int __thiscall CSimpleList::Remove(char **this, char *a2)
{
  char *v3; // edi
  void **NextPtr; // ebx
  int v6; // [esp+8h] [ebp-4h]

  v3 = *this;
  if ( *this == nullptr )
    return 0;
  v6 = 0;
  if ( v3 == a2 )
  {
    *this = (char *)*CSimpleList::GetNextPtr((CSimpleList *)this, a2);
  }
  else
  {
    do
    {
      if ( *CSimpleList::GetNextPtr((CSimpleList *)this, v3) == a2 )
        break;
      v3 = (char *)*CSimpleList::GetNextPtr((CSimpleList *)this, v3);
    }
    while ( v3 != nullptr );
    if ( v3 == nullptr )
      return v6;
    NextPtr = CSimpleList::GetNextPtr((CSimpleList *)this, a2);
    *CSimpleList::GetNextPtr((CSimpleList *)this, v3) = *NextPtr;
  }
  return 1;
}

// Address: 0x1001048D
int __thiscall CThreadSlotData::AllocSlot(CThreadSlotData *this)
{
  int v2; // ebx
  int v3; // edi
  _BYTE *v4; // eax
  unsigned int v5; // ebx
  SIZE_T v6; // eax
  HGLOBAL v7; // eax
  SIZE_T v8; // eax
  const void *v9; // esi
  HGLOBAL v10; // eax
  HGLOBAL hMem; // [esp+Ch] [ebp-8h]
  char *hMema; // [esp+Ch] [ebp-8h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [esp+10h] [ebp-4h]

  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 28);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
  v2 = *((_DWORD *)this + 1);
  v3 = *((_DWORD *)this + 2);
  if ( v3 >= v2 || (*(_BYTE *)(*((_DWORD *)this + 4) + 8 * v3) & 1) != 0 )
  {
    v3 = 1;
    if ( v2 <= 1 )
      goto LABEL_8;
    v4 = (_BYTE *)(*((_DWORD *)this + 4) + 8);
    do
    {
      if ( (*v4 & 1) == 0 )
        break;
      ++v3;
      v4 += 8;
    }
    while ( v3 < v2 );
    if ( v3 >= v2 )
    {
LABEL_8:
      v5 = v2 + 32;
      if ( *((_DWORD *)this + 4) != 0 )
      {
        hMem = GlobalHandle(*((LPCVOID *)this + 4));
        GlobalUnlock(hMem);
        v8 = sub_1000CDEA(v5, 8u);
        v7 = GlobalReAlloc(hMem, v8, 0x2002u);
      }
      else
      {
        v6 = sub_1000CDEA(v5, 8u);
        v7 = GlobalAlloc(2u, v6);
      }
      if ( v7 == nullptr )
      {
        v9 = *((const void **)this + 4);
        if ( v9 != nullptr )
        {
          v10 = GlobalHandle(v9);
          GlobalLock(v10);
        }
        LeaveCriticalSection(lpCriticalSection);
        AfxThrowMemoryException();
      }
      hMema = (char *)GlobalLock(v7);
      memset(&hMema[8 * *((_DWORD *)this + 1)], 0, 8 * (v5 - *((_DWORD *)this + 1)));
      *((_DWORD *)this + 1) = v5;
      *((_DWORD *)this + 4) = hMema;
    }
  }
  if ( v3 >= *((_DWORD *)this + 3) )
    *((_DWORD *)this + 3) = v3 + 1;
  *(_DWORD *)(*((_DWORD *)this + 4) + 8 * v3) |= 1u;
  *((_DWORD *)this + 2) = v3 + 1;
  LeaveCriticalSection(lpCriticalSection);
  return v3;
}

// Address: 0x100105A5
CThreadSlotData *__thiscall CThreadSlotData::CThreadSlotData(CThreadSlotData *this)
{
  DWORD v2; // eax

  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 4;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v2 = TlsAlloc();
  *(_DWORD *)this = v2;
  if ( v2 == -1 )
    AfxThrowMemoryException();
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
  return this;
}

// Address: 0x100105E4
void __thiscall CThreadSlotData::FreeSlot(CThreadSlotData *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // esi
  _DWORD *i; // esi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  struct _RTL_CRITICAL_SECTION *v6; // [esp+Ch] [ebp-4h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 28);
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 28);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
  if ( a2 <= 0 || a2 >= *((_DWORD *)this + 3) )
  {
    LeaveCriticalSection(v3);
  }
  else
  {
    for ( i = *((_DWORD **)this + 5); i != nullptr; i = (_DWORD *)i[1] )
    {
      if ( a2 < i[2] )
      {
        v5 = *(void (__thiscall ****)(_DWORD, int))(i[3] + 4 * a2);
        if ( v5 != nullptr )
          (**v5)(v5, 1);
        *(_DWORD *)(i[3] + 4 * a2) = 0;
      }
    }
    *(_DWORD *)(*((_DWORD *)this + 4) + 8 * a2) &= ~1u;
    LeaveCriticalSection(v6);
  }
}

// Address: 0x1001064C
// MFC 3.1-14.0 32bit
void __thiscall unknown_libname_31(int this, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // esi
  char *Value; // eax
  char *v6; // esi
  int v7; // ecx
  SIZE_T v8; // eax
  char *v9; // eax
  char *v10; // eax
  SIZE_T v11; // eax
  int v12; // ecx
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [esp+18h] [ebp-14h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 28);
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)(this + 28);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 28));
  if ( a2 <= 0 || a2 >= *(_DWORD *)(this + 12) )
  {
    LeaveCriticalSection(v4);
    return;
  }
  Value = (char *)TlsGetValue(*(_DWORD *)this);
  v6 = Value;
  if ( Value == nullptr )
  {
    v10 = (char *)CNoTrackObject::operator new(0x10u);
    if ( v10 != nullptr )
    {
      *(_DWORD *)v10 = &CThreadData::`vftable';
      v6 = v10;
    }
    else
    {
      v6 = nullptr;
    }
    *((_DWORD *)v6 + 2) = 0;
    *((_DWORD *)v6 + 3) = 0;
    CSimpleList::AddHead((void **)(this + 20), v6);
    goto LABEL_6;
  }
  v7 = a2;
  if ( a2 >= *((_DWORD *)Value + 2) && a3 != 0 )
  {
LABEL_6:
    if ( *((_DWORD *)v6 + 3) != 0 )
    {
      v11 = sub_1000CDEA(*(_DWORD *)(this + 12), 4u);
      v9 = (char *)LocalReAlloc(*((HLOCAL *)v6 + 3), v11, 2u);
    }
    else
    {
      v8 = sub_1000CDEA(*(_DWORD *)(this + 12), 4u);
      v9 = (char *)LocalAlloc(0, v8);
    }
    if ( v9 == nullptr )
    {
      LeaveCriticalSection(lpCriticalSection);
      AfxThrowMemoryException();
    }
    v12 = *((_DWORD *)v6 + 2);
    *((_DWORD *)v6 + 3) = v9;
    memset(&v9[4 * v12], 0, 4 * (*(_DWORD *)(this + 12) - v12));
    *((_DWORD *)v6 + 2) = *(_DWORD *)(this + 12);
    TlsSetValue(*(_DWORD *)this, v6);
    v7 = a2;
  }
  v13 = *((_DWORD *)v6 + 3);
  if ( v13 != 0 && v7 < *((_DWORD *)v6 + 2) )
    *(_DWORD *)(v13 + 4 * v7) = a3;
  LeaveCriticalSection(lpCriticalSection);
}

// Address: 0x10010781
// MFC 3.1-14.0 32bit
void *__thiscall unknown_libname_33(void *this, char a2)
{
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(this);
  return this;
}

// Address: 0x1001079C
void __thiscall CThreadSlotData::DeleteValues(CThreadSlotData *this, struct CThreadData *a2, HINSTANCE a3)
{
  int v3; // ebx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // [esp+Ch] [ebp-4h]

  v3 = 1;
  v6 = 1;
  if ( *((int *)a2 + 2) <= 1 )
    goto LABEL_11;
  do
  {
    if ( a3 == nullptr || *(HINSTANCE *)(*((_DWORD *)this + 4) + 8 * v3 + 4) == a3 )
    {
      v5 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)a2 + 3) + 4 * v3);
      if ( v5 != nullptr )
        (**v5)(v5, 1);
      *(_DWORD *)(*((_DWORD *)a2 + 3) + 4 * v3) = 0;
    }
    else if ( *(_DWORD *)(*((_DWORD *)a2 + 3) + 4 * v3) != 0 )
    {
      v6 = 0;
    }
    ++v3;
  }
  while ( v3 < *((_DWORD *)a2 + 2) );
  if ( v6 != 0 )
  {
LABEL_11:
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
    CSimpleList::Remove((char **)this + 5, (char *)a2);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
    LocalFree(*((HLOCAL *)a2 + 3));
    (**(void (__thiscall ***)(struct CThreadData *, int))a2)(a2, 1);
    TlsSetValue(*(_DWORD *)this, nullptr);
  }
}

// Address: 0x10010833
void __thiscall CThreadSlotData::DeleteValues(CThreadSlotData *this, HINSTANCE a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // ebx
  struct CThreadData *Value; // eax
  int v6; // eax
  int v7; // edi

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 28);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
  if ( a3 != 0 )
  {
    v6 = *((_DWORD *)this + 5);
    if ( v6 != 0 )
    {
      do
      {
        v7 = *(_DWORD *)(v6 + 4);
        CThreadSlotData::DeleteValues(this, (struct CThreadData *)v6, a2);
        v6 = v7;
      }
      while ( v7 != 0 );
    }
  }
  else
  {
    Value = (struct CThreadData *)TlsGetValue(*(_DWORD *)this);
    if ( Value != nullptr )
      CThreadSlotData::DeleteValues(this, Value, a2);
  }
  LeaveCriticalSection(v4);
}

// Address: 0x1001088F
struct CNoTrackObject *__thiscall CThreadLocalObject::GetData(
        CThreadLocalObject *this,
        struct CNoTrackObject *(__stdcall *a2)())
{
  CThreadSlotData *v3; // ecx
  int v4; // eax
  struct CNoTrackObject *ThreadValue; // edi

  if ( a2 == nullptr
    || *(_DWORD *)this == 0
    && ((v3 = dword_1003ECAC, dword_1003ECAC == nullptr)
     && (v3 = CThreadSlotData::CThreadSlotData((CThreadSlotData *)&unk_1003ECB0), dword_1003ECAC = v3, v3 == nullptr)
     || (v4 = CThreadSlotData::AllocSlot(v3), *(_DWORD *)this = v4, v4 == 0)) )
  {
    AfxThrowInvalidArgException();
  }
  ThreadValue = (struct CNoTrackObject *)CThreadSlotData::GetThreadValue(dword_1003ECAC, *(_DWORD *)this);
  if ( ThreadValue == nullptr )
  {
    ThreadValue = a2();
    unknown_libname_31((int)dword_1003ECAC, *(_DWORD *)this, (int)ThreadValue);
  }
  return ThreadValue;
}

// Address: 0x10010919
void __thiscall CThreadLocalObject::~CThreadLocalObject(CThreadLocalObject *this)
{
  if ( *(_DWORD *)this != 0 && dword_1003ECAC != nullptr )
    CThreadSlotData::FreeSlot(dword_1003ECAC, *(_DWORD *)this);
  *(_DWORD *)this = 0;
}

// Address: 0x10010939
void __stdcall AfxTermLocalData(HINSTANCE a1, int a2)
{
  if ( dword_1003ECAC != nullptr )
    CThreadSlotData::DeleteValues(dword_1003ECAC, a1, a2);
}

// Address: 0x10010952
void __thiscall CThreadSlotData::~CThreadSlotData(CThreadSlotData *this)
{
  int v2; // eax
  int v3; // edi
  HGLOBAL v4; // edi

  v2 = *((_DWORD *)this + 5);
  if ( v2 != 0 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 4);
      CThreadSlotData::DeleteValues(this, (struct CThreadData *)v2, nullptr);
      v2 = v3;
    }
    while ( v3 != 0 );
  }
  if ( *(_DWORD *)this != -1 )
    TlsFree(*(_DWORD *)this);
  if ( *((_DWORD *)this + 4) != 0 )
  {
    v4 = GlobalHandle(*((LPCVOID *)this + 4));
    GlobalUnlock(v4);
    GlobalFree(v4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 28));
}

// Address: 0x100109AB
CThreadSlotData *__thiscall CThreadSlotData::`scalar deleting destructor'(CThreadSlotData *this, char a2)
{
  CThreadSlotData::~CThreadSlotData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100109CC
void __stdcall AfxTlsRelease()
{
  if ( dword_1003ECE4 == 0 || (--dword_1003ECE4, dword_1003ECE4 == 0) )
  {
    if ( dword_1003ECAC != nullptr )
    {
      CThreadSlotData::`scalar deleting destructor'(dword_1003ECAC, 0);
      dword_1003ECAC = nullptr;
    }
  }
}

// Address: 0x100109F6
int __stdcall AfxCriticalInit()
{
  if ( dword_1003ECE8 == 0 )
  {
    dword_1003ECE8 = 1;
    InitializeCriticalSection(&CriticalSection);
  }
  return dword_1003ECE8;
}

// Address: 0x10010A1A
void __stdcall AfxCriticalTerm()
{
  _DWORD *v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // ebx

  if ( dword_1003ECE8 != 0 )
  {
    --dword_1003ECE8;
    DeleteCriticalSection(&CriticalSection);
    v0 = &unk_1003EEA0;
    v1 = &stru_1003ECF0;
    do
    {
      if ( *v0 != 0 )
      {
        DeleteCriticalSection(v1);
        --*v0;
      }
      ++v1;
      ++v0;
    }
    while ( (int)v1 < (int)&CriticalSection );
  }
}

// Address: 0x10010A5F
void __stdcall AfxLockGlobals(unsigned int a1)
{
  _DWORD *v1; // esi

  if ( a1 >= 0x11 )
    AfxThrowInvalidArgException();
  if ( dword_1003ECE8 == 0 )
    AfxCriticalInit();
  v1 = (_DWORD *)((char *)&unk_1003EEA0 + 4 * a1);
  if ( *v1 == 0 )
  {
    EnterCriticalSection(&CriticalSection);
    if ( *v1 == 0 )
    {
      InitializeCriticalSection(&stru_1003ECF0 + a1);
      ++*v1;
    }
    LeaveCriticalSection(&CriticalSection);
  }
  EnterCriticalSection(&stru_1003ECF0 + a1);
}

// Address: 0x10010AD1
void __stdcall AfxUnlockGlobals(unsigned int a1)
{
  if ( a1 >= 0x11 )
    AfxThrowInvalidArgException();
  LeaveCriticalSection(&stru_1003ECF0 + a1);
}

// Address: 0x10010AF6
void __stdcall AfxLockTempMaps()
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  ++*((_DWORD *)ModuleThreadState + 4);
}

// Address: 0x10010AFF
CHandleMap *__thiscall CHandleMap::CHandleMap(
        CHandleMap *this,
        struct CRuntimeClass *a2,
        void (__stdcall *a3)(struct CObject *),
        void (__stdcall *a4)(struct CObject *),
        unsigned int a5,
        int a6)
{
  *(_DWORD *)this = &CHandleMap::`vftable';
  CFixedAllocNoSync::CFixedAllocNoSync((CHandleMap *)((char *)this + 4), *((_DWORD *)a2 + 1), 0x40u);
  sub_10017E28(10);
  sub_10017E28(4);
  if ( a3 == nullptr || a4 == nullptr )
    AfxThrowInvalidArgException();
  unknown_libname_69(7, 0);
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 22) = a5;
  *((_DWORD *)this + 23) = a6;
  *((_DWORD *)this + 21) = a2;
  return this;
}

// Address: 0x10010B88
struct CObject *__thiscall CHandleMap::FromHandle(CHandleMap *this, int (__cdecl *a2)(unsigned int))
{
  struct CObject *result; // eax
  int (__cdecl **v5)(unsigned int); // ecx
  char *v6; // eax
  char *v7; // ebx
  int (__cdecl **v8)(unsigned int); // eax
  void (__stdcall __noreturn *v9)(); // [esp+2Ch] [ebp+8h]

  if ( a2 == nullptr )
    return nullptr;
  result = (struct CObject *)CMapPtrToPtr::GetValueAt((CHandleMap *)((char *)this + 28), a2);
  if ( result == nullptr )
  {
    result = (struct CObject *)CMapPtrToPtr::GetValueAt((CHandleMap *)((char *)this + 56), a2);
    if ( result != nullptr )
    {
      v5 = (int (__cdecl **)(unsigned int))((char *)result + *((_DWORD *)this + 22));
      *v5 = a2;
      if ( *((_DWORD *)this + 23) == 2 )
        v5[1] = a2;
    }
    else
    {
      v9 = AfxSetNewHandler((void (__stdcall __noreturn *)())AfxCriticalNewHandler);
      v6 = (char *)CFixedAllocNoSync::Alloc((CHandleMap *)((char *)this + 4));
      v7 = v6;
      if ( v6 == nullptr )
        AfxThrowMemoryException();
      (*((void (__stdcall **)(char *))this + 5))(v6);
      *(_DWORD *)sub_10017EB6((CHandleMap *)((char *)this + 56), (int)a2) = v7;
      AfxSetNewHandler(v9);
      v8 = (int (__cdecl **)(unsigned int))&v7[*((_DWORD *)this + 22)];
      *v8 = a2;
      if ( *((_DWORD *)this + 23) == 2 )
        v8[1] = a2;
      return (struct CObject *)v7;
    }
  }
  return result;
}

// Address: 0x10010C3B
void __thiscall CHandleMap::DeleteTemp(CHandleMap *this)
{
  bool v2; // zf
  _DWORD *v3; // eax
  void *v4; // [esp+4h] [ebp-Ch] BYREF
  struct __POSITION *v5; // [esp+8h] [ebp-8h] BYREF
  void *v6; // [esp+Ch] [ebp-4h] BYREF

  if ( this != nullptr )
  {
    v2 = *((_DWORD *)this + 17) == 0;
    v5 = (struct __POSITION *)-(*((_DWORD *)this + 17) != 0);
    if ( !v2 )
    {
      do
      {
        CMapPtrToPtr::GetNextAssoc((CHandleMap *)((char *)this + 56), &v5, &v4, &v6);
        v3 = (char *)v6 + *((_DWORD *)this + 22);
        *v3 = 0;
        if ( *((_DWORD *)this + 23) == 2 )
          v3[1] = 0;
        (*((void (__stdcall **)(void *))this + 6))(v6);
      }
      while ( v5 != nullptr );
    }
    unknown_libname_70((char *)this + 56);
    CFixedAllocNoSync::FreeAll((CHandleMap *)((char *)this + 4));
  }
}

// Address: 0x10010CA0
void __thiscall CHandleMap::~CHandleMap(CHandleMap *this)
{
  *(_DWORD *)this = &CHandleMap::`vftable';
  CHandleMap::DeleteTemp(this);
  sub_10017E5B((char *)this + 56);
  sub_10017E5B((char *)this + 28);
  CFixedAllocNoSync::FreeAll((CHandleMap *)((char *)this + 4));
}

// Address: 0x10010CED
CHandleMap *__thiscall CHandleMap::`scalar deleting destructor'(CHandleMap *this, char a2)
{
  CHandleMap::~CHandleMap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10010D0E
BOOL __stdcall AfxUnlockTempMaps(size_t Size)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // ebx
  int v2; // eax
  int v3; // eax
  struct CWinThread *Thread; // eax
  void (__stdcall *v5)(_DWORD, _DWORD); // eax
  int v6; // edi
  struct CNoTrackObject *DataNA; // eax
  struct CNoTrackObject *v8; // esi
  void *v9; // eax
  void *v10; // eax
  size_t Sizea; // [esp+10h] [ebp+8h]

  ModuleThreadState = AfxGetModuleThreadState();
  v2 = *((_DWORD *)ModuleThreadState + 4);
  if ( v2 != 0 )
  {
    v3 = v2 - 1;
    *((_DWORD *)ModuleThreadState + 4) = v3;
    if ( v3 == 0 )
    {
      if ( Size != 0 )
      {
        if ( Size != -1 )
        {
          Thread = AfxGetThread();
          if ( Thread != nullptr )
          {
            v5 = *((void (__stdcall **)(_DWORD, _DWORD))Thread + 15);
            if ( v5 != nullptr )
              v5(0, 0);
          }
        }
        CHandleMap::DeleteTemp(*((CHandleMap **)ModuleThreadState + 8));
        CHandleMap::DeleteTemp(*((CHandleMap **)ModuleThreadState + 7));
        CHandleMap::DeleteTemp(*((CHandleMap **)ModuleThreadState + 6));
        CHandleMap::DeleteTemp(*((CHandleMap **)ModuleThreadState + 5));
        CHandleMap::DeleteTemp(*((CHandleMap **)ModuleThreadState + 9));
      }
      v6 = *((_DWORD *)AfxGetModuleState() + 1);
      DataNA = CThreadLocalObject::GetDataNA((CThreadLocalObject *)&unk_1003ECA4);
      v8 = DataNA;
      if ( DataNA != nullptr
        && v6 != 0
        && (*((_DWORD *)DataNA + 3) == 0 || _msize(*((void **)DataNA + 3)) < *(_DWORD *)(v6 + 152))
        && *(_DWORD *)(v6 + 152) != 0 )
      {
        v9 = *((void **)v8 + 3);
        Sizea = 0;
        if ( v9 != nullptr )
        {
          Sizea = _msize(v9);
          free(*((void **)v8 + 3));
        }
        v10 = malloc(*(_DWORD *)(v6 + 152));
        *((_DWORD *)v8 + 3) = v10;
        if ( v10 == nullptr && Sizea != 0 )
          *((_DWORD *)v8 + 3) = malloc(Sizea);
      }
    }
  }
  return *((_DWORD *)ModuleThreadState + 4) != 0;
}

// Address: 0x10010E09
int __cdecl ATL::AtlAdd<int>(_DWORD *a1, int a2, int a3)
{
  if ( 0x7FFFFFFF - a2 < a3 )
    return -2147024809;
  *a1 = a3 + a2;
  return 0;
}

// Address: 0x10010E31
int __cdecl ATL::AtlAddThrow<int>(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = v2;
  v3 = ATL::AtlAdd<int>(&v5, a1, a2);
  if ( v3 < 0 )
    sub_10007E20(v3);
  return v5;
}

// Address: 0x10010E58
void **__thiscall ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>(
        void **this,
        const void *a2,
        rsize_t DestinationSize,
        int (__stdcall ***a4)(rsize_t, int))
{
  ATL::CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>(this, a2, DestinationSize, a4);
  return this;
}

// Address: 0x10010E75
void **__thiscall ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::Mid(
        int *this,
        void **a2,
        int a3,
        signed int DestinationSize)
{
  rsize_t v5; // esi
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int (__stdcall ***v9)(rsize_t, int); // eax

  if ( a3 < 0 )
    a3 = 0;
  v5 = DestinationSize;
  if ( DestinationSize < 0 )
    v5 = 0;
  v6 = *(_DWORD *)(*this - 12);
  if ( ATL::AtlAddThrow<int>(a3, v5) > v6 )
    v5 = *(_DWORD *)(*this - 12) - a3;
  v7 = *this;
  v8 = *(_DWORD *)(*this - 12);
  if ( a3 > v8 )
    v5 = 0;
  if ( a3 != 0 || v5 != v8 )
  {
    v9 = (int (__stdcall ***)(rsize_t, int))unknown_libname_23(this);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>(
      a2,
      (const void *)(v7 + 2 * a3),
      v5,
      v9);
  }
  else
  {
    sub_1000EE9A(a2, this);
  }
  return a2;
}

// Address: 0x10010EF5
volatile signed __int32 **__thiscall sub_10010EF5(volatile signed __int32 **this, unsigned __int16 *Source, int a3)
{
  sub_10007BA0(this, a3);
  if ( sub_1000CA5F((int *)this, (int)Source) == 0 )
    sub_10007F40(this, Source);
  return this;
}

// Address: 0x10010F34
volatile signed __int32 **__thiscall ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::Tokenize(
        int *this,
        volatile signed __int32 **a2,
        wchar_t *Control,
        int *a4)
{
  int v6; // ecx
  const wchar_t *v7; // edi
  size_t v8; // eax
  const wchar_t *v9; // edi
  size_t v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v15; // [esp-8h] [ebp-18h]
  size_t v16; // [esp+Ch] [ebp-4h]
  unsigned int v17; // [esp+20h] [ebp+10h]

  v6 = *a4;
  if ( *a4 < 0 )
    sub_10007E20(-2147024809);
  if ( Control == nullptr || *Control == 0 )
  {
    v11 = *this;
    if ( v6 < *(_DWORD *)(*this - 12) )
    {
      v12 = unknown_libname_23(this);
      sub_10010EF5(a2, (unsigned __int16 *)(v11 + 2 * *a4), v12);
      return a2;
    }
LABEL_10:
    *a4 = -1;
    v13 = unknown_libname_23(this);
    sub_1000EE60(a2, v13);
    return a2;
  }
  v7 = (const wchar_t *)(*this + 2 * v6);
  v17 = *this + 2 * *(_DWORD *)(*this - 12);
  if ( (unsigned int)v7 >= v17 )
    goto LABEL_10;
  v8 = wcsspn(v7, Control);
  v9 = &v7[v8];
  v16 = v8;
  if ( (unsigned int)v9 >= v17 )
    goto LABEL_10;
  v10 = wcscspn(v9, Control);
  v15 = v16 + *a4;
  *a4 = v15 + v10 + 1;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::Mid(this, (void **)a2, v15, v10);
  return a2;
}

// Address: 0x10010FE9
void __stdcall AfxUnregisterWndClasses()
{
  struct AFX_MODULE_STATE *ModuleState; // esi
  int *v1; // edi
  struct AFX_MODULE_STATE *v2; // eax
  volatile signed __int32 **v3; // eax
  int v4; // [esp+10h] [ebp-18h] BYREF
  int v5; // [esp+14h] [ebp-14h] BYREF
  LPCWSTR lpClassName[3]; // [esp+18h] [ebp-10h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  ModuleState = AfxGetModuleState();
  AfxLockGlobals(1u);
  v1 = (int *)((char *)ModuleState + 52);
  v5 = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::Tokenize(
    (int *)ModuleState + 13,
    (volatile signed __int32 **)lpClassName,
    (wchar_t *)L"\n",
    &v5);
  v7 = 0;
  while ( *((_DWORD *)lpClassName[0] - 3) != 0 )
  {
    v2 = AfxGetModuleState();
    UnregisterClassW(lpClassName[0], *((HINSTANCE *)v2 + 2));
    v3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::Tokenize(
           v1,
           (volatile signed __int32 **)&v4,
           (wchar_t *)L"\n",
           &v5);
    LOBYTE(v7) = 1;
    ATL::CSimpleStringT<wchar_t,0>::operator=((volatile signed __int32 **)lpClassName, (_BYTE **)v3);
    LOBYTE(v7) = 0;
    sub_10007C90((volatile signed __int32 *)(v4 - 16));
  }
  sub_10007C20((volatile signed __int32 **)v1);
  AfxUnlockGlobals(1u);
  sub_10007C90((volatile signed __int32 *)lpClassName[0] - 4);
}

// Address: 0x10011088
void __stdcall AfxWinTerm()
{
  int v0; // eax
  void (__stdcall *v1)(int, _DWORD); // eax
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  int v3; // ecx
  struct _AFX_THREAD_STATE *ThreadState; // esi
  HHOOK v5; // eax

  AfxUnregisterWndClasses();
  v0 = *((_DWORD *)AfxGetModuleState() + 1);
  if ( v0 != 0 )
  {
    v1 = *(void (__stdcall **)(int, _DWORD))(v0 + 60);
    if ( v1 != nullptr )
      v1(1, 0);
  }
  ModuleThreadState = AfxGetModuleThreadState();
  v3 = *((_DWORD *)ModuleThreadState + 15);
  if ( v3 != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 324))(v3) != 0 )
    *((_DWORD *)ModuleThreadState + 15) = 0;
  ThreadState = AfxGetThreadState();
  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
  {
    v5 = *((HHOOK *)ThreadState + 11);
    if ( v5 != nullptr )
    {
      UnhookWindowsHookEx(v5);
      *((_DWORD *)ThreadState + 11) = 0;
    }
    if ( *((_DWORD *)ThreadState + 10) != 0 )
    {
      UnhookWindowsHookEx(*((HHOOK *)ThreadState + 10));
      *((_DWORD *)ThreadState + 10) = 0;
    }
  }
}

// Address: 0x100110FE
int __stdcall AfxGetFileName(LPCWSTR pszPath, wchar_t *Destination, rsize_t SizeInWords)
{
  WCHAR *FileNameW; // eax

  if ( pszPath == nullptr )
    AfxThrowInvalidArgException();
  FileNameW = PathFindFileNameW(pszPath);
  if ( Destination == nullptr )
    return lstrlenW(FileNameW) + 1;
  unknown_libname_10(Destination, SizeInWords, FileNameW, 0xFFFFFFFF);
  return 0;
}

// Address: 0x1001113E
void __thiscall CWinApp::SetCurrentHandles(CWinApp *this)
{
  struct AFX_MODULE_STATE *ModuleState; // ebx
  DWORD ModuleFileNameW; // eax
  wchar_t *v4; // eax
  wchar_t *v5; // eax
  int v6; // eax
  wchar_t *v7; // eax
  errno_t v8; // eax
  wchar_t *v9; // eax
  LPWSTR ExtensionW; // [esp+Ch] [ebp-618h]
  wchar_t v11[256]; // [esp+10h] [ebp-614h] BYREF
  wchar_t Destination[260]; // [esp+210h] [ebp-414h] BYREF
  WCHAR Filename[260]; // [esp+418h] [ebp-20Ch] BYREF

  ModuleState = AfxGetModuleState();
  *((_DWORD *)ModuleState + 2) = *((_DWORD *)this + 17);
  *((_DWORD *)ModuleState + 3) = *((_DWORD *)this + 17);
  ModuleFileNameW = GetModuleFileNameW(*((HMODULE *)this + 17), Filename, 0x104u);
  if ( ModuleFileNameW == 0 || ModuleFileNameW == 260 )
    AfxThrowUserException();
  ExtensionW = PathFindExtensionW(Filename);
  if ( ExtensionW == nullptr )
    AfxThrowUserException();
  *ExtensionW = 0;
  if ( AfxGetFileName(Filename, Destination, 0x104u) != 0 )
    AfxThrowUserException();
  if ( *((_DWORD *)this + 24) == 0 )
  {
    v4 = _wcsdup(Destination);
    *((_DWORD *)this + 24) = v4;
    if ( v4 == nullptr )
      goto LABEL_10;
  }
  v5 = *((wchar_t **)this + 20);
  if ( v5 == nullptr )
  {
    v5 = AfxLoadString(0xE000u, v11, 0x100u) != 0 ? _wcsdup(v11) : _wcsdup(*((const wchar_t **)this + 24));
    *((_DWORD *)this + 20) = v5;
    if ( v5 == nullptr )
      goto LABEL_10;
  }
  *((_DWORD *)ModuleState + 4) = v5;
  if ( *((_DWORD *)this + 25) == 0 )
  {
    v6 = ExtensionW - Filename;
    if ( *((_DWORD *)this + 27) == 1 )
      sub_1000D3D7(ExtensionW, 260 - v6, L".CHM");
    else
      sub_1000D3D7(ExtensionW, 260 - v6, (wchar_t *)L".HLP");
    v7 = _wcsdup(Filename);
    *((_DWORD *)this + 25) = v7;
    if ( v7 != nullptr )
    {
      *ExtensionW = 0;
      goto LABEL_22;
    }
LABEL_10:
    AfxThrowMemoryException();
  }
LABEL_22:
  if ( *((_DWORD *)this + 26) == 0 )
  {
    v8 = wcscat_s(Destination, 0x104u, L".INI");
    AfxCrtErrorCheck(v8);
    v9 = _wcsdup(Destination);
    *((_DWORD *)this + 26) = v9;
    if ( v9 == nullptr )
      goto LABEL_10;
  }
}

// Address: 0x100112D3
int __stdcall AfxWinInit(HINSTANCE a1, HINSTANCE a2, wchar_t *a3, int a4)
{
  UINT v4; // eax
  struct AFX_MODULE_STATE *ModuleState; // eax
  CWinApp *v6; // eax
  HMODULE ModuleHandleW; // eax

  v4 = SetErrorMode(0);
  SetErrorMode(v4 | 0x8001);
  ModuleState = AfxGetModuleState();
  *((_DWORD *)ModuleState + 2) = a1;
  *((_DWORD *)ModuleState + 3) = a1;
  AFX_MODULE_STATE::CreateActivationContext(ModuleState);
  v6 = *((CWinApp **)AfxGetModuleState() + 1);
  if ( v6 != nullptr )
  {
    *((_DWORD *)v6 + 18) = a3;
    *((_DWORD *)v6 + 19) = a4;
    *((_DWORD *)v6 + 17) = a1;
    CWinApp::SetCurrentHandles(v6);
  }
  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
    AfxInitThread();
  ModuleHandleW = GetModuleHandleW(L"user32.dll");
  if ( ModuleHandleW != nullptr )
    NotifyWinEvent = (void (__stdcall *)(DWORD, HWND, LONG, LONG))GetProcAddress(ModuleHandleW, "NotifyWinEvent");
  return 1;
}

// Address: 0x1001135A
struct IUnknown *__thiscall CCmdTarget::GetInterface(CCmdTarget *this, _DWORD *a2)
{
  struct IUnknown *result; // eax
  _DWORD *v4; // edi
  _DWORD *j; // ecx
  int i; // edx
  _DWORD *v7; // ecx

  result = (struct IUnknown *)(*(int (__thiscall **)(CCmdTarget *, _DWORD *))(*(_DWORD *)this + 68))(this, a2);
  if ( result == nullptr )
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(CCmdTarget *))(*(_DWORD *)this + 56))(this);
    if ( *a2 != 0 || a2[1] != 0 || a2[2] != 192 || a2[3] != 1174405120 )
    {
      do
      {
        for ( i = v4[1]; ; i += 8 )
        {
          v7 = *(_DWORD **)i;
          if ( *(_DWORD *)i == 0 )
            break;
          if ( *v7 == *a2 && v7[1] == a2[1] && v7[2] == a2[2] && v7[3] == a2[3] )
          {
            result = (struct IUnknown *)((char *)this + *(_DWORD *)(i + 4));
            if ( result->lpVtbl != nullptr )
              return result;
          }
        }
        v4 = (_DWORD *)*v4;
      }
      while ( v4 != nullptr );
    }
    else
    {
      do
      {
        for ( j = (_DWORD *)v4[1]; *j != 0; j += 2 )
        {
          result = (struct IUnknown *)((char *)this + j[1]);
          if ( result->lpVtbl != nullptr )
            return result;
        }
        v4 = (_DWORD *)*v4;
      }
      while ( v4 != nullptr );
    }
    return nullptr;
  }
  return result;
}

// Address: 0x1001140D
struct IUnknown *__thiscall CCmdTarget::QueryAggregates(CCmdTarget *this, const void *a2)
{
  _DWORD *v2; // edi
  _DWORD *i; // eax
  _DWORD *j; // esi
  int (__stdcall ***v5)(_DWORD, const void *, struct IUnknown **); // eax
  int (__stdcall **v6)(_DWORD, const void *, struct IUnknown **); // ecx
  struct IUnknown *result; // eax
  struct IUnknown *v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)(*(int (__fastcall **)(CCmdTarget *))(*(_DWORD *)this + 56))(this);
  do
  {
    for ( i = (_DWORD *)v2[1]; *i != 0; i += 2 )
      ;
    for ( j = i + 1; *j != -1; j += 2 )
    {
      v5 = *(int (__stdcall ****)(_DWORD, const void *, struct IUnknown **))((char *)this + *j);
      if ( v5 != nullptr )
      {
        v6 = *v5;
        v9 = nullptr;
        if ( (*v6)(v5, a2, &v9) == 0 )
        {
          result = v9;
          if ( v9 != nullptr )
            return result;
        }
      }
    }
    v2 = (_DWORD *)*v2;
  }
  while ( v2 != nullptr );
  return nullptr;
}

// Address: 0x1001146F
LONG __thiscall CCmdTarget::ExternalAddRef(CCmdTarget *this)
{
  if ( *((_DWORD *)this + 2) != 0 )
    return (*(unsigned int (__stdcall **)(_DWORD))(**((_DWORD **)this + 2) + 4))(*((_DWORD *)this + 2));
  else
    return InterlockedIncrement((volatile LONG *)this + 1);
}

// Address: 0x1001148A
LONG __thiscall CCmdTarget::InternalRelease(CCmdTarget *this)
{
  LONG v3; // ebx
  int v4; // eax
  ULONG_PTR v5[4]; // [esp+10h] [ebp-14h] BYREF
  int v6; // [esp+20h] [ebp-4h]

  if ( *((_DWORD *)this + 1) == 0 )
    return 0;
  v3 = InterlockedDecrement((volatile LONG *)this + 1);
  if ( v3 == 0 )
  {
    AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v5, *((struct AFX_MODULE_STATE **)this + 7));
    v4 = *(_DWORD *)this;
    v6 = 0;
    (*(void (__thiscall **)(CCmdTarget *))(v4 + 16))(this);
    v6 = -1;
    if ( v5[1] != 0 )
      sub_1000F87C(0, v5[0]);
  }
  return v3;
}

// Address: 0x100114E0
LONG __thiscall CCmdTarget::ExternalRelease(CCmdTarget *this)
{
  if ( *((_DWORD *)this + 2) != 0 )
    return (*(unsigned int (__stdcall **)(_DWORD))(**((_DWORD **)this + 2) + 8))(*((_DWORD *)this + 2));
  else
    return CCmdTarget::InternalRelease(this);
}

// Address: 0x100114F5
int __thiscall CCmdTarget::InternalQueryInterface(CCmdTarget *this, _DWORD *a2, void **a3)
{
  struct IUnknown *Interface; // eax
  struct IUnknown *Aggregates; // eax

  Interface = CCmdTarget::GetInterface(this, a2);
  *a3 = Interface;
  if ( Interface != nullptr )
  {
    CCmdTarget::ExternalAddRef(this);
    return 0;
  }
  else
  {
    Aggregates = CCmdTarget::QueryAggregates(this, a2);
    *a3 = Aggregates;
    return Aggregates != nullptr ? 0 : -2147467262;
  }
}

// Address: 0x10011538
int __thiscall CCmdTarget::ExternalQueryInterface(CCmdTarget *this, _DWORD *a2, void **a3)
{
  if ( *((_DWORD *)this + 2) != 0 )
    return (***((unsigned int (__stdcall ****)(_DWORD, _DWORD *, void **))this + 2))(*((_DWORD *)this + 2), a2, a3);
  else
    return CCmdTarget::InternalQueryInterface(this, a2, a3);
}

// Address: 0x1001155B
void __thiscall AUX_DATA::UpdateSysColors(AUX_DATA *this)
{
  *((_DWORD *)this + 10) = GetSysColor(15);
  *((_DWORD *)this + 11) = GetSysColor(16);
  *((_DWORD *)this + 12) = GetSysColor(20);
  *((_DWORD *)this + 13) = GetSysColor(18);
  *((_DWORD *)this + 14) = GetSysColor(6);
  *((_DWORD *)this + 9) = GetSysColorBrush(15);
  *((_DWORD *)this + 8) = GetSysColorBrush(6);
}

// Address: 0x100115A1
void __thiscall AUX_DATA::UpdateSysMetrics(AUX_DATA *this)
{
  HDC DC; // ebx

  *((_DWORD *)this + 2) = GetSystemMetrics(11);
  *((_DWORD *)this + 3) = GetSystemMetrics(12);
  dword_1003EEE8 = GetSystemMetrics(2) + 1;
  dword_1003EEEC = GetSystemMetrics(3) + 1;
  DC = GetDC(nullptr);
  *((_DWORD *)this + 6) = GetDeviceCaps(DC, 88);
  *((_DWORD *)this + 7) = GetDeviceCaps(DC, 90);
  ReleaseDC(nullptr, DC);
}

// Address: 0x100115FD
AUX_DATA *__thiscall AUX_DATA::AUX_DATA(AUX_DATA *this)
{
  AUX_DATA::UpdateSysMetrics(this);
  *((_DWORD *)this + 9) = 0;
  AUX_DATA::UpdateSysColors(this);
  *((_DWORD *)this + 15) = LoadCursorW(nullptr, (LPCWSTR)0x7F02);
  *((_DWORD *)this + 16) = LoadCursorW(nullptr, (LPCWSTR)0x7F00);
  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 5) = 2;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 17) = 0;
  return this;
}

// Address: 0x10011646
// bad sp value at call has been detected, the output may be wrong!
void __thiscall AUX_DATA::~AUX_DATA(void **this)
{
  AfxDeleteObject(this + 20);
}

// Address: 0x1001170B
const struct ATL::ATLSTRINGRESOURCEIMAGE *__stdcall AfxLoadString(unsigned int a1, wchar_t *a2, unsigned int a3)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  const struct ATL::ATLSTRINGRESOURCEIMAGE *result; // eax
  unsigned int v5; // edi

  if ( a2 == nullptr || a3 == 0 )
    AfxThrowInvalidArgException();
  ModuleState = AfxGetModuleState();
  result = ATL::AtlGetStringResourceImage(*((HINSTANCE *)ModuleState + 3), a1);
  if ( result != nullptr )
  {
    v5 = *(unsigned __int16 *)result;
    if ( a3 - 1 < v5 )
      v5 = a3 - 1;
    ATL::Checked::memcpy_s((ATL::Checked *)a2, 2 * (a3 - 1), (char *)result + 2, 2 * v5);
    a2[v5] = 0;
    return (const struct ATL::ATLSTRINGRESOURCEIMAGE *)v5;
  }
  else
  {
    *a2 = 0;
  }
  return result;
}

// Address: 0x10011773
HINSTANCE __stdcall AfxFindStringResourceHandle(unsigned int a1)
{
  return *((HINSTANCE *)AfxGetModuleState() + 3);
}

// Address: 0x1001177E
// MFC 3.1-14.0 32bit
BOOL __stdcall unknown_libname_34(int a1, int a2)
{
  return a1 != 0;
}

// Address: 0x1001178F
void __cdecl ATL::Checked::memmove_s(ATL::Checked *this, rsize_t DestinationSize, void *Source, rsize_t SourceSize)
{
  errno_t v4; // eax

  v4 = memmove_s(this, DestinationSize, Source, SourceSize);
  AfxCrtErrorCheck(v4);
}

// Address: 0x100117B0
rsize_t __thiscall CArchive::Read(void **this, ATL::Checked *a2, rsize_t DestinationSize)
{
  _BYTE *v5; // eax
  rsize_t v6; // edi
  rsize_t v7; // ebx
  rsize_t v8; // edi
  int v9; // eax
  rsize_t v10; // edi
  int v11; // eax
  _BYTE *v12; // eax
  rsize_t v13; // edi
  int v14; // [esp+8h] [ebp-8h]
  int v15; // [esp+8h] [ebp-8h]
  rsize_t v16; // [esp+Ch] [ebp-4h]
  rsize_t v17; // [esp+Ch] [ebp-4h]
  ATL::Checked *v18; // [esp+18h] [ebp+8h]

  if ( DestinationSize == 0 || a2 == nullptr )
    return 0;
  if ( (*(_BYTE *)(this + 6) & 1) == 0 )
    sub_10011ED0(4, *(this + 5));
  v5 = *(this + 10);
  v6 = (_BYTE *)*(this + 11) - v5;
  if ( DestinationSize < v6 )
    v6 = DestinationSize;
  ATL::Checked::memcpy_s(a2, DestinationSize, v5, v6);
  *(this + 10) = (char *)*(this + 10) + v6;
  v18 = (ATL::Checked *)((char *)a2 + v6);
  v7 = DestinationSize - v6;
  if ( DestinationSize != v6 )
  {
    v8 = v7 - v7 % (unsigned int)*(this + 8);
    v14 = 0;
    v16 = v8;
    do
    {
      v9 = (*(int (__thiscall **)(_DWORD, ATL::Checked *, rsize_t))(*(_DWORD *)*(this + 9) + 52))(*(this + 9), v18, v16);
      v18 = (ATL::Checked *)((char *)v18 + v9);
      v14 += v9;
      v16 -= v9;
    }
    while ( v9 != 0 && v16 != 0 );
    v7 -= v14;
    if ( v7 != 0 && v14 == v8 )
    {
      v10 = 0;
      if ( *(this + 2) != nullptr )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, char *, char *))(*(_DWORD *)*(this + 9) + 80))(
          *(this + 9),
          0,
          *(this + 8),
          (char *)this + 48,
          (char *)this + 44);
        v12 = *(this + 12);
      }
      else
      {
        if ( *(this + 3) != nullptr || (v17 = (rsize_t)*(this + 8), v7 > v17) )
          v17 = v7;
        v15 = (int)*(this + 12);
        do
        {
          v11 = (*(int (__thiscall **)(_DWORD, int, rsize_t))(*(_DWORD *)*(this + 9) + 52))(*(this + 9), v15, v17);
          v15 += v11;
          v17 -= v11;
          v10 += v11;
        }
        while ( v11 != 0 && v17 != 0 && v10 < v7 );
        v12 = *(this + 12);
        *(this + 11) = &v12[v10];
      }
      v13 = (_BYTE *)*(this + 11) - v12;
      *(this + 10) = v12;
      if ( v7 < v13 )
        v13 = v7;
      ATL::Checked::memcpy_s(v18, v7, v12, v13);
      *(this + 10) = (char *)*(this + 10) + v13;
      v7 -= v13;
    }
  }
  return DestinationSize - v7;
}

// Address: 0x100118E1
void __thiscall CArchive::Flush(CArchive *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int *v5; // edi
  int v6; // edx

  v2 = *((_DWORD *)this + 10);
  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    v3 = *((_DWORD *)this + 11);
    if ( v3 != v2 )
      (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)this + 9) + 40))(
        *((_DWORD *)this + 9),
        v2 - v3,
        (v2 - v3) >> 31,
        1);
    v4 = *((_DWORD *)this + 11);
  }
  else
  {
    v5 = (int *)((char *)this + 48);
    v6 = *((_DWORD *)this + 12);
    if ( *((_DWORD *)this + 2) != 0 )
    {
      if ( v2 != v6 )
        (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD))(**((_DWORD **)this + 9) + 80))(
          *((_DWORD *)this + 9),
          2,
          v2 - v6,
          0,
          0);
      (*(void (__thiscall **)(_DWORD, int, _DWORD, char *, char *))(**((_DWORD **)this + 9) + 80))(
        *((_DWORD *)this + 9),
        1,
        *((_DWORD *)this + 8),
        (char *)this + 48,
        (char *)this + 44);
    }
    else if ( v2 != v6 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 9) + 56))(*((_DWORD *)this + 9), v6, v2 - v6);
    }
    v4 = *v5;
  }
  *((_DWORD *)this + 10) = v4;
}

// Address: 0x10011959
void __thiscall CArchive::FillBuffer(void **this, unsigned int a2)
{
  ATL::Checked *v3; // edx
  _DWORD *v4; // ebx
  int v5; // ecx
  signed int v6; // edi
  ATL::Checked *v7; // eax
  unsigned int v8; // ecx
  char *v9; // edi
  int v10; // eax
  char *v11; // eax
  int v12; // [esp-8h] [ebp-1Ch]
  unsigned int v13; // [esp+Ch] [ebp-8h]
  unsigned int v14; // [esp+10h] [ebp-4h]
  unsigned int v15; // [esp+1Ch] [ebp+8h]

  if ( (*(_BYTE *)(this + 6) & 1) == 0 )
    sub_10011ED0(4, *(this + 5));
  v3 = (ATL::Checked *)*(this + 10);
  v4 = this + 11;
  v5 = (int)*(this + 11);
  v6 = (_BYTE *)*(this + 11) - (_BYTE *)v3;
  v13 = v6 + a2;
  if ( *(this + 2) != nullptr )
  {
    if ( v6 != 0 )
      (*(void (__thiscall **)(_DWORD, int, int, int))(*(_DWORD *)*(this + 9) + 40))(
        *(this + 9),
        v3 - (ATL::Checked *)*(this + 11),
        (v3 - (ATL::Checked *)*(this + 11)) >> 31,
        1);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, char *, char *))(*(_DWORD *)*(this + 9) + 80))(
      *(this + 9),
      0,
      *(this + 8),
      (char *)this + 48,
      (char *)this + 44);
    *(this + 10) = *(this + 12);
  }
  else
  {
    v7 = (ATL::Checked *)*(this + 12);
    if ( v3 > v7 )
    {
      if ( v6 > 0 )
      {
        ATL::Checked::memmove_s(v7, v5 - (_DWORD)v7, v3, v6);
        v7 = (ATL::Checked *)*(this + 12);
        *(this + 10) = v7;
        *v4 = (char *)v7 + v6;
      }
      v8 = a2;
      v14 = v6;
      if ( *(this + 3) == nullptr )
        v8 = (unsigned int)*(this + 8);
      v15 = v8 - v6;
      v9 = (char *)v7 + v6;
      do
      {
        v10 = (*(int (__thiscall **)(_DWORD, char *, unsigned int))(*(_DWORD *)*(this + 9) + 52))(*(this + 9), v9, v15);
        v14 += v10;
        v15 -= v10;
        v9 += v10;
      }
      while ( v10 != 0 && v15 != 0 && v14 < v13 );
      v11 = (char *)*(this + 12);
      *(this + 10) = v11;
      *v4 = &v11[v14];
    }
  }
  if ( *v4 - (int)*(this + 10) < v13 )
    sub_10011ED0(v12, (void *)3);
}

// Address: 0x10011A48
int __thiscall CArchive::operator<<(int this, __int16 a2)
{
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
    sub_10011ED0(2, *(void **)(this + 20));
  if ( (unsigned int)(*(_DWORD *)(this + 40) + 2) > *(_DWORD *)(this + 44) )
    CArchive::Flush((CArchive *)this);
  **(_WORD **)(this + 40) = a2;
  *(_DWORD *)(this + 40) += 2;
  return this;
}

// Address: 0x10011A87
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_35(int this, int a2)
{
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
    sub_10011ED0(2, *(void **)(this + 20));
  if ( (unsigned int)(*(_DWORD *)(this + 40) + 4) > *(_DWORD *)(this + 44) )
    CArchive::Flush((CArchive *)this);
  **(_DWORD **)(this + 40) = a2;
  *(_DWORD *)(this + 40) += 4;
  return this;
}

// Address: 0x10011AC5
void **__thiscall CArchive::operator>>(void **this, _WORD *a2)
{
  int v3; // eax
  unsigned int v4; // ecx

  if ( (*(_BYTE *)(this + 6) & 1) == 0 )
    sub_10011ED0(4, *(this + 5));
  v3 = (int)*(this + 10);
  v4 = (unsigned int)*(this + 11);
  if ( v3 + 2 > v4 )
    CArchive::FillBuffer(this, v3 - v4 + 2);
  *a2 = *(_WORD *)*(this + 10);
  *(this + 10) = (char *)*(this + 10) + 2;
  return this;
}

// Address: 0x10011B0D
// MFC 3.1-14.0 32bit
void **__thiscall unknown_libname_36(void **this, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ecx

  if ( (*(_BYTE *)(this + 6) & 1) == 0 )
    sub_10011ED0(4, *(this + 5));
  v3 = (int)*(this + 10);
  v4 = (unsigned int)*(this + 11);
  if ( v3 + 4 > v4 )
    CArchive::FillBuffer(this, v3 - v4 + 4);
  *a2 = *(_DWORD *)*(this + 10);
  *(this + 10) = (char *)*(this + 10) + 4;
  return this;
}

// Address: 0x10011B54
static struct CRuntimeClass *__stdcall CRuntimeClass::FromName(LPCSTR lpString1)
{
  struct AFX_MODULE_STATE *ModuleState; // esi
  int i; // esi

  if ( lpString1 == nullptr )
    AfxThrowInvalidArgException();
  ModuleState = AfxGetModuleState();
  AfxLockGlobals(0);
  for ( i = *((_DWORD *)ModuleState + 7); ; i = *(_DWORD *)(i + 20) )
  {
    if ( i == 0 )
    {
      AfxUnlockGlobals(0);
      return nullptr;
    }
    if ( lstrcmpA(lpString1, *(LPCSTR *)i) == 0 )
      break;
  }
  AfxUnlockGlobals(0);
  return (struct CRuntimeClass *)i;
}

// Address: 0x10011BA6
static struct CRuntimeClass *__stdcall CRuntimeClass::Load(void **a1, unsigned int *a2)
{
  int v2; // esi
  int v4; // [esp+8h] [ebp-48h] BYREF
  CHAR String1[64]; // [esp+Ch] [ebp-44h] BYREF

  if ( a2 == nullptr )
    return nullptr;
  CArchive::operator>>(a1, &v4);
  *a2 = (unsigned __int16)v4;
  CArchive::operator>>(a1, &v4);
  if ( (unsigned __int16)v4 >= 0x40u )
    return nullptr;
  v2 = (unsigned __int16)v4;
  if ( CArchive::Read(a1, (ATL::Checked *)String1, (unsigned __int16)v4) != v2 )
    return nullptr;
  String1[v2] = 0;
  return CRuntimeClass::FromName(String1);
}

// Address: 0x10011C1D
void __thiscall CArchive::Write(void **this, char *Source, rsize_t SourceSize)
{
  ATL::Checked *v4; // ecx
  rsize_t v5; // eax
  rsize_t v6; // edi
  rsize_t v7; // ebx
  rsize_t v8; // edi
  rsize_t v9; // ebx
  ATL::Checked *v10; // eax
  char *Sourcea; // [esp+10h] [ebp+8h]
  char *Sourceb; // [esp+10h] [ebp+8h]

  if ( SourceSize != 0 && Source != nullptr )
  {
    if ( (*(_BYTE *)(this + 6) & 1) != 0 )
      sub_10011ED0(2, *(this + 5));
    v4 = (ATL::Checked *)*(this + 10);
    v5 = (_BYTE *)*(this + 11) - (_BYTE *)v4;
    v6 = SourceSize;
    if ( SourceSize >= v5 )
      v6 = (_BYTE *)*(this + 11) - (_BYTE *)v4;
    ATL::Checked::memcpy_s(v4, v5, Source, v6);
    *(this + 10) = (char *)*(this + 10) + v6;
    Sourcea = &Source[v6];
    v7 = SourceSize - v6;
    if ( SourceSize != v6 )
    {
      CArchive::Flush((CArchive *)this);
      v8 = v7 - v7 % (unsigned int)*(this + 8);
      (*(void (__thiscall **)(_DWORD, char *, rsize_t))(*(_DWORD *)*(this + 9) + 56))(*(this + 9), Sourcea, v8);
      Sourceb = &Sourcea[v8];
      v9 = v7 - v8;
      if ( *(this + 2) != nullptr )
      {
        (*(void (__thiscall **)(_DWORD, int, _DWORD, char *, char *))(*(_DWORD *)*(this + 9) + 80))(
          *(this + 9),
          1,
          *(this + 8),
          (char *)this + 48,
          (char *)this + 44);
        *(this + 10) = *(this + 12);
      }
      if ( v9 >= (unsigned int)*(this + 8) || (v10 = (ATL::Checked *)*(this + 10)) != *(this + 12) )
        AfxThrowInvalidArgException();
      ATL::Checked::memcpy_s(v10, v9, Sourceb, v9);
      *(this + 10) = (char *)*(this + 10) + v9;
    }
  }
}

// Address: 0x10011CE4
void __thiscall CArchive::WriteCount(CArchive *this, unsigned int a2)
{
  if ( a2 >= 0xFFFF )
  {
    CArchive::operator<<((int)this, 0xFFFF);
    unknown_libname_35((int)this, a2);
  }
  else
  {
    CArchive::operator<<((int)this, a2);
  }
}

// Address: 0x10011D15
int __thiscall CArchive::ReadCount(void **this)
{
  int v3; // [esp+4h] [ebp-4h] BYREF

  CArchive::operator>>(this, &v3);
  if ( (_WORD)v3 != 0xFFFF )
    return (unsigned __int16)v3;
  unknown_libname_36(this, &v3);
  return v3;
}

// Address: 0x10011D49
void __thiscall CRuntimeClass::Store(CRuntimeClass *this, void **a2)
{
  unsigned __int16 v3; // di
  int v4; // eax

  v3 = lstrlenA(*(LPCSTR *)this);
  v4 = CArchive::operator<<((int)a2, *((_WORD *)this + 4));
  CArchive::operator<<(v4, v3);
  CArchive::Write(a2, *(char **)this, v3);
}

// Address: 0x10011D86
void __thiscall CArchive::EnsureRead(void **this, ATL::Checked *a2, rsize_t a3)
{
  if ( CArchive::Read(this, a2, a3) != a3 )
    sub_10011ED0(3, nullptr);
}

// Address: 0x10011DA8
char **sub_10011DA8()
{
  return &off_1002C4D8;
}

// Address: 0x10011DAE
int __thiscall sub_10011DAE(_DWORD *this, wchar_t *Destination, rsize_t SizeInWords, _DWORD *a4)
{
  _DWORD *v5; // edi
  bool v6; // zf
  wchar_t *Source[4]; // [esp+14h] [ebp-14h] BYREF
  int v9; // [esp+24h] [ebp-4h]

  if ( Destination == nullptr )
    return 0;
  if ( a4 != nullptr )
    *a4 = *(this + 2) + 61872;
  v9 = 0;
  sub_10007BF0(Source);
  LOBYTE(v9) = 1;
  unknown_libname_22(&a4, this + 3);
  v5 = a4;
  v6 = *(a4 - 3) == 0;
  LOBYTE(v9) = 2;
  if ( v6 )
  {
    sub_1000C9BF((int *)&a4, 0xF006u);
    v5 = a4;
  }
  sub_100183C4(Source, *(this + 2) + 61872, (char)v5);
  unknown_libname_10(Destination, SizeInWords, Source[0], 0xFFFFFFFF);
  sub_10007C90(v5 - 4);
  sub_10007C90((volatile signed __int32 *)Source[0] - 4);
  return 1;
}

// Address: 0x10011E5F
volatile signed __int32 **__thiscall sub_10011E5F(
        volatile signed __int32 **this,
        volatile signed __int32 *a2,
        unsigned __int16 *Source)
{
  CException::CException((CException *)this);
  *this = (volatile signed __int32 *)&CArchiveException::`vftable';
  sub_10007BF0(this + 3);
  *(this + 2) = a2;
  sub_10007F40(this + 3, Source);
  return this;
}

// Address: 0x10011EA3
CArchiveException *__thiscall CArchiveException::`scalar deleting destructor'(CArchiveException *this, char a2)
{
  volatile signed __int32 *v3; // ecx

  v3 = (volatile signed __int32 *)(*((_DWORD *)this + 3) - 16);
  *(_DWORD *)this = &CArchiveException::`vftable';
  sub_10007C90(v3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10011ED0
void __cdecl __noreturn sub_10011ED0(volatile signed __int32 *a1, unsigned __int16 *Source)
{
  volatile signed __int32 **v2; // ecx
  volatile signed __int32 **v3; // eax
  volatile signed __int32 **pExceptionObject; // [esp+14h] [ebp-10h] BYREF
  int v5; // [esp+20h] [ebp-4h]

  v2 = (volatile signed __int32 **)operator new(0x10u);
  v3 = nullptr;
  v5 = 0;
  if ( v2 != nullptr )
    v3 = sub_10011E5F(v2, a1, Source);
  v5 = -1;
  pExceptionObject = v3;
  _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI4PAVCArchiveException__);
}

// Address: 0x10011F13
HKEY __thiscall CWinApp::GetAppRegistryKey(LPCWSTR *this)
{
  DWORD dwDisposition; // [esp+10h] [ebp-10h] BYREF
  HKEY v5; // [esp+14h] [ebp-Ch] BYREF
  HKEY hKey; // [esp+18h] [ebp-8h] BYREF
  HKEY phkResult; // [esp+1Ch] [ebp-4h] BYREF

  v5 = nullptr;
  phkResult = nullptr;
  hKey = nullptr;
  if ( RegOpenKeyExW(HKEY_CURRENT_USER, L"software", 0, 0x2001Fu, &phkResult) == 0
    && RegCreateKeyExW(phkResult, *(this + 21), 0, nullptr, 0, 0x2001Fu, nullptr, &hKey, &dwDisposition) == 0 )
  {
    RegCreateKeyExW(hKey, *(this + 26), 0, nullptr, 0, 0x2001Fu, nullptr, &v5, &dwDisposition);
  }
  if ( phkResult != nullptr )
    RegCloseKey(phkResult);
  if ( hKey != nullptr )
    RegCloseKey(hKey);
  return v5;
}

// Address: 0x10011FA6
HKEY __thiscall CWinApp::GetSectionKey(LPCWSTR *this, const wchar_t *lpSubKey)
{
  HKEY AppRegistryKey; // edi
  DWORD dwDisposition; // [esp+8h] [ebp-8h] BYREF
  HKEY phkResult; // [esp+Ch] [ebp-4h] BYREF

  phkResult = nullptr;
  AppRegistryKey = CWinApp::GetAppRegistryKey(this);
  if ( AppRegistryKey == nullptr )
    return nullptr;
  RegCreateKeyExW(AppRegistryKey, lpSubKey, 0, nullptr, 0, 0x2001Fu, nullptr, &phkResult, &dwDisposition);
  RegCloseKey(AppRegistryKey);
  return phkResult;
}

// Address: 0x10011FEE
HKEY __thiscall CWinApp::WriteProfileInt(LPCWSTR *this, LPCWSTR lpAppName, LPCWSTR lpValueName, int Data)
{
  HKEY result; // eax
  HKEY v6; // esi
  LSTATUS v7; // edi
  wchar_t Buffer[16]; // [esp+Ch] [ebp-24h] BYREF

  if ( *(this + 21) != nullptr )
  {
    result = CWinApp::GetSectionKey(this, lpAppName);
    v6 = result;
    if ( result != nullptr )
    {
      v7 = RegSetValueExW(result, lpValueName, 0, 4u, (const BYTE *)&Data, 4u);
      RegCloseKey(v6);
      return (HKEY)(v7 == 0);
    }
  }
  else
  {
    swprintf_s(Buffer, 0x10u, L"%d", Data);
    return (HKEY)WritePrivateProfileStringW(lpAppName, lpValueName, Buffer, *(this + 26));
  }
  return result;
}

// Address: 0x10012077
void __thiscall CMFCAutoHideButton::ShowButton(CMFCAutoHideButton *this, int a2)
{
  *((_DWORD *)this + 2) = a2;
}

// Address: 0x10012086
// Microsoft VisualC 2-14/net runtime
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_37(_DWORD *this, int a2)
{
  *(this + 1) = a2;
  return a2;
}

// Address: 0x10012095
void __thiscall CDC::ReleaseAttribDC(CDC *this)
{
  *((_DWORD *)this + 2) = 0;
}

// Address: 0x1001209A
void __thiscall Concurrency::details::TaskStack::Clear(Concurrency::details::TaskStack *this)
{
  *((_DWORD *)this + 1) = 0;
}

// Address: 0x1001209F
int __thiscall CDC::SaveDC(HDC *this)
{
  int v2; // ebx

  v2 = 0;
  if ( *(this + 2) != nullptr )
    v2 = SaveDC(*(this + 2));
  if ( *(this + 1) != *(this + 2) && SaveDC(*(this + 1)) != 0 )
    return -1;
  return v2;
}

// Address: 0x100120D2
BOOL __thiscall CDC::RestoreDC(CDC *this, int nSavedDC)
{
  HDC v3; // ecx
  BOOL result; // eax
  HDC v5; // esi

  v3 = *((HDC *)this + 1);
  result = true;
  if ( v3 != *((HDC *)this + 2) )
    result = RestoreDC(v3, nSavedDC);
  v5 = *((HDC *)this + 2);
  if ( v5 != nullptr )
    return result && RestoreDC(v5, nSavedDC);
  return result;
}

// Address: 0x10012114
unsigned int __thiscall CDC::SetBkColor(CDC *this, COLORREF color)
{
  HDC v3; // ecx
  unsigned int result; // eax
  HDC v5; // esi

  v3 = *((HDC *)this + 1);
  result = -1;
  if ( v3 != *((HDC *)this + 2) )
    result = SetBkColor(v3, color);
  v5 = *((HDC *)this + 2);
  if ( v5 != nullptr )
    return SetBkColor(v5, color);
  return result;
}

// Address: 0x10012147
unsigned int __thiscall CDC::SetTextColor(CDC *this, COLORREF color)
{
  HDC v3; // ecx
  unsigned int result; // eax
  HDC v5; // esi

  v3 = *((HDC *)this + 1);
  result = -1;
  if ( v3 != *((HDC *)this + 2) )
    result = SetTextColor(v3, color);
  v5 = *((HDC *)this + 2);
  if ( v5 != nullptr )
    return SetTextColor(v5, color);
  return result;
}

// Address: 0x1001217A
int __thiscall CDC::SetMapMode(CDC *this, int iMode)
{
  HDC v3; // ecx
  int result; // eax
  HDC v5; // esi

  v3 = *((HDC *)this + 1);
  result = 0;
  if ( v3 != *((HDC *)this + 2) )
    result = SetMapMode(v3, iMode);
  v5 = *((HDC *)this + 2);
  if ( v5 != nullptr )
    return SetMapMode(v5, iMode);
  return result;
}

// Address: 0x100121AC
int __thiscall CDC::GetClipBox(HDC *this, struct tagRECT *lprect)
{
  return GetClipBox(*(this + 1), lprect);
}

// Address: 0x100121C1
char **sub_100121C1()
{
  return &off_1002C560;
}

// Address: 0x100121C7
char **sub_100121C7()
{
  return &off_1002C57C;
}

// Address: 0x100121CD
char **sub_100121CD()
{
  return &off_1002C598;
}

// Address: 0x100121D3
char **sub_100121D3()
{
  return &off_1002C5B4;
}

// Address: 0x100121D9
void __stdcall __noreturn AfxThrowUserException()
{
  int *pExceptionObject; // [esp+0h] [ebp-4h] BYREF

  pExceptionObject = &dword_1003F058;
  _CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI5PAVCUserException__);
}

// Address: 0x100121F5
// MFC 3.1-14.0 32bit
void __stdcall unknown_libname_38(struct CObject *a1)
{
  (*(void (__thiscall **)(struct CObject *, _DWORD))(*(_DWORD *)a1 + 4))(a1, 0);
}

// Address: 0x10012208
// Microsoft VisualC 2-14/net runtime
static void __stdcall CObject::operator delete(void *a1, void *a2)
{
  operator delete(a1);
}

// Address: 0x1001221A
void __thiscall CHandleMap::SetPermanent(CHandleMap *this, void *a2, struct CObject *a3)
{
  *(_DWORD *)sub_10017EB6((CHandleMap *)((char *)this + 28), (int)a2) = a3;
}

// Address: 0x10012233
CDC *__thiscall CDC::CDC(CDC *this)
{
  *(_DWORD *)this = &CDC::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  return this;
}

// Address: 0x10012247
BOOL __thiscall CDC::PtVisible(HDC *this, int x, int y)
{
  return PtVisible(*(this + 1), x, y);
}

// Address: 0x1001225F
BOOL __thiscall CDC::RectVisible(HDC *this, const struct tagRECT *lprect)
{
  return RectVisible(*(this + 1), lprect);
}

// Address: 0x10012274
BOOL __thiscall CDC::TextOutW(HDC *this, int x, int y, LPCWSTR lpString, int c)
{
  return TextOutW(*(this + 1), x, y, lpString, c);
}

// Address: 0x10012292
BOOL __thiscall CDC::ExtTextOutW(
        HDC *this,
        int x,
        int y,
        UINT options,
        RECT *lprect,
        LPCWSTR lpString,
        UINT c,
        int *lpDx)
{
  return ExtTextOutW(*(this + 1), x, y, options, lprect, lpString, c, lpDx);
}

// Address: 0x100122B9
_DWORD *__thiscall CDC::TabbedTextOutW(
        HDC *this,
        _DWORD *a2,
        int x,
        int y,
        const WCHAR *lpString,
        int chCount,
        int nTabPositions,
        INT *lpnTabStopPositions,
        int nTabOrigin)
{
  LONG v9; // eax

  v9 = TabbedTextOutW(*(this + 1), x, y, lpString, chCount, nTabPositions, lpnTabStopPositions, nTabOrigin);
  a2[1] = SHIWORD(v9);
  *a2 = (__int16)v9;
  return a2;
}

// Address: 0x100122F1
int __thiscall CDC::DrawTextW(HDC *this, LPCWSTR lpchText, int cchText, LPRECT lprc, UINT format)
{
  return DrawTextW(*(this + 1), lpchText, cchText, lprc, format);
}

// Address: 0x1001230F
int __thiscall CDC::DrawTextExW(
        HDC *this,
        LPWSTR lpchText,
        int cchText,
        LPRECT lprc,
        UINT format,
        struct tagDRAWTEXTPARAMS *lpdtp)
{
  return DrawTextExW(*(this + 1), lpchText, cchText, lprc, format, lpdtp);
}

// Address: 0x10012330
BOOL __thiscall CDC::GrayStringW(
        HDC *this,
        HBRUSH hBrush,
        GRAYSTRINGPROC lpOutputFunc,
        LPARAM lpData,
        int nCount,
        int X,
        int Y,
        int nWidth,
        int nHeight)
{
  HBRUSH v9; // eax

  v9 = hBrush;
  if ( hBrush != nullptr )
    v9 = *((HBRUSH *)hBrush + 1);
  return GrayStringW(*(this + 1), v9, lpOutputFunc, lpData, nCount, X, Y, nWidth, nHeight);
}

// Address: 0x10012362
int __thiscall CDC::Escape(HDC *this, int iEscape, int cjIn, LPCSTR pvIn, void *pvOut)
{
  return Escape(*(this + 1), iEscape, cjIn, pvIn, pvOut);
}

// Address: 0x10012380
struct tagPOINT *__thiscall CDC::SetViewportOrg(HDC *this, struct tagPOINT *lppt, int x, int y)
{
  HDC v5; // eax
  HDC v6; // esi

  v5 = *(this + 1);
  if ( v5 != *(this + 2) )
    SetViewportOrgEx(v5, x, y, lppt);
  v6 = *(this + 2);
  if ( v6 != nullptr )
    SetViewportOrgEx(v6, x, y, lppt);
  return lppt;
}

// Address: 0x100123BF
struct tagPOINT *__thiscall CDC::OffsetViewportOrg(HDC *this, struct tagPOINT *lppt, int x, int y)
{
  HDC v5; // eax
  HDC v6; // esi

  v5 = *(this + 1);
  if ( v5 != *(this + 2) )
    OffsetViewportOrgEx(v5, x, y, lppt);
  v6 = *(this + 2);
  if ( v6 != nullptr )
    OffsetViewportOrgEx(v6, x, y, lppt);
  return lppt;
}

// Address: 0x100123FE
struct tagSIZE *__thiscall CDC::SetViewportExt(HDC *this, struct tagSIZE *lpsz, int x, int y)
{
  HDC v5; // eax
  HDC v6; // esi

  v5 = *(this + 1);
  if ( v5 != *(this + 2) )
    SetViewportExtEx(v5, x, y, lpsz);
  v6 = *(this + 2);
  if ( v6 != nullptr )
    SetViewportExtEx(v6, x, y, lpsz);
  return lpsz;
}

// Address: 0x1001243D
struct tagSIZE *__thiscall CDC::ScaleViewportExt(HDC *this, struct tagSIZE *lpsz, int xn, int a4, int yn, int yd)
{
  HDC v7; // eax
  HDC v8; // esi

  v7 = *(this + 1);
  if ( v7 != *(this + 2) )
    ScaleViewportExtEx(v7, xn, a4, yn, yd, lpsz);
  v8 = *(this + 2);
  if ( v8 != nullptr )
    ScaleViewportExtEx(v8, xn, a4, yn, yd, lpsz);
  return lpsz;
}

// Address: 0x10012488
struct tagSIZE *__thiscall CDC::SetWindowExt(HDC *this, struct tagSIZE *lpsz, int x, int y)
{
  HDC v5; // eax
  HDC v6; // esi

  v5 = *(this + 1);
  if ( v5 != *(this + 2) )
    SetWindowExtEx(v5, x, y, lpsz);
  v6 = *(this + 2);
  if ( v6 != nullptr )
    SetWindowExtEx(v6, x, y, lpsz);
  return lpsz;
}

// Address: 0x100124C7
struct tagSIZE *__thiscall CDC::ScaleWindowExt(HDC *this, struct tagSIZE *lpsz, int xn, int xd, int yn, int yd)
{
  HDC v7; // eax
  HDC v8; // esi

  v7 = *(this + 1);
  if ( v7 != *(this + 2) )
    ScaleWindowExtEx(v7, xn, xd, yn, yd, lpsz);
  v8 = *(this + 2);
  if ( v8 != nullptr )
    ScaleWindowExtEx(v8, xn, xd, yn, yd, lpsz);
  return lpsz;
}

// Address: 0x10012512
static struct CObject *__stdcall CDC::CreateObject()
{
  struct CObject *result; // eax

  result = (struct CObject *)operator new(0x10u);
  if ( result == nullptr )
    return nullptr;
  *(_DWORD *)result = &CDC::`vftable';
  *((_DWORD *)result + 1) = 0;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  return result;
}

// Address: 0x10012533
_DWORD *sub_10012533()
{
  _DWORD *result; // eax

  result = operator new(8u);
  if ( result == nullptr )
    return nullptr;
  *result = &CGdiObject::`vftable';
  result[1] = 0;
  return result;
}

// Address: 0x1001254D
void __stdcall ConstructDestruct<CDC>::Construct(struct CObject *a1)
{
  if ( a1 != nullptr )
  {
    *(_DWORD *)a1 = &CDC::`vftable';
    *((_DWORD *)a1 + 1) = 0;
    *((_DWORD *)a1 + 2) = 0;
    *((_DWORD *)a1 + 3) = 0;
  }
}

// Address: 0x1001256E
void __stdcall sub_1001256E(struct CObject *a1)
{
  if ( a1 != nullptr )
  {
    *((_DWORD *)a1 + 1) = 0;
    *(_DWORD *)a1 = &CGdiObject::`vftable';
  }
}

// Address: 0x10012588
struct CHandleMap *__stdcall afxMapHDC(void *a1)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  void (__stdcall __noreturn *v2)(); // ebx
  CHandleMap *v3; // ecx
  CHandleMap *v4; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((_DWORD *)ModuleThreadState + 7) == 0 && a1 != nullptr )
  {
    v2 = AfxSetNewHandler((void (__stdcall __noreturn *)())AfxCriticalNewHandler);
    v3 = (CHandleMap *)operator new(0x60u);
    if ( v3 != nullptr )
      v4 = CHandleMap::CHandleMap(
             v3,
             (struct CRuntimeClass *)&off_1002C598,
             ConstructDestruct<CDC>::Construct,
             unknown_libname_38,
             4u,
             2);
    else
      v4 = nullptr;
    *((_DWORD *)ModuleThreadState + 7) = v4;
    AfxSetNewHandler(v2);
  }
  return *((struct CHandleMap **)ModuleThreadState + 7);
}

// Address: 0x100125FC
static struct CDC *__stdcall CDC::FromHandle(int (__cdecl *a1)(unsigned int))
{
  CHandleMap *v1; // eax

  v1 = afxMapHDC((void *)1);
  return CHandleMap::FromHandle(v1, a1);
}

// Address: 0x10012610
int __thiscall CDC::Detach(CDC *this)
{
  int v2; // edi

  v2 = *((_DWORD *)this + 1);
  if ( v2 != 0 && afxMapHDC(nullptr) != nullptr )
    sub_10017D5D(*((_DWORD *)this + 1));
  (*(void (__thiscall **)(CDC *))(*(_DWORD *)this + 20))(this);
  *((_DWORD *)this + 1) = 0;
  return v2;
}

// Address: 0x10012643
void __thiscall CDC::~CDC(CDC *this)
{
  bool v1; // zf
  HDC v2; // eax

  v1 = *((_DWORD *)this + 1) == 0;
  *(_DWORD *)this = &CDC::`vftable';
  if ( !v1 )
  {
    v2 = (HDC)CDC::Detach(this);
    DeleteDC(v2);
  }
}

// Address: 0x1001265C
struct CHandleMap *__stdcall afxMapHGDIOBJ(int a1)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  void (__stdcall __noreturn *v2)(); // ebx
  CHandleMap *v3; // ecx
  CHandleMap *v4; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((_DWORD *)ModuleThreadState + 8) == 0 && a1 != 0 )
  {
    v2 = AfxSetNewHandler((void (__stdcall __noreturn *)())AfxCriticalNewHandler);
    v3 = (CHandleMap *)operator new(0x60u);
    if ( v3 != nullptr )
      v4 = CHandleMap::CHandleMap(v3, (struct CRuntimeClass *)&off_1002C5B4, sub_1001256E, unknown_libname_38, 4u, 1);
    else
      v4 = nullptr;
    *((_DWORD *)ModuleThreadState + 8) = v4;
    AfxSetNewHandler(v2);
  }
  return *((struct CHandleMap **)ModuleThreadState + 8);
}

// Address: 0x100126D0
static struct CGdiObject *__stdcall CGdiObject::FromHandle(int (__cdecl *a1)(unsigned int))
{
  CHandleMap *v1; // eax

  v1 = afxMapHGDIOBJ(1);
  return CHandleMap::FromHandle(v1, a1);
}

// Address: 0x100126E4
void *__thiscall CGdiObject::Detach(CGdiObject *this)
{
  int v2; // edi

  v2 = *((_DWORD *)this + 1);
  if ( v2 != 0 && afxMapHGDIOBJ(0) != nullptr )
    sub_10017D5D(*((_DWORD *)this + 1));
  *((_DWORD *)this + 1) = 0;
  return (void *)v2;
}

// Address: 0x10012710
BOOL __thiscall CGdiObject::DeleteObject(CGdiObject *this)
{
  void *v2; // eax

  if ( *((_DWORD *)this + 1) == 0 )
    return false;
  v2 = CGdiObject::Detach(this);
  return DeleteObject(v2);
}

// Address: 0x10012726
CDC *__thiscall sub_10012726(CDC *this, char a2)
{
  CDC::~CDC(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10012747
struct CGdiObject *__thiscall CDC::SelectStockObject(CDC *this, int i)
{
  HGDIOBJ StockObject; // eax
  HDC v4; // ecx
  void *v5; // ebx
  int (__cdecl *v6)(unsigned int); // eax
  HDC v7; // esi

  StockObject = GetStockObject(i);
  v4 = *((HDC *)this + 1);
  v5 = StockObject;
  v6 = nullptr;
  if ( v4 != *((HDC *)this + 2) )
    v6 = (int (__cdecl *)(unsigned int))SelectObject(v4, v5);
  v7 = *((HDC *)this + 2);
  if ( v7 != nullptr )
    v6 = (int (__cdecl *)(unsigned int))SelectObject(v7, v5);
  return CGdiObject::FromHandle(v6);
}

// Address: 0x10012788
// MFC 3.1-14.0 32bit
struct CGdiObject *__thiscall unknown_libname_39(HDC *this, int a2)
{
  HDC v3; // ecx
  HGDIOBJ v4; // eax
  HDC v5; // esi
  void *v6; // eax

  v3 = *(this + 1);
  v4 = nullptr;
  if ( v3 != *(this + 2) )
  {
    if ( a2 != 0 )
      v4 = *(HGDIOBJ *)(a2 + 4);
    v4 = SelectObject(v3, v4);
  }
  v5 = *(this + 2);
  if ( v5 != nullptr )
  {
    if ( a2 != 0 )
      v6 = *(void **)(a2 + 4);
    else
      v6 = nullptr;
    v4 = SelectObject(v5, v6);
  }
  return CGdiObject::FromHandle((int (__cdecl *)(unsigned int))v4);
}

// Address: 0x100127D3
// bad sp value at call has been detected, the output may be wrong!
void __thiscall CGdiObject::~CGdiObject(CGdiObject *this)
{
  *(_DWORD *)this = &CGdiObject::`vftable';
  CGdiObject::DeleteObject(this);
}

// Address: 0x10012898
CGdiObject *__thiscall CGdiObject::`scalar deleting destructor'(CGdiObject *this, char a2)
{
  CGdiObject::~CGdiObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100128B9
void __stdcall AfxSetWindowText(HWND hWnd, LPCWSTR lpString)
{
  unsigned int v2; // edi
  WCHAR String[256]; // [esp+Ch] [ebp-204h] BYREF

  if ( hWnd == nullptr || lpString == nullptr )
    AfxThrowInvalidArgException();
  v2 = lstrlenW(lpString);
  memset(String, 0, sizeof(String));
  if ( v2 > 0x100 || GetWindowTextW(hWnd, String, 256) != v2 || lstrcmpW(String, lpString) != 0 )
    SetWindowTextW(hWnd, lpString);
}

// Address: 0x10012952
void __stdcall AfxDeleteObject(void **a1)
{
  if ( a1 == nullptr )
    AfxThrowInvalidArgException();
  if ( *a1 != nullptr )
  {
    DeleteObject(*a1);
    *a1 = nullptr;
  }
}

// Address: 0x10012979
void __stdcall AfxGlobalFree(HGLOBAL hMem)
{
  unsigned __int8 v1; // al
  int v2; // esi

  if ( hMem != nullptr )
  {
    v1 = GlobalFlags(hMem);
    v2 = v1;
    if ( v1 != 0 )
    {
      do
      {
        --v2;
        GlobalUnlock(hMem);
      }
      while ( v2 != 0 );
    }
    GlobalFree(hMem);
  }
}

// Address: 0x100129B1
int __cdecl AfxCriticalNewHandler(unsigned int a1)
{
  struct _AFX_THREAD_STATE *ThreadState; // eax
  struct _AFX_THREAD_STATE *v2; // esi
  size_t v3; // eax

  ThreadState = AfxGetThreadState();
  v2 = ThreadState;
  if ( ThreadState == nullptr || *((_DWORD *)ThreadState + 3) == 0 )
    AfxThrowMemoryException();
  v3 = _msize(*((void **)ThreadState + 3));
  if ( v3 > a1 + 4 )
  {
    _expand(*((void **)v2 + 3), v3 - a1 - 4);
  }
  else
  {
    free(*((void **)v2 + 3));
    *((_DWORD *)v2 + 3) = 0;
  }
  return 1;
}

// Address: 0x10012A04
HWND __stdcall _AfxChildWindowFromPoint(HWND hWnd, struct tagPOINT Point)
{
  HWND result; // eax
  HWND v3; // esi
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  ClientToScreen(hWnd, &Point);
  for ( result = GetWindow(hWnd, 5u); ; result = GetWindow(v3, 2u) )
  {
    v3 = result;
    if ( result == nullptr )
      break;
    if ( GetDlgCtrlID(result) != 0xFFFF && ((unsigned int)&_ImageBase & GetWindowLongW(v3, -16)) != 0 )
    {
      GetWindowRect(v3, &Rect);
      if ( PtInRect(&Rect, Point) )
        return v3;
    }
  }
  return result;
}

// Address: 0x10012A7A
BOOL __stdcall AfxOleCanExitApp()
{
  return *((_DWORD *)AfxGetModuleState() + 11) == 0;
}

// Address: 0x10012A8A
void __stdcall AfxOleLockApp()
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  ModuleState = AfxGetModuleState();
  InterlockedIncrement((volatile LONG *)ModuleState + 11);
}

// Address: 0x10012A9A
void __stdcall AfxOleSetUserCtrl(int a1)
{
  *((_DWORD *)AfxGetModuleState() + 12) = a1;
}

// Address: 0x10012AAE
int __stdcall AfxOleGetUserCtrl()
{
  return *((_DWORD *)AfxGetModuleState() + 12);
}

// Address: 0x10012B1C
BOOL IsPlatformNT()
{
  struct _OSVERSIONINFOA VersionInformation; // [esp+0h] [ebp-98h] BYREF

  memset(&VersionInformation.dwMajorVersion, 0, 0x90u);
  VersionInformation.dwOSVersionInfoSize = 148;
  GetVersionExA(&VersionInformation);
  return VersionInformation.dwPlatformId == 2;
}

// Address: 0x10012B76
BOOL InitMultipleMonitorStubs()
{
  BOOL result; // eax
  HMODULE ModuleHandleW; // eax
  HMODULE v2; // edi
  BOOL (__stdcall *GetMonitorInfoW)(HMONITOR, LPMONITORINFO); // eax

  if ( dword_10040994 != 0 )
    return dword_10040988 != 0;
  dword_10040998 = IsPlatformNT();
  ModuleHandleW = GetModuleHandleW(L"USER32");
  v2 = ModuleHandleW;
  if ( ModuleHandleW == nullptr )
    goto LABEL_16;
  GetSystemMetrics_0 = (int (__stdcall *)(int))GetProcAddress(ModuleHandleW, "GetSystemMetrics");
  if ( GetSystemMetrics_0 == nullptr )
    goto LABEL_16;
  MonitorFromWindow = (HMONITOR (__stdcall *)(HWND, DWORD))GetProcAddress(v2, "MonitorFromWindow");
  if ( MonitorFromWindow == nullptr )
    goto LABEL_16;
  MonitorFromRect = (HMONITOR (__stdcall *)(LPCRECT, DWORD))GetProcAddress(v2, "MonitorFromRect");
  if ( MonitorFromRect == nullptr )
    goto LABEL_16;
  MonitorFromPoint = (HMONITOR (__stdcall *)(POINT, DWORD))GetProcAddress(v2, "MonitorFromPoint");
  if ( MonitorFromPoint == nullptr )
    goto LABEL_16;
  EnumDisplayMonitors = (BOOL (__stdcall *)(HDC, LPCRECT, MONITORENUMPROC, LPARAM))GetProcAddress(
                                                                                     v2,
                                                                                     "EnumDisplayMonitors");
  if ( EnumDisplayMonitors == nullptr )
    goto LABEL_16;
  EnumDisplayDevicesW = (BOOL (__stdcall *)(LPCWSTR, DWORD, PDISPLAY_DEVICEW, DWORD))GetProcAddress(
                                                                                       v2,
                                                                                       "EnumDisplayDevicesW");
  if ( EnumDisplayDevicesW == nullptr )
    goto LABEL_16;
  GetMonitorInfoW = (BOOL (__stdcall *)(HMONITOR, LPMONITORINFO))(dword_10040998 != 0
                                                                ? GetProcAddress(v2, "GetMonitorInfoW")
                                                                : GetProcAddress(v2, "GetMonitorInfoA"));
  dword_10040988 = (int)GetMonitorInfoW;
  if ( GetMonitorInfoW != nullptr )
  {
    result = true;
  }
  else
  {
LABEL_16:
    GetSystemMetrics_0 = nullptr;
    MonitorFromWindow = nullptr;
    MonitorFromRect = nullptr;
    MonitorFromPoint = nullptr;
    dword_10040988 = 0;
    EnumDisplayMonitors = nullptr;
    EnumDisplayDevicesW = nullptr;
    result = false;
  }
  dword_10040994 = 1;
  return result;
}

// Address: 0x10012C80
HMONITOR __stdcall xMonitorFromRect(LPCRECT a1, DWORD a2)
{
  if ( InitMultipleMonitorStubs() )
    return MonitorFromRect(a1, a2);
  if ( (a2 & 3) != 0
    || a1->right > 0 && a1->bottom > 0 && a1->left < GetSystemMetrics(0) && a1->top < GetSystemMetrics(1) )
  {
    return (HMONITOR)305397826;
  }
  return nullptr;
}

// Address: 0x10012CD1
HMONITOR __stdcall xMonitorFromWindow(HWND hWnd, DWORD a2)
{
  BOOL WindowPlacement; // eax
  WINDOWPLACEMENT wndpl; // [esp+0h] [ebp-2Ch] BYREF

  if ( InitMultipleMonitorStubs() )
    return MonitorFromWindow(hWnd, a2);
  if ( (a2 & 3) != 0 )
    return (HMONITOR)305397826;
  if ( IsIconic(hWnd) )
    WindowPlacement = GetWindowPlacement(hWnd, &wndpl);
  else
    WindowPlacement = GetWindowRect(hWnd, &wndpl.rcNormalPosition);
  if ( WindowPlacement )
    return xMonitorFromRect(&wndpl.rcNormalPosition, a2);
  else
    return nullptr;
}

// Address: 0x10012D3E
BOOL __stdcall xGetMonitorInfo(HMONITOR a1, LPMONITORINFO a2)
{
  int v2; // edi
  LONG SystemMetrics; // eax
  bool v5; // cf
  RECT pvParam; // [esp+8h] [ebp-10h] BYREF

  if ( InitMultipleMonitorStubs() )
  {
    v2 = dword_10040988(a1, a2);
    if ( v2 != 0 && dword_10040998 == 0 && a2->cbSize >= 0x68 )
      MultiByteToWideChar(0, 0, (LPCCH)&a2[1], -1, (LPWSTR)&a2[1], 32);
    return v2;
  }
  else if ( a1 == (HMONITOR)305397826
         && a2 != nullptr
         && a2->cbSize >= 0x28
         && SystemParametersInfoA(0x30u, 0, &pvParam, 0) )
  {
    a2->rcMonitor.left = 0;
    a2->rcMonitor.top = 0;
    a2->rcMonitor.right = GetSystemMetrics(0);
    SystemMetrics = GetSystemMetrics(1);
    a2->rcWork = pvParam;
    v5 = a2->cbSize < 0x68;
    a2->rcMonitor.bottom = SystemMetrics;
    a2->dwFlags = 1;
    if ( !v5 )
      MultiByteToWideChar(0, 0, "DISPLAY", -1, (LPWSTR)&a2[1], 32);
    return true;
  }
  else
  {
    return false;
  }
}

// Address: 0x10012E04
HRESULT __stdcall ATL::AtlIAccessibleInvokeHelper(
        struct IAccessible *a1,
        int a2,
        const struct _GUID *a3,
        unsigned int a4,
        int lVal,
        DISPID *a6,
        struct tagVARIANT *a7,
        struct tagEXCEPINFO *a8,
        unsigned int *a9)
{
  int v10; // edx
  DISPID *v12; // edi
  VARIANTARG *v13; // ecx
  VARIANTARG *v14; // eax
  DISPID v15; // esi
  int v16; // eax
  int v17; // ecx
  int *v18; // edx
  HRESULT v19; // esi
  int v20; // ecx
  int v21; // eax
  VARIANTARG *p_pvarg; // eax
  VARIANTARG *v23; // eax
  VARIANTARG *v24; // eax
  VARIANTARG *v25; // esi
  int v26; // eax
  VARTYPE vt; // cx
  VARIANTARG *v28; // eax
  int v29; // eax
  VARIANTARG *v30; // esi
  VARTYPE v31; // ax
  LONG p_lVal; // eax
  int v33; // eax
  VARIANTARG *v34; // eax
  bool v35; // zf
  VARIANTARG *v36; // eax
  int v37; // eax
  VARTYPE v38; // [esp-4h] [ebp-54h]
  _BYTE v39[4]; // [esp+8h] [ebp-48h] BYREF
  VARIANTARG *pvarSrc; // [esp+Ch] [ebp-44h]
  VARIANTARG *v41; // [esp+10h] [ebp-40h]
  _DWORD *v42; // [esp+1Ch] [ebp-34h]
  VARIANTARG v43; // [esp+20h] [ebp-30h]
  __int16 v44; // [esp+30h] [ebp-20h] BYREF
  VARIANTARG pvarg; // [esp+40h] [ebp-10h] BYREF
  struct IAccessible *v46; // [esp+58h] [ebp+8h]

  v10 = 0;
  v44 = 0;
  if ( a1 == nullptr )
    return -2147024809;
  v12 = a6;
  if ( a6 == nullptr )
    return -2147352568;
  v13 = (VARIANTARG *)a6[2];
  if ( (unsigned int)v13 > 5 )
    return -2147352562;
  v46 = nullptr;
  if ( a6[3] != 0 )
  {
    a6 = (DISPID *)a6[1];
    do
    {
      v14 = (VARIANTARG *)*a6;
      if ( *a6 >= (unsigned int)v13 )
        return -2147352562;
      v15 = *v12;
      ++a6;
      v46 = (struct IAccessible *)((char *)v46 + 1);
      *(&pvarSrc + (_DWORD)v14) = (VARIANTARG *)(v10 + v15);
      v10 += 16;
    }
    while ( (unsigned int)v46 < v12[3] );
  }
  if ( v46 < (struct IAccessible *)v13 )
  {
    v16 = *v12 + 16 * (_DWORD)v46;
    v17 = (char *)v13 - (char *)v46;
    v18 = (int *)&v39[4 * v17];
    do
    {
      *v18 = v16;
      v16 += 16;
      --v18;
      --v17;
    }
    while ( v17 != 0 );
  }
  v19 = -2147352573;
  if ( a9 == nullptr )
    a9 = (unsigned int *)&lVal;
  if ( a7 == nullptr )
    a7 = (struct tagVARIANT *)&v44;
  VariantInit(&pvarg);
  LOBYTE(v20) = lVal;
  switch ( a2 )
  {
    case -5018:
      if ( v12[2] != 1 )
        goto LABEL_97;
      v21 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG))a1->lpVtbl->accDoDefaultAction)(
              a1,
              *(_DWORD *)&pvarSrc->vt,
              pvarSrc->decVal.Hi32,
              pvarSrc->lVal,
              pvarSrc->cyVal.Hi);
      goto LABEL_95;
    case -5017:
      if ( v12[2] != 2 )
        goto LABEL_97;
      p_pvarg = pvarSrc;
      if ( pvarSrc->vt != 3 )
      {
        v19 = VariantChangeType(&pvarg, pvarSrc, 0, 3u);
        if ( v19 < 0 )
          goto LABEL_59;
        p_pvarg = &pvarg;
      }
      lVal = p_pvarg->lVal;
      v23 = v41;
      if ( v41->vt != 3 )
      {
        v19 = VariantChangeType(&pvarg, v41, 0, 3u);
        if ( v19 < 0 )
          goto LABEL_92;
        v23 = &pvarg;
      }
      v21 = a1->lpVtbl->accHitTest(a1, lVal, v23->lVal, a7);
      goto LABEL_95;
    case -5016:
      if ( v12[2] != 2 )
        goto LABEL_97;
      v24 = pvarSrc;
      if ( pvarSrc->vt != 3 )
      {
        v19 = VariantChangeType(&pvarg, pvarSrc, 0, 3u);
        if ( v19 < 0 )
          goto LABEL_59;
        v24 = &pvarg;
      }
      v21 = ((int (__stdcall *)(struct IAccessible *, LONG, _DWORD, ULONG, LONG, LONG, struct tagVARIANT *))a1->lpVtbl->accNavigate)(
              a1,
              v24->lVal,
              *(_DWORD *)&v41->vt,
              v41->decVal.Hi32,
              v41->lVal,
              v41->cyVal.Hi,
              a7);
      goto LABEL_95;
    case -5015:
      if ( v12[2] != 5 )
        goto LABEL_97;
      v25 = pvarSrc;
      v26 = *(_DWORD *)&pvarg.vt;
      while ( 1 )
      {
        vt = v25->vt;
        if ( (v25->vt & 0x4000) == 0 || (vt & 0xF) == 0 )
          break;
        if ( (vt & 0xC) != 0 )
        {
          VariantClear(v25->pvarVal);
          *v25->bstrVal = 3;
          v26 = v25->lVal + 8;
        }
        else
        {
          v26 = v25->lVal;
        }
      }
      *a9 = 0;
      v21 = ((int (__stdcall *)(struct IAccessible *, int, ULONG, LONG, LONG, _DWORD, _DWORD, _DWORD, _DWORD))a1->lpVtbl->accLocation)(
              a1,
              v26,
              pvarg.decVal.Hi32,
              pvarg.lVal,
              pvarg.cyVal.Hi,
              *v42,
              v42[1],
              v42[2],
              v42[3]);
      goto LABEL_95;
    case -5014:
      if ( v12[2] != 2 )
        goto LABEL_97;
      v28 = pvarSrc;
      if ( pvarSrc->vt != 3 )
      {
        v19 = VariantChangeType(&pvarg, pvarSrc, 0, 3u);
        if ( v19 < 0 )
          goto LABEL_59;
        v28 = &pvarg;
      }
      v21 = ((int (__stdcall *)(struct IAccessible *, LONG, _DWORD, ULONG, LONG, LONG))a1->lpVtbl->accSelect)(
              a1,
              v28->lVal,
              *(_DWORD *)&v41->vt,
              v41->decVal.Hi32,
              v41->lVal,
              v41->cyVal.Hi);
      goto LABEL_95;
    case -5013:
      if ( v12[2] != 1 )
        goto LABEL_97;
      v29 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, ULONG *))a1->lpVtbl->get_accDefaultAction)(
              a1,
              *(_DWORD *)&pvarSrc->vt,
              pvarSrc->decVal.Hi32,
              pvarSrc->lVal,
              pvarSrc->cyVal.Hi,
              &a7->decVal.Lo32);
      goto LABEL_49;
    case -5012:
      v21 = ((int (__fastcall *)(int, int, struct IAccessible *, struct tagVARIANT *))a1->lpVtbl->get_accSelection)(
              v20,
              2,
              a1,
              a7);
      goto LABEL_95;
    case -5011:
      v21 = ((int (__fastcall *)(int, int, struct IAccessible *, struct tagVARIANT *))a1->lpVtbl->get_accFocus)(
              v20,
              2,
              a1,
              a7);
      goto LABEL_95;
    case -5010:
      if ( v12[2] != 1 )
        goto LABEL_97;
      v29 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, ULONG *))a1->lpVtbl->get_accKeyboardShortcut)(
              a1,
              *(_DWORD *)&pvarSrc->vt,
              pvarSrc->decVal.Hi32,
              pvarSrc->lVal,
              pvarSrc->cyVal.Hi,
              &a7->decVal.Lo32);
      goto LABEL_49;
    case -5009:
      if ( v12[2] != 2 )
        goto LABEL_97;
      v30 = pvarSrc;
      v31 = pvarSrc->vt;
      if ( (pvarSrc->vt & 0x4000) == 0 || (v31 & 0xC) != 0 )
      {
        if ( v31 == 16396 )
        {
          VariantClear(pvarSrc->pvarVal);
          *v30->bstrVal = 8;
          p_lVal = v30->lVal + 8;
        }
        else if ( v31 == 16392 )
        {
          p_lVal = pvarSrc->lVal;
        }
        else
        {
          VariantClear(pvarSrc);
          p_lVal = (LONG)&v30->lVal;
          v30->vt = 8;
        }
        v33 = ((int (__stdcall *)(struct IAccessible *, LONG, _DWORD, ULONG, LONG, LONG, ULONG *))a1->lpVtbl->get_accHelpTopic)(
                a1,
                p_lVal,
                *(_DWORD *)&v41->vt,
                v41->decVal.Hi32,
                v41->lVal,
                v41->cyVal.Hi,
                &a7->decVal.Lo32);
LABEL_66:
        v19 = v33;
        if ( v33 >= 0 )
        {
          v38 = 3;
          goto LABEL_103;
        }
      }
      else
      {
        v19 = -2147352571;
LABEL_59:
        *a9 = 0;
      }
      goto LABEL_104;
    case -5008:
      if ( v12[2] != 1 )
        goto LABEL_97;
      v29 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, ULONG *))a1->lpVtbl->get_accHelp)(
              a1,
              *(_DWORD *)&pvarSrc->vt,
              pvarSrc->decVal.Hi32,
              pvarSrc->lVal,
              pvarSrc->cyVal.Hi,
              &a7->decVal.Lo32);
      goto LABEL_49;
    case -5007:
      if ( v12[2] != 1 )
        goto LABEL_97;
      v21 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, struct tagVARIANT *))a1->lpVtbl->get_accState)(
              a1,
              *(_DWORD *)&pvarSrc->vt,
              pvarSrc->decVal.Hi32,
              pvarSrc->lVal,
              pvarSrc->cyVal.Hi,
              a7);
      goto LABEL_95;
    case -5006:
      if ( v12[2] != 1 )
        goto LABEL_97;
      v21 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, struct tagVARIANT *))a1->lpVtbl->get_accRole)(
              a1,
              *(_DWORD *)&pvarSrc->vt,
              pvarSrc->decVal.Hi32,
              pvarSrc->lVal,
              pvarSrc->cyVal.Hi,
              a7);
      goto LABEL_95;
    case -5005:
      if ( v12[2] != 1 )
        goto LABEL_97;
      v29 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, ULONG *))a1->lpVtbl->get_accDescription)(
              a1,
              *(_DWORD *)&pvarSrc->vt,
              pvarSrc->decVal.Hi32,
              pvarSrc->lVal,
              pvarSrc->cyVal.Hi,
              &a7->decVal.Lo32);
      goto LABEL_49;
    case -5004:
      if ( (lVal & 2) != 0 )
      {
        if ( v12[2] == 1 )
        {
          v29 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, ULONG *))a1->lpVtbl->get_accValue)(
                  a1,
                  *(_DWORD *)&pvarSrc->vt,
                  pvarSrc->decVal.Hi32,
                  pvarSrc->lVal,
                  pvarSrc->cyVal.Hi,
                  &a7->decVal.Lo32);
LABEL_49:
          v19 = v29;
          if ( v29 < 0 )
            goto LABEL_104;
          v38 = 8;
LABEL_103:
          a7->vt = v38;
          goto LABEL_104;
        }
        goto LABEL_97;
      }
      if ( (lVal & 4) == 0 )
      {
LABEL_85:
        if ( (lVal & 2) != 0 )
        {
          if ( v12[2] == 1 )
          {
            v29 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, ULONG *))a1->lpVtbl->get_accName)(
                    a1,
                    *(_DWORD *)&pvarSrc->vt,
                    pvarSrc->decVal.Hi32,
                    pvarSrc->lVal,
                    pvarSrc->cyVal.Hi,
                    &a7->decVal.Lo32);
            goto LABEL_49;
          }
          goto LABEL_97;
        }
        if ( (lVal & 4) != 0 )
        {
          if ( v12[2] == 2 )
          {
            v36 = v41;
            v35 = v41->vt == 8;
            v43 = *pvarSrc;
            if ( !v35 )
            {
              v19 = VariantChangeType(&pvarg, v41, 0, 3u);
              if ( v19 < 0 )
                goto LABEL_92;
              v36 = &pvarg;
            }
            v21 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, LONG))a1->lpVtbl->put_accName)(
                    a1,
                    *(_DWORD *)&v43.vt,
                    v43.decVal.Hi32,
                    v43.lVal,
                    v43.cyVal.Hi,
                    v36->lVal);
            goto LABEL_95;
          }
        }
        else
        {
LABEL_96:
          if ( v12[2] == 1 )
          {
            v37 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, ULONG *))a1->lpVtbl->get_accChild)(
                    a1,
                    *(_DWORD *)&pvarSrc->vt,
                    pvarSrc->decVal.Hi32,
                    pvarSrc->lVal,
                    pvarSrc->cyVal.Hi,
                    &a7->decVal.Lo32);
LABEL_101:
            v19 = v37;
            if ( v37 < 0 )
              goto LABEL_104;
            v38 = 9;
            goto LABEL_103;
          }
        }
LABEL_97:
        v19 = -2147352562;
        goto LABEL_104;
      }
      if ( v12[2] != 2 )
        goto LABEL_97;
      v34 = v41;
      v35 = v41->vt == 8;
      v43 = *pvarSrc;
      if ( !v35 )
      {
        v19 = VariantChangeType(&pvarg, v41, 0, 3u);
        if ( v19 >= 0 )
        {
          v34 = &pvarg;
          goto LABEL_84;
        }
LABEL_92:
        *a9 = 1;
        goto LABEL_104;
      }
LABEL_84:
      v21 = ((int (__stdcall *)(struct IAccessible *, _DWORD, ULONG, LONG, LONG, LONG))a1->lpVtbl->put_accValue)(
              a1,
              *(_DWORD *)&v43.vt,
              v43.decVal.Hi32,
              v43.lVal,
              v43.cyVal.Hi,
              v34->lVal);
LABEL_95:
      v19 = v21;
LABEL_104:
      VariantClear(&pvarg);
      return v19;
    case -5003:
      goto LABEL_85;
    case -5002:
      goto LABEL_96;
    case -5001:
      v33 = a1->lpVtbl->get_accChildCount(a1, (int *)&a7->decVal.Lo32);
      goto LABEL_66;
    case -5000:
      v37 = a1->lpVtbl->get_accParent(a1, (IDispatch **)&a7->decVal.Lo32);
      goto LABEL_101;
    default:
      goto LABEL_104;
  }
}

// Address: 0x100133D0
int __stdcall ATL::AtlIAccessibleGetIDsOfNamesHelper(
        const struct _GUID *a1,
        wchar_t **a2,
        unsigned int a3,
        unsigned int a4,
        int *a5)
{
  int v5; // ebx
  unsigned int i; // esi
  char v8; // [esp+Fh] [ebp-1h]

  v5 = 0;
  if ( a3 == 0 )
    return 0;
  while ( 1 )
  {
    v8 = 0;
    for ( i = 0; i < 19; ++i )
    {
      if ( lstrcmpW(a2[v5], off_1003C880[i]) == 0 )
      {
        v8 = 1;
        a5[v5] = dword_1003C830[i];
      }
    }
    if ( v8 == 0 )
      break;
    if ( ++v5 >= a3 )
      return 0;
  }
  return -2147352570;
}

// Address: 0x10013432
CWnd *__thiscall CWnd::CWnd(CWnd *this, HWND a2)
{
  CCmdTarget::CCmdTarget(this);
  *(_DWORD *)this = &CWnd::`vftable';
  *((_DWORD *)this + 12) = &CWnd::XAccessible::`vftable';
  *((_DWORD *)this + 13) = &CWnd::XAccessibleServer::`vftable';
  *((_DWORD *)this + 8) = a2;
  *((_BYTE *)this + 36) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  return this;
}

// Address: 0x1001347D
struct CMenu *__thiscall sub_1001347D(HWND *this)
{
  HMENU Menu; // eax

  Menu = GetMenu(*(this + 8));
  return CMenu::FromHandle(Menu);
}

// Address: 0x1001348D
void __thiscall CWnd::OnFinalRelease(CWnd *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this;
  if ( *((_DWORD *)this + 8) != 0 )
    (*(void (**)(void))(v1 + 96))();
  else
    (*(void (**)(void))(v1 + 284))();
}

// Address: 0x1001349E
LRESULT __thiscall CWnd::DefWindowProcW(CWnd *this, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *v5)(HWND, UINT, WPARAM, LPARAM); // eax

  v5 = *((LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))this + 16);
  if ( v5 != nullptr )
    return CallWindowProcW(v5, *((HWND *)this + 8), Msg, wParam, lParam);
  v5 = *(LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(*(int (__thiscall **)(CWnd *))(*(_DWORD *)this + 248))(this);
  if ( v5 != nullptr )
    return CallWindowProcW(v5, *((HWND *)this + 8), Msg, wParam, lParam);
  else
    return DefWindowProcW(*((HWND *)this + 8), Msg, wParam, lParam);
}

// Address: 0x100134E7
char *__thiscall sub_100134E7(char *this)
{
  return this + 64;
}

// Address: 0x100134EB
int __thiscall CWnd::PreTranslateMessage(CWnd *this, struct tagMSG *a2)
{
  void (__stdcall *v3)(struct tagMSG *, CWnd *); // eax

  v3 = *((void (__stdcall **)(struct tagMSG *, CWnd *))AfxGetModuleState() + 14);
  if ( v3 != nullptr )
    v3(a2, this);
  return 0;
}

// Address: 0x1001350C
int __thiscall CWnd::OnToolHitTest(HWND *this, struct tagPOINT Point, _DWORD *a3)
{
  HWND v4; // eax
  HWND v5; // edi
  int v6; // eax
  int DlgCtrlID; // [esp+8h] [ebp-4h]

  v4 = _AfxChildWindowFromPoint(*(this + 8), Point);
  v5 = v4;
  if ( v4 == nullptr )
    return -1;
  DlgCtrlID = GetDlgCtrlID(v4);
  if ( a3 != nullptr && *a3 >= 0x2Cu )
  {
    v6 = (int)*(this + 8);
    a3[1] |= 1u;
    a3[9] = -1;
    a3[2] = v6;
    a3[3] = v5;
    if ( (SendMessageW(v5, 0x87u, 0, 0) & 0x2000) == 0 )
      a3[1] |= 0x80000002;
  }
  return DlgCtrlID;
}

// Address: 0x1001357F
BOOL __thiscall sub_1001357F(HMODULE *this)
{
  HMODULE v1; // ecx
  BOOL result; // eax

  *this = (HMODULE)&_AFX_HTMLHELP_STATE::`vftable';
  v1 = *(this + 1);
  if ( v1 != nullptr )
    return FreeLibrary(v1);
  return result;
}

// Address: 0x10013594
HMODULE *__thiscall sub_10013594(HMODULE *this, char a2)
{
  sub_1001357F(this);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(this);
  return this;
}

// Address: 0x100135B4
// MFC 3.1-14.0 32bit
_DWORD *__stdcall unknown_libname_40(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  while ( a1[4] != 0 )
  {
    if ( a2 == *a1 && a3 == a1[1] && a4 >= a1[2] && a4 <= a1[3] )
      return a1;
    a1 += 6;
  }
  return nullptr;
}

// Address: 0x100135F6
int __thiscall CWnd::WindowProc(CWnd *this, unsigned int a2, unsigned int a3, int a4)
{
  int v6; // [esp+4h] [ebp-4h] BYREF

  v6 = 0;
  if ( (*(int (__thiscall **)(CWnd *, unsigned int, unsigned int, int, int *))(*(_DWORD *)this + 276))(
         this,
         a2,
         a3,
         a4,
         &v6) == 0 )
    return (*(int (__thiscall **)(CWnd *, unsigned int, unsigned int, int))(*(_DWORD *)this + 280))(this, a2, a3, a4);
  return v6;
}

// Address: 0x1001363C
CCmdUI *__thiscall sub_1001363C(CCmdUI *this)
{
  CCmdUI::CCmdUI(this);
  *(_DWORD *)this = &CTestCmdUI::`vftable';
  *((_DWORD *)this + 10) = 1;
  return this;
}

// Address: 0x10013657
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_46(_DWORD *this, int a2)
{
  *(this + 10) = a2;
  *(this + 6) = 1;
  return a2;
}

// Address: 0x1001366D
int __stdcall sub_1001366D(int a1)
{
  return 0;
}

// Address: 0x10013672
void __thiscall CWnd::CalcWindowRect(CWnd *this, LPRECT lpRect, unsigned int a3)
{
  unsigned int v4; // eax
  DWORD Style; // eax
  DWORD v6; // [esp-4h] [ebp-8h]

  v4 = CWnd::GetExStyle(this);
  if ( a3 == 0 )
    v4 &= ~0x200u;
  v6 = v4;
  Style = CWnd::GetStyle(this);
  AdjustWindowRectEx(lpRect, Style, false, v6);
}

// Address: 0x100136A3
_UNKNOWN **sub_100136A3()
{
  return &off_1002C7E0;
}

// Address: 0x100136A9
int __stdcall CWnd::XAccessible::GetIDsOfNames(
        CWnd::XAccessible *this,
        const struct _GUID *a2,
        wchar_t **a3,
        unsigned int a4,
        unsigned int a5,
        int *a6)
{
  return ATL::AtlIAccessibleGetIDsOfNamesHelper(a2, a3, a4, a5, a6);
}

// Address: 0x100136C6
int __stdcall CWnd::XAccessible::GetTypeInfoCount(CWnd::XAccessible *this, unsigned int *a2)
{
  if ( a2 == nullptr )
    return -2147467261;
  *a2 = 1;
  return 0;
}

// Address: 0x100136E5
int __stdcall sub_100136E5(int a1, int a2, int a3, int a4)
{
  return -2147467263;
}

// Address: 0x100136ED
int __stdcall CWnd::XAccessibleServer::GetEnumVariant(CWnd::XAccessibleServer *this, struct IEnumVARIANT **a2)
{
  if ( a2 == nullptr )
    return -2147467261;
  *a2 = nullptr;
  return -2147467263;
}

// Address: 0x1001370C
HRESULT __thiscall CWnd::EnsureStdObj(CWnd *this)
{
  HRESULT result; // eax

  if ( *((_DWORD *)this + 10) != 0 )
    return 0;
  result = CreateStdAccessibleObject(*((HWND *)this + 8), -4, &stru_1002CC74, (void **)this + 10);
  if ( result >= 0 )
    return 0;
  return result;
}

// Address: 0x1001372B
int __thiscall CWnd::get_accParent(CWnd *this, struct IDispatch **a2)
{
  return (*(int (__stdcall **)(_DWORD, struct IDispatch **))(**((_DWORD **)this + 10) + 28))(*((_DWORD *)this + 10), a2);
}

// Address: 0x10013740
int __thiscall CWnd::get_accChildCount(CWnd *this, int *a2)
{
  return (*(int (__stdcall **)(_DWORD, int *))(**((_DWORD **)this + 10) + 32))(*((_DWORD *)this + 10), a2);
}

// Address: 0x10013755
int __thiscall CWnd::get_accChild(CWnd *this, struct tagVARIANT a2, struct IDispatch **a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG, struct IDispatch **))(**((_DWORD **)this + 10) + 36))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi,
           a3);
}

// Address: 0x1001377A
int __thiscall CWnd::get_accName(CWnd *this, struct tagVARIANT a2, wchar_t **a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG, wchar_t **))(**((_DWORD **)this + 10) + 40))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi,
           a3);
}

// Address: 0x1001379F
int __thiscall CWnd::get_accValue(CWnd *this, struct tagVARIANT a2, wchar_t **a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG, wchar_t **))(**((_DWORD **)this + 10) + 44))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi,
           a3);
}

// Address: 0x100137C4
int __thiscall CWnd::get_accDescription(CWnd *this, struct tagVARIANT a2, wchar_t **a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG, wchar_t **))(**((_DWORD **)this + 10) + 48))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi,
           a3);
}

// Address: 0x100137E9
int __thiscall CWnd::get_accRole(CWnd *this, struct tagVARIANT a2, struct tagVARIANT *a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG, struct tagVARIANT *))(**((_DWORD **)this + 10) + 52))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi,
           a3);
}

// Address: 0x1001380E
int __thiscall CWnd::get_accState(CWnd *this, struct tagVARIANT a2, struct tagVARIANT *a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG, struct tagVARIANT *))(**((_DWORD **)this + 10) + 56))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi,
           a3);
}

// Address: 0x10013833
int __thiscall CWnd::get_accHelp(CWnd *this, struct tagVARIANT a2, wchar_t **a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG, wchar_t **))(**((_DWORD **)this + 10) + 60))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi,
           a3);
}

// Address: 0x10013858
int __thiscall CWnd::get_accHelpTopic(CWnd *this, wchar_t **a2, struct tagVARIANT a3, int *a4)
{
  return (*(int (__stdcall **)(_DWORD, wchar_t **, _DWORD, ULONG, LONG, LONG, int *))(**((_DWORD **)this + 10) + 64))(
           *((_DWORD *)this + 10),
           a2,
           *(_DWORD *)&a3.vt,
           a3.decVal.Hi32,
           a3.lVal,
           a3.cyVal.Hi,
           a4);
}

// Address: 0x10013880
int __thiscall CWnd::get_accKeyboardShortcut(CWnd *this, struct tagVARIANT a2, wchar_t **a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG, wchar_t **))(**((_DWORD **)this + 10) + 68))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi,
           a3);
}

// Address: 0x100138A5
int __thiscall CWnd::get_accFocus(CWnd *this, struct tagVARIANT *a2)
{
  return (*(int (__stdcall **)(_DWORD, struct tagVARIANT *))(**((_DWORD **)this + 10) + 72))(*((_DWORD *)this + 10), a2);
}

// Address: 0x100138BA
int __thiscall CWnd::get_accSelection(CWnd *this, struct tagVARIANT *a2)
{
  return (*(int (__stdcall **)(_DWORD, struct tagVARIANT *))(**((_DWORD **)this + 10) + 76))(*((_DWORD *)this + 10), a2);
}

// Address: 0x100138CF
int __thiscall CWnd::get_accDefaultAction(CWnd *this, struct tagVARIANT a2, wchar_t **a3)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG, wchar_t **))(**((_DWORD **)this + 10) + 80))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi,
           a3);
}

// Address: 0x100138F4
int __thiscall CWnd::accSelect(CWnd *this, int a2, struct tagVARIANT a3)
{
  return (*(int (__stdcall **)(_DWORD, int, _DWORD, ULONG, LONG, LONG))(**((_DWORD **)this + 10) + 84))(
           *((_DWORD *)this + 10),
           a2,
           *(_DWORD *)&a3.vt,
           a3.decVal.Hi32,
           a3.lVal,
           a3.cyVal.Hi);
}

// Address: 0x10013919
int __thiscall CWnd::accLocation(CWnd *this, int *a2, int *a3, int *a4, int *a5, struct tagVARIANT a6)
{
  return (*(int (__stdcall **)(_DWORD, int *, int *, int *, int *, _DWORD, ULONG, LONG, LONG))(**((_DWORD **)this + 10)
                                                                                             + 88))(
           *((_DWORD *)this + 10),
           a2,
           a3,
           a4,
           a5,
           *(_DWORD *)&a6.vt,
           a6.decVal.Hi32,
           a6.lVal,
           a6.cyVal.Hi);
}

// Address: 0x10013947
int __thiscall CWnd::accNavigate(CWnd *this, int a2, struct tagVARIANT a3, struct tagVARIANT *a4)
{
  return (*(int (__stdcall **)(_DWORD, int, _DWORD, ULONG, LONG, LONG, struct tagVARIANT *))(**((_DWORD **)this + 10)
                                                                                           + 92))(
           *((_DWORD *)this + 10),
           a2,
           *(_DWORD *)&a3.vt,
           a3.decVal.Hi32,
           a3.lVal,
           a3.cyVal.Hi,
           a4);
}

// Address: 0x1001396F
int __thiscall CWnd::accHitTest(CWnd *this, int a2, int a3, struct tagVARIANT *a4)
{
  return (*(int (__stdcall **)(_DWORD, int, int, struct tagVARIANT *))(**((_DWORD **)this + 10) + 96))(
           *((_DWORD *)this + 10),
           a2,
           a3,
           a4);
}

// Address: 0x1001398A
int __thiscall CWnd::accDoDefaultAction(CWnd *this, struct tagVARIANT a2)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, ULONG, LONG, LONG))(**((_DWORD **)this + 10) + 100))(
           *((_DWORD *)this + 10),
           *(_DWORD *)&a2.vt,
           a2.decVal.Hi32,
           a2.lVal,
           a2.cyVal.Hi);
}

// Address: 0x100139AC
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_47(_DWORD **this, int a2, int a3, int a4, int a5, int a6)
{
  return (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(**(this + 10) + 104))(*(this + 10), a2, a3, a4, a5, a6);
}

// Address: 0x100139D1
int __thiscall CWnd::SetProxy(CWnd *this, struct IAccessibleProxy *a2)
{
  *((_DWORD *)this + 11) = a2;
  return 0;
}

// Address: 0x100139E2
int __thiscall CWnd::ContinueModal(CWnd *this)
{
  return *((_DWORD *)this + 15) & 0x10;
}

// Address: 0x100139E9
BOOL __thiscall CFrameWnd::IsTracking(CFrameWnd *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 42);
  return v1 != 0 && v1 != 57346 && v1 != 57345;
}

// Address: 0x10013A08
int __thiscall CWnd::CreateControlContainer(CWnd *this, struct COleControlContainer **a2)
{
  if ( a2 == nullptr )
    AfxThrowInvalidArgException();
  *a2 = nullptr;
  return 1;
}

// Address: 0x10013A23
int __thiscall CWnd::CreateControlSite(
        CWnd *this,
        struct COleControlContainer *a2,
        struct COleControlSite **a3,
        unsigned int a4,
        const struct _GUID *a5)
{
  if ( a3 == nullptr )
    AfxThrowInvalidArgException();
  *a3 = nullptr;
  return 1;
}

// Address: 0x10013A3E
char **sub_10013A3E()
{
  return &off_1002C7E8;
}

// Address: 0x10013A44
int __stdcall sub_10013A44(int (__stdcall ***a1)(_DWORD, void *, int), int a2)
{
  return (**a1)(a1, &unk_1002CC84, a2);
}

// Address: 0x10013A5D
unsigned __int16 __cdecl AfxCtxRegisterClassW(WNDCLASSW *lpWndClass)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  BOOL v3; // esi
  DWORD LastError; // edi
  int v5; // [esp+10h] [ebp-24h]
  ULONG_PTR v6; // [esp+14h] [ebp-20h] BYREF
  int v7; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v6 = 0;
  ModuleState = AfxGetModuleState();
  v5 = AfxActivateActCtxWrapper(*((void **)ModuleState + 32), &v6);
  v7 = 0;
  if ( v5 == 0 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  v7 = RegisterClassW(lpWndClass);
  ms_exc.registration.TryLevel = -2;
  if ( v5 != 2 )
  {
    v3 = (_WORD)v7 == 0;
    if ( (_WORD)v7 != 0 )
      LastError = 0;
    else
      LastError = GetLastError();
    sub_1000F87C(0, v6);
    if ( v3 )
      SetLastError(LastError);
  }
  return v7;
}

// Address: 0x10013AEF
BOOL __cdecl AfxCtxGetClassInfoW(HINSTANCE hInstance, LPCWSTR lpClassName, LPWNDCLASSW lpWndClass)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  BOOL v5; // esi
  DWORD LastError; // edi
  int v7; // [esp+10h] [ebp-24h]
  ULONG_PTR v8; // [esp+14h] [ebp-20h] BYREF
  BOOL ClassInfoW; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v8 = 0;
  ModuleState = AfxGetModuleState();
  v7 = AfxActivateActCtxWrapper(*((void **)ModuleState + 32), &v8);
  ClassInfoW = false;
  if ( v7 == 0 )
    return false;
  ms_exc.registration.TryLevel = 0;
  ClassInfoW = GetClassInfoW(hInstance, lpClassName, lpWndClass);
  ms_exc.registration.TryLevel = -2;
  if ( v7 != 2 )
  {
    v5 = !ClassInfoW;
    if ( ClassInfoW )
      LastError = 0;
    else
      LastError = GetLastError();
    sub_1000F87C(0, v8);
    if ( v5 )
      SetLastError(LastError);
  }
  return ClassInfoW;
}

// Address: 0x10013B83
BOOL __cdecl AfxCtxGetClassInfoExW(HINSTANCE hInstance, LPCWSTR lpszClass, LPWNDCLASSEXW lpwcx)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  BOOL v5; // esi
  DWORD LastError; // edi
  int v7; // [esp+10h] [ebp-24h]
  ULONG_PTR v8; // [esp+14h] [ebp-20h] BYREF
  BOOL ClassInfo; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v8 = 0;
  ModuleState = AfxGetModuleState();
  v7 = AfxActivateActCtxWrapper(*((void **)ModuleState + 32), &v8);
  ClassInfo = false;
  if ( v7 == 0 )
    return false;
  ms_exc.registration.TryLevel = 0;
  ClassInfo = GetClassInfoExW(hInstance, lpszClass, lpwcx);
  ms_exc.registration.TryLevel = -2;
  if ( v7 != 2 )
  {
    v5 = !ClassInfo;
    if ( ClassInfo )
      LastError = 0;
    else
      LastError = GetLastError();
    sub_1000F87C(0, v8);
    if ( v5 )
      SetLastError(LastError);
  }
  return ClassInfo;
}

// Address: 0x10013C17
HWND __cdecl AfxCtxCreateWindowExW(
        DWORD dwExStyle,
        LPCWSTR lpClassName,
        LPCWSTR lpWindowName,
        DWORD dwStyle,
        int X,
        int Y,
        int nWidth,
        int nHeight,
        HWND hWndParent,
        HMENU hMenu,
        HINSTANCE hInstance,
        void *lpParam)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  BOOL v14; // esi
  DWORD LastError; // edi
  int v16; // [esp+10h] [ebp-24h]
  ULONG_PTR v17; // [esp+14h] [ebp-20h] BYREF
  HWND Window; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v17 = 0;
  ModuleState = AfxGetModuleState();
  v16 = AfxActivateActCtxWrapper(*((void **)ModuleState + 32), &v17);
  Window = nullptr;
  if ( v16 == 0 )
    return nullptr;
  ms_exc.registration.TryLevel = 0;
  Window = CreateWindowExW(
             dwExStyle,
             lpClassName,
             lpWindowName,
             dwStyle,
             X,
             Y,
             nWidth,
             nHeight,
             hWndParent,
             hMenu,
             hInstance,
             lpParam);
  ms_exc.registration.TryLevel = -2;
  if ( v16 != 2 )
  {
    v14 = Window == nullptr;
    if ( Window != nullptr )
      LastError = 0;
    else
      LastError = GetLastError();
    sub_1000F87C(0, v17);
    if ( v14 )
      SetLastError(LastError);
  }
  return Window;
}

// Address: 0x10013CC6
HINSTANCE __cdecl AfxCtxLoadLibraryA(LPCSTR lpLibFileName)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  BOOL v3; // esi
  DWORD LastError; // edi
  int v5; // [esp+10h] [ebp-24h]
  ULONG_PTR v6; // [esp+14h] [ebp-20h] BYREF
  HMODULE LibraryA; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v6 = 0;
  ModuleState = AfxGetModuleState();
  v5 = AfxActivateActCtxWrapper(*((void **)ModuleState + 32), &v6);
  LibraryA = nullptr;
  if ( v5 == 0 )
    return nullptr;
  ms_exc.registration.TryLevel = 0;
  LibraryA = LoadLibraryA(lpLibFileName);
  ms_exc.registration.TryLevel = -2;
  if ( v5 != 2 )
  {
    v3 = LibraryA == nullptr;
    if ( LibraryA != nullptr )
      LastError = 0;
    else
      LastError = GetLastError();
    sub_1000F87C(0, v6);
    if ( v3 )
      SetLastError(LastError);
  }
  return LibraryA;
}

// Address: 0x10013D54
UINT __thiscall CMenu::GetMenuItemID(HMENU *this, int nPos)
{
  return GetMenuItemID(*(this + 1), nPos);
}

// Address: 0x10013D69
struct CMenu *__thiscall CMenu::GetSubMenu(HMENU *this, int nPos)
{
  HMENU SubMenu; // eax

  SubMenu = GetSubMenu(*(this + 1), nPos);
  return CMenu::FromHandle(SubMenu);
}

// Address: 0x10013D84
void __thiscall CWnd::GetWindowRect(HWND *this, struct tagRECT *lpRect)
{
  GetWindowRect(*(this + 8), lpRect);
}

// Address: 0x10013D99
void __stdcall nullsub_4(int a1)
{
  ;
}

// Address: 0x10013D9C
void __thiscall CWnd::BeginModalState(HWND *this)
{
  EnableWindow(*(this + 8), false);
}

// Address: 0x10013DA8
void __thiscall CWnd::EndModalState(HWND *this)
{
  EnableWindow(*(this + 8), true);
}

// Address: 0x10013DB4
CWaitCursor *__thiscall CWaitCursor::CWaitCursor(CWaitCursor *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  ModuleState = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*((CCmdTarget **)ModuleState + 1));
  return this;
}

// Address: 0x10013DCA
void __thiscall CInternalGlobalLock::Lock(CInternalGlobalLock *this, int a2)
{
  unsigned int v2; // ecx

  if ( a2 != 0x7FFFFFFF )
  {
    if ( *(_DWORD *)this != 0x7FFFFFFF && *(_DWORD *)this != a2 )
LABEL_4:
      AfxThrowInvalidArgException();
    *(_DWORD *)this = a2;
  }
  v2 = *(_DWORD *)this;
  if ( v2 == 0x7FFFFFFF )
    goto LABEL_4;
  AfxLockGlobals(v2);
}

// Address: 0x10013DFE
void __thiscall CInternalGlobalLock::Unlock(CInternalGlobalLock *this)
{
  if ( *(_DWORD *)this != 0x7FFFFFFF )
  {
    AfxUnlockGlobals(*(_DWORD *)this);
    *(_DWORD *)this = 0x7FFFFFFF;
  }
}

// Address: 0x10013E1A
CWnd *__thiscall CWnd::CWnd(CWnd *this)
{
  CCmdTarget::CCmdTarget(this);
  *(_DWORD *)this = &CWnd::`vftable';
  *((_DWORD *)this + 12) = &CWnd::XAccessible::`vftable';
  *((_DWORD *)this + 13) = &CWnd::XAccessibleServer::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 36) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  return this;
}

// Address: 0x10013E5F
void __stdcall _AfxPreInitDialog(HWND *a1, struct tagRECT *a2, unsigned int *a3)
{
  CWnd::GetWindowRect(a1, a2);
  *a3 = CWnd::GetStyle((CWnd *)a1);
}

// Address: 0x10013E80
BOOL __thiscall CWnd::SetMenu(HWND *this, struct CMenu *hMenu)
{
  HMENU v2; // eax

  v2 = (HMENU)hMenu;
  if ( hMenu != nullptr )
    v2 = *((HMENU *)hMenu + 1);
  return SetMenu(*(this + 8), v2);
}

// Address: 0x10013E9D
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_48(void *this, int a2, int a3, int a4, int a5, _DWORD *a6, int a7, int a8, int a9)
{
  int v9; // edi

  if ( a7 != 0 )
    v9 = *(_DWORD *)(a7 + 32);
  else
    v9 = 0;
  return (*(int (__thiscall **)(void *, int, int, int, int, _DWORD, _DWORD, int, int, int, int, int))(*(_DWORD *)this + 92))(
           this,
           a2,
           a3,
           a4,
           a5,
           *a6,
           a6[1],
           a6[2] - *a6,
           a6[3] - a6[1],
           v9,
           a8,
           a9);
}

// Address: 0x10013EE8
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_49(void *this, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  int v8; // edi

  if ( a6 != 0 )
    v8 = *(_DWORD *)(a6 + 32);
  else
    v8 = 0;
  return (*(int (__thiscall **)(void *, _DWORD, int, int, int, _DWORD, _DWORD, int, int, int, int, int))(*(_DWORD *)this + 92))(
           this,
           0,
           a2,
           a3,
           a4 | 0x40000000,
           *a5,
           a5[1],
           a5[2] - *a5,
           a5[3] - a5[1],
           v8,
           a7,
           a8);
}

// Address: 0x10013F38
static void __stdcall CWnd::CancelToolTips(int a1)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  int v2; // eax
  HWND v3; // eax
  int v4; // esi

  ModuleThreadState = AfxGetModuleThreadState();
  v2 = *((_DWORD *)ModuleThreadState + 15);
  if ( v2 != 0 )
  {
    v3 = *(HWND *)(v2 + 32);
    if ( v3 != nullptr )
      SendMessageW(v3, 0x401u, 0, 0);
  }
  v4 = *((_DWORD *)ModuleThreadState + 20);
  if ( a1 != 0 && v4 != 0 && GetKeyState(1) >= 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 376))(v4, -1);
}

// Address: 0x10013F8E
struct CMenu *__stdcall _AfxFindPopupMenuFromID(HMENU *a1, unsigned int a2)
{
  int v3; // edi
  struct CMenu *SubMenu; // eax
  struct CMenu *result; // eax
  CMenu *MenuItemCount; // [esp+14h] [ebp+8h]

  if ( a1 == nullptr )
    AfxThrowInvalidArgException();
  v3 = 0;
  MenuItemCount = (CMenu *)GetMenuItemCount(a1[1]);
  if ( (int)MenuItemCount > 0 )
  {
    do
    {
      SubMenu = CMenu::GetSubMenu(a1, v3);
      if ( SubMenu != nullptr )
      {
        if ( *((_DWORD *)SubMenu + 1) == a2 )
          return CMenu::FromHandlePermanent(a1[1]);
        result = _AfxFindPopupMenuFromID(SubMenu, a2);
        if ( result != nullptr )
          return result;
      }
      else if ( CMenu::GetMenuItemID(a1, v3) == a2 )
      {
        return CMenu::FromHandlePermanent(a1[1]);
      }
      ++v3;
    }
    while ( v3 < (int)MenuItemCount );
  }
  return nullptr;
}

// Address: 0x10013FFA
void __thiscall CWnd::WinHelpInternal(CWnd *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax

  if ( *(_DWORD *)(*((_DWORD *)AfxGetModuleState() + 1) + 108) == 1 )
  {
    v4 = a3;
    switch ( a3 )
    {
      case 1u:
        v4 = 15;
        break;
      case 3u:
        v4 = 1;
        break;
      case 0xBu:
        v4 = 0;
        break;
      default:
        break;
    }
    (*(void (__thiscall **)(CWnd *, unsigned int, unsigned int))(*(_DWORD *)this + 128))(this, a2, v4);
  }
  else
  {
    (*(void (__thiscall **)(CWnd *, unsigned int, unsigned int))(*(_DWORD *)this + 124))(this, a2, a3);
  }
}

// Address: 0x10014050
int __thiscall CWnd::OnActivateTopLevel(CWnd *this, __int16 a2, int a3)
{
  int v3; // eax

  if ( a2 == 0 )
  {
    v3 = *((_DWORD *)AfxGetModuleThreadState() + 18);
    if ( v3 != 0 && (*(_DWORD *)(v3 + 4) & 0x40000000) == 0 )
      CWnd::CancelToolTips(1);
  }
  return 0;
}

// Address: 0x1001407E
LONG __stdcall CWnd::XAccessible::AddRef(struct AFX_MODULE_STATE **this)
{
  LONG v1; // eax
  LONG v2; // esi
  ULONG_PTR v4[4]; // [esp+10h] [ebp-14h] BYREF
  int v5; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, *(this - 5));
  v5 = 0;
  v1 = CCmdTarget::ExternalAddRef((CCmdTarget *)(this - 12));
  v5 = -1;
  v2 = v1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v2;
}

// Address: 0x100140C6
LONG __stdcall sub_100140C6(int a1)
{
  LONG v1; // eax
  LONG v2; // esi
  ULONG_PTR v4[4]; // [esp+10h] [ebp-14h] BYREF
  int v5; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, *(struct AFX_MODULE_STATE **)(a1 - 20));
  v5 = 0;
  v1 = CCmdTarget::ExternalRelease((CCmdTarget *)(a1 - 48));
  v5 = -1;
  v2 = v1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v2;
}

// Address: 0x1001410E
int __stdcall CWnd::XAccessible::QueryInterface(struct AFX_MODULE_STATE **this, struct _GUID *a2, void **a3)
{
  int Interface; // eax
  int v4; // esi
  ULONG_PTR v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v6, *(this - 5));
  v7 = 0;
  Interface = CCmdTarget::ExternalQueryInterface((CCmdTarget *)(this - 12), a2, a3);
  v7 = -1;
  v4 = Interface;
  if ( v6[1] != 0 )
    sub_1000F87C(0, v6[0]);
  return v4;
}

// Address: 0x1001415C
HRESULT __stdcall CWnd::XAccessible::Invoke(
        struct IAccessible *this,
        int a2,
        const struct _GUID *a3,
        unsigned int a4,
        int a5,
        DISPID *a6,
        struct tagVARIANT *a7,
        struct tagEXCEPINFO *a8,
        unsigned int *a9)
{
  HRESULT v9; // eax
  HRESULT v10; // esi
  ULONG_PTR v12[4]; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v12, *((struct AFX_MODULE_STATE **)this - 5));
  v13 = 0;
  v9 = ATL::AtlIAccessibleInvokeHelper(this, a2, a3, a4, a5, a6, a7, a8, a9);
  v13 = -1;
  v10 = v9;
  if ( v12[1] != 0 )
    sub_1000F87C(0, v12[0]);
  return v10;
}

// Address: 0x100141B8
int __stdcall CWnd::XAccessible::get_accParent(struct AFX_MODULE_STATE **this, struct IDispatch **a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  ULONG_PTR v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v6, *(this - 5));
  v2 = (int)*(this - 12);
  v7 = 0;
  v3 = (*(int (__thiscall **)(char *, struct IDispatch **))(v2 + 148))((char *)this - 48, a2);
  v7 = -1;
  v4 = v3;
  if ( v6[1] != 0 )
    sub_1000F87C(0, v6[0]);
  return v4;
}

// Address: 0x10014206
int __stdcall CWnd::XAccessible::get_accChildCount(struct AFX_MODULE_STATE **this, int *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  ULONG_PTR v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v6, *(this - 5));
  v2 = (int)*(this - 12);
  v7 = 0;
  v3 = (*(int (__thiscall **)(char *, int *))(v2 + 152))((char *)this - 48, a2);
  v7 = -1;
  v4 = v3;
  if ( v6[1] != 0 )
    sub_1000F87C(0, v6[0]);
  return v4;
}

// Address: 0x10014254
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_50(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  ULONG_PTR v10[4]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, *(struct AFX_MODULE_STATE **)(a1 - 20));
  v6 = *(_DWORD *)(a1 - 48);
  v11 = 0;
  v7 = (*(int (__thiscall **)(int, int, int, int, int, int))(v6 + 156))(a1 - 48, a2, a3, a4, a5, a6);
  v11 = -1;
  v8 = v7;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v8;
}

// Address: 0x100142AE
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_51(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  ULONG_PTR v10[4]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, *(struct AFX_MODULE_STATE **)(a1 - 20));
  v6 = *(_DWORD *)(a1 - 48);
  v11 = 0;
  v7 = (*(int (__thiscall **)(int, int, int, int, int, int))(v6 + 160))(a1 - 48, a2, a3, a4, a5, a6);
  v11 = -1;
  v8 = v7;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v8;
}

// Address: 0x10014308
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_52(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  ULONG_PTR v10[4]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, *(struct AFX_MODULE_STATE **)(a1 - 20));
  v6 = *(_DWORD *)(a1 - 48);
  v11 = 0;
  v7 = (*(int (__thiscall **)(int, int, int, int, int, int))(v6 + 164))(a1 - 48, a2, a3, a4, a5, a6);
  v11 = -1;
  v8 = v7;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v8;
}

// Address: 0x10014362
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_53(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  ULONG_PTR v10[4]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, *(struct AFX_MODULE_STATE **)(a1 - 20));
  v6 = *(_DWORD *)(a1 - 48);
  v11 = 0;
  v7 = (*(int (__thiscall **)(int, int, int, int, int, int))(v6 + 168))(a1 - 48, a2, a3, a4, a5, a6);
  v11 = -1;
  v8 = v7;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v8;
}

// Address: 0x100143BC
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_54(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  ULONG_PTR v10[4]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, *(struct AFX_MODULE_STATE **)(a1 - 20));
  v6 = *(_DWORD *)(a1 - 48);
  v11 = 0;
  v7 = (*(int (__thiscall **)(int, int, int, int, int, int))(v6 + 172))(a1 - 48, a2, a3, a4, a5, a6);
  v11 = -1;
  v8 = v7;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v8;
}

// Address: 0x10014416
int __stdcall CWnd::XAccessible::get_accState(
        struct AFX_MODULE_STATE **this,
        struct tagVARIANT a2,
        struct tagVARIANT *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  ULONG_PTR v7[4]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v7, *(this - 5));
  v3 = (int)*(this - 12);
  v8 = 0;
  v4 = (*(int (__thiscall **)(char *, _DWORD, ULONG, LONG, LONG, struct tagVARIANT *))(v3 + 176))(
         (char *)this - 48,
         *(_DWORD *)&a2.vt,
         a2.decVal.Hi32,
         a2.lVal,
         a2.cyVal.Hi,
         a3);
  v8 = -1;
  v5 = v4;
  if ( v7[1] != 0 )
    sub_1000F87C(0, v7[0]);
  return v5;
}

// Address: 0x10014470
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_55(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  ULONG_PTR v10[4]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, *(struct AFX_MODULE_STATE **)(a1 - 20));
  v6 = *(_DWORD *)(a1 - 48);
  v11 = 0;
  v7 = (*(int (__thiscall **)(int, int, int, int, int, int))(v6 + 180))(a1 - 48, a2, a3, a4, a5, a6);
  v11 = -1;
  v8 = v7;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v8;
}

// Address: 0x100144CA
int __stdcall CWnd::XAccessible::get_accHelpTopic(
        struct AFX_MODULE_STATE **this,
        wchar_t **a2,
        struct tagVARIANT a3,
        int *a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // esi
  ULONG_PTR v8[4]; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v8, *(this - 5));
  v4 = (int)*(this - 12);
  v9 = 0;
  v5 = (*(int (__thiscall **)(char *, wchar_t **, _DWORD, ULONG, LONG, LONG, int *))(v4 + 184))(
         (char *)this - 48,
         a2,
         *(_DWORD *)&a3.vt,
         a3.decVal.Hi32,
         a3.lVal,
         a3.cyVal.Hi,
         a4);
  v9 = -1;
  v6 = v5;
  if ( v8[1] != 0 )
    sub_1000F87C(0, v8[0]);
  return v6;
}

// Address: 0x10014527
int __stdcall CWnd::XAccessible::get_accKeyboardShortcut(
        struct AFX_MODULE_STATE **this,
        struct tagVARIANT a2,
        wchar_t **a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  ULONG_PTR v7[4]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v7, *(this - 5));
  v3 = (int)*(this - 12);
  v8 = 0;
  v4 = (*(int (__thiscall **)(char *, _DWORD, ULONG, LONG, LONG, wchar_t **))(v3 + 188))(
         (char *)this - 48,
         *(_DWORD *)&a2.vt,
         a2.decVal.Hi32,
         a2.lVal,
         a2.cyVal.Hi,
         a3);
  v8 = -1;
  v5 = v4;
  if ( v7[1] != 0 )
    sub_1000F87C(0, v7[0]);
  return v5;
}

// Address: 0x10014581
int __stdcall CWnd::XAccessible::get_accFocus(struct AFX_MODULE_STATE **this, struct tagVARIANT *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  ULONG_PTR v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v6, *(this - 5));
  v2 = (int)*(this - 12);
  v7 = 0;
  v3 = (*(int (__thiscall **)(char *, struct tagVARIANT *))(v2 + 192))((char *)this - 48, a2);
  v7 = -1;
  v4 = v3;
  if ( v6[1] != 0 )
    sub_1000F87C(0, v6[0]);
  return v4;
}

// Address: 0x100145CF
int __stdcall CWnd::XAccessible::get_accSelection(struct AFX_MODULE_STATE **this, struct tagVARIANT *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  ULONG_PTR v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v6, *(this - 5));
  v2 = (int)*(this - 12);
  v7 = 0;
  v3 = (*(int (__thiscall **)(char *, struct tagVARIANT *))(v2 + 196))((char *)this - 48, a2);
  v7 = -1;
  v4 = v3;
  if ( v6[1] != 0 )
    sub_1000F87C(0, v6[0]);
  return v4;
}

// Address: 0x1001461D
int __stdcall CWnd::XAccessible::get_accDefaultAction(
        struct AFX_MODULE_STATE **this,
        struct tagVARIANT a2,
        wchar_t **a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  ULONG_PTR v7[4]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v7, *(this - 5));
  v3 = (int)*(this - 12);
  v8 = 0;
  v4 = (*(int (__thiscall **)(char *, _DWORD, ULONG, LONG, LONG, wchar_t **))(v3 + 200))(
         (char *)this - 48,
         *(_DWORD *)&a2.vt,
         a2.decVal.Hi32,
         a2.lVal,
         a2.cyVal.Hi,
         a3);
  v8 = -1;
  v5 = v4;
  if ( v7[1] != 0 )
    sub_1000F87C(0, v7[0]);
  return v5;
}

// Address: 0x10014677
int __stdcall CWnd::XAccessible::accSelect(struct AFX_MODULE_STATE **this, int a2, struct tagVARIANT a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  ULONG_PTR v7[4]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v7, *(this - 5));
  v3 = (int)*(this - 12);
  v8 = 0;
  v4 = (*(int (__thiscall **)(char *, int, _DWORD, ULONG, LONG, LONG))(v3 + 204))(
         (char *)this - 48,
         a2,
         *(_DWORD *)&a3.vt,
         a3.decVal.Hi32,
         a3.lVal,
         a3.cyVal.Hi);
  v8 = -1;
  v5 = v4;
  if ( v7[1] != 0 )
    sub_1000F87C(0, v7[0]);
  return v5;
}

// Address: 0x100146D1
int __stdcall CWnd::XAccessible::accLocation(
        struct AFX_MODULE_STATE **this,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        struct tagVARIANT a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  ULONG_PTR v10[4]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v10, *(this - 5));
  v6 = (int)*(this - 12);
  v11 = 0;
  v7 = (*(int (__thiscall **)(char *, int *, int *, int *, int *, _DWORD, ULONG, LONG, LONG))(v6 + 208))(
         (char *)this - 48,
         a2,
         a3,
         a4,
         a5,
         *(_DWORD *)&a6.vt,
         a6.decVal.Hi32,
         a6.lVal,
         a6.cyVal.Hi);
  v11 = -1;
  v8 = v7;
  if ( v10[1] != 0 )
    sub_1000F87C(0, v10[0]);
  return v8;
}

// Address: 0x10014734
int __stdcall CWnd::XAccessible::accNavigate(
        struct AFX_MODULE_STATE **this,
        int a2,
        struct tagVARIANT a3,
        struct tagVARIANT *a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // esi
  ULONG_PTR v8[4]; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v8, *(this - 5));
  v4 = (int)*(this - 12);
  v9 = 0;
  v5 = (*(int (__thiscall **)(char *, int, _DWORD, ULONG, LONG, LONG, struct tagVARIANT *))(v4 + 212))(
         (char *)this - 48,
         a2,
         *(_DWORD *)&a3.vt,
         a3.decVal.Hi32,
         a3.lVal,
         a3.cyVal.Hi,
         a4);
  v9 = -1;
  v6 = v5;
  if ( v8[1] != 0 )
    sub_1000F87C(0, v8[0]);
  return v6;
}

// Address: 0x10014791
int __stdcall CWnd::XAccessible::accHitTest(struct AFX_MODULE_STATE **this, int a2, int a3, struct tagVARIANT *a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // esi
  ULONG_PTR v8[4]; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v8, *(this - 5));
  v4 = (int)*(this - 12);
  v9 = 0;
  v5 = (*(int (__thiscall **)(char *, int, int, struct tagVARIANT *))(v4 + 216))((char *)this - 48, a2, a3, a4);
  v9 = -1;
  v6 = v5;
  if ( v8[1] != 0 )
    sub_1000F87C(0, v8[0]);
  return v6;
}

// Address: 0x100147E5
int __stdcall CWnd::XAccessible::accDoDefaultAction(struct AFX_MODULE_STATE **this, struct tagVARIANT a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  ULONG_PTR v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v6, *(this - 5));
  v2 = (int)*(this - 12);
  v7 = 0;
  v3 = (*(int (__thiscall **)(char *, _DWORD, ULONG, LONG, LONG))(v2 + 220))(
         (char *)this - 48,
         *(_DWORD *)&a2.vt,
         a2.decVal.Hi32,
         a2.lVal,
         a2.cyVal.Hi);
  v7 = -1;
  v4 = v3;
  if ( v6[1] != 0 )
    sub_1000F87C(0, v6[0]);
  return v4;
}

// Address: 0x1001483C
int __stdcall CWnd::XAccessible::put_accName(struct AFX_MODULE_STATE **this, struct tagVARIANT a2, wchar_t *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  ULONG_PTR v7[4]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v7, *(this - 5));
  v3 = (int)*(this - 12);
  v8 = 0;
  v4 = (*(int (__thiscall **)(char *, _DWORD, ULONG, LONG, LONG, wchar_t *))(v3 + 224))(
         (char *)this - 48,
         *(_DWORD *)&a2.vt,
         a2.decVal.Hi32,
         a2.lVal,
         a2.cyVal.Hi,
         a3);
  v8 = -1;
  v5 = v4;
  if ( v7[1] != 0 )
    sub_1000F87C(0, v7[0]);
  return v5;
}

// Address: 0x10014896
int __stdcall CWnd::XAccessible::put_accValue(struct AFX_MODULE_STATE **this, struct tagVARIANT a2, wchar_t *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  ULONG_PTR v7[4]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v7, *(this - 5));
  v3 = (int)*(this - 12);
  v8 = 0;
  v4 = (*(int (__thiscall **)(char *, _DWORD, ULONG, LONG, LONG, wchar_t *))(v3 + 228))(
         (char *)this - 48,
         *(_DWORD *)&a2.vt,
         a2.decVal.Hi32,
         a2.lVal,
         a2.cyVal.Hi,
         a3);
  v8 = -1;
  v5 = v4;
  if ( v7[1] != 0 )
    sub_1000F87C(0, v7[0]);
  return v5;
}

// Address: 0x100148F0
LONG __stdcall CWnd::XAccessibleServer::AddRef(struct AFX_MODULE_STATE **this)
{
  LONG v1; // eax
  LONG v2; // esi
  ULONG_PTR v4[4]; // [esp+10h] [ebp-14h] BYREF
  int v5; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, *(this - 6));
  v5 = 0;
  v1 = CCmdTarget::ExternalAddRef((CCmdTarget *)(this - 13));
  v5 = -1;
  v2 = v1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v2;
}

// Address: 0x10014938
LONG __stdcall sub_10014938(int a1)
{
  LONG v1; // eax
  LONG v2; // esi
  ULONG_PTR v4[4]; // [esp+10h] [ebp-14h] BYREF
  int v5; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, *(struct AFX_MODULE_STATE **)(a1 - 24));
  v5 = 0;
  v1 = CCmdTarget::ExternalRelease((CCmdTarget *)(a1 - 52));
  v5 = -1;
  v2 = v1;
  if ( v4[1] != 0 )
    sub_1000F87C(0, v4[0]);
  return v2;
}

// Address: 0x10014980
int __stdcall CWnd::XAccessibleServer::QueryInterface(struct AFX_MODULE_STATE **this, struct _GUID *a2, void **a3)
{
  int Interface; // eax
  int v4; // esi
  ULONG_PTR v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v6, *(this - 6));
  v7 = 0;
  Interface = CCmdTarget::ExternalQueryInterface((CCmdTarget *)(this - 13), a2, a3);
  v7 = -1;
  v4 = Interface;
  if ( v6[1] != 0 )
    sub_1000F87C(0, v6[0]);
  return v4;
}

// Address: 0x100149CE
int __stdcall CWnd::XAccessibleServer::SetProxy(struct AFX_MODULE_STATE **this, struct IAccessibleProxy *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  ULONG_PTR v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v6, *(this - 6));
  v2 = (int)*(this - 13);
  v7 = 0;
  v3 = (*(int (__thiscall **)(char *, struct IAccessibleProxy *))(v2 + 232))((char *)this - 52, a2);
  v7 = -1;
  v4 = v3;
  if ( v6[1] != 0 )
    sub_1000F87C(0, v6[0]);
  return v4;
}

// Address: 0x10014A1C
int __stdcall CWnd::XAccessibleServer::GetHWND(struct AFX_MODULE_STATE **this, HWND *a2)
{
  bool v3; // zf
  ULONG_PTR v4[2]; // [esp+4h] [ebp-8h] BYREF

  if ( a2 == nullptr )
    return -2147467261;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v4, *(this - 6));
  v3 = v4[1] == 0;
  *a2 = (HWND)*(this - 5);
  if ( !v3 )
    sub_1000F87C(0, v4[0]);
  return 0;
}

// Address: 0x10014A6B
void __thiscall CWnd::CenterWindow(HWND *this, struct CWnd *a2)
{
  HWND v3; // edi
  HWND Parent; // eax
  LRESULT v5; // eax
  LONG WindowLongW; // eax
  HWND MainWnd; // eax
  HMONITOR v8; // eax
  HMONITOR v9; // eax
  HWND v10; // ebx
  LONG left; // ecx
  LONG top; // esi
  struct tagMONITORINFO v13; // [esp+8h] [ebp-60h] BYREF
  struct tagRECT Rect; // [esp+30h] [ebp-38h] BYREF
  struct tagRECT rcDst; // [esp+40h] [ebp-28h] BYREF
  struct tagRECT v16; // [esp+50h] [ebp-18h] BYREF
  CWnd *v17; // [esp+60h] [ebp-8h]
  unsigned int Style; // [esp+64h] [ebp-4h]

  v17 = (CWnd *)this;
  Style = CWnd::GetStyle((CWnd *)this);
  if ( a2 != nullptr )
  {
    v3 = *((HWND *)a2 + 8);
  }
  else
  {
    if ( (Style & 0x40000000) != 0 )
      Parent = GetParent(*(this + 8));
    else
      Parent = GetWindow(*(this + 8), 4u);
    v3 = Parent;
    if ( Parent != nullptr )
    {
      v5 = SendMessageW(Parent, 0x36Bu, 0, 0);
      if ( v5 != 0 )
        v3 = (HWND)v5;
    }
  }
  GetWindowRect(*(this + 8), &Rect);
  if ( (Style & 0x40000000) != 0 )
  {
    v10 = GetParent(*(this + 8));
    GetClientRect(v10, &v16);
    GetClientRect(v3, &rcDst);
    MapWindowPoints(v3, v10, (LPPOINT)&rcDst, 2u);
  }
  else
  {
    if ( v3 != nullptr )
    {
      WindowLongW = GetWindowLongW(v3, -16);
      if ( ((unsigned int)&_ImageBase & WindowLongW) == 0 || (WindowLongW & 0x20000000) != 0 )
        v3 = nullptr;
    }
    v13.cbSize = 40;
    if ( v3 != nullptr )
    {
      GetWindowRect(v3, &rcDst);
      v9 = xMonitorFromWindow(v3, 2u);
      xGetMonitorInfo(v9, &v13);
      CopyRect(&v16, &v13.rcWork);
    }
    else
    {
      MainWnd = (HWND)AfxGetMainWnd();
      if ( MainWnd != nullptr )
        MainWnd = *((HWND *)MainWnd + 8);
      v8 = xMonitorFromWindow(MainWnd, 1u);
      xGetMonitorInfo(v8, &v13);
      CopyRect(&rcDst, &v13.rcWork);
      CopyRect(&v16, &v13.rcWork);
    }
  }
  left = (rcDst.right + rcDst.left) / 2 - (Rect.right - Rect.left) / 2;
  top = (rcDst.bottom + rcDst.top) / 2 - (Rect.bottom - Rect.top) / 2;
  if ( left + Rect.right - Rect.left > v16.right )
    left = v16.right + Rect.left - Rect.right;
  if ( left < v16.left )
    left = v16.left;
  if ( top + Rect.bottom - Rect.top > v16.bottom )
    top = v16.bottom + Rect.top - Rect.bottom;
  if ( top < v16.top )
    top = v16.top;
  CWnd::SetWindowPos(v17, nullptr, left, top, -1, -1, 0x15u);
}

// Address: 0x10014C2B
void __thiscall CWnd::EndModalLoop(CWnd *this, int a2)
{
  int v2; // eax

  *((_DWORD *)this + 17) = a2;
  v2 = *((_DWORD *)this + 15);
  if ( (v2 & 0x10) != 0 )
  {
    *((_DWORD *)this + 15) = v2 & 0xFFFFFFEF;
    PostMessageW(*((HWND *)this + 8), 0, 0, 0);
  }
}

// Address: 0x10014C55
static struct CObject *__stdcall CWnd::CreateObject()
{
  CWnd *v0; // ecx
  struct CObject *result; // eax

  v0 = (CWnd *)operator new(0x54u);
  result = nullptr;
  if ( v0 != nullptr )
    return CWnd::CWnd(v0);
  return result;
}

// Address: 0x10014C82
CWnd *__stdcall ConstructDestruct<CWnd>::Construct(struct CObject *a1)
{
  CWnd *result; // eax

  if ( a1 != nullptr )
    return CWnd::CWnd(a1);
  return result;
}

// Address: 0x10014CA9
HINSTANCE __thiscall CDllIsolationWrapperBase::GetModuleHandleW(LPCWSTR *this)
{
  HMODULE ModuleHandleW; // eax
  HMODULE LibraryW; // eax

  if ( *(this + 1) == nullptr )
  {
    ModuleHandleW = GetModuleHandleW(*(this + 3));
    *(this + 1) = (LPCWSTR)ModuleHandleW;
    if ( ModuleHandleW == nullptr )
    {
      LibraryW = LoadLibraryW(*(this + 3));
      *(this + 1) = (LPCWSTR)LibraryW;
      *((_BYTE *)this + 8) = LibraryW != nullptr;
    }
  }
  return (HINSTANCE)*(this + 1);
}

// Address: 0x10014CDD
// MFC 3.1-14.0 32bit
_DWORD *__thiscall unknown_libname_57(int this, _DWORD *a2)
{
  HINSTANCE ModuleHandleW; // eax

  if ( *(_DWORD *)(this + 16) == 0 )
  {
    ModuleHandleW = CDllIsolationWrapperBase::GetModuleHandleW((LPCWSTR *)this);
    *(_DWORD *)(this + 16) = GetProcAddress(ModuleHandleW, "InitCommonControls");
  }
  *a2 = *(_DWORD *)(this + 16);
  return a2;
}

// Address: 0x10014D0C
void __thiscall CComCtlWrapper::_InitCommonControls(CComCtlWrapper *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  void (__stdcall *v3)(int); // esi
  int v4; // [esp+0h] [ebp-34h]
  int v5; // [esp+10h] [ebp-24h] BYREF
  int v6; // [esp+14h] [ebp-20h]
  ULONG_PTR v7; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v7 = 0;
  ModuleState = AfxGetModuleState();
  v6 = AfxActivateActCtxWrapper(*((void **)ModuleState + 32), &v7);
  if ( v6 != 0 )
  {
    ms_exc.registration.TryLevel = 0;
    unknown_libname_57((int)this, &v5);
    v3 = *((void (__stdcall **)(int))this + 4);
    if ( v3 == nullptr )
      AfxThrowInvalidArgException();
    v3(v4);
    ms_exc.registration.TryLevel = -2;
    if ( v6 != 2 )
      sub_1000F87C(0, v7);
  }
}

// Address: 0x10014D80
_DWORD *__thiscall CCommDlgWrapper::GetProcAddress_GetOpenFileNameW(int this, _DWORD *a2)
{
  HINSTANCE ModuleHandleW; // eax

  if ( *(_DWORD *)(this + 20) == 0 )
  {
    ModuleHandleW = CDllIsolationWrapperBase::GetModuleHandleW((LPCWSTR *)this);
    *(_DWORD *)(this + 20) = GetProcAddress(ModuleHandleW, "InitCommonControlsEx");
  }
  *a2 = *(_DWORD *)(this + 20);
  return a2;
}

// Address: 0x10014DAF
int __thiscall CCommDlgWrapper::_GetOpenFileNameW(CCommDlgWrapper *this, struct tagOFNW *a2)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int (__stdcall *v5)(struct tagOFNW *, int); // eax
  BOOL v6; // esi
  DWORD LastError; // edi
  int v8; // [esp+0h] [ebp-38h]
  int v9; // [esp+10h] [ebp-28h] BYREF
  int v10; // [esp+14h] [ebp-24h]
  ULONG_PTR v11; // [esp+18h] [ebp-20h] BYREF
  int v12; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v11 = 0;
  ModuleState = AfxGetModuleState();
  v10 = AfxActivateActCtxWrapper(*((void **)ModuleState + 32), &v11);
  v12 = 0;
  if ( v10 == 0 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  CCommDlgWrapper::GetProcAddress_GetOpenFileNameW((int)this, &v9);
  v5 = *((int (__stdcall **)(struct tagOFNW *, int))this + 5);
  if ( v5 == nullptr )
    AfxThrowInvalidArgException();
  v12 = v5(a2, v8);
  ms_exc.registration.TryLevel = -2;
  if ( v10 != 2 )
  {
    v6 = v12 == 0;
    if ( v12 != 0 )
      LastError = 0;
    else
      LastError = GetLastError();
    sub_1000F87C(0, v11);
    if ( v6 )
      SetLastError(LastError);
  }
  return v12;
}

// Address: 0x10014E5A
int __stdcall sub_10014E5A(struct tagOFNW *a1)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  ModuleState = AfxGetModuleState();
  return CCommDlgWrapper::_GetOpenFileNameW(**((CCommDlgWrapper ***)ModuleState + 30), a1);
}

// Address: 0x10014E75
// attributes: thunk
void __thiscall CInternalGlobalLock::Unlock(CInternalGlobalLock *this)
{
  ?Unlock@CInternalGlobalLock@@QAEXXZ(this);
}

// Address: 0x10014E7A
static const struct tagMSG *__stdcall CWnd::GetCurrentMessage()
{
  struct CNoTrackObject *Data; // esi
  DWORD MessagePos; // eax

  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  *((_DWORD *)Data + 26) = GetMessageTime();
  MessagePos = GetMessagePos();
  *((_DWORD *)Data + 28) = SHIWORD(MessagePos);
  *((_DWORD *)Data + 27) = (__int16)MessagePos;
  return (const struct tagMSG *)((char *)Data + 88);
}

// Address: 0x10014EB8
int __thiscall CWnd::Default(CWnd *this)
{
  struct CNoTrackObject *Data; // eax

  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  return (*(int (__thiscall **)(CWnd *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 280))(
           this,
           *((_DWORD *)Data + 23),
           *((_DWORD *)Data + 24),
           *((_DWORD *)Data + 25));
}

// Address: 0x10014EEA
struct CHandleMap *__stdcall afxMapHWND(int a1)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  void (__stdcall __noreturn *v2)(); // ebx
  CHandleMap *v3; // ecx
  CHandleMap *v4; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((_DWORD *)ModuleThreadState + 5) == 0 && a1 != 0 )
  {
    v2 = AfxSetNewHandler((void (__stdcall __noreturn *)())AfxCriticalNewHandler);
    v3 = (CHandleMap *)operator new(0x60u);
    if ( v3 != nullptr )
      v4 = CHandleMap::CHandleMap(
             v3,
             (struct CRuntimeClass *)&off_1002C7E8,
             (void (__stdcall *)(struct CObject *))ConstructDestruct<CWnd>::Construct,
             unknown_libname_38,
             0x20u,
             1);
    else
      v4 = nullptr;
    *((_DWORD *)ModuleThreadState + 5) = v4;
    AfxSetNewHandler(v2);
  }
  return *((struct CHandleMap **)ModuleThreadState + 5);
}

// Address: 0x10014F5E
static struct CWnd *__stdcall CWnd::FromHandle(int (__cdecl *a1)(unsigned int))
{
  CHandleMap *v1; // esi
  CWnd *v2; // edi

  v1 = afxMapHWND(1);
  v2 = CHandleMap::FromHandle(v1, a1);
  CWnd::AttachControlSite(v2, v1);
  return v2;
}

// Address: 0x10014F8A
static struct CWnd *__stdcall CWnd::FromHandlePermanent(HWND a1)
{
  struct CHandleMap *v1; // ecx
  struct CWnd *result; // eax

  v1 = afxMapHWND(0);
  result = nullptr;
  if ( v1 != nullptr )
    return (struct CWnd *)CMapPtrToPtr::GetValueAt((struct CHandleMap *)((char *)v1 + 28), a1);
  return result;
}

// Address: 0x10014FAB
int __thiscall CWnd::Attach(CWnd *this, HWND a2)
{
  CHandleMap *v4; // ebx

  if ( a2 == nullptr )
    return 0;
  v4 = afxMapHWND(1);
  *((_DWORD *)this + 8) = a2;
  CHandleMap::SetPermanent(v4, a2, this);
  CWnd::AttachControlSite(this, v4);
  return 1;
}

// Address: 0x10014FE7
HWND __thiscall CWnd::Detach(CWnd *this)
{
  int v2; // edi

  v2 = *((_DWORD *)this + 8);
  if ( v2 != 0 )
  {
    if ( afxMapHWND(0) != nullptr )
      sub_10017D5D(*((_DWORD *)this + 8));
    *((_DWORD *)this + 8) = 0;
  }
  *((_DWORD *)this + 20) = 0;
  return (HWND)v2;
}

// Address: 0x10015017
int __stdcall AfxUnhookWindowCreate()
{
  struct CNoTrackObject *Data; // esi

  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  if ( *((_BYTE *)AfxGetModuleState() + 20) != 0 && *((_DWORD *)Data + 10) != 0 )
  {
    UnhookWindowsHookEx(*((HHOOK *)Data + 10));
    *((_DWORD *)Data + 10) = 0;
  }
  if ( *((_DWORD *)Data + 5) == 0 )
    return 1;
  *((_DWORD *)Data + 5) = 0;
  return 0;
}

// Address: 0x10015064
void __thiscall CWnd::OnDestroy(CWnd *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax

  v2 = *((_DWORD *)this + 19);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, 1);
  v3 = *((_DWORD *)this + 11);
  *((_DWORD *)this + 19) = 0;
  if ( v3 != 0 )
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v3 + 12))(v3, 0, 0);
  v4 = *((_DWORD *)this + 10);
  if ( v4 != 0 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*((_DWORD *)this + 10));
  CWnd::Default(this);
}

// Address: 0x100150A1
void __thiscall CWnd::OnNcDestroy(CWnd *this)
{
  struct CWinThread *Thread; // eax
  struct CWinThread *v3; // edi
  int v4; // ecx
  int v5; // ecx
  int v6; // edi
  LONG WindowLongW; // ebx
  LONG v8; // eax
  HWND v9; // [esp-10h] [ebp-4Ch]
  LPARAM lParam[12]; // [esp+Ch] [ebp-30h] BYREF

  Thread = AfxGetThread();
  v3 = Thread;
  if ( Thread != nullptr )
  {
    if ( *((CWnd **)Thread + 8) == this )
    {
      if ( *((_BYTE *)AfxGetModuleState() + 20) == 0
        && (v3 != *((struct CWinThread **)AfxGetModuleState() + 1) || AfxOleCanExitApp()) )
      {
        AfxPostQuitMessage(0);
      }
      *((_DWORD *)v3 + 8) = 0;
    }
    if ( *((CWnd **)v3 + 9) == this )
      *((_DWORD *)v3 + 9) = 0;
  }
  v4 = *((_DWORD *)this + 18);
  if ( v4 != 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 80))(v4);
    *((_DWORD *)this + 18) = 0;
  }
  v5 = *((_DWORD *)this + 19);
  if ( v5 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, 1);
  *((_DWORD *)this + 19) = 0;
  if ( (*((_BYTE *)this + 60) & 1) != 0 )
  {
    v6 = *((_DWORD *)AfxGetModuleThreadState() + 15);
    if ( v6 != 0 && *(_DWORD *)(v6 + 32) != 0 )
    {
      memset(lParam, 0, sizeof(lParam));
      lParam[2] = *((_DWORD *)this + 8);
      lParam[3] = lParam[2];
      v9 = *(HWND *)(v6 + 32);
      lParam[0] = 44;
      lParam[1] = 1;
      SendMessageW(v9, 0x433u, 0, (LPARAM)lParam);
    }
  }
  WindowLongW = GetWindowLongW(*((HWND *)this + 8), -4);
  CWnd::Default(this);
  if ( GetWindowLongW(*((HWND *)this + 8), -4) == WindowLongW )
  {
    v8 = *(_DWORD *)(*(int (__thiscall **)(CWnd *))(*(_DWORD *)this + 248))(this);
    if ( v8 != 0 )
      SetWindowLongW(*((HWND *)this + 8), -4, v8);
  }
  CWnd::Detach(this);
  (*(void (__thiscall **)(CWnd *))(*(_DWORD *)this + 284))(this);
}

// Address: 0x100151B4
int __thiscall CWnd::DestroyWindow(void **this)
{
  int v2; // edi
  struct CHandleMap *v4; // eax

  v2 = 0;
  if ( *(this + 8) != nullptr )
  {
    v4 = afxMapHWND(0);
    if ( v4 == nullptr )
      AfxThrowInvalidArgException();
    CMapPtrToPtr::GetValueAt((struct CHandleMap *)((char *)v4 + 28), *(this + 8));
  }
  else if ( *(this + 20) == nullptr )
  {
    return 0;
  }
  if ( *(this + 8) != nullptr || *(this + 20) != nullptr )
  {
    if ( *(this + 20) != nullptr )
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 20) + 88))(*(this + 20));
    else
      return DestroyWindow((HWND)*(this + 8));
  }
  return v2;
}

// Address: 0x10015213
int __thiscall CWnd::OnNTCtlColor(CWnd *this, unsigned int a2, int a3)
{
  struct CNoTrackObject *Data; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  v6[1] = a2;
  v6[0] = a3;
  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  v6[2] = *((_DWORD *)Data + 23) - 306;
  return (*(int (__thiscall **)(CWnd *, int, _DWORD, _DWORD *))(*(_DWORD *)this + 272))(this, 25, 0, v6);
}

// Address: 0x10015264
static struct CWnd *__stdcall CWnd::GetDescendantWindow(HWND hDlg, int nIDDlgItem, int a3)
{
  HWND DlgItem; // eax
  int (__cdecl *v4)(unsigned int); // esi
  struct CWnd *result; // eax
  HWND v6; // esi

  DlgItem = GetDlgItem(hDlg, nIDDlgItem);
  v4 = (int (__cdecl *)(unsigned int))DlgItem;
  if ( DlgItem == nullptr )
    goto LABEL_7;
  if ( GetTopWindow(DlgItem) == nullptr || (result = CWnd::GetDescendantWindow((HWND)v4, nIDDlgItem, a3)) == nullptr )
  {
    if ( a3 == 0 )
      return CWnd::FromHandle(v4);
    result = CWnd::FromHandlePermanent((HWND)v4);
    if ( result == nullptr )
    {
LABEL_7:
      for ( result = (struct CWnd *)GetTopWindow(hDlg); ; result = (struct CWnd *)GetWindow(v6, 2u) )
      {
        v6 = (HWND)result;
        if ( result == nullptr )
          break;
        result = CWnd::GetDescendantWindow((HWND)result, nIDDlgItem, a3);
        if ( result != nullptr )
          break;
      }
    }
  }
  return result;
}

// Address: 0x100152DD
static int __stdcall CWnd::WalkPreTranslateTree(HWND a1, struct tagMSG *a2)
{
  HWND i; // esi
  struct CWnd *v3; // eax

  for ( i = a2->hwnd; ; i = GetParent(i) )
  {
    if ( i == nullptr )
      return 0;
    v3 = CWnd::FromHandlePermanent(i);
    if ( v3 != nullptr && (*(int (__thiscall **)(struct CWnd *, struct tagMSG *))(*(_DWORD *)v3 + 264))(v3, a2) != 0 )
      break;
    if ( i == a1 )
      return 0;
  }
  return 1;
}

// Address: 0x10015323
int __thiscall CWnd::SendChildNotifyLastMsg(CWnd *this, int *a2)
{
  struct CNoTrackObject *Data; // eax

  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  return (*(int (__thiscall **)(CWnd *, _DWORD, _DWORD, _DWORD, int *))(*(_DWORD *)this + 288))(
           this,
           *((_DWORD *)Data + 23),
           *((_DWORD *)Data + 24),
           *((_DWORD *)Data + 25),
           a2);
}

// Address: 0x1001535E
void __thiscall CWnd::OnSetFocus(CWnd *this, struct CWnd *a2)
{
  if ( *((_DWORD *)this + 19) == 0
    || (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 19) + 144))(*((_DWORD *)this + 19)) == 0 )
  {
    CWnd::Default(this);
  }
}

// Address: 0x10015383
BOOL __thiscall CWnd::OnHelpInfo(CWnd *this, struct tagHELPINFO *a2)
{
  struct CWnd *MainWnd; // edi

  if ( (CWnd::GetStyle(this) & 0x40000000) != 0 )
    return CWnd::Default(this) != 0;
  MainWnd = AfxGetMainWnd();
  if ( MainWnd == nullptr || GetKeyState(16) < 0 || GetKeyState(17) < 0 || GetKeyState(18) < 0 )
    return CWnd::Default(this) != 0;
  SendMessageW(*((HWND *)MainWnd + 8), 0x111u, 0xE146u, 0);
  return 1;
}

// Address: 0x100153EF
int __thiscall CWnd::OnGetObject(CWnd *this, unsigned int a2, int a3)
{
  CWnd *v3; // esi
  int v5; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  v3 = this;
  if ( *((_BYTE *)this + 36) == 0 )
    return CWnd::Default(this);
  v5 = *(_DWORD *)this;
  v6 = 0;
  if ( (*(int (__thiscall **)(CWnd *, unsigned int, int, int *))(v5 + 236))(this, a2, a3, &v6) < 0 )
  {
    this = v3;
    return CWnd::Default(this);
  }
  return v6;
}

// Address: 0x1001542D
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_58(CWnd *this, int a2, int a3, CWnd *a4)
{
  int result; // eax

  if ( a4 == nullptr )
    return CWnd::Default(this);
  result = CWnd::SendChildNotifyLastMsg(a4, nullptr);
  if ( result == 0 )
    return CWnd::Default(this);
  return result;
}

// Address: 0x10015453
void __thiscall CWnd::OnEnterIdle(CWnd *this, unsigned int a2, struct CWnd *a3)
{
  MSG Msg; // [esp+Ch] [ebp-1Ch] BYREF

  while ( PeekMessageW(&Msg, nullptr, 0x121u, 0x121u, 1u) )
    DispatchMessageW(&Msg);
  CWnd::Default(this);
}

// Address: 0x10015495
struct CWnd *__thiscall CWnd::OnCtlColor(CWnd *this, struct CDC *a2, struct CWnd *a3, unsigned int a4)
{
  if ( CWnd::SendChildNotifyLastMsg(a3, (int *)&a3) != 0 )
    return a3;
  else
    return (struct CWnd *)CWnd::Default(this);
}

// Address: 0x100154BE
int __stdcall _AfxInitCommonControls(struct tagOFNW *a1, int a2)
{
  int v2; // edi
  struct AFX_MODULE_STATE *ModuleState; // eax
  struct AFX_MODULE_STATE *v4; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  v2 = 0;
  ModuleState = AfxGetModuleState();
  if ( *CCommDlgWrapper::GetProcAddress_GetOpenFileNameW(**((_DWORD **)ModuleState + 30), &v6) != 0 )
  {
    if ( sub_10014E5A(a1) != 0 )
      return a2;
  }
  else if ( (a2 & 0x3FC0) == a2 )
  {
    v4 = AfxGetModuleState();
    CComCtlWrapper::_InitCommonControls(**((CComCtlWrapper ***)v4 + 30));
    return 16320;
  }
  return v2;
}

// Address: 0x10015517
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accParent(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 8) == 0 )
    return -2147417848;
  if ( a2 != 0 )
    return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 28))(*(_DWORD *)(a1 + 8), a2);
  return -2147467261;
}

// Address: 0x10015549
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accChildCount(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 8) == 0 )
    return -2147417848;
  if ( a2 != 0 )
    return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 32))(*(_DWORD *)(a1 + 8), a2);
  return -2147467261;
}

// Address: 0x1001557B
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accChild(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 0 )
    return -2147417848;
  if ( a6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 36))(v6, a2, a3, a4, a5, a6);
  return -2147467261;
}

// Address: 0x100155BB
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accName(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 0 )
    return -2147417848;
  if ( a6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 40))(v6, a2, a3, a4, a5, a6);
  return -2147467261;
}

// Address: 0x100155FB
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accValue(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 0 )
    return -2147417848;
  if ( a6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 44))(v6, a2, a3, a4, a5, a6);
  return -2147467261;
}

// Address: 0x1001563B
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accDescription(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 0 )
    return -2147417848;
  if ( a6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 48))(v6, a2, a3, a4, a5, a6);
  return -2147467261;
}

// Address: 0x1001567B
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accRole(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 0 )
    return -2147417848;
  if ( a6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 52))(v6, a2, a3, a4, a5, a6);
  return -2147467261;
}

// Address: 0x100156BB
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accState(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 0 )
    return -2147417848;
  if ( a6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 56))(v6, a2, a3, a4, a5, a6);
  return -2147467261;
}

// Address: 0x100156FB
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accHelp(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 0 )
    return -2147417848;
  if ( a6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 60))(v6, a2, a3, a4, a5, a6);
  return -2147467261;
}

// Address: 0x1001573B
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accHelpTopic(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // eax

  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 == 0 )
    return -2147417848;
  if ( a2 != 0 && a7 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)v7 + 64))(v7, a2, a3, a4, a5, a6, a7);
  return -2147467261;
}

// Address: 0x10015784
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accKeyboardShortcut(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 0 )
    return -2147417848;
  if ( a6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 68))(v6, a2, a3, a4, a5, a6);
  return -2147467261;
}

// Address: 0x100157C4
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accFocus(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 8) == 0 )
    return -2147417848;
  if ( a2 != 0 )
    return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 72))(*(_DWORD *)(a1 + 8), a2);
  return -2147467261;
}

// Address: 0x100157F6
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accSelection(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 8) == 0 )
    return -2147417848;
  if ( a2 != 0 )
    return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 76))(*(_DWORD *)(a1 + 8), a2);
  return -2147467261;
}

// Address: 0x10015828
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accDefaultAction(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 0 )
    return -2147417848;
  if ( a6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 80))(v6, a2, a3, a4, a5, a6);
  return -2147467261;
}

// Address: 0x10015868
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accSelect(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 84))(v6, a2, a3, a4, a5, a6);
  else
    return -2147417848;
}

// Address: 0x1001589B
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accLocation(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // eax

  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 == 0 )
    return -2147417848;
  if ( a2 != 0 && a3 != 0 && a4 != 0 && a5 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)v9 + 88))(
             v9,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
  return -2147467261;
}

// Address: 0x100158F4
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accNavigate(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // eax

  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 == 0 )
    return -2147417848;
  if ( a7 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)v7 + 92))(v7, a2, a3, a4, a5, a6, a7);
  return -2147467261;
}

// Address: 0x10015937
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accHitTest(int a1, int a2, int a3, int a4)
{
  if ( *(_DWORD *)(a1 + 8) == 0 )
    return -2147417848;
  if ( a4 != 0 )
    return (*(int (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 96))(*(_DWORD *)(a1 + 8), a2, a3, a4);
  return -2147467261;
}

// Address: 0x1001596F
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accDoDefaultAction(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5)
{
  int v5; // eax

  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 != 0 )
    return (*(int (__stdcall **)(int, int, int, int, int))(*(_DWORD *)v5 + 100))(v5, a2, a3, a4, a5);
  else
    return -2147417848;
}

// Address: 0x1001599F
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_59(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return *(_DWORD *)(a1 + 8) != 0 ? -2147467263 : -2147417848;
}

// Address: 0x100159BC
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::SetServer(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  return 0;
}

// Address: 0x100159D6
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::Invoke(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  if ( *(_DWORD *)(a1 + 8) != 0 )
    return (*(int (__stdcall **)(_DWORD, int, int, int, int, int, int, int, int))(**(_DWORD **)(a1 + 8) + 24))(
             *(_DWORD *)(a1 + 8),
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
  else
    return -2147417848;
}

// Address: 0x10015A10
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::GetIDsOfNames(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  if ( *(_DWORD *)(a1 + 8) != 0 )
    return (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)(a1 + 8) + 20))(
             *(_DWORD *)(a1 + 8),
             a2,
             a3,
             a4,
             a5,
             a6);
  else
    return -2147417848;
}

// Address: 0x10015A41
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::GetTypeInfoCount(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 8) != 0 )
    return (*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 12))(*(_DWORD *)(a1 + 8), a2);
  else
    return -2147417848;
}

// Address: 0x10015A66
int __stdcall ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::GetTypeInfo(int a1, int a2, int a3, int a4)
{
  if ( *(_DWORD *)(a1 + 8) != 0 )
    return (*(int (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), a2, a3, a4);
  else
    return -2147417848;
}

// Address: 0x10015A91
_DWORD *sub_10015A91()
{
  _DWORD *result; // eax

  result = CNoTrackObject::operator new(0xCu);
  if ( result == nullptr )
    return nullptr;
  *result = &_AFX_HTMLHELP_STATE::`vftable';
  return result;
}

// Address: 0x10015AA6
struct CWnd *__thiscall CWnd::GetWindow(HWND *this, UINT uCmd)
{
  int (__cdecl *Window)(unsigned int); // eax

  Window = (int (__cdecl *)(unsigned int))GetWindow(*(this + 8), uCmd);
  return CWnd::FromHandle(Window);
}

// Address: 0x10015AC1
void __stdcall _AfxPostInitDialog(HWND *a1, const struct tagRECT *a2, unsigned int a3)
{
  CWnd *Window; // eax
  struct tagRECT Rect; // [esp+0h] [ebp-10h] BYREF

  if ( ((unsigned int)&_ImageBase & a3) == 0 && (CWnd::GetStyle((CWnd *)a1) & 0x50000000) == 0 )
  {
    GetWindowRect(a1[8], &Rect);
    if ( a2->left == Rect.left && a2->top == Rect.top )
    {
      Window = CWnd::GetWindow(a1, 4u);
      if ( (Window == nullptr || CWnd::IsWindowEnabled(Window) == 0)
        && (*((int (__thiscall **)(HWND *))*a1 + 73))(a1) != 0 )
      {
        CWnd::CenterWindow(a1, nullptr);
      }
    }
  }
}

// Address: 0x10015B37
int __stdcall AfxCallWndProc(struct CWnd *a1, HWND a2, unsigned int a3, unsigned int a4, int a5)
{
  struct CNoTrackObject *Data; // ebx
  unsigned int v6; // edi
  struct CWnd *v7; // esi
  int v8; // eax
  int result; // eax
  _BYTE v10[28]; // [esp+10h] [ebp-44h] BYREF
  struct tagRECT v11; // [esp+2Ch] [ebp-28h] BYREF
  struct CNoTrackObject *v12; // [esp+3Ch] [ebp-18h]
  int v13; // [esp+50h] [ebp-4h]

  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  v12 = Data;
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  qmemcpy(v10, (char *)Data + 88, sizeof(v10));
  v6 = a3;
  v7 = a1;
  *((_DWORD *)Data + 22) = a2;
  *((_DWORD *)Data + 24) = a4;
  v8 = a5;
  *((_DWORD *)Data + 23) = v6;
  *((_DWORD *)Data + 25) = v8;
  v13 = 0;
  if ( v6 == 2 && *((_DWORD *)v7 + 19) != 0 )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)v7 + 19) + 96))(*((_DWORD *)v7 + 19), 0);
  a1 = nullptr;
  if ( v6 == 272 )
    _AfxPreInitDialog((HWND *)v7, &v11, (unsigned int *)&a1);
  a5 = (*(int (__thiscall **)(struct CWnd *, unsigned int, unsigned int, int))(*(_DWORD *)v7 + 272))(v7, v6, a4, a5);
  if ( v6 == 272 )
    _AfxPostInitDialog((HWND *)v7, &v11, (unsigned int)a1);
  result = a5;
  qmemcpy((char *)Data + 88, v10, 28);
  return result;
}

// Address: 0x10015C2A
LRESULT __stdcall AfxWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  HWND *v5; // eax

  if ( Msg == 864 )
    return 1;
  v5 = (HWND *)CWnd::FromHandlePermanent(hWnd);
  if ( v5 != nullptr && v5[8] == hWnd )
    return AfxCallWndProc((struct CWnd *)v5, hWnd, Msg, wParam, lParam);
  else
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
}

// Address: 0x10015C77
void __thiscall CWnd::~CWnd(CWnd *this)
{
  int v2; // ecx
  int v3; // eax

  *(_DWORD *)this = &CWnd::`vftable';
  if ( *((_DWORD *)this + 8) != 0
    && this != (CWnd *)&dword_100409A8
    && this != (CWnd *)&dword_10040A00
    && this != (CWnd *)&dword_10040A58
    && this != (CWnd *)&dword_10040AB0 )
  {
    CWnd::DestroyWindow((void **)this);
  }
  v2 = *((_DWORD *)this + 19);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, 1);
  v3 = *((_DWORD *)this + 20);
  if ( v3 != 0 && *(CWnd **)(v3 + 40) == this )
    *(_DWORD *)(v3 + 40) = 0;
  CCmdTarget::~CCmdTarget(this);
}

// Address: 0x10015CEC
// MFC 3.1-14.0 32bit
CWnd *__thiscall unknown_libname_60(CWnd *this, int a2, CWnd *a3, int a4)
{
  if ( a3 != nullptr && CWnd::SendChildNotifyLastMsg(a3, (int *)&a3) != 0 )
    return a3;
  else
    return (CWnd *)CWnd::Default(this);
}

// Address: 0x10015D19
void __thiscall CWnd::OnMeasureItem(CWnd *this, int a2, struct tagMEASUREITEMSTRUCT *a3)
{
  struct CNoTrackObject *Data; // eax
  HMENU *v5; // eax
  struct CMenu *PopupMenuFromID; // eax
  CWnd *DescendantWindow; // eax

  if ( a3->CtlType == 1 )
  {
    Data = CThreadLocalObject::GetData(
             (CThreadLocalObject *)&unk_1003ECA4,
             CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
    if ( Data == nullptr
      || (*((_DWORD *)Data + 29) != *((_DWORD *)this + 8)
        ? (v5 = (HMENU *)(*(int (__thiscall **)(CWnd *))(*(_DWORD *)this + 108))(this))
        : (v5 = (HMENU *)CMenu::FromHandle(*((HMENU *)Data + 30))),
          v5 == nullptr) )
    {
      AfxThrowInvalidArgException();
    }
    PopupMenuFromID = _AfxFindPopupMenuFromID(v5, a3->itemID);
    if ( PopupMenuFromID != nullptr )
      (*(void (__thiscall **)(struct CMenu *, struct tagMEASUREITEMSTRUCT *))(*(_DWORD *)PopupMenuFromID + 16))(
        PopupMenuFromID,
        a3);
    goto LABEL_12;
  }
  DescendantWindow = CWnd::GetDescendantWindow(*((HWND *)this + 8), a3->CtlID, 1);
  if ( DescendantWindow == nullptr || CWnd::SendChildNotifyLastMsg(DescendantWindow, nullptr) == 0 )
LABEL_12:
    CWnd::Default(this);
}

// Address: 0x10015DA2
struct CFrameWnd *__thiscall CWnd::GetParentFrame(CWnd *this)
{
  HWND v1; // eax
  struct CFrameWnd *result; // eax
  int (__cdecl *i)(unsigned int); // eax
  struct CFrameWnd *v4; // esi

  if ( this == nullptr )
    return nullptr;
  v1 = *((HWND *)this + 8);
  if ( v1 == nullptr )
    return nullptr;
  for ( i = (int (__cdecl *)(unsigned int))GetParent(v1); ; i = (int (__cdecl *)(unsigned int))GetParent(*((HWND *)v4 + 8)) )
  {
    result = CWnd::FromHandle(i);
    v4 = result;
    if ( result == nullptr )
      break;
    if ( (*(int (__thiscall **)(struct CFrameWnd *))(*(_DWORD *)result + 296))(result) != 0 )
      return v4;
  }
  return result;
}

// Address: 0x10015DE1
struct CFrameWnd *__thiscall CWnd::GetTopLevelFrame(CWnd *this)
{
  CWnd *ParentFrame; // esi
  CWnd *i; // ecx
  struct CFrameWnd *v4; // eax

  ParentFrame = this;
  if ( this == nullptr || *((_DWORD *)this + 8) == 0 )
    return nullptr;
  if ( (*(int (__thiscall **)(CWnd *))(*(_DWORD *)this + 296))(this) == 0 )
    ParentFrame = CWnd::GetParentFrame(ParentFrame);
  if ( ParentFrame != nullptr )
  {
    for ( i = ParentFrame; ; i = v4 )
    {
      v4 = CWnd::GetParentFrame(i);
      if ( v4 == nullptr )
        break;
      ParentFrame = v4;
    }
  }
  return ParentFrame;
}

// Address: 0x10015E22
static void __stdcall CWnd::SendMessageToDescendants(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam, int a5, int a6)
{
  HWND i; // eax
  HWND *v7; // eax
  HWND v8; // esi

  for ( i = GetTopWindow(hWnd); ; i = GetWindow(v8, 2u) )
  {
    v8 = i;
    if ( i == nullptr )
      break;
    if ( a6 != 0 )
    {
      v7 = (HWND *)CWnd::FromHandlePermanent(i);
      if ( v7 != nullptr )
        AfxCallWndProc((struct CWnd *)v7, v7[8], Msg, wParam, lParam);
    }
    else
    {
      SendMessageW(i, Msg, wParam, lParam);
    }
    if ( a5 != 0 && GetTopWindow(v8) != nullptr )
      CWnd::SendMessageToDescendants(v8, Msg, wParam, lParam, a5, a6);
  }
}

// Address: 0x10015EA1
static int __stdcall CWnd::ReflectLastMsg(HWND hWnd, int *a2)
{
  struct CHandleMap *v2; // eax
  CMapPtrToPtr *v4; // esi
  CWnd *ValueAt; // eax
  HWND Parent; // eax
  _DWORD *v7; // eax
  int v8; // eax
  void *v9; // esi
  int Msg; // eax
  BOOL v11; // esi
  _BYTE v12[32]; // [esp+10h] [ebp-60h] BYREF
  int v13; // [esp+30h] [ebp-40h]
  void *v14; // [esp+60h] [ebp-10h]
  int v15; // [esp+6Ch] [ebp-4h]

  v2 = afxMapHWND(0);
  if ( v2 == nullptr )
    return 0;
  v4 = (struct CHandleMap *)((char *)v2 + 28);
  ValueAt = (CWnd *)CMapPtrToPtr::GetValueAt((struct CHandleMap *)((char *)v2 + 28), hWnd);
  if ( ValueAt != nullptr )
    return CWnd::SendChildNotifyLastMsg(ValueAt, a2);
  Parent = GetParent(hWnd);
  v7 = CMapPtrToPtr::GetValueAt(v4, Parent);
  if ( v7 == nullptr )
    return 0;
  v8 = v7[19];
  if ( v8 == 0 )
    return 0;
  v9 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(v8 + 36), hWnd);
  if ( v9 == nullptr )
    return 0;
  CWnd::CWnd((CWnd *)v12, hWnd);
  v15 = 0;
  v14 = v9;
  Msg = CWnd::SendChildNotifyLastMsg((CWnd *)v12, a2);
  v13 = 0;
  v15 = -1;
  v11 = Msg != 0;
  CWnd::~CWnd((CWnd *)v12);
  return v11;
}

// Address: 0x10015F41
void __thiscall CWnd::OnParentNotify(CWnd *this, __int16 a2, HWND hWnd)
{
  if ( a2 != 1 && a2 != 2 || CWnd::ReflectLastMsg(hWnd, nullptr) == 0 )
    CWnd::Default(this);
}

// Address: 0x10015F71
int __thiscall CWnd::OnDragList(CWnd *this, unsigned int a2, int a3)
{
  if ( CWnd::ReflectLastMsg(*(HWND *)(a3 + 4), &a3) != 0 )
    return a3;
  else
    return CWnd::Default(this);
}

// Address: 0x10015F9D
_DWORD *__thiscall CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(_DWORD *this, int a2)
{
  *(this + 5) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *this = &CMFCComObject<ATL::CAccessibleProxy>::`vftable';
  *(this + 1) = &CMFCComObject<ATL::CAccessibleProxy>::`vftable';
  *(this + 4) = &CMFCComObject<ATL::CAccessibleProxy>::`vftable';
  AfxOleLockApp();
  return this;
}

// Address: 0x10015FCA
// MFC 3.1-14.0 32bit
BOOL __cdecl unknown_libname_61(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}

// Address: 0x10015FFC
int __stdcall sub_10015FFC(int a1, int a2)
{
  return 0;
}

// Address: 0x10016001
int __stdcall sub_10016001(int a1, int a2)
{
  return -2147467263;
}

// Address: 0x10016009
int __thiscall ATL::CAccessibleProxy::FinalRelease(ATL::CAccessibleProxy *this)
{
  if ( *((_DWORD *)this + 3) != 0 )
    return (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 12))(*((_DWORD *)this + 3), 0);
  else
    return 0;
}

// Address: 0x1001601E
BOOL __stdcall ATL::InlineIsEqualUnknown(const struct _GUID *a1)
{
  return a1->Data1 == 0
      && *(_DWORD *)&a1->Data2 == 0
      && *(_DWORD *)a1->Data4 == 192
      && *(_DWORD *)&a1->Data4[4] == 1174405120;
}

// Address: 0x1001604E
int __stdcall ATL::AtlInternalQueryInterface(
        char *a1,
        const struct ATL::_ATL_INTMAP_ENTRY *a2,
        struct _GUID *a3,
        void **a4)
{
  const struct ATL::_ATL_INTMAP_ENTRY *v4; // esi
  int result; // eax
  char *v6; // esi
  int (__stdcall *v7)(char *, struct _GUID *, void **, _DWORD); // edi
  BOOL v8; // [esp+18h] [ebp+Ch]

  if ( a1 == nullptr )
    return -2147024809;
  v4 = a2;
  if ( a2 == nullptr )
    return -2147024809;
  if ( a4 == nullptr )
    return -2147467261;
  *a4 = nullptr;
  if ( ATL::InlineIsEqualUnknown(a3) )
  {
LABEL_6:
    v6 = &a1[*((_DWORD *)v4 + 1)];
    (*(void (__stdcall **)(char *))(*(_DWORD *)v6 + 4))(v6);
    *a4 = v6;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = *((int (__stdcall **)(char *, struct _GUID *, void **, _DWORD))v4 + 2);
      if ( v7 == nullptr )
        return -2147467262;
      v8 = *(_DWORD *)v4 == 0;
      if ( *(_DWORD *)v4 == 0 || unknown_libname_61(*(_DWORD **)v4, a3) )
      {
        if ( v7 == (int (__stdcall *)(char *, struct _GUID *, void **, _DWORD))1 )
          goto LABEL_6;
        result = v7(a1, a3, a4, *((_DWORD *)v4 + 1));
        if ( result == 0 || !v8 && result < 0 )
          return result;
      }
      v4 = (const struct ATL::_ATL_INTMAP_ENTRY *)((char *)v4 + 12);
    }
  }
}

// Address: 0x100160F1
int __thiscall ATL::CAccessibleProxy::_InternalQueryInterface(ATL::CAccessibleProxy *this, struct _GUID *a2, void **a3)
{
  return ATL::AtlInternalQueryInterface((char *)this, (const struct ATL::_ATL_INTMAP_ENTRY *)&off_1002CD68, a2, a3);
}

// Address: 0x1001610B
void __thiscall CMFCComObject<ATL::CAccessibleProxy>::~CMFCComObject<ATL::CAccessibleProxy>(
        ATL::CAccessibleProxy *this)
{
  int v1; // esi
  CWnd *v2; // ecx
  struct AFX_MODULE_STATE *ModuleState; // eax

  *(_DWORD *)this = &CMFCComObject<ATL::CAccessibleProxy>::`vftable';
  *((_DWORD *)this + 1) = &CMFCComObject<ATL::CAccessibleProxy>::`vftable';
  *((_DWORD *)this + 4) = &CMFCComObject<ATL::CAccessibleProxy>::`vftable';
  *((_DWORD *)this + 5) = -1073741823;
  ATL::CAccessibleProxy::FinalRelease(this);
  ModuleState = AfxGetModuleState();
  if ( InterlockedDecrement((volatile LONG *)ModuleState + 11) == 0 && *((_DWORD *)AfxGetModuleState() + 12) == 0 )
  {
    AfxOleSetUserCtrl(1);
    v1 = *((_DWORD *)AfxGetModuleState() + 1);
    if ( v1 != 0 && (v2 = *(CWnd **)(v1 + 32)) != nullptr )
    {
      if ( CWnd::IsWindowEnabled(v2) != 0 )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 32) + 96))(*(_DWORD *)(v1 + 32));
    }
    else if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
    {
      AfxPostQuitMessage(0);
    }
  }
}

// Address: 0x10016130
int __stdcall CMFCComObject<ATL::CAccessibleProxy>::AddRef(int a1)
{
  return ++*(_DWORD *)(a1 + 20);
}

// Address: 0x10016142
int __stdcall CMFCComObject<ATL::CAccessibleProxy>::Release(_DWORD *a1)
{
  bool v1; // zf
  int v2; // esi

  v1 = a1[5]-- == 1;
  v2 = a1[5];
  if ( v1 && a1 != nullptr )
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 112))(a1, 1);
  return v2;
}

// Address: 0x10016165
int __stdcall CMFCComObject<ATL::CAccessibleProxy>::QueryInterface(
        ATL::CAccessibleProxy *a1,
        struct _GUID *a2,
        void **a3)
{
  return ATL::CAccessibleProxy::_InternalQueryInterface(a1, a2, a3);
}

// Address: 0x1001617C
ATL::CAccessibleProxy *__thiscall CMFCComObject<ATL::CAccessibleProxy>::`scalar deleting destructor'(
        ATL::CAccessibleProxy *this,
        char a2)
{
  CMFCComObject<ATL::CAccessibleProxy>::~CMFCComObject<ATL::CAccessibleProxy>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1001619D
int __stdcall sub_1001619D(int a1)
{
  return CMFCComObject<ATL::CAccessibleProxy>::Release((_DWORD *)(a1 - 16));
}

// Address: 0x100161A7
int __stdcall CMFCComObject<ATL::CAccessibleProxy>::QueryInterface(int a1, struct _GUID *a2, void **a3)
{
  return CMFCComObject<ATL::CAccessibleProxy>::QueryInterface((ATL::CAccessibleProxy *)(a1 - 4), a2, a3);
}

// Address: 0x100161B1
int __stdcall sub_100161B1(int a1)
{
  return CMFCComObject<ATL::CAccessibleProxy>::AddRef(a1 - 16);
}

// Address: 0x100161BB
int __stdcall CMFCComObject<ATL::CAccessibleProxy>::QueryInterface(int a1, struct _GUID *a2, void **a3)
{
  return CMFCComObject<ATL::CAccessibleProxy>::QueryInterface((ATL::CAccessibleProxy *)(a1 - 16), a2, a3);
}

// Address: 0x100161C5
int __stdcall sub_100161C5(int a1)
{
  return CMFCComObject<ATL::CAccessibleProxy>::Release((_DWORD *)(a1 - 4));
}

// Address: 0x100161CF
int __stdcall sub_100161CF(int a1)
{
  return CMFCComObject<ATL::CAccessibleProxy>::AddRef(a1 - 4);
}

// Address: 0x100161D9
struct CWnd *__thiscall CWnd::GetOwner(CWnd *this)
{
  int (__cdecl *Parent)(unsigned int); // eax

  Parent = *((int (__cdecl **)(unsigned int))this + 14);
  if ( Parent == nullptr )
    Parent = (int (__cdecl *)(unsigned int))GetParent(*((HWND *)this + 8));
  return CWnd::FromHandle(Parent);
}

// Address: 0x100161F0
CWnd *__thiscall sub_100161F0(CWnd *this, char a2)
{
  CWnd::~CWnd(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10016211
void __thiscall CWnd::OnDrawItem(CWnd *this, int a2, struct tagDRAWITEMSTRUCT *a3)
{
  struct CMenu *v4; // eax

  if ( a3->CtlType == 1 && (v4 = CMenu::FromHandlePermanent((HMENU)a3->hwndItem)) != nullptr )
  {
    (*(void (__thiscall **)(struct CMenu *, struct tagDRAWITEMSTRUCT *))(*(_DWORD *)v4 + 12))(v4, a3);
  }
  else if ( CWnd::ReflectLastMsg(a3->hwndItem, nullptr) == 0 )
  {
    CWnd::Default(this);
  }
}

// Address: 0x10016253
struct tagCOMPAREITEMSTRUCT *__thiscall CWnd::OnCompareItem(CWnd *this, int a2, struct tagCOMPAREITEMSTRUCT *a3)
{
  if ( CWnd::ReflectLastMsg(a3->hwndItem, (int *)&a3) != 0 )
    return a3;
  else
    return (struct tagCOMPAREITEMSTRUCT *)CWnd::Default(this);
}

// Address: 0x1001627F
void __thiscall CWnd::OnDeleteItem(CWnd *this, int a2, struct tagDELETEITEMSTRUCT *a3)
{
  if ( CWnd::ReflectLastMsg(a3->hwndItem, nullptr) == 0 )
    CWnd::Default(this);
}

// Address: 0x100162A4
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_62(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi
  HMODULE LibraryA; // eax
  HWND (__stdcall *HtmlHelpW)(HWND, LPCWSTR, UINT, DWORD_PTR); // eax

  AfxLockGlobals(0xCu);
  v4 = unknown_libname_29(&unk_10040B08, (int (*)(void))sub_10015A91);
  v5 = v4;
  if ( v4 == 0 )
    AfxThrowInvalidArgException();
  if ( *(_DWORD *)(v4 + 8) == 0 )
  {
    LibraryA = AfxCtxLoadLibraryA("hhctrl.ocx");
    *(_DWORD *)(v5 + 4) = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    HtmlHelpW = (HWND (__stdcall *)(HWND, LPCWSTR, UINT, DWORD_PTR))GetProcAddress(LibraryA, "HtmlHelpW");
    *(_DWORD *)(v5 + 8) = HtmlHelpW;
    if ( HtmlHelpW == nullptr )
    {
      FreeLibrary(*(HMODULE *)(v5 + 4));
      *(_DWORD *)(v5 + 4) = 0;
      return 0;
    }
  }
  AfxUnlockGlobals(0xCu);
  return (*(int (__stdcall **)(int, int, int, int))(v5 + 8))(a1, a2, a3, a4);
}

// Address: 0x10016324
int __thiscall CWnd::OnCommand(CWnd *this, unsigned int a2, HWND hWnd)
{
  int v3; // edi
  int v6; // eax
  struct CNoTrackObject *Data; // eax
  _BYTE v8[4]; // [esp+Ch] [ebp-2Ch] BYREF
  int v9; // [esp+10h] [ebp-28h]
  int v10; // [esp+34h] [ebp-4h]
  unsigned int v11; // [esp+40h] [ebp+8h]

  v3 = (unsigned __int16)a2;
  v11 = HIWORD(a2);
  if ( hWnd != nullptr )
  {
    Data = CThreadLocalObject::GetData(
             (CThreadLocalObject *)&unk_1003ECA4,
             CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
    if ( Data == nullptr )
      AfxThrowInvalidArgException();
    if ( *((_DWORD *)Data + 79) == *((_DWORD *)this + 8) || CWnd::ReflectLastMsg(hWnd, nullptr) != 0 )
      return 1;
    if ( v3 == 0 )
      return 0;
  }
  else
  {
    if ( v3 == 0 )
      return 0;
    sub_1001363C((CCmdUI *)v8);
    v6 = *(_DWORD *)this;
    v9 = v3;
    (*(void (__thiscall **)(CWnd *, int, int, _BYTE *, _DWORD))(v6 + 12))(this, v3, -1, v8, 0);
    if ( v10 == 0 )
      return 1;
    v11 = 0;
  }
  return (*(int (__thiscall **)(CWnd *, int, unsigned int, _DWORD, _DWORD))(*(_DWORD *)this + 12))(this, v3, v11, 0, 0);
}

// Address: 0x100163BD
int __thiscall CWnd::OnNotify(CWnd *this, unsigned int a2, int a3, int *a4)
{
  HWND v5; // ebx
  struct CNoTrackObject *Data; // eax
  int v9; // eax
  _DWORD v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int DlgCtrlID; // [esp+14h] [ebp-4h]
  int v12; // [esp+24h] [ebp+Ch]

  v5 = *(HWND *)a3;
  DlgCtrlID = GetDlgCtrlID(*(HWND *)a3);
  v12 = *(_DWORD *)(a3 + 8);
  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  if ( *((_DWORD *)Data + 79) == *((_DWORD *)this + 8) || CWnd::ReflectLastMsg(v5, a4) != 0 )
    return 1;
  v10[0] = a4;
  v9 = *(_DWORD *)this;
  v10[1] = a3;
  return (*(int (__thiscall **)(CWnd *, int, int, _DWORD *, _DWORD))(v9 + 12))(
           this,
           DlgCtrlID,
           (unsigned __int16)v12 | 0x4E0000,
           v10,
           0);
}

// Address: 0x1001643F
HWND __stdcall AfxGetParentOwner(HWND hWnd)
{
  CWnd *v1; // eax
  HWND result; // eax

  v1 = CWnd::FromHandlePermanent(hWnd);
  if ( v1 != nullptr )
  {
    result = (HWND)CWnd::GetOwner(v1);
    if ( result != nullptr )
      return *((HWND *)result + 8);
  }
  else if ( (GetWindowLongW(hWnd, -16) & 0x40000000) != 0 )
  {
    return GetParent(hWnd);
  }
  else
  {
    return GetWindow(hWnd, 4u);
  }
  return result;
}

// Address: 0x10016489
struct CWnd *__thiscall CWnd::GetTopLevelParent(CWnd *this)
{
  HWND ParentOwner; // eax
  int (__cdecl *v3)(unsigned int); // esi

  if ( this == nullptr )
    return nullptr;
  ParentOwner = *((HWND *)this + 8);
  if ( ParentOwner == nullptr )
    return nullptr;
  do
  {
    v3 = (int (__cdecl *)(unsigned int))ParentOwner;
    ParentOwner = AfxGetParentOwner(ParentOwner);
  }
  while ( ParentOwner != nullptr );
  return CWnd::FromHandle(v3);
}

// Address: 0x100164B1
void __thiscall CWnd::OnSysColorChange(HWND *this)
{
  int v2; // eax

  v2 = *((_DWORD *)AfxGetModuleState() + 1);
  if ( v2 != 0 && *(HWND **)(v2 + 32) == this )
    AUX_DATA::UpdateSysColors((AUX_DATA *)&dword_1003EEE8);
  if ( (CWnd::GetStyle((CWnd *)this) & 0x40000000) == 0 )
    CWnd::SendMessageToDescendants(*(this + 8), 0x15u, 0, 0, 1, 1);
  CWnd::Default((CWnd *)this);
}

// Address: 0x100164F9
void __thiscall CWnd::OnDevModeChange(HWND *this, wchar_t *a2)
{
  CWnd **v3; // eax
  const struct tagMSG *CurrentMessage; // eax

  v3 = *((CWnd ***)AfxGetModuleState() + 1);
  if ( v3 != nullptr && v3[8] == (CWnd *)this )
    CWinApp::DevModeChange((CWinApp *)v3, a2);
  if ( (CWnd::GetStyle((CWnd *)this) & 0x40000000) == 0 )
  {
    CurrentMessage = CWnd::GetCurrentMessage();
    CWnd::SendMessageToDescendants(
      *(this + 8),
      CurrentMessage->message,
      CurrentMessage->wParam,
      CurrentMessage->lParam,
      1,
      1);
  }
}

// Address: 0x10016549
int __thiscall CWnd::OnDisplayChange(HWND *this, unsigned int a2, int a3)
{
  const struct tagMSG *CurrentMessage; // eax

  if ( AfxGetMainWnd() == (struct CWnd *)this )
    AUX_DATA::UpdateSysMetrics((AUX_DATA *)&dword_1003EEE8);
  if ( (CWnd::GetStyle((CWnd *)this) & 0x40000000) == 0 )
  {
    CurrentMessage = CWnd::GetCurrentMessage();
    CWnd::SendMessageToDescendants(
      *(this + 8),
      CurrentMessage->message,
      CurrentMessage->wParam,
      CurrentMessage->lParam,
      1,
      1);
  }
  return CWnd::Default((CWnd *)this);
}

// Address: 0x10016594
// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_63(_DWORD *a1)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
  int v4; // [esp+1Ch] [ebp-14h]

  if ( a1 == nullptr )
    return -2147467261;
  *a1 = 0;
  v4 = -2147024882;
  v2 = operator new(0x18u);
  if ( v2 != nullptr )
    v3 = CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(v2, 0);
  else
    v3 = nullptr;
  if ( v3 != nullptr )
    v4 = 0;
  *a1 = v3;
  return v4;
}

// Address: 0x10016606
void __stdcall _AfxHandleActivate(LPARAM *a1, WPARAM wParam, struct CWnd *a3)
{
  HWND *TopLevelParent; // ebx
  LPARAM lParam; // [esp+4h] [ebp-8h] BYREF
  int v5; // [esp+8h] [ebp-4h]

  if ( (CWnd::GetStyle((CWnd *)a1) & 0x40000000) == 0 )
  {
    TopLevelParent = (HWND *)CWnd::GetTopLevelParent((CWnd *)a1);
    if ( TopLevelParent != nullptr
      && (a3 == nullptr || !IsWindow(*((HWND *)a3 + 8)) || TopLevelParent != (HWND *)CWnd::GetTopLevelParent(a3)) )
    {
      lParam = a1[8];
      if ( a3 != nullptr )
        v5 = *((_DWORD *)a3 + 8);
      else
        v5 = 0;
      SendMessageW(TopLevelParent[8], 0x36Eu, wParam, (LPARAM)&lParam);
    }
  }
}

// Address: 0x1001667E
int __stdcall _AfxHandleSetCursor(struct CWnd *a1, unsigned int a2, unsigned int a3)
{
  struct CWnd *TopLevelParent; // eax
  int (__cdecl *LastActivePopup)(unsigned int); // eax
  HWND *v5; // esi
  int (__cdecl *ForegroundWindow)(unsigned int); // eax

  if ( a2 != -2 || a3 != 513 && a3 != 519 && a3 != 516 )
    return 0;
  TopLevelParent = CWnd::GetTopLevelParent(a1);
  if ( TopLevelParent == nullptr )
    return 0;
  LastActivePopup = (int (__cdecl *)(unsigned int))GetLastActivePopup(*((HWND *)TopLevelParent + 8));
  v5 = (HWND *)CWnd::FromHandle(LastActivePopup);
  if ( v5 == nullptr )
    return 0;
  ForegroundWindow = (int (__cdecl *)(unsigned int))GetForegroundWindow();
  if ( v5 == (HWND *)CWnd::FromHandle(ForegroundWindow) || CWnd::IsWindowEnabled((CWnd *)v5) == 0 )
    return 0;
  SetForegroundWindow(v5[8]);
  return 1;
}

// Address: 0x100166F6
LRESULT __stdcall _AfxActivationWndProc(HWND hWnd, UINT Msg, WPARAM wParam, unsigned int lParam)
{
  BOOL v4; // ebx
  HWND *v5; // esi
  ATOM AtomW; // ax
  struct CWnd *v8; // eax
  struct CWnd *v9; // esi
  LPARAM *v10; // eax
  struct tagRECT v11; // [esp+2Ch] [ebp-30h] BYREF
  unsigned int v12; // [esp+3Ch] [ebp-20h] BYREF
  WNDPROC lpPrevWndFunc; // [esp+44h] [ebp-18h]
  LRESULT v14; // [esp+48h] [ebp-14h]
  int v15; // [esp+58h] [ebp-4h]

  v14 = 0;
  v15 = 0;
  lpPrevWndFunc = (WNDPROC)GetPropW(hWnd, L"AfxOldWndProc423");
  v4 = true;
  switch ( Msg )
  {
    case 6u:
      v9 = CWnd::FromHandle((int (__cdecl *)(unsigned int))lParam);
      v10 = (LPARAM *)CWnd::FromHandle((int (__cdecl *)(unsigned int))hWnd);
      _AfxHandleActivate(v10, wParam, v9);
LABEL_10:
      if ( !v4 )
        return v14;
      return CallWindowProcW(lpPrevWndFunc, hWnd, Msg, wParam, lParam);
    case 0x20u:
      v8 = CWnd::FromHandle((int (__cdecl *)(unsigned int))hWnd);
      v4 = _AfxHandleSetCursor(v8, (__int16)lParam, HIWORD(lParam)) == 0;
      goto LABEL_10;
    case 0x82u:
      SetWindowLongW(hWnd, -4, (LONG)lpPrevWndFunc);
      RemovePropW(hWnd, L"AfxOldWndProc423");
      AtomW = GlobalFindAtomW(L"AfxOldWndProc423");
      GlobalDeleteAtom(AtomW);
      return CallWindowProcW(lpPrevWndFunc, hWnd, Msg, wParam, lParam);
    default:
      break;
  }
  if ( Msg != 272 )
    return CallWindowProcW(lpPrevWndFunc, hWnd, Msg, wParam, lParam);
  v5 = (HWND *)CWnd::FromHandle((int (__cdecl *)(unsigned int))hWnd);
  _AfxPreInitDialog(v5, &v11, &v12);
  v14 = CallWindowProcW(lpPrevWndFunc, hWnd, 0x110u, wParam, lParam);
  _AfxPostInitDialog(v5, &v11, v12);
  return v14;
}

// Address: 0x10016843
LRESULT __stdcall _AfxCbtFilterHook(int code, HWND wParam, HANDLE *lParam)
{
  struct CNoTrackObject *Data; // edi
  struct AFX_MODULE_STATE **v5; // esi
  int v6; // eax
  LRESULT (__stdcall *v7)(HWND, UINT, WPARAM, LPARAM); // eax
  HANDLE PropW; // eax
  LRESULT v9; // esi
  struct tagWNDCLASSEXW wcx; // [esp+10h] [ebp-254h] BYREF
  ULONG_PTR v11[2]; // [esp+40h] [ebp-224h] BYREF
  LPARAM v12; // [esp+48h] [ebp-21Ch]
  int v13; // [esp+4Ch] [ebp-218h]
  HANDLE hData; // [esp+50h] [ebp-214h]
  WCHAR ClassName[262]; // [esp+54h] [ebp-210h] BYREF
  int v16; // [esp+260h] [ebp-4h]

  v12 = (LPARAM)lParam;
  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  if ( code != 3 )
    return CallNextHookEx(*((HHOOK *)Data + 10), code, (WPARAM)wParam, (LPARAM)lParam);
  v5 = *((struct AFX_MODULE_STATE ***)Data + 5);
  hData = *lParam;
  v6 = *((unsigned __int8 *)AfxGetModuleState() + 20);
  v13 = v6;
  if ( v5 != nullptr )
  {
    AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)v11, v5[7]);
    v16 = 0;
    CWnd::Attach((CWnd *)v5, wParam);
    (*((void (__thiscall **)(struct AFX_MODULE_STATE **))*v5 + 20))(v5);
    hData = (HANDLE)(*((int (__thiscall **)(struct AFX_MODULE_STATE **))*v5 + 62))(v5);
    v7 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SetWindowLongW(wParam, -4, (LONG)AfxWndProc);
    if ( v7 != AfxWndProc )
      *(_DWORD *)hData = v7;
    *((_DWORD *)Data + 5) = 0;
    v16 = -1;
    if ( v11[1] != 0 )
      sub_1000F87C(0, v11[0]);
    goto $lCallNextHook$196308;
  }
  if ( (*((_DWORD *)hData + 8) & 0x40000000) == 0 && v6 == 0 )
  {
    if ( word_10040B04 != 0
      || (memset(&wcx, 0, sizeof(wcx)),
          wcx.cbSize = 48,
          word_10040B04 = AfxCtxGetClassInfoExW(nullptr, L"#32768", &wcx),
          word_10040B04 != 0) )
    {
      if ( (unsigned __int16)GetClassLongW(wParam, -32) == word_10040B04 )
        goto $lCallNextHook$196308;
LABEL_18:
      hData = (HANDLE)GetWindowLongW(wParam, -4);
      if ( hData != nullptr && GetPropW(wParam, L"AfxOldWndProc423") == nullptr )
      {
        SetPropW(wParam, L"AfxOldWndProc423", hData);
        PropW = GetPropW(wParam, L"AfxOldWndProc423");
        if ( PropW == hData )
        {
          GlobalAddAtomW(L"AfxOldWndProc423");
          SetWindowLongW(wParam, -4, (LONG)_AfxActivationWndProc);
        }
      }
      goto $lCallNextHook$196308;
    }
    if ( GetClassNameW(wParam, ClassName, 256) == 0 )
      goto LABEL_18;
    ClassName[255] = 0;
    if ( wcscmp(ClassName, L"#32768") != 0 )
      goto LABEL_18;
  }
$lCallNextHook$196308:
  v9 = CallNextHookEx(*((HHOOK *)Data + 10), 3, (WPARAM)wParam, v12);
  if ( v13 != 0 )
  {
    UnhookWindowsHookEx(*((HHOOK *)Data + 10));
    *((_DWORD *)Data + 10) = 0;
  }
  return v9;
}

// Address: 0x10016A63
void __stdcall AfxHookWindowCreate(struct CWnd *a1)
{
  struct CNoTrackObject *Data; // eax
  struct CNoTrackObject *v2; // esi
  DWORD CurrentThreadId; // eax
  HHOOK v4; // eax

  Data = CThreadLocalObject::GetData((CThreadLocalObject *)&unk_1003ECA4, CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  v2 = Data;
  if ( Data == nullptr )
    AfxThrowInvalidArgException();
  if ( *((struct CWnd **)Data + 5) != a1 )
  {
    if ( *((_DWORD *)Data + 10) == 0 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v4 = SetWindowsHookExW(5, (HOOKPROC)_AfxCbtFilterHook, nullptr, CurrentThreadId);
      *((_DWORD *)v2 + 10) = v4;
      if ( v4 == nullptr )
        AfxThrowMemoryException();
    }
    *((_DWORD *)v2 + 5) = a1;
  }
}

// Address: 0x10016ABD
BOOL __thiscall sub_10016ABD(
        struct CWnd *this,
        DWORD a2,
        const WCHAR *a3,
        const WCHAR *a4,
        DWORD a5,
        int a6,
        int a7,
        int a8,
        int a9,
        HWND a10,
        HMENU a11,
        void *a12)
{
  HWND Window; // edi
  void *lpParam; // [esp+8h] [ebp-30h] BYREF
  HINSTANCE hInstance; // [esp+Ch] [ebp-2Ch]
  HMENU hMenu; // [esp+10h] [ebp-28h]
  HWND hWndParent; // [esp+14h] [ebp-24h]
  int nHeight; // [esp+18h] [ebp-20h]
  int nWidth; // [esp+1Ch] [ebp-1Ch]
  int Y; // [esp+20h] [ebp-18h]
  int X; // [esp+24h] [ebp-14h]
  DWORD dwStyle; // [esp+28h] [ebp-10h]
  LPCWSTR lpWindowName; // [esp+2Ch] [ebp-Ch]
  LPCWSTR lpClassName; // [esp+30h] [ebp-8h]
  DWORD dwExStyle; // [esp+34h] [ebp-4h]

  if ( a4 != nullptr && !unknown_libname_34((int)a4, -1) )
    AfxThrowInvalidArgException();
  dwExStyle = a2;
  lpClassName = a3;
  dwStyle = a5;
  X = a6;
  Y = a7;
  nWidth = a8;
  nHeight = a9;
  hWndParent = a10;
  lpWindowName = a4;
  hMenu = a11;
  hInstance = *((HINSTANCE *)AfxGetModuleState() + 2);
  lpParam = a12;
  if ( (*(int (__thiscall **)(struct CWnd *, void **))(*(_DWORD *)this + 100))(this, &lpParam) != 0 )
  {
    AfxHookWindowCreate(this);
    Window = AfxCtxCreateWindowExW(
               dwExStyle,
               lpClassName,
               lpWindowName,
               dwStyle,
               X,
               Y,
               nWidth,
               nHeight,
               hWndParent,
               hMenu,
               hInstance,
               lpParam);
    if ( AfxUnhookWindowCreate() == 0 )
      (*(void (__thiscall **)(struct CWnd *))(*(_DWORD *)this + 284))(this);
    return Window != nullptr;
  }
  else
  {
    (*(void (__thiscall **)(struct CWnd *))(*(_DWORD *)this + 284))(this);
    return false;
  }
}

// Address: 0x10016B9C
void __thiscall CWnd::PrepareForHelp(HWND *this)
{
  struct CWnd *TopLevelParent; // eax
  struct CWnd *v3; // ebx
  HWND Capture; // eax

  if ( (*((int (__thiscall **)(HWND *))*this + 74))(this) != 0 )
    (*((void (__thiscall **)(HWND *))*this + 98))(this);
  SendMessageW(*(this + 8), 0x1Fu, 0, 0);
  CWnd::SendMessageToDescendants(*(this + 8), 0x1Fu, 0, 0, 1, 1);
  TopLevelParent = CWnd::GetTopLevelParent((CWnd *)this);
  v3 = TopLevelParent;
  if ( TopLevelParent == nullptr )
    AfxThrowInvalidArgException();
  SendMessageW(*((HWND *)TopLevelParent + 8), 0x1Fu, 0, 0);
  CWnd::SendMessageToDescendants(*((HWND *)v3 + 8), 0x1Fu, 0, 0, 1, 1);
  Capture = GetCapture();
  if ( Capture != nullptr )
    SendMessageW(Capture, 0x1Fu, 0, 0);
}

// Address: 0x10016C1A
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_65(LPARAM *this, unsigned int a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // eax
  struct CWnd *v8; // eax
  int v9; // eax
  unsigned int *v10; // ebx
  _DWORD *v11; // ebx
  unsigned int *v12; // eax
  int v13; // ebx
  _DWORD *v14; // eax
  int (__thiscall *v15)(LPARAM *, struct CDC *); // ebx
  int v16; // eax
  _DWORD *i; // eax
  struct CWnd *v19; // eax
  int v20; // eax
  struct CWnd *v21; // eax
  struct CWnd *v22; // eax
  int v23; // eax
  HWND v24; // eax
  int v25; // esi
  struct CWnd *v26; // eax
  int v27; // eax
  void *ValueAt; // eax
  int v29; // eax
  int v30; // eax
  struct CWnd *v31; // eax
  struct CWnd *v32; // eax
  int v33; // eax
  struct CMenu *v34; // eax
  struct CDC *v35; // eax
  struct CWnd *v36; // eax
  struct CWnd *v37; // eax
  int v38; // edx
  int v39; // ecx
  struct CWnd *v40; // eax
  struct CWnd *v41; // [esp-8h] [ebp-94h]
  unsigned int v42; // [esp-4h] [ebp-90h]
  struct CDC *v43; // [esp-4h] [ebp-90h]
  HWND v44; // [esp-4h] [ebp-90h]
  int v45; // [esp-4h] [ebp-90h]
  struct CMenu *v46; // [esp-4h] [ebp-90h]
  unsigned int v47; // [esp-4h] [ebp-90h]
  unsigned int v48; // [esp-4h] [ebp-90h]
  struct CWnd *v49; // [esp-4h] [ebp-90h]
  struct CWnd *v50; // [esp-4h] [ebp-90h]
  struct CMenu *v51; // [esp-4h] [ebp-90h]
  _BYTE v52[32]; // [esp+10h] [ebp-7Ch] BYREF
  void *v53; // [esp+30h] [ebp-5Ch]
  void *v54; // [esp+60h] [ebp-2Ch]
  char v55[4]; // [esp+64h] [ebp-28h] BYREF
  int v56; // [esp+68h] [ebp-24h]
  unsigned int *v57; // [esp+74h] [ebp-18h]
  int v58; // [esp+78h] [ebp-14h] BYREF
  _DWORD v59[3]; // [esp+7Ch] [ebp-10h] BYREF
  int v60; // [esp+88h] [ebp-4h]
  int v61; // [esp+94h] [ebp+8h]
  HDC v62; // [esp+98h] [ebp+Ch]
  HWND v63; // [esp+9Ch] [ebp+10h]
  HWND v64; // [esp+9Ch] [ebp+10h]

  v59[0] = 0;
  v58 = 0x7FFFFFFF;
  v60 = 0;
  if ( a2 != 273 )
  {
    if ( a2 != 78 )
    {
      if ( a2 == 6 )
      {
        v8 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a4);
        _AfxHandleActivate(this, a3, v8);
      }
      if ( a2 == 32 && _AfxHandleSetCursor((struct CWnd *)this, (__int16)a4, HIWORD(a4)) != 0 )
        goto LABEL_3;
      v9 = *(this + 19);
      if ( v9 != 0
        && *(int *)(v9 + 116) > 0
        && (a2 >= 0x200 && a2 <= 0x209 || a2 >= 0x100 && a2 <= 0x10F || a2 - 641 <= 0x10)
        && (*(int (__thiscall **)(_DWORD, unsigned int, unsigned int, unsigned int, _DWORD *))(*(_DWORD *)*(this + 19)
                                                                                             + 148))(
             *(this + 19),
             a2,
             a3,
             a4,
             v59) != 0 )
      {
        goto LABEL_112;
      }
      v63 = (HWND)(*(int (__thiscall **)(LPARAM *))(*this + 40))(this);
      CInternalGlobalLock::Lock((CInternalGlobalLock *)&v58, 7);
      v10 = &dword_1003F178[3 * (((unsigned __int16)a2 ^ (unsigned __int16)v63) & 0x1FF)];
      v57 = v10;
      if ( a2 == *v10 && v63 == (HWND)v10[2] )
      {
        v11 = (_DWORD *)v10[1];
        v64 = (HWND)dword_1003F178[3 * (((unsigned __int16)a2 ^ (unsigned __int16)v63) & 0x1FF) + 1];
        CInternalGlobalLock::Unlock((CInternalGlobalLock *)&v58);
        if ( v11 == nullptr )
          goto LABEL_39;
        if ( a2 < 0xC000 )
        {
LABEL_30:
          v15 = *((int (__thiscall **)(LPARAM *, struct CDC *))v64 + 5);
          v16 = *((_DWORD *)v64 + 4);
          switch ( v16 )
          {
            case 1:
              v43 = CDC::FromHandle((int (__cdecl *)(unsigned int))a3);
              v20 = v15(this, v43);
              goto LABEL_111;
            case 2:
            case 3:
            case 4:
            case 27:
            case 28:
              v20 = v15(this, (struct CDC *)a3);
              goto LABEL_111;
            case 5:
            case 12:
              v22 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a3);
              v20 = ((int (__thiscall *)(LPARAM *, struct CWnd *, _DWORD, unsigned int))v15)(
                      this,
                      v22,
                      (unsigned __int16)a4,
                      HIWORD(a4));
              goto LABEL_111;
            case 6:
            case 71:
              v42 = a4;
              v19 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a3);
              goto LABEL_41;
            case 7:
            case 13:
            case 74:
              v20 = v15(this, (struct CDC *)a4);
              goto LABEL_111;
            case 8:
              CDC::CDC((CDC *)v55);
              v23 = *(_DWORD *)(a4 + 4);
              LOBYTE(v60) = 1;
              v56 = v23;
              CWnd::CWnd((CWnd *)v52);
              v24 = *(HWND *)a4;
              v25 = *(_DWORD *)(a4 + 8);
              LOBYTE(v60) = 2;
              v53 = v24;
              v26 = CWnd::FromHandlePermanent(v24);
              if ( v26 == nullptr )
              {
                v27 = *(this + 19);
                if ( v27 != 0 )
                {
                  ValueAt = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(v27 + 36), v53);
                  if ( ValueAt != nullptr )
                    v54 = ValueAt;
                }
                v26 = (struct CWnd *)v52;
              }
              v29 = ((int (__thiscall *)(LPARAM *, char *, struct CWnd *, int))v15)(this, v55, v26, v25);
              v56 = 0;
              v53 = nullptr;
              v59[0] = v29;
              LOBYTE(v60) = 1;
              CWnd::~CWnd((CWnd *)v52);
              goto LABEL_57;
            case 9:
              CDC::CDC((CDC *)v55);
              v45 = *(_DWORD *)(a4 + 8);
              v56 = *(_DWORD *)(a4 + 4);
              LOBYTE(v60) = 3;
              v30 = ((int (__thiscall *)(LPARAM *, char *, int))v15)(this, v55, v45);
              v56 = 0;
              v59[0] = v30;
LABEL_57:
              LOBYTE(v60) = 0;
              CDC::~CDC((CDC *)v55);
              goto LABEL_112;
            case 10:
              v46 = (struct CMenu *)HIWORD(a3);
              v31 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a4);
              goto LABEL_60;
            case 11:
              v42 = HIWORD(a3);
              v19 = (struct CWnd *)(unsigned __int16)a3;
              goto LABEL_41;
            case 14:
            case 47:
            case 79:
              goto LABEL_109;
            case 15:
              v46 = CMenu::FromHandle((HMENU)a4);
              v31 = (struct CWnd *)HIWORD(a3);
LABEL_60:
              v20 = ((int (__thiscall *)(LPARAM *, _DWORD, struct CWnd *, struct CMenu *))v15)(
                      this,
                      (unsigned __int16)a3,
                      v31,
                      v46);
              goto LABEL_111;
            case 16:
            case 18:
            case 21:
            case 30:
            case 45:
            case 50:
            case 76:
            case 83:
              v44 = (HWND)a4;
              goto LABEL_106;
            case 17:
            case 20:
            case 84:
              v15(this, (struct CDC *)a3);
              goto LABEL_112;
            case 19:
              ((void (__thiscall *)(LPARAM *))v15)(this);
              goto LABEL_112;
            case 22:
              v47 = HIWORD(a3);
              v32 = (struct CWnd *)(unsigned __int16)a3;
              goto LABEL_67;
            case 23:
              v47 = SHIWORD(a4);
              v32 = (struct CWnd *)(__int16)a4;
              goto LABEL_67;
            case 24:
            case 25:
              v48 = HIWORD(a4);
              v33 = (unsigned __int16)a4;
              goto LABEL_70;
            case 26:
              v21 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a4);
              goto LABEL_47;
            case 29:
            case 40:
            case 49:
              v20 = ((int (__thiscall *)(LPARAM *))v15)(this);
              goto LABEL_111;
            case 31:
              v49 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a3);
              v41 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a4);
              v34 = (struct CMenu *)(*(this + 8) == a4);
              goto LABEL_72;
            case 32:
              v35 = CDC::FromHandle((int (__cdecl *)(unsigned int))a3);
              goto LABEL_74;
            case 33:
              v35 = CMenu::FromHandle((HMENU)a3);
              goto LABEL_74;
            case 34:
              v49 = (struct CWnd *)SHIWORD(a4);
              v41 = (struct CWnd *)(__int16)a4;
              v34 = CMenu::FromHandle((HMENU)a3);
              goto LABEL_72;
            case 35:
              v35 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a3);
              goto LABEL_74;
            case 36:
              v35 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a4);
LABEL_74:
              v15(this, v35);
              goto LABEL_112;
            case 37:
              v49 = (struct CWnd *)HIWORD(a4);
              v36 = (struct CWnd *)(unsigned __int16)a4;
              goto LABEL_81;
            case 38:
              v36 = (struct CWnd *)(__int16)a4;
              v49 = (struct CWnd *)SHIWORD(a4);
LABEL_81:
              v41 = v36;
              v34 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a3);
              goto LABEL_72;
            case 39:
              v47 = a4;
              v32 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a3);
              goto LABEL_67;
            case 41:
              v49 = (struct CWnd *)HIWORD(a3);
              v37 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a4);
              goto LABEL_85;
            case 42:
            case 43:
              v38 = (__int16)a3;
              v39 = SHIWORD(a3);
              v61 = (__int16)a3;
              v62 = (HDC)SHIWORD(a3);
              if ( v16 == 42 )
              {
                v50 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a4);
                ((void (__thiscall *)(LPARAM *, int, HDC, struct CWnd *))v15)(this, v61, v62, v50);
              }
              else
              {
                ((void (__thiscall *)(LPARAM *, int, int))v15)(this, v38, v39);
              }
              goto LABEL_112;
            case 44:
            case 51:
              v15(this, (struct CDC *)a4);
              goto LABEL_112;
            case 46:
            case 54:
            case 82:
              ((void (__thiscall *)(LPARAM *, unsigned int, unsigned int))v15)(this, a3, a4);
              goto LABEL_3;
            case 48:
            case 70:
              v19 = (struct CWnd *)(__int16)a4;
              v42 = SHIWORD(a4);
LABEL_41:
              v20 = ((int (__thiscall *)(LPARAM *, struct CWnd *, unsigned int))v15)(this, v19, v42);
              goto LABEL_111;
            case 52:
              v49 = (struct CWnd *)a4;
              v37 = (struct CWnd *)HIWORD(a3);
LABEL_85:
              v41 = v37;
              v34 = (struct CMenu *)(unsigned __int16)a3;
LABEL_72:
              ((void (__thiscall *)(LPARAM *, struct CMenu *, struct CWnd *, struct CWnd *))v15)(this, v34, v41, v49);
              goto LABEL_112;
            case 53:
              v33 = (__int16)a4;
              v48 = SHIWORD(a4);
LABEL_70:
              ((void (__thiscall *)(LPARAM *, unsigned int, int, unsigned int))v15)(this, a3, v33, v48);
              goto LABEL_112;
            case 55:
              v6 = ((int (__thiscall *)(LPARAM *, _DWORD, unsigned int, _DWORD, _DWORD))v15)(
                     this,
                     (unsigned __int16)a3,
                     HIWORD(a3),
                     (__int16)a4,
                     SHIWORD(a4));
              v59[0] = v6;
              goto LABEL_7;
            case 56:
              ((void (__thiscall *)(LPARAM *, _DWORD, unsigned int, _DWORD, _DWORD))v15)(
                this,
                (unsigned __int16)a3,
                HIWORD(a3),
                (__int16)a4,
                SHIWORD(a4));
              goto LABEL_112;
            case 69:
              v59[0] = ((int (__thiscall *)(LPARAM *))v15)(this);
              if ( v59[0] != 0 )
                goto LABEL_39;
              goto LABEL_112;
            case 72:
              v21 = CMenu::FromHandle((HMENU)a4);
LABEL_47:
              v44 = (HWND)v21;
LABEL_106:
              ((void (__thiscall *)(LPARAM *, unsigned int, HWND))v15)(this, a3, v44);
              goto LABEL_112;
            case 73:
              v51 = CMenu::FromHandle((HMENU)a4);
              goto LABEL_110;
            case 75:
              v47 = a4;
              v32 = CMenu::FromHandle((HMENU)a3);
              goto LABEL_67;
            case 77:
              v40 = CWnd::FromHandle((int (__cdecl *)(unsigned int))a3);
              ((void (__thiscall *)(LPARAM *, struct CWnd *, unsigned int, int, _DWORD))v15)(
                this,
                v40,
                HIWORD(a4) & 0xFFF,
                HIWORD(a4) & 0xF000,
                (unsigned __int16)a4);
              goto LABEL_3;
            case 78:
              v32 = (struct CWnd *)(unsigned __int8)a3;
              v47 = a4;
LABEL_67:
              ((void (__thiscall *)(LPARAM *, struct CWnd *, unsigned int))v15)(this, v32, v47);
              break;
            case 80:
              ((void (__thiscall *)(LPARAM *, _DWORD, unsigned int, _DWORD, _DWORD))v15)(
                this,
                (unsigned __int16)a3,
                HIWORD(a3),
                (__int16)a4,
                SHIWORD(a4));
              goto LABEL_3;
            case 81:
              ((void (__thiscall *)(LPARAM *, unsigned int, unsigned int, _DWORD, _DWORD))v15)(
                this,
                a3,
                HIWORD(a3),
                (__int16)a4,
                SHIWORD(a4));
              goto LABEL_3;
            default:
              goto LABEL_112;
          }
          goto LABEL_112;
        }
      }
      else
      {
        v12 = v57;
        v13 = (int)v63;
        *v57 = a2;
        v12[2] = (unsigned int)v63;
        while ( 1 )
        {
          if ( *(_DWORD *)v13 == 0 )
          {
            v57[1] = 0;
            CInternalGlobalLock::Unlock((CInternalGlobalLock *)&v58);
            goto LABEL_39;
          }
          if ( a2 >= 0xC000 )
            break;
          v14 = unknown_libname_40(*(_DWORD **)(v13 + 4), a2, 0, 0);
          v64 = (HWND)v14;
          if ( v14 != nullptr )
          {
            v57[1] = (unsigned int)v14;
            CInternalGlobalLock::Unlock((CInternalGlobalLock *)&v58);
            goto LABEL_30;
          }
LABEL_36:
          v13 = (*(int (**)(void))v13)();
          v63 = (HWND)v13;
        }
        for ( i = unknown_libname_40(*((_DWORD **)v63 + 1), 49152, 0, 0); ; i = unknown_libname_40(i + 6, 49152, 0, 0) )
        {
          v11 = i;
          if ( i == nullptr )
          {
            v13 = (int)v63;
            goto LABEL_36;
          }
          if ( *(_DWORD *)i[4] == a2 )
            break;
        }
        v57[1] = (unsigned int)i;
        CInternalGlobalLock::Unlock((CInternalGlobalLock *)&v58);
      }
      v15 = (int (__thiscall *)(LPARAM *, struct CDC *))v11[5];
LABEL_109:
      v51 = (struct CMenu *)a4;
LABEL_110:
      v20 = ((int (__thiscall *)(LPARAM *, unsigned int, struct CMenu *))v15)(this, a3, v51);
LABEL_111:
      v59[0] = v20;
      goto LABEL_112;
    }
    if ( *(_DWORD *)a4 != 0 )
    {
      v6 = (*(int (__thiscall **)(LPARAM *, unsigned int, unsigned int, _DWORD *))(*this + 244))(this, a3, a4, v59);
LABEL_7:
      if ( v6 != 0 )
        goto LABEL_112;
    }
LABEL_39:
    v60 = -1;
    CInternalGlobalLock::Unlock((CInternalGlobalLock *)&v58);
    return 0;
  }
  if ( (*(int (__thiscall **)(LPARAM *, unsigned int, unsigned int))(*this + 240))(this, a3, a4) == 0 )
    goto LABEL_39;
LABEL_3:
  v59[0] = 1;
LABEL_112:
  if ( a5 != nullptr )
    *a5 = v59[0];
  v60 = -1;
  CInternalGlobalLock::Unlock((CInternalGlobalLock *)&v58);
  return 1;
}

// Address: 0x1001732E
int __thiscall CWnd::ReflectChildNotify(LPARAM *this, unsigned int a2, HDC a3, HWND a4, int *a5)
{
  int v5; // edx
  int result; // eax
  struct HWND__ v7; // [esp+4h] [ebp-Ch] BYREF
  HDC v8; // [esp+8h] [ebp-8h] BYREF
  HWND v9; // [esp+Ch] [ebp-4h]

  if ( a2 > 0x111 )
  {
    if ( a2 < 0x114 || a2 > 0x115 && a2 != 528 )
      goto LABEL_15;
    return unknown_libname_65(this, a2 + 48128, (unsigned int)a3, (unsigned int)a4, a5);
  }
  if ( a2 != 273 )
  {
    if ( a2 < 0x2B )
      goto LABEL_15;
    if ( a2 > 0x2F && a2 != 57 )
    {
      if ( a2 == 78 )
      {
        v5 = *((_DWORD *)a4 + 2);
        v8 = (HDC)a5;
        v9 = a4;
        return CCmdTarget::OnCmdMsg((CCmdTarget *)this, 0, (unsigned __int16)v5 | 0xBC4E0000, &v8, nullptr);
      }
LABEL_15:
      if ( a2 - 306 > 6 )
        return 0;
      v9 = (HWND)(a2 - 306);
      v8 = a3;
      result = unknown_libname_65(this, 0xBC19u, 0, (unsigned int)&v7, a5);
      if ( *a5 == 0 )
        return 0;
      return result;
    }
    return unknown_libname_65(this, a2 + 48128, (unsigned int)a3, (unsigned int)a4, a5);
  }
  if ( CCmdTarget::OnCmdMsg((CCmdTarget *)this, 0, ((unsigned int)a3 >> 16) | 0xBD110000, nullptr, nullptr) == 0 )
    return 0;
  result = 1;
  if ( a5 != nullptr )
    *a5 = 1;
  return result;
}

// Address: 0x10017415
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_68(CWnd *this, int a2, int a3)
{
  dword_1003F170 = 0;
  if ( *((_DWORD *)this + 19) != 0 )
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 19) + 80))(*((_DWORD *)this + 19), -705);
  return CWnd::OnDisplayChange((HWND *)this, 0, 0);
}

// Address: 0x10017441
int __thiscall CWnd::CreateAccessibleProxy(LPUNKNOWN *this, WPARAM wParam, IUnknown *a3, int *a4)
{
  int v5; // edi
  int v6; // eax
  LONG_PTR v7; // eax
  LONG_PTR v8; // eax
  int (__stdcall ***v10)(_DWORD, void *, int); // [esp+10h] [ebp-10h] BYREF
  int v11; // [esp+1Ch] [ebp-4h]

  v5 = -2147467259;
  if ( a3 == (IUnknown *)-4 )
  {
    v5 = ((int (__thiscall *)(LPUNKNOWN *))(*this)[36].lpVtbl)(this);
    if ( v5 >= 0 )
    {
      if ( *(this + 11) != nullptr )
      {
        v8 = LresultFromObject(&stru_1002CC74, wParam, *(this + 11));
        *a4 = v8;
        return 0;
      }
      else
      {
        v5 = unknown_libname_63(&v10);
        if ( v5 >= 0 )
        {
          a3 = nullptr;
          v11 = 0;
          if ( sub_10013A44(v10, (int)&a3) >= 0 )
          {
            v6 = (int)a3;
            *(this + 11) = a3;
            (*(void (__stdcall **)(int, char *, char *))(*(_DWORD *)v6 + 12))(v6, (char *)this + 48, (char *)this + 52);
            v7 = LresultFromObject(&stru_1002CC74, wParam, *(this + 11));
            *a4 = v7;
          }
          v11 = -1;
          v5 = 0;
          if ( a3 != nullptr )
            a3->lpVtbl->Release(a3);
        }
      }
    }
  }
  return v5;
}

// Address: 0x100174FB
// bad sp value at call has been detected, the output may be wrong!
void __thiscall CWaitCursor::~CWaitCursor(CWaitCursor *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v2; // [esp+428h] [ebp-4h]

  v2 = 0;
  ModuleState = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*((CCmdTarget **)ModuleState + 1));
}

// Address: 0x100175C8
void __thiscall sub_100175C8(HWND *this, ULONG_PTR a2, UINT uCommand)
{
  int v4; // esi
  struct CWnd *TopLevelParent; // eax

  v4 = *((_DWORD *)AfxGetModuleState() + 1);
  CWaitCursor::CWaitCursor((CWaitCursor *)((char *)&a2 + 3));
  CWnd::PrepareForHelp(this);
  TopLevelParent = CWnd::GetTopLevelParent((CWnd *)this);
  if ( TopLevelParent == nullptr )
    AfxThrowInvalidArgException();
  if ( !WinHelpW(*((HWND *)TopLevelParent + 8), *(LPCWSTR *)(v4 + 100), uCommand, a2) )
    AfxMessageBox(0xF107u, 0, 0xFFFFFFFF);
  CWaitCursor::~CWaitCursor((CWaitCursor *)((char *)&a2 + 3));
}

// Address: 0x10017638
void __thiscall sub_10017638(HWND *this, int a2, int a3)
{
  int v4; // esi
  struct CWnd *TopLevelParent; // eax

  v4 = *((_DWORD *)AfxGetModuleState() + 1);
  CWaitCursor::CWaitCursor((CWaitCursor *)((char *)&a2 + 3));
  CWnd::PrepareForHelp(this);
  TopLevelParent = CWnd::GetTopLevelParent((CWnd *)this);
  if ( TopLevelParent == nullptr )
    AfxThrowInvalidArgException();
  if ( unknown_libname_62(*((_DWORD *)TopLevelParent + 8), *(_DWORD *)(v4 + 100), a3, a2) == 0 )
    AfxMessageBox(0xF107u, 0, 0xFFFFFFFF);
  CWaitCursor::~CWaitCursor((CWaitCursor *)((char *)&a2 + 3));
}

// Address: 0x100176A7
LRESULT __thiscall CWnd::OnChildNotify(LPARAM *this, unsigned int a2, HDC wParam, HWND a4, int *a5)
{
  LRESULT result; // eax

  if ( *(this + 20) == 0 )
    return CWnd::ReflectChildNotify(this, a2, wParam, a4, a5);
  result = CWnd::SendMessageW((HWND *)this, a2 + 0x2000, (WPARAM)wParam, (LPARAM)a4);
  if ( a2 - 306 > 6 || result != 0 )
  {
    if ( a5 != nullptr )
      *a5 = result;
    return 1;
  }
  return result;
}

// Address: 0x100176F0
int (**sub_100176F0())()
{
  return &off_1002CE5C;
}

// Address: 0x100176F6
int __stdcall AfxRegisterClass(WNDCLASSW *lpWndClass)
{
  int *v2; // esi
  struct tagWNDCLASSW WndClass; // [esp+14h] [ebp-38h] BYREF
  int v4; // [esp+48h] [ebp-4h]

  if ( !AfxCtxGetClassInfoW(lpWndClass->hInstance, lpWndClass->lpszClassName, &WndClass) )
  {
    if ( AfxCtxRegisterClassW(lpWndClass) == 0 )
      return 0;
    if ( *((_BYTE *)AfxGetModuleState() + 20) != 0 )
    {
      AfxLockGlobals(1u);
      v4 = 0;
      v2 = (int *)((char *)AfxGetModuleState() + 52);
      sub_1000CABC(v2, (__int16 *)lpWndClass->lpszClassName);
      unknown_libname_13(v2, 10);
      v4 = -1;
      AfxUnlockGlobals(1u);
    }
  }
  return 1;
}

// Address: 0x10017783
int __stdcall _AfxRegisterWithIcon(WNDCLASSW *lpWndClass, const wchar_t *a2, unsigned __int16 a3)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  HICON IconW; // eax

  lpWndClass->lpszClassName = a2;
  ModuleState = AfxGetModuleState();
  IconW = LoadIconW(*((HINSTANCE *)ModuleState + 3), (LPCWSTR)a3);
  lpWndClass->hIcon = IconW;
  if ( IconW == nullptr )
    lpWndClass->hIcon = LoadIconW(nullptr, (LPCWSTR)0x7F00);
  return AfxRegisterClass(lpWndClass);
}

// Address: 0x100177C7
BOOL __stdcall AfxEndDeferRegisterClass(int a1)
{
  int v2; // esi
  struct AFX_MODULE_STATE *v3; // ecx
  WNDCLASSW WndClass; // [esp+0h] [ebp-34h] BYREF
  struct tagINITCOMMONCONTROLSEX v5; // [esp+28h] [ebp-Ch] BYREF
  struct AFX_MODULE_STATE *ModuleState; // [esp+30h] [ebp-4h]
  int v7; // [esp+3Ch] [ebp+8h]

  ModuleState = AfxGetModuleState();
  v7 = ~*((_DWORD *)ModuleState + 6) & a1;
  if ( v7 == 0 )
    return true;
  v2 = 0;
  memset(&WndClass, 0, sizeof(WndClass));
  WndClass.lpfnWndProc = DefWindowProcW;
  WndClass.hInstance = *((HINSTANCE *)AfxGetModuleState() + 2);
  WndClass.hCursor = (HCURSOR)dword_1003EF28;
  v5.dwSize = 8;
  if ( (v7 & 1) != 0 )
  {
    WndClass.style = 11;
    WndClass.lpszClassName = L"AfxWnd90su";
    v2 = AfxRegisterClass(&WndClass) != 0;
  }
  if ( (v7 & 0x20) != 0 )
  {
    WndClass.style |= 0x8Bu;
    WndClass.lpszClassName = L"AfxOleControl90su";
    if ( AfxRegisterClass(&WndClass) != 0 )
      v2 |= 0x20u;
  }
  if ( (v7 & 2) != 0 )
  {
    WndClass.style = 0;
    WndClass.lpszClassName = L"AfxControlBar90su";
    WndClass.hbrBackground = (HBRUSH)16;
    if ( AfxRegisterClass(&WndClass) != 0 )
      v2 |= 2u;
  }
  if ( (v7 & 4) != 0 )
  {
    WndClass.style = 8;
    WndClass.hbrBackground = nullptr;
    if ( _AfxRegisterWithIcon(&WndClass, L"AfxMDIFrame90su", 0x7A01u) != 0 )
      v2 |= 4u;
  }
  if ( (v7 & 8) != 0 )
  {
    WndClass.style = 11;
    WndClass.hbrBackground = (HBRUSH)6;
    if ( _AfxRegisterWithIcon(&WndClass, L"AfxFrameOrView90su", 0x7A02u) != 0 )
      v2 |= 8u;
  }
  if ( (v7 & 0x10) != 0 )
  {
    v5.dwICC = 255;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 16320);
    v7 &= 0xFFFFC03F;
  }
  if ( (v7 & 0x40) != 0 )
  {
    v5.dwICC = 16;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 64);
  }
  if ( (v7 & 0x80u) != 0 )
  {
    v5.dwICC = 2;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 128);
  }
  if ( (v7 & 0x100) != 0 )
  {
    v5.dwICC = 8;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 256);
  }
  if ( (v7 & 0x200) != 0 )
  {
    v5.dwICC = 32;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 512);
  }
  if ( (v7 & 0x400) != 0 )
  {
    v5.dwICC = 1;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 1024);
  }
  if ( (v7 & 0x800) != 0 )
  {
    v5.dwICC = 64;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 2048);
  }
  if ( (v7 & 0x1000) != 0 )
  {
    v5.dwICC = 4;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 4096);
  }
  if ( (v7 & 0x2000) != 0 )
  {
    v5.dwICC = 128;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 0x2000);
  }
  if ( (v7 & 0x4000) != 0 )
  {
    v5.dwICC = 2048;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 0x4000);
  }
  if ( (v7 & 0x8000) != 0 )
  {
    v5.dwICC = 1024;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 0x8000);
  }
  if ( (v7 & 0x10000) != 0 )
  {
    v5.dwICC = 512;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 0x10000);
  }
  if ( (v7 & 0x20000) != 0 )
  {
    v5.dwICC = 256;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 0x20000);
  }
  if ( (v7 & 0x40000) != 0 )
  {
    v5.dwICC = 0x8000;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 0x40000);
  }
  if ( (v7 & 0x80000) != 0 )
  {
    v5.dwICC = 4096;
    v2 |= _AfxInitCommonControls((struct tagOFNW *)&v5, 0x80000);
  }
  v3 = ModuleState;
  *((_DWORD *)ModuleState + 6) |= v2;
  if ( (*((_DWORD *)v3 + 6) & 0x3FC0) == 0x3FC0 )
  {
    *((_DWORD *)v3 + 6) |= 0x10u;
    v2 |= 0x10u;
  }
  return (v7 & v2) == v7;
}

// Address: 0x10017AB9
int __stdcall sub_10017AB9(int a1)
{
  if ( *(_DWORD *)(a1 + 40) == 0 )
  {
    AfxEndDeferRegisterClass(1);
    *(_DWORD *)(a1 + 40) = L"AfxWnd90su";
  }
  return 1;
}

// Address: 0x10017ADE
int __thiscall CWnd::OnAmbientProperty(CWnd *this, struct COleControlSite *a2, int a3, struct tagVARIANT *a4)
{
  return (*(int (__thiscall **)(_DWORD, struct COleControlSite *, int, struct tagVARIANT *))(**((_DWORD **)this + 19)
                                                                                           + 88))(
           *((_DWORD *)this + 19),
           a2,
           a3,
           a4);
}

// Address: 0x10017AEC
LONG __thiscall CWnd::GetStyle(CWnd *this)
{
  if ( *((_DWORD *)this + 20) != 0 )
    return (*(unsigned int (__thiscall **)(_DWORD))(**((_DWORD **)this + 20) + 120))(*((_DWORD *)this + 20));
  else
    return GetWindowLongW(*((HWND *)this + 8), -16);
}

// Address: 0x10017B06
LONG __thiscall CWnd::GetExStyle(CWnd *this)
{
  if ( *((_DWORD *)this + 20) != 0 )
    return (*(unsigned int (__thiscall **)(_DWORD))(**((_DWORD **)this + 20) + 124))(*((_DWORD *)this + 20));
  else
    return GetWindowLongW(*((HWND *)this + 8), -20);
}

// Address: 0x10017B20
int __thiscall CWnd::ShowWindow(CWnd *this, int nCmdShow)
{
  if ( *((_DWORD *)this + 20) != 0 )
    return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 20) + 160))(*((_DWORD *)this + 20), nCmdShow);
  else
    return ShowWindow(*((HWND *)this + 8), nCmdShow);
}

// Address: 0x10017B47
int __thiscall CWnd::IsWindowEnabled(CWnd *this)
{
  if ( *((_DWORD *)this + 20) != 0 )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 20) + 164))(*((_DWORD *)this + 20));
  else
    return IsWindowEnabled(*((HWND *)this + 8));
}

// Address: 0x10017B62
int __thiscall CWnd::EnableWindow(CWnd *this, BOOL bEnable)
{
  if ( *((_DWORD *)this + 20) != 0 )
    return (*(int (__thiscall **)(_DWORD, BOOL))(**((_DWORD **)this + 20) + 168))(*((_DWORD *)this + 20), bEnable);
  else
    return EnableWindow(*((HWND *)this + 8), bEnable);
}

// Address: 0x10017B89
int __thiscall CWnd::SetWindowPos(CWnd *this, HWND hWndInsertAfter, int X, int Y, int a5, int cy, UINT uFlags)
{
  HWND v7; // eax

  if ( *((_DWORD *)this + 20) != 0 )
    return (*(int (__thiscall **)(_DWORD, HWND, int, int, int, int, UINT))(**((_DWORD **)this + 20) + 156))(
             *((_DWORD *)this + 20),
             hWndInsertAfter,
             X,
             Y,
             a5,
             cy,
             uFlags);
  v7 = hWndInsertAfter;
  if ( hWndInsertAfter != nullptr )
    v7 = *((HWND *)hWndInsertAfter + 8);
  return SetWindowPos(*((HWND *)this + 8), v7, X, Y, a5, cy, uFlags);
}

// Address: 0x10017BC7
void __thiscall CWnd::AttachControlSite(HWND *this, struct CHandleMap *a2)
{
  HWND Parent; // eax
  _DWORD **ValueAt; // eax

  if ( this != nullptr && *(this + 20) == nullptr )
  {
    Parent = GetParent(*(this + 8));
    ValueAt = (_DWORD **)CMapPtrToPtr::GetValueAt((struct CHandleMap *)((char *)a2 + 28), Parent);
    if ( ValueAt != nullptr && ValueAt[19] != nullptr )
      (*(void (__thiscall **)(_DWORD *, HWND *, _DWORD))(*ValueAt[19] + 156))(ValueAt[19], this, 0);
  }
}

// Address: 0x10017C0B
// MFC 3.1-14.0 32bit
void __thiscall unknown_libname_69(int this, int a2, int a3)
{
  int v3; // edi
  void *v5; // eax

  v3 = a2;
  if ( a2 == 0 )
    v3 = 17;
  if ( *(_DWORD *)(this + 4) != 0 )
  {
    operator delete(*(void **)(this + 4));
    *(_DWORD *)(this + 4) = 0;
  }
  if ( a3 != 0 )
  {
    v5 = operator new(4 * v3);
    *(_DWORD *)(this + 4) = v5;
    memset(v5, 0, 4 * v3);
  }
  *(_DWORD *)(this + 8) = v3;
}

// Address: 0x10017C69
// MFC 3.1-14.0 32bit
void __thiscall unknown_libname_70(int this)
{
  CPlex *v2; // ecx

  if ( *(_DWORD *)(this + 4) != 0 )
  {
    operator delete(*(void **)(this + 4));
    *(_DWORD *)(this + 4) = 0;
  }
  v2 = *(CPlex **)(this + 20);
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  CPlex::FreeDataChain(v2);
  *(_DWORD *)(this + 20) = 0;
}

// Address: 0x10017C96
void __thiscall sub_10017C96(_DWORD *this, _DWORD *a2)
{
  bool v2; // zf

  *a2 = *(this + 4);
  v2 = (*(this + 3))-- == 1;
  *(this + 4) = a2;
  if ( v2 )
    unknown_libname_70((int)this);
}

// Address: 0x10017CB4
// MFC 3.1-14.0 32bit
_DWORD *__thiscall unknown_libname_71(_DWORD *this, unsigned int a2, int *a3, unsigned int *a4)
{
  int v4; // edx
  int v5; // ecx
  _DWORD *result; // eax

  *a4 = a2 >> 4;
  v4 = (a2 >> 4) % *(this + 2);
  *a3 = v4;
  v5 = *(this + 1);
  if ( v5 != 0 )
  {
    for ( result = *(_DWORD **)(v5 + 4 * v4); result != nullptr; result = (_DWORD *)*result )
    {
      if ( result[1] == a2 )
        return result;
    }
  }
  return nullptr;
}

// Address: 0x10017CEF
void *__thiscall CMapPtrToPtr::GetValueAt(CMapPtrToPtr *this, unsigned int a2)
{
  int v2; // esi
  _DWORD *i; // edx

  if ( this == nullptr )
    AfxThrowInvalidArgException();
  v2 = *((_DWORD *)this + 1);
  if ( v2 == 0 )
    return nullptr;
  for ( i = *(_DWORD **)(v2 + 4 * ((a2 >> 4) % *((_DWORD *)this + 2))); ; i = (_DWORD *)*i )
  {
    if ( i == nullptr )
      return nullptr;
    if ( i[1] == a2 )
      break;
  }
  return (void *)i[2];
}

// Address: 0x10017D34
int __thiscall sub_10017D34(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  int result; // eax
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this;
  result = (int)unknown_libname_71(this, a2, (int *)&v4, &a2);
  if ( result != 0 )
  {
    *a3 = *(_DWORD *)(result + 8);
    return 1;
  }
  return result;
}

// Address: 0x10017D5D
int __thiscall sub_10017D5D(_DWORD *this, unsigned int a2)
{
  int v2; // esi
  int result; // eax
  int *v4; // edx

  v2 = *(this + 1);
  if ( v2 == 0 )
    return 0;
  v4 = (int *)(v2 + 4 * ((a2 >> 4) % *(this + 2)));
  for ( result = *v4; result != 0; result = *(_DWORD *)result )
  {
    if ( *(_DWORD *)(result + 4) == a2 )
    {
      *v4 = *(_DWORD *)result;
      sub_10017C96(this, (_DWORD *)result);
      return 1;
    }
    v4 = (int *)result;
  }
  return result;
}

// Address: 0x10017DA5
void __thiscall CMapPtrToPtr::GetNextAssoc(CMapPtrToPtr *this, struct __POSITION **a2, void **a3, void **a4)
{
  int v4; // esi
  unsigned int v5; // edx
  int v6; // edi
  int *i; // eax
  struct __POSITION *v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edx
  struct __POSITION **v11; // eax

  v4 = (int)*a2;
  if ( *a2 != nullptr )
  {
    if ( v4 == -1 )
    {
      v5 = *((_DWORD *)this + 2);
      v6 = 0;
      if ( v5 != 0 )
      {
        for ( i = *((int **)this + 1); ; ++i )
        {
          v4 = *i;
          if ( *i != 0 )
            break;
          if ( ++v6 >= v5 )
            AfxThrowInvalidArgException();
        }
      }
    }
    v8 = *(struct __POSITION **)v4;
    if ( *(_DWORD *)v4 == 0 )
    {
      v9 = *((_DWORD *)this + 2);
      v10 = (*(_DWORD *)(v4 + 4) >> 4) % v9 + 1;
      if ( v10 < v9 )
      {
        v11 = (struct __POSITION **)(*((_DWORD *)this + 1) + 4 * v10);
        do
        {
          v8 = *v11;
          if ( *v11 != nullptr )
            break;
          ++v10;
          ++v11;
        }
        while ( v10 < v9 );
      }
    }
    *a2 = v8;
    *a3 = *(void **)(v4 + 4);
    *a4 = *(void **)(v4 + 8);
  }
}

// Address: 0x10017E22
char **sub_10017E22()
{
  return &off_1002D178;
}

// Address: 0x10017E28
_DWORD *__thiscall sub_10017E28(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // ecx

  result = this;
  v3 = a2;
  *result = &CMapPtrToPtr::`vftable';
  if ( a2 <= 0 )
    v3 = 10;
  result[1] = 0;
  result[2] = 17;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = v3;
  return result;
}

// Address: 0x10017E5B
void __thiscall sub_10017E5B(int this)
{
  *(_DWORD *)this = &CMapPtrToPtr::`vftable';
  unknown_libname_70(this);
}

// Address: 0x10017E66
struct CMapPtrToPtr::CAssoc *__thiscall CMapPtrToPtr::NewAssoc(CMapPtrToPtr *this)
{
  struct CPlex *v2; // eax
  int v3; // ecx
  _DWORD *i; // eax
  struct CMapPtrToPtr::CAssoc *result; // eax
  int v6; // ecx

  if ( *((_DWORD *)this + 4) == 0 )
  {
    v2 = CPlex::Create((struct CPlex **)this + 5, *((_DWORD *)this + 6), 0xCu);
    v3 = *((_DWORD *)this + 6) - 1;
    for ( i = (_DWORD *)((char *)v2 + 12 * *((_DWORD *)this + 6) - 8); v3 >= 0; i -= 3 )
    {
      *i = *((_DWORD *)this + 4);
      *((_DWORD *)this + 4) = i;
      --v3;
    }
  }
  result = *((struct CMapPtrToPtr::CAssoc **)this + 4);
  v6 = *(_DWORD *)result;
  ++*((_DWORD *)this + 3);
  *((_DWORD *)this + 4) = v6;
  *((_DWORD *)result + 1) = 0;
  *((_DWORD *)result + 2) = 0;
  return result;
}

// Address: 0x10017EB6
int __thiscall sub_10017EB6(CMapPtrToPtr *this, unsigned int a2)
{
  unsigned int v2; // edi
  struct CMapPtrToPtr::CAssoc *v4; // eax
  unsigned int v5; // ecx
  unsigned int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  v4 = (struct CMapPtrToPtr::CAssoc *)unknown_libname_71(this, a2, (int *)&a2, &v7);
  if ( v4 == nullptr )
  {
    if ( *((_DWORD *)this + 1) == 0 )
      unknown_libname_69((int)this, *((_DWORD *)this + 2), 1);
    v4 = CMapPtrToPtr::NewAssoc(this);
    v5 = a2;
    *((_DWORD *)v4 + 1) = v2;
    v5 *= 4;
    *(_DWORD *)v4 = *(_DWORD *)(v5 + *((_DWORD *)this + 1));
    *(_DWORD *)(v5 + *((_DWORD *)this + 1)) = v4;
  }
  return (int)v4 + 8;
}

// Address: 0x10017F0D
int __thiscall sub_10017F0D(void *this, char a2)
{
  return unknown_libname_72(this, a2);
}

// Address: 0x10017F0F
// MFC 3.1-14.0 32bit
_DWORD *__thiscall unknown_libname_72(_DWORD *this, char a2)
{
  *this = &CMapPtrToPtr::`vftable';
  unknown_libname_70((int)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10017F34
void __thiscall CObList::RemoveAll(CObList *this)
{
  CPlex *v2; // ecx

  v2 = *((CPlex **)this + 5);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  CPlex::FreeDataChain(v2);
  *((_DWORD *)this + 5) = 0;
}

// Address: 0x10017F56
void __thiscall CObList::FreeNode(CObList *this, struct CObList::CNode *a2)
{
  bool v2; // zf

  if ( a2 == nullptr )
    AfxThrowInvalidArgException();
  *(_DWORD *)a2 = *((_DWORD *)this + 4);
  v2 = (*((_DWORD *)this + 3))-- == 1;
  *((_DWORD *)this + 4) = a2;
  if ( v2 )
    CObList::RemoveAll(this);
}

// Address: 0x10017F7D
struct CObject *__thiscall CObList::RemoveHead(CObList *this)
{
  struct CObList::CNode *v1; // edx
  int v2; // eax
  int v3; // esi

  if ( this == nullptr || (v1 = *((struct CObList::CNode **)this + 1)) == nullptr )
    AfxThrowInvalidArgException();
  v2 = *(_DWORD *)v1;
  v3 = *((_DWORD *)v1 + 2);
  *((_DWORD *)this + 1) = *(_DWORD *)v1;
  if ( v2 != 0 )
    *(_DWORD *)(v2 + 4) = 0;
  else
    *((_DWORD *)this + 2) = 0;
  CObList::FreeNode(this, v1);
  return (struct CObject *)v3;
}

// Address: 0x10017FAE
CFixedAllocNoSync *__thiscall CFixedAllocNoSync::CFixedAllocNoSync(
        CFixedAllocNoSync *this,
        unsigned int a2,
        unsigned int a3)
{
  CFixedAllocNoSync *result; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edx

  result = this;
  v4 = a2;
  if ( a2 < 4 )
    v4 = 4;
  v5 = a3;
  if ( a3 <= 1 )
    v5 = 64;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 2) = 0;
  *(_DWORD *)result = v4;
  *((_DWORD *)result + 1) = v5;
  return result;
}

// Address: 0x10017FDC
void __thiscall CFixedAllocNoSync::FreeAll(CPlex **this)
{
  CPlex::FreeDataChain(*(this + 2));
  *(this + 2) = nullptr;
  *(this + 3) = nullptr;
}

// Address: 0x10017FF3
// attributes: thunk
void __thiscall CFixedAllocNoSync::FreeAll(CPlex **this)
{
  ?FreeAll@CFixedAllocNoSync@@QAEXXZ(this);
}

// Address: 0x10017FF8
_DWORD *__thiscall CFixedAllocNoSync::Alloc(CFixedAllocNoSync *this)
{
  struct CPlex *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *result; // eax

  if ( *((_DWORD *)this + 3) == 0 )
  {
    v2 = CPlex::Create((struct CPlex **)this + 2, *((_DWORD *)this + 1), *(_DWORD *)this);
    v3 = *((_DWORD *)this + 1) - 1;
    v4 = (_DWORD *)((char *)v2 + v3 * *(_DWORD *)this + 4);
    while ( v3 >= 0 )
    {
      *v4 = *((_DWORD *)this + 3);
      *((_DWORD *)this + 3) = v4;
      --v3;
      v4 = (_DWORD *)((char *)v4 - *(_DWORD *)this);
    }
  }
  result = *((_DWORD **)this + 3);
  *((_DWORD *)this + 3) = *result;
  return result;
}

// Address: 0x1001803A
char **sub_1001803A()
{
  return &off_1003CB30;
}

// Address: 0x10018040
_DWORD *__thiscall sub_10018040(_DWORD *this)
{
  *this = &CByteArray::`vftable';
  *(this + 1) = 0;
  *(this + 4) = 0;
  *(this + 3) = 0;
  *(this + 2) = 0;
  return this;
}

// Address: 0x10018057
void __thiscall sub_10018057(_DWORD *this)
{
  void *v1; // [esp-4h] [ebp-4h]

  v1 = (void *)*(this + 1);
  *this = &CByteArray::`vftable';
  operator delete(v1);
}

// Address: 0x10018067
void __thiscall CByteArray::SetSize(CByteArray *this, int Size, int a3)
{
  ATL::Checked *v4; // ebx
  int v6; // ecx
  void *v7; // eax
  signed int v8; // ebx
  signed int v9; // eax
  int v10; // eax
  signed int Sizea; // [esp+14h] [ebp+8h]

  v4 = nullptr;
  if ( Size < 0 )
    goto LABEL_2;
  if ( a3 >= 0 )
    *((_DWORD *)this + 4) = a3;
  if ( Size != 0 )
  {
    v6 = *((_DWORD *)this + 1);
    if ( v6 != 0 )
    {
      v8 = *((_DWORD *)this + 3);
      if ( Size > v8 )
      {
        v10 = *((_DWORD *)this + 4);
        if ( v10 == 0 )
        {
          v10 = *((_DWORD *)this + 2) / 8;
          if ( v10 < 4 )
          {
            v10 = 4;
          }
          else if ( v10 > 1024 )
          {
            v10 = 1024;
          }
        }
        Sizea = v8 + v10;
        if ( Size >= v8 + v10 )
          Sizea = Size;
        if ( Sizea < v8 )
LABEL_2:
          AfxThrowInvalidArgException();
        v4 = (ATL::Checked *)operator new(Sizea);
        ATL::Checked::memcpy_s(v4, Sizea, *((void **)this + 1), *((_DWORD *)this + 2));
        memset((char *)v4 + *((_DWORD *)this + 2), 0, Size - *((_DWORD *)this + 2));
        operator delete(*((void **)this + 1));
        *((_DWORD *)this + 2) = Size;
        *((_DWORD *)this + 3) = Sizea;
        goto LABEL_23;
      }
      v9 = *((_DWORD *)this + 2);
      if ( Size > v9 )
        memset((void *)(v6 + v9), 0, Size - v9);
    }
    else
    {
      v7 = operator new(Size);
      *((_DWORD *)this + 1) = v7;
      memset(v7, 0, Size);
      *((_DWORD *)this + 3) = Size;
    }
    *((_DWORD *)this + 2) = Size;
    return;
  }
  operator delete(*((void **)this + 1));
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
LABEL_23:
  *((_DWORD *)this + 1) = v4;
}

// Address: 0x10018179
void __thiscall CByteArray::Serialize(CByteArray *this, void **a2)
{
  unsigned int v3; // edi
  char *j; // ebx
  rsize_t v5; // esi
  int Count; // eax
  unsigned int v7; // edi
  ATL::Checked *i; // esi
  rsize_t v9; // ebx

  if ( ((_BYTE)a2[6] & 1) != 0 )
  {
    Count = CArchive::ReadCount(a2);
    CByteArray::SetSize(this, Count, -1);
    v7 = *((_DWORD *)this + 2);
    for ( i = *((ATL::Checked **)this + 1); v7 != 0; v7 -= v9 )
    {
      v9 = 0x7FFFFFFF;
      if ( v7 < 0x7FFFFFFF )
        v9 = v7;
      CArchive::EnsureRead(a2, i, v9);
      i = (ATL::Checked *)((char *)i + v9);
    }
  }
  else
  {
    CArchive::WriteCount((CArchive *)a2, *((_DWORD *)this + 2));
    v3 = *((_DWORD *)this + 2);
    for ( j = *((char **)this + 1); v3 != 0; v3 -= v5 )
    {
      v5 = 0x7FFFFFFF;
      if ( v3 < 0x7FFFFFFF )
        v5 = v3;
      CArchive::Write(a2, j, v5);
      j += v5;
    }
  }
}

// Address: 0x100181F9
_DWORD *sub_100181F9()
{
  _DWORD *v0; // eax

  v0 = operator new(0x14u);
  if ( v0 != nullptr )
    return sub_10018040(v0);
  else
    return nullptr;
}

// Address: 0x1001820F
_DWORD *__thiscall sub_1001820F(_DWORD *this, char a2)
{
  sub_10018057(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10018230
int __stdcall AfxFormatStrings(int *a1, _WORD *a2, int a3, int a4)
{
  _WORD *v5; // esi
  unsigned __int16 v6; // ax
  int v7; // eax
  const WCHAR *v8; // eax
  wchar_t *v9; // ebx
  wchar_t *v10; // esi
  wchar_t v11; // ax
  int v12; // eax
  LPCWSTR *v13; // edi
  int v14; // ebx
  wchar_t *v16; // [esp+Ch] [ebp-4h]
  int v17; // [esp+1Ch] [ebp+Ch]

  if ( a2 == nullptr || a3 == 0 )
    AfxThrowInvalidArgException();
  v17 = 0;
  v5 = a2;
  if ( *a2 != 0 )
  {
    while ( *v5 == 37 )
    {
      v6 = v5[1];
      if ( v6 >= 0x31u && v6 <= 0x39u )
      {
        v7 = v6 - 49;
      }
      else
      {
        if ( v6 < 0x41u || v6 > 0x5Au )
          break;
        v7 = v6 - 56;
      }
      v5 += 2;
      if ( v7 < a4 )
      {
        v8 = *(const WCHAR **)(a3 + 4 * v7);
        if ( v8 != nullptr )
          v17 += lstrlenW(v8);
        goto LABEL_17;
      }
LABEL_16:
      ++v17;
LABEL_17:
      if ( *v5 == 0 )
        goto LABEL_18;
    }
    ++v5;
    goto LABEL_16;
  }
LABEL_18:
  v9 = a2;
  v10 = (wchar_t *)sub_10007DD0(a1, v17);
  if ( *a2 != 0 )
  {
    while ( *v9 == 37 )
    {
      v11 = v9[1];
      if ( v11 >= 0x31u && v11 <= 0x39u )
      {
        v12 = v11 - 49;
      }
      else
      {
        if ( v11 < 0x41u || v11 > 0x5Au )
          break;
        v12 = v11 - 56;
      }
      v9 += 2;
      v16 = v9;
      if ( v12 < a4 )
      {
        v13 = (LPCWSTR *)(a3 + 4 * v12);
        if ( *v13 != nullptr )
        {
          v14 = lstrlenW(*v13);
          sub_1000D3D7(v10, v17 + 1, (wchar_t *)*v13);
          v17 -= v14;
          v10 += v14;
          v9 = v16;
        }
        goto LABEL_32;
      }
      *v10++ = 63;
LABEL_31:
      --v17;
LABEL_32:
      if ( *v9 == 0 )
        return ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((const wchar_t **)a1, ((int)v10 - *a1) >> 1);
    }
    *v10++ = *v9++;
    goto LABEL_31;
  }
  return ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((const wchar_t **)a1, ((int)v10 - *a1) >> 1);
}

// Address: 0x10018373
int __stdcall sub_10018373(int *a1, unsigned int a2, int a3, int a4)
{
  volatile signed __int32 *v4; // ecx
  _WORD *v5; // esi
  _WORD *v7[4]; // [esp+10h] [ebp-10h] BYREF

  sub_10007BF0(v7);
  v7[3] = nullptr;
  if ( sub_1000C9BF((int *)v7, a2) != nullptr )
  {
    v5 = v7[0];
    AfxFormatStrings(a1, v7[0], a3, a4);
    v4 = (volatile signed __int32 *)(v5 - 8);
  }
  else
  {
    v4 = (volatile signed __int32 *)(v7[0] - 8);
  }
  return sub_10007C90(v4);
}

// Address: 0x100183C4
int __stdcall sub_100183C4(int *a1, unsigned int a2, char a3)
{
  return sub_10018373(a1, a2, (int)&a3, 1);
}

// Address: 0x100183DE
char **sub_100183DE()
{
  return &off_1002D74C;
}

// Address: 0x100183E4
_DWORD *sub_100183E4()
{
  _DWORD *result; // eax

  result = operator new(8u);
  if ( result == nullptr )
    return nullptr;
  *result = &CMenu::`vftable';
  result[1] = 0;
  return result;
}

// Address: 0x100183FE
void __stdcall sub_100183FE(struct CObject *a1)
{
  if ( a1 != nullptr )
  {
    *((_DWORD *)a1 + 1) = 0;
    *(_DWORD *)a1 = &CMenu::`vftable';
  }
}

// Address: 0x10018418
struct CHandleMap *__stdcall afxMapHMENU(int a1)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  void (__stdcall __noreturn *v2)(); // ebx
  CHandleMap *v3; // ecx
  CHandleMap *v4; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((_DWORD *)ModuleThreadState + 6) == 0 && a1 != 0 )
  {
    v2 = AfxSetNewHandler((void (__stdcall __noreturn *)())AfxCriticalNewHandler);
    v3 = (CHandleMap *)operator new(0x60u);
    if ( v3 != nullptr )
      v4 = CHandleMap::CHandleMap(v3, (struct CRuntimeClass *)&off_1002D74C, sub_100183FE, unknown_libname_38, 4u, 1);
    else
      v4 = nullptr;
    *((_DWORD *)ModuleThreadState + 6) = v4;
    AfxSetNewHandler(v2);
  }
  return *((struct CHandleMap **)ModuleThreadState + 6);
}

// Address: 0x1001848C
static struct CMenu *__stdcall CMenu::FromHandle(int (__cdecl *a1)(unsigned int))
{
  CHandleMap *v1; // eax

  v1 = afxMapHMENU(1);
  return CHandleMap::FromHandle(v1, a1);
}

// Address: 0x100184A0
static struct CMenu *__stdcall CMenu::FromHandlePermanent(unsigned int a1)
{
  struct CHandleMap *v1; // ecx
  struct CMenu *result; // eax

  v1 = afxMapHMENU(0);
  result = nullptr;
  if ( v1 != nullptr )
    return (struct CMenu *)CMapPtrToPtr::GetValueAt((struct CHandleMap *)((char *)v1 + 28), a1);
  return result;
}

// Address: 0x100184C1
int __thiscall CMenu::Detach(CMenu *this)
{
  int v2; // edi
  struct CHandleMap *v3; // eax

  v2 = *((_DWORD *)this + 1);
  if ( v2 != 0 )
  {
    v3 = afxMapHMENU(0);
    if ( v3 != nullptr )
      sub_10017D5D((_DWORD *)v3 + 7, *((_DWORD *)this + 1));
  }
  *((_DWORD *)this + 1) = 0;
  return v2;
}

// Address: 0x100184ED
BOOL __thiscall CMenu::DestroyMenu(CMenu *this)
{
  HMENU v2; // eax

  if ( *((_DWORD *)this + 1) == 0 )
    return false;
  v2 = (HMENU)CMenu::Detach(this);
  return DestroyMenu(v2);
}

// Address: 0x10018503
int __thiscall sub_10018503(void *this, char a2)
{
  return unknown_libname_73(this, a2);
}

// Address: 0x10018505
// MFC 3.1-14.0 32bit
CMenu *__thiscall unknown_libname_73(CMenu *this, char a2)
{
  *(_DWORD *)this = &CMenu::`vftable';
  CMenu::DestroyMenu(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1001852A
static struct CPlex *__stdcall CPlex::Create(struct CPlex **a1, unsigned int a2, unsigned int a3)
{
  struct CPlex *result; // eax

  if ( a2 == 0 || a3 == 0 )
    AfxThrowInvalidArgException();
  result = (struct CPlex *)operator new(a3 * a2 + 4);
  *(_DWORD *)result = *a1;
  *a1 = result;
  return result;
}

// Address: 0x1001855D
void __thiscall CPlex::FreeDataChain(CPlex **this)
{
  CPlex *v1; // esi

  if ( this != nullptr )
  {
    do
    {
      v1 = *this;
      operator delete(this);
      this = (CPlex **)v1;
    }
    while ( v1 != nullptr );
  }
}

// Address: 0x10018573
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_74(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= *(this + 2) )
    AfxThrowInvalidArgException();
  return *(this + 1) + 4 * a2;
}

// Address: 0x10018594
// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_75(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= *(this + 2) )
    AfxThrowInvalidArgException();
  return *(_DWORD *)(*(this + 1) + 4 * a2);
}

// Address: 0x100185B5
// MFC 3.1-14.0 32bit
void __thiscall unknown_libname_76(int this)
{
  if ( *(_DWORD *)(this + 52) >= 0x3FFFFFFEu )
    sub_10011ED0((volatile signed __int32 *)5, *(unsigned __int16 **)(this + 20));
}

// Address: 0x100185C9
_DWORD *__thiscall sub_100185C9(_DWORD *this)
{
  *this = &CArray<enum CArchive::LoadArrayObjType,enum CArchive::LoadArrayObjType const &>::`vftable';
  *(this + 1) = 0;
  *(this + 4) = 0;
  *(this + 3) = 0;
  *(this + 2) = 0;
  return this;
}

// Address: 0x100185E0
// MFC 3.1-14.0 32bit
void __thiscall unknown_libname_77(int this, int a2, int a3)
{
  int v5; // ecx
  int v6; // edi
  void *v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  ATL::Checked *v11; // edi
  int v12; // [esp+10h] [ebp+8h]

  if ( a2 < 0 )
    goto LABEL_2;
  if ( a3 >= 0 )
    *(_DWORD *)(this + 16) = a3;
  if ( a2 != 0 )
  {
    v5 = *(_DWORD *)(this + 4);
    if ( v5 != 0 )
    {
      v8 = *(_DWORD *)(this + 12);
      if ( a2 > v8 )
      {
        v10 = *(_DWORD *)(this + 16);
        if ( v10 == 0 )
        {
          v10 = *(_DWORD *)(this + 8) / 8;
          if ( v10 >= 4 )
          {
            if ( v10 > 1024 )
              v10 = 1024;
          }
          else
          {
            v10 = 4;
          }
        }
        v12 = v8 + v10;
        if ( a2 >= v8 + v10 )
          v12 = a2;
        if ( v12 < v8 )
LABEL_2:
          AfxThrowInvalidArgException();
        v11 = (ATL::Checked *)operator new(4 * v12);
        ATL::Checked::memcpy_s(v11, 4 * v12, *(void **)(this + 4), 4 * *(_DWORD *)(this + 8));
        memset((char *)v11 + 4 * *(_DWORD *)(this + 8), 0, 4 * (a2 - *(_DWORD *)(this + 8)));
        operator delete(*(void **)(this + 4));
        *(_DWORD *)(this + 4) = v11;
        *(_DWORD *)(this + 12) = v12;
      }
      else
      {
        v9 = *(_DWORD *)(this + 8);
        if ( a2 > v9 )
          memset((void *)(v5 + 4 * v9), 0, 4 * (a2 - v9));
      }
    }
    else
    {
      v6 = *(_DWORD *)(this + 16);
      if ( a2 > v6 )
        v6 = a2;
      v7 = operator new(4 * v6);
      *(_DWORD *)(this + 4) = v7;
      memset(v7, 0, 4 * v6);
      *(_DWORD *)(this + 12) = v6;
    }
    *(_DWORD *)(this + 8) = a2;
  }
  else
  {
    if ( *(_DWORD *)(this + 4) != 0 )
    {
      operator delete(*(void **)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 8) = 0;
  }
}

// Address: 0x1001871B
int __thiscall CArray<enum CArchive::LoadArrayObjType,enum CArchive::LoadArrayObjType const &>::InsertAt(
        _DWORD *this,
        int a2,
        _DWORD *a3,
        signed int DestinationSize)
{
  int v4; // esi
  signed int v6; // ebx
  int v7; // esi
  int result; // eax

  v4 = a2;
  if ( a2 < 0 || (v6 = DestinationSize, DestinationSize <= 0) )
    AfxThrowInvalidArgException();
  if ( a2 < *(this + 2) )
  {
    v7 = *(this + 2);
    unknown_libname_77((int)this, v7 + DestinationSize, -1);
    ATL::Checked::memmove_s(
      (ATL::Checked *)(*(this + 1) + 4 * (DestinationSize + a2)),
      4 * (v7 - a2),
      (void *)(*(this + 1) + 4 * a2),
      4 * (v7 - a2));
    memset((void *)(4 * a2 + *(this + 1)), 0, 4 * DestinationSize);
    v4 = a2;
  }
  else
  {
    unknown_libname_77((int)this, a2 + DestinationSize, -1);
  }
  result = 4 * v4;
  do
  {
    --v6;
    *(_DWORD *)(result + *(this + 1)) = *a3;
    result += 4;
  }
  while ( v6 != 0 );
  return result;
}

// Address: 0x100187BB
void __thiscall type_info::~type_info(type_info *this)
{
  void *v1; // ecx

  *(_DWORD *)this = &CArray<enum CArchive::LoadArrayObjType,enum CArchive::LoadArrayObjType const &>::`vftable';
  v1 = *((void **)this + 1);
  if ( v1 != nullptr )
    operator delete(v1);
}

// Address: 0x100187D0
type_info *__thiscall type_info::`scalar deleting destructor'(type_info *this, char a2)
{
  type_info::~type_info(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100187F1
// MFC 3.1-14.0 32bit
void __stdcall unknown_libname_78(void **a1, ATL::Checked *a2, char *Source)
{
  char *v4; // ebx
  int v5; // edi
  int v6; // edi
  ATL::Checked *Sourcea; // [esp+10h] [ebp+10h]

  if ( Source != nullptr && a2 == nullptr )
    AfxThrowInvalidArgException();
  v4 = Source;
  Sourcea = a2;
  if ( ((_BYTE)a1[6] & 1) != 0 )
  {
    if ( Source != nullptr )
    {
      do
      {
        v6 = 0x1FFFFFFF;
        if ( (unsigned int)v4 < 0x1FFFFFFF )
          v6 = (int)v4;
        CArchive::EnsureRead(a1, Sourcea, 4 * v6);
        Sourcea = (ATL::Checked *)((char *)Sourcea + 4 * v6);
        v4 -= v6;
      }
      while ( v4 != nullptr );
    }
  }
  else if ( Source != nullptr )
  {
    do
    {
      v5 = 0x1FFFFFFF;
      if ( (unsigned int)v4 < 0x1FFFFFFF )
        v5 = (int)v4;
      CArchive::Write(a1, (char *)Sourcea, 4 * v5);
      Sourcea = (ATL::Checked *)((char *)Sourcea + 4 * v5);
      v4 -= v5;
    }
    while ( v4 != nullptr );
  }
}

// Address: 0x10018879
_DWORD *__thiscall CArchive::EnsureSchemaMapExists(_DWORD *this, _DWORD *a2)
{
  CMapPtrToPtr *v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  CMapPtrToPtr *v6; // eax
  _DWORD *v7; // eax
  _DWORD *result; // eax
  int v9; // [esp-4h] [ebp-3Ch]
  _DWORD *v10; // [esp+20h] [ebp-18h] BYREF
  _DWORD *v11; // [esp+24h] [ebp-14h]
  int v12; // [esp+34h] [ebp-4h]

  v3 = (CMapPtrToPtr *)*(this + 15);
  v4 = nullptr;
  v10 = nullptr;
  if ( v3 == nullptr )
  {
    v5 = operator new(0x1Cu);
    v12 = 0;
    if ( v5 != nullptr )
      v6 = (CMapPtrToPtr *)sub_10017E28(v5, 10);
    else
      v6 = nullptr;
    v12 = -1;
    v3 = v6;
  }
  if ( sub_10017D34(v3, 1u, &v10) != 0 )
  {
    v11 = v10;
  }
  else
  {
    v7 = operator new(0x14u);
    if ( v7 != nullptr )
      v4 = sub_100185C9(v7);
    v9 = *(this + 16);
    v11 = v4;
    v12 = 1;
    unknown_libname_77((int)v4, 1, v9);
    *(_DWORD *)sub_10017EB6(v3, 1u) = v4;
  }
  result = a2;
  *(this + 15) = v3;
  if ( a2 != nullptr )
    *a2 = v11;
  return result;
}

// Address: 0x1001894D
void __thiscall CArchive::MapObject(CArchive *this, unsigned int a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // [esp-Ch] [ebp-34h]
  int v9; // [esp-8h] [ebp-30h]
  int v10; // [esp-4h] [ebp-2Ch]
  void *v11; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v12; // [esp+14h] [ebp-14h] BYREF
  _DWORD *v13; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp-4h]

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    if ( *((_DWORD *)this + 14) == 0 )
    {
      v11 = operator new(0x14u);
      v14 = 1;
      if ( v11 != nullptr )
        v5 = sub_10018F6D();
      else
        v5 = 0;
      v10 = *((_DWORD *)this + 16);
      v14 = -1;
      *((_DWORD *)this + 14) = v5;
      unknown_libname_79(1, v10);
      v6 = *((_DWORD *)this + 14);
      if ( *(int *)(v6 + 8) <= 0 )
        goto LABEL_14;
      **(_DWORD **)(v6 + 4) = 0;
      *((_DWORD *)this + 13) = 1;
      v13 = nullptr;
      CArchive::EnsureSchemaMapExists(this, &v13);
      v11 = nullptr;
      CArray<enum CArchive::LoadArrayObjType,enum CArchive::LoadArrayObjType const &>::InsertAt(v13, 0, &v11, 1);
    }
    if ( a2 == 0 )
      return;
    unknown_libname_76((int)this);
    sub_10018F94(*((_DWORD *)this + 14), *((_DWORD *)this + 13), a2, 1);
    v7 = *((_DWORD **)this + 15);
    v12 = nullptr;
    sub_10017D34(v7, 1u, &v12);
    if ( v12 != nullptr )
    {
      v8 = *((_DWORD *)this + 13);
      a2 = 2;
      CArray<enum CArchive::LoadArrayObjType,enum CArchive::LoadArrayObjType const &>::InsertAt(v12, v8, &a2, 1);
      goto LABEL_19;
    }
LABEL_14:
    AfxThrowInvalidArgException();
  }
  if ( *((_DWORD *)this + 14) == 0 )
  {
    v3 = operator new(0x1Cu);
    v11 = v3;
    v14 = 0;
    if ( v3 != nullptr )
      v4 = sub_10017E28(v3, *((_DWORD *)this + 16));
    else
      v4 = nullptr;
    v14 = -1;
    v9 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 14) = v4;
    unknown_libname_69((int)v4, v9, 1);
    *(_DWORD *)sub_10017EB6(*((CMapPtrToPtr **)this + 14), 0) = 0;
    *((_DWORD *)this + 13) = 1;
  }
  if ( a2 != 0 )
  {
    unknown_libname_76((int)this);
    *(_DWORD *)sub_10017EB6(*((CMapPtrToPtr **)this + 14), a2) = *((_DWORD *)this + 13);
LABEL_19:
    ++*((_DWORD *)this + 13);
  }
}

// Address: 0x10018A8C
void __thiscall CArchive::WriteClass(CArchive *this, const struct CRuntimeClass *a2)
{
  unsigned int v3; // edi

  if ( a2 == nullptr )
    sub_10011ED0((volatile signed __int32 *)6, *((unsigned __int16 **)this + 5));
  if ( (*((_BYTE *)this + 24) & 1) != 0 )
    sub_10011ED0((volatile signed __int32 *)1, *((unsigned __int16 **)this + 5));
  if ( *((_DWORD *)a2 + 2) == 0xFFFF )
    AfxThrowNotSupportedException();
  CArchive::MapObject(this, 0);
  v3 = *(_DWORD *)sub_10017EB6(*((CMapPtrToPtr **)this + 14), (unsigned int)a2);
  if ( v3 != 0 )
  {
    if ( v3 >= 0x7FFF )
    {
      CArchive::operator<<((int)this, 0x7FFF);
      unknown_libname_35((int)this, v3 | 0x80000000);
    }
    else
    {
      CArchive::operator<<((int)this, v3 | 0x8000);
    }
  }
  else
  {
    CArchive::operator<<((int)this, 0xFFFF);
    CRuntimeClass::Store(a2, (void **)this);
    unknown_libname_76((int)this);
    *(_DWORD *)sub_10017EB6(*((CMapPtrToPtr **)this + 14), (unsigned int)a2) = *((_DWORD *)this + 13);
    ++*((_DWORD *)this + 13);
  }
}

// Address: 0x10018B3B
struct CRuntimeClass *__thiscall CArchive::ReadClass(
        CArchive *this,
        const struct CRuntimeClass *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  int v5; // eax
  struct CRuntimeClass *v7; // eax
  CRuntimeClass *v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  _DWORD *v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // edi
  _DWORD *v14; // ecx
  unsigned int v15; // eax
  _DWORD *v16; // ecx
  int v17; // [esp-Ch] [ebp-28h]
  _DWORD *v18; // [esp+Ch] [ebp-10h] BYREF
  int v19; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v20; // [esp+14h] [ebp-8h] BYREF
  int v21; // [esp+18h] [ebp-4h] BYREF

  if ( (*((_BYTE *)this + 24) & 1) == 0 )
    sub_10011ED0((volatile signed __int32 *)1, *((unsigned __int16 **)this + 5));
  if ( a2 != nullptr && *((_DWORD *)a2 + 2) == 0xFFFF )
    AfxThrowNotSupportedException();
  CArchive::MapObject(this, 0);
  CArchive::operator>>((void **)this, &v21);
  if ( (_WORD)v21 == 0x7FFF )
  {
    unknown_libname_36((void **)this, &v19);
    v5 = v19;
  }
  else
  {
    v5 = __PAIR32__(v21, v21) & 0x80007FFF;
    v19 = __PAIR32__(v21, v21) & 0x80007FFF;
  }
  if ( v5 < 0 )
  {
    if ( (_WORD)v21 == 0xFFFF )
    {
      v7 = CRuntimeClass::Load((void **)this, &v20);
      v8 = v7;
      if ( v7 == nullptr )
        goto LABEL_15;
      v9 = *((_DWORD *)v7 + 2);
      if ( (*((_DWORD *)v8 + 2) & 0x7FFFFFFF) != v20 )
      {
        if ( (v9 & 0x80000000) == 0 )
          sub_10011ED0((volatile signed __int32 *)7, *((unsigned __int16 **)this + 5));
        CArchive::EnsureSchemaMapExists(this, nullptr);
        v10 = v20;
        *(_DWORD *)sub_10017EB6(*((CMapPtrToPtr **)this + 15), (unsigned int)v8) = v10;
      }
      unknown_libname_76((int)this);
      sub_10018F94(*((_DWORD *)this + 14), *((_DWORD *)this + 13), v8, 1);
      v11 = *((_DWORD **)this + 15);
      v18 = nullptr;
      sub_10017D34(v11, 1u, &v18);
      if ( v18 == nullptr )
LABEL_21:
        AfxThrowInvalidArgException();
      v17 = *((_DWORD *)this + 13);
      v21 = 1;
      CArray<enum CArchive::LoadArrayObjType,enum CArchive::LoadArrayObjType const &>::InsertAt(v18, v17, &v21, 1);
      ++*((_DWORD *)this + 13);
      v12 = v20;
    }
    else
    {
      v13 = v5 & 0x7FFFFFFF;
      if ( (v5 & 0x7FFFFFFF) == 0 || v13 > *(_DWORD *)(*((_DWORD *)this + 14) + 8) - 1 )
        goto LABEL_11;
      v14 = *((_DWORD **)this + 15);
      v21 = 0;
      sub_10017D34(v14, 1u, &v21);
      if ( v21 == 0 )
        goto LABEL_21;
      if ( *(_DWORD *)unknown_libname_74((_DWORD *)v21, v13) == 2 )
LABEL_11:
        sub_10011ED0((volatile signed __int32 *)5, *((unsigned __int16 **)this + 5));
      v15 = unknown_libname_75(*((_DWORD **)this + 14), v13);
      v16 = *((_DWORD **)this + 15);
      v20 = 0;
      v8 = (CRuntimeClass *)v15;
      if ( v16 != nullptr && sub_10017D34(v16, v15, &v21) != 0 )
        v12 = v21;
      else
        v12 = *((_DWORD *)v8 + 2) & 0x7FFFFFFF;
      v20 = v12;
    }
    if ( a2 != nullptr )
    {
      if ( CRuntimeClass::IsDerivedFrom(v8, a2) == 0 )
LABEL_15:
        sub_10011ED0((volatile signed __int32 *)6, *((unsigned __int16 **)this + 5));
      v12 = v20;
    }
    if ( a3 != nullptr )
      *a3 = v12;
    else
      *((_DWORD *)this + 4) = v12;
    if ( a4 != nullptr )
      *a4 = v19;
    return v8;
  }
  if ( a4 == nullptr )
    goto LABEL_11;
  *a4 = v5;
  return nullptr;
}

// Address: 0x10018D2F
void __thiscall sub_10018D2F(int this, void **a2)
{
  int Count; // eax

  if ( ((_BYTE)a2[6] & 1) != 0 )
  {
    Count = CArchive::ReadCount(a2);
    unknown_libname_77(this, Count, -1);
  }
  else
  {
    CArchive::WriteCount((CArchive *)a2, *(_DWORD *)(this + 8));
  }
  unknown_libname_78(a2, *(ATL::Checked **)(this + 4), *(char **)(this + 8));
}

// Address: 0x10018D71
void __thiscall CArchive::WriteObject(CArchive *this, const struct CObject *a2)
{
  unsigned int v3; // ebx
  const struct CRuntimeClass *v4; // eax

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
    sub_10011ED0((volatile signed __int32 *)2, *((unsigned __int16 **)this + 5));
  CArchive::MapObject(this, 0);
  if ( a2 != nullptr )
  {
    v3 = *(_DWORD *)sub_10017EB6(*((CMapPtrToPtr **)this + 14), (unsigned int)a2);
    if ( v3 != 0 )
    {
      if ( v3 >= 0x7FFF )
      {
        CArchive::operator<<((int)this, 0x7FFF);
        unknown_libname_35((int)this, v3);
      }
      else
      {
        CArchive::operator<<((int)this, v3);
      }
    }
    else
    {
      v4 = (const struct CRuntimeClass *)(**(int (__thiscall ***)(const struct CObject *))a2)(a2);
      CArchive::WriteClass(this, v4);
      unknown_libname_76((int)this);
      *(_DWORD *)sub_10017EB6(*((CMapPtrToPtr **)this + 14), (unsigned int)a2) = *((_DWORD *)this + 13);
      ++*((_DWORD *)this + 13);
      (*(void (__thiscall **)(const struct CObject *, CArchive *))(*(_DWORD *)a2 + 8))(a2, this);
    }
  }
  else
  {
    CArchive::operator<<((int)this, 0);
  }
}

// Address: 0x10018E0D
struct CObject *__thiscall CArchive::ReadObject(unsigned __int16 **this, const struct CRuntimeClass *a2)
{
  int (**v3)(void); // eax
  unsigned int v4; // edi
  _DWORD *v5; // ecx
  CObject *v6; // eax
  struct CObject *Object; // edi
  _DWORD *v8; // ecx
  unsigned int v9; // eax
  unsigned __int16 *v10; // ebx
  int v12; // [esp-Ch] [ebp-3Ch]
  unsigned int v13; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v14; // [esp+18h] [ebp-18h] BYREF
  _DWORD *v15[5]; // [esp+1Ch] [ebp-14h] BYREF

  if ( (*(_BYTE *)(this + 6) & 1) == 0 )
    sub_10011ED0((volatile signed __int32 *)4, *(this + 5));
  v3 = (int (**)(void))CArchive::ReadClass((CArchive *)this, a2, &v13, &v14);
  v15[0] = nullptr;
  if ( v3 != nullptr )
  {
    v15[4] = nullptr;
    Object = CRuntimeClass::CreateObject(v3);
    v15[0] = Object;
    if ( Object == nullptr )
      AfxThrowMemoryException();
    unknown_libname_76((int)this);
    sub_10018F94(*(this + 14), *(this + 13), Object, 1);
    v8 = *(this + 15);
    a2 = nullptr;
    sub_10017D34(v8, 1u, &a2);
    if ( a2 == nullptr )
LABEL_8:
      AfxThrowInvalidArgException();
    v12 = (int)*(this + 13);
    v14 = 2;
    CArray<enum CArchive::LoadArrayObjType,enum CArchive::LoadArrayObjType const &>::InsertAt(a2, v12, &v14, 1);
    v9 = v13;
    v10 = *(this + 4);
    *(this + 13) = (unsigned __int16 *)((char *)*(this + 13) + 1);
    *(this + 4) = (unsigned __int16 *)v9;
    (*(void (__thiscall **)(struct CObject *, unsigned __int16 **))(*(_DWORD *)Object + 8))(Object, this);
    *(this + 4) = v10;
  }
  else
  {
    v4 = v14;
    if ( v14 > *((_DWORD *)*(this + 14) + 2) - 1 )
      goto LABEL_5;
    v5 = *(this + 15);
    v15[0] = nullptr;
    if ( sub_10017D34(v5, 1u, v15) != 0 )
    {
      if ( v15[0] == nullptr )
        goto LABEL_8;
      if ( v4 <= v15[0][2] - 1 && *(_DWORD *)unknown_libname_74(v15[0], v4) == 1 )
LABEL_5:
        sub_10011ED0((volatile signed __int32 *)5, *(this + 5));
    }
    v6 = (CObject *)unknown_libname_75(*(this + 14), v4);
    Object = v6;
    if ( v6 != nullptr && a2 != nullptr && CObject::IsKindOf(v6, a2) == 0 )
      sub_10011ED0((volatile signed __int32 *)6, *(this + 5));
  }
  return Object;
}

// Address: 0x10018F67
char **sub_10018F67()
{
  return &off_1002D79C;
}

// Address: 0x10018F6D
_DWORD *__thiscall sub_10018F6D(_DWORD *this)
{
  *this = &CPtrArray::`vftable';
  *(this + 1) = 0;
  *(this + 4) = 0;
  *(this + 3) = 0;
  *(this + 2) = 0;
  return this;
}

// Address: 0x10018F84
void __thiscall sub_10018F84(_DWORD *this)
{
  void *v1; // [esp-4h] [ebp-4h]

  v1 = (void *)*(this + 1);
  *this = &CPtrArray::`vftable';
  operator delete(v1);
}

// Address: 0x10018F94
int __thiscall sub_10018F94(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // edi
  int v6; // ebx
  int v7; // edi
  int result; // eax

  v4 = a2;
  if ( a2 < 0 || (v6 = a4, a4 <= 0) )
    AfxThrowInvalidArgException();
  if ( a2 < *(this + 2) )
  {
    v7 = *(this + 2);
    unknown_libname_79(v7 + a4, -1);
    ATL::Checked::memmove_s(
      (ATL::Checked *)(*(this + 1) + 4 * (a4 + a2)),
      4 * (*(this + 2) - a2 - a4),
      (void *)(*(this + 1) + 4 * a2),
      4 * (v7 - a2));
    memset((void *)(4 * a2 + *(this + 1)), 0, 4 * a4);
    v4 = a2;
  }
  else
  {
    unknown_libname_79(a2 + a4, -1);
  }
  result = 4 * v4;
  do
  {
    --v6;
    *(_DWORD *)(result + *(this + 1)) = a3;
    result += 4;
  }
  while ( v6 != 0 );
  return result;
}

// Address: 0x1001903A
_DWORD *__thiscall sub_1001903A(_DWORD *this, char a2)
{
  sub_10018F84(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1001905B
char **sub_1001905B()
{
  return &off_1003CC40;
}

// Address: 0x10019061
CArchive *__stdcall operator<<(CArchive *a1, struct CObject *a2)
{
  CArchive::WriteObject(a1, a2);
  return a1;
}

// Address: 0x10019078
unsigned __int16 **__stdcall operator>>(unsigned __int16 **a1, struct CObject **a2)
{
  *a2 = CArchive::ReadObject(a1, nullptr);
  return a1;
}

// Address: 0x10019093
_DWORD *__thiscall sub_10019093(_DWORD *this)
{
  *this = &CObArray::`vftable';
  *(this + 1) = 0;
  *(this + 4) = 0;
  *(this + 3) = 0;
  *(this + 2) = 0;
  return this;
}

// Address: 0x100190AA
void __thiscall sub_100190AA(_DWORD *this)
{
  void *v1; // [esp-4h] [ebp-4h]

  v1 = (void *)*(this + 1);
  *this = &CObArray::`vftable';
  operator delete(v1);
}

// Address: 0x100190BA
// MFC 3.1-14.0 32bit
void __thiscall unknown_libname_79(int this, int a2, int a3)
{
  ATL::Checked *v4; // ebx
  int v6; // ecx
  void *v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // [esp+14h] [ebp+8h]

  v4 = nullptr;
  if ( a2 < 0 )
    goto LABEL_2;
  if ( a3 >= 0 )
    *(_DWORD *)(this + 16) = a3;
  if ( a2 != 0 )
  {
    v6 = *(_DWORD *)(this + 4);
    if ( v6 != 0 )
    {
      v8 = *(_DWORD *)(this + 12);
      if ( a2 > v8 )
      {
        v10 = *(_DWORD *)(this + 16);
        if ( v10 == 0 )
        {
          v10 = *(_DWORD *)(this + 8) / 8;
          if ( v10 < 4 )
          {
            v10 = 4;
          }
          else if ( v10 > 1024 )
          {
            v10 = 1024;
          }
        }
        v11 = v8 + v10;
        if ( a2 >= v8 + v10 )
          v11 = a2;
        if ( v11 < v8 )
LABEL_2:
          AfxThrowInvalidArgException();
        v4 = (ATL::Checked *)operator new(4 * v11);
        ATL::Checked::memcpy_s(v4, 4 * v11, *(void **)(this + 4), 4 * *(_DWORD *)(this + 8));
        memset((char *)v4 + 4 * *(_DWORD *)(this + 8), 0, 4 * (a2 - *(_DWORD *)(this + 8)));
        operator delete(*(void **)(this + 4));
        *(_DWORD *)(this + 8) = a2;
        *(_DWORD *)(this + 12) = v11;
        goto LABEL_23;
      }
      v9 = *(_DWORD *)(this + 8);
      if ( a2 > v9 )
        memset((void *)(v6 + 4 * v9), 0, 4 * (a2 - v9));
    }
    else
    {
      v7 = operator new(4 * a2);
      *(_DWORD *)(this + 4) = v7;
      memset(v7, 0, 4 * a2);
      *(_DWORD *)(this + 12) = a2;
    }
    *(_DWORD *)(this + 8) = a2;
    return;
  }
  operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 8) = 0;
LABEL_23:
  *(_DWORD *)(this + 4) = v4;
}

// Address: 0x100191E0
void __thiscall CObArray::Serialize(CObArray *this, void **a2)
{
  int j; // edi
  int Count; // eax
  int i; // edi

  if ( ((_BYTE)a2[6] & 1) != 0 )
  {
    Count = CArchive::ReadCount(a2);
    unknown_libname_79((int)this, Count, -1);
    for ( i = 0; i < *((_DWORD *)this + 2); ++i )
      operator>>((unsigned __int16 **)a2, (struct CObject **)(*((_DWORD *)this + 1) + 4 * i));
  }
  else
  {
    CArchive::WriteCount((CArchive *)a2, *((_DWORD *)this + 2));
    for ( j = 0; j < *((_DWORD *)this + 2); ++j )
      operator<<((CArchive *)a2, *(struct CObject **)(*((_DWORD *)this + 1) + 4 * j));
  }
}

// Address: 0x1001924B
_DWORD *sub_1001924B()
{
  _DWORD *v0; // eax

  v0 = operator new(0x14u);
  if ( v0 != nullptr )
    return sub_10019093(v0);
  else
    return nullptr;
}

// Address: 0x10019261
_DWORD *__thiscall sub_10019261(_DWORD *this, char a2)
{
  sub_100190AA(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10019282
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x10019291
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

  v1 = (_DWORD *)_decode_pointer(dword_10042888);
  Block = v1;
  v2 = (_DWORD *)_decode_pointer(dword_10042884);
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
        dword_10042884 = _encode_pointer(v3 + 1);
        return a1;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = _realloc_crt(Block, v7)) != 0 || v5 + 16 >= v5 && (v8 = _realloc_crt(Block, v5 + 16)) != 0 )
      {
        v3 = (_DWORD *)(v8 + 4 * (v4 >> 2));
        dword_10042888 = _encode_pointer(v8);
        goto LABEL_11;
      }
    }
  }
  return 0;
}

// Address: 0x1001934B
int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(0x20u, 4);
  dword_10042888 = _encode_pointer(v0);
  dword_10042884 = dword_10042888;
  if ( v0 == nullptr )
    return 24;
  *v0 = 0;
  return 0;
}

// Address: 0x1001937C
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock((int)Func);
  _unlockexit(268538793);
  return v2;
}

// Address: 0x100193B8
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x100193CF
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
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  if ( a3 != 0 && a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
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

// Address: 0x100194C7
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

// Address: 0x100194F1
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

// Address: 0x1001957C
int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  return _vswprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x10019599
int __cdecl _vsnwprintf_s_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax
  int *v7; // eax
  int v8; // edi
  int v9; // ebx

  if ( Format == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
  if ( MaxCount != 0 )
  {
    if ( Buffer == nullptr )
    {
LABEL_9:
      *_errno() = 22;
LABEL_21:
      _invalid_parameter(0, 0, 0, 0, 0);
      return -1;
    }
  }
  else if ( Buffer == nullptr )
  {
    if ( BufferCount == 0 )
      return 0;
    goto LABEL_9;
  }
  if ( BufferCount == 0 )
    goto LABEL_9;
  v7 = _errno();
  if ( BufferCount > MaxCount )
  {
    v8 = *v7;
    result = _vswprintf_helper(
               (int (__cdecl *)(FILE *, int, int, int))_woutput_s_l,
               (char *)Buffer,
               MaxCount + 1,
               (int)Format,
               (int)Locale,
               (int)ArgList);
    if ( result == -2 )
    {
      if ( *_errno() == 34 )
        *_errno() = v8;
      return -1;
    }
    goto LABEL_18;
  }
  v9 = *v7;
  result = _vswprintf_helper(
             (int (__cdecl *)(FILE *, int, int, int))_woutput_s_l,
             (char *)Buffer,
             BufferCount,
             (int)Format,
             (int)Locale,
             (int)ArgList);
  Buffer[BufferCount - 1] = 0;
  if ( result != -2 )
  {
LABEL_18:
    if ( result >= 0 )
      return result;
    goto LABEL_19;
  }
  if ( MaxCount == -1 )
  {
    if ( *_errno() == 34 )
      *_errno() = v9;
    return -1;
  }
LABEL_19:
  *Buffer = 0;
  if ( result == -2 )
  {
    *_errno() = 34;
    goto LABEL_21;
  }
  return -1;
}

// Address: 0x100196A5
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

// Address: 0x10019722
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
    memcpy_0(Destination, Source, SourceSize);
  }
  return 0;
}

// Address: 0x1001977F
void __thiscall sub_1001977F(struct type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable';
  type_info::_Type_info_dtor(this);
}

// Address: 0x1001978F
struct type_info *__thiscall sub_1001978F(struct type_info *this, char a2)
{
  sub_1001977F(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100197B0
BOOL __thiscall type_info::operator==(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0;
}

// Address: 0x100197D0
int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [esp+14h] [ebp+14h] BYREF

  va_start(ArgList, Format);
  return _vswprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x100197EE
int _snwprintf_s(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const wchar_t *const Format,
        ...)
{
  va_list ArgList; // [esp+18h] [ebp+18h] BYREF

  va_start(ArgList, Format);
  return _vsnwprintf_s_l(Buffer, BufferCount, MaxCount, Format, nullptr, ArgList);
}

// Address: 0x1001980F
void __noreturn _purecall()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer(dword_100411EC);
  if ( v0 != nullptr )
    v0();
  _NMSG_WRITE(25);
  _set_abort_behavior(0, 1u);
  abort();
}

// Address: 0x10019839
wchar_t *__cdecl wcsncpy(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  size_t v3; // ecx
  wchar_t *v4; // edi
  wchar_t v6; // ax
  size_t v7; // ecx
  char v8; // cf
  size_t v9; // ecx
  wchar_t *v10; // edi
  int i; // ecx

  v3 = Count;
  v4 = Destination;
  if ( Count != 0 )
  {
    do
    {
      v6 = *Source;
      *v4++ = *Source++;
      if ( v6 == 0 )
        break;
      --v3;
    }
    while ( v3 != 0 );
    if ( v3 != 0 )
    {
      v7 = v3 - 1;
      if ( v7 != 0 )
      {
        v8 = v7 & 1;
        v9 = v7 >> 1;
        memset(v4, 0, 4 * v9);
        v10 = &v4[2 * v9];
        for ( i = v8; i != 0; --i )
          *v10++ = 0;
      }
    }
  }
  return Destination;
}

// Address: 0x10019883
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
    if ( *(_UNKNOWN **)this != off_1003D4F8 && (dword_1003D414 & v3[28]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_1003D414 & *(_DWORD *)(*((_DWORD *)this + 2) + 112)) == 0 )
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

// Address: 0x1001990A
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
      _invalid_parameter(0, 0, 0, 0, 0);
      if ( v11 != 0 )
        *(_DWORD *)(v10 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    if ( v11 != 0 )
      *(_DWORD *)(v10 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}

// Address: 0x10019A1B
int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // edi
  const wchar_t *v4; // edx
  wchar_t v5; // ax
  wchar_t v6; // cx
  wchar_t v7; // ax

  if ( dword_1004120C != 0 )
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
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0x7FFFFFFF;
  }
}

// Address: 0x10019AAE
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
    sub_1001F5FD();
    dword_10042894 = (int)GetCommandLineA();
    dword_10040B30 = (char *)__crtGetEnvironmentStringsA();
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
    ++dword_10040B2C;
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
      v8 = dword_1003CE10;
      v6 = (int (__stdcall *)(int, DWORD *))_decode_pointer(dword_10040EB4);
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
    if ( dword_10040B2C <= 0 )
      return 0;
    --dword_10040B2C;
    if ( dword_10040B6C == 0 )
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

// Address: 0x10019BE3
BOOL __fastcall __DllMainCRTStartup(void *a1, DWORD a2, HINSTANCE hinstDLL)
{
  BOOL v5; // eax
  BOOL v7; // [esp+10h] [ebp-1Ch]

  if ( a2 == 0 && dword_10040B2C == 0 || (a2 == 1 || a2 == 2) && _CRT_INIT((int)hinstDLL, a2, (int)a1) == 0 )
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

// Address: 0x10019CD9
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return __DllMainCRTStartup(lpReserved, fdwReason, hinstDLL);
}

// Address: 0x10019CFC
int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = 0;
  if ( a1 <= dword_10042754 )
  {
    _lock(4);
    v2 = __sbh_alloc_block(a1);
    _unlock(4);
  }
  return v2;
}

// Address: 0x10019D4B
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
      if ( dword_10042764 == 1 )
      {
        v2 = v1 != 0 ? v1 : 1;
        v3 = HeapAlloc(hHeap, 0, v2);
      }
      else if ( dword_10042764 != 3 || (v3 = (LPVOID)V6_HeapAlloc(v1)) == nullptr )
      {
        if ( v1 == 0 )
          v1 = 1;
        v3 = HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
      }
      v4 = v3;
      if ( v3 != nullptr )
        return v4;
      if ( dword_10041498 == 0 )
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

// Address: 0x10019E15
void __cdecl free(void *Block)
{
  int v1; // eax
  int *v2; // esi
  DWORD LastError; // eax
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_10042764 != 3 )
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

// Address: 0x10019EA3
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

// Address: 0x10019EBD
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

// Address: 0x10019F2C
errno_t __cdecl wcsncpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  rsize_t v5; // ebx
  errno_t v6; // esi
  const wchar_t *v7; // edx
  wchar_t *v8; // eax
  wchar_t v9; // cx
  wchar_t v10; // cx

  if ( MaxCount != 0 )
  {
    if ( Destination == nullptr )
    {
LABEL_7:
      v6 = 22;
      *_errno() = 22;
LABEL_8:
      _invalid_parameter(0, 0, 0, 0, 0);
      return v6;
    }
  }
  else if ( Destination == nullptr )
  {
    if ( SizeInWords == 0 )
      return 0;
    goto LABEL_7;
  }
  v5 = SizeInWords;
  if ( SizeInWords == 0 )
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
  Destination[SizeInWords - 1] = 0;
  return 80;
}

// Address: 0x10019FFF
size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  size_t result; // eax

  for ( result = 0; result < MaxCount; ++Source )
  {
    if ( *Source == 0 )
      break;
    ++result;
  }
  return result;
}

// Address: 0x1001A01E
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x1001A050
// ?_CallMemberFunction0@@YGXPAX0@Z
// doubtful name
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_1001A050(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x1001A057
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_27112, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x1001A0AB
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *a2,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(a2, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x1001A0E1
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

// Address: 0x1001A114
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

// Address: 0x1001A1EB
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

// Address: 0x1001A28A
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

// Address: 0x1001A2FF
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 152);
  *(_DWORD *)(_getptd() + 152) = a1;
  return a1;
}

// Address: 0x1001A32B
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

// Address: 0x1001A352
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

// Address: 0x1001A3A4
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x1001A404
_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1001A437
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1001A46D
_DWORD *__usercall _EH_prolog3_GS@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1001A4A3
_DWORD *__usercall _EH_prolog3_catch_GS@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x1001A4DC
// positive sp value has been detected, the output may be wrong!
void _EH_epilog3()
{
  __asm { retn }
}

// Address: 0x1001A4F0
void _EH_epilog3_GS()
{
  ;
}

// Address: 0x1001A4FF
void _EH_epilog3_catch_GS()
{
  ;
}

// Address: 0x1001A50E
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_1002D818, sizeof(dwExceptionCode));
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)pThrowInfo;
  if ( pThrowInfo != nullptr && (pThrowInfo->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}

// Address: 0x1001A55A
int __cdecl _get_errno_from_oserr(int a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_1003CC80[2 * i] )
      return dword_1003CC84[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x1001A59C
int *__cdecl _errno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 8);
  else
    return (int *)&unk_1003CDE8;
}

// Address: 0x1001A5AF
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 12);
  else
    return (unsigned int *)&unk_1003CDEC;
}

// Address: 0x1001A5C2
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

// Address: 0x1001A5E5
void *__cdecl realloc(void *Block, size_t Size)
{
  size_t v3; // esi
  int v4; // eax
  size_t v5; // eax
  size_t v6; // eax
  void *v7; // edi
  int *v8; // eax
  int *v9; // esi
  DWORD v10; // eax
  int *v11; // eax
  int *v12; // esi
  DWORD LastError; // eax
  int v14; // [esp+10h] [ebp-20h]
  void *v15; // [esp+14h] [ebp-1Ch]

  if ( Block == nullptr )
    return malloc(Size);
  v3 = Size;
  if ( Size != 0 )
  {
    if ( dword_10042764 == 3 )
    {
      while ( 1 )
      {
        v15 = nullptr;
        if ( v3 > 0xFFFFFFE0 )
          break;
        _lock(4);
        v4 = __sbh_find_block(Block);
        v14 = v4;
        if ( v4 != 0 )
        {
          if ( v3 <= dword_10042754 )
          {
            if ( __sbh_resize_block(v4, Block, v3) != 0 )
            {
              v15 = Block;
            }
            else
            {
              v15 = (void *)__sbh_alloc_block(v3);
              if ( v15 != nullptr )
              {
                v5 = *((_DWORD *)Block - 1) - 1;
                if ( v5 >= v3 )
                  v5 = v3;
                memcpy(v15, Block, v5);
                v14 = __sbh_find_block(Block);
                __sbh_free_block(v14, Block);
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
              __sbh_free_block(v14, Block);
            }
          }
        }
        _unlock(4);
        if ( v14 != 0 )
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
        if ( dword_10041498 == 0 )
        {
          v11 = _errno();
          if ( v14 == 0 )
            goto LABEL_45;
          *v11 = 12;
          return v7;
        }
        if ( _callnewh(v3) == 0 )
        {
          v8 = _errno();
          if ( v14 != 0 )
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
        if ( dword_10041498 == 0 )
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

// Address: 0x1001A800
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

// Address: 0x1001A830
int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer(off_1003CDF0);
  return v1(255);
}

// Address: 0x1001A859
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

// Address: 0x1001A884
void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x1001A89C
int _lockexit()
{
  return _lock(8);
}

// Address: 0x1001A8A5
int _unlockexit()
{
  return _unlock(8);
}

// Address: 0x1001A8AE
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

// Address: 0x1001A8CB
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

// Address: 0x1001A8EF
int __cdecl _cinit(int a1)
{
  int result; // eax
  _PVFV *savedregs; // [esp+4h] [ebp+0h]

  if ( _fpmath != nullptr && _IsNonwritableInCurrentImage(&off_1002D860) != 0 )
    _fpmath(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&dword_1002B478, (_PIFV *)&Last);
  if ( result == 0 )
  {
    atexit(sub_1001F623);
    _initterm((_PVFV *)&First, savedregs);
    if ( dword_10042890 != nullptr && _IsNonwritableInCurrentImage(&dword_10042890) != 0 )
      dword_10042890(0, 2, 0);
    return 0;
  }
  return result;
}

// Address: 0x1001A974
void __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  unsigned int v3; // edi
  _DWORD *v4; // esi
  void (*v5)(void); // edi
  unsigned int v6; // edi
  _DWORD *v7; // eax
  _PVFV *v8; // [esp+0h] [ebp-38h]
  unsigned int v9; // [esp+10h] [ebp-28h]
  _DWORD *v10; // [esp+18h] [ebp-20h]
  unsigned int v11; // [esp+1Ch] [ebp-1Ch]

  _lock(8);
  if ( dword_10040B70 != 1 )
  {
    dword_10040B6C = 1;
    byte_10040B68 = a3;
    if ( a2 == 0 )
    {
      v3 = _decode_pointer(dword_10042888);
      v9 = v3;
      if ( v3 != 0 )
      {
        v4 = (_DWORD *)_decode_pointer(dword_10042884);
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
            v6 = _decode_pointer(dword_10042888);
            v7 = (_DWORD *)_decode_pointer(dword_10042884);
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
      _initterm((_PVFV *)&dword_1002B49C, v8);
    }
    _initterm((_PVFV *)&dword_1002B4A4, v8);
  }
  if ( a3 != 0 )
    _unlock(8);
  if ( a3 == 0 )
  {
    dword_10040B70 = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
}

// Address: 0x1001AAA0
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x1001AAB6
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x1001AAC5
void (__cdecl __noreturn *_init_pointers())(int Code)
{
  struct CFrameWnd *v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = (struct CFrameWnd *)_encoded_null();
  AFXSetTopLevelFrame(v0);
  AFXSetTopLevelFrame(v0);
  AFXSetTopLevelFrame(v0);
  AFXSetTopLevelFrame(v0);
  AFXSetTopLevelFrame(v0);
  _initp_misc_winsig(v0);
  nullsub_1();
  _initp_eh_hooks(v0, v0);
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit);
  off_1003CDF0 = result;
  return result;
}

// Address: 0x1001AB13
int __cdecl _vscprintf_helper(int (__cdecl *a1)(_DWORD *, int, int, int), int a2, int a3, int a4)
{
  _DWORD v5[8]; // [esp+4h] [ebp-20h] BYREF

  if ( a2 != 0 )
  {
    v5[1] = 0x7FFFFFFF;
    v5[3] = 66;
    v5[2] = 0;
    v5[0] = 0;
    return a1(v5, a2, a3, a4);
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
}

// Address: 0x1001AB6A
int __cdecl _vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  return _vscprintf_helper((int (__cdecl *)(_DWORD *, int, int, int))_woutput_l, (int)Format, 0, (int)ArgList);
}

// Address: 0x1001AB90
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
  if ( (_BYTE)Val == 0 && Size >= 0x100 && dword_10042748 != 0 )
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

// Address: 0x1001AC0A
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
  _invalid_parameter(0, 0, 0, 0, 0);
  return v4;
}

// Address: 0x1001AC87
wchar_t *__cdecl _wcsdup(const wchar_t *String)
{
  size_t v2; // esi
  wchar_t *v3; // eax
  wchar_t *v4; // edi

  if ( String == nullptr )
    return nullptr;
  v2 = wcslen(String) + 1;
  v3 = (wchar_t *)calloc(v2, 2u);
  v4 = v3;
  if ( v3 == nullptr )
    return nullptr;
  if ( wcscpy_s(v3, v2, String) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return v4;
}

// Address: 0x1001ACDF
void __cdecl __noreturn _endthreadex(unsigned int ReturnCode)
{
  void *v1; // eax

  if ( nullsub_1 != nullptr && _IsNonwritableInCurrentImage(&off_1002D868) != 0 )
    nullsub_1();
  v1 = (void *)_getptd_noexit();
  if ( v1 != nullptr )
    _freeptd(v1);
  ExitThread(ReturnCode);
}

// Address: 0x1001AD1C
void __noreturn _callthreadstartex()
{
  int v0; // eax
  unsigned int v1; // eax
  int v2; // [esp+0h] [ebp-2Ch]

  v0 = _getptd();
  v1 = (*(int (__stdcall **)(_DWORD, int))(v0 + 84))(*(_DWORD *)(v0 + 88), v2);
  _endthreadex(v1);
}

// Address: 0x1001AD5D
void __stdcall __noreturn _threadstartex(DWORD *lpThreadParameter)
{
  int v1; // eax
  _DWORD *v2; // eax
  int v3; // eax
  DWORD LastError; // eax

  __set_flsgetvalue();
  v1 = sub_1001B875();
  v2 = (_DWORD *)__fls_getvalue(v1);
  if ( v2 != nullptr )
  {
    v2[21] = lpThreadParameter[21];
    v2[22] = lpThreadParameter[22];
    v2[1] = lpThreadParameter[1];
    _freefls(lpThreadParameter);
  }
  else
  {
    v3 = sub_1001B875();
    if ( __fls_setvalue(v3, lpThreadParameter) == 0 )
    {
      LastError = GetLastError();
      ExitThread(LastError);
    }
    *lpThreadParameter = GetCurrentThreadId();
  }
  if ( nullsub_1 != nullptr && _IsNonwritableInCurrentImage(off_1002D864) != 0 )
    nullsub_1();
  _callthreadstartex();
}

// Address: 0x1001ADE0
uintptr_t __cdecl _beginthreadex(
        void *Security,
        unsigned int StackSize,
        _beginthreadex_proc_type StartAddress,
        void *ArgList,
        unsigned int InitFlag,
        unsigned int *ThrdAddr)
{
  _beginthreadex_proc_type v6; // edi
  uintptr_t result; // eax
  _DWORD *v8; // esi
  int v9; // eax
  void *v10; // eax
  DWORD *p_StartAddress; // eax
  DWORD LastError; // [esp+8h] [ebp-4h]

  v6 = StartAddress;
  LastError = 0;
  if ( StartAddress == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0;
  }
  __set_flsgetvalue();
  v8 = (_DWORD *)_calloc_crt(1u, 532);
  if ( v8 == nullptr )
    goto $error_return$27726;
  v9 = _getptd();
  _initptd(v8, *(_DWORD *)(v9 + 108));
  v10 = ArgList;
  v8[1] = -1;
  v8[22] = v10;
  p_StartAddress = ThrdAddr;
  v8[21] = v6;
  if ( p_StartAddress == nullptr )
    p_StartAddress = (DWORD *)&StartAddress;
  result = (uintptr_t)CreateThread(
                        (LPSECURITY_ATTRIBUTES)Security,
                        StackSize,
                        (LPTHREAD_START_ROUTINE)_threadstartex,
                        v8,
                        InitFlag,
                        p_StartAddress);
  if ( result == 0 )
  {
    LastError = GetLastError();
$error_return$27726:
    free(v8);
    if ( LastError != 0 )
      _dosmaperr(LastError);
    return 0;
  }
  return result;
}

// Address: 0x1001AE90
_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = SEH_10021400;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}

// Address: 0x1001AED5
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { retn }
}

// Address: 0x1001AEF0
int __cdecl SEH_10021400(int a1, _DWORD *TargetFrame, int a3)
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
            && _IsNonwritableInCurrentImage(&off_1002DFB8) != 0 )
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

// Address: 0x1001B07C
size_t __cdecl _msize(void *Block)
{
  size_t v2; // esi
  int v3; // [esp+10h] [ebp-20h]
  int v4; // [esp+14h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_10042764 != 3 )
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
    _invalid_parameter(0, 0, 0, 0, 0);
    return -1;
  }
}

// Address: 0x1001B11F
size_t __cdecl wcsspn(const wchar_t *String, const wchar_t *Control)
{
  const wchar_t *v2; // eax
  wchar_t v3; // cx
  const wchar_t *v4; // esi
  wchar_t v5; // dx

  v2 = String;
  v3 = *String;
  if ( *String != 0 )
  {
    while ( 1 )
    {
      v4 = Control;
      if ( *Control != v3 )
        break;
LABEL_6:
      v3 = *++v2;
      if ( *v2 == 0 )
        return v2 - String;
    }
    v5 = *Control;
    while ( v5 != 0 )
    {
      v5 = *++v4;
      if ( *v4 == v3 )
        goto LABEL_6;
    }
  }
  return v2 - String;
}

// Address: 0x1001B168
size_t __cdecl wcscspn(const wchar_t *String, const wchar_t *Control)
{
  const wchar_t *v2; // eax
  const wchar_t *v3; // edx
  wchar_t v4; // cx

  v2 = String;
  if ( *String != 0 )
  {
    while ( 1 )
    {
      v3 = Control;
      if ( *Control != 0 )
        break;
LABEL_6:
      if ( *++v2 == 0 )
        return v2 - String;
    }
    v4 = *Control;
    while ( v4 != *v2 )
    {
      v4 = *++v3;
      if ( *v3 == 0 )
        goto LABEL_6;
    }
  }
  return v2 - String;
}

// Address: 0x1001B1AD
int (__cdecl *_cfltcvt_init())(int, int, int, int, size_t Size, int)
{
  off_1003D6C0[0] = (int (*)())_cfltcvt;
  off_1003D6C4[0] = (int (*)())_cropzeros;
  off_1003D6C8[0] = (int (*)())_fassign;
  off_1003D6CC[0] = (int (*)())_forcdecpt;
  off_1003D6D0[0] = (int (*)())_positive;
  off_1003D6D4[0] = (int (*)())_cfltcvt;
  off_1003D6D8[0] = (int (*)())_cfltcvt_l;
  off_1003D6DC[0] = (int (*)())_fassign_l;
  off_1003D6E0[0] = (int (*)())_cropzeros_l;
  off_1003D6E4 = (int (*)())_forcdecpt_l;
  return _cfltcvt;
}

// Address: 0x1001B20D
int __cdecl _fpmath(int a1)
{
  int result; // eax

  _cfltcvt_init();
  result = _ms_p5_mp_test_fdiv();
  dword_10040B78 = result;
  if ( a1 != 0 )
    result = _setdefaultprecision();
  __asm { fnclex }
  return result;
}

// Address: 0x1001B239
int __usercall _ftol2_pentium4@<eax>(double a1@<st0>)
{
  return (int)a1;
}

// Address: 0x1001B266
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

// Address: 0x1001B2E0
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x1001B320
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

// Address: 0x1001B3D0
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

// Address: 0x1001B3FB
BOOL _is_LFH_enabled()
{
  HMODULE ModuleHandleW; // eax
  BOOL (__stdcall *HeapQueryInformation)(HANDLE, HEAP_INFORMATION_CLASS, PVOID, SIZE_T, PSIZE_T); // eax
  int (__stdcall *v2)(HANDLE, _DWORD, int *, int, _DWORD); // eax
  BOOL result; // eax
  HANDLE v4; // [esp-14h] [ebp-18h]
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = -1;
  if ( dword_10040B7C == 0 )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( ModuleHandleW != nullptr )
    {
      HeapQueryInformation = (BOOL (__stdcall *)(HANDLE, HEAP_INFORMATION_CLASS, PVOID, SIZE_T, PSIZE_T))GetProcAddress(ModuleHandleW, "HeapQueryInformation");
      dword_10040B80 = _encode_pointer(HeapQueryInformation);
    }
    dword_10040B7C = 1;
  }
  result = false;
  if ( dword_10040B80 != _encoded_null() )
  {
    v4 = hHeap;
    v2 = (int (__stdcall *)(HANDLE, _DWORD, int *, int, _DWORD))_decode_pointer(dword_10040B80);
    if ( v2(v4, 0, &v5, 4, 0) != 0 && v5 == 2 )
      return true;
  }
  return result;
}

// Address: 0x1001B47A
void *__cdecl _expand(void *Block, size_t Size)
{
  size_t v3; // esi
  int v4; // eax
  int *v5; // esi
  DWORD LastError; // eax
  SIZE_T v7; // edi
  int v8; // [esp+10h] [ebp-20h]
  void *v9; // [esp+14h] [ebp-1Ch]

  if ( Block == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return nullptr;
  }
  v3 = Size;
  if ( Size > 0xFFFFFFE0 )
  {
    *_errno() = 12;
    return nullptr;
  }
  if ( dword_10042764 == 3 )
  {
    _lock(4);
    v4 = __sbh_find_block(Block);
    v8 = v4;
    if ( v4 != 0 )
    {
      v9 = nullptr;
      if ( Size <= dword_10042754 && __sbh_resize_block(v4, Block, Size) != 0 )
        v9 = Block;
    }
    _unlock(4);
    if ( v8 != 0 )
      return v9;
    if ( Size == 0 )
      v3 = 1;
    v9 = HeapReAlloc(hHeap, 0x10u, Block, (v3 + 15) & 0xFFFFFFF0);
    if ( v9 != nullptr )
      return v9;
  }
  else
  {
    if ( Size == 0 )
      v3 = 1;
    v7 = HeapSize(hHeap, 0, Block);
    v9 = HeapReAlloc(hHeap, 0x10u, Block, v3);
    if ( v9 != nullptr )
      return v9;
    if ( v7 <= 0x4000 && v3 <= v7 && _is_LFH_enabled() )
      return Block;
  }
  v5 = _errno();
  LastError = GetLastError();
  *v5 = _get_errno_from_oserr(LastError);
  return v9;
}

// Address: 0x1001B5BA
int __cdecl wcscmp(const wchar_t *String1, const wchar_t *String2)
{
  int result; // eax

  while ( 1 )
  {
    result = *String1 - *String2;
    if ( result != 0 || *String2 == 0 )
      break;
    ++String1;
    ++String2;
  }
  if ( result < 0 )
    return -1;
  if ( result > 0 )
    return 1;
  return result;
}

// Address: 0x1001B600
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

// Address: 0x1001B61F
void *__cdecl calloc(size_t Count, size_t Size)
{
  void *v2; // esi
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v2 = (void *)_calloc_impl(Count, Size, (int)&v4);
  if ( v2 == nullptr && v4 != 0 && _errno() != nullptr )
    *_errno() = v4;
  return v2;
}

// Address: 0x1001B65F
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

  dword_10040C90 = v0;
  dword_10040C8C = v2;
  dword_10040C88 = v1;
  dword_10040C84 = v3;
  dword_10040C80 = v5;
  dword_10040C7C = v4;
  word_10040CA8 = __SS__;
  word_10040C9C = __CS__;
  word_10040C78 = __DS__;
  word_10040C74 = __ES__;
  word_10040C70 = __FS__;
  word_10040C6C = __GS__;
  v6 = __readeflags();
  dword_10040CA0 = v6;
  dword_10040C94 = vars0;
  dword_10040C98 = retaddr;
  dword_10040CA4 = (int)&v10;
  dword_10040BE0 = 65537;
  dword_10040B94 = retaddr;
  dword_10040B88 = -1073740791;
  dword_10040B8C = 1;
  dword_10040BD8 = IsDebuggerPresent();
  sub_10022830(1);
  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( dword_10040BD8 == 0 )
    sub_10022830(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x1001B765
PVOID __cdecl _encode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1003CE10 != -1
    && (v6 = dword_1003CE10, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
  {
    EncodePointer = *(PVOID (__stdcall **)(PVOID))(v2 + 504);
  }
  else
  {
    ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
    if ( ModuleHandleW == nullptr )
    {
      ModuleHandleW = _crt_waiting_on_module_handle(L"KERNEL32.DLL");
      if ( ModuleHandleW == nullptr )
        return a1;
    }
    EncodePointer = (PVOID (__stdcall *)(PVOID))GetProcAddress(ModuleHandleW, "EncodePointer");
  }
  if ( EncodePointer != nullptr )
    return EncodePointer(a1);
  return a1;
}

// Address: 0x1001B7D7
PVOID _encoded_null()
{
  return _encode_pointer(nullptr);
}

// Address: 0x1001B7E0
PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1003CE10 != -1
    && (v6 = dword_1003CE10, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
  {
    DecodePointer = *(PVOID (__stdcall **)(PVOID))(v2 + 508);
  }
  else
  {
    ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
    if ( ModuleHandleW == nullptr )
    {
      ModuleHandleW = _crt_waiting_on_module_handle(L"KERNEL32.DLL");
      if ( ModuleHandleW == nullptr )
        return a1;
    }
    DecodePointer = (PVOID (__stdcall *)(PVOID))GetProcAddress(ModuleHandleW, "DecodePointer");
  }
  if ( DecodePointer != nullptr )
    return DecodePointer(a1);
  return a1;
}

// Address: 0x1001B852
// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}

// Address: 0x1001B85B
int __stdcall __fls_getvalue(int a1)
{
  int (__stdcall *Value)(int); // eax

  Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
  return Value(a1);
}

// Address: 0x1001B875
int sub_1001B875()
{
  return dword_1003CE10;
}

// Address: 0x1001B87B
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

// Address: 0x1001B8AF
int __stdcall __fls_setvalue(int a1, int a2)
{
  int (__stdcall *v2)(int, int); // eax

  v2 = (int (__stdcall *)(int, int))_decode_pointer((void *)dword_10040EB4);
  return v2(a1, a2);
}

// Address: 0x1001B8CC
int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_1003CE10 != -1 )
  {
    v2 = dword_1003CE10;
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_10040EB8);
    v0(v2);
    dword_1003CE10 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}

// Address: 0x1001B909
int __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleW; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]
  int savedregs; // [esp+2Ch] [ebp+0h]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = _crt_waiting_on_module_handle(L"KERNEL32.DLL");
  hModule = ModuleHandleW;
  *(_DWORD *)(a1 + 92) = &unk_1002DF40;
  *(_DWORD *)(a1 + 20) = 1;
  if ( ModuleHandleW != nullptr )
  {
    *(_DWORD *)(a1 + 504) = GetProcAddress(ModuleHandleW, "EncodePointer");
    *(_DWORD *)(a1 + 508) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 200) = 67;
  *(_BYTE *)(a1 + 331) = 67;
  *(_DWORD *)(a1 + 104) = &unk_1003CEF0;
  _lock(13);
  InterlockedIncrement(*(volatile LONG **)(a1 + 104));
  _unlock(13);
  _lock(12);
  *(_DWORD *)(a1 + 108) = a2;
  if ( a2 == 0 )
    *(_DWORD *)(a1 + 108) = off_1003D4F8;
  __addlocaleref(*(volatile LONG **)(a1 + 108));
  savedregs = 268548562;
  return _unlock(12);
}

// Address: 0x1001B9F0
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
  v9 = dword_1003CE10;
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
      v8 = dword_1003CE10;
      v5 = (int (__stdcall *)(int, DWORD *))_decode_pointer((void *)dword_10040EB4);
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

// Address: 0x1001BA69
DWORD *_getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( v0 == nullptr )
    _amsg_exit(16);
  return v0;
}

// Address: 0x1001BA83
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
    if ( *((_UNKNOWN **)Block + 23) != &unk_1002DF40 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = *((void **)Block + 26);
    if ( v1 != nullptr && InterlockedDecrement(*((volatile LONG **)Block + 26)) == 0 && v1 != &unk_1003CEF0 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = *((_DWORD **)Block + 27);
    if ( v2 != nullptr )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != (_DWORD *)off_1003D4F8 && v2 != (_DWORD *)&unk_1003D420 && *v2 == 0 )
        __freetlocinfo(v2);
    }
    savedregs = 268549003;
    _unlock(12);
    free(Block);
  }
}

// Address: 0x1001BBB2
DWORD __cdecl _freeptd(void *Block)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_1003CE10 != -1 )
  {
    if ( Block == nullptr && TlsGetValue(dwTlsIndex) != nullptr )
    {
      v4 = dword_1003CE10;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      Block = (void *)Value(v4);
    }
    v5 = dword_1003CE10;
    v2 = (void (__stdcall *)(int, _DWORD))_decode_pointer((void *)dword_10040EB4);
    v2(v5, 0);
    _freefls(Block);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, nullptr);
  return result;
}

// Address: 0x1001BC20
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
    ModuleHandleW = _crt_waiting_on_module_handle(L"KERNEL32.DLL");
  v1 = ModuleHandleW;
  if ( ModuleHandleW != nullptr )
  {
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))GetProcAddress(ModuleHandleW, "FlsAlloc");
    FlsGetValue = (PVOID (__stdcall *)(DWORD))GetProcAddress(v1, "FlsGetValue");
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))GetProcAddress(v1, "FlsSetValue");
    FlsFree = (BOOL (__stdcall *)(DWORD))GetProcAddress(v1, "FlsFree");
    dword_10040EB8 = (int)FlsFree;
    if ( FlsAlloc == nullptr || FlsGetValue == nullptr || FlsSetValue == nullptr || FlsFree == nullptr )
    {
      FlsGetValue = TlsGetValue;
      FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))__crtTlsAlloc;
      FlsSetValue = TlsSetValue;
      dword_10040EB8 = (int)TlsFree;
    }
    v3 = TlsAlloc();
    dwTlsIndex = v3;
    if ( v3 == -1 || !TlsSetValue(v3, FlsGetValue) )
      return 0;
    _init_pointers();
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))_encode_pointer(FlsAlloc);
    FlsGetValue = (PVOID (__stdcall *)(DWORD))_encode_pointer(FlsGetValue);
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))_encode_pointer(FlsSetValue);
    dword_10040EB8 = (int)_encode_pointer((void *)dword_10040EB8);
    if ( _mtinitlocks() != 0 )
    {
      v4 = (int (__stdcall *)(_DWORD))_decode_pointer(FlsAlloc);
      dword_1003CE10 = v4(_freefls);
      if ( dword_1003CE10 != -1 )
      {
        v5 = (DWORD *)_calloc_crt(1u, 532);
        v6 = v5;
        if ( v5 != nullptr )
        {
          v11 = v5;
          v10 = dword_1003CE10;
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

// Address: 0x1001BDAD
void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr || dword_10040EBC == 0 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_10040EBC )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}

// Address: 0x1001BDF2
int __cdecl _calloc_crt(size_t Size, int a2)
{
  DWORD v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = _calloc_impl(Size, a2, 0);
    if ( v3 != 0 || dword_10040EBC == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_10040EBC )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1001BE3E
void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 != nullptr || Size == 0 || dword_10040EBC == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_10040EBC )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1001BE8C
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
    && (v2 != (FILE *)(sub_10023292() + 32) && v2 != (FILE *)(sub_10023292() + 64) || _isatty((int)File) == 0) )
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
        v9 = &unk_1003D508;
      else
        v9 = (_BYTE *)(dword_10042780[(int)File >> 5] + (((unsigned __int8)File & 0x1F) << 6));
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

// Address: 0x1001BFF0
void __cdecl AFXSetTopLevelFrame(struct CFrameWnd *a1)
{
  dword_10040EC0 = (int)a1;
}

// Address: 0x1001BFFF
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
    sub_10022830(2);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x1001C127
int __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))_decode_pointer((void *)dword_10040EC0);
  if ( v5 == nullptr )
  {
    sub_10022830(2);
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v5();
}

// Address: 0x1001C14D
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

// Address: 0x1001C17C
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

// Address: 0x1001C1A3
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

// Address: 0x1001C1F5
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
  wchar_t v50; // [esp-4h] [ebp-484h]
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
  wchar_t v63[2]; // [esp+48h] [ebp-438h] BYREF
  char SrcCh[4]; // [esp+4Ch] [ebp-434h] BYREF
  int v65; // [esp+50h] [ebp-430h]
  int v66; // [esp+54h] [ebp-42Ch]
  int v67; // [esp+58h] [ebp-428h]
  int v68; // [esp+5Ch] [ebp-424h]
  int v69; // [esp+60h] [ebp-420h] BYREF
  int v70; // [esp+64h] [ebp-41Ch]
  int v71; // [esp+68h] [ebp-418h]
  int v72; // [esp+6Ch] [ebp-414h]
  char *v73; // [esp+70h] [ebp-410h]
  int v74; // [esp+74h] [ebp-40Ch]
  int v75; // [esp+78h] [ebp-408h]
  wchar_t DstCh[255]; // [esp+7Ch] [ebp-404h] BYREF
  _BYTE v77[513]; // [esp+27Bh] [ebp-205h] BYREF

  v4 = a4;
  v5 = a2;
  v65 = a1;
  v70 = (int)a4;
  v59 = 0;
  v75 = 0;
  v66 = 0;
  v74 = 0;
  v68 = 0;
  v62 = 0;
  v67 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  if ( v65 == 0 || a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    goto LABEL_3;
  }
  v7 = *a2;
  v8 = 0;
  v69 = 0;
  v72 = 0;
  Block = nullptr;
  v71 = v7;
  if ( (_WORD)v7 == 0 )
  {
LABEL_210:
    if ( v58 != 0 )
      *(_DWORD *)(v57 + 112) &= ~2u;
    return v69;
  }
  while ( 2 )
  {
    v9 = v5 + 1;
    v61 = v9;
    if ( v69 < 0 )
      goto LABEL_210;
    if ( (unsigned __int16)(v7 - 32) > 0x58u )
      v10 = 0;
    else
      v10 = byte_1002E050[(unsigned __int16)v7] & 0xF;
    v55 = byte_1002E070[8 * v10 + v8] >> 4;
    switch ( v55 )
    {
      case 0:
        goto $NORMAL_STATE$29479;
      case 1:
        v74 = -1;
        v54 = 0;
        v62 = 0;
        v66 = 0;
        v68 = 0;
        v75 = 0;
        v67 = 0;
        goto LABEL_207;
      case 2:
        switch ( (unsigned __int16)v7 )
        {
          case ' ':
            v75 |= 2u;
            break;
          case '#':
            v75 |= 0x80u;
            break;
          case '+':
            v75 |= 1u;
            break;
          case '-':
            v75 |= 4u;
            break;
          case '0':
            v75 |= 8u;
            break;
          default:
            break;
        }
        goto LABEL_207;
      case 3:
        if ( (_WORD)v7 == 42 )
        {
          v70 = (int)(v4 + 2);
          v66 = *(_DWORD *)v4;
          if ( v66 < 0 )
          {
            v75 |= 4u;
            v66 = -v66;
          }
        }
        else
        {
          v66 = 10 * v66 + (unsigned __int16)v7 - 48;
        }
        goto LABEL_207;
      case 4:
        v74 = 0;
        goto LABEL_207;
      case 5:
        if ( (_WORD)v7 == 42 )
        {
          v70 = (int)(v4 + 2);
          v74 = *(_DWORD *)v4;
          if ( v74 < 0 )
            v74 = -1;
        }
        else
        {
          v74 = 10 * v74 + (unsigned __int16)v7 - 48;
        }
        goto LABEL_207;
      case 6:
        switch ( (unsigned __int16)v7 )
        {
          case 'I':
            v11 = *v9;
            if ( *v9 == 54 && v9[1] == 52 )
            {
              v75 |= 0x8000u;
              v61 = v9 + 2;
            }
            else if ( v11 == 51 && v9[1] == 50 )
            {
              v75 &= ~0x8000u;
              v61 = v9 + 2;
            }
            else if ( v11 != 100 && v11 != 105 && v11 != 111 && v11 != 117 && v11 != 120 && v11 != 88 )
            {
              v55 = 0;
$NORMAL_STATE$29479:
              v67 = 1;
              write_char(v65, &v69, v7);
            }
            break;
          case 'h':
            v75 |= 0x20u;
            break;
          case 'l':
            if ( *v9 == 108 )
            {
              v75 |= 0x1000u;
              v61 = v9 + 1;
            }
            else
            {
              v75 |= 0x10u;
            }
            break;
          case 'w':
            v75 |= 0x800u;
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
                v70 = (int)(v4 + 2);
                if ( v17 != nullptr && (v18 = *((char **)v17 + 1)) != nullptr )
                {
                  v19 = *v17;
                  v73 = v18;
                  if ( (v75 & 0x800) != 0 )
                  {
                    v20 = v19 - (v19 >> 31);
                    v67 = 1;
LABEL_178:
                    v19 = v20 >> 1;
                    goto LABEL_179;
                  }
                  v67 = 0;
                }
                else
                {
                  v73 = Str;
                  v19 = strlen(Str);
                }
LABEL_179:
                v72 = v19;
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
            v71 = 16;
            if ( (v75 & 0x80u) != 0 )
            {
              v63[0] = 48;
              v63[1] = v59 + 81;
              v68 = 2;
            }
$COMMON_INT$29621:
            if ( (v75 & 0x8000) != 0 || (v75 & 0x1000) != 0 )
            {
              v22 = *(_QWORD *)v4;
              v23 = v4 + 4;
            }
            else
            {
              v23 = v4 + 2;
              if ( (v75 & 0x20) != 0 )
              {
                v70 = (int)v23;
                if ( (v75 & 0x40) != 0 )
                  LODWORD(v22) = (__int16)*(v23 - 2);
                else
                  LODWORD(v22) = *(v23 - 2);
                v22 = (int)v22;
LABEL_150:
                if ( (v75 & 0x40) != 0 && v22 < 0 )
                {
                  v22 = -v22;
                  v75 |= 0x100u;
                }
                v32 = HIDWORD(v22);
                v33 = v22;
                if ( (v75 & 0x9000) == 0 )
                  v32 = 0;
                if ( v74 >= 0 )
                {
                  v75 &= ~8u;
                  if ( v74 > 512 )
                    v74 = 512;
                }
                else
                {
                  v74 = 1;
                }
                if ( (v32 | (unsigned int)v22) == 0 )
                  v68 = 0;
                for ( i = v77; ; --i )
                {
                  v35 = v74--;
                  if ( v35 <= 0 && (v32 | v33) == 0 )
                    break;
                  v36 = __PAIR64__(v32, v33) % v71 + 48;
                  v37 = __PAIR64__(v32, v33) / v71;
                  v32 = HIDWORD(v37);
                  v33 = v37;
                  if ( v36 > 57 )
                    LOBYTE(v36) = v59 + v36;
                  *i = v36;
                }
                v38 = (_BYTE *)(v77 - i);
                v39 = i + 1;
                v72 = (int)v38;
                v73 = v39;
                if ( (v75 & 0x200) != 0 && (v38 == nullptr || *v39 != 48) )
                {
                  *--v73 = 48;
                  v19 = (signed int)(v38 + 1);
                  goto LABEL_179;
                }
                goto LABEL_180;
              }
              LODWORD(v22) = *((_DWORD *)v23 - 1);
              if ( (v75 & 0x40) != 0 )
                v22 = (int)v22;
              else
                HIDWORD(v22) = 0;
            }
            v70 = (int)v23;
            goto LABEL_150;
          }
          switch ( (unsigned __int16)v7 )
          {
            case 'S':
              if ( (v75 & 0x830) == 0 )
                v75 |= 0x20u;
LABEL_71:
              v13 = v74;
              if ( v74 == -1 )
                v13 = 0x7FFFFFFF;
              v70 = (int)(v4 + 2);
              v14 = *(char **)v4;
              v73 = v14;
              if ( (v75 & 0x20) == 0 )
              {
                if ( v14 == nullptr )
                  v73 = (char *)off_1003DA94;
                v40 = v73;
                v67 = 1;
                while ( v13 != 0 )
                {
                  --v13;
                  if ( *(_WORD *)v40 == 0 )
                    break;
                  v40 += 2;
                }
                v20 = v40 - v73;
                goto LABEL_178;
              }
              if ( v14 == nullptr )
                v73 = Str;
              v72 = 0;
              for ( j = v73; v72 < v13; ++v72 )
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
              if ( (v75 & 0x830) == 0 )
                v75 |= 0x20u;
LABEL_86:
              v16 = *v4;
              v67 = 1;
              v70 = (int)(v4 + 2);
              *(_DWORD *)v53 = v16;
              if ( (v75 & 0x20) != 0 )
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
              v73 = (char *)DstCh;
              v72 = 1;
              break;
            case 'E':
            case 'G':
LABEL_64:
              v7 += 32;
              v54 = 1;
              v71 = v7;
LABEL_65:
              v75 |= 0x40u;
              v12 = (const char *)DstCh;
              v73 = (char *)DstCh;
              v72 = 512;
              if ( v74 >= 0 )
              {
                if ( v74 != 0 )
                {
                  if ( v74 > 512 )
                    v74 = 512;
                  if ( v74 > 163 )
                  {
                    v24 = v74 + 349;
                    v25 = _malloc_crt(v74 + 349);
                    LOBYTE(v7) = v71;
                    Block = v25;
                    if ( v25 != nullptr )
                    {
                      v73 = (char *)v25;
                      v72 = v24;
                      v12 = (const char *)v25;
                    }
                    else
                    {
                      v74 = 163;
                    }
                  }
                }
                else
                {
                  v74 = (_WORD)v7 == 103;
                }
              }
              else
              {
                v74 = 6;
              }
              v26 = *(_DWORD *)v4;
              v27 = v4 + 4;
              v52[0] = v26;
              v52[1] = *((_DWORD *)v27 - 1);
              v49 = v54;
              v48 = v74;
              v70 = (int)v27;
              v47 = (char)v7;
              v46 = v72;
              v28 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_1003D6D8[0]);
              v28(v52, v12, v46, v47, v48, v49, &Locale);
              v29 = v75 & 0x80;
              if ( (v75 & 0x80) != 0 && v74 == 0 )
              {
                v30 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1003D6E4);
                v30(v12, &Locale);
              }
              if ( (_WORD)v71 == 103 && v29 == 0 )
              {
                v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1003D6E0[0]);
                v31(v12, &Locale);
              }
              if ( *v12 == 45 )
              {
                v75 |= 0x100u;
                v73 = (char *)++v12;
              }
              v19 = strlen(v12);
              goto LABEL_179;
            default:
              break;
          }
LABEL_180:
          if ( v62 != 0 )
            goto LABEL_205;
          if ( (v75 & 0x40) != 0 )
          {
            if ( (v75 & 0x100) != 0 )
            {
              v50 = 45;
LABEL_188:
              v63[0] = v50;
              v68 = 1;
              goto LABEL_189;
            }
            if ( (v75 & 1) != 0 )
            {
              v50 = 43;
              goto LABEL_188;
            }
            if ( (v75 & 2) != 0 )
            {
              v50 = 32;
              goto LABEL_188;
            }
          }
LABEL_189:
          v41 = v72;
          v42 = v66 - v72 - v68;
          if ( (v75 & 0xC) == 0 )
            write_multi_char(&v69, 0x20u, v66 - v72 - v68, v65);
          v43 = v65;
          write_string(&v69, v63, v65, v68);
          if ( (v75 & 8) != 0 && (v75 & 4) == 0 )
            write_multi_char(&v69, 0x30u, v42, v43);
          if ( v67 != 0 || v41 <= 0 )
          {
            write_string(&v69, (wchar_t *)v73, v43, v41);
          }
          else
          {
            v44 = v73;
            v71 = v41;
            while ( 1 )
            {
              --v71;
              v51 = _mbtowc_l(v53, v44, *((_DWORD *)Locale.locinfo + 43), &Locale);
              if ( v51 <= 0 )
                break;
              write_char(v65, &v69, v53[0]);
              v44 += v51;
              if ( v71 <= 0 )
                goto LABEL_202;
            }
            v69 = -1;
          }
LABEL_202:
          if ( v69 >= 0 && (v75 & 4) != 0 )
            write_multi_char(&v69, 0x20u, v42, v65);
LABEL_205:
          if ( Block != nullptr )
          {
            free(Block);
            Block = nullptr;
          }
LABEL_207:
          v5 = v61;
          v45 = *v61;
          v71 = v45;
          if ( (_WORD)v45 == 0 )
            goto LABEL_210;
          v8 = v55;
          v4 = (unsigned __int16 *)v70;
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
          v74 = 8;
          goto LABEL_133;
        }
        if ( (unsigned __int16)v7 < 0x65u )
          goto LABEL_180;
        if ( (unsigned __int16)v7 <= 0x67u )
          goto LABEL_65;
        if ( (unsigned __int16)v7 == 105 )
        {
LABEL_111:
          v75 |= 0x40u;
LABEL_112:
          v71 = 10;
          goto $COMMON_INT$29621;
        }
        if ( (unsigned __int16)v7 != 110 )
        {
          if ( (unsigned __int16)v7 != 111 )
            goto LABEL_180;
          v71 = 8;
          if ( (v75 & 0x80u) != 0 )
            v75 |= 0x200u;
          goto $COMMON_INT$29621;
        }
        v21 = *(_WORD **)v4;
        v70 = (int)(v4 + 2);
        if ( _get_printf_count_output() != 0 )
        {
          if ( (v75 & 0x20) != 0 )
            *v21 = v69;
          else
            *(_DWORD *)v21 = v69;
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

// Address: 0x1001CD8D
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
      v8 = byte_1002E0B0[(unsigned __int16)v7] & 0xF;
    v9 = (unsigned __int8)byte_1002E0D0[9 * v8 + v65] >> 4;
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
          v29 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_1003D6D8[0]);
          v29(v53, v13, v47, v48, v49, v50, &Locale);
          v30 = v76 & 0x80;
          if ( (v76 & 0x80) != 0 && v75 == 0 )
          {
            v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1003D6E4);
            v31(v13, &Locale);
          }
          if ( (_WORD)v71 == 103 && v30 == 0 )
          {
            v32 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1003D6E0[0]);
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
            v74 = (char *)off_1003DA94;
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

// Address: 0x1001D930
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
         && dword_10042748 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 1001D98C case 0 }
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

// Address: 0x1001DCA0
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
         && dword_10042748 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 1001DCFC case 0 }
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

// Address: 0x1001E005
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
    v3 = &unk_10040EC4;
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

// Address: 0x1001E080
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

// Address: 0x1001E108
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

  if ( (dword_1003CE30 & 1) != 0 )
    _NMSG_WRITE(10);
  v1 = sub_10021512();
  if ( v1 != 0 )
  {
    v1 = raise(22);
    v3 = v5;
  }
  if ( (dword_1003CE30 & 2) != 0 )
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

// Address: 0x1001E21F
unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_1003CE30;
  dword_1003CE30 = Mask & Flags | dword_1003CE30 & ~Mask;
  return result;
}

// Address: 0x1001E240
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
    if ( a1 == dword_1003CE38[2 * v1] )
      break;
    v8 = ++v1;
  }
  while ( v1 < 0x17 );
  if ( v1 < 0x17 )
  {
    if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_10040B3C == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v4 = StdHandle;
      if ( StdHandle != nullptr && StdHandle != (HANDLE)-1 )
      {
        v5 = (const char **)&(&off_1003CE3C)[2 * v1];
        v6 = strlen(*v5);
        WriteFile(v4, *v5, v6, &NumberOfBytesWritten, nullptr);
      }
    }
    else if ( a1 != 252 )
    {
      if ( strcpy_s(Destination, 0x314u, "Runtime Error!\n\nProgram: ") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      byte_10040FED = 0;
      if ( GetModuleFileNameA(nullptr, Filename, 0x104u) == 0
        && strcpy_s(Filename, 0x2FBu, "<program name unknown>") != 0 )
      {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strlen(Filename) + 1 > 0x3C )
      {
        v2 = strlen(Filename);
        if ( strncpy_s(&Filename[v2 - 59], &unk_100411E4 - (_UNKNOWN *)&Filename[v2 - 59], "...", 3u) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strcat_s(Destination, 0x314u, "\n\n") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcat_s(Destination, 0x314u, (&off_1003CE3C)[2 * v8]) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      sub_100239F9(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
}

// Address: 0x1001E3EB
void _FF_MSGBANNER()
{
  if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_10040B3C == 1 )
  {
    _NMSG_WRITE(252);
    _NMSG_WRITE(255);
  }
}

// Address: 0x1001E424
void __cdecl AFXSetTopLevelFrame(struct CFrameWnd *a1)
{
  dword_100411EC = (int)a1;
}

// Address: 0x1001E433
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

// Address: 0x1001E462
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
  v3 = &unk_1003CEF0 - (_UNKNOWN *)a1;
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

// Address: 0x1001E4C6
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

// Address: 0x1001E659
volatile LONG *__updatetmbcinfo()
{
  DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = _getptd();
  if ( (dword_1003D414 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != lpAddend )
    {
      if ( v1 != nullptr && InterlockedDecrement(v1) == 0 && v1 != (volatile LONG *)&unk_1003CEF0 )
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

// Address: 0x1001E6FD
UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, nullptr);
  dword_100411F0 = 0;
  switch ( a1 )
  {
    case -2:
      dword_100411F0 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_100411F0 = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_100411F0 = 1;
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

// Address: 0x1001E779
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
      if ( dword_1003D320[i] == SystemCP )
      {
        memset(a2 + 7, 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_1003D330 + 48 * v19;
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
              *((_BYTE *)a2 + v10 + 29) |= byte_1003D31C[v18];
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
        v13 = (_WORD *)((char *)&unk_1003D324 + v12);
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
    if ( dword_100411F0 == 0 )
      return -1;
  }
  setSBCS(a2);
  return 0;
}

// Address: 0x1001E95E
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
        if ( v4 != (_DWORD *)&unk_1003CEF0 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( InterlockedDecrement((volatile LONG *)v1[26]) == 0 && (_UNKNOWN *)v1[26] != &unk_1003CEF0 )
        free((void *)v1[26]);
      v1[26] = (DWORD)v4;
      InterlockedIncrement(v4);
      if ( (v1[28] & 2) == 0 && (dword_1003D414 & 1) == 0 )
      {
        _lock(13);
        dword_10041200 = v4[1];
        dword_10041204 = v4[2];
        dword_10041208 = v4[3];
        for ( i = 0; i < 5; ++i )
          word_100411F4[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_1003D110[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_1003D218[k] = *((_BYTE *)v4 + k + 285);
        if ( InterlockedDecrement(lpAddend) == 0 && lpAddend != (volatile LONG *)&unk_1003CEF0 )
          free((void *)lpAddend);
        lpAddend = v4;
        InterlockedIncrement(v4);
        _unlock(13);
      }
    }
  }
  return v10;
}

// Address: 0x1001EAF8
int __initmbctable()
{
  if ( dword_1004288C == 0 )
  {
    _setmbcp(-3);
    dword_1004288C = 1;
  }
  return 0;
}

// Address: 0x1001EB16
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
  if ( v2 != nullptr && v2 != &off_1003DB68 )
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
  if ( (_UNKNOWN **)v7 != &off_1003DAA8 && *(_DWORD *)(v7 + 180) == 0 )
  {
    __free_lc_time(*((_DWORD *)Block + 53));
    free(*((void **)Block + 53));
  }
  v8 = (void **)(Block + 80);
  for ( Blocka = 6; Blocka != 0; --Blocka )
  {
    if ( *(v8 - 2) != &unk_1003D418 && *v8 != nullptr && *(_DWORD *)*v8 == 0 )
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

// Address: 0x1001EC5F
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
    if ( *(v2 - 2) != (volatile LONG *)&unk_1003D418 && *v2 != nullptr )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
      InterlockedIncrement(v2[1]);
    v2 += 4;
  }
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}

// Address: 0x1001ECEE
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
      if ( *(v2 - 2) != (volatile LONG *)&unk_1003D418 && *v2 != nullptr )
        InterlockedDecrement(*v2);
      if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
        InterlockedDecrement(v2[1]);
      v2 += 4;
    }
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
  }
  return lpAddend;
}

// Address: 0x1001ED87
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
      if ( *v2 == 0 && v2 != (volatile LONG *)&unk_1003D420 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}

// Address: 0x1001EDC5
DWORD __updatetlocinfo()
{
  DWORD *v0; // esi
  DWORD v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_1003D414 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = _getptd()[27];
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)v0 + 27, (volatile LONG *)off_1003D4F8);
    _unlock(12);
    v1 = (DWORD)v3;
  }
  if ( v1 == 0 )
    _amsg_exit(32);
  return v1;
}

// Address: 0x1001EE3B
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

// Address: 0x1001EEF1
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
  dword_10042780[0] = v0;
  uNumber = 32;
  for ( i = v0 + 2048; v0 < i; i = dword_10042780[0] + 2048 )
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
      v5 = &dword_10042780[k];
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
        v7 = dword_10042780[k >> 5] + ((k & 0x1F) << 6);
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
    v9 = dword_10042780[0] + (m << 6);
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

// Address: 0x1001F145
void _ioterm()
{
  void **v0; // esi
  char *v1; // edi
  unsigned int i; // eax

  v0 = (void **)dword_10042780;
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
  while ( (int)v0 < (int)&dword_10042880 );
}

// Address: 0x1001F193
int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( dword_1004288C == 0 )
    __initmbctable();
  v0 = dword_10040B30;
  v1 = 0;
  if ( dword_10040B30 != nullptr )
  {
    while ( *v0 != 0 )
    {
      if ( *v0 != 61 )
        ++v1;
      v0 += strlen(v0) + 1;
    }
    v3 = (char **)_calloc_crt(v1 + 1, 4);
    dword_10040B50 = v3;
    if ( v3 != nullptr )
    {
      for ( i = dword_10040B30; ; i += v6 )
      {
        if ( *i == 0 )
        {
          free(dword_10040B30);
          dword_10040B30 = nullptr;
          *v3 = nullptr;
          dword_10042880 = 1;
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
      free(dword_10040B50);
      dword_10040B50 = nullptr;
      return -1;
    }
  }
  return -1;
}

// Address: 0x1001F271
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

// Address: 0x1001F40B
int _setargv()
{
  int v0; // edi
  size_t v1; // eax
  char **v2; // esi
  size_t v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( dword_1004288C == 0 )
    __initmbctable();
  byte_10041334 = 0;
  GetModuleFileNameA(nullptr, byte_10041230, 0x104u);
  dword_10040B60 = (int)byte_10041230;
  if ( dword_10042894 == 0 || (v6 = (char *)dword_10042894, *(_BYTE *)dword_10042894 == 0) )
    v6 = byte_10041230;
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
  dword_10040B44 = v5 - 1;
  dword_10040B48 = (int)v2;
  return 0;
}

// Address: 0x1001F4C6
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

  v0 = dword_10041338;
  v1 = nullptr;
  EnvironmentStringsW = nullptr;
  if ( dword_10041338 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      dword_10041338 = 1;
      goto LABEL_8;
    }
    if ( GetLastError() == 120 )
    {
      v0 = 2;
      dword_10041338 = 2;
    }
    else
    {
      v0 = dword_10041338;
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

// Address: 0x1001F5FD
void *sub_1001F5FD()
{
  return &unk_10036950;
}

// Address: 0x1001F623
void __cdecl sub_1001F623()
{
  ;
}

// Address: 0x1001F649
int __cdecl _heap_init(int a1)
{
  int result; // eax

  result = (int)HeapCreate(a1 == 0, 0x1000u, 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    dword_10042764 = 1;
    return 1;
  }
  return result;
}

// Address: 0x1001F679
BOOL _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi
  BOOL result; // eax

  if ( dword_10042764 == 3 )
  {
    v0 = 0;
    if ( dword_1004274C > 0 )
    {
      v1 = (LPVOID *)((char *)lpMem + 16);
      do
      {
        VirtualFree(*(v1 - 1), 0, 0x8000u);
        HeapFree(hHeap, 0, *v1);
        v1 += 5;
        ++v0;
      }
      while ( v0 < dword_1004274C );
    }
    HeapFree(hHeap, 0, lpMem);
  }
  result = HeapDestroy(hHeap);
  hHeap = nullptr;
  return result;
}

// Address: 0x1001F6ED
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
    while ( v5 < &v4[3 * dword_1003D558] );
    if ( v5 < &v4[3 * dword_1003D558] && *v5 == a1 )
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
            v9 = dword_1003D54C;
            if ( dword_1003D54C < dword_1003D54C + dword_1003D550 )
            {
              v10 = 12 * dword_1003D54C;
              do
              {
                *(_DWORD *)(v10 + v3[23] + 8) = 0;
                ++v9;
                v10 += 12;
              }
              while ( v9 < dword_1003D54C + dword_1003D550 );
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

// Address: 0x1001F84D
int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}

// Address: 0x1001F86D
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
    dword_1003CC7C = ~v4;
  }
  else
  {
    dword_1003CC7C = ~__security_cookie;
  }
}

// Address: 0x1001F903
int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_10041340;
  while ( 1 )
  {
    if ( dword_1003D564[2 * v0] == 1 )
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

// Address: 0x1001F94E
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
  while ( (int)v0 < (int)off_1003D680 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 != nullptr && v2[1] == (LPCRITICAL_SECTION)1 )
      DeleteCriticalSection(*v2);
    v2 += 2;
  }
  while ( (int)v2 < (int)off_1003D680 );
}

// Address: 0x1001F9A5
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}

// Address: 0x1001F9BC
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

// Address: 0x1001FA7F
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 == nullptr && _mtinitlocknum(a1) == 0 )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}

// Address: 0x1001FAB2
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 20 * dword_1004274C; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x1001FAE2
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
      if ( dword_10041490 != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_10041490 + 3) + (dword_10042760 << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_10041490 + 2) |= 0x80000000 >> dword_10042760;
        *(_DWORD *)(*((_DWORD *)dword_10041490 + 4) + 4 * dword_10042760 + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_10041490 + 4) + 67);
        v20 = (LPVOID *)dword_10041490;
        if ( *(_BYTE *)(*((_DWORD *)dword_10041490 + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_10041490 + 1) &= ~1u;
          v20 = (LPVOID *)dword_10041490;
        }
        if ( v20[2] == (LPVOID)-1 )
        {
          VirtualFree(v20[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_10041490 + 4));
          memcpy_0(
            dword_10041490,
            (char *)dword_10041490 + 20,
            (size_t)lpMem + 20 * dword_1004274C - (_DWORD)dword_10041490 - 20);
          --dword_1004274C;
          if ( a1 > dword_10041490 )
            a1 -= 5;
          dword_10042758 = (int)lpMem;
        }
      }
      dword_10041490 = a1;
      dword_10042760 = v4;
      return a1;
    }
  }
  return result;
}

// Address: 0x1001FDF8
char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v0 = dword_1004274C;
  if ( dword_1004274C == dword_1004275C )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_1004275C + 16));
    if ( v1 == nullptr )
      return nullptr;
    dword_1004275C += 16;
    v0 = dword_1004274C;
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
  ++dword_1004274C;
  **((_DWORD **)v3 + 4) = -1;
  return v3;
}

// Address: 0x1001FEA8
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

// Address: 0x1001FFB0
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

// Address: 0x10020291
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

  v1 = (char *)lpMem + 20 * dword_1004274C;
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
  for ( i = (char *)dword_10042758; ; i += 20 )
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
      if ( (unsigned int)i >= dword_10042758 || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
        break;
    }
    if ( i == (char *)dword_10042758 )
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
          if ( (unsigned int)i >= dword_10042758 || *((_DWORD *)i + 2) != 0 )
            break;
        }
        if ( i == (char *)dword_10042758 )
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
  dword_10042758 = (int)i;
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
  if ( v24 == 0 && i == dword_10041490 && v31 == dword_10042760 )
    dword_10041490 = nullptr;
  *v6 = v31;
  return v23 + 1;
}

// Address: 0x10020576
void __cdecl AFXSetTopLevelFrame(struct CFrameWnd *a1)
{
  dword_10041494 = (int)a1;
}

// Address: 0x10020585
int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))_decode_pointer((void *)dword_10041494);
  return v1 != nullptr && v1(Size) != 0;
}

// Address: 0x100205AD
std::exception *__thiscall sub_100205AD(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char *const *)&a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x100205CB
int __thiscall sub_100205CB(_DWORD *this)
{
  *this = &std::bad_exception::`vftable';
  return sub_1002485C();
}

// Address: 0x100205D6
_DWORD *__thiscall sub_100205D6(_DWORD *this, char a2)
{
  *this = &std::bad_exception::`vftable';
  sub_1002485C();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100205FD
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

// Address: 0x1002065C
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

// Address: 0x100206A5
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

// Address: 0x10020786
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

// Address: 0x100207CB
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
        sub_1001A050(a1[6], v2);
    }
  }
}

// Address: 0x10020820
int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2;
  if ( (int)a2[1] >= 0 )
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]);
  return result;
}

// Address: 0x10020849
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

// Address: 0x100208C4
void __cdecl __noreturn CallUnexpected()
{
  if ( _getptd()[37] != 0 )
    _inconsistency();
  unexpected();
}

// Address: 0x1002090D
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

// Address: 0x10020AA9
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
        if ( unknown_libname_8(*(_DWORD *)(a1 + 24)) != 0 && unknown_libname_8(v6) != 0 )
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
          if ( unknown_libname_8(v11) != 0 && unknown_libname_8(v6) != 0 )
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
          if ( unknown_libname_8(v11) != 0 && unknown_libname_8(v6) != 0 && unknown_libname_8(*(_DWORD *)(a4 + 24)) != 0 )
            return ((*(_BYTE *)a4 & 4) != 0) + 1;
        }
        else if ( unknown_libname_8(v11) != 0 && unknown_libname_8(v6) != 0 )
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

// Address: 0x10020C28
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
      return sub_1001A050((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_1001A050((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x10020CBA
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

// Address: 0x10020D28
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

// Address: 0x10020E1C
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
      if ( unknown_libname_8(v11) == 0 )
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
                sub_100205AD((std::exception *)pExceptionObject, "bad exception");
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

// Address: 0x10021163
std::exception *__thiscall sub_10021163(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x10021180
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

// Address: 0x10021266
void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[30];
  if ( v0 != nullptr )
    v0();
  abort();
}

// Address: 0x1002129F
void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[31];
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x100212B2
void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer((void *)dword_1004149C);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x100212EA
PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = _encode_pointer(terminate);
  dword_1004149C = (int)result;
  return result;
}

// Address: 0x10021300
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

// Address: 0x1002134C
int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    v1 = &off_1003D6C0[i];
    result = (int (*)())_encode_pointer(off_1003D6C0[i]);
    *v1 = result;
  }
  return result;
}

// Address: 0x10021370
BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  return *(_WORD *)a1 == 23117 && *(_DWORD *)(v2 = a1 + *(_DWORD *)(a1 + 60)) == 17744 && *(_WORD *)(v2 + 24) == 267;
}

// Address: 0x100213B0
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

// Address: 0x10021400
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase((int)&_ImageBase)
      && (PESection = _FindPESection((int)&_ImageBase, a1 - (_DWORD)&_ImageBase)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x100214BD
int __cdecl _initp_misc_winsig(int a1)
{
  dword_100414A0 = a1;
  dword_100414A4 = a1;
  dword_100414A8 = a1;
  dword_100414AC = a1;
  return a1;
}

// Address: 0x100214DB
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
  while ( result < a2 + 12 * dword_1003D558 );
  if ( result >= a2 + 12 * dword_1003D558 || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}

// Address: 0x10021512
PVOID sub_10021512()
{
  return _decode_pointer((void *)dword_100414A8);
}

// Address: 0x1002151F
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
      v4 = &dword_100414AC;
      v5 = (void *)dword_100414AC;
      goto LABEL_18;
    }
    if ( Signal == 21 )
    {
      v4 = &dword_100414A4;
      v5 = (void *)dword_100414A4;
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
      v4 = &dword_100414A0;
      v5 = (void *)dword_100414A0;
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
      v4 = &dword_100414A8;
      v5 = (void *)dword_100414A8;
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
    for ( i = dword_1003D54C; i < dword_1003D54C + dword_1003D550; ++i )
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

// Address: 0x100216CF
void __cdecl AFXSetTopLevelFrame(struct CFrameWnd *a1)
{
  dword_100414B4 = (int)a1;
}

// Address: 0x100216DE
void __cdecl AFXSetTopLevelFrame(struct CFrameWnd *a1)
{
  dword_100414B8 = (int)a1;
}

// Address: 0x100216ED
BOOL __cdecl __crtInitCritSecAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x1002174D
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

// Address: 0x100217A4
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

// Address: 0x10021833
int has_osfxsr_set()
{
  return 1;
}

// Address: 0x10021883
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

// Address: 0x100218E5
int sub_100218E5()
{
  dword_10042748 = _get_sse2_info();
  return 0;
}

// Address: 0x100218F4
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

// Address: 0x10021984
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

// Address: 0x100219CA
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x100219E6
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x100219FD
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x10021A16
void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &ReturnPoint, nullptr, nullptr);
}

// Address: 0x10021A30
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x10021A50
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

// Address: 0x10021AE5
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

// Address: 0x10021B58
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

// Address: 0x10021BDA
BOOL __cdecl _positive(double *a1)
{
  return *a1 >= 0.0;
}

// Address: 0x10021BF6
_QWORD *__cdecl _fassign_l(int a1, _QWORD *a2, int a3, struct localeinfo_struct *a4)
{
  _QWORD *result; // eax
  __int64 v5; // [esp+0h] [ebp-8h] BYREF

  if ( a1 != 0 )
  {
    sub_10024B6E((int)&v5, a3, a4);
    result = a2;
    *a2 = v5;
  }
  else
  {
    sub_10024C16((int)&a1, a3, a4);
    result = a2;
    *(_DWORD *)a2 = a1;
  }
  return result;
}

// Address: 0x10021C38
_QWORD *__cdecl _fassign(int a1, _QWORD *a2, int a3)
{
  return _fassign_l(a1, a2, a3, nullptr);
}

// Address: 0x10021C52
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

// Address: 0x10021C71
char __cdecl _forcdecpt(char *a1)
{
  return _forcdecpt_l(a1, nullptr);
}

// Address: 0x10021C84
char *__cdecl _cropzeros(char *a1)
{
  return _cropzeros_l(a1, nullptr);
}

// Address: 0x10021C97
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
  if ( (byte_100415DC & 1) != 0 && *v15 == 48 )
    memcpy_0(v15, v15 + 1, 3u);
  if ( v23 != 0 )
    *(_DWORD *)(v22 + 112) &= ~2u;
  return 0;
}

// Address: 0x10021E06
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

// Address: 0x10021ED6
int __cdecl _cftoe(_DWORD *a1, _BYTE *a2, unsigned int a3, int a4, int a5)
{
  return _cftoe_l(a1, a2, a3, a4, a5, nullptr);
}

// Address: 0x10021EF6
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

// Address: 0x10022269
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

// Address: 0x10022360
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

// Address: 0x1002241B
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

// Address: 0x10022515
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

// Address: 0x1002259D
int __cdecl _cfltcvt(_DWORD *a1, char *a2, int a3, int a4, size_t Size, int a6)
{
  return _cfltcvt_l(a1, a2, a3, a4, Size, a6, nullptr);
}

// Address: 0x100225C0
errno_t _setdefaultprecision()
{
  errno_t result; // eax

  result = _controlfp_s(nullptr, 0x10000u, 0x30000u);
  if ( result != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return result;
}

// Address: 0x100225EB
BOOL _ms_p5_test_fdiv()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0;
}

// Address: 0x10022629
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

// Address: 0x10022660
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

// Address: 0x10022712
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
      if ( dword_10041498 == 0 )
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
    if ( dword_10042764 == 3 )
    {
      v4 = (v4 + 15) & 0xFFFFFFF0;
      if ( Sizea <= dword_10042754 )
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

// Address: 0x10022830
void sub_10022830()
{
  dword_10042744 = 0;
}

// Address: 0x10022838
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
  v7 = (_BYTE *)(dword_10042780[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
  *v7 &= ~2u;
  return lDistanceToMove;
}

// Address: 0x100228BD
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
  v4 = &dword_10042780[FileHandle >> 5];
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

// Address: 0x100229D6
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
  v4 = &dword_10042780[FileHandle >> 5];
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

// Address: 0x10023109
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
    || (v4 = &dword_10042780[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x100231E5
int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_10041578;
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

// Address: 0x1002322E
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return 0;
  }
  else if ( FileHandle >= 0 && FileHandle < uNumber )
  {
    return *(_BYTE *)(dword_10042780[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) & 0x40;
  }
  else
  {
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
}

// Address: 0x10023292
_UNKNOWN **sub_10023292()
{
  return &off_1003D810;
}

// Address: 0x10023298
int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_10042740;
  if ( dword_10042740 == 0 )
  {
    v0 = 512;
LABEL_5:
    dword_10042740 = v0;
    goto LABEL_6;
  }
  if ( dword_10042740 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)_calloc_crt(v0, 4);
  dword_10041728 = v1;
  if ( v1 == nullptr )
  {
    dword_10042740 = 20;
    v1 = (char *)_calloc_crt(0x14u, 4);
    dword_10041728 = v1;
    if ( v1 == nullptr )
      return 26;
  }
  v3 = 0;
  v4 = &off_1003D810;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&Str )
      break;
    v1 = (char *)dword_10041728;
  }
  v5 = 0;
  v6 = &unk_1003D820;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_10042780[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || v7 == 0 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_1003D880 );
  return 0;
}

// Address: 0x10023349
void __endstdio()
{
  sub_1002568C();
  if ( byte_10040B68 != 0 )
    _fcloseall();
  free(dword_10041728);
}

// Address: 0x10023369
void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1003D810 || Stream > &stru_1003DA70 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_1003D810) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}

// Address: 0x100233AA
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

// Address: 0x100233DC
void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1003D810 || Stream > &stru_1003DA70 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_1003D810) >> 5) + 16);
  }
}

// Address: 0x10023418
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

// Address: 0x10023447
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x10023479
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
      ? (v3 = &unk_1003D508)
      : (v2 = &dword_10042780[_fileno(Stream) >> 5], v3 = (_BYTE *)(*v2 + ((_fileno(Stream) & 0x1F) << 6))),
        (v3[36] & 0x7F) == 2
     || (_fileno(Stream) == -1 || _fileno(Stream) == -2
       ? (v5 = &unk_1003D508)
       : (v4 = &dword_10042780[_fileno(Stream) >> 5], v5 = (_BYTE *)(*v4 + ((_fileno(Stream) & 0x1F) << 6))),
         (v5[36] & 0x7F) == 1
      || (_fileno(Stream) == -1 || _fileno(Stream) == -2
        ? (v7 = (char *)&unk_1003D508)
        : (v6 = &dword_10042780[_fileno(Stream) >> 5], v7 = (char *)(*v6 + ((_fileno(Stream) & 0x1F) << 6))),
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

// Address: 0x10023600
int __cdecl _get_printf_count_output()
{
  return dword_1004157C == (__security_cookie | 1);
}

// Address: 0x10023620
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

// Address: 0x100236AB
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

// Address: 0x100237C2
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x100237DC
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

// Address: 0x10023814
int __cdecl isleadbyte(int C)
{
  return _isleadbyte_l(C, nullptr);
}

// Address: 0x10023827
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

// Address: 0x100238AE
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

// Address: 0x10023991
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

// Address: 0x100239F9
int __cdecl sub_100239F9(int a1, int a2, int a3)
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
  if ( dword_100415BC == 0 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( MessageBoxA == nullptr )
      return 0;
    dword_100415BC = (int)_encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v5, "GetActiveWindow");
    dword_100415C0 = (int)_encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v5, "GetLastActivePopup");
    dword_100415C4 = (int)_encode_pointer(GetLastActivePopup);
    GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                          v5,
                                                                                          "GetUserObjectInformationA");
    dword_100415CC = (int)_encode_pointer(GetUserObjectInformationA);
    if ( dword_100415CC != 0 )
    {
      GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v5, "GetProcessWindowStation");
      dword_100415C8 = (int)_encode_pointer(GetProcessWindowStation);
    }
  }
  if ( (PVOID)dword_100415C8 == v3
    || (PVOID)dword_100415CC == v3
    || (v11 = (int (*)(void))_decode_pointer((void *)dword_100415C8),
        v12 = _decode_pointer((void *)dword_100415CC),
        v13 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v12,
        v11 == nullptr)
    || v12 == nullptr
    || (v14 = v11()) != 0 && v13(v14, 1, v19, 12, v20) != 0 && (v19[8] & 1) != 0 )
  {
    if ( (PVOID)dword_100415C0 != v3 )
    {
      v15 = (int (*)(void))_decode_pointer((void *)dword_100415C0);
      if ( v15 != nullptr )
      {
        v21 = v15();
        if ( v21 != 0 && (PVOID)dword_100415C4 != v3 )
        {
          v16 = (int (__stdcall *)(int))_decode_pointer((void *)dword_100415C4);
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
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_100415BC);
  if ( v17 != nullptr )
    return v17(v21, a1, a2, a3);
  return 0;
}

// Address: 0x10023B62
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

// Address: 0x10023BD6
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

// Address: 0x10023C8B
int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_10040B38;
      dword_10040B38 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_10040B38;
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x10023CD6
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

// Address: 0x10023D27
int __cdecl isdigit(int C)
{
  if ( dword_1004120C != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_1003D4E8[C] & 4;
}

// Address: 0x10023D55
void __cdecl _freea(void *Memory)
{
  if ( Memory != nullptr && *((_DWORD *)Memory - 2) == 56797 )
    free((char *)Memory - 8);
}

// Address: 0x10023D75
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
  if ( dword_100415D0 == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, nullptr, 0) != 0 )
    {
      dword_100415D0 = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_100415D0 = 2;
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
  if ( dword_100415D0 != 2 && dword_100415D0 != 0 )
  {
    if ( dword_100415D0 == 1 )
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

// Address: 0x1002411A
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

// Address: 0x1002415F
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

  v8 = dword_100415D4;
  v9 = nullptr;
  v10 = v7;
  if ( dword_100415D4 == 0 )
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, CharType) )
    {
      dword_100415D4 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v8 = 2;
      dword_100415D4 = 2;
    }
    else
    {
      v8 = dword_100415D4;
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

// Address: 0x10024319
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

// Address: 0x1002435B
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

// Address: 0x100244F0
void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)a1 != off_1003DB68 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_1003DB6C )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_1003DB70 )
      free(v1);
  }
}

// Address: 0x10024535
void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_1003DB74 )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_1003DB78 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_1003DB7C )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_1003DB80 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_1003DB84 )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_1003DB88 )
      free(*(void **)(a1 + 32));
    v1 = *(void **)(a1 + 36);
    if ( v1 != off_1003DB8C )
      free(v1);
  }
}

// Address: 0x100245D0
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

// Address: 0x10024620
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

// Address: 0x10024660
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

// Address: 0x100246B7
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
    *(_DWORD *)CharType = (unsigned __int16)(Type & *((_WORD *)off_1003DAA4 + C));
  }
  return Type & CharType[0];
}

// Address: 0x10024741
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

// Address: 0x10024794
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x100247AC
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

// Address: 0x100247FF
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

// Address: 0x1002485C
void __thiscall sub_1002485C(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}

// Address: 0x10024872
const char *__thiscall exception::what(exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x1002487F
void *__thiscall sub_1002487F(void *this, char a2)
{
  sub_1002485C(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100248A0
// Microsoft VisualC 2-14/net runtime
BOOL __cdecl unknown_libname_8(int a1)
{
  return a1 != 0;
}

// Address: 0x100248B4
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x100248D4
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

// Address: 0x10024919
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

// Address: 0x1002499D
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

// Address: 0x100249C0
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x100249D4);
}

// Address: 0x100249C9
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_1003DBBC = a3;
  unk_1003DBB8 = result;
  unk_1003DBC0 = a2;
  return result;
}

// Address: 0x100249E8
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x100249EB
int _fptrap()
{
  return _amsg_exit(2);
}

// Address: 0x10024A00
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

// Address: 0x10024A2D
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

// Address: 0x10024B42
int __cdecl tolower(int C)
{
  int result; // eax

  if ( dword_1004120C != 0 )
    return _tolower_l(C, nullptr);
  result = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return result;
}

// Address: 0x10024B6E
int __cdecl sub_10024B6E(int a1, int a2, struct localeinfo_struct *a3)
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
  v3 = sub_10025D87(v11, a1);
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

// Address: 0x10024C16
int __cdecl sub_10024C16(int a1, int a2, struct localeinfo_struct *a3)
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
  v3 = sub_100262CB(v11, a1);
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

// Address: 0x10024CBE
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

// Address: 0x10024D7D
int *__cdecl sub_10024D7D(int *a1, int *a2)
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

// Address: 0x10024E35
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
  sub_10024D7D(v12, &a1);
  v7 = v12[2];
  v5[2] = sub_10026F07(v12[0], v12[1], v7, 17, 0, &v9);
  *v5 = v10;
  v5[1] = v9;
  if ( strcpy_s(Destination, SizeInBytes, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  v5[3] = Destination;
  return v5;
}

// Address: 0x10024ED0
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

// Address: 0x10024FB0
unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0;
  else
    return a1 >> a2;
}

// Address: 0x10024FCF
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

// Address: 0x1002503B
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

// Address: 0x100251A7
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x100251C4
int __cdecl atol(const char *String)
{
  return strtol(String, nullptr, 10);
}

// Address: 0x100251DA
int __cdecl _free_osfhnd(int a1)
{
  int *v1; // edi
  int v2; // esi
  _DWORD *v3; // eax

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = &dword_10042780[a1 >> 5], v2 = (a1 & 0x1F) << 6, ((v3 = (_DWORD *)(v2 + *v1))[1] & 1) == 0)
    || *v3 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_10040B3C == 1 )
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

// Address: 0x10025260
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
         && ((v2 = (intptr_t *)(dword_10042780[FileHandle >> 5] + ((FileHandle & 0x1F) << 6)))[1] & 1) != 0 )
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

// Address: 0x100252D7
BOOL __cdecl __lock_fhandle(int a1)
{
  int v1; // esi
  BOOL inited; // [esp+10h] [ebp-1Ch]

  v1 = dword_10042780[a1 >> 5] + ((a1 & 0x1F) << 6);
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
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_10042780[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
  return inited;
}

// Address: 0x10025377
void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_10042780[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}

// Address: 0x1002539E
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( dword_1003DBD0 == 0 )
    goto LABEL_10;
  if ( hConsoleOutput == (HANDLE)-2 )
    __initconout();
  if ( hConsoleOutput == (HANDLE)-1 )
    return -1;
  if ( !WriteConsoleW(hConsoleOutput, &Character, 1u, &NumberOfCharsWritten, nullptr) )
  {
    if ( dword_1003DBD0 != 2 || GetLastError() != 120 )
      return -1;
    dword_1003DBD0 = 0;
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP();
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, &Character, 1, MultiByteStr, 5, nullptr, nullptr);
    if ( hConsoleOutput != (HANDLE)-1 && WriteConsoleA(hConsoleOutput, MultiByteStr, v3, &NumberOfCharsWritten, nullptr) )
      return Character;
    return -1;
  }
  dword_1003DBD0 = 1;
  return Character;
}

// Address: 0x10025463
int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // esi
  int *v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  _lock(1);
  for ( i = 3; i < dword_10042740; ++i )
  {
    v1 = 4 * i;
    v2 = (int *)((char *)dword_10041728 + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 && fclose((FILE *)v3) != -1 )
        ++v5;
      if ( i >= 20 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_10041728 + v1) + 32));
        free(*(void **)((char *)dword_10041728 + v1));
        *(_DWORD *)((char *)dword_10041728 + v1) = 0;
      }
    }
  }
  _unlock(1);
  return v5;
}

// Address: 0x10025502
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

// Address: 0x1002556A
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

// Address: 0x100255B2
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
  for ( i = 0; i < dword_10042740; ++i )
  {
    v2 = (int *)((char *)dword_10041728 + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 )
      {
        _lock_file2(i, v3);
        v4 = *(_DWORD *)(*((_DWORD *)dword_10041728 + i) + 12);
        if ( (v4 & 0x83) != 0 )
        {
          if ( a1 == 1 )
          {
            if ( _fflush_nolock(*((FILE **)dword_10041728 + i)) != -1 )
              ++v7;
          }
          else if ( a1 == 0 && (v4 & 2) != 0 && _fflush_nolock(*((FILE **)dword_10041728 + i)) == -1 )
          {
            v6 = -1;
          }
        }
        _unlock_file2(i, *((_DWORD *)dword_10041728 + i));
      }
    }
  }
  _unlock(1);
  result = v7;
  if ( a1 != 1 )
    return v6;
  return result;
}

// Address: 0x1002568C
int sub_1002568C()
{
  return flsall(1);
}

// Address: 0x10025695
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
    && (FileHandle != (FILE *)(sub_10023292() + 8) && FileHandle != (FILE *)(sub_10023292() + 16)
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
        v10 = &unk_1003D508;
      else
        v10 = (_BYTE *)(dword_10042780[FileHandlea >> 5] + ((FileHandlea & 0x1F) << 6));
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

// Address: 0x10025809
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

// Address: 0x10025A38
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_1004120C != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_1003D500, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x10025A63
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

// Address: 0x10025B20
void *__usercall _alloca_probe_16@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 0xF;
  return _alloca_probe(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}

// Address: 0x10025B36
void *__usercall _alloca_probe_8@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 7;
  return _alloca_probe(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}

// Address: 0x10025B4C
int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0;
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) != 0 )
    return atol(LCData);
  else
    return -1;
}

// Address: 0x10025B95
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

// Address: 0x10025D49
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

// Address: 0x10025D87
int __cdecl sub_10025D87(unsigned __int16 *a1, unsigned int *a2)
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
    v8 = dword_1003DBE8 - 1;
    v64 = v3;
    v65 = dword_1003DBE8 / 32;
    v9 = &v60 + dword_1003DBE8 / 32;
    v66 = 31 - dword_1003DBE8 % 32;
    if ( ((1 << (31 - dword_1003DBE8 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_1003DBE8 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
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
    if ( v3 >= dword_1003DBE4 - dword_1003DBE8 )
    {
      if ( v3 > dword_1003DBE4 )
      {
        if ( v3 < dword_1003DBE0 )
        {
          v60 &= ~0x80000000;
          v5 = dword_1003DBF4 + v3;
          v50 = dword_1003DBEC / 32;
          v51 = dword_1003DBEC % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_1003DBEC % 32;
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
          v43 = dword_1003DBEC / 32;
          v44 = dword_1003DBEC % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_1003DBEC % 32;
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
          v5 = dword_1003DBF4 + dword_1003DBE0;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_1003DBE4 - v64) / 32;
      v62 = v59;
      v18 = (dword_1003DBE4 - v64) % 32;
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
      v24 = dword_1003DBE8 - 1;
      v25 = dword_1003DBE8 / 32;
      v65 = dword_1003DBE8 / 32;
      v26 = &v60 + dword_1003DBE8 / 32;
      v64 = 31 - dword_1003DBE8 % 32;
      if ( ((1 << (31 - dword_1003DBE8 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_1003DBE8 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
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
      v36 = (dword_1003DBEC + 1) / 32;
      v37 = (dword_1003DBEC + 1) % 32;
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
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_1003DBEC));
  if ( dword_1003DBF0 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_1003DBF0 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x100262CB
int __cdecl sub_100262CB(unsigned __int16 *a1, unsigned int *a2)
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
    v8 = dword_1003DC00 - 1;
    v64 = v3;
    v65 = dword_1003DC00 / 32;
    v9 = &v60 + dword_1003DC00 / 32;
    v66 = 31 - dword_1003DC00 % 32;
    if ( ((1 << (31 - dword_1003DC00 % 32)) & *v9) != 0 )
    {
      v10 = v65;
      for ( i = (~(-1 << (31 - dword_1003DC00 % 32)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 )
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
    if ( v3 >= dword_1003DBFC - dword_1003DC00 )
    {
      if ( v3 > dword_1003DBFC )
      {
        if ( v3 < dword_1003DBF8 )
        {
          v60 &= ~0x80000000;
          v5 = dword_1003DC0C + v3;
          v50 = dword_1003DC04 / 32;
          v51 = dword_1003DC04 % 32;
          v65 = 0;
          v74 = 0;
          v67 = 32 - dword_1003DC04 % 32;
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
          v43 = dword_1003DC04 / 32;
          v44 = dword_1003DC04 % 32;
          v65 = 0;
          v73 = 0;
          v67 = 32 - dword_1003DC04 % 32;
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
          v5 = dword_1003DC0C + dword_1003DBF8;
          result = 1;
        }
        goto LABEL_79;
      }
      v60 = v57;
      v61 = v58;
      v17 = (dword_1003DBFC - v64) / 32;
      v62 = v59;
      v18 = (dword_1003DBFC - v64) % 32;
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
      v24 = dword_1003DC00 - 1;
      v25 = dword_1003DC00 / 32;
      v65 = dword_1003DC00 / 32;
      v26 = &v60 + dword_1003DC00 / 32;
      v64 = 31 - dword_1003DC00 % 32;
      if ( ((1 << (31 - dword_1003DC00 % 32)) & *v26) != 0 )
      {
        for ( j = (~(-1 << (31 - dword_1003DC00 % 32)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 )
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
      v36 = (dword_1003DC04 + 1) / 32;
      v37 = (dword_1003DC04 + 1) % 32;
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
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (31 - dword_1003DC04));
  if ( dword_1003DC08 == 64 )
  {
    v56 = v61;
    a2[1] = v55;
    *a2 = v56;
  }
  else if ( dword_1003DC08 == 32 )
  {
    *a2 = v55;
  }
  return result;
}

// Address: 0x1002680F
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
        v24 = (char *)&unk_1003DC20 - 96;
        v66 = v23;
        if ( v23 != 0 )
        {
          if ( v23 < 0 )
          {
            v66 = -v23;
            v24 = (char *)&unk_1003DD80 - 96;
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

// Address: 0x10026F07
int __cdecl sub_10026F07(__int64 a1, __int16 a2, int a3, char a4, int a5)
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
  v69 = (char *)&unk_1003DC20 - 96;
  if ( v10 != 0 )
  {
    if ( v10 > 0 )
    {
      v11 = v10;
      v69 = (char *)&unk_1003DD80 - 96;
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

// Address: 0x1002782E
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

// Address: 0x100278BC
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

// Address: 0x1002795C
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
  if ( dword_10042748 != 0 )
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

// Address: 0x10027C6B
HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  hConsoleOutput = result;
  return result;
}

// Address: 0x10027C8A
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 )
    CloseHandle(hConsoleOutput);
  result = dword_1003DC10;
  if ( dword_1003DC10 != (HANDLE)-1 && dword_1003DC10 != (HANDLE)-2 )
    return (HANDLE)CloseHandle(dword_1003DC10);
  return result;
}

// Address: 0x10027CB7
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

// Address: 0x10027D2E
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

// Address: 0x10027DAA
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
    || (v2 = &dword_10042780[FileHandle >> 5], (*(_BYTE *)((v3 = (FileHandle & 0x1F) << 6) + *v2 + 4) & 1) == 0) )
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

// Address: 0x10027E90
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

// Address: 0x10027EF1
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

// Address: 0x100280BF
int __cdecl __set_fpsr_sse2(unsigned int a1)
{
  int result; // eax

  result = 0;
  if ( dword_10042748 != 0 )
  {
    if ( (a1 & 0x40) != 0 && dword_1003DEF4 != 0 )
      _mm_setcsr(a1);
    else
      _mm_setcsr(a1 & 0xFFFFFFBF);
  }
  return result;
}

// Address: 0x10028131
int __cdecl _close_nolock(int FileHandle)
{
  intptr_t osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_10042780[0] + 132) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_10042780[0] + 68) & 1) != 0)
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
  *(_BYTE *)(dword_10042780[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) = 0;
  if ( LastError == 0 )
    return 0;
  _dosmaperr(LastError);
  return -1;
}

// Address: 0x100281CD
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
    || (v2 = &dword_10042780[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v2 + v3 + 4) & 1) == 0) )
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

// Address: 0x1002829A
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

// Address: 0x100282D0
// positive sp value has been detected, the output may be wrong!
int __fastcall found_bx(int a1, int a2)
{
  return a2 - 1;
}

// Address: 0x100282E6
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

// Address: 0x1002839E
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x100283A4
// attributes: thunk
BOOL __stdcall ClosePrinter(HANDLE hPrinter)
{
  return __imp_ClosePrinter(hPrinter);
}

// Address: 0x100283AA
// attributes: thunk
LONG __stdcall DocumentPropertiesW(
        HWND hWnd,
        HANDLE hPrinter,
        LPWSTR pDeviceName,
        PDEVMODEW pDevModeOutput,
        PDEVMODEW pDevModeInput,
        DWORD fMode)
{
  return __imp_DocumentPropertiesW(hWnd, hPrinter, pDeviceName, pDevModeOutput, pDevModeInput, fMode);
}

// Address: 0x100283B0
// attributes: thunk
BOOL __stdcall OpenPrinterW(LPWSTR pPrinterName, LPHANDLE phPrinter, LPPRINTER_DEFAULTSW pDefault)
{
  return __imp_OpenPrinterW(pPrinterName, phPrinter, pDefault);
}

// Address: 0x100283B6
// MFC 3.1-14.0 32bit
void __thiscall unknown_libname_80(int this)
{
  if ( *(_DWORD *)this != 0 )
  {
    free(*(void **)this);
    *(_DWORD *)this = 0;
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
}

// Address: 0x100283D5
int __thiscall sub_100283D5(ATL::CComCriticalSection *this)
{
  return ATL::CComCriticalSection::CComCriticalSection(this);
}

// Address: 0x100283D7
ATL::CComCriticalSection *__thiscall ATL::CComCriticalSection::CComCriticalSection(ATL::CComCriticalSection *this)
{
  memset(this, 0, 0x18u);
  return this;
}

// Address: 0x100283EB
int __thiscall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0;
}

// Address: 0x100284C5
// attributes: thunk
HRESULT __stdcall CreateStdAccessibleObject(HWND hwnd, LONG idObject, const IID *const riid, void **ppvObject)
{
  return __imp_CreateStdAccessibleObject(hwnd, idObject, riid, ppvObject);
}

// Address: 0x100284D5
// attributes: thunk
LONG_PTR __stdcall LresultFromObject(const IID *const riid, WPARAM wParam, LPUNKNOWN punk)
{
  return __imp_LresultFromObject(riid, wParam, punk);
}

// Address: 0x100284DB
FARPROC __stdcall sub_100284DB(ULONG_PTR a1, char *Arguments)
{
  _DWORD *v2; // esi
  int v3; // ebx
  char *v4; // edi
  const CHAR *v5; // ecx
  char *v6; // ebx
  char *v7; // edx
  bool v8; // zf
  HMODULE LibraryA; // edi
  int v11; // edx
  const CHAR *v12; // eax
  FARPROC ProcAddress; // ebx
  _DWORD *v14; // eax
  char *v15; // eax
  _DWORD v16[3]; // [esp+Ch] [ebp-44h] BYREF
  LPCSTR lpLibFileName; // [esp+18h] [ebp-38h]
  BOOL v18; // [esp+1Ch] [ebp-34h]
  LPCSTR lpProcName; // [esp+20h] [ebp-30h]
  HMODULE v20; // [esp+24h] [ebp-2Ch]
  int (__stdcall *v21)(); // [esp+28h] [ebp-28h]
  DWORD LastError; // [esp+2Ch] [ebp-24h]
  volatile LONG *Target; // [esp+38h] [ebp-18h]
  char *v24; // [esp+44h] [ebp-Ch]
  int v25; // [esp+4Ch] [ebp-4h]

  v2 = (_DWORD *)a1;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = (char *)&_ImageBase + *(_DWORD *)(a1 + 20);
  v5 = (char *)&_ImageBase + *(_DWORD *)(a1 + 4);
  Target = (int *)((char *)&_ImageBase.unused + *(_DWORD *)(a1 + 8));
  v6 = (char *)&_ImageBase + v3;
  v7 = (char *)&_ImageBase + *(_DWORD *)(a1 + 16);
  v25 = *(_DWORD *)(a1 + 28);
  lpLibFileName = v5;
  v24 = v4;
  v16[2] = Arguments;
  v8 = (*(_DWORD *)a1 & 1) == 0;
  v16[0] = 36;
  v16[1] = a1;
  v18 = false;
  lpProcName = nullptr;
  v20 = nullptr;
  v21 = nullptr;
  LastError = 0;
  if ( v8 )
  {
    Arguments = (char *)v16;
    RaiseException(0xC06D0057, 0, 1u, (const ULONG_PTR *)&Arguments);
    return nullptr;
  }
  LibraryA = (HMODULE)*Target;
  v11 = *(_DWORD *)&v7[4 * ((Arguments - v6) >> 2)];
  a1 = 4 * ((Arguments - v6) >> 2);
  v18 = v11 >= 0;
  v12 = (char *)&_ImageBase.unused + v11 + 2;
  if ( v11 < 0 )
    v12 = (const CHAR *)(unsigned __int16)v11;
  lpProcName = v12;
  ProcAddress = nullptr;
  if ( dword_1004162C == nullptr || (ProcAddress = (FARPROC)dword_1004162C(0, v16)) == nullptr )
  {
    if ( LibraryA == nullptr )
    {
      if ( dword_1004162C == nullptr || (LibraryA = (HMODULE)dword_1004162C(1, v16)) == nullptr )
      {
        LibraryA = LoadLibraryA(lpLibFileName);
        if ( LibraryA == nullptr )
        {
          LastError = GetLastError();
          if ( dword_10041628 == nullptr || (LibraryA = (HMODULE)dword_10041628(3, v16)) == nullptr )
          {
            Arguments = (char *)v16;
            RaiseException(0xC06D007E, 0, 1u, (const ULONG_PTR *)&Arguments);
            return v21;
          }
        }
      }
      if ( (HMODULE)InterlockedExchange(Target, (LONG)LibraryA) == LibraryA )
      {
        FreeLibrary(LibraryA);
      }
      else if ( v2[6] != 0 )
      {
        v14 = LocalAlloc(0x40u, 8u);
        if ( v14 != nullptr )
        {
          v14[1] = v2;
          *v14 = dword_10041624;
          dword_10041624 = (int)v14;
        }
      }
    }
    v20 = LibraryA;
    if ( dword_1004162C != nullptr )
      ProcAddress = (FARPROC)dword_1004162C(2, v16);
    if ( ProcAddress == nullptr
      && (v2[5] == 0
       || v2[7] == 0
       || *(_DWORD *)(v15 = (char *)LibraryA + *((_DWORD *)LibraryA + 15)) != 17744
       || *((_DWORD *)v15 + 2) != v25
       || LibraryA != *((HMODULE *)v15 + 13)
       || (ProcAddress = *(FARPROC *)&v24[a1]) == nullptr) )
    {
      ProcAddress = GetProcAddress(LibraryA, lpProcName);
      if ( ProcAddress == nullptr )
      {
        LastError = GetLastError();
        if ( dword_10041628 != nullptr )
          ProcAddress = (FARPROC)dword_10041628(4, v16);
        if ( ProcAddress == nullptr )
        {
          a1 = (ULONG_PTR)v16;
          RaiseException(0xC06D007F, 0, 1u, &a1);
          ProcAddress = v21;
        }
      }
    }
    *(_DWORD *)Arguments = ProcAddress;
  }
  if ( dword_1004162C != nullptr )
  {
    LastError = 0;
    v20 = LibraryA;
    v21 = ProcAddress;
    dword_1004162C(5, v16);
  }
  return ProcAddress;
}

// Address: 0x10029FA0
int sub_10029FA0()
{
  sub_10001BE0();
  return atexit(sub_1002A2A0);
}

// Address: 0x10029FB1
int sub_10029FB1()
{
  int result; // eax

  sub_100103DD();
  result = atexit(sub_1000C4FF);
  byte_1003EC4C = result;
  return result;
}

// Address: 0x10029FC7
int sub_10029FC7()
{
  return atexit(sub_1002A2AB);
}

// Address: 0x10029FD3
int sub_10029FD3()
{
  return atexit(sub_1002A2B6);
}

// Address: 0x10029FDF
int sub_10029FDF()
{
  return atexit(sub_1002A2C1);
}

// Address: 0x10029FEB
CAfxStringMgr *sub_10029FEB()
{
  return CAfxStringMgr::CAfxStringMgr((CAfxStringMgr *)&unk_1003EC50);
}

// Address: 0x10029FF5
int sub_10029FF5()
{
  return atexit(sub_1002A2CC);
}

// Address: 0x1002A001
int sub_1002A001()
{
  return atexit(sub_1002A2D6);
}

// Address: 0x1002A00D
int sub_1002A00D()
{
  AUX_DATA::AUX_DATA((AUX_DATA *)&dword_1003EEE8);
  return atexit(sub_1002A2E0);
}

// Address: 0x1002A023
int `dynamic initializer for '_simpleResourceException''()
{
  CException::CException((CException *)dword_1003EF40, 0);
  dword_1003EF4C = 0;
  dword_1003EF50 = 0;
  dword_1003EF40[0] = &CResourceException::`vftable';
  dword_1003F054 = 61474;
  return atexit(sub_1002A2EA);
}

// Address: 0x1002A05D
int `dynamic initializer for '_simpleUserException''()
{
  CException::CException((CException *)dword_1003F058, 0);
  dword_1003F064 = 0;
  dword_1003F068 = 0;
  dword_1003F058[0] = (int)&CUserException::`vftable';
  dword_1003F16C = 61476;
  return atexit(sub_1002A2F5);
}

// Address: 0x1002A097
int sub_1002A097()
{
  return atexit(sub_1002A300);
}

// Address: 0x1002A0A3
UINT sub_1002A0A3()
{
  UINT result; // eax

  result = RegisterWindowMessageW(L"commctrl_DragListMsg");
  dword_100409A0 = result;
  return result;
}

// Address: 0x1002A0B4
int `dynamic initializer for 'public: static CWnd const CWnd::wndTop''()
{
  CCmdTarget::CCmdTarget((CCmdTarget *)dword_100409A8);
  dword_100409A8[0] = (int)&CWnd::`vftable';
  dword_100409D8 = (int)&CWnd::XAccessible::`vftable';
  dword_100409DC = (int)&CWnd::XAccessibleServer::`vftable';
  dword_100409C8 = 0;
  byte_100409CC = 0;
  dword_100409D4 = 0;
  dword_100409E0 = 0;
  dword_100409E4 = 0;
  dword_100409E8 = 0;
  dword_100409EC = 0;
  dword_100409F0 = 0;
  dword_100409F4 = 0;
  dword_100409F8 = 0;
  return atexit(sub_1002A30A);
}

// Address: 0x1002A11C
int `dynamic initializer for 'public: static CWnd const CWnd::wndBottom''()
{
  CCmdTarget::CCmdTarget((CCmdTarget *)&dword_10040A00);
  dword_10040A00 = (int)&CWnd::`vftable';
  dword_10040A30 = (int)&CWnd::XAccessible::`vftable';
  dword_10040A34 = (int)&CWnd::XAccessibleServer::`vftable';
  dword_10040A20 = 1;
  byte_10040A24 = 0;
  dword_10040A2C = 0;
  dword_10040A38 = 0;
  dword_10040A3C = 0;
  dword_10040A40 = 0;
  dword_10040A44 = 0;
  dword_10040A48 = 0;
  dword_10040A4C = 0;
  dword_10040A50 = 0;
  return atexit(sub_1002A314);
}

// Address: 0x1002A189
int `dynamic initializer for 'public: static CWnd const CWnd::wndTopMost''()
{
  CCmdTarget::CCmdTarget((CCmdTarget *)dword_10040A58);
  dword_10040A78 = -1;
  dword_10040A58[0] = (int)&CWnd::`vftable';
  dword_10040A88 = (int)&CWnd::XAccessible::`vftable';
  dword_10040A8C = (int)&CWnd::XAccessibleServer::`vftable';
  byte_10040A7C = 0;
  dword_10040A84 = 0;
  dword_10040A90 = 0;
  dword_10040A94 = 0;
  dword_10040A98 = 0;
  dword_10040A9C = 0;
  dword_10040AA0 = 0;
  dword_10040AA4 = 0;
  dword_10040AA8 = 0;
  return atexit(sub_1002A31E);
}

// Address: 0x1002A1F3
int `dynamic initializer for 'public: static CWnd const CWnd::wndNoTopMost''()
{
  CCmdTarget::CCmdTarget((CCmdTarget *)dword_10040AB0);
  dword_10040AB0[0] = (int)&CWnd::`vftable';
  dword_10040AE0 = (int)&CWnd::XAccessible::`vftable';
  dword_10040AE4 = (int)&CWnd::XAccessibleServer::`vftable';
  dword_10040AD0 = -2;
  byte_10040AD4 = 0;
  dword_10040ADC = 0;
  dword_10040AE8 = 0;
  dword_10040AEC = 0;
  dword_10040AF0 = 0;
  dword_10040AF4 = 0;
  dword_10040AF8 = 0;
  dword_10040AFC = 0;
  dword_10040B00 = 0;
  return atexit(sub_1002A328);
}

// Address: 0x1002A260
void sub_1002A260()
{
  AfxClassInit((struct CRuntimeClass *)&off_1003CB30);
}

// Address: 0x1002A26B
void sub_1002A26B()
{
  AfxClassInit((struct CRuntimeClass *)&off_1003CC40);
}

// Address: 0x1002A290
void __cdecl sub_1002A290()
{
  operator delete((void *)lpBuffer);
}

// Address: 0x1002A2A0
void __cdecl sub_1002A2A0()
{
  sub_10001D20((CWinApp *)dword_10041648);
}

// Address: 0x1002A2AB
void __cdecl sub_1002A2AB()
{
  off_1003C1B8 = (int (**)())&CSimpleException::`vftable';
}

// Address: 0x1002A2B6
void __cdecl sub_1002A2B6()
{
  off_1003C2D0 = (int (**)())&CSimpleException::`vftable';
}

// Address: 0x1002A2C1
void __cdecl sub_1002A2C1()
{
  off_1003C3E8 = (int (**)())&CSimpleException::`vftable';
}

// Address: 0x1002A2CC
void __cdecl sub_1002A2CC()
{
  CThreadLocalObject::~CThreadLocalObject((CThreadLocalObject *)&unk_1003ECA4);
}

// Address: 0x1002A2D6
void __cdecl sub_1002A2D6()
{
  CProcessLocalObject::~CProcessLocalObject((CProcessLocalObject *)&unk_1003ECA0);
}

// Address: 0x1002A2E0
void __cdecl sub_1002A2E0()
{
  AUX_DATA::~AUX_DATA((void **)&dword_1003EEE8);
}

// Address: 0x1002A2EA
void __cdecl sub_1002A2EA()
{
  dword_1003EF40[0] = &CSimpleException::`vftable';
}

// Address: 0x1002A2F5
void __cdecl sub_1002A2F5()
{
  dword_1003F058[0] = (int)&CSimpleException::`vftable';
}

// Address: 0x1002A300
void __cdecl sub_1002A300()
{
  CProcessLocalObject::~CProcessLocalObject((CProcessLocalObject *)&unk_10040B08);
}

// Address: 0x1002A30A
void __cdecl sub_1002A30A()
{
  CWnd::~CWnd((CWnd *)dword_100409A8);
}

// Address: 0x1002A314
void __cdecl sub_1002A314()
{
  CWnd::~CWnd((CWnd *)&dword_10040A00);
}

// Address: 0x1002A31E
void __cdecl sub_1002A31E()
{
  CWnd::~CWnd((CWnd *)dword_10040A58);
}

// Address: 0x1002A328
void __cdecl sub_1002A328()
{
  CWnd::~CWnd((CWnd *)dword_10040AB0);
}

