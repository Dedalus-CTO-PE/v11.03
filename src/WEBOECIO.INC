.
. WEBOECIO    
. --------
. Filename     : weboecaf.dat
.
RSWBOEC1  RESET     KEY11                                                       
          READ      WEBOECA1,KEY11;;                                            
          RETURN
.
RAWBOEC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEC1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA1,KEY11;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEC1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOECA1;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEC1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOECA1;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOECA1;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          RETURN
.
WRWBOEC1  RESET     KEY11                                                       
          WRITE     WEBOECA1,KEY11;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          RETURN
.
DEWBOEC1  RESET     KEY11                                                       
          DELETE    WEBOECA1,KEY11                                              
          RETURN
.
RSWBOEC2  RESET     KEY16                                                       
          READ      WEBOECA2,KEY16;;                                            
          RETURN
.
RAWBOEC2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEC2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA2,KEY16;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEC2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOECA2;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEC2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOECA2;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOECA2;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          RETURN
.
WRWBOEC2  RESET     KEY16                                                       
          WRITE     WEBOECA2,KEY16;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          RETURN
.
DEWBOEC2  RESET     KEY16                                                       
          DELETE    WEBOECA2,KEY16                                              
          RETURN
.
RSWBOEC3  RESET     KEY35                                                       
          READ      WEBOECA3,KEY35;;                                            
          RETURN
.
RAWBOEC3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEC3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA3,KEY35;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEC3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOECA3;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEC3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOECA3;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEC3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOECA3;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          RETURN
.
WRWBOEC3  RESET     KEY35                                                       
          WRITE     WEBOECA3,KEY35;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          RETURN
.
DEWBOEC3  RESET     KEY35                                                       
          DELETE    WEBOECA3,KEY35                                              
          RETURN
.
RSWBOEC4  RESET     KEY47                                                       
          READ      WEBOECA4,KEY47;;                                            
          RETURN
.
RAWBOEC4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA4,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEC4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA4,KEY47;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEC4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOECA4;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEC4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOECA4;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEC4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOECA4;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          RETURN
.
WRWBOEC4  RESET     KEY47                                                       
          WRITE     WEBOECA4,KEY47;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          RETURN
.
DEWBOEC4  RESET     KEY47                                                       
          DELETE    WEBOECA4,KEY47                                              
          RETURN
.
RSWBOEC5  RESET     KEY19                                                       
          READ      WEBOECA5,KEY19;;                                            
          RETURN
.
RAWBOEC5  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA5,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEC5  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA5,KEY19;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEC5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOECA5;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEC5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOECA5;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEC5  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOECA5;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          RETURN
.
WRWBOEC5  RESET     KEY19                                                       
          WRITE     WEBOECA5,KEY19;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          RETURN
.
DEWBOEC5  RESET     KEY19                                                       
          DELETE    WEBOECA5,KEY19                                              
          RETURN
.
RSWBOEC6  RESET     KEY14                                                       
          READ      WEBOECA6,KEY14;;                                            
          RETURN
.
RAWBOEC6  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA6,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOEC6  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOECA6,KEY14;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOEC6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOECA6;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOEC6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOECA6;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOEC6  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOECA6;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:      
                             WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:      
                             WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:      
                             WBOCELEG,WBOCMSID,WBOCSPAR                         
          RETURN
.
WRWBOEC6  RESET     KEY14                                                       
          WRITE     WEBOECA6,KEY14;WBOCVISN,WBOCCNTR,WBOCSTAT,WBOCURNO,WBOCARID:
                                   WBOCTRID,WBOCRQDT,WBOCETYP,WBOCERRC,WBOCERRD:
                                   WBOCCDTE,WBOCCTIM,WBOCUDTE,WBOCUTIM,WBOCHOSP:
                                   WBOCELEG,WBOCMSID,WBOCSPAR                   
          RETURN
.
DEWBOEC6  RESET     KEY14                                                       
          DELETE    WEBOECA6,KEY14                                              
          RETURN
.
