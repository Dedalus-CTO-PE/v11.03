.
. OUTBCHIO    
. --------
. Filename     : outbchaf.dat
.
RSOTBCH1  RESET     KEY18                                                       
          READ      OUTBCHA1,KEY18;;                                            
          RETURN
.
RAOTBCH1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      OUTBCHA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTBCH1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      OUTBCHA1,KEY18;OTBCCLM,OTBCBRD,OTBCDEPT,DOTBCAGE,DOTBCNVI:  
                        OTBCDESC,DOTBCPPO,DOTBCBPO,OTBCNINV,OTBCITEM,OTBCSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTBCAGE,OTBCAGEG                                           
          MOVE      DOTBCNVI,OTBCNVIS                                           
          MOVE      DOTBCPPO,OTBCPPOR
          MOVE      DOTBCBPO,OTBCBPOR
          RETURN
.
RKOTBCH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTBCHA1;OTBCCLM,OTBCBRD,OTBCDEPT,DOTBCAGE,DOTBCNVI:        
                        OTBCDESC,DOTBCPPO,DOTBCBPO,OTBCNINV,OTBCITEM,OTBCSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTBCAGE,OTBCAGEG                                           
          MOVE      DOTBCNVI,OTBCNVIS                                           
          MOVE      DOTBCPPO,OTBCPPOR
          MOVE      DOTBCBPO,OTBCBPOR
          RETURN
.
RPOTBCH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTBCHA1;OTBCCLM,OTBCBRD,OTBCDEPT,DOTBCAGE,DOTBCNVI:        
                        OTBCDESC,DOTBCPPO,DOTBCBPO,OTBCNINV,OTBCITEM,OTBCSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTBCAGE,OTBCAGEG                                           
          MOVE      DOTBCNVI,OTBCNVIS                                           
          MOVE      DOTBCPPO,OTBCPPOR
          MOVE      DOTBCBPO,OTBCBPOR
          RETURN
.
UPOTBCH1                                                                        
          MOVE      OTBCPPOR,DOTBCPPO
          MOVE      OTBCBPOR,DOTBCBPO
          MOVE      OTBCAGEG,DOTBCAGE                                           
          MOVE      OTBCNVIS,DOTBCNVI                                           
          UPDATE    OUTBCHA1;OTBCCLM,OTBCBRD,OTBCDEPT,DOTBCAGE,DOTBCNVI:        
                        OTBCDESC,DOTBCPPO,DOTBCBPO,OTBCNINV,OTBCITEM,OTBCSPAR   
          RETURN
.
WROTBCH1  RESET     KEY18                                                       
          MOVE      OTBCPPOR,DOTBCPPO
          MOVE      OTBCBPOR,DOTBCBPO
          MOVE      OTBCAGEG,DOTBCAGE                                           
          MOVE      OTBCNVIS,DOTBCNVI                                           
          WRITE     OUTBCHA1,KEY18;OTBCCLM,OTBCBRD,OTBCDEPT,DOTBCAGE,DOTBCNVI:  
                        OTBCDESC,DOTBCPPO,DOTBCBPO,OTBCNINV,OTBCITEM,OTBCSPAR   
          RETURN
.
DEOTBCH1  RESET     KEY18                                                       
          DELETE    OUTBCHA1,KEY18                                              
          RETURN
.
ASOTBCH   RESET     KEY19                                                       
          READ      OUTAUDBC,KEY19;;                                            
          RETURN
.
AKOTBCH                                                                         
          MOVE      ZERO,OVRCD
          READKS    OUTAUDBC;OTBCAUDD,OTBCAUDT,OTBCAUDP,OTBCAUDR,OTBCAUDS:      
                    OTBCAUDO,OTBCCLM,OTBCBRD,OTBCDEPT,DOTBCAGE,DOTBCNVI:        
                        OTBCDESC,DOTBCPPO,DOTBCBPO,OTBCNINV,OTBCITEM,OTBCSPAR   
          MOVE      DOTBCAGE,OTBCAGEG                                           
          MOVE      DOTBCNVI,OTBCNVIS                                           
          MOVE      DOTBCPPO,OTBCPPOR
          MOVE      DOTBCBPO,OTBCBPOR
          GOTO      OVERCOND IF OVER
          RETURN
.
AUOTBCH                                                                         
          MOVE      OTBCAGEG,DOTBCAGE                                           
          MOVE      OTBCNVIS,DOTBCNVI                                           
          MOVE      OTBCPPOR,DOTBCPPO
          MOVE      OTBCBPOR,DOTBCBPO
          UPDATE    OUTAUDBC;OTBCAUDD,OTBCAUDT,OTBCAUDP,OTBCAUDR,OTBCAUDS:      
                    OTBCAUDO,OTBCCLM,OTBCBRD,OTBCDEPT,DOTBCAGE,DOTBCNVI:        
                        OTBCDESC,DOTBCPPO,DOTBCBPO,OTBCNINV,OTBCITEM,OTBCSPAR   
          RETURN
.
AWOTBCH   RESET     KEY19                                                       
          MOVE      OTBCPPOR,DOTBCPPO
          MOVE      OTBCBPOR,DOTBCBPO
          MOVE      OTBCAGEG,DOTBCAGE                                           
          MOVE      OTBCNVIS,DOTBCNVI                                           
          WRITE     OUTAUDBC,KEY19;OTBCAUDD,OTBCAUDT,OTBCAUDP,OTBCAUDR,OTBCAUDS:
                    OTBCAUDO,OTBCCLM,OTBCBRD,OTBCDEPT,DOTBCAGE,DOTBCNVI:        
                        OTBCDESC,DOTBCPPO,DOTBCBPO,OTBCNINV,OTBCITEM,OTBCSPAR   
          RETURN
.
ADOTBCH   RESET     KEY19                                                       
          DELETE    OUTAUDBC,KEY19;                                             
          RETURN
.
