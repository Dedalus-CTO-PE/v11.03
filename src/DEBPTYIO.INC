.
. DEBPTYIO    
. --------
. Filename     : debptyaf.dat
.
RSDBPT1   RESET     KEY8                                                        
          READ      DEBPTYA1,KEY8;;                                             
          RETURN
.
RADBPT1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBPTYA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBPT1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBPTYA1,KEY8;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:      
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBPT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBPTYA1;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBPT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBPTYA1;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBPT1                                                                         
          UPDATE    DEBPTYA1;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBPT1   RESET     KEY8                                                        
          WRITE     DEBPTYA1,KEY8;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:      
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          RETURN
.
DEDBPT1   RESET     KEY8                                                        
          DELETE    DEBPTYA1,KEY8                                               
          RETURN
.
RLDBPT1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     DEBPTYA1,KEY8;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:      
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBPT1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBPTYA1;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBPT1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBPTYA1;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBPT1   RESET     KEY8                                                        
          UNLOCK    DEBPTYA1                                                    
          RETURN
.
RSDBPT2   RESET     KEY16                                                       
          READ      DEBPTYA2,KEY16;;                                            
          RETURN
.
RADBPT2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      DEBPTYA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBPT2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      DEBPTYA2,KEY16;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:     
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBPT2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBPTYA2;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBPT2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBPTYA2;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBPT2                                                                         
          UPDATE    DEBPTYA2;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBPT2   RESET     KEY16                                                       
          WRITE     DEBPTYA2,KEY16;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:     
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          RETURN
.
DEDBPT2   RESET     KEY16                                                       
          DELETE    DEBPTYA2,KEY16                                              
          RETURN
.
RLDBPT2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     DEBPTYA2,KEY16;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:     
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBPT2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBPTYA2;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBPT2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBPTYA2;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBPT2   RESET     KEY16                                                       
          UNLOCK    DEBPTYA2                                                    
          RETURN
.
RSDBPT3   RESET     KEY43                                                       
          READ      DEBPTYA3,KEY43;;                                            
          RETURN
.
RADBPT3   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBPTYA3,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBPT3   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBPTYA3,KEY43;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:     
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBPT3                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBPTYA3;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBPT3                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBPTYA3;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBPT3                                                                         
          UPDATE    DEBPTYA3;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBPT3   RESET     KEY43                                                       
          WRITE     DEBPTYA3,KEY43;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:     
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          RETURN
.
DEDBPT3   RESET     KEY43                                                       
          DELETE    DEBPTYA3,KEY43                                              
          RETURN
.
RLDBPT3   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READL     DEBPTYA3,KEY43;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:     
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBPT3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBPTYA3;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBPT3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBPTYA3;DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBPT3   RESET     KEY43                                                       
          UNLOCK    DEBPTYA3                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WADBPT00
          MOVE      "   81",AUDTSECT
          MOVE      " 13",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WADBPT99 IF NOT EQUAL
.
          PACK     DBPTAUDD,CCC,CYY,CMM,CDD
          REP       " 0",DBPTAUDD
          CLOCK     TIME,DBPTAUDT
          MOVE      PORT,DBPTAUDP
          LOAD      DBPTAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,DBPTAUDS
          MOVE      PASSCODE,DBPTAUDO
          PACK      KEY19,DBPTAUDD,DBPTAUDT,DBPTAUDP,DBPTAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWDBPT
WADBPT99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DADBPT00
          MOVE      "   81",AUDTSECT
          MOVE      " 13",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DADBPT99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADDBPT
DADBPT99  RETURN
ASDBPT    RESET     KEY19                                                       
          READ      DEBAUDPT,KEY19;;                                            
          RETURN
.
AKDBPT                                                                          
          MOVE      ZERO,OVRCD
          READKS    DEBAUDPT;DBPTAUDD,DBPTAUDT,DBPTAUDP,DBPTAUDR,DBPTAUDS:      
                    DBPTAUDO,DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
AUDBPT                                                                          
          UPDATE    DEBAUDPT;DBPTAUDD,DBPTAUDT,DBPTAUDP,DBPTAUDR,DBPTAUDS:      
                    DBPTAUDO,DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          RETURN
.
AWDBPT    RESET     KEY19                                                       
          WRITE     DEBAUDPT,KEY19;DBPTAUDD,DBPTAUDT,DBPTAUDP,DBPTAUDR,DBPTAUDS:
                    DBPTAUDO,DBPTPTY,DBPTDES,DBPTACT,DBPTDEP,DBPTUR1:           
                        DBPTUR2,DBPTUD1,DBPTUD2,DBPTUY1,DBPTUY2,DBPTUC1:        
                        DBPTUC2,DBPTSPA                                         
          RETURN
.
ADDBPT    RESET     KEY19                                                       
          DELETE    DEBAUDPT,KEY19;                                             
          RETURN
.
