.
. ALLSUPIO    
. --------
. Filename     : allsupaf.dat
.
RSALSUP1  RESET     KEY24                                                       
          READ      ALLSUPA1,KEY24;;                                            
          RETURN
.
RAALSUP1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLSUPA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALSUP1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLSUPA1,KEY24;ALSPVISN,ALSPENCT,ALSPSCNT,ALSPSCOD,ALSPCDAT:
                        ALSPCTIM,ALSPCUID,ALSPUDAT,ALSPUTIM,ALSPUUID,ALSPQNTY:  
                        ALSPPRCE,ALSPAPPN,ALSPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALSUP1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLSUPA1;ALSPVISN,ALSPENCT,ALSPSCNT,ALSPSCOD,ALSPCDAT:      
                        ALSPCTIM,ALSPCUID,ALSPUDAT,ALSPUTIM,ALSPUUID,ALSPQNTY:  
                        ALSPPRCE,ALSPAPPN,ALSPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALSUP1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLSUPA1;ALSPVISN,ALSPENCT,ALSPSCNT,ALSPSCOD,ALSPCDAT:      
                        ALSPCTIM,ALSPCUID,ALSPUDAT,ALSPUTIM,ALSPUUID,ALSPQNTY:  
                        ALSPPRCE,ALSPAPPN,ALSPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALSUP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLSUPA1;ALSPVISN,ALSPENCT,ALSPSCNT,ALSPSCOD,ALSPCDAT:      
                        ALSPCTIM,ALSPCUID,ALSPUDAT,ALSPUTIM,ALSPUUID,ALSPQNTY:  
                        ALSPPRCE,ALSPAPPN,ALSPSPAR                              
          RETURN
.
WRALSUP1  RESET     KEY24                                                       
          WRITE     ALLSUPA1,KEY24;ALSPVISN,ALSPENCT,ALSPSCNT,ALSPSCOD,ALSPCDAT:
                        ALSPCTIM,ALSPCUID,ALSPUDAT,ALSPUTIM,ALSPUUID,ALSPQNTY:  
                        ALSPPRCE,ALSPAPPN,ALSPSPAR                              
          RETURN
.
DEALSUP1  RESET     KEY24                                                       
          DELETE    ALLSUPA1,KEY24                                              
          RETURN
.
