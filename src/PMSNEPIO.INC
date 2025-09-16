.
. PMSNEPIO    
. --------
. Filename     : pmsnepaf.dat
.
RSPMNEP1  RESET     KEY58                                                       
          READ      PMSNEPA1,KEY58;;                                            
          RETURN
.
RAPMNEP1  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNEPA1,KEY58;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNEP1  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNEPA1,KEY58;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:
                                   PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:
                                   PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNEP1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNEPA1;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:      
                             PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:      
                             PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNEP1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNEPA1;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:      
                             PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:      
                             PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNEP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNEPA1;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:      
                             PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:      
                             PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR                
          RETURN
.
WRPMNEP1  RESET     KEY58                                                       
          WRITE     PMSNEPA1,KEY58;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:
                                   PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:
                                   PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR          
          RETURN
.
DEPMNEP1  RESET     KEY58                                                       
          DELETE    PMSNEPA1,KEY58                                              
          RETURN
.
RSPMNEP2  RESET     KEY58                                                       
          READ      PMSNEPA2,KEY58;;                                            
          RETURN
.
RAPMNEP2  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNEPA2,KEY58;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNEP2  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNEPA2,KEY58;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:
                                   PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:
                                   PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNEP2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNEPA2;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:      
                             PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:      
                             PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNEP2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNEPA2;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:      
                             PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:      
                             PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNEP2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNEPA2;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:      
                             PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:      
                             PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR                
          RETURN
.
WRPMNEP2  RESET     KEY58                                                       
          WRITE     PMSNEPA2,KEY58;PMNECNTR,PMNEVTYP,PMNECODE,PMNEINDC,PMNEINDV:
                                   PMNENEPP,PMNEACTV,PMNECUID,PMNECDAT,PMNECTIM:
                                   PMNEUUID,PMNEUDAT,PMNEUTIM,PMNESPAR          
          RETURN
.
DEPMNEP2  RESET     KEY58                                                       
          DELETE    PMSNEPA2,KEY58                                              
          RETURN
.
