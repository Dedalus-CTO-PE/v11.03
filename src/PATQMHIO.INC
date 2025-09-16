. ***************************************************************************** . *                                                                           *
. *      Include Name : PATQMHIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for patqmhaf file                                 *
. *                                                                           *
. *      Keys         : KEY8                                                  *
. *                                                                           *
. *      Modifications:                                                       *
. *           V6.06.00  28/05/99  Andrew Peel                                 *
. *                     Added PTQMPSNT to PATQMHFD                            *
. *                                                                           *
. *****************************************************************************
.
RSPTQMH1  RESET     KEY8
          READ      PATQMHA1,KEY8;;
          RETURN
.
RAPTQMH1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      PATQMHA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTQMH1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATQMHA1,KEY8;DPTQMADM,PTQMTOUA,PTQMEMPS,PTQMPSNS,PTQMPRMS:
                                  PTQMRTFC,PTQMMLSI,PTQMPSNT,PTQMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTQMADM,QPTQMADM
          MOVE      QPTQMADM,PTQMADMN
          RETURN
.
RKPTQMH1  MOVE      ZERO,OVRCD
          READKS    PATQMHA1;DPTQMADM,PTQMTOUA,PTQMEMPS,PTQMPSNS,PTQMPRMS:
                             PTQMRTFC,PTQMMLSI,PTQMPSNT,PTQMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTQMADM,QPTQMADM
          MOVE      QPTQMADM,PTQMADMN
          RETURN
.
RPPTQMH1  MOVE      ZERO,OVRCD
          READKP    PATQMHA1;DPTQMADM,PTQMTOUA,PTQMEMPS,PTQMPSNS,PTQMPRMS:
                             PTQMRTFC,PTQMMLSI,PTQMPSNT,PTQMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTQMADM,QPTQMADM
          MOVE      QPTQMADM,PTQMADMN
          RETURN
.
UPPTQMH1  PACK      DPTQMADM,PTQMADMN
          UPDATE    PATQMHA1;DPTQMADM,PTQMTOUA,PTQMEMPS,PTQMPSNS,PTQMPRMS:
                             PTQMRTFC,PTQMMLSI,PTQMPSNT,PTQMSPAR
          RETURN
.
WRPTQMH1  RESET     KEY8
          PACK      DPTQMADM,PTQMADMN
          WRITE     PATQMHA1,KEY8;KEY8,PTQMTOUA,PTQMEMPS,PTQMPSNS,PTQMPRMS:
                                  PTQMRTFC,PTQMMLSI,PTQMPSNT,PTQMSPAR
          RETURN
.
DEPTQMH1  RESET     KEY8
          DELETE    PATQMHA1,KEY8
          RETURN
+
.
