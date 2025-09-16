.
. WEBRSHIO    
. --------
. Filename     : webrshaf.dat
.
RSWBRS1   RESET     KEY8                                                        
          READ      WEBRSHA1,KEY8;;                                             
          RETURN
.
RAWBRS1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBRSHA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRS1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBRSHA1,KEY8;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:      
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBRSHA1;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBRSHA1;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRS1                                                                         
          UPDATE    WEBRSHA1;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRS1   RESET     KEY8                                                        
          WRITE     WEBRSHA1,KEY8;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:      
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          RETURN
.
DEWBRS1   RESET     KEY8                                                        
          DELETE    WEBRSHA1,KEY8                                               
          RETURN
.
RLWBRS1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     WEBRSHA1,KEY8;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:      
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRS1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBRSHA1;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRS1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBRSHA1;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRS1   RESET     KEY8                                                        
          UNLOCK    WEBRSHA1                                                    
          RETURN
.
RSWBRS2   RESET     KEY25                                                       
          READ      WEBRSHA2,KEY25;;                                            
          RETURN
.
RAWBRS2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRSHA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRS2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRSHA2,KEY25;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:     
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBRSHA2;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBRSHA2;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRS2                                                                         
          UPDATE    WEBRSHA2;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRS2   RESET     KEY25                                                       
          WRITE     WEBRSHA2,KEY25;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:     
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          RETURN
.
DEWBRS2   RESET     KEY25                                                       
          DELETE    WEBRSHA2,KEY25                                              
          RETURN
.
RLWBRS2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     WEBRSHA2,KEY25;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:     
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRS2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBRSHA2;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRS2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBRSHA2;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRS2   RESET     KEY25                                                       
          UNLOCK    WEBRSHA2                                                    
          RETURN
.
RSWBRS3   RESET     KEY18                                                       
          READ      WEBRSHA3,KEY18;;                                            
          RETURN
.
RAWBRS3   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRSHA3,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRS3   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRSHA3,KEY18;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:     
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRS3                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBRSHA3;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRS3                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBRSHA3;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRS3                                                                         
          UPDATE    WEBRSHA3;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRS3   RESET     KEY18                                                       
          WRITE     WEBRSHA3,KEY18;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:     
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          RETURN
.
DEWBRS3   RESET     KEY18                                                       
          DELETE    WEBRSHA3,KEY18                                              
          RETURN
.
RLWBRS3   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     WEBRSHA3,KEY18;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:     
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRS3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBRSHA3;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRS3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBRSHA3;WBRSFNO,WBRSSTA,WBRSSDT,WBRSSTM,WBRSPRG:           
                        WBRSDES,WBRSUSR,WBRSRDT,WBRSRTM,WBRSBDT,WBRSBTM:        
                        WBRSBFL,WBRSTYP,WBRSERC,WBRSPRC,WBRSUTM,WBRSUR1:        
                        WBRSUR2,WBRSUD1,WBRSUD2,WBRSUY1,WBRSUY2,WBRSSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRS3   RESET     KEY18                                                       
          UNLOCK    WEBRSHA3                                                    
          RETURN
.
