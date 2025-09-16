.
. PATCMXIO.INC
. ------------
. Filename        : patcmxaf
. Description     : Casemix funding
. Variables       : OVRCD   FORM  1      0 = Not over
.                                        1 = Over
.                   KEY24   DIM   24     Key for PATCMXA1
.                   KEY24   DIM   24     Key for PATCMXA2
. Modifications   :
.
.        V10.11.01 14/07/2017  Tracey Nguyen TSK 0835226
.                  Added PTCMEHCP for Health Care Provider (Eclipse)
.        V10.09.01 03/01/2017  Davin         TSK 0315207
.                  Added PTCMTLOS (Target Length of Stay)
.        V10.04.01 23/12/2013  Patrick Adair CAR 294388
.                  Moved Transfer Trim Point, Eclipse Equivalent and Type
.                  out of spare variable
.        V10.03.02 10/05/2013  J.Tan         CAR 282824
.                  Added Transfer Trim Point using spare
.        V10.03.01 28/05/2012  J.Tan         CAR 244246
.                  Added Eclipse Equivalent and Type using spare
.        V10.01.01 27/01/2011  Ebon Clements CAR 233050
.                  Removed start type, start date and end date
.        V9.12.01  03/09/2009  J.Tan   CAR 205303
.                  Added End date and Contract ID
.        V5.08.01  23/10/2000  Tonii
.                  Changed to use KEY19 instead of KEY21
.
. -------- I/O routines for PATCMXA1 -------
.
RAPTCMX1  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATCMXA1,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTCMX1  RESET     KEY24
          READ      PATCMXA1,KEY24;;
          RETURN
.
RDPTCMX1  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATCMXA1,KEY24;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS:
                                   PTCMDIFG,PTCMCNID,PTCMECEQ,PTCMECTS:
                                   PTCMTRPT,PTCMTLOS,PTCMEHCP,PTCMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCMX1  MOVE      ZERO,OVRCD
          READKS    PATCMXA1;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS,PTCMDIFG:
                             PTCMCNID,PTCMECEQ,PTCMECTS,PTCMTRPT,PTCMTLOS:
                             PTCMEHCP,PTCMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCMX1  MOVE      ZERO,OVRCD
          READKP    PATCMXA1;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS,PTCMDIFG:
                             PTCMCNID,PTCMECEQ,PTCMECTS,PTCMTRPT,PTCMTLOS:
                             PTCMEHCP,PTCMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTCMX1  RESET     KEY24
          WRITE     PATCMXA1,KEY24;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS:
                                   PTCMDIFG,PTCMCNID,PTCMECEQ,PTCMECTS:
                                   PTCMTRPT,PTCMTLOS,PTCMEHCP,PTCMSPAR
          RETURN
.
UPPTCMX1  UPDATE    PATCMXA1;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS,PTCMDIFG:
                             PTCMCNID,PTCMECEQ,PTCMECTS,PTCMTRPT,PTCMTLOS:
                             PTCMEHCP,PTCMSPAR
          RETURN
.
DEPTCMX1  RESET     KEY24
          DELETE    PATCMXA1,KEY24
          RETURN
.
RAPTCMX2  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATCMXA2,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTCMX2  RESET     KEY24
          READ      PATCMXA2,KEY24;;
          RETURN
.
RDPTCMX2  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      PATCMXA2,KEY24;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS:
                                   PTCMDIFG,PTCMCNID,PTCMECEQ,PTCMECTS:
                                   PTCMTRPT,PTCMTLOS,PTCMEHCP,PTCMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCMX2  MOVE      ZERO,OVRCD
          READKS    PATCMXA2;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS,PTCMDIFG:
                             PTCMCNID,PTCMECEQ,PTCMECTS,PTCMTRPT,PTCMTLOS:
                             PTCMEHCP,PTCMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCMX2  MOVE      ZERO,OVRCD
          READKP    PATCMXA2;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS,PTCMDIFG:
                             PTCMCNID,PTCMECEQ,PTCMECTS,PTCMTRPT,PTCMTLOS:
                             PTCMEHCP,PTCMSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTCMX2  RESET     KEY24
          WRITE     PATCMXA2,KEY24;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS:
                                   PTCMDIFG,PTCMCNID,PTCMECEQ,PTCMECTS:
                                   PTCMTRPT,PTCMTLOS,PTCMEHCP,PTCMSPAR
          RETURN
.
UPPTCMX2  UPDATE    PATCMXA2;PTCMCLMN,PTCMHFND,PTCMCASM,PTCMXLOS,PTCMDIFG:
                             PTCMCNID,PTCMECEQ,PTCMECTS,PTCMTRPT,PTCMTLOS:
                             PTCMEHCP,PTCMSPAR
          RETURN
.
DEPTCMX2  RESET     KEY24
          DELETE    PATCMXA2,KEY24
          RETURN
.
