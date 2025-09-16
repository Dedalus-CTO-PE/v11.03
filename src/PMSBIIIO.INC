.
. PMSBIIIO    
. --------
. Filename     : pmsbiiaf.dat
.
RSPMBII1  RESET     KEY12                                                       
          READ      PMSBIIA1,KEY12;;                                            
          RETURN
.
RAPMBII1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBIIA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBII1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBIIA1,KEY12;PMBISEID,PMBIVISN,PMBIURNO,PMBIADDT,PMBIDSDT:
                        PMBIIFDT,PMBIITDT,PMBIIAMT,PMBIPDRG,PMBICFLG,PMBISTAT:  
                        PMBIPRNT,PMBISPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBII1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBIIA1;PMBISEID,PMBIVISN,PMBIURNO,PMBIADDT,PMBIDSDT:      
                        PMBIIFDT,PMBIITDT,PMBIIAMT,PMBIPDRG,PMBICFLG,PMBISTAT:  
                        PMBIPRNT,PMBISPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBII1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBIIA1;PMBISEID,PMBIVISN,PMBIURNO,PMBIADDT,PMBIDSDT:      
                        PMBIIFDT,PMBIITDT,PMBIIAMT,PMBIPDRG,PMBICFLG,PMBISTAT:  
                        PMBIPRNT,PMBISPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBII1                                                                        
          UPDATE    PMSBIIA1;PMBISEID,PMBIVISN,PMBIURNO,PMBIADDT,PMBIDSDT:      
                        PMBIIFDT,PMBIITDT,PMBIIAMT,PMBIPDRG,PMBICFLG,PMBISTAT:  
                        PMBIPRNT,PMBISPAR                                       
          RETURN
.
WRPMBII1  RESET     KEY12                                                       
          WRITE     PMSBIIA1,KEY12;PMBISEID,PMBIVISN,PMBIURNO,PMBIADDT,PMBIDSDT:
                        PMBIIFDT,PMBIITDT,PMBIIAMT,PMBIPDRG,PMBICFLG,PMBISTAT:  
                        PMBIPRNT,PMBISPAR                                       
          RETURN
.
DEPMBII1  RESET     KEY12                                                       
          DELETE    PMSBIIA1,KEY12                                              
          RETURN
.
