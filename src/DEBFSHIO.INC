.
. DEBFSHIO    
. --------
. Filename     : debfshaf.dat
.
RSDBSH1   RESET     KEY10                                                       
          READ      DEBFSHA1,KEY10;;                                            
          RETURN
.
RADBSH1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFSHA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBSH1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFSHA1,KEY10;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBSH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFSHA1;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBSH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFSHA1;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBSH1                                                                         
          UPDATE    DEBFSHA1;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR       
          RETURN
.
WRDBSH1   RESET     KEY10                                                       
          WRITE     DEBFSHA1,KEY10;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR 
          RETURN
.
DEDBSH1   RESET     KEY10                                                       
          DELETE    DEBFSHA1,KEY10                                              
          RETURN
.
RSDBSH2   RESET     KEY18                                                       
          READ      DEBFSHA2,KEY18;;                                            
          RETURN
.
RADBSH2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFSHA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBSH2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFSHA2,KEY18;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBSH2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFSHA2;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBSH2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFSHA2;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBSH2                                                                         
          UPDATE    DEBFSHA2;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR       
          RETURN
.
WRDBSH2   RESET     KEY18                                                       
          WRITE     DEBFSHA2,KEY18;DBSHSTAT,DBSHDEBC,DBSHDSTA,DBSHTOTA,DBSHSPAR 
          RETURN
.
DEDBSH2   RESET     KEY18                                                       
          DELETE    DEBFSHA2,KEY18                                              
          RETURN
.
