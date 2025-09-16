.
. CEASTRIO    
. --------
. Filename     : ceastraf.dat
.
RSCEST1   RESET     KEY9                                                        
          READ      CEASTRA1,KEY9;;                                             
          RETURN
.
RACEST1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CEASTRA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEST1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CEASTRA1,KEY9;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:      
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEST1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEASTRA1;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEST1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEASTRA1;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEST1                                                                         
          UPDATE    CEASTRA1;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCEST1   RESET     KEY9                                                        
          WRITE     CEASTRA1,KEY9;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:      
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          RETURN
.
DECEST1   RESET     KEY9                                                        
          DELETE    CEASTRA1,KEY9                                               
          RETURN
.
RLCEST1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     CEASTRA1,KEY9;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:      
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCEST1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CEASTRA1;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCEST1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CEASTRA1;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCEST1   RESET     KEY9                                                        
          UNLOCK    CEASTRA1                                                    
          RETURN
.
RSCEST2   RESET     KEY47                                                       
          READ      CEASTRA2,KEY47;;                                            
          RETURN
.
RACEST2   RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      CEASTRA2,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEST2   RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      CEASTRA2,KEY47;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEST2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEASTRA2;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEST2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEASTRA2;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEST2                                                                         
          UPDATE    CEASTRA2;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCEST2   RESET     KEY47                                                       
          WRITE     CEASTRA2,KEY47;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          RETURN
.
DECEST2   RESET     KEY47                                                       
          DELETE    CEASTRA2,KEY47                                              
          RETURN
.
RLCEST2   RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READL     CEASTRA2,KEY47;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCEST2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CEASTRA2;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCEST2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CEASTRA2;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCEST2   RESET     KEY47                                                       
          UNLOCK    CEASTRA2                                                    
          RETURN
.
RSCEST3   RESET     KEY27                                                       
          READ      CEASTRA3,KEY27;;                                            
          RETURN
.
RACEST3   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      CEASTRA3,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEST3   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      CEASTRA3,KEY27;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEST3                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEASTRA3;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEST3                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEASTRA3;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEST3                                                                         
          UPDATE    CEASTRA3;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCEST3   RESET     KEY27                                                       
          WRITE     CEASTRA3,KEY27;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          RETURN
.
DECEST3   RESET     KEY27                                                       
          DELETE    CEASTRA3,KEY27                                              
          RETURN
.
RLCEST3   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     CEASTRA3,KEY27;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCEST3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CEASTRA3;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCEST3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CEASTRA3;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCEST3   RESET     KEY27                                                       
          UNLOCK    CEASTRA3                                                    
          RETURN
.
RSCEST4   RESET     KEY20                                                       
          READ      CEASTRA4,KEY20;;                                            
          RETURN
.
RACEST4   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CEASTRA4,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEST4   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CEASTRA4,KEY20;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEST4                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEASTRA4;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEST4                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEASTRA4;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEST4                                                                         
          UPDATE    CEASTRA4;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCEST4   RESET     KEY20                                                       
          WRITE     CEASTRA4,KEY20;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          RETURN
.
DECEST4   RESET     KEY20                                                       
          DELETE    CEASTRA4,KEY20                                              
          RETURN
.
RLCEST4   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     CEASTRA4,KEY20;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCEST4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CEASTRA4;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCEST4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CEASTRA4;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCEST4   RESET     KEY20                                                       
          UNLOCK    CEASTRA4                                                    
          RETURN
.
RSCEST5   RESET     KEY24                                                       
          READ      CEASTRA5,KEY24;;                                            
          RETURN
.
RACEST5   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CEASTRA5,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEST5   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CEASTRA5,KEY24;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEST5                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEASTRA5;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEST5                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEASTRA5;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEST5                                                                         
          UPDATE    CEASTRA5;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCEST5   RESET     KEY24                                                       
          WRITE     CEASTRA5,KEY24;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          RETURN
.
DECEST5   RESET     KEY24                                                       
          DELETE    CEASTRA5,KEY24                                              
          RETURN
.
RLCEST5   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     CEASTRA5,KEY24;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:     
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCEST5                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CEASTRA5;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCEST5                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CEASTRA5;CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCEST5   RESET     KEY24                                                       
          UNLOCK    CEASTRA5                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WACEST00
          MOVE      "   64",AUDTSECT
          MOVE      " 40",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WACEST99 IF NOT EQUAL
.
          PACK     CESTAUDD,CCC,CYY,CMM,CDD
          REP       " 0",CESTAUDD
          CLOCK     TIME,CESTAUDT
          MOVE      PORT,CESTAUDP
          LOAD      CESTAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,CESTAUDS
          MOVE      PASSCODE,CESTAUDO
          PACK      KEY19,CESTAUDD,CESTAUDT,CESTAUDP,CESTAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWCEST
WACEST99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DACEST00
          MOVE      "   64",AUDTSECT
          MOVE      " 40",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DACEST99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADCEST
DACEST99  RETURN
ASCEST    RESET     KEY19                                                       
          READ      CEAAUDST,KEY19;;                                            
          RETURN
.
AKCEST                                                                          
          MOVE      ZERO,OVRCD
          READKS    CEAAUDST;CESTAUDD,CESTAUDT,CESTAUDP,CESTAUDR,CESTAUDS:      
                    CESTAUDO,CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
AUCEST                                                                          
          UPDATE    CEAAUDST;CESTAUDD,CESTAUDT,CESTAUDP,CESTAUDR,CESTAUDS:      
                    CESTAUDO,CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          RETURN
.
AWCEST    RESET     KEY19                                                       
          WRITE     CEAAUDST,KEY19;CESTAUDD,CESTAUDT,CESTAUDP,CESTAUDR,CESTAUDS:
                    CESTAUDO,CESTBAT,CESTLIN,CESTHCD,CESTEPS,CESTDAT:           
                        CESTTIM,CESTPSC,CESTSPC,CESTQTY,CESTST1,CESTST2:        
                        CESTST3,CESTST4,CESTST5,CESTFIL,CESTKEY,CESTUD1:        
                        CESTUD2,CESTUY1,CESTUY2,CESTITM,CESTDCD,CESTSPA         
          RETURN
.
ADCEST    RESET     KEY19                                                       
          DELETE    CEAAUDST,KEY19;                                             
          RETURN
.
