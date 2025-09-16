.
. NHIRELIO    
. --------
. Filename     : nhirelaf.dat
.
RSNHREL1  RESET     KEY2                                                        
          READ      NHIRELA1,KEY2;;                                             
          RETURN
.
RANHREL1  RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      NHIRELA1,KEY2;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHREL1  RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      NHIRELA1,KEY2;NHRERCD,NHREDES,NHRESPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHREL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NHIRELA1;NHRERCD,NHREDES,NHRESPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHREL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NHIRELA1;NHRERCD,NHREDES,NHRESPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHREL1                                                                        
          UPDATE    NHIRELA1;NHRERCD,NHREDES,NHRESPA                            
          RETURN
.
WRNHREL1  RESET     KEY2                                                        
          WRITE     NHIRELA1,KEY2;NHRERCD,NHREDES,NHRESPA                       
          RETURN
.
DENHREL1  RESET     KEY2                                                        
          DELETE    NHIRELA1,KEY2                                               
          RETURN
.
