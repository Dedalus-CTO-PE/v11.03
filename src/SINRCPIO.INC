.
. SINRCPIO    
. --------
. Filename     : sinrcpaf.dat
.
RSSIRP1   RESET     KEY7                                                        
          READ      SINRCPA1,KEY7;;                                             
          RETURN
.
RASIRP1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINRCPA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRP1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINRCPA1,KEY7;SIRPPON,SIRPSPA                               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINRCPA1;SIRPPON,SIRPSPA                                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINRCPA1;SIRPPON,SIRPSPA                                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRP1                                                                         
          UPDATE    SINRCPA1;SIRPPON,SIRPSPA                                    
          RETURN
.
WRSIRP1   RESET     KEY7                                                        
          WRITE     SINRCPA1,KEY7;SIRPPON,SIRPSPA                               
          RETURN
.
DESIRP1   RESET     KEY7                                                        
          DELETE    SINRCPA1,KEY7                                               
          RETURN
.
