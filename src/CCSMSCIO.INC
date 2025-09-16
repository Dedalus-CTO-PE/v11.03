.
. CCSMSCIO    
. --------
. Filename     : ccsmscaf.dat
.
RSCCMS1   RESET     KEY18                                                       
          READ      CCSMSCA1,KEY18;;                                            
          RETURN
.
RACCMS1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSMSCA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMS1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSMSCA1,KEY18;CCMSYEAR,CCMSCOM,CCMSHCD,CCMSPCD,CCMSUCT:    
                        CCMSQTY,CCMSCST,CCMSFIX,CCMSFUC,CCMSSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSMSCA1;CCMSYEAR,CCMSCOM,CCMSHCD,CCMSPCD,CCMSUCT:          
                        CCMSQTY,CCMSCST,CCMSFIX,CCMSFUC,CCMSSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSMSCA1;CCMSYEAR,CCMSCOM,CCMSHCD,CCMSPCD,CCMSUCT:          
                        CCMSQTY,CCMSCST,CCMSFIX,CCMSFUC,CCMSSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMS1                                                                         
          UPDATE    CCSMSCA1;CCMSYEAR,CCMSCOM,CCMSHCD,CCMSPCD,CCMSUCT:          
                        CCMSQTY,CCMSCST,CCMSFIX,CCMSFUC,CCMSSPA                 
          RETURN
.
WRCCMS1   RESET     KEY18                                                       
          WRITE     CCSMSCA1,KEY18;CCMSYEAR,CCMSCOM,CCMSHCD,CCMSPCD,CCMSUCT:    
                        CCMSQTY,CCMSCST,CCMSFIX,CCMSFUC,CCMSSPA                 
          RETURN
.
DECCMS1   RESET     KEY18                                                       
          DELETE    CCSMSCA1,KEY18                                              
          RETURN
.
