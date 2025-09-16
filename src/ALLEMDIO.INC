.
. ALLEMDIO    
. --------
. Filename     : allemdaf.dat
.
RSALEMD1  RESET     KEY24                                                       
          READ      ALLEMDA1,KEY24;;                                            
          RETURN
.
RAALEMD1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEMDA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEMD1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEMDA1,KEY24;ALEMVISN,ALEMENCT,ALEMMCNT,ALEMCODE,ALEMQANT:
                        ALEMUNIT,ALEMDURA,ALEMDTYP,ALEMMEDR,ALEMMEDT,ALEMTEXT:  
                        ALEMCDAT,ALEMCTIM,ALEMCUID,ALEMUDAT,ALEMUTIM,ALEMUUID:  
                        ALEMSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEMD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLEMDA1;ALEMVISN,ALEMENCT,ALEMMCNT,ALEMCODE,ALEMQANT:      
                        ALEMUNIT,ALEMDURA,ALEMDTYP,ALEMMEDR,ALEMMEDT,ALEMTEXT:  
                        ALEMCDAT,ALEMCTIM,ALEMCUID,ALEMUDAT,ALEMUTIM,ALEMUUID:  
                        ALEMSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEMD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLEMDA1;ALEMVISN,ALEMENCT,ALEMMCNT,ALEMCODE,ALEMQANT:      
                        ALEMUNIT,ALEMDURA,ALEMDTYP,ALEMMEDR,ALEMMEDT,ALEMTEXT:  
                        ALEMCDAT,ALEMCTIM,ALEMCUID,ALEMUDAT,ALEMUTIM,ALEMUUID:  
                        ALEMSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEMD1                                                                        
          UPDATE    ALLEMDA1;ALEMVISN,ALEMENCT,ALEMMCNT,ALEMCODE,ALEMQANT:      
                        ALEMUNIT,ALEMDURA,ALEMDTYP,ALEMMEDR,ALEMMEDT,ALEMTEXT:  
                        ALEMCDAT,ALEMCTIM,ALEMCUID,ALEMUDAT,ALEMUTIM,ALEMUUID:  
                        ALEMSPAR                                                
          RETURN
.
WRALEMD1  RESET     KEY24                                                       
          WRITE     ALLEMDA1,KEY24;ALEMVISN,ALEMENCT,ALEMMCNT,ALEMCODE,ALEMQANT:
                        ALEMUNIT,ALEMDURA,ALEMDTYP,ALEMMEDR,ALEMMEDT,ALEMTEXT:  
                        ALEMCDAT,ALEMCTIM,ALEMCUID,ALEMUDAT,ALEMUTIM,ALEMUUID:  
                        ALEMSPAR                                                
          RETURN
.
DEALEMD1  RESET     KEY24                                                       
          DELETE    ALLEMDA1,KEY24                                              
          RETURN
.
