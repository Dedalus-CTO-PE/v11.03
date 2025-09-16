.
. PMSUHLIO    
. --------
. Filename     : pmsuhlaf.dat
.
RSPMUHL1  RESET     KEY7                                                        
          READ      PMSUHLA1,KEY7;;                                             
          RETURN
.
RAPMUHL1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PMSUHLA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUHL1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PMSUHLA1,KEY7;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUHL1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUHLA1;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUHL1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUHLA1;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUHL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUHLA1;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR       
          RETURN
.
WRPMUHL1  RESET     KEY7                                                        
          WRITE     PMSUHLA1,KEY7;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR  
          RETURN
.
DEPMUHL1  RESET     KEY7                                                        
          DELETE    PMSUHLA1,KEY7                                               
          RETURN
.
RSPMUHL2  RESET     KEY27                                                       
          READ      PMSUHLA2,KEY27;;                                            
          RETURN
.
RAPMUHL2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUHLA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUHL2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUHLA2,KEY27;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUHL2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUHLA2;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUHL2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUHLA2;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUHL2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUHLA2;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR       
          RETURN
.
WRPMUHL2  RESET     KEY27                                                       
          WRITE     PMSUHLA2,KEY27;PMULTYPE,PMULWDCD,PMULBDCD,PMULUHID,PMULSPAR 
          RETURN
.
DEPMUHL2  RESET     KEY27                                                       
          DELETE    PMSUHLA2,KEY27                                              
          RETURN
.
