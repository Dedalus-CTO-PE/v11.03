.
. DEBTCRIO    
. --------
. Filename     : debtcraf.dat
.
RSDBTC1   RESET     KEY11                                                       
          READ      DEBTCRA1,KEY11;;                                            
          RETURN
.
RADBTC1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      DEBTCRA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBTC1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      DEBTCRA1,KEY11;DBTCDEB,DBTCDLN,DBTCITM,DBTCSDAT,DBTCDREF:   
                        DBTCOREF,DBTCQTY,DBTCPRI,DBTCTOT,DBTCTRT,DBTCTAX:       
                        DBTCUR1,DBTCUR2,DBTCUD1,DBTCUD2,DBTCUY1,DBTCUY2:        
                        DBTCUC1,DBTCUC2,DBTCUC3,DBTCUC4,DBTCGST,DBTCSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBTC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBTCRA1;DBTCDEB,DBTCDLN,DBTCITM,DBTCSDAT,DBTCDREF:         
                        DBTCOREF,DBTCQTY,DBTCPRI,DBTCTOT,DBTCTRT,DBTCTAX:       
                        DBTCUR1,DBTCUR2,DBTCUD1,DBTCUD2,DBTCUY1,DBTCUY2:        
                        DBTCUC1,DBTCUC2,DBTCUC3,DBTCUC4,DBTCGST,DBTCSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBTC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBTCRA1;DBTCDEB,DBTCDLN,DBTCITM,DBTCSDAT,DBTCDREF:         
                        DBTCOREF,DBTCQTY,DBTCPRI,DBTCTOT,DBTCTRT,DBTCTAX:       
                        DBTCUR1,DBTCUR2,DBTCUD1,DBTCUD2,DBTCUY1,DBTCUY2:        
                        DBTCUC1,DBTCUC2,DBTCUC3,DBTCUC4,DBTCGST,DBTCSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBTC1                                                                         
          UPDATE    DEBTCRA1;DBTCDEB,DBTCDLN,DBTCITM,DBTCSDAT,DBTCDREF:         
                        DBTCOREF,DBTCQTY,DBTCPRI,DBTCTOT,DBTCTRT,DBTCTAX:       
                        DBTCUR1,DBTCUR2,DBTCUD1,DBTCUD2,DBTCUY1,DBTCUY2:        
                        DBTCUC1,DBTCUC2,DBTCUC3,DBTCUC4,DBTCGST,DBTCSPA         
          RETURN
.
WRDBTC1   RESET     KEY11                                                       
          WRITE     DEBTCRA1,KEY11;DBTCDEB,DBTCDLN,DBTCITM,DBTCSDAT,DBTCDREF:   
                        DBTCOREF,DBTCQTY,DBTCPRI,DBTCTOT,DBTCTRT,DBTCTAX:       
                        DBTCUR1,DBTCUR2,DBTCUD1,DBTCUD2,DBTCUY1,DBTCUY2:        
                        DBTCUC1,DBTCUC2,DBTCUC3,DBTCUC4,DBTCGST,DBTCSPA         
          RETURN
.
DEDBTC1   RESET     KEY11                                                       
          DELETE    DEBTCRA1,KEY11                                              
          RETURN
.
