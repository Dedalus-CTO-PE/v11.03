.
. SYSCOMIO    
. --------
. Filename     : syscomaf.dat
.
RSSYCM1   RESET     KEY10                                                       
          READ      SYSCOMA1,KEY10;;                                            
          RETURN
.
RASYCM1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SYSCOMA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYCM1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SYSCOMA1,KEY10;SYCMSYS,SYCMFIL,SYCMFLD,DSYCMUNI,SYCMTEXT:   
                        SYCMSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DSYCMUNI,SYCMUNIQ                                           
          RETURN
.
RKSYCM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SYSCOMA1;SYCMSYS,SYCMFIL,SYCMFLD,DSYCMUNI,SYCMTEXT:         
                        SYCMSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DSYCMUNI,SYCMUNIQ                                           
          RETURN
.
RPSYCM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SYSCOMA1;SYCMSYS,SYCMFIL,SYCMFLD,DSYCMUNI,SYCMTEXT:         
                        SYCMSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DSYCMUNI,SYCMUNIQ                                           
          RETURN
.
UPSYCM1                                                                         
          MOVE      SYCMUNIQ,DSYCMUNI                                           
          UPDATE    SYSCOMA1;SYCMSYS,SYCMFIL,SYCMFLD,DSYCMUNI,SYCMTEXT:         
                        SYCMSPAR                                                
          RETURN
.
WRSYCM1   RESET     KEY10                                                       
          MOVE      SYCMUNIQ,DSYCMUNI                                           
          WRITE     SYSCOMA1,KEY10;SYCMSYS,SYCMFIL,SYCMFLD,DSYCMUNI,SYCMTEXT:   
                        SYCMSPAR                                                
          RETURN
.
DESYCM1   RESET     KEY10                                                       
          DELETE    SYSCOMA1,KEY10                                              
          RETURN
.
