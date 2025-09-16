.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOWMA                              *
. *                                                        *
. *  Function     :  I/O for patwmabf file                 *
. *                                                        *
. *  Keys         :  KEY8                                  *
. *                  KEY16                                 *
. *                  KEY44                                 *
. *                                                        *
. *  Modifications:                                        *
. *  V10.04.01 06/01/2014  Don Nguyen           Car 294450 *
. *            Updated for changes to PATWMAFD             *
. *  V10.03.01 10/10/2012 Patrick Adair         Car 273294 *
. *            Added Insurance Company Code                *
. *   V9.02.02 J.Tan   SRF 20178                           *
. *            Added index 3, visit date                   *
. *   V9.02.01 03/12/2002 Peter Vela                       *
. *            Added UR Number and KEY 16                  *
. *   V5.10.00 26/02/2001 J.Tan                            *
. *            Added TAC Claim form                        *
. *   V5.00 01/06/89 K.Peak                                *
. *         Change include heading                         *
. *         Change Admission to 8 characters               *
. *                                                        *
. **********************************************************
.
RDWMAB1
         MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATWMAB1,KEY8;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DMADMNO,MADMNO
         RETURN
.
RDKWMAB1
         MOVE      ZERO,OVRCD
         READKS    PATWMAB1;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DMADMNO,MADMNO
         RETURN
.
WRWMAB1
         PACK      MSPARE,SP70
         MOVE      MADMNO,DMADMNO
         RESET     KEY8
         WRITE     PATWMAB1,KEY8;KEY8,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         RETURN
.
UPWMAB1
         PACK      MSPARE,SP70
         MOVE      MADMNO,DMADMNO
         UPDATE    PATWMAB1;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         RETURN
.
DEWMAB1
         RESET     KEY8
         DELETE    PATWMAB1,KEY8
         RETURN
.
RDSWMAB1
         RESET     KEY8
         READ      PATWMAB1,KEY8;;
         RETURN
.
RDAWMAB1 
         MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      PATWMAB1,KEY8;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDWMAB2
         MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATWMAB2,KEY16;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DMADMNO,MADMNO
         RETURN
.
RDKWMAB2
         MOVE      ZERO,OVRCD
         READKS    PATWMAB2;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DMADMNO,MADMNO
         RETURN
.
RDPWMAB2
         MOVE      ZERO,OVRCD
         READKP    PATWMAB2;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DMADMNO,MADMNO
         RETURN
.
WRWMAB2
         PACK      MSPARE,SP70
         MOVE      MADMNO,DMADMNO
         RESET     KEY16
         UNPACK    KEY16,PTWMURNO,KEY8
         WRITE     PATWMAB2,KEY16;KEY8,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         RETURN
.
UPWMAB2
         PACK      MSPARE,SP70
         MOVE      MADMNO,DMADMNO
         UPDATE    PATWMAB2;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         RETURN
.
DEWMAB2
         RESET     KEY16
         DELETE    PATWMAB2,KEY16
         RETURN
.
RDSWMAB2
         RESET     KEY16
         READ      PATWMAB2,KEY16;;
         RETURN
.
RDAWMAB2
         MOVE      ZERO,OVRCD
         RESET     KEY16
         READ      PATWMAB2,KEY16;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDWMAB3
         MOVE      ZERO,OVRCD
         RESET     KEY44
         READ      PATWMAB3,KEY44;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DMADMNO,MADMNO
         RETURN
.
RDKWMAB3
         MOVE      ZERO,OVRCD
         READKS    PATWMAB3;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         GOTO      OVERCOND IF OVER
         MOVE      DMADMNO,MADMNO
         RETURN
.
WRWMAB3
         PACK      MSPARE,SP70
         MOVE      MADMNO,DMADMNO
         RESET     KEY44
         WRITE     PATWMAB3,KEY44;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         RETURN
.
UPWMAB3
         PACK      MSPARE,SP70
         MOVE      MADMNO,DMADMNO
         UPDATE    PATWMAB3;DMADMNO,MREFNO,MPOLIC,MACDAT,MSNAME:
                                 MSTELE,MCREGO,MACLOC,MDPINDIC:
                                 MENGAGED,MPINJURE,MMDTRANS,MMECHSEV:
                                 MREGNSEV,MOTHDET1,MOTHDET2,MOTHDET3:
                                 PTWMTACF,PTWMTYPE,PTWMURNO,PTWMVDAT,PTWMICDE:
                                 MSPARE
         RETURN
.
DEWMAB3
         RESET     KEY44
         DELETE    PATWMAB3,KEY44
         RETURN
.
RDSWMAB3
         RESET     KEY44
         READ      PATWMAB3,KEY44;;
         RETURN
.
RDAWMAB3
         MOVE      ZERO,OVRCD
         RESET     KEY44
         READ      PATWMAB3,KEY44;ANS
         GOTO      OVERCOND IF OVER
         RETURN
