.
. CCSDSYIO    
. --------
. Filename     : ccsdsyaf.dat
.
RSCCDS1   RESET     KEY14                                                       
          READ      CCSDSYA1,KEY14;;                                            
          RETURN
.
RACCDS1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDSYA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDS1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDSYA1,KEY14;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDSYA1;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDSYA1;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDS1                                                                         
          UPDATE    CCSDSYA1;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA                    
          RETURN
.
WRCCDS1   RESET     KEY14                                                       
          WRITE     CCSDSYA1,KEY14;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA              
          RETURN
.
DECCDS1   RESET     KEY14                                                       
          DELETE    CCSDSYA1,KEY14                                              
          RETURN
.
RSCCDS2   RESET     KEY14                                                       
          READ      CCSDSYA2,KEY14;;                                            
          RETURN
.
RACCDS2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDSYA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDS2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDSYA2,KEY14;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDSYA2;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDSYA2;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDS2                                                                         
          UPDATE    CCSDSYA2;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA                    
          RETURN
.
WRCCDS2   RESET     KEY14                                                       
          WRITE     CCSDSYA2,KEY14;CCDSSEC,CCDSHCD,CCDSDPT,CCDSSPA              
          RETURN
.
DECCDS2   RESET     KEY14                                                       
          DELETE    CCSDSYA2,KEY14                                              
          RETURN
.
