.
. FMSNRHIO    
. --------
. Filename     : fmsnrhaf.dat
.
RSFMNH1   RESET     KEY13                                                       
          READ      FMSNRHA1,KEY13;;                                            
          RETURN
.
RAFMNH1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRHA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNH1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRHA1,KEY13;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRHA1;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRHA1;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNH1                                                                         
          UPDATE    FMSNRHA1;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMNH1   RESET     KEY13                                                       
          WRITE     FMSNRHA1,KEY13;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          RETURN
.
DEFMNH1   RESET     KEY13                                                       
          DELETE    FMSNRHA1,KEY13                                              
          RETURN
.
RLFMNH1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     FMSNRHA1,KEY13;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMNH1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSNRHA1;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMNH1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSNRHA1;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMNH1   RESET     KEY13                                                       
          UNLOCK    FMSNRHA1                                                    
          RETURN
.
RSFMNH2   RESET     KEY13                                                       
          READ      FMSNRHA2,KEY13;;                                            
          RETURN
.
RAFMNH2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRHA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMNH2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      FMSNRHA2,KEY13;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMNH2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSNRHA2;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMNH2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSNRHA2;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMNH2                                                                         
          UPDATE    FMSNRHA2;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMNH2   RESET     KEY13                                                       
          WRITE     FMSNRHA2,KEY13;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          RETURN
.
DEFMNH2   RESET     KEY13                                                       
          DELETE    FMSNRHA2,KEY13                                              
          RETURN
.
RLFMNH2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     FMSNRHA2,KEY13;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMNH2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSNRHA2;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMNH2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSNRHA2;FMNHREPT,FMNHCSEQ,FMNHSSEQ,FMNHACCT,FMNHDESC:      
                        FMNHTYPE,FMNHAYTD,FMNHCLEV,FMNHSLEV,FMNHCPRT,FMNHSPRT:  
                        FMNHDPLA,FMNHMULT,FMNHDIV,FMNHSPAR                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMNH2   RESET     KEY13                                                       
          UNLOCK    FMSNRHA2                                                    
          RETURN
.
