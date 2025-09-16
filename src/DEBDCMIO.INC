.
. DEBDCMIO    
. --------
. Filename     : debdcmaf.dat
.
RSDBDC1   RESET     KEY11                                                       
          READ      DEBDCMA1,KEY11;;                                            
          RETURN
.
RADBDC1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDCMA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBDC1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDCMA1,KEY11;DBDCDEB,DBDCLIN,DBDCCOM,DBDCSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBDC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBDCMA1;DBDCDEB,DBDCLIN,DBDCCOM,DBDCSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBDC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBDCMA1;DBDCDEB,DBDCLIN,DBDCCOM,DBDCSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBDC1                                                                         
          UPDATE    DEBDCMA1;DBDCDEB,DBDCLIN,DBDCCOM,DBDCSPA                    
          RETURN
.
WRDBDC1   RESET     KEY11                                                       
          WRITE     DEBDCMA1,KEY11;DBDCDEB,DBDCLIN,DBDCCOM,DBDCSPA              
          RETURN
.
DEDBDC1   RESET     KEY11                                                       
          DELETE    DEBDCMA1,KEY11                                              
          RETURN
.
