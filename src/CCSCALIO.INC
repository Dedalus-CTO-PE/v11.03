.
. CCSCALIO    
. --------
. Filename     : ccscalaf.dat
.
RSCCCA1   RESET     KEY6                                                        
          READ      CCSCALA1,KEY6;;                                             
          RETURN
.
RACCCA1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCALA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCCA1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCALA1,KEY6;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:     
                        CCCASTAT,CCCASPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCCA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCALA1;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:          
                        CCCASTAT,CCCASPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCCA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCALA1;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:          
                        CCCASTAT,CCCASPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCCA1                                                                         
          UPDATE    CCSCALA1;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:          
                        CCCASTAT,CCCASPA                                        
          RETURN
.
WRCCCA1   RESET     KEY6                                                        
          WRITE     CCSCALA1,KEY6;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:     
                        CCCASTAT,CCCASPA                                        
          RETURN
.
DECCCA1   RESET     KEY6                                                        
          DELETE    CCSCALA1,KEY6                                               
          RETURN
.
RSCCCA2   RESET     KEY6                                                        
          READ      CCSCALA2,KEY6;;                                             
          RETURN
.
RACCCA2   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCALA2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCCA2   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCALA2,KEY6;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:     
                        CCCASTAT,CCCASPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCCA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCALA2;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:          
                        CCCASTAT,CCCASPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCCA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCALA2;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:          
                        CCCASTAT,CCCASPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCCA2                                                                         
          UPDATE    CCSCALA2;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:          
                        CCCASTAT,CCCASPA                                        
          RETURN
.
WRCCCA2   RESET     KEY6                                                        
          WRITE     CCSCALA2,KEY6;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:     
                        CCCASTAT,CCCASPA                                        
          RETURN
.
DECCCA2   RESET     KEY6                                                        
          DELETE    CCSCALA2,KEY6                                               
          RETURN
.
RSCCCA3   RESET     KEY14                                                       
          READ      CCSCALA3,KEY14;;                                            
          RETURN
.
RACCCA3   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCALA3,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCCA3   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCALA3,KEY14;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:    
                        CCCASTAT,CCCASPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCCA3                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCALA3;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:          
                        CCCASTAT,CCCASPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCCA3                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCALA3;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:          
                        CCCASTAT,CCCASPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCCA3                                                                         
          UPDATE    CCSCALA3;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:          
                        CCCASTAT,CCCASPA                                        
          RETURN
.
WRCCCA3   RESET     KEY14                                                       
          WRITE     CCSCALA3,KEY14;CCCAYEAR,CCCAPER,CCCADES,CCCAFDT,CCCATDT:    
                        CCCASTAT,CCCASPA                                        
          RETURN
.
DECCCA3   RESET     KEY14                                                       
          DELETE    CCSCALA3,KEY14                                              
          RETURN
.
