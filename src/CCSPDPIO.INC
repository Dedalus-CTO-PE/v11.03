.
. CCSPDPIO    
. --------
. Filename     : ccspdpaf.dat
.
RSCCPD1   RESET     KEY18                                                       
          READ      CCSPDPA1,KEY18;;                                            
          RETURN
.
RACCPD1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPDPA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPD1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPDPA1,KEY18;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:     
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPDPA1;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPDPA1;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPD1                                                                         
          UPDATE    CCSPDPA1;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          RETURN
.
WRCCPD1   RESET     KEY18                                                       
          WRITE     CCSPDPA1,KEY18;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:     
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          RETURN
.
DECCPD1   RESET     KEY18                                                       
          DELETE    CCSPDPA1,KEY18                                              
          RETURN
.
RSCCPD2   RESET     KEY22                                                       
          READ      CCSPDPA2,KEY22;;                                            
          RETURN
.
RACCPD2   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPDPA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPD2   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPDPA2,KEY22;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:     
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPDPA2;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPDPA2;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPD2                                                                         
          UPDATE    CCSPDPA2;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          RETURN
.
WRCCPD2   RESET     KEY22                                                       
          WRITE     CCSPDPA2,KEY22;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:     
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          RETURN
.
DECCPD2   RESET     KEY22                                                       
          DELETE    CCSPDPA2,KEY22                                              
          RETURN
.
RSCCPD3   RESET     KEY18                                                       
          READ      CCSPDPA3,KEY18;;                                            
          RETURN
.
RACCPD3   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPDPA3,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPD3   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPDPA3,KEY18;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:     
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPD3                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPDPA3;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPD3                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPDPA3;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPD3                                                                         
          UPDATE    CCSPDPA3;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          RETURN
.
WRCCPD3   RESET     KEY18                                                       
          WRITE     CCSPDPA3,KEY18;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:     
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          RETURN
.
DECCPD3   RESET     KEY18                                                       
          DELETE    CCSPDPA3,KEY18                                              
          RETURN
.
RSCCPD4   RESET     KEY21                                                       
          READ      CCSPDPA4,KEY21;;                                            
          RETURN
.
RACCPD4   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPDPA4,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPD4   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPDPA4,KEY21;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:     
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPD4                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPDPA4;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPD4                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPDPA4;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPD4                                                                         
          UPDATE    CCSPDPA4;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:           
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          RETURN
.
WRCCPD4   RESET     KEY21                                                       
          WRITE     CCSPDPA4,KEY21;CCPDHCD,CCPDDPT,CCPDPCD,CCPDGCD,CCPDDES:     
                        CCPDSTC,CCPDRVI,CCPDSEQ,CCPDSUS,CCPDSPA                 
          RETURN
.
DECCPD4   RESET     KEY21                                                       
          DELETE    CCSPDPA4,KEY21                                              
          RETURN
.
