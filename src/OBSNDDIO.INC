.
. OBSNDDIO    
. --------
. Filename     : obsnddaf.dat
.
RSOBNDD1  RESET     KEY8                                                        
          READ      OBSNDDA1,KEY8;;                                             
          RETURN
.
RAOBNDD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OBSNDDA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBNDD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OBSNDDA1,KEY8;OBNDVISN,OBNDNDG1,OBNDACP1,OBNDNDG2,OBNDACP2: 
                        OBNDNDG3,OBNDACP3,OBNDNDG4,OBNDACP4,OBNDNDG5,OBNDACP5:  
                        OBNDNDG6,OBNDACP6,OBNDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBNDD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSNDDA1;OBNDVISN,OBNDNDG1,OBNDACP1,OBNDNDG2,OBNDACP2:      
                        OBNDNDG3,OBNDACP3,OBNDNDG4,OBNDACP4,OBNDNDG5,OBNDACP5:  
                        OBNDNDG6,OBNDACP6,OBNDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBNDD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSNDDA1;OBNDVISN,OBNDNDG1,OBNDACP1,OBNDNDG2,OBNDACP2:      
                        OBNDNDG3,OBNDACP3,OBNDNDG4,OBNDACP4,OBNDNDG5,OBNDACP5:  
                        OBNDNDG6,OBNDACP6,OBNDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBNDD1                                                                        
          UPDATE    OBSNDDA1;OBNDVISN,OBNDNDG1,OBNDACP1,OBNDNDG2,OBNDACP2:      
                        OBNDNDG3,OBNDACP3,OBNDNDG4,OBNDACP4,OBNDNDG5,OBNDACP5:  
                        OBNDNDG6,OBNDACP6,OBNDSPAR                              
          RETURN
.
WROBNDD1  RESET     KEY8                                                        
          WRITE     OBSNDDA1,KEY8;OBNDVISN,OBNDNDG1,OBNDACP1,OBNDNDG2,OBNDACP2: 
                        OBNDNDG3,OBNDACP3,OBNDNDG4,OBNDACP4,OBNDNDG5,OBNDACP5:  
                        OBNDNDG6,OBNDACP6,OBNDSPAR                              
          RETURN
.
DEOBNDD1  RESET     KEY8                                                        
          DELETE    OBSNDDA1,KEY8                                               
          RETURN
.
