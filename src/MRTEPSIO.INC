.
. MRTEPSIO    
. --------
. Filename     : mrtepsaf.dat
.
RSMREP1   RESET     KEY12                                                       
          READ      MRTEPSA1,KEY12;;                                            
          RETURN
.
RAMREP1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      MRTEPSA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMREP1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      MRTEPSA1,KEY12;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:  
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMREP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    MRTEPSA1;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:        
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMREP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    MRTEPSA1;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:        
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMREP1                                                                         
          UPDATE    MRTEPSA1;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:        
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          RETURN
.
WRMREP1   RESET     KEY12                                                       
          WRITE     MRTEPSA1,KEY12;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:  
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          RETURN
.
DEMREP1   RESET     KEY12                                                       
          DELETE    MRTEPSA1,KEY12                                              
          RETURN
.
RSMREP2   RESET     KEY52                                                       
          READ      MRTEPSA2,KEY52;;                                            
          RETURN
.
RAMREP2   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      MRTEPSA2,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMREP2   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      MRTEPSA2,KEY52;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:  
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMREP2                                                                         
          MOVE      ZERO,OVRCD
          READKS    MRTEPSA2;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:        
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMREP2                                                                         
          MOVE      ZERO,OVRCD
          READKP    MRTEPSA2;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:        
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMREP2                                                                         
          UPDATE    MRTEPSA2;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:        
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          RETURN
.
WRMREP2   RESET     KEY52                                                       
          WRITE     MRTEPSA2,KEY52;MREPEID,MREPVIS,MREPLEV1,MREPLEV2,MREPLEV3:  
                        MREPLEV4,MREPANL1,MREPANL2,MREPANL3,MREPDEL,MREPSPAR    
          RETURN
.
DEMREP2   RESET     KEY52                                                       
          DELETE    MRTEPSA2,KEY52                                              
          RETURN
.
