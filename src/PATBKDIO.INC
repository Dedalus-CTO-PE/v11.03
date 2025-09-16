. V5.07.001 07/08/1998 Glenn 507 Changes
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOBKD                              *
. *                                                        *
. *  Function     :  I/O for patbnkd file                  *
. *                                                        *
. *  Keys         :  KEY12                                 *
. *                                                        *
. **********************************************************
.
RDSBNKD1 RESET     KEY12
         READ      PATBNK1,KEY12;;
         RETURN  
.
RDBNKD1  MOVE      ZERO,OVRCD
         RESET     KEY12
         READ      PATBNK1,KEY12;KDATE,KRECTYP,DKPAYTYP,PTBDAMOU,PTBDSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DKPAYTYP,KPAYTYP
         MOVE      PTBDAMOU,KDEPAMT
         RETURN  
.
RDKBNKD1 MOVE      ZERO,OVRCD
         READKS    PATBNK1;KDATE,KRECTYP,DKPAYTYP,PTBDAMOU,PTBDSPAR
         GOTO      OVERCOND IF OVER
         MOVE      DKPAYTYP,KPAYTYP
         MOVE      PTBDAMOU,KDEPAMT
         RETURN  
.
WRBNKD1  MOVE      KPAYTYP,DKPAYTYP
         MOVE      KDEPAMT,PTBDAMOU
         WRITE     PATBNK1,KEY12;KEY12,PTBDAMOU,PTBDSPAR
         RETURN  
.
UPBNKD1  MOVE      KPAYTYP,DKPAYTYP
         MOVE      KDEPAMT,PTBDAMOU
         UPDATE    PATBNK1;KDATE,KRECTYP,DKPAYTYP,PTBDAMOU,PTBDSPAR
         RETURN  
.
DEBNKD1  RESET     KEY12
         DELETE    PATBNK1,KEY12
         RETURN
