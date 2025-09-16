.
. MEHCMNIO    
. --------
. Filename     : mehcmnaf.dat
.
RSMHCMN1  RESET     KEY38                                                       
          READ      MEHCMNA1,KEY38;;                                            
          RETURN
.
RAMHCMN1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      MEHCMNA1,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHCMN1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      MEHCMNA1,KEY38;MHCMURNO,MHCMUNIQ,MHCMSDAT,MHCMSTIM,MHCMCTYP:
                        MHCMLINE,MHCMDATA,MHCMCDAT,MHCMCTIM,MHCMCUID,MHCMUDAT:  
                        MHCMUTIM,MHCMUUID,MHCMSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHCMN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHCMNA1;MHCMURNO,MHCMUNIQ,MHCMSDAT,MHCMSTIM,MHCMCTYP:      
                        MHCMLINE,MHCMDATA,MHCMCDAT,MHCMCTIM,MHCMCUID,MHCMUDAT:  
                        MHCMUTIM,MHCMUUID,MHCMSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHCMN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHCMNA1;MHCMURNO,MHCMUNIQ,MHCMSDAT,MHCMSTIM,MHCMCTYP:      
                        MHCMLINE,MHCMDATA,MHCMCDAT,MHCMCTIM,MHCMCUID,MHCMUDAT:  
                        MHCMUTIM,MHCMUUID,MHCMSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHCMN1                                                                        
          UPDATE    MEHCMNA1;MHCMURNO,MHCMUNIQ,MHCMSDAT,MHCMSTIM,MHCMCTYP:      
                        MHCMLINE,MHCMDATA,MHCMCDAT,MHCMCTIM,MHCMCUID,MHCMUDAT:  
                        MHCMUTIM,MHCMUUID,MHCMSPAR                              
          RETURN
.
WRMHCMN1  RESET     KEY38                                                       
          WRITE     MEHCMNA1,KEY38;MHCMURNO,MHCMUNIQ,MHCMSDAT,MHCMSTIM,MHCMCTYP:
                        MHCMLINE,MHCMDATA,MHCMCDAT,MHCMCTIM,MHCMCUID,MHCMUDAT:  
                        MHCMUTIM,MHCMUUID,MHCMSPAR                              
          RETURN
.
DEMHCMN1  RESET     KEY38                                                       
          DELETE    MEHCMNA1,KEY38                                              
          RETURN
.
