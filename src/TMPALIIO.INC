.
. TMPALIIO    
. --------
. Filename     : tmpaliaf.dat
.
RSTMAL1   RESET     KEY11                                                       
          READ      TMPALIA1,KEY11;;                                            
          RETURN
.
RATMAL1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      TMPALIA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMAL1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      TMPALIA1,KEY11;TMALURNO,TMALLIN,TMALSUR,TMALGV1,TMALGV2:    
                        TMALGV3,TMALPRE,TMALSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMAL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    TMPALIA1;TMALURNO,TMALLIN,TMALSUR,TMALGV1,TMALGV2:          
                        TMALGV3,TMALPRE,TMALSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMAL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    TMPALIA1;TMALURNO,TMALLIN,TMALSUR,TMALGV1,TMALGV2:          
                        TMALGV3,TMALPRE,TMALSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMAL1                                                                         
          UPDATE    TMPALIA1;TMALURNO,TMALLIN,TMALSUR,TMALGV1,TMALGV2:          
                        TMALGV3,TMALPRE,TMALSPA                                 
          RETURN
.
WRTMAL1   RESET     KEY11                                                       
          WRITE     TMPALIA1,KEY11;TMALURNO,TMALLIN,TMALSUR,TMALGV1,TMALGV2:    
                        TMALGV3,TMALPRE,TMALSPA                                 
          RETURN
.
DETMAL1   RESET     KEY11                                                       
          DELETE    TMPALIA1,KEY11                                              
          RETURN
.
