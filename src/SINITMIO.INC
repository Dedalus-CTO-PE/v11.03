.
. SINITMIO    
. --------
. Filename     : sinitmaf.dat
.
RSSIIT1   RESET     KEY28                                                       
          READ      SINITMA1,KEY28;;                                            
          RETURN
.
RASIIT1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINITMA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIT1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINITMA1,KEY28;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:     
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINITMA1;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:           
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINITMA1;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:           
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIT1                                                                         
          UPDATE    SINITMA1;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:           
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          RETURN
.
WRSIIT1   RESET     KEY28                                                       
          WRITE     SINITMA1,KEY28;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:     
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          RETURN
.
DESIIT1   RESET     KEY28                                                       
          DELETE    SINITMA1,KEY28                                              
          RETURN
.
RSSIIT2   RESET     KEY28                                                       
          READ      SINITMA2,KEY28;;                                            
          RETURN
.
RASIIT2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINITMA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIT2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINITMA2,KEY28;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:     
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIT2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINITMA2;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:           
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIT2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINITMA2;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:           
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIT2                                                                         
          UPDATE    SINITMA2;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:           
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          RETURN
.
WRSIIT2   RESET     KEY28                                                       
          WRITE     SINITMA2,KEY28;SIITWAR,SIITCAT,SIITDAT,SIITTIM,SIITOPR:     
                        SIITPOR,SIITPRG,SIITPER,SIITQTY,SIITAMT,SIITTYP:        
                        SIITCST,SIITREQ,SIITPUR,SIITREF,SIITSOH,SIITSPA         
          RETURN
.
DESIIT2   RESET     KEY28                                                       
          DELETE    SINITMA2,KEY28                                              
          RETURN
.
