.
. PCPFRAIO.INC
. ------------
. Filenames       : pcpfraaf
. Description     : Patient Care Plans 'Frequency Description File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY9    DIM    9        KEY FOR PCPFRAA1
.                   KEY39   DIM    39       KEY FOR PCPFRAA2
.
. Modifications   : 01/12/1993    Justin Coates  Quote 7841 SRF 123724
.                   added PCFAONCE for once only codes
.
. -----------------------------------------
. ------- I/O routines for PCPFRAA1 -------
. -----------------------------------------
.
RSPCFRA1  RESET     KEY9
          READ      PCPFRAA1,KEY9;;
          RETURN
.
RAPCFRA1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      PCPFRAA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPCFRA1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      PCPFRAA1,KEY9;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCFRA1  MOVE      ZERO,OVRCD
          READKS    PCPFRAA1;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCFRA1  MOVE      ZERO,OVRCD
          READKP    PCPFRAA1;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPCFRA1  UPDATE    PCPFRAA1;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          RETURN
.
WRPCFRA1  RESET     KEY9
          WRITE     PCPFRAA1,KEY9;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          RETURN
.
DEPCFRA1  RESET     KEY9
          DELETE    PCPFRAA1,KEY9
          RETURN
.
. -----------------------------------------
. ------- I/O routines for PCPFRAA2 -------
. -----------------------------------------
.
RSPCFRA2  RESET     KEY39
          READ      PCPFRAA2,KEY39;;
          RETURN
.
RAPCFRA2  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PCPFRAA2,KEY39;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPCFRA2  RESET     KEY39
          MOVE      ZERO,OVRCD
          READ      PCPFRAA2,KEY39;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCFRA2  MOVE      ZERO,OVRCD
          READKS    PCPFRAA2;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCFRA2  MOVE      ZERO,OVRCD
          READKP    PCPFRAA2;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPCFRA2  UPDATE    PCPFRAA2;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          RETURN
.
WRPCFRA2  RESET     KEY39
          WRITE     PCPFRAA2,KEY39;PCFACODE,PCFADESC,PCFAONCE,PCFASPAR
          RETURN
.
DEPCFRA2  RESET     KEY39
          DELETE    PCPFRAA2,KEY39
          RETURN
...............................................................................
