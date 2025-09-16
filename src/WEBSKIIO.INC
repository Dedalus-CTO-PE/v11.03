.
. WEBSKIIO    
. --------
. Filename     : webskiaf.dat
.
RSWBSKI1  RESET     KEY90                                                       
          READ      WEBSKIA1,KEY90;;                                            
          RETURN
.
RAWBSKI1  RESET     KEY90                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSKIA1,KEY90;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSKI1  RESET     KEY90                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSKIA1,KEY90;WBSKUSID,WBSKKWRD,WBSKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSKI1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSKIA1;WBSKUSID,WBSKKWRD,WBSKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSKI1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSKIA1;WBSKUSID,WBSKKWRD,WBSKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSKI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSKIA1;WBSKUSID,WBSKKWRD,WBSKSPAR                         
          RETURN
.
WRWBSKI1  RESET     KEY90                                                       
          WRITE     WEBSKIA1,KEY90;WBSKUSID,WBSKKWRD,WBSKSPAR                   
          RETURN
.
DEWBSKI1  RESET     KEY90                                                       
          DELETE    WEBSKIA1,KEY90                                              
          RETURN
.
RSWBSKI2  RESET     KEY90                                                       
          READ      WEBSKIA2,KEY90;;                                            
          RETURN
.
RAWBSKI2  RESET     KEY90                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSKIA2,KEY90;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSKI2  RESET     KEY90                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSKIA2,KEY90;WBSKUSID,WBSKKWRD,WBSKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSKI2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSKIA2;WBSKUSID,WBSKKWRD,WBSKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSKI2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSKIA2;WBSKUSID,WBSKKWRD,WBSKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSKI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSKIA2;WBSKUSID,WBSKKWRD,WBSKSPAR                         
          RETURN
.
WRWBSKI2  RESET     KEY90                                                       
          WRITE     WEBSKIA2,KEY90;WBSKUSID,WBSKKWRD,WBSKSPAR                   
          RETURN
.
DEWBSKI2  RESET     KEY90                                                       
          DELETE    WEBSKIA2,KEY90                                              
          RETURN
.
