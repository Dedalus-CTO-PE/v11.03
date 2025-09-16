.
. IBALPCIO    
. --------
. Filename     : ibalpcaf.dat
.
RSIBLPC1  RESET     KEY5                                                        
          READ      IBALPCA1,KEY5;;                                             
          RETURN
.
RAIBLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      IBALPCA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      IBALPCA1,KEY5;IBLPSCHE,IBLPURNO,IBLPVISN,IBLPSKEY,IBLPPRNT: 
                        IBLPCOPY,IBLPSTAT,IBLPLAPR,IBLPLASC,IBLPFRE1,IBLPFRE2:  
                        IBLPFRE3,IBLPFRE4,IBLPFRE5,IBLPFRE6,IBLPFRE7,IBLPRUID:  
                        IBLPRDAT,IBLPRTIM,IBLPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBLPC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBALPCA1;IBLPSCHE,IBLPURNO,IBLPVISN,IBLPSKEY,IBLPPRNT:      
                        IBLPCOPY,IBLPSTAT,IBLPLAPR,IBLPLASC,IBLPFRE1,IBLPFRE2:  
                        IBLPFRE3,IBLPFRE4,IBLPFRE5,IBLPFRE6,IBLPFRE7,IBLPRUID:  
                        IBLPRDAT,IBLPRTIM,IBLPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBLPC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBALPCA1;IBLPSCHE,IBLPURNO,IBLPVISN,IBLPSKEY,IBLPPRNT:      
                        IBLPCOPY,IBLPSTAT,IBLPLAPR,IBLPLASC,IBLPFRE1,IBLPFRE2:  
                        IBLPFRE3,IBLPFRE4,IBLPFRE5,IBLPFRE6,IBLPFRE7,IBLPRUID:  
                        IBLPRDAT,IBLPRTIM,IBLPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBLPC1                                                                        
          UPDATE    IBALPCA1;IBLPSCHE,IBLPURNO,IBLPVISN,IBLPSKEY,IBLPPRNT:      
                        IBLPCOPY,IBLPSTAT,IBLPLAPR,IBLPLASC,IBLPFRE1,IBLPFRE2:  
                        IBLPFRE3,IBLPFRE4,IBLPFRE5,IBLPFRE6,IBLPFRE7,IBLPRUID:  
                        IBLPRDAT,IBLPRTIM,IBLPSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBLPC1  RESET     KEY5                                                        
          WRITE     IBALPCA1,KEY5;IBLPSCHE,IBLPURNO,IBLPVISN,IBLPSKEY,IBLPPRNT: 
                        IBLPCOPY,IBLPSTAT,IBLPLAPR,IBLPLASC,IBLPFRE1,IBLPFRE2:  
                        IBLPFRE3,IBLPFRE4,IBLPFRE5,IBLPFRE6,IBLPFRE7,IBLPRUID:  
                        IBLPRDAT,IBLPRTIM,IBLPSPAR                              
          RETURN
.
DEIBLPC1  RESET     KEY5                                                        
          DELETE    IBALPCA1,KEY5                                               
          RETURN
.
RLIBLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     IBALPCA1,KEY5;IBLPSCHE,IBLPURNO,IBLPVISN,IBLPSKEY,IBLPPRNT: 
                        IBLPCOPY,IBLPSTAT,IBLPLAPR,IBLPLASC,IBLPFRE1,IBLPFRE2:  
                        IBLPFRE3,IBLPFRE4,IBLPFRE5,IBLPFRE6,IBLPFRE7,IBLPRUID:  
                        IBLPRDAT,IBLPRTIM,IBLPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBLPC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBALPCA1;IBLPSCHE,IBLPURNO,IBLPVISN,IBLPSKEY,IBLPPRNT:      
                        IBLPCOPY,IBLPSTAT,IBLPLAPR,IBLPLASC,IBLPFRE1,IBLPFRE2:  
                        IBLPFRE3,IBLPFRE4,IBLPFRE5,IBLPFRE6,IBLPFRE7,IBLPRUID:  
                        IBLPRDAT,IBLPRTIM,IBLPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBLPC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBALPCA1;IBLPSCHE,IBLPURNO,IBLPVISN,IBLPSKEY,IBLPPRNT:      
                        IBLPCOPY,IBLPSTAT,IBLPLAPR,IBLPLASC,IBLPFRE1,IBLPFRE2:  
                        IBLPFRE3,IBLPFRE4,IBLPFRE5,IBLPFRE6,IBLPFRE7,IBLPRUID:  
                        IBLPRDAT,IBLPRTIM,IBLPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBLPC1  RESET     KEY5                                                        
          UNLOCK    IBALPCA1                                                    
          RETURN
.
.----------------------------------------------------------------------------
. Save all ibalpcaf file variables
.----------------------------------------------------------------------------
SLPC0000  MOVE      IBLPSCHE,SAVVSCHE   * Schedule Number (All. Unique ID)
          MOVE      IBLPURNO,SAVVURNO   * U/R Number
          MOVE      IBLPVISN,SAVVVISN   * Visit Number (Booking,Admission et)
          MOVE      IBLPSKEY,SAVVSKEY   * Sub System Record Key
          MOVE      IBLPPRNT,SAVVPRNT   * Printer Code
          MOVE      IBLPCOPY,SAVVCOPY   * Number of Labels/Copies
          MOVE      IBLPSTAT,SAVVSTAT   * Stationery Code
          MOVE      IBLPLAPR,SAVVLAPR   * Label Program ID
          MOVE      IBLPLASC,SAVVLASC   * Label Screen Number
          MOVE      IBLPFRE1,SAVVFRE1   * Free Text 1
          MOVE      IBLPFRE2,SAVVFRE2   * Free Text 2
          MOVE      IBLPFRE3,SAVVFRE3   * Free Text 3
          MOVE      IBLPFRE4,SAVVFRE4   * Free Text 4
          MOVE      IBLPFRE5,SAVVFRE5   * Free Text 5
          MOVE      IBLPFRE6,SAVVFRE6   * Free Text 6
          MOVE      IBLPFRE7,SAVVFRE7   * Free Text 7
          MOVE      IBLPRUID,SAVVRUID   * Requesting WEB User ID
          MOVE      IBLPRDAT,SAVVRDAT   * Request Date (CCYYMMDD)
          MOVE      IBLPRTIM,SAVVRTIM   * Request Time (HH:MM:SS)
.
SLPC9999  RETURN
.
.----------------------------------------------------------------------------
. Restore all saved ibalpcaf file variables
.----------------------------------------------------------------------------
RLPC0000  MOVE      SAVVSCHE,IBLPSCHE   * Schedule Number (All. Unique ID)
          MOVE      SAVVURNO,IBLPURNO   * U/R Number
          MOVE      SAVVVISN,IBLPVISN   * Visit Number (Booking,Admission et)
          MOVE      SAVVSKEY,IBLPSKEY   * Sub System Record Key
          MOVE      SAVVPRNT,IBLPPRNT   * Printer Code
          MOVE      SAVVCOPY,IBLPCOPY   * Number of Labels/Copies
          MOVE      SAVVSTAT,IBLPSTAT   * Stationery Code
          MOVE      SAVVLAPR,IBLPLAPR   * Label Program ID
          MOVE      SAVVLASC,IBLPLASC   * Label Screen Number
          MOVE      SAVVFRE1,IBLPFRE1   * Free Text 1
          MOVE      SAVVFRE2,IBLPFRE2   * Free Text 2
          MOVE      SAVVFRE3,IBLPFRE3   * Free Text 3
          MOVE      SAVVFRE4,IBLPFRE4   * Free Text 4
          MOVE      SAVVFRE5,IBLPFRE5   * Free Text 5
          MOVE      SAVVFRE6,IBLPFRE6   * Free Text 6
          MOVE      SAVVFRE7,IBLPFRE7   * Free Text 7
          MOVE      SAVVRUID,IBLPRUID   * Requesting WEB User ID
          MOVE      SAVVRDAT,IBLPRDAT   * Request Date (CCYYMMDD)
          MOVE      SAVVRTIM,IBLPRTIM   * Request Time (HH:MM:SS)
.
RLPC9999  RETURN
