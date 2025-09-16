.
. DEBTDCIO    
. --------
. Filename     : debtdcaf.dat
.
RSDBTD1   RESET     KEY14                                                       
          READ      DEBTDCA1,KEY14;;                                            
          RETURN
.
RADBTD1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      DEBTDCA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBTD1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      DEBTDCA1,KEY14;DBTDDEB,DBTDDLN,DBTDLIN,DBTDCOM,DBTDSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBTD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBTDCA1;DBTDDEB,DBTDDLN,DBTDLIN,DBTDCOM,DBTDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBTD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBTDCA1;DBTDDEB,DBTDDLN,DBTDLIN,DBTDCOM,DBTDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBTD1                                                                         
          UPDATE    DEBTDCA1;DBTDDEB,DBTDDLN,DBTDLIN,DBTDCOM,DBTDSPA            
          RETURN
.
WRDBTD1   RESET     KEY14                                                       
          WRITE     DEBTDCA1,KEY14;DBTDDEB,DBTDDLN,DBTDLIN,DBTDCOM,DBTDSPA      
          RETURN
.
DEDBTD1   RESET     KEY14                                                       
          DELETE    DEBTDCA1,KEY14                                              
          RETURN
.
