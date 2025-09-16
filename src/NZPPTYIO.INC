.
. NZPPTYIO    
. --------
. Filename     : nzpptyaf.dat
.
RSNZPTY1  RESET     KEY3                                                        
          READ      NZPPTYA1,KEY3;;                                             
          RETURN
.
RANZPTY1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      NZPPTYA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZPTY1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      NZPPTYA1,KEY3;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD: 
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZPTY1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPPTYA1;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD:      
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZPTY1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPPTYA1;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD:      
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZPTY1                                                                        
          UPDATE    NZPPTYA1;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD:      
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          RETURN
.
WRNZPTY1  RESET     KEY3                                                        
          WRITE     NZPPTYA1,KEY3;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD: 
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          RETURN
.
DENZPTY1  RESET     KEY3                                                        
          DELETE    NZPPTYA1,KEY3                                               
          RETURN
.
RSNZPTY2  RESET     KEY33                                                       
          READ      NZPPTYA2,KEY33;;                                            
          RETURN
.
RANZPTY2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPTYA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZPTY2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPPTYA2,KEY33;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD:
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZPTY2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPPTYA2;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD:      
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZPTY2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPPTYA2;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD:      
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZPTY2                                                                        
          UPDATE    NZPPTYA2;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD:      
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          RETURN
.
WRNZPTY2  RESET     KEY33                                                       
          WRITE     NZPPTYA2,KEY33;NZPTPTYP,NZPTDESC,NZPTPIND,NZPTCOST,NZPTACOD:
                        NZPTSCOD,NZPTGSTC,NZPTGSTA,NZPTGSTS,NZPTACTV,NZPTCDAT:  
                        NZPTCTIM,NZPTCUID,NZPTUDAT,NZPTUTIM,NZPTUUID,NZPTSPAR   
          RETURN
.
DENZPTY2  RESET     KEY33                                                       
          DELETE    NZPPTYA2,KEY33                                              
          RETURN
.
