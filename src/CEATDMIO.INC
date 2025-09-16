.
. CEATDMIO    
. --------
. Filename     : ceatdmaf.dat
.
RSCETD1   RESET     KEY13                                                       
          READ      CEATDMA1,KEY13;;                                            
          RETURN
.
RACETD1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEATDMA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCETD1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEATDMA1,KEY13;CETDDTY,CETDSPC,CETDPSC,CETDSTM,CETDETM:     
                        CETDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCETD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEATDMA1;CETDDTY,CETDSPC,CETDPSC,CETDSTM,CETDETM:           
                        CETDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCETD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEATDMA1;CETDDTY,CETDSPC,CETDPSC,CETDSTM,CETDETM:           
                        CETDSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCETD1                                                                         
          UPDATE    CEATDMA1;CETDDTY,CETDSPC,CETDPSC,CETDSTM,CETDETM:           
                        CETDSPA                                                 
          RETURN
.
WRCETD1   RESET     KEY13                                                       
          WRITE     CEATDMA1,KEY13;CETDDTY,CETDSPC,CETDPSC,CETDSTM,CETDETM:     
                        CETDSPA                                                 
          RETURN
.
DECETD1   RESET     KEY13                                                       
          DELETE    CEATDMA1,KEY13                                              
          RETURN
.
