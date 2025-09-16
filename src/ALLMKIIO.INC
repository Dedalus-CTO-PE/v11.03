.
. ALLMKIIO    
. --------
. Filename     : allmkiaf.dat
.
RSALMKI1  RESET     KEY80                                                       
          READ      ALLMKIA1,KEY80;;                                            
          RETURN
.
RAALMKI1  RESET     KEY80                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMKIA1,KEY80;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALMKI1  RESET     KEY80                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMKIA1,KEY80;ALMKCODE,ALMKKWRD,ALMKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALMKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLMKIA1;ALMKCODE,ALMKKWRD,ALMKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALMKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLMKIA1;ALMKCODE,ALMKKWRD,ALMKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALMKI1                                                                        
          UPDATE    ALLMKIA1;ALMKCODE,ALMKKWRD,ALMKSPAR                         
          RETURN
.
WRALMKI1  RESET     KEY80                                                       
          WRITE     ALLMKIA1,KEY80;ALMKCODE,ALMKKWRD,ALMKSPAR                   
          RETURN
.
DEALMKI1  RESET     KEY80                                                       
          DELETE    ALLMKIA1,KEY80                                              
          RETURN
.
RSALMKI2  RESET     KEY80                                                       
          READ      ALLMKIA2,KEY80;;                                            
          RETURN
.
RAALMKI2  RESET     KEY80                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMKIA2,KEY80;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALMKI2  RESET     KEY80                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMKIA2,KEY80;ALMKCODE,ALMKKWRD,ALMKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALMKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLMKIA2;ALMKCODE,ALMKKWRD,ALMKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALMKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLMKIA2;ALMKCODE,ALMKKWRD,ALMKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALMKI2                                                                        
          UPDATE    ALLMKIA2;ALMKCODE,ALMKKWRD,ALMKSPAR                         
          RETURN
.
WRALMKI2  RESET     KEY80                                                       
          WRITE     ALLMKIA2,KEY80;ALMKCODE,ALMKKWRD,ALMKSPAR                   
          RETURN
.
DEALMKI2  RESET     KEY80                                                       
          DELETE    ALLMKIA2,KEY80                                              
          RETURN
.
