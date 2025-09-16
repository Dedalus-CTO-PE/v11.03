.
. PATDICIO    
. --------
. Filename     : patdicaf.dat
.
RSPTDI1   RESET     KEY24                                                       
          READ      PATDICA1,KEY24;;                                            
          RETURN
.
RAPTDI1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATDICA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTDI1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATDICA1,KEY24;PTDIICD,PTDIKWD,PTDISPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTDI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATDICA1;PTDIICD,PTDIKWD,PTDISPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTDI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATDICA1;PTDIICD,PTDIKWD,PTDISPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTDI1                                                                         
          UPDATE    PATDICA1;PTDIICD,PTDIKWD,PTDISPA                            
          RETURN
.
WRPTDI1   RESET     KEY24                                                       
          WRITE     PATDICA1,KEY24;PTDIICD,PTDIKWD,PTDISPA                      
          RETURN
.
DEPTDI1   RESET     KEY24                                                       
          DELETE    PATDICA1,KEY24                                              
          RETURN
.
RSPTDI2   RESET     KEY24                                                       
          READ      PATDICA2,KEY24;;                                            
          RETURN
.
RAPTDI2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATDICA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTDI2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATDICA2,KEY24;PTDIICD,PTDIKWD,PTDISPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTDI2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATDICA2;PTDIICD,PTDIKWD,PTDISPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTDI2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATDICA2;PTDIICD,PTDIKWD,PTDISPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTDI2                                                                         
          UPDATE    PATDICA2;PTDIICD,PTDIKWD,PTDISPA                            
          RETURN
.
WRPTDI2   RESET     KEY24                                                       
          WRITE     PATDICA2,KEY24;PTDIICD,PTDIKWD,PTDISPA                      
          RETURN
.
DEPTDI2   RESET     KEY24                                                       
          DELETE    PATDICA2,KEY24                                              
          RETURN
.
