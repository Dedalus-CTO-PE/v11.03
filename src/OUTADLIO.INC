.
. OUTADLIO    
. --------
. Filename     : outadlaf.dat
.
RSOTADL1  RESET     KEY4                                                        
          READ      OUTADLA1,KEY4;;                                             
          RETURN
.
RAOTADL1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      OUTADLA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTADL1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      OUTADLA1,KEY4;OTALSEID,OTALSEDC,OTALBDFR,OTALBDTO,OTALBKTY: 
                        OTALSIFR,OTALSITO,OTALCLFR,OTALCLTO,OTALSTFR,OTALSTTO:  
                        OTALURFR,OTALURTO,OTALDPYN,OTALVTFR,OTALVTTO,OTALMDFR:  
                        OTALMDTO,OTALCTFR,OTALCTTO,OTALOCFR,OTALOCTO,OTALLTYP:  
                        OTALSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTADL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTADLA1;OTALSEID,OTALSEDC,OTALBDFR,OTALBDTO,OTALBKTY:      
                        OTALSIFR,OTALSITO,OTALCLFR,OTALCLTO,OTALSTFR,OTALSTTO:  
                        OTALURFR,OTALURTO,OTALDPYN,OTALVTFR,OTALVTTO,OTALMDFR:  
                        OTALMDTO,OTALCTFR,OTALCTTO,OTALOCFR,OTALOCTO,OTALLTYP:  
                        OTALSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTADL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTADLA1;OTALSEID,OTALSEDC,OTALBDFR,OTALBDTO,OTALBKTY:      
                        OTALSIFR,OTALSITO,OTALCLFR,OTALCLTO,OTALSTFR,OTALSTTO:  
                        OTALURFR,OTALURTO,OTALDPYN,OTALVTFR,OTALVTTO,OTALMDFR:  
                        OTALMDTO,OTALCTFR,OTALCTTO,OTALOCFR,OTALOCTO,OTALLTYP:  
                        OTALSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTADL1                                                                        
          UPDATE    OUTADLA1;OTALSEID,OTALSEDC,OTALBDFR,OTALBDTO,OTALBKTY:      
                        OTALSIFR,OTALSITO,OTALCLFR,OTALCLTO,OTALSTFR,OTALSTTO:  
                        OTALURFR,OTALURTO,OTALDPYN,OTALVTFR,OTALVTTO,OTALMDFR:  
                        OTALMDTO,OTALCTFR,OTALCTTO,OTALOCFR,OTALOCTO,OTALLTYP:  
                        OTALSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTADL1  RESET     KEY4                                                        
          WRITE     OUTADLA1,KEY4;OTALSEID,OTALSEDC,OTALBDFR,OTALBDTO,OTALBKTY: 
                        OTALSIFR,OTALSITO,OTALCLFR,OTALCLTO,OTALSTFR,OTALSTTO:  
                        OTALURFR,OTALURTO,OTALDPYN,OTALVTFR,OTALVTTO,OTALMDFR:  
                        OTALMDTO,OTALCTFR,OTALCTTO,OTALOCFR,OTALOCTO,OTALLTYP:  
                        OTALSPAR                                                
          RETURN
.
DEOTADL1  RESET     KEY4                                                        
          DELETE    OUTADLA1,KEY4                                               
          RETURN
.
RLOTADL1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     OUTADLA1,KEY4;OTALSEID,OTALSEDC,OTALBDFR,OTALBDTO,OTALBKTY: 
                        OTALSIFR,OTALSITO,OTALCLFR,OTALCLTO,OTALSTFR,OTALSTTO:  
                        OTALURFR,OTALURTO,OTALDPYN,OTALVTFR,OTALVTTO,OTALMDFR:  
                        OTALMDTO,OTALCTFR,OTALCTTO,OTALOCFR,OTALOCTO,OTALLTYP:  
                        OTALSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTADL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTADLA1;OTALSEID,OTALSEDC,OTALBDFR,OTALBDTO,OTALBKTY:      
                        OTALSIFR,OTALSITO,OTALCLFR,OTALCLTO,OTALSTFR,OTALSTTO:  
                        OTALURFR,OTALURTO,OTALDPYN,OTALVTFR,OTALVTTO,OTALMDFR:  
                        OTALMDTO,OTALCTFR,OTALCTTO,OTALOCFR,OTALOCTO,OTALLTYP:  
                        OTALSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTADL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTADLA1;OTALSEID,OTALSEDC,OTALBDFR,OTALBDTO,OTALBKTY:      
                        OTALSIFR,OTALSITO,OTALCLFR,OTALCLTO,OTALSTFR,OTALSTTO:  
                        OTALURFR,OTALURTO,OTALDPYN,OTALVTFR,OTALVTTO,OTALMDFR:  
                        OTALMDTO,OTALCTFR,OTALCTTO,OTALOCFR,OTALOCTO,OTALLTYP:  
                        OTALSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTADL1  RESET     KEY4                                                        
          UNLOCK    OUTADLA1                                                    
          RETURN
.
