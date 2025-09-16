.
. PMSIHIIO    
. --------
. Filename     : pmsihiaf.dat
.
RSPMIHI1  RESET     KEY46                                                       
          READ      PMSIHIA1,KEY46;;                                            
          RETURN
.
RAPMIHI1  RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHIA1,KEY46;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHI1  RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHIA1,KEY46;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHI1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHIA1;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHI1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHIA1;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHIA1;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHI1  RESET     KEY46                                                       
          WRITE     PMSIHIA1,KEY46;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          RETURN
.
DEPMIHI1  RESET     KEY46                                                       
          DELETE    PMSIHIA1,KEY46                                              
          RETURN
.
RLPMIHI1  RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHIA1,KEY46;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHI1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHIA1;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHI1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHIA1;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHI1  RESET     KEY46                                                       
          UNLOCK    PMSIHIA1                                                    
          RETURN
.
RSPMIHI2  RESET     KEY62                                                       
          READ      PMSIHIA2,KEY62;;                                            
          RETURN
.
RAPMIHI2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHIA2,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHI2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHIA2,KEY62;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHI2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHIA2;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHI2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHIA2;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHIA2;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHI2  RESET     KEY62                                                       
          WRITE     PMSIHIA2,KEY62;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          RETURN
.
DEPMIHI2  RESET     KEY62                                                       
          DELETE    PMSIHIA2,KEY62                                              
          RETURN
.
RLPMIHI2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHIA2,KEY62;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHI2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHIA2;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHI2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHIA2;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHI2  RESET     KEY62                                                       
          UNLOCK    PMSIHIA2                                                    
          RETURN
.
RSPMIHI3  RESET     KEY62                                                       
          READ      PMSIHIA3,KEY62;;                                            
          RETURN
.
RAPMIHI3  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHIA3,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHI3  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHIA3,KEY62;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHI3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHIA3;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHI3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHIA3;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHI3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHIA3;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHI3  RESET     KEY62                                                       
          WRITE     PMSIHIA3,KEY62;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          RETURN
.
DEPMIHI3  RESET     KEY62                                                       
          DELETE    PMSIHIA3,KEY62                                              
          RETURN
.
RLPMIHI3  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHIA3,KEY62;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHI3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHIA3;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHI3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHIA3;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHI3  RESET     KEY62                                                       
          UNLOCK    PMSIHIA3                                                    
          RETURN
.
RSPMIHI4  RESET     KEY62                                                       
          READ      PMSIHIA4,KEY62;;                                            
          RETURN
.
RAPMIHI4  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHIA4,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHI4  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHIA4,KEY62;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHI4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHIA4;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHI4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHIA4;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHI4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHIA4;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHI4  RESET     KEY62                                                       
          WRITE     PMSIHIA4,KEY62;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          RETURN
.
DEPMIHI4  RESET     KEY62                                                       
          DELETE    PMSIHIA4,KEY62                                              
          RETURN
.
RLPMIHI4  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHIA4,KEY62;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:
                                   PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:
                                   PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:
                                   PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:
                                   PMIHEDAT,PMIHETIM,PMIHSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHI4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHIA4;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHI4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHIA4;PMIHURNO,PMIHIHIN,PMIHADAT,PMIHATIM,PMIHVSTA:      
                             PMIHASTA,PMIHSTAT,PMIHOURN,PMIHIHIS,PMIHHISV:      
                             PMIHMESI,PMIHBATI,PMIHINTB,PMIHNUID,PMIHCDAT:      
                             PMIHCTIM,PMIHCUID,PMIHUDAT,PMIHUTIM,PMIHUUID:      
                             PMIHEDAT,PMIHETIM,PMIHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHI4  RESET     KEY62                                                       
          UNLOCK    PMSIHIA4                                                    
          RETURN
.
