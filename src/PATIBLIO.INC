.
. PATIBLIO    
. --------
. Filename     : patiblaf.dat
.
RSPTIBL1  RESET     KEY19                                                       
          READ      PATIBLA1,KEY19;;                                            
          RETURN
.
RAPTIBL1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATIBLA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIBL1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATIBLA1,KEY19;PTIBADMN,PTIBINVN,PTIBBRCD,PTIBAMNT,PTIBGAMN:
                                   PTIBSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIBL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATIBLA1;PTIBADMN,PTIBINVN,PTIBBRCD,PTIBAMNT,PTIBGAMN:
                             PTIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIBL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATIBLA1;PTIBADMN,PTIBINVN,PTIBBRCD,PTIBAMNT,PTIBGAMN:
                             PTIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIBL1                                                                        
          UPDATE    PATIBLA1;PTIBADMN,PTIBINVN,PTIBBRCD,PTIBAMNT,PTIBGAMN:
                             PTIBSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTIBL1  RESET     KEY19                                                       
          WRITE     PATIBLA1,KEY19;PTIBADMN,PTIBINVN,PTIBBRCD,PTIBAMNT,PTIBGAMN:
                             PTIBSPAR 
          RETURN
.
DEPTIBL1  RESET     KEY19                                                       
          DELETE    PATIBLA1,KEY19                                              
          RETURN
.
RLPTIBL1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PATIBLA1,KEY19;PTIBADMN,PTIBINVN,PTIBBRCD,PTIBAMNT,PTIBGAMN:
                             PTIBSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTIBL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATIBLA1;PTIBADMN,PTIBINVN,PTIBBRCD,PTIBAMNT,PTIBGAMN:
                             PTIBSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTIBL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATIBLA1;PTIBADMN,PTIBINVN,PTIBBRCD,PTIBAMNT,PTIBGAMN:
                             PTIBSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTIBL1  RESET     KEY19                                                       
          UNLOCK    PATIBLA1                                                    
          RETURN
.
