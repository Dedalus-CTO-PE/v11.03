.
. CEAMCPIO    
. --------
. Filename     : ceamcpaf.dat
.
RSCEMC1   RESET     KEY13                                                       
          READ      CEAMCPA1,KEY13;;                                            
          RETURN
.
RACEMC1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMCPA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEMC1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMCPA1,KEY13;CEMCJCD,CEMCSPC,CEMCPSC,CEMCDQTY,CEMCTQTY:   
                        CEMCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEMC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAMCPA1;CEMCJCD,CEMCSPC,CEMCPSC,CEMCDQTY,CEMCTQTY:         
                        CEMCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEMC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAMCPA1;CEMCJCD,CEMCSPC,CEMCPSC,CEMCDQTY,CEMCTQTY:         
                        CEMCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEMC1                                                                         
          UPDATE    CEAMCPA1;CEMCJCD,CEMCSPC,CEMCPSC,CEMCDQTY,CEMCTQTY:         
                        CEMCSPA                                                 
          RETURN
.
WRCEMC1   RESET     KEY13                                                       
          WRITE     CEAMCPA1,KEY13;CEMCJCD,CEMCSPC,CEMCPSC,CEMCDQTY,CEMCTQTY:   
                        CEMCSPA                                                 
          RETURN
.
DECEMC1   RESET     KEY13                                                       
          DELETE    CEAMCPA1,KEY13                                              
          RETURN
.
