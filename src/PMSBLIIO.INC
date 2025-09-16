.
. PMSBLIIO    
. --------
. Filename     : pmsbliaf.dat
.
RSPMBLI1  RESET     KEY4                                                        
          READ      PMSBLIA1,KEY4;;                                             
          RETURN
.
RAPMBLI1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSBLIA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBLI1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSBLIA1,KEY4;PMBLSEID,PMBLSEDC,PMBLTYPE,PMBLSTDT,PMBLENDT: 
                        PMBLSTNM,PMBLENNM,PMBLDAYS,PMBLMAMT,PMBLWARD,PMBLHOSP:
                        PMBLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBLI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBLIA1;PMBLSEID,PMBLSEDC,PMBLTYPE,PMBLSTDT,PMBLENDT:      
                        PMBLSTNM,PMBLENNM,PMBLDAYS,PMBLMAMT,PMBLWARD,PMBLHOSP:
                        PMBLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBLI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBLIA1;PMBLSEID,PMBLSEDC,PMBLTYPE,PMBLSTDT,PMBLENDT:      
                        PMBLSTNM,PMBLENNM,PMBLDAYS,PMBLMAMT,PMBLWARD,PMBLHOSP:
                        PMBLSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBLI1                                                                        
          UPDATE    PMSBLIA1;PMBLSEID,PMBLSEDC,PMBLTYPE,PMBLSTDT,PMBLENDT:      
                        PMBLSTNM,PMBLENNM,PMBLDAYS,PMBLMAMT,PMBLWARD,PMBLHOSP:
                        PMBLSPAR   
          RETURN
.
WRPMBLI1  RESET     KEY4                                                        
          WRITE     PMSBLIA1,KEY4;PMBLSEID,PMBLSEDC,PMBLTYPE,PMBLSTDT,PMBLENDT: 
                        PMBLSTNM,PMBLENNM,PMBLDAYS,PMBLMAMT,PMBLWARD,PMBLHOSP:
                        PMBLSPAR   
          RETURN
.
DEPMBLI1  RESET     KEY4                                                        
          DELETE    PMSBLIA1,KEY4                                               
          RETURN
.
