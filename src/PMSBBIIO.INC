.
. PMSBBIIO    
. --------
. Filename     : pmsbbiaf.dat
.
RSPMBBI1  RESET     KEY12                                                       
          READ      PMSBBIA1,KEY12;;                                            
          RETURN
.
RAPMBBI1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBIA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBBI1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBIA1,KEY12;PMBBSEID,PMBBVISN,PMBBURNO,PMBBADDT,PMBBIFDT:
                        PMBBITDT,PMBBAMNT,PMBBPDRG,PMBBCFLG,PMBBSTAT,PMBBPRNT:  
                        PMBBWARD,PMBBAMBS,PMBBCARE,PMBBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBBI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBBIA1;PMBBSEID,PMBBVISN,PMBBURNO,PMBBADDT,PMBBIFDT:      
                        PMBBITDT,PMBBAMNT,PMBBPDRG,PMBBCFLG,PMBBSTAT,PMBBPRNT:  
                        PMBBWARD,PMBBAMBS,PMBBCARE,PMBBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBBI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBBIA1;PMBBSEID,PMBBVISN,PMBBURNO,PMBBADDT,PMBBIFDT:      
                        PMBBITDT,PMBBAMNT,PMBBPDRG,PMBBCFLG,PMBBSTAT,PMBBPRNT:  
                        PMBBWARD,PMBBAMBS,PMBBCARE,PMBBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBBI1                                                                        
          UPDATE    PMSBBIA1;PMBBSEID,PMBBVISN,PMBBURNO,PMBBADDT,PMBBIFDT:      
                        PMBBITDT,PMBBAMNT,PMBBPDRG,PMBBCFLG,PMBBSTAT,PMBBPRNT:  
                        PMBBWARD,PMBBAMBS,PMBBCARE,PMBBSPAR                     
          RETURN
.
WRPMBBI1  RESET     KEY12                                                       
          WRITE     PMSBBIA1,KEY12;PMBBSEID,PMBBVISN,PMBBURNO,PMBBADDT,PMBBIFDT:
                        PMBBITDT,PMBBAMNT,PMBBPDRG,PMBBCFLG,PMBBSTAT,PMBBPRNT:  
                        PMBBWARD,PMBBAMBS,PMBBCARE,PMBBSPAR                     
          RETURN
.
DEPMBBI1  RESET     KEY12                                                       
          DELETE    PMSBBIA1,KEY12                                              
          RETURN
.
