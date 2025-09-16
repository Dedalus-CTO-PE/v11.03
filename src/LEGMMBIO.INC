.
.         INCLUDE FILE : LEGMMBIO.INC
.
.         FILE I/O REQUESTS FOR MEDICAL RECORDS MBS CODES
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY10  DIM             10            KEY FOR LEGMMBS1
.KEY19  DIM             19            KEY FOR LEGMMBS2
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE PATAAAX
.                  RDKAAAX IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
RALGMMB1
         MOVE      ZERO,OVRCD
         RESET     KEY10
         READ      LEGMMBS1,KEY10;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RSLGMMB1
         RESET     KEY10
         READ      LEGMMBS1,KEY10;;
         RETURN
.
RDLGMMB1
         MOVE      ZERO,OVRCD
         RESET     KEY10
         READ      LEGMMBS1,KEY10;LMMCODE,DLMMADMN,DLMMRECN:
                                  LMMDATE,LMMSTIM,LMMETIM,LMMSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DLMMADMN,LQMMADMN
         MOVE      LQMMADMN,LMMADMN
         MOVE      DLMMRECN,LMMRECN
         MOVE      LMMCODE,LSMMCODE
         RETURN
.
RKLGMMB1
         MOVE      ZERO,OVRCD
         READKS    LEGMMBS1;LMMCODE,DLMMADMN,DLMMRECN:
                            LMMDATE,LMMSTIM,LMMETIM,LMMSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DLMMADMN,LQMMADMN
         MOVE      LQMMADMN,LMMADMN
         MOVE      DLMMRECN,LMMRECN
         MOVE      LMMCODE,LSMMCODE
         RETURN
.
.
.      2ND I/O
.
RSLGMMB2
         RESET     KEY19
         READ      LEGMMBS2,KEY19;;
         RETURN
.
RDLGMMB2
         MOVE      ZERO,OVRCD
         RESET     KEY19
         READ      LEGMMBS2,KEY19;LMMCODE,DLMMADMN,DLMMRECN:
                                  LMMDATE,LMMSTIM,LMMETIM,LMMSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DLMMADMN,LQMMADMN
         MOVE      LQMMADMN,LMMADMN
         MOVE      DLMMRECN,LMMRECN
         RETURN
.
RKLGMMB2
         MOVE      ZERO,OVRCD
         READKS    LEGMMBS2;LMMCODE,DLMMADMN,DLMMRECN:
                            LMMDATE,LMMSTIM,LMMETIM,LMMSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DLMMADMN,LQMMADMN
         MOVE      LQMMADMN,LMMADMN
         MOVE      DLMMRECN,LMMRECN
         RETURN
