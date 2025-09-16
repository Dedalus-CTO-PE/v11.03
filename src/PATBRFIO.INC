.
. PATBRFIO.INC
. ------------
. Related FD   : PATBRFFD.INC
. Filenames    : patbrfaf
. Description  : Patient Management Billing Referral Details
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY8     DIM     8          KEY FOR PATBRFA1
.
. Mods : 
.
. -----------------------------------------
. ------- I/O routines for PATBRFA1 -------
. -----------------------------------------
.
.         read to see if record exists 
.
RAPTBRF1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATBRFA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         positional read
.
RSPTBRF1  RESET     KEY8
          READ      PATBRFA1,KEY8;;
          RETURN
.
.         direct read 
.
RDPTBRF1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATBRFA1,KEY8;DPTBRBIL,PTBRDOCT,PTBRONUM,PTBRAUTH:
                                  PTBRTYPE,PTBRFDOC,PTBRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTBRBIL,PTBRBILL
          RETURN
.
.         next read 
.
RKPTBRF1  MOVE      ZERO,OVRCD
          READKS    PATBRFA1;DPTBRBIL,PTBRDOCT,PTBRONUM,PTBRAUTH:
                                  PTBRTYPE,PTBRFDOC,PTBRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTBRBIL,PTBRBILL
          RETURN
.
.         previous read 
.
RPPTBRF1  MOVE      ZERO,OVRCD
          READKP    PATBRFA1;DPTBRBIL,PTBRDOCT,PTBRONUM,PTBRAUTH:
                                  PTBRTYPE,PTBRFDOC,PTBRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTBRBIL,PTBRBILL
          RETURN
.
.         write 
.
WRPTBRF1  RESET     KEY8
          MOVE      PTBRBILL,DPTBRBIL
          WRITE     PATBRFA1,KEY8;KEY8,PTBRDOCT,PTBRONUM,PTBRAUTH:
                                  PTBRTYPE,PTBRFDOC,PTBRSPAR
          RETURN
.
.         update 
.
UPPTBRF1  RESET     KEY8
          MOVE      PTBRBILL,DPTBRBIL
          UPDATE    PATBRFA1;DPTBRBIL,PTBRDOCT,PTBRONUM,PTBRAUTH:
                                  PTBRTYPE,PTBRFDOC,PTBRSPAR
          RETURN
.
.         delete 
.
DEPTBRF1  RESET     KEY8
          DELETE    PATBRFA1,KEY8
          RETURN
