.
. PATDADIO.INC
. ------------
. Filename        : patdadaf
. Description     : Admission/Discharge Transfer Destination File
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY8    DIM   8      Key for PATDADA1
. Modifications : V5.01.00 21/06/90 Glen Hobby
.                          Upgrade from V5.00 to V5.01
.
. -------- I/O routines for PATDADA1 -------
.
RAPTDAD1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATDADA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTDAD1  RESET     KEY8
          READ      PATDADA1,KEY8;;
          RETURN
.
RDPTDAD1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATDADA1,KEY8;DPTDAADM,PTDAADTS,PTDADCTS,PTDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDAADM,PTDAADMN
          RETURN
.
RKPTDAD1  MOVE      ZERO,OVRCD
          READKS    PATDADA1;DPTDAADM,PTDAADTS,PTDADCTS,PTDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDAADM,PTDAADMN
          RETURN
.
RPPTDAD1  MOVE      ZERO,OVRCD
          READKP    PATDADA1;DPTDAADM,PTDAADTS,PTDADCTS,PTDASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTDAADM,PTDAADMN
          RETURN
.
WRPTDAD1  RESET     KEY8
          WRITE     PATDADA1,KEY8;KEY8,PTDAADTS,PTDADCTS,PTDASPAR
          RETURN
.
UPPTDAD1  MOVE      PTDAADMN,DPTDAADM
          UPDATE    PATDADA1;DPTDAADM,PTDAADTS,PTDADCTS,PTDASPAR
          RETURN
.
DEPTDAD1  RESET     KEY8
          DELETE    PATDADA1,KEY8
          RETURN
.
