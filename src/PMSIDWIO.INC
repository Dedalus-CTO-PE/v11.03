.
. PMSIDWIO    
. --------
. Filename     : pmsidwaf.dat
.
RSPMIDW1  RESET     KEY41                                                       
          READ      PMSIDWA1,KEY41;;                                            
          RETURN
.
RAPMIDW1  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDWA1,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIDW1  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDWA1,KEY41;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:
                                   PMIWCTIM,PMIWCUID,PMIWSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIDW1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIDWA1;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIDW1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIDWA1;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIDW1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIDWA1;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIDW1  RESET     KEY41                                                       
          WRITE     PMSIDWA1,KEY41;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:
                                   PMIWCTIM,PMIWCUID,PMIWSPAR                   
          RETURN
.
DEPMIDW1  RESET     KEY41                                                       
          DELETE    PMSIDWA1,KEY41                                              
          RETURN
.
RLPMIDW1  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIDWA1,KEY41;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:
                                   PMIWCTIM,PMIWCUID,PMIWSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIDW1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIDWA1;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIDW1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIDWA1;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIDW1  RESET     KEY41                                                       
          UNLOCK    PMSIDWA1                                                    
          RETURN
.
RSPMIDW2  RESET     KEY41                                                       
          READ      PMSIDWA2,KEY41;;                                            
          RETURN
.
RAPMIDW2  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDWA2,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIDW2  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDWA2,KEY41;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:
                                   PMIWCTIM,PMIWCUID,PMIWSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIDW2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIDWA2;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIDW2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIDWA2;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIDW2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIDWA2;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIDW2  RESET     KEY41                                                       
          WRITE     PMSIDWA2,KEY41;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:
                                   PMIWCTIM,PMIWCUID,PMIWSPAR                   
          RETURN
.
DEPMIDW2  RESET     KEY41                                                       
          DELETE    PMSIDWA2,KEY41                                              
          RETURN
.
RLPMIDW2  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIDWA2,KEY41;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:
                                   PMIWCTIM,PMIWCUID,PMIWSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIDW2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIDWA2;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIDW2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIDWA2;PMIWCODE,PMIWTYPE,PMIWOLDV,PMIWNEWV,PMIWCDAT:      
                             PMIWCTIM,PMIWCUID,PMIWSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIDW2  RESET     KEY41                                                       
          UNLOCK    PMSIDWA2                                                    
          RETURN
.
