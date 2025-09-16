.
. FMSICTIO    
. --------
. Filename     : fmsictaf.dat
.
RSFMIC1   RESET     KEY18                                                       
          READ      FMSICTA1,KEY18;;                                            
          RETURN
.
RAFMIC1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      FMSICTA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMIC1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      FMSICTA1,KEY18;FMICICD,FMICTTY,FMICTFL,FMICTFA,FMICTTL:     
                        FMICTTA,FMICSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMIC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSICTA1;FMICICD,FMICTTY,FMICTFL,FMICTFA,FMICTTL:           
                        FMICTTA,FMICSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMIC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSICTA1;FMICICD,FMICTTY,FMICTFL,FMICTFA,FMICTTL:           
                        FMICTTA,FMICSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMIC1                                                                         
          UPDATE    FMSICTA1;FMICICD,FMICTTY,FMICTFL,FMICTFA,FMICTTL:           
                        FMICTTA,FMICSPA                                         
          RETURN
.
WRFMIC1   RESET     KEY18                                                       
          WRITE     FMSICTA1,KEY18;FMICICD,FMICTTY,FMICTFL,FMICTFA,FMICTTL:     
                        FMICTTA,FMICSPA                                         
          RETURN
.
DEFMIC1   RESET     KEY18                                                       
          DELETE    FMSICTA1,KEY18                                              
          RETURN
.
