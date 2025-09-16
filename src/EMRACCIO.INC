.
. EMRACCIO    
. --------
. Filename     : emraccaf.dat
.
RSEMACC1  RESET     KEY48                                                       
          READ      EMRACCA1,KEY48;;                                            
          RETURN
.
RAEMACC1  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACCA1,KEY48;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMACC1  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACCA1,KEY48;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:
                                   EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:
                                   EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:
                                   EMACSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
RKEMACC1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRACCA1;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
RPEMACC1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRACCA1;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
UPEMACC1  MOVE      ZERO,OVRCD                                                  
          MOVE      EMACMINS,EMACDMIN
          UPDATE    EMRACCA1;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMACC1  RESET     KEY48                                                       
          MOVE      EMACMINS,EMACDMIN
          WRITE     EMRACCA1,KEY48;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:
                                   EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:
                                   EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:
                                   EMACSPAR                                     
          RETURN
.
DEEMACC1  RESET     KEY48                                                       
          DELETE    EMRACCA1,KEY48                                              
          RETURN
.
RLEMACC1  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READL     EMRACCA1,KEY48;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:
                                   EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:
                                   EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:
                                   EMACSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
KLEMACC1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRACCA1;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
PLEMACC1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRACCA1;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
UUEMACC1  RESET     KEY48                                                       
          UNLOCK    EMRACCA1                                                    
          RETURN
.
RSEMACC2  RESET     KEY48                                                       
          READ      EMRACCA2,KEY48;;                                            
          RETURN
.
RAEMACC2  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACCA2,KEY48;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMACC2  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACCA2,KEY48;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:
                                   EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:
                                   EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:
                                   EMACSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
RKEMACC2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRACCA2;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
RPEMACC2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRACCA2;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
UPEMACC2  MOVE      ZERO,OVRCD                                                  
          MOVE      EMACMINS,EMACDMIN
          UPDATE    EMRACCA2;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMACC2  RESET     KEY48                                                       
          MOVE      EMACMINS,EMACDMIN
          WRITE     EMRACCA2,KEY48;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:
                                   EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:
                                   EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:
                                   EMACSPAR                                     
          RETURN
.
DEEMACC2  RESET     KEY48                                                       
          DELETE    EMRACCA2,KEY48                                              
          RETURN
.
RLEMACC2  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READL     EMRACCA2,KEY48;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:
                                   EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:
                                   EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:
                                   EMACSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
KLEMACC2  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRACCA2;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
PLEMACC2  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRACCA2;EMACCODE,EMACFDAT,EMACTDAT,EMACCLAS,EMACDESC:      
                             EMACDMIN,EMACMAXS,EMACMXSI,EMACCDAT,EMACCTIM:      
                             EMACCUID,EMACUDAT,EMACUTIM,EMACUUID,EMACAFLG:      
                             EMACSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      EMACDMIN,EMACMINS
          RETURN
.
UUEMACC2  RESET     KEY48                                                       
          UNLOCK    EMRACCA2                                                    
          RETURN
.
