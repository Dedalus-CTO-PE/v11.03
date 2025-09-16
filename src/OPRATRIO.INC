.
. OPRATRIO    
. --------
. Filename     : opratraf.dat
.
RSOPATR1  RESET     KEY13                                                       
          READ      OPRATRA1,KEY13;;                                            
          RETURN
.
RAOPATR1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRATRA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPATR1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRATRA1,KEY13;OPABUNIQ,OPABTYPE,OPABVAL1,OPABVAL2,OPABVAL3:
                                   OPABVAL4,OPABCOD1,OPABCOD2,OPABCOD3,OPABCOD4:
                                   OPABTXT1,OPABTXT2,OPABTXT3,OPABTXT4,OPABYN01:
                                   OPABYN02,OPABYN03,OPABYN04,OPABDELT,OPABCUID:
                                   OPABCDAT,OPABCTIM,OPABUUID,OPABUDAT,OPABUTIM:
                                   OPABFUID,OPABFDAT,OPABFTIM,OPABCOD5,OPABCOD6:
                                   OPABYN05,OPABYN06,OPABYN07,OPABYN08,OPABYN09:
                                   OPABYN10,OPABUDD1,OPABUDT1,OPABSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPATR1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRATRA1;OPABUNIQ,OPABTYPE,OPABVAL1,OPABVAL2,OPABVAL3:      
                             OPABVAL4,OPABCOD1,OPABCOD2,OPABCOD3,OPABCOD4:      
                             OPABTXT1,OPABTXT2,OPABTXT3,OPABTXT4,OPABYN01:      
                             OPABYN02,OPABYN03,OPABYN04,OPABDELT,OPABCUID:      
                             OPABCDAT,OPABCTIM,OPABUUID,OPABUDAT,OPABUTIM:      
                             OPABFUID,OPABFDAT,OPABFTIM,OPABCOD5,OPABCOD6:      
                             OPABYN05,OPABYN06,OPABYN07,OPABYN08,OPABYN09:      
                             OPABYN10,OPABUDD1,OPABUDT1,OPABSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPATR1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRATRA1;OPABUNIQ,OPABTYPE,OPABVAL1,OPABVAL2,OPABVAL3:      
                             OPABVAL4,OPABCOD1,OPABCOD2,OPABCOD3,OPABCOD4:      
                             OPABTXT1,OPABTXT2,OPABTXT3,OPABTXT4,OPABYN01:      
                             OPABYN02,OPABYN03,OPABYN04,OPABDELT,OPABCUID:      
                             OPABCDAT,OPABCTIM,OPABUUID,OPABUDAT,OPABUTIM:      
                             OPABFUID,OPABFDAT,OPABFTIM,OPABCOD5,OPABCOD6:      
                             OPABYN05,OPABYN06,OPABYN07,OPABYN08,OPABYN09:      
                             OPABYN10,OPABUDD1,OPABUDT1,OPABSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPATR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRATRA1;OPABUNIQ,OPABTYPE,OPABVAL1,OPABVAL2,OPABVAL3:      
                             OPABVAL4,OPABCOD1,OPABCOD2,OPABCOD3,OPABCOD4:      
                             OPABTXT1,OPABTXT2,OPABTXT3,OPABTXT4,OPABYN01:      
                             OPABYN02,OPABYN03,OPABYN04,OPABDELT,OPABCUID:      
                             OPABCDAT,OPABCTIM,OPABUUID,OPABUDAT,OPABUTIM:      
                             OPABFUID,OPABFDAT,OPABFTIM,OPABCOD5,OPABCOD6:      
                             OPABYN05,OPABYN06,OPABYN07,OPABYN08,OPABYN09:      
                             OPABYN10,OPABUDD1,OPABUDT1,OPABSPAR                
          RETURN
.
WROPATR1  RESET     KEY13                                                       
          WRITE     OPRATRA1,KEY13;OPABUNIQ,OPABTYPE,OPABVAL1,OPABVAL2,OPABVAL3:
                                   OPABVAL4,OPABCOD1,OPABCOD2,OPABCOD3,OPABCOD4:
                                   OPABTXT1,OPABTXT2,OPABTXT3,OPABTXT4,OPABYN01:
                                   OPABYN02,OPABYN03,OPABYN04,OPABDELT,OPABCUID:
                                   OPABCDAT,OPABCTIM,OPABUUID,OPABUDAT,OPABUTIM:
                                   OPABFUID,OPABFDAT,OPABFTIM,OPABCOD5,OPABCOD6:
                                   OPABYN05,OPABYN06,OPABYN07,OPABYN08,OPABYN09:
                                   OPABYN10,OPABUDD1,OPABUDT1,OPABSPAR          
          RETURN
.
DEOPATR1  RESET     KEY13                                                       
          DELETE    OPRATRA1,KEY13                                              
          RETURN
.
