.
. FMSNREIO    
. --------
. Filename     : fmsnreaf.dat
.
RSFMNE1   RESET     KEY15                                                       
          READ      FMSNREA1,KEY15;;                                            
          RETURN
.
RAFMNE1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNREA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNE1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNREA1,KEY15;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:
                        FMNESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNREA1;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:      
                        FMNESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNREA1;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:      
                        FMNESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNE1                                                                         
          UPDATE    FMSNREA1;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:      
                        FMNESPAR                                                
          RETURN
.
WRFMNE1   RESET     KEY15                                                       
          WRITE     FMSNREA1,KEY15;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:
                        FMNESPAR                                                
          RETURN
.
DEFMNE1   RESET     KEY15                                                       
          DELETE    FMSNREA1,KEY15                                              
          RETURN
.
RSFMNE2   RESET     KEY18                                                       
          READ      FMSNREA2,KEY18;;                                            
          RETURN
.
RAFMNE2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNREA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNE2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNREA2,KEY18;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:
                        FMNESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNE2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNREA2;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:      
                        FMNESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNE2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNREA2;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:      
                        FMNESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNE2                                                                         
          UPDATE    FMSNREA2;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:      
                        FMNESPAR                                                
          RETURN
.
WRFMNE2   RESET     KEY18                                                       
          WRITE     FMSNREA2,KEY18;FMNECODE,FMNETCOD,FMNETLEV,FMNEDESC,FMNEPRTC:
                        FMNESPAR                                                
          RETURN
.
DEFMNE2   RESET     KEY18                                                       
          DELETE    FMSNREA2,KEY18                                              
          RETURN
.
