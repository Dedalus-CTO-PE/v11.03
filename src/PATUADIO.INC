.
. **********************************************************
. *                                                        *
. *  Include Name :  PATUADIO                              *
. *                                                        *
. *  Function     :  I/O for patuadaf file                  *
. *                                                        *
. *  Keys         :  KEY24                                 *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
RSPTUAD1    READ    PATUADA1,KEY24;;
            RETURN
.
RAPTUAD1    MOVE    ZERO,OVRCD
            RESET   KEY24 
            READ    PATUADA1,KEY24;ANS
            GOTO    OVERCOND IF OVER
            RETURN
.
RDPTUAD1    MOVE    ZERO,OVRCD
            RESET   KEY24 
            READ    PATUADA1,KEY24;DPTUAADM,PTUADATE,PTUATIME:
                                   PTUAOUR,PTUANUR,PTUAOPR,PTUASPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUAADM,PTUAADMN
            RETURN
.
RKPTUAD1    MOVE    ZERO,OVRCD
            READKS  PATUADA1;DPTUAADM,PTUADATE,PTUATIME:
                             PTUAOUR,PTUANUR,PTUAOPR,PTUASPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUAADM,PTUAADMN
            RETURN
.
RPPTUAD1    MOVE    ZERO,OVRCD
            READKP  PATUADA1;DPTUAADM,PTUADATE,PTUATIME:
                             PTUAOUR,PTUANUR,PTUAOPR,PTUASPAR
            GOTO    OVERCOND IF OVER
            MOVE    DPTUAADM,PTUAADMN
            RETURN
.
UPPTUAD1    MOVE    PTUAADMN,DPTUAADM
            UPDATE  PATUADA1;DPTUAADM,PTUADATE,PTUATIME:
                             PTUAOUR,PTUANUR,PTUAOPR,PTUASPAR
            RETURN
.
WRPTUAD1    RESET   KEY24
            MOVE    PTUAADMN,DPTUAADM
            WRITE   PATUADA1,KEY24;DPTUAADM,PTUADATE,PTUATIME:
                                   PTUAOUR,PTUANUR,PTUAOPR,PTUASPAR
            RETURN
.
DEPTUAD1    RESET   KEY24
            DELETE  PATUADA1,KEY24
            RETURN
