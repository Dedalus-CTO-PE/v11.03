.
. OUTLPCIO    
. --------
. Filename     : outlpcaf.dat
.
RSOTLPC1  RESET     KEY5                                                        
          READ      OUTLPCA1,KEY5;;                                             
          RETURN
.
RAOTLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      OUTLPCA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      OUTLPCA1,KEY5;OTLPSCHE,OTLPURNO,OTLPBOOK,OTLPSITE,OTLPCLIN: 
                        OTLPSDAT,OTLPSTIM,OTLPSLOT,OTLPPRNT,OTLPCOPY,OTLPSTAT:  
                        OTLPLETT,OTLPPTYP,OTLPWEBU,OTLPRDAT,OTLPRTIM,OTLPSERS:
                        OTLPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTLPC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTLPCA1;OTLPSCHE,OTLPURNO,OTLPBOOK,OTLPSITE,OTLPCLIN:      
                        OTLPSDAT,OTLPSTIM,OTLPSLOT,OTLPPRNT,OTLPCOPY,OTLPSTAT:  
                        OTLPLETT,OTLPPTYP,OTLPWEBU,OTLPRDAT,OTLPRTIM,OTLPSERS:
                        OTLPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTLPC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTLPCA1;OTLPSCHE,OTLPURNO,OTLPBOOK,OTLPSITE,OTLPCLIN:      
                        OTLPSDAT,OTLPSTIM,OTLPSLOT,OTLPPRNT,OTLPCOPY,OTLPSTAT:  
                        OTLPLETT,OTLPPTYP,OTLPWEBU,OTLPRDAT,OTLPRTIM,OTLPSERS:
                        OTLPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTLPC1                                                                        
          UPDATE    OUTLPCA1;OTLPSCHE,OTLPURNO,OTLPBOOK,OTLPSITE,OTLPCLIN:      
                        OTLPSDAT,OTLPSTIM,OTLPSLOT,OTLPPRNT,OTLPCOPY,OTLPSTAT:  
                        OTLPLETT,OTLPPTYP,OTLPWEBU,OTLPRDAT,OTLPRTIM,OTLPSERS:
                        OTLPSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTLPC1  RESET     KEY5                                                        
          WRITE     OUTLPCA1,KEY5;OTLPSCHE,OTLPURNO,OTLPBOOK,OTLPSITE,OTLPCLIN: 
                        OTLPSDAT,OTLPSTIM,OTLPSLOT,OTLPPRNT,OTLPCOPY,OTLPSTAT:  
                        OTLPLETT,OTLPPTYP,OTLPWEBU,OTLPRDAT,OTLPRTIM,OTLPSERS:
                        OTLPSPAR   
          RETURN
.
DEOTLPC1  RESET     KEY5                                                        
          DELETE    OUTLPCA1,KEY5                                               
          RETURN
.
RLOTLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     OUTLPCA1,KEY5;OTLPSCHE,OTLPURNO,OTLPBOOK,OTLPSITE,OTLPCLIN: 
                        OTLPSDAT,OTLPSTIM,OTLPSLOT,OTLPPRNT,OTLPCOPY,OTLPSTAT:  
                        OTLPLETT,OTLPPTYP,OTLPWEBU,OTLPRDAT,OTLPRTIM,OTLPSERS:
                        OTLPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTLPC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTLPCA1;OTLPSCHE,OTLPURNO,OTLPBOOK,OTLPSITE,OTLPCLIN:      
                        OTLPSDAT,OTLPSTIM,OTLPSLOT,OTLPPRNT,OTLPCOPY,OTLPSTAT:  
                        OTLPLETT,OTLPPTYP,OTLPWEBU,OTLPRDAT,OTLPRTIM,OTLPSERS:
                        OTLPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTLPC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTLPCA1;OTLPSCHE,OTLPURNO,OTLPBOOK,OTLPSITE,OTLPCLIN:      
                        OTLPSDAT,OTLPSTIM,OTLPSLOT,OTLPPRNT,OTLPCOPY,OTLPSTAT:  
                        OTLPLETT,OTLPPTYP,OTLPWEBU,OTLPRDAT,OTLPRTIM,OTLPSERS:
                        OTLPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTLPC1  RESET     KEY5                                                        
          UNLOCK    OUTLPCA1                                                    
          RETURN
.
.----------------------------------------------------------------------------
. Save all outlpcaf file variables
.----------------------------------------------------------------------------
SOTL0000  MOVE      OTLPSCHE,SOVVSCHE   * Schedule No. (Allocated Unique ID)
          MOVE      OTLPURNO,SOVVURNO   * U/R Number
          MOVE      OTLPBOOK,SOVVBOOK   * Booking Number
          MOVE      OTLPSITE,SOVVSITE   * Site Code
          MOVE      OTLPCLIN,SOVVCLIN   * Clinic ID
          MOVE      OTLPSDAT,SOVVSDAT   * Start Date (CCYYMMDD)
          MOVE      OTLPSTIM,SOVVSTIM   * Start Time (HH:MM:SS)
          MOVE      OTLPSLOT,SOVVSLOT   * Slot Number
          MOVE      OTLPPRNT,SOVVPRNT   * Printer
          MOVE      OTLPCOPY,SOVVCOPY   * Number of Copies
          MOVE      OTLPSTAT,SOVVSTAT   * Stationery Code
          MOVE      OTLPLETT,SOVVLETT   * Letter Number
          MOVE      OTLPPTYP,SOVVPTYP   * Print Type (1=Form,2=Letter,3=Invoi
          MOVE      OTLPWEBU,SOVVWEBU   * WEB User ID (websecaf)
          MOVE      OTLPRDAT,SOVVRDAT   * Request Date (CCYYMMDD)
          MOVE      OTLPRTIM,SOVVRTIM   * Request Time (HH:MM:SS)
          MOVE      OTLPSERS,SOVVSERS   * Series Booking Flag 0=No,1=Yes
.
SOTL9999  RETURN
.
.----------------------------------------------------------------------------
. Restore all saved outlpcaf file variables
.----------------------------------------------------------------------------
ROTL0000  MOVE      SOVVSCHE,OTLPSCHE   * Schedule No. (Allocated Unique ID)
          MOVE      SOVVURNO,OTLPURNO   * U/R Number
          MOVE      SOVVBOOK,OTLPBOOK   * Booking Number
          MOVE      SOVVSITE,OTLPSITE   * Site Code
          MOVE      SOVVCLIN,OTLPCLIN   * Clinic ID
          MOVE      SOVVSDAT,OTLPSDAT   * Start Date (CCYYMMDD)
          MOVE      SOVVSTIM,OTLPSTIM   * Start Time (HH:MM:SS)
          MOVE      SOVVSLOT,OTLPSLOT   * Slot Number
          MOVE      SOVVPRNT,OTLPPRNT   * Printer
          MOVE      SOVVCOPY,OTLPCOPY   * Number of Copies
          MOVE      SOVVSTAT,OTLPSTAT   * Stationery Code
          MOVE      SOVVLETT,OTLPLETT   * Letter Number
          MOVE      SOVVPTYP,OTLPPTYP   * Print Type (1=Form,2=Letter,3=Invoi
          MOVE      SOVVWEBU,OTLPWEBU   * WEB User ID (websecaf)
          MOVE      SOVVRDAT,OTLPRDAT   * Request Date (CCYYMMDD)
          MOVE      SOVVRTIM,OTLPRTIM   * Request Time (HH:MM:SS)
          MOVE      SOVVSERS,OTLPSERS   * Series Booking Flag 0=No,1=Yes
.
ROTL9999  RETURN
