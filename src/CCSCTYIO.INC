.
. CCSCTYIO    
. --------
. Filename     : ccsctyaf.dat
.
RSCCCT1   RESET     KEY4                                                        
          READ      CCSCTYA1,KEY4;;                                             
          RETURN
.
RACCCT1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCTYA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCCT1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCTYA1,KEY4;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:      
                        CCCTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCCT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCTYA1;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:           
                        CCCTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCCT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCTYA1;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:           
                        CCCTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCCT1                                                                         
          UPDATE    CCSCTYA1;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:           
                        CCCTSPA                                                 
          RETURN
.
WRCCCT1   RESET     KEY4                                                        
          WRITE     CCSCTYA1,KEY4;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:      
                        CCCTSPA                                                 
          RETURN
.
DECCCT1   RESET     KEY4                                                        
          DELETE    CCSCTYA1,KEY4                                               
          RETURN
.
RSCCCT2   RESET     KEY39                                                       
          READ      CCSCTYA2,KEY39;;                                            
          RETURN
.
RACCCT2   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCTYA2,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCCT2   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCTYA2,KEY39;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:     
                        CCCTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCCT2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCTYA2;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:           
                        CCCTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCCT2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCTYA2;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:           
                        CCCTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCCT2                                                                         
          UPDATE    CCSCTYA2;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:           
                        CCCTSPA                                                 
          RETURN
.
WRCCCT2   RESET     KEY39                                                       
          WRITE     CCSCTYA2,KEY39;CCCTCTY,CCCTDES,CCCTFIX,CCCTLAB,CCCTIND:     
                        CCCTSPA                                                 
          RETURN
.
DECCCT2   RESET     KEY39                                                       
          DELETE    CCSCTYA2,KEY39                                              
          RETURN
.
