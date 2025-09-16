.
. SCRTFCIO    
. --------
. Filename     : scrtfcaf.dat
.
RSSCTF1   RESET     KEY8                                                        
          READ      SCRTFCA1,KEY8;;                                             
          RETURN
.
RASCTF1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SCRTFCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCTF1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SCRTFCA1,KEY8;SCTFFUN                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCTF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRTFCA1;SCTFFUN                                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCTF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRTFCA1;SCTFFUN                                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCTF1                                                                         
          UPDATE    SCRTFCA1;SCTFFUN                                            
          RETURN
.
WRSCTF1   RESET     KEY8                                                        
          WRITE     SCRTFCA1,KEY8;SCTFFUN                                       
          RETURN
.
DESCTF1   RESET     KEY8                                                        
          DELETE    SCRTFCA1,KEY8                                               
          RETURN
.
