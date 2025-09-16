.
. NZPCMTIO    
. --------
. Filename     : nzpcmtaf.dat
.
RSNZCMT1  RESET     KEY26                                                       
          READ      NZPCMTA1,KEY26;;                                            
          RETURN
.
RANZCMT1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCMTA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCMT1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCMTA1,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RKNZCMT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCMTA1;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RPNZCMT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCMTA1;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
UPNZCMT1                                                                        
          MOVE      NZCMCCNT,DNZCMCNT
          UPDATE    NZPCMTA1;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
WRNZCMT1  
          MOVE      NZCMCCNT,DNZCMCNT
          RESET     KEY26                                                       
          WRITE     NZPCMTA1,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
DENZCMT1  RESET     KEY26                                                       
          DELETE    NZPCMTA1,KEY26                                              
          RETURN
.
RSNZCMT2  RESET     KEY26                                                       
          READ      NZPCMTA2,KEY26;;                                            
          RETURN
.
RANZCMT2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCMTA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCMT2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCMTA2,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RKNZCMT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCMTA2;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RPNZCMT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCMTA2;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
UPNZCMT2                                                                        
          MOVE      NZCMCCNT,DNZCMCNT
          UPDATE    NZPCMTA2;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
WRNZCMT2 
          MOVE      NZCMCCNT,DNZCMCNT
          RESET     KEY26                                                       
          WRITE     NZPCMTA2,KEY26;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
DENZCMT2  RESET     KEY26                                                       
          DELETE    NZPCMTA2,KEY26                                              
          RETURN
.
RSNZCMT3  RESET     KEY35                                                       
          READ      NZPCMTA3,KEY35;;                                            
          RETURN
.
RANZCMT3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCMTA3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZCMT3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      NZPCMTA3,KEY35;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RKNZCMT3                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPCMTA3;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
RPNZCMT3                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPCMTA3;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DNZCMCNT,NZCMCCNT
          RETURN
.
UPNZCMT3                                                                        
          MOVE      NZCMCCNT,DNZCMCNT
          UPDATE    NZPCMTA3;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:      
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
WRNZCMT3  
          MOVE      NZCMCCNT,DNZCMCNT
          RESET     KEY35                                                       
          WRITE     NZPCMTA3,KEY35;NZCMCLMC,NZCMCNTR,NZCMRTYP,NZCMCPRC,NZCMITYP:
                        DNZCMCNT,NZCMFTYP,NZCMPROC,NZCMMIGP,NZCMSPAR
          RETURN
.
DENZCMT3  RESET     KEY35                                                       
          DELETE    NZPCMTA3,KEY35                                              
          RETURN
.
