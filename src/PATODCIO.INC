.
. **********************************************************
. *                                                        *
. *  Include Name :  PATODCIO                              *
. *                                                        *
. *  Function     :  I/O for patodcaf file                 *
. *                                                        *
. *  Keys         :  KEY8, KEY16                           *
. *                                                        *
. *  Modifications:  V5.01.01  07.11.90  D.G.P             *
. *                        New Include                     *
. *                                                        *
. **********************************************************
.
RDAODCA1 MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATODCA1,KEY8;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSODCA1 RESET     KEY8
         READ      PATODCA1,KEY8;;
         RETURN  
.
RDODCA1  MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATODCA1,KEY8;DPTODADM,PTODDATE,PTODSENT,PTODFILL  
         GOTO      OVERCOND IF OVER
         MOVE      DPTODADM,PTODADMN
         RETURN  
.
RDKODCA1 MOVE      ZERO,OVRCD
         READKS    PATODCA1;DPTODADM,PTODDATE,PTODSENT,PTODFILL
         GOTO      OVERCOND IF OVER
         MOVE      DPTODADM,PTODADMN
         RETURN  
.
RDPODCA1 MOVE      ZERO,OVRCD
         READKP    PATODCA1;DPTODADM,PTODDATE,PTODSENT,PTODFILL
         GOTO      OVERCOND IF OVER
         MOVE      DPTODADM,PTODADMN
         RETURN  
.
WRODCA1  RESET     KEY8
         WRITE     PATODCA1,KEY8;KEY8,PTODDATE,PTODSENT,PTODFILL
         RETURN  
.
UPODCA1  UPDATE    PATODCA1;DPTODADM,PTODDATE,PTODSENT,PTODFILL
         RETURN  
.
DEODCA1  RESET     KEY8
         DELETE    PATODCA1,KEY8
         RETURN
.
.------------------------------------------------------------------------------
.
RDAODCA2 MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATODCA2,KEY16;ANS
         GOTO      OVERCOND IF OVER
         RETURN  
.
RDSODCA2 RESET     KEY16
         READ      PATODCA2,KEY16;;
         RETURN  
.
RDODCA2  MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATODCA2,KEY16;DPTODADM,PTODDATE,PTODSENT,PTODFILL
         GOTO      OVERCOND IF OVER
         MOVE      DPTODADM,PTODADMN
         RETURN  
.
RDKODCA2 MOVE      ZERO,OVRCD
         READKS    PATODCA2;DPTODADM,PTODDATE,PTODSENT,PTODFILL
         GOTO      OVERCOND IF OVER
         MOVE      DPTODADM,PTODADMN
         RETURN  
.
RDPODCA2 MOVE      ZERO,OVRCD
         READKP    PATODCA2;DPTODADM,PTODDATE,PTODSENT,PTODFILL
         GOTO      OVERCOND IF OVER
         MOVE      DPTODADM,PTODADMN
         RETURN  
.
