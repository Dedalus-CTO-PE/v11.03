.
. DISPTLIO    
. --------
. Filename     : disptlaf.dat
.
RSDSPTL1  RESET     KEY25                                                       
          READ      DISPTLA1,KEY25;;                                            
          RETURN
.
RADSPTL1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      DISPTLA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDSPTL1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      DISPTLA1,KEY25;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDSPTL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    DISPTLA1;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:      
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDSPTL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    DISPTLA1;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:      
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDSPTL1                                                                        
          UPDATE    DISPTLA1;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:      
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          RETURN
.
WRDSPTL1  RESET     KEY25                                                       
          WRITE     DISPTLA1,KEY25;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          RETURN
.
DEDSPTL1  RESET     KEY25                                                       
          DELETE    DISPTLA1,KEY25                                              
          RETURN
.
RSDSPTL2  RESET     KEY25                                                       
          READ      DISPTLA2,KEY25;;                                            
          RETURN
.
RADSPTL2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      DISPTLA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDSPTL2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      DISPTLA2,KEY25;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDSPTL2                                                                        
          MOVE      ZERO,OVRCD
          READKS    DISPTLA2;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:      
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDSPTL2                                                                        
          MOVE      ZERO,OVRCD
          READKP    DISPTLA2;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:      
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDSPTL2                                                                        
          UPDATE    DISPTLA2;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:      
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          RETURN
.
WRDSPTL2  RESET     KEY25                                                       
          WRITE     DISPTLA2,KEY25;DSPLURNO,DSPLCODE,DSPLVISN,DSPLCUSR,DSPLCDAT:
                        DSPLCTIM,DSPLUUSR,DSPLUDAT,DSPLUTIM,DSPLSPAR            
          RETURN
.
DEDSPTL2  RESET     KEY25                                                       
          DELETE    DISPTLA2,KEY25                                              
          RETURN
.
