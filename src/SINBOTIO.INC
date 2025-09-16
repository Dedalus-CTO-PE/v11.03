. 03.03.1994  RKS   Created IO
. ----------------------------------------------------------------------
. SINBOTIO      ***  Shares the FD of SINBACFD  ***
. --------
. Filename     : tmpbac'port'.dat
.
RSTMBA1   RESET     KEY33                                                       
          READ      TMPBACA1,KEY33;; 
          RETURN
.
RATMBA1   RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBACA1,KEY33;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMBA1   RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      TMPBACA1,KEY33;SIBADAT,SIBACST,SIBACAT,SIBAREQ,SIBAWAR:     
                                   SIBAQTY,SIBASPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMBA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    TMPBACA1;SIBADAT,SIBACST,SIBACAT,SIBAREQ,SIBAWAR:           
                             SIBAQTY,SIBASPA
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMBA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    TMPBACA1;SIBADAT,SIBACST,SIBACAT,SIBAREQ,SIBAWAR:           
                             SIBAQTY,SIBASPA
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMBA1                                                                         
          UPDATE    TMPBACA1;SIBADAT,SIBACST,SIBACAT,SIBAREQ,SIBAWAR:           
                             SIBAQTY,SIBASPA
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRTMBA1   RESET     KEY33                                                       
          WRITE     TMPBACA1,KEY33;SIBADAT,SIBACST,SIBACAT,SIBAREQ,SIBAWAR:     
                                   SIBAQTY,SIBASPA
          RETURN
.
DETMBA1   RESET     KEY33                                                       
          DELETE    TMPBACA1,KEY33                                              
          RETURN
