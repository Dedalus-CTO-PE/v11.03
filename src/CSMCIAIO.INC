.
. CSMCIAIO    
. --------
. Filename     : csmciaaf.dat
.
RSCSIA1   RESET     KEY7                                                        
          READ      CSMCIAA1,KEY7;;                                             
          RETURN
.
RACSIA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CSMCIAA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSIA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CSMCIAA1,KEY7;CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:      
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSIA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCIAA1;CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:           
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSIA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCIAA1;CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:           
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSIA1                                                                         
          UPDATE    CSMCIAA1;CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:           
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCSIA1   RESET     KEY7                                                        
          WRITE     CSMCIAA1,KEY7;CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:      
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          RETURN
.
DECSIA1   RESET     KEY7                                                        
          DELETE    CSMCIAA1,KEY7                                               
          RETURN
.
RLCSIA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     CSMCIAA1,KEY7;CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:      
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCSIA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CSMCIAA1;CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:           
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCSIA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CSMCIAA1;CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:           
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCSIA1   RESET     KEY7                                                        
          UNLOCK    CSMCIAA1                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WACSIA00
          MOVE      "   63",AUDTSECT
          MOVE      "159",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WACSIA99 IF NOT EQUAL
.
          PACK     CSIAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",CSIAAUDD
          CLOCK     TIME,CSIAAUDT
          MOVE      PORT,CSIAAUDP
          LOAD      CSIAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,CSIAAUDS
          MOVE      PASSCODE,CSIAAUDO
          PACK      KEY19,CSIAAUDD,CSIAAUDT,CSIAAUDP,CSIAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWCSIA
WACSIA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DACSIA00
          MOVE      "   63",AUDTSECT
          MOVE      "159",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DACSIA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADCSIA
DACSIA99  RETURN
ASCSIA    RESET     KEY19                                                       
          READ      CSMAUDIA,KEY19;;                                            
          RETURN
.
AKCSIA                                                                          
          MOVE      ZERO,OVRCD
          READKS    CSMAUDIA;CSIAAUDD,CSIAAUDT,CSIAAUDP,CSIAAUDR,CSIAAUDS:      
                    CSIAAUDO,CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:           
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
AUCSIA                                                                          
          UPDATE    CSMAUDIA;CSIAAUDD,CSIAAUDT,CSIAAUDP,CSIAAUDR,CSIAAUDS:      
                    CSIAAUDO,CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:           
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          RETURN
.
AWCSIA    RESET     KEY19                                                       
          WRITE     CSMAUDIA,KEY19;CSIAAUDD,CSIAAUDT,CSIAAUDP,CSIAAUDR,CSIAAUDS:
                    CSIAAUDO,CSIACAT,CSIADES,CSIASUB,CSIAISS,CSIASTI:           
                        CSIAAVC,CSIANAT,CSIAABC,CSIAPSC,CSIAREX,CSIANON:        
                        CSIASAB,CSIASUS,CSIADTC,CSIATMC,CSIAUSC,CSIAUR1:        
                        CSIAUR2,CSIAUD1,CSIAUD2,CSIAUY1,CSIAUY2,CSIASPA         
          RETURN
.
ADCSIA    RESET     KEY19                                                       
          DELETE    CSMAUDIA,KEY19;                                             
          RETURN
.
