.
. OBSRESIO    
. --------
. Filename     : obsresaf.dat
.
RSOBRES1  RESET     KEY11                                                       
          READ      OBSRESA1,KEY11;;                                            
          RETURN
.
RAOBRES1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSRESA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBRES1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSRESA1,KEY11;OBRSVISN,OBRSLINE,OBRSREST,OBRSSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBRES1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSRESA1;OBRSVISN,OBRSLINE,OBRSREST,OBRSSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBRES1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSRESA1;OBRSVISN,OBRSLINE,OBRSREST,OBRSSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBRES1                                                                        
          UPDATE    OBSRESA1;OBRSVISN,OBRSLINE,OBRSREST,OBRSSPAR                
          RETURN
.
WROBRES1  RESET     KEY11                                                       
          WRITE     OBSRESA1,KEY11;OBRSVISN,OBRSLINE,OBRSREST,OBRSSPAR          
          RETURN
.
DEOBRES1  RESET     KEY11                                                       
          DELETE    OBSRESA1,KEY11                                              
          RETURN
.
