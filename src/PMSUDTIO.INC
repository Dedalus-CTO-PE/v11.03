.
. PMSUDTIO    
. --------
. Filename     : pmsudtaf.dat
.
RSPMUDT1  RESET     KEY40                                                       
          READ      PMSUDTA1,KEY40;;                                            
          RETURN
.
RAPMUDT1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUDTA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUDT1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUDTA1,KEY40;PMUTURNO,PMUTATYP,PMUTCTYP,PMUTHFND,PMUTHTAB:
                        PMUTEXPD,PMUTCOMT,PMUTNNUM,PMUTIDAT,PMUTITIM,PMUTIUID:  
                        PMUTDIND,PMUTDDAT,PMUTDTIM,PMUTDUID,PMUTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUDT1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUDTA1;PMUTURNO,PMUTATYP,PMUTCTYP,PMUTHFND,PMUTHTAB:      
                        PMUTEXPD,PMUTCOMT,PMUTNNUM,PMUTIDAT,PMUTITIM,PMUTIUID:  
                        PMUTDIND,PMUTDDAT,PMUTDTIM,PMUTDUID,PMUTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUDT1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUDTA1;PMUTURNO,PMUTATYP,PMUTCTYP,PMUTHFND,PMUTHTAB:      
                        PMUTEXPD,PMUTCOMT,PMUTNNUM,PMUTIDAT,PMUTITIM,PMUTIUID:  
                        PMUTDIND,PMUTDDAT,PMUTDTIM,PMUTDUID,PMUTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUDT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUDTA1;PMUTURNO,PMUTATYP,PMUTCTYP,PMUTHFND,PMUTHTAB:      
                        PMUTEXPD,PMUTCOMT,PMUTNNUM,PMUTIDAT,PMUTITIM,PMUTIUID:  
                        PMUTDIND,PMUTDDAT,PMUTDTIM,PMUTDUID,PMUTSPAR            
          RETURN
.
WRPMUDT1  RESET     KEY40                                                       
          WRITE     PMSUDTA1,KEY40;PMUTURNO,PMUTATYP,PMUTCTYP,PMUTHFND,PMUTHTAB:
                        PMUTEXPD,PMUTCOMT,PMUTNNUM,PMUTIDAT,PMUTITIM,PMUTIUID:  
                        PMUTDIND,PMUTDDAT,PMUTDTIM,PMUTDUID,PMUTSPAR            
          RETURN
.
DEPMUDT1  RESET     KEY40                                                       
          DELETE    PMSUDTA1,KEY40                                              
          RETURN
.
