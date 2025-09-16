.
. PCPIDPIO.INC
. ------------
. Filenames       : pcpidpaf
. Description     : Patient Care Plans 'Intervention Dependency File'
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY9    DIM    9        KEY FOR PCPIDPA1
.
. -----------------------------------------
. ------- I/O routines for PCPIDPA1 -------
. -----------------------------------------
.
RSPCIDP1  RESET     KEY9
          READ      PCPIDPA1,KEY9;;
          RETURN
.
RAPCIDP1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      PCPIDPA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPCIDP1  RESET     KEY9
          MOVE      ZERO,OVRCD
          READ      PCPIDPA1,KEY9;PCPICODE,PCPITIME,PCPISTAF,PCPISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCIDP1  MOVE      ZERO,OVRCD
          READKS    PCPIDPA1;PCPICODE,PCPITIME,PCPISTAF,PCPISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCIDP1  MOVE      ZERO,OVRCD
          READKP    PCPIDPA1;PCPICODE,PCPITIME,PCPISTAF,PCPISPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPCIDP1  UPDATE    PCPIDPA1;PCPICODE,PCPITIME,PCPISTAF,PCPISPAR
          RETURN
.
WRPCIDP1  RESET     KEY9
          WRITE     PCPIDPA1,KEY9;PCPICODE,PCPITIME,PCPISTAF,PCPISPAR
          RETURN
.
DEPCIDP1  RESET     KEY9
          DELETE    PCPIDPA1,KEY9
          RETURN
...............................................................................
