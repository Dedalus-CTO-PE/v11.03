.
. SINPOBIO    
. --------
. Filename     : sinpobaf.dat
.
RSSIPB1   RESET     KEY10                                                       
          READ      SINPOBA1,KEY10;;                                            
          RETURN
.
RASIPB1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOBA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPB1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOBA1,KEY10;SIPBPON,SIPBLIN,SIPBCOM,SIPBSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOBA1;SIPBPON,SIPBLIN,SIPBCOM,SIPBSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOBA1;SIPBPON,SIPBLIN,SIPBCOM,SIPBSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPB1                                                                         
          UPDATE    SINPOBA1;SIPBPON,SIPBLIN,SIPBCOM,SIPBSPA                    
          RETURN
.
WRSIPB1   RESET     KEY10                                                       
          WRITE     SINPOBA1,KEY10;SIPBPON,SIPBLIN,SIPBCOM,SIPBSPA              
          RETURN
.
DESIPB1   RESET     KEY10                                                       
          DELETE    SINPOBA1,KEY10                                              
          RETURN
.
