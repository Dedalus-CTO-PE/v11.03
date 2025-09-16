.
. COMEDFIO    
. --------
. Filename     : comedfaf.dat
.
RSCMEDF1  RESET     KEY14                                                       
          READ      COMEDFA1,KEY14;;                                            
          RETURN
.
RACMEDF1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      COMEDFA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMEDF1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      COMEDFA1,KEY14;CMEFDSTR,CMEFCNTN,CMEFOBJT,CMEFFNAM,CMEFMD5C:
                                   CMEFCNTR,CMEFSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMEDF1  MOVE      ZERO,OVRCD                                                  
          READKS    COMEDFA1;CMEFDSTR,CMEFCNTN,CMEFOBJT,CMEFFNAM,CMEFMD5C:      
                             CMEFCNTR,CMEFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMEDF1  MOVE      ZERO,OVRCD                                                  
          READKP    COMEDFA1;CMEFDSTR,CMEFCNTN,CMEFOBJT,CMEFFNAM,CMEFMD5C:      
                             CMEFCNTR,CMEFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMEDF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMEDFA1;CMEFDSTR,CMEFCNTN,CMEFOBJT,CMEFFNAM,CMEFMD5C:      
                             CMEFCNTR,CMEFSPAR                                  
          RETURN
.
WRCMEDF1  RESET     KEY14                                                       
          WRITE     COMEDFA1,KEY14;CMEFDSTR,CMEFCNTN,CMEFOBJT,CMEFFNAM,CMEFMD5C:
                                   CMEFCNTR,CMEFSPAR                            
          RETURN
.
DECMEDF1  RESET     KEY14                                                       
          DELETE    COMEDFA1,KEY14                                              
          RETURN
.
