.
. DEBTERIO    
. --------
. Filename     : debteraf.dat
.
RSDBTE1   RESET     KEY3                                                        
          READ      DEBTERA1,KEY3;;                                             
          RETURN
.
RADBTE1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      DEBTERA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBTE1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      DEBTERA1,KEY3;DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:      
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBTE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBTERA1;DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:           
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBTE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBTERA1;DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:           
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBTE1                                                                         
          UPDATE    DEBTERA1;DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:           
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBTE1   RESET     KEY3                                                        
          WRITE     DEBTERA1,KEY3;DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:      
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          RETURN
.
DEDBTE1   RESET     KEY3                                                        
          DELETE    DEBTERA1,KEY3                                               
          RETURN
.
RLDBTE1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     DEBTERA1,KEY3;DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:      
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBTE1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBTERA1;DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:           
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBTE1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBTERA1;DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:           
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBTE1   RESET     KEY3                                                        
          UNLOCK    DEBTERA1                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WADBTE00
          MOVE      "   81",AUDTSECT
          MOVE      " 15",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WADBTE99 IF NOT EQUAL
.
          PACK     DBTEAUDD,CCC,CYY,CMM,CDD
          REP       " 0",DBTEAUDD
          CLOCK     TIME,DBTEAUDT
          MOVE      PORT,DBTEAUDP
          LOAD      DBTEAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,DBTEAUDS
          MOVE      PASSCODE,DBTEAUDO
          PACK      KEY19,DBTEAUDD,DBTEAUDT,DBTEAUDP,DBTEAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWDBTE
WADBTE99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DADBTE00
          MOVE      "   81",AUDTSECT
          MOVE      " 15",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DADBTE99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADDBTE
DADBTE99  RETURN
ASDBTE    RESET     KEY19                                                       
          READ      DEBAUDTE,KEY19;;                                            
          RETURN
.
AKDBTE                                                                          
          MOVE      ZERO,OVRCD
          READKS    DEBAUDTE;DBTEAUDD,DBTEAUDT,DBTEAUDP,DBTEAUDR,DBTEAUDS:      
                    DBTEAUDO,DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:           
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUDBTE                                                                          
          UPDATE    DEBAUDTE;DBTEAUDD,DBTEAUDT,DBTEAUDP,DBTEAUDR,DBTEAUDS:      
                    DBTEAUDO,DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:           
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          RETURN
.
AWDBTE    RESET     KEY19                                                       
          WRITE     DEBAUDTE,KEY19;DBTEAUDD,DBTEAUDT,DBTEAUDP,DBTEAUDR,DBTEAUDS:
                    DBTEAUDO,DBTETER,DBTEDES,DBTEACT,DBTEUR1,DBTEUR2:           
                        DBTEUD1,DBTEUD2,DBTEUY1,DBTEUY2,DBTEUC1,DBTEUC2:        
                        DBTESPA                                                 
          RETURN
.
ADDBTE    RESET     KEY19                                                       
          DELETE    DEBAUDTE,KEY19;                                             
          RETURN
.
