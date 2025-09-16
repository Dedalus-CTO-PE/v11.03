.
. OUTRCMIO    
. --------
. Filename     : outrcmaf.dat
.
RSOTRCM1  RESET     KEY13                                                       
          READ      OUTRCMA1,KEY13;;                                            
          RETURN
.
RAOTRCM1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OUTRCMA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTRCM1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OUTRCMA1,KEY13;OTRCUNIQ,OTRCLINE,OTRCCOMM,OTRCCUID,OTRCCDAT:
                                   OTRCCTIM,OTRCUUID,OTRCUDAT,OTRCUTIM,OTRCSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTRCM1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTRCMA1;OTRCUNIQ,OTRCLINE,OTRCCOMM,OTRCCUID,OTRCCDAT:      
                             OTRCCTIM,OTRCUUID,OTRCUDAT,OTRCUTIM,OTRCSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTRCM1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTRCMA1;OTRCUNIQ,OTRCLINE,OTRCCOMM,OTRCCUID,OTRCCDAT:      
                             OTRCCTIM,OTRCUUID,OTRCUDAT,OTRCUTIM,OTRCSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTRCM1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTRCMA1;OTRCUNIQ,OTRCLINE,OTRCCOMM,OTRCCUID,OTRCCDAT:      
                             OTRCCTIM,OTRCUUID,OTRCUDAT,OTRCUTIM,OTRCSPAR       
          RETURN
.
WROTRCM1  RESET     KEY13                                                       
          WRITE     OUTRCMA1,KEY13;OTRCUNIQ,OTRCLINE,OTRCCOMM,OTRCCUID,OTRCCDAT:
                                   OTRCCTIM,OTRCUUID,OTRCUDAT,OTRCUTIM,OTRCSPAR 
          RETURN
.
DEOTRCM1  RESET     KEY13                                                       
          DELETE    OUTRCMA1,KEY13                                              
          RETURN
.
