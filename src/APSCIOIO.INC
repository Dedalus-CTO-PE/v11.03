.
. APSCIOIO    
. --------
. Filename     : apscioaf.dat
.
RSAPCI1   RESET     KEY8                                                        
          READ      APSCIOA1,KEY8;;                                             
          RETURN
.
RAAPCI1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSCIOA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCI1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSCIOA1,KEY8;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCIOA1;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCIOA1;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCI1                                                                         
          UPDATE    APSCIOA1;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA            
          RETURN
.
WRAPCI1   RESET     KEY8                                                        
          WRITE     APSCIOA1,KEY8;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA       
          RETURN
.
DEAPCI1   RESET     KEY8                                                        
          DELETE    APSCIOA1,KEY8                                               
          RETURN
.
RSAPCI2   RESET     KEY21                                                       
          READ      APSCIOA2,KEY21;;                                            
          RETURN
.
RAAPCI2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      APSCIOA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCI2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      APSCIOA2,KEY21;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCI2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCIOA2;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCI2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCIOA2;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCI2                                                                         
          UPDATE    APSCIOA2;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA            
          RETURN
.
WRAPCI2   RESET     KEY21                                                       
          WRITE     APSCIOA2,KEY21;APCIISC,APCIORD,APCICRD,APCIDAT,APCISPA      
          RETURN
.
DEAPCI2   RESET     KEY21                                                       
          DELETE    APSCIOA2,KEY21                                              
          RETURN
.
