.
. SINOQBIO    
. --------
. Filename     : sinoqbaf.dat
.
RSSIQB1   RESET     KEY16                                                       
          READ      SINOQBA1,KEY16;;                                            
          RETURN
.
RASIQB1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQBA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIQB1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQBA1,KEY16;SIQBCST,SIQBRID,SIQBLIN,SIQBCOM,SIQBSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIQB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINOQBA1;SIQBCST,SIQBRID,SIQBLIN,SIQBCOM,SIQBSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIQB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINOQBA1;SIQBCST,SIQBRID,SIQBLIN,SIQBCOM,SIQBSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIQB1                                                                         
          UPDATE    SINOQBA1;SIQBCST,SIQBRID,SIQBLIN,SIQBCOM,SIQBSPA            
          RETURN
.
WRSIQB1   RESET     KEY16                                                       
          WRITE     SINOQBA1,KEY16;SIQBCST,SIQBRID,SIQBLIN,SIQBCOM,SIQBSPA      
          RETURN
.
DESIQB1   RESET     KEY16                                                       
          DELETE    SINOQBA1,KEY16                                              
          RETURN
.
