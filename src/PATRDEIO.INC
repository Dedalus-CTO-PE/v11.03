.
. PATRDEIO    
. --------
. Filename     : patrdeaf.dat
.
RSPTRDE1  RESET     KEY10                                                       
          READ      PATRDEA1,KEY10;;                                            
          RETURN
.
RAPTRDE1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATRDEA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTRDE1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATRDEA1,KEY10;DPTRDADM,DPTRDEPN,PTRDBISA,PTRDBISD,PTRDCLSP:
                                   PTRDODTE,PTRDARTR,PTRDUSRF,PTRDPCSA,PTRDPCSD:
                                   PTRDRGAA,PTRDRGAD,PTRDSRPC,PTRDFIMA,PTRDFIMD:
                                   PTRDDIAG,PTRDCOM1,PTRDCOM2,PTRDFADT,PTRDFDDT:
                                   PTRDIMPR,PTRDPOCA,PTRDPOCD,PTRDVERS,PTRDSNAP:
                                   PTRDSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DPTRDADM,PTRDADMN                                           
          MOVE      DPTRDEPN,PTRDEPNO                                           
          RETURN
.
RKPTRDE1  MOVE      ZERO,OVRCD                                                  
          READKS    PATRDEA1;DPTRDADM,DPTRDEPN,PTRDBISA,PTRDBISD,PTRDCLSP:      
                             PTRDODTE,PTRDARTR,PTRDUSRF,PTRDPCSA,PTRDPCSD:      
                             PTRDRGAA,PTRDRGAD,PTRDSRPC,PTRDFIMA,PTRDFIMD:      
                             PTRDDIAG,PTRDCOM1,PTRDCOM2,PTRDFADT,PTRDFDDT:      
                             PTRDIMPR,PTRDPOCA,PTRDPOCD,PTRDVERS,PTRDSNAP:      
                             PTRDSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DPTRDADM,PTRDADMN                                           
          MOVE      DPTRDEPN,PTRDEPNO                                           
          RETURN
.
RPPTRDE1  MOVE      ZERO,OVRCD                                                  
          READKP    PATRDEA1;DPTRDADM,DPTRDEPN,PTRDBISA,PTRDBISD,PTRDCLSP:      
                             PTRDODTE,PTRDARTR,PTRDUSRF,PTRDPCSA,PTRDPCSD:      
                             PTRDRGAA,PTRDRGAD,PTRDSRPC,PTRDFIMA,PTRDFIMD:      
                             PTRDDIAG,PTRDCOM1,PTRDCOM2,PTRDFADT,PTRDFDDT:      
                             PTRDIMPR,PTRDPOCA,PTRDPOCD,PTRDVERS,PTRDSNAP:      
                             PTRDSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DPTRDADM,PTRDADMN                                           
          MOVE      DPTRDEPN,PTRDEPNO                                           
          RETURN
.
UPPTRDE1  MOVE      ZERO,OVRCD                                                  
          MOVE      PTRDADMN,DPTRDADM                                           
          MOVE      PTRDEPNO,DPTRDEPN                                           
          UPDATE    PATRDEA1;DPTRDADM,DPTRDEPN,PTRDBISA,PTRDBISD,PTRDCLSP:      
                             PTRDODTE,PTRDARTR,PTRDUSRF,PTRDPCSA,PTRDPCSD:      
                             PTRDRGAA,PTRDRGAD,PTRDSRPC,PTRDFIMA,PTRDFIMD:      
                             PTRDDIAG,PTRDCOM1,PTRDCOM2,PTRDFADT,PTRDFDDT:      
                             PTRDIMPR,PTRDPOCA,PTRDPOCD,PTRDVERS,PTRDSNAP:      
                             PTRDSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTRDE1  RESET     KEY10                                                       
          MOVE      PTRDADMN,DPTRDADM                                           
          MOVE      PTRDEPNO,DPTRDEPN                                           
          WRITE     PATRDEA1,KEY10;DPTRDADM,DPTRDEPN,PTRDBISA,PTRDBISD,PTRDCLSP:
                                   PTRDODTE,PTRDARTR,PTRDUSRF,PTRDPCSA,PTRDPCSD:
                                   PTRDRGAA,PTRDRGAD,PTRDSRPC,PTRDFIMA,PTRDFIMD:
                                   PTRDDIAG,PTRDCOM1,PTRDCOM2,PTRDFADT,PTRDFDDT:
                                   PTRDIMPR,PTRDPOCA,PTRDPOCD,PTRDVERS,PTRDSNAP:
                                   PTRDSPAR                                     
          RETURN
.
DEPTRDE1  RESET     KEY10                                                       
          DELETE    PATRDEA1,KEY10                                              
          RETURN
.
RLPTRDE1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     PATRDEA1,KEY10;DPTRDADM,DPTRDEPN,PTRDBISA,PTRDBISD,PTRDCLSP:
                                   PTRDODTE,PTRDARTR,PTRDUSRF,PTRDPCSA,PTRDPCSD:
                                   PTRDRGAA,PTRDRGAD,PTRDSRPC,PTRDFIMA,PTRDFIMD:
                                   PTRDDIAG,PTRDCOM1,PTRDCOM2,PTRDFADT,PTRDFDDT:
                                   PTRDIMPR,PTRDPOCA,PTRDPOCD,PTRDVERS,PTRDSNAP:
                                   PTRDSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTRDADM,PTRDADMN                                           
          MOVE      DPTRDEPN,PTRDEPNO                                           
          RETURN
.
KLPTRDE1  MOVE      ZERO,OVRCD                                                  
          READLKS   PATRDEA1;DPTRDADM,DPTRDEPN,PTRDBISA,PTRDBISD,PTRDCLSP:      
                             PTRDODTE,PTRDARTR,PTRDUSRF,PTRDPCSA,PTRDPCSD:      
                             PTRDRGAA,PTRDRGAD,PTRDSRPC,PTRDFIMA,PTRDFIMD:      
                             PTRDDIAG,PTRDCOM1,PTRDCOM2,PTRDFADT,PTRDFDDT:      
                             PTRDIMPR,PTRDPOCA,PTRDPOCD,PTRDVERS,PTRDSNAP:      
                             PTRDSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTRDADM,PTRDADMN                                           
          MOVE      DPTRDEPN,PTRDEPNO                                           
          RETURN
.
PLPTRDE1  MOVE      ZERO,OVRCD                                                  
          READLKP   PATRDEA1;DPTRDADM,DPTRDEPN,PTRDBISA,PTRDBISD,PTRDCLSP:      
                             PTRDODTE,PTRDARTR,PTRDUSRF,PTRDPCSA,PTRDPCSD:      
                             PTRDRGAA,PTRDRGAD,PTRDSRPC,PTRDFIMA,PTRDFIMD:      
                             PTRDDIAG,PTRDCOM1,PTRDCOM2,PTRDFADT,PTRDFDDT:      
                             PTRDIMPR,PTRDPOCA,PTRDPOCD,PTRDVERS,PTRDSNAP:      
                             PTRDSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTRDADM,PTRDADMN                                           
          MOVE      DPTRDEPN,PTRDEPNO                                           
          RETURN
.
UUPTRDE1  RESET     KEY10                                                       
          UNLOCK    PATRDEA1                                                    
          RETURN
.
