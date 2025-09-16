.
. APSSNTIO    
. --------
. Filename     : apssntaf.dat
.
RSAPSN1   RESET     KEY8                                                        
          READ      APSSNTA1,KEY8;;                                             
          RETURN
.
RAAPSN1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSSNTA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPSN1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSSNTA1,KEY8;APSNCRD,APSNLIN,APSNDAT,APSNSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPSN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSSNTA1;APSNCRD,APSNLIN,APSNDAT,APSNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPSN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSSNTA1;APSNCRD,APSNLIN,APSNDAT,APSNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPSN1                                                                         
          UPDATE    APSSNTA1;APSNCRD,APSNLIN,APSNDAT,APSNSPA                    
          RETURN
.
WRAPSN1   RESET     KEY8                                                        
          WRITE     APSSNTA1,KEY8;APSNCRD,APSNLIN,APSNDAT,APSNSPA               
          RETURN
.
DEAPSN1   RESET     KEY8                                                        
          DELETE    APSSNTA1,KEY8                                               
          RETURN
.
