.
. **********************************************************
. *                                                        *
. *  Include Name :  PATRE1IO                              *
. *                                                        *
. *  Function     :  I/O for patre1af file                 *
. *                                                        *
. *  Keys         :  KEY8                                  *
. *                                                        *
. *  Modifications:  V9.10 04/06/2008 Ebon Clements 151025 *
. *                        Added PTREMOBL and PTRESPAR     *
. *                  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                        Change Admission to 8 characters*
. *                  V5.01 12/01/94 I.Rutt                 *
. *                        Removed SFORMAT of address vars *
. *                        from PATRE1FD                   *
. *       V5.01.02  02/03/1994    Justin Coates            *
. *                 put setlptr check in format routine    * 
. *       V10.02.01 17/05/2012    J.Tan  CAR 239592        *
. *                 Added Given name and Surname           * 
. *                                                        *
. **********************************************************
.
RSPTRES1
RDSRESP1  
          RESET     KEY8
          READ      PATRE1A1,KEY8;;
          RETURN
.
RAPTRES1
RDARESP1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATRE1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTRES1
RDRESP1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATRE1A1,KEY8;DPKADMN,PKNAME,PKADD1,PKADD2:
                               PKSUBR,PKADD4,PKPOST,PKTELEP,PKTELEB,PKRELP:
                               PTREMOBL,PTRESNAM,PTREGNAM,PTRESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPKADMN,PKADMN
          RETURN
.
RKPTRES1
RDKRESP1  MOVE      ZERO,OVRCD
          READKS    PATRE1A1;DPKADMN,PKNAME,PKADD1,PKADD2:
                          PKSUBR,PKADD4,PKPOST,PKTELEP,PKTELEB,PKRELP:
                          PTREMOBL,PTRESNAM,PTREGNAM,PTRESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPKADMN,PKADMN
          RETURN
.
WRPTRES1
WRRESP1   MOVE      PKADMN,DPKADMN
          RESET     KEY8
          WRITE     PATRE1A1,KEY8;KEY8,PKNAME,PKADD1,PKADD2:
                               PKSUBR,PKADD4,PKPOST,PKTELEP,PKTELEB,PKRELP:
                               PTREMOBL,PTRESNAM,PTREGNAM,PTRESPAR
          RETURN
.
DEPTRES1
DERESP1   RESET      KEY8
          DELETE     PATRE1A1,KEY8
          RETURN
.
UPPTRES1
UPRESP1   MOVE      PKADMN,DPKADMN
          UPDATE     PATRE1A1;DPKADMN,PKNAME,PKADD1,PKADD2:
                          PKSUBR,PKADD4,PKPOST,PKTELEP,PKTELEB,PKRELP:
                          PTREMOBL,PTRESNAM,PTREGNAM,PTRESPAR
          RETURN
+
.

