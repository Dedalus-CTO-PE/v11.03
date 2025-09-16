.
. WEBSGPIO    
. --------
. Filename     : websgpaf.dat
.
RSWBSGP1  RESET     KEY20                                                       
          READ      WEBSGPA1,KEY20;;                                            
          RETURN
.
RAWBSGP1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSGPA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSGP1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSGPA1,KEY20;WBSGUSID,WBSGGRPC,WBSGSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSGP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBSGPA1;WBSGUSID,WBSGGRPC,WBSGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSGP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBSGPA1;WBSGUSID,WBSGGRPC,WBSGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSGP1                                                                        
          UPDATE    WEBSGPA1;WBSGUSID,WBSGGRPC,WBSGSPAR                         
          RETURN
.
WRWBSGP1  RESET     KEY20                                                       
          WRITE     WEBSGPA1,KEY20;WBSGUSID,WBSGGRPC,WBSGSPAR                   
          RETURN
.
DEWBSGP1  RESET     KEY20                                                       
          DELETE    WEBSGPA1,KEY20                                              
          RETURN
.
RSWBSGP2  RESET     KEY20                                                       
          READ      WEBSGPA2,KEY20;;                                            
          RETURN
.
RAWBSGP2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSGPA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSGP2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSGPA2,KEY20;WBSGUSID,WBSGGRPC,WBSGSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSGP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBSGPA2;WBSGUSID,WBSGGRPC,WBSGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSGP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBSGPA2;WBSGUSID,WBSGGRPC,WBSGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSGP2                                                                        
          UPDATE    WEBSGPA2;WBSGUSID,WBSGGRPC,WBSGSPAR                         
          RETURN
.
WRWBSGP2  RESET     KEY20                                                       
          WRITE     WEBSGPA2,KEY20;WBSGUSID,WBSGGRPC,WBSGSPAR                   
          RETURN
.
DEWBSGP2  RESET     KEY20                                                       
          DELETE    WEBSGPA2,KEY20                                              
          RETURN
.

