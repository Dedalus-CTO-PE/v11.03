.
. PATOICIO    
. --------
. Filename     : patoicaf.dat
.
RSPTOI1   RESET     KEY24                                                       
          READ      PATOICA1,KEY24;;                                            
          RETURN
.
RAPTOI1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATOICA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTOI1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATOICA1,KEY24;PTOIICD,PTOIKWD,PTOISPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTOI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATOICA1;PTOIICD,PTOIKWD,PTOISPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTOI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATOICA1;PTOIICD,PTOIKWD,PTOISPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTOI1                                                                         
          UPDATE    PATOICA1;PTOIICD,PTOIKWD,PTOISPA                            
          RETURN
.
WRPTOI1   RESET     KEY24                                                       
          WRITE     PATOICA1,KEY24;PTOIICD,PTOIKWD,PTOISPA                      
          RETURN
.
DEPTOI1   RESET     KEY24                                                       
          DELETE    PATOICA1,KEY24                                              
          RETURN
.
RSPTOI2   RESET     KEY24                                                       
          READ      PATOICA2,KEY24;;                                            
          RETURN
.
RAPTOI2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATOICA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTOI2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATOICA2,KEY24;PTOIICD,PTOIKWD,PTOISPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTOI2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATOICA2;PTOIICD,PTOIKWD,PTOISPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTOI2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATOICA2;PTOIICD,PTOIKWD,PTOISPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTOI2                                                                         
          UPDATE    PATOICA2;PTOIICD,PTOIKWD,PTOISPA                            
          RETURN
.
WRPTOI2   RESET     KEY24                                                       
          WRITE     PATOICA2,KEY24;PTOIICD,PTOIKWD,PTOISPA                      
          RETURN
.
DEPTOI2   RESET     KEY24                                                       
          DELETE    PATOICA2,KEY24                                              
          RETURN
.
