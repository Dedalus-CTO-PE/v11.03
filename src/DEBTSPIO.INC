.
. DEBTSPIO    
. --------
. Filename     : debtspaf.dat
.
RSDBTS1   RESET     KEY21                                                       
          READ      DEBTSPA1,KEY21;;                                            
          RETURN
.
RADBTS1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      DEBTSPA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBTS1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      DEBTSPA1,KEY21;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBTS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBTSPA1;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBTS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBTSPA1;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBTS1                                                                         
          UPDATE    DEBTSPA1;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA           
          RETURN
.
WRDBTS1   RESET     KEY21                                                       
          WRITE     DEBTSPA1,KEY21;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA     
          RETURN
.
DEDBTS1   RESET     KEY21                                                       
          DELETE    DEBTSPA1,KEY21                                              
          RETURN
.
RSDBTS2   RESET     KEY29                                                       
          READ      DEBTSPA2,KEY29;;                                            
          RETURN
.
RADBTS2   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      DEBTSPA2,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBTS2   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      DEBTSPA2,KEY29;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBTS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBTSPA2;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBTS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBTSPA2;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBTS2                                                                         
          UPDATE    DEBTSPA2;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA           
          RETURN
.
WRDBTS2   RESET     KEY29                                                       
          WRITE     DEBTSPA2,KEY29;DBTSDEB,DBTSDTY,DBTSDOC,DBTSDDAT,DBTSSPA     
          RETURN
.
DEDBTS2   RESET     KEY29                                                       
          DELETE    DEBTSPA2,KEY29                                              
          RETURN
.
