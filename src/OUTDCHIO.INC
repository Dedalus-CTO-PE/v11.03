.
. OUTDCHIO    
. --------
. Filename     : outdchaf.dat
.
RSOTDCH1  RESET     KEY4                                                        
          READ      OUTDCHA1,KEY4;;                                             
          RETURN
.
RAOTDCH1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      OUTDCHA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTDCH1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      OUTDCHA1,KEY4;OTDCSLTY,OTDCREGR,OTDCIFLG,OTDCITMN,OTDCSUBN: 
                        OTDCWCRT,OTDCDCRT,OTDCTCRT,OTDCWUPD,OTDCDUPD,OTDCTUPD:  
                        OTDCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTDCH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTDCHA1;OTDCSLTY,OTDCREGR,OTDCIFLG,OTDCITMN,OTDCSUBN:      
                        OTDCWCRT,OTDCDCRT,OTDCTCRT,OTDCWUPD,OTDCDUPD,OTDCTUPD:  
                        OTDCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTDCH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTDCHA1;OTDCSLTY,OTDCREGR,OTDCIFLG,OTDCITMN,OTDCSUBN:      
                        OTDCWCRT,OTDCDCRT,OTDCTCRT,OTDCWUPD,OTDCDUPD,OTDCTUPD:  
                        OTDCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTDCH1                                                                        
          UPDATE    OUTDCHA1;OTDCSLTY,OTDCREGR,OTDCIFLG,OTDCITMN,OTDCSUBN:      
                        OTDCWCRT,OTDCDCRT,OTDCTCRT,OTDCWUPD,OTDCDUPD,OTDCTUPD:  
                        OTDCSPAR                                                
          RETURN
.
WROTDCH1  RESET     KEY4                                                        
          WRITE     OUTDCHA1,KEY4;OTDCSLTY,OTDCREGR,OTDCIFLG,OTDCITMN,OTDCSUBN: 
                        OTDCWCRT,OTDCDCRT,OTDCTCRT,OTDCWUPD,OTDCDUPD,OTDCTUPD:  
                        OTDCSPAR                                                
          RETURN
.
DEOTDCH1  RESET     KEY4                                                        
          DELETE    OUTDCHA1,KEY4                                               
          RETURN
.
