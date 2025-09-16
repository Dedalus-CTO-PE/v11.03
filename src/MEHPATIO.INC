.
. MEHPATIO    
. --------
. Filename     : mehpataf.dat
.
RSMHPAT1  RESET     KEY32                                                       
          READ      MEHPATA1,KEY32;;                                            
          RETURN
.
RAMHPAT1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPATA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPAT1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPATA1,KEY32;MHPTXDAT,MHPTXNUM,MHPTVISN,MHPTURNO,MHPTOCUR:
                                   MHPTERID,MHPTACID,MHPTATYP,MHPTASET,MHPTWCPN:
                                   MHPTSDAT,MHPTEDAT,MHPTFAMW,MHPTSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPAT1  MOVE      ZERO,OVRCD                                                  
          READKS    MEHPATA1;MHPTXDAT,MHPTXNUM,MHPTVISN,MHPTURNO,MHPTOCUR:      
                             MHPTERID,MHPTACID,MHPTATYP,MHPTASET,MHPTWCPN:      
                             MHPTSDAT,MHPTEDAT,MHPTFAMW,MHPTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPAT1  MOVE      ZERO,OVRCD                                                  
          READKP    MEHPATA1;MHPTXDAT,MHPTXNUM,MHPTVISN,MHPTURNO,MHPTOCUR:      
                             MHPTERID,MHPTACID,MHPTATYP,MHPTASET,MHPTWCPN:      
                             MHPTSDAT,MHPTEDAT,MHPTFAMW,MHPTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPAT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MEHPATA1;MHPTXDAT,MHPTXNUM,MHPTVISN,MHPTURNO,MHPTOCUR:      
                             MHPTERID,MHPTACID,MHPTATYP,MHPTASET,MHPTWCPN:      
                             MHPTSDAT,MHPTEDAT,MHPTFAMW,MHPTSPAR                
          RETURN
.
WRMHPAT1  RESET     KEY32                                                       
          WRITE     MEHPATA1,KEY32;MHPTXDAT,MHPTXNUM,MHPTVISN,MHPTURNO,MHPTOCUR:
                                   MHPTERID,MHPTACID,MHPTATYP,MHPTASET,MHPTWCPN:
                                   MHPTSDAT,MHPTEDAT,MHPTFAMW,MHPTSPAR          
          RETURN
.
DEMHPAT1  RESET     KEY32                                                       
          DELETE    MEHPATA1,KEY32                                              
          RETURN
.
