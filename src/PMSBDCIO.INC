.
. PMSBDCIO    
. --------
. Filename     : pmsbdcaf.dat
.
RSPMBDC1  RESET     KEY22                                                       
          READ      PMSBDCA1,KEY22;;                                            
          RETURN
.
RAPMBDC1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBDCA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBDC1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBDCA1,KEY22;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR: 
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBDC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBDCA1;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBDC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBDCA1;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBDC1                                                                        
          UPDATE    PMSBDCA1;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMBDC1  RESET     KEY22                                                       
          WRITE     PMSBDCA1,KEY22;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR: 
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          RETURN
.
DEPMBDC1  RESET     KEY22                                                       
          DELETE    PMSBDCA1,KEY22                                              
          RETURN
.
RLPMBDC1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     PMSBDCA1,KEY22;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR: 
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMBDC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSBDCA1;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMBDC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSBDCA1;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMBDC1  RESET     KEY22                                                       
          UNLOCK    PMSBDCA1                                                    
          RETURN
.
RSPMBDC2  RESET     KEY23                                                       
          READ      PMSBDCA2,KEY23;;                                            
          RETURN
.
RAPMBDC2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBDCA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBDC2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBDCA2,KEY23;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR: 
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBDC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBDCA2;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBDC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBDCA2;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBDC2                                                                        
          UPDATE    PMSBDCA2;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMBDC2  RESET     KEY23                                                       
          WRITE     PMSBDCA2,KEY23;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR: 
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          RETURN
.
DEPMBDC2  RESET     KEY23                                                       
          DELETE    PMSBDCA2,KEY23                                              
          RETURN
.
RLPMBDC2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     PMSBDCA2,KEY23;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR: 
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMBDC2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSBDCA2;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMBDC2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSBDCA2;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMBDC2  RESET     KEY23                                                       
          UNLOCK    PMSBDCA2                                                    
          RETURN
.
RSPMBDC3  RESET     KEY39                                                       
          READ      PMSBDCA3,KEY39;;                                            
          RETURN
.
RAPMBDC3  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBDCA3,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBDC3  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBDCA3,KEY39;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR: 
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBDC3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBDCA3;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBDC3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBDCA3;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBDC3                                                                        
          UPDATE    PMSBDCA3;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMBDC3  RESET     KEY39                                                       
          WRITE     PMSBDCA3,KEY39;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR: 
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          RETURN
.
DEPMBDC3  RESET     KEY39                                                       
          DELETE    PMSBDCA3,KEY39                                              
          RETURN
.
RLPMBDC3  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READL     PMSBDCA3,KEY39;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR: 
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMBDC3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSBDCA3;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMBDC3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSBDCA3;PMBCWARD,PMBCBED,PMBCFRDT,PMBCFRTM,PMBCFRPR:       
                        PMBCTODT,PMBCTOTM,PMBCTOPR,PMBCREAS,PMBCCRDT,PMBCCRTM:  
                        PMBCCRID,PMBCUPDT,PMBCUPTM,PMBCUPID,PMBCDOCT,PMBCFTRC:  
                        PMBCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMBDC3  RESET     KEY39                                                       
          UNLOCK    PMSBDCA3                                                    
          RETURN
.
