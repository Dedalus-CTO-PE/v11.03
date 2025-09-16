.
. **********************************************************
. *                                                        *
. *  Include Name :  PATICUIO                              *
. *                                                        *
. *  Function     :  I/O for paticuaf file                 *
. *                                                        *
. *  Keys         :  KEY8                                  *
. *                                                        *
. *  Mods         :                                        *
. *                                                        *
. **********************************************************
.
RSPTICU1    READ    PATICUA1,KEY8;;
            RETURN
.
RAPTICU1    MOVE    ZERO,OVRCD
            RESET   KEY8 
            READ    PATICUA1,KEY8;ANS
            GOTO    OVERCOND IF OVER
            RETURN
.
RDPTICU1    MOVE    ZERO,OVRCD
            RESET   KEY8 
            READ    PATICUA1,KEY8;DPTICUAD,PTICUINT,PTICUMEC,PTICUCCU,PTICAMBN:
                                  PTICCPAP,PTICHNCU,PTICINTM,PTICMECM,PTICCHSC:
                                  PTICUSPR
            GOTO    OVERCOND IF OVER
            MOVE    DPTICUAD,PTICUADM
            RETURN
.
RKPTICU1    MOVE    ZERO,OVRCD
            READKS  PATICUA1;DPTICUAD,PTICUINT,PTICUMEC,PTICUCCU,PTICAMBN:
                             PTICCPAP,PTICHNCU,PTICINTM,PTICMECM,PTICCHSC:
                             PTICUSPR
            GOTO    OVERCOND IF OVER
            MOVE    DPTICUAD,PTICUADM
            RETURN
.
UPPTICU1    MOVE    PTICUADM,DPTICUAD
            UPDATE  PATICUA1;DPTICUAD,PTICUINT,PTICUMEC,PTICUCCU,PTICAMBN:
                             PTICCPAP,PTICHNCU,PTICINTM,PTICMECM,PTICCHSC:
                             PTICUSPR
            RETURN
.
WRPTICU1    RESET   KEY8
            WRITE   PATICUA1,KEY8;KEY8,PTICUINT,PTICUMEC,PTICUCCU,PTICAMBN:
                                       PTICCPAP,PTICHNCU,PTICINTM,PTICMECM:
                                       PTICCHSC,PTICUSPR
            RETURN
.
DEPTICU1    DELETE  PATICUA1,KEY8
            RETURN
.
