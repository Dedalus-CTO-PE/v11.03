.
. PATUREIO    
. --------
. Filename     : patureaf.dat
.
RSPTURE1  RESET     KEY8                                                        
          READ      PATUREA1,KEY8;;                                             
          RETURN
.
RAPTURE1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATUREA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTURE1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATUREA1,KEY8;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN: 
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTURE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATUREA1;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN:      
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTURE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATUREA1;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN:      
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTURE1                                                                        
          UPDATE    PATUREA1;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN:      
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          RETURN
.
WRPTURE1  RESET     KEY8                                                        
          WRITE     PATUREA1,KEY8;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN: 
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          RETURN
.
DEPTURE1  RESET     KEY8                                                        
          DELETE    PATUREA1,KEY8                                               
          RETURN
.
RSPTURE2  RESET     KEY24                                                       
          READ      PATUREA2,KEY24;;                                            
          RETURN
.
RAPTURE2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATUREA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTURE2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATUREA2,KEY24;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN:
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTURE2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATUREA2;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN:      
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTURE2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATUREA2;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN:      
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTURE2                                                                        
          UPDATE    PATUREA2;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN:      
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          RETURN
.
WRPTURE2  RESET     KEY24                                                       
          WRITE     PATUREA2,KEY24;PTURINVN,PTURVISN,PTURSTAT,PTURSYST,PTURCLMN:
                        PTURHFND,PTURHTAB,PTURINVT,PTURPAYM,PTURJRNL,PTUROSTD:  
                        PTURCDAT,PTURCTIM,PTURCUID,PTURUDAT,PTURUTIM,PTURUUID:  
                        PTURSPAR                                                
          RETURN
.
DEPTURE2  RESET     KEY24                                                       
          DELETE    PATUREA2,KEY24                                              
          RETURN
.
