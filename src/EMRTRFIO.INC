.
. EMRTRFIO    
. --------
. Filename     : emrtrfaf.dat
.
RSEMTRF1  RESET     KEY14                                                       
          READ      EMRTRFA1,KEY14;;                                            
          RETURN
.
RAEMTRF1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTRFA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMTRF1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTRFA1,KEY14;EMTFTRIG,EMTFATTD,EMTFEFDA,EMTFDESC,EMTFAMNT:
                        EMTFSCOD,EMTFACTV,EMTFCDAT,EMTFCTIM,EMTFCUID,EMTFUDAT:  
                        EMTFUTIM,EMTFUUID,EMTFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMTRF1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRTRFA1;EMTFTRIG,EMTFATTD,EMTFEFDA,EMTFDESC,EMTFAMNT:      
                        EMTFSCOD,EMTFACTV,EMTFCDAT,EMTFCTIM,EMTFCUID,EMTFUDAT:  
                        EMTFUTIM,EMTFUUID,EMTFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMTRF1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRTRFA1;EMTFTRIG,EMTFATTD,EMTFEFDA,EMTFDESC,EMTFAMNT:      
                        EMTFSCOD,EMTFACTV,EMTFCDAT,EMTFCTIM,EMTFCUID,EMTFUDAT:  
                        EMTFUTIM,EMTFUUID,EMTFSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMTRF1                                                                        
          UPDATE    EMRTRFA1;EMTFTRIG,EMTFATTD,EMTFEFDA,EMTFDESC,EMTFAMNT:      
                        EMTFSCOD,EMTFACTV,EMTFCDAT,EMTFCTIM,EMTFCUID,EMTFUDAT:  
                        EMTFUTIM,EMTFUUID,EMTFSPAR                              
          RETURN
.
WREMTRF1  RESET     KEY14                                                       
          WRITE     EMRTRFA1,KEY14;EMTFTRIG,EMTFATTD,EMTFEFDA,EMTFDESC,EMTFAMNT:
                        EMTFSCOD,EMTFACTV,EMTFCDAT,EMTFCTIM,EMTFCUID,EMTFUDAT:  
                        EMTFUTIM,EMTFUUID,EMTFSPAR                              
          RETURN
.
DEEMTRF1  RESET     KEY14                                                       
          DELETE    EMRTRFA1,KEY14                                              
          RETURN
.
