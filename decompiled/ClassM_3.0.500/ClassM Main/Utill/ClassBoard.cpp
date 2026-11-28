// Decompiled from ClassBoard.exe (ClassM_3.0.500\ClassM_x64_unpacked\ClassM Main\Utill\ClassBoard.exe)

// Address: 0x9AA058
_BYTE *__userpurge start@<eax>(unsigned int a1@<ebp>, char *a2, int a3, _BYTE *a4, int a5)
{
  _BYTE *v6; // edi
  char v7; // dl
  char v8; // al
  int i; // ebx
  bool v10; // cf
  char v11; // dl
  char v12; // tt
  bool v13; // cf
  char v14; // dl
  char v15; // tt
  unsigned int v16; // eax
  bool v17; // cf
  char v18; // dl
  char v19; // tt
  bool v20; // cf
  char v21; // dl
  char v22; // dl
  char v23; // tt
  BOOL v24; // eax
  bool v25; // cf
  char v26; // dl
  char v27; // dl
  char v28; // tt
  int v29; // eax
  bool v30; // cf
  char v31; // dl
  char v32; // dl
  char v33; // tt
  int v34; // eax
  bool v35; // cf
  char v36; // dl
  char v37; // tt
  int v38; // eax
  int v39; // eax
  bool v40; // cf
  char v41; // dl
  char v42; // dl
  char v43; // tt
  bool v44; // cf
  char v45; // dl
  char v46; // tt
  int v47; // eax
  unsigned int v48; // ecx
  bool v49; // cf
  char v50; // dl
  char v51; // dl
  char v52; // tt
  bool v53; // cf
  char v54; // dl
  char v55; // tt
  unsigned int v56; // eax
  unsigned int v57; // ecx
  bool v58; // cf
  char v59; // dl
  char v60; // dl
  char v61; // tt
  bool v62; // cf
  char v63; // dl
  char v64; // tt
  unsigned int v65; // ecx
  unsigned __int8 v66; // al
  char v67; // cf
  unsigned int v68; // ecx

  sub_9AA1A8();
  v6 = a4;
  v7 = 0x80;
LABEL_2:
  v8 = *a2++;
  *v6++ = v8;
  for ( i = 2; ; i = 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = __CFADD__(v7, v7);
        v7 *= 2;
        if ( v7 == 0 )
        {
          v11 = *a2++;
          v12 = v10 + v11;
          v10 = __CFADD__(v10, v11) | __CFADD__(v11, v10 + v11);
          v7 = v11 + v12;
        }
        if ( !v10 )
          goto LABEL_2;
        v13 = __CFADD__(v7, v7);
        v7 *= 2;
        if ( v7 == 0 )
        {
          v14 = *a2++;
          v15 = v13 + v14;
          v13 = __CFADD__(v13, v14) | __CFADD__(v14, v13 + v14);
          v7 = v14 + v15;
        }
        if ( v13 )
          break;
        v39 = 1;
        do
        {
          v40 = __CFADD__(v7, v7);
          v41 = 2 * v7;
          if ( v41 == 0 )
          {
            v42 = *a2++;
            v43 = v40 + v42;
            v40 = __CFADD__(v40, v42) | __CFADD__(v42, v40 + v42);
            v41 = v42 + v43;
          }
          v39 += v40 + v39;
          v44 = __CFADD__(v41, v41);
          v7 = 2 * v41;
          if ( v7 == 0 )
          {
            v45 = *a2++;
            v46 = v44 + v45;
            v44 = __CFADD__(v44, v45) | __CFADD__(v45, v44 + v45);
            v7 = v45 + v46;
          }
        }
        while ( v44 );
        v47 = v39 - i;
        i = 1;
        if ( v47 != 0 )
        {
          v56 = (v47 - 1) << 8;
          LOBYTE(v56) = *a2++;
          a1 = v56;
          v57 = 1;
          do
          {
            v58 = __CFADD__(v7, v7);
            v59 = 2 * v7;
            if ( v59 == 0 )
            {
              v60 = *a2++;
              v61 = v58 + v60;
              v58 = __CFADD__(v58, v60) | __CFADD__(v60, v58 + v60);
              v59 = v60 + v61;
            }
            v57 += v58 + v57;
            v62 = __CFADD__(v59, v59);
            v7 = 2 * v59;
            if ( v7 == 0 )
            {
              v63 = *a2++;
              v64 = v62 + v63;
              v62 = __CFADD__(v62, v63) | __CFADD__(v63, v62 + v63);
              v7 = v63 + v64;
            }
          }
          while ( v62 );
          if ( v56 >= 0x7D00 )
          {
LABEL_47:
            v57 += 2;
LABEL_48:
            qmemcpy(v6, &v6[-v56], v57);
            v6 += v57;
          }
          else
          {
            if ( v56 < 0x500 )
            {
              if ( v56 > 0x7F )
                goto LABEL_48;
              goto LABEL_47;
            }
            v65 = v57 + 1;
            qmemcpy(v6, &v6[-v56], v65);
            v6 += v65;
          }
        }
        else
        {
          v48 = 1;
          do
          {
            v49 = __CFADD__(v7, v7);
            v50 = 2 * v7;
            if ( v50 == 0 )
            {
              v51 = *a2++;
              v52 = v49 + v51;
              v49 = __CFADD__(v49, v51) | __CFADD__(v51, v49 + v51);
              v50 = v51 + v52;
            }
            v48 += v49 + v48;
            v53 = __CFADD__(v50, v50);
            v7 = 2 * v50;
            if ( v7 == 0 )
            {
              v54 = *a2++;
              v55 = v53 + v54;
              v53 = __CFADD__(v53, v54) | __CFADD__(v54, v53 + v54);
              v7 = v54 + v55;
            }
          }
          while ( v53 );
          qmemcpy(v6, &v6[-a1], v48);
          v6 += v48;
        }
      }
      v16 = 0;
      v17 = __CFADD__(v7, v7);
      v7 *= 2;
      if ( v7 == 0 )
      {
        v18 = *a2++;
        v19 = v17 + v18;
        v17 = __CFADD__(v17, v18) | __CFADD__(v18, v17 + v18);
        v7 = v18 + v19;
      }
      if ( !v17 )
        break;
      v20 = __CFADD__(v7, v7);
      v21 = 2 * v7;
      if ( v21 == 0 )
      {
        v22 = *a2++;
        v23 = v20 + v22;
        v20 = __CFADD__(v20, v22) | __CFADD__(v22, v20 + v22);
        v21 = v22 + v23;
      }
      v24 = v20;
      v25 = __CFADD__(v21, v21);
      v26 = 2 * v21;
      if ( v26 == 0 )
      {
        v27 = *a2++;
        v28 = v25 + v27;
        v25 = __CFADD__(v25, v27) | __CFADD__(v27, v25 + v27);
        v26 = v27 + v28;
      }
      v29 = v24 + v25 + v24;
      v30 = __CFADD__(v26, v26);
      v31 = 2 * v26;
      if ( v31 == 0 )
      {
        v32 = *a2++;
        v33 = v30 + v32;
        v30 = __CFADD__(v30, v32) | __CFADD__(v32, v30 + v32);
        v31 = v32 + v33;
      }
      v34 = v29 + v30 + v29;
      v35 = __CFADD__(v31, v31);
      v7 = 2 * v31;
      if ( v7 == 0 )
      {
        v36 = *a2++;
        v37 = v35 + v36;
        v35 = __CFADD__(v35, v36) | __CFADD__(v36, v35 + v36);
        v7 = v36 + v37;
      }
      v38 = v34 + v35 + v34;
      if ( v38 != 0 )
        LOBYTE(v38) = v6[-v38];
      *v6++ = v38;
      i = 2;
    }
    v66 = *a2++;
    v67 = v66 & 1;
    LOBYTE(v16) = v66 >> 1;
    if ( (_BYTE)v16 == 0 )
      break;
    v68 = v67 + 2;
    a1 = v16;
    qmemcpy(v6, &v6[-v16], v68);
    v6 += v68;
  }
  return (_BYTE *)(v6 - a4);
}

// Address: 0x9AA1A8
// positive sp value has been detected, the output may be wrong!
int __fastcall sub_9AA1A8(int a1, int a2)
{
  int v2; // ebx
  int v4; // [esp-2Ch] [ebp-2Ch]
  char *v7; // [esp-4h] [ebp-4h]

  v2 = v7 - 5 - (char *)dword_546058;
  if ( *(_DWORD *)(v2 + 1480208) == 0 )
  {
    ((void (__cdecl *)(char *, _DWORD, int, _DWORD, int))v7)(v7 + 402, 0, v2, 0, v2);
    v2 = v4;
  }
  return ((int (__fastcall *)(int, int))(v2 + 1480208))(a1, a2);
}

