.
. PMSDSDIO    
. --------
. Filename     : pmsdsdaf.dat
.
RSPMDSD1  RESET     KEY28                                                       
          READ      PMSDSDA1,KEY28;;                                            
          RETURN
.
RAPMDSD1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDSDA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDSD1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDSDA1,KEY28;PMDDVISN,PMDDCPID,PMDDDATE,PMDDTIME,PMDDDEST:
                        PMDDFAXN,PMDDCUID,PMDDHCPC,PMDDHCPP,PMDDHCPT,PMDDFAXS:  
                        PMDDESNT,PMDDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDSD1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSDSDA1;PMDDVISN,PMDDCPID,PMDDDATE,PMDDTIME,PMDDDEST:      
                        PMDDFAXN,PMDDCUID,PMDDHCPC,PMDDHCPP,PMDDHCPT,PMDDFAXS:  
                        PMDDESNT,PMDDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDSD1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSDSDA1;PMDDVISN,PMDDCPID,PMDDDATE,PMDDTIME,PMDDDEST:      
                        PMDDFAXN,PMDDCUID,PMDDHCPC,PMDDHCPP,PMDDHCPT,PMDDFAXS:  
                        PMDDESNT,PMDDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDSD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSDSDA1;PMDDVISN,PMDDCPID,PMDDDATE,PMDDTIME,PMDDDEST:      
                        PMDDFAXN,PMDDCUID,PMDDHCPC,PMDDHCPP,PMDDHCPT,PMDDFAXS:  
                        PMDDESNT,PMDDSPAR                                       
          RETURN
.
WRPMDSD1  RESET     KEY28                                                       
          WRITE     PMSDSDA1,KEY28;PMDDVISN,PMDDCPID,PMDDDATE,PMDDTIME,PMDDDEST:
                        PMDDFAXN,PMDDCUID,PMDDHCPC,PMDDHCPP,PMDDHCPT,PMDDFAXS:  
                        PMDDESNT,PMDDSPAR                                       
          RETURN
.
DEPMDSD1  RESET     KEY28                                                       
          DELETE    PMSDSDA1,KEY28                                              
          RETURN
.
