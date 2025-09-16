.
. PATBCHIO    
. --------
. Filename     : patbchaf.dat
.
RSPTBCH1  RESET     KEY15                                                       
          READ      PATBCHA1,KEY15;;                                            
          RETURN
.
RAPTBCH1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PATBCHA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBCH1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PATBCHA1,KEY15;PTBCCLM,PTBCBRD,PTBCDEPT,DPTBCEND,PTBCDESC:  
                        PTBCPPOR,PTBCBPOR,PTBCNINV,PTBCSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      DPTBCEND,PTBCENDD                                           
          RETURN
.
RKPTBCH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBCHA1;PTBCCLM,PTBCBRD,PTBCDEPT,DPTBCEND,PTBCDESC:        
                        PTBCPPOR,PTBCBPOR,PTBCNINV,PTBCSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      DPTBCEND,PTBCENDD                                           
          RETURN
.
RPPTBCH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBCHA1;PTBCCLM,PTBCBRD,PTBCDEPT,DPTBCEND,PTBCDESC:        
                        PTBCPPOR,PTBCBPOR,PTBCNINV,PTBCSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      DPTBCEND,PTBCENDD                                           
          RETURN
.
UPPTBCH1                                                                        
          MOVE      PTBCENDD,DPTBCEND                                           
          UPDATE    PATBCHA1;PTBCCLM,PTBCBRD,PTBCDEPT,DPTBCEND,PTBCDESC:        
                        PTBCPPOR,PTBCBPOR,PTBCNINV,PTBCSPAR                     
          RETURN
.
WRPTBCH1  RESET     KEY15                                                       
          MOVE      PTBCENDD,DPTBCEND                                           
          WRITE     PATBCHA1,KEY15;PTBCCLM,PTBCBRD,PTBCDEPT,DPTBCEND,PTBCDESC:  
                        PTBCPPOR,PTBCBPOR,PTBCNINV,PTBCSPAR                     
          RETURN
.
DEPTBCH1  RESET     KEY15                                                       
          DELETE    PATBCHA1,KEY15                                              
          RETURN
.
ASPTBCH   RESET     KEY19                                                       
          READ      PATAUDBC,KEY19;;                                            
          RETURN
.
AKPTBCH                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATAUDBC;PTBCAUDD,PTBCAUDT,PTBCAUDP,PTBCAUDR,PTBCAUDS:      
                    PTBCAUDO,PTBCCLM,PTBCBRD,PTBCDEPT,DPTBCEND,PTBCDESC:        
                        PTBCPPOR,PTBCBPOR,PTBCNINV,PTBCSPAR                     
          MOVE      DPTBCEND,PTBCENDD                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
AUPTBCH                                                                         
          MOVE      PTBCENDD,DPTBCEND                                           
          UPDATE    PATAUDBC;PTBCAUDD,PTBCAUDT,PTBCAUDP,PTBCAUDR,PTBCAUDS:      
                    PTBCAUDO,PTBCCLM,PTBCBRD,PTBCDEPT,DPTBCEND,PTBCDESC:        
                        PTBCPPOR,PTBCBPOR,PTBCNINV,PTBCSPAR                     
          RETURN
.
AWPTBCH   RESET     KEY19                                                       
          MOVE      PTBCENDD,DPTBCEND                                           
          WRITE     PATAUDBC,KEY19;PTBCAUDD,PTBCAUDT,PTBCAUDP,PTBCAUDR,PTBCAUDS:
                    PTBCAUDO,PTBCCLM,PTBCBRD,PTBCDEPT,DPTBCEND,PTBCDESC:        
                        PTBCPPOR,PTBCBPOR,PTBCNINV,PTBCSPAR                     
          RETURN
.
ADPTBCH   RESET     KEY19                                                       
          DELETE    PATAUDBC,KEY19;                                             
          RETURN
.
