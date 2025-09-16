.
. AAEBCHIO    
. --------
. Filename     : aaebchaf.dat
.
RSAEBCH1  RESET     KEY15                                                       
          READ      AAEBCHA1,KEY15;;                                            
          RETURN
.
RAAEBCH1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      AAEBCHA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAEBCH1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      AAEBCHA1,KEY15;AEBCCLM,AEBCBRD,DAEBCAGE,DAEBCNVI,AEBCDESC:  
                        AEBCPTPO,AEBCBDPO,AEBCNINV,AEBCITEM,AEBCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DAEBCAGE,AEBCAGEG                                           
          MOVE      DAEBCNVI,AEBCNVIS                                           
          MOVE      AEBCPTPO,AEBCPPOR                                           
          MOVE      AEBCBDPO,AEBCBPOR                                           
          RETURN
.
RKAEBCH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    AAEBCHA1;AEBCCLM,AEBCBRD,DAEBCAGE,DAEBCNVI,AEBCDESC:        
                        AEBCPTPO,AEBCBDPO,AEBCNINV,AEBCITEM,AEBCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DAEBCAGE,AEBCAGEG                                           
          MOVE      DAEBCNVI,AEBCNVIS                                           
          MOVE      AEBCPTPO,AEBCPPOR                                           
          MOVE      AEBCBDPO,AEBCBPOR                                           
          RETURN
.
RPAEBCH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    AAEBCHA1;AEBCCLM,AEBCBRD,DAEBCAGE,DAEBCNVI,AEBCDESC:        
                        AEBCPTPO,AEBCBDPO,AEBCNINV,AEBCITEM,AEBCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DAEBCAGE,AEBCAGEG                                           
          MOVE      DAEBCNVI,AEBCNVIS                                           
          MOVE      AEBCPTPO,AEBCPPOR                                           
          MOVE      AEBCBDPO,AEBCBPOR                                           
          RETURN
.
UPAEBCH1                                                                        
          MOVE      AEBCPPOR,AEBCPTPO                                           
          MOVE      AEBCBPOR,AEBCBDPO                                           
          MOVE      AEBCAGEG,DAEBCAGE                                           
          MOVE      AEBCNVIS,DAEBCNVI                                           
          UPDATE    AAEBCHA1;AEBCCLM,AEBCBRD,DAEBCAGE,DAEBCNVI,AEBCDESC:        
                        AEBCPTPO,AEBCBDPO,AEBCNINV,AEBCITEM,AEBCSPAR            
          RETURN
.
WRAEBCH1  RESET     KEY15                                                       
          MOVE      AEBCAGEG,DAEBCAGE                                           
          MOVE      AEBCNVIS,DAEBCNVI                                           
          MOVE      AEBCPPOR,AEBCPTPO                                           
          MOVE      AEBCBPOR,AEBCBDPO                                           
          WRITE     AAEBCHA1,KEY15;AEBCCLM,AEBCBRD,DAEBCAGE,DAEBCNVI,AEBCDESC:  
                        AEBCPTPO,AEBCBDPO,AEBCNINV,AEBCITEM,AEBCSPAR            
          RETURN
.
DEAEBCH1  RESET     KEY15                                                       
          DELETE    AAEBCHA1,KEY15                                              
          RETURN
.
ASAEBCH   RESET     KEY19                                                       
          READ      AAEAUDBC,KEY19;;                                            
          RETURN
.
AKAEBCH                                                                         
          MOVE      ZERO,OVRCD
          READKS    AAEAUDBC;AEBCAUDD,AEBCAUDT,AEBCAUDP,AEBCAUDR,AEBCAUDS:      
                    AEBCAUDO,AEBCCLM,AEBCBRD,DAEBCAGE,DAEBCNVI,AEBCDESC:        
                        AEBCPTPO,AEBCBDPO,AEBCNINV,AEBCITEM,AEBCSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DAEBCAGE,AEBCAGEG                                           
          MOVE      DAEBCNVI,AEBCNVIS                                           
          MOVE      AEBCPTPO,AEBCPPOR                                           
          MOVE      AEBCBDPO,AEBCBPOR                                           
          RETURN
.
AUAEBCH                                                                         
          MOVE      AEBCPPOR,AEBCPTPO                                           
          MOVE      AEBCBPOR,AEBCBDPO                                           
          MOVE      AEBCAGEG,DAEBCAGE                                           
          MOVE      AEBCNVIS,DAEBCNVI                                           
          UPDATE    AAEAUDBC;AEBCAUDD,AEBCAUDT,AEBCAUDP,AEBCAUDR,AEBCAUDS:      
                    AEBCAUDO,AEBCCLM,AEBCBRD,DAEBCAGE,DAEBCNVI,AEBCDESC:        
                        AEBCPTPO,AEBCBDPO,AEBCNINV,AEBCITEM,AEBCSPAR            
          RETURN
.
AWAEBCH   RESET     KEY19                                                       
          MOVE      AEBCPPOR,AEBCPTPO                                           
          MOVE      AEBCBPOR,AEBCBDPO                                           
          MOVE      AEBCAGEG,DAEBCAGE                                           
          MOVE      AEBCNVIS,DAEBCNVI                                           
          WRITE     AAEAUDBC,KEY19;AEBCAUDD,AEBCAUDT,AEBCAUDP,AEBCAUDR,AEBCAUDS:
                    AEBCAUDO,AEBCCLM,AEBCBRD,DAEBCAGE,DAEBCNVI,AEBCDESC:        
                        AEBCPTPO,AEBCBDPO,AEBCNINV,AEBCITEM,AEBCSPAR            
          RETURN
.
ADAEBCH   RESET     KEY19                                                       
          DELETE    AAEAUDBC,KEY19;                                             
          RETURN
.
