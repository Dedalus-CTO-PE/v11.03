.
. IBABASIO    
. --------
. Filename     : ibabasaf.dat
.
RSIBBA1   RESET     KEY3                                                        
          READ      IBABASA1,KEY3;;                                             
          RETURN
.
RAIBBA1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBABASA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBBA1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBABASA1,KEY3;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBBA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBABASA1;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBBA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBABASA1;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBBA1                                                                         
          UPDATE    IBABASA1;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBBA1   RESET     KEY3                                                        
          WRITE     IBABASA1,KEY3;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR  
          RETURN
.
DEIBBA1   RESET     KEY3                                                        
          DELETE    IBABASA1,KEY3                                               
          RETURN
.
RLIBBA1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     IBABASA1,KEY3;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBBA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBABASA1;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBBA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBABASA1;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBBA1   RESET     KEY3                                                        
          UNLOCK    IBABASA1                                                    
          RETURN
.
RSIBBA2   RESET     KEY33                                                       
          READ      IBABASA2,KEY33;;                                            
          RETURN
.
RAIBBA2   RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      IBABASA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBBA2   RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      IBABASA2,KEY33;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBBA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBABASA2;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBBA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBABASA2;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBBA2                                                                         
          UPDATE    IBABASA2;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBBA2   RESET     KEY33                                                       
          WRITE     IBABASA2,KEY33;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR 
          RETURN
.
DEIBBA2   RESET     KEY33                                                       
          DELETE    IBABASA2,KEY33                                              
          RETURN
.
RLIBBA2   RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     IBABASA2,KEY33;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBBA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBABASA2;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBBA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBABASA2;IBBABASC,IBBADESC,IBBAACTV,IBBATYPE,IBBASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBBA2   RESET     KEY33                                                       
          UNLOCK    IBABASA2                                                    
          RETURN
.
