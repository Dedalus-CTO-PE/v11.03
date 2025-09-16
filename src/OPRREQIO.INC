.******************************************************************************
.  Include Name  : OPRREQIO.INC                                               *
.  Function      : IO ROUTINES for INSTRUMENT AND TRAY ITEM REQUISITION FILE  *
.  File Name     : oprreqaf.dat     SQL                                       *
.                  opraudrq.dat     ( audits )                                *
.  Author        : Bill Dew         15/01/1990                                *
.  Keys          : KEY21,KEY19                                                *
.  Modifications : 28/11/2019 Peter Vela Task 0871644                         *
.                  Added OPRQCHRG                                             *
.                  09/10/90.  J. Ceniza.  Changed according to new specs      *
.                  09/09/1994 Max White    Hawkes Bay Mods                    *
.                  Added new Doctor Code field OPRQDCOD to key, to            *
.                  allow Surgeon & Anaesthetist Requisitions                  *
.                  to be recorded for the same Team.                          *
.******************************************************************************
.
RAOPREQ1  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      OPRREQA1,KEY36;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPREQ1  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      OPRREQA1,KEY36;;
          RETURN  
.
RDOPREQ1  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      OPRREQA1,KEY36;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                                   OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPREQ1  MOVE      ZERO,OVRCD
          READKS    OPRREQA1;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                             OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPREQ1  MOVE      ZERO,OVRCD
          READKP    OPRREQA1;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                             OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPREQ1  UPDATE    OPRREQA1;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                             OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          RETURN
.
WROPREQ1  RESET     KEY36
          WRITE     OPRREQA1,KEY36;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                                   OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          RETURN  
.
DEOPREQ1  RESET     KEY36
          DELETE    OPRREQA1,KEY36
          RETURN
.
RAOPREQ2  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      OPRREQA2,KEY36;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSOPREQ2  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      OPRREQA2,KEY36;;
          RETURN
.
RDOPREQ2  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      OPRREQA2,KEY36;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                                   OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPREQ2  MOVE      ZERO,OVRCD
          READKS    OPRREQA2;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                             OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPREQ2  MOVE      ZERO,OVRCD
          READKP    OPRREQA2;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                             OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPREQ2  UPDATE    OPRREQA2;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                             OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          RETURN
.
WROPREQ2  RESET     KEY36
          WRITE     OPRREQA2,KEY36;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                                   OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          RETURN
.
DEOPREQ2  RESET     KEY36
          DELETE    OPRREQA2,KEY36
          RETURN
.
RAOPREQ3  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      OPRREQA3,KEY36;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSOPREQ3  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      OPRREQA3,KEY36;;
          RETURN
.
RDOPREQ3  MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      OPRREQA3,KEY36;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                                   OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPREQ3  MOVE      ZERO,OVRCD
          READKS    OPRREQA3;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                             OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPREQ3  MOVE      ZERO,OVRCD
          READKP    OPRREQA3;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                             OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPREQ3  UPDATE    OPRREQA3;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                             OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          RETURN
.
WROPREQ3  RESET     KEY36
          WRITE     OPRREQA3,KEY36;OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                                   OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          RETURN
.
DEOPREQ3  RESET     KEY36
          DELETE    OPRREQA3,KEY36
          RETURN
.
.******************************************************************************
.
.    Audit IO routines
.
ASOPREQ   MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRAUDRQ,KEY19;;
          RETURN  
.
AKOPREQ   MOVE      ZERO,OVRCD
          READKS    OPRAUDRQ;OPRQAUDD,OPRQAUDT,OPRQAUDP,OPRQAUDR,OPRQAUDS:
                    OPRQAUDO,OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                    OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
AWOPREQ   RESET     KEY19
          WRITE     OPRAUDRQ,KEY19;KEY19,OPRQAUDS,OPRQAUDO:
                    OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                    OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          RETURN  
.
AUOPREQ   UPDATE    OPRAUDRQ;OPRQAUDD,OPRQAUDT,OPRQAUDP,OPRQAUDR,OPRQAUDS:
                    OPRQAUDO,OPRQUNIQ,OPRQTEAM,OPRQCLSS,OPRQTYPE,OPRQITEM:
                    OPRQAMNT,OPRQDCOD,OPRQCHRG,OPRQSPAR
          RETURN  
.
ADOPREQ   RESET     KEY19
          DELETE    OPRAUDRQ,KEY19
          RETURN
.******************************************************************************
