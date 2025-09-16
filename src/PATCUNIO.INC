.
. **********************************************************
. *                                                        *
. *  Include Name :  PATCUNIO                              *
. *                                                        *
. *  Function     :  I/O for clinic unit number file       *
. *                                                        *
. *  Keys         :  KEY9                                  *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
RDSCUNO1    READ    PATCUNO1,KEY9;;
            RETURN
.
RDACUNO1    MOVE    ZERO,OVRCD
            RESET   KEY9 
            READ    PATCUNO1,KEY9;ANS
            GOTO    OVERCOND IF OVER
            RETURN
.
RDCUNO1     MOVE    ZERO,OVRCD
            RESET   KEY9 
            READ    PATCUNO1,KEY9;CUNDOCT,CUNWARD,CUNNUMB,CUNSPAR
            GOTO    OVERCOND IF OVER
            RETURN
.
RDKCUNO1    MOVE    ZERO,OVRCD
            READKS  PATCUNO1;CUNDOCT,CUNWARD,CUNNUMB,CUNSPAR
            GOTO    OVERCOND IF OVER
            RETURN
.
UPCUNO1     UPDATE  PATCUNO1;CUNDOCT,CUNWARD,CUNNUMB,CUNSPAR
            RETURN
.
WRCUNO1     RESET   KEY9
            WRITE   PATCUNO1,KEY9;CUNDOCT,CUNWARD,CUNNUMB,CUNSPAR
            RETURN
.
DECUNO1     DELETE  PATCUNO1,KEY9
            RETURN
.
