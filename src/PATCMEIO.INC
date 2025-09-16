.
. PATCMEIO    
. --------
. Filename     : patcmeaf.dat
.
RSPTCME1  RESET     KEY8                                                        
          READ      PATCMEA1,KEY8;;                                             
          RETURN
.
RAPTCME1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATCMEA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCME1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATCMEA1,KEY8;PTCEADMN,PTCEURNO,PTCEWARD,PTCEWBED,PTCEPNAM: 
                        PTCEPSEX,PTCEPAGE,PTCEADOC,PTCEAMBS,PTCEIDSC,PTCEHFND:  
                        PTCEADAT,PTCEODAT,PTCECPAY,PTCEPCAT,PTCEBTYP,PTCECLOS:  
                        PTCETLOS,PTCELDAY,PTCEIDAY,PTCEODAY,PTCEDPIN,PTCEDTOU:  
                        PTCEDTOR,PTCEEDAY,PTCERATE,PTCEDCHR,PTCELSUM,PTCEACHR:  
                        PTCEDRGD,PTCESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCME1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATCMEA1;PTCEADMN,PTCEURNO,PTCEWARD,PTCEWBED,PTCEPNAM:      
                        PTCEPSEX,PTCEPAGE,PTCEADOC,PTCEAMBS,PTCEIDSC,PTCEHFND:  
                        PTCEADAT,PTCEODAT,PTCECPAY,PTCEPCAT,PTCEBTYP,PTCECLOS:  
                        PTCETLOS,PTCELDAY,PTCEIDAY,PTCEODAY,PTCEDPIN,PTCEDTOU:  
                        PTCEDTOR,PTCEEDAY,PTCERATE,PTCEDCHR,PTCELSUM,PTCEACHR:  
                        PTCEDRGD,PTCESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCME1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATCMEA1;PTCEADMN,PTCEURNO,PTCEWARD,PTCEWBED,PTCEPNAM:      
                        PTCEPSEX,PTCEPAGE,PTCEADOC,PTCEAMBS,PTCEIDSC,PTCEHFND:  
                        PTCEADAT,PTCEODAT,PTCECPAY,PTCEPCAT,PTCEBTYP,PTCECLOS:  
                        PTCETLOS,PTCELDAY,PTCEIDAY,PTCEODAY,PTCEDPIN,PTCEDTOU:  
                        PTCEDTOR,PTCEEDAY,PTCERATE,PTCEDCHR,PTCELSUM,PTCEACHR:  
                        PTCEDRGD,PTCESPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCME1                                                                        
          UPDATE    PATCMEA1;PTCEADMN,PTCEURNO,PTCEWARD,PTCEWBED,PTCEPNAM:      
                        PTCEPSEX,PTCEPAGE,PTCEADOC,PTCEAMBS,PTCEIDSC,PTCEHFND:  
                        PTCEADAT,PTCEODAT,PTCECPAY,PTCEPCAT,PTCEBTYP,PTCECLOS:  
                        PTCETLOS,PTCELDAY,PTCEIDAY,PTCEODAY,PTCEDPIN,PTCEDTOU:  
                        PTCEDTOR,PTCEEDAY,PTCERATE,PTCEDCHR,PTCELSUM,PTCEACHR:  
                        PTCEDRGD,PTCESPAR                                       
          RETURN
.
WRPTCME1  RESET     KEY8                                                        
          WRITE     PATCMEA1,KEY8;PTCEADMN,PTCEURNO,PTCEWARD,PTCEWBED,PTCEPNAM: 
                        PTCEPSEX,PTCEPAGE,PTCEADOC,PTCEAMBS,PTCEIDSC,PTCEHFND:  
                        PTCEADAT,PTCEODAT,PTCECPAY,PTCEPCAT,PTCEBTYP,PTCECLOS:  
                        PTCETLOS,PTCELDAY,PTCEIDAY,PTCEODAY,PTCEDPIN,PTCEDTOU:  
                        PTCEDTOR,PTCEEDAY,PTCERATE,PTCEDCHR,PTCELSUM,PTCEACHR:  
                        PTCEDRGD,PTCESPAR                                       
          RETURN
.
DEPTCME1  RESET     KEY8                                                        
          DELETE    PATCMEA1,KEY8                                               
          RETURN
.
