.
. NZPMXCIO    
. --------
. Filename     : nzpmxcaf.dat
.
RSNZMXC1  RESET     KEY40                                                       
          READ      NZPMXCA1,KEY40;;                                            
          RETURN
.
RANZMXC1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMXCA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZMXC1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPMXCA1,KEY40;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZMXC1  MOVE      ZERO,OVRCD
          READKS    NZPMXCA1;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:      
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZMXC1  MOVE      ZERO,OVRCD
          READKP    NZPMXCA1;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:      
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZMXC1  UPDATE    NZPMXCA1;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:      
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          RETURN
.
WRNZMXC1  RESET     KEY40                                                       
          WRITE     NZPMXCA1,KEY40;NZMXHOSP,NZMXCLMC,NZMXCNTR,NZMXFTAB,NZMXMCHG:
                        NZMXEFDT,NZMXUNIQ,NZMXQNTY,NZMXITMN,NZMXCDAT,NZMXCTIM:  
                        NZMXCUID,NZMXUDAT,NZMXUTIM,NZMXUUID,NZMXSPAR            
          RETURN
.
DENZMXC1  RESET     KEY40                                                       
          DELETE    NZPMXCA1,KEY40                                              
          RETURN
.
