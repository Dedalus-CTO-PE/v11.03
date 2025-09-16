.
. PMSPCTIO    
. --------
. Filename     : pmspctaf.dat
.
RSPMPCT1  RESET     KEY40                                                       
          READ      PMSPCTA1,KEY40;;                                            
          RETURN
.
RAPMPCT1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPCTA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPCT1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPCTA1,KEY40;PMPCUNIQ,PMPCADMN,PMPCDATE,PMPCTIME,PMPCTYPE:
                        PMPCETYP,PMPCESTA,PMPCDES1,PMPCDES2,PMPCWEBC,PMPCDATC:  
                        PMPCTIMC,PMPCWEBU,PMPCDATU,PMPCTIMU,PMPCRECS,PMPCWEBD:  
                        PMPCDATD,PMPCTIMD,PMPCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPCT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPCTA1;PMPCUNIQ,PMPCADMN,PMPCDATE,PMPCTIME,PMPCTYPE:      
                        PMPCETYP,PMPCESTA,PMPCDES1,PMPCDES2,PMPCWEBC,PMPCDATC:  
                        PMPCTIMC,PMPCWEBU,PMPCDATU,PMPCTIMU,PMPCRECS,PMPCWEBD:  
                        PMPCDATD,PMPCTIMD,PMPCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPCT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPCTA1;PMPCUNIQ,PMPCADMN,PMPCDATE,PMPCTIME,PMPCTYPE:      
                        PMPCETYP,PMPCESTA,PMPCDES1,PMPCDES2,PMPCWEBC,PMPCDATC:  
                        PMPCTIMC,PMPCWEBU,PMPCDATU,PMPCTIMU,PMPCRECS,PMPCWEBD:  
                        PMPCDATD,PMPCTIMD,PMPCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPCT1                                                                        
          UPDATE    PMSPCTA1;PMPCUNIQ,PMPCADMN,PMPCDATE,PMPCTIME,PMPCTYPE:      
                        PMPCETYP,PMPCESTA,PMPCDES1,PMPCDES2,PMPCWEBC,PMPCDATC:  
                        PMPCTIMC,PMPCWEBU,PMPCDATU,PMPCTIMU,PMPCRECS,PMPCWEBD:  
                        PMPCDATD,PMPCTIMD,PMPCSPAR                              
          RETURN
.
WRPMPCT1  RESET     KEY40                                                       
          WRITE     PMSPCTA1,KEY40;PMPCUNIQ,PMPCADMN,PMPCDATE,PMPCTIME,PMPCTYPE:
                        PMPCETYP,PMPCESTA,PMPCDES1,PMPCDES2,PMPCWEBC,PMPCDATC:  
                        PMPCTIMC,PMPCWEBU,PMPCDATU,PMPCTIMU,PMPCRECS,PMPCWEBD:  
                        PMPCDATD,PMPCTIMD,PMPCSPAR                              
          RETURN
.
DEPMPCT1  RESET     KEY40                                                       
          DELETE    PMSPCTA1,KEY40                                              
          RETURN
.
