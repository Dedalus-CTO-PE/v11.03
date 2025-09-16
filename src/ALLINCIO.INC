.
. ALLINCIO    
. --------
. Filename     : allincaf.dat
.
RSALINC1  RESET     KEY12                                                       
          READ      ALLINCA1,KEY12;;                                            
          RETURN
.
RAALINC1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLINCA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALINC1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLINCA1,KEY12;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALINC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLINCA1;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:      
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALINC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLINCA1;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:      
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALINC1                                                                        
          UPDATE    ALLINCA1;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:      
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          RETURN
.
WRALINC1  RESET     KEY12                                                       
          WRITE     ALLINCA1,KEY12;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          RETURN
.
DEALINC1  RESET     KEY12                                                       
          DELETE    ALLINCA1,KEY12                                              
          RETURN
.
RSALINC2  RESET     KEY62                                                       
          READ      ALLINCA2,KEY62;;                                            
          RETURN
.
RAALINC2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      ALLINCA2,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALINC2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      ALLINCA2,KEY62;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALINC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLINCA2;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:      
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALINC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLINCA2;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:      
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALINC2                                                                        
          UPDATE    ALLINCA2;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:      
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          RETURN
.
WRALINC2  RESET     KEY62                                                       
          WRITE     ALLINCA2,KEY62;ALINDEPT,ALINCODE,ALINDESC,ALINACTV,ALINCDAT:
                        ALINCTIM,ALINCUID,ALINUDAT,ALINUTIM,ALINUUID,ALINSPAR   
          RETURN
.
DEALINC2  RESET     KEY62                                                       
          DELETE    ALLINCA2,KEY62                                              
          RETURN
.
