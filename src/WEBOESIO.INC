.
. WEBOESIO    
. --------
. Filename     : weboesaf.dat
.
RSWBOES1  RESET     KEY14                                                       
          READ      WEBOESA1,KEY14;;                                            
          RETURN
.
RAWBOES1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOESA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOES1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOESA1,KEY14;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:
                                   WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:
                                   WBOSMSID,WBOSELEG,WBOSSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOES1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOESA1;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOES1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOESA1;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOES1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOESA1;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          RETURN
.
WRWBOES1  RESET     KEY14                                                       
          WRITE     WEBOESA1,KEY14;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:
                                   WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:
                                   WBOSMSID,WBOSELEG,WBOSSPAR                   
          RETURN
.
DEWBOES1  RESET     KEY14                                                       
          DELETE    WEBOESA1,KEY14                                              
          RETURN
.
RSWBOES2  RESET     KEY38                                                       
          READ      WEBOESA2,KEY38;;                                            
          RETURN
.
RAWBOES2  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOESA2,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOES2  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOESA2,KEY38;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:
                                   WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:
                                   WBOSMSID,WBOSELEG,WBOSSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOES2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOESA2;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOES2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOESA2;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOES2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOESA2;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          RETURN
.
WRWBOES2  RESET     KEY38                                                       
          WRITE     WEBOESA2,KEY38;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:
                                   WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:
                                   WBOSMSID,WBOSELEG,WBOSSPAR                   
          RETURN
.
DEWBOES2  RESET     KEY38                                                       
          DELETE    WEBOESA2,KEY38                                              
          RETURN
.
RSWBOES3  RESET     KEY50                                                       
          READ      WEBOESA3,KEY50;;                                            
          RETURN
.
RAWBOES3  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOESA3,KEY50;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOES3  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOESA3,KEY50;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:
                                   WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:
                                   WBOSMSID,WBOSELEG,WBOSSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOES3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOESA3;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOES3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOESA3;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOES3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOESA3;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          RETURN
.
WRWBOES3  RESET     KEY50                                                       
          WRITE     WEBOESA3,KEY50;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:
                                   WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:
                                   WBOSMSID,WBOSELEG,WBOSSPAR                   
          RETURN
.
DEWBOES3  RESET     KEY50                                                       
          DELETE    WEBOESA3,KEY50                                              
          RETURN
.
RSWBOES4  RESET     KEY22                                                       
          READ      WEBOESA4,KEY22;;                                            
          RETURN
.
RAWBOES4  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOESA4,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOES4  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOESA4,KEY22;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:
                                   WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:
                                   WBOSMSID,WBOSELEG,WBOSSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOES4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOESA4;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOES4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOESA4;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOES4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOESA4;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:      
                             WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:      
                             WBOSMSID,WBOSELEG,WBOSSPAR                         
          RETURN
.
WRWBOES4  RESET     KEY22                                                       
          WRITE     WEBOESA4,KEY22;WBOSVISN,WBOSCNTR,WBOSSCNT,WBOSRTYP,WBOSITEM:
                                   WBOSQUAN,WBOSPDTE,WBOSCDTE,WBOSCTIM,WBOSTRID:
                                   WBOSMSID,WBOSELEG,WBOSSPAR                   
          RETURN
.
DEWBOES4  RESET     KEY22                                                       
          DELETE    WEBOESA4,KEY22                                              
          RETURN
.
