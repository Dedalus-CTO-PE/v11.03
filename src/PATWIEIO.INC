.
. PATWIEIO    
. --------
. Filename     : patwieaf.dat
.
RSPTWIE1  RESET     KEY7                                                        
          READ      PATWIEA1,KEY7;;                                             
          RETURN
.
RAPTWIE1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PATWIEA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTWIE1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PATWIEA1,KEY7;PTWIDRGC,PTWIDRGD,PTWIVRSN,PTWISDMT,PTWIMVEL: 
                                  PTWICPAY,PTWILIBP,PTWIHIBP,PTWIILOS,PTWISDOD: 
                                  PTWITDSW,PTWITODW,PTWITLOM,PTWITIMW,PTWITHOM: 
                                  PTWITHIH,PTWISSDR,PTWISSWT,PTWISPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTWIE1  MOVE      ZERO,OVRCD                                                  
          READKS    PATWIEA1;PTWIDRGC,PTWIDRGD,PTWIVRSN,PTWISDMT,PTWIMVEL:      
                             PTWICPAY,PTWILIBP,PTWIHIBP,PTWIILOS,PTWISDOD:      
                             PTWITDSW,PTWITODW,PTWITLOM,PTWITIMW,PTWITHOM:      
                             PTWITHIH,PTWISSDR,PTWISSWT,PTWISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTWIE1  MOVE      ZERO,OVRCD                                                  
          READKP    PATWIEA1;PTWIDRGC,PTWIDRGD,PTWIVRSN,PTWISDMT,PTWIMVEL:      
                             PTWICPAY,PTWILIBP,PTWIHIBP,PTWIILOS,PTWISDOD:      
                             PTWITDSW,PTWITODW,PTWITLOM,PTWITIMW,PTWITHOM:      
                             PTWITHIH,PTWISSDR,PTWISSWT,PTWISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTWIE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATWIEA1;PTWIDRGC,PTWIDRGD,PTWIVRSN,PTWISDMT,PTWIMVEL:      
                             PTWICPAY,PTWILIBP,PTWIHIBP,PTWIILOS,PTWISDOD:      
                             PTWITDSW,PTWITODW,PTWITLOM,PTWITIMW,PTWITHOM:      
                             PTWITHIH,PTWISSDR,PTWISSWT,PTWISPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTWIE1  RESET     KEY7                                                        
          WRITE     PATWIEA1,KEY7;PTWIDRGC,PTWIDRGD,PTWIVRSN,PTWISDMT,PTWIMVEL: 
                                  PTWICPAY,PTWILIBP,PTWIHIBP,PTWIILOS,PTWISDOD: 
                                  PTWITDSW,PTWITODW,PTWITLOM,PTWITIMW,PTWITHOM: 
                                  PTWITHIH,PTWISSDR,PTWISSWT,PTWISPAR           
          RETURN
.
DEPTWIE1  RESET     KEY7                                                        
          DELETE    PATWIEA1,KEY7                                               
          RETURN
.
RLPTWIE1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     PATWIEA1,KEY7;PTWIDRGC,PTWIDRGD,PTWIVRSN,PTWISDMT,PTWIMVEL: 
                                  PTWICPAY,PTWILIBP,PTWIHIBP,PTWIILOS,PTWISDOD: 
                                  PTWITDSW,PTWITODW,PTWITLOM,PTWITIMW,PTWITHOM: 
                                  PTWITHIH,PTWISSDR,PTWISSWT,PTWISPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTWIE1  MOVE      ZERO,OVRCD                                                  
          READLKS   PATWIEA1;PTWIDRGC,PTWIDRGD,PTWIVRSN,PTWISDMT,PTWIMVEL:      
                             PTWICPAY,PTWILIBP,PTWIHIBP,PTWIILOS,PTWISDOD:      
                             PTWITDSW,PTWITODW,PTWITLOM,PTWITIMW,PTWITHOM:      
                             PTWITHIH,PTWISSDR,PTWISSWT,PTWISPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTWIE1  MOVE      ZERO,OVRCD                                                  
          READLKP   PATWIEA1;PTWIDRGC,PTWIDRGD,PTWIVRSN,PTWISDMT,PTWIMVEL:      
                             PTWICPAY,PTWILIBP,PTWIHIBP,PTWIILOS,PTWISDOD:      
                             PTWITDSW,PTWITODW,PTWITLOM,PTWITIMW,PTWITHOM:      
                             PTWITHIH,PTWISSDR,PTWISSWT,PTWISPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTWIE1  RESET     KEY7                                                        
          UNLOCK    PATWIEA1                                                    
          RETURN
.
