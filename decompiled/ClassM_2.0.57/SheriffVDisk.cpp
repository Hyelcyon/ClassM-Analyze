// Decompiled from SheriffVDisk.dll (ClassM_2.0.57\unpacked\SheriffVDisk.dll)

// Address: 0x10001000
int __thiscall sub_10001000(_DWORD *this)
{
  *this = &std::bad_alloc::`vftable';
  return sub_10007591();
}

// Address: 0x10001010
_DWORD *__thiscall sub_10001010(_DWORD *this, char a2)
{
  *this = &std::bad_alloc::`vftable';
  sub_10007591();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001040
_DWORD *__thiscall sub_10001040(_DWORD *this, int a2)
{
  sub_100074B3();
  *this = &std::logic_error::`vftable';
  *(this + 8) = 0;
  *(this + 9) = 15;
  *((_BYTE *)this + 16) = 0;
  sub_10001F90(a2, 0, -1);
  return this;
}

// Address: 0x100010B0
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_1(_DWORD *this)
{
  if ( *(this + 9) < 0x10u )
    return this + 4;
  else
    return (_DWORD *)*(this + 4);
}

// Address: 0x100010C0
void **__thiscall sub_100010C0(void **this, char a2)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  sub_10007591(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001110
_DWORD *__thiscall sub_10001110(_DWORD *this, int a2)
{
  sub_10001040(this, a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x10001130
int __thiscall sub_10001130(void **this)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  return sub_10007591(this);
}

// Address: 0x10001170
void __thiscall sub_10001170(void **this)
{
  void *v2; // [esp-4h] [ebp-8h]

  *this = &data_buffer::`vftable';
  if ( *(this + 4) != nullptr )
    operator delete(*(this + 4));
  v2 = *(this + 1);
  *(this + 4) = nullptr;
  *(this + 5) = nullptr;
  *(this + 6) = nullptr;
  operator delete(v2);
}

// Address: 0x100011B0
void **__thiscall sub_100011B0(void **this, char a2)
{
  void *v4; // [esp-4h] [ebp-8h]

  *this = &data_buffer::`vftable';
  if ( *(this + 4) != nullptr )
    operator delete(*(this + 4));
  v4 = *(this + 1);
  *(this + 4) = nullptr;
  *(this + 5) = nullptr;
  *(this + 6) = nullptr;
  operator delete(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10001200
char __cdecl sub_10001200(HANDLE hDevice, int a2, __int64 *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  __int64 v7; // kr00_8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // [esp+2Ch] [ebp-98h]
  char v10; // [esp+34h] [ebp-90h]
  unsigned __int8 v11; // [esp+35h] [ebp-8Fh]
  unsigned __int8 v12; // [esp+36h] [ebp-8Eh]
  unsigned __int64 v13; // [esp+3Ch] [ebp-88h]
  DWORD BytesReturned; // [esp+50h] [ebp-74h] BYREF
  _QWORD OutBuffer[12]; // [esp+54h] [ebp-70h] BYREF
  int v16; // [esp+C0h] [ebp-4h]

  v4 = 0;
  v13 = 0;
  v16 = 0;
  if ( sub_10002930(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), a2 + 16) == 0 )
    return 0;
  memset(OutBuffer, 0, sizeof(OutBuffer));
  if ( DeviceIoControl(hDevice, 0x90064u, nullptr, 0, OutBuffer, 0x60u, &BytesReturned, nullptr)
    && OutBuffer[10] < OutBuffer[11]
    && OutBuffer[10] < v9 )
  {
    v13 = OutBuffer[10];
    sub_10002BE0(
      LODWORD(OutBuffer[11]) - LODWORD(OutBuffer[10]) + 1,
      (unsigned __int64)(OutBuffer[11] - OutBuffer[10] + 1LL) >> 32);
  }
  if ( v9 != 0 )
    v13 = 0;
  if ( ((unsigned __int8)(*(_BYTE *)(v13 / v11) >> (v10 * (v13 % v11))) & v12) != 0 && sub_10002B20() == 0 )
    return 0;
  v6 = 0;
  v7 = -1;
  do
  {
    LODWORD(v8) = sub_100029D0();
    if ( v8 > __PAIR64__(v4, v6) )
    {
      v7 = v13;
      v4 = HIDWORD(v8);
      v6 = v8;
    }
  }
  while ( sub_10002B20() != 0 );
  if ( (v4 | v6) == 0 )
    return 0;
  if ( a3 != nullptr )
    *a3 = v7;
  if ( a4 != nullptr )
  {
    *a4 = v6;
    a4[1] = v4;
  }
  return 1;
}

// Address: 0x10001420
char __cdecl sub_10001420(HANDLE hDevice, HANDLE hFile, int a3, LARGE_INTEGER a4, __int64 a5, unsigned __int64 a6)
{
  LARGE_INTEGER v6; // kr00_8
  int v7; // ebx
  __int64 v8; // rcx
  unsigned int v9; // eax
  DWORD BytesReturned; // [esp+14h] [ebp-74h] BYREF
  DWORD v12; // [esp+18h] [ebp-70h] BYREF
  DWORD v13; // [esp+1Ch] [ebp-6Ch] BYREF
  LARGE_INTEGER v14; // [esp+20h] [ebp-68h]
  LARGE_INTEGER NewFilePointer; // [esp+28h] [ebp-60h] BYREF
  LARGE_INTEGER InBuffer; // [esp+30h] [ebp-58h] BYREF
  LARGE_INTEGER v17; // [esp+38h] [ebp-50h] BYREF
  LARGE_INTEGER v18; // [esp+40h] [ebp-48h] BYREF
  _BYTE OutBuffer[8]; // [esp+48h] [ebp-40h] BYREF
  LARGE_INTEGER v20; // [esp+50h] [ebp-38h]
  __int64 v21; // [esp+58h] [ebp-30h]
  __int64 v22; // [esp+60h] [ebp-28h]
  _QWORD v23[3]; // [esp+68h] [ebp-20h] BYREF
  int v24; // [esp+80h] [ebp-8h]

  v6 = a4;
  v14 = a4;
  do
  {
    v7 = 0x4000;
    if ( a6 < 0x4000 )
      v7 = a6;
    NewFilePointer.QuadPart = (v6.QuadPart + (unsigned int)v7) * (unsigned int)a3;
    if ( !SetFilePointerEx(hFile, NewFilePointer, &NewFilePointer, 0) )
      break;
    if ( !SetEndOfFile(hFile) )
      break;
    InBuffer = v6;
    if ( !DeviceIoControl(hFile, 0x90073u, &InBuffer, 8u, OutBuffer, 0x20u, &BytesReturned, nullptr)
      && GetLastError() != 234 )
    {
      break;
    }
    v22 += v6.QuadPart - v20.QuadPart;
    v20 = v6;
    if ( v22 != a5 )
    {
      v23[2] = a5;
      LODWORD(v23[0]) = hFile;
      v23[1] = v6.QuadPart;
      v24 = v7;
      if ( !DeviceIoControl(hDevice, 0x90074u, v23, 0x20u, nullptr, 0, &v12, nullptr) )
        break;
    }
    HIDWORD(v8) = a6;
    v17.QuadPart = (a6 + v6.QuadPart) * (unsigned int)a3;
    if ( !SetFilePointerEx(hFile, v17, &v17, 0) )
      break;
    if ( !SetEndOfFile(hFile) )
      break;
    v18 = v6;
    if ( !DeviceIoControl(hFile, 0x90073u, &v18, 8u, OutBuffer, 0x20u, &v13, nullptr) && GetLastError() != 234 )
      break;
    v22 += v6.QuadPart - v20.QuadPart;
    v20 = v6;
    LODWORD(v8) = (unsigned __int64)(v21 - v6.QuadPart) >> 32;
    v9 = v21 - v6.LowPart;
    if ( __PAIR64__((int)v21 - v6.LowPart, HIDWORD(a6)) == v8 )
      return 1;
    a5 += __PAIR64__(v8, v9);
    a6 -= __PAIR64__(v8, v9);
    v6.QuadPart += __PAIR64__(v8, v9);
  }
  while ( a6 != 0 );
  v18.QuadPart = (unsigned int)a3 * v14.QuadPart;
  if ( SetFilePointerEx(hFile, v18, &v18, 0) )
    SetEndOfFile(hFile);
  return 0;
}

// Address: 0x100016E0
char __cdecl sub_100016E0(
        HANDLE hDevice,
        HANDLE hFile,
        LPVOID lpOutBuffer,
        DWORD nOutBufferSize,
        unsigned int a5,
        __int64 a6,
        LARGE_INTEGER a7,
        LARGE_INTEGER a8)
{
  unsigned int v8; // ebx
  unsigned int v9; // edi
  HANDLE v10; // ebp
  LARGE_INTEGER v11; // kr08_8
  LARGE_INTEGER v12; // kr10_8
  LARGE_INTEGER v13; // kr28_8
  DWORD BytesReturned; // [esp+14h] [ebp-3Ch] BYREF
  LARGE_INTEGER v16; // [esp+18h] [ebp-38h] BYREF
  LARGE_INTEGER NewFilePointer; // [esp+20h] [ebp-30h] BYREF
  LARGE_INTEGER InBuffer; // [esp+28h] [ebp-28h] BYREF
  _BYTE OutBuffer[8]; // [esp+30h] [ebp-20h] BYREF
  __int64 v20; // [esp+38h] [ebp-18h]
  __int64 v21; // [esp+40h] [ebp-10h]
  __int64 v22; // [esp+48h] [ebp-8h]

  v8 = HIDWORD(a6);
  v9 = a6;
  v10 = hFile;
  NewFilePointer.QuadPart = (a8.QuadPart + a6) * a5;
  if ( SetFilePointerEx(hFile, NewFilePointer, &NewFilePointer, 0) && SetEndOfFile(hFile) )
  {
    NewFilePointer.QuadPart = a6;
    if ( DeviceIoControl(hFile, 0x90073u, &NewFilePointer, 8u, OutBuffer, 0x20u, &BytesReturned, nullptr)
      || GetLastError() == 234 )
    {
      v11.QuadPart = v21 - a6;
      v22 += a6 - v20;
      v20 = a6;
      NewFilePointer.QuadPart = v21 - a6;
      if ( (HIDWORD(v22) & (unsigned int)v22) != 0xFFFFFFFF && v11.QuadPart == a8.QuadPart )
        return 1;
      if ( v11.QuadPart > (unsigned __int64)a7.QuadPart )
      {
        v12 = a7;
        if ( (unsigned __int64)(2 * a7.QuadPart) <= NewFilePointer.QuadPart )
        {
          do
            v12.QuadPart += a7.QuadPart;
          while ( a7.QuadPart + v12.QuadPart <= (unsigned __int64)NewFilePointer.QuadPart );
        }
        NewFilePointer.QuadPart = (a6 + v12.QuadPart) * a5;
        if ( SetFilePointerEx(hFile, NewFilePointer, &NewFilePointer, 0) && SetEndOfFile(hFile) )
          return 1;
        v9 = a6;
      }
      NewFilePointer.QuadPart = a5 * __PAIR64__(HIDWORD(a6), v9);
      if ( SetFilePointerEx(hFile, NewFilePointer, &NewFilePointer, 0) )
        SetEndOfFile(hFile);
      InBuffer.QuadPart = 0;
      if ( !DeviceIoControl(hDevice, 0x9006Fu, &InBuffer, 8u, lpOutBuffer, nOutBufferSize, &BytesReturned, nullptr)
        && GetLastError() != 234
        || sub_10001200(hDevice, (int)lpOutBuffer, (__int64 *)&NewFilePointer, &v16.LowPart) == 0 )
      {
        goto LABEL_32;
      }
      if ( (NewFilePointer.LowPart & 0xF) != 0 && v16.QuadPart > 0x10uLL )
      {
        v16.QuadPart += (NewFilePointer.LowPart & 0xF) - 16LL;
        NewFilePointer.HighPart = (unsigned __int64)(NewFilePointer.QuadPart + 15) >> 32;
        NewFilePointer.LowPart = (NewFilePointer.LowPart + 15) & 0xFFFFFFF0;
      }
      if ( v16.QuadPart < (unsigned __int64)a7.QuadPart )
        goto LABEL_32;
      if ( v16.QuadPart < (unsigned __int64)a8.QuadPart )
      {
        a8 = a7;
        v13 = a7;
        if ( (unsigned __int64)(2 * a7.QuadPart) <= v16.QuadPart )
        {
          do
            v13.QuadPart += a7.QuadPart;
          while ( v13.QuadPart + a7.QuadPart <= (unsigned __int64)v16.QuadPart );
          a8 = v13;
        }
        InBuffer.QuadPart = (v13.QuadPart + a6) * a5;
        if ( !SetFilePointerEx(hFile, InBuffer, &InBuffer, 0) || !SetEndOfFile(hFile) )
        {
          v9 = a6;
LABEL_32:
          v8 = HIDWORD(a6);
          v10 = hFile;
          goto LABEL_33;
        }
        v9 = a6;
      }
      if ( sub_10001420(
             hDevice,
             hFile,
             a5,
             (LARGE_INTEGER)__PAIR64__(HIDWORD(a6), v9),
             NewFilePointer.QuadPart,
             a8.QuadPart) != 0 )
        return 1;
      goto LABEL_32;
    }
  }
LABEL_33:
  a8.QuadPart = a5 * __PAIR64__(v8, v9);
  if ( SetFilePointerEx(v10, a8, &a8, 0) )
    SetEndOfFile(v10);
  return 0;
}

// Address: 0x10001AC0
char __fastcall sub_10001AC0(LPCWSTR lpFileName, LPCWSTR a2, LARGE_INTEGER a3)
{
  unsigned int v6; // esi
  HANDLE FileW; // eax
  HANDLE v8; // ebx
  DWORD v9; // edi
  void ***v10; // eax
  _BYTE *v11; // edi
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 QuadPart; // rax
  HANDLE v15; // edi
  DWORD v16; // [esp-20h] [ebp-2B4h]
  unsigned __int64 v17; // [esp-10h] [ebp-2A4h]
  int v18; // [esp+0h] [ebp-294h]
  char v19; // [esp+1Bh] [ebp-279h]
  LARGE_INTEGER FileSize; // [esp+1Ch] [ebp-278h] BYREF
  int v21; // [esp+28h] [ebp-26Ch]
  LARGE_INTEGER v22; // [esp+2Ch] [ebp-268h]
  void **v23; // [esp+34h] [ebp-260h] BYREF
  void *v24; // [esp+38h] [ebp-25Ch] BYREF
  void *v25; // [esp+44h] [ebp-250h]
  _BYTE *v26; // [esp+48h] [ebp-24Ch]
  int v27; // [esp+4Ch] [ebp-248h]
  HANDLE hObject; // [esp+50h] [ebp-244h]
  HANDLE hFile; // [esp+54h] [ebp-240h]
  int v30; // [esp+58h] [ebp-23Ch]
  int InBuffer; // [esp+5Ch] [ebp-238h] BYREF
  LPCWSTR lpFileNamea; // [esp+60h] [ebp-234h]
  DWORD TotalNumberOfClusters; // [esp+64h] [ebp-230h] BYREF
  LPVOID lpOutBuffer; // [esp+68h] [ebp-22Ch]
  DWORD BytesPerSector; // [esp+6Ch] [ebp-228h] BYREF
  DWORD SectorsPerCluster; // [esp+70h] [ebp-224h] BYREF
  DWORD NumberOfFreeClusters; // [esp+74h] [ebp-220h] BYREF
  DWORD BytesReturned; // [esp+78h] [ebp-21Ch] BYREF
  WCHAR RootPathName[260]; // [esp+7Ch] [ebp-218h] BYREF
  int v40; // [esp+290h] [ebp-4h]
  unsigned __int64 v41; // [esp+298h] [ebp+4h]

  lpFileNamea = a2;
  v22 = a3;
  v19 = 0;
  wcscpy_s(RootPathName, 0x104u, lpFileName);
  wcscat_s(RootPathName, 0x104u, L"\\");
  SetFileAttributesW(a2, 0x80u);
  DeleteFileW(a2);
  if ( GetDiskFreeSpaceW(
         RootPathName,
         &SectorsPerCluster,
         &BytesPerSector,
         &NumberOfFreeClusters,
         &TotalNumberOfClusters) )
  {
    v6 = BytesPerSector * SectorsPerCluster;
    if ( a3.QuadPart <= NumberOfFreeClusters * (unsigned __int64)(BytesPerSector * SectorsPerCluster) )
    {
      FileW = CreateFileW(a2, 0xC0100080, 0, nullptr, 2u, 0x2000000u, nullptr);
      v8 = FileW;
      hFile = FileW;
      if ( FileW == (HANDLE)-1 )
      {
        sub_10002D60(
          (wchar_t *)L"CreateFile(FullPathName, GENERIC_READ|GENERIC_WRITE|FILE_READ_ATTRIBUTES|SYNCHRONIZE, NULL, NULL, C"
                      "REATE_ALWAYS, FILE_FLAG_BACKUP_SEMANTICS, NULL)",
          v18);
        return 0;
      }
      else
      {
        InBuffer = 0;
        DeviceIoControl(FileW, 0x9C040u, &InBuffer, 2u, nullptr, 0, &BytesReturned, nullptr);
        hObject = CreateFileW(lpFileName, 0xC0100080, 3u, nullptr, 3u, 0, nullptr);
        if ( hObject == (HANDLE)-1 )
        {
          sub_10002D60(
            (wchar_t *)L"CreateFile(VolumeName, GENERIC_READ|GENERIC_WRITE|FILE_READ_ATTRIBUTES|SYNCHRONIZE, FILE_SHARE_RE"
                        "AD|FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL)",
            v18);
        }
        else
        {
          v9 = (TotalNumberOfClusters + 7) >> 3;
          v10 = (void ***)operator new(4u);
          if ( v10 != nullptr )
            *v10 = &v24;
          else
            v10 = nullptr;
          v24 = v10;
          v25 = nullptr;
          v26 = nullptr;
          v27 = 0;
          v40 = 1;
          v23 = &data_buffer::`vftable';
          sub_10002070(v9);
          v40 = 2;
          v11 = v26;
          if ( v26 == v25 )
          {
            _invalid_parameter_noinfo();
            v11 = v26;
          }
          if ( v11 == v25 )
          {
            _invalid_parameter_noinfo();
            v11 = v26;
          }
          lpOutBuffer = v25;
          v17 = a3.QuadPart + v6 - 1;
          HIDWORD(v12) = (v17 / v6) >> 32;
          v41 = v17 / v6;
          v13 = (v22.QuadPart + (unsigned __int64)v6 - 1) / v6;
          v22.QuadPart = v13;
          QuadPart = 0;
          v21 = 0;
          v30 = 3;
          FileSize.QuadPart = 0;
          if ( v41 == 0 )
            goto LABEL_17;
          while ( v21 == 0 )
          {
            LODWORD(v12) = v41;
            v16 = v11 - (_BYTE *)v25;
            v15 = hFile;
            if ( sub_100016E0(hObject, hFile, lpOutBuffer, v16, v6, QuadPart, v22, (LARGE_INTEGER)(v12 - QuadPart)) != 0 )
            {
              if ( !GetFileSizeEx(v15, &FileSize) )
              {
                sub_10002D60((wchar_t *)L"if(!GetFileSizeEx(hFile, &Vcn))", v18);
                goto LABEL_35;
              }
              QuadPart = FileSize.QuadPart / v6;
              ++v21;
              FileSize.QuadPart = QuadPart;
            }
            else
            {
              if ( --v30 <= 0 )
              {
                sub_10002D60(
                  L"ExpandFile(hVolume, hFile,pBitmap, (ULONG)bmpbuf.size(),BytesPerCluster, Vcn.QuadPart, MinFragmentLeng"
                   "th, Length-Vcn.QuadPart))",
                  v18);
LABEL_35:
                HIDWORD(v12) = HIDWORD(v41);
                QuadPart = FileSize.QuadPart;
                break;
              }
              FlushFileBuffers(v15);
              Sleep(0x1F4u);
              QuadPart = FileSize.QuadPart;
            }
            HIDWORD(v12) = HIDWORD(v41);
            if ( QuadPart >= v41 )
              goto LABEL_17;
            v11 = v26;
          }
          if ( QuadPart < __PAIR64__(HIDWORD(v12), v41) )
          {
            sub_10002D60((wchar_t *)L"if((ULONGLONG)Vcn.QuadPart < Length)", v18);
            sub_10001170((void **)&v23);
          }
          else
          {
LABEL_17:
            v19 = 1;
            v23 = &data_buffer::`vftable';
            if ( v25 != nullptr )
              operator delete(v25);
            v25 = nullptr;
            v26 = nullptr;
            v27 = 0;
            operator delete(v24);
          }
          CloseHandle(hObject);
          v8 = hFile;
        }
        CloseHandle(v8);
        if ( v19 == 0 )
          DeleteFileW(lpFileNamea);
        return v19;
      }
    }
    else
    {
      sub_10002D60((wchar_t *)L"if(Length > (ULONGLONG)FreeClusters*BytesPerCluster)", v18);
      return 0;
    }
  }
  else
  {
    sub_10002D60(
      (wchar_t *)L"GetDiskFreeSpace(VolumePath, &SectorsPerCluster, &BytesPerSector, &FreeClusters, &TotalClusters)",
      v18);
    return 0;
  }
}

// Address: 0x10001F90
int __thiscall sub_10001F90(int this, _DWORD *a2, unsigned int a3, char *a4)
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
    sub_100073E7();
  v5 = (char *)(a2[5] - a3);
  if ( a4 < v5 )
    v5 = a4;
  if ( (_DWORD *)this == a2 )
  {
    sub_10002130(&v5[a3], -1);
    sub_10002130(0, a3);
    return this;
  }
  if ( v5 == (char *)-1 )
    sub_100073AF();
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
    sub_100025C0(v5, *(_DWORD *)(this + 20));
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

// Address: 0x10002070
unsigned int __userpurge sub_10002070@<eax>(int *a1@<eax>, unsigned int a2)
{
  char *v3; // ebp
  unsigned int v4; // ecx
  unsigned int result; // eax
  unsigned int v6; // ebx
  int *v7; // edi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // edi
  int Val; // [esp+14h] [ebp-14h] BYREF
  int v12; // [esp+18h] [ebp-10h]
  unsigned int v13; // [esp+1Ch] [ebp-Ch]
  int v14; // [esp+20h] [ebp-8h]

  v3 = (char *)a1[4];
  v4 = a1[3];
  result = (unsigned int)&v3[-v4];
  LOBYTE(Val) = 0;
  if ( a2 <= (unsigned int)&v3[-v4] )
  {
    if ( a2 < result )
    {
      if ( v4 > (unsigned int)v3 )
        _invalid_parameter_noinfo();
      v6 = a1[3];
      v14 = *a1;
      if ( v6 > a1[4] )
        _invalid_parameter_noinfo();
      v7 = (int *)*a1;
      v12 = (int)v7;
      v13 = v6;
      if ( v7 != nullptr )
      {
        v8 = *v7;
      }
      else
      {
        _invalid_parameter_noinfo();
        v8 = 0;
      }
      v9 = a2 + v6;
      if ( v9 > *(_DWORD *)(v8 + 16) || (v7 == nullptr ? (v10 = 0) : (v10 = *v7), v9 < *(_DWORD *)(v10 + 12)) )
        _invalid_parameter_noinfo();
      return sub_100021C0(v12, v9, v14, v3);
    }
  }
  else
  {
    if ( v4 > (unsigned int)v3 )
      _invalid_parameter_noinfo();
    return sub_10002240((int)a1, (int)&Val, *a1, v3);
  }
  return result;
}

// Address: 0x10002130
_DWORD *__thiscall sub_10002130(_DWORD *this, unsigned int a2, unsigned int a3)
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
    sub_100073E7();
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

// Address: 0x100021C0
_DWORD *__userpurge sub_100021C0@<eax>(
        _DWORD *a1@<ebx>,
        _DWORD *a2@<esi>,
        int a3,
        unsigned int a4,
        int a5,
        char *Source)
{
  unsigned int v6; // eax
  char *v7; // edi
  char *v8; // ecx
  signed int v9; // eax
  char *v10; // ebp

  *a1 = 0;
  if ( a2 == nullptr || (v6 = a4, a2[3] > a4) || a4 > a2[4] )
  {
    _invalid_parameter_noinfo();
    v6 = a4;
  }
  v7 = Source;
  *a1 = *a2;
  a1[1] = v6;
  if ( a2[3] > (unsigned int)Source || (unsigned int)Source > a2[4] )
  {
    _invalid_parameter_noinfo();
    v7 = Source;
  }
  if ( *a1 == 0 || *a1 != *a2 )
    _invalid_parameter_noinfo();
  v8 = (char *)a1[1];
  if ( v8 != v7 )
  {
    v9 = a2[4] - (_DWORD)v7;
    v10 = &v8[v9];
    if ( v9 > 0 )
      memmove_s(v8, v9, v7, a2[4] - (_DWORD)v7);
    a2[4] = v10;
  }
  return a1;
}

// Address: 0x10002240
char *__userpurge sub_10002240@<eax>(unsigned int a1@<eax>, int a2, char *Val, int a4, char *Source)
{
  char *result; // eax
  unsigned int v8; // esi
  _BYTE *v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // esi
  char *v12; // edx
  unsigned int v13; // ecx
  char *v14; // edi
  char *v15; // ecx
  _BYTE *v16; // edi
  rsize_t v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  char *v20; // ebp
  char *v21; // ecx
  char *v22; // [esp+10h] [ebp-4h]
  int v23; // [esp+18h] [ebp+4h]

  result = *(char **)(a2 + 12);
  if ( result != nullptr )
    v8 = *(_DWORD *)(a2 + 20) - (_DWORD)result;
  else
    v8 = 0;
  if ( a1 != 0 )
  {
    v9 = *(_BYTE **)(a2 + 16);
    if ( result - v9 - 1 < a1 )
      sub_10002410();
    v10 = v9 - result + a1;
    if ( v8 >= v10 )
    {
      LOBYTE(Val) = *Val;
      if ( v9 - Source >= a1 )
      {
        memmove_s(v9, a1, &v9[-a1], a1);
        v21 = Source;
        *(_DWORD *)(a2 + 16) = &v9[a1];
        if ( (int)(v9 - Source - a1) > 0 )
        {
          memmove_s(&Source[a1], v9 - Source - a1, Source, v9 - Source - a1);
          v21 = Source;
        }
        result = &v21[a1];
        if ( v21 != &v21[a1] )
          return (char *)memset(v21, (int)Val, a1);
      }
      else
      {
        if ( v9 != Source )
          memmove_s(&Source[a1], v9 - Source, Source, v9 - Source);
        sub_10002730(*(_DWORD *)(a2 + 16));
        *(_DWORD *)(a2 + 16) += a1;
        result = Source;
        v20 = (char *)(*(_DWORD *)(a2 + 16) - a1);
        if ( Source != v20 )
          return (char *)memset(Source, (int)Val, v20 - Source);
      }
    }
    else
    {
      if ( -1 - (v8 >> 1) >= v8 )
        v11 = (v8 >> 1) + v8;
      else
        v11 = 0;
      if ( v11 < v10 )
        v11 = v10;
      v12 = (char *)sub_10002490(v11);
      v23 = (int)v12;
      v13 = a1;
      v22 = &Source[(_DWORD)v12 - *(_DWORD *)(a2 + 12)];
      v14 = v22;
      do
      {
        *v14 = *Val;
        --v13;
        ++v14;
      }
      while ( v13 != 0 );
      v15 = Source;
      v16 = *(_BYTE **)(a2 + 12);
      if ( Source != v16 )
      {
        memmove_s(v12, Source - v16, v16, Source - v16);
        v12 = (char *)v23;
        v15 = Source;
      }
      v17 = *(_DWORD *)(a2 + 16) - (_DWORD)v15;
      if ( v17 != 0 )
      {
        memmove_s(&v22[a1], v17, v15, v17);
        v12 = (char *)v23;
      }
      v18 = *(_DWORD *)(a2 + 12);
      v19 = *(_DWORD *)(a2 + 16) - v18 + a1;
      if ( v18 != 0 )
      {
        operator delete(*(void **)(a2 + 12));
        v12 = (char *)v23;
      }
      *(_DWORD *)(a2 + 20) = &v12[v11];
      *(_DWORD *)(a2 + 16) = &v12[v19];
      *(_DWORD *)(a2 + 12) = v12;
      return &v12[v11];
    }
  }
  return result;
}

// Address: 0x10002410
void __cdecl __noreturn sub_10002410()
{
  _BYTE v0[20]; // [esp+4h] [ebp-50h] BYREF
  int v1; // [esp+18h] [ebp-3Ch]
  int v2; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v2 = 15;
  v1 = 0;
  v0[4] = 0;
  sub_100027C0("vector<T> too long", 0x12u);
  pExceptionObject[12] = 0;
  sub_10001040(pExceptionObject, (int)v0);
  pExceptionObject[0] = &std::length_error::`vftable';
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x10002490
void *__fastcall sub_10002490(size_t a1)
{
  char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 != 0 )
  {
    if ( 0xFFFFFFFF / a1 == 0 )
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
  return operator new(a1);
}

// Address: 0x100024E0
_DWORD *__thiscall sub_100024E0(_DWORD *this, struct std::exception *a2)
{
  sub_10002500(a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x10002500
int __thiscall sub_10002500(int this, struct std::exception *a2)
{
  std::exception::exception((std::exception *)this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  *(_DWORD *)(this + 36) = 15;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 16) = 0;
  sub_10001F90(this + 12, (_DWORD *)a2 + 3, 0, (char *)0xFFFFFFFF);
  return this;
}

// Address: 0x10002580
int __thiscall sub_10002580(int this, void *Source)
{
  *(_DWORD *)(this + 24) = 15;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 4) = 0;
  sub_100027C0(Source, strlen((const char *)Source));
  return this;
}

// Address: 0x100025C0
_BYTE *__thiscall sub_100025C0(int this, unsigned int Destination, rsize_t SourceSize)
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

// Address: 0x10002730
_BYTE *__userpurge sub_10002730@<eax>(_BYTE *a1@<edi>, int a2@<esi>, _BYTE *a3)
{
  int v3; // eax
  _BYTE *i; // ecx

  v3 = a2;
  for ( i = a3; v3 != 0; ++i )
  {
    *i = *a1;
    --v3;
  }
  return &a3[a2];
}

// Address: 0x10002760
void *__stdcall sub_10002760(char *a1)
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

// Address: 0x100027C0
int __fastcall sub_100027C0(int a1, int a2, _BYTE *Source, char *SourceSize)
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
        return sub_10001F90(a1, (_DWORD *)a1, Source - (_BYTE *)v6, SourceSize);
      }
    }
  }
  if ( SourceSize == (char *)-1 )
    sub_100073AF();
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
    sub_100025C0(a1, (unsigned int)SourceSize, *(_DWORD *)(a1 + 20));
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

// Address: 0x100028A0
std::exception *__thiscall sub_100028A0(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x100028C0
_DWORD *__thiscall sub_100028C0(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 2);
  *this = &Bitmap::`vftable';
  if ( v3 != nullptr )
  {
    if ( *(this + 4) != 0 )
      operator delete(v3);
    *(this + 2) = 0;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10002930
int __userpurge sub_10002930@<eax>(int a1@<esi>, __int64 a2, void *a3)
{
  void *v3; // ebp
  unsigned __int8 v5; // cl
  char v6; // dl
  size_t v7; // eax

  v3 = a3;
  if ( *(_DWORD *)(a1 + 8) != 0 )
    return 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 33) = 8;
  *(_BYTE *)(a1 + 34) = 0;
  v5 = 0;
  do
  {
    v6 = 1 << v5++;
    *(_BYTE *)(a1 + 34) |= v6;
  }
  while ( v5 < *(_BYTE *)(a1 + 32) );
  v7 = (unsigned __int64)(a2 + 7) >> 3;
  *(_DWORD *)(a1 + 12) = v7;
  if ( a3 == nullptr )
  {
    v3 = operator new(v7);
    if ( v3 == nullptr )
      return 0;
    memset(v3, 0, *(_DWORD *)(a1 + 12));
    *(_DWORD *)(a1 + 16) = 1;
  }
  *(_DWORD *)(a1 + 8) = v3;
  return 1;
}

// Address: 0x100029D0
__int64 __usercall sub_100029D0@<edx:eax>(int a1@<esi>)
{
  unsigned __int8 v1; // al
  unsigned int v2; // ecx
  unsigned int v3; // edi
  unsigned __int64 v4; // rcx
  _BYTE *v5; // edi
  unsigned __int8 v6; // bl
  char v7; // dl
  bool v8; // zf
  unsigned int v9; // ebp
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v13; // [esp-10h] [ebp-38h]
  char v14; // [esp+Dh] [ebp-1Bh]
  char v15; // [esp+Fh] [ebp-19h]
  int v16; // [esp+10h] [ebp-18h]
  unsigned int v17; // [esp+10h] [ebp-18h]
  int v18; // [esp+18h] [ebp-10h]
  __int64 v19; // [esp+18h] [ebp-10h]
  unsigned __int64 v20; // [esp+20h] [ebp-8h]

  v1 = *(_BYTE *)(a1 + 33);
  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 44);
  v13 = __PAIR64__(v3, v2);
  v20 = v1;
  v4 = __PAIR64__(v3, v2) % v1;
  v5 = (_BYTE *)(v13 / v1 + *(_DWORD *)(a1 + 8));
  v6 = v4 * *(_BYTE *)(a1 + 32);
  v14 = 0;
  v7 = *(_BYTE *)(a1 + 34) & (*v5 >> v6);
  v15 = v7;
  if ( v1 != 0 )
  {
    v16 = 0;
    v18 = v1;
    do
    {
      v14 |= v7 << v16;
      v8 = v18-- == 1;
      v16 += *(unsigned __int8 *)(a1 + 32);
    }
    while ( !v8 );
  }
  v9 = *(_DWORD *)(a1 + 44);
  v10 = *(_DWORD *)(a1 + 40);
  v17 = v10;
  v19 = 0;
  if ( __PAIR64__(v9, v10) < *(_QWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      if ( v6 != 0 || *v5 != v14 || *(_QWORD *)(a1 + 24) - __PAIR64__(v9, v10) < v20 )
      {
        if ( (*(_BYTE *)(a1 + 34) & (unsigned __int8)(*v5 >> v6)) != v7 )
          return v19;
        ++v19;
        v9 = (__PAIR64__(v9, v17++) + 1) >> 32;
        v6 += *(_BYTE *)(a1 + 32);
        if ( v6 >= 8u )
        {
          ++v5;
          v6 = 0;
        }
      }
      else
      {
        v11 = *(unsigned __int8 *)(a1 + 33);
        v19 += v11;
        v9 = (v11 + __PAIR64__(v9, v17)) >> 32;
        v17 += v11;
        v7 = v15;
        ++v5;
      }
      if ( __PAIR64__(v9, v17) >= *(_QWORD *)(a1 + 24) )
        break;
      v10 = v17;
    }
  }
  return v19;
}

// Address: 0x10002B20
int __usercall sub_10002B20@<eax>(int a1@<eax>)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v7; // [esp+18h] [ebp-Ch]

  v2 = *(_DWORD *)(a1 + 40);
  v7 = *(_DWORD *)(a1 + 44);
  while ( 1 )
  {
    v3 = sub_100029D0(a1);
    if ( v3 < 0 && *(_QWORD *)(a1 + 40) < (unsigned __int64)-v3 )
      break;
    v4 = *(_QWORD *)(a1 + 40) + v3;
    if ( v4 >= *(_QWORD *)(a1 + 24) )
      break;
    *(_DWORD *)(a1 + 40) = v4;
    LODWORD(v4) = *(unsigned __int8 *)(a1 + 33);
    v5 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 44) = HIDWORD(v4);
    if ( (*(_BYTE *)(a1 + 34)
        & (unsigned __int8)(*(_BYTE *)(__PAIR64__(*(_DWORD *)(a1 + 44), v5) / (int)v4 + *(_DWORD *)(a1 + 8)) >> (__PAIR64__(*(_DWORD *)(a1 + 44), v5) % (int)v4 * *(_BYTE *)(a1 + 32)))) == 0 )
      return 1;
  }
  if ( __PAIR64__(v7, v2) < *(_QWORD *)(a1 + 24) )
  {
    *(_DWORD *)(a1 + 40) = v2;
    *(_DWORD *)(a1 + 44) = v7;
  }
  return 0;
}

// Address: 0x10002BE0
int __userpurge sub_10002BE0@<eax>(int a1@<esi>, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  unsigned __int8 v5; // al
  int v6; // ebp
  unsigned __int64 v7; // rcx
  _BYTE *v8; // edi
  unsigned __int8 v9; // bl
  int v10; // ecx
  char v11; // dl
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  unsigned __int64 v14; // kr08_8
  unsigned int v15; // kr04_4
  unsigned __int64 v16; // [esp-10h] [ebp-30h]
  char v17; // [esp+Eh] [ebp-12h]
  unsigned int v18; // [esp+10h] [ebp-10h]
  unsigned int v19; // [esp+24h] [ebp+4h]

  HIDWORD(v3) = *(_DWORD *)(a1 + 44);
  v2 = *(_DWORD *)(a1 + 40);
  LODWORD(v3) = v2;
  if ( (unsigned __int64)(a2 + v3) > *(_QWORD *)(a1 + 24) )
    return 0;
  v5 = *(_BYTE *)(a1 + 33);
  v6 = v5;
  v16 = __PAIR64__(HIDWORD(v3), v2);
  v7 = __PAIR64__(HIDWORD(v3), v2) % v5;
  v8 = (_BYTE *)(v16 / v5 + *(_DWORD *)(a1 + 8));
  v9 = v7 * *(_BYTE *)(a1 + 32);
  v17 = 0;
  if ( v5 != 0 )
  {
    v10 = 0;
    do
    {
      v11 = 1 << v10;
      v10 += *(unsigned __int8 *)(a1 + 32);
      v17 |= v11;
      --v6;
    }
    while ( v6 != 0 );
  }
  v12 = *(_DWORD *)(a1 + 44);
  v14 = a2 + *(_QWORD *)(a1 + 40);
  v13 = HIDWORD(v14);
  v18 = *(_DWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 40) < v14 )
  {
    while ( 1 )
    {
      if ( v9 != 0
        || (v19 = *(unsigned __int8 *)(a1 + 33),
            __PAIR64__(v13, v14) - __PAIR64__(v12, v18) < *(unsigned __int8 *)(a1 + 33)) )
      {
        v15 = v18++;
        *v8 = (1 << v9) | *v8 & ~(*(_BYTE *)(a1 + 34) << v9);
        v12 = (__PAIR64__(v12, v15) + 1) >> 32;
        v9 += *(_BYTE *)(a1 + 32);
        if ( v9 >= 8u )
        {
          ++v8;
          v9 = 0;
        }
      }
      else
      {
        *v8 = v17;
        v12 = (__PAIR64__(v12, v19) + v18) >> 32;
        v18 += v19;
        ++v8;
      }
      if ( __PAIR64__(v12, v18) >= v14 )
        break;
      v13 = HIDWORD(v14);
    }
  }
  return 1;
}

// Address: 0x10002D20
BOOL __usercall sub_10002D20@<eax>(const WCHAR *a1@<eax>)
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

// Address: 0x10002D60
HANDLE __cdecl sub_10002D60(wchar_t *Format, int ArgList)
{
  HANDLE result; // eax
  HANDLE v3; // esi
  LPCWSTR v4; // edi
  int v5; // eax
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-4h]

  if ( hObject == nullptr )
  {
    result = (HANDLE)(timeGetTime() - dword_1001FBDC);
    if ( (unsigned int)result < 0x3E8 )
      return result;
    dword_1001FBDC = timeGetTime();
    result = CreateFileW(L"\\\\.\\pipe\\SENUL_DEBUG_PIPE", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
    hObject = result;
    if ( result == (HANDLE)-1 )
      goto LABEL_10;
    sub_10002D20(L"Logging Start...");
  }
  if ( (dword_1001FBEC & 1) == 0 )
  {
    dword_1001FBEC |= 1u;
    v7 = 0;
    lpBuffer = (LPCWSTR)operator new(0x20000u);
    atexit(sub_10014540);
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

// Address: 0x10002EB0
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    hModule = hinstDLL;
  return true;
}

// Address: 0x10002ED0
int __cdecl InstallSheriffVDisk(int *a1)
{
  int v1; // edx
  int v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+8h] [ebp-8h]
  HMODULE v6; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v6 = nullptr;
  v1 = a1[1];
  v4 = *a1;
  v5 = v1;
  v6 = hModule;
  sub_10002D60((wchar_t *)L"SheriffVDisk Install DLL InsWork", v3);
  return sub_100047F0(&v4);
}

// Address: 0x10002F20
int UninstallSheriffVDisk()
{
  HMODULE v0; // esi
  int v2; // [esp+0h] [ebp-4h]

  v0 = hModule;
  sub_10002D60((wchar_t *)L"SheriffVDisk Install DLL UninsWork", v2);
  return sub_10005020(v0);
}

// Address: 0x10002F40
// attributes: thunk
int CheckUnProtData()
{
  return CheckUnProtData_0();
}

// Address: 0x10002F50
// attributes: thunk
int RecoveryUnProtData()
{
  return RecoveryUnProtData_0();
}

// Address: 0x10002F60
int UpdateVDisk()
{
  HMODULE v0; // esi
  int v2; // [esp+0h] [ebp-4h]

  v0 = hModule;
  sub_10002D60((wchar_t *)L"SheriffVDisk Driver : UpdateVDisk Start", v2);
  sub_100058C0(v0);
  return 1;
}

// Address: 0x10002F90
int __cdecl SetUnProtList(int a1, int a2)
{
  return sub_10005DD0(a1, a2);
}

// Address: 0x10002FA0
// attributes: thunk
int GetUnProtList()
{
  return GetUnProtList_0();
}

// Address: 0x10002FB0
char __stdcall sub_10002FB0(int ArgList, int a2, int *a3)
{
  char result; // al
  DWORD LastError; // eax
  int v5; // [esp+0h] [ebp-4h]

  switch ( ArgList )
  {
    case 0:
      sub_10002D60((wchar_t *)L"format Progress : %d", *a3);
      result = 1;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
    case 13:
    case 16:
      GetLastError();
      sub_10002D60((wchar_t *)L"Cmd %d Error Code %d", ArgList);
      result = 0;
      break;
    case 11:
      if ( *(_BYTE *)a3 != 1 )
      {
        dword_1001FBE4 = 0;
        LastError = GetLastError();
        sub_10002D60((wchar_t *)L"SheriffVDisk Format Failed : 0x%x", LastError);
        goto LABEL_8;
      }
      dword_1001FBE4 = 1;
      sub_10002D60((wchar_t *)L"SheriffVDisk Format Complete", v5);
      result = 1;
      break;
    case 14:
      sub_10002D60((wchar_t *)L"format Output : %s", a3[1]);
      result = 1;
      break;
    default:
LABEL_8:
      result = 1;
      break;
  }
  return result;
}

// Address: 0x10003090
wchar_t *__cdecl sub_10003090(unsigned __int16 *lpPathName, wchar_t *Str)
{
  wchar_t *result; // eax
  wchar_t *v3; // eax
  wchar_t v4; // cx
  wchar_t *v5; // edi
  wchar_t *v6; // ebx
  wchar_t v7[260]; // [esp+8h] [ebp-20Ch] BYREF

  result = wcschr(Str, 0x5Cu);
  if ( result == nullptr )
    return result;
  memset(v7, 0, sizeof(v7));
  v3 = Str;
  do
  {
    v4 = *v3;
    *(wchar_t *)((char *)v3 + (char *)v7 - (char *)Str) = *v3;
    ++v3;
  }
  while ( v4 != 0 );
  v5 = wcschr(v7, 0x5Cu);
  v6 = wcschr(Str, 0x5Cu);
  if ( wcschr(Str, 0x3Au) == nullptr )
    goto LABEL_7;
  if ( v5 != nullptr )
  {
    v5 = wcschr(v5 + 1, 0x5Cu);
    v6 = wcschr(v6 + 1, 0x5Cu);
LABEL_7:
    if ( v5 != nullptr )
      v5[1] = 0;
  }
  if ( v6 != nullptr )
    ++v6;
  wcscat(lpPathName, v7);
  CreateDirectoryW(lpPathName, nullptr);
  return (wchar_t *)sub_10003090(lpPathName, v6);
}

// Address: 0x100031C0
int __fastcall sub_100031C0(_DWORD *a1, const wchar_t *a2, unsigned int a3)
{
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  void *v7; // eax
  DWORD v8; // ebx
  void *v9; // edi
  HANDLE FileW; // ebp
  DWORD nNumberOfBytesToWrite; // [esp+10h] [ebp-450h] BYREF
  FILETIME CreationTime; // [esp+14h] [ebp-44Ch] BYREF
  FILETIME LastAccessTime; // [esp+1Ch] [ebp-444h] BYREF
  FILETIME LastWriteTime; // [esp+24h] [ebp-43Ch] BYREF
  void *v16; // [esp+30h] [ebp-430h]
  unsigned int v17; // [esp+44h] [ebp-41Ch]
  WCHAR FileName[260]; // [esp+48h] [ebp-418h] BYREF
  WCHAR PathName[262]; // [esp+250h] [ebp-210h] BYREF

  if ( *a1 == 0 )
    return 0;
  if ( a3 >= a1[6] )
    return 0;
  v4 = *(_DWORD *)(a1[11] + 44 * a3);
  if ( v4 >= a1[9] || v4 + a1[12] == 0 )
    return 0;
  memset(PathName, 0, 520);
  memset(FileName, 0, sizeof(FileName));
  wcscpy_s(FileName, 0x104u, a2);
  v5 = sub_10006FC0();
  if ( *(_DWORD *)(v5 + 24) < 8u )
    v6 = v5 + 4;
  else
    v6 = *(_DWORD *)(v5 + 4);
  sub_10006EF0(v6);
  if ( v17 >= 8 )
    operator delete(v16);
  PathName[0] = 0;
  sub_10003090(PathName, FileName);
  nNumberOfBytesToWrite = 0;
  v7 = (void *)sub_10007240(&nNumberOfBytesToWrite);
  v8 = nNumberOfBytesToWrite;
  v9 = v7;
  if ( nNumberOfBytesToWrite == -1 )
    return 0;
  FileW = CreateFileW(FileName, 0x40000000u, 0, nullptr, 2u, 0, nullptr);
  if ( FileW == (HANDLE)-1 )
  {
    if ( v8 != 0 && v9 != nullptr )
      operator delete(v9);
    return 0;
  }
  if ( v8 != 0 )
  {
    nNumberOfBytesToWrite = 0;
    if ( !WriteFile(FileW, v9, v8, &nNumberOfBytesToWrite, nullptr) )
    {
      if ( v9 != nullptr )
        operator delete(v9);
      CloseHandle(FileW);
      DeleteFileW(FileName);
      return 0;
    }
    if ( v9 != nullptr )
      operator delete(v9);
  }
  CreationTime.dwLowDateTime = 0;
  CreationTime.dwHighDateTime = 0;
  LastAccessTime.dwLowDateTime = 0;
  LastAccessTime.dwHighDateTime = 0;
  LastWriteTime.dwLowDateTime = 0;
  LastWriteTime.dwHighDateTime = 0;
  if ( sub_100072B0(a1) != 0 )
    SetFileTime(FileW, &CreationTime, &LastAccessTime, &LastWriteTime);
  CloseHandle(FileW);
  return 1;
}

// Address: 0x100033D0
BOOL __cdecl sub_100033D0(const WCHAR *a1)
{
  unsigned __int16 *v1; // eax
  unsigned __int16 v2; // cx
  WCHAR *v3; // edi
  WCHAR v4; // ax
  int v5; // eax
  unsigned __int16 v6; // cx
  WCHAR *v7; // eax
  WCHAR v8; // cx
  HANDLE FirstFileW; // ebx
  int v11; // eax
  unsigned __int16 v12; // cx
  WCHAR *cFileName; // eax
  __int16 v14; // cx
  unsigned int v15; // eax
  WCHAR *v16; // edi
  WCHAR v17; // cx
  WCHAR *v18; // edi
  WCHAR v19; // ax
  struct _WIN32_FIND_DATAW FindFileData; // [esp+18h] [ebp-668h] BYREF
  WCHAR FileName[260]; // [esp+268h] [ebp-418h] BYREF
  unsigned __int16 v22[262]; // [esp+470h] [ebp-210h] BYREF

  memset(v22, 0, 520);
  memset(FileName, 0, sizeof(FileName));
  v1 = (unsigned __int16 *)a1;
  do
  {
    v2 = *v1;
    *(unsigned __int16 *)((char *)v1 + (char *)v22 - (char *)a1) = *v1;
    ++v1;
  }
  while ( v2 != 0 );
  if ( wcslen(v22) != 0 && FileName[wcslen(v22) + 259] != 92 )
  {
    v3 = &FileName[259];
    do
    {
      v4 = v3[1];
      ++v3;
    }
    while ( v4 != 0 );
    wcscpy(v3, L"\\");
  }
  v5 = 0;
  do
  {
    v6 = v22[v5];
    FileName[v5++] = v6;
  }
  while ( v6 != 0 );
  v7 = &FindFileData.cAlternateFileName[13];
  do
  {
    v8 = v7[1];
    ++v7;
  }
  while ( v8 != 0 );
  *(_DWORD *)v7 = 3014698;
  *((_DWORD *)v7 + 1) = 42;
  memset(&FindFileData, 0, sizeof(FindFileData));
  FirstFileW = FindFirstFileW(FileName, &FindFileData);
  if ( FirstFileW == (HANDLE)-1 )
    return false;
  do
  {
    if ( wcscmp(FindFileData.cFileName, word_10019FDC) != 0 && wcscmp(FindFileData.cFileName, L"..") != 0 )
    {
      v11 = 0;
      do
      {
        v12 = v22[v11];
        FileName[v11++] = v12;
      }
      while ( v12 != 0 );
      cFileName = FindFileData.cFileName;
      do
        v14 = *cFileName++;
      while ( v14 != 0 );
      v15 = (char *)cFileName - (char *)FindFileData.cFileName;
      v16 = &FindFileData.cAlternateFileName[13];
      do
      {
        v17 = v16[1];
        ++v16;
      }
      while ( v17 != 0 );
      qmemcpy(v16, FindFileData.cFileName, v15);
      if ( (FindFileData.dwFileAttributes & 0x10) != 0 )
      {
        v18 = &FindFileData.cAlternateFileName[13];
        do
        {
          v19 = v18[1];
          ++v18;
        }
        while ( v19 != 0 );
        wcscpy(v18, L"\\");
        sub_100033D0(FileName);
      }
      else
      {
        SetFileAttributesW(FileName, 0x80u);
        DeleteFileW(FileName);
      }
    }
  }
  while ( FindNextFileW(FirstFileW, &FindFileData) );
  FindClose(FirstFileW);
  SetFileAttributesW(a1, 0x80u);
  return RemoveDirectoryW(a1);
}

// Address: 0x100036D0
int __cdecl sub_100036D0(const wchar_t *a1)
{
  HMODULE hModule; // ecx
  HMODULE v2; // esi
  HRSRC ResourceW; // edi
  HGLOBAL Resource; // ebx
  DWORD v5; // esi
  LPVOID v6; // eax
  unsigned int v8; // edi
  unsigned int v9; // esi
  _DWORD v10[11]; // [esp+10h] [ebp-44h] BYREF
  void *v11; // [esp+3Ch] [ebp-18h]
  void *v12; // [esp+40h] [ebp-14h]
  int v13; // [esp+50h] [ebp-4h]

  v2 = hModule;
  ResourceW = FindResourceW(hModule, (LPCWSTR)0x67, L"BINARY");
  Resource = LoadResource(v2, ResourceW);
  v5 = SizeofResource(v2, ResourceW);
  v6 = LockResource(Resource);
  v10[0] = 0;
  v10[1] = 0;
  v13 = 0;
  if ( sub_10007180(v10, v6, v5) == 0 )
  {
    if ( v10[0] != 0 )
    {
      operator delete(v11);
      operator delete(v12);
    }
    return 0;
  }
  if ( v10[0] != 0 )
    v8 = v10[6];
  else
    v8 = -1;
  v9 = 0;
  if ( v8 != 0 )
  {
    while ( sub_100031C0(v10, a1, v9) != 0 )
    {
      if ( ++v9 >= v8 )
        goto LABEL_11;
    }
    if ( v10[0] == 0 )
      return 0;
    operator delete(v11);
    operator delete(v12);
    return 0;
  }
  else
  {
LABEL_11:
    if ( v10[0] != 0 )
    {
      operator delete(v11);
      operator delete(v12);
    }
    return 1;
  }
}

// Address: 0x10003820
int __cdecl sub_10003820(int a1)
{
  WCHAR *v1; // ecx
  WCHAR *v2; // esi
  WCHAR *v3; // eax
  WCHAR v4; // cx
  WCHAR *v5; // edi
  WCHAR v6; // ax
  void *v7; // esi
  DWORD LastError; // edi
  int v10; // edi
  WCHAR v11[260]; // [esp+3Ch] [ebp-834h] BYREF
  WCHAR String1[260]; // [esp+244h] [ebp-62Ch] BYREF
  WCHAR String2[260]; // [esp+44Ch] [ebp-424h] BYREF
  WCHAR v14[260]; // [esp+654h] [ebp-21Ch] BYREF
  int v15; // [esp+86Ch] [ebp-4h]

  v2 = v1;
  memset(v11, 0, sizeof(v11));
  memset(String2, 0, sizeof(String2));
  memset(v14, 0, sizeof(v14));
  memset(String1, 0, sizeof(String1));
  v3 = v1;
  do
  {
    v4 = *v3;
    *(WCHAR *)((char *)v3 + (char *)String2 - (char *)v2) = *v3;
    ++v3;
  }
  while ( v4 != 0 );
  lstrcpyW(String1, String2);
  v5 = &v11[259];
  do
  {
    v6 = v5[1];
    ++v5;
  }
  while ( v6 != 0 );
  qmemcpy(v5, L"SheriffVDisk.inf", 0x22u);
  lstrcpyW(v11, String2);
  sub_10006EF0(L"setupinf.exe");
  wsprintfW(v14, L"%s \"%s\"", a1, String1);
  v7 = (void *)sub_10006E10();
  sub_10002D60((wchar_t *)L" %s %s", (int)v11);
  if ( v7 != nullptr )
  {
    v10 = sub_10006E90();
    CloseHandle(v7);
    return v10;
  }
  else
  {
    LastError = GetLastError();
    sub_100067A0(wcslen(v11));
    v15 = 0;
    sub_10002D60((wchar_t *)L"Excution Failed [%d] %s", LastError);
    return 0;
  }
}

// Address: 0x10003A70
int sub_10003A70()
{
  SC_HANDLE v0; // eax
  SC_HANDLE v1; // esi
  SC_HANDLE v2; // eax

  v0 = OpenSCManagerW(nullptr, nullptr, 0xF003Fu);
  v1 = v0;
  if ( v0 == nullptr )
    return 0;
  v2 = OpenServiceW(v0, L"SheriffVDisk", 0xF01FFu);
  if ( v2 == nullptr )
  {
    CloseServiceHandle(v1);
    return 0;
  }
  CloseServiceHandle(v2);
  CloseServiceHandle(v1);
  return 1;
}

// Address: 0x10003AC0
int sub_10003AC0()
{
  SC_HANDLE v0; // esi
  SC_HANDLE v1; // eax
  SC_HANDLE v2; // edi
  SC_HANDLE v3; // eax
  DWORD LastError; // eax
  int v6; // [esp+10h] [ebp-24h]

  v0 = nullptr;
  v6 = 0;
  v1 = OpenSCManagerW(nullptr, nullptr, 0xF003Fu);
  v2 = v1;
  if ( v1 != nullptr )
  {
    v3 = OpenServiceW(v1, L"SheriffVDisk", 0xF01FFu);
    v0 = v3;
    if ( v3 != nullptr )
    {
      if ( StartServiceW(v3, 0, nullptr) )
      {
        v6 = 1;
      }
      else
      {
        GetLastError();
        LastError = GetLastError();
        sub_10002D60((wchar_t *)L"startservice error : 0x%x %d", LastError);
      }
    }
  }
  if ( v0 != nullptr )
    CloseServiceHandle(v0);
  if ( v2 != nullptr )
    CloseServiceHandle(v2);
  return v6;
}

// Address: 0x10003BA0
int sub_10003BA0()
{
  HKEY phkResult; // [esp+0h] [ebp-10h] BYREF
  BYTE Data[4]; // [esp+4h] [ebp-Ch] BYREF
  DWORD cbData; // [esp+8h] [ebp-8h] BYREF
  DWORD Type; // [esp+Ch] [ebp-4h] BYREF

  Type = 4;
  cbData = 4;
  phkResult = nullptr;
  *(_DWORD *)Data = 0;
  if ( RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SYSTEM\\CurrentControlSet\\services\\SheriffVDisk\\Parameters",
         0,
         0x20019u,
         &phkResult) != 0 )
    return 0;
  if ( RegQueryValueExW(phkResult, L"NumberOfDevices", nullptr, &Type, Data, &cbData) != 0 )
  {
    RegCloseKey(phkResult);
    return 0;
  }
  RegCloseKey(phkResult);
  return *(_DWORD *)Data;
}

// Address: 0x10003C30
LSTATUS __cdecl sub_10003C30(HKEY hKey, LPCWSTR lpString)
{
  LSTATUS result; // eax
  LSTATUS v3; // eax
  LSTATUS v4; // esi
  HKEY phkResult; // [esp+Ch] [ebp-218h] BYREF
  DWORD cchName; // [esp+10h] [ebp-214h] BYREF
  HKEY v7; // [esp+14h] [ebp-210h]
  WCHAR Name[260]; // [esp+18h] [ebp-20Ch] BYREF

  v7 = hKey;
  phkResult = nullptr;
  cchName = 0;
  memset(Name, 0, sizeof(Name));
  if ( lpString == nullptr || lstrlenW(lpString) == 0 )
    return 1010;
  result = RegOpenKeyExW(hKey, lpString, 0, 0x10008u, &phkResult);
  if ( result == 0 )
  {
    while ( 1 )
    {
      cchName = 260;
      v3 = RegEnumKeyExW(phkResult, 0, Name, &cchName, nullptr, nullptr, nullptr, nullptr);
      v4 = v3;
      if ( v3 == 259 )
        break;
      if ( v3 == 0 )
      {
        v4 = sub_10003C30(phkResult, Name);
        if ( v4 == 0 )
          continue;
      }
      goto LABEL_7;
    }
    v4 = RegDeleteKeyW(v7, lpString);
LABEL_7:
    RegCloseKey(phkResult);
    return v4;
  }
  return result;
}

// Address: 0x10003D80
UINT __thiscall sub_10003D80(char *this)
{
  unsigned __int16 v2; // si
  UINT result; // eax
  WCHAR FileName[260]; // [esp+8h] [ebp-414h] BYREF
  WCHAR Buffer[260]; // [esp+210h] [ebp-20Ch] BYREF

  v2 = 66;
  memset(Buffer, 0, sizeof(Buffer));
  memset(FileName, 0, sizeof(FileName));
  for ( result = GetSystemDirectoryW(Buffer, 0x104u); this != nullptr; --this )
  {
    wsprintfW(FileName, L"%c:\\%s\\%s.%c00", Buffer[0], L"DRVBKUP", L"SECTION", v2);
    if ( !DeleteFileW(FileName) )
      MoveFileExW(FileName, nullptr, 4u);
    result = (UINT)memset(FileName, 0, 0x104u);
    ++v2;
  }
  return result;
}

// Address: 0x10003E80
BOOL sub_10003E80()
{
  DWORD LastError; // edi
  HANDLE CurrentProcess; // eax
  BOOL v2; // esi
  DWORD v4; // eax
  HANDLE TokenHandle; // [esp+Ch] [ebp-20h] BYREF
  struct _LUID Luid; // [esp+10h] [ebp-1Ch] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [esp+18h] [ebp-14h] BYREF

  LastError = 0;
  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 0x20u, &TokenHandle) )
  {
    v2 = LookupPrivilegeValueW(nullptr, L"SeManageVolumePrivilege", &Luid);
    if ( !v2
      || (NewState.Privileges[0].Luid = Luid,
          NewState.PrivilegeCount = 1,
          NewState.Privileges[0].Attributes = 2,
          !(v2 = AdjustTokenPrivileges(TokenHandle, false, &NewState, 0x10u, nullptr, nullptr))) )
    {
      LastError = GetLastError();
    }
    CloseHandle(TokenHandle);
    SetLastError(LastError);
    return v2;
  }
  else
  {
    v4 = GetLastError();
    SetLastError(v4);
    return false;
  }
}

// Address: 0x10003F30
BOOL __cdecl sub_10003F30(LPCWSTR lpFileName, LONGLONG ValidDataLength)
{
  DWORD v2; // ebx
  BOOL v3; // esi
  char *FileW; // edi
  BOOL valid; // esi
  DWORD LastError; // ebx

  v2 = 0;
  v3 = sub_10003E80();
  if ( !v3 )
  {
    LastError = GetLastError();
    sub_10002D60((wchar_t *)L"Failed to set privilege : %d", LastError);
    goto LABEL_8;
  }
  FileW = (char *)CreateFileW(lpFileName, 0x40000000u, 3u, nullptr, 3u, 0x80u, nullptr);
  v3 = FileW + 1 != nullptr;
  if ( FileW == (char *)-1 )
  {
    LastError = GetLastError();
    sub_10002D60(L"Failed to open file : %d", LastError);
LABEL_8:
    SetLastError(LastError);
    return v3;
  }
  valid = SetFileValidData(FileW, ValidDataLength);
  if ( !valid )
  {
    v2 = GetLastError();
    sub_10002D60((wchar_t *)L"Failed to set valid data : %d", v2);
  }
  CloseHandle(FileW);
  SetLastError(v2);
  return valid;
}

// Address: 0x10003FF0
void __usercall sub_10003FF0(const WCHAR *a1@<eax>)
{
  DWORD v2; // ebp
  unsigned int *v3; // ebx
  HANDLE FileW; // esi
  unsigned int v5; // edi
  _DWORD *v6; // esi
  DWORD v7; // eax
  DWORD LastError; // eax
  HANDLE v9; // [esp+10h] [ebp-14h]
  DWORD BytesReturned; // [esp+14h] [ebp-10h] BYREF
  _DWORD InBuffer[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( a1 != nullptr )
  {
    v2 = 4096;
    InBuffer[0] = 0;
    InBuffer[1] = 0;
    v3 = (unsigned int *)malloc(0x1000u);
    memset(v3, 0, 0x1000u);
    FileW = CreateFileW(a1, 0xC0000000, 7u, nullptr, 3u, 0x80u, nullptr);
    v9 = FileW;
    if ( FileW == (HANDLE)-1 )
    {
      LastError = GetLastError();
      sub_10002D60((wchar_t *)L"Failed to open file for show retrieval pointers : %d", LastError);
      free(v3);
    }
    else
    {
      do
      {
        SetLastError(0);
        if ( DeviceIoControl(FileW, 0x90073u, InBuffer, 8u, v3, v2, &BytesReturned, nullptr) )
        {
          sub_10002D60((wchar_t *)L"prpb->ExtentCount - %d\n", *v3);
          wprintf(L"prpb->StartingVcn - %08X %08X\n", v3[3], v3[2]);
          v5 = 0;
          if ( *v3 != 0 )
          {
            v6 = v3 + 7;
            do
            {
              sub_10002D60((wchar_t *)L"prpb->Extents[%08d].    Lcn - %08X %08X\n", v5);
              sub_10002D60((wchar_t *)L"prpb->Extents[%08d].NextVcn - %08X %08X\n", v5++);
              v6 += 4;
            }
            while ( v5 < *v3 );
            FileW = v9;
          }
        }
        else
        {
          v7 = GetLastError();
          sub_10002D60((wchar_t *)L"Failed to get retrieval pointers : %d", v7);
        }
        if ( GetLastError() == 234 )
        {
          v2 += 2048;
          free(v3);
          v3 = (unsigned int *)malloc(v2);
        }
      }
      while ( GetLastError() == 234 );
      CloseHandle(FileW);
      free(v3);
    }
  }
}

// Address: 0x10004160
int __usercall sub_10004160@<eax>(const WCHAR *a1@<esi>, const WCHAR *lpFileName, LARGE_INTEGER ValidDataLength)
{
  sub_10002D60((wchar_t *)L"%s, %s, %08X", (int)lpFileName);
  if ( sub_10003E80()
    && sub_10001AC0(lpFileName, a1, ValidDataLength) != 0
    && sub_10003F30(a1, ValidDataLength.QuadPart) )
  {
    sub_10003FF0(a1);
    return 1;
  }
  else
  {
    GetLastError();
    sub_10002D60((wchar_t *)L"Failed to create %s : %d", (int)a1);
    return 0;
  }
}

// Address: 0x100041E0
int sub_100041E0()
{
  WCHAR v1; // [esp+8h] [ebp-444h] BYREF
  int v2; // [esp+Ah] [ebp-442h]
  int v3; // [esp+Eh] [ebp-43Eh]
  int v4; // [esp+12h] [ebp-43Ah]
  int v5; // [esp+16h] [ebp-436h]
  int v6; // [esp+1Ah] [ebp-432h]
  int v7; // [esp+1Eh] [ebp-42Eh]
  int v8; // [esp+22h] [ebp-42Ah]
  int v9; // [esp+26h] [ebp-426h]
  int v10; // [esp+2Ah] [ebp-422h]
  __int16 v11; // [esp+2Eh] [ebp-41Eh]
  WCHAR PathName[260]; // [esp+30h] [ebp-41Ch] BYREF
  WCHAR Buffer[262]; // [esp+238h] [ebp-214h] BYREF

  memset(Buffer, 0, 520);
  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  memset(PathName, 0, sizeof(PathName));
  GetSystemDirectoryW(Buffer, 0x104u);
  wsprintfW(PathName, L"%c:\\%s", Buffer[0], L"DRVBKUP");
  CreateDirectoryW(PathName, nullptr);
  memset(PathName, 0, 0x104u);
  wsprintfW(PathName, L"%c:\\%s\\%s", Buffer[0], L"DRVBKUP", L"SECTION.B00");
  wsprintfW(&v1, L"\\\\.\\%C:", Buffer[0]);
  sub_10004160(PathName, &v1, (LARGE_INTEGER)0x40000000LL);
  return 1;
}

// Address: 0x10004330
int __cdecl sub_10004330(unsigned int a1, int a2)
{
  int v2; // ebp
  LONGLONG v4; // kr00_8
  unsigned __int16 v5; // [esp+14h] [ebp-448h]
  WCHAR FileName; // [esp+18h] [ebp-444h] BYREF
  int v7; // [esp+1Ah] [ebp-442h]
  int v8; // [esp+1Eh] [ebp-43Eh]
  int v9; // [esp+22h] [ebp-43Ah]
  int v10; // [esp+26h] [ebp-436h]
  int v11; // [esp+2Ah] [ebp-432h]
  int v12; // [esp+2Eh] [ebp-42Eh]
  int v13; // [esp+32h] [ebp-42Ah]
  int v14; // [esp+36h] [ebp-426h]
  int v15; // [esp+3Ah] [ebp-422h]
  __int16 v16; // [esp+3Eh] [ebp-41Eh]
  WCHAR PathName[260]; // [esp+40h] [ebp-41Ch] BYREF
  WCHAR Buffer[262]; // [esp+248h] [ebp-214h] BYREF

  v2 = a2;
  memset(Buffer, 0, 520);
  FileName = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  memset(PathName, 0, sizeof(PathName));
  v5 = 67;
  if ( a2 == 0 )
    return 0;
  GetSystemDirectoryW(Buffer, 0x104u);
  wsprintfW(PathName, L"%c:\\%s", Buffer[0], L"DRVBKUP");
  CreateDirectoryW(PathName, nullptr);
  memset(PathName, 0, 0x104u);
  wsprintfW(&FileName, L"\\\\.\\%C:", Buffer[0]);
  v4 = (unsigned __int64)a1 << 20;
  do
  {
    wsprintfW(PathName, L"%c:\\%s\\%s.%c00", Buffer[0], L"DRVBKUP", L"SECTION", v5);
    sub_10002D60((wchar_t *)L"%s, %s, %08X", (int)&FileName);
    if ( sub_10003E80() && sub_10001AC0(&FileName, PathName, (LARGE_INTEGER)v4) != 0 && sub_10003F30(PathName, v4) )
    {
      sub_10003FF0(PathName);
    }
    else
    {
      GetLastError();
      sub_10002D60((wchar_t *)L"Failed to create %s : %d", (int)PathName);
    }
    ++v5;
    --v2;
  }
  while ( v2 != 0 );
  return 1;
}

// Address: 0x10004520
int __cdecl sub_10004520(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // esi
  HMODULE LibraryW; // edi
  FARPROC FormatEx; // ebp
  HANDLE FileW; // eax
  WCHAR FileName[260]; // [esp+20h] [ebp-20Ch] BYREF

  v2 = v1;
  LibraryW = LoadLibraryW(L"fmifs.dll");
  FormatEx = GetProcAddress(LibraryW, "FormatEx");
  if ( FormatEx != nullptr )
  {
    memset(FileName, 0, sizeof(FileName));
    if ( v2 >= a1 )
    {
LABEL_7:
      CloseHandle(LibraryW);
      return 1;
    }
    else
    {
      while ( 1 )
      {
        wsprintfW(FileName, L"\\\\.\\%s%d\\%s", L"SheriffVDisk", v2, L"Partition0");
        FileW = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 3u, 0x20000000u, nullptr);
        if ( FileW == (HANDLE)-1 )
        {
          GetLastError();
          sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : Format File Open Error %s %d", (int)FileName);
          return 0;
        }
        CloseHandle(FileW);
        sub_10002D60((wchar_t *)L"format name : %s", (int)FileName);
        ((void (__stdcall *)(WCHAR *, int, const wchar_t *, void *, int, int, char (__stdcall *)(int, int, int *)))FormatEx)(
          FileName,
          12,
          L"NTFS",
          &unk_1001A034,
          1,
          4096,
          sub_10002FB0);
        if ( dword_1001FBE4 == 0 )
          break;
        memset(FileName, 0, 0x104u);
        Sleep(0xAu);
        if ( ++v2 >= a1 )
          goto LABEL_7;
      }
      sub_10002D60((wchar_t *)L"format error devicename: %s", (int)FileName);
      CloseHandle(LibraryW);
      return 0;
    }
  }
  else
  {
    CloseHandle(LibraryW);
    return 0;
  }
}

// Address: 0x100046C0
BOOL __cdecl sub_100046C0(BYTE Data)
{
  LSTATUS v1; // eax
  BOOL v2; // esi
  LSTATUS v3; // eax
  BOOL v4; // esi
  HKEY phkResult; // [esp+4h] [ebp-4h] BYREF

  v1 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SYSTEM\\CurrentControlSet\\services\\SheriffVDisk\\Parameters",
         0,
         0xF003Fu,
         &phkResult);
  v2 = v1 == 0;
  if ( v1 != 0 )
  {
    sub_10002D60((wchar_t *)L"Failed to open registry key : %d", v1);
    return v2;
  }
  else
  {
    v3 = RegSetValueExW(phkResult, L"InfoDiskNumber", 0, 4u, &Data, 4u);
    v4 = v3 == 0;
    if ( v3 != 0 )
      sub_10002D60((wchar_t *)L"Failed to set value : %d", v3);
    RegCloseKey(phkResult);
    return v4;
  }
}

// Address: 0x10004750
int sub_10004750()
{
  LSTATUS v0; // eax
  LSTATUS v1; // eax
  BYTE Data[4]; // [esp+0h] [ebp-10h] BYREF
  HKEY phkResult; // [esp+4h] [ebp-Ch] BYREF
  DWORD cbData; // [esp+8h] [ebp-8h] BYREF
  DWORD Type; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)Data = -1;
  v0 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SYSTEM\\CurrentControlSet\\services\\SheriffVDisk\\Parameters",
         0,
         0xF003Fu,
         &phkResult);
  if ( v0 != 0 )
  {
    sub_10002D60((wchar_t *)L"Failed to open registry key : %d", v0);
    return *(_DWORD *)Data;
  }
  else
  {
    Type = 4;
    cbData = 4;
    v1 = RegQueryValueExW(phkResult, L"InfoDiskNumber", nullptr, &Type, Data, &cbData);
    if ( v1 != 0 )
    {
      sub_10002D60((wchar_t *)L"Failed to query value : %d", v1);
      *(_DWORD *)Data = -1;
    }
    RegCloseKey(phkResult);
    return *(_DWORD *)Data;
  }
}

// Address: 0x100047F0
int __cdecl sub_100047F0(unsigned int *a1)
{
  void *v1; // esp
  int v2; // esi
  DWORD (__stdcall *v3)(); // edi
  DWORD LastError; // eax
  void (*v5)(LPWSTR, LPCWSTR, ...); // esi
  int (__stdcall *v6)(HWND, LPCWSTR, LPCWSTR, UINT); // ebx
  WCHAR *v7; // eax
  WCHAR v8; // cx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  int v16; // esi
  int v17; // [esp-14h] [ebp-16B4h]
  int v18; // [esp-14h] [ebp-16B4h]
  int v19; // [esp-14h] [ebp-16B4h]
  int v20; // [esp+4h] [ebp-169Ch]
  int v21; // [esp+8h] [ebp-1698h]
  int v22; // [esp+Ch] [ebp-1694h]
  BOOL hModule; // [esp+10h] [ebp-1690h]
  char *v24; // [esp+18h] [ebp-1688h]
  HKEY phkResult; // [esp+1Ch] [ebp-1684h] BYREF
  int v26; // [esp+20h] [ebp-1680h]
  WCHAR v27[260]; // [esp+24h] [ebp-167Ch] BYREF
  WCHAR Buffer[260]; // [esp+22Ch] [ebp-1474h] BYREF
  WCHAR v29[260]; // [esp+434h] [ebp-126Ch] BYREF
  WCHAR PathName[260]; // [esp+63Ch] [ebp-1064h] BYREF
  WCHAR v31[260]; // [esp+844h] [ebp-E5Ch] BYREF
  WCHAR v32[260]; // [esp+A4Ch] [ebp-C54h] BYREF
  WCHAR Text[260]; // [esp+C54h] [ebp-A4Ch] BYREF
  WCHAR v34[260]; // [esp+E5Ch] [ebp-844h] BYREF
  WCHAR v35[260]; // [esp+1064h] [ebp-63Ch] BYREF
  WCHAR v36[260]; // [esp+126Ch] [ebp-434h] BYREF
  WCHAR TempFileName[262]; // [esp+1474h] [ebp-22Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1688h] [ebp-18h]

  v1 = alloca(5772);
  ms_exc.registration.ScopeTable = (PSCOPETABLE_ENTRY)((int)ms_exc.registration.ScopeTable ^ __security_cookie);
  v26 = 0;
  v24 = nullptr;
  memset(Buffer, 0, sizeof(Buffer));
  memset(TempFileName, 0, 520);
  v22 = 0;
  v21 = 0;
  v20 = 0;
  phkResult = nullptr;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SYSTEM\\ShrfVDisk", 0, 0x20019u, &phkResult) != 0 )
  {
    v2 = 0;
    phkResult = nullptr;
  }
  else
  {
    RegCloseKey(HKEY_LOCAL_MACHINE);
    phkResult = (HKEY)1;
    v2 = 1;
  }
  sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : Start", v17);
  ms_exc.registration.TryLevel = 0;
  if ( sub_10003A70() != 0 )
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : Exist SheriffVDisk Service", v18);
    v26 = 1;
    if ( v2 == 0 )
      goto LABEL_51;
    memset(Text, 0, sizeof(Text));
    v3 = GetLastError;
    LastError = GetLastError();
    v5 = (void (*)(LPWSTR, LPCWSTR, ...))wsprintfW;
    wsprintfW(
      Text,
      L"%s : Exist SheriffVDisk Service - ErrCode : %d\n%s",
      L"SheriffVDisk Driver Install",
      LastError,
      L"Do install continue?");
    v6 = MessageBoxW;
    if ( MessageBoxW(nullptr, Text, L"SheriffVDisk", 4u) != 6 )
      goto LABEL_51;
    v26 = 0;
  }
  else
  {
    v5 = (void (*)(LPWSTR, LPCWSTR, ...))wsprintfW;
    v6 = MessageBoxW;
    v3 = GetLastError;
  }
  GetTempPathW(0x104u, Buffer);
  GetTempFileNameW(Buffer, L"MEDIAWEB", 0, TempFileName);
  DeleteFileW(TempFileName);
  if ( v36[wcslen(TempFileName) + 259] != 92 )
  {
    v7 = &v36[259];
    do
    {
      v8 = v7[1];
      ++v7;
    }
    while ( v8 != 0 );
    wcscpy(v7, L"\\");
    v3 = GetLastError;
  }
  CreateDirectoryW(TempFileName, nullptr);
  if ( sub_100036D0(TempFileName) == 0 )
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : ExtractPakFileFromResource Error", v18);
    v26 = 5;
    if ( phkResult == nullptr )
      goto LABEL_51;
    if ( phkResult == (HKEY)1 )
    {
      memset(v35, 0, sizeof(v35));
      v9 = ((int (__cdecl *)(const wchar_t *))v3)(L"Do install continue?");
      v5(v35, L"%s : ExtractPakFileFromResource Error - ErrCode : %d\n%s", L"SheriffVDisk Driver Install", v9);
      if ( v6(nullptr, v35, L"SheriffVDisk", 4u) != 6 )
        goto LABEL_51;
      v26 = 0;
    }
  }
  v22 = 1;
  v20 = 1;
  sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : Uninstall SheriffVDisk Driver", v18);
  sub_10003820((int)L"Uninstall");
  if ( sub_10003820((int)L"Install") == 0 )
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : Install SheriffVDisk Driver Error", v19);
    v26 = 6;
    if ( phkResult == nullptr )
      goto LABEL_51;
    if ( phkResult == (HKEY)1 )
    {
      memset(v34, 0, sizeof(v34));
      v10 = ((int (__cdecl *)(const wchar_t *))v3)(L"Do install continue?");
      v5(v34, L"%s : Install SheriffVDisk Driver Error - ErrCode : %d\n%s", L"SheriffVDisk Driver Install", v10);
      if ( v6(nullptr, v34, L"SheriffVDisk", 4u) != 6 )
        goto LABEL_51;
      v26 = 0;
    }
  }
  v24 = (char *)sub_10003BA0();
  if ( v24 == nullptr )
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Uninstall : Disk Cnt 0", v19);
    v26 = 7;
    if ( phkResult == nullptr )
      goto LABEL_51;
    if ( phkResult == (HKEY)1 )
    {
      memset(v31, 0, sizeof(v31));
      v5(v31, L"%s : Disk Cnt 0\n%s", L"SheriffVDisk Driver Install", L"Do install continue?");
      if ( v6(nullptr, v31, L"SheriffVDisk", 4u) != 6 )
        goto LABEL_51;
      v26 = 0;
    }
  }
  if ( a1[1] == 0 && sub_100041E0() == 0 || sub_10004330(*a1, (int)(v24 - 1)) == 0 )
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : CreateDiskFile Error", v19);
    v26 = 8;
    if ( phkResult == nullptr )
      goto LABEL_51;
    if ( phkResult == (HKEY)1 )
    {
      memset(v29, 0, sizeof(v29));
      v11 = ((int (__cdecl *)(const wchar_t *))v3)(L"Do install continue?");
      v5(
        v29,
        L"%s : CreateDiskFile Error - DiskSize : %d TotalDiskCnt : %d ErrCode : %d\n%s",
        L"SheriffVDisk Driver Install",
        *a1,
        v24,
        v11);
      if ( v6(nullptr, v29, L"SheriffVDisk", 4u) != 6 )
        goto LABEL_51;
      v26 = 0;
    }
  }
  v21 = 1;
  if ( sub_10003AC0() == 0 )
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : SetServiceRun Error", v19);
    v26 = 9;
    if ( phkResult == nullptr )
      goto LABEL_51;
    if ( phkResult == (HKEY)1 )
    {
      memset(v27, 0, sizeof(v27));
      v12 = ((int (__cdecl *)(const wchar_t *))v3)(L"Do install continue?");
      v5(v27, L"%s : SetServiceRun Error - ErrCode : %d\n%s", L"SheriffVDisk Driver Install", v12);
      if ( v6(nullptr, v27, L"SheriffVDisk", 4u) != 6 )
        goto LABEL_51;
      v26 = 0;
    }
  }
  hModule = a1[1] != 0;
  if ( sub_10004520((unsigned int)v24) == 0 )
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : FormatSheriffVDisk Error", v19);
    v26 = 10;
    if ( phkResult == nullptr )
      goto LABEL_51;
    if ( phkResult == (HKEY)1 )
    {
      memset(v32, 0, sizeof(v32));
      v13 = ((int (__cdecl *)(const wchar_t *))v3)(L"Do install continue?");
      v5(v32, L"%s : Format SheriffVDisk Error - ErrCode : %d\n%s", L"SheriffVDisk Driver Install", v13);
      if ( v6(nullptr, v32, L"SheriffVDisk", 4u) != 6 )
        goto LABEL_51;
      v26 = 0;
    }
  }
  if ( sub_100046C0(hModule) )
  {
    memset(PathName, 0, sizeof(PathName));
    v5(PathName, L"\\\\.\\%s%d\\%s\\UnProtCfg", L"SheriffVDisk", hModule, L"Partition0");
    CreateDirectoryW(PathName, nullptr);
    memset(v36, 0, sizeof(v36));
    v14 = 0;
    while ( v14 < (unsigned int)(v24 - 1) )
    {
      v5(v36, L"\\\\.\\%s%d\\%s\\UnProtList", L"SheriffVDisk", ++v14, L"Partition0");
      CreateDirectoryW(v36, nullptr);
      memset(v36, 0, 0x104u);
    }
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install Complete", v19);
  }
  else
  {
    sub_10002D60((wchar_t *)L"Failed to set information disk number", v19);
    v26 = 16;
  }
LABEL_51:
  ms_exc.registration.TryLevel = -2;
  v16 = v26;
  if ( v26 != 0 )
  {
    if ( v20 != 0 )
      sub_10003820((int)L"Uninstall");
    if ( v21 != 0 )
      sub_10003D80(v24);
    sub_10003C30(HKEY_LOCAL_MACHINE, L"SYSTEM\\CurrentControlSet\\services\\SheriffVDisk");
  }
  if ( v22 != 0 )
    sub_100033D0(TempFileName);
  sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : End", ms_exc.old_esp);
  return v16;
}

// Address: 0x10005020
void __thiscall sub_10005020(HMODULE hModule)
{
  WCHAR *v1; // edi
  WCHAR v2; // ax
  DWORD LastError; // eax
  int v4; // [esp-10h] [ebp-30h]
  int v5; // [esp-10h] [ebp-30h]
  WCHAR Buffer[260]; // [esp+20h] [ebp+0h] BYREF
  WCHAR TempFileName[260]; // [esp+228h] [ebp+208h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  memset(TempFileName, 0, sizeof(TempFileName));
  GetTempPathW(0x104u, Buffer);
  GetTempFileNameW(Buffer, L"MEDIAWEB", 0, TempFileName);
  DeleteFileW(TempFileName);
  if ( Buffer[wcslen(TempFileName) + 259] != 92 )
  {
    v1 = &Buffer[259];
    do
    {
      v2 = v1[1];
      ++v1;
    }
    while ( v2 != 0 );
    wcscpy(v1, L"\\");
  }
  CreateDirectoryW(TempFileName, nullptr);
  sub_10002D60((wchar_t *)L"SheriffVDisk Driver Uninstall : Start", v4);
  if ( sub_100036D0(TempFileName) != 0 )
  {
    if ( sub_10003BA0() == 0 )
      sub_10002D60((wchar_t *)L"SheriffVDisk Driver Uninstall : Disk Cnt 0", v5);
    if ( sub_10003820((int)L"Uninstall") == 0 )
    {
      LastError = GetLastError();
      sub_10002D60((wchar_t *)L"SheriffVDisk Driver Uninstall : UninstallDriver Error : %d", LastError);
    }
  }
  else
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Uninstall : ExtractPakFileFromResource error", v5);
  }
  JUMPOUT(0x10005205);
}

// Address: 0x10005220
int __thiscall sub_10005220(LPCWSTR lpFileName)
{
  HANDLE FileW; // esi
  DWORD BytesReturned[131]; // [esp+4h] [ebp-828h] BYREF
  _WORD OutBuffer[780]; // [esp+210h] [ebp-61Ch] BYREF

  BytesReturned[0] = 0;
  memset(OutBuffer, 0, sizeof(OutBuffer));
  wcslen(lpFileName);
  FileW = CreateFileW(lpFileName, 0x80000000, 3u, nullptr, 3u, 0x2200000u, nullptr);
  if ( FileW == (HANDLE)-1 )
    return 0;
  if ( !DeviceIoControl(FileW, 0x900A8u, nullptr, 0, OutBuffer, 0x618u, BytesReturned, nullptr) )
  {
    CloseHandle(FileW);
    return 0;
  }
  CloseHandle(FileW);
  return 1;
}

// Address: 0x10005300
int CheckUnProtData_0()
{
  int v0; // eax
  HANDLE FileW; // esi
  int v3; // [esp+0h] [ebp-440h]
  DWORD NumberOfBytesRead; // [esp+Ch] [ebp-434h] BYREF
  int v5; // [esp+10h] [ebp-430h]
  int Buffer; // [esp+14h] [ebp-42Ch] BYREF
  int v7[134]; // [esp+18h] [ebp-428h] BYREF
  WCHAR FileName[262]; // [esp+230h] [ebp-210h] BYREF

  sub_10002D60((wchar_t *)L"SheriffVDisk CheckUnProtData", v3);
  memset(FileName, 0, 520);
  v0 = sub_10004750();
  wsprintfW(FileName, L"\\\\.\\%s%d\\%s\\%s", L"SheriffVDisk", v0, L"Partition0", L"UnProtCfg\\Un_Prot_List.lst");
  FileW = CreateFileW(FileName, 0xC0000000, 0, nullptr, 3u, 0x80u, nullptr);
  if ( FileW == (HANDLE)-1 )
    return 0;
  Buffer = 0;
  memset(v7, 0, sizeof(v7));
  NumberOfBytesRead = 0;
  ReadFile(FileW, &Buffer, 4u, &NumberOfBytesRead, nullptr);
  if ( Buffer != 1669599319 || NumberOfBytesRead != 4 )
  {
    CloseHandle(FileW);
    return 0;
  }
  v5 = 0;
  if ( ReadFile(FileW, v7, 0x218u, &NumberOfBytesRead, nullptr) )
  {
    while ( NumberOfBytesRead == 536 )
    {
      sub_10002D60((wchar_t *)L"Check UnProt Path : %s", (int)&v7[1]);
      if ( (v7[0] == 2 || v7[0] == 3) && sub_10005220((LPCWSTR)&v7[3]) != 0 )
      {
        v5 = 1;
        break;
      }
      memset(v7, 0, sizeof(v7));
      if ( !ReadFile(FileW, v7, 0x218u, &NumberOfBytesRead, nullptr) )
        break;
    }
  }
  CloseHandle(FileW);
  return v5;
}

// Address: 0x100054E0
int __cdecl sub_100054E0(int a1)
{
  int v1; // eax
  HANDLE FileW; // esi
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-21Ch] BYREF
  _DWORD Buffer[2]; // [esp+8h] [ebp-218h] BYREF
  WCHAR FileName[262]; // [esp+10h] [ebp-210h] BYREF

  memset(FileName, 0, 520);
  v1 = sub_10004750();
  wsprintfW(FileName, L"\\\\.\\%s%d\\%s\\%s", L"SheriffVDisk", v1, L"Partition0", L"UnProtCfg\\Config.txt");
  FileW = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 2u, 0x80u, nullptr);
  if ( FileW == (HANDLE)-1 )
  {
    GetLastError();
    sub_10002D60((wchar_t *)L"SheriffVDisk : SetUnProtList File Open Error : %s %d", (int)FileName);
    return 0;
  }
  else
  {
    NumberOfBytesWritten = 0;
    Buffer[0] = 1669599319;
    Buffer[1] = a1;
    if ( WriteFile(FileW, Buffer, 8u, &NumberOfBytesWritten, nullptr) && NumberOfBytesWritten == 8 )
    {
      CloseHandle(FileW);
      return 1;
    }
    else
    {
      GetLastError();
      sub_10002D60((wchar_t *)L"SheriffVDisk : SetUnProtList File Write Error : %s %d", (int)FileName);
      CloseHandle(FileW);
      return 0;
    }
  }
}

// Address: 0x10005630
int RecoveryUnProtData_0()
{
  int v0; // esi
  HANDLE FileW; // esi
  HANDLE v2; // eax
  void *v3; // ebx
  int Buffer; // [esp+8h] [ebp-28h] BYREF
  int v6; // [esp+Ch] [ebp-24h]
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-20h] BYREF
  DWORD NumberOfBytesRead; // [esp+14h] [ebp-1Ch] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+20h] [ebp-10h]
  int (__cdecl *v10)(int, PVOID, int); // [esp+24h] [ebp-Ch]
  _EH4_SCOPETABLE *v11; // [esp+28h] [ebp-8h]
  int v12; // [esp+2Ch] [ebp-4h]
  _DWORD v13[134]; // [esp+30h] [ebp+0h] BYREF
  WCHAR v14[260]; // [esp+248h] [ebp+218h] BYREF
  WCHAR FileName[260]; // [esp+450h] [ebp+420h] BYREF

  v12 = -2;
  v11 = stru_1001C638;
  v10 = _except_handler4;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v11 = (_EH4_SCOPETABLE *)(__security_cookie ^ (unsigned int)stru_1001C638);
  Buffer = 0;
  memset(v13, 0, sizeof(v13));
  NumberOfBytesRead = 0;
  NumberOfBytesWritten = 0;
  memset(FileName, 0, sizeof(FileName));
  memset(v14, 0, sizeof(v14));
  v6 = 0;
  v0 = sub_10004750();
  wsprintfW(FileName, L"\\\\.\\%s%d\\%s\\%s", L"SheriffVDisk", v0, L"Partition0", L"UnProtCfg\\Un_Prot_List.lst");
  wsprintfW(v14, L"\\\\.\\%s%d\\%s\\%s", L"SheriffVDisk", v0, L"Partition0", L"UnProtCfg\\Un_Prot_List.tmp");
  v12 = 0;
  FileW = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 3u, 0x80u, nullptr);
  v2 = CreateFileW(v14, 0xC0000000, 3u, nullptr, 2u, 0x80u, nullptr);
  v3 = v2;
  if ( FileW != (HANDLE)-1 && v2 != (HANDLE)-1 )
  {
    ReadFile(FileW, &Buffer, 4u, &NumberOfBytesRead, nullptr);
    WriteFile(v3, &Buffer, 4u, &NumberOfBytesWritten, nullptr);
    if ( Buffer == 1669599319 && NumberOfBytesRead == 4 && NumberOfBytesWritten == 4 )
    {
      while ( ReadFile(FileW, v13, 0x218u, &NumberOfBytesRead, nullptr) && NumberOfBytesRead != 0 )
      {
        if ( NumberOfBytesRead != 536 )
          goto LABEL_14;
        v13[0] = 3;
        if ( !WriteFile(v3, v13, 0x218u, &NumberOfBytesWritten, nullptr) || NumberOfBytesWritten != 536 )
          goto LABEL_14;
        memset(v13, 0, sizeof(v13));
      }
      if ( sub_100054E0(7) != 0 )
        v6 = 1;
    }
  }
LABEL_14:
  v12 = -2;
  sub_10005865();
  return v6;
}

// Address: 0x10005865
BOOL __usercall sub_10005865@<eax>(void *a1@<ebx>, int a2@<ebp>, int a3@<edi>, void *a4@<esi>)
{
  if ( a4 != (void *)a3 )
    CloseHandle(a4);
  if ( a1 != (void *)a3 )
    CloseHandle(a1);
  if ( *(_DWORD *)(a2 - 36) == a3 )
  {
    sub_100054E0(a3);
    return DeleteFileW((LPCWSTR)(a2 + 536));
  }
  else
  {
    DeleteFileW((LPCWSTR)(a2 + 1056));
    return MoveFileW((LPCWSTR)(a2 + 536), (LPCWSTR)(a2 + 1056));
  }
}

// Address: 0x100058C0
int __usercall sub_100058C0@<eax>(int a1@<ebp>)
{
  int v2; // ebx
  WCHAR *v3; // edi
  WCHAR v4; // ax
  int v6; // edi
  HMODULE ModuleHandleW; // eax
  BOOL (__stdcall *IsWow64Process)(HANDLE, PBOOL); // esi
  HANDLE CurrentProcess; // eax
  int v10; // eax
  WCHAR v11; // cx
  char *v12; // eax
  __int16 v13; // cx
  WCHAR *v14; // eax
  WCHAR v15; // cx
  WCHAR *v16; // eax
  WCHAR v17; // cx
  HMODULE LibraryW; // eax
  HMODULE v19; // esi
  BOOL (__stdcall *Wow64RevertWow64FsRedirection)(PVOID); // eax
  int v21; // [esp+0h] [ebp-C44h]
  int v22; // [esp+Ch] [ebp-C38h] BYREF
  WCHAR NewFileName[260]; // [esp+10h] [ebp-C34h] BYREF
  WCHAR ExistingFileName[260]; // [esp+218h] [ebp-A2Ch] BYREF
  WCHAR TempFileName[260]; // [esp+420h] [ebp-824h] BYREF
  WCHAR v26[260]; // [esp+628h] [ebp-61Ch] BYREF
  WCHAR Buffer[260]; // [esp+830h] [ebp-414h] BYREF
  WCHAR v28[260]; // [esp+A38h] [ebp-20Ch] BYREF

  v2 = 0;
  memset(Buffer, 0, sizeof(Buffer));
  memset(TempFileName, 0, sizeof(TempFileName));
  memset(v28, 0, sizeof(v28));
  GetTempPathW(0x104u, Buffer);
  GetTempFileNameW(Buffer, L"MEDIAWEB", 0, TempFileName);
  DeleteFileW(TempFileName);
  if ( ExistingFileName[wcslen(TempFileName) + 259] != 92 )
  {
    v3 = &ExistingFileName[259];
    do
    {
      v4 = v3[1];
      ++v3;
    }
    while ( v4 != 0 );
    wcscpy(v3, L"\\");
  }
  CreateDirectoryW(TempFileName, nullptr);
  if ( sub_100036D0(TempFileName) != 0 )
  {
    v6 = sub_10006CB0();
    v22 = 0;
    ModuleHandleW = GetModuleHandleW(L"kernel32");
    IsWow64Process = (BOOL (__stdcall *)(HANDLE, PBOOL))GetProcAddress(ModuleHandleW, "IsWow64Process");
    if ( IsWow64Process == nullptr || (CurrentProcess = GetCurrentProcess(), IsWow64Process(CurrentProcess, &v22)) )
      v2 = v22;
    memset(ExistingFileName, 0, sizeof(ExistingFileName));
    memset(NewFileName, 0, sizeof(NewFileName));
    memset(v26, 0, sizeof(v26));
    GetSystemDirectoryW(NewFileName, 0x104u);
    v10 = 0;
    do
    {
      v11 = TempFileName[v10];
      ExistingFileName[v10++] = v11;
    }
    while ( v11 != 0 );
    wsprintfW(v28, L"%s\\%s", TempFileName, L"ShrfReparse.exe");
    wsprintfW(v26, L"%s\\%s", NewFileName, L"ShrfReparse.exe");
    v12 = (char *)&v22 + 2;
    do
    {
      v13 = *((_WORD *)v12 + 1);
      v12 += 2;
    }
    while ( v13 != 0 );
    *(_DWORD *)v12 = 6553692;
    *((_DWORD *)v12 + 1) = 6881394;
    *((_DWORD *)v12 + 2) = 6619254;
    *((_DWORD *)v12 + 3) = 7536754;
    *((_WORD *)v12 + 8) = 0;
    if ( v2 != 0 )
    {
      sub_10002D60((wchar_t *)L"x64", a1);
      v14 = &NewFileName[259];
      do
      {
        v15 = v14[1];
        ++v14;
      }
      while ( v15 != 0 );
      *(_DWORD *)v14 = 7143521;
      *((_DWORD *)v14 + 1) = 3539044;
      *((_DWORD *)v14 + 2) = 52;
      sub_10007100();
    }
    else
    {
      sub_10002D60((wchar_t *)L"x32", a1);
      v16 = &NewFileName[259];
      do
      {
        v17 = v16[1];
        ++v16;
      }
      while ( v17 != 0 );
      *(_DWORD *)v16 = 3670136;
      *((_DWORD *)v16 + 1) = 54;
    }
    switch ( v6 )
    {
      case 268436737:
        wsprintfW(&ExistingFileName[wcslen(ExistingFileName)], L"\\%s", L"SheriffVDisk.sys.wxp");
        wsprintfW(&NewFileName[wcslen(NewFileName)], L"\\%s", L"SheriffVDisk.sys");
        sub_10002D60(L"OSVER_WINXP %s %s", (int)ExistingFileName);
        break;
      case 268436992:
        wsprintfW(&ExistingFileName[wcslen(ExistingFileName)], L"\\%s", L"SheriffVDisk.sys.wlh");
        wsprintfW(&NewFileName[wcslen(NewFileName)], L"\\%s", L"SheriffVDisk.sys");
        sub_10002D60(L"OSVER_WINVISTA %s %s", (int)ExistingFileName);
        break;
      case 268436993:
      case 268436994:
        wsprintfW(&ExistingFileName[wcslen(ExistingFileName)], L"\\%s", L"SheriffVDisk.sys.win7");
        wsprintfW(&NewFileName[wcslen(NewFileName)], L"\\%s", L"SheriffVDisk.sys");
        sub_10002D60((wchar_t *)L"OSVER_WINSEVEN %s %s", (int)ExistingFileName);
        break;
      default:
        break;
    }
    CopyFileW(ExistingFileName, NewFileName, false);
    CopyFileW(v28, v26, false);
    if ( v2 != 0 )
    {
      LibraryW = LoadLibraryW(L"kernel32.dll");
      v19 = LibraryW;
      if ( LibraryW != nullptr )
      {
        Wow64RevertWow64FsRedirection = (BOOL (__stdcall *)(PVOID))GetProcAddress(
                                                                     LibraryW,
                                                                     "Wow64RevertWow64FsRedirection");
        if ( Wow64RevertWow64FsRedirection != nullptr )
          Wow64RevertWow64FsRedirection(nullptr);
      }
      FreeLibrary(v19);
    }
    sub_100033D0(TempFileName);
    return 1;
  }
  else
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk Driver Install : ExtractPakFileFromResource Error", v21);
    return 0;
  }
}

// Address: 0x10005DD0
int __thiscall sub_10005DD0(_DWORD **this)
{
  _DWORD **v1; // edi
  void **v2; // eax
  void *v3; // ecx
  void **v4; // esi
  _DWORD *v5; // ebx
  unsigned int v6; // eax
  void **v7; // esi
  void ***v8; // ecx
  void ***v9; // edi
  int v10; // eax
  int v11; // eax
  void **v12; // ebx
  int *v13; // esi
  void **v14; // edi
  void **v15; // edi
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // esi
  int v20; // eax
  HANDLE FileW; // eax
  void *v22; // esi
  void **v23; // eax
  void **v24; // esi
  void **v25; // eax
  void **v26; // esi
  void **v28; // eax
  unsigned int v29; // eax
  _DWORD *v30; // esi
  void **v31; // ebx
  void **v32; // edi
  _DWORD *v33; // eax
  char *v34; // edi
  char *v35; // eax
  __int16 v36; // cx
  int i; // ebx
  char *v38; // eax
  __int16 v39; // cx
  int v40; // esi
  int v41; // eax
  void **v42; // eax
  void **v43; // esi
  void **v44; // eax
  void **v45; // esi
  void **v46; // eax
  void *v47; // ecx
  void **v48; // esi
  int v49; // [esp+0h] [ebp-47Ch]
  int v50; // [esp+0h] [ebp-47Ch]
  void *v51[5]; // [esp+14h] [ebp-468h] BYREF
  void *v52; // [esp+28h] [ebp-454h]
  int v53; // [esp+2Ch] [ebp-450h]
  HANDLE hFile; // [esp+30h] [ebp-44Ch]
  _DWORD *v55; // [esp+34h] [ebp-448h]
  void **v56; // [esp+38h] [ebp-444h]
  _DWORD **v57; // [esp+3Ch] [ebp-440h]
  int v58; // [esp+40h] [ebp-43Ch]
  int Buffer; // [esp+44h] [ebp-438h] BYREF
  DWORD NumberOfBytesWritten; // [esp+48h] [ebp-434h] BYREF
  void **v61; // [esp+50h] [ebp-42Ch]
  WCHAR FileName[260]; // [esp+54h] [ebp-428h] BYREF
  WCHAR NewFileName[262]; // [esp+25Ch] [ebp-220h] BYREF
  int v64; // [esp+478h] [ebp-4h]

  v1 = this;
  v57 = this;
  sub_10002D60((wchar_t *)L"SheriffVDisk Driver : SetUnProtList Enter", v49);
  sub_100066A0(v51);
  v64 = 0;
  Buffer = 0;
  NumberOfBytesWritten = 0;
  memset(NewFileName, 0, 520);
  memset(FileName, 0, sizeof(FileName));
  if ( GetUnProtList_0(v51) == 0 )
  {
    v2 = *(void ***)v52;
    *(_DWORD *)v52 = v52;
    *((_DWORD *)v52 + 1) = v52;
    v3 = v52;
    v53 = 0;
    if ( v2 != v52 )
    {
      do
      {
        v4 = (void **)*v2;
        operator delete(v2);
        v3 = v52;
        v2 = v4;
      }
      while ( v4 != v52 );
    }
LABEL_46:
    operator delete(v3);
    v52 = nullptr;
    operator delete(v51[0]);
    return 0;
  }
  v5 = *v1;
  v56 = (void **)*v1[5];
  v55 = v5;
  v58 = 1;
  v6 = _time64(nullptr);
  srand(v6);
  while ( 1 )
  {
LABEL_6:
    v7 = (void **)v1[5];
    if ( v5 == nullptr || v5 != *v1 )
      _invalid_parameter_noinfo();
    v8 = (void ***)v56;
    if ( v56 == v7 )
      break;
    v9 = (void ***)v56;
    if ( v5 != nullptr )
    {
      v10 = *v5;
    }
    else
    {
      _invalid_parameter_noinfo();
      v10 = 0;
      v8 = v9;
    }
    if ( v8 == *(void ****)(v10 + 20) )
    {
      _invalid_parameter_noinfo();
      v8 = (void ***)v56;
    }
    v56 = *v8;
    if ( v5 != nullptr )
    {
      v11 = *v5;
    }
    else
    {
      _invalid_parameter_noinfo();
      v11 = 0;
    }
    if ( v9 == *(void ****)(v11 + 20) )
      _invalid_parameter_noinfo();
    v12 = *(void ***)v52;
    v13 = (int *)v51[0];
    hFile = v9 + 2;
    v61 = v12;
    while ( 1 )
    {
      v14 = (void **)v52;
      if ( v13 == nullptr || v13 != v51[0] )
        _invalid_parameter_noinfo();
      if ( v12 == v14 )
        break;
      v15 = v12;
      if ( v13 != nullptr )
      {
        v16 = *v13;
      }
      else
      {
        _invalid_parameter_noinfo();
        v12 = v61;
        v16 = 0;
      }
      if ( v12 == *(void ***)(v16 + 20) )
      {
        _invalid_parameter_noinfo();
        v12 = v61;
      }
      v12 = (void **)*v12;
      v61 = v12;
      if ( v13 != nullptr )
      {
        v17 = *v13;
      }
      else
      {
        _invalid_parameter_noinfo();
        v17 = 0;
      }
      if ( v15 == *(void ***)(v17 + 20) )
        _invalid_parameter_noinfo();
      if ( wcscmp((const unsigned __int16 *)hFile + 2, (const unsigned __int16 *)v15 + 6) == 0 )
      {
        v5 = v55;
        v1 = v57;
        goto LABEL_6;
      }
    }
    v18 = (char *)v52 + 4;
    v19 = sub_10006850(v52, *((_DWORD *)v52 + 1), hFile);
    sub_10006890(v51);
    v5 = v55;
    *v18 = v19;
    v1 = v57;
    **(_DWORD **)(v19 + 4) = v19;
    v58 = 0;
  }
  v20 = sub_10004750();
  wsprintfW(FileName, L"\\\\.\\%s%d\\%s\\%s", L"SheriffVDisk", v20, L"Partition0", L"UnProtCfg\\Un_Prot_List.tmp");
  FileW = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 2u, 0x80u, nullptr);
  v22 = FileW;
  hFile = FileW;
  if ( FileW == (HANDLE)-1 )
  {
    GetLastError();
    sub_10002D60((wchar_t *)L"SheriffVDisk : SetUnProtList File Open Error : %s %d", (int)FileName);
    v23 = *(void ***)v52;
    *(_DWORD *)v52 = v52;
    *((_DWORD *)v52 + 1) = v52;
    v3 = v52;
    v53 = 0;
    if ( v23 != v52 )
    {
      do
      {
        v24 = (void **)*v23;
        operator delete(v23);
        v3 = v52;
        v23 = v24;
      }
      while ( v24 != v52 );
    }
    goto LABEL_46;
  }
  if ( !WriteFile(FileW, &Buffer, 4u, &NumberOfBytesWritten, nullptr) )
  {
    GetLastError();
    sub_10002D60((wchar_t *)L"SheriffVDisk : SetUnProtList File Write Error : %08x %d", Buffer);
    CloseHandle(v22);
    DeleteFileW(FileName);
    v25 = *(void ***)v52;
    *(_DWORD *)v52 = v52;
    *((_DWORD *)v52 + 1) = v52;
    v3 = v52;
    v53 = 0;
    if ( v25 != v52 )
    {
      do
      {
        v26 = (void **)*v25;
        operator delete(v25);
        v3 = v52;
        v25 = v26;
      }
      while ( v26 != v52 );
    }
    goto LABEL_46;
  }
  v28 = *(void ***)v52;
  v55 = v51[0];
  v56 = v28;
  v29 = _time64(nullptr);
  srand(v29);
  while ( 1 )
  {
    v30 = v55;
    v31 = (void **)v52;
    if ( v55 == nullptr || v55 != v51[0] )
      _invalid_parameter_noinfo();
    v32 = v56;
    if ( v56 == v31 )
      break;
    if ( v30 != nullptr )
    {
      v33 = (_DWORD *)*v30;
    }
    else
    {
      _invalid_parameter_noinfo();
      v33 = nullptr;
    }
    if ( v32 == (void **)v33[5] )
      _invalid_parameter_noinfo();
    v56 = (void **)*v32;
    if ( v30 != nullptr )
      v30 = (_DWORD *)*v30;
    else
      _invalid_parameter_noinfo();
    if ( v32 == (void **)v30[5] )
      _invalid_parameter_noinfo();
    v34 = (char *)(v32 + 2);
    v35 = v34 + 516;
    do
    {
      v36 = *(_WORD *)v35;
      v35 += 2;
    }
    while ( v36 != 0 );
    if ( (v35 - (v34 + 518)) >> 1 == 0 )
    {
      for ( i = 3; i != 0; --i )
      {
        v38 = v34 + 516;
        do
        {
          v39 = *(_WORD *)v38;
          v38 += 2;
        }
        while ( v39 != 0 );
        v40 = (v38 - (v34 + 518)) >> 1;
        v41 = rand();
        wsprintfW((LPWSTR)&v34[2 * v40 + 516], L"%c", v41 % 26 + 65);
      }
    }
    if ( !WriteFile(hFile, v34, 0x218u, &NumberOfBytesWritten, nullptr) )
    {
      GetLastError();
      sub_10002D60((wchar_t *)L"SheriffVDisk : SetUnProtList File Write Error : %s %d", (int)(v34 + 12));
      CloseHandle(hFile);
      DeleteFileW(FileName);
      v42 = *(void ***)v52;
      *(_DWORD *)v52 = v52;
      *((_DWORD *)v52 + 1) = v52;
      v3 = v52;
      v53 = 0;
      if ( v42 != v52 )
      {
        do
        {
          v43 = (void **)*v42;
          operator delete(v42);
          v3 = v52;
          v42 = v43;
        }
        while ( v43 != v52 );
      }
      goto LABEL_46;
    }
  }
  CloseHandle(hFile);
  if ( v58 == 0 && sub_100054E0(1) == 0 )
  {
    sub_10002D60((wchar_t *)L"SheriffVDisk : SetUnProtList SetReparseAppRunFlag", v50);
    DeleteFileW(FileName);
    v44 = *(void ***)v52;
    *(_DWORD *)v52 = v52;
    *((_DWORD *)v52 + 1) = v52;
    v3 = v52;
    v53 = 0;
    if ( v44 != v52 )
    {
      do
      {
        v45 = (void **)*v44;
        operator delete(v44);
        v3 = v52;
        v44 = v45;
      }
      while ( v45 != v52 );
    }
    goto LABEL_46;
  }
  DeleteFileW(NewFileName);
  MoveFileW(FileName, NewFileName);
  v46 = *(void ***)v52;
  *(_DWORD *)v52 = v52;
  *((_DWORD *)v52 + 1) = v52;
  v47 = v52;
  v53 = 0;
  if ( v46 != v52 )
  {
    do
    {
      v48 = (void **)*v46;
      operator delete(v46);
      v47 = v52;
      v46 = v48;
    }
    while ( v48 != v52 );
  }
  operator delete(v47);
  v52 = nullptr;
  operator delete(v51[0]);
  return 1;
}

// Address: 0x10006480
int __cdecl GetUnProtList_0(int a1)
{
  int v1; // eax
  HANDLE FileW; // ebx
  int v3; // esi
  int v4; // edi
  int v6; // [esp+0h] [ebp-448h]
  DWORD NumberOfBytesRead; // [esp+10h] [ebp-438h] BYREF
  int Buffer; // [esp+14h] [ebp-434h] BYREF
  int v9; // [esp+18h] [ebp-430h]
  int v10; // [esp+1Ch] [ebp-42Ch]
  _DWORD v11[134]; // [esp+20h] [ebp-428h] BYREF
  WCHAR FileName[262]; // [esp+238h] [ebp-210h] BYREF

  v9 = a1;
  sub_10002D60((wchar_t *)L"SheriffVDisk Driver : GetUnProtList Enter", v6);
  Buffer = 0;
  memset(v11, 0, sizeof(v11));
  NumberOfBytesRead = 0;
  memset(FileName, 0, 520);
  v10 = 0;
  v1 = sub_10004750();
  wsprintfW(FileName, L"\\\\.\\%s%d\\%s\\%s", L"SheriffVDisk", v1, L"Partition0", L"UnProtCfg\\Un_Prot_List.lst");
  FileW = CreateFileW(FileName, 0xC0000000, 3u, nullptr, 3u, 0x80u, nullptr);
  if ( FileW == (HANDLE)-1 )
    return v10;
  if ( ReadFile(FileW, &Buffer, 4u, &NumberOfBytesRead, nullptr) && Buffer == 1669599319 )
  {
    if ( ReadFile(FileW, v11, 0x218u, &NumberOfBytesRead, nullptr) )
    {
      while ( NumberOfBytesRead != 0 )
      {
        if ( NumberOfBytesRead == 536 )
        {
          v3 = *(_DWORD *)(v9 + 20);
          v4 = sub_10006850(v3, *(_DWORD *)(v3 + 4), v11);
          sub_10006890(v9);
          *(_DWORD *)(v3 + 4) = v4;
          **(_DWORD **)(v4 + 4) = v4;
          memset(v11, 0, sizeof(v11));
          if ( ReadFile(FileW, v11, 0x218u, &NumberOfBytesRead, nullptr) )
            continue;
        }
        goto LABEL_10;
      }
      v10 = 1;
    }
LABEL_10:
    CloseHandle(FileW);
    return v10;
  }
  GetLastError();
  sub_10002D60((wchar_t *)L"SheriffVDisk : SetUnProtList ReadFile/Sign Error : %s %d %d", (int)FileName);
  CloseHandle(FileW);
  return 0;
}

// Address: 0x100066A0
_DWORD *__stdcall sub_100066A0(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  a1[5] = sub_10006730();
  a1[6] = 0;
  return a1;
}

// Address: 0x10006730
_DWORD *sub_10006730()
{
  _DWORD *result; // eax

  result = operator new(0x220u);
  if ( result != nullptr )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}

// Address: 0x10006750
void __usercall sub_10006750(int a1@<esi>)
{
  _DWORD **v1; // ecx
  _DWORD *v2; // eax
  _DWORD *v3; // edi

  v1 = *(_DWORD ***)(a1 + 20);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 24) = 0;
  if ( v2 != *(_DWORD **)(a1 + 20) )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != *(_DWORD **)(a1 + 20) );
  }
  operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
}

// Address: 0x100067A0
int __userpurge sub_100067A0@<eax>(_BYTE *a1@<eax>, int a2@<esi>, int a3)
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
    return sub_10006930((a1 - (_BYTE *)v5) >> 1, a3);
  }
  else
  {
    if ( (unsigned __int8)sub_100069E0() != 0 )
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

// Address: 0x10006850
_DWORD *__stdcall sub_10006850(int a1, int a2, const void *a3)
{
  _DWORD *result; // eax

  result = operator new(0x220u);
  if ( result != nullptr )
    *result = a1;
  if ( result != (_DWORD *)-4 )
    result[1] = a2;
  if ( result != (_DWORD *)-8 )
    qmemcpy(result + 2, a3, 0x218u);
  return result;
}

// Address: 0x10006890
int __thiscall sub_10006890(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  _BYTE v3[20]; // [esp+4h] [ebp-50h] BYREF
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v1 = *(this + 6);
  if ( v1 == 8012998 )
  {
    v5 = 15;
    v4 = 0;
    v3[4] = 0;
    sub_100027C0((int)v3, 0, "list<T> too long", (char *)0x10);
    pExceptionObject[12] = 0;
    sub_10001040(pExceptionObject, (int)v3);
    pExceptionObject[0] = &std::length_error::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  result = v1 + 1;
  *(this + 6) = result;
  return result;
}

// Address: 0x10006930
int __userpurge sub_10006930@<eax>(_DWORD *a1@<eax>, int a2@<ecx>, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  _DWORD *v8; // ecx
  void **v9; // ebp
  void *v10; // eax
  bool v11; // cf

  if ( a1[5] < a3 )
    sub_100073E7();
  v6 = a1[5] - a3;
  if ( a4 < v6 )
    v6 = a4;
  if ( (_DWORD *)a2 == a1 )
  {
    sub_10006A40();
    sub_10006A40();
    return a2;
  }
  else
  {
    if ( (unsigned __int8)sub_100069E0() != 0 )
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

// Address: 0x100069E0
BOOL __usercall sub_100069E0@<eax>(int a1@<eax>, unsigned int a2@<edi>)
{
  unsigned int v3; // eax

  if ( a2 > 0x7FFFFFFE )
    sub_100073AF();
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 < a2 )
  {
    sub_10006AD0(a1, a2, *(_DWORD *)(a1 + 20));
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

// Address: 0x10006A40
_DWORD *__usercall sub_10006A40@<eax>(unsigned int a1@<eax>, unsigned int a2@<ebx>, _DWORD *a3@<esi>)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // ebp
  unsigned int v7; // eax
  bool v8; // cf
  _DWORD *v10; // [esp+4h] [ebp-8h]
  _DWORD *v11; // [esp+8h] [ebp-4h]

  if ( a3[5] < a2 )
    sub_100073E7();
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

// Address: 0x10006AD0
_WORD *__stdcall sub_10006AD0(_DWORD *a1, unsigned int a2, int a3)
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

// Address: 0x10006C50
void *__fastcall sub_10006C50(unsigned int a1)
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

// Address: 0x10006CB0
int sub_10006CB0()
{
  HMODULE ModuleHandleW; // eax
  struct _OSVERSIONINFOW VersionInformation; // [esp+0h] [ebp-118h] BYREF

  memset(&VersionInformation, 0, sizeof(VersionInformation));
  VersionInformation.dwOSVersionInfoSize = 276;
  GetVersionExW(&VersionInformation);
  if ( VersionInformation.dwPlatformId == 1 )
    return 1024;
  if ( VersionInformation.dwPlatformId != 2 )
    return 0;
  if ( VersionInformation.dwMajorVersion == 5 )
  {
    if ( VersionInformation.dwMinorVersion != 0 )
    {
      ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
      return (unsigned __int8)-(GetProcAddress(ModuleHandleW, "GetProductInfo") != nullptr) + 268436737;
    }
    else
    {
      return 268436736;
    }
  }
  else
  {
    if ( VersionInformation.dwMajorVersion < 5 )
      return 268436480;
    if ( VersionInformation.dwMajorVersion != 6 )
      return 268436992;
    if ( VersionInformation.dwMinorVersion == 1 )
      return 268436993;
    if ( VersionInformation.dwMinorVersion == 2 )
      return 268436994;
    else
      return 268436992;
  }
}

// Address: 0x10006E10
HANDLE __usercall sub_10006E10@<eax>(int a1@<edi>, int a2@<esi>)
{
  BOOL v2; // eax
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+0h] [ebp-26Ch] BYREF
  struct _STARTUPINFOW StartupInfo; // [esp+10h] [ebp-25Ch] BYREF
  WCHAR CommandLine[262]; // [esp+58h] [ebp-214h] BYREF

  StartupInfo.cb = 68;
  memset(&StartupInfo.lpReserved, 0, 0x40u);
  wsprintfW(CommandLine, L"%s %s", a2, a1);
  v2 = CreateProcessW(
         nullptr,
         CommandLine,
         nullptr,
         nullptr,
         false,
         0,
         nullptr,
         nullptr,
         &StartupInfo,
         &ProcessInformation);
  return v2 ? ProcessInformation.hProcess : nullptr;
}

// Address: 0x10006E90
DWORD __usercall sub_10006E90@<eax>(void *a1@<esi>)
{
  DWORD result; // eax
  DWORD ExitCode; // [esp+4h] [ebp-4h] BYREF

  ExitCode = 0;
  if ( !GetExitCodeProcess(a1, &ExitCode) )
    return ExitCode;
  while ( 1 )
  {
    result = ExitCode;
    if ( ExitCode != 259 )
      break;
    ExitCode = 0;
    Sleep(1u);
    if ( !GetExitCodeProcess(a1, &ExitCode) )
      return ExitCode;
  }
  return result;
}

// Address: 0x10006EF0
const unsigned __int16 *__usercall sub_10006EF0@<eax>(const unsigned __int16 *result@<eax>, __int16 *a2@<ecx>)
{
  wchar_t *v2; // edi
  wchar_t v3; // dx
  __int16 *v4; // ecx
  __int16 *v5; // esi
  __int16 v6; // dx
  unsigned int v7; // edx
  unsigned __int16 *v8; // edi
  unsigned __int16 v9; // cx
  __int16 v10; // dx
  unsigned __int16 v11; // cx

  if ( wcslen(result) != 0 && result[wcslen(result) - 1] != 92 )
  {
    v2 = (wchar_t *)(result - 1);
    do
    {
      v3 = v2[1];
      ++v2;
    }
    while ( v3 != 0 );
    wcscpy(v2, L"\\");
  }
  if ( *a2 == 92 )
  {
    v4 = a2 + 1;
    v5 = v4;
    do
      v6 = *v4++;
    while ( v6 != 0 );
    v7 = (char *)v4 - (char *)v5;
    v8 = (unsigned __int16 *)(result - 1);
    do
    {
      v9 = v8[1];
      ++v8;
    }
    while ( v9 != 0 );
  }
  else
  {
    v5 = a2;
    do
      v10 = *a2++;
    while ( v10 != 0 );
    v7 = (char *)a2 - (char *)v5;
    v8 = (unsigned __int16 *)(result - 1);
    do
    {
      v11 = v8[1];
      ++v8;
    }
    while ( v11 != 0 );
  }
  qmemcpy(v8, v5, v7);
  return result;
}

// Address: 0x10006FC0
int __usercall sub_10006FC0@<eax>(const char *a1@<ebx>, int a2@<edi>)
{
  unsigned int v2; // eax
  int v3; // esi
  WCHAR *v4; // ebp
  WCHAR *v5; // eax
  __int16 v6; // cx
  int v8; // [esp+10h] [ebp-2Ch] BYREF
  void *v9; // [esp+14h] [ebp-28h]
  int v10; // [esp+24h] [ebp-18h]
  unsigned int v11; // [esp+28h] [ebp-14h]
  int v12; // [esp+38h] [ebp-4h]

  v11 = 7;
  v10 = 0;
  LOWORD(v9) = 0;
  v12 = 0;
  v2 = strlen(a1);
  if ( v2 != 0 )
  {
    v3 = v2 + 1;
    v4 = (WCHAR *)operator new[](2 * (v2 + 1));
    MultiByteToWideChar(0, 0, a1, -1, v4, v3);
    v5 = v4;
    do
      v6 = *v5++;
    while ( v6 != 0 );
    sub_100067A0(v4, (int)&v8, v5 - (v4 + 1));
    operator delete(v4);
    *(_DWORD *)(a2 + 24) = 7;
    *(_DWORD *)(a2 + 20) = 0;
    *(_WORD *)(a2 + 4) = 0;
    sub_10006930(&v8, a2, 0, 0xFFFFFFFF);
    if ( v11 >= 8 )
      goto LABEL_7;
  }
  else
  {
    *(_DWORD *)(a2 + 24) = 7;
    *(_DWORD *)(a2 + 20) = 0;
    *(_WORD *)(a2 + 4) = 0;
    sub_10006930(&v8, a2, 0, 0xFFFFFFFF);
    if ( v11 >= 8 )
LABEL_7:
      operator delete(v9);
  }
  return a2;
}

// Address: 0x10007100
int sub_10007100()
{
  HMODULE LibraryW; // eax
  HMODULE v1; // esi
  BOOL (__stdcall *Wow64DisableWow64FsRedirection)(PVOID *); // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  LibraryW = LoadLibraryW(L"kernel32.dll");
  v1 = LibraryW;
  if ( LibraryW != nullptr )
  {
    Wow64DisableWow64FsRedirection = (BOOL (__stdcall *)(PVOID *))GetProcAddress(
                                                                    LibraryW,
                                                                    "Wow64DisableWow64FsRedirection");
    if ( Wow64DisableWow64FsRedirection != nullptr )
      Wow64DisableWow64FsRedirection((PVOID *)&v4);
  }
  FreeLibrary(v1);
  return 1;
}

// Address: 0x10007180
int __stdcall sub_10007180(int a1, _WORD *a2, unsigned int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( a2 == nullptr || a3 < 0x24 || *(_DWORD *)a2 != 1348095571 || a2[3] != 1 || a3 < *((_DWORD *)a2 + 2) )
    return 0;
  v4 = *((_DWORD *)a2 + 3);
  if ( v4 + *((_DWORD *)a2 + 5) > a3 || *((_DWORD *)a2 + 6) + *((_DWORD *)a2 + 8) > a3 )
    return 0;
  v5 = sub_10007300((char *)a2 + v4);
  *(_DWORD *)(a1 + 44) = v5;
  if ( v5 == 0 )
    return 0;
  v6 = sub_10007300((char *)a2 + *((_DWORD *)a2 + 6));
  *(_DWORD *)(a1 + 48) = v6;
  if ( v6 == 0 )
  {
    operator delete(*(void **)(a1 + 44));
    return 0;
  }
  qmemcpy((void *)(a1 + 8), a2, 0x24u);
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  return 1;
}

// Address: 0x10007240
int __userpurge sub_10007240@<eax>(unsigned int a1@<eax>, _DWORD *a2@<ecx>, _DWORD *a3)
{
  int result; // eax
  int v4; // eax
  int v5; // esi

  if ( a3 != nullptr )
    *a3 = -1;
  if ( *a2 == 0 || a1 >= a2[6] )
    return 0;
  v4 = a2[11] + 44 * a1;
  v5 = v4;
  if ( *(_DWORD *)(v4 + 12) == 0 )
  {
    if ( a3 != nullptr )
      *a3 = 0;
    return 0;
  }
  result = sub_10007300(*a2 + *(_DWORD *)(v4 + 4));
  if ( result == 0 )
    return 0;
  if ( a3 != nullptr )
    *a3 = *(_DWORD *)(v5 + 12);
  return result;
}

// Address: 0x100072B0
int __userpurge sub_100072B0@<eax>(
        unsigned int a1@<eax>,
        _DWORD *a2@<edx>,
        _DWORD *a3@<edi>,
        _DWORD *a4@<esi>,
        _DWORD *a5)
{
  _DWORD *v6; // eax

  if ( *a5 == 0 || a1 >= a5[6] )
    return 0;
  v6 = (_DWORD *)(a5[11] + 44 * a1);
  if ( a2 != nullptr )
  {
    *a2 = v6[5];
    a2[1] = v6[6];
  }
  if ( a4 != nullptr )
  {
    *a4 = v6[7];
    a4[1] = v6[8];
  }
  if ( a3 != nullptr )
  {
    *a3 = v6[9];
    a3[1] = v6[10];
  }
  return 1;
}

// Address: 0x10007300
void *__userpurge sub_10007300@<eax>(void *a1@<ebx>, void *a2@<edi>, void *Src)
{
  void *v3; // ebp
  void *v4; // eax
  void *v5; // esi
  size_t v7; // [esp+0h] [ebp-Ch]

  v3 = Src;
  Src = a2;
  v4 = operator new(v7);
  v5 = v4;
  if ( a1 == a2 )
  {
    memcpy_0(v4, v3, (size_t)Src);
    return v5;
  }
  else if ( sub_100119E0(v4, &Src, v3, a1) != 0 || Src != a2 )
  {
    operator delete(v5);
    return nullptr;
  }
  else
  {
    return v5;
  }
}

// Address: 0x10007360
_DWORD *__thiscall sub_10007360(_DWORD *this, int a2)
{
  sub_10001040(this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x1000737D
int __thiscall sub_1000737D(void **this)
{
  *this = &std::out_of_range::`vftable';
  return sub_10001130(this);
}

// Address: 0x10007388
void **__thiscall sub_10007388(void **this, char a2)
{
  *this = &std::out_of_range::`vftable';
  sub_10001130(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100073AF
void __cdecl __noreturn sub_100073AF()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10002580((int)v1, "string too long");
  v2 = 0;
  sub_10001110(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x100073E7
void __noreturn sub_100073E7()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_10002580((int)v1, "invalid string position");
  v2 = 0;
  sub_10007360(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// Address: 0x1000741F
_DWORD *__thiscall sub_1000741F(_DWORD *this, struct std::exception *a2)
{
  sub_10002500((int)this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x1000743C
void *__cdecl operator new[](size_t a1)
{
  return operator new(a1);
}

// Address: 0x10007447
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x10007456
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

// Address: 0x100074B3
_DWORD *__thiscall sub_100074B3(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = &std::exception::`vftable';
  return this;
}

// Address: 0x100074C4
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

// Address: 0x10007517
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

// Address: 0x10007534
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

// Address: 0x10007591
void __thiscall sub_10007591(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}

// Address: 0x100075A7
const char *__thiscall exception::what(exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x100075B4
void *__thiscall sub_100075B4(void *this, char a2)
{
  sub_10007591(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x100075D5
int __cdecl sub_100075D5(int a1)
{
  dword_1001F120 = a1;
  return a1;
}

// Address: 0x100075E4
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
    sub_10008C48(2);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x1000770C
int __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))_decode_pointer(dword_1001F120);
  if ( v5 == nullptr )
  {
    sub_10008C48(2);
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v5();
}

// Address: 0x10007732
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x10007742
void __cdecl operator delete(void *Block)
{
  free(Block);
}

// Address: 0x1000774D
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

// Address: 0x100077CA
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

// Address: 0x10007847
void __thiscall sub_10007847(struct type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable';
  type_info::_Type_info_dtor(this);
}

// Address: 0x10007857
struct type_info *__thiscall sub_10007857(struct type_info *this, char a2)
{
  sub_10007847(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x10007878
BOOL __thiscall type_info::operator==(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0;
}

// Address: 0x10007898
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

// Address: 0x10007907
std::bad_alloc *__thiscall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  std::exception::exception(this, (const char *const *)&off_1001E048, 1);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x10007922
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
      if ( (dword_1001F130 & 1) == 0 )
      {
        dword_1001F130 |= 1u;
        std::bad_alloc::bad_alloc((std::bad_alloc *)&dword_1001F124);
        atexit(sub_1001454D);
      }
      sub_100028A0((std::exception *)pExceptionObject, (struct std::exception *)&dword_1001F124);
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  return result;
}

// Address: 0x10007987
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

  v1 = (_DWORD *)_decode_pointer(dword_10020D48);
  Block = v1;
  v2 = (_DWORD *)_decode_pointer(dword_10020D44);
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
        dword_10020D44 = _encode_pointer(v3 + 1);
        return a1;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = _realloc_crt(Block, v7)) != 0 || v5 + 16 >= v5 && (v8 = _realloc_crt(Block, v5 + 16)) != 0 )
      {
        v3 = (_DWORD *)(v8 + 4 * (v4 >> 2));
        dword_10020D48 = _encode_pointer(v8);
        goto LABEL_11;
      }
    }
  }
  return 0;
}

// Address: 0x10007A41
int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(0x20u, 4);
  dword_10020D48 = _encode_pointer(v0);
  dword_10020D44 = dword_10020D48;
  if ( v0 == nullptr )
    return 24;
  *v0 = 0;
  return 0;
}

// Address: 0x10007A72
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock((int)Func);
  _unlockexit(268466847);
  return v2;
}

// Address: 0x10007AAE
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x10007AC5
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

// Address: 0x10007BBD
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

// Address: 0x10007BE7
wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *result; // eax

  for ( result = (wchar_t *)Str; *result != 0; ++result )
  {
    if ( *result == Ch )
      return result;
  }
  if ( *result != Ch )
    return nullptr;
  return result;
}

// Address: 0x10007C0D
void __cdecl free(void *Block)
{
  int v1; // eax
  int *v2; // esi
  DWORD LastError; // eax
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_10020D3C != 3 )
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

// Address: 0x10007C9B
int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = 0;
  if ( a1 <= dword_10020D2C )
  {
    _lock(4);
    v2 = __sbh_alloc_block(a1);
    _unlock(4);
  }
  return v2;
}

// Address: 0x10007CEA
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
      if ( dword_10020D3C == 1 )
      {
        v2 = v1 != 0 ? v1 : 1;
        v3 = HeapAlloc(hHeap, 0, v2);
      }
      else if ( dword_10020D3C != 3 || (v3 = (LPVOID)V6_HeapAlloc(v1)) == nullptr )
      {
        if ( v1 == 0 )
          v1 = 1;
        v3 = HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
      }
      v4 = v3;
      if ( v3 != nullptr )
        return v4;
      if ( dword_1001F934 == 0 )
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

// Address: 0x10007DB4
int wprintf(const wchar_t *const Format, ...)
{
  int v2; // eax
  FILE *v3; // eax
  int v4; // edi
  int v5; // eax
  FILE *v6; // eax
  int v7; // eax
  int v8; // [esp+10h] [ebp-1Ch]
  va_list va; // [esp+38h] [ebp+Ch] BYREF

  va_start(va, Format);
  if ( Format != nullptr )
  {
    v2 = ((int (*)(void))sub_1000BA9B)();
    _lock_file2(1, v2 + 32);
    v3 = (FILE *)((int (*)(void))sub_1000BA9B)();
    v4 = _stbuf(v3 + 1);
    v5 = ((int (*)(void))sub_1000BA9B)();
    v8 = _woutput_l(v5 + 32, (int)Format, nullptr, (int)va);
    v6 = (FILE *)((int (*)(void))sub_1000BA9B)();
    _ftbuf(v4, v6 + 1);
    v7 = sub_1000BA9B(268467783);
    _unlock_file2(1, v7 + 32);
    return v8;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x10007E63
void __cdecl srand(unsigned int Seed)
{
  *(_DWORD *)(_getptd() + 20) = Seed;
}

// Address: 0x10007E75
int __cdecl rand()
{
  int v0; // eax
  unsigned int v1; // ecx

  v0 = _getptd();
  v1 = 214013 * *(_DWORD *)(v0 + 20) + 2531011;
  *(_DWORD *)(v0 + 20) = v1;
  return HIWORD(v1) & 0x7FFF;
}

// Address: 0x10007E97
__time64_t __cdecl _time64(__time64_t *Time)
{
  __time64_t result; // rax
  struct _FILETIME SystemTimeAsFileTime; // [esp+0h] [ebp-8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  result = (*(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL) / 0x989680uLL;
  if ( result > 0x793406FFFLL )
    result = -1;
  if ( Time != nullptr )
    *Time = result;
  return result;
}

// Address: 0x10007EE8
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
    if ( *(_UNKNOWN **)this != off_1001EC58 && (dword_1001EB74 & v3[28]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_1001EB74 & *(_DWORD *)(*((_DWORD *)this + 2) + 112)) == 0 )
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

// Address: 0x10007F6F
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
    sub_1000CE9C();
    dword_10020D5C = (int)GetCommandLineA();
    dword_1001F138 = (char *)__crtGetEnvironmentStringsA();
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
    ++dword_1001F134;
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
      v8 = dword_1001E1D0;
      v6 = (int (__stdcall *)(int, DWORD *))_decode_pointer(dword_1001F474);
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
    if ( dword_1001F134 <= 0 )
      return 0;
    --dword_1001F134;
    if ( dword_1001F4B8 == 0 )
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

// Address: 0x100080A4
BOOL __fastcall __DllMainCRTStartup(void *a1, DWORD a2, HINSTANCE hinstDLL)
{
  BOOL v5; // eax
  BOOL v7; // [esp+10h] [ebp-1Ch]

  if ( a2 == 0 && dword_1001F134 == 0 || (a2 == 1 || a2 == 2) && _CRT_INIT((int)hinstDLL, a2, (int)a1) == 0 )
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

// Address: 0x1000819A
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return __DllMainCRTStartup(lpReserved, fdwReason, hinstDLL);
}

// Address: 0x100081C0
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

// Address: 0x1000824B
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_100152C0, sizeof(dwExceptionCode));
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)pThrowInfo;
  if ( pThrowInfo != nullptr && (pThrowInfo->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}

// Address: 0x10008297
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x100082C9
// ?_CallMemberFunction0@@YGXPAX0@Z
// doubtful name
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_100082C9(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x100082D0
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_27112, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x10008324
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *a2,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(a2, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x1000835A
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

// Address: 0x1000838D
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

// Address: 0x10008464
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

// Address: 0x10008503
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

// Address: 0x10008578
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 152);
  *(_DWORD *)(_getptd() + 152) = a1;
  return a1;
}

// Address: 0x100085A4
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

// Address: 0x100085CB
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

// Address: 0x1000861D
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x1000867D
_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x100086B0
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x100086E6
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

  dword_1001F250 = v0;
  dword_1001F24C = v2;
  dword_1001F248 = v1;
  dword_1001F244 = v3;
  dword_1001F240 = v5;
  dword_1001F23C = v4;
  word_1001F268 = __SS__;
  word_1001F25C = __CS__;
  word_1001F238 = __DS__;
  word_1001F234 = __ES__;
  word_1001F230 = __FS__;
  word_1001F22C = __GS__;
  v6 = __readeflags();
  dword_1001F260 = v6;
  dword_1001F254 = vars0;
  dword_1001F258 = retaddr;
  dword_1001F264 = (int)&v10;
  dword_1001F1A0 = 65537;
  dword_1001F154 = retaddr;
  dword_1001F148 = -1073740791;
  dword_1001F14C = 1;
  dword_1001F198 = IsDebuggerPresent();
  sub_10008C48(1);
  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( dword_1001F198 == 0 )
    sub_10008C48(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x100087F0
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
         && dword_1001FBF0 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 1000884C case 0 }
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

// Address: 0x10008B55
int __cdecl _get_errno_from_oserr(int a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_1001E060[2 * i] )
      return dword_1001E064[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x10008B97
int *__cdecl _errno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 8);
  else
    return (int *)&unk_1001E1C8;
}

// Address: 0x10008BAA
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 12);
  else
    return (unsigned int *)&unk_1001E1CC;
}

// Address: 0x10008BBD
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

// Address: 0x10008BE0
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

// Address: 0x10008C48
void sub_10008C48()
{
  dword_10020D58 = 0;
}

// Address: 0x10008C50
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
  if ( (_BYTE)Val == 0 && Size >= 0x100 && dword_1001FBF0 != 0 )
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

// Address: 0x10008CCA
PVOID __cdecl _encode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001E1D0 != -1
    && (v6 = dword_1001E1D0, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x10008D3C
PVOID _encoded_null()
{
  return _encode_pointer(nullptr);
}

// Address: 0x10008D45
PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_1001E1D0 != -1
    && (v6 = dword_1001E1D0, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x10008DB7
// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}

// Address: 0x10008DC0
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

// Address: 0x10008DF4
int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_1001E1D0 != -1 )
  {
    v2 = dword_1001E1D0;
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_1001F478);
    v0(v2);
    dword_1001E1D0 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}

// Address: 0x10008E31
int __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleW; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]
  int savedregs; // [esp+2Ch] [ebp+0h]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
  hModule = ModuleHandleW;
  *(_DWORD *)(a1 + 92) = &unk_100159C8;
  *(_DWORD *)(a1 + 20) = 1;
  if ( ModuleHandleW != nullptr )
  {
    *(_DWORD *)(a1 + 504) = GetProcAddress(ModuleHandleW, "EncodePointer");
    *(_DWORD *)(a1 + 508) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 200) = 67;
  *(_BYTE *)(a1 + 331) = 67;
  *(_DWORD *)(a1 + 104) = &unk_1001E650;
  _lock(13);
  InterlockedIncrement(*(volatile LONG **)(a1 + 104));
  _unlock(13);
  _lock(12);
  *(_DWORD *)(a1 + 108) = a2;
  if ( a2 == 0 )
    *(_DWORD *)(a1 + 108) = off_1001EC58;
  __addlocaleref(*(volatile LONG **)(a1 + 108));
  savedregs = 268472058;
  return _unlock(12);
}

// Address: 0x10008F18
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
  v9 = dword_1001E1D0;
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
      v8 = dword_1001E1D0;
      v5 = (int (__stdcall *)(int, DWORD *))_decode_pointer((void *)dword_1001F474);
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

// Address: 0x10008F91
DWORD *_getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( v0 == nullptr )
    _amsg_exit(16);
  return v0;
}

// Address: 0x10008FAB
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
    if ( *((_UNKNOWN **)Block + 23) != &unk_100159C8 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = *((void **)Block + 26);
    if ( v1 != nullptr && InterlockedDecrement(*((volatile LONG **)Block + 26)) == 0 && v1 != &unk_1001E650 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = *((_DWORD **)Block + 27);
    if ( v2 != nullptr )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != (_DWORD *)off_1001EC58 && v2 != (_DWORD *)&unk_1001EB80 && *v2 == 0 )
        __freetlocinfo(v2);
    }
    savedregs = 268472499;
    _unlock(12);
    free(Block);
  }
}

// Address: 0x100090DA
DWORD __cdecl _freeptd(void *Block)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_1001E1D0 != -1 )
  {
    if ( Block == nullptr && TlsGetValue(dwTlsIndex) != nullptr )
    {
      v4 = dword_1001E1D0;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      Block = (void *)Value(v4);
    }
    v5 = dword_1001E1D0;
    v2 = (void (__stdcall *)(int, _DWORD))_decode_pointer((void *)dword_1001F474);
    v2(v5, 0);
    _freefls(Block);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, nullptr);
  return result;
}

// Address: 0x10009148
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
    dword_1001F478 = (int)FlsFree;
    if ( FlsAlloc == nullptr || FlsGetValue == nullptr || FlsSetValue == nullptr || FlsFree == nullptr )
    {
      FlsGetValue = TlsGetValue;
      FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))__crtTlsAlloc;
      FlsSetValue = TlsSetValue;
      dword_1001F478 = (int)TlsFree;
    }
    v3 = TlsAlloc();
    dwTlsIndex = v3;
    if ( v3 == -1 || !TlsSetValue(v3, FlsGetValue) )
      return 0;
    _init_pointers();
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))_encode_pointer(FlsAlloc);
    FlsGetValue = (PVOID (__stdcall *)(DWORD))_encode_pointer(FlsGetValue);
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))_encode_pointer(FlsSetValue);
    dword_1001F478 = (int)_encode_pointer((void *)dword_1001F478);
    if ( _mtinitlocks() != 0 )
    {
      v4 = (int (__stdcall *)(_DWORD))_decode_pointer(FlsAlloc);
      dword_1001E1D0 = v4(_freefls);
      if ( dword_1001E1D0 != -1 )
      {
        v5 = (DWORD *)_calloc_crt(1u, 532);
        v6 = v5;
        if ( v5 != nullptr )
        {
          v11 = v5;
          v10 = dword_1001E1D0;
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

// Address: 0x100092E0
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
         && dword_1001FBF0 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 1000933C case 0 }
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

// Address: 0x10009645
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
    v3 = &unk_1001F47C;
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

// Address: 0x100096C0
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

// Address: 0x10009748
int __cdecl sub_10009748(int a1)
{
  dword_1001F484 = a1;
  return a1;
}

// Address: 0x10009757
int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))_decode_pointer((void *)dword_1001F484);
  return v1 != nullptr && v1(Size) != 0;
}

// Address: 0x1000977F
void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr || dword_1001F488 == 0 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_1001F488 )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}

// Address: 0x100097C4
int __cdecl _calloc_crt(size_t Size, int a2)
{
  DWORD v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = _calloc_impl(Size, a2, 0);
    if ( v3 != 0 || dword_1001F488 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001F488 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x10009810
void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 != nullptr || Size == 0 || dword_1001F488 == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_1001F488 )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x1000985E
size_t __cdecl _msize(void *Block)
{
  size_t v2; // esi
  int v3; // [esp+10h] [ebp-20h]
  int v4; // [esp+14h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_10020D3C != 3 )
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

// Address: 0x10009901
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

// Address: 0x10009931
int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer(off_1001E1F0);
  return v1(255);
}

// Address: 0x1000995A
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

// Address: 0x10009985
void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x1000999D
int _lockexit()
{
  return _lock(8);
}

// Address: 0x100099A6
int _unlockexit()
{
  return _unlock(8);
}

// Address: 0x100099AF
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

// Address: 0x100099CC
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

// Address: 0x100099F0
int __cdecl _cinit(int a1)
{
  int result; // eax
  _PVFV *savedregs; // [esp+4h] [ebp+0h]

  if ( dword_10020D50 != nullptr && _IsNonwritableInCurrentImage(&dword_10020D50) != 0 )
    dword_10020D50(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&dword_100151F0, (_PIFV *)&Last);
  if ( result == 0 )
  {
    atexit(sub_1000CEC2);
    _initterm((_PVFV *)&First, savedregs);
    if ( dword_10020D54 != nullptr && _IsNonwritableInCurrentImage(&dword_10020D54) != 0 )
      dword_10020D54(0, 2, 0);
    return 0;
  }
  return result;
}

// Address: 0x10009A75
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
  if ( dword_1001F4BC != 1 )
  {
    dword_1001F4B8 = 1;
    byte_1001F4B4 = a3;
    if ( a2 == 0 )
    {
      v3 = (void **)_decode_pointer((void *)dword_10020D48);
      v9 = v3;
      if ( v3 != nullptr )
      {
        v4 = (void **)_decode_pointer((void *)dword_10020D44);
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
            v6 = (void **)_decode_pointer((void *)dword_10020D48);
            v7 = (void **)_decode_pointer((void *)dword_10020D44);
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
      _initterm((_PVFV *)&dword_10015214, v8);
    }
    _initterm((_PVFV *)&dword_1001521C, v8);
  }
  if ( a3 != 0 )
    _unlock(8);
  if ( a3 == 0 )
  {
    dword_1001F4BC = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
}

// Address: 0x10009BA1
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x10009BB7
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x10009BC6
void (__cdecl __noreturn *_init_pointers())(int Code)
{
  PVOID v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null();
  sub_10009748((int)v0);
  sub_1000E9DD(v0);
  sub_100075D5((int)v0);
  sub_1000E9CE(v0);
  sub_1000E9BF(v0);
  _initp_misc_winsig(v0);
  nullsub_1(v0);
  _initp_eh_hooks(v0);
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit);
  off_1001E1F0 = result;
  return result;
}

// Address: 0x10009C14
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

// Address: 0x10009C59
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { retn }
}

// Address: 0x10009C70
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
            && _IsNonwritableInCurrentImage(&off_10015A40) != 0 )
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

// Address: 0x10009DFC
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
    && (v2 != (FILE *)(sub_1000BA9B() + 32) && v2 != (FILE *)(sub_1000BA9B() + 64) || _isatty((int)File) == 0) )
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
        v9 = &unk_1001EC68;
      else
        v9 = (_BYTE *)(dword_1001FC00[(int)File >> 5] + (((unsigned __int8)File & 0x1F) << 6));
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

// Address: 0x10009F60
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

// Address: 0x10009F8F
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

// Address: 0x10009FB6
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

// Address: 0x1000A008
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
      v10 = *((_BYTE *)&off_10016170 + (unsigned __int16)v7) & 0xF;
    v55 = byte_10016190[8 * v10 + v8] >> 4;
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
                  v73 = (char *)off_1001ED0C[0];
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
              v28 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_1001ECF8[0]);
              v28(v52, v12, v46, v47, v48, v49, &Locale);
              v29 = v75 & 0x80;
              if ( (v75 & 0x80) != 0 && v74 == 0 )
              {
                v30 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1001ED04);
                v30(v12, &Locale);
              }
              if ( (_WORD)v71 == 103 && v29 == 0 )
              {
                v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_1001ED00[0]);
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

// Address: 0x1000ABA0
int __cdecl _heap_init(int a1)
{
  int result; // eax

  result = (int)HeapCreate(a1 == 0, 0x1000u, 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    dword_10020D3C = 1;
    return 1;
  }
  return result;
}

// Address: 0x1000ABD0
BOOL _heap_term()
{
  int v0; // ebx
  LPVOID *v1; // esi
  BOOL result; // eax

  if ( dword_10020D3C == 3 )
  {
    v0 = 0;
    if ( dword_10020D24 > 0 )
    {
      v1 = (LPVOID *)((char *)lpMem + 16);
      do
      {
        VirtualFree(*(v1 - 1), 0, 0x8000u);
        HeapFree(hHeap, 0, *v1);
        v1 += 5;
        ++v0;
      }
      while ( v0 < dword_10020D24 );
    }
    HeapFree(hHeap, 0, lpMem);
  }
  result = HeapDestroy(hHeap);
  hHeap = nullptr;
  return result;
}

// Address: 0x1000AC44
int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_1001F4C8;
  while ( 1 )
  {
    if ( dword_1001E1FC[2 * v0] == 1 )
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

// Address: 0x1000AC8F
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
  while ( (int)v0 < (int)&dword_1001E318 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 != nullptr && v2[1] == (LPCRITICAL_SECTION)1 )
      DeleteCriticalSection(*v2);
    v2 += 2;
  }
  while ( (int)v2 < (int)&dword_1001E318 );
}

// Address: 0x1000ACE6
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}

// Address: 0x1000ACFD
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

// Address: 0x1000ADC0
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 == nullptr && _mtinitlocknum(a1) == 0 )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}

// Address: 0x1000ADF3
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 20 * dword_10020D24; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x1000AE23
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
      if ( dword_1001F618 != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_1001F618 + 3) + (dword_10020D38 << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_1001F618 + 2) |= 0x80000000 >> dword_10020D38;
        *(_DWORD *)(*((_DWORD *)dword_1001F618 + 4) + 4 * dword_10020D38 + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_1001F618 + 4) + 67);
        v20 = (LPVOID *)dword_1001F618;
        if ( *(_BYTE *)(*((_DWORD *)dword_1001F618 + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_1001F618 + 1) &= ~1u;
          v20 = (LPVOID *)dword_1001F618;
        }
        if ( v20[2] == (LPVOID)-1 )
        {
          VirtualFree(v20[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_1001F618 + 4));
          memcpy(
            dword_1001F618,
            (char *)dword_1001F618 + 20,
            (size_t)lpMem + 20 * dword_10020D24 - (_DWORD)dword_1001F618 - 20);
          --dword_10020D24;
          if ( a1 > dword_1001F618 )
            a1 -= 5;
          dword_10020D30 = (int)lpMem;
        }
      }
      dword_1001F618 = a1;
      dword_10020D38 = v4;
      return a1;
    }
  }
  return result;
}

// Address: 0x1000B139
char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v0 = dword_10020D24;
  if ( dword_10020D24 == dword_10020D34 )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_10020D34 + 16));
    if ( v1 == nullptr )
      return nullptr;
    dword_10020D34 += 16;
    v0 = dword_10020D24;
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
  ++dword_10020D24;
  **((_DWORD **)v3 + 4) = -1;
  return v3;
}

// Address: 0x1000B1E9
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

// Address: 0x1000B2F1
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

// Address: 0x1000B5D2
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

  v1 = (char *)lpMem + 20 * dword_10020D24;
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
  for ( i = (char *)dword_10020D30; ; i += 20 )
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
      if ( (unsigned int)i >= dword_10020D30 || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
        break;
    }
    if ( i == (char *)dword_10020D30 )
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
          if ( (unsigned int)i >= dword_10020D30 || *((_DWORD *)i + 2) != 0 )
            break;
        }
        if ( i == (char *)dword_10020D30 )
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
  dword_10020D30 = (int)i;
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
  if ( v24 == 0 && i == dword_1001F618 && v31 == dword_10020D38 )
    dword_1001F618 = nullptr;
  *v6 = v31;
  return v23 + 1;
}

// Address: 0x1000B8B7
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
    if ( a1 == dword_1001E318[2 * v1] )
      break;
    v8 = ++v1;
  }
  while ( v1 < 0x17 );
  if ( v1 < 0x17 )
  {
    if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001F144 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v4 = StdHandle;
      if ( StdHandle != nullptr && StdHandle != (HANDLE)-1 )
      {
        v5 = (const char **)&(&off_1001E31C)[2 * v1];
        v6 = strlen(*v5);
        WriteFile(v4, *v5, v6, &NumberOfBytesWritten, nullptr);
      }
    }
    else if ( a1 != 252 )
    {
      if ( strcpy_s(Destination, 0x314u, "Runtime Error!\n\nProgram: ") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      byte_1001F73D = 0;
      if ( GetModuleFileNameA(nullptr, Filename, 0x104u) == 0
        && strcpy_s(Filename, 0x2FBu, "<program name unknown>") != 0 )
      {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strlen(Filename) + 1 > 0x3C )
      {
        v2 = strlen(Filename);
        if ( strncpy_s(&Filename[v2 - 59], (char *)&dword_1001F934 - &Filename[v2 - 59], "...", 3u) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strcat_s(Destination, 0x314u, "\n\n") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcat_s(Destination, 0x314u, (&off_1001E31C)[2 * v8]) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      sub_1000F895(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
}

// Address: 0x1000BA62
void _FF_MSGBANNER()
{
  if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_1001F144 == 1 )
  {
    _NMSG_WRITE(252);
    _NMSG_WRITE(255);
  }
}

// Address: 0x1000BA9B
_UNKNOWN **__cdecl sub_1000BA9B()
{
  return &off_1001E3D0;
}

// Address: 0x1000BAA1
int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_10020D20;
  if ( dword_10020D20 == 0 )
  {
    v0 = 512;
LABEL_5:
    dword_10020D20 = v0;
    goto LABEL_6;
  }
  if ( dword_10020D20 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)_calloc_crt(v0, 4);
  dword_1001FD00 = v1;
  if ( v1 == nullptr )
  {
    dword_10020D20 = 20;
    v1 = (char *)_calloc_crt(0x14u, 4);
    dword_1001FD00 = v1;
    if ( v1 == nullptr )
      return 26;
  }
  v3 = 0;
  v4 = &off_1001E3D0;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&unk_1001E650 )
      break;
    v1 = (char *)dword_1001FD00;
  }
  v5 = 0;
  v6 = &unk_1001E3E0;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_1001FC00[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || v7 == 0 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_1001E440 );
  return 0;
}

// Address: 0x1000BB52
void __endstdio()
{
  sub_1000FD9B();
  if ( byte_1001F4B4 != 0 )
    _fcloseall();
  free(dword_1001FD00);
}

// Address: 0x1000BB72
void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1001E3D0 || Stream > &stru_1001E630 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_1001E3D0) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}

// Address: 0x1000BBB3
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

// Address: 0x1000BBE5
void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_1001E3D0 || Stream > &stru_1001E630 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_1001E3D0) >> 5) + 16);
  }
}

// Address: 0x1000BC21
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

// Address: 0x1000BC50
int __cdecl _stbuf(FILE *Stream)
{
  int v1; // eax
  int v2; // eax
  char **v3; // edi
  char *v4; // eax
  char *v5; // edi

  v1 = _fileno(Stream);
  if ( _isatty(v1) == 0 )
    return 0;
  if ( Stream == (FILE *)(sub_1000BA9B() + 8) )
  {
    v2 = 0;
  }
  else
  {
    if ( Stream != (FILE *)(sub_1000BA9B() + 16) )
      return 0;
    v2 = 1;
  }
  ++dword_1001F938;
  if ( (Stream->_flag & 0x10C) != 0 )
    return 0;
  v3 = (char **)((char *)&unk_1001F93C + 4 * v2);
  if ( *v3 != nullptr || (v4 = (char *)_malloc_crt(0x1000u), *v3 = v4, v4 != nullptr) )
  {
    v5 = *v3;
    Stream->_base = v5;
    Stream->_ptr = v5;
    Stream->_bufsiz = 4096;
    Stream->_cnt = 4096;
  }
  else
  {
    Stream->_base = (char *)&Stream->_charbuf;
    Stream->_ptr = (char *)&Stream->_charbuf;
    Stream->_bufsiz = 2;
    Stream->_cnt = 2;
  }
  Stream->_flag |= 0x1102u;
  return 1;
}

// Address: 0x1000BCEC
int __cdecl _ftbuf(int a1, FILE *Stream)
{
  int result; // eax

  if ( a1 != 0 && (Stream->_flag & 0x1000) != 0 )
  {
    result = _flush(Stream);
    Stream->_flag &= 0xFFFFEEFF;
    Stream->_bufsiz = 0;
    Stream->_ptr = nullptr;
    Stream->_base = nullptr;
  }
  return result;
}

// Address: 0x1000BD20
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

// Address: 0x1000BD88
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

// Address: 0x1000BDB7
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
  v3 = &unk_1001E650 - (_UNKNOWN *)a1;
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

// Address: 0x1000BE1B
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

// Address: 0x1000BFAE
volatile LONG *__updatetmbcinfo()
{
  DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = _getptd();
  if ( (dword_1001EB74 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != lpAddend )
    {
      if ( v1 != nullptr && InterlockedDecrement(v1) == 0 && v1 != (volatile LONG *)&unk_1001E650 )
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

// Address: 0x1000C052
UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, nullptr);
  dword_1001F944 = 0;
  switch ( a1 )
  {
    case -2:
      dword_1001F944 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_1001F944 = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_1001F944 = 1;
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

// Address: 0x1000C0CE
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
      if ( dword_1001EA80[i] == SystemCP )
      {
        memset(a2 + 7, 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_1001EA90 + 48 * v19;
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
              *((_BYTE *)a2 + v10 + 29) |= byte_1001EA7C[v18];
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
        v13 = (_WORD *)((char *)&unk_1001EA84 + v12);
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
    if ( dword_1001F944 == 0 )
      return -1;
  }
  setSBCS(a2);
  return 0;
}

// Address: 0x1000C2B3
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
        if ( v4 != (_DWORD *)&unk_1001E650 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( InterlockedDecrement((volatile LONG *)v1[26]) == 0 && (_UNKNOWN *)v1[26] != &unk_1001E650 )
        free((void *)v1[26]);
      v1[26] = (DWORD)v4;
      InterlockedIncrement(v4);
      if ( (v1[28] & 2) == 0 && (dword_1001EB74 & 1) == 0 )
      {
        _lock(13);
        dword_1001F954 = v4[1];
        dword_1001F958 = v4[2];
        dword_1001F95C = v4[3];
        for ( i = 0; i < 5; ++i )
          word_1001F948[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_1001E870[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_1001E978[k] = *((_BYTE *)v4 + k + 285);
        if ( InterlockedDecrement(lpAddend) == 0 && lpAddend != (volatile LONG *)&unk_1001E650 )
          free((void *)lpAddend);
        lpAddend = v4;
        InterlockedIncrement(v4);
        _unlock(13);
      }
    }
  }
  return v10;
}

// Address: 0x1000C44D
int __initmbctable()
{
  if ( dword_10020D4C == 0 )
  {
    _setmbcp(-3);
    dword_10020D4C = 1;
  }
  return 0;
}

// Address: 0x1000C46B
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
  if ( v2 != nullptr && v2 != &off_1001EDD8 )
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
  if ( (_UNKNOWN **)v7 != &off_1001ED18 && *(_DWORD *)(v7 + 180) == 0 )
  {
    __free_lc_time(*((_DWORD *)Block + 53));
    free(*((void **)Block + 53));
  }
  v8 = (void **)(Block + 80);
  for ( Blocka = 6; Blocka != 0; --Blocka )
  {
    if ( *(v8 - 2) != &unk_1001EB78 && *v8 != nullptr && *(_DWORD *)*v8 == 0 )
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

// Address: 0x1000C5B4
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
    if ( *(v2 - 2) != (volatile LONG *)&unk_1001EB78 && *v2 != nullptr )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
      InterlockedIncrement(v2[1]);
    v2 += 4;
  }
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}

// Address: 0x1000C643
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
      if ( *(v2 - 2) != (volatile LONG *)&unk_1001EB78 && *v2 != nullptr )
        InterlockedDecrement(*v2);
      if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
        InterlockedDecrement(v2[1]);
      v2 += 4;
    }
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
  }
  return lpAddend;
}

// Address: 0x1000C6DC
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
      if ( *v2 == 0 && v2 != (volatile LONG *)&unk_1001EB80 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}

// Address: 0x1000C71A
DWORD __updatetlocinfo()
{
  DWORD *v0; // esi
  DWORD v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_1001EB74 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = _getptd()[27];
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)v0 + 27, (volatile LONG *)off_1001EC58);
    _unlock(12);
    v1 = (DWORD)v3;
  }
  if ( v1 == 0 )
    _amsg_exit(32);
  return v1;
}

// Address: 0x1000C790
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
  dword_1001FC00[0] = v0;
  uNumber = 32;
  for ( i = v0 + 2048; v0 < i; i = dword_1001FC00[0] + 2048 )
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
      v5 = &dword_1001FC00[k];
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
        v7 = dword_1001FC00[k >> 5] + ((k & 0x1F) << 6);
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
    v9 = dword_1001FC00[0] + (m << 6);
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

// Address: 0x1000C9E4
void _ioterm()
{
  void **v0; // esi
  char *v1; // edi
  unsigned int i; // eax

  v0 = (void **)dword_1001FC00;
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
  while ( (int)v0 < (int)&dword_1001FD00 );
}

// Address: 0x1000CA32
int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( dword_10020D4C == 0 )
    __initmbctable();
  v0 = dword_1001F138;
  v1 = 0;
  if ( dword_1001F138 != nullptr )
  {
    while ( *v0 != 0 )
    {
      if ( *v0 != 61 )
        ++v1;
      v0 += strlen(v0) + 1;
    }
    v3 = (char **)_calloc_crt(v1 + 1, 4);
    dword_1001F49C = v3;
    if ( v3 != nullptr )
    {
      for ( i = dword_1001F138; ; i += v6 )
      {
        if ( *i == 0 )
        {
          free(dword_1001F138);
          dword_1001F138 = nullptr;
          *v3 = nullptr;
          dword_10020D40 = 1;
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
      free(dword_1001F49C);
      dword_1001F49C = nullptr;
      return -1;
    }
  }
  return -1;
}

// Address: 0x1000CB10
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

// Address: 0x1000CCAA
int _setargv()
{
  int v0; // edi
  size_t v1; // eax
  char **v2; // esi
  size_t v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( dword_10020D4C == 0 )
    __initmbctable();
  byte_1001FA8C = 0;
  GetModuleFileNameA(nullptr, byte_1001F988, 0x104u);
  dword_1001F4AC = (int)byte_1001F988;
  if ( dword_10020D5C == 0 || (v6 = (char *)dword_10020D5C, *(_BYTE *)dword_10020D5C == 0) )
    v6 = byte_1001F988;
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
  dword_1001F490 = v5 - 1;
  dword_1001F494 = (int)v2;
  return 0;
}

// Address: 0x1000CD65
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

  v0 = dword_1001FA90;
  v1 = nullptr;
  EnvironmentStringsW = nullptr;
  if ( dword_1001FA90 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      dword_1001FA90 = 1;
      goto LABEL_8;
    }
    if ( GetLastError() == 120 )
    {
      v0 = 2;
      dword_1001FA90 = 2;
    }
    else
    {
      v0 = dword_1001FA90;
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

// Address: 0x1000CE9C
void *sub_1000CE9C()
{
  return &unk_1001BD44;
}

// Address: 0x1000CEC2
void __cdecl sub_1000CEC2()
{
  ;
}

// Address: 0x1000CEE8
void nullsub_1()
{
  ;
}

// Address: 0x1000CEE9
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
    while ( v5 < &v4[3 * dword_1001ECB4] );
    if ( v5 < &v4[3 * dword_1001ECB4] && *v5 == a1 )
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
            v9 = dword_1001ECA8;
            if ( dword_1001ECA8 < dword_1001ECA8 + dword_1001ECAC )
            {
              v10 = 12 * dword_1001ECA8;
              do
              {
                *(_DWORD *)(v10 + v3[23] + 8) = 0;
                ++v9;
                v10 += 12;
              }
              while ( v9 < dword_1001ECA8 + dword_1001ECAC );
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

// Address: 0x1000D049
int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}

// Address: 0x1000D069
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
    dword_1001E054 = ~v4;
  }
  else
  {
    dword_1001E054 = ~__security_cookie;
  }
}

// Address: 0x1000D0FF
std::exception *__thiscall sub_1000D0FF(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000D11D
void __thiscall sub_1000D11D(void *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_10007591(this);
}

// Address: 0x1000D128
_DWORD *__thiscall sub_1000D128(_DWORD *this, char a2)
{
  *this = &std::bad_exception::`vftable';
  sub_10007591(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x1000D14F
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

// Address: 0x1000D1AE
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

// Address: 0x1000D1F7
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

// Address: 0x1000D2D8
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

// Address: 0x1000D31D
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
        sub_100082C9(a1[6], v2);
    }
  }
}

// Address: 0x1000D372
int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2;
  if ( (int)a2[1] >= 0 )
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]);
  return result;
}

// Address: 0x1000D39B
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

// Address: 0x1000D416
void __cdecl __noreturn CallUnexpected()
{
  if ( _getptd()[37] != 0 )
    _inconsistency();
  unexpected();
}

// Address: 0x1000D45F
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

// Address: 0x1000D5FB
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

// Address: 0x1000D77A
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
      return sub_100082C9((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_100082C9((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x1000D80C
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

// Address: 0x1000D87A
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

// Address: 0x1000D96E
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
                sub_1000D0FF((std::exception *)pExceptionObject, "bad exception");
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

// Address: 0x1000DCB5
std::exception *__thiscall sub_1000DCB5(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x1000DCD2
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

// Address: 0x1000DDB8
void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[30];
  if ( v0 != nullptr )
    v0();
  abort();
}

// Address: 0x1000DDF1
void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[31];
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1000DE04
void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer((void *)dword_1001FA94);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x1000DE3C
PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = _encode_pointer(terminate);
  dword_1001FA94 = (int)result;
  return result;
}

// Address: 0x1000DE50
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

// Address: 0x1000DE9C
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

// Address: 0x1000DF23
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

// Address: 0x1000E006
int has_osfxsr_set()
{
  return 1;
}

// Address: 0x1000E056
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

// Address: 0x1000E0B8
int sub_1000E0B8()
{
  dword_1001FBF0 = _get_sse2_info();
  return 0;
}

// Address: 0x1000E0C5
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

// Address: 0x1000E11C
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

// Address: 0x1000E1AC
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

// Address: 0x1000E23C
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

// Address: 0x1000E282
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x1000E29E
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x1000E2B5
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x1000E2CE
void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &ReturnPoint, nullptr, nullptr);
}

// Address: 0x1000E2E8
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x1000E2FF
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
      if ( dword_1001F934 == 0 )
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
    if ( dword_10020D3C == 3 )
    {
      v4 = (v4 + 15) & 0xFFFFFFF0;
      if ( Sizea <= dword_10020D2C )
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

// Address: 0x1000E41D
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
    if ( dword_10020D3C == 3 )
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
          if ( v3 <= dword_10020D2C )
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
        if ( dword_1001F934 == 0 )
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
        if ( dword_1001F934 == 0 )
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

// Address: 0x1000E638
int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    v1 = &off_1001ECE0[i];
    result = (int (*)())_encode_pointer(off_1001ECE0[i]);
    *v1 = result;
  }
  return result;
}

// Address: 0x1000E660
BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  return *(_WORD *)a1 == 23117 && *(_DWORD *)(v2 = a1 + *(_DWORD *)(a1 + 60)) == 17744 && *(_WORD *)(v2 + 24) == 267;
}

// Address: 0x1000E6A0
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

// Address: 0x1000E6F0
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x10000000)
      && (PESection = _FindPESection(0x10000000, a1 - 0x10000000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x1000E7AD
int __cdecl _initp_misc_winsig(int a1)
{
  dword_1001FAD4 = a1;
  dword_1001FAD8 = a1;
  dword_1001FADC = a1;
  dword_1001FAE0 = a1;
  return a1;
}

// Address: 0x1000E7CB
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
  while ( result < a2 + 12 * dword_1001ECB4 );
  if ( result >= a2 + 12 * dword_1001ECB4 || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}

// Address: 0x1000E802
PVOID sub_1000E802()
{
  return _decode_pointer((void *)dword_1001FADC);
}

// Address: 0x1000E80F
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
      v4 = &dword_1001FAE0;
      v5 = (void *)dword_1001FAE0;
      goto LABEL_18;
    }
    if ( Signal == 21 )
    {
      v4 = &dword_1001FAD8;
      v5 = (void *)dword_1001FAD8;
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
      v4 = &dword_1001FAD4;
      v5 = (void *)dword_1001FAD4;
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
      v4 = &dword_1001FADC;
      v5 = (void *)dword_1001FADC;
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
    for ( i = dword_1001ECA8; i < dword_1001ECA8 + dword_1001ECAC; ++i )
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

// Address: 0x1000E9BF
int __cdecl sub_1000E9BF(int a1)
{
  dword_1001FAE8 = a1;
  return a1;
}

// Address: 0x1000E9CE
int __cdecl sub_1000E9CE(int a1)
{
  dword_1001FAF4 = a1;
  return a1;
}

// Address: 0x1000E9DD
int __cdecl sub_1000E9DD(int a1)
{
  dword_1001FAF8 = a1;
  return a1;
}

// Address: 0x1000E9EC
BOOL __cdecl __crtInitCritSecAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x1000EA4C
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
  v7 = (_BYTE *)(dword_1001FC00[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
  *v7 &= ~2u;
  return lDistanceToMove;
}

// Address: 0x1000EAD1
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
  v4 = &dword_1001FC00[FileHandle >> 5];
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

// Address: 0x1000EBEA
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
  v4 = &dword_1001FC00[FileHandle >> 5];
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

// Address: 0x1000F31D
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
    || (v4 = &dword_1001FC00[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x1000F3F9
int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_1001F938;
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

// Address: 0x1000F442
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return 0;
  }
  else if ( FileHandle >= 0 && FileHandle < uNumber )
  {
    return *(_BYTE *)(dword_1001FC00[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) & 0x40;
  }
  else
  {
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
}

// Address: 0x1000F4A6
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x1000F4D8
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
      ? (v3 = &unk_1001EC68)
      : (v2 = &dword_1001FC00[_fileno(Stream) >> 5], v3 = (_BYTE *)(*v2 + ((_fileno(Stream) & 0x1F) << 6))),
        (v3[36] & 0x7F) == 2
     || (_fileno(Stream) == -1 || _fileno(Stream) == -2
       ? (v5 = &unk_1001EC68)
       : (v4 = &dword_1001FC00[_fileno(Stream) >> 5], v5 = (_BYTE *)(*v4 + ((_fileno(Stream) & 0x1F) << 6))),
         (v5[36] & 0x7F) == 1
      || (_fileno(Stream) == -1 || _fileno(Stream) == -2
        ? (v7 = (char *)&unk_1001EC68)
        : (v6 = &dword_1001FC00[_fileno(Stream) >> 5], v7 = (char *)(*v6 + ((_fileno(Stream) & 0x1F) << 6))),
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

// Address: 0x1000F65F
int __cdecl _get_printf_count_output()
{
  return dword_1001FAFC == (__security_cookie | 1);
}

// Address: 0x1000F675
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

// Address: 0x1000F78C
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x1000F7A6
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

// Address: 0x1000F7DE
int __cdecl isleadbyte(int C)
{
  return _isleadbyte_l(C, nullptr);
}

// Address: 0x1000F800
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

// Address: 0x1000F895
int __cdecl sub_1000F895(int a1, int a2, int a3)
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
  if ( dword_1001FB00 == 0 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( MessageBoxA == nullptr )
      return 0;
    dword_1001FB00 = (int)_encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v5, "GetActiveWindow");
    dword_1001FB04 = (int)_encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v5, "GetLastActivePopup");
    dword_1001FB08 = (int)_encode_pointer(GetLastActivePopup);
    GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                          v5,
                                                                                          "GetUserObjectInformationA");
    dword_1001FB10 = (int)_encode_pointer(GetUserObjectInformationA);
    if ( dword_1001FB10 != 0 )
    {
      GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v5, "GetProcessWindowStation");
      dword_1001FB0C = (int)_encode_pointer(GetProcessWindowStation);
    }
  }
  if ( (PVOID)dword_1001FB0C == v3
    || (PVOID)dword_1001FB10 == v3
    || (v11 = (int (*)(void))_decode_pointer((void *)dword_1001FB0C),
        v12 = _decode_pointer((void *)dword_1001FB10),
        v13 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v12,
        v11 == nullptr)
    || v12 == nullptr
    || (v14 = v11()) != 0 && v13(v14, 1, v19, 12, v20) != 0 && (v19[8] & 1) != 0 )
  {
    if ( (PVOID)dword_1001FB04 != v3 )
    {
      v15 = (int (*)(void))_decode_pointer((void *)dword_1001FB04);
      if ( v15 != nullptr )
      {
        v21 = v15();
        if ( v21 != 0 && (PVOID)dword_1001FB08 != v3 )
        {
          v16 = (int (__stdcall *)(int))_decode_pointer((void *)dword_1001FB08);
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
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_1001FB00);
  if ( v17 != nullptr )
    return v17(v21, a1, a2, a3);
  return 0;
}

// Address: 0x1000F9FE
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

// Address: 0x1000FA72
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

// Address: 0x1000FB27
int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_1001F140;
      dword_1001F140 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_1001F140;
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x1000FB72
int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // esi
  int *v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  _lock(1);
  for ( i = 3; i < dword_10020D20; ++i )
  {
    v1 = 4 * i;
    v2 = (int *)((char *)dword_1001FD00 + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 && fclose((FILE *)v3) != -1 )
        ++v5;
      if ( i >= 20 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_1001FD00 + v1) + 32));
        free(*(void **)((char *)dword_1001FD00 + v1));
        *(_DWORD *)((char *)dword_1001FD00 + v1) = 0;
      }
    }
  }
  _unlock(1);
  return v5;
}

// Address: 0x1000FC11
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

// Address: 0x1000FC79
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

// Address: 0x1000FCC1
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
  for ( i = 0; i < dword_10020D20; ++i )
  {
    v2 = (int *)((char *)dword_1001FD00 + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 )
      {
        _lock_file2(i, v3);
        v4 = *(_DWORD *)(*((_DWORD *)dword_1001FD00 + i) + 12);
        if ( (v4 & 0x83) != 0 )
        {
          if ( a1 == 1 )
          {
            if ( _fflush_nolock(*((FILE **)dword_1001FD00 + i)) != -1 )
              ++v7;
          }
          else if ( a1 == 0 && (v4 & 2) != 0 && _fflush_nolock(*((FILE **)dword_1001FD00 + i)) == -1 )
          {
            v6 = -1;
          }
        }
        _unlock_file2(i, *((_DWORD *)dword_1001FD00 + i));
      }
    }
  }
  _unlock(1);
  result = v7;
  if ( a1 != 1 )
    return v6;
  return result;
}

// Address: 0x1000FD9B
int sub_1000FD9B()
{
  return flsall(1);
}

// Address: 0x1000FDA4
void __cdecl _freea(void *Memory)
{
  if ( Memory != nullptr && *((_DWORD *)Memory - 2) == 56797 )
    free((char *)Memory - 8);
}

// Address: 0x1000FDC4
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
  if ( dword_1001FB14 == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &SrcStr, 1, nullptr, 0) != 0 )
    {
      dword_1001FB14 = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_1001FB14 = 2;
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
  if ( dword_1001FB14 != 2 && dword_1001FB14 != 0 )
  {
    if ( dword_1001FB14 == 1 )
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

// Address: 0x10010169
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

// Address: 0x100101AE
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

  v8 = dword_1001FB18;
  v9 = nullptr;
  v10 = v7;
  if ( dword_1001FB18 == 0 )
  {
    if ( GetStringTypeW(1u, &SrcStr, 1, CharType) )
    {
      dword_1001FB18 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v8 = 2;
      dword_1001FB18 = 2;
    }
    else
    {
      v8 = dword_1001FB18;
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

// Address: 0x10010368
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

// Address: 0x100103AA
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

// Address: 0x1001053F
void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)a1 != off_1001EDD8 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_1001EDDC )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_1001EDE0 )
      free(v1);
  }
}

// Address: 0x10010584
void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_1001EDE4 )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_1001EDE8 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_1001EDEC )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_1001EDF0 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_1001EDF4 )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_1001EDF8 )
      free(*(void **)(a1 + 32));
    v1 = *(void **)(a1 + 36);
    if ( v1 != off_1001EDFC )
      free(v1);
  }
}

// Address: 0x10010620
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

// Address: 0x10010670
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

// Address: 0x100106B0
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

// Address: 0x10010768
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

// Address: 0x100107BB
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x100107D3
// Microsoft VisualC 2-14/net runtime
BOOL __cdecl unknown_libname_2(int a1)
{
  return a1 != 0;
}

// Address: 0x100107E5
void __cdecl __noreturn abort()
{
  int v0; // esi
  PVOID v1; // eax
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
  PVOID v16; // [esp+10Ch] [ebp-220h]
  int v17; // [esp+110h] [ebp-21Ch]
  void *v18; // [esp+114h] [ebp-218h]
  __int16 v19; // [esp+118h] [ebp-214h]
  unsigned int v20; // [esp+11Ch] [ebp-210h]
  void **v21; // [esp+120h] [ebp-20Ch]
  __int16 v22; // [esp+124h] [ebp-208h]
  int savedregs; // [esp+32Ch] [ebp+0h]
  void *retaddr; // [esp+330h] [ebp+4h] BYREF

  if ( (byte_1001EE20 & 1) != 0 )
    _NMSG_WRITE(10);
  v1 = sub_1000E802();
  if ( v1 != nullptr )
  {
    v1 = (PVOID)raise(22);
    v3 = v5;
  }
  if ( (byte_1001EE20 & 2) != 0 )
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

// Address: 0x100108FC
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x1001091C
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

// Address: 0x10010961
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

// Address: 0x100109E5
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

// Address: 0x10010A08
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x10010A1C);
}

// Address: 0x10010A11
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_1001EE2C = a3;
  unk_1001EE28 = result;
  unk_1001EE30 = a2;
  return result;
}

// Address: 0x10010A30
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x10010A40
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x10010A74
int __cdecl atol(const char *String)
{
  return strtol(String, nullptr, 10);
}

// Address: 0x10010A8A
int _fptrap()
{
  return _amsg_exit(2);
}

// Address: 0x10010A93
int __cdecl _free_osfhnd(int a1)
{
  int *v1; // edi
  int v2; // esi
  _DWORD *v3; // eax

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = &dword_1001FC00[a1 >> 5], v2 = (a1 & 0x1F) << 6, ((v3 = (_DWORD *)(v2 + *v1))[1] & 1) == 0)
    || *v3 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_1001F144 == 1 )
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

// Address: 0x10010B19
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
         && ((v2 = (intptr_t *)(dword_1001FC00[FileHandle >> 5] + ((FileHandle & 0x1F) << 6)))[1] & 1) != 0 )
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

// Address: 0x10010B90
BOOL __cdecl __lock_fhandle(int a1)
{
  int v1; // esi
  BOOL inited; // [esp+10h] [ebp-1Ch]

  v1 = dword_1001FC00[a1 >> 5] + ((a1 & 0x1F) << 6);
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
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_1001FC00[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
  return inited;
}

// Address: 0x10010C30
void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_1001FC00[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}

// Address: 0x10010C57
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( dword_1001EE40 == 0 )
    goto LABEL_10;
  if ( hConsoleOutput == (HANDLE)-2 )
    __initconout();
  if ( hConsoleOutput == (HANDLE)-1 )
    return -1;
  if ( !WriteConsoleW(hConsoleOutput, &Character, 1u, &NumberOfCharsWritten, nullptr) )
  {
    if ( dword_1001EE40 != 2 || GetLastError() != 120 )
      return -1;
    dword_1001EE40 = 0;
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP();
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, &Character, 1, MultiByteStr, 5, nullptr, nullptr);
    if ( hConsoleOutput != (HANDLE)-1 && WriteConsoleA(hConsoleOutput, MultiByteStr, v3, &NumberOfCharsWritten, nullptr) )
      return Character;
    return -1;
  }
  dword_1001EE40 = 1;
  return Character;
}

// Address: 0x10010D20
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

// Address: 0x10010D4B
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
    && (FileHandle != (FILE *)(sub_1000BA9B() + 8) && FileHandle != (FILE *)(sub_1000BA9B() + 16)
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
        v10 = &unk_1001EC68;
      else
        v10 = (_BYTE *)(dword_1001FC00[FileHandlea >> 5] + ((FileHandlea & 0x1F) << 6));
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

// Address: 0x10010EC1
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

// Address: 0x1001102D
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x1001104A
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

// Address: 0x10011279
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_1001F960 != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_1001EC60, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x100112A4
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

// Address: 0x1001131B
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

// Address: 0x10011397
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
    || (v2 = &dword_1001FC00[FileHandle >> 5], (*(_BYTE *)((v3 = (FileHandle & 0x1F) << 6) + *v2 + 4) & 1) == 0) )
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

// Address: 0x10011478
int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0;
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) != 0 )
    return atol(LCData);
  else
    return -1;
}

// Address: 0x100114C1
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

// Address: 0x10011680
void *__usercall _alloca_probe_16@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 0xF;
  return _alloca_probe(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}

// Address: 0x10011696
void *__usercall _alloca_probe_8@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 7;
  return _alloca_probe(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}

// Address: 0x100116AC
HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  hConsoleOutput = result;
  return result;
}

// Address: 0x100116CB
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 )
    CloseHandle(hConsoleOutput);
  result = dword_1001EF00;
  if ( dword_1001EF00 != (HANDLE)-1 && dword_1001EF00 != (HANDLE)-2 )
    return (HANDLE)CloseHandle(dword_1001EF00);
  return result;
}

// Address: 0x100116F8
int __cdecl _close_nolock(int FileHandle)
{
  intptr_t osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_1001FC00[0] + 132) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_1001FC00[0] + 68) & 1) != 0)
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
  *(_BYTE *)(dword_1001FC00[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) = 0;
  if ( LastError == 0 )
    return 0;
  _dosmaperr(LastError);
  return -1;
}

// Address: 0x10011794
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
    || (v2 = &dword_1001FC00[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v2 + v3 + 4) & 1) == 0) )
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

// Address: 0x10011861
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

// Address: 0x100118A0
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

// Address: 0x10011910
// positive sp value has been detected, the output may be wrong!
int __fastcall found_bx(int a1, int a2)
{
  return a2 - 1;
}

// Address: 0x10011926
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

// Address: 0x100119E0
int __cdecl sub_100119E0(int a1, int *a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax
  int v6; // esi
  int v7; // [esp+4h] [ebp-38h] BYREF
  int v8; // [esp+8h] [ebp-34h]
  int v9; // [esp+10h] [ebp-2Ch]
  int v10; // [esp+14h] [ebp-28h]
  int v11; // [esp+18h] [ebp-24h]
  int v12; // [esp+24h] [ebp-18h]
  int v13; // [esp+28h] [ebp-14h]

  v8 = a4;
  v7 = a3;
  v4 = *a2;
  v9 = a1;
  v10 = v4;
  v12 = 0;
  v13 = 0;
  result = sub_10011BC0(&v7, "1.2.3", 56);
  if ( result == 0 )
  {
    v6 = sub_10011CF0(&v7, 4);
    if ( v6 == 1 )
    {
      *a2 = v11;
      return sub_100131F0(&v7);
    }
    else
    {
      sub_100131F0(&v7);
      if ( v6 == 2 || v6 == -5 && v8 == 0 )
        return -3;
      else
        return v6;
    }
  }
  return result;
}

// Address: 0x10011A90
int __cdecl sub_10011A90(_DWORD *a1)
{
  _DWORD *v1; // eax

  if ( a1 == nullptr )
    return -2;
  v1 = (_DWORD *)a1[7];
  if ( v1 == nullptr )
    return -2;
  v1[7] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[6] = 0;
  a1[12] = 1;
  *v1 = 0;
  v1[1] = 0;
  v1[3] = 0;
  v1[8] = 0;
  v1[10] = 0;
  v1[11] = 0;
  v1[12] = 0;
  v1[14] = 0;
  v1[15] = 0;
  v1[5] = 0x8000;
  v1[27] = v1 + 332;
  v1[20] = v1 + 332;
  v1[19] = v1 + 332;
  return 0;
}

// Address: 0x10011AF0
int __cdecl sub_10011AF0(_DWORD *a1, int a2, _BYTE *a3, int a4)
{
  _DWORD *v4; // eax
  int v6; // ecx

  if ( a3 == nullptr || *a3 != 49 || a4 != 56 )
    return -6;
  if ( a1 != nullptr )
  {
    a1[6] = 0;
    if ( a1[8] == 0 )
    {
      a1[8] = sub_10013240;
      a1[10] = 0;
    }
    if ( a1[9] == 0 )
      a1[9] = sub_10013260;
    v4 = (_DWORD *)((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[10], 1, 9520);
    if ( v4 == nullptr )
      return -4;
    v6 = a2;
    a1[7] = v4;
    if ( a2 >= 0 )
    {
      v4[2] = (a2 >> 4) + 1;
      if ( a2 < 48 )
        v6 = a2 & 0xF;
    }
    else
    {
      v4[2] = 0;
      v6 = -a2;
    }
    if ( (unsigned int)(v6 - 8) <= 7 )
    {
      v4[9] = v6;
      v4[13] = 0;
      return sub_10011A90(a1);
    }
    ((void (__cdecl *)(_DWORD, _DWORD *))a1[9])(a1[10], v4);
    a1[7] = 0;
  }
  return -2;
}

// Address: 0x10011BC0
int __cdecl sub_10011BC0(_DWORD *a1, _BYTE *a2, int a3)
{
  return sub_10011AF0(a1, 15, a2, a3);
}

// Address: 0x10011BE0
_DWORD *__usercall sub_10011BE0@<eax>(_DWORD *result@<eax>)
{
  result[19] = "`\a";
  result[21] = 9;
  result[20] = &unk_10017448;
  result[22] = 5;
  return result;
}

// Address: 0x10011C00
int __usercall sub_10011C00@<eax>(int a1@<eax>, int a2@<ebx>)
{
  int v2; // esi
  int v4; // eax
  int v6; // ecx
  size_t v7; // edi
  size_t v8; // eax
  int v9; // eax
  size_t v10; // ebp
  size_t v11; // edi
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx

  v2 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v2 + 52) == 0 )
  {
    v4 = (*(int (__cdecl **)(_DWORD, int, int))(a2 + 32))(*(_DWORD *)(a2 + 40), 1 << *(_DWORD *)(v2 + 36), 1);
    *(_DWORD *)(v2 + 52) = v4;
    if ( v4 == 0 )
      return 1;
  }
  if ( *(_DWORD *)(v2 + 40) == 0 )
  {
    v6 = *(_DWORD *)(v2 + 36);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 40) = 1 << v6;
  }
  v7 = a1 - *(_DWORD *)(a2 + 16);
  v8 = *(_DWORD *)(v2 + 40);
  if ( v7 < v8 )
  {
    v10 = v8 - *(_DWORD *)(v2 + 48);
    if ( v10 > v7 )
      v10 = v7;
    memcpy_0((void *)(*(_DWORD *)(v2 + 48) + *(_DWORD *)(v2 + 52)), (const void *)(*(_DWORD *)(a2 + 12) - v7), v10);
    v11 = v7 - v10;
    if ( v11 != 0 )
    {
      memcpy_0(*(void **)(v2 + 52), (const void *)(*(_DWORD *)(a2 + 12) - v11), v11);
      v12 = *(_DWORD *)(v2 + 40);
      *(_DWORD *)(v2 + 48) = v11;
      *(_DWORD *)(v2 + 44) = v12;
      return 0;
    }
    else
    {
      *(_DWORD *)(v2 + 48) += v10;
      v13 = *(_DWORD *)(v2 + 40);
      if ( *(_DWORD *)(v2 + 48) == v13 )
        *(_DWORD *)(v2 + 48) = 0;
      v14 = *(_DWORD *)(v2 + 44);
      if ( v14 < v13 )
        *(_DWORD *)(v2 + 44) = v10 + v14;
      return 0;
    }
  }
  else
  {
    memcpy_0(*(void **)(v2 + 52), (const void *)(*(_DWORD *)(a2 + 12) - v8), *(_DWORD *)(v2 + 40));
    v9 = *(_DWORD *)(v2 + 40);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 44) = v9;
    return 0;
  }
}

// Address: 0x10011CF0
int __cdecl sub_10011CF0(int a1, int a2)
{
  int *v2; // edi
  unsigned int v3; // edx
  unsigned int v4; // ebx
  unsigned __int8 *v5; // ebp
  int v6; // eax
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  size_t v26; // eax
  int v27; // ecx
  unsigned int v28; // edx
  int v29; // eax
  size_t v30; // eax
  int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // eax
  size_t v36; // eax
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  char v50; // cl
  unsigned int v51; // ebx
  unsigned int v52; // esi
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  size_t v56; // eax
  int v57; // eax
  int v58; // ecx
  unsigned int v59; // ebx
  char v60; // al
  unsigned int v61; // eax
  int v62; // ecx
  bool v63; // cc
  int v64; // eax
  int v65; // eax
  unsigned int v66; // eax
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  int v73; // ecx
  int v74; // eax
  unsigned int v75; // ebx
  int v76; // eax
  int v77; // eax
  unsigned int v78; // ebx
  __int16 v79; // ax
  int v80; // ecx
  int v81; // eax
  void *v82; // ecx
  int v83; // edx
  unsigned int v84; // eax
  size_t v85; // eax
  int v86; // eax
  int v87; // eax
  unsigned int v88; // eax
  int v89; // eax
  int v90; // ecx
  size_t v91; // eax
  int v92; // eax
  int v93; // eax
  unsigned int v94; // eax
  int v95; // eax
  int v96; // ecx
  unsigned int v97; // eax
  size_t v98; // eax
  size_t v99; // ecx
  int v100; // ecx
  size_t v101; // ecx
  char *v102; // ecx
  int v103; // ecx
  _BYTE *v104; // eax
  char v105; // cl
  bool v106; // zf
  char *v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int result; // eax
  unsigned int v114; // ebp
  int v115; // ebx
  int v116; // eax
  int v117; // [esp-1Ch] [ebp-4Ch]
  int v118; // [esp-18h] [ebp-48h]
  char *v119; // [esp-14h] [ebp-44h]
  unsigned int v120; // [esp+4h] [ebp-2Ch]
  size_t Size; // [esp+8h] [ebp-28h]
  size_t Sizea; // [esp+8h] [ebp-28h]
  size_t Sizeb; // [esp+8h] [ebp-28h]
  size_t Sizec; // [esp+8h] [ebp-28h]
  size_t Sized; // [esp+8h] [ebp-28h]
  size_t Sizee; // [esp+8h] [ebp-28h]
  size_t Sizef; // [esp+8h] [ebp-28h]
  size_t Sizeg; // [esp+8h] [ebp-28h]
  size_t Sizeh; // [esp+8h] [ebp-28h]
  size_t Sizei; // [esp+8h] [ebp-28h]
  size_t Sizej; // [esp+8h] [ebp-28h]
  unsigned int v132; // [esp+Ch] [ebp-24h]
  unsigned int v133; // [esp+10h] [ebp-20h] BYREF
  int v134; // [esp+14h] [ebp-1Ch]
  void *v135; // [esp+18h] [ebp-18h]
  int v136; // [esp+1Ch] [ebp-14h]
  int v137; // [esp+20h] [ebp-10h]
  int v138; // [esp+24h] [ebp-Ch]
  size_t v139; // [esp+28h] [ebp-8h]
  unsigned int v140; // [esp+2Ch] [ebp-4h]

  if ( a1 == 0 )
    return -2;
  v2 = *(int **)(a1 + 28);
  if ( v2 == nullptr || *(_DWORD *)(a1 + 12) == 0 || *(_DWORD *)a1 == 0 && *(_DWORD *)(a1 + 4) != 0 )
    return -2;
  if ( *v2 == 11 )
    *v2 = 12;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = v2[14];
  v5 = *(unsigned __int8 **)a1;
  v135 = *(void **)(a1 + 12);
  v6 = *v2;
  v7 = v2[15];
  v132 = *(_DWORD *)(a1 + 16);
  v120 = v3;
  v140 = v3;
  v136 = v132;
  v138 = 0;
  while ( 2 )
  {
    switch ( v6 )
    {
      case 0:
        if ( v2[2] == 0 )
        {
          *v2 = 12;
          goto LABEL_293;
        }
        for ( ; v7 < 0x10; v120 = v3 )
        {
          if ( v3 == 0 )
            goto LABEL_301;
          v8 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v8;
        }
        if ( (v2[2] & 2) != 0 && v4 == 35615 )
        {
          v2[6] = sub_10014110(0, 0, 0);
          LOWORD(v133) = -29921;
          v9 = sub_10014110(v2[6], &v133, 2);
          v3 = v120;
          v4 = 0;
          v2[6] = v9;
          v7 = 0;
          *v2 = 1;
          goto LABEL_293;
        }
        v10 = v2[8];
        v2[4] = 0;
        if ( v10 != 0 )
          *(_DWORD *)(v10 + 48) = -1;
        if ( (v2[2] & 1) == 0 || ((v4 >> 8) + ((unsigned __int8)v4 << 8)) % 0x1F != 0 )
        {
          *(_DWORD *)(a1 + 24) = "incorrect header check";
          v3 = v120;
          goto LABEL_292;
        }
        if ( (v4 & 0xF) != 8 )
        {
          v3 = v120;
          *(_DWORD *)(a1 + 24) = "unknown compression method";
          goto LABEL_292;
        }
        v4 >>= 4;
        v11 = (v4 & 0xF) + 8;
        v7 -= 4;
        if ( v11 > v2[9] )
        {
          v3 = v120;
          *(_DWORD *)(a1 + 24) = "invalid window size";
          goto LABEL_292;
        }
        v2[5] = 1 << v11;
        v12 = sub_10013BC0(0, 0, 0);
        v3 = v120;
        v2[6] = v12;
        *(_DWORD *)(a1 + 48) = v12;
        *v2 = ~BYTE1(v4) & 2 | 9;
        v4 = 0;
        v7 = 0;
        goto LABEL_293;
      case 1:
        for ( ; v7 < 0x10; v120 = v3 )
        {
          if ( v3 == 0 )
            goto LABEL_301;
          v13 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v13;
        }
        v2[4] = v4;
        if ( (_BYTE)v4 != 8 )
        {
          *(_DWORD *)(a1 + 24) = "unknown compression method";
          goto LABEL_292;
        }
        if ( (v4 & 0xE000) != 0 )
        {
          *(_DWORD *)(a1 + 24) = "unknown header flags set";
          goto LABEL_292;
        }
        v14 = (_DWORD *)v2[8];
        if ( v14 != nullptr )
          *v14 = (v4 & 0x100) != 0;
        if ( (v2[4] & 0x200) != 0 )
        {
          LOBYTE(v133) = 8;
          BYTE1(v133) = BYTE1(v4);
          v15 = sub_10014110(v2[6], &v133, 2);
          v3 = v120;
          v2[6] = v15;
        }
        v4 = 0;
        v7 = 0;
        *v2 = 2;
        do
        {
LABEL_41:
          if ( v3 == 0 )
            goto LABEL_301;
          v16 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v16;
          v120 = v3;
        }
        while ( v7 < 0x20 );
LABEL_43:
        v17 = v2[8];
        if ( v17 != 0 )
          *(_DWORD *)(v17 + 4) = v4;
        if ( (v2[4] & 0x200) != 0 )
        {
          v133 = v4;
          v18 = sub_10014110(v2[6], &v133, 4);
          v3 = v120;
          v2[6] = v18;
        }
        v4 = 0;
        v7 = 0;
        *v2 = 3;
        do
        {
LABEL_49:
          if ( v3 == 0 )
            goto LABEL_301;
          v19 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v19;
          v120 = v3;
        }
        while ( v7 < 0x10 );
LABEL_51:
        v20 = v2[8];
        if ( v20 != 0 )
        {
          *(_DWORD *)(v20 + 8) = (unsigned __int8)v4;
          *(_DWORD *)(v2[8] + 12) = v4 >> 8;
        }
        if ( (v2[4] & 0x200) != 0 )
        {
          LOWORD(v133) = v4;
          v21 = sub_10014110(v2[6], &v133, 2);
          v3 = v120;
          v2[6] = v21;
        }
        v4 = 0;
        v7 = 0;
        *v2 = 4;
LABEL_56:
        if ( (v2[4] & 0x400) != 0 )
        {
          if ( v7 < 0x10 )
          {
            while ( v3 != 0 )
            {
              v22 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v22;
              v120 = v3;
              if ( v7 >= 0x10 )
                goto LABEL_60;
            }
            goto LABEL_301;
          }
LABEL_60:
          v23 = v2[8];
          v2[16] = v4;
          if ( v23 != 0 )
            *(_DWORD *)(v23 + 20) = v4;
          if ( (v2[4] & 0x200) != 0 )
          {
            LOWORD(v133) = v4;
            v24 = sub_10014110(v2[6], &v133, 2);
            v3 = v120;
            v2[6] = v24;
          }
          v4 = 0;
          v7 = 0;
        }
        else
        {
          v25 = v2[8];
          if ( v25 != 0 )
            *(_DWORD *)(v25 + 16) = 0;
        }
        *v2 = 5;
LABEL_68:
        if ( (v2[4] & 0x400) != 0 )
        {
          v26 = v2[16];
          Size = v26;
          if ( v26 > v3 )
          {
            v26 = v3;
            Size = v3;
          }
          if ( v26 != 0 )
          {
            v27 = v2[8];
            if ( v27 != 0 )
            {
              v139 = *(_DWORD *)(v27 + 16);
              if ( v139 != 0 )
              {
                v28 = *(_DWORD *)(v2[8] + 24);
                v134 = *(_DWORD *)(v2[8] + 20) - v2[16];
                if ( v26 + v134 > v28 )
                  v26 = v28 - v134;
                memcpy_0((void *)(v134 + v139), v5, v26);
                v26 = Size;
                v3 = v120;
              }
            }
            if ( (v2[4] & 0x200) != 0 )
            {
              v29 = sub_10014110(v2[6], v5, Size);
              v3 = v120;
              v2[6] = v29;
              v26 = Size;
            }
            v3 -= v26;
            v5 += v26;
            v2[16] -= v26;
            v120 = v3;
          }
          if ( v2[16] != 0 )
            goto LABEL_301;
        }
        v2[16] = 0;
        *v2 = 6;
LABEL_82:
        if ( (v2[4] & 0x800) != 0 )
        {
          if ( v3 == 0 )
            goto LABEL_301;
          v30 = 0;
          do
          {
            v31 = v5[v30];
            Sizea = v30 + 1;
            v32 = v2[8];
            v134 = v31;
            if ( v32 != 0 )
            {
              v139 = *(_DWORD *)(v32 + 28);
              if ( v139 != 0 )
              {
                v33 = v2[16];
                if ( v33 < *(_DWORD *)(v32 + 32) )
                {
                  *(_BYTE *)(v139 + v33) = v134;
                  ++v2[16];
                  v3 = v120;
                }
              }
            }
            if ( v134 == 0 )
              break;
            v30 = Sizea;
          }
          while ( Sizea < v3 );
          if ( (v2[4] & 0x200) != 0 )
          {
            v34 = sub_10014110(v2[6], v5, Sizea);
            v3 = v120;
            v2[6] = v34;
          }
          v3 -= Sizea;
          v5 += Sizea;
          v120 = v3;
          if ( v134 != 0 )
            goto LABEL_301;
        }
        else
        {
          v35 = v2[8];
          if ( v35 != 0 )
            *(_DWORD *)(v35 + 28) = 0;
        }
        v2[16] = 0;
        *v2 = 7;
LABEL_98:
        if ( (v2[4] & 0x1000) != 0 )
        {
          if ( v3 == 0 )
            goto LABEL_301;
          v36 = 0;
          do
          {
            v37 = v5[v36];
            Sizeb = v36 + 1;
            v38 = v2[8];
            v134 = v37;
            if ( v38 != 0 )
            {
              v139 = *(_DWORD *)(v38 + 36);
              if ( v139 != 0 )
              {
                v39 = v2[16];
                if ( v39 < *(_DWORD *)(v38 + 40) )
                {
                  *(_BYTE *)(v139 + v39) = v134;
                  ++v2[16];
                  v3 = v120;
                }
              }
            }
            if ( v134 == 0 )
              break;
            v36 = Sizeb;
          }
          while ( Sizeb < v3 );
          if ( (v2[4] & 0x200) != 0 )
          {
            v40 = sub_10014110(v2[6], v5, Sizeb);
            v3 = v120;
            v2[6] = v40;
          }
          v3 -= Sizeb;
          v5 += Sizeb;
          v120 = v3;
          if ( v134 != 0 )
            goto LABEL_301;
        }
        else
        {
          v41 = v2[8];
          if ( v41 != 0 )
            *(_DWORD *)(v41 + 36) = 0;
        }
        *v2 = 8;
LABEL_114:
        if ( (v2[4] & 0x200) != 0 )
        {
          if ( v7 < 0x10 )
          {
            while ( v3 != 0 )
            {
              v42 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v42;
              v120 = v3;
              if ( v7 >= 0x10 )
                goto LABEL_118;
            }
            goto LABEL_301;
          }
LABEL_118:
          if ( v4 != *((unsigned __int16 *)v2 + 12) )
          {
            *(_DWORD *)(a1 + 24) = "header crc mismatch";
            goto LABEL_292;
          }
          v4 = 0;
          v7 = 0;
        }
        v43 = v2[8];
        if ( v43 != 0 )
        {
          *(_DWORD *)(v43 + 44) = (v2[4] >> 9) & 1;
          *(_DWORD *)(v2[8] + 48) = 1;
        }
        v44 = sub_10014110(0, 0, 0);
        v3 = v120;
        v2[6] = v44;
        *(_DWORD *)(a1 + 48) = v44;
        *v2 = 11;
        goto LABEL_293;
      case 2:
        if ( v7 < 0x20 )
          goto LABEL_41;
        goto LABEL_43;
      case 3:
        if ( v7 < 0x10 )
          goto LABEL_49;
        goto LABEL_51;
      case 4:
        goto LABEL_56;
      case 5:
        goto LABEL_68;
      case 6:
        goto LABEL_82;
      case 7:
        goto LABEL_98;
      case 8:
        goto LABEL_114;
      case 9:
        for ( ; v7 < 0x20; v120 = v3 )
        {
          if ( v3 == 0 )
            goto LABEL_301;
          v45 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v45;
        }
        v46 = ((v4 >> 8) & 0xFF00) + (((v4 << 16) + (v4 & 0xFF00)) << 8) + HIBYTE(v4);
        v2[6] = v46;
        *(_DWORD *)(a1 + 48) = v46;
        v4 = 0;
        v7 = 0;
        *v2 = 10;
LABEL_128:
        if ( v2[3] == 0 )
        {
          *(_DWORD *)(a1 + 12) = v135;
          *(_DWORD *)a1 = v5;
          *(_DWORD *)(a1 + 16) = v132;
          *(_DWORD *)(a1 + 4) = v3;
          v2[15] = v7;
          v2[14] = v4;
          return 2;
        }
        v47 = sub_10013BC0(0, 0, 0);
        v2[6] = v47;
        *(_DWORD *)(a1 + 48) = v47;
        v3 = v120;
        *v2 = 11;
LABEL_130:
        if ( a2 == 5 )
          goto LABEL_301;
LABEL_131:
        if ( v2[1] != 0 )
        {
          v48 = v7 & 7;
          v4 >>= v48;
          v7 -= v48;
          *v2 = 24;
        }
        else
        {
          if ( v7 < 3 )
          {
            while ( v3 != 0 )
            {
              v49 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v49;
              v120 = v3;
              if ( v7 >= 3 )
                goto LABEL_136;
            }
            goto LABEL_301;
          }
LABEL_136:
          v50 = v4;
          v51 = v4 >> 1;
          v52 = v7 - 1;
          v2[1] = v50 & 1;
          switch ( v51 & 3 )
          {
            case 0u:
              v4 = v51 >> 2;
              *v2 = 13;
              v7 = v52 - 2;
              break;
            case 1u:
              sub_10011BE0(v2);
              v4 = v51 >> 2;
              *v2 = 18;
              v7 = v52 - 2;
              break;
            case 2u:
              v4 = v51 >> 2;
              *v2 = 15;
              v7 = v52 - 2;
              break;
            case 3u:
              *(_DWORD *)(a1 + 24) = "invalid block type";
              *v2 = 27;
              v4 = v51 >> 2;
              v7 = v52 - 2;
              break;
          }
        }
        goto LABEL_293;
      case 10:
        goto LABEL_128;
      case 11:
        goto LABEL_130;
      case 12:
        goto LABEL_131;
      case 13:
        v53 = v7 & 7;
        v7 -= v53;
        for ( v4 >>= v53; v7 < 0x20; v120 = v3 )
        {
          if ( v3 == 0 )
            goto LABEL_301;
          v54 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v54;
        }
        v55 = (unsigned __int16)v4;
        if ( (unsigned __int16)v4 != ~v4 >> 16 )
        {
          *(_DWORD *)(a1 + 24) = "invalid stored block lengths";
          goto LABEL_292;
        }
        v4 = 0;
        v2[16] = v55;
        v7 = 0;
        *v2 = 14;
LABEL_147:
        v56 = v2[16];
        Sizec = v56;
        if ( v56 == 0 )
          goto LABEL_224;
        if ( v56 > v3 )
        {
          v56 = v3;
          Sizec = v3;
        }
        if ( v56 > v132 )
        {
          v56 = v132;
          Sizec = v132;
        }
        if ( v56 == 0 )
          goto LABEL_301;
        memcpy_0(v135, v5, Sizec);
        v120 -= Sizec;
        v132 -= Sizec;
        v135 = (char *)v135 + Sizec;
        v3 = v120;
        v5 += Sizec;
        v2[16] -= Sizec;
        goto LABEL_293;
      case 14:
        goto LABEL_147;
      case 15:
        for ( ; v7 < 0xE; v120 = v3 )
        {
          if ( v3 == 0 )
            goto LABEL_301;
          v57 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v57;
        }
        v58 = v4 & 0x1F;
        v59 = v4 >> 5;
        v60 = v59;
        v2[24] = v58 + 257;
        v59 >>= 5;
        v61 = (v60 & 0x1F) + 1;
        v62 = (v59 & 0xF) + 4;
        v4 = v59 >> 4;
        v7 -= 14;
        v63 = (unsigned int)v2[24] <= 0x11E;
        v2[25] = v61;
        v2[23] = v62;
        if ( !v63 || v61 > 0x1E )
        {
          *(_DWORD *)(a1 + 24) = "too many length or distance symbols";
          goto LABEL_292;
        }
        v2[26] = 0;
        *v2 = 16;
LABEL_160:
        if ( v2[26] < (unsigned int)v2[23] )
        {
          while ( v7 >= 3 )
          {
LABEL_164:
            *((_WORD *)v2 + (unsigned __int16)word_100174C8[v2[26]++] + 56) = v4 & 7;
            v4 >>= 3;
            v7 -= 3;
            if ( v2[26] >= (unsigned int)v2[23] )
              goto LABEL_165;
          }
          while ( v3 != 0 )
          {
            v64 = *v5 << v7;
            --v3;
            v7 += 8;
            ++v5;
            v4 += v64;
            v120 = v3;
            if ( v7 >= 3 )
              goto LABEL_164;
          }
          goto LABEL_301;
        }
LABEL_165:
        while ( (unsigned int)v2[26] < 0x13 )
          *((_WORD *)v2 + (unsigned __int16)word_100174C8[v2[26]++] + 56) = 0;
        v2[27] = (int)(v2 + 332);
        v2[19] = (int)(v2 + 332);
        v2[21] = 7;
        v65 = sub_100136D0(0, v2 + 28, 19, v2 + 27, v2 + 21, v2 + 188);
        v3 = v120;
        v138 = v65;
        if ( v65 != 0 )
        {
          *(_DWORD *)(a1 + 24) = "invalid code lengths set";
          goto LABEL_292;
        }
        v2[26] = 0;
        *v2 = 17;
LABEL_171:
        if ( v2[26] < (unsigned int)(v2[24] + v2[25]) )
        {
          while ( 1 )
          {
            v66 = *(_DWORD *)(v2[19] + 4 * (v4 & ((1 << v2[21]) - 1)));
            Sized = v66;
            if ( BYTE1(v66) > v7 )
              break;
LABEL_175:
            if ( HIWORD(v66) >= 0x10u )
            {
              if ( HIWORD(Sized) == 16 )
              {
                v68 = BYTE1(v66);
                v137 = BYTE1(v66);
                if ( v7 < (unsigned int)BYTE1(v66) + 2 )
                {
                  while ( v3 != 0 )
                  {
                    v69 = *v5 << v7;
                    v68 = v137;
                    --v3;
                    v7 += 8;
                    v4 += v69;
                    ++v5;
                    v120 = v3;
                    if ( v7 >= v137 + 2 )
                      goto LABEL_184;
                  }
                  goto LABEL_301;
                }
LABEL_184:
                v70 = v2[26];
                v4 >>= v68;
                v7 -= v68;
                if ( v70 == 0 )
                {
                  *(_DWORD *)(a1 + 24) = "invalid bit length repeat";
                  goto LABEL_292;
                }
                v71 = *((unsigned __int16 *)v2 + v70 + 55);
                v72 = (v4 & 3) + 3;
                v4 >>= 2;
                v134 = v71;
                Sizee = v72;
                v7 -= 2;
              }
              else
              {
                v73 = BYTE1(v66);
                v137 = BYTE1(v66);
                if ( HIWORD(Sized) == 17 )
                {
                  if ( v7 < (unsigned int)BYTE1(v66) + 3 )
                  {
                    while ( v3 != 0 )
                    {
                      v74 = *v5 << v7;
                      v73 = v137;
                      --v3;
                      v7 += 8;
                      v4 += v74;
                      ++v5;
                      v120 = v3;
                      if ( v7 >= v137 + 3 )
                        goto LABEL_190;
                    }
                    goto LABEL_301;
                  }
LABEL_190:
                  v75 = v4 >> v73;
                  Sizee = (v75 & 7) + 3;
                  v4 = v75 >> 3;
                  v76 = -3;
                }
                else
                {
                  if ( v7 < (unsigned int)BYTE1(v66) + 7 )
                  {
                    while ( v3 != 0 )
                    {
                      v77 = *v5 << v7;
                      v73 = v137;
                      --v3;
                      v7 += 8;
                      v4 += v77;
                      ++v5;
                      v120 = v3;
                      if ( v7 >= v137 + 7 )
                        goto LABEL_194;
                    }
                    goto LABEL_301;
                  }
LABEL_194:
                  v78 = v4 >> v73;
                  Sizee = (v78 & 0x7F) + 11;
                  v4 = v78 >> 7;
                  v76 = -7;
                }
                v7 += v76 - v73;
                v72 = Sizee;
                v134 = 0;
              }
              if ( v72 + v2[26] > (unsigned int)(v2[24] + v2[25]) )
              {
                *(_DWORD *)(a1 + 24) = "invalid bit length repeat";
                goto LABEL_292;
              }
              if ( Sizee != 0 )
              {
                v79 = v134;
                do
                {
                  --Sizee;
                  *((_WORD *)v2 + v2[26]++ + 56) = v79;
                }
                while ( Sizee != 0 );
              }
            }
            else
            {
              if ( v7 < BYTE1(v66) )
              {
                while ( v3 != 0 )
                {
                  v66 = *v5 << v7;
                  --v3;
                  v7 += 8;
                  ++v5;
                  v4 += v66;
                  BYTE1(v66) = BYTE1(Sized);
                  v120 = v3;
                  if ( v7 >= BYTE1(Sized) )
                    goto LABEL_179;
                }
                goto LABEL_301;
              }
LABEL_179:
              v4 >>= SBYTE1(v66);
              v7 -= BYTE1(v66);
              *((_WORD *)v2 + v2[26]++ + 56) = HIWORD(Sized);
            }
            if ( v2[26] >= (unsigned int)(v2[24] + v2[25]) )
              goto LABEL_201;
          }
          while ( v3 != 0 )
          {
            v67 = *v5 << v7;
            --v3;
            v7 += 8;
            v4 += v67;
            ++v5;
            v120 = v3;
            v66 = *(_DWORD *)(v2[19] + 4 * (v4 & ((1 << v2[21]) - 1)));
            Sized = v66;
            if ( BYTE1(v66) <= v7 )
              goto LABEL_175;
          }
          goto LABEL_301;
        }
LABEL_201:
        if ( *v2 == 27 )
          goto LABEL_293;
        v2[27] = (int)(v2 + 332);
        v2[19] = (int)(v2 + 332);
        v117 = v2[24];
        v2[21] = 9;
        v138 = sub_100136D0(1, v2 + 28, v117, v2 + 27, v2 + 21, v2 + 188);
        if ( v138 != 0 )
        {
          v3 = v120;
          *(_DWORD *)(a1 + 24) = "invalid literal/lengths set";
          goto LABEL_292;
        }
        v2[20] = v2[27];
        v80 = v2[24];
        v2[22] = 6;
        v81 = sub_100136D0(2, (char *)v2 + 2 * v80 + 112, v2[25], v2 + 27, v2 + 22, v2 + 188);
        v3 = v120;
        v138 = v81;
        if ( v81 != 0 )
        {
          *(_DWORD *)(a1 + 24) = "invalid distances set";
          goto LABEL_292;
        }
        *v2 = 18;
LABEL_209:
        if ( v3 >= 6 && v132 >= 0x102 )
        {
          v82 = v135;
          *(_DWORD *)(a1 + 16) = v132;
          v83 = v136;
          *(_DWORD *)(a1 + 12) = v82;
          *(_DWORD *)a1 = v5;
          *(_DWORD *)(a1 + 4) = v120;
          v2[14] = v4;
          v2[15] = v7;
          sub_10013270(a1, v83);
          v5 = *(unsigned __int8 **)a1;
          v84 = *(_DWORD *)(a1 + 4);
          v4 = v2[14];
          v7 = v2[15];
          v132 = *(_DWORD *)(a1 + 16);
          v135 = *(void **)(a1 + 12);
          v120 = v84;
          v3 = v84;
          goto LABEL_293;
        }
        v85 = *(_DWORD *)(v2[19] + 4 * (v4 & ((1 << v2[21]) - 1)));
        Sizef = v85;
        if ( BYTE1(v85) > v7 )
        {
          while ( v3 != 0 )
          {
            v86 = *v5 << v7;
            --v3;
            v7 += 8;
            v4 += v86;
            ++v5;
            v120 = v3;
            v85 = *(_DWORD *)(v2[19] + 4 * (v4 & ((1 << v2[21]) - 1)));
            Sizef = v85;
            if ( BYTE1(v85) <= v7 )
              goto LABEL_215;
          }
          goto LABEL_301;
        }
LABEL_215:
        if ( (_BYTE)v85 != 0 && (v85 & 0xF0) == 0 )
        {
          v139 = v85 >> 8;
          v134 = BYTE1(v85);
          v137 = v85;
          Sizeg = *(_DWORD *)(v2[19] + 4 * (HIWORD(Sizef) + ((v4 & ((1 << (BYTE1(v85) + v85)) - 1)) >> SBYTE1(v85))));
          if ( BYTE1(v85) + (unsigned int)BYTE1(Sizeg) > v7 )
          {
            while ( v3 != 0 )
            {
              v87 = *v5 << v7;
              --v3;
              v7 += 8;
              v4 += v87;
              v134 = BYTE1(v137);
              ++v5;
              v120 = v3;
              Sizeg = *(_DWORD *)(v2[19]
                                + 4 * (HIWORD(v137) + ((v4 & ((1 << (BYTE1(v137) + v137)) - 1)) >> SBYTE1(v137))));
              if ( BYTE1(v137) + (unsigned int)BYTE1(Sizeg) <= v7 )
                goto LABEL_220;
            }
            goto LABEL_301;
          }
LABEL_220:
          v85 = Sizeg;
          v4 >>= SBYTE1(v137);
          v7 -= BYTE1(v137);
        }
        v4 >>= SBYTE1(v85);
        v7 -= BYTE1(v85);
        v134 = BYTE1(v85);
        v2[16] = HIWORD(v85);
        if ( (_BYTE)v85 == 0 )
        {
          *v2 = 23;
          goto LABEL_293;
        }
        if ( (v85 & 0x20) != 0 )
        {
LABEL_224:
          *v2 = 11;
          goto LABEL_293;
        }
        if ( (v85 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 24) = "invalid literal/length code";
          goto LABEL_292;
        }
        v2[18] = v85 & 0xF;
        *v2 = 19;
LABEL_228:
        v88 = v2[18];
        if ( v88 != 0 )
        {
          if ( v7 < v88 )
          {
            while ( v3 != 0 )
            {
              v89 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v89;
              v120 = v3;
              if ( v7 >= v2[18] )
                goto LABEL_232;
            }
            goto LABEL_301;
          }
LABEL_232:
          v90 = v2[18];
          v2[16] += v4 & ((1 << v90) - 1);
          v4 >>= v90;
          v7 -= v90;
        }
        *v2 = 20;
LABEL_234:
        v91 = *(_DWORD *)(v2[20] + 4 * (v4 & ((1 << v2[22]) - 1)));
        Sizeh = v91;
        if ( BYTE1(v91) > v7 )
        {
          while ( v3 != 0 )
          {
            v92 = *v5 << v7;
            --v3;
            v7 += 8;
            v4 += v92;
            ++v5;
            v120 = v3;
            v91 = *(_DWORD *)(v2[20] + 4 * (v4 & ((1 << v2[22]) - 1)));
            Sizeh = v91;
            if ( BYTE1(v91) <= v7 )
              goto LABEL_237;
          }
          goto LABEL_301;
        }
LABEL_237:
        if ( (v91 & 0xF0) == 0 )
        {
          v139 = v91 >> 8;
          v134 = BYTE1(v91);
          v137 = v91;
          Sizei = *(_DWORD *)(v2[20] + 4 * (HIWORD(Sizeh) + ((v4 & ((1 << (BYTE1(v91) + v91)) - 1)) >> SBYTE1(v91))));
          if ( BYTE1(v91) + (unsigned int)BYTE1(Sizei) > v7 )
          {
            while ( v3 != 0 )
            {
              v93 = *v5 << v7;
              --v3;
              v7 += 8;
              v4 += v93;
              v134 = BYTE1(v137);
              ++v5;
              v120 = v3;
              Sizei = *(_DWORD *)(v2[20]
                                + 4 * (HIWORD(v137) + ((v4 & ((1 << (BYTE1(v137) + v137)) - 1)) >> SBYTE1(v137))));
              if ( BYTE1(v137) + (unsigned int)BYTE1(Sizei) <= v7 )
                goto LABEL_241;
            }
            goto LABEL_301;
          }
LABEL_241:
          v91 = Sizei;
          v4 >>= SBYTE1(v137);
          v7 -= BYTE1(v137);
        }
        v4 >>= SBYTE1(v91);
        v7 -= BYTE1(v91);
        v134 = BYTE1(v91);
        if ( (v91 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 24) = "invalid distance code";
          goto LABEL_292;
        }
        v2[17] = HIWORD(v91);
        v2[18] = v91 & 0xF;
        *v2 = 21;
LABEL_245:
        v94 = v2[18];
        if ( v94 != 0 )
        {
          if ( v7 < v94 )
          {
            while ( v3 != 0 )
            {
              v95 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v95;
              v120 = v3;
              if ( v7 >= v2[18] )
                goto LABEL_249;
            }
            goto LABEL_301;
          }
LABEL_249:
          v96 = v2[18];
          v2[17] += v4 & ((1 << v96) - 1);
          v4 >>= v96;
          v7 -= v96;
        }
        if ( v2[17] > v136 + v2[11] - v132 )
        {
          *(_DWORD *)(a1 + 24) = "invalid distance too far back";
          goto LABEL_292;
        }
        *v2 = 22;
LABEL_253:
        if ( v132 == 0 )
          goto LABEL_301;
        v97 = v2[17];
        if ( v97 <= v136 - v132 )
        {
          v102 = (char *)v135 - v97;
          v98 = v2[16];
          v137 = (int)v102;
          v139 = v98;
          goto LABEL_261;
        }
        v98 = v97 - (v136 - v132);
        v99 = v2[12];
        Sizej = v98;
        if ( v98 <= v99 )
        {
          v100 = v2[12] + v2[13] - v98;
        }
        else
        {
          v98 -= v99;
          Sizej = v98;
          v100 = v2[10] + v2[13] - v98;
        }
        v137 = v100;
        v101 = v2[16];
        v139 = v101;
        if ( v98 > v101 )
        {
          v98 = v101;
LABEL_261:
          Sizej = v98;
        }
        if ( v98 > v132 )
        {
          v98 = v132;
          Sizej = v132;
        }
        v132 -= v98;
        v103 = v139 - v98;
        v104 = v135;
        v2[16] = v103;
        do
        {
          v105 = *(_BYTE *)v137++;
          *v104++ = v105;
          --Sizej;
        }
        while ( Sizej != 0 );
        v106 = v2[16] == 0;
        v135 = v104;
        if ( v106 )
          *v2 = 18;
        goto LABEL_293;
      case 16:
        goto LABEL_160;
      case 17:
        goto LABEL_171;
      case 18:
        goto LABEL_209;
      case 19:
        goto LABEL_228;
      case 20:
        goto LABEL_234;
      case 21:
        goto LABEL_245;
      case 22:
        goto LABEL_253;
      case 23:
        if ( v132 == 0 )
          goto LABEL_301;
        v107 = (char *)v135;
        *(_BYTE *)v135 = *((_BYTE *)v2 + 64);
        --v132;
        v135 = v107 + 1;
        *v2 = 18;
        goto LABEL_293;
      case 24:
        if ( v2[2] == 0 )
          goto LABEL_284;
        for ( ; v7 < 0x20; v120 = v3 )
        {
          if ( v3 == 0 )
            goto LABEL_301;
          v108 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v108;
        }
        v109 = v136 - v132;
        *(_DWORD *)(a1 + 20) += v136 - v132;
        v2[7] += v109;
        v136 = v109;
        if ( v109 != 0 )
        {
          v119 = (char *)v135 - v109;
          v118 = v2[6];
          if ( v2[4] != 0 )
            v110 = sub_10014110(v118, v119, v109);
          else
            v110 = sub_10013BC0(v118, v119, v109);
          v3 = v120;
          v2[6] = v110;
          *(_DWORD *)(a1 + 48) = v110;
        }
        v106 = v2[4] == 0;
        v136 = v132;
        v111 = v4;
        if ( v106 )
          v111 = HIBYTE(v4) + ((v4 >> 8) & 0xFF00) + (((v4 << 16) + (v4 & 0xFF00)) << 8);
        if ( v111 != v2[6] )
        {
          *(_DWORD *)(a1 + 24) = "incorrect data check";
          goto LABEL_292;
        }
        v4 = 0;
        v7 = 0;
LABEL_284:
        *v2 = 25;
LABEL_285:
        if ( v2[2] == 0 || v2[4] == 0 )
          goto LABEL_298;
        if ( v7 < 0x20 )
        {
          while ( v3 != 0 )
          {
            v112 = *v5 << v7;
            --v3;
            v7 += 8;
            ++v5;
            v4 += v112;
            v120 = v3;
            if ( v7 >= 0x20 )
              goto LABEL_290;
          }
          goto LABEL_301;
        }
LABEL_290:
        if ( v4 != v2[7] )
        {
          *(_DWORD *)(a1 + 24) = "incorrect length check";
LABEL_292:
          *v2 = 27;
LABEL_293:
          v6 = *v2;
          if ( (unsigned int)*v2 > 0x1C )
            return -2;
          continue;
        }
        v4 = 0;
        v7 = 0;
LABEL_298:
        *v2 = 26;
LABEL_299:
        v138 = 1;
LABEL_301:
        *(_DWORD *)(a1 + 12) = v135;
        *(_DWORD *)(a1 + 16) = v132;
        *(_DWORD *)a1 = v5;
        *(_DWORD *)(a1 + 4) = v3;
        v106 = v2[10] == 0;
        v2[14] = v4;
        v2[15] = v7;
        if ( v106 && (*v2 >= 24 || v136 == *(_DWORD *)(a1 + 16)) || sub_10011C00(v136, a1) == 0 )
        {
          v114 = v140 - *(_DWORD *)(a1 + 4);
          v115 = v136 - *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 8) += v114;
          *(_DWORD *)(a1 + 20) += v115;
          v2[7] += v115;
          if ( v2[2] != 0 && v115 != 0 )
          {
            if ( v2[4] != 0 )
              v116 = sub_10014110(v2[6], *(_DWORD *)(a1 + 12) - v115, v115);
            else
              v116 = sub_10013BC0(v2[6], *(_DWORD *)(a1 + 12) - v115, v115);
            v2[6] = v116;
            *(_DWORD *)(a1 + 48) = v116;
          }
          *(_DWORD *)(a1 + 44) = v2[15] + (*v2 != 11 ? 0 : 0x80) + (v2[1] != 0 ? 0x40 : 0);
          if ( (v114 != 0 || v115 != 0) && a2 != 4 )
          {
            return v138;
          }
          else
          {
            result = v138;
            if ( v138 == 0 )
              return -5;
          }
        }
        else
        {
          *v2 = 28;
          return -4;
        }
        return result;
      case 25:
        goto LABEL_285;
      case 26:
        goto LABEL_299;
      case 27:
        v138 = -3;
        goto LABEL_301;
      case 28:
        return -4;
      default:
        return -2;
    }
  }
}

// Address: 0x100131F0
int __cdecl sub_100131F0(_DWORD *a1)
{
  int v1; // eax
  void (__cdecl *v2)(_DWORD, int); // ecx
  int v3; // eax

  if ( a1 == nullptr )
    return -2;
  v1 = a1[7];
  if ( v1 == 0 )
    return -2;
  v2 = (void (__cdecl *)(_DWORD, int))a1[9];
  if ( v2 == nullptr )
    return -2;
  v3 = *(_DWORD *)(v1 + 52);
  if ( v3 != 0 )
    v2(a1[10], v3);
  ((void (__cdecl *)(_DWORD, _DWORD))a1[9])(a1[10], a1[7]);
  a1[7] = 0;
  return 0;
}

// Address: 0x10013240
void *__cdecl sub_10013240(int a1, int a2, int a3)
{
  return malloc(a3 * a2);
}

// Address: 0x10013260
void __cdecl sub_10013260(int a1, void *Block)
{
  free(Block);
}

// Address: 0x10013270
_DWORD *__cdecl sub_10013270(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // ebx
  unsigned __int8 *v4; // ebp
  _BYTE *v5; // esi
  unsigned int v6; // edi
  int v7; // edx
  int v8; // eax
  unsigned int v9; // eax
  char v10; // dl
  unsigned int v11; // edx
  int v12; // eax
  int v13; // edx
  unsigned __int8 *v14; // ebp
  int v15; // eax
  unsigned int v16; // edx
  char v17; // al
  unsigned int v18; // eax
  int v19; // edx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  char v23; // cl
  _BYTE *v24; // eax
  unsigned int v25; // ebp
  int v26; // ecx
  _BYTE *v27; // ecx
  char v28; // al
  int v29; // edx
  unsigned int v30; // ebp
  char v31; // dl
  unsigned int i; // ebp
  char v33; // al
  char v34; // al
  unsigned int v35; // ebp
  char v36; // al
  _BYTE *v37; // ecx
  _BYTE *v38; // esi
  char v39; // dl
  char v40; // al
  char v41; // dl
  _BYTE *v42; // ecx
  unsigned int v43; // edx
  _BYTE *v44; // eax
  char v45; // cl
  _BYTE *v46; // eax
  char v47; // dl
  _BYTE *v48; // esi
  char v49; // cl
  unsigned int v50; // ecx
  char v51; // dl
  _BYTE *v52; // eax
  unsigned __int8 *v53; // ebp
  unsigned int v54; // edi
  unsigned __int8 *v56; // [esp+10h] [ebp-3Ch]
  unsigned int v57; // [esp+14h] [ebp-38h]
  _DWORD *v58; // [esp+18h] [ebp-34h]
  unsigned int v59; // [esp+1Ch] [ebp-30h]
  unsigned int v60; // [esp+1Ch] [ebp-30h]
  unsigned __int16 v61; // [esp+1Eh] [ebp-2Eh]
  int v62; // [esp+20h] [ebp-2Ch]
  int v63; // [esp+24h] [ebp-28h]
  int v64; // [esp+28h] [ebp-24h]
  unsigned int v65; // [esp+2Ch] [ebp-20h]
  int v66; // [esp+30h] [ebp-1Ch]
  _BYTE *v67; // [esp+38h] [ebp-14h]
  unsigned int v68; // [esp+3Ch] [ebp-10h]
  int v69; // [esp+40h] [ebp-Ch]
  unsigned int v70; // [esp+44h] [ebp-8h]
  int v71; // [esp+48h] [ebp-4h]
  unsigned int v72; // [esp+54h] [ebp+8h]

  v2 = (_DWORD *)a1[7];
  v3 = v2[14];
  v4 = (unsigned __int8 *)(*a1 - 1);
  v57 = (unsigned int)&v4[a1[1] - 5];
  v5 = (_BYTE *)(a1[3] - 1);
  v67 = &v5[a1[4] - a2];
  v65 = (unsigned int)&v5[a1[4] - 257];
  v64 = v2[10];
  v68 = v2[11];
  v70 = v2[12];
  v69 = v2[13];
  v62 = v2[19];
  v63 = v2[20];
  v58 = v2;
  v6 = v2[15];
  v7 = (1 << v2[21]) - 1;
  v56 = v4;
  v71 = v7;
  v66 = (1 << v2[22]) - 1;
  while ( 1 )
  {
    if ( v6 < 0xF )
    {
      v8 = v4[1];
      v4 += 2;
      v56 = v4;
      v3 += (*v4 << (v6 + 8)) + (v8 << v6);
      v6 += 16;
    }
    v9 = *(_DWORD *)(v62 + 4 * (v3 & v7));
    v10 = v9;
    v3 >>= SBYTE1(v9);
    v6 -= BYTE1(v9);
    if ( (_BYTE)v9 == 0 )
    {
LABEL_8:
      *++v5 = BYTE2(v9);
      goto LABEL_47;
    }
    while ( (v10 & 0x10) == 0 )
    {
      if ( (v10 & 0x40) != 0 )
      {
        if ( (v10 & 0x20) != 0 )
        {
          *v58 = 11;
          goto LABEL_61;
        }
        a1[6] = "invalid literal/length code";
LABEL_60:
        *v58 = 27;
        goto LABEL_61;
      }
      v9 = *(_DWORD *)(v62 + 4 * (HIWORD(v9) + (v3 & ((1 << v10) - 1))));
      v10 = v9;
      v3 >>= SBYTE1(v9);
      v6 -= BYTE1(v9);
      if ( (_BYTE)v9 == 0 )
        goto LABEL_8;
    }
    v11 = v10 & 0xF;
    v72 = HIWORD(v9);
    if ( v11 != 0 )
    {
      if ( v6 < v11 )
      {
        v12 = *++v4;
        v56 = v4;
        v3 += v12 << v6;
        v6 += 8;
      }
      v72 += v3 & ((1 << v11) - 1);
      v3 >>= v11;
      v6 -= v11;
    }
    if ( v6 < 0xF )
    {
      v13 = v4[1];
      v14 = v4 + 1;
      v15 = v14[1];
      v4 = v14 + 1;
      v56 = v4;
      v3 += (v15 << (v6 + 8)) + (v13 << v6);
      v6 += 16;
    }
    v16 = *(_DWORD *)(v63 + 4 * (v3 & v66));
    v17 = v16;
    v3 >>= SBYTE1(v16);
    v6 -= BYTE1(v16);
    v61 = HIWORD(v16);
    if ( (v16 & 0x10) == 0 )
    {
      while ( (v17 & 0x40) == 0 )
      {
        v16 = *(_DWORD *)(v63 + 4 * (v61 + (v3 & ((1 << v17) - 1))));
        v17 = v16;
        v3 >>= SBYTE1(v16);
        v6 -= BYTE1(v16);
        v61 = HIWORD(v16);
        if ( (v16 & 0x10) != 0 )
          goto LABEL_18;
      }
      a1[6] = "invalid distance code";
      goto LABEL_60;
    }
LABEL_18:
    v18 = v17 & 0xF;
    v59 = HIWORD(v16);
    if ( v6 < v18 )
    {
      v19 = *++v4;
      v20 = v19 << v6;
      v6 += 8;
      v56 = v4;
      v3 += v20;
      if ( v6 < v18 )
      {
        v21 = *++v4;
        v56 = v4;
        v3 += v21 << v6;
        v6 += 8;
      }
    }
    v6 -= v18;
    v22 = (v3 & ((1 << v18) - 1)) + v59;
    v23 = v18;
    v24 = (_BYTE *)(v5 - v67);
    v3 >>= v23;
    v60 = v22;
    if ( v22 > v5 - v67 )
    {
      v25 = v22 - (_DWORD)v24;
      if ( v22 - (unsigned int)v24 > v68 )
      {
        v4 = v56;
        a1[6] = "invalid distance too far back";
        *v58 = 27;
LABEL_61:
        v43 = v57;
        break;
      }
      v26 = v69 - 1;
      if ( v70 != 0 )
      {
        if ( v70 < v25 )
        {
          v29 = v64 + v70 - v25;
          v30 = v25 - v70;
          v27 = (_BYTE *)(v29 + v26);
          if ( v30 < v72 )
          {
            v72 -= v30;
            do
            {
              v31 = *++v27;
              ++v5;
              --v30;
              *v5 = v31;
            }
            while ( v30 != 0 );
            v27 = (_BYTE *)(v69 - 1);
            if ( v70 < v72 )
            {
              v72 -= v70;
              for ( i = v70; i != 0; --i )
              {
                v33 = *++v27;
                *++v5 = v33;
              }
              v27 = &v5[-v60];
            }
          }
          goto LABEL_40;
        }
        v27 = (_BYTE *)(v70 - v25 + v26);
        if ( v25 < v72 )
        {
          v72 -= v25;
          do
          {
            v34 = *++v27;
            ++v5;
            --v25;
            *v5 = v34;
          }
          while ( v25 != 0 );
          goto LABEL_39;
        }
      }
      else
      {
        v27 = (_BYTE *)(v64 - v25 + v26);
        if ( v25 < v72 )
        {
          v72 -= v25;
          do
          {
            v28 = *++v27;
            ++v5;
            --v25;
            *v5 = v28;
          }
          while ( v25 != 0 );
LABEL_39:
          v27 = &v5[-v22];
        }
      }
LABEL_40:
      if ( v72 > 2 )
      {
        v35 = (v72 - 3) / 3 + 1;
        do
        {
          v36 = v27[1];
          v72 -= 3;
          v37 = v27 + 1;
          v38 = v5 + 1;
          *v38 = v36;
          v39 = *++v37;
          *++v38 = v39;
          v40 = v37[1];
          v27 = v37 + 1;
          v5 = v38 + 1;
          --v35;
          *v5 = v40;
        }
        while ( v35 != 0 );
      }
      if ( v72 != 0 )
      {
        v41 = v27[1];
        v42 = v27 + 1;
        *++v5 = v41;
        if ( v72 > 1 )
          *++v5 = v42[1];
      }
      v4 = v56;
      goto LABEL_47;
    }
    v44 = &v5[-v22];
    do
    {
      v45 = v44[1];
      v46 = v44 + 1;
      v5[1] = v45;
      v47 = *++v46;
      v48 = v5 + 2;
      *v48 = v47;
      v49 = v46[1];
      v44 = v46 + 1;
      v5 = v48 + 1;
      *v5 = v49;
      v50 = v72 - 3;
      v72 = v50;
    }
    while ( v50 > 2 );
    if ( v50 != 0 )
    {
      v51 = v44[1];
      v52 = v44 + 1;
      *++v5 = v51;
      if ( v50 > 1 )
        *++v5 = v52[1];
    }
LABEL_47:
    v43 = v57;
    if ( (unsigned int)v4 >= v57 || (unsigned int)v5 >= v65 )
      break;
    v7 = v71;
  }
  v53 = &v4[-(v6 >> 3)];
  v54 = v6 - 8 * (v6 >> 3);
  *a1 = v53 + 1;
  a1[3] = v5 + 1;
  a1[4] = v65 - (_DWORD)v5 + 257;
  a1[1] = v43 - (_DWORD)v53 + 5;
  v58[15] = v54;
  v58[14] = ((1 << v54) - 1) & v3;
  return v58;
}

// Address: 0x100136D0
int __cdecl sub_100136D0(int a1, int a2, unsigned int a3, _DWORD **a4, unsigned int *a5, unsigned __int16 *a6)
{
  unsigned int i; // eax
  unsigned int v7; // eax
  unsigned int j; // ecx
  unsigned int v10; // esi
  int v11; // edx
  unsigned int k; // eax
  unsigned int m; // eax
  __int16 v14; // cx
  unsigned int n; // eax
  char *v16; // eax
  unsigned int v17; // ebp
  unsigned int v18; // ebx
  unsigned __int16 v19; // ax
  int v20; // eax
  int v21; // eax
  int v22; // edx
  _DWORD *v23; // ecx
  unsigned int v24; // edx
  unsigned int ii; // eax
  int v26; // esi
  char v27; // cl
  unsigned int v28; // edx
  int v29; // eax
  unsigned __int16 *v30; // esi
  int v31; // eax
  _DWORD *v32; // esi
  unsigned int jj; // eax
  int v34; // [esp+Ch] [ebp-8Ch]
  int v35; // [esp+Ch] [ebp-8Ch]
  unsigned int v36; // [esp+10h] [ebp-88h]
  unsigned int v37; // [esp+14h] [ebp-84h]
  unsigned __int16 *v38; // [esp+18h] [ebp-80h]
  unsigned int v39; // [esp+1Ch] [ebp-7Ch]
  _DWORD *v40; // [esp+20h] [ebp-78h]
  unsigned int v41; // [esp+28h] [ebp-70h]
  _BYTE *v42; // [esp+2Ch] [ebp-6Ch]
  int v43; // [esp+30h] [ebp-68h]
  int v44; // [esp+34h] [ebp-64h]
  char *v45; // [esp+38h] [ebp-60h]
  int v46; // [esp+3Ch] [ebp-5Ch]
  int v47; // [esp+40h] [ebp-58h]
  int v48; // [esp+54h] [ebp-44h] BYREF
  int v49; // [esp+58h] [ebp-40h]
  _WORD v50[28]; // [esp+5Ch] [ebp-3Ch] BYREF

  v38 = a6;
  v48 = 0;
  v49 = 0;
  memset(v50, 0, 24);
  for ( i = 0; i < a3; ++i )
    ++*((_WORD *)&v48 + *(unsigned __int16 *)(a2 + 2 * i));
  v7 = *a5;
  v36 = *a5;
  for ( j = 15; j != 0; --j )
  {
    if ( *((_WORD *)&v48 + j) != 0 )
      break;
  }
  v39 = j;
  if ( v7 > j )
  {
    v36 = j;
    v7 = j;
  }
  if ( j == 0 )
  {
    *(*a4)++ = 320;
    *(*a4)++ = 320;
    *a5 = 1;
    return 0;
  }
  v10 = 1;
  while ( *((_WORD *)&v48 + v10) == 0 )
  {
    if ( *((_WORD *)&v48 + v10 + 1) != 0 )
    {
      ++v10;
      break;
    }
    if ( v50[v10 - 2] != 0 )
    {
      v10 += 2;
      break;
    }
    if ( v50[v10 - 1] != 0 )
    {
      v10 += 3;
      break;
    }
    if ( v50[v10] != 0 )
    {
      v10 += 4;
      break;
    }
    v10 += 5;
    if ( v10 > 0xF )
      break;
  }
  if ( v7 < v10 )
    v36 = v10;
  v11 = 1;
  for ( k = 1; k <= 0xF; ++k )
  {
    v11 = 2 * v11 - *((unsigned __int16 *)&v48 + k);
    if ( v11 < 0 )
      return -1;
  }
  if ( v11 > 0 && (a1 == 0 || j != 1) )
    return -1;
  v50[13] = 0;
  for ( m = 1; m < 15; v50[m + 12] = v14 )
  {
    v14 = *(_WORD *)((char *)&v48 + m * 2) + v50[m + 12];
    ++m;
  }
  for ( n = 0; n < a3; ++n )
  {
    if ( *(_WORD *)(a2 + 2 * n) != 0 )
      a6[(unsigned __int16)v50[*(unsigned __int16 *)(a2 + 2 * n) + 12]++] = n;
  }
  if ( a1 == 0 )
  {
    v16 = (char *)a6;
    v45 = (char *)a6;
    v44 = 19;
    goto LABEL_42;
  }
  if ( a1 == 1 )
  {
    v45 = (char *)&unk_10017788 - 514;
    v16 = (char *)&unk_100177C8 - 514;
    v44 = 256;
LABEL_42:
    v42 = v16;
    goto LABEL_43;
  }
  v45 = (char *)&unk_10017808;
  v42 = &unk_10017848;
  v44 = -1;
LABEL_43:
  v43 = -1;
  v17 = 0;
  v18 = 0;
  v37 = v10;
  v40 = *a4;
  v46 = 1 << v36;
  v41 = 1 << v36;
  v47 = (1 << v36) - 1;
  if ( a1 == 1 && (unsigned int)(1 << v36) >= 0x5B0 )
    return 1;
  while ( 1 )
  {
    v19 = *v38;
    if ( *v38 < v44 )
    {
      LOBYTE(v34) = 0;
LABEL_50:
      HIWORD(v34) = v19;
      goto LABEL_51;
    }
    if ( v19 <= v44 )
    {
      LOBYTE(v34) = 96;
      v19 = 0;
      goto LABEL_50;
    }
    v20 = 2 * *v38;
    LOBYTE(v34) = v42[v20];
    HIWORD(v34) = *(_WORD *)&v45[v20];
LABEL_51:
    v21 = v46;
    v22 = 1 << (v37 - v18);
    v23 = &v40[v46 + (v17 >> v18)];
    do
    {
      v21 -= v22;
      v23 -= v22;
      BYTE1(v34) = v37 - v18;
      *v23 = v34;
    }
    while ( v21 != 0 );
    v24 = v37;
    for ( ii = 1 << (v37 - 1); (ii & v17) != 0; ii >>= 1 )
      ;
    if ( ii != 0 )
      v17 = ii + (v17 & (ii - 1));
    else
      v17 = 0;
    ++v38;
    if ( --*((_WORD *)&v48 + v37) == 0 )
    {
      if ( v37 == v39 )
        break;
      v37 = *(unsigned __int16 *)(a2 + 2 * *v38);
      v24 = v37;
    }
    if ( v24 > v36 )
    {
      v26 = v17 & v47;
      if ( (v17 & v47) != v43 )
      {
        if ( v18 == 0 )
          v18 = v36;
        v40 += v46;
        v27 = v37 - v18;
        v28 = v37;
        v29 = 1 << (v37 - v18);
        if ( v37 < v39 )
        {
          v30 = (unsigned __int16 *)&v48 + v37;
          do
          {
            v31 = v29 - *v30;
            if ( v31 <= 0 )
              break;
            ++v28;
            ++v27;
            ++v30;
            v29 = 2 * v31;
          }
          while ( v28 < v39 );
          v26 = v17 & v47;
        }
        v41 += 1 << v27;
        v46 = 1 << v27;
        if ( a1 == 1 && v41 >= 0x5B0 )
          return 1;
        LOBYTE((*a4)[v26]) = v27;
        BYTE1((*a4)[v26]) = v36;
        v43 = v26;
        HIWORD((*a4)[v26]) = v40 - *a4;
      }
    }
  }
  LOBYTE(v35) = 64;
  BYTE1(v35) = v37 - v18;
  HIWORD(v35) = 0;
  if ( v17 != 0 )
  {
    v32 = v40;
    do
    {
      if ( v18 != 0 && (v17 & v47) != v43 )
      {
        v32 = *a4;
        v18 = 0;
        BYTE1(v35) = v36;
        LOBYTE(v24) = v36;
      }
      v32[v17 >> v18] = v35;
      for ( jj = 1 << (v24 - 1); (jj & v17) != 0; jj >>= 1 )
        ;
      if ( jj == 0 )
        break;
      v17 = jj + (v17 & (jj - 1));
    }
    while ( v17 != 0 );
  }
  *a4 += v41;
  *a5 = v36;
  return 0;
}

// Address: 0x10013BC0
unsigned int __cdecl sub_10013BC0(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned __int8 *v9; // esi
  unsigned int v10; // ebp
  int i; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // edi
  unsigned int v20; // ecx
  unsigned int v21; // edi
  unsigned int v22; // ecx
  unsigned int v23; // edi
  unsigned int v24; // ecx
  int v25; // edi
  unsigned int v26; // ecx
  int v27; // edi
  unsigned int v28; // ecx
  int v29; // edi
  int v30; // ecx
  int v31; // edi
  int v32; // ecx
  int v33; // edi
  int v34; // ecx
  int v35; // edi
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // edi
  int v40; // ecx
  int v41; // edi
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // edi
  unsigned int v45; // ecx
  unsigned int v46; // edi
  unsigned int v47; // ecx
  unsigned int v48; // edi
  unsigned int v49; // ecx
  unsigned int v50; // edi
  unsigned int v51; // ecx
  unsigned int v52; // edi
  unsigned int v53; // ecx
  unsigned int v54; // edi
  unsigned int v55; // ecx
  int v56; // edi
  unsigned int v57; // ecx
  int v58; // edi
  unsigned int v59; // ecx
  int v60; // edi
  int v61; // ecx
  int v62; // edi
  int v63; // ecx
  int v64; // edi
  int v65; // ecx
  int v66; // edi
  int v67; // ecx
  int v68; // edi
  int v69; // ecx
  int v70; // edi
  int v71; // ecx
  int v72; // edi

  v3 = a3;
  v4 = HIWORD(a1);
  v5 = (unsigned __int16)a1;
  if ( a3 == 1 )
  {
    v6 = *a2 + (unsigned __int16)a1;
    if ( v6 >= 0xFFF1 )
      v6 -= 65521;
    v7 = v6 + v4;
    if ( v7 >= 0xFFF1 )
      v7 -= 65521;
    return v6 | (v7 << 16);
  }
  else
  {
    v9 = a2;
    if ( a2 != nullptr )
    {
      if ( a3 >= 0x10 )
      {
        if ( a3 >= 0x15B0 )
        {
          v10 = a3 / 0x15B0;
          do
          {
            v3 -= 5552;
            for ( i = 347; i != 0; --i )
            {
              v12 = *v9 + v5;
              v13 = v12 + v4;
              v14 = v9[1] + v12;
              v15 = v14 + v13;
              v16 = v9[2] + v14;
              v17 = v16 + v15;
              v18 = v9[3] + v16;
              v19 = v18 + v17;
              v20 = v9[4] + v18;
              v21 = v20 + v19;
              v22 = v9[5] + v20;
              v23 = v22 + v21;
              v24 = v9[6] + v22;
              v25 = v24 + v23;
              v26 = v9[7] + v24;
              v27 = v26 + v25;
              v28 = v9[8] + v26;
              v29 = v28 + v27;
              v30 = v9[9] + v28;
              v31 = v30 + v29;
              v32 = v9[10] + v30;
              v33 = v32 + v31;
              v34 = v9[11] + v32;
              v35 = v34 + v33;
              v36 = v9[12] + v34;
              v37 = v36 + v35;
              v38 = v9[13] + v36;
              v39 = v38 + v37;
              v40 = v9[14] + v38;
              v41 = v40 + v39;
              v5 = v9[15] + v40;
              v4 = v5 + v41;
              v9 += 16;
            }
            v5 %= 0xFFF1u;
            v4 %= 0xFFF1u;
            --v10;
          }
          while ( v10 != 0 );
        }
        if ( v3 != 0 )
        {
          if ( v3 >= 0x10 )
          {
            v42 = v3 >> 4;
            do
            {
              v43 = *v9 + v5;
              v44 = v43 + v4;
              v45 = v9[1] + v43;
              v46 = v45 + v44;
              v47 = v9[2] + v45;
              v48 = v47 + v46;
              v49 = v9[3] + v47;
              v50 = v49 + v48;
              v51 = v9[4] + v49;
              v52 = v51 + v50;
              v53 = v9[5] + v51;
              v54 = v53 + v52;
              v55 = v9[6] + v53;
              v56 = v55 + v54;
              v57 = v9[7] + v55;
              v58 = v57 + v56;
              v59 = v9[8] + v57;
              v60 = v59 + v58;
              v61 = v9[9] + v59;
              v62 = v61 + v60;
              v63 = v9[10] + v61;
              v64 = v63 + v62;
              v65 = v9[11] + v63;
              v66 = v65 + v64;
              v67 = v9[12] + v65;
              v68 = v67 + v66;
              v69 = v9[13] + v67;
              v70 = v69 + v68;
              v71 = v9[14] + v69;
              v72 = v71 + v70;
              v5 = v9[15] + v71;
              v3 -= 16;
              v4 = v5 + v72;
              v9 += 16;
              --v42;
            }
            while ( v42 != 0 );
          }
          for ( ; v3 != 0; v4 += v5 )
          {
            v5 += *v9;
            --v3;
            ++v9;
          }
          v5 %= 0xFFF1u;
          v4 %= 0xFFF1u;
        }
        return v5 | (v4 << 16);
      }
      else
      {
        if ( a3 != 0 )
        {
          do
          {
            v5 += *v9;
            --v3;
            ++v9;
            v4 += v5;
          }
          while ( v3 != 0 );
        }
        if ( v5 >= 0xFFF1 )
          v5 -= 65521;
        return v5 | ((v4 + 15 * (v4 / 0xFFF1)) << 16);
      }
    }
    else
    {
      return 1;
    }
  }
}

// Address: 0x10014110
int __cdecl sub_10014110(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int i; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  _BYTE *v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  _BYTE *v17; // ecx

  v17 = a2;
  if ( a2 == nullptr )
    return 0;
  v3 = a3;
  for ( i = ~a1; v3 != 0; --v3 )
  {
    if ( ((unsigned __int8)v17 & 3) == 0 )
      break;
    i = dword_10017888[(unsigned __int8)(i ^ *v17++)] ^ (i >> 8);
  }
  if ( v3 >= 0x20 )
  {
    v5 = v3 >> 5;
    do
    {
      v6 = *(_DWORD *)v17 ^ i;
      v7 = v17 + 8;
      v8 = *((_DWORD *)v7 - 1)
         ^ dword_10018488[(unsigned __int8)v6]
         ^ dword_10017888[HIBYTE(v6)]
         ^ dword_10018088[BYTE1(v6)]
         ^ dword_10017C88[BYTE2(v6)];
      v7 += 8;
      v9 = *((_DWORD *)v7 - 2)
         ^ dword_10018488[(unsigned __int8)v8]
         ^ dword_10017888[HIBYTE(v8)]
         ^ dword_10018088[BYTE1(v8)]
         ^ dword_10017C88[BYTE2(v8)];
      v7 += 8;
      v10 = *((_DWORD *)v7 - 3)
          ^ dword_10018488[(unsigned __int8)v9]
          ^ dword_10017888[HIBYTE(v9)]
          ^ dword_10018088[BYTE1(v9)]
          ^ dword_10017C88[BYTE2(v9)];
      v11 = *((_DWORD *)v7 - 2)
          ^ dword_10018488[(unsigned __int8)v10]
          ^ dword_10017888[HIBYTE(v10)]
          ^ dword_10018088[BYTE1(v10)]
          ^ dword_10017C88[BYTE2(v10)];
      v12 = *((_DWORD *)v7 - 1)
          ^ dword_10018488[(unsigned __int8)v11]
          ^ dword_10017888[HIBYTE(v11)]
          ^ dword_10018088[BYTE1(v11)]
          ^ dword_10017C88[BYTE2(v11)];
      v7 += 4;
      v13 = *((_DWORD *)v7 - 1)
          ^ dword_10018488[(unsigned __int8)v12]
          ^ dword_10017888[HIBYTE(v12)]
          ^ dword_10018088[BYTE1(v12)]
          ^ dword_10017C88[BYTE2(v12)];
      v17 = v7 + 4;
      v3 -= 32;
      v14 = *((_DWORD *)v17 - 1)
          ^ dword_10018488[(unsigned __int8)v13]
          ^ dword_10017888[HIBYTE(v13)]
          ^ dword_10018088[BYTE1(v13)]
          ^ dword_10017C88[BYTE2(v13)];
      i = dword_10018488[(unsigned __int8)v14]
        ^ dword_10017888[HIBYTE(v14)]
        ^ dword_10018088[BYTE1(v14)]
        ^ dword_10017C88[BYTE2(v14)];
      --v5;
    }
    while ( v5 != 0 );
  }
  if ( v3 >= 4 )
  {
    v15 = v3 >> 2;
    do
    {
      v16 = *(_DWORD *)v17 ^ i;
      v17 += 4;
      v3 -= 4;
      --v15;
      i = dword_10018488[(unsigned __int8)v16]
        ^ dword_10017888[HIBYTE(v16)]
        ^ dword_10018088[BYTE1(v16)]
        ^ dword_10017C88[BYTE2(v16)];
    }
    while ( v15 != 0 );
  }
  for ( ; v3 != 0; --v3 )
    i = dword_10017888[(unsigned __int8)(i ^ *v17++)] ^ (i >> 8);
  return ~i;
}

// Address: 0x10014128
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x10014130
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

// Address: 0x100141B0
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

// Address: 0x10014540
void __cdecl sub_10014540()
{
  operator delete((void *)lpBuffer);
}

// Address: 0x1001454D
void __cdecl sub_1001454D()
{
  dword_1001F124 = (int)&std::bad_alloc::`vftable';
  sub_10007591(&dword_1001F124);
}

