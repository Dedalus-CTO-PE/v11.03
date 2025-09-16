. 20/04/94  RKS  Added IO for the new audit file 'fmsaudbp'
. ----------------------------------------------------------------------
.
. FMSBPFIO    
. --------
. Filename     : fmsbpfaf.dat
. Auditname    : fmsaudbp.dat
.
RSFMBP1   RESET     KEY9                                                        
          READ      FMSBPFA1,KEY9;;                                             
          RETURN
.
RAFMBP1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      FMSBPFA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBP1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      FMSBPFA1,KEY9;FMBPLEDG,FMBPYEAR,FMBPCODE,FMBPDESC,FMBPPC1:  
                        FMBPPC2,FMBPPC3,FMBPPC4,FMBPPC5,FMBPPC6,FMBPPC7:        
                        FMBPPC8,FMBPPC9,FMBPPC10,FMBPPC11,FMBPPC12,FMBPPC13:    
                        FMBPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBPFA1;FMBPLEDG,FMBPYEAR,FMBPCODE,FMBPDESC,FMBPPC1:       
                        FMBPPC2,FMBPPC3,FMBPPC4,FMBPPC5,FMBPPC6,FMBPPC7:        
                        FMBPPC8,FMBPPC9,FMBPPC10,FMBPPC11,FMBPPC12,FMBPPC13:    
                        FMBPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBPFA1;FMBPLEDG,FMBPYEAR,FMBPCODE,FMBPDESC,FMBPPC1:       
                        FMBPPC2,FMBPPC3,FMBPPC4,FMBPPC5,FMBPPC6,FMBPPC7:        
                        FMBPPC8,FMBPPC9,FMBPPC10,FMBPPC11,FMBPPC12,FMBPPC13:    
                        FMBPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBP1                                                                         
          UPDATE    FMSBPFA1;FMBPLEDG,FMBPYEAR,FMBPCODE,FMBPDESC,FMBPPC1:       
                        FMBPPC2,FMBPPC3,FMBPPC4,FMBPPC5,FMBPPC6,FMBPPC7:        
                        FMBPPC8,FMBPPC9,FMBPPC10,FMBPPC11,FMBPPC12,FMBPPC13:    
                        FMBPSPAR                                                
          RETURN
.
WRFMBP1   RESET     KEY9                                                        
          WRITE     FMSBPFA1,KEY9;FMBPLEDG,FMBPYEAR,FMBPCODE,FMBPDESC,FMBPPC1:  
                        FMBPPC2,FMBPPC3,FMBPPC4,FMBPPC5,FMBPPC6,FMBPPC7:        
                        FMBPPC8,FMBPPC9,FMBPPC10,FMBPPC11,FMBPPC12,FMBPPC13:    
                        FMBPSPAR                                                
          RETURN
.
DEFMBP1   RESET     KEY9                                                        
          DELETE    FMSBPFA1,KEY9                                               
          RETURN
.
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAFMBP00  OPEN      CONTROLF,"controlf"
          MOVE      "   51",AUDTSECT
          MOVE      "49",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAFMBP99 IF NOT EQUAL
.
          PACK     FMBPAUDD,CCC,CYY,CMM,CDD
          REP       " 0",FMBPAUDD
          CLOCK     TIME,FMBPAUDT
          MOVE      PORT,FMBPAUDP
          LOAD      FMBPAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,FMBPAUDS
          MOVE      PASSCODE,FMBPAUDO
          PACK      KEY19,FMBPAUDD,FMBPAUDT,FMBPAUDP,FMBPAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWFMBP
WAFMBP99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAFMBP00
          MOVE      "   51",AUDTSECT
          MOVE      "49",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAFMBP99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADFMBP
DAFMBP99  RETURN
.
ASFMBP     RESET  KEY19
           READ   FMSAUDBP,KEY19;;
           RETURN
.
AUFMBP     UPDATE FMSAUDBP;FMBPAUDD,FMBPAUDT,FMBPAUDP:
                           FMBPAUDR,FMBPAUDS,FMBPAUDO:
                           FMBPLEDG,FMBPYEAR,FMBPCODE,FMBPDESC,FMBPPC1:       
                           FMBPPC2,FMBPPC3,FMBPPC4,FMBPPC5,FMBPPC6,FMBPPC7:
                           FMBPPC8,FMBPPC9,FMBPPC10,FMBPPC11,FMBPPC12,FMBPPC13:
                           FMBPSPAR
           RETURN
.
AKFMBP     MOVE   ZERO,OVRCD
           READKS FMSAUDBP;FMBPAUDD,FMBPAUDT,FMBPAUDP:
                           FMBPAUDR,FMBPAUDS,FMBPAUDO:
                           FMBPLEDG,FMBPYEAR,FMBPCODE,FMBPDESC,FMBPPC1:       
                           FMBPPC2,FMBPPC3,FMBPPC4,FMBPPC5,FMBPPC6,FMBPPC7:
                           FMBPPC8,FMBPPC9,FMBPPC10,FMBPPC11,FMBPPC12,FMBPPC13:
                           FMBPSPAR
           GOTO   OVERCOND IF OVER
           RETURN
.
AWFMBP     RESET  KEY19
           WRITE  FMSAUDBP,KEY19;FMBPAUDD,FMBPAUDT,FMBPAUDP:
                           FMBPAUDR,FMBPAUDS,FMBPAUDO:
                           FMBPLEDG,FMBPYEAR,FMBPCODE,FMBPDESC,FMBPPC1:       
                           FMBPPC2,FMBPPC3,FMBPPC4,FMBPPC5,FMBPPC6,FMBPPC7:
                           FMBPPC8,FMBPPC9,FMBPPC10,FMBPPC11,FMBPPC12,FMBPPC13:
                           FMBPSPAR
           RETURN
.
ADFMBP     RESET  KEY19
           DELETE FMSAUDBP,KEY19
           RETURN
