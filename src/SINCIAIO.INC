.
. SINCIAIO    
. --------
. Filename     : sinciaaf.dat
.
RSSIIA1   RESET     KEY7                                                        
          READ      SINCIAA1,KEY7;;                                             
          RETURN
.
RASIIA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINCIAA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINCIAA1,KEY7;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:      
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIA1   MOVE      ZERO,OVRCD                                                  
          READKS    SINCIAA1;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIA1   MOVE      ZERO,OVRCD                                                  
          READKP    SINCIAA1;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIA1   MOVE      ZERO,OVRCD                                                  
          UPDATE    SINCIAA1;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIA1   RESET     KEY7                                                        
          WRITE     SINCIAA1,KEY7;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:      
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          RETURN
.
DESIIA1   RESET     KEY7                                                        
          DELETE    SINCIAA1,KEY7                                               
          RETURN
.
RLSIIA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     SINCIAA1,KEY7;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:      
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIA1   MOVE      ZERO,OVRCD                                                  
          READLKS   SINCIAA1;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIA1   MOVE      ZERO,OVRCD                                                  
          READLKP   SINCIAA1;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIA1   RESET     KEY7                                                        
          UNLOCK    SINCIAA1                                                    
          RETURN
.
RSSIIA2   RESET     KEY12                                                       
          READ      SINCIAA2,KEY12;;                                            
          RETURN
.
RASIIA2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIAA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIA2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIAA2,KEY12;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:     
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIA2   MOVE      ZERO,OVRCD                                                  
          READKS    SINCIAA2;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIA2   MOVE      ZERO,OVRCD                                                  
          READKP    SINCIAA2;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIA2   MOVE      ZERO,OVRCD                                                  
          UPDATE    SINCIAA2;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIA2   RESET     KEY12                                                       
          WRITE     SINCIAA2,KEY12;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:     
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          RETURN
.
DESIIA2   RESET     KEY12                                                       
          DELETE    SINCIAA2,KEY12                                              
          RETURN
.
RLSIIA2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     SINCIAA2,KEY12;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:     
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIA2   MOVE      ZERO,OVRCD                                                  
          READLKS   SINCIAA2;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIA2   MOVE      ZERO,OVRCD                                                  
          READLKP   SINCIAA2;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIA2   RESET     KEY12                                                       
          UNLOCK    SINCIAA2                                                    
          RETURN
.
RSSIIA3   RESET     KEY67                                                       
          READ      SINCIAA3,KEY67;;                                            
          RETURN
.
RASIIA3   RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIAA3,KEY67;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIA3   RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIAA3,KEY67;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:     
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIA3   MOVE      ZERO,OVRCD                                                  
          READKS    SINCIAA3;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIA3   MOVE      ZERO,OVRCD                                                  
          READKP    SINCIAA3;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIA3   MOVE      ZERO,OVRCD                                                  
          UPDATE    SINCIAA3;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIA3   RESET     KEY67                                                       
          WRITE     SINCIAA3,KEY67;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:     
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          RETURN
.
DESIIA3   RESET     KEY67                                                       
          DELETE    SINCIAA3,KEY67                                              
          RETURN
.
RLSIIA3   RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READL     SINCIAA3,KEY67;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:     
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIA3   MOVE      ZERO,OVRCD                                                  
          READLKS   SINCIAA3;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIA3   MOVE      ZERO,OVRCD                                                  
          READLKP   SINCIAA3;SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIA3   RESET     KEY67                                                       
          UNLOCK    SINCIAA3                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIIA00
          MOVE      "   24",AUDTSECT
          MOVE      "203",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIIA99 IF NOT EQUAL
.
          PACK     SIIAAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIIAAUDD
          CLOCK     TIME,SIIAAUDT
          MOVE      PORT,SIIAAUDP
          LOAD      SIIAAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIIAAUDS
          MOVE      PASSCODE,SIIAAUDO
          PACK      KEY19,SIIAAUDD,SIIAAUDT,SIIAAUDP,SIIAAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIIA
WASIIA99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIIA00
          MOVE      "   24",AUDTSECT
          MOVE      "203",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIIA99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIIA
DASIIA99  RETURN
ASSIIA    RESET     KEY19                                                       
          READ      SINAUDIA,KEY19;;                                            
          RETURN
.
AKSIIA                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDIA;SIIAAUDD,SIIAAUDT,SIIAAUDP,SIIAAUDR,SIIAAUDS:      
                    SIIAAUDO,SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIIA                                                                          
          UPDATE    SINAUDIA;SIIAAUDD,SIIAAUDT,SIIAAUDP,SIIAAUDR,SIIAAUDS:      
                    SIIAAUDO,SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          RETURN
.
AWSIIA    RESET     KEY19                                                       
          WRITE     SINAUDIA,KEY19;SIIAAUDD,SIIAAUDT,SIIAAUDP,SIIAAUDR,SIIAAUDS:
                    SIIAAUDO,SIIACAT,SIIADES,SIIASUB,SIIAISS,SIIASTI:           
                        SIIAAVC,SIIANAT,SIIAABC,SIIAPSC,SIIAREX,SIIANON:        
                        SIIASAB,SIIASUS,SIIADTC,SIIATMC,SIIAUSC,SIIAUR1:        
                        SIIAUR2,SIIAUD1,SIIAUD2,SIIAUC1,SIIAUC2,SIIAUY1:        
                        SIIAUY2,SIIAQIN,SIIADUN,SIIAGST,SIIAACTV,SIIASPA        
          RETURN
.
ADSIIA    RESET     KEY19                                                       
          DELETE    SINAUDIA,KEY19;                                             
          RETURN
.
