.
. **********************************************************
. *                                                        *
. *  Include Name :  PATCMOIO                              *
. *                                                        *
. *  Function     :  I/O for patcmor file                  *
. *                                                        *
. *  Keys         :  KEY16                                 *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
RDSCMOR1    READ    PATCMOR1,KEY16;;
            RETURN
.
RDACMOR1    MOVE    ZERO,OVRCD
            RESET   KEY16 
            READ    PATCMOR1,KEY16;ANS
            GOTO    OVERCOND IF OVER
            RETURN
.
RDCMOR1     MOVE    ZERO,OVRCD
            RESET   KEY16 
            READ    PATCMOR1,KEY16;DCMADMNO,CMCDATE,CMNEWFLG,CMSPARE
            GOTO    OVERCOND IF OVER
            MOVE    DCMADMNO,CMADMNO
            RETURN
.
RDKCMOR1    MOVE    ZERO,OVRCD
            READKS  PATCMOR1;DCMADMNO,CMCDATE,CMNEWFLG,CMSPARE
            GOTO    OVERCOND IF OVER
            MOVE    DCMADMNO TO CMADMNO
            RETURN
.
RDPCMOR1    MOVE    ZERO,OVRCD
            READKP  PATCMOR1;DCMADMNO,CMCDATE,CMNEWFLG,CMSPARE
            GOTO    OVERCOND IF OVER
            MOVE    DCMADMNO TO CMADMNO
            RETURN
.
UPCMOR1     MOVE    CMADMNO TO DCMADMNO
            UPDATE  PATCMOR1;DCMADMNO,CMCDATE,CMNEWFLG,CMSPARE
            RETURN
.
WRCMOR1     RESET   KEY16
            MOVE    CMADMNO TO DCMADMNO
            WRITE   PATCMOR1,KEY16;KEY16,CMNEWFLG,CMSPARE 
            RETURN
.
DECMOR1     RESET   KEY16
            DELETE  PATCMOR1,KEY16
            RETURN
.
RDCMOR2     MOVE    ZERO,OVRCD
            RESET   KEY16 
            READ    PATCMOR2,KEY16;DCMADMNO,CMCDATE,CMNEWFLG,CMSPARE
            GOTO    OVERCOND IF OVER
            MOVE    DCMADMNO,CMADMNO
            RETURN
.
RDKCMOR2    MOVE    ZERO,OVRCD
            READKS  PATCMOR2;DCMADMNO,CMCDATE,CMNEWFLG,CMSPARE
            GOTO    OVERCOND IF OVER
            MOVE    DCMADMNO TO CMADMNO
            RETURN
.
RDPCMOR2    MOVE    ZERO,OVRCD
            READKS  PATCMOR2;DCMADMNO,CMCDATE,CMNEWFLG,CMSPARE
            GOTO    OVERCOND IF OVER
            MOVE    DCMADMNO TO CMADMNO
            RETURN
.
WRCMOR2     RESET   KEY16
            MOVE    CMADMNO TO DCMADMNO
            WRITE   PATCMOR2,KEY16;DCMADMNO,CMCDATE,CMNEWFLG,CMSPARE 
            RETURN
.
UPCMOR2     MOVE    CMADMNO TO DCMADMNO
            UPDATE  PATCMOR2;DCMADMNO,CMCDATE,CMNEWFLG,CMSPARE
            RETURN
.
DECMOR2     RESET   KEY16
            DELETE  PATCMOR2,KEY16
            RETURN
.
RDSCMOR2    READ    PATCMOR2,KEY16;;
            RETURN
.
