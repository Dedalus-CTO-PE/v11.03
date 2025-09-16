.
. WEBRURIO    
. --------
. Filename     : webruraf.dat
.
RSWBRUR1  RESET     KEY15                                                       
          READ      WEBRURA1,KEY15;;                                            
          RETURN
.
RAWBRUR1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRURA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRUR1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRURA1,KEY15;WBRUUSID,WBRUGRID,WBRUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRUR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBRURA1;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRUR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBRURA1;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRUR1                                                                        
          UPDATE    WEBRURA1;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRUR1  RESET     KEY15                                                       
          WRITE     WEBRURA1,KEY15;WBRUUSID,WBRUGRID,WBRUSPAR                   
          RETURN
.
DEWBRUR1  RESET     KEY15                                                       
          DELETE    WEBRURA1,KEY15                                              
          RETURN
.
RLWBRUR1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     WEBRURA1,KEY15;WBRUUSID,WBRUGRID,WBRUSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRUR1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBRURA1;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRUR1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBRURA1;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRUR1  RESET     KEY15                                                       
          UNLOCK    WEBRURA1                                                    
          RETURN
.
RSWBRUR2  RESET     KEY15                                                       
          READ      WEBRURA2,KEY15;;                                            
          RETURN
.
RAWBRUR2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRURA2,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRUR2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRURA2,KEY15;WBRUUSID,WBRUGRID,WBRUSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRUR2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBRURA2;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRUR2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBRURA2;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRUR2                                                                        
          UPDATE    WEBRURA2;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRUR2  RESET     KEY15                                                       
          WRITE     WEBRURA2,KEY15;WBRUUSID,WBRUGRID,WBRUSPAR                   
          RETURN
.
DEWBRUR2  RESET     KEY15                                                       
          DELETE    WEBRURA2,KEY15                                              
          RETURN
.
RLWBRUR2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     WEBRURA2,KEY15;WBRUUSID,WBRUGRID,WBRUSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRUR2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBRURA2;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRUR2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBRURA2;WBRUUSID,WBRUGRID,WBRUSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRUR2  RESET     KEY15                                                       
          UNLOCK    WEBRURA2                                                    
          RETURN
.
