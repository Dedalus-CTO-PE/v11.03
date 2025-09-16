.******************************************************************************
. PCPNURIO.INC
. ------------
. Filename     : pcpnuraf
. Description  : Patient Care Plan nurse file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY6         : PCPNURA1
. KEY26        : PCPNURA2
. KEY29        : PCPNURA3
. KEY19        : PCPAUDNU
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCNUR1  MOVE      ZERO,OVRCD
          RESET     KEY6 
          READ      PCPNURA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCNUR1  RESET     KEY6
          READ      PCPNURA1,KEY6;;
          RETURN
.
RDPCNUR1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PCPNURA1,KEY6;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
RKPCNUR1  MOVE      ZERO,OVRCD
          READKS    PCPNURA1;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
RPPCNUR1  MOVE      ZERO,OVRCD
          READKP    PCPNURA1;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
WRPCNUR1  RESET     KEY6
          MOVE      PCNUSECL,DPCNUSEC
          WRITE     PCPNURA1,KEY6;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          RETURN
.
UPPCNUR1  
          MOVE      PCNUSECL,DPCNUSEC
          UPDATE    PCPNURA1;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          RETURN
.
DEPCNUR1  RESET     KEY6
          DELETE    PCPNURA1,KEY6
          RETURN
.******************************************************************************
.
. ------  I/O routines for 2nd index ------
.
RAPCNUR2  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      PCPNURA2,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCNUR2  RESET     KEY26
          READ      PCPNURA2,KEY26;;
          RETURN
.
RDPCNUR2  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      PCPNURA2,KEY26;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
RKPCNUR2  MOVE      ZERO,OVRCD
          READKS    PCPNURA2;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
RPPCNUR2  MOVE      ZERO,OVRCD
          READKP    PCPNURA2;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
WRPCNUR2  RESET     KEY26
          MOVE      PCNUSECL,DPCNUSEC
          WRITE     PCPNURA2,KEY26;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          RETURN
.
UPPCNUR2  
          MOVE      PCNUSECL,DPCNUSEC
          UPDATE    PCPNURA2;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          RETURN
.
DEPCNUR2  RESET     KEY26
          DELETE    PCPNURA2,KEY26
          RETURN
.******************************************************************************
.
. ------  I/O routines for 3rd index ------
.
RAPCNUR3  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      PCPNURA3,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCNUR3  RESET     KEY29
          READ      PCPNURA3,KEY29;;
          RETURN
.
RDPCNUR3  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      PCPNURA3,KEY29;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
RKPCNUR3  MOVE      ZERO,OVRCD
          READKS    PCPNURA3;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
RPPCNUR3  MOVE      ZERO,OVRCD
          READKP    PCPNURA3;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
WRPCNUR3  RESET     KEY29
          MOVE      PCNUSECL,DPCNUSEC
          WRITE     PCPNURA3,KEY29;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          RETURN
.
UPPCNUR3  
          MOVE      PCNUSECL,DPCNUSEC
          UPDATE    PCPNURA3;PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          RETURN
.
DEPCNUR3  RESET     KEY29
          DELETE    PCPNURA3,KEY29
          RETURN
.******************************************************************************
.
. ------  I/O routines for audit ------
.
ASPCNUR   RESET     KEY19
          READ      PCPAUDNU,KEY19;;
          RETURN
.
AKPCNUR   MOVE      ZERO,OVRCD
          READKS    PCPAUDNU;PCNUAUDD,PCNUAUDT,PCNUAUDP,PCNUAUDR,PCNUAUDS:
                    PCNUAUDO,PCNUCODE,PCNUNAME,PCNUCLSS,DPCNUSEC,PCNUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCNUSEC,PCNUSECL
          RETURN
.
AWPCNUR   RESET     KEY19
          MOVE      PCNUSECL,DPCNUSEC
          WRITE     PCPAUDNU,KEY19;KEY19,PCNUAUDS,PCNUAUDO,PCNUCODE,PCNUNAME:
                    PCNUCLSS,DPCNUSEC,PCNUSPAR
          RETURN
.
ADPCNUR   RESET     KEY19
          DELETE    PCPAUDNU,KEY19
          RETURN
.******************************************************************************
