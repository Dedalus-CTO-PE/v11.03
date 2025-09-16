.
. PMSEDGIO    
. --------
. Filename     : pmsedgaf.dat
.
RSPMEDG1  RESET     KEY34                                                       
          READ      PMSEDGA1,KEY34;;                                            
          RETURN
.
RAPMEDG1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDGA1,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEDG1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDGA1,KEY34;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEDG1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEDGA1;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:      
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEDG1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEDGA1;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:      
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEDG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEDGA1;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:      
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          RETURN
.
WRPMEDG1  RESET     KEY34                                                       
          WRITE     PMSEDGA1,KEY34;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          RETURN
.
DEPMEDG1  RESET     KEY34                                                       
          DELETE    PMSEDGA1,KEY34                                              
          RETURN
.
RSPMEDG2  RESET     KEY42                                                       
          READ      PMSEDGA2,KEY42;;                                            
          RETURN
.
RAPMEDG2  RESET     KEY42                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDGA2,KEY42;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEDG2  RESET     KEY42                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDGA2,KEY42;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEDG2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEDGA2;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:      
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEDG2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEDGA2;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:      
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEDG2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEDGA2;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:      
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          RETURN
.
WRPMEDG2  RESET     KEY42                                                       
          WRITE     PMSEDGA2,KEY42;PMEGRTYP,PMEGKEYV,PMEGDRGV,PMEGPYCD,PMEGFDAT:
                        PMEGTDAT,PMEGCUID,PMEGCDAT,PMEGCTIM,PMEGUUID,PMEGUDAT:  
                        PMEGUTIM,PMEGCOMM,PMEGSPAR                              
          RETURN
.
DEPMEDG2  RESET     KEY42                                                       
          DELETE    PMSEDGA2,KEY42                                              
          RETURN
.
