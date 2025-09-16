.
. CCSEWTIO    
. --------
. Filename     : ccsewtaf.dat
.
RSCCEW1   RESET     KEY18                                                       
          READ      CCSEWTA1,KEY18;;                                            
          RETURN
.
RACCEW1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSEWTA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEW1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSEWTA1,KEY18;CCEWHCD,CCEWEPS,CCEWFWT,CCEWVWT,CCEWTWT:     
                        CCEWSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEW1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSEWTA1;CCEWHCD,CCEWEPS,CCEWFWT,CCEWVWT,CCEWTWT:           
                        CCEWSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEW1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSEWTA1;CCEWHCD,CCEWEPS,CCEWFWT,CCEWVWT,CCEWTWT:           
                        CCEWSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEW1                                                                         
          UPDATE    CCSEWTA1;CCEWHCD,CCEWEPS,CCEWFWT,CCEWVWT,CCEWTWT:           
                        CCEWSPA                                                 
          RETURN
.
WRCCEW1   RESET     KEY18                                                       
          WRITE     CCSEWTA1,KEY18;CCEWHCD,CCEWEPS,CCEWFWT,CCEWVWT,CCEWTWT:     
                        CCEWSPA                                                 
          RETURN
.
DECCEW1   RESET     KEY18                                                       
          DELETE    CCSEWTA1,KEY18                                              
          RETURN
.
