.
. PMSRDIIO    
. --------
. Filename     : pmsrdiaf.dat
.
RSPMRDI1  RESET     KEY29                                                       
          READ      PMSRDIA1,KEY29;;                                            
          RETURN
.
RAPMRDI1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRDIA1,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRDI1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRDIA1,KEY29;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:
                                   PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:
                                   PMRISPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRDI1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSRDIA1;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRDI1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSRDIA1;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRDI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSRDIA1;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          RETURN
.
WRPMRDI1  RESET     KEY29                                                       
          WRITE     PMSRDIA1,KEY29;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:
                                   PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:
                                   PMRISPAR                                     
          RETURN
.
DEPMRDI1  RESET     KEY29                                                       
          DELETE    PMSRDIA1,KEY29                                              
          RETURN
.
RSPMRDI2  RESET     KEY29                                                       
          READ      PMSRDIA2,KEY29;;                                            
          RETURN
.
RAPMRDI2  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRDIA2,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRDI2  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRDIA2,KEY29;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:
                                   PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:
                                   PMRISPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRDI2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSRDIA2;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRDI2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSRDIA2;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRDI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSRDIA2;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          RETURN
.
WRPMRDI2  RESET     KEY29                                                       
          WRITE     PMSRDIA2,KEY29;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:
                                   PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:
                                   PMRISPAR                                     
          RETURN
.
DEPMRDI2  RESET     KEY29                                                       
          DELETE    PMSRDIA2,KEY29                                              
          RETURN
.
RSPMRDI3  RESET     KEY29                                                       
          READ      PMSRDIA3,KEY29;;                                            
          RETURN
.
RAPMRDI3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRDIA3,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRDI3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRDIA3,KEY29;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:
                                   PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:
                                   PMRISPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRDI3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSRDIA3;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRDI3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSRDIA3;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRDI3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSRDIA3;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          RETURN
.
WRPMRDI3  RESET     KEY29                                                       
          WRITE     PMSRDIA3,KEY29;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:
                                   PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:
                                   PMRISPAR                                     
          RETURN
.
DEPMRDI3  RESET     KEY29                                                       
          DELETE    PMSRDIA3,KEY29                                              
          RETURN
.
RSPMRDI4  RESET     KEY29                                                       
          READ      PMSRDIA4,KEY29;;                                            
          RETURN
.
RAPMRDI4  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRDIA4,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRDI4  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRDIA4,KEY29;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:
                                   PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:
                                   PMRISPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRDI4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSRDIA4;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRDI4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSRDIA4;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRDI4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSRDIA4;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:      
                             PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:      
                             PMRISPAR                                           
          RETURN
.
WRPMRDI4  RESET     KEY29                                                       
          WRITE     PMSRDIA4,KEY29;PMRICNTR,PMRICTYP,PMRISTYP,PMRIICDC,PMRICDAT:
                                   PMRICTIM,PMRICUID,PMRIUDAT,PMRIUTIM,PMRIUUID:
                                   PMRISPAR                                     
          RETURN
.
DEPMRDI4  RESET     KEY29                                                       
          DELETE    PMSRDIA4,KEY29                                              
          RETURN
.
