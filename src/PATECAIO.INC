.
. PATECAIO.INC
. ------------
. Filename       :  patecaaf
. Description    :  Episode Admission/Discharge Details
. Variables      :  OVRCD     FORM      1
. Keys           :  KEY10
. Modifications  :
.
. Index 1 KEY10
.
RAPTECA1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      PATECAA1,KEY10;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTECA1  RESET     KEY10
          READ      PATECAA1,KEY10;;
          RETURN
.
RDPTECA1  MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      PATECAA1,KEY10;DPTEAADM,DPTEAEPN,PTEAWGHT,PTEACLSS,PTEACRIT:
                                   PTEAUVTH,PTEASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTEAADM,PTEAADMN
          MOVE      DPTEAEPN,PTEAEPNO
          RETURN
.
RKPTECA1  MOVE      ZERO,OVRCD
          READKS    PATECAA1;DPTEAADM,DPTEAEPN,PTEAWGHT,PTEACLSS,PTEACRIT:
                             PTEAUVTH,PTEASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTEAADM,PTEAADMN
          MOVE      DPTEAEPN,PTEAEPNO
          RETURN
.
RPPTECA1  MOVE      ZERO,OVRCD
          READKP    PATECAA1;DPTEAADM,DPTEAEPN,PTEAWGHT,PTEACLSS,PTEACRIT:
                             PTEAUVTH,PTEASPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTEAADM,PTEAADMN
          MOVE      DPTEAEPN,PTEAEPNO
          RETURN
.
UPPTECA1  MOVE      PTEAADMN,DPTEAADM 
          MOVE      PTEAEPNO,DPTEAEPN 
          UPDATE    PATECAA1;DPTEAADM,DPTEAEPN,PTEAWGHT,PTEACLSS,PTEACRIT:
                             PTEAUVTH,PTEASPAR
          RETURN
.
WRPTECA1  RESET     KEY10
          MOVE      PTEAADMN,DPTEAADM 
          MOVE      PTEAEPNO,DPTEAEPN 
          WRITE     PATECAA1,KEY10;DPTEAADM,DPTEAEPN,PTEAWGHT,PTEACLSS,PTEACRIT:
                                   PTEAUVTH,PTEASPAR
          RETURN
.
DEPTECA1  RESET     KEY10
          DELETE    PATECAA1,KEY10
          RETURN
