.
. OUTPRCIO    
. --------
. Filename     : outprcaf.dat
.
RSOTPRC1  RESET     KEY8                                                        
          READ      OUTPRCA1,KEY8;;                                             
          RETURN
.
RAOTPRC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OUTPRCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTPRC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OUTPRCA1,KEY8;OTPROUTN,OTPRCODE,OTPRDESC,OTPRCOD2,OTPRDES2: 
                        OTPRCOD3,OTPRDES3,OTPRCOD4,OTPRDES4,OTPRCOD5,OTPRDES5:  
                        OTPRPRB1,OTPRPRB2,OTPRPRB3,OTPRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTPRC1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTPRCA1;OTPROUTN,OTPRCODE,OTPRDESC,OTPRCOD2,OTPRDES2:      
                        OTPRCOD3,OTPRDES3,OTPRCOD4,OTPRDES4,OTPRCOD5,OTPRDES5:  
                        OTPRPRB1,OTPRPRB2,OTPRPRB3,OTPRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTPRC1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTPRCA1;OTPROUTN,OTPRCODE,OTPRDESC,OTPRCOD2,OTPRDES2:      
                        OTPRCOD3,OTPRDES3,OTPRCOD4,OTPRDES4,OTPRCOD5,OTPRDES5:  
                        OTPRPRB1,OTPRPRB2,OTPRPRB3,OTPRSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTPRC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTPRCA1;OTPROUTN,OTPRCODE,OTPRDESC,OTPRCOD2,OTPRDES2:      
                        OTPRCOD3,OTPRDES3,OTPRCOD4,OTPRDES4,OTPRCOD5,OTPRDES5:  
                        OTPRPRB1,OTPRPRB2,OTPRPRB3,OTPRSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTPRC1  RESET     KEY8                                                        
          WRITE     OUTPRCA1,KEY8;OTPROUTN,OTPRCODE,OTPRDESC,OTPRCOD2,OTPRDES2: 
                        OTPRCOD3,OTPRDES3,OTPRCOD4,OTPRDES4,OTPRCOD5,OTPRDES5:  
                        OTPRPRB1,OTPRPRB2,OTPRPRB3,OTPRSPAR                     
          RETURN
.
DEOTPRC1  RESET     KEY8                                                        
          DELETE    OUTPRCA1,KEY8                                               
          RETURN
.
RLOTPRC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     OUTPRCA1,KEY8;OTPROUTN,OTPRCODE,OTPRDESC,OTPRCOD2,OTPRDES2: 
                        OTPRCOD3,OTPRDES3,OTPRCOD4,OTPRDES4,OTPRCOD5,OTPRDES5:  
                        OTPRPRB1,OTPRPRB2,OTPRPRB3,OTPRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTPRC1  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTPRCA1;OTPROUTN,OTPRCODE,OTPRDESC,OTPRCOD2,OTPRDES2:      
                        OTPRCOD3,OTPRDES3,OTPRCOD4,OTPRDES4,OTPRCOD5,OTPRDES5:  
                        OTPRPRB1,OTPRPRB2,OTPRPRB3,OTPRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTPRC1  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTPRCA1;OTPROUTN,OTPRCODE,OTPRDESC,OTPRCOD2,OTPRDES2:      
                        OTPRCOD3,OTPRDES3,OTPRCOD4,OTPRDES4,OTPRCOD5,OTPRDES5:  
                        OTPRPRB1,OTPRPRB2,OTPRPRB3,OTPRSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTPRC1  RESET     KEY8                                                        
          UNLOCK    OUTPRCA1                                                    
          RETURN
.
