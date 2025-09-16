.
. CSMCREIO    
. --------
. Filename     : csmcreaf.dat
.
RSCSCR1   RESET     KEY5                                                        
          READ      CSMCREA1,KEY5;;                                             
          RETURN
.
RACSCR1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CSMCREA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSCR1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CSMCREA1,KEY5;CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:      
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSCR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCREA1;CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:           
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSCR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCREA1;CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:           
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSCR1                                                                         
          UPDATE    CSMCREA1;CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:           
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCSCR1   RESET     KEY5                                                        
          WRITE     CSMCREA1,KEY5;CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:      
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          RETURN
.
DECSCR1   RESET     KEY5                                                        
          DELETE    CSMCREA1,KEY5                                               
          RETURN
.
RLCSCR1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     CSMCREA1,KEY5;CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:      
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCSCR1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CSMCREA1;CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:           
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCSCR1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CSMCREA1;CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:           
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCSCR1   RESET     KEY5                                                        
          UNLOCK    CSMCREA1                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WACSCR00
          MOVE      "   63",AUDTSECT
          MOVE      "158",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WACSCR99 IF NOT EQUAL
.
          PACK     CSCRAUDD,CCC,CYY,CMM,CDD
          REP       " 0",CSCRAUDD
          CLOCK     TIME,CSCRAUDT
          MOVE      PORT,CSCRAUDP
          LOAD      CSCRAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,CSCRAUDS
          MOVE      PASSCODE,CSCRAUDO
          PACK      KEY19,CSCRAUDD,CSCRAUDT,CSCRAUDP,CSCRAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWCSCR
WACSCR99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DACSCR00
          MOVE      "   63",AUDTSECT
          MOVE      "158",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DACSCR99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADCSCR
DACSCR99  RETURN
ASCSCR    RESET     KEY19                                                       
          READ      CSMAUDCR,KEY19;;                                            
          RETURN
.
AKCSCR                                                                          
          MOVE      ZERO,OVRCD
          READKS    CSMAUDCR;CSCRAUDD,CSCRAUDT,CSCRAUDP,CSCRAUDR,CSCRAUDS:      
                    CSCRAUDO,CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:           
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
AUCSCR                                                                          
          UPDATE    CSMAUDCR;CSCRAUDD,CSCRAUDT,CSCRAUDP,CSCRAUDR,CSCRAUDS:      
                    CSCRAUDO,CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:           
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          RETURN
.
AWCSCR    RESET     KEY19                                                       
          WRITE     CSMAUDCR,KEY19;CSCRAUDD,CSCRAUDT,CSCRAUDP,CSCRAUDR,CSCRAUDS:
                    CSCRAUDO,CSCRCRD,CSCRTYP,CSCRSKY,CSCRCN1,CSCRCN2:           
                        CSCRCA1,CSCRCA2,CSCRCA3,CSCRCPC,CSCRCTEL,CSCRCFAX:      
                        CSCRCON,CSCRHOR,CSCRHIN,CSCRHCR,CSCRHPY,CSCRUR1:        
                        CSCRUR2,CSCRUD1,CSCRUD2,CSCRUY1,CSCRUY2,CSCRSPA         
          RETURN
.
ADCSCR    RESET     KEY19                                                       
          DELETE    CSMAUDCR,KEY19;                                             
          RETURN
.
