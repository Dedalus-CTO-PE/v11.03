.
. PATRASIO    
. --------
. Filename     : patrasaf.dat
.
RSPTRAS1  RESET     KEY10                                                       
          READ      PATRASA1,KEY10;;                                            
          RETURN
.
RAPTRAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATRASA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTRAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATRASA1,KEY10;PTRAINVN,PTRACNTN,PTRASYST,PTRAOUST,PTRARMOV:
                        PTRAPPOR,PTRAIBAL,PTRADELE,PTRACDAT,PTRACTIM,PTRACUID:  
                        PTRAUDAT,PTRAUTIM,PTRAUUID,PTRADBAG,PTRASPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTRAS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATRASA1;PTRAINVN,PTRACNTN,PTRASYST,PTRAOUST,PTRARMOV:      
                        PTRAPPOR,PTRAIBAL,PTRADELE,PTRACDAT,PTRACTIM,PTRACUID:  
                        PTRAUDAT,PTRAUTIM,PTRAUUID,PTRADBAG,PTRASPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTRAS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATRASA1;PTRAINVN,PTRACNTN,PTRASYST,PTRAOUST,PTRARMOV:      
                        PTRAPPOR,PTRAIBAL,PTRADELE,PTRACDAT,PTRACTIM,PTRACUID:  
                        PTRAUDAT,PTRAUTIM,PTRAUUID,PTRADBAG,PTRASPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTRAS1                                                                        
          UPDATE    PATRASA1;PTRAINVN,PTRACNTN,PTRASYST,PTRAOUST,PTRARMOV:      
                        PTRAPPOR,PTRAIBAL,PTRADELE,PTRACDAT,PTRACTIM,PTRACUID:  
                        PTRAUDAT,PTRAUTIM,PTRAUUID,PTRADBAG,PTRASPAR            
          RETURN
.
WRPTRAS1  RESET     KEY10                                                       
          WRITE     PATRASA1,KEY10;PTRAINVN,PTRACNTN,PTRASYST,PTRAOUST,PTRARMOV:
                        PTRAPPOR,PTRAIBAL,PTRADELE,PTRACDAT,PTRACTIM,PTRACUID:  
                        PTRAUDAT,PTRAUTIM,PTRAUUID,PTRADBAG,PTRASPAR            
          RETURN
.
DEPTRAS1  RESET     KEY10                                                       
          DELETE    PATRASA1,KEY10                                              
          RETURN
.
