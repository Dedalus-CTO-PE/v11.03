.
. PMSUTXIO    
. --------
. Filename     : pmsutxaf.dat
.
RSPMUTX1  RESET     KEY43                                                       
          READ      PMSUTXA1,KEY43;;                                            
          RETURN
.
RAPMUTX1  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUTXA1,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUTX1  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUTXA1,KEY43;PMUXURNO,PMUXATYP,PMUXCTYP,PMUXHFND,PMUXHTAB:
                        PMUXEXPD,PMUXCOMT,PMUXNNUM,PMUXLNUM,PMUXCOMM,PMUXSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUTX1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUTXA1;PMUXURNO,PMUXATYP,PMUXCTYP,PMUXHFND,PMUXHTAB:      
                        PMUXEXPD,PMUXCOMT,PMUXNNUM,PMUXLNUM,PMUXCOMM,PMUXSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUTX1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUTXA1;PMUXURNO,PMUXATYP,PMUXCTYP,PMUXHFND,PMUXHTAB:      
                        PMUXEXPD,PMUXCOMT,PMUXNNUM,PMUXLNUM,PMUXCOMM,PMUXSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUTX1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUTXA1;PMUXURNO,PMUXATYP,PMUXCTYP,PMUXHFND,PMUXHTAB:      
                        PMUXEXPD,PMUXCOMT,PMUXNNUM,PMUXLNUM,PMUXCOMM,PMUXSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMUTX1  RESET     KEY43                                                       
          WRITE     PMSUTXA1,KEY43;PMUXURNO,PMUXATYP,PMUXCTYP,PMUXHFND,PMUXHTAB:
                        PMUXEXPD,PMUXCOMT,PMUXNNUM,PMUXLNUM,PMUXCOMM,PMUXSPAR   
          RETURN
.
DEPMUTX1  RESET     KEY43                                                       
          DELETE    PMSUTXA1,KEY43                                              
          RETURN
.
RLPMUTX1  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READL     PMSUTXA1,KEY43;PMUXURNO,PMUXATYP,PMUXCTYP,PMUXHFND,PMUXHTAB:
                        PMUXEXPD,PMUXCOMT,PMUXNNUM,PMUXLNUM,PMUXCOMM,PMUXSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMUTX1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSUTXA1;PMUXURNO,PMUXATYP,PMUXCTYP,PMUXHFND,PMUXHTAB:      
                        PMUXEXPD,PMUXCOMT,PMUXNNUM,PMUXLNUM,PMUXCOMM,PMUXSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMUTX1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSUTXA1;PMUXURNO,PMUXATYP,PMUXCTYP,PMUXHFND,PMUXHTAB:      
                        PMUXEXPD,PMUXCOMT,PMUXNNUM,PMUXLNUM,PMUXCOMM,PMUXSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMUTX1  RESET     KEY43                                                       
          UNLOCK    PMSUTXA1                                                    
          RETURN
.
