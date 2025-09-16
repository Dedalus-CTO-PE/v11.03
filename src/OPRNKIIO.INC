.
. OPRNKIIO    
. --------
. Filename     : oprnkiaf.dat
.
RSOPNK1   RESET     KEY21                                                       
          READ      OPRNKIA1,KEY21;;                                            
          RETURN
.
RAOPNK1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OPRNKIA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPNK1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OPRNKIA1,KEY21;OPNKITM,OPNKKWD,OPNKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPNK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    OPRNKIA1;OPNKITM,OPNKKWD,OPNKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPNK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    OPRNKIA1;OPNKITM,OPNKKWD,OPNKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPNK1                                                                         
          UPDATE    OPRNKIA1;OPNKITM,OPNKKWD,OPNKSPA                            
          RETURN
.
WROPNK1   RESET     KEY21                                                       
          WRITE     OPRNKIA1,KEY21;OPNKITM,OPNKKWD,OPNKSPA                      
          RETURN
.
DEOPNK1   RESET     KEY21                                                       
          DELETE    OPRNKIA1,KEY21                                              
          RETURN
.
RSOPNK2   RESET     KEY21                                                       
          READ      OPRNKIA2,KEY21;;                                            
          RETURN
.
RAOPNK2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OPRNKIA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPNK2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OPRNKIA2,KEY21;OPNKITM,OPNKKWD,OPNKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPNK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    OPRNKIA2;OPNKITM,OPNKKWD,OPNKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPNK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    OPRNKIA2;OPNKITM,OPNKKWD,OPNKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPNK2                                                                         
          UPDATE    OPRNKIA2;OPNKITM,OPNKKWD,OPNKSPA                            
          RETURN
.
WROPNK2   RESET     KEY21                                                       
          WRITE     OPRNKIA2,KEY21;OPNKITM,OPNKKWD,OPNKSPA                      
          RETURN
.
DEOPNK2   RESET     KEY21                                                       
          DELETE    OPRNKIA2,KEY21                                              
          RETURN
.
