.
. OBSPROIO    
. --------
. Filename     : obsproaf.dat
.
RSOBPRO1  RESET     KEY11                                                       
          READ      OBSPROA1,KEY11;;                                            
          RETURN
.
RAOBPRO1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSPROA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBPRO1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OBSPROA1,KEY11;OBPRVISN,OBPRLINE,OBPRPROC,OBPRSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBPRO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSPROA1;OBPRVISN,OBPRLINE,OBPRPROC,OBPRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBPRO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSPROA1;OBPRVISN,OBPRLINE,OBPRPROC,OBPRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBPRO1                                                                        
          UPDATE    OBSPROA1;OBPRVISN,OBPRLINE,OBPRPROC,OBPRSPAR                
          RETURN
.
WROBPRO1  RESET     KEY11                                                       
          WRITE     OBSPROA1,KEY11;OBPRVISN,OBPRLINE,OBPRPROC,OBPRSPAR          
          RETURN
.
DEOBPRO1  RESET     KEY11                                                       
          DELETE    OBSPROA1,KEY11                                              
          RETURN
.
