.
. SINKEXIO    
. --------
. Filename     : sinkexaf.dat
.
RSSIKE1   RESET     KEY15                                                       
          READ      SINKEXA1,KEY15;;                                            
          RETURN
.
RASIKE1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINKEXA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIKE1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINKEXA1,KEY15;SIKEKWD,SIKESPA                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIKE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINKEXA1;SIKEKWD,SIKESPA                                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIKE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINKEXA1;SIKEKWD,SIKESPA                                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIKE1                                                                         
          UPDATE    SINKEXA1;SIKEKWD,SIKESPA                                    
          RETURN
.
WRSIKE1   RESET     KEY15                                                       
          WRITE     SINKEXA1,KEY15;SIKEKWD,SIKESPA                              
          RETURN
.
DESIKE1   RESET     KEY15                                                       
          DELETE    SINKEXA1,KEY15                                              
          RETURN
.
