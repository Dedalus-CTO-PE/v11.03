.
. MRTDSRIO    
. --------
. Filename     : mrtdsraf.dat
.
RSMRDSR1  RESET     KEY11                                                       
          READ      MRTDSRA1,KEY11;;                                            
          RETURN
.
RAMRDSR1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      MRTDSRA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRDSR1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      MRTDSRA1,KEY11;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DMRDSCNT,MRDSCNT
          RETURN
.
RKMRDSR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTDSRA1;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:      
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DMRDSCNT,MRDSCNT
          RETURN
.
RPMRDSR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTDSRA1;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:      
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DMRDSCNT,MRDSCNT
          RETURN
.
UPMRDSR1  MOVE      MRDSCNT,DMRDSCNT 
          UPDATE    MRTDSRA1;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:      
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          RETURN
.
WRMRDSR1  RESET     KEY11                                                       
          MOVE      MRDSCNT,DMRDSCNT
          WRITE     MRTDSRA1,KEY11;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          RETURN
.
DEMRDSR1  RESET     KEY11                                                       
          DELETE    MRTDSRA1,KEY11                                              
          RETURN
.
RSMRDSR2  RESET     KEY19                                                       
          READ      MRTDSRA2,KEY19;;                                            
          RETURN
.
RAMRDSR2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      MRTDSRA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRDSR2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      MRTDSRA2,KEY19;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DMRDSCNT,MRDSCNT
          RETURN
.
RKMRDSR2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTDSRA2;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:      
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DMRDSCNT,MRDSCNT
          RETURN
.
RPMRDSR2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTDSRA2;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:      
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DMRDSCNT,MRDSCNT
          RETURN
.
UPMRDSR2  MOVE      MRDSCNT,DMRDSCNT 
          UPDATE    MRTDSRA2;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:      
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          RETURN
.
WRMRDSR2  RESET     KEY19                                                       
          MOVE      MRDSCNT,DMRDSCNT
          WRITE     MRTDSRA2,KEY19;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          RETURN
.
DEMRDSR2  RESET     KEY19                                                       
          DELETE    MRTDSRA2,KEY19                                              
          RETURN
.
RSMRDSR3  RESET     KEY21                                                       
          READ      MRTDSRA3,KEY21;;                                            
          RETURN
.
RAMRDSR3  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      MRTDSRA3,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRDSR3  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      MRTDSRA3,KEY21;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DMRDSCNT,MRDSCNT
          RETURN
.
RKMRDSR3                                                                        
          MOVE      ZERO,OVRCD
          READKS    MRTDSRA3;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:      
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DMRDSCNT,MRDSCNT
          RETURN
.
RPMRDSR3                                                                        
          MOVE      ZERO,OVRCD
          READKP    MRTDSRA3;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:      
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DMRDSCNT,MRDSCNT
          RETURN
.
UPMRDSR3  MOVE      MRDSCNT,DMRDSCNT
          UPDATE    MRTDSRA3;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:      
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          RETURN
.
WRMRDSR3  RESET     KEY21                                                       
          MOVE      MRDSCNT,DMRDSCNT
          WRITE     MRTDSRA3,KEY21;MRDSVISN,DMRDSCNT,MRDSDTRQ,MRDSCONS,MRDSLTST:
                        MRDSCOM1,MRDSCOM2,MRDSCOM3,MRDSCOM4,MRDSCOM5,MRDSSPAR   
          RETURN
.
DEMRDSR3  RESET     KEY21                                                       
          DELETE    MRTDSRA3,KEY21                                              
          RETURN
.
