.
. OBSPHYIO    
. --------
. Filename     : obsphyaf.dat
.
RSOBPHY1  RESET     KEY11                                                       
          READ      OBSPHYA1,KEY11;;                                            
          RETURN
.
RAOBPHY1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSPHYA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBPHY1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSPHYA1,KEY11;OBPHVISN,OBPHLINE,OBPHPHYS,OBPHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBPHY1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSPHYA1;OBPHVISN,OBPHLINE,OBPHPHYS,OBPHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBPHY1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSPHYA1;OBPHVISN,OBPHLINE,OBPHPHYS,OBPHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBPHY1                                                                        
          UPDATE    OBSPHYA1;OBPHVISN,OBPHLINE,OBPHPHYS,OBPHSPAR                
          RETURN
.
WROBPHY1  RESET     KEY11                                                       
          WRITE     OBSPHYA1,KEY11;OBPHVISN,OBPHLINE,OBPHPHYS,OBPHSPAR          
          RETURN
.
DEOBPHY1  RESET     KEY11                                                       
          DELETE    OBSPHYA1,KEY11                                              
          RETURN
.
