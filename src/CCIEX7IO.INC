.
. CCIEX7IO    
. --------
. Filename     : cciex7af.dat
.
RSCLEX71  RESET     KEY11                                                       
          READ      CCIEX7A1,KEY11;;                                            
          RETURN
.
RACLEX71  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      CCIEX7A1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCLEX71  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      CCIEX7A1,KEY11;CLEXSTAT,DCLEXTYP,DCLEXVIS,CLEXSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DCLEXTYP,CLEXTYPE                                           
          MOVE      DCLEXVIS,CLEXVISN                                           
          RETURN
.
RKCLEX71                                                                        
          MOVE      ZERO,OVRCD
          READKS    CCIEX7A1;CLEXSTAT,DCLEXTYP,DCLEXVIS,CLEXSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DCLEXTYP,CLEXTYPE                                           
          MOVE      DCLEXVIS,CLEXVISN                                           
          RETURN
.
RPCLEX71                                                                        
          MOVE      ZERO,OVRCD
          READKP    CCIEX7A1;CLEXSTAT,DCLEXTYP,DCLEXVIS,CLEXSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DCLEXTYP,CLEXTYPE                                           
          MOVE      DCLEXVIS,CLEXVISN                                           
          RETURN
.
UPCLEX71                                                                        
          MOVE      CLEXTYPE,DCLEXTYP                                           
          MOVE      CLEXVISN,DCLEXVIS                                           
          UPDATE    CCIEX7A1;CLEXSTAT,DCLEXTYP,DCLEXVIS,CLEXSPAR                
          RETURN
.
WRCLEX71  RESET     KEY11                                                       
          MOVE      CLEXTYPE,DCLEXTYP                                           
          MOVE      CLEXVISN,DCLEXVIS                                           
          WRITE     CCIEX7A1,KEY11;CLEXSTAT,DCLEXTYP,DCLEXVIS,CLEXSPAR          
          RETURN
.
DECLEX71  RESET     KEY11                                                       
          DELETE    CCIEX7A1,KEY11                                              
          RETURN
.
