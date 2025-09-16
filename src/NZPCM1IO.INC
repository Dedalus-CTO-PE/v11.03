.
. NZPCM1IO    
. --------
. Filename     : nzpcm1af.dat
.
RSNZCM11  RESET     KEY26                                                       
          READ      NZPCM1A1,KEY26;;                                            
          RETURN
.
RANZCM11  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM1A1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCM11  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM1A1,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RKNZCM11                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCM1A1;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RPNZCM11                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCM1A1;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
UPNZCM11                                                                        
          MOVE      NZCMCCNT,DNZCMCNT
          UPDATE    NZPCM1A1;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
WRNZCM11  
          MOVE      NZCMCCNT,DNZCMCNT
          RESET     KEY26                                                       
          WRITE     NZPCM1A1,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
DENZCM11  RESET     KEY26                                                       
          DELETE    NZPCM1A1,KEY26                                              
          RETURN
.
RSNZCM12  RESET     KEY26                                                       
          READ      NZPCM1A2,KEY26;;                                            
          RETURN
.
RANZCM12  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM1A2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCM12  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM1A2,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RKNZCM12                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCM1A2;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RPNZCM12                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCM1A2;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
UPNZCM12                                                                        
          MOVE      NZCMCCNT,DNZCMCNT
          UPDATE    NZPCM1A2;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
WRNZCM12 
          MOVE      NZCMCCNT,DNZCMCNT
          RESET     KEY26                                                       
          WRITE     NZPCM1A2,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
DENZCM12  RESET     KEY26                                                       
          DELETE    NZPCM1A2,KEY26                                              
          RETURN
.
RSNZCM13  RESET     KEY35                                                       
          READ      NZPCM1A3,KEY35;;                                            
          RETURN
.
RANZCM13  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM1A3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCM13  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM1A3,KEY35;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RKNZCM13                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCM1A3;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RPNZCM13                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCM1A3;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
UPNZCM13                                                                        
          MOVE      NZCMCCNT,DNZCMCNT
          UPDATE    NZPCM1A3;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
WRNZCM13  
          MOVE      NZCMCCNT,DNZCMCNT
          RESET     KEY35                                                       
          WRITE     NZPCM1A3,KEY35;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
DENZCM13  RESET     KEY35                                                       
          DELETE    NZPCM1A3,KEY35                                              
          RETURN
.
