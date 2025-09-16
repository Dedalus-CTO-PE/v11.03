.
. MLTOLNIO    
. --------
. Filename     : mltolnaf.dat
.
RSMLOLN1  RESET     KEY13                                                       
          READ      MLTOLNA1,KEY13;;                                            
          RETURN
.
RAMLOLN1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTOLNA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLOLN1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTOLNA1,KEY13;MLOLHOSP,MLOLWARD,MLOLLTYP,MLOLOMIN,MLOLGOVM:
                                   MLOLSMSM,MLOLREMN,MLOLSNPC,MLOLSTWS,MLOLWSMN:
                                   MLOLSNDS,MLOLSPMN,MLOLSNDM,MLOLMAMN,MLOLSNDO:
                                   MLOLOTMN,MLOLIACT,MLOLCDAT,MLOLCTIM,MLOLCUID:
                                   MLOLUDAT,MLOLUTIM,MLOLUUID,MLOLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLOLN1  MOVE      ZERO,OVRCD                                                  
          READKS    MLTOLNA1;MLOLHOSP,MLOLWARD,MLOLLTYP,MLOLOMIN,MLOLGOVM:      
                             MLOLSMSM,MLOLREMN,MLOLSNPC,MLOLSTWS,MLOLWSMN:      
                             MLOLSNDS,MLOLSPMN,MLOLSNDM,MLOLMAMN,MLOLSNDO:      
                             MLOLOTMN,MLOLIACT,MLOLCDAT,MLOLCTIM,MLOLCUID:      
                             MLOLUDAT,MLOLUTIM,MLOLUUID,MLOLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLOLN1  MOVE      ZERO,OVRCD                                                  
          READKP    MLTOLNA1;MLOLHOSP,MLOLWARD,MLOLLTYP,MLOLOMIN,MLOLGOVM:      
                             MLOLSMSM,MLOLREMN,MLOLSNPC,MLOLSTWS,MLOLWSMN:      
                             MLOLSNDS,MLOLSPMN,MLOLSNDM,MLOLMAMN,MLOLSNDO:      
                             MLOLOTMN,MLOLIACT,MLOLCDAT,MLOLCTIM,MLOLCUID:      
                             MLOLUDAT,MLOLUTIM,MLOLUUID,MLOLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLOLN1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MLTOLNA1;MLOLHOSP,MLOLWARD,MLOLLTYP,MLOLOMIN,MLOLGOVM:      
                             MLOLSMSM,MLOLREMN,MLOLSNPC,MLOLSTWS,MLOLWSMN:      
                             MLOLSNDS,MLOLSPMN,MLOLSNDM,MLOLMAMN,MLOLSNDO:      
                             MLOLOTMN,MLOLIACT,MLOLCDAT,MLOLCTIM,MLOLCUID:      
                             MLOLUDAT,MLOLUTIM,MLOLUUID,MLOLSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMLOLN1  RESET     KEY13                                                       
          WRITE     MLTOLNA1,KEY13;MLOLHOSP,MLOLWARD,MLOLLTYP,MLOLOMIN,MLOLGOVM:
                                   MLOLSMSM,MLOLREMN,MLOLSNPC,MLOLSTWS,MLOLWSMN:
                                   MLOLSNDS,MLOLSPMN,MLOLSNDM,MLOLMAMN,MLOLSNDO:
                                   MLOLOTMN,MLOLIACT,MLOLCDAT,MLOLCTIM,MLOLCUID:
                                   MLOLUDAT,MLOLUTIM,MLOLUUID,MLOLSPAR          
          RETURN
.
DEMLOLN1  RESET     KEY13                                                       
          DELETE    MLTOLNA1,KEY13                                              
          RETURN
.
RLMLOLN1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     MLTOLNA1,KEY13;MLOLHOSP,MLOLWARD,MLOLLTYP,MLOLOMIN,MLOLGOVM:
                                   MLOLSMSM,MLOLREMN,MLOLSNPC,MLOLSTWS,MLOLWSMN:
                                   MLOLSNDS,MLOLSPMN,MLOLSNDM,MLOLMAMN,MLOLSNDO:
                                   MLOLOTMN,MLOLIACT,MLOLCDAT,MLOLCTIM,MLOLCUID:
                                   MLOLUDAT,MLOLUTIM,MLOLUUID,MLOLSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMLOLN1  MOVE      ZERO,OVRCD                                                  
          READLKS   MLTOLNA1;MLOLHOSP,MLOLWARD,MLOLLTYP,MLOLOMIN,MLOLGOVM:      
                             MLOLSMSM,MLOLREMN,MLOLSNPC,MLOLSTWS,MLOLWSMN:      
                             MLOLSNDS,MLOLSPMN,MLOLSNDM,MLOLMAMN,MLOLSNDO:      
                             MLOLOTMN,MLOLIACT,MLOLCDAT,MLOLCTIM,MLOLCUID:      
                             MLOLUDAT,MLOLUTIM,MLOLUUID,MLOLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMLOLN1  MOVE      ZERO,OVRCD                                                  
          READLKP   MLTOLNA1;MLOLHOSP,MLOLWARD,MLOLLTYP,MLOLOMIN,MLOLGOVM:      
                             MLOLSMSM,MLOLREMN,MLOLSNPC,MLOLSTWS,MLOLWSMN:      
                             MLOLSNDS,MLOLSPMN,MLOLSNDM,MLOLMAMN,MLOLSNDO:      
                             MLOLOTMN,MLOLIACT,MLOLCDAT,MLOLCTIM,MLOLCUID:      
                             MLOLUDAT,MLOLUTIM,MLOLUUID,MLOLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMLOLN1  RESET     KEY13                                                       
          UNLOCK    MLTOLNA1                                                    
          RETURN
.
