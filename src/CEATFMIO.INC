.
. CEATFMIO    
. --------
. Filename     : ceatfmaf.dat
.
RSCETF1   RESET     KEY16                                                       
          READ      CEATFMA1,KEY16;;                                            
          RETURN
.
RACETF1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEATFMA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCETF1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEATFMA1,KEY16;CETFCLI,CETFSPC,CETFPSC,CETFSTM,CETFETM:     
                        CETFSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCETF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEATFMA1;CETFCLI,CETFSPC,CETFPSC,CETFSTM,CETFETM:           
                        CETFSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCETF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEATFMA1;CETFCLI,CETFSPC,CETFPSC,CETFSTM,CETFETM:           
                        CETFSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCETF1                                                                         
          UPDATE    CEATFMA1;CETFCLI,CETFSPC,CETFPSC,CETFSTM,CETFETM:           
                        CETFSPA                                                 
          RETURN
.
WRCETF1   RESET     KEY16                                                       
          WRITE     CEATFMA1,KEY16;CETFCLI,CETFSPC,CETFPSC,CETFSTM,CETFETM:     
                        CETFSPA                                                 
          RETURN
.
DECETF1   RESET     KEY16                                                       
          DELETE    CEATFMA1,KEY16                                              
          RETURN
.
