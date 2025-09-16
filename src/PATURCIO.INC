.
. **********************************************************
. *                                                        *
. *  Include Name :  PATURCIO                              *
. *                                                        *
. *  Function     :  I/O for paturcaf file                 *
. *                                                        *
. *  Keys         :  KEY24                                 *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
RDSURCA1    READ    PATURCA1,KEY24;;
            RETURN
.
RDAURCA1    MOVE    ZERO,OVRCD
            RESET   KEY24 
            READ    PATURCA1,KEY24;ANS
            GOTO    OVERCOND IF OVER
            RETURN
.
RDURCA1     MOVE    ZERO,OVRCD
            RESET   KEY24 
            READ    PATURCA1,KEY24;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTURADM,PTURADMN
            RETURN
.
RDKURCA1    MOVE    ZERO,OVRCD
            READKS  PATURCA1;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTURADM,PTURADMN
            RETURN
.
RDPURCA1    MOVE    ZERO,OVRCD
            READKP  PATURCA1;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTURADM,PTURADMN
            RETURN
.
UPURCA1     MOVE    PTURADMN,DPTURADM
            UPDATE  PATURCA1;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            RETURN
.
WRURCA1     RESET   KEY24
            MOVE    PTURADMN,DPTURADM
            WRITE   PATURCA1,KEY24;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            RETURN
.
DEURCA1     RESET   KEY24
            DELETE  PATURCA1,KEY24
            RETURN
.
RDURCA2     MOVE    ZERO,OVRCD
            RESET   KEY24 
            READ    PATURCA2,KEY24;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTURADM,PTURADMN
            RETURN
.
RDKURCA2    MOVE    ZERO,OVRCD
            READKS  PATURCA2;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTURADM,PTURADMN
            RETURN
.
RDPURCA2    MOVE    ZERO,OVRCD
            READKS  PATURCA2;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTURADM,PTURADMN
            RETURN
.
WRURCA2     RESET   KEY24
            MOVE    PTURADMN,DPTURADM
            WRITE   PATURCA2,KEY24;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            RETURN
.
UPURCA2     MOVE    PTURADMN,DPTURADM
            UPDATE  PATURCA2;DPTURADM,PTURDATE,PTURTIME,PTUROURN,PTURSPAR
            RETURN
.
DEURCA2     RESET   KEY24
            DELETE  PATURCA2,KEY24
            RETURN
.
RDSURCA2    READ    PATURCA2,KEY24;;
            RETURN
.
