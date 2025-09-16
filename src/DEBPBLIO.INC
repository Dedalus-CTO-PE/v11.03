.
. DEBPBLIO    
. --------
. Filename     : debpblaf.dat
.
RSDBPB1   RESET     KEY11                                                       
          READ      DEBPBLA1,KEY11;;                                            
          RETURN
.
RADBPB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      DEBPBLA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBPB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      DEBPBLA1,KEY11;DBPBDEB,DBPBUNI,DBPBTYP,DBPBITM,DBPBDREF:    
                        DBPBOREF,DBPBQTY,DBPBPRI,DBPBTOT,DBPBTRT,DBPBTAX:       
                        DBPBUR1,DBPBUR2,DBPBUD1,DBPBUD2,DBPBUY1,DBPBUY2:        
                        DBPBUC1,DBPBUC2,DBPBUC3,DBPBUC4,DBPBGST,DBPBSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBPB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBPBLA1;DBPBDEB,DBPBUNI,DBPBTYP,DBPBITM,DBPBDREF:          
                        DBPBOREF,DBPBQTY,DBPBPRI,DBPBTOT,DBPBTRT,DBPBTAX:       
                        DBPBUR1,DBPBUR2,DBPBUD1,DBPBUD2,DBPBUY1,DBPBUY2:        
                        DBPBUC1,DBPBUC2,DBPBUC3,DBPBUC4,DBPBGST,DBPBSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBPB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBPBLA1;DBPBDEB,DBPBUNI,DBPBTYP,DBPBITM,DBPBDREF:          
                        DBPBOREF,DBPBQTY,DBPBPRI,DBPBTOT,DBPBTRT,DBPBTAX:       
                        DBPBUR1,DBPBUR2,DBPBUD1,DBPBUD2,DBPBUY1,DBPBUY2:        
                        DBPBUC1,DBPBUC2,DBPBUC3,DBPBUC4,DBPBGST,DBPBSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBPB1                                                                         
          UPDATE    DEBPBLA1;DBPBDEB,DBPBUNI,DBPBTYP,DBPBITM,DBPBDREF:          
                        DBPBOREF,DBPBQTY,DBPBPRI,DBPBTOT,DBPBTRT,DBPBTAX:       
                        DBPBUR1,DBPBUR2,DBPBUD1,DBPBUD2,DBPBUY1,DBPBUY2:        
                        DBPBUC1,DBPBUC2,DBPBUC3,DBPBUC4,DBPBGST,DBPBSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBPB1   RESET     KEY11                                                       
          WRITE     DEBPBLA1,KEY11;DBPBDEB,DBPBUNI,DBPBTYP,DBPBITM,DBPBDREF:    
                        DBPBOREF,DBPBQTY,DBPBPRI,DBPBTOT,DBPBTRT,DBPBTAX:       
                        DBPBUR1,DBPBUR2,DBPBUD1,DBPBUD2,DBPBUY1,DBPBUY2:        
                        DBPBUC1,DBPBUC2,DBPBUC3,DBPBUC4,DBPBGST,DBPBSPA         
          RETURN
.
DEDBPB1   RESET     KEY11                                                       
          DELETE    DEBPBLA1,KEY11                                              
          RETURN
.
RLDBPB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     DEBPBLA1,KEY11;DBPBDEB,DBPBUNI,DBPBTYP,DBPBITM,DBPBDREF:    
                        DBPBOREF,DBPBQTY,DBPBPRI,DBPBTOT,DBPBTRT,DBPBTAX:       
                        DBPBUR1,DBPBUR2,DBPBUD1,DBPBUD2,DBPBUY1,DBPBUY2:        
                        DBPBUC1,DBPBUC2,DBPBUC3,DBPBUC4,DBPBGST,DBPBSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBPB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBPBLA1;DBPBDEB,DBPBUNI,DBPBTYP,DBPBITM,DBPBDREF:          
                        DBPBOREF,DBPBQTY,DBPBPRI,DBPBTOT,DBPBTRT,DBPBTAX:       
                        DBPBUR1,DBPBUR2,DBPBUD1,DBPBUD2,DBPBUY1,DBPBUY2:        
                        DBPBUC1,DBPBUC2,DBPBUC3,DBPBUC4,DBPBGST,DBPBSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBPB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBPBLA1;DBPBDEB,DBPBUNI,DBPBTYP,DBPBITM,DBPBDREF:          
                        DBPBOREF,DBPBQTY,DBPBPRI,DBPBTOT,DBPBTRT,DBPBTAX:       
                        DBPBUR1,DBPBUR2,DBPBUD1,DBPBUD2,DBPBUY1,DBPBUY2:        
                        DBPBUC1,DBPBUC2,DBPBUC3,DBPBUC4,DBPBGST,DBPBSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBPB1   RESET     KEY11                                                       
          UNLOCK    DEBPBLA1                                                    
          RETURN
.
