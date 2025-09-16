.
. PRIUREIO    
. --------
. Filename     : priureaf.dat
.
RSPRURE1  RESET     KEY8                                                        
          READ      PRIUREA1,KEY8;;                                             
          RETURN
.
RAPRURE1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PRIUREA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRURE1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PRIUREA1,KEY8;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA: 
                                  PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM: 
                                  PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID: 
                                  PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRURE1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIUREA1;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA:      
                             PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM:      
                             PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID:      
                             PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRURE1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIUREA1;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA:      
                             PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM:      
                             PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID:      
                             PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRURE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRIUREA1;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA:      
                             PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM:      
                             PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID:      
                             PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR                
          RETURN
.
WRPRURE1  RESET     KEY8                                                        
          WRITE     PRIUREA1,KEY8;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA: 
                                  PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM: 
                                  PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID: 
                                  PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR           
          RETURN
.
DEPRURE1  RESET     KEY8                                                        
          DELETE    PRIUREA1,KEY8                                               
          RETURN
.
RSPRURE2  RESET     KEY24                                                       
          READ      PRIUREA2,KEY24;;                                            
          RETURN
.
RAPRURE2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRIUREA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRURE2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRIUREA2,KEY24;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA:
                                   PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM:
                                   PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID:
                                   PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRURE2  MOVE      ZERO,OVRCD                                                  
          READKS    PRIUREA2;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA:      
                             PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM:      
                             PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID:      
                             PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRURE2  MOVE      ZERO,OVRCD                                                  
          READKP    PRIUREA2;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA:      
                             PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM:      
                             PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID:      
                             PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRURE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRIUREA2;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA:      
                             PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM:      
                             PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID:      
                             PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR                
          RETURN
.
WRPRURE2  RESET     KEY24                                                       
          WRITE     PRIUREA2,KEY24;PRURINVN,PRURDEBT,PRURSCAN,PRURSTAT,PRURMPRA:
                                   PRURSDOC,PRURCLMN,PRURHFND,PRURINVT,PRURPAYM:
                                   PRURJRNL,PRUROSTD,PRURCDAT,PRURCTIM,PRURCUID:
                                   PRURUDAT,PRURUTIM,PRURUUID,PRURSPAR          
          RETURN
.
DEPRURE2  RESET     KEY24                                                       
          DELETE    PRIUREA2,KEY24                                              
          RETURN
.
