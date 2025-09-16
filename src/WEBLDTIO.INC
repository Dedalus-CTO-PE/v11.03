.
. WEBLDTIO    
. --------
. Filename     : webldtaf.dat
.
RSWBLD1   RESET     KEY14                                                       
          READ      WEBLDTA1,KEY14;;                                            
          RETURN
.
RAWBLD1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLDTA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBLD1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLDTA1,KEY14;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBLD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBLDTA1;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBLD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBLDTA1;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBLD1                                                                         
          UPDATE    WEBLDTA1;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBLD1   RESET     KEY14                                                       
          WRITE     WEBLDTA1,KEY14;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          RETURN
.
DEWBLD1   RESET     KEY14                                                       
          DELETE    WEBLDTA1,KEY14                                              
          RETURN
.
RLWBLD1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     WEBLDTA1,KEY14;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBLD1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBLDTA1;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBLD1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBLDTA1;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBLD1   RESET     KEY14                                                       
          UNLOCK    WEBLDTA1                                                    
          RETURN
.
RSWBLD2   RESET     KEY64                                                       
          READ      WEBLDTA2,KEY64;;                                            
          RETURN
.
RAWBLD2   RESET     KEY64                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLDTA2,KEY64;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBLD2   RESET     KEY64                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLDTA2,KEY64;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBLD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBLDTA2;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBLD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBLDTA2;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBLD2                                                                         
          UPDATE    WEBLDTA2;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBLD2   RESET     KEY64                                                       
          WRITE     WEBLDTA2,KEY64;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          RETURN
.
DEWBLD2   RESET     KEY64                                                       
          DELETE    WEBLDTA2,KEY64                                              
          RETURN
.
RLWBLD2   RESET     KEY64                                                       
          MOVE      ZERO,OVRCD
          READL     WEBLDTA2,KEY64;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBLD2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBLDTA2;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBLD2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBLDTA2;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBLD2   RESET     KEY64                                                       
          UNLOCK    WEBLDTA2                                                    
          RETURN
.
RSWBLD3   RESET     KEY24                                                       
          READ      WEBLDTA3,KEY24;;                                            
          RETURN
.
RAWBLD3   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLDTA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBLD3   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLDTA3,KEY24;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBLD3                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBLDTA3;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBLD3                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBLDTA3;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBLD3                                                                         
          UPDATE    WEBLDTA3;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBLD3   RESET     KEY24                                                       
          WRITE     WEBLDTA3,KEY24;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          RETURN
.
DEWBLD3   RESET     KEY24                                                       
          DELETE    WEBLDTA3,KEY24                                              
          RETURN
.
RLWBLD3   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     WEBLDTA3,KEY24;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBLD3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBLDTA3;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBLD3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBLDTA3;WBLDLKID,WBLDPAGE,WBLDUQID,WBLDCODE,WBLDDESC:      
                        WBLDTYPE,WBLDLKPG,WBLDACTV,WBLDSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBLD3   RESET     KEY24                                                       
          UNLOCK    WEBLDTA3                                                    
          RETURN
.
