.
. VISCMTIO    
. --------
. Filename     : viscmtaf.dat
.
RSVSCMT1  RESET     KEY14                                                       
          READ      VISCMTA1,KEY14;;                                            
          RETURN
.
RAVSCMT1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      VISCMTA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSCMT1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      VISCMTA1,KEY14;VSCTVIST,VSCTTYPE,VSCTLINE,VSCTDATA,VSCTUKEY:
                                   VSCTSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSCMT1  MOVE      ZERO,OVRCD                                                  
          READKS    VISCMTA1;VSCTVIST,VSCTTYPE,VSCTLINE,VSCTDATA,VSCTUKEY:      
                             VSCTSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSCMT1  MOVE      ZERO,OVRCD                                                  
          READKP    VISCMTA1;VSCTVIST,VSCTTYPE,VSCTLINE,VSCTDATA,VSCTUKEY:      
                             VSCTSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSCMT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    VISCMTA1;VSCTVIST,VSCTTYPE,VSCTLINE,VSCTDATA,VSCTUKEY:      
                             VSCTSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSCMT1  RESET     KEY14                                                       
          WRITE     VISCMTA1,KEY14;VSCTVIST,VSCTTYPE,VSCTLINE,VSCTDATA,VSCTUKEY:
                                   VSCTSPAR                                     
          RETURN
.
DEVSCMT1  RESET     KEY14                                                       
          DELETE    VISCMTA1,KEY14                                              
          RETURN
.
RLVSCMT1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     VISCMTA1,KEY14;VSCTVIST,VSCTTYPE,VSCTLINE,VSCTDATA,VSCTUKEY:
                                   VSCTSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSCMT1  MOVE      ZERO,OVRCD                                                  
          READLKS   VISCMTA1;VSCTVIST,VSCTTYPE,VSCTLINE,VSCTDATA,VSCTUKEY:      
                             VSCTSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSCMT1  MOVE      ZERO,OVRCD                                                  
          READLKP   VISCMTA1;VSCTVIST,VSCTTYPE,VSCTLINE,VSCTDATA,VSCTUKEY:      
                             VSCTSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSCMT1  RESET     KEY14                                                       
          UNLOCK    VISCMTA1                                                    
          RETURN
.
