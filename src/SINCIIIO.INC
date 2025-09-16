.
. SINCIIIO    
. --------
. Filename     : sinciiaf.dat
.
RSSIII1   RESET     KEY27                                                       
          READ      SINCIIA1,KEY27;;                                            
          RETURN
.
RASIII1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIIA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIII1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIIA1,KEY27;SIIIWAR,SIIICAT,SIIIPUR,SIIIDAT,SIIIQR:      
                        SIIIQI,SIIIUCT,SIIIBAT,SIIISPA                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIII1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIIA1;SIIIWAR,SIIICAT,SIIIPUR,SIIIDAT,SIIIQR:            
                        SIIIQI,SIIIUCT,SIIIBAT,SIIISPA                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIII1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIIA1;SIIIWAR,SIIICAT,SIIIPUR,SIIIDAT,SIIIQR:            
                        SIIIQI,SIIIUCT,SIIIBAT,SIIISPA                          
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIII1                                                                         
          UPDATE    SINCIIA1;SIIIWAR,SIIICAT,SIIIPUR,SIIIDAT,SIIIQR:            
                        SIIIQI,SIIIUCT,SIIIBAT,SIIISPA                          
          RETURN
.
WRSIII1   RESET     KEY27                                                       
          WRITE     SINCIIA1,KEY27;SIIIWAR,SIIICAT,SIIIPUR,SIIIDAT,SIIIQR:      
                        SIIIQI,SIIIUCT,SIIIBAT,SIIISPA                          
          RETURN
.
DESIII1   RESET     KEY27                                                       
          DELETE    SINCIIA1,KEY27                                              
          RETURN
.
