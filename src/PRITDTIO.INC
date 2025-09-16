.
. PRITDTIO    
. --------
. Filename     : pritdtaf.dat
.
RSPRTDT1  RESET     KEY8                                                        
          READ      PRITDTA1,KEY8;;                                             
          RETURN
.
RAPRTDT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PRITDTA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRTDT1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PRITDTA1,KEY8;PRTDTMID,PRTDTYPE,PRTDSEQN,PRTDCODE,PRTDSUBI: 
                        PRTDQUAN,PRTDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRTDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRITDTA1;PRTDTMID,PRTDTYPE,PRTDSEQN,PRTDCODE,PRTDSUBI:      
                        PRTDQUAN,PRTDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRTDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRITDTA1;PRTDTMID,PRTDTYPE,PRTDSEQN,PRTDCODE,PRTDSUBI:      
                        PRTDQUAN,PRTDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRTDT1                                                                        
          UPDATE    PRITDTA1;PRTDTMID,PRTDTYPE,PRTDSEQN,PRTDCODE,PRTDSUBI:      
                        PRTDQUAN,PRTDSPAR                                       
          RETURN
.
WRPRTDT1  RESET     KEY8                                                        
          WRITE     PRITDTA1,KEY8;PRTDTMID,PRTDTYPE,PRTDSEQN,PRTDCODE,PRTDSUBI: 
                        PRTDQUAN,PRTDSPAR                                       
          RETURN
.
DEPRTDT1  RESET     KEY8                                                        
          DELETE    PRITDTA1,KEY8                                               
          RETURN
.
