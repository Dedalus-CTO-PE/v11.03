.
. PMSOCMIO    
. --------
. Filename     : pmsocmaf.dat
.
RSPMOCM1  RESET     KEY14                                                       
          READ      PMSOCMA1,KEY14;;                                            
          RETURN
.
RAPMOCM1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSOCMA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMOCM1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSOCMA1,KEY14;PMOCVISN,PMOCOCNT,PMOCLCNT,PMOCLINE,PMOCSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMOCM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSOCMA1;PMOCVISN,PMOCOCNT,PMOCLCNT,PMOCLINE,PMOCSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMOCM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSOCMA1;PMOCVISN,PMOCOCNT,PMOCLCNT,PMOCLINE,PMOCSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMOCM1                                                                        
          UPDATE    PMSOCMA1;PMOCVISN,PMOCOCNT,PMOCLCNT,PMOCLINE,PMOCSPAR       
          RETURN
.
WRPMOCM1  RESET     KEY14                                                       
          WRITE     PMSOCMA1,KEY14;PMOCVISN,PMOCOCNT,PMOCLCNT,PMOCLINE,PMOCSPAR 
          RETURN
.
DEPMOCM1  RESET     KEY14                                                       
          DELETE    PMSOCMA1,KEY14                                              
          RETURN
.
