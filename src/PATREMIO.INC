.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOREM                              *
. *                                                        *
. *  Function     :  I/O for patremdf file                 *
. *                                                        *
. *  Keys         :  KEY8                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                        Change Admission to 8 characters*
. *                                                        *
. **********************************************************
.
RDSREMD1
         MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATREMD1,KEY8;;
         GOTO      OVERCOND IF OVER
         RETURN
.
RDREMD1
         MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATREMD1,KEY8;DREMADMN,REMLSTL,REMLDTE,REMPDTE:
                                 REMHFLG,REMSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DREMADMN,REMADMN
         RETURN  
.
RDKREMD1
         MOVE      ZERO,OVRCD
         READKS    PATREMD1;DREMADMN,REMLSTL,REMLDTE,REMPDTE:
                            REMHFLG,REMSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DREMADMN,REMADMN
         RETURN  
.
WRREMD1  
         MOVE      REMADMN,DREMADMN
         RESET     KEY8
         WRITE     PATREMD1,KEY8;KEY8,REMLSTL,REMLDTE,REMPDTE:
                                 REMHFLG,REMSPAR
         RETURN  
.
UPREMD1  MOVE      REMADMN,DREMADMN
         UPDATE    PATREMD1;DREMADMN,REMLSTL,REMLDTE,REMPDTE:
                            REMHFLG,REMSPAR
         RETURN  
.
DEREMD1
         RESET     KEY8
         DELETE    PATREMD1,KEY8
         RETURN
.
