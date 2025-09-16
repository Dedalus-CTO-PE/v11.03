.
. NZPCM2IO    
. --------
. Filename     : nzpcm2af.dat
.
RSNZCM21  RESET     KEY26                                                       
          READ      NZPCM2A1,KEY26;;                                            
          RETURN
.
RANZCM21  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM2A1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCM21  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM2A1,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RKNZCM21                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCM2A1;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RPNZCM21                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCM2A1;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
UPNZCM21                                                                        
          MOVE      NZCMCCNT,DNZCMCNT
          UPDATE    NZPCM2A1;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
WRNZCM21  
          MOVE      NZCMCCNT,DNZCMCNT
          RESET     KEY26                                                       
          WRITE     NZPCM2A1,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
DENZCM21  RESET     KEY26                                                       
          DELETE    NZPCM2A1,KEY26                                              
          RETURN
.
RSNZCM22  RESET     KEY26                                                       
          READ      NZPCM2A2,KEY26;;                                            
          RETURN
.
RANZCM22  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM2A2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCM22  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM2A2,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RKNZCM22                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCM2A2;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RPNZCM22                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCM2A2;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
UPNZCM22                                                                        
          MOVE      NZCMCCNT,DNZCMCNT
          UPDATE    NZPCM2A2;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
WRNZCM22 
          MOVE      NZCMCCNT,DNZCMCNT
          RESET     KEY26                                                       
          WRITE     NZPCM2A2,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
DENZCM22  RESET     KEY26                                                       
          DELETE    NZPCM2A2,KEY26                                              
          RETURN
.
RSNZCM23  RESET     KEY35                                                       
          READ      NZPCM2A3,KEY35;;                                            
          RETURN
.
RANZCM23  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM2A3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCM23  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCM2A3,KEY35;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RKNZCM23                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCM2A3;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RPNZCM23                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCM2A3;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
UPNZCM23                                                                        
          MOVE      NZCMCCNT,DNZCMCNT
          UPDATE    NZPCM2A3;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
WRNZCM23  
          MOVE      NZCMCCNT,DNZCMCNT
          RESET     KEY35                                                       
          WRITE     NZPCM2A3,KEY35;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
DENZCM23  RESET     KEY35                                                       
          DELETE    NZPCM2A3,KEY35                                              
          RETURN
.
