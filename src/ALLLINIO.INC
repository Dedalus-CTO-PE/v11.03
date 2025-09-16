.
. ALLLINIO    
. --------
. Filename     : alllinaf.dat
.
RSALLIN1  RESET     KEY11                                                       
          READ      ALLLINA1,KEY11;;                                            
          RETURN
.
RAALLIN1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLINA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLIN1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLINA1,KEY11;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLIN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLLINA1;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLIN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLLINA1;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLIN1                                                                        
          UPDATE    ALLLINA1;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLIN1  RESET     KEY11                                                       
          WRITE     ALLLINA1,KEY11;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR 
          RETURN
.
DEALLIN1  RESET     KEY11                                                       
          DELETE    ALLLINA1,KEY11                                              
          RETURN
.
RLALLIN1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLINA1,KEY11;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLIN1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLLINA1;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLIN1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLLINA1;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLIN1  RESET     KEY11                                                       
          UNLOCK    ALLLINA1                                                    
          RETURN
.
RSALLIN2  RESET     KEY19                                                       
          READ      ALLLINA2,KEY19;;                                            
          RETURN
.
RAALLIN2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLINA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLIN2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLINA2,KEY19;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLIN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLLINA2;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLIN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLLINA2;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLIN2                                                                        
          UPDATE    ALLLINA2;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLIN2  RESET     KEY19                                                       
          WRITE     ALLLINA2,KEY19;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR 
          RETURN
.
DEALLIN2  RESET     KEY19                                                       
          DELETE    ALLLINA2,KEY19                                              
          RETURN
.
RLALLIN2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLINA2,KEY19;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLIN2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLLINA2;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLIN2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLLINA2;ALLIVISN,ALLILINK,ALLIURNO,ALLICOID,ALLISPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLIN2  RESET     KEY19                                                       
          UNLOCK    ALLLINA2                                                    
          RETURN
.
