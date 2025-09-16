.
. RESTMBIO    
. --------
. Filename     : restmbaf.dat
.
RSRETB1   RESET     KEY24                                                       
          READ      RESTMBA1,KEY24;;                                            
          RETURN
.
RARETB1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      RESTMBA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRETB1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      RESTMBA1,KEY24;RETBUCS,RETBCOD,RETBDES,RETBPRG,RETBREP:     
                        RETBTEM,RETBCUM,RETBUR1,RETBUR2,RETBUD1,RETBUD2:        
                        RETBUY1,RETBUY2,RETBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRETB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESTMBA1;RETBUCS,RETBCOD,RETBDES,RETBPRG,RETBREP:           
                        RETBTEM,RETBCUM,RETBUR1,RETBUR2,RETBUD1,RETBUD2:        
                        RETBUY1,RETBUY2,RETBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRETB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESTMBA1;RETBUCS,RETBCOD,RETBDES,RETBPRG,RETBREP:           
                        RETBTEM,RETBCUM,RETBUR1,RETBUR2,RETBUD1,RETBUD2:        
                        RETBUY1,RETBUY2,RETBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRETB1                                                                         
          UPDATE    RESTMBA1;RETBUCS,RETBCOD,RETBDES,RETBPRG,RETBREP:           
                        RETBTEM,RETBCUM,RETBUR1,RETBUR2,RETBUD1,RETBUD2:        
                        RETBUY1,RETBUY2,RETBSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRETB1   RESET     KEY24                                                       
          WRITE     RESTMBA1,KEY24;RETBUCS,RETBCOD,RETBDES,RETBPRG,RETBREP:     
                        RETBTEM,RETBCUM,RETBUR1,RETBUR2,RETBUD1,RETBUD2:        
                        RETBUY1,RETBUY2,RETBSPA                                 
          RETURN
.
DERETB1   RESET     KEY24                                                       
          DELETE    RESTMBA1,KEY24                                              
          RETURN
.
RLRETB1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     RESTMBA1,KEY24;RETBUCS,RETBCOD,RETBDES,RETBPRG,RETBREP:     
                        RETBTEM,RETBCUM,RETBUR1,RETBUR2,RETBUD1,RETBUD2:        
                        RETBUY1,RETBUY2,RETBSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRETB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESTMBA1;RETBUCS,RETBCOD,RETBDES,RETBPRG,RETBREP:           
                        RETBTEM,RETBCUM,RETBUR1,RETBUR2,RETBUD1,RETBUD2:        
                        RETBUY1,RETBUY2,RETBSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRETB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESTMBA1;RETBUCS,RETBCOD,RETBDES,RETBPRG,RETBREP:           
                        RETBTEM,RETBCUM,RETBUR1,RETBUR2,RETBUD1,RETBUD2:        
                        RETBUY1,RETBUY2,RETBSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURETB1   RESET     KEY24                                                       
          UNLOCK    RESTMBA1                                                    
          RETURN
.
