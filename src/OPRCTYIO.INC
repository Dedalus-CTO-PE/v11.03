.
. OPRCTYIO    
. --------
. Filename     : oprctyaf.dat
.
RSOPCTY1  RESET     KEY13                                                       
          READ      OPRCTYA1,KEY13;;                                            
          RETURN
.
RAOPCTY1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCTYA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPCTY1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCTYA1,KEY13;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:
                                   OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:
                                   OPCYUTIM,OPCYUUID,OPCYSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPCTY1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRCTYA1;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:      
                             OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:      
                             OPCYUTIM,OPCYUUID,OPCYSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPCTY1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRCTYA1;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:      
                             OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:      
                             OPCYUTIM,OPCYUUID,OPCYSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPCTY1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRCTYA1;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:      
                             OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:      
                             OPCYUTIM,OPCYUUID,OPCYSPAR                         
          RETURN
.
WROPCTY1  RESET     KEY13                                                       
          WRITE     OPRCTYA1,KEY13;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:
                                   OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:
                                   OPCYUTIM,OPCYUUID,OPCYSPAR                   
          RETURN
.
DEOPCTY1  RESET     KEY13                                                       
          DELETE    OPRCTYA1,KEY13                                              
          RETURN
.
RSOPCTY2  RESET     KEY22                                                       
          READ      OPRCTYA2,KEY22;;                                            
          RETURN
.
RAOPCTY2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCTYA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPCTY2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCTYA2,KEY22;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:
                                   OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:
                                   OPCYUTIM,OPCYUUID,OPCYSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPCTY2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRCTYA2;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:      
                             OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:      
                             OPCYUTIM,OPCYUUID,OPCYSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPCTY2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRCTYA2;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:      
                             OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:      
                             OPCYUTIM,OPCYUUID,OPCYSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPCTY2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRCTYA2;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:      
                             OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:      
                             OPCYUTIM,OPCYUUID,OPCYSPAR                         
          RETURN
.
WROPCTY2  RESET     KEY22                                                       
          WRITE     OPRCTYA2,KEY22;OPCYUNIQ,OPCYTEAM,OPCYCNTR,OPCYITEM,OPCYCTYP:
                                   OPCYQUAN,OPCYCDAT,OPCYCTIM,OPCYCUID,OPCYUDAT:
                                   OPCYUTIM,OPCYUUID,OPCYSPAR                   
          RETURN
.
DEOPCTY2  RESET     KEY22                                                       
          DELETE    OPRCTYA2,KEY22                                              
          RETURN
.
