.
. PRIESHIO    
. --------
. Filename     : prieshaf.dat
.
RSPRESH1  RESET     KEY40                                                       
          READ      PRIESHA1,KEY40;;                                            
          RETURN
.
RAPRESH1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PRIESHA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRESH1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PRIESHA1,KEY40;PRSHFBID,PRSHARID,PRSHCLID,PRSHRPTC,PRSHITMN:
                        PRSHSRVC,PRSHCAMT,PRSHFBAM,PRSHSDTE,PRSHMBAM,PRSHMEXC:  
                        PRSHSCHF,PRSHSFAC,PRSHSVID,PRSHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRESH1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIESHA1;PRSHFBID,PRSHARID,PRSHCLID,PRSHRPTC,PRSHITMN:      
                        PRSHSRVC,PRSHCAMT,PRSHFBAM,PRSHSDTE,PRSHMBAM,PRSHMEXC:  
                        PRSHSCHF,PRSHSFAC,PRSHSVID,PRSHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRESH1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIESHA1;PRSHFBID,PRSHARID,PRSHCLID,PRSHRPTC,PRSHITMN:      
                        PRSHSRVC,PRSHCAMT,PRSHFBAM,PRSHSDTE,PRSHMBAM,PRSHMEXC:  
                        PRSHSCHF,PRSHSFAC,PRSHSVID,PRSHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRESH1  UPDATE    PRIESHA1;PRSHFBID,PRSHARID,PRSHCLID,PRSHRPTC,PRSHITMN:      
                        PRSHSRVC,PRSHCAMT,PRSHFBAM,PRSHSDTE,PRSHMBAM,PRSHMEXC:  
                        PRSHSCHF,PRSHSFAC,PRSHSVID,PRSHSPAR                     
          RETURN
.
WRPRESH1  RESET     KEY40                                                       
          WRITE     PRIESHA1,KEY40;PRSHFBID,PRSHARID,PRSHCLID,PRSHRPTC,PRSHITMN:
                        PRSHSRVC,PRSHCAMT,PRSHFBAM,PRSHSDTE,PRSHMBAM,PRSHMEXC:  
                        PRSHSCHF,PRSHSFAC,PRSHSVID,PRSHSPAR                     
          RETURN
.
DEPRESH1  RESET     KEY40                                                       
          DELETE    PRIESHA1,KEY40                                              
          RETURN
.
