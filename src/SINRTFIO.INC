.
. SINRTFIO    
. --------
. Filename     : sinrtfaf.dat
.
RSSIRT1   RESET     KEY5                                                        
          READ      SINRTFA1,KEY5;;                                             
          RETURN
.
RASIRT1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINRTFA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRT1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINRTFA1,KEY5;SIRTPOR,SIRTUNI,SIRTWAR,SIRTCAT,SIRTREQ:      
                        SIRTISS,SIRTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINRTFA1;SIRTPOR,SIRTUNI,SIRTWAR,SIRTCAT,SIRTREQ:           
                        SIRTISS,SIRTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINRTFA1;SIRTPOR,SIRTUNI,SIRTWAR,SIRTCAT,SIRTREQ:           
                        SIRTISS,SIRTSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRT1                                                                         
          UPDATE    SINRTFA1;SIRTPOR,SIRTUNI,SIRTWAR,SIRTCAT,SIRTREQ:           
                        SIRTISS,SIRTSPA                                         
          RETURN
.
WRSIRT1   RESET     KEY5                                                        
          WRITE     SINRTFA1,KEY5;SIRTPOR,SIRTUNI,SIRTWAR,SIRTCAT,SIRTREQ:      
                        SIRTISS,SIRTSPA                                         
          RETURN
.
DESIRT1   RESET     KEY5                                                        
          DELETE    SINRTFA1,KEY5                                               
          RETURN
.
