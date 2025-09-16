.
. MEHINCIO    
. --------
. Filename     : mehincaf.dat
.
RSMHINC1  RESET     KEY4                                                        
          READ      MEHINCA1,KEY4;;                                             
          RETURN
.
RAMHINC1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      MEHINCA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHINC1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      MEHINCA1,KEY4;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN: 
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHINC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHINCA1;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN:      
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHINC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHINCA1;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN:      
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHINC1                                                                        
          UPDATE    MEHINCA1;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN:      
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          RETURN
.
WRMHINC1  RESET     KEY4                                                        
          WRITE     MEHINCA1,KEY4;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN: 
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          RETURN
.
DEMHINC1  RESET     KEY4                                                        
          DELETE    MEHINCA1,KEY4                                               
          RETURN
.
RSMHINC2  RESET     KEY12                                                       
          READ      MEHINCA2,KEY12;;                                            
          RETURN
.
RAMHINC2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      MEHINCA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHINC2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      MEHINCA2,KEY12;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN:
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHINC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHINCA2;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN:      
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHINC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHINCA2;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN:      
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHINC2                                                                        
          UPDATE    MEHINCA2;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN:      
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          RETURN
.
WRMHINC2  RESET     KEY12                                                       
          WRITE     MEHINCA2,KEY12;MHINSEID,MHINDESC,MHINFDAT,MHINTDAT,MHINRECN:
                        MHINERRN,MHINCUID,MHINCDAT,MHINCTIM,MHINUUID,MHINUDAT:  
                        MHINUTIM,MHINFILN,MHINEFLG,MHINSPAR                     
          RETURN
.
DEMHINC2  RESET     KEY12                                                       
          DELETE    MEHINCA2,KEY12                                              
          RETURN
.
