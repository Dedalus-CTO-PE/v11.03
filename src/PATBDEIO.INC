.
. PATBDEIO    
. --------
. Filename     : patbdeaf.dat
.
RSPTBDE1  RESET     KEY58                                                       
          READ      PATBDEA1,KEY58;;                                            
          RETURN
.
RAPTBDE1  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      PATBDEA1,KEY58;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBDE1  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      PATBDEA1,KEY58;PTBEHOSP,PTBESDTE,PTBEEDTE,PTBEVSID,PTBECLMC:
                                   PTBEHFND,PTBEHFTB,PTBEILOS,PTBETLOS,PTBECSMX:
                                   PTBECPAY,PTBEDRGC,PTBEDRGV,PTBEADMN,PTBECARE:
                                   PTBEPRGM,PTBEPILL,PTBEMBSI,PTBEALER,PTBECDAT:
                                   PTBECTIM,PTBECUID,PTBEUDAT,PTBEUTIM,PTBEUUID:
                                   PTBESPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBDE1  MOVE      ZERO,OVRCD                                                  
          READKS    PATBDEA1;PTBEHOSP,PTBESDTE,PTBEEDTE,PTBEVSID,PTBECLMC:      
                             PTBEHFND,PTBEHFTB,PTBEILOS,PTBETLOS,PTBECSMX:      
                             PTBECPAY,PTBEDRGC,PTBEDRGV,PTBEADMN,PTBECARE:      
                             PTBEPRGM,PTBEPILL,PTBEMBSI,PTBEALER,PTBECDAT:      
                             PTBECTIM,PTBECUID,PTBEUDAT,PTBEUTIM,PTBEUUID:      
                             PTBESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBDE1  MOVE      ZERO,OVRCD                                                  
          READKP    PATBDEA1;PTBEHOSP,PTBESDTE,PTBEEDTE,PTBEVSID,PTBECLMC:      
                             PTBEHFND,PTBEHFTB,PTBEILOS,PTBETLOS,PTBECSMX:      
                             PTBECPAY,PTBEDRGC,PTBEDRGV,PTBEADMN,PTBECARE:      
                             PTBEPRGM,PTBEPILL,PTBEMBSI,PTBEALER,PTBECDAT:      
                             PTBECTIM,PTBECUID,PTBEUDAT,PTBEUTIM,PTBEUUID:      
                             PTBESPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBDE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATBDEA1;PTBEHOSP,PTBESDTE,PTBEEDTE,PTBEVSID,PTBECLMC:      
                             PTBEHFND,PTBEHFTB,PTBEILOS,PTBETLOS,PTBECSMX:      
                             PTBECPAY,PTBEDRGC,PTBEDRGV,PTBEADMN,PTBECARE:      
                             PTBEPRGM,PTBEPILL,PTBEMBSI,PTBEALER,PTBECDAT:      
                             PTBECTIM,PTBECUID,PTBEUDAT,PTBEUTIM,PTBEUUID:      
                             PTBESPAR                                           
          RETURN
.
WRPTBDE1  RESET     KEY58                                                       
          WRITE     PATBDEA1,KEY58;PTBEHOSP,PTBESDTE,PTBEEDTE,PTBEVSID,PTBECLMC:
                                   PTBEHFND,PTBEHFTB,PTBEILOS,PTBETLOS,PTBECSMX:
                                   PTBECPAY,PTBEDRGC,PTBEDRGV,PTBEADMN,PTBECARE:
                                   PTBEPRGM,PTBEPILL,PTBEMBSI,PTBEALER,PTBECDAT:
                                   PTBECTIM,PTBECUID,PTBEUDAT,PTBEUTIM,PTBEUUID:
                                   PTBESPAR                                     
          RETURN
.
DEPTBDE1  RESET     KEY58                                                       
          DELETE    PATBDEA1,KEY58                                              
          RETURN
.
