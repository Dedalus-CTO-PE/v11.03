.
. COMAUDIO    
. --------
. Filename     : comaudaf.dat
.
RSCMAUD1  RESET     KEY33                                                       
          READ      COMAUDA1,KEY33;;                                            
          RETURN
.
RACMAUD1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMAUDA1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMAUD1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMAUDA1,KEY33;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:
                                   CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:
                                   CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:
                                   CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMAUD1  MOVE      ZERO,OVRCD                                                  
          READKS    COMAUDA1;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMAUD1  MOVE      ZERO,OVRCD                                                  
          READKP    COMAUDA1;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMAUD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMAUDA1;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          RETURN
.
WRCMAUD1  RESET     KEY33                                                       
          WRITE     COMAUDA1,KEY33;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:
                                   CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:
                                   CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:
                                   CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR          
          RETURN
.
DECMAUD1  RESET     KEY33                                                       
          DELETE    COMAUDA1,KEY33                                              
          RETURN
.
RSCMAUD2  RESET     KEY33                                                       
          READ      COMAUDA2,KEY33;;                                            
          RETURN
.
RACMAUD2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMAUDA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMAUD2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMAUDA2,KEY33;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:
                                   CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:
                                   CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:
                                   CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMAUD2  MOVE      ZERO,OVRCD                                                  
          READKS    COMAUDA2;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMAUD2  MOVE      ZERO,OVRCD                                                  
          READKP    COMAUDA2;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMAUD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMAUDA2;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          RETURN
.
WRCMAUD2  RESET     KEY33                                                       
          WRITE     COMAUDA2,KEY33;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:
                                   CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:
                                   CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:
                                   CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR          
          RETURN
.
DECMAUD2  RESET     KEY33                                                       
          DELETE    COMAUDA2,KEY33                                              
          RETURN
.
RSCMAUD3  RESET     KEY41                                                       
          READ      COMAUDA3,KEY41;;                                            
          RETURN
.
RACMAUD3  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      COMAUDA3,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMAUD3  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      COMAUDA3,KEY41;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:
                                   CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:
                                   CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:
                                   CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMAUD3  MOVE      ZERO,OVRCD                                                  
          READKS    COMAUDA3;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMAUD3  MOVE      ZERO,OVRCD                                                  
          READKP    COMAUDA3;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMAUD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMAUDA3;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          RETURN
.
WRCMAUD3  RESET     KEY41                                                       
          WRITE     COMAUDA3,KEY41;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:
                                   CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:
                                   CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:
                                   CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR          
          RETURN
.
DECMAUD3  RESET     KEY41                                                       
          DELETE    COMAUDA3,KEY41                                              
          RETURN
.
RSCMAUD4  RESET     KEY41                                                       
          READ      COMAUDA4,KEY41;;                                            
          RETURN
.
RACMAUD4  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      COMAUDA4,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMAUD4  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      COMAUDA4,KEY41;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:
                                   CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:
                                   CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:
                                   CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMAUD4  MOVE      ZERO,OVRCD                                                  
          READKS    COMAUDA4;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMAUD4  MOVE      ZERO,OVRCD                                                  
          READKP    COMAUDA4;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMAUD4  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMAUDA4;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:      
                             CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:      
                             CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:      
                             CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR                
          RETURN
.
WRCMAUD4  RESET     KEY41                                                       
          WRITE     COMAUDA4,KEY41;CMAURECN,CMAUTCNT,CMAUTDAT,CMAUTTIM,CMAUURNO:
                                   CMAUFADM,CMAUTADM,CMAUFPRA,CMAUTPRA,CMAUFSDR:
                                   CMAUTSDR,CMAUFDTY,CMAUTDTY,CMAUFVTY,CMAUTVTY:
                                   CMAUFREG,CMAUTREG,CMAUCUID,CMAUSPAR          
          RETURN
.
DECMAUD4  RESET     KEY41                                                       
          DELETE    COMAUDA4,KEY41                                              
          RETURN
.
