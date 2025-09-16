.
. PATCLPIO    
. --------
. Filename     : patclpaf.dat
.
RSPTCLP1  RESET     KEY19                                                       
          READ      PATCLPA1,KEY19;;                                            
          RETURN
.
RAPTCLP1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATCLPA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCLP1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATCLPA1,KEY19;PTCLVISN,PTCLCLTY,PTCLINVN,PTCLSNAM,PTCLGNAM:
                        PTCLADD1,PTCLADD2,PTCLADD3,PTCLADD4,PTCLPCOD,PTCLPPHN:  
                        PTCLBPHN,PTCLMPHN,PTCLEMAL,PTCLRLTN,PTCLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCLP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATCLPA1;PTCLVISN,PTCLCLTY,PTCLINVN,PTCLSNAM,PTCLGNAM:      
                        PTCLADD1,PTCLADD2,PTCLADD3,PTCLADD4,PTCLPCOD,PTCLPPHN:  
                        PTCLBPHN,PTCLMPHN,PTCLEMAL,PTCLRLTN,PTCLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCLP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATCLPA1;PTCLVISN,PTCLCLTY,PTCLINVN,PTCLSNAM,PTCLGNAM:      
                        PTCLADD1,PTCLADD2,PTCLADD3,PTCLADD4,PTCLPCOD,PTCLPPHN:  
                        PTCLBPHN,PTCLMPHN,PTCLEMAL,PTCLRLTN,PTCLSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCLP1                                                                        
          UPDATE    PATCLPA1;PTCLVISN,PTCLCLTY,PTCLINVN,PTCLSNAM,PTCLGNAM:      
                        PTCLADD1,PTCLADD2,PTCLADD3,PTCLADD4,PTCLPCOD,PTCLPPHN:  
                        PTCLBPHN,PTCLMPHN,PTCLEMAL,PTCLRLTN,PTCLSPAR            
          RETURN
.
WRPTCLP1  RESET     KEY19                                                       
          WRITE     PATCLPA1,KEY19;PTCLVISN,PTCLCLTY,PTCLINVN,PTCLSNAM,PTCLGNAM:
                        PTCLADD1,PTCLADD2,PTCLADD3,PTCLADD4,PTCLPCOD,PTCLPPHN:  
                        PTCLBPHN,PTCLMPHN,PTCLEMAL,PTCLRLTN,PTCLSPAR            
          RETURN
.
DEPTCLP1  RESET     KEY19                                                       
          DELETE    PATCLPA1,KEY19                                              
          RETURN
.
