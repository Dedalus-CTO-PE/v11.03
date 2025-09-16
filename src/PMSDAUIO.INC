.
. PMSDAUIO    
. --------
. Filename     : pmsdauaf.dat
.
RSPMDAU1  RESET     KEY27                                                       
          READ      PMSDAUA1,KEY27;;                                            
          RETURN
.
RAPMDAU1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDAUA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDAU1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDAUA1,KEY27;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:
                                   PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:
                                   PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:
                                   PMDESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDAU1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSDAUA1;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDAU1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSDAUA1;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDAU1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSDAUA1;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMDAU1  RESET     KEY27                                                       
          WRITE     PMSDAUA1,KEY27;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:
                                   PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:
                                   PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:
                                   PMDESPAR                                     
          RETURN
.
DEPMDAU1  RESET     KEY27                                                       
          DELETE    PMSDAUA1,KEY27                                              
          RETURN
.
RLPMDAU1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     PMSDAUA1,KEY27;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:
                                   PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:
                                   PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:
                                   PMDESPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMDAU1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSDAUA1;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMDAU1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSDAUA1;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMDAU1  RESET     KEY27                                                       
          UNLOCK    PMSDAUA1                                                    
          RETURN
.
RSPMDAU2  RESET     KEY27                                                       
          READ      PMSDAUA2,KEY27;;                                            
          RETURN
.
RAPMDAU2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDAUA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDAU2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDAUA2,KEY27;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:
                                   PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:
                                   PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:
                                   PMDESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDAU2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSDAUA2;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDAU2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSDAUA2;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDAU2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSDAUA2;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMDAU2  RESET     KEY27                                                       
          WRITE     PMSDAUA2,KEY27;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:
                                   PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:
                                   PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:
                                   PMDESPAR                                     
          RETURN
.
DEPMDAU2  RESET     KEY27                                                       
          DELETE    PMSDAUA2,KEY27                                              
          RETURN
.
RLPMDAU2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     PMSDAUA2,KEY27;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:
                                   PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:
                                   PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:
                                   PMDESPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMDAU2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSDAUA2;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMDAU2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSDAUA2;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMDAU2  RESET     KEY27                                                       
          UNLOCK    PMSDAUA2                                                    
          RETURN
.
RSPMDAU3  RESET     KEY27                                                       
          READ      PMSDAUA3,KEY27;;                                            
          RETURN
.
RAPMDAU3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDAUA3,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDAU3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDAUA3,KEY27;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:
                                   PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:
                                   PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:
                                   PMDESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDAU3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSDAUA3;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDAU3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSDAUA3;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDAU3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSDAUA3;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMDAU3  RESET     KEY27                                                       
          WRITE     PMSDAUA3,KEY27;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:
                                   PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:
                                   PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:
                                   PMDESPAR                                     
          RETURN
.
DEPMDAU3  RESET     KEY27                                                       
          DELETE    PMSDAUA3,KEY27                                              
          RETURN
.
RLPMDAU3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     PMSDAUA3,KEY27;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:
                                   PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:
                                   PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:
                                   PMDESPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMDAU3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSDAUA3;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMDAU3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSDAUA3;PMDEURNO,PMDECDAT,PMDECTIM,PMDERTYP,PMDEFL01:      
                             PMDEFL02,PMDEFL03,PMDEFL04,PMDEFL05,PMDEFL06:      
                             PMDEFL07,PMDEFL08,PMDEFL09,PMDEFL10,PMDECUID:      
                             PMDESPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMDAU3  RESET     KEY27                                                       
          UNLOCK    PMSDAUA3                                                    
          RETURN
.
