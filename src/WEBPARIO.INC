.
. WEBPARIO    
. --------
. Filename     : webparaf.dat
.
RSWBPAR1  RESET     KEY3                                                        
          READ      WEBPARA1,KEY3;;                                             
          RETURN
.
RAWBPAR1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      WEBPARA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPAR1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      WEBPARA1,KEY3;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD: 
                                  WBPRSPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPAR1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPARA1;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD:      
                             WBPRSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPAR1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPARA1;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD:      
                             WBPRSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPAR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPARA1;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD:      
                             WBPRSPAR                                           
          RETURN
.
WRWBPAR1  RESET     KEY3                                                        
          WRITE     WEBPARA1,KEY3;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD: 
                                  WBPRSPAR                                      
          RETURN
.
DEWBPAR1  RESET     KEY3                                                        
          DELETE    WEBPARA1,KEY3                                               
          RETURN
.
RSWBPAR2  RESET     KEY43                                                       
          READ      WEBPARA2,KEY43;;                                            
          RETURN
.
RAWBPAR2  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPARA2,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPAR2  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPARA2,KEY43;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD:
                                   WBPRSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPAR2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPARA2;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD:      
                             WBPRSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPAR2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPARA2;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD:      
                             WBPRSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPAR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPARA2;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD:      
                             WBPRSPAR                                           
          RETURN
.
WRWBPAR2  RESET     KEY43                                                       
          WRITE     WEBPARA2,KEY43;WBPRCODE,WBPRTYPE,WBPRNAME,WBPRCNUM,WBPRDUPD:
                                   WBPRSPAR                                     
          RETURN
.
DEWBPAR2  RESET     KEY43                                                       
          DELETE    WEBPARA2,KEY43                                              
          RETURN
.
