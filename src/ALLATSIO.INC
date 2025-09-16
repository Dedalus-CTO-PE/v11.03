.
. ALLATSIO    
. --------
. Filename     : allatsaf.dat
.
RSALATS1  RESET     KEY13                                                       
          READ      ALLATSA1,KEY13;;                                            
          RETURN
.
RAALATS1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLATSA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALATS1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLATSA1,KEY13;ALATTYPE,ALATDESC,ALATACTV,ALATDEPT,ALATCDTE:
                        ALATFDTE,ALATREMD,ALATNAME,ALATCDAT,ALATCTIM,ALATCUID:  
                        ALATUDAT,ALATUTIM,ALATUUID,ALATSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALATS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLATSA1;ALATTYPE,ALATDESC,ALATACTV,ALATDEPT,ALATCDTE:      
                        ALATFDTE,ALATREMD,ALATNAME,ALATCDAT,ALATCTIM,ALATCUID:  
                        ALATUDAT,ALATUTIM,ALATUUID,ALATSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALATS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLATSA1;ALATTYPE,ALATDESC,ALATACTV,ALATDEPT,ALATCDTE:      
                        ALATFDTE,ALATREMD,ALATNAME,ALATCDAT,ALATCTIM,ALATCUID:  
                        ALATUDAT,ALATUTIM,ALATUUID,ALATSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALATS1                                                                        
          UPDATE    ALLATSA1;ALATTYPE,ALATDESC,ALATACTV,ALATDEPT,ALATCDTE:      
                        ALATFDTE,ALATREMD,ALATNAME,ALATCDAT,ALATCTIM,ALATCUID:  
                        ALATUDAT,ALATUTIM,ALATUUID,ALATSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALATS1  RESET     KEY13                                                       
          WRITE     ALLATSA1,KEY13;ALATTYPE,ALATDESC,ALATACTV,ALATDEPT,ALATCDTE:
                        ALATFDTE,ALATREMD,ALATNAME,ALATCDAT,ALATCTIM,ALATCUID:  
                        ALATUDAT,ALATUTIM,ALATUUID,ALATSPAR                     
          RETURN
.
DEALATS1  RESET     KEY13                                                       
          DELETE    ALLATSA1,KEY13                                              
          RETURN
.
RLALATS1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     ALLATSA1,KEY13;ALATTYPE,ALATDESC,ALATACTV,ALATDEPT,ALATCDTE:
                        ALATFDTE,ALATREMD,ALATNAME,ALATCDAT,ALATCTIM,ALATCUID:  
                        ALATUDAT,ALATUTIM,ALATUUID,ALATSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALATS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLATSA1;ALATTYPE,ALATDESC,ALATACTV,ALATDEPT,ALATCDTE:      
                        ALATFDTE,ALATREMD,ALATNAME,ALATCDAT,ALATCTIM,ALATCUID:  
                        ALATUDAT,ALATUTIM,ALATUUID,ALATSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALATS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLATSA1;ALATTYPE,ALATDESC,ALATACTV,ALATDEPT,ALATCDTE:      
                        ALATFDTE,ALATREMD,ALATNAME,ALATCDAT,ALATCTIM,ALATCUID:  
                        ALATUDAT,ALATUTIM,ALATUUID,ALATSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALATS1  RESET     KEY13                                                       
          UNLOCK    ALLATSA1                                                    
          RETURN
.
