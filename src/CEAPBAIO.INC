.
. CEAPBAIO    
. --------
. Filename     : ceapbaaf.dat
.
RSCEPB1   RESET     KEY13                                                       
          READ      CEAPBAA1,KEY13;;                                            
          RETURN
.
RACEPB1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAPBAA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEPB1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAPBAA1,KEY13;CEPBPSC,CEPBYEAR,CEPBPER,CEPBQTY,CEPBCST1:   
                        CEPBCST2,CEPBCST3,CEPBCST4,CEPBCST5,CEPBSPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEPB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAPBAA1;CEPBPSC,CEPBYEAR,CEPBPER,CEPBQTY,CEPBCST1:         
                        CEPBCST2,CEPBCST3,CEPBCST4,CEPBCST5,CEPBSPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEPB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAPBAA1;CEPBPSC,CEPBYEAR,CEPBPER,CEPBQTY,CEPBCST1:         
                        CEPBCST2,CEPBCST3,CEPBCST4,CEPBCST5,CEPBSPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEPB1                                                                         
          UPDATE    CEAPBAA1;CEPBPSC,CEPBYEAR,CEPBPER,CEPBQTY,CEPBCST1:         
                        CEPBCST2,CEPBCST3,CEPBCST4,CEPBCST5,CEPBSPA             
          RETURN
.
WRCEPB1   RESET     KEY13                                                       
          WRITE     CEAPBAA1,KEY13;CEPBPSC,CEPBYEAR,CEPBPER,CEPBQTY,CEPBCST1:   
                        CEPBCST2,CEPBCST3,CEPBCST4,CEPBCST5,CEPBSPA             
          RETURN
.
DECEPB1   RESET     KEY13                                                       
          DELETE    CEAPBAA1,KEY13                                              
          RETURN
.
