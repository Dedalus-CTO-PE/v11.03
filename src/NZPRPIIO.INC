.
. NZPRPIIO    
. --------
. Filename     : nzprpiaf.dat
.
RSNZRPI1  RESET     KEY36                                                       
          READ      NZPRPIA1,KEY36;;                                            
          RETURN
.
RANZRPI1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRPIA1,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZRPI1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRPIA1,KEY36;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZRPI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPRPIA1;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:      
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZRPI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPRPIA1;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:      
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZRPI1                                                                        
          UPDATE    NZPRPIA1;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:      
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          RETURN
.
WRNZRPI1  RESET     KEY36                                                       
          WRITE     NZPRPIA1,KEY36;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          RETURN
.
DENZRPI1  RESET     KEY36                                                       
          DELETE    NZPRPIA1,KEY36                                              
          RETURN
.
RSNZRPI2  RESET     KEY8                                                        
          READ      NZPRPIA2,KEY8;;                                             
          RETURN
.
RANZRPI2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      NZPRPIA2,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZRPI2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      NZPRPIA2,KEY8;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT: 
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZRPI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPRPIA2;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:      
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZRPI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPRPIA2;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:      
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZRPI2                                                                        
          UPDATE    NZPRPIA2;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:      
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          RETURN
.
WRNZRPI2  RESET     KEY8                                                        
          WRITE     NZPRPIA2,KEY8;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT: 
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          RETURN
.
DENZRPI2  RESET     KEY8                                                        
          DELETE    NZPRPIA2,KEY8                                               
          RETURN
.
RSNZRPI3  RESET     KEY9                                                        
          READ      NZPRPIA3,KEY9;;                                             
          RETURN
.
RANZRPI3  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      NZPRPIA3,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZRPI3  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      NZPRPIA3,KEY9;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT: 
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZRPI3                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPRPIA3;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:      
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZRPI3                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPRPIA3;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:      
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZRPI3                                                                        
          UPDATE    NZPRPIA3;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT:      
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          RETURN
.
WRNZRPI3  RESET     KEY9                                                        
          WRITE     NZPRPIA3,KEY9;NZRPADMN,NZRPINVN,NZRPRINV,NZRPDATE,NZRPAMNT: 
                        NZRPPTYP,NZRPPCOD,NZRPAPIS,NZRPAPDT,NZRPCOMT,NZRPCDAT:  
                        NZRPCTIM,NZRPCUID,NZRPUDAT,NZRPUTIM,NZRPUUID,NZRPRPIS:  
                        NZRPSPAR                                                
          RETURN
.
DENZRPI3  RESET     KEY9                                                        
          DELETE    NZPRPIA3,KEY9                                               
          RETURN
.
