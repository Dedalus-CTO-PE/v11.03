.
. SCRWPDIO    
. --------
. Filename     : scrwpdaf.dat
.
RSSCWP1   RESET     KEY15                                                       
          READ      SCRWPDA1,KEY15;;                                            
          RETURN
.
RASCWP1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRWPDA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCWP1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRWPDA1,KEY15;SCWPPID,SCWPSID,SCWPITM,SCWPFLD,SCWPPAK:     
                        SCWPMLN,SCWPCON,SCWPRDS,SCWPRDO,SCWPSHM,SCWPDFR:        
                        SCWPDFC,SCWPNOR,SCWPLEN,SCWPBTY,SCWPBSQ,SCWPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCWP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRWPDA1;SCWPPID,SCWPSID,SCWPITM,SCWPFLD,SCWPPAK:           
                        SCWPMLN,SCWPCON,SCWPRDS,SCWPRDO,SCWPSHM,SCWPDFR:        
                        SCWPDFC,SCWPNOR,SCWPLEN,SCWPBTY,SCWPBSQ,SCWPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCWP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRWPDA1;SCWPPID,SCWPSID,SCWPITM,SCWPFLD,SCWPPAK:           
                        SCWPMLN,SCWPCON,SCWPRDS,SCWPRDO,SCWPSHM,SCWPDFR:        
                        SCWPDFC,SCWPNOR,SCWPLEN,SCWPBTY,SCWPBSQ,SCWPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCWP1                                                                         
          UPDATE    SCRWPDA1;SCWPPID,SCWPSID,SCWPITM,SCWPFLD,SCWPPAK:           
                        SCWPMLN,SCWPCON,SCWPRDS,SCWPRDO,SCWPSHM,SCWPDFR:        
                        SCWPDFC,SCWPNOR,SCWPLEN,SCWPBTY,SCWPBSQ,SCWPSPA         
          RETURN
.
WRSCWP1   RESET     KEY15                                                       
          WRITE     SCRWPDA1,KEY15;SCWPPID,SCWPSID,SCWPITM,SCWPFLD,SCWPPAK:     
                        SCWPMLN,SCWPCON,SCWPRDS,SCWPRDO,SCWPSHM,SCWPDFR:        
                        SCWPDFC,SCWPNOR,SCWPLEN,SCWPBTY,SCWPBSQ,SCWPSPA         
          RETURN
.
DESCWP1   RESET     KEY15                                                       
          DELETE    SCRWPDA1,KEY15                                              
          RETURN
.
