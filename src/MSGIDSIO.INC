.
. MSGIDSIO    
. --------
. Filename     : msgidsaf.dat
.
RSMSIDS1  RESET     KEY8                                                        
          READ      MSGIDSA1,KEY8;;                                             
          RETURN
.
RAMSIDS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MSGIDSA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMSIDS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MSGIDSA1,KEY8;MSIDMLID,MSIDSNAM,MSIDGNAM,MSIDSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMSIDS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MSGIDSA1;MSIDMLID,MSIDSNAM,MSIDGNAM,MSIDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMSIDS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MSGIDSA1;MSIDMLID,MSIDSNAM,MSIDGNAM,MSIDSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMSIDS1                                                                        
          UPDATE    MSGIDSA1;MSIDMLID,MSIDSNAM,MSIDGNAM,MSIDSPAR                
          RETURN
.
WRMSIDS1  RESET     KEY8                                                        
          WRITE     MSGIDSA1,KEY8;MSIDMLID,MSIDSNAM,MSIDGNAM,MSIDSPAR           
          RETURN
.
DEMSIDS1  RESET     KEY8                                                        
          DELETE    MSGIDSA1,KEY8                                               
          RETURN
.
