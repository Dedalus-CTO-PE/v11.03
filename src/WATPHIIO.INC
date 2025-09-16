.
. WATPHIIO    
. --------
. Filename     : watphiaf.dat
.
RSWTPHI1  RESET     KEY17                                                       
          READ      WATPHIA1,KEY17;;                                            
          RETURN
.
RAWTPHI1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WATPHIA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTPHI1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WATPHIA1,KEY17;WTPHPROC,WTPHEFDT,WTPHHDPV,WTPHDRGC,WTPHRHAT:
                        WTPHCHET,WTPHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTPHI1  MOVE      ZERO,OVRCD                                                  
          READKS    WATPHIA1;WTPHPROC,WTPHEFDT,WTPHHDPV,WTPHDRGC,WTPHRHAT:      
                        WTPHCHET,WTPHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTPHI1  MOVE      ZERO,OVRCD                                                  
          READKP    WATPHIA1;WTPHPROC,WTPHEFDT,WTPHHDPV,WTPHDRGC,WTPHRHAT:      
                        WTPHCHET,WTPHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTPHI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATPHIA1;WTPHPROC,WTPHEFDT,WTPHHDPV,WTPHDRGC,WTPHRHAT:      
                        WTPHCHET,WTPHSPAR                                       
          RETURN
.
WRWTPHI1  RESET     KEY17                                                       
          WRITE     WATPHIA1,KEY17;WTPHPROC,WTPHEFDT,WTPHHDPV,WTPHDRGC,WTPHRHAT:
                        WTPHCHET,WTPHSPAR                                       
          RETURN
.
DEWTPHI1  RESET     KEY17                                                       
          DELETE    WATPHIA1,KEY17                                              
          RETURN
.
