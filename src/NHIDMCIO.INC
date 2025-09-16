.
. NHIDMCIO    
. --------
. Filename     : nhidmcaf.dat
.
RSNHDM1   RESET     KEY4                                                        
          READ      NHIDMCA1,KEY4;;                                             
          RETURN
.
RANHDM1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      NHIDMCA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHDM1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      NHIDMCA1,KEY4;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHDM1   MOVE      ZERO,OVRCD                                                  
          READKS    NHIDMCA1;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHDM1   MOVE      ZERO,OVRCD                                                  
          READKP    NHIDMCA1;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHDM1   MOVE      ZERO,OVRCD                                                  
          UPDATE    NHIDMCA1;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA                    
          RETURN
.
WRNHDM1   RESET     KEY4                                                        
          WRITE     NHIDMCA1,KEY4;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA               
          RETURN
.
DENHDM1   RESET     KEY4                                                        
          DELETE    NHIDMCA1,KEY4                                               
          RETURN
.
RSNHDM2   RESET     KEY54                                                       
          READ      NHIDMCA2,KEY54;;                                            
          RETURN
.
RANHDM2   RESET     KEY54                                                       
          MOVE      ZERO,OVRCD
          READ      NHIDMCA2,KEY54;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHDM2   RESET     KEY54                                                       
          MOVE      ZERO,OVRCD
          READ      NHIDMCA2,KEY54;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHDM2   MOVE      ZERO,OVRCD                                                  
          READKS    NHIDMCA2;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHDM2   MOVE      ZERO,OVRCD                                                  
          READKP    NHIDMCA2;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHDM2   MOVE      ZERO,OVRCD                                                  
          UPDATE    NHIDMCA2;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA                    
          RETURN
.
WRNHDM2   RESET     KEY54                                                       
          WRITE     NHIDMCA2,KEY54;NHDMDOM,NHDMDES,NHDMDHB,NHDMSPA              
          RETURN
.
DENHDM2   RESET     KEY54                                                       
          DELETE    NHIDMCA2,KEY54                                              
          RETURN
.
