.
. CCSDEQIO    
. --------
. Filename     : ccsdeqaf.dat
.
RSCCDE1   RESET     KEY12                                                       
          READ      CCSDEQA1,KEY12;;                                            
          RETURN
.
RACCDE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDEQA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDEQA1,KEY12;CCDEPORT,CCDEHCD,CCDEDPT,CCDEDES,CCDENUM:    
                        CCDESTD,CCDEACT,CCDEBUD,CCDESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDEQA1;CCDEPORT,CCDEHCD,CCDEDPT,CCDEDES,CCDENUM:          
                        CCDESTD,CCDEACT,CCDEBUD,CCDESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDEQA1;CCDEPORT,CCDEHCD,CCDEDPT,CCDEDES,CCDENUM:          
                        CCDESTD,CCDEACT,CCDEBUD,CCDESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDE1                                                                         
          UPDATE    CCSDEQA1;CCDEPORT,CCDEHCD,CCDEDPT,CCDEDES,CCDENUM:          
                        CCDESTD,CCDEACT,CCDEBUD,CCDESPA                         
          RETURN
.
WRCCDE1   RESET     KEY12                                                       
          WRITE     CCSDEQA1,KEY12;CCDEPORT,CCDEHCD,CCDEDPT,CCDEDES,CCDENUM:    
                        CCDESTD,CCDEACT,CCDEBUD,CCDESPA                         
          RETURN
.
DECCDE1   RESET     KEY12                                                       
          DELETE    CCSDEQA1,KEY12                                              
          RETURN
.
