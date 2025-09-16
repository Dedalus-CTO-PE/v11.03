.
. APSNKIIO    
. --------
. Filename     : apsnkiaf.dat
.
RSAPNK1   RESET     KEY23                                                       
          READ      APSNKIA1,KEY23;;                                            
          RETURN
.
RAAPNK1   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      APSNKIA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPNK1   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      APSNKIA1,KEY23;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPNK1   MOVE      ZERO,OVRCD
          READKS    APSNKIA1;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPNK1   MOVE      ZERO,OVRCD
          READKP    APSNKIA1;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPNK1   UPDATE    APSNKIA1;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA                  
          RETURN
.
WRAPNK1   RESET     KEY23                                                       
          WRITE     APSNKIA1,KEY23;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA            
          RETURN
.
DEAPNK1   RESET     KEY23                                                       
          DELETE    APSNKIA1,KEY23                                              
          RETURN
.
RSAPNK2   RESET     KEY23                                                       
          READ      APSNKIA2,KEY23;;                                            
          RETURN
.
RAAPNK2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      APSNKIA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPNK2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      APSNKIA2,KEY23;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPNK2   MOVE      ZERO,OVRCD
          READKS    APSNKIA2;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPNK2   MOVE      ZERO,OVRCD
          READKP    APSNKIA2;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPNK2   UPDATE    APSNKIA2;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA                  
          RETURN
.
WRAPNK2   RESET     KEY23                                                       
          WRITE     APSNKIA2,KEY23;APNKBATC,APNKUNIQ,APNKKWD,APNKSPA            
          RETURN
.
DEAPNK2   RESET     KEY23                                                       
          DELETE    APSNKIA2,KEY23                                              
          RETURN
.
