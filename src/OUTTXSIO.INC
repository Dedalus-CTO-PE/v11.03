.
. OUTTXSIO    
. --------
. Filename     : outtxsaf.dat
.
RSOTTXS1  RESET     KEY12                                                       
          READ      OUTTXSA1,KEY12;;                                            
          RETURN
.
RAOTTXS1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      OUTTXSA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTTXS1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      OUTTXSA1,KEY12;OTTXSITE,OTTXCTYP,OTTXBKSR,OTTXBKRN,OTTXBKTM:
                        OTTXATSR,OTTXATRN,OTTXATTM,OTTXSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTTXS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTTXSA1;OTTXSITE,OTTXCTYP,OTTXBKSR,OTTXBKRN,OTTXBKTM:      
                        OTTXATSR,OTTXATRN,OTTXATTM,OTTXSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTTXS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTTXSA1;OTTXSITE,OTTXCTYP,OTTXBKSR,OTTXBKRN,OTTXBKTM:      
                        OTTXATSR,OTTXATRN,OTTXATTM,OTTXSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTTXS1                                                                        
          UPDATE    OUTTXSA1;OTTXSITE,OTTXCTYP,OTTXBKSR,OTTXBKRN,OTTXBKTM:      
                        OTTXATSR,OTTXATRN,OTTXATTM,OTTXSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTTXS1  RESET     KEY12                                                       
          WRITE     OUTTXSA1,KEY12;OTTXSITE,OTTXCTYP,OTTXBKSR,OTTXBKRN,OTTXBKTM:
                        OTTXATSR,OTTXATRN,OTTXATTM,OTTXSPAR                     
          RETURN
.
DEOTTXS1  RESET     KEY12                                                       
          DELETE    OUTTXSA1,KEY12                                              
          RETURN
.
RLOTTXS1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     OUTTXSA1,KEY12;OTTXSITE,OTTXCTYP,OTTXBKSR,OTTXBKRN,OTTXBKTM:
                        OTTXATSR,OTTXATRN,OTTXATTM,OTTXSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTTXS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTTXSA1;OTTXSITE,OTTXCTYP,OTTXBKSR,OTTXBKRN,OTTXBKTM:      
                        OTTXATSR,OTTXATRN,OTTXATTM,OTTXSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTTXS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTTXSA1;OTTXSITE,OTTXCTYP,OTTXBKSR,OTTXBKRN,OTTXBKTM:      
                        OTTXATSR,OTTXATRN,OTTXATTM,OTTXSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTTXS1  RESET     KEY12                                                       
          UNLOCK    OUTTXSA1                                                    
          RETURN
.
