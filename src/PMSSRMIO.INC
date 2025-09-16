.
. PMSSRMIO    
. --------
. Filename     : pmssrmaf.dat
.
RSPMSRM1  RESET     KEY60                                                       
          READ      PMSSRMA1,KEY60;;                                            
          RETURN
.
RAPMSRM1  RESET     KEY60                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRMA1,KEY60;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSRM1  RESET     KEY60                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRMA1,KEY60;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSRM1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSRMA1;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSRM1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSRMA1;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSRM1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSRMA1;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSRM1  RESET     KEY60                                                       
          WRITE     PMSSRMA1,KEY60;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          RETURN
.
DEPMSRM1  RESET     KEY60                                                       
          DELETE    PMSSRMA1,KEY60                                              
          RETURN
.
RLPMSRM1  RESET     KEY60                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSRMA1,KEY60;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSRM1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSRMA1;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSRM1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSRMA1;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSRM1  RESET     KEY60                                                       
          UNLOCK    PMSSRMA1                                                    
          RETURN
.
RSPMSRM2  RESET     KEY60                                                       
          READ      PMSSRMA2,KEY60;;                                            
          RETURN
.
RAPMSRM2  RESET     KEY60                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRMA2,KEY60;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSRM2  RESET     KEY60                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSRMA2,KEY60;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSRM2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSRMA2;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSRM2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSRMA2;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSRM2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSRMA2;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSRM2  RESET     KEY60                                                       
          WRITE     PMSSRMA2,KEY60;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          RETURN
.
DEPMSRM2  RESET     KEY60                                                       
          DELETE    PMSSRMA2,KEY60                                              
          RETURN
.
RLPMSRM2  RESET     KEY60                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSRMA2,KEY60;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSRM2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSRMA2;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSRM2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSRMA2;PMSRMVAR,PMSRINBS,PMSRMVAL,PMSRACTV,PMSRWEBC:      
                        PMSRCDTE,PMSRCTIM,PMSRWEBU,PMSRUDTE,PMSRUTIM,PMSRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSRM2  RESET     KEY60                                                       
          UNLOCK    PMSSRMA2                                                    
          RETURN
.
