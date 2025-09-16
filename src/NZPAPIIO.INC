.
. NZPAPIIO    
. --------
. Filename     : nzpapiaf.dat
.
RSNZAPI1  RESET     KEY8                                                        
          READ      NZPAPIA1,KEY8;;                                             
          RETURN
.
RANZAPI1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      NZPAPIA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZAPI1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      NZPAPIA1,KEY8;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT: 
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZAPI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPAPIA1;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT:      
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZAPI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPAPIA1;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT:      
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZAPI1                                                                        
          UPDATE    NZPAPIA1;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT:      
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          RETURN
.
WRNZAPI1  RESET     KEY8                                                        
          WRITE     NZPAPIA1,KEY8;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT: 
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          RETURN
.
DENZAPI1  RESET     KEY8                                                        
          DELETE    NZPAPIA1,KEY8                                               
          RETURN
.
RSNZAPI2  RESET     KEY9                                                        
          READ      NZPAPIA2,KEY9;;                                             
          RETURN
.
RANZAPI2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      NZPAPIA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZAPI2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      NZPAPIA2,KEY9;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT: 
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZAPI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPAPIA2;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT:      
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZAPI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPAPIA2;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT:      
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZAPI2                                                                        
          UPDATE    NZPAPIA2;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT:      
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          RETURN
.
WRNZAPI2  RESET     KEY9                                                        
          WRITE     NZPAPIA2,KEY9;NZAPRPIS,NZAPSTAT,NZAPRINV,NZAPRDAT,NZAPRAMT: 
                        NZAPRGST,NZAPRPIN,NZAPADMN,NZAPURNO,NZAPSNAM,NZAPGNAM:  
                        NZAPCNTR,NZAPCNAM,NZAPHSNO,NZAPORGN,NZAPHNAM,NZAPINVN:  
                        NZAPSRID,NZAPAPDT,NZAPCOST,NZAPACOD,NZAPSCOD,NZAPGSTC:  
                        NZAPGSTA,NZAPGSTS,NZAPSPAR                              
          RETURN
.
DENZAPI2  RESET     KEY9                                                        
          DELETE    NZPAPIA2,KEY9                                               
          RETURN
.
