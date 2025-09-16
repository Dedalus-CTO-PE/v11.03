.
. APSCTSIO    
. --------
. Filename     : apsctsaf.dat
.
RSAPCT1   RESET     KEY3                                                        
          READ      APSCTSA1,KEY3;;                                             
          RETURN
.
RAAPCT1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      APSCTSA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCT1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      APSCTSA1,KEY3;APCTCODE,APCTDESC,APCTSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCTSA1;APCTCODE,APCTDESC,APCTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCTSA1;APCTCODE,APCTDESC,APCTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCT1                                                                         
          UPDATE    APSCTSA1;APCTCODE,APCTDESC,APCTSPAR                         
          RETURN
.
WRAPCT1   RESET     KEY3                                                        
          WRITE     APSCTSA1,KEY3;APCTCODE,APCTDESC,APCTSPAR                    
          RETURN
.
DEAPCT1   RESET     KEY3                                                        
          DELETE    APSCTSA1,KEY3                                               
          RETURN
.
