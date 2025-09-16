.
. OBSDIAIO    
. --------
. Filename     : obsdiaaf.dat
.
RSOBDIA1  RESET     KEY11                                                       
          READ      OBSDIAA1,KEY11;;                                            
          RETURN
.
RAOBDIA1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSDIAA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBDIA1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSDIAA1,KEY11;OBDIVISN,OBDILINE,OBDIDIAG,OBDISPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBDIA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSDIAA1;OBDIVISN,OBDILINE,OBDIDIAG,OBDISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBDIA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSDIAA1;OBDIVISN,OBDILINE,OBDIDIAG,OBDISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBDIA1                                                                        
          UPDATE    OBSDIAA1;OBDIVISN,OBDILINE,OBDIDIAG,OBDISPAR                
          RETURN
.
WROBDIA1  RESET     KEY11                                                       
          WRITE     OBSDIAA1,KEY11;OBDIVISN,OBDILINE,OBDIDIAG,OBDISPAR          
          RETURN
.
DEOBDIA1  RESET     KEY11                                                       
          DELETE    OBSDIAA1,KEY11                                              
          RETURN
.
