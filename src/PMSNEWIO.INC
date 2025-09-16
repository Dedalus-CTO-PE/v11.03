.
. PMSNEWIO    
. --------
. Filename     : pmsnewaf.dat
.
RSPMNEW1  RESET     KEY8                                                        
          READ      PMSNEWA1,KEY8;;                                             
          RETURN
.
RAPMNEW1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSNEWA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNEW1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSNEWA1,KEY8;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE: 
                                  PMNWSPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNEW1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNEWA1;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE:      
                             PMNWSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNEW1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNEWA1;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE:      
                             PMNWSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNEW1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNEWA1;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE:      
                             PMNWSPAR                                           
          RETURN
.
WRPMNEW1  RESET     KEY8                                                        
          WRITE     PMSNEWA1,KEY8;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE: 
                                  PMNWSPAR                                      
          RETURN
.
DEPMNEW1  RESET     KEY8                                                        
          DELETE    PMSNEWA1,KEY8                                               
          RETURN
.
RSPMNEW2  RESET     KEY3                                                        
          READ      PMSNEWA2,KEY3;;                                             
          RETURN
.
RAPMNEW2  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSNEWA2,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNEW2  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSNEWA2,KEY3;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE: 
                                  PMNWSPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNEW2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNEWA2;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE:      
                             PMNWSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNEW2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNEWA2;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE:      
                             PMNWSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNEW2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNEWA2;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE:      
                             PMNWSPAR                                           
          RETURN
.
WRPMNEW2  RESET     KEY3                                                        
          WRITE     PMSNEWA2,KEY3;PMNWFIEL,PMNWFLNO,PMNWDEFT,PMNWCODE,PMNWFREE: 
                                  PMNWSPAR                                      
          RETURN
.
DEPMNEW2  RESET     KEY3                                                        
          DELETE    PMSNEWA2,KEY3                                               
          RETURN
.
