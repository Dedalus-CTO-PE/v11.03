.
. TMPDBPIO    
. --------
. Filename     : tmpdbpaf.dat
.
RSTMDBP1  RESET     KEY32                                                       
          READ      TMPDBPA1,KEY32;;                                            
          RETURN
.
RATMDBP1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDBPA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMDBP1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDBPA1,KEY32;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:
                                   TMDBSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMDBP1  MOVE      ZERO,OVRCD                                                  
          READKS    TMPDBPA1;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:      
                             TMDBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMDBP1  MOVE      ZERO,OVRCD                                                  
          READKP    TMPDBPA1;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:      
                             TMDBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMDBP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    TMPDBPA1;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:      
                             TMDBSPAR                                           
          RETURN
.
WRTMDBP1  RESET     KEY32                                                       
          WRITE     TMPDBPA1,KEY32;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:
                                   TMDBSPAR                                     
          RETURN
.
DETMDBP1  RESET     KEY32                                                       
          DELETE    TMPDBPA1,KEY32                                              
          RETURN
.
RSTMDBP2  RESET     KEY32                                                       
          READ      TMPDBPA2,KEY32;;                                            
          RETURN
.
RATMDBP2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDBPA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMDBP2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDBPA2,KEY32;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:
                                   TMDBSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMDBP2  MOVE      ZERO,OVRCD                                                  
          READKS    TMPDBPA2;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:      
                             TMDBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMDBP2  MOVE      ZERO,OVRCD                                                  
          READKP    TMPDBPA2;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:      
                             TMDBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMDBP2  MOVE      ZERO,OVRCD                                                  
          UPDATE    TMPDBPA2;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:      
                             TMDBSPAR                                           
          RETURN
.
WRTMDBP2  RESET     KEY32                                                       
          WRITE     TMPDBPA2,KEY32;TMDBRECN,TMDBTCNT,TMDBINVN,TMDBILNE,TMDBPAMT:
                                   TMDBSPAR                                     
          RETURN
.
DETMDBP2  RESET     KEY32                                                       
          DELETE    TMPDBPA2,KEY32                                              
          RETURN
.
