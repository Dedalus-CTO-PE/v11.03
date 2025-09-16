.
. OUTXWPIO.INC
. ------------
. Filenames       : outxwpaf
. Description     : Outpatients 'Extra Session Word Processor File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY12   DIM    12       KEY FOR OUTXWPA1
.
. -----------------------------------------
. ------- I/O routines for OUTXWPA1 -------
. -----------------------------------------
.
RSOTXWP1  RESET     KEY12
          READ      OUTXWPA1,KEY12;;
          RETURN
.
RAOTXWP1  RESET     KEY12
          MOVE      ZERO,OVRCD
          READ      OUTXWPA1,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTXWP1  RESET     KEY12
          MOVE      ZERO,OVRCD
          READ      OUTXWPA1,KEY12;DOTXWOUT,DOTXWLIN,OTXWDESC,OTXWSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXWOUT,OTXWOUTN
          MOVE      DOTXWLIN,OTXWLINE
          RETURN
.
RKOTXWP1  MOVE      ZERO,OVRCD
          READKS    OUTXWPA1;DOTXWOUT,DOTXWLIN,OTXWDESC,OTXWSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXWOUT,OTXWOUTN
          MOVE      DOTXWLIN,OTXWLINE
          RETURN
.
RPOTXWP1  MOVE      ZERO,OVRCD
          READKP    OUTXWPA1;DOTXWOUT,DOTXWLIN,OTXWDESC,OTXWSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTXWOUT,OTXWOUTN
          MOVE      DOTXWLIN,OTXWLINE
          RETURN
.
UPOTXWP1  MOVE      OTXWOUTN,DOTXWOUT
          MOVE      OTXWLINE,DOTXWLIN
          UPDATE    OUTXWPA1;DOTXWOUT,DOTXWLIN,OTXWDESC,OTXWSPAR
          RETURN
.
WROTXWP1  RESET     KEY12
          MOVE      OTXWOUTN,DOTXWOUT
          MOVE      OTXWLINE,DOTXWLIN
          WRITE     OUTXWPA1,KEY12;DOTXWOUT,DOTXWLIN,OTXWDESC,OTXWSPAR
          RETURN
.
DEOTXWP1  RESET     KEY12
          DELETE    OUTXWPA1,KEY12
          RETURN
..............................................................................
