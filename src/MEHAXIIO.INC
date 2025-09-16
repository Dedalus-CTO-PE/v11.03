.
. MEHAXIIO.INC
. ------------
. Related FD   : MEHAXIFD.INC
. Filenames    : mehaxiaf, mehaudds (audits)
. Description  : Mental Health System 'Axis I and II codes file'
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY10   DIM     10         KEY FOR MEHAXIA1
.                KEY19   DIM     19         KEY FOR MEHAUDDS
.
. -----------------------------------------
. ------- I/O routines for MEHAXIA1 -------
. -----------------------------------------
.
RSMHAXI1  RESET     KEY10                   * positional read
          READ      MEHAXIA1,KEY10;;
          RETURN
.
RAMHAXI1  RESET     KEY10                   * existing read ?
          MOVE      ZERO,OVRCD
          READ      MEHAXIA1,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHAXI1  RESET     KEY10                   * full read
          MOVE      ZERO,OVRCD
          READ      MEHAXIA1,KEY10;DMHAXTYP,MHAXCODE,MHAXDESC,MHAXSTAT,MHAXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHAXTYP,MHAXTYPE
          RETURN
.
RKMHAXI1  MOVE      ZERO,OVRCD              * next read
          READKS    MEHAXIA1;DMHAXTYP,MHAXCODE,MHAXDESC,MHAXSTAT,MHAXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHAXTYP,MHAXTYPE
          RETURN
.
RPMHAXI1  MOVE      ZERO,OVRCD              * previous read
          READKP    MEHAXIA1;DMHAXTYP,MHAXCODE,MHAXDESC,MHAXSTAT,MHAXSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHAXTYP,MHAXTYPE
          RETURN
.
UPMHAXI1  MOVE      MHAXTYPE,DMHAXTYP       * update
          UPDATE    MEHAXIA1;DMHAXTYP,MHAXCODE,MHAXDESC,MHAXSTAT,MHAXSPAR
          RETURN
.
WRMHAXI1  RESET     KEY10                   * write
          MOVE      MHAXTYPE,DMHAXTYP
          WRITE     MEHAXIA1,KEY10;DMHAXTYP,MHAXCODE,MHAXDESC,MHAXSTAT,MHAXSPAR
          RETURN
.
DEMHAXI1  RESET     KEY10                   * delete
          DELETE    MEHAXIA1,KEY10
          RETURN
.
. -----------------------------------------
. ------- I/O routines for MEHAUDAX -------
. -----------------------------------------
.
ASMHAXI   RESET     KEY19
          READ      MEHAUDAX,KEY19;;
          RETURN
.
AKMHAXI   MOVE      ZERO,OVRCD
          READKS    MEHAUDAX;MHAXAUDD,MHAXAUDT,MHAXAUDP,MHAXAUDR,MHAXAUDS:
                             MHAXAUDO:
                             DMHAXTYP,MHAXCODE,MHAXDESC,MHAXSTAT,MHAXSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AUMHAXI   MOVE      MHAXTYPE,DMHAXTYP       * update
          UPDATE    MEHAUDAX;MHAXAUDD,MHAXAUDT,MHAXAUDP,MHAXAUDR,MHAXAUDS:
                             MHAXAUDO:
                             DMHAXTYP,MHAXCODE,MHAXDESC,MHAXSTAT,MHAXSPAR
          RETURN
.
AWMHAXI   RESET     KEY19                   * write
          MOVE      MHAXTYPE,DMHAXTYP
          WRITE     MEHAUDAX,KEY19;MHAXAUDD,MHAXAUDT,MHAXAUDP,MHAXAUDR,MHAXAUDS:
                                   MHAXAUDO:
                                   DMHAXTYP,MHAXCODE,MHAXDESC,MHAXSTAT,MHAXSPAR
          RETURN
.
ADMHAXI   RESET     KEY19                   * delete
          DELETE    MEHAUDAX,KEY19
          RETURN
...............................................................................
