.
. FMSNRFIO    
. --------
. Filename     : fmsnrfaf.dat
.
RSFMNF1   RESET     KEY32                                                       
          READ      FMSNRFA1,KEY32;;                                            
          RETURN
.
RAFMNF1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRFA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNF1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRFA1,KEY32;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRFA1;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRFA1;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNF1                                                                         
          UPDATE    FMSNRFA1;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR       
          RETURN
.
WRFMNF1   RESET     KEY32                                                       
          WRITE     FMSNRFA1,KEY32;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR 
          RETURN
.
DEFMNF1   RESET     KEY32                                                       
          DELETE    FMSNRFA1,KEY32                                              
          RETURN
.
RSFMNF2   RESET     KEY27                                                       
          READ      FMSNRFA2,KEY27;;                                            
          RETURN
.
RAFMNF2   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRFA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNF2   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRFA2,KEY27;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNF2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRFA2;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNF2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRFA2;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNF2                                                                         
          UPDATE    FMSNRFA2;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR       
          RETURN
.
WRFMNF2   RESET     KEY27                                                       
          WRITE     FMSNRFA2,KEY27;FMNFCODE,FMNFTCOD,FMNFASEQ,FMNFSCOD,FMNFSPAR 
          RETURN
.
DEFMNF2   RESET     KEY27                                                       
          DELETE    FMSNRFA2,KEY27                                              
          RETURN
.
