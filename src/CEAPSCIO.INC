.
. CEAPSCIO    
. --------
. Filename     : ceapscaf.dat
.
RSCEPS1   RESET     KEY7                                                        
          READ      CEAPSCA1,KEY7;;                                             
          RETURN
.
RACEPS1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPSCA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEPS1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPSCA1,KEY7;CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:     
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEPS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAPSCA1;CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:          
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEPS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAPSCA1;CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:          
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEPS1                                                                         
          UPDATE    CEAPSCA1;CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:          
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCEPS1   RESET     KEY7                                                        
          WRITE     CEAPSCA1,KEY7;CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:     
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          RETURN
.
DECEPS1   RESET     KEY7                                                        
          DELETE    CEAPSCA1,KEY7                                               
          RETURN
.
RLCEPS1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     CEAPSCA1,KEY7;CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:     
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCEPS1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CEAPSCA1;CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:          
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCEPS1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CEAPSCA1;CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:          
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCEPS1   RESET     KEY7                                                        
          UNLOCK    CEAPSCA1                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WACEPS00
          MOVE      "   64",AUDTSECT
          MOVE      " 39",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WACEPS99 IF NOT EQUAL
.
          PACK     CEPSAUDD,CCC,CYY,CMM,CDD
          REP       " 0",CEPSAUDD
          CLOCK     TIME,CEPSAUDT
          MOVE      PORT,CEPSAUDP
          LOAD      CEPSAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,CEPSAUDS
          MOVE      PASSCODE,CEPSAUDO
          PACK      KEY19,CEPSAUDD,CEPSAUDT,CEPSAUDP,CEPSAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWCEPS
WACEPS99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DACEPS00
          MOVE      "   64",AUDTSECT
          MOVE      " 39",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DACEPS99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADCEPS
DACEPS99  RETURN
ASCEPS    RESET     KEY19                                                       
          READ      CEAAUDPS,KEY19;;                                            
          RETURN
.
AKCEPS                                                                          
          MOVE      ZERO,OVRCD
          READKS    CEAAUDPS;CEPSAUDD,CEPSAUDT,CEPSAUDP,CEPSAUDR,CEPSAUDS:      
                    CEPSAUDO,CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:          
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUCEPS                                                                          
          UPDATE    CEAAUDPS;CEPSAUDD,CEPSAUDT,CEPSAUDP,CEPSAUDR,CEPSAUDS:      
                    CEPSAUDO,CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:          
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          RETURN
.
AWCEPS    RESET     KEY19                                                       
          WRITE     CEAAUDPS,KEY19;CEPSAUDD,CEPSAUDT,CEPSAUDP,CEPSAUDR,CEPSAUDS:
                    CEPSAUDO,CEPSPSC,CEPSDES,CEPSTYP,CEPSQTY,CEPSQDES:          
                        CEPSST1,CEPSST2,CEPSST3,CEPSST4,CEPSST5,CEPSUR1:        
                        CEPSUR2,CEPSUD1,CEPSUD2,CEPSACT,CEPSDRG,CEPSVSC:        
                        CEPSUY1,CEPSUY2,CEPSSPA                                 
          RETURN
.
ADCEPS    RESET     KEY19                                                       
          DELETE    CEAAUDPS,KEY19;                                             
          RETURN
.
