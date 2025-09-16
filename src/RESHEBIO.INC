.
. RESHEBIO    
. --------
. Filename     : reshebaf.dat
.
RSREHB1   RESET     KEY20                                                       
          READ      RESHEBA1,KEY20;;                                            
          RETURN
.
RAREHB1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEBA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREHB1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEBA1,KEY20;REHBRDT,REHBRTM,REHBRUN,REHBLIN,REHBTXT:     
                        REHBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREHB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESHEBA1;REHBRDT,REHBRTM,REHBRUN,REHBLIN,REHBTXT:           
                        REHBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREHB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESHEBA1;REHBRDT,REHBRTM,REHBRUN,REHBLIN,REHBTXT:           
                        REHBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREHB1                                                                         
          UPDATE    RESHEBA1;REHBRDT,REHBRTM,REHBRUN,REHBLIN,REHBTXT:           
                        REHBSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREHB1   RESET     KEY20                                                       
          WRITE     RESHEBA1,KEY20;REHBRDT,REHBRTM,REHBRUN,REHBLIN,REHBTXT:     
                        REHBSPA                                                 
          RETURN
.
DEREHB1   RESET     KEY20                                                       
          DELETE    RESHEBA1,KEY20                                              
          RETURN
.
RLREHB1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     RESHEBA1,KEY20;REHBRDT,REHBRTM,REHBRUN,REHBLIN,REHBTXT:     
                        REHBSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREHB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESHEBA1;REHBRDT,REHBRTM,REHBRUN,REHBLIN,REHBTXT:           
                        REHBSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREHB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESHEBA1;REHBRDT,REHBRTM,REHBRUN,REHBLIN,REHBTXT:           
                        REHBSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREHB1   RESET     KEY20                                                       
          UNLOCK    RESHEBA1                                                    
          RETURN
.
