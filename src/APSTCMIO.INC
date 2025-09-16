.
. APSTCMIO    
. --------
. Filename     : apstcmaf.dat
.
RSAPTC1   RESET     KEY19                                                       
          READ      APSTCMA1,KEY19;;                                            
          RETURN
.
RAAPTC1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      APSTCMA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPTC1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      APSTCMA1,KEY19;APTCCRD,APTCDTRC,APTCUNIQ,APTCLINE,APTCCOM:  
                        APTCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPTC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSTCMA1;APTCCRD,APTCDTRC,APTCUNIQ,APTCLINE,APTCCOM:        
                        APTCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPTC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSTCMA1;APTCCRD,APTCDTRC,APTCUNIQ,APTCLINE,APTCCOM:        
                        APTCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPTC1                                                                         
          UPDATE    APSTCMA1;APTCCRD,APTCDTRC,APTCUNIQ,APTCLINE,APTCCOM:        
                        APTCSPA                                                 
          RETURN
.
WRAPTC1   RESET     KEY19                                                       
          WRITE     APSTCMA1,KEY19;APTCCRD,APTCDTRC,APTCUNIQ,APTCLINE,APTCCOM:  
                        APTCSPA                                                 
          RETURN
.
DEAPTC1   RESET     KEY19                                                       
          DELETE    APSTCMA1,KEY19                                              
          RETURN
.
