// Decompiled from Sheriffagent.exe (Sheriff9 9.0.52)
// Imports: ['KERNEL32', 'USER32', 'ADVAPI32', 'IPHLPAPI', 'WS2_32', 'WINMM', 'SHLWAPI', 'dbghelp']

// Address: 0x401000
_DWORD *__thiscall sub_401000(_DWORD *this, char a2)
{
  *this = &CRijndael::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x401020
void __thiscall sub_401020(_DWORD *this)
{
  *this = &CRijndael::`vftable';
}

// Address: 0x401030
int __userpurge sub_401030@<eax>(size_t a1@<eax>, int a2@<ecx>, int a3@<esi>, char *a4)
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
  memcpy((void *)(a3 + 980), &unk_423780, a1);
  memcpy((void *)(a3 + 1012), &unk_423780, *(_DWORD *)(a3 + 972));
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
    v42 = (char *)&unk_4271F0;
    while ( 1 )
    {
      v23 = *v42++ ^ byte_423FF0[(unsigned __int8)BYTE2(*(_DWORD *)(a3 + 4 * v13 + 1040))];
      *(_DWORD *)(a3 + 1044) ^= (unsigned __int8)byte_423FF0[HIBYTE(*(_DWORD *)(a3 + 4 * v13 + 1040))]
                              ^ (((unsigned __int8)byte_423FF0[(unsigned __int8)*(_DWORD *)(a3 + 4 * v13 + 1040)]
                                ^ (((unsigned __int8)byte_423FF0[BYTE1(*(_DWORD *)(a3 + 4 * v13 + 1040))] ^ (v23 << 8)) << 8)) << 8);
      if ( v13 == 8 )
      {
        v26 = (_DWORD *)(a3 + 1048);
        for ( i = 3; i != 0; --i )
        {
          *v26 ^= *(v26 - 1);
          ++v26;
        }
        *(_DWORD *)(a3 + 1060) ^= (unsigned __int8)byte_423FF0[(unsigned __int8)*(_DWORD *)(a3 + 1056)]
                                ^ (((unsigned __int8)byte_423FF0[BYTE1(*(_DWORD *)(a3 + 1056))]
                                  ^ (((unsigned __int8)byte_423FF0[(unsigned __int8)BYTE2(*(_DWORD *)(a3 + 1056))]
                                    ^ (byte_423FF0[HIBYTE(*(_DWORD *)(a3 + 1056))] << 8)) << 8)) << 8);
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
          v39 = dword_426DF0[(unsigned __int8)*v37]
              ^ dword_4269F0[(unsigned __int8)BYTE1(*v37)]
              ^ dword_4265F0[(unsigned __int8)BYTE2(*v37)]
              ^ dword_4261F0[(unsigned __int8)HIBYTE(*v37)];
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

// Address: 0x4014A0
int __userpurge sub_4014A0@<eax>(unsigned __int8 *a1@<eax>, int a2, _BYTE *a3)
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
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&off_42EC34);
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
          ^ dword_424DF0[(unsigned __int8)v16]
          ^ dword_4241F0[HIBYTE(v20)]
          ^ dword_4245F0[BYTE2(v21)]
          ^ dword_4249F0[BYTE1(v25)];
      v34 = *v32
          ^ dword_424DF0[(unsigned __int8)v20]
          ^ dword_4249F0[BYTE1(v16)]
          ^ dword_4241F0[HIBYTE(v21)]
          ^ dword_4245F0[BYTE2(v25)];
      v28 = v32[1]
          ^ dword_424DF0[(unsigned __int8)v21]
          ^ dword_4245F0[BYTE2(v16)]
          ^ dword_4249F0[BYTE1(v20)]
          ^ dword_4241F0[HIBYTE(v25)];
      v26 = v32 + 8;
      v29 = v33-- == 1;
      v16 = *(v32 - 2)
          ^ dword_424DF0[(unsigned __int8)v25]
          ^ dword_4241F0[HIBYTE(v16)]
          ^ dword_4245F0[BYTE2(v20)]
          ^ dword_4249F0[BYTE1(v21)];
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
  *v3 = byte_423FF0[HIBYTE(v16)] ^ HIBYTE(*v39);
  v3[1] = byte_423FF0[BYTE2(v20)] ^ v30;
  v3[2] = byte_423FF0[BYTE1(v21)] ^ BYTE1(v36);
  v3[3] = v36 ^ byte_423FF0[(unsigned __int8)v25];
  v37 = v39[1];
  v3[4] = byte_423FF0[HIBYTE(v20)] ^ HIBYTE(v37);
  v3[5] = byte_423FF0[BYTE2(v21)] ^ BYTE2(v37);
  v3[6] = byte_423FF0[BYTE1(v25)] ^ BYTE1(v37);
  v3[7] = v37 ^ byte_423FF0[(unsigned __int8)v16];
  v38 = v39[2];
  v3[8] = byte_423FF0[HIBYTE(v21)] ^ HIBYTE(v38);
  v3[9] = byte_423FF0[BYTE2(v25)] ^ BYTE2(v38);
  v3[10] = byte_423FF0[BYTE1(v16)] ^ BYTE1(v38);
  v3[11] = v38 ^ byte_423FF0[(unsigned __int8)v20];
  result = v39[3];
  v3[12] = byte_423FF0[HIBYTE(v25)] ^ HIBYTE(result);
  v3[13] = byte_423FF0[BYTE2(v16)] ^ BYTE2(result);
  v3[14] = byte_423FF0[BYTE1(v20)] ^ BYTE1(result);
  v3[15] = result ^ byte_423FF0[(unsigned __int8)v21];
  return result;
}

// Address: 0x401890
int __userpurge sub_401890@<eax>(unsigned __int8 *a1@<ecx>, int a2@<esi>, _BYTE *a3)
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
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&off_42EC34);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  v3 = *(_DWORD *)(a2 + 972);
  if ( v3 == 16 )
    return sub_4014A0(a1, a2, a3);
  v5 = v3 / 4;
  v6 = 0;
  if ( v5 != 4 )
  {
    LOBYTE(v6) = v5 != 6;
    ++v6;
  }
  v7 = 8 * v6;
  v8 = dword_427218[v7];
  v9 = dword_427220[v7];
  v35 = dword_427228[v7];
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
                               ^ dword_4241F0[*(unsigned __int8 *)(v15 + 31)]
                               ^ dword_4245F0[(unsigned __int8)*(_WORD *)(a2 + 4 * (v20 % v5) + 1110)]
                               ^ dword_424DF0[(unsigned __int8)*(_DWORD *)(a2 + 4 * v19 + 1108)]
                               ^ dword_4249F0[v39];
          if ( v21 )
            break;
          v16 = v36;
          v17 = v37;
        }
        v9 = v32;
      }
      v15 = a2 + 1076;
      memcpy((void *)(a2 + 1108), (const void *)(a2 + 1076), 4 * v5);
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
      *v22 = byte_423FF0[*(unsigned __int8 *)(v42 + 3)] ^ HIBYTE(v23);
      v42 += 4;
      v22 += 4;
      *(v22 - 3) = byte_423FF0[(unsigned __int8)*(_WORD *)(a2 + 4 * ((v9 + v40) % v5) + 1110)] ^ BYTE2(v23);
      *(v22 - 2) = byte_423FF0[BYTE1(*(_DWORD *)(a2 + 4 * (v9 % v5) + 1108))] ^ BYTE1(v23);
      v24 = (v38 + v9++) % v5;
      result = v28 + 1;
      v25 = v28 + 1 < v5;
      *(v22 - 1) = v23 ^ byte_423FF0[(unsigned __int8)*(_DWORD *)(a2 + 4 * v24 + 1108)];
      ++v28;
    }
    while ( v25 );
  }
  return result;
}

// Address: 0x401B80
int __thiscall sub_401B80(_DWORD *this)
{
  *this = &std::bad_alloc::`vftable';
  return sub_40A2B4();
}

// Address: 0x401B90
_DWORD *__thiscall sub_401B90(_DWORD *this, char a2)
{
  *this = &std::bad_alloc::`vftable';
  sub_40A2B4();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x401BC0
int __stdcall sub_401BC0(int a1)
{
  return 0;
}

// Address: 0x401BD0
_DWORD *__thiscall sub_401BD0(_DWORD *this, int a2)
{
  sub_40A1D6();
  *this = &std::logic_error::`vftable';
  *(this + 8) = 0;
  *(this + 9) = 15;
  *((_BYTE *)this + 16) = 0;
  sub_403EF0(a2, 0, -1);
  return this;
}

// Address: 0x401C40
_DWORD *__thiscall sub_401C40(_DWORD *this, int a2)
{
  sub_401BD0(this, a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x401C60
void **__thiscall sub_401C60(void **this, char a2)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  sub_40A2B4(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x401CB0
int __thiscall sub_401CB0(int this, struct std::exception *a2)
{
  std::exception::exception((std::exception *)this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  *(_DWORD *)(this + 36) = 15;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 16) = 0;
  sub_403EF0((char *)a2 + 12, 0, -1);
  return this;
}

// Address: 0x401D30
_DWORD *__usercall sub_401D30@<eax>(_DWORD *a1@<esi>)
{
  _DWORD *v2; // eax
  HKEY v3; // ecx
  HKEY phkResult; // [esp+0h] [ebp-4h] BYREF

  phkResult = nullptr;
  if ( RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\AU",
         0,
         0xF003Fu,
         &phkResult) != 0 )
  {
    a1[1] = 0;
    *a1 = 0;
    return a1;
  }
  else
  {
    v2 = operator new(8u);
    if ( v2 != nullptr )
    {
      v3 = phkResult;
      *v2 = &registry::`vftable';
      v2[1] = v3;
    }
    else
    {
      v2 = nullptr;
    }
    *a1 = 0;
    a1[1] = 0;
    sub_404510(a1, v2);
    return a1;
  }
}

// Address: 0x401DA0
_DWORD *__usercall sub_401DA0@<eax>(_DWORD *a1@<esi>)
{
  _DWORD *v2; // eax
  HKEY v3; // ecx
  HKEY phkResult; // [esp+0h] [ebp-4h] BYREF

  phkResult = nullptr;
  if ( RegCreateKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\AU",
         0,
         nullptr,
         0,
         0xF003Fu,
         nullptr,
         &phkResult,
         nullptr) != 0 )
  {
    a1[1] = 0;
    *a1 = 0;
    return a1;
  }
  else
  {
    v2 = operator new(8u);
    if ( v2 != nullptr )
    {
      v3 = phkResult;
      *v2 = &registry::`vftable';
      v2[1] = v3;
    }
    else
    {
      v2 = nullptr;
    }
    *a1 = 0;
    a1[1] = 0;
    sub_404510(a1, v2);
    return a1;
  }
}

// Address: 0x401E20
HKEY *__thiscall sub_401E20(HKEY *this, char a2)
{
  HKEY v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1);
  *this = (HKEY)&registry::`vftable';
  RegCloseKey(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x401E50
SC_HANDLE sub_401E50()
{
  SC_HANDLE result; // eax
  SC_HANDLE v1; // edi
  SC_HANDLE v2; // esi
  struct _SERVICE_STATUS ServiceStatus; // [esp+4h] [ebp-1Ch] BYREF

  result = OpenSCManagerW(nullptr, nullptr, 0xF003Fu);
  v1 = result;
  if ( result != nullptr )
  {
    v2 = OpenServiceW(result, L"SheriffAgent", 0x80u);
    result = nullptr;
    if ( v2 != nullptr )
    {
      memset(&ServiceStatus, 0, sizeof(ServiceStatus));
      if ( !ControlService(v2, 4u, &ServiceStatus) && GetLastError() == 1062 )
        ServiceStatus.dwCurrentState = 1;
      CloseServiceHandle(v2);
      CloseServiceHandle(v1);
      return (SC_HANDLE)ServiceStatus.dwCurrentState;
    }
  }
  return result;
}

// Address: 0x401EF0
DWORD __stdcall HandlerProc(DWORD dwControl, DWORD dwEventType, LPVOID lpEventData, LPVOID lpContext)
{
  DWORD result; // eax
  char v5; // [esp+0h] [ebp-4h]

  switch ( dwControl )
  {
    case 1u:
      sub_4053E0((wchar_t *)L"SERVICE_CONTROL_STOP", v5);
      ServiceStatus.dwCurrentState = 3;
      SetServiceStatus(hServiceStatus, &ServiceStatus);
      ServiceStatus.dwCurrentState = 1;
      SetServiceStatus(hServiceStatus, &ServiceStatus);
      result = 0;
      break;
    case 2u:
      sub_4053E0((wchar_t *)L"SERVICE_CONTROL_PAUSE", v5);
      ServiceStatus.dwCurrentState = 6;
      SetServiceStatus(hServiceStatus, &ServiceStatus);
      ServiceStatus.dwCurrentState = 7;
      SetServiceStatus(hServiceStatus, &ServiceStatus);
      result = 0;
      break;
    case 3u:
      sub_4053E0((wchar_t *)L"SERVICE_CONTROL_CONTINUE", v5);
      ServiceStatus.dwCurrentState = 5;
      SetServiceStatus(hServiceStatus, &ServiceStatus);
      ServiceStatus.dwCurrentState = 4;
      SetServiceStatus(hServiceStatus, &ServiceStatus);
      result = 0;
      break;
    case 4u:
      ServiceStatus.dwCurrentState = 4;
      result = 0;
      break;
    case 5u:
      sub_4053E0((wchar_t *)L"SERVICE_CONTROL_SHUTDOWN", v5);
      goto LABEL_7;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}

// Address: 0x402020
BOOL sub_402020()
{
  struct WSAData WSAData; // [esp+0h] [ebp-198h] BYREF

  memset(&WSAData, 0, sizeof(WSAData));
  return WSAStartup(0x202u, &WSAData) == 0;
}

// Address: 0x402080
int __fastcall sub_402080(SOCKET a1, void *a2)
{
  DWORD v2; // eax

  v2 = cEvents;
  if ( cEvents >= 0x40 )
    return 0;
  *(&s + cEvents) = a1;
  *(&hEventObject + v2) = a2;
  cEvents = v2 + 1;
  return 1;
}

// Address: 0x4020B0
DWORD __usercall sub_4020B0@<eax>(signed int a1@<ebx>)
{
  HANDLE *v1; // ebp
  SOCKET *v2; // edi
  signed int v3; // eax
  DWORD result; // eax

  v1 = &hEventObject + a1;
  WSACloseEvent(*v1);
  v2 = &s + a1;
  closesocket(*v2);
  if ( a1 == 65 )
    *v2 = 0;
  v3 = cEvents;
  if ( a1 < (int)cEvents )
    qmemcpy(v2, (char *)&unk_42FE14 + 4 * a1, 4 * (cEvents - a1));
  if ( a1 == 65 )
    *v1 = nullptr;
  if ( a1 < v3 )
    qmemcpy(v1, (char *)&unk_42FF14 + 4 * a1, 4 * (v3 - a1));
  result = v3 - 1;
  cEvents = result;
  return result;
}

// Address: 0x402130
int __usercall sub_402130@<eax>(int a1@<eax>, int a2@<ebx>)
{
  int result; // eax
  FARPROC v4; // eax
  int (*v5)(void); // eax
  int v6; // edi
  int v7; // esi
  FARPROC v8; // eax
  int v9; // esi
  FARPROC ProcAddress; // eax
  int v11; // esi
  FARPROC v12; // eax
  int v13; // edi
  FARPROC v14; // eax
  int v15; // [esp+4h] [ebp-4h] BYREF

  sub_4051F0((wchar_t *)L"ShrfCertJob %d", *(unsigned __int16 *)(a1 + 12));
  result = *(unsigned __int16 *)(a1 + 12) - 4;
  switch ( *(_WORD *)(a1 + 12) )
  {
    case 4:
      v9 = a1 + 271 != a1 + 270 + strlen((const char *)(a1 + 270)) + 1 ? a1 + 270 : 0;
      ProcAddress = GetProcAddress(hLibModule, (LPCSTR)4);
      if ( ProcAddress == nullptr )
        goto LABEL_8;
      result = ((int (__cdecl *)(_DWORD, int))ProcAddress)(0, v9);
      *(_DWORD *)(a2 + 526) = result;
      break;
    case 5:
      v13 = *(_DWORD *)(a1 + 14);
      v14 = GetProcAddress(hLibModule, (LPCSTR)5);
      if ( v14 != nullptr )
      {
        result = ((int (__cdecl *)(int, int, int))v14)(a1 + 18, a1 + 68, v13);
        *(_DWORD *)(a2 + 526) = result;
      }
      else
      {
        *(_DWORD *)(a2 + 526) = -1;
        result = -1;
      }
      break;
    case 9:
      result = sub_404B30(a1 + 15 != a1 + 14 + strlen((const char *)(a1 + 14)) + 1 ? a1 + 14 : 0, *(_DWORD *)(a1 + 270));
      *(_DWORD *)(a2 + 526) = result;
      break;
    case 0xD:
      v15 = 0;
      v11 = a1 + 19 != a1 + 18 + strlen((const char *)(a1 + 18)) + 1 ? a1 + 18 : 0;
      v12 = GetProcAddress(hLibModule, (LPCSTR)0xD);
      if ( v12 != nullptr )
        *(_DWORD *)(a2 + 526) = ((int (__cdecl *)(int *, int, _DWORD, _DWORD))v12)(&v15, v11, 0, 0);
      else
        *(_DWORD *)(a2 + 526) = -1;
      result = v15;
      *(_DWORD *)(a2 + 14) = v15;
      break;
    case 0xE:
      v6 = *(_DWORD *)(a1 + 64);
      v7 = a1 + 14;
      v8 = GetProcAddress(hLibModule, (LPCSTR)0xE);
      if ( v8 != nullptr )
      {
        result = ((int (__cdecl *)(int, int))v8)(v7, v6);
        *(_DWORD *)(a2 + 526) = result;
      }
      else
      {
LABEL_8:
        *(_DWORD *)(a2 + 526) = -1;
        result = -1;
      }
      break;
    case 0x11:
      v5 = GetProcAddress(hLibModule, (LPCSTR)0x11);
      if ( v5 != nullptr )
        goto LABEL_6;
      *(_DWORD *)(a2 + 526) = -1;
      result = -1;
      break;
    case 0x12:
      v4 = GetProcAddress(hLibModule, (LPCSTR)0x12);
      if ( v4 == nullptr )
        goto LABEL_3;
      result = ((int (__cdecl *)(_DWORD))v4)(0);
      *(_DWORD *)(a2 + 526) = result;
      break;
    case 0x13:
      v5 = GetProcAddress(hLibModule, (LPCSTR)0x13);
      if ( v5 != nullptr )
      {
LABEL_6:
        result = v5();
        *(_DWORD *)(a2 + 526) = result;
      }
      else
      {
LABEL_3:
        *(_DWORD *)(a2 + 526) = 0;
        result = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}

// Address: 0x402360
int sub_402360()
{
  WCHAR ReturnedString[256]; // [esp+0h] [ebp-204h] BYREF

  memset(ReturnedString, 0, sizeof(ReturnedString));
  if ( GetPrivateProfileStringW(
         L"LetterEnable",
         L"Enable",
         nullptr,
         ReturnedString,
         0x100u,
         L"\\\\.\\SheriffVDisk0\\Partition0\\Info\\nodrive_use.ini") == 0 )
  {
    wsprintfW(ReturnedString, L"%d", 0);
    WritePrivateProfileStringW(
      L"LetterEnable",
      L"Enable",
      ReturnedString,
      L"\\\\.\\SheriffVDisk0\\Partition0\\Info\\nodrive_use.ini");
  }
  return _wtoi(ReturnedString);
}

// Address: 0x402410
BOOL __cdecl sub_402410(int a1)
{
  WCHAR String[256]; // [esp+0h] [ebp-204h] BYREF

  memset(String, 0, sizeof(String));
  wsprintfW(String, L"%d", a1);
  return WritePrivateProfileStringW(
           L"LetterEnable",
           L"Enable",
           String,
           L"\\\\.\\SheriffVDisk0\\Partition0\\Info\\nodrive_use.ini");
}

// Address: 0x402490
int __cdecl sub_402490(int a1)
{
  unsigned __int16 i; // si
  unsigned int v2; // eax
  int v3; // ecx
  HANDLE FirstFileW; // eax
  int v5; // esi
  LSTATUS v6; // eax
  int v7; // edx
  BYTE v9[4]; // [esp+10h] [ebp-580h] BYREF
  HKEY phkResult; // [esp+14h] [ebp-57Ch] BYREF
  int v11; // [esp+18h] [ebp-578h]
  DWORD cbData; // [esp+1Ch] [ebp-574h] BYREF
  DWORD Type; // [esp+20h] [ebp-570h] BYREF
  DWORD v14; // [esp+24h] [ebp-56Ch] BYREF
  struct _WIN32_FIND_DATAW FindFileData; // [esp+28h] [ebp-568h] BYREF
  BYTE Data[264]; // [esp+278h] [ebp-318h] BYREF
  WCHAR ValueName[262]; // [esp+380h] [ebp-210h] BYREF

  phkResult = nullptr;
  cbData = 0;
  Type = 3;
  memset(ValueName, 0, 520);
  memset(Data, 0, 260);
  if ( RegCreateKeyW(HKEY_LOCAL_MACHINE, L"SYSTEM\\MountedDevices", &phkResult) != 0 )
    return 0;
  v11 = 2;
  for ( i = 67; i <= 0x5Au; ++i )
  {
    memset(Data, 0, 0x104u);
    memset(ValueName, 0, 0x104u);
    wsprintfW(ValueName, L"\\DosDevices\\%c:", i);
    cbData = 260;
    if ( RegQueryValueExW(phkResult, ValueName, nullptr, &Type, Data, &cbData) != 0 )
    {
      RegCloseKey(phkResult);
    }
    else
    {
      v2 = 8;
      v3 = 0;
      while ( *(_DWORD *)&Data[v3 * 4] == dword_427494[v3] )
      {
        v2 -= 4;
        ++v3;
        if ( v2 < 4 )
        {
          memset(&FindFileData, 0, sizeof(FindFileData));
          FirstFileW = FindFirstFileW(L"\\\\.\\SheriffVDisk0\\Partition0\\*.*", &FindFileData);
          if ( FirstFileW == (HANDLE)-1 )
            break;
          FindClose(FirstFileW);
          v5 = 1;
          goto LABEL_12;
        }
      }
    }
    ++v11;
  }
  v5 = 0;
LABEL_12:
  RegCloseKey(phkResult);
  phkResult = nullptr;
  if ( v5 == 0
    || RegCreateKeyW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer",
         &phkResult) != 0 )
  {
    return 0;
  }
  *(_DWORD *)v9 = 0;
  v14 = 4;
  v6 = RegQueryValueExW(phkResult, L"NoDrives", nullptr, nullptr, v9, &v14);
  v7 = 1 << v11;
  if ( a1 != 0 )
    *(_DWORD *)v9 &= ~v7;
  else
    *(_DWORD *)v9 |= v7;
  sub_4051F0((wchar_t *)L"NoDrives : %d, %d, %08X\n", v6);
  RegSetValueExW(phkResult, L"NoDrives", 0, 4u, v9, 4u);
  RegCloseKey(phkResult);
  return 1;
}

// Address: 0x402710
HANDLE sub_402710()
{
  HANDLE result; // eax
  void *v1; // ebx
  HANDLE v2; // eax
  void *v3; // esi
  PROCESSENTRY32W pe; // [esp+4h] [ebp-230h] BYREF

  memset(&pe, 0, sizeof(pe));
  result = CreateToolhelp32Snapshot(2u, 0);
  v1 = result;
  if ( result != (HANDLE)-1 )
  {
    pe.dwSize = 556;
    if ( Process32FirstW(result, &pe) )
    {
      do
      {
        if ( lstrcmpiW(pe.szExeFile, L"explorer.exe") == 0 )
        {
          v2 = OpenProcess(0x100401u, false, pe.th32ProcessID);
          v3 = v2;
          if ( v2 != nullptr )
          {
            if ( !TerminateProcess(v2, 0) )
            {
              GetLastError();
              sub_4051F0((wchar_t *)L"Sheriff9 %s - TerminateProcess Fail - %u", (int)pe.szExeFile);
            }
            CloseHandle(v3);
          }
        }
        pe.dwSize = 556;
      }
      while ( Process32NextW(v1, &pe) );
    }
    return (HANDLE)CloseHandle(v1);
  }
  return result;
}

// Address: 0x402810
HANDLE __usercall sub_402810@<eax>(int a1@<eax>, int a2@<edi>)
{
  HANDLE result; // eax
  int v4; // esi

  sub_4051F0((wchar_t *)L"VDiskEnableJob %d", *(unsigned __int16 *)(a1 + 12));
  if ( *(_WORD *)(a1 + 12) != 0 )
  {
    result = (HANDLE)(*(unsigned __int16 *)(a1 + 12) - 1);
    if ( *(_WORD *)(a1 + 12) == 1 )
    {
      result = (HANDLE)sub_402360();
      *(_DWORD *)(a2 + 526) = result;
    }
  }
  else
  {
    v4 = atoi((const char *)(a1 + 14));
    if ( sub_402490(v4) == 0 )
      *(_DWORD *)(a2 + 526) = -1;
    sub_402410(v4);
    return sub_402710();
  }
  return result;
}

// Address: 0x402880
int __cdecl sub_402880(int a1)
{
  int result; // eax
  _DWORD *v2; // edi
  int v3; // eax
  int v4; // esi
  int *v5; // eax
  volatile signed __int32 *v6; // edi
  volatile signed __int32 *v7; // esi
  volatile signed __int32 *v8; // ebx
  volatile signed __int32 *v9; // edi
  _DWORD *v10; // [esp+14h] [ebp-30h]
  int v11; // [esp+18h] [ebp-2Ch]
  int v12; // [esp+1Ch] [ebp-28h]
  BYTE Data[4]; // [esp+20h] [ebp-24h] BYREF
  int v14; // [esp+24h] [ebp-20h] BYREF
  volatile signed __int32 *v15; // [esp+28h] [ebp-1Ch]
  int v16; // [esp+2Ch] [ebp-18h] BYREF
  volatile signed __int32 *v17; // [esp+30h] [ebp-14h]
  int v18; // [esp+40h] [ebp-4h]

  result = 0;
  v2 = &unk_42E400;
  v12 = 0;
  v10 = &unk_42E400;
  do
  {
    if ( *v2 == a1 )
      goto LABEL_31;
    v3 = dword_42EC5C;
    *v2 = a1;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(v3 + 4) + 76))(
           *(_DWORD *)(v3 + 4),
           v2 - 130,
           a1) != 0 )
      sub_4051F0(L"Success service monitor record : %s (%d)\n", (int)(v2 - 130));
    else
      sub_4051F0((wchar_t *)L"Failed service monitor record : %s (%d)\n", (int)(v2 - 130));
    if ( v12 == 0 )
    {
      sub_401D30(&v14);
      v18 = 0;
      v4 = v14;
      if ( v14 != 0 )
      {
        v8 = v15;
      }
      else
      {
        v5 = sub_401DA0(&v16);
        LOBYTE(v18) = 1;
        v6 = (volatile signed __int32 *)v5[1];
        v11 = *v5;
        if ( v6 != nullptr )
          _InterlockedExchangeAdd(v6 + 2, 1u);
        v7 = v15;
        if ( v15 != nullptr && _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 0 )
        {
          (**(void (__thiscall ***)(volatile signed __int32 *))v7)(v7);
          if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 0 )
            (*(void (__thiscall **)(volatile signed __int32 *))(*v7 + 4))(v7);
        }
        v4 = v11;
        LOBYTE(v18) = 0;
        v8 = v6;
        v15 = v6;
        v14 = v11;
        if ( v17 != nullptr )
        {
          v9 = v17;
          if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 0 )
          {
            (**(void (__thiscall ***)(volatile signed __int32 *))v9)(v9);
            if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 0 )
              (*(void (__thiscall **)(volatile signed __int32 *))(*v9 + 4))(v9);
          }
        }
        if ( v11 == 0 )
          goto LABEL_25;
      }
      RegDeleteValueW(*(HKEY *)(v4 + 4), L"AuOptions");
      if ( *v10 != 0 )
      {
        *(_DWORD *)Data = 0;
        RegSetValueExW(*(HKEY *)(v4 + 4), L"NoAutoUpdate", 0, 4u, Data, 4u);
      }
      else
      {
        RegDeleteValueW(*(HKEY *)(v4 + 4), L"NoAutoUpdate");
      }
      v12 = 1;
LABEL_25:
      v18 = -1;
      if ( v8 != nullptr && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 0 )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 0 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*v8 + 4))(v8);
      }
      v2 = v10;
    }
    result = 1;
LABEL_31:
    v2 += 131;
    v10 = v2;
  }
  while ( (int)v2 < (int)aAvCtypeDStd );
  return result;
}

// Address: 0x402A90
int __usercall sub_402A90@<eax>(int a1@<eax>, int a2@<edi>)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  sub_4051F0((wchar_t *)L"VDiskEnableJob %d", *(unsigned __int16 *)(a1 + 12));
  result = *(unsigned __int16 *)(a1 + 12);
  switch ( *(_WORD *)(a1 + 12) )
  {
    case 0:
      v4 = atoi((const char *)(a1 + 14));
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_42EC5C + 4) + 12))(
                 *(_DWORD *)(dword_42EC5C + 4),
                 v4);
      *(_DWORD *)(a2 + 526) = (unsigned __int8)result;
      break;
    case 1:
      result = (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_42EC5C + 4) + 12))(
                 *(_DWORD *)(dword_42EC5C + 4),
                 0);
      *(_DWORD *)(a2 + 526) = (unsigned __int8)result;
      break;
    case 2:
      v5 = atoi((const char *)(a1 + 14));
      result = sub_402880(v5);
      *(_DWORD *)(a2 + 526) = result;
      break;
    case 3:
      v6 = atoi((const char *)(a1 + 14));
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_42EC5C + 4) + 16))(
                 *(_DWORD *)(dword_42EC5C + 4),
                 v6);
      *(_DWORD *)(a2 + 526) = (unsigned __int8)result;
      break;
    case 4:
      v7 = atoi((const char *)(a1 + 14));
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_42EC5C + 4) + 20))(
                 *(_DWORD *)(dword_42EC5C + 4),
                 v7);
      *(_DWORD *)(a2 + 526) = (unsigned __int8)result;
      break;
    default:
      return result;
  }
  return result;
}

// Address: 0x402B80
BOOL __usercall sub_402B80@<eax>(const char *a1@<eax>, const char *a2@<ebx>)
{
  const char *v3; // ebp

  v3 = a1 + 448;
  return strlen(a1 + 448) != 0
      && strlen(a1 + 432) != 0
      && (strcmp(a2, (const char *)&dword_42778C) == 0 || strstr(a1 + 268, a2) != nullptr)
      && strcmp("0.0.0.0", a1 + 432) != 0
      && strcmp("0.0.0.0", v3) != 0;
}

// Address: 0x402C80
int sub_402C80()
{
  HANDLE ProcessHeap; // eax
  struct _IP_ADAPTER_INFO *v1; // ebp
  HANDLE v2; // eax
  HANDLE v3; // eax
  const char *v4; // ebx
  const char *v5; // esi
  const char *v6; // edi
  HANDLE v7; // eax
  SIZE_T v9; // [esp-4h] [ebp-630h]
  int v10; // [esp+0h] [ebp-62Ch]
  int v11; // [esp+14h] [ebp-618h]
  ULONG SizePointer; // [esp+18h] [ebp-614h] BYREF
  int v13; // [esp+1Ch] [ebp-610h]
  char v14[256]; // [esp+20h] [ebp-60Ch] BYREF
  char v15[256]; // [esp+120h] [ebp-50Ch] BYREF
  char v16[256]; // [esp+220h] [ebp-40Ch] BYREF
  char v17[256]; // [esp+320h] [ebp-30Ch] BYREF
  char v18[256]; // [esp+420h] [ebp-20Ch] BYREF
  char v19[260]; // [esp+520h] [ebp-10Ch] BYREF

  v11 = 0;
  SizePointer = 648;
  ProcessHeap = GetProcessHeap();
  v1 = (struct _IP_ADAPTER_INFO *)HeapAlloc(ProcessHeap, 0, 0x288u);
  if ( v1 == nullptr )
    sub_4051F0((wchar_t *)L"Error allocating memory needed to call GetAdaptersinfo\n", v10);
  if ( GetAdaptersInfo(v1, &SizePointer) == 111 )
  {
    sub_4051F0((wchar_t *)L"GetAdaptersInfo ERROR_BUFFER_OVERFLOW", v10);
    v2 = GetProcessHeap();
    HeapFree(v2, 0, v1);
    v9 = SizePointer;
    v3 = GetProcessHeap();
    v1 = (struct _IP_ADAPTER_INFO *)HeapAlloc(v3, 0, v9);
  }
  if ( GetAdaptersInfo(v1, &SizePointer) != 0 )
    return 0;
  strcpy(v14, "Realtek");
  memset(&v14[8], 0, 0xF8u);
  strcpy(v15, "Intel");
  memset(&v15[6], 0, 0xFAu);
  strcpy(v16, "3Com");
  memset(&v16[5], 0, 0xFBu);
  strcpy(v17, "Atheros");
  memset(&v17[8], 0, 0xF8u);
  strcpy(v18, "Broadcom");
  memset(&v18[9], 0, 0xF7u);
  strcpy(v19, "Others");
  memset(&v19[7], 0, 0xF9u);
  v13 = 0;
  v4 = v14;
  while ( 1 )
  {
    v5 = (const char *)v1;
    if ( v1 != nullptr )
      break;
LABEL_10:
    sub_4051F0((wchar_t *)L"GetAdaptersInfo NULL", v10);
    v4 += 256;
    if ( ++v13 >= 6 )
      goto LABEL_13;
  }
  while ( 1 )
  {
    v6 = *(const char **)v5;
    sub_4051F0((wchar_t *)L"ClassM_Service NIC Info - AdapterName : %S", (int)(v5 + 268));
    if ( sub_402B80(v5, v4) )
      break;
    v5 = v6;
    if ( v6 == nullptr )
      goto LABEL_10;
  }
  v11 = 1;
  sub_4051F0(
    (wchar_t *)L"ClassM_Service Valid NIC Info - AdapterName : %S, MacAddr : %02X-%02X-%02X-%02X-%02X-%02X",
    (int)(v5 + 268));
LABEL_13:
  if ( v1 != nullptr )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v1);
  }
  return v11;
}

// Address: 0x402F20
char sub_402F20()
{
  wchar_t *v1; // esi
  wchar_t *v2; // esi
  int v3; // eax
  int v4; // [esp+0h] [ebp-A64h]
  int v5; // [esp+0h] [ebp-A64h]
  _DWORD v6[526]; // [esp+14h] [ebp-A50h] BYREF
  char v7; // [esp+84Ch] [ebp-218h]
  _BYTE v8[511]; // [esp+84Dh] [ebp-217h] BYREF
  int v9; // [esp+A60h] [ebp-4h]

  if ( (unsigned __int8)sub_405020() == 0 )
  {
    sub_4051F0((wchar_t *)L"Cannot create innoguard instance\n", v4);
    return 0;
  }
  v1 = aHddSheriff9;
  do
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, wchar_t *, _DWORD))(**(_DWORD **)(dword_42EC5C + 4) + 32))(
           *(_DWORD *)(dword_42EC5C + 4),
           v1,
           *((_DWORD *)v1 + 130)) != 0 )
      sub_4051F0(L"Success guard record : %s\n", (int)v1);
    else
      sub_4051F0((wchar_t *)L"Failed guard recordt : %s\n", (int)v1);
    v1 += 262;
  }
  while ( (int)v1 < (int)aWuauserv );
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(dword_42EC5C + 4) + 52))(*(_DWORD *)(dword_42EC5C + 4)) != 0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(dword_42EC5C + 4) + 56))(*(_DWORD *)(dword_42EC5C + 4)) != 0 )
    {
      sub_4051F0((wchar_t *)L"Service Watcher service started.\n", v4);
      v2 = aWuauserv;
      do
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, wchar_t *, _DWORD))(**(_DWORD **)(dword_42EC5C + 4) + 64))(
               *(_DWORD *)(dword_42EC5C + 4),
               v2,
               *((_DWORD *)v2 + 130)) != 0 )
          sub_4051F0(L"Success service monitor record : %s (%d)\n", (int)v2);
        else
          sub_4051F0((wchar_t *)L"Failed service monitor record : %s (%d)\n", (int)v2);
        v2 += 262;
      }
      while ( (int)v2 < (int)&off_42EC34 );
    }
    else
    {
      sub_4051F0(L"Service Watcher service failed to start.\n", v4);
    }
  }
  else
  {
    sub_4051F0((wchar_t *)L"Failed to create service watcher object.\n", v4);
  }
  memset(v6, 0, sizeof(v6));
  v9 = 0;
  if ( dword_42EC44 == 0 )
    goto LABEL_21;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(dword_42EC44 + 8) + 4))(
         *(_DWORD *)(dword_42EC44 + 8),
         v6) != 0 )
  {
    if ( (v6[0] & 4) != 0 )
    {
      if ( (v6[0] & 0x20) == 0 && (v6[0] & 0x30) == 0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_42EC5C + 4) + 12))(
               *(_DWORD *)(dword_42EC5C + 4),
               55) != 0 )
          sub_4051F0(L"Innosoft guard service started.\n", v5);
        else
          sub_4051F0((wchar_t *)L"Innosoft guard service failed to start.\n", v5);
      }
      v7 = 0;
      memset(v8, 0, sizeof(v8));
      sub_404DB0(&off_42EC40);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_42EC5C + 4) + 16))(
        *(_DWORD *)(dword_42EC5C + 4),
        *(_DWORD *)&v8[23]);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_42EC5C + 4) + 20))(
        *(_DWORD *)(dword_42EC5C + 4),
        *(_DWORD *)&v8[27]);
      sub_402880(*(int *)&v8[19]);
    }
    else
    {
      sub_4051F0((wchar_t *)L"IsRunning() Funtion False.\n", v5);
    }
    return 1;
  }
  if ( dword_42EC44 != 0 )
  {
    v3 = (***(int (__thiscall ****)(_DWORD))(dword_42EC44 + 8))(*(_DWORD *)(dword_42EC44 + 8));
    sub_4051F0((wchar_t *)L"Cannot get status : %08X\n", v3);
  }
  else
  {
LABEL_21:
    sub_4051F0((wchar_t *)L"Cannot get status : %08X\n", 0x40000000);
  }
  return 1;
}

// Address: 0x4031E0
char __cdecl sub_4031E0(char a1)
{
  int v1; // eax
  WCHAR *v2; // ecx
  wchar_t *v3; // esi
  wchar_t *v5; // eax
  HMODULE LibraryW; // esi
  void (*innoBackupIPinfo)(void); // eax
  char LastError; // al
  void (*innoRestoreIPinfo)(void); // eax
  char v10; // al
  char v11; // [esp+0h] [ebp-34h]
  char v12; // [esp+0h] [ebp-34h]
  char v13; // [esp+0h] [ebp-34h]
  _BYTE v14[12]; // [esp+Ch] [ebp-28h] BYREF
  LPWSTR lpFilename; // [esp+18h] [ebp-1Ch]
  int v16; // [esp+1Ch] [ebp-18h]
  int v17; // [esp+30h] [ebp-4h]

  sub_403E00(v14);
  v17 = 0;
  v1 = v16;
  v2 = lpFilename;
  if ( (v16 - (int)lpFilename) >> 1 == 0 )
  {
    _invalid_parameter_noinfo();
    v1 = v16;
    v2 = lpFilename;
  }
  v3 = v2;
  if ( GetModuleFileNameW(nullptr, v2, (v1 - (int)v2) >> 1) == 0 )
  {
    sub_4053E0((wchar_t *)L"InnoIpMgr : GetModuleFileName failed.", v11);
LABEL_5:
    v17 = -1;
    sub_403E70(v14);
    return 0;
  }
  v5 = wcsrchr(v3, 0x5Cu);
  if ( v5 != nullptr )
    v5[1] = 0;
  wcscat_s(v3, (v16 - (int)lpFilename) >> 1, L"innoIPMgr.dll");
  if ( !PathFileExistsW(v3) )
  {
    sub_4053E0((wchar_t *)L"InnoIpMgr : The file could not be found.(%s)", (char)v3);
    goto LABEL_5;
  }
  LibraryW = LoadLibraryW(v3);
  if ( LibraryW == nullptr )
    goto LABEL_5;
  if ( a1 != 0 )
  {
    sub_4053E0((wchar_t *)L"InnoIpMgr : BackupNetworkInformation", v11);
    innoBackupIPinfo = (void (*)(void))GetProcAddress(LibraryW, "innoBackupIPinfo");
    if ( innoBackupIPinfo != nullptr )
    {
      innoBackupIPinfo();
    }
    else
    {
      LastError = GetLastError();
      sub_4053E0((wchar_t *)L"InnoIpMgr : GetProcAddress(innoBackupIPinfo) failed.(%d)", LastError);
    }
    sub_4053E0(L"InnoIpMgr : BackupNetworkInformation finish.", v12);
  }
  else
  {
    sub_4053E0((wchar_t *)L"InnoIpMgr : RestoreNetworkInformation start", v11);
    innoRestoreIPinfo = (void (*)(void))GetProcAddress(LibraryW, "innoRestoreIPinfo");
    if ( innoRestoreIPinfo != nullptr )
    {
      innoRestoreIPinfo();
    }
    else
    {
      v10 = GetLastError();
      sub_4053E0((wchar_t *)L"InnoIpMgr : GetProcAddress(innoRestoreIPinfo) failed.(%d)", v10);
    }
    sub_4053E0((wchar_t *)L"InnoIpMgr : RestoreNetworkInformation finish.", v13);
  }
  FreeLibrary(LibraryW);
  v17 = -1;
  sub_403E70(v14);
  return 1;
}

// Address: 0x4033A0
DWORD __stdcall StartAddress(void **lpThreadParameter)
{
  void *v1; // ecx
  DWORD result; // eax
  char LastError; // al
  char v4; // [esp+0h] [ebp-28h]
  HANDLE Handle; // [esp+10h] [ebp-18h] BYREF
  struct _OVERLAPPED overlapped; // [esp+14h] [ebp-14h] BYREF

  v1 = *lpThreadParameter;
  Handle = nullptr;
  overlapped.hEvent = v1;
  if ( NotifyAddrChange(&Handle, &overlapped) != 0 )
  {
    while ( GetLastError() == 997 )
    {
      if ( WaitForSingleObject(overlapped.hEvent, 0xFFFFFFFF) == 0 )
      {
        sub_4053E0((wchar_t *)L"Ip Address Change", v4);
        sub_4031E0(1);
        ResetEvent(overlapped.hEvent);
      }
      result = NotifyAddrChange(&Handle, &overlapped);
      if ( result == 0 )
        return result;
    }
    LastError = GetLastError();
    sub_4053E0((wchar_t *)L"NotifyAddrChange error...%d", LastError);
  }
  return 0;
}

// Address: 0x403450
int sub_403450()
{
  SERVICE_STATUS_HANDLE v0; // eax
  DWORD LastError; // eax
  int v3; // esi
  int v4; // eax
  SOCKET v5; // eax
  SOCKET v6; // esi
  HANDLE v7; // edi
  DWORD v8; // ebx
  FARPROC (__stdcall *v9)(HMODULE, LPCSTR); // esi
  FARPROC InnoGuardDelete; // eax
  char lNetworkEvents; // al
  SOCKET v12; // esi
  HANDLE v13; // edi
  int Error; // eax
  int v15; // eax
  int i; // esi
  FARPROC v17; // eax
  void (*v18)(void); // eax
  int v19; // [esp+0h] [ebp-4B0h]
  struct _WSANETWORKEVENTS NetworkEvents; // [esp+14h] [ebp-49Ch] BYREF
  char optval[4]; // [esp+40h] [ebp-470h] BYREF
  int v22; // [esp+44h] [ebp-46Ch]
  int addrlen; // [esp+48h] [ebp-468h] BYREF
  DWORD v24; // [esp+4Ch] [ebp-464h]
  SOCKET *v25; // [esp+50h] [ebp-460h]
  HANDLE Parameter; // [esp+54h] [ebp-45Ch] BYREF
  char v27[536]; // [esp+58h] [ebp-458h] BYREF
  char buf[532]; // [esp+270h] [ebp-240h] BYREF
  struct sockaddr name; // [esp+484h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+498h] [ebp-18h]

  v0 = RegisterServiceCtrlHandlerExW(L"SheriffAgent", HandlerProc, nullptr);
  hServiceStatus = v0;
  if ( v0 == nullptr )
    return -1;
  ServiceStatus.dwCurrentState = 2;
  SetServiceStatus(v0, &ServiceStatus);
  if ( !sub_402020() )
  {
LABEL_5:
    ServiceStatus.dwCurrentState = 32;
    SetServiceStatus(hServiceStatus, &ServiceStatus);
    LastError = GetLastError();
    sub_4051F0((wchar_t *)L"SheriffAgent _tmain_Service Initialize Error %d", LastError);
    return -1;
  }
  if ( hLibModule != nullptr )
  {
    sub_4051F0((wchar_t *)L"Initialized CSheriffCert", v19);
    goto LABEL_5;
  }
  hLibModule = LoadLibraryW(L"IntegCert.dll");
  if ( hLibModule == nullptr || sub_404620(&hLibModule) == 0 || (unsigned __int8)sub_404CB0() == 0 )
    goto LABEL_5;
  sub_402F20();
  if ( sub_4096E0() != 0 )
    sub_4091A0();
  sub_4031E0(0);
  Parameter = CreateEventW(nullptr, false, false, nullptr);
  if ( Parameter != nullptr )
    CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)StartAddress, &Parameter, 0, nullptr);
  v3 = 0;
  if ( sub_404B30(0, 0) != 0 && sub_402C80() == 0 )
  {
    do
    {
      if ( v3 > 30 )
        break;
      Sleep(0x3E8u);
      ++v3;
    }
    while ( sub_402C80() == 0 );
  }
  ServiceStatus.dwCurrentState = 4;
  SetServiceStatus(hServiceStatus, &ServiceStatus);
  memset(&NetworkEvents, 0, sizeof(NetworkEvents));
  memset(&name, 0, sizeof(name));
  memset(buf, 0, 526);
  memset(v27, 0, 534);
  addrlen = 0;
  memset(&s, 0, 0x100u);
  memset(&hEventObject, 0, 0x100u);
  if ( !PathFileExistsW(L"\\\\.\\SheriffVDisk0\\Partition0\\Info") )
    CreateDirectoryW(L"\\\\.\\SheriffVDisk0\\Partition0\\Info", nullptr);
  v4 = sub_402360();
  sub_402490(v4);
  ms_exc.registration.TryLevel = 0;
  v5 = socket(2, 1, 0);
  v6 = v5;
  if ( v5 != -1 )
  {
    *(_DWORD *)optval = 30;
    v22 = 0;
    setsockopt(v5, 0xFFFF, 4102, optval, 8);
    setsockopt(v6, 0xFFFF, 4101, optval, 8);
    name.sa_family = 2;
    *(_DWORD *)&name.sa_data[2] = htonl(0);
    *(_WORD *)name.sa_data = htons(0x7530u);
    if ( bind(v6, &name, 16) != -1 && listen(v6, 5) != -1 )
    {
      v7 = WSACreateEvent();
      if ( WSAEventSelect(v6, v7, 8) != -1 )
      {
        sub_402080(v6, v7);
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v8 = WSAWaitForMultipleEvents(cEvents, &hEventObject, false, 0x3E8u, false);
              v24 = v8;
              if ( sub_401E50() == (SC_HANDLE)1 )
                goto LABEL_26;
              if ( sub_401E50() != (SC_HANDLE)7 )
                break;
              Sleep(0x3E8u);
            }
            if ( v8 != -1 && v8 != 258 )
            {
              v25 = &s + v8;
              if ( WSAEnumNetworkEvents(*v25, *(&hEventObject + v8), &NetworkEvents) != -1 )
                break;
            }
          }
          lNetworkEvents = NetworkEvents.lNetworkEvents;
          if ( (NetworkEvents.lNetworkEvents & 8) == 0 )
            goto LABEL_44;
          if ( NetworkEvents.iErrorCode[3] == 0 )
          {
            addrlen = 16;
            v12 = accept(*v25, &name, &addrlen);
            if ( v12 != -1 )
            {
              v13 = WSACreateEvent();
              if ( WSAEventSelect(v12, v13, 35) != -1 && sub_402080(v12, v13) != 0 )
              {
                lNetworkEvents = NetworkEvents.lNetworkEvents;
LABEL_44:
                if ( (lNetworkEvents & 1) != 0 )
                {
                  if ( NetworkEvents.iErrorCode[0] == 0 )
                  {
                    memset(buf, 0, 0x20Eu);
                    memset(v27, 0, 0x216u);
                    if ( recv(*v25, buf, 526, 0) == -1 )
                    {
                      Error = WSAGetLastError();
                      sub_4051F0((wchar_t *)L"SheriffAgent Service Recv error : %d %d", Error);
                      if ( WSAGetLastError() != 10035 )
                        sub_4020B0(v8);
                      goto LABEL_49;
                    }
                    if ( strcmp(buf, "sheriff") != 0 )
                      goto LABEL_62;
                    qmemcpy(v27, buf, 526);
                    if ( *(_WORD *)&buf[10] != 0 )
                    {
                      if ( *(unsigned __int16 *)&buf[10] == 1 )
                      {
                        sub_402810((int)buf, (int)v27);
                      }
                      else if ( *(unsigned __int16 *)&buf[10] == 3 )
                      {
                        sub_402A90((int)buf, (int)v27);
                      }
                    }
                    else
                    {
                      sub_402130((int)buf, (int)v27);
                    }
                    if ( send(*v25, v27, 534, 0) != -1 )
                    {
                      v8 = v24;
LABEL_62:
                      lNetworkEvents = NetworkEvents.lNetworkEvents;
                      goto LABEL_63;
                    }
                    v15 = WSAGetLastError();
                    sub_4051F0((wchar_t *)L"SheriffAgent Service Send error : %d", v15);
                    if ( WSAGetLastError() != 10035 )
                      sub_4020B0(v24);
LABEL_49:
                    Sleep(1u);
                  }
                }
                else
                {
LABEL_63:
                  if ( ((lNetworkEvents & 2) == 0 || NetworkEvents.iErrorCode[1] == 0)
                    && (lNetworkEvents & 0x20) != 0
                    && NetworkEvents.iErrorCode[5] == 0 )
                  {
                    sub_4020B0(v8);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_26:
  ms_exc.registration.TryLevel = -2;
  for ( i = 0; i < 256; i += 4 )
  {
    if ( *(SOCKET *)((char *)&s + i) != 0 )
      closesocket(*(SOCKET *)((char *)&s + i));
    if ( *(HANDLE *)((char *)&hEventObject + i) != nullptr )
      WSACloseEvent(*(HANDLE *)((char *)&hEventObject + i));
  }
  if ( Parameter != nullptr )
  {
    SetEvent(Parameter);
    CloseHandle(Parameter);
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_42EC5C + 4) + 12))(*(_DWORD *)(dword_42EC5C + 4), 0);
  if ( dword_42EC5C != 0 && hModule != nullptr )
  {
    v9 = GetProcAddress;
    InnoGuardDelete = GetProcAddress(hModule, "InnoGuardDelete");
    if ( InnoGuardDelete != nullptr )
    {
      ((void (__stdcall *)(int))InnoGuardDelete)(dword_42EC5C);
      dword_42EC5C = 0;
    }
  }
  else
  {
    v9 = GetProcAddress;
  }
  if ( dword_42EC44 != 0 && dword_42EC54 != nullptr )
  {
    v17 = v9(dword_42EC54, "SheriffDelete");
    if ( v17 != nullptr )
    {
      ((void (__stdcall *)(int))v17)(dword_42EC44);
      dword_42EC44 = 0;
    }
  }
  v18 = (void (*)(void))v9(hLibModule, (LPCSTR)2);
  if ( v18 != nullptr )
    v18();
  if ( hLibModule != nullptr )
  {
    FreeLibrary(hLibModule);
    hLibModule = nullptr;
  }
  WSACleanup();
  return 0;
}

// Address: 0x403BA0
int sub_403BA0()
{
  SC_HANDLE v0; // eax
  SC_HANDLE v1; // ebx
  SC_HANDLE v3; // esi
  char v4; // [esp+0h] [ebp-34h]
  char v5; // [esp+0h] [ebp-34h]
  char v6; // [esp+0h] [ebp-34h]
  DWORD pcbBytesNeeded; // [esp+Ch] [ebp-28h] BYREF
  BYTE Buffer[4]; // [esp+10h] [ebp-24h] BYREF
  char Args[32]; // [esp+14h] [ebp-20h]

  v0 = OpenSCManagerW(nullptr, L"ServicesActive", 0xF003Fu);
  v1 = v0;
  if ( v0 != nullptr )
  {
    v3 = OpenServiceW(v0, L"SheriffVDisk", 0x14u);
    if ( v3 != nullptr )
    {
      if ( QueryServiceStatusEx(v3, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pcbBytesNeeded) )
      {
        if ( *(_DWORD *)Args == 4 )
        {
          sub_4053E0((wchar_t *)L"SheriffVDisk Service is already running.", v4);
        }
        else if ( *(_DWORD *)Args == 1 )
        {
          sub_4053E0((wchar_t *)L"SheriffVDisk Service is stopped. Attempting to start the service...", v4);
          if ( StartServiceW(v3, 0, nullptr) )
          {
            sub_4053E0((wchar_t *)L"SheriffVDisk StartService sent successfully.", v5);
            Sleep(0x3E8u);
            if ( QueryServiceStatusEx(v3, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pcbBytesNeeded) )
            {
              if ( *(_DWORD *)Args == 4 )
              {
                sub_4053E0((wchar_t *)L"SheriffVDisk is now running.", v6);
              }
              else if ( *(_DWORD *)Args == 2 )
              {
                sub_4053E0((wchar_t *)L"SheriffVDisk is starting...", v6);
              }
              else
              {
                sub_4053E0(L"SheriffVDisk state after start attempt: %d", Args[0]);
              }
            }
          }
          else
          {
            sub_4053E0((wchar_t *)L"CheckSheriffVDisk : StartService Error", v5);
          }
        }
        else
        {
          sub_4053E0(
            (wchar_t *)L"SheriffVDisk is in a transition state (e.g., START_PENDING, STOP_PENDING). State: %d",
            Args[0]);
        }
        CloseServiceHandle(v3);
        CloseServiceHandle(v1);
        return 0;
      }
      else
      {
        sub_4053E0((wchar_t *)L"CheckSheriffVDisk : QueryServiceStatusEx Error", v4);
        CloseServiceHandle(v3);
        CloseServiceHandle(v1);
        return 1;
      }
    }
    else
    {
      sub_4053E0((wchar_t *)L"CheckSheriffVDisk : OpenService Error", v4);
      CloseServiceHandle(v1);
      return 1;
    }
  }
  else
  {
    sub_4053E0((wchar_t *)L"CheckSheriffVDisk : OpenSCManager Error", v4);
    return 1;
  }
}

// Address: 0x403D20
int wmain()
{
  SERVICE_TABLE_ENTRYW ServiceStartTable; // [esp+0h] [ebp-10h] BYREF
  int v2; // [esp+8h] [ebp-8h]
  int v3; // [esp+Ch] [ebp-4h]

  ServiceStartTable.lpServiceProc = (LPSERVICE_MAIN_FUNCTIONW)sub_403450;
  v2 = 0;
  v3 = 0;
  sub_405360();
  sub_4053E0((wchar_t *)L"Start Debug Log...", (char)L"SheriffAgent");
  sub_403BA0();
  if ( !StartServiceCtrlDispatcherW(&ServiceStartTable) )
    return -1;
  sub_4053E0((wchar_t *)L"End Debug Log...", (char)ServiceStartTable.lpServiceName);
  return 0;
}

// Address: 0x403D90
int __thiscall sub_403D90(int this, void *Source)
{
  *(_DWORD *)(this + 24) = 15;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 4) = 0;
  sub_4040A0(Source, strlen((const char *)Source));
  return this;
}

// Address: 0x403DD0
int __thiscall sub_403DD0(int this)
{
  if ( *(_DWORD *)(this + 24) >= 0x10u )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 24) = 15;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 4) = 0;
  return 0;
}

// Address: 0x403E00
_DWORD *__stdcall sub_403E00(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = operator new(4u);
  if ( v1 != nullptr )
    *v1 = a1;
  else
    v1 = nullptr;
  *a1 = v1;
  sub_404050();
  return a1;
}

// Address: 0x403E70
void __stdcall sub_403E70(int a1)
{
  void *v1; // [esp-4h] [ebp-1Ch]

  if ( *(_DWORD *)(a1 + 12) != 0 )
    operator delete(*(void **)(a1 + 12));
  v1 = *(void **)a1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  operator delete(v1);
}

// Address: 0x403EF0
int __thiscall sub_403EF0(int this, _DWORD *a2, unsigned int a3, rsize_t a4)
{
  rsize_t v5; // edi
  unsigned int v7; // eax
  bool v8; // zf
  _DWORD *v9; // edx
  rsize_t v10; // ecx
  void **v11; // ebx
  void *v12; // eax
  bool v13; // cf

  if ( a2[5] < a3 )
    sub_4097CA();
  v5 = a2[5] - a3;
  if ( a4 < v5 )
    v5 = a4;
  if ( (_DWORD *)this == a2 )
  {
    sub_404180(a3 + v5, -1);
    sub_404180(0, a3);
    return this;
  }
  if ( v5 == -1 )
    sub_409792();
  v7 = *(_DWORD *)(this + 24);
  if ( v7 >= v5 )
  {
    v8 = v5 == 0;
    if ( v5 == 0 )
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
    sub_404230(v5, *(_DWORD *)(this + 20));
    v8 = v5 == 0;
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
    memcpy_s(v12, v10, (char *)v9 + a3, v5);
    v13 = *(_DWORD *)(this + 24) < 0x10u;
    *(_DWORD *)(this + 20) = v5;
    if ( !v13 )
      v11 = (void **)*v11;
    *((_BYTE *)v11 + v5) = 0;
  }
  return this;
}

// Address: 0x403FD0
int __stdcall sub_403FD0(void *Source)
{
  return sub_4040A0(Source, strlen((const char *)Source));
}

// Address: 0x404000
void __thiscall sub_404000(_DWORD *this, char a2, rsize_t SourceSize)
{
  void *v4; // ebx

  if ( a2 != 0 && *(this + 6) >= 0x10u )
  {
    v4 = (void *)*(this + 1);
    if ( SourceSize != 0 )
      memcpy_s(this + 1, 0x10u, v4, SourceSize);
    operator delete(v4);
  }
  *(this + 5) = SourceSize;
  *(this + 6) = 15;
  *((_BYTE *)this + SourceSize + 4) = 0;
}

// Address: 0x4040A0
int __fastcall sub_4040A0(int a1, int a2, _BYTE *Source, rsize_t SourceSize)
{
  unsigned int v5; // edx
  _DWORD *v6; // eax
  unsigned int v7; // ecx
  int v8; // ecx
  rsize_t v10; // eax
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
        return sub_403EF0(a1, (_DWORD *)a1, Source - (_BYTE *)v6, SourceSize);
      }
    }
  }
  if ( SourceSize == -1 )
    sub_409792();
  v10 = *(_DWORD *)(a1 + 24);
  if ( v10 >= SourceSize )
  {
    v11 = SourceSize == 0;
    if ( SourceSize == 0 )
    {
      *(_DWORD *)(a1 + 20) = 0;
      if ( v10 < 0x10 )
        *(_BYTE *)(a1 + 4) = 0;
      else
        **(_BYTE **)(a1 + 4) = 0;
      return a1;
    }
  }
  else
  {
    sub_404230(SourceSize, *(_DWORD *)(a1 + 20));
    v11 = SourceSize == 0;
  }
  if ( !v11 )
  {
    v12 = *(_DWORD *)(a1 + 24);
    v13 = (void **)(a1 + 4);
    if ( v12 < 0x10 )
      v14 = (void *)(a1 + 4);
    else
      v14 = *v13;
    memcpy_s(v14, v12, Source, SourceSize);
    v15 = *(_DWORD *)(a1 + 24) < 0x10u;
    *(_DWORD *)(a1 + 20) = SourceSize;
    if ( !v15 )
      v13 = (void **)*v13;
    *((_BYTE *)v13 + SourceSize) = 0;
  }
  return a1;
}

// Address: 0x404180
_DWORD *__thiscall sub_404180(_DWORD *this, unsigned int a2, unsigned int a3)
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
    sub_4097CA();
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

// Address: 0x404210
_DWORD *__thiscall sub_404210(_DWORD *this, struct std::exception *a2)
{
  sub_401CB0((int)this, a2);
  *this = &std::length_error::`vftable';
  return this;
}

// Address: 0x404230
_BYTE *__thiscall sub_404230(int this, unsigned int a2, rsize_t SourceSize)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  size_t v7; // ecx
  void *v8; // ebx
  rsize_t v9; // ecx
  const void *v10; // eax
  _BYTE *result; // eax
  int v12; // [esp+0h] [ebp-38h] BYREF
  _DWORD pExceptionObject[3]; // [esp+10h] [ebp-28h] BYREF
  char *v14[3]; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+34h] [ebp-4h]

  v14[2] = (char *)&v12;
  v14[1] = (char *)this;
  v4 = a2 | 0xF;
  if ( (a2 | 0xF) == 0xFFFFFFFF )
  {
    v4 = a2;
  }
  else
  {
    v5 = *(_DWORD *)(this + 24);
    v6 = v5 >> 1;
    if ( v4 / 3 < v5 >> 1 && v5 <= -2 - v6 )
      v4 = v6 + v5;
  }
  v7 = v4 + 1;
  v15 = 0;
  if ( v4 == -1 )
  {
    v7 = 0;
  }
  else if ( 0xFFFFFFFF / v7 == 0 )
  {
    v14[0] = nullptr;
    std::exception::exception((std::exception *)pExceptionObject, (const char *const *)v14);
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  v8 = operator new(v7);
  v15 = -1;
  v9 = SourceSize;
  if ( SourceSize != 0 )
  {
    if ( *(_DWORD *)(this + 24) < 0x10u )
      v10 = (const void *)(this + 4);
    else
      v10 = *(const void **)(this + 4);
    memcpy_s(v8, v4 + 1, v10, SourceSize);
    v9 = SourceSize;
  }
  if ( *(_DWORD *)(this + 24) >= 0x10u )
  {
    operator delete(*(void **)(this + 4));
    v9 = SourceSize;
  }
  result = (_BYTE *)(this + 4);
  *(_BYTE *)(this + 4) = 0;
  *(_DWORD *)(this + 4) = v8;
  *(_DWORD *)(this + 24) = v4;
  *(_DWORD *)(this + 20) = v9;
  if ( v4 >= 0x10 )
    result = v8;
  result[v9] = 0;
  return result;
}

// Address: 0x4043B0
void *__fastcall sub_4043B0(unsigned int a1)
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

// Address: 0x404410
void __fastcall __noreturn sub_404410(int a1, int a2, int a3, int a4)
{
  _BYTE v4[20]; // [esp+4h] [ebp-50h] BYREF
  int v5; // [esp+18h] [ebp-3Ch]
  int v6; // [esp+1Ch] [ebp-38h]
  _DWORD pExceptionObject[13]; // [esp+20h] [ebp-34h] BYREF

  v6 = 15;
  v5 = 0;
  v4[4] = 0;
  sub_4040A0((int)v4, a2, "vector<T> too long", 0x12u);
  pExceptionObject[12] = 0;
  sub_401BD0(pExceptionObject, (int)v4);
  pExceptionObject[0] = &std::length_error::`vftable';
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x404490
void *__stdcall sub_404490(char *a1)
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

// Address: 0x4044F0
std::exception *__thiscall sub_4044F0(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x404510
_DWORD *__stdcall sub_404510(int a1, int a2)
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
    *(_DWORD *)v3 = &std::tr1::_Ref_count<registry>::`vftable';
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

// Address: 0x4045E0
int __thiscall sub_4045E0(_DWORD *this)
{
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  v1 = (int (__thiscall ***)(_DWORD, int))*(this + 1);
  if ( v1 != nullptr )
    return (**v1)(v1, 1);
  return result;
}

// Address: 0x4045F0
int __thiscall sub_4045F0(void *this)
{
  int result; // eax

  if ( this != nullptr )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, 1);
  return result;
}

// Address: 0x404600
_DWORD *__thiscall sub_404600(_DWORD *this, char a2)
{
  *this = &std::tr1::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x404620
FARPROC __stdcall sub_404620(HMODULE *a1)
{
  FARPROC result; // eax
  int v2; // ebp
  int v3; // edx
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // edx
  _DWORD *v7; // ebx
  int v8; // ebx
  int v9; // ecx
  _DWORD *v10; // edx
  const char *v11; // eax
  int v12; // esi
  int v13; // edi
  const char *v14; // eax
  int v15; // edi
  int v16; // edi
  int v17; // eax
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int i; // eax
  int v24; // esi
  int v25; // eax
  int v26; // edx
  int v27; // ebp
  int v28; // ebx
  char *v29; // edi
  char *v30; // ecx
  int j; // edx
  int v32; // esi
  char *v33; // [esp+14h] [ebp-508h] BYREF
  int v34; // [esp+18h] [ebp-504h]
  char *v35; // [esp+1Ch] [ebp-500h]
  int (__cdecl *v36)(_DWORD, _DWORD, _DWORD, _DWORD); // [esp+20h] [ebp-4FCh]
  _BYTE pExceptionObject[12]; // [esp+24h] [ebp-4F8h] BYREF
  void **v38; // [esp+30h] [ebp-4ECh] BYREF
  char v39; // [esp+34h] [ebp-4E8h]
  _DWORD v40[120]; // [esp+38h] [ebp-4E4h] BYREF
  _DWORD v41[8]; // [esp+218h] [ebp-304h] BYREF
  char v42; // [esp+238h] [ebp-2E4h] BYREF
  int v43; // [esp+3F8h] [ebp-124h]
  size_t Size; // [esp+3FCh] [ebp-120h]
  int v45; // [esp+400h] [ebp-11Ch]
  _BYTE v46[32]; // [esp+404h] [ebp-118h] BYREF
  _DWORD v47[8]; // [esp+424h] [ebp-F8h] BYREF
  _DWORD v48[3]; // [esp+444h] [ebp-D8h] BYREF
  unsigned __int8 v49; // [esp+450h] [ebp-CCh]
  unsigned __int8 v50; // [esp+451h] [ebp-CBh]
  unsigned __int8 v51; // [esp+452h] [ebp-CAh]
  unsigned __int8 v52; // [esp+453h] [ebp-C9h]
  int v53; // [esp+454h] [ebp-C8h]
  _BYTE v54[52]; // [esp+4A4h] [ebp-78h] BYREF
  _BYTE v55[52]; // [esp+4D8h] [ebp-44h] BYREF
  int v56; // [esp+518h] [ebp-4h]

  result = GetProcAddress(*a1, (LPCSTR)1);
  v36 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))result;
  if ( result != nullptr )
  {
    v38 = &CRijndael::`vftable';
    v39 = 0;
    v56 = 0;
    memset(v55, 0, 0x32u);
    memset(v54, 0, 0x32u);
    sub_401030(0x10u, 16, (int)&v38, "OGEFBHKANFCJPPHA");
    sub_401890("LLFJBCKPMKDPKD", (int)&v38, v55);
    if ( "KBFJFIOLMNHALLGNDADJGIDBHIBLGPME" == nullptr )
    {
      v33 = "Empty key";
      std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&v33);
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
    }
    v43 = 32;
    Size = 32;
    memcpy(v46, &unk_423780, sizeof(v46));
    memcpy(v47, &unk_423780, sizeof(v47));
    v2 = 8;
    v3 = 0;
    v45 = 14;
    v33 = (char *)8;
    v4 = v40;
    do
    {
      memset(v4, 0, 0x20u);
      v5 = v45;
      ++v3;
      v4 += 8;
    }
    while ( v3 <= v45 );
    v6 = 0;
    if ( v45 >= 0 )
    {
      v7 = v41;
      do
      {
        memset(v7, 0, 0x20u);
        v5 = v45;
        ++v6;
        v7 += 8;
      }
      while ( v6 <= v45 );
    }
    v8 = 8 * (v5 + 1);
    v9 = v43 / 4;
    v34 = v8;
    v10 = v48;
    v11 = "KBFJFIOLMNHALLGNDADJGIDBHIBLGPME";
    if ( v43 / 4 > 0 )
    {
      v12 = v43 / 4;
      do
      {
        *v10 = *(unsigned __int8 *)v11 << 24;
        v13 = *((unsigned __int8 *)v11 + 1);
        v14 = v11 + 1;
        *v10 |= v13 << 16;
        v15 = *(unsigned __int8 *)++v14;
        *v10 |= v15 << 8;
        *v10 |= *((unsigned __int8 *)v14 + 1);
        v11 = v14 + 2;
        ++v10;
        --v12;
      }
      while ( v12 != 0 );
      v5 = v45;
    }
    v16 = 0;
    if ( v9 > 0 )
    {
      do
      {
        if ( v16 >= v8 )
          break;
        v17 = v16 / 8;
        v18 = v16 % 8;
        v19 = v48[v16++];
        v40[8 * v17 + v18] = v19;
        v8 = v34;
        v41[8 * (v45 - v17) + v18] = v47[v16 + 7];
      }
      while ( v16 < v9 );
      v5 = v45;
    }
    if ( v16 < v8 )
    {
      v35 = (char *)&unk_4271F0;
      while ( 1 )
      {
        v20 = v47[v9 + 7];
        v21 = *v35++ ^ byte_423FF0[BYTE2(v20)];
        v48[0] ^= (unsigned __int8)byte_423FF0[HIBYTE(v20)]
                ^ (((unsigned __int8)byte_423FF0[(unsigned __int8)v20]
                  ^ (((unsigned __int8)byte_423FF0[BYTE1(v20)] ^ (v21 << 8)) << 8)) << 8);
        v22 = 1;
        if ( v9 == 8 )
        {
          do
          {
            v48[v22] ^= v47[v22 + 7];
            ++v22;
          }
          while ( v22 < 4 );
          v53 ^= (unsigned __int8)byte_423FF0[v49]
               ^ (((unsigned __int8)byte_423FF0[v50]
                 ^ (((unsigned __int8)byte_423FF0[v51] ^ (byte_423FF0[v52] << 8)) << 8)) << 8);
          for ( i = 5; i < 8; ++i )
            v48[i] ^= v47[i + 7];
        }
        else if ( v9 > 1 )
        {
          do
          {
            v48[v22] ^= v47[v22 + 7];
            ++v22;
          }
          while ( v22 < v9 );
        }
        v24 = 0;
        if ( v9 > 0 )
          break;
LABEL_29:
        if ( v16 >= v8 )
          goto LABEL_30;
      }
      while ( v16 < v8 )
      {
        v25 = v16 / v2;
        v26 = v16 % v2;
        v27 = v48[v24++];
        ++v16;
        v40[8 * v25 + v26] = v27;
        v2 = (int)v33;
        v8 = v34;
        v41[8 * (v45 - v25) + v26] = v47[v24 + 7];
        if ( v24 >= v9 )
          goto LABEL_29;
      }
LABEL_30:
      v5 = v45;
    }
    v28 = 1;
    if ( v5 > 1 )
    {
      v29 = &v42;
      do
      {
        if ( v2 > 0 )
        {
          v30 = v29;
          for ( j = v2; j != 0; --j )
          {
            v32 = dword_426DF0[(unsigned __int8)*(_DWORD *)v30]
                ^ dword_4269F0[(unsigned __int8)BYTE1(*(_DWORD *)v30)]
                ^ dword_4265F0[(unsigned __int8)BYTE2(*(_DWORD *)v30)]
                ^ dword_4261F0[(unsigned __int8)HIBYTE(*(_DWORD *)v30)];
            v30 += 4;
            *((_DWORD *)v30 - 1) = v32;
          }
          v5 = v45;
          v2 = (int)v33;
        }
        ++v28;
        v29 += 32;
      }
      while ( v28 < v5 );
    }
    v39 = 1;
    sub_401890("OFFPACKG", (int)&v38, v54);
    return (FARPROC)v36(v55, v54, 3, 0);
  }
  return result;
}

// Address: 0x404B30
int __userpurge sub_404B30@<eax>(HMODULE *a1@<eax>, int a2, int a3)
{
  FARPROC ProcAddress; // eax

  ProcAddress = GetProcAddress(*a1, (LPCSTR)9);
  if ( ProcAddress != nullptr )
    return ((int (__cdecl *)(int, int))ProcAddress)(a2, a3);
  else
    return -1;
}

// Address: 0x404B60
_DWORD *__thiscall sub_404B60(_DWORD *this, int a2)
{
  sub_401BD0(this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x404B80
int __thiscall sub_404B80(void **this)
{
  *this = &std::logic_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  return sub_40A2B4(this);
}

// Address: 0x404BC0
_DWORD *__thiscall sub_404BC0(_DWORD *this, struct std::exception *a2)
{
  sub_401CB0((int)this, a2);
  *this = &std::out_of_range::`vftable';
  return this;
}

// Address: 0x404C00
void __thiscall sub_404C00(_DWORD *this)
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

// Address: 0x404CB0
bool __usercall sub_404CB0@<al>(int a1@<esi>)
{
  int v2; // eax
  WCHAR *v3; // ecx
  wchar_t *v4; // edi
  wchar_t *v5; // eax
  HMODULE v6; // eax
  int (*SheriffCreate)(void); // eax
  _DWORD v8[3]; // [esp+8h] [ebp-18h] BYREF
  LPWSTR lpFilename; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h]

  if ( *(_DWORD *)(a1 + 4) != 0 )
    return false;
  if ( *(_DWORD *)(a1 + 20) != 0 )
  {
    FreeLibrary(*(HMODULE *)(a1 + 20));
    *(_DWORD *)(a1 + 20) = 0;
  }
  if ( *(_DWORD *)(a1 + 20) == 0 )
  {
    sub_403E00(v8);
    v2 = v10;
    v3 = lpFilename;
    if ( (v10 - (int)lpFilename) >> 1 == 0 )
    {
      _invalid_parameter_noinfo();
      v2 = v10;
      v3 = lpFilename;
    }
    v4 = v3;
    if ( GetModuleFileNameW(nullptr, v3, (v2 - (int)v3) >> 1) == 0 )
      *v4 = 0;
    v5 = wcsrchr(v4, 0x5Cu);
    if ( v5 != nullptr )
      v5[1] = 0;
    wcscat_s(v4, (v10 - (int)lpFilename) >> 1, L"sheriff.dll");
    *(_DWORD *)(a1 + 20) = LoadLibraryW(v4);
    sub_403E70((int)v8);
  }
  v6 = *(HMODULE *)(a1 + 20);
  if ( v6 != nullptr )
  {
    SheriffCreate = GetProcAddress(v6, "SheriffCreate");
    if ( SheriffCreate != nullptr )
      *(_DWORD *)(a1 + 4) = SheriffCreate();
    if ( *(_DWORD *)(a1 + 4) == 0 )
    {
      FreeLibrary(*(HMODULE *)(a1 + 20));
      *(_DWORD *)(a1 + 20) = 0;
    }
  }
  return *(_DWORD *)(a1 + 4) != 0;
}

// Address: 0x404DB0
char __fastcall sub_404DB0(int a1, void *a2, int a3)
{
  int v4; // edx
  _DWORD v6[2]; // [esp+8h] [ebp-210h] BYREF
  _BYTE v7[516]; // [esp+10h] [ebp-208h]

  if ( *(_DWORD *)(a3 + 4) == 0 )
    return 0;
  if ( a2 == nullptr )
    return 0;
  v4 = *(_DWORD *)(a3 + 4);
  v6[0] = 5;
  v6[1] = a1;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v4 + 8) + 32))(*(_DWORD *)(v4 + 8), v6) == 0 )
    return 0;
  qmemcpy(a2, v7, 512);
  return 1;
}

// Address: 0x404E30
_DWORD *__thiscall sub_404E30(_DWORD *this, char a2)
{
  *this = &SheriffCtrl::Status::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x404E50
void __thiscall sub_404E50(_DWORD *this)
{
  *this = &SheriffCtrl::Status::`vftable';
}

// Address: 0x404EA0
int __usercall sub_404EA0@<eax>(int a1@<esi>, const unsigned __int16 *a2)
{
  unsigned int v2; // eax
  int v3; // ebp
  CHAR *v4; // edi
  int v5; // edx
  int v7; // [esp+1Ch] [ebp-2Ch] BYREF
  void *v8; // [esp+20h] [ebp-28h]
  int v9; // [esp+30h] [ebp-18h]
  unsigned int v10; // [esp+34h] [ebp-14h]
  int v11; // [esp+44h] [ebp-4h]

  v10 = 15;
  v9 = 0;
  LOBYTE(v8) = 0;
  v11 = 1;
  v2 = wcslen(a2);
  if ( v2 != 0 )
  {
    v3 = v2 + 1;
    v4 = (CHAR *)operator new[](v2 + 1);
    WideCharToMultiByte(0, 0, a2, -1, v4, v3, nullptr, nullptr);
    sub_4040A0((int)&v7, v5, v4, strlen(v4));
    operator delete(v4);
  }
  *(_DWORD *)(a1 + 24) = 15;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  sub_403EF0(a1, &v7, 0, 0xFFFFFFFF);
  LOBYTE(v11) = 0;
  if ( v10 >= 0x10 )
    operator delete(v8);
  return a1;
}

// Address: 0x404FD0
HMODULE *__thiscall sub_404FD0(HMODULE *this, char a2)
{
  bool v3; // zf
  HMODULE v4; // eax
  FARPROC InnoGuardDelete; // eax

  v3 = *(this + 1) == nullptr;
  *this = (HMODULE)&InnoGuardCtrl::`vftable';
  if ( !v3 )
  {
    v4 = *(this + 3);
    if ( v4 != nullptr )
    {
      InnoGuardDelete = GetProcAddress(v4, "InnoGuardDelete");
      if ( InnoGuardDelete != nullptr )
      {
        ((void (__stdcall *)(_DWORD))InnoGuardDelete)(*(this + 1));
        *(this + 1) = nullptr;
      }
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x405020
bool __cdecl sub_405020()
{
  int v1; // eax
  WCHAR *v2; // ecx
  wchar_t *v3; // esi
  wchar_t *v4; // eax
  int (*InnoGuardCreate)(void); // eax
  char LastError; // al
  char v7; // [esp+0h] [ebp-34h]
  _DWORD v8[3]; // [esp+10h] [ebp-24h] BYREF
  LPWSTR lpFilename; // [esp+1Ch] [ebp-18h]
  int v10; // [esp+20h] [ebp-14h]
  int v11; // [esp+30h] [ebp-4h]

  if ( dword_42EC5C != 0 )
    return false;
  if ( hModule != nullptr )
  {
    FreeLibrary(hModule);
    hModule = nullptr;
  }
  sub_403E00(v8);
  v11 = 0;
  v1 = v10;
  v2 = lpFilename;
  if ( (v10 - (int)lpFilename) >> 1 == 0 )
  {
    _invalid_parameter_noinfo();
    v1 = v10;
    v2 = lpFilename;
  }
  v3 = v2;
  if ( GetModuleFileNameW(nullptr, v2, (v1 - (int)v2) >> 1) == 0 )
    *v3 = 0;
  v4 = wcsrchr(v3, 0x5Cu);
  if ( v4 != nullptr )
    v4[1] = 0;
  wcscat_s(v3, (v10 - (int)lpFilename) >> 1, L"Innoguard.dll");
  sub_4053E0((wchar_t *)L"InnoGuardCtrl::Initialize %s", (char)v3);
  hModule = LoadLibraryW(v3);
  v11 = -1;
  sub_403E70((int)v8);
  if ( hModule != nullptr )
  {
    InnoGuardCreate = GetProcAddress(hModule, "InnoGuardCreate");
    if ( InnoGuardCreate != nullptr )
      dword_42EC5C = InnoGuardCreate();
    if ( dword_42EC5C == 0 )
    {
      sub_4053E0((wchar_t *)L"InnoGuardCtrl::InnoRepCreate NULL", v7);
      FreeLibrary(hModule);
      hModule = nullptr;
    }
  }
  else
  {
    LastError = GetLastError();
    sub_4053E0((wchar_t *)L"InnoGuardCtrl::InnoRepCreate m_Module NULL (%08x)", LastError);
  }
  return dword_42EC5C != 0;
}

// Address: 0x4051B0
BOOL __usercall sub_4051B0@<eax>(const WCHAR *a1@<eax>)
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

// Address: 0x4051F0
HANDLE __cdecl sub_4051F0(wchar_t *Format, int Args)
{
  HANDLE result; // eax
  LPCWSTR v3; // esi
  unsigned int v4; // eax
  HANDLE v5; // esi
  LPCWSTR v6; // edi
  int v7; // eax
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+18h] [ebp-4h]

  if ( hObject == nullptr )
  {
    result = (HANDLE)(timeGetTime() - dword_430024);
    if ( (unsigned int)result < 0x3E8 )
      return result;
    dword_430024 = timeGetTime();
    result = CreateFileW(L"\\\\.\\pipe\\SENUL_DEBUG_PIPE", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
    hObject = result;
    if ( result == (HANDLE)-1 )
      goto LABEL_14;
    sub_4051B0(L"Logging Start...");
  }
  if ( (dword_430038 & 1) == 0 )
  {
    dword_430038 |= 1u;
    v9 = 0;
    lpBuffer = (LPCWSTR)operator new(0x20000u);
    atexit(sub_420970);
  }
  v3 = lpBuffer;
  v4 = _vsnwprintf((wchar_t *)lpBuffer, 0xFFFFu, Format, (va_list)&Args);
  if ( v4 >= 0x10000 )
  {
    *((_WORD *)v3 + 0xFFFF) = 0;
  }
  else if ( v4 == 0xFFFF )
  {
    *((_WORD *)v3 + 0xFFFF) = 0;
  }
  v5 = hObject;
  v6 = lpBuffer;
  v7 = lstrlenW(lpBuffer);
  if ( WriteFile(v5, v6, 2 * v7 + 2, &NumberOfBytesWritten, nullptr) )
    return (HANDLE)FlushFileBuffers(v5);
  result = (HANDLE)CloseHandle(hObject);
LABEL_14:
  hObject = nullptr;
  return result;
}

// Address: 0x405360
LSTATUS sub_405360()
{
  LSTATUS result; // eax
  BYTE Data[4]; // [esp+0h] [ebp-10h] BYREF
  HKEY phkResult; // [esp+4h] [ebp-Ch] BYREF
  DWORD cbData; // [esp+8h] [ebp-8h] BYREF
  DWORD Type; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)Data = 0;
  result = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"SYSTEM\\CurrentControlSet\\Services\\SheriffAgent",
             0,
             0x20019u,
             &phkResult);
  if ( result == 0 )
  {
    Type = 4;
    cbData = 4;
    if ( RegQueryValueExW(phkResult, L"DebugLog", nullptr, &Type, Data, &cbData) == 0 )
      dword_430014 = *(_DWORD *)Data;
    return RegCloseKey(phkResult);
  }
  return result;
}

// Address: 0x4053E0
void sub_4053E0(wchar_t *Format, ...)
{
  unsigned int v1; // eax
  int v2; // eax
  int v3; // [esp+0h] [ebp-440h]
  _BYTE v4[4]; // [esp+Ch] [ebp-434h] BYREF
  void *v5; // [esp+10h] [ebp-430h]
  unsigned int v6; // [esp+24h] [ebp-41Ch]
  WCHAR OutputString[259]; // [esp+28h] [ebp-418h] BYREF
  __int16 v8; // [esp+22Eh] [ebp-212h]
  wchar_t Buffer[262]; // [esp+230h] [ebp-210h] BYREF
  va_list va; // [esp+448h] [ebp+8h] BYREF

  va_start(va, Format);
  if ( dword_430014 != 0 )
  {
    if ( dword_430014 == 3 )
    {
      v1 = _vsnwprintf(OutputString, 0x103u, Format, va);
    }
    else
    {
      swprintf_s(Buffer, 0x104u, L"[SheriffAgent] : %s", Format);
      v1 = _vsnwprintf(OutputString, 0x103u, Buffer, va);
    }
    if ( v1 >= 0x104 )
    {
      v8 = 0;
    }
    else if ( v1 == 259 )
    {
      v8 = 0;
    }
    if ( dword_430014 == 1 )
      OutputDebugStringW(OutputString);
    if ( dword_430014 == 2 )
      sub_4051F0(OutputString, v3);
    if ( dword_430014 == 3 )
    {
      sub_404EA0((int)v4, OutputString);
      if ( dword_430018 == 0 )
      {
        if ( operator new(0xA8u) != nullptr )
          v2 = sub_405F20(v3);
        else
          v2 = 0;
        dword_430018 = v2;
      }
      sub_406130();
      if ( v6 >= 0x10 )
        operator delete(v5);
    }
  }
}

// Address: 0x405540
_DWORD *__thiscall sub_405540(_DWORD *this, _DWORD *a2)
{
  sub_40A1D6();
  *this = &std::runtime_error::`vftable';
  *(this + 8) = 0;
  *(this + 9) = 15;
  *((_BYTE *)this + 16) = 0;
  sub_403EF0((int)(this + 3), a2, 0, 0xFFFFFFFF);
  return this;
}

// Address: 0x4055B0
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_1(_DWORD *this)
{
  if ( *(this + 9) < 0x10u )
    return this + 4;
  else
    return (_DWORD *)*(this + 4);
}

// Address: 0x4055C0
void **__thiscall sub_4055C0(void **this, char a2)
{
  *this = &std::runtime_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  sub_40A2B4(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x405610
int __thiscall sub_405610(int this, int a2)
{
  std::_Lockit::_Lockit((std::_Lockit *)this, 0);
  *(_DWORD *)(this + 28) = 15;
  *(_DWORD *)(this + 24) = 0;
  *(_BYTE *)(this + 8) = 0;
  *(_DWORD *)(this + 56) = 15;
  *(_DWORD *)(this + 52) = 0;
  *(_BYTE *)(this + 36) = 0;
  *(_DWORD *)(this + 84) = 15;
  *(_DWORD *)(this + 80) = 0;
  *(_BYTE *)(this + 64) = 0;
  *(_DWORD *)(this + 112) = 15;
  *(_DWORD *)(this + 108) = 0;
  *(_BYTE *)(this + 92) = 0;
  std::_Locinfo::_Locinfo_ctor(this, a2);
  return this;
}

// Address: 0x4056A0
void __thiscall sub_4056A0(std::_Lockit *this)
{
  std::_Locinfo::_Locinfo_dtor(this);
  if ( *((_DWORD *)this + 28) >= 0x10u )
    operator delete(*((void **)this + 23));
  *((_DWORD *)this + 28) = 15;
  *((_DWORD *)this + 27) = 0;
  *((_BYTE *)this + 92) = 0;
  if ( *((_DWORD *)this + 21) >= 0x10u )
    operator delete(*((void **)this + 16));
  *((_DWORD *)this + 21) = 15;
  *((_DWORD *)this + 20) = 0;
  *((_BYTE *)this + 64) = 0;
  if ( *((_DWORD *)this + 14) >= 0x10u )
    operator delete(*((void **)this + 9));
  *((_DWORD *)this + 14) = 15;
  *((_DWORD *)this + 13) = 0;
  *((_BYTE *)this + 36) = 0;
  if ( *((_DWORD *)this + 7) >= 0x10u )
    operator delete(*((void **)this + 2));
  *((_DWORD *)this + 7) = 15;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 8) = 0;
  std::_Lockit::~_Lockit(this);
}

// Address: 0x405790
int __thiscall sub_405790(int this, struct std::exception *a2)
{
  std::exception::exception((std::exception *)this, a2);
  *(_DWORD *)this = &std::runtime_error::`vftable';
  *(_DWORD *)(this + 36) = 15;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 16) = 0;
  sub_403EF0(this + 12, (_DWORD *)a2 + 3, 0, 0xFFFFFFFF);
  return this;
}

// Address: 0x405810
void __thiscall sub_405810(_DWORD *this)
{
  int v2; // eax
  _BYTE v3[4]; // [esp+4h] [ebp-4h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v3, 0);
  v2 = *(this + 1);
  if ( v2 != -1 )
    *(this + 1) = v2 + 1;
  std::_Lockit::~_Lockit((std::_Lockit *)v3);
}

// Address: 0x405840
int __fastcall sub_405840(int a1)
{
  int v2; // eax
  int v3; // esi
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v5, 0);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 != 0 && v2 != -1 )
    *(_DWORD *)(a1 + 4) = v2 - 1;
  v3 = *(_DWORD *)(a1 + 4) == 0 ? a1 : 0;
  std::_Lockit::~_Lockit((std::_Lockit *)v5);
  return v3;
}

// Address: 0x405880
void __thiscall sub_405880(_DWORD *this)
{
  *this = &std::locale::facet::`vftable';
}

// Address: 0x405890
void __thiscall sub_405890(int *this)
{
  int v1; // edi
  int v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // esi
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  v1 = *this;
  if ( *this != 0 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v4, 0);
    v2 = *(_DWORD *)(v1 + 4);
    if ( v2 != 0 && v2 != -1 )
      *(_DWORD *)(v1 + 4) = v2 - 1;
    v3 = *(_DWORD *)(v1 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v1 : nullptr;
    std::_Lockit::~_Lockit((std::_Lockit *)v4);
    if ( v3 != nullptr )
      (**v3)(v3, 1);
  }
}

// Address: 0x4058E0
int __thiscall sub_4058E0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)(*this + 24);
  *(_DWORD *)(a2 + 24) = 15;
  *(_DWORD *)(a2 + 20) = 0;
  *(_BYTE *)(a2 + 4) = 0;
  sub_403EF0(a2, v2, 0, 0xFFFFFFFF);
  return a2;
}

// Address: 0x405910
_DWORD *__thiscall sub_405910(_DWORD *this, char a2)
{
  *this = &std::locale::facet::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x405930
char sub_405930()
{
  return 1;
}

// Address: 0x405940
int sub_405940()
{
  return 1;
}

// Address: 0x405950
char *__thiscall sub_405950(char *this, int a2, int a3)
{
  _Ctypevec v5; // [esp+4h] [ebp-10h] BYREF

  *((_DWORD *)this + 1) = a3;
  *(_DWORD *)this = &std::ctype<char>::`vftable';
  *(_Ctypevec *)(this + 8) = *_Getctype(&v5);
  return this;
}

// Address: 0x405990
int __cdecl sub_405990(char **a1, _DWORD *a2)
{
  char v2; // bl
  char *v3; // esi
  int v4; // eax
  int v5; // eax
  char *v6; // eax
  _BYTE v8[4]; // [esp+18h] [ebp-9Ch] BYREF
  void *v9; // [esp+1Ch] [ebp-98h]
  unsigned int v10; // [esp+30h] [ebp-84h]
  _BYTE v11[116]; // [esp+34h] [ebp-80h] BYREF
  int v12; // [esp+B0h] [ebp-4h]

  v2 = 0;
  if ( a1 != nullptr && *a1 == nullptr )
  {
    v3 = (char *)operator new(0x18u);
    v12 = 0;
    if ( v3 != nullptr )
    {
      v4 = sub_4058E0(a2, (int)v8);
      LOBYTE(v12) = 1;
      v5 = sub_405610((int)v11, v4);
      v2 = 3;
      v6 = sub_405950(v3, v5, 0);
    }
    else
    {
      v6 = nullptr;
    }
    v12 = 2;
    *a1 = v6;
    if ( (v2 & 2) != 0 )
    {
      v2 &= ~2u;
      sub_4056A0((std::_Lockit *)v11);
    }
    v12 = -1;
    if ( (v2 & 1) != 0 && v10 >= 0x10 )
      operator delete(v9);
  }
  return 2;
}

// Address: 0x405AA0
int __thiscall sub_405AA0(int this, unsigned __int8 a2)
{
  return _Tolower(a2, (const _Ctypevec *)(this + 8));
}

// Address: 0x405AC0
_BYTE *__thiscall sub_405AC0(char *this, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // esi
  const _Ctypevec *v4; // edi

  v3 = a2;
  if ( a2 != a3 )
  {
    v4 = (const _Ctypevec *)(this + 8);
    do
    {
      *v3 = _Tolower((unsigned __int8)*v3, v4);
      ++v3;
    }
    while ( v3 != a3 );
  }
  return v3;
}

// Address: 0x405AF0
int __thiscall sub_405AF0(int this, unsigned __int8 a2)
{
  return _Toupper(a2, (const _Ctypevec *)(this + 8));
}

// Address: 0x405B10
_BYTE *__thiscall sub_405B10(char *this, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // esi
  const _Ctypevec *v4; // edi

  v3 = a2;
  if ( a2 != a3 )
  {
    v4 = (const _Ctypevec *)(this + 8);
    do
    {
      *v3 = _Toupper((unsigned __int8)*v3, v4);
      ++v3;
    }
    while ( v3 != a3 );
  }
  return v3;
}

// Address: 0x405B40
char __stdcall std::ctype<char>::do_widen(char a1)
{
  return a1;
}

// Address: 0x405B50
int __thiscall sub_405B50(void *this, int a2, int a3, int a4)
{
  return (*(int (__thiscall **)(void *, int, int, int, int))(*(_DWORD *)this + 28))(this, a2, a3, a4, a3 - a2);
}

// Address: 0x405B80
int __stdcall sub_405B80(void *Source, int a2, void *Destination, rsize_t DestinationSize)
{
  if ( DestinationSize < a2 - (int)Source )
    _invalid_parameter_noinfo();
  memcpy_s(Destination, DestinationSize, Source, a2 - (_DWORD)Source);
  return a2;
}

// Address: 0x405BC0
char __stdcall std::ctype<char>::do_narrow(char a1, int a2)
{
  return a1;
}

// Address: 0x405BD0
int __thiscall sub_405BD0(void *this, int a2, int a3, int a4, int a5)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int))(*(_DWORD *)this + 40))(this, a2, a3, a4, a5, a3 - a2);
}

// Address: 0x405C00
int __stdcall sub_405C00(void *Source, int a2, int a3, void *Destination, rsize_t DestinationSize)
{
  if ( DestinationSize < a2 - (int)Source )
    _invalid_parameter_noinfo();
  memcpy_s(Destination, DestinationSize, Source, a2 - (_DWORD)Source);
  return a2;
}

// Address: 0x405C40
void *__thiscall sub_405C40(void *this, char a2)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 5);
  *(_DWORD *)this = &std::ctype<char>::`vftable';
  if ( v3 <= 0 )
  {
    if ( v3 < 0 )
      operator delete[](*((void **)this + 4));
  }
  else
  {
    free(*((void **)this + 4));
  }
  *(_DWORD *)this = &std::locale::facet::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x405C90
int __thiscall sub_405C90(void **this)
{
  *this = &std::runtime_error::`vftable';
  if ( (unsigned int)*(this + 9) >= 0x10 )
    operator delete(*(this + 4));
  *(this + 9) = (void *)15;
  *(this + 8) = nullptr;
  *((_BYTE *)this + 16) = 0;
  return sub_40A2B4(this);
}

// Address: 0x405CD0
int __thiscall sub_405CD0(_DWORD *this, char a2, char a3)
{
  int result; // eax
  int v4; // ecx
  _DWORD pExceptionObject[10]; // [esp+4h] [ebp-98h] BYREF
  _DWORD v6[7]; // [esp+2Ch] [ebp-70h] BYREF
  _DWORD v7[10]; // [esp+48h] [ebp-54h] BYREF
  _DWORD v8[8]; // [esp+70h] [ebp-2Ch] BYREF
  int v9; // [esp+98h] [ebp-4h]

  result = a2 & 0x17;
  *(this + 2) = result;
  v4 = result & *(this + 3);
  if ( v4 != 0 )
  {
    if ( a3 != 0 )
      _CxxThrowException(nullptr, nullptr);
    if ( (v4 & 4) != 0 )
    {
      sub_403D90((int)v6, "ios_base::badbit set");
      v9 = 0;
      sub_405540(pExceptionObject, v6);
      pExceptionObject[0] = &std::ios_base::failure::`vftable';
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVfailure_ios_base_std__);
    }
    if ( (v4 & 2) != 0 )
    {
      sub_403D90((int)v6, "ios_base::failbit set");
      v9 = 1;
      sub_405540(pExceptionObject, v6);
      pExceptionObject[0] = &std::ios_base::failure::`vftable';
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVfailure_ios_base_std__);
    }
    sub_403D90((int)v8, "ios_base::eofbit set");
    v9 = 2;
    sub_405540(v7, v8);
    v7[0] = &std::ios_base::failure::`vftable';
    _CxxThrowException(v7, (_ThrowInfo *)&_TI3_AVfailure_ios_base_std__);
  }
  return result;
}

// Address: 0x405E00
_DWORD *__thiscall sub_405E00(_DWORD **this, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int v4; // eax

  v2 = **(this + 9);
  v3 = a2;
  *a2 = v2;
  std::_Lockit::_Lockit((std::_Lockit *)&a2, 0);
  v4 = *(_DWORD *)(v2 + 4);
  if ( v4 != -1 )
    *(_DWORD *)(v2 + 4) = v4 + 1;
  std::_Lockit::~_Lockit((std::_Lockit *)&a2);
  return v3;
}

// Address: 0x405E40
void __thiscall sub_405E40(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // eax
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  *(this + 9) = 0;
  *(this + 1) = 0;
  *(this + 3) = 0;
  *(this + 4) = 513;
  *(this + 5) = 6;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  sub_405CD0(this, 0, 0);
  v2 = operator new(4u);
  if ( v2 != nullptr )
  {
    *v2 = std::locale::_Init();
    v3 = sub_4099FF();
    std::_Lockit::_Lockit((std::_Lockit *)v5, 0);
    v4 = *(_DWORD *)(v3 + 4);
    if ( v4 != -1 )
      *(_DWORD *)(v3 + 4) = v4 + 1;
    std::_Lockit::~_Lockit((std::_Lockit *)v5);
    *(this + 9) = v2;
  }
  else
  {
    *(this + 9) = 0;
  }
}

// Address: 0x405EC0
_DWORD *__thiscall sub_405EC0(_DWORD *this, struct std::exception *a2)
{
  sub_405790((int)this, a2);
  *this = &std::ios_base::failure::`vftable';
  return this;
}

// Address: 0x405EE0
bool __cdecl sub_405EE0(char a1, FILE *Stream)
{
  return fputc(a1, Stream) != -1;
}

// Address: 0x405F20
int __usercall sub_405F20@<eax>(int a1@<edi>)
{
  int v1; // ecx
  int v2; // eax
  _DWORD *v3; // ecx
  char v4; // al
  char Source[52]; // [esp+Ch] [ebp-288h] BYREF
  char Drive[52]; // [esp+40h] [ebp-254h] BYREF
  CHAR Filename[264]; // [esp+74h] [ebp-220h] BYREF
  char Dir[264]; // [esp+17Ch] [ebp-118h] BYREF
  int v10; // [esp+290h] [ebp-4h]

  sub_4066D0(a1);
  v10 = 0;
  GetModuleFileNameA(nullptr, Filename, 0x104u);
  _splitpath_s(Filename, Drive, 0x32u, Dir, 0x104u, Source, 0x32u, nullptr, 0);
  sub_4082E0("%s%s\\Log\\", Drive, Dir);
  MakeSureDirectoryPathExists(Filename);
  strcat_s(Filename, 0x104u, Source);
  strcat_s(Filename, 0x104u, ".log");
  if ( sub_407770(Filename) == 0 )
  {
    v1 = *(_DWORD *)(*(_DWORD *)a1 + 4);
    v2 = *(_DWORD *)(v1 + a1 + 8);
    v3 = (_DWORD *)(a1 + v1);
    v4 = v2 | 2;
    if ( v3[10] == 0 )
      v4 |= 4u;
    sub_405CD0(v3, v4, 0);
  }
  *(_DWORD *)(a1 + 160) = 4;
  *(_DWORD *)(a1 + 164) = 3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  return a1;
}

// Address: 0x406080
int __usercall sub_406080@<eax>(int a1@<esi>)
{
  struct tm *v1; // eax
  int tm_sec; // edi
  int tm_year; // ecx
  __time64_t Time; // [esp+4h] [ebp-118h] BYREF
  char Buffer[268]; // [esp+Ch] [ebp-110h] BYREF

  Time = _time64(nullptr);
  v1 = _localtime64(&Time);
  tm_sec = v1->tm_sec;
  v1->tm_year += 1900;
  tm_year = v1->tm_year;
  sprintf(Buffer, "%04d/%02d/%02d %02d:%02d:%02d", tm_year, ++v1->tm_mon, v1->tm_mday, v1->tm_hour, v1->tm_min, tm_sec);
  *(_DWORD *)(a1 + 24) = 15;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  sub_4040A0(a1, (int)Buffer, Buffer, strlen(Buffer));
  return a1;
}

// Address: 0x406130
void __usercall sub_406130(int a1@<eax>, int a2@<ecx>)
{
  int v4; // eax
  struct _RTL_CRITICAL_SECTION *v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // edi
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // edi
  _DWORD *v20; // ecx
  int v21; // eax
  _BYTE v22[4]; // [esp+Ch] [ebp-1Ch] BYREF
  void *v23; // [esp+10h] [ebp-18h]
  unsigned int v24; // [esp+24h] [ebp-4h]

  v4 = *(_DWORD *)(a2 + 164);
  if ( v4 == 3 && *(int *)(a2 + 160) >= 3 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)(a2 + 136);
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 136));
    v6 = sub_406080((int)v22);
    v7 = sub_408300(a2, v6);
    v8 = sub_408570(v7, "  ");
    v9 = sub_408570(v8, a1);
    sub_4062D0(10);
    v10 = *(_DWORD *)(*(_DWORD *)v9 + 4) + v9;
    v11 = 0;
    if ( (*(_BYTE *)(v10 + 8) & 6) == 0
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 40) + 48))(*(_DWORD *)(v10 + 40)) == -1 )
    {
      v11 = 4;
    }
    v12 = (_DWORD *)(v9 + *(_DWORD *)(*(_DWORD *)v9 + 4));
    if ( v11 != 0 )
    {
      v13 = v11 | v12[2];
      if ( v12[10] == 0 )
        LOBYTE(v13) = v13 | 4;
      sub_405CD0(v12, v13, 0);
    }
    if ( v24 >= 0x10 )
      operator delete(v23);
    LeaveCriticalSection(v5);
  }
  else if ( v4 == 2 && *(int *)(a2 + 160) >= 3 )
  {
    v14 = sub_406080((int)v22);
    v15 = sub_408300(&unk_42F118, v14);
    v16 = sub_408570(v15, "  ");
    v17 = sub_408570(v16, a1);
    sub_4062D0(10);
    v18 = *(_DWORD *)(*(_DWORD *)v17 + 4) + v17;
    v19 = 0;
    if ( (*(_BYTE *)(v18 + 8) & 6) == 0
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v18 + 40) + 48))(*(_DWORD *)(v18 + 40)) == -1 )
    {
      v19 = 4;
    }
    v20 = (_DWORD *)(v17 + *(_DWORD *)(*(_DWORD *)v17 + 4));
    if ( v19 != 0 )
    {
      v21 = v19 | v20[2];
      if ( v20[10] == 0 )
        LOBYTE(v21) = v21 | 4;
      sub_405CD0(v20, v21, 0);
    }
    if ( v24 >= 0x10 )
      operator delete(v23);
  }
}

// Address: 0x4062C0
int __thiscall basic_ostream<char,char_traits<char>>::~basic_ostream<char,char_traits<char>>(_DWORD *this)
{
  int result; // eax

  result = *(this - 1);
  *(_DWORD *)((char *)this + *(_DWORD *)(result + 4) - 4) = &std::ostream::`vftable';
  return result;
}

// Address: 0x4062D0
char *__thiscall sub_4062D0(char *this, unsigned __int8 a2)
{
  int v3; // edi
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  _DWORD *v6; // ecx
  unsigned __int8 *v7; // eax
  int v8; // eax
  char *v9; // ecx
  int v10; // eax
  int v12; // [esp+0h] [ebp-34h] BYREF
  _BYTE v13[8]; // [esp+10h] [ebp-24h] BYREF
  int v14; // [esp+18h] [ebp-1Ch]
  char *v15; // [esp+1Ch] [ebp-18h]
  int *v16; // [esp+24h] [ebp-10h]
  int v17; // [esp+30h] [ebp-4h]

  v16 = &v12;
  v15 = this;
  v3 = 0;
  v14 = 0;
  sub_407D20(v13);
  v17 = 0;
  if ( v13[4] != 0 )
  {
    LOBYTE(v17) = 1;
    v4 = *(_DWORD **)(this + *(_DWORD *)(*(_DWORD *)this + 4) + 40);
    if ( *(_DWORD *)v4[9] != 0 && (int)*(v5 = (_DWORD *)v4[13]) > 0 )
    {
      --*v5;
      v6 = (_DWORD *)v4[9];
      v7 = (unsigned __int8 *)(*v6)++;
      *v7 = a2;
      v8 = a2;
    }
    else
    {
      v8 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v4 + 4))(v4, a2);
    }
    if ( v8 == -1 )
      v3 = 4;
    v17 = 0;
  }
  else
  {
    v3 = 4;
  }
  v9 = this + *(_DWORD *)(*(_DWORD *)this + 4);
  if ( v3 != 0 )
  {
    v10 = v3 | *((_DWORD *)v9 + 2);
    if ( *((_DWORD *)v9 + 10) == 0 )
      LOBYTE(v10) = v10 | 4;
    sub_405CD0(v9, v10, 0);
  }
  v17 = -1;
  sub_407DB0(v13);
  return this;
}

// Address: 0x4063F0
_BYTE *__thiscall sub_4063F0(_BYTE *this)
{
  int v2; // ecx
  int v3; // edi
  _DWORD *v4; // ecx
  int v5; // eax

  v2 = *(_DWORD *)(*(_DWORD *)this + 4);
  v3 = 0;
  if ( (*(this + v2 + 8) & 6) == 0
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + v2 + 40) + 48))(*(_DWORD *)(this + v2 + 40)) == -1 )
  {
    v3 = 4;
  }
  v4 = this + *(_DWORD *)(*(_DWORD *)this + 4);
  if ( v3 != 0 )
  {
    v5 = v3 | v4[2];
    if ( v4[10] == 0 )
      LOBYTE(v5) = v5 | 4;
    sub_405CD0(v4, v5, 0);
  }
  return this;
}

// Address: 0x406460
void __thiscall sub_406460(void *this)
{
  int *v2; // ebx
  int v3; // edi
  int v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // esi
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = *((int **)this + 14);
  *(_DWORD *)this = &std::streambuf::`vftable';
  if ( v2 != nullptr )
  {
    v3 = *v2;
    if ( *v2 != 0 )
    {
      std::_Lockit::_Lockit((std::_Lockit *)v6, 0);
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 != 0 && v4 != -1 )
        *(_DWORD *)(v3 + 4) = v4 - 1;
      v5 = *(_DWORD *)(v3 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v3 : nullptr;
      std::_Lockit::~_Lockit((std::_Lockit *)v6);
      if ( v5 != nullptr )
        (**v5)(v5, 1);
    }
    operator delete(v2);
  }
  _Mtxdst(*((LPCRITICAL_SECTION *)this + 1));
  operator delete(*((void **)this + 1));
}

// Address: 0x4064D0
int __stdcall sub_4064D0(int a1)
{
  return -1;
}

// Address: 0x4064E0
int sub_4064E0()
{
  return -1;
}

// Address: 0x4064F0
int __thiscall sub_4064F0(_DWORD **this)
{
  int result; // eax
  _DWORD *v3; // eax
  unsigned __int8 *v4; // ecx

  result = ((int (__thiscall *)(_DWORD **))(*this)[4])(this);
  if ( result != -1 )
  {
    --**(this + 12);
    v3 = *(this + 8);
    v4 = (unsigned __int8 *)(*v3)++;
    return *v4;
  }
  return result;
}

// Address: 0x406520
int __thiscall sub_406520(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 28))(this, a2, -1, a3);
}

// Address: 0x406540
int __thiscall sub_406540(const void *const **this, char *Destination, rsize_t DestinationSize, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v8; // eax
  rsize_t v9; // esi
  int v10; // eax
  int v12; // [esp+Ch] [ebp-4h]

  v4 = a4;
  v5 = 0;
  v12 = 0;
  if ( a4 <= 0 )
    return 0;
  do
  {
    v8 = sub_407700(this);
    if ( v8 <= 0 )
    {
      v10 = (*((int (__thiscall **)(const void *const **))*this + 5))(this);
      if ( v10 == -1 )
        return v5;
      ++v5;
      *Destination++ = v10;
      v12 = v5;
      --v4;
    }
    else
    {
      v9 = v8;
      if ( v4 < v8 )
        v9 = v4;
      memcpy_s(Destination, DestinationSize, **(this + 8), v9);
      **(this + 12) = (char *)**(this + 12) - v9;
      v12 += v9;
      Destination += v9;
      v4 -= v9;
      **(this + 8) = (char *)**(this + 8) + v9;
      v5 = v12;
    }
  }
  while ( v4 > 0 );
  return v5;
}

// Address: 0x4065D0
int __thiscall sub_4065D0(void *const **this, unsigned __int8 *Source, int a3)
{
  int v3; // ebp
  int v4; // esi
  signed int v7; // eax
  rsize_t v8; // esi
  int v10; // [esp+Ch] [ebp-4h]

  v3 = a3;
  v4 = 0;
  v10 = 0;
  if ( a3 <= 0 )
    return 0;
  do
  {
    v7 = sub_407720(this);
    if ( v7 <= 0 )
    {
      if ( (*((int (__thiscall **)(void *const **, _DWORD))*this + 1))(this, *Source) == -1 )
        return v4;
      ++v4;
      ++Source;
      v10 = v4;
      --v3;
    }
    else
    {
      v8 = v7;
      if ( v3 < v7 )
        v8 = v3;
      memcpy_s(**(this + 9), v7, Source, v8);
      **(this + 13) = (char *)**(this + 13) - v8;
      v10 += v8;
      Source += v8;
      v3 -= v8;
      **(this + 9) = (char *)**(this + 9) + v8;
      v4 = v10;
    }
  }
  while ( v3 > 0 );
  return v4;
}

// Address: 0x406660
// Microsoft VisualC 2-14/net runtime
_DWORD *__stdcall unknown_libname_2(_DWORD *a1, int a2, int a3, int a4)
{
  *a1 = -1;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  return a1;
}

// Address: 0x406680
// Microsoft VisualC 2-14/net runtime
_DWORD *__stdcall unknown_libname_3(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  *a1 = -1;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  return a1;
}

// Address: 0x4066A0
void *__thiscall sub_4066A0(void *this, int a2, int a3)
{
  return this;
}

// Address: 0x4066B0
int sub_4066B0()
{
  return 0;
}

// Address: 0x4066C0
void __stdcall nullsub_2(int a1)
{
  ;
}

// Address: 0x4066D0
int __stdcall sub_4066D0(int a1)
{
  int v1; // edi

  *(_DWORD *)a1 = &unk_428A00;
  *(_DWORD *)(a1 + 84) = &std::ios::`vftable';
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1) = &std::ostream::`vftable';
  v1 = a1 + *(_DWORD *)(*(_DWORD *)a1 + 4);
  sub_405E40((_DWORD *)v1);
  *(_DWORD *)(v1 + 40) = a1 + 4;
  *(_DWORD *)(v1 + 44) = 0;
  *(_BYTE *)(v1 + 48) = sub_4080D0(32);
  if ( *(_DWORD *)(v1 + 40) == 0 )
    sub_405CD0((_DWORD *)v1, *(_BYTE *)(v1 + 8) | 4, 0);
  *(_DWORD *)(v1 + 4) = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1) = &std::ofstream::`vftable';
  sub_407F80();
  *(_DWORD *)(a1 + 20) = a1 + 12;
  *(_DWORD *)(a1 + 4) = &std::filebuf::`vftable';
  *(_BYTE *)(a1 + 76) = 0;
  *(_BYTE *)(a1 + 69) = 0;
  *(_DWORD *)(a1 + 36) = a1 + 28;
  *(_DWORD *)(a1 + 40) = a1 + 32;
  *(_DWORD *)(a1 + 24) = a1 + 16;
  *(_DWORD *)(a1 + 52) = a1 + 44;
  *(_DWORD *)(a1 + 56) = a1 + 48;
  *(_DWORD *)(a1 + 16) = 0;
  **(_DWORD **)(a1 + 40) = 0;
  **(_DWORD **)(a1 + 56) = 0;
  **(_DWORD **)(a1 + 20) = 0;
  **(_DWORD **)(a1 + 36) = 0;
  **(_DWORD **)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 72) = dword_430034;
  *(_DWORD *)(a1 + 64) = 0;
  return a1;
}

// Address: 0x406800
int __thiscall sub_406800(_DWORD *this)
{
  char *v1; // esi
  int result; // eax

  *(_DWORD *)((char *)this + *(_DWORD *)(*(this - 21) + 4) - 84) = &std::ofstream::`vftable';
  v1 = (char *)(this - 20);
  sub_406870();
  result = *((_DWORD *)v1 - 1);
  *(_DWORD *)&v1[*(_DWORD *)(result + 4) - 4] = &std::ostream::`vftable';
  return result;
}

// Address: 0x406870
void __thiscall sub_406870(_BYTE *this)
{
  *(_DWORD *)this = &std::filebuf::`vftable';
  if ( *(this + 72) != 0 )
    sub_407810();
  sub_406460(this);
}

// Address: 0x4068E0
int __thiscall sub_4068E0(int this, int a2)
{
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _BYTE *v7; // ecx
  void **v8; // eax
  unsigned int v9; // edx
  void **v10; // ebx
  void **v11; // ecx
  void **v12; // ecx
  void **v13; // ecx
  unsigned int v14; // edi
  void **v15; // esi
  void **v16; // ecx
  void **v17; // ecx
  int v18; // eax
  void **v19; // esi
  void **v20; // ecx
  void **v21; // ecx
  void **v22; // ecx
  size_t v23; // edi
  void **v24; // esi
  void **v25; // ecx
  void **v26; // ecx
  int v27; // esi
  _BYTE v28[16]; // [esp+Ch] [ebp-54h] BYREF
  int v29; // [esp+1Ch] [ebp-44h]
  char v30; // [esp+20h] [ebp-40h] BYREF
  char v31[3]; // [esp+21h] [ebp-3Fh] BYREF
  void **v32; // [esp+24h] [ebp-3Ch]
  char *v33; // [esp+28h] [ebp-38h] BYREF
  void **v34; // [esp+2Ch] [ebp-34h] BYREF
  int v35; // [esp+30h] [ebp-30h] BYREF
  void *Buffer[2]; // [esp+34h] [ebp-2Ch] BYREF
  char v37; // [esp+3Ch] [ebp-24h]
  unsigned int v38; // [esp+44h] [ebp-1Ch]
  unsigned int v39; // [esp+48h] [ebp-18h]
  int v40; // [esp+5Ch] [ebp-4h]

  v29 = this;
  if ( a2 == -1 )
    return 0;
  v4 = **(_DWORD **)(this + 36);
  if ( v4 != 0 )
  {
    v5 = *(_DWORD **)(this + 52);
    if ( v4 < v4 + *v5 )
    {
      --*v5;
      v6 = *(_DWORD **)(this + 36);
      v7 = (_BYTE *)(*v6)++;
      *v7 = a2;
      return a2;
    }
  }
  if ( *(_DWORD *)(this + 76) == 0 )
    return -1;
  if ( *(_DWORD *)(this + 60) == 0 )
  {
    if ( fputc((char)a2, *(FILE **)(this + 76)) != -1 )
      return a2;
    return -1;
  }
  v30 = a2;
  v39 = 15;
  Buffer[0] = nullptr;
  Buffer[1] = nullptr;
  v38 = 8;
  v37 = 0;
  v40 = 0;
LABEL_11:
  v8 = (void **)Buffer[0];
  v9 = v39;
  while ( 1 )
  {
    if ( v9 < 0x10 )
    {
      v10 = Buffer;
      v32 = Buffer;
    }
    else
    {
      v10 = v8;
      v32 = v8;
      if ( v8 == nullptr )
        goto LABEL_20;
    }
    v11 = v8;
    if ( v9 < 0x10 )
      v11 = Buffer;
    if ( v11 > v10 )
      goto LABEL_20;
    v12 = v8;
    if ( v9 < 0x10 )
      v12 = Buffer;
    if ( v10 > &v12[v38 / 4] )
    {
LABEL_20:
      _invalid_parameter_noinfo();
      v9 = v39;
      v8 = (void **)Buffer[0];
    }
    if ( v28 != (_BYTE *)-40 )
    {
      v13 = v8;
      if ( v9 < 0x10 )
        v13 = Buffer;
      if ( v10 >= &v13[v38 / 4] )
      {
        _invalid_parameter_noinfo();
        v9 = v39;
        v8 = (void **)Buffer[0];
      }
    }
    v14 = v38;
    if ( v9 < 0x10 )
    {
      v15 = Buffer;
    }
    else
    {
      v15 = v8;
      if ( v8 == nullptr )
        goto LABEL_34;
    }
    v16 = v8;
    if ( v9 < 0x10 )
      v16 = Buffer;
    if ( v16 > v15 )
      goto LABEL_34;
    v17 = v8;
    if ( v9 < 0x10 )
      v17 = Buffer;
    v10 = v32;
    if ( v15 > &v17[v38 / 4] )
    {
LABEL_34:
      _invalid_parameter_noinfo();
      v9 = v39;
      v8 = (void **)Buffer[0];
    }
    if ( v28 != (_BYTE *)-40 )
    {
      if ( v9 < 0x10 )
        v8 = Buffer;
      if ( v15 >= &v8[v38 / 4] )
        _invalid_parameter_noinfo();
    }
    v18 = (*(int (__thiscall **)(_DWORD, int, char *, char *, char **, void **, unsigned int, void ***))(**(_DWORD **)(v29 + 60) + 20))(
            *(_DWORD *)(v29 + 60),
            v29 + 68,
            &v30,
            v31,
            &v33,
            v15,
            (unsigned int)v10 + v14,
            &v34);
    if ( v18 < 0 )
      goto LABEL_87;
    if ( v18 > 1 )
      break;
    v9 = v39;
    v8 = (void **)Buffer[0];
    if ( v39 < 0x10 )
    {
      v19 = Buffer;
    }
    else
    {
      v19 = (void **)Buffer[0];
      if ( Buffer[0] == nullptr )
        goto LABEL_50;
    }
    v20 = (void **)Buffer[0];
    if ( v39 < 0x10 )
      v20 = Buffer;
    if ( v20 > v19 )
      goto LABEL_50;
    v21 = (void **)Buffer[0];
    if ( v39 < 0x10 )
      v21 = Buffer;
    if ( v19 > &v21[v38 / 4] )
    {
LABEL_50:
      _invalid_parameter_noinfo();
      v9 = v39;
      v8 = (void **)Buffer[0];
    }
    if ( v28 != (_BYTE *)-40 )
    {
      v22 = v8;
      if ( v9 < 0x10 )
        v22 = Buffer;
      if ( v19 >= &v22[v38 / 4] )
      {
        _invalid_parameter_noinfo();
        v9 = v39;
        v8 = (void **)Buffer[0];
      }
    }
    v23 = (char *)v34 - (char *)v19;
    if ( v34 != v19 )
    {
      if ( v9 < 0x10 )
      {
        v24 = Buffer;
      }
      else
      {
        v24 = v8;
        if ( v8 == nullptr )
        {
LABEL_65:
          _invalid_parameter_noinfo();
          v9 = v39;
          v8 = (void **)Buffer[0];
LABEL_66:
          if ( v28 != (_BYTE *)-40 )
          {
            if ( v9 < 0x10 )
              v8 = Buffer;
            if ( v24 >= &v8[v38 / 4] )
              _invalid_parameter_noinfo();
          }
          if ( v23 != fwrite(v24, 1u, v23, *(FILE **)(v29 + 76)) )
            goto LABEL_87;
          v9 = v39;
          v8 = (void **)Buffer[0];
          goto LABEL_73;
        }
      }
      v25 = v8;
      if ( v9 < 0x10 )
        v25 = Buffer;
      if ( v25 <= v24 )
      {
        v26 = v8;
        if ( v9 < 0x10 )
          v26 = Buffer;
        if ( v24 <= &v26[v38 / 4] )
          goto LABEL_66;
      }
      goto LABEL_65;
    }
LABEL_73:
    *(_BYTE *)(v29 + 65) = 1;
    if ( v33 != &v30 )
    {
      v40 = -1;
      sub_403DD0((int)&v35);
      return a2;
    }
    if ( v23 == 0 )
    {
      if ( v38 < 0x20 )
      {
        sub_407530(8u, 0);
        goto LABEL_11;
      }
      goto LABEL_87;
    }
  }
  if ( v18 != 3 )
  {
LABEL_87:
    v40 = -1;
    sub_403DD0((int)&v35);
    return -1;
  }
  if ( sub_405EE0(v30, *(FILE **)(v29 + 76)) )
    v27 = a2;
  else
    v27 = -1;
  v40 = -1;
  sub_403DD0((int)&v35);
  return v27;
}

// Address: 0x406CD0
int __thiscall sub_406CD0(int this, int a2)
{
  unsigned int v2; // eax
  FILE *v4; // eax

  v2 = **(_DWORD **)(this + 32);
  if ( v2 != 0 && **(_DWORD **)(this + 16) < v2 && (a2 == -1 || *(unsigned __int8 *)(v2 - 1) == a2) )
  {
    ++**(_DWORD **)(this + 48);
    --**(_DWORD **)(this + 32);
    return a2 != -1 ? a2 : 0;
  }
  else
  {
    v4 = *(FILE **)(this + 76);
    if ( v4 == nullptr || a2 == -1 || *(_DWORD *)(this + 60) != 0 || ungetc((unsigned __int8)a2, v4) == -1 )
      return -1;
    else
      return a2;
  }
}

// Address: 0x406D40
int __thiscall sub_406D40(_DWORD *this)
{
  unsigned __int8 **v2; // eax
  int result; // eax
  int v4; // edi

  v2 = (unsigned __int8 **)*(this + 8);
  if ( *v2 != nullptr && *v2 < &(*v2)[*(_DWORD *)*(this + 12)] )
    return **v2;
  result = (*(int (__thiscall **)(_DWORD *))(*this + 20))(this);
  v4 = result;
  if ( result != -1 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, result);
    return v4;
  }
  return result;
}

// Address: 0x406D90
int __thiscall sub_406D90(int this)
{
  int v1; // eax
  _DWORD *v2; // eax
  unsigned __int8 *v3; // ecx
  int result; // eax
  FILE *v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  void **v8; // eax
  void **v9; // esi
  void **v10; // ecx
  void **v11; // ecx
  int v12; // edx
  void **v13; // ecx
  int v14; // ebx
  void **v15; // esi
  void **v16; // ecx
  void **v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  const void *v21; // eax
  int v22; // esi
  unsigned int v23; // edx
  void **v24; // eax
  void **v25; // esi
  void **v26; // ecx
  void **v27; // ecx
  int v28; // edi
  int v29; // eax
  int v30; // eax
  int i; // esi
  int v32; // edx
  int v33; // esi
  _BYTE v34[19]; // [esp+Ah] [ebp-64h] BYREF
  unsigned __int8 Destination; // [esp+1Dh] [ebp-51h] BYREF
  void **v36; // [esp+1Eh] [ebp-50h] BYREF
  int v37; // [esp+22h] [ebp-4Ch] BYREF
  int v38; // [esp+26h] [ebp-48h]
  unsigned __int8 *v39; // [esp+2Ah] [ebp-44h] BYREF
  _BYTE v40[8]; // [esp+2Eh] [ebp-40h] BYREF
  int v41; // [esp+36h] [ebp-38h] BYREF
  int v42; // [esp+3Eh] [ebp-30h] BYREF
  void *v43[4]; // [esp+42h] [ebp-2Ch] BYREF
  int v44; // [esp+52h] [ebp-1Ch]
  unsigned int v45; // [esp+56h] [ebp-18h]
  int v46; // [esp+6Ah] [ebp-4h]

  v1 = **(_DWORD **)(this + 32);
  v38 = this;
  if ( v1 != 0 && **(_DWORD **)(this + 32) < (unsigned int)(**(_DWORD **)(this + 32) + **(_DWORD **)(this + 48)) )
  {
    --**(_DWORD **)(this + 48);
    v2 = *(_DWORD **)(this + 32);
    v3 = (unsigned __int8 *)(*v2)++;
    return *v3;
  }
  v5 = *(FILE **)(this + 76);
  if ( v5 == nullptr )
    return -1;
  if ( *(_DWORD *)(this + 60) == 0 )
  {
    result = fgetc(*(FILE **)(this + 76));
    if ( result != -1 )
      return (unsigned __int8)result;
    return -1;
  }
  v45 = 15;
  v44 = 0;
  LOBYTE(v43[0]) = 0;
  v46 = 0;
  v6 = fgetc(v5);
  if ( v6 == -1 )
  {
LABEL_61:
    v46 = -1;
    sub_403DD0((int)&v42);
    return -1;
  }
  while ( 1 )
  {
    sub_407530(1u, v6);
    v7 = v45;
    v8 = (void **)v43[0];
    if ( v45 < 0x10 )
    {
      v36 = v43;
      v9 = v43;
    }
    else
    {
      v9 = (void **)v43[0];
      v36 = (void **)v43[0];
      if ( v43[0] == nullptr )
        goto LABEL_17;
    }
    v10 = (void **)v43[0];
    if ( v45 < 0x10 )
      v10 = v43;
    if ( v10 > v9 )
      goto LABEL_17;
    v11 = (void **)v43[0];
    if ( v45 < 0x10 )
      v11 = v43;
    v12 = v44;
    if ( v9 > (void **)((char *)v11 + v44) )
    {
LABEL_17:
      _invalid_parameter_noinfo();
      v7 = v45;
      v12 = v44;
      v8 = (void **)v43[0];
    }
    if ( v34 != (_BYTE *)-56 )
    {
      v13 = v8;
      if ( v7 < 0x10 )
        v13 = v43;
      if ( v9 >= (void **)((char *)v13 + v12) )
      {
        _invalid_parameter_noinfo();
        v7 = v45;
        v12 = v44;
        v8 = (void **)v43[0];
      }
    }
    v14 = v12;
    if ( v7 < 0x10 )
    {
      v15 = v43;
    }
    else
    {
      v15 = v8;
      if ( v8 == nullptr )
        goto LABEL_31;
    }
    v16 = v8;
    if ( v7 < 0x10 )
      v16 = v43;
    if ( v16 > v15 )
      goto LABEL_31;
    v17 = v8;
    if ( v7 < 0x10 )
      v17 = v43;
    if ( v15 > (void **)((char *)v17 + v12) )
    {
LABEL_31:
      _invalid_parameter_noinfo();
      v7 = v45;
      v12 = v44;
      v8 = (void **)v43[0];
    }
    if ( v34 != (_BYTE *)-56 )
    {
      if ( v7 < 0x10 )
        v8 = v43;
      if ( v15 >= (void **)((char *)v8 + v12) )
        _invalid_parameter_noinfo();
    }
    v18 = v38;
    v19 = (*(int (__thiscall **)(_DWORD, int, void **, int, int *, unsigned __int8 *, void ***, unsigned __int8 **))(**(_DWORD **)(v38 + 60) + 16))(
            *(_DWORD *)(v38 + 60),
            v38 + 68,
            v15,
            (int)v36 + v14,
            &v37,
            &Destination,
            &v36,
            &v39);
    if ( v19 < 0 )
    {
LABEL_66:
      v46 = -1;
      if ( v45 >= 0x10 )
        operator delete(v43[0]);
      return -1;
    }
    if ( v19 <= 1 )
      break;
    if ( v19 != 3 )
      goto LABEL_66;
    if ( v44 != 0 )
    {
      v20 = sub_4075E0(v40);
      v21 = (const void *)sub_407E80(v20);
      memcpy_s(&Destination, 1u, v21, 1u);
      v22 = Destination;
      v46 = -1;
      sub_403DD0((int)&v42);
      return v22;
    }
LABEL_60:
    v6 = fgetc(*(FILE **)(v18 + 76));
    if ( v6 == -1 )
      goto LABEL_61;
  }
  if ( v39 == &Destination )
  {
    v23 = v45;
    v24 = (void **)v43[0];
    if ( v45 >= 0x10 )
    {
      v25 = (void **)v43[0];
      if ( v43[0] != nullptr )
        goto LABEL_47;
      goto LABEL_53;
    }
    v25 = v43;
LABEL_47:
    v26 = (void **)v43[0];
    if ( v45 < 0x10 )
      v26 = v43;
    if ( v26 > v25 )
      goto LABEL_53;
    v27 = (void **)v43[0];
    if ( v45 < 0x10 )
      v27 = v43;
    if ( v25 > (void **)((char *)v27 + v44) )
    {
LABEL_53:
      _invalid_parameter_noinfo();
      v23 = v45;
      v24 = (void **)v43[0];
    }
    if ( v34 != (_BYTE *)-56 )
    {
      if ( v23 < 0x10 )
        v24 = v43;
      if ( v25 >= (void **)((char *)v24 + v44) )
        _invalid_parameter_noinfo();
    }
    sub_404180(&v42, 0, v37 - (_DWORD)v25);
    goto LABEL_60;
  }
  v28 = v44;
  v29 = sub_4075E0(&v41);
  v30 = sub_407E80(v29);
  for ( i = v28 - v37 + v30; i > 0; --i )
  {
    v32 = *(char *)(i + v37 - 1);
    ungetc(v32, *(FILE **)(v38 + 76));
  }
  v33 = Destination;
  v46 = -1;
  sub_403DD0((int)&v42);
  return v33;
}

// Address: 0x407140
_DWORD *__thiscall sub_407140(int this, _DWORD *a2, int a3, int Origin, int a5)
{
  int v6; // edi
  int v7; // ebx
  int v9; // edx
  int v10; // ecx
  fpos_t Position; // [esp+10h] [ebp-8h] BYREF

  v6 = this + 64;
  if ( **(_DWORD **)(this + 32) == this + 64 && Origin == 1 && *(_DWORD *)(this + 60) == 0 )
    v7 = a3 - 1;
  else
    v7 = a3;
  if ( *(_DWORD *)(this + 76) == 0
    || (unsigned __int8)sub_407940() == 0
    || (v7 != 0 || Origin != 1) && fseek(*(FILE **)(this + 76), v7, Origin) != 0
    || fgetpos(*(FILE **)(this + 76), &Position) != 0 )
  {
    *a2 = -1;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    return a2;
  }
  else
  {
    if ( **(_DWORD **)(this + 32) == v6 )
    {
      **(_DWORD **)(this + 16) = v6;
      **(_DWORD **)(this + 32) = this + 65;
      **(_DWORD **)(this + 48) = 0;
    }
    v9 = HIDWORD(Position);
    a2[2] = Position;
    v10 = *(_DWORD *)(this + 68);
    *a2 = 0;
    a2[3] = v9;
    a2[4] = v10;
    return a2;
  }
}

// Address: 0x407220
_DWORD *__thiscall sub_407220(int this, _DWORD *a2, int Offset, int a4, fpos_t a5, int a6, int a7, int a8)
{
  bool v9; // zf
  _DWORD *v10; // edx
  int v12; // edx
  int v13; // ecx
  fpos_t Position; // [esp+8h] [ebp-8h] BYREF

  v9 = *(_DWORD *)(this + 76) == 0;
  Position = a5;
  if ( v9
    || (unsigned __int8)sub_407940() == 0
    || fsetpos(*(FILE **)(this + 76), &Position) != 0
    || Offset != 0 && fseek(*(FILE **)(this + 76), Offset, 1) != 0
    || fgetpos(*(FILE **)(this + 76), &Position) != 0 )
  {
    *a2 = -1;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    return a2;
  }
  else
  {
    v10 = *(_DWORD **)(this + 32);
    *(_DWORD *)(this + 68) = a6;
    if ( *v10 == this + 64 )
    {
      **(_DWORD **)(this + 16) = this + 64;
      **(_DWORD **)(this + 32) = this + 65;
      **(_DWORD **)(this + 48) = 0;
    }
    v12 = HIDWORD(Position);
    a2[2] = Position;
    v13 = *(_DWORD *)(this + 68);
    *a2 = 0;
    a2[3] = v12;
    a2[4] = v13;
    return a2;
  }
}

// Address: 0x407310
FILE **__thiscall sub_407310(FILE **this, char *Buffer, size_t Size)
{
  FILE *v4; // ecx
  int v5; // eax

  v4 = *(this + 19);
  if ( v4 == nullptr )
    return nullptr;
  v5 = Buffer != nullptr || Size != 0 ? 0 : 4;
  if ( setvbuf(v4, Buffer, v5, Size) != 0 )
    return nullptr;
  sub_4078A0(*(this + 19), 1);
  return this;
}

// Address: 0x407360
int __thiscall sub_407360(FILE **this)
{
  if ( *(this + 19) == nullptr
    || ((int (__thiscall *)(FILE **, int))(*this)->_cnt)(this, -1) == -1
    || fflush(*(this + 19)) >= 0 )
  {
    return 0;
  }
  else
  {
    return -1;
  }
}

// Address: 0x407390
int __stdcall sub_407390(int a1)
{
  int v1; // eax

  v1 = sub_4087A0(a1);
  return sub_407CA0(v1);
}

// Address: 0x4073B0
char *__thiscall sub_4073B0(struct std::ios_base *this, char a2)
{
  char *v2; // esi

  v2 = (char *)this - 4;
  *(_DWORD *)((char *)this + *(_DWORD *)(*((_DWORD *)this - 1) + 4) - 4) = &std::ostream::`vftable';
  *(_DWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}

// Address: 0x4073F0
struct std::ios_base *__thiscall sub_4073F0(struct std::ios_base *this, char a2)
{
  *(_DWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x407420
void *__thiscall sub_407420(void *this, char a2)
{
  sub_406460(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x407440
int *__thiscall sub_407440(int *this, char a2)
{
  int v3; // edi
  int v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // esi
  _BYTE v7[4]; // [esp+8h] [ebp-4h] BYREF

  v3 = *this;
  if ( *this != 0 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v7, 0);
    v4 = *(_DWORD *)(v3 + 4);
    if ( v4 != 0 && v4 != -1 )
      *(_DWORD *)(v3 + 4) = v4 - 1;
    v5 = *(_DWORD *)(v3 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v3 : nullptr;
    std::_Lockit::~_Lockit((std::_Lockit *)v7);
    if ( v5 != nullptr )
      (**v5)(v5, 1);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x4074B0
_DWORD *__thiscall sub_4074B0(struct std::ios_base *this, char a2)
{
  _DWORD *v2; // edi

  v2 = (_DWORD *)((char *)this - 84);
  sub_406800(this);
  *(_DWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}

// Address: 0x4074F0
_BYTE *__thiscall sub_4074F0(_BYTE *this, char a2)
{
  sub_406870(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x407530
_DWORD *__thiscall sub_407530(_DWORD *this, size_t Size, char a3)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  bool v6; // zf
  bool v7; // cf

  if ( -1 - *(this + 5) <= Size )
    sub_409792();
  if ( Size == 0 )
    return this;
  v4 = Size + *(this + 5);
  if ( v4 == -1 )
    sub_409792();
  v5 = *(this + 6);
  if ( v5 < v4 )
  {
    sub_404230((int)this, v4, *(this + 5));
    v6 = v4 == 0;
    goto LABEL_8;
  }
  v6 = v4 == 0;
  if ( v4 != 0 )
  {
LABEL_8:
    if ( !v6 )
    {
      sub_407EC0(*(this + 5), Size, a3);
      v7 = *(this + 6) < 0x10u;
      *(this + 5) = v4;
      if ( !v7 )
      {
        *(_BYTE *)(*(this + 1) + v4) = 0;
        return this;
      }
      *((_BYTE *)this + v4 + 4) = 0;
    }
    return this;
  }
  *(this + 5) = 0;
  if ( v5 < 0x10 )
    *((_BYTE *)this + 4) = 0;
  else
    *(_BYTE *)*(this + 1) = 0;
  return this;
}

// Address: 0x4075E0
_DWORD *__fastcall sub_4075E0(_DWORD *a1, int a2, _DWORD *a3)
{
  unsigned int v4; // edx
  unsigned int *v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ecx

  v4 = a1[6];
  v5 = a1 + 1;
  if ( v4 < 0x10 )
    v6 = (unsigned int)(a1 + 1);
  else
    v6 = *v5;
  *a3 = 0;
  if ( v6 == 0 )
    goto LABEL_12;
  v7 = v4 < 0x10 ? (unsigned int)(a1 + 1) : *v5;
  if ( v7 > v6 )
    goto LABEL_12;
  if ( v4 >= 0x10 )
    v5 = (unsigned int *)*v5;
  if ( v6 > (unsigned int)v5 + a1[5] )
LABEL_12:
    _invalid_parameter_noinfo();
  *a3 = a1;
  a3[1] = v6;
  return a3;
}

// Address: 0x407640
_DWORD *__thiscall sub_407640(_DWORD *this, int a2, char a3, int a4)
{
  char *v5; // esi

  if ( a4 != 0 )
  {
    *this = &unk_4289F0;
    *(this + 1) = &std::ios::`vftable';
  }
  *(_DWORD *)((char *)this + *(_DWORD *)(*this + 4)) = &std::ostream::`vftable';
  v5 = (char *)this + *(_DWORD *)(*this + 4);
  sub_405E40(v5);
  *((_DWORD *)v5 + 10) = a2;
  *((_DWORD *)v5 + 11) = 0;
  v5[48] = sub_4080D0(32);
  if ( *((_DWORD *)v5 + 10) == 0 )
    sub_405CD0(v5, v5[8] | 4, 0);
  if ( a3 != 0 )
    std::ios_base::_Addstd((struct std::ios_base *)v5);
  else
    *((_DWORD *)v5 + 1) = 0;
  return this;
}

// Address: 0x407700
int __thiscall sub_407700(_DWORD **this)
{
  if ( **(this + 8) != 0 )
    return **(this + 12);
  else
    return 0;
}

// Address: 0x407720
int __thiscall sub_407720(_DWORD **this)
{
  if ( **(this + 9) != 0 )
    return **(this + 13);
  else
    return 0;
}

// Address: 0x407740
_DWORD *__thiscall sub_407740(_DWORD *this, int a2)
{
  sub_407F80();
  *this = &std::filebuf::`vftable';
  sub_4078A0(a2, 0);
  return this;
}

// Address: 0x407770
int __userpurge sub_407770@<eax>(int a1@<esi>, char *SrcBuf)
{
  struct _iobuf *v2; // eax
  int v3; // eax
  int v4; // eax

  if ( *(_DWORD *)(a1 + 76) != 0 )
    return 0;
  v2 = std::_Fiopen(SrcBuf, 10, 64);
  if ( v2 == nullptr )
    return 0;
  sub_4078A0(v2, 1);
  v3 = sub_408080();
  v4 = sub_4087A0(v3);
  sub_407CA0(v4);
  sub_405890((int *)&SrcBuf);
  return a1;
}

// Address: 0x407810
int __thiscall sub_407810(int this)
{
  int v2; // edi
  int v3; // ecx

  v2 = this;
  if ( *(_DWORD *)(this + 76) == 0 )
    goto LABEL_5;
  if ( (unsigned __int8)sub_407940() == 0 )
    v2 = 0;
  if ( fclose(*(FILE **)(this + 76)) != 0 )
LABEL_5:
    v2 = 0;
  *(_DWORD *)(this + 16) = this + 8;
  *(_BYTE *)(this + 72) = 0;
  *(_BYTE *)(this + 65) = 0;
  *(_DWORD *)(this + 32) = this + 24;
  *(_DWORD *)(this + 36) = this + 28;
  *(_DWORD *)(this + 20) = this + 12;
  *(_DWORD *)(this + 48) = this + 40;
  *(_DWORD *)(this + 52) = this + 44;
  *(_DWORD *)(this + 12) = 0;
  **(_DWORD **)(this + 36) = 0;
  **(_DWORD **)(this + 52) = 0;
  **(_DWORD **)(this + 16) = 0;
  **(_DWORD **)(this + 32) = 0;
  **(_DWORD **)(this + 48) = 0;
  *(_DWORD *)(this + 76) = 0;
  v3 = dword_430034;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 68) = v3;
  return v2;
}

// Address: 0x4078A0
int __thiscall sub_4078A0(int this, int a2, int a3)
{
  int result; // eax

  *(_DWORD *)(this + 16) = this + 8;
  *(_DWORD *)(this + 32) = this + 24;
  *(_DWORD *)(this + 36) = this + 28;
  *(_BYTE *)(this + 72) = a3 == 1;
  *(_DWORD *)(this + 48) = this + 40;
  *(_BYTE *)(this + 65) = 0;
  *(_DWORD *)(this + 20) = this + 12;
  *(_DWORD *)(this + 52) = this + 44;
  *(_DWORD *)(this + 12) = 0;
  **(_DWORD **)(this + 36) = 0;
  **(_DWORD **)(this + 52) = 0;
  **(_DWORD **)(this + 16) = 0;
  **(_DWORD **)(this + 32) = 0;
  **(_DWORD **)(this + 48) = 0;
  result = a2;
  if ( a2 != 0 )
  {
    *(_DWORD *)(this + 16) = a2 + 8;
    *(_DWORD *)(this + 20) = a2 + 8;
    *(_DWORD *)(this + 32) = a2;
    *(_DWORD *)(this + 36) = a2;
    *(_DWORD *)(this + 48) = a2 + 4;
    *(_DWORD *)(this + 52) = a2 + 4;
  }
  *(_DWORD *)(this + 76) = a2;
  *(_DWORD *)(this + 68) = dword_430034;
  *(_DWORD *)(this + 60) = 0;
  return result;
}

// Address: 0x407940
char __thiscall sub_407940(_DWORD *this)
{
  bool v1; // zf
  void **v2; // eax
  unsigned int v3; // edx
  void **v4; // ebx
  void **v5; // ecx
  void **v6; // ecx
  void **v7; // ecx
  int v8; // edi
  void **v9; // esi
  void **v10; // ecx
  void **v11; // ecx
  int v12; // eax
  int v13; // eax
  void **v14; // esi
  void **v15; // ecx
  void **v16; // ecx
  void **v17; // ecx
  size_t v18; // edi
  void **v19; // esi
  void **v20; // ecx
  void **v21; // ecx
  _BYTE v23[16]; // [esp+4h] [ebp-4Ch] BYREF
  _DWORD *v24; // [esp+14h] [ebp-3Ch]
  void **v25; // [esp+18h] [ebp-38h]
  void **v26; // [esp+1Ch] [ebp-34h] BYREF
  int v27; // [esp+20h] [ebp-30h] BYREF
  void *Buffer[2]; // [esp+24h] [ebp-2Ch] BYREF
  char v29; // [esp+2Ch] [ebp-24h]
  int v30; // [esp+34h] [ebp-1Ch]
  unsigned int v31; // [esp+38h] [ebp-18h]
  int v32; // [esp+4Ch] [ebp-4h]

  v1 = *(this + 15) == 0;
  v24 = this;
  if ( v1 || *((_BYTE *)this + 65) == 0 )
    return 1;
  if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, -1) == -1 )
    return 0;
  v31 = 15;
  Buffer[0] = nullptr;
  Buffer[1] = nullptr;
  v30 = 8;
  v29 = 0;
  v32 = 0;
LABEL_5:
  v2 = (void **)Buffer[0];
  v3 = v31;
  while ( 1 )
  {
    if ( v3 < 0x10 )
    {
      v4 = Buffer;
      v25 = Buffer;
    }
    else
    {
      v4 = v2;
      v25 = v2;
      if ( v2 == nullptr )
        goto LABEL_14;
    }
    v5 = v2;
    if ( v3 < 0x10 )
      v5 = Buffer;
    if ( v5 > v4 )
      goto LABEL_14;
    v6 = v2;
    if ( v3 < 0x10 )
      v6 = Buffer;
    if ( v4 > &v6[v30 / 4u] )
    {
LABEL_14:
      _invalid_parameter_noinfo();
      v3 = v31;
      v2 = (void **)Buffer[0];
    }
    if ( v23 != (_BYTE *)-32 )
    {
      v7 = v2;
      if ( v3 < 0x10 )
        v7 = Buffer;
      if ( v4 >= &v7[v30 / 4u] )
      {
        _invalid_parameter_noinfo();
        v3 = v31;
        v2 = (void **)Buffer[0];
      }
    }
    v8 = v30;
    if ( v3 < 0x10 )
    {
      v9 = Buffer;
    }
    else
    {
      v9 = v2;
      if ( v2 == nullptr )
        goto LABEL_28;
    }
    v10 = v2;
    if ( v3 < 0x10 )
      v10 = Buffer;
    if ( v10 > v9 )
      goto LABEL_28;
    v11 = v2;
    if ( v3 < 0x10 )
      v11 = Buffer;
    v4 = v25;
    if ( v9 > &v11[v30 / 4u] )
    {
LABEL_28:
      _invalid_parameter_noinfo();
      v3 = v31;
      v2 = (void **)Buffer[0];
    }
    if ( v23 != (_BYTE *)-32 )
    {
      if ( v3 < 0x10 )
        v2 = Buffer;
      if ( v9 >= &v2[v30 / 4u] )
        _invalid_parameter_noinfo();
    }
    v12 = (*(int (__thiscall **)(_DWORD, _DWORD *, void **, int, void ***))(*(_DWORD *)v24[15] + 24))(
            v24[15],
            v24 + 17,
            v9,
            (int)v4 + v8,
            &v26);
    if ( v12 != 0 )
      break;
    *((_BYTE *)v24 + 65) = 0;
LABEL_41:
    v3 = v31;
    v2 = (void **)Buffer[0];
    if ( v31 < 0x10 )
    {
      v14 = Buffer;
    }
    else
    {
      v14 = (void **)Buffer[0];
      if ( Buffer[0] == nullptr )
        goto LABEL_49;
    }
    v15 = (void **)Buffer[0];
    if ( v31 < 0x10 )
      v15 = Buffer;
    if ( v15 > v14 )
      goto LABEL_49;
    v16 = (void **)Buffer[0];
    if ( v31 < 0x10 )
      v16 = Buffer;
    if ( v14 > &v16[v30 / 4u] )
    {
LABEL_49:
      _invalid_parameter_noinfo();
      v3 = v31;
      v2 = (void **)Buffer[0];
    }
    if ( v23 != (_BYTE *)-32 )
    {
      v17 = v2;
      if ( v3 < 0x10 )
        v17 = Buffer;
      if ( v14 >= &v17[v30 / 4u] )
      {
        _invalid_parameter_noinfo();
        v3 = v31;
        v2 = (void **)Buffer[0];
      }
    }
    v18 = (char *)v26 - (char *)v14;
    if ( v26 == v14 )
      goto LABEL_72;
    if ( v3 < 0x10 )
    {
      v19 = Buffer;
LABEL_58:
      v20 = v2;
      if ( v3 < 0x10 )
        v20 = Buffer;
      if ( v20 <= v19 )
      {
        v21 = v2;
        if ( v3 < 0x10 )
          v21 = Buffer;
        if ( v19 <= &v21[v30 / 4u] )
          goto LABEL_65;
      }
      goto LABEL_64;
    }
    v19 = v2;
    if ( v2 != nullptr )
      goto LABEL_58;
LABEL_64:
    _invalid_parameter_noinfo();
    v3 = v31;
    v2 = (void **)Buffer[0];
LABEL_65:
    if ( v23 != (_BYTE *)-32 )
    {
      if ( v3 < 0x10 )
        v2 = Buffer;
      if ( v19 >= &v2[v30 / 4u] )
        _invalid_parameter_noinfo();
    }
    if ( v18 != fwrite(v19, 1u, v18, (FILE *)v24[19]) )
    {
      v32 = -1;
      goto LABEL_78;
    }
    v3 = v31;
    v2 = (void **)Buffer[0];
LABEL_72:
    if ( *((_BYTE *)v24 + 65) == 0 )
    {
      v32 = -1;
      goto LABEL_81;
    }
    if ( v18 == 0 )
    {
      sub_407530(&v27, 8u, 0);
      goto LABEL_5;
    }
  }
  v13 = v12 - 1;
  if ( v13 == 0 )
    goto LABEL_41;
  v32 = -1;
  if ( v13 != 2 )
  {
LABEL_78:
    sub_403DD0((int)&v27);
    return 0;
  }
LABEL_81:
  sub_403DD0((int)&v27);
  return 1;
}

// Address: 0x407CA0
_DWORD *__thiscall sub_407CA0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( (_BYTE)result != 0 )
  {
    *(this + 15) = 0;
  }
  else
  {
    *(this + 15) = a2;
    *(this + 4) = this + 2;
    *(this + 8) = this + 6;
    *(this + 9) = this + 7;
    *(this + 5) = this + 3;
    *(this + 12) = this + 10;
    *(this + 13) = this + 11;
    *(this + 3) = 0;
    *(_DWORD *)*(this + 9) = 0;
    *(_DWORD *)*(this + 13) = 0;
    *(_DWORD *)*(this + 4) = 0;
    result = (_DWORD *)*(this + 8);
    *result = 0;
    *(_DWORD *)*(this + 12) = 0;
  }
  return result;
}

// Address: 0x407D20
int __userpurge sub_407D20@<eax>(int a1@<esi>, int a2)
{
  int v2; // eax
  int v3; // eax
  _BYTE *v4; // eax

  *(_DWORD *)a2 = a1;
  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 40);
  if ( v2 != 0 )
    sub_409D91(v2 + 4);
  v3 = a1 + *(_DWORD *)(*(_DWORD *)a1 + 4);
  if ( *(_DWORD *)(v3 + 8) == 0 )
  {
    v4 = *(_BYTE **)(v3 + 44);
    if ( v4 != nullptr )
      sub_4063F0(v4);
  }
  *(_BYTE *)(a2 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 8) == 0;
  return a2;
}

// Address: 0x407DB0
int __stdcall sub_407DB0(int a1)
{
  int result; // eax

  if ( !__uncaught_exception() )
    sub_407F20();
  result = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a1 + 4) + *(_DWORD *)a1 + 40);
  if ( result != 0 )
    return sub_409D9A(result + 4);
  return result;
}

// Address: 0x407E20
int __stdcall sub_407E20(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, _DWORD *a7)
{
  *a4 = a2;
  *a7 = a5;
  return 3;
}

// Address: 0x407E40
int __stdcall sub_407E40(int a1, int a2, int a3, _DWORD *a4)
{
  *a4 = a2;
  return 3;
}

// Address: 0x407E60
unsigned int __stdcall sub_407E60(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int result; // eax

  result = a3 - a2;
  if ( a4 < a3 - a2 )
    return a4;
  return result;
}

// Address: 0x407E80
int __thiscall sub_407E80(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx

  if ( *this != -4 )
  {
    if ( *this == 0 )
      _invalid_parameter_noinfo();
    v2 = *this;
    if ( *(_DWORD *)(*this + 24) < 0x10u )
      v3 = v2 + 4;
    else
      v3 = *(_DWORD *)(v2 + 4);
    if ( *(this + 1) >= (unsigned int)(v3 + *(_DWORD *)(v2 + 20)) )
      _invalid_parameter_noinfo();
  }
  return *(this + 1);
}

// Address: 0x407EC0
unsigned __int8 __thiscall sub_407EC0(_DWORD *this, int a2, size_t Size, char a4)
{
  _DWORD *v4; // ecx
  unsigned __int8 result; // al
  _DWORD *v6; // ecx

  if ( Size == 1 )
  {
    if ( *(this + 6) < 0x10u )
    {
      result = a4;
      v4 = this + 1;
    }
    else
    {
      v4 = (_DWORD *)*(this + 1);
      result = a4;
    }
    *((_BYTE *)v4 + a2) = a4;
  }
  else
  {
    if ( *(this + 6) < 0x10u )
      v6 = this + 1;
    else
      v6 = (_DWORD *)*(this + 1);
    return (unsigned __int8)memset((char *)v6 + a2, a4, Size);
  }
  return result;
}

// Address: 0x407F20
_BYTE *__thiscall sub_407F20(_BYTE *this)
{
  _BYTE *result; // eax
  _DWORD v2[8]; // [esp+0h] [ebp-20h] BYREF

  v2[4] = v2;
  v2[7] = 0;
  result = *(_BYTE **)this;
  if ( (*(this + *(_DWORD *)(*(_DWORD *)this + 4) + 16) & 2) != 0 )
    return sub_4063F0(this);
  return result;
}

// Address: 0x407F80
_DWORD *__thiscall sub_407F80(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // eax
  _BYTE v6[4]; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v7 = this;
  *this = &std::streambuf::`vftable';
  std::_Mutex::_Mutex((std::_Mutex *)(this + 1));
  v8 = 0;
  v2 = operator new(4u);
  if ( v2 != nullptr )
  {
    *v2 = std::locale::_Init();
    v3 = sub_4099FF();
    std::_Lockit::_Lockit((std::_Lockit *)v6, 0);
    v4 = *(_DWORD *)(v3 + 4);
    if ( v4 != -1 )
      *(_DWORD *)(v3 + 4) = v4 + 1;
    std::_Lockit::~_Lockit((std::_Lockit *)v6);
  }
  else
  {
    v2 = nullptr;
  }
  *(this + 4) = this + 2;
  *(this + 8) = this + 6;
  *(this + 9) = this + 7;
  *(this + 14) = v2;
  *(this + 5) = this + 3;
  *(this + 12) = this + 10;
  *(this + 13) = this + 11;
  *(this + 3) = 0;
  *(_DWORD *)*(this + 9) = 0;
  *(_DWORD *)*(this + 13) = 0;
  *(_DWORD *)*(this + 4) = 0;
  *(_DWORD *)*(this + 8) = 0;
  *(_DWORD *)*(this + 12) = 0;
  return this;
}

// Address: 0x408080
_DWORD *__usercall sub_408080@<eax>(int a1@<eax>, int a2@<ecx>, _DWORD *a3@<edi>)
{
  int v3; // esi
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = a2;
  v3 = **(_DWORD **)(a1 + 56);
  *a3 = v3;
  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v4 = *(_DWORD *)(v3 + 4);
  if ( v4 != -1 )
    *(_DWORD *)(v3 + 4) = v4 + 1;
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return a3;
}

// Address: 0x4080D0
int __thiscall sub_4080D0(_DWORD **this, int a2)
{
  _DWORD *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  int v9; // [esp+10h] [ebp-14h] BYREF
  _BYTE v10[4]; // [esp+14h] [ebp-10h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  v2 = sub_405E00(this, &v9);
  v11 = 0;
  v3 = sub_408190(v2);
  v11 = -1;
  v4 = v9;
  v5 = v3;
  if ( v9 != 0 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v10, 0);
    v6 = *(_DWORD *)(v4 + 4);
    if ( v6 != 0 && v6 != -1 )
      *(_DWORD *)(v4 + 4) = v6 - 1;
    v7 = *(_DWORD *)(v4 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v4 : nullptr;
    std::_Lockit::~_Lockit((std::_Lockit *)v10);
    if ( v7 != nullptr )
      (**v7)(v7, 1);
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 24))(v5, a2);
}

// Address: 0x408190
struct std::locale::facet *__cdecl sub_408190(_DWORD *a1)
{
  int v1; // ebx
  _DWORD *v2; // edi
  unsigned int v3; // esi
  int v4; // eax
  struct std::locale::facet *v5; // ecx
  int v6; // eax
  struct std::locale::facet *v7; // esi
  int v8; // eax
  struct std::locale::facet *v10; // [esp+10h] [ebp-24h] BYREF
  _BYTE v11[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v12[4]; // [esp+18h] [ebp-1Ch] BYREF
  _BYTE pExceptionObject[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v14; // [esp+30h] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v12, 0);
  v14 = 0;
  v1 = dword_430028;
  v10 = (struct std::locale::facet *)dword_430028;
  if ( dword_42F160 == 0 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v11, 0);
    if ( dword_42F160 == 0 )
      dword_42F160 = ++dword_42F15C;
    std::_Lockit::~_Lockit((std::_Lockit *)v11);
  }
  v2 = a1;
  v3 = dword_42F160;
  v4 = *a1;
  if ( (unsigned int)dword_42F160 >= *(_DWORD *)(*a1 + 12) )
  {
    v5 = nullptr;
  }
  else
  {
    v5 = *(struct std::locale::facet **)(*(_DWORD *)(v4 + 8) + 4 * dword_42F160);
    if ( v5 != nullptr )
    {
LABEL_11:
      v7 = v5;
LABEL_12:
      if ( v7 != nullptr )
        goto LABEL_20;
      goto LABEL_13;
    }
  }
  if ( *(_BYTE *)(v4 + 20) == 0 )
    goto LABEL_11;
  v6 = sub_4099FF();
  if ( v3 < *(_DWORD *)(v6 + 12) )
  {
    v7 = *(struct std::locale::facet **)(*(_DWORD *)(v6 + 8) + 4 * v3);
    goto LABEL_12;
  }
LABEL_13:
  if ( v1 != 0 )
  {
    v7 = (struct std::locale::facet *)v1;
  }
  else
  {
    if ( sub_405990((char **)&v10, v2) == -1 )
    {
      sub_40A2D7("bad cast");
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast_std__);
    }
    v7 = v10;
    dword_430028 = (int)v10;
    std::_Lockit::_Lockit((std::_Lockit *)&a1, 0);
    v8 = *((_DWORD *)v7 + 1);
    if ( v8 != -1 )
      *((_DWORD *)v7 + 1) = v8 + 1;
    std::_Lockit::~_Lockit((std::_Lockit *)&a1);
    std::locale::facet::facet_Register(v7);
  }
LABEL_20:
  v14 = -1;
  std::_Lockit::~_Lockit((std::_Lockit *)v12);
  return v7;
}

// Address: 0x4082E0
int __usercall sub_4082E0@<eax>(char *a1@<edx>, char *Format, ...)
{
  va_list ArgList; // [esp+8h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(a1, 0x104u, Format, ArgList);
}

// Address: 0x408300
int __cdecl sub_408300(int a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // edx
  _DWORD *v10; // ecx
  _BYTE *v11; // edx
  int v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  _DWORD *v15; // ecx
  _BYTE *v16; // edx
  int v17; // edx
  int v18; // eax
  _DWORD *v19; // ecx
  _DWORD *v20; // edx
  _DWORD *v21; // ecx
  _BYTE *v22; // edx
  _DWORD *v23; // ecx
  int v24; // eax
  int v25; // eax
  int v27; // [esp+0h] [ebp-38h] BYREF
  _BYTE *v28; // [esp+14h] [ebp-24h] BYREF
  char v29; // [esp+18h] [ebp-20h]
  unsigned int v30; // [esp+1Ch] [ebp-1Ch]
  unsigned int v31; // [esp+20h] [ebp-18h]
  int v32; // [esp+24h] [ebp-14h]
  int *v33; // [esp+28h] [ebp-10h]
  int v34; // [esp+34h] [ebp-4h]

  v33 = &v27;
  v2 = a2;
  v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 24);
  v4 = a2[5];
  v5 = 0;
  v32 = 0;
  v30 = v4;
  if ( v3 <= 0 || v3 <= v4 )
    v31 = 0;
  else
    v31 = v3 - v4;
  sub_407D20(a1, (int)&v28);
  v34 = 0;
  if ( v29 != 0 )
  {
    LOBYTE(v34) = 1;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 16) & 0x1C0) == 0x40 )
      goto LABEL_16;
    while ( v31 != 0 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)a1 + 4);
      LOBYTE(v7) = *(_BYTE *)(v6 + a1 + 48);
      v8 = *(_DWORD **)(a1 + v6 + 40);
      if ( *(_DWORD *)v8[9] != 0 && (int)*(v9 = (_DWORD *)v8[13]) > 0 )
      {
        --*v9;
        v10 = (_DWORD *)v8[9];
        v11 = (_BYTE *)(*v10)++;
        *v11 = v7;
        v7 = (unsigned __int8)v7;
      }
      else
      {
        v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 4))(v8, (unsigned __int8)v7);
      }
      if ( v7 == -1 )
      {
        v32 |= 4u;
        break;
      }
      --v31;
    }
    v5 = 0;
    if ( v32 == 0 )
    {
LABEL_16:
      while ( v5 < v30 )
      {
        if ( v5 > v2[5] )
          _invalid_parameter_noinfo();
        if ( v2[6] < 0x10u )
          v12 = (int)(v2 + 1);
        else
          v12 = v2[1];
        v13 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 40);
        LOBYTE(v12) = *(_BYTE *)(v12 + v5);
        if ( *(_DWORD *)v13[9] != 0 && (int)*(v14 = (_DWORD *)v13[13]) > 0 )
        {
          --*v14;
          v15 = (_DWORD *)v13[9];
          v16 = (_BYTE *)(*v15)++;
          v2 = a2;
          *v16 = v12;
          v12 = (unsigned __int8)v12;
        }
        else
        {
          v12 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 4))(v13, (unsigned __int8)v12);
        }
        if ( v12 == -1 )
        {
          v32 |= 4u;
          break;
        }
        ++v5;
      }
      if ( v32 == 0 )
      {
        while ( v31 != 0 )
        {
          v17 = *(_DWORD *)(*(_DWORD *)a1 + 4);
          LOBYTE(v18) = *(_BYTE *)(v17 + a1 + 48);
          v19 = *(_DWORD **)(v17 + a1 + 40);
          if ( *(_DWORD *)v19[9] != 0 && (int)*(v20 = (_DWORD *)v19[13]) > 0 )
          {
            --*v20;
            v21 = (_DWORD *)v19[9];
            v22 = (_BYTE *)(*v21)++;
            *v22 = v18;
            v18 = (unsigned __int8)v18;
          }
          else
          {
            v18 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v19 + 4))(v19, (unsigned __int8)v18);
          }
          if ( v18 == -1 )
          {
            v32 |= 4u;
            break;
          }
          --v31;
        }
      }
    }
    *(_DWORD *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4) + 24) = 0;
    v34 = 0;
  }
  else
  {
    v32 = 4;
  }
  v23 = (_DWORD *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
  if ( v32 != 0 )
  {
    v24 = v32 | v23[2];
    if ( v23[10] == 0 )
      LOBYTE(v24) = v24 | 4;
    sub_405CD0(v23, v24, 0);
  }
  v34 = 3;
  if ( !__uncaught_exception() )
    sub_407F20(v28);
  v34 = -1;
  v25 = *(_DWORD *)&v28[*(_DWORD *)(*(_DWORD *)v28 + 4) + 40];
  if ( v25 != 0 )
    sub_409D9A(v25 + 4);
  return a1;
}

// Address: 0x408570
int __cdecl sub_408570(int a1, const char *a2)
{
  int v2; // ebx
  signed int v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // edx
  _DWORD *v10; // ecx
  _BYTE *v11; // edx
  int v12; // ecx
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // ecx
  _DWORD *v20; // edx
  _DWORD *v21; // ecx
  _BYTE *v22; // edx
  int v23; // [esp+0h] [ebp-30h] BYREF
  _BYTE *v24; // [esp+10h] [ebp-20h] BYREF
  char v25; // [esp+14h] [ebp-1Ch]
  int v26; // [esp+18h] [ebp-18h]
  int v27; // [esp+1Ch] [ebp-14h]
  int *v28; // [esp+20h] [ebp-10h]
  int v29; // [esp+2Ch] [ebp-4h]

  v28 = &v23;
  v2 = 0;
  v27 = 0;
  v3 = strlen(a2);
  v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 24);
  if ( v4 <= 0 || v4 <= v3 )
  {
    v26 = 0;
  }
  else
  {
    v2 = v4 - v3;
    v26 = v4 - v3;
  }
  sub_407D20(a1, (int)&v24);
  v29 = 0;
  if ( v25 != 0 )
  {
    LOBYTE(v29) = 1;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 16) & 0x1C0) == 0x40 )
      goto LABEL_16;
    while ( v2 > 0 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)a1 + 4) + a1;
      LOBYTE(v7) = *(_BYTE *)(v6 + 48);
      v8 = *(_DWORD **)(v6 + 40);
      if ( *(_DWORD *)v8[9] != 0 && (int)*(v9 = (_DWORD *)v8[13]) > 0 )
      {
        --*v9;
        v10 = (_DWORD *)v8[9];
        v11 = (_BYTE *)(*v10)++;
        v2 = v26;
        *v11 = v7;
        v7 = (unsigned __int8)v7;
      }
      else
      {
        v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 4))(v8, (unsigned __int8)v7);
      }
      if ( v7 == -1 )
      {
        v27 |= 4u;
        break;
      }
      v26 = --v2;
    }
    if ( v27 == 0 )
    {
LABEL_16:
      v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 40);
      if ( (*(int (__thiscall **)(int, const char *, signed int))(*(_DWORD *)v12 + 32))(v12, a2, v3) == v3 )
      {
        while ( v2 > 0 )
        {
          v17 = *(_DWORD *)(*(_DWORD *)a1 + 4);
          LOBYTE(v18) = *(_BYTE *)(v17 + a1 + 48);
          v19 = *(_DWORD **)(a1 + v17 + 40);
          if ( *(_DWORD *)v19[9] != 0 && (int)*(v20 = (_DWORD *)v19[13]) > 0 )
          {
            --*v20;
            v21 = (_DWORD *)v19[9];
            v22 = (_BYTE *)(*v21)++;
            *v22 = v18;
            v18 = (unsigned __int8)v18;
          }
          else
          {
            v18 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v19 + 4))(v19, (unsigned __int8)v18);
          }
          if ( v18 == -1 )
          {
            v27 |= 4u;
            break;
          }
          --v2;
        }
      }
      else
      {
        v27 = 4;
      }
    }
    *(_DWORD *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4) + 24) = 0;
    v29 = 0;
    v5 = v27;
  }
  else
  {
    v5 = 4;
  }
  v13 = (_DWORD *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4));
  if ( v5 != 0 )
  {
    v14 = v5 | v13[2];
    if ( v13[10] == 0 )
      LOBYTE(v14) = v14 | 4;
    sub_405CD0(v13, v14, 0);
  }
  v29 = 3;
  if ( !__uncaught_exception() )
    sub_407F20(v24);
  v29 = -1;
  v15 = *(_DWORD *)&v24[*(_DWORD *)(*(_DWORD *)v24 + 4) + 40];
  if ( v15 != 0 )
    sub_409D9A(v15 + 4);
  return a1;
}

// Address: 0x4087A0
struct std::locale::facet *__cdecl sub_4087A0(int *a1)
{
  int v1; // ebx
  int *v2; // edi
  unsigned int v3; // esi
  int v4; // eax
  struct std::locale::facet *v5; // ecx
  int v6; // eax
  struct std::locale::facet *v7; // esi
  int v8; // eax
  struct std::locale::facet *v10; // [esp+10h] [ebp-24h] BYREF
  _BYTE v11[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v12[4]; // [esp+18h] [ebp-1Ch] BYREF
  _BYTE pExceptionObject[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v14; // [esp+30h] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v12, 0);
  v14 = 0;
  v1 = dword_43002C;
  v10 = (struct std::locale::facet *)dword_43002C;
  if ( dword_43003C == 0 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v11, 0);
    if ( dword_43003C == 0 )
      dword_43003C = ++dword_42F15C;
    std::_Lockit::~_Lockit((std::_Lockit *)v11);
  }
  v2 = a1;
  v3 = dword_43003C;
  v4 = *a1;
  if ( (unsigned int)dword_43003C >= *(_DWORD *)(*a1 + 12) )
  {
    v5 = nullptr;
  }
  else
  {
    v5 = *(struct std::locale::facet **)(*(_DWORD *)(v4 + 8) + 4 * dword_43003C);
    if ( v5 != nullptr )
    {
LABEL_11:
      v7 = v5;
LABEL_12:
      if ( v7 != nullptr )
        goto LABEL_20;
      goto LABEL_13;
    }
  }
  if ( *(_BYTE *)(v4 + 20) == 0 )
    goto LABEL_11;
  v6 = sub_4099FF();
  if ( v3 < *(_DWORD *)(v6 + 12) )
  {
    v7 = *(struct std::locale::facet **)(*(_DWORD *)(v6 + 8) + 4 * v3);
    goto LABEL_12;
  }
LABEL_13:
  if ( v1 != 0 )
  {
    v7 = (struct std::locale::facet *)v1;
  }
  else
  {
    if ( sub_4088F0(&v10, v2) == -1 )
    {
      sub_40A2D7("bad cast");
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast_std__);
    }
    v7 = v10;
    dword_43002C = (int)v10;
    std::_Lockit::_Lockit((std::_Lockit *)&a1, 0);
    v8 = *((_DWORD *)v7 + 1);
    if ( v8 != -1 )
      *((_DWORD *)v7 + 1) = v8 + 1;
    std::_Lockit::~_Lockit((std::_Lockit *)&a1);
    std::locale::facet::facet_Register(v7);
  }
LABEL_20:
  v14 = -1;
  std::_Lockit::~_Lockit((std::_Lockit *)v12);
  return v7;
}

// Address: 0x4088F0
int __cdecl sub_4088F0(_DWORD *a1, _DWORD *a2)
{
  char v2; // bl
  _DWORD *v3; // esi
  int v4; // eax
  _BYTE v6[4]; // [esp+18h] [ebp-9Ch] BYREF
  void *v7; // [esp+1Ch] [ebp-98h]
  unsigned int v8; // [esp+30h] [ebp-84h]
  _BYTE v9[116]; // [esp+34h] [ebp-80h] BYREF
  int v10; // [esp+B0h] [ebp-4h]

  v2 = 0;
  if ( a1 != nullptr && *a1 == 0 )
  {
    v3 = operator new(8u);
    v10 = 0;
    if ( v3 != nullptr )
    {
      v4 = sub_4058E0(a2, (int)v6);
      LOBYTE(v10) = 1;
      sub_405610((int)v9, v4);
      v2 = 3;
      v3[1] = 0;
      *v3 = &std::codecvt<char,char,int>::`vftable';
    }
    else
    {
      v3 = nullptr;
    }
    v10 = 2;
    *a1 = v3;
    if ( (v2 & 2) != 0 )
    {
      v2 &= ~2u;
      sub_4056A0((std::_Lockit *)v9);
    }
    v10 = -1;
    if ( (v2 & 1) != 0 && v8 >= 0x10 )
      operator delete(v7);
  }
  return 2;
}

// Address: 0x408A00
HANDLE __usercall sub_408A00@<eax>(int a1@<eax>, LPCWSTR lpFileName)
{
  HANDLE CurrentProcess; // eax
  HANDLE TokenHandle; // [esp+4h] [ebp-14h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [esp+8h] [ebp-10h] BYREF

  if ( a1 != 0 )
  {
    CurrentProcess = GetCurrentProcess();
    OpenProcessToken(CurrentProcess, 0x20u, &TokenHandle);
    LookupPrivilegeValueW(nullptr, L"SeRestorePrivilege", &NewState.Privileges[0].Luid);
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = 2;
    AdjustTokenPrivileges(TokenHandle, false, &NewState, 0x10u, nullptr, nullptr);
    CloseHandle(TokenHandle);
  }
  return CreateFileW(lpFileName, 0x40000000u, 3u, nullptr, 3u, a1 != 0 ? 35651584 : 0x200000, nullptr);
}

// Address: 0x408AA0
HANDLE __usercall sub_408AA0@<eax>(int a1@<eax>, LPCWSTR lpFileName)
{
  HANDLE CurrentProcess; // eax
  HANDLE TokenHandle; // [esp+4h] [ebp-14h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [esp+8h] [ebp-10h] BYREF

  if ( a1 != 0 )
  {
    CurrentProcess = GetCurrentProcess();
    OpenProcessToken(CurrentProcess, 0x20u, &TokenHandle);
    LookupPrivilegeValueW(nullptr, L"SeBackupPrivilege", &NewState.Privileges[0].Luid);
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = 2;
    AdjustTokenPrivileges(TokenHandle, false, &NewState, 0x10u, nullptr, nullptr);
    CloseHandle(TokenHandle);
  }
  return CreateFileW(lpFileName, 0x80000000, 1u, nullptr, 3u, a1 != 0 ? 35651584 : 0x200000, nullptr);
}

// Address: 0x408B40
BOOL __usercall sub_408B40@<eax>(const WCHAR *a1@<eax>, void *a2@<ebx>)
{
  char FileAttributesW; // al
  HANDLE v5; // esi
  BOOL v6; // ebp
  DWORD BytesReturned; // [esp+10h] [ebp-4h] BYREF

  if ( a2 == nullptr )
    return false;
  if ( (GetFileAttributesW(a1) & 0x400) == 0 )
    return false;
  FileAttributesW = GetFileAttributesW(a1);
  v5 = sub_408AA0(FileAttributesW & 0x10, a1);
  if ( v5 == (HANDLE)-1 )
    return false;
  v6 = DeviceIoControl(v5, 0x900A8u, nullptr, 0, a2, 0x4000u, &BytesReturned, nullptr);
  CloseHandle(v5);
  return v6;
}

// Address: 0x408BC0
int __usercall sub_408BC0@<eax>(_DWORD *a1@<edi>, LPCWSTR lpFileName)
{
  int v2; // esi
  _DWORD *v4; // ebx

  v2 = 0;
  if ( a1 == nullptr || (GetFileAttributesW(lpFileName) & 0x400) == 0 )
    return 0;
  v4 = GlobalAlloc(0x40u, 0x4000u);
  if ( sub_408B40(lpFileName, v4) )
  {
    *a1 = *v4;
    v2 = 1;
  }
  GlobalFree(v4);
  return v2;
}

// Address: 0x408C20
int __usercall sub_408C20@<eax>(const WCHAR *a1@<eax>, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  char FileAttributesW; // al
  HANDLE v5; // ebx
  unsigned __int16 *v6; // esi
  DWORD BytesReturned; // [esp+10h] [ebp-4h] BYREF

  FileAttributesW = GetFileAttributesW(a1);
  v5 = sub_408A00(FileAttributesW & 0x10, a1);
  if ( v5 == (HANDLE)-1 )
    return 0;
  v6 = (unsigned __int16 *)GlobalAlloc(0x40u, 0x4000u);
  *(_DWORD *)v6 = -1610612724;
  wcslen(a3);
  wcslen(a2);
  sub_408CF0(a2);
  if ( !DeviceIoControl(v5, 0x900A4u, v6, v6[2] + 8, nullptr, 0, &BytesReturned, nullptr) )
  {
    CloseHandle(v5);
    GlobalFree(v6);
    return 0;
  }
  CloseHandle(v5);
  GlobalFree(v6);
  return 1;
}

// Address: 0x408CF0
int __usercall sub_408CF0@<eax>(
        const void *a1@<eax>,
        unsigned __int16 a2@<dx>,
        unsigned __int16 a3@<di>,
        int a4@<esi>,
        void *Src)
{
  unsigned __int16 v5; // bx
  __int16 v7; // cx
  unsigned __int16 v8; // cx

  *(_WORD *)(a4 + 6) = 0;
  if ( *(_DWORD *)a4 == -1610612733 )
  {
    *(_WORD *)(a4 + 8) = 0;
    *(_WORD *)(a4 + 10) = 2 * a2;
    v7 = 2 * a2 + 2;
    *(_WORD *)(a4 + 12) = v7;
    v8 = v7 + 2 * a3 + 10;
    *(_WORD *)(a4 + 4) = v8;
    *(_WORD *)(a4 + 14) = 2 * a3;
    if ( (unsigned int)v8 + 8 <= 0x2000 )
    {
      memcpy((void *)(a4 + 16), a1, 2 * a2 + 2);
      memcpy((void *)(a4 + 2 * (*(unsigned __int16 *)(a4 + 12) >> 1) + 16), Src, 2 * a3 + 2);
      return 1;
    }
  }
  else
  {
    if ( *(_DWORD *)a4 != -1610612724 )
      return 0;
    *(_WORD *)(a4 + 12) = 0;
    *(_WORD *)(a4 + 10) = 2 * a2;
    v5 = 2 * a2 + 2 * a3 + 12;
    *(_WORD *)(a4 + 4) = v5;
    *(_WORD *)(a4 + 14) = 2 * a3;
    *(_WORD *)(a4 + 8) = 2 * a3;
    if ( (unsigned int)v5 + 8 <= 0x2000 )
    {
      memcpy((void *)(a4 + 2 * ((unsigned __int16)(2 * a3) >> 1) + 20), a1, 2 * a2);
      memcpy((void *)(a4 + 2 * (*(unsigned __int16 *)(a4 + 12) >> 1) + 20), Src, 2 * a3);
      return 1;
    }
  }
  return 0;
}

// Address: 0x408DF0
int __usercall sub_408DF0@<eax>(void *a1@<esi>, const WCHAR *lpFileName)
{
  int v2; // edi
  unsigned __int16 *v3; // ebx
  int v5; // [esp+Ch] [ebp-4h] BYREF

  if ( a1 != nullptr && (GetFileAttributesW(lpFileName) & 0x400) != 0 && sub_408BC0(&v5, lpFileName) != 0 )
  {
    v2 = v5;
    if ( v5 == -1610612733 || v5 == -1610612724 )
    {
      v3 = (unsigned __int16 *)GlobalAlloc(0x40u, 0x4000u);
      if ( sub_408B40(lpFileName, v3) )
      {
        if ( v2 == -1610612733 )
        {
          if ( v3[7] <= 0x4000u )
          {
            memset(a1, 0, 0x4000u);
            memcpy(a1, &v3[(v3[6] >> 1) + 8], v3[7]);
            goto LABEL_13;
          }
        }
        else
        {
          if ( v2 != -1610612724 )
          {
LABEL_13:
            GlobalFree(v3);
            return 1;
          }
          if ( v3[7] <= 0x4000u )
          {
            memset(a1, 0, 0x4000u);
            memcpy(a1, &v3[(v3[6] >> 1) + 10], v3[7]);
            goto LABEL_13;
          }
        }
      }
      GlobalFree(v3);
    }
  }
  return 0;
}

// Address: 0x408EF0
BOOL __usercall sub_408EF0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // esi
  int v6; // [esp+18h] [ebp-28h] BYREF
  _WORD v7[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v8; // [esp+20h] [ebp-20h]
  _DWORD v9[7]; // [esp+24h] [ebp-1Ch] BYREF

  v6 = 0;
  if ( a2 == 0 )
    return false;
  v9[1] = a1;
  v9[0] = 24;
  v9[3] = 64;
  v9[2] = a3;
  v9[4] = 0;
  v9[5] = 0;
  if ( dword_42FE00(&v6, 1, v9) < 0 || v6 == 0 )
    return false;
  v7[0] = 258;
  v8 = a2;
  v7[1] = 260;
  v4 = dword_42FDFC(v6, v7, 0);
  dword_42FDF4(v6);
  return v4 >= 0;
}

// Address: 0x408FA0
WCHAR __cdecl sub_408FA0(wchar_t *String2)
{
  WCHAR v1; // di
  size_t DosDeviceW; // esi
  WCHAR DeviceName[4]; // [esp+10h] [ebp-218h] BYREF
  WCHAR TargetPath[262]; // [esp+18h] [ebp-210h] BYREF

  wcscpy(DeviceName, L"A:");
  memset(TargetPath, 0, 520);
  if ( String2 == nullptr )
    return 0;
  v1 = 65;
  while ( 1 )
  {
    DeviceName[0] = v1;
    DosDeviceW = QueryDosDeviceW(DeviceName, TargetPath, 0x104u);
    if ( DosDeviceW != 0 )
    {
      sub_4053E0((wchar_t *)L"QueryDosDevice : %ls, %ls", DeviceName, TargetPath);
      if ( wcsncmp(TargetPath, String2, DosDeviceW) == 0 )
        break;
    }
    if ( ++v1 > 0x5Au )
      return 0;
  }
  return v1;
}

// Address: 0x409070
int __usercall sub_409070@<eax>(wchar_t *Source@<ecx>, wchar_t *a2@<edi>)
{
  HANDLE FileW; // esi
  DWORD BytesReturned; // [esp+4h] [ebp-828h] BYREF
  wchar_t Destination[260]; // [esp+8h] [ebp-824h] BYREF
  _DWORD OutBuffer[390]; // [esp+210h] [ebp-61Ch] BYREF

  BytesReturned = 0;
  memset(Destination, 0, sizeof(Destination));
  memset(OutBuffer, 0, sizeof(OutBuffer));
  wcscpy_s(Destination, 0x104u, Source);
  FileW = CreateFileW(Source, 0x80000000, 0, nullptr, 3u, 0x2200000u, nullptr);
  if ( FileW == (HANDLE)-1 )
    return 0;
  if ( !DeviceIoControl(FileW, 0x900A8u, nullptr, 0, OutBuffer, 0x618u, &BytesReturned, nullptr) )
  {
    CloseHandle(FileW);
    return 0;
  }
  CloseHandle(FileW);
  if ( OutBuffer[0] != -1610612724 )
    return 0;
  wcsncpy_s(a2, 0x104u, (const wchar_t *)&OutBuffer[5] + (LOWORD(OutBuffer[2]) >> 1), HIWORD(OutBuffer[2]) >> 1);
  return 1;
}

// Address: 0x4091A0
int sub_4091A0()
{
  HANDLE FileW; // eax
  int v2; // eax
  int v3; // esi
  WCHAR v4; // ax
  size_t v5; // kr00_4
  void *v6; // esi
  void *v7; // edi
  DWORD NumberOfBytesRead; // [esp+20h] [ebp-A7Ch] BYREF
  int v9; // [esp+24h] [ebp-A78h] BYREF
  HANDLE hFile; // [esp+28h] [ebp-A74h]
  int v11; // [esp+2Ch] [ebp-A70h]
  int Buffer; // [esp+30h] [ebp-A6Ch] BYREF
  int v13; // [esp+34h] [ebp-A68h] BYREF
  char Args[4]; // [esp+38h] [ebp-A64h]
  _DWORD v15[6]; // [esp+3Ch] [ebp-A60h] BYREF
  _BYTE v16[8]; // [esp+54h] [ebp-A48h] BYREF
  _DWORD v17[134]; // [esp+5Ch] [ebp-A40h] BYREF
  char v18[4]; // [esp+274h] [ebp-828h] BYREF
  int v19; // [esp+278h] [ebp-824h]
  int v20; // [esp+27Ch] [ebp-820h]
  wchar_t v21[254]; // [esp+280h] [ebp-81Ch] BYREF
  wchar_t Destination[260]; // [esp+47Ch] [ebp-620h] BYREF
  WCHAR FileName[260]; // [esp+684h] [ebp-418h] BYREF
  wchar_t Source[262]; // [esp+88Ch] [ebp-210h] BYREF

  memset(FileName, 0, sizeof(FileName));
  Buffer = 0;
  memset(v17, 0, sizeof(v17));
  NumberOfBytesRead = 0;
  v11 = 0;
  sub_4053E0((wchar_t *)L"UpDateReparseVolumeLetter start.");
  wsprintfW(FileName, L"\\\\.\\%s\\%s\\%s", L"SheriffVDisk0", L"Partition0", L"UnProtCfg\\Un_Prot_List.lst");
  FileW = CreateFileW(FileName, 0xC0000000, 0, nullptr, 3u, 0x80u, nullptr);
  hFile = FileW;
  if ( FileW == (HANDLE)-1 )
  {
    sub_4053E0((wchar_t *)L"CreateFile filed : %s", FileName);
    return 0;
  }
  else
  {
    ReadFile(FileW, &Buffer, 4u, &NumberOfBytesRead, nullptr);
    if ( Buffer == 1669599319 && NumberOfBytesRead == 4 )
    {
      memset(Source, 0, 520);
      qmemcpy(Destination, L"SheriffVDisk1", 0x1Cu);
      memset(&Destination[14], 0, 0x1ECu);
      dword_42FDF8(&v13, Destination);
      v9 = 0;
      dword_42FDF8(v16, L"\\Global??");
      v15[0] = 24;
      v15[1] = 0;
      v15[3] = 64;
      v15[2] = v16;
      v15[4] = 0;
      v15[5] = 0;
      v2 = dword_42FE08(&v9, 1, v15);
      if ( v2 < 0 )
      {
        sub_4053E0((wchar_t *)L"Failed NtOpenDirectoryObject with 0x%08X", v2);
      }
      else
      {
        v3 = v9;
        if ( !sub_408EF0(v9, (int)Source, (int)&v13) )
          sub_4053E0((wchar_t *)L"Failed QuerySymbolicLinkName (%ls)", *(_DWORD *)Args);
        dword_42FDF4(v3);
        wcscpy_s(Destination, 0x104u, Source);
        wcscat_s(Destination, 0x104u, L"\\Partition0");
        v4 = sub_408FA0(Destination);
        v9 = v4;
        if ( v4 != 0 )
        {
          wcscpy_s(Destination, 0x104u, L"\\??\\SheriffVDisk1\\Partition0");
          v5 = wcslen(Destination);
          v6 = operator new(0x4000u);
          v7 = operator new(0x4000u);
          v19 = 6029375;
          *(_DWORD *)v18 = 4128860;
          v11 = 1;
          v20 = 3801155;
          memset(v21, 0, sizeof(v21));
          memset(v17, 0, sizeof(v17));
          memset(v6, 0, 0x4000u);
          memset(v7, 0, 0x4000u);
          while ( ReadFile(hFile, v17, 0x218u, &NumberOfBytesRead, nullptr) )
          {
            if ( NumberOfBytesRead != 536 )
              break;
            if ( (GetFileAttributesW((LPCWSTR)&v17[3]) & 0x400) != 0 )
            {
              sub_4053E0((wchar_t *)L"Reparse Point : %ls", &v17[3]);
              if ( sub_408DF0(v6, (const WCHAR *)&v17[3]) != 0 )
              {
                sub_4053E0((wchar_t *)L"    PrintName : (%ls)", v6);
                if ( sub_409070((wchar_t *)&v17[3], (wchar_t *)v7) != 0 )
                {
                  sub_4053E0((wchar_t *)L"    SubstituteName : (%ls)", v7);
                  if ( wcsncmp((const wchar_t *)v7, Destination, v5) == 0 )
                  {
                    LOWORD(v20) = v9;
                    wcscpy_s(v21, 0x104u, (const wchar_t *)v7 + v5);
                    sub_4053E0((wchar_t *)L"NewSubstituteName : %ls", v18);
                    if ( sub_408C20((const WCHAR *)&v17[3], (const unsigned __int16 *)v6, (const unsigned __int16 *)v18) != 0 )
                      sub_4053E0(L"CreateSymlink success.");
                    else
                      sub_4053E0((wchar_t *)L"CreateSymlink failed.");
                  }
                }
              }
            }
            v19 = 6029375;
            *(_DWORD *)v18 = 4128860;
            v20 = 3801155;
            memset(v21, 0, sizeof(v21));
            memset(v17, 0, sizeof(v17));
            memset(v6, 0, 0x4000u);
            memset(v7, 0, 0x4000u);
          }
          if ( v7 != nullptr )
            operator delete(v7);
          if ( v6 != nullptr )
            operator delete(v6);
        }
      }
    }
    CloseHandle(hFile);
    return v11;
  }
}

// Address: 0x4096E0
int sub_4096E0()
{
  HMODULE ModuleHandleW; // esi
  NTSTATUS (__stdcall *NtClose)(HANDLE); // eax

  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  NtOpenDirectoryObject = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))GetProcAddress(
                                                                       ModuleHandleW,
                                                                       "NtOpenDirectoryObject");
  NtQueryDirectoryObject = (int)GetProcAddress(ModuleHandleW, "NtQueryDirectoryObject");
  NtOpenSymbolicLinkObject = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))GetProcAddress(
                                                                          ModuleHandleW,
                                                                          "NtOpenSymbolicLinkObject");
  NtQuerySymbolicLinkObject = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))GetProcAddress(
                                                                           ModuleHandleW,
                                                                           "NtQuerySymbolicLinkObject");
  RtlInitUnicodeString = (void (__stdcall *)(PUNICODE_STRING, PCWSTR))GetProcAddress(
                                                                        ModuleHandleW,
                                                                        "RtlInitUnicodeString");
  NtClose = (NTSTATUS (__stdcall *)(HANDLE))GetProcAddress(ModuleHandleW, "NtClose");
  dword_42FDF4 = (int (__stdcall *)(_DWORD))NtClose;
  if ( NtOpenDirectoryObject != nullptr
    && NtQueryDirectoryObject != 0
    && RtlInitUnicodeString != nullptr
    && NtClose != nullptr )
  {
    return 1;
  }
  sub_4053E0((wchar_t *)L"Failed to retrieve ntdll.dll function pointers");
  return 0;
}

// Address: 0x409780
// attributes: thunk
HANDLE __stdcall CreateToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID)
{
  return __imp_CreateToolhelp32Snapshot(dwFlags, th32ProcessID);
}

// Address: 0x409786
// attributes: thunk
BOOL __stdcall Process32FirstW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe)
{
  return __imp_Process32FirstW(hSnapshot, lppe);
}

// Address: 0x40978C
// attributes: thunk
BOOL __stdcall Process32NextW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe)
{
  return __imp_Process32NextW(hSnapshot, lppe);
}

// Address: 0x409792
void __cdecl __noreturn sub_409792()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_403D90((int)v1, "string too long");
  v2 = 0;
  sub_401C40(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}

// Address: 0x4097CA
void __noreturn sub_4097CA()
{
  _DWORD pExceptionObject[10]; // [esp+10h] [ebp-50h] BYREF
  _BYTE v1[36]; // [esp+38h] [ebp-28h] BYREF
  int v2; // [esp+5Ch] [ebp-4h]

  sub_403D90((int)v1, "invalid string position");
  v2 = 0;
  sub_404B60(pExceptionObject, (int)v1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}

// Address: 0x409802
void *__cdecl operator new[](size_t a1)
{
  return operator new(a1);
}

// Address: 0x40980D
int __thiscall std::ios_base::_Callfns(int ***this, int a2)
{
  int **i; // esi
  int result; // eax

  for ( i = *(this + 8); i != nullptr; i = (int **)*i )
    result = ((int (__cdecl *)(int, int ***, int *))i[2])(a2, this, i[1]);
  return result;
}

// Address: 0x409834
void __cdecl std::ios_base::_Tidy(int ***this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // edi

  std::ios_base::_Callfns(this, 0);
  v1 = *(this + 7);
  if ( v1 != nullptr )
  {
    do
    {
      v2 = (_DWORD *)*v1;
      operator delete(v1);
      v1 = v2;
    }
    while ( v2 != nullptr );
  }
  v3 = *(this + 8);
  *(this + 7) = nullptr;
  if ( v3 != nullptr )
  {
    do
    {
      v4 = (_DWORD *)*v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 != nullptr );
  }
  *(this + 8) = nullptr;
}

// Address: 0x40987F
static void __cdecl std::ios_base::_Addstd(struct std::ios_base *a1)
{
  int v1; // ecx
  struct std::ios_base *v2; // ecx
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = v1;
  std::_Lockit::_Lockit((std::_Lockit *)&v3, 2);
  *((_DWORD *)a1 + 1) = 1;
  do
  {
    v2 = (struct std::ios_base *)dword_42F08C[*((_DWORD *)a1 + 1)];
    if ( v2 == nullptr )
      break;
    if ( v2 == a1 )
      break;
    ++*((_DWORD *)a1 + 1);
  }
  while ( *((_DWORD *)a1 + 1) < 8u );
  dword_42F08C[*((_DWORD *)a1 + 1)] = (int)a1;
  ++byte_42F0B4[*((_DWORD *)a1 + 1)];
  std::_Lockit::~_Lockit((std::_Lockit *)&v3);
}

// Address: 0x4098D1
static void __cdecl std::ios_base::_Ios_base_dtor(int ***a1)
{
  int *v1; // ecx

  if ( a1[1] == nullptr || (--byte_42F0B4[(_DWORD)a1[1]], byte_42F0B4[(_DWORD)a1[1]] <= 0) )
  {
    std::ios_base::_Tidy(a1);
    v1 = (int *)a1[9];
    if ( v1 != nullptr )
      sub_407440(v1, 1);
  }
}

// Address: 0x409962
void __cdecl _AtModuleExit(void (__cdecl *a1)())
{
  if ( atexit(a1) != 0 )
    abort();
}

// Address: 0x40997C
void __thiscall std::_Fac_node::~_Fac_node(std::_Fac_node *this)
{
  void (__thiscall ***v1)(_DWORD, int); // eax

  v1 = (void (__thiscall ***)(_DWORD, int))sub_405840(*((_DWORD *)this + 1));
  if ( v1 != nullptr )
    (**v1)(v1, 1);
}

// Address: 0x409991
std::_Fac_node *__thiscall std::_Fac_node::`scalar deleting destructor'(std::_Fac_node *this, char a2)
{
  std::_Fac_node::~_Fac_node(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x4099B2
int *__cdecl _Deletegloballocale(int *a1)
{
  int *result; // eax

  result = a1;
  if ( *a1 != 0 )
  {
    result = (int *)sub_405840(*a1);
    if ( result != nullptr )
      return (int *)(*(int (__thiscall **)(int *, int))*result)(result, 1);
  }
  return result;
}

// Address: 0x4099D3
void __thiscall tidy_global(void *this)
{
  void *v1; // [esp+0h] [ebp-4h] BYREF

  v1 = this;
  std::_Lockit::_Lockit((std::_Lockit *)&v1, 0);
  _Deletegloballocale((int *)&dword_42F154);
  *(_DWORD *)&dword_42F154 = 0;
  std::_Lockit::~_Lockit((std::_Lockit *)&v1);
}

// Address: 0x4099FF
int sub_4099FF()
{
  return *(_DWORD *)&dword_42F154;
}

// Address: 0x409A05
static void __cdecl std::locale::_Setgloballocale(void *a1)
{
  if ( byte_42F178 == 0 )
  {
    byte_42F178 = 1;
    _Atexit((void (__cdecl *)())tidy_global);
  }
  *(_DWORD *)&dword_42F154 = a1;
}

// Address: 0x409A2F
static void __cdecl std::locale::_Locimp::_Locimp_dtor(struct std::locale::_Locimp *a1)
{
  int v1; // esi
  int *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // eax
  _BYTE v4[12]; // [esp+10h] [ebp-10h] BYREF
  int v5; // [esp+1Ch] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v4, 0);
  v5 = 0;
  v1 = *((_DWORD *)a1 + 3);
  while ( v1 != 0 )
  {
    --v1;
    v2 = (int *)(*((_DWORD *)a1 + 2) + 4 * v1);
    if ( *v2 != 0 )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))sub_405840(*v2);
      if ( v3 != nullptr )
        (**v3)(v3, 1);
    }
  }
  free(*((void **)a1 + 2));
  v5 = -1;
  std::_Lockit::~_Lockit((std::_Lockit *)v4);
}

// Address: 0x409A8F
void __thiscall _Fac_tidy(void *this)
{
  std::_Fac_node *v1; // ecx
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this;
  std::_Lockit::_Lockit((std::_Lockit *)&v2, 0);
  while ( dword_42F150 != nullptr )
  {
    v1 = dword_42F150;
    dword_42F150 = *(std::_Fac_node **)dword_42F150;
    std::_Fac_node::`scalar deleting destructor'(v1, 1);
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v2);
}

// Address: 0x409AC4
static void __cdecl std::locale::facet::facet_Register(struct std::locale::facet *a1)
{
  std::_Fac_node *v1; // eax

  if ( dword_42F150 == nullptr )
    _AtModuleExit((void (__cdecl *)())_Fac_tidy);
  v1 = (std::_Fac_node *)operator new(8u);
  if ( v1 != nullptr )
  {
    *(_DWORD *)v1 = dword_42F150;
    *((_DWORD *)v1 + 1) = a1;
  }
  else
  {
    v1 = nullptr;
  }
  dword_42F150 = v1;
}

// Address: 0x409B02
static void __cdecl std::_Locinfo::_Locinfo_dtor(struct std::_Locinfo *a1)
{
  const char *v1; // eax

  if ( *((_DWORD *)a1 + 20) != 0 )
  {
    if ( *((_DWORD *)a1 + 21) < 0x10u )
      v1 = (char *)a1 + 64;
    else
      v1 = *((const char **)a1 + 16);
    setlocale(0, v1);
  }
}

// Address: 0x409B2A
std::locale::_Locimp *__thiscall std::locale::_Locimp::_Locimp(std::locale::_Locimp *this, bool a2)
{
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &std::locale::_Locimp::`vftable';
  *((_BYTE *)this + 20) = a2;
  sub_403D90((int)this + 24, &unk_421464);
  return this;
}

// Address: 0x409B73
void __thiscall std::locale::_Locimp::~_Locimp(std::locale::_Locimp *this)
{
  *(_DWORD *)this = &std::locale::_Locimp::`vftable';
  std::locale::_Locimp::_Locimp_dtor(this);
  sub_404000((_DWORD *)this + 6, 1, 0);
  *(_DWORD *)this = &std::locale::facet::`vftable';
}

// Address: 0x409BB0
std::locale::_Locimp *__thiscall std::locale::_Locimp::`scalar deleting destructor'(
        std::locale::_Locimp *this,
        char a2)
{
  std::locale::_Locimp::~_Locimp(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x409BD1
static struct std::locale::_Locimp *__cdecl std::locale::_Init()
{
  std::locale::_Locimp *v0; // esi
  std::locale::_Locimp *v1; // ecx
  _BYTE v3[12]; // [esp+18h] [ebp-10h] BYREF
  int v4; // [esp+24h] [ebp-4h]

  v0 = *(std::locale::_Locimp **)&dword_42F154;
  if ( *(_DWORD *)&dword_42F154 == 0 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v3, 0);
    v4 = 0;
    v0 = *(std::locale::_Locimp **)&dword_42F154;
    if ( *(_DWORD *)&dword_42F154 == 0 )
    {
      v1 = (std::locale::_Locimp *)operator new(0x34u);
      LOBYTE(v4) = 1;
      if ( v1 != nullptr )
        v0 = std::locale::_Locimp::_Locimp(v1, false);
      else
        v0 = nullptr;
      LOBYTE(v4) = 0;
      std::locale::_Setgloballocale(v0);
      *((_DWORD *)v0 + 4) = 63;
      sub_403FD0((void *)"C");
      dword_42F158 = (int)v0;
      sub_405810(v0);
      dword_42F170 = dword_42F158;
    }
    v4 = -1;
    std::_Lockit::~_Lockit((std::_Lockit *)v3);
  }
  return v0;
}

// Address: 0x409C6B
int __cdecl std::_Locinfo::_Locinfo_ctor(int a1, int a2)
{
  const char *v2; // esi
  char *v3; // eax
  char *v4; // eax

  if ( *(_DWORD *)(a2 + 24) < 0x10u )
    v2 = (const char *)(a2 + 4);
  else
    v2 = *(const char **)(a2 + 4);
  v3 = setlocale(0, nullptr);
  if ( v3 == nullptr )
    v3 = (char *)&unk_42146A;
  sub_403FD0(v3);
  if ( v2 == nullptr || (v4 = setlocale(0, v2)) == nullptr )
    v4 = (char *)&unk_421464;
  return sub_403FD0(v4);
}

// Address: 0x409CC7
std::_Init_locks *__thiscall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi

  if ( InterlockedIncrement(&Addend) == 0 )
  {
    v2 = &CriticalSection;
    do
      _Mtxinit(v2++);
    while ( (int)v2 < (int)&unk_42F1E0 );
  }
  return this;
}

// Address: 0x409D21
std::_Lockit *__thiscall std::_Lockit::_Lockit(std::_Lockit *this, int a2)
{
  *(_DWORD *)this = a2;
  if ( a2 < 4 )
    unknown_libname_5(&CriticalSection + a2);
  return this;
}

// Address: 0x409D49
void __thiscall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  if ( *(int *)this < 4 )
    sub_40A1B7(&CriticalSection + *(_DWORD *)this);
}

// Address: 0x409D60
std::_Mutex *__thiscall std::_Mutex::_Mutex(std::_Mutex *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // eax

  v2 = (struct _RTL_CRITICAL_SECTION *)operator new(0x18u);
  *(_DWORD *)this = v2;
  _Mtxinit(v2);
  return this;
}

// Address: 0x409D91
int __thiscall sub_409D91(LPCRITICAL_SECTION *this)
{
  return unknown_libname_5(*this);
}

// Address: 0x409D9A
int __thiscall sub_409D9A(LPCRITICAL_SECTION *this)
{
  return sub_40A1B7(*this);
}

// Address: 0x409DA3
// attributes: thunk
bool __cdecl __uncaught_exception()
{
  return ?__uncaught_exception@@YA_NXZ();
}

// Address: 0x409DA8
struct _iobuf *__cdecl std::_Fiopen(wchar_t *FileName, int a2, int ShFlag)
{
  int v3; // edx
  unsigned int v4; // edx
  int v5; // eax
  int i; // ecx
  int v7; // esi
  FILE *v9; // eax
  FILE *v10; // eax
  FILE *v11; // esi

  v3 = a2;
  if ( (a2 & 0x40) != 0 )
    v3 = a2 | 1;
  if ( (v3 & 8) != 0 )
    v3 |= 2u;
  v4 = v3 & 0xFFFFFF3B;
  v5 = 0;
  for ( i = 1; i != 0; i = dword_421474[v5++] )
  {
    if ( i == v4 )
      break;
  }
  v7 = 4 * v5;
  if ( dword_421470[v5] == 0 )
    return nullptr;
  if ( (a2 & 0x80) != 0 && (v4 & 1) != 0 )
  {
    v9 = _wfsopen(FileName, aR_0, ShFlag);
    if ( v9 != nullptr )
    {
      fclose(v9);
      return nullptr;
    }
  }
  v10 = _wfsopen(FileName, *(const wchar_t **)((char *)&off_42C048 + v7), ShFlag);
  v11 = v10;
  if ( v10 == nullptr )
    return nullptr;
  if ( (a2 & 4) != 0 && fseek(v10, 0, 2) != 0 )
  {
    fclose(v11);
    return nullptr;
  }
  return v11;
}

// Address: 0x409E60
struct _iobuf *__cdecl std::_Fiopen(char *SrcBuf, int a2, int ShFlag)
{
  wchar_t DstBuf[260]; // [esp+0h] [ebp-20Ch] BYREF

  if ( mbstowcs_s(nullptr, DstBuf, 0x104u, SrcBuf, 0x103u) != 0 )
    return nullptr;
  else
    return std::_Fiopen(DstBuf, a2, ShFlag);
}

// Address: 0x409EBD
int __cdecl _Tolower(int C, const _Ctypevec *MultiByteStr)
{
  const _Ctypevec *v2; // esi
  const __int16 *Table; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  UINT CodePage; // [esp+4h] [ebp-10h]
  unsigned int Locale; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  WCHAR DestStr; // [esp+10h] [ebp-4h] BYREF

  v2 = MultiByteStr;
  if ( MultiByteStr != nullptr )
  {
    Locale = MultiByteStr->_Page;
    Table = MultiByteStr->_Table;
  }
  else
  {
    Locale = *(_DWORD *)(___lc_handle_func() + 8);
    Table = (const __int16 *)___lc_codepage_func();
  }
  CodePage = (UINT)Table;
  if ( Locale == 0 )
  {
    result = C;
    if ( (unsigned int)(C - 65) <= 0x19 )
      return C + 32;
    return result;
  }
  if ( (unsigned int)C < 0x100 )
  {
    if ( v2 == nullptr )
    {
      if ( isupper(C) == 0 )
        return C;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)(v2->_Delfl + 2 * C) & 1) == 0 )
      return C;
  }
  if ( v2 == nullptr )
  {
LABEL_13:
    v11 = C >> 8;
    v5 = __pctype_func()[BYTE1(C)] & 0x8000;
    goto LABEL_15;
  }
  v11 = C >> 8;
  v5 = (*(_WORD *)(v2->_Delfl + 2 * BYTE1(C)) & 0x8000) != 0;
LABEL_15:
  if ( v5 != 0 )
  {
    LOBYTE(MultiByteStr) = v11;
    BYTE1(MultiByteStr) = C;
    BYTE2(MultiByteStr) = 0;
    v6 = 2;
  }
  else
  {
    LOWORD(MultiByteStr) = (unsigned __int8)C;
    v6 = 1;
  }
  v7 = __crtLCMapStringA(nullptr, Locale, 0x100u, (LPCCH)&MultiByteStr, (char *)v6, &DestStr, (char *)3, CodePage, 1);
  if ( v7 == 0 )
    return C;
  v8 = v7 == 1;
  result = (unsigned __int8)DestStr;
  if ( !v8 )
    return HIBYTE(DestStr) | ((unsigned __int8)DestStr << 8);
  return result;
}

// Address: 0x409FCA
_Ctypevec *__cdecl _Getctype(_Ctypevec *__return_ptr retstr)
{
  int v1; // eax
  const unsigned __int16 *v2; // eax
  const unsigned __int16 *v3; // eax

  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 4);
  retstr->_Table = (const __int16 *)___lc_codepage_func();
  v1 = _calloc_crt(0x100u, 2);
  retstr->_Delfl = v1;
  if ( v1 != 0 )
  {
    v2 = __pctype_func();
    memcpy((void *)retstr->_Delfl, v2, 0x200u);
    retstr->_LocaleName = (wchar_t *)1;
  }
  else
  {
    v3 = __pctype_func();
    retstr->_LocaleName = nullptr;
    retstr->_Delfl = (int)v3;
  }
  return retstr;
}

// Address: 0x40A02A
int __cdecl _Toupper(int C, const _Ctypevec *MultiByteStr)
{
  const _Ctypevec *v2; // esi
  const __int16 *Table; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  UINT CodePage; // [esp+4h] [ebp-10h]
  unsigned int Locale; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  WCHAR DestStr; // [esp+10h] [ebp-4h] BYREF

  v2 = MultiByteStr;
  if ( MultiByteStr != nullptr )
  {
    Locale = MultiByteStr->_Page;
    Table = MultiByteStr->_Table;
  }
  else
  {
    Locale = *(_DWORD *)(___lc_handle_func() + 8);
    Table = (const __int16 *)___lc_codepage_func();
  }
  CodePage = (UINT)Table;
  if ( Locale == 0 )
  {
    result = C;
    if ( (unsigned int)(C - 97) <= 0x19 )
      return C - 32;
    return result;
  }
  if ( (unsigned int)C < 0x100 )
  {
    if ( v2 == nullptr )
    {
      if ( islower(C) == 0 )
        return C;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)(v2->_Delfl + 2 * C) & 2) == 0 )
      return C;
  }
  if ( v2 == nullptr )
  {
LABEL_13:
    v11 = C >> 8;
    v5 = __pctype_func()[BYTE1(C)] & 0x8000;
    goto LABEL_15;
  }
  v11 = C >> 8;
  v5 = (*(_WORD *)(v2->_Delfl + 2 * BYTE1(C)) & 0x8000) != 0;
LABEL_15:
  if ( v5 != 0 )
  {
    LOBYTE(MultiByteStr) = v11;
    BYTE1(MultiByteStr) = C;
    BYTE2(MultiByteStr) = 0;
    v6 = 2;
  }
  else
  {
    LOWORD(MultiByteStr) = (unsigned __int8)C;
    v6 = 1;
  }
  v7 = __crtLCMapStringA(nullptr, Locale, 0x200u, (LPCCH)&MultiByteStr, (char *)v6, &DestStr, (char *)3, CodePage, 1);
  if ( v7 == 0 )
    return C;
  v8 = v7 == 1;
  result = (unsigned __int8)DestStr;
  if ( !v8 )
    return HIBYTE(DestStr) | ((unsigned __int8)DestStr << 8);
  return result;
}

// Address: 0x40A13C
void __cdecl _Atexit(void (__cdecl *a1)())
{
  if ( dword_42C08C == 0 )
    abort();
  dword_42F204[--dword_42C08C] = (int)a1;
}

// Address: 0x40A162
void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)
{
  int v1; // ecx
  unsigned int v2; // eax

LABEL_4:
  v2 = dword_42C08C;
  while ( v2 < 0xA )
  {
    v1 = dword_42F204[v2++];
    dword_42C08C = v2;
    if ( v1 != 0 )
    {
      ((void (*)(void))dword_42F200[v2])();
      goto LABEL_4;
    }
  }
}

// Address: 0x40A187
void __cdecl _Mtxinit(LPCRITICAL_SECTION lpCriticalSection)
{
  InitializeCriticalSection(lpCriticalSection);
}

// Address: 0x40A197
void __cdecl _Mtxdst(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

// Address: 0x40A1A7
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_5(LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
}

// Address: 0x40A1B7
void __cdecl sub_40A1B7(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}

// Address: 0x40A1C7
void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}

// Address: 0x40A1D6
_DWORD *__thiscall sub_40A1D6(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = &std::exception::`vftable';
  return this;
}

// Address: 0x40A1E7
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

// Address: 0x40A23A
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

// Address: 0x40A257
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

// Address: 0x40A2B4
void __thiscall sub_40A2B4(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}

// Address: 0x40A2CA
const char *__thiscall exception::what(exception *this)
{
  const char *result; // eax

  result = *((const char **)this + 1);
  if ( result == nullptr )
    return "Unknown exception";
  return result;
}

// Address: 0x40A2D7
std::exception *__thiscall sub_40A2D7(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2);
  *(_DWORD *)this = &std::bad_cast::`vftable';
  return this;
}

// Address: 0x40A2F5
std::exception *__thiscall sub_40A2F5(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_cast::`vftable';
  return this;
}

// Address: 0x40A312
void __thiscall sub_40A312(void *this)
{
  *(_DWORD *)this = &std::bad_cast::`vftable';
  sub_40A2B4(this);
}

// Address: 0x40A31D
void *__thiscall sub_40A31D(void *this, char a2)
{
  sub_40A2B4(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x40A33E
_DWORD *__thiscall sub_40A33E(_DWORD *this, char a2)
{
  *this = &std::bad_cast::`vftable';
  sub_40A2B4(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x40A365
void __cdecl operator delete(void *Block)
{
  free(Block);
}

// Address: 0x40A370
void __thiscall sub_40A370(struct type_info *this)
{
  *(_DWORD *)this = &type_info::`vftable';
  type_info::_Type_info_dtor(this);
}

// Address: 0x40A380
struct type_info *__thiscall sub_40A380(struct type_info *this, char a2)
{
  sub_40A370(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x40A3A1
BOOL __thiscall type_info::operator==(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0;
}

// Address: 0x40A3D0
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
    JUMPOUT(0x40FBC6);
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

// Address: 0x40A456
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

// Address: 0x40A4D3
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

// Address: 0x40A530
std::bad_alloc *__thiscall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  std::exception::exception(this, (const char *const *)&off_42C110, 1);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

// Address: 0x40A54B
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
      if ( (dword_42F23C & 1) == 0 )
      {
        dword_42F23C |= 1u;
        std::bad_alloc::bad_alloc((std::bad_alloc *)dword_42F230);
        atexit(sub_4209F4);
      }
      sub_4044F0((std::exception *)pExceptionObject, (struct std::exception *)dword_42F230);
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  return result;
}

// Address: 0x40A5B0
int __cdecl sub_40A5B0(int a1)
{
  dword_42F240 = a1;
  return a1;
}

// Address: 0x40A5BF
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
    sub_4100AC(2);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000417);
}

// Address: 0x40A6E7
int __cdecl _invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  int (*v5)(void); // eax

  v5 = (int (*)(void))_decode_pointer(dword_42F240);
  if ( v5 == nullptr )
  {
    sub_4100AC(2);
    _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v5();
}

// Address: 0x40A70D
void __cdecl _invalid_parameter_noinfo()
{
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
}

// Address: 0x40A71D
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

  v1 = (_DWORD *)_decode_pointer(dword_430188);
  Block = v1;
  v2 = (_DWORD *)_decode_pointer(dword_430184);
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
        dword_430184 = _encode_pointer(v3 + 1);
        return a1;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = _realloc_crt(Block, v7)) != 0 || v5 + 16 >= v5 && (v8 = _realloc_crt(Block, v5 + 16)) != 0 )
      {
        v3 = (_DWORD *)(v8 + 4 * (v4 >> 2));
        dword_430188 = _encode_pointer(v8);
        goto LABEL_11;
      }
    }
  }
  return 0;
}

// Address: 0x40A7D7
int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = (_DWORD *)_calloc_crt(0x20u, 4);
  dword_430188 = _encode_pointer(v0);
  dword_430184 = dword_430188;
  if ( v0 == nullptr )
    return 24;
  *v0 = 0;
  return 0;
}

// Address: 0x40A808
_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-1Ch]

  _lockexit();
  v2 = (int (__cdecl *)())_onexit_nolock((int)Func);
  _unlockexit(4237365);
  return v2;
}

// Address: 0x40A844
int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}

// Address: 0x40A85B
int __cdecl _wtol(const wchar_t *String)
{
  return wcstol(String, nullptr, 10);
}

// Address: 0x40A871
int __cdecl _wtoi(const wchar_t *String)
{
  return _wtol(String);
}

// Address: 0x40A87C
int __cdecl atol(const char *String)
{
  return strtol(String, nullptr, 10);
}

// Address: 0x40A892
int __cdecl atoi(const char *String)
{
  return atol(String);
}

// Address: 0x40A89D
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

// Address: 0x40A8C9
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

// Address: 0x40A946
void __noreturn _purecall()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer(dword_42F8F4);
  if ( v0 != nullptr )
    v0();
  _NMSG_WRITE(25);
  _set_abort_behavior(0, 1u);
  abort();
}

// Address: 0x40A970
int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [esp+14h] [ebp+14h] BYREF

  va_start(ArgList, Format);
  return _vswprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x40A98E
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

// Address: 0x40A9FD
int sprintf(char *const Buffer, const char *const Format, ...)
{
  int v3; // eax
  bool v4; // sf
  int v5; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, Format);
  if ( Format != nullptr && Buffer != nullptr )
  {
    File._base = Buffer;
    File._ptr = Buffer;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v3 = _output_l(&File, (int)Format, nullptr, (int)va);
    v4 = --File._cnt < 0;
    v5 = v3;
    if ( v4 )
      _flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v5;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x40AA7A
int __cdecl _vsnwprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int result; // eax
  int v6; // edi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  if ( Format != nullptr )
  {
    if ( BufferCount == 0 || Buffer != nullptr )
    {
      File._flag = 66;
      File._base = (char *)Buffer;
      File._ptr = (char *)Buffer;
      if ( BufferCount <= 0x3FFFFFFF )
        File._cnt = 2 * BufferCount;
      else
        File._cnt = 0x7FFFFFFF;
      result = _woutput_l((int)&File, (int)Format, (struct localeinfo_struct *)Locale, (int)ArgList);
      v6 = result;
      if ( Buffer != nullptr )
      {
        if ( --File._cnt < 0 )
          _flsbuf(0, &File);
        else
          *File._ptr++ = 0;
        if ( --File._cnt < 0 )
          _flsbuf(0, &File);
        else
          *File._ptr = 0;
        return v6;
      }
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return -1;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  return result;
}

// Address: 0x40AB4E
int __cdecl _vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return _vsnwprintf_l(Buffer, BufferCount, Format, nullptr, Args);
}

// Address: 0x40AB6B
int __cdecl fputc(int Character, FILE *Stream)
{
  int v3; // eax
  _BYTE *v4; // ecx
  char *v5; // eax
  int v7; // eax
  int v8; // [esp+10h] [ebp-1Ch]

  v8 = 0;
  if ( Stream != nullptr )
  {
    _lock_file(Stream);
    if ( (Stream->_flag & 0x40) == 0 )
    {
      v3 = _fileno(Stream);
      if ( v3 == -1 || v3 == -2 )
        v4 = &unk_42C630;
      else
        v4 = (_BYTE *)(dword_430080[v3 >> 5] + ((v3 & 0x1F) << 6));
      if ( (v4[36] & 0x7F) != 0
        || (v3 == -1 || v3 == -2
          ? (v5 = (char *)&unk_42C630)
          : (v5 = (char *)(dword_430080[v3 >> 5] + ((v3 & 0x1F) << 6))),
            v5[36] < 0) )
      {
        *_errno() = 22;
        _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
        v8 = -1;
      }
    }
    if ( v8 == 0 )
    {
      if ( --Stream->_cnt < 0 )
      {
        v7 = _flsbuf(Character, Stream);
      }
      else
      {
        *Stream->_ptr = Character;
        v7 = (unsigned __int8)Character;
        ++Stream->_ptr;
      }
      v8 = v7;
    }
    _unlock_file(Stream);
    return v8;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x40AC77
void __cdecl free(void *Block)
{
  int v1; // eax
  int *v2; // esi
  DWORD LastError; // eax
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_43005C != 3 )
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

// Address: 0x40AD05
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
      v3 = &unk_42C630;
    else
      v3 = (_BYTE *)(dword_430080[v2 >> 5] + ((v2 & 0x1F) << 6));
    if ( (v3[36] & 0x7F) != 0
      || (v2 == -1 || v2 == -2
        ? (v4 = (char *)&unk_42C630)
        : (v4 = (char *)(dword_430080[v2 >> 5] + ((v2 & 0x1F) << 6))),
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

// Address: 0x40ADF6
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

// Address: 0x40AE68
int __cdecl fgetpos(FILE *Stream, fpos_t *Position)
{
  int result; // eax
  fpos_t v3; // rax
  int v4; // ecx

  if ( Stream != nullptr )
  {
    if ( Position != nullptr )
    {
      v3 = _ftelli64(Stream);
      *Position = v3;
      v4 = HIDWORD(v3) & v3;
      result = -1;
      if ( v4 != -1 )
        return 0;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return -1;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  return result;
}

// Address: 0x40AED6
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

// Address: 0x40AF3E
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

// Address: 0x40AF86
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
  for ( i = 0; i < dword_4311A0; ++i )
  {
    v2 = (int *)((char *)dword_43019C + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 )
      {
        _lock_file2(i, v3);
        v4 = *(_DWORD *)(*((_DWORD *)dword_43019C + i) + 12);
        if ( (v4 & 0x83) != 0 )
        {
          if ( a1 == 1 )
          {
            if ( _fflush_nolock(*((FILE **)dword_43019C + i)) != -1 )
              ++v7;
          }
          else if ( a1 == 0 && (v4 & 2) != 0 && _fflush_nolock(*((FILE **)dword_43019C + i)) == -1 )
          {
            v6 = -1;
          }
        }
        _unlock_file2(i, *((_DWORD *)dword_43019C + i));
      }
    }
  }
  _unlock(1);
  result = v7;
  if ( a1 != 1 )
    return v6;
  return result;
}

// Address: 0x40B060
int __cdecl fflush(FILE *Stream)
{
  int v2; // [esp+10h] [ebp-1Ch]

  if ( Stream == nullptr )
    return flsall(0);
  _lock_file(Stream);
  v2 = _fflush_nolock(Stream);
  _unlock_file(Stream);
  return v2;
}

// Address: 0x40B0B3
int sub_40B0B3()
{
  return flsall(1);
}

// Address: 0x40B0BC
int __cdecl fgetc(FILE *Stream)
{
  int v2; // eax
  _BYTE *v3; // ecx
  char *v4; // eax
  int v6; // eax
  int v7; // [esp+10h] [ebp-1Ch]

  v7 = 0;
  if ( Stream != nullptr )
  {
    _lock_file(Stream);
    if ( (Stream->_flag & 0x40) == 0 )
    {
      v2 = _fileno(Stream);
      if ( v2 == -1 || v2 == -2 )
        v3 = &unk_42C630;
      else
        v3 = (_BYTE *)(dword_430080[v2 >> 5] + ((v2 & 0x1F) << 6));
      if ( (v3[36] & 0x7F) != 0
        || (v2 == -1 || v2 == -2
          ? (v4 = (char *)&unk_42C630)
          : (v4 = (char *)(dword_430080[v2 >> 5] + ((v2 & 0x1F) << 6))),
            v4[36] < 0) )
      {
        *_errno() = 22;
        _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
        v7 = -1;
      }
    }
    if ( v7 == 0 )
    {
      if ( --Stream->_cnt < 0 )
        v6 = _filbuf(Stream);
      else
        v6 = *(unsigned __int8 *)Stream->_ptr++;
      v7 = v6;
    }
    _unlock_file(Stream);
    return v7;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x40B1C0
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
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  if ( a3 != 0 && a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
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

// Address: 0x40B28C
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

// Address: 0x40B314
int __cdecl vsprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return _vsprintf_s_l(Buffer, BufferCount, Format, nullptr, ArgList);
}

// Address: 0x40B331
int __cdecl fsetpos(FILE *Stream, const fpos_t *Position)
{
  if ( Stream != nullptr && Position != nullptr )
    return _fseeki64(Stream, *Position, 0);
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x40B376
int __cdecl setvbuf(FILE *Stream, char *Buffer, int Mode, size_t Size)
{
  size_t v5; // edi
  unsigned int v6; // edi
  int flag; // ecx
  int v8; // ecx
  char *p_charbuf; // eax
  int v10; // [esp+10h] [ebp-1Ch]

  v10 = 0;
  if ( Stream == nullptr )
    goto LABEL_2;
  if ( Mode != 4 )
  {
    if ( Mode == 0 )
      goto LABEL_7;
    if ( Mode != 64 )
    {
LABEL_2:
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return -1;
    }
  }
  if ( Mode != 64 )
  {
    v5 = Size;
    goto LABEL_10;
  }
LABEL_7:
  v5 = Size;
  if ( Size - 2 > 0x7FFFFFFD )
    goto LABEL_2;
LABEL_10:
  v6 = v5 & 0xFFFFFFFE;
  _lock_file(Stream);
  _flush(Stream);
  _freebuf(Stream);
  Stream->_flag &= 0xFFFFC2F3;
  flag = Stream->_flag;
  if ( (Mode & 4) != 0 )
  {
    v8 = flag | 4;
    p_charbuf = (char *)&Stream->_charbuf;
    v6 = 2;
LABEL_17:
    Stream->_flag = v8;
    goto LABEL_18;
  }
  p_charbuf = Buffer;
  if ( Buffer != nullptr )
  {
    v8 = flag | 0x500;
    goto LABEL_17;
  }
  p_charbuf = (char *)_malloc_crt(v6);
  if ( p_charbuf != nullptr )
  {
    Stream->_flag |= 0x408u;
LABEL_18:
    Stream->_bufsiz = v6;
    Stream->_base = p_charbuf;
    Stream->_ptr = p_charbuf;
    Stream->_cnt = 0;
    goto $done$25030;
  }
  ++dword_42F250;
  v10 = -1;
$done$25030:
  _unlock_file(Stream);
  return v10;
}

// Address: 0x40B474
void __cdecl operator delete[](void *a1)
{
  operator delete(a1);
}

// Address: 0x40B47F
size_t __cdecl _fwrite_nolock(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v5; // edi
  size_t v6; // ebx
  int cnt; // eax
  size_t v8; // edi
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  size_t v13; // eax
  int bufsiz; // [esp+10h] [ebp-8h]
  char *Src; // [esp+14h] [ebp-4h]

  if ( ElementSize == 0 || ElementCount == 0 )
    return 0;
  if ( Stream == nullptr || Buffer == nullptr || ElementCount > 0xFFFFFFFF / ElementSize )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
  v5 = ElementCount * ElementSize;
  Src = (char *)Buffer;
  v6 = ElementCount * ElementSize;
  if ( (Stream->_flag & 0x10C) != 0 )
    bufsiz = Stream->_bufsiz;
  else
    bufsiz = 4096;
  if ( v5 == 0 )
    return ElementCount;
  while ( 1 )
  {
    if ( (Stream->_flag & 0x108) != 0 )
    {
      cnt = Stream->_cnt;
      if ( cnt != 0 )
      {
        if ( cnt < 0 )
        {
          Stream->_flag |= 0x20u;
LABEL_34:
          v13 = v5;
          return (v13 - v6) / ElementSize;
        }
        v8 = v6;
        if ( v6 >= cnt )
          v8 = Stream->_cnt;
        memcpy(Stream->_ptr, Src, v8);
        Stream->_cnt -= v8;
        Stream->_ptr += v8;
        v6 -= v8;
        Src += v8;
        goto LABEL_27;
      }
    }
    if ( v6 >= bufsiz )
      break;
    if ( _flsbuf(*Src, Stream) == -1 )
      goto LABEL_34;
    ++Src;
    --v6;
    bufsiz = Stream->_bufsiz;
    if ( bufsiz <= 0 )
      bufsiz = 1;
LABEL_31:
    if ( v6 == 0 )
      return ElementCount;
  }
  if ( (Stream->_flag & 0x108) != 0 && _flush(Stream) != 0 )
    goto LABEL_34;
  v9 = v6;
  if ( bufsiz != 0 )
    v9 = v6 - v6 % bufsiz;
  v10 = _fileno(Stream);
  v11 = _write(v10, Src, v9);
  if ( v11 != -1 )
  {
    v12 = v9;
    if ( v11 <= v9 )
      v12 = v11;
    Src += v12;
    v6 -= v12;
    if ( v11 >= v9 )
    {
LABEL_27:
      v5 = ElementCount * ElementSize;
      goto LABEL_31;
    }
  }
  Stream->_flag |= 0x20u;
  v13 = ElementCount * ElementSize;
  return (v13 - v6) / ElementSize;
}

// Address: 0x40B5E1
size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v5; // [esp+10h] [ebp-1Ch]

  if ( ElementSize == 0 || ElementCount == 0 )
    return 0;
  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
  _lock_file(Stream);
  v5 = _fwrite_nolock(Buffer, ElementSize, ElementCount, Stream);
  _unlock_file(Stream);
  return v5;
}

// Address: 0x40B663
errno_t __cdecl _localtime64_s(struct tm *Tm, const __time64_t *Time)
{
  errno_t result; // eax
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v5; // kr00_8
  __int64 v6; // kr10_8
  __int64 v7; // kr20_8
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  __time64_t v11; // [esp+8h] [ebp-14h] BYREF
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h] BYREF
  int v14; // [esp+18h] [ebp-4h] BYREF

  v13 = 0;
  v12 = 0;
  v14 = 0;
  if ( Tm == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  memset(Tm, 255, sizeof(struct tm));
  if ( Time == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  v3 = *((_DWORD *)Time + 1);
  v4 = *(_DWORD *)Time;
  if ( v3 < 0 || __SPAIR64__(v3, v4) > 0x793406FFFLL )
  {
    *_errno() = 22;
    return 22;
  }
  __tzset(v4);
  if ( sub_416346(&v13) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( sub_41637F(&v12) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( sub_4163B8(&v14) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( *Time > 259200 )
  {
    v11 = *Time - v14;
    result = _gmtime64_s(Tm, &v11);
    if ( result != 0 )
      return result;
    if ( v13 != 0 && _isindst(Tm) != 0 )
    {
      v11 -= v12;
      result = _gmtime64_s(Tm, &v11);
      if ( result != 0 )
        return result;
      Tm->tm_isdst = 1;
    }
    return 0;
  }
  result = _gmtime64_s(Tm, Time);
  if ( result != 0 )
    return result;
  if ( v13 != 0 && _isindst(Tm) != 0 )
  {
    v5 = Tm->tm_sec - (__int64)(v12 + v14);
    Tm->tm_isdst = 1;
  }
  else
  {
    v5 = Tm->tm_sec - (__int64)v14;
  }
  Tm->tm_sec = v5 % 60;
  if ( v5 % 60 < 0 )
  {
    Tm->tm_sec = v5 % 60 + 60;
    v5 = __PAIR64__((unsigned int)__CFADD__((_DWORD)v5, -60) + HIDWORD(v5) - 1, (int)v5 - 60);
  }
  v6 = Tm->tm_min + v5 / 60;
  Tm->tm_min = v6 % 60;
  if ( v6 % 60 < 0 )
  {
    Tm->tm_min = v6 % 60 + 60;
    v6 -= 60;
  }
  v7 = Tm->tm_hour + v6 / 60;
  Tm->tm_hour = v7 % 24;
  if ( v7 % 24 < 0 )
  {
    Tm->tm_hour = v7 % 24 + 24;
    v7 -= 24;
  }
  v8 = v7 / 24;
  v9 = v7 / 24;
  if ( (((unsigned __int64)(v7 / 24) >> 32) & 0x80000000) != 0LL )
  {
    HIDWORD(v8) = ((int)v8 + Tm->tm_wday + 7) % 7;
    Tm->tm_mday += v8;
    LODWORD(v8) = Tm->tm_mday;
    Tm->tm_wday = HIDWORD(v8);
    if ( (int)v8 <= 0 )
    {
      Tm->tm_yday += v9 + 365;
      --Tm->tm_year;
      Tm->tm_mday = v8 + 31;
      Tm->tm_mon = 11;
      return 0;
    }
  }
  else
  {
    if ( v8 <= 0 )
      return 0;
    v10 = (v9 + Tm->tm_wday) % 7;
    Tm->tm_mday += v9;
    Tm->tm_wday = v10;
  }
  Tm->tm_yday += v9;
  return 0;
}

// Address: 0x40B91B
struct tm *__cdecl _localtime64(const __time64_t *Time)
{
  struct tm *result; // eax

  result = (struct tm *)__getgmtimebuf();
  if ( result != nullptr )
    return _localtime64_s(result, Time) == 0 ? result : nullptr;
  return result;
}

// Address: 0x40B942
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

// Address: 0x40B9B6
int __cdecl _fseek_nolock(FILE *Stream, int Offset, int Origin)
{
  int flag; // eax
  int v5; // eax
  int v6; // eax

  flag = Stream->_flag;
  if ( (flag & 0x83) != 0 )
  {
    Stream->_flag = flag & 0xFFFFFFEF;
    if ( Origin == 1 )
    {
      Offset += _ftell_nolock(Stream);
      Origin = 0;
    }
    _flush(Stream);
    v5 = Stream->_flag;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( (v5 & 1) != 0 && (v5 & 8) != 0 && (v5 & 0x400) == 0 )
        Stream->_bufsiz = 512;
    }
    else
    {
      Stream->_flag = v5 & 0xFFFFFFFC;
    }
    v6 = _fileno(Stream);
    return (_lseek(v6, Offset, Origin) != -1) - 1;
  }
  else
  {
    *_errno() = 22;
    return -1;
  }
}

// Address: 0x40BA40
int __cdecl fseek(FILE *Stream, int Offset, int Origin)
{
  int v4; // [esp+10h] [ebp-1Ch]

  if ( Stream != nullptr && (unsigned int)Origin <= 2 )
  {
    _lock_file(Stream);
    v4 = _fseek_nolock(Stream, Offset, Origin);
    _unlock_file(Stream);
    return v4;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
}

// Address: 0x40BAC5
errno_t __cdecl _splitpath_s(
        const char *FullPath,
        char *Drive,
        size_t DriveCount,
        char *Dir,
        size_t DirCount,
        char *Filename,
        size_t FilenameCount,
        char *Ext,
        size_t ExtCount)
{
  const char *v9; // esi
  int i; // eax
  const char *v11; // esi
  const char *v12; // edi
  int v13; // eax
  size_t v14; // esi
  size_t v15; // esi
  int *v16; // eax
  int v18; // [esp+Ch] [ebp-8h]
  char *Source; // [esp+10h] [ebp-4h]

  v18 = 0;
  if ( FullPath == nullptr )
    goto $error_einval$29241;
  if ( Drive != nullptr )
  {
    if ( DriveCount == 0 )
      goto $error_einval$29241;
  }
  else if ( DriveCount != 0 )
  {
    goto $error_einval$29241;
  }
  if ( Dir != nullptr )
  {
    if ( DirCount == 0 )
      goto $error_einval$29241;
  }
  else if ( DirCount != 0 )
  {
    goto $error_einval$29241;
  }
  if ( Filename != nullptr )
  {
    if ( FilenameCount == 0 )
      goto $error_einval$29241;
  }
  else if ( FilenameCount != 0 )
  {
    goto $error_einval$29241;
  }
  if ( Ext != nullptr )
  {
    if ( ExtCount != 0 )
      goto LABEL_16;
$error_einval$29241:
    v18 = 1;
    goto $error_erange$29271;
  }
  if ( ExtCount != 0 )
    goto $error_einval$29241;
LABEL_16:
  v9 = FullPath;
  for ( i = 1; i != 0; --i )
  {
    if ( *v9 == 0 )
      break;
    ++v9;
  }
  if ( *v9 == 58 )
  {
    if ( Drive != nullptr )
    {
      if ( DriveCount < 3 )
        goto $error_erange$29271;
      strncpy_s(Drive, DriveCount, FullPath, 2u);
    }
    FullPath = v9 + 1;
  }
  else if ( Drive != nullptr )
  {
    *Drive = 0;
  }
  v11 = FullPath;
  v12 = nullptr;
  Source = nullptr;
  if ( *FullPath == 0 )
    goto LABEL_42;
  do
  {
    if ( _ismbblead(*v11) != 0 )
    {
      ++v11;
    }
    else
    {
      v13 = *(unsigned __int8 *)v11;
      if ( *v11 == 47 || (_BYTE)v13 == 92 )
      {
        v12 = v11 + 1;
      }
      else if ( (_BYTE)v13 == 46 )
      {
        Source = (char *)v11;
      }
    }
    ++v11;
  }
  while ( *v11 != 0 );
  if ( v12 != nullptr )
  {
    if ( Dir != nullptr )
    {
      if ( DirCount <= v12 - FullPath )
        goto $error_erange$29271;
      strncpy_s(Dir, DirCount, FullPath, v12 - FullPath);
    }
    FullPath = v12;
  }
  else
  {
LABEL_42:
    if ( Dir != nullptr )
      *Dir = 0;
  }
  if ( Source == nullptr || Source < FullPath )
  {
    if ( Filename != nullptr )
    {
      v15 = v11 - FullPath;
      if ( FilenameCount <= v15 )
        goto $error_erange$29271;
      strncpy_s(Filename, FilenameCount, FullPath, v15);
    }
    if ( Ext != nullptr )
      *Ext = 0;
    return 0;
  }
  if ( Filename != nullptr )
  {
    if ( FilenameCount <= Source - FullPath )
      goto $error_erange$29271;
    strncpy_s(Filename, FilenameCount, FullPath, Source - FullPath);
  }
  if ( Ext == nullptr )
    return 0;
  v14 = v11 - Source;
  if ( ExtCount > v14 )
  {
    strncpy_s(Ext, ExtCount, Source, v14);
    return 0;
  }
$error_erange$29271:
  if ( Drive != nullptr && DriveCount != 0 )
    *Drive = 0;
  if ( Dir != nullptr && DirCount != 0 )
    *Dir = 0;
  if ( Filename != nullptr && FilenameCount != 0 )
    *Filename = 0;
  if ( Ext != nullptr && ExtCount != 0 )
    *Ext = 0;
  v16 = _errno();
  if ( FullPath == nullptr || v18 != 0 )
  {
    *v16 = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  else
  {
    *v16 = 34;
    return 34;
  }
}

// Address: 0x40BCC4
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

// Address: 0x40BD3B
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

// Address: 0x40BDB7
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

// Address: 0x40BE08
int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  if ( MaxCount == 0 )
    return 0;
  while ( --MaxCount != 0 && *String1 != 0 && *String1 == *String2 )
  {
    ++String1;
    ++String2;
  }
  return *String1 - *String2;
}

// Address: 0x40BE3F
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
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
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

// Address: 0x40BF12
void __cdecl __noreturn fast_error_exit(int a1)
{
  if ( dword_42F24C != 2 )
    _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  __crtExitProcess(0xFFu);
}

// Address: 0x40BF3B
int __tmainCRTStartup()
{
  int v0; // eax
  int v1; // eax
  int v3; // [esp+14h] [ebp-20h]
  BOOL v4; // [esp+18h] [ebp-1Ch]

  v4 = MEMORY[0x400000] == 23117
    && *(_DWORD *)(MEMORY[0x40003C] + 0x400000) == 17744
    && *(_WORD *)(MEMORY[0x40003C] + 4194328) == 267
    && *(_DWORD *)(MEMORY[0x40003C] + 4194420) > 0xEu
    && *(_DWORD *)(MEMORY[0x40003C] + 4194536) != 0;
  if ( _heap_init(1) == 0 )
    fast_error_exit(28);
  if ( _mtinit() == 0 )
    fast_error_exit(16);
  sub_417074();
  if ( _ioinit() < 0 )
    _amsg_exit(27);
  dword_4311A4 = (int)GetCommandLineW();
  String = (wchar_t *)__crtGetEnvironmentStringsW();
  if ( _wsetargv() < 0 )
    _amsg_exit(8);
  if ( _wsetenvp() < 0 )
    _amsg_exit(9);
  v0 = _cinit(1);
  if ( v0 != 0 )
    _amsg_exit(v0);
  dword_42F5BC = (int)dword_42F5B8;
  v1 = wmain();
  v3 = v1;
  if ( !v4 )
    exit(v1);
  _cexit();
  return v3;
}

// Address: 0x40C08C
int start()
{
  __security_init_cookie();
  return __tmainCRTStartup();
}

// Address: 0x40C0A0
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

// Address: 0x40C12B
void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, unk_421530, sizeof(dwExceptionCode));
  dwExceptionCode[6] = (DWORD)pExceptionObject;
  dwExceptionCode[7] = (DWORD)pThrowInfo;
  if ( pThrowInfo != nullptr && (pThrowInfo->attributes & 8) != 0 )
    dwExceptionCode[5] = 26820608;
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], &dwExceptionCode[5]);
}

// Address: 0x40C177
void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}

// Address: 0x40C1A9
// ?_CallMemberFunction0@@YGXPAX0@Z
// doubtful name
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_40C1A9(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}

// Address: 0x40C1B0
void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &_ReturnPoint_27112, ExceptionRecord, nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}

// Address: 0x40C204
int __usercall __CxxFrameHandler3@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        struct EHExceptionRecord *a2,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(a2, a3, a4, a5, a1, 0, nullptr, 0);
}

// Address: 0x40C23A
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

// Address: 0x40C26D
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

// Address: 0x40C344
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

// Address: 0x40C3E3
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

// Address: 0x40C458
_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 152);
  *(_DWORD *)(_getptd() + 152) = a1;
  return a1;
}

// Address: 0x40C484
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

// Address: 0x40C4AB
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

// Address: 0x40C4FD
void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a3, a1, a5);
}

// Address: 0x40C55D
_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x40C590
_DWORD *__usercall _EH_prolog3_catch@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}

// Address: 0x40C5C6
// positive sp value has been detected, the output may be wrong!
void _EH_epilog3()
{
  __asm { retn }
}

// Address: 0x40C5E0
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
  if ( (_BYTE)Val == 0 && Size >= 0x100 && dword_430040 != 0 )
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

// Address: 0x40C65A
_UNKNOWN **sub_40C65A()
{
  return &off_42C120;
}

// Address: 0x40C660
int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_4311A0;
  if ( dword_4311A0 == 0 )
  {
    v0 = 512;
LABEL_5:
    dword_4311A0 = v0;
    goto LABEL_6;
  }
  if ( dword_4311A0 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)_calloc_crt(v0, 4);
  dword_43019C = v1;
  if ( v1 == nullptr )
  {
    dword_4311A0 = 20;
    v1 = (char *)_calloc_crt(0x14u, 4);
    dword_43019C = v1;
    if ( v1 == nullptr )
      return 26;
  }
  v3 = 0;
  v4 = &off_42C120;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&dword_42C3A0 )
      break;
    v1 = (char *)dword_43019C;
  }
  v5 = 0;
  v6 = &unk_42C130;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_430080[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || v7 == 0 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_42C190 );
  return 0;
}

// Address: 0x40C711
void __endstdio()
{
  sub_40B0B3();
  if ( byte_42F5C8 != 0 )
    _fcloseall();
  free(dword_43019C);
}

// Address: 0x40C731
void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_42C120 || Stream > &stru_42C380 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    _lock((((char *)Stream - (char *)&off_42C120) >> 5) + 16);
    Stream->_flag |= 0x8000u;
  }
}

// Address: 0x40C772
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

// Address: 0x40C7A4
void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_42C120 || Stream > &stru_42C380 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&Stream[1]);
  }
  else
  {
    Stream->_flag &= ~0x8000u;
    _unlock((((char *)Stream - (char *)&off_42C120) >> 5) + 16);
  }
}

// Address: 0x40C7E0
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

// Address: 0x40C80F
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

  if ( (dword_42C3A0 & 1) != 0 )
    _NMSG_WRITE(10);
  v1 = sub_4174D5();
  if ( v1 != 0 )
  {
    v1 = raise(22);
    v3 = v5;
  }
  if ( (dword_42C3A0 & 2) != 0 )
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

// Address: 0x40C926
unsigned int __cdecl _set_abort_behavior(unsigned int Flags, unsigned int Mask)
{
  unsigned int result; // eax

  result = dword_42C3A0;
  dword_42C3A0 = Mask & Flags | dword_42C3A0 & ~Mask;
  return result;
}

// Address: 0x40C947
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
  if ( v2 != nullptr && v2 != &off_42CA10 )
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
  if ( (_UNKNOWN **)v7 != &off_42C950 && *(_DWORD *)(v7 + 180) == 0 )
  {
    __free_lc_time(*((_DWORD *)Block + 53));
    free(*((void **)Block + 53));
  }
  v8 = (void **)(Block + 80);
  for ( Blocka = 6; Blocka != 0; --Blocka )
  {
    if ( *(v8 - 2) != Str2 && *v8 != nullptr && *(_DWORD *)*v8 == 0 )
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

// Address: 0x40CA90
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
    if ( *(v2 - 2) != (volatile LONG *)Str2 && *v2 != nullptr )
      InterlockedIncrement(*v2);
    if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
      InterlockedIncrement(v2[1]);
    v2 += 4;
  }
  return InterlockedIncrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
}

// Address: 0x40CB1F
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
      if ( *(v2 - 2) != (volatile LONG *)Str2 && *v2 != nullptr )
        InterlockedDecrement(*v2);
      if ( *(v2 - 1) != nullptr && v2[1] != nullptr )
        InterlockedDecrement(v2[1]);
      v2 += 4;
    }
    InterlockedDecrement((volatile LONG *)(*((_DWORD *)lpAddend + 53) + 180));
  }
  return lpAddend;
}

// Address: 0x40CBB8
_DWORD *__usercall _copytlocinfo_nolock@<eax>(_DWORD *result@<eax>, _DWORD *a2@<ecx>)
{
  if ( a2 != nullptr && result != nullptr && result != a2 )
  {
    qmemcpy(result, a2, 0xD8u);
    *result = 0;
    return (_DWORD *)__addlocaleref(result);
  }
  return result;
}

// Address: 0x40CBDE
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
      if ( *v2 == 0 && v2 != (volatile LONG *)&unk_42C868 )
        __freetlocinfo((char *)v2);
    }
  }
  return a2;
}

// Address: 0x40CC1C
volatile LONG *__updatetlocinfo()
{
  int v0; // esi
  volatile LONG *v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_42CA44 & *(_DWORD *)(v0 + 112)) != 0 && *(_DWORD *)(v0 + 108) != 0 )
  {
    v1 = *(volatile LONG **)(_getptd() + 108);
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)(v0 + 108), (volatile LONG *)off_42C940);
    _unlock(12);
    v1 = v3;
  }
  if ( v1 == nullptr )
    _amsg_exit(32);
  return v1;
}

// Address: 0x40CC92
int sync_legacy_variables_lk()
{
  int result; // eax

  dword_42FD4C = *((_DWORD *)off_42C940 + 1);
  dword_42FD50 = *((_DWORD *)off_42C940 + 2);
  dword_42C944 = *((_DWORD *)off_42C940 + 42);
  off_42CA08 = *((_UNKNOWN ***)off_42C940 + 53);
  off_42CA40 = *((_UNKNOWN ***)off_42C940 + 47);
  off_42C3D4 = *((wchar_t **)off_42C940 + 50);
  result = *((_DWORD *)off_42C940 + 43);
  dword_42CA48 = result;
  return result;
}

// Address: 0x40CCE5
int sub_40CCE5()
{
  return 0;
}

// Address: 0x40CCE8
void __cdecl _strcats(char *Destination, rsize_t SizeInBytes, int a3)
{
  int v3; // edi
  const char **v4; // esi

  v3 = a3;
  if ( a3 > 0 )
  {
    v4 = (const char **)&a3;
    do
    {
      if ( strcat_s(Destination, SizeInBytes, *++v4) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      --v3;
    }
    while ( v3 != 0 );
  }
}

// Address: 0x40CD28
int __cdecl __lc_strtolc(char *a1, char *Source)
{
  const char *v2; // esi
  size_t v4; // eax
  bool i; // zf
  const char *v6; // edi
  char v7; // bl
  errno_t v8; // eax
  char *v9; // eax
  rsize_t v10; // [esp-Ch] [ebp-18h]
  const char *v12; // [esp-8h] [ebp-14h]
  rsize_t v13; // [esp-4h] [ebp-10h]
  char *Sourcea; // [esp+18h] [ebp+Ch]

  memset(a1, 0, 0x90u);
  v2 = Source;
  if ( *Source == 0 )
    return 0;
  if ( *Source == 46 && Source[1] != 0 )
  {
    if ( strncpy_s(a1 + 128, 0x10u, Source + 1, 0xFu) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    a1[143] = 0;
    return 0;
  }
  Sourcea = nullptr;
  v4 = strcspn(Source, "_.,");
  for ( i = v4 == 0; !i; i = v4 == 0 )
  {
    v6 = &v2[v4];
    v7 = v2[v4];
    if ( Sourcea != nullptr )
    {
      if ( Sourcea == (char *)1 )
      {
        if ( v4 >= 0x40 || v7 == 95 )
          return -1;
        v13 = v4;
        v12 = v2;
        v10 = 64;
        v9 = a1 + 64;
      }
      else
      {
        if ( Sourcea != (char *)2 || v4 >= 0x10 || v7 != 0 && v7 != 44 )
          return -1;
        v13 = v4;
        v12 = v2;
        v10 = 16;
        v9 = a1 + 128;
      }
      v8 = strncpy_s(v9, v10, v12, v13);
    }
    else
    {
      if ( v4 >= 0x40 || v7 == 46 )
        return -1;
      v8 = strncpy_s(a1, 0x40u, v2, v4);
    }
    if ( v8 != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( v7 == 44 || v7 == 0 )
      return 0;
    ++Sourcea;
    v2 = v6 + 1;
    v4 = strcspn(v6 + 1, "_.,");
  }
  return -1;
}

// Address: 0x40CE51
void __cdecl __lc_lctostr(char *Destination, rsize_t SizeInBytes, char *Source)
{
  if ( strcpy_s(Destination, SizeInBytes, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( Source[64] != 0 )
    _strcats(Destination, SizeInBytes, 2);
  if ( Source[128] != 0 )
    _strcats(Destination, SizeInBytes, 2);
}

// Address: 0x40CEBE
int __usercall _setlocale_get_all@<eax>(int a1@<esi>)
{
  int result; // eax
  char *v2; // edi
  int v3; // ebx
  void *Block; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h]
  const char **v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  char **v8; // [esp+14h] [ebp-4h]

  v5 = 1;
  result = _malloc_crt(0x355u);
  Block = (void *)result;
  if ( result != 0 )
  {
    v2 = (char *)(result + 4);
    *(_BYTE *)(result + 4) = 0;
    *(_DWORD *)result = 1;
    v7 = 1;
    v3 = a1 + 16;
    v6 = (const char **)(a1 + 88);
    _strcats((char *)(result + 4), 0x351u, 3);
    v8 = off_42159C;
    do
    {
      if ( strcat_s(v2, 0x351u, ";") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcmp(*v6, *(const char **)(v3 + 88)) != 0 )
        v5 = 0;
      ++v7;
      v8 += 3;
      v3 = 16 * v7 + a1;
      v6 = (const char **)(v3 + 72);
      _strcats(v2, 0x351u, 3);
    }
    while ( (int)v8 < (int)off_4215CC );
    if ( v5 != 0 )
    {
      free(Block);
      if ( *(_DWORD *)(a1 + 80) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 80)) == 0 )
        free(*(void **)(a1 + 80));
      if ( *(_DWORD *)(a1 + 84) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 84)) == 0 )
        free(*(void **)(a1 + 84));
      result = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 72) = 0;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 80) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 80)) == 0 )
        free(*(void **)(a1 + 80));
      if ( *(_DWORD *)(a1 + 84) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 84)) == 0 )
        free(*(void **)(a1 + 84));
      *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 76) = 0;
      *(_DWORD *)(a1 + 80) = Block;
      *(_DWORD *)(a1 + 72) = v2;
      return (int)v2;
    }
  }
  return result;
}

// Address: 0x40D03B
char *__cdecl _expandlocale(char *Str, char *a2, rsize_t SizeInBytes, _WORD *a4, _DWORD *a5)
{
  const char *v5; // esi
  int v6; // eax
  unsigned __int16 *v7; // ebx
  size_t v9; // eax
  size_t v10; // [esp+10h] [ebp-B0h]
  _DWORD *Src; // [esp+14h] [ebp-ACh]
  char *Str1; // [esp+18h] [ebp-A8h]
  char *Source; // [esp+28h] [ebp-98h]
  CHAR LCData[144]; // [esp+2Ch] [ebp-94h] BYREF

  v5 = Str;
  v6 = _getptd() + 156;
  Src = (_DWORD *)(v6 + 40);
  v7 = (unsigned __int16 *)(v6 + 32);
  Str1 = (char *)(v6 + 44);
  Source = (char *)(v6 + 175);
  if ( Str == nullptr || a2 == nullptr || SizeInBytes == 0 )
    return nullptr;
  if ( *Str == 67 && Str[1] == 0 )
  {
    if ( strcpy_s(a2, SizeInBytes, "C") != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( a4 != nullptr )
    {
      *a4 = 0;
      a4[1] = 0;
      a4[2] = 0;
    }
    if ( a5 != nullptr )
      *a5 = 0;
    return a2;
  }
  v10 = strlen(Str);
  if ( v10 >= 0x83 || strcmp(Source, Str) != 0 && strcmp(Str1, Str) != 0 )
  {
    if ( __lc_strtolc(LCData, Str) == 0 && __get_qualified_locale((int)LCData, (int)v7, LCData) != 0 )
    {
      *Src = v7[2];
      __lc_lctostr(Source, 0x83u, LCData);
      if ( *Str == 0 || (v9 = v10, v10 >= 0x83) )
      {
        v9 = 0;
        v5 = (const char *)&unk_42146A;
      }
      if ( strncpy_s(Str1, 0x83u, v5, v9 + 1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      goto LABEL_23;
    }
    return nullptr;
  }
LABEL_23:
  if ( a4 != nullptr )
    memcpy(a4, v7, 6u);
  if ( a5 != nullptr )
    *a5 = *Src;
  if ( strcpy_s(a2, SizeInBytes, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return Source;
}

// Address: 0x40D26C
UINT __usercall _setlocale_set_cat@<eax>(char *Str@<ecx>, UINT *a2@<esi>, int a3)
{
  int v4; // edi
  UINT *v6; // ebx
  UINT *v7; // ecx
  int v8; // ecx
  int *v9; // eax
  int v10; // edx
  void *v11; // edx
  _DWORD *v12; // eax
  unsigned int i; // eax
  void **v14; // edi
  void *v15; // eax
  void *v16; // [esp-4h] [ebp-1D0h]
  _BYTE v17[6]; // [esp+8h] [ebp-1C4h] BYREF
  int v18; // [esp+10h] [ebp-1BCh]
  UINT v19; // [esp+18h] [ebp-1B4h]
  _WORD Src[4]; // [esp+1Ch] [ebp-1B0h] BYREF
  UINT v21; // [esp+24h] [ebp-1A8h]
  char *v22; // [esp+28h] [ebp-1A4h]
  void *v23; // [esp+30h] [ebp-19Ch]
  int v24; // [esp+34h] [ebp-198h] BYREF
  UINT *v25; // [esp+38h] [ebp-194h]
  void *Block; // [esp+3Ch] [ebp-190h]
  signed int v27; // [esp+40h] [ebp-18Ch]
  WORD Buf1[128]; // [esp+44h] [ebp-188h] BYREF
  char Stra[132]; // [esp+144h] [ebp-88h] BYREF

  v4 = _getptd() + 464;
  if ( _expandlocale(Str, Stra, 0x83u, Src, &v24) == nullptr )
    return 0;
  v6 = &a2[4 * a3];
  if ( strcmp(Stra, (const char *)v6[18]) != 0 )
  {
    v27 = strlen(Stra) + 5;
    Block = (void *)_malloc_crt(v27);
    if ( Block == nullptr )
      return 0;
    v22 = (char *)v6[18];
    v25 = &a2[a3 + 3];
    v21 = *v25;
    v23 = (char *)a2 + 6 * a3 + 36;
    memcpy(v17, v23, sizeof(v17));
    v19 = a2[1];
    if ( strcpy_s((char *)Block + 4, v27 - 4, Stra) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v7 = v25;
    v6[18] = (UINT)Block + 4;
    *v7 = Src[0];
    memcpy(v23, Src, 6u);
    if ( a3 == 2 )
    {
      v27 = 0;
      a2[1] = v24;
      v8 = *(_DWORD *)(v4 + 32);
      v23 = *(void **)(v4 + 36);
      v9 = (int *)v4;
      while ( a2[1] != *v9 )
      {
        v10 = *v9;
        ++v27;
        *v9 = v8;
        v18 = v10;
        v11 = (void *)v9[1];
        v9[1] = (int)v23;
        v8 = v18;
        v9 += 2;
        v23 = v11;
        if ( v27 >= 5 )
          goto LABEL_14;
      }
      if ( v27 != 0 )
      {
        v12 = (_DWORD *)(v4 + 8 * v27);
        *(_DWORD *)v4 = *v12;
        *(_DWORD *)(v4 + 4) = v12[1];
        *v12 = v8;
        v12[1] = v23;
      }
LABEL_14:
      if ( v27 == 5 )
      {
        if ( __crtGetStringTypeA(nullptr, 1u, &MultiByteStr, (char *)0x7F, Buf1, a2[1], a2[5], 1) != 0 )
        {
          for ( i = 0; i < 0x7F; ++i )
            Buf1[i] &= 0x1FFu;
          *(_DWORD *)(v4 + 4) = memcmp(Buf1, Buf2, 0xFEu) == 0;
        }
        else
        {
          *(_DWORD *)(v4 + 4) = 0;
        }
        *(_DWORD *)v4 = a2[1];
      }
      a2[42] = *(_DWORD *)(v4 + 4);
    }
    if ( a3 == 1 )
      a2[2] = v24;
    if ( (*(&off_421598 + 3 * a3))() != 0 )
    {
      v16 = Block;
      v6[18] = (UINT)v22;
      free(v16);
      *v25 = v21;
      a2[1] = v19;
      return 0;
    }
    if ( v22 != Str2 )
    {
      v14 = (void **)&a2[4 * a3 + 20];
      if ( InterlockedDecrement((volatile LONG *)*v14) == 0 )
      {
        free(*v14);
        free((void *)v6[21]);
        v6[19] = 0;
      }
    }
    v15 = Block;
    *(_DWORD *)Block = 1;
    a2[4 * a3 + 20] = (UINT)v15;
  }
  return v6[18];
}

// Address: 0x40D56E
char *__fastcall _setlocale_nolock(char *Str, UINT *a2, int a3)
{
  int v3; // ebx
  UINT *v4; // esi
  char *result; // eax
  const char *v6; // edi
  char *v7; // eax
  char *v8; // ebx
  size_t v9; // eax
  const char **v10; // esi
  const char *v11; // ebx
  size_t v12; // edi
  const char *v13; // edi
  const char **v14; // edi
  int v16; // [esp+10h] [ebp-94h]
  int v17; // [esp+14h] [ebp-90h]
  size_t v18; // [esp+14h] [ebp-90h]
  int v19; // [esp+18h] [ebp-8Ch]
  char Str1[132]; // [esp+1Ch] [ebp-88h] BYREF

  v3 = 0;
  v4 = a2;
  if ( a3 != 0 )
  {
    if ( Str != nullptr )
      return (char *)_setlocale_set_cat(Str, a2, a3);
    else
      return (char *)a2[4 * a3 + 18];
  }
  v17 = 1;
  v19 = 0;
  if ( Str == nullptr )
    return (char *)_setlocale_get_all((int)v4);
  if ( *Str == 76 && Str[1] == 67 && Str[2] == 95 )
  {
    v6 = Str;
    do
    {
      v7 = strpbrk(v6, "=;");
      v8 = v7;
      if ( v7 == nullptr )
        return nullptr;
      v9 = v7 - v6;
      v18 = v9;
      if ( v9 == 0 || *v8 == 59 )
        return nullptr;
      v16 = 1;
      v10 = (const char **)off_42159C;
      while ( strncmp(*v10, v6, v9) != 0 || v18 != strlen(*v10) )
      {
        ++v16;
        v10 += 3;
        if ( (int)v10 > (int)off_4215CC )
          break;
        v9 = v18;
      }
      v11 = v8 + 1;
      v12 = strcspn(v11, ";");
      if ( v12 == 0 && *v11 != 59 )
        return nullptr;
      if ( v16 <= 5 )
      {
        if ( strncpy_s(Str1, 0x83u, v11, v12) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        Str1[v12] = 0;
        if ( _setlocale_set_cat(Str1, a2, v16) != 0 )
          ++v19;
      }
      v13 = &v11[v12];
      if ( *v13 == 0 )
        break;
      v6 = v13 + 1;
    }
    while ( *v6 != 0 );
    result = nullptr;
    if ( v19 == 0 )
      return result;
    v4 = a2;
    return (char *)_setlocale_get_all((int)v4);
  }
  result = _expandlocale(Str, Str1, 0x83u, nullptr, nullptr);
  if ( result != nullptr )
  {
    v14 = (const char **)(v4 + 18);
    do
    {
      if ( v3 != 0 )
      {
        if ( strcmp(Str1, *v14) == 0 || _setlocale_set_cat(Str1, v4, v3) != 0 )
          ++v19;
        else
          v17 = 0;
      }
      ++v3;
      v14 += 4;
    }
    while ( v3 <= 5 );
    result = nullptr;
    if ( v17 != 0 || v19 != 0 )
      return (char *)_setlocale_get_all((int)v4);
  }
  return result;
}

// Address: 0x40D789
char *__cdecl setlocale(int Category, const char *Locale)
{
  int v3; // esi
  UINT *v4; // edi
  char *v5; // [esp+14h] [ebp-20h]

  v5 = nullptr;
  if ( (unsigned int)Category <= 5 )
  {
    v3 = _getptd();
    __updatetlocinfo();
    *(_DWORD *)(v3 + 112) |= 0x10u;
    v4 = (UINT *)_calloc_crt(0xD8u, 1);
    if ( v4 != nullptr )
    {
      _lock(12);
      _copytlocinfo_nolock(v4, *(_DWORD **)(v3 + 108));
      _unlock(12);
      v5 = _setlocale_nolock((char *)Locale, v4, Category);
      if ( v5 != nullptr )
      {
        if ( Locale != nullptr && strcmp(Locale, Str2) != 0 )
          dword_42F254 = 1;
        _lock(12);
        _updatetlocinfoEx_nolock((volatile LONG **)(v3 + 108), (volatile LONG *)v4);
        __removelocaleref((volatile LONG *)v4);
        if ( (*(_BYTE *)(v3 + 112) & 2) == 0 && (dword_42CA44 & 1) == 0 )
        {
          _updatetlocinfoEx_nolock((volatile LONG **)&off_42C940, *(volatile LONG **)(v3 + 108));
          memcpy(&unk_42FD34, (char *)off_42C940 + 12, 0x18u);
          sync_legacy_variables_lk();
        }
        _unlock(12);
      }
      else
      {
        __removelocaleref((volatile LONG *)v4);
        __freetlocinfo((char *)v4);
      }
    }
    *(_DWORD *)(v3 + 112) &= ~0x10u;
    return v5;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return nullptr;
  }
}

// Address: 0x40D8F9
std::exception *__thiscall sub_40D8F9(std::exception *this, char *a2)
{
  std::exception::exception(this, (const char **)&a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x40D917
void __thiscall sub_40D917(void *this)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_40A2B4(this);
}

// Address: 0x40D922
_DWORD *__thiscall sub_40D922(_DWORD *this, char a2)
{
  *this = &std::bad_exception::`vftable';
  sub_40A2B4(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

// Address: 0x40D949
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

// Address: 0x40D9A8
int __cdecl __FrameUnwindFilter(int **a1)
{
  int v1; // eax
  int v2; // eax

  v1 = **a1;
  if ( v1 == -532459699 )
  {
    if ( *(int *)(_getptd() + 144) > 0 )
    {
      v2 = _getptd();
      --*(_DWORD *)(v2 + 144);
    }
  }
  else if ( v1 == -529697949 )
  {
    *(_DWORD *)(_getptd() + 144) = 0;
    terminate();
  }
  return 0;
}

// Address: 0x40D9F1
_DWORD *__cdecl __FrameUnwindToState(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int *v7; // ecx
  _DWORD *result; // eax
  int v9; // [esp-4h] [ebp-34h]

  if ( *(int *)(a3 + 4) > 128 )
    v4 = *(_DWORD *)(a1 + 8);
  else
    v4 = *(char *)(a1 + 8);
  v5 = ((int (*)(void))_getptd)();
  ++*(_DWORD *)(v5 + 144);
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
  result = (_DWORD *)_getptd(4250270);
  if ( (int)result[36] > 0 )
  {
    result = (_DWORD *)(_getptd(v9) + 144);
    --*result;
  }
  if ( v4 != a4 )
    _inconsistency();
  *(_DWORD *)(a1 + 8) = v4;
  return result;
}

// Address: 0x40DB17
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
        sub_40C1A9(a1[6], v2);
    }
  }
}

// Address: 0x40DB6C
int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2;
  if ( (int)a2[1] >= 0 )
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]);
  return result;
}

// Address: 0x40DBA8
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

// Address: 0x40DC23
void __cdecl __noreturn CallUnexpected()
{
  if ( *(_DWORD *)(_getptd() + 148) != 0 )
    _inconsistency();
  unexpected();
}

// Address: 0x40DC6C
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
  int v12; // [esp+1Ch] [ebp-30h]
  int v13; // [esp+20h] [ebp-2Ch]
  _DWORD *v14; // [esp+24h] [ebp-28h]
  __ehstate_t state; // [esp+28h] [ebp-24h]
  void *v16; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v7 = v6;
  v16 = v6;
  v11 = 0;
  state = a2[-1].state;
  v14 = _CreateFrameInfo(&v10, (int)a1->params.pExceptionObject);
  v13 = *(_DWORD *)(_getptd() + 136);
  v12 = *(_DWORD *)(_getptd() + 140);
  *(_DWORD *)(_getptd() + 136) = a1;
  *(_DWORD *)(_getptd() + 140) = a3;
  ms_exc.registration.TryLevel = 1;
  v16 = _CallCatchBlock2(a2, a4, v7, (int)a5, a6);
  ms_exc.registration.TryLevel = -2;
  a2[-1].state = state;
  _FindAndUnlinkFrame((int)v14);
  *(_DWORD *)(_getptd() + 136) = v13;
  *(_DWORD *)(_getptd() + 140) = v12;
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

// Address: 0x40DE08
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
        if ( unknown_libname_9(*(_DWORD *)(a1 + 24)) != 0 && unknown_libname_9(v6) != 0 )
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
          if ( unknown_libname_9(v11) != 0 && unknown_libname_9(v6) != 0 )
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
          if ( unknown_libname_9(v11) != 0 && unknown_libname_9(v6) != 0 && unknown_libname_9(*(_DWORD *)(a4 + 24)) != 0 )
            return ((*(_BYTE *)a4 & 4) != 0) + 1;
        }
        else if ( unknown_libname_9(v11) != 0 && unknown_libname_9(v6) != 0 )
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

// Address: 0x40DF87
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
      return sub_40C1A9((int)v4, *(_DWORD *)(a4 + 24));
    }
  }
  else
  {
    __AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_40C1A9((int)v4, *(_DWORD *)(a4 + 24));
  }
  return result;
}

// Address: 0x40E019
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

// Address: 0x40E087
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
  int v8; // edi
  int v9; // esi
  TryBlockMapEntry *i; // edi
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // [esp+4h] [ebp-8h] BYREF
  unsigned int v14; // [esp+8h] [ebp-4h] BYREF

  if ( a1->ExceptionCode != -2147483645
    && (*(_DWORD *)(_getptd() + 128) == 0
     || *(_DWORD *)(v8 = _getptd() + 128) == _encoded_null()
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

// Address: 0x40E17B
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
      if ( *(_DWORD *)(_getptd() + 136) == 0 )
        return;
      v11 = *(struct EHExceptionRecord **)(_getptd() + 136);
      ExceptionRecord = v11;
      a3 = *(struct _CONTEXT **)(_getptd() + 140);
      if ( unknown_libname_9(v11) == 0 )
        _inconsistency();
      if ( v11->ExceptionCode == -529697949 && v11->NumberParameters == 3 )
      {
        v14 = v11->params.magicNumber;
        if ( (v14 == 429065504 || v14 == 429065505 || v14 == 429065506) && v11->params.pThrowInfo == nullptr )
          _inconsistency();
      }
      if ( *(_DWORD *)(_getptd() + 148) != 0 )
      {
        v15 = *(int **)(_getptd() + 148);
        v16 = 0;
        *(_DWORD *)(_getptd() + 148) = 0;
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
                sub_40D8F9((std::exception *)pExceptionObject, "bad exception");
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
      *(_DWORD *)(_getptd() + 136) = v11;
      *(_DWORD *)(_getptd() + 140) = a3;
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
  if ( *(_DWORD *)(_getptd() + 148) != 0 )
    _inconsistency();
}

// Address: 0x40E4C2
std::exception *__thiscall sub_40E4C2(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

// Address: 0x40E4DF
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

  if ( *(_DWORD *)(_getptd() + 524) != 0
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

// Address: 0x40E5C5
FILE *__cdecl _wfsopen(const wchar_t *FileName, const wchar_t *Mode, int ShFlag)
{
  int v5; // eax
  FILE *v6; // [esp+10h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h] BYREF
  FILE *Stream; // [esp+34h] [ebp+8h]

  if ( FileName == nullptr || Mode == nullptr || *Mode == 0 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return nullptr;
  }
  v5 = _getstream();
  Stream = (FILE *)v5;
  if ( v5 == 0 )
  {
    *_errno() = 24;
    return nullptr;
  }
  ms_exc.registration.TryLevel = 0;
  if ( *FileName == 0 )
  {
    *_errno() = 22;
    _local_unwind4(&__security_cookie, &ms_exc.registration, -2);
    return nullptr;
  }
  v6 = (FILE *)_wopenfile((char *)FileName, (int)Mode, ShFlag, v5);
  _unlock_file(Stream);
  return v6;
}

// Address: 0x40E68B
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
    if ( *(_UNKNOWN **)this != off_42C940 && (dword_42CA44 & v3[28]) == 0 )
      *(_DWORD *)this = __updatetlocinfo();
    if ( *((volatile LONG **)this + 1) != lpAddend && (dword_42CA44 & *(_DWORD *)(*((_DWORD *)this + 2) + 112)) == 0 )
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

// Address: 0x40E712
unsigned int __cdecl _mbstowcs_l_helper(
        LPWSTR lpWideCharStr,
        LPCCH lpMultiByteStr,
        unsigned int cchWideChar,
        struct localeinfo_struct *a4)
{
  LPWSTR v4; // esi
  unsigned int result; // eax
  unsigned int v6; // ecx
  const CHAR *v7; // eax
  int v8; // eax
  LPCCH v9; // esi
  unsigned __int8 v10; // al
  __crt_locale_pointers Locale; // [esp+8h] [ebp-14h] BYREF
  int v12; // [esp+10h] [ebp-Ch]
  char v13; // [esp+14h] [ebp-8h]
  unsigned int i; // [esp+18h] [ebp-4h]

  v4 = lpWideCharStr;
  i = 0;
  if ( lpWideCharStr != nullptr )
  {
    if ( cchWideChar == 0 )
      return 0;
    *lpWideCharStr = 0;
  }
  if ( lpMultiByteStr == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a4);
  if ( lpWideCharStr == nullptr )
  {
    if ( *((_DWORD *)Locale.locinfo + 5) == 0 )
    {
      result = strlen(lpMultiByteStr);
      goto LABEL_36;
    }
    v8 = MultiByteToWideChar(*((_DWORD *)Locale.locinfo + 1), 9u, lpMultiByteStr, -1, nullptr, 0);
    if ( v8 == 0 )
    {
      *_errno() = 42;
LABEL_32:
      if ( v13 != 0 )
        *(_DWORD *)(v12 + 112) &= ~2u;
      return -1;
    }
    goto LABEL_35;
  }
  if ( *((_DWORD *)Locale.locinfo + 5) != 0 )
  {
    v8 = MultiByteToWideChar(*((_DWORD *)Locale.locinfo + 1), 9u, lpMultiByteStr, -1, lpWideCharStr, cchWideChar);
    if ( v8 == 0 )
    {
      if ( GetLastError() != 122 )
        goto LABEL_20;
      v9 = lpMultiByteStr;
      for ( i = cchWideChar; i != 0; ++v9 )
      {
        v10 = *v9;
        --i;
        if ( v10 == 0 )
          break;
        if ( _isleadbyte_l(v10, &Locale) != 0 && *++v9 == 0 )
          goto LABEL_20;
      }
      result = MultiByteToWideChar(
                 *((_DWORD *)Locale.locinfo + 1),
                 1u,
                 lpMultiByteStr,
                 v9 - lpMultiByteStr,
                 lpWideCharStr,
                 cchWideChar);
      if ( result == 0 )
      {
LABEL_20:
        *_errno() = 42;
        *lpWideCharStr = 0;
        goto LABEL_32;
      }
LABEL_36:
      if ( v13 != 0 )
        *(_DWORD *)(v12 + 112) &= ~2u;
      return result;
    }
LABEL_35:
    result = v8 - 1;
    goto LABEL_36;
  }
  if ( cchWideChar != 0 )
  {
    while ( 1 )
    {
      v6 = i;
      v7 = &lpMultiByteStr[i];
      *v4 = (unsigned __int8)lpMultiByteStr[i];
      if ( *v7 == 0 )
        break;
      ++v4;
      i = v6 + 1;
      if ( v6 + 1 >= cchWideChar )
        goto LABEL_12;
    }
    if ( v13 != 0 )
      *(_DWORD *)(v12 + 112) &= ~2u;
    return v6;
  }
  else
  {
LABEL_12:
    if ( v13 != 0 )
      *(_DWORD *)(v12 + 112) &= ~2u;
    return i;
  }
}

// Address: 0x40E8B3
errno_t __cdecl _mbstowcs_s_l(
        size_t *PtNumOfCharConverted,
        wchar_t *DstBuf,
        size_t SizeInWords,
        const char *SrcBuf,
        size_t MaxCount,
        _locale_t Locale)
{
  errno_t result; // eax
  size_t v7; // eax
  int *v8; // eax
  unsigned int v9; // eax
  size_t v10; // eax
  errno_t v11; // esi
  int v12; // [esp-8h] [ebp-24h]
  _BYTE v13[8]; // [esp+8h] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-Ch]
  char v15; // [esp+14h] [ebp-8h]
  errno_t v16; // [esp+18h] [ebp-4h]

  v16 = 0;
  if ( DstBuf != nullptr )
  {
    if ( SizeInWords == 0 )
    {
LABEL_5:
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return 22;
    }
    *DstBuf = 0;
  }
  else if ( SizeInWords != 0 )
  {
    goto LABEL_5;
  }
  if ( PtNumOfCharConverted != nullptr )
    *PtNumOfCharConverted = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v13, (struct localeinfo_struct *)Locale);
  v7 = MaxCount;
  if ( MaxCount > SizeInWords )
    v7 = SizeInWords;
  if ( v7 > 0x7FFFFFFF )
  {
    v8 = _errno();
    v12 = 22;
LABEL_22:
    v11 = v12;
    *v8 = v12;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v15 != 0 )
      *(_DWORD *)(v14 + 112) &= ~2u;
    return v11;
  }
  v9 = _mbstowcs_l_helper(DstBuf, SrcBuf, v7, (struct localeinfo_struct *)v13);
  if ( v9 == -1 )
  {
    if ( DstBuf != nullptr )
      *DstBuf = 0;
    result = *_errno();
    if ( v15 != 0 )
      *(_DWORD *)(v14 + 112) &= ~2u;
  }
  else
  {
    v10 = v9 + 1;
    if ( DstBuf != nullptr )
    {
      if ( v10 > SizeInWords )
      {
        if ( MaxCount != -1 )
        {
          *DstBuf = 0;
          v8 = _errno();
          v12 = 34;
          goto LABEL_22;
        }
        v10 = SizeInWords;
        v16 = 80;
      }
      DstBuf[v10 - 1] = 0;
    }
    if ( PtNumOfCharConverted != nullptr )
      *PtNumOfCharConverted = v10;
    if ( v15 != 0 )
      *(_DWORD *)(v14 + 112) &= ~2u;
    return v16;
  }
  return result;
}

// Address: 0x40E9C3
errno_t __cdecl mbstowcs_s(
        size_t *PtNumOfCharConverted,
        wchar_t *DstBuf,
        size_t SizeInWords,
        const char *SrcBuf,
        size_t MaxCount)
{
  return _mbstowcs_s_l(PtNumOfCharConverted, DstBuf, SizeInWords, SrcBuf, MaxCount, nullptr);
}

// Address: 0x40E9E3
void __cdecl _freea(void *Memory)
{
  if ( Memory != nullptr && *((_DWORD *)Memory - 2) == 56797 )
    free((char *)Memory - 8);
}

// Address: 0x40EA03
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
  if ( dword_42F258 == 0 )
  {
    if ( LCMapStringW(0, 0x100u, &String1, 1, nullptr, 0) != 0 )
    {
      dword_42F258 = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_42F258 = 2;
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
  if ( dword_42F258 != 2 && dword_42F258 != 0 )
  {
    if ( dword_42F258 == 1 )
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

// Address: 0x40EDA8
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

// Address: 0x40EDED
const unsigned __int16 *__cdecl __pctype_func()
{
  int v0; // ecx
  volatile LONG *v1; // eax

  v0 = _getptd();
  v1 = *(volatile LONG **)(v0 + 108);
  if ( v1 != (volatile LONG *)off_42C940 && (dword_42CA44 & *(_DWORD *)(v0 + 112)) == 0 )
    v1 = __updatetlocinfo();
  return *((const unsigned __int16 **)v1 + 50);
}

// Address: 0x40EE16
int __cdecl _isupper_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale);
  if ( *((int *)v3.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)v3.locinfo + 50) + 2 * C) & 1;
  else
    result = _isctype_l(C, 1, &v3);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x40EE67
int __cdecl isupper(int C)
{
  if ( dword_42F254 != 0 )
    return _isupper_l(C, nullptr);
  else
    return off_42C930[C] & 1;
}

// Address: 0x40EE95
int __cdecl _islower_l(int C, _locale_t Locale)
{
  int result; // eax
  __crt_locale_pointers v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-8h]
  char v5; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, (struct localeinfo_struct *)Locale);
  if ( *((int *)v3.locinfo + 43) <= 1 )
    result = *(_WORD *)(*((_DWORD *)v3.locinfo + 50) + 2 * C) & 2;
  else
    result = _isctype_l(C, 2, &v3);
  if ( v5 != 0 )
    *(_DWORD *)(v4 + 112) &= ~2u;
  return result;
}

// Address: 0x40EEE6
int __cdecl islower(int C)
{
  if ( dword_42F254 != 0 )
    return _islower_l(C, nullptr);
  else
    return off_42C930[C] & 2;
}

// Address: 0x40EF14
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

// Address: 0x40EF65
int __cdecl isdigit(int C)
{
  if ( dword_42F254 != 0 )
    return _isdigit_l(C, nullptr);
  else
    return off_42C930[C] & 4;
}

// Address: 0x40EF93
int __cdecl __init_ctype(int a1)
{
  int v1; // ebx
  void *v2; // eax
  int i; // eax
  BYTE *v4; // eax
  int v5; // ecx
  int v6; // edi
  char *v7; // eax
  _BYTE *v8; // edi
  char *v9; // ecx
  bool v10; // cc
  _BYTE *v11; // edx
  BYTE *v12; // ecx
  BYTE v13; // dl
  unsigned int v14; // ecx
  char *j; // ecx
  void *v16; // eax
  UINT v18; // [esp-Ch] [ebp-64h]
  _DWORD v19[2]; // [esp+Ch] [ebp-4Ch] BYREF
  _BYTE *v20; // [esp+14h] [ebp-44h]
  char *v21; // [esp+18h] [ebp-40h]
  char *v22; // [esp+1Ch] [ebp-3Ch]
  char *v23; // [esp+20h] [ebp-38h]
  char *v24; // [esp+24h] [ebp-34h]
  int MaxCharSize_low; // [esp+28h] [ebp-30h]
  void *v26; // [esp+2Ch] [ebp-2Ch]
  void *v27; // [esp+30h] [ebp-28h]
  void *Block; // [esp+34h] [ebp-24h]
  void *v29; // [esp+38h] [ebp-20h]
  void *v30; // [esp+3Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+40h] [ebp-18h] BYREF

  v1 = 0;
  v26 = nullptr;
  v30 = nullptr;
  v29 = nullptr;
  v27 = nullptr;
  Block = nullptr;
  v19[0] = a1;
  v19[1] = 0;
  if ( *(_DWORD *)(a1 + 20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) == 0
      && __getlocaleinfo((struct localeinfo_struct *)v19, 0, *(unsigned __int16 *)(a1 + 48), 0x1004u, a1 + 4) != 0 )
    {
      goto $error_cleanup$28330;
    }
    v26 = (void *)_malloc_crt(4u);
    v30 = (void *)_calloc_crt(0x180u, 2);
    v29 = (void *)_calloc_crt(0x180u, 1);
    v27 = (void *)_calloc_crt(0x180u, 1);
    v2 = (void *)_calloc_crt(0x101u, 1);
    Block = v2;
    if ( v26 == nullptr )
      goto $error_cleanup$28330;
    if ( v30 == nullptr )
      goto $error_cleanup$28330;
    if ( v2 == nullptr )
      goto $error_cleanup$28330;
    if ( v29 == nullptr )
      goto $error_cleanup$28330;
    if ( v27 == nullptr )
      goto $error_cleanup$28330;
    *(_DWORD *)v26 = 0;
    for ( i = 0; i < 256; ++i )
      *((_BYTE *)Block + i) = i;
    if ( !GetCPInfo(*(_DWORD *)(a1 + 4), &CPInfo) || CPInfo.MaxCharSize > 5 )
      goto $error_cleanup$28330;
    MaxCharSize_low = LOWORD(CPInfo.MaxCharSize);
    if ( LOWORD(CPInfo.MaxCharSize) > 1u && CPInfo.LeadByte[0] != 0 )
    {
      v4 = &CPInfo.LeadByte[1];
      do
      {
        LOBYTE(v5) = *v4;
        if ( *v4 == 0 )
          break;
        v6 = *(v4 - 1);
        v5 = (unsigned __int8)v5;
        while ( v6 <= v5 )
        {
          *((_BYTE *)Block + v6) = 32;
          v5 = *v4;
          ++v6;
        }
        v4 += 2;
      }
      while ( *(v4 - 1) != 0 );
    }
    v18 = *(_DWORD *)(a1 + 4);
    v21 = (char *)v30 + 256;
    if ( __crtGetStringTypeA(nullptr, 1u, (LPCCH)Block, (char *)0x100, (LPWORD)v30 + 128, v18, 0, 0) != 0
      && __crtLCMapStringA(
           nullptr,
           *(_DWORD *)(a1 + 20),
           0x100u,
           (LPCCH)Block + 1,
           (char *)0xFF,
           (LPWSTR)((char *)v29 + 129),
           (char *)0xFF,
           *(_DWORD *)(a1 + 4),
           0) != 0
      && __crtLCMapStringA(
           nullptr,
           *(_DWORD *)(a1 + 20),
           0x200u,
           (LPCCH)Block + 1,
           (char *)0xFF,
           (LPWSTR)((char *)v27 + 129),
           (char *)0xFF,
           *(_DWORD *)(a1 + 4),
           0) != 0 )
    {
      v7 = (char *)v30;
      v8 = v29;
      v9 = (char *)v30 + 254;
      v10 = MaxCharSize_low <= 1;
      *((_WORD *)v30 + 127) = 0;
      v11 = v27;
      v22 = v9;
      v8[127] = 0;
      v11[127] = 0;
      v8[128] = 0;
      v20 = v8 + 128;
      v23 = v11 + 128;
      v11[128] = 0;
      if ( !v10 && CPInfo.LeadByte[0] != 0 )
      {
        v12 = &CPInfo.LeadByte[1];
        v30 = &CPInfo.LeadByte[1];
        do
        {
          v13 = *v12;
          if ( *v12 == 0 )
            break;
          v14 = *(v12 - 1);
          v29 = (void *)v14;
          if ( v14 <= v13 )
          {
            for ( j = &v7[2 * v14 + 256]; ; j = v24 )
            {
              v29 = (char *)v29 + 1;
              *(_WORD *)j = 0x8000;
              v24 = j + 2;
              if ( (int)v29 > *(unsigned __int8 *)v30 )
                break;
            }
          }
          v12 = (BYTE *)v30 + 2;
          v30 = v12;
        }
        while ( *(v12 - 1) != 0 );
      }
      memcpy(v7, v7 + 512, 0xFEu);
      memcpy(v8, v8 + 256, 0x7Fu);
      memcpy(v27, (char *)v27 + 256, 0x7Fu);
      if ( *(_DWORD *)(a1 + 192) != 0 && InterlockedDecrement(*(volatile LONG **)(a1 + 192)) == 0 )
      {
        free((void *)(*(_DWORD *)(a1 + 196) - 254));
        free((void *)(*(_DWORD *)(a1 + 204) - 128));
        free((void *)(*(_DWORD *)(a1 + 208) - 128));
        free(*(void **)(a1 + 192));
      }
      v16 = v26;
      *(_DWORD *)v26 = 1;
      *(_DWORD *)(a1 + 192) = v16;
      *(_DWORD *)(a1 + 200) = v21;
      *(_DWORD *)(a1 + 196) = v22;
      *(_DWORD *)(a1 + 204) = v20;
      *(_DWORD *)(a1 + 208) = v23;
      *(_DWORD *)(a1 + 172) = MaxCharSize_low;
    }
    else
    {
$error_cleanup$28330:
      free(v26);
      free(v30);
      free(v29);
      free(v27);
      v1 = 1;
    }
    free(Block);
    return v1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 192) != 0 )
      InterlockedDecrement(*(volatile LONG **)(a1 + 192));
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 196) = 0;
    *(_DWORD *)(a1 + 200) = asc_421798;
    *(_DWORD *)(a1 + 204) = &unk_421C20;
    *(_DWORD *)(a1 + 208) = &unk_421DA0;
    *(_DWORD *)(a1 + 172) = 1;
    return 0;
  }
}

// Address: 0x40F335
unsigned int __cdecl ___lc_codepage_func()
{
  int v0; // ecx
  volatile LONG *v1; // eax

  v0 = _getptd();
  v1 = *(volatile LONG **)(v0 + 108);
  if ( v1 != (volatile LONG *)off_42C940 && (dword_42CA44 & *(_DWORD *)(v0 + 112)) == 0 )
    v1 = __updatetlocinfo();
  return *((_DWORD *)v1 + 1);
}

// Address: 0x40F35B
volatile LONG *___lc_handle_func()
{
  int v0; // ecx
  volatile LONG *v1; // eax

  v0 = _getptd();
  v1 = *(volatile LONG **)(v0 + 108);
  if ( v1 != (volatile LONG *)off_42C940 && (dword_42CA44 & *(_DWORD *)(v0 + 112)) == 0 )
    v1 = __updatetlocinfo();
  return v1 + 3;
}

// Address: 0x40F390
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
         && dword_430040 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0[ecx*4]; jumptable 0040F3EC case 0 }
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

// Address: 0x40F6F5
void *__cdecl _malloc_crt(size_t Size)
{
  DWORD v1; // esi
  void *v2; // edi
  int v3; // eax

  v1 = 0;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr || dword_42F25C == 0 )
      break;
    Sleep(v1);
    v3 = v1 + 1000;
    if ( v1 + 1000 > dword_42F25C )
      v3 = -1;
    v1 = v3;
  }
  while ( v3 != -1 );
  return v2;
}

// Address: 0x40F73A
int __cdecl _calloc_crt(size_t Size, int a2)
{
  DWORD v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = _calloc_impl(Size, a2, 0);
    if ( v3 != 0 || dword_42F25C == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_42F25C )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x40F786
void *__cdecl _realloc_crt(void *Block, size_t Size)
{
  DWORD v2; // esi
  void *v3; // edi
  int v4; // eax

  v2 = 0;
  do
  {
    v3 = realloc(Block, Size);
    if ( v3 != nullptr || Size == 0 || dword_42F25C == 0 )
      break;
    Sleep(v2);
    v4 = v2 + 1000;
    if ( v2 + 1000 > dword_42F25C )
      v4 = -1;
    v2 = v4;
  }
  while ( v4 != -1 );
  return v3;
}

// Address: 0x40F7D4
void *__cdecl _recalloc_crt(void *Block, size_t Count, size_t Size)
{
  DWORD v3; // esi
  void *v4; // edi
  int v5; // eax

  v3 = 0;
  do
  {
    v4 = _recalloc(Block, Count, Size);
    if ( v4 != nullptr || Size == 0 || dword_42F25C == 0 )
      break;
    Sleep(v3);
    v5 = v3 + 1000;
    if ( v3 + 1000 > dword_42F25C )
      v5 = -1;
    v3 = v5;
  }
  while ( v5 != -1 );
  return v4;
}

// Address: 0x40F826
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

  dword_42F368 = v0;
  dword_42F364 = v2;
  dword_42F360 = v1;
  dword_42F35C = v3;
  dword_42F358 = v5;
  dword_42F354 = v4;
  word_42F380 = __SS__;
  word_42F374 = __CS__;
  word_42F350 = __DS__;
  word_42F34C = __ES__;
  word_42F348 = __FS__;
  word_42F344 = __GS__;
  v6 = __readeflags();
  dword_42F378 = v6;
  dword_42F36C = vars0;
  dword_42F370 = retaddr;
  dword_42F37C = (int)&v10;
  dword_42F2B8 = 65537;
  dword_42F26C = retaddr;
  dword_42F260 = -1073740791;
  dword_42F264 = 1;
  dword_42F2B0 = IsDebuggerPresent();
  sub_4100AC(1);
  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( dword_42F2B0 == 0 )
    sub_4100AC(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}

// Address: 0x40F92C
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

// Address: 0x40F994
int __cdecl V6_HeapAlloc(unsigned int a1)
{
  int v2; // [esp+10h] [ebp-1Ch]

  v2 = 0;
  if ( a1 <= dword_43004C )
  {
    _lock(4);
    v2 = __sbh_alloc_block(a1);
    _unlock(4);
  }
  return v2;
}

// Address: 0x40F9E3
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
      if ( dword_43005C == 1 )
      {
        v2 = v1 != 0 ? v1 : 1;
        v3 = HeapAlloc(hHeap, 0, v2);
      }
      else if ( dword_43005C != 3 || (v3 = (LPVOID)V6_HeapAlloc(v1)) == nullptr )
      {
        if ( v1 == 0 )
          v1 = 1;
        v3 = HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0);
      }
      v4 = v3;
      if ( v3 != nullptr )
        return v4;
      if ( dword_42FD78 == 0 )
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

// Address: 0x40FAAD
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
    v3 = &unk_42F584;
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

// Address: 0x40FB20
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

// Address: 0x40FBC0
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
        goto main_loop_0;
    }
  }
  else
  {
    while ( 1 )
    {
main_loop_0:
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

// Address: 0x40FC7E
int __cdecl _get_errno_from_oserr(int a1)
{
  unsigned int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_42C3F0[2 * i] )
      return dword_42C3F4[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}

// Address: 0x40FCC0
int *__cdecl _errno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (int *)(v0 + 8);
  else
    return (int *)&unk_42C558;
}

// Address: 0x40FCD3
unsigned int *__cdecl __doserrno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 != 0 )
    return (unsigned int *)(v0 + 12);
  else
    return (unsigned int *)&unk_42C55C;
}

// Address: 0x40FCE6
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

// Address: 0x40FD10
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
         && dword_430040 != 0
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
      __asm { jmp     dword ptr ds:TrailUp0_0[ecx*4]; jumptable 0040FD6C case 0 }
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

// Address: 0x410075
int __cdecl sub_410075(int a1)
{
  dword_42F58C = a1;
  return a1;
}

// Address: 0x410084
int __cdecl _callnewh(size_t Size)
{
  int (__cdecl *v1)(size_t); // eax

  v1 = (int (__cdecl *)(size_t))_decode_pointer(dword_42F58C);
  return v1 != nullptr && v1(Size) != 0;
}

// Address: 0x4100AC
void sub_4100AC()
{
  dword_430198 = 0;
}

// Address: 0x4100B4
PVOID __cdecl _encode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_42C560 != -1
    && (v6 = dword_42C560, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x410126
PVOID _encoded_null()
{
  return _encode_pointer(nullptr);
}

// Address: 0x41012F
PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleW; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) != nullptr
    && dword_42C560 != -1
    && (v6 = dword_42C560, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
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

// Address: 0x4101A1
// attributes: thunk
DWORD __stdcall __crtTlsAlloc(int a1)
{
  return TlsAlloc();
}

// Address: 0x4101AA
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

// Address: 0x4101DE
int _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_42C560 != -1 )
  {
    v2 = dword_42C560;
    v0 = (void (__stdcall *)(int))_decode_pointer((void *)dword_42F59C);
    v0(v2);
    dword_42C560 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}

// Address: 0x41021B
int __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleW; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]
  int savedregs; // [esp+2Ch] [ebp+0h]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  if ( ModuleHandleW == nullptr )
    ModuleHandleW = (HMODULE)_crt_waiting_on_module_handle(L"KERNEL32.DLL");
  hModule = ModuleHandleW;
  *(_DWORD *)(a1 + 92) = &unk_422618;
  *(_DWORD *)(a1 + 20) = 1;
  if ( ModuleHandleW != nullptr )
  {
    *(_DWORD *)(a1 + 504) = GetProcAddress(ModuleHandleW, "EncodePointer");
    *(_DWORD *)(a1 + 508) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 200) = 67;
  *(_BYTE *)(a1 + 331) = 67;
  *(_DWORD *)(a1 + 104) = &unk_42CA58;
  _lock(13);
  InterlockedIncrement(*(volatile LONG **)(a1 + 104));
  _unlock(13);
  _lock(12);
  *(_DWORD *)(a1 + 108) = a2;
  if ( a2 == 0 )
    *(_DWORD *)(a1 + 108) = off_42C940;
  __addlocaleref(*(volatile LONG **)(a1 + 108));
  savedregs = 4260580;
  return _unlock(12);
}

// Address: 0x410302
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
  v9 = dword_42C560;
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
      v8 = dword_42C560;
      v5 = (int (__stdcall *)(int, int))_decode_pointer((void *)dword_42F598);
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

// Address: 0x41037B
DWORD *__cdecl _getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( v0 == nullptr )
    _amsg_exit(16);
  return v0;
}

// Address: 0x410395
void __stdcall _freefls(void *Block)
{
  void *v1; // edi
  char *v2; // edi
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
    if ( *((_UNKNOWN **)Block + 23) != &unk_422618 )
      free(*((void **)Block + 23));
    _lock(13);
    v1 = *((void **)Block + 26);
    if ( v1 != nullptr && InterlockedDecrement(*((volatile LONG **)Block + 26)) == 0 && v1 != &unk_42CA58 )
      free(v1);
    _unlock(13);
    _lock(12);
    v2 = *((char **)Block + 27);
    if ( v2 != nullptr )
    {
      __removelocaleref(*((volatile LONG **)Block + 27));
      if ( v2 != (char *)off_42C940 && v2 != (char *)&unk_42C868 && *(_DWORD *)v2 == 0 )
        __freetlocinfo(v2);
    }
    savedregs = 4261021;
    _unlock(12);
    free(Block);
  }
}

// Address: 0x4104C4
int _mtinit()
{
  HMODULE ModuleHandleW; // eax
  HMODULE v1; // edi
  BOOL (__stdcall *FlsFree)(DWORD); // eax
  DWORD v3; // eax
  int (__stdcall *v4)(_DWORD); // eax
  int v5; // eax
  DWORD *v6; // esi
  int (__stdcall *v7)(int, int); // eax
  DWORD CurrentThreadId; // eax
  int v10; // [esp-8h] [ebp-10h]
  int v11; // [esp-4h] [ebp-Ch]

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
    dword_42F59C = (int)FlsFree;
    if ( FlsAlloc == nullptr || FlsGetValue == nullptr || FlsSetValue == nullptr || FlsFree == nullptr )
    {
      FlsGetValue = TlsGetValue;
      FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))__crtTlsAlloc;
      FlsSetValue = TlsSetValue;
      dword_42F59C = (int)TlsFree;
    }
    v3 = TlsAlloc();
    dwTlsIndex = v3;
    if ( v3 == -1 || !TlsSetValue(v3, FlsGetValue) )
      return 0;
    _init_pointers();
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))_encode_pointer(FlsAlloc);
    FlsGetValue = (PVOID (__stdcall *)(DWORD))_encode_pointer(FlsGetValue);
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))_encode_pointer(FlsSetValue);
    dword_42F59C = (int)_encode_pointer((void *)dword_42F59C);
    if ( _mtinitlocks() != 0 )
    {
      v4 = (int (__stdcall *)(_DWORD))_decode_pointer(FlsAlloc);
      dword_42C560 = v4(_freefls);
      if ( dword_42C560 != -1 )
      {
        v5 = _calloc_crt(1u, 532);
        v6 = (DWORD *)v5;
        if ( v5 != 0 )
        {
          v11 = v5;
          v10 = dword_42C560;
          v7 = (int (__stdcall *)(int, int))_decode_pointer(FlsSetValue);
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

// Address: 0x410651
size_t __cdecl _msize(void *Block)
{
  size_t v2; // esi
  int v3; // [esp+10h] [ebp-20h]
  int v4; // [esp+14h] [ebp-1Ch]

  if ( Block != nullptr )
  {
    if ( dword_43005C != 3 )
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

// Address: 0x4106F4
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

// Address: 0x410724
int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer(off_42C568);
  return v1(255);
}

// Address: 0x41074D
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

// Address: 0x410778
void __cdecl __noreturn __crtExitProcess(UINT uExitCode)
{
  __crtCorExitProcess(uExitCode);
  ExitProcess(uExitCode);
}

// Address: 0x410790
int _lockexit()
{
  return _lock(8);
}

// Address: 0x410799
int _unlockexit()
{
  return _unlock(8);
}

// Address: 0x4107A2
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

// Address: 0x4107BF
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

// Address: 0x4107E3
int __cdecl _cinit(int a1)
{
  int result; // eax
  _PVFV *savedregs; // [esp+4h] [ebp+0h]

  if ( dword_430190 != nullptr && _IsNonwritableInCurrentImage(&dword_430190) != 0 )
    dword_430190(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&dword_4212A4, (_PIFV *)&Last);
  if ( result == 0 )
  {
    atexit(sub_41709A);
    _initterm((_PVFV *)&First, savedregs);
    if ( dword_430194 != nullptr && _IsNonwritableInCurrentImage(&dword_430194) != 0 )
      dword_430194(0, 2, 0);
    return 0;
  }
  return result;
}

// Address: 0x410868
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
  if ( dword_42F5D0 != 1 )
  {
    dword_42F5CC = 1;
    byte_42F5C8 = a3;
    if ( a2 == 0 )
    {
      v3 = (void **)_decode_pointer((void *)dword_430188);
      v9 = v3;
      if ( v3 != nullptr )
      {
        v4 = (void **)_decode_pointer((void *)dword_430184);
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
            v6 = (void **)_decode_pointer((void *)dword_430188);
            v7 = (void **)_decode_pointer((void *)dword_430184);
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
      _initterm((_PVFV *)&dword_4212CC, v8);
    }
    _initterm((_PVFV *)&dword_4212D4, v8);
  }
  if ( a3 != 0 )
    _unlock(8);
  if ( a3 == 0 )
  {
    dword_42F5D0 = 1;
    _unlock(8);
    __crtExitProcess(uExitCode);
  }
}

// Address: 0x410994
void __cdecl __noreturn exit(int Code)
{
  doexit(Code, 0, 0);
}

// Address: 0x4109AA
void __cdecl __noreturn _exit(int Code)
{
  doexit(Code, 1, 0);
}

// Address: 0x4109C0
void __cdecl _cexit()
{
  doexit(0, 0, 1);
}

// Address: 0x4109CF
void __cdecl _c_exit()
{
  doexit(0, 1, 1);
}

// Address: 0x4109DE
void (__cdecl __noreturn *_init_pointers())(int Code)
{
  PVOID v0; // esi
  void (__cdecl __noreturn *result)(int); // eax

  v0 = _encoded_null();
  sub_410075((int)v0);
  sub_41B9AC(v0);
  sub_40A5B0((int)v0);
  sub_4113FE(v0);
  sub_41B99D(v0);
  _initp_misc_winsig(v0);
  nullsub_1(v0);
  _initp_eh_hooks(v0);
  result = (void (__cdecl __noreturn *)(int))_encode_pointer(_exit);
  off_42C568 = result;
  return result;
}

// Address: 0x410A2C
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

// Address: 0x410A71
// positive sp value has been detected, the output may be wrong!
void _SEH_epilog4()
{
  __asm { retn }
}

// Address: 0x410A90
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
            && _IsNonwritableInCurrentImage(&off_421670) != 0 )
          {
            __DestructExceptionObject((_DWORD *)a1);
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

// Address: 0x410C1C
unsigned int __cdecl wcstoxl(
        struct localeinfo_struct *a1,
        const wchar_t *a2,
        const wchar_t **a3,
        unsigned int a4,
        int a5)
{
  wchar_t v6; // si
  const wchar_t *v7; // edi
  _WORD *v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // eax
  const wchar_t *v12; // edi
  __crt_locale_pointers Locale; // [esp+8h] [ebp-18h] BYREF
  int v14; // [esp+10h] [ebp-10h]
  char v15; // [esp+14h] [ebp-Ch]
  unsigned int v16; // [esp+18h] [ebp-8h]
  unsigned int v17; // [esp+1Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a1);
  if ( a3 != nullptr )
    *a3 = a2;
  if ( a2 == nullptr || a4 != 0 && ((int)a4 < 2 || (int)a4 > 36) )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v15 != 0 )
      *(_DWORD *)(v14 + 112) &= ~2u;
    return 0;
  }
  v6 = *a2;
  v17 = 0;
  v7 = a2 + 1;
  while ( _iswctype_l(v6, 8u, &Locale) != 0 )
    v6 = *v7++;
  if ( v6 == 45 )
  {
    a5 |= 2u;
  }
  else if ( v6 != 43 )
  {
    goto LABEL_17;
  }
  v6 = *v7++;
LABEL_17:
  if ( a4 != 0 )
    goto LABEL_24;
  if ( _wchartodigit(v6) == 0 )
  {
    if ( *v7 != 120 && *v7 != 88 )
    {
      a4 = 8;
      goto LABEL_29;
    }
    a4 = 16;
LABEL_24:
    if ( a4 == 16 && _wchartodigit(v6) == 0 && (*v7 == 120 || *v7 == 88) )
    {
      v8 = v7 + 1;
      v6 = *v8;
      v7 = v8 + 1;
    }
    goto LABEL_29;
  }
  a4 = 10;
LABEL_29:
  v16 = 0xFFFFFFFF % a4;
  v9 = 0xFFFFFFFF / a4;
  while ( 1 )
  {
    v10 = _wchartodigit(v6);
    if ( v10 == -1 )
    {
      if ( (v6 < 0x41u || v6 > 0x5Au) && (unsigned __int16)(v6 - 97) > 0x19u )
        break;
      v11 = v6;
      if ( (unsigned __int16)(v6 - 97) <= 0x19u )
        v11 = v6 - 32;
      v10 = v11 - 55;
    }
    if ( v10 >= a4 )
      break;
    a5 |= 8u;
    if ( v17 < v9 || v17 == v9 && v10 <= v16 )
    {
      v17 = v10 + a4 * v17;
    }
    else
    {
      a5 |= 4u;
      if ( a3 == nullptr )
        break;
    }
    v6 = *v7++;
  }
  v12 = v7 - 1;
  if ( (a5 & 8) != 0 )
  {
    if ( (a5 & 4) != 0 || (a5 & 1) == 0 && ((a5 & 2) != 0 && v17 > 0x80000000 || (a5 & 2) == 0 && v17 > 0x7FFFFFFF) )
    {
      *_errno() = 34;
      if ( (a5 & 1) != 0 )
        v17 = -1;
      else
        v17 = ((a5 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( a3 != nullptr )
      v12 = a2;
    v17 = 0;
  }
  if ( a3 != nullptr )
    *a3 = v12;
  if ( (a5 & 2) != 0 )
    v17 = -v17;
  if ( v15 != 0 )
    *(_DWORD *)(v14 + 112) &= ~2u;
  return v17;
}

// Address: 0x410E16
int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  if ( dword_42F254 != 0 )
    return wcstoxl(nullptr, String, (const wchar_t **)EndPtr, Radix, 0);
  else
    return wcstoxl((struct localeinfo_struct *)&off_42C948, String, (const wchar_t **)EndPtr, Radix, 0);
}

// Address: 0x410E41
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

// Address: 0x411070
int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  if ( dword_42F254 != 0 )
    return strtoxl(nullptr, String, (const char **)EndPtr, Radix, 0);
  else
    return strtoxl((struct localeinfo_struct *)&off_42C948, String, (const char **)EndPtr, Radix, 0);
}

// Address: 0x41109B
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
    if ( a1 == dword_42C570[2 * v1] )
      break;
    v8 = ++v1;
  }
  while ( v1 < 0x17 );
  if ( v1 < 0x17 )
  {
    if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_42C114 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v4 = StdHandle;
      if ( StdHandle != nullptr && StdHandle != (HANDLE)-1 )
      {
        v5 = (const char **)&(&off_42C574)[2 * v1];
        v6 = strlen(*v5);
        WriteFile(v4, *v5, v6, &NumberOfBytesWritten, nullptr);
      }
    }
    else if ( a1 != 252 )
    {
      if ( strcpy_s(Destination, 0x314u, "Runtime Error!\n\nProgram: ") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      byte_42F6F5 = 0;
      if ( GetModuleFileNameA(nullptr, Str, 0x104u) == 0 && strcpy_s(Str, 0x2FBu, "<program name unknown>") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strlen(Str) + 1 > 0x3C )
      {
        v2 = strlen(Str);
        if ( strncpy_s(&Str[v2 - 59], (char *)&LCData - &Str[v2 - 59], "...", 3u) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
      if ( strcat_s(Destination, 0x314u, "\n\n") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      if ( strcat_s(Destination, 0x314u, (&off_42C574)[2 * v8]) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      sub_41BD55(Destination, "Microsoft Visual C++ Runtime Library", 73744);
    }
  }
}

// Address: 0x411246
void _FF_MSGBANNER()
{
  if ( _set_error_mode(3) == 1 || _set_error_mode(3) == 0 && dword_42C114 == 1 )
  {
    _NMSG_WRITE(252);
    _NMSG_WRITE(255);
  }
}

// Address: 0x41127F
int __cdecl __getlocaleinfo(struct localeinfo_struct *a1, int a2, LCID Locale, LCTYPE LCType, char **a5)
{
  CHAR *v5; // edi
  size_t LocaleInfoA; // esi
  size_t v7; // eax
  CHAR *v8; // eax
  char *v9; // eax
  WCHAR *v11; // edi
  char v12; // bl
  int cbMultiByte; // [esp+10h] [ebp-90h]
  int v14; // [esp+18h] [ebp-88h]
  CHAR Block[128]; // [esp+1Ch] [ebp-84h] BYREF

  if ( a2 == 1 )
  {
    v5 = Block;
    v14 = 0;
    LocaleInfoA = __crtGetLocaleInfoA(a1, Locale, LCType, Block, 128, 0);
    if ( LocaleInfoA == 0 )
    {
      if ( GetLastError() != 122 )
        return -1;
      v7 = __crtGetLocaleInfoA(a1, Locale, LCType, nullptr, 0, 0);
      cbMultiByte = v7;
      if ( v7 == 0 )
        return -1;
      v8 = (CHAR *)_calloc_crt(v7, 1);
      v5 = v8;
      if ( v8 == nullptr )
        return -1;
      v14 = 1;
      LocaleInfoA = __crtGetLocaleInfoA(a1, Locale, LCType, v8, cbMultiByte, 0);
      if ( LocaleInfoA == 0 )
        goto LABEL_9;
    }
    v9 = (char *)_calloc_crt(LocaleInfoA, 1);
    *a5 = v9;
    if ( v9 == nullptr )
    {
      if ( v14 == 0 )
        return -1;
LABEL_9:
      free(v5);
      return -1;
    }
    if ( strncpy_s(v9, LocaleInfoA, v5, LocaleInfoA - 1) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( v14 != 0 )
      free(v5);
  }
  else
  {
    if ( a2 != 0 )
      return -1;
    v11 = &LCData;
    if ( __crtGetLocaleInfoW(a1, Locale, LCType, &LCData, 4) == 0 )
      return -1;
    *(_BYTE *)a5 = 0;
    do
    {
      v12 = *(_BYTE *)v11;
      if ( isdigit(*(unsigned __int8 *)v11) == 0 )
        break;
      ++v11;
      *(_BYTE *)a5 = v12 + 10 * *(_BYTE *)a5 - 48;
    }
    while ( (int)v11 < (int)&dword_42F8F4 );
  }
  return 0;
}

// Address: 0x4113FE
int __cdecl sub_4113FE(int a1)
{
  dword_42F8F4 = a1;
  return a1;
}

// Address: 0x41140D
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
    && (v2 != (FILE *)(sub_40C65A() + 8) && v2 != (FILE *)(sub_40C65A() + 16) || _isatty((int)File) == 0) )
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
        v9 = &unk_42C630;
      else
        v9 = (_BYTE *)(dword_430080[(int)File >> 5] + (((unsigned __int8)File & 0x1F) << 6));
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

// Address: 0x411571
int *__usercall write_string@<eax>(int *result@<eax>, unsigned __int16 *a2@<ecx>, int a3@<edi>, int a4)
{
  int *v4; // esi

  v4 = result;
  if ( (*(_BYTE *)(a3 + 12) & 0x40) == 0 || *(_DWORD *)(a3 + 8) != 0 )
  {
    while ( a4 > 0 )
    {
      --a4;
      result = (int *)write_char_0(*a2++);
      if ( *v4 == -1 )
      {
        result = _errno();
        if ( *result != 42 )
          return result;
        result = (int *)write_char_0(63);
      }
    }
  }
  else
  {
    *v4 += a4;
    return (int *)a4;
  }
  return result;
}

// Address: 0x4115C3
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
  unsigned __int16 v50; // [esp-4h] [ebp-484h]
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
  unsigned __int16 v63[2]; // [esp+48h] [ebp-438h] BYREF
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
      v10 = aRuntimeErrorPr[(unsigned __int16)v7 + 24] & 0xF;
    v55 = byte_422518[8 * v10 + v8] >> 4;
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
              write_char_0(v7);
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
                  v73 = off_42C628;
                  v19 = strlen(off_42C628);
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
                  v73 = (char *)off_42C62C;
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
                v73 = off_42C628;
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
              v28 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_42CF98[0]);
              v28(v52, v12, v46, v47, v48, v49, &Locale);
              v29 = v75 & 0x80;
              if ( (v75 & 0x80) != 0 && v74 == 0 )
              {
                v30 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_42CFA4);
                v30(v12, &Locale);
              }
              if ( (_WORD)v71 == 103 && v29 == 0 )
              {
                v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_42CFA0[0]);
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
            write_multi_char_0(32, v66 - v72 - v68, v65);
          v43 = v65;
          write_string(&v69, v63, v65, v68);
          if ( (v75 & 8) != 0 && (v75 & 4) == 0 )
            write_multi_char_0(48, v42, v43);
          if ( v67 != 0 || v41 <= 0 )
          {
            write_string(&v69, (unsigned __int16 *)v73, v43, v41);
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
              write_char_0(*(_DWORD *)v53);
              v44 += v51;
              if ( v71 <= 0 )
                goto LABEL_202;
            }
            v69 = -1;
          }
LABEL_202:
          if ( v69 >= 0 && (v75 & 4) != 0 )
            write_multi_char_0(32, v42, v65);
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

// Address: 0x41215B
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

// Address: 0x412253
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

// Address: 0x4122DE
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

// Address: 0x412311
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

// Address: 0x412337
int __cdecl _output_l(FILE *Stream, _BYTE *a2, struct localeinfo_struct *a3, int *a4)
{
  _BYTE *v4; // ebx
  int *v5; // edi
  int v7; // eax
  _BYTE *v8; // ecx
  char *v9; // eax
  int v10; // ecx
  unsigned __int8 v11; // dl
  _BYTE *v12; // ebx
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
  __int64 v26; // rax
  _DWORD *v27; // edi
  int v28; // esi
  void *v29; // eax
  int v30; // eax
  _DWORD *v31; // edi
  void (__cdecl *v32)(_DWORD *, char *, int, int, int, int, __crt_locale_pointers *); // eax
  int v33; // edi
  void (__cdecl *v34)(char *, __crt_locale_pointers *); // eax
  void (__cdecl *v35)(char *, __crt_locale_pointers *); // eax
  unsigned int v36; // ebx
  unsigned int v37; // edi
  char *j; // esi
  int v39; // eax
  unsigned __int64 v40; // rcx
  int v41; // ecx
  _BYTE *v42; // eax
  char *v43; // esi
  char *i; // eax
  int v45; // ebx
  FILE *v46; // edi
  wchar_t *v47; // esi
  wchar_t v48; // ax
  unsigned __int8 v49; // al
  int v50; // [esp-14h] [ebp-298h]
  int v51; // [esp-10h] [ebp-294h]
  unsigned __int64 v52; // [esp-10h] [ebp-294h]
  int v53; // [esp-Ch] [ebp-290h]
  int v54; // [esp-8h] [ebp-28Ch]
  _DWORD v55[2]; // [esp+Ch] [ebp-278h] BYREF
  int v56; // [esp+14h] [ebp-270h]
  int v57; // [esp+18h] [ebp-26Ch]
  int v58; // [esp+1Ch] [ebp-268h] BYREF
  int v59; // [esp+24h] [ebp-260h]
  __crt_locale_pointers Locale; // [esp+28h] [ebp-25Ch] BYREF
  int v61; // [esp+30h] [ebp-254h]
  char v62; // [esp+34h] [ebp-250h]
  FILE *File; // [esp+38h] [ebp-24Ch]
  int v64; // [esp+3Ch] [ebp-248h]
  void *Block; // [esp+40h] [ebp-244h]
  int v66; // [esp+44h] [ebp-240h]
  _BYTE *v67; // [esp+48h] [ebp-23Ch]
  int v68; // [esp+4Ch] [ebp-238h]
  int v69; // [esp+50h] [ebp-234h]
  int v70; // [esp+54h] [ebp-230h]
  char v71; // [esp+58h] [ebp-22Ch]
  char v72; // [esp+59h] [ebp-22Bh]
  int v73; // [esp+5Ch] [ebp-228h] BYREF
  int v74; // [esp+60h] [ebp-224h]
  int SizeConverted; // [esp+64h] [ebp-220h] BYREF
  char *v76; // [esp+68h] [ebp-21Ch]
  int v77; // [esp+6Ch] [ebp-218h]
  unsigned __int8 v78; // [esp+73h] [ebp-211h]
  int v79; // [esp+74h] [ebp-210h]
  char MbCh[511]; // [esp+78h] [ebp-20Ch] BYREF
  char v81; // [esp+277h] [ebp-Dh] BYREF
  char v82[8]; // [esp+278h] [ebp-Ch] BYREF

  v4 = a2;
  v5 = a4;
  File = Stream;
  v74 = (int)a4;
  v64 = 0;
  v79 = 0;
  v69 = 0;
  v77 = 0;
  v70 = 0;
  v66 = 0;
  v68 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  if ( Stream != nullptr
    && ((Stream->_flag & 0x40) != 0
     || ((v7 = _fileno(Stream)) == -1 || v7 == -2
       ? (v8 = &unk_42C630)
       : (v8 = (_BYTE *)(dword_430080[v7 >> 5] + ((v7 & 0x1F) << 6))),
         (v8[36] & 0x7F) == 0
      && (v7 == -1 || v7 == -2
        ? (v9 = (char *)&unk_42C630)
        : (v9 = (char *)(dword_430080[v7 >> 5] + ((v7 & 0x1F) << 6))),
          v9[36] >= 0)))
    && (v10 = 0, a2 != nullptr) )
  {
    v11 = *a2;
    v73 = 0;
    SizeConverted = 0;
    Block = nullptr;
    v78 = v11;
    if ( v11 != 0 )
    {
      while ( 1 )
      {
        v12 = v4 + 1;
        v67 = v12;
        if ( v73 < 0 )
          break;
        if ( (unsigned __int8)(v11 - 32) > 0x58u )
          v13 = 0;
        else
          v13 = aRuntimeErrorPr[(char)v11 + 24] & 0xF;
        v57 = byte_422518[8 * v13 + v10] >> 4;
        switch ( v57 )
        {
          case 0:
            goto $NORMAL_STATE$28981;
          case 1:
            v77 = -1;
            v56 = 0;
            v66 = 0;
            v69 = 0;
            v70 = 0;
            v79 = 0;
            v68 = 0;
            goto LABEL_218;
          case 2:
            switch ( v11 )
            {
              case ' ':
                v79 |= 2u;
                break;
              case '#':
                v79 |= 0x80u;
                break;
              case '+':
                v79 |= 1u;
                break;
              case '-':
                v79 |= 4u;
                break;
              case '0':
                v79 |= 8u;
                break;
              default:
                break;
            }
            goto LABEL_218;
          case 3:
            if ( v11 == 42 )
            {
              v74 = (int)(v5 + 1);
              v69 = *v5;
              if ( v69 < 0 )
              {
                v79 |= 4u;
                v69 = -v69;
              }
            }
            else
            {
              v69 = 10 * v69 + (char)v11 - 48;
            }
            goto LABEL_218;
          case 4:
            v77 = 0;
            goto LABEL_218;
          case 5:
            if ( v11 == 42 )
            {
              v74 = (int)(v5 + 1);
              v77 = *v5;
              if ( v77 < 0 )
                v77 = -1;
            }
            else
            {
              v77 = 10 * v77 + (char)v11 - 48;
            }
            goto LABEL_218;
          case 6:
            switch ( v11 )
            {
              case 'I':
                v14 = *v12;
                if ( *v12 == 54 && v12[1] == 52 )
                {
                  v79 |= 0x8000u;
                  v67 = v12 + 2;
                }
                else if ( v14 == 51 && v12[1] == 50 )
                {
                  v79 &= ~0x8000u;
                  v67 = v12 + 2;
                }
                else if ( v14 != 100 && v14 != 105 && v14 != 111 && v14 != 117 && v14 != 120 && v14 != 88 )
                {
                  v57 = 0;
$NORMAL_STATE$28981:
                  v68 = 0;
                  v16 = _isleadbyte_l(v11, &Locale);
                  v15 = v16 == 0;
                  LOBYTE(v16) = v78;
                  if ( !v15 )
                  {
                    v16 = write_char(File, v16, &v73);
                    LOBYTE(v16) = *v12;
                    v67 = v12 + 1;
                    if ( (_BYTE)v16 == 0 )
                      goto LABEL_2;
                  }
                  write_char(File, v16, &v73);
                }
                break;
              case 'h':
                v79 |= 0x20u;
                break;
              case 'l':
                if ( *v12 == 108 )
                {
                  v79 |= 0x1000u;
                  v67 = v12 + 1;
                }
                else
                {
                  v79 |= 0x10u;
                }
                break;
              case 'w':
                v79 |= 0x800u;
                break;
              default:
                break;
            }
            goto LABEL_218;
          case 7:
            if ( (char)v11 <= 100 )
            {
              if ( v11 == 100 )
              {
LABEL_118:
                v79 |= 0x40u;
                goto LABEL_119;
              }
              if ( (char)v11 > 83 )
              {
                if ( v11 == 88 )
                  goto LABEL_140;
                if ( v11 == 90 )
                {
                  v22 = (__int16 *)*v5;
                  v74 = (int)(v5 + 1);
                  if ( v22 != nullptr && (v23 = *((char **)v22 + 1)) != nullptr )
                  {
                    v24 = *v22;
                    v76 = v23;
                    if ( (v79 & 0x800) != 0 )
                    {
                      v24 /= 2;
                      v68 = 1;
                    }
                    else
                    {
                      v68 = 0;
                    }
                  }
                  else
                  {
                    v76 = off_42C628;
                    v24 = strlen(off_42C628);
                  }
                  goto LABEL_189;
                }
                if ( v11 != 97 )
                {
                  if ( v11 != 99 )
                    goto LABEL_190;
                  goto LABEL_93;
                }
              }
              else
              {
                if ( v11 == 83 )
                {
                  if ( (v79 & 0x830) == 0 )
                    v79 |= 0x800u;
                  goto LABEL_83;
                }
                if ( v11 != 65 )
                {
                  if ( v11 != 67 )
                  {
                    if ( v11 != 69 && v11 != 71 )
                      goto LABEL_190;
                    goto LABEL_76;
                  }
                  if ( (v79 & 0x830) == 0 )
                    v79 |= 0x800u;
LABEL_93:
                  v21 = v5 + 1;
                  v74 = (int)v21;
                  if ( (v79 & 0x810) != 0 )
                  {
                    if ( wctomb_s(&SizeConverted, MbCh, 0x200u, *((_WORD *)v21 - 2)) != 0 )
                      v66 = 1;
                  }
                  else
                  {
                    MbCh[0] = *((_BYTE *)v21 - 4);
                    SizeConverted = 1;
                  }
                  v76 = MbCh;
                  goto LABEL_190;
                }
LABEL_76:
                v11 += 32;
                v56 = 1;
                v78 = v11;
              }
LABEL_77:
              v79 |= 0x40u;
              v17 = MbCh;
              v76 = MbCh;
              v59 = 512;
              if ( v77 >= 0 )
              {
                if ( v77 != 0 )
                {
                  if ( v77 > 512 )
                    v77 = 512;
                  if ( v77 > 163 )
                  {
                    v28 = v77 + 349;
                    v29 = _malloc_crt(v77 + 349);
                    v11 = v78;
                    Block = v29;
                    if ( v29 != nullptr )
                    {
                      v76 = (char *)v29;
                      v59 = v28;
                      v17 = (char *)v29;
                    }
                    else
                    {
                      v77 = 163;
                    }
                  }
                }
                else
                {
                  v77 = v11 == 103;
                }
              }
              else
              {
                v77 = 6;
              }
              v30 = *v5;
              v31 = v5 + 2;
              v55[0] = v30;
              v55[1] = *(v31 - 1);
              v54 = v56;
              v53 = v77;
              v74 = (int)v31;
              v51 = (char)v11;
              v50 = v59;
              v32 = (void (__cdecl *)(_DWORD *, char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_42CF98[0]);
              v32(v55, v17, v50, v51, v53, v54, &Locale);
              v33 = v79 & 0x80;
              if ( (v79 & 0x80) != 0 && v77 == 0 )
              {
                v34 = (void (__cdecl *)(char *, __crt_locale_pointers *))_decode_pointer(off_42CFA4);
                v34(v17, &Locale);
              }
              if ( v78 == 103 && v33 == 0 )
              {
                v35 = (void (__cdecl *)(char *, __crt_locale_pointers *))_decode_pointer(off_42CFA0[0]);
                v35(v17, &Locale);
              }
              if ( *v17 == 45 )
              {
                v79 |= 0x100u;
                v76 = ++v17;
              }
              v24 = strlen(v17);
              goto LABEL_189;
            }
            if ( (char)v11 > 112 )
            {
              if ( v11 != 115 )
              {
                if ( v11 != 117 )
                {
                  if ( v11 != 120 )
                    goto LABEL_190;
                  v64 = 39;
                  goto $COMMON_HEX$29142;
                }
LABEL_119:
                SizeConverted = 10;
                goto $COMMON_INT$29135;
              }
LABEL_83:
              v18 = v77;
              if ( v77 == -1 )
                v18 = 0x7FFFFFFF;
              v74 = (int)(v5 + 1);
              v19 = (char *)*v5;
              v76 = v19;
              if ( (v79 & 0x810) != 0 )
              {
                if ( v19 == nullptr )
                  v76 = (char *)off_42C62C;
                v20 = v76;
                v68 = 1;
                while ( v18 != 0 )
                {
                  --v18;
                  if ( *(_WORD *)v20 == 0 )
                    break;
                  v20 += 2;
                }
                v24 = (v20 - v76) >> 1;
              }
              else
              {
                if ( v19 == nullptr )
                  v76 = off_42C628;
                for ( i = v76; v18 != 0; ++i )
                {
                  --v18;
                  if ( *i == 0 )
                    break;
                }
                v24 = i - v76;
              }
LABEL_189:
              SizeConverted = v24;
              goto LABEL_190;
            }
            if ( v11 == 112 )
            {
              v77 = 8;
LABEL_140:
              v64 = 7;
$COMMON_HEX$29142:
              SizeConverted = 16;
              if ( (v79 & 0x80u) != 0 )
              {
                v71 = 48;
                v72 = v64 + 81;
                v70 = 2;
              }
              goto $COMMON_INT$29135;
            }
            if ( (char)v11 < 101 )
              goto LABEL_190;
            if ( (char)v11 <= 103 )
              goto LABEL_77;
            if ( v11 == 105 )
              goto LABEL_118;
            if ( v11 != 110 )
            {
              if ( v11 != 111 )
                goto LABEL_190;
              SizeConverted = 8;
              if ( (v79 & 0x80u) != 0 )
                v79 |= 0x200u;
$COMMON_INT$29135:
              if ( (v79 & 0x8000) != 0 || (v79 & 0x1000) != 0 )
              {
                v26 = *(_QWORD *)v5;
                v27 = v5 + 2;
              }
              else
              {
                v27 = v5 + 1;
                if ( (v79 & 0x20) != 0 )
                {
                  v74 = (int)v27;
                  if ( (v79 & 0x40) != 0 )
                    LODWORD(v26) = *((__int16 *)v27 - 2);
                  else
                    LODWORD(v26) = *((unsigned __int16 *)v27 - 2);
                  v26 = (int)v26;
LABEL_157:
                  if ( (v79 & 0x40) != 0 && v26 < 0 )
                  {
                    v26 = -v26;
                    v79 |= 0x100u;
                  }
                  v36 = HIDWORD(v26);
                  v37 = v26;
                  if ( (v79 & 0x9000) == 0 )
                    v36 = 0;
                  if ( v77 >= 0 )
                  {
                    v79 &= ~8u;
                    if ( v77 > 512 )
                      v77 = 512;
                  }
                  else
                  {
                    v77 = 1;
                  }
                  if ( (v36 | (unsigned int)v26) == 0 )
                    v70 = 0;
                  for ( j = &v81; ; --j )
                  {
                    v39 = v77--;
                    if ( v39 <= 0 && (v36 | v37) == 0 )
                      break;
                    v52 = __PAIR64__(v36, v37);
                    v40 = __PAIR64__(v36, v37) % SizeConverted;
                    v41 = v40 + 48;
                    v59 = HIDWORD(v40);
                    v36 = (v52 / SizeConverted) >> 32;
                    v37 = v52 / SizeConverted;
                    if ( v41 > 57 )
                      LOBYTE(v41) = v64 + v41;
                    *j = v41;
                  }
                  v42 = (_BYTE *)(&v81 - j);
                  v43 = j + 1;
                  SizeConverted = (int)v42;
                  v76 = v43;
                  if ( (v79 & 0x200) != 0 && (v42 == nullptr || *v43 != 48) )
                  {
                    *--v76 = 48;
                    v24 = (int)(v42 + 1);
                    goto LABEL_189;
                  }
LABEL_190:
                  if ( v66 != 0 )
                    goto LABEL_216;
                  if ( (v79 & 0x40) != 0 )
                  {
                    if ( (v79 & 0x100) != 0 )
                    {
                      v71 = 45;
                      goto LABEL_198;
                    }
                    if ( (v79 & 1) != 0 )
                    {
                      v71 = 43;
                      goto LABEL_198;
                    }
                    if ( (v79 & 2) != 0 )
                    {
                      v71 = 32;
LABEL_198:
                      v70 = 1;
                    }
                  }
                  v45 = v69 - SizeConverted - v70;
                  if ( (v79 & 0xC) == 0 )
                    write_multi_char(&v73, 32, v69 - SizeConverted - v70, File);
                  v46 = File;
                  write_string_0(v70);
                  if ( (v79 & 8) != 0 && (v79 & 4) == 0 )
                    write_multi_char(&v73, 48, v45, v46);
                  if ( v68 != 0 && SizeConverted > 0 )
                  {
                    v47 = (wchar_t *)v76;
                    v59 = SizeConverted;
                    while ( 1 )
                    {
                      v48 = *v47;
                      --v59;
                      ++v47;
                      if ( wctomb_s(&v58, v82, 6u, v48) != 0 || v58 == 0 )
                        break;
                      write_string_0(v58);
                      if ( v59 == 0 )
                        goto LABEL_213;
                    }
                    v73 = -1;
                  }
                  else
                  {
                    write_string_0(SizeConverted);
                  }
LABEL_213:
                  if ( v73 >= 0 && (v79 & 4) != 0 )
                    write_multi_char(&v73, 32, v45, v46);
                  goto LABEL_216;
                }
                LODWORD(v26) = *(v27 - 1);
                if ( (v79 & 0x40) != 0 )
                  v26 = (int)v26;
                else
                  HIDWORD(v26) = 0;
              }
              v74 = (int)v27;
              goto LABEL_157;
            }
            v25 = (_WORD *)*v5;
            v74 = (int)(v5 + 1);
            if ( _get_printf_count_output() == 0 )
              goto LABEL_2;
            if ( (v79 & 0x20) != 0 )
              *v25 = v73;
            else
              *(_DWORD *)v25 = v73;
            v66 = 1;
LABEL_216:
            if ( Block != nullptr )
            {
              free(Block);
              Block = nullptr;
            }
LABEL_218:
            v4 = v67;
            v49 = *v67;
            v78 = v49;
            if ( v49 == 0 )
              goto LABEL_220;
            v10 = v57;
            v5 = (int *)v74;
            v11 = v49;
            break;
          default:
            goto LABEL_218;
        }
      }
    }
LABEL_220:
    if ( v62 != 0 )
      *(_DWORD *)(v61 + 112) &= ~2u;
    return v73;
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

// Address: 0x412ECF
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
  dword_430080[0] = v0;
  uNumber = 32;
  for ( i = v0 + 2048; v0 < i; i = dword_430080[0] + 2048 )
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
      v5 = &dword_430080[k];
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
        v7 = dword_430080[k >> 5] + ((k & 0x1F) << 6);
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
    v9 = dword_430080[0] + (m << 6);
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

// Address: 0x413123
int __cdecl _fileno(FILE *Stream)
{
  if ( Stream != nullptr )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x413155
int __cdecl _heap_init(int a1)
{
  int result; // eax

  result = (int)HeapCreate(a1 == 0, 0x1000u, 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    dword_43005C = 1;
    return 1;
  }
  return result;
}

// Address: 0x413185
int _mtinitlocks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi
  LPCRITICAL_SECTION *v2; // eax

  v0 = 0;
  v1 = (struct _RTL_CRITICAL_SECTION *)&unk_42F900;
  while ( 1 )
  {
    if ( dword_42C67C[2 * v0] == 1 )
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

// Address: 0x4131D0
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
  while ( (int)v0 < (int)&dword_42C798 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 != nullptr && v2[1] == (LPCRITICAL_SECTION)1 )
      DeleteCriticalSection(*v2);
    v2 += 2;
  }
  while ( (int)v2 < (int)&dword_42C798 );
}

// Address: 0x413227
void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(*(&lpCriticalSection + 2 * a1));
}

// Address: 0x41323E
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

// Address: 0x413301
void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 == nullptr && _mtinitlocknum(a1) == 0 )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}

// Address: 0x413334
char *__cdecl __sbh_find_block(int a1)
{
  char *result; // eax

  for ( result = (char *)lpMem; result < (char *)lpMem + 20 * dword_430044; result += 20 )
  {
    if ( (unsigned int)(a1 - *((_DWORD *)result + 3)) < 0x100000 )
      return result;
  }
  return nullptr;
}

// Address: 0x413364
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
      if ( dword_42FA50 != nullptr )
      {
        VirtualFree((LPVOID)(*((_DWORD *)dword_42FA50 + 3) + (dword_430058 << 15)), 0x8000u, 0x4000u);
        *((_DWORD *)dword_42FA50 + 2) |= 0x80000000 >> dword_430058;
        *(_DWORD *)(*((_DWORD *)dword_42FA50 + 4) + 4 * dword_430058 + 196) = 0;
        --*(_BYTE *)(*((_DWORD *)dword_42FA50 + 4) + 67);
        v20 = (LPVOID *)dword_42FA50;
        if ( *(_BYTE *)(*((_DWORD *)dword_42FA50 + 4) + 67) == 0 )
        {
          *((_DWORD *)dword_42FA50 + 1) &= ~1u;
          v20 = (LPVOID *)dword_42FA50;
        }
        if ( v20[2] == (LPVOID)-1 )
        {
          VirtualFree(v20[3], 0, 0x8000u);
          HeapFree(hHeap, 0, *((LPVOID *)dword_42FA50 + 4));
          memcpy_0(
            dword_42FA50,
            (char *)dword_42FA50 + 20,
            (size_t)lpMem + 20 * dword_430044 - (_DWORD)dword_42FA50 - 20);
          --dword_430044;
          if ( a1 > dword_42FA50 )
            a1 -= 5;
          dword_430050 = (int)lpMem;
        }
      }
      dword_42FA50 = a1;
      dword_430058 = v4;
      return a1;
    }
  }
  return result;
}

// Address: 0x41367A
char *__sbh_alloc_new_region()
{
  int v0; // esi
  void *v1; // eax
  char *v3; // esi
  LPVOID v4; // eax
  LPVOID v5; // eax

  v0 = dword_430044;
  if ( dword_430044 == dword_430054 )
  {
    v1 = HeapReAlloc(hHeap, 0, lpMem, 20 * (dword_430054 + 16));
    if ( v1 == nullptr )
      return nullptr;
    dword_430054 += 16;
    v0 = dword_430044;
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
  ++dword_430044;
  **((_DWORD **)v3 + 4) = -1;
  return v3;
}

// Address: 0x41372A
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

// Address: 0x413832
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

// Address: 0x413B13
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

  v1 = (char *)lpMem + 20 * dword_430044;
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
  for ( i = (char *)dword_430050; ; i += 20 )
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
      if ( (unsigned int)i >= dword_430050 || (v3 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1)) != 0 )
        break;
    }
    if ( i == (char *)dword_430050 )
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
          if ( (unsigned int)i >= dword_430050 || *((_DWORD *)i + 2) != 0 )
            break;
        }
        if ( i == (char *)dword_430050 )
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
  dword_430050 = (int)i;
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
  if ( v24 == 0 && i == dword_42FA50 && v31 == dword_430058 )
    dword_42FA50 = nullptr;
  *v6 = v31;
  return v23 + 1;
}

// Address: 0x413DF8
int __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  int result; // eax

  ++dword_42F250;
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

// Address: 0x413E41
__int64 __cdecl _ftelli64_nolock(FILE *Stream)
{
  int v1; // ebx
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 result; // rax
  int v5; // ebx
  int v6; // eax
  char *ptr; // ecx
  DWORD v8; // edi
  int flag; // edx
  __int64 v10; // rax
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // edi
  DWORD v14; // ebx
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // edx
  char *i; // edx
  int cnt; // edx
  unsigned int bufsiz; // edi
  char *base; // eax
  char *v21; // ecx
  bool v22; // zf
  int v23; // ecx
  DWORD v24; // [esp+Ch] [ebp-1020h]
  int *v25; // [esp+10h] [ebp-101Ch]
  int FileHandle; // [esp+14h] [ebp-1018h]
  __int64 Offset; // [esp+18h] [ebp-1014h]
  DWORD NumberOfBytesRead; // [esp+20h] [ebp-100Ch] BYREF
  char v29; // [esp+27h] [ebp-1005h]
  _BYTE Buffer[4096]; // [esp+28h] [ebp-1004h] BYREF

  v1 = _fileno(Stream);
  FileHandle = v1;
  if ( Stream->_cnt < 0 )
    Stream->_cnt = 0;
  v2 = _lseeki64(v1, 0, 1);
  v3 = v2;
  Offset = v2;
  if ( v2 < 0 )
    return -1;
  v25 = &dword_430080[v1 >> 5];
  v5 = (v1 & 0x1F) << 6;
  v6 = v5 + *v25;
  v22 = (Stream->_flag & 0x108) == 0;
  v29 = (char)(2 * *(_BYTE *)(v6 + 36)) >> 1;
  if ( v22 )
    return __PAIR64__(HIDWORD(Offset), v3) - Stream->_cnt;
  ptr = Stream->_ptr;
  v8 = Stream->_ptr - Stream->_base;
  flag = Stream->_flag;
  NumberOfBytesRead = v8;
  if ( (flag & 3) != 0 )
  {
    if ( v29 == 1 && *(_DWORD *)(v6 + 48) != 0 )
    {
      v24 = v8 >> 1;
      if ( Stream->_cnt == 0 )
        return Offset;
      v10 = _lseeki64(FileHandle, *(_QWORD *)(v6 + 40), 0);
      v11 = v10;
      v12 = v5 + *v25;
      v13 = HIDWORD(v10);
      if ( __PAIR64__(HIDWORD(v10), v11) == *(_QWORD *)(v12 + 40)
        && ReadFile(*(HANDLE *)v12, Buffer, 0x1000u, &NumberOfBytesRead, nullptr)
        && (((unsigned __int64)_lseeki64(FileHandle, Offset, 0) >> 32) & 0x80000000) == 0LL )
      {
        v14 = v24;
        if ( v24 <= NumberOfBytesRead )
        {
          v15 = Buffer;
          if ( v24 != 0 )
          {
            v16 = &Buffer[NumberOfBytesRead];
            do
            {
              --v14;
              if ( v15 >= v16 )
                break;
              if ( *v15 == 13 )
              {
                if ( v15 < v16 - 1 && v15[1] == 10 )
                  ++v15;
              }
              else
              {
                v15 += byte_42CFB0[*v15];
              }
              ++v15;
            }
            while ( v14 != 0 );
          }
          return __PAIR64__(v13, v11) + (unsigned int)(v15 - Buffer);
        }
      }
      return -1;
    }
    if ( *(char *)(v6 + 4) < 0 )
    {
      for ( i = Stream->_base; i < ptr; ++i )
      {
        if ( *i == 10 )
          ++NumberOfBytesRead;
      }
    }
  }
  else if ( (flag & 0x80u) == 0 )
  {
    *_errno() = 22;
    return -1;
  }
  HIDWORD(result) = HIDWORD(Offset) | Offset;
  if ( Offset == 0 )
  {
    LODWORD(result) = NumberOfBytesRead;
    return result;
  }
  if ( (Stream->_flag & 1) != 0 )
  {
    cnt = Stream->_cnt;
    if ( cnt != 0 )
    {
      bufsiz = cnt + ptr - Stream->_base;
      if ( *(char *)(v6 + 4) < 0 )
      {
        if ( _lseeki64(FileHandle, 0, 2) == Offset )
        {
          base = Stream->_base;
          v21 = &base[bufsiz];
          while ( base < v21 )
          {
            if ( *base == 10 )
              ++bufsiz;
            ++base;
          }
          v22 = (Stream->_flag & 0x2000) == 0;
        }
        else
        {
          if ( (((unsigned __int64)_lseeki64(FileHandle, Offset, 0) >> 32) & 0x80000000) != 0LL )
            return -1;
          if ( bufsiz > 0x200 || ((v23 = Stream->_flag) & 8) == 0 || (bufsiz = 512, (v23 & 0x400) != 0) )
            bufsiz = Stream->_bufsiz;
          v22 = (*(_BYTE *)(*v25 + v5 + 4) & 4) == 0;
        }
        if ( !v22 )
          ++bufsiz;
      }
      if ( v29 == 1 )
        bufsiz >>= 1;
      Offset -= bufsiz;
    }
    else
    {
      NumberOfBytesRead = 0;
    }
  }
  if ( v29 == 1 )
    NumberOfBytesRead >>= 1;
  return Offset + NumberOfBytesRead;
}

// Address: 0x41418D
__int64 __cdecl _ftelli64(FILE *Stream)
{
  __int64 v2; // [esp+10h] [ebp-20h]

  _lock_file(Stream);
  v2 = _ftelli64_nolock(Stream);
  _unlock_file(Stream);
  return v2;
}

// Address: 0x4141D7
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
  v4 = &dword_430080[FileHandle >> 5];
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

// Address: 0x41490A
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
    || (v4 = &dword_430080[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x4149E6
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
    || (v2 = &dword_430080[FileHandle >> 5], (*(_BYTE *)((v3 = (FileHandle & 0x1F) << 6) + *v2 + 4) & 1) == 0) )
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

// Address: 0x414AC7
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
      v6 = &unk_42C630;
    }
    else
    {
      v5 = &dword_430080[_fileno(File) >> 5];
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

// Address: 0x414BF2
int *__usercall write_string_0@<eax>(int *result@<eax>, _BYTE *a2@<ecx>, int a3@<edi>, int a4)
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

// Address: 0x414C3F
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
      v8 = &unk_42C630;
    else
      v8 = (_BYTE *)(dword_430080[v7 >> 5] + ((v7 & 0x1F) << 6));
    if ( (v8[36] & 0x7F) != 0 )
      goto LABEL_2;
    v9 = v7 == -1 || v7 == -2 ? (char *)&unk_42C630 : (char *)(dword_430080[v7 >> 5] + ((v7 & 0x1F) << 6));
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
      v12 = byte_422558[(char)v10] & 0xF;
    v13 = (unsigned __int8)byte_422578[9 * v12 + v65] >> 4;
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
                v74 = off_42C628;
                v24 = strlen(off_42C628);
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
          v31 = (void (__cdecl *)(__int64 *, char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_42CF98[0]);
          v31(&v54, v17, v49, v50, v52, v53, &Locale);
          v32 = v77 & 0x80;
          if ( (v77 & 0x80) != 0 && v75 == 0 )
          {
            v33 = (void (__cdecl *)(char *, __crt_locale_pointers *))_decode_pointer(off_42CFA4);
            v33(v17, &Locale);
          }
          if ( v76 == 103 && v32 == 0 )
          {
            v34 = (void (__cdecl *)(char *, __crt_locale_pointers *))_decode_pointer(off_42CFA0[0]);
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
              v74 = (char *)off_42C62C;
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
              v74 = off_42C628;
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
              write_string_0(&v71, v70, (int)File, v69);
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
                  write_string_0(&v71, v80, (int)v45, v55);
                  if ( v57 == 0 )
                    goto LABEL_213;
                }
                v71 = -1;
              }
              else
              {
                write_string_0(&v71, v74, (int)v45, SizeConverted);
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

// Address: 0x41580F
int __cdecl _fseeki64_nolock(FILE *Stream, __int64 Offset, int Origin)
{
  int flag; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax

  flag = Stream->_flag;
  if ( (flag & 0x83) != 0 && (v4 = Origin, (unsigned int)Origin <= 2) )
  {
    Stream->_flag = flag & 0xFFFFFFEF;
    if ( Origin == 1 )
    {
      Offset += _ftelli64_nolock(Stream);
      v4 = 0;
    }
    _flush(Stream);
    v5 = Stream->_flag;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( (v5 & 1) != 0 && (v5 & 8) != 0 && (v5 & 0x400) == 0 )
        Stream->_bufsiz = 512;
    }
    else
    {
      Stream->_flag = v5 & 0xFFFFFFFC;
    }
    v6 = _fileno(Stream);
    v7 = _lseeki64(v6, Offset, v4);
    if ( (HIDWORD(v7) & (unsigned int)v7) != 0xFFFFFFFF )
      return 0;
  }
  else
  {
    *_errno() = 22;
  }
  return -1;
}

// Address: 0x4158AB
int __cdecl _fseeki64(FILE *Stream, __int64 Offset, int Origin)
{
  int v4; // [esp+10h] [ebp-1Ch]

  _lock_file(Stream);
  v4 = _fseeki64_nolock(Stream, Offset, Origin);
  _unlock_file(Stream);
  return v4;
}

// Address: 0x4158FA
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

// Address: 0x41592B
// Microsoft VisualC 2-14/net runtime
_DWORD *__cdecl unknown_libname_6(int a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_4163F1();
  *result = a1;
  return result;
}

// Address: 0x41593C
// Microsoft VisualC 2-14/net runtime
_DWORD *__cdecl unknown_libname_7(int a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_4163F7();
  *result = a1;
  return result;
}

// Address: 0x41594D
// Microsoft VisualC 2-14/net runtime
_DWORD *__cdecl unknown_libname_8(int a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_4163FD();
  *result = a1;
  return result;
}

// Address: 0x41595E
void _tzset_nolock()
{
  const char *v0; // eax
  const char *v1; // esi
  size_t v2; // eax
  size_t v3; // eax
  LPSTR *v4; // edi
  const char *v5; // esi
  char v6; // al
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // esi
  int v11; // [esp+14h] [ebp-38h]
  unsigned int CodePage; // [esp+18h] [ebp-34h]
  BOOL UsedDefaultChar; // [esp+1Ch] [ebp-30h] BYREF
  int v14; // [esp+20h] [ebp-2Ch]
  int v15; // [esp+24h] [ebp-28h] BYREF
  int v16; // [esp+28h] [ebp-24h] BYREF
  LPSTR *v17; // [esp+2Ch] [ebp-20h]
  int v18; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v11 = 0;
  v14 = 0;
  v18 = 0;
  v16 = 0;
  v15 = 0;
  _lock(7);
  ms_exc.registration.TryLevel = 0;
  v17 = (LPSTR *)sub_416403();
  if ( sub_4163B8(&v18) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( sub_416346(&v16) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( sub_41637F(&v15) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  CodePage = ___lc_codepage_func();
  dword_42FB04 = 0;
  dword_42C7A4 = -1;
  dword_42C798 = -1;
  v0 = (const char *)_getenv_helper_nolock("TZ");
  v1 = v0;
  if ( v0 == nullptr || *v0 == 0 )
  {
    if ( dword_42FB08 != nullptr )
    {
      free(dword_42FB08);
      dword_42FB08 = nullptr;
    }
    if ( GetTimeZoneInformation(&TimeZoneInformation) != -1 )
    {
      dword_42FB04 = 1;
      v18 = 60 * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.StandardDate.wMonth != 0 )
        v18 = 60 * TimeZoneInformation.StandardBias + 60 * TimeZoneInformation.Bias;
      if ( TimeZoneInformation.DaylightDate.wMonth != 0 && TimeZoneInformation.DaylightBias != 0 )
      {
        v16 = 1;
        v15 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
      }
      else
      {
        v16 = 0;
        v15 = 0;
      }
      if ( WideCharToMultiByte(CodePage, 0, TimeZoneInformation.StandardName, -1, *v17, 63, nullptr, &UsedDefaultChar) == 0
        || UsedDefaultChar )
      {
        **v17 = 0;
      }
      else
      {
        (*v17)[63] = 0;
      }
      if ( WideCharToMultiByte(CodePage, 0, TimeZoneInformation.DaylightName, -1, v17[1], 63, nullptr, &UsedDefaultChar) == 0
        || UsedDefaultChar )
      {
        *v17[1] = 0;
      }
      else
      {
        v17[1][63] = 0;
      }
    }
    goto LABEL_33;
  }
  if ( dword_42FB08 != nullptr )
  {
    if ( strcmp(v0, dword_42FB08) == 0 )
    {
LABEL_33:
      v14 = 1;
      goto LABEL_34;
    }
    if ( dword_42FB08 != nullptr )
      free(dword_42FB08);
  }
  v2 = strlen(v1);
  dword_42FB08 = (char *)_malloc_crt(v2 + 1);
  if ( dword_42FB08 == nullptr )
    goto LABEL_33;
  v3 = strlen(v1);
  if ( strcpy_s(dword_42FB08, v3 + 1, v1) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
LABEL_34:
  unknown_libname_8(v18);
  unknown_libname_6(v16);
  unknown_libname_7(v15);
  ms_exc.registration.TryLevel = -2;
  _unlock(7);
  if ( v14 == 0 )
  {
    v4 = v17;
    if ( strncpy_s(*v17, 0x40u, v1, 3u) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v5 = v1 + 3;
    if ( *v5 == 45 )
    {
      v11 = 1;
      ++v5;
    }
    v18 = 3600 * atol(v5);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 != 43 && (v6 < 48 || v6 > 57) )
        break;
      ++v5;
    }
    if ( *v5 == 58 )
    {
      v7 = atol(++v5);
      v18 += 60 * v7;
      while ( *v5 >= 48 && *v5 <= 57 )
        ++v5;
      if ( *v5 == 58 )
      {
        v8 = atol(++v5);
        v18 += v8;
        while ( *v5 >= 48 && *v5 <= 57 )
          ++v5;
      }
    }
    if ( v11 != 0 )
      v18 = -v18;
    v16 = *v5;
    if ( v16 != 0 )
    {
      if ( strncpy_s(v4[1], 0x40u, v5, 3u) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
    else
    {
      *v4[1] = 0;
    }
    v9 = v18;
    *(_DWORD *)sub_4163FD() = v9;
    v10 = v16;
    *(_DWORD *)sub_4163F1() = v10;
  }
}

// Address: 0x415CA4
int __usercall cvtdate@<eax>(
        int a1@<eax>,
        int a2@<ecx>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edi
  int v13; // eax
  int v14; // esi
  int v15; // esi
  int v16; // edx
  int result; // eax
  int v18; // esi
  int v19; // esi
  int v20; // ecx
  int v21; // [esp+14h] [ebp-4h] BYREF
  int v22; // [esp+24h] [ebp+Ch]

  v21 = 0;
  v11 = a5;
  if ( a4 == 1 )
  {
    if ( (a5 % 4 != 0 || a5 % 100 == 0) && (a5 + 1900) % 400 != 0 )
    {
      v13 = 4 * a1;
      v14 = dword_42D0E4[a1];
    }
    else
    {
      v13 = 4 * a1;
      v14 = dword_42D0B0[a1];
    }
    v22 = v13;
    v15 = v14 + 1;
    v11 = a5;
    v16 = (365 * a5 + (a5 + 299) / 400 - (a5 - 1) / 100 + v15 + (a5 - 1) / 4 - 25563) % 7;
    result = a7 + 7 * a6 - v16;
    if ( v16 > a7 )
      v18 = result + v15;
    else
      v18 = v15 + result - 7;
    if ( a6 == 5 )
    {
      result = (a5 % 4 != 0 || a5 % 100 == 0) && (a5 + 1900) % 400 != 0
             ? *(int *)((char *)&dword_42D0E8 + v22)
             : *(int *)((char *)&dword_42D0B4 + v22);
      if ( v18 > result )
        v18 -= 7;
    }
  }
  else
  {
    if ( (a5 % 4 != 0 || (result = a5 / 100, a5 % 100 == 0)) && (result = (a5 + 1900) / 400, (a5 + 1900) % 400 != 0) )
      v19 = dword_42D0E4[a1];
    else
      v19 = dword_42D0B0[a1];
    v18 = a8 + v19;
  }
  v20 = a11 + 1000 * (a10 + 60 * (a9 + 60 * a2));
  if ( a3 == 1 )
  {
    dword_42C79C = v18;
    dword_42C7A0 = v20;
    dword_42C798 = v11;
  }
  else
  {
    dword_42C7A8 = v18;
    dword_42C7AC = v20;
    if ( sub_41637F(&v21) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    result = 1000 * v21;
    dword_42C7AC += 1000 * v21;
    if ( dword_42C7AC >= 0 )
    {
      result = 86400000;
      if ( dword_42C7AC >= 86400000 )
      {
        dword_42C7AC -= 86400000;
        ++dword_42C7A8;
      }
    }
    else
    {
      dword_42C7AC += 86400000;
      --dword_42C7A8;
    }
    dword_42C7A4 = v11;
  }
  return result;
}

// Address: 0x415E9B
BOOL __usercall _isindst_nolock@<eax>(_DWORD *a1@<edi>)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+8h] [ebp-8h]
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v10 = 0;
  if ( sub_416346(&v10) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( v10 == 0 )
    return false;
  v2 = a1[5];
  if ( v2 != dword_42C798 || v2 != dword_42C7A4 )
  {
    if ( dword_42FB04 != 0 )
    {
      if ( TimeZoneInformation.DaylightDate.wYear != 0 )
        cvtdate(
          TimeZoneInformation.DaylightDate.wMonth,
          TimeZoneInformation.DaylightDate.wHour,
          1,
          0,
          v2,
          0,
          0,
          TimeZoneInformation.DaylightDate.wDay,
          TimeZoneInformation.DaylightDate.wMinute,
          TimeZoneInformation.DaylightDate.wSecond,
          TimeZoneInformation.DaylightDate.wMilliseconds);
      else
        cvtdate(
          TimeZoneInformation.DaylightDate.wMonth,
          TimeZoneInformation.DaylightDate.wHour,
          1,
          1,
          v2,
          TimeZoneInformation.DaylightDate.wDay,
          TimeZoneInformation.DaylightDate.wDayOfWeek,
          0,
          TimeZoneInformation.DaylightDate.wMinute,
          TimeZoneInformation.DaylightDate.wSecond,
          TimeZoneInformation.DaylightDate.wMilliseconds);
      if ( TimeZoneInformation.StandardDate.wYear != 0 )
        cvtdate(
          TimeZoneInformation.StandardDate.wMonth,
          TimeZoneInformation.StandardDate.wHour,
          0,
          0,
          a1[5],
          0,
          0,
          TimeZoneInformation.StandardDate.wDay,
          TimeZoneInformation.StandardDate.wMinute,
          TimeZoneInformation.StandardDate.wSecond,
          TimeZoneInformation.StandardDate.wMilliseconds);
      else
        cvtdate(
          TimeZoneInformation.StandardDate.wMonth,
          TimeZoneInformation.StandardDate.wHour,
          0,
          1,
          a1[5],
          TimeZoneInformation.StandardDate.wDay,
          TimeZoneInformation.StandardDate.wDayOfWeek,
          0,
          TimeZoneInformation.StandardDate.wMinute,
          TimeZoneInformation.StandardDate.wSecond,
          TimeZoneInformation.StandardDate.wMilliseconds);
    }
    else
    {
      v3 = 3;
      v4 = 2;
      v8 = 11;
      v9 = 1;
      if ( v2 < 107 )
      {
        v3 = 4;
        v4 = 1;
        v8 = 10;
        v9 = 5;
      }
      cvtdate(v3, 2, 1, 1, v2, v4, 0, 0, 0, 0, 0);
      cvtdate(v8, 2, 0, 1, a1[5], v9, 0, 0, 0, 0, 0);
    }
  }
  v5 = a1[7];
  if ( dword_42C79C < dword_42C7A8 )
  {
    if ( v5 >= dword_42C79C && v5 <= dword_42C7A8 )
    {
      if ( v5 > dword_42C79C && v5 < dword_42C7A8 )
        return true;
      goto LABEL_30;
    }
    return false;
  }
  if ( v5 < dword_42C7A8 || v5 > dword_42C79C )
    return true;
  if ( v5 > dword_42C7A8 && v5 < dword_42C79C )
    return false;
LABEL_30:
  v6 = 1000 * (*a1 + 60 * (a1[1] + 60 * a1[2]));
  if ( v5 == dword_42C79C )
    return v6 >= dword_42C7A0;
  else
    return v6 < dword_42C7AC;
}

// Address: 0x416073
void __tzset()
{
  if ( dword_42FB0C == 0 )
  {
    _lock(6);
    if ( dword_42FB0C == 0 )
    {
      _tzset_nolock();
      ++dword_42FB0C;
    }
    _unlock(6);
  }
}

// Address: 0x4160C2
BOOL __cdecl _isindst(_DWORD *a1)
{
  BOOL v2; // [esp+10h] [ebp-1Ch]

  _lock(6);
  v2 = _isindst_nolock(a1);
  _unlock(6);
  return v2;
}

// Address: 0x416103
errno_t __cdecl _gmtime64_s(struct tm *Tm, const __time64_t *Time)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // et0
  int v10; // et0
  unsigned int v11; // edi
  unsigned int v12; // et0
  int *v13; // edx
  int tm_yday; // eax
  int i; // ecx
  int v16; // ecx
  signed __int64 v17; // kr30_8
  int v18; // [esp+Ch] [ebp-Ch]
  unsigned int v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]
  int Tma; // [esp+20h] [ebp+8h]

  v21 = 0;
  if ( Tm == nullptr || (memset(Tm, 255, sizeof(struct tm)), Time == nullptr) )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  v4 = *(_DWORD *)Time;
  v5 = *((_DWORD *)Time + 1);
  if ( *Time < -43200 || __SPAIR64__(v5, v4) > 0x7934126CFLL )
  {
    *_errno() = 22;
    return 22;
  }
  v6 = __SPAIR64__(v5, v4) / 31536000;
  v20 = v6 + 69;
  Tma = v6 + 70;
  v7 = 86400 * (-365 * v6 - (((int)v6 + 369) / 400 - ((int)v6 + 69) / 100 + ((int)v6 + 69) / 4 - 17)) + *(_DWORD *)Time;
  v18 = (unsigned __int64)(86400
                         * (-365LL * (int)v6 - (((int)v6 + 369) / 400 - ((int)v6 + 69) / 100 + ((int)v6 + 69) / 4 - 17))
                         + *Time) >> 32;
  if ( v18 >= 0 )
  {
    if ( (Tma % 4 != 0 || Tma % 100 == 0) && ((int)v6 + 1970) % 400 != 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v8 = v6 + 69;
  v9 = (__PAIR64__(v18, v7) + 31536000) >> 32;
  v7 += 31536000;
  v18 = v9;
  Tma = v20;
  if ( v20 % 4 == 0 )
  {
    if ( v20 % 100 != 0 )
    {
LABEL_13:
      v10 = (__PAIR64__(v18, v7) + 86400) >> 32;
      v7 += 86400;
      v18 = v10;
LABEL_17:
      v21 = 1;
      goto LABEL_18;
    }
    v8 = v20;
  }
  if ( (v8 + 1900) % 400 == 0 )
    goto LABEL_13;
LABEL_18:
  Tm->tm_year = Tma;
  Tm->tm_yday = __SPAIR64__(v18, v7) / 86400;
  v12 = (-86400LL * (int)(__SPAIR64__(v18, v7) / 86400) + __PAIR64__(v18, v7)) >> 32;
  v11 = __SPAIR64__(v18, v7) % 86400;
  v19 = v12;
  v13 = &dword_42D0B4;
  if ( v21 == 0 )
    v13 = &dword_42D0E8;
  tm_yday = Tm->tm_yday;
  for ( i = 1; v13[i] < tm_yday; ++i )
    ;
  v16 = i - 1;
  Tm->tm_mon = v16;
  Tm->tm_mday = tm_yday - v13[v16];
  Tm->tm_wday = (int)(*Time / 86400 + 4) % 7;
  Tm->tm_hour = __SPAIR64__(v19, v11) / 3600;
  v17 = -3600LL * (int)(__SPAIR64__(v19, v11) / 3600) + __PAIR64__(v19, v11);
  Tm->tm_min = v17 / 60;
  Tm->tm_isdst = 0;
  Tm->tm_sec = v17 % 60;
  return 0;
}

// Address: 0x416346
int __cdecl sub_416346(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_42C7B4;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x41637F
int __cdecl sub_41637F(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_42C7B8;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x4163B8
int __cdecl sub_4163B8(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_42C7B0;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x4163F1
int *sub_4163F1()
{
  return &dword_42C7B4;
}

// Address: 0x4163F7
int *sub_4163F7()
{
  return &dword_42C7B8;
}

// Address: 0x4163FD
int *sub_4163FD()
{
  return &dword_42C7B0;
}

// Address: 0x416403
_UNKNOWN **sub_416403()
{
  return &off_42C840;
}

// Address: 0x416410
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

// Address: 0x4164C0
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

// Address: 0x416572
DWORD __getgmtimebuf()
{
  DWORD *v0; // eax
  DWORD *v1; // esi
  void *v3; // eax

  v0 = _getptd_noexit();
  v1 = v0;
  if ( v0 != nullptr )
  {
    if ( v0[17] != 0 )
      return v1[17];
    v3 = _malloc_crt(0x24u);
    v1[17] = (DWORD)v3;
    if ( v3 != nullptr )
      return v1[17];
  }
  *_errno() = 12;
  return 0;
}

// Address: 0x4165A9
DWORD __cdecl _lseek_nolock(int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  void *osfhandle; // eax
  DWORD v5; // edi
  DWORD LastError; // eax
  _BYTE *v7; // eax

  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( osfhandle == (void *)-1 )
  {
    *_errno() = 9;
    return -1;
  }
  else
  {
    v5 = SetFilePointer(osfhandle, lDistanceToMove, nullptr, dwMoveMethod);
    if ( v5 == -1 )
      LastError = GetLastError();
    else
      LastError = 0;
    if ( LastError != 0 )
    {
      _dosmaperr(LastError);
      return -1;
    }
    else
    {
      v7 = (_BYTE *)(dword_430080[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
      *v7 &= ~2u;
      return v5;
    }
  }
}

// Address: 0x41661E
int __cdecl _lseek(int FileHandle, int Offset, int Origin)
{
  int *v4; // ebx
  int v5; // esi
  DWORD v6; // [esp+14h] [ebp-1Ch]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= uNumber
    || (v4 = &dword_430080[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  __lock_fhandle(FileHandle);
  if ( (*(_BYTE *)(*v4 + v5 + 4) & 1) != 0 )
  {
    v6 = _lseek_nolock(FileHandle, Offset, Origin);
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

// Address: 0x4166FA
int __cdecl _ftell_nolock(FILE *Stream)
{
  int v3; // eax
  int v4; // eax
  int flag; // edx
  char *ptr; // eax
  char *base; // ecx
  char *v8; // edx
  int cnt; // edx
  int *v10; // ebx
  int v11; // esi
  char *v12; // eax
  char *v13; // ecx
  bool v14; // zf
  int bufsiz; // eax
  int v16; // ecx
  char *v17; // [esp+8h] [ebp-Ch]
  int Offset; // [esp+Ch] [ebp-8h]
  int FileHandle; // [esp+10h] [ebp-4h]
  int Streama; // [esp+1Ch] [ebp+8h]

  if ( Stream == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  v3 = _fileno(Stream);
  FileHandle = v3;
  if ( Stream->_cnt < 0 )
    Stream->_cnt = 0;
  v4 = _lseek(v3, 0, 1);
  Offset = v4;
  if ( v4 < 0 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 0x108) == 0 )
    return v4 - Stream->_cnt;
  ptr = Stream->_ptr;
  base = Stream->_base;
  v17 = (char *)(Stream->_ptr - base);
  if ( (flag & 3) != 0 )
  {
    if ( *(char *)(dword_430080[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) < 0 )
    {
      v8 = Stream->_base;
      if ( base < ptr )
      {
        do
        {
          if ( *v8 == 10 )
            ++v17;
          ++v8;
        }
        while ( v8 < ptr );
      }
    }
  }
  else if ( (flag & 0x80u) == 0 )
  {
    *_errno() = 22;
    return -1;
  }
  if ( Offset == 0 )
    return (int)v17;
  if ( (Stream->_flag & 1) == 0 )
    return (int)&v17[Offset];
  cnt = Stream->_cnt;
  if ( cnt != 0 )
  {
    v10 = &dword_430080[FileHandle >> 5];
    Streama = cnt + ptr - base;
    v11 = (FileHandle & 0x1F) << 6;
    if ( *(char *)(*v10 + v11 + 4) >= 0 )
    {
LABEL_39:
      Offset -= Streama;
      return (int)&v17[Offset];
    }
    if ( _lseek(FileHandle, 0, 2) == Offset )
    {
      v12 = Stream->_base;
      v13 = &v12[Streama];
      while ( v12 < v13 )
      {
        if ( *v12 == 10 )
          ++Streama;
        ++v12;
      }
      v14 = (Stream->_flag & 0x2000) == 0;
LABEL_37:
      if ( !v14 )
        ++Streama;
      goto LABEL_39;
    }
    if ( _lseek(FileHandle, Offset, 0) >= 0 )
    {
      bufsiz = 512;
      if ( (unsigned int)Streama > 0x200 || ((v16 = Stream->_flag) & 8) == 0 || (v16 & 0x400) != 0 )
        bufsiz = Stream->_bufsiz;
      Streama = bufsiz;
      v14 = (*(_BYTE *)(*v10 + v11 + 4) & 4) == 0;
      goto LABEL_37;
    }
    return -1;
  }
  v17 = nullptr;
  return (int)&v17[Offset];
}

// Address: 0x416897
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

// Address: 0x4168EA
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype_l(nullptr, Ch, 0, 4u);
}

// Address: 0x416902
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

// Address: 0x4169B7
int __cdecl _close_nolock(int FileHandle)
{
  intptr_t osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 && (*(_BYTE *)(dword_430080[0] + 132) & 1) != 0
     || FileHandle == 2 && (*(_BYTE *)(dword_430080[0] + 68) & 1) != 0)
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
  *(_BYTE *)(dword_430080[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) = 0;
  if ( LastError == 0 )
    return 0;
  _dosmaperr(LastError);
  return -1;
}

// Address: 0x416A53
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
    || (v2 = &dword_430080[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v2 + v3 + 4) & 1) == 0) )
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

// Address: 0x416B20
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

// Address: 0x416B88
LONG __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax
  ULONG_PTR v2; // eax

  ExceptionRecord = ExceptionInfo->ExceptionRecord;
  if ( ExceptionInfo->ExceptionRecord->ExceptionCode == -529697949 && ExceptionRecord->NumberParameters == 3 )
  {
    v2 = ExceptionRecord->ExceptionInformation[0];
    if ( v2 == 429065504 || v2 == 429065505 || v2 == 429065506 || v2 == 26820608 )
      terminate();
  }
  return 0;
}

// Address: 0x416BCA
int sub_416BCA()
{
  SetUnhandledExceptionFilter(__CxxUnhandledExceptionFilter);
  return 0;
}

// Address: 0x416BD8
void nullsub_1()
{
  ;
}

// Address: 0x416BD9
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
    while ( v5 < &v4[3 * dword_42C85C] );
    if ( v5 < &v4[3 * dword_42C85C] && *v5 == a1 )
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
            v9 = dword_42C850;
            if ( dword_42C850 < dword_42C850 + dword_42C854 )
            {
              v10 = 12 * dword_42C850;
              do
              {
                *(_DWORD *)(v10 + v3[23] + 8) = 0;
                ++v9;
                v10 += 12;
              }
              while ( v9 < dword_42C850 + dword_42C854 );
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

// Address: 0x416D39
int _wsetenvp()
{
  wchar_t *v0; // esi
  int v1; // edi
  wchar_t **v3; // ebx
  wchar_t *i; // esi
  size_t v5; // eax
  rsize_t v6; // edi
  wchar_t *v7; // eax

  v0 = String;
  v1 = 0;
  if ( String == nullptr )
    return -1;
  while ( *v0 != 0 )
  {
    if ( *v0 != 61 )
      ++v1;
    v0 += wcslen(v0) + 1;
  }
  v3 = (wchar_t **)_calloc_crt(v1 + 1, 4);
  dword_42F5B8 = v3;
  if ( v3 == nullptr )
    return -1;
  for ( i = String; ; i += v6 )
  {
    if ( *i == 0 )
    {
      free(String);
      String = nullptr;
      *v3 = nullptr;
      dword_430180 = 1;
      return 0;
    }
    v5 = wcslen(i);
    v6 = v5 + 1;
    if ( *i != 61 )
      break;
LABEL_15:
    ;
  }
  v7 = (wchar_t *)_calloc_crt(v5 + 1, 2);
  *v3 = v7;
  if ( v7 != nullptr )
  {
    if ( wcscpy_s(v7, v6, i) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    ++v3;
    goto LABEL_15;
  }
  free(dword_42F5B8);
  dword_42F5B8 = nullptr;
  return -1;
}

// Address: 0x416E17
__int16 **__usercall wparse_cmdline@<eax>(
        __int16 *a1@<eax>,
        __int16 *a2@<ecx>,
        _DWORD *a3@<ebx>,
        __int16 **a4,
        _DWORD *a5)
{
  BOOL v5; // edx
  _DWORD *v6; // edi
  __int16 **v8; // ecx
  __int16 v9; // cx
  __int16 **v10; // ecx
  int v11; // edi
  unsigned int v12; // edx
  __int16 v13; // cx
  __int16 **result; // eax
  BOOL v15; // [esp+8h] [ebp-4h]

  v5 = false;
  v6 = a5;
  *a3 = 0;
  *a5 = 1;
  if ( a4 != nullptr )
  {
    v8 = a4++;
    *v8 = a2;
  }
  do
  {
    if ( *a1 == 34 )
    {
      v6 = a5;
      ++a1;
      v5 = !v5;
      v9 = 34;
    }
    else
    {
      ++*a3;
      if ( a2 != nullptr )
        *a2++ = *a1;
      v9 = *a1++;
      if ( v9 == 0 )
      {
        --a1;
        goto LABEL_13;
      }
    }
  }
  while ( v5 || v9 != 32 && v9 != 9 );
  if ( a2 != nullptr )
    *(a2 - 1) = 0;
LABEL_13:
  v15 = false;
  while ( *a1 != 0 )
  {
    while ( *a1 == 32 || *a1 == 9 )
      ++a1;
    if ( *a1 == 0 )
      break;
    if ( a4 != nullptr )
    {
      v10 = a4++;
      *v10 = a2;
    }
    ++*v6;
    while ( 1 )
    {
      v11 = 1;
      v12 = 0;
      while ( *a1 == 92 )
      {
        ++a1;
        ++v12;
      }
      if ( *a1 == 34 )
      {
        if ( (v12 & 1) == 0 )
        {
          if ( v15 && a1[1] == 34 )
          {
            ++a1;
          }
          else
          {
            v11 = 0;
            v15 = !v15;
          }
        }
        v12 >>= 1;
      }
      while ( v12 != 0 )
      {
        --v12;
        if ( a2 != nullptr )
          *a2++ = 92;
        ++*a3;
      }
      v13 = *a1;
      if ( *a1 == 0 || !v15 && (v13 == 32 || v13 == 9) )
        break;
      if ( v11 != 0 )
      {
        if ( a2 != nullptr )
          *a2++ = v13;
        ++*a3;
      }
      ++a1;
    }
    if ( a2 != nullptr )
      *a2++ = 0;
    ++*a3;
    v6 = a5;
  }
  result = a4;
  if ( a4 != nullptr )
    *a4 = nullptr;
  ++*v6;
  return result;
}

// Address: 0x416F69
int _wsetargv()
{
  __int16 *v0; // edi
  unsigned int v1; // ebx
  size_t v2; // eax
  __int16 **v3; // eax
  int v4; // esi
  unsigned int v6; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v7; // [esp+10h] [ebp-4h] BYREF

  word_42FD18 = 0;
  GetModuleFileNameW(nullptr, &word_42FB10, 0x104u);
  dword_42F5C4 = (int)&word_42FB10;
  if ( dword_4311A4 == 0 || (v0 = (__int16 *)dword_4311A4, *(_WORD *)dword_4311A4 == 0) )
    v0 = (__int16 *)&word_42FB10;
  wparse_cmdline(v0, nullptr, &v6, nullptr, &v7);
  v1 = v7;
  if ( v7 >= 0x3FFFFFFF )
    return -1;
  if ( v6 >= 0x7FFFFFFF )
    return -1;
  v2 = 2 * (v6 + 2 * v7);
  if ( v2 < 2 * v6 )
    return -1;
  v3 = (__int16 **)_malloc_crt(v2);
  v4 = (int)v3;
  if ( v3 == nullptr )
    return -1;
  wparse_cmdline(v0, (__int16 *)&v3[v1], &v6, v3, &v7);
  dword_42F5A4 = v7 - 1;
  dword_42F5AC = v4;
  return 0;
}

// Address: 0x417017
void *__crtGetEnvironmentStringsW()
{
  LPWCH EnvironmentStringsW; // eax
  LPWCH v1; // esi
  size_t v3; // ebx
  void *v4; // eax
  void *v5; // edi

  EnvironmentStringsW = GetEnvironmentStringsW();
  v1 = EnvironmentStringsW;
  if ( EnvironmentStringsW == nullptr )
    return nullptr;
  for ( ; *EnvironmentStringsW != 0; ++EnvironmentStringsW )
  {
    do
      ++EnvironmentStringsW;
    while ( *EnvironmentStringsW != 0 );
  }
  v3 = (char *)EnvironmentStringsW - (char *)v1 + 2;
  v4 = _malloc_crt(v3);
  v5 = v4;
  if ( v4 != nullptr )
    memcpy(v4, v1, v3);
  FreeEnvironmentStringsW(v1);
  return v5;
}

// Address: 0x41706E
// attributes: thunk
LPWSTR __stdcall GetCommandLineW()
{
  return __imp_GetCommandLineW();
}

// Address: 0x417074
void *sub_417074()
{
  return &unk_4299C0;
}

// Address: 0x41709A
void __cdecl sub_41709A()
{
  ;
}

// Address: 0x4170C0
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
    dword_42C3D0 = ~v4;
  }
  else
  {
    dword_42C3D0 = ~__security_cookie;
  }
}

// Address: 0x417156
void __cdecl __noreturn terminate()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[30];
  if ( v0 != nullptr )
    v0();
  abort();
}

// Address: 0x41718F
void __cdecl __noreturn unexpected()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_getptd()[31];
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x4171A2
void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer((void *)dword_42FD1C);
  if ( v0 != nullptr )
    v0();
  terminate();
}

// Address: 0x4171DA
PVOID _initp_eh_hooks()
{
  PVOID result; // eax

  result = _encode_pointer(terminate);
  dword_42FD1C = (int)result;
  return result;
}

// Address: 0x4171F0
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

// Address: 0x41723C
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

// Address: 0x417293
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

// Address: 0x417322
int has_osfxsr_set()
{
  return 1;
}

// Address: 0x417372
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

// Address: 0x4173D4
int sub_4173D4()
{
  dword_430040 = _get_sse2_info();
  return 0;
}

// Address: 0x4173E1
int __cdecl _fcloseall()
{
  int i; // edi
  int v1; // esi
  int *v2; // eax
  int v3; // eax
  int v5; // [esp+14h] [ebp-1Ch]

  v5 = 0;
  _lock(1);
  for ( i = 3; i < dword_4311A0; ++i )
  {
    v1 = 4 * i;
    v2 = (int *)((char *)dword_43019C + 4 * i);
    if ( *v2 != 0 )
    {
      v3 = *v2;
      if ( (*(_BYTE *)(v3 + 12) & 0x83) != 0 && fclose((FILE *)v3) != -1 )
        ++v5;
      if ( i >= 20 )
      {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_43019C + v1) + 32));
        free(*(void **)((char *)dword_43019C + v1));
        *(_DWORD *)((char *)dword_43019C + v1) = 0;
      }
    }
  }
  _unlock(1);
  return v5;
}

// Address: 0x417480
int __cdecl _initp_misc_winsig(int a1)
{
  dword_42FD20 = a1;
  dword_42FD24 = a1;
  dword_42FD28 = a1;
  dword_42FD2C = a1;
  return a1;
}

// Address: 0x41749E
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
  while ( result < a2 + 12 * dword_42C85C );
  if ( result >= a2 + 12 * dword_42C85C || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}

// Address: 0x4174D5
PVOID sub_4174D5()
{
  return _decode_pointer((void *)dword_42FD28);
}

// Address: 0x4174E2
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
      v4 = &dword_42FD2C;
      v5 = (void *)dword_42FD2C;
      goto LABEL_18;
    }
    if ( Signal == 21 )
    {
      v4 = &dword_42FD24;
      v5 = (void *)dword_42FD24;
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
      v4 = &dword_42FD20;
      v5 = (void *)dword_42FD20;
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
      v4 = &dword_42FD28;
      v5 = (void *)dword_42FD28;
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
    for ( i = dword_42C850; i < dword_42C850 + dword_42C854; ++i )
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

// Address: 0x417692
int __usercall _get_lc_time@<eax>(int a1@<eax>, int a2@<esi>)
{
  LCID v2; // ecx
  LCID v3; // edx
  int result; // eax
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
  int v44; // edi
  int v45; // edi
  int v46; // edi
  int v47; // edi
  LCID v48; // ebx
  _DWORD v49[2]; // [esp+0h] [ebp-10h] BYREF
  LCID v50; // [esp+8h] [ebp-8h]
  LCID v51; // [esp+Ch] [ebp-4h]

  v2 = *(unsigned __int16 *)(a1 + 66);
  v3 = *(unsigned __int16 *)(a1 + 68);
  v51 = v2;
  v50 = v3;
  if ( a2 == 0 )
    return -1;
  v49[1] = 0;
  v49[0] = a1;
  v5 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v2, 0x31u, (char **)(a2 + 4));
  v6 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x32u, (char **)(a2 + 8)) | v5;
  v7 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x33u, (char **)(a2 + 12)) | v6;
  v8 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x34u, (char **)(a2 + 16)) | v7;
  v9 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x35u, (char **)(a2 + 20)) | v8;
  v10 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x36u, (char **)(a2 + 24)) | v9;
  v11 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x37u, (char **)a2) | v10;
  v12 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Au, (char **)(a2 + 32)) | v11;
  v13 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Bu, (char **)(a2 + 36)) | v12;
  v14 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Cu, (char **)(a2 + 40)) | v13;
  v15 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Du, (char **)(a2 + 44)) | v14;
  v16 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Eu, (char **)(a2 + 48)) | v15;
  v17 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x2Fu, (char **)(a2 + 52)) | v16;
  v18 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x30u, (char **)(a2 + 28)) | v17;
  v19 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x44u, (char **)(a2 + 56)) | v18;
  v20 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x45u, (char **)(a2 + 60)) | v19;
  v21 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x46u, (char **)(a2 + 64)) | v20;
  v22 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x47u, (char **)(a2 + 68)) | v21;
  v23 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x48u, (char **)(a2 + 72)) | v22;
  v24 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x49u, (char **)(a2 + 76)) | v23;
  v25 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Au, (char **)(a2 + 80)) | v24;
  v26 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Bu, (char **)(a2 + 84)) | v25;
  v27 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Cu, (char **)(a2 + 88)) | v26;
  v28 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Du, (char **)(a2 + 92)) | v27;
  v29 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Eu, (char **)(a2 + 96)) | v28;
  v30 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x4Fu, (char **)(a2 + 100)) | v29;
  v31 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x38u, (char **)(a2 + 104)) | v30;
  v32 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x39u, (char **)(a2 + 108)) | v31;
  v33 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Au, (char **)(a2 + 112)) | v32;
  v34 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Bu, (char **)(a2 + 116)) | v33;
  v35 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Cu, (char **)(a2 + 120)) | v34;
  v36 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Du, (char **)(a2 + 124)) | v35;
  v37 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Eu, (char **)(a2 + 128)) | v36;
  v38 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x3Fu, (char **)(a2 + 132)) | v37;
  v39 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x40u, (char **)(a2 + 136)) | v38;
  v40 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x41u, (char **)(a2 + 140)) | v39;
  v41 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x42u, (char **)(a2 + 144)) | v40;
  v42 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x43u, (char **)(a2 + 148)) | v41;
  v43 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x28u, (char **)(a2 + 152)) | v42;
  v44 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v51, 0x29u, (char **)(a2 + 156)) | v43;
  v45 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v50, 0x1Fu, (char **)(a2 + 160)) | v44;
  v46 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v50, 0x20u, (char **)(a2 + 164)) | v45;
  v47 = __getlocaleinfo((struct localeinfo_struct *)v49, 1, v50, 0x1003u, (char **)(a2 + 168)) | v46;
  v48 = v50;
  result = __getlocaleinfo((struct localeinfo_struct *)v49, 0, v50, 0x1009u, (char **)(a2 + 176)) | v47;
  *(_DWORD *)(a2 + 172) = v48;
  return result;
}

// Address: 0x417AAD
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

// Address: 0x417C42
int __cdecl __init_time(int a1)
{
  void **v1; // esi
  int v3; // edi

  if ( *(_DWORD *)(a1 + 32) != 0 )
  {
    v1 = (void **)_calloc_crt(1u, 184);
    if ( v1 == nullptr )
      return 1;
    if ( _get_lc_time(a1, (int)v1) != 0 )
    {
      __free_lc_time(v1);
      free(v1);
      return 1;
    }
    v1[45] = (void *)1;
  }
  else
  {
    v1 = (void **)&off_42C950;
  }
  v3 = a1 + 212;
  if ( *(_UNKNOWN ***)(a1 + 212) != &off_42C950 )
    InterlockedDecrement((volatile LONG *)(*(_DWORD *)v3 + 180));
  *(_DWORD *)v3 = v1;
  return 0;
}

// Address: 0x417CBB
void __cdecl __free_lconv_num(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)a1 != off_42CA10 )
      free(*(void **)a1);
    if ( *(_UNKNOWN **)(a1 + 4) != off_42CA14 )
      free(*(void **)(a1 + 4));
    v1 = *(void **)(a1 + 8);
    if ( v1 != off_42CA18 )
      free(v1);
  }
}

// Address: 0x417D00
int __cdecl __init_numeric(unsigned __int16 *Block)
{
  char **v2; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // esi
  LCID v7; // edi
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  char v11; // cl
  char *v12; // esi
  _DWORD v13[2]; // [esp+Ch] [ebp-18h] BYREF
  char **v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch]
  void *v16; // [esp+1Ch] [ebp-8h]
  _DWORD *v17; // [esp+20h] [ebp-4h]
  char **Blocka; // [esp+2Ch] [ebp+8h]

  v13[0] = Block;
  v13[1] = 0;
  if ( *((_DWORD *)Block + 7) != 0 || *((_DWORD *)Block + 6) != 0 )
  {
    v2 = (char **)_calloc_crt(1u, 48);
    Blocka = v2;
    if ( v2 == nullptr )
      return 1;
    qmemcpy(v2, *((const void **)Block + 47), 0x30u);
    v4 = _malloc_crt(4u);
    v16 = v4;
    if ( v4 == nullptr )
    {
      free(Blocka);
      return 1;
    }
    *v4 = 0;
    if ( *((_DWORD *)Block + 7) == 0 )
    {
      *Blocka = (char *)off_42CA10;
      Blocka[1] = (char *)off_42CA14;
      v17 = nullptr;
      Blocka[2] = (char *)off_42CA18;
LABEL_26:
      *(_DWORD *)v16 = 1;
      if ( v17 != nullptr )
        *v17 = 1;
      goto LABEL_28;
    }
    v5 = _malloc_crt(4u);
    v17 = v5;
    if ( v5 == nullptr )
    {
      v6 = 1;
LABEL_11:
      free(Blocka);
      free(v16);
      return v6;
    }
    *v5 = 0;
    v7 = Block[31];
    v15 = __getlocaleinfo((struct localeinfo_struct *)v13, 1, v7, 0xEu, Blocka);
    v8 = __getlocaleinfo((struct localeinfo_struct *)v13, 1, v7, 0xFu, Blocka + 1);
    v15 |= v8;
    v14 = Blocka + 2;
    v9 = __getlocaleinfo((struct localeinfo_struct *)v13, 1, v7, 0x10u, Blocka + 2);
    if ( (v15 | v9) != 0 )
    {
      __free_lconv_num((int)Blocka);
      v6 = -1;
      goto LABEL_11;
    }
    v10 = *v14;
    while ( 1 )
    {
      if ( *v10 == 0 )
        goto LABEL_26;
      v11 = *v10;
      if ( *v10 >= 48 && v11 <= 57 )
        break;
      if ( v11 == 59 )
      {
        v12 = v10;
        do
        {
          *v12 = v12[1];
          ++v12;
        }
        while ( *v12 != 0 );
      }
      else
      {
LABEL_18:
        ++v10;
      }
    }
    *v10 = v11 - 48;
    goto LABEL_18;
  }
  v17 = nullptr;
  v16 = nullptr;
  Blocka = (char **)&off_42CA10;
LABEL_28:
  if ( *((_DWORD *)Block + 45) != 0 )
    InterlockedDecrement(*((volatile LONG **)Block + 45));
  if ( *((_DWORD *)Block + 44) != 0 && InterlockedDecrement(*((volatile LONG **)Block + 44)) == 0 )
  {
    free(*((void **)Block + 44));
    free(*((void **)Block + 47));
  }
  *((_DWORD *)Block + 45) = v17;
  *((_DWORD *)Block + 44) = v16;
  *((_DWORD *)Block + 47) = Blocka;
  return 0;
}

// Address: 0x417ECA
void __cdecl __free_lconv_mon(int a1)
{
  void *v1; // esi

  if ( a1 != 0 )
  {
    if ( *(_UNKNOWN **)(a1 + 12) != off_42CA1C )
      free(*(void **)(a1 + 12));
    if ( *(_UNKNOWN **)(a1 + 16) != off_42CA20 )
      free(*(void **)(a1 + 16));
    if ( *(_UNKNOWN **)(a1 + 20) != off_42CA24 )
      free(*(void **)(a1 + 20));
    if ( *(_UNKNOWN **)(a1 + 24) != off_42CA28 )
      free(*(void **)(a1 + 24));
    if ( *(_UNKNOWN **)(a1 + 28) != off_42CA2C )
      free(*(void **)(a1 + 28));
    if ( *(_UNKNOWN **)(a1 + 32) != off_42CA30 )
      free(*(void **)(a1 + 32));
    v1 = *(void **)(a1 + 36);
    if ( v1 != off_42CA34 )
      free(v1);
  }
}

// Address: 0x417F58
int __cdecl __init_monetary(int a1)
{
  int v1; // esi
  char **v2; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  LCID v6; // esi
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
  char *v21; // eax
  char v22; // cl
  char *v23; // esi
  _DWORD *v24; // ecx
  _DWORD v25[2]; // [esp+Ch] [ebp-10h] BYREF
  void *Block; // [esp+14h] [ebp-8h]
  void *v27; // [esp+18h] [ebp-4h]

  v1 = a1;
  v27 = nullptr;
  v25[0] = a1;
  v25[1] = 0;
  if ( *(_DWORD *)(a1 + 24) != 0 || *(_DWORD *)(a1 + 28) != 0 )
  {
    v2 = (char **)_calloc_crt(1u, 48);
    if ( v2 == nullptr )
      return 1;
    v4 = _malloc_crt(4u);
    Block = v4;
    if ( v4 == nullptr )
    {
      free(v2);
      return 1;
    }
    *v4 = 0;
    if ( *(_DWORD *)(a1 + 24) == 0 )
    {
      qmemcpy(v2, &off_42CA10, 48);
LABEL_25:
      v1 = a1;
      *v2 = **(char ***)(a1 + 188);
      v2[1] = *(char **)(*(_DWORD *)(a1 + 188) + 4);
      v24 = Block;
      v2[2] = *(char **)(*(_DWORD *)(a1 + 188) + 8);
      *v24 = 1;
      if ( v27 != nullptr )
        *(_DWORD *)v27 = 1;
      goto LABEL_27;
    }
    v5 = _malloc_crt(4u);
    v27 = v5;
    if ( v5 == nullptr )
    {
      free(v2);
      free(Block);
      return 1;
    }
    *v5 = 0;
    v6 = *(unsigned __int16 *)(a1 + 56);
    v7 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x15u, v2 + 3);
    v8 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x14u, v2 + 4) | v7;
    v9 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x16u, v2 + 5) | v8;
    v10 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x17u, v2 + 6) | v9;
    v11 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x18u, v2 + 7) | v10;
    v12 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x50u, v2 + 8) | v11;
    v13 = __getlocaleinfo((struct localeinfo_struct *)v25, 1, v6, 0x51u, v2 + 9) | v12;
    v14 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x1Au, v2 + 10) | v13;
    v15 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x19u, (char **)((char *)v2 + 41)) | v14;
    v16 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x54u, (char **)((char *)v2 + 42)) | v15;
    v17 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x55u, (char **)((char *)v2 + 43)) | v16;
    v18 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x56u, v2 + 11) | v17;
    v19 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x57u, (char **)((char *)v2 + 45)) | v18;
    v20 = __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x52u, (char **)((char *)v2 + 46)) | v19;
    if ( (v20 | __getlocaleinfo((struct localeinfo_struct *)v25, 0, v6, 0x53u, (char **)((char *)v2 + 47))) != 0 )
    {
      __free_lconv_mon((int)v2);
      free(v2);
      free(Block);
      free(v27);
      return 1;
    }
    v21 = v2[7];
    while ( 1 )
    {
      if ( *v21 == 0 )
        goto LABEL_25;
      v22 = *v21;
      if ( *v21 >= 48 && v22 <= 57 )
        break;
      if ( v22 == 59 )
      {
        v23 = v21;
        do
        {
          *v23 = v23[1];
          ++v23;
        }
        while ( *v23 != 0 );
      }
      else
      {
LABEL_17:
        ++v21;
      }
    }
    *v21 = v22 - 48;
    goto LABEL_17;
  }
  v27 = nullptr;
  Block = nullptr;
  v2 = (char **)&off_42CA10;
LABEL_27:
  if ( *(_DWORD *)(v1 + 184) != 0 )
    InterlockedDecrement(*(volatile LONG **)(v1 + 184));
  if ( *(_DWORD *)(v1 + 176) != 0 && InterlockedDecrement(*(volatile LONG **)(v1 + 176)) == 0 )
  {
    free(*(void **)(v1 + 188));
    free(*(void **)(v1 + 176));
  }
  *(_DWORD *)(v1 + 184) = v27;
  *(_DWORD *)(v1 + 176) = Block;
  *(_DWORD *)(v1 + 188) = v2;
  return 0;
}

// Address: 0x41821E
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

// Address: 0x41824D
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
  v3 = &unk_42CA58 - (_UNKNOWN *)a1;
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

// Address: 0x4182B1
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

// Address: 0x418444
volatile LONG *__updatetmbcinfo()
{
  DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = _getptd();
  if ( (dword_42CA44 & v0[28]) != 0 && v0[27] != 0 )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != lpAddend )
    {
      if ( v1 != nullptr && InterlockedDecrement(v1) == 0 && v1 != (volatile LONG *)&unk_42CA58 )
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

// Address: 0x4184E8
UINT __usercall getSystemCP@<eax>(int a1@<esi>)
{
  UINT result; // eax
  int v2; // [esp+4h] [ebp-10h] BYREF
  int v3; // [esp+Ch] [ebp-8h]
  char v4; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v2, nullptr);
  dword_42FD58 = 0;
  switch ( a1 )
  {
    case -2:
      dword_42FD58 = 1;
      result = GetOEMCP();
      goto LABEL_3;
    case -3:
      dword_42FD58 = 1;
      result = GetACP();
      goto LABEL_3;
    case -4:
      result = *(_DWORD *)(v2 + 4);
      dword_42FD58 = 1;
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

// Address: 0x418564
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
      if ( dword_42CE88[i] == SystemCP )
      {
        memset(a2 + 7, 0, 0x101u);
        v18 = 0;
        v8 = (char *)&unk_42CE98 + 48 * v19;
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
              *((_BYTE *)a2 + v10 + 29) |= byte_42CE84[v18];
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
        v13 = (_WORD *)((char *)&unk_42CE8C + v12);
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
    if ( dword_42FD58 == 0 )
      return -1;
  }
  setSBCS(a2);
  return 0;
}

// Address: 0x418749
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
        if ( v4 != (_DWORD *)&unk_42CA58 )
          free(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( InterlockedDecrement((volatile LONG *)v1[26]) == 0 && (_UNKNOWN *)v1[26] != &unk_42CA58 )
        free((void *)v1[26]);
      v1[26] = (DWORD)v4;
      InterlockedIncrement(v4);
      if ( (v1[28] & 2) == 0 && (dword_42CA44 & 1) == 0 )
      {
        _lock(13);
        dword_42FD68 = v4[1];
        dword_42FD6C = v4[2];
        dword_42FD70 = v4[3];
        for ( i = 0; i < 5; ++i )
          word_42FD5C[i] = *((_WORD *)v4 + i + 8);
        for ( j = 0; j < 257; ++j )
          byte_42CC78[j] = *((_BYTE *)v4 + j + 28);
        for ( k = 0; k < 256; ++k )
          byte_42CD80[k] = *((_BYTE *)v4 + k + 285);
        if ( InterlockedDecrement(lpAddend) == 0 && lpAddend != (volatile LONG *)&unk_42CA58 )
          free((void *)lpAddend);
        lpAddend = v4;
        InterlockedIncrement(v4);
        _unlock(13);
      }
    }
  }
  return v10;
}

// Address: 0x4188E3
int __initmbctable()
{
  if ( dword_43018C == 0 )
  {
    _setmbcp(-3);
    dword_43018C = 1;
  }
  return 0;
}

// Address: 0x418910
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

// Address: 0x418956
BOOL __cdecl TranslateName(int a1, int a2, const char **a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  const char **v6; // edi

  v3 = 0;
  v4 = 1;
  while ( v3 <= a2 )
  {
    if ( v4 == 0 )
      break;
    v5 = (v3 + a2) / 2;
    v6 = (const char **)(a1 + 8 * v5);
    v4 = _stricmp(*a3, *v6);
    if ( v4 != 0 )
    {
      if ( v4 >= 0 )
        v3 = v5 + 1;
      else
        a2 = v5 - 1;
    }
    else
    {
      *a3 = (const char *)(v6 + 1);
    }
  }
  return v4 == 0;
}

// Address: 0x4189B8
UINT __usercall ProcessCodePage@<eax>(char *String@<ecx>, int a2@<edi>)
{
  CHAR *v2; // esi
  CHAR LCData[8]; // [esp+4h] [ebp-Ch] BYREF

  v2 = String;
  if ( String != nullptr && *String != 0 && strcmp(String, "ACP") != 0 )
  {
    if ( strcmp(v2, "OCP") != 0 )
      return atol(v2);
    if ( GetLocaleInfoA(*(_DWORD *)(a2 + 28), 0xBu, LCData, 8) != 0 )
    {
LABEL_6:
      v2 = LCData;
      return atol(v2);
    }
  }
  else if ( GetLocaleInfoA(*(_DWORD *)(a2 + 28), 0x1004u, LCData, 8) != 0 )
  {
    if ( strcmp(LCData, "0") != 0 )
      goto LABEL_6;
    return GetACP();
  }
  return 0;
}

// Address: 0x418A5C
int __cdecl TestDefaultCountry(__int16 a1)
{
  int v1; // eax

  v1 = 0;
  while ( a1 != word_422F88[v1] )
  {
    if ( (unsigned int)++v1 >= 10 )
      return 1;
  }
  return 0;
}

// Address: 0x418A80
int __fastcall LcidFromHexString(int a1, char *a2)
{
  int i; // esi
  char v3; // cl

  for ( i = 0; ; i = 16 * i + v3 - 48 )
  {
    v3 = *a2;
    if ( *a2 == 0 )
      break;
    ++a2;
    if ( (unsigned __int8)(v3 - 97) > 5u )
    {
      if ( (unsigned __int8)(v3 - 65) <= 5u )
        v3 -= 7;
    }
    else
    {
      v3 -= 39;
    }
  }
  return i;
}

// Address: 0x418AB4
int __fastcall GetPrimaryLen(int a1, char *a2)
{
  int result; // eax
  char v3; // cl

  for ( result = 0; ; ++result )
  {
    v3 = *a2++;
    if ( (v3 < 65 || v3 > 90) && (unsigned __int8)(v3 - 97) > 0x19u )
      break;
  }
  return result;
}

// Address: 0x418ACF
BOOL __stdcall CountryEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  CHAR LCData[120]; // [esp+8h] [ebp-7Ch] BYREF

  v1 = _getptd() + 39;
  v3 = LcidFromHexString(v2, a1);
  if ( GetLocaleInfoA(v3, v1[5] != 0 ? 7 : 4098, LCData, 120) != 0 )
  {
    if ( _stricmp((const char *)v1[1], LCData) == 0 && TestDefaultCountry(v3) != 0 )
    {
      v1[2] |= 4u;
      v1[7] = v3;
      v1[6] = v3;
    }
    return (v1[2] & 4) == 0;
  }
  else
  {
    v1[2] = 0;
    return true;
  }
}

// Address: 0x418B67
BOOL __cdecl TestDefaultLanguage(int a1, int a2)
{
  char **v2; // ecx
  char **v3; // esi
  int v4; // ecx
  BOOL result; // eax
  int v6; // ecx
  char *v7; // esi
  int PrimaryLen; // edi
  CHAR LCData[120]; // [esp+4h] [ebp-7Ch] BYREF

  v3 = v2;
  result = false;
  if ( GetLocaleInfoA(a1 & 0x3FF | 0x400, 1u, LCData, 120) != 0 )
  {
    if ( a1 == LcidFromHexString(v4, LCData) )
      return true;
    if ( a2 == 0 )
      return true;
    v7 = *v3;
    PrimaryLen = GetPrimaryLen(v6, v7);
    if ( PrimaryLen != strlen(v7) )
      return true;
  }
  return result;
}

// Address: 0x418BDB
BOOL __stdcall LangCountryEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  int v5; // edx
  BOOL v6; // eax
  const char *v7; // [esp-4h] [ebp-8Ch]
  CHAR LCData[120]; // [esp+Ch] [ebp-7Ch] BYREF

  v1 = _getptd() + 39;
  v3 = LcidFromHexString(v2, a1);
  if ( GetLocaleInfoA(v3, v1[5] != 0 ? 7 : 4098, LCData, 120) == 0 )
    goto LABEL_2;
  if ( _stricmp((const char *)v1[1], LCData) == 0 )
  {
    if ( GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 4097, LCData, 120) == 0 )
      goto LABEL_2;
    if ( _stricmp((const char *)*v1, LCData) == 0 )
    {
      v1[2] |= 0x304u;
      v1[6] = v3;
LABEL_15:
      v1[7] = v3;
      goto LABEL_16;
    }
    if ( (v1[2] & 2) != 0 )
      goto LABEL_16;
    if ( v1[3] != 0 && _strnicmp((const char *)*v1, LCData, v1[3]) == 0 )
    {
      v7 = (const char *)*v1;
      v1[2] |= 2u;
      v1[7] = v3;
      if ( strlen(v7) == v1[3] )
        v1[6] = v3;
    }
    else if ( (v1[2] & 1) == 0 && TestDefaultCountry(v3) != 0 )
    {
      v1[2] = v5 | 1;
      goto LABEL_15;
    }
  }
LABEL_16:
  if ( (v1[2] & 0x300) == 0x300 )
    return (v1[2] & 4) == 0;
  if ( GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 4097, LCData, 120) == 0 )
  {
LABEL_2:
    v1[2] = 0;
    return true;
  }
  if ( _stricmp((const char *)*v1, LCData) == 0 )
  {
    v1[2] |= 0x200u;
    if ( v1[4] != 0 )
    {
      v1[2] |= 0x100u;
      goto LABEL_30;
    }
    if ( v1[3] == 0 || strlen((const char *)*v1) != v1[3] )
    {
LABEL_29:
      v1[2] |= 0x100u;
LABEL_30:
      if ( v1[6] == 0 )
        v1[6] = v3;
      return (v1[2] & 4) == 0;
    }
    v6 = TestDefaultLanguage(v3, 1);
  }
  else
  {
    if ( v1[4] != 0 || v1[3] == 0 || _stricmp((const char *)*v1, LCData) != 0 )
      return (v1[2] & 4) == 0;
    v6 = TestDefaultLanguage(v3, 0);
  }
  if ( v6 )
    goto LABEL_29;
  return (v1[2] & 4) == 0;
}

// Address: 0x418DAD
BOOL __stdcall LanguageEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  BOOL v5; // eax
  CHAR LCData[120]; // [esp+8h] [ebp-7Ch] BYREF

  v1 = _getptd() + 39;
  v3 = LcidFromHexString(v2, a1);
  if ( GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 4097, LCData, 120) == 0 )
  {
    v1[2] = 0;
    return true;
  }
  if ( _stricmp((const char *)*v1, LCData) == 0 )
  {
    if ( v1[4] != 0 )
    {
LABEL_11:
      v1[2] |= 4u;
      v1[6] = v3;
      v1[7] = v3;
      return (v1[2] & 4) == 0;
    }
    v5 = TestDefaultLanguage(v3, 1);
  }
  else
  {
    if ( v1[4] != 0 || v1[3] == 0 || _stricmp((const char *)*v1, LCData) != 0 )
      return (v1[2] & 4) == 0;
    v5 = TestDefaultLanguage(v3, 0);
  }
  if ( v5 )
    goto LABEL_11;
  return (v1[2] & 4) == 0;
}

// Address: 0x418E6E
int __usercall GetLcidFromLangCountry@<eax>(int a1@<esi>)
{
  size_t v1; // eax
  bool v2; // zf
  int PrimaryLen; // eax
  int result; // eax
  const char *v5; // [esp-8h] [ebp-8h]
  int v6; // [esp-4h] [ebp-4h]

  v5 = *(const char **)(a1 + 4);
  *(_DWORD *)(a1 + 16) = strlen(*(const char **)a1) == 3;
  v1 = strlen(v5);
  *(_DWORD *)(a1 + 24) = 0;
  v2 = *(_DWORD *)(a1 + 16) == 0;
  *(_DWORD *)(a1 + 20) = v1 == 3;
  if ( v2 )
    PrimaryLen = GetPrimaryLen(v6, *(char **)a1);
  else
    PrimaryLen = 2;
  *(_DWORD *)(a1 + 12) = PrimaryLen;
  EnumSystemLocalesA(LangCountryEnumProc, 1u);
  result = *(_DWORD *)(a1 + 8);
  if ( (result & 0x100) == 0 || (result & 0x200) == 0 || (result & 7) == 0 )
    *(_DWORD *)(a1 + 8) = 0;
  return result;
}

// Address: 0x418ED5
BOOL __usercall GetLcidFromLanguage@<eax>(int a1@<esi>)
{
  BOOL v1; // eax
  int PrimaryLen; // eax
  BOOL result; // eax
  int v4; // [esp-4h] [ebp-4h]

  v1 = strlen(*(const char **)a1) == 3;
  *(_DWORD *)(a1 + 16) = v1;
  if ( v1 )
    PrimaryLen = 2;
  else
    PrimaryLen = GetPrimaryLen(v4, *(char **)a1);
  *(_DWORD *)(a1 + 12) = PrimaryLen;
  result = EnumSystemLocalesA(LanguageEnumProc, 1u);
  if ( (*(_BYTE *)(a1 + 8) & 4) == 0 )
    *(_DWORD *)(a1 + 8) = 0;
  return result;
}

// Address: 0x418F11
int __cdecl __get_qualified_locale(int Value, _WORD *a2, LPSTR lpLCData)
{
  DWORD *v3; // eax
  int v4; // esi
  const char **v5; // edi
  _BYTE *v6; // eax
  const char *v7; // edi
  const char *v8; // edi
  LCID UserDefaultLCID; // eax
  UINT v10; // eax
  __int16 v11; // di
  int Valuea; // [esp+14h] [ebp+8h]

  v3 = _getptd();
  v4 = (int)(v3 + 39);
  if ( Value == 0 )
  {
    v3[41] |= 0x104u;
LABEL_23:
    UserDefaultLCID = GetUserDefaultLCID();
    *(_DWORD *)(v4 + 24) = UserDefaultLCID;
    *(_DWORD *)(v4 + 28) = UserDefaultLCID;
    goto LABEL_24;
  }
  v5 = (const char **)(v3 + 40);
  *(_DWORD *)v4 = Value;
  v3[40] = Value + 64;
  if ( Value != -64 && *(_BYTE *)(Value + 64) != 0 )
    TranslateName((int)&off_422ED0, 22, (const char **)v3 + 40);
  v6 = *(_BYTE **)v4;
  *(_DWORD *)(v4 + 8) = 0;
  if ( v6 == nullptr || *v6 == 0 )
  {
    v8 = *v5;
    if ( v8 == nullptr || *v8 == 0 )
    {
      *(_DWORD *)(v4 + 8) = 260;
      goto LABEL_23;
    }
    *(_DWORD *)(v4 + 20) = strlen(v8) == 3;
    EnumSystemLocalesA(CountryEnumProc, 1u);
    if ( (*(_BYTE *)(v4 + 8) & 4) == 0 )
      *(_DWORD *)(v4 + 8) = 0;
LABEL_24:
    if ( *(_DWORD *)(v4 + 8) == 0 )
      return 0;
    goto LABEL_25;
  }
  if ( *v5 != nullptr && **v5 != 0 )
    GetLcidFromLangCountry(v4);
  else
    GetLcidFromLanguage(v4);
  if ( *(_DWORD *)(v4 + 8) == 0 )
  {
    if ( TranslateName((int)&off_422CC8, 64, (const char **)v4) )
    {
      v7 = *v5;
      if ( v7 != nullptr && *v7 != 0 )
        GetLcidFromLangCountry(v4);
      else
        GetLcidFromLanguage(v4);
    }
    goto LABEL_24;
  }
LABEL_25:
  v10 = ProcessCodePage(Value != 0 ? (char *)(Value + 128) : nullptr, v4);
  v11 = v10;
  Valuea = v10;
  if ( v10 == 0
    || v10 == 65000
    || v10 == 65001
    || !IsValidCodePage((unsigned __int16)v10)
    || !IsValidLocale(*(_DWORD *)(v4 + 24), 1u) )
  {
    return 0;
  }
  if ( a2 != nullptr )
  {
    *a2 = *(_WORD *)(v4 + 24);
    a2[1] = *(_WORD *)(v4 + 28);
    a2[2] = v11;
  }
  if ( lpLCData == nullptr )
    return 1;
  if ( *a2 == 2068 )
  {
    if ( strcpy_s(lpLCData, 0x40u, "Norwegian-Nynorsk") != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  else if ( GetLocaleInfoA(*(_DWORD *)(v4 + 24), 0x1001u, lpLCData, 64) == 0 )
  {
    return 0;
  }
  if ( GetLocaleInfoA(*(_DWORD *)(v4 + 28), 0x1002u, lpLCData + 64, 64) != 0 )
  {
    _itoa_s(Valuea, lpLCData + 128, 0x10u, 10);
    return 1;
  }
  return 0;
}

// Address: 0x419102
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  size_t v3; // edi
  unsigned __int8 *v4; // ecx
  unsigned __int8 *v5; // eax
  int v6; // esi
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // kr00_4
  unsigned __int8 *v9; // kr04_4
  unsigned __int8 *v10; // ecx
  int result; // eax
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // esi
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // eax
  int v39; // ecx

  v3 = Size;
  switch ( Size )
  {
    case 0u:
      return 0;
    case 1u:
      v38 = *(unsigned __int8 *)Buf1;
      v39 = *(unsigned __int8 *)Buf2;
LABEL_425:
      result = v38 - v39;
      if ( result != 0 )
        return 2 * (result > 0) - 1;
      return result;
    case 2u:
      if ( *(unsigned __int8 *)Buf1 != *(unsigned __int8 *)Buf2 )
      {
        result = 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) - 1;
        if ( 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) != 1 )
          return result;
      }
      v38 = *((unsigned __int8 *)Buf1 + 1);
      v39 = *((unsigned __int8 *)Buf2 + 1);
      goto LABEL_425;
    case 3u:
      if ( *(unsigned __int8 *)Buf1 != *(unsigned __int8 *)Buf2 )
      {
        result = 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) - 1;
        if ( 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) != 1 )
          return result;
      }
      if ( *((unsigned __int8 *)Buf1 + 1) != *((unsigned __int8 *)Buf2 + 1) )
      {
        result = 2 * (*((unsigned __int8 *)Buf1 + 1) > (unsigned int)*((unsigned __int8 *)Buf2 + 1)) - 1;
        if ( 2 * (*((unsigned __int8 *)Buf1 + 1) > (unsigned int)*((unsigned __int8 *)Buf2 + 1)) != 1 )
          return result;
      }
      v38 = *((unsigned __int8 *)Buf1 + 2);
      v39 = *((unsigned __int8 *)Buf2 + 2);
      goto LABEL_425;
    case 4u:
      if ( *(unsigned __int8 *)Buf1 != *(unsigned __int8 *)Buf2 )
      {
        result = 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) - 1;
        if ( 2 * (*(unsigned __int8 *)Buf1 > (unsigned int)*(unsigned __int8 *)Buf2) != 1 )
          return result;
      }
      if ( *((unsigned __int8 *)Buf1 + 1) != *((unsigned __int8 *)Buf2 + 1) )
      {
        result = 2 * (*((unsigned __int8 *)Buf1 + 1) > (unsigned int)*((unsigned __int8 *)Buf2 + 1)) - 1;
        if ( 2 * (*((unsigned __int8 *)Buf1 + 1) > (unsigned int)*((unsigned __int8 *)Buf2 + 1)) != 1 )
          return result;
      }
      if ( *((unsigned __int8 *)Buf1 + 2) != *((unsigned __int8 *)Buf2 + 2) )
      {
        result = 2 * (*((unsigned __int8 *)Buf1 + 2) > (unsigned int)*((unsigned __int8 *)Buf2 + 2)) - 1;
        if ( 2 * (*((unsigned __int8 *)Buf1 + 2) > (unsigned int)*((unsigned __int8 *)Buf2 + 2)) != 1 )
          return result;
      }
      v38 = *((unsigned __int8 *)Buf1 + 3);
      v39 = *((unsigned __int8 *)Buf2 + 3);
      goto LABEL_425;
    default:
      break;
  }
  v4 = (unsigned __int8 *)Buf2;
  v5 = (unsigned __int8 *)Buf1;
  while ( 2 )
  {
    v8 = v5;
    v9 = v4;
    v7 = &v5[v3];
    v10 = &v4[v3];
    switch ( v3 )
    {
      case 0u:
        return 0;
      case 1u:
        goto LABEL_255;
      case 2u:
        goto LABEL_334;
      case 3u:
        goto LABEL_415;
      case 4u:
        goto LABEL_164;
      case 5u:
        goto LABEL_244;
      case 6u:
        goto LABEL_323;
      case 7u:
        goto LABEL_404;
      case 8u:
        goto LABEL_153;
      case 9u:
        goto LABEL_233;
      case 0xAu:
        goto LABEL_312;
      case 0xBu:
        goto LABEL_393;
      case 0xCu:
        goto LABEL_142;
      case 0xDu:
        goto LABEL_222;
      case 0xEu:
        goto LABEL_301;
      case 0xFu:
        goto LABEL_382;
      case 0x10u:
        goto LABEL_131;
      case 0x11u:
        goto LABEL_211;
      case 0x12u:
        goto LABEL_290;
      case 0x13u:
        goto LABEL_371;
      case 0x14u:
        goto LABEL_120;
      case 0x15u:
        goto LABEL_200;
      case 0x16u:
        goto LABEL_279;
      case 0x17u:
        goto LABEL_360;
      case 0x18u:
        goto LABEL_109;
      case 0x19u:
        goto LABEL_189;
      case 0x1Au:
        goto LABEL_268;
      case 0x1Bu:
        goto LABEL_349;
      case 0x1Cu:
        v12 = *((_DWORD *)v7 - 7);
        if ( v12 == *((_DWORD *)v10 - 7) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v12 != *(v10 - 28) )
          {
            v6 = 2 * ((unsigned __int8)v12 > (unsigned int)*(v10 - 28)) - 1;
            if ( 2 * ((unsigned __int8)v12 > (unsigned int)*(v10 - 28)) != 1 )
              return v6;
          }
          if ( *(v7 - 27) != *(v10 - 27) )
          {
            v6 = 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) - 1;
            if ( 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) != 1 )
              return v6;
          }
          if ( *(v7 - 26) != *(v10 - 26) )
          {
            v6 = 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) - 1;
            if ( 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) != 1 )
              return v6;
          }
          v6 = *(v7 - 25) - *(v10 - 25);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_109:
        v13 = *((_DWORD *)v7 - 6);
        if ( v13 == *((_DWORD *)v10 - 6) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v13 != *(v10 - 24) )
          {
            v6 = 2 * ((unsigned __int8)v13 > (unsigned int)*(v10 - 24)) - 1;
            if ( 2 * ((unsigned __int8)v13 > (unsigned int)*(v10 - 24)) != 1 )
              return v6;
          }
          if ( *(v7 - 23) != *(v10 - 23) )
          {
            v6 = 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) - 1;
            if ( 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) != 1 )
              return v6;
          }
          if ( *(v7 - 22) != *(v10 - 22) )
          {
            v6 = 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) - 1;
            if ( 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) != 1 )
              return v6;
          }
          v6 = *(v7 - 21) - *(v10 - 21);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_120:
        v14 = *((_DWORD *)v7 - 5);
        if ( v14 == *((_DWORD *)v10 - 5) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v14 != *(v10 - 20) )
          {
            v6 = 2 * ((unsigned __int8)v14 > (unsigned int)*(v10 - 20)) - 1;
            if ( 2 * ((unsigned __int8)v14 > (unsigned int)*(v10 - 20)) != 1 )
              return v6;
          }
          if ( *(v7 - 19) != *(v10 - 19) )
          {
            v6 = 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) - 1;
            if ( 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) != 1 )
              return v6;
          }
          if ( *(v7 - 18) != *(v10 - 18) )
          {
            v6 = 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) - 1;
            if ( 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) != 1 )
              return v6;
          }
          v6 = *(v7 - 17) - *(v10 - 17);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_131:
        v15 = *((_DWORD *)v7 - 4);
        if ( v15 == *((_DWORD *)v10 - 4) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v15 != *(v10 - 16) )
          {
            v6 = 2 * ((unsigned __int8)v15 > (unsigned int)*(v10 - 16)) - 1;
            if ( 2 * ((unsigned __int8)v15 > (unsigned int)*(v10 - 16)) != 1 )
              return v6;
          }
          if ( *(v7 - 15) != *(v10 - 15) )
          {
            v6 = 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) - 1;
            if ( 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) != 1 )
              return v6;
          }
          if ( *(v7 - 14) != *(v10 - 14) )
          {
            v6 = 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) - 1;
            if ( 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) != 1 )
              return v6;
          }
          v6 = *(v7 - 13) - *(v10 - 13);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_142:
        if ( *((_DWORD *)v7 - 3) == *((_DWORD *)v10 - 3) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 12) != *(v10 - 12) )
          {
            v6 = 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) - 1;
            if ( 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) != 1 )
              return v6;
          }
          if ( *(v7 - 11) != *(v10 - 11) )
          {
            v6 = 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) - 1;
            if ( 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) != 1 )
              return v6;
          }
          if ( *(v7 - 10) != *(v10 - 10) )
          {
            v6 = 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) - 1;
            if ( 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) != 1 )
              return v6;
          }
          v6 = *(v7 - 9) - *(v10 - 9);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_153:
        v16 = *((_DWORD *)v7 - 2);
        if ( v16 == *((_DWORD *)v10 - 2) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v16 != *(v10 - 8) )
          {
            v6 = 2 * ((unsigned __int8)v16 > (unsigned int)*(v10 - 8)) - 1;
            if ( 2 * ((unsigned __int8)v16 > (unsigned int)*(v10 - 8)) != 1 )
              return v6;
          }
          if ( *(v7 - 7) != *(v10 - 7) )
          {
            v6 = 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) - 1;
            if ( 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) != 1 )
              return v6;
          }
          if ( *(v7 - 6) != *(v10 - 6) )
          {
            v6 = 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) - 1;
            if ( 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) != 1 )
              return v6;
          }
          v6 = *(v7 - 5) - *(v10 - 5);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_164:
        v17 = *((_DWORD *)v7 - 1);
        if ( v17 == *((_DWORD *)v10 - 1) )
        {
          result = 0;
        }
        else
        {
          v18 = (unsigned __int8)v17 - *(v10 - 4);
          if ( (v18 == 0 || (v19 = 2 * ((unsigned __int8)v17 > (unsigned int)*(v10 - 4)) - 1, 2 * (v18 > 0) == 1))
            && (*(v7 - 3) == *(v10 - 3)
             || (v19 = 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) - 1, 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) == 1))
            && (*(v7 - 2) == *(v10 - 2)
             || (v19 = 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) - 1, 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) == 1)) )
          {
            result = *(v7 - 1) - *(v10 - 1);
            if ( result != 0 )
              result = 2 * (result > 0) - 1;
          }
          else
          {
            result = v19;
          }
        }
        if ( result == 0 )
          return 0;
        return result;
      case 0x1Du:
        v20 = *(_DWORD *)(v7 - 29);
        if ( v20 == *(_DWORD *)(v10 - 29) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v20 != *(v10 - 29) )
          {
            v6 = 2 * ((unsigned __int8)v20 > (unsigned int)*(v10 - 29)) - 1;
            if ( 2 * ((unsigned __int8)v20 > (unsigned int)*(v10 - 29)) != 1 )
              return v6;
          }
          if ( *(v7 - 28) != *(v10 - 28) )
          {
            v6 = 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) - 1;
            if ( 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) != 1 )
              return v6;
          }
          if ( *(v7 - 27) != *(v10 - 27) )
          {
            v6 = 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) - 1;
            if ( 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) != 1 )
              return v6;
          }
          v6 = *(v7 - 26) - *(v10 - 26);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_189:
        v21 = *(_DWORD *)(v7 - 25);
        if ( v21 == *(_DWORD *)(v10 - 25) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v21 != *(v10 - 25) )
          {
            v6 = 2 * ((unsigned __int8)v21 > (unsigned int)*(v10 - 25)) - 1;
            if ( 2 * ((unsigned __int8)v21 > (unsigned int)*(v10 - 25)) != 1 )
              return v6;
          }
          if ( *(v7 - 24) != *(v10 - 24) )
          {
            v6 = 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) - 1;
            if ( 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) != 1 )
              return v6;
          }
          if ( *(v7 - 23) != *(v10 - 23) )
          {
            v6 = 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) - 1;
            if ( 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) != 1 )
              return v6;
          }
          v6 = *(v7 - 22) - *(v10 - 22);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_200:
        v22 = *(_DWORD *)(v7 - 21);
        if ( v22 == *(_DWORD *)(v10 - 21) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v22 != *(v10 - 21) )
          {
            v6 = 2 * ((unsigned __int8)v22 > (unsigned int)*(v10 - 21)) - 1;
            if ( 2 * ((unsigned __int8)v22 > (unsigned int)*(v10 - 21)) != 1 )
              return v6;
          }
          if ( *(v7 - 20) != *(v10 - 20) )
          {
            v6 = 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) - 1;
            if ( 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) != 1 )
              return v6;
          }
          if ( *(v7 - 19) != *(v10 - 19) )
          {
            v6 = 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) - 1;
            if ( 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) != 1 )
              return v6;
          }
          v6 = *(v7 - 18) - *(v10 - 18);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_211:
        v23 = *(_DWORD *)(v7 - 17);
        if ( v23 == *(_DWORD *)(v10 - 17) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v23 != *(v10 - 17) )
          {
            v6 = 2 * ((unsigned __int8)v23 > (unsigned int)*(v10 - 17)) - 1;
            if ( 2 * ((unsigned __int8)v23 > (unsigned int)*(v10 - 17)) != 1 )
              return v6;
          }
          if ( *(v7 - 16) != *(v10 - 16) )
          {
            v6 = 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) - 1;
            if ( 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) != 1 )
              return v6;
          }
          if ( *(v7 - 15) != *(v10 - 15) )
          {
            v6 = 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) - 1;
            if ( 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) != 1 )
              return v6;
          }
          v6 = *(v7 - 14) - *(v10 - 14);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_222:
        v24 = *(_DWORD *)(v7 - 13);
        if ( v24 == *(_DWORD *)(v10 - 13) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v24 != *(v10 - 13) )
          {
            v6 = 2 * ((unsigned __int8)v24 > (unsigned int)*(v10 - 13)) - 1;
            if ( 2 * ((unsigned __int8)v24 > (unsigned int)*(v10 - 13)) != 1 )
              return v6;
          }
          if ( *(v7 - 12) != *(v10 - 12) )
          {
            v6 = 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) - 1;
            if ( 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) != 1 )
              return v6;
          }
          if ( *(v7 - 11) != *(v10 - 11) )
          {
            v6 = 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) - 1;
            if ( 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) != 1 )
              return v6;
          }
          v6 = *(v7 - 10) - *(v10 - 10);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_233:
        if ( *(_DWORD *)(v7 - 9) == *(_DWORD *)(v10 - 9) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 9) != *(v10 - 9) )
          {
            v6 = 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) - 1;
            if ( 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) != 1 )
              return v6;
          }
          if ( *(v7 - 8) != *(v10 - 8) )
          {
            v6 = 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) - 1;
            if ( 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) != 1 )
              return v6;
          }
          if ( *(v7 - 7) != *(v10 - 7) )
          {
            v6 = 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) - 1;
            if ( 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) != 1 )
              return v6;
          }
          v6 = *(v7 - 6) - *(v10 - 6);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_244:
        v25 = *(_DWORD *)(v7 - 5);
        if ( v25 == *(_DWORD *)(v10 - 5) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v25 != *(v10 - 5) )
          {
            v6 = 2 * ((unsigned __int8)v25 > (unsigned int)*(v10 - 5)) - 1;
            if ( 2 * ((unsigned __int8)v25 > (unsigned int)*(v10 - 5)) != 1 )
              return v6;
          }
          if ( *(v7 - 4) != *(v10 - 4) )
          {
            v6 = 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) - 1;
            if ( 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) != 1 )
              return v6;
          }
          if ( *(v7 - 3) != *(v10 - 3) )
          {
            v6 = 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) - 1;
            if ( 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) != 1 )
              return v6;
          }
          v6 = *(v7 - 2) - *(v10 - 2);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) - 1;
        }
        if ( v6 != 0 )
          return v6;
        goto LABEL_255;
      case 0x1Eu:
        v26 = *(_DWORD *)(v7 - 30);
        if ( v26 == *(_DWORD *)(v10 - 30) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v26 != *(v10 - 30) )
          {
            v6 = 2 * ((unsigned __int8)v26 > (unsigned int)*(v10 - 30)) - 1;
            if ( 2 * ((unsigned __int8)v26 > (unsigned int)*(v10 - 30)) != 1 )
              return v6;
          }
          if ( *(v7 - 29) != *(v10 - 29) )
          {
            v6 = 2 * (*(v7 - 29) > (unsigned int)*(v10 - 29)) - 1;
            if ( 2 * (*(v7 - 29) > (unsigned int)*(v10 - 29)) != 1 )
              return v6;
          }
          if ( *(v7 - 28) != *(v10 - 28) )
          {
            v6 = 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) - 1;
            if ( 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) != 1 )
              return v6;
          }
          v6 = *(v7 - 27) - *(v10 - 27);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 27) > (unsigned int)*(v10 - 27)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_268:
        v27 = *(_DWORD *)(v7 - 26);
        if ( v27 == *(_DWORD *)(v10 - 26) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v27 != *(v10 - 26) )
          {
            v6 = 2 * ((unsigned __int8)v27 > (unsigned int)*(v10 - 26)) - 1;
            if ( 2 * ((unsigned __int8)v27 > (unsigned int)*(v10 - 26)) != 1 )
              return v6;
          }
          if ( *(v7 - 25) != *(v10 - 25) )
          {
            v6 = 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) - 1;
            if ( 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) != 1 )
              return v6;
          }
          if ( *(v7 - 24) != *(v10 - 24) )
          {
            v6 = 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) - 1;
            if ( 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) != 1 )
              return v6;
          }
          v6 = *(v7 - 23) - *(v10 - 23);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 23) > (unsigned int)*(v10 - 23)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_279:
        v28 = *(_DWORD *)(v7 - 22);
        if ( v28 == *(_DWORD *)(v10 - 22) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v28 != *(v10 - 22) )
          {
            v6 = 2 * ((unsigned __int8)v28 > (unsigned int)*(v10 - 22)) - 1;
            if ( 2 * ((unsigned __int8)v28 > (unsigned int)*(v10 - 22)) != 1 )
              return v6;
          }
          if ( *(v7 - 21) != *(v10 - 21) )
          {
            v6 = 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) - 1;
            if ( 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) != 1 )
              return v6;
          }
          if ( *(v7 - 20) != *(v10 - 20) )
          {
            v6 = 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) - 1;
            if ( 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) != 1 )
              return v6;
          }
          v6 = *(v7 - 19) - *(v10 - 19);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 19) > (unsigned int)*(v10 - 19)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_290:
        v29 = *(_DWORD *)(v7 - 18);
        if ( v29 == *(_DWORD *)(v10 - 18) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v29 != *(v10 - 18) )
          {
            v6 = 2 * ((unsigned __int8)v29 > (unsigned int)*(v10 - 18)) - 1;
            if ( 2 * ((unsigned __int8)v29 > (unsigned int)*(v10 - 18)) != 1 )
              return v6;
          }
          if ( *(v7 - 17) != *(v10 - 17) )
          {
            v6 = 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) - 1;
            if ( 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) != 1 )
              return v6;
          }
          if ( *(v7 - 16) != *(v10 - 16) )
          {
            v6 = 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) - 1;
            if ( 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) != 1 )
              return v6;
          }
          v6 = *(v7 - 15) - *(v10 - 15);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_301:
        v30 = *(_DWORD *)(v7 - 14);
        if ( v30 == *(_DWORD *)(v10 - 14) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v30 != *(v10 - 14) )
          {
            v6 = 2 * ((unsigned __int8)v30 > (unsigned int)*(v10 - 14)) - 1;
            if ( 2 * ((unsigned __int8)v30 > (unsigned int)*(v10 - 14)) != 1 )
              return v6;
          }
          if ( *(v7 - 13) != *(v10 - 13) )
          {
            v6 = 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) - 1;
            if ( 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) != 1 )
              return v6;
          }
          if ( *(v7 - 12) != *(v10 - 12) )
          {
            v6 = 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) - 1;
            if ( 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) != 1 )
              return v6;
          }
          v6 = *(v7 - 11) - *(v10 - 11);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 11) > (unsigned int)*(v10 - 11)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_312:
        if ( *(_DWORD *)(v7 - 10) == *(_DWORD *)(v10 - 10) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 10) != *(v10 - 10) )
          {
            v6 = 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) - 1;
            if ( 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) != 1 )
              return v6;
          }
          if ( *(v7 - 9) != *(v10 - 9) )
          {
            v6 = 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) - 1;
            if ( 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) != 1 )
              return v6;
          }
          if ( *(v7 - 8) != *(v10 - 8) )
          {
            v6 = 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) - 1;
            if ( 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) != 1 )
              return v6;
          }
          v6 = *(v7 - 7) - *(v10 - 7);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 7) > (unsigned int)*(v10 - 7)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_323:
        v31 = *(_DWORD *)(v7 - 6);
        if ( v31 == *(_DWORD *)(v10 - 6) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v31 != *(v10 - 6) )
          {
            v6 = 2 * ((unsigned __int8)v31 > (unsigned int)*(v10 - 6)) - 1;
            if ( 2 * ((unsigned __int8)v31 > (unsigned int)*(v10 - 6)) != 1 )
              return v6;
          }
          if ( *(v7 - 5) != *(v10 - 5) )
          {
            v6 = 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) - 1;
            if ( 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) != 1 )
              return v6;
          }
          if ( *(v7 - 4) != *(v10 - 4) )
          {
            v6 = 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) - 1;
            if ( 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) != 1 )
              return v6;
          }
          v6 = *(v7 - 3) - *(v10 - 3);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_334:
        if ( *((_WORD *)v7 - 1) == *((_WORD *)v10 - 1) )
          return 0;
        goto LABEL_335;
      case 0x1Fu:
        if ( *(_DWORD *)(v7 - 31) == *(_DWORD *)(v10 - 31) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 31) != *(v10 - 31) )
          {
            v6 = 2 * (*(v7 - 31) > (unsigned int)*(v10 - 31)) - 1;
            if ( 2 * (*(v7 - 31) > (unsigned int)*(v10 - 31)) != 1 )
              return v6;
          }
          if ( *(v7 - 30) != *(v10 - 30) )
          {
            v6 = 2 * (*(v7 - 30) > (unsigned int)*(v10 - 30)) - 1;
            if ( 2 * (*(v7 - 30) > (unsigned int)*(v10 - 30)) != 1 )
              return v6;
          }
          if ( *(v7 - 29) != *(v10 - 29) )
          {
            v6 = 2 * (*(v7 - 29) > (unsigned int)*(v10 - 29)) - 1;
            if ( 2 * (*(v7 - 29) > (unsigned int)*(v10 - 29)) != 1 )
              return v6;
          }
          v6 = *(v7 - 28) - *(v10 - 28);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 28) > (unsigned int)*(v10 - 28)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_349:
        v33 = *(_DWORD *)(v7 - 27);
        if ( v33 == *(_DWORD *)(v10 - 27) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v33 != *(v10 - 27) )
          {
            v6 = 2 * ((unsigned __int8)v33 > (unsigned int)*(v10 - 27)) - 1;
            if ( 2 * ((unsigned __int8)v33 > (unsigned int)*(v10 - 27)) != 1 )
              return v6;
          }
          if ( *(v7 - 26) != *(v10 - 26) )
          {
            v6 = 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) - 1;
            if ( 2 * (*(v7 - 26) > (unsigned int)*(v10 - 26)) != 1 )
              return v6;
          }
          if ( *(v7 - 25) != *(v10 - 25) )
          {
            v6 = 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) - 1;
            if ( 2 * (*(v7 - 25) > (unsigned int)*(v10 - 25)) != 1 )
              return v6;
          }
          v6 = *(v7 - 24) - *(v10 - 24);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 24) > (unsigned int)*(v10 - 24)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_360:
        v34 = *(_DWORD *)(v7 - 23);
        if ( v34 == *(_DWORD *)(v10 - 23) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v34 != *(v10 - 23) )
          {
            v6 = 2 * ((unsigned __int8)v34 > (unsigned int)*(v10 - 23)) - 1;
            if ( 2 * ((unsigned __int8)v34 > (unsigned int)*(v10 - 23)) != 1 )
              return v6;
          }
          if ( *(v7 - 22) != *(v10 - 22) )
          {
            v6 = 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) - 1;
            if ( 2 * (*(v7 - 22) > (unsigned int)*(v10 - 22)) != 1 )
              return v6;
          }
          if ( *(v7 - 21) != *(v10 - 21) )
          {
            v6 = 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) - 1;
            if ( 2 * (*(v7 - 21) > (unsigned int)*(v10 - 21)) != 1 )
              return v6;
          }
          v6 = *(v7 - 20) - *(v10 - 20);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 20) > (unsigned int)*(v10 - 20)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_371:
        v35 = *(_DWORD *)(v7 - 19);
        if ( v35 == *(_DWORD *)(v10 - 19) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v35 != *(v10 - 19) )
          {
            v6 = 2 * ((unsigned __int8)v35 > (unsigned int)*(v10 - 19)) - 1;
            if ( 2 * ((unsigned __int8)v35 > (unsigned int)*(v10 - 19)) != 1 )
              return v6;
          }
          if ( *(v7 - 18) != *(v10 - 18) )
          {
            v6 = 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) - 1;
            if ( 2 * (*(v7 - 18) > (unsigned int)*(v10 - 18)) != 1 )
              return v6;
          }
          if ( *(v7 - 17) != *(v10 - 17) )
          {
            v6 = 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) - 1;
            if ( 2 * (*(v7 - 17) > (unsigned int)*(v10 - 17)) != 1 )
              return v6;
          }
          v6 = *(v7 - 16) - *(v10 - 16);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 16) > (unsigned int)*(v10 - 16)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_382:
        if ( *(_DWORD *)(v7 - 15) == *(_DWORD *)(v10 - 15) )
        {
          v6 = 0;
        }
        else
        {
          if ( *(v7 - 15) != *(v10 - 15) )
          {
            v6 = 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) - 1;
            if ( 2 * (*(v7 - 15) > (unsigned int)*(v10 - 15)) != 1 )
              return v6;
          }
          if ( *(v7 - 14) != *(v10 - 14) )
          {
            v6 = 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) - 1;
            if ( 2 * (*(v7 - 14) > (unsigned int)*(v10 - 14)) != 1 )
              return v6;
          }
          if ( *(v7 - 13) != *(v10 - 13) )
          {
            v6 = 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) - 1;
            if ( 2 * (*(v7 - 13) > (unsigned int)*(v10 - 13)) != 1 )
              return v6;
          }
          v6 = *(v7 - 12) - *(v10 - 12);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 12) > (unsigned int)*(v10 - 12)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_393:
        v36 = *(_DWORD *)(v7 - 11);
        if ( v36 == *(_DWORD *)(v10 - 11) )
        {
          v6 = 0;
        }
        else
        {
          if ( (unsigned __int8)v36 != *(v10 - 11) )
          {
            v6 = 2 * ((unsigned __int8)v36 > (unsigned int)*(v10 - 11)) - 1;
            if ( 2 * ((unsigned __int8)v36 > (unsigned int)*(v10 - 11)) != 1 )
              return v6;
          }
          if ( *(v7 - 10) != *(v10 - 10) )
          {
            v6 = 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) - 1;
            if ( 2 * (*(v7 - 10) > (unsigned int)*(v10 - 10)) != 1 )
              return v6;
          }
          if ( *(v7 - 9) != *(v10 - 9) )
          {
            v6 = 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) - 1;
            if ( 2 * (*(v7 - 9) > (unsigned int)*(v10 - 9)) != 1 )
              return v6;
          }
          v6 = *(v7 - 8) - *(v10 - 8);
          if ( v6 != 0 )
            v6 = 2 * (*(v7 - 8) > (unsigned int)*(v10 - 8)) - 1;
        }
        if ( v6 != 0 )
          return v6;
LABEL_404:
        v37 = *(_DWORD *)(v7 - 7);
        if ( v37 != *(_DWORD *)(v10 - 7) )
        {
          if ( (unsigned __int8)v37 == *(v10 - 7)
            || (v6 = 2 * ((unsigned __int8)v37 > (unsigned int)*(v10 - 7)) - 1,
                2 * ((unsigned __int8)v37 > (unsigned int)*(v10 - 7)) == 1) )
          {
            if ( *(v7 - 6) == *(v10 - 6)
              || (v6 = 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) - 1, 2 * (*(v7 - 6) > (unsigned int)*(v10 - 6)) == 1) )
            {
              if ( *(v7 - 5) == *(v10 - 5)
                || (v6 = 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) - 1, 2 * (*(v7 - 5) > (unsigned int)*(v10 - 5)) == 1) )
              {
                v6 = *(v7 - 4) - *(v10 - 4);
                if ( v6 != 0 )
                  v6 = 2 * (*(v7 - 4) > (unsigned int)*(v10 - 4)) - 1;
                goto LABEL_414;
              }
            }
          }
          return v6;
        }
        v6 = 0;
LABEL_414:
        if ( v6 != 0 )
          return v6;
LABEL_415:
        if ( *(v7 - 3) != *(v10 - 3) )
        {
          v32 = 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) - 1;
          if ( 2 * (*(v7 - 3) > (unsigned int)*(v10 - 3)) != 1 )
            return v32;
        }
LABEL_335:
        if ( *(v7 - 2) != *(v10 - 2) )
        {
          v32 = 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) - 1;
          if ( 2 * (*(v7 - 2) > (unsigned int)*(v10 - 2)) != 1 )
            return v32;
        }
LABEL_255:
        result = *(v7 - 1) - *(v10 - 1);
        if ( result != 0 )
          return 2 * (result > 0) - 1;
        return result;
      default:
        if ( *(_DWORD *)v8 == *(_DWORD *)v9 )
        {
          v6 = 0;
        }
        else
        {
          if ( *v8 != *v9 )
          {
            v6 = 2 * (*v8 > (unsigned int)*v9) - 1;
            if ( 2 * (*v8 > (unsigned int)*v9) != 1 )
              return v6;
          }
          if ( v8[1] != v9[1] )
          {
            v6 = 2 * (v8[1] > (unsigned int)v9[1]) - 1;
            if ( 2 * (v8[1] > (unsigned int)v9[1]) != 1 )
              return v6;
          }
          if ( v8[2] != v9[2] )
          {
            v6 = 2 * (v8[2] > (unsigned int)v9[2]) - 1;
            if ( 2 * (v8[2] > (unsigned int)v9[2]) != 1 )
              return v6;
          }
          v6 = v8[3] - v9[3];
          if ( v6 != 0 )
            v6 = 2 * (v8[3] > (unsigned int)v9[3]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 1) == *((_DWORD *)v9 + 1) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[4] != v9[4] )
          {
            v6 = 2 * (v8[4] > (unsigned int)v9[4]) - 1;
            if ( 2 * (v8[4] > (unsigned int)v9[4]) != 1 )
              return v6;
          }
          if ( v8[5] != v9[5] )
          {
            v6 = 2 * (v8[5] > (unsigned int)v9[5]) - 1;
            if ( 2 * (v8[5] > (unsigned int)v9[5]) != 1 )
              return v6;
          }
          if ( v8[6] != v9[6] )
          {
            v6 = 2 * (v8[6] > (unsigned int)v9[6]) - 1;
            if ( 2 * (v8[6] > (unsigned int)v9[6]) != 1 )
              return v6;
          }
          v6 = v8[7] - v9[7];
          if ( v6 != 0 )
            v6 = 2 * (v8[7] > (unsigned int)v9[7]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 2) == *((_DWORD *)v9 + 2) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[8] != v9[8] )
          {
            v6 = 2 * (v8[8] > (unsigned int)v9[8]) - 1;
            if ( 2 * (v8[8] > (unsigned int)v9[8]) != 1 )
              return v6;
          }
          if ( v8[9] != v9[9] )
          {
            v6 = 2 * (v8[9] > (unsigned int)v9[9]) - 1;
            if ( 2 * (v8[9] > (unsigned int)v9[9]) != 1 )
              return v6;
          }
          if ( v8[10] != v9[10] )
          {
            v6 = 2 * (v8[10] > (unsigned int)v9[10]) - 1;
            if ( 2 * (v8[10] > (unsigned int)v9[10]) != 1 )
              return v6;
          }
          v6 = v8[11] - v9[11];
          if ( v6 != 0 )
            v6 = 2 * (v8[11] > (unsigned int)v9[11]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 3) == *((_DWORD *)v9 + 3) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[12] != v9[12] )
          {
            v6 = 2 * (v8[12] > (unsigned int)v9[12]) - 1;
            if ( 2 * (v8[12] > (unsigned int)v9[12]) != 1 )
              return v6;
          }
          if ( v8[13] != v9[13] )
          {
            v6 = 2 * (v8[13] > (unsigned int)v9[13]) - 1;
            if ( 2 * (v8[13] > (unsigned int)v9[13]) != 1 )
              return v6;
          }
          if ( v8[14] != v9[14] )
          {
            v6 = 2 * (v8[14] > (unsigned int)v9[14]) - 1;
            if ( 2 * (v8[14] > (unsigned int)v9[14]) != 1 )
              return v6;
          }
          v6 = v8[15] - v9[15];
          if ( v6 != 0 )
            v6 = 2 * (v8[15] > (unsigned int)v9[15]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 4) == *((_DWORD *)v9 + 4) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[16] != v9[16] )
          {
            v6 = 2 * (v8[16] > (unsigned int)v9[16]) - 1;
            if ( 2 * (v8[16] > (unsigned int)v9[16]) != 1 )
              return v6;
          }
          if ( v8[17] != v9[17] )
          {
            v6 = 2 * (v8[17] > (unsigned int)v9[17]) - 1;
            if ( 2 * (v8[17] > (unsigned int)v9[17]) != 1 )
              return v6;
          }
          if ( v8[18] != v9[18] )
          {
            v6 = 2 * (v8[18] > (unsigned int)v9[18]) - 1;
            if ( 2 * (v8[18] > (unsigned int)v9[18]) != 1 )
              return v6;
          }
          v6 = v8[19] - v9[19];
          if ( v6 != 0 )
            v6 = 2 * (v8[19] > (unsigned int)v9[19]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 5) == *((_DWORD *)v9 + 5) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[20] != v9[20] )
          {
            v6 = 2 * (v8[20] > (unsigned int)v9[20]) - 1;
            if ( 2 * (v8[20] > (unsigned int)v9[20]) != 1 )
              return v6;
          }
          if ( v8[21] != v9[21] )
          {
            v6 = 2 * (v8[21] > (unsigned int)v9[21]) - 1;
            if ( 2 * (v8[21] > (unsigned int)v9[21]) != 1 )
              return v6;
          }
          if ( v8[22] != v9[22] )
          {
            v6 = 2 * (v8[22] > (unsigned int)v9[22]) - 1;
            if ( 2 * (v8[22] > (unsigned int)v9[22]) != 1 )
              return v6;
          }
          v6 = v8[23] - v9[23];
          if ( v6 != 0 )
            v6 = 2 * (v8[23] > (unsigned int)v9[23]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 6) == *((_DWORD *)v9 + 6) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[24] != v9[24] )
          {
            v6 = 2 * (v8[24] > (unsigned int)v9[24]) - 1;
            if ( 2 * (v8[24] > (unsigned int)v9[24]) != 1 )
              return v6;
          }
          if ( v8[25] != v9[25] )
          {
            v6 = 2 * (v8[25] > (unsigned int)v9[25]) - 1;
            if ( 2 * (v8[25] > (unsigned int)v9[25]) != 1 )
              return v6;
          }
          if ( v8[26] != v9[26] )
          {
            v6 = 2 * (v8[26] > (unsigned int)v9[26]) - 1;
            if ( 2 * (v8[26] > (unsigned int)v9[26]) != 1 )
              return v6;
          }
          v6 = v8[27] - v9[27];
          if ( v6 != 0 )
            v6 = 2 * (v8[27] > (unsigned int)v9[27]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        if ( *((_DWORD *)v8 + 7) == *((_DWORD *)v9 + 7) )
        {
          v6 = 0;
        }
        else
        {
          if ( v8[28] != v9[28] )
          {
            v6 = 2 * (v8[28] > (unsigned int)v9[28]) - 1;
            if ( 2 * (v8[28] > (unsigned int)v9[28]) != 1 )
              return v6;
          }
          if ( v8[29] != v9[29] )
          {
            v6 = 2 * (v8[29] > (unsigned int)v9[29]) - 1;
            if ( 2 * (v8[29] > (unsigned int)v9[29]) != 1 )
              return v6;
          }
          if ( v8[30] != v9[30] )
          {
            v6 = 2 * (v8[30] > (unsigned int)v9[30]) - 1;
            if ( 2 * (v8[30] > (unsigned int)v9[30]) != 1 )
              return v6;
          }
          v6 = v8[31] - v9[31];
          if ( v6 != 0 )
            v6 = 2 * (v8[31] > (unsigned int)v9[31]) - 1;
        }
        if ( v6 != 0 )
          return v6;
        v5 = v8 + 32;
        v4 = v9 + 32;
        v3 -= 32;
        continue;
    }
  }
}

// Address: 0x41A782
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

  v8 = dword_42FD74;
  v9 = nullptr;
  v10 = v7;
  if ( dword_42FD74 == 0 )
  {
    if ( GetStringTypeW(1u, &String1, 1, CharType) )
    {
      dword_42FD74 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v8 = 2;
      dword_42FD74 = 2;
    }
    else
    {
      v8 = dword_42FD74;
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

// Address: 0x41A93C
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

// Address: 0x41A97E
int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  const char *v4; // ecx
  const char *v5; // eax
  char v6; // dl
  char v7; // dl
  char v8; // dl
  char v9; // dl
  int v10; // eax
  int v11; // ecx
  size_t v12; // [esp+4h] [ebp-4h]

  v12 = 0;
  if ( MaxCount == 0 )
    return 0;
  if ( MaxCount <= 4 )
  {
    v4 = Str2;
    v5 = Str1;
    goto LABEL_23;
  }
  v4 = Str2;
  v5 = Str1;
  do
  {
    v6 = *v5;
    v5 += 4;
    v4 += 4;
    if ( v6 == 0 || v6 != *(v4 - 4) )
    {
      v10 = *((unsigned __int8 *)v5 - 4);
      v11 = *((unsigned __int8 *)v4 - 4);
      return v10 - v11;
    }
    v7 = *(v5 - 3);
    if ( v7 == 0 || v7 != *(v4 - 3) )
    {
      v10 = *((unsigned __int8 *)v5 - 3);
      v11 = *((unsigned __int8 *)v4 - 3);
      return v10 - v11;
    }
    v8 = *(v5 - 2);
    if ( v8 == 0 || v8 != *(v4 - 2) )
    {
      v10 = *((unsigned __int8 *)v5 - 2);
      v11 = *((unsigned __int8 *)v4 - 2);
      return v10 - v11;
    }
    v9 = *(v5 - 1);
    if ( v9 == 0 || v9 != *(v4 - 1) )
    {
      v10 = *((unsigned __int8 *)v5 - 1);
      v11 = *((unsigned __int8 *)v4 - 1);
      return v10 - v11;
    }
    v12 += 4;
  }
  while ( v12 < MaxCount - 4 );
  while ( 1 )
  {
LABEL_23:
    if ( v12 >= MaxCount )
      return 0;
    if ( *v5 == 0 || *v5 != *v4 )
      break;
    ++v5;
    ++v4;
    ++v12;
  }
  v10 = *(unsigned __int8 *)v5;
  v11 = *(unsigned __int8 *)v4;
  return v10 - v11;
}

// Address: 0x41AA40
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

// Address: 0x41AA80
// Microsoft VisualC 2-14/net runtime
BOOL __cdecl unknown_libname_9(int a1)
{
  return a1 != 0;
}

// Address: 0x41AA92
_DWORD *__cdecl _wopenfile(char *FileName, _WORD *FileHandle, int ShareFlag, _DWORD *a4)
{
  _WORD *v4; // esi
  int v5; // eax
  _DWORD *result; // eax
  unsigned int v7; // ebx
  int v8; // ecx
  const wchar_t *v9; // esi
  wchar_t v10; // ax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  const wchar_t *i; // esi
  int v21; // ecx
  int v22; // [esp+Ch] [ebp-10h]
  int v23; // [esp+10h] [ebp-Ch]
  int v24; // [esp+14h] [ebp-8h]
  unsigned int v25; // [esp+18h] [ebp-4h]

  v4 = FileHandle;
  v23 = 0;
  v24 = 0;
  v22 = 0;
  while ( *v4 == 32 )
    ++v4;
  v5 = (unsigned __int16)*v4;
  switch ( v5 )
  {
    case 'a':
      v7 = 265;
      break;
    case 'r':
      v7 = 0;
      v25 = dword_42FDDC | 1;
      goto LABEL_13;
    case 'w':
      v7 = 769;
      break;
    default:
LABEL_7:
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return nullptr;
  }
  v25 = dword_42FDDC | 2;
LABEL_13:
  v8 = 1;
  v9 = v4 + 1;
  v10 = *v9;
  if ( *v9 == 0 )
    goto LABEL_67;
  while ( v8 != 0 )
  {
    if ( v10 > 0x53u )
    {
      v16 = v10 - 84;
      if ( v16 == 0 )
      {
        if ( (v7 & 0x1000) == 0 )
        {
          v7 |= 0x1000u;
          goto LABEL_49;
        }
        goto LABEL_47;
      }
      v17 = v16 - 14;
      if ( v17 != 0 )
      {
        v18 = v17 - 1;
        if ( v18 != 0 )
        {
          v19 = v18 - 11;
          if ( v19 != 0 )
          {
            if ( v19 != 6 )
              goto LABEL_7;
            if ( (v7 & 0xC000) != 0 )
              goto LABEL_47;
            v7 |= 0x4000u;
          }
          else
          {
            if ( v23 != 0 )
              goto LABEL_47;
            v25 &= ~0x4000u;
            v23 = 1;
          }
        }
        else
        {
          if ( v23 != 0 )
            goto LABEL_47;
          v25 |= 0x4000u;
          v23 = 1;
        }
      }
      else
      {
        if ( (v7 & 0xC000) != 0 )
          goto LABEL_47;
        v7 |= 0x8000u;
      }
    }
    else if ( v10 == 83 )
    {
      if ( v24 != 0 )
        goto LABEL_47;
      v24 = 1;
      v7 |= 0x20u;
    }
    else
    {
      v11 = v10 - 32;
      if ( v11 != 0 )
      {
        v12 = v11 - 11;
        if ( v12 != 0 )
        {
          v13 = v12 - 1;
          if ( v13 == 0 )
          {
            v22 = 1;
LABEL_47:
            v8 = 0;
            goto LABEL_49;
          }
          v14 = v13 - 24;
          if ( v14 != 0 )
          {
            v15 = v14 - 10;
            if ( v15 != 0 )
            {
              if ( v15 != 4 )
                goto LABEL_7;
              if ( v24 != 0 )
                goto LABEL_47;
              v24 = 1;
              v7 |= 0x10u;
            }
            else
            {
              v7 |= 0x80u;
            }
          }
          else
          {
            if ( (v7 & 0x40) != 0 )
              goto LABEL_47;
            v7 |= 0x40u;
          }
        }
        else
        {
          if ( (v7 & 2) != 0 )
            goto LABEL_47;
          v7 = v7 & 0xFFFFFFFC | 2;
          v25 = v25 & 0xFFFFFF7C | 0x80;
        }
      }
    }
LABEL_49:
    v10 = *++v9;
    if ( *v9 == 0 )
      break;
  }
  if ( v22 == 0 )
    goto LABEL_67;
  while ( *v9 == 32 )
    ++v9;
  if ( wcsncmp(L"ccs", v9, 3u) != 0 )
    goto LABEL_7;
  for ( i = v9 + 3; *i == 32; ++i )
    ;
  if ( *i != 61 )
    goto LABEL_7;
  do
    ++i;
  while ( *i == 32 );
  if ( _wcsnicmp(i, L"UTF-8", 5u) == 0 )
  {
    v9 = i + 5;
    v7 |= 0x40000u;
    goto LABEL_67;
  }
  if ( _wcsnicmp(i, L"UTF-16LE", 8u) == 0 )
  {
    v9 = i + 8;
    v7 |= 0x20000u;
    goto LABEL_67;
  }
  if ( _wcsnicmp(i, L"UNICODE", 7u) != 0 )
    goto LABEL_7;
  v9 = i + 7;
  v7 |= 0x10000u;
LABEL_67:
  while ( *v9 == 32 )
    ++v9;
  if ( *v9 != 0 )
    goto LABEL_7;
  if ( _sopen_s((int *)&FileHandle, FileName, v7, ShareFlag, 384) != 0 )
    return nullptr;
  result = a4;
  ++dword_42F250;
  a4[3] = v25;
  v21 = (int)FileHandle;
  result[1] = 0;
  *result = 0;
  result[2] = 0;
  result[7] = 0;
  result[4] = v21;
  return result;
}

// Address: 0x41AD46
_DWORD *_getstream()
{
  _DWORD *v0; // edi
  int i; // esi
  char *v2; // eax
  int v3; // eax
  int v4; // esi

  v0 = nullptr;
  _lock(1);
  for ( i = 0; i < dword_4311A0; ++i )
  {
    v2 = (char *)dword_43019C + 4 * i;
    if ( *(_DWORD *)v2 == 0 )
    {
      v4 = 4 * i;
      *(_DWORD *)((char *)dword_43019C + v4) = _malloc_crt(0x38u);
      if ( *(_DWORD *)((char *)dword_43019C + v4) != 0 )
      {
        if ( __crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_43019C + v4) + 32), 0xFA0u) != 0 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)dword_43019C + v4) + 32));
          v0 = *(_DWORD **)((char *)dword_43019C + v4);
          v0[3] = 0;
        }
        else
        {
          free(*(void **)((char *)dword_43019C + v4));
          *(_DWORD *)((char *)dword_43019C + v4) = 0;
        }
      }
      break;
    }
    v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    if ( (v3 & 0x83) == 0 && (v3 & 0x8000) == 0 )
    {
      if ( (unsigned int)(i - 3) <= 0x10 && _mtinitlocknum(i + 16) == 0 )
        break;
      _lock_file2(i, *((_DWORD *)dword_43019C + i));
      if ( (*(_BYTE *)(*((_DWORD *)dword_43019C + i) + 12) & 0x83) == 0 )
      {
        v0 = *((_DWORD **)dword_43019C + i);
        break;
      }
      _unlock_file2(i, *((_DWORD *)dword_43019C + i));
    }
  }
  if ( v0 != nullptr )
  {
    v0[3] &= 0x8000u;
    v0[1] = 0;
    v0[2] = 0;
    *v0 = 0;
    v0[7] = 0;
    v0[4] = -1;
  }
  _unlock(1);
  return v0;
}

// Address: 0x41AE80
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

// Address: 0x41AF10
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

// Address: 0x41AF56
int __stdcall _seh_longjmp_unwind4(int a1)
{
  return _local_unwind4(*(_DWORD **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// Address: 0x41AF72
int __thiscall _EH4_CallFilterFunc(int (*this)(void))
{
  return this();
}

// Address: 0x41AF89
int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}

// Address: 0x41AFA2
void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &ReturnPoint, nullptr, nullptr);
}

// Address: 0x41AFBC
int __fastcall _EH4_LocalUnwind(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  return _local_unwind4(a4, a1, a2);
}

// Address: 0x41AFD3
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

// Address: 0x41B00B
int __cdecl isleadbyte(int C)
{
  return _isleadbyte_l(C, nullptr);
}

// Address: 0x41B01E
int __cdecl __ansicp(LCID Locale)
{
  CHAR LCData[8]; // [esp+0h] [ebp-Ch] BYREF

  LCData[6] = 0;
  if ( GetLocaleInfoA(Locale, 0x1004u, LCData, 6) != 0 )
    return atol(LCData);
  else
    return -1;
}

// Address: 0x41B067
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

// Address: 0x41B220
int _alloca_probe_16()
{
  return _alloca_probe();
}

// Address: 0x41B236
int _alloca_probe_8()
{
  return _alloca_probe();
}

// Address: 0x41B24C
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

// Address: 0x41B304
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

// Address: 0x41B38B
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

// Address: 0x41B46E
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
      if ( dword_42FD78 == 0 )
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
    if ( dword_43005C == 3 )
    {
      v4 = (v4 + 15) & 0xFFFFFFF0;
      if ( Sizea <= dword_43004C )
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

// Address: 0x41B58C
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
    if ( dword_43005C == 3 )
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
          if ( v3 <= dword_43004C )
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
        if ( dword_42FD78 == 0 )
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
        if ( dword_42FD78 == 0 )
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

// Address: 0x41B7A7
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

// Address: 0x41B822
int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    v1 = &off_42CF80[i];
    result = (int (*)())_encode_pointer(off_42CF80[i]);
    *v1 = result;
  }
  return result;
}

// Address: 0x41B850
BOOL __cdecl _ValidateImageBase(int a1)
{
  int v2; // eax

  return *(_WORD *)a1 == 23117 && *(_DWORD *)(v2 = a1 + *(_DWORD *)(a1 + 60)) == 17744 && *(_WORD *)(v2 + 24) == 267;
}

// Address: 0x41B890
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

// Address: 0x41B8E0
BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int PESection; // eax

  return _ValidateImageBase(0x400000)
      && (PESection = _FindPESection(0x400000, a1 - 0x400000)) != 0
      && *(int *)(PESection + 36) >= 0;
}

// Address: 0x41B99D
int __cdecl sub_41B99D(int a1)
{
  dword_42FDB8 = a1;
  return a1;
}

// Address: 0x41B9AC
int __cdecl sub_41B9AC(int a1)
{
  dword_42FDBC = a1;
  return a1;
}

// Address: 0x41B9BB
BOOL __cdecl __crtInitCritSecAndSpinCount(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
  return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}

// Address: 0x41BA1B
int __cdecl _wchartodigit(unsigned __int16 a1)
{
  int v2; // ecx
  unsigned __int16 v3; // dx

  if ( a1 < 0x30u )
    return -1;
  if ( a1 < 0x3Au )
    return a1 - 48;
  v2 = 65296;
  if ( a1 >= 0xFF10u )
  {
    v3 = -230;
LABEL_40:
    if ( a1 < v3 )
      return a1 - v2;
    return -1;
  }
  v2 = 1632;
  if ( a1 >= 0x660u )
  {
    if ( a1 < 0x66Au )
      return a1 - v2;
    v2 = 1776;
    if ( a1 >= 0x6F0u )
    {
      if ( a1 < 0x6FAu )
        return a1 - v2;
      v2 = 2406;
      if ( a1 >= 0x966u )
      {
        if ( a1 < 0x970u )
          return a1 - v2;
        v2 = 2534;
        if ( a1 >= 0x9E6u )
        {
          if ( a1 < 0x9F0u )
            return a1 - v2;
          v2 = 2662;
          if ( a1 >= 0xA66u )
          {
            if ( a1 < 0xA70u )
              return a1 - v2;
            v2 = 2790;
            if ( a1 >= 0xAE6u )
            {
              if ( a1 < 0xAF0u )
                return a1 - v2;
              v2 = 2918;
              if ( a1 >= 0xB66u )
              {
                if ( a1 < 0xB70u )
                  return a1 - v2;
                v2 = 3174;
                if ( a1 >= 0xC66u )
                {
                  if ( a1 < 0xC70u )
                    return a1 - v2;
                  v2 = 3302;
                  if ( a1 >= 0xCE6u )
                  {
                    if ( a1 < 0xCF0u )
                      return a1 - v2;
                    v2 = 3430;
                    if ( a1 >= 0xD66u )
                    {
                      if ( a1 < 0xD70u )
                        return a1 - v2;
                      v2 = 3664;
                      if ( a1 >= 0xE50u )
                      {
                        if ( a1 < 0xE5Au )
                          return a1 - v2;
                        v2 = 3792;
                        if ( a1 >= 0xED0u )
                        {
                          if ( a1 < 0xEDAu )
                            return a1 - v2;
                          v2 = 3872;
                          if ( a1 >= 0xF20u )
                          {
                            if ( a1 < 0xF2Au )
                              return a1 - v2;
                            v2 = 4160;
                            if ( a1 >= 0x1040u )
                            {
                              if ( a1 < 0x104Au )
                                return a1 - v2;
                              v2 = 6112;
                              if ( a1 >= 0x17E0u )
                              {
                                if ( a1 < 0x17EAu )
                                  return a1 - v2;
                                v2 = 6160;
                                if ( a1 >= 0x1810u )
                                {
                                  v3 = 6170;
                                  goto LABEL_40;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return -1;
}

// Address: 0x41BBF6
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
    *(_DWORD *)CharType = (unsigned __int16)(Type & *((_WORD *)off_42C3D8 + C));
  }
  return Type & CharType[0];
}

// Address: 0x41BC80
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// Address: 0x41BCC0
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

// Address: 0x41BD55
int __cdecl sub_41BD55(int a1, int a2, int a3)
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
  if ( dword_42FDC0 == 0 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( MessageBoxA == nullptr )
      return 0;
    dword_42FDC0 = (int)_encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(v5, "GetActiveWindow");
    dword_42FDC4 = (int)_encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(v5, "GetLastActivePopup");
    dword_42FDC8 = (int)_encode_pointer(GetLastActivePopup);
    GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                          v5,
                                                                                          "GetUserObjectInformationA");
    dword_42FDD0 = (int)_encode_pointer(GetUserObjectInformationA);
    if ( dword_42FDD0 != 0 )
    {
      GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(v5, "GetProcessWindowStation");
      dword_42FDCC = (int)_encode_pointer(GetProcessWindowStation);
    }
  }
  if ( (PVOID)dword_42FDCC == v3
    || (PVOID)dword_42FDD0 == v3
    || (v11 = (int (*)(void))_decode_pointer((void *)dword_42FDCC),
        v12 = _decode_pointer((void *)dword_42FDD0),
        v13 = (int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v12,
        v11 == nullptr)
    || v12 == nullptr
    || (v14 = v11()) != 0 && v13(v14, 1, v19, 12, v20) != 0 && (v19[8] & 1) != 0 )
  {
    if ( (PVOID)dword_42FDC4 != v3 )
    {
      v15 = (int (*)(void))_decode_pointer((void *)dword_42FDC4);
      if ( v15 != nullptr )
      {
        v21 = v15();
        if ( v21 != 0 && (PVOID)dword_42FDC8 != v3 )
        {
          v16 = (int (__stdcall *)(int))_decode_pointer((void *)dword_42FDC8);
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
  v17 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_42FDC0);
  if ( v17 != nullptr )
    return v17(v21, a1, a2, a3);
  return 0;
}

// Address: 0x41BEBE
int __cdecl _set_error_mode(int Mode)
{
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_42F24C;
      dword_42F24C = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_42F24C;
  }
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return -1;
}

// Address: 0x41BF09
int __cdecl __crtGetLocaleInfoW(struct localeinfo_struct *a1, LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  int result; // eax
  _BYTE v6[8]; // [esp+0h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-8h]
  char v8; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v6, a1);
  result = GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
  if ( v8 != 0 )
    *(_DWORD *)(v7 + 112) &= ~2u;
  return result;
}

// Address: 0x41BF3D
int __cdecl __crtGetLocaleInfoA_stat(
        struct localeinfo_struct *a1,
        LCID Locale,
        LCTYPE LCType,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        UINT CodePage)
{
  int v6; // eax
  int v7; // esi
  int LocaleInfoW; // eax
  int v9; // ecx
  unsigned int v11; // eax
  void *v12; // esp
  WCHAR *v13; // edi
  WCHAR *v14; // eax
  int v15; // eax
  int v16; // [esp+0h] [ebp-14h] BYREF
  int v17; // [esp+8h] [ebp-Ch] BYREF
  int cchData; // [esp+Ch] [ebp-8h]

  v6 = dword_42FDD4;
  v7 = 0;
  if ( dword_42FDD4 == 0 )
  {
    if ( GetLocaleInfoW(0, 1u, nullptr, 0) != 0 )
    {
      dword_42FDD4 = 1;
      goto LABEL_10;
    }
    if ( GetLastError() == 120 )
    {
      v6 = 2;
      dword_42FDD4 = 2;
    }
    else
    {
      v6 = dword_42FDD4;
    }
  }
  if ( v6 == 2 || v6 == 0 )
    return GetLocaleInfoA(Locale, LCType, lpMultiByteStr, cbMultiByte);
  if ( v6 != 1 )
    return 0;
LABEL_10:
  if ( CodePage == 0 )
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 4);
  LocaleInfoW = GetLocaleInfoW(Locale, LCType, nullptr, 0);
  v9 = LocaleInfoW;
  cchData = LocaleInfoW;
  if ( LocaleInfoW == 0 )
    return 0;
  if ( LocaleInfoW <= 0 || 0xFFFFFFE0 / LocaleInfoW < 2 )
  {
    v13 = nullptr;
  }
  else
  {
    v11 = 2 * LocaleInfoW + 8;
    if ( v11 <= 0x400 )
    {
      v12 = alloca(v11);
      if ( &v16 != nullptr )
      {
        v16 = 52428;
        v13 = (WCHAR *)&v17;
        goto LABEL_23;
      }
      return 0;
    }
    v14 = (WCHAR *)malloc(2 * v9 + 8);
    if ( v14 != nullptr )
    {
      *(_DWORD *)v14 = 56797;
      v14 += 4;
    }
    v13 = v14;
  }
LABEL_23:
  if ( v13 == nullptr )
    return 0;
  if ( GetLocaleInfoW(Locale, LCType, v13, cchData) != 0 )
  {
    if ( cbMultiByte != 0 )
      v15 = WideCharToMultiByte(CodePage, 0, v13, -1, lpMultiByteStr, cbMultiByte, nullptr, nullptr);
    else
      v15 = WideCharToMultiByte(CodePage, 0, v13, -1, nullptr, 0, nullptr, nullptr);
    v7 = v15;
  }
  _freea(v13);
  return v7;
}

// Address: 0x41C07C
int __cdecl __crtGetLocaleInfoA(
        struct localeinfo_struct *a1,
        LCID Locale,
        LCTYPE LCType,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        UINT CodePage)
{
  int result; // eax
  _BYTE v7[8]; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-8h]
  char v9; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a1);
  result = __crtGetLocaleInfoA_stat(
             (struct localeinfo_struct *)v7,
             Locale,
             LCType,
             lpMultiByteStr,
             cbMultiByte,
             CodePage);
  if ( v9 != 0 )
    *(_DWORD *)(v8 + 112) &= ~2u;
  return result;
}

// Address: 0x41C0B9
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
  v7 = (_BYTE *)(dword_430080[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4);
  *v7 &= ~2u;
  return lDistanceToMove;
}

// Address: 0x41C13E
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
  v4 = &dword_430080[FileHandle >> 5];
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

// Address: 0x41C257
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle == -2 )
  {
    *_errno() = 9;
    return 0;
  }
  else if ( FileHandle >= 0 && FileHandle < uNumber )
  {
    return *(_BYTE *)(dword_430080[FileHandle >> 5] + ((FileHandle & 0x1F) << 6) + 4) & 0x40;
  }
  else
  {
    *_errno() = 9;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 0;
  }
}

// Address: 0x41C2BB
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
      ? (v3 = &unk_42C630)
      : (v2 = &dword_430080[_fileno(Stream) >> 5], v3 = (_BYTE *)(*v2 + ((_fileno(Stream) & 0x1F) << 6))),
        (v3[36] & 0x7F) == 2
     || (_fileno(Stream) == -1 || _fileno(Stream) == -2
       ? (v5 = &unk_42C630)
       : (v4 = &dword_430080[_fileno(Stream) >> 5], v5 = (_BYTE *)(*v4 + ((_fileno(Stream) & 0x1F) << 6))),
         (v5[36] & 0x7F) == 1
      || (_fileno(Stream) == -1 || _fileno(Stream) == -2
        ? (v7 = (char *)&unk_42C630)
        : (v6 = &dword_430080[_fileno(Stream) >> 5], v7 = (char *)(*v6 + ((_fileno(Stream) & 0x1F) << 6))),
          v7[4] >= 0))) )
  {
    v10 = Stream->_cnt - 2 < 0;
    Stream->_cnt -= 2;
    if ( v10 )
    {
      return _flswbuf(Character, Stream);
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

// Address: 0x41C442
int __cdecl _get_printf_count_output()
{
  return dword_42FDD8 == (__security_cookie | 1);
}

// Address: 0x41C458
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

// Address: 0x41C56F
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  return _mbtowc_l(DstCh, SrcCh, SrcSizeInBytes, nullptr);
}

// Address: 0x41C589
__int16 __usercall write_char_0@<ax>(int a1@<eax>, _DWORD *a2@<esi>, wchar_t Character)
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

// Address: 0x41C5B8
__int16 __usercall write_multi_char_0@<ax>(_DWORD *a1@<eax>, wchar_t a2, int a3, int a4)
{
  _DWORD *v4; // esi

  v4 = a1;
  do
  {
    if ( a3 <= 0 )
      break;
    --a3;
    LOWORD(a1) = write_char_0(a4, v4, a2);
  }
  while ( *v4 != -1 );
  return (__int16)a1;
}

// Address: 0x41C5DF
int __cdecl _woutput_s_l(int a1, unsigned __int16 *a2, struct localeinfo_struct *a3, unsigned __int16 *a4)
{
  unsigned __int16 *v4; // ebx
  unsigned __int16 *v5; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int16 v12; // ax
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
  unsigned __int16 v51; // [esp-4h] [ebp-484h]
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
  unsigned __int16 v66[2]; // [esp+50h] [ebp-430h] BYREF
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
      v8 = byte_422558[(unsigned __int16)v7] & 0xF;
    v9 = (unsigned __int8)byte_422578[9 * v8 + v65] >> 4;
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
              write_char_0(v63, &v70, v7);
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
                v74 = off_42C628;
                v20 = strlen(off_42C628);
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
          v29 = (void (__cdecl *)(_DWORD *, const char *, int, int, int, int, __crt_locale_pointers *))_decode_pointer(off_42CF98[0]);
          v29(v53, v13, v47, v48, v49, v50, &Locale);
          v30 = v76 & 0x80;
          if ( (v76 & 0x80) != 0 && v75 == 0 )
          {
            v31 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_42CFA4);
            v31(v13, &Locale);
          }
          if ( (_WORD)v71 == 103 && v30 == 0 )
          {
            v32 = (void (__cdecl *)(const char *, __crt_locale_pointers *))_decode_pointer(off_42CFA0[0]);
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
              v74 = off_42C628;
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
            v74 = (char *)off_42C62C;
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
                write_multi_char_0(&v70, 0x20u, v67 - v73 - v69, v63);
              v44 = v63;
              write_string(&v70, v66, v63, v69);
              if ( (v76 & 8) != 0 && (v76 & 4) == 0 )
                write_multi_char_0(&v70, 0x30u, v43, v44);
              if ( v68 != 0 || v42 <= 0 )
              {
                write_string(&v70, (unsigned __int16 *)v74, v44, v42);
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
                  write_char_0(v63, &v70, v54[0]);
                  v45 += v52;
                  if ( v71 <= 0 )
                    goto LABEL_203;
                }
                v70 = -1;
              }
LABEL_203:
              if ( v70 >= 0 && (v76 & 4) != 0 )
                write_multi_char_0(&v70, 0x20u, v43, v63);
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

// Address: 0x41D17F
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

// Address: 0x41D2EB
errno_t __cdecl wctomb_s(int *SizeConverted, char *MbCh, rsize_t SizeInBytes, wchar_t WCh)
{
  return _wctomb_s_l(SizeConverted, MbCh, SizeInBytes, WCh, nullptr);
}

// Address: 0x41D308
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
  v5 = &dword_430080[FileHandle >> 5];
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
        while ( byte_42CFB0[v26] == 0 && v27 <= 4 && v25 >= lpMultiByteStr )
        {
          v26 = (unsigned __int8)*--v25;
          ++v27;
        }
        v28 = *v25;
        if ( byte_42CFB0[(unsigned __int8)*v25] == 0 )
        {
          *_errno() = 42;
LABEL_93:
          v41 = -1;
          goto $error_return$28993;
        }
        if ( byte_42CFB0[(unsigned __int8)*v25] + 1 == v27 )
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

// Address: 0x41D8CA
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
    || (v4 = &dword_430080[FileHandle >> 5], v5 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(*v4 + v5 + 4) & 1) == 0) )
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

// Address: 0x41D9D0
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

// Address: 0x41D9FB
wint_t __cdecl _putwch_nolock(wchar_t Character)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( dword_42D0B0[0] == 0 )
    goto LABEL_10;
  if ( hConsoleOutput == (HANDLE)-2 )
    __initconout();
  if ( hConsoleOutput == (HANDLE)-1 )
    return -1;
  if ( !WriteConsoleW(hConsoleOutput, &Character, 1u, &NumberOfCharsWritten, nullptr) )
  {
    if ( dword_42D0B0[0] != 2 || GetLastError() != 120 )
      return -1;
    dword_42D0B0[0] = 0;
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP();
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, &Character, 1, MultiByteStr, 5, nullptr, nullptr);
    if ( hConsoleOutput != (HANDLE)-1 && WriteConsoleA(hConsoleOutput, MultiByteStr, v3, &NumberOfCharsWritten, nullptr) )
      return Character;
    return -1;
  }
  dword_42D0B0[0] = 1;
  return Character;
}

// Address: 0x41DAC0
int __cdecl _set_osfhnd(int a1, HANDLE hHandle)
{
  int *v2; // edi
  int v3; // esi

  if ( a1 >= 0 && a1 < uNumber && (v2 = &dword_430080[a1 >> 5], *(_DWORD *)((v3 = (a1 & 0x1F) << 6) + *v2) == -1) )
  {
    if ( dword_42C114 == 1 )
    {
      if ( a1 != 0 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, hHandle);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, hHandle);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, hHandle);
      }
    }
    *(_DWORD *)(v3 + *v2) = hHandle;
    return 0;
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}

// Address: 0x41DB41
int __cdecl _free_osfhnd(int a1)
{
  int *v1; // edi
  int v2; // esi
  _DWORD *v3; // eax

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = &dword_430080[a1 >> 5], v2 = (a1 & 0x1F) << 6, ((v3 = (_DWORD *)(v2 + *v1))[1] & 1) == 0)
    || *v3 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_42C114 == 1 )
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

// Address: 0x41DBC7
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
         && ((v2 = (intptr_t *)(dword_430080[FileHandle >> 5] + ((FileHandle & 0x1F) << 6)))[1] & 1) != 0 )
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

// Address: 0x41DC3E
BOOL __cdecl __lock_fhandle(int a1)
{
  int v1; // esi
  BOOL inited; // [esp+10h] [ebp-1Ch]

  v1 = dword_430080[a1 >> 5] + ((a1 & 0x1F) << 6);
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
    EnterCriticalSection((LPCRITICAL_SECTION)(dword_430080[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
  return inited;
}

// Address: 0x41DCDE
void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_430080[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}

// Address: 0x41DD05
int _alloc_osfhnd()
{
  int v0; // edi
  unsigned int v2; // esi
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // [esp+14h] [ebp-24h]
  int v6; // [esp+1Ch] [ebp-1Ch]

  v6 = -1;
  v0 = 0;
  v5 = 0;
  if ( _mtinitlocknum(11) == 0 )
    return -1;
  _lock(11);
  while ( v0 < 64 )
  {
    v2 = dword_430080[v0];
    if ( v2 == 0 )
    {
      v3 = _calloc_crt(0x20u, 64);
      if ( v3 != 0 )
      {
        v4 = &dword_430080[v0];
        *v4 = v3;
        uNumber += 32;
        while ( v3 < *v4 + 2048 )
        {
          *(_BYTE *)(v3 + 4) = 0;
          *(_DWORD *)v3 = -1;
          *(_BYTE *)(v3 + 5) = 10;
          *(_DWORD *)(v3 + 8) = 0;
          v3 += 64;
        }
        v6 = 32 * v0;
        *(_BYTE *)(dword_430080[(32 * v0) >> 5] + 4) = 1;
        if ( !__lock_fhandle(32 * v0) )
          v6 = -1;
      }
      break;
    }
    while ( v2 < dword_430080[v0] + 2048 )
    {
      if ( (*(_BYTE *)(v2 + 4) & 1) == 0 )
      {
        if ( *(_DWORD *)(v2 + 8) == 0 )
        {
          _lock(10);
          if ( *(_DWORD *)(v2 + 8) == 0 )
          {
            if ( __crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(v2 + 12), 0xFA0u) )
              ++*(_DWORD *)(v2 + 8);
            else
              v5 = 1;
          }
          _unlock(10);
        }
        if ( v5 == 0 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 12));
          if ( (*(_BYTE *)(v2 + 4) & 1) == 0 )
          {
            *(_BYTE *)(v2 + 4) = 1;
            *(_DWORD *)v2 = -1;
            v6 = 32 * v0 + ((int)(v2 - dword_430080[v0]) >> 6);
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 12));
        }
      }
      v2 += 64;
    }
    if ( v6 != -1 )
      break;
    ++v0;
  }
  _unlock(11);
  return v6;
}

// Address: 0x41DE9F
const char *__cdecl _getenv_helper_nolock(char *Str)
{
  const char **v1; // esi
  size_t v3; // edi

  v1 = (const char **)dword_42F5B0;
  if ( dword_430180 == 0 )
    return nullptr;
  if ( dword_42F5B0 != nullptr
    || dword_42F5B8 != nullptr && __wtomb_environ() == 0 && (v1 = (const char **)dword_42F5B0, dword_42F5B0 != nullptr) )
  {
    if ( Str != nullptr )
    {
      v3 = strlen(Str);
      while ( *v1 != nullptr )
      {
        if ( strlen(*v1) > v3
          && (*v1)[v3] == 61
          && _mbsnbicoll((const unsigned __int8 *)*v1, (const unsigned __int8 *)Str, v3) == 0 )
        {
          return &(*v1)[v3 + 1];
        }
        ++v1;
      }
    }
  }
  return nullptr;
}

// Address: 0x41DF26
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

// Address: 0x41DF40
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, nullptr, nullptr);
}

// Address: 0x41DF60
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

// Address: 0x41DFA5
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

// Address: 0x41E029
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

// Address: 0x41E04C
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x41E060);
}

// Address: 0x41E055
int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_42D124 = a3;
  unk_42D120 = result;
  unk_42D128 = a2;
  return result;
}

// Address: 0x41E074
int __usercall _NLG_Call@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

// Address: 0x41E077
int __cdecl __ascii_stricmp(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v4; // eax
  int v5; // ecx

  do
  {
    v4 = *a1++;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
    v5 = *a2++;
    if ( (unsigned int)(v5 - 65) <= 0x19 )
      v5 += 32;
  }
  while ( v4 != 0 && v4 == v5 );
  return v4 - v5;
}

// Address: 0x41E0B0
int __cdecl _stricmp_l(const char *String1, const char *String2, _locale_t Locale)
{
  int result; // eax
  const char *v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  __crt_locale_pointers v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  char v10; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, (struct localeinfo_struct *)Locale);
  if ( String1 != nullptr )
  {
    v4 = String2;
    if ( String2 != nullptr )
    {
      if ( *((_DWORD *)v8.locinfo + 5) != 0 )
      {
        do
        {
          v5 = _tolower_l(*(unsigned __int8 *)String1++, &v8);
          v6 = v5;
          v7 = _tolower_l(*(unsigned __int8 *)v4++, &v8);
        }
        while ( v6 != 0 && v6 == v7 );
        result = v6 - v7;
      }
      else
      {
        result = __ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
      }
      if ( v10 != 0 )
        *(_DWORD *)(v9 + 112) &= ~2u;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      if ( v10 != 0 )
        *(_DWORD *)(v9 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v10 != 0 )
      *(_DWORD *)(v9 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}

// Address: 0x41E185
int __cdecl _stricmp(const char *String1, const char *String2)
{
  if ( dword_42F254 != 0 )
    return _stricmp_l(String1, String2, nullptr);
  if ( String1 != nullptr && String2 != nullptr )
    return __ascii_stricmp((unsigned __int8 *)String1, (unsigned __int8 *)String2);
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return 0x7FFFFFFF;
}

// Address: 0x41E1D7
int __cdecl _strnicmp_l(const char *String1, const char *String2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  const char *v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  __crt_locale_pointers v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-8h]
  char v11; // [esp+18h] [ebp-4h]

  if ( MaxCount == 0 )
    return 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, (struct localeinfo_struct *)Locale);
  if ( String1 != nullptr && (v5 = String2, String2 != nullptr) )
  {
    if ( MaxCount <= 0x7FFFFFFF )
    {
      if ( *((_DWORD *)v9.locinfo + 5) != 0 )
      {
        do
        {
          v6 = _tolower_l(*(unsigned __int8 *)String1++, &v9);
          v7 = v6;
          v8 = _tolower_l(*(unsigned __int8 *)v5++, &v9);
          --MaxCount;
        }
        while ( MaxCount != 0 && v7 != 0 && v7 == v8 );
        result = v7 - v8;
      }
      else
      {
        result = __ascii_strnicmp(String1, String2, MaxCount);
      }
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

// Address: 0x41E2C9
int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  if ( dword_42F254 != 0 )
    return _strnicmp_l(String1, String2, MaxCount, nullptr);
  if ( String1 != nullptr && String2 != nullptr && MaxCount <= 0x7FFFFFFF )
    return __ascii_strnicmp(String1, String2, MaxCount);
  *_errno() = 22;
  _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
  return 0x7FFFFFFF;
}

// Address: 0x41E327
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
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
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
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
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

// Address: 0x41E404
errno_t __cdecl _itoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return xtoa_s(Value, Buffer, BufferCount, 0xAu, 1);
  else
    return xtoa_s(Value, Buffer, BufferCount, Radix, 0);
}

// Address: 0x41E42E
int __usercall _tsopen_nolock@<eax>(int *a1@<eax>, _DWORD *a2, LPCWSTR lpFileName, int a4, int a5, char a6)
{
  unsigned int v7; // eax
  int v8; // eax
  _BYTE *v9; // eax
  DWORD LastError; // eax
  DWORD FileType; // eax
  _BYTE *v13; // eax
  DWORD v14; // esi
  char v15; // cl
  _BYTE *v16; // eax
  int v17; // eax
  DWORD v18; // eax
  DWORD v19; // eax
  signed int v20; // edi
  __int64 v21; // rax
  unsigned int nolock; // eax
  __int64 v23; // rax
  DWORD v24; // eax
  int v25; // eax
  _BYTE *v26; // eax
  _BYTE *v27; // eax
  _BYTE *v28; // eax
  DWORD v29; // edi
  HANDLE v30; // eax
  DWORD v31; // eax
  _BYTE *v32; // eax
  int v33; // [esp-Ch] [ebp-4Ch]
  DWORD v34; // [esp-8h] [ebp-48h]
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+Ch] [ebp-34h] BYREF
  int Buffer; // [esp+1Ch] [ebp-24h] BYREF
  int v37; // [esp+20h] [ebp-20h] BYREF
  HANDLE hFile; // [esp+24h] [ebp-1Ch]
  int Buf; // [esp+28h] [ebp-18h] BYREF
  DWORD dwCreationDisposition; // [esp+2Ch] [ebp-14h]
  DWORD dwShareMode; // [esp+30h] [ebp-10h]
  DWORD dwFlagsAndAttributes; // [esp+34h] [ebp-Ch]
  DWORD dwDesiredAccess; // [esp+38h] [ebp-8h]
  char v44; // [esp+3Dh] [ebp-3h]
  char v45; // [esp+3Eh] [ebp-2h]
  char v46; // [esp+3Fh] [ebp-1h]

  v37 = 0;
  v45 = 0;
  SecurityAttributes.nLength = 12;
  SecurityAttributes.lpSecurityDescriptor = nullptr;
  if ( (a4 & 0x80u) == 0 )
  {
    SecurityAttributes.bInheritHandle = true;
    v46 = 0;
  }
  else
  {
    SecurityAttributes.bInheritHandle = false;
    v46 = 16;
  }
  if ( sub_41F563(&v37) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  if ( (a4 & 0x8000) == 0 && ((a4 & 0x74000) != 0 || v37 != 0x8000) )
    v46 |= 0x80u;
  if ( (a4 & 3) != 0 )
  {
    if ( (a4 & 3) != 1 )
    {
      if ( (a4 & 3) != 2 )
      {
LABEL_13:
        *__doserrno() = 0;
        *a1 = -1;
        *_errno() = 22;
        _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
        return 22;
      }
      goto LABEL_14;
    }
    if ( (a4 & 8) != 0 && (a4 & 0x70000) != 0 )
    {
LABEL_14:
      dwDesiredAccess = -1073741824;
      goto LABEL_19;
    }
    dwDesiredAccess = 0x40000000;
  }
  else
  {
    dwDesiredAccess = 0x80000000;
  }
LABEL_19:
  switch ( a5 )
  {
    case 16:
      dwShareMode = 0;
      break;
    case 32:
      dwShareMode = 1;
      break;
    case 48:
      dwShareMode = 2;
      break;
    case 64:
      dwShareMode = 3;
      break;
    case 128:
      dwShareMode = dwDesiredAccess == 0x80000000;
      break;
    default:
      goto LABEL_13;
  }
  v7 = a4 & 0x700;
  if ( v7 > 0x400 )
  {
    if ( v7 != 1280 )
    {
      if ( v7 == 1536 )
        goto LABEL_51;
      if ( v7 != 1792 )
        goto LABEL_13;
    }
    dwCreationDisposition = 1;
    goto LABEL_42;
  }
  if ( (a4 & 0x700) == 0x400 || (a4 & 0x700) == 0 )
  {
    dwCreationDisposition = 3;
    goto LABEL_42;
  }
  if ( v7 == 256 )
  {
    dwCreationDisposition = 4;
    goto LABEL_42;
  }
  if ( v7 == 512 )
  {
LABEL_51:
    dwCreationDisposition = 5;
    goto LABEL_42;
  }
  if ( v7 != 768 )
    goto LABEL_13;
  dwCreationDisposition = 2;
LABEL_42:
  dwFlagsAndAttributes = 128;
  if ( (a4 & 0x100) != 0 && (a6 & ~(_BYTE)dword_42F5A0 & 0x80u) == 0 )
    dwFlagsAndAttributes = 1;
  if ( (a4 & 0x40) != 0 )
  {
    dwFlagsAndAttributes |= 0x4000000u;
    dwDesiredAccess |= 0x10000u;
    dwShareMode |= 4u;
  }
  if ( (a4 & 0x1000) != 0 )
    dwFlagsAndAttributes |= 0x100u;
  if ( (a4 & 0x20) != 0 )
  {
    dwFlagsAndAttributes |= 0x8000000u;
  }
  else if ( (a4 & 0x10) != 0 )
  {
    dwFlagsAndAttributes |= 0x10000000u;
  }
  v8 = _alloc_osfhnd();
  *a1 = v8;
  if ( v8 == -1 )
  {
    *__doserrno() = 0;
    *a1 = -1;
    *_errno() = 24;
    return *_errno();
  }
  v34 = dwFlagsAndAttributes;
  *a2 = 1;
  hFile = CreateFileW(
            lpFileName,
            dwDesiredAccess,
            dwShareMode,
            &SecurityAttributes,
            dwCreationDisposition,
            v34,
            nullptr);
  if ( hFile == (HANDLE)-1 )
  {
    if ( (dwDesiredAccess & 0xC0000000) != 0xC0000000
      || (a4 & 1) == 0
      || (dwDesiredAccess &= ~0x80000000,
          (hFile = CreateFileW(
                     lpFileName,
                     dwDesiredAccess,
                     dwShareMode,
                     &SecurityAttributes,
                     dwCreationDisposition,
                     dwFlagsAndAttributes,
                     nullptr)) == (HANDLE)-1) )
    {
      v9 = (_BYTE *)(dword_430080[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4);
      *v9 &= ~1u;
      LastError = GetLastError();
      _dosmaperr(LastError);
      return *_errno();
    }
  }
  FileType = GetFileType(hFile);
  switch ( FileType )
  {
    case 0u:
      v13 = (_BYTE *)(dword_430080[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4);
      *v13 &= ~1u;
      v14 = GetLastError();
      _dosmaperr(v14);
      CloseHandle(hFile);
      if ( v14 == 0 )
        *_errno() = 13;
      return *_errno();
    case 2u:
      v46 |= 0x40u;
      break;
    case 3u:
      v46 |= 8u;
      break;
    default:
      break;
  }
  _set_osfhnd(*a1, hFile);
  v15 = v46 | 1;
  *(_BYTE *)(dword_430080[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4) = v46 | 1;
  v16 = (_BYTE *)(dword_430080[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 36);
  *v16 &= 0x80u;
  v44 = v15 & 0x48;
  v46 = v15;
  if ( (v15 & 0x48) == 0 )
  {
    if ( v15 >= 0 )
      goto LABEL_131;
    if ( (a4 & 2) != 0 )
    {
      Buf = _lseek_nolock(*a1, -1, 2u);
      if ( Buf == -1 )
      {
        if ( *__doserrno() != 131 )
        {
LABEL_74:
          _close_nolock(*a1);
          return *_errno();
        }
      }
      else
      {
        v33 = *a1;
        Buffer = 0;
        if ( _read_nolock(v33, (CHAR *)&Buffer, 1u) == 0
          && (_WORD)Buffer == 26
          && _chsize_nolock(*a1, Buf, Buf >> 31) == -1
          || _lseek_nolock(*a1, 0, 0) == -1 )
        {
          goto LABEL_74;
        }
      }
    }
  }
  if ( v46 >= 0 )
    goto LABEL_131;
  if ( (a4 & 0x74000) == 0 )
  {
    if ( (v37 & 0x74000) != 0 )
      a4 |= v37 & 0x74000;
    else
      a4 |= 0x4000u;
  }
  v17 = a4 & 0x74000;
  if ( (a4 & 0x74000) == 0x4000 )
  {
    v45 = 0;
    goto LABEL_95;
  }
  switch ( v17 )
  {
    case 65536:
    case 81920:
      if ( (a4 & 0x301) != 0x301 )
        break;
LABEL_93:
      v45 = 2;
      break;
    case 131072:
    case 147456:
      goto LABEL_93;
    case 262144:
    case 278528:
      v45 = 1;
      break;
    default:
      break;
  }
LABEL_95:
  if ( (a4 & 0x70000) == 0 )
    goto LABEL_131;
  Buf = 0;
  if ( (v46 & 0x40) != 0 )
    goto LABEL_131;
  v18 = dwDesiredAccess & 0xC0000000;
  if ( (dwDesiredAccess & 0xC0000000) == 0x40000000 )
  {
    v19 = dwCreationDisposition;
    if ( dwCreationDisposition == 0 )
      goto LABEL_131;
    if ( dwCreationDisposition > 2 )
    {
      if ( dwCreationDisposition > 4 )
      {
LABEL_103:
        if ( v19 != 5 )
          goto LABEL_131;
        goto LABEL_104;
      }
      if ( _lseeki64_nolock(*a1, 0, 0, 2u) != 0 )
      {
        v23 = _lseeki64_nolock(*a1, 0, 0, 0);
        v24 = HIDWORD(v23) & v23;
        goto LABEL_119;
      }
    }
    goto LABEL_104;
  }
  if ( v18 == 0x80000000 )
    goto LABEL_109;
  if ( v18 != -1073741824 )
    goto LABEL_131;
  v19 = dwCreationDisposition;
  if ( dwCreationDisposition == 0 )
    goto LABEL_131;
  if ( dwCreationDisposition <= 2 )
    goto LABEL_104;
  if ( dwCreationDisposition > 4 )
    goto LABEL_103;
  if ( _lseeki64_nolock(*a1, 0, 0, 2u) == 0 )
  {
LABEL_104:
    v20 = 0;
    if ( v45 == 1 )
    {
      Buf = 12565487;
      dwCreationDisposition = 3;
LABEL_129:
      while ( 1 )
      {
        v25 = _write(*a1, (char *)&Buf + v20, dwCreationDisposition - v20);
        if ( v25 == -1 )
          goto LABEL_74;
        v20 += v25;
        if ( (int)dwCreationDisposition <= v20 )
          goto LABEL_131;
      }
    }
    if ( v45 == 2 )
    {
      Buf = 65279;
      dwCreationDisposition = 2;
      goto LABEL_129;
    }
    goto LABEL_131;
  }
  v21 = _lseeki64_nolock(*a1, 0, 0, 0);
  if ( (HIDWORD(v21) & (unsigned int)v21) == 0xFFFFFFFF )
    goto LABEL_74;
LABEL_109:
  nolock = _read_nolock(*a1, (CHAR *)&Buf, 3u);
  if ( nolock == -1 )
    goto LABEL_74;
  if ( nolock != 2 )
  {
    if ( nolock != 3 )
    {
LABEL_127:
      v24 = _lseek_nolock(*a1, 0, 0);
LABEL_119:
      if ( v24 == -1 )
        goto LABEL_74;
      goto LABEL_131;
    }
    if ( Buf == 12565487 )
    {
      v45 = 1;
      goto LABEL_131;
    }
  }
  if ( (unsigned __int16)Buf == 65534 )
  {
    _close_nolock(*a1);
    *_errno() = 22;
    return 22;
  }
  if ( (unsigned __int16)Buf != 65279 )
    goto LABEL_127;
  if ( _lseek_nolock(*a1, 2, 0) == -1 )
    goto LABEL_74;
  v45 = 2;
LABEL_131:
  v26 = (_BYTE *)(dword_430080[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 36);
  *v26 ^= (v45 ^ *v26) & 0x7F;
  v27 = (_BYTE *)(dword_430080[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 36);
  *v27 = *v27 & 0x7F | (BYTE2(a4) << 7);
  if ( v44 == 0 && (a4 & 8) != 0 )
  {
    v28 = (_BYTE *)(dword_430080[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4);
    *v28 |= 0x20u;
  }
  v29 = dwDesiredAccess;
  if ( (dwDesiredAccess & 0xC0000000) == 0xC0000000 && (a4 & 1) != 0 )
  {
    CloseHandle(hFile);
    v30 = CreateFileW(lpFileName, v29 & 0x7FFFFFFF, dwShareMode, &SecurityAttributes, 3u, dwFlagsAndAttributes, nullptr);
    if ( v30 == (HANDLE)-1 )
    {
      v31 = GetLastError();
      _dosmaperr(v31);
      v32 = (_BYTE *)(dword_430080[*a1 >> 5] + ((*a1 & 0x1F) << 6) + 4);
      *v32 &= ~1u;
      _free_osfhnd(*a1);
      return *_errno();
    }
    *(_DWORD *)(((*a1 & 0x1F) << 6) + dword_430080[*a1 >> 5]) = v30;
  }
  return 0;
}

// Address: 0x41EB4E
int __cdecl _sopen_helper(LPCWSTR lpFileName, int a2, int a3, int a4, int *a5, int a6)
{
  int result; // eax
  _BYTE *v7; // eax
  int v8; // [esp+14h] [ebp-20h]
  int v9; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v9 = 0;
  if ( a5 == nullptr || (*a5 = -1, lpFileName == nullptr) || a6 != 0 && (a4 & 0xFFFFFE7F) != 0 )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v8 = _tsopen_nolock(a5, &v9, lpFileName, a2, a3, a4);
    ms_exc.registration.TryLevel = -2;
    if ( v9 != 0 )
    {
      if ( v8 != 0 )
      {
        v7 = (_BYTE *)(dword_430080[*a5 >> 5] + ((*a5 & 0x1F) << 6) + 4);
        *v7 &= ~1u;
      }
      _unlock_fhandle(*a5);
    }
    result = v8;
    if ( v8 != 0 )
      *a5 = -1;
  }
  return result;
}

// Address: 0x41EC1A
errno_t __cdecl _sopen_s(int *FileHandle, const char *FileName, int OpenFlag, int ShareFlag, int PermissionMode)
{
  return _sopen_helper((LPCWSTR)FileName, OpenFlag, ShareFlag, PermissionMode, FileHandle, 1);
}

// Address: 0x41EC3A
int __cdecl _wcsnicmp_l(const wchar_t *String1, const wchar_t *String2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  wint_t *v5; // ebx
  wint_t *v6; // edi
  wint_t v7; // ax
  wint_t v8; // si
  wint_t v9; // ax
  __crt_locale_pointers v10; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-8h]
  char v12; // [esp+18h] [ebp-4h]

  result = 0;
  if ( MaxCount != 0 )
  {
    v5 = (wint_t *)String1;
    if ( String1 != nullptr && (v6 = (wint_t *)String2, String2 != nullptr) )
    {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v10, (struct localeinfo_struct *)Locale);
      if ( *((_DWORD *)v10.locinfo + 5) != 0 )
      {
        do
        {
          v8 = _towlower_l(*v5, &v10);
          v9 = _towlower_l(*v6, &v10);
          ++v5;
          ++v6;
          --MaxCount;
        }
        while ( MaxCount != 0 && v8 != 0 && v8 == v9 );
      }
      else
      {
        do
        {
          v7 = *v5;
          if ( *v5 >= 0x41u && v7 <= 0x5Au )
            v7 += 32;
          v8 = v7;
          v9 = *v6;
          if ( *v6 >= 0x41u && v9 <= 0x5Au )
            v9 += 32;
          ++v5;
          ++v6;
          --MaxCount;
        }
        while ( MaxCount != 0 && v8 != 0 && v8 == v9 );
      }
      result = v8 - v9;
      if ( v12 != 0 )
        *(_DWORD *)(v11 + 112) &= ~2u;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return 0x7FFFFFFF;
    }
  }
  return result;
}

// Address: 0x41ED24
int __cdecl _wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int result; // eax
  const wchar_t *v4; // edi
  const wchar_t *v5; // edx
  wchar_t v6; // ax
  wchar_t v7; // cx
  wchar_t v8; // ax

  if ( dword_42F254 != 0 )
    return _wcsnicmp_l(String1, String2, MaxCount, nullptr);
  result = 0;
  if ( MaxCount != 0 )
  {
    v4 = String1;
    if ( String1 != nullptr && (v5 = String2, String2 != nullptr) )
    {
      do
      {
        v6 = *v4;
        if ( *v4 >= 0x41u && v6 <= 0x5Au )
          v6 += 32;
        v7 = v6;
        v8 = *v5;
        if ( *v5 >= 0x41u && v8 <= 0x5Au )
          v8 += 32;
        ++v4;
        ++v5;
        --MaxCount;
      }
      while ( MaxCount != 0 && v7 != 0 && v7 == v8 );
      return v7 - v8;
    }
    else
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
      return 0x7FFFFFFF;
    }
  }
  return result;
}

// Address: 0x41EDCA
int _fptrap()
{
  return _amsg_exit(2);
}

// Address: 0x41EDD3
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

// Address: 0x41EE11
int __cdecl _flswbuf(unsigned __int16 a1, FILE *Stream)
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
  int Streama; // [esp+14h] [ebp+Ch]

  Streama = _fileno(Stream);
  flag = Stream->_flag;
  if ( (flag & 0x82) == 0 )
  {
    *_errno() = 9;
LABEL_3:
    Stream->_flag |= 0x20u;
    return 0xFFFF;
  }
  if ( (flag & 0x40) != 0 )
  {
    *_errno() = 34;
    goto LABEL_3;
  }
  if ( (flag & 1) != 0 )
  {
    Stream->_cnt = 0;
    if ( (flag & 0x10) == 0 )
    {
      Stream->_flag = flag | 0x20;
      return 0xFFFF;
    }
    Stream->_ptr = Stream->_base;
    Stream->_flag = flag & 0xFFFFFFFE;
  }
  v5 = Stream->_flag;
  Stream->_cnt = 0;
  Buf = 0;
  v6 = v5 & 0xFFFFFFED | 2;
  Stream->_flag = v6;
  if ( (v6 & 0x10C) == 0
    && (Stream != (FILE *)(sub_40C65A() + 8) && Stream != (FILE *)(sub_40C65A() + 16) || _isatty(Streama) == 0) )
  {
    _getbuf(Stream);
  }
  if ( (Stream->_flag & 0x108) != 0 )
  {
    base = Stream->_base;
    ptr = Stream->_ptr;
    Stream->_ptr = base + 2;
    v9 = ptr - base;
    Stream->_cnt = Stream->_bufsiz - 2;
    if ( v9 <= 0 )
    {
      if ( Streama == -1 || Streama == -2 )
        v10 = &unk_42C630;
      else
        v10 = (_BYTE *)(dword_430080[Streama >> 5] + ((Streama & 0x1F) << 6));
      if ( (v10[4] & 0x20) != 0 )
      {
        v11 = _lseeki64(Streama, 0, 2);
        if ( (HIDWORD(v11) & (unsigned int)v11) == 0xFFFFFFFF )
          goto LABEL_28;
      }
    }
    else
    {
      Buf = _write(Streama, base, v9);
    }
    v12 = a1;
    *(_WORD *)Stream->_base = a1;
  }
  else
  {
    v9 = 2;
    v12 = a1;
    LOWORD(Buf) = a1;
    Buf = _write(Streama, &Buf, 2u);
  }
  if ( Buf != v9 )
  {
LABEL_28:
    Stream->_flag |= 0x20u;
    return 0xFFFF;
  }
  return v12;
}

// Address: 0x41EF85
HANDLE __initconout()
{
  HANDLE result; // eax

  result = CreateFileA("CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  hConsoleOutput = result;
  return result;
}

// Address: 0x41EFA4
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 )
    CloseHandle(hConsoleOutput);
  result = dword_42D12C;
  if ( dword_42D12C != (HANDLE)-1 && dword_42D12C != (HANDLE)-2 )
    return (HANDLE)CloseHandle(dword_42D12C);
  return result;
}

// Address: 0x41EFD1
int __cdecl _mbsnbicoll_l(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  int v5; // eax
  _BYTE v6[4]; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]
  char v9; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v6, (struct localeinfo_struct *)Locale);
  if ( MaxCount == 0 )
  {
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0;
  }
  if ( Str1 != nullptr && Str2 != nullptr )
  {
    if ( MaxCount > 0x7FFFFFFF )
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
LABEL_15:
      if ( v9 != 0 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
    if ( *(_DWORD *)(v7 + 8) != 0 )
    {
      v5 = __crtCompareStringA(
             (struct localeinfo_struct *)v6,
             *(struct localeinfo_struct **)(v7 + 12),
             0x1001u,
             (int)Str1,
             MaxCount,
             (char *)Str2,
             MaxCount,
             *(char **)(v7 + 4));
      if ( v5 == 0 )
        goto LABEL_15;
      result = v5 - 2;
    }
    else
    {
      result = _strnicoll_l((const char *)Str1, (const char *)Str2, MaxCount, Locale);
    }
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}

// Address: 0x41F0BF
int __cdecl _mbsnbicoll(const unsigned __int8 *Str1, const unsigned __int8 *Str2, size_t MaxCount)
{
  return _mbsnbicoll_l(Str1, Str2, MaxCount, nullptr);
}

// Address: 0x41F0D9
int __wtomb_environ()
{
  LPCWCH *v0; // edi
  const WCHAR *v1; // eax
  size_t v2; // eax
  void *v3; // eax
  int cbMultiByte; // [esp+Ch] [ebp-8h]
  void *Block; // [esp+10h] [ebp-4h] BYREF

  v0 = (LPCWCH *)dword_42F5B8;
  Block = nullptr;
  v1 = *(const WCHAR **)dword_42F5B8;
  if ( *(_DWORD *)dword_42F5B8 == 0 )
    return 0;
  while ( 1 )
  {
    v2 = WideCharToMultiByte(0, 0, v1, -1, nullptr, 0, nullptr, nullptr);
    cbMultiByte = v2;
    if ( v2 == 0 )
      break;
    v3 = (void *)_calloc_crt(v2, 1);
    Block = v3;
    if ( v3 == nullptr )
      break;
    if ( WideCharToMultiByte(0, 0, *v0, -1, (LPSTR)v3, cbMultiByte, nullptr, nullptr) == 0 )
    {
      free(Block);
      return -1;
    }
    if ( (int)__crtsetenv(&Block, 0) < 0 && Block != nullptr )
    {
      free(Block);
      Block = nullptr;
    }
    v1 = *++v0;
    if ( *v0 == nullptr )
      return 0;
  }
  return -1;
}

// Address: 0x41F170
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

// Address: 0x41F290
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

// Address: 0x41F2F1
int __cdecl _chsize_nolock(int FileHandle, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  unsigned int v4; // esi
  HANDLE ProcessHeap; // eax
  DWORD v7; // eax
  int v8; // eax
  bool v9; // of
  unsigned int v10; // kr08_4
  int v11; // esi
  HANDLE v12; // eax
  __int64 v13; // rax
  void *osfhandle; // eax
  unsigned int *v15; // esi
  __int64 v16; // rax
  __int64 v17; // [esp+Ch] [ebp-18h]
  __int64 v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+1Ch] [ebp-8h]
  void *lpMem; // [esp+20h] [ebp-4h]

  HIDWORD(v18) = 0;
  v17 = _lseeki64_nolock(FileHandle, 0, 0, 1u);
  if ( (HIDWORD(v17) & (unsigned int)v17) == 0xFFFFFFFF )
    return *_errno();
  v2 = _lseeki64_nolock(FileHandle, 0, 0, 2u);
  if ( (HIDWORD(v2) & (unsigned int)v2) == 0xFFFFFFFF )
    return *_errno();
  v3 = (unsigned __int64)(a2 - v2) >> 32;
  v4 = a2 - v2;
  if ( v3 >= 0 && (a2 >= v2 && (unsigned __int64)(a2 - v2) >> 32 != 0 || v4 != 0) )
  {
    ProcessHeap = GetProcessHeap();
    lpMem = HeapAlloc(ProcessHeap, 8u, 0x1000u);
    if ( lpMem == nullptr )
    {
      *_errno() = 12;
      return *_errno();
    }
    v19 = _setmode_nolock(FileHandle, 0x8000);
    while ( 1 )
    {
      v7 = v3 < 0 || v3 <= 0 && v4 < 0x1000 ? v4 : 4096;
      v8 = _write_nolock(FileHandle, lpMem, v7);
      if ( v8 == -1 )
        break;
      v9 = __OFSUB__(__PAIR64__(v3, v4), v8);
      v10 = v4 - v8;
      v3 = (__PAIR64__(v3, v4) - v8) >> 32;
      v4 -= v8;
      if ( v3 < 0 || (v3 < 0) ^ v9 | (v3 == 0) && v10 == 0 )
      {
        v11 = 0;
        goto LABEL_20;
      }
    }
    if ( *__doserrno() == 5 )
      *_errno() = 13;
    v11 = -1;
    HIDWORD(v18) = -1;
LABEL_20:
    _setmode_nolock(FileHandle, v19);
    v12 = GetProcessHeap();
    HeapFree(v12, 0, lpMem);
    goto LABEL_28;
  }
  if ( v3 < 0 )
  {
    v13 = _lseeki64_nolock(FileHandle, a2, SHIDWORD(a2), 0);
    if ( (HIDWORD(v13) & (unsigned int)v13) == 0xFFFFFFFF )
      return *_errno();
    osfhandle = (void *)_get_osfhandle(FileHandle);
    v18 = SetEndOfFile(osfhandle) - 1;
    if ( (HIDWORD(v18) & (unsigned int)v18) == 0xFFFFFFFF )
    {
      *_errno() = 13;
      v15 = __doserrno();
      *v15 = GetLastError();
      v11 = v18;
LABEL_28:
      if ( (HIDWORD(v18) & v11) == 0xFFFFFFFF )
        return *_errno();
    }
  }
  v16 = _lseeki64_nolock(FileHandle, v17, SHIDWORD(v17), 0);
  if ( (HIDWORD(v16) & (unsigned int)v16) == 0xFFFFFFFF )
    return *_errno();
  return 0;
}

// Address: 0x41F4A7
int __cdecl _setmode_nolock(int a1, int a2)
{
  int *v2; // edx
  int v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  char v8; // dl

  v2 = &dword_430080[a1 >> 5];
  v3 = (a1 & 0x1F) << 6;
  v4 = *v2 + v3;
  v5 = *(_BYTE *)(v4 + 4) & 0x80;
  v6 = (char)(2 * *(_BYTE *)(v4 + 36)) >> 1;
  if ( a2 == 0x4000 )
  {
    *(_BYTE *)(v4 + 4) |= 0x80u;
    *(_BYTE *)(*v2 + v3 + 36) &= 0x80u;
  }
  else if ( a2 == 0x8000 )
  {
    *(_BYTE *)(v4 + 4) &= ~0x80u;
  }
  else
  {
    if ( a2 == 0x10000 || a2 == 0x20000 )
    {
      *(_BYTE *)(v4 + 4) |= 0x80u;
      v7 = (_BYTE *)(*v2 + v3 + 36);
      v8 = *v7 & 0x80 | 2;
    }
    else
    {
      if ( a2 != 0x40000 )
        goto LABEL_11;
      *(_BYTE *)(v4 + 4) |= 0x80u;
      v7 = (_BYTE *)(*v2 + v3 + 36);
      v8 = *v7 & 0x80 | 1;
    }
    *v7 = v8;
  }
LABEL_11:
  if ( v5 != 0 )
    return v6 != 0 ? 0x10000 : 0x4000;
  else
    return 0x8000;
}

// Address: 0x41F563
int __cdecl sub_41F563(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_42FDEC;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return 22;
  }
}

// Address: 0x41F59C
wint_t __cdecl _towlower_l(wint_t C, _locale_t Locale)
{
  wint_t result; // ax
  LCID v3; // edx
  bool v4; // zf
  __crt_locale_pointers Localea; // [esp+0h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-Ch]
  char v7; // [esp+Ch] [ebp-8h]
  WCHAR DestStr; // [esp+10h] [ebp-4h] BYREF

  result = -1;
  if ( C != 0xFFFF )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
    v3 = *((_DWORD *)Localea.locinfo + 5);
    if ( v3 != 0 )
    {
      if ( C >= 0x100u )
      {
        v4 = __crtLCMapStringW((struct localeinfo_struct *)&Localea, v3, 0x100u, &C, 1, &DestStr, 1) == 0;
        result = C;
        if ( !v4 )
          result = DestStr;
      }
      else
      {
        v4 = _iswctype_l(C, 1u, &Localea) == 0;
        result = C;
        if ( !v4 )
          result = *(unsigned __int8 *)(*((_DWORD *)Localea.locinfo + 51) + C);
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

// Address: 0x41F651
const char *__usercall strncnt@<eax>(_BYTE *a1@<eax>, const char *a2)
{
  int v2; // ecx

  v2 = (int)a2;
  while ( v2 != 0 )
  {
    --v2;
    if ( *a1 == 0 )
      return &a2[-v2 - 1];
    ++a1;
  }
  v2 = -1;
  return &a2[-v2 - 1];
}

// Address: 0x41F66F
int __fastcall __crtCompareStringA_stat(
        int a1,
        CHAR *a2,
        struct localeinfo_struct *Locale,
        DWORD dwCmpFlags,
        int cbMultiByte,
        const char *a6,
        int cchCount2,
        const char *CodePage)
{
  int v10; // edx
  int result; // eax
  BYTE *LeadByte; // eax
  unsigned __int8 v13; // dl
  BYTE *i; // eax
  unsigned __int8 v15; // dl
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // eax
  void *v19; // esp
  WCHAR *v20; // eax
  int v21; // eax
  int v22; // ebx
  unsigned int v23; // eax
  void *v24; // esp
  WCHAR *v25; // edi
  WCHAR *v26; // eax
  CHAR *v27; // edi
  void *v28; // ebx
  const char *v29; // eax
  UINT v30; // esi
  const CHAR *v31; // eax
  int v32; // esi
  _DWORD v34[2]; // [esp+0h] [ebp-38h] BYREF
  int v35; // [esp+8h] [ebp-30h] BYREF
  int cchCount1; // [esp+Ch] [ebp-2Ch]
  int v37; // [esp+10h] [ebp-28h]
  LPCCH lpMultiByteStr; // [esp+14h] [ebp-24h]
  LPWSTR lpWideCharStr; // [esp+18h] [ebp-20h]
  LPCCH lpString2; // [esp+1Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+20h] [ebp-18h] BYREF

  lpMultiByteStr = a2;
  lpString2 = a6;
  if ( dword_42FDE8 == 0 )
  {
    if ( CompareStringW(0, 0, &String1, 1, &String1, 1) != 0 )
    {
      dword_42FDE8 = 1;
    }
    else if ( GetLastError() == 120 )
    {
      dword_42FDE8 = 2;
    }
  }
  if ( cbMultiByte <= 0 )
  {
    if ( cbMultiByte < -1 )
      return 0;
  }
  else
  {
    cbMultiByte = (int)strncnt(a2, (const char *)cbMultiByte);
  }
  v10 = cchCount2;
  if ( cchCount2 <= 0 )
  {
    if ( cchCount2 < -1 )
      return 0;
  }
  else
  {
    v10 = (int)strncnt(lpString2, (const char *)cchCount2);
    cchCount2 = v10;
  }
  if ( dword_42FDE8 == 2 || dword_42FDE8 == 0 )
  {
    v27 = nullptr;
    v28 = nullptr;
    if ( Locale == nullptr )
      Locale = *(struct localeinfo_struct **)(*(_DWORD *)a1 + 20);
    if ( CodePage == nullptr )
      CodePage = *(const char **)(*(_DWORD *)a1 + 4);
    v29 = (const char *)__ansicp((LCID)Locale);
    v30 = (UINT)v29;
    if ( v29 == (const char *)-1 )
      return 0;
    if ( v29 != CodePage )
    {
      v28 = __convertcp((UINT)CodePage, (UINT)v29, lpMultiByteStr, &cbMultiByte, nullptr, 0);
      if ( v28 == nullptr )
        return 0;
      v31 = (const CHAR *)__convertcp((UINT)CodePage, v30, lpString2, &cchCount2, nullptr, 0);
      v27 = (CHAR *)v31;
      if ( v31 == nullptr )
      {
        free(v28);
        return 0;
      }
      lpMultiByteStr = (LPCCH)v28;
      lpString2 = v31;
    }
    v32 = CompareStringA((LCID)Locale, dwCmpFlags, lpMultiByteStr, cbMultiByte, lpString2, cchCount2);
    if ( v28 != nullptr )
    {
      free(v28);
      free(v27);
    }
    return v32;
  }
  result = 1;
  if ( dword_42FDE8 != 1 )
    return 0;
  v37 = 0;
  if ( CodePage == nullptr )
    CodePage = *(const char **)(*(_DWORD *)a1 + 4);
  if ( cbMultiByte != 0 && v10 != 0 )
  {
LABEL_44:
    v16 = MultiByteToWideChar((UINT)CodePage, 9u, a2, cbMultiByte, nullptr, 0);
    v17 = v16;
    cchCount1 = v16;
    if ( v16 == 0 )
      return 0;
    if ( v16 <= 0 || 0xFFFFFFE0 / v16 < 2 )
    {
      lpWideCharStr = nullptr;
LABEL_55:
      if ( lpWideCharStr != nullptr )
      {
        if ( MultiByteToWideChar((UINT)CodePage, 1u, lpMultiByteStr, cbMultiByte, lpWideCharStr, v17) != 0 )
        {
          v21 = MultiByteToWideChar((UINT)CodePage, 9u, lpString2, cchCount2, nullptr, 0);
          v22 = v21;
          if ( v21 != 0 )
          {
            if ( v21 <= 0 || 0xFFFFFFE0 / v21 < 2 )
            {
              v25 = nullptr;
LABEL_67:
              if ( v25 != nullptr )
              {
                if ( MultiByteToWideChar((UINT)CodePage, 1u, lpString2, cchCount2, v25, v22) != 0 )
                  v37 = CompareStringW((LCID)Locale, dwCmpFlags, lpWideCharStr, cchCount1, v25, v22);
                _freea(v25);
              }
              goto $error_cleanup$27659;
            }
            v23 = 2 * v21 + 8;
            if ( v23 > 0x400 )
            {
              v26 = (WCHAR *)malloc(2 * v22 + 8);
              if ( v26 != nullptr )
              {
                *(_DWORD *)v26 = 56797;
                v26 += 4;
              }
              v25 = v26;
              goto LABEL_67;
            }
            v24 = alloca(v23);
            if ( v34 != nullptr )
            {
              v34[0] = 52428;
              v25 = (WCHAR *)&v35;
              goto LABEL_67;
            }
          }
        }
$error_cleanup$27659:
        _freea(lpWideCharStr);
        return v37;
      }
      return 0;
    }
    v18 = 2 * v16 + 8;
    if ( v18 > 0x400 )
    {
      v20 = (WCHAR *)malloc(2 * v17 + 8);
      if ( v20 != nullptr )
      {
        *(_DWORD *)v20 = 56797;
        goto LABEL_52;
      }
    }
    else
    {
      v19 = alloca(v18);
      v20 = (WCHAR *)v34;
      if ( v34 != nullptr )
      {
        v34[0] = 52428;
LABEL_52:
        v20 += 4;
      }
    }
    lpWideCharStr = v20;
    goto LABEL_55;
  }
  if ( cbMultiByte == v10 )
    return 2;
  if ( v10 <= 1 )
  {
    if ( cbMultiByte > 1 )
      return 3;
    if ( !GetCPInfo((UINT)CodePage, &CPInfo) )
      return 0;
    if ( cbMultiByte > 0 )
    {
      if ( CPInfo.MaxCharSize >= 2 )
      {
        LeadByte = CPInfo.LeadByte;
        if ( CPInfo.LeadByte[0] != 0 )
        {
          while ( 1 )
          {
            v13 = LeadByte[1];
            if ( v13 == 0 )
              break;
            if ( (unsigned __int8)*a2 >= *LeadByte && (unsigned __int8)*a2 <= v13 )
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
          v15 = i[1];
          if ( v15 == 0 )
            break;
          if ( (unsigned int)*lpString2 >= *i && (unsigned int)*lpString2 <= v15 )
            return 2;
        }
      }
      return 1;
    }
    goto LABEL_44;
  }
  return result;
}

// Address: 0x41F9DF
int __cdecl __crtCompareStringA(
        struct localeinfo_struct *a1,
        struct localeinfo_struct *a2,
        DWORD a3,
        CHAR *a4,
        unsigned int a5,
        char *a6,
        int a7,
        char *a8)
{
  int result; // eax
  _BYTE v9[8]; // [esp+0h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-8h]
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v9, a1);
  result = __crtCompareStringA_stat((int)v9, a4, a2, a3, a5, a6, a7, a8);
  if ( v11 != 0 )
    *(_DWORD *)(v10 + 112) &= ~2u;
  return result;
}

// Address: 0x41FA21
int __cdecl _strnicoll_l(const char *String1, const char *String2, size_t MaxCount, _locale_t Locale)
{
  int result; // eax
  struct localeinfo_struct *v5; // ecx
  int v6; // eax
  __crt_locale_pointers Localea; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  char v9; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Localea, (struct localeinfo_struct *)Locale);
  if ( MaxCount == 0 )
  {
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0;
  }
  if ( String1 != nullptr && String2 != nullptr )
  {
    if ( MaxCount > 0x7FFFFFFF )
    {
      *_errno() = 22;
      _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
LABEL_16:
      if ( v9 != 0 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 0x7FFFFFFF;
    }
    v5 = *((struct localeinfo_struct **)Localea.locinfo + 4);
    if ( v5 != nullptr )
    {
      v6 = __crtCompareStringA(
             (struct localeinfo_struct *)&Localea,
             v5,
             0x1001u,
             (CHAR *)String1,
             MaxCount,
             (char *)String2,
             MaxCount,
             *((char **)Localea.locinfo + 2));
      if ( v6 == 0 )
      {
        *_errno() = 22;
        goto LABEL_16;
      }
      result = v6 - 2;
    }
    else
    {
      result = _strnicmp_l(String1, String2, MaxCount, &Localea);
    }
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v9 != 0 )
      *(_DWORD *)(v8 + 112) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}

// Address: 0x41FB1B
int __usercall findenv@<eax>(size_t a1@<edi>, unsigned __int8 *Str1)
{
  const unsigned __int8 **i; // esi
  unsigned __int8 v3; // al

  for ( i = (const unsigned __int8 **)dword_42F5B0; ; ++i )
  {
    if ( *i == nullptr )
      return -(((char *)i - (_BYTE *)dword_42F5B0) >> 2);
    if ( _mbsnbicoll(Str1, *i, a1) == 0 )
    {
      v3 = (*i)[a1];
      if ( v3 == 61 || v3 == 0 )
        break;
    }
  }
  return ((char *)i - (_BYTE *)dword_42F5B0) >> 2;
}

// Address: 0x41FB6D
char **__usercall copy_environ@<eax>(const char **a1@<eax>)
{
  char **result; // eax
  const char **v3; // ecx
  char **v4; // esi
  char **v5; // [esp+4h] [ebp-4h]

  result = nullptr;
  v3 = a1;
  if ( a1 != nullptr )
  {
    if ( *a1 != nullptr )
    {
      do
      {
        ++v3;
        result = (char **)((char *)result + 1);
      }
      while ( *v3 != nullptr );
    }
    v4 = (char **)_calloc_crt((size_t)result + 1, 4);
    v5 = v4;
    if ( v4 == nullptr )
      _amsg_exit(9);
    while ( *a1 != nullptr )
      *v4++ = _strdup(*a1++);
    *v4 = nullptr;
    return v5;
  }
  return result;
}

// Address: 0x41FBC7
int __cdecl __crtsetenv(const unsigned __int8 **a1, int a2)
{
  const unsigned __int8 *v3; // esi
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // edi
  char **v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  size_t v11; // edi
  char *v12; // esi
  char *v13; // eax
  unsigned __int8 **v14; // ecx
  size_t v15; // eax
  char *v16; // edi
  size_t v17; // eax
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // [esp+4h] [ebp-14h]
  char *v20; // [esp+8h] [ebp-10h]
  int v21; // [esp+Ch] [ebp-Ch]
  BOOL v22; // [esp+10h] [ebp-8h]
  unsigned __int8 *Block; // [esp+14h] [ebp-4h]

  v21 = 0;
  if ( a1 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    return -1;
  }
  v3 = *a1;
  Block = (unsigned __int8 *)*a1;
  if ( *a1 == nullptr )
    goto LABEL_12;
  v4 = _mbschr(v3, 0x3Du);
  v5 = v4;
  v19 = v4;
  if ( v4 == nullptr || v3 == v4 )
    goto LABEL_12;
  v22 = v4[1] == 0;
  v6 = (char **)dword_42F5B0;
  if ( dword_42F5B0 == (void *)dword_42F5B4 )
  {
    v6 = copy_environ((const char **)dword_42F5B0);
    dword_42F5B0 = v6;
  }
  if ( v6 == nullptr )
  {
    if ( a2 != 0 && dword_42F5B8 != nullptr )
    {
      if ( __wtomb_environ() != 0 )
      {
LABEL_12:
        *_errno() = 22;
        return -1;
      }
    }
    else
    {
      if ( v22 )
        return 0;
      v7 = _malloc_crt(4u);
      dword_42F5B0 = v7;
      if ( v7 == nullptr )
        return -1;
      *v7 = 0;
      if ( dword_42F5B8 == nullptr )
      {
        v8 = _malloc_crt(4u);
        dword_42F5B8 = v8;
        if ( v8 == nullptr )
          return -1;
        *v8 = 0;
      }
    }
  }
  v9 = dword_42F5B0;
  v20 = (char *)dword_42F5B0;
  if ( dword_42F5B0 == nullptr )
    return -1;
  v10 = findenv(v5 - Block, Block);
  v11 = v10;
  if ( v10 < 0 || *v9 == 0 )
  {
    if ( !v22 )
    {
      if ( v10 < 0 )
        v11 = -v10;
      if ( (int)(v11 + 2) <= (int)v11 )
        return -1;
      if ( v11 + 2 >= 0x3FFFFFFF )
        return -1;
      v13 = (char *)_recalloc_crt(dword_42F5B0, 4u, v11 + 2);
      if ( v13 == nullptr )
        return -1;
      v14 = (unsigned __int8 **)&v13[4 * v11];
      *v14 = Block;
      v14[1] = nullptr;
      *a1 = nullptr;
      goto LABEL_37;
    }
    free(Block);
    *a1 = nullptr;
    return 0;
  }
  v12 = (char *)&v9[v10];
  free(*(void **)v12);
  if ( !v22 )
  {
    *(_DWORD *)v12 = Block;
    *a1 = nullptr;
    goto LABEL_38;
  }
  while ( *(_DWORD *)v12 != 0 )
  {
    *(_DWORD *)v12 = *((_DWORD *)v12 + 1);
    ++v11;
    v12 = &v20[4 * v11];
  }
  if ( v11 < 0x3FFFFFFF )
  {
    v13 = (char *)_recalloc_crt(dword_42F5B0, v11, 4u);
    if ( v13 == nullptr )
      goto LABEL_38;
LABEL_37:
    dword_42F5B0 = v13;
  }
LABEL_38:
  if ( a2 != 0 )
  {
    v15 = strlen((const char *)Block);
    v16 = (char *)_calloc_crt(v15 + 2, 1);
    if ( v16 != nullptr )
    {
      v17 = strlen((const char *)Block);
      if ( strcpy_s(v16, v17 + 2, (const char *)Block) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v18 = &v19[v16 - (char *)Block];
      *v18 = 0;
      if ( !SetEnvironmentVariableA(v16, !v22 ? (LPCSTR)v18 + 1 : nullptr) )
      {
        v21 = -1;
        *_errno() = 42;
      }
      free(v16);
    }
  }
  if ( v22 )
  {
    free(Block);
    *a1 = nullptr;
  }
  return v21;
}

// Address: 0x41FE12
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

// Address: 0x41FE69
char *__cdecl _strdup(const char *Source)
{
  size_t v2; // esi
  char *v3; // eax
  char *v4; // edi

  if ( Source == nullptr )
    return nullptr;
  v2 = strlen(Source) + 1;
  v3 = (char *)malloc(v2);
  v4 = v3;
  if ( v3 == nullptr )
    return nullptr;
  if ( strcpy_s(v3, v2, Source) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return v4;
}

// Address: 0x41FEBE
unsigned __int8 *__cdecl _mbschr_l(const unsigned __int8 *Str, unsigned int C, _locale_t Locale)
{
  unsigned __int8 *result; // eax
  unsigned __int16 v4; // cx
  _BYTE v5[4]; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-8h]
  char v8; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v5, (struct localeinfo_struct *)Locale);
  result = (unsigned __int8 *)Str;
  if ( Str != nullptr )
  {
    if ( *(_DWORD *)(v6 + 8) != 0 )
    {
      while ( 1 )
      {
        v4 = *result;
        if ( *result == 0 )
          break;
        if ( (*(_BYTE *)((unsigned __int8)v4 + v6 + 29) & 4) != 0 )
        {
          if ( *++result == 0 )
            goto LABEL_17;
          if ( C == (*result | (v4 << 8)) )
          {
            --result;
            goto LABEL_15;
          }
        }
        else if ( C == *result )
        {
          break;
        }
        ++result;
      }
      if ( C == *result )
        goto LABEL_15;
LABEL_17:
      if ( v8 != 0 )
        *(_DWORD *)(v7 + 112) &= ~2u;
      return nullptr;
    }
    else
    {
      result = (unsigned __int8 *)strchr((const char *)Str, C);
LABEL_15:
      if ( v8 != 0 )
        *(_DWORD *)(v7 + 112) &= ~2u;
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(nullptr, nullptr, nullptr, 0, 0);
    if ( v8 != 0 )
      *(_DWORD *)(v7 + 112) &= ~2u;
    return nullptr;
  }
  return result;
}

// Address: 0x41FF7A
unsigned __int8 *__cdecl _mbschr(const unsigned __int8 *Str, unsigned int C)
{
  return _mbschr_l(Str, C, nullptr);
}

// Address: 0x41FF92
// attributes: thunk
ULONG __stdcall GetAdaptersInfo(PIP_ADAPTER_INFO AdapterInfo, PULONG SizePointer)
{
  return __imp_GetAdaptersInfo(AdapterInfo, SizePointer);
}

// Address: 0x41FF98
// attributes: thunk
DWORD __stdcall NotifyAddrChange(PHANDLE Handle, LPOVERLAPPED overlapped)
{
  return __imp_NotifyAddrChange(Handle, overlapped);
}

// Address: 0x41FF9E
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// Address: 0x420820
int sub_420820()
{
  return atexit(nullsub_3);
}

// Address: 0x420830
int sub_420830()
{
  return atexit(sub_420920);
}

// Address: 0x420840
int sub_420840()
{
  return atexit(sub_420930);
}

// Address: 0x420850
int __fastcall sub_420850(int a1, int a2)
{
  sub_4040A0((int)&unk_42EC68, a2, "classm.log", 0xAu);
  return atexit(sub_420980);
}

// Address: 0x42086D
int sub_42086D()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_42F0C1);
  return atexit(sub_4209AE);
}

// Address: 0x420883
int sub_420883()
{
  _UNKNOWN **v0; // eax

  v0 = sub_40C65A();
  sub_407740(dword_42F0C8, (int)(v0 + 8));
  return atexit(sub_4209C2);
}

// Address: 0x4208A2
int sub_4208A2()
{
  sub_407640(dword_42F118, (int)dword_42F0C8, 0, 1);
  return atexit(sub_4209B8);
}

// Address: 0x4208C1
void *sub_4208C1()
{
  void *result; // eax

  result = &unk_42F0C0;
  dword_42F1E8 = (int)dword_42F118;
  if ( dword_42F1E4 != 0 )
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_42F1E4 + 4) + dword_42F1E4 + 44) = dword_42F118;
  if ( dword_42F1EC != 0 )
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_42F1EC + 4) + dword_42F1EC + 44) = dword_42F1E8;
  if ( dword_42F1F0 != 0 )
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_42F1F0 + 4) + dword_42F1F0 + 44) = dword_42F1E8;
  return result;
}

// Address: 0x4208CB
int sub_4208CB()
{
  return atexit(sub_4209CC);
}

// Address: 0x4208D7
int sub_4208D7()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_42F1E0);
  return atexit(sub_4209D6);
}

// Address: 0x4208ED
int sub_4208ED()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_42F22C);
  return atexit(sub_4209E0);
}

// Address: 0x420903
int sub_420903()
{
  return atexit(sub_4209EA);
}

// Address: 0x420910
void __cdecl nullsub_3()
{
  ;
}

// Address: 0x420920
void __cdecl sub_420920()
{
  sub_404C00(&off_42EC40);
}

// Address: 0x420930
void __cdecl sub_420930()
{
  FARPROC InnoGuardDelete; // eax

  off_42EC58 = &InnoGuardCtrl::`vftable';
  if ( dword_42EC5C != 0 && hModule != nullptr )
  {
    InnoGuardDelete = GetProcAddress(hModule, "InnoGuardDelete");
    if ( InnoGuardDelete != nullptr )
    {
      ((void (__stdcall *)(int))InnoGuardDelete)(dword_42EC5C);
      dword_42EC5C = 0;
    }
  }
}

// Address: 0x420970
void __cdecl sub_420970()
{
  operator delete((void *)lpBuffer);
}

// Address: 0x420980
void __cdecl sub_420980()
{
  if ( (unsigned int)dword_42EC80 >= 0x10 )
    operator delete(dword_42EC6C);
  dword_42EC80 = 15;
  dword_42EC7C = 0;
  LOBYTE(dword_42EC6C) = 0;
}

// Address: 0x4209AE
void __cdecl sub_4209AE()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( InterlockedDecrement(&Addend) < 0 )
  {
    v0 = &CriticalSection;
    do
      _Mtxdst(v0++);
    while ( (int)v0 < (int)&unk_42F1E0 );
  }
}

// Address: 0x4209B8
void __cdecl sub_4209B8()
{
  *(_DWORD *)((char *)dword_42F118 + *(_DWORD *)(dword_42F118[0] + 4)) = &std::ostream::`vftable';
  dword_42F118[1] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((int ***)&dword_42F118[1]);
}

// Address: 0x4209C2
void __cdecl sub_4209C2()
{
  sub_406870(dword_42F0C8);
}

// Address: 0x4209CC
void __cdecl sub_4209CC()
{
  sub_405890(&dword_42F170);
}

// Address: 0x4209D6
void __cdecl sub_4209D6()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( InterlockedDecrement(&Addend) < 0 )
  {
    v0 = &CriticalSection;
    do
      _Mtxdst(v0++);
    while ( (int)v0 < (int)&unk_42F1E0 );
  }
}

// Address: 0x4209E0
void __cdecl sub_4209E0()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( InterlockedDecrement(&Addend) < 0 )
  {
    v0 = &CriticalSection;
    do
      _Mtxdst(v0++);
    while ( (int)v0 < (int)&unk_42F1E0 );
  }
}

// Address: 0x4209EA
void __cdecl sub_4209EA()
{
  _Init_atexit::~_Init_atexit((_Init_atexit *)&unk_42F22D);
}

// Address: 0x4209F4
void __cdecl sub_4209F4()
{
  dword_42F230[0] = (int)&std::bad_alloc::`vftable';
  sub_40A2B4(dword_42F230);
}

