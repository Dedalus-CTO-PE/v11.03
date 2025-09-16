.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIN1IO                              *
. *                                                        *
. *  Function     :  I/O for patin1af file                 *
. *                                                        *
. *  Keys         :  KEY6  KEY12                           *
. *                                                        *
. *  Modifications:                                        *
. *  V10.04.01  30/12/2013 PA                  Car 294445  *
. *              Moved PTINARCE out of spare               *
. *  V10.03.01  10/10/2012 PA                  Car 273294  *
. *              AROC Health Fund Equivalent Code          *
. *                 V10.02.01 17/05/2010 J.Tan CAR 239592  *
. *                        Added Fax no,email and serv.code*
. *                 V10.00.02 23/08/2010 SA   CAR 228847   *
. *                        Fixed position of PTINSCPP      *
. *                 V10.00.01 10/05/2010 SA   CAR 169939   *
. *                        Added PTINACTV to PTINSPAR      *
. *                  V9.11.01 15/12/2008 EC   CAR 183976   *
. *                        Added PTINSCEM to PTINSCPP      *
. *                  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                  V5.01 20.11.92 Whirlpool              *
. *                          DUDLEY CHANGES                *
. *                  V5.02 27.04.00 Bronko Sosic           *
. *                        Added a readKP                  *
. *                                                        *
. **********************************************************
.
RDSINSR1  RESET     KEY6
          READ      PATIN1A1,KEY6;;
          RETURN  
.
RDINSR1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATIN1A1,KEY6;ICODE,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                                  ICONT,ITELEB,IBILL,IAOUT,ISORT:
                                  PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                                  PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                                  PTINARCE,PTINSPAR
          GOTO      OVERCOND IF OVER
          MOVE      ISORT,SISORT
          RETURN  
.
RLINSR1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READL     PATIN1A1,KEY6;ICODE,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                                  ICONT,ITELEB,IBILL,IAOUT,ISORT:
                                  PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                                  PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                                  PTINARCE,PTINSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      ISORT,SISORT
          RETURN  
.
RDKINSR1  MOVE      ZERO,OVRCD
          READKS    PATIN1A1;ICODE,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                             ICONT,ITELEB,IBILL,IAOUT,ISORT:
                             PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                             PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                             PTINARCE,PTINSPAR
          GOTO      OVERCOND IF OVER
          MOVE      ISORT,SISORT
          RETURN  

RDPINSR1  MOVE      ZERO,OVRCD
          READKP    PATIN1A1;ICODE,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                             ICONT,ITELEB,IBILL,IAOUT,ISORT:
                             PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                             PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                             PTINARCE,PTINSPAR
          GOTO      OVERCOND IF OVER
          MOVE      ISORT,SISORT
          RETURN  
.
WRINSR1   MOVE      ZERO,OVRCD
          RESET     KEY6
          TRAP      OVERLOCK IF IO
          WRITE     PATIN1A1,KEY6;KEY6,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                                  ICONT,ITELEB,IBILL,IAOUT,ISORT:
                                  PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                                  PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                                  PTINARCE,PTINSPAR
          TRAPCLR   IO
          RETURN  
.
UPINSR1   
          UPDATE    PATIN1A1;ICODE,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                             ICONT,ITELEB,IBILL,IAOUT,ISORT:
                             PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                             PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                             PTINARCE,PTINSPAR
          RETURN  
.
ULINSR1   UNLOCK    PATIN1A1
          RETURN
.
DEINSR1   RESET     KEY6
          DELETE    PATIN1A1,KEY6
          RETURN
.
.
RDSINSR2  RESET     KEY12
          READ      PATIN1A2,KEY12;;
          RETURN
.
RDINSR2   MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      PATIN1A2,KEY12;ICODE,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                                  ICONT,ITELEB,IBILL,IAOUT,ISORT:
                                  PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                                  PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                                  PTINARCE,PTINSPAR
          GOTO      OVERCOND IF OVER
          MOVE      ISORT,SISORT
          RETURN  
.
RDKINSR2  MOVE      ZERO,OVRCD
          READKS    PATIN1A2;ICODE,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                             ICONT,ITELEB,IBILL,IAOUT,ISORT:
                             PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                             PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                             PTINARCE,PTINSPAR
          GOTO      OVERCOND IF OVER
          MOVE      ISORT,SISORT
          RETURN  

RDPINSR2  MOVE      ZERO,OVRCD
          READKP    PATIN1A2;ICODE,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                             ICONT,ITELEB,IBILL,IAOUT,ISORT:
                             PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                             PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                             PTINARCE,PTINSPAR
          GOTO      OVERCOND IF OVER
          MOVE      ISORT,SISORT
          RETURN  
.
WRINSR2   
          RESET     KEY12
          WRITE     PATIN1A2,KEY12;ICODE,INAME,IADD1,IADD2,IADD3,IADD4,IPOST:
                                   ICONT,ITELEB,IBILL,IAOUT,ISORT:
                                   PTINSCEM,PTINSCPN,PTINSCPP,PTINACTV:
                                   PTINFAXN,PTINEMAI,PTINSERV,PTINCLAI:
                                   PTINARCE,PTINSPAR
          RETURN  
.
DEINSR2   RESET     KEY12
          DELETE    PATIN1A2,KEY12
          RETURN
+
.

