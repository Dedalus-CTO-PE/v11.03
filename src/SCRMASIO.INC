.
. SCRMASIO    
. --------
. Filename     : scrmasaf.dat
.
RSSCMA1   RESET     KEY10                                                       
          READ      SCRMASA1,KEY10;;                                            
          RETURN
.
RASCMA1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SCRMASA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCMA1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SCRMASA1,KEY10;SCMAPID,SCMASID,SCMADES,SCMATOP,SCMALEF:     
                        SCMABOT,SCMARIG,SCMACBF,SCMACAF,SCMATYP,SCMASEX:        
                        SCMAFSC,SCMACLR,SCMAFPR,SCMASPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCMA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRMASA1;SCMAPID,SCMASID,SCMADES,SCMATOP,SCMALEF:           
                        SCMABOT,SCMARIG,SCMACBF,SCMACAF,SCMATYP,SCMASEX:        
                        SCMAFSC,SCMACLR,SCMAFPR,SCMASPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCMA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRMASA1;SCMAPID,SCMASID,SCMADES,SCMATOP,SCMALEF:           
                        SCMABOT,SCMARIG,SCMACBF,SCMACAF,SCMATYP,SCMASEX:        
                        SCMAFSC,SCMACLR,SCMAFPR,SCMASPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCMA1                                                                         
          UPDATE    SCRMASA1;SCMAPID,SCMASID,SCMADES,SCMATOP,SCMALEF:           
                        SCMABOT,SCMARIG,SCMACBF,SCMACAF,SCMATYP,SCMASEX:        
                        SCMAFSC,SCMACLR,SCMAFPR,SCMASPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSCMA1   RESET     KEY10                                                       
          WRITE     SCRMASA1,KEY10;SCMAPID,SCMASID,SCMADES,SCMATOP,SCMALEF:     
                        SCMABOT,SCMARIG,SCMACBF,SCMACAF,SCMATYP,SCMASEX:        
                        SCMAFSC,SCMACLR,SCMAFPR,SCMASPA                         
          RETURN
.
DESCMA1   RESET     KEY10                                                       
          DELETE    SCRMASA1,KEY10                                              
          RETURN
.
RLSCMA1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     SCRMASA1,KEY10;SCMAPID,SCMASID,SCMADES,SCMATOP,SCMALEF:     
                        SCMABOT,SCMARIG,SCMACBF,SCMACAF,SCMATYP,SCMASEX:        
                        SCMAFSC,SCMACLR,SCMAFPR,SCMASPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSCMA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SCRMASA1;SCMAPID,SCMASID,SCMADES,SCMATOP,SCMALEF:           
                        SCMABOT,SCMARIG,SCMACBF,SCMACAF,SCMATYP,SCMASEX:        
                        SCMAFSC,SCMACLR,SCMAFPR,SCMASPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSCMA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SCRMASA1;SCMAPID,SCMASID,SCMADES,SCMATOP,SCMALEF:           
                        SCMABOT,SCMARIG,SCMACBF,SCMACAF,SCMATYP,SCMASEX:        
                        SCMAFSC,SCMACLR,SCMAFPR,SCMASPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSCMA1   RESET     KEY10                                                       
          UNLOCK    SCRMASA1                                                    
          RETURN
.
