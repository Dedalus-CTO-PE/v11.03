.
. SCRFLDIO    
. --------
. Filename     : scrfldaf.dat
.
RSSCFL1   RESET     KEY15                                                       
          READ      SCRFLDA1,KEY15;;                                            
          RETURN
.
RASCFL1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFLDA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCFL1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFLDA1,KEY15;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:     
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCFL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRFLDA1;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:           
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCFL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRFLDA1;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:           
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCFL1                                                                         
          UPDATE    SCRFLDA1;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:           
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          RETURN
.
WRSCFL1   RESET     KEY15                                                       
          WRITE     SCRFLDA1,KEY15;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:     
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          RETURN
.
DESCFL1   RESET     KEY15                                                       
          DELETE    SCRFLDA1,KEY15                                              
          RETURN
.
RSSCFL2   RESET     KEY20                                                       
          READ      SCRFLDA2,KEY20;;                                            
          RETURN
.
RASCFL2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFLDA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCFL2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFLDA2,KEY20;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:     
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCFL2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRFLDA2;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:           
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCFL2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRFLDA2;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:           
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCFL2                                                                         
          UPDATE    SCRFLDA2;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:           
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          RETURN
.
WRSCFL2   RESET     KEY20                                                       
          WRITE     SCRFLDA2,KEY20;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:     
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          RETURN
.
DESCFL2   RESET     KEY20                                                       
          DELETE    SCRFLDA2,KEY20                                              
          RETURN
.
RSSCFL3   RESET     KEY20                                                       
          READ      SCRFLDA3,KEY20;;                                            
          RETURN
.
RASCFL3   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFLDA3,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCFL3   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFLDA3,KEY20;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:     
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCFL3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRFLDA3;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:           
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCFL3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRFLDA3;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:           
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCFL3                                                                         
          UPDATE    SCRFLDA3;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:           
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          RETURN
.
WRSCFL3   RESET     KEY20                                                       
          WRITE     SCRFLDA3,KEY20;SCFLPID,SCFLSID,SCFLFNO,SCFLDES,SCFLTYP:     
                        SCFLFLD,SCFLCAL,SCFLWPF,SCFLFSC,SCFLDEC,SCFLMIN:        
                        SCFLMAX,SCFLFLN,SCFLFTY,SCFLKTY,SCFLMAN,SCFLFEX:        
                        SCFLDAF,SCFLMUL,SCFLKEY,SCFLMTY,SCFLSPA                 
          RETURN
.
DESCFL3   RESET     KEY20                                                       
          DELETE    SCRFLDA3,KEY20                                              
          RETURN
.
