.
. RESLURIO    
. --------
. Filename     : resluraf.dat
.
RSRELU1   RESET     KEY25                                                       
          READ      RESLURA1,KEY25;;                                            
          RETURN
.
RARELU1   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RESLURA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRELU1   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RESLURA1,KEY25;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:     
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRELU1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESLURA1;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRELU1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESLURA1;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRELU1                                                                         
          UPDATE    RESLURA1;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRELU1   RESET     KEY25                                                       
          WRITE     RESLURA1,KEY25;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:     
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          RETURN
.
DERELU1   RESET     KEY25                                                       
          DELETE    RESLURA1,KEY25                                              
          RETURN
.
RLRELU1   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     RESLURA1,KEY25;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:     
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRELU1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESLURA1;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRELU1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESLURA1;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURELU1   RESET     KEY25                                                       
          UNLOCK    RESLURA1                                                    
          RETURN
.
RSRELU2   RESET     KEY25                                                       
          READ      RESLURA2,KEY25;;                                            
          RETURN
.
RARELU2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RESLURA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRELU2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RESLURA2,KEY25;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:     
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRELU2                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESLURA2;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRELU2                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESLURA2;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRELU2                                                                         
          UPDATE    RESLURA2;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRELU2   RESET     KEY25                                                       
          WRITE     RESLURA2,KEY25;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:     
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          RETURN
.
DERELU2   RESET     KEY25                                                       
          DELETE    RESLURA2,KEY25                                              
          RETURN
.
RLRELU2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     RESLURA2,KEY25;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:     
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRELU2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESLURA2;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRELU2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESLURA2;RELUURN,RELURDT,RELURTM,RELURUN,RELUMSN:           
                        RELUSDT,RELUSTM,RELUSPC,RELUFUR,RELUPID,RELUUCS:        
                        RELUUSC,RELUDSS,RELUNOR,RELURTY,RELURST,RELULAB:        
                        RELUSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURELU2   RESET     KEY25                                                       
          UNLOCK    RESLURA2                                                    
          RETURN
.
