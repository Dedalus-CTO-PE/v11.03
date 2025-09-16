.
. WEBIHBIO    
. --------
. Filename     : webihbaf.dat
.
RSWBIHB1  RESET     KEY8                                                        
          READ      WEBIHBA1,KEY8;;                                             
          RETURN
.
RAWBIHB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBIHBA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBIHBA1,KEY8;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC: 
                                  WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN: 
                                  WBIJSNID,WBIJSPAR                             
          GOTO      OVERCOND IF OVER
          MOVE      DWBIJEET,WBIJEETP
          RETURN
.
RKWBIHB1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHBA1;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC:      
                             WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN:      
                             WBIJSNID,WBIJSPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBIJEET,WBIJEETP
          RETURN
.
RPWBIHB1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHBA1;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC:      
                             WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN:      
                             WBIJSNID,WBIJSPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBIJEET,WBIJEETP
          RETURN
.
UPWBIHB1  MOVE      WBIJEETP,DWBIJEET
          MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHBA1;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC:      
                             WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN:      
                             WBIJSNID,WBIJSPAR                                  
          RETURN
.
WRWBIHB1  MOVE      WBIJEETP,DWBIJEET
          RESET     KEY8                                                        
          WRITE     WEBIHBA1,KEY8;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC: 
                                  WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN: 
                                  WBIJSNID,WBIJSPAR                             
          RETURN
.
DEWBIHB1  RESET     KEY8                                                        
          DELETE    WEBIHBA1,KEY8                                               
          RETURN
.
RSWBIHB2  RESET     KEY16                                                       
          READ      WEBIHBA2,KEY16;;                                            
          RETURN
.
RAWBIHB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHBA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHBA2,KEY16;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC:
                                   WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN:
                                   WBIJSNID,WBIJSPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBIJEET,WBIJEETP
          RETURN
.
RKWBIHB2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHBA2;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC:      
                             WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN:      
                             WBIJSNID,WBIJSPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBIJEET,WBIJEETP
          RETURN
.
RPWBIHB2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHBA2;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC:      
                             WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN:      
                             WBIJSNID,WBIJSPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBIJEET,WBIJEETP
          RETURN
.
UPWBIHB2  MOVE      WBIJEETP,DWBIJEET
          MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHBA2;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC:      
                             WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN:      
                             WBIJSNID,WBIJSPAR                                  
          RETURN
.
WRWBIHB2  MOVE      WBIJEETP,DWBIJEET
          RESET     KEY16                                                       
          WRITE     WEBIHBA2,KEY16;WBIJBTHN,WBIJHFND,WBIJBHTL,WBIJTRIB,WBIJDTBC:
                                   WBIJTMBC,WBIJOPER,DWBIJEET,WBIJEFNM,WBIJLOCN:
                                   WBIJSNID,WBIJSPAR                            
          RETURN
.
DEWBIHB2  RESET     KEY16                                                       
          DELETE    WEBIHBA2,KEY16                                              
          RETURN
.
