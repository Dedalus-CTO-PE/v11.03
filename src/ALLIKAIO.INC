.
. ALLIKAIO    
. --------
. Filename     : allikaaf.dat
.
RSALIKA1  RESET     KEY62                                                       
          READ      ALLIKAA1,KEY62;;                                            
          RETURN
.
RAALIKA1  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      ALLIKAA1,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALIKA1  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      ALLIKAA1,KEY62;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALIKA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLIKAA1;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALIKA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLIKAA1;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALIKA1                                                                        
          UPDATE    ALLIKAA1;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR                
          RETURN
.
WRALIKA1  RESET     KEY62                                                       
          WRITE     ALLIKAA1,KEY62;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR          
          RETURN
.
DEALIKA1  RESET     KEY62                                                       
          DELETE    ALLIKAA1,KEY62                                              
          RETURN
.
RSALIKA2  RESET     KEY62                                                       
          READ      ALLIKAA2,KEY62;;                                            
          RETURN
.
RAALIKA2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      ALLIKAA2,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALIKA2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      ALLIKAA2,KEY62;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALIKA2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLIKAA2;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALIKA2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLIKAA2;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALIKA2                                                                        
          UPDATE    ALLIKAA2;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR                
          RETURN
.
WRALIKA2  RESET     KEY62                                                       
          WRITE     ALLIKAA2,KEY62;ALIKDEPT,ALIKCODE,ALIKKWRD,ALIKSPAR          
          RETURN
.
DEALIKA2  RESET     KEY62                                                       
          DELETE    ALLIKAA2,KEY62                                              
          RETURN
.
