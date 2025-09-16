.
. PMSFPHIO    
. --------
. Filename     : pmsfphaf.dat
.
RSPMFPH1  RESET     KEY16                                                       
          READ      PMSFPHA1,KEY16;;                                            
          RETURN
.
RAPMFPH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFPHA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFPH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFPHA1,KEY16;PMFPHCPC,PMFPHFND,PMFPFPID,PMFPSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFPH1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSFPHA1;PMFPHCPC,PMFPHFND,PMFPFPID,PMFPSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFPH1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSFPHA1;PMFPHCPC,PMFPHFND,PMFPFPID,PMFPSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFPH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSFPHA1;PMFPHCPC,PMFPHFND,PMFPFPID,PMFPSPAR                
          RETURN
.
WRPMFPH1  RESET     KEY16                                                       
          WRITE     PMSFPHA1,KEY16;PMFPHCPC,PMFPHFND,PMFPFPID,PMFPSPAR          
          RETURN
.
DEPMFPH1  RESET     KEY16                                                       
          DELETE    PMSFPHA1,KEY16                                              
          RETURN
.
