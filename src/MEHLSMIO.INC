.
. MEHLSMIO    
. --------
. Filename     : mehlsmaf.dat
.
RSMHLSM1  RESET     KEY6                                                        
          READ      MEHLSMA1,KEY6;;                                             
          RETURN
.
RAMHLSM1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      MEHLSMA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHLSM1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      MEHLSMA1,KEY6;MHLMCRLS,MHLMVNLS,MHLMACTV,MHLMDINA,MHLMCUID: 
                        MHLMCDAT,MHLMCTIM,MHLMIUID,MHLMIDAT,MHLMITIM,MHLMSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHLSM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHLSMA1;MHLMCRLS,MHLMVNLS,MHLMACTV,MHLMDINA,MHLMCUID:      
                        MHLMCDAT,MHLMCTIM,MHLMIUID,MHLMIDAT,MHLMITIM,MHLMSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHLSM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHLSMA1;MHLMCRLS,MHLMVNLS,MHLMACTV,MHLMDINA,MHLMCUID:      
                        MHLMCDAT,MHLMCTIM,MHLMIUID,MHLMIDAT,MHLMITIM,MHLMSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHLSM1                                                                        
          UPDATE    MEHLSMA1;MHLMCRLS,MHLMVNLS,MHLMACTV,MHLMDINA,MHLMCUID:      
                        MHLMCDAT,MHLMCTIM,MHLMIUID,MHLMIDAT,MHLMITIM,MHLMSPAR   
          RETURN
.
WRMHLSM1  RESET     KEY6                                                        
          WRITE     MEHLSMA1,KEY6;MHLMCRLS,MHLMVNLS,MHLMACTV,MHLMDINA,MHLMCUID: 
                        MHLMCDAT,MHLMCTIM,MHLMIUID,MHLMIDAT,MHLMITIM,MHLMSPAR   
          RETURN
.
DEMHLSM1  RESET     KEY6                                                        
          DELETE    MEHLSMA1,KEY6                                               
          RETURN
.
