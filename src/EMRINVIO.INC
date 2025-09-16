.
. EMRINVIO    
. --------
. Filename     : emrinvaf.dat
.
RSEMIN1   RESET     KEY13                                                       
          READ      EMRINVA1,KEY13;;                                            
          RETURN
.
RAEMIN1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      EMRINVA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMIN1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      EMRINVA1,KEY13;EMINADMN,EMINRTYP,EMINRNUM,EMINLUDT,EMINLUTM:
                        EMINMCOD,EMINMDAT,EMINMTIM,EMINREF1,EMINREF2,EMINCOD1:  
                        EMINCOD2,EMINCOD3,EMINCOD4,EMINDAT1,EMINDAT2,EMINTIM1:  
                        EMINTIM2,EMINAMT1,EMINAMT2,EMINYN01,EMINYN02,EMINYN03:  
                        EMINYN04,EMINSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMIN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    EMRINVA1;EMINADMN,EMINRTYP,EMINRNUM,EMINLUDT,EMINLUTM:      
                        EMINMCOD,EMINMDAT,EMINMTIM,EMINREF1,EMINREF2,EMINCOD1:  
                        EMINCOD2,EMINCOD3,EMINCOD4,EMINDAT1,EMINDAT2,EMINTIM1:  
                        EMINTIM2,EMINAMT1,EMINAMT2,EMINYN01,EMINYN02,EMINYN03:  
                        EMINYN04,EMINSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMIN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    EMRINVA1;EMINADMN,EMINRTYP,EMINRNUM,EMINLUDT,EMINLUTM:      
                        EMINMCOD,EMINMDAT,EMINMTIM,EMINREF1,EMINREF2,EMINCOD1:  
                        EMINCOD2,EMINCOD3,EMINCOD4,EMINDAT1,EMINDAT2,EMINTIM1:  
                        EMINTIM2,EMINAMT1,EMINAMT2,EMINYN01,EMINYN02,EMINYN03:  
                        EMINYN04,EMINSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMIN1                                                                         
          UPDATE    EMRINVA1;EMINADMN,EMINRTYP,EMINRNUM,EMINLUDT,EMINLUTM:      
                        EMINMCOD,EMINMDAT,EMINMTIM,EMINREF1,EMINREF2,EMINCOD1:  
                        EMINCOD2,EMINCOD3,EMINCOD4,EMINDAT1,EMINDAT2,EMINTIM1:  
                        EMINTIM2,EMINAMT1,EMINAMT2,EMINYN01,EMINYN02,EMINYN03:  
                        EMINYN04,EMINSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMIN1   RESET     KEY13                                                       
          WRITE     EMRINVA1,KEY13;EMINADMN,EMINRTYP,EMINRNUM,EMINLUDT,EMINLUTM:
                        EMINMCOD,EMINMDAT,EMINMTIM,EMINREF1,EMINREF2,EMINCOD1:  
                        EMINCOD2,EMINCOD3,EMINCOD4,EMINDAT1,EMINDAT2,EMINTIM1:  
                        EMINTIM2,EMINAMT1,EMINAMT2,EMINYN01,EMINYN02,EMINYN03:  
                        EMINYN04,EMINSPAR                                       
          RETURN
.
DEEMIN1   RESET     KEY13                                                       
          DELETE    EMRINVA1,KEY13                                              
          RETURN
.
RLEMIN1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     EMRINVA1,KEY13;EMINADMN,EMINRTYP,EMINRNUM,EMINLUDT,EMINLUTM:
                        EMINMCOD,EMINMDAT,EMINMTIM,EMINREF1,EMINREF2,EMINCOD1:  
                        EMINCOD2,EMINCOD3,EMINCOD4,EMINDAT1,EMINDAT2,EMINTIM1:  
                        EMINTIM2,EMINAMT1,EMINAMT2,EMINYN01,EMINYN02,EMINYN03:  
                        EMINYN04,EMINSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMIN1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   EMRINVA1;EMINADMN,EMINRTYP,EMINRNUM,EMINLUDT,EMINLUTM:      
                        EMINMCOD,EMINMDAT,EMINMTIM,EMINREF1,EMINREF2,EMINCOD1:  
                        EMINCOD2,EMINCOD3,EMINCOD4,EMINDAT1,EMINDAT2,EMINTIM1:  
                        EMINTIM2,EMINAMT1,EMINAMT2,EMINYN01,EMINYN02,EMINYN03:  
                        EMINYN04,EMINSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMIN1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   EMRINVA1;EMINADMN,EMINRTYP,EMINRNUM,EMINLUDT,EMINLUTM:      
                        EMINMCOD,EMINMDAT,EMINMTIM,EMINREF1,EMINREF2,EMINCOD1:  
                        EMINCOD2,EMINCOD3,EMINCOD4,EMINDAT1,EMINDAT2,EMINTIM1:  
                        EMINTIM2,EMINAMT1,EMINAMT2,EMINYN01,EMINYN02,EMINYN03:  
                        EMINYN04,EMINSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMIN1   RESET     KEY13                                                       
          UNLOCK    EMRINVA1                                                    
          RETURN
.
