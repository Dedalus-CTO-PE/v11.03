.
. OBSBPHIO    
. --------
. Filename     : obsbphaf.dat
.
RSOBBPH1  RESET     KEY11                                                       
          READ      OBSBPHA1,KEY11;;                                            
          RETURN
.
RAOBBPH1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSBPHA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBBPH1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSBPHA1,KEY11;OBBPVISN,OBBPLINE,OBBPDESC,OBBPSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBBPH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSBPHA1;OBBPVISN,OBBPLINE,OBBPDESC,OBBPSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBBPH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSBPHA1;OBBPVISN,OBBPLINE,OBBPDESC,OBBPSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBBPH1                                                                        
          UPDATE    OBSBPHA1;OBBPVISN,OBBPLINE,OBBPDESC,OBBPSPAR                
          RETURN
.
WROBBPH1  RESET     KEY11                                                       
          WRITE     OBSBPHA1,KEY11;OBBPVISN,OBBPLINE,OBBPDESC,OBBPSPAR          
          RETURN
.
DEOBBPH1  RESET     KEY11                                                       
          DELETE    OBSBPHA1,KEY11                                              
          RETURN
.
