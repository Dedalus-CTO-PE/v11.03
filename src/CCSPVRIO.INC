.
. CCSPVRIO    
. --------
. Filename     : ccspvraf.dat
.
RSCCPV1   RESET     KEY22                                                       
          READ      CCSPVRA1,KEY22;;                                            
          RETURN
.
RACCPV1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPVRA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPV1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPVRA1,KEY22;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:     
                        CCPVSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPV1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPVRA1;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:           
                        CCPVSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPV1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPVRA1;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:           
                        CCPVSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPV1                                                                         
          UPDATE    CCSPVRA1;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:           
                        CCPVSPA                                                 
          RETURN
.
WRCCPV1   RESET     KEY22                                                       
          WRITE     CCSPVRA1,KEY22;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:     
                        CCPVSPA                                                 
          RETURN
.
DECCPV1   RESET     KEY22                                                       
          DELETE    CCSPVRA1,KEY22                                              
          RETURN
.
RSCCPV2   RESET     KEY22                                                       
          READ      CCSPVRA2,KEY22;;                                            
          RETURN
.
RACCPV2   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPVRA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPV2   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CCSPVRA2,KEY22;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:     
                        CCPVSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPV2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPVRA2;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:           
                        CCPVSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPV2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPVRA2;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:           
                        CCPVSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPV2                                                                         
          UPDATE    CCSPVRA2;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:           
                        CCPVSPA                                                 
          RETURN
.
WRCCPV2   RESET     KEY22                                                       
          WRITE     CCSPVRA2,KEY22;CCPVHCD,CCPVDPT,CCPVPCD,CCPVCTY,CCPVRVI:     
                        CCPVSPA                                                 
          RETURN
.
DECCPV2   RESET     KEY22                                                       
          DELETE    CCSPVRA2,KEY22                                              
          RETURN
.
