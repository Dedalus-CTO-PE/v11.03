.
. MEHDL1IO.INC
. ------------
. Related FD   : MEHDL1FD.INC
. Filenames    : mehdl1af, mehaudl1 (audits)
. Description  : Mental Health System 'Discharge to Leave file'
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY24   DIM     24         KEY FOR MEHDL1A1
.                KEY19   DIM     19         KEY FOR MEHAUDDS
.
. Mods:   V5.01.02  10/06/1993  Graeme Williams            SRF 123136
.                   Fixed SFORMAT of address lines under old format.
.
RSMHDLV1  RESET     KEY24                   * positional read
          READ      MEHDL1A1,KEY24;;
          RETURN
.
RAMHDLV1  RESET     KEY24                   * existing read
          MOVE      ZERO,OVRCD
          READ      MEHDL1A1,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHDLV1  RESET     KEY24                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHDL1A1,KEY24;DMHDLADM,MHDLDATE,MHDLTIME,MHDLADD1:
                                   MHDLADD2,MHDLSUBR,MHDLADD4,MHDLPOST,MHDLSPR1:
                                   MHDLACTY,MHDLREFT:
                                   MHDLSTAY,MHDLLDOM,MHDLLGP,MHDLTRST,MHDLDOHN:
                                   MHDLOUTP,MHDLCSRG,MHDLCSDT,MHDLCFUT,MHDLCFUD:
                                   MHDLUSR1,MHDLUSR2,MHDLUSR3,MHDLUSR4,MHDLUSR5:
                                   MHDLXCOR,MHDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDLADM,MHDLADMN
          RETURN
.
RKMHDLV1  MOVE      ZERO,OVRCD              * next read
          READKS    MEHDL1A1;DMHDLADM,MHDLDATE,MHDLTIME,MHDLADD1:
                             MHDLADD2,MHDLSUBR,MHDLADD4,MHDLPOST,MHDLSPR1:
                             MHDLACTY,MHDLREFT:
                             MHDLSTAY,MHDLLDOM,MHDLLGP,MHDLTRST,MHDLDOHN:
                             MHDLOUTP,MHDLCSRG,MHDLCSDT,MHDLCFUT,MHDLCFUD:
                             MHDLUSR1,MHDLUSR2,MHDLUSR3,MHDLUSR4,MHDLUSR5:
                             MHDLXCOR,MHDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDLADM,MHDLADMN
          RETURN
.
RPMHDLV1  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHDL1A1;DMHDLADM,MHDLDATE,MHDLTIME,MHDLADD1:
                             MHDLADD2,MHDLSUBR,MHDLADD4,MHDLPOST,MHDLSPR1:
                             MHDLACTY,MHDLREFT:
                             MHDLSTAY,MHDLLDOM,MHDLLGP,MHDLTRST,MHDLDOHN:
                             MHDLOUTP,MHDLCSRG,MHDLCSDT,MHDLCFUT,MHDLCFUD:
                             MHDLUSR1,MHDLUSR2,MHDLUSR3,MHDLUSR4,MHDLUSR5:
                             MHDLXCOR,MHDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDLADM,MHDLADMN
          RETURN
.
UPMHDLV1  MOVE      MHDLADMN,DMHDLADM       * update
          UPDATE    MEHDL1A1;DMHDLADM,MHDLDATE,MHDLTIME,MHDLADD1:
                             MHDLADD2,MHDLSUBR,MHDLADD4,MHDLPOST,MHDLSPR1:
                             MHDLACTY,MHDLREFT:
                             MHDLSTAY,MHDLLDOM,MHDLLGP,MHDLTRST,MHDLDOHN:
                             MHDLOUTP,MHDLCSRG,MHDLCSDT,MHDLCFUT,MHDLCFUD:
                             MHDLUSR1,MHDLUSR2,MHDLUSR3,MHDLUSR4,MHDLUSR5:
                             MHDLXCOR,MHDLSPAR
          RETURN
.
WRMHDLV1  RESET     KEY24                   * write
          MOVE      MHDLADMN,DMHDLADM
          WRITE     MEHDL1A1,KEY24;DMHDLADM,MHDLDATE,MHDLTIME,MHDLADD1:
                                   MHDLADD2,MHDLSUBR,MHDLADD4,MHDLPOST,MHDLSPR1:
                                   MHDLACTY,MHDLREFT:
                                   MHDLSTAY,MHDLLDOM,MHDLLGP,MHDLTRST,MHDLDOHN:
                                   MHDLOUTP,MHDLCSRG,MHDLCSDT,MHDLCFUT,MHDLCFUD:
                                   MHDLUSR1,MHDLUSR2,MHDLUSR3,MHDLUSR4,MHDLUSR5:
                                   MHDLXCOR,MHDLSPAR
          RETURN
.
DEMHDLV1  RESET     KEY24                   * delete
          DELETE    MEHDL1A1,KEY24
          RETURN
.
.
ASMHDLV   RESET     KEY19                   * positional read
          READ      MEHAUDL1,KEY19;;
          RETURN
.
AKMHDLV   MOVE      ZERO,OVRCD              * next read
          READKS    MEHAUDL1;MHDLAUDD,MHDLAUDT,MHDLAUDP,MHDLAUDR,MHDLAUDS:
                             MHDLAUDO:
                             DMHDLADM,MHDLDATE,MHDLTIME,MHDLADD1,MHDLADD2:
                             MHDLSUBR,MHDLADD4,MHDLPOST,MHDLSPR1,MHDLACTY:
                             MHDLREFT,MHDLSTAY,MHDLLDOM,MHDLLGP,MHDLTRST:
                             MHDLDOHN,MHDLOUTP,MHDLCSRG,MHDLCSDT,MHDLCFUT:
                             MHDLCFUD,MHDLUSR1,MHDLUSR2,MHDLUSR3,MHDLUSR4:
                             MHDLUSR5,MHDLXCOR,MHDLSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDLADM,MHDLADMN
          RETURN
.
AUMHDLV   MOVE      MHDLADMN,DMHDLADM       * update
          UPDATE    MEHAUDL1;MHDLAUDD,MHDLAUDT,MHDLAUDP,MHDLAUDR,MHDLAUDS:
                             MHDLAUDO:
                             DMHDLADM,MHDLDATE,MHDLTIME,MHDLADD1,MHDLADD2:
                             MHDLSUBR,MHDLADD4,MHDLPOST,MHDLSPR1,MHDLACTY:
                             MHDLREFT,MHDLSTAY,MHDLLDOM,MHDLLGP,MHDLTRST:
                             MHDLDOHN,MHDLOUTP,MHDLCSRG,MHDLCSDT,MHDLCFUT:
                             MHDLCFUD,MHDLUSR1,MHDLUSR2,MHDLUSR3,MHDLUSR4:
                             MHDLUSR5,MHDLXCOR,MHDLSPAR
          RETURN
.
AWMHDLV   RESET     KEY19                   * write
          WRITE     MEHAUDL1,KEY19;MHDLAUDD,MHDLAUDT,MHDLAUDP,MHDLAUDR:
                             MHDLAUDS,MHDLAUDO:
                             DMHDLADM,MHDLDATE,MHDLTIME,MHDLADD1,MHDLADD2:
                             MHDLSUBR,MHDLADD4,MHDLPOST,MHDLSPR1,MHDLACTY:
                             MHDLREFT,MHDLSTAY,MHDLLDOM,MHDLLGP,MHDLTRST:
                             MHDLDOHN,MHDLOUTP,MHDLCSRG,MHDLCSDT,MHDLCFUT:
                             MHDLCFUD,MHDLUSR1,MHDLUSR2,MHDLUSR3,MHDLUSR4:
                             MHDLUSR5,MHDLXCOR,MHDLSPAR
          RETURN
.
ADMHDLV   RESET     KEY19                   * delete
          DELETE    MEHAUDL1,KEY19
          RETURN
+
.

