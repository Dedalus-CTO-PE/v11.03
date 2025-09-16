.
. ALLAEFIO    
. --------
. Filename     : allaefaf.dat
.
RSALAEF1  RESET     KEY8                                                        
          READ      ALLAEFA1,KEY8;;                                             
          RETURN
.
RAALAEF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLAEFA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALAEF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLAEFA1,KEY8;ALAEVISN,ALAEMRYN,ALAEETYN,ALAERSYN,ALAEOTYN: 
                        ALAEOTDS,ALAEPDRS,ALAESPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALAEF1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLAEFA1;ALAEVISN,ALAEMRYN,ALAEETYN,ALAERSYN,ALAEOTYN:      
                        ALAEOTDS,ALAEPDRS,ALAESPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALAEF1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLAEFA1;ALAEVISN,ALAEMRYN,ALAEETYN,ALAERSYN,ALAEOTYN:      
                        ALAEOTDS,ALAEPDRS,ALAESPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALAEF1                                                                        
          UPDATE    ALLAEFA1;ALAEVISN,ALAEMRYN,ALAEETYN,ALAERSYN,ALAEOTYN:      
                        ALAEOTDS,ALAEPDRS,ALAESPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALAEF1  RESET     KEY8                                                        
          WRITE     ALLAEFA1,KEY8;ALAEVISN,ALAEMRYN,ALAEETYN,ALAERSYN,ALAEOTYN: 
                        ALAEOTDS,ALAEPDRS,ALAESPAR                              
          RETURN
.
DEALAEF1  RESET     KEY8                                                        
          DELETE    ALLAEFA1,KEY8                                               
          RETURN
.
RLALAEF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     ALLAEFA1,KEY8;ALAEVISN,ALAEMRYN,ALAEETYN,ALAERSYN,ALAEOTYN: 
                        ALAEOTDS,ALAEPDRS,ALAESPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALAEF1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLAEFA1;ALAEVISN,ALAEMRYN,ALAEETYN,ALAERSYN,ALAEOTYN:      
                        ALAEOTDS,ALAEPDRS,ALAESPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALAEF1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLAEFA1;ALAEVISN,ALAEMRYN,ALAEETYN,ALAERSYN,ALAEOTYN:      
                        ALAEOTDS,ALAEPDRS,ALAESPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALAEF1  RESET     KEY8                                                        
          UNLOCK    ALLAEFA1                                                    
          RETURN
.
