.
. RESLNKIO    
. --------
. Filename     : reslnkaf.dat
.
RSRELN1   RESET     KEY29                                                       
          READ      RESLNKA1,KEY29;;                                            
          RETURN
.
RARELN1   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      RESLNKA1,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRELN1   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      RESLNKA1,KEY29;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRELN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESLNKA1;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRELN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESLNKA1;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRELN1                                                                         
          UPDATE    RESLNKA1;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRELN1   RESET     KEY29                                                       
          WRITE     RESLNKA1,KEY29;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          RETURN
.
DERELN1   RESET     KEY29                                                       
          DELETE    RESLNKA1,KEY29                                              
          RETURN
.
RLRELN1   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     RESLNKA1,KEY29;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRELN1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESLNKA1;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRELN1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESLNKA1;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURELN1   RESET     KEY29                                                       
          UNLOCK    RESLNKA1                                                    
          RETURN
.
RSRELN2   RESET     KEY30                                                       
          READ      RESLNKA2,KEY30;;                                            
          RETURN
.
RARELN2   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      RESLNKA2,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRELN2   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      RESLNKA2,KEY30;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRELN2                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESLNKA2;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRELN2                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESLNKA2;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRELN2                                                                         
          UPDATE    RESLNKA2;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRELN2   RESET     KEY30                                                       
          WRITE     RESLNKA2,KEY30;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          RETURN
.
DERELN2   RESET     KEY30                                                       
          DELETE    RESLNKA2,KEY30                                              
          RETURN
.
RLRELN2   RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     RESLNKA2,KEY30;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRELN2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESLNKA2;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRELN2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESLNKA2;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURELN2   RESET     KEY30                                                       
          UNLOCK    RESLNKA2                                                    
          RETURN
.
RSRELN3   RESET     KEY29                                                       
          READ      RESLNKA3,KEY29;;                                            
          RETURN
.
RARELN3   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      RESLNKA3,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRELN3   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      RESLNKA3,KEY29;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRELN3                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESLNKA3;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRELN3                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESLNKA3;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRELN3                                                                         
          UPDATE    RESLNKA3;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRELN3   RESET     KEY29                                                       
          WRITE     RESLNKA3,KEY29;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          RETURN
.
DERELN3   RESET     KEY29                                                       
          DELETE    RESLNKA3,KEY29                                              
          RETURN
.
RLRELN3   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     RESLNKA3,KEY29;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRELN3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESLNKA3;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRELN3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESLNKA3;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURELN3   RESET     KEY29                                                       
          UNLOCK    RESLNKA3                                                    
          RETURN
.
RSRELN4   RESET     KEY45                                                       
          READ      RESLNKA4,KEY45;;                                            
          RETURN
.
RARELN4   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      RESLNKA4,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRELN4   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      RESLNKA4,KEY45;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRELN4                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESLNKA4;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRELN4                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESLNKA4;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRELN4                                                                         
          UPDATE    RESLNKA4;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRELN4   RESET     KEY45                                                       
          WRITE     RESLNKA4,KEY45;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          RETURN
.
DERELN4   RESET     KEY45                                                       
          DELETE    RESLNKA4,KEY45                                              
          RETURN
.
RLRELN4   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READL     RESLNKA4,KEY45;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:     
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRELN4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESLNKA4;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRELN4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESLNKA4;RELNLTY,RELNLKY,RELNRDT,RELNRTM,RELNRUN:           
                        RELNMSN,RELNSDT,RELNSTM,RELNSPC,RELNFUR,RELNPID:        
                        RELNUCS,RELNUSC,RELNDSS,RELNNOR,RELNRTY,RELNRST:        
                        RELNLAB,RELNSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURELN4   RESET     KEY45                                                       
          UNLOCK    RESLNKA4                                                    
          RETURN
.
