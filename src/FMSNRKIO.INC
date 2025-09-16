.
. FMSNRKIO    
. --------
. Filename     : fmsnrkaf.dat
.
RSFMNK1   RESET     KEY27                                                       
          READ      FMSNRKA1,KEY27;;                                            
          RETURN
.
RAFMNK1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRKA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNK1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRKA1,KEY27;FMNKREPT,FMNKTACC,FMNKSACC,FMNKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRKA1;FMNKREPT,FMNKTACC,FMNKSACC,FMNKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRKA1;FMNKREPT,FMNKTACC,FMNKSACC,FMNKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNK1                                                                         
          UPDATE    FMSNRKA1;FMNKREPT,FMNKTACC,FMNKSACC,FMNKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMNK1   RESET     KEY27                                                       
          WRITE     FMSNRKA1,KEY27;FMNKREPT,FMNKTACC,FMNKSACC,FMNKSPAR          
          RETURN
.
DEFMNK1   RESET     KEY27                                                       
          DELETE    FMSNRKA1,KEY27                                              
          RETURN
.
RLFMNK1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     FMSNRKA1,KEY27;FMNKREPT,FMNKTACC,FMNKSACC,FMNKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMNK1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSNRKA1;FMNKREPT,FMNKTACC,FMNKSACC,FMNKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMNK1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSNRKA1;FMNKREPT,FMNKTACC,FMNKSACC,FMNKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMNK1   RESET     KEY27                                                       
          UNLOCK    FMSNRKA1                                                    
          RETURN
.
