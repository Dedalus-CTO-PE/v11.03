.
. IBADPTIO    
. --------
. Filename     : ibadptaf.dat
.
RSIBDPT1  RESET     KEY6                                                        
          READ      IBADPTA1,KEY6;;                                             
          RETURN
.
RAIBDPT1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      IBADPTA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBDPT1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      IBADPTA1,KEY6;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS: 
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBDPT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBADPTA1;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBDPT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBADPTA1;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBDPT1                                                                        
          UPDATE    IBADPTA1;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
WRIBDPT1  RESET     KEY6                                                        
          WRITE     IBADPTA1,KEY6;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS: 
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
DEIBDPT1  RESET     KEY6                                                        
          DELETE    IBADPTA1,KEY6                                               
          RETURN
.
RSIBDPT2  RESET     KEY9                                                        
          READ      IBADPTA2,KEY9;;                                             
          RETURN
.
RAIBDPT2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBADPTA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBDPT2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBADPTA2,KEY9;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS: 
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBDPT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBADPTA2;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBDPT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBADPTA2;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBDPT2                                                                        
          UPDATE    IBADPTA2;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
WRIBDPT2  RESET     KEY9                                                        
          WRITE     IBADPTA2,KEY9;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS: 
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
DEIBDPT2  RESET     KEY9                                                        
          DELETE    IBADPTA2,KEY9                                               
          RETURN
.
RSIBDPT3  RESET     KEY12                                                       
          READ      IBADPTA3,KEY12;;                                            
          RETURN
.
RAIBDPT3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      IBADPTA3,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBDPT3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      IBADPTA3,KEY12;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBDPT3                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBADPTA3;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBDPT3                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBADPTA3;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBDPT3                                                                        
          UPDATE    IBADPTA3;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
WRIBDPT3  RESET     KEY12                                                       
          WRITE     IBADPTA3,KEY12;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
DEIBDPT3  RESET     KEY12                                                       
          DELETE    IBADPTA3,KEY12                                              
          RETURN
.
RSIBDPT4  RESET     KEY9                                                        
          READ      IBADPTA4,KEY9;;                                             
          RETURN
.
RAIBDPT4  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBADPTA4,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBDPT4  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBADPTA4,KEY9;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS: 
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBDPT4                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBADPTA4;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBDPT4                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBADPTA4;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBDPT4                                                                        
          UPDATE    IBADPTA4;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
WRIBDPT4  RESET     KEY9                                                        
          WRITE     IBADPTA4,KEY9;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS: 
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
DEIBDPT4  RESET     KEY9                                                        
          DELETE    IBADPTA4,KEY9                                               
          RETURN
.
RSIBDPT5  RESET     KEY16                                                       
          READ      IBADPTA5,KEY16;;                                            
          RETURN
.
RAIBDPT5  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      IBADPTA5,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBDPT5  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      IBADPTA5,KEY16;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBDPT5                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBADPTA5;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBDPT5                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBADPTA5;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBDPT5                                                                        
          UPDATE    IBADPTA5;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:      
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
WRIBDPT5  RESET     KEY16                                                       
          WRITE     IBADPTA5,KEY16;IBDPDEPT,IBDPDESC,IBDPHOSP,IBDPWARD,IBDPEMRS:
                        IBDPOUTL,IBDPSPAR                                       
          RETURN
.
DEIBDPT5  RESET     KEY16                                                       
          DELETE    IBADPTA5,KEY16                                              
          RETURN
.
