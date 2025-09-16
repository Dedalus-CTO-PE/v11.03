.
. PMSMMSIO    
. --------
. Filename     : pmsmmsaf.dat
.
RSPMMMS1  RESET     KEY24                                                       
          READ      PMSMMSA1,KEY24;;                                            
          RETURN
.
RAPMMMS1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMMSA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMMS1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMMSA1,KEY24;PMMMVISN,PMMMADAT,PMMMATIM,PMMMORT1,PMMMORT2:
                        PMMMREG1,PMMMREG2,PMMMATTN,PMMMRECL,PMMMLNG1,PMMMLNG2:  
                        PMMMLNG3,PMMMLNG4,PMMMLNG5,PMMMLNG6,PMMMLCNS,PMMMCDAT:  
                        PMMMCTIM,PMMMCUID,PMMMUDAT,PMMMUTIM,PMMMUUID,PMMMDELF:  
                        PMMMDUID,PMMMDDTE,PMMMDTME,PMMMDRES,PMMMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMMS1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSMMSA1;PMMMVISN,PMMMADAT,PMMMATIM,PMMMORT1,PMMMORT2:      
                        PMMMREG1,PMMMREG2,PMMMATTN,PMMMRECL,PMMMLNG1,PMMMLNG2:  
                        PMMMLNG3,PMMMLNG4,PMMMLNG5,PMMMLNG6,PMMMLCNS,PMMMCDAT:  
                        PMMMCTIM,PMMMCUID,PMMMUDAT,PMMMUTIM,PMMMUUID,PMMMDELF:  
                        PMMMDUID,PMMMDDTE,PMMMDTME,PMMMDRES,PMMMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMMS1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSMMSA1;PMMMVISN,PMMMADAT,PMMMATIM,PMMMORT1,PMMMORT2:      
                        PMMMREG1,PMMMREG2,PMMMATTN,PMMMRECL,PMMMLNG1,PMMMLNG2:  
                        PMMMLNG3,PMMMLNG4,PMMMLNG5,PMMMLNG6,PMMMLCNS,PMMMCDAT:  
                        PMMMCTIM,PMMMCUID,PMMMUDAT,PMMMUTIM,PMMMUUID,PMMMDELF:  
                        PMMMDUID,PMMMDDTE,PMMMDTME,PMMMDRES,PMMMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMMS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSMMSA1;PMMMVISN,PMMMADAT,PMMMATIM,PMMMORT1,PMMMORT2:      
                        PMMMREG1,PMMMREG2,PMMMATTN,PMMMRECL,PMMMLNG1,PMMMLNG2:  
                        PMMMLNG3,PMMMLNG4,PMMMLNG5,PMMMLNG6,PMMMLCNS,PMMMCDAT:  
                        PMMMCTIM,PMMMCUID,PMMMUDAT,PMMMUTIM,PMMMUUID,PMMMDELF:  
                        PMMMDUID,PMMMDDTE,PMMMDTME,PMMMDRES,PMMMSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMMS1  RESET     KEY24                                                       
          WRITE     PMSMMSA1,KEY24;PMMMVISN,PMMMADAT,PMMMATIM,PMMMORT1,PMMMORT2:
                        PMMMREG1,PMMMREG2,PMMMATTN,PMMMRECL,PMMMLNG1,PMMMLNG2:  
                        PMMMLNG3,PMMMLNG4,PMMMLNG5,PMMMLNG6,PMMMLCNS,PMMMCDAT:  
                        PMMMCTIM,PMMMCUID,PMMMUDAT,PMMMUTIM,PMMMUUID,PMMMDELF:  
                        PMMMDUID,PMMMDDTE,PMMMDTME,PMMMDRES,PMMMSPAR            
          RETURN
.
DEPMMMS1  RESET     KEY24                                                       
          DELETE    PMSMMSA1,KEY24                                              
          RETURN
.
RLPMMMS1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMMSA1,KEY24;PMMMVISN,PMMMADAT,PMMMATIM,PMMMORT1,PMMMORT2:
                        PMMMREG1,PMMMREG2,PMMMATTN,PMMMRECL,PMMMLNG1,PMMMLNG2:  
                        PMMMLNG3,PMMMLNG4,PMMMLNG5,PMMMLNG6,PMMMLCNS,PMMMCDAT:  
                        PMMMCTIM,PMMMCUID,PMMMUDAT,PMMMUTIM,PMMMUUID,PMMMDELF:  
                        PMMMDUID,PMMMDDTE,PMMMDTME,PMMMDRES,PMMMSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMMS1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSMMSA1;PMMMVISN,PMMMADAT,PMMMATIM,PMMMORT1,PMMMORT2:      
                        PMMMREG1,PMMMREG2,PMMMATTN,PMMMRECL,PMMMLNG1,PMMMLNG2:  
                        PMMMLNG3,PMMMLNG4,PMMMLNG5,PMMMLNG6,PMMMLCNS,PMMMCDAT:  
                        PMMMCTIM,PMMMCUID,PMMMUDAT,PMMMUTIM,PMMMUUID,PMMMDELF:  
                        PMMMDUID,PMMMDDTE,PMMMDTME,PMMMDRES,PMMMSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMMS1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSMMSA1;PMMMVISN,PMMMADAT,PMMMATIM,PMMMORT1,PMMMORT2:      
                        PMMMREG1,PMMMREG2,PMMMATTN,PMMMRECL,PMMMLNG1,PMMMLNG2:  
                        PMMMLNG3,PMMMLNG4,PMMMLNG5,PMMMLNG6,PMMMLCNS,PMMMCDAT:  
                        PMMMCTIM,PMMMCUID,PMMMUDAT,PMMMUTIM,PMMMUUID,PMMMDELF:  
                        PMMMDUID,PMMMDDTE,PMMMDTME,PMMMDRES,PMMMSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMMS1  RESET     KEY24                                                       
          UNLOCK    PMSMMSA1                                                    
          RETURN
.
