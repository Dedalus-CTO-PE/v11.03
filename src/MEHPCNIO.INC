.
. MEHPCNIO    
. --------
. Filename     : mehpcnaf.dat
.
RSMHPCN1  RESET     KEY30                                                       
          READ      MEHPCNA1,KEY30;;                                            
          RETURN
.
RAMHPCN1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPCNA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPCN1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPCNA1,KEY30;MHPNXDAT,MHPNXNUM,MHPNVISN,MHPNURNO,MHPNOCUR:
                        MHPNERID,MHPNCSCD,MHPNCSYS,MHPNDTYP,MHPNCCOD,MHPNICID:  
                        MHPNITYP,MHPNIVAL,MHPNSDAT,MHPNEDAT,MHPNSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPCN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPCNA1;MHPNXDAT,MHPNXNUM,MHPNVISN,MHPNURNO,MHPNOCUR:      
                        MHPNERID,MHPNCSCD,MHPNCSYS,MHPNDTYP,MHPNCCOD,MHPNICID:  
                        MHPNITYP,MHPNIVAL,MHPNSDAT,MHPNEDAT,MHPNSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPCN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPCNA1;MHPNXDAT,MHPNXNUM,MHPNVISN,MHPNURNO,MHPNOCUR:      
                        MHPNERID,MHPNCSCD,MHPNCSYS,MHPNDTYP,MHPNCCOD,MHPNICID:  
                        MHPNITYP,MHPNIVAL,MHPNSDAT,MHPNEDAT,MHPNSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPCN1                                                                        
          UPDATE    MEHPCNA1;MHPNXDAT,MHPNXNUM,MHPNVISN,MHPNURNO,MHPNOCUR:      
                        MHPNERID,MHPNCSCD,MHPNCSYS,MHPNDTYP,MHPNCCOD,MHPNICID:  
                        MHPNITYP,MHPNIVAL,MHPNSDAT,MHPNEDAT,MHPNSPAR            
          RETURN
.
WRMHPCN1  RESET     KEY30                                                       
          WRITE     MEHPCNA1,KEY30;MHPNXDAT,MHPNXNUM,MHPNVISN,MHPNURNO,MHPNOCUR:
                        MHPNERID,MHPNCSCD,MHPNCSYS,MHPNDTYP,MHPNCCOD,MHPNICID:  
                        MHPNITYP,MHPNIVAL,MHPNSDAT,MHPNEDAT,MHPNSPAR            
          RETURN
.
DEMHPCN1  RESET     KEY30                                                       
          DELETE    MEHPCNA1,KEY30                                              
          RETURN
.
