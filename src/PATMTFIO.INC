.
. PATMTFIO    
. --------
. Filename     : patmtfaf.dat
.
RSPTMTF1  RESET     KEY9                                                        
          READ      PATMTFA1,KEY9;;                                             
          RETURN
.
RAPTMTF1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATMTFA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMTF1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATMTFA1,KEY9;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMTF1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMTFA1;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMTF1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMTFA1;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMTF1                                                                        
          UPDATE    PATMTFA1;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR       
          RETURN
.
WRPTMTF1  RESET     KEY9                                                        
          WRITE     PATMTFA1,KEY9;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR  
          RETURN
.
DEPTMTF1  RESET     KEY9                                                        
          DELETE    PATMTFA1,KEY9                                               
          RETURN
.
RSPTMTF2  RESET     KEY9                                                        
          READ      PATMTFA2,KEY9;;                                             
          RETURN
.
RAPTMTF2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATMTFA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMTF2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PATMTFA2,KEY9;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMTF2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMTFA2;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMTF2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMTFA2;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMTF2                                                                        
          UPDATE    PATMTFA2;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR       
          RETURN
.
WRPTMTF2  RESET     KEY9                                                        
          WRITE     PATMTFA2,KEY9;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR  
          RETURN
.
DEPTMTF2  RESET     KEY9                                                        
          DELETE    PATMTFA2,KEY9                                               
          RETURN
.
RSPTMTF3  RESET     KEY15                                                       
          READ      PATMTFA3,KEY15;;                                            
          RETURN
.
RAPTMTF3  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PATMTFA3,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMTF3  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PATMTFA3,KEY15;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMTF3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMTFA3;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMTF3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMTFA3;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMTF3                                                                        
          UPDATE    PATMTFA3;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR       
          RETURN
.
WRPTMTF3  RESET     KEY15                                                       
          WRITE     PATMTFA3,KEY15;PTMTCLAM,PTMTHFND,PTMTCNTR,PTMTUSID,PTMTSPAR 
          RETURN
.
DEPTMTF3  RESET     KEY15                                                       
          DELETE    PATMTFA3,KEY15                                              
          RETURN
.
