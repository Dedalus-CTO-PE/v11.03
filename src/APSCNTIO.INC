.
. APSCNTIO    
. --------
. Filename     : apscntaf.dat
.
RSAPCN1   RESET     KEY8                                                        
          READ      APSCNTA1,KEY8;;                                             
          RETURN
.
RAAPCN1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSCNTA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCN1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSCNTA1,KEY8;APCNCRD,APCNLIN,APCNDAT,APCNSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCNTA1;APCNCRD,APCNLIN,APCNDAT,APCNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCNTA1;APCNCRD,APCNLIN,APCNDAT,APCNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCN1                                                                         
          UPDATE    APSCNTA1;APCNCRD,APCNLIN,APCNDAT,APCNSPA                    
          RETURN
.
WRAPCN1   RESET     KEY8                                                        
          WRITE     APSCNTA1,KEY8;APCNCRD,APCNLIN,APCNDAT,APCNSPA               
          RETURN
.
DEAPCN1   RESET     KEY8                                                        
          DELETE    APSCNTA1,KEY8                                               
          RETURN
.
