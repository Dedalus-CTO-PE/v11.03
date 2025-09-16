.
. FMSNRIIO    
. --------
. Filename     : fmsnriaf.dat
.
RSFMNI1   RESET     KEY16                                                       
          READ      FMSNRIA1,KEY16;;                                            
          RETURN
.
RAFMNI1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRIA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNI1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRIA1,KEY16;FMNIREPT,FMNIACCT,FMNITYPE,FMNIPEBR,FMNIPECE:
                        FMNIPE01,FMNIPE02,FMNIPE03,FMNIPE04,FMNIPE05,FMNIPE06:  
                        FMNIPE07,FMNIPE08,FMNIPE09,FMNIPE10,FMNIPE11,FMNIPE12:  
                        FMNIPE13,FMNISPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRIA1;FMNIREPT,FMNIACCT,FMNITYPE,FMNIPEBR,FMNIPECE:      
                        FMNIPE01,FMNIPE02,FMNIPE03,FMNIPE04,FMNIPE05,FMNIPE06:  
                        FMNIPE07,FMNIPE08,FMNIPE09,FMNIPE10,FMNIPE11,FMNIPE12:  
                        FMNIPE13,FMNISPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRIA1;FMNIREPT,FMNIACCT,FMNITYPE,FMNIPEBR,FMNIPECE:      
                        FMNIPE01,FMNIPE02,FMNIPE03,FMNIPE04,FMNIPE05,FMNIPE06:  
                        FMNIPE07,FMNIPE08,FMNIPE09,FMNIPE10,FMNIPE11,FMNIPE12:  
                        FMNIPE13,FMNISPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNI1                                                                         
          UPDATE    FMSNRIA1;FMNIREPT,FMNIACCT,FMNITYPE,FMNIPEBR,FMNIPECE:      
                        FMNIPE01,FMNIPE02,FMNIPE03,FMNIPE04,FMNIPE05,FMNIPE06:  
                        FMNIPE07,FMNIPE08,FMNIPE09,FMNIPE10,FMNIPE11,FMNIPE12:  
                        FMNIPE13,FMNISPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMNI1   RESET     KEY16                                                       
          WRITE     FMSNRIA1,KEY16;FMNIREPT,FMNIACCT,FMNITYPE,FMNIPEBR,FMNIPECE:
                        FMNIPE01,FMNIPE02,FMNIPE03,FMNIPE04,FMNIPE05,FMNIPE06:  
                        FMNIPE07,FMNIPE08,FMNIPE09,FMNIPE10,FMNIPE11,FMNIPE12:  
                        FMNIPE13,FMNISPAR                                       
          RETURN
.
DEFMNI1   RESET     KEY16                                                       
          DELETE    FMSNRIA1,KEY16                                              
          RETURN
.
RLFMNI1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     FMSNRIA1,KEY16;FMNIREPT,FMNIACCT,FMNITYPE,FMNIPEBR,FMNIPECE:
                        FMNIPE01,FMNIPE02,FMNIPE03,FMNIPE04,FMNIPE05,FMNIPE06:  
                        FMNIPE07,FMNIPE08,FMNIPE09,FMNIPE10,FMNIPE11,FMNIPE12:  
                        FMNIPE13,FMNISPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMNI1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSNRIA1;FMNIREPT,FMNIACCT,FMNITYPE,FMNIPEBR,FMNIPECE:      
                        FMNIPE01,FMNIPE02,FMNIPE03,FMNIPE04,FMNIPE05,FMNIPE06:  
                        FMNIPE07,FMNIPE08,FMNIPE09,FMNIPE10,FMNIPE11,FMNIPE12:  
                        FMNIPE13,FMNISPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMNI1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSNRIA1;FMNIREPT,FMNIACCT,FMNITYPE,FMNIPEBR,FMNIPECE:      
                        FMNIPE01,FMNIPE02,FMNIPE03,FMNIPE04,FMNIPE05,FMNIPE06:  
                        FMNIPE07,FMNIPE08,FMNIPE09,FMNIPE10,FMNIPE11,FMNIPE12:  
                        FMNIPE13,FMNISPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMNI1   RESET     KEY16                                                       
          UNLOCK    FMSNRIA1                                                    
          RETURN
.
