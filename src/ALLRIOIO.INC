.
. ALLRIOIO    
. --------
. Filename     : allrioaf.dat
.
RSALRIO1  RESET     KEY27                                                       
          READ      ALLRIOA1,KEY27;;                                            
          RETURN
.
RAALRIO1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRIOA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRIO1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRIOA1,KEY27;ALRIVISN,ALRIDATE,ALRITIME,ALRIOUTC,ALRISPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRIO1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLRIOA1;ALRIVISN,ALRIDATE,ALRITIME,ALRIOUTC,ALRISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRIO1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLRIOA1;ALRIVISN,ALRIDATE,ALRITIME,ALRIOUTC,ALRISPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRIO1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLRIOA1;ALRIVISN,ALRIDATE,ALRITIME,ALRIOUTC,ALRISPAR       
          RETURN
.
WRALRIO1  RESET     KEY27                                                       
          WRITE     ALLRIOA1,KEY27;ALRIVISN,ALRIDATE,ALRITIME,ALRIOUTC,ALRISPAR 
          RETURN
.
DEALRIO1  RESET     KEY27                                                       
          DELETE    ALLRIOA1,KEY27                                              
          RETURN
.
