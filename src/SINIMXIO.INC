.
. SINIMXIO    
. --------
. Filename     : sinimxaf.dat
.
RSSIIX1   RESET     KEY5                                                        
          READ      SINIMXA1,KEY5;;                                             
          RETURN
.
RASIIX1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINIMXA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIX1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SINIMXA1,KEY5;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:      
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIX1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINIMXA1;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:           
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIX1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINIMXA1;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:           
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIX1                                                                         
          UPDATE    SINIMXA1;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:           
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          RETURN
.
WRSIIX1   RESET     KEY5                                                        
          WRITE     SINIMXA1,KEY5;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:      
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          RETURN
.
DESIIX1   RESET     KEY5                                                        
          DELETE    SINIMXA1,KEY5                                               
          RETURN
.
RSSIIX2   RESET     KEY12                                                       
          READ      SINIMXA2,KEY12;;                                            
          RETURN
.
RASIIX2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMXA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIX2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMXA2,KEY12;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:     
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIX2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINIMXA2;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:           
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIX2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINIMXA2;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:           
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIX2                                                                         
          UPDATE    SINIMXA2;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:           
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          RETURN
.
WRSIIX2   RESET     KEY12                                                       
          WRITE     SINIMXA2,KEY12;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:     
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          RETURN
.
DESIIX2   RESET     KEY12                                                       
          DELETE    SINIMXA2,KEY12                                              
          RETURN
.
RSSIIX3   RESET     KEY16                                                       
          READ      SINIMXA3,KEY16;;                                            
          RETURN
.
RASIIX3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMXA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIX3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINIMXA3,KEY16;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:     
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIX3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINIMXA3;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:           
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIX3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINIMXA3;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:           
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIX3                                                                         
          UPDATE    SINIMXA3;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:           
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          RETURN
.
WRSIIX3   RESET     KEY16                                                       
          WRITE     SINIMXA3,KEY16;SIIXPOR,SIIXUNI,SIIXCST,SIIXCAT,SIIXSEQ:     
                        SIIXMAX,SIIXREQ,SIIXQOH,SIIXUR1,SIIXUR2,SIIXUD1:        
                        SIIXUD2,SIIXUC1,SIIXUC2,SIIXUY1,SIIXUY2,SIIXWAR:        
                        SIIXRESI,SIIXSPA                                        
          RETURN
.
DESIIX3   RESET     KEY16                                                       
          DELETE    SINIMXA3,KEY16                                              
          RETURN
.
