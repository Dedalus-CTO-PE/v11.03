.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOCMN                              *
. *                                                        *
. *  Function     :  I/O for patcmntf file                 *
. *                                                        *
. *  Keys         :  KEY10                                 *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                        Change Admission to 8 characters*
. *                                                        *
. * V10.03.01  Steve Armstrong  CAR 283357                 *
. *            Added RDACMNT1 routine                      *
. **********************************************************
.
RDACMNT1 MOVE      ZERO,OVRCD
         RESET     KEY10
         READ      PATCMNT1,KEY10;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSCMNT1 MOVE      ZERO,OVRCD
         RESET     KEY10
         READ      PATCMNT1,KEY10;;
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDCMNT1  MOVE      ZERO,OVRCD
         RESET     KEY10
         READ      PATCMNT1,KEY10;DPCADMN,DPCLNO,PCLINE
         GOTO      OVERCOND IF OVER
         MOVE      DPCADMN,PCADMN
         MOVE      DPCLNO,PCLNO
         RETURN  
.
RDKCMNT1 MOVE      ZERO,OVRCD
         READKS    PATCMNT1;DPCADMN,DPCLNO,PCLINE
         GOTO      OVERCOND IF OVER
         MOVE      DPCADMN,PCADMN
         MOVE      DPCLNO,PCLNO
         RETURN  
.
RDPCMNT1 MOVE      ZERO,OVRCD
         READKP    PATCMNT1;DPCADMN,DPCLNO,PCLINE
         GOTO      OVERCOND IF OVER
         MOVE      DPCADMN,PCADMN
         MOVE      DPCLNO,PCLNO
         RETURN  
.
WRCMNT1  RESET     KEY10
         WRITE     PATCMNT1,KEY10;KEY10,PCLINE
         RETURN  
.
UPCMNT1  MOVE      PCADMN,DPCADMN
         MOVE      PCLNO,DPCLNO
         UPDATE    PATCMNT1;DPCADMN,DPCLNO,PCLINE
         RETURN  
.
DECMNT1  RESET     KEY10
         DELETE    PATCMNT1,KEY10
         RETURN
