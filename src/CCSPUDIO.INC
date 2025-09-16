.
. CCSPUDIO    
. --------
. Filename     : ccspudaf.dat
.
RSCCPU1   RESET     KEY5                                                        
          READ      CCSPUDA1,KEY5;;                                             
          RETURN
.
RACCPU1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CCSPUDA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPU1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CCSPUDA1,KEY5;CCPUCLS,CCPUCOD,CCPUDES,CCPUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPU1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPUDA1;CCPUCLS,CCPUCOD,CCPUDES,CCPUSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPU1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPUDA1;CCPUCLS,CCPUCOD,CCPUDES,CCPUSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPU1                                                                         
          UPDATE    CCSPUDA1;CCPUCLS,CCPUCOD,CCPUDES,CCPUSPA                    
          RETURN
.
WRCCPU1   RESET     KEY5                                                        
          WRITE     CCSPUDA1,KEY5;CCPUCLS,CCPUCOD,CCPUDES,CCPUSPA               
          RETURN
.
DECCPU1   RESET     KEY5                                                        
          DELETE    CCSPUDA1,KEY5                                               
          RETURN
.
