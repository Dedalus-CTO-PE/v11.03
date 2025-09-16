.
. OBSCALIO    
. --------
. Filename     : obscalaf.dat
.
RSOBCAL1  RESET     KEY11                                                       
          READ      OBSCALA1,KEY11;;                                            
          RETURN
.
RAOBCAL1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCALA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBCAL1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCALA1,KEY11;OBCLVISN,OBCLCNTR,OBCLCALL,OBCLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBCAL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSCALA1;OBCLVISN,OBCLCNTR,OBCLCALL,OBCLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBCAL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSCALA1;OBCLVISN,OBCLCNTR,OBCLCALL,OBCLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBCAL1                                                                        
          UPDATE    OBSCALA1;OBCLVISN,OBCLCNTR,OBCLCALL,OBCLSPAR                
          RETURN
.
WROBCAL1  RESET     KEY11                                                       
          WRITE     OBSCALA1,KEY11;OBCLVISN,OBCLCNTR,OBCLCALL,OBCLSPAR          
          RETURN
.
DEOBCAL1  RESET     KEY11                                                       
          DELETE    OBSCALA1,KEY11                                              
          RETURN
.
