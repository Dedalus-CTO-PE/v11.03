.
. NHIETHIO    
. --------
. Filename     : nhiethaf.dat
.
RSNHETH1  RESET     KEY5                                                        
          READ      NHIETHA1,KEY5;;                                             
          RETURN
.
RANHETH1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      NHIETHA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHETH1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      NHIETHA1,KEY5;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHETH1  MOVE      ZERO,OVRCD                                                  
          READKS    NHIETHA1;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHETH1  MOVE      ZERO,OVRCD                                                  
          READKP    NHIETHA1;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHETH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    NHIETHA1;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA            
          RETURN
.
WRNHETH1  RESET     KEY5                                                        
          WRITE     NHIETHA1,KEY5;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA       
          RETURN
.
DENHETH1  RESET     KEY5                                                        
          DELETE    NHIETHA1,KEY5                                               
          RETURN
.
RSNHETH2  RESET     KEY6                                                        
          READ      NHIETHA2,KEY6;;                                             
          RETURN
.
RANHETH2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      NHIETHA2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHETH2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      NHIETHA2,KEY6;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHETH2  MOVE      ZERO,OVRCD                                                  
          READKS    NHIETHA2;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHETH2  MOVE      ZERO,OVRCD                                                  
          READKP    NHIETHA2;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHETH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    NHIETHA2;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA            
          RETURN
.
WRNHETH2  RESET     KEY6                                                        
          WRITE     NHIETHA2,KEY6;NHETECD,NHETDES,NHETIBA,NHETLEV,NHETSPA       
          RETURN
.
DENHETH2  RESET     KEY6                                                        
          DELETE    NHIETHA2,KEY6                                               
          RETURN
.
