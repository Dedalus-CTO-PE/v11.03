.
. OPRMBSIO    
. --------
. Filename     : oprmbsaf.dat
.
RSOPMBS1  RESET     KEY13                                                       
          READ      OPRMBSA1,KEY13;;                                            
          RETURN
.
RAOPMBS1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRMBSA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPMBS1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRMBSA1,KEY13;OPMBUNIQ,OPMBCNTR,OPMBMBSI,OPMBCUID,OPMBCDAT:
                        OPMBCTIM,OPMBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPMBS1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRMBSA1;OPMBUNIQ,OPMBCNTR,OPMBMBSI,OPMBCUID,OPMBCDAT:      
                        OPMBCTIM,OPMBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPMBS1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRMBSA1;OPMBUNIQ,OPMBCNTR,OPMBMBSI,OPMBCUID,OPMBCDAT:      
                        OPMBCTIM,OPMBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPMBS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRMBSA1;OPMBUNIQ,OPMBCNTR,OPMBMBSI,OPMBCUID,OPMBCDAT:      
                        OPMBCTIM,OPMBSPAR                                       
          RETURN
.
WROPMBS1  RESET     KEY13                                                       
          WRITE     OPRMBSA1,KEY13;OPMBUNIQ,OPMBCNTR,OPMBMBSI,OPMBCUID,OPMBCDAT:
                        OPMBCTIM,OPMBSPAR                                       
          RETURN
.
DEOPMBS1  RESET     KEY13                                                       
          DELETE    OPRMBSA1,KEY13                                              
          RETURN
.
