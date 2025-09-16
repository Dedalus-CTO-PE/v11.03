.
. VISMDTIO    
. --------
. Filename     : vismdtaf.dat
.
RSVSMDT1  RESET     KEY17                                                       
          READ      VISMDTA1,KEY17;;                                            
          RETURN
.
RAVSMDT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      VISMDTA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSMDT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      VISMDTA1,KEY17;VSMDVISN,VSMDTYPE,VSMDNOTE,VSMDDATE,VSMDTIME:
                                   VSMDUSER,VSMDOCCG,VSMDDELT,VSMDDDAT,VSMDDTIM:
                                   VSMDDUSE,VSMDDOCC,VSMDSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSMDT1  MOVE      ZERO,OVRCD                                                  
          READKS    VISMDTA1;VSMDVISN,VSMDTYPE,VSMDNOTE,VSMDDATE,VSMDTIME:      
                             VSMDUSER,VSMDOCCG,VSMDDELT,VSMDDDAT,VSMDDTIM:      
                             VSMDDUSE,VSMDDOCC,VSMDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSMDT1  MOVE      ZERO,OVRCD                                                  
          READKP    VISMDTA1;VSMDVISN,VSMDTYPE,VSMDNOTE,VSMDDATE,VSMDTIME:      
                             VSMDUSER,VSMDOCCG,VSMDDELT,VSMDDDAT,VSMDDTIM:      
                             VSMDDUSE,VSMDDOCC,VSMDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSMDT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    VISMDTA1;VSMDVISN,VSMDTYPE,VSMDNOTE,VSMDDATE,VSMDTIME:      
                             VSMDUSER,VSMDOCCG,VSMDDELT,VSMDDDAT,VSMDDTIM:      
                             VSMDDUSE,VSMDDOCC,VSMDSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSMDT1  RESET     KEY17                                                       
          WRITE     VISMDTA1,KEY17;VSMDVISN,VSMDTYPE,VSMDNOTE,VSMDDATE,VSMDTIME:
                                   VSMDUSER,VSMDOCCG,VSMDDELT,VSMDDDAT,VSMDDTIM:
                                   VSMDDUSE,VSMDDOCC,VSMDSPAR                   
          RETURN
.
DEVSMDT1  RESET     KEY17                                                       
          DELETE    VISMDTA1,KEY17                                              
          RETURN
.
RLVSMDT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     VISMDTA1,KEY17;VSMDVISN,VSMDTYPE,VSMDNOTE,VSMDDATE,VSMDTIME:
                                   VSMDUSER,VSMDOCCG,VSMDDELT,VSMDDDAT,VSMDDTIM:
                                   VSMDDUSE,VSMDDOCC,VSMDSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSMDT1  MOVE      ZERO,OVRCD                                                  
          READLKS   VISMDTA1;VSMDVISN,VSMDTYPE,VSMDNOTE,VSMDDATE,VSMDTIME:      
                             VSMDUSER,VSMDOCCG,VSMDDELT,VSMDDDAT,VSMDDTIM:      
                             VSMDDUSE,VSMDDOCC,VSMDSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSMDT1  MOVE      ZERO,OVRCD                                                  
          READLKP   VISMDTA1;VSMDVISN,VSMDTYPE,VSMDNOTE,VSMDDATE,VSMDTIME:      
                             VSMDUSER,VSMDOCCG,VSMDDELT,VSMDDDAT,VSMDDTIM:      
                             VSMDDUSE,VSMDDOCC,VSMDSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSMDT1  RESET     KEY17                                                       
          UNLOCK    VISMDTA1                                                    
          RETURN
.
