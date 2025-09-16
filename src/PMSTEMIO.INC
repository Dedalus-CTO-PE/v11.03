.
. PMSTEMIO    
. --------
. Filename     : pmstemaf.dat
.
RSPMTEM1  RESET     KEY5                                                        
          READ      PMSTEMA1,KEY5;;                                             
          RETURN
.
RAPMTEM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      PMSTEMA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMTEM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      PMSTEMA1,KEY5;PMTMTEAM,PMTMDESC,PMTMACTV,PMTMCUID,PMTMCDAT: 
                        PMTMCTIM,PMTMUUID,PMTMUDAT,PMTMUTIM,PMTMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMTEM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSTEMA1;PMTMTEAM,PMTMDESC,PMTMACTV,PMTMCUID,PMTMCDAT:      
                        PMTMCTIM,PMTMUUID,PMTMUDAT,PMTMUTIM,PMTMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMTEM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSTEMA1;PMTMTEAM,PMTMDESC,PMTMACTV,PMTMCUID,PMTMCDAT:      
                        PMTMCTIM,PMTMUUID,PMTMUDAT,PMTMUTIM,PMTMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMTEM1                                                                        
          UPDATE    PMSTEMA1;PMTMTEAM,PMTMDESC,PMTMACTV,PMTMCUID,PMTMCDAT:      
                        PMTMCTIM,PMTMUUID,PMTMUDAT,PMTMUTIM,PMTMSPAR            
          RETURN
.
WRPMTEM1  RESET     KEY5                                                        
          WRITE     PMSTEMA1,KEY5;PMTMTEAM,PMTMDESC,PMTMACTV,PMTMCUID,PMTMCDAT: 
                        PMTMCTIM,PMTMUUID,PMTMUDAT,PMTMUTIM,PMTMSPAR            
          RETURN
.
DEPMTEM1  RESET     KEY5                                                        
          DELETE    PMSTEMA1,KEY5                                               
          RETURN
.
