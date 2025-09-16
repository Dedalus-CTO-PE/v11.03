.
. RESCLNIO    
. --------
. Filename     : resclnaf.dat
.
RSRECL1   RESET     KEY20                                                       
          READ      RESCLNA1,KEY20;;                                            
          RETURN
.
RARECL1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RESCLNA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRECL1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RESCLNA1,KEY20;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:     
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRECL1   MOVE      ZERO,OVRCD                                                  
          READKS    RESCLNA1;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRECL1   MOVE      ZERO,OVRCD                                                  
          READKP    RESCLNA1;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRECL1   UPDATE    RESCLNA1;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRECL1   RESET     KEY20                                                       
          WRITE     RESCLNA1,KEY20;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:     
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          RETURN
.
DERECL1   RESET     KEY20                                                       
          DELETE    RESCLNA1,KEY20                                              
          RETURN
.
RLRECL1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     RESCLNA1,KEY20;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:     
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRECL1   MOVE      ZERO,OVRCD                                                  
          READLKS   RESCLNA1;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRECL1   MOVE      ZERO,OVRCD                                                  
          READLKP   RESCLNA1;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURECL1   RESET     KEY20                                                       
          UNLOCK    RESCLNA1                                                    
          RETURN
.
RSRECL2   RESET     KEY28                                                       
          READ      RESCLNA2,KEY28;;                                            
          RETURN
.
RARECL2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      RESCLNA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRECL2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      RESCLNA2,KEY28;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:     
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRECL2   MOVE      ZERO,OVRCD                                                  
          READKS    RESCLNA2;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRECL2   MOVE      ZERO,OVRCD                                                  
          READKP    RESCLNA2;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRECL2   UPDATE    RESCLNA2;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRECL2   RESET     KEY28                                                       
          WRITE     RESCLNA2,KEY28;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:     
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          RETURN
.
DERECL2   RESET     KEY28                                                       
          DELETE    RESCLNA2,KEY28                                              
          RETURN
.
RLRECL2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     RESCLNA2,KEY28;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:     
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRECL2   MOVE      ZERO,OVRCD                                                  
          READLKS   RESCLNA2;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRECL2   MOVE      ZERO,OVRCD                                                  
          READLKP   RESCLNA2;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURECL2   RESET     KEY28                                                       
          UNLOCK    RESCLNA2                                                    
          RETURN
.
RSRECL3   RESET     KEY40                                                       
          READ      RESCLNA3,KEY40;;                                            
          RETURN
.
RARECL3   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      RESCLNA3,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRECL3   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      RESCLNA3,KEY40;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:     
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRECL3   MOVE      ZERO,OVRCD                                                  
          READKS    RESCLNA3;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRECL3   MOVE      ZERO,OVRCD                                                  
          READKP    RESCLNA3;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRECL3   UPDATE    RESCLNA3;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRECL3   RESET     KEY40                                                       
          WRITE     RESCLNA3,KEY40;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:     
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          RETURN
.
DERECL3   RESET     KEY40                                                       
          DELETE    RESCLNA3,KEY40                                              
          RETURN
.
RLRECL3   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READL     RESCLNA3,KEY40;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:     
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRECL3   MOVE      ZERO,OVRCD                                                  
          READLKS   RESCLNA3;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRECL3   MOVE      ZERO,OVRCD                                                  
          READLKP   RESCLNA3;RECLRDT,RECLRTM,RECLRUN,RECLLNO,RECLURN:           
                        RECLVIS,RECLCID,RECLDEL,RECLSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURECL3   RESET     KEY40                                                       
          UNLOCK    RESCLNA3                                                    
          RETURN
.
