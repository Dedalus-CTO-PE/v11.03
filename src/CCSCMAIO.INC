.
. CCSCMAIO    
. --------
. Filename     : ccscmaaf.dat
.
RSCCMA1   RESET     KEY4                                                        
          READ      CCSCMAA1,KEY4;;                                             
          RETURN
.
RACCMA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCMAA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCMAA1,KEY4;CCMACOM,CCMADES,CCMAUR1,CCMAUR2,CCMAUD1:      
                        CCMAUD2,CCMAUC1,CCMAUC2,CCMAUY1,CCMAUY2,CCMASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMAA1;CCMACOM,CCMADES,CCMAUR1,CCMAUR2,CCMAUD1:           
                        CCMAUD2,CCMAUC1,CCMAUC2,CCMAUY1,CCMAUY2,CCMASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMAA1;CCMACOM,CCMADES,CCMAUR1,CCMAUR2,CCMAUD1:           
                        CCMAUD2,CCMAUC1,CCMAUC2,CCMAUY1,CCMAUY2,CCMASPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMA1                                                                         
          UPDATE    CCSCMAA1;CCMACOM,CCMADES,CCMAUR1,CCMAUR2,CCMAUD1:           
                        CCMAUD2,CCMAUC1,CCMAUC2,CCMAUY1,CCMAUY2,CCMASPA         
          RETURN
.
WRCCMA1   RESET     KEY4                                                        
          WRITE     CCSCMAA1,KEY4;CCMACOM,CCMADES,CCMAUR1,CCMAUR2,CCMAUD1:      
                        CCMAUD2,CCMAUC1,CCMAUC2,CCMAUY1,CCMAUY2,CCMASPA         
          RETURN
.
DECCMA1   RESET     KEY4                                                        
          DELETE    CCSCMAA1,KEY4                                               
          RETURN
.
