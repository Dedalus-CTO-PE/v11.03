.
. OUTCDCIO    
. --------
. Filename     : outcdcaf.dat
.
RSOTCDC1  RESET     KEY21                                                       
          READ      OUTCDCA1,KEY21;;                                            
          RETURN
.
RAOTCDC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCDCA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTCDC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCDCA1,KEY21;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD: 
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTCDC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTCDCA1;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTCDC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTCDCA1;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTCDC1                                                                        
          UPDATE    OUTCDCA1;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTCDC1  RESET     KEY21                                                       
          WRITE     OUTCDCA1,KEY21;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD: 
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          RETURN
.
DEOTCDC1  RESET     KEY21                                                       
          DELETE    OUTCDCA1,KEY21                                              
          RETURN
.
RLOTCDC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     OUTCDCA1,KEY21;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD: 
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTCDC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTCDCA1;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTCDC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTCDCA1;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTCDC1  RESET     KEY21                                                       
          UNLOCK    OUTCDCA1                                                    
          RETURN
.
RSOTCDC2  RESET     KEY91                                                       
          READ      OUTCDCA2,KEY91;;                                            
          RETURN
.
RAOTCDC2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCDCA2,KEY91;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTCDC2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCDCA2,KEY91;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD: 
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTCDC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTCDCA2;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTCDC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTCDCA2;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTCDC2                                                                        
          UPDATE    OUTCDCA2;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTCDC2  RESET     KEY91                                                       
          WRITE     OUTCDCA2,KEY91;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD: 
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          RETURN
.
DEOTCDC2  RESET     KEY91                                                       
          DELETE    OUTCDCA2,KEY91                                              
          RETURN
.
RLOTCDC2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READL     OUTCDCA2,KEY91;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD: 
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTCDC2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTCDCA2;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTCDC2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTCDCA2;OTCDSITE,OTCDCTYP,OTCDDIAG,OTCDDESC,OTCDICD:       
                        OTCDACTV,OTCDCDAT,OTCDCTIM,OTCDCUID,OTCDUDAT,OTCDUTIM:  
                        OTCDUUID,OTCDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTCDC2  RESET     KEY91                                                       
          UNLOCK    OUTCDCA2                                                    
          RETURN
.
