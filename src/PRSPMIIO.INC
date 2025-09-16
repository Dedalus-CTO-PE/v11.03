.
. PRSPMIIO    
. --------
. Filename     : prspmiaf.dat
.
RSP2PMI1  RESET     KEY11                                                       
          READ      PRSPMIA1,KEY11;;                                            
          RETURN
.
RAP2PMI1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PRSPMIA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDP2PMI1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PRSPMIA1,KEY11;P2PMURNO,P2PMUNIQ,P2PMVALU,P2PMSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKP2PMI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRSPMIA1;P2PMURNO,P2PMUNIQ,P2PMVALU,P2PMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPP2PMI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRSPMIA1;P2PMURNO,P2PMUNIQ,P2PMVALU,P2PMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPP2PMI1                                                                        
          UPDATE    PRSPMIA1;P2PMURNO,P2PMUNIQ,P2PMVALU,P2PMSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRP2PMI1  RESET     KEY11                                                       
          WRITE     PRSPMIA1,KEY11;P2PMURNO,P2PMUNIQ,P2PMVALU,P2PMSPAR          
          RETURN
.
DEP2PMI1  RESET     KEY11                                                       
          DELETE    PRSPMIA1,KEY11                                              
          RETURN
.
RLP2PMI1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     PRSPMIA1,KEY11;P2PMURNO,P2PMUNIQ,P2PMVALU,P2PMSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLP2PMI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRSPMIA1;P2PMURNO,P2PMUNIQ,P2PMVALU,P2PMSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLP2PMI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRSPMIA1;P2PMURNO,P2PMUNIQ,P2PMVALU,P2PMSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUP2PMI1  RESET     KEY11                                                       
          UNLOCK    PRSPMIA1                                                    
          RETURN
.
