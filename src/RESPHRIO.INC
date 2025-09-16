.
. RESPHRIO    
. --------
. Filename     : resphraf.dat
.
RSREPH1   RESET     KEY17                                                       
          READ      RESPHRA1,KEY17;;                                            
          RETURN
.
RAREPH1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RESPHRA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREPH1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RESPHRA1,KEY17;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:     
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREPH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESPHRA1;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREPH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESPHRA1;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREPH1                                                                         
          UPDATE    RESPHRA1;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREPH1   RESET     KEY17                                                       
          WRITE     RESPHRA1,KEY17;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:     
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          RETURN
.
DEREPH1   RESET     KEY17                                                       
          DELETE    RESPHRA1,KEY17                                              
          RETURN
.
RLREPH1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     RESPHRA1,KEY17;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:     
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREPH1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESPHRA1;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREPH1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESPHRA1;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREPH1   RESET     KEY17                                                       
          UNLOCK    RESPHRA1                                                    
          RETURN
.
RSREPH2   RESET     KEY46                                                       
          READ      RESPHRA2,KEY46;;                                            
          RETURN
.
RAREPH2   RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      RESPHRA2,KEY46;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREPH2   RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      RESPHRA2,KEY46;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:     
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREPH2                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESPHRA2;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREPH2                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESPHRA2;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREPH2                                                                         
          UPDATE    RESPHRA2;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREPH2   RESET     KEY46                                                       
          WRITE     RESPHRA2,KEY46;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:     
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          RETURN
.
DEREPH2   RESET     KEY46                                                       
          DELETE    RESPHRA2,KEY46                                              
          RETURN
.
RLREPH2   RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READL     RESPHRA2,KEY46;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:     
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREPH2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESPHRA2;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREPH2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESPHRA2;REPHRDT,REPHRTM,REPHRUN,REPHFUR,REPHPID:           
                        REPHVIS,REPHNAM,REPHLAB,REPHRRN,REPHCDT,REPHCTM:        
                        REPHNOR,REPHCON,REPHTCT,REPHCOM,REPHSTK                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREPH2   RESET     KEY46                                                       
          UNLOCK    RESPHRA2                                                    
          RETURN
.
