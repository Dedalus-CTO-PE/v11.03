.
. LEGALTIO    
. --------
. Filename     : legaltaf.dat
.
RSLGALT1  RESET     KEY32                                                       
          READ      LEGALTA1,KEY32;;                                            
          RETURN
.
RALGALT1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      LEGALTA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGALT1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      LEGALTA1,KEY32;LGATURNO,LGATADAT,LGATATIM,LGATEVNO,LGATTYPE:
                        LGATSTAT,LGATDDRG,LGATDDAT,LGATDTIM,LGATHOSC,LGATATDR:  
                        LGATPRPF,LGATSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKLGALT1  MOVE      ZERO,OVRCD
          READKS    LEGALTA1;LGATURNO,LGATADAT,LGATATIM,LGATEVNO,LGATTYPE:      
                        LGATSTAT,LGATDDRG,LGATDDAT,LGATDTIM,LGATHOSC,LGATATDR:  
                        LGATPRPF,LGATSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPLGALT1  MOVE      ZERO,OVRCD
          READKP    LEGALTA1;LGATURNO,LGATADAT,LGATATIM,LGATEVNO,LGATTYPE:      
                        LGATSTAT,LGATDDRG,LGATDDAT,LGATDTIM,LGATHOSC,LGATATDR:  
                        LGATPRPF,LGATSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPLGALT1  UPDATE    LEGALTA1;LGATURNO,LGATADAT,LGATATIM,LGATEVNO,LGATTYPE:      
                        LGATSTAT,LGATDDRG,LGATDDAT,LGATDTIM,LGATHOSC,LGATATDR:  
                        LGATPRPF,LGATSPAR                                       
          RETURN
.
WRLGALT1  RESET     KEY32                                                       
          WRITE     LEGALTA1,KEY32;LGATURNO,LGATADAT,LGATATIM,LGATEVNO,LGATTYPE:
                        LGATSTAT,LGATDDRG,LGATDDAT,LGATDTIM,LGATHOSC,LGATATDR:  
                        LGATPRPF,LGATSPAR                                       
          RETURN
.
DELGALT1  RESET     KEY32                                                       
          DELETE    LEGALTA1,KEY32                                              
          RETURN
.
