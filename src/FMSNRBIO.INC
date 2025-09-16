.
. FMSNRBIO    
. --------
. Filename     : fmsnrbaf.dat
.
RSFMNB1   RESET     KEY15                                                       
          READ      FMSNRBA1,KEY15;;                                            
          RETURN
.
RAFMNB1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRBA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNB1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRBA1,KEY15;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:
                        FMNBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRBA1;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:      
                        FMNBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRBA1;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:      
                        FMNBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNB1                                                                         
          UPDATE    FMSNRBA1;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:      
                        FMNBSPAR                                                
          RETURN
.
WRFMNB1   RESET     KEY15                                                       
          WRITE     FMSNRBA1,KEY15;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:
                        FMNBSPAR                                                
          RETURN
.
DEFMNB1   RESET     KEY15                                                       
          DELETE    FMSNRBA1,KEY15                                              
          RETURN
.
RSFMNB2   RESET     KEY18                                                       
          READ      FMSNRBA2,KEY18;;                                            
          RETURN
.
RAFMNB2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRBA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNB2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRBA2,KEY18;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:
                        FMNBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNB2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRBA2;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:      
                        FMNBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNB2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRBA2;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:      
                        FMNBSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNB2                                                                         
          UPDATE    FMSNRBA2;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:      
                        FMNBSPAR                                                
          RETURN
.
WRFMNB2   RESET     KEY18                                                       
          WRITE     FMSNRBA2,KEY18;FMNBCODE,FMNBTCOD,FMNBTLEV,FMNBDESC,FMNBPRTC:
                        FMNBSPAR                                                
          RETURN
.
DEFMNB2   RESET     KEY18                                                       
          DELETE    FMSNRBA2,KEY18                                              
          RETURN
.
