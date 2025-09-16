.
. CCIGPRIO    
. --------
. Filename     : ccigpraf.dat
.
RSCCGPR1  RESET     KEY30                                                       
          READ      CCIGPRA1,KEY30;;                                            
          RETURN
.
RACCGPR1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      CCIGPRA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCGPR1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      CCIGPRA1,KEY30;DCCGPTYP,CCGPCOD1,CCGPCOD2,CCGPCOD3,CCGPPROC:
                        CCGPQNTY,CCGPSPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DCCGPTYP,CCGPTYPE                                           
          RETURN
.
RKCCGPR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    CCIGPRA1;DCCGPTYP,CCGPCOD1,CCGPCOD2,CCGPCOD3,CCGPPROC:      
                        CCGPQNTY,CCGPSPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DCCGPTYP,CCGPTYPE                                           
          RETURN
.
RPCCGPR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    CCIGPRA1;DCCGPTYP,CCGPCOD1,CCGPCOD2,CCGPCOD3,CCGPPROC:      
                        CCGPQNTY,CCGPSPAR                                       
          GOTO      OVERCOND IF OVER
          MOVE      DCCGPTYP,CCGPTYPE                                           
          RETURN
.
UPCCGPR1                                                                        
          MOVE      CCGPTYPE,DCCGPTYP                                           
          UPDATE    CCIGPRA1;DCCGPTYP,CCGPCOD1,CCGPCOD2,CCGPCOD3,CCGPPROC:      
                        CCGPQNTY,CCGPSPAR                                       
          RETURN
.
WRCCGPR1  RESET     KEY30                                                       
          MOVE      CCGPTYPE,DCCGPTYP                                           
          WRITE     CCIGPRA1,KEY30;DCCGPTYP,CCGPCOD1,CCGPCOD2,CCGPCOD3,CCGPPROC:
                        CCGPQNTY,CCGPSPAR                                       
          RETURN
.
DECCGPR1  RESET     KEY30                                                       
          DELETE    CCIGPRA1,KEY30                                              
          RETURN
.
