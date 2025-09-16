.
. CCSRASIO    
. --------
. Filename     : ccsrasaf.dat
.
RSCCRA1   RESET     KEY21                                                       
          READ      CCSRASA1,KEY21;;                                            
          RETURN
.
RACCRA1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCSRASA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCRA1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCSRASA1,KEY21;CCRAMID,CCRAHCD,CCRADPT,CCRAPCD,CCRAFDR:     
                        CCRAFID,CCRAVDR,CCRAVID,CCRAQTY,CCRASPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCRA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSRASA1;CCRAMID,CCRAHCD,CCRADPT,CCRAPCD,CCRAFDR:           
                        CCRAFID,CCRAVDR,CCRAVID,CCRAQTY,CCRASPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCRA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSRASA1;CCRAMID,CCRAHCD,CCRADPT,CCRAPCD,CCRAFDR:           
                        CCRAFID,CCRAVDR,CCRAVID,CCRAQTY,CCRASPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCRA1                                                                         
          UPDATE    CCSRASA1;CCRAMID,CCRAHCD,CCRADPT,CCRAPCD,CCRAFDR:           
                        CCRAFID,CCRAVDR,CCRAVID,CCRAQTY,CCRASPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCRA1   RESET     KEY21                                                       
          WRITE     CCSRASA1,KEY21;CCRAMID,CCRAHCD,CCRADPT,CCRAPCD,CCRAFDR:     
                        CCRAFID,CCRAVDR,CCRAVID,CCRAQTY,CCRASPA                 
          RETURN
.
DECCRA1   RESET     KEY21                                                       
          DELETE    CCSRASA1,KEY21                                              
          RETURN
.
RLCCRA1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     CCSRASA1,KEY21;CCRAMID,CCRAHCD,CCRADPT,CCRAPCD,CCRAFDR:     
                        CCRAFID,CCRAVDR,CCRAVID,CCRAQTY,CCRASPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCRA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSRASA1;CCRAMID,CCRAHCD,CCRADPT,CCRAPCD,CCRAFDR:           
                        CCRAFID,CCRAVDR,CCRAVID,CCRAQTY,CCRASPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCRA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSRASA1;CCRAMID,CCRAHCD,CCRADPT,CCRAPCD,CCRAFDR:           
                        CCRAFID,CCRAVDR,CCRAVID,CCRAQTY,CCRASPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCRA1   RESET     KEY21                                                       
          UNLOCK    CCSRASA1                                                    
          RETURN
.
