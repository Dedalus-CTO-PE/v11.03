.
. RESLOGIO    
. --------
. Filename     : reslogaf.dat
.
RSRELG1   RESET     KEY10                                                       
          READ      RESLOGA1,KEY10;;                                            
          RETURN
.
RARELG1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      RESLOGA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRELG1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      RESLOGA1,KEY10;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:     
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRELG1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESLOGA1;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRELG1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESLOGA1;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRELG1                                                                         
          UPDATE    RESLOGA1;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRELG1   RESET     KEY10                                                       
          WRITE     RESLOGA1,KEY10;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:     
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          RETURN
.
DERELG1   RESET     KEY10                                                       
          DELETE    RESLOGA1,KEY10                                              
          RETURN
.
RLRELG1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     RESLOGA1,KEY10;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:     
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRELG1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESLOGA1;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRELG1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESLOGA1;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURELG1   RESET     KEY10                                                       
          UNLOCK    RESLOGA1                                                    
          RETURN
.
RSRELG2   RESET     KEY23                                                       
          READ      RESLOGA2,KEY23;;                                            
          RETURN
.
RARELG2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      RESLOGA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRELG2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      RESLOGA2,KEY23;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:     
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRELG2                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESLOGA2;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRELG2                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESLOGA2;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRELG2                                                                         
          UPDATE    RESLOGA2;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRELG2   RESET     KEY23                                                       
          WRITE     RESLOGA2,KEY23;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:     
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          RETURN
.
DERELG2   RESET     KEY23                                                       
          DELETE    RESLOGA2,KEY23                                              
          RETURN
.
RLRELG2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     RESLOGA2,KEY23;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:     
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRELG2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESLOGA2;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRELG2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESLOGA2;RELGUID,RELGDTE,RELGTME,RELGPCO,RELGRUN:           
                        RELGCMP,RELGEXP,RELGRPR,RELGERR,RELGINF,RELGMER:        
                        RELGMID,RELGSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURELG2   RESET     KEY23                                                       
          UNLOCK    RESLOGA2                                                    
          RETURN
.
