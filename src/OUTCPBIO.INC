.
. OUTCPBIO    
. --------
. Filename     : outcpbaf.dat
.
RSOTCPB1  RESET     KEY21                                                       
          READ      OUTCPBA1,KEY21;;                                            
          RETURN
.
RAOTCPB1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCPBA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTCPB1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCPBA1,KEY21;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTCPB1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTCPBA1;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTCPB1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTCPBA1;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTCPB1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTCPBA1;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTCPB1  RESET     KEY21                                                       
          WRITE     OUTCPBA1,KEY21;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          RETURN
.
DEOTCPB1  RESET     KEY21                                                       
          DELETE    OUTCPBA1,KEY21                                              
          RETURN
.
RLOTCPB1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     OUTCPBA1,KEY21;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTCPB1  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTCPBA1;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTCPB1  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTCPBA1;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTCPB1  RESET     KEY21                                                       
          UNLOCK    OUTCPBA1                                                    
          RETURN
.
RSOTCPB2  RESET     KEY91                                                       
          READ      OUTCPBA2,KEY91;;                                            
          RETURN
.
RAOTCPB2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCPBA2,KEY91;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTCPB2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCPBA2,KEY91;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTCPB2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTCPBA2;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTCPB2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTCPBA2;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTCPB2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTCPBA2;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTCPB2  RESET     KEY91                                                       
          WRITE     OUTCPBA2,KEY91;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          RETURN
.
DEOTCPB2  RESET     KEY91                                                       
          DELETE    OUTCPBA2,KEY91                                              
          RETURN
.
RLOTCPB2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READL     OUTCPBA2,KEY91;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTCPB2  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTCPBA2;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTCPB2  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTCPBA2;OTPBSITE,OTPBCTYP,OTPBPROB,OTPBDESC,OTPBICDC:      
                        OTPBACTV,OTPBCDAT,OTPBCTIM,OTPBCUID,OTPBUDAT,OTPBUTIM:  
                        OTPBUUID,OTPBSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTCPB2  RESET     KEY91                                                       
          UNLOCK    OUTCPBA2                                                    
          RETURN
.
