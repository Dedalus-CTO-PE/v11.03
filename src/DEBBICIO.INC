.
. DEBBICIO    
. --------
. Filename     : debbicaf.dat
.
RSDBBC1   RESET     KEY17                                                       
          READ      DEBBICA1,KEY17;;                                            
          RETURN
.
RADBBC1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      DEBBICA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBBC1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      DEBBICA1,KEY17;DBBCDEB,DBBCUNI,DBBCLIN,DBBCCOM,DBBCSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBBC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBBICA1;DBBCDEB,DBBCUNI,DBBCLIN,DBBCCOM,DBBCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBBC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBBICA1;DBBCDEB,DBBCUNI,DBBCLIN,DBBCCOM,DBBCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBBC1                                                                         
          UPDATE    DEBBICA1;DBBCDEB,DBBCUNI,DBBCLIN,DBBCCOM,DBBCSPA            
          RETURN
.
WRDBBC1   RESET     KEY17                                                       
          WRITE     DEBBICA1,KEY17;DBBCDEB,DBBCUNI,DBBCLIN,DBBCCOM,DBBCSPA      
          RETURN
.
DEDBBC1   RESET     KEY17                                                       
          DELETE    DEBBICA1,KEY17                                              
          RETURN
.
