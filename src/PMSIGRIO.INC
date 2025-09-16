.
. PMSIGRIO    
. --------
. Filename     : pmsigraf.dat
.
RSPMIGR1  RESET     KEY3                                                        
          READ      PMSIGRA1,KEY3;;                                             
          RETURN
.
RAPMIGR1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSIGRA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIGR1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSIGRA1,KEY3;PMIGCODE,PMIGDESC,PMIGEATI,PMIGROOM,PMIGBATH: 
                                  PMIGUPBD,PMIGLWBD,PMIGTOIL,PMIGBLAD,PMIGBOWE: 
                                  PMIGTBED,PMIGTTOI,PMIGTTUB,PMIGWALK,PMIGSTAI: 
                                  PMIGSPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIGR1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIGRA1;PMIGCODE,PMIGDESC,PMIGEATI,PMIGROOM,PMIGBATH:      
                             PMIGUPBD,PMIGLWBD,PMIGTOIL,PMIGBLAD,PMIGBOWE:      
                             PMIGTBED,PMIGTTOI,PMIGTTUB,PMIGWALK,PMIGSTAI:      
                             PMIGSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIGR1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIGRA1;PMIGCODE,PMIGDESC,PMIGEATI,PMIGROOM,PMIGBATH:      
                             PMIGUPBD,PMIGLWBD,PMIGTOIL,PMIGBLAD,PMIGBOWE:      
                             PMIGTBED,PMIGTTOI,PMIGTTUB,PMIGWALK,PMIGSTAI:      
                             PMIGSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIGR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIGRA1;PMIGCODE,PMIGDESC,PMIGEATI,PMIGROOM,PMIGBATH:      
                             PMIGUPBD,PMIGLWBD,PMIGTOIL,PMIGBLAD,PMIGBOWE:      
                             PMIGTBED,PMIGTTOI,PMIGTTUB,PMIGWALK,PMIGSTAI:      
                             PMIGSPAR                                           
          RETURN
.
WRPMIGR1  RESET     KEY3                                                        
          WRITE     PMSIGRA1,KEY3;PMIGCODE,PMIGDESC,PMIGEATI,PMIGROOM,PMIGBATH: 
                                  PMIGUPBD,PMIGLWBD,PMIGTOIL,PMIGBLAD,PMIGBOWE: 
                                  PMIGTBED,PMIGTTOI,PMIGTTUB,PMIGWALK,PMIGSTAI: 
                                  PMIGSPAR                                      
          RETURN
.
DEPMIGR1  RESET     KEY3                                                        
          DELETE    PMSIGRA1,KEY3                                               
          RETURN
.
