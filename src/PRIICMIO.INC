.
. PRIICMIO    
. --------
. Filename     : priicmaf.dat
.
RSPRICM1  RESET     KEY17                                                       
          READ      PRIICMA1,KEY17;;                                            
          RETURN
.
RAPRICM1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PRIICMA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRICM1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PRIICMA1,KEY17;PRICINVN,PRICCTYP,PRICNOTE,PRICIDAT,PRICITIM:
                        PRICIUSR,PRICIOCG,PRICDIND,PRICDDAT,PRICDTIM,PRICDUSR:  
                        PRICDOCG,PRICSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRICM1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIICMA1;PRICINVN,PRICCTYP,PRICNOTE,PRICIDAT,PRICITIM:      
                        PRICIUSR,PRICIOCG,PRICDIND,PRICDDAT,PRICDTIM,PRICDUSR:  
                        PRICDOCG,PRICSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRICM1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIICMA1;PRICINVN,PRICCTYP,PRICNOTE,PRICIDAT,PRICITIM:      
                        PRICIUSR,PRICIOCG,PRICDIND,PRICDDAT,PRICDTIM,PRICDUSR:  
                        PRICDOCG,PRICSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRICM1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRIICMA1;PRICINVN,PRICCTYP,PRICNOTE,PRICIDAT,PRICITIM:      
                        PRICIUSR,PRICIOCG,PRICDIND,PRICDDAT,PRICDTIM,PRICDUSR:  
                        PRICDOCG,PRICSPAR                                       
          RETURN
.
WRPRICM1  RESET     KEY17                                                       
          WRITE     PRIICMA1,KEY17;PRICINVN,PRICCTYP,PRICNOTE,PRICIDAT,PRICITIM:
                        PRICIUSR,PRICIOCG,PRICDIND,PRICDDAT,PRICDTIM,PRICDUSR:  
                        PRICDOCG,PRICSPAR                                       
          RETURN
.
DEPRICM1  RESET     KEY17                                                       
          DELETE    PRIICMA1,KEY17                                              
          RETURN
.
