.
. PMSCAUIO    
. --------
. Filename     : pmscauaf.dat
.
RSPMCAU1  RESET     KEY24                                                       
          READ      PMSCAUA1,KEY24;;                                            
          RETURN
.
RAPMCAU1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCAUA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCAU1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCAUA1,KEY24;PMCAVISN,PMCADATE,PMCATIME,PMCAOCLM,PMCANCLM:
                        PMCAOATY,PMCANATY,PMCAOHFN,PMCANHFN,PMCAOHFT,PMCANHFT:  
                        PMCAWBID,PMCASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCAU1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCAUA1;PMCAVISN,PMCADATE,PMCATIME,PMCAOCLM,PMCANCLM:      
                        PMCAOATY,PMCANATY,PMCAOHFN,PMCANHFN,PMCAOHFT,PMCANHFT:  
                        PMCAWBID,PMCASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCAU1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCAUA1;PMCAVISN,PMCADATE,PMCATIME,PMCAOCLM,PMCANCLM:      
                        PMCAOATY,PMCANATY,PMCAOHFN,PMCANHFN,PMCAOHFT,PMCANHFT:  
                        PMCAWBID,PMCASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCAU1                                                                        
          UPDATE    PMSCAUA1;PMCAVISN,PMCADATE,PMCATIME,PMCAOCLM,PMCANCLM:      
                        PMCAOATY,PMCANATY,PMCAOHFN,PMCANHFN,PMCAOHFT,PMCANHFT:  
                        PMCAWBID,PMCASPAR                                       
          RETURN
.
WRPMCAU1  RESET     KEY24                                                       
          WRITE     PMSCAUA1,KEY24;PMCAVISN,PMCADATE,PMCATIME,PMCAOCLM,PMCANCLM:
                        PMCAOATY,PMCANATY,PMCAOHFN,PMCANHFN,PMCAOHFT,PMCANHFT:  
                        PMCAWBID,PMCASPAR                                       
          RETURN
.
DEPMCAU1  RESET     KEY24                                                       
          DELETE    PMSCAUA1,KEY24                                              
          RETURN
.
