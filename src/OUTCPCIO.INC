.
. OUTCPCIO    
. --------
. Filename     : outcpcaf.dat
.
RSOTCPC1  RESET     KEY21                                                       
          READ      OUTCPCA1,KEY21;;                                            
          RETURN
.
RAOTCPC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCPCA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTCPC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCPCA1,KEY21;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTCPC1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTCPCA1;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTCPC1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTCPCA1;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTCPC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTCPCA1;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTCPC1  RESET     KEY21                                                       
          WRITE     OUTCPCA1,KEY21;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          RETURN
.
DEOTCPC1  RESET     KEY21                                                       
          DELETE    OUTCPCA1,KEY21                                              
          RETURN
.
RLOTCPC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     OUTCPCA1,KEY21;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTCPC1  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTCPCA1;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTCPC1  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTCPCA1;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTCPC1  RESET     KEY21                                                       
          UNLOCK    OUTCPCA1                                                    
          RETURN
.
RSOTCPC2  RESET     KEY91                                                       
          READ      OUTCPCA2,KEY91;;                                            
          RETURN
.
RAOTCPC2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCPCA2,KEY91;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTCPC2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCPCA2,KEY91;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTCPC2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTCPCA2;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTCPC2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTCPCA2;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTCPC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTCPCA2;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTCPC2  RESET     KEY91                                                       
          WRITE     OUTCPCA2,KEY91;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          RETURN
.
DEOTCPC2  RESET     KEY91                                                       
          DELETE    OUTCPCA2,KEY91                                              
          RETURN
.
RLOTCPC2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READL     OUTCPCA2,KEY91;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTCPC2  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTCPCA2;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTCPC2  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTCPCA2;OTCPSITE,OTCPCTYP,OTCPPROC,OTCPDESC,OTCPICDC:      
                        OTCPACTV,OTCPCDAT,OTCPCTIM,OTCPCUID,OTCPUDAT,OTCPUTIM:  
                        OTCPUUID,OTCPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTCPC2  RESET     KEY91                                                       
          UNLOCK    OUTCPCA2                                                    
          RETURN
.
