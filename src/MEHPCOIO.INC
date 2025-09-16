.
. MEHPCOIO    
. --------
. Filename     : mehpcoaf.dat
.
RSMHPCO1  RESET     KEY30                                                       
          READ      MEHPCOA1,KEY30;;                                            
          RETURN
.
RAMHPCO1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPCOA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPCO1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPCOA1,KEY30;MHPOXDAT,MHPOXNUM,MHPOVISN,MHPOURNO,MHPOOCUR:
                        MHPOERID,MHPOCCOD,MHPORCOL,MHPOCDAT,MHPOWCPN,MHPOOESP:  
                        MHPOPVER,MHPOFCAR,MHPOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPCO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPCOA1;MHPOXDAT,MHPOXNUM,MHPOVISN,MHPOURNO,MHPOOCUR:      
                        MHPOERID,MHPOCCOD,MHPORCOL,MHPOCDAT,MHPOWCPN,MHPOOESP:  
                        MHPOPVER,MHPOFCAR,MHPOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPCO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPCOA1;MHPOXDAT,MHPOXNUM,MHPOVISN,MHPOURNO,MHPOOCUR:      
                        MHPOERID,MHPOCCOD,MHPORCOL,MHPOCDAT,MHPOWCPN,MHPOOESP:  
                        MHPOPVER,MHPOFCAR,MHPOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPCO1                                                                        
          UPDATE    MEHPCOA1;MHPOXDAT,MHPOXNUM,MHPOVISN,MHPOURNO,MHPOOCUR:      
                        MHPOERID,MHPOCCOD,MHPORCOL,MHPOCDAT,MHPOWCPN,MHPOOESP:  
                        MHPOPVER,MHPOFCAR,MHPOSPAR                              
          RETURN
.
WRMHPCO1  RESET     KEY30                                                       
          WRITE     MEHPCOA1,KEY30;MHPOXDAT,MHPOXNUM,MHPOVISN,MHPOURNO,MHPOOCUR:
                        MHPOERID,MHPOCCOD,MHPORCOL,MHPOCDAT,MHPOWCPN,MHPOOESP:  
                        MHPOPVER,MHPOFCAR,MHPOSPAR                              
          RETURN
.
DEMHPCO1  RESET     KEY30                                                       
          DELETE    MEHPCOA1,KEY30                                              
          RETURN
.
