.
. FMSNRLIO    
. --------
. Filename     : fmsnrlaf.dat
.
RSFMNL1   RESET     KEY7                                                        
          READ      FMSNRLA1,KEY7;;                                             
          RETURN
.
RAFMNL1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRLA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNL1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      FMSNRLA1,KEY7;FMNLCOD,FMNLTYP,FMNLUNQ,FMNLLIN,FMNLSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRLA1;FMNLCOD,FMNLTYP,FMNLUNQ,FMNLLIN,FMNLSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRLA1;FMNLCOD,FMNLTYP,FMNLUNQ,FMNLLIN,FMNLSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNL1                                                                         
          UPDATE    FMSNRLA1;FMNLCOD,FMNLTYP,FMNLUNQ,FMNLLIN,FMNLSPA            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMNL1   RESET     KEY7                                                        
          WRITE     FMSNRLA1,KEY7;FMNLCOD,FMNLTYP,FMNLUNQ,FMNLLIN,FMNLSPA       
          RETURN
.
DEFMNL1   RESET     KEY7                                                        
          DELETE    FMSNRLA1,KEY7                                               
          RETURN
.
RLFMNL1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     FMSNRLA1,KEY7;FMNLCOD,FMNLTYP,FMNLUNQ,FMNLLIN,FMNLSPA       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMNL1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSNRLA1;FMNLCOD,FMNLTYP,FMNLUNQ,FMNLLIN,FMNLSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMNL1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSNRLA1;FMNLCOD,FMNLTYP,FMNLUNQ,FMNLLIN,FMNLSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMNL1   RESET     KEY7                                                        
          UNLOCK    FMSNRLA1                                                    
          RETURN
.
