.
. DEBICMIO    
. --------
. Filename     : debicmaf.dat
.
RSDBIC1   RESET     KEY11                                                       
          READ      DEBICMA1,KEY11;;                                            
          RETURN
.
RADBIC1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      DEBICMA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBIC1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      DEBICMA1,KEY11;DBICITM,DBICLIN,DBICCOM,DBICSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBIC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBICMA1;DBICITM,DBICLIN,DBICCOM,DBICSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBIC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBICMA1;DBICITM,DBICLIN,DBICCOM,DBICSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBIC1                                                                         
          UPDATE    DEBICMA1;DBICITM,DBICLIN,DBICCOM,DBICSPA                    
          RETURN
.
WRDBIC1   RESET     KEY11                                                       
          WRITE     DEBICMA1,KEY11;DBICITM,DBICLIN,DBICCOM,DBICSPA              
          RETURN
.
DEDBIC1   RESET     KEY11                                                       
          DELETE    DEBICMA1,KEY11                                              
          RETURN
.
