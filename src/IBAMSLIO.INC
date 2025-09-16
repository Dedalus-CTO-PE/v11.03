.
. IBAMSLIO    
. --------
. Filename     : ibamslaf.dat
.
RSIBMSL1  RESET     KEY6                                                        
          READ      IBAMSLA1,KEY6;;                                             
          RETURN
.
RAIBMSL1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      IBAMSLA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBMSL1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      IBAMSLA1,KEY6;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD: 
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBMSL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBAMSLA1;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBMSL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBAMSLA1;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBMSL1                                                                        
          UPDATE    IBAMSLA1;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBMSL1  RESET     KEY6                                                        
          WRITE     IBAMSLA1,KEY6;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD: 
                        IBMSDBCD                                                
          RETURN
.
DEIBMSL1  RESET     KEY6                                                        
          DELETE    IBAMSLA1,KEY6                                               
          RETURN
.
RLIBMSL1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     IBAMSLA1,KEY6;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD: 
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBMSL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBAMSLA1;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBMSL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBAMSLA1;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBMSL1  RESET     KEY6                                                        
          UNLOCK    IBAMSLA1                                                    
          RETURN
.
RSIBMSL2  RESET     KEY9                                                        
          READ      IBAMSLA2,KEY9;;                                             
          RETURN
.
RAIBMSL2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBAMSLA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBMSL2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      IBAMSLA2,KEY9;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD: 
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBMSL2                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBAMSLA2;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBMSL2                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBAMSLA2;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBMSL2                                                                        
          UPDATE    IBAMSLA2;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBMSL2  RESET     KEY9                                                        
          WRITE     IBAMSLA2,KEY9;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD: 
                        IBMSDBCD                                                
          RETURN
.
DEIBMSL2  RESET     KEY9                                                        
          DELETE    IBAMSLA2,KEY9                                               
          RETURN
.
RLIBMSL2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     IBAMSLA2,KEY9;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD: 
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBMSL2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBAMSLA2;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBMSL2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBAMSLA2;IBMSMENU,IBMSSELC,IBMSTYPE,IBMSNUMB,IBMSCOMD:      
                        IBMSDBCD                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBMSL2  RESET     KEY9                                                        
          UNLOCK    IBAMSLA2                                                    
          RETURN
.
