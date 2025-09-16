. 20/04/94  RKS  Added IO for the new audit file 'fmsaudst'
. ----------------------------------------------------------------------
.
. FMSSBUIO    
. --------
.
RSFMST1   RESET     KEY14
          READ      FMSSBUA1,KEY14;;
          RETURN
.
RAFMST1   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSSBUA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMST1   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSSBUA1,KEY14;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMST1   MOVE      ZERO,OVRCD
          READKS    FMSSBUA1;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMST1   MOVE      ZERO,OVRCD
          READKP    FMSSBUA1;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMST1   UPDATE    FMSSBUA1;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          RETURN
.
WRFMST1   RESET     KEY14
          WRITE     FMSSBUA1,KEY14;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          RETURN
.
DEFMST1   RESET     KEY14
          DELETE    FMSSBUA1,KEY14
          RETURN
.
RSFMST2   RESET     KEY17
          READ      FMSSBUA2,KEY17;;
          RETURN
.
RAFMST2   RESET     KEY17
          MOVE      ZERO,OVRCD
          READ      FMSSBUA2,KEY17;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMST2   RESET     KEY17
          MOVE      ZERO,OVRCD
          READ      FMSSBUA2,KEY17;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMST2   MOVE      ZERO,OVRCD
          READKS    FMSSBUA2;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMST2   MOVE      ZERO,OVRCD
          READKP    FMSSBUA2;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMST2   UPDATE    FMSSBUA2;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          RETURN
.
WRFMST2   RESET     KEY17
          WRITE     FMSSBUA2,KEY17;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          RETURN
.
DEFMST2   RESET     KEY17
          DELETE    FMSSBUA2,KEY17
          RETURN
.
RSFMST3   RESET     KEY14
          READ      FMSSBUA3,KEY14;;
          RETURN
.
RAFMST3   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSSBUA3,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMST3   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSSBUA3,KEY14;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMST3   MOVE      ZERO,OVRCD
          READKS    FMSSBUA3;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMST3   MOVE      ZERO,OVRCD
          READKP    FMSSBUA3;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMST3   UPDATE    FMSSBUA3;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          RETURN
.
WRFMST3   RESET     KEY14
          WRITE     FMSSBUA3,KEY14;FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                                  FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                                  FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                                  FMSTCA12,FMSTCA13,FMSTCUSP
          RETURN
.
DEFMST3   RESET     KEY14
          DELETE    FMSSBUA3,KEY14
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAFMST00  OPEN      CONTROLF,"controlf"
          MOVE      "   51",AUDTSECT
          MOVE      "49",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAFMST99 IF NOT EQUAL
.
          PACK     FMSTAUDD,CCC,CYY,CMM,CDD
          REP       " 0",FMSTAUDD
          CLOCK     TIME,FMSTAUDT
          MOVE      PORT,FMSTAUDP
          LOAD      FMSTAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,FMSTAUDS
          MOVE      PASSCODE,FMSTAUDO
          PACK      KEY19,FMSTAUDD,FMSTAUDT,FMSTAUDP,FMSTAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWFMST
WAFMST99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAFMST00
          MOVE      "   51",AUDTSECT
          MOVE      "49",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAFMST99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADFMST
DAFMST99  RETURN
.
ASFMST     RESET  KEY19
           READ   FMSAUDST,KEY19;;
           RETURN
.
AUFMST     UPDATE FMSAUDST;FMSTAUDD,FMSTAUDT,FMSTAUDP:
                           FMSTAUDR,FMSTAUDS,FMSTAUDO:
                           FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                           FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                           FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                           FMSTCA12,FMSTCA13,FMSTCUSP
           RETURN
.
AKFMST     MOVE   ZERO,OVRCD
           READKS FMSAUDST;FMSTAUDD,FMSTAUDT,FMSTAUDP:
                           FMSTAUDR,FMSTAUDS,FMSTAUDO:
                           FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                           FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                           FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                           FMSTCA12,FMSTCA13,FMSTCUSP
           GOTO   OVERCOND IF OVER
           RETURN
.
AWFMST     RESET  KEY19
           WRITE  FMSAUDST,KEY19;FMSTAUDD,FMSTAUDT,FMSTAUDP:
                           FMSTAUDR,FMSTAUDS,FMSTAUDO:
                           FMSTCULD,FMSTCUAC,FMSTCUPR,FMSTCA01:
                           FMSTCA02,FMSTCA03,FMSTCA04,FMSTCA05,FMSTCA06:
                           FMSTCA07,FMSTCA08,FMSTCA09,FMSTCA10,FMSTCA11:
                           FMSTCA12,FMSTCA13,FMSTCUSP
           RETURN
.
ADFMST     RESET  KEY19
           DELETE FMSAUDST,KEY19
           RETURN
