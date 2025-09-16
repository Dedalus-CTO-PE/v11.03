.
. **********************************************************
. *                                                        *
. *  Include Name :  PATHOSIO                              *
. *                                                        *
. *  Function     :  I/O for pathospf file                 *
. *                                                        *
. *  Keys         :  KEY2, KEY4                            *
. *                                                        *
. *  Modifications:  V5.00 21/08/89 Graeme Williams (I.B.A)*
. *                        Include written                 *
. *               V5.01.02 22/05/92 Graeme Williams        *
. *                        Added PTHOACTV                  *
. *                        SRF 114798                      *
. *               V5.01.03 10/03/94 Sandra Barcham         *
. *                        Added READL and Unlock          *
. *                                                        *
. **********************************************************
.
RDAHOSP1  MOVE      ZERO,OVRCD
          RESET     KEY4
          READ      PATHOSP1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSHOSP1  RESET     KEY4
          READ      PATHOSP1,KEY4;;
          RETURN  
.
RDHOSP1   MOVE      ZERO,OVRCD
          RESET     KEY4
          READ      PATHOSP1,KEY4;HOSCODE,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                                  PTHOACTV,PTHORUNB,HOSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHOSINDX,HOSINDX
          RETURN  
.
RLHOSP1   MOVE      ZERO,OVRCD
          RESET     KEY4
          READL     PATHOSP1,KEY4;HOSCODE,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                                  PTHOACTV,PTHORUNB,HOSSPAR
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      DHOSINDX,HOSINDX
          RETURN  
.
RDKHOSP1  MOVE      ZERO,OVRCD
          READKS    PATHOSP1;HOSCODE,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                             PTHOACTV,PTHORUNB,HOSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHOSINDX,HOSINDX
          RETURN  
.
RDPHOSP1  MOVE      ZERO,OVRCD
          READKP    PATHOSP1;HOSCODE,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                             PTHOACTV,PTHORUNB,HOSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHOSINDX,HOSINDX
          RETURN  
.
WRHOSP1   RESET     KEY4
          MOVE      HOSINDX,DHOSINDX
          TRAP      OVERLOCK IF IO
          WRITE     PATHOSP1,KEY4;KEY4,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                                  PTHOACTV,PTHORUNB,HOSSPAR
          TRAPCLR   IO
          RETURN  
.
UPHOSP1   MOVE      HOSINDX,DHOSINDX
          UPDATE    PATHOSP1;HOSCODE,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                             PTHOACTV,PTHORUNB,HOSSPAR
          RETURN  
.
ULHOSP1   UNLOCK    PATHOSP1
          RETURN  
.
DEHOSP1   RESET     KEY4
          DELETE    PATHOSP1,KEY4
          RETURN
.
RDAHOSP2  MOVE      ZERO,OVRCD
          RESET     KEY2
          READ      PATHOSP2,KEY2;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSHOSP2  RESET     KEY2
          READ      PATHOSP2,KEY2;;
          RETURN  
.
RDHOSP2   MOVE      ZERO,OVRCD
          RESET     KEY2
          READ      PATHOSP2,KEY2;HOSCODE,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                                  PTHOACTV,PTHORUNB,HOSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHOSINDX,HOSINDX
          RETURN  
.
RDKHOSP2  MOVE      ZERO,OVRCD
          READKS    PATHOSP2;HOSCODE,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                             PTHOACTV,PTHORUNB,HOSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHOSINDX,HOSINDX
          RETURN  
.
RDPHOSP2  MOVE      ZERO,OVRCD
          READKP    PATHOSP2;HOSCODE,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                             PTHOACTV,PTHORUNB,HOSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DHOSINDX,HOSINDX
          RETURN  
.
UPHOSP2   MOVE      HOSINDX,DHOSINDX
          UPDATE    PATHOSP2;HOSCODE,DHOSINDX,HOSDESC,HOSRUN,HOSRUNR:
                             PTHOACTV,PTHORUNB,HOSSPAR
          RETURN  
..............................................................................
