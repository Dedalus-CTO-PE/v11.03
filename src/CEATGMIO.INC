.
. CEATGMIO    
. --------
. Filename     : ceatgmaf.dat
.
RSCETG1   RESET     KEY16                                                       
          READ      CEATGMA1,KEY16;;                                            
          RETURN
.
RACETG1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEATGMA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCETG1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEATGMA1,KEY16;CETGCLI,CETGSPC,CETGPSC,CETGQTY,CETGSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCETG1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEATGMA1;CETGCLI,CETGSPC,CETGPSC,CETGQTY,CETGSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCETG1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEATGMA1;CETGCLI,CETGSPC,CETGPSC,CETGQTY,CETGSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCETG1                                                                         
          UPDATE    CEATGMA1;CETGCLI,CETGSPC,CETGPSC,CETGQTY,CETGSPA            
          RETURN
.
WRCETG1   RESET     KEY16                                                       
          WRITE     CEATGMA1,KEY16;CETGCLI,CETGSPC,CETGPSC,CETGQTY,CETGSPA      
          RETURN
.
DECETG1   RESET     KEY16                                                       
          DELETE    CEATGMA1,KEY16                                              
          RETURN
.
