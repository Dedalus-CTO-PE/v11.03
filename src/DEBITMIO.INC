.
. DEBITMIO    
. --------
. Filename     : debitmaf.dat
.
RSDBIT1   RESET     KEY8                                                        
          READ      DEBITMA1,KEY8;;                                             
          RETURN
.
RADBIT1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBITMA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBIT1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      DEBITMA1,KEY8;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:      
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBIT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBITMA1;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBIT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBITMA1;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBIT1                                                                         
          UPDATE    DEBITMA1;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBIT1   RESET     KEY8                                                        
          WRITE     DEBITMA1,KEY8;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:      
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          RETURN
.
DEDBIT1   RESET     KEY8                                                        
          DELETE    DEBITMA1,KEY8                                               
          RETURN
.
RLDBIT1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     DEBITMA1,KEY8;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:      
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBIT1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBITMA1;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBIT1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBITMA1;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBIT1   RESET     KEY8                                                        
          UNLOCK    DEBITMA1                                                    
          RETURN
.
RSDBIT2   RESET     KEY43                                                       
          READ      DEBITMA2,KEY43;;                                            
          RETURN
.
RADBIT2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBITMA2,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBIT2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      DEBITMA2,KEY43;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:     
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBIT2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBITMA2;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBIT2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBITMA2;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBIT2                                                                         
          UPDATE    DEBITMA2;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBIT2   RESET     KEY43                                                       
          WRITE     DEBITMA2,KEY43;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:     
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          RETURN
.
DEDBIT2   RESET     KEY43                                                       
          DELETE    DEBITMA2,KEY43                                              
          RETURN
.
RLDBIT2   RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READL     DEBITMA2,KEY43;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:     
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBIT2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBITMA2;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBIT2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBITMA2;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBIT2   RESET     KEY43                                                       
          UNLOCK    DEBITMA2                                                    
          RETURN
.
RSDBIT3   RESET     KEY16                                                       
          READ      DEBITMA3,KEY16;;                                            
          RETURN
.
RADBIT3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      DEBITMA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBIT3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      DEBITMA3,KEY16;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:     
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBIT3                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBITMA3;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBIT3                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBITMA3;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBIT3                                                                         
          UPDATE    DEBITMA3;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBIT3   RESET     KEY16                                                       
          WRITE     DEBITMA3,KEY16;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:     
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          RETURN
.
DEDBIT3   RESET     KEY16                                                       
          DELETE    DEBITMA3,KEY16                                              
          RETURN
.
RLDBIT3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     DEBITMA3,KEY16;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:     
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBIT3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBITMA3;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBIT3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBITMA3;DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBIT3   RESET     KEY16                                                       
          UNLOCK    DEBITMA3                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WADBIT00
          MOVE      "   81",AUDTSECT
          MOVE      " 12",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WADBIT99 IF NOT EQUAL
.
          PACK     DBITAUDD,CCC,CYY,CMM,CDD
          REP       " 0",DBITAUDD
          CLOCK     TIME,DBITAUDT
          MOVE      PORT,DBITAUDP
          LOAD      DBITAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,DBITAUDS
          MOVE      PASSCODE,DBITAUDO
          PACK      KEY19,DBITAUDD,DBITAUDT,DBITAUDP,DBITAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWDBIT
WADBIT99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DADBIT00
          MOVE      "   81",AUDTSECT
          MOVE      " 12",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DADBIT99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADDBIT
DADBIT99  RETURN
ASDBIT    RESET     KEY19                                                       
          READ      DEBAUDIT,KEY19;;                                            
          RETURN
.
AKDBIT                                                                          
          MOVE      ZERO,OVRCD
          READKS    DEBAUDIT;DBITAUDD,DBITAUDT,DBITAUDP,DBITAUDR,DBITAUDS:      
                    DBITAUDO,DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUDBIT                                                                          
          UPDATE    DEBAUDIT;DBITAUDD,DBITAUDT,DBITAUDP,DBITAUDR,DBITAUDS:      
                    DBITAUDO,DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          RETURN
.
AWDBIT    RESET     KEY19                                                       
          WRITE     DEBAUDIT,KEY19;DBITAUDD,DBITAUDT,DBITAUDP,DBITAUDR,DBITAUDS:
                    DBITAUDO,DBITITM,DBITDES,DBITIDE,DBITUNT,DBITPTY:           
                        DBITPRI,DBITMOD,DBITACT,DBITLED,DBITIAC,DBITCAC:        
                        DBITTRT,DBITTAC,DBITTCA,DBITUR1,DBITUR2,DBITUD1:        
                        DBITUD2,DBITUY1,DBITUY2,DBITUC1,DBITUC2,DBITUC3:        
                        DBITUC4,DBITGST,DBITSPA                                 
          RETURN
.
ADDBIT    RESET     KEY19                                                       
          DELETE    DEBAUDIT,KEY19;                                             
          RETURN
.
