.
. MEHDS1IO.INC
. ------------
. Related FD   : MEHDS1FD.INC
. Filenames    : mehds1af, mehauds1 (audits)
. Description  : Mental Health System 'Discharge file'
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY8    DIM     8          KEY FOR MEHDS1A1
.                KEY19   DIM     19         KEY FOR MEHAUDDS
.
. Mods:   V5.01.02  10/06/1993  Graeme Williams            SRF 123136
.                   Fixed SFORMAT of address lines under old format.
.
RSMHDSC1  RESET     KEY8                    * positional read
          READ      MEHDS1A1,KEY8;;
          RETURN
.
RAMHDSC1  RESET     KEY8                    * existing read
          MOVE      ZERO,OVRCD
          READ      MEHDS1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHDSC1  RESET     KEY8                    * full read
          MOVE      ZERO,OVRCD
          READ      MEHDS1A1,KEY8;DMHDSADM,MHDSADD1,MHDSADD2,MHDSSUBR:
                                  MHDSADD4,MHDSPOST:
                                  MHDSSPR1,MHDSACTY,MHDSREFT,MHDSSTAY,MHDSLDOM:
                                  MHDSLGP,MHDSTRST,MHDSDOHN,MHDSOUTP,MHDSCSRG:
                                  MHDSCSDT,MHDSCFUT,MHDSCFUD,MHDSUSR1,MHDSUSR2:
                                  MHDSUSR3,MHDSUSR4,MHDSUSR5,MHDSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDSADM,MHDSADMN
          RETURN
.
RKMHDSC1  MOVE      ZERO,OVRCD              * next read
          READKS    MEHDS1A1;DMHDSADM,MHDSADD1,MHDSADD2,MHDSSUBR:
                             MHDSADD4,MHDSPOST:
                             MHDSSPR1,MHDSACTY,MHDSREFT,MHDSSTAY,MHDSLDOM:
                             MHDSLGP,MHDSTRST,MHDSDOHN,MHDSOUTP,MHDSCSRG:
                             MHDSCSDT,MHDSCFUT,MHDSCFUD,MHDSUSR1,MHDSUSR2:
                             MHDSUSR3,MHDSUSR4,MHDSUSR5,MHDSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDSADM,MHDSADMN
          RETURN
.
RPMHDSC1  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHDS1A1;DMHDSADM,MHDSADD1,MHDSADD2,MHDSSUBR:
                             MHDSADD4,MHDSPOST:
                             MHDSSPR1,MHDSACTY,MHDSREFT,MHDSSTAY,MHDSLDOM:
                             MHDSLGP,MHDSTRST,MHDSDOHN,MHDSOUTP,MHDSCSRG:
                             MHDSCSDT,MHDSCFUT,MHDSCFUD,MHDSUSR1,MHDSUSR2:
                             MHDSUSR3,MHDSUSR4,MHDSUSR5,MHDSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDSADM,MHDSADMN
          RETURN
.
UPMHDSC1  MOVE      MHDSADMN,DMHDSADM       * update
          UPDATE    MEHDS1A1;DMHDSADM,MHDSADD1,MHDSADD2,MHDSSUBR:
                             MHDSADD4,MHDSPOST:
                             MHDSSPR1,MHDSACTY,MHDSREFT,MHDSSTAY,MHDSLDOM:
                             MHDSLGP,MHDSTRST,MHDSDOHN,MHDSOUTP,MHDSCSRG:
                             MHDSCSDT,MHDSCFUT,MHDSCFUD,MHDSUSR1,MHDSUSR2:
                             MHDSUSR3,MHDSUSR4,MHDSUSR5,MHDSSPAR
          RETURN
.
WRMHDSC1  RESET     KEY8                    * write
          MOVE      MHDSADMN,DMHDSADM
          WRITE     MEHDS1A1,KEY8;DMHDSADM,MHDSADD1,MHDSADD2,MHDSSUBR:
                                  MHDSADD4,MHDSPOST:
                                  MHDSSPR1,MHDSACTY,MHDSREFT,MHDSSTAY,MHDSLDOM:
                                  MHDSLGP,MHDSTRST,MHDSDOHN,MHDSOUTP,MHDSCSRG:
                                  MHDSCSDT,MHDSCFUT,MHDSCFUD,MHDSUSR1,MHDSUSR2:
                                  MHDSUSR3,MHDSUSR4,MHDSUSR5,MHDSSPAR
          RETURN
.
DEMHDSC1  RESET     KEY8                    * delete
          DELETE    MEHDS1A1,KEY8
          RETURN
.
.
ASMHDSC   RESET     KEY19                   * positional read
          READ      MEHAUDS1,KEY19;;
          RETURN
.
AKMHDSC   MOVE      ZERO,OVRCD              * next read
          READKS    MEHAUDS1;MHDSAUDD,MHDSAUDT,MHDSAUDP,MHDSAUDR,MHDSAUDS:
                             MHDSAUDO:
                             DMHDSADM,MHDSADD1,MHDSADD2,MHDSSUBR,MHDSADD4:
                             MHDSPOST:
                             MHDSSPR1,MHDSACTY,MHDSREFT,MHDSSTAY,MHDSLDOM:
                             MHDSLGP,MHDSTRST,MHDSDOHN,MHDSOUTP,MHDSCSRG:
                             MHDSCSDT,MHDSCFUT,MHDSCFUD,MHDSUSR1,MHDSUSR2:
                             MHDSUSR3,MHDSUSR4,MHDSUSR5,MHDSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDSADM,MHDSADMN
          RETURN
.
AWMHDSC   RESET     KEY19                   * write
          MOVE      MHDSADMN,DMHDSADM
          WRITE     MEHAUDS1,KEY19;MHDSAUDD,MHDSAUDT,MHDSAUDP,MHDSAUDR,MHDSAUDS:
                             MHDSAUDO:
                             DMHDSADM,MHDSADD1,MHDSADD2,MHDSSUBR,MHDSADD4:
                             MHDSPOST:
                             MHDSSPR1,MHDSACTY,MHDSREFT,MHDSSTAY,MHDSLDOM:
                             MHDSLGP,MHDSTRST,MHDSDOHN,MHDSOUTP,MHDSCSRG:
                             MHDSCSDT,MHDSCFUT,MHDSCFUD,MHDSUSR1,MHDSUSR2:
                             MHDSUSR3,MHDSUSR4,MHDSUSR5,MHDSSPAR
          RETURN
.
AUMHDSC   MOVE      MHDSADMN,DMHDSADM       * update
          UPDATE    MEHAUDS1;MHDSAUDD,MHDSAUDT,MHDSAUDP,MHDSAUDR,MHDSAUDS:
                             MHDSAUDO:
                             DMHDSADM,MHDSADD1,MHDSADD2,MHDSSUBR,MHDSADD4:
                             MHDSPOST:
                             MHDSSPR1,MHDSACTY,MHDSREFT,MHDSSTAY,MHDSLDOM:
                             MHDSLGP,MHDSTRST,MHDSDOHN,MHDSOUTP,MHDSCSRG:
                             MHDSCSDT,MHDSCFUT,MHDSCFUD,MHDSUSR1,MHDSUSR2:
                             MHDSUSR3,MHDSUSR4,MHDSUSR5,MHDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
ADMHDSC   RESET     KEY19                   * delete
          DELETE    MEHAUDS1,KEY19
          RETURN
+
.

