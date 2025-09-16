.
. FMSNRCIO    
. --------
. Filename     : fmsnrcaf.dat
.
RSFMNC1   RESET     KEY32                                                       
          READ      FMSNRCA1,KEY32;;                                            
          RETURN
.
RAFMNC1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRCA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNC1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRCA1,KEY32;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRCA1;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRCA1;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNC1                                                                         
          UPDATE    FMSNRCA1;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR       
          RETURN
.
WRFMNC1   RESET     KEY32                                                       
          WRITE     FMSNRCA1,KEY32;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR 
          RETURN
.
DEFMNC1   RESET     KEY32                                                       
          DELETE    FMSNRCA1,KEY32                                              
          RETURN
.
RSFMNC2   RESET     KEY27                                                       
          READ      FMSNRCA2,KEY27;;                                            
          RETURN
.
RAFMNC2   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRCA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNC2   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRCA2,KEY27;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRCA2;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRCA2;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNC2                                                                         
          UPDATE    FMSNRCA2;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR       
          RETURN
.
WRFMNC2   RESET     KEY27                                                       
          WRITE     FMSNRCA2,KEY27;FMNCCODE,FMNCTCOD,FMNCASEQ,FMNCSCOD,FMNCSPAR 
          RETURN
.
DEFMNC2   RESET     KEY27                                                       
          DELETE    FMSNRCA2,KEY27                                              
          RETURN
.
