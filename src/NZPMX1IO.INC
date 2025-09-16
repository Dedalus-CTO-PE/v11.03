.
. NZPMX1IO    
. --------
. Filename     : nzpmx1af.dat
.
RSNZMX11  RESET     KEY40                                                       
          READ      NZPMX1A1,KEY40;;                                            
          RETURN
.
RANZMX11  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMX1A1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZMX11  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMX1A1,KEY40;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZMX11  MOVE      ZERO,OVRCD
          READKS    NZPMX1A1;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:      
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZMX11  MOVE      ZERO,OVRCD
          READKP    NZPMX1A1;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:      
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZMX11  UPDATE    NZPMX1A1;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:      
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          RETURN
.
WRNZMX11  RESET     KEY40                                                       
          WRITE     NZPMX1A1,KEY40;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          RETURN
.
DENZMX11  RESET     KEY40                                                       
          DELETE    NZPMX1A1,KEY40                                              
          RETURN
.
