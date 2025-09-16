.
. ALLMEDIO    
. --------
. Filename     : allmedaf.dat
.
RSALMED1  RESET     KEY20                                                       
          READ      ALLMEDA1,KEY20;;                                            
          RETURN
.
RAALMED1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMEDA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALMED1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMEDA1,KEY20;ALMECODE,ALMEDESC,ALMEACTV,ALMEUNIT,ALMEGENR:
                        ALMEMEDR,ALMEIVAD,ALMEINVC,ALMEMEDT,ALMESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALMED1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLMEDA1;ALMECODE,ALMEDESC,ALMEACTV,ALMEUNIT,ALMEGENR:      
                        ALMEMEDR,ALMEIVAD,ALMEINVC,ALMEMEDT,ALMESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALMED1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLMEDA1;ALMECODE,ALMEDESC,ALMEACTV,ALMEUNIT,ALMEGENR:      
                        ALMEMEDR,ALMEIVAD,ALMEINVC,ALMEMEDT,ALMESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALMED1                                                                        
          UPDATE    ALLMEDA1;ALMECODE,ALMEDESC,ALMEACTV,ALMEUNIT,ALMEGENR:      
                        ALMEMEDR,ALMEIVAD,ALMEINVC,ALMEMEDT,ALMESPAR            
          RETURN
.
WRALMED1  RESET     KEY20                                                       
          WRITE     ALLMEDA1,KEY20;ALMECODE,ALMEDESC,ALMEACTV,ALMEUNIT,ALMEGENR:
                        ALMEMEDR,ALMEIVAD,ALMEINVC,ALMEMEDT,ALMESPAR            
          RETURN
.
DEALMED1  RESET     KEY20                                                       
          DELETE    ALLMEDA1,KEY20                                              
          RETURN
.
