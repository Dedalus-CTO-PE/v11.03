.
. OPRCBDIO    
. --------
. Filename     : oprcbdaf.dat
.
RSOPCBD1  RESET     KEY12                                                       
          READ      OPRCBDA1,KEY12;;                                            
          RETURN
.
RAOPCBD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCBDA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPCBD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCBDA1,KEY12;OPCBUNIQ,OPCBCOUN,OPCBBSEX,OPCBBDOB,OPCBBTME:
                        OPCBBURN,OPCBCUID,OPCBCDAT,OPCBCTIM,OPCBUUID,OPCBUDAT:  
                        OPCBUTIM,OPCBDELT,OPCBDUID,OPCBDDAT,OPCBDTIM,OPCBBWGT:  
                        OPCBPDTM,OPCBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPCBD1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRCBDA1;OPCBUNIQ,OPCBCOUN,OPCBBSEX,OPCBBDOB,OPCBBTME:      
                        OPCBBURN,OPCBCUID,OPCBCDAT,OPCBCTIM,OPCBUUID,OPCBUDAT:  
                        OPCBUTIM,OPCBDELT,OPCBDUID,OPCBDDAT,OPCBDTIM,OPCBBWGT:  
                        OPCBPDTM,OPCBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPCBD1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRCBDA1;OPCBUNIQ,OPCBCOUN,OPCBBSEX,OPCBBDOB,OPCBBTME:      
                        OPCBBURN,OPCBCUID,OPCBCDAT,OPCBCTIM,OPCBUUID,OPCBUDAT:  
                        OPCBUTIM,OPCBDELT,OPCBDUID,OPCBDDAT,OPCBDTIM,OPCBBWGT:  
                        OPCBPDTM,OPCBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPCBD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRCBDA1;OPCBUNIQ,OPCBCOUN,OPCBBSEX,OPCBBDOB,OPCBBTME:      
                        OPCBBURN,OPCBCUID,OPCBCDAT,OPCBCTIM,OPCBUUID,OPCBUDAT:  
                        OPCBUTIM,OPCBDELT,OPCBDUID,OPCBDDAT,OPCBDTIM,OPCBBWGT:  
                        OPCBPDTM,OPCBSPAR                                       
          RETURN
.
WROPCBD1  RESET     KEY12                                                       
          WRITE     OPRCBDA1,KEY12;OPCBUNIQ,OPCBCOUN,OPCBBSEX,OPCBBDOB,OPCBBTME:
                        OPCBBURN,OPCBCUID,OPCBCDAT,OPCBCTIM,OPCBUUID,OPCBUDAT:  
                        OPCBUTIM,OPCBDELT,OPCBDUID,OPCBDDAT,OPCBDTIM,OPCBBWGT:  
                        OPCBPDTM,OPCBSPAR                                       
          RETURN
.
DEOPCBD1  RESET     KEY12                                                       
          DELETE    OPRCBDA1,KEY12                                              
          RETURN
.
