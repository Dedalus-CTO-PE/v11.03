.
. BOKLTLIO    
. --------
. Filename     : bokltlaf.dat
.
RSBKLTL1  RESET     KEY12                                                       
          READ      BOKLTLA1,KEY12;;                                            
          RETURN
.
RABKLTL1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      BOKLTLA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKLTL1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      BOKLTLA1,KEY12;BKLLSEID,BKLLBOOK,BKLLSTAT,BKLLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKLTL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    BOKLTLA1;BKLLSEID,BKLLBOOK,BKLLSTAT,BKLLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKLTL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    BOKLTLA1;BKLLSEID,BKLLBOOK,BKLLSTAT,BKLLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKLTL1                                                                        
          UPDATE    BOKLTLA1;BKLLSEID,BKLLBOOK,BKLLSTAT,BKLLSPAR                
          RETURN
.
WRBKLTL1  RESET     KEY12                                                       
          WRITE     BOKLTLA1,KEY12;BKLLSEID,BKLLBOOK,BKLLSTAT,BKLLSPAR          
          RETURN
.
DEBKLTL1  RESET     KEY12                                                       
          DELETE    BOKLTLA1,KEY12                                              
          RETURN
.
