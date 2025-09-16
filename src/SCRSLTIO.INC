.
. SCRSLTIO    
. --------
. Filename     : scrsltaf.dat
.
RSSCSL1   RESET     KEY13                                                       
          READ      SCRSLTA1,KEY13;;                                            
          RETURN
.
RASCSL1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SCRSLTA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCSL1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SCRSLTA1,KEY13;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:     
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCSL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRSLTA1;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:           
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCSL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRSLTA1;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:           
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCSL1                                                                         
          UPDATE    SCRSLTA1;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:           
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          RETURN
.
WRSCSL1   RESET     KEY13                                                       
          WRITE     SCRSLTA1,KEY13;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:     
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          RETURN
.
DESCSL1   RESET     KEY13                                                       
          DELETE    SCRSLTA1,KEY13                                              
          RETURN
.
RSSCSL2   RESET     KEY18                                                       
          READ      SCRSLTA2,KEY18;;                                            
          RETURN
.
RASCSL2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SCRSLTA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCSL2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SCRSLTA2,KEY18;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:     
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCSL2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRSLTA2;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:           
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCSL2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRSLTA2;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:           
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCSL2                                                                         
          UPDATE    SCRSLTA2;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:           
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          RETURN
.
WRSCSL2   RESET     KEY18                                                       
          WRITE     SCRSLTA2,KEY18;SCSLPID,SCSLSID,SCSLSEL,SCSLITM,SCSLROW:     
                        SCSLCOL,SCSLDES,SCSLSEC,SCSLSPA                         
          RETURN
.
DESCSL2   RESET     KEY18                                                       
          DELETE    SCRSLTA2,KEY18                                              
          RETURN
.
