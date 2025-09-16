.
. APSTRKIO    
. --------
. Filename     : apstrkaf.dat
.
RSAPTK1   RESET     KEY16                                                       
          READ      APSTRKA1,KEY16;;                                            
          RETURN
.
RAAPTK1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      APSTRKA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPTK1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      APSTRKA1,KEY16;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:  
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPTK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSTRKA1;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPTK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSTRKA1;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPTK1                                                                         
          UPDATE    APSTRKA1;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPTK1   RESET     KEY16                                                       
          WRITE     APSTRKA1,KEY16;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:  
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          RETURN
.
DEAPTK1   RESET     KEY16                                                       
          DELETE    APSTRKA1,KEY16                                              
          RETURN
.
RLAPTK1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     APSTRKA1,KEY16;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:  
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPTK1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSTRKA1;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPTK1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSTRKA1;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPTK1   RESET     KEY16                                                       
          UNLOCK    APSTRKA1                                                    
          RETURN
.
RSAPTK2   RESET     KEY16                                                       
          READ      APSTRKA2,KEY16;;                                            
          RETURN
.
RAAPTK2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      APSTRKA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPTK2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      APSTRKA2,KEY16;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:  
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPTK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSTRKA2;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPTK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSTRKA2;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPTK2                                                                         
          UPDATE    APSTRKA2;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPTK2   RESET     KEY16                                                       
          WRITE     APSTRKA2,KEY16;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:  
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          RETURN
.
DEAPTK2   RESET     KEY16                                                       
          DELETE    APSTRKA2,KEY16                                              
          RETURN
.
RLAPTK2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     APSTRKA2,KEY16;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:  
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPTK2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSTRKA2;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPTK2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSTRKA2;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPTK2   RESET     KEY16                                                       
          UNLOCK    APSTRKA2                                                    
          RETURN
.
RSAPTK3   RESET     KEY21                                                       
          READ      APSTRKA3,KEY21;;                                            
          RETURN
.
RAAPTK3   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      APSTRKA3,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPTK3   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      APSTRKA3,KEY21;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:  
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPTK3                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSTRKA3;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPTK3                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSTRKA3;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPTK3                                                                         
          UPDATE    APSTRKA3;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPTK3   RESET     KEY21                                                       
          WRITE     APSTRKA3,KEY21;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:  
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          RETURN
.
DEAPTK3   RESET     KEY21                                                       
          DELETE    APSTRKA3,KEY21                                              
          RETURN
.
RLAPTK3   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     APSTRKA3,KEY21;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:  
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPTK3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSTRKA3;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPTK3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSTRKA3;APTKCRD,APTKDTRC,APTKUNIQ,APTKDTIN,APTKREF:        
                        APTKORD,APTKLED,APTKCCEN,APTKDEPT,APTKAMT,APTKDTPR:     
                        APTKBAT,APTKUID,APTKDATE,APTKTIME,APTKUR1,APTKUR2:      
                        APTKUD1,APTKUD2,APTKUY1,APTKUY2,APTKSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPTK3   RESET     KEY21                                                       
          UNLOCK    APSTRKA3                                                    
          RETURN
.
