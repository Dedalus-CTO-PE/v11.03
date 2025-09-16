.
. OBSREAIO    
. --------
. Filename     : obsreaaf.dat
.
RSOBREA1  RESET     KEY11                                                       
          READ      OBSREAA1,KEY11;;                                            
          RETURN
.
RAOBREA1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSREAA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBREA1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSREAA1,KEY11;OBREVISN,OBRELINE,OBREREAS,OBRESPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBREA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSREAA1;OBREVISN,OBRELINE,OBREREAS,OBRESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBREA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSREAA1;OBREVISN,OBRELINE,OBREREAS,OBRESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBREA1                                                                        
          UPDATE    OBSREAA1;OBREVISN,OBRELINE,OBREREAS,OBRESPAR                
          RETURN
.
WROBREA1  RESET     KEY11                                                       
          WRITE     OBSREAA1,KEY11;OBREVISN,OBRELINE,OBREREAS,OBRESPAR          
          RETURN
.
DEOBREA1  RESET     KEY11                                                       
          DELETE    OBSREAA1,KEY11                                              
          RETURN
.
