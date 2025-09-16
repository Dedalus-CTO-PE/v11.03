.
. COMEWDIO    
. --------
. Filename     : comewdaf.dat
.
RSCMEWD1  RESET     KEY104                                                      
          READ      COMEWDA1,KEY104;;                                           
          RETURN
.
RACMEWD1  RESET     KEY104                                                      
          MOVE      ZERO,OVRCD
          READ      COMEWDA1,KEY104;ANS                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMEWD1  RESET     KEY104                                                      
          MOVE      ZERO,OVRCD
          READ      COMEWDA1,KEY104;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY:        
                                    CMEWTEXT,CMEWSDAT,CMEWRTYP,CMEWSCDT:        
                                    CMEWSCTM,CMEWMDDT,CMEWMDTM,CMEWSPAR         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMEWD1  MOVE      ZERO,OVRCD                                                  
          READKS    COMEWDA1;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY,CMEWTEXT:      
                             CMEWSDAT,CMEWRTYP,CMEWSCDT,CMEWSCTM,CMEWMDDT:      
                             CMEWMDTM,CMEWSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMEWD1  MOVE      ZERO,OVRCD                                                  
          READKP    COMEWDA1;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY,CMEWTEXT:      
                             CMEWSDAT,CMEWRTYP,CMEWSCDT,CMEWSCTM,CMEWMDDT:      
                             CMEWMDTM,CMEWSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMEWD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMEWDA1;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY,CMEWTEXT:      
                             CMEWSDAT,CMEWRTYP,CMEWSCDT,CMEWSCTM,CMEWMDDT:      
                             CMEWMDTM,CMEWSPAR                                  
          RETURN
.
WRCMEWD1  RESET     KEY104                                                      
          WRITE     COMEWDA1,KEY104;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY:        
                                    CMEWTEXT,CMEWSDAT,CMEWRTYP,CMEWSCDT:        
                                    CMEWSCTM,CMEWMDDT,CMEWMDTM,CMEWSPAR         
          RETURN
.
DECMEWD1  RESET     KEY104                                                      
          DELETE    COMEWDA1,KEY104                                             
          RETURN
.
RSCMEWD2  RESET     KEY112                                                      
          READ      COMEWDA2,KEY112;;                                           
          RETURN
.
RACMEWD2  RESET     KEY112                                                      
          MOVE      ZERO,OVRCD
          READ      COMEWDA2,KEY112;ANS                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMEWD2  RESET     KEY112                                                      
          MOVE      ZERO,OVRCD
          READ      COMEWDA2,KEY112;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY:        
                                    CMEWTEXT,CMEWSDAT,CMEWRTYP,CMEWSCDT:        
                                    CMEWSCTM,CMEWMDDT,CMEWMDTM,CMEWSPAR         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMEWD2  MOVE      ZERO,OVRCD                                                  
          READKS    COMEWDA2;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY,CMEWTEXT:      
                             CMEWSDAT,CMEWRTYP,CMEWSCDT,CMEWSCTM,CMEWMDDT:      
                             CMEWMDTM,CMEWSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMEWD2  MOVE      ZERO,OVRCD                                                  
          READKP    COMEWDA2;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY,CMEWTEXT:      
                             CMEWSDAT,CMEWRTYP,CMEWSCDT,CMEWSCTM,CMEWMDDT:      
                             CMEWMDTM,CMEWSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMEWD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMEWDA2;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY,CMEWTEXT:      
                             CMEWSDAT,CMEWRTYP,CMEWSCDT,CMEWSCTM,CMEWMDDT:      
                             CMEWMDTM,CMEWSPAR                                  
          RETURN
.
WRCMEWD2  RESET     KEY112                                                      
          WRITE     COMEWDA2,KEY112;CMEWDSTR,CMEWCNTN,CMEWOBJT,CMEWOKEY:        
                                    CMEWTEXT,CMEWSDAT,CMEWRTYP,CMEWSCDT:        
                                    CMEWSCTM,CMEWMDDT,CMEWMDTM,CMEWSPAR         
          RETURN
.
DECMEWD2  RESET     KEY112                                                      
          DELETE    COMEWDA2,KEY112                                             
          RETURN
.
