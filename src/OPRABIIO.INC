.
. OPRABIIO    
. --------
. Filename     : oprabiaf.dat
.
RSOPABI1  RESET     KEY15                                                       
          READ      OPRABIA1,KEY15;;                                            
          RETURN
.
RAOPABI1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OPRABIA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPABI1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OPRABIA1,KEY15;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:
                                   OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:
                                   OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:
                                   OPAIUDEL,OPAISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPABI1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRABIA1;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:      
                             OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:      
                             OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:      
                             OPAIUDEL,OPAISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPABI1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRABIA1;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:      
                             OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:      
                             OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:      
                             OPAIUDEL,OPAISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPABI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRABIA1;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:      
                             OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:      
                             OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:      
                             OPAIUDEL,OPAISPAR                                  
          RETURN
.
WROPABI1  RESET     KEY15                                                       
          WRITE     OPRABIA1,KEY15;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:
                                   OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:
                                   OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:
                                   OPAIUDEL,OPAISPAR                            
          RETURN
.
DEOPABI1  RESET     KEY15                                                       
          DELETE    OPRABIA1,KEY15                                              
          RETURN
.
RSOPABI2  RESET     KEY31                                                       
          READ      OPRABIA2,KEY31;;                                            
          RETURN
.
RAOPABI2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      OPRABIA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPABI2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      OPRABIA2,KEY31;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:
                                   OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:
                                   OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:
                                   OPAIUDEL,OPAISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPABI2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRABIA2;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:      
                             OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:      
                             OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:      
                             OPAIUDEL,OPAISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPABI2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRABIA2;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:      
                             OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:      
                             OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:      
                             OPAIUDEL,OPAISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPABI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRABIA2;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:      
                             OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:      
                             OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:      
                             OPAIUDEL,OPAISPAR                                  
          RETURN
.
WROPABI2  RESET     KEY31                                                       
          WRITE     OPRABIA2,KEY31;OPAIUNIQ,OPAIANTB,OPAICNTR,OPAIPANT,OPAITGIV:
                                   OPAITUNK,OPAIACNT,OPAICOMM,OPAICDAT,OPAICTIM:
                                   OPAICUID,OPAIUDAT,OPAIUTIM,OPAIUUID,OPAIDELT:
                                   OPAIUDEL,OPAISPAR                            
          RETURN
.
DEOPABI2  RESET     KEY31                                                       
          DELETE    OPRABIA2,KEY31                                              
          RETURN
.
