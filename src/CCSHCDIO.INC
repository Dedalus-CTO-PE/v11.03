.
. CCSHCDIO    
. --------
. Filename     : ccshcdaf.dat
.
RSCCHC1   RESET     KEY2                                                        
          READ      CCSHCDA1,KEY2;;                                             
          RETURN
.
RACCHC1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      CCSHCDA1,KEY2;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCHC1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      CCSHCDA1,KEY2;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCHC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSHCDA1;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA          
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCHC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSHCDA1;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA          
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCHC1                                                                         
          UPDATE    CCSHCDA1;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA          
          RETURN
.
WRCCHC1   RESET     KEY2                                                        
          WRITE     CCSHCDA1,KEY2;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA     
          RETURN
.
DECCHC1   RESET     KEY2                                                        
          DELETE    CCSHCDA1,KEY2                                               
          RETURN
.
RSCCHC2   RESET     KEY37                                                       
          READ      CCSHCDA2,KEY37;;                                            
          RETURN
.
RACCHC2   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      CCSHCDA2,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCHC2   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      CCSHCDA2,KEY37;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCHC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSHCDA2;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA          
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCHC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSHCDA2;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA          
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCHC2                                                                         
          UPDATE    CCSHCDA2;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA          
          RETURN
.
WRCCHC2   RESET     KEY37                                                       
          WRITE     CCSHCDA2,KEY37;CCHCHCD,CCHCDES,CCHCPREF,CCHCPUSE,CCHCSPA    
          RETURN
.
DECCHC2   RESET     KEY37                                                       
          DELETE    CCSHCDA2,KEY37                                              
          RETURN
.
