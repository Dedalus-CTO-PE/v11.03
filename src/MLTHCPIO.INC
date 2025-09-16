.
. MLTHCPIO    
. --------
. Filename     : mlthcpaf.dat
.
RSMLHCP1  RESET     KEY13                                                       
          READ      MLTHCPA1,KEY13;;                                            
          RETURN
.
RAMLHCP1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTHCPA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLHCP1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTHCPA1,KEY13;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLHCP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTHCPA1;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:      
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLHCP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTHCPA1;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:      
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLHCP1                                                                        
          UPDATE    MLTHCPA1;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:      
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          RETURN
.
WRMLHCP1  RESET     KEY13                                                       
          WRITE     MLTHCPA1,KEY13;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          RETURN
.
DEMLHCP1  RESET     KEY13                                                       
          DELETE    MLTHCPA1,KEY13                                              
          RETURN
.
RSMLHCP2  RESET     KEY13                                                       
          READ      MLTHCPA2,KEY13;;                                            
          RETURN
.
RAMLHCP2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTHCPA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLHCP2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTHCPA2,KEY13;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLHCP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTHCPA2;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:      
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLHCP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTHCPA2;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:      
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLHCP2                                                                        
          UPDATE    MLTHCPA2;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:      
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          RETURN
.
WRMLHCP2  RESET     KEY13                                                       
          WRITE     MLTHCPA2,KEY13;MLHCHOSP,MLHCHCPC,MLHCHSRI,MLHCPROV,MLHCSTAT:
                        MLHCOSLV,MLHCSDAT,MLHCEDAT,MLHCATYP,MLHCDFAC,MLHCDLAC:  
                        MLHCYACC,MLHCDEAC,MLHCACTV,MLHCSPAR                     
          RETURN
.
DEMLHCP2  RESET     KEY13                                                       
          DELETE    MLTHCPA2,KEY13                                              
          RETURN
.
