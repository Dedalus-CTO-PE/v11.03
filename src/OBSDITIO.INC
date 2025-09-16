.
. OBSDITIO    
. --------
. Filename     : obsditaf.dat
.
RSOBDIT1  RESET     KEY11                                                       
          READ      OBSDITA1,KEY11;;                                            
          RETURN
.
RAOBDIT1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSDITA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBDIT1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSDITA1,KEY11;OBDTVISN,OBDTCNTR,OBDTDIET,OBDTSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBDIT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSDITA1;OBDTVISN,OBDTCNTR,OBDTDIET,OBDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBDIT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSDITA1;OBDTVISN,OBDTCNTR,OBDTDIET,OBDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBDIT1                                                                        
          UPDATE    OBSDITA1;OBDTVISN,OBDTCNTR,OBDTDIET,OBDTSPAR                
          RETURN
.
WROBDIT1  RESET     KEY11                                                       
          WRITE     OBSDITA1,KEY11;OBDTVISN,OBDTCNTR,OBDTDIET,OBDTSPAR          
          RETURN
.
DEOBDIT1  RESET     KEY11                                                       
          DELETE    OBSDITA1,KEY11                                              
          RETURN
.
