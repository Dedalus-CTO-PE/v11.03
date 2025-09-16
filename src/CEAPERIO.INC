.
. CEAPERIO    
. --------
. Filename     : ceaperaf.dat
.
RSCEPE1   RESET     KEY6                                                        
          READ      CEAPERA1,KEY6;;                                             
          RETURN
.
RACEPE1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPERA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEPE1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPERA1,KEY6;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEPE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAPERA1;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEPE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAPERA1;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEPE1                                                                         
          UPDATE    CEAPERA1;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA           
          RETURN
.
WRCEPE1   RESET     KEY6                                                        
          WRITE     CEAPERA1,KEY6;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA      
          RETURN
.
DECEPE1   RESET     KEY6                                                        
          DELETE    CEAPERA1,KEY6                                               
          RETURN
.
RSCEPE2   RESET     KEY14                                                       
          READ      CEAPERA2,KEY14;;                                            
          RETURN
.
RACEPE2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CEAPERA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEPE2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CEAPERA2,KEY14;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEPE2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAPERA2;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEPE2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAPERA2;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEPE2                                                                         
          UPDATE    CEAPERA2;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA           
          RETURN
.
WRCEPE2   RESET     KEY14                                                       
          WRITE     CEAPERA2,KEY14;CEPEYEAR,CEPEPER,CEPEDES,CEPEEND,CEPESPA     
          RETURN
.
DECEPE2   RESET     KEY14                                                       
          DELETE    CEAPERA2,KEY14                                              
          RETURN
.
