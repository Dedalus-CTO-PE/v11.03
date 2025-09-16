.
. PCPEDIIO.INC
. ------------
. Filenames       : pcpediaf
. Description     : Patient Care Plans 'Care Plan Edit Master File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY20   DIM    20       KEY FOR PCPEDIA1
.
. -----------------------------------------
. ------- I/O routines for PCPEDIA1 -------
. -----------------------------------------
.
RSPCEDI1  RESET     KEY20
          READ      PCPEDIA1,KEY20;;
          RETURN
.
RAPCEDI1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      PCPEDIA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPCEDI1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      PCPEDIA1,KEY20;DPCEDTYP,PCEDCODE,PCEDSUB,PCEDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCEDTYP,PCEDTYPE
          RETURN
.
RKPCEDI1  MOVE      ZERO,OVRCD
          READKS    PCPEDIA1;DPCEDTYP,PCEDCODE,PCEDSUB,PCEDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCEDTYP,PCEDTYPE
          RETURN
.
RPPCEDI1  MOVE      ZERO,OVRCD
          READKP    PCPEDIA1;DPCEDTYP,PCEDCODE,PCEDSUB,PCEDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCEDTYP,PCEDTYPE
          RETURN
.
UPPCEDI1  MOVE      PCEDTYPE,DPCEDTYP
          UPDATE    PCPEDIA1;DPCEDTYP,PCEDCODE,PCEDSUB,PCEDSPAR
          RETURN
.
WRPCEDI1  RESET     KEY20
          MOVE      PCEDTYPE,DPCEDTYP
          WRITE     PCPEDIA1,KEY20;DPCEDTYP,PCEDCODE,PCEDSUB,PCEDSPAR
          RETURN
.
DEPCEDI1  RESET     KEY20
          DELETE    PCPEDIA1,KEY20
          RETURN
...............................................................................
