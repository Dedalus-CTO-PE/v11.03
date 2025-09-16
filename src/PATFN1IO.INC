.
. **********************************************************
. *                                                        *
. *  Include Name :  PATFN1IO                              *
. *                                                        *
. *  Function     :  I/O for patfn1af file                 *
. *                                                        *
. *  Keys         :  KEY14 KEY54 KEY20                     *
. *                                                        *
. *  Modifications:                                        *
. *      V10.08.01  24/03/2016 Steve Armstrong TSK 0294177 *
. *                 Added PTHFIMCD & PTHFDPRI              *
. **********************************************************
. *      V10.04.01  31/12/2013 PA              Car 295197  *
. *                 Moved PTHFARCE out of spare            *
. **********************************************************
. *      V10.03.01  10/10/2012 PA              Car 273294  *
. *                 AROC Health Fund Equivalent Code       *
. **********************************************************
. *       V9.12.03  04/10/2009  J.Tan          CAR 174079  *
. *                 Added Occupational Group               *
. *       V9.12.02  01/10/2009  Jill Parkinson CAR 174079  *
. *                 Added Future Action code and no of days*
. *       V9.12.01  08/09/2009  Peter Vela    CAR 187022   *
. *                 Added Contact variables                *
. *       V9.09.01  13/12/2007  Davin         CAR 153384   *
. *                 Added PTHFDFIC                         *
. *       V9.08.01  07/02/2007  Davin         CAR 126848   *
. *                 Added index 3                          *
. *       V9.02.02  14/11/2001 Mike Laming                 *
. *                 Added PTHFUCMX Casemix Matrix Ind.     *
. *       V9.02.01  04/10/2001 J.Tan                       *
. *                 Added PTHFUMTD                         *
. *       V5.09.B01 13/12/2000 Ebon Clements               *
. *                 Added PTHFMAXM,PTHFDSC1,PTHFDSC        *
. *       V5.08.01 15/08/2000  Caleb Sharman               *
. *                Changed Health Fund variables to be 8 chars       *
. *       V5.07.00  30/7/1999 Pat Dirito                   *
. *                 Added RDPFUND1 IO routine              *
. *       V5.01 10.11.93 S.Barcham                         *
. *                        Mt Alvernia Changes             *
. *       V5.03.01  16/10/1995  Greg Horvat      SRF 611799*
. *                 Added PTHFHGRP - Health Fund Group     *
. *       V5.03.02  06/12/1995  Greg Horvat                *
. *                 Added PTHFHCPE - HCP Equivalent        *
. *       V5.07.00  23/02/99 J.Tan                         *
. *                 Added health fund table for casemix    *
. *                                                        *
. **********************************************************
.
RDSFUND1  MOVE      ZERO,OVRCD
          RESET     KEY14 
          READ      PATFN1A1,KEY14;;
          RETURN  
.
RDAFUND1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATFN1A1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDFUND1   MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATFN1A1,KEY14;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                                   HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                                   HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                                   DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                                   DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                                   PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                                   PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                                   PTHFDPRI,PTFNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN  
.
RLFUND1   MOVE      ZERO,OVRCD
          RESET     KEY14
          READL     PATFN1A1,KEY14;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                                   HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                                   HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                                   DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                                   DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                                   PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                                   PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                                   PTHFDPRI,PTFNSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN  
.
RDKFUND1  MOVE      ZERO,OVRCD
          READKS    PATFN1A1;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                             HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                             HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                             DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                             DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                             PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                             PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                             PTHFDPRI,PTFNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN  
.
RDPFUND1  MOVE      ZERO,OVRCD
          READKP    PATFN1A1;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                             HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                             HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                             DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                             DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                             PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                             PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                             PTHFDPRI,PTFNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN  
.
WRFUND1   MOVE      ZERO,OVRCD
          MOVE      PTHFUMTD,DTHFUMTD
          MOVE      PTHFUCMX,DTHFUCMX
          RESET     KEY14
          TRAP      OVERLOCK IF IO
          WRITE     PATFN1A1,KEY14;KEY14,HFNAME,HFADD1,HFADD2:
                                   HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                                   HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                                   DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                                   DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                                   PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                                   PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                                   PTHFDPRI,PTFNSPAR
          TRAPCLR    IO
          RETURN  
.
UPFUND1   MOVE      PTHFUMTD,DTHFUMTD
          MOVE      PTHFUCMX,DTHFUCMX
          UPDATE    PATFN1A1;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                             HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                             HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                             DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                             DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                             PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                             PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                             PTHFDPRI,PTFNSPAR
          RETURN  
.
ULFUND1   UNLOCK    PATFN1A1
          RETURN  
.
DEFUND1   RESET     KEY14
          DELETE    PATFN1A1,KEY14
          RETURN
.
.        2nd index for patfn1af
.
RDSFUND2  RESET     KEY54
          READ      PATFN1A2,KEY54;;
          RETURN  
.
RDAFUND2  MOVE      ZERO,OVRCD
          RESET     KEY54
          READ      PATFN1A2,KEY54;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDFUND2   MOVE      ZERO,OVRCD
          RESET     KEY54
          READ      PATFN1A2,KEY54;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                                   HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                                   HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                                   DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                                   DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                                   PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                                   PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                                   PTHFDPRI,PTFNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN  
.
RDKFUND2  MOVE      ZERO,OVRCD
          READKS    PATFN1A2;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                             HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                             HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                             DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                             DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                             PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                             PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                             PTHFDPRI,PTFNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN  
.
RDPFUND2  MOVE      ZERO,OVRCD
          READKP    PATFN1A2;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                             HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                             HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                             DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                             DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                             PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                             PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                             PTHFDPRI,PTFNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN  
.
.        34d index for patfn1af
.
RDSFUND3  RESET     KEY20
          READ      PATFN1A3,KEY20;;
          RETURN
.
RDAFUND3  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      PATFN1A3,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFUND3   MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      PATFN1A3,KEY20;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                                   HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                                   HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                                   DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                                   DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                                   PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                                   PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                                   PTHFDPRI,PTFNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN
.
RDKFUND3  MOVE      ZERO,OVRCD
          READKS    PATFN1A3;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                             HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                             HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                             DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                             DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                             PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                             PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                             PTHFDPRI,PTFNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN
.
RDPFUND3  MOVE      ZERO,OVRCD
          READKP    PATFN1A3;HCODE,HFTABL,HFNAME,HFADD1,HFADD2:
                             HFADD3,HFADD4,HFPCODE,HFTELE,HFBAND:
                             HFHDPE,HFFAXN,PTHFHGRP,PTHFHCPE,PTHFBCAT:
                             DHFTACT,PTHFGRPV,PTHFMAXM,PTHFDSC1,PTHFDSC2:
                             DTHFUMTD,DTHFUCMX,PTHFBILN,PTHFFULD,PTHFCARC:
                             PTHFDFIC,PTHFCNAM,PTHFCTTL,PTHFCEML,PTHFCMOB:
                             PTHFFACD,PTHFNDFP,PTHFOCGR,PTHFARCE,PTHFIMCD:
                             PTHFDPRI,PTFNSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHFTACT,PHFTACT
          MOVE      DTHFUMTD,PTHFUMTD
          MOVE      DTHFUCMX,PTHFUCMX
          RETURN
+
.
