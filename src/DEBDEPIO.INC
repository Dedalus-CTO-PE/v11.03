.
. DEBDEPIO    
. --------
. Filename     : debdepaf.dat
.
RSDBDE1   RESET     KEY8                                                        
          READ      DEBDEPA1,KEY8;;                                             
          RETURN
.
RADBDE1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBDEPA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBDE1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBDEPA1,KEY8;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:      
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBDE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBDEPA1;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBDE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBDEPA1;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBDE1                                                                         
          UPDATE    DEBDEPA1;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBDE1   RESET     KEY8                                                        
          WRITE     DEBDEPA1,KEY8;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:      
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          RETURN
.
DEDBDE1   RESET     KEY8                                                        
          DELETE    DEBDEPA1,KEY8                                               
          RETURN
.
RLDBDE1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     DEBDEPA1,KEY8;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:      
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBDE1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBDEPA1;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBDE1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBDEPA1;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBDE1   RESET     KEY8                                                        
          UNLOCK    DEBDEPA1                                                    
          RETURN
.
RSDBDE2   RESET     KEY43                                                       
          READ      DEBDEPA2,KEY43;;                                            
          RETURN
.
RADBDE2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDEPA2,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBDE2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDEPA2,KEY43;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:     
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBDE2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBDEPA2;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBDE2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBDEPA2;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBDE2                                                                         
          UPDATE    DEBDEPA2;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBDE2   RESET     KEY43                                                       
          WRITE     DEBDEPA2,KEY43;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:     
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          RETURN
.
DEDBDE2   RESET     KEY43                                                       
          DELETE    DEBDEPA2,KEY43                                              
          RETURN
.
RLDBDE2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READL     DEBDEPA2,KEY43;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:     
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBDE2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBDEPA2;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBDE2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBDEPA2;DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBDE2   RESET     KEY43                                                       
          UNLOCK    DEBDEPA2                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WADBDE00
          MOVE      "   81",AUDTSECT
          MOVE      " 11",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WADBDE99 IF NOT EQUAL
.
          PACK     DBDEAUDD,CCC,CYY,CMM,CDD
          REP       " 0",DBDEAUDD
          CLOCK     TIME,DBDEAUDT
          MOVE      PORT,DBDEAUDP
          LOAD      DBDEAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,DBDEAUDS
          MOVE      PASSCODE,DBDEAUDO
          PACK      KEY19,DBDEAUDD,DBDEAUDT,DBDEAUDP,DBDEAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWDBDE
WADBDE99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DADBDE00
          MOVE      "   81",AUDTSECT
          MOVE      " 11",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DADBDE99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADDBDE
DADBDE99  RETURN
ASDBDE    RESET     KEY19                                                       
          READ      DEBAUDDE,KEY19;;                                            
          RETURN
.
AKDBDE                                                                          
          MOVE      ZERO,OVRCD
          READKS    DEBAUDDE;DBDEAUDD,DBDEAUDT,DBDEAUDP,DBDEAUDR,DBDEAUDS:      
                    DBDEAUDO,DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUDBDE                                                                          
          UPDATE    DEBAUDDE;DBDEAUDD,DBDEAUDT,DBDEAUDP,DBDEAUDR,DBDEAUDS:      
                    DBDEAUDO,DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          RETURN
.
AWDBDE    RESET     KEY19                                                       
          WRITE     DEBAUDDE,KEY19;DBDEAUDD,DBDEAUDT,DBDEAUDP,DBDEAUDR,DBDEAUDS:
                    DBDEAUDO,DBDEDEP,DBDEDES,DBDEACT,DBDEUR1,DBDEUR2:           
                        DBDEUD1,DBDEUD2,DBDEUY1,DBDEUY2,DBDEUC1,DBDEUC2:        
                        DBDESPA                                                 
          RETURN
.
ADDBDE    RESET     KEY19                                                       
          DELETE    DEBAUDDE,KEY19;                                             
          RETURN
.
