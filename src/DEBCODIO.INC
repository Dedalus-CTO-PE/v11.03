.
. DEBCODIO    
. --------
. Filename     : debcodaf.dat
.
RSDBCD1   RESET     KEY7                                                        
          READ      DEBCODA1,KEY7;;                                             
          RETURN
.
RADBCD1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      DEBCODA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBCD1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      DEBCODA1,KEY7;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBCD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBCODA1;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBCD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBCODA1;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBCD1                                                                         
          UPDATE    DEBCODA1;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBCD1   RESET     KEY7                                                        
          WRITE     DEBCODA1,KEY7;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA       
          RETURN
.
DEDBCD1   RESET     KEY7                                                        
          DELETE    DEBCODA1,KEY7                                               
          RETURN
.
RLDBCD1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     DEBCODA1,KEY7;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBCD1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBCODA1;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBCD1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBCODA1;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBCD1   RESET     KEY7                                                        
          UNLOCK    DEBCODA1                                                    
          RETURN
.
RSDBCD2   RESET     KEY7                                                        
          READ      DEBCODA2,KEY7;;                                             
          RETURN
.
RADBCD2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      DEBCODA2,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBCD2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      DEBCODA2,KEY7;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBCD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBCODA2;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBCD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBCODA2;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBCD2                                                                         
          UPDATE    DEBCODA2;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBCD2   RESET     KEY7                                                        
          WRITE     DEBCODA2,KEY7;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA       
          RETURN
.
DEDBCD2   RESET     KEY7                                                        
          DELETE    DEBCODA2,KEY7                                               
          RETURN
.
RLDBCD2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     DEBCODA2,KEY7;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBCD2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBCODA2;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBCD2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBCODA2;DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBCD2   RESET     KEY7                                                        
          UNLOCK    DEBCODA2                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WADBCD00
          MOVE      "   81",AUDTSECT
          MOVE      "  9",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WADBCD99 IF NOT EQUAL
.
          PACK     DBCDAUDD,CCC,CYY,CMM,CDD
          REP       " 0",DBCDAUDD
          CLOCK     TIME,DBCDAUDT
          MOVE      PORT,DBCDAUDP
          LOAD      DBCDAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,DBCDAUDS
          MOVE      PASSCODE,DBCDAUDO
          PACK      KEY19,DBCDAUDD,DBCDAUDT,DBCDAUDP,DBCDAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWDBCD
WADBCD99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DADBCD00
          MOVE      "   81",AUDTSECT
          MOVE      "  9",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DADBCD99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADDBCD
DADBCD99  RETURN
ASDBCD    RESET     KEY19                                                       
          READ      DEBAUDCD,KEY19;;                                            
          RETURN
.
AKDBCD                                                                          
          MOVE      ZERO,OVRCD
          READKS    DEBAUDCD;DBCDAUDD,DBCDAUDT,DBCDAUDP,DBCDAUDR,DBCDAUDS:      
                    DBCDAUDO,DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
AUDBCD                                                                          
          UPDATE    DEBAUDCD;DBCDAUDD,DBCDAUDT,DBCDAUDP,DBCDAUDR,DBCDAUDS:      
                    DBCDAUDO,DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          RETURN
.
AWDBCD    RESET     KEY19                                                       
          WRITE     DEBAUDCD,KEY19;DBCDAUDD,DBCDAUDT,DBCDAUDP,DBCDAUDR,DBCDAUDS:
                    DBCDAUDO,DBCDCAT,DBCDCOD,DBCDDES,DBCDACT,DBCDSPA            
          RETURN
.
ADDBCD    RESET     KEY19                                                       
          DELETE    DEBAUDCD,KEY19;                                             
          RETURN
.
