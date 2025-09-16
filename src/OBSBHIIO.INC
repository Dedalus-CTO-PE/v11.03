.
. OBSBHIIO    
. --------
. Filename     : obsbhiaf.dat
.
RSOBBHI1  RESET     KEY11                                                       
          READ      OBSBHIA1,KEY11;;                                            
          RETURN
.
RAOBBHI1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSBHIA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBBHI1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSBHIA1,KEY11;OBBHVISN,OBBHLINE,OBBHDESC,OBBHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBBHI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSBHIA1;OBBHVISN,OBBHLINE,OBBHDESC,OBBHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBBHI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSBHIA1;OBBHVISN,OBBHLINE,OBBHDESC,OBBHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBBHI1                                                                        
          UPDATE    OBSBHIA1;OBBHVISN,OBBHLINE,OBBHDESC,OBBHSPAR                
          RETURN
.
WROBBHI1  RESET     KEY11                                                       
          WRITE     OBSBHIA1,KEY11;OBBHVISN,OBBHLINE,OBBHDESC,OBBHSPAR          
          RETURN
.
DEOBBHI1  RESET     KEY11                                                       
          DELETE    OBSBHIA1,KEY11                                              
          RETURN
.
