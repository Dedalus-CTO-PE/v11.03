.
. CCSCMNIO    
. --------
. Filename     : ccscmnaf.dat
.
RSCCMN1   RESET     KEY7                                                        
          READ      CCSCMNA1,KEY7;;                                             
          RETURN
.
RACCMN1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCMNA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMN1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCMNA1,KEY7;CCMNCOM,CCMNLIN,CCMNDAT,CCMNSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMNA1;CCMNCOM,CCMNLIN,CCMNDAT,CCMNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMNA1;CCMNCOM,CCMNLIN,CCMNDAT,CCMNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMN1                                                                         
          UPDATE    CCSCMNA1;CCMNCOM,CCMNLIN,CCMNDAT,CCMNSPA                    
          RETURN
.
WRCCMN1   RESET     KEY7                                                        
          WRITE     CCSCMNA1,KEY7;CCMNCOM,CCMNLIN,CCMNDAT,CCMNSPA               
          RETURN
.
DECCMN1   RESET     KEY7                                                        
          DELETE    CCSCMNA1,KEY7                                               
          RETURN
.
